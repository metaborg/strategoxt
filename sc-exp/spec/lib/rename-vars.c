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
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Anno_2;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  init_constant_terms();
}
ATerm term_p_21;
ATerm term_r_20;
ATerm term_j_20;
ATerm term_g_20;
ATerm term_d_20;
ATerm term_z_19;
ATerm term_n_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_m_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_l_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_o_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_x_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_k_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_h_10;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_n_8;
ATerm term_m_8;
void init_constant_terms (void)
{
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_q_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_m_8);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym__2, term_d_14, term_m_8);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym__2, term_x_17, term_b_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym__2, term_b_19, term_m_8);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym__2, term_e_19, term_m_8);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym__2, term_l_16, term_m_8);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym__3, term_x_17, term_b_18, (ATerm) ATempty);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm s_75 (ATerm));
ATerm Rec_2 (ATerm, ATerm g_67 (ATerm), ATerm h_67 (ATerm));
ATerm SDef_3 (ATerm, ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm a_69 (ATerm));
ATerm Let_2 (ATerm, ATerm j_66 (ATerm), ATerm k_66 (ATerm));
ATerm sboundin_3 (ATerm, ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm v_75 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm i_66 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm o_75 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm q_65 (ATerm));
ATerm Scope_2 (ATerm, ATerm t_66 (ATerm), ATerm u_66 (ATerm));
ATerm tboundin_3 (ATerm, ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm r_75 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm z_84 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm q_87 (ATerm));
ATerm crush_3 (ATerm, ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm d_85 (ATerm), ATerm e_85 (ATerm));
ATerm diff_1 (ATerm, ATerm v_84 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm w_93 (ATerm), ATerm x_93 (ATerm));
ATerm for_3 (ATerm, ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm b_94 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm q_91 (ATerm), ATerm r_91 (ATerm), ATerm s_91 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm m_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm y_89 (ATerm), ATerm z_89 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm d_81 (ATerm));
ATerm zip_1 (ATerm, ATerm f_81 (ATerm));
ATerm new_0 (ATerm);
ATerm RnBinding_2 (ATerm, ATerm s_89 (ATerm), ATerm t_89 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm d_90 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm w_90 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm g_90 (ATerm));
ATerm rename_4 (ATerm, ATerm n_89 (ATerm, ATerm (ATerm)), ATerm o_89 (ATerm), ATerm p_89 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm q_89 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm _2 (ATerm, ATerm a_61 (ATerm), ATerm b_61 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_83 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm o_103 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm q_97 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm d_94 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_97 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm a_80 (ATerm), ATerm b_80 (ATerm));
ATerm input_file_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm m_87 (ATerm), ATerm n_87 (ATerm));
ATerm crush_2 (ATerm, ATerm k_85 (ATerm), ATerm l_85 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm n_103 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm b_95 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm v_99 (ATerm));
ATerm map_1 (ATerm, ATerm p_82 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm u_99 (ATerm));
ATerm Program_1 (ATerm, ATerm y_73 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm z_73 (ATerm));
ATerm fetch_1 (ATerm, ATerm y_82 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_98 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_79 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_99 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm j_62 (ATerm), ATerm k_62 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_99 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_99 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm d_95 (ATerm), ATerm e_95 (ATerm), ATerm f_95 (ATerm), ATerm g_95 (ATerm));
ATerm iowrap_4 (ATerm, ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_94 (ATerm));
ATerm iowrap_3 (ATerm, ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm o_94 (ATerm));
ATerm iowrap_2 (ATerm, ATerm k_94 (ATerm), ATerm l_94 (ATerm));
ATerm iowrap_1 (ATerm, ATerm h_94 (ATerm));
ATerm rename_vars_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,w_3 = NULL;
  k_3 = t;
  j_3 :
  if(((ATgetType(k_3) == AT_LIST) && !(ATisEmpty(k_3))))
    {
      l_3 = ATgetFirst((ATermList) k_3);
      w_3 = (ATerm) ATgetNext((ATermList) k_3);
      t = not_null(l_3);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm s_75 (ATerm))
{
  ATerm y_4 = t;
  int z_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_0 (ATerm t)
      {
        t = split_2(t, _id, s_75);
        {
          ATerm e_0 (ATerm t)
          {
            ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL;
            i_4 = t;
            d_4 :
            if(match_cons(i_4, sym__2))
              {
                j_4 = ATgetArgument(i_4, 0);
                n_4 = ATgetArgument(i_4, 1);
                e_4 :
                if(match_cons(j_4, sym_SDef_3))
                  {
                    k_4 = ATgetArgument(j_4, 0);
                    l_4 = ATgetArgument(j_4, 1);
                    m_4 = ATgetArgument(j_4, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(n_4), not_null(l_4), not_null(m_4));
                  }
                else
                  {
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
      LocalPopChoice(z_4);
    }
  else
    {
      t = y_4;
      {
        ATerm a_5 = t;
        int b_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 (ATerm t)
            {
              t = split_2(t, _id, s_75);
              {
                ATerm h_0 (ATerm t)
                {
                  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
                  r_4 = t;
                  g_4 :
                  if(match_cons(r_4, sym__2))
                    {
                      s_4 = ATgetArgument(r_4, 0);
                      v_4 = ATgetArgument(r_4, 1);
                      h_4 :
                      if(match_cons(s_4, sym_VarDec_2))
                        {
                          t_4 = ATgetArgument(s_4, 0);
                          u_4 = ATgetArgument(s_4, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(v_4), not_null(u_4));
                        }
                      else
                        {
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
            LocalPopChoice(b_5);
          }
        else
          {
            t = a_5;
            {
              ATerm n_0 (ATerm t)
              {
                t = s_75(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, n_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm g_67 (ATerm), ATerm h_67 (ATerm))
{
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
  h_5 = t;
  g_5 :
  if(match_cons(h_5, sym_Rec_2))
    {
      i_5 = ATgetArgument(h_5, 0);
      j_5 = ATgetArgument(h_5, 1);
      {
        ATerm n_5 = NULL,p_5 = NULL;
        ATerm o_5 = NULL;
        t = SSLgetAnnotations(not_null(h_5));
        {
          o_5 = t;
          if(((n_5 != NULL) && (n_5 != o_5)))
            _fail(o_5);
          else
            n_5 = o_5;
        }
        {
          t = not_null(i_5);
          {
            ATerm r_5 = NULL;
            t = g_67(t);
            {
              p_5 = t;
              {
                t = not_null(j_5);
                {
                  ATerm t_5 = NULL;
                  t = h_67(t);
                  {
                    r_5 = t;
                    {
                      ATerm u_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(p_5), not_null(r_5)), not_null(n_5));
                      {
                        u_5 = t;
                        if(((t_5 != NULL) && (t_5 != u_5)))
                          _fail(u_5);
                        else
                          t_5 = u_5;
                      }
                      t = not_null(t_5);
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
ATerm SDef_3 (ATerm t, ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm a_69 (ATerm))
{
  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL;
  h_6 = t;
  g_6 :
  if(match_cons(h_6, sym_SDef_3))
    {
      i_6 = ATgetArgument(h_6, 0);
      j_6 = ATgetArgument(h_6, 1);
      k_6 = ATgetArgument(h_6, 2);
      {
        ATerm p_6 = NULL,r_6 = NULL;
        ATerm q_6 = NULL;
        t = SSLgetAnnotations(not_null(h_6));
        {
          q_6 = t;
          if(((p_6 != NULL) && (p_6 != q_6)))
            _fail(q_6);
          else
            p_6 = q_6;
        }
        {
          t = not_null(i_6);
          {
            ATerm t_6 = NULL;
            t = y_68(t);
            {
              r_6 = t;
              {
                t = not_null(j_6);
                {
                  ATerm v_6 = NULL;
                  t = z_68(t);
                  {
                    t_6 = t;
                    {
                      t = not_null(k_6);
                      {
                        ATerm x_6 = NULL;
                        t = a_69(t);
                        {
                          v_6 = t;
                          {
                            ATerm y_6 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(r_6), not_null(t_6), not_null(v_6)), not_null(p_6));
                            {
                              y_6 = t;
                              if(((x_6 != NULL) && (x_6 != y_6)))
                                _fail(y_6);
                              else
                                x_6 = y_6;
                            }
                            t = not_null(x_6);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm j_66 (ATerm), ATerm k_66 (ATerm))
{
  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
  l_7 = t;
  k_7 :
  if(match_cons(l_7, sym_Let_2))
    {
      m_7 = ATgetArgument(l_7, 0);
      n_7 = ATgetArgument(l_7, 1);
      {
        ATerm r_7 = NULL,t_7 = NULL;
        ATerm s_7 = NULL;
        t = SSLgetAnnotations(not_null(l_7));
        {
          s_7 = t;
          if(((r_7 != NULL) && (r_7 != s_7)))
            _fail(s_7);
          else
            r_7 = s_7;
        }
        {
          t = not_null(m_7);
          {
            ATerm v_7 = NULL;
            t = j_66(t);
            {
              t_7 = t;
              {
                t = not_null(n_7);
                {
                  ATerm x_7 = NULL;
                  t = k_66(t);
                  {
                    v_7 = t;
                    {
                      ATerm y_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(t_7), not_null(v_7)), not_null(r_7));
                      {
                        y_7 = t;
                        if(((x_7 != NULL) && (x_7 != y_7)))
                          _fail(y_7);
                        else
                          x_7 = y_7;
                      }
                      t = not_null(x_7);
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
ATerm sboundin_3 (ATerm t, ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm v_75 (ATerm))
{
  ATerm c_5 = t;
  int d_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, t_75, t_75);
      ;
      LocalPopChoice(d_5);
    }
  else
    {
      t = c_5;
      {
        ATerm e_5 = t;
        int f_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, v_75, v_75, t_75);
            ;
            LocalPopChoice(f_5);
          }
        else
          {
            t = e_5;
            t = Rec_2(t, v_75, t_75);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
  g_8 = t;
  f_8 :
  if(match_cons(g_8, sym_Rec_2))
    {
      h_8 = ATgetArgument(g_8, 0);
      i_8 = ATgetArgument(g_8, 1);
      t = (ATerm) ATinsert(ATempty, not_null(h_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
  q_8 = t;
  p_8 :
  if(match_cons(q_8, sym_SDef_3))
    {
      r_8 = ATgetArgument(q_8, 0);
      s_8 = ATgetArgument(q_8, 1);
      t_8 = ATgetArgument(q_8, 2);
      {
        t = not_null(s_8);
        {
          ATerm o_0 (ATerm t)
          {
            ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
            x_8 = t;
            o_8 :
            if(match_cons(x_8, sym_VarDec_2))
              {
                y_8 = ATgetArgument(x_8, 0);
                z_8 = ATgetArgument(x_8, 1);
                t = not_null(y_8);
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
ATerm Bind1_0 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
  h_9 = t;
  g_9 :
  if(match_cons(h_9, sym_Let_2))
    {
      i_9 = ATgetArgument(h_9, 0);
      j_9 = ATgetArgument(h_9, 1);
      {
        t = not_null(i_9);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
            m_9 = t;
            f_9 :
            if(match_cons(m_9, sym_SDef_3))
              {
                n_9 = ATgetArgument(m_9, 0);
                o_9 = ATgetArgument(m_9, 1);
                p_9 = ATgetArgument(m_9, 2);
                t = not_null(n_9);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, p_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm i_66 (ATerm))
{
  ATerm a_10 = NULL,b_10 = NULL;
  a_10 = t;
  z_9 :
  if(match_cons(a_10, sym_SVar_1))
    {
      b_10 = ATgetArgument(a_10, 0);
      {
        ATerm e_10 = NULL,g_10 = NULL;
        ATerm f_10 = NULL;
        t = SSLgetAnnotations(not_null(a_10));
        {
          f_10 = t;
          if(((e_10 != NULL) && (e_10 != f_10)))
            _fail(f_10);
          else
            e_10 = f_10;
        }
        {
          t = not_null(b_10);
          {
            ATerm i_10 = NULL;
            t = i_66(t);
            {
              g_10 = t;
              {
                ATerm j_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(g_10)), not_null(e_10));
                {
                  j_10 = t;
                  if(((i_10 != NULL) && (i_10 != j_10)))
                    _fail(j_10);
                  else
                    i_10 = j_10;
                }
                t = not_null(i_10);
              }
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
    ATerm k_5 = t;
    int l_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(l_5);
      }
    else
      {
        t = k_5;
        {
          ATerm m_5 = t;
          int q_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(q_5);
            }
          else
            {
              t = m_5;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, q_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm o_75 (ATerm))
{
  t = Scope_2(t, o_75, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm q_65 (ATerm))
{
  ATerm t_10 = NULL,u_10 = NULL;
  t_10 = t;
  s_10 :
  if(match_cons(t_10, sym_DynamicRules_1))
    {
      u_10 = ATgetArgument(t_10, 0);
      {
        ATerm x_10 = NULL,z_10 = NULL;
        ATerm y_10 = NULL;
        t = SSLgetAnnotations(not_null(t_10));
        {
          y_10 = t;
          if(((x_10 != NULL) && (x_10 != y_10)))
            _fail(y_10);
          else
            x_10 = y_10;
        }
        {
          t = not_null(u_10);
          {
            ATerm b_11 = NULL;
            t = q_65(t);
            {
              z_10 = t;
              {
                ATerm c_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(z_10)), not_null(x_10));
                {
                  c_11 = t;
                  if(((b_11 != NULL) && (b_11 != c_11)))
                    _fail(c_11);
                  else
                    b_11 = c_11;
                }
                t = not_null(b_11);
              }
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
ATerm Scope_2 (ATerm t, ATerm t_66 (ATerm), ATerm u_66 (ATerm))
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
  n_11 = t;
  m_11 :
  if(match_cons(n_11, sym_Scope_2))
    {
      o_11 = ATgetArgument(n_11, 0);
      p_11 = ATgetArgument(n_11, 1);
      {
        ATerm t_11 = NULL,v_11 = NULL;
        ATerm u_11 = NULL;
        t = SSLgetAnnotations(not_null(n_11));
        {
          u_11 = t;
          if(((t_11 != NULL) && (t_11 != u_11)))
            _fail(u_11);
          else
            t_11 = u_11;
        }
        {
          t = not_null(o_11);
          {
            ATerm x_11 = NULL;
            t = t_66(t);
            {
              v_11 = t;
              {
                t = not_null(p_11);
                {
                  ATerm z_11 = NULL;
                  t = u_66(t);
                  {
                    x_11 = t;
                    {
                      ATerm a_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(v_11), not_null(x_11)), not_null(t_11));
                      {
                        a_12 = t;
                        if(((z_11 != NULL) && (z_11 != a_12)))
                          _fail(a_12);
                        else
                          z_11 = a_12;
                      }
                      t = not_null(z_11);
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
ATerm tboundin_3 (ATerm t, ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm r_75 (ATerm))
{
  ATerm s_5 = t;
  int v_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, r_75, p_75);
      ;
      LocalPopChoice(v_5);
    }
  else
    {
      t = s_5;
      t = DynamicRules_1(t, p_75);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL;
  i_12 = t;
  h_12 :
  if(match_cons(i_12, sym_DynamicRules_1))
    {
      j_12 = ATgetArgument(i_12, 0);
      {
        t = not_null(j_12);
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
  ATerm o_12 = NULL,p_12 = NULL;
  o_12 = t;
  n_12 :
  if(match_cons(o_12, sym_Var_1))
    {
      p_12 = ATgetArgument(o_12, 0);
      t = (ATerm) ATinsert(ATempty, not_null(p_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm z_84 (ATerm))
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
  u_12 = t;
  t_12 :
  if(match_cons(u_12, sym__2))
    {
      v_12 = ATgetArgument(u_12, 0);
      w_12 = ATgetArgument(u_12, 1);
      {
        t = not_null(v_12);
        {
          ATerm a_13 (ATerm t)
          {
            ATerm w_5 = t;
            int x_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(w_12);
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
                      ATerm r_0 (ATerm t)
                      {
                        t = not_null(w_12);
                        return(t);
                      }
                      t = HdMember_p__2(t, z_84, r_0);
                      t = a_13(t);
                      ;
                      LocalPopChoice(z_5);
                    }
                  else
                    {
                      t = y_5;
                      t = Cons_2(t, _id, a_13);
                    }
                }
              }
            return(t);
          }
          t = a_13(t);
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
ATerm foldr_3 (ATerm t, ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm q_87 (ATerm))
{
  ATerm a_6 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_87(t);
      ;
      LocalPopChoice(b_6);
    }
  else
    {
      t = a_6;
      {
        ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
        f_13 = t;
        e_13 :
        if(((ATgetType(f_13) == AT_LIST) && !(ATisEmpty(f_13))))
          {
            g_13 = ATgetFirst((ATermList) f_13);
            h_13 = (ATerm) ATgetNext((ATermList) f_13);
            {
              ATerm k_13 = NULL,m_13 = NULL;
              ATerm c_6;
              c_6 = t;
              {
                ATerm l_13 = NULL;
                t = not_null(g_13);
                {
                  t = q_87(t);
                  {
                    l_13 = t;
                    if(((k_13 != NULL) && (k_13 != l_13)))
                      _fail(l_13);
                    else
                      k_13 = l_13;
                  }
                }
              }
              t = c_6;
              {
                ATerm n_13 = NULL;
                t = not_null(h_13);
                {
                  t = foldr_3(t, o_87, p_87, q_87);
                  {
                    n_13 = t;
                    if(((m_13 != NULL) && (m_13 != n_13)))
                      _fail(n_13);
                    else
                      m_13 = n_13;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_13), not_null(m_13));
                  t = p_87(t);
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
ATerm crush_3 (ATerm t, ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm))
{
  ATerm v_13 = NULL;
  ATerm x_13 = NULL;
  v_13 = t;
  {
    ATerm y_13 = NULL;
    ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
    t = not_null(v_13);
    {
      y_13 = t;
      {
        t = SSL_explode_term(not_null(y_13));
        {
          a_14 = t;
          u_13 :
          if(match_cons(a_14, sym__2))
            {
              b_14 = ATgetArgument(a_14, 0);
              c_14 = ATgetArgument(a_14, 1);
              if(((x_13 != NULL) && (x_13 != c_14)))
                _fail(c_14);
              else
                x_13 = c_14;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_13);
      t = foldr_3(t, m_85, n_85, o_85);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  i_14 = t;
  h_14 :
  if(match_cons(i_14, sym__2))
    {
      j_14 = ATgetArgument(i_14, 0);
      k_14 = ATgetArgument(i_14, 1);
      if(((j_14 != NULL) && (j_14 != k_14)))
        _fail(k_14);
      else
        j_14 = k_14;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm d_85 (ATerm), ATerm e_85 (ATerm))
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL;
  q_14 = t;
  p_14 :
  if(((ATgetType(q_14) == AT_LIST) && !(ATisEmpty(q_14))))
    {
      r_14 = ATgetFirst((ATermList) q_14);
      s_14 = (ATerm) ATgetNext((ATermList) q_14);
      {
        t = e_85(t);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm v_14 = NULL;
            v_14 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_14), not_null(v_14));
              t = d_85(t);
            }
            return(t);
          }
          t = fetch_1(t, s_0);
        }
        t = not_null(s_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm v_84 (ATerm))
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  b_15 = t;
  a_15 :
  if(match_cons(b_15, sym__2))
    {
      c_15 = ATgetArgument(b_15, 0);
      d_15 = ATgetArgument(b_15, 1);
      {
        t = not_null(c_15);
        {
          ATerm h_15 (ATerm t)
          {
            ATerm d_6 = t;
            int e_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(e_6);
              }
            else
              {
                t = d_6;
                {
                  ATerm f_6 = t;
                  int l_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_0 (ATerm t)
                      {
                        t = not_null(d_15);
                        return(t);
                      }
                      t = HdMember_p__2(t, v_84, t_0);
                      t = h_15(t);
                      ;
                      LocalPopChoice(l_6);
                    }
                  else
                    {
                      t = f_6;
                      t = Cons_2(t, _id, h_15);
                    }
                }
              }
            return(t);
          }
          t = h_15(t);
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
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
  l_15 = t;
  j_15 :
  if(match_cons(l_15, sym__2))
    {
      m_15 = ATgetArgument(l_15, 0);
      n_15 = ATgetArgument(l_15, 1);
      k_15 :
      if(((ATgetType(n_15) == AT_LIST) && !(ATisEmpty(n_15))))
        {
          o_15 = ATgetFirst((ATermList) n_15);
          p_15 = (ATerm) ATgetNext((ATermList) n_15);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_15)), not_null(o_15)), not_null(p_15));
        }
      else
        {
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
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL;
  e_16 = t;
  c_16 :
  if(((ATgetType(e_16) == AT_LIST) && !(ATisEmpty(e_16))))
    {
      f_16 = ATgetFirst((ATermList) e_16);
      i_16 = (ATerm) ATgetNext((ATermList) e_16);
      d_16 :
      if(match_cons(f_16, sym__2))
        {
          g_16 = ATgetArgument(f_16, 0);
          h_16 = ATgetArgument(f_16, 1);
          {
            ATerm m_16 = NULL,n_16 = NULL,t_16 = NULL,z_16 = NULL;
            ATerm m_6;
            m_6 = t;
            {
              ATerm o_16 = NULL;
              ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
              t = not_null(h_16);
              {
                o_16 = t;
                {
                  t = SSL_explode_term(not_null(o_16));
                  {
                    q_16 = t;
                    x_15 :
                    if(match_cons(q_16, sym__2))
                      {
                        r_16 = ATgetArgument(q_16, 0);
                        s_16 = ATgetArgument(q_16, 1);
                        {
                          if(((m_16 != NULL) && (m_16 != r_16)))
                            _fail(r_16);
                          else
                            m_16 = r_16;
                          if(((n_16 != NULL) && (n_16 != s_16)))
                            _fail(s_16);
                          else
                            n_16 = s_16;
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
            t = m_6;
            {
              ATerm n_6;
              n_6 = t;
              {
                ATerm u_16 = NULL;
                ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
                t = not_null(g_16);
                {
                  u_16 = t;
                  {
                    t = SSL_explode_term(not_null(u_16));
                    {
                      w_16 = t;
                      a_16 :
                      if(match_cons(w_16, sym__2))
                        {
                          x_16 = ATgetArgument(w_16, 0);
                          y_16 = ATgetArgument(w_16, 1);
                          {
                            if(((m_16 != NULL) && (m_16 != x_16)))
                              _fail(x_16);
                            else
                              m_16 = x_16;
                            if(((t_16 != NULL) && (t_16 != y_16)))
                              _fail(y_16);
                            else
                              t_16 = y_16;
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
              t = n_6;
              {
                ATerm a_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_16), not_null(n_16));
                {
                  t = zip_1(t, _id);
                  {
                    a_17 = t;
                    if(((z_16 != NULL) && (z_16 != a_17)))
                      _fail(a_17);
                    else
                      z_16 = a_17;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_16), not_null(i_16));
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
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  k_17 = t;
  i_17 :
  if(((ATgetType(k_17) == AT_LIST) && !(ATisEmpty(k_17))))
    {
      l_17 = ATgetFirst((ATermList) k_17);
      o_17 = (ATerm) ATgetNext((ATermList) k_17);
      j_17 :
      if(match_cons(l_17, sym__2))
        {
          m_17 = ATgetArgument(l_17, 0);
          n_17 = ATgetArgument(l_17, 1);
          {
            ATerm q_17 = NULL;
            if(((m_17 != NULL) && (m_17 != n_17)))
              _fail(n_17);
            else
              m_17 = n_17;
            {
              if(((q_17 != NULL) && (q_17 != o_17)))
                _fail(o_17);
              else
                q_17 = o_17;
              t = not_null(q_17);
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
ATerm while_not_2 (ATerm t, ATerm w_93 (ATerm), ATerm x_93 (ATerm))
{
  ATerm s_17 (ATerm t)
  {
    ATerm o_6 = t;
    int s_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_93(t);
        ;
        LocalPopChoice(s_6);
      }
    else
      {
        t = o_6;
        {
          t = x_93(t);
          t = s_17(t);
        }
      }
    return(t);
  }
  t = s_17(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm b_94 (ATerm))
{
  t = z_93(t);
  t = while_not_2(t, a_94, b_94);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm u_6 = t;
  int w_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_0 (ATerm t)
      {
        ATerm u_17 = NULL;
        u_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(u_17));
        return(t);
      }
      ATerm v_0 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm w_0 (ATerm t)
      {
        ATerm z_6 = t;
        int a_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_0 (ATerm t)
            {
              ATerm b_7 = t;
              int c_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(c_7);
                }
              else
                {
                  t = b_7;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, x_0);
            ;
            LocalPopChoice(a_7);
          }
        else
          {
            t = z_6;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, u_0, v_0, w_0);
      ;
      LocalPopChoice(w_6);
    }
  else
    {
      t = u_6;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm q_91 (ATerm), ATerm r_91 (ATerm), ATerm s_91 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm a_18 (ATerm t)
  {
    ATerm d_7 = t;
    int e_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_91(t);
        ;
        LocalPopChoice(e_7);
      }
    else
      {
        t = d_7;
        {
          ATerm f_7 = t;
          int g_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_17 = NULL;
              ATerm h_7;
              h_7 = t;
              {
                ATerm z_17 = NULL;
                t = r_91(t);
                {
                  z_17 = t;
                  if(((y_17 != NULL) && (y_17 != z_17)))
                    _fail(z_17);
                  else
                    y_17 = z_17;
                }
              }
              t = h_7;
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = not_null(y_17);
                    return(t);
                  }
                  t = split_2(t, a_18, a_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm z_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = s_91(t, y_0, a_18, z_0);
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, b_1, union_0, _id);
                }
              }
              ;
              LocalPopChoice(g_7);
            }
          else
            {
              t = f_7;
              {
                ATerm c_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, c_1, union_0, a_18);
              }
            }
        }
      }
    return(t);
  }
  t = a_18(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm i_7 = t;
    int j_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(j_7);
      }
    else
      {
        t = i_7;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, d_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
  j_18 = t;
  e_18 :
  if(match_cons(j_18, sym_LRule_1))
    {
      k_18 = ATgetArgument(j_18, 0);
      f_18 :
      if(match_cons(k_18, sym_Rule_3))
        {
          g_18 = ATgetArgument(k_18, 0);
          h_18 = ATgetArgument(k_18, 1);
          i_18 = ATgetArgument(k_18, 2);
          {
            t = not_null(g_18);
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
      if(match_cons(j_18, sym_Scope_2))
        {
          k_18 = ATgetArgument(j_18, 0);
          l_18 = ATgetArgument(j_18, 1);
          t = not_null(k_18);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm g_19 = NULL,h_19 = NULL;
  g_19 = t;
  f_19 :
  if(match_cons(g_19, sym_Var_1))
    {
      h_19 = ATgetArgument(g_19, 0);
      {
        ATerm o_7 = t;
        int p_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_19 = NULL,m_19 = NULL;
            ATerm l_19 = NULL;
            t = SSLgetAnnotations(not_null(g_19));
            {
              l_19 = t;
              if(((k_19 != NULL) && (k_19 != l_19)))
                _fail(l_19);
              else
                k_19 = l_19;
            }
            {
              t = not_null(h_19);
              {
                ATerm o_19 = NULL;
                t = m_0(t);
                {
                  m_19 = t;
                  {
                    ATerm p_19 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(m_19)), not_null(k_19));
                    {
                      p_19 = t;
                      if(((o_19 != NULL) && (o_19 != p_19)))
                        _fail(p_19);
                      else
                        o_19 = p_19;
                    }
                    t = not_null(o_19);
                  }
                }
              }
            }
            ;
            LocalPopChoice(p_7);
          }
        else
          {
            t = o_7;
            {
              ATerm q_7 = t;
              int u_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_19 = NULL,u_19 = NULL;
                  ATerm t_19 = NULL;
                  t = SSLgetAnnotations(not_null(g_19));
                  {
                    t_19 = t;
                    if(((s_19 != NULL) && (s_19 != t_19)))
                      _fail(t_19);
                    else
                      s_19 = t_19;
                  }
                  {
                    t = not_null(h_19);
                    {
                      ATerm w_19 = NULL;
                      t = m_0(t);
                      {
                        u_19 = t;
                        {
                          ATerm x_19 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(u_19)), not_null(s_19));
                          {
                            x_19 = t;
                            if(((w_19 != NULL) && (w_19 != x_19)))
                              _fail(x_19);
                            else
                              w_19 = x_19;
                          }
                          t = not_null(w_19);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(u_7);
                }
              else
                {
                  t = q_7;
                  {
                    ATerm a_20 = NULL,c_20 = NULL;
                    ATerm b_20 = NULL;
                    t = SSLgetAnnotations(not_null(g_19));
                    {
                      b_20 = t;
                      if(((a_20 != NULL) && (a_20 != b_20)))
                        _fail(b_20);
                      else
                        a_20 = b_20;
                    }
                    {
                      t = not_null(h_19);
                      {
                        ATerm e_20 = NULL;
                        t = m_0(t);
                        {
                          c_20 = t;
                          {
                            ATerm f_20 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(c_20)), not_null(a_20));
                            {
                              f_20 = t;
                              if(((e_20 != NULL) && (e_20 != f_20)))
                                _fail(f_20);
                              else
                                e_20 = f_20;
                            }
                            t = not_null(e_20);
                          }
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
ATerm DistBinding_2 (ATerm t, ATerm y_89 (ATerm), ATerm z_89 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL;
  w_20 = t;
  v_20 :
  if(match_cons(w_20, sym__3))
    {
      x_20 = ATgetArgument(w_20, 0);
      y_20 = ATgetArgument(w_20, 1);
      z_20 = ATgetArgument(w_20, 2);
      {
        t = not_null(x_20);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm d_21 = NULL;
            d_21 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_21), not_null(z_20));
              t = y_89(t);
            }
            return(t);
          }
          ATerm f_1 (ATerm t)
          {
            ATerm f_21 = NULL;
            f_21 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_21), not_null(y_20));
              t = y_89(t);
            }
            return(t);
          }
          t = z_89(t, e_1, f_1, _id);
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
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
  m_21 = t;
  l_21 :
  if(match_cons(m_21, sym__2))
    {
      n_21 = ATgetArgument(m_21, 0);
      o_21 = ATgetArgument(m_21, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_21)), not_null(n_21));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
  w_21 = t;
  t_21 :
  if(match_cons(w_21, sym__2))
    {
      x_21 = ATgetArgument(w_21, 0);
      a_22 = ATgetArgument(w_21, 1);
      u_21 :
      if(((ATgetType(x_21) == AT_LIST) && !(ATisEmpty(x_21))))
        {
          y_21 = ATgetFirst((ATermList) x_21);
          z_21 = (ATerm) ATgetNext((ATermList) x_21);
          v_21 :
          if(((ATgetType(a_22) == AT_LIST) && !(ATisEmpty(a_22))))
            {
              b_22 = ATgetFirst((ATermList) a_22);
              c_22 = (ATerm) ATgetNext((ATermList) a_22);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(y_21), not_null(b_22)), (ATerm) ATmakeAppl(sym__2, not_null(z_21), not_null(c_22)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
  m_22 = t;
  j_22 :
  if(match_cons(m_22, sym__2))
    {
      n_22 = ATgetArgument(m_22, 0);
      o_22 = ATgetArgument(m_22, 1);
      k_22 :
      if(((ATgetType(n_22) == AT_LIST) && ATisEmpty(n_22)))
        {
          l_22 :
          if(((ATgetType(o_22) == AT_LIST) && ATisEmpty(o_22)))
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
ATerm genzip_4 (ATerm t, ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm d_81 (ATerm))
{
  ATerm q_22 (ATerm t)
  {
    ATerm w_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_81(t);
        ;
        LocalPopChoice(z_7);
      }
    else
      {
        t = w_7;
        {
          t = b_81(t);
          {
            t = _2(t, d_81, q_22);
            t = c_81(t);
          }
        }
      }
    return(t);
  }
  t = q_22(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm f_81 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, f_81);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm s_89 (ATerm), ATerm t_89 (ATerm, ATerm (ATerm)))
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym__2))
    {
      z_22 = ATgetArgument(y_22, 0);
      a_23 = ATgetArgument(y_22, 1);
      {
        ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,l_23 = NULL;
        ATerm a_8;
        a_8 = t;
        {
          ATerm g_23 = NULL;
          t = not_null(z_22);
          {
            ATerm h_23 = NULL;
            t = s_89(t);
            {
              g_23 = t;
              {
                if(((d_23 != NULL) && (d_23 != g_23)))
                  _fail(g_23);
                else
                  d_23 = g_23;
                {
                  ATerm i_23 = NULL,k_23 = NULL;
                  t = map_1(t, new_0);
                  {
                    h_23 = t;
                    {
                      if(((e_23 != NULL) && (e_23 != h_23)))
                        _fail(h_23);
                      else
                        e_23 = h_23;
                      {
                        ATerm j_23 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_23), not_null(e_23));
                        {
                          t = zip_1(t, _id);
                          {
                            j_23 = t;
                            if(((i_23 != NULL) && (i_23 != j_23)))
                              _fail(j_23);
                            else
                              i_23 = j_23;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_23), not_null(a_23));
                          {
                            t = conc_0(t);
                            {
                              k_23 = t;
                              if(((f_23 != NULL) && (f_23 != k_23)))
                                _fail(k_23);
                              else
                                f_23 = k_23;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = a_8;
        {
          ATerm m_23 = NULL;
          t = not_null(z_22);
          {
            ATerm g_1 (ATerm t)
            {
              t = not_null(e_23);
              return(t);
            }
            t = t_89(t, g_1);
            {
              m_23 = t;
              if(((l_23 != NULL) && (l_23 != m_23)))
                _fail(m_23);
              else
                l_23 = m_23;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(l_23), not_null(a_23), not_null(f_23));
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
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL;
  w_23 = t;
  u_23 :
  if(match_cons(w_23, sym__2))
    {
      x_23 = ATgetArgument(w_23, 0);
      y_23 = ATgetArgument(w_23, 1);
      v_23 :
      if(((ATgetType(y_23) == AT_LIST) && !(ATisEmpty(y_23))))
        {
          z_23 = ATgetFirst((ATermList) y_23);
          a_24 = (ATerm) ATgetNext((ATermList) y_23);
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_23), not_null(a_24));
        }
      else
        {
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
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL;
  i_24 = t;
  f_24 :
  if(match_cons(i_24, sym__2))
    {
      j_24 = ATgetArgument(i_24, 0);
      k_24 = ATgetArgument(i_24, 1);
      g_24 :
      if(((ATgetType(k_24) == AT_LIST) && !(ATisEmpty(k_24))))
        {
          l_24 = ATgetFirst((ATermList) k_24);
          o_24 = (ATerm) ATgetNext((ATermList) k_24);
          h_24 :
          if(match_cons(l_24, sym__2))
            {
              m_24 = ATgetArgument(l_24, 0);
              n_24 = ATgetArgument(l_24, 1);
              {
                ATerm q_24 = NULL;
                if(((j_24 != NULL) && (j_24 != m_24)))
                  _fail(m_24);
                else
                  j_24 = m_24;
                {
                  if(((q_24 != NULL) && (q_24 != n_24)))
                    _fail(n_24);
                  else
                    q_24 = n_24;
                  t = not_null(q_24);
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
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm d_90 (ATerm, ATerm (ATerm)))
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL;
  v_24 = t;
  u_24 :
  if(match_cons(v_24, sym__2))
    {
      w_24 = ATgetArgument(v_24, 0);
      x_24 = ATgetArgument(v_24, 1);
      {
        t = not_null(w_24);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm i_1 (ATerm t)
            {
              t = not_null(x_24);
              return(t);
            }
            t = split_2(t, _id, i_1);
            t = lookup_0(t);
            return(t);
          }
          t = d_90(t, h_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm w_90 (ATerm))
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  e_25 = t;
  d_25 :
  if(match_cons(e_25, sym__2))
    {
      f_25 = ATgetArgument(e_25, 0);
      g_25 = ATgetArgument(e_25, 1);
      {
        t = not_null(f_25);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm j_25 = NULL;
            j_25 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_25), not_null(g_25));
              t = w_90(t);
            }
            return(t);
          }
          t = _all(t, j_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm g_90 (ATerm))
{
  ATerm n_25 (ATerm t)
  {
    ATerm d_8 = t;
    int e_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_90(t);
        ;
        LocalPopChoice(e_8);
      }
    else
      {
        t = d_8;
        t = all_dist_1(t, n_25);
      }
    return(t);
  }
  t = n_25(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm n_89 (ATerm, ATerm (ATerm)), ATerm o_89 (ATerm), ATerm p_89 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm q_89 (ATerm, ATerm (ATerm)))
{
  ATerm p_25 = NULL;
  p_25 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_25), (ATerm) ATempty);
    {
      ATerm s_25 (ATerm t)
      {
        ATerm k_1 (ATerm t)
        {
          ATerm j_8 = t;
          int k_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, n_89);
              ;
              LocalPopChoice(k_8);
            }
          else
            {
              t = j_8;
              {
                t = RnBinding_2(t, o_89, q_89);
                t = DistBinding_2(t, s_25, p_89);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, k_1);
        return(t);
      }
      t = s_25(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm t_25 (ATerm t, ATerm u_25 (ATerm))
  {
    t = Scope_2(t, u_25, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, t_25);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm a_61 (ATerm), ATerm b_61 (ATerm))
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
  b_26 = t;
  a_26 :
  if(match_cons(b_26, sym__2))
    {
      c_26 = ATgetArgument(b_26, 0);
      d_26 = ATgetArgument(b_26, 1);
      {
        ATerm f_27 = NULL,h_27 = NULL;
        ATerm g_27 = NULL;
        t = SSLgetAnnotations(not_null(b_26));
        {
          g_27 = t;
          if(((f_27 != NULL) && (f_27 != g_27)))
            _fail(g_27);
          else
            f_27 = g_27;
        }
        {
          t = not_null(c_26);
          {
            ATerm j_27 = NULL;
            t = a_61(t);
            {
              h_27 = t;
              {
                t = not_null(d_26);
                {
                  ATerm l_27 = NULL;
                  t = b_61(t);
                  {
                    j_27 = t;
                    {
                      ATerm m_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(h_27), not_null(j_27)), not_null(f_27));
                      {
                        m_27 = t;
                        if(((l_27 != NULL) && (l_27 != m_27)))
                          _fail(m_27);
                        else
                          l_27 = m_27;
                      }
                      t = not_null(l_27);
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
  ATerm l_8;
  l_8 = t;
  {
    ATerm t_27 = NULL;
    ATerm u_27 = NULL;
    t = term_m_8;
    {
      t = whoami_0(t);
      {
        u_27 = t;
        if(((t_27 != NULL) && (t_27 != u_27)))
          _fail(u_27);
        else
          t_27 = u_27;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), not_null(t_27)), term_u_8));
      {
        t = printnl_0(t);
        {
          t = term_w_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = l_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
  z_27 = t;
  y_27 :
  if(match_cons(z_27, sym__2))
    {
      a_28 = ATgetArgument(z_27, 0);
      b_28 = ATgetArgument(z_27, 1);
      {
        ATerm a_9;
        a_9 = t;
        t = SSL_printnl(not_null(a_28), not_null(b_28));
        t = a_9;
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
  ATerm g_28 = NULL;
  g_28 = t;
  t = SSL_implode_string(not_null(g_28));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(c_9);
    }
  else
    {
      t = b_9;
      {
        ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
        n_28 = t;
        m_28 :
        if(((ATgetType(n_28) == AT_LIST) && !(ATisEmpty(n_28))))
          {
            o_28 = ATgetFirst((ATermList) n_28);
            p_28 = (ATerm) ATgetNext((ATermList) n_28);
            {
              t = not_null(o_28);
              {
                ATerm l_1 (ATerm t)
                {
                  t = not_null(p_28);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, l_1);
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
  ATerm z_28 = NULL;
  ATerm b_29 = NULL;
  z_28 = t;
  {
    ATerm c_29 = NULL;
    ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
    t = not_null(z_28);
    {
      c_29 = t;
      {
        t = SSL_explode_term(not_null(c_29));
        {
          e_29 = t;
          x_28 :
          if(match_cons(e_29, sym__2))
            {
              f_29 = ATgetArgument(e_29, 0);
              g_29 = ATgetArgument(e_29, 1);
              y_28 :
              if(match_string(f_29, ""))
                {
                  if(((b_29 != NULL) && (b_29 != g_29)))
                    _fail(g_29);
                  else
                    b_29 = g_29;
                }
              else
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
      t = not_null(b_29);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_83 (ATerm))
{
  ATerm k_29 (ATerm t)
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_29);
        ;
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        {
          t = Nil_0(t);
          t = e_83(t);
        }
      }
    return(t);
  }
  t = k_29(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
  n_29 = t;
  m_29 :
  if(match_cons(n_29, sym__2))
    {
      o_29 = ATgetArgument(n_29, 0);
      p_29 = ATgetArgument(n_29, 1);
      {
        t = not_null(o_29);
        {
          ATerm m_1 (ATerm t)
          {
            t = not_null(p_29);
            return(t);
          }
          t = at_end_1(t, m_1);
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
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(l_9);
    }
  else
    {
      t = k_9;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm u_29 = NULL;
  u_29 = t;
  t = SSL_explode_string(not_null(u_29));
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
  ATerm q_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(r_9);
    }
  else
    {
      t = q_9;
      {
        ATerm s_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, n_1);
            ;
            LocalPopChoice(t_9);
          }
        else
          {
            t = s_9;
            {
              ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
              d_30 = t;
              c_30 :
              if(match_cons(d_30, sym_Path_1))
                {
                  e_30 = ATgetArgument(d_30, 0);
                  t = not_null(e_30);
                }
              else
                {
                  if(match_cons(d_30, sym_Var_1))
                    {
                      e_30 = ATgetArgument(d_30, 0);
                      {
                        t = not_null(e_30);
                        {
                          ATerm u_9 = t;
                          int v_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(v_9);
                            }
                          else
                            {
                              t = u_9;
                              {
                                ATerm o_1 (ATerm t)
                                {
                                  t = term_w_9;
                                  return(t);
                                }
                                t = debug_1(t, o_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(d_30, sym_Prefix_2))
                        {
                          e_30 = ATgetArgument(d_30, 0);
                          f_30 = ATgetArgument(d_30, 1);
                          {
                            ATerm k_30 = NULL,m_30 = NULL;
                            ATerm x_9;
                            x_9 = t;
                            {
                              ATerm l_30 = NULL;
                              t = not_null(e_30);
                              {
                                t = eval_config_0(t);
                                {
                                  l_30 = t;
                                  if(((k_30 != NULL) && (k_30 != l_30)))
                                    _fail(l_30);
                                  else
                                    k_30 = l_30;
                                }
                              }
                            }
                            t = x_9;
                            {
                              ATerm n_30 = NULL;
                              t = not_null(f_30);
                              {
                                t = eval_config_0(t);
                                {
                                  n_30 = t;
                                  if(((m_30 != NULL) && (m_30 != n_30)))
                                    _fail(n_30);
                                  else
                                    m_30 = n_30;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_30), not_null(m_30));
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
  ATerm z_30 = NULL;
  z_30 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_9, not_null(z_30));
    {
      t = table_get_0(t);
      {
        ATerm p_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm c_10;
            c_10 = t;
            {
              ATerm d_31 = NULL;
              ATerm e_31 = NULL;
              e_31 = t;
              if(((d_31 != NULL) && (d_31 != e_31)))
                _fail(e_31);
              else
                d_31 = e_31;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_y_9, not_null(z_30), not_null(d_31));
                t = table_put_0(t);
              }
            }
            t = c_10;
          }
          return(t);
        }
        t = try_1(t, p_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm o_103 (ATerm))
{
  ATerm q_1 (ATerm t)
  {
    ATerm d_10;
    d_10 = t;
    {
      ATerm i_31 = NULL;
      ATerm j_31 = NULL;
      t = term_h_10;
      {
        t = get_config_0(t);
        {
          j_31 = t;
          if(((i_31 != NULL) && (i_31 != j_31)))
            _fail(j_31);
          else
            i_31 = j_31;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_31), term_k_10);
        t = geq_0(t);
      }
    }
    t = d_10;
    t = o_103(t);
    return(t);
  }
  t = try_1(t, q_1);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL;
  p_31 = t;
  n_31 :
  if(match_cons(p_31, sym__2))
    {
      q_31 = ATgetArgument(p_31, 0);
      r_31 = ATgetArgument(p_31, 1);
      o_31 :
      if(match_cons(r_31, sym_Stream_1))
        {
          s_31 = ATgetArgument(r_31, 0);
          {
            ATerm v_31 = NULL;
            t = SSL_fputc(not_null(q_31), not_null(s_31));
            {
              ATerm w_31 = NULL;
              w_31 = t;
              if(((v_31 != NULL) && (v_31 != w_31)))
                _fail(w_31);
              else
                v_31 = w_31;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_31));
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
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL;
  d_32 = t;
  b_32 :
  if(match_cons(d_32, sym__2))
    {
      e_32 = ATgetArgument(d_32, 0);
      g_32 = ATgetArgument(d_32, 1);
      c_32 :
      if(match_cons(e_32, sym_Stream_1))
        {
          f_32 = ATgetArgument(e_32, 0);
          {
            ATerm o_32 = NULL;
            t = SSL_write_term_to_stream_text(not_null(f_32), not_null(g_32));
            {
              ATerm p_32 = NULL;
              p_32 = t;
              if(((o_32 != NULL) && (o_32 != p_32)))
                _fail(p_32);
              else
                o_32 = p_32;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_32));
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
  ATerm r_1 (ATerm t)
  {
    ATerm t_32 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm u_32 = NULL;
      u_32 = t;
      if(((t_32 != NULL) && (t_32 != u_32)))
        _fail(u_32);
      else
        t_32 = u_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_10, not_null(t_32));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, r_1);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,g_33 = NULL,h_33 = NULL;
  a_33 = t;
  y_32 :
  if(match_cons(a_33, sym__2))
    {
      b_33 = ATgetArgument(a_33, 0);
      h_33 = ATgetArgument(a_33, 1);
      z_32 :
      if(match_cons(b_33, sym_Stream_1))
        {
          g_33 = ATgetArgument(b_33, 0);
          {
            ATerm k_33 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(g_33), not_null(h_33));
            {
              ATerm l_33 = NULL;
              l_33 = t;
              if(((k_33 != NULL) && (k_33 != l_33)))
                _fail(l_33);
              else
                k_33 = l_33;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_33));
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
ATerm WriteToFile_1 (ATerm t, ATerm q_97 (ATerm))
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
  s_33 = t;
  r_33 :
  if(match_cons(s_33, sym__2))
    {
      t_33 = ATgetArgument(s_33, 0);
      u_33 = ATgetArgument(s_33, 1);
      {
        ATerm x_33 = NULL,z_33 = NULL;
        t = not_null(t_33);
        {
          ATerm y_33 = NULL;
          y_33 = t;
          if(((x_33 != NULL) && (x_33 != y_33)))
            _fail(y_33);
          else
            x_33 = y_33;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_33), term_m_10);
            {
              t = open_stream_0(t);
              {
                ATerm a_34 = NULL;
                a_34 = t;
                if(((z_33 != NULL) && (z_33 != a_34)))
                  _fail(a_34);
                else
                  z_33 = a_34;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_33), not_null(u_33));
                  {
                    t = q_97(t);
                    {
                      t = fclose_0(t);
                      t = not_null(u_33);
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
  ATerm i_34 = NULL;
  ATerm n_10;
  n_10 = t;
  {
    ATerm s_1 (ATerm t)
    {
      ATerm o_10 = t;
      int p_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_1 (ATerm t)
          {
            ATerm n_34 = NULL,o_34 = NULL;
            n_34 = t;
            f_34 :
            if(match_cons(n_34, sym_Output_1))
              {
                o_34 = ATgetArgument(n_34, 0);
                if(((i_34 != NULL) && (i_34 != o_34)))
                  _fail(o_34);
                else
                  i_34 = o_34;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, t_1);
          ;
          LocalPopChoice(p_10);
        }
      else
        {
          t = o_10;
          {
            ATerm s_34 = NULL;
            t = term_q_10;
            {
              s_34 = t;
              if(((i_34 != NULL) && (i_34 != s_34)))
                _fail(s_34);
              else
                i_34 = s_34;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_1, _id);
  }
  t = n_10;
  {
    ATerm u_1 (ATerm t)
    {
      ATerm v_1 (ATerm t)
      {
        t = not_null(i_34);
        return(t);
      }
      t = split_2(t, v_1, _id);
      return(t);
    }
    t = _2(t, _id, u_1);
    {
      ATerm r_10 = t;
      int v_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_1 (ATerm t)
          {
            ATerm x_1 (ATerm t)
            {
              ATerm v_34 = NULL;
              v_34 = t;
              h_34 :
              if(!(match_cons(v_34, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, x_1);
            return(t);
          }
          t = _2(t, w_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(v_10);
        }
      else
        {
          t = r_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm d_94 (ATerm))
{
  ATerm b_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
  ATerm w_10;
  w_10 = t;
  t = dtime_0(t);
  t = w_10;
  {
    t = d_94(t);
    {
      ATerm a_11;
      a_11 = t;
      {
        ATerm c_35 = NULL;
        t = dtime_0(t);
        {
          c_35 = t;
          if(((b_35 != NULL) && (b_35 != c_35)))
            _fail(c_35);
          else
            b_35 = c_35;
        }
      }
      t = a_11;
      {
        d_35 = t;
        a_35 :
        if(match_cons(d_35, sym__2))
          {
            e_35 = ATgetArgument(d_35, 0);
            f_35 = ATgetArgument(d_35, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_35)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(b_35))), not_null(f_35));
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
  ATerm n_35 = NULL,o_35 = NULL;
  ATerm c_36 (ATerm t)
  {
    t = SSL_fclose(not_null(o_35));
    return(t);
  }
  o_35 = t;
  m_35 :
  if(match_cons(o_35, sym_Stream_1))
    {
      n_35 = ATgetArgument(o_35, 0);
      {
        ATerm d_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(n_35));
            ;
            LocalPopChoice(e_11);
          }
        else
          {
            t = d_11;
            t = c_36(t);
          }
      }
    }
  else
    {
      t = c_36(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL;
  f_36 = t;
  e_36 :
  if(match_cons(f_36, sym_Stream_1))
    {
      g_36 = ATgetArgument(f_36, 0);
      t = SSL_read_term_from_stream(not_null(g_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm c_97 (ATerm))
{
  ATerm f_11;
  f_11 = t;
  {
    ATerm l_36 = NULL,n_36 = NULL;
    ATerm g_11;
    g_11 = t;
    {
      ATerm m_36 = NULL;
      t = c_97(t);
      {
        m_36 = t;
        if(((l_36 != NULL) && (l_36 != m_36)))
          _fail(m_36);
        else
          l_36 = m_36;
      }
    }
    t = g_11;
    {
      ATerm o_36 = NULL;
      o_36 = t;
      if(((n_36 != NULL) && (n_36 != o_36)))
        _fail(o_36);
      else
        n_36 = o_36;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_36)), not_null(l_36)));
        t = printnl_0(t);
      }
    }
  }
  t = f_11;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
  u_36 = t;
  t_36 :
  if(match_cons(u_36, sym__2))
    {
      v_36 = ATgetArgument(u_36, 0);
      w_36 = ATgetArgument(u_36, 1);
      {
        ATerm z_36 = NULL;
        t = SSL_fopen(not_null(v_36), not_null(w_36));
        {
          ATerm a_37 = NULL;
          a_37 = t;
          if(((z_36 != NULL) && (z_36 != a_37)))
            _fail(a_37);
          else
            z_36 = a_37;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_36));
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
  ATerm e_37 = NULL;
  e_37 = t;
  t = SSL_is_string(not_null(e_37));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm i_37 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm j_37 = NULL;
    j_37 = t;
    if(((i_37 != NULL) && (i_37 != j_37)))
      _fail(j_37);
    else
      i_37 = j_37;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_37));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm m_37 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm n_37 = NULL;
    n_37 = t;
    if(((m_37 != NULL) && (m_37 != n_37)))
      _fail(n_37);
    else
      m_37 = n_37;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_37));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm q_37 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm r_37 = NULL;
    r_37 = t;
    if(((q_37 != NULL) && (q_37 != r_37)))
      _fail(r_37);
    else
      q_37 = r_37;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_37));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm y_37 = NULL;
  y_37 = t;
  x_37 :
  if(match_cons(y_37, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(y_37, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(y_37, sym_stdin_0))
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
  ATerm k_38 = NULL;
  ATerm m_38 = NULL,n_38 = NULL;
  k_38 = t;
  {
    ATerm o_38 = NULL;
    ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL;
    t = not_null(k_38);
    {
      o_38 = t;
      {
        t = SSL_explode_term(not_null(o_38));
        {
          q_38 = t;
          h_38 :
          if(match_cons(q_38, sym__2))
            {
              r_38 = ATgetArgument(q_38, 0);
              s_38 = ATgetArgument(q_38, 1);
              i_38 :
              if(match_string(r_38, ""))
                {
                  j_38 :
                  if(((ATgetType(s_38) == AT_LIST) && !(ATisEmpty(s_38))))
                    {
                      t_38 = ATgetFirst((ATermList) s_38);
                      u_38 = (ATerm) ATgetNext((ATermList) s_38);
                      {
                        if(((n_38 != NULL) && (n_38 != t_38)))
                          _fail(t_38);
                        else
                          n_38 = t_38;
                        if(((m_38 != NULL) && (m_38 != u_38)))
                          _fail(u_38);
                        else
                          m_38 = u_38;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(n_38);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,h_39 = NULL;
  e_39 = t;
  d_39 :
  if(match_cons(e_39, sym__2))
    {
      f_39 = ATgetArgument(e_39, 0);
      h_39 = ATgetArgument(e_39, 1);
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
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
                  ATerm y_1 (ATerm t)
                  {
                    ATerm i_39 = NULL,j_39 = NULL;
                    i_39 = t;
                    c_39 :
                    if(match_cons(i_39, sym_Path_1))
                      {
                        j_39 = ATgetArgument(i_39, 0);
                        t = not_null(j_39);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, y_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(k_11);
                }
              else
                {
                  t = j_11;
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
  ATerm r_39 = NULL;
  ATerm l_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_39 = NULL;
      ATerm q_39 = NULL;
      q_39 = t;
      if(((p_39 != NULL) && (p_39 != q_39)))
        _fail(q_39);
      else
        p_39 = q_39;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_39), term_r_11);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = l_11;
      {
        ATerm z_1 (ATerm t)
        {
          t = term_s_11;
          return(t);
        }
        t = debug_1(t, z_1);
        _fail(t);
      }
    }
  {
    ATerm w_11;
    w_11 = t;
    {
      ATerm s_39 = NULL;
      t = read_from_stream_0(t);
      {
        s_39 = t;
        if(((r_39 != NULL) && (r_39 != s_39)))
          _fail(s_39);
        else
          r_39 = s_39;
      }
    }
    t = w_11;
    {
      t = fclose_0(t);
      t = not_null(r_39);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm a_80 (ATerm), ATerm b_80 (ATerm))
{
  ATerm a_40 = NULL,c_40 = NULL;
  ATerm y_11;
  y_11 = t;
  {
    ATerm b_40 = NULL;
    t = a_80(t);
    {
      b_40 = t;
      if(((a_40 != NULL) && (a_40 != b_40)))
        _fail(b_40);
      else
        a_40 = b_40;
    }
  }
  t = y_11;
  {
    ATerm d_40 = NULL;
    t = b_80(t);
    {
      d_40 = t;
      if(((c_40 != NULL) && (c_40 != d_40)))
        _fail(d_40);
      else
        c_40 = d_40;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_40), not_null(c_40));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm j_40 = NULL;
  ATerm b_12;
  b_12 = t;
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_2 (ATerm t)
        {
          ATerm k_40 = NULL,l_40 = NULL;
          k_40 = t;
          h_40 :
          if(match_cons(k_40, sym_Input_1))
            {
              l_40 = ATgetArgument(k_40, 0);
              if(((j_40 != NULL) && (j_40 != l_40)))
                _fail(l_40);
              else
                j_40 = l_40;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, a_2);
        ;
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        {
          ATerm m_40 = NULL;
          t = term_e_12;
          {
            m_40 = t;
            if(((j_40 != NULL) && (j_40 != m_40)))
              _fail(m_40);
            else
              j_40 = m_40;
          }
        }
      }
  }
  t = b_12;
  {
    ATerm b_2 (ATerm t)
    {
      t = not_null(j_40);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, b_2);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm r_40 = NULL;
    r_40 = t;
    p_40 :
    if(!(match_string(r_40, "-k")))
      {
        if(!(match_string(r_40, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm f_12;
    f_12 = t;
    {
      ATerm s_40 = NULL;
      ATerm t_40 = NULL;
      t = string_to_int_0(t);
      {
        t_40 = t;
        if(((s_40 != NULL) && (s_40 != t_40)))
          _fail(t_40);
        else
          s_40 = t_40;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_12, not_null(s_40));
        t = set_config_0(t);
      }
    }
    t = f_12;
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    t = term_k_12;
    return(t);
  }
  t = ArgOption_3(t, c_2, d_2, e_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm w_40 = NULL;
  w_40 = t;
  t = SSL_string_to_int(not_null(w_40));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_2 (ATerm t)
      {
        ATerm e_41 = NULL;
        e_41 = t;
        z_40 :
        if(!(match_string(e_41, "-S")))
          {
            if(!(match_string(e_41, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm g_2 (ATerm t)
      {
        t = term_r_12;
        t = set_config_0(t);
        t = term_s_12;
        return(t);
      }
      ATerm h_2 (ATerm t)
      {
        t = term_x_12;
        return(t);
      }
      t = Option_3(t, f_2, g_2, h_2);
      ;
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      {
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_2 (ATerm t)
            {
              ATerm m_41 = NULL;
              m_41 = t;
              a_41 :
              if(!(match_string(m_41, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm j_2 (ATerm t)
            {
              ATerm p_41 = NULL;
              ATerm b_13;
              b_13 = t;
              {
                ATerm n_41 = NULL;
                ATerm o_41 = NULL;
                t = string_to_int_0(t);
                {
                  o_41 = t;
                  if(((n_41 != NULL) && (n_41 != o_41)))
                    _fail(o_41);
                  else
                    n_41 = o_41;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_10, not_null(n_41));
                  t = set_config_0(t);
                }
              }
              t = b_13;
              {
                ATerm q_41 = NULL;
                q_41 = t;
                if(((p_41 != NULL) && (p_41 != q_41)))
                  _fail(q_41);
                else
                  p_41 = q_41;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(p_41));
              }
              return(t);
            }
            ATerm k_2 (ATerm t)
            {
              t = term_c_13;
              return(t);
            }
            t = ArgOption_3(t, i_2, j_2, k_2);
            ;
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
            {
              ATerm l_2 (ATerm t)
              {
                ATerm r_41 = NULL;
                r_41 = t;
                d_41 :
                if(!(match_string(r_41, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm m_2 (ATerm t)
              {
                t = term_i_13;
                t = set_config_0(t);
                t = term_j_13;
                return(t);
              }
              ATerm n_2 (ATerm t)
              {
                t = term_o_13;
                return(t);
              }
              t = Option_3(t, l_2, m_2, n_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm d_42 = NULL;
    d_42 = t;
    u_41 :
    if(!(match_string(d_42, "-o")))
      {
        if(!(match_string(d_42, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm n_42 = NULL;
    ATerm r_13;
    r_13 = t;
    {
      ATerm j_42 = NULL;
      ATerm m_42 = NULL;
      m_42 = t;
      if(((j_42 != NULL) && (j_42 != m_42)))
        _fail(m_42);
      else
        j_42 = m_42;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_13, not_null(j_42));
        t = set_config_0(t);
      }
    }
    t = r_13;
    {
      ATerm o_42 = NULL;
      o_42 = t;
      if(((n_42 != NULL) && (n_42 != o_42)))
        _fail(o_42);
      else
        n_42 = o_42;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_42));
    }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_t_13;
    return(t);
  }
  t = ArgOption_3(t, o_2, p_2, q_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm w_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = w_13;
      {
        ATerm r_2 (ATerm t)
        {
          ATerm s_42 = NULL;
          s_42 = t;
          r_42 :
          if(!(match_string(s_42, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm s_2 (ATerm t)
        {
          t = term_e_14;
          t = set_config_0(t);
          t = term_f_14;
          return(t);
        }
        ATerm t_2 (ATerm t)
        {
          t = term_g_14;
          return(t);
        }
        t = Option_3(t, r_2, s_2, t_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
  b_43 = t;
  z_42 :
  if(match_string(b_43, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(b_43) == AT_LIST) && !(ATisEmpty(b_43))))
        {
          c_43 = ATgetFirst((ATermList) b_43);
          d_43 = (ATerm) ATgetNext((ATermList) b_43);
          a_43 :
          if(((ATgetType(d_43) == AT_LIST) && !(ATisEmpty(d_43))))
            {
              e_43 = ATgetFirst((ATermList) d_43);
              f_43 = (ATerm) ATgetNext((ATermList) d_43);
              {
                ATerm j_43 = NULL;
                ATerm l_14;
                l_14 = t;
                {
                  t = not_null(c_43);
                  t = j_0(t);
                }
                t = l_14;
                {
                  ATerm k_43 = NULL;
                  t = not_null(e_43);
                  {
                    t = k_0(t);
                    {
                      k_43 = t;
                      if(((j_43 != NULL) && (j_43 != k_43)))
                        _fail(k_43);
                      else
                        j_43 = k_43;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_43)), not_null(j_43));
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
  ATerm u_2 (ATerm t)
  {
    ATerm s_43 = NULL;
    s_43 = t;
    p_43 :
    if(!(match_string(s_43, "-i")))
      {
        if(!(match_string(s_43, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm v_43 = NULL;
    ATerm m_14;
    m_14 = t;
    {
      ATerm t_43 = NULL;
      ATerm u_43 = NULL;
      u_43 = t;
      if(((t_43 != NULL) && (t_43 != u_43)))
        _fail(u_43);
      else
        t_43 = u_43;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_14, not_null(t_43));
        t = set_config_0(t);
      }
    }
    t = m_14;
    {
      ATerm w_43 = NULL;
      w_43 = t;
      if(((v_43 != NULL) && (v_43 != w_43)))
        _fail(w_43);
      else
        v_43 = w_43;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_43));
    }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_o_14;
    return(t);
  }
  t = ArgOption_3(t, u_2, v_2, w_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm t_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(u_14);
    }
  else
    {
      t = t_14;
      {
        ATerm w_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(x_14);
          }
        else
          {
            t = w_14;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm a_44 = NULL;
  t = report_run_time_0(t);
  {
    ATerm b_44 = NULL;
    t = term_m_8;
    {
      t = whoami_0(t);
      {
        b_44 = t;
        if(((a_44 != NULL) && (a_44 != b_44)))
          _fail(b_44);
        else
          a_44 = b_44;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, term_y_14), not_null(a_44)));
      {
        t = printnl_0(t);
        {
          t = term_w_8;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_z_14;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_44 = NULL;
  e_44 = t;
  t = SSL_TicksToSeconds(not_null(e_44));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL;
  j_44 = t;
  i_44 :
  if(match_cons(j_44, sym__2))
    {
      k_44 = ATgetArgument(j_44, 0);
      l_44 = ATgetArgument(j_44, 1);
      {
        ATerm e_15 = t;
        int f_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_44), not_null(l_44));
            ;
            LocalPopChoice(f_15);
          }
        else
          {
            t = e_15;
            t = SSL_addr(not_null(k_44), not_null(l_44));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm m_87 (ATerm), ATerm n_87 (ATerm))
{
  ATerm g_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_87(t);
      ;
      LocalPopChoice(i_15);
    }
  else
    {
      t = g_15;
      {
        ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
        s_44 = t;
        r_44 :
        if(((ATgetType(s_44) == AT_LIST) && !(ATisEmpty(s_44))))
          {
            t_44 = ATgetFirst((ATermList) s_44);
            u_44 = (ATerm) ATgetNext((ATermList) s_44);
            {
              ATerm x_44 = NULL;
              ATerm y_44 = NULL;
              t = not_null(u_44);
              {
                t = foldr_2(t, m_87, n_87);
                {
                  y_44 = t;
                  if(((x_44 != NULL) && (x_44 != y_44)))
                    _fail(y_44);
                  else
                    x_44 = y_44;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_44), not_null(x_44));
                t = n_87(t);
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
ATerm crush_2 (ATerm t, ATerm k_85 (ATerm), ATerm l_85 (ATerm))
{
  ATerm f_45 = NULL;
  ATerm h_45 = NULL;
  f_45 = t;
  {
    ATerm i_45 = NULL;
    ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
    t = not_null(f_45);
    {
      i_45 = t;
      {
        t = SSL_explode_term(not_null(i_45));
        {
          k_45 = t;
          e_45 :
          if(match_cons(k_45, sym__2))
            {
              l_45 = ATgetArgument(k_45, 0);
              m_45 = ATgetArgument(k_45, 1);
              if(((h_45 != NULL) && (h_45 != m_45)))
                _fail(m_45);
              else
                h_45 = m_45;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_45);
      t = foldr_2(t, k_85, l_85);
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
    ATerm x_2 (ATerm t)
    {
      t = term_q_12;
      return(t);
    }
    t = crush_2(t, x_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL;
  s_45 = t;
  r_45 :
  if(match_cons(s_45, sym__2))
    {
      t_45 = ATgetArgument(s_45, 0);
      u_45 = ATgetArgument(s_45, 1);
      {
        ATerm q_15;
        q_15 = t;
        {
          ATerm r_15 = t;
          int s_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_45), not_null(u_45));
              ;
              LocalPopChoice(s_15);
            }
          else
            {
              t = r_15;
              t = SSL_gtr(not_null(t_45), not_null(u_45));
            }
        }
        t = q_15;
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
  ATerm a_46 = NULL;
  ATerm t_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL;
      b_46 = t;
      z_45 :
      if(match_cons(b_46, sym__2))
        {
          c_46 = ATgetArgument(b_46, 0);
          d_46 = ATgetArgument(b_46, 1);
          {
            if(((a_46 != NULL) && (a_46 != c_46)))
              _fail(c_46);
            else
              a_46 = c_46;
            if(((a_46 != NULL) && (a_46 != d_46)))
              _fail(d_46);
            else
              a_46 = d_46;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(u_15);
    }
  else
    {
      t = t_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm n_103 (ATerm))
{
  ATerm y_2 (ATerm t)
  {
    ATerm v_15;
    v_15 = t;
    {
      ATerm g_46 = NULL;
      ATerm h_46 = NULL;
      t = term_h_10;
      {
        t = get_config_0(t);
        {
          h_46 = t;
          if(((g_46 != NULL) && (g_46 != h_46)))
            _fail(h_46);
          else
            g_46 = h_46;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_46), term_w_8);
        t = geq_0(t);
      }
    }
    t = v_15;
    t = n_103(t);
    return(t);
  }
  t = try_1(t, y_2);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm l_46 = NULL,n_46 = NULL;
    ATerm w_15;
    w_15 = t;
    {
      ATerm m_46 = NULL;
      t = run_time_0(t);
      {
        m_46 = t;
        if(((l_46 != NULL) && (l_46 != m_46)))
          _fail(m_46);
        else
          l_46 = m_46;
      }
    }
    t = w_15;
    {
      ATerm o_46 = NULL;
      t = term_m_8;
      {
        t = whoami_0(t);
        {
          o_46 = t;
          if(((n_46 != NULL) && (n_46 != o_46)))
            _fail(o_46);
          else
            n_46 = o_46;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_15), not_null(l_46)), term_y_15), not_null(n_46)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, z_2);
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
  ATerm v_46 = NULL;
  v_46 = t;
  u_46 :
  if(match_cons(v_46, sym_Version_0))
    {
      ATerm x_46 = NULL,z_46 = NULL;
      ATerm b_16;
      b_16 = t;
      {
        ATerm y_46 = NULL;
        t = SSLgetAnnotations(not_null(v_46));
        {
          y_46 = t;
          if(((x_46 != NULL) && (x_46 != y_46)))
            _fail(y_46);
          else
            x_46 = y_46;
        }
      }
      t = b_16;
      {
        ATerm a_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(x_46));
        {
          a_47 = t;
          if(((z_46 != NULL) && (z_46 != a_47)))
            _fail(a_47);
          else
            z_46 = a_47;
        }
        t = not_null(z_46);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm b_95 (ATerm))
{
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_16;
      t = get_config_0(t);
      ;
      LocalPopChoice(k_16);
    }
  else
    {
      t = j_16;
      {
        ATerm a_3 (ATerm t)
        {
          ATerm p_16 = t;
          int v_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(v_16);
            }
          else
            {
              t = p_16;
              {
                ATerm b_17 = t;
                int c_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(c_17);
                  }
                else
                  {
                    t = b_17;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, a_3);
      }
    }
  t = b_95(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_47 = NULL;
  f_47 = t;
  t = SSL_table_create(not_null(f_47));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_47 = NULL;
  j_47 = t;
  {
    ATerm d_17;
    d_17 = t;
    {
      t = term_e_17;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_e_17, term_f_17, not_null(j_47));
          t = table_put_0(t);
        }
      }
    }
    t = d_17;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm n_47 = NULL;
  n_47 = t;
  t = SSL_table_destroy(not_null(n_47));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_47 = NULL;
  r_47 = t;
  t = SSL_exit(not_null(r_47));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm v_99 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_82 (ATerm))
{
  ATerm u_47 (ATerm t)
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        t = Cons_2(t, p_82, u_47);
      }
    return(t);
  }
  t = u_47(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL;
  m_48 = t;
  j_48 :
  if(((ATgetType(m_48) == AT_LIST) && !(ATisEmpty(m_48))))
    {
      k_48 = ATgetFirst((ATermList) m_48);
      l_48 = (ATerm) ATgetNext((ATermList) m_48);
      {
        ATerm p_48 = NULL;
        t = not_null(l_48);
        {
          ATerm p_17;
          p_17 = t;
          {
            ATerm q_48 = NULL,s_48 = NULL,u_48 = NULL;
            ATerm r_17;
            r_17 = t;
            {
              ATerm r_48 = NULL;
              t = i_0(t);
              {
                r_48 = t;
                if(((q_48 != NULL) && (q_48 != r_48)))
                  _fail(r_48);
                else
                  q_48 = r_48;
              }
            }
            t = r_17;
            {
              ATerm t_48 = NULL;
              t = not_null(k_48);
              {
                t = g_0(t);
                {
                  t_48 = t;
                  if(((s_48 != NULL) && (s_48 != t_48)))
                    _fail(t_48);
                  else
                    s_48 = t_48;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(q_48)), not_null(s_48));
                {
                  u_48 = t;
                  if(((p_48 != NULL) && (p_48 != u_48)))
                    _fail(u_48);
                  else
                    p_48 = u_48;
                }
              }
            }
          }
          t = p_17;
          {
            ATerm b_3 (ATerm t)
            {
              t = not_null(p_48);
              return(t);
            }
            t = reverse_acc_2(t, g_0, b_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(m_48) == AT_LIST) && ATisEmpty(m_48)))
        {
          {
            t = term_m_8;
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
  ATerm c_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, c_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm u_99 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_73 (ATerm))
{
  ATerm f_49 = NULL,g_49 = NULL;
  f_49 = t;
  e_49 :
  if(match_cons(f_49, sym_Program_1))
    {
      g_49 = ATgetArgument(f_49, 0);
      {
        ATerm j_49 = NULL,r_49 = NULL;
        ATerm q_49 = NULL;
        t = SSLgetAnnotations(not_null(f_49));
        {
          q_49 = t;
          if(((j_49 != NULL) && (j_49 != q_49)))
            _fail(q_49);
          else
            j_49 = q_49;
        }
        {
          t = not_null(g_49);
          {
            ATerm t_49 = NULL;
            t = y_73(t);
            {
              r_49 = t;
              {
                ATerm u_49 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(r_49)), not_null(j_49));
                {
                  u_49 = t;
                  if(((t_49 != NULL) && (t_49 != u_49)))
                    _fail(u_49);
                  else
                    t_49 = u_49;
                }
                t = not_null(t_49);
              }
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
  ATerm d_50 = NULL;
  ATerm t_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_50 = NULL;
      t = term_z_14;
      {
        t = get_config_0(t);
        {
          e_50 = t;
          if(((d_50 != NULL) && (d_50 != e_50)))
            _fail(e_50);
          else
            d_50 = e_50;
        }
      }
      ;
      LocalPopChoice(v_17);
    }
  else
    {
      t = t_17;
      {
        ATerm d_3 (ATerm t)
        {
          ATerm e_3 (ATerm t)
          {
            ATerm f_50 = NULL;
            f_50 = t;
            if(((d_50 != NULL) && (d_50 != f_50)))
              _fail(f_50);
            else
              d_50 = f_50;
            return(t);
          }
          t = Program_1(t, e_3);
          return(t);
        }
        t = option_defined_1(t, d_3);
      }
    }
  {
    ATerm f_3 (ATerm t)
    {
      ATerm g_3 (ATerm t)
      {
        t = not_null(d_50);
        return(t);
      }
      t = short_description_1(t, g_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, f_3);
    {
      t = term_w_17;
      {
        t = echo_0(t);
        {
          t = term_c_18;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm h_3 (ATerm t)
                {
                  ATerm g_50 = NULL;
                  ATerm h_50 = NULL;
                  h_50 = t;
                  if(((g_50 != NULL) && (g_50 != h_50)))
                    _fail(h_50);
                  else
                    g_50 = h_50;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_50)), term_d_18);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, h_3);
                {
                  ATerm i_3 (ATerm t)
                  {
                    ATerm i_50 = NULL;
                    ATerm j_50 = NULL;
                    ATerm m_3 (ATerm t)
                    {
                      t = not_null(d_50);
                      return(t);
                    }
                    t = long_description_1(t, m_3);
                    {
                      j_50 = t;
                      if(((i_50 != NULL) && (i_50 != j_50)))
                        _fail(j_50);
                      else
                        i_50 = j_50;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(i_50)), term_m_18);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, i_3);
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
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_73 (ATerm))
{
  ATerm t_50 = NULL,u_50 = NULL;
  t_50 = t;
  s_50 :
  if(match_cons(t_50, sym_Undefined_1))
    {
      u_50 = ATgetArgument(t_50, 0);
      {
        ATerm x_50 = NULL,z_50 = NULL;
        ATerm y_50 = NULL;
        t = SSLgetAnnotations(not_null(t_50));
        {
          y_50 = t;
          if(((x_50 != NULL) && (x_50 != y_50)))
            _fail(y_50);
          else
            x_50 = y_50;
        }
        {
          t = not_null(u_50);
          {
            ATerm b_51 = NULL;
            t = z_73(t);
            {
              z_50 = t;
              {
                ATerm c_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(z_50)), not_null(x_50));
                {
                  c_51 = t;
                  if(((b_51 != NULL) && (b_51 != c_51)))
                    _fail(c_51);
                  else
                    b_51 = c_51;
                }
                t = not_null(b_51);
              }
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
ATerm fetch_1 (ATerm t, ATerm y_82 (ATerm))
{
  ATerm h_51 (ATerm t)
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_82, _id);
        ;
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
        t = Cons_2(t, _id, h_51);
      }
    return(t);
  }
  t = h_51(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_98 (ATerm))
{
  t = fetch_1(t, u_98);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL;
  j_51 = t;
  i_51 :
  if(((ATgetType(j_51) == AT_LIST) && ATisEmpty(j_51)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(j_51) == AT_LIST) && !(ATisEmpty(j_51))))
        {
          k_51 = ATgetFirst((ATermList) j_51);
          l_51 = (ATerm) ATgetNext((ATermList) j_51);
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
  ATerm r_18;
  r_18 = t;
  {
    ATerm o_51 = NULL;
    ATerm r_51 = NULL;
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        {
          ATerm p_51 = NULL;
          ATerm q_51 = NULL;
          q_51 = t;
          if(((p_51 != NULL) && (p_51 != q_51)))
            _fail(q_51);
          else
            p_51 = q_51;
          t = (ATerm) ATinsert(ATempty, not_null(p_51));
        }
      }
    {
      r_51 = t;
      if(((o_51 != NULL) && (o_51 != r_51)))
        _fail(r_51);
      else
        o_51 = r_51;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_10, not_null(o_51));
      t = printnl_0(t);
    }
  }
  t = r_18;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_z_14;
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
  ATerm u_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(v_18);
    }
  else
    {
      t = u_18;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm y_51 = NULL;
  y_51 = t;
  x_51 :
  if(match_cons(y_51, sym_Help_0))
    {
      ATerm a_52 = NULL,c_52 = NULL;
      ATerm w_18;
      w_18 = t;
      {
        ATerm b_52 = NULL;
        t = SSLgetAnnotations(not_null(y_51));
        {
          b_52 = t;
          if(((a_52 != NULL) && (a_52 != b_52)))
            _fail(b_52);
          else
            a_52 = b_52;
        }
      }
      t = w_18;
      {
        ATerm d_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(a_52));
        {
          d_52 = t;
          if(((c_52 != NULL) && (c_52 != d_52)))
            _fail(d_52);
          else
            c_52 = d_52;
        }
        t = not_null(c_52);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_79 (ATerm))
{
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_79(t);
      ;
      LocalPopChoice(y_18);
    }
  else
    {
      t = x_18;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_3 (ATerm t)
      {
        ATerm j_52 = NULL;
        j_52 = t;
        h_52 :
        if(!(match_string(j_52, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm o_3 (ATerm t)
      {
        t = term_c_19;
        t = set_config_0(t);
        return(t);
      }
      ATerm p_3 (ATerm t)
      {
        t = term_d_19;
        return(t);
      }
      t = Option_3(t, n_3, o_3, p_3);
      ;
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
      {
        ATerm q_3 (ATerm t)
        {
          ATerm k_52 = NULL;
          k_52 = t;
          i_52 :
          if(!(match_string(k_52, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_3 (ATerm t)
        {
          t = term_c_19;
          {
            t = set_config_0(t);
            {
              t = term_i_19;
              t = set_config_0(t);
            }
          }
          t = term_j_19;
          return(t);
        }
        ATerm s_3 (ATerm t)
        {
          t = term_n_19;
          return(t);
        }
        t = Option_3(t, q_3, r_3, s_3);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
  n_52 = t;
  m_52 :
  if(match_cons(n_52, sym__2))
    {
      o_52 = ATgetArgument(n_52, 0);
      p_52 = ATgetArgument(n_52, 1);
      t = SSL_table_get(not_null(o_52), not_null(p_52));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL;
  x_52 = t;
  v_52 :
  if(match_cons(x_52, sym__3))
    {
      y_52 = ATgetArgument(x_52, 0);
      z_52 = ATgetArgument(x_52, 1);
      a_53 = ATgetArgument(x_52, 2);
      {
        ATerm q_19;
        q_19 = t;
        {
          ATerm e_53 = NULL;
          ATerm f_53 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_52), not_null(z_52));
          {
            ATerm r_19 = t;
            int v_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(v_19);
              }
            else
              {
                t = r_19;
                t = (ATerm) ATempty;
              }
            {
              f_53 = t;
              if(((e_53 != NULL) && (e_53 != f_53)))
                _fail(f_53);
              else
                e_53 = f_53;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_52), not_null(z_52), (ATerm) ATinsert(CheckATermList(not_null(e_53)), not_null(a_53)));
            t = table_put_0(t);
          }
        }
        t = q_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm z_99 (ATerm))
{
  ATerm j_53 = NULL;
  ATerm k_53 = NULL;
  t = term_m_8;
  {
    t = z_99(t);
    {
      k_53 = t;
      if(((j_53 != NULL) && (j_53 != k_53)))
        _fail(k_53);
      else
        j_53 = k_53;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_x_17, term_b_18, not_null(j_53));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm q_53 = NULL,v_53 = NULL,w_53 = NULL;
  q_53 = t;
  p_53 :
  if(match_string(q_53, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(q_53) == AT_LIST) && !(ATisEmpty(q_53))))
        {
          v_53 = ATgetFirst((ATermList) q_53);
          w_53 = (ATerm) ATgetNext((ATermList) q_53);
          {
            ATerm e_54 = NULL;
            ATerm y_19;
            y_19 = t;
            {
              t = not_null(v_53);
              t = a_0(t);
            }
            t = y_19;
            {
              ATerm f_54 = NULL;
              t = term_m_8;
              {
                t = b_0(t);
                {
                  f_54 = t;
                  if(((e_54 != NULL) && (e_54 != f_54)))
                    _fail(f_54);
                  else
                    e_54 = f_54;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_53)), not_null(e_54));
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
  ATerm t_3 (ATerm t)
  {
    ATerm k_54 = NULL;
    k_54 = t;
    j_54 :
    if(!(match_string(k_54, "--help")))
      {
        if(!(match_string(k_54, "-h")))
          {
            if(!(match_string(k_54, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    t = term_z_19;
    {
      t = set_config_0(t);
      t = term_d_20;
    }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = term_g_20;
    return(t);
  }
  t = Option_3(t, t_3, u_3, v_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL;
  n_54 = t;
  m_54 :
  if(((ATgetType(n_54) == AT_LIST) && !(ATisEmpty(n_54))))
    {
      o_54 = ATgetFirst((ATermList) n_54);
      p_54 = (ATerm) ATgetNext((ATermList) n_54);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_54)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_54)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_62 (ATerm), ATerm k_62 (ATerm))
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL;
  e_55 = t;
  d_55 :
  if(((ATgetType(e_55) == AT_LIST) && !(ATisEmpty(e_55))))
    {
      f_55 = ATgetFirst((ATermList) e_55);
      g_55 = (ATerm) ATgetNext((ATermList) e_55);
      {
        ATerm k_55 = NULL,q_55 = NULL;
        ATerm p_55 = NULL;
        t = SSLgetAnnotations(not_null(e_55));
        {
          p_55 = t;
          if(((k_55 != NULL) && (k_55 != p_55)))
            _fail(p_55);
          else
            k_55 = p_55;
        }
        {
          t = not_null(f_55);
          {
            ATerm s_55 = NULL;
            t = j_62(t);
            {
              q_55 = t;
              {
                t = not_null(g_55);
                {
                  ATerm u_55 = NULL;
                  t = k_62(t);
                  {
                    s_55 = t;
                    {
                      ATerm v_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(s_55)), not_null(q_55)), not_null(k_55));
                      {
                        v_55 = t;
                        if(((u_55 != NULL) && (u_55 != v_55)))
                          _fail(v_55);
                        else
                          u_55 = v_55;
                      }
                      t = not_null(u_55);
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
  ATerm f_56 = NULL;
  f_56 = t;
  e_56 :
  if(((ATgetType(f_56) == AT_LIST) && ATisEmpty(f_56)))
    {
      {
        ATerm h_56 = NULL,j_56 = NULL;
        ATerm h_20;
        h_20 = t;
        {
          ATerm i_56 = NULL;
          t = SSLgetAnnotations(not_null(f_56));
          {
            i_56 = t;
            if(((h_56 != NULL) && (h_56 != i_56)))
              _fail(i_56);
            else
              h_56 = i_56;
          }
        }
        t = h_20;
        {
          ATerm k_56 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(h_56));
          {
            k_56 = t;
            if(((j_56 != NULL) && (j_56 != k_56)))
              _fail(k_56);
            else
              j_56 = k_56;
          }
          t = not_null(j_56);
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
  ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL;
  q_56 = t;
  p_56 :
  if(match_cons(q_56, sym__2))
    {
      r_56 = ATgetArgument(q_56, 0);
      s_56 = ATgetArgument(q_56, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_y_9, not_null(r_56), not_null(s_56));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_99 (ATerm))
{
  ATerm i_20;
  i_20 = t;
  {
    ATerm x_3 (ATerm t)
    {
      t = term_j_20;
      t = x_99(t);
      return(t);
    }
    t = try_1(t, x_3);
  }
  t = i_20;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm a_57 = NULL;
      ATerm k_20;
      k_20 = t;
      {
        ATerm y_56 = NULL;
        ATerm z_56 = NULL;
        z_56 = t;
        if(((y_56 != NULL) && (y_56 != z_56)))
          _fail(z_56);
        else
          y_56 = z_56;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_14, not_null(y_56));
          t = set_config_0(t);
        }
      }
      t = k_20;
      {
        ATerm b_57 = NULL;
        b_57 = t;
        if(((a_57 != NULL) && (a_57 != b_57)))
          _fail(b_57);
        else
          a_57 = b_57;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_57));
      }
      return(t);
    }
    ATerm z_3 (ATerm t)
    {
      ATerm l_20 = t;
      int m_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_20 = t;
          int o_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(o_20);
            }
          else
            {
              t = n_20;
              {
                t = x_99(t);
                t = Cons_2(t, _id, z_3);
              }
            }
          ;
          LocalPopChoice(m_20);
        }
      else
        {
          t = l_20;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, y_3, z_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL;
  ATerm p_20;
  p_20 = t;
  {
    ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL;
    k_57 = t;
    g_57 :
    if(match_cons(k_57, sym__3))
      {
        l_57 = ATgetArgument(k_57, 0);
        m_57 = ATgetArgument(k_57, 1);
        n_57 = ATgetArgument(k_57, 2);
        {
          if(((h_57 != NULL) && (h_57 != l_57)))
            _fail(l_57);
          else
            h_57 = l_57;
          {
            if(((i_57 != NULL) && (i_57 != m_57)))
              _fail(m_57);
            else
              i_57 = m_57;
            {
              if(((j_57 != NULL) && (j_57 != n_57)))
                _fail(n_57);
              else
                j_57 = n_57;
              t = SSL_table_put(not_null(h_57), not_null(i_57), not_null(j_57));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = p_20;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_99 (ATerm))
{
  ATerm q_57 = NULL;
  ATerm q_20;
  q_20 = t;
  {
    t = term_r_20;
    t = table_put_0(t);
  }
  t = q_20;
  {
    ATerm a_4 (ATerm t)
    {
      ATerm s_20 = t;
      int t_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_99(t);
          ;
          LocalPopChoice(t_20);
        }
      else
        {
          t = s_20;
          {
            ATerm u_20 = t;
            int a_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(a_21);
              }
            else
              {
                t = u_20;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, a_4);
    {
      ATerm b_4 (ATerm t)
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_21;
            e_21 = t;
            {
              ATerm g_21 = t;
              int h_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_l_16;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(h_21);
                }
              else
                {
                  t = g_21;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = e_21;
            {
              t = system_usage_0(t);
              {
                t = term_q_12;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            {
              ATerm i_21 = t;
              int j_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_21;
                  k_21 = t;
                  {
                    t = term_b_19;
                    t = get_config_0(t);
                  }
                  t = k_21;
                  {
                    t = system_about_0(t);
                    {
                      t = term_q_12;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(j_21);
                }
              else
                {
                  t = i_21;
                  {
                    ATerm c_4 (ATerm t)
                    {
                      ATerm f_4 (ATerm t)
                      {
                        ATerm b_58 = NULL;
                        b_58 = t;
                        if(((q_57 != NULL) && (q_57 != b_58)))
                          _fail(b_58);
                        else
                          q_57 = b_58;
                        return(t);
                      }
                      t = Undefined_1(t, f_4);
                      return(t);
                    }
                    t = option_defined_1(t, c_4);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_57)), term_p_21));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_w_8;
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
      t = try_1(t, b_4);
      {
        ATerm q_21;
        q_21 = t;
        {
          t = term_x_17;
          t = table_destroy_0(t);
        }
        t = q_21;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm d_95 (ATerm), ATerm e_95 (ATerm), ATerm f_95 (ATerm), ATerm g_95 (ATerm))
{
  t = parse_options_1(t, d_95);
  {
    t = store_options_0(t);
    {
      t = f_95(t);
      {
        ATerm r_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, e_95);
            ;
            LocalPopChoice(s_21);
          }
        else
          {
            t = r_21;
            {
              ATerm d_22 = t;
              int e_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_95(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(e_22);
                }
              else
                {
                  t = d_22;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_94 (ATerm))
{
  ATerm o_4 (ATerm t)
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_94(t);
        ;
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, s_94);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, o_4, u_94, v_94, p_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm o_94 (ATerm))
{
  ATerm q_4 (ATerm t)
  {
    ATerm w_4 (ATerm t)
    {
      ATerm h_22;
      h_22 = t;
      {
        ATerm g_58 = NULL;
        ATerm h_58 = NULL;
        t = term_z_14;
        {
          t = get_config_0(t);
          {
            h_58 = t;
            if(((g_58 != NULL) && (g_58 != h_58)))
              _fail(h_58);
            else
              g_58 = h_58;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATempty, not_null(g_58)));
          t = printnl_0(t);
        }
      }
      t = h_22;
      return(t);
    }
    t = if_verbose2_1(t, w_4);
    return(t);
  }
  t = iowrap_4(t, m_94, n_94, o_94, q_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm k_94 (ATerm), ATerm l_94 (ATerm))
{
  t = iowrap_3(t, k_94, l_94, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm h_94 (ATerm))
{
  ATerm x_4 (ATerm t)
  {
    t = _2(t, _id, h_94);
    return(t);
  }
  t = iowrap_2(t, x_4, _fail);
  return(t);
}
ATerm rename_vars_0 (ATerm t)
{
  t = iowrap_1(t, strename_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_vars_0(t);
  return(t);
}
