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
  init_constant_terms();
}
ATerm term_i_18;
ATerm term_l_17;
ATerm term_a_17;
ATerm term_u_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_c_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_v_13;
ATerm term_r_13;
ATerm term_q_13;
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
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym__2, term_x_14, term_y_14);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__2, term_y_15, term_k_9);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_k_9);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym__2, term_v_13, term_k_9);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym__3, term_x_14, term_y_14, (ATerm) ATempty);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Continue_1 (ATerm, ATerm g_74 (ATerm));
ATerm Var_1 (ATerm, ATerm q_0 (ATerm));
ATerm Assign_1 (ATerm, ATerm j_74 (ATerm));
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm h_74 (ATerm), ATerm i_74 (ATerm));
ATerm Fun_2 (ATerm, ATerm k_74 (ATerm), ATerm l_74 (ATerm));
ATerm Alt_3 (ATerm, ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm f_74 (ATerm));
ATerm case_alternative_1 (ATerm, ATerm u_74 (ATerm));
ATerm Case_4 (ATerm, ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm));
ATerm Let_2 (ATerm, ATerm m_65 (ATerm), ATerm n_65 (ATerm));
ATerm Prim_2 (ATerm, ATerm q_66 (ATerm), ATerm r_66 (ATerm));
ATerm Where_1 (ATerm, ATerm m_66 (ATerm));
ATerm Scope_2 (ATerm, ATerm w_65 (ATerm), ATerm x_65 (ATerm));
ATerm Build_1 (ATerm, ATerm u_65 (ATerm));
ATerm Op_2 (ATerm, ATerm s_62 (ATerm), ATerm t_62 (ATerm));
ATerm As_2 (ATerm, ATerm b_63 (ATerm), ATerm c_63 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm h_63 (ATerm));
ATerm Str_1 (ATerm, ATerm p_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm o_0 (ATerm));
ATerm Int_1 (ATerm, ATerm n_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm match_term_exp_0 (ATerm);
ATerm Match_1 (ATerm, ATerm t_65 (ATerm));
ATerm Thread_1 (ATerm, ATerm c_67 (ATerm));
ATerm All_1 (ATerm, ATerm b_67 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm a_67 (ATerm));
ATerm Cong_2 (ATerm, ATerm m_61 (ATerm), ATerm n_61 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm x_66 (ATerm), ATerm y_66 (ATerm));
ATerm Rec_2 (ATerm, ATerm j_66 (ATerm), ATerm k_66 (ATerm));
ATerm SVar_1 (ATerm, ATerm l_65 (ATerm));
ATerm Call_2 (ATerm, ATerm o_65 (ATerm), ATerm p_65 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm e_66 (ATerm), ATerm f_66 (ATerm));
ATerm GChoice_2 (ATerm, ATerm e_65 (ATerm), ATerm f_65 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm g_66 (ATerm), ATerm h_66 (ATerm), ATerm i_66 (ATerm));
ATerm LChoice_2 (ATerm, ATerm c_66 (ATerm), ATerm d_66 (ATerm));
ATerm Choice_2 (ATerm, ATerm a_65 (ATerm), ATerm b_65 (ATerm));
ATerm Seq_2 (ATerm, ATerm a_66 (ATerm), ATerm b_66 (ATerm));
ATerm Test_1 (ATerm, ATerm n_66 (ATerm));
ATerm Not_1 (ATerm, ATerm l_66 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm x_67 (ATerm), ATerm y_67 (ATerm));
ATerm SDef_3 (ATerm, ATerm b_68 (ATerm), ATerm c_68 (ATerm), ATerm d_68 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm k_82 (ATerm));
ATerm Strategies_1 (ATerm, ATerm q_61 (ATerm));
ATerm Specification_1 (ATerm, ATerm v_61 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm z_59 (ATerm), ATerm a_60 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_82 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm w_95 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm s_94 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm u_97 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm e_94 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm w_89 (ATerm), ATerm x_89 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm h_88 (ATerm), ATerm i_88 (ATerm));
ATerm crush_2 (ATerm, ATerm a_92 (ATerm), ATerm b_92 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm v_95 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_98 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm t_100 (ATerm));
ATerm map_1 (ATerm, ATerm i_82 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm s_100 (ATerm));
ATerm Program_1 (ATerm, ATerm t_73 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm u_73 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_82 (ATerm));
ATerm option_defined_1 (ATerm, ATerm s_99 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_74 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm x_100 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm i_61 (ATerm), ATerm j_61 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm v_100 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm u_100 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm));
ATerm iowrap_4 (ATerm, ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm));
ATerm iowrap_3 (ATerm, ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm));
ATerm iowrap_2 (ATerm, ATerm b_98 (ATerm), ATerm c_98 (ATerm));
ATerm iowrap_1 (ATerm, ATerm y_97 (ATerm));
ATerm main_0 (ATerm);
ATerm Continue_1 (ATerm t, ATerm g_74 (ATerm))
{
  ATerm r_10 = NULL,v_10 = NULL;
  r_10 = t;
  q_10 :
  if(match_cons(r_10, sym_Continue_1))
    {
      v_10 = ATgetArgument(r_10, 0);
      {
        ATerm i_12 = NULL,k_12 = NULL;
        ATerm j_12 = NULL;
        t = SSLgetAnnotations(not_null(r_10));
        {
          j_12 = t;
          if(((i_12 != NULL) && (i_12 != j_12)))
            _fail(j_12);
          else
            i_12 = j_12;
        }
        {
          t = not_null(v_10);
          {
            ATerm z_12 = NULL;
            t = g_74(t);
            {
              k_12 = t;
              {
                ATerm a_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Continue_1, not_null(k_12)), not_null(i_12));
                {
                  a_13 = t;
                  if(((z_12 != NULL) && (z_12 != a_13)))
                    _fail(a_13);
                  else
                    z_12 = a_13;
                }
                t = not_null(z_12);
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
ATerm Var_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm f_14 = NULL,g_14 = NULL;
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
            ATerm j_14 = NULL,l_14 = NULL;
            ATerm k_14 = NULL;
            t = SSLgetAnnotations(not_null(f_14));
            {
              k_14 = t;
              if(((j_14 != NULL) && (j_14 != k_14)))
                _fail(k_14);
              else
                j_14 = k_14;
            }
            {
              t = not_null(g_14);
              {
                ATerm n_14 = NULL;
                t = q_0(t);
                {
                  l_14 = t;
                  {
                    ATerm o_14 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_14)), not_null(j_14));
                    {
                      o_14 = t;
                      if(((n_14 != NULL) && (n_14 != o_14)))
                        _fail(o_14);
                      else
                        n_14 = o_14;
                    }
                    t = not_null(n_14);
                  }
                }
              }
            }
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
                  ATerm r_14 = NULL,t_14 = NULL;
                  ATerm s_14 = NULL;
                  t = SSLgetAnnotations(not_null(f_14));
                  {
                    s_14 = t;
                    if(((r_14 != NULL) && (r_14 != s_14)))
                      _fail(s_14);
                    else
                      r_14 = s_14;
                  }
                  {
                    t = not_null(g_14);
                    {
                      ATerm v_14 = NULL;
                      t = q_0(t);
                      {
                        t_14 = t;
                        {
                          ATerm w_14 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(t_14)), not_null(r_14));
                          {
                            w_14 = t;
                            if(((v_14 != NULL) && (v_14 != w_14)))
                              _fail(w_14);
                            else
                              v_14 = w_14;
                          }
                          t = not_null(v_14);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(t_4);
                }
              else
                {
                  t = s_4;
                  {
                    ATerm z_14 = NULL,b_15 = NULL;
                    ATerm a_15 = NULL;
                    t = SSLgetAnnotations(not_null(f_14));
                    {
                      a_15 = t;
                      if(((z_14 != NULL) && (z_14 != a_15)))
                        _fail(a_15);
                      else
                        z_14 = a_15;
                    }
                    {
                      t = not_null(g_14);
                      {
                        ATerm d_15 = NULL;
                        t = q_0(t);
                        {
                          b_15 = t;
                          {
                            ATerm e_15 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(b_15)), not_null(z_14));
                            {
                              e_15 = t;
                              if(((d_15 != NULL) && (d_15 != e_15)))
                                _fail(e_15);
                              else
                                d_15 = e_15;
                            }
                            t = not_null(d_15);
                          }
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
ATerm Assign_1 (ATerm t, ATerm j_74 (ATerm))
{
  ATerm w_15 = NULL,x_15 = NULL;
  w_15 = t;
  v_15 :
  if(match_cons(w_15, sym_Assign_1))
    {
      x_15 = ATgetArgument(w_15, 0);
      {
        ATerm a_16 = NULL,c_16 = NULL;
        ATerm b_16 = NULL;
        t = SSLgetAnnotations(not_null(w_15));
        {
          b_16 = t;
          if(((a_16 != NULL) && (a_16 != b_16)))
            _fail(b_16);
          else
            a_16 = b_16;
        }
        {
          t = not_null(x_15);
          {
            ATerm e_16 = NULL;
            t = j_74(t);
            {
              c_16 = t;
              {
                ATerm f_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_1, not_null(c_16)), not_null(a_16));
                {
                  f_16 = t;
                  if(((e_16 != NULL) && (e_16 != f_16)))
                    _fail(f_16);
                  else
                    e_16 = f_16;
                }
                t = not_null(e_16);
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
ATerm Assign_2 (ATerm t, ATerm h_74 (ATerm), ATerm i_74 (ATerm))
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
  r_16 = t;
  q_16 :
  if(match_cons(r_16, sym_Assign_2))
    {
      s_16 = ATgetArgument(r_16, 0);
      t_16 = ATgetArgument(r_16, 1);
      {
        ATerm x_16 = NULL,z_16 = NULL;
        ATerm y_16 = NULL;
        t = SSLgetAnnotations(not_null(r_16));
        {
          y_16 = t;
          if(((x_16 != NULL) && (x_16 != y_16)))
            _fail(y_16);
          else
            x_16 = y_16;
        }
        {
          t = not_null(s_16);
          {
            ATerm b_17 = NULL;
            t = h_74(t);
            {
              z_16 = t;
              {
                t = not_null(t_16);
                {
                  ATerm d_17 = NULL;
                  t = i_74(t);
                  {
                    b_17 = t;
                    {
                      ATerm e_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(z_16), not_null(b_17)), not_null(x_16));
                      {
                        e_17 = t;
                        if(((d_17 != NULL) && (d_17 != e_17)))
                          _fail(e_17);
                        else
                          d_17 = e_17;
                      }
                      t = not_null(d_17);
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
ATerm Fun_2 (ATerm t, ATerm k_74 (ATerm), ATerm l_74 (ATerm))
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL;
  q_17 = t;
  p_17 :
  if(match_cons(q_17, sym_Fun_2))
    {
      r_17 = ATgetArgument(q_17, 0);
      s_17 = ATgetArgument(q_17, 1);
      {
        ATerm w_17 = NULL,y_17 = NULL;
        ATerm x_17 = NULL;
        t = SSLgetAnnotations(not_null(q_17));
        {
          x_17 = t;
          if(((w_17 != NULL) && (w_17 != x_17)))
            _fail(x_17);
          else
            w_17 = x_17;
        }
        {
          t = not_null(r_17);
          {
            ATerm a_18 = NULL;
            t = k_74(t);
            {
              y_17 = t;
              {
                t = not_null(s_17);
                {
                  ATerm c_18 = NULL;
                  t = l_74(t);
                  {
                    a_18 = t;
                    {
                      ATerm d_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fun_2, not_null(y_17), not_null(a_18)), not_null(w_17));
                      {
                        d_18 = t;
                        if(((c_18 != NULL) && (c_18 != d_18)))
                          _fail(d_18);
                        else
                          c_18 = d_18;
                      }
                      t = not_null(c_18);
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
ATerm Alt_3 (ATerm t, ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm f_74 (ATerm))
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL;
  q_18 = t;
  p_18 :
  if(match_cons(q_18, sym_Alt_3))
    {
      r_18 = ATgetArgument(q_18, 0);
      s_18 = ATgetArgument(q_18, 1);
      t_18 = ATgetArgument(q_18, 2);
      {
        ATerm y_18 = NULL,a_19 = NULL;
        ATerm z_18 = NULL;
        t = SSLgetAnnotations(not_null(q_18));
        {
          z_18 = t;
          if(((y_18 != NULL) && (y_18 != z_18)))
            _fail(z_18);
          else
            y_18 = z_18;
        }
        {
          t = not_null(r_18);
          {
            ATerm c_19 = NULL;
            t = d_74(t);
            {
              a_19 = t;
              {
                t = not_null(s_18);
                {
                  ATerm e_19 = NULL;
                  t = e_74(t);
                  {
                    c_19 = t;
                    {
                      t = not_null(t_18);
                      {
                        ATerm g_19 = NULL;
                        t = f_74(t);
                        {
                          e_19 = t;
                          {
                            ATerm h_19 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Alt_3, not_null(a_19), not_null(c_19), not_null(e_19)), not_null(y_18));
                            {
                              h_19 = t;
                              if(((g_19 != NULL) && (g_19 != h_19)))
                                _fail(h_19);
                              else
                                g_19 = h_19;
                            }
                            t = not_null(g_19);
                          }
                        }
                      }
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
ATerm case_alternative_1 (ATerm t, ATerm u_74 (ATerm))
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
      t = Alt_3(t, h_0, r_0, u_74);
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
ATerm Case_4 (ATerm t, ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm))
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL;
  w_19 = t;
  v_19 :
  if(match_cons(w_19, sym_Case_4))
    {
      x_19 = ATgetArgument(w_19, 0);
      y_19 = ATgetArgument(w_19, 1);
      z_19 = ATgetArgument(w_19, 2);
      a_20 = ATgetArgument(w_19, 3);
      {
        ATerm g_20 = NULL,i_20 = NULL;
        ATerm h_20 = NULL;
        t = SSLgetAnnotations(not_null(w_19));
        {
          h_20 = t;
          if(((g_20 != NULL) && (g_20 != h_20)))
            _fail(h_20);
          else
            g_20 = h_20;
        }
        {
          t = not_null(x_19);
          {
            ATerm k_20 = NULL;
            t = w_73(t);
            {
              i_20 = t;
              {
                t = not_null(y_19);
                {
                  ATerm m_20 = NULL;
                  t = x_73(t);
                  {
                    k_20 = t;
                    {
                      t = not_null(z_19);
                      {
                        ATerm o_20 = NULL;
                        t = y_73(t);
                        {
                          m_20 = t;
                          {
                            t = not_null(a_20);
                            {
                              ATerm q_20 = NULL;
                              t = z_73(t);
                              {
                                o_20 = t;
                                {
                                  ATerm r_20 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Case_4, not_null(i_20), not_null(k_20), not_null(m_20), not_null(o_20)), not_null(g_20));
                                  {
                                    r_20 = t;
                                    if(((q_20 != NULL) && (q_20 != r_20)))
                                      _fail(r_20);
                                    else
                                      q_20 = r_20;
                                  }
                                  t = not_null(q_20);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm m_65 (ATerm), ATerm n_65 (ATerm))
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
  f_21 = t;
  e_21 :
  if(match_cons(f_21, sym_Let_2))
    {
      g_21 = ATgetArgument(f_21, 0);
      h_21 = ATgetArgument(f_21, 1);
      {
        ATerm l_21 = NULL,n_21 = NULL;
        ATerm m_21 = NULL;
        t = SSLgetAnnotations(not_null(f_21));
        {
          m_21 = t;
          if(((l_21 != NULL) && (l_21 != m_21)))
            _fail(m_21);
          else
            l_21 = m_21;
        }
        {
          t = not_null(g_21);
          {
            ATerm p_21 = NULL;
            t = m_65(t);
            {
              n_21 = t;
              {
                t = not_null(h_21);
                {
                  ATerm r_21 = NULL;
                  t = n_65(t);
                  {
                    p_21 = t;
                    {
                      ATerm s_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(n_21), not_null(p_21)), not_null(l_21));
                      {
                        s_21 = t;
                        if(((r_21 != NULL) && (r_21 != s_21)))
                          _fail(s_21);
                        else
                          r_21 = s_21;
                      }
                      t = not_null(r_21);
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
ATerm Prim_2 (ATerm t, ATerm q_66 (ATerm), ATerm r_66 (ATerm))
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
  e_22 = t;
  d_22 :
  if(match_cons(e_22, sym_Prim_2))
    {
      f_22 = ATgetArgument(e_22, 0);
      g_22 = ATgetArgument(e_22, 1);
      {
        ATerm k_22 = NULL,m_22 = NULL;
        ATerm l_22 = NULL;
        t = SSLgetAnnotations(not_null(e_22));
        {
          l_22 = t;
          if(((k_22 != NULL) && (k_22 != l_22)))
            _fail(l_22);
          else
            k_22 = l_22;
        }
        {
          t = not_null(f_22);
          {
            ATerm o_22 = NULL;
            t = q_66(t);
            {
              m_22 = t;
              {
                t = not_null(g_22);
                {
                  ATerm q_22 = NULL;
                  t = r_66(t);
                  {
                    o_22 = t;
                    {
                      ATerm r_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(m_22), not_null(o_22)), not_null(k_22));
                      {
                        r_22 = t;
                        if(((q_22 != NULL) && (q_22 != r_22)))
                          _fail(r_22);
                        else
                          q_22 = r_22;
                      }
                      t = not_null(q_22);
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
ATerm Where_1 (ATerm t, ATerm m_66 (ATerm))
{
  ATerm c_23 = NULL,d_23 = NULL;
  c_23 = t;
  b_23 :
  if(match_cons(c_23, sym_Where_1))
    {
      d_23 = ATgetArgument(c_23, 0);
      {
        ATerm g_23 = NULL,i_23 = NULL;
        ATerm h_23 = NULL;
        t = SSLgetAnnotations(not_null(c_23));
        {
          h_23 = t;
          if(((g_23 != NULL) && (g_23 != h_23)))
            _fail(h_23);
          else
            g_23 = h_23;
        }
        {
          t = not_null(d_23);
          {
            ATerm k_23 = NULL;
            t = m_66(t);
            {
              i_23 = t;
              {
                ATerm l_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(i_23)), not_null(g_23));
                {
                  l_23 = t;
                  if(((k_23 != NULL) && (k_23 != l_23)))
                    _fail(l_23);
                  else
                    k_23 = l_23;
                }
                t = not_null(k_23);
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
ATerm Scope_2 (ATerm t, ATerm w_65 (ATerm), ATerm x_65 (ATerm))
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
  w_23 = t;
  v_23 :
  if(match_cons(w_23, sym_Scope_2))
    {
      x_23 = ATgetArgument(w_23, 0);
      y_23 = ATgetArgument(w_23, 1);
      {
        ATerm c_24 = NULL,e_24 = NULL;
        ATerm d_24 = NULL;
        t = SSLgetAnnotations(not_null(w_23));
        {
          d_24 = t;
          if(((c_24 != NULL) && (c_24 != d_24)))
            _fail(d_24);
          else
            c_24 = d_24;
        }
        {
          t = not_null(x_23);
          {
            ATerm g_24 = NULL;
            t = w_65(t);
            {
              e_24 = t;
              {
                t = not_null(y_23);
                {
                  ATerm i_24 = NULL;
                  t = x_65(t);
                  {
                    g_24 = t;
                    {
                      ATerm j_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(e_24), not_null(g_24)), not_null(c_24));
                      {
                        j_24 = t;
                        if(((i_24 != NULL) && (i_24 != j_24)))
                          _fail(j_24);
                        else
                          i_24 = j_24;
                      }
                      t = not_null(i_24);
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
ATerm Build_1 (ATerm t, ATerm u_65 (ATerm))
{
  ATerm u_24 = NULL,v_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym_Build_1))
    {
      v_24 = ATgetArgument(u_24, 0);
      {
        ATerm y_24 = NULL,a_25 = NULL;
        ATerm z_24 = NULL;
        t = SSLgetAnnotations(not_null(u_24));
        {
          z_24 = t;
          if(((y_24 != NULL) && (y_24 != z_24)))
            _fail(z_24);
          else
            y_24 = z_24;
        }
        {
          t = not_null(v_24);
          {
            ATerm c_25 = NULL;
            t = u_65(t);
            {
              a_25 = t;
              {
                ATerm d_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(a_25)), not_null(y_24));
                {
                  d_25 = t;
                  if(((c_25 != NULL) && (c_25 != d_25)))
                    _fail(d_25);
                  else
                    c_25 = d_25;
                }
                t = not_null(c_25);
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
ATerm Op_2 (ATerm t, ATerm s_62 (ATerm), ATerm t_62 (ATerm))
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
  o_25 = t;
  n_25 :
  if(match_cons(o_25, sym_Op_2))
    {
      p_25 = ATgetArgument(o_25, 0);
      q_25 = ATgetArgument(o_25, 1);
      {
        ATerm u_25 = NULL,w_25 = NULL;
        ATerm v_25 = NULL;
        t = SSLgetAnnotations(not_null(o_25));
        {
          v_25 = t;
          if(((u_25 != NULL) && (u_25 != v_25)))
            _fail(v_25);
          else
            u_25 = v_25;
        }
        {
          t = not_null(p_25);
          {
            ATerm y_25 = NULL;
            t = s_62(t);
            {
              w_25 = t;
              {
                t = not_null(q_25);
                {
                  ATerm a_26 = NULL;
                  t = t_62(t);
                  {
                    y_25 = t;
                    {
                      ATerm b_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(w_25), not_null(y_25)), not_null(u_25));
                      {
                        b_26 = t;
                        if(((a_26 != NULL) && (a_26 != b_26)))
                          _fail(b_26);
                        else
                          a_26 = b_26;
                      }
                      t = not_null(a_26);
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
ATerm As_2 (ATerm t, ATerm b_63 (ATerm), ATerm c_63 (ATerm))
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL;
  n_26 = t;
  m_26 :
  if(match_cons(n_26, sym_As_2))
    {
      o_26 = ATgetArgument(n_26, 0);
      p_26 = ATgetArgument(n_26, 1);
      {
        ATerm t_26 = NULL,v_26 = NULL;
        ATerm u_26 = NULL;
        t = SSLgetAnnotations(not_null(n_26));
        {
          u_26 = t;
          if(((t_26 != NULL) && (t_26 != u_26)))
            _fail(u_26);
          else
            t_26 = u_26;
        }
        {
          t = not_null(o_26);
          {
            ATerm x_26 = NULL;
            t = b_63(t);
            {
              v_26 = t;
              {
                t = not_null(p_26);
                {
                  ATerm z_26 = NULL;
                  t = c_63(t);
                  {
                    x_26 = t;
                    {
                      ATerm a_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(v_26), not_null(x_26)), not_null(t_26));
                      {
                        a_27 = t;
                        if(((z_26 != NULL) && (z_26 != a_27)))
                          _fail(a_27);
                        else
                          z_26 = a_27;
                      }
                      t = not_null(z_26);
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
ATerm BuildDefault_1 (ATerm t, ATerm h_63 (ATerm))
{
  ATerm l_27 = NULL,m_27 = NULL;
  l_27 = t;
  k_27 :
  if(match_cons(l_27, sym_BuildDefault_1))
    {
      m_27 = ATgetArgument(l_27, 0);
      {
        ATerm p_27 = NULL,r_27 = NULL;
        ATerm q_27 = NULL;
        t = SSLgetAnnotations(not_null(l_27));
        {
          q_27 = t;
          if(((p_27 != NULL) && (p_27 != q_27)))
            _fail(q_27);
          else
            p_27 = q_27;
        }
        {
          t = not_null(m_27);
          {
            ATerm y_27 = NULL;
            t = h_63(t);
            {
              r_27 = t;
              {
                ATerm z_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(r_27)), not_null(p_27));
                {
                  z_27 = t;
                  if(((y_27 != NULL) && (y_27 != z_27)))
                    _fail(z_27);
                  else
                    y_27 = z_27;
                }
                t = not_null(y_27);
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
  ATerm q_28 = NULL,r_28 = NULL;
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
            ATerm u_28 = NULL,w_28 = NULL;
            ATerm v_28 = NULL;
            t = SSLgetAnnotations(not_null(q_28));
            {
              v_28 = t;
              if(((u_28 != NULL) && (u_28 != v_28)))
                _fail(v_28);
              else
                u_28 = v_28;
            }
            {
              t = not_null(r_28);
              {
                ATerm y_28 = NULL;
                t = p_0(t);
                {
                  w_28 = t;
                  {
                    ATerm z_28 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(w_28)), not_null(u_28));
                    {
                      z_28 = t;
                      if(((y_28 != NULL) && (y_28 != z_28)))
                        _fail(z_28);
                      else
                        y_28 = z_28;
                    }
                    t = not_null(y_28);
                  }
                }
              }
            }
            ;
            LocalPopChoice(v_5);
          }
        else
          {
            t = u_5;
            {
              ATerm c_29 = NULL,e_29 = NULL;
              ATerm d_29 = NULL;
              t = SSLgetAnnotations(not_null(q_28));
              {
                d_29 = t;
                if(((c_29 != NULL) && (c_29 != d_29)))
                  _fail(d_29);
                else
                  c_29 = d_29;
              }
              {
                t = not_null(r_28);
                {
                  ATerm g_29 = NULL;
                  t = p_0(t);
                  {
                    e_29 = t;
                    {
                      ATerm h_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(e_29)), not_null(c_29));
                      {
                        h_29 = t;
                        if(((g_29 != NULL) && (g_29 != h_29)))
                          _fail(h_29);
                        else
                          g_29 = h_29;
                      }
                      t = not_null(g_29);
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
  ATerm r_29 = NULL;
  r_29 = t;
  t = SSL_is_real(not_null(r_29));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm d_30 = NULL,e_30 = NULL;
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
            ATerm h_30 = NULL,j_30 = NULL;
            ATerm i_30 = NULL;
            t = SSLgetAnnotations(not_null(d_30));
            {
              i_30 = t;
              if(((h_30 != NULL) && (h_30 != i_30)))
                _fail(i_30);
              else
                h_30 = i_30;
            }
            {
              t = not_null(e_30);
              {
                ATerm l_30 = NULL;
                t = o_0(t);
                {
                  j_30 = t;
                  {
                    ATerm m_30 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(j_30)), not_null(h_30));
                    {
                      m_30 = t;
                      if(((l_30 != NULL) && (l_30 != m_30)))
                        _fail(m_30);
                      else
                        l_30 = m_30;
                    }
                    t = not_null(l_30);
                  }
                }
              }
            }
            ;
            LocalPopChoice(x_5);
          }
        else
          {
            t = w_5;
            {
              ATerm p_30 = NULL,r_30 = NULL;
              ATerm q_30 = NULL;
              t = SSLgetAnnotations(not_null(d_30));
              {
                q_30 = t;
                if(((p_30 != NULL) && (p_30 != q_30)))
                  _fail(q_30);
                else
                  p_30 = q_30;
              }
              {
                t = not_null(e_30);
                {
                  ATerm t_30 = NULL;
                  t = o_0(t);
                  {
                    r_30 = t;
                    {
                      ATerm u_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(r_30)), not_null(p_30));
                      {
                        u_30 = t;
                        if(((t_30 != NULL) && (t_30 != u_30)))
                          _fail(u_30);
                        else
                          t_30 = u_30;
                      }
                      t = not_null(t_30);
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
  ATerm m_31 = NULL,n_31 = NULL;
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
            ATerm q_31 = NULL,s_31 = NULL;
            ATerm r_31 = NULL;
            t = SSLgetAnnotations(not_null(m_31));
            {
              r_31 = t;
              if(((q_31 != NULL) && (q_31 != r_31)))
                _fail(r_31);
              else
                q_31 = r_31;
            }
            {
              t = not_null(n_31);
              {
                ATerm u_31 = NULL;
                t = n_0(t);
                {
                  s_31 = t;
                  {
                    ATerm v_31 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(s_31)), not_null(q_31));
                    {
                      v_31 = t;
                      if(((u_31 != NULL) && (u_31 != v_31)))
                        _fail(v_31);
                      else
                        u_31 = v_31;
                    }
                    t = not_null(u_31);
                  }
                }
              }
            }
            ;
            LocalPopChoice(z_5);
          }
        else
          {
            t = y_5;
            {
              ATerm y_31 = NULL,a_32 = NULL;
              ATerm z_31 = NULL;
              t = SSLgetAnnotations(not_null(m_31));
              {
                z_31 = t;
                if(((y_31 != NULL) && (y_31 != z_31)))
                  _fail(z_31);
                else
                  y_31 = z_31;
              }
              {
                t = not_null(n_31);
                {
                  ATerm c_32 = NULL;
                  t = n_0(t);
                  {
                    a_32 = t;
                    {
                      ATerm d_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(a_32)), not_null(y_31));
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
  ATerm q_32 = NULL;
  q_32 = t;
  p_32 :
  if(match_cons(q_32, sym_Wld_0))
    {
      ATerm s_32 = NULL,u_32 = NULL;
      ATerm a_6;
      a_6 = t;
      {
        ATerm t_32 = NULL;
        t = SSLgetAnnotations(not_null(q_32));
        {
          t_32 = t;
          if(((s_32 != NULL) && (s_32 != t_32)))
            _fail(t_32);
          else
            s_32 = t_32;
        }
      }
      t = a_6;
      {
        ATerm v_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(s_32));
        {
          v_32 = t;
          if(((u_32 != NULL) && (u_32 != v_32)))
            _fail(v_32);
          else
            u_32 = v_32;
        }
        t = not_null(u_32);
      }
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
ATerm Match_1 (ATerm t, ATerm t_65 (ATerm))
{
  ATerm f_33 = NULL,g_33 = NULL;
  f_33 = t;
  e_33 :
  if(match_cons(f_33, sym_Match_1))
    {
      g_33 = ATgetArgument(f_33, 0);
      {
        ATerm j_33 = NULL,l_33 = NULL;
        ATerm k_33 = NULL;
        t = SSLgetAnnotations(not_null(f_33));
        {
          k_33 = t;
          if(((j_33 != NULL) && (j_33 != k_33)))
            _fail(k_33);
          else
            j_33 = k_33;
        }
        {
          t = not_null(g_33);
          {
            ATerm n_33 = NULL;
            t = t_65(t);
            {
              l_33 = t;
              {
                ATerm o_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(l_33)), not_null(j_33));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm c_67 (ATerm))
{
  ATerm y_33 = NULL,b_34 = NULL;
  y_33 = t;
  x_33 :
  if(match_cons(y_33, sym_Thread_1))
    {
      b_34 = ATgetArgument(y_33, 0);
      {
        ATerm e_34 = NULL,g_34 = NULL;
        ATerm f_34 = NULL;
        t = SSLgetAnnotations(not_null(y_33));
        {
          f_34 = t;
          if(((e_34 != NULL) && (e_34 != f_34)))
            _fail(f_34);
          else
            e_34 = f_34;
        }
        {
          t = not_null(b_34);
          {
            ATerm i_34 = NULL;
            t = c_67(t);
            {
              g_34 = t;
              {
                ATerm j_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(g_34)), not_null(e_34));
                {
                  j_34 = t;
                  if(((i_34 != NULL) && (i_34 != j_34)))
                    _fail(j_34);
                  else
                    i_34 = j_34;
                }
                t = not_null(i_34);
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
ATerm All_1 (ATerm t, ATerm b_67 (ATerm))
{
  ATerm t_34 = NULL,u_34 = NULL;
  t_34 = t;
  s_34 :
  if(match_cons(t_34, sym_All_1))
    {
      u_34 = ATgetArgument(t_34, 0);
      {
        ATerm x_34 = NULL,z_34 = NULL;
        ATerm y_34 = NULL;
        t = SSLgetAnnotations(not_null(t_34));
        {
          y_34 = t;
          if(((x_34 != NULL) && (x_34 != y_34)))
            _fail(y_34);
          else
            x_34 = y_34;
        }
        {
          t = not_null(u_34);
          {
            ATerm b_35 = NULL;
            t = b_67(t);
            {
              z_34 = t;
              {
                ATerm c_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(z_34)), not_null(x_34));
                {
                  c_35 = t;
                  if(((b_35 != NULL) && (b_35 != c_35)))
                    _fail(c_35);
                  else
                    b_35 = c_35;
                }
                t = not_null(b_35);
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
  ATerm s_35 = NULL,t_35 = NULL;
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
            ATerm w_35 = NULL,y_35 = NULL;
            ATerm x_35 = NULL;
            t = SSLgetAnnotations(not_null(s_35));
            {
              x_35 = t;
              if(((w_35 != NULL) && (w_35 != x_35)))
                _fail(x_35);
              else
                w_35 = x_35;
            }
            {
              t = not_null(t_35);
              {
                ATerm a_36 = NULL;
                t = m_0(t);
                {
                  y_35 = t;
                  {
                    ATerm b_36 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(y_35)), not_null(w_35));
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
              }
            }
            ;
            LocalPopChoice(t_6);
          }
        else
          {
            t = s_6;
            {
              ATerm e_36 = NULL,g_36 = NULL;
              ATerm f_36 = NULL;
              t = SSLgetAnnotations(not_null(s_35));
              {
                f_36 = t;
                if(((e_36 != NULL) && (e_36 != f_36)))
                  _fail(f_36);
                else
                  e_36 = f_36;
              }
              {
                t = not_null(t_35);
                {
                  ATerm i_36 = NULL;
                  t = m_0(t);
                  {
                    g_36 = t;
                    {
                      ATerm j_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(g_36)), not_null(e_36));
                      {
                        j_36 = t;
                        if(((i_36 != NULL) && (i_36 != j_36)))
                          _fail(j_36);
                        else
                          i_36 = j_36;
                      }
                      t = not_null(i_36);
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
ATerm One_1 (ATerm t, ATerm a_67 (ATerm))
{
  ATerm x_36 = NULL,y_36 = NULL;
  x_36 = t;
  w_36 :
  if(match_cons(x_36, sym_One_1))
    {
      y_36 = ATgetArgument(x_36, 0);
      {
        ATerm b_37 = NULL,d_37 = NULL;
        ATerm c_37 = NULL;
        t = SSLgetAnnotations(not_null(x_36));
        {
          c_37 = t;
          if(((b_37 != NULL) && (b_37 != c_37)))
            _fail(c_37);
          else
            b_37 = c_37;
        }
        {
          t = not_null(y_36);
          {
            ATerm f_37 = NULL;
            t = a_67(t);
            {
              d_37 = t;
              {
                ATerm g_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(d_37)), not_null(b_37));
                {
                  g_37 = t;
                  if(((f_37 != NULL) && (f_37 != g_37)))
                    _fail(g_37);
                  else
                    f_37 = g_37;
                }
                t = not_null(f_37);
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
ATerm Cong_2 (ATerm t, ATerm m_61 (ATerm), ATerm n_61 (ATerm))
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL;
  r_37 = t;
  q_37 :
  if(match_cons(r_37, sym_Cong_2))
    {
      s_37 = ATgetArgument(r_37, 0);
      t_37 = ATgetArgument(r_37, 1);
      {
        ATerm x_37 = NULL,z_37 = NULL;
        ATerm y_37 = NULL;
        t = SSLgetAnnotations(not_null(r_37));
        {
          y_37 = t;
          if(((x_37 != NULL) && (x_37 != y_37)))
            _fail(y_37);
          else
            x_37 = y_37;
        }
        {
          t = not_null(s_37);
          {
            ATerm b_38 = NULL;
            t = m_61(t);
            {
              z_37 = t;
              {
                t = not_null(t_37);
                {
                  ATerm d_38 = NULL;
                  t = n_61(t);
                  {
                    b_38 = t;
                    {
                      ATerm e_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(z_37), not_null(b_38)), not_null(x_37));
                      {
                        e_38 = t;
                        if(((d_38 != NULL) && (d_38 != e_38)))
                          _fail(e_38);
                        else
                          d_38 = e_38;
                      }
                      t = not_null(d_38);
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
  ATerm l_38 = NULL;
  l_38 = t;
  t = SSL_is_int(not_null(l_38));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm x_66 (ATerm), ATerm y_66 (ATerm))
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
  u_38 = t;
  t_38 :
  if(match_cons(u_38, sym_Path_2))
    {
      v_38 = ATgetArgument(u_38, 0);
      w_38 = ATgetArgument(u_38, 1);
      {
        ATerm a_39 = NULL,c_39 = NULL;
        ATerm b_39 = NULL;
        t = SSLgetAnnotations(not_null(u_38));
        {
          b_39 = t;
          if(((a_39 != NULL) && (a_39 != b_39)))
            _fail(b_39);
          else
            a_39 = b_39;
        }
        {
          t = not_null(v_38);
          {
            ATerm e_39 = NULL;
            t = x_66(t);
            {
              c_39 = t;
              {
                t = not_null(w_38);
                {
                  ATerm g_39 = NULL;
                  t = y_66(t);
                  {
                    e_39 = t;
                    {
                      ATerm h_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(c_39), not_null(e_39)), not_null(a_39));
                      {
                        h_39 = t;
                        if(((g_39 != NULL) && (g_39 != h_39)))
                          _fail(h_39);
                        else
                          g_39 = h_39;
                      }
                      t = not_null(g_39);
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
ATerm Rec_2 (ATerm t, ATerm j_66 (ATerm), ATerm k_66 (ATerm))
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL;
  t_39 = t;
  s_39 :
  if(match_cons(t_39, sym_Rec_2))
    {
      u_39 = ATgetArgument(t_39, 0);
      v_39 = ATgetArgument(t_39, 1);
      {
        ATerm z_39 = NULL,b_40 = NULL;
        ATerm a_40 = NULL;
        t = SSLgetAnnotations(not_null(t_39));
        {
          a_40 = t;
          if(((z_39 != NULL) && (z_39 != a_40)))
            _fail(a_40);
          else
            z_39 = a_40;
        }
        {
          t = not_null(u_39);
          {
            ATerm d_40 = NULL;
            t = j_66(t);
            {
              b_40 = t;
              {
                t = not_null(v_39);
                {
                  ATerm f_40 = NULL;
                  t = k_66(t);
                  {
                    d_40 = t;
                    {
                      ATerm g_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(b_40), not_null(d_40)), not_null(z_39));
                      {
                        g_40 = t;
                        if(((f_40 != NULL) && (f_40 != g_40)))
                          _fail(g_40);
                        else
                          f_40 = g_40;
                      }
                      t = not_null(f_40);
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
ATerm SVar_1 (ATerm t, ATerm l_65 (ATerm))
{
  ATerm v_40 = NULL,w_40 = NULL;
  v_40 = t;
  u_40 :
  if(match_cons(v_40, sym_SVar_1))
    {
      w_40 = ATgetArgument(v_40, 0);
      {
        ATerm z_40 = NULL,b_41 = NULL;
        ATerm a_41 = NULL;
        t = SSLgetAnnotations(not_null(v_40));
        {
          a_41 = t;
          if(((z_40 != NULL) && (z_40 != a_41)))
            _fail(a_41);
          else
            z_40 = a_41;
        }
        {
          t = not_null(w_40);
          {
            ATerm d_41 = NULL;
            t = l_65(t);
            {
              b_41 = t;
              {
                ATerm e_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(b_41)), not_null(z_40));
                {
                  e_41 = t;
                  if(((d_41 != NULL) && (d_41 != e_41)))
                    _fail(e_41);
                  else
                    d_41 = e_41;
                }
                t = not_null(d_41);
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
ATerm Call_2 (ATerm t, ATerm o_65 (ATerm), ATerm p_65 (ATerm))
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL;
  p_41 = t;
  o_41 :
  if(match_cons(p_41, sym_Call_2))
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
            t = o_65(t);
            {
              x_41 = t;
              {
                t = not_null(r_41);
                {
                  ATerm b_42 = NULL;
                  t = p_65(t);
                  {
                    z_41 = t;
                    {
                      ATerm c_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(x_41), not_null(z_41)), not_null(v_41));
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
ATerm LGChoice_2 (ATerm t, ATerm e_66 (ATerm), ATerm f_66 (ATerm))
{
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL;
  s_42 = t;
  r_42 :
  if(match_cons(s_42, sym_LGChoice_2))
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
            t = e_66(t);
            {
              a_43 = t;
              {
                t = not_null(u_42);
                {
                  ATerm e_43 = NULL;
                  t = f_66(t);
                  {
                    c_43 = t;
                    {
                      ATerm f_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(a_43), not_null(c_43)), not_null(y_42));
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
ATerm GChoice_2 (ATerm t, ATerm e_65 (ATerm), ATerm f_65 (ATerm))
{
  ATerm t_43 = NULL,u_43 = NULL,w_43 = NULL;
  t_43 = t;
  s_43 :
  if(match_cons(t_43, sym_GChoice_2))
    {
      u_43 = ATgetArgument(t_43, 0);
      w_43 = ATgetArgument(t_43, 1);
      {
        ATerm a_44 = NULL,c_44 = NULL;
        ATerm b_44 = NULL;
        t = SSLgetAnnotations(not_null(t_43));
        {
          b_44 = t;
          if(((a_44 != NULL) && (a_44 != b_44)))
            _fail(b_44);
          else
            a_44 = b_44;
        }
        {
          t = not_null(u_43);
          {
            ATerm e_44 = NULL;
            t = e_65(t);
            {
              c_44 = t;
              {
                t = not_null(w_43);
                {
                  ATerm g_44 = NULL;
                  t = f_65(t);
                  {
                    e_44 = t;
                    {
                      ATerm h_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(c_44), not_null(e_44)), not_null(a_44));
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
ATerm GuardedLChoice_3 (ATerm t, ATerm g_66 (ATerm), ATerm h_66 (ATerm), ATerm i_66 (ATerm))
{
  ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL;
  v_44 = t;
  u_44 :
  if(match_cons(v_44, sym_GuardedLChoice_3))
    {
      w_44 = ATgetArgument(v_44, 0);
      x_44 = ATgetArgument(v_44, 1);
      y_44 = ATgetArgument(v_44, 2);
      {
        ATerm d_45 = NULL,f_45 = NULL;
        ATerm e_45 = NULL;
        t = SSLgetAnnotations(not_null(v_44));
        {
          e_45 = t;
          if(((d_45 != NULL) && (d_45 != e_45)))
            _fail(e_45);
          else
            d_45 = e_45;
        }
        {
          t = not_null(w_44);
          {
            ATerm h_45 = NULL;
            t = g_66(t);
            {
              f_45 = t;
              {
                t = not_null(x_44);
                {
                  ATerm j_45 = NULL;
                  t = h_66(t);
                  {
                    h_45 = t;
                    {
                      t = not_null(y_44);
                      {
                        ATerm l_45 = NULL;
                        t = i_66(t);
                        {
                          j_45 = t;
                          {
                            ATerm m_45 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(f_45), not_null(h_45), not_null(j_45)), not_null(d_45));
                            {
                              m_45 = t;
                              if(((l_45 != NULL) && (l_45 != m_45)))
                                _fail(m_45);
                              else
                                l_45 = m_45;
                            }
                            t = not_null(l_45);
                          }
                        }
                      }
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
ATerm LChoice_2 (ATerm t, ATerm c_66 (ATerm), ATerm d_66 (ATerm))
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
  f_46 = t;
  e_46 :
  if(match_cons(f_46, sym_LChoice_2))
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
            t = c_66(t);
            {
              n_46 = t;
              {
                t = not_null(h_46);
                {
                  ATerm r_46 = NULL;
                  t = d_66(t);
                  {
                    p_46 = t;
                    {
                      ATerm s_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(n_46), not_null(p_46)), not_null(l_46));
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
ATerm Choice_2 (ATerm t, ATerm a_65 (ATerm), ATerm b_65 (ATerm))
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL;
  e_47 = t;
  d_47 :
  if(match_cons(e_47, sym_Choice_2))
    {
      f_47 = ATgetArgument(e_47, 0);
      g_47 = ATgetArgument(e_47, 1);
      {
        ATerm k_47 = NULL,m_47 = NULL;
        ATerm l_47 = NULL;
        t = SSLgetAnnotations(not_null(e_47));
        {
          l_47 = t;
          if(((k_47 != NULL) && (k_47 != l_47)))
            _fail(l_47);
          else
            k_47 = l_47;
        }
        {
          t = not_null(f_47);
          {
            ATerm o_47 = NULL;
            t = a_65(t);
            {
              m_47 = t;
              {
                t = not_null(g_47);
                {
                  ATerm q_47 = NULL;
                  t = b_65(t);
                  {
                    o_47 = t;
                    {
                      ATerm r_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(m_47), not_null(o_47)), not_null(k_47));
                      {
                        r_47 = t;
                        if(((q_47 != NULL) && (q_47 != r_47)))
                          _fail(r_47);
                        else
                          q_47 = r_47;
                      }
                      t = not_null(q_47);
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
ATerm Seq_2 (ATerm t, ATerm a_66 (ATerm), ATerm b_66 (ATerm))
{
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL;
  d_48 = t;
  c_48 :
  if(match_cons(d_48, sym_Seq_2))
    {
      e_48 = ATgetArgument(d_48, 0);
      f_48 = ATgetArgument(d_48, 1);
      {
        ATerm j_48 = NULL,l_48 = NULL;
        ATerm k_48 = NULL;
        t = SSLgetAnnotations(not_null(d_48));
        {
          k_48 = t;
          if(((j_48 != NULL) && (j_48 != k_48)))
            _fail(k_48);
          else
            j_48 = k_48;
        }
        {
          t = not_null(e_48);
          {
            ATerm n_48 = NULL;
            t = a_66(t);
            {
              l_48 = t;
              {
                t = not_null(f_48);
                {
                  ATerm p_48 = NULL;
                  t = b_66(t);
                  {
                    n_48 = t;
                    {
                      ATerm q_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(l_48), not_null(n_48)), not_null(j_48));
                      {
                        q_48 = t;
                        if(((p_48 != NULL) && (p_48 != q_48)))
                          _fail(q_48);
                        else
                          p_48 = q_48;
                      }
                      t = not_null(p_48);
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
ATerm Test_1 (ATerm t, ATerm n_66 (ATerm))
{
  ATerm f_49 = NULL,g_49 = NULL;
  f_49 = t;
  a_49 :
  if(match_cons(f_49, sym_Test_1))
    {
      g_49 = ATgetArgument(f_49, 0);
      {
        ATerm o_49 = NULL,q_49 = NULL;
        ATerm p_49 = NULL;
        t = SSLgetAnnotations(not_null(f_49));
        {
          p_49 = t;
          if(((o_49 != NULL) && (o_49 != p_49)))
            _fail(p_49);
          else
            o_49 = p_49;
        }
        {
          t = not_null(g_49);
          {
            ATerm s_49 = NULL;
            t = n_66(t);
            {
              q_49 = t;
              {
                ATerm t_49 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(q_49)), not_null(o_49));
                {
                  t_49 = t;
                  if(((s_49 != NULL) && (s_49 != t_49)))
                    _fail(t_49);
                  else
                    s_49 = t_49;
                }
                t = not_null(s_49);
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
ATerm Not_1 (ATerm t, ATerm l_66 (ATerm))
{
  ATerm d_50 = NULL,e_50 = NULL;
  d_50 = t;
  c_50 :
  if(match_cons(d_50, sym_Not_1))
    {
      e_50 = ATgetArgument(d_50, 0);
      {
        ATerm h_50 = NULL,j_50 = NULL;
        ATerm i_50 = NULL;
        t = SSLgetAnnotations(not_null(d_50));
        {
          i_50 = t;
          if(((h_50 != NULL) && (h_50 != i_50)))
            _fail(i_50);
          else
            h_50 = i_50;
        }
        {
          t = not_null(e_50);
          {
            ATerm n_50 = NULL;
            t = l_66(t);
            {
              j_50 = t;
              {
                ATerm o_50 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(j_50)), not_null(h_50));
                {
                  o_50 = t;
                  if(((n_50 != NULL) && (n_50 != o_50)))
                    _fail(o_50);
                  else
                    n_50 = o_50;
                }
                t = not_null(n_50);
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
  ATerm c_51 = NULL;
  c_51 = t;
  b_51 :
  if(match_cons(c_51, sym_Fail_0))
    {
      ATerm e_51 = NULL,g_51 = NULL;
      ATerm u_6;
      u_6 = t;
      {
        ATerm f_51 = NULL;
        t = SSLgetAnnotations(not_null(c_51));
        {
          f_51 = t;
          if(((e_51 != NULL) && (e_51 != f_51)))
            _fail(f_51);
          else
            e_51 = f_51;
        }
      }
      t = u_6;
      {
        ATerm h_51 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(e_51));
        {
          h_51 = t;
          if(((g_51 != NULL) && (g_51 != h_51)))
            _fail(h_51);
          else
            g_51 = h_51;
        }
        t = not_null(g_51);
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
  ATerm q_51 = NULL;
  q_51 = t;
  p_51 :
  if(match_cons(q_51, sym_Id_0))
    {
      ATerm s_51 = NULL,u_51 = NULL;
      ATerm v_6;
      v_6 = t;
      {
        ATerm t_51 = NULL;
        t = SSLgetAnnotations(not_null(q_51));
        {
          t_51 = t;
          if(((s_51 != NULL) && (s_51 != t_51)))
            _fail(t_51);
          else
            s_51 = t_51;
        }
      }
      t = v_6;
      {
        ATerm v_51 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(s_51));
        {
          v_51 = t;
          if(((u_51 != NULL) && (u_51 != v_51)))
            _fail(v_51);
          else
            u_51 = v_51;
        }
        t = not_null(u_51);
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
ATerm VarDec_2 (ATerm t, ATerm x_67 (ATerm), ATerm y_67 (ATerm))
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
  n_52 = t;
  m_52 :
  if(match_cons(n_52, sym_VarDec_2))
    {
      o_52 = ATgetArgument(n_52, 0);
      p_52 = ATgetArgument(n_52, 1);
      {
        ATerm t_52 = NULL,v_52 = NULL;
        ATerm u_52 = NULL;
        t = SSLgetAnnotations(not_null(n_52));
        {
          u_52 = t;
          if(((t_52 != NULL) && (t_52 != u_52)))
            _fail(u_52);
          else
            t_52 = u_52;
        }
        {
          t = not_null(o_52);
          {
            ATerm x_52 = NULL;
            t = x_67(t);
            {
              v_52 = t;
              {
                t = not_null(p_52);
                {
                  ATerm z_52 = NULL;
                  t = y_67(t);
                  {
                    x_52 = t;
                    {
                      ATerm a_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(v_52), not_null(x_52)), not_null(t_52));
                      {
                        a_53 = t;
                        if(((z_52 != NULL) && (z_52 != a_53)))
                          _fail(a_53);
                        else
                          z_52 = a_53;
                      }
                      t = not_null(z_52);
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
ATerm SDef_3 (ATerm t, ATerm b_68 (ATerm), ATerm c_68 (ATerm), ATerm d_68 (ATerm))
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL;
  n_53 = t;
  m_53 :
  if(match_cons(n_53, sym_SDef_3))
    {
      o_53 = ATgetArgument(n_53, 0);
      p_53 = ATgetArgument(n_53, 1);
      q_53 = ATgetArgument(n_53, 2);
      {
        ATerm v_53 = NULL,x_53 = NULL;
        ATerm w_53 = NULL;
        t = SSLgetAnnotations(not_null(n_53));
        {
          w_53 = t;
          if(((v_53 != NULL) && (v_53 != w_53)))
            _fail(w_53);
          else
            v_53 = w_53;
        }
        {
          t = not_null(o_53);
          {
            ATerm z_53 = NULL;
            t = b_68(t);
            {
              x_53 = t;
              {
                t = not_null(p_53);
                {
                  ATerm b_54 = NULL;
                  t = c_68(t);
                  {
                    z_53 = t;
                    {
                      t = not_null(q_53);
                      {
                        ATerm d_54 = NULL;
                        t = d_68(t);
                        {
                          b_54 = t;
                          {
                            ATerm e_54 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(x_53), not_null(z_53), not_null(b_54)), not_null(v_53));
                            {
                              e_54 = t;
                              if(((d_54 != NULL) && (d_54 != e_54)))
                                _fail(e_54);
                              else
                                d_54 = e_54;
                            }
                            t = not_null(d_54);
                          }
                        }
                      }
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
ATerm list_1 (ATerm t, ATerm k_82 (ATerm))
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
        t = Cons_2(t, k_82, l_54);
      }
    return(t);
  }
  t = l_54(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm q_61 (ATerm))
{
  ATerm r_54 = NULL,x_54 = NULL;
  r_54 = t;
  q_54 :
  if(match_cons(r_54, sym_Strategies_1))
    {
      x_54 = ATgetArgument(r_54, 0);
      {
        ATerm a_55 = NULL,c_55 = NULL;
        ATerm b_55 = NULL;
        t = SSLgetAnnotations(not_null(r_54));
        {
          b_55 = t;
          if(((a_55 != NULL) && (a_55 != b_55)))
            _fail(b_55);
          else
            a_55 = b_55;
        }
        {
          t = not_null(x_54);
          {
            ATerm e_55 = NULL;
            t = q_61(t);
            {
              c_55 = t;
              {
                ATerm m_55 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(c_55)), not_null(a_55));
                {
                  m_55 = t;
                  if(((e_55 != NULL) && (e_55 != m_55)))
                    _fail(m_55);
                  else
                    e_55 = m_55;
                }
                t = not_null(e_55);
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
ATerm Specification_1 (ATerm t, ATerm v_61 (ATerm))
{
  ATerm w_55 = NULL,x_55 = NULL;
  w_55 = t;
  v_55 :
  if(match_cons(w_55, sym_Specification_1))
    {
      x_55 = ATgetArgument(w_55, 0);
      {
        ATerm a_56 = NULL,c_56 = NULL;
        ATerm b_56 = NULL;
        t = SSLgetAnnotations(not_null(w_55));
        {
          b_56 = t;
          if(((a_56 != NULL) && (a_56 != b_56)))
            _fail(b_56);
          else
            a_56 = b_56;
        }
        {
          t = not_null(x_55);
          {
            ATerm e_56 = NULL;
            t = v_61(t);
            {
              c_56 = t;
              {
                ATerm f_56 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(c_56)), not_null(a_56));
                {
                  f_56 = t;
                  if(((e_56 != NULL) && (e_56 != f_56)))
                    _fail(f_56);
                  else
                    e_56 = f_56;
                }
                t = not_null(e_56);
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
ATerm _2 (ATerm t, ATerm z_59 (ATerm), ATerm a_60 (ATerm))
{
  ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL;
  q_56 = t;
  p_56 :
  if(match_cons(q_56, sym__2))
    {
      r_56 = ATgetArgument(q_56, 0);
      s_56 = ATgetArgument(q_56, 1);
      {
        ATerm d_57 = NULL,f_57 = NULL;
        ATerm e_57 = NULL;
        t = SSLgetAnnotations(not_null(q_56));
        {
          e_57 = t;
          if(((d_57 != NULL) && (d_57 != e_57)))
            _fail(e_57);
          else
            d_57 = e_57;
        }
        {
          t = not_null(r_56);
          {
            ATerm h_57 = NULL;
            t = z_59(t);
            {
              f_57 = t;
              {
                t = not_null(s_56);
                {
                  ATerm j_57 = NULL;
                  t = a_60(t);
                  {
                    h_57 = t;
                    {
                      ATerm k_57 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(f_57), not_null(h_57)), not_null(d_57));
                      {
                        k_57 = t;
                        if(((j_57 != NULL) && (j_57 != k_57)))
                          _fail(k_57);
                        else
                          j_57 = k_57;
                      }
                      t = not_null(j_57);
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
  ATerm j_9;
  j_9 = t;
  {
    ATerm r_57 = NULL;
    ATerm s_57 = NULL;
    t = term_k_9;
    {
      t = whoami_0(t);
      {
        s_57 = t;
        if(((r_57 != NULL) && (r_57 != s_57)))
          _fail(s_57);
        else
          r_57 = s_57;
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
  w_57 = t;
  v_57 :
  if(match_cons(w_57, sym__2))
    {
      x_57 = ATgetArgument(w_57, 0);
      y_57 = ATgetArgument(w_57, 1);
      {
        ATerm p_9;
        p_9 = t;
        t = SSL_printnl(not_null(x_57), not_null(y_57));
        t = p_9;
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
  ATerm d_58 = NULL;
  d_58 = t;
  t = SSL_implode_string(not_null(d_58));
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
        i_58 = t;
        h_58 :
        if(((ATgetType(i_58) == AT_LIST) && !(ATisEmpty(i_58))))
          {
            j_58 = ATgetFirst((ATermList) i_58);
            k_58 = (ATerm) ATgetNext((ATermList) i_58);
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
  ATerm u_58 = NULL;
  ATerm w_58 = NULL;
  u_58 = t;
  {
    ATerm x_58 = NULL;
    ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL;
    t = not_null(u_58);
    {
      x_58 = t;
      {
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
                  if(((w_58 != NULL) && (w_58 != b_59)))
                    _fail(b_59);
                  else
                    w_58 = b_59;
                }
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
      t = not_null(w_58);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_82 (ATerm))
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
          t = x_82(t);
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
  i_59 = t;
  h_59 :
  if(match_cons(i_59, sym__2))
    {
      j_59 = ATgetArgument(i_59, 0);
      k_59 = ATgetArgument(i_59, 1);
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
  p_59 = t;
  t = SSL_explode_string(not_null(p_59));
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
              ATerm y_59 = NULL,b_60 = NULL,c_60 = NULL;
              y_59 = t;
              x_59 :
              if(match_cons(y_59, sym_Path_1))
                {
                  b_60 = ATgetArgument(y_59, 0);
                  t = not_null(b_60);
                }
              else
                {
                  if(match_cons(y_59, sym_Var_1))
                    {
                      b_60 = ATgetArgument(y_59, 0);
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
                      }
                    }
                  else
                    {
                      if(match_cons(y_59, sym_Prefix_2))
                        {
                          b_60 = ATgetArgument(y_59, 0);
                          c_60 = ATgetArgument(y_59, 1);
                          {
                            ATerm h_60 = NULL,j_60 = NULL;
                            ATerm d_10;
                            d_10 = t;
                            {
                              ATerm i_60 = NULL;
                              t = not_null(b_60);
                              {
                                t = eval_config_0(t);
                                {
                                  i_60 = t;
                                  if(((h_60 != NULL) && (h_60 != i_60)))
                                    _fail(i_60);
                                  else
                                    h_60 = i_60;
                                }
                              }
                            }
                            t = d_10;
                            {
                              ATerm k_60 = NULL;
                              t = not_null(c_60);
                              {
                                t = eval_config_0(t);
                                {
                                  k_60 = t;
                                  if(((j_60 != NULL) && (j_60 != k_60)))
                                    _fail(k_60);
                                  else
                                    j_60 = k_60;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_60), not_null(j_60));
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
  ATerm s_60 = NULL;
  s_60 = t;
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
              v_60 = t;
              if(((u_60 != NULL) && (u_60 != v_60)))
                _fail(v_60);
              else
                u_60 = v_60;
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
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm w_95 (ATerm))
{
  ATerm b_2 (ATerm t)
  {
    ATerm g_10;
    g_10 = t;
    {
      ATerm z_60 = NULL;
      ATerm a_61 = NULL;
      t = term_h_10;
      {
        t = get_config_0(t);
        {
          a_61 = t;
          if(((z_60 != NULL) && (z_60 != a_61)))
            _fail(a_61);
          else
            z_60 = a_61;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_60), term_i_10);
        t = geq_0(t);
      }
    }
    t = g_10;
    t = w_95(t);
    return(t);
  }
  t = try_1(t, b_2);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL,k_61 = NULL,l_61 = NULL;
  g_61 = t;
  e_61 :
  if(match_cons(g_61, sym__2))
    {
      h_61 = ATgetArgument(g_61, 0);
      k_61 = ATgetArgument(g_61, 1);
      f_61 :
      if(match_cons(k_61, sym_Stream_1))
        {
          l_61 = ATgetArgument(k_61, 0);
          {
            ATerm r_61 = NULL;
            t = SSL_fputc(not_null(h_61), not_null(l_61));
            {
              ATerm s_61 = NULL;
              s_61 = t;
              if(((r_61 != NULL) && (r_61 != s_61)))
                _fail(s_61);
              else
                r_61 = s_61;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_61));
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
  ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL;
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
          {
            ATerm g_62 = NULL;
            t = SSL_write_term_to_stream_text(not_null(c_62), not_null(d_62));
            {
              ATerm h_62 = NULL;
              h_62 = t;
              if(((g_62 != NULL) && (g_62 != h_62)))
                _fail(h_62);
              else
                g_62 = h_62;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_62));
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
  ATerm c_2 (ATerm t)
  {
    ATerm l_62 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm m_62 = NULL;
      m_62 = t;
      if(((l_62 != NULL) && (l_62 != m_62)))
        _fail(m_62);
      else
        l_62 = m_62;
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
  u_62 = t;
  q_62 :
  if(match_cons(u_62, sym__2))
    {
      v_62 = ATgetArgument(u_62, 0);
      x_62 = ATgetArgument(u_62, 1);
      r_62 :
      if(match_cons(v_62, sym_Stream_1))
        {
          w_62 = ATgetArgument(v_62, 0);
          {
            ATerm a_63 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(w_62), not_null(x_62));
            {
              ATerm d_63 = NULL;
              d_63 = t;
              if(((a_63 != NULL) && (a_63 != d_63)))
                _fail(d_63);
              else
                a_63 = d_63;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_63));
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
ATerm WriteToFile_1 (ATerm t, ATerm s_94 (ATerm))
{
  ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL;
  l_63 = t;
  k_63 :
  if(match_cons(l_63, sym__2))
    {
      m_63 = ATgetArgument(l_63, 0);
      n_63 = ATgetArgument(l_63, 1);
      {
        ATerm q_63 = NULL,s_63 = NULL;
        t = not_null(m_63);
        {
          ATerm r_63 = NULL;
          r_63 = t;
          if(((q_63 != NULL) && (q_63 != r_63)))
            _fail(r_63);
          else
            q_63 = r_63;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_63), term_k_10);
            {
              t = open_stream_0(t);
              {
                ATerm t_63 = NULL;
                t_63 = t;
                if(((s_63 != NULL) && (s_63 != t_63)))
                  _fail(t_63);
                else
                  s_63 = t_63;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_63), not_null(n_63));
                  {
                    t = s_94(t);
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
            c_64 = t;
            y_63 :
            if(match_cons(c_64, sym_Output_1))
              {
                d_64 = ATgetArgument(c_64, 0);
                if(((b_64 != NULL) && (b_64 != d_64)))
                  _fail(d_64);
                else
                  b_64 = d_64;
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
            t = term_o_10;
            {
              e_64 = t;
              if(((b_64 != NULL) && (b_64 != e_64)))
                _fail(e_64);
              else
                b_64 = e_64;
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
ATerm apply_strategy_1 (ATerm t, ATerm u_97 (ATerm))
{
  ATerm l_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL;
  ATerm t_10;
  t_10 = t;
  t = dtime_0(t);
  t = t_10;
  {
    t = u_97(t);
    {
      ATerm u_10;
      u_10 = t;
      {
        ATerm m_64 = NULL;
        t = dtime_0(t);
        {
          m_64 = t;
          if(((l_64 != NULL) && (l_64 != m_64)))
            _fail(m_64);
          else
            l_64 = m_64;
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
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_64)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_64))), not_null(p_64));
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
            t = SSL_fclose(not_null(x_64));
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
  q_65 = t;
  k_65 :
  if(match_cons(q_65, sym_Stream_1))
    {
      r_65 = ATgetArgument(q_65, 0);
      t = SSL_read_term_from_stream(not_null(r_65));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm e_94 (ATerm))
{
  ATerm y_10;
  y_10 = t;
  {
    ATerm o_66 = NULL,s_66 = NULL;
    ATerm z_10;
    z_10 = t;
    {
      ATerm p_66 = NULL;
      t = e_94(t);
      {
        p_66 = t;
        if(((o_66 != NULL) && (o_66 != p_66)))
          _fail(p_66);
        else
          o_66 = p_66;
      }
    }
    t = z_10;
    {
      ATerm t_66 = NULL;
      t_66 = t;
      if(((s_66 != NULL) && (s_66 != t_66)))
        _fail(t_66);
      else
        s_66 = t_66;
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
  e_67 = t;
  d_67 :
  if(match_cons(e_67, sym__2))
    {
      f_67 = ATgetArgument(e_67, 0);
      g_67 = ATgetArgument(e_67, 1);
      {
        ATerm j_67 = NULL;
        t = SSL_fopen(not_null(f_67), not_null(g_67));
        {
          ATerm k_67 = NULL;
          k_67 = t;
          if(((j_67 != NULL) && (j_67 != k_67)))
            _fail(k_67);
          else
            j_67 = k_67;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_67));
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
  ATerm o_67 = NULL;
  o_67 = t;
  t = SSL_is_string(not_null(o_67));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm s_67 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm t_67 = NULL;
    t_67 = t;
    if(((s_67 != NULL) && (s_67 != t_67)))
      _fail(t_67);
    else
      s_67 = t_67;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_67));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm w_67 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm z_67 = NULL;
    z_67 = t;
    if(((w_67 != NULL) && (w_67 != z_67)))
      _fail(z_67);
    else
      w_67 = z_67;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_67));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm f_68 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm g_68 = NULL;
    g_68 = t;
    if(((f_68 != NULL) && (f_68 != g_68)))
      _fail(g_68);
    else
      f_68 = g_68;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_68));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm m_68 = NULL;
  m_68 = t;
  l_68 :
  if(match_cons(m_68, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(m_68, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(m_68, sym_stdin_0))
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
  ATerm w_68 = NULL;
  ATerm y_68 = NULL,z_68 = NULL;
  w_68 = t;
  {
    ATerm a_69 = NULL;
    ATerm c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL;
    t = not_null(w_68);
    {
      a_69 = t;
      {
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
                      {
                        if(((z_68 != NULL) && (z_68 != f_69)))
                          _fail(f_69);
                        else
                          z_68 = f_69;
                        if(((y_68 != NULL) && (y_68 != g_69)))
                          _fail(g_69);
                        else
                          y_68 = g_69;
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
    t = not_null(z_68);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL;
  o_69 = t;
  n_69 :
  if(match_cons(o_69, sym__2))
    {
      p_69 = ATgetArgument(o_69, 0);
      q_69 = ATgetArgument(o_69, 1);
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
                    r_69 = t;
                    m_69 :
                    if(match_cons(r_69, sym_Path_1))
                      {
                        s_69 = ATgetArgument(r_69, 0);
                        t = not_null(s_69);
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
  ATerm a_70 = NULL;
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_69 = NULL;
      ATerm z_69 = NULL;
      z_69 = t;
      if(((y_69 != NULL) && (y_69 != z_69)))
        _fail(z_69);
      else
        y_69 = z_69;
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
      t = read_from_stream_0(t);
      {
        b_70 = t;
        if(((a_70 != NULL) && (a_70 != b_70)))
          _fail(b_70);
        else
          a_70 = b_70;
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
ATerm split_2 (ATerm t, ATerm w_89 (ATerm), ATerm x_89 (ATerm))
{
  ATerm g_70 = NULL,i_70 = NULL;
  ATerm j_11;
  j_11 = t;
  {
    ATerm h_70 = NULL;
    t = w_89(t);
    {
      h_70 = t;
      if(((g_70 != NULL) && (g_70 != h_70)))
        _fail(h_70);
      else
        g_70 = h_70;
    }
  }
  t = j_11;
  {
    ATerm j_70 = NULL;
    t = x_89(t);
    {
      j_70 = t;
      if(((i_70 != NULL) && (i_70 != j_70)))
        _fail(j_70);
      else
        i_70 = j_70;
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
          q_70 = t;
          n_70 :
          if(match_cons(q_70, sym_Input_1))
            {
              r_70 = ATgetArgument(q_70, 0);
              if(((p_70 != NULL) && (p_70 != r_70)))
                _fail(r_70);
              else
                p_70 = r_70;
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
          t = term_n_11;
          {
            s_70 = t;
            if(((p_70 != NULL) && (p_70 != s_70)))
              _fail(s_70);
            else
              p_70 = s_70;
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
      t = string_to_int_0(t);
      {
        z_70 = t;
        if(((y_70 != NULL) && (y_70 != z_70)))
          _fail(z_70);
        else
          y_70 = z_70;
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
  c_71 = t;
  t = SSL_string_to_int(not_null(c_71));
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
                t = string_to_int_0(t);
                {
                  n_71 = t;
                  if(((m_71 != NULL) && (m_71 != n_71)))
                    _fail(n_71);
                  else
                    m_71 = n_71;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_10, not_null(m_71));
                  t = set_config_0(t);
                }
              }
              t = z_11;
              {
                ATerm p_71 = NULL;
                p_71 = t;
                if(((o_71 != NULL) && (o_71 != p_71)))
                  _fail(p_71);
                else
                  o_71 = p_71;
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
      y_71 = t;
      if(((x_71 != NULL) && (x_71 != y_71)))
        _fail(y_71);
      else
        x_71 = y_71;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_12, not_null(x_71));
        t = set_config_0(t);
      }
    }
    t = h_12;
    {
      ATerm a_72 = NULL;
      a_72 = t;
      if(((z_71 != NULL) && (z_71 != a_72)))
        _fail(a_72);
      else
        z_71 = a_72;
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
  k_72 = t;
  i_72 :
  if(match_string(k_72, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
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
                  t = not_null(n_72);
                  {
                    t = k_0(t);
                    {
                      t_72 = t;
                      if(((s_72 != NULL) && (s_72 != t_72)))
                        _fail(t_72);
                      else
                        s_72 = t_72;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_72)), not_null(s_72));
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
      c_73 = t;
      if(((b_73 != NULL) && (b_73 != c_73)))
        _fail(c_73);
      else
        b_73 = c_73;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_12, not_null(b_73));
        t = set_config_0(t);
      }
    }
    t = u_12;
    {
      ATerm e_73 = NULL;
      e_73 = t;
      if(((d_73 != NULL) && (d_73 != e_73)))
        _fail(e_73);
      else
        d_73 = e_73;
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
    t = term_k_9;
    {
      t = whoami_0(t);
      {
        j_73 = t;
        if(((i_73 != NULL) && (i_73 != j_73)))
          _fail(j_73);
        else
          i_73 = j_73;
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
  m_73 = t;
  t = SSL_TicksToSeconds(not_null(m_73));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm r_73 = NULL,s_73 = NULL,v_73 = NULL;
  r_73 = t;
  q_73 :
  if(match_cons(r_73, sym__2))
    {
      s_73 = ATgetArgument(r_73, 0);
      v_73 = ATgetArgument(r_73, 1);
      {
        ATerm f_13 = t;
        int g_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(s_73), not_null(v_73));
            ;
            LocalPopChoice(g_13);
          }
        else
          {
            t = f_13;
            t = SSL_addr(not_null(s_73), not_null(v_73));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm h_88 (ATerm), ATerm i_88 (ATerm))
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_88(t);
      ;
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      {
        ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL;
        p_74 = t;
        o_74 :
        if(((ATgetType(p_74) == AT_LIST) && !(ATisEmpty(p_74))))
          {
            q_74 = ATgetFirst((ATermList) p_74);
            r_74 = (ATerm) ATgetNext((ATermList) p_74);
            {
              ATerm z_74 = NULL;
              ATerm a_75 = NULL;
              t = not_null(r_74);
              {
                t = foldr_2(t, h_88, i_88);
                {
                  a_75 = t;
                  if(((z_74 != NULL) && (z_74 != a_75)))
                    _fail(a_75);
                  else
                    z_74 = a_75;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_74), not_null(z_74));
                t = i_88(t);
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
ATerm crush_2 (ATerm t, ATerm a_92 (ATerm), ATerm b_92 (ATerm))
{
  ATerm h_75 = NULL;
  ATerm j_75 = NULL;
  h_75 = t;
  {
    ATerm k_75 = NULL;
    ATerm m_75 = NULL,n_75 = NULL,o_75 = NULL;
    t = not_null(h_75);
    {
      k_75 = t;
      {
        t = SSL_explode_term(not_null(k_75));
        {
          m_75 = t;
          g_75 :
          if(match_cons(m_75, sym__2))
            {
              n_75 = ATgetArgument(m_75, 0);
              o_75 = ATgetArgument(m_75, 1);
              if(((j_75 != NULL) && (j_75 != o_75)))
                _fail(o_75);
              else
                j_75 = o_75;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_75);
      t = foldr_2(t, a_92, b_92);
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
  u_75 = t;
  t_75 :
  if(match_cons(u_75, sym__2))
    {
      v_75 = ATgetArgument(u_75, 0);
      w_75 = ATgetArgument(u_75, 1);
      {
        ATerm j_13;
        j_13 = t;
        {
          ATerm k_13 = t;
          int l_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(v_75), not_null(w_75));
              ;
              LocalPopChoice(l_13);
            }
          else
            {
              t = k_13;
              t = SSL_gtr(not_null(v_75), not_null(w_75));
            }
        }
        t = j_13;
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
  ATerm c_76 = NULL;
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL;
      d_76 = t;
      b_76 :
      if(match_cons(d_76, sym__2))
        {
          e_76 = ATgetArgument(d_76, 0);
          f_76 = ATgetArgument(d_76, 1);
          {
            if(((c_76 != NULL) && (c_76 != e_76)))
              _fail(e_76);
            else
              c_76 = e_76;
            if(((c_76 != NULL) && (c_76 != f_76)))
              _fail(f_76);
            else
              c_76 = f_76;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm v_95 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm o_13;
    o_13 = t;
    {
      ATerm i_76 = NULL;
      ATerm j_76 = NULL;
      t = term_h_10;
      {
        t = get_config_0(t);
        {
          j_76 = t;
          if(((i_76 != NULL) && (i_76 != j_76)))
            _fail(j_76);
          else
            i_76 = j_76;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_76), term_o_9);
        t = geq_0(t);
      }
    }
    t = o_13;
    t = v_95(t);
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
    ATerm p_13;
    p_13 = t;
    {
      ATerm o_76 = NULL;
      t = run_time_0(t);
      {
        o_76 = t;
        if(((n_76 != NULL) && (n_76 != o_76)))
          _fail(o_76);
        else
          n_76 = o_76;
      }
    }
    t = p_13;
    {
      ATerm q_76 = NULL;
      t = term_k_9;
      {
        t = whoami_0(t);
        {
          q_76 = t;
          if(((p_76 != NULL) && (p_76 != q_76)))
            _fail(q_76);
          else
            p_76 = q_76;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_13), not_null(n_76)), term_q_13), not_null(p_76)));
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
  x_76 = t;
  w_76 :
  if(match_cons(x_76, sym_Version_0))
    {
      ATerm z_76 = NULL,b_77 = NULL;
      ATerm s_13;
      s_13 = t;
      {
        ATerm a_77 = NULL;
        t = SSLgetAnnotations(not_null(x_76));
        {
          a_77 = t;
          if(((z_76 != NULL) && (z_76 != a_77)))
            _fail(a_77);
          else
            z_76 = a_77;
        }
      }
      t = s_13;
      {
        ATerm c_77 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(z_76));
        {
          c_77 = t;
          if(((b_77 != NULL) && (b_77 != c_77)))
            _fail(c_77);
          else
            b_77 = c_77;
        }
        t = not_null(b_77);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_98 (ATerm))
{
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_13;
      t = get_config_0(t);
      ;
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      {
        ATerm l_3 (ATerm t)
        {
          ATerm w_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(x_13);
            }
          else
            {
              t = w_13;
              {
                ATerm y_13 = t;
                int z_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(z_13);
                  }
                else
                  {
                    t = y_13;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, l_3);
      }
    }
  t = s_98(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm h_77 = NULL;
  h_77 = t;
  t = SSL_table_create(not_null(h_77));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm l_77 = NULL;
  l_77 = t;
  {
    ATerm a_14;
    a_14 = t;
    {
      t = term_b_14;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_b_14, term_c_14, not_null(l_77));
          t = table_put_0(t);
        }
      }
    }
    t = a_14;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm p_77 = NULL;
  p_77 = t;
  t = SSL_table_destroy(not_null(p_77));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm t_77 = NULL;
  t_77 = t;
  t = SSL_exit(not_null(t_77));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm t_100 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_82 (ATerm))
{
  ATerm w_77 (ATerm t)
  {
    ATerm d_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(h_14);
      }
    else
      {
        t = d_14;
        t = Cons_2(t, i_82, w_77);
      }
    return(t);
  }
  t = w_77(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm d_78 = NULL,e_78 = NULL,f_78 = NULL;
  f_78 = t;
  c_78 :
  if(((ATgetType(f_78) == AT_LIST) && !(ATisEmpty(f_78))))
    {
      d_78 = ATgetFirst((ATermList) f_78);
      e_78 = (ATerm) ATgetNext((ATermList) f_78);
      {
        ATerm i_78 = NULL;
        t = not_null(e_78);
        {
          ATerm i_14;
          i_14 = t;
          {
            ATerm j_78 = NULL,l_78 = NULL,n_78 = NULL;
            ATerm m_14;
            m_14 = t;
            {
              ATerm k_78 = NULL;
              t = i_0(t);
              {
                k_78 = t;
                if(((j_78 != NULL) && (j_78 != k_78)))
                  _fail(k_78);
                else
                  j_78 = k_78;
              }
            }
            t = m_14;
            {
              ATerm m_78 = NULL;
              t = not_null(d_78);
              {
                t = g_0(t);
                {
                  m_78 = t;
                  if(((l_78 != NULL) && (l_78 != m_78)))
                    _fail(m_78);
                  else
                    l_78 = m_78;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_78)), not_null(l_78));
                {
                  n_78 = t;
                  if(((i_78 != NULL) && (i_78 != n_78)))
                    _fail(n_78);
                  else
                    i_78 = n_78;
                }
              }
            }
          }
          t = i_14;
          {
            ATerm m_3 (ATerm t)
            {
              t = not_null(i_78);
              return(t);
            }
            t = reverse_acc_2(t, g_0, m_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(f_78) == AT_LIST) && ATisEmpty(f_78)))
        {
          {
            t = term_k_9;
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
  ATerm n_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, n_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm s_100 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_73 (ATerm))
{
  ATerm y_78 = NULL,z_78 = NULL;
  y_78 = t;
  x_78 :
  if(match_cons(y_78, sym_Program_1))
    {
      z_78 = ATgetArgument(y_78, 0);
      {
        ATerm c_79 = NULL,e_79 = NULL;
        ATerm d_79 = NULL;
        t = SSLgetAnnotations(not_null(y_78));
        {
          d_79 = t;
          if(((c_79 != NULL) && (c_79 != d_79)))
            _fail(d_79);
          else
            c_79 = d_79;
        }
        {
          t = not_null(z_78);
          {
            ATerm g_79 = NULL;
            t = t_73(t);
            {
              e_79 = t;
              {
                ATerm h_79 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_79)), not_null(c_79));
                {
                  h_79 = t;
                  if(((g_79 != NULL) && (g_79 != h_79)))
                    _fail(h_79);
                  else
                    g_79 = h_79;
                }
                t = not_null(g_79);
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
  ATerm q_79 = NULL;
  ATerm p_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_79 = NULL;
      t = term_e_13;
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
      ;
      LocalPopChoice(q_14);
    }
  else
    {
      t = p_14;
      {
        ATerm o_3 (ATerm t)
        {
          ATerm p_3 (ATerm t)
          {
            ATerm s_79 = NULL;
            s_79 = t;
            if(((q_79 != NULL) && (q_79 != s_79)))
              _fail(s_79);
            else
              q_79 = s_79;
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
      t = term_u_14;
      {
        t = echo_0(t);
        {
          t = term_c_15;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_3 (ATerm t)
                {
                  ATerm t_79 = NULL;
                  ATerm u_79 = NULL;
                  u_79 = t;
                  if(((t_79 != NULL) && (t_79 != u_79)))
                    _fail(u_79);
                  else
                    t_79 = u_79;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_79)), term_f_15);
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
                    ATerm u_3 (ATerm t)
                    {
                      t = not_null(q_79);
                      return(t);
                    }
                    t = long_description_1(t, u_3);
                    {
                      w_79 = t;
                      if(((v_79 != NULL) && (v_79 != w_79)))
                        _fail(w_79);
                      else
                        v_79 = w_79;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(v_79)), term_g_15);
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
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_73 (ATerm))
{
  ATerm g_80 = NULL,h_80 = NULL;
  g_80 = t;
  f_80 :
  if(match_cons(g_80, sym_Undefined_1))
    {
      h_80 = ATgetArgument(g_80, 0);
      {
        ATerm k_80 = NULL,m_80 = NULL;
        ATerm l_80 = NULL;
        t = SSLgetAnnotations(not_null(g_80));
        {
          l_80 = t;
          if(((k_80 != NULL) && (k_80 != l_80)))
            _fail(l_80);
          else
            k_80 = l_80;
        }
        {
          t = not_null(h_80);
          {
            ATerm o_80 = NULL;
            t = u_73(t);
            {
              m_80 = t;
              {
                ATerm p_80 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_80)), not_null(k_80));
                {
                  p_80 = t;
                  if(((o_80 != NULL) && (o_80 != p_80)))
                    _fail(p_80);
                  else
                    o_80 = p_80;
                }
                t = not_null(o_80);
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
ATerm fetch_1 (ATerm t, ATerm r_82 (ATerm))
{
  ATerm u_80 (ATerm t)
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_82, _id);
        ;
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
        t = Cons_2(t, _id, u_80);
      }
    return(t);
  }
  t = u_80(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm s_99 (ATerm))
{
  t = fetch_1(t, s_99);
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
  ATerm l_15;
  l_15 = t;
  {
    ATerm b_81 = NULL;
    ATerm e_81 = NULL;
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(n_15);
      }
    else
      {
        t = m_15;
        {
          ATerm c_81 = NULL;
          ATerm d_81 = NULL;
          d_81 = t;
          if(((c_81 != NULL) && (c_81 != d_81)))
            _fail(d_81);
          else
            c_81 = d_81;
          t = (ATerm) ATinsert(ATempty, not_null(c_81));
        }
      }
    {
      e_81 = t;
      if(((b_81 != NULL) && (b_81 != e_81)))
        _fail(e_81);
      else
        b_81 = e_81;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_10, not_null(b_81));
      t = printnl_0(t);
    }
  }
  t = l_15;
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
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(p_15);
    }
  else
    {
      t = o_15;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_81 = NULL;
  l_81 = t;
  k_81 :
  if(match_cons(l_81, sym_Help_0))
    {
      ATerm n_81 = NULL,p_81 = NULL;
      ATerm q_15;
      q_15 = t;
      {
        ATerm o_81 = NULL;
        t = SSLgetAnnotations(not_null(l_81));
        {
          o_81 = t;
          if(((n_81 != NULL) && (n_81 != o_81)))
            _fail(o_81);
          else
            n_81 = o_81;
        }
      }
      t = q_15;
      {
        ATerm q_81 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(n_81));
        {
          q_81 = t;
          if(((p_81 != NULL) && (p_81 != q_81)))
            _fail(q_81);
          else
            p_81 = q_81;
        }
        t = not_null(p_81);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_74(t);
      ;
      LocalPopChoice(s_15);
    }
  else
    {
      t = r_15;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm t_15 = t;
  int u_15 = stack_ptr;
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
        t = term_z_15;
        t = set_config_0(t);
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        t = term_d_16;
        return(t);
      }
      t = Option_3(t, v_3, w_3, x_3);
      ;
      LocalPopChoice(u_15);
    }
  else
    {
      t = t_15;
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
          t = term_z_15;
          {
            t = set_config_0(t);
            {
              t = term_h_16;
              t = set_config_0(t);
            }
          }
          t = term_i_16;
          return(t);
        }
        ATerm a_4 (ATerm t)
        {
          t = term_j_16;
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
  a_82 = t;
  z_81 :
  if(match_cons(a_82, sym__2))
    {
      b_82 = ATgetArgument(a_82, 0);
      c_82 = ATgetArgument(a_82, 1);
      t = SSL_table_get(not_null(b_82), not_null(c_82));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm o_82 = NULL,p_82 = NULL,q_82 = NULL,t_82 = NULL;
  o_82 = t;
  n_82 :
  if(match_cons(o_82, sym__3))
    {
      p_82 = ATgetArgument(o_82, 0);
      q_82 = ATgetArgument(o_82, 1);
      t_82 = ATgetArgument(o_82, 2);
      {
        ATerm k_16;
        k_16 = t;
        {
          ATerm z_82 = NULL;
          ATerm a_83 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_82), not_null(q_82));
          {
            ATerm l_16 = t;
            int m_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(m_16);
              }
            else
              {
                t = l_16;
                t = (ATerm) ATempty;
              }
            {
              a_83 = t;
              if(((z_82 != NULL) && (z_82 != a_83)))
                _fail(a_83);
              else
                z_82 = a_83;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_82), not_null(q_82), (ATerm) ATinsert(CheckATermList(not_null(z_82)), not_null(t_82)));
            t = table_put_0(t);
          }
        }
        t = k_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm x_100 (ATerm))
{
  ATerm e_83 = NULL;
  ATerm f_83 = NULL;
  t = term_k_9;
  {
    t = x_100(t);
    {
      f_83 = t;
      if(((e_83 != NULL) && (e_83 != f_83)))
        _fail(f_83);
      else
        e_83 = f_83;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_x_14, term_y_14, not_null(e_83));
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
  l_83 = t;
  k_83 :
  if(match_string(l_83, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(l_83) == AT_LIST) && !(ATisEmpty(l_83))))
        {
          m_83 = ATgetFirst((ATermList) l_83);
          n_83 = (ATerm) ATgetNext((ATermList) l_83);
          {
            ATerm q_83 = NULL;
            ATerm n_16;
            n_16 = t;
            {
              t = not_null(m_83);
              t = a_0(t);
            }
            t = n_16;
            {
              ATerm r_83 = NULL;
              t = term_k_9;
              {
                t = b_0(t);
                {
                  r_83 = t;
                  if(((q_83 != NULL) && (q_83 != r_83)))
                    _fail(r_83);
                  else
                    q_83 = r_83;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(n_83)), not_null(q_83));
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
    t = term_o_16;
    {
      t = set_config_0(t);
      t = term_p_16;
    }
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    t = term_u_16;
    return(t);
  }
  t = Option_3(t, b_4, c_4, d_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm z_83 = NULL,a_84 = NULL,b_84 = NULL;
  z_83 = t;
  y_83 :
  if(((ATgetType(z_83) == AT_LIST) && !(ATisEmpty(z_83))))
    {
      a_84 = ATgetFirst((ATermList) z_83);
      b_84 = (ATerm) ATgetNext((ATermList) z_83);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_84)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_84)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm i_61 (ATerm), ATerm j_61 (ATerm))
{
  ATerm l_84 = NULL,m_84 = NULL,n_84 = NULL;
  l_84 = t;
  k_84 :
  if(((ATgetType(l_84) == AT_LIST) && !(ATisEmpty(l_84))))
    {
      m_84 = ATgetFirst((ATermList) l_84);
      n_84 = (ATerm) ATgetNext((ATermList) l_84);
      {
        ATerm r_84 = NULL,t_84 = NULL;
        ATerm s_84 = NULL;
        t = SSLgetAnnotations(not_null(l_84));
        {
          s_84 = t;
          if(((r_84 != NULL) && (r_84 != s_84)))
            _fail(s_84);
          else
            r_84 = s_84;
        }
        {
          t = not_null(m_84);
          {
            ATerm v_84 = NULL;
            t = i_61(t);
            {
              t_84 = t;
              {
                t = not_null(n_84);
                {
                  ATerm x_84 = NULL;
                  t = j_61(t);
                  {
                    v_84 = t;
                    {
                      ATerm y_84 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(v_84)), not_null(t_84)), not_null(r_84));
                      {
                        y_84 = t;
                        if(((x_84 != NULL) && (x_84 != y_84)))
                          _fail(y_84);
                        else
                          x_84 = y_84;
                      }
                      t = not_null(x_84);
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
  ATerm i_85 = NULL;
  i_85 = t;
  h_85 :
  if(((ATgetType(i_85) == AT_LIST) && ATisEmpty(i_85)))
    {
      {
        ATerm k_85 = NULL,m_85 = NULL;
        ATerm v_16;
        v_16 = t;
        {
          ATerm l_85 = NULL;
          t = SSLgetAnnotations(not_null(i_85));
          {
            l_85 = t;
            if(((k_85 != NULL) && (k_85 != l_85)))
              _fail(l_85);
            else
              k_85 = l_85;
          }
        }
        t = v_16;
        {
          ATerm n_85 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(k_85));
          {
            n_85 = t;
            if(((m_85 != NULL) && (m_85 != n_85)))
              _fail(n_85);
            else
              m_85 = n_85;
          }
          t = not_null(m_85);
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
  ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL;
  t_85 = t;
  s_85 :
  if(match_cons(t_85, sym__2))
    {
      u_85 = ATgetArgument(t_85, 0);
      v_85 = ATgetArgument(t_85, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_e_10, not_null(u_85), not_null(v_85));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm v_100 (ATerm))
{
  ATerm w_16;
  w_16 = t;
  {
    ATerm e_4 (ATerm t)
    {
      t = term_a_17;
      t = v_100(t);
      return(t);
    }
    t = try_1(t, e_4);
  }
  t = w_16;
  {
    ATerm f_4 (ATerm t)
    {
      ATerm d_86 = NULL;
      ATerm c_17;
      c_17 = t;
      {
        ATerm b_86 = NULL;
        ATerm c_86 = NULL;
        c_86 = t;
        if(((b_86 != NULL) && (b_86 != c_86)))
          _fail(c_86);
        else
          b_86 = c_86;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_13, not_null(b_86));
          t = set_config_0(t);
        }
      }
      t = c_17;
      {
        ATerm e_86 = NULL;
        e_86 = t;
        if(((d_86 != NULL) && (d_86 != e_86)))
          _fail(e_86);
        else
          d_86 = e_86;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(d_86));
      }
      return(t);
    }
    ATerm g_4 (ATerm t)
    {
      ATerm f_17 = t;
      int g_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_17 = t;
          int i_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(i_17);
            }
          else
            {
              t = h_17;
              {
                t = v_100(t);
                t = Cons_2(t, _id, g_4);
              }
            }
          ;
          LocalPopChoice(g_17);
        }
      else
        {
          t = f_17;
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
  ATerm j_17;
  j_17 = t;
  {
    ATerm n_86 = NULL,o_86 = NULL,p_86 = NULL,q_86 = NULL;
    n_86 = t;
    j_86 :
    if(match_cons(n_86, sym__3))
      {
        o_86 = ATgetArgument(n_86, 0);
        p_86 = ATgetArgument(n_86, 1);
        q_86 = ATgetArgument(n_86, 2);
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
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = j_17;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm u_100 (ATerm))
{
  ATerm t_86 = NULL;
  ATerm k_17;
  k_17 = t;
  {
    t = term_l_17;
    t = table_put_0(t);
  }
  t = k_17;
  {
    ATerm h_4 (ATerm t)
    {
      ATerm m_17 = t;
      int n_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_100(t);
          ;
          LocalPopChoice(n_17);
        }
      else
        {
          t = m_17;
          {
            ATerm o_17 = t;
            int t_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(t_17);
              }
            else
              {
                t = o_17;
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
        ATerm u_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_17;
            z_17 = t;
            {
              ATerm b_18 = t;
              int e_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_v_13;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(e_18);
                }
              else
                {
                  t = b_18;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = z_17;
            {
              t = system_usage_0(t);
              {
                t = term_t_11;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(v_17);
          }
        else
          {
            t = u_17;
            {
              ATerm f_18 = t;
              int g_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_18;
                  h_18 = t;
                  {
                    t = term_y_15;
                    t = get_config_0(t);
                  }
                  t = h_18;
                  {
                    t = system_about_0(t);
                    {
                      t = term_t_11;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(g_18);
                }
              else
                {
                  t = f_18;
                  {
                    ATerm j_4 (ATerm t)
                    {
                      ATerm k_4 (ATerm t)
                      {
                        ATerm u_86 = NULL;
                        u_86 = t;
                        if(((t_86 != NULL) && (t_86 != u_86)))
                          _fail(u_86);
                        else
                          t_86 = u_86;
                        return(t);
                      }
                      t = Undefined_1(t, k_4);
                      return(t);
                    }
                    t = option_defined_1(t, j_4);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_l_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_86)), term_i_18));
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
        ATerm j_18;
        j_18 = t;
        {
          t = term_x_14;
          t = table_destroy_0(t);
        }
        t = j_18;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm))
{
  t = parse_options_1(t, u_98);
  {
    t = store_options_0(t);
    {
      t = w_98(t);
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, v_98);
            ;
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            {
              ATerm m_18 = t;
              int n_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_98(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(n_18);
                }
              else
                {
                  t = m_18;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm))
{
  ATerm l_4 (ATerm t)
  {
    ATerm o_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_98(t);
        ;
        LocalPopChoice(u_18);
      }
    else
      {
        t = o_18;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, j_98);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, l_4, l_98, m_98, m_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    ATerm o_4 (ATerm t)
    {
      ATerm v_18;
      v_18 = t;
      {
        ATerm x_86 = NULL;
        ATerm y_86 = NULL;
        t = term_e_13;
        {
          t = get_config_0(t);
          {
            y_86 = t;
            if(((x_86 != NULL) && (x_86 != y_86)))
              _fail(y_86);
            else
              x_86 = y_86;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_9, (ATerm) ATinsert(ATempty, not_null(x_86)));
          t = printnl_0(t);
        }
      }
      t = v_18;
      return(t);
    }
    t = if_verbose2_1(t, o_4);
    return(t);
  }
  t = iowrap_4(t, d_98, e_98, f_98, n_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm b_98 (ATerm), ATerm c_98 (ATerm))
{
  t = iowrap_3(t, b_98, c_98, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm y_97 (ATerm))
{
  ATerm p_4 (ATerm t)
  {
    t = _2(t, _id, y_97);
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
