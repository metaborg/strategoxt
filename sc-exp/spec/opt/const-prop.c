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
Symbol sym_OpDeclQ_2;
Symbol sym_OpDeclInj_1;
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
Symbol sym_OpQ_2;
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
Symbol sym_SRDefT_4;
Symbol sym_RDefNoArgs_2;
Symbol sym_RDef_3;
Symbol sym_RDefT_4;
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
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_StrCong_1;
Symbol sym_IntCong_1;
Symbol sym_RealCong_1;
Symbol sym_CharCong_1;
Symbol sym_CongQ_2;
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
Symbol sym_SDefT_4;
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
  sym_OpDeclQ_2 = ATmakeSymbol("OpDeclQ", 2, ATfalse);
  ATprotectSymbol(sym_OpDeclQ_2);
  sym_OpDeclInj_1 = ATmakeSymbol("OpDeclInj", 1, ATfalse);
  ATprotectSymbol(sym_OpDeclInj_1);
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
  sym_OpQ_2 = ATmakeSymbol("OpQ", 2, ATfalse);
  ATprotectSymbol(sym_OpQ_2);
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
  sym_SRDefT_4 = ATmakeSymbol("SRDefT", 4, ATfalse);
  ATprotectSymbol(sym_SRDefT_4);
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
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
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
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
  sym_CongQ_2 = ATmakeSymbol("CongQ", 2, ATfalse);
  ATprotectSymbol(sym_CongQ_2);
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
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
ATerm term_u_26;
ATerm term_x_25;
ATerm term_k_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_x_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_l_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_c_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_k_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_w_16;
ATerm term_m_16;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_r_11;
ATerm term_n_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_j_10;
ATerm term_g_8;
ATerm term_w_7;
ATerm term_m_7;
ATerm term_h_7;
ATerm term_r_6;
ATerm term_i_6;
ATerm term_f_6;
void init_constant_terms (void)
{
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_i_6);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("strat: ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("current: ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("no match with current term: ", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym__2, term_z_16, term_c_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_j_10);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym__2, term_k_20, term_j_10);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym__2, term_e_23, term_f_23);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym__2, term_j_24, term_j_10);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__2, term_r_24, term_j_10);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_j_10);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym__3, term_e_23, term_f_23, (ATerm) ATempty);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm SDefT_4 (ATerm, ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm a_74 (ATerm));
ATerm prop_sdef_1 (ATerm, ATerm e_80 (ATerm));
ATerm Not_1 (ATerm, ATerm e_72 (ATerm));
ATerm prop_not_1 (ATerm, ATerm c_80 (ATerm));
ATerm Rec_2 (ATerm, ATerm c_72 (ATerm), ATerm d_72 (ATerm));
ATerm prop_rec_1 (ATerm, ATerm b_80 (ATerm));
ATerm Let_2 (ATerm, ATerm f_71 (ATerm), ATerm g_71 (ATerm));
ATerm prop_let_1 (ATerm, ATerm f_80 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm z_71 (ATerm), ATerm a_72 (ATerm), ATerm b_72 (ATerm));
ATerm isect_CurrentTerm_0 (ATerm);
ATerm isect_Binding_0 (ATerm);
ATerm restore_CurrentTerm_0 (ATerm);
ATerm save_CurrentTerm_0 (ATerm);
ATerm prop_abstract_choice_2 (ATerm, ATerm j_80 (ATerm), ATerm k_80 (ATerm));
ATerm LChoice_2 (ATerm, ATerm v_71 (ATerm), ATerm w_71 (ATerm));
ATerm GChoice_2 (ATerm, ATerm x_70 (ATerm), ATerm y_70 (ATerm));
ATerm Choice_2 (ATerm, ATerm t_70 (ATerm), ATerm u_70 (ATerm));
ATerm prop_choice_1 (ATerm, ATerm i_80 (ATerm));
ATerm Seq_2 (ATerm, ATerm t_71 (ATerm), ATerm u_71 (ATerm));
ATerm prop_seq_1 (ATerm, ATerm x_79 (ATerm));
ATerm prop_traversal_1 (ATerm, ATerm a_80 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm restore_Binding_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_Binding_0 (ATerm);
ATerm exec_maybe_1 (ATerm, ATerm w_79 (ATerm));
ATerm CallT_3 (ATerm, ATerm j_71 (ATerm), ATerm k_71 (ATerm), ATerm l_71 (ATerm));
ATerm PrimT_3 (ATerm, ATerm l_72 (ATerm), ATerm m_72 (ATerm), ATerm n_72 (ATerm));
ATerm prop_call_1 (ATerm, ATerm p_0 (ATerm));
ATerm UndefCurrentTerm_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm p_71 (ATerm), ATerm q_71 (ATerm));
ATerm prop_scope_1 (ATerm, ATerm d_80 (ATerm));
ATerm Build_1 (ATerm, ATerm n_71 (ATerm));
ATerm prop_build_0 (ATerm);
ATerm assert_1 (ATerm, ATerm p_98 (ATerm));
ATerm oncetd_1 (ATerm, ATerm j_83 (ATerm));
ATerm introduce_binding_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm TermIsVarIgnore_1 (ATerm, ATerm h_80 (ATerm));
ATerm MatchWildCard_0 (ATerm);
ATerm AsMatch_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm e_107 (ATerm), ATerm f_107 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm z_89 (ATerm), ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm c_90 (ATerm));
ATerm zip_1 (ATerm, ATerm e_90 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm p_106 (ATerm), ATerm q_106 (ATerm));
ATerm substitute_1 (ATerm, ATerm r_106 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm UfVar_1 (ATerm, ATerm b_110 (ATerm));
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm w_81 (ATerm), ATerm x_81 (ATerm));
ATerm for_3 (ATerm, ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm b_82 (ATerm));
ATerm prop_pattern_match_0 (ATerm);
ATerm CurrentTerm_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm r_98 (ATerm));
ATerm Binding_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm x_83 (ATerm));
ATerm Match_1 (ATerm, ATerm m_71 (ATerm));
ATerm prop_match_0 (ATerm);
ATerm cp_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm m_98 (ATerm));
ATerm restore_always_2 (ATerm, ATerm a_81 (ATerm), ATerm b_81 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm l_98 (ATerm));
ATerm scope_2 (ATerm, ATerm n_98 (ATerm), ATerm o_98 (ATerm));
ATerm const_prop_0 (ATerm);
ATerm map_1 (ATerm, ATerm w_87 (ATerm));
ATerm Strategies_1 (ATerm, ATerm w_66 (ATerm));
ATerm Cons_2 (ATerm, ATerm s_66 (ATerm), ATerm t_66 (ATerm));
ATerm Signature_1 (ATerm, ATerm x_66 (ATerm));
ATerm Specification_1 (ATerm, ATerm b_67 (ATerm));
ATerm _2 (ATerm, ATerm j_65 (ATerm), ATerm k_65 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_88 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm m_101 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm i_100 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm k_103 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm u_99 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm m_95 (ATerm), ATerm n_95 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm x_93 (ATerm), ATerm y_93 (ATerm));
ATerm crush_2 (ATerm, ATerm q_97 (ATerm), ATerm r_97 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_101 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm i_104 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm j_106 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm i_106 (ATerm));
ATerm Program_1 (ATerm, ATerm q_79 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm r_79 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_88 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_105 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_80 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm n_106 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm l_106 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm k_106 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm n_104 (ATerm));
ATerm iowrap_4 (ATerm, ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm c_104 (ATerm));
ATerm iowrap_3 (ATerm, ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm v_103 (ATerm));
ATerm iowrap_2 (ATerm, ATerm r_103 (ATerm), ATerm s_103 (ATerm));
ATerm iowrap_1 (ATerm, ATerm o_103 (ATerm));
ATerm const_prop_io_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm k_6 = NULL;
  k_6 = t;
  j_6 :
  if(((ATgetType(k_6) == AT_LIST) && ATisEmpty(k_6)))
    {
      {
        ATerm z_6 = NULL,b_7 = NULL;
        ATerm e_6;
        e_6 = t;
        {
          ATerm a_7 = NULL;
          t = SSLgetAnnotations(not_null(k_6));
          {
            a_7 = t;
            if(((z_6 != NULL) && (z_6 != a_7)))
              _fail(a_7);
            else
              z_6 = a_7;
          }
        }
        t = e_6;
        {
          ATerm f_7 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(z_6));
          {
            f_7 = t;
            if(((b_7 != NULL) && (b_7 != f_7)))
              _fail(f_7);
            else
              b_7 = f_7;
          }
          t = not_null(b_7);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDefT_4 (ATerm t, ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm a_74 (ATerm))
{
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL;
  r_7 = t;
  q_7 :
  if(match_cons(r_7, sym_SDefT_4))
    {
      s_7 = ATgetArgument(r_7, 0);
      t_7 = ATgetArgument(r_7, 1);
      u_7 = ATgetArgument(r_7, 2);
      v_7 = ATgetArgument(r_7, 3);
      {
        ATerm b_8 = NULL,d_8 = NULL;
        ATerm c_8 = NULL;
        t = SSLgetAnnotations(not_null(r_7));
        {
          c_8 = t;
          if(((b_8 != NULL) && (b_8 != c_8)))
            _fail(c_8);
          else
            b_8 = c_8;
        }
        {
          t = not_null(s_7);
          {
            ATerm f_8 = NULL;
            t = x_73(t);
            {
              d_8 = t;
              {
                t = not_null(t_7);
                {
                  ATerm h_8 = NULL;
                  t = y_73(t);
                  {
                    f_8 = t;
                    {
                      t = not_null(u_7);
                      {
                        ATerm j_8 = NULL;
                        t = z_73(t);
                        {
                          h_8 = t;
                          {
                            t = not_null(v_7);
                            {
                              ATerm l_8 = NULL;
                              t = a_74(t);
                              {
                                j_8 = t;
                                {
                                  ATerm m_8 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(d_8), not_null(f_8), not_null(h_8), not_null(j_8)), not_null(b_8));
                                  {
                                    m_8 = t;
                                    if(((l_8 != NULL) && (l_8 != m_8)))
                                      _fail(m_8);
                                    else
                                      l_8 = m_8;
                                  }
                                  t = not_null(l_8);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm prop_sdef_1 (ATerm t, ATerm e_80 (ATerm))
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL;
  y_8 = t;
  x_8 :
  if(match_cons(y_8, sym_SDefT_4))
    {
      z_8 = ATgetArgument(y_8, 0);
      a_9 = ATgetArgument(y_8, 1);
      b_9 = ATgetArgument(y_8, 2);
      c_9 = ATgetArgument(y_8, 3);
      {
        ATerm f_0 (ATerm t)
        {
          t = term_f_6;
          return(t);
        }
        ATerm h_0 (ATerm t)
        {
          ATerm g_6;
          g_6 = t;
          {
            t = not_null(b_9);
            {
              ATerm n_0 (ATerm t)
              {
                ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
                f_9 = t;
                w_8 :
                if(match_cons(f_9, sym_VarDec_2))
                  {
                    g_9 = ATgetArgument(f_9, 0);
                    h_9 = ATgetArgument(f_9, 1);
                    {
                      ATerm h_6;
                      h_6 = t;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_9)), term_i_6);
                        {
                          ATerm q_0 (ATerm t)
                          {
                            t = term_f_6;
                            return(t);
                          }
                          t = assert_1(t, q_0);
                        }
                      }
                      t = h_6;
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1(t, n_0);
            }
          }
          t = g_6;
          {
            ATerm r_0 (ATerm t)
            {
              t = UndefCurrentTerm_0(t);
              t = e_80(t);
              return(t);
            }
            t = SDefT_4(t, _id, _id, _id, r_0);
          }
          return(t);
        }
        t = scope_2(t, f_0, h_0);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Not_1 (ATerm t, ATerm e_72 (ATerm))
{
  ATerm q_9 = NULL,r_9 = NULL;
  q_9 = t;
  p_9 :
  if(match_cons(q_9, sym_Not_1))
    {
      r_9 = ATgetArgument(q_9, 0);
      {
        ATerm u_9 = NULL,w_9 = NULL;
        ATerm v_9 = NULL;
        t = SSLgetAnnotations(not_null(q_9));
        {
          v_9 = t;
          if(((u_9 != NULL) && (u_9 != v_9)))
            _fail(v_9);
          else
            u_9 = v_9;
        }
        {
          t = not_null(r_9);
          {
            ATerm y_9 = NULL;
            t = e_72(t);
            {
              w_9 = t;
              {
                ATerm z_9 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(w_9)), not_null(u_9));
                {
                  z_9 = t;
                  if(((y_9 != NULL) && (y_9 != z_9)))
                    _fail(z_9);
                  else
                    y_9 = z_9;
                }
                t = not_null(y_9);
              }
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
ATerm prop_not_1 (ATerm t, ATerm c_80 (ATerm))
{
  ATerm g_10 = NULL,h_10 = NULL;
  g_10 = t;
  f_10 :
  if(match_cons(g_10, sym_Not_1))
    {
      h_10 = ATgetArgument(g_10, 0);
      {
        t = UndefCurrentTerm_0(t);
        {
          ATerm s_0 (ATerm t)
          {
            t = exec_maybe_1(t, c_80);
            return(t);
          }
          t = Not_1(t, s_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm c_72 (ATerm), ATerm d_72 (ATerm))
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
  p_10 = t;
  o_10 :
  if(match_cons(p_10, sym_Rec_2))
    {
      q_10 = ATgetArgument(p_10, 0);
      r_10 = ATgetArgument(p_10, 1);
      {
        ATerm v_10 = NULL,x_10 = NULL;
        ATerm w_10 = NULL;
        t = SSLgetAnnotations(not_null(p_10));
        {
          w_10 = t;
          if(((v_10 != NULL) && (v_10 != w_10)))
            _fail(w_10);
          else
            v_10 = w_10;
        }
        {
          t = not_null(q_10);
          {
            ATerm z_10 = NULL;
            t = c_72(t);
            {
              x_10 = t;
              {
                t = not_null(r_10);
                {
                  ATerm b_11 = NULL;
                  t = d_72(t);
                  {
                    z_10 = t;
                    {
                      ATerm c_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(x_10), not_null(z_10)), not_null(v_10));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm prop_rec_1 (ATerm t, ATerm b_80 (ATerm))
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL;
  k_11 = t;
  j_11 :
  if(match_cons(k_11, sym_Rec_2))
    {
      l_11 = ATgetArgument(k_11, 0);
      m_11 = ATgetArgument(k_11, 1);
      {
        ATerm t_0 (ATerm t)
        {
          t = exec_maybe_1(t, b_80);
          return(t);
        }
        t = Rec_2(t, _id, t_0);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2 (ATerm t, ATerm f_71 (ATerm), ATerm g_71 (ATerm))
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL;
  u_11 = t;
  t_11 :
  if(match_cons(u_11, sym_Let_2))
    {
      v_11 = ATgetArgument(u_11, 0);
      w_11 = ATgetArgument(u_11, 1);
      {
        ATerm a_12 = NULL,c_12 = NULL;
        ATerm b_12 = NULL;
        t = SSLgetAnnotations(not_null(u_11));
        {
          b_12 = t;
          if(((a_12 != NULL) && (a_12 != b_12)))
            _fail(b_12);
          else
            a_12 = b_12;
        }
        {
          t = not_null(v_11);
          {
            ATerm e_12 = NULL;
            t = f_71(t);
            {
              c_12 = t;
              {
                t = not_null(w_11);
                {
                  ATerm g_12 = NULL;
                  t = g_71(t);
                  {
                    e_12 = t;
                    {
                      ATerm h_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(c_12), not_null(e_12)), not_null(a_12));
                      {
                        h_12 = t;
                        if(((g_12 != NULL) && (g_12 != h_12)))
                          _fail(h_12);
                        else
                          g_12 = h_12;
                      }
                      t = not_null(g_12);
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
ATerm prop_let_1 (ATerm t, ATerm f_80 (ATerm))
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
  r_12 = t;
  q_12 :
  if(match_cons(r_12, sym_Let_2))
    {
      s_12 = ATgetArgument(r_12, 0);
      t_12 = ATgetArgument(r_12, 1);
      {
        ATerm u_12 = NULL,v_12 = NULL;
        ATerm l_6;
        l_6 = t;
        {
          ATerm w_12 = NULL;
          ATerm x_12 = NULL;
          t = save_Binding_0(t);
          {
            w_12 = t;
            {
              if(((v_12 != NULL) && (v_12 != w_12)))
                _fail(w_12);
              else
                v_12 = w_12;
              {
                t = save_CurrentTerm_0(t);
                {
                  x_12 = t;
                  if(((u_12 != NULL) && (u_12 != x_12)))
                    _fail(x_12);
                  else
                    u_12 = x_12;
                }
              }
            }
          }
        }
        t = l_6;
        {
          ATerm u_0 (ATerm t)
          {
            ATerm w_0 (ATerm t)
            {
              ATerm m_6;
              m_6 = t;
              {
                t = UndefCurrentTerm_0(t);
                {
                  t = not_null(v_12);
                  t = restore_Binding_0(t);
                }
              }
              t = m_6;
              t = f_80(t);
              return(t);
            }
            t = map_1(t, w_0);
            return(t);
          }
          ATerm v_0 (ATerm t)
          {
            ATerm n_6;
            n_6 = t;
            {
              t = not_null(u_12);
              {
                t = restore_CurrentTerm_0(t);
                {
                  t = not_null(v_12);
                  t = restore_Binding_0(t);
                }
              }
            }
            t = n_6;
            t = f_80(t);
            return(t);
          }
          t = Let_2(t, u_0, v_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm z_71 (ATerm), ATerm a_72 (ATerm), ATerm b_72 (ATerm))
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL;
  i_13 = t;
  h_13 :
  if(match_cons(i_13, sym_GuardedLChoice_3))
    {
      j_13 = ATgetArgument(i_13, 0);
      k_13 = ATgetArgument(i_13, 1);
      l_13 = ATgetArgument(i_13, 2);
      {
        ATerm q_13 = NULL,s_13 = NULL;
        ATerm r_13 = NULL;
        t = SSLgetAnnotations(not_null(i_13));
        {
          r_13 = t;
          if(((q_13 != NULL) && (q_13 != r_13)))
            _fail(r_13);
          else
            q_13 = r_13;
        }
        {
          t = not_null(j_13);
          {
            ATerm u_13 = NULL;
            t = z_71(t);
            {
              s_13 = t;
              {
                t = not_null(k_13);
                {
                  ATerm w_13 = NULL;
                  t = a_72(t);
                  {
                    u_13 = t;
                    {
                      t = not_null(l_13);
                      {
                        ATerm y_13 = NULL;
                        t = b_72(t);
                        {
                          w_13 = t;
                          {
                            ATerm z_13 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(s_13), not_null(u_13), not_null(w_13)), not_null(q_13));
                            {
                              z_13 = t;
                              if(((y_13 != NULL) && (y_13 != z_13)))
                                _fail(z_13);
                              else
                                y_13 = z_13;
                            }
                            t = not_null(y_13);
                          }
                        }
                      }
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
ATerm isect_CurrentTerm_0 (ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    ATerm y_0 (ATerm t)
    {
      ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL;
      q_14 = t;
      k_14 :
      if(match_cons(q_14, sym__2))
        {
          r_14 = ATgetArgument(q_14, 0);
          s_14 = ATgetArgument(q_14, 1);
          l_14 :
          if(((ATgetType(s_14) == AT_LIST) && !(ATisEmpty(s_14))))
            {
              t_14 = ATgetFirst((ATermList) s_14);
              w_14 = (ATerm) ATgetNext((ATermList) s_14);
              m_14 :
              if(match_cons(t_14, sym_Defined_2))
                {
                  u_14 = ATgetArgument(t_14, 0);
                  v_14 = ATgetArgument(t_14, 1);
                  n_14 :
                  if(!(match_cons(r_14, sym_Scopes_0)))
                    {
                      ATerm o_6 = t;
                      int p_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm q_6;
                          q_6 = t;
                          {
                            ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, term_r_6, not_null(r_14));
                            {
                              t = table_get_0(t);
                              {
                                z_14 = t;
                                i_14 :
                                if(((ATgetType(z_14) == AT_LIST) && !(ATisEmpty(z_14))))
                                  {
                                    a_15 = ATgetFirst((ATermList) z_14);
                                    d_15 = (ATerm) ATgetNext((ATermList) z_14);
                                    j_14 :
                                    if(match_cons(a_15, sym_Defined_2))
                                      {
                                        b_15 = ATgetArgument(a_15, 0);
                                        c_15 = ATgetArgument(a_15, 1);
                                        if(((v_14 != NULL) && (v_14 != c_15)))
                                          _fail(c_15);
                                        else
                                          v_14 = c_15;
                                      }
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
                          t = q_6;
                          ;
                          LocalPopChoice(p_6);
                        }
                      else
                        {
                          t = o_6;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_14), (ATerm) ATinsert(ATempty, term_i_6));
                        }
                    }
                }
              else
                {
                  o_14 :
                  if(!(match_cons(r_14, sym_Scopes_0)))
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              p_14 :
              if(!(match_cons(r_14, sym_Scopes_0)))
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
    t = try_1(t, y_0);
    return(t);
  }
  t = map_1(t, x_0);
  t = restore_CurrentTerm_0(t);
  return(t);
}
ATerm isect_Binding_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm a_1 (ATerm t)
    {
      ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL;
      q_15 = t;
      k_15 :
      if(match_cons(q_15, sym__2))
        {
          r_15 = ATgetArgument(q_15, 0);
          s_15 = ATgetArgument(q_15, 1);
          l_15 :
          if(((ATgetType(s_15) == AT_LIST) && !(ATisEmpty(s_15))))
            {
              t_15 = ATgetFirst((ATermList) s_15);
              w_15 = (ATerm) ATgetNext((ATermList) s_15);
              m_15 :
              if(match_cons(t_15, sym_Defined_2))
                {
                  u_15 = ATgetArgument(t_15, 0);
                  v_15 = ATgetArgument(t_15, 1);
                  n_15 :
                  if(!(match_cons(r_15, sym_Scopes_0)))
                    {
                      ATerm s_6 = t;
                      int t_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm u_6;
                          u_6 = t;
                          {
                            ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, term_f_6, not_null(r_15));
                            {
                              t = table_get_0(t);
                              {
                                z_15 = t;
                                i_15 :
                                if(((ATgetType(z_15) == AT_LIST) && !(ATisEmpty(z_15))))
                                  {
                                    a_16 = ATgetFirst((ATermList) z_15);
                                    d_16 = (ATerm) ATgetNext((ATermList) z_15);
                                    j_15 :
                                    if(match_cons(a_16, sym_Defined_2))
                                      {
                                        b_16 = ATgetArgument(a_16, 0);
                                        c_16 = ATgetArgument(a_16, 1);
                                        if(((v_15 != NULL) && (v_15 != c_16)))
                                          _fail(c_16);
                                        else
                                          v_15 = c_16;
                                      }
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
                          t = u_6;
                          ;
                          LocalPopChoice(t_6);
                        }
                      else
                        {
                          t = s_6;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_15), (ATerm) ATinsert(ATempty, term_i_6));
                        }
                    }
                }
              else
                {
                  o_15 :
                  if(!(match_cons(r_15, sym_Scopes_0)))
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              p_15 :
              if(!(match_cons(r_15, sym_Scopes_0)))
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
    t = try_1(t, a_1);
    return(t);
  }
  t = map_1(t, z_0);
  t = restore_Binding_0(t);
  return(t);
}
ATerm restore_CurrentTerm_0 (ATerm t)
{
  ATerm h_16 = NULL;
  h_16 = t;
  {
    ATerm v_6;
    v_6 = t;
    {
      t = term_r_6;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_6, not_null(h_16));
          t = table_putlist_0(t);
        }
      }
    }
    t = v_6;
  }
  return(t);
}
ATerm save_CurrentTerm_0 (ATerm t)
{
  t = term_r_6;
  t = table_getlist_0(t);
  return(t);
}
ATerm prop_abstract_choice_2 (ATerm t, ATerm j_80 (ATerm), ATerm k_80 (ATerm))
{
  ATerm o_16 = NULL,p_16 = NULL,s_16 = NULL,t_16 = NULL;
  ATerm w_6;
  w_6 = t;
  {
    ATerm q_16 = NULL;
    ATerm r_16 = NULL;
    t = save_Binding_0(t);
    {
      q_16 = t;
      {
        if(((o_16 != NULL) && (o_16 != q_16)))
          _fail(q_16);
        else
          o_16 = q_16;
        {
          t = save_CurrentTerm_0(t);
          {
            r_16 = t;
            if(((p_16 != NULL) && (p_16 != r_16)))
              _fail(r_16);
            else
              p_16 = r_16;
          }
        }
      }
    }
  }
  t = w_6;
  {
    t = j_80(t);
    {
      ATerm x_6;
      x_6 = t;
      {
        ATerm u_16 = NULL;
        ATerm v_16 = NULL;
        t = save_Binding_0(t);
        {
          u_16 = t;
          {
            if(((s_16 != NULL) && (s_16 != u_16)))
              _fail(u_16);
            else
              s_16 = u_16;
            {
              t = not_null(o_16);
              {
                t = restore_Binding_0(t);
                {
                  t = save_CurrentTerm_0(t);
                  {
                    v_16 = t;
                    {
                      if(((t_16 != NULL) && (t_16 != v_16)))
                        _fail(v_16);
                      else
                        t_16 = v_16;
                      {
                        t = not_null(p_16);
                        t = restore_CurrentTerm_0(t);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      t = x_6;
      {
        t = k_80(t);
        {
          ATerm y_6;
          y_6 = t;
          {
            t = not_null(s_16);
            {
              t = isect_Binding_0(t);
              {
                t = not_null(t_16);
                t = isect_CurrentTerm_0(t);
              }
            }
          }
          t = y_6;
        }
      }
    }
  }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm v_71 (ATerm), ATerm w_71 (ATerm))
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
  g_17 = t;
  f_17 :
  if(match_cons(g_17, sym_LChoice_2))
    {
      h_17 = ATgetArgument(g_17, 0);
      i_17 = ATgetArgument(g_17, 1);
      {
        ATerm m_17 = NULL,o_17 = NULL;
        ATerm n_17 = NULL;
        t = SSLgetAnnotations(not_null(g_17));
        {
          n_17 = t;
          if(((m_17 != NULL) && (m_17 != n_17)))
            _fail(n_17);
          else
            m_17 = n_17;
        }
        {
          t = not_null(h_17);
          {
            ATerm q_17 = NULL;
            t = v_71(t);
            {
              o_17 = t;
              {
                t = not_null(i_17);
                {
                  ATerm s_17 = NULL;
                  t = w_71(t);
                  {
                    q_17 = t;
                    {
                      ATerm t_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(o_17), not_null(q_17)), not_null(m_17));
                      {
                        t_17 = t;
                        if(((s_17 != NULL) && (s_17 != t_17)))
                          _fail(t_17);
                        else
                          s_17 = t_17;
                      }
                      t = not_null(s_17);
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
ATerm GChoice_2 (ATerm t, ATerm x_70 (ATerm), ATerm y_70 (ATerm))
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL;
  f_18 = t;
  e_18 :
  if(match_cons(f_18, sym_GChoice_2))
    {
      g_18 = ATgetArgument(f_18, 0);
      h_18 = ATgetArgument(f_18, 1);
      {
        ATerm l_18 = NULL,n_18 = NULL;
        ATerm m_18 = NULL;
        t = SSLgetAnnotations(not_null(f_18));
        {
          m_18 = t;
          if(((l_18 != NULL) && (l_18 != m_18)))
            _fail(m_18);
          else
            l_18 = m_18;
        }
        {
          t = not_null(g_18);
          {
            ATerm p_18 = NULL;
            t = x_70(t);
            {
              n_18 = t;
              {
                t = not_null(h_18);
                {
                  ATerm r_18 = NULL;
                  t = y_70(t);
                  {
                    p_18 = t;
                    {
                      ATerm s_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(n_18), not_null(p_18)), not_null(l_18));
                      {
                        s_18 = t;
                        if(((r_18 != NULL) && (r_18 != s_18)))
                          _fail(s_18);
                        else
                          r_18 = s_18;
                      }
                      t = not_null(r_18);
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
ATerm Choice_2 (ATerm t, ATerm t_70 (ATerm), ATerm u_70 (ATerm))
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
  e_19 = t;
  d_19 :
  if(match_cons(e_19, sym_Choice_2))
    {
      f_19 = ATgetArgument(e_19, 0);
      g_19 = ATgetArgument(e_19, 1);
      {
        ATerm k_19 = NULL,m_19 = NULL;
        ATerm l_19 = NULL;
        t = SSLgetAnnotations(not_null(e_19));
        {
          l_19 = t;
          if(((k_19 != NULL) && (k_19 != l_19)))
            _fail(l_19);
          else
            k_19 = l_19;
        }
        {
          t = not_null(f_19);
          {
            ATerm o_19 = NULL;
            t = t_70(t);
            {
              m_19 = t;
              {
                t = not_null(g_19);
                {
                  ATerm q_19 = NULL;
                  t = u_70(t);
                  {
                    o_19 = t;
                    {
                      ATerm r_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(m_19), not_null(o_19)), not_null(k_19));
                      {
                        r_19 = t;
                        if(((q_19 != NULL) && (q_19 != r_19)))
                          _fail(r_19);
                        else
                          q_19 = r_19;
                      }
                      t = not_null(q_19);
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
ATerm prop_choice_1 (ATerm t, ATerm i_80 (ATerm))
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL;
  c_20 = t;
  b_20 :
  if(match_cons(c_20, sym_Choice_2))
    {
      d_20 = ATgetArgument(c_20, 0);
      e_20 = ATgetArgument(c_20, 1);
      {
        ATerm b_1 (ATerm t)
        {
          t = Choice_2(t, i_80, _id);
          return(t);
        }
        ATerm c_1 (ATerm t)
        {
          t = Choice_2(t, _id, i_80);
          return(t);
        }
        t = prop_abstract_choice_2(t, b_1, c_1);
      }
    }
  else
    {
      if(match_cons(c_20, sym_GChoice_2))
        {
          d_20 = ATgetArgument(c_20, 0);
          e_20 = ATgetArgument(c_20, 1);
          {
            ATerm d_1 (ATerm t)
            {
              t = GChoice_2(t, i_80, _id);
              return(t);
            }
            ATerm e_1 (ATerm t)
            {
              t = GChoice_2(t, _id, i_80);
              return(t);
            }
            t = prop_abstract_choice_2(t, d_1, e_1);
          }
        }
      else
        {
          if(match_cons(c_20, sym_LChoice_2))
            {
              d_20 = ATgetArgument(c_20, 0);
              e_20 = ATgetArgument(c_20, 1);
              {
                ATerm f_1 (ATerm t)
                {
                  t = LChoice_2(t, i_80, _id);
                  return(t);
                }
                ATerm g_1 (ATerm t)
                {
                  t = LChoice_2(t, _id, i_80);
                  return(t);
                }
                t = prop_abstract_choice_2(t, f_1, g_1);
              }
            }
          else
            {
              if(match_cons(c_20, sym_GuardedLChoice_3))
                {
                  d_20 = ATgetArgument(c_20, 0);
                  e_20 = ATgetArgument(c_20, 1);
                  f_20 = ATgetArgument(c_20, 2);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      t = GuardedLChoice_3(t, i_80, _id, _id);
                      t = GuardedLChoice_3(t, _id, i_80, _id);
                      return(t);
                    }
                    ATerm i_1 (ATerm t)
                    {
                      t = GuardedLChoice_3(t, _id, _id, i_80);
                      return(t);
                    }
                    t = prop_abstract_choice_2(t, h_1, i_1);
                  }
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
ATerm Seq_2 (ATerm t, ATerm t_71 (ATerm), ATerm u_71 (ATerm))
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
  q_20 = t;
  p_20 :
  if(match_cons(q_20, sym_Seq_2))
    {
      r_20 = ATgetArgument(q_20, 0);
      s_20 = ATgetArgument(q_20, 1);
      {
        ATerm w_20 = NULL,y_20 = NULL;
        ATerm x_20 = NULL;
        t = SSLgetAnnotations(not_null(q_20));
        {
          x_20 = t;
          if(((w_20 != NULL) && (w_20 != x_20)))
            _fail(x_20);
          else
            w_20 = x_20;
        }
        {
          t = not_null(r_20);
          {
            ATerm a_21 = NULL;
            t = t_71(t);
            {
              y_20 = t;
              {
                t = not_null(s_20);
                {
                  ATerm c_21 = NULL;
                  t = u_71(t);
                  {
                    a_21 = t;
                    {
                      ATerm d_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(y_20), not_null(a_21)), not_null(w_20));
                      {
                        d_21 = t;
                        if(((c_21 != NULL) && (c_21 != d_21)))
                          _fail(d_21);
                        else
                          c_21 = d_21;
                      }
                      t = not_null(c_21);
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
ATerm prop_seq_1 (ATerm t, ATerm x_79 (ATerm))
{
  t = Seq_2(t, x_79, x_79);
  return(t);
}
ATerm prop_traversal_1 (ATerm t, ATerm a_80 (ATerm))
{
  ATerm k_21 = NULL,l_21 = NULL;
  k_21 = t;
  j_21 :
  if(match_cons(k_21, sym_All_1))
    {
      l_21 = ATgetArgument(k_21, 0);
      {
      }
    }
  else
    {
      if(match_cons(k_21, sym_One_1))
        {
          l_21 = ATgetArgument(k_21, 0);
          {
          }
        }
      else
        {
          if(match_cons(k_21, sym_Some_1))
            {
              l_21 = ATgetArgument(k_21, 0);
              {
              }
            }
          else
            {
              if(match_cons(k_21, sym_Thread_1))
                {
                  l_21 = ATgetArgument(k_21, 0);
                  {
                  }
                }
              else
                {
                  if(match_cons(k_21, sym_Bagof_1))
                    {
                      l_21 = ATgetArgument(k_21, 0);
                      {
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
  {
    t = UndefCurrentTerm_0(t);
    {
      ATerm j_1 (ATerm t)
      {
        t = exec_maybe_1(t, a_80);
        return(t);
      }
      t = _one(t, j_1);
    }
  }
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
  q_21 = t;
  p_21 :
  if(match_cons(q_21, sym__2))
    {
      r_21 = ATgetArgument(q_21, 0);
      s_21 = ATgetArgument(q_21, 1);
      {
        t = not_null(s_21);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
            v_21 = t;
            o_21 :
            if(match_cons(v_21, sym__2))
              {
                w_21 = ATgetArgument(v_21, 0);
                x_21 = ATgetArgument(v_21, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(r_21), not_null(w_21), not_null(x_21));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, k_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm restore_Binding_0 (ATerm t)
{
  ATerm d_22 = NULL;
  d_22 = t;
  {
    ATerm c_7;
    c_7 = t;
    {
      t = term_f_6;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_6, not_null(d_22));
          t = table_putlist_0(t);
        }
      }
    }
    t = c_7;
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm h_22 = NULL;
  h_22 = t;
  t = SSL_table_keys(not_null(h_22));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm n_22 = NULL;
  n_22 = t;
  {
    t = table_keys_0(t);
    {
      ATerm l_1 (ATerm t)
      {
        ATerm p_22 = NULL;
        ATerm r_22 = NULL;
        p_22 = t;
        {
          ATerm s_22 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_22), not_null(p_22));
          {
            t = table_get_0(t);
            {
              s_22 = t;
              if(((r_22 != NULL) && (r_22 != s_22)))
                _fail(s_22);
              else
                r_22 = s_22;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_22), not_null(r_22));
        }
        return(t);
      }
      t = map_1(t, l_1);
    }
  }
  return(t);
}
ATerm save_Binding_0 (ATerm t)
{
  t = term_f_6;
  t = table_getlist_0(t);
  return(t);
}
ATerm exec_maybe_1 (ATerm t, ATerm w_79 (ATerm))
{
  ATerm x_22 = NULL;
  ATerm d_7;
  d_7 = t;
  {
    ATerm y_22 = NULL;
    t = UndefCurrentTerm_0(t);
    {
      t = save_Binding_0(t);
      {
        y_22 = t;
        if(((x_22 != NULL) && (x_22 != y_22)))
          _fail(y_22);
        else
          x_22 = y_22;
      }
    }
  }
  t = d_7;
  {
    t = w_79(t);
    {
      ATerm e_7;
      e_7 = t;
      {
        t = UndefCurrentTerm_0(t);
        {
          t = not_null(x_22);
          t = restore_Binding_0(t);
        }
      }
      t = e_7;
    }
  }
  return(t);
}
ATerm CallT_3 (ATerm t, ATerm j_71 (ATerm), ATerm k_71 (ATerm), ATerm l_71 (ATerm))
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL;
  h_23 = t;
  g_23 :
  if(match_cons(h_23, sym_CallT_3))
    {
      i_23 = ATgetArgument(h_23, 0);
      j_23 = ATgetArgument(h_23, 1);
      k_23 = ATgetArgument(h_23, 2);
      {
        ATerm p_23 = NULL,r_23 = NULL;
        ATerm q_23 = NULL;
        t = SSLgetAnnotations(not_null(h_23));
        {
          q_23 = t;
          if(((p_23 != NULL) && (p_23 != q_23)))
            _fail(q_23);
          else
            p_23 = q_23;
        }
        {
          t = not_null(i_23);
          {
            ATerm t_23 = NULL;
            t = j_71(t);
            {
              r_23 = t;
              {
                t = not_null(j_23);
                {
                  ATerm v_23 = NULL;
                  t = k_71(t);
                  {
                    t_23 = t;
                    {
                      t = not_null(k_23);
                      {
                        ATerm x_23 = NULL;
                        t = l_71(t);
                        {
                          v_23 = t;
                          {
                            ATerm y_23 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(r_23), not_null(t_23), not_null(v_23)), not_null(p_23));
                            {
                              y_23 = t;
                              if(((x_23 != NULL) && (x_23 != y_23)))
                                _fail(y_23);
                              else
                                x_23 = y_23;
                            }
                            t = not_null(x_23);
                          }
                        }
                      }
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
ATerm PrimT_3 (ATerm t, ATerm l_72 (ATerm), ATerm m_72 (ATerm), ATerm n_72 (ATerm))
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL;
  m_24 = t;
  l_24 :
  if(match_cons(m_24, sym_PrimT_3))
    {
      n_24 = ATgetArgument(m_24, 0);
      o_24 = ATgetArgument(m_24, 1);
      p_24 = ATgetArgument(m_24, 2);
      {
        ATerm u_24 = NULL,w_24 = NULL;
        ATerm v_24 = NULL;
        t = SSLgetAnnotations(not_null(m_24));
        {
          v_24 = t;
          if(((u_24 != NULL) && (u_24 != v_24)))
            _fail(v_24);
          else
            u_24 = v_24;
        }
        {
          t = not_null(n_24);
          {
            ATerm y_24 = NULL;
            t = l_72(t);
            {
              w_24 = t;
              {
                t = not_null(o_24);
                {
                  ATerm a_25 = NULL;
                  t = m_72(t);
                  {
                    y_24 = t;
                    {
                      t = not_null(p_24);
                      {
                        ATerm c_25 = NULL;
                        t = n_72(t);
                        {
                          a_25 = t;
                          {
                            ATerm d_25 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(w_24), not_null(y_24), not_null(a_25)), not_null(u_24));
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
              }
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
ATerm prop_call_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
  n_25 = t;
  m_25 :
  if(match_cons(n_25, sym_PrimT_3))
    {
      o_25 = ATgetArgument(n_25, 0);
      p_25 = ATgetArgument(n_25, 1);
      q_25 = ATgetArgument(n_25, 2);
      {
        t = UndefCurrentTerm_0(t);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm o_1 (ATerm t)
            {
              t = exec_maybe_1(t, p_0);
              return(t);
            }
            t = map_1(t, o_1);
            return(t);
          }
          ATerm n_1 (ATerm t)
          {
            t = alltd_1(t, Binding_0);
            return(t);
          }
          t = PrimT_3(t, _id, m_1, n_1);
        }
      }
    }
  else
    {
      if(match_cons(n_25, sym_CallT_3))
        {
          o_25 = ATgetArgument(n_25, 0);
          p_25 = ATgetArgument(n_25, 1);
          q_25 = ATgetArgument(n_25, 2);
          {
            t = UndefCurrentTerm_0(t);
            {
              ATerm p_1 (ATerm t)
              {
                ATerm r_1 (ATerm t)
                {
                  t = exec_maybe_1(t, p_0);
                  return(t);
                }
                t = map_1(t, r_1);
                return(t);
              }
              ATerm q_1 (ATerm t)
              {
                t = alltd_1(t, Binding_0);
                return(t);
              }
              t = CallT_3(t, _id, p_1, q_1);
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
ATerm UndefCurrentTerm_0 (ATerm t)
{
  ATerm g_7;
  g_7 = t;
  {
    t = term_h_7;
    {
      ATerm s_1 (ATerm t)
      {
        t = term_r_6;
        return(t);
      }
      t = assert_1(t, s_1);
    }
  }
  t = g_7;
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm p_71 (ATerm), ATerm q_71 (ATerm))
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL;
  z_25 = t;
  y_25 :
  if(match_cons(z_25, sym_Scope_2))
    {
      a_26 = ATgetArgument(z_25, 0);
      b_26 = ATgetArgument(z_25, 1);
      {
        ATerm f_26 = NULL,h_26 = NULL;
        ATerm g_26 = NULL;
        t = SSLgetAnnotations(not_null(z_25));
        {
          g_26 = t;
          if(((f_26 != NULL) && (f_26 != g_26)))
            _fail(g_26);
          else
            f_26 = g_26;
        }
        {
          t = not_null(a_26);
          {
            ATerm j_26 = NULL;
            t = p_71(t);
            {
              h_26 = t;
              {
                t = not_null(b_26);
                {
                  ATerm l_26 = NULL;
                  t = q_71(t);
                  {
                    j_26 = t;
                    {
                      ATerm m_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(h_26), not_null(j_26)), not_null(f_26));
                      {
                        m_26 = t;
                        if(((l_26 != NULL) && (l_26 != m_26)))
                          _fail(m_26);
                        else
                          l_26 = m_26;
                      }
                      t = not_null(l_26);
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
ATerm prop_scope_1 (ATerm t, ATerm d_80 (ATerm))
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL;
  y_26 = t;
  x_26 :
  if(match_cons(y_26, sym_Scope_2))
    {
      z_26 = ATgetArgument(y_26, 0);
      a_27 = ATgetArgument(y_26, 1);
      {
        ATerm t_1 (ATerm t)
        {
          t = term_f_6;
          return(t);
        }
        ATerm u_1 (ATerm t)
        {
          ATerm i_7;
          i_7 = t;
          {
            t = not_null(z_26);
            {
              ATerm v_1 (ATerm t)
              {
                ATerm c_27 = NULL;
                c_27 = t;
                {
                  ATerm j_7;
                  j_7 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_27)), term_i_6);
                    {
                      ATerm w_1 (ATerm t)
                      {
                        t = term_f_6;
                        return(t);
                      }
                      t = assert_1(t, w_1);
                    }
                  }
                  t = j_7;
                }
                return(t);
              }
              t = map_1(t, v_1);
            }
          }
          t = i_7;
          {
            t = Scope_2(t, _id, d_80);
            {
              ATerm k_7;
              k_7 = t;
              {
                ATerm x_1 (ATerm t)
                {
                  t = CurrentTerm_0(t);
                  {
                    ATerm y_1 (ATerm t)
                    {
                      ATerm e_27 = NULL,f_27 = NULL;
                      e_27 = t;
                      w_26 :
                      if(match_cons(e_27, sym_Var_1))
                        {
                          f_27 = ATgetArgument(e_27, 0);
                          {
                            t = not_null(z_26);
                            {
                              ATerm z_1 (ATerm t)
                              {
                                ATerm h_27 = NULL;
                                h_27 = t;
                                if(((f_27 != NULL) && (f_27 != h_27)))
                                  _fail(h_27);
                                else
                                  f_27 = h_27;
                                return(t);
                              }
                              t = fetch_1(t, z_1);
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, y_1);
                    t = UndefCurrentTerm_0(t);
                  }
                  return(t);
                }
                t = try_1(t, x_1);
              }
              t = k_7;
            }
          }
          return(t);
        }
        t = scope_2(t, t_1, u_1);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Build_1 (ATerm t, ATerm n_71 (ATerm))
{
  ATerm r_27 = NULL,a_29 = NULL;
  r_27 = t;
  q_27 :
  if(match_cons(r_27, sym_Build_1))
    {
      a_29 = ATgetArgument(r_27, 0);
      {
        ATerm q_29 = NULL,s_29 = NULL;
        ATerm r_29 = NULL;
        t = SSLgetAnnotations(not_null(r_27));
        {
          r_29 = t;
          if(((q_29 != NULL) && (q_29 != r_29)))
            _fail(r_29);
          else
            q_29 = r_29;
        }
        {
          t = not_null(a_29);
          {
            ATerm w_29 = NULL;
            t = n_71(t);
            {
              s_29 = t;
              {
                ATerm x_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(s_29)), not_null(q_29));
                {
                  x_29 = t;
                  if(((w_29 != NULL) && (w_29 != x_29)))
                    _fail(x_29);
                  else
                    w_29 = x_29;
                }
                t = not_null(w_29);
              }
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
ATerm prop_build_0 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL;
  ATerm a_2 (ATerm t)
  {
    t = alltd_1(t, Binding_0);
    return(t);
  }
  t = Build_1(t, a_2);
  {
    e_30 = t;
    d_30 :
    if(match_cons(e_30, sym_Build_1))
      {
        f_30 = ATgetArgument(e_30, 0);
        {
          ATerm l_7;
          l_7 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_m_7, not_null(f_30)));
            {
              ATerm b_2 (ATerm t)
              {
                t = term_r_6;
                return(t);
              }
              t = assert_1(t, b_2);
            }
          }
          t = l_7;
        }
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm p_98 (ATerm))
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
  n_30 = t;
  m_30 :
  if(match_cons(n_30, sym__2))
    {
      o_30 = ATgetArgument(n_30, 0);
      p_30 = ATgetArgument(n_30, 1);
      {
        ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
        ATerm n_7;
        n_7 = t;
        {
          ATerm v_30 = NULL;
          ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
          t = p_98(t);
          {
            v_30 = t;
            {
              if(((s_30 != NULL) && (s_30 != v_30)))
                _fail(v_30);
              else
                s_30 = v_30;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(s_30), not_null(o_30), not_null(p_30));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_7 = t;
                    int p_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_30), term_w_7);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(p_7);
                      }
                    else
                      {
                        t = o_7;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      w_30 = t;
                      l_30 :
                      if(((ATgetType(w_30) == AT_LIST) && !(ATisEmpty(w_30))))
                        {
                          x_30 = ATgetFirst((ATermList) w_30);
                          y_30 = (ATerm) ATgetNext((ATermList) w_30);
                          {
                            if(((t_30 != NULL) && (t_30 != x_30)))
                              _fail(x_30);
                            else
                              t_30 = x_30;
                            {
                              if(((u_30 != NULL) && (u_30 != y_30)))
                                _fail(y_30);
                              else
                                u_30 = y_30;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(s_30), term_w_7, (ATerm) ATinsert(CheckATermList(not_null(u_30)), (ATerm) ATinsert(CheckATermList(not_null(t_30)), not_null(o_30))));
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
        t = n_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm j_83 (ATerm))
{
  ATerm h_31 (ATerm t)
  {
    ATerm x_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_83(t);
        ;
        LocalPopChoice(y_7);
      }
    else
      {
        t = x_7;
        t = _one(t, h_31);
      }
    return(t);
  }
  t = h_31(t);
  return(t);
}
ATerm introduce_binding_0 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL;
  m_31 = t;
  k_31 :
  if(match_cons(m_31, sym__2))
    {
      n_31 = ATgetArgument(m_31, 0);
      p_31 = ATgetArgument(m_31, 1);
      l_31 :
      if(match_cons(n_31, sym_Var_1))
        {
          o_31 = ATgetArgument(n_31, 0);
          {
            ATerm z_7;
            z_7 = t;
            {
              t = not_null(p_31);
              {
                ATerm a_8 = t;
                if((PushChoice() == 0))
                  {
                    ATerm c_2 (ATerm t)
                    {
                      ATerm s_31 = NULL,t_31 = NULL,z_31 = NULL;
                      s_31 = t;
                      j_31 :
                      if(!(match_cons(s_31, sym_Wld_0)))
                        {
                          if(match_cons(s_31, sym_As_2))
                            {
                              t_31 = ATgetArgument(s_31, 0);
                              z_31 = ATgetArgument(s_31, 1);
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
                    t = oncetd_1(t, c_2);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_8;
                  }
              }
            }
            t = z_7;
            {
              ATerm e_8;
              e_8 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_31)), (ATerm) ATmakeAppl(sym_Defined_2, term_g_8, not_null(p_31)));
                {
                  ATerm d_2 (ATerm t)
                  {
                    t = term_f_6;
                    return(t);
                  }
                  t = assert_1(t, d_2);
                }
              }
              t = e_8;
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
ATerm Var_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm o_32 = NULL,p_32 = NULL;
  o_32 = t;
  n_32 :
  if(match_cons(o_32, sym_Var_1))
    {
      p_32 = ATgetArgument(o_32, 0);
      {
        ATerm i_8 = t;
        int k_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_32 = NULL,u_32 = NULL;
            ATerm t_32 = NULL;
            t = SSLgetAnnotations(not_null(o_32));
            {
              t_32 = t;
              if(((s_32 != NULL) && (s_32 != t_32)))
                _fail(t_32);
              else
                s_32 = t_32;
            }
            {
              t = not_null(p_32);
              {
                ATerm w_32 = NULL;
                t = o_0(t);
                {
                  u_32 = t;
                  {
                    ATerm x_32 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(u_32)), not_null(s_32));
                    {
                      x_32 = t;
                      if(((w_32 != NULL) && (w_32 != x_32)))
                        _fail(x_32);
                      else
                        w_32 = x_32;
                    }
                    t = not_null(w_32);
                  }
                }
              }
            }
            ;
            LocalPopChoice(k_8);
          }
        else
          {
            t = i_8;
            {
              ATerm n_8 = t;
              int o_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_33 = NULL,c_33 = NULL;
                  ATerm b_33 = NULL;
                  t = SSLgetAnnotations(not_null(o_32));
                  {
                    b_33 = t;
                    if(((a_33 != NULL) && (a_33 != b_33)))
                      _fail(b_33);
                    else
                      a_33 = b_33;
                  }
                  {
                    t = not_null(p_32);
                    {
                      ATerm e_33 = NULL;
                      t = o_0(t);
                      {
                        c_33 = t;
                        {
                          ATerm f_33 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(c_33)), not_null(a_33));
                          {
                            f_33 = t;
                            if(((e_33 != NULL) && (e_33 != f_33)))
                              _fail(f_33);
                            else
                              e_33 = f_33;
                          }
                          t = not_null(e_33);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(o_8);
                }
              else
                {
                  t = n_8;
                  {
                    ATerm i_33 = NULL,k_33 = NULL;
                    ATerm j_33 = NULL;
                    t = SSLgetAnnotations(not_null(o_32));
                    {
                      j_33 = t;
                      if(((i_33 != NULL) && (i_33 != j_33)))
                        _fail(j_33);
                      else
                        i_33 = j_33;
                    }
                    {
                      t = not_null(p_32);
                      {
                        ATerm m_33 = NULL;
                        t = o_0(t);
                        {
                          k_33 = t;
                          {
                            ATerm n_33 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(k_33)), not_null(i_33));
                            {
                              n_33 = t;
                              if(((m_33 != NULL) && (m_33 != n_33)))
                                _fail(n_33);
                              else
                                m_33 = n_33;
                            }
                            t = not_null(m_33);
                          }
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
ATerm TermIsVarIgnore_1 (ATerm t, ATerm h_80 (ATerm))
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
  j_34 = t;
  f_34 :
  if(((ATgetType(j_34) == AT_LIST) && !(ATisEmpty(j_34))))
    {
      k_34 = ATgetFirst((ATermList) j_34);
      n_34 = (ATerm) ATgetNext((ATermList) j_34);
      g_34 :
      if(match_cons(k_34, sym__2))
        {
          l_34 = ATgetArgument(k_34, 0);
          m_34 = ATgetArgument(k_34, 1);
          {
            t = not_null(l_34);
            {
              ATerm p_8 = t;
              if((PushChoice() == 0))
                {
                  t = h_80(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = p_8;
                }
              {
                t = not_null(m_34);
                t = h_80(t);
              }
            }
            t = not_null(n_34);
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
ATerm MatchWildCard_0 (ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL;
  w_34 = t;
  t_34 :
  if(((ATgetType(w_34) == AT_LIST) && !(ATisEmpty(w_34))))
    {
      x_34 = ATgetFirst((ATermList) w_34);
      a_35 = (ATerm) ATgetNext((ATermList) w_34);
      u_34 :
      if(match_cons(x_34, sym__2))
        {
          y_34 = ATgetArgument(x_34, 0);
          z_34 = ATgetArgument(x_34, 1);
          v_34 :
          if(match_cons(y_34, sym_Wld_0))
            {
              t = not_null(a_35);
            }
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
ATerm AsMatch_0 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL;
  j_35 = t;
  f_35 :
  if(((ATgetType(j_35) == AT_LIST) && !(ATisEmpty(j_35))))
    {
      k_35 = ATgetFirst((ATermList) j_35);
      q_35 = (ATerm) ATgetNext((ATermList) j_35);
      g_35 :
      if(match_cons(k_35, sym__2))
        {
          l_35 = ATgetArgument(k_35, 0);
          p_35 = ATgetArgument(k_35, 1);
          h_35 :
          if(match_cons(l_35, sym_As_2))
            {
              m_35 = ATgetArgument(l_35, 0);
              o_35 = ATgetArgument(l_35, 1);
              i_35 :
              if(match_cons(m_35, sym_Var_1))
                {
                  n_35 = ATgetArgument(m_35, 0);
                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(q_35)), (ATerm) ATmakeAppl(sym__2, not_null(o_35), not_null(p_35))), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_35)), not_null(p_35)));
                }
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
ATerm UfDecompose_0 (ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL;
  g_36 = t;
  e_36 :
  if(((ATgetType(g_36) == AT_LIST) && !(ATisEmpty(g_36))))
    {
      h_36 = ATgetFirst((ATermList) g_36);
      k_36 = (ATerm) ATgetNext((ATermList) g_36);
      f_36 :
      if(match_cons(h_36, sym__2))
        {
          i_36 = ATgetArgument(h_36, 0);
          j_36 = ATgetArgument(h_36, 1);
          {
            ATerm o_36 = NULL,p_36 = NULL,v_36 = NULL,b_37 = NULL;
            ATerm q_8;
            q_8 = t;
            {
              ATerm q_36 = NULL;
              ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL;
              t = not_null(j_36);
              {
                q_36 = t;
                {
                  t = SSL_explode_term(not_null(q_36));
                  {
                    s_36 = t;
                    z_35 :
                    if(match_cons(s_36, sym__2))
                      {
                        t_36 = ATgetArgument(s_36, 0);
                        u_36 = ATgetArgument(s_36, 1);
                        {
                          if(((o_36 != NULL) && (o_36 != t_36)))
                            _fail(t_36);
                          else
                            o_36 = t_36;
                          if(((p_36 != NULL) && (p_36 != u_36)))
                            _fail(u_36);
                          else
                            p_36 = u_36;
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
            t = q_8;
            {
              ATerm r_8;
              r_8 = t;
              {
                ATerm w_36 = NULL;
                ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
                t = not_null(i_36);
                {
                  w_36 = t;
                  {
                    t = SSL_explode_term(not_null(w_36));
                    {
                      y_36 = t;
                      c_36 :
                      if(match_cons(y_36, sym__2))
                        {
                          z_36 = ATgetArgument(y_36, 0);
                          a_37 = ATgetArgument(y_36, 1);
                          {
                            if(((o_36 != NULL) && (o_36 != z_36)))
                              _fail(z_36);
                            else
                              o_36 = z_36;
                            if(((v_36 != NULL) && (v_36 != a_37)))
                              _fail(a_37);
                            else
                              v_36 = a_37;
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
              t = r_8;
              {
                ATerm g_37 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_36), not_null(p_36));
                {
                  t = zip_1(t, _id);
                  {
                    g_37 = t;
                    if(((b_37 != NULL) && (b_37 != g_37)))
                      _fail(g_37);
                    else
                      b_37 = g_37;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_37), not_null(k_36));
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
ATerm Look2_0 (ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL;
  s_37 = t;
  q_37 :
  if(match_cons(s_37, sym__2))
    {
      t_37 = ATgetArgument(s_37, 0);
      u_37 = ATgetArgument(s_37, 1);
      r_37 :
      if(((ATgetType(u_37) == AT_LIST) && !(ATisEmpty(u_37))))
        {
          v_37 = ATgetFirst((ATermList) u_37);
          w_37 = (ATerm) ATgetNext((ATermList) u_37);
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_37), not_null(w_37));
        }
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
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL;
  e_38 = t;
  b_38 :
  if(match_cons(e_38, sym__2))
    {
      f_38 = ATgetArgument(e_38, 0);
      g_38 = ATgetArgument(e_38, 1);
      c_38 :
      if(((ATgetType(g_38) == AT_LIST) && !(ATisEmpty(g_38))))
        {
          h_38 = ATgetFirst((ATermList) g_38);
          k_38 = (ATerm) ATgetNext((ATermList) g_38);
          d_38 :
          if(match_cons(h_38, sym__2))
            {
              i_38 = ATgetArgument(h_38, 0);
              j_38 = ATgetArgument(h_38, 1);
              {
                ATerm m_38 = NULL;
                if(((f_38 != NULL) && (f_38 != i_38)))
                  _fail(i_38);
                else
                  f_38 = i_38;
                {
                  if(((m_38 != NULL) && (m_38 != j_38)))
                    _fail(j_38);
                  else
                    m_38 = j_38;
                  t = not_null(m_38);
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
  ATerm s_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(t_8);
    }
  else
    {
      t = s_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm e_107 (ATerm), ATerm f_107 (ATerm))
{
  ATerm s_38 = NULL;
  ATerm u_38 = NULL,v_38 = NULL;
  s_38 = t;
  {
    ATerm w_38 = NULL;
    t = not_null(s_38);
    {
      ATerm z_38 = NULL;
      t = e_107(t);
      {
        w_38 = t;
        {
          if(((u_38 != NULL) && (u_38 != w_38)))
            _fail(w_38);
          else
            u_38 = w_38;
          {
            t = f_107(t);
            {
              z_38 = t;
              if(((v_38 != NULL) && (v_38 != z_38)))
                _fail(z_38);
              else
                v_38 = z_38;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_38), not_null(v_38));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
  f_39 = t;
  e_39 :
  if(match_cons(f_39, sym__2))
    {
      g_39 = ATgetArgument(f_39, 0);
      h_39 = ATgetArgument(f_39, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_39)), not_null(g_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL;
  p_39 = t;
  m_39 :
  if(match_cons(p_39, sym__2))
    {
      q_39 = ATgetArgument(p_39, 0);
      t_39 = ATgetArgument(p_39, 1);
      n_39 :
      if(((ATgetType(q_39) == AT_LIST) && !(ATisEmpty(q_39))))
        {
          r_39 = ATgetFirst((ATermList) q_39);
          s_39 = (ATerm) ATgetNext((ATermList) q_39);
          o_39 :
          if(((ATgetType(t_39) == AT_LIST) && !(ATisEmpty(t_39))))
            {
              u_39 = ATgetFirst((ATermList) t_39);
              v_39 = (ATerm) ATgetNext((ATermList) t_39);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(r_39), not_null(u_39)), (ATerm) ATmakeAppl(sym__2, not_null(s_39), not_null(v_39)));
            }
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
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
  f_40 = t;
  c_40 :
  if(match_cons(f_40, sym__2))
    {
      g_40 = ATgetArgument(f_40, 0);
      h_40 = ATgetArgument(f_40, 1);
      d_40 :
      if(((ATgetType(g_40) == AT_LIST) && ATisEmpty(g_40)))
        {
          e_40 :
          if(((ATgetType(h_40) == AT_LIST) && ATisEmpty(h_40)))
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
ATerm genzip_4 (ATerm t, ATerm z_89 (ATerm), ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm c_90 (ATerm))
{
  ATerm j_40 (ATerm t)
  {
    ATerm u_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_89(t);
        ;
        LocalPopChoice(v_8);
      }
    else
      {
        t = u_8;
        {
          t = a_90(t);
          {
            t = _2(t, c_90, j_40);
            t = b_90(t);
          }
        }
      }
    return(t);
  }
  t = j_40(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm e_90 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, e_90);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL;
  o_40 = t;
  n_40 :
  if(match_cons(o_40, sym__2))
    {
      p_40 = ATgetArgument(o_40, 0);
      q_40 = ATgetArgument(o_40, 1);
      {
        ATerm t_40 = NULL;
        if(((t_40 != NULL) && (t_40 != q_40)))
          _fail(q_40);
        else
          t_40 = q_40;
      }
    }
  else
    {
      if(match_cons(o_40, sym__3))
        {
          p_40 = ATgetArgument(o_40, 0);
          q_40 = ATgetArgument(o_40, 1);
          r_40 = ATgetArgument(o_40, 2);
          {
            ATerm z_40 = NULL;
            ATerm a_41 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_40), not_null(q_40));
            {
              t = zip_1(t, _id);
              {
                a_41 = t;
                if(((z_40 != NULL) && (z_40 != a_41)))
                  _fail(a_41);
                else
                  z_40 = a_41;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_40), not_null(r_40));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm p_106 (ATerm), ATerm q_106 (ATerm))
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL;
  t = subs_args_0(t);
  {
    g_41 = t;
    f_41 :
    if(match_cons(g_41, sym__2))
      {
        h_41 = ATgetArgument(g_41, 0);
        i_41 = ATgetArgument(g_41, 1);
        {
          t = not_null(i_41);
          {
            ATerm e_2 (ATerm t)
            {
              ATerm f_2 (ATerm t)
              {
                t = not_null(h_41);
                return(t);
              }
              t = SubsVar_2(t, p_106, f_2);
              t = q_106(t);
              return(t);
            }
            t = alltd_1(t, e_2);
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
ATerm substitute_1 (ATerm t, ATerm r_106 (ATerm))
{
  t = substitute_2(t, r_106, _id);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL;
  p_41 = t;
  o_41 :
  if(match_cons(p_41, sym__2))
    {
      q_41 = ATgetArgument(p_41, 0);
      r_41 = ATgetArgument(p_41, 1);
      {
        ATerm d_9;
        d_9 = t;
        {
          t = not_null(r_41);
          {
            ATerm g_2 (ATerm t)
            {
              ATerm u_41 = NULL;
              u_41 = t;
              if(((q_41 != NULL) && (q_41 != u_41)))
                _fail(u_41);
              else
                q_41 = u_41;
              return(t);
            }
            t = oncetd_1(t, g_2);
          }
        }
        t = d_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfVar_1 (ATerm t, ATerm b_110 (ATerm))
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL;
  d_42 = t;
  a_42 :
  if(match_cons(d_42, sym__2))
    {
      e_42 = ATgetArgument(d_42, 0);
      j_42 = ATgetArgument(d_42, 1);
      b_42 :
      if(((ATgetType(e_42) == AT_LIST) && !(ATisEmpty(e_42))))
        {
          f_42 = ATgetFirst((ATermList) e_42);
          i_42 = (ATerm) ATgetNext((ATermList) e_42);
          c_42 :
          if(match_cons(f_42, sym__2))
            {
              g_42 = ATgetArgument(f_42, 0);
              h_42 = ATgetArgument(f_42, 1);
              {
                ATerm o_42 = NULL,p_42 = NULL;
                ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL;
                t = not_null(g_42);
                {
                  t = b_110(t);
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_42), not_null(h_42));
                    {
                      ATerm e_9 = t;
                      if((PushChoice() == 0))
                        {
                          t = is_subterm_0(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = e_9;
                        }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(g_42), not_null(h_42))), (ATerm) ATmakeAppl(sym__2, not_null(j_42), not_null(i_42)));
                        {
                          t = substitute_1(t, b_110);
                          {
                            q_42 = t;
                            z_41 :
                            if(match_cons(q_42, sym__2))
                              {
                                r_42 = ATgetArgument(q_42, 0);
                                s_42 = ATgetArgument(q_42, 1);
                                {
                                  if(((o_42 != NULL) && (o_42 != r_42)))
                                    _fail(r_42);
                                  else
                                    o_42 = r_42;
                                  if(((p_42 != NULL) && (p_42 != s_42)))
                                    _fail(s_42);
                                  else
                                    p_42 = s_42;
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_42), (ATerm) ATinsert(CheckATermList(not_null(o_42)), (ATerm) ATmakeAppl(sym__2, not_null(g_42), not_null(h_42))));
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
ATerm UfIdem_0 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL;
  y_42 = t;
  w_42 :
  if(((ATgetType(y_42) == AT_LIST) && !(ATisEmpty(y_42))))
    {
      z_42 = ATgetFirst((ATermList) y_42);
      c_43 = (ATerm) ATgetNext((ATermList) y_42);
      x_42 :
      if(match_cons(z_42, sym__2))
        {
          a_43 = ATgetArgument(z_42, 0);
          b_43 = ATgetArgument(z_42, 1);
          {
            ATerm e_43 = NULL;
            if(((a_43 != NULL) && (a_43 != b_43)))
              _fail(b_43);
            else
              a_43 = b_43;
            {
              if(((e_43 != NULL) && (e_43 != c_43)))
                _fail(c_43);
              else
                e_43 = c_43;
              t = not_null(e_43);
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
ATerm while_not_2 (ATerm t, ATerm w_81 (ATerm), ATerm x_81 (ATerm))
{
  ATerm g_43 (ATerm t)
  {
    ATerm i_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_81(t);
        ;
        LocalPopChoice(j_9);
      }
    else
      {
        t = i_9;
        {
          t = x_81(t);
          t = g_43(t);
        }
      }
    return(t);
  }
  t = g_43(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm b_82 (ATerm))
{
  t = z_81(t);
  t = while_not_2(t, a_82, b_82);
  return(t);
}
ATerm prop_pattern_match_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm l_43 = NULL;
    l_43 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_43), (ATerm) ATempty);
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
    n_43 = t;
    j_43 :
    if(match_cons(n_43, sym__2))
      {
        o_43 = ATgetArgument(n_43, 0);
        p_43 = ATgetArgument(n_43, 1);
        k_43 :
        if(((ATgetType(o_43) == AT_LIST) && ATisEmpty(o_43)))
          {
            t = not_null(p_43);
          }
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
  ATerm j_2 (ATerm t)
  {
    ATerm k_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2(t, UfIdem_0, _id);
        ;
        LocalPopChoice(l_9);
      }
    else
      {
        t = k_9;
        {
          ATerm m_9 = t;
          int n_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_2 (ATerm t)
              {
                t = Var_1(t, _id);
                return(t);
              }
              t = UfVar_1(t, k_2);
              ;
              LocalPopChoice(n_9);
            }
          else
            {
              t = m_9;
              {
                ATerm o_9 = t;
                int s_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = _2(t, UfDecompose_0, _id);
                    ;
                    LocalPopChoice(s_9);
                  }
                else
                  {
                    t = o_9;
                    {
                      ATerm t_9 = t;
                      int x_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = _2(t, AsMatch_0, _id);
                          ;
                          LocalPopChoice(x_9);
                        }
                      else
                        {
                          t = t_9;
                          {
                            ATerm a_10 = t;
                            int b_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = _2(t, MatchWildCard_0, _id);
                                ;
                                LocalPopChoice(b_10);
                              }
                            else
                              {
                                t = a_10;
                                {
                                  ATerm l_2 (ATerm t)
                                  {
                                    ATerm m_2 (ATerm t)
                                    {
                                      t = Var_1(t, _id);
                                      return(t);
                                    }
                                    t = TermIsVarIgnore_1(t, m_2);
                                    return(t);
                                  }
                                  t = _2(t, l_2, _id);
                                }
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
  t = for_3(t, h_2, i_2, j_2);
  return(t);
}
ATerm CurrentTerm_0 (ATerm t)
{
  ATerm i_44 = NULL;
  i_44 = t;
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_44 = NULL;
        ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm n_2 (ATerm t)
          {
            t = term_r_6;
            return(t);
          }
          t = rewrite_1(t, n_2);
          {
            l_44 = t;
            a_44 :
            if(match_cons(l_44, sym_Defined_2))
              {
                m_44 = ATgetArgument(l_44, 0);
                n_44 = ATgetArgument(l_44, 1);
                c_44 :
                if(match_string(m_44, "i_0"))
                  {
                    if(((k_44 != NULL) && (k_44 != n_44)))
                      _fail(n_44);
                    else
                      k_44 = n_44;
                  }
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
        t = not_null(k_44);
        ;
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
        {
          ATerm e_10 = t;
          int i_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_44 = NULL;
              ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL;
              t = (ATerm) ATempty;
              {
                ATerm o_2 (ATerm t)
                {
                  t = term_r_6;
                  return(t);
                }
                t = rewrite_1(t, o_2);
                {
                  q_44 = t;
                  e_44 :
                  if(match_cons(q_44, sym_Defined_2))
                    {
                      r_44 = ATgetArgument(q_44, 0);
                      s_44 = ATgetArgument(q_44, 1);
                      f_44 :
                      if(match_string(r_44, "g_0"))
                        {
                          if(((p_44 != NULL) && (p_44 != s_44)))
                            _fail(s_44);
                          else
                            p_44 = s_44;
                        }
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
              t = not_null(p_44);
              ;
              LocalPopChoice(i_10);
            }
          else
            {
              t = e_10;
              {
                ATerm u_44 = NULL;
                t = (ATerm) ATempty;
                {
                  ATerm p_2 (ATerm t)
                  {
                    t = term_r_6;
                    return(t);
                  }
                  t = rewrite_1(t, p_2);
                  {
                    u_44 = t;
                    h_44 :
                    if(match_cons(u_44, sym_Undefined_0))
                      {
                        _fail(t);
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                }
                t = term_i_6;
              }
            }
        }
      }
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
  d_45 = t;
  c_45 :
  if(((ATgetType(d_45) == AT_LIST) && !(ATisEmpty(d_45))))
    {
      e_45 = ATgetFirst((ATermList) d_45);
      f_45 = (ATerm) ATgetNext((ATermList) d_45);
      t = not_null(e_45);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  k_45 = t;
  j_45 :
  if(match_cons(k_45, sym__2))
    {
      l_45 = ATgetArgument(k_45, 0);
      m_45 = ATgetArgument(k_45, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_45), not_null(m_45));
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
ATerm rewrite_1 (ATerm t, ATerm r_98 (ATerm))
{
  ATerm s_45 = NULL;
  ATerm v_45 = NULL;
  s_45 = t;
  {
    ATerm w_45 = NULL;
    t = term_j_10;
    {
      t = r_98(t);
      {
        w_45 = t;
        if(((v_45 != NULL) && (v_45 != w_45)))
          _fail(w_45);
        else
          v_45 = w_45;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_45), not_null(s_45));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Binding_0 (ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL;
  m_46 = t;
  l_46 :
  if(match_cons(m_46, sym_Var_1))
    {
      n_46 = ATgetArgument(m_46, 0);
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_46 = NULL;
            ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
            t = not_null(m_46);
            {
              ATerm q_2 (ATerm t)
              {
                t = term_f_6;
                return(t);
              }
              t = rewrite_1(t, q_2);
              {
                r_46 = t;
                f_46 :
                if(match_cons(r_46, sym_Defined_2))
                  {
                    s_46 = ATgetArgument(r_46, 0);
                    t_46 = ATgetArgument(r_46, 1);
                    g_46 :
                    if(match_string(s_46, "k_0"))
                      {
                        if(((q_46 != NULL) && (q_46 != t_46)))
                          _fail(t_46);
                        else
                          q_46 = t_46;
                      }
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
            t = not_null(q_46);
            ;
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            {
              ATerm m_10 = t;
              int n_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_46 = NULL;
                  t = not_null(m_46);
                  {
                    ATerm r_2 (ATerm t)
                    {
                      t = term_f_6;
                      return(t);
                    }
                    t = rewrite_1(t, r_2);
                    {
                      w_46 = t;
                      i_46 :
                      if(match_cons(w_46, sym_Undefined_0))
                        {
                          _fail(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                  t = term_i_6;
                  ;
                  LocalPopChoice(n_10);
                }
              else
                {
                  t = m_10;
                  {
                    ATerm b_47 = NULL;
                    t = not_null(m_46);
                    {
                      ATerm s_2 (ATerm t)
                      {
                        t = term_f_6;
                        return(t);
                      }
                      t = rewrite_1(t, s_2);
                      {
                        b_47 = t;
                        k_46 :
                        if(match_cons(b_47, sym_Undefined_0))
                          {
                            _fail(t);
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    }
                    t = term_i_6;
                  }
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
ATerm alltd_1 (ATerm t, ATerm x_83 (ATerm))
{
  ATerm u_47 (ATerm t)
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_83(t);
        ;
        LocalPopChoice(t_10);
      }
    else
      {
        t = s_10;
        t = _all(t, u_47);
      }
    return(t);
  }
  t = u_47(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm m_71 (ATerm))
{
  ATerm a_48 = NULL,b_48 = NULL;
  a_48 = t;
  z_47 :
  if(match_cons(a_48, sym_Match_1))
    {
      b_48 = ATgetArgument(a_48, 0);
      {
        ATerm e_48 = NULL,g_48 = NULL;
        ATerm f_48 = NULL;
        t = SSLgetAnnotations(not_null(a_48));
        {
          f_48 = t;
          if(((e_48 != NULL) && (e_48 != f_48)))
            _fail(f_48);
          else
            e_48 = f_48;
        }
        {
          t = not_null(b_48);
          {
            ATerm i_48 = NULL;
            t = m_71(t);
            {
              g_48 = t;
              {
                ATerm j_48 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(g_48)), not_null(e_48));
                {
                  j_48 = t;
                  if(((i_48 != NULL) && (i_48 != j_48)))
                    _fail(j_48);
                  else
                    i_48 = j_48;
                }
                t = not_null(i_48);
              }
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
ATerm prop_match_0 (ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL;
  ATerm t_2 (ATerm t)
  {
    t = alltd_1(t, Binding_0);
    return(t);
  }
  t = Match_1(t, t_2);
  {
    t_48 = t;
    s_48 :
    if(match_cons(t_48, sym_Match_1))
      {
        u_48 = ATgetArgument(t_48, 0);
        {
          ATerm w_48 = NULL;
          ATerm u_2 (ATerm t)
          {
            ATerm u_10 = t;
            int y_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_11;
                a_11 = t;
                {
                  ATerm x_48 = NULL;
                  t = CurrentTerm_0(t);
                  {
                    x_48 = t;
                    if(((w_48 != NULL) && (w_48 != x_48)))
                      _fail(x_48);
                    else
                      w_48 = x_48;
                  }
                }
                t = a_11;
                {
                  ATerm d_11 = t;
                  int e_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_11;
                      f_11 = t;
                      {
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(u_48), not_null(w_48)));
                        {
                          t = prop_pattern_match_0(t);
                          {
                            ATerm v_2 (ATerm t)
                            {
                              t = try_1(t, introduce_binding_0);
                              return(t);
                            }
                            t = map_1(t, v_2);
                          }
                        }
                      }
                      t = f_11;
                      ;
                      LocalPopChoice(e_11);
                    }
                  else
                    {
                      t = d_11;
                      {
                        ATerm y_48 = NULL;
                        ATerm z_48 = NULL;
                        z_48 = t;
                        if(((y_48 != NULL) && (y_48 != z_48)))
                          _fail(z_48);
                        else
                          y_48 = z_48;
                        {
                          t = (ATerm) ATmakeAppl(sym__4, term_g_11, not_null(y_48), term_h_11, not_null(w_48));
                          {
                            ATerm w_2 (ATerm t)
                            {
                              t = term_i_11;
                              return(t);
                            }
                            t = debug_1(t, w_2);
                            t = term_n_11;
                          }
                        }
                      }
                    }
                }
                ;
                LocalPopChoice(y_10);
              }
            else
              {
                t = u_10;
                {
                  ATerm o_11;
                  o_11 = t;
                  {
                    t = not_null(u_48);
                    {
                      ATerm p_11 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm x_2 (ATerm t)
                          {
                            ATerm a_49 = NULL,b_49 = NULL,i_49 = NULL;
                            a_49 = t;
                            r_48 :
                            if(!(match_cons(a_49, sym_Wld_0)))
                              {
                                if(match_cons(a_49, sym_As_2))
                                  {
                                    b_49 = ATgetArgument(a_49, 0);
                                    i_49 = ATgetArgument(a_49, 1);
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
                          t = oncetd_1(t, x_2);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = p_11;
                        }
                    }
                  }
                  t = o_11;
                  {
                    ATerm q_11;
                    q_11 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_r_11, not_null(u_48)));
                      {
                        ATerm y_2 (ATerm t)
                        {
                          t = term_r_6;
                          return(t);
                        }
                        t = assert_1(t, y_2);
                      }
                    }
                    t = q_11;
                  }
                }
              }
            return(t);
          }
          t = try_1(t, u_2);
        }
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm cp_0 (ATerm t)
{
  ATerm s_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prop_match_0(t);
      ;
      LocalPopChoice(x_11);
    }
  else
    {
      t = s_11;
      {
        ATerm y_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = prop_build_0(t);
            ;
            LocalPopChoice(z_11);
          }
        else
          {
            t = y_11;
            {
              ATerm d_12 = t;
              int f_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = prop_scope_1(t, cp_0);
                  ;
                  LocalPopChoice(f_12);
                }
              else
                {
                  t = d_12;
                  {
                    ATerm i_12 = t;
                    int j_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = prop_call_1(t, cp_0);
                        ;
                        LocalPopChoice(j_12);
                      }
                    else
                      {
                        t = i_12;
                        {
                          ATerm k_12 = t;
                          int l_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_traversal_1(t, cp_0);
                              ;
                              LocalPopChoice(l_12);
                            }
                          else
                            {
                              t = k_12;
                              {
                                ATerm m_12 = t;
                                int n_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = prop_seq_1(t, cp_0);
                                    ;
                                    LocalPopChoice(n_12);
                                  }
                                else
                                  {
                                    t = m_12;
                                    {
                                      ATerm o_12 = t;
                                      int p_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = prop_choice_1(t, cp_0);
                                          ;
                                          LocalPopChoice(p_12);
                                        }
                                      else
                                        {
                                          t = o_12;
                                          {
                                            ATerm y_12 = t;
                                            int z_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = prop_let_1(t, cp_0);
                                                ;
                                                LocalPopChoice(z_12);
                                              }
                                            else
                                              {
                                                t = y_12;
                                                {
                                                  ATerm a_13 = t;
                                                  int b_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = prop_rec_1(t, cp_0);
                                                      ;
                                                      LocalPopChoice(b_13);
                                                    }
                                                  else
                                                    {
                                                      t = a_13;
                                                      {
                                                        ATerm c_13 = t;
                                                        int d_13 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = prop_not_1(t, cp_0);
                                                            ;
                                                            LocalPopChoice(d_13);
                                                          }
                                                        else
                                                          {
                                                            t = c_13;
                                                            {
                                                              ATerm e_13 = t;
                                                              int f_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = prop_sdef_1(t, cp_0);
                                                                  ;
                                                                  LocalPopChoice(f_13);
                                                                }
                                                              else
                                                                {
                                                                  t = e_13;
                                                                  t = _all(t, cp_0);
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Tl_0 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL;
  o_49 = t;
  n_49 :
  if(((ATgetType(o_49) == AT_LIST) && !(ATisEmpty(o_49))))
    {
      p_49 = ATgetFirst((ATermList) o_49);
      q_49 = (ATerm) ATgetNext((ATermList) o_49);
      t = not_null(q_49);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL;
  w_49 = t;
  v_49 :
  if(match_cons(w_49, sym__2))
    {
      x_49 = ATgetArgument(w_49, 0);
      y_49 = ATgetArgument(w_49, 1);
      {
        ATerm g_13;
        g_13 = t;
        {
          ATerm b_50 = NULL;
          ATerm c_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_49), not_null(y_49));
          {
            ATerm m_13 = t;
            int n_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(n_13);
              }
            else
              {
                t = m_13;
                t = (ATerm) ATempty;
              }
            {
              c_50 = t;
              if(((b_50 != NULL) && (b_50 != c_50)))
                _fail(c_50);
              else
                b_50 = c_50;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_49), not_null(y_49), not_null(b_50));
            t = table_put_0(t);
          }
        }
        t = g_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm m_98 (ATerm))
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL;
  ATerm o_13;
  o_13 = t;
  {
    ATerm m_50 = NULL;
    ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
    t = m_98(t);
    {
      m_50 = t;
      {
        if(((l_50 != NULL) && (l_50 != m_50)))
          _fail(m_50);
        else
          l_50 = m_50;
        {
          ATerm p_13 = t;
          int t_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_50), term_w_7);
              t = table_get_0(t);
              ;
              LocalPopChoice(t_13);
            }
          else
            {
              t = p_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            n_50 = t;
            i_50 :
            if(((ATgetType(n_50) == AT_LIST) && !(ATisEmpty(n_50))))
              {
                o_50 = ATgetFirst((ATermList) n_50);
                p_50 = (ATerm) ATgetNext((ATermList) n_50);
                {
                  if(((k_50 != NULL) && (k_50 != o_50)))
                    _fail(o_50);
                  else
                    k_50 = o_50;
                  {
                    if(((j_50 != NULL) && (j_50 != p_50)))
                      _fail(p_50);
                    else
                      j_50 = p_50;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(l_50), term_w_7, not_null(j_50));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(k_50);
                          {
                            ATerm z_2 (ATerm t)
                            {
                              ATerm q_50 = NULL;
                              q_50 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_50), not_null(q_50));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, z_2);
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
  t = o_13;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm a_81 (ATerm), ATerm b_81 (ATerm))
{
  ATerm v_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_81(t);
      t = b_81(t);
      ;
      LocalPopChoice(x_13);
    }
  else
    {
      t = v_13;
      {
        t = b_81(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm l_98 (ATerm))
{
  ATerm x_50 = NULL;
  ATerm a_14;
  a_14 = t;
  {
    ATerm y_50 = NULL;
    ATerm z_50 = NULL;
    t = l_98(t);
    {
      y_50 = t;
      {
        if(((x_50 != NULL) && (x_50 != y_50)))
          _fail(y_50);
        else
          x_50 = y_50;
        {
          ATerm a_51 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_50), term_w_7);
          {
            ATerm b_14 = t;
            int c_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(c_14);
              }
            else
              {
                t = b_14;
                t = (ATerm) ATempty;
              }
            {
              a_51 = t;
              if(((z_50 != NULL) && (z_50 != a_51)))
                _fail(a_51);
              else
                z_50 = a_51;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_50), term_w_7, (ATerm) ATinsert(CheckATermList(not_null(z_50)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = a_14;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm n_98 (ATerm), ATerm o_98 (ATerm))
{
  t = begin_scope_1(t, n_98);
  {
    ATerm a_3 (ATerm t)
    {
      t = end_scope_1(t, n_98);
      return(t);
    }
    t = restore_always_2(t, o_98, a_3);
  }
  return(t);
}
ATerm const_prop_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    t = term_r_6;
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    ATerm d_3 (ATerm t)
    {
      t = term_f_6;
      return(t);
    }
    t = scope_2(t, d_3, cp_0);
    return(t);
  }
  t = scope_2(t, b_3, c_3);
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_87 (ATerm))
{
  ATerm d_51 (ATerm t)
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        t = Cons_2(t, w_87, d_51);
      }
    return(t);
  }
  t = d_51(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm w_66 (ATerm))
{
  ATerm j_51 = NULL,k_51 = NULL;
  j_51 = t;
  i_51 :
  if(match_cons(j_51, sym_Strategies_1))
    {
      k_51 = ATgetArgument(j_51, 0);
      {
        ATerm n_51 = NULL,p_51 = NULL;
        ATerm o_51 = NULL;
        t = SSLgetAnnotations(not_null(j_51));
        {
          o_51 = t;
          if(((n_51 != NULL) && (n_51 != o_51)))
            _fail(o_51);
          else
            n_51 = o_51;
        }
        {
          t = not_null(k_51);
          {
            ATerm r_51 = NULL;
            t = w_66(t);
            {
              p_51 = t;
              {
                ATerm s_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(p_51)), not_null(n_51));
                {
                  s_51 = t;
                  if(((r_51 != NULL) && (r_51 != s_51)))
                    _fail(s_51);
                  else
                    r_51 = s_51;
                }
                t = not_null(r_51);
              }
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
ATerm Cons_2 (ATerm t, ATerm s_66 (ATerm), ATerm t_66 (ATerm))
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL;
  d_52 = t;
  c_52 :
  if(((ATgetType(d_52) == AT_LIST) && !(ATisEmpty(d_52))))
    {
      e_52 = ATgetFirst((ATermList) d_52);
      f_52 = (ATerm) ATgetNext((ATermList) d_52);
      {
        ATerm j_52 = NULL,p_52 = NULL;
        ATerm o_52 = NULL;
        t = SSLgetAnnotations(not_null(d_52));
        {
          o_52 = t;
          if(((j_52 != NULL) && (j_52 != o_52)))
            _fail(o_52);
          else
            j_52 = o_52;
        }
        {
          t = not_null(e_52);
          {
            ATerm w_52 = NULL;
            t = s_66(t);
            {
              p_52 = t;
              {
                t = not_null(f_52);
                {
                  ATerm y_52 = NULL;
                  t = t_66(t);
                  {
                    w_52 = t;
                    {
                      ATerm z_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_52)), not_null(p_52)), not_null(j_52));
                      {
                        z_52 = t;
                        if(((y_52 != NULL) && (y_52 != z_52)))
                          _fail(z_52);
                        else
                          y_52 = z_52;
                      }
                      t = not_null(y_52);
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
ATerm Signature_1 (ATerm t, ATerm x_66 (ATerm))
{
  ATerm k_53 = NULL,l_53 = NULL;
  k_53 = t;
  j_53 :
  if(match_cons(k_53, sym_Signature_1))
    {
      l_53 = ATgetArgument(k_53, 0);
      {
        ATerm o_53 = NULL,q_53 = NULL;
        ATerm p_53 = NULL;
        t = SSLgetAnnotations(not_null(k_53));
        {
          p_53 = t;
          if(((o_53 != NULL) && (o_53 != p_53)))
            _fail(p_53);
          else
            o_53 = p_53;
        }
        {
          t = not_null(l_53);
          {
            ATerm s_53 = NULL;
            t = x_66(t);
            {
              q_53 = t;
              {
                ATerm v_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(q_53)), not_null(o_53));
                {
                  v_53 = t;
                  if(((s_53 != NULL) && (s_53 != v_53)))
                    _fail(v_53);
                  else
                    s_53 = v_53;
                }
                t = not_null(s_53);
              }
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
ATerm Specification_1 (ATerm t, ATerm b_67 (ATerm))
{
  ATerm k_54 = NULL,l_54 = NULL;
  k_54 = t;
  j_54 :
  if(match_cons(k_54, sym_Specification_1))
    {
      l_54 = ATgetArgument(k_54, 0);
      {
        ATerm o_54 = NULL,q_54 = NULL;
        ATerm p_54 = NULL;
        t = SSLgetAnnotations(not_null(k_54));
        {
          p_54 = t;
          if(((o_54 != NULL) && (o_54 != p_54)))
            _fail(p_54);
          else
            o_54 = p_54;
        }
        {
          t = not_null(l_54);
          {
            ATerm s_54 = NULL;
            t = b_67(t);
            {
              q_54 = t;
              {
                ATerm t_54 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(q_54)), not_null(o_54));
                {
                  t_54 = t;
                  if(((s_54 != NULL) && (s_54 != t_54)))
                    _fail(t_54);
                  else
                    s_54 = t_54;
                }
                t = not_null(s_54);
              }
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
ATerm _2 (ATerm t, ATerm j_65 (ATerm), ATerm k_65 (ATerm))
{
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL;
  f_55 = t;
  e_55 :
  if(match_cons(f_55, sym__2))
    {
      g_55 = ATgetArgument(f_55, 0);
      h_55 = ATgetArgument(f_55, 1);
      {
        ATerm r_55 = NULL,t_55 = NULL;
        ATerm s_55 = NULL;
        t = SSLgetAnnotations(not_null(f_55));
        {
          s_55 = t;
          if(((r_55 != NULL) && (r_55 != s_55)))
            _fail(s_55);
          else
            r_55 = s_55;
        }
        {
          t = not_null(g_55);
          {
            ATerm w_55 = NULL;
            t = j_65(t);
            {
              t_55 = t;
              {
                t = not_null(h_55);
                {
                  ATerm y_55 = NULL;
                  t = k_65(t);
                  {
                    w_55 = t;
                    {
                      ATerm z_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_55), not_null(w_55)), not_null(r_55));
                      {
                        z_55 = t;
                        if(((y_55 != NULL) && (y_55 != z_55)))
                          _fail(z_55);
                        else
                          y_55 = z_55;
                      }
                      t = not_null(y_55);
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
  ATerm f_14;
  f_14 = t;
  {
    ATerm g_56 = NULL;
    ATerm h_56 = NULL;
    t = term_j_10;
    {
      t = whoami_0(t);
      {
        h_56 = t;
        if(((g_56 != NULL) && (g_56 != h_56)))
          _fail(h_56);
        else
          g_56 = h_56;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_14), not_null(g_56)), term_h_14));
      {
        t = printnl_0(t);
        {
          t = term_y_14;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_14;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL;
  l_56 = t;
  k_56 :
  if(match_cons(l_56, sym__2))
    {
      m_56 = ATgetArgument(l_56, 0);
      n_56 = ATgetArgument(l_56, 1);
      {
        ATerm e_15;
        e_15 = t;
        t = SSL_printnl(not_null(m_56), not_null(n_56));
        t = e_15;
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
  ATerm s_56 = NULL;
  s_56 = t;
  t = SSL_implode_string(not_null(s_56));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm f_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(g_15);
    }
  else
    {
      t = f_15;
      {
        ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL;
        x_56 = t;
        w_56 :
        if(((ATgetType(x_56) == AT_LIST) && !(ATisEmpty(x_56))))
          {
            y_56 = ATgetFirst((ATermList) x_56);
            z_56 = (ATerm) ATgetNext((ATermList) x_56);
            {
              t = not_null(y_56);
              {
                ATerm e_3 (ATerm t)
                {
                  t = not_null(z_56);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, e_3);
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
  ATerm j_57 = NULL;
  ATerm l_57 = NULL;
  j_57 = t;
  {
    ATerm m_57 = NULL;
    ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL;
    t = not_null(j_57);
    {
      m_57 = t;
      {
        t = SSL_explode_term(not_null(m_57));
        {
          o_57 = t;
          h_57 :
          if(match_cons(o_57, sym__2))
            {
              p_57 = ATgetArgument(o_57, 0);
              q_57 = ATgetArgument(o_57, 1);
              i_57 :
              if(match_string(p_57, ""))
                {
                  if(((l_57 != NULL) && (l_57 != q_57)))
                    _fail(q_57);
                  else
                    l_57 = q_57;
                }
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
      t = not_null(l_57);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_88 (ATerm))
{
  ATerm u_57 (ATerm t)
  {
    ATerm h_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, u_57);
        ;
        LocalPopChoice(x_15);
      }
    else
      {
        t = h_15;
        {
          t = Nil_0(t);
          t = m_88(t);
        }
      }
    return(t);
  }
  t = u_57(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL;
  x_57 = t;
  w_57 :
  if(match_cons(x_57, sym__2))
    {
      y_57 = ATgetArgument(x_57, 0);
      z_57 = ATgetArgument(x_57, 1);
      {
        t = not_null(y_57);
        {
          ATerm f_3 (ATerm t)
          {
            t = not_null(z_57);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm y_15 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(e_16);
    }
  else
    {
      t = y_15;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm j_58 = NULL;
  j_58 = t;
  t = SSL_explode_string(not_null(j_58));
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
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
      {
        ATerm i_16 = t;
        int j_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, g_3);
            ;
            LocalPopChoice(j_16);
          }
        else
          {
            t = i_16;
            {
              ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL;
              d_59 = t;
              a_59 :
              if(match_cons(d_59, sym_Path_1))
                {
                  e_59 = ATgetArgument(d_59, 0);
                  t = not_null(e_59);
                }
              else
                {
                  if(match_cons(d_59, sym_Var_1))
                    {
                      e_59 = ATgetArgument(d_59, 0);
                      {
                        t = not_null(e_59);
                        {
                          ATerm k_16 = t;
                          int l_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(l_16);
                            }
                          else
                            {
                              t = k_16;
                              {
                                ATerm h_3 (ATerm t)
                                {
                                  t = term_m_16;
                                  return(t);
                                }
                                t = debug_1(t, h_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(d_59, sym_Prefix_2))
                        {
                          e_59 = ATgetArgument(d_59, 0);
                          f_59 = ATgetArgument(d_59, 1);
                          {
                            ATerm k_59 = NULL,m_59 = NULL;
                            ATerm n_16;
                            n_16 = t;
                            {
                              ATerm l_59 = NULL;
                              t = not_null(e_59);
                              {
                                t = eval_config_0(t);
                                {
                                  l_59 = t;
                                  if(((k_59 != NULL) && (k_59 != l_59)))
                                    _fail(l_59);
                                  else
                                    k_59 = l_59;
                                }
                              }
                            }
                            t = n_16;
                            {
                              ATerm n_59 = NULL;
                              t = not_null(f_59);
                              {
                                t = eval_config_0(t);
                                {
                                  n_59 = t;
                                  if(((m_59 != NULL) && (m_59 != n_59)))
                                    _fail(n_59);
                                  else
                                    m_59 = n_59;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_59), not_null(m_59));
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
  ATerm b_60 = NULL;
  b_60 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_w_16, not_null(b_60));
    {
      t = table_get_0(t);
      {
        ATerm i_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm x_16;
            x_16 = t;
            {
              ATerm k_60 = NULL;
              ATerm m_60 = NULL;
              m_60 = t;
              if(((k_60 != NULL) && (k_60 != m_60)))
                _fail(m_60);
              else
                k_60 = m_60;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_w_16, not_null(b_60), not_null(k_60));
                t = table_put_0(t);
              }
            }
            t = x_16;
          }
          return(t);
        }
        t = try_1(t, i_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm m_101 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm y_16;
    y_16 = t;
    {
      ATerm a_61 = NULL;
      ATerm b_61 = NULL;
      t = term_z_16;
      {
        t = get_config_0(t);
        {
          b_61 = t;
          if(((a_61 != NULL) && (a_61 != b_61)))
            _fail(b_61);
          else
            a_61 = b_61;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_61), term_a_17);
        t = geq_0(t);
      }
    }
    t = y_16;
    t = m_101(t);
    return(t);
  }
  t = try_1(t, j_3);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL;
  h_61 = t;
  f_61 :
  if(match_cons(h_61, sym__2))
    {
      i_61 = ATgetArgument(h_61, 0);
      j_61 = ATgetArgument(h_61, 1);
      g_61 :
      if(match_cons(j_61, sym_Stream_1))
        {
          k_61 = ATgetArgument(j_61, 0);
          {
            ATerm n_61 = NULL;
            t = SSL_fputc(not_null(i_61), not_null(k_61));
            {
              ATerm o_61 = NULL;
              o_61 = t;
              if(((n_61 != NULL) && (n_61 != o_61)))
                _fail(o_61);
              else
                n_61 = o_61;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_61));
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
  ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL;
  v_61 = t;
  t_61 :
  if(match_cons(v_61, sym__2))
    {
      w_61 = ATgetArgument(v_61, 0);
      y_61 = ATgetArgument(v_61, 1);
      u_61 :
      if(match_cons(w_61, sym_Stream_1))
        {
          x_61 = ATgetArgument(w_61, 0);
          {
            ATerm b_62 = NULL;
            t = SSL_write_term_to_stream_text(not_null(x_61), not_null(y_61));
            {
              ATerm c_62 = NULL;
              c_62 = t;
              if(((b_62 != NULL) && (b_62 != c_62)))
                _fail(c_62);
              else
                b_62 = c_62;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_62));
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
  ATerm k_3 (ATerm t)
  {
    ATerm g_62 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm h_62 = NULL;
      h_62 = t;
      if(((g_62 != NULL) && (g_62 != h_62)))
        _fail(h_62);
      else
        g_62 = h_62;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_17, not_null(g_62));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, k_3);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL;
  n_62 = t;
  l_62 :
  if(match_cons(n_62, sym__2))
    {
      o_62 = ATgetArgument(n_62, 0);
      q_62 = ATgetArgument(n_62, 1);
      m_62 :
      if(match_cons(o_62, sym_Stream_1))
        {
          p_62 = ATgetArgument(o_62, 0);
          {
            ATerm t_62 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(p_62), not_null(q_62));
            {
              ATerm u_62 = NULL;
              u_62 = t;
              if(((t_62 != NULL) && (t_62 != u_62)))
                _fail(u_62);
              else
                t_62 = u_62;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_62));
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
ATerm WriteToFile_1 (ATerm t, ATerm i_100 (ATerm))
{
  ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL;
  b_63 = t;
  a_63 :
  if(match_cons(b_63, sym__2))
    {
      c_63 = ATgetArgument(b_63, 0);
      d_63 = ATgetArgument(b_63, 1);
      {
        ATerm g_63 = NULL,i_63 = NULL;
        t = not_null(c_63);
        {
          ATerm h_63 = NULL;
          h_63 = t;
          if(((g_63 != NULL) && (g_63 != h_63)))
            _fail(h_63);
          else
            g_63 = h_63;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_63), term_c_17);
            {
              t = open_stream_0(t);
              {
                ATerm j_63 = NULL;
                j_63 = t;
                if(((i_63 != NULL) && (i_63 != j_63)))
                  _fail(j_63);
                else
                  i_63 = j_63;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_63), not_null(d_63));
                  {
                    t = i_100(t);
                    {
                      t = fclose_0(t);
                      t = not_null(d_63);
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
  ATerm r_63 = NULL;
  ATerm d_17;
  d_17 = t;
  {
    ATerm l_3 (ATerm t)
    {
      ATerm e_17 = t;
      int j_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_3 (ATerm t)
          {
            ATerm s_63 = NULL,t_63 = NULL;
            s_63 = t;
            o_63 :
            if(match_cons(s_63, sym_Output_1))
              {
                t_63 = ATgetArgument(s_63, 0);
                if(((r_63 != NULL) && (r_63 != t_63)))
                  _fail(t_63);
                else
                  r_63 = t_63;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, m_3);
          ;
          LocalPopChoice(j_17);
        }
      else
        {
          t = e_17;
          {
            ATerm u_63 = NULL;
            t = term_k_17;
            {
              u_63 = t;
              if(((r_63 != NULL) && (r_63 != u_63)))
                _fail(u_63);
              else
                r_63 = u_63;
            }
          }
        }
      return(t);
    }
    t = _2(t, l_3, _id);
  }
  t = d_17;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm o_3 (ATerm t)
      {
        t = not_null(r_63);
        return(t);
      }
      t = split_2(t, o_3, _id);
      return(t);
    }
    t = _2(t, _id, n_3);
    {
      ATerm l_17 = t;
      int p_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_3 (ATerm t)
          {
            ATerm q_3 (ATerm t)
            {
              ATerm v_63 = NULL;
              v_63 = t;
              q_63 :
              if(!(match_cons(v_63, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, q_3);
            return(t);
          }
          t = _2(t, p_3, WriteToBinaryFile_0);
          ;
          LocalPopChoice(p_17);
        }
      else
        {
          t = l_17;
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
ATerm apply_strategy_1 (ATerm t, ATerm k_103 (ATerm))
{
  ATerm b_64 = NULL,d_64 = NULL,e_64 = NULL,l_64 = NULL;
  ATerm r_17;
  r_17 = t;
  t = dtime_0(t);
  t = r_17;
  {
    t = k_103(t);
    {
      ATerm u_17;
      u_17 = t;
      {
        ATerm c_64 = NULL;
        t = dtime_0(t);
        {
          c_64 = t;
          if(((b_64 != NULL) && (b_64 != c_64)))
            _fail(c_64);
          else
            b_64 = c_64;
        }
      }
      t = u_17;
      {
        d_64 = t;
        a_64 :
        if(match_cons(d_64, sym__2))
          {
            e_64 = ATgetArgument(d_64, 0);
            l_64 = ATgetArgument(d_64, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_64)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(b_64))), not_null(l_64));
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
  ATerm t_64 = NULL,u_64 = NULL;
  ATerm a_65 (ATerm t)
  {
    t = SSL_fclose(not_null(u_64));
    return(t);
  }
  u_64 = t;
  s_64 :
  if(match_cons(u_64, sym_Stream_1))
    {
      t_64 = ATgetArgument(u_64, 0);
      {
        ATerm v_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(t_64));
            ;
            LocalPopChoice(w_17);
          }
        else
          {
            t = v_17;
            t = a_65(t);
          }
      }
    }
  else
    {
      t = a_65(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm l_65 = NULL,m_65 = NULL;
  l_65 = t;
  i_65 :
  if(match_cons(l_65, sym_Stream_1))
    {
      m_65 = ATgetArgument(l_65, 0);
      t = SSL_read_term_from_stream(not_null(m_65));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm u_99 (ATerm))
{
  ATerm x_17;
  x_17 = t;
  {
    ATerm r_65 = NULL,t_65 = NULL;
    ATerm y_17;
    y_17 = t;
    {
      ATerm s_65 = NULL;
      t = u_99(t);
      {
        s_65 = t;
        if(((r_65 != NULL) && (r_65 != s_65)))
          _fail(s_65);
        else
          r_65 = s_65;
      }
    }
    t = y_17;
    {
      ATerm u_65 = NULL;
      u_65 = t;
      if(((t_65 != NULL) && (t_65 != u_65)))
        _fail(u_65);
      else
        t_65 = u_65;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_65)), not_null(r_65)));
        t = printnl_0(t);
      }
    }
  }
  t = x_17;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL;
  a_66 = t;
  z_65 :
  if(match_cons(a_66, sym__2))
    {
      b_66 = ATgetArgument(a_66, 0);
      c_66 = ATgetArgument(a_66, 1);
      {
        ATerm f_66 = NULL;
        t = SSL_fopen(not_null(b_66), not_null(c_66));
        {
          ATerm g_66 = NULL;
          g_66 = t;
          if(((f_66 != NULL) && (f_66 != g_66)))
            _fail(g_66);
          else
            f_66 = g_66;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_66));
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
  ATerm k_66 = NULL;
  k_66 = t;
  t = SSL_is_string(not_null(k_66));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm o_66 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm p_66 = NULL;
    p_66 = t;
    if(((o_66 != NULL) && (o_66 != p_66)))
      _fail(p_66);
    else
      o_66 = p_66;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_66));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm u_66 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm v_66 = NULL;
    v_66 = t;
    if(((u_66 != NULL) && (u_66 != v_66)))
      _fail(v_66);
    else
      u_66 = v_66;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_66));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm a_67 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm c_67 = NULL;
    c_67 = t;
    if(((a_67 != NULL) && (a_67 != c_67)))
      _fail(c_67);
    else
      a_67 = c_67;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_67));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm i_67 = NULL;
  i_67 = t;
  h_67 :
  if(match_cons(i_67, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(i_67, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(i_67, sym_stdin_0))
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
  ATerm s_67 = NULL;
  ATerm u_67 = NULL,v_67 = NULL;
  s_67 = t;
  {
    ATerm w_67 = NULL;
    ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL;
    t = not_null(s_67);
    {
      w_67 = t;
      {
        t = SSL_explode_term(not_null(w_67));
        {
          y_67 = t;
          p_67 :
          if(match_cons(y_67, sym__2))
            {
              z_67 = ATgetArgument(y_67, 0);
              a_68 = ATgetArgument(y_67, 1);
              q_67 :
              if(match_string(z_67, ""))
                {
                  r_67 :
                  if(((ATgetType(a_68) == AT_LIST) && !(ATisEmpty(a_68))))
                    {
                      b_68 = ATgetFirst((ATermList) a_68);
                      c_68 = (ATerm) ATgetNext((ATermList) a_68);
                      {
                        if(((v_67 != NULL) && (v_67 != b_68)))
                          _fail(b_68);
                        else
                          v_67 = b_68;
                        if(((u_67 != NULL) && (u_67 != c_68)))
                          _fail(c_68);
                        else
                          u_67 = c_68;
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
    t = not_null(v_67);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL;
  k_68 = t;
  j_68 :
  if(match_cons(k_68, sym__2))
    {
      l_68 = ATgetArgument(k_68, 0);
      m_68 = ATgetArgument(k_68, 1);
      {
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(a_18);
          }
        else
          {
            t = z_17;
            {
              ATerm b_18 = t;
              int c_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_3 (ATerm t)
                  {
                    ATerm n_68 = NULL,o_68 = NULL;
                    n_68 = t;
                    i_68 :
                    if(match_cons(n_68, sym_Path_1))
                      {
                        o_68 = ATgetArgument(n_68, 0);
                        t = not_null(o_68);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, r_3, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(c_18);
                }
              else
                {
                  t = b_18;
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
  ATerm w_68 = NULL;
  ATerm d_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_68 = NULL;
      ATerm v_68 = NULL;
      v_68 = t;
      if(((u_68 != NULL) && (u_68 != v_68)))
        _fail(v_68);
      else
        u_68 = v_68;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_68), term_j_18);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(i_18);
    }
  else
    {
      t = d_18;
      {
        ATerm s_3 (ATerm t)
        {
          t = term_k_18;
          return(t);
        }
        t = debug_1(t, s_3);
        _fail(t);
      }
    }
  {
    ATerm o_18;
    o_18 = t;
    {
      ATerm x_68 = NULL;
      t = read_from_stream_0(t);
      {
        x_68 = t;
        if(((w_68 != NULL) && (w_68 != x_68)))
          _fail(x_68);
        else
          w_68 = x_68;
      }
    }
    t = o_18;
    {
      t = fclose_0(t);
      t = not_null(w_68);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm m_95 (ATerm), ATerm n_95 (ATerm))
{
  ATerm c_69 = NULL,e_69 = NULL;
  ATerm q_18;
  q_18 = t;
  {
    ATerm d_69 = NULL;
    t = m_95(t);
    {
      d_69 = t;
      if(((c_69 != NULL) && (c_69 != d_69)))
        _fail(d_69);
      else
        c_69 = d_69;
    }
  }
  t = q_18;
  {
    ATerm f_69 = NULL;
    t = n_95(t);
    {
      f_69 = t;
      if(((e_69 != NULL) && (e_69 != f_69)))
        _fail(f_69);
      else
        e_69 = f_69;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_69), not_null(e_69));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm l_69 = NULL;
  ATerm t_18;
  t_18 = t;
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_3 (ATerm t)
        {
          ATerm m_69 = NULL,n_69 = NULL;
          m_69 = t;
          j_69 :
          if(match_cons(m_69, sym_Input_1))
            {
              n_69 = ATgetArgument(m_69, 0);
              if(((l_69 != NULL) && (l_69 != n_69)))
                _fail(n_69);
              else
                l_69 = n_69;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, t_3);
        ;
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        {
          ATerm o_69 = NULL;
          t = term_w_18;
          {
            o_69 = t;
            if(((l_69 != NULL) && (l_69 != o_69)))
              _fail(o_69);
            else
              l_69 = o_69;
          }
        }
      }
  }
  t = t_18;
  {
    ATerm u_3 (ATerm t)
    {
      t = not_null(l_69);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, u_3);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm t_69 = NULL;
    t_69 = t;
    r_69 :
    if(!(match_string(t_69, "-k")))
      {
        if(!(match_string(t_69, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    ATerm x_18;
    x_18 = t;
    {
      ATerm u_69 = NULL;
      ATerm v_69 = NULL;
      t = string_to_int_0(t);
      {
        v_69 = t;
        if(((u_69 != NULL) && (u_69 != v_69)))
          _fail(v_69);
        else
          u_69 = v_69;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_18, not_null(u_69));
        t = set_config_0(t);
      }
    }
    t = x_18;
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_z_18;
    return(t);
  }
  t = ArgOption_3(t, v_3, w_3, x_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm y_69 = NULL;
  y_69 = t;
  t = SSL_string_to_int(not_null(y_69));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_3 (ATerm t)
      {
        ATerm g_70 = NULL;
        g_70 = t;
        b_70 :
        if(!(match_string(g_70, "-S")))
          {
            if(!(match_string(g_70, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm z_3 (ATerm t)
      {
        t = term_h_19;
        t = set_config_0(t);
        t = term_i_19;
        return(t);
      }
      ATerm a_4 (ATerm t)
      {
        t = term_j_19;
        return(t);
      }
      t = Option_3(t, y_3, z_3, a_4);
      ;
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
      {
        ATerm n_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_4 (ATerm t)
            {
              ATerm h_70 = NULL;
              h_70 = t;
              c_70 :
              if(!(match_string(h_70, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm c_4 (ATerm t)
            {
              ATerm k_70 = NULL;
              ATerm s_19;
              s_19 = t;
              {
                ATerm i_70 = NULL;
                ATerm j_70 = NULL;
                t = string_to_int_0(t);
                {
                  j_70 = t;
                  if(((i_70 != NULL) && (i_70 != j_70)))
                    _fail(j_70);
                  else
                    i_70 = j_70;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_16, not_null(i_70));
                  t = set_config_0(t);
                }
              }
              t = s_19;
              {
                ATerm l_70 = NULL;
                l_70 = t;
                if(((k_70 != NULL) && (k_70 != l_70)))
                  _fail(l_70);
                else
                  k_70 = l_70;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(k_70));
              }
              return(t);
            }
            ATerm d_4 (ATerm t)
            {
              t = term_t_19;
              return(t);
            }
            t = ArgOption_3(t, b_4, c_4, d_4);
            ;
            LocalPopChoice(p_19);
          }
        else
          {
            t = n_19;
            {
              ATerm e_4 (ATerm t)
              {
                ATerm m_70 = NULL;
                m_70 = t;
                f_70 :
                if(!(match_string(m_70, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm f_4 (ATerm t)
              {
                t = term_v_19;
                t = set_config_0(t);
                t = term_w_19;
                return(t);
              }
              ATerm g_4 (ATerm t)
              {
                t = term_x_19;
                return(t);
              }
              t = Option_3(t, e_4, f_4, g_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    ATerm s_70 = NULL;
    s_70 = t;
    p_70 :
    if(!(match_string(s_70, "-o")))
      {
        if(!(match_string(s_70, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    ATerm z_70 = NULL;
    ATerm a_20;
    a_20 = t;
    {
      ATerm v_70 = NULL;
      ATerm w_70 = NULL;
      w_70 = t;
      if(((v_70 != NULL) && (v_70 != w_70)))
        _fail(w_70);
      else
        v_70 = w_70;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_20, not_null(v_70));
        t = set_config_0(t);
      }
    }
    t = a_20;
    {
      ATerm a_71 = NULL;
      a_71 = t;
      if(((z_70 != NULL) && (z_70 != a_71)))
        _fail(a_71);
      else
        z_70 = a_71;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_70));
    }
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = term_h_20;
    return(t);
  }
  t = ArgOption_3(t, h_4, i_4, j_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      {
        ATerm k_4 (ATerm t)
        {
          ATerm e_71 = NULL;
          e_71 = t;
          d_71 :
          if(!(match_string(e_71, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm l_4 (ATerm t)
        {
          t = term_l_20;
          t = set_config_0(t);
          t = term_m_20;
          return(t);
        }
        ATerm m_4 (ATerm t)
        {
          t = term_n_20;
          return(t);
        }
        t = Option_3(t, k_4, l_4, m_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm x_71 = NULL,y_71 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL;
  x_71 = t;
  r_71 :
  if(match_string(x_71, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(x_71) == AT_LIST) && !(ATisEmpty(x_71))))
        {
          y_71 = ATgetFirst((ATermList) x_71);
          f_72 = (ATerm) ATgetNext((ATermList) x_71);
          s_71 :
          if(((ATgetType(f_72) == AT_LIST) && !(ATisEmpty(f_72))))
            {
              g_72 = ATgetFirst((ATermList) f_72);
              h_72 = (ATerm) ATgetNext((ATermList) f_72);
              {
                ATerm o_72 = NULL;
                ATerm o_20;
                o_20 = t;
                {
                  t = not_null(y_71);
                  t = j_0(t);
                }
                t = o_20;
                {
                  ATerm p_72 = NULL;
                  t = not_null(g_72);
                  {
                    t = l_0(t);
                    {
                      p_72 = t;
                      if(((o_72 != NULL) && (o_72 != p_72)))
                        _fail(p_72);
                      else
                        o_72 = p_72;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_72)), not_null(o_72));
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
  ATerm n_4 (ATerm t)
  {
    ATerm w_72 = NULL;
    w_72 = t;
    t_72 :
    if(!(match_string(w_72, "-i")))
      {
        if(!(match_string(w_72, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    ATerm z_72 = NULL;
    ATerm t_20;
    t_20 = t;
    {
      ATerm x_72 = NULL;
      ATerm y_72 = NULL;
      y_72 = t;
      if(((x_72 != NULL) && (x_72 != y_72)))
        _fail(y_72);
      else
        x_72 = y_72;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_20, not_null(x_72));
        t = set_config_0(t);
      }
    }
    t = t_20;
    {
      ATerm a_73 = NULL;
      a_73 = t;
      if(((z_72 != NULL) && (z_72 != a_73)))
        _fail(a_73);
      else
        z_72 = a_73;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_72));
    }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = term_v_20;
    return(t);
  }
  t = ArgOption_3(t, n_4, o_4, p_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm z_20 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(b_21);
    }
  else
    {
      t = z_20;
      {
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm e_73 = NULL;
  t = report_run_time_0(t);
  {
    ATerm f_73 = NULL;
    t = term_j_10;
    {
      t = whoami_0(t);
      {
        f_73 = t;
        if(((e_73 != NULL) && (e_73 != f_73)))
          _fail(f_73);
        else
          e_73 = f_73;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_14, (ATerm) ATinsert(ATinsert(ATempty, term_g_21), not_null(e_73)));
      {
        t = printnl_0(t);
        {
          t = term_y_14;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_h_21;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm i_73 = NULL;
  i_73 = t;
  t = SSL_TicksToSeconds(not_null(i_73));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm n_73 = NULL,o_73 = NULL,p_73 = NULL;
  n_73 = t;
  m_73 :
  if(match_cons(n_73, sym__2))
    {
      o_73 = ATgetArgument(n_73, 0);
      p_73 = ATgetArgument(n_73, 1);
      {
        ATerm i_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(o_73), not_null(p_73));
            ;
            LocalPopChoice(m_21);
          }
        else
          {
            t = i_21;
            t = SSL_addr(not_null(o_73), not_null(p_73));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm x_93 (ATerm), ATerm y_93 (ATerm))
{
  ATerm n_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_93(t);
      ;
      LocalPopChoice(t_21);
    }
  else
    {
      t = n_21;
      {
        ATerm w_73 = NULL,b_74 = NULL,c_74 = NULL;
        w_73 = t;
        v_73 :
        if(((ATgetType(w_73) == AT_LIST) && !(ATisEmpty(w_73))))
          {
            b_74 = ATgetFirst((ATermList) w_73);
            c_74 = (ATerm) ATgetNext((ATermList) w_73);
            {
              ATerm f_74 = NULL;
              ATerm g_74 = NULL;
              t = not_null(c_74);
              {
                t = foldr_2(t, x_93, y_93);
                {
                  g_74 = t;
                  if(((f_74 != NULL) && (f_74 != g_74)))
                    _fail(g_74);
                  else
                    f_74 = g_74;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_74), not_null(f_74));
                t = y_93(t);
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
ATerm crush_2 (ATerm t, ATerm q_97 (ATerm), ATerm r_97 (ATerm))
{
  ATerm n_74 = NULL;
  ATerm p_74 = NULL;
  n_74 = t;
  {
    ATerm q_74 = NULL;
    ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL;
    t = not_null(n_74);
    {
      q_74 = t;
      {
        t = SSL_explode_term(not_null(q_74));
        {
          s_74 = t;
          m_74 :
          if(match_cons(s_74, sym__2))
            {
              t_74 = ATgetArgument(s_74, 0);
              u_74 = ATgetArgument(s_74, 1);
              if(((p_74 != NULL) && (p_74 != u_74)))
                _fail(u_74);
              else
                p_74 = u_74;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(p_74);
      t = foldr_2(t, q_97, r_97);
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
    ATerm q_4 (ATerm t)
    {
      t = term_c_19;
      return(t);
    }
    t = crush_2(t, q_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL;
  a_75 = t;
  z_74 :
  if(match_cons(a_75, sym__2))
    {
      b_75 = ATgetArgument(a_75, 0);
      c_75 = ATgetArgument(a_75, 1);
      {
        ATerm u_21;
        u_21 = t;
        {
          ATerm y_21 = t;
          int z_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(b_75), not_null(c_75));
              ;
              LocalPopChoice(z_21);
            }
          else
            {
              t = y_21;
              t = SSL_gtr(not_null(b_75), not_null(c_75));
            }
        }
        t = u_21;
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
  ATerm i_75 = NULL;
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_75 = NULL,k_75 = NULL,l_75 = NULL;
      j_75 = t;
      h_75 :
      if(match_cons(j_75, sym__2))
        {
          k_75 = ATgetArgument(j_75, 0);
          l_75 = ATgetArgument(j_75, 1);
          {
            if(((i_75 != NULL) && (i_75 != k_75)))
              _fail(k_75);
            else
              i_75 = k_75;
            if(((i_75 != NULL) && (i_75 != l_75)))
              _fail(l_75);
            else
              i_75 = l_75;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_101 (ATerm))
{
  ATerm r_4 (ATerm t)
  {
    ATerm c_22;
    c_22 = t;
    {
      ATerm o_75 = NULL;
      ATerm p_75 = NULL;
      t = term_z_16;
      {
        t = get_config_0(t);
        {
          p_75 = t;
          if(((o_75 != NULL) && (o_75 != p_75)))
            _fail(p_75);
          else
            o_75 = p_75;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_75), term_y_14);
        t = geq_0(t);
      }
    }
    t = c_22;
    t = l_101(t);
    return(t);
  }
  t = try_1(t, r_4);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm t_75 = NULL,v_75 = NULL;
    ATerm e_22;
    e_22 = t;
    {
      ATerm u_75 = NULL;
      t = run_time_0(t);
      {
        u_75 = t;
        if(((t_75 != NULL) && (t_75 != u_75)))
          _fail(u_75);
        else
          t_75 = u_75;
      }
    }
    t = e_22;
    {
      ATerm w_75 = NULL;
      t = term_j_10;
      {
        t = whoami_0(t);
        {
          w_75 = t;
          if(((v_75 != NULL) && (v_75 != w_75)))
            _fail(w_75);
          else
            v_75 = w_75;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_22), not_null(t_75)), term_f_22), not_null(v_75)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, s_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_c_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_76 = NULL;
  d_76 = t;
  c_76 :
  if(match_cons(d_76, sym_Version_0))
    {
      ATerm f_76 = NULL,h_76 = NULL;
      ATerm i_22;
      i_22 = t;
      {
        ATerm g_76 = NULL;
        t = SSLgetAnnotations(not_null(d_76));
        {
          g_76 = t;
          if(((f_76 != NULL) && (f_76 != g_76)))
            _fail(g_76);
          else
            f_76 = g_76;
        }
      }
      t = i_22;
      {
        ATerm i_76 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(f_76));
        {
          i_76 = t;
          if(((h_76 != NULL) && (h_76 != i_76)))
            _fail(i_76);
          else
            h_76 = i_76;
        }
        t = not_null(h_76);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm i_104 (ATerm))
{
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_22;
      t = get_config_0(t);
      ;
      LocalPopChoice(k_22);
    }
  else
    {
      t = j_22;
      {
        ATerm t_4 (ATerm t)
        {
          ATerm m_22 = t;
          int o_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(o_22);
            }
          else
            {
              t = m_22;
              {
                ATerm q_22 = t;
                int t_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(t_22);
                  }
                else
                  {
                    t = q_22;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, t_4);
      }
    }
  t = i_104(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_76 = NULL;
  n_76 = t;
  t = SSL_table_create(not_null(n_76));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_76 = NULL;
  r_76 = t;
  {
    ATerm u_22;
    u_22 = t;
    {
      t = term_v_22;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_22, term_w_22, not_null(r_76));
          t = table_put_0(t);
        }
      }
    }
    t = u_22;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm v_76 = NULL;
  v_76 = t;
  t = SSL_table_destroy(not_null(v_76));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm z_76 = NULL;
  z_76 = t;
  t = SSL_exit(not_null(z_76));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm j_106 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm i_77 = NULL,j_77 = NULL,k_77 = NULL;
  k_77 = t;
  h_77 :
  if(((ATgetType(k_77) == AT_LIST) && !(ATisEmpty(k_77))))
    {
      i_77 = ATgetFirst((ATermList) k_77);
      j_77 = (ATerm) ATgetNext((ATermList) k_77);
      {
        ATerm n_77 = NULL;
        t = not_null(j_77);
        {
          ATerm z_22;
          z_22 = t;
          {
            ATerm o_77 = NULL,q_77 = NULL,s_77 = NULL;
            ATerm a_23;
            a_23 = t;
            {
              ATerm p_77 = NULL;
              t = e_0(t);
              {
                p_77 = t;
                if(((o_77 != NULL) && (o_77 != p_77)))
                  _fail(p_77);
                else
                  o_77 = p_77;
              }
            }
            t = a_23;
            {
              ATerm r_77 = NULL;
              t = not_null(i_77);
              {
                t = d_0(t);
                {
                  r_77 = t;
                  if(((q_77 != NULL) && (q_77 != r_77)))
                    _fail(r_77);
                  else
                    q_77 = r_77;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_77)), not_null(q_77));
                {
                  s_77 = t;
                  if(((n_77 != NULL) && (n_77 != s_77)))
                    _fail(s_77);
                  else
                    n_77 = s_77;
                }
              }
            }
          }
          t = z_22;
          {
            ATerm u_4 (ATerm t)
            {
              t = not_null(n_77);
              return(t);
            }
            t = reverse_acc_2(t, d_0, u_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(k_77) == AT_LIST) && ATisEmpty(k_77)))
        {
          {
            t = term_j_10;
            t = e_0(t);
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
  ATerm v_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, v_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm i_106 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_79 (ATerm))
{
  ATerm d_78 = NULL,e_78 = NULL;
  d_78 = t;
  c_78 :
  if(match_cons(d_78, sym_Program_1))
    {
      e_78 = ATgetArgument(d_78, 0);
      {
        ATerm h_78 = NULL,j_78 = NULL;
        ATerm i_78 = NULL;
        t = SSLgetAnnotations(not_null(d_78));
        {
          i_78 = t;
          if(((h_78 != NULL) && (h_78 != i_78)))
            _fail(i_78);
          else
            h_78 = i_78;
        }
        {
          t = not_null(e_78);
          {
            ATerm l_78 = NULL;
            t = q_79(t);
            {
              j_78 = t;
              {
                ATerm m_78 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(j_78)), not_null(h_78));
                {
                  m_78 = t;
                  if(((l_78 != NULL) && (l_78 != m_78)))
                    _fail(m_78);
                  else
                    l_78 = m_78;
                }
                t = not_null(l_78);
              }
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
  ATerm v_78 = NULL;
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_78 = NULL;
      t = term_h_21;
      {
        t = get_config_0(t);
        {
          w_78 = t;
          if(((v_78 != NULL) && (v_78 != w_78)))
            _fail(w_78);
          else
            v_78 = w_78;
        }
      }
      ;
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      {
        ATerm w_4 (ATerm t)
        {
          ATerm x_4 (ATerm t)
          {
            ATerm x_78 = NULL;
            x_78 = t;
            if(((v_78 != NULL) && (v_78 != x_78)))
              _fail(x_78);
            else
              v_78 = x_78;
            return(t);
          }
          t = Program_1(t, x_4);
          return(t);
        }
        t = option_defined_1(t, w_4);
      }
    }
  {
    ATerm y_4 (ATerm t)
    {
      ATerm z_4 (ATerm t)
      {
        t = not_null(v_78);
        return(t);
      }
      t = short_description_1(t, z_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, y_4);
    {
      t = term_d_23;
      {
        t = echo_0(t);
        {
          t = term_l_23;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_5 (ATerm t)
                {
                  ATerm y_78 = NULL;
                  ATerm z_78 = NULL;
                  z_78 = t;
                  if(((y_78 != NULL) && (y_78 != z_78)))
                    _fail(z_78);
                  else
                    y_78 = z_78;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_78)), term_m_23);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_5);
                {
                  ATerm b_5 (ATerm t)
                  {
                    ATerm a_79 = NULL;
                    ATerm b_79 = NULL;
                    ATerm c_5 (ATerm t)
                    {
                      t = not_null(v_78);
                      return(t);
                    }
                    t = long_description_1(t, c_5);
                    {
                      b_79 = t;
                      if(((a_79 != NULL) && (a_79 != b_79)))
                        _fail(b_79);
                      else
                        a_79 = b_79;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(a_79)), term_n_23);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_5);
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
  ATerm o_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = o_23;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm r_79 (ATerm))
{
  ATerm l_79 = NULL,m_79 = NULL;
  l_79 = t;
  k_79 :
  if(match_cons(l_79, sym_Undefined_1))
    {
      m_79 = ATgetArgument(l_79, 0);
      {
        ATerm p_79 = NULL,t_79 = NULL;
        ATerm s_79 = NULL;
        t = SSLgetAnnotations(not_null(l_79));
        {
          s_79 = t;
          if(((p_79 != NULL) && (p_79 != s_79)))
            _fail(s_79);
          else
            p_79 = s_79;
        }
        {
          t = not_null(m_79);
          {
            ATerm v_79 = NULL;
            t = r_79(t);
            {
              t_79 = t;
              {
                ATerm y_79 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_79)), not_null(p_79));
                {
                  y_79 = t;
                  if(((v_79 != NULL) && (v_79 != y_79)))
                    _fail(y_79);
                  else
                    v_79 = y_79;
                }
                t = not_null(v_79);
              }
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
ATerm fetch_1 (ATerm t, ATerm g_88 (ATerm))
{
  ATerm o_80 (ATerm t)
  {
    ATerm u_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_88, _id);
        ;
        LocalPopChoice(w_23);
      }
    else
      {
        t = u_23;
        t = Cons_2(t, _id, o_80);
      }
    return(t);
  }
  t = o_80(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_105 (ATerm))
{
  t = fetch_1(t, i_105);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm q_80 = NULL,r_80 = NULL,s_80 = NULL;
  q_80 = t;
  p_80 :
  if(((ATgetType(q_80) == AT_LIST) && ATisEmpty(q_80)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(q_80) == AT_LIST) && !(ATisEmpty(q_80))))
        {
          r_80 = ATgetFirst((ATermList) q_80);
          s_80 = (ATerm) ATgetNext((ATermList) q_80);
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
  ATerm z_23;
  z_23 = t;
  {
    ATerm v_80 = NULL;
    ATerm y_80 = NULL;
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        {
          ATerm w_80 = NULL;
          ATerm x_80 = NULL;
          x_80 = t;
          if(((w_80 != NULL) && (w_80 != x_80)))
            _fail(x_80);
          else
            w_80 = x_80;
          t = (ATerm) ATinsert(ATempty, not_null(w_80));
        }
      }
    {
      y_80 = t;
      if(((v_80 != NULL) && (v_80 != y_80)))
        _fail(y_80);
      else
        v_80 = y_80;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_17, not_null(v_80));
      t = printnl_0(t);
    }
  }
  t = z_23;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_h_21;
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
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(d_24);
    }
  else
    {
      t = c_24;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_81 = NULL;
  h_81 = t;
  g_81 :
  if(match_cons(h_81, sym_Help_0))
    {
      ATerm j_81 = NULL,l_81 = NULL;
      ATerm e_24;
      e_24 = t;
      {
        ATerm k_81 = NULL;
        t = SSLgetAnnotations(not_null(h_81));
        {
          k_81 = t;
          if(((j_81 != NULL) && (j_81 != k_81)))
            _fail(k_81);
          else
            j_81 = k_81;
        }
      }
      t = e_24;
      {
        ATerm m_81 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(j_81));
        {
          m_81 = t;
          if(((l_81 != NULL) && (l_81 != m_81)))
            _fail(m_81);
          else
            l_81 = m_81;
        }
        t = not_null(l_81);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_80 (ATerm))
{
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_80(t);
      ;
      LocalPopChoice(g_24);
    }
  else
    {
      t = f_24;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_5 (ATerm t)
      {
        ATerm s_81 = NULL;
        s_81 = t;
        q_81 :
        if(!(match_string(s_81, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm e_5 (ATerm t)
      {
        t = term_k_24;
        t = set_config_0(t);
        return(t);
      }
      ATerm f_5 (ATerm t)
      {
        t = term_q_24;
        return(t);
      }
      t = Option_3(t, d_5, e_5, f_5);
      ;
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      {
        ATerm g_5 (ATerm t)
        {
          ATerm t_81 = NULL;
          t_81 = t;
          r_81 :
          if(!(match_string(t_81, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm h_5 (ATerm t)
        {
          t = term_k_24;
          {
            t = set_config_0(t);
            {
              t = term_s_24;
              t = set_config_0(t);
            }
          }
          t = term_t_24;
          return(t);
        }
        ATerm i_5 (ATerm t)
        {
          t = term_x_24;
          return(t);
        }
        t = Option_3(t, g_5, h_5, i_5);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_82 = NULL,d_82 = NULL,e_82 = NULL;
  c_82 = t;
  v_81 :
  if(match_cons(c_82, sym__2))
    {
      d_82 = ATgetArgument(c_82, 0);
      e_82 = ATgetArgument(c_82, 1);
      t = SSL_table_get(not_null(d_82), not_null(e_82));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL;
  l_82 = t;
  k_82 :
  if(match_cons(l_82, sym__3))
    {
      m_82 = ATgetArgument(l_82, 0);
      n_82 = ATgetArgument(l_82, 1);
      o_82 = ATgetArgument(l_82, 2);
      {
        ATerm z_24;
        z_24 = t;
        {
          ATerm s_82 = NULL;
          ATerm t_82 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_82), not_null(n_82));
          {
            ATerm b_25 = t;
            int e_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(e_25);
              }
            else
              {
                t = b_25;
                t = (ATerm) ATempty;
              }
            {
              t_82 = t;
              if(((s_82 != NULL) && (s_82 != t_82)))
                _fail(t_82);
              else
                s_82 = t_82;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_82), not_null(n_82), (ATerm) ATinsert(CheckATermList(not_null(s_82)), not_null(o_82)));
            t = table_put_0(t);
          }
        }
        t = z_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm n_106 (ATerm))
{
  ATerm x_82 = NULL;
  ATerm y_82 = NULL;
  t = term_j_10;
  {
    t = n_106(t);
    {
      y_82 = t;
      if(((x_82 != NULL) && (x_82 != y_82)))
        _fail(y_82);
      else
        x_82 = y_82;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_23, term_f_23, not_null(x_82));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm e_83 = NULL,f_83 = NULL,g_83 = NULL;
  e_83 = t;
  d_83 :
  if(match_string(e_83, "register-usage-info"))
    {
      t = register_usage_1(t, c_0);
    }
  else
    {
      if(((ATgetType(e_83) == AT_LIST) && !(ATisEmpty(e_83))))
        {
          f_83 = ATgetFirst((ATermList) e_83);
          g_83 = (ATerm) ATgetNext((ATermList) e_83);
          {
            ATerm l_83 = NULL;
            ATerm f_25;
            f_25 = t;
            {
              t = not_null(f_83);
              t = a_0(t);
            }
            t = f_25;
            {
              ATerm m_83 = NULL;
              t = term_j_10;
              {
                t = b_0(t);
                {
                  m_83 = t;
                  if(((l_83 != NULL) && (l_83 != m_83)))
                    _fail(m_83);
                  else
                    l_83 = m_83;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(g_83)), not_null(l_83));
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
  ATerm j_5 (ATerm t)
  {
    ATerm r_83 = NULL;
    r_83 = t;
    q_83 :
    if(!(match_string(r_83, "--help")))
      {
        if(!(match_string(r_83, "-h")))
          {
            if(!(match_string(r_83, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = term_g_25;
    {
      t = set_config_0(t);
      t = term_h_25;
    }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_i_25;
    return(t);
  }
  t = Option_3(t, j_5, k_5, l_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm u_83 = NULL,v_83 = NULL,w_83 = NULL;
  u_83 = t;
  t_83 :
  if(((ATgetType(u_83) == AT_LIST) && !(ATisEmpty(u_83))))
    {
      v_83 = ATgetFirst((ATermList) u_83);
      w_83 = (ATerm) ATgetNext((ATermList) u_83);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_83)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_83)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm e_84 = NULL,f_84 = NULL,g_84 = NULL;
  e_84 = t;
  d_84 :
  if(match_cons(e_84, sym__2))
    {
      f_84 = ATgetArgument(e_84, 0);
      g_84 = ATgetArgument(e_84, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_w_16, not_null(f_84), not_null(g_84));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm l_106 (ATerm))
{
  ATerm j_25;
  j_25 = t;
  {
    ATerm m_5 (ATerm t)
    {
      t = term_k_25;
      t = l_106(t);
      return(t);
    }
    t = try_1(t, m_5);
  }
  t = j_25;
  {
    ATerm n_5 (ATerm t)
    {
      ATerm o_84 = NULL;
      ATerm l_25;
      l_25 = t;
      {
        ATerm m_84 = NULL;
        ATerm n_84 = NULL;
        n_84 = t;
        if(((m_84 != NULL) && (m_84 != n_84)))
          _fail(n_84);
        else
          m_84 = n_84;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_21, not_null(m_84));
          t = set_config_0(t);
        }
      }
      t = l_25;
      {
        ATerm p_84 = NULL;
        p_84 = t;
        if(((o_84 != NULL) && (o_84 != p_84)))
          _fail(p_84);
        else
          o_84 = p_84;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_84));
      }
      return(t);
    }
    ATerm o_5 (ATerm t)
    {
      ATerm r_25 = t;
      int s_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_25 = t;
          int u_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(u_25);
            }
          else
            {
              t = t_25;
              {
                t = l_106(t);
                t = Cons_2(t, _id, o_5);
              }
            }
          ;
          LocalPopChoice(s_25);
        }
      else
        {
          t = r_25;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_5, o_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_84 = NULL,w_84 = NULL,x_84 = NULL;
  ATerm v_25;
  v_25 = t;
  {
    ATerm y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL;
    y_84 = t;
    u_84 :
    if(match_cons(y_84, sym__3))
      {
        z_84 = ATgetArgument(y_84, 0);
        a_85 = ATgetArgument(y_84, 1);
        b_85 = ATgetArgument(y_84, 2);
        {
          if(((v_84 != NULL) && (v_84 != z_84)))
            _fail(z_84);
          else
            v_84 = z_84;
          {
            if(((w_84 != NULL) && (w_84 != a_85)))
              _fail(a_85);
            else
              w_84 = a_85;
            {
              if(((x_84 != NULL) && (x_84 != b_85)))
                _fail(b_85);
              else
                x_84 = b_85;
              t = SSL_table_put(not_null(v_84), not_null(w_84), not_null(x_84));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = v_25;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm k_106 (ATerm))
{
  ATerm e_85 = NULL;
  ATerm w_25;
  w_25 = t;
  {
    t = term_x_25;
    t = table_put_0(t);
  }
  t = w_25;
  {
    ATerm p_5 (ATerm t)
    {
      ATerm c_26 = t;
      int d_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_106(t);
          ;
          LocalPopChoice(d_26);
        }
      else
        {
          t = c_26;
          {
            ATerm e_26 = t;
            int i_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(i_26);
              }
            else
              {
                t = e_26;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, p_5);
    {
      ATerm q_5 (ATerm t)
      {
        ATerm k_26 = t;
        int n_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_26;
            o_26 = t;
            {
              ATerm p_26 = t;
              int q_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_l_22;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(q_26);
                }
              else
                {
                  t = p_26;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = o_26;
            {
              t = system_usage_0(t);
              {
                t = term_c_19;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(n_26);
          }
        else
          {
            t = k_26;
            {
              ATerm r_26 = t;
              int s_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_26;
                  t_26 = t;
                  {
                    t = term_j_24;
                    t = get_config_0(t);
                  }
                  t = t_26;
                  {
                    t = system_about_0(t);
                    {
                      t = term_c_19;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(s_26);
                }
              else
                {
                  t = r_26;
                  {
                    ATerm r_5 (ATerm t)
                    {
                      ATerm s_5 (ATerm t)
                      {
                        ATerm f_85 = NULL;
                        f_85 = t;
                        if(((e_85 != NULL) && (e_85 != f_85)))
                          _fail(f_85);
                        else
                          e_85 = f_85;
                        return(t);
                      }
                      t = Undefined_1(t, s_5);
                      return(t);
                    }
                    t = option_defined_1(t, r_5);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_g_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_85)), term_u_26));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_y_14;
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
      t = try_1(t, q_5);
      {
        ATerm v_26;
        v_26 = t;
        {
          t = term_e_23;
          t = table_destroy_0(t);
        }
        t = v_26;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm n_104 (ATerm))
{
  t = parse_options_1(t, k_104);
  {
    t = store_options_0(t);
    {
      t = m_104(t);
      {
        ATerm b_27 = t;
        int d_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_104);
            ;
            LocalPopChoice(d_27);
          }
        else
          {
            t = b_27;
            {
              ATerm g_27 = t;
              int i_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_104(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(i_27);
                }
              else
                {
                  t = g_27;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm c_104 (ATerm))
{
  ATerm t_5 (ATerm t)
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_104(t);
        ;
        LocalPopChoice(k_27);
      }
    else
      {
        t = j_27;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, z_103);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, t_5, b_104, c_104, u_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm v_103 (ATerm))
{
  ATerm v_5 (ATerm t)
  {
    ATerm w_5 (ATerm t)
    {
      ATerm l_27;
      l_27 = t;
      {
        ATerm i_85 = NULL;
        ATerm j_85 = NULL;
        t = term_h_21;
        {
          t = get_config_0(t);
          {
            j_85 = t;
            if(((i_85 != NULL) && (i_85 != j_85)))
              _fail(j_85);
            else
              i_85 = j_85;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_14, (ATerm) ATinsert(ATempty, not_null(i_85)));
          t = printnl_0(t);
        }
      }
      t = l_27;
      return(t);
    }
    t = if_verbose2_1(t, w_5);
    return(t);
  }
  t = iowrap_4(t, t_103, u_103, v_103, v_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm r_103 (ATerm), ATerm s_103 (ATerm))
{
  t = iowrap_3(t, r_103, s_103, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm o_103 (ATerm))
{
  ATerm x_5 (ATerm t)
  {
    t = _2(t, _id, o_103);
    return(t);
  }
  t = iowrap_2(t, x_5, _fail);
  return(t);
}
ATerm const_prop_io_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm z_5 (ATerm t)
    {
      ATerm a_6 (ATerm t)
      {
        t = Signature_1(t, _id);
        return(t);
      }
      ATerm b_6 (ATerm t)
      {
        ATerm c_6 (ATerm t)
        {
          ATerm d_6 (ATerm t)
          {
            t = map_1(t, const_prop_0);
            return(t);
          }
          t = Strategies_1(t, d_6);
          return(t);
        }
        t = Cons_2(t, c_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, a_6, b_6);
      return(t);
    }
    t = Specification_1(t, z_5);
    return(t);
  }
  t = iowrap_1(t, y_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = const_prop_io_0(t);
  return(t);
}
