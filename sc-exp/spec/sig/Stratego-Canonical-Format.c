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
Symbol sym_MatchOp_2;
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
  sym_MatchOp_2 = ATmakeSymbol("MatchOp", 2, ATfalse);
  ATprotectSymbol(sym_MatchOp_2);
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
  init_constant_terms();
}
ATerm term_z_20;
ATerm term_r_19;
ATerm term_w_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_z_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_m_14;
ATerm term_i_14;
ATerm term_z_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_o_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_i_9;
ATerm term_d_9;
ATerm term_a_9;
ATerm term_r_6;
ATerm term_t_5;
ATerm term_k_5;
void init_constant_terms (void)
{
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not a case-alternative: ", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_t_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym__2, term_b_12, term_k_9);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_k_9);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym__2, term_s_15, term_t_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym__2, term_m_17, term_k_9);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym__2, term_t_17, term_k_9);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_k_9);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym__3, term_s_15, term_t_15, (ATerm) ATempty);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Continue_1 (ATerm, ATerm e_74 (ATerm));
ATerm Var_1 (ATerm, ATerm q_0 (ATerm));
ATerm Assign_1 (ATerm, ATerm h_74 (ATerm));
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm f_74 (ATerm), ATerm g_74 (ATerm));
ATerm Fun_2 (ATerm, ATerm i_74 (ATerm), ATerm j_74 (ATerm));
ATerm Alt_3 (ATerm, ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm d_74 (ATerm));
ATerm case_alternative_1 (ATerm, ATerm s_74 (ATerm));
ATerm Case_4 (ATerm, ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm x_73 (ATerm));
ATerm Let_2 (ATerm, ATerm l_65 (ATerm), ATerm m_65 (ATerm));
ATerm Prim_2 (ATerm, ATerm p_66 (ATerm), ATerm q_66 (ATerm));
ATerm Where_1 (ATerm, ATerm l_66 (ATerm));
ATerm Scope_2 (ATerm, ATerm v_65 (ATerm), ATerm w_65 (ATerm));
ATerm Build_1 (ATerm, ATerm t_65 (ATerm));
ATerm Op_2 (ATerm, ATerm r_62 (ATerm), ATerm s_62 (ATerm));
ATerm As_2 (ATerm, ATerm a_63 (ATerm), ATerm b_63 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm g_63 (ATerm));
ATerm Str_1 (ATerm, ATerm p_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm o_0 (ATerm));
ATerm Int_1 (ATerm, ATerm n_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm match_term_exp_0 (ATerm);
ATerm Match_1 (ATerm, ATerm s_65 (ATerm));
ATerm Thread_1 (ATerm, ATerm b_67 (ATerm));
ATerm All_1 (ATerm, ATerm a_67 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm z_66 (ATerm));
ATerm Cong_2 (ATerm, ATerm l_61 (ATerm), ATerm m_61 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm w_66 (ATerm), ATerm x_66 (ATerm));
ATerm Rec_2 (ATerm, ATerm i_66 (ATerm), ATerm j_66 (ATerm));
ATerm SVar_1 (ATerm, ATerm k_65 (ATerm));
ATerm Call_2 (ATerm, ATerm n_65 (ATerm), ATerm o_65 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm d_66 (ATerm), ATerm e_66 (ATerm));
ATerm GChoice_2 (ATerm, ATerm d_65 (ATerm), ATerm e_65 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm f_66 (ATerm), ATerm g_66 (ATerm), ATerm h_66 (ATerm));
ATerm LChoice_2 (ATerm, ATerm b_66 (ATerm), ATerm c_66 (ATerm));
ATerm Choice_2 (ATerm, ATerm z_64 (ATerm), ATerm a_65 (ATerm));
ATerm Seq_2 (ATerm, ATerm z_65 (ATerm), ATerm a_66 (ATerm));
ATerm Test_1 (ATerm, ATerm m_66 (ATerm));
ATerm Not_1 (ATerm, ATerm k_66 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm w_67 (ATerm), ATerm x_67 (ATerm));
ATerm SDef_3 (ATerm, ATerm a_68 (ATerm), ATerm b_68 (ATerm), ATerm c_68 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm i_82 (ATerm));
ATerm Strategies_1 (ATerm, ATerm p_61 (ATerm));
ATerm Specification_1 (ATerm, ATerm u_61 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm y_59 (ATerm), ATerm z_59 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm v_82 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm u_95 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm q_94 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm s_97 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_94 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm u_89 (ATerm), ATerm v_89 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm f_88 (ATerm), ATerm g_88 (ATerm));
ATerm crush_2 (ATerm, ATerm y_91 (ATerm), ATerm z_91 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm t_95 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_98 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm r_100 (ATerm));
ATerm map_1 (ATerm, ATerm g_82 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm q_100 (ATerm));
ATerm Program_1 (ATerm, ATerm s_73 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm t_73 (ATerm));
ATerm fetch_1 (ATerm, ATerm p_82 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_99 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_74 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm v_100 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_61 (ATerm), ATerm i_61 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm t_100 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_100 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm v_98 (ATerm));
ATerm iowrap_4 (ATerm, ATerm h_98 (ATerm), ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm));
ATerm iowrap_3 (ATerm, ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm d_98 (ATerm));
ATerm iowrap_2 (ATerm, ATerm z_97 (ATerm), ATerm a_98 (ATerm));
ATerm iowrap_1 (ATerm, ATerm w_97 (ATerm));
ATerm main_0 (ATerm);
ATerm Continue_1 (ATerm t, ATerm e_74 (ATerm))
{
  ATerm r_10 = NULL,v_10 = NULL;
  ATerm l_13 (ATerm t)
  {
    ATerm i_12 = NULL,k_12 = NULL;
    ATerm n_13 (ATerm t)
    {
      ATerm z_12 = NULL;
      ATerm a_13 = NULL;
      ATerm r_13 (ATerm t)
      {
        if(((z_12 != NULL) && (z_12 != a_13)))
          _fail(a_13);
        else
          z_12 = a_13;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Continue_1, not_null(k_12)), not_null(i_12));
      {
        a_13 = t;
        t = r_13(t);
      }
      t = not_null(z_12);
      return(t);
    }
    ATerm j_12 = NULL;
    ATerm m_13 (ATerm t)
    {
      if(((i_12 != NULL) && (i_12 != j_12)))
        _fail(j_12);
      else
        i_12 = j_12;
      return(t);
    }
    t = SSLgetAnnotations(not_null(r_10));
    {
      j_12 = t;
      t = m_13(t);
    }
    {
      t = not_null(v_10);
      {
        t = e_74(t);
        {
          k_12 = t;
          t = n_13(t);
        }
      }
    }
    return(t);
  }
  r_10 = t;
  q_10 :
  if(match_cons(r_10, sym_Continue_1))
    {
      v_10 = ATgetArgument(r_10, 0);
      t = l_13(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm f_14 = NULL,g_14 = NULL;
  ATerm f_15 (ATerm t)
  {
    ATerm j_14 = NULL,l_14 = NULL;
    ATerm j_15 (ATerm t)
    {
      ATerm n_14 = NULL;
      ATerm o_14 = NULL;
      ATerm k_15 (ATerm t)
      {
        if(((n_14 != NULL) && (n_14 != o_14)))
          _fail(o_14);
        else
          n_14 = o_14;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_14)), not_null(j_14));
      {
        o_14 = t;
        t = k_15(t);
      }
      t = not_null(n_14);
      return(t);
    }
    ATerm k_14 = NULL;
    ATerm i_15 (ATerm t)
    {
      if(((j_14 != NULL) && (j_14 != k_14)))
        _fail(k_14);
      else
        j_14 = k_14;
      return(t);
    }
    t = SSLgetAnnotations(not_null(f_14));
    {
      k_14 = t;
      t = i_15(t);
    }
    {
      t = not_null(g_14);
      {
        t = q_0(t);
        {
          l_14 = t;
          t = j_15(t);
        }
      }
    }
    return(t);
  }
  ATerm g_15 (ATerm t)
  {
    ATerm r_14 = NULL,t_14 = NULL;
    ATerm m_15 (ATerm t)
    {
      ATerm v_14 = NULL;
      ATerm w_14 = NULL;
      ATerm n_15 (ATerm t)
      {
        if(((v_14 != NULL) && (v_14 != w_14)))
          _fail(w_14);
        else
          v_14 = w_14;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(t_14)), not_null(r_14));
      {
        w_14 = t;
        t = n_15(t);
      }
      t = not_null(v_14);
      return(t);
    }
    ATerm s_14 = NULL;
    ATerm l_15 (ATerm t)
    {
      if(((r_14 != NULL) && (r_14 != s_14)))
        _fail(s_14);
      else
        r_14 = s_14;
      return(t);
    }
    t = SSLgetAnnotations(not_null(f_14));
    {
      s_14 = t;
      t = l_15(t);
    }
    {
      t = not_null(g_14);
      {
        t = q_0(t);
        {
          t_14 = t;
          t = m_15(t);
        }
      }
    }
    return(t);
  }
  ATerm h_15 (ATerm t)
  {
    ATerm z_14 = NULL,b_15 = NULL;
    ATerm p_15 (ATerm t)
    {
      ATerm d_15 = NULL;
      ATerm e_15 = NULL;
      ATerm q_15 (ATerm t)
      {
        if(((d_15 != NULL) && (d_15 != e_15)))
          _fail(e_15);
        else
          d_15 = e_15;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(b_15)), not_null(z_14));
      {
        e_15 = t;
        t = q_15(t);
      }
      t = not_null(d_15);
      return(t);
    }
    ATerm a_15 = NULL;
    ATerm o_15 (ATerm t)
    {
      if(((z_14 != NULL) && (z_14 != a_15)))
        _fail(a_15);
      else
        z_14 = a_15;
      return(t);
    }
    t = SSLgetAnnotations(not_null(f_14));
    {
      a_15 = t;
      t = o_15(t);
    }
    {
      t = not_null(g_14);
      {
        t = q_0(t);
        {
          b_15 = t;
          t = p_15(t);
        }
      }
    }
    return(t);
  }
  f_14 = t;
  e_14 :
  if(match_cons(f_14, sym_Var_1))
    {
      g_14 = ATgetArgument(f_14, 0);
      {
        ATerm q_4 = t;
        int r_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_15(t);
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
                  t = g_15(t);
                  ;
                  LocalPopChoice(t_4);
                }
              else
                {
                  t = s_4;
                  t = h_15(t);
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
ATerm Assign_1 (ATerm t, ATerm h_74 (ATerm))
{
  ATerm w_15 = NULL,x_15 = NULL;
  ATerm g_16 (ATerm t)
  {
    ATerm a_16 = NULL,c_16 = NULL;
    ATerm i_16 (ATerm t)
    {
      ATerm e_16 = NULL;
      ATerm f_16 = NULL;
      ATerm j_16 (ATerm t)
      {
        if(((e_16 != NULL) && (e_16 != f_16)))
          _fail(f_16);
        else
          e_16 = f_16;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_1, not_null(c_16)), not_null(a_16));
      {
        f_16 = t;
        t = j_16(t);
      }
      t = not_null(e_16);
      return(t);
    }
    ATerm b_16 = NULL;
    ATerm h_16 (ATerm t)
    {
      if(((a_16 != NULL) && (a_16 != b_16)))
        _fail(b_16);
      else
        a_16 = b_16;
      return(t);
    }
    t = SSLgetAnnotations(not_null(w_15));
    {
      b_16 = t;
      t = h_16(t);
    }
    {
      t = not_null(x_15);
      {
        t = h_74(t);
        {
          c_16 = t;
          t = i_16(t);
        }
      }
    }
    return(t);
  }
  w_15 = t;
  v_15 :
  if(match_cons(w_15, sym_Assign_1))
    {
      x_15 = ATgetArgument(w_15, 0);
      t = g_16(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm u_4 = t;
  int v_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
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
            t = Var_1(t, is_string_0);
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
                  t = Int_1(t, is_int_0);
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
                        t = Real_1(t, is_real_0);
                        ;
                        LocalPopChoice(b_5);
                      }
                    else
                      {
                        t = a_5;
                        {
                          ATerm c_5 = t;
                          int d_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
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
                                    t = BuildDefault_1(t, term_expression_0);
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
                                          ATerm c_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, c_0, term_expression_0);
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
                                                ATerm e_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, e_0);
                                                ;
                                                LocalPopChoice(j_5);
                                              }
                                            else
                                              {
                                                t = i_5;
                                                {
                                                  ATerm f_0 (ATerm t)
                                                  {
                                                    t = term_k_5;
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
ATerm Assign_2 (ATerm t, ATerm f_74 (ATerm), ATerm g_74 (ATerm))
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
  ATerm f_17 (ATerm t)
  {
    ATerm x_16 = NULL,z_16 = NULL;
    ATerm h_17 (ATerm t)
    {
      ATerm b_17 = NULL;
      ATerm i_17 (ATerm t)
      {
        ATerm d_17 = NULL;
        ATerm e_17 = NULL;
        ATerm j_17 (ATerm t)
        {
          if(((d_17 != NULL) && (d_17 != e_17)))
            _fail(e_17);
          else
            d_17 = e_17;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(z_16), not_null(b_17)), not_null(x_16));
        {
          e_17 = t;
          t = j_17(t);
        }
        t = not_null(d_17);
        return(t);
      }
      t = not_null(t_16);
      {
        t = g_74(t);
        {
          b_17 = t;
          t = i_17(t);
        }
      }
      return(t);
    }
    ATerm y_16 = NULL;
    ATerm g_17 (ATerm t)
    {
      if(((x_16 != NULL) && (x_16 != y_16)))
        _fail(y_16);
      else
        x_16 = y_16;
      return(t);
    }
    t = SSLgetAnnotations(not_null(r_16));
    {
      y_16 = t;
      t = g_17(t);
    }
    {
      t = not_null(s_16);
      {
        t = f_74(t);
        {
          z_16 = t;
          t = h_17(t);
        }
      }
    }
    return(t);
  }
  r_16 = t;
  q_16 :
  if(match_cons(r_16, sym_Assign_2))
    {
      s_16 = ATgetArgument(r_16, 0);
      t_16 = ATgetArgument(r_16, 1);
      t = f_17(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Fun_2 (ATerm t, ATerm i_74 (ATerm), ATerm j_74 (ATerm))
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL;
  ATerm e_18 (ATerm t)
  {
    ATerm w_17 = NULL,y_17 = NULL;
    ATerm g_18 (ATerm t)
    {
      ATerm a_18 = NULL;
      ATerm h_18 (ATerm t)
      {
        ATerm c_18 = NULL;
        ATerm d_18 = NULL;
        ATerm i_18 (ATerm t)
        {
          if(((c_18 != NULL) && (c_18 != d_18)))
            _fail(d_18);
          else
            c_18 = d_18;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fun_2, not_null(y_17), not_null(a_18)), not_null(w_17));
        {
          d_18 = t;
          t = i_18(t);
        }
        t = not_null(c_18);
        return(t);
      }
      t = not_null(s_17);
      {
        t = j_74(t);
        {
          a_18 = t;
          t = h_18(t);
        }
      }
      return(t);
    }
    ATerm x_17 = NULL;
    ATerm f_18 (ATerm t)
    {
      if(((w_17 != NULL) && (w_17 != x_17)))
        _fail(x_17);
      else
        w_17 = x_17;
      return(t);
    }
    t = SSLgetAnnotations(not_null(q_17));
    {
      x_17 = t;
      t = f_18(t);
    }
    {
      t = not_null(r_17);
      {
        t = i_74(t);
        {
          y_17 = t;
          t = g_18(t);
        }
      }
    }
    return(t);
  }
  q_17 = t;
  p_17 :
  if(match_cons(q_17, sym_Fun_2))
    {
      r_17 = ATgetArgument(q_17, 0);
      s_17 = ATgetArgument(q_17, 1);
      t = e_18(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Alt_3 (ATerm t, ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm d_74 (ATerm))
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL;
  ATerm i_19 (ATerm t)
  {
    ATerm y_18 = NULL,a_19 = NULL;
    ATerm k_19 (ATerm t)
    {
      ATerm c_19 = NULL;
      ATerm l_19 (ATerm t)
      {
        ATerm e_19 = NULL;
        ATerm m_19 (ATerm t)
        {
          ATerm g_19 = NULL;
          ATerm h_19 = NULL;
          ATerm n_19 (ATerm t)
          {
            if(((g_19 != NULL) && (g_19 != h_19)))
              _fail(h_19);
            else
              g_19 = h_19;
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Alt_3, not_null(a_19), not_null(c_19), not_null(e_19)), not_null(y_18));
          {
            h_19 = t;
            t = n_19(t);
          }
          t = not_null(g_19);
          return(t);
        }
        t = not_null(t_18);
        {
          t = d_74(t);
          {
            e_19 = t;
            t = m_19(t);
          }
        }
        return(t);
      }
      t = not_null(s_18);
      {
        t = c_74(t);
        {
          c_19 = t;
          t = l_19(t);
        }
      }
      return(t);
    }
    ATerm z_18 = NULL;
    ATerm j_19 (ATerm t)
    {
      if(((y_18 != NULL) && (y_18 != z_18)))
        _fail(z_18);
      else
        y_18 = z_18;
      return(t);
    }
    t = SSLgetAnnotations(not_null(q_18));
    {
      z_18 = t;
      t = j_19(t);
    }
    {
      t = not_null(r_18);
      {
        t = b_74(t);
        {
          a_19 = t;
          t = k_19(t);
        }
      }
    }
    return(t);
  }
  q_18 = t;
  p_18 :
  if(match_cons(q_18, sym_Alt_3))
    {
      r_18 = ATgetArgument(q_18, 0);
      s_18 = ATgetArgument(q_18, 1);
      t_18 = ATgetArgument(q_18, 2);
      t = i_19(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm case_alternative_1 (ATerm t, ATerm s_74 (ATerm))
{
  ATerm l_5 = t;
  int m_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_0 (ATerm t)
      {
        ATerm n_5 = t;
        int o_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fun_2(t, is_string_0, is_int_0);
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
                  t = Str_1(t, is_string_0);
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
                        t = Int_1(t, is_int_0);
                        ;
                        LocalPopChoice(s_5);
                      }
                    else
                      {
                        t = r_5;
                        t = Real_1(t, is_real_0);
                      }
                  }
                }
            }
          }
        return(t);
      }
      ATerm r_0 (ATerm t)
      {
        ATerm s_0 (ATerm t)
        {
          t = Var_1(t, is_string_0);
          return(t);
        }
        t = list_1(t, s_0);
        return(t);
      }
      t = Alt_3(t, h_0, r_0, s_74);
      ;
      LocalPopChoice(m_5);
    }
  else
    {
      t = l_5;
      {
        ATerm t_0 (ATerm t)
        {
          t = term_t_5;
          return(t);
        }
        t = debug_1(t, t_0);
      }
    }
  return(t);
}
ATerm Case_4 (ATerm t, ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm x_73 (ATerm))
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL;
  ATerm s_20 (ATerm t)
  {
    ATerm g_20 = NULL,i_20 = NULL;
    ATerm u_20 (ATerm t)
    {
      ATerm k_20 = NULL;
      ATerm v_20 (ATerm t)
      {
        ATerm m_20 = NULL;
        ATerm w_20 (ATerm t)
        {
          ATerm o_20 = NULL;
          ATerm x_20 (ATerm t)
          {
            ATerm q_20 = NULL;
            ATerm r_20 = NULL;
            ATerm y_20 (ATerm t)
            {
              if(((q_20 != NULL) && (q_20 != r_20)))
                _fail(r_20);
              else
                q_20 = r_20;
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Case_4, not_null(i_20), not_null(k_20), not_null(m_20), not_null(o_20)), not_null(g_20));
            {
              r_20 = t;
              t = y_20(t);
            }
            t = not_null(q_20);
            return(t);
          }
          t = not_null(a_20);
          {
            t = x_73(t);
            {
              o_20 = t;
              t = x_20(t);
            }
          }
          return(t);
        }
        t = not_null(z_19);
        {
          t = w_73(t);
          {
            m_20 = t;
            t = w_20(t);
          }
        }
        return(t);
      }
      t = not_null(y_19);
      {
        t = v_73(t);
        {
          k_20 = t;
          t = v_20(t);
        }
      }
      return(t);
    }
    ATerm h_20 = NULL;
    ATerm t_20 (ATerm t)
    {
      if(((g_20 != NULL) && (g_20 != h_20)))
        _fail(h_20);
      else
        g_20 = h_20;
      return(t);
    }
    t = SSLgetAnnotations(not_null(w_19));
    {
      h_20 = t;
      t = t_20(t);
    }
    {
      t = not_null(x_19);
      {
        t = u_73(t);
        {
          i_20 = t;
          t = u_20(t);
        }
      }
    }
    return(t);
  }
  w_19 = t;
  v_19 :
  if(match_cons(w_19, sym_Case_4))
    {
      x_19 = ATgetArgument(w_19, 0);
      y_19 = ATgetArgument(w_19, 1);
      z_19 = ATgetArgument(w_19, 2);
      a_20 = ATgetArgument(w_19, 3);
      t = s_20(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2 (ATerm t, ATerm l_65 (ATerm), ATerm m_65 (ATerm))
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
  ATerm t_21 (ATerm t)
  {
    ATerm l_21 = NULL,n_21 = NULL;
    ATerm v_21 (ATerm t)
    {
      ATerm p_21 = NULL;
      ATerm w_21 (ATerm t)
      {
        ATerm r_21 = NULL;
        ATerm s_21 = NULL;
        ATerm x_21 (ATerm t)
        {
          if(((r_21 != NULL) && (r_21 != s_21)))
            _fail(s_21);
          else
            r_21 = s_21;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(n_21), not_null(p_21)), not_null(l_21));
        {
          s_21 = t;
          t = x_21(t);
        }
        t = not_null(r_21);
        return(t);
      }
      t = not_null(h_21);
      {
        t = m_65(t);
        {
          p_21 = t;
          t = w_21(t);
        }
      }
      return(t);
    }
    ATerm m_21 = NULL;
    ATerm u_21 (ATerm t)
    {
      if(((l_21 != NULL) && (l_21 != m_21)))
        _fail(m_21);
      else
        l_21 = m_21;
      return(t);
    }
    t = SSLgetAnnotations(not_null(f_21));
    {
      m_21 = t;
      t = u_21(t);
    }
    {
      t = not_null(g_21);
      {
        t = l_65(t);
        {
          n_21 = t;
          t = v_21(t);
        }
      }
    }
    return(t);
  }
  f_21 = t;
  e_21 :
  if(match_cons(f_21, sym_Let_2))
    {
      g_21 = ATgetArgument(f_21, 0);
      h_21 = ATgetArgument(f_21, 1);
      t = t_21(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm p_66 (ATerm), ATerm q_66 (ATerm))
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
  ATerm s_22 (ATerm t)
  {
    ATerm k_22 = NULL,m_22 = NULL;
    ATerm u_22 (ATerm t)
    {
      ATerm o_22 = NULL;
      ATerm v_22 (ATerm t)
      {
        ATerm q_22 = NULL;
        ATerm r_22 = NULL;
        ATerm w_22 (ATerm t)
        {
          if(((q_22 != NULL) && (q_22 != r_22)))
            _fail(r_22);
          else
            q_22 = r_22;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(m_22), not_null(o_22)), not_null(k_22));
        {
          r_22 = t;
          t = w_22(t);
        }
        t = not_null(q_22);
        return(t);
      }
      t = not_null(g_22);
      {
        t = q_66(t);
        {
          o_22 = t;
          t = v_22(t);
        }
      }
      return(t);
    }
    ATerm l_22 = NULL;
    ATerm t_22 (ATerm t)
    {
      if(((k_22 != NULL) && (k_22 != l_22)))
        _fail(l_22);
      else
        k_22 = l_22;
      return(t);
    }
    t = SSLgetAnnotations(not_null(e_22));
    {
      l_22 = t;
      t = t_22(t);
    }
    {
      t = not_null(f_22);
      {
        t = p_66(t);
        {
          m_22 = t;
          t = u_22(t);
        }
      }
    }
    return(t);
  }
  e_22 = t;
  d_22 :
  if(match_cons(e_22, sym_Prim_2))
    {
      f_22 = ATgetArgument(e_22, 0);
      g_22 = ATgetArgument(e_22, 1);
      t = s_22(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Where_1 (ATerm t, ATerm l_66 (ATerm))
{
  ATerm c_23 = NULL,d_23 = NULL;
  ATerm m_23 (ATerm t)
  {
    ATerm g_23 = NULL,i_23 = NULL;
    ATerm o_23 (ATerm t)
    {
      ATerm k_23 = NULL;
      ATerm l_23 = NULL;
      ATerm p_23 (ATerm t)
      {
        if(((k_23 != NULL) && (k_23 != l_23)))
          _fail(l_23);
        else
          k_23 = l_23;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(i_23)), not_null(g_23));
      {
        l_23 = t;
        t = p_23(t);
      }
      t = not_null(k_23);
      return(t);
    }
    ATerm h_23 = NULL;
    ATerm n_23 (ATerm t)
    {
      if(((g_23 != NULL) && (g_23 != h_23)))
        _fail(h_23);
      else
        g_23 = h_23;
      return(t);
    }
    t = SSLgetAnnotations(not_null(c_23));
    {
      h_23 = t;
      t = n_23(t);
    }
    {
      t = not_null(d_23);
      {
        t = l_66(t);
        {
          i_23 = t;
          t = o_23(t);
        }
      }
    }
    return(t);
  }
  c_23 = t;
  b_23 :
  if(match_cons(c_23, sym_Where_1))
    {
      d_23 = ATgetArgument(c_23, 0);
      t = m_23(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm v_65 (ATerm), ATerm w_65 (ATerm))
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
  ATerm k_24 (ATerm t)
  {
    ATerm c_24 = NULL,e_24 = NULL;
    ATerm m_24 (ATerm t)
    {
      ATerm g_24 = NULL;
      ATerm n_24 (ATerm t)
      {
        ATerm i_24 = NULL;
        ATerm j_24 = NULL;
        ATerm o_24 (ATerm t)
        {
          if(((i_24 != NULL) && (i_24 != j_24)))
            _fail(j_24);
          else
            i_24 = j_24;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(e_24), not_null(g_24)), not_null(c_24));
        {
          j_24 = t;
          t = o_24(t);
        }
        t = not_null(i_24);
        return(t);
      }
      t = not_null(y_23);
      {
        t = w_65(t);
        {
          g_24 = t;
          t = n_24(t);
        }
      }
      return(t);
    }
    ATerm d_24 = NULL;
    ATerm l_24 (ATerm t)
    {
      if(((c_24 != NULL) && (c_24 != d_24)))
        _fail(d_24);
      else
        c_24 = d_24;
      return(t);
    }
    t = SSLgetAnnotations(not_null(w_23));
    {
      d_24 = t;
      t = l_24(t);
    }
    {
      t = not_null(x_23);
      {
        t = v_65(t);
        {
          e_24 = t;
          t = m_24(t);
        }
      }
    }
    return(t);
  }
  w_23 = t;
  v_23 :
  if(match_cons(w_23, sym_Scope_2))
    {
      x_23 = ATgetArgument(w_23, 0);
      y_23 = ATgetArgument(w_23, 1);
      t = k_24(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Build_1 (ATerm t, ATerm t_65 (ATerm))
{
  ATerm u_24 = NULL,v_24 = NULL;
  ATerm e_25 (ATerm t)
  {
    ATerm y_24 = NULL,a_25 = NULL;
    ATerm g_25 (ATerm t)
    {
      ATerm c_25 = NULL;
      ATerm d_25 = NULL;
      ATerm h_25 (ATerm t)
      {
        if(((c_25 != NULL) && (c_25 != d_25)))
          _fail(d_25);
        else
          c_25 = d_25;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(a_25)), not_null(y_24));
      {
        d_25 = t;
        t = h_25(t);
      }
      t = not_null(c_25);
      return(t);
    }
    ATerm z_24 = NULL;
    ATerm f_25 (ATerm t)
    {
      if(((y_24 != NULL) && (y_24 != z_24)))
        _fail(z_24);
      else
        y_24 = z_24;
      return(t);
    }
    t = SSLgetAnnotations(not_null(u_24));
    {
      z_24 = t;
      t = f_25(t);
    }
    {
      t = not_null(v_24);
      {
        t = t_65(t);
        {
          a_25 = t;
          t = g_25(t);
        }
      }
    }
    return(t);
  }
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym_Build_1))
    {
      v_24 = ATgetArgument(u_24, 0);
      t = e_25(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm r_62 (ATerm), ATerm s_62 (ATerm))
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
  ATerm c_26 (ATerm t)
  {
    ATerm u_25 = NULL,w_25 = NULL;
    ATerm e_26 (ATerm t)
    {
      ATerm y_25 = NULL;
      ATerm f_26 (ATerm t)
      {
        ATerm a_26 = NULL;
        ATerm b_26 = NULL;
        ATerm g_26 (ATerm t)
        {
          if(((a_26 != NULL) && (a_26 != b_26)))
            _fail(b_26);
          else
            a_26 = b_26;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(w_25), not_null(y_25)), not_null(u_25));
        {
          b_26 = t;
          t = g_26(t);
        }
        t = not_null(a_26);
        return(t);
      }
      t = not_null(q_25);
      {
        t = s_62(t);
        {
          y_25 = t;
          t = f_26(t);
        }
      }
      return(t);
    }
    ATerm v_25 = NULL;
    ATerm d_26 (ATerm t)
    {
      if(((u_25 != NULL) && (u_25 != v_25)))
        _fail(v_25);
      else
        u_25 = v_25;
      return(t);
    }
    t = SSLgetAnnotations(not_null(o_25));
    {
      v_25 = t;
      t = d_26(t);
    }
    {
      t = not_null(p_25);
      {
        t = r_62(t);
        {
          w_25 = t;
          t = e_26(t);
        }
      }
    }
    return(t);
  }
  o_25 = t;
  n_25 :
  if(match_cons(o_25, sym_Op_2))
    {
      p_25 = ATgetArgument(o_25, 0);
      q_25 = ATgetArgument(o_25, 1);
      t = c_26(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm As_2 (ATerm t, ATerm a_63 (ATerm), ATerm b_63 (ATerm))
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL;
  ATerm b_27 (ATerm t)
  {
    ATerm t_26 = NULL,v_26 = NULL;
    ATerm d_27 (ATerm t)
    {
      ATerm x_26 = NULL;
      ATerm e_27 (ATerm t)
      {
        ATerm z_26 = NULL;
        ATerm a_27 = NULL;
        ATerm f_27 (ATerm t)
        {
          if(((z_26 != NULL) && (z_26 != a_27)))
            _fail(a_27);
          else
            z_26 = a_27;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(v_26), not_null(x_26)), not_null(t_26));
        {
          a_27 = t;
          t = f_27(t);
        }
        t = not_null(z_26);
        return(t);
      }
      t = not_null(p_26);
      {
        t = b_63(t);
        {
          x_26 = t;
          t = e_27(t);
        }
      }
      return(t);
    }
    ATerm u_26 = NULL;
    ATerm c_27 (ATerm t)
    {
      if(((t_26 != NULL) && (t_26 != u_26)))
        _fail(u_26);
      else
        t_26 = u_26;
      return(t);
    }
    t = SSLgetAnnotations(not_null(n_26));
    {
      u_26 = t;
      t = c_27(t);
    }
    {
      t = not_null(o_26);
      {
        t = a_63(t);
        {
          v_26 = t;
          t = d_27(t);
        }
      }
    }
    return(t);
  }
  n_26 = t;
  m_26 :
  if(match_cons(n_26, sym_As_2))
    {
      o_26 = ATgetArgument(n_26, 0);
      p_26 = ATgetArgument(n_26, 1);
      t = b_27(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm g_63 (ATerm))
{
  ATerm l_27 = NULL,m_27 = NULL;
  ATerm a_28 (ATerm t)
  {
    ATerm p_27 = NULL,w_27 = NULL;
    ATerm c_28 (ATerm t)
    {
      ATerm y_27 = NULL;
      ATerm z_27 = NULL;
      ATerm d_28 (ATerm t)
      {
        if(((y_27 != NULL) && (y_27 != z_27)))
          _fail(z_27);
        else
          y_27 = z_27;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(w_27)), not_null(p_27));
      {
        z_27 = t;
        t = d_28(t);
      }
      t = not_null(y_27);
      return(t);
    }
    ATerm q_27 = NULL;
    ATerm b_28 (ATerm t)
    {
      if(((p_27 != NULL) && (p_27 != q_27)))
        _fail(q_27);
      else
        p_27 = q_27;
      return(t);
    }
    t = SSLgetAnnotations(not_null(l_27));
    {
      q_27 = t;
      t = b_28(t);
    }
    {
      t = not_null(m_27);
      {
        t = g_63(t);
        {
          w_27 = t;
          t = c_28(t);
        }
      }
    }
    return(t);
  }
  l_27 = t;
  k_27 :
  if(match_cons(l_27, sym_BuildDefault_1))
    {
      m_27 = ATgetArgument(l_27, 0);
      t = a_28(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Str_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm q_28 = NULL,r_28 = NULL;
  ATerm i_29 (ATerm t)
  {
    ATerm u_28 = NULL,w_28 = NULL;
    ATerm l_29 (ATerm t)
    {
      ATerm y_28 = NULL;
      ATerm z_28 = NULL;
      ATerm m_29 (ATerm t)
      {
        if(((y_28 != NULL) && (y_28 != z_28)))
          _fail(z_28);
        else
          y_28 = z_28;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(w_28)), not_null(u_28));
      {
        z_28 = t;
        t = m_29(t);
      }
      t = not_null(y_28);
      return(t);
    }
    ATerm v_28 = NULL;
    ATerm k_29 (ATerm t)
    {
      if(((u_28 != NULL) && (u_28 != v_28)))
        _fail(v_28);
      else
        u_28 = v_28;
      return(t);
    }
    t = SSLgetAnnotations(not_null(q_28));
    {
      v_28 = t;
      t = k_29(t);
    }
    {
      t = not_null(r_28);
      {
        t = p_0(t);
        {
          w_28 = t;
          t = l_29(t);
        }
      }
    }
    return(t);
  }
  ATerm j_29 (ATerm t)
  {
    ATerm c_29 = NULL,e_29 = NULL;
    ATerm o_29 (ATerm t)
    {
      ATerm g_29 = NULL;
      ATerm h_29 = NULL;
      ATerm p_29 (ATerm t)
      {
        if(((g_29 != NULL) && (g_29 != h_29)))
          _fail(h_29);
        else
          g_29 = h_29;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(e_29)), not_null(c_29));
      {
        h_29 = t;
        t = p_29(t);
      }
      t = not_null(g_29);
      return(t);
    }
    ATerm d_29 = NULL;
    ATerm n_29 (ATerm t)
    {
      if(((c_29 != NULL) && (c_29 != d_29)))
        _fail(d_29);
      else
        c_29 = d_29;
      return(t);
    }
    t = SSLgetAnnotations(not_null(q_28));
    {
      d_29 = t;
      t = n_29(t);
    }
    {
      t = not_null(r_28);
      {
        t = p_0(t);
        {
          e_29 = t;
          t = o_29(t);
        }
      }
    }
    return(t);
  }
  q_28 = t;
  p_28 :
  if(match_cons(q_28, sym_Str_1))
    {
      r_28 = ATgetArgument(q_28, 0);
      {
        ATerm u_5 = t;
        int v_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_29(t);
            ;
            LocalPopChoice(v_5);
          }
        else
          {
            t = u_5;
            t = j_29(t);
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
  ATerm r_29 = NULL;
  ATerm t_29 (ATerm t)
  {
    t = SSL_is_real(not_null(r_29));
    return(t);
  }
  r_29 = t;
  t = t_29(t);
  return(t);
}
ATerm Real_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm d_30 = NULL,e_30 = NULL;
  ATerm v_30 (ATerm t)
  {
    ATerm h_30 = NULL,j_30 = NULL;
    ATerm y_30 (ATerm t)
    {
      ATerm l_30 = NULL;
      ATerm m_30 = NULL;
      ATerm z_30 (ATerm t)
      {
        if(((l_30 != NULL) && (l_30 != m_30)))
          _fail(m_30);
        else
          l_30 = m_30;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(j_30)), not_null(h_30));
      {
        m_30 = t;
        t = z_30(t);
      }
      t = not_null(l_30);
      return(t);
    }
    ATerm i_30 = NULL;
    ATerm x_30 (ATerm t)
    {
      if(((h_30 != NULL) && (h_30 != i_30)))
        _fail(i_30);
      else
        h_30 = i_30;
      return(t);
    }
    t = SSLgetAnnotations(not_null(d_30));
    {
      i_30 = t;
      t = x_30(t);
    }
    {
      t = not_null(e_30);
      {
        t = o_0(t);
        {
          j_30 = t;
          t = y_30(t);
        }
      }
    }
    return(t);
  }
  ATerm w_30 (ATerm t)
  {
    ATerm p_30 = NULL,r_30 = NULL;
    ATerm b_31 (ATerm t)
    {
      ATerm t_30 = NULL;
      ATerm u_30 = NULL;
      ATerm c_31 (ATerm t)
      {
        if(((t_30 != NULL) && (t_30 != u_30)))
          _fail(u_30);
        else
          t_30 = u_30;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(r_30)), not_null(p_30));
      {
        u_30 = t;
        t = c_31(t);
      }
      t = not_null(t_30);
      return(t);
    }
    ATerm q_30 = NULL;
    ATerm a_31 (ATerm t)
    {
      if(((p_30 != NULL) && (p_30 != q_30)))
        _fail(q_30);
      else
        p_30 = q_30;
      return(t);
    }
    t = SSLgetAnnotations(not_null(d_30));
    {
      q_30 = t;
      t = a_31(t);
    }
    {
      t = not_null(e_30);
      {
        t = o_0(t);
        {
          r_30 = t;
          t = b_31(t);
        }
      }
    }
    return(t);
  }
  d_30 = t;
  c_30 :
  if(match_cons(d_30, sym_Real_1))
    {
      e_30 = ATgetArgument(d_30, 0);
      {
        ATerm w_5 = t;
        int x_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_30(t);
            ;
            LocalPopChoice(x_5);
          }
        else
          {
            t = w_5;
            t = w_30(t);
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
  ATerm m_31 = NULL,n_31 = NULL;
  ATerm e_32 (ATerm t)
  {
    ATerm q_31 = NULL,s_31 = NULL;
    ATerm h_32 (ATerm t)
    {
      ATerm u_31 = NULL;
      ATerm v_31 = NULL;
      ATerm i_32 (ATerm t)
      {
        if(((u_31 != NULL) && (u_31 != v_31)))
          _fail(v_31);
        else
          u_31 = v_31;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(s_31)), not_null(q_31));
      {
        v_31 = t;
        t = i_32(t);
      }
      t = not_null(u_31);
      return(t);
    }
    ATerm r_31 = NULL;
    ATerm g_32 (ATerm t)
    {
      if(((q_31 != NULL) && (q_31 != r_31)))
        _fail(r_31);
      else
        q_31 = r_31;
      return(t);
    }
    t = SSLgetAnnotations(not_null(m_31));
    {
      r_31 = t;
      t = g_32(t);
    }
    {
      t = not_null(n_31);
      {
        t = n_0(t);
        {
          s_31 = t;
          t = h_32(t);
        }
      }
    }
    return(t);
  }
  ATerm f_32 (ATerm t)
  {
    ATerm y_31 = NULL,a_32 = NULL;
    ATerm k_32 (ATerm t)
    {
      ATerm c_32 = NULL;
      ATerm d_32 = NULL;
      ATerm l_32 (ATerm t)
      {
        if(((c_32 != NULL) && (c_32 != d_32)))
          _fail(d_32);
        else
          c_32 = d_32;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(a_32)), not_null(y_31));
      {
        d_32 = t;
        t = l_32(t);
      }
      t = not_null(c_32);
      return(t);
    }
    ATerm z_31 = NULL;
    ATerm j_32 (ATerm t)
    {
      if(((y_31 != NULL) && (y_31 != z_31)))
        _fail(z_31);
      else
        y_31 = z_31;
      return(t);
    }
    t = SSLgetAnnotations(not_null(m_31));
    {
      z_31 = t;
      t = j_32(t);
    }
    {
      t = not_null(n_31);
      {
        t = n_0(t);
        {
          a_32 = t;
          t = k_32(t);
        }
      }
    }
    return(t);
  }
  m_31 = t;
  l_31 :
  if(match_cons(m_31, sym_Int_1))
    {
      n_31 = ATgetArgument(m_31, 0);
      {
        ATerm y_5 = t;
        int z_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_32(t);
            ;
            LocalPopChoice(z_5);
          }
        else
          {
            t = y_5;
            t = f_32(t);
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
  ATerm q_32 = NULL;
  ATerm w_32 (ATerm t)
  {
    ATerm s_32 = NULL,u_32 = NULL;
    ATerm a_6;
    a_6 = t;
    {
      ATerm t_32 = NULL;
      ATerm x_32 (ATerm t)
      {
        if(((s_32 != NULL) && (s_32 != t_32)))
          _fail(t_32);
        else
          s_32 = t_32;
        return(t);
      }
      t = SSLgetAnnotations(not_null(q_32));
      {
        t_32 = t;
        t = x_32(t);
      }
    }
    t = a_6;
    {
      ATerm v_32 = NULL;
      ATerm y_32 (ATerm t)
      {
        if(((u_32 != NULL) && (u_32 != v_32)))
          _fail(v_32);
        else
          u_32 = v_32;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(s_32));
      {
        v_32 = t;
        t = y_32(t);
      }
      t = not_null(u_32);
    }
    return(t);
  }
  q_32 = t;
  p_32 :
  if(match_cons(q_32, sym_Wld_0))
    {
      t = w_32(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm match_term_exp_0 (ATerm t)
{
  ATerm b_6 = t;
  int c_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
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
            t = Var_1(t, is_string_0);
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
                  t = Int_1(t, is_int_0);
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
                        t = Real_1(t, is_real_0);
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
                              t = Str_1(t, is_string_0);
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
                                    t = BuildDefault_1(t, match_term_exp_0);
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
                                          ATerm u_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, u_0, match_term_exp_0);
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
                                                ATerm v_0 (ATerm t)
                                                {
                                                  t = list_1(t, match_term_exp_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, v_0);
                                                ;
                                                LocalPopChoice(q_6);
                                              }
                                            else
                                              {
                                                t = p_6;
                                                {
                                                  ATerm w_0 (ATerm t)
                                                  {
                                                    t = term_r_6;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, w_0);
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Match_1 (ATerm t, ATerm s_65 (ATerm))
{
  ATerm f_33 = NULL,g_33 = NULL;
  ATerm p_33 (ATerm t)
  {
    ATerm j_33 = NULL,l_33 = NULL;
    ATerm r_33 (ATerm t)
    {
      ATerm n_33 = NULL;
      ATerm o_33 = NULL;
      ATerm s_33 (ATerm t)
      {
        if(((n_33 != NULL) && (n_33 != o_33)))
          _fail(o_33);
        else
          n_33 = o_33;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(l_33)), not_null(j_33));
      {
        o_33 = t;
        t = s_33(t);
      }
      t = not_null(n_33);
      return(t);
    }
    ATerm k_33 = NULL;
    ATerm q_33 (ATerm t)
    {
      if(((j_33 != NULL) && (j_33 != k_33)))
        _fail(k_33);
      else
        j_33 = k_33;
      return(t);
    }
    t = SSLgetAnnotations(not_null(f_33));
    {
      k_33 = t;
      t = q_33(t);
    }
    {
      t = not_null(g_33);
      {
        t = s_65(t);
        {
          l_33 = t;
          t = r_33(t);
        }
      }
    }
    return(t);
  }
  f_33 = t;
  e_33 :
  if(match_cons(f_33, sym_Match_1))
    {
      g_33 = ATgetArgument(f_33, 0);
      t = p_33(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm b_67 (ATerm))
{
  ATerm a_34 = NULL,b_34 = NULL;
  ATerm k_34 (ATerm t)
  {
    ATerm e_34 = NULL,g_34 = NULL;
    ATerm m_34 (ATerm t)
    {
      ATerm i_34 = NULL;
      ATerm j_34 = NULL;
      ATerm n_34 (ATerm t)
      {
        if(((i_34 != NULL) && (i_34 != j_34)))
          _fail(j_34);
        else
          i_34 = j_34;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(g_34)), not_null(e_34));
      {
        j_34 = t;
        t = n_34(t);
      }
      t = not_null(i_34);
      return(t);
    }
    ATerm f_34 = NULL;
    ATerm l_34 (ATerm t)
    {
      if(((e_34 != NULL) && (e_34 != f_34)))
        _fail(f_34);
      else
        e_34 = f_34;
      return(t);
    }
    t = SSLgetAnnotations(not_null(a_34));
    {
      f_34 = t;
      t = l_34(t);
    }
    {
      t = not_null(b_34);
      {
        t = b_67(t);
        {
          g_34 = t;
          t = m_34(t);
        }
      }
    }
    return(t);
  }
  a_34 = t;
  x_33 :
  if(match_cons(a_34, sym_Thread_1))
    {
      b_34 = ATgetArgument(a_34, 0);
      t = k_34(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm All_1 (ATerm t, ATerm a_67 (ATerm))
{
  ATerm t_34 = NULL,u_34 = NULL;
  ATerm d_35 (ATerm t)
  {
    ATerm x_34 = NULL,z_34 = NULL;
    ATerm f_35 (ATerm t)
    {
      ATerm b_35 = NULL;
      ATerm c_35 = NULL;
      ATerm g_35 (ATerm t)
      {
        if(((b_35 != NULL) && (b_35 != c_35)))
          _fail(c_35);
        else
          b_35 = c_35;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(z_34)), not_null(x_34));
      {
        c_35 = t;
        t = g_35(t);
      }
      t = not_null(b_35);
      return(t);
    }
    ATerm y_34 = NULL;
    ATerm e_35 (ATerm t)
    {
      if(((x_34 != NULL) && (x_34 != y_34)))
        _fail(y_34);
      else
        x_34 = y_34;
      return(t);
    }
    t = SSLgetAnnotations(not_null(t_34));
    {
      y_34 = t;
      t = e_35(t);
    }
    {
      t = not_null(u_34);
      {
        t = a_67(t);
        {
          z_34 = t;
          t = f_35(t);
        }
      }
    }
    return(t);
  }
  t_34 = t;
  s_34 :
  if(match_cons(t_34, sym_All_1))
    {
      u_34 = ATgetArgument(t_34, 0);
      t = d_35(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Some_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm s_35 = NULL,t_35 = NULL;
  ATerm k_36 (ATerm t)
  {
    ATerm w_35 = NULL,y_35 = NULL;
    ATerm n_36 (ATerm t)
    {
      ATerm a_36 = NULL;
      ATerm b_36 = NULL;
      ATerm o_36 (ATerm t)
      {
        if(((a_36 != NULL) && (a_36 != b_36)))
          _fail(b_36);
        else
          a_36 = b_36;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(y_35)), not_null(w_35));
      {
        b_36 = t;
        t = o_36(t);
      }
      t = not_null(a_36);
      return(t);
    }
    ATerm x_35 = NULL;
    ATerm m_36 (ATerm t)
    {
      if(((w_35 != NULL) && (w_35 != x_35)))
        _fail(x_35);
      else
        w_35 = x_35;
      return(t);
    }
    t = SSLgetAnnotations(not_null(s_35));
    {
      x_35 = t;
      t = m_36(t);
    }
    {
      t = not_null(t_35);
      {
        t = m_0(t);
        {
          y_35 = t;
          t = n_36(t);
        }
      }
    }
    return(t);
  }
  ATerm l_36 (ATerm t)
  {
    ATerm e_36 = NULL,g_36 = NULL;
    ATerm q_36 (ATerm t)
    {
      ATerm i_36 = NULL;
      ATerm j_36 = NULL;
      ATerm r_36 (ATerm t)
      {
        if(((i_36 != NULL) && (i_36 != j_36)))
          _fail(j_36);
        else
          i_36 = j_36;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(g_36)), not_null(e_36));
      {
        j_36 = t;
        t = r_36(t);
      }
      t = not_null(i_36);
      return(t);
    }
    ATerm f_36 = NULL;
    ATerm p_36 (ATerm t)
    {
      if(((e_36 != NULL) && (e_36 != f_36)))
        _fail(f_36);
      else
        e_36 = f_36;
      return(t);
    }
    t = SSLgetAnnotations(not_null(s_35));
    {
      f_36 = t;
      t = p_36(t);
    }
    {
      t = not_null(t_35);
      {
        t = m_0(t);
        {
          g_36 = t;
          t = q_36(t);
        }
      }
    }
    return(t);
  }
  s_35 = t;
  r_35 :
  if(match_cons(s_35, sym_Some_1))
    {
      t_35 = ATgetArgument(s_35, 0);
      {
        ATerm s_6 = t;
        int t_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_36(t);
            ;
            LocalPopChoice(t_6);
          }
        else
          {
            t = s_6;
            t = l_36(t);
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm One_1 (ATerm t, ATerm z_66 (ATerm))
{
  ATerm x_36 = NULL,y_36 = NULL;
  ATerm h_37 (ATerm t)
  {
    ATerm b_37 = NULL,d_37 = NULL;
    ATerm j_37 (ATerm t)
    {
      ATerm f_37 = NULL;
      ATerm g_37 = NULL;
      ATerm k_37 (ATerm t)
      {
        if(((f_37 != NULL) && (f_37 != g_37)))
          _fail(g_37);
        else
          f_37 = g_37;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(d_37)), not_null(b_37));
      {
        g_37 = t;
        t = k_37(t);
      }
      t = not_null(f_37);
      return(t);
    }
    ATerm c_37 = NULL;
    ATerm i_37 (ATerm t)
    {
      if(((b_37 != NULL) && (b_37 != c_37)))
        _fail(c_37);
      else
        b_37 = c_37;
      return(t);
    }
    t = SSLgetAnnotations(not_null(x_36));
    {
      c_37 = t;
      t = i_37(t);
    }
    {
      t = not_null(y_36);
      {
        t = z_66(t);
        {
          d_37 = t;
          t = j_37(t);
        }
      }
    }
    return(t);
  }
  x_36 = t;
  w_36 :
  if(match_cons(x_36, sym_One_1))
    {
      y_36 = ATgetArgument(x_36, 0);
      t = h_37(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm l_61 (ATerm), ATerm m_61 (ATerm))
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL;
  ATerm f_38 (ATerm t)
  {
    ATerm x_37 = NULL,z_37 = NULL;
    ATerm h_38 (ATerm t)
    {
      ATerm b_38 = NULL;
      ATerm i_38 (ATerm t)
      {
        ATerm d_38 = NULL;
        ATerm e_38 = NULL;
        ATerm j_38 (ATerm t)
        {
          if(((d_38 != NULL) && (d_38 != e_38)))
            _fail(e_38);
          else
            d_38 = e_38;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(z_37), not_null(b_38)), not_null(x_37));
        {
          e_38 = t;
          t = j_38(t);
        }
        t = not_null(d_38);
        return(t);
      }
      t = not_null(t_37);
      {
        t = m_61(t);
        {
          b_38 = t;
          t = i_38(t);
        }
      }
      return(t);
    }
    ATerm y_37 = NULL;
    ATerm g_38 (ATerm t)
    {
      if(((x_37 != NULL) && (x_37 != y_37)))
        _fail(y_37);
      else
        x_37 = y_37;
      return(t);
    }
    t = SSLgetAnnotations(not_null(r_37));
    {
      y_37 = t;
      t = g_38(t);
    }
    {
      t = not_null(s_37);
      {
        t = l_61(t);
        {
          z_37 = t;
          t = h_38(t);
        }
      }
    }
    return(t);
  }
  r_37 = t;
  q_37 :
  if(match_cons(r_37, sym_Cong_2))
    {
      s_37 = ATgetArgument(r_37, 0);
      t_37 = ATgetArgument(r_37, 1);
      t = f_38(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm l_38 = NULL;
  ATerm n_38 (ATerm t)
  {
    t = SSL_is_int(not_null(l_38));
    return(t);
  }
  l_38 = t;
  t = n_38(t);
  return(t);
}
ATerm Path_2 (ATerm t, ATerm w_66 (ATerm), ATerm x_66 (ATerm))
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
  ATerm i_39 (ATerm t)
  {
    ATerm a_39 = NULL,c_39 = NULL;
    ATerm k_39 (ATerm t)
    {
      ATerm e_39 = NULL;
      ATerm l_39 (ATerm t)
      {
        ATerm g_39 = NULL;
        ATerm h_39 = NULL;
        ATerm m_39 (ATerm t)
        {
          if(((g_39 != NULL) && (g_39 != h_39)))
            _fail(h_39);
          else
            g_39 = h_39;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(c_39), not_null(e_39)), not_null(a_39));
        {
          h_39 = t;
          t = m_39(t);
        }
        t = not_null(g_39);
        return(t);
      }
      t = not_null(w_38);
      {
        t = x_66(t);
        {
          e_39 = t;
          t = l_39(t);
        }
      }
      return(t);
    }
    ATerm b_39 = NULL;
    ATerm j_39 (ATerm t)
    {
      if(((a_39 != NULL) && (a_39 != b_39)))
        _fail(b_39);
      else
        a_39 = b_39;
      return(t);
    }
    t = SSLgetAnnotations(not_null(u_38));
    {
      b_39 = t;
      t = j_39(t);
    }
    {
      t = not_null(v_38);
      {
        t = w_66(t);
        {
          c_39 = t;
          t = k_39(t);
        }
      }
    }
    return(t);
  }
  u_38 = t;
  t_38 :
  if(match_cons(u_38, sym_Path_2))
    {
      v_38 = ATgetArgument(u_38, 0);
      w_38 = ATgetArgument(u_38, 1);
      t = i_39(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm i_66 (ATerm), ATerm j_66 (ATerm))
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL;
  ATerm h_40 (ATerm t)
  {
    ATerm z_39 = NULL,b_40 = NULL;
    ATerm j_40 (ATerm t)
    {
      ATerm d_40 = NULL;
      ATerm k_40 (ATerm t)
      {
        ATerm f_40 = NULL;
        ATerm g_40 = NULL;
        ATerm l_40 (ATerm t)
        {
          if(((f_40 != NULL) && (f_40 != g_40)))
            _fail(g_40);
          else
            f_40 = g_40;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(b_40), not_null(d_40)), not_null(z_39));
        {
          g_40 = t;
          t = l_40(t);
        }
        t = not_null(f_40);
        return(t);
      }
      t = not_null(v_39);
      {
        t = j_66(t);
        {
          d_40 = t;
          t = k_40(t);
        }
      }
      return(t);
    }
    ATerm a_40 = NULL;
    ATerm i_40 (ATerm t)
    {
      if(((z_39 != NULL) && (z_39 != a_40)))
        _fail(a_40);
      else
        z_39 = a_40;
      return(t);
    }
    t = SSLgetAnnotations(not_null(t_39));
    {
      a_40 = t;
      t = i_40(t);
    }
    {
      t = not_null(u_39);
      {
        t = i_66(t);
        {
          b_40 = t;
          t = j_40(t);
        }
      }
    }
    return(t);
  }
  t_39 = t;
  s_39 :
  if(match_cons(t_39, sym_Rec_2))
    {
      u_39 = ATgetArgument(t_39, 0);
      v_39 = ATgetArgument(t_39, 1);
      t = h_40(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm k_65 (ATerm))
{
  ATerm v_40 = NULL,w_40 = NULL;
  ATerm f_41 (ATerm t)
  {
    ATerm z_40 = NULL,b_41 = NULL;
    ATerm h_41 (ATerm t)
    {
      ATerm d_41 = NULL;
      ATerm e_41 = NULL;
      ATerm i_41 (ATerm t)
      {
        if(((d_41 != NULL) && (d_41 != e_41)))
          _fail(e_41);
        else
          d_41 = e_41;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(b_41)), not_null(z_40));
      {
        e_41 = t;
        t = i_41(t);
      }
      t = not_null(d_41);
      return(t);
    }
    ATerm a_41 = NULL;
    ATerm g_41 (ATerm t)
    {
      if(((z_40 != NULL) && (z_40 != a_41)))
        _fail(a_41);
      else
        z_40 = a_41;
      return(t);
    }
    t = SSLgetAnnotations(not_null(v_40));
    {
      a_41 = t;
      t = g_41(t);
    }
    {
      t = not_null(w_40);
      {
        t = k_65(t);
        {
          b_41 = t;
          t = h_41(t);
        }
      }
    }
    return(t);
  }
  v_40 = t;
  u_40 :
  if(match_cons(v_40, sym_SVar_1))
    {
      w_40 = ATgetArgument(v_40, 0);
      t = f_41(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Call_2 (ATerm t, ATerm n_65 (ATerm), ATerm o_65 (ATerm))
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL;
  ATerm d_42 (ATerm t)
  {
    ATerm v_41 = NULL,x_41 = NULL;
    ATerm f_42 (ATerm t)
    {
      ATerm z_41 = NULL;
      ATerm g_42 (ATerm t)
      {
        ATerm b_42 = NULL;
        ATerm c_42 = NULL;
        ATerm h_42 (ATerm t)
        {
          if(((b_42 != NULL) && (b_42 != c_42)))
            _fail(c_42);
          else
            b_42 = c_42;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(x_41), not_null(z_41)), not_null(v_41));
        {
          c_42 = t;
          t = h_42(t);
        }
        t = not_null(b_42);
        return(t);
      }
      t = not_null(r_41);
      {
        t = o_65(t);
        {
          z_41 = t;
          t = g_42(t);
        }
      }
      return(t);
    }
    ATerm w_41 = NULL;
    ATerm e_42 (ATerm t)
    {
      if(((v_41 != NULL) && (v_41 != w_41)))
        _fail(w_41);
      else
        v_41 = w_41;
      return(t);
    }
    t = SSLgetAnnotations(not_null(p_41));
    {
      w_41 = t;
      t = e_42(t);
    }
    {
      t = not_null(q_41);
      {
        t = n_65(t);
        {
          x_41 = t;
          t = f_42(t);
        }
      }
    }
    return(t);
  }
  p_41 = t;
  o_41 :
  if(match_cons(p_41, sym_Call_2))
    {
      q_41 = ATgetArgument(p_41, 0);
      r_41 = ATgetArgument(p_41, 1);
      t = d_42(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LGChoice_2 (ATerm t, ATerm d_66 (ATerm), ATerm e_66 (ATerm))
{
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL;
  ATerm g_43 (ATerm t)
  {
    ATerm y_42 = NULL,a_43 = NULL;
    ATerm i_43 (ATerm t)
    {
      ATerm c_43 = NULL;
      ATerm j_43 (ATerm t)
      {
        ATerm e_43 = NULL;
        ATerm f_43 = NULL;
        ATerm k_43 (ATerm t)
        {
          if(((e_43 != NULL) && (e_43 != f_43)))
            _fail(f_43);
          else
            e_43 = f_43;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(a_43), not_null(c_43)), not_null(y_42));
        {
          f_43 = t;
          t = k_43(t);
        }
        t = not_null(e_43);
        return(t);
      }
      t = not_null(u_42);
      {
        t = e_66(t);
        {
          c_43 = t;
          t = j_43(t);
        }
      }
      return(t);
    }
    ATerm z_42 = NULL;
    ATerm h_43 (ATerm t)
    {
      if(((y_42 != NULL) && (y_42 != z_42)))
        _fail(z_42);
      else
        y_42 = z_42;
      return(t);
    }
    t = SSLgetAnnotations(not_null(s_42));
    {
      z_42 = t;
      t = h_43(t);
    }
    {
      t = not_null(t_42);
      {
        t = d_66(t);
        {
          a_43 = t;
          t = i_43(t);
        }
      }
    }
    return(t);
  }
  s_42 = t;
  r_42 :
  if(match_cons(s_42, sym_LGChoice_2))
    {
      t_42 = ATgetArgument(s_42, 0);
      u_42 = ATgetArgument(s_42, 1);
      t = g_43(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm GChoice_2 (ATerm t, ATerm d_65 (ATerm), ATerm e_65 (ATerm))
{
  ATerm t_43 = NULL,v_43 = NULL,w_43 = NULL;
  ATerm i_44 (ATerm t)
  {
    ATerm a_44 = NULL,c_44 = NULL;
    ATerm l_44 (ATerm t)
    {
      ATerm e_44 = NULL;
      ATerm m_44 (ATerm t)
      {
        ATerm g_44 = NULL;
        ATerm h_44 = NULL;
        ATerm n_44 (ATerm t)
        {
          if(((g_44 != NULL) && (g_44 != h_44)))
            _fail(h_44);
          else
            g_44 = h_44;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(c_44), not_null(e_44)), not_null(a_44));
        {
          h_44 = t;
          t = n_44(t);
        }
        t = not_null(g_44);
        return(t);
      }
      t = not_null(w_43);
      {
        t = e_65(t);
        {
          e_44 = t;
          t = m_44(t);
        }
      }
      return(t);
    }
    ATerm b_44 = NULL;
    ATerm k_44 (ATerm t)
    {
      if(((a_44 != NULL) && (a_44 != b_44)))
        _fail(b_44);
      else
        a_44 = b_44;
      return(t);
    }
    t = SSLgetAnnotations(not_null(t_43));
    {
      b_44 = t;
      t = k_44(t);
    }
    {
      t = not_null(v_43);
      {
        t = d_65(t);
        {
          c_44 = t;
          t = l_44(t);
        }
      }
    }
    return(t);
  }
  t_43 = t;
  s_43 :
  if(match_cons(t_43, sym_GChoice_2))
    {
      v_43 = ATgetArgument(t_43, 0);
      w_43 = ATgetArgument(t_43, 1);
      t = i_44(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm f_66 (ATerm), ATerm g_66 (ATerm), ATerm h_66 (ATerm))
{
  ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL;
  ATerm n_45 (ATerm t)
  {
    ATerm d_45 = NULL,f_45 = NULL;
    ATerm p_45 (ATerm t)
    {
      ATerm h_45 = NULL;
      ATerm q_45 (ATerm t)
      {
        ATerm j_45 = NULL;
        ATerm r_45 (ATerm t)
        {
          ATerm l_45 = NULL;
          ATerm m_45 = NULL;
          ATerm y_45 (ATerm t)
          {
            if(((l_45 != NULL) && (l_45 != m_45)))
              _fail(m_45);
            else
              l_45 = m_45;
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(f_45), not_null(h_45), not_null(j_45)), not_null(d_45));
          {
            m_45 = t;
            t = y_45(t);
          }
          t = not_null(l_45);
          return(t);
        }
        t = not_null(y_44);
        {
          t = h_66(t);
          {
            j_45 = t;
            t = r_45(t);
          }
        }
        return(t);
      }
      t = not_null(x_44);
      {
        t = g_66(t);
        {
          h_45 = t;
          t = q_45(t);
        }
      }
      return(t);
    }
    ATerm e_45 = NULL;
    ATerm o_45 (ATerm t)
    {
      if(((d_45 != NULL) && (d_45 != e_45)))
        _fail(e_45);
      else
        d_45 = e_45;
      return(t);
    }
    t = SSLgetAnnotations(not_null(v_44));
    {
      e_45 = t;
      t = o_45(t);
    }
    {
      t = not_null(w_44);
      {
        t = f_66(t);
        {
          f_45 = t;
          t = p_45(t);
        }
      }
    }
    return(t);
  }
  v_44 = t;
  u_44 :
  if(match_cons(v_44, sym_GuardedLChoice_3))
    {
      w_44 = ATgetArgument(v_44, 0);
      x_44 = ATgetArgument(v_44, 1);
      y_44 = ATgetArgument(v_44, 2);
      t = n_45(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm b_66 (ATerm), ATerm c_66 (ATerm))
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
  ATerm t_46 (ATerm t)
  {
    ATerm l_46 = NULL,n_46 = NULL;
    ATerm v_46 (ATerm t)
    {
      ATerm p_46 = NULL;
      ATerm w_46 (ATerm t)
      {
        ATerm r_46 = NULL;
        ATerm s_46 = NULL;
        ATerm x_46 (ATerm t)
        {
          if(((r_46 != NULL) && (r_46 != s_46)))
            _fail(s_46);
          else
            r_46 = s_46;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(n_46), not_null(p_46)), not_null(l_46));
        {
          s_46 = t;
          t = x_46(t);
        }
        t = not_null(r_46);
        return(t);
      }
      t = not_null(h_46);
      {
        t = c_66(t);
        {
          p_46 = t;
          t = w_46(t);
        }
      }
      return(t);
    }
    ATerm m_46 = NULL;
    ATerm u_46 (ATerm t)
    {
      if(((l_46 != NULL) && (l_46 != m_46)))
        _fail(m_46);
      else
        l_46 = m_46;
      return(t);
    }
    t = SSLgetAnnotations(not_null(f_46));
    {
      m_46 = t;
      t = u_46(t);
    }
    {
      t = not_null(g_46);
      {
        t = b_66(t);
        {
          n_46 = t;
          t = v_46(t);
        }
      }
    }
    return(t);
  }
  f_46 = t;
  e_46 :
  if(match_cons(f_46, sym_LChoice_2))
    {
      g_46 = ATgetArgument(f_46, 0);
      h_46 = ATgetArgument(f_46, 1);
      t = t_46(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm z_64 (ATerm), ATerm a_65 (ATerm))
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL;
  ATerm s_47 (ATerm t)
  {
    ATerm k_47 = NULL,m_47 = NULL;
    ATerm u_47 (ATerm t)
    {
      ATerm o_47 = NULL;
      ATerm v_47 (ATerm t)
      {
        ATerm q_47 = NULL;
        ATerm r_47 = NULL;
        ATerm w_47 (ATerm t)
        {
          if(((q_47 != NULL) && (q_47 != r_47)))
            _fail(r_47);
          else
            q_47 = r_47;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(m_47), not_null(o_47)), not_null(k_47));
        {
          r_47 = t;
          t = w_47(t);
        }
        t = not_null(q_47);
        return(t);
      }
      t = not_null(g_47);
      {
        t = a_65(t);
        {
          o_47 = t;
          t = v_47(t);
        }
      }
      return(t);
    }
    ATerm l_47 = NULL;
    ATerm t_47 (ATerm t)
    {
      if(((k_47 != NULL) && (k_47 != l_47)))
        _fail(l_47);
      else
        k_47 = l_47;
      return(t);
    }
    t = SSLgetAnnotations(not_null(e_47));
    {
      l_47 = t;
      t = t_47(t);
    }
    {
      t = not_null(f_47);
      {
        t = z_64(t);
        {
          m_47 = t;
          t = u_47(t);
        }
      }
    }
    return(t);
  }
  e_47 = t;
  d_47 :
  if(match_cons(e_47, sym_Choice_2))
    {
      f_47 = ATgetArgument(e_47, 0);
      g_47 = ATgetArgument(e_47, 1);
      t = s_47(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm z_65 (ATerm), ATerm a_66 (ATerm))
{
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL;
  ATerm r_48 (ATerm t)
  {
    ATerm j_48 = NULL,l_48 = NULL;
    ATerm t_48 (ATerm t)
    {
      ATerm n_48 = NULL;
      ATerm u_48 (ATerm t)
      {
        ATerm p_48 = NULL;
        ATerm q_48 = NULL;
        ATerm v_48 (ATerm t)
        {
          if(((p_48 != NULL) && (p_48 != q_48)))
            _fail(q_48);
          else
            p_48 = q_48;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(l_48), not_null(n_48)), not_null(j_48));
        {
          q_48 = t;
          t = v_48(t);
        }
        t = not_null(p_48);
        return(t);
      }
      t = not_null(f_48);
      {
        t = a_66(t);
        {
          n_48 = t;
          t = u_48(t);
        }
      }
      return(t);
    }
    ATerm k_48 = NULL;
    ATerm s_48 (ATerm t)
    {
      if(((j_48 != NULL) && (j_48 != k_48)))
        _fail(k_48);
      else
        j_48 = k_48;
      return(t);
    }
    t = SSLgetAnnotations(not_null(d_48));
    {
      k_48 = t;
      t = s_48(t);
    }
    {
      t = not_null(e_48);
      {
        t = z_65(t);
        {
          l_48 = t;
          t = t_48(t);
        }
      }
    }
    return(t);
  }
  d_48 = t;
  c_48 :
  if(match_cons(d_48, sym_Seq_2))
    {
      e_48 = ATgetArgument(d_48, 0);
      f_48 = ATgetArgument(d_48, 1);
      t = r_48(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Test_1 (ATerm t, ATerm m_66 (ATerm))
{
  ATerm f_49 = NULL,l_49 = NULL;
  ATerm u_49 (ATerm t)
  {
    ATerm o_49 = NULL,q_49 = NULL;
    ATerm w_49 (ATerm t)
    {
      ATerm s_49 = NULL;
      ATerm t_49 = NULL;
      ATerm x_49 (ATerm t)
      {
        if(((s_49 != NULL) && (s_49 != t_49)))
          _fail(t_49);
        else
          s_49 = t_49;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(q_49)), not_null(o_49));
      {
        t_49 = t;
        t = x_49(t);
      }
      t = not_null(s_49);
      return(t);
    }
    ATerm p_49 = NULL;
    ATerm v_49 (ATerm t)
    {
      if(((o_49 != NULL) && (o_49 != p_49)))
        _fail(p_49);
      else
        o_49 = p_49;
      return(t);
    }
    t = SSLgetAnnotations(not_null(f_49));
    {
      p_49 = t;
      t = v_49(t);
    }
    {
      t = not_null(l_49);
      {
        t = m_66(t);
        {
          q_49 = t;
          t = w_49(t);
        }
      }
    }
    return(t);
  }
  f_49 = t;
  e_49 :
  if(match_cons(f_49, sym_Test_1))
    {
      l_49 = ATgetArgument(f_49, 0);
      t = u_49(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Not_1 (ATerm t, ATerm k_66 (ATerm))
{
  ATerm d_50 = NULL,e_50 = NULL;
  ATerm p_50 (ATerm t)
  {
    ATerm h_50 = NULL,l_50 = NULL;
    ATerm r_50 (ATerm t)
    {
      ATerm n_50 = NULL;
      ATerm o_50 = NULL;
      ATerm x_50 (ATerm t)
      {
        if(((n_50 != NULL) && (n_50 != o_50)))
          _fail(o_50);
        else
          n_50 = o_50;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(l_50)), not_null(h_50));
      {
        o_50 = t;
        t = x_50(t);
      }
      t = not_null(n_50);
      return(t);
    }
    ATerm i_50 = NULL;
    ATerm q_50 (ATerm t)
    {
      if(((h_50 != NULL) && (h_50 != i_50)))
        _fail(i_50);
      else
        h_50 = i_50;
      return(t);
    }
    t = SSLgetAnnotations(not_null(d_50));
    {
      i_50 = t;
      t = q_50(t);
    }
    {
      t = not_null(e_50);
      {
        t = k_66(t);
        {
          l_50 = t;
          t = r_50(t);
        }
      }
    }
    return(t);
  }
  d_50 = t;
  c_50 :
  if(match_cons(d_50, sym_Not_1))
    {
      e_50 = ATgetArgument(d_50, 0);
      t = p_50(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm c_51 = NULL;
  ATerm i_51 (ATerm t)
  {
    ATerm e_51 = NULL,g_51 = NULL;
    ATerm u_6;
    u_6 = t;
    {
      ATerm f_51 = NULL;
      ATerm j_51 (ATerm t)
      {
        if(((e_51 != NULL) && (e_51 != f_51)))
          _fail(f_51);
        else
          e_51 = f_51;
        return(t);
      }
      t = SSLgetAnnotations(not_null(c_51));
      {
        f_51 = t;
        t = j_51(t);
      }
    }
    t = u_6;
    {
      ATerm h_51 = NULL;
      ATerm k_51 (ATerm t)
      {
        if(((g_51 != NULL) && (g_51 != h_51)))
          _fail(h_51);
        else
          g_51 = h_51;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(e_51));
      {
        h_51 = t;
        t = k_51(t);
      }
      t = not_null(g_51);
    }
    return(t);
  }
  c_51 = t;
  b_51 :
  if(match_cons(c_51, sym_Fail_0))
    {
      t = i_51(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm q_51 = NULL;
  ATerm w_51 (ATerm t)
  {
    ATerm s_51 = NULL,u_51 = NULL;
    ATerm v_6;
    v_6 = t;
    {
      ATerm t_51 = NULL;
      ATerm x_51 (ATerm t)
      {
        if(((s_51 != NULL) && (s_51 != t_51)))
          _fail(t_51);
        else
          s_51 = t_51;
        return(t);
      }
      t = SSLgetAnnotations(not_null(q_51));
      {
        t_51 = t;
        t = x_51(t);
      }
    }
    t = v_6;
    {
      ATerm v_51 = NULL;
      ATerm y_51 (ATerm t)
      {
        if(((u_51 != NULL) && (u_51 != v_51)))
          _fail(v_51);
        else
          u_51 = v_51;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(s_51));
      {
        v_51 = t;
        t = y_51(t);
      }
      t = not_null(u_51);
    }
    return(t);
  }
  q_51 = t;
  p_51 :
  if(match_cons(q_51, sym_Id_0))
    {
      t = w_51(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm w_6 = t;
  int x_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
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
            t = Fail_0(t);
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
                  t = Not_1(t, strategy_expression_0);
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
                        t = Test_1(t, strategy_expression_0);
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
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
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
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
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
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
                                                ;
                                                LocalPopChoice(l_7);
                                              }
                                            else
                                              {
                                                t = k_7;
                                                {
                                                  ATerm m_7 = t;
                                                  int n_7 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                                    t = SVar_1(t, is_string_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm y_0 (ATerm t)
                                                                  {
                                                                    ATerm z_0 (ATerm t)
                                                                    {
                                                                      ATerm a_1 (ATerm t)
                                                                      {
                                                                        t = SVar_1(t, is_string_0);
                                                                        return(t);
                                                                      }
                                                                      t = Call_2(t, a_1, Nil_0);
                                                                      return(t);
                                                                    }
                                                                    t = list_1(t, z_0);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, x_0, y_0);
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
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
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
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
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
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, b_1);
                                                                                    ;
                                                                                    LocalPopChoice(x_7);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_7;
                                                                                    {
                                                                                      ATerm y_7 = t;
                                                                                      int z_7 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1(t, strategy_expression_0);
                                                                                          ;
                                                                                          LocalPopChoice(z_7);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_7;
                                                                                          {
                                                                                            ATerm a_8 = t;
                                                                                            int b_8 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1(t, strategy_expression_0);
                                                                                                ;
                                                                                                LocalPopChoice(b_8);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = a_8;
                                                                                                {
                                                                                                  ATerm c_8 = t;
                                                                                                  int d_8 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1(t, strategy_expression_0);
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
                                                                                                            t = Thread_1(t, strategy_expression_0);
                                                                                                            ;
                                                                                                            LocalPopChoice(f_8);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = e_8;
                                                                                                            {
                                                                                                              ATerm g_8 = t;
                                                                                                              int h_8 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1(t, match_term_exp_0);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(h_8);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = g_8;
                                                                                                                  {
                                                                                                                    ATerm i_8 = t;
                                                                                                                    int j_8 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1(t, term_expression_0);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(j_8);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = i_8;
                                                                                                                        {
                                                                                                                          ATerm k_8 = t;
                                                                                                                          int l_8 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm c_1 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, c_1, strategy_expression_0);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(l_8);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = k_8;
                                                                                                                              {
                                                                                                                                ATerm m_8 = t;
                                                                                                                                int n_8 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1(t, strategy_expression_0);
                                                                                                                                    ;
                                                                                                                                    LocalPopChoice(n_8);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = m_8;
                                                                                                                                    {
                                                                                                                                      ATerm o_8 = t;
                                                                                                                                      int p_8 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm d_1 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Prim_2(t, is_string_0, d_1);
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(p_8);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = o_8;
                                                                                                                                          {
                                                                                                                                            ATerm q_8 = t;
                                                                                                                                            int r_8 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm e_1 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm f_1 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    ATerm g_1 (ATerm t)
                                                                                                                                                    {
                                                                                                                                                      ATerm h_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        t = VarDec_2(t, is_string_0, _id);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = list_1(t, h_1);
                                                                                                                                                      return(t);
                                                                                                                                                    }
                                                                                                                                                    t = SDef_3(t, is_string_0, g_1, strategy_expression_0);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, f_1);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Let_2(t, e_1, strategy_expression_0);
                                                                                                                                                ;
                                                                                                                                                LocalPopChoice(r_8);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = q_8;
                                                                                                                                                {
                                                                                                                                                  ATerm s_8 = t;
                                                                                                                                                  int t_8 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      ATerm i_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        t = Var_1(t, is_string_0);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      ATerm j_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        ATerm k_1 (ATerm t)
                                                                                                                                                        {
                                                                                                                                                          t = case_alternative_1(t, strategy_expression_0);
                                                                                                                                                          return(t);
                                                                                                                                                        }
                                                                                                                                                        t = list_1(t, k_1);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = Case_4(t, is_string_0, i_1, j_1, strategy_expression_0);
                                                                                                                                                      ;
                                                                                                                                                      LocalPopChoice(t_8);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = s_8;
                                                                                                                                                      {
                                                                                                                                                        ATerm u_8 = t;
                                                                                                                                                        int v_8 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            ATerm l_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, is_string_0);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_2(t, l_1, term_expression_0);
                                                                                                                                                            ;
                                                                                                                                                            LocalPopChoice(v_8);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = u_8;
                                                                                                                                                            {
                                                                                                                                                              ATerm w_8 = t;
                                                                                                                                                              int x_8 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  ATerm m_1 (ATerm t)
                                                                                                                                                                  {
                                                                                                                                                                    t = Var_1(t, is_string_0);
                                                                                                                                                                    return(t);
                                                                                                                                                                  }
                                                                                                                                                                  t = Assign_1(t, m_1);
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
                                                                                                                                                                        t = Continue_1(t, is_string_0);
                                                                                                                                                                        ;
                                                                                                                                                                        LocalPopChoice(z_8);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = y_8;
                                                                                                                                                                        {
                                                                                                                                                                          ATerm n_1 (ATerm t)
                                                                                                                                                                          {
                                                                                                                                                                            t = term_a_9;
                                                                                                                                                                            return(t);
                                                                                                                                                                          }
                                                                                                                                                                          t = debug_1(t, n_1);
                                                                                                                                                                        }
                                                                                                                                                                      }
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm VarDec_2 (ATerm t, ATerm w_67 (ATerm), ATerm x_67 (ATerm))
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
  ATerm b_53 (ATerm t)
  {
    ATerm t_52 = NULL,v_52 = NULL;
    ATerm d_53 (ATerm t)
    {
      ATerm x_52 = NULL;
      ATerm e_53 (ATerm t)
      {
        ATerm z_52 = NULL;
        ATerm a_53 = NULL;
        ATerm f_53 (ATerm t)
        {
          if(((z_52 != NULL) && (z_52 != a_53)))
            _fail(a_53);
          else
            z_52 = a_53;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(v_52), not_null(x_52)), not_null(t_52));
        {
          a_53 = t;
          t = f_53(t);
        }
        t = not_null(z_52);
        return(t);
      }
      t = not_null(p_52);
      {
        t = x_67(t);
        {
          x_52 = t;
          t = e_53(t);
        }
      }
      return(t);
    }
    ATerm u_52 = NULL;
    ATerm c_53 (ATerm t)
    {
      if(((t_52 != NULL) && (t_52 != u_52)))
        _fail(u_52);
      else
        t_52 = u_52;
      return(t);
    }
    t = SSLgetAnnotations(not_null(n_52));
    {
      u_52 = t;
      t = c_53(t);
    }
    {
      t = not_null(o_52);
      {
        t = w_67(t);
        {
          v_52 = t;
          t = d_53(t);
        }
      }
    }
    return(t);
  }
  n_52 = t;
  m_52 :
  if(match_cons(n_52, sym_VarDec_2))
    {
      o_52 = ATgetArgument(n_52, 0);
      p_52 = ATgetArgument(n_52, 1);
      t = b_53(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm a_68 (ATerm), ATerm b_68 (ATerm), ATerm c_68 (ATerm))
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL;
  ATerm f_54 (ATerm t)
  {
    ATerm v_53 = NULL,x_53 = NULL;
    ATerm h_54 (ATerm t)
    {
      ATerm z_53 = NULL;
      ATerm i_54 (ATerm t)
      {
        ATerm b_54 = NULL;
        ATerm j_54 (ATerm t)
        {
          ATerm d_54 = NULL;
          ATerm e_54 = NULL;
          ATerm k_54 (ATerm t)
          {
            if(((d_54 != NULL) && (d_54 != e_54)))
              _fail(e_54);
            else
              d_54 = e_54;
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(x_53), not_null(z_53), not_null(b_54)), not_null(v_53));
          {
            e_54 = t;
            t = k_54(t);
          }
          t = not_null(d_54);
          return(t);
        }
        t = not_null(q_53);
        {
          t = c_68(t);
          {
            b_54 = t;
            t = j_54(t);
          }
        }
        return(t);
      }
      t = not_null(p_53);
      {
        t = b_68(t);
        {
          z_53 = t;
          t = i_54(t);
        }
      }
      return(t);
    }
    ATerm w_53 = NULL;
    ATerm g_54 (ATerm t)
    {
      if(((v_53 != NULL) && (v_53 != w_53)))
        _fail(w_53);
      else
        v_53 = w_53;
      return(t);
    }
    t = SSLgetAnnotations(not_null(n_53));
    {
      w_53 = t;
      t = g_54(t);
    }
    {
      t = not_null(o_53);
      {
        t = a_68(t);
        {
          x_53 = t;
          t = h_54(t);
        }
      }
    }
    return(t);
  }
  n_53 = t;
  m_53 :
  if(match_cons(n_53, sym_SDef_3))
    {
      o_53 = ATgetArgument(n_53, 0);
      p_53 = ATgetArgument(n_53, 1);
      q_53 = ATgetArgument(n_53, 2);
      t = f_54(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm strategy_definition_0 (ATerm t)
{
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm p_1 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, p_1);
        return(t);
      }
      t = SDef_3(t, is_string_0, o_1, strategy_expression_0);
      ;
      LocalPopChoice(c_9);
    }
  else
    {
      t = b_9;
      {
        ATerm q_1 (ATerm t)
        {
          t = term_d_9;
          return(t);
        }
        t = debug_1(t, q_1);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm i_82 (ATerm))
{
  ATerm l_54 (ATerm t)
  {
    ATerm e_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(f_9);
      }
    else
      {
        t = e_9;
        t = Cons_2(t, i_82, l_54);
      }
    return(t);
  }
  t = l_54(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm p_61 (ATerm))
{
  ATerm w_54 = NULL,x_54 = NULL;
  ATerm n_55 (ATerm t)
  {
    ATerm a_55 = NULL,c_55 = NULL;
    ATerm p_55 (ATerm t)
    {
      ATerm l_55 = NULL;
      ATerm m_55 = NULL;
      ATerm q_55 (ATerm t)
      {
        if(((l_55 != NULL) && (l_55 != m_55)))
          _fail(m_55);
        else
          l_55 = m_55;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(c_55)), not_null(a_55));
      {
        m_55 = t;
        t = q_55(t);
      }
      t = not_null(l_55);
      return(t);
    }
    ATerm b_55 = NULL;
    ATerm o_55 (ATerm t)
    {
      if(((a_55 != NULL) && (a_55 != b_55)))
        _fail(b_55);
      else
        a_55 = b_55;
      return(t);
    }
    t = SSLgetAnnotations(not_null(w_54));
    {
      b_55 = t;
      t = o_55(t);
    }
    {
      t = not_null(x_54);
      {
        t = p_61(t);
        {
          c_55 = t;
          t = p_55(t);
        }
      }
    }
    return(t);
  }
  w_54 = t;
  q_54 :
  if(match_cons(w_54, sym_Strategies_1))
    {
      x_54 = ATgetArgument(w_54, 0);
      t = n_55(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm u_61 (ATerm))
{
  ATerm w_55 = NULL,x_55 = NULL;
  ATerm g_56 (ATerm t)
  {
    ATerm a_56 = NULL,c_56 = NULL;
    ATerm i_56 (ATerm t)
    {
      ATerm e_56 = NULL;
      ATerm f_56 = NULL;
      ATerm j_56 (ATerm t)
      {
        if(((e_56 != NULL) && (e_56 != f_56)))
          _fail(f_56);
        else
          e_56 = f_56;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(c_56)), not_null(a_56));
      {
        f_56 = t;
        t = j_56(t);
      }
      t = not_null(e_56);
      return(t);
    }
    ATerm b_56 = NULL;
    ATerm h_56 (ATerm t)
    {
      if(((a_56 != NULL) && (a_56 != b_56)))
        _fail(b_56);
      else
        a_56 = b_56;
      return(t);
    }
    t = SSLgetAnnotations(not_null(w_55));
    {
      b_56 = t;
      t = h_56(t);
    }
    {
      t = not_null(x_55);
      {
        t = u_61(t);
        {
          c_56 = t;
          t = i_56(t);
        }
      }
    }
    return(t);
  }
  w_55 = t;
  v_55 :
  if(match_cons(w_55, sym_Specification_1))
    {
      x_55 = ATgetArgument(w_55, 0);
      t = g_56(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_1 (ATerm t)
      {
        ATerm s_1 (ATerm t)
        {
          ATerm t_1 (ATerm t)
          {
            ATerm u_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, u_1);
            return(t);
          }
          t = Cons_2(t, t_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, s_1);
        return(t);
      }
      t = Specification_1(t, r_1);
      ;
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      {
        ATerm v_1 (ATerm t)
        {
          t = term_i_9;
          return(t);
        }
        t = debug_1(t, v_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm y_59 (ATerm), ATerm z_59 (ATerm))
{
  ATerm q_56 = NULL,r_56 = NULL,z_56 = NULL;
  ATerm l_57 (ATerm t)
  {
    ATerm d_57 = NULL,f_57 = NULL;
    ATerm n_57 (ATerm t)
    {
      ATerm h_57 = NULL;
      ATerm o_57 (ATerm t)
      {
        ATerm j_57 = NULL;
        ATerm k_57 = NULL;
        ATerm p_57 (ATerm t)
        {
          if(((j_57 != NULL) && (j_57 != k_57)))
            _fail(k_57);
          else
            j_57 = k_57;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(f_57), not_null(h_57)), not_null(d_57));
        {
          k_57 = t;
          t = p_57(t);
        }
        t = not_null(j_57);
        return(t);
      }
      t = not_null(z_56);
      {
        t = z_59(t);
        {
          h_57 = t;
          t = o_57(t);
        }
      }
      return(t);
    }
    ATerm e_57 = NULL;
    ATerm m_57 (ATerm t)
    {
      if(((d_57 != NULL) && (d_57 != e_57)))
        _fail(e_57);
      else
        d_57 = e_57;
      return(t);
    }
    t = SSLgetAnnotations(not_null(q_56));
    {
      e_57 = t;
      t = m_57(t);
    }
    {
      t = not_null(r_56);
      {
        t = y_59(t);
        {
          f_57 = t;
          t = n_57(t);
        }
      }
    }
    return(t);
  }
  q_56 = t;
  p_56 :
  if(match_cons(q_56, sym__2))
    {
      r_56 = ATgetArgument(q_56, 0);
      z_56 = ATgetArgument(q_56, 1);
      t = l_57(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm j_9;
  j_9 = t;
  {
    ATerm r_57 = NULL;
    ATerm s_57 = NULL;
    ATerm t_57 (ATerm t)
    {
      if(((r_57 != NULL) && (r_57 != s_57)))
        _fail(s_57);
      else
        r_57 = s_57;
      return(t);
    }
    t = term_k_9;
    {
      t = whoami_0(t);
      {
        s_57 = t;
        t = t_57(t);
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_9), not_null(r_57)), term_m_9));
      {
        t = printnl_0(t);
        {
          t = term_o_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = j_9;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL;
  ATerm b_58 (ATerm t)
  {
    ATerm p_9;
    p_9 = t;
    t = SSL_printnl(not_null(x_57), not_null(y_57));
    t = p_9;
    return(t);
  }
  w_57 = t;
  v_57 :
  if(match_cons(w_57, sym__2))
    {
      x_57 = ATgetArgument(w_57, 0);
      y_57 = ATgetArgument(w_57, 1);
      t = b_58(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm d_58 = NULL;
  ATerm f_58 (ATerm t)
  {
    t = SSL_implode_string(not_null(d_58));
    return(t);
  }
  d_58 = t;
  t = f_58(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(r_9);
    }
  else
    {
      t = q_9;
      {
        ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
        ATerm o_58 (ATerm t)
        {
          t = not_null(j_58);
          {
            ATerm w_1 (ATerm t)
            {
              t = not_null(k_58);
              t = concat_0(t);
              return(t);
            }
            t = at_end_1(t, w_1);
          }
          return(t);
        }
        i_58 = t;
        h_58 :
        if(((ATgetType(i_58) == AT_LIST) && !(ATisEmpty(i_58))))
          {
            j_58 = ATgetFirst((ATermList) i_58);
            k_58 = (ATerm) ATgetNext((ATermList) i_58);
            t = o_58(t);
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
  ATerm u_58 = NULL;
  ATerm c_59 (ATerm t)
  {
    ATerm w_58 = NULL;
    ATerm x_58 = NULL;
    ATerm d_59 (ATerm t)
    {
      ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL;
      ATerm e_59 (ATerm t)
      {
        if(((w_58 != NULL) && (w_58 != b_59)))
          _fail(b_59);
        else
          w_58 = b_59;
        return(t);
      }
      t = SSL_explode_term(not_null(x_58));
      {
        z_58 = t;
        s_58 :
        if(match_cons(z_58, sym__2))
          {
            a_59 = ATgetArgument(z_58, 0);
            b_59 = ATgetArgument(z_58, 1);
            t_58 :
            if(match_string(a_59, ""))
              {
                t = e_59(t);
              }
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
    t = not_null(u_58);
    {
      x_58 = t;
      t = d_59(t);
    }
    {
      t = not_null(w_58);
      t = concat_0(t);
    }
    return(t);
  }
  u_58 = t;
  t = c_59(t);
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm v_82 (ATerm))
{
  ATerm f_59 (ATerm t)
  {
    ATerm s_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, f_59);
        ;
        LocalPopChoice(t_9);
      }
    else
      {
        t = s_9;
        {
          t = Nil_0(t);
          t = v_82(t);
        }
      }
    return(t);
  }
  t = f_59(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL;
  ATerm n_59 (ATerm t)
  {
    t = not_null(j_59);
    {
      ATerm x_1 (ATerm t)
      {
        t = not_null(k_59);
        return(t);
      }
      t = at_end_1(t, x_1);
    }
    return(t);
  }
  i_59 = t;
  h_59 :
  if(match_cons(i_59, sym__2))
    {
      j_59 = ATgetArgument(i_59, 0);
      k_59 = ATgetArgument(i_59, 1);
      t = n_59(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm p_59 = NULL;
  ATerm r_59 (ATerm t)
  {
    t = SSL_explode_string(not_null(p_59));
    return(t);
  }
  p_59 = t;
  t = r_59(t);
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
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(x_9);
    }
  else
    {
      t = w_9;
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, y_1);
            ;
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
            {
              ATerm a_60 = NULL,b_60 = NULL,c_60 = NULL;
              ATerm l_60 (ATerm t)
              {
                t = not_null(b_60);
                return(t);
              }
              ATerm m_60 (ATerm t)
              {
                t = not_null(b_60);
                {
                  ATerm a_10 = t;
                  int b_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0(t);
                      ;
                      LocalPopChoice(b_10);
                    }
                  else
                    {
                      t = a_10;
                      {
                        ATerm z_1 (ATerm t)
                        {
                          t = term_c_10;
                          return(t);
                        }
                        t = debug_1(t, z_1);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm n_60 (ATerm t)
              {
                ATerm h_60 = NULL,j_60 = NULL;
                ATerm d_10;
                d_10 = t;
                {
                  ATerm i_60 = NULL;
                  ATerm o_60 (ATerm t)
                  {
                    if(((h_60 != NULL) && (h_60 != i_60)))
                      _fail(i_60);
                    else
                      h_60 = i_60;
                    return(t);
                  }
                  t = not_null(b_60);
                  {
                    t = eval_config_0(t);
                    {
                      i_60 = t;
                      t = o_60(t);
                    }
                  }
                }
                t = d_10;
                {
                  ATerm k_60 = NULL;
                  ATerm p_60 (ATerm t)
                  {
                    if(((j_60 != NULL) && (j_60 != k_60)))
                      _fail(k_60);
                    else
                      j_60 = k_60;
                    return(t);
                  }
                  t = not_null(c_60);
                  {
                    t = eval_config_0(t);
                    {
                      k_60 = t;
                      t = p_60(t);
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_60), not_null(j_60));
                    t = conc_strings_0(t);
                  }
                }
                return(t);
              }
              a_60 = t;
              x_59 :
              if(match_cons(a_60, sym_Path_1))
                {
                  b_60 = ATgetArgument(a_60, 0);
                  t = l_60(t);
                }
              else
                {
                  if(match_cons(a_60, sym_Var_1))
                    {
                      b_60 = ATgetArgument(a_60, 0);
                      t = m_60(t);
                    }
                  else
                    {
                      if(match_cons(a_60, sym_Prefix_2))
                        {
                          b_60 = ATgetArgument(a_60, 0);
                          c_60 = ATgetArgument(a_60, 1);
                          t = n_60(t);
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
  ATerm s_60 = NULL;
  ATerm w_60 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_10, not_null(s_60));
    {
      t = table_get_0(t);
      {
        ATerm a_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm f_10;
            f_10 = t;
            {
              ATerm u_60 = NULL;
              ATerm v_60 = NULL;
              ATerm x_60 (ATerm t)
              {
                if(((u_60 != NULL) && (u_60 != v_60)))
                  _fail(v_60);
                else
                  u_60 = v_60;
                return(t);
              }
              v_60 = t;
              t = x_60(t);
              {
                t = (ATerm) ATmakeAppl(sym__3, term_e_10, not_null(s_60), not_null(u_60));
                t = table_put_0(t);
              }
            }
            t = f_10;
          }
          return(t);
        }
        t = try_1(t, a_2);
      }
    }
    return(t);
  }
  s_60 = t;
  t = w_60(t);
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm u_95 (ATerm))
{
  ATerm b_2 (ATerm t)
  {
    ATerm g_10;
    g_10 = t;
    {
      ATerm z_60 = NULL;
      ATerm a_61 = NULL;
      ATerm b_61 (ATerm t)
      {
        if(((z_60 != NULL) && (z_60 != a_61)))
          _fail(a_61);
        else
          z_60 = a_61;
        return(t);
      }
      t = term_h_10;
      {
        t = get_config_0(t);
        {
          a_61 = t;
          t = b_61(t);
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_60), term_i_10);
        t = geq_0(t);
      }
    }
    t = g_10;
    t = u_95(t);
    return(t);
  }
  t = try_1(t, b_2);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm g_61 = NULL,j_61 = NULL,k_61 = NULL,n_61 = NULL;
  ATerm t_61 (ATerm t)
  {
    ATerm r_61 = NULL;
    t = SSL_fputc(not_null(j_61), not_null(n_61));
    {
      ATerm s_61 = NULL;
      ATerm v_61 (ATerm t)
      {
        if(((r_61 != NULL) && (r_61 != s_61)))
          _fail(s_61);
        else
          r_61 = s_61;
        return(t);
      }
      s_61 = t;
      t = v_61(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_61));
    }
    return(t);
  }
  g_61 = t;
  e_61 :
  if(match_cons(g_61, sym__2))
    {
      j_61 = ATgetArgument(g_61, 0);
      k_61 = ATgetArgument(g_61, 1);
      f_61 :
      if(match_cons(k_61, sym_Stream_1))
        {
          n_61 = ATgetArgument(k_61, 0);
          t = t_61(t);
        }
      else
        {
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
  ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL;
  ATerm i_62 (ATerm t)
  {
    ATerm g_62 = NULL;
    t = SSL_write_term_to_stream_text(not_null(c_62), not_null(d_62));
    {
      ATerm h_62 = NULL;
      ATerm j_62 (ATerm t)
      {
        if(((g_62 != NULL) && (g_62 != h_62)))
          _fail(h_62);
        else
          g_62 = h_62;
        return(t);
      }
      h_62 = t;
      t = j_62(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_62));
    }
    return(t);
  }
  a_62 = t;
  y_61 :
  if(match_cons(a_62, sym__2))
    {
      b_62 = ATgetArgument(a_62, 0);
      d_62 = ATgetArgument(a_62, 1);
      z_61 :
      if(match_cons(b_62, sym_Stream_1))
        {
          c_62 = ATgetArgument(b_62, 0);
          t = i_62(t);
        }
      else
        {
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
  ATerm c_2 (ATerm t)
  {
    ATerm l_62 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm m_62 = NULL;
      ATerm n_62 (ATerm t)
      {
        if(((l_62 != NULL) && (l_62 != m_62)))
          _fail(m_62);
        else
          l_62 = m_62;
        return(t);
      }
      m_62 = t;
      t = n_62(t);
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_10, not_null(l_62));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, c_2);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL;
  ATerm e_63 (ATerm t)
  {
    ATerm c_63 = NULL;
    t = SSL_write_term_to_stream_baf(not_null(w_62), not_null(x_62));
    {
      ATerm d_63 = NULL;
      ATerm f_63 (ATerm t)
      {
        if(((c_63 != NULL) && (c_63 != d_63)))
          _fail(d_63);
        else
          c_63 = d_63;
        return(t);
      }
      d_63 = t;
      t = f_63(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_63));
    }
    return(t);
  }
  u_62 = t;
  q_62 :
  if(match_cons(u_62, sym__2))
    {
      v_62 = ATgetArgument(u_62, 0);
      x_62 = ATgetArgument(u_62, 1);
      t_62 :
      if(match_cons(v_62, sym_Stream_1))
        {
          w_62 = ATgetArgument(v_62, 0);
          t = e_63(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToFile_1 (ATerm t, ATerm q_94 (ATerm))
{
  ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL;
  ATerm u_63 (ATerm t)
  {
    ATerm q_63 = NULL,s_63 = NULL;
    t = not_null(m_63);
    {
      ATerm r_63 = NULL;
      ATerm v_63 (ATerm t)
      {
        if(((q_63 != NULL) && (q_63 != r_63)))
          _fail(r_63);
        else
          q_63 = r_63;
        return(t);
      }
      r_63 = t;
      t = v_63(t);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_63), term_k_10);
        {
          t = open_stream_0(t);
          {
            ATerm t_63 = NULL;
            ATerm w_63 (ATerm t)
            {
              if(((s_63 != NULL) && (s_63 != t_63)))
                _fail(t_63);
              else
                s_63 = t_63;
              return(t);
            }
            t_63 = t;
            t = w_63(t);
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_63), not_null(n_63));
              {
                t = q_94(t);
                {
                  t = fclose_0(t);
                  t = not_null(n_63);
                }
              }
            }
          }
        }
      }
    }
    return(t);
  }
  l_63 = t;
  k_63 :
  if(match_cons(l_63, sym__2))
    {
      m_63 = ATgetArgument(l_63, 0);
      n_63 = ATgetArgument(l_63, 1);
      t = u_63(t);
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
  ATerm b_64 = NULL;
  ATerm l_10;
  l_10 = t;
  {
    ATerm d_2 (ATerm t)
    {
      ATerm m_10 = t;
      int n_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_2 (ATerm t)
          {
            ATerm c_64 = NULL,d_64 = NULL;
            ATerm g_64 (ATerm t)
            {
              if(((b_64 != NULL) && (b_64 != d_64)))
                _fail(d_64);
              else
                b_64 = d_64;
              return(t);
            }
            c_64 = t;
            y_63 :
            if(match_cons(c_64, sym_Output_1))
              {
                d_64 = ATgetArgument(c_64, 0);
                t = g_64(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, e_2);
          ;
          LocalPopChoice(n_10);
        }
      else
        {
          t = m_10;
          {
            ATerm e_64 = NULL;
            ATerm h_64 (ATerm t)
            {
              if(((b_64 != NULL) && (b_64 != e_64)))
                _fail(e_64);
              else
                b_64 = e_64;
              return(t);
            }
            t = term_o_10;
            {
              e_64 = t;
              t = h_64(t);
            }
          }
        }
      return(t);
    }
    t = _2(t, d_2, _id);
  }
  t = l_10;
  {
    ATerm f_2 (ATerm t)
    {
      ATerm g_2 (ATerm t)
      {
        t = not_null(b_64);
        return(t);
      }
      t = split_2(t, g_2, _id);
      return(t);
    }
    t = _2(t, _id, f_2);
    {
      ATerm p_10 = t;
      int s_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_2 (ATerm t)
          {
            ATerm i_2 (ATerm t)
            {
              ATerm f_64 = NULL;
              f_64 = t;
              a_64 :
              if(!(match_cons(f_64, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, i_2);
            return(t);
          }
          t = _2(t, h_2, WriteToBinaryFile_0);
          ;
          LocalPopChoice(s_10);
        }
      else
        {
          t = p_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm s_97 (ATerm))
{
  ATerm l_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL;
  ATerm t_64 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_64)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_64))), not_null(p_64));
    return(t);
  }
  ATerm t_10;
  t_10 = t;
  t = dtime_0(t);
  t = t_10;
  {
    t = s_97(t);
    {
      ATerm u_10;
      u_10 = t;
      {
        ATerm m_64 = NULL;
        ATerm s_64 (ATerm t)
        {
          if(((l_64 != NULL) && (l_64 != m_64)))
            _fail(m_64);
          else
            l_64 = m_64;
          return(t);
        }
        t = dtime_0(t);
        {
          m_64 = t;
          t = s_64(t);
        }
      }
      t = u_10;
      {
        n_64 = t;
        k_64 :
        if(match_cons(n_64, sym__2))
          {
            o_64 = ATgetArgument(n_64, 0);
            p_64 = ATgetArgument(n_64, 1);
            t = t_64(t);
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
  ATerm x_64 = NULL,y_64 = NULL;
  ATerm h_65 (ATerm t)
  {
    t = SSL_fclose(not_null(x_64));
    return(t);
  }
  ATerm i_65 (ATerm t)
  {
    t = SSL_fclose(not_null(y_64));
    return(t);
  }
  y_64 = t;
  w_64 :
  if(match_cons(y_64, sym_Stream_1))
    {
      x_64 = ATgetArgument(y_64, 0);
      {
        ATerm w_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_65(t);
            ;
            LocalPopChoice(x_10);
          }
        else
          {
            t = w_10;
            t = i_65(t);
          }
      }
    }
  else
    {
      t = i_65(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm q_65 = NULL,r_65 = NULL;
  ATerm x_65 (ATerm t)
  {
    t = SSL_read_term_from_stream(not_null(r_65));
    return(t);
  }
  q_65 = t;
  p_65 :
  if(match_cons(q_65, sym_Stream_1))
    {
      r_65 = ATgetArgument(q_65, 0);
      t = x_65(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm c_94 (ATerm))
{
  ATerm y_10;
  y_10 = t;
  {
    ATerm o_66 = NULL,s_66 = NULL;
    ATerm z_10;
    z_10 = t;
    {
      ATerm r_66 = NULL;
      ATerm u_66 (ATerm t)
      {
        if(((o_66 != NULL) && (o_66 != r_66)))
          _fail(r_66);
        else
          o_66 = r_66;
        return(t);
      }
      t = c_94(t);
      {
        r_66 = t;
        t = u_66(t);
      }
    }
    t = z_10;
    {
      ATerm t_66 = NULL;
      ATerm v_66 (ATerm t)
      {
        if(((s_66 != NULL) && (s_66 != t_66)))
          _fail(t_66);
        else
          s_66 = t_66;
        return(t);
      }
      t_66 = t;
      t = v_66(t);
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_66)), not_null(o_66)));
        t = printnl_0(t);
      }
    }
  }
  t = y_10;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm e_67 = NULL,f_67 = NULL,g_67 = NULL;
  ATerm l_67 (ATerm t)
  {
    ATerm j_67 = NULL;
    t = SSL_fopen(not_null(f_67), not_null(g_67));
    {
      ATerm k_67 = NULL;
      ATerm m_67 (ATerm t)
      {
        if(((j_67 != NULL) && (j_67 != k_67)))
          _fail(k_67);
        else
          j_67 = k_67;
        return(t);
      }
      k_67 = t;
      t = m_67(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_67));
    }
    return(t);
  }
  e_67 = t;
  d_67 :
  if(match_cons(e_67, sym__2))
    {
      f_67 = ATgetArgument(e_67, 0);
      g_67 = ATgetArgument(e_67, 1);
      t = l_67(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm o_67 = NULL;
  ATerm q_67 (ATerm t)
  {
    t = SSL_is_string(not_null(o_67));
    return(t);
  }
  o_67 = t;
  t = q_67(t);
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm s_67 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm t_67 = NULL;
    ATerm u_67 (ATerm t)
    {
      if(((s_67 != NULL) && (s_67 != t_67)))
        _fail(t_67);
      else
        s_67 = t_67;
      return(t);
    }
    t_67 = t;
    t = u_67(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_67));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm y_67 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm z_67 = NULL;
    ATerm d_68 (ATerm t)
    {
      if(((y_67 != NULL) && (y_67 != z_67)))
        _fail(z_67);
      else
        y_67 = z_67;
      return(t);
    }
    z_67 = t;
    t = d_68(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_67));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm f_68 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm g_68 = NULL;
    ATerm h_68 (ATerm t)
    {
      if(((f_68 != NULL) && (f_68 != g_68)))
        _fail(g_68);
      else
        f_68 = g_68;
      return(t);
    }
    g_68 = t;
    t = h_68(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_68));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm m_68 = NULL;
  ATerm n_68 (ATerm t)
  {
    t = stderr_stream_0(t);
    return(t);
  }
  ATerm o_68 (ATerm t)
  {
    t = stdout_stream_0(t);
    return(t);
  }
  ATerm p_68 (ATerm t)
  {
    t = stdin_stream_0(t);
    return(t);
  }
  m_68 = t;
  l_68 :
  if(match_cons(m_68, sym_stderr_0))
    {
      t = n_68(t);
    }
  else
    {
      if(match_cons(m_68, sym_stdout_0))
        {
          t = o_68(t);
        }
      else
        {
          if(match_cons(m_68, sym_stdin_0))
            {
              t = p_68(t);
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
  ATerm w_68 = NULL;
  ATerm h_69 (ATerm t)
  {
    ATerm y_68 = NULL,z_68 = NULL;
    ATerm a_69 = NULL;
    ATerm i_69 (ATerm t)
    {
      ATerm c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL;
      ATerm j_69 (ATerm t)
      {
        if(((z_68 != NULL) && (z_68 != f_69)))
          _fail(f_69);
        else
          z_68 = f_69;
        if(((y_68 != NULL) && (y_68 != g_69)))
          _fail(g_69);
        else
          y_68 = g_69;
        return(t);
      }
      t = SSL_explode_term(not_null(a_69));
      {
        c_69 = t;
        t_68 :
        if(match_cons(c_69, sym__2))
          {
            d_69 = ATgetArgument(c_69, 0);
            e_69 = ATgetArgument(c_69, 1);
            u_68 :
            if(match_string(d_69, ""))
              {
                v_68 :
                if(((ATgetType(e_69) == AT_LIST) && !(ATisEmpty(e_69))))
                  {
                    f_69 = ATgetFirst((ATermList) e_69);
                    g_69 = (ATerm) ATgetNext((ATermList) e_69);
                    t = j_69(t);
                  }
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
    t = not_null(w_68);
    {
      a_69 = t;
      t = i_69(t);
    }
    t = not_null(z_68);
    return(t);
  }
  w_68 = t;
  t = h_69(t);
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL;
  ATerm u_69 (ATerm t)
  {
    ATerm a_11 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0(t);
        t = stdio_stream_0(t);
        ;
        LocalPopChoice(b_11);
      }
    else
      {
        t = a_11;
        {
          ATerm c_11 = t;
          int d_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_2 (ATerm t)
              {
                ATerm r_69 = NULL,s_69 = NULL;
                ATerm v_69 (ATerm t)
                {
                  t = not_null(s_69);
                  return(t);
                }
                r_69 = t;
                m_69 :
                if(match_cons(r_69, sym_Path_1))
                  {
                    s_69 = ATgetArgument(r_69, 0);
                    t = v_69(t);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = _2(t, j_2, _id);
              t = fopen_0(t);
              ;
              LocalPopChoice(d_11);
            }
          else
            {
              t = c_11;
              {
                t = _2(t, is_string_0, _id);
                t = fopen_0(t);
              }
            }
        }
      }
    return(t);
  }
  o_69 = t;
  n_69 :
  if(match_cons(o_69, sym__2))
    {
      p_69 = ATgetArgument(o_69, 0);
      q_69 = ATgetArgument(o_69, 1);
      t = u_69(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm a_70 = NULL;
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_69 = NULL;
      ATerm z_69 = NULL;
      ATerm c_70 (ATerm t)
      {
        if(((y_69 != NULL) && (y_69 != z_69)))
          _fail(z_69);
        else
          y_69 = z_69;
        return(t);
      }
      z_69 = t;
      t = c_70(t);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_69), term_g_11);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(f_11);
    }
  else
    {
      t = e_11;
      {
        ATerm k_2 (ATerm t)
        {
          t = term_h_11;
          return(t);
        }
        t = debug_1(t, k_2);
        _fail(t);
      }
    }
  {
    ATerm i_11;
    i_11 = t;
    {
      ATerm b_70 = NULL;
      ATerm d_70 (ATerm t)
      {
        if(((a_70 != NULL) && (a_70 != b_70)))
          _fail(b_70);
        else
          a_70 = b_70;
        return(t);
      }
      t = read_from_stream_0(t);
      {
        b_70 = t;
        t = d_70(t);
      }
    }
    t = i_11;
    {
      t = fclose_0(t);
      t = not_null(a_70);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm u_89 (ATerm), ATerm v_89 (ATerm))
{
  ATerm g_70 = NULL,i_70 = NULL;
  ATerm j_11;
  j_11 = t;
  {
    ATerm h_70 = NULL;
    ATerm k_70 (ATerm t)
    {
      if(((g_70 != NULL) && (g_70 != h_70)))
        _fail(h_70);
      else
        g_70 = h_70;
      return(t);
    }
    t = u_89(t);
    {
      h_70 = t;
      t = k_70(t);
    }
  }
  t = j_11;
  {
    ATerm j_70 = NULL;
    ATerm l_70 (ATerm t)
    {
      if(((i_70 != NULL) && (i_70 != j_70)))
        _fail(j_70);
      else
        i_70 = j_70;
      return(t);
    }
    t = v_89(t);
    {
      j_70 = t;
      t = l_70(t);
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_70), not_null(i_70));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm p_70 = NULL;
  ATerm k_11;
  k_11 = t;
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_2 (ATerm t)
        {
          ATerm q_70 = NULL,r_70 = NULL;
          ATerm t_70 (ATerm t)
          {
            if(((p_70 != NULL) && (p_70 != r_70)))
              _fail(r_70);
            else
              p_70 = r_70;
            return(t);
          }
          q_70 = t;
          n_70 :
          if(match_cons(q_70, sym_Input_1))
            {
              r_70 = ATgetArgument(q_70, 0);
              t = t_70(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, l_2);
        ;
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        {
          ATerm s_70 = NULL;
          ATerm u_70 (ATerm t)
          {
            if(((p_70 != NULL) && (p_70 != s_70)))
              _fail(s_70);
            else
              p_70 = s_70;
            return(t);
          }
          t = term_n_11;
          {
            s_70 = t;
            t = u_70(t);
          }
        }
      }
  }
  t = k_11;
  {
    ATerm m_2 (ATerm t)
    {
      t = not_null(p_70);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, m_2);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm x_70 = NULL;
    x_70 = t;
    v_70 :
    if(!(match_string(x_70, "-k")))
      {
        if(!(match_string(x_70, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm o_11;
    o_11 = t;
    {
      ATerm y_70 = NULL;
      ATerm z_70 = NULL;
      ATerm a_71 (ATerm t)
      {
        if(((y_70 != NULL) && (y_70 != z_70)))
          _fail(z_70);
        else
          y_70 = z_70;
        return(t);
      }
      t = string_to_int_0(t);
      {
        z_70 = t;
        t = a_71(t);
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_11, not_null(y_70));
        t = set_config_0(t);
      }
    }
    t = o_11;
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_q_11;
    return(t);
  }
  t = ArgOption_3(t, n_2, o_2, p_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm c_71 = NULL;
  ATerm e_71 (ATerm t)
  {
    t = SSL_string_to_int(not_null(c_71));
    return(t);
  }
  c_71 = t;
  t = e_71(t);
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_2 (ATerm t)
      {
        ATerm k_71 = NULL;
        k_71 = t;
        f_71 :
        if(!(match_string(k_71, "-S")))
          {
            if(!(match_string(k_71, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_2 (ATerm t)
      {
        t = term_u_11;
        t = set_config_0(t);
        t = term_v_11;
        return(t);
      }
      ATerm s_2 (ATerm t)
      {
        t = term_w_11;
        return(t);
      }
      t = Option_3(t, q_2, r_2, s_2);
      ;
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      {
        ATerm x_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 (ATerm t)
            {
              ATerm l_71 = NULL;
              l_71 = t;
              g_71 :
              if(!(match_string(l_71, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm u_2 (ATerm t)
            {
              ATerm o_71 = NULL;
              ATerm z_11;
              z_11 = t;
              {
                ATerm m_71 = NULL;
                ATerm n_71 = NULL;
                ATerm r_71 (ATerm t)
                {
                  if(((m_71 != NULL) && (m_71 != n_71)))
                    _fail(n_71);
                  else
                    m_71 = n_71;
                  return(t);
                }
                t = string_to_int_0(t);
                {
                  n_71 = t;
                  t = r_71(t);
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_10, not_null(m_71));
                  t = set_config_0(t);
                }
              }
              t = z_11;
              {
                ATerm p_71 = NULL;
                ATerm s_71 (ATerm t)
                {
                  if(((o_71 != NULL) && (o_71 != p_71)))
                    _fail(p_71);
                  else
                    o_71 = p_71;
                  return(t);
                }
                p_71 = t;
                t = s_71(t);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_71));
              }
              return(t);
            }
            ATerm v_2 (ATerm t)
            {
              t = term_a_12;
              return(t);
            }
            t = ArgOption_3(t, t_2, u_2, v_2);
            ;
            LocalPopChoice(y_11);
          }
        else
          {
            t = x_11;
            {
              ATerm w_2 (ATerm t)
              {
                ATerm q_71 = NULL;
                q_71 = t;
                j_71 :
                if(!(match_string(q_71, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm x_2 (ATerm t)
              {
                t = term_c_12;
                t = set_config_0(t);
                t = term_d_12;
                return(t);
              }
              ATerm y_2 (ATerm t)
              {
                t = term_e_12;
                return(t);
              }
              t = Option_3(t, w_2, x_2, y_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm w_71 = NULL;
    w_71 = t;
    t_71 :
    if(!(match_string(w_71, "-o")))
      {
        if(!(match_string(w_71, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm z_71 = NULL;
    ATerm h_12;
    h_12 = t;
    {
      ATerm x_71 = NULL;
      ATerm y_71 = NULL;
      ATerm b_72 (ATerm t)
      {
        if(((x_71 != NULL) && (x_71 != y_71)))
          _fail(y_71);
        else
          x_71 = y_71;
        return(t);
      }
      y_71 = t;
      t = b_72(t);
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_12, not_null(x_71));
        t = set_config_0(t);
      }
    }
    t = h_12;
    {
      ATerm a_72 = NULL;
      ATerm c_72 (ATerm t)
      {
        if(((z_71 != NULL) && (z_71 != a_72)))
          _fail(a_72);
        else
          z_71 = a_72;
        return(t);
      }
      a_72 = t;
      t = c_72(t);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_71));
    }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_m_12;
    return(t);
  }
  t = ArgOption_3(t, z_2, a_3, b_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      {
        ATerm c_3 (ATerm t)
        {
          ATerm e_72 = NULL;
          e_72 = t;
          d_72 :
          if(!(match_string(e_72, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm d_3 (ATerm t)
        {
          t = term_q_12;
          t = set_config_0(t);
          t = term_r_12;
          return(t);
        }
        ATerm e_3 (ATerm t)
        {
          t = term_s_12;
          return(t);
        }
        t = Option_3(t, c_3, d_3, e_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL;
  ATerm u_72 (ATerm t)
  {
    t = register_usage_1(t, l_0);
    return(t);
  }
  ATerm v_72 (ATerm t)
  {
    ATerm s_72 = NULL;
    ATerm t_12;
    t_12 = t;
    {
      t = not_null(l_72);
      t = j_0(t);
    }
    t = t_12;
    {
      ATerm t_72 = NULL;
      ATerm w_72 (ATerm t)
      {
        if(((s_72 != NULL) && (s_72 != t_72)))
          _fail(t_72);
        else
          s_72 = t_72;
        return(t);
      }
      t = not_null(n_72);
      {
        t = k_0(t);
        {
          t_72 = t;
          t = w_72(t);
        }
      }
      t = (ATerm) ATinsert(CheckATermList(not_null(o_72)), not_null(s_72));
    }
    return(t);
  }
  k_72 = t;
  i_72 :
  if(match_string(k_72, "register-usage-info"))
    {
      t = u_72(t);
    }
  else
    {
      if(((ATgetType(k_72) == AT_LIST) && !(ATisEmpty(k_72))))
        {
          l_72 = ATgetFirst((ATermList) k_72);
          m_72 = (ATerm) ATgetNext((ATermList) k_72);
          j_72 :
          if(((ATgetType(m_72) == AT_LIST) && !(ATisEmpty(m_72))))
            {
              n_72 = ATgetFirst((ATermList) m_72);
              o_72 = (ATerm) ATgetNext((ATermList) m_72);
              t = v_72(t);
            }
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
  ATerm f_3 (ATerm t)
  {
    ATerm a_73 = NULL;
    a_73 = t;
    x_72 :
    if(!(match_string(a_73, "-i")))
      {
        if(!(match_string(a_73, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    ATerm d_73 = NULL;
    ATerm u_12;
    u_12 = t;
    {
      ATerm b_73 = NULL;
      ATerm c_73 = NULL;
      ATerm f_73 (ATerm t)
      {
        if(((b_73 != NULL) && (b_73 != c_73)))
          _fail(c_73);
        else
          b_73 = c_73;
        return(t);
      }
      c_73 = t;
      t = f_73(t);
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_12, not_null(b_73));
        t = set_config_0(t);
      }
    }
    t = u_12;
    {
      ATerm e_73 = NULL;
      ATerm g_73 (ATerm t)
      {
        if(((d_73 != NULL) && (d_73 != e_73)))
          _fail(e_73);
        else
          d_73 = e_73;
        return(t);
      }
      e_73 = t;
      t = g_73(t);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_73));
    }
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_w_12;
    return(t);
  }
  t = ArgOption_3(t, f_3, g_3, h_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm i_73 = NULL;
  t = report_run_time_0(t);
  {
    ATerm j_73 = NULL;
    ATerm k_73 (ATerm t)
    {
      if(((i_73 != NULL) && (i_73 != j_73)))
        _fail(j_73);
      else
        i_73 = j_73;
      return(t);
    }
    t = term_k_9;
    {
      t = whoami_0(t);
      {
        j_73 = t;
        t = k_73(t);
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_9, (ATerm) ATinsert(ATinsert(ATempty, term_d_13), not_null(i_73)));
      {
        t = printnl_0(t);
        {
          t = term_o_9;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_e_13;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm m_73 = NULL;
  ATerm o_73 (ATerm t)
  {
    t = SSL_TicksToSeconds(not_null(m_73));
    return(t);
  }
  m_73 = t;
  t = o_73(t);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm r_73 = NULL,y_73 = NULL,z_73 = NULL;
  ATerm l_74 (ATerm t)
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(y_73), not_null(z_73));
        ;
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        t = SSL_addr(not_null(y_73), not_null(z_73));
      }
    return(t);
  }
  r_73 = t;
  q_73 :
  if(match_cons(r_73, sym__2))
    {
      y_73 = ATgetArgument(r_73, 0);
      z_73 = ATgetArgument(r_73, 1);
      t = l_74(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm f_88 (ATerm), ATerm g_88 (ATerm))
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = f_88(t);
      ;
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      {
        ATerm p_74 = NULL,q_74 = NULL,w_74 = NULL;
        ATerm b_75 (ATerm t)
        {
          ATerm z_74 = NULL;
          ATerm a_75 = NULL;
          ATerm c_75 (ATerm t)
          {
            if(((z_74 != NULL) && (z_74 != a_75)))
              _fail(a_75);
            else
              z_74 = a_75;
            return(t);
          }
          t = not_null(w_74);
          {
            t = foldr_2(t, f_88, g_88);
            {
              a_75 = t;
              t = c_75(t);
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_74), not_null(z_74));
            t = g_88(t);
          }
          return(t);
        }
        p_74 = t;
        o_74 :
        if(((ATgetType(p_74) == AT_LIST) && !(ATisEmpty(p_74))))
          {
            q_74 = ATgetFirst((ATermList) p_74);
            w_74 = (ATerm) ATgetNext((ATermList) p_74);
            t = b_75(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2 (ATerm t, ATerm y_91 (ATerm), ATerm z_91 (ATerm))
{
  ATerm h_75 = NULL;
  ATerm p_75 (ATerm t)
  {
    ATerm j_75 = NULL;
    ATerm k_75 = NULL;
    ATerm q_75 (ATerm t)
    {
      ATerm m_75 = NULL,n_75 = NULL,o_75 = NULL;
      ATerm r_75 (ATerm t)
      {
        if(((j_75 != NULL) && (j_75 != o_75)))
          _fail(o_75);
        else
          j_75 = o_75;
        return(t);
      }
      t = SSL_explode_term(not_null(k_75));
      {
        m_75 = t;
        g_75 :
        if(match_cons(m_75, sym__2))
          {
            n_75 = ATgetArgument(m_75, 0);
            o_75 = ATgetArgument(m_75, 1);
            t = r_75(t);
          }
        else
          {
            _fail(t);
          }
      }
      return(t);
    }
    t = not_null(h_75);
    {
      k_75 = t;
      t = q_75(t);
    }
    {
      t = not_null(j_75);
      t = foldr_2(t, y_91, z_91);
    }
    return(t);
  }
  h_75 = t;
  t = p_75(t);
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
    ATerm i_3 (ATerm t)
    {
      t = term_t_11;
      return(t);
    }
    t = crush_2(t, i_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL;
  ATerm z_75 (ATerm t)
  {
    ATerm j_13;
    j_13 = t;
    {
      ATerm k_13 = t;
      int o_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_gti(not_null(v_75), not_null(w_75));
          ;
          LocalPopChoice(o_13);
        }
      else
        {
          t = k_13;
          t = SSL_gtr(not_null(v_75), not_null(w_75));
        }
    }
    t = j_13;
    return(t);
  }
  u_75 = t;
  t_75 :
  if(match_cons(u_75, sym__2))
    {
      v_75 = ATgetArgument(u_75, 0);
      w_75 = ATgetArgument(u_75, 1);
      t = z_75(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm c_76 = NULL;
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL;
      ATerm g_76 (ATerm t)
      {
        if(((c_76 != NULL) && (c_76 != e_76)))
          _fail(e_76);
        else
          c_76 = e_76;
        if(((c_76 != NULL) && (c_76 != f_76)))
          _fail(f_76);
        else
          c_76 = f_76;
        return(t);
      }
      d_76 = t;
      b_76 :
      if(match_cons(d_76, sym__2))
        {
          e_76 = ATgetArgument(d_76, 0);
          f_76 = ATgetArgument(d_76, 1);
          t = g_76(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm t_95 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm s_13;
    s_13 = t;
    {
      ATerm i_76 = NULL;
      ATerm j_76 = NULL;
      ATerm k_76 (ATerm t)
      {
        if(((i_76 != NULL) && (i_76 != j_76)))
          _fail(j_76);
        else
          i_76 = j_76;
        return(t);
      }
      t = term_h_10;
      {
        t = get_config_0(t);
        {
          j_76 = t;
          t = k_76(t);
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_76), term_o_9);
        t = geq_0(t);
      }
    }
    t = s_13;
    t = t_95(t);
    return(t);
  }
  t = try_1(t, j_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm n_76 = NULL,p_76 = NULL;
    ATerm t_13;
    t_13 = t;
    {
      ATerm o_76 = NULL;
      ATerm r_76 (ATerm t)
      {
        if(((n_76 != NULL) && (n_76 != o_76)))
          _fail(o_76);
        else
          n_76 = o_76;
        return(t);
      }
      t = run_time_0(t);
      {
        o_76 = t;
        t = r_76(t);
      }
    }
    t = t_13;
    {
      ATerm q_76 = NULL;
      ATerm s_76 (ATerm t)
      {
        if(((p_76 != NULL) && (p_76 != q_76)))
          _fail(q_76);
        else
          p_76 = q_76;
        return(t);
      }
      t = term_k_9;
      {
        t = whoami_0(t);
        {
          q_76 = t;
          t = s_76(t);
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_13), not_null(n_76)), term_u_13), not_null(p_76)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, k_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_t_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_76 = NULL;
  ATerm d_77 (ATerm t)
  {
    ATerm z_76 = NULL,b_77 = NULL;
    ATerm w_13;
    w_13 = t;
    {
      ATerm a_77 = NULL;
      ATerm e_77 (ATerm t)
      {
        if(((z_76 != NULL) && (z_76 != a_77)))
          _fail(a_77);
        else
          z_76 = a_77;
        return(t);
      }
      t = SSLgetAnnotations(not_null(x_76));
      {
        a_77 = t;
        t = e_77(t);
      }
    }
    t = w_13;
    {
      ATerm c_77 = NULL;
      ATerm f_77 (ATerm t)
      {
        if(((b_77 != NULL) && (b_77 != c_77)))
          _fail(c_77);
        else
          b_77 = c_77;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(z_76));
      {
        c_77 = t;
        t = f_77(t);
      }
      t = not_null(b_77);
    }
    return(t);
  }
  x_76 = t;
  w_76 :
  if(match_cons(x_76, sym_Version_0))
    {
      t = d_77(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_98 (ATerm))
{
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_13;
      t = get_config_0(t);
      ;
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        ATerm l_3 (ATerm t)
        {
          ATerm a_14 = t;
          int b_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(b_14);
            }
          else
            {
              t = a_14;
              {
                ATerm c_14 = t;
                int d_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(d_14);
                  }
                else
                  {
                    t = c_14;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, l_3);
      }
    }
  t = q_98(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm h_77 = NULL;
  ATerm j_77 (ATerm t)
  {
    t = SSL_table_create(not_null(h_77));
    return(t);
  }
  h_77 = t;
  t = j_77(t);
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm l_77 = NULL;
  ATerm n_77 (ATerm t)
  {
    ATerm h_14;
    h_14 = t;
    {
      t = term_i_14;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_i_14, term_m_14, not_null(l_77));
          t = table_put_0(t);
        }
      }
    }
    t = h_14;
    return(t);
  }
  l_77 = t;
  t = n_77(t);
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm p_77 = NULL;
  ATerm r_77 (ATerm t)
  {
    t = SSL_table_destroy(not_null(p_77));
    return(t);
  }
  p_77 = t;
  t = r_77(t);
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm t_77 = NULL;
  ATerm v_77 (ATerm t)
  {
    t = SSL_exit(not_null(t_77));
    return(t);
  }
  t_77 = t;
  t = v_77(t);
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm r_100 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm g_82 (ATerm))
{
  ATerm w_77 (ATerm t)
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        t = Cons_2(t, g_82, w_77);
      }
    return(t);
  }
  t = w_77(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm d_78 = NULL,e_78 = NULL,f_78 = NULL;
  ATerm o_78 (ATerm t)
  {
    ATerm i_78 = NULL;
    t = not_null(e_78);
    {
      ATerm u_14;
      u_14 = t;
      {
        ATerm j_78 = NULL,l_78 = NULL,n_78 = NULL;
        ATerm s_78 (ATerm t)
        {
          if(((i_78 != NULL) && (i_78 != n_78)))
            _fail(n_78);
          else
            i_78 = n_78;
          return(t);
        }
        ATerm x_14;
        x_14 = t;
        {
          ATerm k_78 = NULL;
          ATerm q_78 (ATerm t)
          {
            if(((j_78 != NULL) && (j_78 != k_78)))
              _fail(k_78);
            else
              j_78 = k_78;
            return(t);
          }
          t = i_0(t);
          {
            k_78 = t;
            t = q_78(t);
          }
        }
        t = x_14;
        {
          ATerm m_78 = NULL;
          ATerm r_78 (ATerm t)
          {
            if(((l_78 != NULL) && (l_78 != m_78)))
              _fail(m_78);
            else
              l_78 = m_78;
            return(t);
          }
          t = not_null(d_78);
          {
            t = g_0(t);
            {
              m_78 = t;
              t = r_78(t);
            }
          }
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(j_78)), not_null(l_78));
            {
              n_78 = t;
              t = s_78(t);
            }
          }
        }
      }
      t = u_14;
      {
        ATerm m_3 (ATerm t)
        {
          t = not_null(i_78);
          return(t);
        }
        t = reverse_acc_2(t, g_0, m_3);
      }
    }
    return(t);
  }
  ATerm p_78 (ATerm t)
  {
    t = term_k_9;
    t = i_0(t);
    return(t);
  }
  f_78 = t;
  c_78 :
  if(((ATgetType(f_78) == AT_LIST) && !(ATisEmpty(f_78))))
    {
      d_78 = ATgetFirst((ATermList) f_78);
      e_78 = (ATerm) ATgetNext((ATermList) f_78);
      t = o_78(t);
    }
  else
    {
      if(((ATgetType(f_78) == AT_LIST) && ATisEmpty(f_78)))
        {
          t = p_78(t);
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
  ATerm n_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, n_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm q_100 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_73 (ATerm))
{
  ATerm y_78 = NULL,z_78 = NULL;
  ATerm i_79 (ATerm t)
  {
    ATerm c_79 = NULL,e_79 = NULL;
    ATerm k_79 (ATerm t)
    {
      ATerm g_79 = NULL;
      ATerm h_79 = NULL;
      ATerm l_79 (ATerm t)
      {
        if(((g_79 != NULL) && (g_79 != h_79)))
          _fail(h_79);
        else
          g_79 = h_79;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_79)), not_null(c_79));
      {
        h_79 = t;
        t = l_79(t);
      }
      t = not_null(g_79);
      return(t);
    }
    ATerm d_79 = NULL;
    ATerm j_79 (ATerm t)
    {
      if(((c_79 != NULL) && (c_79 != d_79)))
        _fail(d_79);
      else
        c_79 = d_79;
      return(t);
    }
    t = SSLgetAnnotations(not_null(y_78));
    {
      d_79 = t;
      t = j_79(t);
    }
    {
      t = not_null(z_78);
      {
        t = s_73(t);
        {
          e_79 = t;
          t = k_79(t);
        }
      }
    }
    return(t);
  }
  y_78 = t;
  x_78 :
  if(match_cons(y_78, sym_Program_1))
    {
      z_78 = ATgetArgument(y_78, 0);
      t = i_79(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0 (ATerm t)
{
  ATerm q_79 = NULL;
  ATerm y_14 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_79 = NULL;
      ATerm x_79 (ATerm t)
      {
        if(((q_79 != NULL) && (q_79 != r_79)))
          _fail(r_79);
        else
          q_79 = r_79;
        return(t);
      }
      t = term_e_13;
      {
        t = get_config_0(t);
        {
          r_79 = t;
          t = x_79(t);
        }
      }
      ;
      LocalPopChoice(c_15);
    }
  else
    {
      t = y_14;
      {
        ATerm o_3 (ATerm t)
        {
          ATerm p_3 (ATerm t)
          {
            ATerm s_79 = NULL;
            ATerm y_79 (ATerm t)
            {
              if(((q_79 != NULL) && (q_79 != s_79)))
                _fail(s_79);
              else
                q_79 = s_79;
              return(t);
            }
            s_79 = t;
            t = y_79(t);
            return(t);
          }
          t = Program_1(t, p_3);
          return(t);
        }
        t = option_defined_1(t, o_3);
      }
    }
  {
    ATerm q_3 (ATerm t)
    {
      ATerm r_3 (ATerm t)
      {
        t = not_null(q_79);
        return(t);
      }
      t = short_description_1(t, r_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, q_3);
    {
      t = term_r_15;
      {
        t = echo_0(t);
        {
          t = term_u_15;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_3 (ATerm t)
                {
                  ATerm t_79 = NULL;
                  ATerm u_79 = NULL;
                  ATerm z_79 (ATerm t)
                  {
                    if(((t_79 != NULL) && (t_79 != u_79)))
                      _fail(u_79);
                    else
                      t_79 = u_79;
                    return(t);
                  }
                  u_79 = t;
                  t = z_79(t);
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_79)), term_y_15);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_3);
                {
                  ATerm t_3 (ATerm t)
                  {
                    ATerm v_79 = NULL;
                    ATerm w_79 = NULL;
                    ATerm a_80 (ATerm t)
                    {
                      if(((v_79 != NULL) && (v_79 != w_79)))
                        _fail(w_79);
                      else
                        v_79 = w_79;
                      return(t);
                    }
                    ATerm u_3 (ATerm t)
                    {
                      t = not_null(q_79);
                      return(t);
                    }
                    t = long_description_1(t, u_3);
                    {
                      w_79 = t;
                      t = a_80(t);
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(v_79)), term_z_15);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, t_3);
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
  ATerm d_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(k_16);
    }
  else
    {
      t = d_16;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm t_73 (ATerm))
{
  ATerm g_80 = NULL,h_80 = NULL;
  ATerm q_80 (ATerm t)
  {
    ATerm k_80 = NULL,m_80 = NULL;
    ATerm s_80 (ATerm t)
    {
      ATerm o_80 = NULL;
      ATerm p_80 = NULL;
      ATerm t_80 (ATerm t)
      {
        if(((o_80 != NULL) && (o_80 != p_80)))
          _fail(p_80);
        else
          o_80 = p_80;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_80)), not_null(k_80));
      {
        p_80 = t;
        t = t_80(t);
      }
      t = not_null(o_80);
      return(t);
    }
    ATerm l_80 = NULL;
    ATerm r_80 (ATerm t)
    {
      if(((k_80 != NULL) && (k_80 != l_80)))
        _fail(l_80);
      else
        k_80 = l_80;
      return(t);
    }
    t = SSLgetAnnotations(not_null(g_80));
    {
      l_80 = t;
      t = r_80(t);
    }
    {
      t = not_null(h_80);
      {
        t = t_73(t);
        {
          m_80 = t;
          t = s_80(t);
        }
      }
    }
    return(t);
  }
  g_80 = t;
  f_80 :
  if(match_cons(g_80, sym_Undefined_1))
    {
      h_80 = ATgetArgument(g_80, 0);
      t = q_80(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm p_82 (ATerm))
{
  ATerm u_80 (ATerm t)
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, p_82, _id);
        ;
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
        t = Cons_2(t, _id, u_80);
      }
    return(t);
  }
  t = u_80(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_99 (ATerm))
{
  t = fetch_1(t, q_99);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL;
  w_80 = t;
  v_80 :
  if(((ATgetType(w_80) == AT_LIST) && ATisEmpty(w_80)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(w_80) == AT_LIST) && !(ATisEmpty(w_80))))
        {
          x_80 = ATgetFirst((ATermList) w_80);
          y_80 = (ATerm) ATgetNext((ATermList) w_80);
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
  ATerm n_16;
  n_16 = t;
  {
    ATerm b_81 = NULL;
    ATerm e_81 = NULL;
    ATerm g_81 (ATerm t)
    {
      if(((b_81 != NULL) && (b_81 != e_81)))
        _fail(e_81);
      else
        b_81 = e_81;
      return(t);
    }
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        {
          ATerm c_81 = NULL;
          ATerm d_81 = NULL;
          ATerm f_81 (ATerm t)
          {
            if(((c_81 != NULL) && (c_81 != d_81)))
              _fail(d_81);
            else
              c_81 = d_81;
            return(t);
          }
          d_81 = t;
          t = f_81(t);
          t = (ATerm) ATinsert(ATempty, not_null(c_81));
        }
      }
    {
      e_81 = t;
      t = g_81(t);
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_10, not_null(b_81));
      t = printnl_0(t);
    }
  }
  t = n_16;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_e_13;
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
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_81 = NULL;
  ATerm r_81 (ATerm t)
  {
    ATerm n_81 = NULL,p_81 = NULL;
    ATerm w_16;
    w_16 = t;
    {
      ATerm o_81 = NULL;
      ATerm s_81 (ATerm t)
      {
        if(((n_81 != NULL) && (n_81 != o_81)))
          _fail(o_81);
        else
          n_81 = o_81;
        return(t);
      }
      t = SSLgetAnnotations(not_null(l_81));
      {
        o_81 = t;
        t = s_81(t);
      }
    }
    t = w_16;
    {
      ATerm q_81 = NULL;
      ATerm t_81 (ATerm t)
      {
        if(((p_81 != NULL) && (p_81 != q_81)))
          _fail(q_81);
        else
          p_81 = q_81;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(n_81));
      {
        q_81 = t;
        t = t_81(t);
      }
      t = not_null(p_81);
    }
    return(t);
  }
  l_81 = t;
  k_81 :
  if(match_cons(l_81, sym_Help_0))
    {
      t = r_81(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_74 (ATerm))
{
  ATerm a_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_74(t);
      ;
      LocalPopChoice(c_17);
    }
  else
    {
      t = a_17;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_3 (ATerm t)
      {
        ATerm w_81 = NULL;
        w_81 = t;
        u_81 :
        if(!(match_string(w_81, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm w_3 (ATerm t)
      {
        t = term_n_17;
        t = set_config_0(t);
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        t = term_o_17;
        return(t);
      }
      t = Option_3(t, v_3, w_3, x_3);
      ;
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
      {
        ATerm y_3 (ATerm t)
        {
          ATerm x_81 = NULL;
          x_81 = t;
          v_81 :
          if(!(match_string(x_81, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm z_3 (ATerm t)
        {
          t = term_n_17;
          {
            t = set_config_0(t);
            {
              t = term_u_17;
              t = set_config_0(t);
            }
          }
          t = term_v_17;
          return(t);
        }
        ATerm a_4 (ATerm t)
        {
          t = term_z_17;
          return(t);
        }
        t = Option_3(t, y_3, z_3, a_4);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL;
  ATerm k_82 (ATerm t)
  {
    t = SSL_table_get(not_null(b_82), not_null(c_82));
    return(t);
  }
  a_82 = t;
  z_81 :
  if(match_cons(a_82, sym__2))
    {
      b_82 = ATgetArgument(a_82, 0);
      c_82 = ATgetArgument(a_82, 1);
      t = k_82(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm o_82 = NULL,r_82 = NULL,s_82 = NULL,t_82 = NULL;
  ATerm b_83 (ATerm t)
  {
    ATerm b_18;
    b_18 = t;
    {
      ATerm z_82 = NULL;
      ATerm a_83 = NULL;
      ATerm c_83 (ATerm t)
      {
        if(((z_82 != NULL) && (z_82 != a_83)))
          _fail(a_83);
        else
          z_82 = a_83;
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_82), not_null(s_82));
      {
        ATerm j_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = table_get_0(t);
            ;
            LocalPopChoice(k_18);
          }
        else
          {
            t = j_18;
            t = (ATerm) ATempty;
          }
        {
          a_83 = t;
          t = c_83(t);
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__3, not_null(r_82), not_null(s_82), (ATerm) ATinsert(CheckATermList(not_null(z_82)), not_null(t_82)));
        t = table_put_0(t);
      }
    }
    t = b_18;
    return(t);
  }
  o_82 = t;
  n_82 :
  if(match_cons(o_82, sym__3))
    {
      r_82 = ATgetArgument(o_82, 0);
      s_82 = ATgetArgument(o_82, 1);
      t_82 = ATgetArgument(o_82, 2);
      t = b_83(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm v_100 (ATerm))
{
  ATerm e_83 = NULL;
  ATerm f_83 = NULL;
  ATerm g_83 (ATerm t)
  {
    if(((e_83 != NULL) && (e_83 != f_83)))
      _fail(f_83);
    else
      e_83 = f_83;
    return(t);
  }
  t = term_k_9;
  {
    t = v_100(t);
    {
      f_83 = t;
      t = g_83(t);
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_15, term_t_15, not_null(e_83));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL;
  ATerm s_83 (ATerm t)
  {
    t = register_usage_1(t, d_0);
    return(t);
  }
  ATerm t_83 (ATerm t)
  {
    ATerm q_83 = NULL;
    ATerm l_18;
    l_18 = t;
    {
      t = not_null(m_83);
      t = a_0(t);
    }
    t = l_18;
    {
      ATerm r_83 = NULL;
      ATerm u_83 (ATerm t)
      {
        if(((q_83 != NULL) && (q_83 != r_83)))
          _fail(r_83);
        else
          q_83 = r_83;
        return(t);
      }
      t = term_k_9;
      {
        t = b_0(t);
        {
          r_83 = t;
          t = u_83(t);
        }
      }
      t = (ATerm) ATinsert(CheckATermList(not_null(n_83)), not_null(q_83));
    }
    return(t);
  }
  l_83 = t;
  k_83 :
  if(match_string(l_83, "register-usage-info"))
    {
      t = s_83(t);
    }
  else
    {
      if(((ATgetType(l_83) == AT_LIST) && !(ATisEmpty(l_83))))
        {
          m_83 = ATgetFirst((ATermList) l_83);
          n_83 = (ATerm) ATgetNext((ATermList) l_83);
          t = t_83(t);
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
  ATerm b_4 (ATerm t)
  {
    ATerm w_83 = NULL;
    w_83 = t;
    v_83 :
    if(!(match_string(w_83, "--help")))
      {
        if(!(match_string(w_83, "-h")))
          {
            if(!(match_string(w_83, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_m_18;
    {
      t = set_config_0(t);
      t = term_n_18;
    }
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    t = term_o_18;
    return(t);
  }
  t = Option_3(t, b_4, c_4, d_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm z_83 = NULL,a_84 = NULL,b_84 = NULL;
  ATerm e_84 (ATerm t)
  {
    t = (ATerm) ATinsert(CheckATermList(not_null(b_84)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_84)));
    return(t);
  }
  z_83 = t;
  y_83 :
  if(((ATgetType(z_83) == AT_LIST) && !(ATisEmpty(z_83))))
    {
      a_84 = ATgetFirst((ATermList) z_83);
      b_84 = (ATerm) ATgetNext((ATermList) z_83);
      t = e_84(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_61 (ATerm), ATerm i_61 (ATerm))
{
  ATerm l_84 = NULL,m_84 = NULL,n_84 = NULL;
  ATerm z_84 (ATerm t)
  {
    ATerm r_84 = NULL,t_84 = NULL;
    ATerm b_85 (ATerm t)
    {
      ATerm v_84 = NULL;
      ATerm c_85 (ATerm t)
      {
        ATerm x_84 = NULL;
        ATerm y_84 = NULL;
        ATerm d_85 (ATerm t)
        {
          if(((x_84 != NULL) && (x_84 != y_84)))
            _fail(y_84);
          else
            x_84 = y_84;
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(v_84)), not_null(t_84)), not_null(r_84));
        {
          y_84 = t;
          t = d_85(t);
        }
        t = not_null(x_84);
        return(t);
      }
      t = not_null(n_84);
      {
        t = i_61(t);
        {
          v_84 = t;
          t = c_85(t);
        }
      }
      return(t);
    }
    ATerm s_84 = NULL;
    ATerm a_85 (ATerm t)
    {
      if(((r_84 != NULL) && (r_84 != s_84)))
        _fail(s_84);
      else
        r_84 = s_84;
      return(t);
    }
    t = SSLgetAnnotations(not_null(l_84));
    {
      s_84 = t;
      t = a_85(t);
    }
    {
      t = not_null(m_84);
      {
        t = h_61(t);
        {
          t_84 = t;
          t = b_85(t);
        }
      }
    }
    return(t);
  }
  l_84 = t;
  k_84 :
  if(((ATgetType(l_84) == AT_LIST) && !(ATisEmpty(l_84))))
    {
      m_84 = ATgetFirst((ATermList) l_84);
      n_84 = (ATerm) ATgetNext((ATermList) l_84);
      t = z_84(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm i_85 = NULL;
  ATerm o_85 (ATerm t)
  {
    ATerm k_85 = NULL,m_85 = NULL;
    ATerm u_18;
    u_18 = t;
    {
      ATerm l_85 = NULL;
      ATerm p_85 (ATerm t)
      {
        if(((k_85 != NULL) && (k_85 != l_85)))
          _fail(l_85);
        else
          k_85 = l_85;
        return(t);
      }
      t = SSLgetAnnotations(not_null(i_85));
      {
        l_85 = t;
        t = p_85(t);
      }
    }
    t = u_18;
    {
      ATerm n_85 = NULL;
      ATerm q_85 (ATerm t)
      {
        if(((m_85 != NULL) && (m_85 != n_85)))
          _fail(n_85);
        else
          m_85 = n_85;
        return(t);
      }
      t = SSLsetAnnotations((ATerm)ATempty, not_null(k_85));
      {
        n_85 = t;
        t = q_85(t);
      }
      t = not_null(m_85);
    }
    return(t);
  }
  i_85 = t;
  h_85 :
  if(((ATgetType(i_85) == AT_LIST) && ATisEmpty(i_85)))
    {
      t = o_85(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL;
  ATerm y_85 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_10, not_null(u_85), not_null(v_85));
    t = table_put_0(t);
    return(t);
  }
  t_85 = t;
  s_85 :
  if(match_cons(t_85, sym__2))
    {
      u_85 = ATgetArgument(t_85, 0);
      v_85 = ATgetArgument(t_85, 1);
      t = y_85(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm t_100 (ATerm))
{
  ATerm v_18;
  v_18 = t;
  {
    ATerm e_4 (ATerm t)
    {
      t = term_w_18;
      t = t_100(t);
      return(t);
    }
    t = try_1(t, e_4);
  }
  t = v_18;
  {
    ATerm f_4 (ATerm t)
    {
      ATerm d_86 = NULL;
      ATerm x_18;
      x_18 = t;
      {
        ATerm b_86 = NULL;
        ATerm c_86 = NULL;
        ATerm f_86 (ATerm t)
        {
          if(((b_86 != NULL) && (b_86 != c_86)))
            _fail(c_86);
          else
            b_86 = c_86;
          return(t);
        }
        c_86 = t;
        t = f_86(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_13, not_null(b_86));
          t = set_config_0(t);
        }
      }
      t = x_18;
      {
        ATerm e_86 = NULL;
        ATerm g_86 (ATerm t)
        {
          if(((d_86 != NULL) && (d_86 != e_86)))
            _fail(e_86);
          else
            d_86 = e_86;
          return(t);
        }
        e_86 = t;
        t = g_86(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(d_86));
      }
      return(t);
    }
    ATerm g_4 (ATerm t)
    {
      ATerm b_19 = t;
      int d_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_19 = t;
          int o_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(o_19);
            }
          else
            {
              t = f_19;
              {
                t = t_100(t);
                t = Cons_2(t, _id, g_4);
              }
            }
          ;
          LocalPopChoice(d_19);
        }
      else
        {
          t = b_19;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, f_4, g_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm k_86 = NULL,l_86 = NULL,m_86 = NULL;
  ATerm p_19;
  p_19 = t;
  {
    ATerm n_86 = NULL,o_86 = NULL,p_86 = NULL,q_86 = NULL;
    ATerm r_86 (ATerm t)
    {
      if(((k_86 != NULL) && (k_86 != o_86)))
        _fail(o_86);
      else
        k_86 = o_86;
      {
        if(((l_86 != NULL) && (l_86 != p_86)))
          _fail(p_86);
        else
          l_86 = p_86;
        {
          if(((m_86 != NULL) && (m_86 != q_86)))
            _fail(q_86);
          else
            m_86 = q_86;
          t = SSL_table_put(not_null(k_86), not_null(l_86), not_null(m_86));
        }
      }
      return(t);
    }
    n_86 = t;
    j_86 :
    if(match_cons(n_86, sym__3))
      {
        o_86 = ATgetArgument(n_86, 0);
        p_86 = ATgetArgument(n_86, 1);
        q_86 = ATgetArgument(n_86, 2);
        t = r_86(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = p_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_100 (ATerm))
{
  ATerm t_86 = NULL;
  ATerm q_19;
  q_19 = t;
  {
    t = term_r_19;
    t = table_put_0(t);
  }
  t = q_19;
  {
    ATerm h_4 (ATerm t)
    {
      ATerm s_19 = t;
      int t_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_100(t);
          ;
          LocalPopChoice(t_19);
        }
      else
        {
          t = s_19;
          {
            ATerm u_19 = t;
            int b_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(b_20);
              }
            else
              {
                t = u_19;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, h_4);
    {
      ATerm i_4 (ATerm t)
      {
        ATerm c_20 = t;
        int d_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_20;
            e_20 = t;
            {
              ATerm f_20 = t;
              int j_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_z_13;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(j_20);
                }
              else
                {
                  t = f_20;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = e_20;
            {
              t = system_usage_0(t);
              {
                t = term_t_11;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(d_20);
          }
        else
          {
            t = c_20;
            {
              ATerm l_20 = t;
              int n_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_20;
                  p_20 = t;
                  {
                    t = term_m_17;
                    t = get_config_0(t);
                  }
                  t = p_20;
                  {
                    t = system_about_0(t);
                    {
                      t = term_t_11;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(n_20);
                }
              else
                {
                  t = l_20;
                  {
                    ATerm j_4 (ATerm t)
                    {
                      ATerm k_4 (ATerm t)
                      {
                        ATerm u_86 = NULL;
                        ATerm v_86 (ATerm t)
                        {
                          if(((t_86 != NULL) && (t_86 != u_86)))
                            _fail(u_86);
                          else
                            t_86 = u_86;
                          return(t);
                        }
                        u_86 = t;
                        t = v_86(t);
                        return(t);
                      }
                      t = Undefined_1(t, k_4);
                      return(t);
                    }
                    t = option_defined_1(t, j_4);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_l_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_86)), term_z_20));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_o_9;
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
      t = try_1(t, i_4);
      {
        ATerm a_21;
        a_21 = t;
        {
          t = term_s_15;
          t = table_destroy_0(t);
        }
        t = a_21;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm v_98 (ATerm))
{
  t = parse_options_1(t, s_98);
  {
    t = store_options_0(t);
    {
      t = u_98(t);
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, t_98);
            ;
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            {
              ATerm d_21 = t;
              int i_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_98(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(i_21);
                }
              else
                {
                  t = d_21;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm h_98 (ATerm), ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm))
{
  ATerm l_4 (ATerm t)
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_98(t);
        ;
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, h_98);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, l_4, j_98, k_98, m_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm d_98 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    ATerm o_4 (ATerm t)
    {
      ATerm o_21;
      o_21 = t;
      {
        ATerm x_86 = NULL;
        ATerm y_86 = NULL;
        ATerm z_86 (ATerm t)
        {
          if(((x_86 != NULL) && (x_86 != y_86)))
            _fail(y_86);
          else
            x_86 = y_86;
          return(t);
        }
        t = term_e_13;
        {
          t = get_config_0(t);
          {
            y_86 = t;
            t = z_86(t);
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_9, (ATerm) ATinsert(ATempty, not_null(x_86)));
          t = printnl_0(t);
        }
      }
      t = o_21;
      return(t);
    }
    t = if_verbose2_1(t, o_4);
    return(t);
  }
  t = iowrap_4(t, b_98, c_98, d_98, n_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm z_97 (ATerm), ATerm a_98 (ATerm))
{
  t = iowrap_3(t, z_97, a_98, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm w_97 (ATerm))
{
  ATerm p_4 (ATerm t)
  {
    t = _2(t, _id, w_97);
    return(t);
  }
  t = iowrap_2(t, p_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
