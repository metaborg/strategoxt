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
  init_constant_terms();
}
ATerm term_j_16;
ATerm term_o_15;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_k_12;
ATerm term_g_12;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_r_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_g_8;
ATerm term_d_8;
ATerm term_b_8;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_h_7;
ATerm term_c_7;
ATerm term_x_6;
ATerm term_u_4;
void init_constant_terms (void)
{
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_t_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym__2, term_b_10, term_j_7);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_j_7);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym__2, term_v_12, term_w_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym__2, term_e_14, term_j_7);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym__2, term_j_14, term_j_7);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_j_7);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym__3, term_v_12, term_w_12, (ATerm) ATempty);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Let_2 (ATerm, ATerm o_64 (ATerm), ATerm p_64 (ATerm));
ATerm Op_2 (ATerm, ATerm u_61 (ATerm), ATerm v_61 (ATerm));
ATerm Var_1 (ATerm, ATerm n_0 (ATerm));
ATerm As_2 (ATerm, ATerm d_62 (ATerm), ATerm e_62 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm j_62 (ATerm));
ATerm Str_1 (ATerm, ATerm s_61 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm r_61 (ATerm));
ATerm Int_1 (ATerm, ATerm q_61 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm s_65 (ATerm), ATerm t_65 (ATerm));
ATerm Where_1 (ATerm, ATerm o_65 (ATerm));
ATerm Scope_2 (ATerm, ATerm y_64 (ATerm), ATerm z_64 (ATerm));
ATerm Build_1 (ATerm, ATerm w_64 (ATerm));
ATerm Match_1 (ATerm, ATerm v_64 (ATerm));
ATerm Thread_1 (ATerm, ATerm e_66 (ATerm));
ATerm All_1 (ATerm, ATerm d_66 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm c_66 (ATerm));
ATerm Cong_2 (ATerm, ATerm o_60 (ATerm), ATerm p_60 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm z_65 (ATerm), ATerm a_66 (ATerm));
ATerm Rec_2 (ATerm, ATerm l_65 (ATerm), ATerm m_65 (ATerm));
ATerm SVar_1 (ATerm, ATerm n_64 (ATerm));
ATerm Call_2 (ATerm, ATerm q_64 (ATerm), ATerm r_64 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm g_65 (ATerm), ATerm h_65 (ATerm));
ATerm GChoice_2 (ATerm, ATerm g_64 (ATerm), ATerm h_64 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm i_65 (ATerm), ATerm j_65 (ATerm), ATerm k_65 (ATerm));
ATerm LChoice_2 (ATerm, ATerm e_65 (ATerm), ATerm f_65 (ATerm));
ATerm Choice_2 (ATerm, ATerm c_64 (ATerm), ATerm d_64 (ATerm));
ATerm Seq_2 (ATerm, ATerm c_65 (ATerm), ATerm d_65 (ATerm));
ATerm Test_1 (ATerm, ATerm p_65 (ATerm));
ATerm Not_1 (ATerm, ATerm n_65 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm z_66 (ATerm), ATerm a_67 (ATerm));
ATerm Mod_2 (ATerm, ATerm r_66 (ATerm), ATerm s_66 (ATerm));
ATerm SDef_3 (ATerm, ATerm d_67 (ATerm), ATerm e_67 (ATerm), ATerm f_67 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm q_80 (ATerm));
ATerm Strategies_1 (ATerm, ATerm s_60 (ATerm));
ATerm Specification_1 (ATerm, ATerm x_60 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm d_59 (ATerm), ATerm e_59 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_81 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm c_94 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm y_92 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm a_96 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm k_92 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm c_88 (ATerm), ATerm d_88 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm n_86 (ATerm), ATerm o_86 (ATerm));
ATerm crush_2 (ATerm, ATerm g_90 (ATerm), ATerm h_90 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm b_94 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm y_96 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm z_98 (ATerm));
ATerm map_1 (ATerm, ATerm o_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm y_98 (ATerm));
ATerm Program_1 (ATerm, ATerm v_72 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm w_72 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_80 (ATerm));
ATerm option_defined_1 (ATerm, ATerm y_97 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_73 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm d_99 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm m_60 (ATerm), ATerm n_60 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm b_99 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm a_99 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm d_97 (ATerm));
ATerm iowrap_4 (ATerm, ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm s_96 (ATerm));
ATerm iowrap_3 (ATerm, ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm l_96 (ATerm));
ATerm iowrap_2 (ATerm, ATerm h_96 (ATerm), ATerm i_96 (ATerm));
ATerm iowrap_1 (ATerm, ATerm e_96 (ATerm));
ATerm main_0 (ATerm);
ATerm Let_2 (ATerm t, ATerm o_64 (ATerm), ATerm p_64 (ATerm))
{
  ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL;
  l_8 = t;
  h_8 :
  if(match_cons(l_8, sym_Let_2))
    {
      m_8 = ATgetArgument(l_8, 0);
      n_8 = ATgetArgument(l_8, 1);
      {
        ATerm v_10 = NULL,x_10 = NULL;
        ATerm w_10 = NULL;
        t = SSLgetAnnotations(not_null(l_8));
        {
          w_10 = t;
          if(((v_10 != NULL) && (v_10 != w_10)))
            _fail(w_10);
          else
            v_10 = w_10;
        }
        {
          t = not_null(m_8);
          {
            ATerm j_11 = NULL;
            t = o_64(t);
            {
              x_10 = t;
              {
                t = not_null(n_8);
                {
                  ATerm o_11 = NULL;
                  t = p_64(t);
                  {
                    j_11 = t;
                    {
                      ATerm p_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(x_10), not_null(j_11)), not_null(v_10));
                      {
                        p_11 = t;
                        if(((o_11 != NULL) && (o_11 != p_11)))
                          _fail(p_11);
                        else
                          o_11 = p_11;
                      }
                      t = not_null(o_11);
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
ATerm Op_2 (ATerm t, ATerm u_61 (ATerm), ATerm v_61 (ATerm))
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
  b_12 = t;
  a_12 :
  if(match_cons(b_12, sym_Op_2))
    {
      c_12 = ATgetArgument(b_12, 0);
      d_12 = ATgetArgument(b_12, 1);
      {
        ATerm h_12 = NULL,j_12 = NULL;
        ATerm i_12 = NULL;
        t = SSLgetAnnotations(not_null(b_12));
        {
          i_12 = t;
          if(((h_12 != NULL) && (h_12 != i_12)))
            _fail(i_12);
          else
            h_12 = i_12;
        }
        {
          t = not_null(c_12);
          {
            ATerm l_12 = NULL;
            t = u_61(t);
            {
              j_12 = t;
              {
                t = not_null(d_12);
                {
                  ATerm n_12 = NULL;
                  t = v_61(t);
                  {
                    l_12 = t;
                    {
                      ATerm o_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(j_12), not_null(l_12)), not_null(h_12));
                      {
                        o_12 = t;
                        if(((n_12 != NULL) && (n_12 != o_12)))
                          _fail(o_12);
                        else
                          n_12 = o_12;
                      }
                      t = not_null(n_12);
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
ATerm Var_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm h_13 = NULL,i_13 = NULL;
  h_13 = t;
  g_13 :
  if(match_cons(h_13, sym_Var_1))
    {
      i_13 = ATgetArgument(h_13, 0);
      {
        ATerm z_3 = t;
        int a_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_13 = NULL,n_13 = NULL;
            ATerm m_13 = NULL;
            t = SSLgetAnnotations(not_null(h_13));
            {
              m_13 = t;
              if(((l_13 != NULL) && (l_13 != m_13)))
                _fail(m_13);
              else
                l_13 = m_13;
            }
            {
              t = not_null(i_13);
              {
                ATerm p_13 = NULL;
                t = n_0(t);
                {
                  n_13 = t;
                  {
                    ATerm q_13 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(n_13)), not_null(l_13));
                    {
                      q_13 = t;
                      if(((p_13 != NULL) && (p_13 != q_13)))
                        _fail(q_13);
                      else
                        p_13 = q_13;
                    }
                    t = not_null(p_13);
                  }
                }
              }
            }
            ;
            LocalPopChoice(a_4);
          }
        else
          {
            t = z_3;
            {
              ATerm b_4 = t;
              int c_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_13 = NULL,v_13 = NULL;
                  ATerm u_13 = NULL;
                  t = SSLgetAnnotations(not_null(h_13));
                  {
                    u_13 = t;
                    if(((t_13 != NULL) && (t_13 != u_13)))
                      _fail(u_13);
                    else
                      t_13 = u_13;
                  }
                  {
                    t = not_null(i_13);
                    {
                      ATerm x_13 = NULL;
                      t = n_0(t);
                      {
                        v_13 = t;
                        {
                          ATerm y_13 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(v_13)), not_null(t_13));
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
                  ;
                  LocalPopChoice(c_4);
                }
              else
                {
                  t = b_4;
                  {
                    ATerm b_14 = NULL,d_14 = NULL;
                    ATerm c_14 = NULL;
                    t = SSLgetAnnotations(not_null(h_13));
                    {
                      c_14 = t;
                      if(((b_14 != NULL) && (b_14 != c_14)))
                        _fail(c_14);
                      else
                        b_14 = c_14;
                    }
                    {
                      t = not_null(i_13);
                      {
                        ATerm f_14 = NULL;
                        t = n_0(t);
                        {
                          d_14 = t;
                          {
                            ATerm g_14 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(d_14)), not_null(b_14));
                            {
                              g_14 = t;
                              if(((f_14 != NULL) && (f_14 != g_14)))
                                _fail(g_14);
                              else
                                f_14 = g_14;
                            }
                            t = not_null(f_14);
                          }
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
ATerm As_2 (ATerm t, ATerm d_62 (ATerm), ATerm e_62 (ATerm))
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
  z_14 = t;
  y_14 :
  if(match_cons(z_14, sym_As_2))
    {
      a_15 = ATgetArgument(z_14, 0);
      b_15 = ATgetArgument(z_14, 1);
      {
        ATerm f_15 = NULL,h_15 = NULL;
        ATerm g_15 = NULL;
        t = SSLgetAnnotations(not_null(z_14));
        {
          g_15 = t;
          if(((f_15 != NULL) && (f_15 != g_15)))
            _fail(g_15);
          else
            f_15 = g_15;
        }
        {
          t = not_null(a_15);
          {
            ATerm j_15 = NULL;
            t = d_62(t);
            {
              h_15 = t;
              {
                t = not_null(b_15);
                {
                  ATerm l_15 = NULL;
                  t = e_62(t);
                  {
                    j_15 = t;
                    {
                      ATerm m_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(h_15), not_null(j_15)), not_null(f_15));
                      {
                        m_15 = t;
                        if(((l_15 != NULL) && (l_15 != m_15)))
                          _fail(m_15);
                        else
                          l_15 = m_15;
                      }
                      t = not_null(l_15);
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
ATerm BuildDefault_1 (ATerm t, ATerm j_62 (ATerm))
{
  ATerm x_15 = NULL,y_15 = NULL;
  x_15 = t;
  w_15 :
  if(match_cons(x_15, sym_BuildDefault_1))
    {
      y_15 = ATgetArgument(x_15, 0);
      {
        ATerm b_16 = NULL,d_16 = NULL;
        ATerm c_16 = NULL;
        t = SSLgetAnnotations(not_null(x_15));
        {
          c_16 = t;
          if(((b_16 != NULL) && (b_16 != c_16)))
            _fail(c_16);
          else
            b_16 = c_16;
        }
        {
          t = not_null(y_15);
          {
            ATerm f_16 = NULL;
            t = j_62(t);
            {
              d_16 = t;
              {
                ATerm g_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(d_16)), not_null(b_16));
                {
                  g_16 = t;
                  if(((f_16 != NULL) && (f_16 != g_16)))
                    _fail(g_16);
                  else
                    f_16 = g_16;
                }
                t = not_null(f_16);
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
ATerm Str_1 (ATerm t, ATerm s_61 (ATerm))
{
  ATerm q_16 = NULL,r_16 = NULL;
  q_16 = t;
  p_16 :
  if(match_cons(q_16, sym_Str_1))
    {
      r_16 = ATgetArgument(q_16, 0);
      {
        ATerm u_16 = NULL,w_16 = NULL;
        ATerm v_16 = NULL;
        t = SSLgetAnnotations(not_null(q_16));
        {
          v_16 = t;
          if(((u_16 != NULL) && (u_16 != v_16)))
            _fail(v_16);
          else
            u_16 = v_16;
        }
        {
          t = not_null(r_16);
          {
            ATerm y_16 = NULL;
            t = s_61(t);
            {
              w_16 = t;
              {
                ATerm z_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(w_16)), not_null(u_16));
                {
                  z_16 = t;
                  if(((y_16 != NULL) && (y_16 != z_16)))
                    _fail(z_16);
                  else
                    y_16 = z_16;
                }
                t = not_null(y_16);
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
ATerm is_real_0 (ATerm t)
{
  ATerm f_17 = NULL;
  f_17 = t;
  t = SSL_is_real(not_null(f_17));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm r_61 (ATerm))
{
  ATerm n_17 = NULL,o_17 = NULL;
  n_17 = t;
  m_17 :
  if(match_cons(n_17, sym_Real_1))
    {
      o_17 = ATgetArgument(n_17, 0);
      {
        ATerm r_17 = NULL,t_17 = NULL;
        ATerm s_17 = NULL;
        t = SSLgetAnnotations(not_null(n_17));
        {
          s_17 = t;
          if(((r_17 != NULL) && (r_17 != s_17)))
            _fail(s_17);
          else
            r_17 = s_17;
        }
        {
          t = not_null(o_17);
          {
            ATerm v_17 = NULL;
            t = r_61(t);
            {
              t_17 = t;
              {
                ATerm w_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(t_17)), not_null(r_17));
                {
                  w_17 = t;
                  if(((v_17 != NULL) && (v_17 != w_17)))
                    _fail(w_17);
                  else
                    v_17 = w_17;
                }
                t = not_null(v_17);
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
ATerm Int_1 (ATerm t, ATerm q_61 (ATerm))
{
  ATerm g_18 = NULL,h_18 = NULL;
  g_18 = t;
  f_18 :
  if(match_cons(g_18, sym_Int_1))
    {
      h_18 = ATgetArgument(g_18, 0);
      {
        ATerm k_18 = NULL,m_18 = NULL;
        ATerm l_18 = NULL;
        t = SSLgetAnnotations(not_null(g_18));
        {
          l_18 = t;
          if(((k_18 != NULL) && (k_18 != l_18)))
            _fail(l_18);
          else
            k_18 = l_18;
        }
        {
          t = not_null(h_18);
          {
            ATerm o_18 = NULL;
            t = q_61(t);
            {
              m_18 = t;
              {
                ATerm p_18 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(m_18)), not_null(k_18));
                {
                  p_18 = t;
                  if(((o_18 != NULL) && (o_18 != p_18)))
                    _fail(p_18);
                  else
                    o_18 = p_18;
                }
                t = not_null(o_18);
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
ATerm Wld_0 (ATerm t)
{
  ATerm y_18 = NULL;
  y_18 = t;
  x_18 :
  if(match_cons(y_18, sym_Wld_0))
    {
      ATerm a_19 = NULL,c_19 = NULL;
      ATerm d_4;
      d_4 = t;
      {
        ATerm b_19 = NULL;
        t = SSLgetAnnotations(not_null(y_18));
        {
          b_19 = t;
          if(((a_19 != NULL) && (a_19 != b_19)))
            _fail(b_19);
          else
            a_19 = b_19;
        }
      }
      t = d_4;
      {
        ATerm d_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(a_19));
        {
          d_19 = t;
          if(((c_19 != NULL) && (c_19 != d_19)))
            _fail(d_19);
          else
            c_19 = d_19;
        }
        t = not_null(c_19);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm e_4 = t;
  int f_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      ;
      LocalPopChoice(f_4);
    }
  else
    {
      t = e_4;
      {
        ATerm g_4 = t;
        int h_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            ;
            LocalPopChoice(h_4);
          }
        else
          {
            t = g_4;
            {
              ATerm i_4 = t;
              int j_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  ;
                  LocalPopChoice(j_4);
                }
              else
                {
                  t = i_4;
                  {
                    ATerm k_4 = t;
                    int l_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        ;
                        LocalPopChoice(l_4);
                      }
                    else
                      {
                        t = k_4;
                        {
                          ATerm m_4 = t;
                          int n_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              ;
                              LocalPopChoice(n_4);
                            }
                          else
                            {
                              t = m_4;
                              {
                                ATerm o_4 = t;
                                int p_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    ;
                                    LocalPopChoice(p_4);
                                  }
                                else
                                  {
                                    t = o_4;
                                    {
                                      ATerm q_4 = t;
                                      int r_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm c_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, c_0, term_expression_0);
                                          ;
                                          LocalPopChoice(r_4);
                                        }
                                      else
                                        {
                                          t = q_4;
                                          {
                                            ATerm s_4 = t;
                                            int t_4 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm e_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, e_0);
                                                ;
                                                LocalPopChoice(t_4);
                                              }
                                            else
                                              {
                                                t = s_4;
                                                {
                                                  ATerm f_0 (ATerm t)
                                                  {
                                                    t = term_u_4;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, f_0);
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Prim_2 (ATerm t, ATerm s_65 (ATerm), ATerm t_65 (ATerm))
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
  o_19 = t;
  n_19 :
  if(match_cons(o_19, sym_Prim_2))
    {
      p_19 = ATgetArgument(o_19, 0);
      q_19 = ATgetArgument(o_19, 1);
      {
        ATerm u_19 = NULL,w_19 = NULL;
        ATerm v_19 = NULL;
        t = SSLgetAnnotations(not_null(o_19));
        {
          v_19 = t;
          if(((u_19 != NULL) && (u_19 != v_19)))
            _fail(v_19);
          else
            u_19 = v_19;
        }
        {
          t = not_null(p_19);
          {
            ATerm y_19 = NULL;
            t = s_65(t);
            {
              w_19 = t;
              {
                t = not_null(q_19);
                {
                  ATerm a_20 = NULL;
                  t = t_65(t);
                  {
                    y_19 = t;
                    {
                      ATerm b_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(w_19), not_null(y_19)), not_null(u_19));
                      {
                        b_20 = t;
                        if(((a_20 != NULL) && (a_20 != b_20)))
                          _fail(b_20);
                        else
                          a_20 = b_20;
                      }
                      t = not_null(a_20);
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
ATerm Where_1 (ATerm t, ATerm o_65 (ATerm))
{
  ATerm m_20 = NULL,n_20 = NULL;
  m_20 = t;
  l_20 :
  if(match_cons(m_20, sym_Where_1))
    {
      n_20 = ATgetArgument(m_20, 0);
      {
        ATerm q_20 = NULL,s_20 = NULL;
        ATerm r_20 = NULL;
        t = SSLgetAnnotations(not_null(m_20));
        {
          r_20 = t;
          if(((q_20 != NULL) && (q_20 != r_20)))
            _fail(r_20);
          else
            q_20 = r_20;
        }
        {
          t = not_null(n_20);
          {
            ATerm u_20 = NULL;
            t = o_65(t);
            {
              s_20 = t;
              {
                ATerm v_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(s_20)), not_null(q_20));
                {
                  v_20 = t;
                  if(((u_20 != NULL) && (u_20 != v_20)))
                    _fail(v_20);
                  else
                    u_20 = v_20;
                }
                t = not_null(u_20);
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
ATerm Scope_2 (ATerm t, ATerm y_64 (ATerm), ATerm z_64 (ATerm))
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
  g_21 = t;
  f_21 :
  if(match_cons(g_21, sym_Scope_2))
    {
      h_21 = ATgetArgument(g_21, 0);
      i_21 = ATgetArgument(g_21, 1);
      {
        ATerm m_21 = NULL,o_21 = NULL;
        ATerm n_21 = NULL;
        t = SSLgetAnnotations(not_null(g_21));
        {
          n_21 = t;
          if(((m_21 != NULL) && (m_21 != n_21)))
            _fail(n_21);
          else
            m_21 = n_21;
        }
        {
          t = not_null(h_21);
          {
            ATerm q_21 = NULL;
            t = y_64(t);
            {
              o_21 = t;
              {
                t = not_null(i_21);
                {
                  ATerm s_21 = NULL;
                  t = z_64(t);
                  {
                    q_21 = t;
                    {
                      ATerm t_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(o_21), not_null(q_21)), not_null(m_21));
                      {
                        t_21 = t;
                        if(((s_21 != NULL) && (s_21 != t_21)))
                          _fail(t_21);
                        else
                          s_21 = t_21;
                      }
                      t = not_null(s_21);
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
ATerm Build_1 (ATerm t, ATerm w_64 (ATerm))
{
  ATerm e_22 = NULL,f_22 = NULL;
  e_22 = t;
  d_22 :
  if(match_cons(e_22, sym_Build_1))
    {
      f_22 = ATgetArgument(e_22, 0);
      {
        ATerm i_22 = NULL,k_22 = NULL;
        ATerm j_22 = NULL;
        t = SSLgetAnnotations(not_null(e_22));
        {
          j_22 = t;
          if(((i_22 != NULL) && (i_22 != j_22)))
            _fail(j_22);
          else
            i_22 = j_22;
        }
        {
          t = not_null(f_22);
          {
            ATerm m_22 = NULL;
            t = w_64(t);
            {
              k_22 = t;
              {
                ATerm n_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(k_22)), not_null(i_22));
                {
                  n_22 = t;
                  if(((m_22 != NULL) && (m_22 != n_22)))
                    _fail(n_22);
                  else
                    m_22 = n_22;
                }
                t = not_null(m_22);
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
ATerm Match_1 (ATerm t, ATerm v_64 (ATerm))
{
  ATerm x_22 = NULL,y_22 = NULL;
  x_22 = t;
  w_22 :
  if(match_cons(x_22, sym_Match_1))
    {
      y_22 = ATgetArgument(x_22, 0);
      {
        ATerm b_23 = NULL,d_23 = NULL;
        ATerm c_23 = NULL;
        t = SSLgetAnnotations(not_null(x_22));
        {
          c_23 = t;
          if(((b_23 != NULL) && (b_23 != c_23)))
            _fail(c_23);
          else
            b_23 = c_23;
        }
        {
          t = not_null(y_22);
          {
            ATerm f_23 = NULL;
            t = v_64(t);
            {
              d_23 = t;
              {
                ATerm g_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(d_23)), not_null(b_23));
                {
                  g_23 = t;
                  if(((f_23 != NULL) && (f_23 != g_23)))
                    _fail(g_23);
                  else
                    f_23 = g_23;
                }
                t = not_null(f_23);
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
ATerm Thread_1 (ATerm t, ATerm e_66 (ATerm))
{
  ATerm q_23 = NULL,r_23 = NULL;
  q_23 = t;
  p_23 :
  if(match_cons(q_23, sym_Thread_1))
    {
      r_23 = ATgetArgument(q_23, 0);
      {
        ATerm u_23 = NULL,w_23 = NULL;
        ATerm v_23 = NULL;
        t = SSLgetAnnotations(not_null(q_23));
        {
          v_23 = t;
          if(((u_23 != NULL) && (u_23 != v_23)))
            _fail(v_23);
          else
            u_23 = v_23;
        }
        {
          t = not_null(r_23);
          {
            ATerm y_23 = NULL;
            t = e_66(t);
            {
              w_23 = t;
              {
                ATerm z_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(w_23)), not_null(u_23));
                {
                  z_23 = t;
                  if(((y_23 != NULL) && (y_23 != z_23)))
                    _fail(z_23);
                  else
                    y_23 = z_23;
                }
                t = not_null(y_23);
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
ATerm All_1 (ATerm t, ATerm d_66 (ATerm))
{
  ATerm j_24 = NULL,k_24 = NULL;
  j_24 = t;
  i_24 :
  if(match_cons(j_24, sym_All_1))
    {
      k_24 = ATgetArgument(j_24, 0);
      {
        ATerm n_24 = NULL,p_24 = NULL;
        ATerm o_24 = NULL;
        t = SSLgetAnnotations(not_null(j_24));
        {
          o_24 = t;
          if(((n_24 != NULL) && (n_24 != o_24)))
            _fail(o_24);
          else
            n_24 = o_24;
        }
        {
          t = not_null(k_24);
          {
            ATerm r_24 = NULL;
            t = d_66(t);
            {
              p_24 = t;
              {
                ATerm s_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(p_24)), not_null(n_24));
                {
                  s_24 = t;
                  if(((r_24 != NULL) && (r_24 != s_24)))
                    _fail(s_24);
                  else
                    r_24 = s_24;
                }
                t = not_null(r_24);
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
ATerm Some_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm g_25 = NULL,h_25 = NULL;
  g_25 = t;
  f_25 :
  if(match_cons(g_25, sym_Some_1))
    {
      h_25 = ATgetArgument(g_25, 0);
      {
        ATerm v_4 = t;
        int w_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_25 = NULL,m_25 = NULL;
            ATerm l_25 = NULL;
            t = SSLgetAnnotations(not_null(g_25));
            {
              l_25 = t;
              if(((k_25 != NULL) && (k_25 != l_25)))
                _fail(l_25);
              else
                k_25 = l_25;
            }
            {
              t = not_null(h_25);
              {
                ATerm o_25 = NULL;
                t = m_0(t);
                {
                  m_25 = t;
                  {
                    ATerm p_25 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(m_25)), not_null(k_25));
                    {
                      p_25 = t;
                      if(((o_25 != NULL) && (o_25 != p_25)))
                        _fail(p_25);
                      else
                        o_25 = p_25;
                    }
                    t = not_null(o_25);
                  }
                }
              }
            }
            ;
            LocalPopChoice(w_4);
          }
        else
          {
            t = v_4;
            {
              ATerm s_25 = NULL,u_25 = NULL;
              ATerm t_25 = NULL;
              t = SSLgetAnnotations(not_null(g_25));
              {
                t_25 = t;
                if(((s_25 != NULL) && (s_25 != t_25)))
                  _fail(t_25);
                else
                  s_25 = t_25;
              }
              {
                t = not_null(h_25);
                {
                  ATerm w_25 = NULL;
                  t = m_0(t);
                  {
                    u_25 = t;
                    {
                      ATerm x_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(u_25)), not_null(s_25));
                      {
                        x_25 = t;
                        if(((w_25 != NULL) && (w_25 != x_25)))
                          _fail(x_25);
                        else
                          w_25 = x_25;
                      }
                      t = not_null(w_25);
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
ATerm One_1 (ATerm t, ATerm c_66 (ATerm))
{
  ATerm l_26 = NULL,m_26 = NULL;
  l_26 = t;
  k_26 :
  if(match_cons(l_26, sym_One_1))
    {
      m_26 = ATgetArgument(l_26, 0);
      {
        ATerm p_26 = NULL,r_26 = NULL;
        ATerm q_26 = NULL;
        t = SSLgetAnnotations(not_null(l_26));
        {
          q_26 = t;
          if(((p_26 != NULL) && (p_26 != q_26)))
            _fail(q_26);
          else
            p_26 = q_26;
        }
        {
          t = not_null(m_26);
          {
            ATerm t_26 = NULL;
            t = c_66(t);
            {
              r_26 = t;
              {
                ATerm u_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(r_26)), not_null(p_26));
                {
                  u_26 = t;
                  if(((t_26 != NULL) && (t_26 != u_26)))
                    _fail(u_26);
                  else
                    t_26 = u_26;
                }
                t = not_null(t_26);
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
ATerm Cong_2 (ATerm t, ATerm o_60 (ATerm), ATerm p_60 (ATerm))
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
  k_27 = t;
  j_27 :
  if(match_cons(k_27, sym_Cong_2))
    {
      l_27 = ATgetArgument(k_27, 0);
      m_27 = ATgetArgument(k_27, 1);
      {
        ATerm t_27 = NULL,v_27 = NULL;
        ATerm u_27 = NULL;
        t = SSLgetAnnotations(not_null(k_27));
        {
          u_27 = t;
          if(((t_27 != NULL) && (t_27 != u_27)))
            _fail(u_27);
          else
            t_27 = u_27;
        }
        {
          t = not_null(l_27);
          {
            ATerm x_27 = NULL;
            t = o_60(t);
            {
              v_27 = t;
              {
                t = not_null(m_27);
                {
                  ATerm z_27 = NULL;
                  t = p_60(t);
                  {
                    x_27 = t;
                    {
                      ATerm a_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(v_27), not_null(x_27)), not_null(t_27));
                      {
                        a_28 = t;
                        if(((z_27 != NULL) && (z_27 != a_28)))
                          _fail(a_28);
                        else
                          z_27 = a_28;
                      }
                      t = not_null(z_27);
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
ATerm is_int_0 (ATerm t)
{
  ATerm h_28 = NULL;
  h_28 = t;
  t = SSL_is_int(not_null(h_28));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm z_65 (ATerm), ATerm a_66 (ATerm))
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
  q_28 = t;
  p_28 :
  if(match_cons(q_28, sym_Path_2))
    {
      r_28 = ATgetArgument(q_28, 0);
      s_28 = ATgetArgument(q_28, 1);
      {
        ATerm w_28 = NULL,y_28 = NULL;
        ATerm x_28 = NULL;
        t = SSLgetAnnotations(not_null(q_28));
        {
          x_28 = t;
          if(((w_28 != NULL) && (w_28 != x_28)))
            _fail(x_28);
          else
            w_28 = x_28;
        }
        {
          t = not_null(r_28);
          {
            ATerm a_29 = NULL;
            t = z_65(t);
            {
              y_28 = t;
              {
                t = not_null(s_28);
                {
                  ATerm c_29 = NULL;
                  t = a_66(t);
                  {
                    a_29 = t;
                    {
                      ATerm d_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(y_28), not_null(a_29)), not_null(w_28));
                      {
                        d_29 = t;
                        if(((c_29 != NULL) && (c_29 != d_29)))
                          _fail(d_29);
                        else
                          c_29 = d_29;
                      }
                      t = not_null(c_29);
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
ATerm Rec_2 (ATerm t, ATerm l_65 (ATerm), ATerm m_65 (ATerm))
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
  p_29 = t;
  o_29 :
  if(match_cons(p_29, sym_Rec_2))
    {
      q_29 = ATgetArgument(p_29, 0);
      r_29 = ATgetArgument(p_29, 1);
      {
        ATerm v_29 = NULL,x_29 = NULL;
        ATerm w_29 = NULL;
        t = SSLgetAnnotations(not_null(p_29));
        {
          w_29 = t;
          if(((v_29 != NULL) && (v_29 != w_29)))
            _fail(w_29);
          else
            v_29 = w_29;
        }
        {
          t = not_null(q_29);
          {
            ATerm z_29 = NULL;
            t = l_65(t);
            {
              x_29 = t;
              {
                t = not_null(r_29);
                {
                  ATerm b_30 = NULL;
                  t = m_65(t);
                  {
                    z_29 = t;
                    {
                      ATerm c_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(x_29), not_null(z_29)), not_null(v_29));
                      {
                        c_30 = t;
                        if(((b_30 != NULL) && (b_30 != c_30)))
                          _fail(c_30);
                        else
                          b_30 = c_30;
                      }
                      t = not_null(b_30);
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
ATerm SVar_1 (ATerm t, ATerm n_64 (ATerm))
{
  ATerm n_30 = NULL,o_30 = NULL;
  n_30 = t;
  m_30 :
  if(match_cons(n_30, sym_SVar_1))
    {
      o_30 = ATgetArgument(n_30, 0);
      {
        ATerm r_30 = NULL,t_30 = NULL;
        ATerm s_30 = NULL;
        t = SSLgetAnnotations(not_null(n_30));
        {
          s_30 = t;
          if(((r_30 != NULL) && (r_30 != s_30)))
            _fail(s_30);
          else
            r_30 = s_30;
        }
        {
          t = not_null(o_30);
          {
            ATerm v_30 = NULL;
            t = n_64(t);
            {
              t_30 = t;
              {
                ATerm w_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(t_30)), not_null(r_30));
                {
                  w_30 = t;
                  if(((v_30 != NULL) && (v_30 != w_30)))
                    _fail(w_30);
                  else
                    v_30 = w_30;
                }
                t = not_null(v_30);
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
ATerm Call_2 (ATerm t, ATerm q_64 (ATerm), ATerm r_64 (ATerm))
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL;
  h_31 = t;
  g_31 :
  if(match_cons(h_31, sym_Call_2))
    {
      i_31 = ATgetArgument(h_31, 0);
      j_31 = ATgetArgument(h_31, 1);
      {
        ATerm n_31 = NULL,p_31 = NULL;
        ATerm o_31 = NULL;
        t = SSLgetAnnotations(not_null(h_31));
        {
          o_31 = t;
          if(((n_31 != NULL) && (n_31 != o_31)))
            _fail(o_31);
          else
            n_31 = o_31;
        }
        {
          t = not_null(i_31);
          {
            ATerm r_31 = NULL;
            t = q_64(t);
            {
              p_31 = t;
              {
                t = not_null(j_31);
                {
                  ATerm t_31 = NULL;
                  t = r_64(t);
                  {
                    r_31 = t;
                    {
                      ATerm u_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(p_31), not_null(r_31)), not_null(n_31));
                      {
                        u_31 = t;
                        if(((t_31 != NULL) && (t_31 != u_31)))
                          _fail(u_31);
                        else
                          t_31 = u_31;
                      }
                      t = not_null(t_31);
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
ATerm LGChoice_2 (ATerm t, ATerm g_65 (ATerm), ATerm h_65 (ATerm))
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
  g_32 = t;
  f_32 :
  if(match_cons(g_32, sym_LGChoice_2))
    {
      h_32 = ATgetArgument(g_32, 0);
      i_32 = ATgetArgument(g_32, 1);
      {
        ATerm m_32 = NULL,o_32 = NULL;
        ATerm n_32 = NULL;
        t = SSLgetAnnotations(not_null(g_32));
        {
          n_32 = t;
          if(((m_32 != NULL) && (m_32 != n_32)))
            _fail(n_32);
          else
            m_32 = n_32;
        }
        {
          t = not_null(h_32);
          {
            ATerm q_32 = NULL;
            t = g_65(t);
            {
              o_32 = t;
              {
                t = not_null(i_32);
                {
                  ATerm s_32 = NULL;
                  t = h_65(t);
                  {
                    q_32 = t;
                    {
                      ATerm t_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(o_32), not_null(q_32)), not_null(m_32));
                      {
                        t_32 = t;
                        if(((s_32 != NULL) && (s_32 != t_32)))
                          _fail(t_32);
                        else
                          s_32 = t_32;
                      }
                      t = not_null(s_32);
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
ATerm GChoice_2 (ATerm t, ATerm g_64 (ATerm), ATerm h_64 (ATerm))
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
  h_33 = t;
  g_33 :
  if(match_cons(h_33, sym_GChoice_2))
    {
      i_33 = ATgetArgument(h_33, 0);
      j_33 = ATgetArgument(h_33, 1);
      {
        ATerm n_33 = NULL,p_33 = NULL;
        ATerm o_33 = NULL;
        t = SSLgetAnnotations(not_null(h_33));
        {
          o_33 = t;
          if(((n_33 != NULL) && (n_33 != o_33)))
            _fail(o_33);
          else
            n_33 = o_33;
        }
        {
          t = not_null(i_33);
          {
            ATerm r_33 = NULL;
            t = g_64(t);
            {
              p_33 = t;
              {
                t = not_null(j_33);
                {
                  ATerm t_33 = NULL;
                  t = h_64(t);
                  {
                    r_33 = t;
                    {
                      ATerm u_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(p_33), not_null(r_33)), not_null(n_33));
                      {
                        u_33 = t;
                        if(((t_33 != NULL) && (t_33 != u_33)))
                          _fail(u_33);
                        else
                          t_33 = u_33;
                      }
                      t = not_null(t_33);
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
ATerm GuardedLChoice_3 (ATerm t, ATerm i_65 (ATerm), ATerm j_65 (ATerm), ATerm k_65 (ATerm))
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL;
  h_34 = t;
  g_34 :
  if(match_cons(h_34, sym_GuardedLChoice_3))
    {
      i_34 = ATgetArgument(h_34, 0);
      j_34 = ATgetArgument(h_34, 1);
      k_34 = ATgetArgument(h_34, 2);
      {
        ATerm p_34 = NULL,r_34 = NULL;
        ATerm q_34 = NULL;
        t = SSLgetAnnotations(not_null(h_34));
        {
          q_34 = t;
          if(((p_34 != NULL) && (p_34 != q_34)))
            _fail(q_34);
          else
            p_34 = q_34;
        }
        {
          t = not_null(i_34);
          {
            ATerm v_34 = NULL;
            t = i_65(t);
            {
              r_34 = t;
              {
                t = not_null(j_34);
                {
                  ATerm x_34 = NULL;
                  t = j_65(t);
                  {
                    v_34 = t;
                    {
                      t = not_null(k_34);
                      {
                        ATerm z_34 = NULL;
                        t = k_65(t);
                        {
                          x_34 = t;
                          {
                            ATerm a_35 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(r_34), not_null(v_34), not_null(x_34)), not_null(p_34));
                            {
                              a_35 = t;
                              if(((z_34 != NULL) && (z_34 != a_35)))
                                _fail(a_35);
                              else
                                z_34 = a_35;
                            }
                            t = not_null(z_34);
                          }
                        }
                      }
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
ATerm LChoice_2 (ATerm t, ATerm e_65 (ATerm), ATerm f_65 (ATerm))
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
  n_35 = t;
  m_35 :
  if(match_cons(n_35, sym_LChoice_2))
    {
      o_35 = ATgetArgument(n_35, 0);
      p_35 = ATgetArgument(n_35, 1);
      {
        ATerm t_35 = NULL,v_35 = NULL;
        ATerm u_35 = NULL;
        t = SSLgetAnnotations(not_null(n_35));
        {
          u_35 = t;
          if(((t_35 != NULL) && (t_35 != u_35)))
            _fail(u_35);
          else
            t_35 = u_35;
        }
        {
          t = not_null(o_35);
          {
            ATerm x_35 = NULL;
            t = e_65(t);
            {
              v_35 = t;
              {
                t = not_null(p_35);
                {
                  ATerm z_35 = NULL;
                  t = f_65(t);
                  {
                    x_35 = t;
                    {
                      ATerm a_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(v_35), not_null(x_35)), not_null(t_35));
                      {
                        a_36 = t;
                        if(((z_35 != NULL) && (z_35 != a_36)))
                          _fail(a_36);
                        else
                          z_35 = a_36;
                      }
                      t = not_null(z_35);
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
ATerm Choice_2 (ATerm t, ATerm c_64 (ATerm), ATerm d_64 (ATerm))
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
  m_36 = t;
  l_36 :
  if(match_cons(m_36, sym_Choice_2))
    {
      n_36 = ATgetArgument(m_36, 0);
      o_36 = ATgetArgument(m_36, 1);
      {
        ATerm s_36 = NULL,u_36 = NULL;
        ATerm t_36 = NULL;
        t = SSLgetAnnotations(not_null(m_36));
        {
          t_36 = t;
          if(((s_36 != NULL) && (s_36 != t_36)))
            _fail(t_36);
          else
            s_36 = t_36;
        }
        {
          t = not_null(n_36);
          {
            ATerm w_36 = NULL;
            t = c_64(t);
            {
              u_36 = t;
              {
                t = not_null(o_36);
                {
                  ATerm y_36 = NULL;
                  t = d_64(t);
                  {
                    w_36 = t;
                    {
                      ATerm z_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(u_36), not_null(w_36)), not_null(s_36));
                      {
                        z_36 = t;
                        if(((y_36 != NULL) && (y_36 != z_36)))
                          _fail(z_36);
                        else
                          y_36 = z_36;
                      }
                      t = not_null(y_36);
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
ATerm Seq_2 (ATerm t, ATerm c_65 (ATerm), ATerm d_65 (ATerm))
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
  l_37 = t;
  k_37 :
  if(match_cons(l_37, sym_Seq_2))
    {
      m_37 = ATgetArgument(l_37, 0);
      n_37 = ATgetArgument(l_37, 1);
      {
        ATerm r_37 = NULL,t_37 = NULL;
        ATerm s_37 = NULL;
        t = SSLgetAnnotations(not_null(l_37));
        {
          s_37 = t;
          if(((r_37 != NULL) && (r_37 != s_37)))
            _fail(s_37);
          else
            r_37 = s_37;
        }
        {
          t = not_null(m_37);
          {
            ATerm v_37 = NULL;
            t = c_65(t);
            {
              t_37 = t;
              {
                t = not_null(n_37);
                {
                  ATerm x_37 = NULL;
                  t = d_65(t);
                  {
                    v_37 = t;
                    {
                      ATerm y_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(t_37), not_null(v_37)), not_null(r_37));
                      {
                        y_37 = t;
                        if(((x_37 != NULL) && (x_37 != y_37)))
                          _fail(y_37);
                        else
                          x_37 = y_37;
                      }
                      t = not_null(x_37);
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
ATerm Test_1 (ATerm t, ATerm p_65 (ATerm))
{
  ATerm j_38 = NULL,k_38 = NULL;
  j_38 = t;
  i_38 :
  if(match_cons(j_38, sym_Test_1))
    {
      k_38 = ATgetArgument(j_38, 0);
      {
        ATerm n_38 = NULL,p_38 = NULL;
        ATerm o_38 = NULL;
        t = SSLgetAnnotations(not_null(j_38));
        {
          o_38 = t;
          if(((n_38 != NULL) && (n_38 != o_38)))
            _fail(o_38);
          else
            n_38 = o_38;
        }
        {
          t = not_null(k_38);
          {
            ATerm r_38 = NULL;
            t = p_65(t);
            {
              p_38 = t;
              {
                ATerm s_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(p_38)), not_null(n_38));
                {
                  s_38 = t;
                  if(((r_38 != NULL) && (r_38 != s_38)))
                    _fail(s_38);
                  else
                    r_38 = s_38;
                }
                t = not_null(r_38);
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
ATerm Not_1 (ATerm t, ATerm n_65 (ATerm))
{
  ATerm c_39 = NULL,d_39 = NULL;
  c_39 = t;
  b_39 :
  if(match_cons(c_39, sym_Not_1))
    {
      d_39 = ATgetArgument(c_39, 0);
      {
        ATerm g_39 = NULL,i_39 = NULL;
        ATerm h_39 = NULL;
        t = SSLgetAnnotations(not_null(c_39));
        {
          h_39 = t;
          if(((g_39 != NULL) && (g_39 != h_39)))
            _fail(h_39);
          else
            g_39 = h_39;
        }
        {
          t = not_null(d_39);
          {
            ATerm k_39 = NULL;
            t = n_65(t);
            {
              i_39 = t;
              {
                ATerm l_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(i_39)), not_null(g_39));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm y_39 = NULL;
  y_39 = t;
  x_39 :
  if(match_cons(y_39, sym_Fail_0))
    {
      ATerm a_40 = NULL,c_40 = NULL;
      ATerm x_4;
      x_4 = t;
      {
        ATerm b_40 = NULL;
        t = SSLgetAnnotations(not_null(y_39));
        {
          b_40 = t;
          if(((a_40 != NULL) && (a_40 != b_40)))
            _fail(b_40);
          else
            a_40 = b_40;
        }
      }
      t = x_4;
      {
        ATerm d_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(a_40));
        {
          d_40 = t;
          if(((c_40 != NULL) && (c_40 != d_40)))
            _fail(d_40);
          else
            c_40 = d_40;
        }
        t = not_null(c_40);
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
  ATerm l_40 = NULL;
  l_40 = t;
  k_40 :
  if(match_cons(l_40, sym_Id_0))
    {
      ATerm n_40 = NULL,p_40 = NULL;
      ATerm y_4;
      y_4 = t;
      {
        ATerm o_40 = NULL;
        t = SSLgetAnnotations(not_null(l_40));
        {
          o_40 = t;
          if(((n_40 != NULL) && (n_40 != o_40)))
            _fail(o_40);
          else
            n_40 = o_40;
        }
      }
      t = y_4;
      {
        ATerm q_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(n_40));
        {
          q_40 = t;
          if(((p_40 != NULL) && (p_40 != q_40)))
            _fail(q_40);
          else
            p_40 = q_40;
        }
        t = not_null(p_40);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm z_4 = t;
  int a_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      ;
      LocalPopChoice(a_5);
    }
  else
    {
      t = z_4;
      {
        ATerm b_5 = t;
        int c_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            ;
            LocalPopChoice(c_5);
          }
        else
          {
            t = b_5;
            {
              ATerm d_5 = t;
              int e_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  ;
                  LocalPopChoice(e_5);
                }
              else
                {
                  t = d_5;
                  {
                    ATerm f_5 = t;
                    int g_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        ;
                        LocalPopChoice(g_5);
                      }
                    else
                      {
                        t = f_5;
                        {
                          ATerm h_5 = t;
                          int i_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              ;
                              LocalPopChoice(i_5);
                            }
                          else
                            {
                              t = h_5;
                              {
                                ATerm j_5 = t;
                                int k_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    ;
                                    LocalPopChoice(k_5);
                                  }
                                else
                                  {
                                    t = j_5;
                                    {
                                      ATerm l_5 = t;
                                      int m_5 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          ;
                                          LocalPopChoice(m_5);
                                        }
                                      else
                                        {
                                          t = l_5;
                                          {
                                            ATerm n_5 = t;
                                            int o_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
                                                ;
                                                LocalPopChoice(o_5);
                                              }
                                            else
                                              {
                                                t = n_5;
                                                {
                                                  ATerm p_5 = t;
                                                  int q_5 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      ;
                                                      LocalPopChoice(q_5);
                                                    }
                                                  else
                                                    {
                                                      t = p_5;
                                                      {
                                                        ATerm r_5 = t;
                                                        int s_5 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                            ;
                                                            LocalPopChoice(s_5);
                                                          }
                                                        else
                                                          {
                                                            t = r_5;
                                                            {
                                                              ATerm t_5 = t;
                                                              int u_5 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm h_0 (ATerm t)
                                                                  {
                                                                    ATerm p_0 (ATerm t)
                                                                    {
                                                                      ATerm v_5 = t;
                                                                      int w_5 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = is_string_0(t);
                                                                          ;
                                                                          LocalPopChoice(w_5);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = v_5;
                                                                          t = Mod_2(t, is_string_0, is_string_0);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = SVar_1(t, p_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm o_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, h_0, o_0);
                                                                  ;
                                                                  LocalPopChoice(u_5);
                                                                }
                                                              else
                                                                {
                                                                  t = t_5;
                                                                  {
                                                                    ATerm x_5 = t;
                                                                    int y_5 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
                                                                        ;
                                                                        LocalPopChoice(y_5);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = x_5;
                                                                        {
                                                                          ATerm z_5 = t;
                                                                          int a_6 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
                                                                              ;
                                                                              LocalPopChoice(a_6);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_5;
                                                                              {
                                                                                ATerm b_6 = t;
                                                                                int c_6 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm q_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, q_0);
                                                                                    ;
                                                                                    LocalPopChoice(c_6);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_6;
                                                                                    {
                                                                                      ATerm d_6 = t;
                                                                                      int e_6 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1(t, strategy_expression_0);
                                                                                          ;
                                                                                          LocalPopChoice(e_6);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = d_6;
                                                                                          {
                                                                                            ATerm f_6 = t;
                                                                                            int g_6 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1(t, strategy_expression_0);
                                                                                                ;
                                                                                                LocalPopChoice(g_6);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = f_6;
                                                                                                {
                                                                                                  ATerm h_6 = t;
                                                                                                  int i_6 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1(t, strategy_expression_0);
                                                                                                      ;
                                                                                                      LocalPopChoice(i_6);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = h_6;
                                                                                                      {
                                                                                                        ATerm j_6 = t;
                                                                                                        int k_6 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1(t, strategy_expression_0);
                                                                                                            ;
                                                                                                            LocalPopChoice(k_6);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = j_6;
                                                                                                            {
                                                                                                              ATerm l_6 = t;
                                                                                                              int m_6 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1(t, term_expression_0);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(m_6);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = l_6;
                                                                                                                  {
                                                                                                                    ATerm n_6 = t;
                                                                                                                    int o_6 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1(t, term_expression_0);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(o_6);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = n_6;
                                                                                                                        {
                                                                                                                          ATerm p_6 = t;
                                                                                                                          int q_6 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm r_0 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, r_0, strategy_expression_0);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(q_6);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = p_6;
                                                                                                                              {
                                                                                                                                ATerm r_6 = t;
                                                                                                                                int s_6 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1(t, strategy_expression_0);
                                                                                                                                    ;
                                                                                                                                    LocalPopChoice(s_6);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = r_6;
                                                                                                                                    {
                                                                                                                                      ATerm t_6 = t;
                                                                                                                                      int u_6 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm s_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Prim_2(t, is_string_0, s_0);
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(u_6);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = t_6;
                                                                                                                                          {
                                                                                                                                            ATerm v_6 = t;
                                                                                                                                            int w_6 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm t_0 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm u_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, u_0);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Let_2(t, t_0, strategy_expression_0);
                                                                                                                                                ;
                                                                                                                                                LocalPopChoice(w_6);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = v_6;
                                                                                                                                                {
                                                                                                                                                  ATerm v_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = term_x_6;
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = debug_1(t, v_0);
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm VarDec_2 (ATerm t, ATerm z_66 (ATerm), ATerm a_67 (ATerm))
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
  b_41 = t;
  a_41 :
  if(match_cons(b_41, sym_VarDec_2))
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
            t = z_66(t);
            {
              j_41 = t;
              {
                t = not_null(d_41);
                {
                  ATerm n_41 = NULL;
                  t = a_67(t);
                  {
                    l_41 = t;
                    {
                      ATerm p_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(j_41), not_null(l_41)), not_null(h_41));
                      {
                        p_41 = t;
                        if(((n_41 != NULL) && (n_41 != p_41)))
                          _fail(p_41);
                        else
                          n_41 = p_41;
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
ATerm Mod_2 (ATerm t, ATerm r_66 (ATerm), ATerm s_66 (ATerm))
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL;
  e_42 = t;
  d_42 :
  if(match_cons(e_42, sym_Mod_2))
    {
      f_42 = ATgetArgument(e_42, 0);
      g_42 = ATgetArgument(e_42, 1);
      {
        ATerm k_42 = NULL,m_42 = NULL;
        ATerm l_42 = NULL;
        t = SSLgetAnnotations(not_null(e_42));
        {
          l_42 = t;
          if(((k_42 != NULL) && (k_42 != l_42)))
            _fail(l_42);
          else
            k_42 = l_42;
        }
        {
          t = not_null(f_42);
          {
            ATerm o_42 = NULL;
            t = r_66(t);
            {
              m_42 = t;
              {
                t = not_null(g_42);
                {
                  ATerm q_42 = NULL;
                  t = s_66(t);
                  {
                    o_42 = t;
                    {
                      ATerm r_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Mod_2, not_null(m_42), not_null(o_42)), not_null(k_42));
                      {
                        r_42 = t;
                        if(((q_42 != NULL) && (q_42 != r_42)))
                          _fail(r_42);
                        else
                          q_42 = r_42;
                      }
                      t = not_null(q_42);
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
ATerm SDef_3 (ATerm t, ATerm d_67 (ATerm), ATerm e_67 (ATerm), ATerm f_67 (ATerm))
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL;
  h_43 = t;
  g_43 :
  if(match_cons(h_43, sym_SDef_3))
    {
      i_43 = ATgetArgument(h_43, 0);
      j_43 = ATgetArgument(h_43, 1);
      k_43 = ATgetArgument(h_43, 2);
      {
        ATerm q_43 = NULL,s_43 = NULL;
        ATerm r_43 = NULL;
        t = SSLgetAnnotations(not_null(h_43));
        {
          r_43 = t;
          if(((q_43 != NULL) && (q_43 != r_43)))
            _fail(r_43);
          else
            q_43 = r_43;
        }
        {
          t = not_null(i_43);
          {
            ATerm u_43 = NULL;
            t = d_67(t);
            {
              s_43 = t;
              {
                t = not_null(j_43);
                {
                  ATerm w_43 = NULL;
                  t = e_67(t);
                  {
                    u_43 = t;
                    {
                      t = not_null(k_43);
                      {
                        ATerm y_43 = NULL;
                        t = f_67(t);
                        {
                          w_43 = t;
                          {
                            ATerm z_43 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(s_43), not_null(u_43), not_null(w_43)), not_null(q_43));
                            {
                              z_43 = t;
                              if(((y_43 != NULL) && (y_43 != z_43)))
                                _fail(z_43);
                              else
                                y_43 = z_43;
                            }
                            t = not_null(y_43);
                          }
                        }
                      }
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
ATerm strategy_definition_0 (ATerm t)
{
  ATerm y_6 = t;
  int z_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 (ATerm t)
      {
        ATerm a_7 = t;
        int b_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_string_0(t);
            ;
            LocalPopChoice(b_7);
          }
        else
          {
            t = a_7;
            t = Mod_2(t, is_string_0, is_string_0);
          }
        return(t);
      }
      ATerm x_0 (ATerm t)
      {
        ATerm y_0 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, y_0);
        return(t);
      }
      t = SDef_3(t, w_0, x_0, strategy_expression_0);
      ;
      LocalPopChoice(z_6);
    }
  else
    {
      t = y_6;
      {
        ATerm z_0 (ATerm t)
        {
          t = term_c_7;
          return(t);
        }
        t = debug_1(t, z_0);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm q_80 (ATerm))
{
  ATerm g_44 (ATerm t)
  {
    ATerm d_7 = t;
    int e_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(e_7);
      }
    else
      {
        t = d_7;
        t = Cons_2(t, q_80, g_44);
      }
    return(t);
  }
  t = g_44(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm s_60 (ATerm))
{
  ATerm m_44 = NULL,n_44 = NULL;
  m_44 = t;
  l_44 :
  if(match_cons(m_44, sym_Strategies_1))
    {
      n_44 = ATgetArgument(m_44, 0);
      {
        ATerm q_44 = NULL,s_44 = NULL;
        ATerm r_44 = NULL;
        t = SSLgetAnnotations(not_null(m_44));
        {
          r_44 = t;
          if(((q_44 != NULL) && (q_44 != r_44)))
            _fail(r_44);
          else
            q_44 = r_44;
        }
        {
          t = not_null(n_44);
          {
            ATerm u_44 = NULL;
            t = s_60(t);
            {
              s_44 = t;
              {
                ATerm v_44 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(s_44)), not_null(q_44));
                {
                  v_44 = t;
                  if(((u_44 != NULL) && (u_44 != v_44)))
                    _fail(v_44);
                  else
                    u_44 = v_44;
                }
                t = not_null(u_44);
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
ATerm Specification_1 (ATerm t, ATerm x_60 (ATerm))
{
  ATerm l_45 = NULL,m_45 = NULL;
  l_45 = t;
  k_45 :
  if(match_cons(l_45, sym_Specification_1))
    {
      m_45 = ATgetArgument(l_45, 0);
      {
        ATerm p_45 = NULL,r_45 = NULL;
        ATerm q_45 = NULL;
        t = SSLgetAnnotations(not_null(l_45));
        {
          q_45 = t;
          if(((p_45 != NULL) && (p_45 != q_45)))
            _fail(q_45);
          else
            p_45 = q_45;
        }
        {
          t = not_null(m_45);
          {
            ATerm t_45 = NULL;
            t = x_60(t);
            {
              r_45 = t;
              {
                ATerm u_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(r_45)), not_null(p_45));
                {
                  u_45 = t;
                  if(((t_45 != NULL) && (t_45 != u_45)))
                    _fail(u_45);
                  else
                    t_45 = u_45;
                }
                t = not_null(t_45);
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
ATerm stratego_specification_0 (ATerm t)
{
  ATerm f_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_1 (ATerm t)
      {
        ATerm b_1 (ATerm t)
        {
          ATerm c_1 (ATerm t)
          {
            ATerm d_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, d_1);
            return(t);
          }
          t = Cons_2(t, c_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, b_1);
        return(t);
      }
      t = Specification_1(t, a_1);
      ;
      LocalPopChoice(g_7);
    }
  else
    {
      t = f_7;
      {
        ATerm e_1 (ATerm t)
        {
          t = term_h_7;
          return(t);
        }
        t = debug_1(t, e_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm d_59 (ATerm), ATerm e_59 (ATerm))
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
  f_46 = t;
  e_46 :
  if(match_cons(f_46, sym__2))
    {
      g_46 = ATgetArgument(f_46, 0);
      h_46 = ATgetArgument(f_46, 1);
      {
        ATerm l_46 = NULL,n_46 = NULL;
        ATerm m_46 = NULL;
        t = SSLgetAnnotations(not_null(f_46));
        {
          m_46 = t;
          if(((l_46 != NULL) && (l_46 != m_46)))
            _fail(m_46);
          else
            l_46 = m_46;
        }
        {
          t = not_null(g_46);
          {
            ATerm p_46 = NULL;
            t = d_59(t);
            {
              n_46 = t;
              {
                t = not_null(h_46);
                {
                  ATerm r_46 = NULL;
                  t = e_59(t);
                  {
                    p_46 = t;
                    {
                      ATerm s_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(n_46), not_null(p_46)), not_null(l_46));
                      {
                        s_46 = t;
                        if(((r_46 != NULL) && (r_46 != s_46)))
                          _fail(s_46);
                        else
                          r_46 = s_46;
                      }
                      t = not_null(r_46);
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
  ATerm i_7;
  i_7 = t;
  {
    ATerm z_46 = NULL;
    ATerm a_47 = NULL;
    t = term_j_7;
    {
      t = whoami_0(t);
      {
        a_47 = t;
        if(((z_46 != NULL) && (z_46 != a_47)))
          _fail(a_47);
        else
          z_46 = a_47;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_7), not_null(z_46)), term_l_7));
      {
        t = printnl_0(t);
        {
          t = term_n_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = i_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL;
  e_47 = t;
  d_47 :
  if(match_cons(e_47, sym__2))
    {
      f_47 = ATgetArgument(e_47, 0);
      g_47 = ATgetArgument(e_47, 1);
      {
        ATerm o_7;
        o_7 = t;
        t = SSL_printnl(not_null(f_47), not_null(g_47));
        t = o_7;
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
  ATerm l_47 = NULL;
  l_47 = t;
  t = SSL_implode_string(not_null(l_47));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(q_7);
    }
  else
    {
      t = p_7;
      {
        ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL;
        q_47 = t;
        p_47 :
        if(((ATgetType(q_47) == AT_LIST) && !(ATisEmpty(q_47))))
          {
            r_47 = ATgetFirst((ATermList) q_47);
            s_47 = (ATerm) ATgetNext((ATermList) q_47);
            {
              t = not_null(r_47);
              {
                ATerm f_1 (ATerm t)
                {
                  t = not_null(s_47);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, f_1);
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
  ATerm c_48 = NULL;
  ATerm e_48 = NULL;
  c_48 = t;
  {
    ATerm j_48 = NULL;
    ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL;
    t = not_null(c_48);
    {
      j_48 = t;
      {
        t = SSL_explode_term(not_null(j_48));
        {
          q_48 = t;
          a_48 :
          if(match_cons(q_48, sym__2))
            {
              r_48 = ATgetArgument(q_48, 0);
              s_48 = ATgetArgument(q_48, 1);
              b_48 :
              if(match_string(r_48, ""))
                {
                  if(((e_48 != NULL) && (e_48 != s_48)))
                    _fail(s_48);
                  else
                    e_48 = s_48;
                }
              else
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
      t = not_null(e_48);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_81 (ATerm))
{
  ATerm w_48 (ATerm t)
  {
    ATerm r_7 = t;
    int s_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, w_48);
        ;
        LocalPopChoice(s_7);
      }
    else
      {
        t = r_7;
        {
          t = Nil_0(t);
          t = d_81(t);
        }
      }
    return(t);
  }
  t = w_48(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL;
  z_48 = t;
  y_48 :
  if(match_cons(z_48, sym__2))
    {
      a_49 = ATgetArgument(z_48, 0);
      b_49 = ATgetArgument(z_48, 1);
      {
        t = not_null(a_49);
        {
          ATerm g_1 (ATerm t)
          {
            t = not_null(b_49);
            return(t);
          }
          t = at_end_1(t, g_1);
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
  ATerm t_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(u_7);
    }
  else
    {
      t = t_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm g_49 = NULL;
  g_49 = t;
  t = SSL_explode_string(not_null(g_49));
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
  ATerm v_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(w_7);
    }
  else
    {
      t = v_7;
      {
        ATerm x_7 = t;
        int y_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, h_1);
            ;
            LocalPopChoice(y_7);
          }
        else
          {
            t = x_7;
            {
              ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL;
              r_49 = t;
              q_49 :
              if(match_cons(r_49, sym_Path_1))
                {
                  s_49 = ATgetArgument(r_49, 0);
                  t = not_null(s_49);
                }
              else
                {
                  if(match_cons(r_49, sym_Var_1))
                    {
                      s_49 = ATgetArgument(r_49, 0);
                      {
                        t = not_null(s_49);
                        {
                          ATerm z_7 = t;
                          int a_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(a_8);
                            }
                          else
                            {
                              t = z_7;
                              {
                                ATerm i_1 (ATerm t)
                                {
                                  t = term_b_8;
                                  return(t);
                                }
                                t = debug_1(t, i_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(r_49, sym_Prefix_2))
                        {
                          s_49 = ATgetArgument(r_49, 0);
                          t_49 = ATgetArgument(r_49, 1);
                          {
                            ATerm d_50 = NULL,f_50 = NULL;
                            ATerm c_8;
                            c_8 = t;
                            {
                              ATerm e_50 = NULL;
                              t = not_null(s_49);
                              {
                                t = eval_config_0(t);
                                {
                                  e_50 = t;
                                  if(((d_50 != NULL) && (d_50 != e_50)))
                                    _fail(e_50);
                                  else
                                    d_50 = e_50;
                                }
                              }
                            }
                            t = c_8;
                            {
                              ATerm g_50 = NULL;
                              t = not_null(t_49);
                              {
                                t = eval_config_0(t);
                                {
                                  g_50 = t;
                                  if(((f_50 != NULL) && (f_50 != g_50)))
                                    _fail(g_50);
                                  else
                                    f_50 = g_50;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_50), not_null(f_50));
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
  ATerm o_50 = NULL;
  o_50 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_8, not_null(o_50));
    {
      t = table_get_0(t);
      {
        ATerm j_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_8;
            e_8 = t;
            {
              ATerm r_50 = NULL;
              ATerm s_50 = NULL;
              s_50 = t;
              if(((r_50 != NULL) && (r_50 != s_50)))
                _fail(s_50);
              else
                r_50 = s_50;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_d_8, not_null(o_50), not_null(r_50));
                t = table_put_0(t);
              }
            }
            t = e_8;
          }
          return(t);
        }
        t = try_1(t, j_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm c_94 (ATerm))
{
  ATerm k_1 (ATerm t)
  {
    ATerm f_8;
    f_8 = t;
    {
      ATerm w_50 = NULL;
      ATerm x_50 = NULL;
      t = term_g_8;
      {
        t = get_config_0(t);
        {
          x_50 = t;
          if(((w_50 != NULL) && (w_50 != x_50)))
            _fail(x_50);
          else
            w_50 = x_50;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_50), term_i_8);
        t = geq_0(t);
      }
    }
    t = f_8;
    t = c_94(t);
    return(t);
  }
  t = try_1(t, k_1);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL,m_51 = NULL;
  d_51 = t;
  b_51 :
  if(match_cons(d_51, sym__2))
    {
      e_51 = ATgetArgument(d_51, 0);
      f_51 = ATgetArgument(d_51, 1);
      c_51 :
      if(match_cons(f_51, sym_Stream_1))
        {
          m_51 = ATgetArgument(f_51, 0);
          {
            ATerm q_51 = NULL;
            t = SSL_fputc(not_null(e_51), not_null(m_51));
            {
              ATerm r_51 = NULL;
              r_51 = t;
              if(((q_51 != NULL) && (q_51 != r_51)))
                _fail(r_51);
              else
                q_51 = r_51;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_51));
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
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL;
  y_51 = t;
  w_51 :
  if(match_cons(y_51, sym__2))
    {
      z_51 = ATgetArgument(y_51, 0);
      b_52 = ATgetArgument(y_51, 1);
      x_51 :
      if(match_cons(z_51, sym_Stream_1))
        {
          a_52 = ATgetArgument(z_51, 0);
          {
            ATerm e_52 = NULL;
            t = SSL_write_term_to_stream_text(not_null(a_52), not_null(b_52));
            {
              ATerm f_52 = NULL;
              f_52 = t;
              if(((e_52 != NULL) && (e_52 != f_52)))
                _fail(f_52);
              else
                e_52 = f_52;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_52));
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
  ATerm l_1 (ATerm t)
  {
    ATerm j_52 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm k_52 = NULL;
      k_52 = t;
      if(((j_52 != NULL) && (j_52 != k_52)))
        _fail(k_52);
      else
        j_52 = k_52;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_8, not_null(j_52));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, l_1);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL;
  q_52 = t;
  o_52 :
  if(match_cons(q_52, sym__2))
    {
      r_52 = ATgetArgument(q_52, 0);
      t_52 = ATgetArgument(q_52, 1);
      p_52 :
      if(match_cons(r_52, sym_Stream_1))
        {
          s_52 = ATgetArgument(r_52, 0);
          {
            ATerm w_52 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(s_52), not_null(t_52));
            {
              ATerm x_52 = NULL;
              x_52 = t;
              if(((w_52 != NULL) && (w_52 != x_52)))
                _fail(x_52);
              else
                w_52 = x_52;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_52));
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
ATerm WriteToFile_1 (ATerm t, ATerm y_92 (ATerm))
{
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL;
  e_53 = t;
  d_53 :
  if(match_cons(e_53, sym__2))
    {
      f_53 = ATgetArgument(e_53, 0);
      g_53 = ATgetArgument(e_53, 1);
      {
        ATerm j_53 = NULL,l_53 = NULL;
        t = not_null(f_53);
        {
          ATerm k_53 = NULL;
          k_53 = t;
          if(((j_53 != NULL) && (j_53 != k_53)))
            _fail(k_53);
          else
            j_53 = k_53;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_53), term_k_8);
            {
              t = open_stream_0(t);
              {
                ATerm m_53 = NULL;
                m_53 = t;
                if(((l_53 != NULL) && (l_53 != m_53)))
                  _fail(m_53);
                else
                  l_53 = m_53;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_53), not_null(g_53));
                  {
                    t = y_92(t);
                    {
                      t = fclose_0(t);
                      t = not_null(g_53);
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
  ATerm u_53 = NULL;
  ATerm o_8;
  o_8 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm p_8 = t;
      int q_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_1 (ATerm t)
          {
            ATerm v_53 = NULL,b_54 = NULL;
            v_53 = t;
            r_53 :
            if(match_cons(v_53, sym_Output_1))
              {
                b_54 = ATgetArgument(v_53, 0);
                if(((u_53 != NULL) && (u_53 != b_54)))
                  _fail(b_54);
                else
                  u_53 = b_54;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, n_1);
          ;
          LocalPopChoice(q_8);
        }
      else
        {
          t = p_8;
          {
            ATerm c_54 = NULL;
            t = term_r_8;
            {
              c_54 = t;
              if(((u_53 != NULL) && (u_53 != c_54)))
                _fail(c_54);
              else
                u_53 = c_54;
            }
          }
        }
      return(t);
    }
    t = _2(t, m_1, _id);
  }
  t = o_8;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm p_1 (ATerm t)
      {
        t = not_null(u_53);
        return(t);
      }
      t = split_2(t, p_1, _id);
      return(t);
    }
    t = _2(t, _id, o_1);
    {
      ATerm s_8 = t;
      int t_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_1 (ATerm t)
          {
            ATerm r_1 (ATerm t)
            {
              ATerm d_54 = NULL;
              d_54 = t;
              t_53 :
              if(!(match_cons(d_54, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, r_1);
            return(t);
          }
          t = _2(t, q_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(t_8);
        }
      else
        {
          t = s_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm a_96 (ATerm))
{
  ATerm q_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL;
  ATerm u_8;
  u_8 = t;
  t = dtime_0(t);
  t = u_8;
  {
    t = a_96(t);
    {
      ATerm v_8;
      v_8 = t;
      {
        ATerm r_54 = NULL;
        t = dtime_0(t);
        {
          r_54 = t;
          if(((q_54 != NULL) && (q_54 != r_54)))
            _fail(r_54);
          else
            q_54 = r_54;
        }
      }
      t = v_8;
      {
        s_54 = t;
        i_54 :
        if(match_cons(s_54, sym__2))
          {
            t_54 = ATgetArgument(s_54, 0);
            u_54 = ATgetArgument(s_54, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_54)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(q_54))), not_null(u_54));
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
  ATerm c_55 = NULL,d_55 = NULL;
  ATerm j_55 (ATerm t)
  {
    t = SSL_fclose(not_null(d_55));
    return(t);
  }
  d_55 = t;
  b_55 :
  if(match_cons(d_55, sym_Stream_1))
    {
      c_55 = ATgetArgument(d_55, 0);
      {
        ATerm w_8 = t;
        int x_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(c_55));
            ;
            LocalPopChoice(x_8);
          }
        else
          {
            t = w_8;
            t = j_55(t);
          }
      }
    }
  else
    {
      t = j_55(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL;
  m_55 = t;
  l_55 :
  if(match_cons(m_55, sym_Stream_1))
    {
      n_55 = ATgetArgument(m_55, 0);
      t = SSL_read_term_from_stream(not_null(n_55));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm k_92 (ATerm))
{
  ATerm y_8;
  y_8 = t;
  {
    ATerm s_55 = NULL,u_55 = NULL;
    ATerm z_8;
    z_8 = t;
    {
      ATerm t_55 = NULL;
      t = k_92(t);
      {
        t_55 = t;
        if(((s_55 != NULL) && (s_55 != t_55)))
          _fail(t_55);
        else
          s_55 = t_55;
      }
    }
    t = z_8;
    {
      ATerm v_55 = NULL;
      v_55 = t;
      if(((u_55 != NULL) && (u_55 != v_55)))
        _fail(v_55);
      else
        u_55 = v_55;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_55)), not_null(s_55)));
        t = printnl_0(t);
      }
    }
  }
  t = y_8;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL,k_56 = NULL;
  i_56 = t;
  h_56 :
  if(match_cons(i_56, sym__2))
    {
      j_56 = ATgetArgument(i_56, 0);
      k_56 = ATgetArgument(i_56, 1);
      {
        ATerm n_56 = NULL;
        t = SSL_fopen(not_null(j_56), not_null(k_56));
        {
          ATerm o_56 = NULL;
          o_56 = t;
          if(((n_56 != NULL) && (n_56 != o_56)))
            _fail(o_56);
          else
            n_56 = o_56;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_56));
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
  ATerm s_56 = NULL;
  s_56 = t;
  t = SSL_is_string(not_null(s_56));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm w_56 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm x_56 = NULL;
    x_56 = t;
    if(((w_56 != NULL) && (w_56 != x_56)))
      _fail(x_56);
    else
      w_56 = x_56;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_56));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm a_57 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm b_57 = NULL;
    b_57 = t;
    if(((a_57 != NULL) && (a_57 != b_57)))
      _fail(b_57);
    else
      a_57 = b_57;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_57));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm e_57 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm f_57 = NULL;
    f_57 = t;
    if(((e_57 != NULL) && (e_57 != f_57)))
      _fail(f_57);
    else
      e_57 = f_57;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_57));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm l_57 = NULL;
  l_57 = t;
  k_57 :
  if(match_cons(l_57, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(l_57, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(l_57, sym_stdin_0))
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
  ATerm v_57 = NULL;
  ATerm x_57 = NULL,y_57 = NULL;
  v_57 = t;
  {
    ATerm z_57 = NULL;
    ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL;
    t = not_null(v_57);
    {
      z_57 = t;
      {
        t = SSL_explode_term(not_null(z_57));
        {
          b_58 = t;
          s_57 :
          if(match_cons(b_58, sym__2))
            {
              c_58 = ATgetArgument(b_58, 0);
              d_58 = ATgetArgument(b_58, 1);
              t_57 :
              if(match_string(c_58, ""))
                {
                  u_57 :
                  if(((ATgetType(d_58) == AT_LIST) && !(ATisEmpty(d_58))))
                    {
                      e_58 = ATgetFirst((ATermList) d_58);
                      f_58 = (ATerm) ATgetNext((ATermList) d_58);
                      {
                        if(((y_57 != NULL) && (y_57 != e_58)))
                          _fail(e_58);
                        else
                          y_57 = e_58;
                        if(((x_57 != NULL) && (x_57 != f_58)))
                          _fail(f_58);
                        else
                          x_57 = f_58;
                      }
                    }
                  else
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
    t = not_null(y_57);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL;
  n_58 = t;
  m_58 :
  if(match_cons(n_58, sym__2))
    {
      o_58 = ATgetArgument(n_58, 0);
      p_58 = ATgetArgument(n_58, 1);
      {
        ATerm a_9 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(b_9);
          }
        else
          {
            t = a_9;
            {
              ATerm c_9 = t;
              int d_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_1 (ATerm t)
                  {
                    ATerm q_58 = NULL,r_58 = NULL;
                    q_58 = t;
                    l_58 :
                    if(match_cons(q_58, sym_Path_1))
                      {
                        r_58 = ATgetArgument(q_58, 0);
                        t = not_null(r_58);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, s_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(d_9);
                }
              else
                {
                  t = c_9;
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
  ATerm z_58 = NULL;
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_58 = NULL;
      ATerm y_58 = NULL;
      y_58 = t;
      if(((x_58 != NULL) && (x_58 != y_58)))
        _fail(y_58);
      else
        x_58 = y_58;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_58), term_g_9);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        ATerm t_1 (ATerm t)
        {
          t = term_h_9;
          return(t);
        }
        t = debug_1(t, t_1);
        _fail(t);
      }
    }
  {
    ATerm i_9;
    i_9 = t;
    {
      ATerm a_59 = NULL;
      t = read_from_stream_0(t);
      {
        a_59 = t;
        if(((z_58 != NULL) && (z_58 != a_59)))
          _fail(a_59);
        else
          z_58 = a_59;
      }
    }
    t = i_9;
    {
      t = fclose_0(t);
      t = not_null(z_58);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm c_88 (ATerm), ATerm d_88 (ATerm))
{
  ATerm h_59 = NULL,j_59 = NULL;
  ATerm j_9;
  j_9 = t;
  {
    ATerm i_59 = NULL;
    t = c_88(t);
    {
      i_59 = t;
      if(((h_59 != NULL) && (h_59 != i_59)))
        _fail(i_59);
      else
        h_59 = i_59;
    }
  }
  t = j_9;
  {
    ATerm k_59 = NULL;
    t = d_88(t);
    {
      k_59 = t;
      if(((j_59 != NULL) && (j_59 != k_59)))
        _fail(k_59);
      else
        j_59 = k_59;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_59), not_null(j_59));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm q_59 = NULL;
  ATerm k_9;
  k_9 = t;
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 (ATerm t)
        {
          ATerm r_59 = NULL,s_59 = NULL;
          r_59 = t;
          o_59 :
          if(match_cons(r_59, sym_Input_1))
            {
              s_59 = ATgetArgument(r_59, 0);
              if(((q_59 != NULL) && (q_59 != s_59)))
                _fail(s_59);
              else
                q_59 = s_59;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, u_1);
        ;
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
        {
          ATerm t_59 = NULL;
          t = term_n_9;
          {
            t_59 = t;
            if(((q_59 != NULL) && (q_59 != t_59)))
              _fail(t_59);
            else
              q_59 = t_59;
          }
        }
      }
  }
  t = k_9;
  {
    ATerm v_1 (ATerm t)
    {
      t = not_null(q_59);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, v_1);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm y_59 = NULL;
    y_59 = t;
    w_59 :
    if(!(match_string(y_59, "-k")))
      {
        if(!(match_string(y_59, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    ATerm o_9;
    o_9 = t;
    {
      ATerm z_59 = NULL;
      ATerm a_60 = NULL;
      t = string_to_int_0(t);
      {
        a_60 = t;
        if(((z_59 != NULL) && (z_59 != a_60)))
          _fail(a_60);
        else
          z_59 = a_60;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_9, not_null(z_59));
        t = set_config_0(t);
      }
    }
    t = o_9;
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    t = term_q_9;
    return(t);
  }
  t = ArgOption_3(t, w_1, x_1, y_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm d_60 = NULL;
  d_60 = t;
  t = SSL_string_to_int(not_null(d_60));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm r_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_1 (ATerm t)
      {
        ATerm l_60 = NULL;
        l_60 = t;
        g_60 :
        if(!(match_string(l_60, "-S")))
          {
            if(!(match_string(l_60, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm a_2 (ATerm t)
      {
        t = term_u_9;
        t = set_config_0(t);
        t = term_v_9;
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        t = term_w_9;
        return(t);
      }
      t = Option_3(t, z_1, a_2, b_2);
      ;
      LocalPopChoice(s_9);
    }
  else
    {
      t = r_9;
      {
        ATerm x_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_2 (ATerm t)
            {
              ATerm q_60 = NULL;
              q_60 = t;
              h_60 :
              if(!(match_string(q_60, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm d_2 (ATerm t)
            {
              ATerm u_60 = NULL;
              ATerm z_9;
              z_9 = t;
              {
                ATerm r_60 = NULL;
                ATerm t_60 = NULL;
                t = string_to_int_0(t);
                {
                  t_60 = t;
                  if(((r_60 != NULL) && (r_60 != t_60)))
                    _fail(t_60);
                  else
                    r_60 = t_60;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_8, not_null(r_60));
                  t = set_config_0(t);
                }
              }
              t = z_9;
              {
                ATerm v_60 = NULL;
                v_60 = t;
                if(((u_60 != NULL) && (u_60 != v_60)))
                  _fail(v_60);
                else
                  u_60 = v_60;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(u_60));
              }
              return(t);
            }
            ATerm e_2 (ATerm t)
            {
              t = term_a_10;
              return(t);
            }
            t = ArgOption_3(t, c_2, d_2, e_2);
            ;
            LocalPopChoice(y_9);
          }
        else
          {
            t = x_9;
            {
              ATerm f_2 (ATerm t)
              {
                ATerm w_60 = NULL;
                w_60 = t;
                k_60 :
                if(!(match_string(w_60, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm g_2 (ATerm t)
              {
                t = term_c_10;
                t = set_config_0(t);
                t = term_d_10;
                return(t);
              }
              ATerm h_2 (ATerm t)
              {
                t = term_e_10;
                return(t);
              }
              t = Option_3(t, f_2, g_2, h_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm d_61 = NULL;
    d_61 = t;
    a_61 :
    if(!(match_string(d_61, "-o")))
      {
        if(!(match_string(d_61, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    ATerm g_61 = NULL;
    ATerm h_10;
    h_10 = t;
    {
      ATerm e_61 = NULL;
      ATerm f_61 = NULL;
      f_61 = t;
      if(((e_61 != NULL) && (e_61 != f_61)))
        _fail(f_61);
      else
        e_61 = f_61;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_10, not_null(e_61));
        t = set_config_0(t);
      }
    }
    t = h_10;
    {
      ATerm h_61 = NULL;
      h_61 = t;
      if(((g_61 != NULL) && (g_61 != h_61)))
        _fail(h_61);
      else
        g_61 = h_61;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_61));
    }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_j_10;
    return(t);
  }
  t = ArgOption_3(t, i_2, j_2, k_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
      {
        ATerm l_2 (ATerm t)
        {
          ATerm l_61 = NULL;
          l_61 = t;
          k_61 :
          if(!(match_string(l_61, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm m_2 (ATerm t)
        {
          t = term_n_10;
          t = set_config_0(t);
          t = term_o_10;
          return(t);
        }
        ATerm n_2 (ATerm t)
        {
          t = term_p_10;
          return(t);
        }
        t = Option_3(t, l_2, m_2, n_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL;
  w_61 = t;
  p_61 :
  if(match_string(w_61, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(w_61) == AT_LIST) && !(ATisEmpty(w_61))))
        {
          x_61 = ATgetFirst((ATermList) w_61);
          y_61 = (ATerm) ATgetNext((ATermList) w_61);
          t_61 :
          if(((ATgetType(y_61) == AT_LIST) && !(ATisEmpty(y_61))))
            {
              z_61 = ATgetFirst((ATermList) y_61);
              a_62 = (ATerm) ATgetNext((ATermList) y_61);
              {
                ATerm g_62 = NULL;
                ATerm q_10;
                q_10 = t;
                {
                  t = not_null(x_61);
                  t = j_0(t);
                }
                t = q_10;
                {
                  ATerm h_62 = NULL;
                  t = not_null(z_61);
                  {
                    t = k_0(t);
                    {
                      h_62 = t;
                      if(((g_62 != NULL) && (g_62 != h_62)))
                        _fail(h_62);
                      else
                        g_62 = h_62;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_62)), not_null(g_62));
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
  ATerm o_2 (ATerm t)
  {
    ATerm p_62 = NULL;
    p_62 = t;
    m_62 :
    if(!(match_string(p_62, "-i")))
      {
        if(!(match_string(p_62, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm s_62 = NULL;
    ATerm r_10;
    r_10 = t;
    {
      ATerm q_62 = NULL;
      ATerm r_62 = NULL;
      r_62 = t;
      if(((q_62 != NULL) && (q_62 != r_62)))
        _fail(r_62);
      else
        q_62 = r_62;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_10, not_null(q_62));
        t = set_config_0(t);
      }
    }
    t = r_10;
    {
      ATerm t_62 = NULL;
      t_62 = t;
      if(((s_62 != NULL) && (s_62 != t_62)))
        _fail(t_62);
      else
        s_62 = t_62;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_62));
    }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_t_10;
    return(t);
  }
  t = ArgOption_3(t, o_2, p_2, q_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm u_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(y_10);
    }
  else
    {
      t = u_10;
      {
        ATerm z_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(a_11);
          }
        else
          {
            t = z_10;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm x_62 = NULL;
  t = report_run_time_0(t);
  {
    ATerm y_62 = NULL;
    t = term_j_7;
    {
      t = whoami_0(t);
      {
        y_62 = t;
        if(((x_62 != NULL) && (x_62 != y_62)))
          _fail(y_62);
        else
          x_62 = y_62;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_7, (ATerm) ATinsert(ATinsert(ATempty, term_b_11), not_null(x_62)));
      {
        t = printnl_0(t);
        {
          t = term_n_7;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_c_11;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm b_63 = NULL;
  b_63 = t;
  t = SSL_TicksToSeconds(not_null(b_63));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL;
  g_63 = t;
  f_63 :
  if(match_cons(g_63, sym__2))
    {
      h_63 = ATgetArgument(g_63, 0);
      i_63 = ATgetArgument(g_63, 1);
      {
        ATerm d_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(h_63), not_null(i_63));
            ;
            LocalPopChoice(e_11);
          }
        else
          {
            t = d_11;
            t = SSL_addr(not_null(h_63), not_null(i_63));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_86 (ATerm), ATerm o_86 (ATerm))
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_86(t);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL;
        p_63 = t;
        o_63 :
        if(((ATgetType(p_63) == AT_LIST) && !(ATisEmpty(p_63))))
          {
            q_63 = ATgetFirst((ATermList) p_63);
            r_63 = (ATerm) ATgetNext((ATermList) p_63);
            {
              ATerm u_63 = NULL;
              ATerm v_63 = NULL;
              t = not_null(r_63);
              {
                t = foldr_2(t, n_86, o_86);
                {
                  v_63 = t;
                  if(((u_63 != NULL) && (u_63 != v_63)))
                    _fail(v_63);
                  else
                    u_63 = v_63;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_63), not_null(u_63));
                t = o_86(t);
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
ATerm crush_2 (ATerm t, ATerm g_90 (ATerm), ATerm h_90 (ATerm))
{
  ATerm e_64 = NULL;
  ATerm i_64 = NULL;
  e_64 = t;
  {
    ATerm j_64 = NULL;
    ATerm l_64 = NULL,m_64 = NULL,s_64 = NULL;
    t = not_null(e_64);
    {
      j_64 = t;
      {
        t = SSL_explode_term(not_null(j_64));
        {
          l_64 = t;
          b_64 :
          if(match_cons(l_64, sym__2))
            {
              m_64 = ATgetArgument(l_64, 0);
              s_64 = ATgetArgument(l_64, 1);
              if(((i_64 != NULL) && (i_64 != s_64)))
                _fail(s_64);
              else
                i_64 = s_64;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_64);
      t = foldr_2(t, g_90, h_90);
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
    ATerm r_2 (ATerm t)
    {
      t = term_t_9;
      return(t);
    }
    t = crush_2(t, r_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm q_65 = NULL,r_65 = NULL,u_65 = NULL;
  q_65 = t;
  b_65 :
  if(match_cons(q_65, sym__2))
    {
      r_65 = ATgetArgument(q_65, 0);
      u_65 = ATgetArgument(q_65, 1);
      {
        ATerm h_11;
        h_11 = t;
        {
          ATerm i_11 = t;
          int k_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_65), not_null(u_65));
              ;
              LocalPopChoice(k_11);
            }
          else
            {
              t = i_11;
              t = SSL_gtr(not_null(r_65), not_null(u_65));
            }
        }
        t = h_11;
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
  ATerm f_66 = NULL;
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL;
      g_66 = t;
      b_66 :
      if(match_cons(g_66, sym__2))
        {
          h_66 = ATgetArgument(g_66, 0);
          i_66 = ATgetArgument(g_66, 1);
          {
            if(((f_66 != NULL) && (f_66 != h_66)))
              _fail(h_66);
            else
              f_66 = h_66;
            if(((f_66 != NULL) && (f_66 != i_66)))
              _fail(i_66);
            else
              f_66 = i_66;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm b_94 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm n_11;
    n_11 = t;
    {
      ATerm l_66 = NULL;
      ATerm m_66 = NULL;
      t = term_g_8;
      {
        t = get_config_0(t);
        {
          m_66 = t;
          if(((l_66 != NULL) && (l_66 != m_66)))
            _fail(m_66);
          else
            l_66 = m_66;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_66), term_n_7);
        t = geq_0(t);
      }
    }
    t = n_11;
    t = b_94(t);
    return(t);
  }
  t = try_1(t, s_2);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    ATerm q_66 = NULL,u_66 = NULL;
    ATerm q_11;
    q_11 = t;
    {
      ATerm t_66 = NULL;
      t = run_time_0(t);
      {
        t_66 = t;
        if(((q_66 != NULL) && (q_66 != t_66)))
          _fail(t_66);
        else
          q_66 = t_66;
      }
    }
    t = q_11;
    {
      ATerm v_66 = NULL;
      t = term_j_7;
      {
        t = whoami_0(t);
        {
          v_66 = t;
          if(((u_66 != NULL) && (u_66 != v_66)))
            _fail(v_66);
          else
            u_66 = v_66;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_11), not_null(q_66)), term_r_11), not_null(u_66)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, t_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_t_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_67 = NULL;
  h_67 = t;
  g_67 :
  if(match_cons(h_67, sym_Version_0))
    {
      ATerm j_67 = NULL,l_67 = NULL;
      ATerm t_11;
      t_11 = t;
      {
        ATerm k_67 = NULL;
        t = SSLgetAnnotations(not_null(h_67));
        {
          k_67 = t;
          if(((j_67 != NULL) && (j_67 != k_67)))
            _fail(k_67);
          else
            j_67 = k_67;
        }
      }
      t = t_11;
      {
        ATerm m_67 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(j_67));
        {
          m_67 = t;
          if(((l_67 != NULL) && (l_67 != m_67)))
            _fail(m_67);
          else
            l_67 = m_67;
        }
        t = not_null(l_67);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_96 (ATerm))
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_11;
      t = get_config_0(t);
      ;
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      {
        ATerm u_2 (ATerm t)
        {
          ATerm x_11 = t;
          int y_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(y_11);
            }
          else
            {
              t = x_11;
              {
                ATerm z_11 = t;
                int e_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(e_12);
                  }
                else
                  {
                    t = z_11;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, u_2);
      }
    }
  t = y_96(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm r_67 = NULL;
  r_67 = t;
  t = SSL_table_create(not_null(r_67));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm v_67 = NULL;
  v_67 = t;
  {
    ATerm f_12;
    f_12 = t;
    {
      t = term_g_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_12, term_k_12, not_null(v_67));
          t = table_put_0(t);
        }
      }
    }
    t = f_12;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm z_67 = NULL;
  z_67 = t;
  t = SSL_table_destroy(not_null(z_67));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_68 = NULL;
  d_68 = t;
  t = SSL_exit(not_null(d_68));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm z_98 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_80 (ATerm))
{
  ATerm g_68 (ATerm t)
  {
    ATerm m_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = m_12;
        t = Cons_2(t, o_80, g_68);
      }
    return(t);
  }
  t = g_68(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL;
  p_68 = t;
  m_68 :
  if(((ATgetType(p_68) == AT_LIST) && !(ATisEmpty(p_68))))
    {
      n_68 = ATgetFirst((ATermList) p_68);
      o_68 = (ATerm) ATgetNext((ATermList) p_68);
      {
        ATerm s_68 = NULL;
        t = not_null(o_68);
        {
          ATerm q_12;
          q_12 = t;
          {
            ATerm t_68 = NULL,v_68 = NULL,x_68 = NULL;
            ATerm r_12;
            r_12 = t;
            {
              ATerm u_68 = NULL;
              t = i_0(t);
              {
                u_68 = t;
                if(((t_68 != NULL) && (t_68 != u_68)))
                  _fail(u_68);
                else
                  t_68 = u_68;
              }
            }
            t = r_12;
            {
              ATerm w_68 = NULL;
              t = not_null(n_68);
              {
                t = g_0(t);
                {
                  w_68 = t;
                  if(((v_68 != NULL) && (v_68 != w_68)))
                    _fail(w_68);
                  else
                    v_68 = w_68;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(t_68)), not_null(v_68));
                {
                  x_68 = t;
                  if(((s_68 != NULL) && (s_68 != x_68)))
                    _fail(x_68);
                  else
                    s_68 = x_68;
                }
              }
            }
          }
          t = q_12;
          {
            ATerm v_2 (ATerm t)
            {
              t = not_null(s_68);
              return(t);
            }
            t = reverse_acc_2(t, g_0, v_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(p_68) == AT_LIST) && ATisEmpty(p_68)))
        {
          {
            t = term_j_7;
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
  ATerm w_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, w_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm y_98 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm v_72 (ATerm))
{
  ATerm i_69 = NULL,j_69 = NULL;
  i_69 = t;
  h_69 :
  if(match_cons(i_69, sym_Program_1))
    {
      j_69 = ATgetArgument(i_69, 0);
      {
        ATerm m_69 = NULL,o_69 = NULL;
        ATerm n_69 = NULL;
        t = SSLgetAnnotations(not_null(i_69));
        {
          n_69 = t;
          if(((m_69 != NULL) && (m_69 != n_69)))
            _fail(n_69);
          else
            m_69 = n_69;
        }
        {
          t = not_null(j_69);
          {
            ATerm q_69 = NULL;
            t = v_72(t);
            {
              o_69 = t;
              {
                ATerm r_69 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(o_69)), not_null(m_69));
                {
                  r_69 = t;
                  if(((q_69 != NULL) && (q_69 != r_69)))
                    _fail(r_69);
                  else
                    q_69 = r_69;
                }
                t = not_null(q_69);
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
  ATerm a_70 = NULL;
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_70 = NULL;
      t = term_c_11;
      {
        t = get_config_0(t);
        {
          b_70 = t;
          if(((a_70 != NULL) && (a_70 != b_70)))
            _fail(b_70);
          else
            a_70 = b_70;
        }
      }
      ;
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      {
        ATerm x_2 (ATerm t)
        {
          ATerm y_2 (ATerm t)
          {
            ATerm c_70 = NULL;
            c_70 = t;
            if(((a_70 != NULL) && (a_70 != c_70)))
              _fail(c_70);
            else
              a_70 = c_70;
            return(t);
          }
          t = Program_1(t, y_2);
          return(t);
        }
        t = option_defined_1(t, x_2);
      }
    }
  {
    ATerm z_2 (ATerm t)
    {
      ATerm a_3 (ATerm t)
      {
        t = not_null(a_70);
        return(t);
      }
      t = short_description_1(t, a_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, z_2);
    {
      t = term_u_12;
      {
        t = echo_0(t);
        {
          t = term_x_12;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm b_3 (ATerm t)
                {
                  ATerm d_70 = NULL;
                  ATerm e_70 = NULL;
                  e_70 = t;
                  if(((d_70 != NULL) && (d_70 != e_70)))
                    _fail(e_70);
                  else
                    d_70 = e_70;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_70)), term_y_12);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, b_3);
                {
                  ATerm c_3 (ATerm t)
                  {
                    ATerm f_70 = NULL;
                    ATerm g_70 = NULL;
                    ATerm d_3 (ATerm t)
                    {
                      t = not_null(a_70);
                      return(t);
                    }
                    t = long_description_1(t, d_3);
                    {
                      g_70 = t;
                      if(((f_70 != NULL) && (f_70 != g_70)))
                        _fail(g_70);
                      else
                        f_70 = g_70;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(f_70)), term_z_12);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, c_3);
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
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm w_72 (ATerm))
{
  ATerm q_70 = NULL,r_70 = NULL;
  q_70 = t;
  p_70 :
  if(match_cons(q_70, sym_Undefined_1))
    {
      r_70 = ATgetArgument(q_70, 0);
      {
        ATerm u_70 = NULL,w_70 = NULL;
        ATerm v_70 = NULL;
        t = SSLgetAnnotations(not_null(q_70));
        {
          v_70 = t;
          if(((u_70 != NULL) && (u_70 != v_70)))
            _fail(v_70);
          else
            u_70 = v_70;
        }
        {
          t = not_null(r_70);
          {
            ATerm y_70 = NULL;
            t = w_72(t);
            {
              w_70 = t;
              {
                ATerm z_70 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_70)), not_null(u_70));
                {
                  z_70 = t;
                  if(((y_70 != NULL) && (y_70 != z_70)))
                    _fail(z_70);
                  else
                    y_70 = z_70;
                }
                t = not_null(y_70);
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
ATerm fetch_1 (ATerm t, ATerm x_80 (ATerm))
{
  ATerm e_71 (ATerm t)
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_80, _id);
        ;
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        t = Cons_2(t, _id, e_71);
      }
    return(t);
  }
  t = e_71(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm y_97 (ATerm))
{
  t = fetch_1(t, y_97);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm g_71 = NULL,h_71 = NULL,i_71 = NULL;
  g_71 = t;
  f_71 :
  if(((ATgetType(g_71) == AT_LIST) && ATisEmpty(g_71)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(g_71) == AT_LIST) && !(ATisEmpty(g_71))))
        {
          h_71 = ATgetFirst((ATermList) g_71);
          i_71 = (ATerm) ATgetNext((ATermList) g_71);
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
  ATerm e_13;
  e_13 = t;
  {
    ATerm l_71 = NULL;
    ATerm o_71 = NULL;
    ATerm f_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(j_13);
      }
    else
      {
        t = f_13;
        {
          ATerm m_71 = NULL;
          ATerm n_71 = NULL;
          n_71 = t;
          if(((m_71 != NULL) && (m_71 != n_71)))
            _fail(n_71);
          else
            m_71 = n_71;
          t = (ATerm) ATinsert(ATempty, not_null(m_71));
        }
      }
    {
      o_71 = t;
      if(((l_71 != NULL) && (l_71 != o_71)))
        _fail(o_71);
      else
        l_71 = o_71;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_8, not_null(l_71));
      t = printnl_0(t);
    }
  }
  t = e_13;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_c_11;
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
  ATerm k_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(o_13);
    }
  else
    {
      t = k_13;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm v_71 = NULL;
  v_71 = t;
  u_71 :
  if(match_cons(v_71, sym_Help_0))
    {
      ATerm x_71 = NULL,z_71 = NULL;
      ATerm r_13;
      r_13 = t;
      {
        ATerm y_71 = NULL;
        t = SSLgetAnnotations(not_null(v_71));
        {
          y_71 = t;
          if(((x_71 != NULL) && (x_71 != y_71)))
            _fail(y_71);
          else
            x_71 = y_71;
        }
      }
      t = r_13;
      {
        ATerm a_72 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(x_71));
        {
          a_72 = t;
          if(((z_71 != NULL) && (z_71 != a_72)))
            _fail(a_72);
          else
            z_71 = a_72;
        }
        t = not_null(z_71);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_73 (ATerm))
{
  ATerm s_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_73(t);
      ;
      LocalPopChoice(w_13);
    }
  else
    {
      t = s_13;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm z_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_3 (ATerm t)
      {
        ATerm g_72 = NULL;
        g_72 = t;
        e_72 :
        if(!(match_string(g_72, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        t = term_h_14;
        t = set_config_0(t);
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        t = term_i_14;
        return(t);
      }
      t = Option_3(t, e_3, f_3, g_3);
      ;
      LocalPopChoice(a_14);
    }
  else
    {
      t = z_13;
      {
        ATerm h_3 (ATerm t)
        {
          ATerm h_72 = NULL;
          h_72 = t;
          f_72 :
          if(!(match_string(h_72, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm i_3 (ATerm t)
        {
          t = term_h_14;
          {
            t = set_config_0(t);
            {
              t = term_k_14;
              t = set_config_0(t);
            }
          }
          t = term_l_14;
          return(t);
        }
        ATerm j_3 (ATerm t)
        {
          t = term_m_14;
          return(t);
        }
        t = Option_3(t, h_3, i_3, j_3);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL;
  k_72 = t;
  j_72 :
  if(match_cons(k_72, sym__2))
    {
      l_72 = ATgetArgument(k_72, 0);
      m_72 = ATgetArgument(k_72, 1);
      t = SSL_table_get(not_null(l_72), not_null(m_72));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_72 = NULL,u_72 = NULL,x_72 = NULL,y_72 = NULL;
  t_72 = t;
  s_72 :
  if(match_cons(t_72, sym__3))
    {
      u_72 = ATgetArgument(t_72, 0);
      x_72 = ATgetArgument(t_72, 1);
      y_72 = ATgetArgument(t_72, 2);
      {
        ATerm n_14;
        n_14 = t;
        {
          ATerm f_73 = NULL;
          ATerm g_73 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_72), not_null(x_72));
          {
            ATerm o_14 = t;
            int p_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(p_14);
              }
            else
              {
                t = o_14;
                t = (ATerm) ATempty;
              }
            {
              g_73 = t;
              if(((f_73 != NULL) && (f_73 != g_73)))
                _fail(g_73);
              else
                f_73 = g_73;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_72), not_null(x_72), (ATerm) ATinsert(CheckATermList(not_null(f_73)), not_null(y_72)));
            t = table_put_0(t);
          }
        }
        t = n_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm d_99 (ATerm))
{
  ATerm k_73 = NULL;
  ATerm l_73 = NULL;
  t = term_j_7;
  {
    t = d_99(t);
    {
      l_73 = t;
      if(((k_73 != NULL) && (k_73 != l_73)))
        _fail(l_73);
      else
        k_73 = l_73;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_v_12, term_w_12, not_null(k_73));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL;
  r_73 = t;
  q_73 :
  if(match_string(r_73, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(r_73) == AT_LIST) && !(ATisEmpty(r_73))))
        {
          s_73 = ATgetFirst((ATermList) r_73);
          t_73 = (ATerm) ATgetNext((ATermList) r_73);
          {
            ATerm w_73 = NULL;
            ATerm q_14;
            q_14 = t;
            {
              t = not_null(s_73);
              t = a_0(t);
            }
            t = q_14;
            {
              ATerm x_73 = NULL;
              t = term_j_7;
              {
                t = b_0(t);
                {
                  x_73 = t;
                  if(((w_73 != NULL) && (w_73 != x_73)))
                    _fail(x_73);
                  else
                    w_73 = x_73;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_73)), not_null(w_73));
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
  ATerm k_3 (ATerm t)
  {
    ATerm c_74 = NULL;
    c_74 = t;
    b_74 :
    if(!(match_string(c_74, "--help")))
      {
        if(!(match_string(c_74, "-h")))
          {
            if(!(match_string(c_74, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    t = term_r_14;
    {
      t = set_config_0(t);
      t = term_s_14;
    }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_t_14;
    return(t);
  }
  t = Option_3(t, k_3, l_3, m_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL,h_74 = NULL;
  f_74 = t;
  e_74 :
  if(((ATgetType(f_74) == AT_LIST) && !(ATisEmpty(f_74))))
    {
      g_74 = ATgetFirst((ATermList) f_74);
      h_74 = (ATerm) ATgetNext((ATermList) f_74);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_74)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_74)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_60 (ATerm), ATerm n_60 (ATerm))
{
  ATerm r_74 = NULL,s_74 = NULL,t_74 = NULL;
  r_74 = t;
  q_74 :
  if(((ATgetType(r_74) == AT_LIST) && !(ATisEmpty(r_74))))
    {
      s_74 = ATgetFirst((ATermList) r_74);
      t_74 = (ATerm) ATgetNext((ATermList) r_74);
      {
        ATerm x_74 = NULL,z_74 = NULL;
        ATerm y_74 = NULL;
        t = SSLgetAnnotations(not_null(r_74));
        {
          y_74 = t;
          if(((x_74 != NULL) && (x_74 != y_74)))
            _fail(y_74);
          else
            x_74 = y_74;
        }
        {
          t = not_null(s_74);
          {
            ATerm b_75 = NULL;
            t = m_60(t);
            {
              z_74 = t;
              {
                t = not_null(t_74);
                {
                  ATerm d_75 = NULL;
                  t = n_60(t);
                  {
                    b_75 = t;
                    {
                      ATerm e_75 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_75)), not_null(z_74)), not_null(x_74));
                      {
                        e_75 = t;
                        if(((d_75 != NULL) && (d_75 != e_75)))
                          _fail(e_75);
                        else
                          d_75 = e_75;
                      }
                      t = not_null(d_75);
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
  ATerm o_75 = NULL;
  o_75 = t;
  n_75 :
  if(((ATgetType(o_75) == AT_LIST) && ATisEmpty(o_75)))
    {
      {
        ATerm q_75 = NULL,s_75 = NULL;
        ATerm u_14;
        u_14 = t;
        {
          ATerm r_75 = NULL;
          t = SSLgetAnnotations(not_null(o_75));
          {
            r_75 = t;
            if(((q_75 != NULL) && (q_75 != r_75)))
              _fail(r_75);
            else
              q_75 = r_75;
          }
        }
        t = u_14;
        {
          ATerm t_75 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(q_75));
          {
            t_75 = t;
            if(((s_75 != NULL) && (s_75 != t_75)))
              _fail(t_75);
            else
              s_75 = t_75;
          }
          t = not_null(s_75);
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
  ATerm z_75 = NULL,a_76 = NULL,b_76 = NULL;
  z_75 = t;
  y_75 :
  if(match_cons(z_75, sym__2))
    {
      a_76 = ATgetArgument(z_75, 0);
      b_76 = ATgetArgument(z_75, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_8, not_null(a_76), not_null(b_76));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm b_99 (ATerm))
{
  ATerm v_14;
  v_14 = t;
  {
    ATerm n_3 (ATerm t)
    {
      t = term_w_14;
      t = b_99(t);
      return(t);
    }
    t = try_1(t, n_3);
  }
  t = v_14;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm j_76 = NULL;
      ATerm x_14;
      x_14 = t;
      {
        ATerm h_76 = NULL;
        ATerm i_76 = NULL;
        i_76 = t;
        if(((h_76 != NULL) && (h_76 != i_76)))
          _fail(i_76);
        else
          h_76 = i_76;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_11, not_null(h_76));
          t = set_config_0(t);
        }
      }
      t = x_14;
      {
        ATerm k_76 = NULL;
        k_76 = t;
        if(((j_76 != NULL) && (j_76 != k_76)))
          _fail(k_76);
        else
          j_76 = k_76;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_76));
      }
      return(t);
    }
    ATerm p_3 (ATerm t)
    {
      ATerm c_15 = t;
      int d_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_15 = t;
          int i_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(i_15);
            }
          else
            {
              t = e_15;
              {
                t = b_99(t);
                t = Cons_2(t, _id, p_3);
              }
            }
          ;
          LocalPopChoice(d_15);
        }
      else
        {
          t = c_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, o_3, p_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL;
  ATerm k_15;
  k_15 = t;
  {
    ATerm t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL;
    t_76 = t;
    p_76 :
    if(match_cons(t_76, sym__3))
      {
        u_76 = ATgetArgument(t_76, 0);
        v_76 = ATgetArgument(t_76, 1);
        w_76 = ATgetArgument(t_76, 2);
        {
          if(((q_76 != NULL) && (q_76 != u_76)))
            _fail(u_76);
          else
            q_76 = u_76;
          {
            if(((r_76 != NULL) && (r_76 != v_76)))
              _fail(v_76);
            else
              r_76 = v_76;
            {
              if(((s_76 != NULL) && (s_76 != w_76)))
                _fail(w_76);
              else
                s_76 = w_76;
              t = SSL_table_put(not_null(q_76), not_null(r_76), not_null(s_76));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = k_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm a_99 (ATerm))
{
  ATerm z_76 = NULL;
  ATerm n_15;
  n_15 = t;
  {
    t = term_o_15;
    t = table_put_0(t);
  }
  t = n_15;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm p_15 = t;
      int q_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_99(t);
          ;
          LocalPopChoice(q_15);
        }
      else
        {
          t = p_15;
          {
            ATerm r_15 = t;
            int s_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(s_15);
              }
            else
              {
                t = r_15;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, q_3);
    {
      ATerm r_3 (ATerm t)
      {
        ATerm t_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_15;
            v_15 = t;
            {
              ATerm z_15 = t;
              int a_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_w_11;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(a_16);
                }
              else
                {
                  t = z_15;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = v_15;
            {
              t = system_usage_0(t);
              {
                t = term_t_9;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(u_15);
          }
        else
          {
            t = t_15;
            {
              ATerm e_16 = t;
              int h_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_16;
                  i_16 = t;
                  {
                    t = term_e_14;
                    t = get_config_0(t);
                  }
                  t = i_16;
                  {
                    t = system_about_0(t);
                    {
                      t = term_t_9;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(h_16);
                }
              else
                {
                  t = e_16;
                  {
                    ATerm s_3 (ATerm t)
                    {
                      ATerm t_3 (ATerm t)
                      {
                        ATerm a_77 = NULL;
                        a_77 = t;
                        if(((z_76 != NULL) && (z_76 != a_77)))
                          _fail(a_77);
                        else
                          z_76 = a_77;
                        return(t);
                      }
                      t = Undefined_1(t, t_3);
                      return(t);
                    }
                    t = option_defined_1(t, s_3);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_k_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_76)), term_j_16));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_n_7;
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
      t = try_1(t, r_3);
      {
        ATerm k_16;
        k_16 = t;
        {
          t = term_v_12;
          t = table_destroy_0(t);
        }
        t = k_16;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm d_97 (ATerm))
{
  t = parse_options_1(t, a_97);
  {
    t = store_options_0(t);
    {
      t = c_97(t);
      {
        ATerm l_16 = t;
        int m_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, b_97);
            ;
            LocalPopChoice(m_16);
          }
        else
          {
            t = l_16;
            {
              ATerm n_16 = t;
              int o_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_97(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(o_16);
                }
              else
                {
                  t = n_16;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm s_96 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_96(t);
        ;
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, p_96);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, u_3, r_96, s_96, v_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm l_96 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      ATerm x_16;
      x_16 = t;
      {
        ATerm d_77 = NULL;
        ATerm e_77 = NULL;
        t = term_c_11;
        {
          t = get_config_0(t);
          {
            e_77 = t;
            if(((d_77 != NULL) && (d_77 != e_77)))
              _fail(e_77);
            else
              d_77 = e_77;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_7, (ATerm) ATinsert(ATempty, not_null(d_77)));
          t = printnl_0(t);
        }
      }
      t = x_16;
      return(t);
    }
    t = if_verbose2_1(t, x_3);
    return(t);
  }
  t = iowrap_4(t, j_96, k_96, l_96, w_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm h_96 (ATerm), ATerm i_96 (ATerm))
{
  t = iowrap_3(t, h_96, i_96, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm e_96 (ATerm))
{
  ATerm y_3 (ATerm t)
  {
    t = _2(t, _id, e_96);
    return(t);
  }
  t = iowrap_2(t, y_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
