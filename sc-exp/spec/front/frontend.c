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
ATerm term_w_55;
ATerm term_k_54;
ATerm term_v_53;
ATerm term_s_53;
ATerm term_r_53;
ATerm term_q_53;
ATerm term_g_53;
ATerm term_c_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_u_51;
ATerm term_r_51;
ATerm term_q_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_z_50;
ATerm term_v_50;
ATerm term_u_50;
ATerm term_r_49;
ATerm term_q_49;
ATerm term_l_49;
ATerm term_k_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_y_48;
ATerm term_r_48;
ATerm term_m_48;
ATerm term_f_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_g_47;
ATerm term_f_47;
ATerm term_x_46;
ATerm term_q_46;
ATerm term_l_46;
ATerm term_z_44;
ATerm term_s_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_n_44;
ATerm term_l_44;
ATerm term_d_43;
ATerm term_a_43;
ATerm term_y_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_i_40;
ATerm term_a_40;
ATerm term_g_39;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_z_36;
ATerm term_x_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_c_36;
ATerm term_x_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_m_33;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_e_30;
ATerm term_w_29;
ATerm term_t_29;
ATerm term_d_29;
ATerm term_v_28;
ATerm term_t_28;
ATerm term_p_28;
ATerm term_n_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_c_28;
ATerm term_y_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_j_26;
ATerm term_f_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_s_25;
ATerm term_i_25;
ATerm term_v_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_g_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_r_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_i_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_h_22;
ATerm term_e_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_c_21;
ATerm term_y_20;
ATerm term_v_20;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_q_17;
ATerm term_r_15;
ATerm term_c_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
void init_constant_terms (void)
{
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Op_2, term_v_20, (ATerm) ATempty);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_ConstType_1, term_y_20);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_Var_1, term_v_21);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Var_1, term_x_21);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Anno_2, term_w_21, term_y_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Var_1, term_a_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Var_1, term_h_22);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Anno_2, term_e_22, term_k_22);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_21);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Call_2, term_m_22, (ATerm) ATempty);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_BAM_3, term_t_22, term_w_21, term_e_22);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_21);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_Call_2, term_d_23, (ATerm) ATempty);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_BAM_3, term_e_23, term_y_21, term_k_22);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Var_1, term_o_24);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("n_1", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("q_1", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("k_1", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_26);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("h_1", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_26);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_ConstType_1, term_p_24);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_z_14, term_s_26);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_21);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_28);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("x_0", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_31);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym_Op_2, term_l_35, (ATerm) ATempty);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym_Op_2, term_q_35, (ATerm) ATempty);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_35);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_36);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_36);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_36);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_37);
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_40);
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_40);
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("  frontend initialization: ", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("  normalize-spec: ", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("  spec-use-def: ", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("  ExpandOverlays: ", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("  CheckConstructors: ", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("  RulesToSdefs: ", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("  DesugarListMatching: ", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("  strename: ", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(sym__2, term_n_18, term_y_25);
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_25);
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(sym__2, term_y_47, term_g_39);
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(sym__2, term_y_48, term_g_39);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(sym__2, term_o_51, term_p_51);
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(sym__2, term_x_52, term_g_39);
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(sym__2, term_a_53, term_g_39);
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(sym__2, term_z_50, term_g_39);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(sym__3, term_o_51, term_p_51, (ATerm) ATempty);
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm t_82 (ATerm), ATerm u_82 (ATerm));
ATerm Prim_2 (ATerm, ATerm i_86 (ATerm), ATerm j_86 (ATerm));
ATerm Explode_2 (ATerm, ATerm m_82 (ATerm), ATerm n_82 (ATerm));
ATerm pat_td_1 (ATerm, ATerm t_124 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm i_81 (ATerm));
ATerm Specification_1 (ATerm, ATerm n_81 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm i_115 (ATerm));
ATerm timing_1 (ATerm, ATerm h_94 (ATerm));
ATerm spaste_1 (ATerm, ATerm f_124 (ATerm));
ATerm Rec_2 (ATerm, ATerm b_86 (ATerm), ATerm c_86 (ATerm));
ATerm SDef_3 (ATerm, ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm v_87 (ATerm));
ATerm Let_2 (ATerm, ATerm e_85 (ATerm), ATerm f_85 (ATerm));
ATerm sboundin_3 (ATerm, ATerm g_124 (ATerm), ATerm h_124 (ATerm), ATerm i_124 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm d_85 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm b_121 (ATerm, ATerm (ATerm)), ATerm c_121 (ATerm), ATerm d_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm e_121 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm SingleListVar_0 (ATerm);
ATerm ListBuild_0 (ATerm);
ATerm ListMatch_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm Con_3 (ATerm, ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm e_83 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm ListVarScope_0 (ATerm);
ATerm DesugarListMatching_0 (ATerm);
ATerm DeclareVariables_0 (ATerm);
ATerm RDtoSD_0 (ATerm);
ATerm MkCall_0 (ATerm);
ATerm MkCongDef_0 (ATerm);
ATerm MkCongDefs_0 (ATerm);
ATerm congdefs_0 (ATerm);
ATerm RulesToSdefs_0 (ATerm);
ATerm TupleDeclarations_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm CheckConsError_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_0 (ATerm);
ATerm CheckTuple_0 (ATerm);
ATerm CheckCons_0 (ATerm);
ATerm manytd_1 (ATerm, ATerm o_98 (ATerm));
ATerm check_constructors_p__2 (ATerm, ATerm q_124 (ATerm), ATerm r_124 (ATerm));
ATerm check_constructors_0 (ATerm);
ATerm length_0 (ATerm);
ATerm GenerateCheckRule_0 (ATerm);
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm g_123 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm k_82 (ATerm), ATerm l_82 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm b_124 (ATerm));
ATerm IsVar_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm m_121 (ATerm), ATerm n_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm g_121 (ATerm), ATerm h_121 (ATerm, ATerm (ATerm)));
ATerm SubsVar_2 (ATerm, ATerm z_120 (ATerm), ATerm a_121 (ATerm));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm r_121 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm i_101 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm s_100 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_6 (ATerm, ATerm n_120 (ATerm), ATerm o_120 (ATerm, ATerm (ATerm)), ATerm p_120 (ATerm), ATerm q_120 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm r_120 (ATerm, ATerm (ATerm)), ATerm s_120 (ATerm));
ATerm substitute_5 (ATerm, ATerm u_120 (ATerm), ATerm v_120 (ATerm, ATerm (ATerm)), ATerm w_120 (ATerm), ATerm x_120 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm y_120 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm h_123 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm f_123 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm DefineBound_0 (ATerm);
ATerm overlay_ud_0 (ATerm);
ATerm rdef_ud_0 (ATerm);
ATerm guardedlchoice_1 (ATerm, ATerm p_124 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm a_86 (ATerm));
ATerm lchoice_1 (ATerm, ATerm o_124 (ATerm));
ATerm LChoice_2 (ATerm, ATerm u_85 (ATerm), ATerm v_85 (ATerm));
ATerm isect_Bound_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm restore_Bound_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_Bound_0 (ATerm);
ATerm abstract_choice_2 (ATerm, ATerm l_124 (ATerm), ATerm m_124 (ATerm));
ATerm choice_1 (ATerm, ATerm n_124 (ATerm));
ATerm Choice_2 (ATerm, ATerm s_84 (ATerm), ATerm t_84 (ATerm));
ATerm Context_0 (ATerm);
ATerm Unbound_0 (ATerm);
ATerm Bound_0 (ATerm);
ATerm use_vars_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm v_83 (ATerm));
ATerm RootApp_1 (ATerm, ATerm s_82 (ATerm));
ATerm App_2 (ATerm, ATerm q_82 (ATerm), ATerm r_82 (ATerm));
ATerm table_replace_0 (ATerm);
ATerm override_key_1 (ATerm, ATerm l_112 (ATerm));
ATerm Binding_0 (ATerm);
ATerm Var_1 (ATerm, ATerm q_0 (ATerm));
ATerm bind_vars_0 (ATerm);
ATerm Match_1 (ATerm, ATerm l_85 (ATerm));
ATerm Build_1 (ATerm, ATerm m_85 (ATerm));
ATerm VarScope_1 (ATerm, ATerm k_124 (ATerm));
ATerm unbound_vars_0 (ATerm);
ATerm sdef_ud_0 (ATerm);
ATerm DefineUnbound_0 (ATerm);
ATerm def_use_def_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Signature_1 (ATerm, ATerm j_81 (ATerm));
ATerm spec_use_def_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm c_96 (ATerm));
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm e_104 (ATerm));
ATerm unzip_0 (ATerm);
ATerm new_0 (ATerm);
ATerm ContextVar_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm dummify_0 (ATerm);
ATerm SplitDynamicRule_1 (ATerm, ATerm p_0 (ATerm));
ATerm split_dynamic_rules_0 (ATerm);
ATerm split_under_scope_1 (ATerm, ATerm c_123 (ATerm));
ATerm oncetd_1 (ATerm, ATerm g_97 (ATerm));
ATerm split_dynamic_rule_1 (ATerm, ATerm a_123 (ATerm));
ATerm DeclareContextVars_0 (ATerm);
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm e_95 (ATerm));
ATerm listtd_1 (ATerm, ATerm a_103 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm l_84 (ATerm));
ATerm Scope_2 (ATerm, ATerm o_85 (ATerm), ATerm p_85 (ATerm));
ATerm tboundin_3 (ATerm, ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm e_124 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm u_105 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm p_111 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm y_105 (ATerm), ATerm z_105 (ATerm));
ATerm diff_1 (ATerm, ATerm q_105 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm x_103 (ATerm));
ATerm zip_1 (ATerm, ATerm z_103 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm t_95 (ATerm), ATerm u_95 (ATerm));
ATerm for_3 (ATerm, ATerm w_95 (ATerm), ATerm x_95 (ATerm), ATerm y_95 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm r_122 (ATerm), ATerm s_122 (ATerm), ATerm t_122 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm d_96 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm m_112 (ATerm));
ATerm VarToConst_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm u_97 (ATerm));
ATerm assert_1 (ATerm, ATerm k_112 (ATerm));
ATerm DeclareVarToConst_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm k_81 (ATerm));
ATerm Constructors_1 (ATerm, ATerm c_82 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm h_112 (ATerm));
ATerm restore_always_2 (ATerm, ATerm x_94 (ATerm), ATerm y_94 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm g_112 (ATerm));
ATerm scope_2 (ATerm, ATerm i_112 (ATerm), ATerm j_112 (ATerm));
ATerm vars_to_consts_0 (ATerm);
ATerm RulesToStrategies_0 (ATerm);
ATerm filter_1 (ATerm, ATerm v_108 (ATerm));
ATerm GetConstructors_0 (ATerm);
ATerm InsertBSpec_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm));
ATerm CombineSections_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm _2 (ATerm, ATerm v_79 (ATerm), ATerm w_79 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm i_102 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm h_115 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm d_114 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm f_117 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm p_113 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm h_109 (ATerm), ATerm i_109 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm s_107 (ATerm), ATerm t_107 (ATerm));
ATerm crush_2 (ATerm, ATerm l_111 (ATerm), ATerm m_111 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm g_115 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm d_118 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm e_120 (ATerm));
ATerm map_1 (ATerm, ATerm t_101 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm d_120 (ATerm));
ATerm Program_1 (ATerm, ATerm l_93 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm m_93 (ATerm));
ATerm fetch_1 (ATerm, ATerm c_102 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_119 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_94 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm i_120 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm e_81 (ATerm), ATerm f_81 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm g_120 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm f_120 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm f_118 (ATerm), ATerm g_118 (ATerm), ATerm h_118 (ATerm), ATerm i_118 (ATerm));
ATerm iowrap_4 (ATerm, ATerm u_117 (ATerm), ATerm v_117 (ATerm), ATerm w_117 (ATerm), ATerm x_117 (ATerm));
ATerm iowrap_3 (ATerm, ATerm o_117 (ATerm), ATerm p_117 (ATerm), ATerm q_117 (ATerm));
ATerm iowrap_2 (ATerm, ATerm m_117 (ATerm), ATerm n_117 (ATerm));
ATerm iowrap_1 (ATerm, ATerm j_117 (ATerm));
ATerm frontend_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Expl_0 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL;
  s_9 = t;
  q_9 :
  if(match_cons(s_9, sym_ExplodeCong_2))
    {
      t_9 = ATgetArgument(s_9, 0);
      r_9 = ATgetArgument(s_9, 1);
      {
        ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
        ATerm a_10 = NULL;
        ATerm b_10 = NULL;
        t = new_0(t);
        {
          a_10 = t;
          {
            if(((w_9 != NULL) && (w_9 != a_10)))
              _fail(a_10);
            else
              w_9 = a_10;
            {
              ATerm c_10 = NULL;
              t = new_0(t);
              {
                b_10 = t;
                {
                  if(((x_9 != NULL) && (x_9 != b_10)))
                    _fail(b_10);
                  else
                    x_9 = b_10;
                  {
                    ATerm d_10 = NULL;
                    t = new_0(t);
                    {
                      c_10 = t;
                      {
                        if(((y_9 != NULL) && (y_9 != c_10)))
                          _fail(c_10);
                        else
                          y_9 = c_10;
                        {
                          t = new_0(t);
                          {
                            d_10 = t;
                            if(((z_9 != NULL) && (z_9 != d_10)))
                              _fail(d_10);
                            else
                              z_9 = d_10;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_9)), not_null(y_9)), not_null(x_9)), not_null(w_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_9)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(t_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_9))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(r_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_9))))), (ATerm) ATmakeAppl(sym_Prim_2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_9))), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_9)))))));
      }
    }
  else
    {
      if(match_cons(s_9, sym_Build_1))
        {
          t_9 = ATgetArgument(s_9, 0);
          {
            ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL;
            ATerm j_10 = NULL;
            ATerm n_10 = NULL;
            t = new_0(t);
            {
              j_10 = t;
              {
                if(((h_10 != NULL) && (h_10 != j_10)))
                  _fail(j_10);
                else
                  h_10 = j_10;
                {
                  t = not_null(t_9);
                  {
                    ATerm f_0 (ATerm t)
                    {
                      ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
                      k_10 = t;
                      j_9 :
                      if(match_cons(k_10, sym_Explode_2))
                        {
                          l_10 = ATgetArgument(k_10, 0);
                          m_10 = ATgetArgument(k_10, 1);
                          {
                            if(((f_10 != NULL) && (f_10 != l_10)))
                              _fail(l_10);
                            else
                              f_10 = l_10;
                            {
                              if(((g_10 != NULL) && (g_10 != m_10)))
                                _fail(m_10);
                              else
                                g_10 = m_10;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_10));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, f_0);
                    {
                      n_10 = t;
                      if(((i_10 != NULL) && (i_10 != n_10)))
                        _fail(n_10);
                      else
                        i_10 = n_10;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_10)), not_null(f_10))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_10))), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_10)))));
          }
        }
      else
        {
          if(match_cons(s_9, sym_Match_1))
            {
              t_9 = ATgetArgument(s_9, 0);
              {
                ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL;
                ATerm u_10 = NULL;
                ATerm v_10 = NULL;
                t = new_0(t);
                {
                  u_10 = t;
                  {
                    if(((r_10 != NULL) && (r_10 != u_10)))
                      _fail(u_10);
                    else
                      r_10 = u_10;
                    {
                      ATerm z_10 = NULL;
                      t = new_0(t);
                      {
                        v_10 = t;
                        {
                          if(((s_10 != NULL) && (s_10 != v_10)))
                            _fail(v_10);
                          else
                            s_10 = v_10;
                          {
                            t = not_null(t_9);
                            {
                              ATerm h_0 (ATerm t)
                              {
                                ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
                                w_10 = t;
                                o_9 :
                                if(match_cons(w_10, sym_Explode_2))
                                  {
                                    x_10 = ATgetArgument(w_10, 0);
                                    y_10 = ATgetArgument(w_10, 1);
                                    {
                                      if(((p_10 != NULL) && (p_10 != x_10)))
                                        _fail(x_10);
                                      else
                                        p_10 = x_10;
                                      {
                                        if(((q_10 != NULL) && (q_10 != y_10)))
                                          _fail(y_10);
                                        else
                                          q_10 = y_10;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_10));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, h_0);
                              {
                                z_10 = t;
                                if(((t_10 != NULL) && (t_10 != z_10)))
                                  _fail(z_10);
                                else
                                  t_10 = z_10;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_10)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_10))), (ATerm) ATmakeAppl(sym_Prim_2, term_y_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_10)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(r_10)), (ATerm) ATmakeAppl(sym_Op_2, term_z_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_10)), not_null(p_10)))))));
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
  ATerm e_12 = NULL,f_12 = NULL;
  e_12 = t;
  d_12 :
  if(match_cons(e_12, sym_Match_1))
    {
      f_12 = ATgetArgument(e_12, 0);
      {
        ATerm a_15 = t;
        int b_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
            ATerm l_12 = NULL;
            ATerm p_12 = NULL;
            t = new_0(t);
            {
              l_12 = t;
              {
                if(((j_12 != NULL) && (j_12 != l_12)))
                  _fail(l_12);
                else
                  j_12 = l_12;
                {
                  t = not_null(f_12);
                  {
                    ATerm j_0 (ATerm t)
                    {
                      ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
                      m_12 = t;
                      t_11 :
                      if(match_cons(m_12, sym_Anno_2))
                        {
                          n_12 = ATgetArgument(m_12, 0);
                          o_12 = ATgetArgument(m_12, 1);
                          {
                            if(((h_12 != NULL) && (h_12 != n_12)))
                              _fail(n_12);
                            else
                              h_12 = n_12;
                            {
                              if(((i_12 != NULL) && (i_12 != o_12)))
                                _fail(o_12);
                              else
                                i_12 = o_12;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(j_12)), not_null(h_12));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, j_0);
                    {
                      p_12 = t;
                      if(((k_12 != NULL) && (k_12 != p_12)))
                        _fail(p_12);
                      else
                        k_12 = p_12;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_12)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_c_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_12)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_12))))));
            ;
            LocalPopChoice(b_15);
          }
        else
          {
            t = a_15;
            {
              ATerm d_15 = t;
              int f_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
                  ATerm u_12 = NULL;
                  ATerm x_12 = NULL;
                  t = new_0(t);
                  {
                    u_12 = t;
                    {
                      if(((s_12 != NULL) && (s_12 != u_12)))
                        _fail(u_12);
                      else
                        s_12 = u_12;
                      {
                        t = not_null(f_12);
                        {
                          ATerm s_0 (ATerm t)
                          {
                            ATerm v_12 = NULL,w_12 = NULL;
                            v_12 = t;
                            x_11 :
                            if(match_cons(v_12, sym_RootApp_1))
                              {
                                w_12 = ATgetArgument(v_12, 0);
                                {
                                  if(((r_12 != NULL) && (r_12 != w_12)))
                                    _fail(w_12);
                                  else
                                    r_12 = w_12;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_12));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, s_0);
                          {
                            x_12 = t;
                            if(((t_12 != NULL) && (t_12 != x_12)))
                              _fail(x_12);
                            else
                              t_12 = x_12;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_12))), not_null(r_12))));
                  ;
                  LocalPopChoice(f_15);
                }
              else
                {
                  t = d_15;
                  {
                    ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
                    ATerm d_13 = NULL;
                    ATerm h_13 = NULL;
                    t = new_0(t);
                    {
                      d_13 = t;
                      {
                        if(((b_13 != NULL) && (b_13 != d_13)))
                          _fail(d_13);
                        else
                          b_13 = d_13;
                        {
                          t = not_null(f_12);
                          {
                            ATerm t_0 (ATerm t)
                            {
                              ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
                              e_13 = t;
                              b_12 :
                              if(match_cons(e_13, sym_App_2))
                                {
                                  f_13 = ATgetArgument(e_13, 0);
                                  g_13 = ATgetArgument(e_13, 1);
                                  {
                                    if(((a_13 != NULL) && (a_13 != f_13)))
                                      _fail(f_13);
                                    else
                                      a_13 = f_13;
                                    {
                                      if(((z_12 != NULL) && (z_12 != g_13)))
                                        _fail(g_13);
                                      else
                                        z_12 = g_13;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_13));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, t_0);
                            {
                              h_13 = t;
                              if(((c_13 != NULL) && (c_13 != h_13)))
                                _fail(h_13);
                              else
                                c_13 = h_13;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_13))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_12)), not_null(a_13)))));
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
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL;
  y_13 = t;
  w_13 :
  if(match_cons(y_13, sym_Match_1))
    {
      z_13 = ATgetArgument(y_13, 0);
      x_13 :
      if(match_cons(z_13, sym_RootApp_1))
        {
          a_14 = ATgetArgument(z_13, 0);
          t = not_null(a_14);
        }
      else
        {
          if(match_cons(z_13, sym_App_2))
            {
              a_14 = ATgetArgument(z_13, 0);
              b_14 = ATgetArgument(z_13, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(a_14), not_null(b_14));
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
  ATerm n_14 = NULL,o_14 = NULL;
  n_14 = t;
  m_14 :
  if(match_cons(n_14, sym_Match_1))
    {
      o_14 = ATgetArgument(n_14, 0);
      {
        ATerm q_14 = NULL,r_14 = NULL;
        ATerm v_14 = NULL;
        t = not_null(o_14);
        {
          ATerm v_0 (ATerm t)
          {
            ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
            s_14 = t;
            j_14 :
            if(match_cons(s_14, sym_RootApp_1))
              {
                t_14 = ATgetArgument(s_14, 0);
                k_14 :
                if(match_cons(t_14, sym_Match_1))
                  {
                    u_14 = ATgetArgument(t_14, 0);
                    {
                      if(((q_14 != NULL) && (q_14 != u_14)))
                        _fail(u_14);
                      else
                        q_14 = u_14;
                      t = not_null(q_14);
                    }
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1(t, v_0);
          {
            v_14 = t;
            if(((r_14 != NULL) && (r_14 != v_14)))
              _fail(v_14);
            else
              r_14 = v_14;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(r_14));
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
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      ;
      LocalPopChoice(h_15);
    }
  else
    {
      t = g_15;
      {
        ATerm j_15 = t;
        int k_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            ;
            LocalPopChoice(k_15);
          }
        else
          {
            t = j_15;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL;
  p_15 = t;
  o_15 :
  if(match_cons(p_15, sym_Build_1))
    {
      q_15 = ATgetArgument(p_15, 0);
      {
        ATerm l_15 = t;
        int n_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL;
            ATerm w_15 = NULL;
            ATerm a_16 = NULL;
            t = new_0(t);
            {
              w_15 = t;
              {
                if(((u_15 != NULL) && (u_15 != w_15)))
                  _fail(w_15);
                else
                  u_15 = w_15;
                {
                  t = not_null(q_15);
                  {
                    ATerm w_0 (ATerm t)
                    {
                      ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
                      x_15 = t;
                      e_15 :
                      if(match_cons(x_15, sym_Anno_2))
                        {
                          y_15 = ATgetArgument(x_15, 0);
                          z_15 = ATgetArgument(x_15, 1);
                          {
                            if(((s_15 != NULL) && (s_15 != y_15)))
                              _fail(y_15);
                            else
                              s_15 = y_15;
                            {
                              if(((t_15 != NULL) && (t_15 != z_15)))
                                _fail(z_15);
                              else
                                t_15 = z_15;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_15));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, w_0);
                    {
                      a_16 = t;
                      if(((v_15 != NULL) && (v_15 != a_16)))
                        _fail(a_16);
                      else
                        v_15 = a_16;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_r_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_15)), not_null(s_15))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_15))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_15))));
            ;
            LocalPopChoice(n_15);
          }
        else
          {
            t = l_15;
            {
              ATerm b_16 = t;
              int j_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
                  ATerm f_16 = NULL;
                  ATerm i_16 = NULL;
                  t = new_0(t);
                  {
                    f_16 = t;
                    {
                      if(((d_16 != NULL) && (d_16 != f_16)))
                        _fail(f_16);
                      else
                        d_16 = f_16;
                      {
                        t = not_null(q_15);
                        {
                          ATerm y_0 (ATerm t)
                          {
                            ATerm g_16 = NULL,h_16 = NULL;
                            g_16 = t;
                            i_15 :
                            if(match_cons(g_16, sym_RootApp_1))
                              {
                                h_16 = ATgetArgument(g_16, 0);
                                {
                                  if(((c_16 != NULL) && (c_16 != h_16)))
                                    _fail(h_16);
                                  else
                                    c_16 = h_16;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_16));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, y_0);
                          {
                            i_16 = t;
                            if(((e_16 != NULL) && (e_16 != i_16)))
                              _fail(i_16);
                            else
                              e_16 = i_16;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_16), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_16))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_16))));
                  ;
                  LocalPopChoice(j_16);
                }
              else
                {
                  t = b_16;
                  {
                    ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
                    ATerm o_16 = NULL;
                    ATerm s_16 = NULL;
                    t = new_0(t);
                    {
                      o_16 = t;
                      {
                        if(((m_16 != NULL) && (m_16 != o_16)))
                          _fail(o_16);
                        else
                          m_16 = o_16;
                        {
                          t = not_null(q_15);
                          {
                            ATerm z_0 (ATerm t)
                            {
                              ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
                              p_16 = t;
                              m_15 :
                              if(match_cons(p_16, sym_App_2))
                                {
                                  q_16 = ATgetArgument(p_16, 0);
                                  r_16 = ATgetArgument(p_16, 1);
                                  {
                                    if(((k_16 != NULL) && (k_16 != q_16)))
                                      _fail(q_16);
                                    else
                                      k_16 = q_16;
                                    {
                                      if(((l_16 != NULL) && (l_16 != r_16)))
                                        _fail(r_16);
                                      else
                                        l_16 = r_16;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_16));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, z_0);
                            {
                              s_16 = t;
                              if(((n_16 != NULL) && (n_16 != s_16)))
                                _fail(s_16);
                              else
                                n_16 = s_16;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(k_16), not_null(l_16), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_16)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(n_16))));
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
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  j_17 = t;
  h_17 :
  if(match_cons(j_17, sym_Build_1))
    {
      k_17 = ATgetArgument(j_17, 0);
      i_17 :
      if(match_cons(k_17, sym_RootApp_1))
        {
          l_17 = ATgetArgument(k_17, 0);
          t = not_null(l_17);
        }
      else
        {
          if(match_cons(k_17, sym_App_2))
            {
              l_17 = ATgetArgument(k_17, 0);
              m_17 = ATgetArgument(k_17, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_17)), not_null(l_17));
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
ATerm As_2 (ATerm t, ATerm t_82 (ATerm), ATerm u_82 (ATerm))
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
  y_17 = t;
  x_17 :
  if(match_cons(y_17, sym_As_2))
    {
      z_17 = ATgetArgument(y_17, 0);
      a_18 = ATgetArgument(y_17, 1);
      {
        ATerm e_18 = NULL,g_18 = NULL;
        ATerm f_18 = NULL;
        t = SSLgetAnnotations(not_null(y_17));
        {
          f_18 = t;
          if(((e_18 != NULL) && (e_18 != f_18)))
            _fail(f_18);
          else
            e_18 = f_18;
        }
        {
          t = not_null(z_17);
          {
            ATerm i_18 = NULL;
            t = t_82(t);
            {
              g_18 = t;
              {
                t = not_null(a_18);
                {
                  ATerm k_18 = NULL;
                  t = u_82(t);
                  {
                    i_18 = t;
                    {
                      ATerm l_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(g_18), not_null(i_18)), not_null(e_18));
                      {
                        l_18 = t;
                        if(((k_18 != NULL) && (k_18 != l_18)))
                          _fail(l_18);
                        else
                          k_18 = l_18;
                      }
                      t = not_null(k_18);
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
ATerm Prim_2 (ATerm t, ATerm i_86 (ATerm), ATerm j_86 (ATerm))
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
  x_18 = t;
  w_18 :
  if(match_cons(x_18, sym_Prim_2))
    {
      y_18 = ATgetArgument(x_18, 0);
      z_18 = ATgetArgument(x_18, 1);
      {
        ATerm d_19 = NULL,f_19 = NULL;
        ATerm e_19 = NULL;
        t = SSLgetAnnotations(not_null(x_18));
        {
          e_19 = t;
          if(((d_19 != NULL) && (d_19 != e_19)))
            _fail(e_19);
          else
            d_19 = e_19;
        }
        {
          t = not_null(y_18);
          {
            ATerm h_19 = NULL;
            t = i_86(t);
            {
              f_19 = t;
              {
                t = not_null(z_18);
                {
                  ATerm j_19 = NULL;
                  t = j_86(t);
                  {
                    h_19 = t;
                    {
                      ATerm k_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(f_19), not_null(h_19)), not_null(d_19));
                      {
                        k_19 = t;
                        if(((j_19 != NULL) && (j_19 != k_19)))
                          _fail(k_19);
                        else
                          j_19 = k_19;
                      }
                      t = not_null(j_19);
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
ATerm Explode_2 (ATerm t, ATerm m_82 (ATerm), ATerm n_82 (ATerm))
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
  w_19 = t;
  v_19 :
  if(match_cons(w_19, sym_Explode_2))
    {
      x_19 = ATgetArgument(w_19, 0);
      y_19 = ATgetArgument(w_19, 1);
      {
        ATerm c_20 = NULL,e_20 = NULL;
        ATerm d_20 = NULL;
        t = SSLgetAnnotations(not_null(w_19));
        {
          d_20 = t;
          if(((c_20 != NULL) && (c_20 != d_20)))
            _fail(d_20);
          else
            c_20 = d_20;
        }
        {
          t = not_null(x_19);
          {
            ATerm g_20 = NULL;
            t = m_82(t);
            {
              e_20 = t;
              {
                t = not_null(y_19);
                {
                  ATerm i_20 = NULL;
                  t = n_82(t);
                  {
                    g_20 = t;
                    {
                      ATerm j_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(e_20), not_null(g_20)), not_null(c_20));
                      {
                        j_20 = t;
                        if(((i_20 != NULL) && (i_20 != j_20)))
                          _fail(j_20);
                        else
                          i_20 = j_20;
                      }
                      t = not_null(i_20);
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
ATerm pat_td_1 (ATerm t, ATerm t_124 (ATerm))
{
  ATerm t_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_124(t);
      ;
      LocalPopChoice(u_16);
    }
  else
    {
      t = t_16;
      {
        ATerm v_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = pat_td_1(t, t_124);
                return(t);
              }
              t = fetch_1(t, c_1);
              return(t);
            }
            t = Op_2(t, _id, b_1);
            ;
            LocalPopChoice(w_16);
          }
        else
          {
            t = v_16;
            {
              ATerm x_16 = t;
              int y_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = pat_td_1(t, t_124);
                    return(t);
                  }
                  t = Explode_2(t, _id, d_1);
                  ;
                  LocalPopChoice(y_16);
                }
              else
                {
                  t = x_16;
                  {
                    ATerm z_16 = t;
                    int a_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_1 (ATerm t)
                        {
                          t = pat_td_1(t, t_124);
                          return(t);
                        }
                        t = Explode_2(t, f_1, _id);
                        ;
                        LocalPopChoice(a_17);
                      }
                    else
                      {
                        t = z_16;
                        {
                          ATerm b_17 = t;
                          int c_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_1 (ATerm t)
                              {
                                ATerm i_1 (ATerm t)
                                {
                                  t = pat_td_1(t, t_124);
                                  return(t);
                                }
                                t = fetch_1(t, i_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, g_1);
                              ;
                              LocalPopChoice(c_17);
                            }
                          else
                            {
                              t = b_17;
                              {
                                ATerm j_1 (ATerm t)
                                {
                                  t = pat_td_1(t, t_124);
                                  return(t);
                                }
                                t = As_2(t, _id, j_1);
                              }
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
  ATerm a_21 = NULL,b_21 = NULL;
  a_21 = t;
  z_20 :
  if(match_cons(a_21, sym_Build_1))
    {
      b_21 = ATgetArgument(a_21, 0);
      {
        ATerm d_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_21 = NULL,e_21 = NULL;
            ATerm i_21 = NULL;
            t = not_null(b_21);
            {
              ATerm l_1 (ATerm t)
              {
                ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
                f_21 = t;
                s_20 :
                if(match_cons(f_21, sym_RootApp_1))
                  {
                    g_21 = ATgetArgument(f_21, 0);
                    t_20 :
                    if(match_cons(g_21, sym_Build_1))
                      {
                        h_21 = ATgetArgument(g_21, 0);
                        {
                          if(((d_21 != NULL) && (d_21 != h_21)))
                            _fail(h_21);
                          else
                            d_21 = h_21;
                          t = not_null(d_21);
                        }
                      }
                    else
                      {
                        _fail(t);
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
                i_21 = t;
                if(((e_21 != NULL) && (e_21 != i_21)))
                  _fail(i_21);
                else
                  e_21 = i_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(e_21));
            ;
            LocalPopChoice(e_17);
          }
        else
          {
            t = d_17;
            {
              ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
              ATerm r_21 = NULL;
              t = not_null(b_21);
              {
                ATerm m_1 (ATerm t)
                {
                  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
                  n_21 = t;
                  w_20 :
                  if(match_cons(n_21, sym_App_2))
                    {
                      o_21 = ATgetArgument(n_21, 0);
                      q_21 = ATgetArgument(n_21, 1);
                      x_20 :
                      if(match_cons(o_21, sym_Build_1))
                        {
                          p_21 = ATgetArgument(o_21, 0);
                          {
                            if(((l_21 != NULL) && (l_21 != p_21)))
                              _fail(p_21);
                            else
                              l_21 = p_21;
                            {
                              if(((k_21 != NULL) && (k_21 != q_21)))
                                _fail(q_21);
                              else
                                k_21 = q_21;
                              t = not_null(l_21);
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
                t = pat_td_1(t, m_1);
                {
                  r_21 = t;
                  if(((m_21 != NULL) && (m_21 != r_21)))
                    _fail(r_21);
                  else
                    m_21 = r_21;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(m_21));
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
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      ;
      LocalPopChoice(g_17);
    }
  else
    {
      t = f_17;
      {
        ATerm n_17 = t;
        int o_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            ;
            LocalPopChoice(o_17);
          }
        else
          {
            t = n_17;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL;
  ATerm i_22 (ATerm t)
  {
    ATerm f_22 = NULL;
    ATerm g_22 = NULL;
    t = not_null(c_22);
    {
      ATerm p_17 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_17;
        }
      {
        t = new_0(t);
        {
          g_22 = t;
          if(((f_22 != NULL) && (f_22 != g_22)))
            _fail(g_22);
          else
            f_22 = g_22;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(f_22)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_22)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_22))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_22))));
    return(t);
  }
  ATerm j_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_22))));
    return(t);
  }
  c_22 = t;
  b_22 :
  if(match_cons(c_22, sym_Var_1))
    {
      d_22 = ATgetArgument(c_22, 0);
      {
        ATerm r_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_22(t);
            ;
            LocalPopChoice(s_17);
          }
        else
          {
            t = r_17;
            t = j_22(t);
          }
      }
    }
  else
    {
      t = i_22(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
  q_22 = t;
  p_22 :
  if(match_cons(q_22, sym_Prim_2))
    {
      r_22 = ATgetArgument(q_22, 0);
      s_22 = ATgetArgument(q_22, 1);
      {
        ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
        ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
        t = not_null(s_22);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm t_17 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_17;
              }
            return(t);
          }
          t = fetch_1(t, o_1);
          {
            t = not_null(s_22);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm p_1 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, p_1);
                {
                  y_22 = t;
                  n_22 :
                  if(match_cons(y_22, sym__2))
                    {
                      z_22 = ATgetArgument(y_22, 0);
                      a_23 = ATgetArgument(y_22, 1);
                      o_22 :
                      if(match_cons(a_23, sym__2))
                        {
                          b_23 = ATgetArgument(a_23, 0);
                          c_23 = ATgetArgument(a_23, 1);
                          {
                            if(((v_22 != NULL) && (v_22 != z_22)))
                              _fail(z_22);
                            else
                              v_22 = z_22;
                            {
                              if(((w_22 != NULL) && (w_22 != b_23)))
                                _fail(b_23);
                              else
                                w_22 = b_23;
                              if(((x_22 != NULL) && (x_22 != c_23)))
                                _fail(c_23);
                              else
                                x_22 = c_23;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(w_22)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(r_22), not_null(x_22))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm s_1 (ATerm t)
      {
        ATerm u_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            ;
            LocalPopChoice(v_17);
          }
        else
          {
            t = u_17;
            {
              ATerm w_17 = t;
              int b_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(b_18);
                }
              else
                {
                  t = w_17;
                  {
                    ATerm c_18 = t;
                    int d_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        ;
                        LocalPopChoice(d_18);
                      }
                    else
                      {
                        t = c_18;
                        {
                          ATerm h_18 = t;
                          int j_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              ;
                              LocalPopChoice(j_18);
                            }
                          else
                            {
                              t = h_18;
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
      t = repeat_1(t, s_1);
    }
    return(t);
  }
  t = topdown_1(t, r_1);
  return(t);
}
ATerm desugar_spec_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    t = SDef_3(t, _id, _id, desugar_0);
    return(t);
  }
  t = map_1(t, t_1);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm i_81 (ATerm))
{
  ATerm k_23 = NULL,l_23 = NULL;
  k_23 = t;
  j_23 :
  if(match_cons(k_23, sym_Strategies_1))
    {
      l_23 = ATgetArgument(k_23, 0);
      {
        ATerm o_23 = NULL,q_23 = NULL;
        ATerm p_23 = NULL;
        t = SSLgetAnnotations(not_null(k_23));
        {
          p_23 = t;
          if(((o_23 != NULL) && (o_23 != p_23)))
            _fail(p_23);
          else
            o_23 = p_23;
        }
        {
          t = not_null(l_23);
          {
            ATerm s_23 = NULL;
            t = i_81(t);
            {
              q_23 = t;
              {
                ATerm t_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(q_23)), not_null(o_23));
                {
                  t_23 = t;
                  if(((s_23 != NULL) && (s_23 != t_23)))
                    _fail(t_23);
                  else
                    s_23 = t_23;
                }
                t = not_null(s_23);
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
ATerm Specification_1 (ATerm t, ATerm n_81 (ATerm))
{
  ATerm d_24 = NULL,e_24 = NULL;
  d_24 = t;
  c_24 :
  if(match_cons(d_24, sym_Specification_1))
    {
      e_24 = ATgetArgument(d_24, 0);
      {
        ATerm h_24 = NULL,j_24 = NULL;
        ATerm i_24 = NULL;
        t = SSLgetAnnotations(not_null(d_24));
        {
          i_24 = t;
          if(((h_24 != NULL) && (h_24 != i_24)))
            _fail(i_24);
          else
            h_24 = i_24;
        }
        {
          t = not_null(e_24);
          {
            ATerm l_24 = NULL;
            t = n_81(t);
            {
              j_24 = t;
              {
                ATerm m_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(j_24)), not_null(h_24));
                {
                  m_24 = t;
                  if(((l_24 != NULL) && (l_24 != m_24)))
                    _fail(m_24);
                  else
                    l_24 = m_24;
                }
                t = not_null(l_24);
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
ATerm if_verbose3_1 (ATerm t, ATerm i_115 (ATerm))
{
  ATerm u_1 (ATerm t)
  {
    ATerm m_18;
    m_18 = t;
    {
      ATerm s_24 = NULL;
      ATerm t_24 = NULL;
      t = term_n_18;
      {
        t = get_config_0(t);
        {
          t_24 = t;
          if(((s_24 != NULL) && (s_24 != t_24)))
            _fail(t_24);
          else
            s_24 = t_24;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_24), term_o_18);
        t = geq_0(t);
      }
    }
    t = m_18;
    t = i_115(t);
    return(t);
  }
  t = try_1(t, u_1);
  return(t);
}
ATerm timing_1 (ATerm t, ATerm h_94 (ATerm))
{
  ATerm v_1 (ATerm t)
  {
    ATerm p_18;
    p_18 = t;
    {
      t = dtime_0(t);
      t = debug_1(t, h_94);
    }
    t = p_18;
    return(t);
  }
  t = if_verbose3_1(t, v_1);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm f_124 (ATerm))
{
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        t = split_2(t, _id, f_124);
        {
          ATerm x_1 (ATerm t)
          {
            ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
            b_25 = t;
            w_24 :
            if(match_cons(b_25, sym__2))
              {
                c_25 = ATgetArgument(b_25, 0);
                g_25 = ATgetArgument(b_25, 1);
                x_24 :
                if(match_cons(c_25, sym_SDef_3))
                  {
                    d_25 = ATgetArgument(c_25, 0);
                    e_25 = ATgetArgument(c_25, 1);
                    f_25 = ATgetArgument(c_25, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(g_25), not_null(e_25), not_null(f_25));
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = zip_1(t, x_1);
        }
        return(t);
      }
      t = Let_2(t, w_1, _id);
      ;
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
      {
        ATerm s_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_1 (ATerm t)
            {
              t = split_2(t, _id, f_124);
              {
                ATerm z_1 (ATerm t)
                {
                  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
                  k_25 = t;
                  z_24 :
                  if(match_cons(k_25, sym__2))
                    {
                      l_25 = ATgetArgument(k_25, 0);
                      o_25 = ATgetArgument(k_25, 1);
                      a_25 :
                      if(match_cons(l_25, sym_VarDec_2))
                        {
                          m_25 = ATgetArgument(l_25, 0);
                          n_25 = ATgetArgument(l_25, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(o_25), not_null(n_25));
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = zip_1(t, z_1);
              }
              return(t);
            }
            t = SDef_3(t, _id, y_1, _id);
            ;
            LocalPopChoice(t_18);
          }
        else
          {
            t = s_18;
            {
              ATerm a_2 (ATerm t)
              {
                t = f_124(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, a_2, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm b_86 (ATerm), ATerm c_86 (ATerm))
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
  a_26 = t;
  z_25 :
  if(match_cons(a_26, sym_Rec_2))
    {
      b_26 = ATgetArgument(a_26, 0);
      c_26 = ATgetArgument(a_26, 1);
      {
        ATerm g_26 = NULL,i_26 = NULL;
        ATerm h_26 = NULL;
        t = SSLgetAnnotations(not_null(a_26));
        {
          h_26 = t;
          if(((g_26 != NULL) && (g_26 != h_26)))
            _fail(h_26);
          else
            g_26 = h_26;
        }
        {
          t = not_null(b_26);
          {
            ATerm k_26 = NULL;
            t = b_86(t);
            {
              i_26 = t;
              {
                t = not_null(c_26);
                {
                  ATerm m_26 = NULL;
                  t = c_86(t);
                  {
                    k_26 = t;
                    {
                      ATerm n_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(i_26), not_null(k_26)), not_null(g_26));
                      {
                        n_26 = t;
                        if(((m_26 != NULL) && (m_26 != n_26)))
                          _fail(n_26);
                        else
                          m_26 = n_26;
                      }
                      t = not_null(m_26);
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
ATerm SDef_3 (ATerm t, ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm v_87 (ATerm))
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
  a_27 = t;
  z_26 :
  if(match_cons(a_27, sym_SDef_3))
    {
      b_27 = ATgetArgument(a_27, 0);
      c_27 = ATgetArgument(a_27, 1);
      d_27 = ATgetArgument(a_27, 2);
      {
        ATerm i_27 = NULL,k_27 = NULL;
        ATerm j_27 = NULL;
        t = SSLgetAnnotations(not_null(a_27));
        {
          j_27 = t;
          if(((i_27 != NULL) && (i_27 != j_27)))
            _fail(j_27);
          else
            i_27 = j_27;
        }
        {
          t = not_null(b_27);
          {
            ATerm m_27 = NULL;
            t = t_87(t);
            {
              k_27 = t;
              {
                t = not_null(c_27);
                {
                  ATerm o_27 = NULL;
                  t = u_87(t);
                  {
                    m_27 = t;
                    {
                      t = not_null(d_27);
                      {
                        ATerm q_27 = NULL;
                        t = v_87(t);
                        {
                          o_27 = t;
                          {
                            ATerm r_27 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(k_27), not_null(m_27), not_null(o_27)), not_null(i_27));
                            {
                              r_27 = t;
                              if(((q_27 != NULL) && (q_27 != r_27)))
                                _fail(r_27);
                              else
                                q_27 = r_27;
                            }
                            t = not_null(q_27);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm e_85 (ATerm), ATerm f_85 (ATerm))
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
  e_28 = t;
  d_28 :
  if(match_cons(e_28, sym_Let_2))
    {
      f_28 = ATgetArgument(e_28, 0);
      g_28 = ATgetArgument(e_28, 1);
      {
        ATerm k_28 = NULL,m_28 = NULL;
        ATerm l_28 = NULL;
        t = SSLgetAnnotations(not_null(e_28));
        {
          l_28 = t;
          if(((k_28 != NULL) && (k_28 != l_28)))
            _fail(l_28);
          else
            k_28 = l_28;
        }
        {
          t = not_null(f_28);
          {
            ATerm o_28 = NULL;
            t = e_85(t);
            {
              m_28 = t;
              {
                t = not_null(g_28);
                {
                  ATerm q_28 = NULL;
                  t = f_85(t);
                  {
                    o_28 = t;
                    {
                      ATerm r_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(m_28), not_null(o_28)), not_null(k_28));
                      {
                        r_28 = t;
                        if(((q_28 != NULL) && (q_28 != r_28)))
                          _fail(r_28);
                        else
                          q_28 = r_28;
                      }
                      t = not_null(q_28);
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
ATerm sboundin_3 (ATerm t, ATerm g_124 (ATerm), ATerm h_124 (ATerm), ATerm i_124 (ATerm))
{
  ATerm u_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, g_124, g_124);
      ;
      LocalPopChoice(v_18);
    }
  else
    {
      t = u_18;
      {
        ATerm a_19 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, i_124, i_124, g_124);
            ;
            LocalPopChoice(b_19);
          }
        else
          {
            t = a_19;
            t = Rec_2(t, i_124, g_124);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL;
  z_28 = t;
  y_28 :
  if(match_cons(z_28, sym_Rec_2))
    {
      a_29 = ATgetArgument(z_28, 0);
      b_29 = ATgetArgument(z_28, 1);
      t = (ATerm) ATinsert(ATempty, not_null(a_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL;
  j_29 = t;
  i_29 :
  if(match_cons(j_29, sym_SDef_3))
    {
      k_29 = ATgetArgument(j_29, 0);
      l_29 = ATgetArgument(j_29, 1);
      m_29 = ATgetArgument(j_29, 2);
      {
        t = not_null(l_29);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
            q_29 = t;
            h_29 :
            if(match_cons(q_29, sym_VarDec_2))
              {
                r_29 = ATgetArgument(q_29, 0);
                s_29 = ATgetArgument(q_29, 1);
                t = not_null(r_29);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, b_2);
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
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
  a_30 = t;
  z_29 :
  if(match_cons(a_30, sym_Let_2))
    {
      b_30 = ATgetArgument(a_30, 0);
      c_30 = ATgetArgument(a_30, 1);
      {
        t = not_null(b_30);
        {
          ATerm c_2 (ATerm t)
          {
            ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
            f_30 = t;
            y_29 :
            if(match_cons(f_30, sym_SDef_3))
              {
                g_30 = ATgetArgument(f_30, 0);
                h_30 = ATgetArgument(f_30, 1);
                i_30 = ATgetArgument(f_30, 2);
                t = not_null(g_30);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, c_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm d_85 (ATerm))
{
  ATerm t_30 = NULL,u_30 = NULL;
  t_30 = t;
  s_30 :
  if(match_cons(t_30, sym_SVar_1))
    {
      u_30 = ATgetArgument(t_30, 0);
      {
        ATerm x_30 = NULL,z_30 = NULL;
        ATerm y_30 = NULL;
        t = SSLgetAnnotations(not_null(t_30));
        {
          y_30 = t;
          if(((x_30 != NULL) && (x_30 != y_30)))
            _fail(y_30);
          else
            x_30 = y_30;
        }
        {
          t = not_null(u_30);
          {
            ATerm b_31 = NULL;
            t = d_85(t);
            {
              z_30 = t;
              {
                ATerm c_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(z_30)), not_null(x_30));
                {
                  c_31 = t;
                  if(((b_31 != NULL) && (b_31 != c_31)))
                    _fail(c_31);
                  else
                    b_31 = c_31;
                }
                t = not_null(b_31);
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
  ATerm d_2 (ATerm t)
  {
    ATerm c_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(g_19);
      }
    else
      {
        t = c_19;
        {
          ATerm i_19 = t;
          int l_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(l_19);
            }
          else
            {
              t = i_19;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, d_2, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm b_121 (ATerm, ATerm (ATerm)), ATerm c_121 (ATerm), ATerm d_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm e_121 (ATerm, ATerm (ATerm)))
{
  ATerm i_31 = NULL;
  i_31 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_31), (ATerm) ATempty);
    {
      ATerm l_31 (ATerm t)
      {
        ATerm e_2 (ATerm t)
        {
          ATerm m_19 = t;
          int n_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, b_121);
              ;
              LocalPopChoice(n_19);
            }
          else
            {
              t = m_19;
              {
                t = RnBinding_2(t, c_121, e_121);
                t = DistBinding_2(t, l_31, d_121);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, e_2);
        return(t);
      }
      t = l_31(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm m_31 (ATerm t, ATerm n_31 (ATerm))
  {
    t = Scope_2(t, n_31, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, m_31);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm SingleListVar_0 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  r_31 = t;
  p_31 :
  if(match_cons(r_31, sym_Var_1))
    {
      s_31 = ATgetArgument(r_31, 0);
      q_31 :
      if(match_cons(s_31, sym_ListVar_1))
        {
          t_31 = ATgetArgument(s_31, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_31));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ListBuild_0 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL;
  k_32 = t;
  j_32 :
  if(match_cons(k_32, sym_Build_1))
    {
      l_32 = ATgetArgument(k_32, 0);
      {
        ATerm n_32 = NULL,o_32 = NULL;
        ATerm t_33 = NULL;
        t = not_null(l_32);
        {
          ATerm f_2 (ATerm t)
          {
            ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,l_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL;
            p_32 = t;
            y_31 :
            if(match_cons(p_32, sym_Op_2))
              {
                q_32 = ATgetArgument(p_32, 0);
                r_32 = ATgetArgument(p_32, 1);
                z_31 :
                if(match_string(q_32, "Cons"))
                  {
                    a_32 :
                    if(((ATgetType(r_32) == AT_LIST) && !(ATisEmpty(r_32))))
                      {
                        s_32 = ATgetFirst((ATermList) r_32);
                        o_33 = (ATerm) ATgetNext((ATermList) r_32);
                        b_32 :
                        if(match_cons(s_32, sym_Var_1))
                          {
                            l_33 = ATgetArgument(s_32, 0);
                            c_32 :
                            if(match_cons(l_33, sym_ListVar_1))
                              {
                                n_33 = ATgetArgument(l_33, 0);
                                d_32 :
                                if(((ATgetType(o_33) == AT_LIST) && !(ATisEmpty(o_33))))
                                  {
                                    p_33 = ATgetFirst((ATermList) o_33);
                                    s_33 = (ATerm) ATgetNext((ATermList) o_33);
                                    e_32 :
                                    if(match_cons(p_33, sym_Op_2))
                                      {
                                        q_33 = ATgetArgument(p_33, 0);
                                        r_33 = ATgetArgument(p_33, 1);
                                        f_32 :
                                        if(match_string(q_33, "Nil"))
                                          {
                                            g_32 :
                                            if(((ATgetType(r_33) == AT_LIST) && ATisEmpty(r_33)))
                                              {
                                                h_32 :
                                                if(((ATgetType(s_33) == AT_LIST) && ATisEmpty(s_33)))
                                                  {
                                                    {
                                                      if(((n_32 != NULL) && (n_32 != n_33)))
                                                        _fail(n_33);
                                                      else
                                                        n_32 = n_33;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_32));
                                                    }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
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
            t_33 = t;
            if(((o_32 != NULL) && (o_32 != t_33)))
              _fail(t_33);
            else
              o_32 = t_33;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(o_32));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ListMatch_0 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL;
  o_34 = t;
  n_34 :
  if(match_cons(o_34, sym_Match_1))
    {
      p_34 = ATgetArgument(o_34, 0);
      {
        ATerm r_34 = NULL,s_34 = NULL;
        ATerm j_35 = NULL;
        t = not_null(p_34);
        {
          ATerm g_2 (ATerm t)
          {
            ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL;
            t_34 = t;
            z_33 :
            if(match_cons(t_34, sym_Op_2))
              {
                u_34 = ATgetArgument(t_34, 0);
                v_34 = ATgetArgument(t_34, 1);
                a_34 :
                if(match_string(u_34, "Cons"))
                  {
                    e_34 :
                    if(((ATgetType(v_34) == AT_LIST) && !(ATisEmpty(v_34))))
                      {
                        b_35 = ATgetFirst((ATermList) v_34);
                        e_35 = (ATerm) ATgetNext((ATermList) v_34);
                        f_34 :
                        if(match_cons(b_35, sym_Var_1))
                          {
                            c_35 = ATgetArgument(b_35, 0);
                            g_34 :
                            if(match_cons(c_35, sym_ListVar_1))
                              {
                                d_35 = ATgetArgument(c_35, 0);
                                h_34 :
                                if(((ATgetType(e_35) == AT_LIST) && !(ATisEmpty(e_35))))
                                  {
                                    f_35 = ATgetFirst((ATermList) e_35);
                                    i_35 = (ATerm) ATgetNext((ATermList) e_35);
                                    i_34 :
                                    if(match_cons(f_35, sym_Op_2))
                                      {
                                        g_35 = ATgetArgument(f_35, 0);
                                        h_35 = ATgetArgument(f_35, 1);
                                        j_34 :
                                        if(match_string(g_35, "Nil"))
                                          {
                                            k_34 :
                                            if(((ATgetType(h_35) == AT_LIST) && ATisEmpty(h_35)))
                                              {
                                                l_34 :
                                                if(((ATgetType(i_35) == AT_LIST) && ATisEmpty(i_35)))
                                                  {
                                                    {
                                                      if(((r_34 != NULL) && (r_34 != d_35)))
                                                        _fail(d_35);
                                                      else
                                                        r_34 = d_35;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_34));
                                                    }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, g_2);
          {
            j_35 = t;
            if(((s_34 != NULL) && (s_34 != j_35)))
              _fail(j_35);
            else
              s_34 = j_35;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(s_34));
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
  ATerm w_35 = NULL;
  w_35 = t;
  v_35 :
  if(match_cons(w_35, sym_Wld_0))
    {
      ATerm y_35 = NULL,a_36 = NULL;
      ATerm o_19;
      o_19 = t;
      {
        ATerm z_35 = NULL;
        t = SSLgetAnnotations(not_null(w_35));
        {
          z_35 = t;
          if(((y_35 != NULL) && (y_35 != z_35)))
            _fail(z_35);
          else
            y_35 = z_35;
        }
      }
      t = o_19;
      {
        ATerm b_36 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(y_35));
        {
          b_36 = t;
          if(((a_36 != NULL) && (a_36 != b_36)))
            _fail(b_36);
          else
            a_36 = b_36;
        }
        t = not_null(a_36);
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
  ATerm p_19 = t;
  if((PushChoice() == 0))
    {
      ATerm h_2 (ATerm t)
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, h_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_19;
    }
  return(t);
}
ATerm Con_3 (ATerm t, ATerm c_83 (ATerm), ATerm d_83 (ATerm), ATerm e_83 (ATerm))
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL;
  m_36 = t;
  l_36 :
  if(match_cons(m_36, sym_Con_3))
    {
      n_36 = ATgetArgument(m_36, 0);
      o_36 = ATgetArgument(m_36, 1);
      p_36 = ATgetArgument(m_36, 2);
      {
        ATerm u_36 = NULL,w_36 = NULL;
        ATerm v_36 = NULL;
        t = SSLgetAnnotations(not_null(m_36));
        {
          v_36 = t;
          if(((u_36 != NULL) && (u_36 != v_36)))
            _fail(v_36);
          else
            u_36 = v_36;
        }
        {
          t = not_null(n_36);
          {
            ATerm y_36 = NULL;
            t = c_83(t);
            {
              w_36 = t;
              {
                t = not_null(o_36);
                {
                  ATerm a_37 = NULL;
                  t = d_83(t);
                  {
                    y_36 = t;
                    {
                      t = not_null(p_36);
                      {
                        ATerm c_37 = NULL;
                        t = e_83(t);
                        {
                          a_37 = t;
                          {
                            ATerm d_37 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(w_36), not_null(y_36), not_null(a_37)), not_null(u_36));
                            {
                              d_37 = t;
                              if(((c_37 != NULL) && (c_37 != d_37)))
                                _fail(d_37);
                              else
                                c_37 = d_37;
                            }
                            t = not_null(c_37);
                          }
                        }
                      }
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
  ATerm s_19 = t;
  if((PushChoice() == 0))
    {
      ATerm i_2 (ATerm t)
      {
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(u_19);
          }
        else
          {
            t = t_19;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, i_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_19;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,w_37 = NULL;
  o_37 = t;
  m_37 :
  if(match_cons(o_37, sym_SRule_1))
    {
      p_37 = ATgetArgument(o_37, 0);
      n_37 :
      if(match_cons(p_37, sym_StratRule_3))
        {
          q_37 = ATgetArgument(p_37, 0);
          r_37 = ATgetArgument(p_37, 1);
          w_37 = ATgetArgument(p_37, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(r_37)), (ATerm) ATmakeAppl(sym_Where_1, not_null(w_37))), not_null(q_37)));
        }
      else
        {
          if(match_cons(p_37, sym_Rule_3))
            {
              q_37 = ATgetArgument(p_37, 0);
              r_37 = ATgetArgument(p_37, 1);
              w_37 = ATgetArgument(p_37, 2);
              {
                t = not_null(q_37);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(r_37);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(r_37))), (ATerm) ATmakeAppl(sym_Where_1, not_null(w_37))), (ATerm) ATmakeAppl(sym_Match_1, not_null(q_37))));
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
ATerm Rcon_0 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL;
  b_39 = t;
  z_38 :
  if(match_cons(b_39, sym_SRule_1))
    {
      c_39 = ATgetArgument(b_39, 0);
      a_39 :
      if(match_cons(c_39, sym_Rule_3))
        {
          d_39 = ATgetArgument(c_39, 0);
          e_39 = ATgetArgument(c_39, 1);
          f_39 = ATgetArgument(c_39, 2);
          {
            ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL;
            ATerm r_39 = NULL;
            ATerm x_39 = NULL;
            t = new_0(t);
            {
              r_39 = t;
              {
                if(((o_39 != NULL) && (o_39 != r_39)))
                  _fail(r_39);
                else
                  o_39 = r_39;
                {
                  t = not_null(d_39);
                  {
                    ATerm m_40 = NULL;
                    ATerm j_2 (ATerm t)
                    {
                      ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL;
                      s_39 = t;
                      q_38 :
                      if(match_cons(s_39, sym_Con_3))
                        {
                          t_39 = ATgetArgument(s_39, 0);
                          v_39 = ATgetArgument(s_39, 1);
                          w_39 = ATgetArgument(s_39, 2);
                          r_38 :
                          if(match_cons(t_39, sym_Var_1))
                            {
                              u_39 = ATgetArgument(t_39, 0);
                              {
                                if(((n_39 != NULL) && (n_39 != u_39)))
                                  _fail(u_39);
                                else
                                  n_39 = u_39;
                                {
                                  if(((l_39 != NULL) && (l_39 != v_39)))
                                    _fail(v_39);
                                  else
                                    l_39 = v_39;
                                  {
                                    if(((j_39 != NULL) && (j_39 != w_39)))
                                      _fail(w_39);
                                    else
                                      j_39 = w_39;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_39));
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
                    t = oncetd_1(t, j_2);
                    {
                      x_39 = t;
                      {
                        if(((p_39 != NULL) && (p_39 != x_39)))
                          _fail(x_39);
                        else
                          p_39 = x_39;
                        {
                          t = not_null(e_39);
                          {
                            ATerm k_2 (ATerm t)
                            {
                              ATerm y_39 = NULL,z_39 = NULL,e_40 = NULL,f_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
                              y_39 = t;
                              u_38 :
                              if(match_cons(y_39, sym_Con_3))
                                {
                                  z_39 = ATgetArgument(y_39, 0);
                                  f_40 = ATgetArgument(y_39, 1);
                                  j_40 = ATgetArgument(y_39, 2);
                                  v_38 :
                                  if(match_cons(z_39, sym_Var_1))
                                    {
                                      e_40 = ATgetArgument(z_39, 0);
                                      w_38 :
                                      if(match_cons(j_40, sym_Call_2))
                                        {
                                          k_40 = ATgetArgument(j_40, 0);
                                          l_40 = ATgetArgument(j_40, 1);
                                          x_38 :
                                          if(((ATgetType(l_40) == AT_LIST) && ATisEmpty(l_40)))
                                            {
                                              {
                                                if(((n_39 != NULL) && (n_39 != e_40)))
                                                  _fail(e_40);
                                                else
                                                  n_39 = e_40;
                                                {
                                                  if(((m_39 != NULL) && (m_39 != f_40)))
                                                    _fail(f_40);
                                                  else
                                                    m_39 = f_40;
                                                  {
                                                    if(((k_39 != NULL) && (k_39 != k_40)))
                                                      _fail(k_40);
                                                    else
                                                      k_39 = k_40;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_39));
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
                            t = oncetd_1(t, k_2);
                            {
                              m_40 = t;
                              if(((q_39 != NULL) && (q_39 != m_40)))
                                _fail(m_40);
                              else
                                q_39 = m_40;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_39)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_39), not_null(q_39), (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_39), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(k_39), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(l_39), not_null(m_39), term_q_17)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(n_39)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_39)))))));
          }
        }
      else
        {
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
  ATerm l_2 (ATerm t)
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        ;
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        {
          ATerm b_20 = t;
          int f_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              ;
              LocalPopChoice(f_20);
            }
          else
            {
              t = b_20;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, l_2);
  return(t);
}
ATerm ListVarScope_0 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL;
  h_41 = t;
  c_41 :
  if(match_cons(h_41, sym_Scope_2))
    {
      i_41 = ATgetArgument(h_41, 0);
      j_41 = ATgetArgument(h_41, 1);
      {
        ATerm t_41 = NULL;
        ATerm x_41 = NULL;
        t = not_null(i_41);
        {
          ATerm m_2 (ATerm t)
          {
            ATerm n_2 (ATerm t)
            {
              ATerm u_41 = NULL,v_41 = NULL;
              u_41 = t;
              w_40 :
              if(match_cons(u_41, sym_ListVar_1))
                {
                  v_41 = ATgetArgument(u_41, 0);
                  t = not_null(v_41);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = try_1(t, n_2);
            return(t);
          }
          t = map_1(t, m_2);
          {
            x_41 = t;
            if(((t_41 != NULL) && (t_41 != x_41)))
              _fail(x_41);
            else
              t_41 = x_41;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_41), not_null(j_41));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DesugarListMatching_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm p_2 (ATerm t)
    {
      ATerm h_20 = t;
      int k_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0(t);
          ;
          LocalPopChoice(k_20);
        }
      else
        {
          t = h_20;
          t = desugarRule_0(t);
        }
      return(t);
    }
    t = try_1(t, p_2);
    {
      ATerm q_2 (ATerm t)
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_20 = t;
            int o_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = HL_0(t);
                ;
                LocalPopChoice(o_20);
              }
            else
              {
                t = n_20;
                {
                  ATerm p_20 = t;
                  int q_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = ListMatch_0(t);
                      ;
                      LocalPopChoice(q_20);
                    }
                  else
                    {
                      t = p_20;
                      t = ListBuild_0(t);
                    }
                }
              }
            ;
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
            t = SingleListVar_0(t);
          }
        return(t);
      }
      t = repeat_1(t, q_2);
    }
    return(t);
  }
  t = topdown_1(t, o_2);
  return(t);
}
ATerm DeclareVariables_0 (ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL;
  e_42 = t;
  d_42 :
  if(match_cons(e_42, sym_SDef_3))
    {
      f_42 = ATgetArgument(e_42, 0);
      g_42 = ATgetArgument(e_42, 1);
      h_42 = ATgetArgument(e_42, 2);
      {
        ATerm l_42 = NULL;
        ATerm m_42 = NULL;
        t = not_null(h_42);
        {
          t = tvars_0(t);
          {
            m_42 = t;
            if(((l_42 != NULL) && (l_42 != m_42)))
              _fail(m_42);
            else
              l_42 = m_42;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(f_42), not_null(g_42), (ATerm) ATmakeAppl(sym_Scope_2, not_null(l_42), not_null(h_42)));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RDtoSD_0 (ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL;
  u_42 = t;
  r_42 :
  if(match_cons(u_42, sym_RDef_3))
    {
      v_42 = ATgetArgument(u_42, 0);
      w_42 = ATgetArgument(u_42, 1);
      x_42 = ATgetArgument(u_42, 2);
      {
        ATerm b_43 = NULL;
        ATerm c_43 = NULL;
        t = not_null(x_42);
        {
          t = tvars_0(t);
          {
            c_43 = t;
            if(((b_43 != NULL) && (b_43 != c_43)))
              _fail(c_43);
            else
              b_43 = c_43;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(v_42), not_null(w_42), (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_43), (ATerm) ATmakeAppl(sym_SRule_1, not_null(x_42))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkCall_0 (ATerm t)
{
  ATerm g_43 = NULL;
  g_43 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_43)), (ATerm) ATempty);
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL;
  t_43 = t;
  q_43 :
  if(match_cons(t_43, sym_OpDecl_2))
    {
      u_43 = ATgetArgument(t_43, 0);
      v_43 = ATgetArgument(t_43, 1);
      r_43 :
      if(match_cons(v_43, sym_FunType_2))
        {
          w_43 = ATgetArgument(v_43, 0);
          s_43 = ATgetArgument(v_43, 1);
          {
            ATerm a_44 = NULL,b_44 = NULL,j_44 = NULL;
            ATerm r_20;
            r_20 = t;
            {
              ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL;
              t = not_null(w_43);
              {
                ATerm r_2 (ATerm t)
                {
                  ATerm c_44 = NULL,e_44 = NULL;
                  t = new_0(t);
                  {
                    ATerm u_20;
                    u_20 = t;
                    {
                      ATerm d_44 = NULL;
                      d_44 = t;
                      if(((c_44 != NULL) && (c_44 != d_44)))
                        _fail(d_44);
                      else
                        c_44 = d_44;
                    }
                    t = u_20;
                    {
                      ATerm f_44 = NULL;
                      f_44 = t;
                      if(((e_44 != NULL) && (e_44 != f_44)))
                        _fail(f_44);
                      else
                        e_44 = f_44;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(c_44), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_21), term_c_21)), not_null(e_44));
                    }
                  }
                  return(t);
                }
                t = map_1(t, r_2);
                {
                  t = unzip_0(t);
                  {
                    g_44 = t;
                    o_43 :
                    if(match_cons(g_44, sym__2))
                      {
                        h_44 = ATgetArgument(g_44, 0);
                        i_44 = ATgetArgument(g_44, 1);
                        {
                          if(((a_44 != NULL) && (a_44 != h_44)))
                            _fail(h_44);
                          else
                            a_44 = h_44;
                          if(((b_44 != NULL) && (b_44 != i_44)))
                            _fail(i_44);
                          else
                            b_44 = i_44;
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
            t = r_20;
            {
              ATerm k_44 = NULL;
              t = not_null(b_44);
              {
                t = map_1(t, MkCall_0);
                {
                  k_44 = t;
                  if(((j_44 != NULL) && (j_44 != k_44)))
                    _fail(k_44);
                  else
                    j_44 = k_44;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(u_43), not_null(a_44), (ATerm) ATmakeAppl(sym_Cong_2, not_null(u_43), not_null(j_44)));
            }
          }
        }
      else
        {
          if(match_cons(v_43, sym_ConstType_1))
            {
              w_43 = ATgetArgument(v_43, 0);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(u_43), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(u_43), (ATerm) ATempty));
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
ATerm MkCongDefs_0 (ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL;
  w_44 = t;
  v_44 :
  if(match_cons(w_44, sym_Constructors_1))
    {
      x_44 = ATgetArgument(w_44, 0);
      {
        t = not_null(x_44);
        t = map_1(t, MkCongDef_0);
      }
    }
  else
    {
      if(match_cons(w_44, sym_Sorts_1))
        {
          x_44 = ATgetArgument(w_44, 0);
          t = (ATerm) ATempty;
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm congdefs_0 (ATerm t)
{
  t = map_1(t, MkCongDefs_0);
  t = concat_0(t);
  return(t);
}
ATerm RulesToSdefs_0 (ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL;
  m_45 = t;
  g_45 :
  if(match_cons(m_45, sym_Specification_1))
    {
      n_45 = ATgetArgument(m_45, 0);
      h_45 :
      if(((ATgetType(n_45) == AT_LIST) && !(ATisEmpty(n_45))))
        {
          o_45 = ATgetFirst((ATermList) n_45);
          q_45 = (ATerm) ATgetNext((ATermList) n_45);
          i_45 :
          if(match_cons(o_45, sym_Signature_1))
            {
              p_45 = ATgetArgument(o_45, 0);
              j_45 :
              if(((ATgetType(q_45) == AT_LIST) && !(ATisEmpty(q_45))))
                {
                  r_45 = ATgetFirst((ATermList) q_45);
                  t_45 = (ATerm) ATgetNext((ATermList) q_45);
                  k_45 :
                  if(match_cons(r_45, sym_Strategies_1))
                    {
                      s_45 = ATgetArgument(r_45, 0);
                      l_45 :
                      if(((ATgetType(t_45) == AT_LIST) && ATisEmpty(t_45)))
                        {
                          {
                            ATerm w_45 = NULL;
                            ATerm x_45 = NULL,z_45 = NULL,b_46 = NULL;
                            ATerm j_21;
                            j_21 = t;
                            {
                              ATerm y_45 = NULL;
                              t = not_null(p_45);
                              {
                                t = congdefs_0(t);
                                {
                                  y_45 = t;
                                  if(((x_45 != NULL) && (x_45 != y_45)))
                                    _fail(y_45);
                                  else
                                    x_45 = y_45;
                                }
                              }
                            }
                            t = j_21;
                            {
                              ATerm a_46 = NULL;
                              t = (ATerm) ATinsert(CheckATermList(not_null(s_45)), (ATerm) ATmakeAppl(sym_RDef_3, term_s_21, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_u_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_21), term_c_21))), (ATerm) ATmakeAppl(sym_VarDec_2, term_t_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_21), term_c_21))), (ATerm) ATmakeAppl(sym_Rule_3, term_z_21, term_l_22, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_f_23), term_u_22)))));
                              {
                                ATerm s_2 (ATerm t)
                                {
                                  ATerm g_23 = t;
                                  int h_23 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = RDtoSD_0(t);
                                      ;
                                      LocalPopChoice(h_23);
                                    }
                                  else
                                    {
                                      t = g_23;
                                      t = DeclareVariables_0(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, s_2);
                                {
                                  a_46 = t;
                                  if(((z_45 != NULL) && (z_45 != a_46)))
                                    _fail(a_46);
                                  else
                                    z_45 = a_46;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_45), not_null(z_45));
                                {
                                  t = conc_0(t);
                                  {
                                    b_46 = t;
                                    if(((w_45 != NULL) && (w_45 != b_46)))
                                      _fail(b_46);
                                    else
                                      w_45 = b_46;
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(w_45))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(p_45))));
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TupleDeclarations_0 (ATerm t)
{
  ATerm k_46 = NULL;
  ATerm m_46 = NULL;
  k_46 = t;
  {
    ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL;
    t = (ATerm) ATempty;
    {
      ATerm t_2 (ATerm t)
      {
        t = term_i_23;
        return(t);
      }
      t = rewrite_1(t, t_2);
      {
        n_46 = t;
        i_46 :
        if(match_cons(n_46, sym_Defined_2))
          {
            o_46 = ATgetArgument(n_46, 0);
            p_46 = ATgetArgument(n_46, 1);
            j_46 :
            if(match_string(o_46, "n_1"))
              {
                if(((m_46 != NULL) && (m_46 != p_46)))
                  _fail(p_46);
                else
                  m_46 = p_46;
              }
            else
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
    t = not_null(m_46);
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm t_46 = NULL;
  t_46 = t;
  t = SSL_int_to_string(not_null(t_46));
  return(t);
}
ATerm CheckConsError_0 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL;
  c_47 = t;
  b_47 :
  if(match_cons(c_47, sym_Op_2))
    {
      d_47 = ATgetArgument(c_47, 0);
      e_47 = ATgetArgument(c_47, 1);
      {
        ATerm i_47 = NULL,j_47 = NULL;
        ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL;
        t = term_m_23;
        {
          ATerm u_2 (ATerm t)
          {
            t = term_n_23;
            return(t);
          }
          t = rewrite_1(t, u_2);
          {
            k_47 = t;
            z_46 :
            if(match_cons(k_47, sym_Defined_3))
              {
                l_47 = ATgetArgument(k_47, 0);
                m_47 = ATgetArgument(k_47, 1);
                n_47 = ATgetArgument(k_47, 2);
                a_47 :
                if(match_string(l_47, "q_1"))
                  {
                    ATerm o_47 = NULL;
                    if(((i_47 != NULL) && (i_47 != m_47)))
                      _fail(m_47);
                    else
                      i_47 = m_47;
                    {
                      if(((j_47 != NULL) && (j_47 != n_47)))
                        _fail(n_47);
                      else
                        j_47 = n_47;
                      {
                        ATerm p_47 = NULL;
                        t = not_null(e_47);
                        {
                          t = length_0(t);
                          {
                            t = int_to_string_0(t);
                            {
                              p_47 = t;
                              if(((o_47 != NULL) && (o_47 != p_47)))
                                _fail(p_47);
                              else
                                o_47 = p_47;
                            }
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_r_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_23), not_null(o_47)), term_y_23), not_null(d_47)), term_x_23), term_w_23), not_null(j_47)), term_v_23), not_null(i_47)), term_u_23));
                          t = printnl_0(t);
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
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(d_47), not_null(e_47));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL;
  a_48 = t;
  z_47 :
  if(match_cons(a_48, sym__2))
    {
      b_48 = ATgetArgument(a_48, 0);
      c_48 = ATgetArgument(a_48, 1);
      {
        ATerm a_24 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(b_48), not_null(c_48));
            ;
            LocalPopChoice(b_24);
          }
        else
          {
            t = a_24;
            t = SSL_subtr(not_null(b_48), not_null(c_48));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL;
    o_48 = t;
    h_48 :
    if(match_cons(o_48, sym__2))
      {
        p_48 = ATgetArgument(o_48, 0);
        q_48 = ATgetArgument(o_48, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(p_48), not_null(q_48), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL;
    t_48 = t;
    j_48 :
    if(match_cons(t_48, sym__3))
      {
        u_48 = ATgetArgument(t_48, 0);
        v_48 = ATgetArgument(t_48, 1);
        w_48 = ATgetArgument(t_48, 2);
        k_48 :
        if(match_int(u_48, 0))
          {
            t = not_null(w_48);
          }
        else
          {
            _fail(t);
          }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL;
    z_48 = t;
    n_48 :
    if(match_cons(z_48, sym__3))
      {
        a_49 = ATgetArgument(z_48, 0);
        b_49 = ATgetArgument(z_48, 1);
        c_49 = ATgetArgument(z_48, 2);
        {
          ATerm g_49 = NULL;
          ATerm f_24;
          f_24 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_49), term_g_24);
            t = geq_0(t);
          }
          t = f_24;
          {
            ATerm h_49 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_49), term_g_24);
            {
              t = subt_0(t);
              {
                h_49 = t;
                if(((g_49 != NULL) && (g_49 != h_49)))
                  _fail(h_49);
                else
                  g_49 = h_49;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_49), not_null(b_49), (ATerm) ATinsert(CheckATermList(not_null(c_49)), not_null(b_49)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, v_2, w_2, x_2);
  return(t);
}
ATerm CheckTuple_0 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
  b_50 = t;
  x_49 :
  if(match_cons(b_50, sym_Op_2))
    {
      c_50 = ATgetArgument(b_50, 0);
      d_50 = ATgetArgument(b_50, 1);
      y_49 :
      if(match_string(c_50, ""))
        {
          ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL;
          ATerm k_24;
          k_24 = t;
          {
            ATerm j_50 = NULL;
            t = not_null(d_50);
            {
              ATerm k_50 = NULL;
              t = length_0(t);
              {
                j_50 = t;
                {
                  if(((g_50 != NULL) && (g_50 != j_50)))
                    _fail(j_50);
                  else
                    g_50 = j_50;
                  {
                    ATerm l_50 = NULL,n_50 = NULL;
                    t = term_z_14;
                    {
                      k_50 = t;
                      {
                        if(((f_50 != NULL) && (f_50 != k_50)))
                          _fail(k_50);
                        else
                          f_50 = k_50;
                        {
                          ATerm n_24;
                          n_24 = t;
                          {
                            ATerm m_50 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(g_50), term_p_24);
                            {
                              t = copy_0(t);
                              {
                                m_50 = t;
                                if(((l_50 != NULL) && (l_50 != m_50)))
                                  _fail(m_50);
                                else
                                  l_50 = m_50;
                              }
                            }
                          }
                          t = n_24;
                          {
                            ATerm o_50 = NULL,q_50 = NULL;
                            t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_z_14, (ATerm) ATmakeAppl(sym_FunType_2, not_null(l_50), term_p_24));
                            {
                              n_50 = t;
                              {
                                if(((h_50 != NULL) && (h_50 != n_50)))
                                  _fail(n_50);
                                else
                                  h_50 = n_50;
                                {
                                  t = GenerateCheckRule_0(t);
                                  {
                                    ATerm p_50 = NULL;
                                    ATerm q_24 = t;
                                    int r_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = TupleDeclarations_0(t);
                                        ;
                                        LocalPopChoice(r_24);
                                      }
                                    else
                                      {
                                        t = q_24;
                                        t = (ATerm) ATempty;
                                      }
                                    {
                                      p_50 = t;
                                      if(((o_50 != NULL) && (o_50 != p_50)))
                                        _fail(p_50);
                                      else
                                        o_50 = p_50;
                                    }
                                    {
                                      t = (ATerm) ATinsert(CheckATermList(not_null(o_50)), not_null(h_50));
                                      {
                                        q_50 = t;
                                        {
                                          if(((i_50 != NULL) && (i_50 != q_50)))
                                            _fail(q_50);
                                          else
                                            i_50 = q_50;
                                          {
                                            ATerm u_24;
                                            u_24 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_v_24, not_null(i_50)));
                                              {
                                                ATerm y_2 (ATerm t)
                                                {
                                                  t = term_i_23;
                                                  return(t);
                                                }
                                                t = assert_1(t, y_2);
                                              }
                                            }
                                            t = u_24;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = k_24;
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CheckCons_0 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL;
  y_51 = t;
  x_51 :
  if(match_cons(y_51, sym_Op_2))
    {
      z_51 = ATgetArgument(y_51, 0);
      a_52 = ATgetArgument(y_51, 1);
      {
        ATerm y_24 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_52 = NULL;
            t = not_null(a_52);
            {
              t = length_0(t);
              {
                e_52 = t;
                {
                  ATerm g_52 = NULL,h_52 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(z_51), (ATerm) ATmakeAppl(sym_Keys_1, not_null(e_52)));
                  {
                    ATerm z_2 (ATerm t)
                    {
                      t = term_i_25;
                      return(t);
                    }
                    t = rewrite_1(t, z_2);
                    {
                      g_52 = t;
                      s_51 :
                      if(match_cons(g_52, sym_Defined_1))
                        {
                          h_52 = ATgetArgument(g_52, 0);
                          t_51 :
                          if(!(match_string(h_52, "k_1")))
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
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(z_51), (ATerm) ATempty);
                }
              }
            }
            ;
            LocalPopChoice(h_25);
          }
        else
          {
            t = y_24;
            {
              ATerm l_52 = NULL;
              t = not_null(a_52);
              {
                t = length_0(t);
                {
                  l_52 = t;
                  {
                    ATerm n_52 = NULL,o_52 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(z_51), (ATerm) ATmakeAppl(sym_Keys_1, not_null(l_52)));
                    {
                      ATerm a_3 (ATerm t)
                      {
                        t = term_i_25;
                        return(t);
                      }
                      t = rewrite_1(t, a_3);
                      {
                        n_52 = t;
                        v_51 :
                        if(match_cons(n_52, sym_Defined_1))
                          {
                            o_52 = ATgetArgument(n_52, 0);
                            w_51 :
                            if(!(match_string(o_52, "h_1")))
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
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(z_51), (ATerm) ATempty);
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
ATerm manytd_1 (ATerm t, ATerm o_98 (ATerm))
{
  ATerm t_52 (ATerm t)
  {
    ATerm j_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_98(t);
        {
          ATerm b_3 (ATerm t)
          {
            t = try_1(t, t_52);
            return(t);
          }
          t = _all(t, b_3);
        }
        ;
        LocalPopChoice(p_25);
      }
    else
      {
        t = j_25;
        t = _some(t, t_52);
      }
    return(t);
  }
  t = t_52(t);
  return(t);
}
ATerm check_constructors_p__2 (ATerm t, ATerm q_124 (ATerm), ATerm r_124 (ATerm))
{
  ATerm w_52 = NULL,d_53 = NULL;
  ATerm c_3 (ATerm t)
  {
    t = term_n_23;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    ATerm q_25;
    q_25 = t;
    {
      ATerm e_53 = NULL;
      ATerm f_53 = NULL;
      t = q_124(t);
      {
        e_53 = t;
        {
          if(((d_53 != NULL) && (d_53 != e_53)))
            _fail(e_53);
          else
            d_53 = e_53;
          {
            t = r_124(t);
            {
              f_53 = t;
              if(((w_52 != NULL) && (w_52 != f_53)))
                _fail(f_53);
              else
                w_52 = f_53;
            }
          }
        }
      }
    }
    t = q_25;
    {
      ATerm r_25;
      r_25 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_23, (ATerm) ATmakeAppl(sym_Defined_3, term_s_25, not_null(w_52), not_null(d_53)));
        {
          ATerm e_3 (ATerm t)
          {
            t = term_n_23;
            return(t);
          }
          t = assert_1(t, e_3);
        }
      }
      t = r_25;
      {
        ATerm f_3 (ATerm t)
        {
          ATerm t_25 = t;
          if((PushChoice() == 0))
            {
              ATerm u_25 = t;
              int v_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CheckCons_0(t);
                  ;
                  LocalPopChoice(v_25);
                }
              else
                {
                  t = u_25;
                  t = CheckTuple_0(t);
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_25;
            }
          t = CheckConsError_0(t);
          return(t);
        }
        t = manytd_1(t, f_3);
      }
    }
    return(t);
  }
  t = scope_2(t, c_3, d_3);
  return(t);
}
ATerm check_constructors_0 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL;
  l_53 = t;
  k_53 :
  if(match_cons(l_53, sym_SDef_3))
    {
      m_53 = ATgetArgument(l_53, 0);
      n_53 = ATgetArgument(l_53, 1);
      o_53 = ATgetArgument(l_53, 2);
      {
        t = not_null(o_53);
        {
          ATerm g_3 (ATerm t)
          {
            t = not_null(m_53);
            return(t);
          }
          ATerm h_3 (ATerm t)
          {
            t = term_w_25;
            return(t);
          }
          t = check_constructors_p__2(t, g_3, h_3);
        }
      }
    }
  else
    {
      if(match_cons(l_53, sym_RDef_3))
        {
          m_53 = ATgetArgument(l_53, 0);
          n_53 = ATgetArgument(l_53, 1);
          o_53 = ATgetArgument(l_53, 2);
          {
            t = not_null(o_53);
            {
              ATerm i_3 (ATerm t)
              {
                t = not_null(m_53);
                return(t);
              }
              ATerm j_3 (ATerm t)
              {
                t = term_x_25;
                return(t);
              }
              t = check_constructors_p__2(t, i_3, j_3);
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
ATerm length_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    t = term_y_25;
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    t = term_g_24;
    return(t);
  }
  t = foldr_3(t, k_3, add_0, l_3);
  return(t);
}
ATerm GenerateCheckRule_0 (ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL;
  e_54 = t;
  b_54 :
  if(match_cons(e_54, sym_OpDecl_2))
    {
      f_54 = ATgetArgument(e_54, 0);
      g_54 = ATgetArgument(e_54, 1);
      c_54 :
      if(match_cons(g_54, sym_FunType_2))
        {
          h_54 = ATgetArgument(g_54, 0);
          d_54 = ATgetArgument(g_54, 1);
          {
            ATerm l_54 = NULL;
            ATerm d_26;
            d_26 = t;
            {
              ATerm m_54 = NULL;
              t = not_null(h_54);
              {
                t = length_0(t);
                {
                  m_54 = t;
                  if(((l_54 != NULL) && (l_54 != m_54)))
                    _fail(m_54);
                  else
                    l_54 = m_54;
                }
              }
            }
            t = d_26;
            {
              ATerm e_26;
              e_26 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_54), (ATerm) ATmakeAppl(sym_Keys_1, not_null(l_54))), term_j_26);
                {
                  ATerm m_3 (ATerm t)
                  {
                    t = term_i_25;
                    return(t);
                  }
                  t = assert_1(t, m_3);
                }
              }
              t = e_26;
            }
          }
        }
      else
        {
          if(match_cons(g_54, sym_ConstType_1))
            {
              h_54 = ATgetArgument(g_54, 0);
              {
                ATerm p_54 = NULL;
                ATerm l_26;
                l_26 = t;
                {
                  ATerm q_54 = NULL;
                  t = term_y_25;
                  {
                    q_54 = t;
                    if(((p_54 != NULL) && (p_54 != q_54)))
                      _fail(q_54);
                    else
                      p_54 = q_54;
                  }
                }
                t = l_26;
                {
                  ATerm o_26;
                  o_26 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, not_null(f_54), (ATerm) ATmakeAppl(sym_Keys_1, not_null(p_54))), term_q_26);
                    {
                      ATerm n_3 (ATerm t)
                      {
                        t = term_i_25;
                        return(t);
                      }
                      t = assert_1(t, n_3);
                    }
                  }
                  t = o_26;
                }
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
ATerm CheckConstructors_0 (ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL;
  k_55 = t;
  b_55 :
  if(match_cons(k_55, sym_Specification_1))
    {
      l_55 = ATgetArgument(k_55, 0);
      c_55 :
      if(((ATgetType(l_55) == AT_LIST) && !(ATisEmpty(l_55))))
        {
          m_55 = ATgetFirst((ATermList) l_55);
          r_55 = (ATerm) ATgetNext((ATermList) l_55);
          d_55 :
          if(match_cons(m_55, sym_Signature_1))
            {
              n_55 = ATgetArgument(m_55, 0);
              e_55 :
              if(((ATgetType(n_55) == AT_LIST) && !(ATisEmpty(n_55))))
                {
                  o_55 = ATgetFirst((ATermList) n_55);
                  q_55 = (ATerm) ATgetNext((ATermList) n_55);
                  f_55 :
                  if(match_cons(o_55, sym_Constructors_1))
                    {
                      p_55 = ATgetArgument(o_55, 0);
                      g_55 :
                      if(((ATgetType(q_55) == AT_LIST) && ATisEmpty(q_55)))
                        {
                          h_55 :
                          if(((ATgetType(r_55) == AT_LIST) && !(ATisEmpty(r_55))))
                            {
                              s_55 = ATgetFirst((ATermList) r_55);
                              u_55 = (ATerm) ATgetNext((ATermList) r_55);
                              i_55 :
                              if(match_cons(s_55, sym_Strategies_1))
                                {
                                  t_55 = ATgetArgument(s_55, 0);
                                  j_55 :
                                  if(((ATgetType(u_55) == AT_LIST) && ATisEmpty(u_55)))
                                    {
                                      {
                                        ATerm x_55 = NULL,y_55 = NULL,c_56 = NULL;
                                        ATerm r_26;
                                        r_26 = t;
                                        {
                                          ATerm z_55 = NULL;
                                          ATerm a_56 = NULL;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(p_55)), (ATerm) ATmakeAppl(sym_OpDecl_2, term_z_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_24), term_p_24), term_p_24), term_p_24), term_p_24), term_p_24), term_p_24), term_p_24), term_p_24))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_z_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_24), term_p_24), term_p_24), term_p_24), term_p_24), term_p_24), term_p_24), term_p_24))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_z_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_24), term_p_24), term_p_24), term_p_24), term_p_24), term_p_24), term_p_24))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_z_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_24), term_p_24), term_p_24), term_p_24), term_p_24), term_p_24))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_z_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_24), term_p_24), term_p_24), term_p_24), term_p_24))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_z_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_p_24), term_p_24), term_p_24), term_p_24))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_z_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_p_24), term_p_24), term_p_24))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_z_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_24), term_p_24))), term_t_26);
                                          {
                                            z_55 = t;
                                            {
                                              if(((x_55 != NULL) && (x_55 != z_55)))
                                                _fail(z_55);
                                              else
                                                x_55 = z_55;
                                              {
                                                t = not_null(x_55);
                                                {
                                                  t = map_1(t, GenerateCheckRule_0);
                                                  {
                                                    t = not_null(t_55);
                                                    {
                                                      t = filter_1(t, check_constructors_0);
                                                      {
                                                        a_56 = t;
                                                        z_54 :
                                                        if(((ATgetType(a_56) == AT_LIST) && ATisEmpty(a_56)))
                                                          {
                                                            {
                                                              ATerm b_56 = NULL;
                                                              ATerm u_26 = t;
                                                              int v_26 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = TupleDeclarations_0(t);
                                                                  ;
                                                                  LocalPopChoice(v_26);
                                                                }
                                                              else
                                                                {
                                                                  t = u_26;
                                                                  t = (ATerm) ATempty;
                                                                }
                                                              {
                                                                b_56 = t;
                                                                if(((y_55 != NULL) && (y_55 != b_56)))
                                                                  _fail(b_56);
                                                                else
                                                                  y_55 = b_56;
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
                                        t = r_26;
                                        {
                                          ATerm d_56 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_55), not_null(x_55));
                                          {
                                            t = conc_0(t);
                                            {
                                              d_56 = t;
                                              if(((c_56 != NULL) && (c_56 != d_56)))
                                                _fail(d_56);
                                              else
                                                c_56 = d_56;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(t_55))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(c_56))))));
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
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm exp_overlays2_1 (ATerm t, ATerm g_123 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm w_26;
    w_26 = t;
    {
      ATerm x_26 = t;
      if((PushChoice() == 0))
        {
          ATerm t_56 = NULL;
          t = g_123(t);
          {
            t_56 = t;
            s_56 :
            if(((ATgetType(t_56) == AT_LIST) && ATisEmpty(t_56)))
              {
                {
                }
              }
            else
              {
                _fail(t);
              }
          }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = x_26;
        }
    }
    t = w_26;
    {
      ATerm p_3 (ATerm t)
      {
        ATerm q_3 (ATerm t)
        {
          t = ExpOverlay_1(t, g_123);
          return(t);
        }
        t = try_1(t, q_3);
        return(t);
      }
      t = topdown_1(t, p_3);
    }
    return(t);
  }
  t = try_1(t, o_3);
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL;
  d_57 = t;
  b_57 :
  if(match_cons(d_57, sym_BuildDefault_1))
    {
      e_57 = ATgetArgument(d_57, 0);
      t = term_q_17;
    }
  else
    {
      if(match_cons(d_57, sym_Real_1))
        {
          e_57 = ATgetArgument(d_57, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(e_57)));
        }
      else
        {
          if(match_cons(d_57, sym_Int_1))
            {
              e_57 = ATgetArgument(d_57, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(e_57)));
            }
          else
            {
              if(match_cons(d_57, sym_Str_1))
                {
                  e_57 = ATgetArgument(d_57, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(e_57)));
                }
              else
                {
                  if(match_cons(d_57, sym_Anno_2))
                    {
                      e_57 = ATgetArgument(d_57, 0);
                      c_57 = ATgetArgument(d_57, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_y_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_57)), not_null(e_57)));
                    }
                  else
                    {
                      if(match_cons(d_57, sym_Op_2))
                        {
                          e_57 = ATgetArgument(d_57, 0);
                          c_57 = ATgetArgument(d_57, 1);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_57)), not_null(c_57));
                        }
                      else
                        {
                          if(match_cons(d_57, sym_Var_1))
                            {
                              e_57 = ATgetArgument(d_57, 0);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_57)), (ATerm) ATempty);
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
ATerm Op_2 (ATerm t, ATerm k_82 (ATerm), ATerm l_82 (ATerm))
{
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
  i_58 = t;
  h_58 :
  if(match_cons(i_58, sym_Op_2))
    {
      j_58 = ATgetArgument(i_58, 0);
      k_58 = ATgetArgument(i_58, 1);
      {
        ATerm o_58 = NULL,r_58 = NULL;
        ATerm p_58 = NULL;
        t = SSLgetAnnotations(not_null(i_58));
        {
          p_58 = t;
          if(((o_58 != NULL) && (o_58 != p_58)))
            _fail(p_58);
          else
            o_58 = p_58;
        }
        {
          t = not_null(j_58);
          {
            ATerm t_58 = NULL;
            t = k_82(t);
            {
              r_58 = t;
              {
                t = not_null(k_58);
                {
                  ATerm v_58 = NULL;
                  t = l_82(t);
                  {
                    t_58 = t;
                    {
                      ATerm w_58 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(r_58), not_null(t_58)), not_null(o_58));
                      {
                        w_58 = t;
                        if(((v_58 != NULL) && (v_58 != w_58)))
                          _fail(w_58);
                        else
                          v_58 = w_58;
                      }
                      t = not_null(v_58);
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
ATerm trm_to_cong_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm s_3 (ATerm t)
    {
      t = map_1(t, trm_to_cong_0);
      return(t);
    }
    t = Op_2(t, _id, s_3);
    return(t);
  }
  t = try_1(t, r_3);
  t = Trm_to_Cong_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0 (ATerm t)
{
  ATerm o_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL;
  o_59 = t;
  n_59 :
  if(match_cons(o_59, sym_Overlay_3))
    {
      q_59 = ATgetArgument(o_59, 0);
      r_59 = ATgetArgument(o_59, 1);
      s_59 = ATgetArgument(o_59, 2);
      {
        ATerm w_59 = NULL,a_60 = NULL;
        ATerm e_27;
        e_27 = t;
        {
          ATerm z_59 = NULL;
          t = not_null(r_59);
          {
            ATerm t_3 (ATerm t)
            {
              ATerm x_59 = NULL;
              ATerm y_59 = NULL;
              y_59 = t;
              if(((x_59 != NULL) && (x_59 != y_59)))
                _fail(y_59);
              else
                x_59 = y_59;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(x_59), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_21), term_c_21));
              return(t);
            }
            t = map_1(t, t_3);
            {
              z_59 = t;
              if(((w_59 != NULL) && (w_59 != z_59)))
                _fail(z_59);
              else
                w_59 = z_59;
            }
          }
        }
        t = e_27;
        {
          ATerm b_60 = NULL;
          t = not_null(s_59);
          {
            t = trm_to_cong_0(t);
            {
              b_60 = t;
              if(((a_60 != NULL) && (a_60 != b_60)))
                _fail(b_60);
              else
                a_60 = b_60;
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(q_59), not_null(w_59), not_null(a_60));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm b_124 (ATerm))
{
  t = Scope_2(t, b_124, _id);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm i_60 = NULL,j_60 = NULL;
  i_60 = t;
  h_60 :
  if(match_cons(i_60, sym_Var_1))
    {
      j_60 = ATgetArgument(i_60, 0);
      t = not_null(j_60);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm m_121 (ATerm), ATerm n_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL;
  q_60 = t;
  p_60 :
  if(match_cons(q_60, sym__3))
    {
      r_60 = ATgetArgument(q_60, 0);
      s_60 = ATgetArgument(q_60, 1);
      t_60 = ATgetArgument(q_60, 2);
      {
        t = not_null(r_60);
        {
          ATerm u_3 (ATerm t)
          {
            ATerm x_60 = NULL;
            x_60 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_60), not_null(t_60));
              t = m_121(t);
            }
            return(t);
          }
          ATerm v_3 (ATerm t)
          {
            ATerm z_60 = NULL;
            z_60 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_60), not_null(s_60));
              t = m_121(t);
            }
            return(t);
          }
          t = n_121(t, u_3, v_3, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm g_121 (ATerm), ATerm h_121 (ATerm, ATerm (ATerm)))
{
  ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL;
  l_61 = t;
  k_61 :
  if(match_cons(l_61, sym__2))
    {
      m_61 = ATgetArgument(l_61, 0);
      n_61 = ATgetArgument(l_61, 1);
      {
        ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL,d_62 = NULL;
        ATerm f_27;
        f_27 = t;
        {
          ATerm t_61 = NULL;
          t = not_null(m_61);
          {
            ATerm u_61 = NULL;
            t = g_121(t);
            {
              t_61 = t;
              {
                if(((q_61 != NULL) && (q_61 != t_61)))
                  _fail(t_61);
                else
                  q_61 = t_61;
                {
                  ATerm v_61 = NULL,c_62 = NULL;
                  t = map_1(t, new_0);
                  {
                    u_61 = t;
                    {
                      if(((r_61 != NULL) && (r_61 != u_61)))
                        _fail(u_61);
                      else
                        r_61 = u_61;
                      {
                        ATerm b_62 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_61), not_null(r_61));
                        {
                          t = zip_1(t, _id);
                          {
                            b_62 = t;
                            if(((v_61 != NULL) && (v_61 != b_62)))
                              _fail(b_62);
                            else
                              v_61 = b_62;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_61), not_null(n_61));
                          {
                            t = conc_0(t);
                            {
                              c_62 = t;
                              if(((s_61 != NULL) && (s_61 != c_62)))
                                _fail(c_62);
                              else
                                s_61 = c_62;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = f_27;
        {
          ATerm e_62 = NULL;
          t = not_null(m_61);
          {
            ATerm w_3 (ATerm t)
            {
              t = not_null(r_61);
              return(t);
            }
            t = h_121(t, w_3);
            {
              e_62 = t;
              if(((d_62 != NULL) && (d_62 != e_62)))
                _fail(e_62);
              else
                d_62 = e_62;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(d_62), not_null(n_61), not_null(s_61));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm z_120 (ATerm), ATerm a_121 (ATerm))
{
  ATerm d_63 = NULL;
  ATerm f_63 = NULL,g_63 = NULL;
  d_63 = t;
  {
    ATerm h_63 = NULL;
    t = not_null(d_63);
    {
      ATerm i_63 = NULL;
      t = z_120(t);
      {
        h_63 = t;
        {
          if(((f_63 != NULL) && (f_63 != h_63)))
            _fail(h_63);
          else
            f_63 = h_63;
          {
            t = a_121(t);
            {
              i_63 = t;
              if(((g_63 != NULL) && (g_63 != i_63)))
                _fail(i_63);
              else
                g_63 = i_63;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_63), not_null(g_63));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL,e_64 = NULL,f_64 = NULL,h_64 = NULL;
  v_63 = t;
  t_63 :
  if(match_cons(v_63, sym__2))
    {
      w_63 = ATgetArgument(v_63, 0);
      e_64 = ATgetArgument(v_63, 1);
      u_63 :
      if(((ATgetType(e_64) == AT_LIST) && !(ATisEmpty(e_64))))
        {
          f_64 = ATgetFirst((ATermList) e_64);
          h_64 = (ATerm) ATgetNext((ATermList) e_64);
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_63), not_null(h_64));
        }
      else
        {
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
  ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL;
  m_65 = t;
  h_65 :
  if(match_cons(m_65, sym__2))
    {
      n_65 = ATgetArgument(m_65, 0);
      o_65 = ATgetArgument(m_65, 1);
      k_65 :
      if(((ATgetType(o_65) == AT_LIST) && !(ATisEmpty(o_65))))
        {
          p_65 = ATgetFirst((ATermList) o_65);
          s_65 = (ATerm) ATgetNext((ATermList) o_65);
          l_65 :
          if(match_cons(p_65, sym__2))
            {
              q_65 = ATgetArgument(p_65, 0);
              r_65 = ATgetArgument(p_65, 1);
              {
                ATerm u_65 = NULL;
                if(((n_65 != NULL) && (n_65 != q_65)))
                  _fail(q_65);
                else
                  n_65 = q_65;
                {
                  if(((u_65 != NULL) && (u_65 != r_65)))
                    _fail(r_65);
                  else
                    u_65 = r_65;
                  t = not_null(u_65);
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
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm r_121 (ATerm, ATerm (ATerm)))
{
  ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL;
  z_65 = t;
  y_65 :
  if(match_cons(z_65, sym__2))
    {
      a_66 = ATgetArgument(z_65, 0);
      b_66 = ATgetArgument(z_65, 1);
      {
        t = not_null(a_66);
        {
          ATerm x_3 (ATerm t)
          {
            ATerm y_3 (ATerm t)
            {
              t = not_null(b_66);
              return(t);
            }
            t = split_2(t, _id, y_3);
            t = lookup_0(t);
            return(t);
          }
          t = r_121(t, x_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm i_101 (ATerm))
{
  ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL;
  i_66 = t;
  h_66 :
  if(match_cons(i_66, sym__2))
    {
      j_66 = ATgetArgument(i_66, 0);
      k_66 = ATgetArgument(i_66, 1);
      {
        t = not_null(j_66);
        {
          ATerm z_3 (ATerm t)
          {
            ATerm n_66 = NULL;
            n_66 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_66), not_null(k_66));
              t = i_101(t);
            }
            return(t);
          }
          t = _all(t, z_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm s_100 (ATerm))
{
  ATerm q_68 (ATerm t)
  {
    ATerm l_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_100(t);
        ;
        LocalPopChoice(n_27);
      }
    else
      {
        t = l_27;
        t = all_dist_1(t, q_68);
      }
    return(t);
  }
  t = q_68(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL,j_71 = NULL,l_71 = NULL;
  j_70 = t;
  i_70 :
  if(match_cons(j_70, sym__2))
    {
      k_70 = ATgetArgument(j_70, 0);
      j_71 = ATgetArgument(j_70, 1);
      {
        ATerm n_71 = NULL;
        if(((n_71 != NULL) && (n_71 != j_71)))
          _fail(j_71);
        else
          n_71 = j_71;
      }
    }
  else
    {
      if(match_cons(j_70, sym__3))
        {
          k_70 = ATgetArgument(j_70, 0);
          j_71 = ATgetArgument(j_70, 1);
          l_71 = ATgetArgument(j_70, 2);
          {
            ATerm e_75 = NULL;
            ATerm f_75 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_70), not_null(j_71));
            {
              t = zip_1(t, _id);
              {
                f_75 = t;
                if(((e_75 != NULL) && (e_75 != f_75)))
                  _fail(f_75);
                else
                  e_75 = f_75;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_75), not_null(l_71));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm n_120 (ATerm), ATerm o_120 (ATerm, ATerm (ATerm)), ATerm p_120 (ATerm), ATerm q_120 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm r_120 (ATerm, ATerm (ATerm)), ATerm s_120 (ATerm))
{
  ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL;
  t = subs_args_0(t);
  {
    l_75 = t;
    k_75 :
    if(match_cons(l_75, sym__2))
      {
        m_75 = ATgetArgument(l_75, 0);
        n_75 = ATgetArgument(l_75, 1);
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_75), (ATerm) ATempty);
          {
            ATerm t_79 (ATerm t)
            {
              ATerm a_4 (ATerm t)
              {
                ATerm p_27 = t;
                int s_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = RnVar_1(t, o_120);
                    ;
                    LocalPopChoice(s_27);
                  }
                else
                  {
                    t = p_27;
                    {
                      ATerm t_27 = t;
                      int u_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Fst_0(t);
                          {
                            ATerm b_4 (ATerm t)
                            {
                              t = not_null(m_75);
                              return(t);
                            }
                            t = SubsVar_2(t, n_120, b_4);
                            t = s_120(t);
                          }
                          ;
                          LocalPopChoice(u_27);
                        }
                      else
                        {
                          t = t_27;
                          {
                            t = RnBinding_2(t, p_120, r_120);
                            t = DistBinding_2(t, t_79, q_120);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = env_alltd_1(t, a_4);
              return(t);
            }
            t = t_79(t);
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
ATerm substitute_5 (ATerm t, ATerm u_120 (ATerm), ATerm v_120 (ATerm, ATerm (ATerm)), ATerm w_120 (ATerm), ATerm x_120 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm y_120 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, u_120, v_120, w_120, x_120, y_120, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  ATerm u_79 (ATerm t, ATerm x_79 (ATerm))
  {
    t = Scope_2(t, x_79, _id);
    return(t);
  }
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, u_79);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm h_123 (ATerm))
{
  ATerm f_80 = NULL,g_80 = NULL,h_80 = NULL;
  f_80 = t;
  e_80 :
  if(match_cons(f_80, sym_Op_2))
    {
      g_80 = ATgetArgument(f_80, 0);
      h_80 = ATgetArgument(f_80, 1);
      {
        ATerm k_80 = NULL,l_80 = NULL;
        t = h_123(t);
        {
          ATerm c_4 (ATerm t)
          {
            ATerm v_27;
            v_27 = t;
            {
              ATerm m_80 = NULL,n_80 = NULL,o_80 = NULL,p_80 = NULL;
              m_80 = t;
              d_80 :
              if(match_cons(m_80, sym_Overlay_3))
                {
                  n_80 = ATgetArgument(m_80, 0);
                  o_80 = ATgetArgument(m_80, 1);
                  p_80 = ATgetArgument(m_80, 2);
                  {
                    ATerm q_80 = NULL,r_80 = NULL,s_80 = NULL,u_80 = NULL;
                    if(((g_80 != NULL) && (g_80 != n_80)))
                      _fail(n_80);
                    else
                      g_80 = n_80;
                    {
                      if(((q_80 != NULL) && (q_80 != o_80)))
                        _fail(o_80);
                      else
                        q_80 = o_80;
                      {
                        if(((r_80 != NULL) && (r_80 != p_80)))
                          _fail(p_80);
                        else
                          r_80 = p_80;
                        {
                          ATerm w_27;
                          w_27 = t;
                          {
                            ATerm t_80 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(q_80), not_null(h_80));
                            {
                              t = zip_1(t, _id);
                              {
                                t_80 = t;
                                if(((s_80 != NULL) && (s_80 != t_80)))
                                  _fail(t_80);
                                else
                                  s_80 = t_80;
                              }
                            }
                          }
                          t = w_27;
                          {
                            ATerm v_80 = NULL;
                            t = not_null(s_80);
                            {
                              u_80 = t;
                              {
                                if(((k_80 != NULL) && (k_80 != u_80)))
                                  _fail(u_80);
                                else
                                  k_80 = u_80;
                                {
                                  t = not_null(r_80);
                                  {
                                    v_80 = t;
                                    {
                                      if(((l_80 != NULL) && (l_80 != v_80)))
                                        _fail(v_80);
                                      else
                                        l_80 = v_80;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_80), not_null(r_80));
                                    }
                                  }
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
            t = v_27;
            return(t);
          }
          t = fetch_1(t, c_4);
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_80), not_null(l_80));
          t = tsubstitute_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm exp_overlays1_1 (ATerm t, ATerm f_123 (ATerm))
{
  ATerm d_4 (ATerm t)
  {
    ATerm x_27;
    x_27 = t;
    {
      ATerm y_27 = t;
      if((PushChoice() == 0))
        {
          ATerm c_81 = NULL;
          t = f_123(t);
          {
            c_81 = t;
            b_81 :
            if(((ATgetType(c_81) == AT_LIST) && ATisEmpty(c_81)))
              {
                {
                }
              }
            else
              {
                _fail(t);
              }
          }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = y_27;
        }
    }
    t = x_27;
    {
      ATerm e_4 (ATerm t)
      {
        ATerm f_4 (ATerm t)
        {
          t = ExpOverlay_1(t, f_123);
          return(t);
        }
        t = repeat_1(t, f_4);
        return(t);
      }
      t = topdown_1(t, e_4);
    }
    return(t);
  }
  t = try_1(t, d_4);
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm w_81 = NULL,x_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL,d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL;
  w_81 = t;
  o_81 :
  if(match_cons(w_81, sym_Specification_1))
    {
      x_81 = ATgetArgument(w_81, 0);
      p_81 :
      if(((ATgetType(x_81) == AT_LIST) && !(ATisEmpty(x_81))))
        {
          y_81 = ATgetFirst((ATermList) x_81);
          a_82 = (ATerm) ATgetNext((ATermList) x_81);
          q_81 :
          if(match_cons(y_81, sym_Signature_1))
            {
              z_81 = ATgetArgument(y_81, 0);
              r_81 :
              if(((ATgetType(a_82) == AT_LIST) && !(ATisEmpty(a_82))))
                {
                  b_82 = ATgetFirst((ATermList) a_82);
                  e_82 = (ATerm) ATgetNext((ATermList) a_82);
                  s_81 :
                  if(match_cons(b_82, sym_Overlays_1))
                    {
                      d_82 = ATgetArgument(b_82, 0);
                      t_81 :
                      if(((ATgetType(e_82) == AT_LIST) && !(ATisEmpty(e_82))))
                        {
                          f_82 = ATgetFirst((ATermList) e_82);
                          h_82 = (ATerm) ATgetNext((ATermList) e_82);
                          u_81 :
                          if(match_cons(f_82, sym_Strategies_1))
                            {
                              g_82 = ATgetArgument(f_82, 0);
                              v_81 :
                              if(((ATgetType(h_82) == AT_LIST) && ATisEmpty(h_82)))
                                {
                                  {
                                    ATerm p_82 = NULL,w_82 = NULL;
                                    ATerm z_27;
                                    z_27 = t;
                                    {
                                      ATerm v_82 = NULL;
                                      t = not_null(d_82);
                                      {
                                        ATerm g_4 (ATerm t)
                                        {
                                          t = not_null(d_82);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, g_4);
                                        {
                                          v_82 = t;
                                          if(((p_82 != NULL) && (p_82 != v_82)))
                                            _fail(v_82);
                                          else
                                            p_82 = v_82;
                                        }
                                      }
                                    }
                                    t = z_27;
                                    {
                                      ATerm x_82 = NULL,z_82 = NULL,b_83 = NULL;
                                      ATerm a_28;
                                      a_28 = t;
                                      {
                                        ATerm y_82 = NULL;
                                        t = not_null(d_82);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            y_82 = t;
                                            if(((x_82 != NULL) && (x_82 != y_82)))
                                              _fail(y_82);
                                            else
                                              x_82 = y_82;
                                          }
                                        }
                                      }
                                      t = a_28;
                                      {
                                        ATerm a_83 = NULL;
                                        t = not_null(g_82);
                                        {
                                          ATerm h_4 (ATerm t)
                                          {
                                            t = not_null(p_82);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, h_4);
                                          {
                                            a_83 = t;
                                            if(((z_82 != NULL) && (z_82 != a_83)))
                                              _fail(a_83);
                                            else
                                              z_82 = a_83;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(x_82), not_null(z_82));
                                          {
                                            t = conc_0(t);
                                            {
                                              b_83 = t;
                                              if(((w_82 != NULL) && (w_82 != b_83)))
                                                _fail(b_83);
                                              else
                                                w_82 = b_83;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(w_82))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(z_81))));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DefineBound_0 (ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    ATerm l_83 = NULL;
    l_83 = t;
    {
      ATerm b_28;
      b_28 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_83)), term_h_28);
        {
          ATerm j_4 (ATerm t)
          {
            t = term_i_28;
            return(t);
          }
          t = assert_1(t, j_4);
        }
      }
      t = b_28;
    }
    return(t);
  }
  t = map_1(t, i_4);
  return(t);
}
ATerm overlay_ud_0 (ATerm t)
{
  ATerm q_83 = NULL,r_83 = NULL,s_83 = NULL,w_83 = NULL;
  q_83 = t;
  p_83 :
  if(match_cons(q_83, sym_Overlay_3))
    {
      r_83 = ATgetArgument(q_83, 0);
      s_83 = ATgetArgument(q_83, 1);
      w_83 = ATgetArgument(q_83, 2);
      {
        ATerm j_28;
        j_28 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_n_28, not_null(r_83)));
          {
            ATerm k_4 (ATerm t)
            {
              t = term_p_28;
              return(t);
            }
            t = assert_1(t, k_4);
            {
              t = not_null(s_83);
              {
                t = DefineBound_0(t);
                {
                  t = not_null(w_83);
                  t = use_vars_0(t);
                }
              }
            }
          }
        }
        t = j_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rdef_ud_0 (ATerm t)
{
  ATerm f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL,j_84 = NULL,k_84 = NULL,m_84 = NULL;
  f_84 = t;
  d_84 :
  if(match_cons(f_84, sym_RDef_3))
    {
      g_84 = ATgetArgument(f_84, 0);
      h_84 = ATgetArgument(f_84, 1);
      i_84 = ATgetArgument(f_84, 2);
      e_84 :
      if(match_cons(i_84, sym_StratRule_3))
        {
          j_84 = ATgetArgument(i_84, 0);
          k_84 = ATgetArgument(i_84, 1);
          m_84 = ATgetArgument(i_84, 2);
          {
            ATerm s_28;
            s_28 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_t_28, not_null(g_84)));
              {
                ATerm l_4 (ATerm t)
                {
                  t = term_p_28;
                  return(t);
                }
                t = assert_1(t, l_4);
                {
                  t = not_null(j_84);
                  {
                    t = unbound_vars_0(t);
                    {
                      t = not_null(k_84);
                      {
                        t = unbound_vars_0(t);
                        {
                          t = not_null(m_84);
                          t = unbound_vars_0(t);
                        }
                      }
                    }
                  }
                }
              }
            }
            t = s_28;
          }
        }
      else
        {
          if(match_cons(i_84, sym_Rule_3))
            {
              j_84 = ATgetArgument(i_84, 0);
              k_84 = ATgetArgument(i_84, 1);
              m_84 = ATgetArgument(i_84, 2);
              {
                ATerm u_28;
                u_28 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_v_28, not_null(g_84)));
                  {
                    ATerm m_4 (ATerm t)
                    {
                      t = term_p_28;
                      return(t);
                    }
                    t = assert_1(t, m_4);
                    {
                      t = not_null(j_84);
                      {
                        t = bind_vars_0(t);
                        {
                          t = not_null(m_84);
                          {
                            t = unbound_vars_0(t);
                            {
                              t = not_null(k_84);
                              t = use_vars_0(t);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = u_28;
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
ATerm guardedlchoice_1 (ATerm t, ATerm p_124 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    t = GuardedLChoice_3(t, p_124, p_124, _id);
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = GuardedLChoice_3(t, _id, _id, p_124);
    return(t);
  }
  t = abstract_choice_2(t, n_4, o_4);
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm a_86 (ATerm))
{
  ATerm n_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL;
  n_85 = t;
  k_85 :
  if(match_cons(n_85, sym_GuardedLChoice_3))
    {
      q_85 = ATgetArgument(n_85, 0);
      r_85 = ATgetArgument(n_85, 1);
      s_85 = ATgetArgument(n_85, 2);
      {
        ATerm e_86 = NULL,g_86 = NULL;
        ATerm f_86 = NULL;
        t = SSLgetAnnotations(not_null(n_85));
        {
          f_86 = t;
          if(((e_86 != NULL) && (e_86 != f_86)))
            _fail(f_86);
          else
            e_86 = f_86;
        }
        {
          t = not_null(q_85);
          {
            ATerm k_86 = NULL;
            t = y_85(t);
            {
              g_86 = t;
              {
                t = not_null(r_85);
                {
                  ATerm m_86 = NULL;
                  t = z_85(t);
                  {
                    k_86 = t;
                    {
                      t = not_null(s_85);
                      {
                        ATerm o_86 = NULL;
                        t = a_86(t);
                        {
                          m_86 = t;
                          {
                            ATerm p_86 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(g_86), not_null(k_86), not_null(m_86)), not_null(e_86));
                            {
                              p_86 = t;
                              if(((o_86 != NULL) && (o_86 != p_86)))
                                _fail(p_86);
                              else
                                o_86 = p_86;
                            }
                            t = not_null(o_86);
                          }
                        }
                      }
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
ATerm lchoice_1 (ATerm t, ATerm o_124 (ATerm))
{
  ATerm p_4 (ATerm t)
  {
    t = LChoice_2(t, o_124, _id);
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    t = LChoice_2(t, _id, o_124);
    return(t);
  }
  t = abstract_choice_2(t, p_4, q_4);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm u_85 (ATerm), ATerm v_85 (ATerm))
{
  ATerm c_87 = NULL,d_87 = NULL,e_87 = NULL;
  c_87 = t;
  b_87 :
  if(match_cons(c_87, sym_LChoice_2))
    {
      d_87 = ATgetArgument(c_87, 0);
      e_87 = ATgetArgument(c_87, 1);
      {
        ATerm i_87 = NULL,k_87 = NULL;
        ATerm j_87 = NULL;
        t = SSLgetAnnotations(not_null(c_87));
        {
          j_87 = t;
          if(((i_87 != NULL) && (i_87 != j_87)))
            _fail(j_87);
          else
            i_87 = j_87;
        }
        {
          t = not_null(d_87);
          {
            ATerm m_87 = NULL;
            t = u_85(t);
            {
              k_87 = t;
              {
                t = not_null(e_87);
                {
                  ATerm o_87 = NULL;
                  t = v_85(t);
                  {
                    m_87 = t;
                    {
                      ATerm p_87 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(k_87), not_null(m_87)), not_null(i_87));
                      {
                        p_87 = t;
                        if(((o_87 != NULL) && (o_87 != p_87)))
                          _fail(p_87);
                        else
                          o_87 = p_87;
                      }
                      t = not_null(o_87);
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
ATerm isect_Bound_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    ATerm s_4 (ATerm t)
    {
      ATerm h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL;
      h_88 = t;
      b_88 :
      if(match_cons(h_88, sym__2))
        {
          i_88 = ATgetArgument(h_88, 0);
          j_88 = ATgetArgument(h_88, 1);
          c_88 :
          if(((ATgetType(j_88) == AT_LIST) && !(ATisEmpty(j_88))))
            {
              k_88 = ATgetFirst((ATermList) j_88);
              m_88 = (ATerm) ATgetNext((ATermList) j_88);
              d_88 :
              if(match_cons(k_88, sym_Defined_1))
                {
                  l_88 = ATgetArgument(k_88, 0);
                  e_88 :
                  if(!(match_cons(i_88, sym_Scopes_0)))
                    {
                      ATerm w_28 = t;
                      int x_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm c_29;
                          c_29 = t;
                          {
                            ATerm o_88 = NULL,p_88 = NULL,q_88 = NULL,r_88 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, term_i_28, not_null(i_88));
                            {
                              t = table_get_0(t);
                              {
                                o_88 = t;
                                z_87 :
                                if(((ATgetType(o_88) == AT_LIST) && !(ATisEmpty(o_88))))
                                  {
                                    p_88 = ATgetFirst((ATermList) o_88);
                                    r_88 = (ATerm) ATgetNext((ATermList) o_88);
                                    a_88 :
                                    if(match_cons(p_88, sym_Defined_1))
                                      {
                                        q_88 = ATgetArgument(p_88, 0);
                                        {
                                        }
                                      }
                                    else
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
                          t = c_29;
                          ;
                          LocalPopChoice(x_28);
                        }
                      else
                        {
                          t = w_28;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_88), (ATerm) ATinsert(ATempty, term_d_29));
                        }
                    }
                }
              else
                {
                  f_88 :
                  if(!(match_cons(i_88, sym_Scopes_0)))
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              g_88 :
              if(!(match_cons(i_88, sym_Scopes_0)))
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
    t = try_1(t, s_4);
    return(t);
  }
  t = map_1(t, r_4);
  t = restore_Bound_0(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm x_88 = NULL,y_88 = NULL,z_88 = NULL;
  x_88 = t;
  w_88 :
  if(match_cons(x_88, sym__2))
    {
      y_88 = ATgetArgument(x_88, 0);
      z_88 = ATgetArgument(x_88, 1);
      {
        t = not_null(z_88);
        {
          ATerm t_4 (ATerm t)
          {
            ATerm c_89 = NULL,d_89 = NULL,e_89 = NULL;
            c_89 = t;
            v_88 :
            if(match_cons(c_89, sym__2))
              {
                d_89 = ATgetArgument(c_89, 0);
                e_89 = ATgetArgument(c_89, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(y_88), not_null(d_89), not_null(e_89));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, t_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm restore_Bound_0 (ATerm t)
{
  ATerm k_89 = NULL;
  k_89 = t;
  {
    ATerm e_29;
    e_29 = t;
    {
      t = term_i_28;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_28, not_null(k_89));
          t = table_putlist_0(t);
        }
      }
    }
    t = e_29;
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm o_89 = NULL;
  o_89 = t;
  t = SSL_table_keys(not_null(o_89));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm u_89 = NULL;
  u_89 = t;
  {
    t = table_keys_0(t);
    {
      ATerm u_4 (ATerm t)
      {
        ATerm w_89 = NULL;
        ATerm y_89 = NULL;
        w_89 = t;
        {
          ATerm z_89 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_89), not_null(w_89));
          {
            t = table_get_0(t);
            {
              z_89 = t;
              if(((y_89 != NULL) && (y_89 != z_89)))
                _fail(z_89);
              else
                y_89 = z_89;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_89), not_null(y_89));
        }
        return(t);
      }
      t = map_1(t, u_4);
    }
  }
  return(t);
}
ATerm save_Bound_0 (ATerm t)
{
  t = term_i_28;
  t = table_getlist_0(t);
  return(t);
}
ATerm abstract_choice_2 (ATerm t, ATerm l_124 (ATerm), ATerm m_124 (ATerm))
{
  ATerm f_90 = NULL,h_90 = NULL;
  ATerm f_29;
  f_29 = t;
  {
    ATerm g_90 = NULL;
    t = save_Bound_0(t);
    {
      g_90 = t;
      if(((f_90 != NULL) && (f_90 != g_90)))
        _fail(g_90);
      else
        f_90 = g_90;
    }
  }
  t = f_29;
  {
    t = l_124(t);
    {
      ATerm g_29;
      g_29 = t;
      {
        ATerm i_90 = NULL;
        t = save_Bound_0(t);
        {
          i_90 = t;
          {
            if(((h_90 != NULL) && (h_90 != i_90)))
              _fail(i_90);
            else
              h_90 = i_90;
            {
              t = not_null(f_90);
              t = restore_Bound_0(t);
            }
          }
        }
      }
      t = g_29;
      {
        t = m_124(t);
        {
          ATerm n_29;
          n_29 = t;
          {
            t = not_null(h_90);
            t = isect_Bound_0(t);
          }
          t = n_29;
        }
      }
    }
  }
  return(t);
}
ATerm choice_1 (ATerm t, ATerm n_124 (ATerm))
{
  ATerm v_4 (ATerm t)
  {
    t = Choice_2(t, n_124, _id);
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = Choice_2(t, _id, n_124);
    return(t);
  }
  t = abstract_choice_2(t, v_4, w_4);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm s_84 (ATerm), ATerm t_84 (ATerm))
{
  ATerm r_90 = NULL,s_90 = NULL,t_90 = NULL;
  r_90 = t;
  q_90 :
  if(match_cons(r_90, sym_Choice_2))
    {
      s_90 = ATgetArgument(r_90, 0);
      t_90 = ATgetArgument(r_90, 1);
      {
        ATerm x_90 = NULL,z_90 = NULL;
        ATerm y_90 = NULL;
        t = SSLgetAnnotations(not_null(r_90));
        {
          y_90 = t;
          if(((x_90 != NULL) && (x_90 != y_90)))
            _fail(y_90);
          else
            x_90 = y_90;
        }
        {
          t = not_null(s_90);
          {
            ATerm b_91 = NULL;
            t = s_84(t);
            {
              z_90 = t;
              {
                t = not_null(t_90);
                {
                  ATerm d_91 = NULL;
                  t = t_84(t);
                  {
                    b_91 = t;
                    {
                      ATerm e_91 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(z_90), not_null(b_91)), not_null(x_90));
                      {
                        e_91 = t;
                        if(((d_91 != NULL) && (d_91 != e_91)))
                          _fail(e_91);
                        else
                          d_91 = e_91;
                      }
                      t = not_null(d_91);
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
ATerm Context_0 (ATerm t)
{
  ATerm a_92 = NULL;
  a_92 = t;
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_92 = NULL;
        ATerm e_92 = NULL,f_92 = NULL,g_92 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm x_4 (ATerm t)
          {
            t = term_p_28;
            return(t);
          }
          t = rewrite_1(t, x_4);
          {
            e_92 = t;
            p_91 :
            if(match_cons(e_92, sym_Defined_2))
              {
                f_92 = ATgetArgument(e_92, 0);
                g_92 = ATgetArgument(e_92, 1);
                q_91 :
                if(match_string(f_92, "x_0"))
                  {
                    if(((d_92 != NULL) && (d_92 != g_92)))
                      _fail(g_92);
                    else
                      d_92 = g_92;
                  }
                else
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(a_92)), term_w_23), not_null(d_92)), term_t_29);
        ;
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
        {
          ATerm u_29 = t;
          int v_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_92 = NULL;
              ATerm k_92 = NULL,l_92 = NULL,m_92 = NULL;
              t = (ATerm) ATempty;
              {
                ATerm y_4 (ATerm t)
                {
                  t = term_p_28;
                  return(t);
                }
                t = rewrite_1(t, y_4);
                {
                  k_92 = t;
                  s_91 :
                  if(match_cons(k_92, sym_Defined_2))
                    {
                      l_92 = ATgetArgument(k_92, 0);
                      m_92 = ATgetArgument(k_92, 1);
                      t_91 :
                      if(match_string(l_92, "u_0"))
                        {
                          if(((j_92 != NULL) && (j_92 != m_92)))
                            _fail(m_92);
                          else
                            j_92 = m_92;
                        }
                      else
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
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(a_92)), term_w_23), not_null(j_92)), term_w_29);
              ;
              LocalPopChoice(v_29);
            }
          else
            {
              t = u_29;
              {
                ATerm x_29 = t;
                int d_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_92 = NULL;
                    ATerm q_92 = NULL,r_92 = NULL,s_92 = NULL;
                    t = (ATerm) ATempty;
                    {
                      ATerm z_4 (ATerm t)
                      {
                        t = term_p_28;
                        return(t);
                      }
                      t = rewrite_1(t, z_4);
                      {
                        q_92 = t;
                        v_91 :
                        if(match_cons(q_92, sym_Defined_2))
                          {
                            r_92 = ATgetArgument(q_92, 0);
                            s_92 = ATgetArgument(q_92, 1);
                            w_91 :
                            if(match_string(r_92, "r_0"))
                              {
                                if(((p_92 != NULL) && (p_92 != s_92)))
                                  _fail(s_92);
                                else
                                  p_92 = s_92;
                              }
                            else
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
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(a_92)), term_w_23), not_null(p_92)), term_w_29);
                    ;
                    LocalPopChoice(d_30);
                  }
                else
                  {
                    t = x_29;
                    {
                      ATerm v_92 = NULL;
                      ATerm w_92 = NULL,x_92 = NULL,y_92 = NULL;
                      t = (ATerm) ATempty;
                      {
                        ATerm a_5 (ATerm t)
                        {
                          t = term_p_28;
                          return(t);
                        }
                        t = rewrite_1(t, a_5);
                        {
                          w_92 = t;
                          y_91 :
                          if(match_cons(w_92, sym_Defined_2))
                            {
                              x_92 = ATgetArgument(w_92, 0);
                              y_92 = ATgetArgument(w_92, 1);
                              z_91 :
                              if(match_string(x_92, "o_0"))
                                {
                                  if(((v_92 != NULL) && (v_92 != y_92)))
                                    _fail(y_92);
                                  else
                                    v_92 = y_92;
                                }
                              else
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
                      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(a_92)), term_w_23), not_null(v_92)), term_e_30);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm Unbound_0 (ATerm t)
{
  ATerm j_93 = NULL,k_93 = NULL;
  j_93 = t;
  i_93 :
  if(match_cons(j_93, sym_Var_1))
    {
      k_93 = ATgetArgument(j_93, 0);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_30), not_null(k_93)), term_j_30);
        {
          t = Context_0(t);
          t = error_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bound_0 (ATerm t)
{
  ATerm z_93 = NULL,a_94 = NULL;
  z_93 = t;
  y_93 :
  if(match_cons(z_93, sym_Var_1))
    {
      a_94 = ATgetArgument(z_93, 0);
      {
        ATerm l_30 = t;
        int m_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_94 = NULL,e_94 = NULL;
            t = not_null(z_93);
            {
              ATerm b_5 (ATerm t)
              {
                t = term_i_28;
                return(t);
              }
              t = rewrite_1(t, b_5);
              {
                d_94 = t;
                s_93 :
                if(match_cons(d_94, sym_Defined_1))
                  {
                    e_94 = ATgetArgument(d_94, 0);
                    t_93 :
                    if(!(match_string(e_94, "e_1")))
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
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_94));
            ;
            LocalPopChoice(m_30);
          }
        else
          {
            t = l_30;
            {
              ATerm n_30 = t;
              int o_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_94 = NULL;
                  t = not_null(z_93);
                  {
                    ATerm c_5 (ATerm t)
                    {
                      t = term_i_28;
                      return(t);
                    }
                    t = rewrite_1(t, c_5);
                    {
                      j_94 = t;
                      v_93 :
                      if(match_cons(j_94, sym_Undefined_0))
                        {
                          _fail(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                  t = term_d_29;
                  ;
                  LocalPopChoice(o_30);
                }
              else
                {
                  t = n_30;
                  {
                    ATerm m_94 = NULL,n_94 = NULL;
                    t = not_null(z_93);
                    {
                      ATerm d_5 (ATerm t)
                      {
                        t = term_i_28;
                        return(t);
                      }
                      t = rewrite_1(t, d_5);
                      {
                        m_94 = t;
                        w_93 :
                        if(match_cons(m_94, sym_Defined_1))
                          {
                            n_94 = ATgetArgument(m_94, 0);
                            x_93 :
                            if(!(match_string(n_94, "a_1")))
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_94));
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
ATerm use_vars_0 (ATerm t)
{
  ATerm p_30 = t;
  int q_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(q_30);
      {
        ATerm r_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0(t);
            ;
            LocalPopChoice(v_30);
          }
        else
          {
            t = r_30;
            {
              t = Unbound_0(t);
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = p_30;
      {
        ATerm w_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(a_31);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = w_30;
            {
              ATerm d_31 = t;
              int e_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(e_31);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = d_31;
                  t = _all(t, use_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm v_83 (ATerm))
{
  ATerm b_95 = NULL,c_95 = NULL,d_95 = NULL,g_95 = NULL;
  b_95 = t;
  a_95 :
  if(match_cons(b_95, sym_Rule_3))
    {
      c_95 = ATgetArgument(b_95, 0);
      d_95 = ATgetArgument(b_95, 1);
      g_95 = ATgetArgument(b_95, 2);
      {
        ATerm l_95 = NULL,n_95 = NULL;
        ATerm m_95 = NULL;
        t = SSLgetAnnotations(not_null(b_95));
        {
          m_95 = t;
          if(((l_95 != NULL) && (l_95 != m_95)))
            _fail(m_95);
          else
            l_95 = m_95;
        }
        {
          t = not_null(c_95);
          {
            ATerm p_95 = NULL;
            t = t_83(t);
            {
              n_95 = t;
              {
                t = not_null(d_95);
                {
                  ATerm r_95 = NULL;
                  t = u_83(t);
                  {
                    p_95 = t;
                    {
                      t = not_null(g_95);
                      {
                        ATerm z_95 = NULL;
                        t = v_83(t);
                        {
                          r_95 = t;
                          {
                            ATerm a_96 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(n_95), not_null(p_95), not_null(r_95)), not_null(l_95));
                            {
                              a_96 = t;
                              if(((z_95 != NULL) && (z_95 != a_96)))
                                _fail(a_96);
                              else
                                z_95 = a_96;
                            }
                            t = not_null(z_95);
                          }
                        }
                      }
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
ATerm RootApp_1 (ATerm t, ATerm s_82 (ATerm))
{
  ATerm o_96 = NULL,p_96 = NULL;
  o_96 = t;
  n_96 :
  if(match_cons(o_96, sym_RootApp_1))
    {
      p_96 = ATgetArgument(o_96, 0);
      {
        ATerm s_96 = NULL,u_96 = NULL;
        ATerm t_96 = NULL;
        t = SSLgetAnnotations(not_null(o_96));
        {
          t_96 = t;
          if(((s_96 != NULL) && (s_96 != t_96)))
            _fail(t_96);
          else
            s_96 = t_96;
        }
        {
          t = not_null(p_96);
          {
            ATerm w_96 = NULL;
            t = s_82(t);
            {
              u_96 = t;
              {
                ATerm x_96 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, not_null(u_96)), not_null(s_96));
                {
                  x_96 = t;
                  if(((w_96 != NULL) && (w_96 != x_96)))
                    _fail(x_96);
                  else
                    w_96 = x_96;
                }
                t = not_null(w_96);
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
ATerm App_2 (ATerm t, ATerm q_82 (ATerm), ATerm r_82 (ATerm))
{
  ATerm k_97 = NULL,l_97 = NULL,m_97 = NULL;
  k_97 = t;
  j_97 :
  if(match_cons(k_97, sym_App_2))
    {
      l_97 = ATgetArgument(k_97, 0);
      m_97 = ATgetArgument(k_97, 1);
      {
        ATerm q_97 = NULL,s_97 = NULL;
        ATerm r_97 = NULL;
        t = SSLgetAnnotations(not_null(k_97));
        {
          r_97 = t;
          if(((q_97 != NULL) && (q_97 != r_97)))
            _fail(r_97);
          else
            q_97 = r_97;
        }
        {
          t = not_null(l_97);
          {
            ATerm w_97 = NULL;
            t = q_82(t);
            {
              s_97 = t;
              {
                t = not_null(m_97);
                {
                  ATerm y_97 = NULL;
                  t = r_82(t);
                  {
                    w_97 = t;
                    {
                      ATerm z_97 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(s_97), not_null(w_97)), not_null(q_97));
                      {
                        z_97 = t;
                        if(((y_97 != NULL) && (y_97 != z_97)))
                          _fail(z_97);
                        else
                          y_97 = z_97;
                      }
                      t = not_null(y_97);
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
ATerm table_replace_0 (ATerm t)
{
  ATerm j_98 = NULL,k_98 = NULL,l_98 = NULL,m_98 = NULL;
  j_98 = t;
  i_98 :
  if(match_cons(j_98, sym__3))
    {
      k_98 = ATgetArgument(j_98, 0);
      l_98 = ATgetArgument(j_98, 1);
      m_98 = ATgetArgument(j_98, 2);
      {
        ATerm s_98 = NULL;
        ATerm f_31;
        f_31 = t;
        {
          ATerm t_98 = NULL,u_98 = NULL,v_98 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_98), not_null(l_98));
          {
            t = table_get_0(t);
            {
              t_98 = t;
              h_98 :
              if(((ATgetType(t_98) == AT_LIST) && !(ATisEmpty(t_98))))
                {
                  u_98 = ATgetFirst((ATermList) t_98);
                  v_98 = (ATerm) ATgetNext((ATermList) t_98);
                  {
                    if(((s_98 != NULL) && (s_98 != v_98)))
                      _fail(v_98);
                    else
                      s_98 = v_98;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(k_98), not_null(l_98), (ATerm) ATinsert(CheckATermList(not_null(s_98)), not_null(m_98)));
                      t = table_put_0(t);
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
        t = f_31;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm override_key_1 (ATerm t, ATerm l_112 (ATerm))
{
  ATerm b_99 = NULL,c_99 = NULL,d_99 = NULL;
  b_99 = t;
  a_99 :
  if(match_cons(b_99, sym__2))
    {
      c_99 = ATgetArgument(b_99, 0);
      d_99 = ATgetArgument(b_99, 1);
      {
        ATerm g_99 = NULL;
        ATerm g_31;
        g_31 = t;
        {
          ATerm h_99 = NULL;
          t = l_112(t);
          {
            h_99 = t;
            {
              if(((g_99 != NULL) && (g_99 != h_99)))
                _fail(h_99);
              else
                g_99 = h_99;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(g_99), not_null(c_99), not_null(d_99));
                t = table_replace_0(t);
              }
            }
          }
        }
        t = g_31;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Binding_0 (ATerm t)
{
  ATerm m_99 = NULL,n_99 = NULL;
  m_99 = t;
  l_99 :
  if(match_cons(m_99, sym_Var_1))
    {
      n_99 = ATgetArgument(m_99, 0);
      {
        ATerm h_31;
        h_31 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_99)), term_k_31);
          {
            ATerm e_5 (ATerm t)
            {
              t = term_i_28;
              return(t);
            }
            t = override_key_1(t, e_5);
          }
        }
        t = h_31;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm d_100 = NULL,e_100 = NULL;
  d_100 = t;
  c_100 :
  if(match_cons(d_100, sym_Var_1))
    {
      e_100 = ATgetArgument(d_100, 0);
      {
        ATerm o_31 = t;
        int u_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_100 = NULL,j_100 = NULL;
            ATerm i_100 = NULL;
            t = SSLgetAnnotations(not_null(d_100));
            {
              i_100 = t;
              if(((h_100 != NULL) && (h_100 != i_100)))
                _fail(i_100);
              else
                h_100 = i_100;
            }
            {
              t = not_null(e_100);
              {
                ATerm l_100 = NULL;
                t = q_0(t);
                {
                  j_100 = t;
                  {
                    ATerm m_100 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(j_100)), not_null(h_100));
                    {
                      m_100 = t;
                      if(((l_100 != NULL) && (l_100 != m_100)))
                        _fail(m_100);
                      else
                        l_100 = m_100;
                    }
                    t = not_null(l_100);
                  }
                }
              }
            }
            ;
            LocalPopChoice(u_31);
          }
        else
          {
            t = o_31;
            {
              ATerm v_31 = t;
              int w_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_100 = NULL,r_100 = NULL;
                  ATerm q_100 = NULL;
                  t = SSLgetAnnotations(not_null(d_100));
                  {
                    q_100 = t;
                    if(((p_100 != NULL) && (p_100 != q_100)))
                      _fail(q_100);
                    else
                      p_100 = q_100;
                  }
                  {
                    t = not_null(e_100);
                    {
                      ATerm v_100 = NULL;
                      t = q_0(t);
                      {
                        r_100 = t;
                        {
                          ATerm w_100 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(r_100)), not_null(p_100));
                          {
                            w_100 = t;
                            if(((v_100 != NULL) && (v_100 != w_100)))
                              _fail(w_100);
                            else
                              v_100 = w_100;
                          }
                          t = not_null(v_100);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(w_31);
                }
              else
                {
                  t = v_31;
                  {
                    ATerm z_100 = NULL,b_101 = NULL;
                    ATerm a_101 = NULL;
                    t = SSLgetAnnotations(not_null(d_100));
                    {
                      a_101 = t;
                      if(((z_100 != NULL) && (z_100 != a_101)))
                        _fail(a_101);
                      else
                        z_100 = a_101;
                    }
                    {
                      t = not_null(e_100);
                      {
                        ATerm d_101 = NULL;
                        t = q_0(t);
                        {
                          b_101 = t;
                          {
                            ATerm e_101 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(b_101)), not_null(z_100));
                            {
                              e_101 = t;
                              if(((d_101 != NULL) && (d_101 != e_101)))
                                _fail(e_101);
                              else
                                d_101 = e_101;
                            }
                            t = not_null(d_101);
                          }
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
ATerm bind_vars_0 (ATerm t)
{
  ATerm x_31 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(i_32);
      t = Binding_0(t);
    }
  else
    {
      t = x_31;
      {
        ATerm m_32 = t;
        int t_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(t_32);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = m_32;
            {
              ATerm u_32 = t;
              int v_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(v_32);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = u_32;
                  t = _all(t, bind_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1 (ATerm t, ATerm l_85 (ATerm))
{
  ATerm a_102 = NULL,b_102 = NULL;
  a_102 = t;
  z_101 :
  if(match_cons(a_102, sym_Match_1))
    {
      b_102 = ATgetArgument(a_102, 0);
      {
        ATerm g_102 = NULL,k_102 = NULL;
        ATerm h_102 = NULL;
        t = SSLgetAnnotations(not_null(a_102));
        {
          h_102 = t;
          if(((g_102 != NULL) && (g_102 != h_102)))
            _fail(h_102);
          else
            g_102 = h_102;
        }
        {
          t = not_null(b_102);
          {
            ATerm m_102 = NULL;
            t = l_85(t);
            {
              k_102 = t;
              {
                ATerm n_102 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(k_102)), not_null(g_102));
                {
                  n_102 = t;
                  if(((m_102 != NULL) && (m_102 != n_102)))
                    _fail(n_102);
                  else
                    m_102 = n_102;
                }
                t = not_null(m_102);
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
ATerm Build_1 (ATerm t, ATerm m_85 (ATerm))
{
  ATerm x_102 = NULL,y_102 = NULL;
  x_102 = t;
  w_102 :
  if(match_cons(x_102, sym_Build_1))
    {
      y_102 = ATgetArgument(x_102, 0);
      {
        ATerm d_103 = NULL,f_103 = NULL;
        ATerm e_103 = NULL;
        t = SSLgetAnnotations(not_null(x_102));
        {
          e_103 = t;
          if(((d_103 != NULL) && (d_103 != e_103)))
            _fail(e_103);
          else
            d_103 = e_103;
        }
        {
          t = not_null(y_102);
          {
            ATerm h_103 = NULL;
            t = m_85(t);
            {
              f_103 = t;
              {
                ATerm i_103 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(f_103)), not_null(d_103));
                {
                  i_103 = t;
                  if(((h_103 != NULL) && (h_103 != i_103)))
                    _fail(i_103);
                  else
                    h_103 = i_103;
                }
                t = not_null(h_103);
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
ATerm VarScope_1 (ATerm t, ATerm k_124 (ATerm))
{
  ATerm f_5 (ATerm t)
  {
    t = term_i_28;
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    t = Scope_2(t, DefineUnbound_0, k_124);
    return(t);
  }
  t = scope_2(t, f_5, g_5);
  return(t);
}
ATerm unbound_vars_0 (ATerm t)
{
  ATerm w_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, _id, _id);
      LocalPopChoice(x_32);
      t = VarScope_1(t, unbound_vars_0);
    }
  else
    {
      t = w_32;
      {
        ATerm y_32 = t;
        int z_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1(t, _id);
            LocalPopChoice(z_32);
            t = Build_1(t, use_vars_0);
          }
        else
          {
            t = y_32;
            {
              ATerm a_33 = t;
              int b_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1(t, _id);
                  LocalPopChoice(b_33);
                  t = Match_1(t, bind_vars_0);
                }
              else
                {
                  t = a_33;
                  {
                    ATerm c_33 = t;
                    int d_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3(t, _id, _id, _id);
                        LocalPopChoice(d_33);
                        {
                          t = Rule_3(t, bind_vars_0, _id, _id);
                          {
                            t = Rule_3(t, _id, _id, unbound_vars_0);
                            t = Rule_3(t, _id, use_vars_0, _id);
                          }
                        }
                      }
                    else
                      {
                        t = c_33;
                        {
                          ATerm e_33 = t;
                          int f_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2(t, _id, _id);
                              LocalPopChoice(f_33);
                              t = choice_1(t, unbound_vars_0);
                            }
                          else
                            {
                              t = e_33;
                              {
                                ATerm g_33 = t;
                                int h_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2(t, _id, _id);
                                    LocalPopChoice(h_33);
                                    t = lchoice_1(t, unbound_vars_0);
                                  }
                                else
                                  {
                                    t = g_33;
                                    {
                                      ATerm i_33 = t;
                                      int j_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3(t, _id, _id, _id);
                                          LocalPopChoice(j_33);
                                          t = guardedlchoice_1(t, unbound_vars_0);
                                        }
                                      else
                                        {
                                          t = i_33;
                                          t = _all(t, unbound_vars_0);
                                        }
                                    }
                                  }
                              }
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
ATerm sdef_ud_0 (ATerm t)
{
  ATerm p_103 = NULL,q_103 = NULL,r_103 = NULL,s_103 = NULL;
  p_103 = t;
  o_103 :
  if(match_cons(p_103, sym_SDef_3))
    {
      q_103 = ATgetArgument(p_103, 0);
      r_103 = ATgetArgument(p_103, 1);
      s_103 = ATgetArgument(p_103, 2);
      {
        ATerm k_33;
        k_33 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_m_33, not_null(q_103)));
          {
            ATerm h_5 (ATerm t)
            {
              t = term_p_28;
              return(t);
            }
            t = assert_1(t, h_5);
            {
              t = not_null(s_103);
              t = unbound_vars_0(t);
            }
          }
        }
        t = k_33;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DefineUnbound_0 (ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    ATerm f_104 = NULL;
    f_104 = t;
    {
      ATerm u_33;
      u_33 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_104)), term_d_29);
        {
          ATerm j_5 (ATerm t)
          {
            t = term_i_28;
            return(t);
          }
          t = assert_1(t, j_5);
        }
      }
      t = u_33;
    }
    return(t);
  }
  t = map_1(t, i_5);
  return(t);
}
ATerm def_use_def_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    t = term_p_28;
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    ATerm m_5 (ATerm t)
    {
      t = term_i_28;
      return(t);
    }
    ATerm n_5 (ATerm t)
    {
      ATerm v_33 = t;
      int w_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_33;
          x_33 = t;
          {
            t = tvars_0(t);
            t = DefineUnbound_0(t);
          }
          t = x_33;
          t = sdef_ud_0(t);
          ;
          LocalPopChoice(w_33);
        }
      else
        {
          t = v_33;
          {
            ATerm y_33 = t;
            int b_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = rdef_ud_0(t);
                ;
                LocalPopChoice(b_34);
              }
            else
              {
                t = y_33;
                t = overlay_ud_0(t);
              }
          }
        }
      return(t);
    }
    t = scope_2(t, m_5, n_5);
    return(t);
  }
  t = scope_2(t, k_5, l_5);
  return(t);
}
ATerm defs_use_def_0 (ATerm t)
{
  ATerm c_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(d_34);
    }
  else
    {
      t = c_34;
      {
        ATerm m_34;
        m_34 = t;
        {
          ATerm o_5 (ATerm t)
          {
            ATerm q_34 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_34;
              }
            return(t);
          }
          t = filter_1(t, o_5);
          t = Nil_0(t);
        }
        t = m_34;
      }
    }
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm j_81 (ATerm))
{
  ATerm n_104 = NULL,o_104 = NULL;
  n_104 = t;
  m_104 :
  if(match_cons(n_104, sym_Signature_1))
    {
      o_104 = ATgetArgument(n_104, 0);
      {
        ATerm r_104 = NULL,t_104 = NULL;
        ATerm s_104 = NULL;
        t = SSLgetAnnotations(not_null(n_104));
        {
          s_104 = t;
          if(((r_104 != NULL) && (r_104 != s_104)))
            _fail(s_104);
          else
            r_104 = s_104;
        }
        {
          t = not_null(o_104);
          {
            ATerm v_104 = NULL;
            t = j_81(t);
            {
              t_104 = t;
              {
                ATerm w_104 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(t_104)), not_null(r_104));
                {
                  w_104 = t;
                  if(((v_104 != NULL) && (v_104 != w_104)))
                    _fail(w_104);
                  else
                    v_104 = w_104;
                }
                t = not_null(v_104);
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
ATerm spec_use_def_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm q_5 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm r_5 (ATerm t)
    {
      ATerm s_5 (ATerm t)
      {
        t = Overlays_1(t, defs_use_def_0);
        return(t);
      }
      ATerm t_5 (ATerm t)
      {
        ATerm u_5 (ATerm t)
        {
          t = Strategies_1(t, defs_use_def_0);
          return(t);
        }
        t = Cons_2(t, u_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, s_5, t_5);
      return(t);
    }
    t = Cons_2(t, q_5, r_5);
    return(t);
  }
  t = Specification_1(t, p_5);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm w_105 = NULL,x_105 = NULL,a_106 = NULL,b_106 = NULL,c_106 = NULL,d_106 = NULL;
  b_106 = t;
  o_105 :
  if(match_cons(b_106, sym_Lets_2))
    {
      c_106 = ATgetArgument(b_106, 0);
      d_106 = ATgetArgument(b_106, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(c_106), not_null(d_106));
    }
  else
    {
      if(match_cons(b_106, sym_LChoices_1))
        {
          c_106 = ATgetArgument(b_106, 0);
          p_105 :
          if(((ATgetType(c_106) == AT_LIST) && !(ATisEmpty(c_106))))
            {
              w_105 = ATgetFirst((ATermList) c_106);
              x_105 = (ATerm) ATgetNext((ATermList) c_106);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(w_105), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(x_105)));
            }
          else
            {
              if(((ATgetType(c_106) == AT_LIST) && ATisEmpty(c_106)))
                {
                  t = term_w_34;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(b_106, sym_Choices_1))
            {
              c_106 = ATgetArgument(b_106, 0);
              s_105 :
              if(((ATgetType(c_106) == AT_LIST) && !(ATisEmpty(c_106))))
                {
                  w_105 = ATgetFirst((ATermList) c_106);
                  x_105 = (ATerm) ATgetNext((ATermList) c_106);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(w_105), (ATerm) ATmakeAppl(sym_Choices_1, not_null(x_105)));
                }
              else
                {
                  if(((ATgetType(c_106) == AT_LIST) && ATisEmpty(c_106)))
                    {
                      t = term_w_34;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(b_106, sym_Seqs_1))
                {
                  c_106 = ATgetArgument(b_106, 0);
                  t_105 :
                  if(((ATgetType(c_106) == AT_LIST) && !(ATisEmpty(c_106))))
                    {
                      w_105 = ATgetFirst((ATermList) c_106);
                      x_105 = (ATerm) ATgetNext((ATermList) c_106);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_105), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(x_105)));
                    }
                  else
                    {
                      if(((ATgetType(c_106) == AT_LIST) && ATisEmpty(c_106)))
                        {
                          t = term_q_17;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(b_106, sym_DefaultVarDec_1))
                    {
                      c_106 = ATgetArgument(b_106, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(c_106), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_21), term_c_21));
                    }
                  else
                    {
                      if(match_cons(b_106, sym_InfixApp_3))
                        {
                          c_106 = ATgetArgument(b_106, 0);
                          d_106 = ATgetArgument(b_106, 1);
                          a_106 = ATgetArgument(b_106, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(d_106), (ATerm) ATmakeAppl(sym_Op_2, term_z_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_106)), not_null(c_106))));
                        }
                      else
                        {
                          if(match_cons(b_106, sym_BAM_3))
                            {
                              c_106 = ATgetArgument(b_106, 0);
                              d_106 = ATgetArgument(b_106, 1);
                              a_106 = ATgetArgument(b_106, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(a_106))), not_null(c_106)), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_106))));
                            }
                          else
                            {
                              if(match_cons(b_106, sym_AM_2))
                                {
                                  c_106 = ATgetArgument(b_106, 0);
                                  d_106 = ATgetArgument(b_106, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_106), (ATerm) ATmakeAppl(sym_Match_1, not_null(d_106)));
                                }
                              else
                                {
                                  if(match_cons(b_106, sym_MA_2))
                                    {
                                      c_106 = ATgetArgument(b_106, 0);
                                      d_106 = ATgetArgument(b_106, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_106)), not_null(d_106));
                                    }
                                  else
                                    {
                                      if(match_cons(b_106, sym_BA_2))
                                        {
                                          c_106 = ATgetArgument(b_106, 0);
                                          d_106 = ATgetArgument(b_106, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_106)), not_null(c_106));
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
ATerm topdown_1 (ATerm t, ATerm c_96 (ATerm))
{
  t = c_96(t);
  {
    ATerm v_5 (ATerm t)
    {
      t = topdown_1(t, c_96);
      return(t);
    }
    t = _all(t, v_5);
  }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm r_107 = NULL,x_107 = NULL,y_107 = NULL,z_107 = NULL,a_108 = NULL,b_108 = NULL,c_108 = NULL;
  r_107 = t;
  o_107 :
  if(match_cons(r_107, sym__2))
    {
      x_107 = ATgetArgument(r_107, 0);
      a_108 = ATgetArgument(r_107, 1);
      p_107 :
      if(match_cons(x_107, sym__2))
        {
          y_107 = ATgetArgument(x_107, 0);
          z_107 = ATgetArgument(x_107, 1);
          q_107 :
          if(match_cons(a_108, sym__2))
            {
              b_108 = ATgetArgument(a_108, 0);
              c_108 = ATgetArgument(a_108, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_108)), not_null(y_107)), (ATerm) ATinsert(CheckATermList(not_null(c_108)), not_null(z_107)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm k_108 = NULL,l_108 = NULL,m_108 = NULL;
  k_108 = t;
  j_108 :
  if(((ATgetType(k_108) == AT_LIST) && !(ATisEmpty(k_108))))
    {
      l_108 = ATgetFirst((ATermList) k_108);
      m_108 = (ATerm) ATgetNext((ATermList) k_108);
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_108), not_null(m_108));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm s_108 = NULL;
  s_108 = t;
  r_108 :
  if(((ATgetType(s_108) == AT_LIST) && ATisEmpty(s_108)))
    {
      t = term_x_34;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm e_104 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, e_104);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = unzip_1(t, _id);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm ContextVar_0 (ATerm t)
{
  ATerm z_108 = NULL,a_109 = NULL;
  z_108 = t;
  y_108 :
  if(match_cons(z_108, sym_Var_1))
    {
      a_109 = ATgetArgument(z_108, 0);
      {
        ATerm d_109 = NULL,e_109 = NULL;
        t = not_null(z_108);
        {
          ATerm w_5 (ATerm t)
          {
            t = term_y_34;
            return(t);
          }
          t = rewrite_1(t, w_5);
          {
            d_109 = t;
            w_108 :
            if(match_cons(d_109, sym_Defined_1))
              {
                e_109 = ATgetArgument(d_109, 0);
                x_108 :
                if(!(match_string(e_109, "l_0")))
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
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_109));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm z_34;
  z_34 = t;
  {
    ATerm j_109 = NULL;
    ATerm k_109 = NULL;
    k_109 = t;
    if(((j_109 != NULL) && (j_109 != k_109)))
      _fail(k_109);
    else
      j_109 = k_109;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_23, not_null(j_109));
      t = printnl_0(t);
    }
  }
  t = z_34;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm a_35;
  a_35 = t;
  {
    t = error_0(t);
    {
      t = term_g_24;
      t = exit_0(t);
    }
  }
  t = a_35;
  return(t);
}
ATerm dummify_0 (ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm w_109 = NULL,x_109 = NULL,y_109 = NULL,z_109 = NULL;
    w_109 = t;
    v_109 :
    if(match_cons(w_109, sym_Var_1))
      {
        x_109 = ATgetArgument(w_109, 0);
        {
          ATerm k_35 = t;
          if((PushChoice() == 0))
            {
              t = ContextVar_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = k_35;
            }
          t = term_m_35;
        }
      }
    else
      {
        if(match_cons(w_109, sym_Wld_0))
          {
            t = term_m_35;
          }
        else
          {
            if(match_cons(w_109, sym_RootApp_1))
              {
                x_109 = ATgetArgument(w_109, 0);
                {
                  ATerm c_110 = NULL;
                  ATerm f_110 = NULL;
                  t = not_null(x_109);
                  {
                    t = tvars_0(t);
                    {
                      ATerm y_5 (ATerm t)
                      {
                        ATerm d_110 = NULL;
                        ATerm e_110 = NULL;
                        e_110 = t;
                        if(((d_110 != NULL) && (d_110 != e_110)))
                          _fail(e_110);
                        else
                          d_110 = e_110;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_110));
                        return(t);
                      }
                      t = map_1(t, y_5);
                      {
                        f_110 = t;
                        if(((c_110 != NULL) && (c_110 != f_110)))
                          _fail(f_110);
                        else
                          c_110 = f_110;
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_35, not_null(c_110));
                }
              }
            else
              {
                if(match_cons(w_109, sym_App_2))
                  {
                    x_109 = ATgetArgument(w_109, 0);
                    y_109 = ATgetArgument(w_109, 1);
                    {
                      ATerm i_110 = NULL;
                      ATerm l_110 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(x_109), not_null(y_109));
                      {
                        t = tvars_0(t);
                        {
                          ATerm z_5 (ATerm t)
                          {
                            ATerm j_110 = NULL;
                            ATerm k_110 = NULL;
                            k_110 = t;
                            if(((j_110 != NULL) && (j_110 != k_110)))
                              _fail(k_110);
                            else
                              j_110 = k_110;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_110));
                            return(t);
                          }
                          t = map_1(t, z_5);
                          {
                            l_110 = t;
                            if(((i_110 != NULL) && (i_110 != l_110)))
                              _fail(l_110);
                            else
                              i_110 = l_110;
                          }
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_n_35, not_null(i_110));
                    }
                  }
                else
                  {
                    if(match_cons(w_109, sym_Con_3))
                      {
                        x_109 = ATgetArgument(w_109, 0);
                        y_109 = ATgetArgument(w_109, 1);
                        z_109 = ATgetArgument(w_109, 2);
                        {
                          t = (ATerm) ATinsert(ATempty, term_o_35);
                          t = fatal_error_0(t);
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
  t = alltd_1(t, x_5);
  return(t);
}
ATerm SplitDynamicRule_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm y_111 = NULL,z_111 = NULL,a_112 = NULL,b_112 = NULL,c_112 = NULL,d_112 = NULL,e_112 = NULL,f_112 = NULL,n_112 = NULL;
  ATerm e_114 (ATerm t)
  {
    ATerm g_113 = NULL,h_113 = NULL,i_113 = NULL,j_113 = NULL,k_113 = NULL,l_113 = NULL,m_113 = NULL,a_114 = NULL;
    ATerm p_35;
    p_35 = t;
    {
      ATerm n_113 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_112), term_r_35);
      {
        ATerm s_35 = t;
        if((PushChoice() == 0))
          {
            t = eq_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_35;
          }
        {
          ATerm o_113 = NULL;
          t = new_0(t);
          {
            n_113 = t;
            {
              if(((g_113 != NULL) && (g_113 != n_113)))
                _fail(n_113);
              else
                g_113 = n_113;
              {
                t = not_null(e_112);
                {
                  ATerm r_113 = NULL;
                  t = dummify_0(t);
                  {
                    o_113 = t;
                    {
                      if(((i_113 != NULL) && (i_113 != o_113)))
                        _fail(o_113);
                      else
                        i_113 = o_113;
                      {
                        ATerm u_113 = NULL;
                        ATerm a_6 (ATerm t)
                        {
                          ATerm q_113 = NULL;
                          q_113 = t;
                          {
                            if(((e_112 != NULL) && (e_112 != q_113)))
                              _fail(q_113);
                            else
                              e_112 = q_113;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_113));
                          }
                          return(t);
                        }
                        t = try_1(t, a_6);
                        {
                          r_113 = t;
                          {
                            if(((h_113 != NULL) && (h_113 != r_113)))
                              _fail(r_113);
                            else
                              h_113 = r_113;
                            {
                              t = not_null(i_113);
                              {
                                t = tvars_0(t);
                                {
                                  ATerm x_113 = NULL;
                                  ATerm b_6 (ATerm t)
                                  {
                                    ATerm s_113 = NULL;
                                    ATerm t_113 = NULL;
                                    t_113 = t;
                                    if(((s_113 != NULL) && (s_113 != t_113)))
                                      _fail(t_113);
                                    else
                                      s_113 = t_113;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_113));
                                    return(t);
                                  }
                                  t = map_1(t, b_6);
                                  {
                                    u_113 = t;
                                    {
                                      if(((k_113 != NULL) && (k_113 != u_113)))
                                        _fail(u_113);
                                      else
                                        k_113 = u_113;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_112), not_null(n_112));
                                        {
                                          t = tvars_0(t);
                                          {
                                            ATerm y_113 = NULL;
                                            ATerm c_6 (ATerm t)
                                            {
                                              ATerm v_113 = NULL;
                                              ATerm w_113 = NULL;
                                              w_113 = t;
                                              if(((v_113 != NULL) && (v_113 != w_113)))
                                                _fail(w_113);
                                              else
                                                v_113 = w_113;
                                              {
                                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_113));
                                                t = ContextVar_0(t);
                                              }
                                              return(t);
                                            }
                                            t = filter_1(t, c_6);
                                            {
                                              x_113 = t;
                                              {
                                                if(((j_113 != NULL) && (j_113 != x_113)))
                                                  _fail(x_113);
                                                else
                                                  j_113 = x_113;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_113), not_null(k_113));
                                                  {
                                                    ATerm z_113 = NULL;
                                                    t = diff_0(t);
                                                    {
                                                      y_113 = t;
                                                      {
                                                        if(((l_113 != NULL) && (l_113 != y_113)))
                                                          _fail(y_113);
                                                        else
                                                          l_113 = y_113;
                                                        {
                                                          t = new_0(t);
                                                          {
                                                            z_113 = t;
                                                            if(((m_113 != NULL) && (m_113 != z_113)))
                                                              _fail(z_113);
                                                            else
                                                              m_113 = z_113;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = p_35;
    {
      ATerm b_114 = NULL;
      t = not_null(b_112);
      {
        t = p_0(t);
        {
          b_114 = t;
          if(((a_114 != NULL) && (a_114 != b_114)))
            _fail(b_114);
          else
            a_114 = b_114;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(a_114), (ATerm) ATmakeAppl(sym_Op_2, term_t_35, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_u_35, (ATerm) ATinsert(CheckATermList(not_null(l_113)), (ATerm) ATmakeAppl(sym_Str_1, not_null(m_113))))), not_null(i_113))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(b_112), not_null(c_112), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_113)), not_null(e_112)), not_null(f_112), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_c_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(b_112))))), not_null(h_113)), (ATerm) ATmakeAppl(sym_Op_2, term_u_35, (ATerm) ATinsert(CheckATermList(not_null(l_113)), (ATerm) ATmakeAppl(sym_Str_1, not_null(m_113))))), not_null(n_112)))));
    }
    return(t);
  }
  a_112 = t;
  s_111 :
  if(match_cons(a_112, sym_RDef_3))
    {
      b_112 = ATgetArgument(a_112, 0);
      c_112 = ATgetArgument(a_112, 1);
      d_112 = ATgetArgument(a_112, 2);
      t_111 :
      if(match_cons(d_112, sym_Rule_3))
        {
          e_112 = ATgetArgument(d_112, 0);
          f_112 = ATgetArgument(d_112, 1);
          n_112 = ATgetArgument(d_112, 2);
          u_111 :
          if(match_cons(f_112, sym_Op_2))
            {
              y_111 = ATgetArgument(f_112, 0);
              z_111 = ATgetArgument(f_112, 1);
              v_111 :
              if(((ATgetType(z_111) == AT_LIST) && ATisEmpty(z_111)))
                {
                  w_111 :
                  if(match_string(y_111, "Undefined"))
                    {
                      ATerm d_36 = t;
                      int e_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_112 = NULL,t_112 = NULL,u_112 = NULL,z_112 = NULL;
                          ATerm f_36;
                          f_36 = t;
                          {
                            ATerm v_112 = NULL;
                            ATerm w_112 = NULL;
                            t = new_0(t);
                            {
                              v_112 = t;
                              {
                                if(((t_112 != NULL) && (t_112 != v_112)))
                                  _fail(v_112);
                                else
                                  t_112 = v_112;
                                {
                                  t = not_null(e_112);
                                  {
                                    ATerm y_112 = NULL;
                                    t = dummify_0(t);
                                    {
                                      w_112 = t;
                                      {
                                        if(((s_112 != NULL) && (s_112 != w_112)))
                                          _fail(w_112);
                                        else
                                          s_112 = w_112;
                                        {
                                          ATerm d_6 (ATerm t)
                                          {
                                            ATerm x_112 = NULL;
                                            x_112 = t;
                                            {
                                              if(((e_112 != NULL) && (e_112 != x_112)))
                                                _fail(x_112);
                                              else
                                                e_112 = x_112;
                                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_112));
                                            }
                                            return(t);
                                          }
                                          t = try_1(t, d_6);
                                          {
                                            y_112 = t;
                                            if(((u_112 != NULL) && (u_112 != y_112)))
                                              _fail(y_112);
                                            else
                                              u_112 = y_112;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          t = f_36;
                          {
                            ATerm a_113 = NULL;
                            t = not_null(b_112);
                            {
                              t = p_0(t);
                              {
                                a_113 = t;
                                if(((z_112 != NULL) && (z_112 != a_113)))
                                  _fail(a_113);
                                else
                                  z_112 = a_113;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(z_112), (ATerm) ATmakeAppl(sym_Op_2, term_t_35, (ATerm) ATinsert(ATinsert(ATempty, term_r_35), not_null(s_112))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(b_112), not_null(c_112), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(t_112)), not_null(e_112)), term_r_35, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_c_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(b_112))))), not_null(u_112)), term_r_35), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_112), term_w_34)))));
                          }
                          ;
                          LocalPopChoice(e_36);
                        }
                      else
                        {
                          t = d_36;
                          t = e_114(t);
                        }
                    }
                  else
                    {
                      t = e_114(t);
                    }
                }
              else
                {
                  x_111 :
                  t = e_114(t);
                }
            }
          else
            {
              t = e_114(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_dynamic_rules_0 (ATerm t)
{
  ATerm a_115 = NULL,b_115 = NULL;
  a_115 = t;
  z_114 :
  if(match_cons(a_115, sym_OverrideDynamicRules_1))
    {
      b_115 = ATgetArgument(a_115, 0);
      {
        t = not_null(b_115);
        {
          ATerm e_6 (ATerm t)
          {
            ATerm f_6 (ATerm t)
            {
              ATerm d_115 = NULL;
              ATerm e_115 = NULL;
              e_115 = t;
              if(((d_115 != NULL) && (d_115 != e_115)))
                _fail(e_115);
              else
                d_115 = e_115;
              t = (ATerm) ATmakeAppl(sym_Call_2, term_h_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(d_115)))));
              return(t);
            }
            t = SplitDynamicRule_1(t, f_6);
            return(t);
          }
          t = map_1(t, e_6);
          t = unzip_0(t);
        }
      }
    }
  else
    {
      if(match_cons(a_115, sym_DynamicRules_1))
        {
          b_115 = ATgetArgument(a_115, 0);
          {
            t = not_null(b_115);
            {
              ATerm g_6 (ATerm t)
              {
                ATerm h_6 (ATerm t)
                {
                  ATerm j_115 = NULL;
                  ATerm k_115 = NULL;
                  k_115 = t;
                  if(((j_115 != NULL) && (j_115 != k_115)))
                    _fail(k_115);
                  else
                    j_115 = k_115;
                  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(j_115)))));
                  return(t);
                }
                t = SplitDynamicRule_1(t, h_6);
                return(t);
              }
              t = map_1(t, g_6);
              t = unzip_0(t);
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
ATerm split_under_scope_1 (ATerm t, ATerm c_123 (ATerm))
{
  ATerm s_115 = NULL,t_115 = NULL,u_115 = NULL;
  s_115 = t;
  r_115 :
  if(match_cons(s_115, sym_Scope_2))
    {
      t_115 = ATgetArgument(s_115, 0);
      u_115 = ATgetArgument(s_115, 1);
      {
        ATerm x_115 = NULL;
        ATerm i_6 (ATerm t)
        {
          t = term_y_34;
          return(t);
        }
        ATerm j_6 (ATerm t)
        {
          ATerm y_115 = NULL;
          t = not_null(t_115);
          {
            t = DeclareContextVars_0(t);
            {
              t = not_null(u_115);
              {
                t = c_123(t);
                {
                  y_115 = t;
                  if(((x_115 != NULL) && (x_115 != y_115)))
                    _fail(y_115);
                  else
                    x_115 = y_115;
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, i_6, j_6);
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_115), not_null(x_115));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm g_97 (ATerm))
{
  ATerm b_116 (ATerm t)
  {
    ATerm k_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_97(t);
        ;
        LocalPopChoice(q_36);
      }
    else
      {
        t = k_36;
        t = _one(t, b_116);
      }
    return(t);
  }
  t = b_116(t);
  return(t);
}
ATerm split_dynamic_rule_1 (ATerm t, ATerm a_123 (ATerm))
{
  ATerm c_116 (ATerm t)
  {
    ATerm k_6 (ATerm t)
    {
      ATerm r_36 = t;
      int s_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_123(t);
          ;
          LocalPopChoice(s_36);
        }
      else
        {
          t = r_36;
          t = split_under_scope_1(t, c_116);
        }
      return(t);
    }
    t = oncetd_1(t, k_6);
    return(t);
  }
  t = c_116(t);
  return(t);
}
ATerm DeclareContextVars_0 (ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    ATerm e_116 = NULL;
    e_116 = t;
    {
      ATerm t_36;
      t_36 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_116)), term_z_36);
        {
          ATerm m_6 (ATerm t)
          {
            t = term_y_34;
            return(t);
          }
          t = assert_1(t, m_6);
        }
      }
      t = t_36;
    }
    return(t);
  }
  t = map_1(t, l_6);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm m_116 = NULL,n_116 = NULL,o_116 = NULL;
  m_116 = t;
  l_116 :
  if(((ATgetType(m_116) == AT_LIST) && !(ATisEmpty(m_116))))
    {
      n_116 = ATgetFirst((ATermList) m_116);
      o_116 = (ATerm) ATgetNext((ATermList) m_116);
      {
        ATerm r_116 = NULL,s_116 = NULL,t_116 = NULL;
        ATerm n_6 (ATerm t)
        {
          t = term_y_34;
          return(t);
        }
        ATerm o_6 (ATerm t)
        {
          ATerm x_116 = NULL;
          t = not_null(n_116);
          {
            t = tvars_0(t);
            {
              t = DeclareContextVars_0(t);
              {
                t = not_null(n_116);
                {
                  ATerm p_6 (ATerm t)
                  {
                    ATerm u_116 = NULL,v_116 = NULL,w_116 = NULL;
                    t = split_dynamic_rules_0(t);
                    {
                      u_116 = t;
                      j_116 :
                      if(match_cons(u_116, sym__2))
                        {
                          v_116 = ATgetArgument(u_116, 0);
                          w_116 = ATgetArgument(u_116, 1);
                          {
                            if(((s_116 != NULL) && (s_116 != v_116)))
                              _fail(v_116);
                            else
                              s_116 = v_116;
                            {
                              if(((r_116 != NULL) && (r_116 != w_116)))
                                _fail(w_116);
                              else
                                r_116 = w_116;
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(s_116));
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
                  t = split_dynamic_rule_1(t, p_6);
                  {
                    x_116 = t;
                    if(((t_116 != NULL) && (t_116 != x_116)))
                      _fail(x_116);
                    else
                      t_116 = x_116;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, n_6, o_6);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_116)), not_null(t_116)), not_null(o_116));
          t = conc_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm e_95 (ATerm))
{
  ATerm b_117 (ATerm t)
  {
    ATerm q_6 (ATerm t)
    {
      t = e_95(t);
      t = b_117(t);
      return(t);
    }
    t = try_1(t, q_6);
    return(t);
  }
  t = b_117(t);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm a_103 (ATerm))
{
  ATerm c_117 (ATerm t)
  {
    t = a_103(t);
    {
      ATerm b_37 = t;
      int e_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          ;
          LocalPopChoice(e_37);
        }
      else
        {
          t = b_37;
          t = Cons_2(t, _id, c_117);
        }
    }
    return(t);
  }
  t = c_117(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm r_6 (ATerm t)
  {
    t = repeat_1(t, lift_dynamic_rule_0);
    return(t);
  }
  t = listtd_1(t, r_6);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm i_117 = NULL,k_117 = NULL,l_117 = NULL,r_117 = NULL,s_117 = NULL;
  l_117 = t;
  g_117 :
  if(match_cons(l_117, sym_DynRuleScope_2))
    {
      r_117 = ATgetArgument(l_117, 0);
      s_117 = ATgetArgument(l_117, 1);
      h_117 :
      if(((ATgetType(r_117) == AT_LIST) && !(ATisEmpty(r_117))))
        {
          i_117 = ATgetFirst((ATermList) r_117);
          k_117 = (ATerm) ATgetNext((ATermList) r_117);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_g_37, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(k_117), not_null(s_117))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(i_117)))));
        }
      else
        {
          if(((ATgetType(r_117) == AT_LIST) && ATisEmpty(r_117)))
            {
              t = not_null(s_117);
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
ATerm define_rule_scope_0 (ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    t = try_1(t, DefDynamicRuleScope_0);
    return(t);
  }
  t = topdown_1(t, s_6);
  return(t);
}
ATerm LiftDynamicRules_0 (ATerm t)
{
  ATerm t_6 (ATerm t)
  {
    ATerm u_6 (ATerm t)
    {
      ATerm v_6 (ATerm t)
      {
        ATerm w_6 (ATerm t)
        {
          ATerm x_6 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, x_6);
          return(t);
        }
        t = Cons_2(t, w_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, v_6);
      return(t);
    }
    t = Cons_2(t, _id, u_6);
    return(t);
  }
  t = Specification_1(t, t_6);
  return(t);
}
ATerm DefScopeDefault_0 (ATerm t)
{
  ATerm l_118 = NULL,m_118 = NULL;
  l_118 = t;
  k_118 :
  if(match_cons(l_118, sym_ScopeDefault_1))
    {
      m_118 = ATgetArgument(l_118, 0);
      {
        ATerm o_118 = NULL;
        ATerm p_118 = NULL;
        t = not_null(m_118);
        {
          t = tvars_0(t);
          {
            p_118 = t;
            if(((o_118 != NULL) && (o_118 != p_118)))
              _fail(p_118);
            else
              o_118 = p_118;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_118), not_null(m_118));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm l_84 (ATerm))
{
  ATerm x_118 = NULL,y_118 = NULL;
  x_118 = t;
  w_118 :
  if(match_cons(x_118, sym_DynamicRules_1))
    {
      y_118 = ATgetArgument(x_118, 0);
      {
        ATerm b_119 = NULL,e_119 = NULL;
        ATerm c_119 = NULL;
        t = SSLgetAnnotations(not_null(x_118));
        {
          c_119 = t;
          if(((b_119 != NULL) && (b_119 != c_119)))
            _fail(c_119);
          else
            b_119 = c_119;
        }
        {
          t = not_null(y_118);
          {
            ATerm g_119 = NULL;
            t = l_84(t);
            {
              e_119 = t;
              {
                ATerm h_119 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(e_119)), not_null(b_119));
                {
                  h_119 = t;
                  if(((g_119 != NULL) && (g_119 != h_119)))
                    _fail(h_119);
                  else
                    g_119 = h_119;
                }
                t = not_null(g_119);
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
ATerm Scope_2 (ATerm t, ATerm o_85 (ATerm), ATerm p_85 (ATerm))
{
  ATerm s_119 = NULL,t_119 = NULL,u_119 = NULL;
  s_119 = t;
  r_119 :
  if(match_cons(s_119, sym_Scope_2))
    {
      t_119 = ATgetArgument(s_119, 0);
      u_119 = ATgetArgument(s_119, 1);
      {
        ATerm y_119 = NULL,a_120 = NULL;
        ATerm z_119 = NULL;
        t = SSLgetAnnotations(not_null(s_119));
        {
          z_119 = t;
          if(((y_119 != NULL) && (y_119 != z_119)))
            _fail(z_119);
          else
            y_119 = z_119;
        }
        {
          t = not_null(t_119);
          {
            ATerm c_120 = NULL;
            t = o_85(t);
            {
              a_120 = t;
              {
                t = not_null(u_119);
                {
                  ATerm k_120 = NULL;
                  t = p_85(t);
                  {
                    c_120 = t;
                    {
                      ATerm l_120 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(a_120), not_null(c_120)), not_null(y_119));
                      {
                        l_120 = t;
                        if(((k_120 != NULL) && (k_120 != l_120)))
                          _fail(l_120);
                        else
                          k_120 = l_120;
                      }
                      t = not_null(k_120);
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
ATerm tboundin_3 (ATerm t, ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm e_124 (ATerm))
{
  ATerm h_37 = t;
  int i_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, e_124, c_124);
      ;
      LocalPopChoice(i_37);
    }
  else
    {
      t = h_37;
      t = DynamicRules_1(t, c_124);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm q_121 = NULL,s_121 = NULL;
  q_121 = t;
  p_121 :
  if(match_cons(q_121, sym_DynamicRules_1))
    {
      s_121 = ATgetArgument(q_121, 0);
      {
        t = not_null(s_121);
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
  ATerm z_121 = NULL,a_122 = NULL,b_122 = NULL,c_122 = NULL,d_122 = NULL,e_122 = NULL;
  c_122 = t;
  x_121 :
  if(match_cons(c_122, sym_LRule_1))
    {
      d_122 = ATgetArgument(c_122, 0);
      y_121 :
      if(match_cons(d_122, sym_Rule_3))
        {
          z_121 = ATgetArgument(d_122, 0);
          a_122 = ATgetArgument(d_122, 1);
          b_122 = ATgetArgument(d_122, 2);
          {
            t = not_null(z_121);
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
      if(match_cons(c_122, sym_Scope_2))
        {
          d_122 = ATgetArgument(c_122, 0);
          e_122 = ATgetArgument(c_122, 1);
          t = not_null(d_122);
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
  ATerm o_122 = NULL,p_122 = NULL;
  o_122 = t;
  n_122 :
  if(match_cons(o_122, sym_Var_1))
    {
      p_122 = ATgetArgument(o_122, 0);
      t = (ATerm) ATinsert(ATempty, not_null(p_122));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm u_105 (ATerm))
{
  ATerm y_122 = NULL,z_122 = NULL,d_123 = NULL;
  y_122 = t;
  x_122 :
  if(match_cons(y_122, sym__2))
    {
      z_122 = ATgetArgument(y_122, 0);
      d_123 = ATgetArgument(y_122, 1);
      {
        t = not_null(z_122);
        {
          ATerm l_123 (ATerm t)
          {
            ATerm j_37 = t;
            int k_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(d_123);
                ;
                LocalPopChoice(k_37);
              }
            else
              {
                t = j_37;
                {
                  ATerm l_37 = t;
                  int s_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_6 (ATerm t)
                      {
                        t = not_null(d_123);
                        return(t);
                      }
                      t = HdMember_p__2(t, u_105, y_6);
                      t = l_123(t);
                      ;
                      LocalPopChoice(s_37);
                    }
                  else
                    {
                      t = l_37;
                      t = Cons_2(t, _id, l_123);
                    }
                }
              }
            return(t);
          }
          t = l_123(t);
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
ATerm crush_3 (ATerm t, ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm p_111 (ATerm))
{
  ATerm q_123 = NULL;
  ATerm s_123 = NULL;
  q_123 = t;
  {
    ATerm t_123 = NULL;
    ATerm v_123 = NULL,w_123 = NULL,x_123 = NULL;
    t = not_null(q_123);
    {
      t_123 = t;
      {
        t = SSL_explode_term(not_null(t_123));
        {
          v_123 = t;
          p_123 :
          if(match_cons(v_123, sym__2))
            {
              w_123 = ATgetArgument(v_123, 0);
              x_123 = ATgetArgument(v_123, 1);
              if(((s_123 != NULL) && (s_123 != x_123)))
                _fail(x_123);
              else
                s_123 = x_123;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_123);
      t = foldr_3(t, n_111, o_111, p_111);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm v_124 = NULL,w_124 = NULL,x_124 = NULL;
  v_124 = t;
  u_124 :
  if(match_cons(v_124, sym__2))
    {
      w_124 = ATgetArgument(v_124, 0);
      x_124 = ATgetArgument(v_124, 1);
      if(((w_124 != NULL) && (w_124 != x_124)))
        _fail(x_124);
      else
        w_124 = x_124;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm y_105 (ATerm), ATerm z_105 (ATerm))
{
  ATerm d_125 = NULL,e_125 = NULL,f_125 = NULL;
  d_125 = t;
  c_125 :
  if(((ATgetType(d_125) == AT_LIST) && !(ATisEmpty(d_125))))
    {
      e_125 = ATgetFirst((ATermList) d_125);
      f_125 = (ATerm) ATgetNext((ATermList) d_125);
      {
        t = z_105(t);
        {
          ATerm z_6 (ATerm t)
          {
            ATerm i_125 = NULL;
            i_125 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_125), not_null(i_125));
              t = y_105(t);
            }
            return(t);
          }
          t = fetch_1(t, z_6);
        }
        t = not_null(f_125);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm q_105 (ATerm))
{
  ATerm o_125 = NULL,p_125 = NULL,q_125 = NULL;
  o_125 = t;
  n_125 :
  if(match_cons(o_125, sym__2))
    {
      p_125 = ATgetArgument(o_125, 0);
      q_125 = ATgetArgument(o_125, 1);
      {
        t = not_null(p_125);
        {
          ATerm u_125 (ATerm t)
          {
            ATerm t_37 = t;
            int u_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(u_37);
              }
            else
              {
                t = t_37;
                {
                  ATerm v_37 = t;
                  int x_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_7 (ATerm t)
                      {
                        t = not_null(q_125);
                        return(t);
                      }
                      t = HdMember_p__2(t, q_105, a_7);
                      t = u_125(t);
                      ;
                      LocalPopChoice(x_37);
                    }
                  else
                    {
                      t = v_37;
                      t = Cons_2(t, _id, u_125);
                    }
                }
              }
            return(t);
          }
          t = u_125(t);
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
  ATerm y_125 = NULL,z_125 = NULL,a_126 = NULL,b_126 = NULL,c_126 = NULL;
  y_125 = t;
  w_125 :
  if(match_cons(y_125, sym__2))
    {
      z_125 = ATgetArgument(y_125, 0);
      a_126 = ATgetArgument(y_125, 1);
      x_125 :
      if(((ATgetType(a_126) == AT_LIST) && !(ATisEmpty(a_126))))
        {
          b_126 = ATgetFirst((ATermList) a_126);
          c_126 = (ATerm) ATgetNext((ATermList) a_126);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_125)), not_null(b_126)), not_null(c_126));
        }
      else
        {
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
  ATerm j_126 = NULL,k_126 = NULL,l_126 = NULL;
  j_126 = t;
  i_126 :
  if(match_cons(j_126, sym__2))
    {
      k_126 = ATgetArgument(j_126, 0);
      l_126 = ATgetArgument(j_126, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_126)), not_null(k_126));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm t_126 = NULL,u_126 = NULL,v_126 = NULL,w_126 = NULL,x_126 = NULL,y_126 = NULL,z_126 = NULL;
  t_126 = t;
  q_126 :
  if(match_cons(t_126, sym__2))
    {
      u_126 = ATgetArgument(t_126, 0);
      x_126 = ATgetArgument(t_126, 1);
      r_126 :
      if(((ATgetType(u_126) == AT_LIST) && !(ATisEmpty(u_126))))
        {
          v_126 = ATgetFirst((ATermList) u_126);
          w_126 = (ATerm) ATgetNext((ATermList) u_126);
          s_126 :
          if(((ATgetType(x_126) == AT_LIST) && !(ATisEmpty(x_126))))
            {
              y_126 = ATgetFirst((ATermList) x_126);
              z_126 = (ATerm) ATgetNext((ATermList) x_126);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(v_126), not_null(y_126)), (ATerm) ATmakeAppl(sym__2, not_null(w_126), not_null(z_126)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm j_127 = NULL,k_127 = NULL,l_127 = NULL;
  j_127 = t;
  g_127 :
  if(match_cons(j_127, sym__2))
    {
      k_127 = ATgetArgument(j_127, 0);
      l_127 = ATgetArgument(j_127, 1);
      h_127 :
      if(((ATgetType(k_127) == AT_LIST) && ATisEmpty(k_127)))
        {
          i_127 :
          if(((ATgetType(l_127) == AT_LIST) && ATisEmpty(l_127)))
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
ATerm genzip_4 (ATerm t, ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm x_103 (ATerm))
{
  ATerm n_127 (ATerm t)
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_103(t);
        ;
        LocalPopChoice(z_37);
      }
    else
      {
        t = y_37;
        {
          t = v_103(t);
          {
            t = _2(t, x_103, n_127);
            t = w_103(t);
          }
        }
      }
    return(t);
  }
  t = n_127(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm z_103 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, z_103);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm y_127 = NULL,z_127 = NULL,a_128 = NULL,b_128 = NULL,c_128 = NULL;
  y_127 = t;
  w_127 :
  if(((ATgetType(y_127) == AT_LIST) && !(ATisEmpty(y_127))))
    {
      z_127 = ATgetFirst((ATermList) y_127);
      c_128 = (ATerm) ATgetNext((ATermList) y_127);
      x_127 :
      if(match_cons(z_127, sym__2))
        {
          a_128 = ATgetArgument(z_127, 0);
          b_128 = ATgetArgument(z_127, 1);
          {
            ATerm g_128 = NULL,h_128 = NULL,n_128 = NULL,t_128 = NULL;
            ATerm a_38;
            a_38 = t;
            {
              ATerm i_128 = NULL;
              ATerm k_128 = NULL,l_128 = NULL,m_128 = NULL;
              t = not_null(b_128);
              {
                i_128 = t;
                {
                  t = SSL_explode_term(not_null(i_128));
                  {
                    k_128 = t;
                    r_127 :
                    if(match_cons(k_128, sym__2))
                      {
                        l_128 = ATgetArgument(k_128, 0);
                        m_128 = ATgetArgument(k_128, 1);
                        {
                          if(((g_128 != NULL) && (g_128 != l_128)))
                            _fail(l_128);
                          else
                            g_128 = l_128;
                          if(((h_128 != NULL) && (h_128 != m_128)))
                            _fail(m_128);
                          else
                            h_128 = m_128;
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
            t = a_38;
            {
              ATerm b_38;
              b_38 = t;
              {
                ATerm o_128 = NULL;
                ATerm q_128 = NULL,r_128 = NULL,s_128 = NULL;
                t = not_null(a_128);
                {
                  o_128 = t;
                  {
                    t = SSL_explode_term(not_null(o_128));
                    {
                      q_128 = t;
                      u_127 :
                      if(match_cons(q_128, sym__2))
                        {
                          r_128 = ATgetArgument(q_128, 0);
                          s_128 = ATgetArgument(q_128, 1);
                          {
                            if(((g_128 != NULL) && (g_128 != r_128)))
                              _fail(r_128);
                            else
                              g_128 = r_128;
                            if(((n_128 != NULL) && (n_128 != s_128)))
                              _fail(s_128);
                            else
                              n_128 = s_128;
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
              t = b_38;
              {
                ATerm u_128 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_128), not_null(h_128));
                {
                  t = zip_1(t, _id);
                  {
                    u_128 = t;
                    if(((t_128 != NULL) && (t_128 != u_128)))
                      _fail(u_128);
                    else
                      t_128 = u_128;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_128), not_null(c_128));
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
  ATerm e_129 = NULL,f_129 = NULL,g_129 = NULL,h_129 = NULL,i_129 = NULL;
  e_129 = t;
  c_129 :
  if(((ATgetType(e_129) == AT_LIST) && !(ATisEmpty(e_129))))
    {
      f_129 = ATgetFirst((ATermList) e_129);
      i_129 = (ATerm) ATgetNext((ATermList) e_129);
      d_129 :
      if(match_cons(f_129, sym__2))
        {
          g_129 = ATgetArgument(f_129, 0);
          h_129 = ATgetArgument(f_129, 1);
          {
            ATerm k_129 = NULL;
            if(((g_129 != NULL) && (g_129 != h_129)))
              _fail(h_129);
            else
              g_129 = h_129;
            {
              if(((k_129 != NULL) && (k_129 != i_129)))
                _fail(i_129);
              else
                k_129 = i_129;
              t = not_null(k_129);
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
ATerm while_not_2 (ATerm t, ATerm t_95 (ATerm), ATerm u_95 (ATerm))
{
  ATerm m_129 (ATerm t)
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_95(t);
        ;
        LocalPopChoice(d_38);
      }
    else
      {
        t = c_38;
        {
          t = u_95(t);
          t = m_129(t);
        }
      }
    return(t);
  }
  t = m_129(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm w_95 (ATerm), ATerm x_95 (ATerm), ATerm y_95 (ATerm))
{
  t = w_95(t);
  t = while_not_2(t, x_95, y_95);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm e_38 = t;
  int f_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_7 (ATerm t)
      {
        ATerm o_129 = NULL;
        o_129 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(o_129));
        return(t);
      }
      ATerm c_7 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm d_7 (ATerm t)
      {
        ATerm g_38 = t;
        int h_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_7 (ATerm t)
            {
              ATerm i_38 = t;
              int j_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(j_38);
                }
              else
                {
                  t = i_38;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, e_7);
            ;
            LocalPopChoice(h_38);
          }
        else
          {
            t = g_38;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, b_7, c_7, d_7);
      ;
      LocalPopChoice(f_38);
    }
  else
    {
      t = e_38;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm r_122 (ATerm), ATerm s_122 (ATerm), ATerm t_122 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm u_129 (ATerm t)
  {
    ATerm k_38 = t;
    int l_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_122(t);
        ;
        LocalPopChoice(l_38);
      }
    else
      {
        t = k_38;
        {
          ATerm m_38 = t;
          int n_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_129 = NULL;
              ATerm o_38;
              o_38 = t;
              {
                ATerm t_129 = NULL;
                t = s_122(t);
                {
                  t_129 = t;
                  if(((s_129 != NULL) && (s_129 != t_129)))
                    _fail(t_129);
                  else
                    s_129 = t_129;
                }
              }
              t = o_38;
              {
                ATerm f_7 (ATerm t)
                {
                  ATerm h_7 (ATerm t)
                  {
                    t = not_null(s_129);
                    return(t);
                  }
                  t = split_2(t, u_129, h_7);
                  t = diff_0(t);
                  return(t);
                }
                ATerm g_7 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = t_122(t, f_7, u_129, g_7);
                {
                  ATerm i_7 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, i_7, union_0, _id);
                }
              }
              ;
              LocalPopChoice(n_38);
            }
          else
            {
              t = m_38;
              {
                ATerm j_7 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, j_7, union_0, u_129);
              }
            }
        }
      }
    return(t);
  }
  t = u_129(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm k_7 (ATerm t)
  {
    ATerm p_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(s_38);
      }
    else
      {
        t = p_38;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, k_7, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm a_130 = NULL,b_130 = NULL,c_130 = NULL,d_130 = NULL,e_130 = NULL;
  a_130 = t;
  y_129 :
  if(match_cons(a_130, sym_LRule_1))
    {
      b_130 = ATgetArgument(a_130, 0);
      z_129 :
      if(match_cons(b_130, sym_Rule_3))
        {
          c_130 = ATgetArgument(b_130, 0);
          d_130 = ATgetArgument(b_130, 1);
          e_130 = ATgetArgument(b_130, 2);
          {
            ATerm i_130 = NULL;
            ATerm j_130 = NULL;
            t = not_null(c_130);
            {
              t = tvars_0(t);
              {
                j_130 = t;
                if(((i_130 != NULL) && (i_130 != j_130)))
                  _fail(j_130);
                else
                  i_130 = j_130;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_130), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(c_130), not_null(d_130), not_null(e_130))));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm d_96 (ATerm))
{
  ATerm l_7 (ATerm t)
  {
    t = bottomup_1(t, d_96);
    return(t);
  }
  t = _all(t, l_7);
  t = d_96(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm m_7 (ATerm t)
  {
    ATerm n_7 (ATerm t)
    {
      ATerm t_38 = t;
      int y_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0(t);
          ;
          LocalPopChoice(y_38);
        }
      else
        {
          t = t_38;
          t = DefScopeDefault_0(t);
        }
      return(t);
    }
    t = try_1(t, n_7);
    return(t);
  }
  t = bottomup_1(t, m_7);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm o_130 = NULL,p_130 = NULL,q_130 = NULL;
  o_130 = t;
  n_130 :
  if(((ATgetType(o_130) == AT_LIST) && !(ATisEmpty(o_130))))
    {
      p_130 = ATgetFirst((ATermList) o_130);
      q_130 = (ATerm) ATgetNext((ATermList) o_130);
      t = not_null(p_130);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm v_130 = NULL,w_130 = NULL,x_130 = NULL;
  v_130 = t;
  u_130 :
  if(match_cons(v_130, sym__2))
    {
      w_130 = ATgetArgument(v_130, 0);
      x_130 = ATgetArgument(v_130, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_130), not_null(x_130));
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
ATerm rewrite_1 (ATerm t, ATerm m_112 (ATerm))
{
  ATerm d_131 = NULL;
  ATerm f_131 = NULL;
  d_131 = t;
  {
    ATerm g_131 = NULL;
    t = term_g_39;
    {
      t = m_112(t);
      {
        g_131 = t;
        if(((f_131 != NULL) && (f_131 != g_131)))
          _fail(g_131);
        else
          f_131 = g_131;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_131), not_null(d_131));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm VarToConst_0 (ATerm t)
{
  ATerm q_131 = NULL,r_131 = NULL;
  q_131 = t;
  p_131 :
  if(match_cons(q_131, sym_Var_1))
    {
      r_131 = ATgetArgument(q_131, 0);
      {
        ATerm h_39 = t;
        int i_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_131 = NULL,v_131 = NULL;
            t = not_null(q_131);
            {
              ATerm o_7 (ATerm t)
              {
                t = term_a_40;
                return(t);
              }
              t = rewrite_1(t, o_7);
              {
                u_131 = t;
                l_131 :
                if(match_cons(u_131, sym_Defined_1))
                  {
                    v_131 = ATgetArgument(u_131, 0);
                    m_131 :
                    if(!(match_string(v_131, "e_0")))
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
            t = (ATerm) ATmakeAppl(sym_Op_2, not_null(r_131), (ATerm) ATempty);
            ;
            LocalPopChoice(i_39);
          }
        else
          {
            t = h_39;
            {
              ATerm y_131 = NULL,z_131 = NULL;
              t = not_null(q_131);
              {
                ATerm p_7 (ATerm t)
                {
                  t = term_a_40;
                  return(t);
                }
                t = rewrite_1(t, p_7);
                {
                  y_131 = t;
                  n_131 :
                  if(match_cons(y_131, sym_Defined_1))
                    {
                      z_131 = ATgetArgument(y_131, 0);
                      o_131 :
                      if(!(match_string(z_131, "c_0")))
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
              t = (ATerm) ATmakeAppl(sym_Op_2, not_null(r_131), (ATerm) ATempty);
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
ATerm alltd_1 (ATerm t, ATerm u_97 (ATerm))
{
  ATerm c_132 (ATerm t)
  {
    ATerm b_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_97(t);
        ;
        LocalPopChoice(c_40);
      }
    else
      {
        t = b_40;
        t = _all(t, c_132);
      }
    return(t);
  }
  t = c_132(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm k_112 (ATerm))
{
  ATerm i_132 = NULL,j_132 = NULL,k_132 = NULL;
  i_132 = t;
  h_132 :
  if(match_cons(i_132, sym__2))
    {
      j_132 = ATgetArgument(i_132, 0);
      k_132 = ATgetArgument(i_132, 1);
      {
        ATerm n_132 = NULL,o_132 = NULL,p_132 = NULL;
        ATerm d_40;
        d_40 = t;
        {
          ATerm q_132 = NULL;
          ATerm r_132 = NULL,s_132 = NULL,t_132 = NULL;
          t = k_112(t);
          {
            q_132 = t;
            {
              if(((n_132 != NULL) && (n_132 != q_132)))
                _fail(q_132);
              else
                n_132 = q_132;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(n_132), not_null(j_132), not_null(k_132));
                {
                  t = table_push_0(t);
                  {
                    ATerm g_40 = t;
                    int h_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(n_132), term_i_40);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(h_40);
                      }
                    else
                      {
                        t = g_40;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      r_132 = t;
                      g_132 :
                      if(((ATgetType(r_132) == AT_LIST) && !(ATisEmpty(r_132))))
                        {
                          s_132 = ATgetFirst((ATermList) r_132);
                          t_132 = (ATerm) ATgetNext((ATermList) r_132);
                          {
                            if(((o_132 != NULL) && (o_132 != s_132)))
                              _fail(s_132);
                            else
                              o_132 = s_132;
                            {
                              if(((p_132 != NULL) && (p_132 != t_132)))
                                _fail(t_132);
                              else
                                p_132 = t_132;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(n_132), term_i_40, (ATerm) ATinsert(CheckATermList(not_null(p_132)), (ATerm) ATinsert(CheckATermList(not_null(o_132)), not_null(j_132))));
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
        t = d_40;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DeclareVarToConst_0 (ATerm t)
{
  ATerm c_133 = NULL,d_133 = NULL,e_133 = NULL,f_133 = NULL,g_133 = NULL;
  d_133 = t;
  z_132 :
  if(match_cons(d_133, sym_Overlay_3))
    {
      e_133 = ATgetArgument(d_133, 0);
      f_133 = ATgetArgument(d_133, 1);
      c_133 = ATgetArgument(d_133, 2);
      a_133 :
      if(((ATgetType(f_133) == AT_LIST) && ATisEmpty(f_133)))
        {
          {
            ATerm n_40;
            n_40 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_133)), term_p_40);
              {
                ATerm q_7 (ATerm t)
                {
                  t = term_a_40;
                  return(t);
                }
                t = assert_1(t, q_7);
              }
            }
            t = n_40;
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(d_133, sym_OpDecl_2))
        {
          e_133 = ATgetArgument(d_133, 0);
          f_133 = ATgetArgument(d_133, 1);
          b_133 :
          if(match_cons(f_133, sym_ConstType_1))
            {
              g_133 = ATgetArgument(f_133, 0);
              {
                ATerm q_40;
                q_40 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_133)), term_s_40);
                  {
                    ATerm r_7 (ATerm t)
                    {
                      t = term_a_40;
                      return(t);
                    }
                    t = assert_1(t, r_7);
                  }
                }
                t = q_40;
              }
            }
          else
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
ATerm Overlays_1 (ATerm t, ATerm k_81 (ATerm))
{
  ATerm s_133 = NULL,t_133 = NULL;
  s_133 = t;
  r_133 :
  if(match_cons(s_133, sym_Overlays_1))
    {
      t_133 = ATgetArgument(s_133, 0);
      {
        ATerm w_133 = NULL,y_133 = NULL;
        ATerm x_133 = NULL;
        t = SSLgetAnnotations(not_null(s_133));
        {
          x_133 = t;
          if(((w_133 != NULL) && (w_133 != x_133)))
            _fail(x_133);
          else
            w_133 = x_133;
        }
        {
          t = not_null(t_133);
          {
            ATerm a_134 = NULL;
            t = k_81(t);
            {
              y_133 = t;
              {
                ATerm b_134 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(y_133)), not_null(w_133));
                {
                  b_134 = t;
                  if(((a_134 != NULL) && (a_134 != b_134)))
                    _fail(b_134);
                  else
                    a_134 = b_134;
                }
                t = not_null(a_134);
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
ATerm Constructors_1 (ATerm t, ATerm c_82 (ATerm))
{
  ATerm l_134 = NULL,m_134 = NULL;
  l_134 = t;
  k_134 :
  if(match_cons(l_134, sym_Constructors_1))
    {
      m_134 = ATgetArgument(l_134, 0);
      {
        ATerm p_134 = NULL,r_134 = NULL;
        ATerm q_134 = NULL;
        t = SSLgetAnnotations(not_null(l_134));
        {
          q_134 = t;
          if(((p_134 != NULL) && (p_134 != q_134)))
            _fail(q_134);
          else
            p_134 = q_134;
        }
        {
          t = not_null(m_134);
          {
            ATerm t_134 = NULL;
            t = c_82(t);
            {
              r_134 = t;
              {
                ATerm u_134 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, not_null(r_134)), not_null(p_134));
                {
                  u_134 = t;
                  if(((t_134 != NULL) && (t_134 != u_134)))
                    _fail(u_134);
                  else
                    t_134 = u_134;
                }
                t = not_null(t_134);
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
ATerm Tl_0 (ATerm t)
{
  ATerm b_135 = NULL,c_135 = NULL,d_135 = NULL;
  b_135 = t;
  a_135 :
  if(((ATgetType(b_135) == AT_LIST) && !(ATisEmpty(b_135))))
    {
      c_135 = ATgetFirst((ATermList) b_135);
      d_135 = (ATerm) ATgetNext((ATermList) b_135);
      t = not_null(d_135);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm j_135 = NULL,k_135 = NULL,l_135 = NULL;
  j_135 = t;
  i_135 :
  if(match_cons(j_135, sym__2))
    {
      k_135 = ATgetArgument(j_135, 0);
      l_135 = ATgetArgument(j_135, 1);
      {
        ATerm t_40;
        t_40 = t;
        {
          ATerm o_135 = NULL;
          ATerm p_135 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_135), not_null(l_135));
          {
            ATerm u_40 = t;
            int v_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(v_40);
              }
            else
              {
                t = u_40;
                t = (ATerm) ATempty;
              }
            {
              p_135 = t;
              if(((o_135 != NULL) && (o_135 != p_135)))
                _fail(p_135);
              else
                o_135 = p_135;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_135), not_null(l_135), not_null(o_135));
            t = table_put_0(t);
          }
        }
        t = t_40;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm h_112 (ATerm))
{
  ATerm w_135 = NULL,x_135 = NULL,y_135 = NULL;
  ATerm x_40;
  x_40 = t;
  {
    ATerm z_135 = NULL;
    ATerm a_136 = NULL,b_136 = NULL,c_136 = NULL;
    t = h_112(t);
    {
      z_135 = t;
      {
        if(((y_135 != NULL) && (y_135 != z_135)))
          _fail(z_135);
        else
          y_135 = z_135;
        {
          ATerm y_40 = t;
          int z_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_135), term_i_40);
              t = table_get_0(t);
              ;
              LocalPopChoice(z_40);
            }
          else
            {
              t = y_40;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            a_136 = t;
            v_135 :
            if(((ATgetType(a_136) == AT_LIST) && !(ATisEmpty(a_136))))
              {
                b_136 = ATgetFirst((ATermList) a_136);
                c_136 = (ATerm) ATgetNext((ATermList) a_136);
                {
                  if(((x_135 != NULL) && (x_135 != b_136)))
                    _fail(b_136);
                  else
                    x_135 = b_136;
                  {
                    if(((w_135 != NULL) && (w_135 != c_136)))
                      _fail(c_136);
                    else
                      w_135 = c_136;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(y_135), term_i_40, not_null(w_135));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(x_135);
                          {
                            ATerm s_7 (ATerm t)
                            {
                              ATerm d_136 = NULL;
                              d_136 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_135), not_null(d_136));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, s_7);
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
  t = x_40;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm x_94 (ATerm), ATerm y_94 (ATerm))
{
  ATerm a_41 = t;
  int b_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_94(t);
      t = y_94(t);
      ;
      LocalPopChoice(b_41);
    }
  else
    {
      t = a_41;
      {
        t = y_94(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm g_112 (ATerm))
{
  ATerm k_136 = NULL;
  ATerm d_41;
  d_41 = t;
  {
    ATerm l_136 = NULL;
    ATerm m_136 = NULL;
    t = g_112(t);
    {
      l_136 = t;
      {
        if(((k_136 != NULL) && (k_136 != l_136)))
          _fail(l_136);
        else
          k_136 = l_136;
        {
          ATerm n_136 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_136), term_i_40);
          {
            ATerm e_41 = t;
            int f_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(f_41);
              }
            else
              {
                t = e_41;
                t = (ATerm) ATempty;
              }
            {
              n_136 = t;
              if(((m_136 != NULL) && (m_136 != n_136)))
                _fail(n_136);
              else
                m_136 = n_136;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_136), term_i_40, (ATerm) ATinsert(CheckATermList(not_null(m_136)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = d_41;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm i_112 (ATerm), ATerm j_112 (ATerm))
{
  t = begin_scope_1(t, i_112);
  {
    ATerm t_7 (ATerm t)
    {
      t = end_scope_1(t, i_112);
      return(t);
    }
    t = restore_always_2(t, j_112, t_7);
  }
  return(t);
}
ATerm vars_to_consts_0 (ATerm t)
{
  ATerm u_7 (ATerm t)
  {
    t = term_a_40;
    return(t);
  }
  ATerm v_7 (ATerm t)
  {
    ATerm w_7 (ATerm t)
    {
      ATerm x_7 (ATerm t)
      {
        ATerm y_7 (ATerm t)
        {
          ATerm g_41 = t;
          int k_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_7 (ATerm t)
              {
                ATerm a_8 (ATerm t)
                {
                  t = try_1(t, DeclareVarToConst_0);
                  return(t);
                }
                t = map_1(t, a_8);
                return(t);
              }
              t = Constructors_1(t, z_7);
              ;
              LocalPopChoice(k_41);
            }
          else
            {
              t = g_41;
              {
                ATerm b_8 (ATerm t)
                {
                  ATerm c_8 (ATerm t)
                  {
                    t = try_1(t, DeclareVarToConst_0);
                    return(t);
                  }
                  t = map_1(t, c_8);
                  return(t);
                }
                t = Overlays_1(t, b_8);
              }
            }
          return(t);
        }
        t = try_1(t, y_7);
        return(t);
      }
      t = map_1(t, x_7);
      return(t);
    }
    t = Specification_1(t, w_7);
    t = alltd_1(t, VarToConst_0);
    return(t);
  }
  t = scope_2(t, u_7, v_7);
  return(t);
}
ATerm RulesToStrategies_0 (ATerm t)
{
  ATerm s_136 = NULL,t_136 = NULL;
  s_136 = t;
  r_136 :
  if(match_cons(s_136, sym_Rules_1))
    {
      t_136 = ATgetArgument(s_136, 0);
      t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(t_136));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm v_108 (ATerm))
{
  ATerm l_41 = t;
  int m_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(m_41);
    }
  else
    {
      t = l_41;
      {
        ATerm n_41 = t;
        int o_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_8 (ATerm t)
            {
              t = filter_1(t, v_108);
              return(t);
            }
            t = Cons_2(t, v_108, d_8);
            ;
            LocalPopChoice(o_41);
          }
        else
          {
            t = n_41;
            {
              ATerm y_136 = NULL,z_136 = NULL,a_137 = NULL;
              y_136 = t;
              x_136 :
              if(((ATgetType(y_136) == AT_LIST) && !(ATisEmpty(y_136))))
                {
                  z_136 = ATgetFirst((ATermList) y_136);
                  a_137 = (ATerm) ATgetNext((ATermList) y_136);
                  {
                    t = not_null(a_137);
                    t = filter_1(t, v_108);
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
ATerm GetConstructors_0 (ATerm t)
{
  ATerm i_137 = NULL,j_137 = NULL;
  i_137 = t;
  h_137 :
  if(match_cons(i_137, sym_Signature_1))
    {
      j_137 = ATgetArgument(i_137, 0);
      {
        ATerm l_137 = NULL;
        ATerm p_137 = NULL;
        t = not_null(j_137);
        {
          ATerm e_8 (ATerm t)
          {
            ATerm m_137 = NULL,n_137 = NULL;
            m_137 = t;
            f_137 :
            if(match_cons(m_137, sym_Constructors_1))
              {
                n_137 = ATgetArgument(m_137, 0);
                t = not_null(n_137);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = filter_1(t, e_8);
          {
            t = concat_0(t);
            {
              p_137 = t;
              if(((l_137 != NULL) && (l_137 != p_137)))
                _fail(p_137);
              else
                l_137 = p_137;
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Constructors_1, not_null(l_137));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InsertBSpec_0 (ATerm t)
{
  ATerm j_138 = NULL,k_138 = NULL,l_138 = NULL;
  j_138 = t;
  i_138 :
  if(match_cons(j_138, sym__2))
    {
      k_138 = ATgetArgument(j_138, 0);
      l_138 = ATgetArgument(j_138, 1);
      {
        ATerm o_138 = NULL,p_138 = NULL;
        ATerm q_138 = NULL;
        ATerm s_138 = NULL,t_138 = NULL,u_138 = NULL,v_138 = NULL,w_138 = NULL;
        t = not_null(k_138);
        {
          q_138 = t;
          {
            t = SSL_explode_term(not_null(q_138));
            {
              s_138 = t;
              w_137 :
              if(match_cons(s_138, sym__2))
                {
                  t_138 = ATgetArgument(s_138, 0);
                  u_138 = ATgetArgument(s_138, 1);
                  x_137 :
                  if(((ATgetType(u_138) == AT_LIST) && !(ATisEmpty(u_138))))
                    {
                      v_138 = ATgetFirst((ATermList) u_138);
                      w_138 = (ATerm) ATgetNext((ATermList) u_138);
                      y_137 :
                      if(((ATgetType(w_138) == AT_LIST) && ATisEmpty(w_138)))
                        {
                          {
                            if(((o_138 != NULL) && (o_138 != t_138)))
                              _fail(t_138);
                            else
                              o_138 = t_138;
                            if(((p_138 != NULL) && (p_138 != v_138)))
                              _fail(v_138);
                            else
                              p_138 = v_138;
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
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
          t = not_null(l_138);
          {
            ATerm f_8 (ATerm t)
            {
              ATerm x_138 = NULL;
              ATerm z_138 = NULL,h_139 = NULL,j_139 = NULL,l_139 = NULL;
              x_138 = t;
              {
                ATerm p_41;
                p_41 = t;
                {
                  ATerm a_139 = NULL;
                  ATerm c_139 = NULL,d_139 = NULL,e_139 = NULL,f_139 = NULL,g_139 = NULL;
                  t = not_null(x_138);
                  {
                    a_139 = t;
                    {
                      t = SSL_explode_term(not_null(a_139));
                      {
                        c_139 = t;
                        c_138 :
                        if(match_cons(c_139, sym__2))
                          {
                            d_139 = ATgetArgument(c_139, 0);
                            e_139 = ATgetArgument(c_139, 1);
                            d_138 :
                            if(((ATgetType(e_139) == AT_LIST) && !(ATisEmpty(e_139))))
                              {
                                f_139 = ATgetFirst((ATermList) e_139);
                                g_139 = (ATerm) ATgetNext((ATermList) e_139);
                                e_138 :
                                if(((ATgetType(g_139) == AT_LIST) && ATisEmpty(g_139)))
                                  {
                                    {
                                      if(((o_138 != NULL) && (o_138 != d_139)))
                                        _fail(d_139);
                                      else
                                        o_138 = d_139;
                                      if(((z_138 != NULL) && (z_138 != f_139)))
                                        _fail(f_139);
                                      else
                                        z_138 = f_139;
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
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
                t = p_41;
                {
                  ATerm q_41;
                  q_41 = t;
                  {
                    ATerm i_139 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_138), not_null(p_138));
                    {
                      t = conc_0(t);
                      {
                        i_139 = t;
                        if(((h_139 != NULL) && (h_139 != i_139)))
                          _fail(i_139);
                        else
                          h_139 = i_139;
                      }
                    }
                  }
                  t = q_41;
                  {
                    ATerm r_41;
                    r_41 = t;
                    {
                      ATerm k_139 = NULL;
                      t = (ATerm) ATinsert(ATempty, not_null(h_139));
                      {
                        k_139 = t;
                        if(((j_139 != NULL) && (j_139 != k_139)))
                          _fail(k_139);
                        else
                          j_139 = k_139;
                      }
                    }
                    t = r_41;
                    {
                      t = SSL_mkterm(not_null(o_138), not_null(j_139));
                      {
                        l_139 = t;
                        t = not_null(l_139);
                      }
                    }
                  }
                }
              }
              return(t);
            }
            t = fetch_1(t, f_8);
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
ATerm foldr_3 (ATerm t, ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm))
{
  ATerm s_41 = t;
  int w_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_107(t);
      ;
      LocalPopChoice(w_41);
    }
  else
    {
      t = s_41;
      {
        ATerm a_140 = NULL,b_140 = NULL,c_140 = NULL;
        a_140 = t;
        z_139 :
        if(((ATgetType(a_140) == AT_LIST) && !(ATisEmpty(a_140))))
          {
            b_140 = ATgetFirst((ATermList) a_140);
            c_140 = (ATerm) ATgetNext((ATermList) a_140);
            {
              ATerm f_140 = NULL,h_140 = NULL;
              ATerm y_41;
              y_41 = t;
              {
                ATerm g_140 = NULL;
                t = not_null(b_140);
                {
                  t = w_107(t);
                  {
                    g_140 = t;
                    if(((f_140 != NULL) && (f_140 != g_140)))
                      _fail(g_140);
                    else
                      f_140 = g_140;
                  }
                }
              }
              t = y_41;
              {
                ATerm i_140 = NULL;
                t = not_null(c_140);
                {
                  t = foldr_3(t, u_107, v_107, w_107);
                  {
                    i_140 = t;
                    if(((h_140 != NULL) && (h_140 != i_140)))
                      _fail(i_140);
                    else
                      h_140 = i_140;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_140), not_null(h_140));
                  t = v_107(t);
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
ATerm CombineSections_0 (ATerm t)
{
  ATerm g_8 (ATerm t)
  {
    ATerm h_8 (ATerm t)
    {
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_42), term_a_42), term_z_41);
      return(t);
    }
    ATerm i_8 (ATerm t)
    {
      ATerm j_8 (ATerm t)
      {
        ATerm c_42 = t;
        int i_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = GetConstructors_0(t);
            ;
            LocalPopChoice(i_42);
          }
        else
          {
            t = c_42;
            t = RulesToStrategies_0(t);
          }
        return(t);
      }
      t = try_1(t, j_8);
      return(t);
    }
    t = foldr_3(t, h_8, InsertBSpec_0, i_8);
    return(t);
  }
  t = Specification_1(t, g_8);
  return(t);
}
ATerm normalize_spec_0 (ATerm t)
{
  t = CombineSections_0(t);
  {
    ATerm k_8 (ATerm t)
    {
      t = try_1(t, HL_0);
      return(t);
    }
    t = topdown_1(t, k_8);
    {
      t = vars_to_consts_0(t);
      {
        t = define_lrules_0(t);
        {
          t = LiftDynamicRules_0(t);
          {
            ATerm l_8 (ATerm t)
            {
              t = try_1(t, HL_0);
              return(t);
            }
            t = topdown_1(t, l_8);
            {
              ATerm m_8 (ATerm t)
              {
                ATerm n_8 (ATerm t)
                {
                  ATerm o_140 = NULL,p_140 = NULL;
                  o_140 = t;
                  n_140 :
                  if(match_cons(o_140, sym_Constructors_1))
                    {
                      p_140 = ATgetArgument(o_140, 0);
                      t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(p_140))));
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = fetch_1(t, n_8);
                return(t);
              }
              t = Specification_1(t, m_8);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm frontend_transformation_0 (ATerm t)
{
  ATerm o_8 (ATerm t)
  {
    t = term_j_42;
    return(t);
  }
  t = timing_1(t, o_8);
  {
    t = normalize_spec_0(t);
    {
      ATerm p_8 (ATerm t)
      {
        t = term_k_42;
        return(t);
      }
      t = timing_1(t, p_8);
      {
        ATerm n_42;
        n_42 = t;
        t = spec_use_def_0(t);
        t = n_42;
        {
          ATerm q_8 (ATerm t)
          {
            t = term_o_42;
            return(t);
          }
          t = timing_1(t, q_8);
          {
            t = ExpandOverlays_0(t);
            {
              ATerm r_8 (ATerm t)
              {
                t = term_p_42;
                return(t);
              }
              t = timing_1(t, r_8);
              {
                t = CheckConstructors_0(t);
                {
                  ATerm s_8 (ATerm t)
                  {
                    t = term_q_42;
                    return(t);
                  }
                  t = timing_1(t, s_8);
                  {
                    t = RulesToSdefs_0(t);
                    {
                      ATerm t_8 (ATerm t)
                      {
                        t = term_s_42;
                        return(t);
                      }
                      t = timing_1(t, t_8);
                      {
                        t = DesugarListMatching_0(t);
                        {
                          ATerm u_8 (ATerm t)
                          {
                            t = term_t_42;
                            return(t);
                          }
                          t = timing_1(t, u_8);
                          {
                            t = strename_0(t);
                            {
                              ATerm v_8 (ATerm t)
                              {
                                t = term_y_42;
                                return(t);
                              }
                              t = timing_1(t, v_8);
                              {
                                ATerm w_8 (ATerm t)
                                {
                                  ATerm x_8 (ATerm t)
                                  {
                                    ATerm y_8 (ATerm t)
                                    {
                                      t = Strategies_1(t, desugar_spec_0);
                                      return(t);
                                    }
                                    t = Cons_2(t, y_8, Nil_0);
                                    return(t);
                                  }
                                  t = Cons_2(t, _id, x_8);
                                  return(t);
                                }
                                t = Specification_1(t, w_8);
                              }
                            }
                          }
                        }
                      }
                    }
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
ATerm _2 (ATerm t, ATerm v_79 (ATerm), ATerm w_79 (ATerm))
{
  ATerm y_140 = NULL,z_140 = NULL,a_141 = NULL;
  y_140 = t;
  x_140 :
  if(match_cons(y_140, sym__2))
    {
      z_140 = ATgetArgument(y_140, 0);
      a_141 = ATgetArgument(y_140, 1);
      {
        ATerm e_141 = NULL,g_141 = NULL;
        ATerm f_141 = NULL;
        t = SSLgetAnnotations(not_null(y_140));
        {
          f_141 = t;
          if(((e_141 != NULL) && (e_141 != f_141)))
            _fail(f_141);
          else
            e_141 = f_141;
        }
        {
          t = not_null(z_140);
          {
            ATerm i_141 = NULL;
            t = v_79(t);
            {
              g_141 = t;
              {
                t = not_null(a_141);
                {
                  ATerm k_141 = NULL;
                  t = w_79(t);
                  {
                    i_141 = t;
                    {
                      ATerm l_141 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_141), not_null(i_141)), not_null(e_141));
                      {
                        l_141 = t;
                        if(((k_141 != NULL) && (k_141 != l_141)))
                          _fail(l_141);
                        else
                          k_141 = l_141;
                      }
                      t = not_null(k_141);
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
  ATerm z_42;
  z_42 = t;
  {
    ATerm s_141 = NULL;
    ATerm t_141 = NULL;
    t = term_g_39;
    {
      t = whoami_0(t);
      {
        t_141 = t;
        if(((s_141 != NULL) && (s_141 != t_141)))
          _fail(t_141);
        else
          s_141 = t_141;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_23, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_43), not_null(s_141)), term_a_43));
      {
        t = printnl_0(t);
        {
          t = term_g_24;
          t = exit_0(t);
        }
      }
    }
  }
  t = z_42;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm x_141 = NULL,y_141 = NULL,z_141 = NULL;
  x_141 = t;
  w_141 :
  if(match_cons(x_141, sym__2))
    {
      y_141 = ATgetArgument(x_141, 0);
      z_141 = ATgetArgument(x_141, 1);
      {
        ATerm e_43;
        e_43 = t;
        t = SSL_printnl(not_null(y_141), not_null(z_141));
        t = e_43;
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
  ATerm e_142 = NULL;
  e_142 = t;
  t = SSL_implode_string(not_null(e_142));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm f_43 = t;
  int h_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(h_43);
    }
  else
    {
      t = f_43;
      {
        ATerm j_142 = NULL,k_142 = NULL,l_142 = NULL;
        j_142 = t;
        i_142 :
        if(((ATgetType(j_142) == AT_LIST) && !(ATisEmpty(j_142))))
          {
            k_142 = ATgetFirst((ATermList) j_142);
            l_142 = (ATerm) ATgetNext((ATermList) j_142);
            {
              t = not_null(k_142);
              {
                ATerm z_8 (ATerm t)
                {
                  t = not_null(l_142);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, z_8);
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
  ATerm v_142 = NULL;
  ATerm x_142 = NULL;
  v_142 = t;
  {
    ATerm y_142 = NULL;
    ATerm a_143 = NULL,b_143 = NULL,c_143 = NULL;
    t = not_null(v_142);
    {
      y_142 = t;
      {
        t = SSL_explode_term(not_null(y_142));
        {
          a_143 = t;
          t_142 :
          if(match_cons(a_143, sym__2))
            {
              b_143 = ATgetArgument(a_143, 0);
              c_143 = ATgetArgument(a_143, 1);
              u_142 :
              if(match_string(b_143, ""))
                {
                  if(((x_142 != NULL) && (x_142 != c_143)))
                    _fail(c_143);
                  else
                    x_142 = c_143;
                }
              else
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
      t = not_null(x_142);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm i_102 (ATerm))
{
  ATerm g_143 (ATerm t)
  {
    ATerm i_43 = t;
    int j_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, g_143);
        ;
        LocalPopChoice(j_43);
      }
    else
      {
        t = i_43;
        {
          t = Nil_0(t);
          t = i_102(t);
        }
      }
    return(t);
  }
  t = g_143(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm j_143 = NULL,k_143 = NULL,l_143 = NULL;
  j_143 = t;
  i_143 :
  if(match_cons(j_143, sym__2))
    {
      k_143 = ATgetArgument(j_143, 0);
      l_143 = ATgetArgument(j_143, 1);
      {
        t = not_null(k_143);
        {
          ATerm a_9 (ATerm t)
          {
            t = not_null(l_143);
            return(t);
          }
          t = at_end_1(t, a_9);
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
  ATerm k_43 = t;
  int l_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(l_43);
    }
  else
    {
      t = k_43;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm q_143 = NULL;
  q_143 = t;
  t = SSL_explode_string(not_null(q_143));
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
  ATerm m_43 = t;
  int n_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(n_43);
    }
  else
    {
      t = m_43;
      {
        ATerm p_43 = t;
        int x_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_9 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, b_9);
            ;
            LocalPopChoice(x_43);
          }
        else
          {
            t = p_43;
            {
              ATerm z_143 = NULL,a_144 = NULL,b_144 = NULL;
              z_143 = t;
              y_143 :
              if(match_cons(z_143, sym_Path_1))
                {
                  a_144 = ATgetArgument(z_143, 0);
                  t = not_null(a_144);
                }
              else
                {
                  if(match_cons(z_143, sym_Var_1))
                    {
                      a_144 = ATgetArgument(z_143, 0);
                      {
                        t = not_null(a_144);
                        {
                          ATerm y_43 = t;
                          int z_43 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(z_43);
                            }
                          else
                            {
                              t = y_43;
                              {
                                ATerm c_9 (ATerm t)
                                {
                                  t = term_l_44;
                                  return(t);
                                }
                                t = debug_1(t, c_9);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(z_143, sym_Prefix_2))
                        {
                          a_144 = ATgetArgument(z_143, 0);
                          b_144 = ATgetArgument(z_143, 1);
                          {
                            ATerm g_144 = NULL,i_144 = NULL;
                            ATerm m_44;
                            m_44 = t;
                            {
                              ATerm h_144 = NULL;
                              t = not_null(a_144);
                              {
                                t = eval_config_0(t);
                                {
                                  h_144 = t;
                                  if(((g_144 != NULL) && (g_144 != h_144)))
                                    _fail(h_144);
                                  else
                                    g_144 = h_144;
                                }
                              }
                            }
                            t = m_44;
                            {
                              ATerm j_144 = NULL;
                              t = not_null(b_144);
                              {
                                t = eval_config_0(t);
                                {
                                  j_144 = t;
                                  if(((i_144 != NULL) && (i_144 != j_144)))
                                    _fail(j_144);
                                  else
                                    i_144 = j_144;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_144), not_null(i_144));
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
  ATerm r_144 = NULL;
  r_144 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_n_44, not_null(r_144));
    {
      t = table_get_0(t);
      {
        ATerm d_9 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm o_44;
            o_44 = t;
            {
              ATerm t_144 = NULL;
              ATerm u_144 = NULL;
              u_144 = t;
              if(((t_144 != NULL) && (t_144 != u_144)))
                _fail(u_144);
              else
                t_144 = u_144;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_n_44, not_null(r_144), not_null(t_144));
                t = table_put_0(t);
              }
            }
            t = o_44;
          }
          return(t);
        }
        t = try_1(t, d_9);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm h_115 (ATerm))
{
  ATerm e_9 (ATerm t)
  {
    ATerm p_44;
    p_44 = t;
    {
      ATerm y_144 = NULL;
      ATerm z_144 = NULL;
      t = term_n_18;
      {
        t = get_config_0(t);
        {
          z_144 = t;
          if(((y_144 != NULL) && (y_144 != z_144)))
            _fail(z_144);
          else
            y_144 = z_144;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_144), term_q_44);
        t = geq_0(t);
      }
    }
    t = p_44;
    t = h_115(t);
    return(t);
  }
  t = try_1(t, e_9);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm f_145 = NULL,g_145 = NULL,h_145 = NULL,i_145 = NULL;
  f_145 = t;
  d_145 :
  if(match_cons(f_145, sym__2))
    {
      g_145 = ATgetArgument(f_145, 0);
      h_145 = ATgetArgument(f_145, 1);
      e_145 :
      if(match_cons(h_145, sym_Stream_1))
        {
          i_145 = ATgetArgument(h_145, 0);
          {
            ATerm l_145 = NULL;
            t = SSL_fputc(not_null(g_145), not_null(i_145));
            {
              ATerm m_145 = NULL;
              m_145 = t;
              if(((l_145 != NULL) && (l_145 != m_145)))
                _fail(m_145);
              else
                l_145 = m_145;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_145));
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
  ATerm t_145 = NULL,u_145 = NULL,v_145 = NULL,w_145 = NULL;
  t_145 = t;
  r_145 :
  if(match_cons(t_145, sym__2))
    {
      u_145 = ATgetArgument(t_145, 0);
      w_145 = ATgetArgument(t_145, 1);
      s_145 :
      if(match_cons(u_145, sym_Stream_1))
        {
          v_145 = ATgetArgument(u_145, 0);
          {
            ATerm z_145 = NULL;
            t = SSL_write_term_to_stream_text(not_null(v_145), not_null(w_145));
            {
              ATerm a_146 = NULL;
              a_146 = t;
              if(((z_145 != NULL) && (z_145 != a_146)))
                _fail(a_146);
              else
                z_145 = a_146;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_145));
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
  ATerm f_9 (ATerm t)
  {
    ATerm e_146 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm f_146 = NULL;
      f_146 = t;
      if(((e_146 != NULL) && (e_146 != f_146)))
        _fail(f_146);
      else
        e_146 = f_146;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_44, not_null(e_146));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, f_9);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm l_146 = NULL,m_146 = NULL,n_146 = NULL,o_146 = NULL;
  l_146 = t;
  j_146 :
  if(match_cons(l_146, sym__2))
    {
      m_146 = ATgetArgument(l_146, 0);
      o_146 = ATgetArgument(l_146, 1);
      k_146 :
      if(match_cons(m_146, sym_Stream_1))
        {
          n_146 = ATgetArgument(m_146, 0);
          {
            ATerm r_146 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(n_146), not_null(o_146));
            {
              ATerm s_146 = NULL;
              s_146 = t;
              if(((r_146 != NULL) && (r_146 != s_146)))
                _fail(s_146);
              else
                r_146 = s_146;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_146));
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
ATerm WriteToFile_1 (ATerm t, ATerm d_114 (ATerm))
{
  ATerm z_146 = NULL,a_147 = NULL,b_147 = NULL;
  z_146 = t;
  y_146 :
  if(match_cons(z_146, sym__2))
    {
      a_147 = ATgetArgument(z_146, 0);
      b_147 = ATgetArgument(z_146, 1);
      {
        ATerm e_147 = NULL,g_147 = NULL;
        t = not_null(a_147);
        {
          ATerm f_147 = NULL;
          f_147 = t;
          if(((e_147 != NULL) && (e_147 != f_147)))
            _fail(f_147);
          else
            e_147 = f_147;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_147), term_s_44);
            {
              t = open_stream_0(t);
              {
                ATerm h_147 = NULL;
                h_147 = t;
                if(((g_147 != NULL) && (g_147 != h_147)))
                  _fail(h_147);
                else
                  g_147 = h_147;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_147), not_null(b_147));
                  {
                    t = d_114(t);
                    {
                      t = fclose_0(t);
                      t = not_null(b_147);
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
  ATerm p_147 = NULL;
  ATerm t_44;
  t_44 = t;
  {
    ATerm g_9 (ATerm t)
    {
      ATerm u_44 = t;
      int y_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_9 (ATerm t)
          {
            ATerm q_147 = NULL,r_147 = NULL;
            q_147 = t;
            m_147 :
            if(match_cons(q_147, sym_Output_1))
              {
                r_147 = ATgetArgument(q_147, 0);
                if(((p_147 != NULL) && (p_147 != r_147)))
                  _fail(r_147);
                else
                  p_147 = r_147;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, h_9);
          ;
          LocalPopChoice(y_44);
        }
      else
        {
          t = u_44;
          {
            ATerm s_147 = NULL;
            t = term_z_44;
            {
              s_147 = t;
              if(((p_147 != NULL) && (p_147 != s_147)))
                _fail(s_147);
              else
                p_147 = s_147;
            }
          }
        }
      return(t);
    }
    t = _2(t, g_9, _id);
  }
  t = t_44;
  {
    ATerm i_9 (ATerm t)
    {
      ATerm k_9 (ATerm t)
      {
        t = not_null(p_147);
        return(t);
      }
      t = split_2(t, k_9, _id);
      return(t);
    }
    t = _2(t, _id, i_9);
    {
      ATerm a_45 = t;
      int b_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_9 (ATerm t)
          {
            ATerm m_9 (ATerm t)
            {
              ATerm t_147 = NULL;
              t_147 = t;
              o_147 :
              if(!(match_cons(t_147, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, m_9);
            return(t);
          }
          t = _2(t, l_9, WriteToBinaryFile_0);
          ;
          LocalPopChoice(b_45);
        }
      else
        {
          t = a_45;
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
ATerm apply_strategy_1 (ATerm t, ATerm f_117 (ATerm))
{
  ATerm z_147 = NULL,b_148 = NULL,c_148 = NULL,d_148 = NULL;
  ATerm c_45;
  c_45 = t;
  t = dtime_0(t);
  t = c_45;
  {
    t = f_117(t);
    {
      ATerm d_45;
      d_45 = t;
      {
        ATerm a_148 = NULL;
        t = dtime_0(t);
        {
          a_148 = t;
          if(((z_147 != NULL) && (z_147 != a_148)))
            _fail(a_148);
          else
            z_147 = a_148;
        }
      }
      t = d_45;
      {
        b_148 = t;
        y_147 :
        if(match_cons(b_148, sym__2))
          {
            c_148 = ATgetArgument(b_148, 0);
            d_148 = ATgetArgument(b_148, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_148)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(z_147))), not_null(d_148));
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
  ATerm l_148 = NULL,m_148 = NULL;
  ATerm s_148 (ATerm t)
  {
    t = SSL_fclose(not_null(m_148));
    return(t);
  }
  m_148 = t;
  k_148 :
  if(match_cons(m_148, sym_Stream_1))
    {
      l_148 = ATgetArgument(m_148, 0);
      {
        ATerm e_45 = t;
        int f_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(l_148));
            ;
            LocalPopChoice(f_45);
          }
        else
          {
            t = e_45;
            t = s_148(t);
          }
      }
    }
  else
    {
      t = s_148(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm v_148 = NULL,w_148 = NULL;
  v_148 = t;
  u_148 :
  if(match_cons(v_148, sym_Stream_1))
    {
      w_148 = ATgetArgument(v_148, 0);
      t = SSL_read_term_from_stream(not_null(w_148));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm p_113 (ATerm))
{
  ATerm u_45;
  u_45 = t;
  {
    ATerm b_149 = NULL,d_149 = NULL;
    ATerm v_45;
    v_45 = t;
    {
      ATerm c_149 = NULL;
      t = p_113(t);
      {
        c_149 = t;
        if(((b_149 != NULL) && (b_149 != c_149)))
          _fail(c_149);
        else
          b_149 = c_149;
      }
    }
    t = v_45;
    {
      ATerm e_149 = NULL;
      e_149 = t;
      if(((d_149 != NULL) && (d_149 != e_149)))
        _fail(e_149);
      else
        d_149 = e_149;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_149)), not_null(b_149)));
        t = printnl_0(t);
      }
    }
  }
  t = u_45;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm k_149 = NULL,l_149 = NULL,m_149 = NULL;
  k_149 = t;
  j_149 :
  if(match_cons(k_149, sym__2))
    {
      l_149 = ATgetArgument(k_149, 0);
      m_149 = ATgetArgument(k_149, 1);
      {
        ATerm p_149 = NULL;
        t = SSL_fopen(not_null(l_149), not_null(m_149));
        {
          ATerm q_149 = NULL;
          q_149 = t;
          if(((p_149 != NULL) && (p_149 != q_149)))
            _fail(q_149);
          else
            p_149 = q_149;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_149));
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
  ATerm u_149 = NULL;
  u_149 = t;
  t = SSL_is_string(not_null(u_149));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm y_149 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm z_149 = NULL;
    z_149 = t;
    if(((y_149 != NULL) && (y_149 != z_149)))
      _fail(z_149);
    else
      y_149 = z_149;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_149));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm c_150 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm d_150 = NULL;
    d_150 = t;
    if(((c_150 != NULL) && (c_150 != d_150)))
      _fail(d_150);
    else
      c_150 = d_150;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_150));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm g_150 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm h_150 = NULL;
    h_150 = t;
    if(((g_150 != NULL) && (g_150 != h_150)))
      _fail(h_150);
    else
      g_150 = h_150;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_150));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm n_150 = NULL;
  n_150 = t;
  m_150 :
  if(match_cons(n_150, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(n_150, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(n_150, sym_stdin_0))
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
  ATerm x_150 = NULL;
  ATerm z_150 = NULL,a_151 = NULL;
  x_150 = t;
  {
    ATerm b_151 = NULL;
    ATerm d_151 = NULL,e_151 = NULL,f_151 = NULL,g_151 = NULL,h_151 = NULL;
    t = not_null(x_150);
    {
      b_151 = t;
      {
        t = SSL_explode_term(not_null(b_151));
        {
          d_151 = t;
          u_150 :
          if(match_cons(d_151, sym__2))
            {
              e_151 = ATgetArgument(d_151, 0);
              f_151 = ATgetArgument(d_151, 1);
              v_150 :
              if(match_string(e_151, ""))
                {
                  w_150 :
                  if(((ATgetType(f_151) == AT_LIST) && !(ATisEmpty(f_151))))
                    {
                      g_151 = ATgetFirst((ATermList) f_151);
                      h_151 = (ATerm) ATgetNext((ATermList) f_151);
                      {
                        if(((a_151 != NULL) && (a_151 != g_151)))
                          _fail(g_151);
                        else
                          a_151 = g_151;
                        if(((z_150 != NULL) && (z_150 != h_151)))
                          _fail(h_151);
                        else
                          z_150 = h_151;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(a_151);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm p_151 = NULL,q_151 = NULL,r_151 = NULL;
  p_151 = t;
  o_151 :
  if(match_cons(p_151, sym__2))
    {
      q_151 = ATgetArgument(p_151, 0);
      r_151 = ATgetArgument(p_151, 1);
      {
        ATerm c_46 = t;
        int d_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(d_46);
          }
        else
          {
            t = c_46;
            {
              ATerm e_46 = t;
              int f_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_9 (ATerm t)
                  {
                    ATerm s_151 = NULL,t_151 = NULL;
                    s_151 = t;
                    n_151 :
                    if(match_cons(s_151, sym_Path_1))
                      {
                        t_151 = ATgetArgument(s_151, 0);
                        t = not_null(t_151);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, n_9, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(f_46);
                }
              else
                {
                  t = e_46;
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
  ATerm b_152 = NULL;
  ATerm g_46 = t;
  int h_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_151 = NULL;
      ATerm a_152 = NULL;
      a_152 = t;
      if(((z_151 != NULL) && (z_151 != a_152)))
        _fail(a_152);
      else
        z_151 = a_152;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_151), term_l_46);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(h_46);
    }
  else
    {
      t = g_46;
      {
        ATerm p_9 (ATerm t)
        {
          t = term_q_46;
          return(t);
        }
        t = debug_1(t, p_9);
        _fail(t);
      }
    }
  {
    ATerm r_46;
    r_46 = t;
    {
      ATerm c_152 = NULL;
      t = read_from_stream_0(t);
      {
        c_152 = t;
        if(((b_152 != NULL) && (b_152 != c_152)))
          _fail(c_152);
        else
          b_152 = c_152;
      }
    }
    t = r_46;
    {
      t = fclose_0(t);
      t = not_null(b_152);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm h_109 (ATerm), ATerm i_109 (ATerm))
{
  ATerm h_152 = NULL,j_152 = NULL;
  ATerm s_46;
  s_46 = t;
  {
    ATerm i_152 = NULL;
    t = h_109(t);
    {
      i_152 = t;
      if(((h_152 != NULL) && (h_152 != i_152)))
        _fail(i_152);
      else
        h_152 = i_152;
    }
  }
  t = s_46;
  {
    ATerm k_152 = NULL;
    t = i_109(t);
    {
      k_152 = t;
      if(((j_152 != NULL) && (j_152 != k_152)))
        _fail(k_152);
      else
        j_152 = k_152;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_152), not_null(j_152));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm q_152 = NULL;
  ATerm u_46;
  u_46 = t;
  {
    ATerm v_46 = t;
    int w_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_9 (ATerm t)
        {
          ATerm r_152 = NULL,s_152 = NULL;
          r_152 = t;
          o_152 :
          if(match_cons(r_152, sym_Input_1))
            {
              s_152 = ATgetArgument(r_152, 0);
              if(((q_152 != NULL) && (q_152 != s_152)))
                _fail(s_152);
              else
                q_152 = s_152;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, u_9);
        ;
        LocalPopChoice(w_46);
      }
    else
      {
        t = v_46;
        {
          ATerm t_152 = NULL;
          t = term_x_46;
          {
            t_152 = t;
            if(((q_152 != NULL) && (q_152 != t_152)))
              _fail(t_152);
            else
              q_152 = t_152;
          }
        }
      }
  }
  t = u_46;
  {
    ATerm v_9 (ATerm t)
    {
      t = not_null(q_152);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, v_9);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm e_10 (ATerm t)
  {
    ATerm y_152 = NULL;
    y_152 = t;
    w_152 :
    if(!(match_string(y_152, "-k")))
      {
        if(!(match_string(y_152, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_10 (ATerm t)
  {
    ATerm y_46;
    y_46 = t;
    {
      ATerm z_152 = NULL;
      ATerm a_153 = NULL;
      t = string_to_int_0(t);
      {
        a_153 = t;
        if(((z_152 != NULL) && (z_152 != a_153)))
          _fail(a_153);
        else
          z_152 = a_153;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_47, not_null(z_152));
        t = set_config_0(t);
      }
    }
    t = y_46;
    return(t);
  }
  ATerm a_11 (ATerm t)
  {
    t = term_g_47;
    return(t);
  }
  t = ArgOption_3(t, e_10, o_10, a_11);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm d_153 = NULL;
  d_153 = t;
  t = SSL_string_to_int(not_null(d_153));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm h_47 = t;
  int q_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_11 (ATerm t)
      {
        ATerm l_153 = NULL;
        l_153 = t;
        g_153 :
        if(!(match_string(l_153, "-S")))
          {
            if(!(match_string(l_153, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_11 (ATerm t)
      {
        t = term_r_47;
        t = set_config_0(t);
        t = term_s_47;
        return(t);
      }
      ATerm d_11 (ATerm t)
      {
        t = term_t_47;
        return(t);
      }
      t = Option_3(t, b_11, c_11, d_11);
      ;
      LocalPopChoice(q_47);
    }
  else
    {
      t = h_47;
      {
        ATerm u_47 = t;
        int v_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_11 (ATerm t)
            {
              ATerm m_153 = NULL;
              m_153 = t;
              h_153 :
              if(!(match_string(m_153, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm f_11 (ATerm t)
            {
              ATerm p_153 = NULL;
              ATerm w_47;
              w_47 = t;
              {
                ATerm n_153 = NULL;
                ATerm o_153 = NULL;
                t = string_to_int_0(t);
                {
                  o_153 = t;
                  if(((n_153 != NULL) && (n_153 != o_153)))
                    _fail(o_153);
                  else
                    n_153 = o_153;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_18, not_null(n_153));
                  t = set_config_0(t);
                }
              }
              t = w_47;
              {
                ATerm q_153 = NULL;
                q_153 = t;
                if(((p_153 != NULL) && (p_153 != q_153)))
                  _fail(q_153);
                else
                  p_153 = q_153;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(p_153));
              }
              return(t);
            }
            ATerm g_11 (ATerm t)
            {
              t = term_x_47;
              return(t);
            }
            t = ArgOption_3(t, e_11, f_11, g_11);
            ;
            LocalPopChoice(v_47);
          }
        else
          {
            t = u_47;
            {
              ATerm h_11 (ATerm t)
              {
                ATerm r_153 = NULL;
                r_153 = t;
                k_153 :
                if(!(match_string(r_153, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm i_11 (ATerm t)
              {
                t = term_d_48;
                t = set_config_0(t);
                t = term_e_48;
                return(t);
              }
              ATerm j_11 (ATerm t)
              {
                t = term_f_48;
                return(t);
              }
              t = Option_3(t, h_11, i_11, j_11);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm g_48 = t;
  int i_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(i_48);
    }
  else
    {
      t = g_48;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm k_11 (ATerm t)
  {
    ATerm x_153 = NULL;
    x_153 = t;
    u_153 :
    if(!(match_string(x_153, "-o")))
      {
        if(!(match_string(x_153, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_11 (ATerm t)
  {
    ATerm a_154 = NULL;
    ATerm l_48;
    l_48 = t;
    {
      ATerm y_153 = NULL;
      ATerm z_153 = NULL;
      z_153 = t;
      if(((y_153 != NULL) && (y_153 != z_153)))
        _fail(z_153);
      else
        y_153 = z_153;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_48, not_null(y_153));
        t = set_config_0(t);
      }
    }
    t = l_48;
    {
      ATerm b_154 = NULL;
      b_154 = t;
      if(((a_154 != NULL) && (a_154 != b_154)))
        _fail(b_154);
      else
        a_154 = b_154;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_154));
    }
    return(t);
  }
  ATerm m_11 (ATerm t)
  {
    t = term_r_48;
    return(t);
  }
  t = ArgOption_3(t, k_11, l_11, m_11);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm s_48 = t;
  int x_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(x_48);
    }
  else
    {
      t = s_48;
      {
        ATerm n_11 (ATerm t)
        {
          ATerm f_154 = NULL;
          f_154 = t;
          e_154 :
          if(!(match_string(f_154, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm o_11 (ATerm t)
        {
          t = term_d_49;
          t = set_config_0(t);
          t = term_e_49;
          return(t);
        }
        ATerm p_11 (ATerm t)
        {
          t = term_f_49;
          return(t);
        }
        t = Option_3(t, n_11, o_11, p_11);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm l_154 = NULL,m_154 = NULL,n_154 = NULL,o_154 = NULL,p_154 = NULL;
  l_154 = t;
  j_154 :
  if(match_string(l_154, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(l_154) == AT_LIST) && !(ATisEmpty(l_154))))
        {
          m_154 = ATgetFirst((ATermList) l_154);
          n_154 = (ATerm) ATgetNext((ATermList) l_154);
          k_154 :
          if(((ATgetType(n_154) == AT_LIST) && !(ATisEmpty(n_154))))
            {
              o_154 = ATgetFirst((ATermList) n_154);
              p_154 = (ATerm) ATgetNext((ATermList) n_154);
              {
                ATerm t_154 = NULL;
                ATerm i_49;
                i_49 = t;
                {
                  t = not_null(m_154);
                  t = k_0(t);
                }
                t = i_49;
                {
                  ATerm u_154 = NULL;
                  t = not_null(o_154);
                  {
                    t = m_0(t);
                    {
                      u_154 = t;
                      if(((t_154 != NULL) && (t_154 != u_154)))
                        _fail(u_154);
                      else
                        t_154 = u_154;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_154)), not_null(t_154));
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
  ATerm q_11 (ATerm t)
  {
    ATerm b_155 = NULL;
    b_155 = t;
    y_154 :
    if(!(match_string(b_155, "-i")))
      {
        if(!(match_string(b_155, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_11 (ATerm t)
  {
    ATerm e_155 = NULL;
    ATerm j_49;
    j_49 = t;
    {
      ATerm c_155 = NULL;
      ATerm d_155 = NULL;
      d_155 = t;
      if(((c_155 != NULL) && (c_155 != d_155)))
        _fail(d_155);
      else
        c_155 = d_155;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_49, not_null(c_155));
        t = set_config_0(t);
      }
    }
    t = j_49;
    {
      ATerm f_155 = NULL;
      f_155 = t;
      if(((e_155 != NULL) && (e_155 != f_155)))
        _fail(f_155);
      else
        e_155 = f_155;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_155));
    }
    return(t);
  }
  ATerm s_11 (ATerm t)
  {
    t = term_l_49;
    return(t);
  }
  t = ArgOption_3(t, q_11, r_11, s_11);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm m_49 = t;
  int n_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(n_49);
    }
  else
    {
      t = m_49;
      {
        ATerm o_49 = t;
        int p_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(p_49);
          }
        else
          {
            t = o_49;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm j_155 = NULL;
  t = report_run_time_0(t);
  {
    ATerm k_155 = NULL;
    t = term_g_39;
    {
      t = whoami_0(t);
      {
        k_155 = t;
        if(((j_155 != NULL) && (j_155 != k_155)))
          _fail(k_155);
        else
          j_155 = k_155;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_23, (ATerm) ATinsert(ATinsert(ATempty, term_q_49), not_null(j_155)));
      {
        t = printnl_0(t);
        {
          t = term_g_24;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_r_49;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm n_155 = NULL;
  n_155 = t;
  t = SSL_TicksToSeconds(not_null(n_155));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_155 = NULL,t_155 = NULL,u_155 = NULL;
  s_155 = t;
  r_155 :
  if(match_cons(s_155, sym__2))
    {
      t_155 = ATgetArgument(s_155, 0);
      u_155 = ATgetArgument(s_155, 1);
      {
        ATerm s_49 = t;
        int t_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(t_155), not_null(u_155));
            ;
            LocalPopChoice(t_49);
          }
        else
          {
            t = s_49;
            t = SSL_addr(not_null(t_155), not_null(u_155));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm s_107 (ATerm), ATerm t_107 (ATerm))
{
  ATerm u_49 = t;
  int v_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_107(t);
      ;
      LocalPopChoice(v_49);
    }
  else
    {
      t = u_49;
      {
        ATerm b_156 = NULL,c_156 = NULL,d_156 = NULL;
        b_156 = t;
        a_156 :
        if(((ATgetType(b_156) == AT_LIST) && !(ATisEmpty(b_156))))
          {
            c_156 = ATgetFirst((ATermList) b_156);
            d_156 = (ATerm) ATgetNext((ATermList) b_156);
            {
              ATerm g_156 = NULL;
              ATerm h_156 = NULL;
              t = not_null(d_156);
              {
                t = foldr_2(t, s_107, t_107);
                {
                  h_156 = t;
                  if(((g_156 != NULL) && (g_156 != h_156)))
                    _fail(h_156);
                  else
                    g_156 = h_156;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_156), not_null(g_156));
                t = t_107(t);
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
ATerm crush_2 (ATerm t, ATerm l_111 (ATerm), ATerm m_111 (ATerm))
{
  ATerm o_156 = NULL;
  ATerm q_156 = NULL;
  o_156 = t;
  {
    ATerm r_156 = NULL;
    ATerm t_156 = NULL,u_156 = NULL,v_156 = NULL;
    t = not_null(o_156);
    {
      r_156 = t;
      {
        t = SSL_explode_term(not_null(r_156));
        {
          t_156 = t;
          n_156 :
          if(match_cons(t_156, sym__2))
            {
              u_156 = ATgetArgument(t_156, 0);
              v_156 = ATgetArgument(t_156, 1);
              if(((q_156 != NULL) && (q_156 != v_156)))
                _fail(v_156);
              else
                q_156 = v_156;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_156);
      t = foldr_2(t, l_111, m_111);
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
    ATerm u_11 (ATerm t)
    {
      t = term_y_25;
      return(t);
    }
    t = crush_2(t, u_11, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm b_157 = NULL,c_157 = NULL,d_157 = NULL;
  b_157 = t;
  a_157 :
  if(match_cons(b_157, sym__2))
    {
      c_157 = ATgetArgument(b_157, 0);
      d_157 = ATgetArgument(b_157, 1);
      {
        ATerm w_49;
        w_49 = t;
        {
          ATerm z_49 = t;
          int a_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(c_157), not_null(d_157));
              ;
              LocalPopChoice(a_50);
            }
          else
            {
              t = z_49;
              t = SSL_gtr(not_null(c_157), not_null(d_157));
            }
        }
        t = w_49;
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
  ATerm j_157 = NULL;
  ATerm e_50 = t;
  int r_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_157 = NULL,l_157 = NULL,m_157 = NULL;
      k_157 = t;
      i_157 :
      if(match_cons(k_157, sym__2))
        {
          l_157 = ATgetArgument(k_157, 0);
          m_157 = ATgetArgument(k_157, 1);
          {
            if(((j_157 != NULL) && (j_157 != l_157)))
              _fail(l_157);
            else
              j_157 = l_157;
            if(((j_157 != NULL) && (j_157 != m_157)))
              _fail(m_157);
            else
              j_157 = m_157;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(r_50);
    }
  else
    {
      t = e_50;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm g_115 (ATerm))
{
  ATerm v_11 (ATerm t)
  {
    ATerm s_50;
    s_50 = t;
    {
      ATerm p_157 = NULL;
      ATerm q_157 = NULL;
      t = term_n_18;
      {
        t = get_config_0(t);
        {
          q_157 = t;
          if(((p_157 != NULL) && (p_157 != q_157)))
            _fail(q_157);
          else
            p_157 = q_157;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_157), term_g_24);
        t = geq_0(t);
      }
    }
    t = s_50;
    t = g_115(t);
    return(t);
  }
  t = try_1(t, v_11);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm w_11 (ATerm t)
  {
    ATerm u_157 = NULL,w_157 = NULL;
    ATerm t_50;
    t_50 = t;
    {
      ATerm v_157 = NULL;
      t = run_time_0(t);
      {
        v_157 = t;
        if(((u_157 != NULL) && (u_157 != v_157)))
          _fail(v_157);
        else
          u_157 = v_157;
      }
    }
    t = t_50;
    {
      ATerm x_157 = NULL;
      t = term_g_39;
      {
        t = whoami_0(t);
        {
          x_157 = t;
          if(((w_157 != NULL) && (w_157 != x_157)))
            _fail(x_157);
          else
            w_157 = x_157;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_50), not_null(u_157)), term_u_50), not_null(w_157)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, w_11);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_y_25;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_158 = NULL;
  e_158 = t;
  d_158 :
  if(match_cons(e_158, sym_Version_0))
    {
      ATerm g_158 = NULL,i_158 = NULL;
      ATerm w_50;
      w_50 = t;
      {
        ATerm h_158 = NULL;
        t = SSLgetAnnotations(not_null(e_158));
        {
          h_158 = t;
          if(((g_158 != NULL) && (g_158 != h_158)))
            _fail(h_158);
          else
            g_158 = h_158;
        }
      }
      t = w_50;
      {
        ATerm j_158 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(g_158));
        {
          j_158 = t;
          if(((i_158 != NULL) && (i_158 != j_158)))
            _fail(j_158);
          else
            i_158 = j_158;
        }
        t = not_null(i_158);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm d_118 (ATerm))
{
  ATerm x_50 = t;
  int y_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_50;
      t = get_config_0(t);
      ;
      LocalPopChoice(y_50);
    }
  else
    {
      t = x_50;
      {
        ATerm y_11 (ATerm t)
        {
          ATerm a_51 = t;
          int b_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(b_51);
            }
          else
            {
              t = a_51;
              {
                ATerm c_51 = t;
                int d_51 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(d_51);
                  }
                else
                  {
                    t = c_51;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, y_11);
      }
    }
  t = d_118(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm p_158 = NULL;
  p_158 = t;
  t = SSL_table_create(not_null(p_158));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm u_158 = NULL;
  u_158 = t;
  {
    ATerm e_51;
    e_51 = t;
    {
      t = term_f_51;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_51, term_g_51, not_null(u_158));
          t = table_put_0(t);
        }
      }
    }
    t = e_51;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm y_158 = NULL;
  y_158 = t;
  t = SSL_table_destroy(not_null(y_158));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm c_159 = NULL;
  c_159 = t;
  t = SSL_exit(not_null(c_159));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm e_120 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm t_101 (ATerm))
{
  ATerm f_159 (ATerm t)
  {
    ATerm h_51 = t;
    int i_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(i_51);
      }
    else
      {
        t = h_51;
        t = Cons_2(t, t_101, f_159);
      }
    return(t);
  }
  t = f_159(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm m_159 = NULL,n_159 = NULL,o_159 = NULL;
  o_159 = t;
  l_159 :
  if(((ATgetType(o_159) == AT_LIST) && !(ATisEmpty(o_159))))
    {
      m_159 = ATgetFirst((ATermList) o_159);
      n_159 = (ATerm) ATgetNext((ATermList) o_159);
      {
        ATerm r_159 = NULL;
        t = not_null(n_159);
        {
          ATerm j_51;
          j_51 = t;
          {
            ATerm s_159 = NULL,u_159 = NULL,x_159 = NULL;
            ATerm k_51;
            k_51 = t;
            {
              ATerm t_159 = NULL;
              t = i_0(t);
              {
                t_159 = t;
                if(((s_159 != NULL) && (s_159 != t_159)))
                  _fail(t_159);
                else
                  s_159 = t_159;
              }
            }
            t = k_51;
            {
              ATerm w_159 = NULL;
              t = not_null(m_159);
              {
                t = g_0(t);
                {
                  w_159 = t;
                  if(((u_159 != NULL) && (u_159 != w_159)))
                    _fail(w_159);
                  else
                    u_159 = w_159;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_159)), not_null(u_159));
                {
                  x_159 = t;
                  if(((r_159 != NULL) && (r_159 != x_159)))
                    _fail(x_159);
                  else
                    r_159 = x_159;
                }
              }
            }
          }
          t = j_51;
          {
            ATerm z_11 (ATerm t)
            {
              t = not_null(r_159);
              return(t);
            }
            t = reverse_acc_2(t, g_0, z_11);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(o_159) == AT_LIST) && ATisEmpty(o_159)))
        {
          {
            t = term_g_39;
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
  ATerm a_12 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_12);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm d_120 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm l_93 (ATerm))
{
  ATerm k_160 = NULL,l_160 = NULL;
  k_160 = t;
  j_160 :
  if(match_cons(k_160, sym_Program_1))
    {
      l_160 = ATgetArgument(k_160, 0);
      {
        ATerm o_160 = NULL,q_160 = NULL;
        ATerm p_160 = NULL;
        t = SSLgetAnnotations(not_null(k_160));
        {
          p_160 = t;
          if(((o_160 != NULL) && (o_160 != p_160)))
            _fail(p_160);
          else
            o_160 = p_160;
        }
        {
          t = not_null(l_160);
          {
            ATerm s_160 = NULL;
            t = l_93(t);
            {
              q_160 = t;
              {
                ATerm t_160 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(q_160)), not_null(o_160));
                {
                  t_160 = t;
                  if(((s_160 != NULL) && (s_160 != t_160)))
                    _fail(t_160);
                  else
                    s_160 = t_160;
                }
                t = not_null(s_160);
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
  ATerm e_161 = NULL;
  ATerm l_51 = t;
  int m_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_161 = NULL;
      t = term_r_49;
      {
        t = get_config_0(t);
        {
          f_161 = t;
          if(((e_161 != NULL) && (e_161 != f_161)))
            _fail(f_161);
          else
            e_161 = f_161;
        }
      }
      ;
      LocalPopChoice(m_51);
    }
  else
    {
      t = l_51;
      {
        ATerm c_12 (ATerm t)
        {
          ATerm g_12 (ATerm t)
          {
            ATerm g_161 = NULL;
            g_161 = t;
            if(((e_161 != NULL) && (e_161 != g_161)))
              _fail(g_161);
            else
              e_161 = g_161;
            return(t);
          }
          t = Program_1(t, g_12);
          return(t);
        }
        t = option_defined_1(t, c_12);
      }
    }
  {
    ATerm q_12 (ATerm t)
    {
      ATerm y_12 (ATerm t)
      {
        t = not_null(e_161);
        return(t);
      }
      t = short_description_1(t, y_12);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, q_12);
    {
      t = term_n_51;
      {
        t = echo_0(t);
        {
          t = term_q_51;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm i_13 (ATerm t)
                {
                  ATerm h_161 = NULL;
                  ATerm i_161 = NULL;
                  i_161 = t;
                  if(((h_161 != NULL) && (h_161 != i_161)))
                    _fail(i_161);
                  else
                    h_161 = i_161;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_161)), term_r_51);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, i_13);
                {
                  ATerm j_13 (ATerm t)
                  {
                    ATerm j_161 = NULL;
                    ATerm k_161 = NULL;
                    ATerm k_13 (ATerm t)
                    {
                      t = not_null(e_161);
                      return(t);
                    }
                    t = long_description_1(t, k_13);
                    {
                      k_161 = t;
                      if(((j_161 != NULL) && (j_161 != k_161)))
                        _fail(k_161);
                      else
                        j_161 = k_161;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(j_161)), term_u_51);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, j_13);
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
  ATerm b_52 = t;
  int c_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(c_52);
    }
  else
    {
      t = b_52;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm m_93 (ATerm))
{
  ATerm u_161 = NULL,v_161 = NULL;
  u_161 = t;
  t_161 :
  if(match_cons(u_161, sym_Undefined_1))
    {
      v_161 = ATgetArgument(u_161, 0);
      {
        ATerm z_161 = NULL,b_162 = NULL;
        ATerm a_162 = NULL;
        t = SSLgetAnnotations(not_null(u_161));
        {
          a_162 = t;
          if(((z_161 != NULL) && (z_161 != a_162)))
            _fail(a_162);
          else
            z_161 = a_162;
        }
        {
          t = not_null(v_161);
          {
            ATerm d_162 = NULL;
            t = m_93(t);
            {
              b_162 = t;
              {
                ATerm e_162 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_162)), not_null(z_161));
                {
                  e_162 = t;
                  if(((d_162 != NULL) && (d_162 != e_162)))
                    _fail(e_162);
                  else
                    d_162 = e_162;
                }
                t = not_null(d_162);
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
ATerm fetch_1 (ATerm t, ATerm c_102 (ATerm))
{
  ATerm j_162 (ATerm t)
  {
    ATerm d_52 = t;
    int f_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, c_102, _id);
        ;
        LocalPopChoice(f_52);
      }
    else
      {
        t = d_52;
        t = Cons_2(t, _id, j_162);
      }
    return(t);
  }
  t = j_162(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_119 (ATerm))
{
  t = fetch_1(t, d_119);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm n_162 = NULL,o_162 = NULL,p_162 = NULL;
  n_162 = t;
  k_162 :
  if(((ATgetType(n_162) == AT_LIST) && ATisEmpty(n_162)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(n_162) == AT_LIST) && !(ATisEmpty(n_162))))
        {
          o_162 = ATgetFirst((ATermList) n_162);
          p_162 = (ATerm) ATgetNext((ATermList) n_162);
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
  ATerm i_52;
  i_52 = t;
  {
    ATerm s_162 = NULL;
    ATerm v_162 = NULL;
    ATerm j_52 = t;
    int k_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(k_52);
      }
    else
      {
        t = j_52;
        {
          ATerm t_162 = NULL;
          ATerm u_162 = NULL;
          u_162 = t;
          if(((t_162 != NULL) && (t_162 != u_162)))
            _fail(u_162);
          else
            t_162 = u_162;
          t = (ATerm) ATinsert(ATempty, not_null(t_162));
        }
      }
    {
      v_162 = t;
      if(((s_162 != NULL) && (s_162 != v_162)))
        _fail(v_162);
      else
        s_162 = v_162;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_44, not_null(s_162));
      t = printnl_0(t);
    }
  }
  t = i_52;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_r_49;
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
  ATerm m_52 = t;
  int p_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(p_52);
    }
  else
    {
      t = m_52;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm c_163 = NULL;
  c_163 = t;
  b_163 :
  if(match_cons(c_163, sym_Help_0))
    {
      ATerm e_163 = NULL,g_163 = NULL;
      ATerm q_52;
      q_52 = t;
      {
        ATerm f_163 = NULL;
        t = SSLgetAnnotations(not_null(c_163));
        {
          f_163 = t;
          if(((e_163 != NULL) && (e_163 != f_163)))
            _fail(f_163);
          else
            e_163 = f_163;
        }
      }
      t = q_52;
      {
        ATerm h_163 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(e_163));
        {
          h_163 = t;
          if(((g_163 != NULL) && (g_163 != h_163)))
            _fail(h_163);
          else
            g_163 = h_163;
        }
        t = not_null(g_163);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm i_94 (ATerm))
{
  ATerm r_52 = t;
  int s_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_94(t);
      ;
      LocalPopChoice(s_52);
    }
  else
    {
      t = r_52;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm u_52 = t;
  int v_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_13 (ATerm t)
      {
        ATerm n_163 = NULL;
        n_163 = t;
        l_163 :
        if(!(match_string(n_163, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm m_13 (ATerm t)
      {
        t = term_y_52;
        t = set_config_0(t);
        return(t);
      }
      ATerm n_13 (ATerm t)
      {
        t = term_z_52;
        return(t);
      }
      t = Option_3(t, l_13, m_13, n_13);
      ;
      LocalPopChoice(v_52);
    }
  else
    {
      t = u_52;
      {
        ATerm o_13 (ATerm t)
        {
          ATerm o_163 = NULL;
          o_163 = t;
          m_163 :
          if(!(match_string(o_163, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm p_13 (ATerm t)
        {
          t = term_y_52;
          {
            t = set_config_0(t);
            {
              t = term_b_53;
              t = set_config_0(t);
            }
          }
          t = term_c_53;
          return(t);
        }
        ATerm q_13 (ATerm t)
        {
          t = term_g_53;
          return(t);
        }
        t = Option_3(t, o_13, p_13, q_13);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm r_163 = NULL,s_163 = NULL,t_163 = NULL;
  r_163 = t;
  q_163 :
  if(match_cons(r_163, sym__2))
    {
      s_163 = ATgetArgument(r_163, 0);
      t_163 = ATgetArgument(r_163, 1);
      t = SSL_table_get(not_null(s_163), not_null(t_163));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm a_164 = NULL,b_164 = NULL,c_164 = NULL,d_164 = NULL;
  a_164 = t;
  z_163 :
  if(match_cons(a_164, sym__3))
    {
      b_164 = ATgetArgument(a_164, 0);
      c_164 = ATgetArgument(a_164, 1);
      d_164 = ATgetArgument(a_164, 2);
      {
        ATerm h_53;
        h_53 = t;
        {
          ATerm h_164 = NULL;
          ATerm i_164 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_164), not_null(c_164));
          {
            ATerm i_53 = t;
            int j_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(j_53);
              }
            else
              {
                t = i_53;
                t = (ATerm) ATempty;
              }
            {
              i_164 = t;
              if(((h_164 != NULL) && (h_164 != i_164)))
                _fail(i_164);
              else
                h_164 = i_164;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_164), not_null(c_164), (ATerm) ATinsert(CheckATermList(not_null(h_164)), not_null(d_164)));
            t = table_put_0(t);
          }
        }
        t = h_53;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm i_120 (ATerm))
{
  ATerm m_164 = NULL;
  ATerm n_164 = NULL;
  t = term_g_39;
  {
    t = i_120(t);
    {
      n_164 = t;
      if(((m_164 != NULL) && (m_164 != n_164)))
        _fail(n_164);
      else
        m_164 = n_164;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_51, term_p_51, not_null(m_164));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm t_164 = NULL,u_164 = NULL,v_164 = NULL;
  t_164 = t;
  s_164 :
  if(match_string(t_164, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(t_164) == AT_LIST) && !(ATisEmpty(t_164))))
        {
          u_164 = ATgetFirst((ATermList) t_164);
          v_164 = (ATerm) ATgetNext((ATermList) t_164);
          {
            ATerm y_164 = NULL;
            ATerm p_53;
            p_53 = t;
            {
              t = not_null(u_164);
              t = a_0(t);
            }
            t = p_53;
            {
              ATerm z_164 = NULL;
              t = term_g_39;
              {
                t = b_0(t);
                {
                  z_164 = t;
                  if(((y_164 != NULL) && (y_164 != z_164)))
                    _fail(z_164);
                  else
                    y_164 = z_164;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_164)), not_null(y_164));
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
  ATerm r_13 (ATerm t)
  {
    ATerm e_165 = NULL;
    e_165 = t;
    d_165 :
    if(!(match_string(e_165, "--help")))
      {
        if(!(match_string(e_165, "-h")))
          {
            if(!(match_string(e_165, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm s_13 (ATerm t)
  {
    t = term_q_53;
    {
      t = set_config_0(t);
      t = term_r_53;
    }
    return(t);
  }
  ATerm t_13 (ATerm t)
  {
    t = term_s_53;
    return(t);
  }
  t = Option_3(t, r_13, s_13, t_13);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm h_165 = NULL,i_165 = NULL,j_165 = NULL;
  h_165 = t;
  g_165 :
  if(((ATgetType(h_165) == AT_LIST) && !(ATisEmpty(h_165))))
    {
      i_165 = ATgetFirst((ATermList) h_165);
      j_165 = (ATerm) ATgetNext((ATermList) h_165);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_165)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_165)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm e_81 (ATerm), ATerm f_81 (ATerm))
{
  ATerm t_165 = NULL,u_165 = NULL,v_165 = NULL;
  t_165 = t;
  s_165 :
  if(((ATgetType(t_165) == AT_LIST) && !(ATisEmpty(t_165))))
    {
      u_165 = ATgetFirst((ATermList) t_165);
      v_165 = (ATerm) ATgetNext((ATermList) t_165);
      {
        ATerm z_165 = NULL,b_166 = NULL;
        ATerm a_166 = NULL;
        t = SSLgetAnnotations(not_null(t_165));
        {
          a_166 = t;
          if(((z_165 != NULL) && (z_165 != a_166)))
            _fail(a_166);
          else
            z_165 = a_166;
        }
        {
          t = not_null(u_165);
          {
            ATerm d_166 = NULL;
            t = e_81(t);
            {
              b_166 = t;
              {
                t = not_null(v_165);
                {
                  ATerm f_166 = NULL;
                  t = f_81(t);
                  {
                    d_166 = t;
                    {
                      ATerm g_166 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(d_166)), not_null(b_166)), not_null(z_165));
                      {
                        g_166 = t;
                        if(((f_166 != NULL) && (f_166 != g_166)))
                          _fail(g_166);
                        else
                          f_166 = g_166;
                      }
                      t = not_null(f_166);
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
  ATerm r_166 = NULL;
  r_166 = t;
  q_166 :
  if(((ATgetType(r_166) == AT_LIST) && ATisEmpty(r_166)))
    {
      {
        ATerm t_166 = NULL,v_166 = NULL;
        ATerm t_53;
        t_53 = t;
        {
          ATerm u_166 = NULL;
          t = SSLgetAnnotations(not_null(r_166));
          {
            u_166 = t;
            if(((t_166 != NULL) && (t_166 != u_166)))
              _fail(u_166);
            else
              t_166 = u_166;
          }
        }
        t = t_53;
        {
          ATerm w_166 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_166));
          {
            w_166 = t;
            if(((v_166 != NULL) && (v_166 != w_166)))
              _fail(w_166);
            else
              v_166 = w_166;
          }
          t = not_null(v_166);
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
  ATerm c_167 = NULL,e_167 = NULL,f_167 = NULL;
  c_167 = t;
  b_167 :
  if(match_cons(c_167, sym__2))
    {
      e_167 = ATgetArgument(c_167, 0);
      f_167 = ATgetArgument(c_167, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_n_44, not_null(e_167), not_null(f_167));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm g_120 (ATerm))
{
  ATerm u_53;
  u_53 = t;
  {
    ATerm u_13 (ATerm t)
    {
      t = term_v_53;
      t = g_120(t);
      return(t);
    }
    t = try_1(t, u_13);
  }
  t = u_53;
  {
    ATerm v_13 (ATerm t)
    {
      ATerm n_167 = NULL;
      ATerm w_53;
      w_53 = t;
      {
        ATerm l_167 = NULL;
        ATerm m_167 = NULL;
        m_167 = t;
        if(((l_167 != NULL) && (l_167 != m_167)))
          _fail(m_167);
        else
          l_167 = m_167;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_49, not_null(l_167));
          t = set_config_0(t);
        }
      }
      t = w_53;
      {
        ATerm o_167 = NULL;
        o_167 = t;
        if(((n_167 != NULL) && (n_167 != o_167)))
          _fail(o_167);
        else
          n_167 = o_167;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_167));
      }
      return(t);
    }
    ATerm c_14 (ATerm t)
    {
      ATerm x_53 = t;
      int y_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_53 = t;
          int a_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(a_54);
            }
          else
            {
              t = z_53;
              {
                t = g_120(t);
                t = Cons_2(t, _id, c_14);
              }
            }
          ;
          LocalPopChoice(y_53);
        }
      else
        {
          t = x_53;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, v_13, c_14);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm u_167 = NULL,v_167 = NULL,w_167 = NULL;
  ATerm i_54;
  i_54 = t;
  {
    ATerm x_167 = NULL,y_167 = NULL,z_167 = NULL,a_168 = NULL;
    x_167 = t;
    t_167 :
    if(match_cons(x_167, sym__3))
      {
        y_167 = ATgetArgument(x_167, 0);
        z_167 = ATgetArgument(x_167, 1);
        a_168 = ATgetArgument(x_167, 2);
        {
          if(((u_167 != NULL) && (u_167 != y_167)))
            _fail(y_167);
          else
            u_167 = y_167;
          {
            if(((v_167 != NULL) && (v_167 != z_167)))
              _fail(z_167);
            else
              v_167 = z_167;
            {
              if(((w_167 != NULL) && (w_167 != a_168)))
                _fail(a_168);
              else
                w_167 = a_168;
              t = SSL_table_put(not_null(u_167), not_null(v_167), not_null(w_167));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = i_54;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_120 (ATerm))
{
  ATerm d_168 = NULL;
  ATerm j_54;
  j_54 = t;
  {
    t = term_k_54;
    t = table_put_0(t);
  }
  t = j_54;
  {
    ATerm d_14 (ATerm t)
    {
      ATerm n_54 = t;
      int o_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_120(t);
          ;
          LocalPopChoice(o_54);
        }
      else
        {
          t = n_54;
          {
            ATerm r_54 = t;
            int s_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(s_54);
              }
            else
              {
                t = r_54;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, d_14);
    {
      ATerm e_14 (ATerm t)
      {
        ATerm t_54 = t;
        int u_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_54;
            v_54 = t;
            {
              ATerm w_54 = t;
              int x_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_z_50;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(x_54);
                }
              else
                {
                  t = w_54;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = v_54;
            {
              t = system_usage_0(t);
              {
                t = term_y_25;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(u_54);
          }
        else
          {
            t = t_54;
            {
              ATerm y_54 = t;
              int a_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_55;
                  v_55 = t;
                  {
                    t = term_x_52;
                    t = get_config_0(t);
                  }
                  t = v_55;
                  {
                    t = system_about_0(t);
                    {
                      t = term_y_25;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(a_55);
                }
              else
                {
                  t = y_54;
                  {
                    ATerm f_14 (ATerm t)
                    {
                      ATerm g_14 (ATerm t)
                      {
                        ATerm e_168 = NULL;
                        e_168 = t;
                        if(((d_168 != NULL) && (d_168 != e_168)))
                          _fail(e_168);
                        else
                          d_168 = e_168;
                        return(t);
                      }
                      t = Undefined_1(t, g_14);
                      return(t);
                    }
                    t = option_defined_1(t, f_14);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_r_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_168)), term_w_55));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_g_24;
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
      t = try_1(t, e_14);
      {
        ATerm e_56;
        e_56 = t;
        {
          t = term_o_51;
          t = table_destroy_0(t);
        }
        t = e_56;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm f_118 (ATerm), ATerm g_118 (ATerm), ATerm h_118 (ATerm), ATerm i_118 (ATerm))
{
  t = parse_options_1(t, f_118);
  {
    t = store_options_0(t);
    {
      t = h_118(t);
      {
        ATerm f_56 = t;
        int g_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, g_118);
            ;
            LocalPopChoice(g_56);
          }
        else
          {
            t = f_56;
            {
              ATerm h_56 = t;
              int i_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_118(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(i_56);
                }
              else
                {
                  t = h_56;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm u_117 (ATerm), ATerm v_117 (ATerm), ATerm w_117 (ATerm), ATerm x_117 (ATerm))
{
  ATerm h_14 (ATerm t)
  {
    ATerm j_56 = t;
    int k_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_117(t);
        ;
        LocalPopChoice(k_56);
      }
    else
      {
        t = j_56;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm i_14 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, u_117);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, h_14, w_117, x_117, i_14);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm o_117 (ATerm), ATerm p_117 (ATerm), ATerm q_117 (ATerm))
{
  ATerm l_14 (ATerm t)
  {
    ATerm p_14 (ATerm t)
    {
      ATerm l_56;
      l_56 = t;
      {
        ATerm h_168 = NULL;
        ATerm i_168 = NULL;
        t = term_r_49;
        {
          t = get_config_0(t);
          {
            i_168 = t;
            if(((h_168 != NULL) && (h_168 != i_168)))
              _fail(i_168);
            else
              h_168 = i_168;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_23, (ATerm) ATinsert(ATempty, not_null(h_168)));
          t = printnl_0(t);
        }
      }
      t = l_56;
      return(t);
    }
    t = if_verbose2_1(t, p_14);
    return(t);
  }
  t = iowrap_4(t, o_117, p_117, q_117, l_14);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm m_117 (ATerm), ATerm n_117 (ATerm))
{
  t = iowrap_3(t, m_117, n_117, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm j_117 (ATerm))
{
  ATerm w_14 (ATerm t)
  {
    t = _2(t, _id, j_117);
    return(t);
  }
  t = iowrap_2(t, w_14, _fail);
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  t = iowrap_1(t, frontend_transformation_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = frontend_0(t);
  return(t);
}
