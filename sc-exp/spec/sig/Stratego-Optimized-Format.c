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
ATerm term_c_20;
ATerm term_x_18;
ATerm term_e_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_f_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_o_16;
ATerm term_c_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_v_12;
ATerm term_n_12;
ATerm term_l_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_o_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_e_9;
ATerm term_c_9;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_i_8;
ATerm term_d_8;
ATerm term_y_7;
ATerm term_r_5;
ATerm term_a_5;
void init_constant_terms (void)
{
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a shallow term-expression: ", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_q_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym__2, term_y_10, term_k_8);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym__2, term_j_11, term_k_8);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__2, term_s_14, term_t_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__2, term_o_16, term_k_8);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym__2, term_y_16, term_k_8);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym__2, term_v_12, term_k_8);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym__3, term_s_14, term_t_14, (ATerm) ATempty);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Var_1 (ATerm, ATerm q_0 (ATerm));
ATerm Assign_1 (ATerm, ATerm m_68 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm c_63 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm k_68 (ATerm), ATerm l_68 (ATerm));
ATerm Let_2 (ATerm, ATerm h_65 (ATerm), ATerm i_65 (ATerm));
ATerm Prim_2 (ATerm, ATerm l_66 (ATerm), ATerm m_66 (ATerm));
ATerm Where_1 (ATerm, ATerm h_66 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm r_65 (ATerm), ATerm s_65 (ATerm));
ATerm Build_1 (ATerm, ATerm p_65 (ATerm));
ATerm Str_1 (ATerm, ATerm p_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm o_0 (ATerm));
ATerm Int_1 (ATerm, ATerm n_0 (ATerm));
ATerm shallow_term_expression_0 (ATerm);
ATerm Match_1 (ATerm, ATerm o_65 (ATerm));
ATerm Thread_1 (ATerm, ATerm x_66 (ATerm));
ATerm All_1 (ATerm, ATerm w_66 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm v_66 (ATerm));
ATerm Cong_2 (ATerm, ATerm h_61 (ATerm), ATerm i_61 (ATerm));
ATerm Path_2 (ATerm, ATerm s_66 (ATerm), ATerm t_66 (ATerm));
ATerm Rec_2 (ATerm, ATerm e_66 (ATerm), ATerm f_66 (ATerm));
ATerm SVar_1 (ATerm, ATerm g_65 (ATerm));
ATerm Call_2 (ATerm, ATerm j_65 (ATerm), ATerm k_65 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm z_65 (ATerm), ATerm a_66 (ATerm));
ATerm GChoice_2 (ATerm, ATerm z_64 (ATerm), ATerm a_65 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm b_66 (ATerm), ATerm c_66 (ATerm), ATerm d_66 (ATerm));
ATerm LChoice_2 (ATerm, ATerm x_65 (ATerm), ATerm y_65 (ATerm));
ATerm Choice_2 (ATerm, ATerm v_64 (ATerm), ATerm w_64 (ATerm));
ATerm Seq_2 (ATerm, ATerm v_65 (ATerm), ATerm w_65 (ATerm));
ATerm Test_1 (ATerm, ATerm i_66 (ATerm));
ATerm Not_1 (ATerm, ATerm g_66 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm FunType_2 (ATerm, ATerm x_61 (ATerm), ATerm y_61 (ATerm));
ATerm Op_2 (ATerm, ATerm n_62 (ATerm), ATerm o_62 (ATerm));
ATerm ConstType_1 (ATerm, ATerm w_61 (ATerm));
ATerm type_expression_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm s_67 (ATerm), ATerm t_67 (ATerm));
ATerm SDef_3 (ATerm, ATerm w_67 (ATerm), ATerm x_67 (ATerm), ATerm y_67 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm d_82 (ATerm));
ATerm Strategies_1 (ATerm, ATerm l_61 (ATerm));
ATerm Specification_1 (ATerm, ATerm q_61 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm w_59 (ATerm), ATerm x_59 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_82 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm p_95 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm l_94 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm n_97 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm x_93 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm p_89 (ATerm), ATerm q_89 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm a_88 (ATerm), ATerm b_88 (ATerm));
ATerm crush_2 (ATerm, ATerm t_91 (ATerm), ATerm u_91 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm o_95 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm l_98 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm m_100 (ATerm));
ATerm map_1 (ATerm, ATerm b_82 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm l_100 (ATerm));
ATerm Program_1 (ATerm, ATerm h_74 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm i_74 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_82 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_99 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_74 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_100 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm f_61 (ATerm), ATerm g_61 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_100 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_100 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm));
ATerm iowrap_4 (ATerm, ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm));
ATerm iowrap_3 (ATerm, ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm y_97 (ATerm));
ATerm iowrap_2 (ATerm, ATerm u_97 (ATerm), ATerm v_97 (ATerm));
ATerm iowrap_1 (ATerm, ATerm r_97 (ATerm));
ATerm main_0 (ATerm);
ATerm Var_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm y_11 = NULL,z_11 = NULL;
  ATerm l_13 (ATerm t)
  {
    ATerm m_12 = NULL,r_12 = NULL;
    ATerm p_13 (ATerm t)
    {
      ATerm t_12 = NULL;
      ATerm u_12 = NULL;
      ATerm q_13 (ATerm t)
      {
        if(((t_12 != NULL) && (t_12 != u_12)))
          _fail(u_12);
        else
          t_12 = u_12;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(r_12)), not_null(m_12));
      {
        u_12 = t;
        t = q_13(t);
      }
      t = not_null(t_12);
      return(t);
    }
    ATerm q_12 = NULL;
    ATerm o_13 (ATerm t)
    {
      if(((m_12 != NULL) && (m_12 != q_12)))
        _fail(q_12);
      else
        m_12 = q_12;
      return(t);
    }
    t = SSLgetAnnotations(not_null(y_11));
    {
      q_12 = t;
      t = o_13(t);
    }
    {
      t = not_null(z_11);
      {
        t = q_0(t);
        {
          r_12 = t;
          t = p_13(t);
        }
      }
    }
    return(t);
  }
  ATerm m_13 (ATerm t)
  {
    ATerm x_12 = NULL,z_12 = NULL;
    ATerm s_13 (ATerm t)
    {
      ATerm b_13 = NULL;
      ATerm c_13 = NULL;
      ATerm t_13 (ATerm t)
      {
        if(((b_13 != NULL) && (b_13 != c_13)))
          _fail(c_13);
        else
          b_13 = c_13;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(z_12)), not_null(x_12));
      {
        c_13 = t;
        t = t_13(t);
      }
      t = not_null(b_13);
      return(t);
    }
    ATerm y_12 = NULL;
    ATerm r_13 (ATerm t)
    {
      if(((x_12 != NULL) && (x_12 != y_12)))
        _fail(y_12);
      else
        x_12 = y_12;
      return(t);
    }
    t = SSLgetAnnotations(not_null(y_11));
    {
      y_12 = t;
      t = r_13(t);
    }
    {
      t = not_null(z_11);
      {
        t = q_0(t);
        {
          z_12 = t;
          t = s_13(t);
        }
      }
    }
    return(t);
  }
  ATerm n_13 (ATerm t)
  {
    ATerm f_13 = NULL,h_13 = NULL;
    ATerm v_13 (ATerm t)
    {
      ATerm j_13 = NULL;
      ATerm k_13 = NULL;
      ATerm w_13 (ATerm t)
      {
        if(((j_13 != NULL) && (j_13 != k_13)))
          _fail(k_13);
        else
          j_13 = k_13;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(h_13)), not_null(f_13));
      {
        k_13 = t;
        t = w_13(t);
      }
      t = not_null(j_13);
      return(t);
    }
    ATerm g_13 = NULL;
    ATerm u_13 (ATerm t)
    {
      if(((f_13 != NULL) && (f_13 != g_13)))
        _fail(g_13);
      else
        f_13 = g_13;
      return(t);
    }
    t = SSLgetAnnotations(not_null(y_11));
    {
      g_13 = t;
      t = u_13(t);
    }
    {
      t = not_null(z_11);
      {
        t = q_0(t);
        {
          h_13 = t;
          t = v_13(t);
        }
      }
    }
    return(t);
  }
  y_11 = t;
  x_11 :
  if(match_cons(y_11, sym_Var_1))
    {
      z_11 = ATgetArgument(y_11, 0);
      {
        ATerm h_4 = t;
        int i_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_13(t);
            ;
            LocalPopChoice(i_4);
          }
        else
          {
            t = h_4;
            {
              ATerm j_4 = t;
              int k_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_13(t);
                  ;
                  LocalPopChoice(k_4);
                }
              else
                {
                  t = j_4;
                  t = n_13(t);
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
ATerm Assign_1 (ATerm t, ATerm m_68 (ATerm))
{
  ATerm c_14 = NULL,d_14 = NULL;
  ATerm m_14 (ATerm t)
  {
    ATerm g_14 = NULL,i_14 = NULL;
    ATerm o_14 (ATerm t)
    {
      ATerm k_14 = NULL;
      ATerm l_14 = NULL;
      ATerm p_14 (ATerm t)
      {
        if(((k_14 != NULL) && (k_14 != l_14)))
          _fail(l_14);
        else
          k_14 = l_14;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_1, not_null(i_14)), not_null(g_14));
      {
        l_14 = t;
        t = p_14(t);
      }
      t = not_null(k_14);
      return(t);
    }
    ATerm h_14 = NULL;
    ATerm n_14 (ATerm t)
    {
      if(((g_14 != NULL) && (g_14 != h_14)))
        _fail(h_14);
      else
        g_14 = h_14;
      return(t);
    }
    t = SSLgetAnnotations(not_null(c_14));
    {
      h_14 = t;
      t = n_14(t);
    }
    {
      t = not_null(d_14);
      {
        t = m_68(t);
        {
          i_14 = t;
          t = o_14(t);
        }
      }
    }
    return(t);
  }
  c_14 = t;
  b_14 :
  if(match_cons(c_14, sym_Assign_1))
    {
      d_14 = ATgetArgument(c_14, 0);
      t = m_14(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm c_63 (ATerm))
{
  ATerm v_14 = NULL,w_14 = NULL;
  ATerm f_15 (ATerm t)
  {
    ATerm z_14 = NULL,b_15 = NULL;
    ATerm h_15 (ATerm t)
    {
      ATerm d_15 = NULL;
      ATerm e_15 = NULL;
      ATerm i_15 (ATerm t)
      {
        if(((d_15 != NULL) && (d_15 != e_15)))
          _fail(e_15);
        else
          d_15 = e_15;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(b_15)), not_null(z_14));
      {
        e_15 = t;
        t = i_15(t);
      }
      t = not_null(d_15);
      return(t);
    }
    ATerm a_15 = NULL;
    ATerm g_15 (ATerm t)
    {
      if(((z_14 != NULL) && (z_14 != a_15)))
        _fail(a_15);
      else
        z_14 = a_15;
      return(t);
    }
    t = SSLgetAnnotations(not_null(v_14));
    {
      a_15 = t;
      t = g_15(t);
    }
    {
      t = not_null(w_14);
      {
        t = c_63(t);
        {
          b_15 = t;
          t = h_15(t);
        }
      }
    }
    return(t);
  }
  v_14 = t;
  u_14 :
  if(match_cons(v_14, sym_BuildDefault_1))
    {
      w_14 = ATgetArgument(v_14, 0);
      t = f_15(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm n_15 = NULL;
  ATerm t_15 (ATerm t)
  {
    ATerm p_15 = NULL,r_15 = NULL;
    ATerm l_4;
    l_4 = t;
    {
      ATerm q_15 = NULL;
      ATerm u_15 (ATerm t)
      {
        if(((p_15 != NULL) && (p_15 != q_15)))
          _fail(q_15);
        else
          p_15 = q_15;
        return(t);
      }
      t = SSLgetAnnotations(not_null(n_15));
      {
        q_15 = t;
        t = u_15(t);
      }
    }
    t = l_4;
    {
      ATerm s_15 = NULL;
      ATerm v_15 (ATerm t)
      {
        if(((r_15 != NULL) && (r_15 != s_15)))
          _fail(s_15);
        else
          r_15 = s_15;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(p_15));
      {
        s_15 = t;
        t = v_15(t);
      }
      t = not_null(r_15);
    }
    return(t);
  }
  n_15 = t;
  m_15 :
  if(match_cons(n_15, sym_Wld_0))
    {
      t = t_15(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm m_4 = t;
  int n_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
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
            t = Var_1(t, is_string_0);
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
                  t = Int_1(t, is_int_0);
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
                        t = Real_1(t, is_real_0);
                        ;
                        LocalPopChoice(t_4);
                      }
                    else
                      {
                        t = s_4;
                        {
                          ATerm u_4 = t;
                          int v_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              ;
                              LocalPopChoice(v_4);
                            }
                          else
                            {
                              t = u_4;
                              {
                                ATerm w_4 = t;
                                int x_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_0 (ATerm t)
                                    {
                                      t = list_1(t, term_expression_0);
                                      return(t);
                                    }
                                    t = Op_2(t, is_string_0, c_0);
                                    ;
                                    LocalPopChoice(x_4);
                                  }
                                else
                                  {
                                    t = w_4;
                                    {
                                      ATerm y_4 = t;
                                      int z_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = BuildDefault_1(t, term_expression_0);
                                          ;
                                          LocalPopChoice(z_4);
                                        }
                                      else
                                        {
                                          t = y_4;
                                          {
                                            ATerm e_0 (ATerm t)
                                            {
                                              t = term_a_5;
                                              return(t);
                                            }
                                            t = debug_1(t, e_0);
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Assign_2 (ATerm t, ATerm k_68 (ATerm), ATerm l_68 (ATerm))
{
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL;
  ATerm r_16 (ATerm t)
  {
    ATerm j_16 = NULL,l_16 = NULL;
    ATerm t_16 (ATerm t)
    {
      ATerm n_16 = NULL;
      ATerm u_16 (ATerm t)
      {
        ATerm p_16 = NULL;
        ATerm q_16 = NULL;
        ATerm v_16 (ATerm t)
        {
          if(((p_16 != NULL) && (p_16 != q_16)))
            _fail(q_16);
          else
            p_16 = q_16;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(l_16), not_null(n_16)), not_null(j_16));
        {
          q_16 = t;
          t = v_16(t);
        }
        t = not_null(p_16);
        return(t);
      }
      t = not_null(f_16);
      {
        t = l_68(t);
        {
          n_16 = t;
          t = u_16(t);
        }
      }
      return(t);
    }
    ATerm k_16 = NULL;
    ATerm s_16 (ATerm t)
    {
      if(((j_16 != NULL) && (j_16 != k_16)))
        _fail(k_16);
      else
        j_16 = k_16;
      return(t);
    }
    t = SSLgetAnnotations(not_null(d_16));
    {
      k_16 = t;
      t = s_16(t);
    }
    {
      t = not_null(e_16);
      {
        t = k_68(t);
        {
          l_16 = t;
          t = t_16(t);
        }
      }
    }
    return(t);
  }
  d_16 = t;
  c_16 :
  if(match_cons(d_16, sym_Assign_2))
    {
      e_16 = ATgetArgument(d_16, 0);
      f_16 = ATgetArgument(d_16, 1);
      t = r_16(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2 (ATerm t, ATerm h_65 (ATerm), ATerm i_65 (ATerm))
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  ATerm q_17 (ATerm t)
  {
    ATerm i_17 = NULL,k_17 = NULL;
    ATerm s_17 (ATerm t)
    {
      ATerm m_17 = NULL;
      ATerm t_17 (ATerm t)
      {
        ATerm o_17 = NULL;
        ATerm p_17 = NULL;
        ATerm u_17 (ATerm t)
        {
          if(((o_17 != NULL) && (o_17 != p_17)))
            _fail(p_17);
          else
            o_17 = p_17;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(k_17), not_null(m_17)), not_null(i_17));
        {
          p_17 = t;
          t = u_17(t);
        }
        t = not_null(o_17);
        return(t);
      }
      t = not_null(e_17);
      {
        t = i_65(t);
        {
          m_17 = t;
          t = t_17(t);
        }
      }
      return(t);
    }
    ATerm j_17 = NULL;
    ATerm r_17 (ATerm t)
    {
      if(((i_17 != NULL) && (i_17 != j_17)))
        _fail(j_17);
      else
        i_17 = j_17;
      return(t);
    }
    t = SSLgetAnnotations(not_null(c_17));
    {
      j_17 = t;
      t = r_17(t);
    }
    {
      t = not_null(d_17);
      {
        t = h_65(t);
        {
          k_17 = t;
          t = s_17(t);
        }
      }
    }
    return(t);
  }
  c_17 = t;
  b_17 :
  if(match_cons(c_17, sym_Let_2))
    {
      d_17 = ATgetArgument(c_17, 0);
      e_17 = ATgetArgument(c_17, 1);
      t = q_17(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm l_66 (ATerm), ATerm m_66 (ATerm))
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL;
  ATerm p_18 (ATerm t)
  {
    ATerm h_18 = NULL,j_18 = NULL;
    ATerm r_18 (ATerm t)
    {
      ATerm l_18 = NULL;
      ATerm s_18 (ATerm t)
      {
        ATerm n_18 = NULL;
        ATerm o_18 = NULL;
        ATerm t_18 (ATerm t)
        {
          if(((n_18 != NULL) && (n_18 != o_18)))
            _fail(o_18);
          else
            n_18 = o_18;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(j_18), not_null(l_18)), not_null(h_18));
        {
          o_18 = t;
          t = t_18(t);
        }
        t = not_null(n_18);
        return(t);
      }
      t = not_null(d_18);
      {
        t = m_66(t);
        {
          l_18 = t;
          t = s_18(t);
        }
      }
      return(t);
    }
    ATerm i_18 = NULL;
    ATerm q_18 (ATerm t)
    {
      if(((h_18 != NULL) && (h_18 != i_18)))
        _fail(i_18);
      else
        h_18 = i_18;
      return(t);
    }
    t = SSLgetAnnotations(not_null(b_18));
    {
      i_18 = t;
      t = q_18(t);
    }
    {
      t = not_null(c_18);
      {
        t = l_66(t);
        {
          j_18 = t;
          t = r_18(t);
        }
      }
    }
    return(t);
  }
  b_18 = t;
  a_18 :
  if(match_cons(b_18, sym_Prim_2))
    {
      c_18 = ATgetArgument(b_18, 0);
      d_18 = ATgetArgument(b_18, 1);
      t = p_18(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Where_1 (ATerm t, ATerm h_66 (ATerm))
{
  ATerm z_18 = NULL,a_19 = NULL;
  ATerm j_19 (ATerm t)
  {
    ATerm d_19 = NULL,f_19 = NULL;
    ATerm l_19 (ATerm t)
    {
      ATerm h_19 = NULL;
      ATerm i_19 = NULL;
      ATerm m_19 (ATerm t)
      {
        if(((h_19 != NULL) && (h_19 != i_19)))
          _fail(i_19);
        else
          h_19 = i_19;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(f_19)), not_null(d_19));
      {
        i_19 = t;
        t = m_19(t);
      }
      t = not_null(h_19);
      return(t);
    }
    ATerm e_19 = NULL;
    ATerm k_19 (ATerm t)
    {
      if(((d_19 != NULL) && (d_19 != e_19)))
        _fail(e_19);
      else
        d_19 = e_19;
      return(t);
    }
    t = SSLgetAnnotations(not_null(z_18));
    {
      e_19 = t;
      t = k_19(t);
    }
    {
      t = not_null(a_19);
      {
        t = h_66(t);
        {
          f_19 = t;
          t = l_19(t);
        }
      }
    }
    return(t);
  }
  z_18 = t;
  y_18 :
  if(match_cons(z_18, sym_Where_1))
    {
      a_19 = ATgetArgument(z_18, 0);
      t = j_19(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm o_19 = NULL;
  ATerm q_19 (ATerm t)
  {
    t = SSL_is_int(not_null(o_19));
    return(t);
  }
  o_19 = t;
  t = q_19(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm r_65 (ATerm), ATerm s_65 (ATerm))
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
  ATerm l_20 (ATerm t)
  {
    ATerm d_20 = NULL,f_20 = NULL;
    ATerm n_20 (ATerm t)
    {
      ATerm h_20 = NULL;
      ATerm o_20 (ATerm t)
      {
        ATerm j_20 = NULL;
        ATerm k_20 = NULL;
        ATerm p_20 (ATerm t)
        {
          if(((j_20 != NULL) && (j_20 != k_20)))
            _fail(k_20);
          else
            j_20 = k_20;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(f_20), not_null(h_20)), not_null(d_20));
        {
          k_20 = t;
          t = p_20(t);
        }
        t = not_null(j_20);
        return(t);
      }
      t = not_null(z_19);
      {
        t = s_65(t);
        {
          h_20 = t;
          t = o_20(t);
        }
      }
      return(t);
    }
    ATerm e_20 = NULL;
    ATerm m_20 (ATerm t)
    {
      if(((d_20 != NULL) && (d_20 != e_20)))
        _fail(e_20);
      else
        d_20 = e_20;
      return(t);
    }
    t = SSLgetAnnotations(not_null(x_19));
    {
      e_20 = t;
      t = m_20(t);
    }
    {
      t = not_null(y_19);
      {
        t = r_65(t);
        {
          f_20 = t;
          t = n_20(t);
        }
      }
    }
    return(t);
  }
  x_19 = t;
  w_19 :
  if(match_cons(x_19, sym_Scope_2))
    {
      y_19 = ATgetArgument(x_19, 0);
      z_19 = ATgetArgument(x_19, 1);
      t = l_20(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Build_1 (ATerm t, ATerm p_65 (ATerm))
{
  ATerm v_20 = NULL,w_20 = NULL;
  ATerm f_21 (ATerm t)
  {
    ATerm z_20 = NULL,b_21 = NULL;
    ATerm h_21 (ATerm t)
    {
      ATerm d_21 = NULL;
      ATerm e_21 = NULL;
      ATerm i_21 (ATerm t)
      {
        if(((d_21 != NULL) && (d_21 != e_21)))
          _fail(e_21);
        else
          d_21 = e_21;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(b_21)), not_null(z_20));
      {
        e_21 = t;
        t = i_21(t);
      }
      t = not_null(d_21);
      return(t);
    }
    ATerm a_21 = NULL;
    ATerm g_21 (ATerm t)
    {
      if(((z_20 != NULL) && (z_20 != a_21)))
        _fail(a_21);
      else
        z_20 = a_21;
      return(t);
    }
    t = SSLgetAnnotations(not_null(v_20));
    {
      a_21 = t;
      t = g_21(t);
    }
    {
      t = not_null(w_20);
      {
        t = p_65(t);
        {
          b_21 = t;
          t = h_21(t);
        }
      }
    }
    return(t);
  }
  v_20 = t;
  u_20 :
  if(match_cons(v_20, sym_Build_1))
    {
      w_20 = ATgetArgument(v_20, 0);
      t = f_21(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Str_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm s_21 = NULL,t_21 = NULL;
  ATerm k_22 (ATerm t)
  {
    ATerm w_21 = NULL,y_21 = NULL;
    ATerm n_22 (ATerm t)
    {
      ATerm a_22 = NULL;
      ATerm b_22 = NULL;
      ATerm o_22 (ATerm t)
      {
        if(((a_22 != NULL) && (a_22 != b_22)))
          _fail(b_22);
        else
          a_22 = b_22;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(y_21)), not_null(w_21));
      {
        b_22 = t;
        t = o_22(t);
      }
      t = not_null(a_22);
      return(t);
    }
    ATerm x_21 = NULL;
    ATerm m_22 (ATerm t)
    {
      if(((w_21 != NULL) && (w_21 != x_21)))
        _fail(x_21);
      else
        w_21 = x_21;
      return(t);
    }
    t = SSLgetAnnotations(not_null(s_21));
    {
      x_21 = t;
      t = m_22(t);
    }
    {
      t = not_null(t_21);
      {
        t = p_0(t);
        {
          y_21 = t;
          t = n_22(t);
        }
      }
    }
    return(t);
  }
  ATerm l_22 (ATerm t)
  {
    ATerm e_22 = NULL,g_22 = NULL;
    ATerm q_22 (ATerm t)
    {
      ATerm i_22 = NULL;
      ATerm j_22 = NULL;
      ATerm r_22 (ATerm t)
      {
        if(((i_22 != NULL) && (i_22 != j_22)))
          _fail(j_22);
        else
          i_22 = j_22;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(g_22)), not_null(e_22));
      {
        j_22 = t;
        t = r_22(t);
      }
      t = not_null(i_22);
      return(t);
    }
    ATerm f_22 = NULL;
    ATerm p_22 (ATerm t)
    {
      if(((e_22 != NULL) && (e_22 != f_22)))
        _fail(f_22);
      else
        e_22 = f_22;
      return(t);
    }
    t = SSLgetAnnotations(not_null(s_21));
    {
      f_22 = t;
      t = p_22(t);
    }
    {
      t = not_null(t_21);
      {
        t = p_0(t);
        {
          g_22 = t;
          t = q_22(t);
        }
      }
    }
    return(t);
  }
  s_21 = t;
  r_21 :
  if(match_cons(s_21, sym_Str_1))
    {
      t_21 = ATgetArgument(s_21, 0);
      {
        ATerm b_5 = t;
        int c_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_22(t);
            ;
            LocalPopChoice(c_5);
          }
        else
          {
            t = b_5;
            t = l_22(t);
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
  ATerm t_22 = NULL;
  ATerm v_22 (ATerm t)
  {
    t = SSL_is_real(not_null(t_22));
    return(t);
  }
  t_22 = t;
  t = v_22(t);
  return(t);
}
ATerm Real_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm f_23 = NULL,g_23 = NULL;
  ATerm x_23 (ATerm t)
  {
    ATerm j_23 = NULL,l_23 = NULL;
    ATerm a_24 (ATerm t)
    {
      ATerm n_23 = NULL;
      ATerm o_23 = NULL;
      ATerm b_24 (ATerm t)
      {
        if(((n_23 != NULL) && (n_23 != o_23)))
          _fail(o_23);
        else
          n_23 = o_23;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(l_23)), not_null(j_23));
      {
        o_23 = t;
        t = b_24(t);
      }
      t = not_null(n_23);
      return(t);
    }
    ATerm k_23 = NULL;
    ATerm z_23 (ATerm t)
    {
      if(((j_23 != NULL) && (j_23 != k_23)))
        _fail(k_23);
      else
        j_23 = k_23;
      return(t);
    }
    t = SSLgetAnnotations(not_null(f_23));
    {
      k_23 = t;
      t = z_23(t);
    }
    {
      t = not_null(g_23);
      {
        t = o_0(t);
        {
          l_23 = t;
          t = a_24(t);
        }
      }
    }
    return(t);
  }
  ATerm y_23 (ATerm t)
  {
    ATerm r_23 = NULL,t_23 = NULL;
    ATerm d_24 (ATerm t)
    {
      ATerm v_23 = NULL;
      ATerm w_23 = NULL;
      ATerm e_24 (ATerm t)
      {
        if(((v_23 != NULL) && (v_23 != w_23)))
          _fail(w_23);
        else
          v_23 = w_23;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(t_23)), not_null(r_23));
      {
        w_23 = t;
        t = e_24(t);
      }
      t = not_null(v_23);
      return(t);
    }
    ATerm s_23 = NULL;
    ATerm c_24 (ATerm t)
    {
      if(((r_23 != NULL) && (r_23 != s_23)))
        _fail(s_23);
      else
        r_23 = s_23;
      return(t);
    }
    t = SSLgetAnnotations(not_null(f_23));
    {
      s_23 = t;
      t = c_24(t);
    }
    {
      t = not_null(g_23);
      {
        t = o_0(t);
        {
          t_23 = t;
          t = d_24(t);
        }
      }
    }
    return(t);
  }
  f_23 = t;
  e_23 :
  if(match_cons(f_23, sym_Real_1))
    {
      g_23 = ATgetArgument(f_23, 0);
      {
        ATerm d_5 = t;
        int e_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_23(t);
            ;
            LocalPopChoice(e_5);
          }
        else
          {
            t = d_5;
            t = y_23(t);
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Int_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm o_24 = NULL,p_24 = NULL;
  ATerm g_25 (ATerm t)
  {
    ATerm s_24 = NULL,u_24 = NULL;
    ATerm j_25 (ATerm t)
    {
      ATerm w_24 = NULL;
      ATerm x_24 = NULL;
      ATerm k_25 (ATerm t)
      {
        if(((w_24 != NULL) && (w_24 != x_24)))
          _fail(x_24);
        else
          w_24 = x_24;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(u_24)), not_null(s_24));
      {
        x_24 = t;
        t = k_25(t);
      }
      t = not_null(w_24);
      return(t);
    }
    ATerm t_24 = NULL;
    ATerm i_25 (ATerm t)
    {
      if(((s_24 != NULL) && (s_24 != t_24)))
        _fail(t_24);
      else
        s_24 = t_24;
      return(t);
    }
    t = SSLgetAnnotations(not_null(o_24));
    {
      t_24 = t;
      t = i_25(t);
    }
    {
      t = not_null(p_24);
      {
        t = n_0(t);
        {
          u_24 = t;
          t = j_25(t);
        }
      }
    }
    return(t);
  }
  ATerm h_25 (ATerm t)
  {
    ATerm a_25 = NULL,c_25 = NULL;
    ATerm m_25 (ATerm t)
    {
      ATerm e_25 = NULL;
      ATerm f_25 = NULL;
      ATerm n_25 (ATerm t)
      {
        if(((e_25 != NULL) && (e_25 != f_25)))
          _fail(f_25);
        else
          e_25 = f_25;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(c_25)), not_null(a_25));
      {
        f_25 = t;
        t = n_25(t);
      }
      t = not_null(e_25);
      return(t);
    }
    ATerm b_25 = NULL;
    ATerm l_25 (ATerm t)
    {
      if(((a_25 != NULL) && (a_25 != b_25)))
        _fail(b_25);
      else
        a_25 = b_25;
      return(t);
    }
    t = SSLgetAnnotations(not_null(o_24));
    {
      b_25 = t;
      t = l_25(t);
    }
    {
      t = not_null(p_24);
      {
        t = n_0(t);
        {
          c_25 = t;
          t = m_25(t);
        }
      }
    }
    return(t);
  }
  o_24 = t;
  n_24 :
  if(match_cons(o_24, sym_Int_1))
    {
      p_24 = ATgetArgument(o_24, 0);
      {
        ATerm f_5 = t;
        int g_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_25(t);
            ;
            LocalPopChoice(g_5);
          }
        else
          {
            t = f_5;
            t = h_25(t);
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm shallow_term_expression_0 (ATerm t)
{
  ATerm h_5 = t;
  int i_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, is_string_0);
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
            t = Int_1(t, is_int_0);
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
                  t = Real_1(t, is_real_0);
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
                        t = Str_1(t, is_string_0);
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
                              ATerm f_0 (ATerm t)
                              {
                                ATerm h_0 (ATerm t)
                                {
                                  t = Var_1(t, is_string_0);
                                  return(t);
                                }
                                t = list_1(t, h_0);
                                return(t);
                              }
                              t = Op_2(t, is_string_0, f_0);
                              ;
                              LocalPopChoice(q_5);
                            }
                          else
                            {
                              t = p_5;
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_r_5;
                                  return(t);
                                }
                                t = debug_1(t, r_0);
                              }
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
ATerm Match_1 (ATerm t, ATerm o_65 (ATerm))
{
  ATerm u_25 = NULL,v_25 = NULL;
  ATerm e_26 (ATerm t)
  {
    ATerm y_25 = NULL,a_26 = NULL;
    ATerm g_26 (ATerm t)
    {
      ATerm c_26 = NULL;
      ATerm d_26 = NULL;
      ATerm h_26 (ATerm t)
      {
        if(((c_26 != NULL) && (c_26 != d_26)))
          _fail(d_26);
        else
          c_26 = d_26;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(a_26)), not_null(y_25));
      {
        d_26 = t;
        t = h_26(t);
      }
      t = not_null(c_26);
      return(t);
    }
    ATerm z_25 = NULL;
    ATerm f_26 (ATerm t)
    {
      if(((y_25 != NULL) && (y_25 != z_25)))
        _fail(z_25);
      else
        y_25 = z_25;
      return(t);
    }
    t = SSLgetAnnotations(not_null(u_25));
    {
      z_25 = t;
      t = f_26(t);
    }
    {
      t = not_null(v_25);
      {
        t = o_65(t);
        {
          a_26 = t;
          t = g_26(t);
        }
      }
    }
    return(t);
  }
  u_25 = t;
  t_25 :
  if(match_cons(u_25, sym_Match_1))
    {
      v_25 = ATgetArgument(u_25, 0);
      t = e_26(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm x_66 (ATerm))
{
  ATerm n_26 = NULL,o_26 = NULL;
  ATerm x_26 (ATerm t)
  {
    ATerm r_26 = NULL,t_26 = NULL;
    ATerm z_26 (ATerm t)
    {
      ATerm v_26 = NULL;
      ATerm w_26 = NULL;
      ATerm a_27 (ATerm t)
      {
        if(((v_26 != NULL) && (v_26 != w_26)))
          _fail(w_26);
        else
          v_26 = w_26;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(t_26)), not_null(r_26));
      {
        w_26 = t;
        t = a_27(t);
      }
      t = not_null(v_26);
      return(t);
    }
    ATerm s_26 = NULL;
    ATerm y_26 (ATerm t)
    {
      if(((r_26 != NULL) && (r_26 != s_26)))
        _fail(s_26);
      else
        r_26 = s_26;
      return(t);
    }
    t = SSLgetAnnotations(not_null(n_26));
    {
      s_26 = t;
      t = y_26(t);
    }
    {
      t = not_null(o_26);
      {
        t = x_66(t);
        {
          t_26 = t;
          t = z_26(t);
        }
      }
    }
    return(t);
  }
  n_26 = t;
  m_26 :
  if(match_cons(n_26, sym_Thread_1))
    {
      o_26 = ATgetArgument(n_26, 0);
      t = x_26(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm All_1 (ATerm t, ATerm w_66 (ATerm))
{
  ATerm g_27 = NULL,h_27 = NULL;
  ATerm v_27 (ATerm t)
  {
    ATerm k_27 = NULL,m_27 = NULL;
    ATerm x_27 (ATerm t)
    {
      ATerm o_27 = NULL;
      ATerm u_27 = NULL;
      ATerm y_27 (ATerm t)
      {
        if(((o_27 != NULL) && (o_27 != u_27)))
          _fail(u_27);
        else
          o_27 = u_27;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(m_27)), not_null(k_27));
      {
        u_27 = t;
        t = y_27(t);
      }
      t = not_null(o_27);
      return(t);
    }
    ATerm l_27 = NULL;
    ATerm w_27 (ATerm t)
    {
      if(((k_27 != NULL) && (k_27 != l_27)))
        _fail(l_27);
      else
        k_27 = l_27;
      return(t);
    }
    t = SSLgetAnnotations(not_null(g_27));
    {
      l_27 = t;
      t = w_27(t);
    }
    {
      t = not_null(h_27);
      {
        t = w_66(t);
        {
          m_27 = t;
          t = x_27(t);
        }
      }
    }
    return(t);
  }
  g_27 = t;
  f_27 :
  if(match_cons(g_27, sym_All_1))
    {
      h_27 = ATgetArgument(g_27, 0);
      t = v_27(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Some_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm l_28 = NULL,m_28 = NULL;
  ATerm d_29 (ATerm t)
  {
    ATerm p_28 = NULL,r_28 = NULL;
    ATerm g_29 (ATerm t)
    {
      ATerm t_28 = NULL;
      ATerm u_28 = NULL;
      ATerm h_29 (ATerm t)
      {
        if(((t_28 != NULL) && (t_28 != u_28)))
          _fail(u_28);
        else
          t_28 = u_28;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(r_28)), not_null(p_28));
      {
        u_28 = t;
        t = h_29(t);
      }
      t = not_null(t_28);
      return(t);
    }
    ATerm q_28 = NULL;
    ATerm f_29 (ATerm t)
    {
      if(((p_28 != NULL) && (p_28 != q_28)))
        _fail(q_28);
      else
        p_28 = q_28;
      return(t);
    }
    t = SSLgetAnnotations(not_null(l_28));
    {
      q_28 = t;
      t = f_29(t);
    }
    {
      t = not_null(m_28);
      {
        t = m_0(t);
        {
          r_28 = t;
          t = g_29(t);
        }
      }
    }
    return(t);
  }
  ATerm e_29 (ATerm t)
  {
    ATerm x_28 = NULL,z_28 = NULL;
    ATerm j_29 (ATerm t)
    {
      ATerm b_29 = NULL;
      ATerm c_29 = NULL;
      ATerm k_29 (ATerm t)
      {
        if(((b_29 != NULL) && (b_29 != c_29)))
          _fail(c_29);
        else
          b_29 = c_29;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(z_28)), not_null(x_28));
      {
        c_29 = t;
        t = k_29(t);
      }
      t = not_null(b_29);
      return(t);
    }
    ATerm y_28 = NULL;
    ATerm i_29 (ATerm t)
    {
      if(((x_28 != NULL) && (x_28 != y_28)))
        _fail(y_28);
      else
        x_28 = y_28;
      return(t);
    }
    t = SSLgetAnnotations(not_null(l_28));
    {
      y_28 = t;
      t = i_29(t);
    }
    {
      t = not_null(m_28);
      {
        t = m_0(t);
        {
          z_28 = t;
          t = j_29(t);
        }
      }
    }
    return(t);
  }
  l_28 = t;
  h_28 :
  if(match_cons(l_28, sym_Some_1))
    {
      m_28 = ATgetArgument(l_28, 0);
      {
        ATerm s_5 = t;
        int t_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_29(t);
            ;
            LocalPopChoice(t_5);
          }
        else
          {
            t = s_5;
            t = e_29(t);
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm One_1 (ATerm t, ATerm v_66 (ATerm))
{
  ATerm q_29 = NULL,r_29 = NULL;
  ATerm a_30 (ATerm t)
  {
    ATerm u_29 = NULL,w_29 = NULL;
    ATerm c_30 (ATerm t)
    {
      ATerm y_29 = NULL;
      ATerm z_29 = NULL;
      ATerm d_30 (ATerm t)
      {
        if(((y_29 != NULL) && (y_29 != z_29)))
          _fail(z_29);
        else
          y_29 = z_29;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(w_29)), not_null(u_29));
      {
        z_29 = t;
        t = d_30(t);
      }
      t = not_null(y_29);
      return(t);
    }
    ATerm v_29 = NULL;
    ATerm b_30 (ATerm t)
    {
      if(((u_29 != NULL) && (u_29 != v_29)))
        _fail(v_29);
      else
        u_29 = v_29;
      return(t);
    }
    t = SSLgetAnnotations(not_null(q_29));
    {
      v_29 = t;
      t = b_30(t);
    }
    {
      t = not_null(r_29);
      {
        t = v_66(t);
        {
          w_29 = t;
          t = c_30(t);
        }
      }
    }
    return(t);
  }
  q_29 = t;
  p_29 :
  if(match_cons(q_29, sym_One_1))
    {
      r_29 = ATgetArgument(q_29, 0);
      t = a_30(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm h_61 (ATerm), ATerm i_61 (ATerm))
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
  ATerm y_30 (ATerm t)
  {
    ATerm q_30 = NULL,s_30 = NULL;
    ATerm a_31 (ATerm t)
    {
      ATerm u_30 = NULL;
      ATerm b_31 (ATerm t)
      {
        ATerm w_30 = NULL;
        ATerm x_30 = NULL;
        ATerm c_31 (ATerm t)
        {
          if(((w_30 != NULL) && (w_30 != x_30)))
            _fail(x_30);
          else
            w_30 = x_30;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(s_30), not_null(u_30)), not_null(q_30));
        {
          x_30 = t;
          t = c_31(t);
        }
        t = not_null(w_30);
        return(t);
      }
      t = not_null(m_30);
      {
        t = i_61(t);
        {
          u_30 = t;
          t = b_31(t);
        }
      }
      return(t);
    }
    ATerm r_30 = NULL;
    ATerm z_30 (ATerm t)
    {
      if(((q_30 != NULL) && (q_30 != r_30)))
        _fail(r_30);
      else
        q_30 = r_30;
      return(t);
    }
    t = SSLgetAnnotations(not_null(k_30));
    {
      r_30 = t;
      t = z_30(t);
    }
    {
      t = not_null(l_30);
      {
        t = h_61(t);
        {
          s_30 = t;
          t = a_31(t);
        }
      }
    }
    return(t);
  }
  k_30 = t;
  j_30 :
  if(match_cons(k_30, sym_Cong_2))
    {
      l_30 = ATgetArgument(k_30, 0);
      m_30 = ATgetArgument(k_30, 1);
      t = y_30(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Path_2 (ATerm t, ATerm s_66 (ATerm), ATerm t_66 (ATerm))
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
  ATerm x_31 (ATerm t)
  {
    ATerm p_31 = NULL,r_31 = NULL;
    ATerm z_31 (ATerm t)
    {
      ATerm t_31 = NULL;
      ATerm a_32 (ATerm t)
      {
        ATerm v_31 = NULL;
        ATerm w_31 = NULL;
        ATerm b_32 (ATerm t)
        {
          if(((v_31 != NULL) && (v_31 != w_31)))
            _fail(w_31);
          else
            v_31 = w_31;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(r_31), not_null(t_31)), not_null(p_31));
        {
          w_31 = t;
          t = b_32(t);
        }
        t = not_null(v_31);
        return(t);
      }
      t = not_null(l_31);
      {
        t = t_66(t);
        {
          t_31 = t;
          t = a_32(t);
        }
      }
      return(t);
    }
    ATerm q_31 = NULL;
    ATerm y_31 (ATerm t)
    {
      if(((p_31 != NULL) && (p_31 != q_31)))
        _fail(q_31);
      else
        p_31 = q_31;
      return(t);
    }
    t = SSLgetAnnotations(not_null(j_31));
    {
      q_31 = t;
      t = y_31(t);
    }
    {
      t = not_null(k_31);
      {
        t = s_66(t);
        {
          r_31 = t;
          t = z_31(t);
        }
      }
    }
    return(t);
  }
  j_31 = t;
  i_31 :
  if(match_cons(j_31, sym_Path_2))
    {
      k_31 = ATgetArgument(j_31, 0);
      l_31 = ATgetArgument(j_31, 1);
      t = x_31(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm e_66 (ATerm), ATerm f_66 (ATerm))
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
  ATerm w_32 (ATerm t)
  {
    ATerm o_32 = NULL,q_32 = NULL;
    ATerm y_32 (ATerm t)
    {
      ATerm s_32 = NULL;
      ATerm z_32 (ATerm t)
      {
        ATerm u_32 = NULL;
        ATerm v_32 = NULL;
        ATerm a_33 (ATerm t)
        {
          if(((u_32 != NULL) && (u_32 != v_32)))
            _fail(v_32);
          else
            u_32 = v_32;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(q_32), not_null(s_32)), not_null(o_32));
        {
          v_32 = t;
          t = a_33(t);
        }
        t = not_null(u_32);
        return(t);
      }
      t = not_null(k_32);
      {
        t = f_66(t);
        {
          s_32 = t;
          t = z_32(t);
        }
      }
      return(t);
    }
    ATerm p_32 = NULL;
    ATerm x_32 (ATerm t)
    {
      if(((o_32 != NULL) && (o_32 != p_32)))
        _fail(p_32);
      else
        o_32 = p_32;
      return(t);
    }
    t = SSLgetAnnotations(not_null(i_32));
    {
      p_32 = t;
      t = x_32(t);
    }
    {
      t = not_null(j_32);
      {
        t = e_66(t);
        {
          q_32 = t;
          t = y_32(t);
        }
      }
    }
    return(t);
  }
  i_32 = t;
  h_32 :
  if(match_cons(i_32, sym_Rec_2))
    {
      j_32 = ATgetArgument(i_32, 0);
      k_32 = ATgetArgument(i_32, 1);
      t = w_32(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm g_65 (ATerm))
{
  ATerm g_33 = NULL,h_33 = NULL;
  ATerm q_33 (ATerm t)
  {
    ATerm k_33 = NULL,m_33 = NULL;
    ATerm s_33 (ATerm t)
    {
      ATerm o_33 = NULL;
      ATerm p_33 = NULL;
      ATerm t_33 (ATerm t)
      {
        if(((o_33 != NULL) && (o_33 != p_33)))
          _fail(p_33);
        else
          o_33 = p_33;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(m_33)), not_null(k_33));
      {
        p_33 = t;
        t = t_33(t);
      }
      t = not_null(o_33);
      return(t);
    }
    ATerm l_33 = NULL;
    ATerm r_33 (ATerm t)
    {
      if(((k_33 != NULL) && (k_33 != l_33)))
        _fail(l_33);
      else
        k_33 = l_33;
      return(t);
    }
    t = SSLgetAnnotations(not_null(g_33));
    {
      l_33 = t;
      t = r_33(t);
    }
    {
      t = not_null(h_33);
      {
        t = g_65(t);
        {
          m_33 = t;
          t = s_33(t);
        }
      }
    }
    return(t);
  }
  g_33 = t;
  f_33 :
  if(match_cons(g_33, sym_SVar_1))
    {
      h_33 = ATgetArgument(g_33, 0);
      t = q_33(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Call_2 (ATerm t, ATerm j_65 (ATerm), ATerm k_65 (ATerm))
{
  ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL;
  ATerm q_34 (ATerm t)
  {
    ATerm i_34 = NULL,k_34 = NULL;
    ATerm s_34 (ATerm t)
    {
      ATerm m_34 = NULL;
      ATerm t_34 (ATerm t)
      {
        ATerm o_34 = NULL;
        ATerm p_34 = NULL;
        ATerm u_34 (ATerm t)
        {
          if(((o_34 != NULL) && (o_34 != p_34)))
            _fail(p_34);
          else
            o_34 = p_34;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(k_34), not_null(m_34)), not_null(i_34));
        {
          p_34 = t;
          t = u_34(t);
        }
        t = not_null(o_34);
        return(t);
      }
      t = not_null(e_34);
      {
        t = k_65(t);
        {
          m_34 = t;
          t = t_34(t);
        }
      }
      return(t);
    }
    ATerm j_34 = NULL;
    ATerm r_34 (ATerm t)
    {
      if(((i_34 != NULL) && (i_34 != j_34)))
        _fail(j_34);
      else
        i_34 = j_34;
      return(t);
    }
    t = SSLgetAnnotations(not_null(c_34));
    {
      j_34 = t;
      t = r_34(t);
    }
    {
      t = not_null(d_34);
      {
        t = j_65(t);
        {
          k_34 = t;
          t = s_34(t);
        }
      }
    }
    return(t);
  }
  c_34 = t;
  b_34 :
  if(match_cons(c_34, sym_Call_2))
    {
      d_34 = ATgetArgument(c_34, 0);
      e_34 = ATgetArgument(c_34, 1);
      t = q_34(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LGChoice_2 (ATerm t, ATerm z_65 (ATerm), ATerm a_66 (ATerm))
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
  ATerm r_35 (ATerm t)
  {
    ATerm h_35 = NULL,j_35 = NULL;
    ATerm t_35 (ATerm t)
    {
      ATerm n_35 = NULL;
      ATerm u_35 (ATerm t)
      {
        ATerm p_35 = NULL;
        ATerm q_35 = NULL;
        ATerm v_35 (ATerm t)
        {
          if(((p_35 != NULL) && (p_35 != q_35)))
            _fail(q_35);
          else
            p_35 = q_35;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(j_35), not_null(n_35)), not_null(h_35));
        {
          q_35 = t;
          t = v_35(t);
        }
        t = not_null(p_35);
        return(t);
      }
      t = not_null(d_35);
      {
        t = a_66(t);
        {
          n_35 = t;
          t = u_35(t);
        }
      }
      return(t);
    }
    ATerm i_35 = NULL;
    ATerm s_35 (ATerm t)
    {
      if(((h_35 != NULL) && (h_35 != i_35)))
        _fail(i_35);
      else
        h_35 = i_35;
      return(t);
    }
    t = SSLgetAnnotations(not_null(b_35));
    {
      i_35 = t;
      t = s_35(t);
    }
    {
      t = not_null(c_35);
      {
        t = z_65(t);
        {
          j_35 = t;
          t = t_35(t);
        }
      }
    }
    return(t);
  }
  b_35 = t;
  a_35 :
  if(match_cons(b_35, sym_LGChoice_2))
    {
      c_35 = ATgetArgument(b_35, 0);
      d_35 = ATgetArgument(b_35, 1);
      t = r_35(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm GChoice_2 (ATerm t, ATerm z_64 (ATerm), ATerm a_65 (ATerm))
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
  ATerm q_36 (ATerm t)
  {
    ATerm i_36 = NULL,k_36 = NULL;
    ATerm s_36 (ATerm t)
    {
      ATerm m_36 = NULL;
      ATerm t_36 (ATerm t)
      {
        ATerm o_36 = NULL;
        ATerm p_36 = NULL;
        ATerm u_36 (ATerm t)
        {
          if(((o_36 != NULL) && (o_36 != p_36)))
            _fail(p_36);
          else
            o_36 = p_36;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(k_36), not_null(m_36)), not_null(i_36));
        {
          p_36 = t;
          t = u_36(t);
        }
        t = not_null(o_36);
        return(t);
      }
      t = not_null(e_36);
      {
        t = a_65(t);
        {
          m_36 = t;
          t = t_36(t);
        }
      }
      return(t);
    }
    ATerm j_36 = NULL;
    ATerm r_36 (ATerm t)
    {
      if(((i_36 != NULL) && (i_36 != j_36)))
        _fail(j_36);
      else
        i_36 = j_36;
      return(t);
    }
    t = SSLgetAnnotations(not_null(c_36));
    {
      j_36 = t;
      t = r_36(t);
    }
    {
      t = not_null(d_36);
      {
        t = z_64(t);
        {
          k_36 = t;
          t = s_36(t);
        }
      }
    }
    return(t);
  }
  c_36 = t;
  b_36 :
  if(match_cons(c_36, sym_GChoice_2))
    {
      d_36 = ATgetArgument(c_36, 0);
      e_36 = ATgetArgument(c_36, 1);
      t = q_36(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm b_66 (ATerm), ATerm c_66 (ATerm), ATerm d_66 (ATerm))
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL;
  ATerm u_37 (ATerm t)
  {
    ATerm k_37 = NULL,m_37 = NULL;
    ATerm w_37 (ATerm t)
    {
      ATerm o_37 = NULL;
      ATerm x_37 (ATerm t)
      {
        ATerm q_37 = NULL;
        ATerm y_37 (ATerm t)
        {
          ATerm s_37 = NULL;
          ATerm t_37 = NULL;
          ATerm z_37 (ATerm t)
          {
            if(((s_37 != NULL) && (s_37 != t_37)))
              _fail(t_37);
            else
              s_37 = t_37;
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(m_37), not_null(o_37), not_null(q_37)), not_null(k_37));
          {
            t_37 = t;
            t = z_37(t);
          }
          t = not_null(s_37);
          return(t);
        }
        t = not_null(f_37);
        {
          t = d_66(t);
          {
            q_37 = t;
            t = y_37(t);
          }
        }
        return(t);
      }
      t = not_null(e_37);
      {
        t = c_66(t);
        {
          o_37 = t;
          t = x_37(t);
        }
      }
      return(t);
    }
    ATerm l_37 = NULL;
    ATerm v_37 (ATerm t)
    {
      if(((k_37 != NULL) && (k_37 != l_37)))
        _fail(l_37);
      else
        k_37 = l_37;
      return(t);
    }
    t = SSLgetAnnotations(not_null(c_37));
    {
      l_37 = t;
      t = v_37(t);
    }
    {
      t = not_null(d_37);
      {
        t = b_66(t);
        {
          m_37 = t;
          t = w_37(t);
        }
      }
    }
    return(t);
  }
  c_37 = t;
  b_37 :
  if(match_cons(c_37, sym_GuardedLChoice_3))
    {
      d_37 = ATgetArgument(c_37, 0);
      e_37 = ATgetArgument(c_37, 1);
      f_37 = ATgetArgument(c_37, 2);
      t = u_37(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm x_65 (ATerm), ATerm y_65 (ATerm))
{
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
  ATerm u_38 (ATerm t)
  {
    ATerm m_38 = NULL,o_38 = NULL;
    ATerm w_38 (ATerm t)
    {
      ATerm q_38 = NULL;
      ATerm x_38 (ATerm t)
      {
        ATerm s_38 = NULL;
        ATerm t_38 = NULL;
        ATerm y_38 (ATerm t)
        {
          if(((s_38 != NULL) && (s_38 != t_38)))
            _fail(t_38);
          else
            s_38 = t_38;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(o_38), not_null(q_38)), not_null(m_38));
        {
          t_38 = t;
          t = y_38(t);
        }
        t = not_null(s_38);
        return(t);
      }
      t = not_null(i_38);
      {
        t = y_65(t);
        {
          q_38 = t;
          t = x_38(t);
        }
      }
      return(t);
    }
    ATerm n_38 = NULL;
    ATerm v_38 (ATerm t)
    {
      if(((m_38 != NULL) && (m_38 != n_38)))
        _fail(n_38);
      else
        m_38 = n_38;
      return(t);
    }
    t = SSLgetAnnotations(not_null(g_38));
    {
      n_38 = t;
      t = v_38(t);
    }
    {
      t = not_null(h_38);
      {
        t = x_65(t);
        {
          o_38 = t;
          t = w_38(t);
        }
      }
    }
    return(t);
  }
  g_38 = t;
  f_38 :
  if(match_cons(g_38, sym_LChoice_2))
    {
      h_38 = ATgetArgument(g_38, 0);
      i_38 = ATgetArgument(g_38, 1);
      t = u_38(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm v_64 (ATerm), ATerm w_64 (ATerm))
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
  ATerm t_39 (ATerm t)
  {
    ATerm l_39 = NULL,n_39 = NULL;
    ATerm v_39 (ATerm t)
    {
      ATerm p_39 = NULL;
      ATerm w_39 (ATerm t)
      {
        ATerm r_39 = NULL;
        ATerm s_39 = NULL;
        ATerm x_39 (ATerm t)
        {
          if(((r_39 != NULL) && (r_39 != s_39)))
            _fail(s_39);
          else
            r_39 = s_39;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(n_39), not_null(p_39)), not_null(l_39));
        {
          s_39 = t;
          t = x_39(t);
        }
        t = not_null(r_39);
        return(t);
      }
      t = not_null(h_39);
      {
        t = w_64(t);
        {
          p_39 = t;
          t = w_39(t);
        }
      }
      return(t);
    }
    ATerm m_39 = NULL;
    ATerm u_39 (ATerm t)
    {
      if(((l_39 != NULL) && (l_39 != m_39)))
        _fail(m_39);
      else
        l_39 = m_39;
      return(t);
    }
    t = SSLgetAnnotations(not_null(f_39));
    {
      m_39 = t;
      t = u_39(t);
    }
    {
      t = not_null(g_39);
      {
        t = v_64(t);
        {
          n_39 = t;
          t = v_39(t);
        }
      }
    }
    return(t);
  }
  f_39 = t;
  e_39 :
  if(match_cons(f_39, sym_Choice_2))
    {
      g_39 = ATgetArgument(f_39, 0);
      h_39 = ATgetArgument(f_39, 1);
      t = t_39(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm v_65 (ATerm), ATerm w_65 (ATerm))
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL;
  ATerm w_40 (ATerm t)
  {
    ATerm k_40 = NULL,q_40 = NULL;
    ATerm y_40 (ATerm t)
    {
      ATerm s_40 = NULL;
      ATerm z_40 (ATerm t)
      {
        ATerm u_40 = NULL;
        ATerm v_40 = NULL;
        ATerm a_41 (ATerm t)
        {
          if(((u_40 != NULL) && (u_40 != v_40)))
            _fail(v_40);
          else
            u_40 = v_40;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(q_40), not_null(s_40)), not_null(k_40));
        {
          v_40 = t;
          t = a_41(t);
        }
        t = not_null(u_40);
        return(t);
      }
      t = not_null(g_40);
      {
        t = w_65(t);
        {
          s_40 = t;
          t = z_40(t);
        }
      }
      return(t);
    }
    ATerm o_40 = NULL;
    ATerm x_40 (ATerm t)
    {
      if(((k_40 != NULL) && (k_40 != o_40)))
        _fail(o_40);
      else
        k_40 = o_40;
      return(t);
    }
    t = SSLgetAnnotations(not_null(e_40));
    {
      o_40 = t;
      t = x_40(t);
    }
    {
      t = not_null(f_40);
      {
        t = v_65(t);
        {
          q_40 = t;
          t = y_40(t);
        }
      }
    }
    return(t);
  }
  e_40 = t;
  d_40 :
  if(match_cons(e_40, sym_Seq_2))
    {
      f_40 = ATgetArgument(e_40, 0);
      g_40 = ATgetArgument(e_40, 1);
      t = w_40(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Test_1 (ATerm t, ATerm i_66 (ATerm))
{
  ATerm g_41 = NULL,h_41 = NULL;
  ATerm q_41 (ATerm t)
  {
    ATerm k_41 = NULL,m_41 = NULL;
    ATerm s_41 (ATerm t)
    {
      ATerm o_41 = NULL;
      ATerm p_41 = NULL;
      ATerm t_41 (ATerm t)
      {
        if(((o_41 != NULL) && (o_41 != p_41)))
          _fail(p_41);
        else
          o_41 = p_41;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(m_41)), not_null(k_41));
      {
        p_41 = t;
        t = t_41(t);
      }
      t = not_null(o_41);
      return(t);
    }
    ATerm l_41 = NULL;
    ATerm r_41 (ATerm t)
    {
      if(((k_41 != NULL) && (k_41 != l_41)))
        _fail(l_41);
      else
        k_41 = l_41;
      return(t);
    }
    t = SSLgetAnnotations(not_null(g_41));
    {
      l_41 = t;
      t = r_41(t);
    }
    {
      t = not_null(h_41);
      {
        t = i_66(t);
        {
          m_41 = t;
          t = s_41(t);
        }
      }
    }
    return(t);
  }
  g_41 = t;
  f_41 :
  if(match_cons(g_41, sym_Test_1))
    {
      h_41 = ATgetArgument(g_41, 0);
      t = q_41(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Not_1 (ATerm t, ATerm g_66 (ATerm))
{
  ATerm z_41 = NULL,a_42 = NULL;
  ATerm k_42 (ATerm t)
  {
    ATerm d_42 = NULL,f_42 = NULL;
    ATerm p_42 (ATerm t)
    {
      ATerm i_42 = NULL;
      ATerm j_42 = NULL;
      ATerm q_42 (ATerm t)
      {
        if(((i_42 != NULL) && (i_42 != j_42)))
          _fail(j_42);
        else
          i_42 = j_42;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(f_42)), not_null(d_42));
      {
        j_42 = t;
        t = q_42(t);
      }
      t = not_null(i_42);
      return(t);
    }
    ATerm e_42 = NULL;
    ATerm o_42 (ATerm t)
    {
      if(((d_42 != NULL) && (d_42 != e_42)))
        _fail(e_42);
      else
        d_42 = e_42;
      return(t);
    }
    t = SSLgetAnnotations(not_null(z_41));
    {
      e_42 = t;
      t = o_42(t);
    }
    {
      t = not_null(a_42);
      {
        t = g_66(t);
        {
          f_42 = t;
          t = p_42(t);
        }
      }
    }
    return(t);
  }
  z_41 = t;
  y_41 :
  if(match_cons(z_41, sym_Not_1))
    {
      a_42 = ATgetArgument(z_41, 0);
      t = k_42(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm v_42 = NULL;
  ATerm b_43 (ATerm t)
  {
    ATerm x_42 = NULL,z_42 = NULL;
    ATerm u_5;
    u_5 = t;
    {
      ATerm y_42 = NULL;
      ATerm c_43 (ATerm t)
      {
        if(((x_42 != NULL) && (x_42 != y_42)))
          _fail(y_42);
        else
          x_42 = y_42;
        return(t);
      }
      t = SSLgetAnnotations(not_null(v_42));
      {
        y_42 = t;
        t = c_43(t);
      }
    }
    t = u_5;
    {
      ATerm a_43 = NULL;
      ATerm d_43 (ATerm t)
      {
        if(((z_42 != NULL) && (z_42 != a_43)))
          _fail(a_43);
        else
          z_42 = a_43;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(x_42));
      {
        a_43 = t;
        t = d_43(t);
      }
      t = not_null(z_42);
    }
    return(t);
  }
  v_42 = t;
  u_42 :
  if(match_cons(v_42, sym_Fail_0))
    {
      t = b_43(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm i_43 = NULL;
  ATerm q_43 (ATerm t)
  {
    ATerm k_43 = NULL,o_43 = NULL;
    ATerm v_5;
    v_5 = t;
    {
      ATerm l_43 = NULL;
      ATerm r_43 (ATerm t)
      {
        if(((k_43 != NULL) && (k_43 != l_43)))
          _fail(l_43);
        else
          k_43 = l_43;
        return(t);
      }
      t = SSLgetAnnotations(not_null(i_43));
      {
        l_43 = t;
        t = r_43(t);
      }
    }
    t = v_5;
    {
      ATerm p_43 = NULL;
      ATerm t_43 (ATerm t)
      {
        if(((o_43 != NULL) && (o_43 != p_43)))
          _fail(p_43);
        else
          o_43 = p_43;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(k_43));
      {
        p_43 = t;
        t = t_43(t);
      }
      t = not_null(o_43);
    }
    return(t);
  }
  i_43 = t;
  h_43 :
  if(match_cons(i_43, sym_Id_0))
    {
      t = q_43(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm w_5 = t;
  int x_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
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
            t = Fail_0(t);
            ;
            LocalPopChoice(z_5);
          }
        else
          {
            t = y_5;
            {
              ATerm a_6 = t;
              int b_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  ;
                  LocalPopChoice(b_6);
                }
              else
                {
                  t = a_6;
                  {
                    ATerm c_6 = t;
                    int d_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        ;
                        LocalPopChoice(d_6);
                      }
                    else
                      {
                        t = c_6;
                        {
                          ATerm e_6 = t;
                          int f_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              ;
                              LocalPopChoice(f_6);
                            }
                          else
                            {
                              t = e_6;
                              {
                                ATerm g_6 = t;
                                int h_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    ;
                                    LocalPopChoice(h_6);
                                  }
                                else
                                  {
                                    t = g_6;
                                    {
                                      ATerm i_6 = t;
                                      int j_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          ;
                                          LocalPopChoice(j_6);
                                        }
                                      else
                                        {
                                          t = i_6;
                                          {
                                            ATerm k_6 = t;
                                            int l_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
                                                ;
                                                LocalPopChoice(l_6);
                                              }
                                            else
                                              {
                                                t = k_6;
                                                {
                                                  ATerm m_6 = t;
                                                  int n_6 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      ;
                                                      LocalPopChoice(n_6);
                                                    }
                                                  else
                                                    {
                                                      t = m_6;
                                                      {
                                                        ATerm o_6 = t;
                                                        int p_6 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                            ;
                                                            LocalPopChoice(p_6);
                                                          }
                                                        else
                                                          {
                                                            t = o_6;
                                                            {
                                                              ATerm q_6 = t;
                                                              int r_6 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm s_0 (ATerm t)
                                                                  {
                                                                    t = SVar_1(t, is_string_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm t_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, s_0, t_0);
                                                                  ;
                                                                  LocalPopChoice(r_6);
                                                                }
                                                              else
                                                                {
                                                                  t = q_6;
                                                                  {
                                                                    ATerm s_6 = t;
                                                                    int t_6 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
                                                                        ;
                                                                        LocalPopChoice(t_6);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = s_6;
                                                                        {
                                                                          ATerm u_6 = t;
                                                                          int v_6 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
                                                                              ;
                                                                              LocalPopChoice(v_6);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_6;
                                                                              {
                                                                                ATerm w_6 = t;
                                                                                int x_6 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm u_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, u_0);
                                                                                    ;
                                                                                    LocalPopChoice(x_6);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_6;
                                                                                    {
                                                                                      ATerm y_6 = t;
                                                                                      int z_6 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1(t, strategy_expression_0);
                                                                                          ;
                                                                                          LocalPopChoice(z_6);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_6;
                                                                                          {
                                                                                            ATerm a_7 = t;
                                                                                            int b_7 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1(t, strategy_expression_0);
                                                                                                ;
                                                                                                LocalPopChoice(b_7);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = a_7;
                                                                                                {
                                                                                                  ATerm c_7 = t;
                                                                                                  int d_7 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1(t, strategy_expression_0);
                                                                                                      ;
                                                                                                      LocalPopChoice(d_7);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = c_7;
                                                                                                      {
                                                                                                        ATerm e_7 = t;
                                                                                                        int f_7 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1(t, strategy_expression_0);
                                                                                                            ;
                                                                                                            LocalPopChoice(f_7);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = e_7;
                                                                                                            {
                                                                                                              ATerm g_7 = t;
                                                                                                              int h_7 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1(t, shallow_term_expression_0);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(h_7);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = g_7;
                                                                                                                  {
                                                                                                                    ATerm i_7 = t;
                                                                                                                    int j_7 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1(t, term_expression_0);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(j_7);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = i_7;
                                                                                                                        {
                                                                                                                          ATerm k_7 = t;
                                                                                                                          int l_7 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm v_0 (ATerm t)
                                                                                                                              {
                                                                                                                                ATerm w_0 (ATerm t)
                                                                                                                                {
                                                                                                                                  ATerm m_7 = t;
                                                                                                                                  int n_7 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = is_string_0(t);
                                                                                                                                      ;
                                                                                                                                      LocalPopChoice(n_7);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = m_7;
                                                                                                                                      t = list_1(t, is_int_0);
                                                                                                                                    }
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = list_1(t, w_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, v_0, strategy_expression_0);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(l_7);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = k_7;
                                                                                                                              {
                                                                                                                                ATerm o_7 = t;
                                                                                                                                int p_7 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1(t, strategy_expression_0);
                                                                                                                                    ;
                                                                                                                                    LocalPopChoice(p_7);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = o_7;
                                                                                                                                    {
                                                                                                                                      ATerm q_7 = t;
                                                                                                                                      int r_7 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm x_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Prim_2(t, is_string_0, x_0);
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
                                                                                                                                                ATerm y_0 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm z_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, z_0);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Let_2(t, y_0, strategy_expression_0);
                                                                                                                                                ;
                                                                                                                                                LocalPopChoice(t_7);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = s_7;
                                                                                                                                                {
                                                                                                                                                  ATerm u_7 = t;
                                                                                                                                                  int v_7 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      ATerm a_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        t = Var_1(t, _id);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = Assign_2(t, a_1, term_expression_0);
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
                                                                                                                                                            ATerm b_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, _id);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_1(t, b_1);
                                                                                                                                                            ;
                                                                                                                                                            LocalPopChoice(x_7);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = w_7;
                                                                                                                                                            {
                                                                                                                                                              ATerm c_1 (ATerm t)
                                                                                                                                                              {
                                                                                                                                                                t = term_y_7;
                                                                                                                                                                return(t);
                                                                                                                                                              }
                                                                                                                                                              t = debug_1(t, c_1);
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm FunType_2 (ATerm t, ATerm x_61 (ATerm), ATerm y_61 (ATerm))
{
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
  ATerm q_44 (ATerm t)
  {
    ATerm i_44 = NULL,k_44 = NULL;
    ATerm s_44 (ATerm t)
    {
      ATerm m_44 = NULL;
      ATerm t_44 (ATerm t)
      {
        ATerm o_44 = NULL;
        ATerm p_44 = NULL;
        ATerm u_44 (ATerm t)
        {
          if(((o_44 != NULL) && (o_44 != p_44)))
            _fail(p_44);
          else
            o_44 = p_44;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunType_2, not_null(k_44), not_null(m_44)), not_null(i_44));
        {
          p_44 = t;
          t = u_44(t);
        }
        t = not_null(o_44);
        return(t);
      }
      t = not_null(d_44);
      {
        t = y_61(t);
        {
          m_44 = t;
          t = t_44(t);
        }
      }
      return(t);
    }
    ATerm j_44 = NULL;
    ATerm r_44 (ATerm t)
    {
      if(((i_44 != NULL) && (i_44 != j_44)))
        _fail(j_44);
      else
        i_44 = j_44;
      return(t);
    }
    t = SSLgetAnnotations(not_null(b_44));
    {
      j_44 = t;
      t = r_44(t);
    }
    {
      t = not_null(c_44);
      {
        t = x_61(t);
        {
          k_44 = t;
          t = s_44(t);
        }
      }
    }
    return(t);
  }
  b_44 = t;
  a_44 :
  if(match_cons(b_44, sym_FunType_2))
    {
      c_44 = ATgetArgument(b_44, 0);
      d_44 = ATgetArgument(b_44, 1);
      t = q_44(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm n_62 (ATerm), ATerm o_62 (ATerm))
{
  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL;
  ATerm p_45 (ATerm t)
  {
    ATerm h_45 = NULL,j_45 = NULL;
    ATerm x_45 (ATerm t)
    {
      ATerm l_45 = NULL;
      ATerm y_45 (ATerm t)
      {
        ATerm n_45 = NULL;
        ATerm o_45 = NULL;
        ATerm z_45 (ATerm t)
        {
          if(((n_45 != NULL) && (n_45 != o_45)))
            _fail(o_45);
          else
            n_45 = o_45;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(j_45), not_null(l_45)), not_null(h_45));
        {
          o_45 = t;
          t = z_45(t);
        }
        t = not_null(n_45);
        return(t);
      }
      t = not_null(d_45);
      {
        t = o_62(t);
        {
          l_45 = t;
          t = y_45(t);
        }
      }
      return(t);
    }
    ATerm i_45 = NULL;
    ATerm w_45 (ATerm t)
    {
      if(((h_45 != NULL) && (h_45 != i_45)))
        _fail(i_45);
      else
        h_45 = i_45;
      return(t);
    }
    t = SSLgetAnnotations(not_null(b_45));
    {
      i_45 = t;
      t = w_45(t);
    }
    {
      t = not_null(c_45);
      {
        t = n_62(t);
        {
          j_45 = t;
          t = x_45(t);
        }
      }
    }
    return(t);
  }
  b_45 = t;
  a_45 :
  if(match_cons(b_45, sym_Op_2))
    {
      c_45 = ATgetArgument(b_45, 0);
      d_45 = ATgetArgument(b_45, 1);
      t = p_45(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ConstType_1 (ATerm t, ATerm w_61 (ATerm))
{
  ATerm f_46 = NULL,g_46 = NULL;
  ATerm p_46 (ATerm t)
  {
    ATerm j_46 = NULL,l_46 = NULL;
    ATerm r_46 (ATerm t)
    {
      ATerm n_46 = NULL;
      ATerm o_46 = NULL;
      ATerm s_46 (ATerm t)
      {
        if(((n_46 != NULL) && (n_46 != o_46)))
          _fail(o_46);
        else
          n_46 = o_46;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ConstType_1, not_null(l_46)), not_null(j_46));
      {
        o_46 = t;
        t = s_46(t);
      }
      t = not_null(n_46);
      return(t);
    }
    ATerm k_46 = NULL;
    ATerm q_46 (ATerm t)
    {
      if(((j_46 != NULL) && (j_46 != k_46)))
        _fail(k_46);
      else
        j_46 = k_46;
      return(t);
    }
    t = SSLgetAnnotations(not_null(f_46));
    {
      k_46 = t;
      t = q_46(t);
    }
    {
      t = not_null(g_46);
      {
        t = w_61(t);
        {
          l_46 = t;
          t = r_46(t);
        }
      }
    }
    return(t);
  }
  f_46 = t;
  e_46 :
  if(match_cons(f_46, sym_ConstType_1))
    {
      g_46 = ATgetArgument(f_46, 0);
      t = p_46(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm type_expression_0 (ATerm t)
{
  ATerm z_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 (ATerm t)
      {
        t = Op_2(t, is_string_0, Nil_0);
        return(t);
      }
      t = ConstType_1(t, d_1);
      ;
      LocalPopChoice(a_8);
    }
  else
    {
      t = z_7;
      {
        ATerm e_1 (ATerm t)
        {
          t = list_1(t, type_expression_0);
          return(t);
        }
        t = FunType_2(t, e_1, type_expression_0);
      }
    }
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm s_67 (ATerm), ATerm t_67 (ATerm))
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL;
  ATerm n_47 (ATerm t)
  {
    ATerm f_47 = NULL,h_47 = NULL;
    ATerm p_47 (ATerm t)
    {
      ATerm j_47 = NULL;
      ATerm q_47 (ATerm t)
      {
        ATerm l_47 = NULL;
        ATerm m_47 = NULL;
        ATerm r_47 (ATerm t)
        {
          if(((l_47 != NULL) && (l_47 != m_47)))
            _fail(m_47);
          else
            l_47 = m_47;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(h_47), not_null(j_47)), not_null(f_47));
        {
          m_47 = t;
          t = r_47(t);
        }
        t = not_null(l_47);
        return(t);
      }
      t = not_null(b_47);
      {
        t = t_67(t);
        {
          j_47 = t;
          t = q_47(t);
        }
      }
      return(t);
    }
    ATerm g_47 = NULL;
    ATerm o_47 (ATerm t)
    {
      if(((f_47 != NULL) && (f_47 != g_47)))
        _fail(g_47);
      else
        f_47 = g_47;
      return(t);
    }
    t = SSLgetAnnotations(not_null(z_46));
    {
      g_47 = t;
      t = o_47(t);
    }
    {
      t = not_null(a_47);
      {
        t = s_67(t);
        {
          h_47 = t;
          t = p_47(t);
        }
      }
    }
    return(t);
  }
  z_46 = t;
  y_46 :
  if(match_cons(z_46, sym_VarDec_2))
    {
      a_47 = ATgetArgument(z_46, 0);
      b_47 = ATgetArgument(z_46, 1);
      t = n_47(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm w_67 (ATerm), ATerm x_67 (ATerm), ATerm y_67 (ATerm))
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL;
  ATerm r_48 (ATerm t)
  {
    ATerm h_48 = NULL,j_48 = NULL;
    ATerm t_48 (ATerm t)
    {
      ATerm l_48 = NULL;
      ATerm u_48 (ATerm t)
      {
        ATerm n_48 = NULL;
        ATerm v_48 (ATerm t)
        {
          ATerm p_48 = NULL;
          ATerm q_48 = NULL;
          ATerm w_48 (ATerm t)
          {
            if(((p_48 != NULL) && (p_48 != q_48)))
              _fail(q_48);
            else
              p_48 = q_48;
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(j_48), not_null(l_48), not_null(n_48)), not_null(h_48));
          {
            q_48 = t;
            t = w_48(t);
          }
          t = not_null(p_48);
          return(t);
        }
        t = not_null(c_48);
        {
          t = y_67(t);
          {
            n_48 = t;
            t = v_48(t);
          }
        }
        return(t);
      }
      t = not_null(b_48);
      {
        t = x_67(t);
        {
          l_48 = t;
          t = u_48(t);
        }
      }
      return(t);
    }
    ATerm i_48 = NULL;
    ATerm s_48 (ATerm t)
    {
      if(((h_48 != NULL) && (h_48 != i_48)))
        _fail(i_48);
      else
        h_48 = i_48;
      return(t);
    }
    t = SSLgetAnnotations(not_null(z_47));
    {
      i_48 = t;
      t = s_48(t);
    }
    {
      t = not_null(a_48);
      {
        t = w_67(t);
        {
          j_48 = t;
          t = t_48(t);
        }
      }
    }
    return(t);
  }
  z_47 = t;
  y_47 :
  if(match_cons(z_47, sym_SDef_3))
    {
      a_48 = ATgetArgument(z_47, 0);
      b_48 = ATgetArgument(z_47, 1);
      c_48 = ATgetArgument(z_47, 2);
      t = r_48(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm strategy_definition_0 (ATerm t)
{
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_1 (ATerm t)
      {
        ATerm g_1 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, type_expression_0);
          return(t);
        }
        t = list_1(t, g_1);
        return(t);
      }
      t = SDef_3(t, is_string_0, f_1, strategy_expression_0);
      ;
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      {
        ATerm h_1 (ATerm t)
        {
          t = term_d_8;
          return(t);
        }
        t = debug_1(t, h_1);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm d_82 (ATerm))
{
  ATerm x_48 (ATerm t)
  {
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
        t = Cons_2(t, d_82, x_48);
      }
    return(t);
  }
  t = x_48(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm l_61 (ATerm))
{
  ATerm m_49 = NULL,n_49 = NULL;
  ATerm w_49 (ATerm t)
  {
    ATerm q_49 = NULL,s_49 = NULL;
    ATerm y_49 (ATerm t)
    {
      ATerm u_49 = NULL;
      ATerm v_49 = NULL;
      ATerm z_49 (ATerm t)
      {
        if(((u_49 != NULL) && (u_49 != v_49)))
          _fail(v_49);
        else
          u_49 = v_49;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(s_49)), not_null(q_49));
      {
        v_49 = t;
        t = z_49(t);
      }
      t = not_null(u_49);
      return(t);
    }
    ATerm r_49 = NULL;
    ATerm x_49 (ATerm t)
    {
      if(((q_49 != NULL) && (q_49 != r_49)))
        _fail(r_49);
      else
        q_49 = r_49;
      return(t);
    }
    t = SSLgetAnnotations(not_null(m_49));
    {
      r_49 = t;
      t = x_49(t);
    }
    {
      t = not_null(n_49);
      {
        t = l_61(t);
        {
          s_49 = t;
          t = y_49(t);
        }
      }
    }
    return(t);
  }
  m_49 = t;
  l_49 :
  if(match_cons(m_49, sym_Strategies_1))
    {
      n_49 = ATgetArgument(m_49, 0);
      t = w_49(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm q_61 (ATerm))
{
  ATerm f_50 = NULL,g_50 = NULL;
  ATerm w_50 (ATerm t)
  {
    ATerm l_50 = NULL,n_50 = NULL;
    ATerm y_50 (ATerm t)
    {
      ATerm p_50 = NULL;
      ATerm v_50 = NULL;
      ATerm z_50 (ATerm t)
      {
        if(((p_50 != NULL) && (p_50 != v_50)))
          _fail(v_50);
        else
          p_50 = v_50;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(n_50)), not_null(l_50));
      {
        v_50 = t;
        t = z_50(t);
      }
      t = not_null(p_50);
      return(t);
    }
    ATerm m_50 = NULL;
    ATerm x_50 (ATerm t)
    {
      if(((l_50 != NULL) && (l_50 != m_50)))
        _fail(m_50);
      else
        l_50 = m_50;
      return(t);
    }
    t = SSLgetAnnotations(not_null(f_50));
    {
      m_50 = t;
      t = x_50(t);
    }
    {
      t = not_null(g_50);
      {
        t = q_61(t);
        {
          n_50 = t;
          t = y_50(t);
        }
      }
    }
    return(t);
  }
  f_50 = t;
  e_50 :
  if(match_cons(f_50, sym_Specification_1))
    {
      g_50 = ATgetArgument(f_50, 0);
      t = w_50(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm g_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        ATerm j_1 (ATerm t)
        {
          ATerm k_1 (ATerm t)
          {
            ATerm l_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, l_1);
            return(t);
          }
          t = Cons_2(t, k_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, j_1);
        return(t);
      }
      t = Specification_1(t, i_1);
      ;
      LocalPopChoice(h_8);
    }
  else
    {
      t = g_8;
      {
        ATerm m_1 (ATerm t)
        {
          t = term_i_8;
          return(t);
        }
        t = debug_1(t, m_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm w_59 (ATerm), ATerm x_59 (ATerm))
{
  ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL;
  ATerm v_51 (ATerm t)
  {
    ATerm n_51 = NULL,p_51 = NULL;
    ATerm x_51 (ATerm t)
    {
      ATerm r_51 = NULL;
      ATerm y_51 (ATerm t)
      {
        ATerm t_51 = NULL;
        ATerm u_51 = NULL;
        ATerm f_52 (ATerm t)
        {
          if(((t_51 != NULL) && (t_51 != u_51)))
            _fail(u_51);
          else
            t_51 = u_51;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(p_51), not_null(r_51)), not_null(n_51));
        {
          u_51 = t;
          t = f_52(t);
        }
        t = not_null(t_51);
        return(t);
      }
      t = not_null(i_51);
      {
        t = x_59(t);
        {
          r_51 = t;
          t = y_51(t);
        }
      }
      return(t);
    }
    ATerm o_51 = NULL;
    ATerm w_51 (ATerm t)
    {
      if(((n_51 != NULL) && (n_51 != o_51)))
        _fail(o_51);
      else
        n_51 = o_51;
      return(t);
    }
    t = SSLgetAnnotations(not_null(g_51));
    {
      o_51 = t;
      t = w_51(t);
    }
    {
      t = not_null(h_51);
      {
        t = w_59(t);
        {
          p_51 = t;
          t = x_51(t);
        }
      }
    }
    return(t);
  }
  g_51 = t;
  f_51 :
  if(match_cons(g_51, sym__2))
    {
      h_51 = ATgetArgument(g_51, 0);
      i_51 = ATgetArgument(g_51, 1);
      t = v_51(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm j_8;
  j_8 = t;
  {
    ATerm h_52 = NULL;
    ATerm j_52 = NULL;
    ATerm k_52 (ATerm t)
    {
      if(((h_52 != NULL) && (h_52 != j_52)))
        _fail(j_52);
      else
        h_52 = j_52;
      return(t);
    }
    t = term_k_8;
    {
      t = whoami_0(t);
      {
        j_52 = t;
        t = k_52(t);
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_8), not_null(h_52)), term_m_8));
      {
        t = printnl_0(t);
        {
          t = term_o_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = j_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
  ATerm s_52 (ATerm t)
  {
    ATerm p_8;
    p_8 = t;
    t = SSL_printnl(not_null(o_52), not_null(p_52));
    t = p_8;
    return(t);
  }
  n_52 = t;
  m_52 :
  if(match_cons(n_52, sym__2))
    {
      o_52 = ATgetArgument(n_52, 0);
      p_52 = ATgetArgument(n_52, 1);
      t = s_52(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm u_52 = NULL;
  ATerm w_52 (ATerm t)
  {
    t = SSL_implode_string(not_null(u_52));
    return(t);
  }
  u_52 = t;
  t = w_52(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      {
        ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL;
        ATerm f_53 (ATerm t)
        {
          t = not_null(a_53);
          {
            ATerm n_1 (ATerm t)
            {
              t = not_null(b_53);
              t = concat_0(t);
              return(t);
            }
            t = at_end_1(t, n_1);
          }
          return(t);
        }
        z_52 = t;
        y_52 :
        if(((ATgetType(z_52) == AT_LIST) && !(ATisEmpty(z_52))))
          {
            a_53 = ATgetFirst((ATermList) z_52);
            b_53 = (ATerm) ATgetNext((ATermList) z_52);
            t = f_53(t);
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
  ATerm l_53 = NULL;
  ATerm t_53 (ATerm t)
  {
    ATerm n_53 = NULL;
    ATerm o_53 = NULL;
    ATerm u_53 (ATerm t)
    {
      ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL;
      ATerm v_53 (ATerm t)
      {
        if(((n_53 != NULL) && (n_53 != s_53)))
          _fail(s_53);
        else
          n_53 = s_53;
        return(t);
      }
      t = SSL_explode_term(not_null(o_53));
      {
        q_53 = t;
        j_53 :
        if(match_cons(q_53, sym__2))
          {
            r_53 = ATgetArgument(q_53, 0);
            s_53 = ATgetArgument(q_53, 1);
            k_53 :
            if(match_string(r_53, ""))
              {
                t = v_53(t);
              }
            else
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
    t = not_null(l_53);
    {
      o_53 = t;
      t = u_53(t);
    }
    {
      t = not_null(n_53);
      t = concat_0(t);
    }
    return(t);
  }
  l_53 = t;
  t = t_53(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_82 (ATerm))
{
  ATerm w_53 (ATerm t)
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, w_53);
        ;
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
        {
          t = Nil_0(t);
          t = q_82(t);
        }
      }
    return(t);
  }
  t = w_53(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
  ATerm e_54 (ATerm t)
  {
    t = not_null(a_54);
    {
      ATerm o_1 (ATerm t)
      {
        t = not_null(b_54);
        return(t);
      }
      t = at_end_1(t, o_1);
    }
    return(t);
  }
  z_53 = t;
  y_53 :
  if(match_cons(z_53, sym__2))
    {
      a_54 = ATgetArgument(z_53, 0);
      b_54 = ATgetArgument(z_53, 1);
      t = e_54(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm u_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(v_8);
    }
  else
    {
      t = u_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm g_54 = NULL;
  ATerm i_54 (ATerm t)
  {
    t = SSL_explode_string(not_null(g_54));
    return(t);
  }
  g_54 = t;
  t = i_54(t);
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
  ATerm w_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(x_8);
    }
  else
    {
      t = w_8;
      {
        ATerm y_8 = t;
        int z_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, p_1);
            ;
            LocalPopChoice(z_8);
          }
        else
          {
            t = y_8;
            {
              ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL;
              ATerm m_55 (ATerm t)
              {
                t = not_null(v_54);
                return(t);
              }
              ATerm n_55 (ATerm t)
              {
                t = not_null(v_54);
                {
                  ATerm a_9 = t;
                  int b_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0(t);
                      ;
                      LocalPopChoice(b_9);
                    }
                  else
                    {
                      t = a_9;
                      {
                        ATerm q_1 (ATerm t)
                        {
                          t = term_c_9;
                          return(t);
                        }
                        t = debug_1(t, q_1);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm o_55 (ATerm t)
              {
                ATerm b_55 = NULL,k_55 = NULL;
                ATerm d_9;
                d_9 = t;
                {
                  ATerm j_55 = NULL;
                  ATerm p_55 (ATerm t)
                  {
                    if(((b_55 != NULL) && (b_55 != j_55)))
                      _fail(j_55);
                    else
                      b_55 = j_55;
                    return(t);
                  }
                  t = not_null(v_54);
                  {
                    t = eval_config_0(t);
                    {
                      j_55 = t;
                      t = p_55(t);
                    }
                  }
                }
                t = d_9;
                {
                  ATerm l_55 = NULL;
                  ATerm q_55 (ATerm t)
                  {
                    if(((k_55 != NULL) && (k_55 != l_55)))
                      _fail(l_55);
                    else
                      k_55 = l_55;
                    return(t);
                  }
                  t = not_null(w_54);
                  {
                    t = eval_config_0(t);
                    {
                      l_55 = t;
                      t = q_55(t);
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(b_55), not_null(k_55));
                    t = conc_strings_0(t);
                  }
                }
                return(t);
              }
              u_54 = t;
              o_54 :
              if(match_cons(u_54, sym_Path_1))
                {
                  v_54 = ATgetArgument(u_54, 0);
                  t = m_55(t);
                }
              else
                {
                  if(match_cons(u_54, sym_Var_1))
                    {
                      v_54 = ATgetArgument(u_54, 0);
                      t = n_55(t);
                    }
                  else
                    {
                      if(match_cons(u_54, sym_Prefix_2))
                        {
                          v_54 = ATgetArgument(u_54, 0);
                          w_54 = ATgetArgument(u_54, 1);
                          t = o_55(t);
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
  ATerm t_55 = NULL;
  ATerm x_55 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_9, not_null(t_55));
    {
      t = table_get_0(t);
      {
        ATerm r_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm f_9;
            f_9 = t;
            {
              ATerm v_55 = NULL;
              ATerm w_55 = NULL;
              ATerm y_55 (ATerm t)
              {
                if(((v_55 != NULL) && (v_55 != w_55)))
                  _fail(w_55);
                else
                  v_55 = w_55;
                return(t);
              }
              w_55 = t;
              t = y_55(t);
              {
                t = (ATerm) ATmakeAppl(sym__3, term_e_9, not_null(t_55), not_null(v_55));
                t = table_put_0(t);
              }
            }
            t = f_9;
          }
          return(t);
        }
        t = try_1(t, r_1);
      }
    }
    return(t);
  }
  t_55 = t;
  t = x_55(t);
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm p_95 (ATerm))
{
  ATerm s_1 (ATerm t)
  {
    ATerm g_9;
    g_9 = t;
    {
      ATerm a_56 = NULL;
      ATerm b_56 = NULL;
      ATerm c_56 (ATerm t)
      {
        if(((a_56 != NULL) && (a_56 != b_56)))
          _fail(b_56);
        else
          a_56 = b_56;
        return(t);
      }
      t = term_h_9;
      {
        t = get_config_0(t);
        {
          b_56 = t;
          t = c_56(t);
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_56), term_i_9);
        t = geq_0(t);
      }
    }
    t = g_9;
    t = p_95(t);
    return(t);
  }
  t = try_1(t, s_1);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL;
  ATerm p_56 (ATerm t)
  {
    ATerm n_56 = NULL;
    t = SSL_fputc(not_null(i_56), not_null(k_56));
    {
      ATerm o_56 = NULL;
      ATerm x_56 (ATerm t)
      {
        if(((n_56 != NULL) && (n_56 != o_56)))
          _fail(o_56);
        else
          n_56 = o_56;
        return(t);
      }
      o_56 = t;
      t = x_56(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_56));
    }
    return(t);
  }
  h_56 = t;
  f_56 :
  if(match_cons(h_56, sym__2))
    {
      i_56 = ATgetArgument(h_56, 0);
      j_56 = ATgetArgument(h_56, 1);
      g_56 :
      if(match_cons(j_56, sym_Stream_1))
        {
          k_56 = ATgetArgument(j_56, 0);
          t = p_56(t);
        }
      else
        {
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
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL;
  ATerm k_57 (ATerm t)
  {
    ATerm i_57 = NULL;
    t = SSL_write_term_to_stream_text(not_null(e_57), not_null(f_57));
    {
      ATerm j_57 = NULL;
      ATerm l_57 (ATerm t)
      {
        if(((i_57 != NULL) && (i_57 != j_57)))
          _fail(j_57);
        else
          i_57 = j_57;
        return(t);
      }
      j_57 = t;
      t = l_57(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_57));
    }
    return(t);
  }
  c_57 = t;
  a_57 :
  if(match_cons(c_57, sym__2))
    {
      d_57 = ATgetArgument(c_57, 0);
      f_57 = ATgetArgument(c_57, 1);
      b_57 :
      if(match_cons(d_57, sym_Stream_1))
        {
          e_57 = ATgetArgument(d_57, 0);
          t = k_57(t);
        }
      else
        {
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
  ATerm t_1 (ATerm t)
  {
    ATerm n_57 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm o_57 = NULL;
      ATerm p_57 (ATerm t)
      {
        if(((n_57 != NULL) && (n_57 != o_57)))
          _fail(o_57);
        else
          n_57 = o_57;
        return(t);
      }
      o_57 = t;
      t = p_57(t);
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_9, not_null(n_57));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, t_1);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL;
  ATerm c_58 (ATerm t)
  {
    ATerm a_58 = NULL;
    t = SSL_write_term_to_stream_baf(not_null(w_57), not_null(x_57));
    {
      ATerm b_58 = NULL;
      ATerm d_58 (ATerm t)
      {
        if(((a_58 != NULL) && (a_58 != b_58)))
          _fail(b_58);
        else
          a_58 = b_58;
        return(t);
      }
      b_58 = t;
      t = d_58(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_58));
    }
    return(t);
  }
  u_57 = t;
  s_57 :
  if(match_cons(u_57, sym__2))
    {
      v_57 = ATgetArgument(u_57, 0);
      x_57 = ATgetArgument(u_57, 1);
      t_57 :
      if(match_cons(v_57, sym_Stream_1))
        {
          w_57 = ATgetArgument(v_57, 0);
          t = c_58(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToFile_1 (ATerm t, ATerm l_94 (ATerm))
{
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
  ATerm r_58 (ATerm t)
  {
    ATerm n_58 = NULL,p_58 = NULL;
    t = not_null(j_58);
    {
      ATerm o_58 = NULL;
      ATerm s_58 (ATerm t)
      {
        if(((n_58 != NULL) && (n_58 != o_58)))
          _fail(o_58);
        else
          n_58 = o_58;
        return(t);
      }
      o_58 = t;
      t = s_58(t);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_58), term_k_9);
        {
          t = open_stream_0(t);
          {
            ATerm q_58 = NULL;
            ATerm t_58 (ATerm t)
            {
              if(((p_58 != NULL) && (p_58 != q_58)))
                _fail(q_58);
              else
                p_58 = q_58;
              return(t);
            }
            q_58 = t;
            t = t_58(t);
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_58), not_null(k_58));
              {
                t = l_94(t);
                {
                  t = fclose_0(t);
                  t = not_null(k_58);
                }
              }
            }
          }
        }
      }
    }
    return(t);
  }
  i_58 = t;
  h_58 :
  if(match_cons(i_58, sym__2))
    {
      j_58 = ATgetArgument(i_58, 0);
      k_58 = ATgetArgument(i_58, 1);
      t = r_58(t);
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
  ATerm y_58 = NULL;
  ATerm l_9;
  l_9 = t;
  {
    ATerm u_1 (ATerm t)
    {
      ATerm m_9 = t;
      int n_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_1 (ATerm t)
          {
            ATerm z_58 = NULL,a_59 = NULL;
            ATerm d_59 (ATerm t)
            {
              if(((y_58 != NULL) && (y_58 != a_59)))
                _fail(a_59);
              else
                y_58 = a_59;
              return(t);
            }
            z_58 = t;
            v_58 :
            if(match_cons(z_58, sym_Output_1))
              {
                a_59 = ATgetArgument(z_58, 0);
                t = d_59(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, v_1);
          ;
          LocalPopChoice(n_9);
        }
      else
        {
          t = m_9;
          {
            ATerm b_59 = NULL;
            ATerm e_59 (ATerm t)
            {
              if(((y_58 != NULL) && (y_58 != b_59)))
                _fail(b_59);
              else
                y_58 = b_59;
              return(t);
            }
            t = term_o_9;
            {
              b_59 = t;
              t = e_59(t);
            }
          }
        }
      return(t);
    }
    t = _2(t, u_1, _id);
  }
  t = l_9;
  {
    ATerm w_1 (ATerm t)
    {
      ATerm x_1 (ATerm t)
      {
        t = not_null(y_58);
        return(t);
      }
      t = split_2(t, x_1, _id);
      return(t);
    }
    t = _2(t, _id, w_1);
    {
      ATerm p_9 = t;
      int q_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_1 (ATerm t)
          {
            ATerm z_1 (ATerm t)
            {
              ATerm c_59 = NULL;
              c_59 = t;
              x_58 :
              if(!(match_cons(c_59, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, z_1);
            return(t);
          }
          t = _2(t, y_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(q_9);
        }
      else
        {
          t = p_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm n_97 (ATerm))
{
  ATerm i_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL;
  ATerm q_59 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_59)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(i_59))), not_null(m_59));
    return(t);
  }
  ATerm r_9;
  r_9 = t;
  t = dtime_0(t);
  t = r_9;
  {
    t = n_97(t);
    {
      ATerm s_9;
      s_9 = t;
      {
        ATerm j_59 = NULL;
        ATerm p_59 (ATerm t)
        {
          if(((i_59 != NULL) && (i_59 != j_59)))
            _fail(j_59);
          else
            i_59 = j_59;
          return(t);
        }
        t = dtime_0(t);
        {
          j_59 = t;
          t = p_59(t);
        }
      }
      t = s_9;
      {
        k_59 = t;
        h_59 :
        if(match_cons(k_59, sym__2))
          {
            l_59 = ATgetArgument(k_59, 0);
            m_59 = ATgetArgument(k_59, 1);
            t = q_59(t);
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
  ATerm u_59 = NULL,v_59 = NULL;
  ATerm c_60 (ATerm t)
  {
    t = SSL_fclose(not_null(u_59));
    return(t);
  }
  ATerm d_60 (ATerm t)
  {
    t = SSL_fclose(not_null(v_59));
    return(t);
  }
  v_59 = t;
  t_59 :
  if(match_cons(v_59, sym_Stream_1))
    {
      u_59 = ATgetArgument(v_59, 0);
      {
        ATerm t_9 = t;
        int u_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_60(t);
            ;
            LocalPopChoice(u_9);
          }
        else
          {
            t = t_9;
            t = d_60(t);
          }
      }
    }
  else
    {
      t = d_60(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm g_60 = NULL,h_60 = NULL;
  ATerm j_60 (ATerm t)
  {
    t = SSL_read_term_from_stream(not_null(h_60));
    return(t);
  }
  g_60 = t;
  f_60 :
  if(match_cons(g_60, sym_Stream_1))
    {
      h_60 = ATgetArgument(g_60, 0);
      t = j_60(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm x_93 (ATerm))
{
  ATerm v_9;
  v_9 = t;
  {
    ATerm m_60 = NULL,o_60 = NULL;
    ATerm w_9;
    w_9 = t;
    {
      ATerm n_60 = NULL;
      ATerm q_60 (ATerm t)
      {
        if(((m_60 != NULL) && (m_60 != n_60)))
          _fail(n_60);
        else
          m_60 = n_60;
        return(t);
      }
      t = x_93(t);
      {
        n_60 = t;
        t = q_60(t);
      }
    }
    t = w_9;
    {
      ATerm p_60 = NULL;
      ATerm r_60 (ATerm t)
      {
        if(((o_60 != NULL) && (o_60 != p_60)))
          _fail(p_60);
        else
          o_60 = p_60;
        return(t);
      }
      p_60 = t;
      t = r_60(t);
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_60)), not_null(m_60)));
        t = printnl_0(t);
      }
    }
  }
  t = v_9;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL;
  ATerm c_61 (ATerm t)
  {
    ATerm a_61 = NULL;
    t = SSL_fopen(not_null(w_60), not_null(x_60));
    {
      ATerm b_61 = NULL;
      ATerm d_61 (ATerm t)
      {
        if(((a_61 != NULL) && (a_61 != b_61)))
          _fail(b_61);
        else
          a_61 = b_61;
        return(t);
      }
      b_61 = t;
      t = d_61(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_61));
    }
    return(t);
  }
  v_60 = t;
  u_60 :
  if(match_cons(v_60, sym__2))
    {
      w_60 = ATgetArgument(v_60, 0);
      x_60 = ATgetArgument(v_60, 1);
      t = c_61(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm j_61 = NULL;
  ATerm m_61 (ATerm t)
  {
    t = SSL_is_string(not_null(j_61));
    return(t);
  }
  j_61 = t;
  t = m_61(t);
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm o_61 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm p_61 = NULL;
    ATerm r_61 (ATerm t)
    {
      if(((o_61 != NULL) && (o_61 != p_61)))
        _fail(p_61);
      else
        o_61 = p_61;
      return(t);
    }
    p_61 = t;
    t = r_61(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_61));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm t_61 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm u_61 = NULL;
    ATerm v_61 (ATerm t)
    {
      if(((t_61 != NULL) && (t_61 != u_61)))
        _fail(u_61);
      else
        t_61 = u_61;
      return(t);
    }
    u_61 = t;
    t = v_61(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_61));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm a_62 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm b_62 = NULL;
    ATerm c_62 (ATerm t)
    {
      if(((a_62 != NULL) && (a_62 != b_62)))
        _fail(b_62);
      else
        a_62 = b_62;
      return(t);
    }
    b_62 = t;
    t = c_62(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_62));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm h_62 = NULL;
  ATerm i_62 (ATerm t)
  {
    t = stderr_stream_0(t);
    return(t);
  }
  ATerm j_62 (ATerm t)
  {
    t = stdout_stream_0(t);
    return(t);
  }
  ATerm k_62 (ATerm t)
  {
    t = stdin_stream_0(t);
    return(t);
  }
  h_62 = t;
  g_62 :
  if(match_cons(h_62, sym_stderr_0))
    {
      t = i_62(t);
    }
  else
    {
      if(match_cons(h_62, sym_stdout_0))
        {
          t = j_62(t);
        }
      else
        {
          if(match_cons(h_62, sym_stdin_0))
            {
              t = k_62(t);
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
  ATerm t_62 = NULL;
  ATerm f_63 (ATerm t)
  {
    ATerm v_62 = NULL,w_62 = NULL;
    ATerm x_62 = NULL;
    ATerm g_63 (ATerm t)
    {
      ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL,d_63 = NULL,e_63 = NULL;
      ATerm h_63 (ATerm t)
      {
        if(((w_62 != NULL) && (w_62 != d_63)))
          _fail(d_63);
        else
          w_62 = d_63;
        if(((v_62 != NULL) && (v_62 != e_63)))
          _fail(e_63);
        else
          v_62 = e_63;
        return(t);
      }
      t = SSL_explode_term(not_null(x_62));
      {
        z_62 = t;
        q_62 :
        if(match_cons(z_62, sym__2))
          {
            a_63 = ATgetArgument(z_62, 0);
            b_63 = ATgetArgument(z_62, 1);
            r_62 :
            if(match_string(a_63, ""))
              {
                s_62 :
                if(((ATgetType(b_63) == AT_LIST) && !(ATisEmpty(b_63))))
                  {
                    d_63 = ATgetFirst((ATermList) b_63);
                    e_63 = (ATerm) ATgetNext((ATermList) b_63);
                    t = h_63(t);
                  }
                else
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
      return(t);
    }
    t = not_null(t_62);
    {
      x_62 = t;
      t = g_63(t);
    }
    t = not_null(w_62);
    return(t);
  }
  t_62 = t;
  t = f_63(t);
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL;
  ATerm s_63 (ATerm t)
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0(t);
        t = stdio_stream_0(t);
        ;
        LocalPopChoice(y_9);
      }
    else
      {
        t = x_9;
        {
          ATerm z_9 = t;
          int a_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_2 (ATerm t)
              {
                ATerm p_63 = NULL,q_63 = NULL;
                ATerm t_63 (ATerm t)
                {
                  t = not_null(q_63);
                  return(t);
                }
                p_63 = t;
                k_63 :
                if(match_cons(p_63, sym_Path_1))
                  {
                    q_63 = ATgetArgument(p_63, 0);
                    t = t_63(t);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = _2(t, a_2, _id);
              t = fopen_0(t);
              ;
              LocalPopChoice(a_10);
            }
          else
            {
              t = z_9;
              {
                t = _2(t, is_string_0, _id);
                t = fopen_0(t);
              }
            }
        }
      }
    return(t);
  }
  m_63 = t;
  l_63 :
  if(match_cons(m_63, sym__2))
    {
      n_63 = ATgetArgument(m_63, 0);
      o_63 = ATgetArgument(m_63, 1);
      t = s_63(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm y_63 = NULL;
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_63 = NULL;
      ATerm x_63 = NULL;
      ATerm a_64 (ATerm t)
      {
        if(((w_63 != NULL) && (w_63 != x_63)))
          _fail(x_63);
        else
          w_63 = x_63;
        return(t);
      }
      x_63 = t;
      t = a_64(t);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_63), term_d_10);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      {
        ATerm b_2 (ATerm t)
        {
          t = term_e_10;
          return(t);
        }
        t = debug_1(t, b_2);
        _fail(t);
      }
    }
  {
    ATerm f_10;
    f_10 = t;
    {
      ATerm z_63 = NULL;
      ATerm b_64 (ATerm t)
      {
        if(((y_63 != NULL) && (y_63 != z_63)))
          _fail(z_63);
        else
          y_63 = z_63;
        return(t);
      }
      t = read_from_stream_0(t);
      {
        z_63 = t;
        t = b_64(t);
      }
    }
    t = f_10;
    {
      t = fclose_0(t);
      t = not_null(y_63);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm p_89 (ATerm), ATerm q_89 (ATerm))
{
  ATerm e_64 = NULL,g_64 = NULL;
  ATerm g_10;
  g_10 = t;
  {
    ATerm f_64 = NULL;
    ATerm i_64 (ATerm t)
    {
      if(((e_64 != NULL) && (e_64 != f_64)))
        _fail(f_64);
      else
        e_64 = f_64;
      return(t);
    }
    t = p_89(t);
    {
      f_64 = t;
      t = i_64(t);
    }
  }
  t = g_10;
  {
    ATerm h_64 = NULL;
    ATerm j_64 (ATerm t)
    {
      if(((g_64 != NULL) && (g_64 != h_64)))
        _fail(h_64);
      else
        g_64 = h_64;
      return(t);
    }
    t = q_89(t);
    {
      h_64 = t;
      t = j_64(t);
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_64), not_null(g_64));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm n_64 = NULL;
  ATerm h_10;
  h_10 = t;
  {
    ATerm i_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_2 (ATerm t)
        {
          ATerm o_64 = NULL,p_64 = NULL;
          ATerm r_64 (ATerm t)
          {
            if(((n_64 != NULL) && (n_64 != p_64)))
              _fail(p_64);
            else
              n_64 = p_64;
            return(t);
          }
          o_64 = t;
          l_64 :
          if(match_cons(o_64, sym_Input_1))
            {
              p_64 = ATgetArgument(o_64, 0);
              t = r_64(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, c_2);
        ;
        LocalPopChoice(j_10);
      }
    else
      {
        t = i_10;
        {
          ATerm q_64 = NULL;
          ATerm s_64 (ATerm t)
          {
            if(((n_64 != NULL) && (n_64 != q_64)))
              _fail(q_64);
            else
              n_64 = q_64;
            return(t);
          }
          t = term_k_10;
          {
            q_64 = t;
            t = s_64(t);
          }
        }
      }
  }
  t = h_10;
  {
    ATerm d_2 (ATerm t)
    {
      t = not_null(n_64);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, d_2);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm x_64 = NULL;
    x_64 = t;
    t_64 :
    if(!(match_string(x_64, "-k")))
      {
        if(!(match_string(x_64, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm l_10;
    l_10 = t;
    {
      ATerm y_64 = NULL;
      ATerm b_65 = NULL;
      ATerm c_65 (ATerm t)
      {
        if(((y_64 != NULL) && (y_64 != b_65)))
          _fail(b_65);
        else
          y_64 = b_65;
        return(t);
      }
      t = string_to_int_0(t);
      {
        b_65 = t;
        t = c_65(t);
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_10, not_null(y_64));
        t = set_config_0(t);
      }
    }
    t = l_10;
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    t = term_n_10;
    return(t);
  }
  t = ArgOption_3(t, e_2, f_2, g_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm e_65 = NULL;
  ATerm l_65 (ATerm t)
  {
    t = SSL_string_to_int(not_null(e_65));
    return(t);
  }
  e_65 = t;
  t = l_65(t);
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_2 (ATerm t)
      {
        ATerm j_66 = NULL;
        j_66 = t;
        m_65 :
        if(!(match_string(j_66, "-S")))
          {
            if(!(match_string(j_66, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm i_2 (ATerm t)
      {
        t = term_r_10;
        t = set_config_0(t);
        t = term_s_10;
        return(t);
      }
      ATerm j_2 (ATerm t)
      {
        t = term_t_10;
        return(t);
      }
      t = Option_3(t, h_2, i_2, j_2);
      ;
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      {
        ATerm u_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_2 (ATerm t)
            {
              ATerm k_66 = NULL;
              k_66 = t;
              n_65 :
              if(!(match_string(k_66, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm l_2 (ATerm t)
            {
              ATerm p_66 = NULL;
              ATerm w_10;
              w_10 = t;
              {
                ATerm n_66 = NULL;
                ATerm o_66 = NULL;
                ATerm u_66 (ATerm t)
                {
                  if(((n_66 != NULL) && (n_66 != o_66)))
                    _fail(o_66);
                  else
                    n_66 = o_66;
                  return(t);
                }
                t = string_to_int_0(t);
                {
                  o_66 = t;
                  t = u_66(t);
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_9, not_null(n_66));
                  t = set_config_0(t);
                }
              }
              t = w_10;
              {
                ATerm q_66 = NULL;
                ATerm y_66 (ATerm t)
                {
                  if(((p_66 != NULL) && (p_66 != q_66)))
                    _fail(q_66);
                  else
                    p_66 = q_66;
                  return(t);
                }
                q_66 = t;
                t = y_66(t);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(p_66));
              }
              return(t);
            }
            ATerm m_2 (ATerm t)
            {
              t = term_x_10;
              return(t);
            }
            t = ArgOption_3(t, k_2, l_2, m_2);
            ;
            LocalPopChoice(v_10);
          }
        else
          {
            t = u_10;
            {
              ATerm n_2 (ATerm t)
              {
                ATerm r_66 = NULL;
                r_66 = t;
                u_65 :
                if(!(match_string(r_66, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm o_2 (ATerm t)
              {
                t = term_z_10;
                t = set_config_0(t);
                t = term_a_11;
                return(t);
              }
              ATerm p_2 (ATerm t)
              {
                t = term_b_11;
                return(t);
              }
              t = Option_3(t, n_2, o_2, p_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm c_67 = NULL;
    c_67 = t;
    z_66 :
    if(!(match_string(c_67, "-o")))
      {
        if(!(match_string(c_67, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm f_67 = NULL;
    ATerm e_11;
    e_11 = t;
    {
      ATerm d_67 = NULL;
      ATerm e_67 = NULL;
      ATerm h_67 (ATerm t)
      {
        if(((d_67 != NULL) && (d_67 != e_67)))
          _fail(e_67);
        else
          d_67 = e_67;
        return(t);
      }
      e_67 = t;
      t = h_67(t);
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_11, not_null(d_67));
        t = set_config_0(t);
      }
    }
    t = e_11;
    {
      ATerm g_67 = NULL;
      ATerm i_67 (ATerm t)
      {
        if(((f_67 != NULL) && (f_67 != g_67)))
          _fail(g_67);
        else
          f_67 = g_67;
        return(t);
      }
      g_67 = t;
      t = i_67(t);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_67));
    }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = term_g_11;
    return(t);
  }
  t = ArgOption_3(t, q_2, r_2, s_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      {
        ATerm t_2 (ATerm t)
        {
          ATerm k_67 = NULL;
          k_67 = t;
          j_67 :
          if(!(match_string(k_67, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_2 (ATerm t)
        {
          t = term_k_11;
          t = set_config_0(t);
          t = term_l_11;
          return(t);
        }
        ATerm v_2 (ATerm t)
        {
          t = term_m_11;
          return(t);
        }
        t = Option_3(t, t_2, u_2, v_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm q_67 = NULL,r_67 = NULL,u_67 = NULL,v_67 = NULL,z_67 = NULL;
  ATerm f_68 (ATerm t)
  {
    t = register_usage_1(t, l_0);
    return(t);
  }
  ATerm g_68 (ATerm t)
  {
    ATerm d_68 = NULL;
    ATerm n_11;
    n_11 = t;
    {
      t = not_null(r_67);
      t = j_0(t);
    }
    t = n_11;
    {
      ATerm e_68 = NULL;
      ATerm h_68 (ATerm t)
      {
        if(((d_68 != NULL) && (d_68 != e_68)))
          _fail(e_68);
        else
          d_68 = e_68;
        return(t);
      }
      t = not_null(v_67);
      {
        t = k_0(t);
        {
          e_68 = t;
          t = h_68(t);
        }
      }
      t = (ATerm) ATinsert(CheckATermList(not_null(z_67)), not_null(d_68));
    }
    return(t);
  }
  q_67 = t;
  o_67 :
  if(match_string(q_67, "register-usage-info"))
    {
      t = f_68(t);
    }
  else
    {
      if(((ATgetType(q_67) == AT_LIST) && !(ATisEmpty(q_67))))
        {
          r_67 = ATgetFirst((ATermList) q_67);
          u_67 = (ATerm) ATgetNext((ATermList) q_67);
          p_67 :
          if(((ATgetType(u_67) == AT_LIST) && !(ATisEmpty(u_67))))
            {
              v_67 = ATgetFirst((ATermList) u_67);
              z_67 = (ATerm) ATgetNext((ATermList) u_67);
              t = g_68(t);
            }
          else
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
  ATerm w_2 (ATerm t)
  {
    ATerm o_68 = NULL;
    o_68 = t;
    i_68 :
    if(!(match_string(o_68, "-i")))
      {
        if(!(match_string(o_68, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    ATerm r_68 = NULL;
    ATerm o_11;
    o_11 = t;
    {
      ATerm p_68 = NULL;
      ATerm q_68 = NULL;
      ATerm t_68 (ATerm t)
      {
        if(((p_68 != NULL) && (p_68 != q_68)))
          _fail(q_68);
        else
          p_68 = q_68;
        return(t);
      }
      q_68 = t;
      t = t_68(t);
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_11, not_null(p_68));
        t = set_config_0(t);
      }
    }
    t = o_11;
    {
      ATerm s_68 = NULL;
      ATerm u_68 (ATerm t)
      {
        if(((r_68 != NULL) && (r_68 != s_68)))
          _fail(s_68);
        else
          r_68 = s_68;
        return(t);
      }
      s_68 = t;
      t = u_68(t);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_68));
    }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_q_11;
    return(t);
  }
  t = ArgOption_3(t, w_2, x_2, y_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(u_11);
          }
        else
          {
            t = t_11;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm w_68 = NULL;
  t = report_run_time_0(t);
  {
    ATerm x_68 = NULL;
    ATerm y_68 (ATerm t)
    {
      if(((w_68 != NULL) && (w_68 != x_68)))
        _fail(x_68);
      else
        w_68 = x_68;
      return(t);
    }
    t = term_k_8;
    {
      t = whoami_0(t);
      {
        x_68 = t;
        t = y_68(t);
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATinsert(ATempty, term_v_11), not_null(w_68)));
      {
        t = printnl_0(t);
        {
          t = term_o_8;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_w_11;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm a_69 = NULL;
  ATerm c_69 (ATerm t)
  {
    t = SSL_TicksToSeconds(not_null(a_69));
    return(t);
  }
  a_69 = t;
  t = c_69(t);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL;
  ATerm k_69 (ATerm t)
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(g_69), not_null(h_69));
        ;
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
        t = SSL_addr(not_null(g_69), not_null(h_69));
      }
    return(t);
  }
  f_69 = t;
  e_69 :
  if(match_cons(f_69, sym__2))
    {
      g_69 = ATgetArgument(f_69, 0);
      h_69 = ATgetArgument(f_69, 1);
      t = k_69(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm a_88 (ATerm), ATerm b_88 (ATerm))
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_88(t);
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL;
        ATerm v_69 (ATerm t)
        {
          ATerm t_69 = NULL;
          ATerm u_69 = NULL;
          ATerm w_69 (ATerm t)
          {
            if(((t_69 != NULL) && (t_69 != u_69)))
              _fail(u_69);
            else
              t_69 = u_69;
            return(t);
          }
          t = not_null(q_69);
          {
            t = foldr_2(t, a_88, b_88);
            {
              u_69 = t;
              t = w_69(t);
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_69), not_null(t_69));
            t = b_88(t);
          }
          return(t);
        }
        o_69 = t;
        n_69 :
        if(((ATgetType(o_69) == AT_LIST) && !(ATisEmpty(o_69))))
          {
            p_69 = ATgetFirst((ATermList) o_69);
            q_69 = (ATerm) ATgetNext((ATermList) o_69);
            t = v_69(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2 (ATerm t, ATerm t_91 (ATerm), ATerm u_91 (ATerm))
{
  ATerm b_70 = NULL;
  ATerm j_70 (ATerm t)
  {
    ATerm d_70 = NULL;
    ATerm e_70 = NULL;
    ATerm k_70 (ATerm t)
    {
      ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL;
      ATerm l_70 (ATerm t)
      {
        if(((d_70 != NULL) && (d_70 != i_70)))
          _fail(i_70);
        else
          d_70 = i_70;
        return(t);
      }
      t = SSL_explode_term(not_null(e_70));
      {
        g_70 = t;
        a_70 :
        if(match_cons(g_70, sym__2))
          {
            h_70 = ATgetArgument(g_70, 0);
            i_70 = ATgetArgument(g_70, 1);
            t = l_70(t);
          }
        else
          {
            _fail(t);
          }
      }
      return(t);
    }
    t = not_null(b_70);
    {
      e_70 = t;
      t = k_70(t);
    }
    {
      t = not_null(d_70);
      t = foldr_2(t, t_91, u_91);
    }
    return(t);
  }
  b_70 = t;
  t = j_70(t);
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
    ATerm z_2 (ATerm t)
    {
      t = term_q_10;
      return(t);
    }
    t = crush_2(t, z_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL;
  ATerm t_70 (ATerm t)
  {
    ATerm e_12;
    e_12 = t;
    {
      ATerm f_12 = t;
      int g_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_gti(not_null(p_70), not_null(q_70));
          ;
          LocalPopChoice(g_12);
        }
      else
        {
          t = f_12;
          t = SSL_gtr(not_null(p_70), not_null(q_70));
        }
    }
    t = e_12;
    return(t);
  }
  o_70 = t;
  n_70 :
  if(match_cons(o_70, sym__2))
    {
      p_70 = ATgetArgument(o_70, 0);
      q_70 = ATgetArgument(o_70, 1);
      t = t_70(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm w_70 = NULL;
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL;
      ATerm a_71 (ATerm t)
      {
        if(((w_70 != NULL) && (w_70 != y_70)))
          _fail(y_70);
        else
          w_70 = y_70;
        if(((w_70 != NULL) && (w_70 != z_70)))
          _fail(z_70);
        else
          w_70 = z_70;
        return(t);
      }
      x_70 = t;
      v_70 :
      if(match_cons(x_70, sym__2))
        {
          y_70 = ATgetArgument(x_70, 0);
          z_70 = ATgetArgument(x_70, 1);
          t = a_71(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm o_95 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    ATerm j_12;
    j_12 = t;
    {
      ATerm c_71 = NULL;
      ATerm d_71 = NULL;
      ATerm e_71 (ATerm t)
      {
        if(((c_71 != NULL) && (c_71 != d_71)))
          _fail(d_71);
        else
          c_71 = d_71;
        return(t);
      }
      t = term_h_9;
      {
        t = get_config_0(t);
        {
          d_71 = t;
          t = e_71(t);
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_71), term_o_8);
        t = geq_0(t);
      }
    }
    t = j_12;
    t = o_95(t);
    return(t);
  }
  t = try_1(t, a_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm h_71 = NULL,j_71 = NULL;
    ATerm k_12;
    k_12 = t;
    {
      ATerm i_71 = NULL;
      ATerm l_71 (ATerm t)
      {
        if(((h_71 != NULL) && (h_71 != i_71)))
          _fail(i_71);
        else
          h_71 = i_71;
        return(t);
      }
      t = run_time_0(t);
      {
        i_71 = t;
        t = l_71(t);
      }
    }
    t = k_12;
    {
      ATerm k_71 = NULL;
      ATerm m_71 (ATerm t)
      {
        if(((j_71 != NULL) && (j_71 != k_71)))
          _fail(k_71);
        else
          j_71 = k_71;
        return(t);
      }
      t = term_k_8;
      {
        t = whoami_0(t);
        {
          k_71 = t;
          t = m_71(t);
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_12), not_null(h_71)), term_l_12), not_null(j_71)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_q_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm r_71 = NULL;
  ATerm x_71 (ATerm t)
  {
    ATerm t_71 = NULL,v_71 = NULL;
    ATerm o_12;
    o_12 = t;
    {
      ATerm u_71 = NULL;
      ATerm y_71 (ATerm t)
      {
        if(((t_71 != NULL) && (t_71 != u_71)))
          _fail(u_71);
        else
          t_71 = u_71;
        return(t);
      }
      t = SSLgetAnnotations(not_null(r_71));
      {
        u_71 = t;
        t = y_71(t);
      }
    }
    t = o_12;
    {
      ATerm w_71 = NULL;
      ATerm z_71 (ATerm t)
      {
        if(((v_71 != NULL) && (v_71 != w_71)))
          _fail(w_71);
        else
          v_71 = w_71;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(t_71));
      {
        w_71 = t;
        t = z_71(t);
      }
      t = not_null(v_71);
    }
    return(t);
  }
  r_71 = t;
  q_71 :
  if(match_cons(r_71, sym_Version_0))
    {
      t = x_71(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm l_98 (ATerm))
{
  ATerm p_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_12;
      t = get_config_0(t);
      ;
      LocalPopChoice(s_12);
    }
  else
    {
      t = p_12;
      {
        ATerm c_3 (ATerm t)
        {
          ATerm w_12 = t;
          int a_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(a_13);
            }
          else
            {
              t = w_12;
              {
                ATerm d_13 = t;
                int e_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(e_13);
                  }
                else
                  {
                    t = d_13;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, c_3);
      }
    }
  t = l_98(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm b_72 = NULL;
  ATerm d_72 (ATerm t)
  {
    t = SSL_table_create(not_null(b_72));
    return(t);
  }
  b_72 = t;
  t = d_72(t);
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm f_72 = NULL;
  ATerm h_72 (ATerm t)
  {
    ATerm i_13;
    i_13 = t;
    {
      t = term_x_13;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_13, term_y_13, not_null(f_72));
          t = table_put_0(t);
        }
      }
    }
    t = i_13;
    return(t);
  }
  f_72 = t;
  t = h_72(t);
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm j_72 = NULL;
  ATerm l_72 (ATerm t)
  {
    t = SSL_table_destroy(not_null(j_72));
    return(t);
  }
  j_72 = t;
  t = l_72(t);
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm n_72 = NULL;
  ATerm p_72 (ATerm t)
  {
    t = SSL_exit(not_null(n_72));
    return(t);
  }
  n_72 = t;
  t = p_72(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm m_100 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_82 (ATerm))
{
  ATerm q_72 (ATerm t)
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
        t = Cons_2(t, b_82, q_72);
      }
    return(t);
  }
  t = q_72(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm x_72 = NULL,y_72 = NULL,z_72 = NULL;
  ATerm i_73 (ATerm t)
  {
    ATerm c_73 = NULL;
    t = not_null(y_72);
    {
      ATerm e_14;
      e_14 = t;
      {
        ATerm d_73 = NULL,f_73 = NULL,h_73 = NULL;
        ATerm m_73 (ATerm t)
        {
          if(((c_73 != NULL) && (c_73 != h_73)))
            _fail(h_73);
          else
            c_73 = h_73;
          return(t);
        }
        ATerm f_14;
        f_14 = t;
        {
          ATerm e_73 = NULL;
          ATerm k_73 (ATerm t)
          {
            if(((d_73 != NULL) && (d_73 != e_73)))
              _fail(e_73);
            else
              d_73 = e_73;
            return(t);
          }
          t = i_0(t);
          {
            e_73 = t;
            t = k_73(t);
          }
        }
        t = f_14;
        {
          ATerm g_73 = NULL;
          ATerm l_73 (ATerm t)
          {
            if(((f_73 != NULL) && (f_73 != g_73)))
              _fail(g_73);
            else
              f_73 = g_73;
            return(t);
          }
          t = not_null(x_72);
          {
            t = g_0(t);
            {
              g_73 = t;
              t = l_73(t);
            }
          }
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(d_73)), not_null(f_73));
            {
              h_73 = t;
              t = m_73(t);
            }
          }
        }
      }
      t = e_14;
      {
        ATerm d_3 (ATerm t)
        {
          t = not_null(c_73);
          return(t);
        }
        t = reverse_acc_2(t, g_0, d_3);
      }
    }
    return(t);
  }
  ATerm j_73 (ATerm t)
  {
    t = term_k_8;
    t = i_0(t);
    return(t);
  }
  z_72 = t;
  w_72 :
  if(((ATgetType(z_72) == AT_LIST) && !(ATisEmpty(z_72))))
    {
      x_72 = ATgetFirst((ATermList) z_72);
      y_72 = (ATerm) ATgetNext((ATermList) z_72);
      t = i_73(t);
    }
  else
    {
      if(((ATgetType(z_72) == AT_LIST) && ATisEmpty(z_72)))
        {
          t = j_73(t);
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
  ATerm e_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm l_100 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_74 (ATerm))
{
  ATerm s_73 = NULL,t_73 = NULL;
  ATerm c_74 (ATerm t)
  {
    ATerm w_73 = NULL,y_73 = NULL;
    ATerm e_74 (ATerm t)
    {
      ATerm a_74 = NULL;
      ATerm b_74 = NULL;
      ATerm f_74 (ATerm t)
      {
        if(((a_74 != NULL) && (a_74 != b_74)))
          _fail(b_74);
        else
          a_74 = b_74;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(y_73)), not_null(w_73));
      {
        b_74 = t;
        t = f_74(t);
      }
      t = not_null(a_74);
      return(t);
    }
    ATerm x_73 = NULL;
    ATerm d_74 (ATerm t)
    {
      if(((w_73 != NULL) && (w_73 != x_73)))
        _fail(x_73);
      else
        w_73 = x_73;
      return(t);
    }
    t = SSLgetAnnotations(not_null(s_73));
    {
      x_73 = t;
      t = d_74(t);
    }
    {
      t = not_null(t_73);
      {
        t = h_74(t);
        {
          y_73 = t;
          t = e_74(t);
        }
      }
    }
    return(t);
  }
  s_73 = t;
  r_73 :
  if(match_cons(s_73, sym_Program_1))
    {
      t_73 = ATgetArgument(s_73, 0);
      t = c_74(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0 (ATerm t)
{
  ATerm m_74 = NULL;
  ATerm j_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_74 = NULL;
      ATerm x_74 (ATerm t)
      {
        if(((m_74 != NULL) && (m_74 != r_74)))
          _fail(r_74);
        else
          m_74 = r_74;
        return(t);
      }
      t = term_w_11;
      {
        t = get_config_0(t);
        {
          r_74 = t;
          t = x_74(t);
        }
      }
      ;
      LocalPopChoice(q_14);
    }
  else
    {
      t = j_14;
      {
        ATerm f_3 (ATerm t)
        {
          ATerm g_3 (ATerm t)
          {
            ATerm s_74 = NULL;
            ATerm y_74 (ATerm t)
            {
              if(((m_74 != NULL) && (m_74 != s_74)))
                _fail(s_74);
              else
                m_74 = s_74;
              return(t);
            }
            s_74 = t;
            t = y_74(t);
            return(t);
          }
          t = Program_1(t, g_3);
          return(t);
        }
        t = option_defined_1(t, f_3);
      }
    }
  {
    ATerm h_3 (ATerm t)
    {
      ATerm i_3 (ATerm t)
      {
        t = not_null(m_74);
        return(t);
      }
      t = short_description_1(t, i_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, h_3);
    {
      t = term_r_14;
      {
        t = echo_0(t);
        {
          t = term_x_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm j_3 (ATerm t)
                {
                  ATerm t_74 = NULL;
                  ATerm u_74 = NULL;
                  ATerm z_74 (ATerm t)
                  {
                    if(((t_74 != NULL) && (t_74 != u_74)))
                      _fail(u_74);
                    else
                      t_74 = u_74;
                    return(t);
                  }
                  u_74 = t;
                  t = z_74(t);
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_74)), term_y_14);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, j_3);
                {
                  ATerm k_3 (ATerm t)
                  {
                    ATerm v_74 = NULL;
                    ATerm w_74 = NULL;
                    ATerm a_75 (ATerm t)
                    {
                      if(((v_74 != NULL) && (v_74 != w_74)))
                        _fail(w_74);
                      else
                        v_74 = w_74;
                      return(t);
                    }
                    ATerm l_3 (ATerm t)
                    {
                      t = not_null(m_74);
                      return(t);
                    }
                    t = long_description_1(t, l_3);
                    {
                      w_74 = t;
                      t = a_75(t);
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(v_74)), term_c_15);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, k_3);
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
  ATerm j_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(k_15);
    }
  else
    {
      t = j_15;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_74 (ATerm))
{
  ATerm g_75 = NULL,h_75 = NULL;
  ATerm q_75 (ATerm t)
  {
    ATerm k_75 = NULL,m_75 = NULL;
    ATerm s_75 (ATerm t)
    {
      ATerm o_75 = NULL;
      ATerm p_75 = NULL;
      ATerm t_75 (ATerm t)
      {
        if(((o_75 != NULL) && (o_75 != p_75)))
          _fail(p_75);
        else
          o_75 = p_75;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_75)), not_null(k_75));
      {
        p_75 = t;
        t = t_75(t);
      }
      t = not_null(o_75);
      return(t);
    }
    ATerm l_75 = NULL;
    ATerm r_75 (ATerm t)
    {
      if(((k_75 != NULL) && (k_75 != l_75)))
        _fail(l_75);
      else
        k_75 = l_75;
      return(t);
    }
    t = SSLgetAnnotations(not_null(g_75));
    {
      l_75 = t;
      t = r_75(t);
    }
    {
      t = not_null(h_75);
      {
        t = i_74(t);
        {
          m_75 = t;
          t = s_75(t);
        }
      }
    }
    return(t);
  }
  g_75 = t;
  f_75 :
  if(match_cons(g_75, sym_Undefined_1))
    {
      h_75 = ATgetArgument(g_75, 0);
      t = q_75(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm k_82 (ATerm))
{
  ATerm u_75 (ATerm t)
  {
    ATerm l_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_82, _id);
        ;
        LocalPopChoice(o_15);
      }
    else
      {
        t = l_15;
        t = Cons_2(t, _id, u_75);
      }
    return(t);
  }
  t = u_75(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_99 (ATerm))
{
  t = fetch_1(t, l_99);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm w_75 = NULL,x_75 = NULL,y_75 = NULL;
  w_75 = t;
  v_75 :
  if(((ATgetType(w_75) == AT_LIST) && ATisEmpty(w_75)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(w_75) == AT_LIST) && !(ATisEmpty(w_75))))
        {
          x_75 = ATgetFirst((ATermList) w_75);
          y_75 = (ATerm) ATgetNext((ATermList) w_75);
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
  ATerm w_15;
  w_15 = t;
  {
    ATerm b_76 = NULL;
    ATerm e_76 = NULL;
    ATerm g_76 (ATerm t)
    {
      if(((b_76 != NULL) && (b_76 != e_76)))
        _fail(e_76);
      else
        b_76 = e_76;
      return(t);
    }
    ATerm x_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(y_15);
      }
    else
      {
        t = x_15;
        {
          ATerm c_76 = NULL;
          ATerm d_76 = NULL;
          ATerm f_76 (ATerm t)
          {
            if(((c_76 != NULL) && (c_76 != d_76)))
              _fail(d_76);
            else
              c_76 = d_76;
            return(t);
          }
          d_76 = t;
          t = f_76(t);
          t = (ATerm) ATinsert(ATempty, not_null(c_76));
        }
      }
    {
      e_76 = t;
      t = g_76(t);
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_9, not_null(b_76));
      t = printnl_0(t);
    }
  }
  t = w_15;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_w_11;
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
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(a_16);
    }
  else
    {
      t = z_15;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_76 = NULL;
  ATerm r_76 (ATerm t)
  {
    ATerm n_76 = NULL,p_76 = NULL;
    ATerm b_16;
    b_16 = t;
    {
      ATerm o_76 = NULL;
      ATerm s_76 (ATerm t)
      {
        if(((n_76 != NULL) && (n_76 != o_76)))
          _fail(o_76);
        else
          n_76 = o_76;
        return(t);
      }
      t = SSLgetAnnotations(not_null(l_76));
      {
        o_76 = t;
        t = s_76(t);
      }
    }
    t = b_16;
    {
      ATerm q_76 = NULL;
      ATerm t_76 (ATerm t)
      {
        if(((p_76 != NULL) && (p_76 != q_76)))
          _fail(q_76);
        else
          p_76 = q_76;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(n_76));
      {
        q_76 = t;
        t = t_76(t);
      }
      t = not_null(p_76);
    }
    return(t);
  }
  l_76 = t;
  k_76 :
  if(match_cons(l_76, sym_Help_0))
    {
      t = r_76(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm g_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_74(t);
      ;
      LocalPopChoice(h_16);
    }
  else
    {
      t = g_16;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm i_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_3 (ATerm t)
      {
        ATerm w_76 = NULL;
        w_76 = t;
        u_76 :
        if(!(match_string(w_76, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm n_3 (ATerm t)
      {
        t = term_w_16;
        t = set_config_0(t);
        return(t);
      }
      ATerm o_3 (ATerm t)
      {
        t = term_x_16;
        return(t);
      }
      t = Option_3(t, m_3, n_3, o_3);
      ;
      LocalPopChoice(m_16);
    }
  else
    {
      t = i_16;
      {
        ATerm p_3 (ATerm t)
        {
          ATerm x_76 = NULL;
          x_76 = t;
          v_76 :
          if(!(match_string(x_76, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm q_3 (ATerm t)
        {
          t = term_w_16;
          {
            t = set_config_0(t);
            {
              t = term_z_16;
              t = set_config_0(t);
            }
          }
          t = term_a_17;
          return(t);
        }
        ATerm r_3 (ATerm t)
        {
          t = term_f_17;
          return(t);
        }
        t = Option_3(t, p_3, q_3, r_3);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL;
  ATerm f_77 (ATerm t)
  {
    t = SSL_table_get(not_null(b_77), not_null(c_77));
    return(t);
  }
  a_77 = t;
  z_76 :
  if(match_cons(a_77, sym__2))
    {
      b_77 = ATgetArgument(a_77, 0);
      c_77 = ATgetArgument(a_77, 1);
      t = f_77(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL;
  ATerm s_77 (ATerm t)
  {
    ATerm g_17;
    g_17 = t;
    {
      ATerm q_77 = NULL;
      ATerm r_77 = NULL;
      ATerm t_77 (ATerm t)
      {
        if(((q_77 != NULL) && (q_77 != r_77)))
          _fail(r_77);
        else
          q_77 = r_77;
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_77), not_null(l_77));
      {
        ATerm h_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = table_get_0(t);
            ;
            LocalPopChoice(l_17);
          }
        else
          {
            t = h_17;
            t = (ATerm) ATempty;
          }
        {
          r_77 = t;
          t = t_77(t);
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__3, not_null(k_77), not_null(l_77), (ATerm) ATinsert(CheckATermList(not_null(q_77)), not_null(m_77)));
        t = table_put_0(t);
      }
    }
    t = g_17;
    return(t);
  }
  j_77 = t;
  i_77 :
  if(match_cons(j_77, sym__3))
    {
      k_77 = ATgetArgument(j_77, 0);
      l_77 = ATgetArgument(j_77, 1);
      m_77 = ATgetArgument(j_77, 2);
      t = s_77(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm q_100 (ATerm))
{
  ATerm v_77 = NULL;
  ATerm w_77 = NULL;
  ATerm x_77 (ATerm t)
  {
    if(((v_77 != NULL) && (v_77 != w_77)))
      _fail(w_77);
    else
      v_77 = w_77;
    return(t);
  }
  t = term_k_8;
  {
    t = q_100(t);
    {
      w_77 = t;
      t = x_77(t);
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_14, term_t_14, not_null(v_77));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm c_78 = NULL,d_78 = NULL,e_78 = NULL;
  ATerm j_78 (ATerm t)
  {
    t = register_usage_1(t, d_0);
    return(t);
  }
  ATerm k_78 (ATerm t)
  {
    ATerm h_78 = NULL;
    ATerm n_17;
    n_17 = t;
    {
      t = not_null(d_78);
      t = a_0(t);
    }
    t = n_17;
    {
      ATerm i_78 = NULL;
      ATerm l_78 (ATerm t)
      {
        if(((h_78 != NULL) && (h_78 != i_78)))
          _fail(i_78);
        else
          h_78 = i_78;
        return(t);
      }
      t = term_k_8;
      {
        t = b_0(t);
        {
          i_78 = t;
          t = l_78(t);
        }
      }
      t = (ATerm) ATinsert(CheckATermList(not_null(e_78)), not_null(h_78));
    }
    return(t);
  }
  c_78 = t;
  b_78 :
  if(match_string(c_78, "register-usage-info"))
    {
      t = j_78(t);
    }
  else
    {
      if(((ATgetType(c_78) == AT_LIST) && !(ATisEmpty(c_78))))
        {
          d_78 = ATgetFirst((ATermList) c_78);
          e_78 = (ATerm) ATgetNext((ATermList) c_78);
          t = k_78(t);
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
  ATerm s_3 (ATerm t)
  {
    ATerm n_78 = NULL;
    n_78 = t;
    m_78 :
    if(!(match_string(n_78, "--help")))
      {
        if(!(match_string(n_78, "-h")))
          {
            if(!(match_string(n_78, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    t = term_v_17;
    {
      t = set_config_0(t);
      t = term_w_17;
    }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    t = term_x_17;
    return(t);
  }
  t = Option_3(t, s_3, t_3, u_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm q_78 = NULL,r_78 = NULL,s_78 = NULL;
  ATerm v_78 (ATerm t)
  {
    t = (ATerm) ATinsert(CheckATermList(not_null(s_78)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(r_78)));
    return(t);
  }
  q_78 = t;
  p_78 :
  if(((ATgetType(q_78) == AT_LIST) && !(ATisEmpty(q_78))))
    {
      r_78 = ATgetFirst((ATermList) q_78);
      s_78 = (ATerm) ATgetNext((ATermList) q_78);
      t = v_78(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_61 (ATerm), ATerm g_61 (ATerm))
{
  ATerm c_79 = NULL,d_79 = NULL,e_79 = NULL;
  ATerm q_79 (ATerm t)
  {
    ATerm i_79 = NULL,k_79 = NULL;
    ATerm s_79 (ATerm t)
    {
      ATerm m_79 = NULL;
      ATerm t_79 (ATerm t)
      {
        ATerm o_79 = NULL;
        ATerm p_79 = NULL;
        ATerm u_79 (ATerm t)
        {
          if(((o_79 != NULL) && (o_79 != p_79)))
            _fail(p_79);
          else
            o_79 = p_79;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(m_79)), not_null(k_79)), not_null(i_79));
        {
          p_79 = t;
          t = u_79(t);
        }
        t = not_null(o_79);
        return(t);
      }
      t = not_null(e_79);
      {
        t = g_61(t);
        {
          m_79 = t;
          t = t_79(t);
        }
      }
      return(t);
    }
    ATerm j_79 = NULL;
    ATerm r_79 (ATerm t)
    {
      if(((i_79 != NULL) && (i_79 != j_79)))
        _fail(j_79);
      else
        i_79 = j_79;
      return(t);
    }
    t = SSLgetAnnotations(not_null(c_79));
    {
      j_79 = t;
      t = r_79(t);
    }
    {
      t = not_null(d_79);
      {
        t = f_61(t);
        {
          k_79 = t;
          t = s_79(t);
        }
      }
    }
    return(t);
  }
  c_79 = t;
  b_79 :
  if(((ATgetType(c_79) == AT_LIST) && !(ATisEmpty(c_79))))
    {
      d_79 = ATgetFirst((ATermList) c_79);
      e_79 = (ATerm) ATgetNext((ATermList) c_79);
      t = q_79(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm z_79 = NULL;
  ATerm f_80 (ATerm t)
  {
    ATerm b_80 = NULL,d_80 = NULL;
    ATerm y_17;
    y_17 = t;
    {
      ATerm c_80 = NULL;
      ATerm g_80 (ATerm t)
      {
        if(((b_80 != NULL) && (b_80 != c_80)))
          _fail(c_80);
        else
          b_80 = c_80;
        return(t);
      }
      t = SSLgetAnnotations(not_null(z_79));
      {
        c_80 = t;
        t = g_80(t);
      }
    }
    t = y_17;
    {
      ATerm e_80 = NULL;
      ATerm h_80 (ATerm t)
      {
        if(((d_80 != NULL) && (d_80 != e_80)))
          _fail(e_80);
        else
          d_80 = e_80;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATempty, not_null(b_80));
      {
        e_80 = t;
        t = h_80(t);
      }
      t = not_null(d_80);
    }
    return(t);
  }
  z_79 = t;
  y_79 :
  if(((ATgetType(z_79) == AT_LIST) && ATisEmpty(z_79)))
    {
      t = f_80(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm k_80 = NULL,l_80 = NULL,m_80 = NULL;
  ATerm p_80 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_9, not_null(l_80), not_null(m_80));
    t = table_put_0(t);
    return(t);
  }
  k_80 = t;
  j_80 :
  if(match_cons(k_80, sym__2))
    {
      l_80 = ATgetArgument(k_80, 0);
      m_80 = ATgetArgument(k_80, 1);
      t = p_80(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_100 (ATerm))
{
  ATerm z_17;
  z_17 = t;
  {
    ATerm v_3 (ATerm t)
    {
      t = term_e_18;
      t = o_100(t);
      return(t);
    }
    t = try_1(t, v_3);
  }
  t = z_17;
  {
    ATerm w_3 (ATerm t)
    {
      ATerm u_80 = NULL;
      ATerm f_18;
      f_18 = t;
      {
        ATerm s_80 = NULL;
        ATerm t_80 = NULL;
        ATerm w_80 (ATerm t)
        {
          if(((s_80 != NULL) && (s_80 != t_80)))
            _fail(t_80);
          else
            s_80 = t_80;
          return(t);
        }
        t_80 = t;
        t = w_80(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_11, not_null(s_80));
          t = set_config_0(t);
        }
      }
      t = f_18;
      {
        ATerm v_80 = NULL;
        ATerm x_80 (ATerm t)
        {
          if(((u_80 != NULL) && (u_80 != v_80)))
            _fail(v_80);
          else
            u_80 = v_80;
          return(t);
        }
        v_80 = t;
        t = x_80(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_80));
      }
      return(t);
    }
    ATerm x_3 (ATerm t)
    {
      ATerm g_18 = t;
      int k_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_18 = t;
          int u_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(u_18);
            }
          else
            {
              t = m_18;
              {
                t = o_100(t);
                t = Cons_2(t, _id, x_3);
              }
            }
          ;
          LocalPopChoice(k_18);
        }
      else
        {
          t = g_18;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, w_3, x_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL;
  ATerm v_18;
  v_18 = t;
  {
    ATerm e_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL;
    ATerm i_81 (ATerm t)
    {
      if(((b_81 != NULL) && (b_81 != f_81)))
        _fail(f_81);
      else
        b_81 = f_81;
      {
        if(((c_81 != NULL) && (c_81 != g_81)))
          _fail(g_81);
        else
          c_81 = g_81;
        {
          if(((d_81 != NULL) && (d_81 != h_81)))
            _fail(h_81);
          else
            d_81 = h_81;
          t = SSL_table_put(not_null(b_81), not_null(c_81), not_null(d_81));
        }
      }
      return(t);
    }
    e_81 = t;
    a_81 :
    if(match_cons(e_81, sym__3))
      {
        f_81 = ATgetArgument(e_81, 0);
        g_81 = ATgetArgument(e_81, 1);
        h_81 = ATgetArgument(e_81, 2);
        t = i_81(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = v_18;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_100 (ATerm))
{
  ATerm k_81 = NULL;
  ATerm w_18;
  w_18 = t;
  {
    t = term_x_18;
    t = table_put_0(t);
  }
  t = w_18;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm b_19 = t;
      int c_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_100(t);
          ;
          LocalPopChoice(c_19);
        }
      else
        {
          t = b_19;
          {
            ATerm g_19 = t;
            int n_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(n_19);
              }
            else
              {
                t = g_19;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, y_3);
    {
      ATerm z_3 (ATerm t)
      {
        ATerm p_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_19;
            s_19 = t;
            {
              ATerm t_19 = t;
              int u_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_v_12;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(u_19);
                }
              else
                {
                  t = t_19;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = s_19;
            {
              t = system_usage_0(t);
              {
                t = term_q_10;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(r_19);
          }
        else
          {
            t = p_19;
            {
              ATerm v_19 = t;
              int a_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_20;
                  b_20 = t;
                  {
                    t = term_o_16;
                    t = get_config_0(t);
                  }
                  t = b_20;
                  {
                    t = system_about_0(t);
                    {
                      t = term_q_10;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(a_20);
                }
              else
                {
                  t = v_19;
                  {
                    ATerm a_4 (ATerm t)
                    {
                      ATerm b_4 (ATerm t)
                      {
                        ATerm l_81 = NULL;
                        ATerm m_81 (ATerm t)
                        {
                          if(((k_81 != NULL) && (k_81 != l_81)))
                            _fail(l_81);
                          else
                            k_81 = l_81;
                          return(t);
                        }
                        l_81 = t;
                        t = m_81(t);
                        return(t);
                      }
                      t = Undefined_1(t, b_4);
                      return(t);
                    }
                    t = option_defined_1(t, a_4);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_81)), term_c_20));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_o_8;
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
      t = try_1(t, z_3);
      {
        ATerm g_20;
        g_20 = t;
        {
          t = term_s_14;
          t = table_destroy_0(t);
        }
        t = g_20;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm))
{
  t = parse_options_1(t, n_98);
  {
    t = store_options_0(t);
    {
      t = p_98(t);
      {
        ATerm i_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, o_98);
            ;
            LocalPopChoice(q_20);
          }
        else
          {
            t = i_20;
            {
              ATerm r_20 = t;
              int s_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_98(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(s_20);
                }
              else
                {
                  t = r_20;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm))
{
  ATerm c_4 (ATerm t)
  {
    ATerm t_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_98(t);
        ;
        LocalPopChoice(x_20);
      }
    else
      {
        t = t_20;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, c_98);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, c_4, e_98, f_98, d_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm y_97 (ATerm))
{
  ATerm e_4 (ATerm t)
  {
    ATerm f_4 (ATerm t)
    {
      ATerm y_20;
      y_20 = t;
      {
        ATerm o_81 = NULL;
        ATerm p_81 = NULL;
        ATerm q_81 (ATerm t)
        {
          if(((o_81 != NULL) && (o_81 != p_81)))
            _fail(p_81);
          else
            o_81 = p_81;
          return(t);
        }
        t = term_w_11;
        {
          t = get_config_0(t);
          {
            p_81 = t;
            t = q_81(t);
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATempty, not_null(o_81)));
          t = printnl_0(t);
        }
      }
      t = y_20;
      return(t);
    }
    t = if_verbose2_1(t, f_4);
    return(t);
  }
  t = iowrap_4(t, w_97, x_97, y_97, e_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm u_97 (ATerm), ATerm v_97 (ATerm))
{
  t = iowrap_3(t, u_97, v_97, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm r_97 (ATerm))
{
  ATerm g_4 (ATerm t)
  {
    t = _2(t, _id, r_97);
    return(t);
  }
  t = iowrap_2(t, g_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
