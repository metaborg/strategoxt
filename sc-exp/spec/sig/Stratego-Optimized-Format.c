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
ATerm term_e_16;
ATerm term_l_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_p_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_a_14;
ATerm term_w_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_u_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_k_8;
ATerm term_i_8;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_o_7;
ATerm term_j_7;
ATerm term_g_7;
ATerm term_x_4;
void init_constant_terms (void)
{
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_w_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__2, term_e_10, term_q_7);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym__2, term_p_10, term_q_7);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
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
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym__2, term_v_12, term_z_12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__2, term_w_13, term_q_7);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym__2, term_e_14, term_q_7);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_q_7);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__3, term_v_12, term_z_12, (ATerm) ATempty);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Var_1 (ATerm, ATerm q_0 (ATerm));
ATerm Assign_1 (ATerm, ATerm o_68 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm d_63 (ATerm));
ATerm Op_2 (ATerm, ATerm o_62 (ATerm), ATerm p_62 (ATerm));
ATerm Str_1 (ATerm, ATerm p_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm o_0 (ATerm));
ATerm Int_1 (ATerm, ATerm n_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm m_68 (ATerm), ATerm n_68 (ATerm));
ATerm Continue_1 (ATerm, ATerm l_68 (ATerm));
ATerm Alt_3 (ATerm, ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm k_68 (ATerm));
ATerm Case_4 (ATerm, ATerm b_68 (ATerm), ATerm c_68 (ATerm), ATerm d_68 (ATerm), ATerm e_68 (ATerm));
ATerm Let_2 (ATerm, ATerm i_65 (ATerm), ATerm j_65 (ATerm));
ATerm Prim_2 (ATerm, ATerm m_66 (ATerm), ATerm n_66 (ATerm));
ATerm Where_1 (ATerm, ATerm i_66 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm s_65 (ATerm), ATerm t_65 (ATerm));
ATerm Build_1 (ATerm, ATerm q_65 (ATerm));
ATerm Thread_1 (ATerm, ATerm y_66 (ATerm));
ATerm All_1 (ATerm, ATerm x_66 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm w_66 (ATerm));
ATerm Cong_2 (ATerm, ATerm i_61 (ATerm), ATerm j_61 (ATerm));
ATerm Path_2 (ATerm, ATerm t_66 (ATerm), ATerm u_66 (ATerm));
ATerm Rec_2 (ATerm, ATerm f_66 (ATerm), ATerm g_66 (ATerm));
ATerm SVar_1 (ATerm, ATerm h_65 (ATerm));
ATerm Call_2 (ATerm, ATerm k_65 (ATerm), ATerm l_65 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm a_66 (ATerm), ATerm b_66 (ATerm));
ATerm GChoice_2 (ATerm, ATerm a_65 (ATerm), ATerm b_65 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm e_66 (ATerm));
ATerm LChoice_2 (ATerm, ATerm y_65 (ATerm), ATerm z_65 (ATerm));
ATerm Choice_2 (ATerm, ATerm w_64 (ATerm), ATerm x_64 (ATerm));
ATerm Seq_2 (ATerm, ATerm w_65 (ATerm), ATerm x_65 (ATerm));
ATerm Test_1 (ATerm, ATerm j_66 (ATerm));
ATerm Not_1 (ATerm, ATerm h_66 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm z_67 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm e_82 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm x_59 (ATerm), ATerm y_59 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_82 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm q_95 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm m_94 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm o_97 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm y_93 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_89 (ATerm), ATerm r_89 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm b_88 (ATerm), ATerm c_88 (ATerm));
ATerm crush_2 (ATerm, ATerm u_91 (ATerm), ATerm v_91 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm p_95 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm m_98 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm n_100 (ATerm));
ATerm map_1 (ATerm, ATerm c_82 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm m_100 (ATerm));
ATerm Program_1 (ATerm, ATerm j_74 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm k_74 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_82 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_99 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm r_74 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm r_100 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_61 (ATerm), ATerm h_61 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm p_100 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_100 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm));
ATerm iowrap_4 (ATerm, ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm g_98 (ATerm));
ATerm iowrap_3 (ATerm, ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm));
ATerm iowrap_2 (ATerm, ATerm v_97 (ATerm), ATerm w_97 (ATerm));
ATerm iowrap_1 (ATerm, ATerm s_97 (ATerm));
ATerm main_0 (ATerm);
ATerm Var_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm p_11 = NULL,q_11 = NULL;
  p_11 = t;
  o_11 :
  if(match_cons(p_11, sym_Var_1))
    {
      q_11 = ATgetArgument(p_11, 0);
      {
        ATerm y_3 = t;
        int z_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_12 = NULL,i_12 = NULL;
            ATerm h_12 = NULL;
            t = SSLgetAnnotations(not_null(p_11));
            {
              h_12 = t;
              if(((d_12 != NULL) && (d_12 != h_12)))
                _fail(h_12);
              else
                d_12 = h_12;
            }
            {
              t = not_null(q_11);
              {
                ATerm k_12 = NULL;
                t = q_0(t);
                {
                  i_12 = t;
                  {
                    ATerm l_12 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(i_12)), not_null(d_12));
                    {
                      l_12 = t;
                      if(((k_12 != NULL) && (k_12 != l_12)))
                        _fail(l_12);
                      else
                        k_12 = l_12;
                    }
                    t = not_null(k_12);
                  }
                }
              }
            }
            ;
            LocalPopChoice(z_3);
          }
        else
          {
            t = y_3;
            {
              ATerm a_4 = t;
              int b_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_12 = NULL,q_12 = NULL;
                  ATerm p_12 = NULL;
                  t = SSLgetAnnotations(not_null(p_11));
                  {
                    p_12 = t;
                    if(((o_12 != NULL) && (o_12 != p_12)))
                      _fail(p_12);
                    else
                      o_12 = p_12;
                  }
                  {
                    t = not_null(q_11);
                    {
                      ATerm s_12 = NULL;
                      t = q_0(t);
                      {
                        q_12 = t;
                        {
                          ATerm t_12 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(q_12)), not_null(o_12));
                          {
                            t_12 = t;
                            if(((s_12 != NULL) && (s_12 != t_12)))
                              _fail(t_12);
                            else
                              s_12 = t_12;
                          }
                          t = not_null(s_12);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(b_4);
                }
              else
                {
                  t = a_4;
                  {
                    ATerm w_12 = NULL,y_12 = NULL;
                    ATerm x_12 = NULL;
                    t = SSLgetAnnotations(not_null(p_11));
                    {
                      x_12 = t;
                      if(((w_12 != NULL) && (w_12 != x_12)))
                        _fail(x_12);
                      else
                        w_12 = x_12;
                    }
                    {
                      t = not_null(q_11);
                      {
                        ATerm a_13 = NULL;
                        t = q_0(t);
                        {
                          y_12 = t;
                          {
                            ATerm b_13 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(y_12)), not_null(w_12));
                            {
                              b_13 = t;
                              if(((a_13 != NULL) && (a_13 != b_13)))
                                _fail(b_13);
                              else
                                a_13 = b_13;
                            }
                            t = not_null(a_13);
                          }
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
ATerm Assign_1 (ATerm t, ATerm o_68 (ATerm))
{
  ATerm t_13 = NULL,u_13 = NULL;
  t_13 = t;
  s_13 :
  if(match_cons(t_13, sym_Assign_1))
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
            t = o_68(t);
            {
              z_13 = t;
              {
                ATerm c_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_1, not_null(z_13)), not_null(x_13));
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
ATerm BuildDefault_1 (ATerm t, ATerm d_63 (ATerm))
{
  ATerm m_14 = NULL,n_14 = NULL;
  m_14 = t;
  l_14 :
  if(match_cons(m_14, sym_BuildDefault_1))
    {
      n_14 = ATgetArgument(m_14, 0);
      {
        ATerm q_14 = NULL,s_14 = NULL;
        ATerm r_14 = NULL;
        t = SSLgetAnnotations(not_null(m_14));
        {
          r_14 = t;
          if(((q_14 != NULL) && (q_14 != r_14)))
            _fail(r_14);
          else
            q_14 = r_14;
        }
        {
          t = not_null(n_14);
          {
            ATerm u_14 = NULL;
            t = d_63(t);
            {
              s_14 = t;
              {
                ATerm v_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(s_14)), not_null(q_14));
                {
                  v_14 = t;
                  if(((u_14 != NULL) && (u_14 != v_14)))
                    _fail(v_14);
                  else
                    u_14 = v_14;
                }
                t = not_null(u_14);
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
ATerm Op_2 (ATerm t, ATerm o_62 (ATerm), ATerm p_62 (ATerm))
{
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL;
  g_15 = t;
  f_15 :
  if(match_cons(g_15, sym_Op_2))
    {
      h_15 = ATgetArgument(g_15, 0);
      i_15 = ATgetArgument(g_15, 1);
      {
        ATerm m_15 = NULL,o_15 = NULL;
        ATerm n_15 = NULL;
        t = SSLgetAnnotations(not_null(g_15));
        {
          n_15 = t;
          if(((m_15 != NULL) && (m_15 != n_15)))
            _fail(n_15);
          else
            m_15 = n_15;
        }
        {
          t = not_null(h_15);
          {
            ATerm q_15 = NULL;
            t = o_62(t);
            {
              o_15 = t;
              {
                t = not_null(i_15);
                {
                  ATerm s_15 = NULL;
                  t = p_62(t);
                  {
                    q_15 = t;
                    {
                      ATerm t_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(o_15), not_null(q_15)), not_null(m_15));
                      {
                        t_15 = t;
                        if(((s_15 != NULL) && (s_15 != t_15)))
                          _fail(t_15);
                        else
                          s_15 = t_15;
                      }
                      t = not_null(s_15);
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
ATerm Str_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm i_16 = NULL,j_16 = NULL;
  i_16 = t;
  h_16 :
  if(match_cons(i_16, sym_Str_1))
    {
      j_16 = ATgetArgument(i_16, 0);
      {
        ATerm c_4 = t;
        int d_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_16 = NULL,o_16 = NULL;
            ATerm n_16 = NULL;
            t = SSLgetAnnotations(not_null(i_16));
            {
              n_16 = t;
              if(((m_16 != NULL) && (m_16 != n_16)))
                _fail(n_16);
              else
                m_16 = n_16;
            }
            {
              t = not_null(j_16);
              {
                ATerm q_16 = NULL;
                t = p_0(t);
                {
                  o_16 = t;
                  {
                    ATerm r_16 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(o_16)), not_null(m_16));
                    {
                      r_16 = t;
                      if(((q_16 != NULL) && (q_16 != r_16)))
                        _fail(r_16);
                      else
                        q_16 = r_16;
                    }
                    t = not_null(q_16);
                  }
                }
              }
            }
            ;
            LocalPopChoice(d_4);
          }
        else
          {
            t = c_4;
            {
              ATerm u_16 = NULL,w_16 = NULL;
              ATerm v_16 = NULL;
              t = SSLgetAnnotations(not_null(i_16));
              {
                v_16 = t;
                if(((u_16 != NULL) && (u_16 != v_16)))
                  _fail(v_16);
                else
                  u_16 = v_16;
              }
              {
                t = not_null(j_16);
                {
                  ATerm y_16 = NULL;
                  t = p_0(t);
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
  ATerm j_17 = NULL;
  j_17 = t;
  t = SSL_is_real(not_null(j_17));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm v_17 = NULL,w_17 = NULL;
  v_17 = t;
  u_17 :
  if(match_cons(v_17, sym_Real_1))
    {
      w_17 = ATgetArgument(v_17, 0);
      {
        ATerm e_4 = t;
        int f_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_17 = NULL,b_18 = NULL;
            ATerm a_18 = NULL;
            t = SSLgetAnnotations(not_null(v_17));
            {
              a_18 = t;
              if(((z_17 != NULL) && (z_17 != a_18)))
                _fail(a_18);
              else
                z_17 = a_18;
            }
            {
              t = not_null(w_17);
              {
                ATerm d_18 = NULL;
                t = o_0(t);
                {
                  b_18 = t;
                  {
                    ATerm e_18 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(b_18)), not_null(z_17));
                    {
                      e_18 = t;
                      if(((d_18 != NULL) && (d_18 != e_18)))
                        _fail(e_18);
                      else
                        d_18 = e_18;
                    }
                    t = not_null(d_18);
                  }
                }
              }
            }
            ;
            LocalPopChoice(f_4);
          }
        else
          {
            t = e_4;
            {
              ATerm h_18 = NULL,j_18 = NULL;
              ATerm i_18 = NULL;
              t = SSLgetAnnotations(not_null(v_17));
              {
                i_18 = t;
                if(((h_18 != NULL) && (h_18 != i_18)))
                  _fail(i_18);
                else
                  h_18 = i_18;
              }
              {
                t = not_null(w_17);
                {
                  ATerm l_18 = NULL;
                  t = o_0(t);
                  {
                    j_18 = t;
                    {
                      ATerm m_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(j_18)), not_null(h_18));
                      {
                        m_18 = t;
                        if(((l_18 != NULL) && (l_18 != m_18)))
                          _fail(m_18);
                        else
                          l_18 = m_18;
                      }
                      t = not_null(l_18);
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
ATerm Int_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm e_19 = NULL,f_19 = NULL;
  e_19 = t;
  d_19 :
  if(match_cons(e_19, sym_Int_1))
    {
      f_19 = ATgetArgument(e_19, 0);
      {
        ATerm g_4 = t;
        int h_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_19 = NULL,k_19 = NULL;
            ATerm j_19 = NULL;
            t = SSLgetAnnotations(not_null(e_19));
            {
              j_19 = t;
              if(((i_19 != NULL) && (i_19 != j_19)))
                _fail(j_19);
              else
                i_19 = j_19;
            }
            {
              t = not_null(f_19);
              {
                ATerm m_19 = NULL;
                t = n_0(t);
                {
                  k_19 = t;
                  {
                    ATerm n_19 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(k_19)), not_null(i_19));
                    {
                      n_19 = t;
                      if(((m_19 != NULL) && (m_19 != n_19)))
                        _fail(n_19);
                      else
                        m_19 = n_19;
                    }
                    t = not_null(m_19);
                  }
                }
              }
            }
            ;
            LocalPopChoice(h_4);
          }
        else
          {
            t = g_4;
            {
              ATerm q_19 = NULL,s_19 = NULL;
              ATerm r_19 = NULL;
              t = SSLgetAnnotations(not_null(e_19));
              {
                r_19 = t;
                if(((q_19 != NULL) && (q_19 != r_19)))
                  _fail(r_19);
                else
                  q_19 = r_19;
              }
              {
                t = not_null(f_19);
                {
                  ATerm u_19 = NULL;
                  t = n_0(t);
                  {
                    s_19 = t;
                    {
                      ATerm v_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(s_19)), not_null(q_19));
                      {
                        v_19 = t;
                        if(((u_19 != NULL) && (u_19 != v_19)))
                          _fail(v_19);
                        else
                          u_19 = v_19;
                      }
                      t = not_null(u_19);
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
ATerm Wld_0 (ATerm t)
{
  ATerm i_20 = NULL;
  i_20 = t;
  h_20 :
  if(match_cons(i_20, sym_Wld_0))
    {
      ATerm k_20 = NULL,m_20 = NULL;
      ATerm i_4;
      i_4 = t;
      {
        ATerm l_20 = NULL;
        t = SSLgetAnnotations(not_null(i_20));
        {
          l_20 = t;
          if(((k_20 != NULL) && (k_20 != l_20)))
            _fail(l_20);
          else
            k_20 = l_20;
        }
      }
      t = i_4;
      {
        ATerm n_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(k_20));
        {
          n_20 = t;
          if(((m_20 != NULL) && (m_20 != n_20)))
            _fail(n_20);
          else
            m_20 = n_20;
        }
        t = not_null(m_20);
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
  ATerm j_4 = t;
  int k_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      ;
      LocalPopChoice(k_4);
    }
  else
    {
      t = j_4;
      {
        ATerm l_4 = t;
        int m_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            ;
            LocalPopChoice(m_4);
          }
        else
          {
            t = l_4;
            {
              ATerm n_4 = t;
              int o_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  ;
                  LocalPopChoice(o_4);
                }
              else
                {
                  t = n_4;
                  {
                    ATerm p_4 = t;
                    int q_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        ;
                        LocalPopChoice(q_4);
                      }
                    else
                      {
                        t = p_4;
                        {
                          ATerm r_4 = t;
                          int s_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              ;
                              LocalPopChoice(s_4);
                            }
                          else
                            {
                              t = r_4;
                              {
                                ATerm t_4 = t;
                                int u_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_0 (ATerm t)
                                    {
                                      t = list_1(t, term_expression_0);
                                      return(t);
                                    }
                                    t = Op_2(t, is_string_0, c_0);
                                    ;
                                    LocalPopChoice(u_4);
                                  }
                                else
                                  {
                                    t = t_4;
                                    {
                                      ATerm v_4 = t;
                                      int w_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = BuildDefault_1(t, term_expression_0);
                                          ;
                                          LocalPopChoice(w_4);
                                        }
                                      else
                                        {
                                          t = v_4;
                                          {
                                            ATerm e_0 (ATerm t)
                                            {
                                              t = term_x_4;
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
ATerm Assign_2 (ATerm t, ATerm m_68 (ATerm), ATerm n_68 (ATerm))
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
  y_20 = t;
  x_20 :
  if(match_cons(y_20, sym_Assign_2))
    {
      z_20 = ATgetArgument(y_20, 0);
      a_21 = ATgetArgument(y_20, 1);
      {
        ATerm e_21 = NULL,g_21 = NULL;
        ATerm f_21 = NULL;
        t = SSLgetAnnotations(not_null(y_20));
        {
          f_21 = t;
          if(((e_21 != NULL) && (e_21 != f_21)))
            _fail(f_21);
          else
            e_21 = f_21;
        }
        {
          t = not_null(z_20);
          {
            ATerm i_21 = NULL;
            t = m_68(t);
            {
              g_21 = t;
              {
                t = not_null(a_21);
                {
                  ATerm k_21 = NULL;
                  t = n_68(t);
                  {
                    i_21 = t;
                    {
                      ATerm l_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(g_21), not_null(i_21)), not_null(e_21));
                      {
                        l_21 = t;
                        if(((k_21 != NULL) && (k_21 != l_21)))
                          _fail(l_21);
                        else
                          k_21 = l_21;
                      }
                      t = not_null(k_21);
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
ATerm Continue_1 (ATerm t, ATerm l_68 (ATerm))
{
  ATerm w_21 = NULL,x_21 = NULL;
  w_21 = t;
  v_21 :
  if(match_cons(w_21, sym_Continue_1))
    {
      x_21 = ATgetArgument(w_21, 0);
      {
        ATerm a_22 = NULL,c_22 = NULL;
        ATerm b_22 = NULL;
        t = SSLgetAnnotations(not_null(w_21));
        {
          b_22 = t;
          if(((a_22 != NULL) && (a_22 != b_22)))
            _fail(b_22);
          else
            a_22 = b_22;
        }
        {
          t = not_null(x_21);
          {
            ATerm e_22 = NULL;
            t = l_68(t);
            {
              c_22 = t;
              {
                ATerm f_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Continue_1, not_null(c_22)), not_null(a_22));
                {
                  f_22 = t;
                  if(((e_22 != NULL) && (e_22 != f_22)))
                    _fail(f_22);
                  else
                    e_22 = f_22;
                }
                t = not_null(e_22);
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
ATerm Alt_3 (ATerm t, ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm k_68 (ATerm))
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
  r_22 = t;
  q_22 :
  if(match_cons(r_22, sym_Alt_3))
    {
      s_22 = ATgetArgument(r_22, 0);
      t_22 = ATgetArgument(r_22, 1);
      u_22 = ATgetArgument(r_22, 2);
      {
        ATerm z_22 = NULL,b_23 = NULL;
        ATerm a_23 = NULL;
        t = SSLgetAnnotations(not_null(r_22));
        {
          a_23 = t;
          if(((z_22 != NULL) && (z_22 != a_23)))
            _fail(a_23);
          else
            z_22 = a_23;
        }
        {
          t = not_null(s_22);
          {
            ATerm d_23 = NULL;
            t = i_68(t);
            {
              b_23 = t;
              {
                t = not_null(t_22);
                {
                  ATerm f_23 = NULL;
                  t = j_68(t);
                  {
                    d_23 = t;
                    {
                      t = not_null(u_22);
                      {
                        ATerm h_23 = NULL;
                        t = k_68(t);
                        {
                          f_23 = t;
                          {
                            ATerm i_23 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Alt_3, not_null(b_23), not_null(d_23), not_null(f_23)), not_null(z_22));
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
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Case_4 (ATerm t, ATerm b_68 (ATerm), ATerm c_68 (ATerm), ATerm d_68 (ATerm), ATerm e_68 (ATerm))
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL;
  x_23 = t;
  w_23 :
  if(match_cons(x_23, sym_Case_4))
    {
      y_23 = ATgetArgument(x_23, 0);
      z_23 = ATgetArgument(x_23, 1);
      a_24 = ATgetArgument(x_23, 2);
      b_24 = ATgetArgument(x_23, 3);
      {
        ATerm h_24 = NULL,j_24 = NULL;
        ATerm i_24 = NULL;
        t = SSLgetAnnotations(not_null(x_23));
        {
          i_24 = t;
          if(((h_24 != NULL) && (h_24 != i_24)))
            _fail(i_24);
          else
            h_24 = i_24;
        }
        {
          t = not_null(y_23);
          {
            ATerm l_24 = NULL;
            t = b_68(t);
            {
              j_24 = t;
              {
                t = not_null(z_23);
                {
                  ATerm n_24 = NULL;
                  t = c_68(t);
                  {
                    l_24 = t;
                    {
                      t = not_null(a_24);
                      {
                        ATerm p_24 = NULL;
                        t = d_68(t);
                        {
                          n_24 = t;
                          {
                            t = not_null(b_24);
                            {
                              ATerm r_24 = NULL;
                              t = e_68(t);
                              {
                                p_24 = t;
                                {
                                  ATerm s_24 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Case_4, not_null(j_24), not_null(l_24), not_null(n_24), not_null(p_24)), not_null(h_24));
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
ATerm Let_2 (ATerm t, ATerm i_65 (ATerm), ATerm j_65 (ATerm))
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
  g_25 = t;
  f_25 :
  if(match_cons(g_25, sym_Let_2))
    {
      h_25 = ATgetArgument(g_25, 0);
      i_25 = ATgetArgument(g_25, 1);
      {
        ATerm m_25 = NULL,o_25 = NULL;
        ATerm n_25 = NULL;
        t = SSLgetAnnotations(not_null(g_25));
        {
          n_25 = t;
          if(((m_25 != NULL) && (m_25 != n_25)))
            _fail(n_25);
          else
            m_25 = n_25;
        }
        {
          t = not_null(h_25);
          {
            ATerm q_25 = NULL;
            t = i_65(t);
            {
              o_25 = t;
              {
                t = not_null(i_25);
                {
                  ATerm s_25 = NULL;
                  t = j_65(t);
                  {
                    q_25 = t;
                    {
                      ATerm t_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(o_25), not_null(q_25)), not_null(m_25));
                      {
                        t_25 = t;
                        if(((s_25 != NULL) && (s_25 != t_25)))
                          _fail(t_25);
                        else
                          s_25 = t_25;
                      }
                      t = not_null(s_25);
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
ATerm Prim_2 (ATerm t, ATerm m_66 (ATerm), ATerm n_66 (ATerm))
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
  f_26 = t;
  e_26 :
  if(match_cons(f_26, sym_Prim_2))
    {
      g_26 = ATgetArgument(f_26, 0);
      h_26 = ATgetArgument(f_26, 1);
      {
        ATerm l_26 = NULL,n_26 = NULL;
        ATerm m_26 = NULL;
        t = SSLgetAnnotations(not_null(f_26));
        {
          m_26 = t;
          if(((l_26 != NULL) && (l_26 != m_26)))
            _fail(m_26);
          else
            l_26 = m_26;
        }
        {
          t = not_null(g_26);
          {
            ATerm p_26 = NULL;
            t = m_66(t);
            {
              n_26 = t;
              {
                t = not_null(h_26);
                {
                  ATerm r_26 = NULL;
                  t = n_66(t);
                  {
                    p_26 = t;
                    {
                      ATerm s_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(n_26), not_null(p_26)), not_null(l_26));
                      {
                        s_26 = t;
                        if(((r_26 != NULL) && (r_26 != s_26)))
                          _fail(s_26);
                        else
                          r_26 = s_26;
                      }
                      t = not_null(r_26);
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
ATerm Where_1 (ATerm t, ATerm i_66 (ATerm))
{
  ATerm d_27 = NULL,e_27 = NULL;
  d_27 = t;
  c_27 :
  if(match_cons(d_27, sym_Where_1))
    {
      e_27 = ATgetArgument(d_27, 0);
      {
        ATerm h_27 = NULL,j_27 = NULL;
        ATerm i_27 = NULL;
        t = SSLgetAnnotations(not_null(d_27));
        {
          i_27 = t;
          if(((h_27 != NULL) && (h_27 != i_27)))
            _fail(i_27);
          else
            h_27 = i_27;
        }
        {
          t = not_null(e_27);
          {
            ATerm l_27 = NULL;
            t = i_66(t);
            {
              j_27 = t;
              {
                ATerm m_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(j_27)), not_null(h_27));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm x_27 = NULL;
  x_27 = t;
  t = SSL_is_int(not_null(x_27));
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm s_65 (ATerm), ATerm t_65 (ATerm))
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
  g_28 = t;
  f_28 :
  if(match_cons(g_28, sym_Scope_2))
    {
      h_28 = ATgetArgument(g_28, 0);
      i_28 = ATgetArgument(g_28, 1);
      {
        ATerm p_28 = NULL,r_28 = NULL;
        ATerm q_28 = NULL;
        t = SSLgetAnnotations(not_null(g_28));
        {
          q_28 = t;
          if(((p_28 != NULL) && (p_28 != q_28)))
            _fail(q_28);
          else
            p_28 = q_28;
        }
        {
          t = not_null(h_28);
          {
            ATerm t_28 = NULL;
            t = s_65(t);
            {
              r_28 = t;
              {
                t = not_null(i_28);
                {
                  ATerm v_28 = NULL;
                  t = t_65(t);
                  {
                    t_28 = t;
                    {
                      ATerm w_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(r_28), not_null(t_28)), not_null(p_28));
                      {
                        w_28 = t;
                        if(((v_28 != NULL) && (v_28 != w_28)))
                          _fail(w_28);
                        else
                          v_28 = w_28;
                      }
                      t = not_null(v_28);
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
ATerm Build_1 (ATerm t, ATerm q_65 (ATerm))
{
  ATerm h_29 = NULL,i_29 = NULL;
  h_29 = t;
  g_29 :
  if(match_cons(h_29, sym_Build_1))
    {
      i_29 = ATgetArgument(h_29, 0);
      {
        ATerm l_29 = NULL,n_29 = NULL;
        ATerm m_29 = NULL;
        t = SSLgetAnnotations(not_null(h_29));
        {
          m_29 = t;
          if(((l_29 != NULL) && (l_29 != m_29)))
            _fail(m_29);
          else
            l_29 = m_29;
        }
        {
          t = not_null(i_29);
          {
            ATerm p_29 = NULL;
            t = q_65(t);
            {
              n_29 = t;
              {
                ATerm q_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(n_29)), not_null(l_29));
                {
                  q_29 = t;
                  if(((p_29 != NULL) && (p_29 != q_29)))
                    _fail(q_29);
                  else
                    p_29 = q_29;
                }
                t = not_null(p_29);
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
ATerm Thread_1 (ATerm t, ATerm y_66 (ATerm))
{
  ATerm a_30 = NULL,b_30 = NULL;
  a_30 = t;
  z_29 :
  if(match_cons(a_30, sym_Thread_1))
    {
      b_30 = ATgetArgument(a_30, 0);
      {
        ATerm e_30 = NULL,g_30 = NULL;
        ATerm f_30 = NULL;
        t = SSLgetAnnotations(not_null(a_30));
        {
          f_30 = t;
          if(((e_30 != NULL) && (e_30 != f_30)))
            _fail(f_30);
          else
            e_30 = f_30;
        }
        {
          t = not_null(b_30);
          {
            ATerm i_30 = NULL;
            t = y_66(t);
            {
              g_30 = t;
              {
                ATerm j_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(g_30)), not_null(e_30));
                {
                  j_30 = t;
                  if(((i_30 != NULL) && (i_30 != j_30)))
                    _fail(j_30);
                  else
                    i_30 = j_30;
                }
                t = not_null(i_30);
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
ATerm All_1 (ATerm t, ATerm x_66 (ATerm))
{
  ATerm t_30 = NULL,u_30 = NULL;
  t_30 = t;
  s_30 :
  if(match_cons(t_30, sym_All_1))
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
            t = x_66(t);
            {
              z_30 = t;
              {
                ATerm c_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(z_30)), not_null(x_30));
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
ATerm Some_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm q_31 = NULL,r_31 = NULL;
  q_31 = t;
  p_31 :
  if(match_cons(q_31, sym_Some_1))
    {
      r_31 = ATgetArgument(q_31, 0);
      {
        ATerm y_4 = t;
        int z_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_31 = NULL,w_31 = NULL;
            ATerm v_31 = NULL;
            t = SSLgetAnnotations(not_null(q_31));
            {
              v_31 = t;
              if(((u_31 != NULL) && (u_31 != v_31)))
                _fail(v_31);
              else
                u_31 = v_31;
            }
            {
              t = not_null(r_31);
              {
                ATerm y_31 = NULL;
                t = m_0(t);
                {
                  w_31 = t;
                  {
                    ATerm z_31 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(w_31)), not_null(u_31));
                    {
                      z_31 = t;
                      if(((y_31 != NULL) && (y_31 != z_31)))
                        _fail(z_31);
                      else
                        y_31 = z_31;
                    }
                    t = not_null(y_31);
                  }
                }
              }
            }
            ;
            LocalPopChoice(z_4);
          }
        else
          {
            t = y_4;
            {
              ATerm c_32 = NULL,e_32 = NULL;
              ATerm d_32 = NULL;
              t = SSLgetAnnotations(not_null(q_31));
              {
                d_32 = t;
                if(((c_32 != NULL) && (c_32 != d_32)))
                  _fail(d_32);
                else
                  c_32 = d_32;
              }
              {
                t = not_null(r_31);
                {
                  ATerm g_32 = NULL;
                  t = m_0(t);
                  {
                    e_32 = t;
                    {
                      ATerm h_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(e_32)), not_null(c_32));
                      {
                        h_32 = t;
                        if(((g_32 != NULL) && (g_32 != h_32)))
                          _fail(h_32);
                        else
                          g_32 = h_32;
                      }
                      t = not_null(g_32);
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
ATerm One_1 (ATerm t, ATerm w_66 (ATerm))
{
  ATerm v_32 = NULL,w_32 = NULL;
  v_32 = t;
  u_32 :
  if(match_cons(v_32, sym_One_1))
    {
      w_32 = ATgetArgument(v_32, 0);
      {
        ATerm z_32 = NULL,b_33 = NULL;
        ATerm a_33 = NULL;
        t = SSLgetAnnotations(not_null(v_32));
        {
          a_33 = t;
          if(((z_32 != NULL) && (z_32 != a_33)))
            _fail(a_33);
          else
            z_32 = a_33;
        }
        {
          t = not_null(w_32);
          {
            ATerm d_33 = NULL;
            t = w_66(t);
            {
              b_33 = t;
              {
                ATerm e_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(b_33)), not_null(z_32));
                {
                  e_33 = t;
                  if(((d_33 != NULL) && (d_33 != e_33)))
                    _fail(e_33);
                  else
                    d_33 = e_33;
                }
                t = not_null(d_33);
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
ATerm Cong_2 (ATerm t, ATerm i_61 (ATerm), ATerm j_61 (ATerm))
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
  p_33 = t;
  o_33 :
  if(match_cons(p_33, sym_Cong_2))
    {
      q_33 = ATgetArgument(p_33, 0);
      r_33 = ATgetArgument(p_33, 1);
      {
        ATerm v_33 = NULL,z_33 = NULL;
        ATerm w_33 = NULL;
        t = SSLgetAnnotations(not_null(p_33));
        {
          w_33 = t;
          if(((v_33 != NULL) && (v_33 != w_33)))
            _fail(w_33);
          else
            v_33 = w_33;
        }
        {
          t = not_null(q_33);
          {
            ATerm b_34 = NULL;
            t = i_61(t);
            {
              z_33 = t;
              {
                t = not_null(r_33);
                {
                  ATerm d_34 = NULL;
                  t = j_61(t);
                  {
                    b_34 = t;
                    {
                      ATerm e_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(z_33), not_null(b_34)), not_null(v_33));
                      {
                        e_34 = t;
                        if(((d_34 != NULL) && (d_34 != e_34)))
                          _fail(e_34);
                        else
                          d_34 = e_34;
                      }
                      t = not_null(d_34);
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
ATerm Path_2 (ATerm t, ATerm t_66 (ATerm), ATerm u_66 (ATerm))
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
  q_34 = t;
  p_34 :
  if(match_cons(q_34, sym_Path_2))
    {
      r_34 = ATgetArgument(q_34, 0);
      s_34 = ATgetArgument(q_34, 1);
      {
        ATerm w_34 = NULL,y_34 = NULL;
        ATerm x_34 = NULL;
        t = SSLgetAnnotations(not_null(q_34));
        {
          x_34 = t;
          if(((w_34 != NULL) && (w_34 != x_34)))
            _fail(x_34);
          else
            w_34 = x_34;
        }
        {
          t = not_null(r_34);
          {
            ATerm a_35 = NULL;
            t = t_66(t);
            {
              y_34 = t;
              {
                t = not_null(s_34);
                {
                  ATerm c_35 = NULL;
                  t = u_66(t);
                  {
                    a_35 = t;
                    {
                      ATerm d_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(y_34), not_null(a_35)), not_null(w_34));
                      {
                        d_35 = t;
                        if(((c_35 != NULL) && (c_35 != d_35)))
                          _fail(d_35);
                        else
                          c_35 = d_35;
                      }
                      t = not_null(c_35);
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
ATerm Rec_2 (ATerm t, ATerm f_66 (ATerm), ATerm g_66 (ATerm))
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
  r_35 = t;
  q_35 :
  if(match_cons(r_35, sym_Rec_2))
    {
      s_35 = ATgetArgument(r_35, 0);
      t_35 = ATgetArgument(r_35, 1);
      {
        ATerm x_35 = NULL,z_35 = NULL;
        ATerm y_35 = NULL;
        t = SSLgetAnnotations(not_null(r_35));
        {
          y_35 = t;
          if(((x_35 != NULL) && (x_35 != y_35)))
            _fail(y_35);
          else
            x_35 = y_35;
        }
        {
          t = not_null(s_35);
          {
            ATerm b_36 = NULL;
            t = f_66(t);
            {
              z_35 = t;
              {
                t = not_null(t_35);
                {
                  ATerm d_36 = NULL;
                  t = g_66(t);
                  {
                    b_36 = t;
                    {
                      ATerm e_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(z_35), not_null(b_36)), not_null(x_35));
                      {
                        e_36 = t;
                        if(((d_36 != NULL) && (d_36 != e_36)))
                          _fail(e_36);
                        else
                          d_36 = e_36;
                      }
                      t = not_null(d_36);
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
ATerm SVar_1 (ATerm t, ATerm h_65 (ATerm))
{
  ATerm p_36 = NULL,q_36 = NULL;
  p_36 = t;
  o_36 :
  if(match_cons(p_36, sym_SVar_1))
    {
      q_36 = ATgetArgument(p_36, 0);
      {
        ATerm t_36 = NULL,v_36 = NULL;
        ATerm u_36 = NULL;
        t = SSLgetAnnotations(not_null(p_36));
        {
          u_36 = t;
          if(((t_36 != NULL) && (t_36 != u_36)))
            _fail(u_36);
          else
            t_36 = u_36;
        }
        {
          t = not_null(q_36);
          {
            ATerm x_36 = NULL;
            t = h_65(t);
            {
              v_36 = t;
              {
                ATerm y_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(v_36)), not_null(t_36));
                {
                  y_36 = t;
                  if(((x_36 != NULL) && (x_36 != y_36)))
                    _fail(y_36);
                  else
                    x_36 = y_36;
                }
                t = not_null(x_36);
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
ATerm Call_2 (ATerm t, ATerm k_65 (ATerm), ATerm l_65 (ATerm))
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL;
  j_37 = t;
  i_37 :
  if(match_cons(j_37, sym_Call_2))
    {
      k_37 = ATgetArgument(j_37, 0);
      l_37 = ATgetArgument(j_37, 1);
      {
        ATerm p_37 = NULL,r_37 = NULL;
        ATerm q_37 = NULL;
        t = SSLgetAnnotations(not_null(j_37));
        {
          q_37 = t;
          if(((p_37 != NULL) && (p_37 != q_37)))
            _fail(q_37);
          else
            p_37 = q_37;
        }
        {
          t = not_null(k_37);
          {
            ATerm t_37 = NULL;
            t = k_65(t);
            {
              r_37 = t;
              {
                t = not_null(l_37);
                {
                  ATerm v_37 = NULL;
                  t = l_65(t);
                  {
                    t_37 = t;
                    {
                      ATerm w_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(r_37), not_null(t_37)), not_null(p_37));
                      {
                        w_37 = t;
                        if(((v_37 != NULL) && (v_37 != w_37)))
                          _fail(w_37);
                        else
                          v_37 = w_37;
                      }
                      t = not_null(v_37);
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
ATerm LGChoice_2 (ATerm t, ATerm a_66 (ATerm), ATerm b_66 (ATerm))
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL;
  i_38 = t;
  h_38 :
  if(match_cons(i_38, sym_LGChoice_2))
    {
      j_38 = ATgetArgument(i_38, 0);
      k_38 = ATgetArgument(i_38, 1);
      {
        ATerm o_38 = NULL,q_38 = NULL;
        ATerm p_38 = NULL;
        t = SSLgetAnnotations(not_null(i_38));
        {
          p_38 = t;
          if(((o_38 != NULL) && (o_38 != p_38)))
            _fail(p_38);
          else
            o_38 = p_38;
        }
        {
          t = not_null(j_38);
          {
            ATerm s_38 = NULL;
            t = a_66(t);
            {
              q_38 = t;
              {
                t = not_null(k_38);
                {
                  ATerm u_38 = NULL;
                  t = b_66(t);
                  {
                    s_38 = t;
                    {
                      ATerm v_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(q_38), not_null(s_38)), not_null(o_38));
                      {
                        v_38 = t;
                        if(((u_38 != NULL) && (u_38 != v_38)))
                          _fail(v_38);
                        else
                          u_38 = v_38;
                      }
                      t = not_null(u_38);
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
ATerm GChoice_2 (ATerm t, ATerm a_65 (ATerm), ATerm b_65 (ATerm))
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
  h_39 = t;
  g_39 :
  if(match_cons(h_39, sym_GChoice_2))
    {
      i_39 = ATgetArgument(h_39, 0);
      j_39 = ATgetArgument(h_39, 1);
      {
        ATerm n_39 = NULL,p_39 = NULL;
        ATerm o_39 = NULL;
        t = SSLgetAnnotations(not_null(h_39));
        {
          o_39 = t;
          if(((n_39 != NULL) && (n_39 != o_39)))
            _fail(o_39);
          else
            n_39 = o_39;
        }
        {
          t = not_null(i_39);
          {
            ATerm r_39 = NULL;
            t = a_65(t);
            {
              p_39 = t;
              {
                t = not_null(j_39);
                {
                  ATerm t_39 = NULL;
                  t = b_65(t);
                  {
                    r_39 = t;
                    {
                      ATerm u_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(p_39), not_null(r_39)), not_null(n_39));
                      {
                        u_39 = t;
                        if(((t_39 != NULL) && (t_39 != u_39)))
                          _fail(u_39);
                        else
                          t_39 = u_39;
                      }
                      t = not_null(t_39);
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
ATerm GuardedLChoice_3 (ATerm t, ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm e_66 (ATerm))
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL;
  h_40 = t;
  g_40 :
  if(match_cons(h_40, sym_GuardedLChoice_3))
    {
      i_40 = ATgetArgument(h_40, 0);
      j_40 = ATgetArgument(h_40, 1);
      k_40 = ATgetArgument(h_40, 2);
      {
        ATerm t_40 = NULL,v_40 = NULL;
        ATerm u_40 = NULL;
        t = SSLgetAnnotations(not_null(h_40));
        {
          u_40 = t;
          if(((t_40 != NULL) && (t_40 != u_40)))
            _fail(u_40);
          else
            t_40 = u_40;
        }
        {
          t = not_null(i_40);
          {
            ATerm x_40 = NULL;
            t = c_66(t);
            {
              v_40 = t;
              {
                t = not_null(j_40);
                {
                  ATerm z_40 = NULL;
                  t = d_66(t);
                  {
                    x_40 = t;
                    {
                      t = not_null(k_40);
                      {
                        ATerm b_41 = NULL;
                        t = e_66(t);
                        {
                          z_40 = t;
                          {
                            ATerm c_41 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(v_40), not_null(x_40), not_null(z_40)), not_null(t_40));
                            {
                              c_41 = t;
                              if(((b_41 != NULL) && (b_41 != c_41)))
                                _fail(c_41);
                              else
                                b_41 = c_41;
                            }
                            t = not_null(b_41);
                          }
                        }
                      }
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
ATerm LChoice_2 (ATerm t, ATerm y_65 (ATerm), ATerm z_65 (ATerm))
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL;
  p_41 = t;
  o_41 :
  if(match_cons(p_41, sym_LChoice_2))
    {
      q_41 = ATgetArgument(p_41, 0);
      r_41 = ATgetArgument(p_41, 1);
      {
        ATerm v_41 = NULL,x_41 = NULL;
        ATerm w_41 = NULL;
        t = SSLgetAnnotations(not_null(p_41));
        {
          w_41 = t;
          if(((v_41 != NULL) && (v_41 != w_41)))
            _fail(w_41);
          else
            v_41 = w_41;
        }
        {
          t = not_null(q_41);
          {
            ATerm z_41 = NULL;
            t = y_65(t);
            {
              x_41 = t;
              {
                t = not_null(r_41);
                {
                  ATerm b_42 = NULL;
                  t = z_65(t);
                  {
                    z_41 = t;
                    {
                      ATerm c_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(x_41), not_null(z_41)), not_null(v_41));
                      {
                        c_42 = t;
                        if(((b_42 != NULL) && (b_42 != c_42)))
                          _fail(c_42);
                        else
                          b_42 = c_42;
                      }
                      t = not_null(b_42);
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
ATerm Choice_2 (ATerm t, ATerm w_64 (ATerm), ATerm x_64 (ATerm))
{
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL;
  s_42 = t;
  r_42 :
  if(match_cons(s_42, sym_Choice_2))
    {
      t_42 = ATgetArgument(s_42, 0);
      u_42 = ATgetArgument(s_42, 1);
      {
        ATerm y_42 = NULL,a_43 = NULL;
        ATerm z_42 = NULL;
        t = SSLgetAnnotations(not_null(s_42));
        {
          z_42 = t;
          if(((y_42 != NULL) && (y_42 != z_42)))
            _fail(z_42);
          else
            y_42 = z_42;
        }
        {
          t = not_null(t_42);
          {
            ATerm c_43 = NULL;
            t = w_64(t);
            {
              a_43 = t;
              {
                t = not_null(u_42);
                {
                  ATerm e_43 = NULL;
                  t = x_64(t);
                  {
                    c_43 = t;
                    {
                      ATerm f_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(a_43), not_null(c_43)), not_null(y_42));
                      {
                        f_43 = t;
                        if(((e_43 != NULL) && (e_43 != f_43)))
                          _fail(f_43);
                        else
                          e_43 = f_43;
                      }
                      t = not_null(e_43);
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
ATerm Seq_2 (ATerm t, ATerm w_65 (ATerm), ATerm x_65 (ATerm))
{
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL;
  u_43 = t;
  s_43 :
  if(match_cons(u_43, sym_Seq_2))
    {
      v_43 = ATgetArgument(u_43, 0);
      w_43 = ATgetArgument(u_43, 1);
      {
        ATerm a_44 = NULL,c_44 = NULL;
        ATerm b_44 = NULL;
        t = SSLgetAnnotations(not_null(u_43));
        {
          b_44 = t;
          if(((a_44 != NULL) && (a_44 != b_44)))
            _fail(b_44);
          else
            a_44 = b_44;
        }
        {
          t = not_null(v_43);
          {
            ATerm e_44 = NULL;
            t = w_65(t);
            {
              c_44 = t;
              {
                t = not_null(w_43);
                {
                  ATerm g_44 = NULL;
                  t = x_65(t);
                  {
                    e_44 = t;
                    {
                      ATerm h_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(c_44), not_null(e_44)), not_null(a_44));
                      {
                        h_44 = t;
                        if(((g_44 != NULL) && (g_44 != h_44)))
                          _fail(h_44);
                        else
                          g_44 = h_44;
                      }
                      t = not_null(g_44);
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
ATerm Test_1 (ATerm t, ATerm j_66 (ATerm))
{
  ATerm t_44 = NULL,u_44 = NULL;
  t_44 = t;
  s_44 :
  if(match_cons(t_44, sym_Test_1))
    {
      u_44 = ATgetArgument(t_44, 0);
      {
        ATerm x_44 = NULL,z_44 = NULL;
        ATerm y_44 = NULL;
        t = SSLgetAnnotations(not_null(t_44));
        {
          y_44 = t;
          if(((x_44 != NULL) && (x_44 != y_44)))
            _fail(y_44);
          else
            x_44 = y_44;
        }
        {
          t = not_null(u_44);
          {
            ATerm b_45 = NULL;
            t = j_66(t);
            {
              z_44 = t;
              {
                ATerm c_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(z_44)), not_null(x_44));
                {
                  c_45 = t;
                  if(((b_45 != NULL) && (b_45 != c_45)))
                    _fail(c_45);
                  else
                    b_45 = c_45;
                }
                t = not_null(b_45);
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
ATerm Not_1 (ATerm t, ATerm h_66 (ATerm))
{
  ATerm m_45 = NULL,n_45 = NULL;
  m_45 = t;
  l_45 :
  if(match_cons(m_45, sym_Not_1))
    {
      n_45 = ATgetArgument(m_45, 0);
      {
        ATerm q_45 = NULL,y_45 = NULL;
        ATerm x_45 = NULL;
        t = SSLgetAnnotations(not_null(m_45));
        {
          x_45 = t;
          if(((q_45 != NULL) && (q_45 != x_45)))
            _fail(x_45);
          else
            q_45 = x_45;
        }
        {
          t = not_null(n_45);
          {
            ATerm a_46 = NULL;
            t = h_66(t);
            {
              y_45 = t;
              {
                ATerm b_46 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(y_45)), not_null(q_45));
                {
                  b_46 = t;
                  if(((a_46 != NULL) && (a_46 != b_46)))
                    _fail(b_46);
                  else
                    a_46 = b_46;
                }
                t = not_null(a_46);
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
  ATerm k_46 = NULL;
  k_46 = t;
  j_46 :
  if(match_cons(k_46, sym_Fail_0))
    {
      ATerm m_46 = NULL,o_46 = NULL;
      ATerm a_5;
      a_5 = t;
      {
        ATerm n_46 = NULL;
        t = SSLgetAnnotations(not_null(k_46));
        {
          n_46 = t;
          if(((m_46 != NULL) && (m_46 != n_46)))
            _fail(n_46);
          else
            m_46 = n_46;
        }
      }
      t = a_5;
      {
        ATerm p_46 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(m_46));
        {
          p_46 = t;
          if(((o_46 != NULL) && (o_46 != p_46)))
            _fail(p_46);
          else
            o_46 = p_46;
        }
        t = not_null(o_46);
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
  ATerm x_46 = NULL;
  x_46 = t;
  w_46 :
  if(match_cons(x_46, sym_Id_0))
    {
      ATerm z_46 = NULL,b_47 = NULL;
      ATerm b_5;
      b_5 = t;
      {
        ATerm a_47 = NULL;
        t = SSLgetAnnotations(not_null(x_46));
        {
          a_47 = t;
          if(((z_46 != NULL) && (z_46 != a_47)))
            _fail(a_47);
          else
            z_46 = a_47;
        }
      }
      t = b_5;
      {
        ATerm c_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(z_46));
        {
          c_47 = t;
          if(((b_47 != NULL) && (b_47 != c_47)))
            _fail(c_47);
          else
            b_47 = c_47;
        }
        t = not_null(b_47);
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
  ATerm c_5 = t;
  int d_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
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
            t = Fail_0(t);
            ;
            LocalPopChoice(f_5);
          }
        else
          {
            t = e_5;
            {
              ATerm g_5 = t;
              int h_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  ;
                  LocalPopChoice(h_5);
                }
              else
                {
                  t = g_5;
                  {
                    ATerm i_5 = t;
                    int j_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        ;
                        LocalPopChoice(j_5);
                      }
                    else
                      {
                        t = i_5;
                        {
                          ATerm k_5 = t;
                          int l_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              ;
                              LocalPopChoice(l_5);
                            }
                          else
                            {
                              t = k_5;
                              {
                                ATerm m_5 = t;
                                int n_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    ;
                                    LocalPopChoice(n_5);
                                  }
                                else
                                  {
                                    t = m_5;
                                    {
                                      ATerm o_5 = t;
                                      int p_5 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          ;
                                          LocalPopChoice(p_5);
                                        }
                                      else
                                        {
                                          t = o_5;
                                          {
                                            ATerm q_5 = t;
                                            int r_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
                                                ;
                                                LocalPopChoice(r_5);
                                              }
                                            else
                                              {
                                                t = q_5;
                                                {
                                                  ATerm s_5 = t;
                                                  int t_5 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      ;
                                                      LocalPopChoice(t_5);
                                                    }
                                                  else
                                                    {
                                                      t = s_5;
                                                      {
                                                        ATerm u_5 = t;
                                                        int v_5 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                            ;
                                                            LocalPopChoice(v_5);
                                                          }
                                                        else
                                                          {
                                                            t = u_5;
                                                            {
                                                              ATerm w_5 = t;
                                                              int x_5 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm f_0 (ATerm t)
                                                                  {
                                                                    t = SVar_1(t, is_string_0);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, f_0, Nil_0);
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
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
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
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
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
                                                                                    ATerm h_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, h_0);
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
                                                                                          t = One_1(t, strategy_expression_0);
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
                                                                                                t = Some_1(t, strategy_expression_0);
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
                                                                                                      t = All_1(t, strategy_expression_0);
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
                                                                                                            t = Thread_1(t, strategy_expression_0);
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
                                                                                                                  t = Build_1(t, term_expression_0);
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
                                                                                                                        ATerm r_0 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm s_0 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm q_6 = t;
                                                                                                                            int r_6 = stack_ptr;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                t = is_string_0(t);
                                                                                                                                ;
                                                                                                                                LocalPopChoice(r_6);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = q_6;
                                                                                                                                t = list_1(t, is_int_0);
                                                                                                                              }
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          t = list_1(t, s_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Scope_2(t, r_0, strategy_expression_0);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(p_6);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = o_6;
                                                                                                                        {
                                                                                                                          ATerm s_6 = t;
                                                                                                                          int t_6 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Where_1(t, strategy_expression_0);
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
                                                                                                                                    ATerm t_0 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = list_1(t, term_expression_0);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = Prim_2(t, is_string_0, t_0);
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
                                                                                                                                            ATerm v_0 (ATerm t)
                                                                                                                                            {
                                                                                                                                              t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                              return(t);
                                                                                                                                            }
                                                                                                                                            t = list_1(t, v_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Let_2(t, u_0, strategy_expression_0);
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
                                                                                                                                                ATerm w_0 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  t = Var_1(t, _id);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                ATerm x_0 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm y_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = Alt_3(t, _id, _id, strategy_expression_0);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, y_0);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Case_4(t, is_string_0, w_0, x_0, strategy_expression_0);
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
                                                                                                                                                      t = Continue_1(t, is_string_0);
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
                                                                                                                                                            ATerm z_0 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, _id);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_2(t, z_0, term_expression_0);
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
                                                                                                                                                                  ATerm a_1 (ATerm t)
                                                                                                                                                                  {
                                                                                                                                                                    t = Var_1(t, _id);
                                                                                                                                                                    return(t);
                                                                                                                                                                  }
                                                                                                                                                                  t = Assign_1(t, a_1);
                                                                                                                                                                  ;
                                                                                                                                                                  LocalPopChoice(f_7);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = e_7;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm b_1 (ATerm t)
                                                                                                                                                                    {
                                                                                                                                                                      t = term_g_7;
                                                                                                                                                                      return(t);
                                                                                                                                                                    }
                                                                                                                                                                    t = debug_1(t, b_1);
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm SDef_3 (ATerm t, ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm z_67 (ATerm))
{
  ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL;
  o_47 = t;
  n_47 :
  if(match_cons(o_47, sym_SDef_3))
    {
      p_47 = ATgetArgument(o_47, 0);
      q_47 = ATgetArgument(o_47, 1);
      r_47 = ATgetArgument(o_47, 2);
      {
        ATerm w_47 = NULL,y_47 = NULL;
        ATerm x_47 = NULL;
        t = SSLgetAnnotations(not_null(o_47));
        {
          x_47 = t;
          if(((w_47 != NULL) && (w_47 != x_47)))
            _fail(x_47);
          else
            w_47 = x_47;
        }
        {
          t = not_null(p_47);
          {
            ATerm a_48 = NULL;
            t = x_67(t);
            {
              y_47 = t;
              {
                t = not_null(q_47);
                {
                  ATerm c_48 = NULL;
                  t = y_67(t);
                  {
                    a_48 = t;
                    {
                      t = not_null(r_47);
                      {
                        ATerm e_48 = NULL;
                        t = z_67(t);
                        {
                          c_48 = t;
                          {
                            ATerm f_48 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(y_47), not_null(a_48), not_null(c_48)), not_null(w_47));
                            {
                              f_48 = t;
                              if(((e_48 != NULL) && (e_48 != f_48)))
                                _fail(f_48);
                              else
                                e_48 = f_48;
                            }
                            t = not_null(e_48);
                          }
                        }
                      }
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
  ATerm h_7 = t;
  int i_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
      ;
      LocalPopChoice(i_7);
    }
  else
    {
      t = h_7;
      {
        ATerm c_1 (ATerm t)
        {
          t = term_j_7;
          return(t);
        }
        t = debug_1(t, c_1);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm e_82 (ATerm))
{
  ATerm m_48 (ATerm t)
  {
    ATerm k_7 = t;
    int l_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(l_7);
      }
    else
      {
        t = k_7;
        t = Cons_2(t, e_82, m_48);
      }
    return(t);
  }
  t = m_48(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = list_1(t, strategy_definition_0);
      ;
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      {
        ATerm d_1 (ATerm t)
        {
          t = term_o_7;
          return(t);
        }
        t = debug_1(t, d_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm x_59 (ATerm), ATerm y_59 (ATerm))
{
  ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL;
  t_48 = t;
  s_48 :
  if(match_cons(t_48, sym__2))
    {
      u_48 = ATgetArgument(t_48, 0);
      v_48 = ATgetArgument(t_48, 1);
      {
        ATerm d_49 = NULL,k_49 = NULL;
        ATerm e_49 = NULL;
        t = SSLgetAnnotations(not_null(t_48));
        {
          e_49 = t;
          if(((d_49 != NULL) && (d_49 != e_49)))
            _fail(e_49);
          else
            d_49 = e_49;
        }
        {
          t = not_null(u_48);
          {
            ATerm m_49 = NULL;
            t = x_59(t);
            {
              k_49 = t;
              {
                t = not_null(v_48);
                {
                  ATerm o_49 = NULL;
                  t = y_59(t);
                  {
                    m_49 = t;
                    {
                      ATerm p_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(k_49), not_null(m_49)), not_null(d_49));
                      {
                        p_49 = t;
                        if(((o_49 != NULL) && (o_49 != p_49)))
                          _fail(p_49);
                        else
                          o_49 = p_49;
                      }
                      t = not_null(o_49);
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
  ATerm p_7;
  p_7 = t;
  {
    ATerm w_49 = NULL;
    ATerm x_49 = NULL;
    t = term_q_7;
    {
      t = whoami_0(t);
      {
        x_49 = t;
        if(((w_49 != NULL) && (w_49 != x_49)))
          _fail(x_49);
        else
          w_49 = x_49;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(w_49)), term_s_7));
      {
        t = printnl_0(t);
        {
          t = term_u_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = p_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
  b_50 = t;
  a_50 :
  if(match_cons(b_50, sym__2))
    {
      c_50 = ATgetArgument(b_50, 0);
      d_50 = ATgetArgument(b_50, 1);
      {
        ATerm v_7;
        v_7 = t;
        t = SSL_printnl(not_null(c_50), not_null(d_50));
        t = v_7;
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
  ATerm k_50 = NULL;
  k_50 = t;
  t = SSL_implode_string(not_null(k_50));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm w_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(x_7);
    }
  else
    {
      t = w_7;
      {
        ATerm p_50 = NULL,q_50 = NULL,w_50 = NULL;
        p_50 = t;
        o_50 :
        if(((ATgetType(p_50) == AT_LIST) && !(ATisEmpty(p_50))))
          {
            q_50 = ATgetFirst((ATermList) p_50);
            w_50 = (ATerm) ATgetNext((ATermList) p_50);
            {
              t = not_null(q_50);
              {
                ATerm e_1 (ATerm t)
                {
                  t = not_null(w_50);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, e_1);
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
  ATerm g_51 = NULL;
  ATerm i_51 = NULL;
  g_51 = t;
  {
    ATerm j_51 = NULL;
    ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL;
    t = not_null(g_51);
    {
      j_51 = t;
      {
        t = SSL_explode_term(not_null(j_51));
        {
          m_51 = t;
          e_51 :
          if(match_cons(m_51, sym__2))
            {
              n_51 = ATgetArgument(m_51, 0);
              o_51 = ATgetArgument(m_51, 1);
              f_51 :
              if(match_string(n_51, ""))
                {
                  if(((i_51 != NULL) && (i_51 != o_51)))
                    _fail(o_51);
                  else
                    i_51 = o_51;
                }
              else
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
      t = not_null(i_51);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_82 (ATerm))
{
  ATerm s_51 (ATerm t)
  {
    ATerm y_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_51);
        ;
        LocalPopChoice(z_7);
      }
    else
      {
        t = y_7;
        {
          t = Nil_0(t);
          t = r_82(t);
        }
      }
    return(t);
  }
  t = s_51(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL;
  v_51 = t;
  u_51 :
  if(match_cons(v_51, sym__2))
    {
      w_51 = ATgetArgument(v_51, 0);
      x_51 = ATgetArgument(v_51, 1);
      {
        t = not_null(w_51);
        {
          ATerm f_1 (ATerm t)
          {
            t = not_null(x_51);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm a_8 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(b_8);
    }
  else
    {
      t = a_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm i_52 = NULL;
  i_52 = t;
  t = SSL_explode_string(not_null(i_52));
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
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
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
            ATerm g_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, g_1);
            ;
            LocalPopChoice(f_8);
          }
        else
          {
            t = e_8;
            {
              ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL;
              s_52 = t;
              r_52 :
              if(match_cons(s_52, sym_Path_1))
                {
                  t_52 = ATgetArgument(s_52, 0);
                  t = not_null(t_52);
                }
              else
                {
                  if(match_cons(s_52, sym_Var_1))
                    {
                      t_52 = ATgetArgument(s_52, 0);
                      {
                        t = not_null(t_52);
                        {
                          ATerm g_8 = t;
                          int h_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(h_8);
                            }
                          else
                            {
                              t = g_8;
                              {
                                ATerm h_1 (ATerm t)
                                {
                                  t = term_i_8;
                                  return(t);
                                }
                                t = debug_1(t, h_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(s_52, sym_Prefix_2))
                        {
                          t_52 = ATgetArgument(s_52, 0);
                          u_52 = ATgetArgument(s_52, 1);
                          {
                            ATerm z_52 = NULL,b_53 = NULL;
                            ATerm j_8;
                            j_8 = t;
                            {
                              ATerm a_53 = NULL;
                              t = not_null(t_52);
                              {
                                t = eval_config_0(t);
                                {
                                  a_53 = t;
                                  if(((z_52 != NULL) && (z_52 != a_53)))
                                    _fail(a_53);
                                  else
                                    z_52 = a_53;
                                }
                              }
                            }
                            t = j_8;
                            {
                              ATerm c_53 = NULL;
                              t = not_null(u_52);
                              {
                                t = eval_config_0(t);
                                {
                                  c_53 = t;
                                  if(((b_53 != NULL) && (b_53 != c_53)))
                                    _fail(c_53);
                                  else
                                    b_53 = c_53;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_52), not_null(b_53));
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
  ATerm k_53 = NULL;
  k_53 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_k_8, not_null(k_53));
    {
      t = table_get_0(t);
      {
        ATerm i_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm l_8;
            l_8 = t;
            {
              ATerm m_53 = NULL;
              ATerm n_53 = NULL;
              n_53 = t;
              if(((m_53 != NULL) && (m_53 != n_53)))
                _fail(n_53);
              else
                m_53 = n_53;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_k_8, not_null(k_53), not_null(m_53));
                t = table_put_0(t);
              }
            }
            t = l_8;
          }
          return(t);
        }
        t = try_1(t, i_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm q_95 (ATerm))
{
  ATerm j_1 (ATerm t)
  {
    ATerm m_8;
    m_8 = t;
    {
      ATerm r_53 = NULL;
      ATerm s_53 = NULL;
      t = term_n_8;
      {
        t = get_config_0(t);
        {
          s_53 = t;
          if(((r_53 != NULL) && (r_53 != s_53)))
            _fail(s_53);
          else
            r_53 = s_53;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_53), term_o_8);
        t = geq_0(t);
      }
    }
    t = m_8;
    t = q_95(t);
    return(t);
  }
  t = try_1(t, j_1);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL;
  y_53 = t;
  w_53 :
  if(match_cons(y_53, sym__2))
    {
      z_53 = ATgetArgument(y_53, 0);
      a_54 = ATgetArgument(y_53, 1);
      x_53 :
      if(match_cons(a_54, sym_Stream_1))
        {
          b_54 = ATgetArgument(a_54, 0);
          {
            ATerm e_54 = NULL;
            t = SSL_fputc(not_null(z_53), not_null(b_54));
            {
              ATerm f_54 = NULL;
              f_54 = t;
              if(((e_54 != NULL) && (e_54 != f_54)))
                _fail(f_54);
              else
                e_54 = f_54;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_54));
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
  ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL;
  m_54 = t;
  k_54 :
  if(match_cons(m_54, sym__2))
    {
      n_54 = ATgetArgument(m_54, 0);
      p_54 = ATgetArgument(m_54, 1);
      l_54 :
      if(match_cons(n_54, sym_Stream_1))
        {
          o_54 = ATgetArgument(n_54, 0);
          {
            ATerm x_54 = NULL;
            t = SSL_write_term_to_stream_text(not_null(o_54), not_null(p_54));
            {
              ATerm y_54 = NULL;
              y_54 = t;
              if(((x_54 != NULL) && (x_54 != y_54)))
                _fail(y_54);
              else
                x_54 = y_54;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_54));
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
  ATerm k_1 (ATerm t)
  {
    ATerm c_55 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm k_55 = NULL;
      k_55 = t;
      if(((c_55 != NULL) && (c_55 != k_55)))
        _fail(k_55);
      else
        c_55 = k_55;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_8, not_null(c_55));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, k_1);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL;
  q_55 = t;
  o_55 :
  if(match_cons(q_55, sym__2))
    {
      r_55 = ATgetArgument(q_55, 0);
      t_55 = ATgetArgument(q_55, 1);
      p_55 :
      if(match_cons(r_55, sym_Stream_1))
        {
          s_55 = ATgetArgument(r_55, 0);
          {
            ATerm w_55 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(s_55), not_null(t_55));
            {
              ATerm x_55 = NULL;
              x_55 = t;
              if(((w_55 != NULL) && (w_55 != x_55)))
                _fail(x_55);
              else
                w_55 = x_55;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_55));
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
ATerm WriteToFile_1 (ATerm t, ATerm m_94 (ATerm))
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL;
  e_56 = t;
  d_56 :
  if(match_cons(e_56, sym__2))
    {
      f_56 = ATgetArgument(e_56, 0);
      g_56 = ATgetArgument(e_56, 1);
      {
        ATerm j_56 = NULL,l_56 = NULL;
        t = not_null(f_56);
        {
          ATerm k_56 = NULL;
          k_56 = t;
          if(((j_56 != NULL) && (j_56 != k_56)))
            _fail(k_56);
          else
            j_56 = k_56;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_56), term_q_8);
            {
              t = open_stream_0(t);
              {
                ATerm m_56 = NULL;
                m_56 = t;
                if(((l_56 != NULL) && (l_56 != m_56)))
                  _fail(m_56);
                else
                  l_56 = m_56;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_56), not_null(g_56));
                  {
                    t = m_94(t);
                    {
                      t = fclose_0(t);
                      t = not_null(g_56);
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
  ATerm b_57 = NULL;
  ATerm r_8;
  r_8 = t;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm s_8 = t;
      int t_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_1 (ATerm t)
          {
            ATerm c_57 = NULL,d_57 = NULL;
            c_57 = t;
            y_56 :
            if(match_cons(c_57, sym_Output_1))
              {
                d_57 = ATgetArgument(c_57, 0);
                if(((b_57 != NULL) && (b_57 != d_57)))
                  _fail(d_57);
                else
                  b_57 = d_57;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, m_1);
          ;
          LocalPopChoice(t_8);
        }
      else
        {
          t = s_8;
          {
            ATerm e_57 = NULL;
            t = term_u_8;
            {
              e_57 = t;
              if(((b_57 != NULL) && (b_57 != e_57)))
                _fail(e_57);
              else
                b_57 = e_57;
            }
          }
        }
      return(t);
    }
    t = _2(t, l_1, _id);
  }
  t = r_8;
  {
    ATerm n_1 (ATerm t)
    {
      ATerm o_1 (ATerm t)
      {
        t = not_null(b_57);
        return(t);
      }
      t = split_2(t, o_1, _id);
      return(t);
    }
    t = _2(t, _id, n_1);
    {
      ATerm v_8 = t;
      int w_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_1 (ATerm t)
          {
            ATerm q_1 (ATerm t)
            {
              ATerm f_57 = NULL;
              f_57 = t;
              a_57 :
              if(!(match_cons(f_57, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, q_1);
            return(t);
          }
          t = _2(t, p_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(w_8);
        }
      else
        {
          t = v_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm o_97 (ATerm))
{
  ATerm l_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL;
  ATerm x_8;
  x_8 = t;
  t = dtime_0(t);
  t = x_8;
  {
    t = o_97(t);
    {
      ATerm y_8;
      y_8 = t;
      {
        ATerm m_57 = NULL;
        t = dtime_0(t);
        {
          m_57 = t;
          if(((l_57 != NULL) && (l_57 != m_57)))
            _fail(m_57);
          else
            l_57 = m_57;
        }
      }
      t = y_8;
      {
        n_57 = t;
        k_57 :
        if(match_cons(n_57, sym__2))
          {
            o_57 = ATgetArgument(n_57, 0);
            p_57 = ATgetArgument(n_57, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_57)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_57))), not_null(p_57));
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
  ATerm x_57 = NULL,y_57 = NULL;
  ATerm e_58 (ATerm t)
  {
    t = SSL_fclose(not_null(y_57));
    return(t);
  }
  y_57 = t;
  w_57 :
  if(match_cons(y_57, sym_Stream_1))
    {
      x_57 = ATgetArgument(y_57, 0);
      {
        ATerm z_8 = t;
        int a_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(x_57));
            ;
            LocalPopChoice(a_9);
          }
        else
          {
            t = z_8;
            t = e_58(t);
          }
      }
    }
  else
    {
      t = e_58(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL;
  h_58 = t;
  g_58 :
  if(match_cons(h_58, sym_Stream_1))
    {
      i_58 = ATgetArgument(h_58, 0);
      t = SSL_read_term_from_stream(not_null(i_58));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm y_93 (ATerm))
{
  ATerm b_9;
  b_9 = t;
  {
    ATerm n_58 = NULL,p_58 = NULL;
    ATerm c_9;
    c_9 = t;
    {
      ATerm o_58 = NULL;
      t = y_93(t);
      {
        o_58 = t;
        if(((n_58 != NULL) && (n_58 != o_58)))
          _fail(o_58);
        else
          n_58 = o_58;
      }
    }
    t = c_9;
    {
      ATerm q_58 = NULL;
      q_58 = t;
      if(((p_58 != NULL) && (p_58 != q_58)))
        _fail(q_58);
      else
        p_58 = q_58;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_58)), not_null(n_58)));
        t = printnl_0(t);
      }
    }
  }
  t = b_9;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL;
  w_58 = t;
  v_58 :
  if(match_cons(w_58, sym__2))
    {
      x_58 = ATgetArgument(w_58, 0);
      y_58 = ATgetArgument(w_58, 1);
      {
        ATerm b_59 = NULL;
        t = SSL_fopen(not_null(x_58), not_null(y_58));
        {
          ATerm c_59 = NULL;
          c_59 = t;
          if(((b_59 != NULL) && (b_59 != c_59)))
            _fail(c_59);
          else
            b_59 = c_59;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_59));
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
  ATerm g_59 = NULL;
  g_59 = t;
  t = SSL_is_string(not_null(g_59));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm k_59 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm l_59 = NULL;
    l_59 = t;
    if(((k_59 != NULL) && (k_59 != l_59)))
      _fail(l_59);
    else
      k_59 = l_59;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_59));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm o_59 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm p_59 = NULL;
    p_59 = t;
    if(((o_59 != NULL) && (o_59 != p_59)))
      _fail(p_59);
    else
      o_59 = p_59;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_59));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm s_59 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm t_59 = NULL;
    t_59 = t;
    if(((s_59 != NULL) && (s_59 != t_59)))
      _fail(t_59);
    else
      s_59 = t_59;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_59));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm b_60 = NULL;
  b_60 = t;
  a_60 :
  if(match_cons(b_60, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(b_60, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(b_60, sym_stdin_0))
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
  ATerm l_60 = NULL;
  ATerm n_60 = NULL,o_60 = NULL;
  l_60 = t;
  {
    ATerm p_60 = NULL;
    ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL;
    t = not_null(l_60);
    {
      p_60 = t;
      {
        t = SSL_explode_term(not_null(p_60));
        {
          r_60 = t;
          i_60 :
          if(match_cons(r_60, sym__2))
            {
              s_60 = ATgetArgument(r_60, 0);
              t_60 = ATgetArgument(r_60, 1);
              j_60 :
              if(match_string(s_60, ""))
                {
                  k_60 :
                  if(((ATgetType(t_60) == AT_LIST) && !(ATisEmpty(t_60))))
                    {
                      u_60 = ATgetFirst((ATermList) t_60);
                      v_60 = (ATerm) ATgetNext((ATermList) t_60);
                      {
                        if(((o_60 != NULL) && (o_60 != u_60)))
                          _fail(u_60);
                        else
                          o_60 = u_60;
                        if(((n_60 != NULL) && (n_60 != v_60)))
                          _fail(v_60);
                        else
                          n_60 = v_60;
                      }
                    }
                  else
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
    t = not_null(o_60);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL;
  d_61 = t;
  c_61 :
  if(match_cons(d_61, sym__2))
    {
      e_61 = ATgetArgument(d_61, 0);
      f_61 = ATgetArgument(d_61, 1);
      {
        ATerm d_9 = t;
        int e_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(e_9);
          }
        else
          {
            t = d_9;
            {
              ATerm f_9 = t;
              int g_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_1 (ATerm t)
                  {
                    ATerm k_61 = NULL,l_61 = NULL;
                    k_61 = t;
                    b_61 :
                    if(match_cons(k_61, sym_Path_1))
                      {
                        l_61 = ATgetArgument(k_61, 0);
                        t = not_null(l_61);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, r_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(g_9);
                }
              else
                {
                  t = f_9;
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
  ATerm t_61 = NULL;
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_61 = NULL;
      ATerm s_61 = NULL;
      s_61 = t;
      if(((r_61 != NULL) && (r_61 != s_61)))
        _fail(s_61);
      else
        r_61 = s_61;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_61), term_j_9);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      {
        ATerm s_1 (ATerm t)
        {
          t = term_k_9;
          return(t);
        }
        t = debug_1(t, s_1);
        _fail(t);
      }
    }
  {
    ATerm l_9;
    l_9 = t;
    {
      ATerm u_61 = NULL;
      t = read_from_stream_0(t);
      {
        u_61 = t;
        if(((t_61 != NULL) && (t_61 != u_61)))
          _fail(u_61);
        else
          t_61 = u_61;
      }
    }
    t = l_9;
    {
      t = fclose_0(t);
      t = not_null(t_61);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_89 (ATerm), ATerm r_89 (ATerm))
{
  ATerm z_61 = NULL,b_62 = NULL;
  ATerm m_9;
  m_9 = t;
  {
    ATerm a_62 = NULL;
    t = q_89(t);
    {
      a_62 = t;
      if(((z_61 != NULL) && (z_61 != a_62)))
        _fail(a_62);
      else
        z_61 = a_62;
    }
  }
  t = m_9;
  {
    ATerm c_62 = NULL;
    t = r_89(t);
    {
      c_62 = t;
      if(((b_62 != NULL) && (b_62 != c_62)))
        _fail(c_62);
      else
        b_62 = c_62;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_61), not_null(b_62));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm i_62 = NULL;
  ATerm n_9;
  n_9 = t;
  {
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 (ATerm t)
        {
          ATerm j_62 = NULL,k_62 = NULL;
          j_62 = t;
          g_62 :
          if(match_cons(j_62, sym_Input_1))
            {
              k_62 = ATgetArgument(j_62, 0);
              if(((i_62 != NULL) && (i_62 != k_62)))
                _fail(k_62);
              else
                i_62 = k_62;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, t_1);
        ;
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        {
          ATerm l_62 = NULL;
          t = term_q_9;
          {
            l_62 = t;
            if(((i_62 != NULL) && (i_62 != l_62)))
              _fail(l_62);
            else
              i_62 = l_62;
          }
        }
      }
  }
  t = n_9;
  {
    ATerm u_1 (ATerm t)
    {
      t = not_null(i_62);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, u_1);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm s_62 = NULL;
    s_62 = t;
    q_62 :
    if(!(match_string(s_62, "-k")))
      {
        if(!(match_string(s_62, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    ATerm r_9;
    r_9 = t;
    {
      ATerm t_62 = NULL;
      ATerm u_62 = NULL;
      t = string_to_int_0(t);
      {
        u_62 = t;
        if(((t_62 != NULL) && (t_62 != u_62)))
          _fail(u_62);
        else
          t_62 = u_62;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_9, not_null(t_62));
        t = set_config_0(t);
      }
    }
    t = r_9;
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = term_t_9;
    return(t);
  }
  t = ArgOption_3(t, v_1, w_1, x_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm x_62 = NULL;
  x_62 = t;
  t = SSL_string_to_int(not_null(x_62));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_1 (ATerm t)
      {
        ATerm g_63 = NULL;
        g_63 = t;
        a_63 :
        if(!(match_string(g_63, "-S")))
          {
            if(!(match_string(g_63, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        t = term_x_9;
        t = set_config_0(t);
        t = term_y_9;
        return(t);
      }
      ATerm a_2 (ATerm t)
      {
        t = term_z_9;
        return(t);
      }
      t = Option_3(t, y_1, z_1, a_2);
      ;
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      {
        ATerm a_10 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              ATerm h_63 = NULL;
              h_63 = t;
              b_63 :
              if(!(match_string(h_63, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm c_2 (ATerm t)
            {
              ATerm k_63 = NULL;
              ATerm c_10;
              c_10 = t;
              {
                ATerm i_63 = NULL;
                ATerm j_63 = NULL;
                t = string_to_int_0(t);
                {
                  j_63 = t;
                  if(((i_63 != NULL) && (i_63 != j_63)))
                    _fail(j_63);
                  else
                    i_63 = j_63;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_8, not_null(i_63));
                  t = set_config_0(t);
                }
              }
              t = c_10;
              {
                ATerm l_63 = NULL;
                l_63 = t;
                if(((k_63 != NULL) && (k_63 != l_63)))
                  _fail(l_63);
                else
                  k_63 = l_63;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(k_63));
              }
              return(t);
            }
            ATerm d_2 (ATerm t)
            {
              t = term_d_10;
              return(t);
            }
            t = ArgOption_3(t, b_2, c_2, d_2);
            ;
            LocalPopChoice(b_10);
          }
        else
          {
            t = a_10;
            {
              ATerm e_2 (ATerm t)
              {
                ATerm m_63 = NULL;
                m_63 = t;
                f_63 :
                if(!(match_string(m_63, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm f_2 (ATerm t)
              {
                t = term_f_10;
                t = set_config_0(t);
                t = term_g_10;
                return(t);
              }
              ATerm g_2 (ATerm t)
              {
                t = term_h_10;
                return(t);
              }
              t = Option_3(t, e_2, f_2, g_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(j_10);
    }
  else
    {
      t = i_10;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm s_63 = NULL;
    s_63 = t;
    p_63 :
    if(!(match_string(s_63, "-o")))
      {
        if(!(match_string(s_63, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm v_63 = NULL;
    ATerm k_10;
    k_10 = t;
    {
      ATerm t_63 = NULL;
      ATerm u_63 = NULL;
      u_63 = t;
      if(((t_63 != NULL) && (t_63 != u_63)))
        _fail(u_63);
      else
        t_63 = u_63;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_10, not_null(t_63));
        t = set_config_0(t);
      }
    }
    t = k_10;
    {
      ATerm w_63 = NULL;
      w_63 = t;
      if(((v_63 != NULL) && (v_63 != w_63)))
        _fail(w_63);
      else
        v_63 = w_63;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_63));
    }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_m_10;
    return(t);
  }
  t = ArgOption_3(t, h_2, i_2, j_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm n_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(o_10);
    }
  else
    {
      t = n_10;
      {
        ATerm k_2 (ATerm t)
        {
          ATerm a_64 = NULL;
          a_64 = t;
          z_63 :
          if(!(match_string(a_64, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm l_2 (ATerm t)
        {
          t = term_q_10;
          t = set_config_0(t);
          t = term_r_10;
          return(t);
        }
        ATerm m_2 (ATerm t)
        {
          t = term_s_10;
          return(t);
        }
        t = Option_3(t, k_2, l_2, m_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL;
  g_64 = t;
  e_64 :
  if(match_string(g_64, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(g_64) == AT_LIST) && !(ATisEmpty(g_64))))
        {
          h_64 = ATgetFirst((ATermList) g_64);
          i_64 = (ATerm) ATgetNext((ATermList) g_64);
          f_64 :
          if(((ATgetType(i_64) == AT_LIST) && !(ATisEmpty(i_64))))
            {
              j_64 = ATgetFirst((ATermList) i_64);
              k_64 = (ATerm) ATgetNext((ATermList) i_64);
              {
                ATerm o_64 = NULL;
                ATerm t_10;
                t_10 = t;
                {
                  t = not_null(h_64);
                  t = j_0(t);
                }
                t = t_10;
                {
                  ATerm p_64 = NULL;
                  t = not_null(j_64);
                  {
                    t = k_0(t);
                    {
                      p_64 = t;
                      if(((o_64 != NULL) && (o_64 != p_64)))
                        _fail(p_64);
                      else
                        o_64 = p_64;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_64)), not_null(o_64));
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
  ATerm n_2 (ATerm t)
  {
    ATerm y_64 = NULL;
    y_64 = t;
    t_64 :
    if(!(match_string(y_64, "-i")))
      {
        if(!(match_string(y_64, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm d_65 = NULL;
    ATerm u_10;
    u_10 = t;
    {
      ATerm z_64 = NULL;
      ATerm c_65 = NULL;
      c_65 = t;
      if(((z_64 != NULL) && (z_64 != c_65)))
        _fail(c_65);
      else
        z_64 = c_65;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_10, not_null(z_64));
        t = set_config_0(t);
      }
    }
    t = u_10;
    {
      ATerm e_65 = NULL;
      e_65 = t;
      if(((d_65 != NULL) && (d_65 != e_65)))
        _fail(e_65);
      else
        d_65 = e_65;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_65));
    }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_w_10;
    return(t);
  }
  t = ArgOption_3(t, n_2, o_2, p_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm x_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(y_10);
    }
  else
    {
      t = x_10;
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
  ATerm n_65 = NULL;
  t = report_run_time_0(t);
  {
    ATerm o_65 = NULL;
    t = term_q_7;
    {
      t = whoami_0(t);
      {
        o_65 = t;
        if(((n_65 != NULL) && (n_65 != o_65)))
          _fail(o_65);
        else
          n_65 = o_65;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATinsert(ATempty, term_b_11), not_null(n_65)));
      {
        t = printnl_0(t);
        {
          t = term_u_7;
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
  ATerm u_65 = NULL;
  u_65 = t;
  t = SSL_TicksToSeconds(not_null(u_65));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL;
  p_66 = t;
  o_66 :
  if(match_cons(p_66, sym__2))
    {
      q_66 = ATgetArgument(p_66, 0);
      r_66 = ATgetArgument(p_66, 1);
      {
        ATerm d_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(q_66), not_null(r_66));
            ;
            LocalPopChoice(e_11);
          }
        else
          {
            t = d_11;
            t = SSL_addr(not_null(q_66), not_null(r_66));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm b_88 (ATerm), ATerm c_88 (ATerm))
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_88(t);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL;
        d_67 = t;
        c_67 :
        if(((ATgetType(d_67) == AT_LIST) && !(ATisEmpty(d_67))))
          {
            e_67 = ATgetFirst((ATermList) d_67);
            f_67 = (ATerm) ATgetNext((ATermList) d_67);
            {
              ATerm i_67 = NULL;
              ATerm j_67 = NULL;
              t = not_null(f_67);
              {
                t = foldr_2(t, b_88, c_88);
                {
                  j_67 = t;
                  if(((i_67 != NULL) && (i_67 != j_67)))
                    _fail(j_67);
                  else
                    i_67 = j_67;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_67), not_null(i_67));
                t = c_88(t);
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
ATerm crush_2 (ATerm t, ATerm u_91 (ATerm), ATerm v_91 (ATerm))
{
  ATerm q_67 = NULL;
  ATerm s_67 = NULL;
  q_67 = t;
  {
    ATerm t_67 = NULL;
    ATerm v_67 = NULL,w_67 = NULL,a_68 = NULL;
    t = not_null(q_67);
    {
      t_67 = t;
      {
        t = SSL_explode_term(not_null(t_67));
        {
          v_67 = t;
          p_67 :
          if(match_cons(v_67, sym__2))
            {
              w_67 = ATgetArgument(v_67, 0);
              a_68 = ATgetArgument(v_67, 1);
              if(((s_67 != NULL) && (s_67 != a_68)))
                _fail(a_68);
              else
                s_67 = a_68;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_67);
      t = foldr_2(t, u_91, v_91);
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
    ATerm q_2 (ATerm t)
    {
      t = term_w_9;
      return(t);
    }
    t = crush_2(t, q_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL;
  r_68 = t;
  q_68 :
  if(match_cons(r_68, sym__2))
    {
      s_68 = ATgetArgument(r_68, 0);
      t_68 = ATgetArgument(r_68, 1);
      {
        ATerm h_11;
        h_11 = t;
        {
          ATerm i_11 = t;
          int j_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(s_68), not_null(t_68));
              ;
              LocalPopChoice(j_11);
            }
          else
            {
              t = i_11;
              t = SSL_gtr(not_null(s_68), not_null(t_68));
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
  ATerm z_68 = NULL;
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL;
      a_69 = t;
      y_68 :
      if(match_cons(a_69, sym__2))
        {
          b_69 = ATgetArgument(a_69, 0);
          c_69 = ATgetArgument(a_69, 1);
          {
            if(((z_68 != NULL) && (z_68 != b_69)))
              _fail(b_69);
            else
              z_68 = b_69;
            if(((z_68 != NULL) && (z_68 != c_69)))
              _fail(c_69);
            else
              z_68 = c_69;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm p_95 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm m_11;
    m_11 = t;
    {
      ATerm f_69 = NULL;
      ATerm g_69 = NULL;
      t = term_n_8;
      {
        t = get_config_0(t);
        {
          g_69 = t;
          if(((f_69 != NULL) && (f_69 != g_69)))
            _fail(g_69);
          else
            f_69 = g_69;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_69), term_u_7);
        t = geq_0(t);
      }
    }
    t = m_11;
    t = p_95(t);
    return(t);
  }
  t = try_1(t, r_2);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm k_69 = NULL,m_69 = NULL;
    ATerm n_11;
    n_11 = t;
    {
      ATerm l_69 = NULL;
      t = run_time_0(t);
      {
        l_69 = t;
        if(((k_69 != NULL) && (k_69 != l_69)))
          _fail(l_69);
        else
          k_69 = l_69;
      }
    }
    t = n_11;
    {
      ATerm n_69 = NULL;
      t = term_q_7;
      {
        t = whoami_0(t);
        {
          n_69 = t;
          if(((m_69 != NULL) && (m_69 != n_69)))
            _fail(n_69);
          else
            m_69 = n_69;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_11), not_null(k_69)), term_r_11), not_null(m_69)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, s_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_w_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_69 = NULL;
  u_69 = t;
  t_69 :
  if(match_cons(u_69, sym_Version_0))
    {
      ATerm w_69 = NULL,y_69 = NULL;
      ATerm t_11;
      t_11 = t;
      {
        ATerm x_69 = NULL;
        t = SSLgetAnnotations(not_null(u_69));
        {
          x_69 = t;
          if(((w_69 != NULL) && (w_69 != x_69)))
            _fail(x_69);
          else
            w_69 = x_69;
        }
      }
      t = t_11;
      {
        ATerm z_69 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(w_69));
        {
          z_69 = t;
          if(((y_69 != NULL) && (y_69 != z_69)))
            _fail(z_69);
          else
            y_69 = z_69;
        }
        t = not_null(y_69);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_98 (ATerm))
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
        ATerm t_2 (ATerm t)
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
                int a_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(a_12);
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
        t = option_defined_1(t, t_2);
      }
    }
  t = m_98(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_70 = NULL;
  e_70 = t;
  t = SSL_table_create(not_null(e_70));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm i_70 = NULL;
  i_70 = t;
  {
    ATerm b_12;
    b_12 = t;
    {
      t = term_c_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_c_12, term_e_12, not_null(i_70));
          t = table_put_0(t);
        }
      }
    }
    t = b_12;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm m_70 = NULL;
  m_70 = t;
  t = SSL_table_destroy(not_null(m_70));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_70 = NULL;
  q_70 = t;
  t = SSL_exit(not_null(q_70));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm n_100 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_82 (ATerm))
{
  ATerm t_70 (ATerm t)
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
        t = Cons_2(t, c_82, t_70);
      }
    return(t);
  }
  t = t_70(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL;
  c_71 = t;
  z_70 :
  if(((ATgetType(c_71) == AT_LIST) && !(ATisEmpty(c_71))))
    {
      a_71 = ATgetFirst((ATermList) c_71);
      b_71 = (ATerm) ATgetNext((ATermList) c_71);
      {
        ATerm f_71 = NULL;
        t = not_null(b_71);
        {
          ATerm j_12;
          j_12 = t;
          {
            ATerm g_71 = NULL,i_71 = NULL,k_71 = NULL;
            ATerm m_12;
            m_12 = t;
            {
              ATerm h_71 = NULL;
              t = i_0(t);
              {
                h_71 = t;
                if(((g_71 != NULL) && (g_71 != h_71)))
                  _fail(h_71);
                else
                  g_71 = h_71;
              }
            }
            t = m_12;
            {
              ATerm j_71 = NULL;
              t = not_null(a_71);
              {
                t = g_0(t);
                {
                  j_71 = t;
                  if(((i_71 != NULL) && (i_71 != j_71)))
                    _fail(j_71);
                  else
                    i_71 = j_71;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(g_71)), not_null(i_71));
                {
                  k_71 = t;
                  if(((f_71 != NULL) && (f_71 != k_71)))
                    _fail(k_71);
                  else
                    f_71 = k_71;
                }
              }
            }
          }
          t = j_12;
          {
            ATerm u_2 (ATerm t)
            {
              t = not_null(f_71);
              return(t);
            }
            t = reverse_acc_2(t, g_0, u_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(c_71) == AT_LIST) && ATisEmpty(c_71)))
        {
          {
            t = term_q_7;
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
  ATerm v_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, v_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm m_100 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm j_74 (ATerm))
{
  ATerm v_71 = NULL,w_71 = NULL;
  v_71 = t;
  u_71 :
  if(match_cons(v_71, sym_Program_1))
    {
      w_71 = ATgetArgument(v_71, 0);
      {
        ATerm z_71 = NULL,b_72 = NULL;
        ATerm a_72 = NULL;
        t = SSLgetAnnotations(not_null(v_71));
        {
          a_72 = t;
          if(((z_71 != NULL) && (z_71 != a_72)))
            _fail(a_72);
          else
            z_71 = a_72;
        }
        {
          t = not_null(w_71);
          {
            ATerm d_72 = NULL;
            t = j_74(t);
            {
              b_72 = t;
              {
                ATerm e_72 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_72)), not_null(z_71));
                {
                  e_72 = t;
                  if(((d_72 != NULL) && (d_72 != e_72)))
                    _fail(e_72);
                  else
                    d_72 = e_72;
                }
                t = not_null(d_72);
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
  ATerm n_72 = NULL;
  ATerm n_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_72 = NULL;
      t = term_c_11;
      {
        t = get_config_0(t);
        {
          o_72 = t;
          if(((n_72 != NULL) && (n_72 != o_72)))
            _fail(o_72);
          else
            n_72 = o_72;
        }
      }
      ;
      LocalPopChoice(r_12);
    }
  else
    {
      t = n_12;
      {
        ATerm w_2 (ATerm t)
        {
          ATerm x_2 (ATerm t)
          {
            ATerm p_72 = NULL;
            p_72 = t;
            if(((n_72 != NULL) && (n_72 != p_72)))
              _fail(p_72);
            else
              n_72 = p_72;
            return(t);
          }
          t = Program_1(t, x_2);
          return(t);
        }
        t = option_defined_1(t, w_2);
      }
    }
  {
    ATerm y_2 (ATerm t)
    {
      ATerm z_2 (ATerm t)
      {
        t = not_null(n_72);
        return(t);
      }
      t = short_description_1(t, z_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, y_2);
    {
      t = term_u_12;
      {
        t = echo_0(t);
        {
          t = term_c_13;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_3 (ATerm t)
                {
                  ATerm q_72 = NULL;
                  ATerm r_72 = NULL;
                  r_72 = t;
                  if(((q_72 != NULL) && (q_72 != r_72)))
                    _fail(r_72);
                  else
                    q_72 = r_72;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_72)), term_d_13);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_3);
                {
                  ATerm b_3 (ATerm t)
                  {
                    ATerm s_72 = NULL;
                    ATerm t_72 = NULL;
                    ATerm c_3 (ATerm t)
                    {
                      t = not_null(n_72);
                      return(t);
                    }
                    t = long_description_1(t, c_3);
                    {
                      t_72 = t;
                      if(((s_72 != NULL) && (s_72 != t_72)))
                        _fail(t_72);
                      else
                        s_72 = t_72;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(s_72)), term_e_13);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_3);
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
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(g_13);
    }
  else
    {
      t = f_13;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm k_74 (ATerm))
{
  ATerm d_73 = NULL,e_73 = NULL;
  d_73 = t;
  c_73 :
  if(match_cons(d_73, sym_Undefined_1))
    {
      e_73 = ATgetArgument(d_73, 0);
      {
        ATerm h_73 = NULL,j_73 = NULL;
        ATerm i_73 = NULL;
        t = SSLgetAnnotations(not_null(d_73));
        {
          i_73 = t;
          if(((h_73 != NULL) && (h_73 != i_73)))
            _fail(i_73);
          else
            h_73 = i_73;
        }
        {
          t = not_null(e_73);
          {
            ATerm l_73 = NULL;
            t = k_74(t);
            {
              j_73 = t;
              {
                ATerm m_73 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_73)), not_null(h_73));
                {
                  m_73 = t;
                  if(((l_73 != NULL) && (l_73 != m_73)))
                    _fail(m_73);
                  else
                    l_73 = m_73;
                }
                t = not_null(l_73);
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
ATerm fetch_1 (ATerm t, ATerm l_82 (ATerm))
{
  ATerm r_73 (ATerm t)
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_82, _id);
        ;
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        t = Cons_2(t, _id, r_73);
      }
    return(t);
  }
  t = r_73(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_99 (ATerm))
{
  t = fetch_1(t, m_99);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL;
  t_73 = t;
  s_73 :
  if(((ATgetType(t_73) == AT_LIST) && ATisEmpty(t_73)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(t_73) == AT_LIST) && !(ATisEmpty(t_73))))
        {
          u_73 = ATgetFirst((ATermList) t_73);
          v_73 = (ATerm) ATgetNext((ATermList) t_73);
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
  ATerm j_13;
  j_13 = t;
  {
    ATerm y_73 = NULL;
    ATerm b_74 = NULL;
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        {
          ATerm z_73 = NULL;
          ATerm a_74 = NULL;
          a_74 = t;
          if(((z_73 != NULL) && (z_73 != a_74)))
            _fail(a_74);
          else
            z_73 = a_74;
          t = (ATerm) ATinsert(ATempty, not_null(z_73));
        }
      }
    {
      b_74 = t;
      if(((y_73 != NULL) && (y_73 != b_74)))
        _fail(b_74);
      else
        y_73 = b_74;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_8, not_null(y_73));
      t = printnl_0(t);
    }
  }
  t = j_13;
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
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_74 = NULL;
  i_74 = t;
  h_74 :
  if(match_cons(i_74, sym_Help_0))
    {
      ATerm m_74 = NULL,o_74 = NULL;
      ATerm o_13;
      o_13 = t;
      {
        ATerm n_74 = NULL;
        t = SSLgetAnnotations(not_null(i_74));
        {
          n_74 = t;
          if(((m_74 != NULL) && (m_74 != n_74)))
            _fail(n_74);
          else
            m_74 = n_74;
        }
      }
      t = o_13;
      {
        ATerm s_74 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(m_74));
        {
          s_74 = t;
          if(((o_74 != NULL) && (o_74 != s_74)))
            _fail(s_74);
          else
            o_74 = s_74;
        }
        t = not_null(o_74);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm r_74 (ATerm))
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_74(t);
      ;
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm r_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_3 (ATerm t)
      {
        ATerm y_74 = NULL;
        y_74 = t;
        w_74 :
        if(!(match_string(y_74, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        t = term_a_14;
        t = set_config_0(t);
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        t = term_d_14;
        return(t);
      }
      t = Option_3(t, d_3, e_3, f_3);
      ;
      LocalPopChoice(v_13);
    }
  else
    {
      t = r_13;
      {
        ATerm g_3 (ATerm t)
        {
          ATerm z_74 = NULL;
          z_74 = t;
          x_74 :
          if(!(match_string(z_74, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm h_3 (ATerm t)
        {
          t = term_a_14;
          {
            t = set_config_0(t);
            {
              t = term_f_14;
              t = set_config_0(t);
            }
          }
          t = term_g_14;
          return(t);
        }
        ATerm i_3 (ATerm t)
        {
          t = term_h_14;
          return(t);
        }
        t = Option_3(t, g_3, h_3, i_3);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_75 = NULL,d_75 = NULL,e_75 = NULL;
  c_75 = t;
  b_75 :
  if(match_cons(c_75, sym__2))
    {
      d_75 = ATgetArgument(c_75, 0);
      e_75 = ATgetArgument(c_75, 1);
      t = SSL_table_get(not_null(d_75), not_null(e_75));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL;
  l_75 = t;
  k_75 :
  if(match_cons(l_75, sym__3))
    {
      m_75 = ATgetArgument(l_75, 0);
      n_75 = ATgetArgument(l_75, 1);
      o_75 = ATgetArgument(l_75, 2);
      {
        ATerm i_14;
        i_14 = t;
        {
          ATerm s_75 = NULL;
          ATerm t_75 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_75), not_null(n_75));
          {
            ATerm j_14 = t;
            int k_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(k_14);
              }
            else
              {
                t = j_14;
                t = (ATerm) ATempty;
              }
            {
              t_75 = t;
              if(((s_75 != NULL) && (s_75 != t_75)))
                _fail(t_75);
              else
                s_75 = t_75;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_75), not_null(n_75), (ATerm) ATinsert(CheckATermList(not_null(s_75)), not_null(o_75)));
            t = table_put_0(t);
          }
        }
        t = i_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm r_100 (ATerm))
{
  ATerm x_75 = NULL;
  ATerm y_75 = NULL;
  t = term_q_7;
  {
    t = r_100(t);
    {
      y_75 = t;
      if(((x_75 != NULL) && (x_75 != y_75)))
        _fail(y_75);
      else
        x_75 = y_75;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_v_12, term_z_12, not_null(x_75));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL;
  e_76 = t;
  d_76 :
  if(match_string(e_76, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(e_76) == AT_LIST) && !(ATisEmpty(e_76))))
        {
          f_76 = ATgetFirst((ATermList) e_76);
          g_76 = (ATerm) ATgetNext((ATermList) e_76);
          {
            ATerm j_76 = NULL;
            ATerm o_14;
            o_14 = t;
            {
              t = not_null(f_76);
              t = a_0(t);
            }
            t = o_14;
            {
              ATerm k_76 = NULL;
              t = term_q_7;
              {
                t = b_0(t);
                {
                  k_76 = t;
                  if(((j_76 != NULL) && (j_76 != k_76)))
                    _fail(k_76);
                  else
                    j_76 = k_76;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(g_76)), not_null(j_76));
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
  ATerm j_3 (ATerm t)
  {
    ATerm p_76 = NULL;
    p_76 = t;
    o_76 :
    if(!(match_string(p_76, "--help")))
      {
        if(!(match_string(p_76, "-h")))
          {
            if(!(match_string(p_76, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = term_p_14;
    {
      t = set_config_0(t);
      t = term_t_14;
    }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    t = term_w_14;
    return(t);
  }
  t = Option_3(t, j_3, k_3, l_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL;
  s_76 = t;
  r_76 :
  if(((ATgetType(s_76) == AT_LIST) && !(ATisEmpty(s_76))))
    {
      t_76 = ATgetFirst((ATermList) s_76);
      u_76 = (ATerm) ATgetNext((ATermList) s_76);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_76)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_76)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_61 (ATerm), ATerm h_61 (ATerm))
{
  ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL;
  e_77 = t;
  d_77 :
  if(((ATgetType(e_77) == AT_LIST) && !(ATisEmpty(e_77))))
    {
      f_77 = ATgetFirst((ATermList) e_77);
      g_77 = (ATerm) ATgetNext((ATermList) e_77);
      {
        ATerm k_77 = NULL,m_77 = NULL;
        ATerm l_77 = NULL;
        t = SSLgetAnnotations(not_null(e_77));
        {
          l_77 = t;
          if(((k_77 != NULL) && (k_77 != l_77)))
            _fail(l_77);
          else
            k_77 = l_77;
        }
        {
          t = not_null(f_77);
          {
            ATerm o_77 = NULL;
            t = g_61(t);
            {
              m_77 = t;
              {
                t = not_null(g_77);
                {
                  ATerm q_77 = NULL;
                  t = h_61(t);
                  {
                    o_77 = t;
                    {
                      ATerm r_77 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_77)), not_null(m_77)), not_null(k_77));
                      {
                        r_77 = t;
                        if(((q_77 != NULL) && (q_77 != r_77)))
                          _fail(r_77);
                        else
                          q_77 = r_77;
                      }
                      t = not_null(q_77);
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
  ATerm b_78 = NULL;
  b_78 = t;
  a_78 :
  if(((ATgetType(b_78) == AT_LIST) && ATisEmpty(b_78)))
    {
      {
        ATerm d_78 = NULL,f_78 = NULL;
        ATerm x_14;
        x_14 = t;
        {
          ATerm e_78 = NULL;
          t = SSLgetAnnotations(not_null(b_78));
          {
            e_78 = t;
            if(((d_78 != NULL) && (d_78 != e_78)))
              _fail(e_78);
            else
              d_78 = e_78;
          }
        }
        t = x_14;
        {
          ATerm g_78 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(d_78));
          {
            g_78 = t;
            if(((f_78 != NULL) && (f_78 != g_78)))
              _fail(g_78);
            else
              f_78 = g_78;
          }
          t = not_null(f_78);
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
  ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL;
  m_78 = t;
  l_78 :
  if(match_cons(m_78, sym__2))
    {
      n_78 = ATgetArgument(m_78, 0);
      o_78 = ATgetArgument(m_78, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_k_8, not_null(n_78), not_null(o_78));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm p_100 (ATerm))
{
  ATerm y_14;
  y_14 = t;
  {
    ATerm m_3 (ATerm t)
    {
      t = term_z_14;
      t = p_100(t);
      return(t);
    }
    t = try_1(t, m_3);
  }
  t = y_14;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm w_78 = NULL;
      ATerm a_15;
      a_15 = t;
      {
        ATerm u_78 = NULL;
        ATerm v_78 = NULL;
        v_78 = t;
        if(((u_78 != NULL) && (u_78 != v_78)))
          _fail(v_78);
        else
          u_78 = v_78;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_11, not_null(u_78));
          t = set_config_0(t);
        }
      }
      t = a_15;
      {
        ATerm x_78 = NULL;
        x_78 = t;
        if(((w_78 != NULL) && (w_78 != x_78)))
          _fail(x_78);
        else
          w_78 = x_78;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_78));
      }
      return(t);
    }
    ATerm o_3 (ATerm t)
    {
      ATerm b_15 = t;
      int c_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_15 = t;
          int e_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(e_15);
            }
          else
            {
              t = d_15;
              {
                t = p_100(t);
                t = Cons_2(t, _id, o_3);
              }
            }
          ;
          LocalPopChoice(c_15);
        }
      else
        {
          t = b_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_3, o_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL;
  ATerm j_15;
  j_15 = t;
  {
    ATerm g_79 = NULL,h_79 = NULL,i_79 = NULL,j_79 = NULL;
    g_79 = t;
    c_79 :
    if(match_cons(g_79, sym__3))
      {
        h_79 = ATgetArgument(g_79, 0);
        i_79 = ATgetArgument(g_79, 1);
        j_79 = ATgetArgument(g_79, 2);
        {
          if(((d_79 != NULL) && (d_79 != h_79)))
            _fail(h_79);
          else
            d_79 = h_79;
          {
            if(((e_79 != NULL) && (e_79 != i_79)))
              _fail(i_79);
            else
              e_79 = i_79;
            {
              if(((f_79 != NULL) && (f_79 != j_79)))
                _fail(j_79);
              else
                f_79 = j_79;
              t = SSL_table_put(not_null(d_79), not_null(e_79), not_null(f_79));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = j_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_100 (ATerm))
{
  ATerm m_79 = NULL;
  ATerm k_15;
  k_15 = t;
  {
    t = term_l_15;
    t = table_put_0(t);
  }
  t = k_15;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm p_15 = t;
      int r_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_100(t);
          ;
          LocalPopChoice(r_15);
        }
      else
        {
          t = p_15;
          {
            ATerm u_15 = t;
            int v_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(v_15);
              }
            else
              {
                t = u_15;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, p_3);
    {
      ATerm q_3 (ATerm t)
      {
        ATerm w_15 = t;
        int x_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_15;
            y_15 = t;
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
            t = y_15;
            {
              t = system_usage_0(t);
              {
                t = term_w_9;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(x_15);
          }
        else
          {
            t = w_15;
            {
              ATerm b_16 = t;
              int c_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_16;
                  d_16 = t;
                  {
                    t = term_w_13;
                    t = get_config_0(t);
                  }
                  t = d_16;
                  {
                    t = system_about_0(t);
                    {
                      t = term_w_9;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(c_16);
                }
              else
                {
                  t = b_16;
                  {
                    ATerm r_3 (ATerm t)
                    {
                      ATerm s_3 (ATerm t)
                      {
                        ATerm n_79 = NULL;
                        n_79 = t;
                        if(((m_79 != NULL) && (m_79 != n_79)))
                          _fail(n_79);
                        else
                          m_79 = n_79;
                        return(t);
                      }
                      t = Undefined_1(t, s_3);
                      return(t);
                    }
                    t = option_defined_1(t, r_3);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_79)), term_e_16));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_u_7;
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
      t = try_1(t, q_3);
      {
        ATerm f_16;
        f_16 = t;
        {
          t = term_v_12;
          t = table_destroy_0(t);
        }
        t = f_16;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm))
{
  t = parse_options_1(t, o_98);
  {
    t = store_options_0(t);
    {
      t = q_98(t);
      {
        ATerm g_16 = t;
        int k_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, p_98);
            ;
            LocalPopChoice(k_16);
          }
        else
          {
            t = g_16;
            {
              ATerm l_16 = t;
              int p_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_98(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(p_16);
                }
              else
                {
                  t = l_16;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm g_98 (ATerm))
{
  ATerm t_3 (ATerm t)
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_98(t);
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
  ATerm u_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, d_98);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, t_3, f_98, g_98, u_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    ATerm w_3 (ATerm t)
    {
      ATerm x_16;
      x_16 = t;
      {
        ATerm q_79 = NULL;
        ATerm r_79 = NULL;
        t = term_c_11;
        {
          t = get_config_0(t);
          {
            r_79 = t;
            if(((q_79 != NULL) && (q_79 != r_79)))
              _fail(r_79);
            else
              q_79 = r_79;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATempty, not_null(q_79)));
          t = printnl_0(t);
        }
      }
      t = x_16;
      return(t);
    }
    t = if_verbose2_1(t, w_3);
    return(t);
  }
  t = iowrap_4(t, x_97, y_97, z_97, v_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm v_97 (ATerm), ATerm w_97 (ATerm))
{
  t = iowrap_3(t, v_97, w_97, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm s_97 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    t = _2(t, _id, s_97);
    return(t);
  }
  t = iowrap_2(t, x_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
