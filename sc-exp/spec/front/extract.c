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
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
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
  init_constant_terms();
}
ATerm term_g_34;
ATerm term_p_33;
ATerm term_x_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_y_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_f_27;
ATerm term_d_27;
ATerm term_x_26;
ATerm term_v_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_x_24;
ATerm term_s_24;
ATerm term_q_24;
ATerm term_n_24;
ATerm term_l_24;
ATerm term_j_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_z_22;
ATerm term_r_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_f_22;
ATerm term_v_21;
ATerm term_t_21;
ATerm term_u_20;
ATerm term_r_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_d_20;
ATerm term_s_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_a_19;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_r_11;
ATerm term_m_10;
ATerm term_d_10;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_f_9;
ATerm term_q_7;
ATerm term_f_7;
ATerm term_d_7;
ATerm term_v_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_k_6;
void init_constant_terms (void)
{
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Op_2, term_w_11, (ATerm) ATempty);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_ConstType_1, term_x_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym__2, term_k_20, term_s_19);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_s_19);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_19);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym__2, term_e_26, term_t_15);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_t_15);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym__2, term_e_30, term_f_30);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym__2, term_c_32, term_t_15);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym__2, term_f_32, term_t_15);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym__2, term_y_28, term_t_15);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym__3, term_e_30, term_f_30, (ATerm) ATempty);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm MissingDef_0 (ATerm);
ATerm MissingDefMod_0 (ATerm);
ATerm MissingDefs_0 (ATerm);
ATerm NoMissingDefs_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm giving_up_0 (ATerm);
ATerm error_0 (ATerm);
ATerm DefinitionExists_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm x_86 (ATerm), ATerm y_86 (ATerm));
ATerm SDef_3 (ATerm, ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm r_88 (ATerm));
ATerm Let_2 (ATerm, ATerm a_86 (ATerm), ATerm b_86 (ATerm));
ATerm sboundin_3 (ATerm, ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm h_96 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm l_111 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_111 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm y_96 (ATerm), ATerm z_96 (ATerm));
ATerm alltd_1 (ATerm, ATerm s_98 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm j_96 (ATerm), ATerm k_96 (ATerm));
ATerm substitute_1 (ATerm, ATerm l_96 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm l_88 (ATerm), ATerm m_88 (ATerm));
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm OverloadedDef_0 (ATerm);
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm p_83 (ATerm), ATerm q_83 (ATerm));
ATerm Prim_2 (ATerm, ATerm e_87 (ATerm), ATerm f_87 (ATerm));
ATerm Explode_2 (ATerm, ATerm i_83 (ATerm), ATerm j_83 (ATerm));
ATerm Op_2 (ATerm, ATerm g_83 (ATerm), ATerm h_83 (ATerm));
ATerm pat_td_1 (ATerm, ATerm a_126 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm w_101 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm i_113 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm m_83 (ATerm), ATerm n_83 (ATerm));
ATerm Con_3 (ATerm, ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm a_84 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm k_86 (ATerm), ATerm l_86 (ATerm));
ATerm oncetd_1 (ATerm, ATerm e_98 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm a_97 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm c_101 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm c_108 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm u_101 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm diff_1 (ATerm, ATerm w_104 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm));
ATerm zip_1 (ATerm, ATerm r_101 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm w_125 (ATerm), ATerm x_125 (ATerm), ATerm y_125 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm x_113 (ATerm), ATerm y_113 (ATerm));
ATerm for_3 (ATerm, ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm c_114 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm h_125 (ATerm), ATerm i_125 (ATerm), ATerm j_125 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm y_108 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm e_105 (ATerm), ATerm f_105 (ATerm));
ATerm union_1 (ATerm, ATerm a_105 (ATerm));
ATerm union_0 (ATerm);
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm a_109 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm r_107 (ATerm));
ATerm length_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm e_82 (ATerm));
ATerm Cons_2 (ATerm, ATerm a_82 (ATerm), ATerm b_82 (ATerm));
ATerm Specification_1 (ATerm, ATerm j_82 (ATerm));
ATerm _2 (ATerm, ATerm r_80 (ATerm), ATerm s_80 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_103 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm r_119 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm n_118 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm p_121 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm z_117 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm m_100 (ATerm), ATerm n_100 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm n_107 (ATerm), ATerm o_107 (ATerm));
ATerm crush_2 (ATerm, ATerm l_105 (ATerm), ATerm m_105 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm q_119 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm n_122 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_124 (ATerm));
ATerm map_1 (ATerm, ATerm b_103 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_124 (ATerm));
ATerm Program_1 (ATerm, ATerm h_94 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm i_94 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_103 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_123 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm s_99 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_124 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_124 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_124 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm s_122 (ATerm));
ATerm iowrap_4 (ATerm, ATerm e_122 (ATerm), ATerm f_122 (ATerm), ATerm g_122 (ATerm), ATerm h_122 (ATerm));
ATerm iowrap_3 (ATerm, ATerm y_121 (ATerm), ATerm z_121 (ATerm), ATerm a_122 (ATerm));
ATerm iowrap_2 (ATerm, ATerm w_121 (ATerm), ATerm x_121 (ATerm));
ATerm iowrap_1 (ATerm, ATerm t_121 (ATerm));
ATerm extract_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm n_3 = NULL;
  n_3 = t;
  m_3 :
  if(((ATgetType(n_3) == AT_LIST) && ATisEmpty(n_3)))
    {
      {
        ATerm p_4 = NULL,r_4 = NULL;
        ATerm j_6;
        j_6 = t;
        {
          ATerm q_4 = NULL;
          t = SSLgetAnnotations(not_null(n_3));
          {
            q_4 = t;
            if(((p_4 != NULL) && (p_4 != q_4)))
              _fail(q_4);
            else
              p_4 = q_4;
          }
        }
        t = j_6;
        {
          ATerm t_5 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(p_4));
          {
            t_5 = t;
            if(((r_4 != NULL) && (r_4 != t_5)))
              _fail(t_5);
            else
              r_4 = t_5;
          }
          t = not_null(r_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDef_0 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL;
  p_6 = t;
  l_6 :
  if(match_cons(p_6, sym__2))
    {
      q_6 = ATgetArgument(p_6, 0);
      r_6 = ATgetArgument(p_6, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_6), not_null(r_6)), term_m_6), not_null(q_6)), term_k_6);
        t = error_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDefMod_0 (ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL;
  y_6 = t;
  w_6 :
  if(match_cons(y_6, sym__2))
    {
      z_6 = ATgetArgument(y_6, 0);
      c_7 = ATgetArgument(y_6, 1);
      x_6 :
      if(match_cons(z_6, sym_Mod_2))
        {
          a_7 = ATgetArgument(z_6, 0);
          b_7 = ATgetArgument(z_6, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_6), not_null(c_7)), term_m_6), not_null(b_7)), term_o_6), not_null(a_7)), term_k_6);
            t = error_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDefs_0 (ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL;
  k_7 = t;
  i_7 :
  if(match_cons(k_7, sym__2))
    {
      l_7 = ATgetArgument(k_7, 0);
      m_7 = ATgetArgument(k_7, 1);
      j_7 :
      if(((ATgetType(m_7) == AT_LIST) && !(ATisEmpty(m_7))))
        {
          n_7 = ATgetFirst((ATermList) m_7);
          o_7 = (ATerm) ATgetNext((ATermList) m_7);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(o_7)), not_null(n_7));
            {
              ATerm c_0 (ATerm t)
              {
                ATerm s_6 = t;
                int t_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    ;
                    LocalPopChoice(t_6);
                  }
                else
                  {
                    t = s_6;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, c_0);
            }
            t = not_null(l_7);
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NoMissingDefs_0 (ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL;
  w_7 = t;
  u_7 :
  if(match_cons(w_7, sym__2))
    {
      x_7 = ATgetArgument(w_7, 0);
      y_7 = ATgetArgument(w_7, 1);
      v_7 :
      if(((ATgetType(y_7) == AT_LIST) && ATisEmpty(y_7)))
        {
          t = not_null(x_7);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm u_6;
  u_6 = t;
  {
    t = error_0(t);
    {
      t = term_v_6;
      t = exit_0(t);
    }
  }
  t = u_6;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_d_7);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm e_7;
  e_7 = t;
  {
    ATerm c_8 = NULL;
    ATerm d_8 = NULL;
    d_8 = t;
    if(((c_8 != NULL) && (c_8 != d_8)))
      _fail(d_8);
    else
      c_8 = d_8;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, not_null(c_8));
      t = printnl_0(t);
    }
  }
  t = e_7;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
  q_8 = t;
  o_8 :
  if(match_cons(q_8, sym__2))
    {
      r_8 = ATgetArgument(q_8, 0);
      s_8 = ATgetArgument(q_8, 1);
      p_8 :
      if(match_int(s_8, 0))
        {
          ATerm g_7 = t;
          int h_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
              t = not_null(r_8);
              {
                t = Arities_0(t);
                {
                  u_8 = t;
                  j_8 :
                  if(((ATgetType(u_8) == AT_LIST) && !(ATisEmpty(u_8))))
                    {
                      v_8 = ATgetFirst((ATermList) u_8);
                      w_8 = (ATerm) ATgetNext((ATermList) u_8);
                      k_8 :
                      if(((ATgetType(w_8) == AT_LIST) && !(ATisEmpty(w_8))))
                        {
                          x_8 = ATgetFirst((ATermList) w_8);
                          y_8 = (ATerm) ATgetNext((ATermList) w_8);
                          {
                            ATerm p_7 = t;
                            if((PushChoice() == 0))
                              {
                                ATerm f_0 (ATerm t)
                                {
                                  ATerm z_8 = NULL;
                                  z_8 = t;
                                  i_8 :
                                  if(!(match_int(z_8, 0)))
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = fetch_1(t, f_0);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              {
                                t = p_7;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_8)), term_q_7);
                              {
                                t = error_0(t);
                                t = giving_up_0(t);
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
              ;
              LocalPopChoice(h_7);
            }
          else
            {
              t = g_7;
              {
                ATerm b_9 = NULL;
                ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
                t = not_null(r_8);
                {
                  t = Arities_0(t);
                  {
                    c_9 = t;
                    m_8 :
                    if(((ATgetType(c_9) == AT_LIST) && !(ATisEmpty(c_9))))
                      {
                        d_9 = ATgetFirst((ATermList) c_9);
                        e_9 = (ATerm) ATgetNext((ATermList) c_9);
                        n_8 :
                        if(((ATgetType(e_9) == AT_LIST) && ATisEmpty(e_9)))
                          {
                            {
                              if(((b_9 != NULL) && (b_9 != d_9)))
                                _fail(d_9);
                              else
                                b_9 = d_9;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_8), not_null(b_9));
                                t = Definitions_0(t);
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_8), not_null(b_9));
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
ATerm Rec_2 (ATerm t, ATerm x_86 (ATerm), ATerm y_86 (ATerm))
{
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL;
  p_9 = t;
  o_9 :
  if(match_cons(p_9, sym_Rec_2))
    {
      q_9 = ATgetArgument(p_9, 0);
      r_9 = ATgetArgument(p_9, 1);
      {
        ATerm v_9 = NULL,x_9 = NULL;
        ATerm w_9 = NULL;
        t = SSLgetAnnotations(not_null(p_9));
        {
          w_9 = t;
          if(((v_9 != NULL) && (v_9 != w_9)))
            _fail(w_9);
          else
            v_9 = w_9;
        }
        {
          t = not_null(q_9);
          {
            ATerm z_9 = NULL;
            t = x_86(t);
            {
              x_9 = t;
              {
                t = not_null(r_9);
                {
                  ATerm b_10 = NULL;
                  t = y_86(t);
                  {
                    z_9 = t;
                    {
                      ATerm c_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(x_9), not_null(z_9)), not_null(v_9));
                      {
                        c_10 = t;
                        if(((b_10 != NULL) && (b_10 != c_10)))
                          _fail(c_10);
                        else
                          b_10 = c_10;
                      }
                      t = not_null(b_10);
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
ATerm SDef_3 (ATerm t, ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm r_88 (ATerm))
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL;
  p_10 = t;
  o_10 :
  if(match_cons(p_10, sym_SDef_3))
    {
      q_10 = ATgetArgument(p_10, 0);
      r_10 = ATgetArgument(p_10, 1);
      s_10 = ATgetArgument(p_10, 2);
      {
        ATerm x_10 = NULL,z_10 = NULL;
        ATerm y_10 = NULL;
        t = SSLgetAnnotations(not_null(p_10));
        {
          y_10 = t;
          if(((x_10 != NULL) && (x_10 != y_10)))
            _fail(y_10);
          else
            x_10 = y_10;
        }
        {
          t = not_null(q_10);
          {
            ATerm b_11 = NULL;
            t = p_88(t);
            {
              z_10 = t;
              {
                t = not_null(r_10);
                {
                  ATerm d_11 = NULL;
                  t = q_88(t);
                  {
                    b_11 = t;
                    {
                      t = not_null(s_10);
                      {
                        ATerm f_11 = NULL;
                        t = r_88(t);
                        {
                          d_11 = t;
                          {
                            ATerm g_11 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(z_10), not_null(b_11), not_null(d_11)), not_null(x_10));
                            {
                              g_11 = t;
                              if(((f_11 != NULL) && (f_11 != g_11)))
                                _fail(g_11);
                              else
                                f_11 = g_11;
                            }
                            t = not_null(f_11);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm a_86 (ATerm), ATerm b_86 (ATerm))
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
  t_11 = t;
  s_11 :
  if(match_cons(t_11, sym_Let_2))
    {
      u_11 = ATgetArgument(t_11, 0);
      v_11 = ATgetArgument(t_11, 1);
      {
        ATerm z_11 = NULL,b_12 = NULL;
        ATerm a_12 = NULL;
        t = SSLgetAnnotations(not_null(t_11));
        {
          a_12 = t;
          if(((z_11 != NULL) && (z_11 != a_12)))
            _fail(a_12);
          else
            z_11 = a_12;
        }
        {
          t = not_null(u_11);
          {
            ATerm d_12 = NULL;
            t = a_86(t);
            {
              b_12 = t;
              {
                t = not_null(v_11);
                {
                  ATerm f_12 = NULL;
                  t = b_86(t);
                  {
                    d_12 = t;
                    {
                      ATerm g_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(b_12), not_null(d_12)), not_null(z_11));
                      {
                        g_12 = t;
                        if(((f_12 != NULL) && (f_12 != g_12)))
                          _fail(g_12);
                        else
                          f_12 = g_12;
                      }
                      t = not_null(f_12);
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
ATerm sboundin_3 (ATerm t, ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm h_96 (ATerm))
{
  ATerm r_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, f_96, f_96);
      ;
      LocalPopChoice(s_7);
    }
  else
    {
      t = r_7;
      {
        ATerm t_7 = t;
        int z_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, h_96, h_96, f_96);
            ;
            LocalPopChoice(z_7);
          }
        else
          {
            t = t_7;
            t = Rec_2(t, h_96, f_96);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL;
  o_12 = t;
  n_12 :
  if(match_cons(o_12, sym_Rec_2))
    {
      p_12 = ATgetArgument(o_12, 0);
      q_12 = ATgetArgument(o_12, 1);
      t = (ATerm) ATinsert(ATempty, not_null(p_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
  y_12 = t;
  x_12 :
  if(match_cons(y_12, sym_SDef_3))
    {
      z_12 = ATgetArgument(y_12, 0);
      a_13 = ATgetArgument(y_12, 1);
      b_13 = ATgetArgument(y_12, 2);
      {
        t = not_null(a_13);
        {
          ATerm j_0 (ATerm t)
          {
            ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
            f_13 = t;
            w_12 :
            if(match_cons(f_13, sym_VarDec_2))
              {
                g_13 = ATgetArgument(f_13, 0);
                h_13 = ATgetArgument(f_13, 1);
                t = not_null(g_13);
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
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
  p_13 = t;
  o_13 :
  if(match_cons(p_13, sym_Let_2))
    {
      q_13 = ATgetArgument(p_13, 0);
      r_13 = ATgetArgument(p_13, 1);
      {
        t = not_null(q_13);
        {
          ATerm l_0 (ATerm t)
          {
            ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
            u_13 = t;
            n_13 :
            if(match_cons(u_13, sym_SDef_3))
              {
                v_13 = ATgetArgument(u_13, 0);
                w_13 = ATgetArgument(u_13, 1);
                x_13 = ATgetArgument(u_13, 2);
                t = not_null(v_13);
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
ATerm crush_3 (ATerm t, ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm))
{
  ATerm h_14 = NULL;
  ATerm j_14 = NULL;
  h_14 = t;
  {
    ATerm k_14 = NULL;
    ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
    t = not_null(h_14);
    {
      k_14 = t;
      {
        t = SSL_explode_term(not_null(k_14));
        {
          m_14 = t;
          g_14 :
          if(match_cons(m_14, sym__2))
            {
              n_14 = ATgetArgument(m_14, 0);
              o_14 = ATgetArgument(m_14, 1);
              if(((j_14 != NULL) && (j_14 != o_14)))
                _fail(o_14);
              else
                j_14 = o_14;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_14);
      t = foldr_3(t, n_105, o_105, p_105);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm l_111 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_111 (ATerm))
{
  ATerm v_14 (ATerm t)
  {
    ATerm o_0 (ATerm t)
    {
      ATerm a_8 = t;
      int b_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_111(t);
          ;
          LocalPopChoice(b_8);
        }
      else
        {
          t = a_8;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm q_0 (ATerm t)
    {
      ATerm e_8 = t;
      int f_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_14 = NULL;
          ATerm g_8;
          g_8 = t;
          {
            ATerm u_14 = NULL;
            t = k_111(t);
            {
              u_14 = t;
              if(((t_14 != NULL) && (t_14 != u_14)))
                _fail(u_14);
              else
                t_14 = u_14;
            }
          }
          t = g_8;
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = not_null(t_14);
                return(t);
              }
              t = split_2(t, v_14, t_0);
              t = diff_1(t, m_111);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = l_111(t, r_0, v_14, s_0);
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, u_0, union_0, _id);
            }
          }
          ;
          LocalPopChoice(f_8);
        }
      else
        {
          t = e_8;
          {
            ATerm v_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, v_0, union_0, v_14);
          }
        }
      return(t);
    }
    t = split_2(t, o_0, q_0);
    t = union_0(t);
    return(t);
  }
  t = v_14(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
    e_15 = t;
    z_14 :
    if(match_cons(e_15, sym_Call_2))
      {
        f_15 = ATgetArgument(e_15, 0);
        h_15 = ATgetArgument(e_15, 1);
        a_15 :
        if(match_cons(f_15, sym_SVar_1))
          {
            g_15 = ATgetArgument(f_15, 0);
            {
              ATerm k_15 = NULL;
              ATerm l_15 = NULL;
              t = not_null(h_15);
              {
                t = length_0(t);
                {
                  l_15 = t;
                  if(((k_15 != NULL) && (k_15 != l_15)))
                    _fail(l_15);
                  else
                    k_15 = l_15;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(g_15), not_null(k_15)));
            }
          }
        else
          {
            _fail(t);
          }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm x_0 (ATerm t)
  {
    ATerm h_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(l_8);
      }
    else
      {
        t = h_8;
        {
          ATerm t_8 = t;
          int a_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(a_9);
            }
          else
            {
              t = t_8;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
    m_15 = t;
    c_15 :
    if(match_cons(m_15, sym__2))
      {
        n_15 = ATgetArgument(m_15, 0);
        q_15 = ATgetArgument(m_15, 1);
        d_15 :
        if(match_cons(n_15, sym__2))
          {
            o_15 = ATgetArgument(n_15, 0);
            p_15 = ATgetArgument(n_15, 1);
            if(((o_15 != NULL) && (o_15 != q_15)))
              _fail(q_15);
            else
              o_15 = q_15;
          }
        else
          {
            _fail(t);
          }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = free_vars2_4(t, w_0, x_0, sboundin_3, y_0);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm c_16 = NULL;
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  c_16 = t;
  {
    ATerm h_16 = NULL;
    ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL;
    t = not_null(c_16);
    {
      h_16 = t;
      {
        t = SSL_explode_term(not_null(h_16));
        {
          j_16 = t;
          y_15 :
          if(match_cons(j_16, sym__2))
            {
              k_16 = ATgetArgument(j_16, 0);
              l_16 = ATgetArgument(j_16, 1);
              z_15 :
              if(match_string(k_16, ""))
                {
                  a_16 :
                  if(((ATgetType(l_16) == AT_LIST) && !(ATisEmpty(l_16))))
                    {
                      m_16 = ATgetFirst((ATermList) l_16);
                      n_16 = (ATerm) ATgetNext((ATermList) l_16);
                      b_16 :
                      if(((ATgetType(n_16) == AT_LIST) && !(ATisEmpty(n_16))))
                        {
                          o_16 = ATgetFirst((ATermList) n_16);
                          p_16 = (ATerm) ATgetNext((ATermList) n_16);
                          {
                            if(((e_16 != NULL) && (e_16 != m_16)))
                              _fail(m_16);
                            else
                              e_16 = m_16;
                            {
                              if(((g_16 != NULL) && (g_16 != o_16)))
                                _fail(o_16);
                              else
                                g_16 = o_16;
                              if(((f_16 != NULL) && (f_16 != p_16)))
                                _fail(p_16);
                              else
                                f_16 = p_16;
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
      }
    }
    t = not_null(g_16);
  }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = term_f_9;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm v_16 = NULL,x_16 = NULL;
    ATerm g_9;
    g_9 = t;
    {
      ATerm w_16 = NULL;
      t = Fst_0(t);
      {
        w_16 = t;
        if(((v_16 != NULL) && (v_16 != w_16)))
          _fail(w_16);
        else
          v_16 = w_16;
      }
    }
    t = g_9;
    {
      ATerm y_16 = NULL;
      t = Snd_0(t);
      {
        y_16 = t;
        if(((x_16 != NULL) && (x_16 != y_16)))
          _fail(y_16);
        else
          x_16 = y_16;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(v_16), not_null(x_16));
    }
    return(t);
  }
  t = foldr_2(t, z_0, a_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
  f_17 = t;
  c_17 :
  if(match_cons(f_17, sym_Call_2))
    {
      g_17 = ATgetArgument(f_17, 0);
      i_17 = ATgetArgument(f_17, 1);
      d_17 :
      if(match_cons(g_17, sym_SVar_1))
        {
          h_17 = ATgetArgument(g_17, 0);
          e_17 :
          if(((ATgetType(i_17) == AT_LIST) && ATisEmpty(i_17)))
            {
              t = not_null(h_17);
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
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
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
  o_17 = t;
  m_17 :
  if(match_cons(o_17, sym__2))
    {
      p_17 = ATgetArgument(o_17, 0);
      q_17 = ATgetArgument(o_17, 1);
      n_17 :
      if(((ATgetType(q_17) == AT_LIST) && !(ATisEmpty(q_17))))
        {
          r_17 = ATgetFirst((ATermList) q_17);
          s_17 = (ATerm) ATgetNext((ATermList) q_17);
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_17), not_null(s_17));
        }
      else
        {
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
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
  a_18 = t;
  x_17 :
  if(match_cons(a_18, sym__2))
    {
      b_18 = ATgetArgument(a_18, 0);
      c_18 = ATgetArgument(a_18, 1);
      y_17 :
      if(((ATgetType(c_18) == AT_LIST) && !(ATisEmpty(c_18))))
        {
          d_18 = ATgetFirst((ATermList) c_18);
          g_18 = (ATerm) ATgetNext((ATermList) c_18);
          z_17 :
          if(match_cons(d_18, sym__2))
            {
              e_18 = ATgetArgument(d_18, 0);
              f_18 = ATgetArgument(d_18, 1);
              {
                ATerm i_18 = NULL;
                if(((b_18 != NULL) && (b_18 != e_18)))
                  _fail(e_18);
                else
                  b_18 = e_18;
                {
                  if(((i_18 != NULL) && (i_18 != f_18)))
                    _fail(f_18);
                  else
                    i_18 = f_18;
                  t = not_null(i_18);
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
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm y_96 (ATerm), ATerm z_96 (ATerm))
{
  ATerm o_18 = NULL;
  ATerm q_18 = NULL,r_18 = NULL;
  o_18 = t;
  {
    ATerm s_18 = NULL;
    t = not_null(o_18);
    {
      ATerm t_18 = NULL;
      t = y_96(t);
      {
        s_18 = t;
        {
          if(((q_18 != NULL) && (q_18 != s_18)))
            _fail(s_18);
          else
            q_18 = s_18;
          {
            t = z_96(t);
            {
              t_18 = t;
              if(((r_18 != NULL) && (r_18 != t_18)))
                _fail(t_18);
              else
                r_18 = t_18;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_18), not_null(r_18));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm s_98 (ATerm))
{
  ATerm x_18 (ATerm t)
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_98(t);
        ;
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        t = _all(t, x_18);
      }
    return(t);
  }
  t = x_18(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
  c_19 = t;
  b_19 :
  if(match_cons(c_19, sym__2))
    {
      d_19 = ATgetArgument(c_19, 0);
      e_19 = ATgetArgument(c_19, 1);
      {
        ATerm h_19 = NULL;
        if(((h_19 != NULL) && (h_19 != e_19)))
          _fail(e_19);
        else
          h_19 = e_19;
      }
    }
  else
    {
      if(match_cons(c_19, sym__3))
        {
          d_19 = ATgetArgument(c_19, 0);
          e_19 = ATgetArgument(c_19, 1);
          f_19 = ATgetArgument(c_19, 2);
          {
            ATerm n_19 = NULL;
            ATerm o_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_19), not_null(e_19));
            {
              t = zip_1(t, _id);
              {
                o_19 = t;
                if(((n_19 != NULL) && (n_19 != o_19)))
                  _fail(o_19);
                else
                  n_19 = o_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_19), not_null(f_19));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm j_96 (ATerm), ATerm k_96 (ATerm))
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
  t = subs_args_0(t);
  {
    u_19 = t;
    t_19 :
    if(match_cons(u_19, sym__2))
      {
        v_19 = ATgetArgument(u_19, 0);
        w_19 = ATgetArgument(u_19, 1);
        {
          t = not_null(w_19);
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = not_null(v_19);
                return(t);
              }
              t = SubsVar_2(t, j_96, c_1);
              t = k_96(t);
              return(t);
            }
            t = alltd_1(t, b_1);
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
ATerm substitute_1 (ATerm t, ATerm l_96 (ATerm))
{
  t = substitute_2(t, l_96, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm l_88 (ATerm), ATerm m_88 (ATerm))
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL;
  g_20 = t;
  f_20 :
  if(match_cons(g_20, sym_VarDec_2))
    {
      h_20 = ATgetArgument(g_20, 0);
      i_20 = ATgetArgument(g_20, 1);
      {
        ATerm m_20 = NULL,o_20 = NULL;
        ATerm n_20 = NULL;
        t = SSLgetAnnotations(not_null(g_20));
        {
          n_20 = t;
          if(((m_20 != NULL) && (m_20 != n_20)))
            _fail(n_20);
          else
            m_20 = n_20;
        }
        {
          t = not_null(h_20);
          {
            ATerm q_20 = NULL;
            t = l_88(t);
            {
              o_20 = t;
              {
                t = not_null(i_20);
                {
                  ATerm s_20 = NULL;
                  t = m_88(t);
                  {
                    q_20 = t;
                    {
                      ATerm t_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(o_20), not_null(q_20)), not_null(m_20));
                      {
                        t_20 = t;
                        if(((s_20 != NULL) && (s_20 != t_20)))
                          _fail(t_20);
                        else
                          s_20 = t_20;
                      }
                      t = not_null(s_20);
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
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL;
  n_21 = t;
  l_21 :
  if(((ATgetType(n_21) == AT_LIST) && !(ATisEmpty(n_21))))
    {
      o_21 = ATgetFirst((ATermList) n_21);
      s_21 = (ATerm) ATgetNext((ATermList) n_21);
      m_21 :
      if(match_cons(o_21, sym_SDef_3))
        {
          p_21 = ATgetArgument(o_21, 0);
          q_21 = ATgetArgument(o_21, 1);
          r_21 = ATgetArgument(o_21, 2);
          {
            ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,u_22 = NULL;
            ATerm l_9;
            l_9 = t;
            {
              ATerm a_22 = NULL;
              t = not_null(q_21);
              {
                ATerm g_22 = NULL;
                ATerm d_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, d_1);
                {
                  a_22 = t;
                  {
                    if(((x_21 != NULL) && (x_21 != a_22)))
                      _fail(a_22);
                    else
                      x_21 = a_22;
                    {
                      t = not_null(x_21);
                      {
                        ATerm t_22 = NULL;
                        ATerm e_1 (ATerm t)
                        {
                          ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
                          b_22 = t;
                          c_21 :
                          if(match_cons(b_22, sym_VarDec_2))
                            {
                              c_22 = ATgetArgument(b_22, 0);
                              d_22 = ATgetArgument(b_22, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_22)), (ATerm) ATempty);
                            }
                          else
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        t = map_1(t, e_1);
                        {
                          g_22 = t;
                          {
                            if(((y_21 != NULL) && (y_21 != g_22)))
                              _fail(g_22);
                            else
                              y_21 = g_22;
                            {
                              t = not_null(n_21);
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
                                  h_22 = t;
                                  i_21 :
                                  if(match_cons(h_22, sym_SDef_3))
                                    {
                                      i_22 = ATgetArgument(h_22, 0);
                                      j_22 = ATgetArgument(h_22, 1);
                                      k_22 = ATgetArgument(h_22, 2);
                                      {
                                        ATerm n_22 = NULL;
                                        ATerm s_22 = NULL;
                                        t = not_null(j_22);
                                        {
                                          ATerm g_1 (ATerm t)
                                          {
                                            ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL;
                                            o_22 = t;
                                            g_21 :
                                            if(match_cons(o_22, sym_VarDec_2))
                                              {
                                                p_22 = ATgetArgument(o_22, 0);
                                                q_22 = ATgetArgument(o_22, 1);
                                                t = not_null(p_22);
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          t = map_1(t, g_1);
                                          {
                                            s_22 = t;
                                            if(((n_22 != NULL) && (n_22 != s_22)))
                                              _fail(s_22);
                                            else
                                              n_22 = s_22;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(n_22), not_null(y_21), not_null(k_22));
                                          t = ssubs_0(t);
                                        }
                                      }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, f_1);
                                {
                                  t_22 = t;
                                  if(((z_21 != NULL) && (z_21 != t_22)))
                                    _fail(t_22);
                                  else
                                    z_21 = t_22;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = l_9;
            {
              ATerm v_22 = NULL;
              t = not_null(z_21);
              {
                t = choices_0(t);
                {
                  v_22 = t;
                  if(((u_22 != NULL) && (u_22 != v_22)))
                    _fail(v_22);
                  else
                    u_22 = v_22;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(p_21), not_null(x_21), not_null(u_22));
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
ATerm JoinDefs1_0 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL;
  i_23 = t;
  g_23 :
  if(((ATgetType(i_23) == AT_LIST) && !(ATisEmpty(i_23))))
    {
      j_23 = ATgetFirst((ATermList) i_23);
      k_23 = (ATerm) ATgetNext((ATermList) i_23);
      h_23 :
      if(((ATgetType(k_23) == AT_LIST) && ATisEmpty(k_23)))
        {
          t = not_null(j_23);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm joindefs_0 (ATerm t)
{
  ATerm m_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      ;
      LocalPopChoice(n_9);
    }
  else
    {
      t = m_9;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL;
  r_23 = t;
  p_23 :
  if(match_cons(r_23, sym__2))
    {
      s_23 = ATgetArgument(r_23, 0);
      v_23 = ATgetArgument(r_23, 1);
      q_23 :
      if(match_cons(s_23, sym__2))
        {
          t_23 = ATgetArgument(s_23, 0);
          u_23 = ATgetArgument(s_23, 1);
          {
            ATerm z_23 = NULL;
            ATerm a_24 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_23), not_null(u_23));
            {
              t = Definitions_0(t);
              {
                a_24 = t;
                if(((z_23 != NULL) && (z_23 != a_24)))
                  _fail(a_24);
                else
                  z_23 = a_24;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_23), not_null(v_23));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Expl_0 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
  v_24 = t;
  t_24 :
  if(match_cons(v_24, sym_ExplodeCong_2))
    {
      w_24 = ATgetArgument(v_24, 0);
      u_24 = ATgetArgument(v_24, 1);
      {
        ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL;
        ATerm d_25 = NULL;
        ATerm e_25 = NULL;
        t = new_0(t);
        {
          d_25 = t;
          {
            if(((z_24 != NULL) && (z_24 != d_25)))
              _fail(d_25);
            else
              z_24 = d_25;
            {
              ATerm f_25 = NULL;
              t = new_0(t);
              {
                e_25 = t;
                {
                  if(((a_25 != NULL) && (a_25 != e_25)))
                    _fail(e_25);
                  else
                    a_25 = e_25;
                  {
                    ATerm g_25 = NULL;
                    t = new_0(t);
                    {
                      f_25 = t;
                      {
                        if(((b_25 != NULL) && (b_25 != f_25)))
                          _fail(f_25);
                        else
                          b_25 = f_25;
                        {
                          t = new_0(t);
                          {
                            g_25 = t;
                            if(((c_25 != NULL) && (c_25 != g_25)))
                              _fail(g_25);
                            else
                              c_25 = g_25;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(c_25)), not_null(b_25)), not_null(a_25)), not_null(z_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_25)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(w_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_25))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(u_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(b_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_25))))), (ATerm) ATmakeAppl(sym_Prim_2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_25))), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_25)))))));
      }
    }
  else
    {
      if(match_cons(v_24, sym_Build_1))
        {
          w_24 = ATgetArgument(v_24, 0);
          {
            ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
            ATerm m_25 = NULL;
            ATerm q_25 = NULL;
            t = new_0(t);
            {
              m_25 = t;
              {
                if(((k_25 != NULL) && (k_25 != m_25)))
                  _fail(m_25);
                else
                  k_25 = m_25;
                {
                  t = not_null(w_24);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL;
                      n_25 = t;
                      m_24 :
                      if(match_cons(n_25, sym_Explode_2))
                        {
                          o_25 = ATgetArgument(n_25, 0);
                          p_25 = ATgetArgument(n_25, 1);
                          {
                            if(((i_25 != NULL) && (i_25 != o_25)))
                              _fail(o_25);
                            else
                              i_25 = o_25;
                            {
                              if(((j_25 != NULL) && (j_25 != p_25)))
                                _fail(p_25);
                              else
                                j_25 = p_25;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_25));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, h_1);
                    {
                      q_25 = t;
                      if(((l_25 != NULL) && (l_25 != q_25)))
                        _fail(q_25);
                      else
                        l_25 = q_25;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_25)), not_null(i_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_25)))));
          }
        }
      else
        {
          if(match_cons(v_24, sym_Match_1))
            {
              w_24 = ATgetArgument(v_24, 0);
              {
                ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
                ATerm x_25 = NULL;
                ATerm y_25 = NULL;
                t = new_0(t);
                {
                  x_25 = t;
                  {
                    if(((u_25 != NULL) && (u_25 != x_25)))
                      _fail(x_25);
                    else
                      u_25 = x_25;
                    {
                      ATerm c_26 = NULL;
                      t = new_0(t);
                      {
                        y_25 = t;
                        {
                          if(((v_25 != NULL) && (v_25 != y_25)))
                            _fail(y_25);
                          else
                            v_25 = y_25;
                          {
                            t = not_null(w_24);
                            {
                              ATerm i_1 (ATerm t)
                              {
                                ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL;
                                z_25 = t;
                                r_24 :
                                if(match_cons(z_25, sym_Explode_2))
                                  {
                                    a_26 = ATgetArgument(z_25, 0);
                                    b_26 = ATgetArgument(z_25, 1);
                                    {
                                      if(((s_25 != NULL) && (s_25 != a_26)))
                                        _fail(a_26);
                                      else
                                        s_25 = a_26;
                                      {
                                        if(((t_25 != NULL) && (t_25 != b_26)))
                                          _fail(b_26);
                                        else
                                          t_25 = b_26;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_25));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, i_1);
                              {
                                c_26 = t;
                                if(((w_25 != NULL) && (w_25 != c_26)))
                                  _fail(c_26);
                                else
                                  w_25 = c_26;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_25)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_25))), (ATerm) ATmakeAppl(sym_Prim_2, term_t_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_25)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_25)), (ATerm) ATmakeAppl(sym_Op_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_25)), not_null(s_25)))))));
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
ATerm Mapp2_0 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL;
  h_27 = t;
  g_27 :
  if(match_cons(h_27, sym_Match_1))
    {
      i_27 = ATgetArgument(h_27, 0);
      {
        ATerm y_9 = t;
        int a_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
            ATerm o_27 = NULL;
            ATerm s_27 = NULL;
            t = new_0(t);
            {
              o_27 = t;
              {
                if(((m_27 != NULL) && (m_27 != o_27)))
                  _fail(o_27);
                else
                  m_27 = o_27;
                {
                  t = not_null(i_27);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
                      p_27 = t;
                      w_26 :
                      if(match_cons(p_27, sym_Anno_2))
                        {
                          q_27 = ATgetArgument(p_27, 0);
                          r_27 = ATgetArgument(p_27, 1);
                          {
                            if(((k_27 != NULL) && (k_27 != q_27)))
                              _fail(q_27);
                            else
                              k_27 = q_27;
                            {
                              if(((l_27 != NULL) && (l_27 != r_27)))
                                _fail(r_27);
                              else
                                l_27 = r_27;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_27)), not_null(k_27));
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
                      s_27 = t;
                      if(((n_27 != NULL) && (n_27 != s_27)))
                        _fail(s_27);
                      else
                        n_27 = s_27;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_27)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_d_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_27)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_27))))));
            ;
            LocalPopChoice(a_10);
          }
        else
          {
            t = y_9;
            {
              ATerm e_10 = t;
              int f_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
                  ATerm x_27 = NULL;
                  ATerm a_28 = NULL;
                  t = new_0(t);
                  {
                    x_27 = t;
                    {
                      if(((v_27 != NULL) && (v_27 != x_27)))
                        _fail(x_27);
                      else
                        v_27 = x_27;
                      {
                        t = not_null(i_27);
                        {
                          ATerm k_1 (ATerm t)
                          {
                            ATerm y_27 = NULL,z_27 = NULL;
                            y_27 = t;
                            a_27 :
                            if(match_cons(y_27, sym_RootApp_1))
                              {
                                z_27 = ATgetArgument(y_27, 0);
                                {
                                  if(((u_27 != NULL) && (u_27 != z_27)))
                                    _fail(z_27);
                                  else
                                    u_27 = z_27;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_27));
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
                            a_28 = t;
                            if(((w_27 != NULL) && (w_27 != a_28)))
                              _fail(a_28);
                            else
                              w_27 = a_28;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_27))), not_null(u_27))));
                  ;
                  LocalPopChoice(f_10);
                }
              else
                {
                  t = e_10;
                  {
                    ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL;
                    ATerm g_28 = NULL;
                    ATerm k_28 = NULL;
                    t = new_0(t);
                    {
                      g_28 = t;
                      {
                        if(((e_28 != NULL) && (e_28 != g_28)))
                          _fail(g_28);
                        else
                          e_28 = g_28;
                        {
                          t = not_null(i_27);
                          {
                            ATerm l_1 (ATerm t)
                            {
                              ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
                              h_28 = t;
                              e_27 :
                              if(match_cons(h_28, sym_App_2))
                                {
                                  i_28 = ATgetArgument(h_28, 0);
                                  j_28 = ATgetArgument(h_28, 1);
                                  {
                                    if(((d_28 != NULL) && (d_28 != i_28)))
                                      _fail(i_28);
                                    else
                                      d_28 = i_28;
                                    {
                                      if(((c_28 != NULL) && (c_28 != j_28)))
                                        _fail(j_28);
                                      else
                                        c_28 = j_28;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_28));
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
                              k_28 = t;
                              if(((f_28 != NULL) && (f_28 != k_28)))
                                _fail(k_28);
                              else
                                f_28 = k_28;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_28))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_28)), not_null(d_28)))));
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
ATerm Mapp1_0 (ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL;
  b_29 = t;
  z_28 :
  if(match_cons(b_29, sym_Match_1))
    {
      c_29 = ATgetArgument(b_29, 0);
      a_29 :
      if(match_cons(c_29, sym_RootApp_1))
        {
          d_29 = ATgetArgument(c_29, 0);
          t = not_null(d_29);
        }
      else
        {
          if(match_cons(c_29, sym_App_2))
            {
              d_29 = ATgetArgument(c_29, 0);
              e_29 = ATgetArgument(c_29, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(d_29), not_null(e_29));
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
ATerm Mapp0_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL;
  q_29 = t;
  p_29 :
  if(match_cons(q_29, sym_Match_1))
    {
      r_29 = ATgetArgument(q_29, 0);
      {
        ATerm t_29 = NULL,u_29 = NULL;
        ATerm y_29 = NULL;
        t = not_null(r_29);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
            v_29 = t;
            m_29 :
            if(match_cons(v_29, sym_RootApp_1))
              {
                w_29 = ATgetArgument(v_29, 0);
                n_29 :
                if(match_cons(w_29, sym_Match_1))
                  {
                    x_29 = ATgetArgument(w_29, 0);
                    {
                      if(((t_29 != NULL) && (t_29 != x_29)))
                        _fail(x_29);
                      else
                        t_29 = x_29;
                      t = not_null(t_29);
                    }
                  }
                else
                  {
                    _fail(t);
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
            y_29 = t;
            if(((u_29 != NULL) && (u_29 != y_29)))
              _fail(y_29);
            else
              u_29 = y_29;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(u_29));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Mapp_0 (ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      ;
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
            t = Mapp1_0(t);
            ;
            LocalPopChoice(j_10);
          }
        else
          {
            t = i_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL;
  s_30 = t;
  r_30 :
  if(match_cons(s_30, sym_Build_1))
    {
      t_30 = ATgetArgument(s_30, 0);
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
            ATerm z_30 = NULL;
            ATerm d_31 = NULL;
            t = new_0(t);
            {
              z_30 = t;
              {
                if(((x_30 != NULL) && (x_30 != z_30)))
                  _fail(z_30);
                else
                  x_30 = z_30;
                {
                  t = not_null(t_30);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
                      a_31 = t;
                      h_30 :
                      if(match_cons(a_31, sym_Anno_2))
                        {
                          b_31 = ATgetArgument(a_31, 0);
                          c_31 = ATgetArgument(a_31, 1);
                          {
                            if(((v_30 != NULL) && (v_30 != b_31)))
                              _fail(b_31);
                            else
                              v_30 = b_31;
                            {
                              if(((w_30 != NULL) && (w_30 != c_31)))
                                _fail(c_31);
                              else
                                w_30 = c_31;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_30));
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
                      d_31 = t;
                      if(((y_30 != NULL) && (y_30 != d_31)))
                        _fail(d_31);
                      else
                        y_30 = d_31;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_m_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_30)), not_null(v_30))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_30))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_30))));
            ;
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            {
              ATerm n_10 = t;
              int t_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
                  ATerm i_31 = NULL;
                  ATerm l_31 = NULL;
                  t = new_0(t);
                  {
                    i_31 = t;
                    {
                      if(((g_31 != NULL) && (g_31 != i_31)))
                        _fail(i_31);
                      else
                        g_31 = i_31;
                      {
                        t = not_null(t_30);
                        {
                          ATerm o_1 (ATerm t)
                          {
                            ATerm j_31 = NULL,k_31 = NULL;
                            j_31 = t;
                            l_30 :
                            if(match_cons(j_31, sym_RootApp_1))
                              {
                                k_31 = ATgetArgument(j_31, 0);
                                {
                                  if(((f_31 != NULL) && (f_31 != k_31)))
                                    _fail(k_31);
                                  else
                                    f_31 = k_31;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_31));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, o_1);
                          {
                            l_31 = t;
                            if(((h_31 != NULL) && (h_31 != l_31)))
                              _fail(l_31);
                            else
                              h_31 = l_31;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_31), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_31))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(h_31))));
                  ;
                  LocalPopChoice(t_10);
                }
              else
                {
                  t = n_10;
                  {
                    ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL;
                    ATerm r_31 = NULL;
                    ATerm v_31 = NULL;
                    t = new_0(t);
                    {
                      r_31 = t;
                      {
                        if(((p_31 != NULL) && (p_31 != r_31)))
                          _fail(r_31);
                        else
                          p_31 = r_31;
                        {
                          t = not_null(t_30);
                          {
                            ATerm p_1 (ATerm t)
                            {
                              ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
                              s_31 = t;
                              p_30 :
                              if(match_cons(s_31, sym_App_2))
                                {
                                  t_31 = ATgetArgument(s_31, 0);
                                  u_31 = ATgetArgument(s_31, 1);
                                  {
                                    if(((n_31 != NULL) && (n_31 != t_31)))
                                      _fail(t_31);
                                    else
                                      n_31 = t_31;
                                    {
                                      if(((o_31 != NULL) && (o_31 != u_31)))
                                        _fail(u_31);
                                      else
                                        o_31 = u_31;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_31));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, p_1);
                            {
                              v_31 = t;
                              if(((q_31 != NULL) && (q_31 != v_31)))
                                _fail(v_31);
                              else
                                q_31 = v_31;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(n_31), not_null(o_31), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_31)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_31))));
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
ATerm Bapp1_0 (ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL;
  m_32 = t;
  k_32 :
  if(match_cons(m_32, sym_Build_1))
    {
      n_32 = ATgetArgument(m_32, 0);
      l_32 :
      if(match_cons(n_32, sym_RootApp_1))
        {
          o_32 = ATgetArgument(n_32, 0);
          t = not_null(o_32);
        }
      else
        {
          if(match_cons(n_32, sym_App_2))
            {
              o_32 = ATgetArgument(n_32, 0);
              p_32 = ATgetArgument(n_32, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_32)), not_null(o_32));
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
ATerm As_2 (ATerm t, ATerm p_83 (ATerm), ATerm q_83 (ATerm))
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
  b_33 = t;
  a_33 :
  if(match_cons(b_33, sym_As_2))
    {
      c_33 = ATgetArgument(b_33, 0);
      d_33 = ATgetArgument(b_33, 1);
      {
        ATerm h_33 = NULL,j_33 = NULL;
        ATerm i_33 = NULL;
        t = SSLgetAnnotations(not_null(b_33));
        {
          i_33 = t;
          if(((h_33 != NULL) && (h_33 != i_33)))
            _fail(i_33);
          else
            h_33 = i_33;
        }
        {
          t = not_null(c_33);
          {
            ATerm l_33 = NULL;
            t = p_83(t);
            {
              j_33 = t;
              {
                t = not_null(d_33);
                {
                  ATerm n_33 = NULL;
                  t = q_83(t);
                  {
                    l_33 = t;
                    {
                      ATerm o_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(j_33), not_null(l_33)), not_null(h_33));
                      {
                        o_33 = t;
                        if(((n_33 != NULL) && (n_33 != o_33)))
                          _fail(o_33);
                        else
                          n_33 = o_33;
                      }
                      t = not_null(n_33);
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
ATerm Prim_2 (ATerm t, ATerm e_87 (ATerm), ATerm f_87 (ATerm))
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
  a_34 = t;
  z_33 :
  if(match_cons(a_34, sym_Prim_2))
    {
      b_34 = ATgetArgument(a_34, 0);
      c_34 = ATgetArgument(a_34, 1);
      {
        ATerm j_34 = NULL,l_34 = NULL;
        ATerm k_34 = NULL;
        t = SSLgetAnnotations(not_null(a_34));
        {
          k_34 = t;
          if(((j_34 != NULL) && (j_34 != k_34)))
            _fail(k_34);
          else
            j_34 = k_34;
        }
        {
          t = not_null(b_34);
          {
            ATerm n_34 = NULL;
            t = e_87(t);
            {
              l_34 = t;
              {
                t = not_null(c_34);
                {
                  ATerm p_34 = NULL;
                  t = f_87(t);
                  {
                    n_34 = t;
                    {
                      ATerm q_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(l_34), not_null(n_34)), not_null(j_34));
                      {
                        q_34 = t;
                        if(((p_34 != NULL) && (p_34 != q_34)))
                          _fail(q_34);
                        else
                          p_34 = q_34;
                      }
                      t = not_null(p_34);
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
ATerm Explode_2 (ATerm t, ATerm i_83 (ATerm), ATerm j_83 (ATerm))
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
  z_35 = t;
  x_35 :
  if(match_cons(z_35, sym_Explode_2))
    {
      a_36 = ATgetArgument(z_35, 0);
      b_36 = ATgetArgument(z_35, 1);
      {
        ATerm f_36 = NULL,h_36 = NULL;
        ATerm g_36 = NULL;
        t = SSLgetAnnotations(not_null(z_35));
        {
          g_36 = t;
          if(((f_36 != NULL) && (f_36 != g_36)))
            _fail(g_36);
          else
            f_36 = g_36;
        }
        {
          t = not_null(a_36);
          {
            ATerm j_36 = NULL;
            t = i_83(t);
            {
              h_36 = t;
              {
                t = not_null(b_36);
                {
                  ATerm l_36 = NULL;
                  t = j_83(t);
                  {
                    j_36 = t;
                    {
                      ATerm m_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(h_36), not_null(j_36)), not_null(f_36));
                      {
                        m_36 = t;
                        if(((l_36 != NULL) && (l_36 != m_36)))
                          _fail(m_36);
                        else
                          l_36 = m_36;
                      }
                      t = not_null(l_36);
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
ATerm Op_2 (ATerm t, ATerm g_83 (ATerm), ATerm h_83 (ATerm))
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
  f_37 = t;
  e_37 :
  if(match_cons(f_37, sym_Op_2))
    {
      g_37 = ATgetArgument(f_37, 0);
      h_37 = ATgetArgument(f_37, 1);
      {
        ATerm l_37 = NULL,n_37 = NULL;
        ATerm m_37 = NULL;
        t = SSLgetAnnotations(not_null(f_37));
        {
          m_37 = t;
          if(((l_37 != NULL) && (l_37 != m_37)))
            _fail(m_37);
          else
            l_37 = m_37;
        }
        {
          t = not_null(g_37);
          {
            ATerm p_37 = NULL;
            t = g_83(t);
            {
              n_37 = t;
              {
                t = not_null(h_37);
                {
                  ATerm r_37 = NULL;
                  t = h_83(t);
                  {
                    p_37 = t;
                    {
                      ATerm s_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(n_37), not_null(p_37)), not_null(l_37));
                      {
                        s_37 = t;
                        if(((r_37 != NULL) && (r_37 != s_37)))
                          _fail(s_37);
                        else
                          r_37 = s_37;
                      }
                      t = not_null(r_37);
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
ATerm pat_td_1 (ATerm t, ATerm a_126 (ATerm))
{
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_126(t);
      ;
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      {
        ATerm w_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                t = pat_td_1(t, a_126);
                return(t);
              }
              t = fetch_1(t, r_1);
              return(t);
            }
            t = Op_2(t, _id, q_1);
            ;
            LocalPopChoice(a_11);
          }
        else
          {
            t = w_10;
            {
              ATerm c_11 = t;
              int e_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_1 (ATerm t)
                  {
                    t = pat_td_1(t, a_126);
                    return(t);
                  }
                  t = Explode_2(t, _id, s_1);
                  ;
                  LocalPopChoice(e_11);
                }
              else
                {
                  t = c_11;
                  {
                    ATerm h_11 = t;
                    int i_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1(t, a_126);
                          return(t);
                        }
                        t = Explode_2(t, t_1, _id);
                        ;
                        LocalPopChoice(i_11);
                      }
                    else
                      {
                        t = h_11;
                        {
                          ATerm j_11 = t;
                          int k_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_1 (ATerm t)
                              {
                                ATerm v_1 (ATerm t)
                                {
                                  t = pat_td_1(t, a_126);
                                  return(t);
                                }
                                t = fetch_1(t, v_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, u_1);
                              ;
                              LocalPopChoice(k_11);
                            }
                          else
                            {
                              t = j_11;
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = pat_td_1(t, a_126);
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
ATerm Bapp0_0 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL;
  j_38 = t;
  i_38 :
  if(match_cons(j_38, sym_Build_1))
    {
      k_38 = ATgetArgument(j_38, 0);
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_38 = NULL,n_38 = NULL;
            ATerm r_38 = NULL;
            t = not_null(k_38);
            {
              ATerm x_1 (ATerm t)
              {
                ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
                o_38 = t;
                b_38 :
                if(match_cons(o_38, sym_RootApp_1))
                  {
                    p_38 = ATgetArgument(o_38, 0);
                    c_38 :
                    if(match_cons(p_38, sym_Build_1))
                      {
                        q_38 = ATgetArgument(p_38, 0);
                        {
                          if(((m_38 != NULL) && (m_38 != q_38)))
                            _fail(q_38);
                          else
                            m_38 = q_38;
                          t = not_null(m_38);
                        }
                      }
                    else
                      {
                        _fail(t);
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
                r_38 = t;
                if(((n_38 != NULL) && (n_38 != r_38)))
                  _fail(r_38);
                else
                  n_38 = r_38;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(n_38));
            ;
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
            {
              ATerm t_38 = NULL,y_38 = NULL,z_38 = NULL;
              ATerm m_39 = NULL;
              t = not_null(k_38);
              {
                ATerm y_1 (ATerm t)
                {
                  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
                  a_39 = t;
                  f_38 :
                  if(match_cons(a_39, sym_App_2))
                    {
                      b_39 = ATgetArgument(a_39, 0);
                      d_39 = ATgetArgument(a_39, 1);
                      g_38 :
                      if(match_cons(b_39, sym_Build_1))
                        {
                          c_39 = ATgetArgument(b_39, 0);
                          {
                            if(((y_38 != NULL) && (y_38 != c_39)))
                              _fail(c_39);
                            else
                              y_38 = c_39;
                            {
                              if(((t_38 != NULL) && (t_38 != d_39)))
                                _fail(d_39);
                              else
                                t_38 = d_39;
                              t = not_null(y_38);
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
                t = pat_td_1(t, y_1);
                {
                  m_39 = t;
                  if(((z_38 != NULL) && (z_38 != m_39)))
                    _fail(m_39);
                  else
                    z_38 = m_39;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(z_38));
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
ATerm Bapp_0 (ATerm t)
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            ;
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL;
  s_40 = t;
  g_40 :
  if(match_cons(s_40, sym_Lets_2))
    {
      t_40 = ATgetArgument(s_40, 0);
      u_40 = ATgetArgument(s_40, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(t_40), not_null(u_40));
    }
  else
    {
      if(match_cons(s_40, sym_LChoices_1))
        {
          t_40 = ATgetArgument(s_40, 0);
          h_40 :
          if(((ATgetType(t_40) == AT_LIST) && !(ATisEmpty(t_40))))
            {
              k_40 = ATgetFirst((ATermList) t_40);
              l_40 = (ATerm) ATgetNext((ATermList) t_40);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(k_40), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(l_40)));
            }
          else
            {
              if(((ATgetType(t_40) == AT_LIST) && ATisEmpty(t_40)))
                {
                  t = term_f_9;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(s_40, sym_Choices_1))
            {
              t_40 = ATgetArgument(s_40, 0);
              i_40 :
              if(((ATgetType(t_40) == AT_LIST) && !(ATisEmpty(t_40))))
                {
                  k_40 = ATgetFirst((ATermList) t_40);
                  l_40 = (ATerm) ATgetNext((ATermList) t_40);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(k_40), (ATerm) ATmakeAppl(sym_Choices_1, not_null(l_40)));
                }
              else
                {
                  if(((ATgetType(t_40) == AT_LIST) && ATisEmpty(t_40)))
                    {
                      t = term_f_9;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(s_40, sym_Seqs_1))
                {
                  t_40 = ATgetArgument(s_40, 0);
                  j_40 :
                  if(((ATgetType(t_40) == AT_LIST) && !(ATisEmpty(t_40))))
                    {
                      k_40 = ATgetFirst((ATermList) t_40);
                      l_40 = (ATerm) ATgetNext((ATermList) t_40);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_40), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(l_40)));
                    }
                  else
                    {
                      if(((ATgetType(t_40) == AT_LIST) && ATisEmpty(t_40)))
                        {
                          t = term_r_11;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(s_40, sym_DefaultVarDec_1))
                    {
                      t_40 = ATgetArgument(s_40, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(t_40), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_11), term_y_11));
                    }
                  else
                    {
                      if(match_cons(s_40, sym_InfixApp_3))
                        {
                          t_40 = ATgetArgument(s_40, 0);
                          u_40 = ATgetArgument(s_40, 1);
                          r_40 = ATgetArgument(s_40, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(u_40), (ATerm) ATmakeAppl(sym_Op_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_40)), not_null(t_40))));
                        }
                      else
                        {
                          if(match_cons(s_40, sym_BAM_3))
                            {
                              t_40 = ATgetArgument(s_40, 0);
                              u_40 = ATgetArgument(s_40, 1);
                              r_40 = ATgetArgument(s_40, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(r_40))), not_null(t_40)), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_40))));
                            }
                          else
                            {
                              if(match_cons(s_40, sym_AM_2))
                                {
                                  t_40 = ATgetArgument(s_40, 0);
                                  u_40 = ATgetArgument(s_40, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_40), (ATerm) ATmakeAppl(sym_Match_1, not_null(u_40)));
                                }
                              else
                                {
                                  if(match_cons(s_40, sym_MA_2))
                                    {
                                      t_40 = ATgetArgument(s_40, 0);
                                      u_40 = ATgetArgument(s_40, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_40)), not_null(u_40));
                                    }
                                  else
                                    {
                                      if(match_cons(s_40, sym_BA_2))
                                        {
                                          t_40 = ATgetArgument(s_40, 0);
                                          u_40 = ATgetArgument(s_40, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_40)), not_null(t_40));
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
ATerm UnZip2_0 (ATerm t)
{
  ATerm w_42 = NULL,b_43 = NULL,c_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL;
  w_42 = t;
  t_42 :
  if(match_cons(w_42, sym__2))
    {
      b_43 = ATgetArgument(w_42, 0);
      i_43 = ATgetArgument(w_42, 1);
      u_42 :
      if(match_cons(b_43, sym__2))
        {
          c_43 = ATgetArgument(b_43, 0);
          h_43 = ATgetArgument(b_43, 1);
          v_42 :
          if(match_cons(i_43, sym__2))
            {
              j_43 = ATgetArgument(i_43, 0);
              k_43 = ATgetArgument(i_43, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_43)), not_null(c_43)), (ATerm) ATinsert(CheckATermList(not_null(k_43)), not_null(h_43)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL;
  z_43 = t;
  y_43 :
  if(((ATgetType(z_43) == AT_LIST) && !(ATisEmpty(z_43))))
    {
      a_44 = ATgetFirst((ATermList) z_43);
      b_44 = (ATerm) ATgetNext((ATermList) z_43);
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_44), not_null(b_44));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm h_44 = NULL;
  h_44 = t;
  g_44 :
  if(((ATgetType(h_44) == AT_LIST) && ATisEmpty(h_44)))
    {
      t = term_c_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm w_101 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, w_101);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL;
  ATerm t_44 (ATerm t)
  {
    ATerm q_44 = NULL;
    ATerm r_44 = NULL;
    t = not_null(n_44);
    {
      ATerm e_12 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_12;
        }
      {
        t = new_0(t);
        {
          r_44 = t;
          if(((q_44 != NULL) && (q_44 != r_44)))
            _fail(r_44);
          else
            q_44 = r_44;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(q_44)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_44)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_44))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_44))));
    return(t);
  }
  ATerm u_44 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_r_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_44))));
    return(t);
  }
  n_44 = t;
  m_44 :
  if(match_cons(n_44, sym_Var_1))
    {
      o_44 = ATgetArgument(n_44, 0);
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_44(t);
            ;
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            t = u_44(t);
          }
      }
    }
  else
    {
      t = t_44(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm m_45 = NULL,n_45 = NULL;
  m_45 = t;
  l_45 :
  if(match_cons(m_45, sym_Var_1))
    {
      n_45 = ATgetArgument(m_45, 0);
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_45 = NULL,u_45 = NULL;
            ATerm t_45 = NULL;
            t = SSLgetAnnotations(not_null(m_45));
            {
              t_45 = t;
              if(((s_45 != NULL) && (s_45 != t_45)))
                _fail(t_45);
              else
                s_45 = t_45;
            }
            {
              t = not_null(n_45);
              {
                ATerm w_45 = NULL;
                t = p_0(t);
                {
                  u_45 = t;
                  {
                    ATerm x_45 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(u_45)), not_null(s_45));
                    {
                      x_45 = t;
                      if(((w_45 != NULL) && (w_45 != x_45)))
                        _fail(x_45);
                      else
                        w_45 = x_45;
                    }
                    t = not_null(w_45);
                  }
                }
              }
            }
            ;
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
            {
              ATerm l_12 = t;
              int m_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_46 = NULL,c_46 = NULL;
                  ATerm b_46 = NULL;
                  t = SSLgetAnnotations(not_null(m_45));
                  {
                    b_46 = t;
                    if(((a_46 != NULL) && (a_46 != b_46)))
                      _fail(b_46);
                    else
                      a_46 = b_46;
                  }
                  {
                    t = not_null(n_45);
                    {
                      ATerm e_46 = NULL;
                      t = p_0(t);
                      {
                        c_46 = t;
                        {
                          ATerm f_46 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(c_46)), not_null(a_46));
                          {
                            f_46 = t;
                            if(((e_46 != NULL) && (e_46 != f_46)))
                              _fail(f_46);
                            else
                              e_46 = f_46;
                          }
                          t = not_null(e_46);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(m_12);
                }
              else
                {
                  t = l_12;
                  {
                    ATerm k_46 = NULL,m_46 = NULL;
                    ATerm l_46 = NULL;
                    t = SSLgetAnnotations(not_null(m_45));
                    {
                      l_46 = t;
                      if(((k_46 != NULL) && (k_46 != l_46)))
                        _fail(l_46);
                      else
                        k_46 = l_46;
                    }
                    {
                      t = not_null(n_45);
                      {
                        ATerm p_46 = NULL;
                        t = p_0(t);
                        {
                          m_46 = t;
                          {
                            ATerm q_46 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(m_46)), not_null(k_46));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL;
  t_47 = t;
  s_47 :
  if(match_cons(t_47, sym_Prim_2))
    {
      u_47 = ATgetArgument(t_47, 0);
      v_47 = ATgetArgument(t_47, 1);
      {
        ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL;
        ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL;
        t = not_null(v_47);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm r_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_12;
              }
            return(t);
          }
          t = fetch_1(t, z_1);
          {
            t = not_null(v_47);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm a_2 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, a_2);
                {
                  b_48 = t;
                  q_47 :
                  if(match_cons(b_48, sym__2))
                    {
                      c_48 = ATgetArgument(b_48, 0);
                      d_48 = ATgetArgument(b_48, 1);
                      r_47 :
                      if(match_cons(d_48, sym__2))
                        {
                          e_48 = ATgetArgument(d_48, 0);
                          f_48 = ATgetArgument(d_48, 1);
                          {
                            if(((y_47 != NULL) && (y_47 != c_48)))
                              _fail(c_48);
                            else
                              y_47 = c_48;
                            {
                              if(((z_47 != NULL) && (z_47 != e_48)))
                                _fail(e_48);
                              else
                                z_47 = e_48;
                              if(((a_48 != NULL) && (a_48 != f_48)))
                                _fail(f_48);
                              else
                                a_48 = f_48;
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
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(z_47)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(u_47), not_null(a_48))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm i_113 (ATerm))
{
  ATerm i_48 (ATerm t)
  {
    ATerm b_2 (ATerm t)
    {
      t = i_113(t);
      t = i_48(t);
      return(t);
    }
    t = try_1(t, b_2);
    return(t);
  }
  t = i_48(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm u_48 = NULL;
  u_48 = t;
  m_48 :
  if(match_cons(u_48, sym_Wld_0))
    {
      ATerm w_48 = NULL,y_48 = NULL;
      ATerm s_12;
      s_12 = t;
      {
        ATerm x_48 = NULL;
        t = SSLgetAnnotations(not_null(u_48));
        {
          x_48 = t;
          if(((w_48 != NULL) && (w_48 != x_48)))
            _fail(x_48);
          else
            w_48 = x_48;
        }
      }
      t = s_12;
      {
        ATerm z_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(w_48));
        {
          z_48 = t;
          if(((y_48 != NULL) && (y_48 != z_48)))
            _fail(z_48);
          else
            y_48 = z_48;
        }
        t = not_null(y_48);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm t_12 = t;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm u_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(v_12);
          }
        else
          {
            t = u_12;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, c_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm m_83 (ATerm), ATerm n_83 (ATerm))
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
  j_49 = t;
  i_49 :
  if(match_cons(j_49, sym_App_2))
    {
      k_49 = ATgetArgument(j_49, 0);
      l_49 = ATgetArgument(j_49, 1);
      {
        ATerm p_49 = NULL,r_49 = NULL;
        ATerm q_49 = NULL;
        t = SSLgetAnnotations(not_null(j_49));
        {
          q_49 = t;
          if(((p_49 != NULL) && (p_49 != q_49)))
            _fail(q_49);
          else
            p_49 = q_49;
        }
        {
          t = not_null(k_49);
          {
            ATerm t_49 = NULL;
            t = m_83(t);
            {
              r_49 = t;
              {
                t = not_null(l_49);
                {
                  ATerm v_49 = NULL;
                  t = n_83(t);
                  {
                    t_49 = t;
                    {
                      ATerm w_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(r_49), not_null(t_49)), not_null(p_49));
                      {
                        w_49 = t;
                        if(((v_49 != NULL) && (v_49 != w_49)))
                          _fail(w_49);
                        else
                          v_49 = w_49;
                      }
                      t = not_null(v_49);
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
ATerm Con_3 (ATerm t, ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm a_84 (ATerm))
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL;
  j_50 = t;
  i_50 :
  if(match_cons(j_50, sym_Con_3))
    {
      k_50 = ATgetArgument(j_50, 0);
      l_50 = ATgetArgument(j_50, 1);
      m_50 = ATgetArgument(j_50, 2);
      {
        ATerm r_50 = NULL,u_50 = NULL;
        ATerm t_50 = NULL;
        t = SSLgetAnnotations(not_null(j_50));
        {
          t_50 = t;
          if(((r_50 != NULL) && (r_50 != t_50)))
            _fail(t_50);
          else
            r_50 = t_50;
        }
        {
          t = not_null(k_50);
          {
            ATerm w_50 = NULL;
            t = y_83(t);
            {
              u_50 = t;
              {
                t = not_null(l_50);
                {
                  ATerm y_50 = NULL;
                  t = z_83(t);
                  {
                    w_50 = t;
                    {
                      t = not_null(m_50);
                      {
                        ATerm a_51 = NULL;
                        t = a_84(t);
                        {
                          y_50 = t;
                          {
                            ATerm b_51 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(u_50), not_null(w_50), not_null(y_50)), not_null(r_50));
                            {
                              b_51 = t;
                              if(((a_51 != NULL) && (a_51 != b_51)))
                                _fail(b_51);
                              else
                                a_51 = b_51;
                            }
                            t = not_null(a_51);
                          }
                        }
                      }
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
ATerm pureterm_0 (ATerm t)
{
  ATerm c_13 = t;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, d_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_13;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL;
  m_51 = t;
  k_51 :
  if(match_cons(m_51, sym_SRule_1))
    {
      n_51 = ATgetArgument(m_51, 0);
      l_51 :
      if(match_cons(n_51, sym_StratRule_3))
        {
          o_51 = ATgetArgument(n_51, 0);
          p_51 = ATgetArgument(n_51, 1);
          q_51 = ATgetArgument(n_51, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_51)), (ATerm) ATmakeAppl(sym_Where_1, not_null(q_51))), not_null(o_51)));
        }
      else
        {
          if(match_cons(n_51, sym_Rule_3))
            {
              o_51 = ATgetArgument(n_51, 0);
              p_51 = ATgetArgument(n_51, 1);
              q_51 = ATgetArgument(n_51, 2);
              {
                t = not_null(o_51);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(p_51);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(p_51))), (ATerm) ATmakeAppl(sym_Where_1, not_null(q_51))), (ATerm) ATmakeAppl(sym_Match_1, not_null(o_51))));
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
ATerm Scope_2 (ATerm t, ATerm k_86 (ATerm), ATerm l_86 (ATerm))
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL;
  f_52 = t;
  e_52 :
  if(match_cons(f_52, sym_Scope_2))
    {
      g_52 = ATgetArgument(f_52, 0);
      h_52 = ATgetArgument(f_52, 1);
      {
        ATerm l_52 = NULL,n_52 = NULL;
        ATerm m_52 = NULL;
        t = SSLgetAnnotations(not_null(f_52));
        {
          m_52 = t;
          if(((l_52 != NULL) && (l_52 != m_52)))
            _fail(m_52);
          else
            l_52 = m_52;
        }
        {
          t = not_null(g_52);
          {
            ATerm p_52 = NULL;
            t = k_86(t);
            {
              n_52 = t;
              {
                t = not_null(h_52);
                {
                  ATerm r_52 = NULL;
                  t = l_86(t);
                  {
                    p_52 = t;
                    {
                      ATerm s_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(n_52), not_null(p_52)), not_null(l_52));
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
ATerm oncetd_1 (ATerm t, ATerm e_98 (ATerm))
{
  ATerm y_52 (ATerm t)
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_98(t);
        ;
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
        t = _one(t, y_52);
      }
    return(t);
  }
  t = y_52(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL;
  n_53 = t;
  l_53 :
  if(match_cons(n_53, sym_SRule_1))
    {
      o_53 = ATgetArgument(n_53, 0);
      m_53 :
      if(match_cons(o_53, sym_Rule_3))
        {
          p_53 = ATgetArgument(o_53, 0);
          q_53 = ATgetArgument(o_53, 1);
          r_53 = ATgetArgument(o_53, 2);
          {
            ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL;
            ATerm d_54 = NULL;
            ATerm j_54 = NULL;
            t = new_0(t);
            {
              d_54 = t;
              {
                if(((a_54 != NULL) && (a_54 != d_54)))
                  _fail(d_54);
                else
                  a_54 = d_54;
                {
                  t = not_null(p_53);
                  {
                    ATerm r_54 = NULL;
                    ATerm e_2 (ATerm t)
                    {
                      ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
                      e_54 = t;
                      c_53 :
                      if(match_cons(e_54, sym_Con_3))
                        {
                          f_54 = ATgetArgument(e_54, 0);
                          h_54 = ATgetArgument(e_54, 1);
                          i_54 = ATgetArgument(e_54, 2);
                          d_53 :
                          if(match_cons(f_54, sym_Var_1))
                            {
                              g_54 = ATgetArgument(f_54, 0);
                              {
                                if(((z_53 != NULL) && (z_53 != g_54)))
                                  _fail(g_54);
                                else
                                  z_53 = g_54;
                                {
                                  if(((x_53 != NULL) && (x_53 != h_54)))
                                    _fail(h_54);
                                  else
                                    x_53 = h_54;
                                  {
                                    if(((v_53 != NULL) && (v_53 != i_54)))
                                      _fail(i_54);
                                    else
                                      v_53 = i_54;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_53));
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
                    t = oncetd_1(t, e_2);
                    {
                      j_54 = t;
                      {
                        if(((b_54 != NULL) && (b_54 != j_54)))
                          _fail(j_54);
                        else
                          b_54 = j_54;
                        {
                          t = not_null(q_53);
                          {
                            ATerm f_2 (ATerm t)
                            {
                              ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL;
                              k_54 = t;
                              g_53 :
                              if(match_cons(k_54, sym_Con_3))
                                {
                                  l_54 = ATgetArgument(k_54, 0);
                                  n_54 = ATgetArgument(k_54, 1);
                                  o_54 = ATgetArgument(k_54, 2);
                                  h_53 :
                                  if(match_cons(l_54, sym_Var_1))
                                    {
                                      m_54 = ATgetArgument(l_54, 0);
                                      i_53 :
                                      if(match_cons(o_54, sym_Call_2))
                                        {
                                          p_54 = ATgetArgument(o_54, 0);
                                          q_54 = ATgetArgument(o_54, 1);
                                          j_53 :
                                          if(((ATgetType(q_54) == AT_LIST) && ATisEmpty(q_54)))
                                            {
                                              {
                                                if(((z_53 != NULL) && (z_53 != m_54)))
                                                  _fail(m_54);
                                                else
                                                  z_53 = m_54;
                                                {
                                                  if(((y_53 != NULL) && (y_53 != n_54)))
                                                    _fail(n_54);
                                                  else
                                                    y_53 = n_54;
                                                  {
                                                    if(((w_53 != NULL) && (w_53 != p_54)))
                                                      _fail(p_54);
                                                    else
                                                      w_53 = p_54;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_54));
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
                              return(t);
                            }
                            t = oncetd_1(t, f_2);
                            {
                              r_54 = t;
                              if(((c_54 != NULL) && (c_54 != r_54)))
                                _fail(r_54);
                              else
                                c_54 = r_54;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_54)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_54), not_null(c_54), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_53), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(w_53), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_53), not_null(y_53), term_r_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_53)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_54)))))));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm desugarRule_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        ;
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        {
          ATerm m_13 = t;
          int s_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              ;
              LocalPopChoice(s_13);
            }
          else
            {
              t = m_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, g_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm a_97 (ATerm))
{
  t = a_97(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = topdown_1(t, a_97);
      return(t);
    }
    t = _all(t, h_2);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm j_2 (ATerm t)
      {
        ATerm t_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            ;
            LocalPopChoice(y_13);
          }
        else
          {
            t = t_13;
            {
              ATerm z_13 = t;
              int a_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(a_14);
                }
              else
                {
                  t = z_13;
                  {
                    ATerm b_14 = t;
                    int c_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        ;
                        LocalPopChoice(c_14);
                      }
                    else
                      {
                        t = b_14;
                        {
                          ATerm d_14 = t;
                          int e_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              ;
                              LocalPopChoice(e_14);
                            }
                          else
                            {
                              t = d_14;
                              t = Expl_0(t);
                            }
                        }
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, j_2);
    }
    return(t);
  }
  t = topdown_1(t, i_2);
  return(t);
}
ATerm _0 (ATerm t)
{
  ATerm d_55 = NULL;
  d_55 = t;
  c_55 :
  if(match_cons(d_55, sym__0))
    {
      ATerm f_55 = NULL,k_55 = NULL;
      ATerm f_14;
      f_14 = t;
      {
        ATerm g_55 = NULL;
        t = SSLgetAnnotations(not_null(d_55));
        {
          g_55 = t;
          if(((f_55 != NULL) && (f_55 != g_55)))
            _fail(g_55);
          else
            f_55 = g_55;
        }
      }
      t = f_14;
      {
        ATerm l_55 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(f_55));
        {
          l_55 = t;
          if(((k_55 != NULL) && (k_55 != l_55)))
            _fail(l_55);
          else
            k_55 = l_55;
        }
        t = not_null(k_55);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm x_55 = NULL;
  ATerm z_55 = NULL,a_56 = NULL,l_59 = NULL,n_59 = NULL;
  x_55 = t;
  {
    ATerm i_14;
    i_14 = t;
    {
      ATerm b_56 = NULL;
      ATerm d_56 = NULL,e_56 = NULL,e_58 = NULL,f_58 = NULL,k_59 = NULL;
      t = not_null(x_55);
      {
        b_56 = t;
        {
          t = SSL_explode_term(not_null(b_56));
          {
            d_56 = t;
            s_55 :
            if(match_cons(d_56, sym__2))
              {
                e_56 = ATgetArgument(d_56, 0);
                e_58 = ATgetArgument(d_56, 1);
                t_55 :
                if(match_string(e_56, ""))
                  {
                    u_55 :
                    if(((ATgetType(e_58) == AT_LIST) && !(ATisEmpty(e_58))))
                      {
                        f_58 = ATgetFirst((ATermList) e_58);
                        k_59 = (ATerm) ATgetNext((ATermList) e_58);
                        {
                          if(((z_55 != NULL) && (z_55 != f_58)))
                            _fail(f_58);
                          else
                            z_55 = f_58;
                          if(((a_56 != NULL) && (a_56 != k_59)))
                            _fail(k_59);
                          else
                            a_56 = k_59;
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
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
    t = i_14;
    {
      ATerm l_14;
      l_14 = t;
      {
        ATerm m_59 = NULL;
        t = term_u_9;
        {
          m_59 = t;
          if(((l_59 != NULL) && (l_59 != m_59)))
            _fail(m_59);
          else
            l_59 = m_59;
        }
      }
      t = l_14;
      {
        t = SSL_mkterm(not_null(l_59), not_null(a_56));
        {
          n_59 = t;
          t = not_null(n_59);
        }
      }
    }
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm c_101 (ATerm))
{
  ATerm d_60 = NULL,f_60 = NULL,h_60 = NULL;
  ATerm j_60 (ATerm t)
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_59 = NULL,b_60 = NULL;
        ATerm r_14;
        r_14 = t;
        {
          ATerm a_60 = NULL;
          t = map_1(t, Thd_0);
          {
            t = c_101(t);
            {
              a_60 = t;
              if(((z_59 != NULL) && (z_59 != a_60)))
                _fail(a_60);
              else
                z_59 = a_60;
            }
          }
        }
        t = r_14;
        {
          ATerm c_60 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = j_60(t);
            {
              c_60 = t;
              if(((b_60 != NULL) && (b_60 != c_60)))
                _fail(c_60);
              else
                b_60 = c_60;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(b_60)), not_null(z_59));
        }
        ;
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = j_60(t);
  {
    ATerm s_14;
    s_14 = t;
    {
      ATerm e_60 = NULL;
      e_60 = t;
      if(((d_60 != NULL) && (d_60 != e_60)))
        _fail(e_60);
      else
        d_60 = e_60;
    }
    t = s_14;
    {
      ATerm w_14;
      w_14 = t;
      {
        ATerm g_60 = NULL;
        t = term_u_9;
        {
          g_60 = t;
          if(((f_60 != NULL) && (f_60 != g_60)))
            _fail(g_60);
          else
            f_60 = g_60;
        }
      }
      t = w_14;
      {
        t = SSL_mkterm(not_null(f_60), not_null(d_60));
        {
          h_60 = t;
          t = not_null(h_60);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm t_60 = NULL;
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL;
  t_60 = t;
  {
    ATerm y_60 = NULL;
    ATerm z_60 = NULL;
    t = new_0(t);
    {
      y_60 = t;
      {
        if(((v_60 != NULL) && (v_60 != y_60)))
          _fail(y_60);
        else
          v_60 = y_60;
        {
          ATerm a_61 = NULL;
          t = new_0(t);
          {
            z_60 = t;
            {
              if(((w_60 != NULL) && (w_60 != z_60)))
                _fail(z_60);
              else
                w_60 = z_60;
              {
                t = new_0(t);
                {
                  a_61 = t;
                  if(((x_60 != NULL) && (x_60 != a_61)))
                    _fail(a_61);
                  else
                    x_60 = a_61;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_60)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_60)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_60)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_60))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(v_60), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_11), term_y_11)), not_null(w_60), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_60)), not_null(x_60), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_60)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm h_61 = NULL,i_61 = NULL,j_61 = NULL;
  h_61 = t;
  g_61 :
  if(match_cons(h_61, sym__2))
    {
      i_61 = ATgetArgument(h_61, 0);
      j_61 = ATgetArgument(h_61, 1);
      {
        ATerm x_14 = t;
        int y_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(i_61), not_null(j_61));
            ;
            LocalPopChoice(y_14);
          }
        else
          {
            t = x_14;
            t = SSL_subtr(not_null(i_61), not_null(j_61));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm c_108 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL;
    c_62 = t;
    u_61 :
    if(match_cons(c_62, sym__2))
      {
        d_62 = ATgetArgument(c_62, 0);
        e_62 = ATgetArgument(c_62, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(d_62), not_null(e_62), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL;
    h_62 = t;
    w_61 :
    if(match_cons(h_62, sym__3))
      {
        i_62 = ATgetArgument(h_62, 0);
        j_62 = ATgetArgument(h_62, 1);
        k_62 = ATgetArgument(h_62, 2);
        x_61 :
        if(match_int(i_62, 0))
          {
            t = not_null(k_62);
          }
        else
          {
            _fail(t);
          }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL;
    n_62 = t;
    b_62 :
    if(match_cons(n_62, sym__3))
      {
        o_62 = ATgetArgument(n_62, 0);
        p_62 = ATgetArgument(n_62, 1);
        q_62 = ATgetArgument(n_62, 2);
        {
          ATerm u_62 = NULL,w_62 = NULL;
          ATerm b_15;
          b_15 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_62), term_v_6);
            t = geq_0(t);
          }
          t = b_15;
          {
            ATerm i_15;
            i_15 = t;
            {
              ATerm v_62 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_62), term_v_6);
              {
                t = subt_0(t);
                {
                  v_62 = t;
                  if(((u_62 != NULL) && (u_62 != v_62)))
                    _fail(v_62);
                  else
                    u_62 = v_62;
                }
              }
            }
            t = i_15;
            {
              ATerm x_62 = NULL;
              t = not_null(p_62);
              {
                t = c_108(t);
                {
                  x_62 = t;
                  if(((w_62 != NULL) && (w_62 != x_62)))
                    _fail(x_62);
                  else
                    w_62 = x_62;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(u_62), not_null(p_62), (ATerm) ATinsert(CheckATermList(not_null(q_62)), not_null(w_62)));
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
  t = for_3(t, k_2, l_2, m_2);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL;
  i_63 = t;
  h_63 :
  if(match_cons(i_63, sym__2))
    {
      j_63 = ATgetArgument(i_63, 0);
      k_63 = ATgetArgument(i_63, 1);
      {
        ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL;
        ATerm q_63 = NULL;
        ATerm r_63 = NULL;
        t = new_0(t);
        {
          q_63 = t;
          {
            if(((n_63 != NULL) && (n_63 != q_63)))
              _fail(q_63);
            else
              n_63 = q_63;
            {
              ATerm s_63 = NULL;
              t = new_0(t);
              {
                r_63 = t;
                {
                  if(((o_63 != NULL) && (o_63 != r_63)))
                    _fail(r_63);
                  else
                    o_63 = r_63;
                  {
                    t = new_0(t);
                    {
                      s_63 = t;
                      if(((p_63 != NULL) && (p_63 != s_63)))
                        _fail(s_63);
                      else
                        p_63 = s_63;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_63)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_63))), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_63)))), (ATerm) ATmakeAppl(sym_Op_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_63))), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_63))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(n_63), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_11), term_y_11)), not_null(o_63), (ATerm)ATmakeAppl(sym_Var_1, not_null(o_63)), not_null(p_63), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_63)));
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
  ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL;
  a_64 = t;
  y_63 :
  if(match_cons(a_64, sym__2))
    {
      b_64 = ATgetArgument(a_64, 0);
      c_64 = ATgetArgument(a_64, 1);
      z_63 :
      if(((ATgetType(c_64) == AT_LIST) && ATisEmpty(c_64)))
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
ATerm zipr_1 (ATerm t, ATerm u_101 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, u_101);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL;
  g_64 = t;
  f_64 :
  if(((ATgetType(g_64) == AT_LIST) && !(ATisEmpty(g_64))))
    {
      h_64 = ATgetFirst((ATermList) g_64);
      i_64 = (ATerm) ATgetNext((ATermList) g_64);
      t = not_null(i_64);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL;
  o_64 = t;
  m_64 :
  if(((ATgetType(o_64) == AT_LIST) && !(ATisEmpty(o_64))))
    {
      p_64 = ATgetFirst((ATermList) o_64);
      q_64 = (ATerm) ATgetNext((ATermList) o_64);
      n_64 :
      if(((ATgetType(q_64) == AT_LIST) && ATisEmpty(q_64)))
        {
          t = not_null(p_64);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm last_0 (ATerm t)
{
  ATerm j_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(r_15);
    }
  else
    {
      t = j_15;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL;
  ATerm k_68 (ATerm t)
  {
    ATerm b_66 = NULL,c_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,e_67 = NULL;
    ATerm s_15;
    s_15 = t;
    {
      ATerm r_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL;
      ATerm s_66 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_65), term_v_6);
      {
        t = add_0(t);
        {
          s_66 = t;
          if(((r_66 != NULL) && (r_66 != s_66)))
            _fail(s_66);
          else
            r_66 = s_66;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_66), term_t_15);
        {
          t = copy_1(t, new_0);
          {
            t_66 = t;
            l_65 :
            if(((ATgetType(t_66) == AT_LIST) && !(ATisEmpty(t_66))))
              {
                u_66 = ATgetFirst((ATermList) t_66);
                v_66 = (ATerm) ATgetNext((ATermList) t_66);
                {
                  ATerm w_66 = NULL;
                  if(((c_66 != NULL) && (c_66 != u_66)))
                    _fail(u_66);
                  else
                    c_66 = u_66;
                  {
                    if(((f_66 != NULL) && (f_66 != v_66)))
                      _fail(v_66);
                    else
                      f_66 = v_66;
                    {
                      t = not_null(f_66);
                      {
                        ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL;
                        t = last_0(t);
                        {
                          w_66 = t;
                          {
                            if(((b_66 != NULL) && (b_66 != w_66)))
                              _fail(w_66);
                            else
                              b_66 = w_66;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_66)), not_null(c_66)), not_null(f_66));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    x_66 = t;
                                    k_65 :
                                    if(match_cons(x_66, sym__6))
                                      {
                                        y_66 = ATgetArgument(x_66, 0);
                                        z_66 = ATgetArgument(x_66, 1);
                                        a_67 = ATgetArgument(x_66, 2);
                                        b_67 = ATgetArgument(x_66, 3);
                                        c_67 = ATgetArgument(x_66, 4);
                                        d_67 = ATgetArgument(x_66, 5);
                                        {
                                          if(((g_66 != NULL) && (g_66 != y_66)))
                                            _fail(y_66);
                                          else
                                            g_66 = y_66;
                                          {
                                            if(((h_66 != NULL) && (h_66 != z_66)))
                                              _fail(z_66);
                                            else
                                              h_66 = z_66;
                                            {
                                              if(((i_66 != NULL) && (i_66 != a_67)))
                                                _fail(a_67);
                                              else
                                                i_66 = a_67;
                                              {
                                                if(((j_66 != NULL) && (j_66 != b_67)))
                                                  _fail(b_67);
                                                else
                                                  j_66 = b_67;
                                                {
                                                  if(((k_66 != NULL) && (k_66 != c_67)))
                                                    _fail(c_67);
                                                  else
                                                    k_66 = c_67;
                                                  if(((l_66 != NULL) && (l_66 != d_67)))
                                                    _fail(d_67);
                                                  else
                                                    l_66 = d_67;
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
    t = s_15;
    {
      ATerm g_67 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(k_66)), not_null(i_66)), not_null(f_66));
      {
        t = concat_0(t);
        {
          g_67 = t;
          if(((e_67 != NULL) && (e_67 != g_67)))
            _fail(g_67);
          else
            e_67 = g_67;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(w_65), term_u_15), not_null(h_66), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(e_67)), not_null(c_66)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_66))), (ATerm) ATmakeAppl(sym_Op_2, not_null(w_65), not_null(j_66)))), (ATerm)ATmakeAppl(sym_Op_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_66))), (ATerm) ATmakeAppl(sym_Op_2, not_null(w_65), not_null(l_66)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(g_66))))));
    }
    return(t);
  }
  ATerm l_68 (ATerm t)
  {
    ATerm i_67 = NULL;
    ATerm j_67 = NULL;
    t = new_0(t);
    {
      j_67 = t;
      if(((i_67 != NULL) && (i_67 != j_67)))
        _fail(j_67);
      else
        i_67 = j_67;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(w_65), term_u_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_67)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_67))), (ATerm) ATmakeAppl(sym_Op_2, not_null(w_65), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_67))), (ATerm) ATmakeAppl(sym_Op_2, not_null(w_65), (ATerm) ATempty))), term_r_11))));
    return(t);
  }
  ATerm m_68 (ATerm t)
  {
    ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL,i_68 = NULL;
    ATerm v_15;
    v_15 = t;
    {
      ATerm t_67 = NULL;
      ATerm u_67 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL;
      t = new_0(t);
      {
        t_67 = t;
        {
          if(((m_67 != NULL) && (m_67 != t_67)))
            _fail(t_67);
          else
            m_67 = t_67;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_65), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_67)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  u_67 = t;
                  q_65 :
                  if(match_cons(u_67, sym__6))
                    {
                      b_68 = ATgetArgument(u_67, 0);
                      c_68 = ATgetArgument(u_67, 1);
                      d_68 = ATgetArgument(u_67, 2);
                      f_68 = ATgetArgument(u_67, 3);
                      g_68 = ATgetArgument(u_67, 4);
                      h_68 = ATgetArgument(u_67, 5);
                      {
                        if(((n_67 != NULL) && (n_67 != b_68)))
                          _fail(b_68);
                        else
                          n_67 = b_68;
                        {
                          if(((o_67 != NULL) && (o_67 != c_68)))
                            _fail(c_68);
                          else
                            o_67 = c_68;
                          {
                            if(((p_67 != NULL) && (p_67 != d_68)))
                              _fail(d_68);
                            else
                              p_67 = d_68;
                            {
                              if(((q_67 != NULL) && (q_67 != f_68)))
                                _fail(f_68);
                              else
                                q_67 = f_68;
                              {
                                if(((r_67 != NULL) && (r_67 != g_68)))
                                  _fail(g_68);
                                else
                                  r_67 = g_68;
                                if(((s_67 != NULL) && (s_67 != h_68)))
                                  _fail(h_68);
                                else
                                  s_67 = h_68;
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
    t = v_15;
    {
      ATerm j_68 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_67), not_null(r_67));
      {
        t = conc_0(t);
        {
          j_68 = t;
          if(((i_68 != NULL) && (i_68 != j_68)))
            _fail(j_68);
          else
            i_68 = j_68;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(w_65), term_w_15), not_null(o_67), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(i_68)), not_null(m_67)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_67))), (ATerm) ATmakeAppl(sym_Op_2, not_null(w_65), not_null(q_67)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(w_65), not_null(s_67)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(n_67))))));
    }
    return(t);
  }
  v_65 = t;
  s_65 :
  if(match_cons(v_65, sym__3))
    {
      w_65 = ATgetArgument(v_65, 0);
      x_65 = ATgetArgument(v_65, 1);
      y_65 = ATgetArgument(v_65, 2);
      t_65 :
      if(match_string(x_65, "T"))
        {
          u_65 :
          if(match_int(y_65, 0))
            {
              ATerm x_15 = t;
              int d_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_68(t);
                  ;
                  LocalPopChoice(d_16);
                }
              else
                {
                  t = x_15;
                  t = l_68(t);
                }
            }
          else
            {
              t = k_68(t);
            }
        }
      else
        {
          if(match_string(x_65, "D"))
            {
              t = m_68(t);
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
ATerm CongruenceDef_0 (ATerm t)
{
  ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL;
  b_69 = t;
  y_68 :
  if(match_cons(b_69, sym__2))
    {
      c_69 = ATgetArgument(b_69, 0);
      h_69 = ATgetArgument(b_69, 1);
      z_68 :
      if(match_cons(c_69, sym__2))
        {
          d_69 = ATgetArgument(c_69, 0);
          g_69 = ATgetArgument(c_69, 1);
          a_69 :
          if(match_cons(d_69, sym_Mod_2))
            {
              e_69 = ATgetArgument(d_69, 0);
              f_69 = ATgetArgument(d_69, 1);
              {
                ATerm m_69 = NULL;
                ATerm n_69 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(e_69), not_null(f_69), not_null(g_69));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      n_69 = t;
                      if(((m_69 != NULL) && (m_69 != n_69)))
                        _fail(n_69);
                      else
                        m_69 = n_69;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_69), not_null(h_69));
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm get_definition_0 (ATerm t)
{
  ATerm i_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      ;
      LocalPopChoice(q_16);
    }
  else
    {
      t = i_16;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL;
  t_69 = t;
  r_69 :
  if(match_cons(t_69, sym__5))
    {
      u_69 = ATgetArgument(t_69, 0);
      x_69 = ATgetArgument(t_69, 1);
      y_69 = ATgetArgument(t_69, 2);
      z_69 = ATgetArgument(t_69, 3);
      a_70 = ATgetArgument(t_69, 4);
      s_69 :
      if(((ATgetType(u_69) == AT_LIST) && !(ATisEmpty(u_69))))
        {
          v_69 = ATgetFirst((ATermList) u_69);
          w_69 = (ATerm) ATgetNext((ATermList) u_69);
          t = (ATerm) ATmakeAppl(sym__5, not_null(w_69), not_null(x_69), not_null(y_69), not_null(z_69), (ATerm) ATinsert(CheckATermList(not_null(a_70)), not_null(v_69)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm w_104 (ATerm))
{
  ATerm k_70 = NULL,q_70 = NULL,r_70 = NULL;
  k_70 = t;
  j_70 :
  if(match_cons(k_70, sym__2))
    {
      q_70 = ATgetArgument(k_70, 0);
      r_70 = ATgetArgument(k_70, 1);
      {
        t = not_null(q_70);
        {
          ATerm v_70 (ATerm t)
          {
            ATerm r_16 = t;
            int s_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
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
                      ATerm n_2 (ATerm t)
                      {
                        t = not_null(r_70);
                        return(t);
                      }
                      t = HdMember_p__2(t, w_104, n_2);
                      t = v_70(t);
                      ;
                      LocalPopChoice(u_16);
                    }
                  else
                    {
                      t = t_16;
                      t = Cons_2(t, _id, v_70);
                    }
                }
              }
            return(t);
          }
          t = v_70(t);
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
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL;
  d_71 = t;
  x_70 :
  if(match_cons(d_71, sym__2))
    {
      e_71 = ATgetArgument(d_71, 0);
      f_71 = ATgetArgument(d_71, 1);
      c_71 :
      if(((ATgetType(f_71) == AT_LIST) && !(ATisEmpty(f_71))))
        {
          g_71 = ATgetFirst((ATermList) f_71);
          h_71 = (ATerm) ATgetNext((ATermList) f_71);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_71)), not_null(g_71)), not_null(h_71));
        }
      else
        {
          _fail(t);
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
  ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL;
  o_71 = t;
  n_71 :
  if(match_cons(o_71, sym__2))
    {
      p_71 = ATgetArgument(o_71, 0);
      q_71 = ATgetArgument(o_71, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_71)), not_null(p_71));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,r_72 = NULL;
  i_72 = t;
  v_71 :
  if(match_cons(i_72, sym__2))
    {
      j_72 = ATgetArgument(i_72, 0);
      m_72 = ATgetArgument(i_72, 1);
      w_71 :
      if(((ATgetType(j_72) == AT_LIST) && !(ATisEmpty(j_72))))
        {
          k_72 = ATgetFirst((ATermList) j_72);
          l_72 = (ATerm) ATgetNext((ATermList) j_72);
          h_72 :
          if(((ATgetType(m_72) == AT_LIST) && !(ATisEmpty(m_72))))
            {
              n_72 = ATgetFirst((ATermList) m_72);
              r_72 = (ATerm) ATgetNext((ATermList) m_72);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(k_72), not_null(n_72)), (ATerm) ATmakeAppl(sym__2, not_null(l_72), not_null(r_72)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL;
  g_74 = t;
  y_72 :
  if(match_cons(g_74, sym__2))
    {
      h_74 = ATgetArgument(g_74, 0);
      i_74 = ATgetArgument(g_74, 1);
      z_72 :
      if(((ATgetType(h_74) == AT_LIST) && ATisEmpty(h_74)))
        {
          f_74 :
          if(((ATgetType(i_74) == AT_LIST) && ATisEmpty(i_74)))
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
ATerm genzip_4 (ATerm t, ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm))
{
  ATerm k_74 (ATerm t)
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_101(t);
        ;
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
        {
          t = n_101(t);
          {
            t = _2(t, p_101, k_74);
            t = o_101(t);
          }
        }
      }
    return(t);
  }
  t = k_74(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm r_101 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, r_101);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm v_74 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL;
  v_74 = t;
  t_74 :
  if(((ATgetType(v_74) == AT_LIST) && !(ATisEmpty(v_74))))
    {
      t_75 = ATgetFirst((ATermList) v_74);
      w_75 = (ATerm) ATgetNext((ATermList) v_74);
      u_74 :
      if(match_cons(t_75, sym__2))
        {
          u_75 = ATgetArgument(t_75, 0);
          v_75 = ATgetArgument(t_75, 1);
          {
            ATerm a_76 = NULL,b_76 = NULL,c_79 = NULL,i_79 = NULL;
            ATerm b_17;
            b_17 = t;
            {
              ATerm c_76 = NULL;
              ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL;
              t = not_null(v_75);
              {
                c_76 = t;
                {
                  t = SSL_explode_term(not_null(c_76));
                  {
                    z_78 = t;
                    o_74 :
                    if(match_cons(z_78, sym__2))
                      {
                        a_79 = ATgetArgument(z_78, 0);
                        b_79 = ATgetArgument(z_78, 1);
                        {
                          if(((a_76 != NULL) && (a_76 != a_79)))
                            _fail(a_79);
                          else
                            a_76 = a_79;
                          if(((b_76 != NULL) && (b_76 != b_79)))
                            _fail(b_79);
                          else
                            b_76 = b_79;
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
            t = b_17;
            {
              ATerm j_17;
              j_17 = t;
              {
                ATerm d_79 = NULL;
                ATerm f_79 = NULL,g_79 = NULL,h_79 = NULL;
                t = not_null(u_75);
                {
                  d_79 = t;
                  {
                    t = SSL_explode_term(not_null(d_79));
                    {
                      f_79 = t;
                      r_74 :
                      if(match_cons(f_79, sym__2))
                        {
                          g_79 = ATgetArgument(f_79, 0);
                          h_79 = ATgetArgument(f_79, 1);
                          {
                            if(((a_76 != NULL) && (a_76 != g_79)))
                              _fail(g_79);
                            else
                              a_76 = g_79;
                            if(((c_79 != NULL) && (c_79 != h_79)))
                              _fail(h_79);
                            else
                              c_79 = h_79;
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
              t = j_17;
              {
                ATerm j_79 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_79), not_null(b_76));
                {
                  t = zip_1(t, _id);
                  {
                    j_79 = t;
                    if(((i_79 != NULL) && (i_79 != j_79)))
                      _fail(j_79);
                    else
                      i_79 = j_79;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_79), not_null(w_75));
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
  ATerm t_79 = NULL,u_79 = NULL,v_79 = NULL,w_79 = NULL,x_79 = NULL;
  t_79 = t;
  r_79 :
  if(((ATgetType(t_79) == AT_LIST) && !(ATisEmpty(t_79))))
    {
      u_79 = ATgetFirst((ATermList) t_79);
      x_79 = (ATerm) ATgetNext((ATermList) t_79);
      s_79 :
      if(match_cons(u_79, sym__2))
        {
          v_79 = ATgetArgument(u_79, 0);
          w_79 = ATgetArgument(u_79, 1);
          {
            ATerm z_79 = NULL;
            if(((v_79 != NULL) && (v_79 != w_79)))
              _fail(w_79);
            else
              v_79 = w_79;
            {
              if(((z_79 != NULL) && (z_79 != x_79)))
                _fail(x_79);
              else
                z_79 = x_79;
              t = not_null(z_79);
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
ATerm diff_0 (ATerm t)
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 (ATerm t)
      {
        ATerm c_80 = NULL;
        c_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(c_80));
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        ATerm t_17 = t;
        int u_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 (ATerm t)
            {
              ATerm v_17 = t;
              int w_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(w_17);
                }
              else
                {
                  t = v_17;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, r_2);
            ;
            LocalPopChoice(u_17);
          }
        else
          {
            t = t_17;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, o_2, p_2, q_2);
      ;
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm w_125 (ATerm), ATerm x_125 (ATerm), ATerm y_125 (ATerm))
{
  ATerm p_80 = NULL,q_80 = NULL,t_80 = NULL,u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL;
  p_80 = t;
  n_80 :
  if(match_cons(p_80, sym__5))
    {
      q_80 = ATgetArgument(p_80, 0);
      v_80 = ATgetArgument(p_80, 1);
      w_80 = ATgetArgument(p_80, 2);
      x_80 = ATgetArgument(p_80, 3);
      y_80 = ATgetArgument(p_80, 4);
      o_80 :
      if(((ATgetType(q_80) == AT_LIST) && !(ATisEmpty(q_80))))
        {
          t_80 = ATgetFirst((ATermList) q_80);
          u_80 = (ATerm) ATgetNext((ATermList) q_80);
          {
            ATerm f_81 = NULL,g_81 = NULL,h_81 = NULL,i_81 = NULL,o_81 = NULL,q_81 = NULL,s_81 = NULL;
            ATerm h_18;
            h_18 = t;
            {
              ATerm j_81 = NULL,k_81 = NULL,l_81 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_80), not_null(w_80));
              {
                t = w_125(t);
                {
                  j_81 = t;
                  j_80 :
                  if(match_cons(j_81, sym__2))
                    {
                      k_81 = ATgetArgument(j_81, 0);
                      l_81 = ATgetArgument(j_81, 1);
                      {
                        ATerm m_81 = NULL;
                        if(((g_81 != NULL) && (g_81 != k_81)))
                          _fail(k_81);
                        else
                          g_81 = k_81;
                        {
                          if(((f_81 != NULL) && (f_81 != l_81)))
                            _fail(l_81);
                          else
                            f_81 = l_81;
                          {
                            t = not_null(g_81);
                            {
                              ATerm n_81 = NULL;
                              t = x_125(t);
                              {
                                m_81 = t;
                                {
                                  if(((h_81 != NULL) && (h_81 != m_81)))
                                    _fail(m_81);
                                  else
                                    h_81 = m_81;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_81), not_null(v_80));
                                    {
                                      t = diff_0(t);
                                      {
                                        n_81 = t;
                                        if(((i_81 != NULL) && (i_81 != n_81)))
                                          _fail(n_81);
                                        else
                                          i_81 = n_81;
                                      }
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
            t = h_18;
            {
              ATerm j_18;
              j_18 = t;
              {
                ATerm p_81 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_81), not_null(u_80));
                {
                  t = conc_0(t);
                  {
                    p_81 = t;
                    if(((o_81 != NULL) && (o_81 != p_81)))
                      _fail(p_81);
                    else
                      o_81 = p_81;
                  }
                }
              }
              t = j_18;
              {
                ATerm k_18;
                k_18 = t;
                {
                  ATerm r_81 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_81), not_null(v_80));
                  {
                    t = conc_0(t);
                    {
                      r_81 = t;
                      if(((q_81 != NULL) && (q_81 != r_81)))
                        _fail(r_81);
                      else
                        q_81 = r_81;
                    }
                  }
                }
                t = k_18;
                {
                  ATerm t_81 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(t_80), not_null(g_81), not_null(x_80));
                  {
                    t = y_125(t);
                    {
                      t_81 = t;
                      if(((s_81 != NULL) && (s_81 != t_81)))
                        _fail(t_81);
                      else
                        s_81 = t_81;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(o_81), not_null(q_81), not_null(f_81), not_null(s_81), not_null(y_80));
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
ATerm GnExit_0 (ATerm t)
{
  ATerm h_82 = NULL,i_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL;
  h_82 = t;
  f_82 :
  if(match_cons(h_82, sym__5))
    {
      i_82 = ATgetArgument(h_82, 0);
      k_82 = ATgetArgument(h_82, 1);
      l_82 = ATgetArgument(h_82, 2);
      m_82 = ATgetArgument(h_82, 3);
      n_82 = ATgetArgument(h_82, 4);
      g_82 :
      if(((ATgetType(i_82) == AT_LIST) && ATisEmpty(i_82)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_82), not_null(n_82));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm GnInitRoots_0 (ATerm t)
{
  ATerm v_82 = NULL,w_82 = NULL,x_82 = NULL,y_82 = NULL;
  v_82 = t;
  u_82 :
  if(match_cons(v_82, sym__3))
    {
      w_82 = ATgetArgument(v_82, 0);
      x_82 = ATgetArgument(v_82, 1);
      y_82 = ATgetArgument(v_82, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(w_82), not_null(w_82), not_null(x_82), not_null(y_82), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm x_113 (ATerm), ATerm y_113 (ATerm))
{
  ATerm d_83 (ATerm t)
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_113(t);
        ;
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
        {
          t = y_113(t);
          t = d_83(t);
        }
      }
    return(t);
  }
  t = d_83(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm c_114 (ATerm))
{
  t = a_114(t);
  t = while_not_2(t, b_114, c_114);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm h_125 (ATerm), ATerm i_125 (ATerm), ATerm j_125 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm n_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, h_125, i_125, j_125);
        ;
        LocalPopChoice(p_18);
      }
    else
      {
        t = n_18;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, s_2);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = svars_arity_0(t);
    {
      ATerm v_2 (ATerm t)
      {
        t = try_1(t, DefinitionExists_0);
        return(t);
      }
      t = map_1(t, v_2);
    }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm k_83 = NULL,l_83 = NULL,o_83 = NULL,r_83 = NULL;
    k_83 = t;
    f_83 :
    if(match_cons(k_83, sym__3))
      {
        l_83 = ATgetArgument(k_83, 0);
        o_83 = ATgetArgument(k_83, 1);
        r_83 = ATgetArgument(k_83, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(r_83)), not_null(o_83));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, t_2, u_2);
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        ;
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        {
          t = MissingDefs_0(t);
          {
            t = term_v_6;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm y_108 (ATerm))
{
  ATerm d_84 = NULL,e_84 = NULL,f_84 = NULL;
  d_84 = t;
  c_84 :
  if(match_cons(d_84, sym__2))
    {
      e_84 = ATgetArgument(d_84, 0);
      f_84 = ATgetArgument(d_84, 1);
      {
        ATerm i_84 = NULL,j_84 = NULL,k_84 = NULL;
        ATerm w_18;
        w_18 = t;
        {
          ATerm l_84 = NULL;
          ATerm m_84 = NULL,n_84 = NULL,o_84 = NULL;
          t = y_108(t);
          {
            l_84 = t;
            {
              if(((i_84 != NULL) && (i_84 != l_84)))
                _fail(l_84);
              else
                i_84 = l_84;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(i_84), not_null(e_84), not_null(f_84));
                {
                  t = table_push_0(t);
                  {
                    ATerm y_18 = t;
                    int z_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_84), term_a_19);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(z_18);
                      }
                    else
                      {
                        t = y_18;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      m_84 = t;
                      b_84 :
                      if(((ATgetType(m_84) == AT_LIST) && !(ATisEmpty(m_84))))
                        {
                          n_84 = ATgetFirst((ATermList) m_84);
                          o_84 = (ATerm) ATgetNext((ATermList) m_84);
                          {
                            if(((j_84 != NULL) && (j_84 != n_84)))
                              _fail(n_84);
                            else
                              j_84 = n_84;
                            {
                              if(((k_84 != NULL) && (k_84 != o_84)))
                                _fail(o_84);
                              else
                                k_84 = o_84;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(i_84), term_a_19, (ATerm) ATinsert(CheckATermList(not_null(k_84)), (ATerm) ATinsert(CheckATermList(not_null(j_84)), not_null(e_84))));
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
        t = w_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm u_84 = NULL,v_84 = NULL,w_84 = NULL;
  u_84 = t;
  t_84 :
  if(match_cons(u_84, sym__2))
    {
      v_84 = ATgetArgument(u_84, 0);
      w_84 = ATgetArgument(u_84, 1);
      if(((v_84 != NULL) && (v_84 != w_84)))
        _fail(w_84);
      else
        v_84 = w_84;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm e_105 (ATerm), ATerm f_105 (ATerm))
{
  ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL;
  c_85 = t;
  b_85 :
  if(((ATgetType(c_85) == AT_LIST) && !(ATisEmpty(c_85))))
    {
      d_85 = ATgetFirst((ATermList) c_85);
      e_85 = (ATerm) ATgetNext((ATermList) c_85);
      {
        t = f_105(t);
        {
          ATerm w_2 (ATerm t)
          {
            ATerm h_85 = NULL;
            h_85 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_85), not_null(h_85));
              t = e_105(t);
            }
            return(t);
          }
          t = fetch_1(t, w_2);
        }
        t = not_null(e_85);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm a_105 (ATerm))
{
  ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL;
  n_85 = t;
  m_85 :
  if(match_cons(n_85, sym__2))
    {
      o_85 = ATgetArgument(n_85, 0);
      p_85 = ATgetArgument(n_85, 1);
      {
        t = not_null(o_85);
        {
          ATerm t_85 (ATerm t)
          {
            ATerm g_19 = t;
            int i_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(p_85);
                ;
                LocalPopChoice(i_19);
              }
            else
              {
                t = g_19;
                {
                  ATerm j_19 = t;
                  int k_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_2 (ATerm t)
                      {
                        t = not_null(p_85);
                        return(t);
                      }
                      t = HdMember_p__2(t, a_105, x_2);
                      t = t_85(t);
                      ;
                      LocalPopChoice(k_19);
                    }
                  else
                    {
                      t = j_19;
                      t = Cons_2(t, _id, t_85);
                    }
                }
              }
            return(t);
          }
          t = t_85(t);
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
ATerm Arities_0 (ATerm t)
{
  ATerm y_85 = NULL;
  ATerm d_86 = NULL;
  y_85 = t;
  {
    ATerm e_86 = NULL,f_86 = NULL,g_86 = NULL;
    t = not_null(y_85);
    {
      ATerm y_2 (ATerm t)
      {
        t = term_l_19;
        return(t);
      }
      t = rewrite_1(t, y_2);
      {
        e_86 = t;
        w_85 :
        if(match_cons(e_86, sym_Defined_2))
          {
            f_86 = ATgetArgument(e_86, 0);
            g_86 = ATgetArgument(e_86, 1);
            x_85 :
            if(match_string(f_86, "h_0"))
              {
                if(((d_86 != NULL) && (d_86 != g_86)))
                  _fail(g_86);
                else
                  d_86 = g_86;
              }
            else
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
    t = not_null(d_86);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm n_86 = NULL,o_86 = NULL,p_86 = NULL;
  n_86 = t;
  m_86 :
  if(((ATgetType(n_86) == AT_LIST) && !(ATisEmpty(n_86))))
    {
      o_86 = ATgetFirst((ATermList) n_86);
      p_86 = (ATerm) ATgetNext((ATermList) n_86);
      t = not_null(o_86);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm u_86 = NULL,v_86 = NULL,w_86 = NULL;
  u_86 = t;
  t_86 :
  if(match_cons(u_86, sym__2))
    {
      v_86 = ATgetArgument(u_86, 0);
      w_86 = ATgetArgument(u_86, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_86), not_null(w_86));
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
ATerm rewrite_1 (ATerm t, ATerm a_109 (ATerm))
{
  ATerm g_87 = NULL;
  ATerm i_87 = NULL;
  g_87 = t;
  {
    ATerm j_87 = NULL;
    t = term_t_15;
    {
      t = a_109(t);
      {
        j_87 = t;
        if(((i_87 != NULL) && (i_87 != j_87)))
          _fail(j_87);
        else
          i_87 = j_87;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_87), not_null(g_87));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm r_87 = NULL,s_87 = NULL,t_87 = NULL;
  r_87 = t;
  q_87 :
  if(match_cons(r_87, sym__2))
    {
      s_87 = ATgetArgument(r_87, 0);
      t_87 = ATgetArgument(r_87, 1);
      {
        ATerm x_87 = NULL,y_87 = NULL;
        ATerm z_87 = NULL,a_88 = NULL,b_88 = NULL,c_88 = NULL;
        t = not_null(r_87);
        {
          ATerm z_2 (ATerm t)
          {
            t = term_m_19;
            return(t);
          }
          t = rewrite_1(t, z_2);
          {
            z_87 = t;
            o_87 :
            if(match_cons(z_87, sym_Defined_3))
              {
                a_88 = ATgetArgument(z_87, 0);
                b_88 = ATgetArgument(z_87, 1);
                c_88 = ATgetArgument(z_87, 2);
                p_87 :
                if(match_string(a_88, "e_0"))
                  {
                    if(((x_87 != NULL) && (x_87 != b_88)))
                      _fail(b_88);
                    else
                      x_87 = b_88;
                    if(((y_87 != NULL) && (y_87 != c_88)))
                      _fail(c_88);
                    else
                      y_87 = c_88;
                  }
                else
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
        t = (ATerm) ATinsert(CheckATermList(not_null(y_87)), not_null(x_87));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm r_107 (ATerm))
{
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_107(t);
      ;
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
      {
        ATerm j_88 = NULL,k_88 = NULL,n_88 = NULL;
        j_88 = t;
        i_88 :
        if(((ATgetType(j_88) == AT_LIST) && !(ATisEmpty(j_88))))
          {
            k_88 = ATgetFirst((ATermList) j_88);
            n_88 = (ATerm) ATgetNext((ATermList) j_88);
            {
              ATerm t_88 = NULL,v_88 = NULL;
              ATerm r_19;
              r_19 = t;
              {
                ATerm u_88 = NULL;
                t = not_null(k_88);
                {
                  t = r_107(t);
                  {
                    u_88 = t;
                    if(((t_88 != NULL) && (t_88 != u_88)))
                      _fail(u_88);
                    else
                      t_88 = u_88;
                  }
                }
              }
              t = r_19;
              {
                ATerm w_88 = NULL;
                t = not_null(n_88);
                {
                  t = foldr_3(t, p_107, q_107, r_107);
                  {
                    w_88 = t;
                    if(((v_88 != NULL) && (v_88 != w_88)))
                      _fail(w_88);
                    else
                      v_88 = w_88;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_88), not_null(v_88));
                  t = q_107(t);
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
ATerm length_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    t = term_s_19;
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_v_6;
    return(t);
  }
  t = foldr_3(t, a_3, add_0, b_3);
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm g_89 = NULL,h_89 = NULL,i_89 = NULL,j_89 = NULL;
    g_89 = t;
    f_89 :
    if(match_cons(g_89, sym_SDef_3))
      {
        h_89 = ATgetArgument(g_89, 0);
        i_89 = ATgetArgument(g_89, 1);
        j_89 = ATgetArgument(g_89, 2);
        {
          ATerm o_89 = NULL,p_89 = NULL,q_89 = NULL;
          ATerm x_19;
          x_19 = t;
          {
            ATerm r_89 = NULL;
            t = not_null(i_89);
            {
              ATerm s_89 = NULL;
              t = length_0(t);
              {
                r_89 = t;
                {
                  if(((p_89 != NULL) && (p_89 != r_89)))
                    _fail(r_89);
                  else
                    p_89 = r_89;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_89), not_null(p_89));
                    {
                      ATerm t_89 = NULL,v_89 = NULL;
                      ATerm y_19 = t;
                      int z_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          ;
                          LocalPopChoice(z_19);
                        }
                      else
                        {
                          t = y_19;
                          t = (ATerm) ATempty;
                        }
                      {
                        s_89 = t;
                        {
                          if(((o_89 != NULL) && (o_89 != s_89)))
                            _fail(s_89);
                          else
                            o_89 = s_89;
                          {
                            ATerm u_89 = NULL;
                            t = not_null(h_89);
                            {
                              ATerm a_20 = t;
                              int b_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  ;
                                  LocalPopChoice(b_20);
                                }
                              else
                                {
                                  t = a_20;
                                  t = (ATerm) ATempty;
                                }
                              {
                                u_89 = t;
                                if(((t_89 != NULL) && (t_89 != u_89)))
                                  _fail(u_89);
                                else
                                  t_89 = u_89;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(p_89)), not_null(t_89));
                              {
                                t = union_0(t);
                                {
                                  v_89 = t;
                                  {
                                    if(((q_89 != NULL) && (q_89 != v_89)))
                                      _fail(v_89);
                                    else
                                      q_89 = v_89;
                                    {
                                      ATerm c_20;
                                      c_20 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(h_89), not_null(p_89)), (ATerm) ATmakeAppl(sym_Defined_3, term_d_20, not_null(g_89), not_null(o_89)));
                                        {
                                          ATerm d_3 (ATerm t)
                                          {
                                            t = term_m_19;
                                            return(t);
                                          }
                                          t = assert_1(t, d_3);
                                        }
                                      }
                                      t = c_20;
                                      {
                                        ATerm e_20;
                                        e_20 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_89), (ATerm) ATmakeAppl(sym_Defined_2, term_j_20, not_null(q_89)));
                                          {
                                            ATerm e_3 (ATerm t)
                                            {
                                              t = term_l_19;
                                              return(t);
                                            }
                                            t = assert_1(t, e_3);
                                          }
                                        }
                                        t = e_20;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = x_19;
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, c_3);
  return(t);
}
ATerm needed_defs_0 (ATerm t)
{
  ATerm c_90 = NULL;
  ATerm d_90 = NULL;
  t = sort_defs_0(t);
  {
    d_90 = t;
    if(((c_90 != NULL) && (c_90 != d_90)))
      _fail(d_90);
    else
      c_90 = d_90;
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_l_20), not_null(c_90), (ATerm) ATempty);
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm e_82 (ATerm))
{
  ATerm k_90 = NULL,l_90 = NULL;
  k_90 = t;
  j_90 :
  if(match_cons(k_90, sym_Strategies_1))
    {
      l_90 = ATgetArgument(k_90, 0);
      {
        ATerm o_90 = NULL,q_90 = NULL;
        ATerm p_90 = NULL;
        t = SSLgetAnnotations(not_null(k_90));
        {
          p_90 = t;
          if(((o_90 != NULL) && (o_90 != p_90)))
            _fail(p_90);
          else
            o_90 = p_90;
        }
        {
          t = not_null(l_90);
          {
            ATerm s_90 = NULL;
            t = e_82(t);
            {
              q_90 = t;
              {
                ATerm t_90 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(q_90)), not_null(o_90));
                {
                  t_90 = t;
                  if(((s_90 != NULL) && (s_90 != t_90)))
                    _fail(t_90);
                  else
                    s_90 = t_90;
                }
                t = not_null(s_90);
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
ATerm Cons_2 (ATerm t, ATerm a_82 (ATerm), ATerm b_82 (ATerm))
{
  ATerm e_91 = NULL,f_91 = NULL,g_91 = NULL;
  e_91 = t;
  d_91 :
  if(((ATgetType(e_91) == AT_LIST) && !(ATisEmpty(e_91))))
    {
      f_91 = ATgetFirst((ATermList) e_91);
      g_91 = (ATerm) ATgetNext((ATermList) e_91);
      {
        ATerm k_91 = NULL,m_91 = NULL;
        ATerm l_91 = NULL;
        t = SSLgetAnnotations(not_null(e_91));
        {
          l_91 = t;
          if(((k_91 != NULL) && (k_91 != l_91)))
            _fail(l_91);
          else
            k_91 = l_91;
        }
        {
          t = not_null(f_91);
          {
            ATerm o_91 = NULL;
            t = a_82(t);
            {
              m_91 = t;
              {
                t = not_null(g_91);
                {
                  ATerm q_91 = NULL;
                  t = b_82(t);
                  {
                    o_91 = t;
                    {
                      ATerm r_91 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_91)), not_null(m_91)), not_null(k_91));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm j_82 (ATerm))
{
  ATerm c_92 = NULL,d_92 = NULL;
  c_92 = t;
  b_92 :
  if(match_cons(c_92, sym_Specification_1))
    {
      d_92 = ATgetArgument(c_92, 0);
      {
        ATerm g_92 = NULL,i_92 = NULL;
        ATerm h_92 = NULL;
        t = SSLgetAnnotations(not_null(c_92));
        {
          h_92 = t;
          if(((g_92 != NULL) && (g_92 != h_92)))
            _fail(h_92);
          else
            g_92 = h_92;
        }
        {
          t = not_null(d_92);
          {
            ATerm k_92 = NULL;
            t = j_82(t);
            {
              i_92 = t;
              {
                ATerm l_92 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(i_92)), not_null(g_92));
                {
                  l_92 = t;
                  if(((k_92 != NULL) && (k_92 != l_92)))
                    _fail(l_92);
                  else
                    k_92 = l_92;
                }
                t = not_null(k_92);
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
ATerm _2 (ATerm t, ATerm r_80 (ATerm), ATerm s_80 (ATerm))
{
  ATerm w_92 = NULL,x_92 = NULL,y_92 = NULL;
  w_92 = t;
  v_92 :
  if(match_cons(w_92, sym__2))
    {
      x_92 = ATgetArgument(w_92, 0);
      y_92 = ATgetArgument(w_92, 1);
      {
        ATerm c_93 = NULL,e_93 = NULL;
        ATerm d_93 = NULL;
        t = SSLgetAnnotations(not_null(w_92));
        {
          d_93 = t;
          if(((c_93 != NULL) && (c_93 != d_93)))
            _fail(d_93);
          else
            c_93 = d_93;
        }
        {
          t = not_null(x_92);
          {
            ATerm g_93 = NULL;
            t = r_80(t);
            {
              e_93 = t;
              {
                t = not_null(y_92);
                {
                  ATerm i_93 = NULL;
                  t = s_80(t);
                  {
                    g_93 = t;
                    {
                      ATerm j_93 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(e_93), not_null(g_93)), not_null(c_93));
                      {
                        j_93 = t;
                        if(((i_93 != NULL) && (i_93 != j_93)))
                          _fail(j_93);
                        else
                          i_93 = j_93;
                      }
                      t = not_null(i_93);
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
  ATerm p_20;
  p_20 = t;
  {
    ATerm q_93 = NULL;
    ATerm r_93 = NULL;
    t = term_t_15;
    {
      t = whoami_0(t);
      {
        r_93 = t;
        if(((q_93 != NULL) && (q_93 != r_93)))
          _fail(r_93);
        else
          q_93 = r_93;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_20), not_null(q_93)), term_r_20));
      {
        t = printnl_0(t);
        {
          t = term_v_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = p_20;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm v_93 = NULL,w_93 = NULL,x_93 = NULL;
  v_93 = t;
  u_93 :
  if(match_cons(v_93, sym__2))
    {
      w_93 = ATgetArgument(v_93, 0);
      x_93 = ATgetArgument(v_93, 1);
      {
        ATerm v_20;
        v_20 = t;
        t = SSL_printnl(not_null(w_93), not_null(x_93));
        t = v_20;
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
  ATerm c_94 = NULL;
  c_94 = t;
  t = SSL_implode_string(not_null(c_94));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(x_20);
    }
  else
    {
      t = w_20;
      {
        ATerm j_94 = NULL,k_94 = NULL,l_94 = NULL;
        j_94 = t;
        g_94 :
        if(((ATgetType(j_94) == AT_LIST) && !(ATisEmpty(j_94))))
          {
            k_94 = ATgetFirst((ATermList) j_94);
            l_94 = (ATerm) ATgetNext((ATermList) j_94);
            {
              t = not_null(k_94);
              {
                ATerm f_3 (ATerm t)
                {
                  t = not_null(l_94);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, f_3);
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
  ATerm v_94 = NULL;
  ATerm x_94 = NULL;
  v_94 = t;
  {
    ATerm y_94 = NULL;
    ATerm a_95 = NULL,b_95 = NULL,c_95 = NULL;
    t = not_null(v_94);
    {
      y_94 = t;
      {
        t = SSL_explode_term(not_null(y_94));
        {
          a_95 = t;
          t_94 :
          if(match_cons(a_95, sym__2))
            {
              b_95 = ATgetArgument(a_95, 0);
              c_95 = ATgetArgument(a_95, 1);
              u_94 :
              if(match_string(b_95, ""))
                {
                  if(((x_94 != NULL) && (x_94 != c_95)))
                    _fail(c_95);
                  else
                    x_94 = c_95;
                }
              else
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
      t = not_null(x_94);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_103 (ATerm))
{
  ATerm g_95 (ATerm t)
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, g_95);
        ;
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        {
          t = Nil_0(t);
          t = q_103(t);
        }
      }
    return(t);
  }
  t = g_95(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm j_95 = NULL,k_95 = NULL,l_95 = NULL;
  j_95 = t;
  i_95 :
  if(match_cons(j_95, sym__2))
    {
      k_95 = ATgetArgument(j_95, 0);
      l_95 = ATgetArgument(j_95, 1);
      {
        t = not_null(k_95);
        {
          ATerm g_3 (ATerm t)
          {
            t = not_null(l_95);
            return(t);
          }
          t = at_end_1(t, g_3);
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
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm q_95 = NULL;
  q_95 = t;
  t = SSL_explode_string(not_null(q_95));
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
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(e_21);
    }
  else
    {
      t = d_21;
      {
        ATerm f_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, h_3);
            ;
            LocalPopChoice(h_21);
          }
        else
          {
            t = f_21;
            {
              ATerm z_95 = NULL,a_96 = NULL,b_96 = NULL;
              z_95 = t;
              y_95 :
              if(match_cons(z_95, sym_Path_1))
                {
                  a_96 = ATgetArgument(z_95, 0);
                  t = not_null(a_96);
                }
              else
                {
                  if(match_cons(z_95, sym_Var_1))
                    {
                      a_96 = ATgetArgument(z_95, 0);
                      {
                        t = not_null(a_96);
                        {
                          ATerm j_21 = t;
                          int k_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(k_21);
                            }
                          else
                            {
                              t = j_21;
                              {
                                ATerm i_3 (ATerm t)
                                {
                                  t = term_t_21;
                                  return(t);
                                }
                                t = debug_1(t, i_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(z_95, sym_Prefix_2))
                        {
                          a_96 = ATgetArgument(z_95, 0);
                          b_96 = ATgetArgument(z_95, 1);
                          {
                            ATerm m_96 = NULL,o_96 = NULL;
                            ATerm u_21;
                            u_21 = t;
                            {
                              ATerm n_96 = NULL;
                              t = not_null(a_96);
                              {
                                t = eval_config_0(t);
                                {
                                  n_96 = t;
                                  if(((m_96 != NULL) && (m_96 != n_96)))
                                    _fail(n_96);
                                  else
                                    m_96 = n_96;
                                }
                              }
                            }
                            t = u_21;
                            {
                              ATerm p_96 = NULL;
                              t = not_null(b_96);
                              {
                                t = eval_config_0(t);
                                {
                                  p_96 = t;
                                  if(((o_96 != NULL) && (o_96 != p_96)))
                                    _fail(p_96);
                                  else
                                    o_96 = p_96;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_96), not_null(o_96));
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
  ATerm x_96 = NULL;
  x_96 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_21, not_null(x_96));
    {
      t = table_get_0(t);
      {
        ATerm j_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm w_21;
            w_21 = t;
            {
              ATerm c_97 = NULL;
              ATerm d_97 = NULL;
              d_97 = t;
              if(((c_97 != NULL) && (c_97 != d_97)))
                _fail(d_97);
              else
                c_97 = d_97;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_v_21, not_null(x_96), not_null(c_97));
                t = table_put_0(t);
              }
            }
            t = w_21;
          }
          return(t);
        }
        t = try_1(t, j_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm r_119 (ATerm))
{
  ATerm k_3 (ATerm t)
  {
    ATerm e_22;
    e_22 = t;
    {
      ATerm h_97 = NULL;
      ATerm i_97 = NULL;
      t = term_f_22;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_97), term_l_22);
        t = geq_0(t);
      }
    }
    t = e_22;
    t = r_119(t);
    return(t);
  }
  t = try_1(t, k_3);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm o_97 = NULL,p_97 = NULL,q_97 = NULL,r_97 = NULL;
  o_97 = t;
  m_97 :
  if(match_cons(o_97, sym__2))
    {
      p_97 = ATgetArgument(o_97, 0);
      q_97 = ATgetArgument(o_97, 1);
      n_97 :
      if(match_cons(q_97, sym_Stream_1))
        {
          r_97 = ATgetArgument(q_97, 0);
          {
            ATerm u_97 = NULL;
            t = SSL_fputc(not_null(p_97), not_null(r_97));
            {
              ATerm v_97 = NULL;
              v_97 = t;
              if(((u_97 != NULL) && (u_97 != v_97)))
                _fail(v_97);
              else
                u_97 = v_97;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_97));
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
  ATerm c_98 = NULL,d_98 = NULL,g_98 = NULL,h_98 = NULL;
  c_98 = t;
  a_98 :
  if(match_cons(c_98, sym__2))
    {
      d_98 = ATgetArgument(c_98, 0);
      h_98 = ATgetArgument(c_98, 1);
      b_98 :
      if(match_cons(d_98, sym_Stream_1))
        {
          g_98 = ATgetArgument(d_98, 0);
          {
            ATerm k_98 = NULL;
            t = SSL_write_term_to_stream_text(not_null(g_98), not_null(h_98));
            {
              ATerm l_98 = NULL;
              l_98 = t;
              if(((k_98 != NULL) && (k_98 != l_98)))
                _fail(l_98);
              else
                k_98 = l_98;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_98));
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
  ATerm l_3 (ATerm t)
  {
    ATerm p_98 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm q_98 = NULL;
      q_98 = t;
      if(((p_98 != NULL) && (p_98 != q_98)))
        _fail(q_98);
      else
        p_98 = q_98;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_22, not_null(p_98));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, l_3);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL,a_99 = NULL,b_99 = NULL;
  y_98 = t;
  w_98 :
  if(match_cons(y_98, sym__2))
    {
      z_98 = ATgetArgument(y_98, 0);
      b_99 = ATgetArgument(y_98, 1);
      x_98 :
      if(match_cons(z_98, sym_Stream_1))
        {
          a_99 = ATgetArgument(z_98, 0);
          {
            ATerm e_99 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(a_99), not_null(b_99));
            {
              ATerm f_99 = NULL;
              f_99 = t;
              if(((e_99 != NULL) && (e_99 != f_99)))
                _fail(f_99);
              else
                e_99 = f_99;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_99));
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
ATerm WriteToFile_1 (ATerm t, ATerm n_118 (ATerm))
{
  ATerm m_99 = NULL,n_99 = NULL,o_99 = NULL;
  m_99 = t;
  l_99 :
  if(match_cons(m_99, sym__2))
    {
      n_99 = ATgetArgument(m_99, 0);
      o_99 = ATgetArgument(m_99, 1);
      {
        ATerm r_99 = NULL,u_99 = NULL;
        t = not_null(n_99);
        {
          ATerm t_99 = NULL;
          t_99 = t;
          if(((r_99 != NULL) && (r_99 != t_99)))
            _fail(t_99);
          else
            r_99 = t_99;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_99), term_r_22);
            {
              t = open_stream_0(t);
              {
                ATerm v_99 = NULL;
                v_99 = t;
                if(((u_99 != NULL) && (u_99 != v_99)))
                  _fail(v_99);
                else
                  u_99 = v_99;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_99), not_null(o_99));
                  {
                    t = n_118(t);
                    {
                      t = fclose_0(t);
                      t = not_null(o_99);
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
  ATerm d_100 = NULL;
  ATerm w_22;
  w_22 = t;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm x_22 = t;
      int y_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_3 (ATerm t)
          {
            ATerm e_100 = NULL,f_100 = NULL;
            e_100 = t;
            a_100 :
            if(match_cons(e_100, sym_Output_1))
              {
                f_100 = ATgetArgument(e_100, 0);
                if(((d_100 != NULL) && (d_100 != f_100)))
                  _fail(f_100);
                else
                  d_100 = f_100;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, p_3);
          ;
          LocalPopChoice(y_22);
        }
      else
        {
          t = x_22;
          {
            ATerm g_100 = NULL;
            t = term_z_22;
            {
              g_100 = t;
              if(((d_100 != NULL) && (d_100 != g_100)))
                _fail(g_100);
              else
                d_100 = g_100;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_3, _id);
  }
  t = w_22;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm r_3 (ATerm t)
      {
        t = not_null(d_100);
        return(t);
      }
      t = split_2(t, r_3, _id);
      return(t);
    }
    t = _2(t, _id, q_3);
    {
      ATerm a_23 = t;
      int b_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_3 (ATerm t)
          {
            ATerm t_3 (ATerm t)
            {
              ATerm h_100 = NULL;
              h_100 = t;
              c_100 :
              if(!(match_cons(h_100, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, t_3);
            return(t);
          }
          t = _2(t, s_3, WriteToBinaryFile_0);
          ;
          LocalPopChoice(b_23);
        }
      else
        {
          t = a_23;
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
ATerm apply_strategy_1 (ATerm t, ATerm p_121 (ATerm))
{
  ATerm p_100 = NULL,r_100 = NULL,s_100 = NULL,t_100 = NULL;
  ATerm c_23;
  c_23 = t;
  t = dtime_0(t);
  t = c_23;
  {
    t = p_121(t);
    {
      ATerm d_23;
      d_23 = t;
      {
        ATerm q_100 = NULL;
        t = dtime_0(t);
        {
          q_100 = t;
          if(((p_100 != NULL) && (p_100 != q_100)))
            _fail(q_100);
          else
            p_100 = q_100;
        }
      }
      t = d_23;
      {
        r_100 = t;
        o_100 :
        if(match_cons(r_100, sym__2))
          {
            s_100 = ATgetArgument(r_100, 0);
            t_100 = ATgetArgument(r_100, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_100)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(p_100))), not_null(t_100));
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
  ATerm b_101 = NULL,e_101 = NULL;
  ATerm k_101 (ATerm t)
  {
    t = SSL_fclose(not_null(e_101));
    return(t);
  }
  e_101 = t;
  a_101 :
  if(match_cons(e_101, sym_Stream_1))
    {
      b_101 = ATgetArgument(e_101, 0);
      {
        ATerm e_23 = t;
        int f_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(b_101));
            ;
            LocalPopChoice(f_23);
          }
        else
          {
            t = e_23;
            t = k_101(t);
          }
      }
    }
  else
    {
      t = k_101(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm t_101 = NULL,v_101 = NULL;
  t_101 = t;
  s_101 :
  if(match_cons(t_101, sym_Stream_1))
    {
      v_101 = ATgetArgument(t_101, 0);
      t = SSL_read_term_from_stream(not_null(v_101));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm z_117 (ATerm))
{
  ATerm l_23;
  l_23 = t;
  {
    ATerm b_102 = NULL,d_102 = NULL;
    ATerm m_23;
    m_23 = t;
    {
      ATerm c_102 = NULL;
      t = z_117(t);
      {
        c_102 = t;
        if(((b_102 != NULL) && (b_102 != c_102)))
          _fail(c_102);
        else
          b_102 = c_102;
      }
    }
    t = m_23;
    {
      ATerm e_102 = NULL;
      e_102 = t;
      if(((d_102 != NULL) && (d_102 != e_102)))
        _fail(e_102);
      else
        d_102 = e_102;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_102)), not_null(b_102)));
        t = printnl_0(t);
      }
    }
  }
  t = l_23;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm k_102 = NULL,l_102 = NULL,m_102 = NULL;
  k_102 = t;
  j_102 :
  if(match_cons(k_102, sym__2))
    {
      l_102 = ATgetArgument(k_102, 0);
      m_102 = ATgetArgument(k_102, 1);
      {
        ATerm p_102 = NULL;
        t = SSL_fopen(not_null(l_102), not_null(m_102));
        {
          ATerm q_102 = NULL;
          q_102 = t;
          if(((p_102 != NULL) && (p_102 != q_102)))
            _fail(q_102);
          else
            p_102 = q_102;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_102));
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
  ATerm u_102 = NULL;
  u_102 = t;
  t = SSL_is_string(not_null(u_102));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm y_102 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm a_103 = NULL;
    a_103 = t;
    if(((y_102 != NULL) && (y_102 != a_103)))
      _fail(a_103);
    else
      y_102 = a_103;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_102));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm f_103 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm g_103 = NULL;
    g_103 = t;
    if(((f_103 != NULL) && (f_103 != g_103)))
      _fail(g_103);
    else
      f_103 = g_103;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_103));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm j_103 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm m_103 = NULL;
    m_103 = t;
    if(((j_103 != NULL) && (j_103 != m_103)))
      _fail(m_103);
    else
      j_103 = m_103;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_103));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm u_103 = NULL;
  u_103 = t;
  t_103 :
  if(match_cons(u_103, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(u_103, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(u_103, sym_stdin_0))
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
  ATerm e_104 = NULL;
  ATerm g_104 = NULL,h_104 = NULL;
  e_104 = t;
  {
    ATerm i_104 = NULL;
    ATerm k_104 = NULL,l_104 = NULL,m_104 = NULL,n_104 = NULL,o_104 = NULL;
    t = not_null(e_104);
    {
      i_104 = t;
      {
        t = SSL_explode_term(not_null(i_104));
        {
          k_104 = t;
          b_104 :
          if(match_cons(k_104, sym__2))
            {
              l_104 = ATgetArgument(k_104, 0);
              m_104 = ATgetArgument(k_104, 1);
              c_104 :
              if(match_string(l_104, ""))
                {
                  d_104 :
                  if(((ATgetType(m_104) == AT_LIST) && !(ATisEmpty(m_104))))
                    {
                      n_104 = ATgetFirst((ATermList) m_104);
                      o_104 = (ATerm) ATgetNext((ATermList) m_104);
                      {
                        if(((h_104 != NULL) && (h_104 != n_104)))
                          _fail(n_104);
                        else
                          h_104 = n_104;
                        if(((g_104 != NULL) && (g_104 != o_104)))
                          _fail(o_104);
                        else
                          g_104 = o_104;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(h_104);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm y_104 = NULL,z_104 = NULL,c_105 = NULL;
  y_104 = t;
  v_104 :
  if(match_cons(y_104, sym__2))
    {
      z_104 = ATgetArgument(y_104, 0);
      c_105 = ATgetArgument(y_104, 1);
      {
        ATerm n_23 = t;
        int o_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(o_23);
          }
        else
          {
            t = n_23;
            {
              ATerm w_23 = t;
              int x_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_3 (ATerm t)
                  {
                    ATerm d_105 = NULL,g_105 = NULL;
                    d_105 = t;
                    u_104 :
                    if(match_cons(d_105, sym_Path_1))
                      {
                        g_105 = ATgetArgument(d_105, 0);
                        t = not_null(g_105);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, u_3, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(x_23);
                }
              else
                {
                  t = w_23;
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
  ATerm t_105 = NULL;
  ATerm y_23 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_105 = NULL;
      ATerm s_105 = NULL;
      s_105 = t;
      if(((r_105 != NULL) && (r_105 != s_105)))
        _fail(s_105);
      else
        r_105 = s_105;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_105), term_c_24);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(b_24);
    }
  else
    {
      t = y_23;
      {
        ATerm v_3 (ATerm t)
        {
          t = term_d_24;
          return(t);
        }
        t = debug_1(t, v_3);
        _fail(t);
      }
    }
  {
    ATerm e_24;
    e_24 = t;
    {
      ATerm u_105 = NULL;
      t = read_from_stream_0(t);
      {
        u_105 = t;
        if(((t_105 != NULL) && (t_105 != u_105)))
          _fail(u_105);
        else
          t_105 = u_105;
      }
    }
    t = e_24;
    {
      t = fclose_0(t);
      t = not_null(t_105);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm m_100 (ATerm), ATerm n_100 (ATerm))
{
  ATerm z_105 = NULL,b_106 = NULL;
  ATerm f_24;
  f_24 = t;
  {
    ATerm a_106 = NULL;
    t = m_100(t);
    {
      a_106 = t;
      if(((z_105 != NULL) && (z_105 != a_106)))
        _fail(a_106);
      else
        z_105 = a_106;
    }
  }
  t = f_24;
  {
    ATerm c_106 = NULL;
    t = n_100(t);
    {
      c_106 = t;
      if(((b_106 != NULL) && (b_106 != c_106)))
        _fail(c_106);
      else
        b_106 = c_106;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_105), not_null(b_106));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm i_106 = NULL;
  ATerm g_24;
  g_24 = t;
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 (ATerm t)
        {
          ATerm j_106 = NULL,k_106 = NULL;
          j_106 = t;
          g_106 :
          if(match_cons(j_106, sym_Input_1))
            {
              k_106 = ATgetArgument(j_106, 0);
              if(((i_106 != NULL) && (i_106 != k_106)))
                _fail(k_106);
              else
                i_106 = k_106;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, w_3);
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        {
          ATerm l_106 = NULL;
          t = term_j_24;
          {
            l_106 = t;
            if(((i_106 != NULL) && (i_106 != l_106)))
              _fail(l_106);
            else
              i_106 = l_106;
          }
        }
      }
  }
  t = g_24;
  {
    ATerm x_3 (ATerm t)
    {
      t = not_null(i_106);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_3);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm q_106 = NULL;
    q_106 = t;
    o_106 :
    if(!(match_string(q_106, "-k")))
      {
        if(!(match_string(q_106, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    ATerm k_24;
    k_24 = t;
    {
      ATerm r_106 = NULL;
      ATerm s_106 = NULL;
      t = string_to_int_0(t);
      {
        s_106 = t;
        if(((r_106 != NULL) && (r_106 != s_106)))
          _fail(s_106);
        else
          r_106 = s_106;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_24, not_null(r_106));
        t = set_config_0(t);
      }
    }
    t = k_24;
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_n_24;
    return(t);
  }
  t = ArgOption_3(t, y_3, z_3, a_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm v_106 = NULL;
  v_106 = t;
  t = SSL_string_to_int(not_null(v_106));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm o_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_4 (ATerm t)
      {
        ATerm e_107 = NULL;
        e_107 = t;
        y_106 :
        if(!(match_string(e_107, "-S")))
          {
            if(!(match_string(e_107, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        t = term_q_24;
        t = set_config_0(t);
        t = term_s_24;
        return(t);
      }
      ATerm d_4 (ATerm t)
      {
        t = term_x_24;
        return(t);
      }
      t = Option_3(t, b_4, c_4, d_4);
      ;
      LocalPopChoice(p_24);
    }
  else
    {
      t = o_24;
      {
        ATerm y_24 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_4 (ATerm t)
            {
              ATerm f_107 = NULL;
              f_107 = t;
              z_106 :
              if(!(match_string(f_107, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm f_4 (ATerm t)
            {
              ATerm i_107 = NULL;
              ATerm r_25;
              r_25 = t;
              {
                ATerm g_107 = NULL;
                ATerm h_107 = NULL;
                t = string_to_int_0(t);
                {
                  h_107 = t;
                  if(((g_107 != NULL) && (g_107 != h_107)))
                    _fail(h_107);
                  else
                    g_107 = h_107;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_22, not_null(g_107));
                  t = set_config_0(t);
                }
              }
              t = r_25;
              {
                ATerm j_107 = NULL;
                j_107 = t;
                if(((i_107 != NULL) && (i_107 != j_107)))
                  _fail(j_107);
                else
                  i_107 = j_107;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_107));
              }
              return(t);
            }
            ATerm g_4 (ATerm t)
            {
              t = term_d_26;
              return(t);
            }
            t = ArgOption_3(t, e_4, f_4, g_4);
            ;
            LocalPopChoice(h_25);
          }
        else
          {
            t = y_24;
            {
              ATerm h_4 (ATerm t)
              {
                ATerm k_107 = NULL;
                k_107 = t;
                d_107 :
                if(!(match_string(k_107, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm i_4 (ATerm t)
              {
                t = term_f_26;
                t = set_config_0(t);
                t = term_g_26;
                return(t);
              }
              ATerm j_4 (ATerm t)
              {
                t = term_h_26;
                return(t);
              }
              t = Option_3(t, h_4, i_4, j_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    ATerm v_107 = NULL;
    v_107 = t;
    s_107 :
    if(!(match_string(v_107, "-o")))
      {
        if(!(match_string(v_107, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    ATerm y_107 = NULL;
    ATerm k_26;
    k_26 = t;
    {
      ATerm w_107 = NULL;
      ATerm x_107 = NULL;
      x_107 = t;
      if(((w_107 != NULL) && (w_107 != x_107)))
        _fail(x_107);
      else
        w_107 = x_107;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_26, not_null(w_107));
        t = set_config_0(t);
      }
    }
    t = k_26;
    {
      ATerm z_107 = NULL;
      z_107 = t;
      if(((y_107 != NULL) && (y_107 != z_107)))
        _fail(z_107);
      else
        y_107 = z_107;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(y_107));
    }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_m_26;
    return(t);
  }
  t = ArgOption_3(t, k_4, l_4, m_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm n_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(o_26);
    }
  else
    {
      t = n_26;
      {
        ATerm n_4 (ATerm t)
        {
          ATerm f_108 = NULL;
          f_108 = t;
          e_108 :
          if(!(match_string(f_108, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm o_4 (ATerm t)
        {
          t = term_q_26;
          t = set_config_0(t);
          t = term_r_26;
          return(t);
        }
        ATerm s_4 (ATerm t)
        {
          t = term_s_26;
          return(t);
        }
        t = Option_3(t, n_4, o_4, s_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm l_108 = NULL,m_108 = NULL,n_108 = NULL,o_108 = NULL,p_108 = NULL;
  l_108 = t;
  j_108 :
  if(match_string(l_108, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(l_108) == AT_LIST) && !(ATisEmpty(l_108))))
        {
          m_108 = ATgetFirst((ATermList) l_108);
          n_108 = (ATerm) ATgetNext((ATermList) l_108);
          k_108 :
          if(((ATgetType(n_108) == AT_LIST) && !(ATisEmpty(n_108))))
            {
              o_108 = ATgetFirst((ATermList) n_108);
              p_108 = (ATerm) ATgetNext((ATermList) n_108);
              {
                ATerm t_108 = NULL;
                ATerm t_26;
                t_26 = t;
                {
                  t = not_null(m_108);
                  t = k_0(t);
                }
                t = t_26;
                {
                  ATerm u_108 = NULL;
                  t = not_null(o_108);
                  {
                    t = m_0(t);
                    {
                      u_108 = t;
                      if(((t_108 != NULL) && (t_108 != u_108)))
                        _fail(u_108);
                      else
                        t_108 = u_108;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_108)), not_null(t_108));
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
  ATerm t_4 (ATerm t)
  {
    ATerm d_109 = NULL;
    d_109 = t;
    z_108 :
    if(!(match_string(d_109, "-i")))
      {
        if(!(match_string(d_109, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    ATerm g_109 = NULL;
    ATerm u_26;
    u_26 = t;
    {
      ATerm e_109 = NULL;
      ATerm f_109 = NULL;
      f_109 = t;
      if(((e_109 != NULL) && (e_109 != f_109)))
        _fail(f_109);
      else
        e_109 = f_109;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_26, not_null(e_109));
        t = set_config_0(t);
      }
    }
    t = u_26;
    {
      ATerm h_109 = NULL;
      h_109 = t;
      if(((g_109 != NULL) && (g_109 != h_109)))
        _fail(h_109);
      else
        g_109 = h_109;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(g_109));
    }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = term_x_26;
    return(t);
  }
  t = ArgOption_3(t, t_4, u_4, v_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm l_109 = NULL;
  t = report_run_time_0(t);
  {
    ATerm m_109 = NULL;
    t = term_t_15;
    {
      t = whoami_0(t);
      {
        m_109 = t;
        if(((l_109 != NULL) && (l_109 != m_109)))
          _fail(m_109);
        else
          l_109 = m_109;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, term_d_27), not_null(l_109)));
      {
        t = printnl_0(t);
        {
          t = term_v_6;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_f_27;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm p_109 = NULL;
  p_109 = t;
  t = SSL_TicksToSeconds(not_null(p_109));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm u_109 = NULL,v_109 = NULL,w_109 = NULL;
  u_109 = t;
  t_109 :
  if(match_cons(u_109, sym__2))
    {
      v_109 = ATgetArgument(u_109, 0);
      w_109 = ATgetArgument(u_109, 1);
      {
        ATerm j_27 = t;
        int t_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(v_109), not_null(w_109));
            ;
            LocalPopChoice(t_27);
          }
        else
          {
            t = j_27;
            t = SSL_addr(not_null(v_109), not_null(w_109));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_107 (ATerm), ATerm o_107 (ATerm))
{
  ATerm b_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_107(t);
      ;
      LocalPopChoice(l_28);
    }
  else
    {
      t = b_28;
      {
        ATerm d_110 = NULL,e_110 = NULL,f_110 = NULL;
        d_110 = t;
        c_110 :
        if(((ATgetType(d_110) == AT_LIST) && !(ATisEmpty(d_110))))
          {
            e_110 = ATgetFirst((ATermList) d_110);
            f_110 = (ATerm) ATgetNext((ATermList) d_110);
            {
              ATerm i_110 = NULL;
              ATerm j_110 = NULL;
              t = not_null(f_110);
              {
                t = foldr_2(t, n_107, o_107);
                {
                  j_110 = t;
                  if(((i_110 != NULL) && (i_110 != j_110)))
                    _fail(j_110);
                  else
                    i_110 = j_110;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_110), not_null(i_110));
                t = o_107(t);
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
ATerm crush_2 (ATerm t, ATerm l_105 (ATerm), ATerm m_105 (ATerm))
{
  ATerm q_110 = NULL;
  ATerm s_110 = NULL;
  q_110 = t;
  {
    ATerm t_110 = NULL;
    ATerm v_110 = NULL,w_110 = NULL,x_110 = NULL;
    t = not_null(q_110);
    {
      t_110 = t;
      {
        t = SSL_explode_term(not_null(t_110));
        {
          v_110 = t;
          p_110 :
          if(match_cons(v_110, sym__2))
            {
              w_110 = ATgetArgument(v_110, 0);
              x_110 = ATgetArgument(v_110, 1);
              if(((s_110 != NULL) && (s_110 != x_110)))
                _fail(x_110);
              else
                s_110 = x_110;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_110);
      t = foldr_2(t, l_105, m_105);
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
    ATerm w_4 (ATerm t)
    {
      t = term_s_19;
      return(t);
    }
    t = crush_2(t, w_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm d_111 = NULL,e_111 = NULL,f_111 = NULL;
  d_111 = t;
  c_111 :
  if(match_cons(d_111, sym__2))
    {
      e_111 = ATgetArgument(d_111, 0);
      f_111 = ATgetArgument(d_111, 1);
      {
        ATerm m_28;
        m_28 = t;
        {
          ATerm n_28 = t;
          int o_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(e_111), not_null(f_111));
              ;
              LocalPopChoice(o_28);
            }
          else
            {
              t = n_28;
              t = SSL_gtr(not_null(e_111), not_null(f_111));
            }
        }
        t = m_28;
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
  ATerm q_111 = NULL;
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_111 = NULL,s_111 = NULL,t_111 = NULL;
      r_111 = t;
      p_111 :
      if(match_cons(r_111, sym__2))
        {
          s_111 = ATgetArgument(r_111, 0);
          t_111 = ATgetArgument(r_111, 1);
          {
            if(((q_111 != NULL) && (q_111 != s_111)))
              _fail(s_111);
            else
              q_111 = s_111;
            if(((q_111 != NULL) && (q_111 != t_111)))
              _fail(t_111);
            else
              q_111 = t_111;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm q_119 (ATerm))
{
  ATerm x_4 (ATerm t)
  {
    ATerm r_28;
    r_28 = t;
    {
      ATerm w_111 = NULL;
      ATerm x_111 = NULL;
      t = term_f_22;
      {
        t = get_config_0(t);
        {
          x_111 = t;
          if(((w_111 != NULL) && (w_111 != x_111)))
            _fail(x_111);
          else
            w_111 = x_111;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_111), term_v_6);
        t = geq_0(t);
      }
    }
    t = r_28;
    t = q_119(t);
    return(t);
  }
  t = try_1(t, x_4);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm b_112 = NULL,d_112 = NULL;
    ATerm s_28;
    s_28 = t;
    {
      ATerm c_112 = NULL;
      t = run_time_0(t);
      {
        c_112 = t;
        if(((b_112 != NULL) && (b_112 != c_112)))
          _fail(c_112);
        else
          b_112 = c_112;
      }
    }
    t = s_28;
    {
      ATerm e_112 = NULL;
      t = term_t_15;
      {
        t = whoami_0(t);
        {
          e_112 = t;
          if(((d_112 != NULL) && (d_112 != e_112)))
            _fail(e_112);
          else
            d_112 = e_112;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_28), not_null(b_112)), term_t_28), not_null(d_112)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, y_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_s_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_112 = NULL;
  l_112 = t;
  k_112 :
  if(match_cons(l_112, sym_Version_0))
    {
      ATerm n_112 = NULL,p_112 = NULL;
      ATerm v_28;
      v_28 = t;
      {
        ATerm o_112 = NULL;
        t = SSLgetAnnotations(not_null(l_112));
        {
          o_112 = t;
          if(((n_112 != NULL) && (n_112 != o_112)))
            _fail(o_112);
          else
            n_112 = o_112;
        }
      }
      t = v_28;
      {
        ATerm q_112 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_112));
        {
          q_112 = t;
          if(((p_112 != NULL) && (p_112 != q_112)))
            _fail(q_112);
          else
            p_112 = q_112;
        }
        t = not_null(p_112);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm n_122 (ATerm))
{
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_28;
      t = get_config_0(t);
      ;
      LocalPopChoice(x_28);
    }
  else
    {
      t = w_28;
      {
        ATerm z_4 (ATerm t)
        {
          ATerm f_29 = t;
          int g_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(g_29);
            }
          else
            {
              t = f_29;
              {
                ATerm h_29 = t;
                int i_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(i_29);
                  }
                else
                  {
                    t = h_29;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, z_4);
      }
    }
  t = n_122(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_112 = NULL;
  v_112 = t;
  t = SSL_table_create(not_null(v_112));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_112 = NULL;
  z_112 = t;
  {
    ATerm j_29;
    j_29 = t;
    {
      t = term_k_29;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_29, term_l_29, not_null(z_112));
          t = table_put_0(t);
        }
      }
    }
    t = j_29;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm d_113 = NULL;
  d_113 = t;
  t = SSL_table_destroy(not_null(d_113));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_113 = NULL;
  h_113 = t;
  t = SSL_exit(not_null(h_113));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_124 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_103 (ATerm))
{
  ATerm m_113 (ATerm t)
  {
    ATerm o_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(s_29);
      }
    else
      {
        t = o_29;
        t = Cons_2(t, b_103, m_113);
      }
    return(t);
  }
  t = m_113(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm t_113 = NULL,u_113 = NULL,v_113 = NULL;
  v_113 = t;
  s_113 :
  if(((ATgetType(v_113) == AT_LIST) && !(ATisEmpty(v_113))))
    {
      t_113 = ATgetFirst((ATermList) v_113);
      u_113 = (ATerm) ATgetNext((ATermList) v_113);
      {
        ATerm e_114 = NULL;
        t = not_null(u_113);
        {
          ATerm z_29;
          z_29 = t;
          {
            ATerm f_114 = NULL,h_114 = NULL,j_114 = NULL;
            ATerm a_30;
            a_30 = t;
            {
              ATerm g_114 = NULL;
              t = i_0(t);
              {
                g_114 = t;
                if(((f_114 != NULL) && (f_114 != g_114)))
                  _fail(g_114);
                else
                  f_114 = g_114;
              }
            }
            t = a_30;
            {
              ATerm i_114 = NULL;
              t = not_null(t_113);
              {
                t = g_0(t);
                {
                  i_114 = t;
                  if(((h_114 != NULL) && (h_114 != i_114)))
                    _fail(i_114);
                  else
                    h_114 = i_114;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(f_114)), not_null(h_114));
                {
                  j_114 = t;
                  if(((e_114 != NULL) && (e_114 != j_114)))
                    _fail(j_114);
                  else
                    e_114 = j_114;
                }
              }
            }
          }
          t = z_29;
          {
            ATerm a_5 (ATerm t)
            {
              t = not_null(e_114);
              return(t);
            }
            t = reverse_acc_2(t, g_0, a_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(v_113) == AT_LIST) && ATisEmpty(v_113)))
        {
          {
            t = term_t_15;
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
  ATerm b_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm n_124 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_94 (ATerm))
{
  ATerm u_114 = NULL,v_114 = NULL;
  u_114 = t;
  t_114 :
  if(match_cons(u_114, sym_Program_1))
    {
      v_114 = ATgetArgument(u_114, 0);
      {
        ATerm y_114 = NULL,a_115 = NULL;
        ATerm z_114 = NULL;
        t = SSLgetAnnotations(not_null(u_114));
        {
          z_114 = t;
          if(((y_114 != NULL) && (y_114 != z_114)))
            _fail(z_114);
          else
            y_114 = z_114;
        }
        {
          t = not_null(v_114);
          {
            ATerm c_115 = NULL;
            t = h_94(t);
            {
              a_115 = t;
              {
                ATerm d_115 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_115)), not_null(y_114));
                {
                  d_115 = t;
                  if(((c_115 != NULL) && (c_115 != d_115)))
                    _fail(d_115);
                  else
                    c_115 = d_115;
                }
                t = not_null(c_115);
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
  ATerm m_115 = NULL;
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_115 = NULL;
      t = term_f_27;
      {
        t = get_config_0(t);
        {
          n_115 = t;
          if(((m_115 != NULL) && (m_115 != n_115)))
            _fail(n_115);
          else
            m_115 = n_115;
        }
      }
      ;
      LocalPopChoice(c_30);
    }
  else
    {
      t = b_30;
      {
        ATerm c_5 (ATerm t)
        {
          ATerm d_5 (ATerm t)
          {
            ATerm o_115 = NULL;
            o_115 = t;
            if(((m_115 != NULL) && (m_115 != o_115)))
              _fail(o_115);
            else
              m_115 = o_115;
            return(t);
          }
          t = Program_1(t, d_5);
          return(t);
        }
        t = option_defined_1(t, c_5);
      }
    }
  {
    ATerm e_5 (ATerm t)
    {
      ATerm f_5 (ATerm t)
      {
        t = not_null(m_115);
        return(t);
      }
      t = short_description_1(t, f_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, e_5);
    {
      t = term_d_30;
      {
        t = echo_0(t);
        {
          t = term_g_30;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm p_115 = NULL;
                  ATerm q_115 = NULL;
                  q_115 = t;
                  if(((p_115 != NULL) && (p_115 != q_115)))
                    _fail(q_115);
                  else
                    p_115 = q_115;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_115)), term_i_30);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_5);
                {
                  ATerm h_5 (ATerm t)
                  {
                    ATerm r_115 = NULL;
                    ATerm s_115 = NULL;
                    ATerm i_5 (ATerm t)
                    {
                      t = not_null(m_115);
                      return(t);
                    }
                    t = long_description_1(t, i_5);
                    {
                      s_115 = t;
                      if(((r_115 != NULL) && (r_115 != s_115)))
                        _fail(s_115);
                      else
                        r_115 = s_115;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(r_115)), term_j_30);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_5);
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
  ATerm k_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(m_30);
    }
  else
    {
      t = k_30;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_94 (ATerm))
{
  ATerm c_116 = NULL,d_116 = NULL;
  c_116 = t;
  b_116 :
  if(match_cons(c_116, sym_Undefined_1))
    {
      d_116 = ATgetArgument(c_116, 0);
      {
        ATerm g_116 = NULL,i_116 = NULL;
        ATerm h_116 = NULL;
        t = SSLgetAnnotations(not_null(c_116));
        {
          h_116 = t;
          if(((g_116 != NULL) && (g_116 != h_116)))
            _fail(h_116);
          else
            g_116 = h_116;
        }
        {
          t = not_null(d_116);
          {
            ATerm k_116 = NULL;
            t = i_94(t);
            {
              i_116 = t;
              {
                ATerm l_116 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(i_116)), not_null(g_116));
                {
                  l_116 = t;
                  if(((k_116 != NULL) && (k_116 != l_116)))
                    _fail(l_116);
                  else
                    k_116 = l_116;
                }
                t = not_null(k_116);
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
ATerm fetch_1 (ATerm t, ATerm k_103 (ATerm))
{
  ATerm q_116 (ATerm t)
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_103, _id);
        ;
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        t = Cons_2(t, _id, q_116);
      }
    return(t);
  }
  t = q_116(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_123 (ATerm))
{
  t = fetch_1(t, n_123);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm s_116 = NULL,t_116 = NULL,u_116 = NULL;
  s_116 = t;
  r_116 :
  if(((ATgetType(s_116) == AT_LIST) && ATisEmpty(s_116)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(s_116) == AT_LIST) && !(ATisEmpty(s_116))))
        {
          t_116 = ATgetFirst((ATermList) s_116);
          u_116 = (ATerm) ATgetNext((ATermList) s_116);
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
    ATerm x_116 = NULL;
    ATerm a_117 = NULL;
    ATerm u_30 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(e_31);
      }
    else
      {
        t = u_30;
        {
          ATerm y_116 = NULL;
          ATerm z_116 = NULL;
          z_116 = t;
          if(((y_116 != NULL) && (y_116 != z_116)))
            _fail(z_116);
          else
            y_116 = z_116;
          t = (ATerm) ATinsert(ATempty, not_null(y_116));
        }
      }
    {
      a_117 = t;
      if(((x_116 != NULL) && (x_116 != a_117)))
        _fail(a_117);
      else
        x_116 = a_117;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_22, not_null(x_116));
      t = printnl_0(t);
    }
  }
  t = q_30;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_f_27;
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
  ATerm m_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(w_31);
    }
  else
    {
      t = m_31;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_117 = NULL;
  h_117 = t;
  g_117 :
  if(match_cons(h_117, sym_Help_0))
    {
      ATerm j_117 = NULL,l_117 = NULL;
      ATerm x_31;
      x_31 = t;
      {
        ATerm k_117 = NULL;
        t = SSLgetAnnotations(not_null(h_117));
        {
          k_117 = t;
          if(((j_117 != NULL) && (j_117 != k_117)))
            _fail(k_117);
          else
            j_117 = k_117;
        }
      }
      t = x_31;
      {
        ATerm m_117 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(j_117));
        {
          m_117 = t;
          if(((l_117 != NULL) && (l_117 != m_117)))
            _fail(m_117);
          else
            l_117 = m_117;
        }
        t = not_null(l_117);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm s_99 (ATerm))
{
  ATerm y_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_99(t);
      ;
      LocalPopChoice(z_31);
    }
  else
    {
      t = y_31;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm a_32 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_5 (ATerm t)
      {
        ATerm s_117 = NULL;
        s_117 = t;
        q_117 :
        if(!(match_string(s_117, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm k_5 (ATerm t)
      {
        t = term_d_32;
        t = set_config_0(t);
        return(t);
      }
      ATerm l_5 (ATerm t)
      {
        t = term_e_32;
        return(t);
      }
      t = Option_3(t, j_5, k_5, l_5);
      ;
      LocalPopChoice(b_32);
    }
  else
    {
      t = a_32;
      {
        ATerm m_5 (ATerm t)
        {
          ATerm t_117 = NULL;
          t_117 = t;
          r_117 :
          if(!(match_string(t_117, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm n_5 (ATerm t)
        {
          t = term_d_32;
          {
            t = set_config_0(t);
            {
              t = term_g_32;
              t = set_config_0(t);
            }
          }
          t = term_h_32;
          return(t);
        }
        ATerm o_5 (ATerm t)
        {
          t = term_i_32;
          return(t);
        }
        t = Option_3(t, m_5, n_5, o_5);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm w_117 = NULL,x_117 = NULL,y_117 = NULL;
  w_117 = t;
  v_117 :
  if(match_cons(w_117, sym__2))
    {
      x_117 = ATgetArgument(w_117, 0);
      y_117 = ATgetArgument(w_117, 1);
      t = SSL_table_get(not_null(x_117), not_null(y_117));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm g_118 = NULL,h_118 = NULL,i_118 = NULL,j_118 = NULL;
  g_118 = t;
  f_118 :
  if(match_cons(g_118, sym__3))
    {
      h_118 = ATgetArgument(g_118, 0);
      i_118 = ATgetArgument(g_118, 1);
      j_118 = ATgetArgument(g_118, 2);
      {
        ATerm j_32;
        j_32 = t;
        {
          ATerm o_118 = NULL;
          ATerm p_118 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_118), not_null(i_118));
          {
            ATerm q_32 = t;
            int r_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(r_32);
              }
            else
              {
                t = q_32;
                t = (ATerm) ATempty;
              }
            {
              p_118 = t;
              if(((o_118 != NULL) && (o_118 != p_118)))
                _fail(p_118);
              else
                o_118 = p_118;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_118), not_null(i_118), (ATerm) ATinsert(CheckATermList(not_null(o_118)), not_null(j_118)));
            t = table_put_0(t);
          }
        }
        t = j_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_124 (ATerm))
{
  ATerm t_118 = NULL;
  ATerm u_118 = NULL;
  t = term_t_15;
  {
    t = s_124(t);
    {
      u_118 = t;
      if(((t_118 != NULL) && (t_118 != u_118)))
        _fail(u_118);
      else
        t_118 = u_118;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_30, term_f_30, not_null(t_118));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm a_119 = NULL,b_119 = NULL,c_119 = NULL;
  a_119 = t;
  z_118 :
  if(match_string(a_119, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(a_119) == AT_LIST) && !(ATisEmpty(a_119))))
        {
          b_119 = ATgetFirst((ATermList) a_119);
          c_119 = (ATerm) ATgetNext((ATermList) a_119);
          {
            ATerm f_119 = NULL;
            ATerm s_32;
            s_32 = t;
            {
              t = not_null(b_119);
              t = a_0(t);
            }
            t = s_32;
            {
              ATerm g_119 = NULL;
              t = term_t_15;
              {
                t = b_0(t);
                {
                  g_119 = t;
                  if(((f_119 != NULL) && (f_119 != g_119)))
                    _fail(g_119);
                  else
                    f_119 = g_119;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(c_119)), not_null(f_119));
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
  ATerm p_5 (ATerm t)
  {
    ATerm l_119 = NULL;
    l_119 = t;
    k_119 :
    if(!(match_string(l_119, "--help")))
      {
        if(!(match_string(l_119, "-h")))
          {
            if(!(match_string(l_119, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = term_t_32;
    {
      t = set_config_0(t);
      t = term_u_32;
    }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_v_32;
    return(t);
  }
  t = Option_3(t, p_5, q_5, r_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_119 = NULL,p_119 = NULL,s_119 = NULL;
  o_119 = t;
  n_119 :
  if(((ATgetType(o_119) == AT_LIST) && !(ATisEmpty(o_119))))
    {
      p_119 = ATgetFirst((ATermList) o_119);
      s_119 = (ATerm) ATgetNext((ATermList) o_119);
      t = (ATerm) ATinsert(CheckATermList(not_null(s_119)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_119)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm y_119 = NULL,z_119 = NULL,a_120 = NULL;
  y_119 = t;
  x_119 :
  if(match_cons(y_119, sym__2))
    {
      z_119 = ATgetArgument(y_119, 0);
      a_120 = ATgetArgument(y_119, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_21, not_null(z_119), not_null(a_120));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_124 (ATerm))
{
  ATerm w_32;
  w_32 = t;
  {
    ATerm s_5 (ATerm t)
    {
      t = term_x_32;
      t = q_124(t);
      return(t);
    }
    t = try_1(t, s_5);
  }
  t = w_32;
  {
    ATerm u_5 (ATerm t)
    {
      ATerm i_120 = NULL;
      ATerm y_32;
      y_32 = t;
      {
        ATerm g_120 = NULL;
        ATerm h_120 = NULL;
        h_120 = t;
        if(((g_120 != NULL) && (g_120 != h_120)))
          _fail(h_120);
        else
          g_120 = h_120;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_27, not_null(g_120));
          t = set_config_0(t);
        }
      }
      t = y_32;
      {
        ATerm j_120 = NULL;
        j_120 = t;
        if(((i_120 != NULL) && (i_120 != j_120)))
          _fail(j_120);
        else
          i_120 = j_120;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_120));
      }
      return(t);
    }
    ATerm v_5 (ATerm t)
    {
      ATerm z_32 = t;
      int e_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_33 = t;
          int g_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(g_33);
            }
          else
            {
              t = f_33;
              {
                t = q_124(t);
                t = Cons_2(t, _id, v_5);
              }
            }
          ;
          LocalPopChoice(e_33);
        }
      else
        {
          t = z_32;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, u_5, v_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_120 = NULL,q_120 = NULL,r_120 = NULL;
  ATerm k_33;
  k_33 = t;
  {
    ATerm s_120 = NULL,t_120 = NULL,u_120 = NULL,v_120 = NULL;
    s_120 = t;
    o_120 :
    if(match_cons(s_120, sym__3))
      {
        t_120 = ATgetArgument(s_120, 0);
        u_120 = ATgetArgument(s_120, 1);
        v_120 = ATgetArgument(s_120, 2);
        {
          if(((p_120 != NULL) && (p_120 != t_120)))
            _fail(t_120);
          else
            p_120 = t_120;
          {
            if(((q_120 != NULL) && (q_120 != u_120)))
              _fail(u_120);
            else
              q_120 = u_120;
            {
              if(((r_120 != NULL) && (r_120 != v_120)))
                _fail(v_120);
              else
                r_120 = v_120;
              t = SSL_table_put(not_null(p_120), not_null(q_120), not_null(r_120));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = k_33;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_124 (ATerm))
{
  ATerm y_120 = NULL;
  ATerm m_33;
  m_33 = t;
  {
    t = term_p_33;
    t = table_put_0(t);
  }
  t = m_33;
  {
    ATerm w_5 (ATerm t)
    {
      ATerm q_33 = t;
      int r_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_124(t);
          ;
          LocalPopChoice(r_33);
        }
      else
        {
          t = q_33;
          {
            ATerm s_33 = t;
            int t_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(t_33);
              }
            else
              {
                t = s_33;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, w_5);
    {
      ATerm x_5 (ATerm t)
      {
        ATerm u_33 = t;
        int v_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_33;
            w_33 = t;
            {
              ATerm x_33 = t;
              int y_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_y_28;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(y_33);
                }
              else
                {
                  t = x_33;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = w_33;
            {
              t = system_usage_0(t);
              {
                t = term_s_19;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(v_33);
          }
        else
          {
            t = u_33;
            {
              ATerm d_34 = t;
              int e_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_34;
                  f_34 = t;
                  {
                    t = term_c_32;
                    t = get_config_0(t);
                  }
                  t = f_34;
                  {
                    t = system_about_0(t);
                    {
                      t = term_s_19;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(e_34);
                }
              else
                {
                  t = d_34;
                  {
                    ATerm y_5 (ATerm t)
                    {
                      ATerm z_5 (ATerm t)
                      {
                        ATerm z_120 = NULL;
                        z_120 = t;
                        if(((y_120 != NULL) && (y_120 != z_120)))
                          _fail(z_120);
                        else
                          y_120 = z_120;
                        return(t);
                      }
                      t = Undefined_1(t, z_5);
                      return(t);
                    }
                    t = option_defined_1(t, y_5);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_120)), term_g_34));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_v_6;
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
      t = try_1(t, x_5);
      {
        ATerm h_34;
        h_34 = t;
        {
          t = term_e_30;
          t = table_destroy_0(t);
        }
        t = h_34;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm s_122 (ATerm))
{
  t = parse_options_1(t, p_122);
  {
    t = store_options_0(t);
    {
      t = r_122(t);
      {
        ATerm i_34 = t;
        int m_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, q_122);
            ;
            LocalPopChoice(m_34);
          }
        else
          {
            t = i_34;
            {
              ATerm o_34 = t;
              int r_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_122(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(r_34);
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
ATerm iowrap_4 (ATerm t, ATerm e_122 (ATerm), ATerm f_122 (ATerm), ATerm g_122 (ATerm), ATerm h_122 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_122(t);
        ;
        LocalPopChoice(t_34);
      }
    else
      {
        t = s_34;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, e_122);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, a_6, g_122, h_122, b_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm y_121 (ATerm), ATerm z_121 (ATerm), ATerm a_122 (ATerm))
{
  ATerm c_6 (ATerm t)
  {
    ATerm d_6 (ATerm t)
    {
      ATerm u_34;
      u_34 = t;
      {
        ATerm c_121 = NULL;
        ATerm d_121 = NULL;
        t = term_f_27;
        {
          t = get_config_0(t);
          {
            d_121 = t;
            if(((c_121 != NULL) && (c_121 != d_121)))
              _fail(d_121);
            else
              c_121 = d_121;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, not_null(c_121)));
          t = printnl_0(t);
        }
      }
      t = u_34;
      return(t);
    }
    t = if_verbose2_1(t, d_6);
    return(t);
  }
  t = iowrap_4(t, y_121, z_121, a_122, c_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm w_121 (ATerm), ATerm x_121 (ATerm))
{
  t = iowrap_3(t, w_121, x_121, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm t_121 (ATerm))
{
  ATerm e_6 (ATerm t)
  {
    t = _2(t, _id, t_121);
    return(t);
  }
  t = iowrap_2(t, e_6, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    ATerm g_6 (ATerm t)
    {
      ATerm h_6 (ATerm t)
      {
        ATerm i_6 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, i_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, h_6);
      return(t);
    }
    t = Specification_1(t, g_6);
    return(t);
  }
  t = iowrap_1(t, f_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_0(t);
  return(t);
}
