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
ATerm term_t_26;
ATerm term_v_25;
ATerm term_j_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_v_24;
ATerm term_s_24;
ATerm term_q_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_f_24;
ATerm term_j_23;
ATerm term_h_23;
ATerm term_f_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_i_22;
ATerm term_a_22;
ATerm term_w_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_w_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_n_19;
ATerm term_l_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_h_18;
ATerm term_f_18;
ATerm term_c_16;
ATerm term_v_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_o_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_x_10;
ATerm term_x_9;
ATerm term_z_7;
ATerm term_p_7;
ATerm term_f_7;
ATerm term_a_7;
ATerm term_m_6;
ATerm term_z_5;
ATerm term_w_5;
void init_constant_terms (void)
{
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_z_5);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("strat: ", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("current: ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("no match with current term: ", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym__2, term_p_15, term_c_19);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym__2, term_n_19, term_x_9);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym__2, term_i_20, term_x_9);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym__2, term_a_23, term_b_23);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym__2, term_f_24, term_x_9);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym__2, term_m_24, term_x_9);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym__2, term_i_22, term_x_9);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym__3, term_a_23, term_b_23, (ATerm) ATempty);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm SDefT_4 (ATerm, ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm b_74 (ATerm));
ATerm prop_sdef_1 (ATerm, ATerm d_80 (ATerm));
ATerm Not_1 (ATerm, ATerm f_72 (ATerm));
ATerm prop_not_1 (ATerm, ATerm b_80 (ATerm));
ATerm Rec_2 (ATerm, ATerm d_72 (ATerm), ATerm e_72 (ATerm));
ATerm prop_rec_1 (ATerm, ATerm a_80 (ATerm));
ATerm Let_2 (ATerm, ATerm g_71 (ATerm), ATerm h_71 (ATerm));
ATerm prop_let_1 (ATerm, ATerm e_80 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm c_72 (ATerm));
ATerm prop_guardedlchoice_1 (ATerm, ATerm j_80 (ATerm));
ATerm LChoice_2 (ATerm, ATerm w_71 (ATerm), ATerm x_71 (ATerm));
ATerm prop_lchoice_1 (ATerm, ATerm i_80 (ATerm));
ATerm Choice_2 (ATerm, ATerm u_70 (ATerm), ATerm v_70 (ATerm));
ATerm isect_CurrentTerm_0 (ATerm);
ATerm isect_Binding_0 (ATerm);
ATerm restore_CurrentTerm_0 (ATerm);
ATerm save_CurrentTerm_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm restore_Binding_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_Binding_0 (ATerm);
ATerm prop_abstract_choice_2 (ATerm, ATerm k_80 (ATerm), ATerm l_80 (ATerm));
ATerm prop_choice_1 (ATerm, ATerm h_80 (ATerm));
ATerm Seq_2 (ATerm, ATerm u_71 (ATerm), ATerm v_71 (ATerm));
ATerm prop_seq_1 (ATerm, ATerm x_79 (ATerm));
ATerm CallT_3 (ATerm, ATerm k_71 (ATerm), ATerm l_71 (ATerm), ATerm m_71 (ATerm));
ATerm PrimT_3 (ATerm, ATerm m_72 (ATerm), ATerm n_72 (ATerm), ATerm o_72 (ATerm));
ATerm prop_call_1 (ATerm, ATerm p_0 (ATerm));
ATerm UndefCurrentTerm_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm q_71 (ATerm), ATerm r_71 (ATerm));
ATerm prop_scope_1 (ATerm, ATerm c_80 (ATerm));
ATerm Build_1 (ATerm, ATerm o_71 (ATerm));
ATerm prop_build_0 (ATerm);
ATerm assert_1 (ATerm, ATerm q_98 (ATerm));
ATerm oncetd_1 (ATerm, ATerm k_83 (ATerm));
ATerm introduce_binding_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm TermIsVarIgnore_1 (ATerm, ATerm g_80 (ATerm));
ATerm MatchWildCard_0 (ATerm);
ATerm AsMatch_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm c_90 (ATerm), ATerm d_90 (ATerm));
ATerm zip_1 (ATerm, ATerm f_90 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm MatchVar_1 (ATerm, ATerm f_110 (ATerm));
ATerm while_not_2 (ATerm, ATerm x_81 (ATerm), ATerm y_81 (ATerm));
ATerm for_3 (ATerm, ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm c_82 (ATerm));
ATerm prop_pattern_match_0 (ATerm);
ATerm CurrentTerm_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm s_98 (ATerm));
ATerm Binding_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm y_83 (ATerm));
ATerm Match_1 (ATerm, ATerm n_71 (ATerm));
ATerm prop_match_0 (ATerm);
ATerm cp_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm n_98 (ATerm));
ATerm restore_always_2 (ATerm, ATerm b_81 (ATerm), ATerm c_81 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm m_98 (ATerm));
ATerm scope_2 (ATerm, ATerm o_98 (ATerm), ATerm p_98 (ATerm));
ATerm const_prop_0 (ATerm);
ATerm map_1 (ATerm, ATerm x_87 (ATerm));
ATerm Strategies_1 (ATerm, ATerm x_66 (ATerm));
ATerm Cons_2 (ATerm, ATerm t_66 (ATerm), ATerm u_66 (ATerm));
ATerm Signature_1 (ATerm, ATerm y_66 (ATerm));
ATerm Specification_1 (ATerm, ATerm c_67 (ATerm));
ATerm _2 (ATerm, ATerm k_65 (ATerm), ATerm l_65 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_88 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm n_101 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm j_100 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm l_103 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm v_99 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm n_95 (ATerm), ATerm o_95 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm y_93 (ATerm), ATerm z_93 (ATerm));
ATerm crush_2 (ATerm, ATerm r_97 (ATerm), ATerm s_97 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm m_101 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm j_104 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_106 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_106 (ATerm));
ATerm Program_1 (ATerm, ATerm r_79 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm s_79 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_88 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_105 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_80 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_106 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_106 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_106 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm n_104 (ATerm), ATerm o_104 (ATerm));
ATerm iowrap_4 (ATerm, ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm d_104 (ATerm));
ATerm iowrap_3 (ATerm, ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm w_103 (ATerm));
ATerm iowrap_2 (ATerm, ATerm s_103 (ATerm), ATerm t_103 (ATerm));
ATerm iowrap_1 (ATerm, ATerm p_103 (ATerm));
ATerm const_prop_io_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm d_6 = NULL;
  d_6 = t;
  c_6 :
  if(((ATgetType(d_6) == AT_LIST) && ATisEmpty(d_6)))
    {
      {
        ATerm s_6 = NULL,u_6 = NULL;
        ATerm v_5;
        v_5 = t;
        {
          ATerm t_6 = NULL;
          t = SSLgetAnnotations(not_null(d_6));
          {
            t_6 = t;
            if(((s_6 != NULL) && (s_6 != t_6)))
              _fail(t_6);
            else
              s_6 = t_6;
          }
        }
        t = v_5;
        {
          ATerm y_6 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(s_6));
          {
            y_6 = t;
            if(((u_6 != NULL) && (u_6 != y_6)))
              _fail(y_6);
            else
              u_6 = y_6;
          }
          t = not_null(u_6);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDefT_4 (ATerm t, ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm b_74 (ATerm))
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL;
  k_7 = t;
  j_7 :
  if(match_cons(k_7, sym_SDefT_4))
    {
      l_7 = ATgetArgument(k_7, 0);
      m_7 = ATgetArgument(k_7, 1);
      n_7 = ATgetArgument(k_7, 2);
      o_7 = ATgetArgument(k_7, 3);
      {
        ATerm u_7 = NULL,w_7 = NULL;
        ATerm v_7 = NULL;
        t = SSLgetAnnotations(not_null(k_7));
        {
          v_7 = t;
          if(((u_7 != NULL) && (u_7 != v_7)))
            _fail(v_7);
          else
            u_7 = v_7;
        }
        {
          t = not_null(l_7);
          {
            ATerm y_7 = NULL;
            t = y_73(t);
            {
              w_7 = t;
              {
                t = not_null(m_7);
                {
                  ATerm a_8 = NULL;
                  t = z_73(t);
                  {
                    y_7 = t;
                    {
                      t = not_null(n_7);
                      {
                        ATerm c_8 = NULL;
                        t = a_74(t);
                        {
                          a_8 = t;
                          {
                            t = not_null(o_7);
                            {
                              ATerm e_8 = NULL;
                              t = b_74(t);
                              {
                                c_8 = t;
                                {
                                  ATerm f_8 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(w_7), not_null(y_7), not_null(a_8), not_null(c_8)), not_null(u_7));
                                  {
                                    f_8 = t;
                                    if(((e_8 != NULL) && (e_8 != f_8)))
                                      _fail(f_8);
                                    else
                                      e_8 = f_8;
                                  }
                                  t = not_null(e_8);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm prop_sdef_1 (ATerm t, ATerm d_80 (ATerm))
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL;
  r_8 = t;
  q_8 :
  if(match_cons(r_8, sym_SDefT_4))
    {
      s_8 = ATgetArgument(r_8, 0);
      t_8 = ATgetArgument(r_8, 1);
      u_8 = ATgetArgument(r_8, 2);
      v_8 = ATgetArgument(r_8, 3);
      {
        ATerm f_0 (ATerm t)
        {
          t = term_w_5;
          return(t);
        }
        ATerm h_0 (ATerm t)
        {
          ATerm x_5;
          x_5 = t;
          {
            t = not_null(u_8);
            {
              ATerm n_0 (ATerm t)
              {
                ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL;
                y_8 = t;
                p_8 :
                if(match_cons(y_8, sym_VarDec_2))
                  {
                    z_8 = ATgetArgument(y_8, 0);
                    a_9 = ATgetArgument(y_8, 1);
                    {
                      ATerm y_5;
                      y_5 = t;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_8)), term_z_5);
                        {
                          ATerm q_0 (ATerm t)
                          {
                            t = term_w_5;
                            return(t);
                          }
                          t = assert_1(t, q_0);
                        }
                      }
                      t = y_5;
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
          t = x_5;
          {
            ATerm r_0 (ATerm t)
            {
              t = UndefCurrentTerm_0(t);
              t = d_80(t);
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
ATerm Not_1 (ATerm t, ATerm f_72 (ATerm))
{
  ATerm j_9 = NULL,k_9 = NULL;
  j_9 = t;
  i_9 :
  if(match_cons(j_9, sym_Not_1))
    {
      k_9 = ATgetArgument(j_9, 0);
      {
        ATerm n_9 = NULL,p_9 = NULL;
        ATerm o_9 = NULL;
        t = SSLgetAnnotations(not_null(j_9));
        {
          o_9 = t;
          if(((n_9 != NULL) && (n_9 != o_9)))
            _fail(o_9);
          else
            n_9 = o_9;
        }
        {
          t = not_null(k_9);
          {
            ATerm r_9 = NULL;
            t = f_72(t);
            {
              p_9 = t;
              {
                ATerm s_9 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(p_9)), not_null(n_9));
                {
                  s_9 = t;
                  if(((r_9 != NULL) && (r_9 != s_9)))
                    _fail(s_9);
                  else
                    r_9 = s_9;
                }
                t = not_null(r_9);
              }
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
ATerm prop_not_1 (ATerm t, ATerm b_80 (ATerm))
{
  ATerm a_10 = NULL,b_10 = NULL;
  a_10 = t;
  z_9 :
  if(match_cons(a_10, sym_Not_1))
    {
      b_10 = ATgetArgument(a_10, 0);
      {
        ATerm c_10 = NULL;
        ATerm a_6;
        a_6 = t;
        {
          ATerm d_10 = NULL;
          t = save_Binding_0(t);
          {
            d_10 = t;
            if(((c_10 != NULL) && (c_10 != d_10)))
              _fail(d_10);
            else
              c_10 = d_10;
          }
        }
        t = a_6;
        {
          t = Not_1(t, b_80);
          {
            ATerm b_6;
            b_6 = t;
            {
              t = UndefCurrentTerm_0(t);
              {
                t = not_null(c_10);
                t = restore_Binding_0(t);
              }
            }
            t = b_6;
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm d_72 (ATerm), ATerm e_72 (ATerm))
{
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
  m_10 = t;
  l_10 :
  if(match_cons(m_10, sym_Rec_2))
    {
      n_10 = ATgetArgument(m_10, 0);
      o_10 = ATgetArgument(m_10, 1);
      {
        ATerm s_10 = NULL,u_10 = NULL;
        ATerm t_10 = NULL;
        t = SSLgetAnnotations(not_null(m_10));
        {
          t_10 = t;
          if(((s_10 != NULL) && (s_10 != t_10)))
            _fail(t_10);
          else
            s_10 = t_10;
        }
        {
          t = not_null(n_10);
          {
            ATerm w_10 = NULL;
            t = d_72(t);
            {
              u_10 = t;
              {
                t = not_null(o_10);
                {
                  ATerm y_10 = NULL;
                  t = e_72(t);
                  {
                    w_10 = t;
                    {
                      ATerm z_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(u_10), not_null(w_10)), not_null(s_10));
                      {
                        z_10 = t;
                        if(((y_10 != NULL) && (y_10 != z_10)))
                          _fail(z_10);
                        else
                          y_10 = z_10;
                      }
                      t = not_null(y_10);
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
ATerm prop_rec_1 (ATerm t, ATerm a_80 (ATerm))
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
  i_11 = t;
  h_11 :
  if(match_cons(i_11, sym_Rec_2))
    {
      j_11 = ATgetArgument(i_11, 0);
      k_11 = ATgetArgument(i_11, 1);
      {
        ATerm l_11 = NULL;
        ATerm e_6;
        e_6 = t;
        {
          ATerm m_11 = NULL;
          t = save_Binding_0(t);
          {
            m_11 = t;
            if(((l_11 != NULL) && (l_11 != m_11)))
              _fail(m_11);
            else
              l_11 = m_11;
          }
        }
        t = e_6;
        {
          ATerm s_0 (ATerm t)
          {
            t = UndefCurrentTerm_0(t);
            t = a_80(t);
            return(t);
          }
          t = Rec_2(t, _id, s_0);
          {
            ATerm f_6;
            f_6 = t;
            {
              t = UndefCurrentTerm_0(t);
              {
                t = not_null(l_11);
                t = restore_Binding_0(t);
              }
            }
            t = f_6;
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2 (ATerm t, ATerm g_71 (ATerm), ATerm h_71 (ATerm))
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
  v_11 = t;
  u_11 :
  if(match_cons(v_11, sym_Let_2))
    {
      w_11 = ATgetArgument(v_11, 0);
      x_11 = ATgetArgument(v_11, 1);
      {
        ATerm b_12 = NULL,d_12 = NULL;
        ATerm c_12 = NULL;
        t = SSLgetAnnotations(not_null(v_11));
        {
          c_12 = t;
          if(((b_12 != NULL) && (b_12 != c_12)))
            _fail(c_12);
          else
            b_12 = c_12;
        }
        {
          t = not_null(w_11);
          {
            ATerm f_12 = NULL;
            t = g_71(t);
            {
              d_12 = t;
              {
                t = not_null(x_11);
                {
                  ATerm h_12 = NULL;
                  t = h_71(t);
                  {
                    f_12 = t;
                    {
                      ATerm i_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(d_12), not_null(f_12)), not_null(b_12));
                      {
                        i_12 = t;
                        if(((h_12 != NULL) && (h_12 != i_12)))
                          _fail(i_12);
                        else
                          h_12 = i_12;
                      }
                      t = not_null(h_12);
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
ATerm prop_let_1 (ATerm t, ATerm e_80 (ATerm))
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
  s_12 = t;
  r_12 :
  if(match_cons(s_12, sym_Let_2))
    {
      t_12 = ATgetArgument(s_12, 0);
      u_12 = ATgetArgument(s_12, 1);
      {
        ATerm v_12 = NULL,w_12 = NULL;
        ATerm g_6;
        g_6 = t;
        {
          ATerm x_12 = NULL;
          ATerm y_12 = NULL;
          t = save_Binding_0(t);
          {
            x_12 = t;
            {
              if(((w_12 != NULL) && (w_12 != x_12)))
                _fail(x_12);
              else
                w_12 = x_12;
              {
                t = save_CurrentTerm_0(t);
                {
                  y_12 = t;
                  if(((v_12 != NULL) && (v_12 != y_12)))
                    _fail(y_12);
                  else
                    v_12 = y_12;
                }
              }
            }
          }
        }
        t = g_6;
        {
          ATerm t_0 (ATerm t)
          {
            ATerm v_0 (ATerm t)
            {
              ATerm h_6;
              h_6 = t;
              {
                t = UndefCurrentTerm_0(t);
                {
                  t = not_null(w_12);
                  t = restore_Binding_0(t);
                }
              }
              t = h_6;
              t = e_80(t);
              return(t);
            }
            t = map_1(t, v_0);
            return(t);
          }
          ATerm u_0 (ATerm t)
          {
            ATerm i_6;
            i_6 = t;
            {
              t = not_null(v_12);
              {
                t = restore_CurrentTerm_0(t);
                {
                  t = not_null(w_12);
                  t = restore_Binding_0(t);
                }
              }
            }
            t = i_6;
            t = e_80(t);
            return(t);
          }
          t = Let_2(t, t_0, u_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm c_72 (ATerm))
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
  j_13 = t;
  i_13 :
  if(match_cons(j_13, sym_GuardedLChoice_3))
    {
      k_13 = ATgetArgument(j_13, 0);
      l_13 = ATgetArgument(j_13, 1);
      m_13 = ATgetArgument(j_13, 2);
      {
        ATerm r_13 = NULL,t_13 = NULL;
        ATerm s_13 = NULL;
        t = SSLgetAnnotations(not_null(j_13));
        {
          s_13 = t;
          if(((r_13 != NULL) && (r_13 != s_13)))
            _fail(s_13);
          else
            r_13 = s_13;
        }
        {
          t = not_null(k_13);
          {
            ATerm v_13 = NULL;
            t = a_72(t);
            {
              t_13 = t;
              {
                t = not_null(l_13);
                {
                  ATerm x_13 = NULL;
                  t = b_72(t);
                  {
                    v_13 = t;
                    {
                      t = not_null(m_13);
                      {
                        ATerm z_13 = NULL;
                        t = c_72(t);
                        {
                          x_13 = t;
                          {
                            ATerm a_14 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(t_13), not_null(v_13), not_null(x_13)), not_null(r_13));
                            {
                              a_14 = t;
                              if(((z_13 != NULL) && (z_13 != a_14)))
                                _fail(a_14);
                              else
                                z_13 = a_14;
                            }
                            t = not_null(z_13);
                          }
                        }
                      }
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
ATerm prop_guardedlchoice_1 (ATerm t, ATerm j_80 (ATerm))
{
  t = GuardedLChoice_3(t, _id, _id, _id);
  {
    ATerm w_0 (ATerm t)
    {
      t = GuardedLChoice_3(t, j_80, _id, _id);
      t = GuardedLChoice_3(t, _id, j_80, _id);
      return(t);
    }
    ATerm x_0 (ATerm t)
    {
      t = GuardedLChoice_3(t, _id, _id, j_80);
      return(t);
    }
    t = prop_abstract_choice_2(t, w_0, x_0);
  }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm w_71 (ATerm), ATerm x_71 (ATerm))
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  n_14 = t;
  m_14 :
  if(match_cons(n_14, sym_LChoice_2))
    {
      o_14 = ATgetArgument(n_14, 0);
      p_14 = ATgetArgument(n_14, 1);
      {
        ATerm t_14 = NULL,v_14 = NULL;
        ATerm u_14 = NULL;
        t = SSLgetAnnotations(not_null(n_14));
        {
          u_14 = t;
          if(((t_14 != NULL) && (t_14 != u_14)))
            _fail(u_14);
          else
            t_14 = u_14;
        }
        {
          t = not_null(o_14);
          {
            ATerm x_14 = NULL;
            t = w_71(t);
            {
              v_14 = t;
              {
                t = not_null(p_14);
                {
                  ATerm z_14 = NULL;
                  t = x_71(t);
                  {
                    x_14 = t;
                    {
                      ATerm a_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(v_14), not_null(x_14)), not_null(t_14));
                      {
                        a_15 = t;
                        if(((z_14 != NULL) && (z_14 != a_15)))
                          _fail(a_15);
                        else
                          z_14 = a_15;
                      }
                      t = not_null(z_14);
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
ATerm prop_lchoice_1 (ATerm t, ATerm i_80 (ATerm))
{
  t = LChoice_2(t, _id, _id);
  {
    ATerm y_0 (ATerm t)
    {
      t = LChoice_2(t, i_80, _id);
      return(t);
    }
    ATerm z_0 (ATerm t)
    {
      t = LChoice_2(t, _id, i_80);
      return(t);
    }
    t = prop_abstract_choice_2(t, y_0, z_0);
  }
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm u_70 (ATerm), ATerm v_70 (ATerm))
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL;
  m_15 = t;
  l_15 :
  if(match_cons(m_15, sym_Choice_2))
    {
      n_15 = ATgetArgument(m_15, 0);
      o_15 = ATgetArgument(m_15, 1);
      {
        ATerm s_15 = NULL,u_15 = NULL;
        ATerm t_15 = NULL;
        t = SSLgetAnnotations(not_null(m_15));
        {
          t_15 = t;
          if(((s_15 != NULL) && (s_15 != t_15)))
            _fail(t_15);
          else
            s_15 = t_15;
        }
        {
          t = not_null(n_15);
          {
            ATerm w_15 = NULL;
            t = u_70(t);
            {
              u_15 = t;
              {
                t = not_null(o_15);
                {
                  ATerm y_15 = NULL;
                  t = v_70(t);
                  {
                    w_15 = t;
                    {
                      ATerm z_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(u_15), not_null(w_15)), not_null(s_15));
                      {
                        z_15 = t;
                        if(((y_15 != NULL) && (y_15 != z_15)))
                          _fail(z_15);
                        else
                          y_15 = z_15;
                      }
                      t = not_null(y_15);
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
  ATerm a_1 (ATerm t)
  {
    ATerm b_1 (ATerm t)
    {
      ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL;
      p_16 = t;
      j_16 :
      if(match_cons(p_16, sym__2))
        {
          q_16 = ATgetArgument(p_16, 0);
          r_16 = ATgetArgument(p_16, 1);
          k_16 :
          if(((ATgetType(r_16) == AT_LIST) && !(ATisEmpty(r_16))))
            {
              s_16 = ATgetFirst((ATermList) r_16);
              v_16 = (ATerm) ATgetNext((ATermList) r_16);
              l_16 :
              if(match_cons(s_16, sym_Defined_2))
                {
                  t_16 = ATgetArgument(s_16, 0);
                  u_16 = ATgetArgument(s_16, 1);
                  m_16 :
                  if(!(match_cons(q_16, sym_Scopes_0)))
                    {
                      ATerm j_6 = t;
                      int k_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm l_6;
                          l_6 = t;
                          {
                            ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, term_m_6, not_null(q_16));
                            {
                              t = table_get_0(t);
                              {
                                y_16 = t;
                                h_16 :
                                if(((ATgetType(y_16) == AT_LIST) && !(ATisEmpty(y_16))))
                                  {
                                    z_16 = ATgetFirst((ATermList) y_16);
                                    c_17 = (ATerm) ATgetNext((ATermList) y_16);
                                    i_16 :
                                    if(match_cons(z_16, sym_Defined_2))
                                      {
                                        a_17 = ATgetArgument(z_16, 0);
                                        b_17 = ATgetArgument(z_16, 1);
                                        if(((u_16 != NULL) && (u_16 != b_17)))
                                          _fail(b_17);
                                        else
                                          u_16 = b_17;
                                      }
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
                          t = l_6;
                          ;
                          LocalPopChoice(k_6);
                        }
                      else
                        {
                          t = j_6;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_16), (ATerm) ATinsert(ATempty, term_z_5));
                        }
                    }
                }
              else
                {
                  n_16 :
                  if(!(match_cons(q_16, sym_Scopes_0)))
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              o_16 :
              if(!(match_cons(q_16, sym_Scopes_0)))
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
    t = try_1(t, b_1);
    return(t);
  }
  t = map_1(t, a_1);
  t = restore_CurrentTerm_0(t);
  return(t);
}
ATerm isect_Binding_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm d_1 (ATerm t)
    {
      ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
      p_17 = t;
      j_17 :
      if(match_cons(p_17, sym__2))
        {
          q_17 = ATgetArgument(p_17, 0);
          r_17 = ATgetArgument(p_17, 1);
          k_17 :
          if(((ATgetType(r_17) == AT_LIST) && !(ATisEmpty(r_17))))
            {
              s_17 = ATgetFirst((ATermList) r_17);
              v_17 = (ATerm) ATgetNext((ATermList) r_17);
              l_17 :
              if(match_cons(s_17, sym_Defined_2))
                {
                  t_17 = ATgetArgument(s_17, 0);
                  u_17 = ATgetArgument(s_17, 1);
                  m_17 :
                  if(!(match_cons(q_17, sym_Scopes_0)))
                    {
                      ATerm n_6 = t;
                      int o_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm p_6;
                          p_6 = t;
                          {
                            ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, term_w_5, not_null(q_17));
                            {
                              t = table_get_0(t);
                              {
                                y_17 = t;
                                h_17 :
                                if(((ATgetType(y_17) == AT_LIST) && !(ATisEmpty(y_17))))
                                  {
                                    z_17 = ATgetFirst((ATermList) y_17);
                                    c_18 = (ATerm) ATgetNext((ATermList) y_17);
                                    i_17 :
                                    if(match_cons(z_17, sym_Defined_2))
                                      {
                                        a_18 = ATgetArgument(z_17, 0);
                                        b_18 = ATgetArgument(z_17, 1);
                                        if(((u_17 != NULL) && (u_17 != b_18)))
                                          _fail(b_18);
                                        else
                                          u_17 = b_18;
                                      }
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
                          t = p_6;
                          ;
                          LocalPopChoice(o_6);
                        }
                      else
                        {
                          t = n_6;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_17), (ATerm) ATinsert(ATempty, term_z_5));
                        }
                    }
                }
              else
                {
                  n_17 :
                  if(!(match_cons(q_17, sym_Scopes_0)))
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              o_17 :
              if(!(match_cons(q_17, sym_Scopes_0)))
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
    t = try_1(t, d_1);
    return(t);
  }
  t = map_1(t, c_1);
  t = restore_Binding_0(t);
  return(t);
}
ATerm restore_CurrentTerm_0 (ATerm t)
{
  ATerm g_18 = NULL;
  g_18 = t;
  {
    ATerm q_6;
    q_6 = t;
    {
      t = term_m_6;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_6, not_null(g_18));
          t = table_putlist_0(t);
        }
      }
    }
    t = q_6;
  }
  return(t);
}
ATerm save_CurrentTerm_0 (ATerm t)
{
  t = term_m_6;
  t = table_getlist_0(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
  n_18 = t;
  m_18 :
  if(match_cons(n_18, sym__2))
    {
      o_18 = ATgetArgument(n_18, 0);
      p_18 = ATgetArgument(n_18, 1);
      {
        t = not_null(p_18);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
            s_18 = t;
            l_18 :
            if(match_cons(s_18, sym__2))
              {
                t_18 = ATgetArgument(s_18, 0);
                u_18 = ATgetArgument(s_18, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(o_18), not_null(t_18), not_null(u_18));
                  t = table_put_0(t);
                }
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
ATerm restore_Binding_0 (ATerm t)
{
  ATerm a_19 = NULL;
  a_19 = t;
  {
    ATerm r_6;
    r_6 = t;
    {
      t = term_w_5;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_5, not_null(a_19));
          t = table_putlist_0(t);
        }
      }
    }
    t = r_6;
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm e_19 = NULL;
  e_19 = t;
  t = SSL_table_keys(not_null(e_19));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm k_19 = NULL;
  k_19 = t;
  {
    t = table_keys_0(t);
    {
      ATerm f_1 (ATerm t)
      {
        ATerm m_19 = NULL;
        ATerm o_19 = NULL;
        m_19 = t;
        {
          ATerm p_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_19), not_null(m_19));
          {
            t = table_get_0(t);
            {
              p_19 = t;
              if(((o_19 != NULL) && (o_19 != p_19)))
                _fail(p_19);
              else
                o_19 = p_19;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), not_null(o_19));
        }
        return(t);
      }
      t = map_1(t, f_1);
    }
  }
  return(t);
}
ATerm save_Binding_0 (ATerm t)
{
  t = term_w_5;
  t = table_getlist_0(t);
  return(t);
}
ATerm prop_abstract_choice_2 (ATerm t, ATerm k_80 (ATerm), ATerm l_80 (ATerm))
{
  ATerm x_19 = NULL,y_19 = NULL,b_20 = NULL,c_20 = NULL;
  ATerm v_6;
  v_6 = t;
  {
    ATerm z_19 = NULL;
    ATerm a_20 = NULL;
    t = save_Binding_0(t);
    {
      z_19 = t;
      {
        if(((x_19 != NULL) && (x_19 != z_19)))
          _fail(z_19);
        else
          x_19 = z_19;
        {
          t = save_CurrentTerm_0(t);
          {
            a_20 = t;
            if(((y_19 != NULL) && (y_19 != a_20)))
              _fail(a_20);
            else
              y_19 = a_20;
          }
        }
      }
    }
  }
  t = v_6;
  {
    t = k_80(t);
    {
      ATerm w_6;
      w_6 = t;
      {
        ATerm d_20 = NULL;
        ATerm e_20 = NULL;
        t = save_Binding_0(t);
        {
          d_20 = t;
          {
            if(((b_20 != NULL) && (b_20 != d_20)))
              _fail(d_20);
            else
              b_20 = d_20;
            {
              t = not_null(x_19);
              {
                t = restore_Binding_0(t);
                {
                  t = save_CurrentTerm_0(t);
                  {
                    e_20 = t;
                    {
                      if(((c_20 != NULL) && (c_20 != e_20)))
                        _fail(e_20);
                      else
                        c_20 = e_20;
                      {
                        t = not_null(y_19);
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
      t = w_6;
      {
        t = l_80(t);
        {
          ATerm x_6;
          x_6 = t;
          {
            t = not_null(b_20);
            {
              t = isect_Binding_0(t);
              {
                t = not_null(c_20);
                t = isect_CurrentTerm_0(t);
              }
            }
          }
          t = x_6;
        }
      }
    }
  }
  return(t);
}
ATerm prop_choice_1 (ATerm t, ATerm h_80 (ATerm))
{
  t = Choice_2(t, _id, _id);
  {
    ATerm g_1 (ATerm t)
    {
      t = Choice_2(t, h_80, _id);
      return(t);
    }
    ATerm h_1 (ATerm t)
    {
      t = Choice_2(t, _id, h_80);
      return(t);
    }
    t = prop_abstract_choice_2(t, g_1, h_1);
  }
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm u_71 (ATerm), ATerm v_71 (ATerm))
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
  p_20 = t;
  o_20 :
  if(match_cons(p_20, sym_Seq_2))
    {
      q_20 = ATgetArgument(p_20, 0);
      r_20 = ATgetArgument(p_20, 1);
      {
        ATerm v_20 = NULL,x_20 = NULL;
        ATerm w_20 = NULL;
        t = SSLgetAnnotations(not_null(p_20));
        {
          w_20 = t;
          if(((v_20 != NULL) && (v_20 != w_20)))
            _fail(w_20);
          else
            v_20 = w_20;
        }
        {
          t = not_null(q_20);
          {
            ATerm z_20 = NULL;
            t = u_71(t);
            {
              x_20 = t;
              {
                t = not_null(r_20);
                {
                  ATerm b_21 = NULL;
                  t = v_71(t);
                  {
                    z_20 = t;
                    {
                      ATerm c_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(x_20), not_null(z_20)), not_null(v_20));
                      {
                        c_21 = t;
                        if(((b_21 != NULL) && (b_21 != c_21)))
                          _fail(c_21);
                        else
                          b_21 = c_21;
                      }
                      t = not_null(b_21);
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
ATerm CallT_3 (ATerm t, ATerm k_71 (ATerm), ATerm l_71 (ATerm), ATerm m_71 (ATerm))
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL;
  p_21 = t;
  o_21 :
  if(match_cons(p_21, sym_CallT_3))
    {
      q_21 = ATgetArgument(p_21, 0);
      r_21 = ATgetArgument(p_21, 1);
      s_21 = ATgetArgument(p_21, 2);
      {
        ATerm x_21 = NULL,z_21 = NULL;
        ATerm y_21 = NULL;
        t = SSLgetAnnotations(not_null(p_21));
        {
          y_21 = t;
          if(((x_21 != NULL) && (x_21 != y_21)))
            _fail(y_21);
          else
            x_21 = y_21;
        }
        {
          t = not_null(q_21);
          {
            ATerm b_22 = NULL;
            t = k_71(t);
            {
              z_21 = t;
              {
                t = not_null(r_21);
                {
                  ATerm d_22 = NULL;
                  t = l_71(t);
                  {
                    b_22 = t;
                    {
                      t = not_null(s_21);
                      {
                        ATerm f_22 = NULL;
                        t = m_71(t);
                        {
                          d_22 = t;
                          {
                            ATerm g_22 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(z_21), not_null(b_22), not_null(d_22)), not_null(x_21));
                            {
                              g_22 = t;
                              if(((f_22 != NULL) && (f_22 != g_22)))
                                _fail(g_22);
                              else
                                f_22 = g_22;
                            }
                            t = not_null(f_22);
                          }
                        }
                      }
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
ATerm PrimT_3 (ATerm t, ATerm m_72 (ATerm), ATerm n_72 (ATerm), ATerm o_72 (ATerm))
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL;
  u_22 = t;
  t_22 :
  if(match_cons(u_22, sym_PrimT_3))
    {
      v_22 = ATgetArgument(u_22, 0);
      w_22 = ATgetArgument(u_22, 1);
      x_22 = ATgetArgument(u_22, 2);
      {
        ATerm c_23 = NULL,e_23 = NULL;
        ATerm d_23 = NULL;
        t = SSLgetAnnotations(not_null(u_22));
        {
          d_23 = t;
          if(((c_23 != NULL) && (c_23 != d_23)))
            _fail(d_23);
          else
            c_23 = d_23;
        }
        {
          t = not_null(v_22);
          {
            ATerm g_23 = NULL;
            t = m_72(t);
            {
              e_23 = t;
              {
                t = not_null(w_22);
                {
                  ATerm i_23 = NULL;
                  t = n_72(t);
                  {
                    g_23 = t;
                    {
                      t = not_null(x_22);
                      {
                        ATerm k_23 = NULL;
                        t = o_72(t);
                        {
                          i_23 = t;
                          {
                            ATerm l_23 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(e_23), not_null(g_23), not_null(i_23)), not_null(c_23));
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
              }
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
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  v_23 = t;
  u_23 :
  if(match_cons(v_23, sym_PrimT_3))
    {
      w_23 = ATgetArgument(v_23, 0);
      x_23 = ATgetArgument(v_23, 1);
      y_23 = ATgetArgument(v_23, 2);
      {
        ATerm i_1 (ATerm t)
        {
          t = alltd_1(t, Binding_0);
          return(t);
        }
        t = PrimT_3(t, _id, p_0, i_1);
        t = UndefCurrentTerm_0(t);
      }
    }
  else
    {
      if(match_cons(v_23, sym_CallT_3))
        {
          w_23 = ATgetArgument(v_23, 0);
          x_23 = ATgetArgument(v_23, 1);
          y_23 = ATgetArgument(v_23, 2);
          {
            ATerm j_1 (ATerm t)
            {
              ATerm l_1 (ATerm t)
              {
                t = UndefCurrentTerm_0(t);
                t = p_0(t);
                return(t);
              }
              t = map_1(t, l_1);
              return(t);
            }
            ATerm k_1 (ATerm t)
            {
              t = alltd_1(t, Binding_0);
              return(t);
            }
            t = CallT_3(t, _id, j_1, k_1);
            t = UndefCurrentTerm_0(t);
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
  ATerm z_6;
  z_6 = t;
  {
    t = term_a_7;
    {
      ATerm m_1 (ATerm t)
      {
        t = term_m_6;
        return(t);
      }
      t = assert_1(t, m_1);
    }
  }
  t = z_6;
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm q_71 (ATerm), ATerm r_71 (ATerm))
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
  h_24 = t;
  g_24 :
  if(match_cons(h_24, sym_Scope_2))
    {
      i_24 = ATgetArgument(h_24, 0);
      j_24 = ATgetArgument(h_24, 1);
      {
        ATerm n_24 = NULL,p_24 = NULL;
        ATerm o_24 = NULL;
        t = SSLgetAnnotations(not_null(h_24));
        {
          o_24 = t;
          if(((n_24 != NULL) && (n_24 != o_24)))
            _fail(o_24);
          else
            n_24 = o_24;
        }
        {
          t = not_null(i_24);
          {
            ATerm r_24 = NULL;
            t = q_71(t);
            {
              p_24 = t;
              {
                t = not_null(j_24);
                {
                  ATerm t_24 = NULL;
                  t = r_71(t);
                  {
                    r_24 = t;
                    {
                      ATerm u_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(p_24), not_null(r_24)), not_null(n_24));
                      {
                        u_24 = t;
                        if(((t_24 != NULL) && (t_24 != u_24)))
                          _fail(u_24);
                        else
                          t_24 = u_24;
                      }
                      t = not_null(t_24);
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
ATerm prop_scope_1 (ATerm t, ATerm c_80 (ATerm))
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
  g_25 = t;
  f_25 :
  if(match_cons(g_25, sym_Scope_2))
    {
      h_25 = ATgetArgument(g_25, 0);
      i_25 = ATgetArgument(g_25, 1);
      {
        ATerm n_1 (ATerm t)
        {
          t = term_w_5;
          return(t);
        }
        ATerm o_1 (ATerm t)
        {
          ATerm b_7;
          b_7 = t;
          {
            t = not_null(h_25);
            {
              ATerm p_1 (ATerm t)
              {
                ATerm k_25 = NULL;
                k_25 = t;
                {
                  ATerm c_7;
                  c_7 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_25)), term_z_5);
                    {
                      ATerm q_1 (ATerm t)
                      {
                        t = term_w_5;
                        return(t);
                      }
                      t = assert_1(t, q_1);
                    }
                  }
                  t = c_7;
                }
                return(t);
              }
              t = map_1(t, p_1);
            }
          }
          t = b_7;
          {
            t = Scope_2(t, _id, c_80);
            {
              ATerm d_7;
              d_7 = t;
              {
                ATerm r_1 (ATerm t)
                {
                  t = CurrentTerm_0(t);
                  {
                    ATerm s_1 (ATerm t)
                    {
                      ATerm m_25 = NULL,n_25 = NULL;
                      m_25 = t;
                      e_25 :
                      if(match_cons(m_25, sym_Var_1))
                        {
                          n_25 = ATgetArgument(m_25, 0);
                          {
                            t = not_null(h_25);
                            {
                              ATerm t_1 (ATerm t)
                              {
                                ATerm p_25 = NULL;
                                p_25 = t;
                                if(((n_25 != NULL) && (n_25 != p_25)))
                                  _fail(p_25);
                                else
                                  n_25 = p_25;
                                return(t);
                              }
                              t = fetch_1(t, t_1);
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, s_1);
                    t = UndefCurrentTerm_0(t);
                  }
                  return(t);
                }
                t = try_1(t, r_1);
              }
              t = d_7;
            }
          }
          return(t);
        }
        t = scope_2(t, n_1, o_1);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Build_1 (ATerm t, ATerm o_71 (ATerm))
{
  ATerm z_25 = NULL,a_26 = NULL;
  z_25 = t;
  y_25 :
  if(match_cons(z_25, sym_Build_1))
    {
      a_26 = ATgetArgument(z_25, 0);
      {
        ATerm d_26 = NULL,f_26 = NULL;
        ATerm e_26 = NULL;
        t = SSLgetAnnotations(not_null(z_25));
        {
          e_26 = t;
          if(((d_26 != NULL) && (d_26 != e_26)))
            _fail(e_26);
          else
            d_26 = e_26;
        }
        {
          t = not_null(a_26);
          {
            ATerm h_26 = NULL;
            t = o_71(t);
            {
              f_26 = t;
              {
                ATerm i_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(f_26)), not_null(d_26));
                {
                  i_26 = t;
                  if(((h_26 != NULL) && (h_26 != i_26)))
                    _fail(i_26);
                  else
                    h_26 = i_26;
                }
                t = not_null(h_26);
              }
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
  ATerm p_26 = NULL,q_26 = NULL;
  ATerm u_1 (ATerm t)
  {
    t = alltd_1(t, Binding_0);
    return(t);
  }
  t = Build_1(t, u_1);
  {
    p_26 = t;
    o_26 :
    if(match_cons(p_26, sym_Build_1))
      {
        q_26 = ATgetArgument(p_26, 0);
        {
          ATerm e_7;
          e_7 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_f_7, not_null(q_26)));
            {
              ATerm v_1 (ATerm t)
              {
                t = term_m_6;
                return(t);
              }
              t = assert_1(t, v_1);
            }
          }
          t = e_7;
        }
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm q_98 (ATerm))
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL;
  y_26 = t;
  x_26 :
  if(match_cons(y_26, sym__2))
    {
      z_26 = ATgetArgument(y_26, 0);
      a_27 = ATgetArgument(y_26, 1);
      {
        ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
        ATerm g_7;
        g_7 = t;
        {
          ATerm g_27 = NULL;
          ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
          t = q_98(t);
          {
            g_27 = t;
            {
              if(((d_27 != NULL) && (d_27 != g_27)))
                _fail(g_27);
              else
                d_27 = g_27;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(d_27), not_null(z_26), not_null(a_27));
                {
                  t = table_push_0(t);
                  {
                    ATerm h_7 = t;
                    int i_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_27), term_p_7);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(i_7);
                      }
                    else
                      {
                        t = h_7;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      h_27 = t;
                      w_26 :
                      if(((ATgetType(h_27) == AT_LIST) && !(ATisEmpty(h_27))))
                        {
                          i_27 = ATgetFirst((ATermList) h_27);
                          j_27 = (ATerm) ATgetNext((ATermList) h_27);
                          {
                            if(((e_27 != NULL) && (e_27 != i_27)))
                              _fail(i_27);
                            else
                              e_27 = i_27;
                            {
                              if(((f_27 != NULL) && (f_27 != j_27)))
                                _fail(j_27);
                              else
                                f_27 = j_27;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(d_27), term_p_7, (ATerm) ATinsert(CheckATermList(not_null(f_27)), (ATerm) ATinsert(CheckATermList(not_null(e_27)), not_null(z_26))));
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
        t = g_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm k_83 (ATerm))
{
  ATerm n_27 (ATerm t)
  {
    ATerm q_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_83(t);
        ;
        LocalPopChoice(r_7);
      }
    else
      {
        t = q_7;
        t = _one(t, n_27);
      }
    return(t);
  }
  t = n_27(t);
  return(t);
}
ATerm introduce_binding_0 (ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,r_29 = NULL;
  b_29 = t;
  q_27 :
  if(match_cons(b_29, sym__2))
    {
      c_29 = ATgetArgument(b_29, 0);
      r_29 = ATgetArgument(b_29, 1);
      r_27 :
      if(match_cons(c_29, sym_Var_1))
        {
          d_29 = ATgetArgument(c_29, 0);
          {
            ATerm s_7;
            s_7 = t;
            {
              t = not_null(r_29);
              {
                ATerm t_7 = t;
                if((PushChoice() == 0))
                  {
                    ATerm w_1 (ATerm t)
                    {
                      ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
                      v_29 = t;
                      p_27 :
                      if(!(match_cons(v_29, sym_Wld_0)))
                        {
                          if(match_cons(v_29, sym_As_2))
                            {
                              w_29 = ATgetArgument(v_29, 0);
                              x_29 = ATgetArgument(v_29, 1);
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
                    t = oncetd_1(t, w_1);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_7;
                  }
              }
            }
            t = s_7;
            {
              ATerm x_7;
              x_7 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_29)), (ATerm) ATmakeAppl(sym_Defined_2, term_z_7, not_null(r_29)));
                {
                  ATerm x_1 (ATerm t)
                  {
                    t = term_w_5;
                    return(t);
                  }
                  t = assert_1(t, x_1);
                }
              }
              t = x_7;
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
  ATerm m_30 = NULL,n_30 = NULL;
  m_30 = t;
  l_30 :
  if(match_cons(m_30, sym_Var_1))
    {
      n_30 = ATgetArgument(m_30, 0);
      {
        ATerm b_8 = t;
        int d_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_30 = NULL,s_30 = NULL;
            ATerm r_30 = NULL;
            t = SSLgetAnnotations(not_null(m_30));
            {
              r_30 = t;
              if(((q_30 != NULL) && (q_30 != r_30)))
                _fail(r_30);
              else
                q_30 = r_30;
            }
            {
              t = not_null(n_30);
              {
                ATerm u_30 = NULL;
                t = o_0(t);
                {
                  s_30 = t;
                  {
                    ATerm v_30 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(s_30)), not_null(q_30));
                    {
                      v_30 = t;
                      if(((u_30 != NULL) && (u_30 != v_30)))
                        _fail(v_30);
                      else
                        u_30 = v_30;
                    }
                    t = not_null(u_30);
                  }
                }
              }
            }
            ;
            LocalPopChoice(d_8);
          }
        else
          {
            t = b_8;
            {
              ATerm g_8 = t;
              int h_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_30 = NULL,a_31 = NULL;
                  ATerm z_30 = NULL;
                  t = SSLgetAnnotations(not_null(m_30));
                  {
                    z_30 = t;
                    if(((y_30 != NULL) && (y_30 != z_30)))
                      _fail(z_30);
                    else
                      y_30 = z_30;
                  }
                  {
                    t = not_null(n_30);
                    {
                      ATerm h_31 = NULL;
                      t = o_0(t);
                      {
                        a_31 = t;
                        {
                          ATerm i_31 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(a_31)), not_null(y_30));
                          {
                            i_31 = t;
                            if(((h_31 != NULL) && (h_31 != i_31)))
                              _fail(i_31);
                            else
                              h_31 = i_31;
                          }
                          t = not_null(h_31);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(h_8);
                }
              else
                {
                  t = g_8;
                  {
                    ATerm l_31 = NULL,n_31 = NULL;
                    ATerm m_31 = NULL;
                    t = SSLgetAnnotations(not_null(m_30));
                    {
                      m_31 = t;
                      if(((l_31 != NULL) && (l_31 != m_31)))
                        _fail(m_31);
                      else
                        l_31 = m_31;
                    }
                    {
                      t = not_null(n_30);
                      {
                        ATerm p_31 = NULL;
                        t = o_0(t);
                        {
                          n_31 = t;
                          {
                            ATerm q_31 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(n_31)), not_null(l_31));
                            {
                              q_31 = t;
                              if(((p_31 != NULL) && (p_31 != q_31)))
                                _fail(q_31);
                              else
                                p_31 = q_31;
                            }
                            t = not_null(p_31);
                          }
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
ATerm TermIsVarIgnore_1 (ATerm t, ATerm g_80 (ATerm))
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL;
  l_32 = t;
  j_32 :
  if(((ATgetType(l_32) == AT_LIST) && !(ATisEmpty(l_32))))
    {
      m_32 = ATgetFirst((ATermList) l_32);
      p_32 = (ATerm) ATgetNext((ATermList) l_32);
      k_32 :
      if(match_cons(m_32, sym__2))
        {
          n_32 = ATgetArgument(m_32, 0);
          o_32 = ATgetArgument(m_32, 1);
          {
            t = not_null(n_32);
            {
              ATerm i_8 = t;
              if((PushChoice() == 0))
                {
                  t = g_80(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = i_8;
                }
              {
                t = not_null(o_32);
                t = g_80(t);
              }
            }
            t = not_null(p_32);
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
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL;
  y_32 = t;
  v_32 :
  if(((ATgetType(y_32) == AT_LIST) && !(ATisEmpty(y_32))))
    {
      z_32 = ATgetFirst((ATermList) y_32);
      c_33 = (ATerm) ATgetNext((ATermList) y_32);
      w_32 :
      if(match_cons(z_32, sym__2))
        {
          a_33 = ATgetArgument(z_32, 0);
          b_33 = ATgetArgument(z_32, 1);
          x_32 :
          if(match_cons(a_33, sym_Wld_0))
            {
              t = not_null(c_33);
            }
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
  ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL;
  l_33 = t;
  h_33 :
  if(((ATgetType(l_33) == AT_LIST) && !(ATisEmpty(l_33))))
    {
      m_33 = ATgetFirst((ATermList) l_33);
      s_33 = (ATerm) ATgetNext((ATermList) l_33);
      i_33 :
      if(match_cons(m_33, sym__2))
        {
          n_33 = ATgetArgument(m_33, 0);
          r_33 = ATgetArgument(m_33, 1);
          j_33 :
          if(match_cons(n_33, sym_As_2))
            {
              o_33 = ATgetArgument(n_33, 0);
              q_33 = ATgetArgument(n_33, 1);
              k_33 :
              if(match_cons(o_33, sym_Var_1))
                {
                  p_33 = ATgetArgument(o_33, 0);
                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(s_33)), (ATerm) ATmakeAppl(sym__2, not_null(q_33), not_null(r_33))), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_33)), not_null(r_33)));
                }
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
ATerm Zip3_0 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
  e_34 = t;
  d_34 :
  if(match_cons(e_34, sym__2))
    {
      f_34 = ATgetArgument(e_34, 0);
      g_34 = ATgetArgument(e_34, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_34)), not_null(f_34));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
  q_34 = t;
  n_34 :
  if(match_cons(q_34, sym__2))
    {
      r_34 = ATgetArgument(q_34, 0);
      u_34 = ATgetArgument(q_34, 1);
      o_34 :
      if(((ATgetType(r_34) == AT_LIST) && !(ATisEmpty(r_34))))
        {
          s_34 = ATgetFirst((ATermList) r_34);
          t_34 = (ATerm) ATgetNext((ATermList) r_34);
          p_34 :
          if(((ATgetType(u_34) == AT_LIST) && !(ATisEmpty(u_34))))
            {
              v_34 = ATgetFirst((ATermList) u_34);
              w_34 = (ATerm) ATgetNext((ATermList) u_34);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(s_34), not_null(v_34)), (ATerm) ATmakeAppl(sym__2, not_null(t_34), not_null(w_34)));
            }
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
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
  g_35 = t;
  d_35 :
  if(match_cons(g_35, sym__2))
    {
      h_35 = ATgetArgument(g_35, 0);
      i_35 = ATgetArgument(g_35, 1);
      e_35 :
      if(((ATgetType(h_35) == AT_LIST) && ATisEmpty(h_35)))
        {
          f_35 :
          if(((ATgetType(i_35) == AT_LIST) && ATisEmpty(i_35)))
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
ATerm genzip_4 (ATerm t, ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm c_90 (ATerm), ATerm d_90 (ATerm))
{
  ATerm k_35 (ATerm t)
  {
    ATerm j_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_90(t);
        ;
        LocalPopChoice(k_8);
      }
    else
      {
        t = j_8;
        {
          t = b_90(t);
          {
            t = _2(t, d_90, k_35);
            t = c_90(t);
          }
        }
      }
    return(t);
  }
  t = k_35(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm f_90 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, f_90);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL;
  v_35 = t;
  t_35 :
  if(((ATgetType(v_35) == AT_LIST) && !(ATisEmpty(v_35))))
    {
      w_35 = ATgetFirst((ATermList) v_35);
      z_35 = (ATerm) ATgetNext((ATermList) v_35);
      u_35 :
      if(match_cons(w_35, sym__2))
        {
          x_35 = ATgetArgument(w_35, 0);
          y_35 = ATgetArgument(w_35, 1);
          {
            ATerm d_36 = NULL,e_36 = NULL,k_36 = NULL,q_36 = NULL;
            ATerm l_8;
            l_8 = t;
            {
              ATerm f_36 = NULL;
              ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
              t = not_null(y_35);
              {
                f_36 = t;
                {
                  t = SSL_explode_term(not_null(f_36));
                  {
                    h_36 = t;
                    o_35 :
                    if(match_cons(h_36, sym__2))
                      {
                        i_36 = ATgetArgument(h_36, 0);
                        j_36 = ATgetArgument(h_36, 1);
                        {
                          if(((d_36 != NULL) && (d_36 != i_36)))
                            _fail(i_36);
                          else
                            d_36 = i_36;
                          if(((e_36 != NULL) && (e_36 != j_36)))
                            _fail(j_36);
                          else
                            e_36 = j_36;
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
            t = l_8;
            {
              ATerm m_8;
              m_8 = t;
              {
                ATerm l_36 = NULL;
                ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
                t = not_null(x_35);
                {
                  l_36 = t;
                  {
                    t = SSL_explode_term(not_null(l_36));
                    {
                      n_36 = t;
                      r_35 :
                      if(match_cons(n_36, sym__2))
                        {
                          o_36 = ATgetArgument(n_36, 0);
                          p_36 = ATgetArgument(n_36, 1);
                          {
                            if(((d_36 != NULL) && (d_36 != o_36)))
                              _fail(o_36);
                            else
                              d_36 = o_36;
                            if(((k_36 != NULL) && (k_36 != p_36)))
                              _fail(p_36);
                            else
                              k_36 = p_36;
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
              t = m_8;
              {
                ATerm r_36 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_36), not_null(e_36));
                {
                  t = zip_1(t, _id);
                  {
                    r_36 = t;
                    if(((q_36 != NULL) && (q_36 != r_36)))
                      _fail(r_36);
                    else
                      q_36 = r_36;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_36), not_null(z_35));
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
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL;
  b_37 = t;
  z_36 :
  if(((ATgetType(b_37) == AT_LIST) && !(ATisEmpty(b_37))))
    {
      c_37 = ATgetFirst((ATermList) b_37);
      f_37 = (ATerm) ATgetNext((ATermList) b_37);
      a_37 :
      if(match_cons(c_37, sym__2))
        {
          d_37 = ATgetArgument(c_37, 0);
          e_37 = ATgetArgument(c_37, 1);
          {
            ATerm h_37 = NULL;
            if(((d_37 != NULL) && (d_37 != e_37)))
              _fail(e_37);
            else
              d_37 = e_37;
            {
              if(((h_37 != NULL) && (h_37 != f_37)))
                _fail(f_37);
              else
                h_37 = f_37;
              t = not_null(h_37);
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
ATerm eq_0 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
  n_37 = t;
  m_37 :
  if(match_cons(n_37, sym__2))
    {
      o_37 = ATgetArgument(n_37, 0);
      p_37 = ATgetArgument(n_37, 1);
      if(((o_37 != NULL) && (o_37 != p_37)))
        _fail(p_37);
      else
        o_37 = p_37;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MatchVar_1 (ATerm t, ATerm f_110 (ATerm))
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL;
  y_37 = t;
  v_37 :
  if(match_cons(y_37, sym__2))
    {
      z_37 = ATgetArgument(y_37, 0);
      e_38 = ATgetArgument(y_37, 1);
      w_37 :
      if(((ATgetType(z_37) == AT_LIST) && !(ATisEmpty(z_37))))
        {
          a_38 = ATgetFirst((ATermList) z_37);
          d_38 = (ATerm) ATgetNext((ATermList) z_37);
          x_37 :
          if(match_cons(a_38, sym__2))
            {
              b_38 = ATgetArgument(a_38, 0);
              c_38 = ATgetArgument(a_38, 1);
              {
                t = not_null(b_38);
                {
                  t = f_110(t);
                  {
                    t = not_null(e_38);
                    {
                      ATerm n_8 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm y_1 (ATerm t)
                          {
                            ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL;
                            j_38 = t;
                            u_37 :
                            if(match_cons(j_38, sym__2))
                              {
                                k_38 = ATgetArgument(j_38, 0);
                                l_38 = ATgetArgument(j_38, 1);
                                {
                                  ATerm m_38 = NULL;
                                  if(((b_38 != NULL) && (b_38 != k_38)))
                                    _fail(k_38);
                                  else
                                    b_38 = k_38;
                                  {
                                    if(((m_38 != NULL) && (m_38 != l_38)))
                                      _fail(l_38);
                                    else
                                      m_38 = l_38;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_38), not_null(m_38));
                                      {
                                        ATerm o_8 = t;
                                        if((PushChoice() == 0))
                                          {
                                            t = eq_0(t);
                                            PopChoice();
                                            _fail(t);
                                          }
                                        else
                                          {
                                            t = o_8;
                                          }
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
                          t = fetch_1(t, y_1);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = n_8;
                        }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_38), (ATerm) ATinsert(CheckATermList(not_null(e_38)), (ATerm) ATmakeAppl(sym__2, not_null(b_38), not_null(c_38))));
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
ATerm while_not_2 (ATerm t, ATerm x_81 (ATerm), ATerm y_81 (ATerm))
{
  ATerm p_38 (ATerm t)
  {
    ATerm w_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_81(t);
        ;
        LocalPopChoice(x_8);
      }
    else
      {
        t = w_8;
        {
          t = y_81(t);
          t = p_38(t);
        }
      }
    return(t);
  }
  t = p_38(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm c_82 (ATerm))
{
  t = a_82(t);
  t = while_not_2(t, b_82, c_82);
  return(t);
}
ATerm prop_pattern_match_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm u_38 = NULL;
    u_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_38), (ATerm) ATempty);
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    ATerm w_38 = NULL,x_38 = NULL,a_39 = NULL;
    w_38 = t;
    s_38 :
    if(match_cons(w_38, sym__2))
      {
        x_38 = ATgetArgument(w_38, 0);
        a_39 = ATgetArgument(w_38, 1);
        t_38 :
        if(((ATgetType(x_38) == AT_LIST) && ATisEmpty(x_38)))
          {
            t = not_null(a_39);
          }
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
  ATerm b_2 (ATerm t)
  {
    ATerm b_9 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_2 (ATerm t)
        {
          t = Var_1(t, _id);
          return(t);
        }
        t = MatchVar_1(t, c_2);
        ;
        LocalPopChoice(c_9);
      }
    else
      {
        t = b_9;
        {
          ATerm d_9 = t;
          int e_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2(t, UfIdem_0, _id);
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
                    t = _2(t, UfDecompose_0, _id);
                    ;
                    LocalPopChoice(g_9);
                  }
                else
                  {
                    t = f_9;
                    {
                      ATerm h_9 = t;
                      int l_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = _2(t, AsMatch_0, _id);
                          ;
                          LocalPopChoice(l_9);
                        }
                      else
                        {
                          t = h_9;
                          {
                            ATerm m_9 = t;
                            int q_9 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = _2(t, MatchWildCard_0, _id);
                                ;
                                LocalPopChoice(q_9);
                              }
                            else
                              {
                                t = m_9;
                                {
                                  ATerm d_2 (ATerm t)
                                  {
                                    ATerm e_2 (ATerm t)
                                    {
                                      t = Var_1(t, _id);
                                      return(t);
                                    }
                                    t = TermIsVarIgnore_1(t, e_2);
                                    return(t);
                                  }
                                  t = _2(t, d_2, _id);
                                }
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
  t = for_3(t, z_1, a_2, b_2);
  return(t);
}
ATerm CurrentTerm_0 (ATerm t)
{
  ATerm p_39 = NULL;
  p_39 = t;
  {
    ATerm t_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_39 = NULL;
        ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm f_2 (ATerm t)
          {
            t = term_m_6;
            return(t);
          }
          t = rewrite_1(t, f_2);
          {
            s_39 = t;
            i_39 :
            if(match_cons(s_39, sym_Defined_2))
              {
                t_39 = ATgetArgument(s_39, 0);
                u_39 = ATgetArgument(s_39, 1);
                j_39 :
                if(match_string(t_39, "i_0"))
                  {
                    if(((r_39 != NULL) && (r_39 != u_39)))
                      _fail(u_39);
                    else
                      r_39 = u_39;
                  }
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
        t = not_null(r_39);
        ;
        LocalPopChoice(u_9);
      }
    else
      {
        t = t_9;
        {
          ATerm v_9 = t;
          int w_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_39 = NULL;
              ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
              t = (ATerm) ATempty;
              {
                ATerm g_2 (ATerm t)
                {
                  t = term_m_6;
                  return(t);
                }
                t = rewrite_1(t, g_2);
                {
                  x_39 = t;
                  l_39 :
                  if(match_cons(x_39, sym_Defined_2))
                    {
                      y_39 = ATgetArgument(x_39, 0);
                      z_39 = ATgetArgument(x_39, 1);
                      m_39 :
                      if(match_string(y_39, "g_0"))
                        {
                          if(((w_39 != NULL) && (w_39 != z_39)))
                            _fail(z_39);
                          else
                            w_39 = z_39;
                        }
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
              t = not_null(w_39);
              ;
              LocalPopChoice(w_9);
            }
          else
            {
              t = v_9;
              {
                ATerm b_40 = NULL;
                t = (ATerm) ATempty;
                {
                  ATerm h_2 (ATerm t)
                  {
                    t = term_m_6;
                    return(t);
                  }
                  t = rewrite_1(t, h_2);
                  {
                    b_40 = t;
                    o_39 :
                    if(match_cons(b_40, sym_Undefined_0))
                      {
                        _fail(t);
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                }
                t = term_z_5;
              }
            }
        }
      }
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
  k_40 = t;
  j_40 :
  if(((ATgetType(k_40) == AT_LIST) && !(ATisEmpty(k_40))))
    {
      l_40 = ATgetFirst((ATermList) k_40);
      m_40 = (ATerm) ATgetNext((ATermList) k_40);
      t = not_null(l_40);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
  r_40 = t;
  q_40 :
  if(match_cons(r_40, sym__2))
    {
      s_40 = ATgetArgument(r_40, 0);
      t_40 = ATgetArgument(r_40, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_40), not_null(t_40));
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
ATerm rewrite_1 (ATerm t, ATerm s_98 (ATerm))
{
  ATerm z_40 = NULL;
  ATerm b_41 = NULL;
  z_40 = t;
  {
    ATerm c_41 = NULL;
    t = term_x_9;
    {
      t = s_98(t);
      {
        c_41 = t;
        if(((b_41 != NULL) && (b_41 != c_41)))
          _fail(c_41);
        else
          b_41 = c_41;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_41), not_null(z_40));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Binding_0 (ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL;
  q_41 = t;
  p_41 :
  if(match_cons(q_41, sym_Var_1))
    {
      r_41 = ATgetArgument(q_41, 0);
      {
        ATerm y_9 = t;
        int e_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_41 = NULL;
            ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
            t = not_null(q_41);
            {
              ATerm i_2 (ATerm t)
              {
                t = term_w_5;
                return(t);
              }
              t = rewrite_1(t, i_2);
              {
                v_41 = t;
                j_41 :
                if(match_cons(v_41, sym_Defined_2))
                  {
                    w_41 = ATgetArgument(v_41, 0);
                    x_41 = ATgetArgument(v_41, 1);
                    k_41 :
                    if(match_string(w_41, "k_0"))
                      {
                        if(((u_41 != NULL) && (u_41 != x_41)))
                          _fail(x_41);
                        else
                          u_41 = x_41;
                      }
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
            t = not_null(u_41);
            ;
            LocalPopChoice(e_10);
          }
        else
          {
            t = y_9;
            {
              ATerm f_10 = t;
              int g_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_42 = NULL;
                  t = not_null(q_41);
                  {
                    ATerm j_2 (ATerm t)
                    {
                      t = term_w_5;
                      return(t);
                    }
                    t = rewrite_1(t, j_2);
                    {
                      a_42 = t;
                      m_41 :
                      if(match_cons(a_42, sym_Undefined_0))
                        {
                          _fail(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                  t = term_z_5;
                  ;
                  LocalPopChoice(g_10);
                }
              else
                {
                  t = f_10;
                  {
                    ATerm d_42 = NULL;
                    t = not_null(q_41);
                    {
                      ATerm k_2 (ATerm t)
                      {
                        t = term_w_5;
                        return(t);
                      }
                      t = rewrite_1(t, k_2);
                      {
                        d_42 = t;
                        o_41 :
                        if(match_cons(d_42, sym_Undefined_0))
                          {
                            _fail(t);
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    }
                    t = term_z_5;
                  }
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
ATerm alltd_1 (ATerm t, ATerm y_83 (ATerm))
{
  ATerm k_42 (ATerm t)
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_83(t);
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        t = _all(t, k_42);
      }
    return(t);
  }
  t = k_42(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm n_71 (ATerm))
{
  ATerm q_42 = NULL,r_42 = NULL;
  q_42 = t;
  p_42 :
  if(match_cons(q_42, sym_Match_1))
    {
      r_42 = ATgetArgument(q_42, 0);
      {
        ATerm u_42 = NULL,w_42 = NULL;
        ATerm v_42 = NULL;
        t = SSLgetAnnotations(not_null(q_42));
        {
          v_42 = t;
          if(((u_42 != NULL) && (u_42 != v_42)))
            _fail(v_42);
          else
            u_42 = v_42;
        }
        {
          t = not_null(r_42);
          {
            ATerm y_42 = NULL;
            t = n_71(t);
            {
              w_42 = t;
              {
                ATerm z_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(w_42)), not_null(u_42));
                {
                  z_42 = t;
                  if(((y_42 != NULL) && (y_42 != z_42)))
                    _fail(z_42);
                  else
                    y_42 = z_42;
                }
                t = not_null(y_42);
              }
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
  ATerm j_43 = NULL,k_43 = NULL;
  ATerm l_2 (ATerm t)
  {
    t = alltd_1(t, Binding_0);
    return(t);
  }
  t = Match_1(t, l_2);
  {
    j_43 = t;
    i_43 :
    if(match_cons(j_43, sym_Match_1))
      {
        k_43 = ATgetArgument(j_43, 0);
        {
          ATerm m_43 = NULL;
          ATerm j_10 = t;
          int k_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_10;
              p_10 = t;
              {
                ATerm n_43 = NULL;
                t = CurrentTerm_0(t);
                {
                  n_43 = t;
                  if(((m_43 != NULL) && (m_43 != n_43)))
                    _fail(n_43);
                  else
                    m_43 = n_43;
                }
              }
              t = p_10;
              {
                ATerm q_10 = t;
                int r_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_10;
                    v_10 = t;
                    {
                      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(k_43), not_null(m_43)));
                      {
                        t = prop_pattern_match_0(t);
                        {
                          ATerm m_2 (ATerm t)
                          {
                            t = try_1(t, introduce_binding_0);
                            return(t);
                          }
                          t = map_1(t, m_2);
                        }
                      }
                    }
                    t = v_10;
                    ;
                    LocalPopChoice(r_10);
                  }
                else
                  {
                    t = q_10;
                    {
                      ATerm o_43 = NULL;
                      ATerm p_43 = NULL;
                      p_43 = t;
                      if(((o_43 != NULL) && (o_43 != p_43)))
                        _fail(p_43);
                      else
                        o_43 = p_43;
                      {
                        t = (ATerm) ATmakeAppl(sym__4, term_x_10, not_null(o_43), term_a_11, not_null(m_43));
                        {
                          ATerm n_2 (ATerm t)
                          {
                            t = term_b_11;
                            return(t);
                          }
                          t = debug_1(t, n_2);
                        }
                      }
                      t = term_c_11;
                    }
                  }
              }
              ;
              LocalPopChoice(k_10);
            }
          else
            {
              t = j_10;
              {
                ATerm d_11 = t;
                int e_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_11;
                    f_11 = t;
                    {
                      t = not_null(k_43);
                      {
                        ATerm g_11 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm o_2 (ATerm t)
                            {
                              ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL;
                              q_43 = t;
                              h_43 :
                              if(!(match_cons(q_43, sym_Wld_0)))
                                {
                                  if(match_cons(q_43, sym_As_2))
                                    {
                                      r_43 = ATgetArgument(q_43, 0);
                                      s_43 = ATgetArgument(q_43, 1);
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
                            t = oncetd_1(t, o_2);
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = g_11;
                          }
                      }
                    }
                    t = f_11;
                    {
                      ATerm n_11;
                      n_11 = t;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_11, not_null(k_43)));
                        {
                          ATerm p_2 (ATerm t)
                          {
                            t = term_m_6;
                            return(t);
                          }
                          t = assert_1(t, p_2);
                        }
                      }
                      t = n_11;
                    }
                    ;
                    LocalPopChoice(e_11);
                  }
                else
                  {
                    t = d_11;
                    {
                    }
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
  return(t);
}
ATerm cp_0 (ATerm t)
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prop_match_0(t);
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = prop_build_0(t);
            ;
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            {
              ATerm t_11 = t;
              int y_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = prop_scope_1(t, cp_0);
                  ;
                  LocalPopChoice(y_11);
                }
              else
                {
                  t = t_11;
                  {
                    ATerm z_11 = t;
                    int a_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = prop_call_1(t, cp_0);
                        ;
                        LocalPopChoice(a_12);
                      }
                    else
                      {
                        t = z_11;
                        {
                          ATerm e_12 = t;
                          int g_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_seq_1(t, cp_0);
                              ;
                              LocalPopChoice(g_12);
                            }
                          else
                            {
                              t = e_12;
                              {
                                ATerm j_12 = t;
                                int k_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = prop_choice_1(t, cp_0);
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
                                          t = prop_lchoice_1(t, cp_0);
                                          ;
                                          LocalPopChoice(m_12);
                                        }
                                      else
                                        {
                                          t = l_12;
                                          {
                                            ATerm n_12 = t;
                                            int o_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = prop_guardedlchoice_1(t, cp_0);
                                                ;
                                                LocalPopChoice(o_12);
                                              }
                                            else
                                              {
                                                t = n_12;
                                                {
                                                  ATerm p_12 = t;
                                                  int q_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = prop_let_1(t, cp_0);
                                                      ;
                                                      LocalPopChoice(q_12);
                                                    }
                                                  else
                                                    {
                                                      t = p_12;
                                                      {
                                                        ATerm z_12 = t;
                                                        int a_13 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = prop_rec_1(t, cp_0);
                                                            ;
                                                            LocalPopChoice(a_13);
                                                          }
                                                        else
                                                          {
                                                            t = z_12;
                                                            {
                                                              ATerm b_13 = t;
                                                              int c_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = prop_not_1(t, cp_0);
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
                                                                        t = prop_sdef_1(t, cp_0);
                                                                        ;
                                                                        LocalPopChoice(e_13);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_13;
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
      }
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm b_44 = NULL,d_44 = NULL,e_44 = NULL;
  b_44 = t;
  x_43 :
  if(((ATgetType(b_44) == AT_LIST) && !(ATisEmpty(b_44))))
    {
      d_44 = ATgetFirst((ATermList) b_44);
      e_44 = (ATerm) ATgetNext((ATermList) b_44);
      t = not_null(e_44);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL;
  k_44 = t;
  j_44 :
  if(match_cons(k_44, sym__2))
    {
      l_44 = ATgetArgument(k_44, 0);
      m_44 = ATgetArgument(k_44, 1);
      {
        ATerm f_13;
        f_13 = t;
        {
          ATerm p_44 = NULL;
          ATerm q_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_44), not_null(m_44));
          {
            ATerm g_13 = t;
            int h_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(h_13);
              }
            else
              {
                t = g_13;
                t = (ATerm) ATempty;
              }
            {
              q_44 = t;
              if(((p_44 != NULL) && (p_44 != q_44)))
                _fail(q_44);
              else
                p_44 = q_44;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_44), not_null(m_44), not_null(p_44));
            t = table_put_0(t);
          }
        }
        t = f_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm n_98 (ATerm))
{
  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL;
  ATerm n_13;
  n_13 = t;
  {
    ATerm a_45 = NULL;
    ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL;
    t = n_98(t);
    {
      a_45 = t;
      {
        if(((z_44 != NULL) && (z_44 != a_45)))
          _fail(a_45);
        else
          z_44 = a_45;
        {
          ATerm o_13 = t;
          int p_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_44), term_p_7);
              t = table_get_0(t);
              ;
              LocalPopChoice(p_13);
            }
          else
            {
              t = o_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            b_45 = t;
            w_44 :
            if(((ATgetType(b_45) == AT_LIST) && !(ATisEmpty(b_45))))
              {
                c_45 = ATgetFirst((ATermList) b_45);
                d_45 = (ATerm) ATgetNext((ATermList) b_45);
                {
                  if(((y_44 != NULL) && (y_44 != c_45)))
                    _fail(c_45);
                  else
                    y_44 = c_45;
                  {
                    if(((x_44 != NULL) && (x_44 != d_45)))
                      _fail(d_45);
                    else
                      x_44 = d_45;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(z_44), term_p_7, not_null(x_44));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(y_44);
                          {
                            ATerm q_2 (ATerm t)
                            {
                              ATerm e_45 = NULL;
                              e_45 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_44), not_null(e_45));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, q_2);
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
  t = n_13;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm b_81 (ATerm), ATerm c_81 (ATerm))
{
  ATerm q_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_81(t);
      t = c_81(t);
      ;
      LocalPopChoice(u_13);
    }
  else
    {
      t = q_13;
      {
        t = c_81(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm m_98 (ATerm))
{
  ATerm l_45 = NULL;
  ATerm w_13;
  w_13 = t;
  {
    ATerm m_45 = NULL;
    ATerm n_45 = NULL;
    t = m_98(t);
    {
      m_45 = t;
      {
        if(((l_45 != NULL) && (l_45 != m_45)))
          _fail(m_45);
        else
          l_45 = m_45;
        {
          ATerm o_45 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_45), term_p_7);
          {
            ATerm y_13 = t;
            int b_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(b_14);
              }
            else
              {
                t = y_13;
                t = (ATerm) ATempty;
              }
            {
              o_45 = t;
              if(((n_45 != NULL) && (n_45 != o_45)))
                _fail(o_45);
              else
                n_45 = o_45;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_45), term_p_7, (ATerm) ATinsert(CheckATermList(not_null(n_45)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = w_13;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm o_98 (ATerm), ATerm p_98 (ATerm))
{
  t = begin_scope_1(t, o_98);
  {
    ATerm r_2 (ATerm t)
    {
      t = end_scope_1(t, o_98);
      return(t);
    }
    t = restore_always_2(t, p_98, r_2);
  }
  return(t);
}
ATerm const_prop_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    t = term_m_6;
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm u_2 (ATerm t)
    {
      t = term_w_5;
      return(t);
    }
    t = scope_2(t, u_2, cp_0);
    return(t);
  }
  t = scope_2(t, s_2, t_2);
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_87 (ATerm))
{
  ATerm r_45 (ATerm t)
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(d_14);
      }
    else
      {
        t = c_14;
        t = Cons_2(t, x_87, r_45);
      }
    return(t);
  }
  t = r_45(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm x_66 (ATerm))
{
  ATerm y_45 = NULL,b_46 = NULL;
  y_45 = t;
  x_45 :
  if(match_cons(y_45, sym_Strategies_1))
    {
      b_46 = ATgetArgument(y_45, 0);
      {
        ATerm e_46 = NULL,g_46 = NULL;
        ATerm f_46 = NULL;
        t = SSLgetAnnotations(not_null(y_45));
        {
          f_46 = t;
          if(((e_46 != NULL) && (e_46 != f_46)))
            _fail(f_46);
          else
            e_46 = f_46;
        }
        {
          t = not_null(b_46);
          {
            ATerm i_46 = NULL;
            t = x_66(t);
            {
              g_46 = t;
              {
                ATerm j_46 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(g_46)), not_null(e_46));
                {
                  j_46 = t;
                  if(((i_46 != NULL) && (i_46 != j_46)))
                    _fail(j_46);
                  else
                    i_46 = j_46;
                }
                t = not_null(i_46);
              }
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
ATerm Cons_2 (ATerm t, ATerm t_66 (ATerm), ATerm u_66 (ATerm))
{
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL;
  u_46 = t;
  t_46 :
  if(((ATgetType(u_46) == AT_LIST) && !(ATisEmpty(u_46))))
    {
      v_46 = ATgetFirst((ATermList) u_46);
      w_46 = (ATerm) ATgetNext((ATermList) u_46);
      {
        ATerm c_47 = NULL,e_47 = NULL;
        ATerm d_47 = NULL;
        t = SSLgetAnnotations(not_null(u_46));
        {
          d_47 = t;
          if(((c_47 != NULL) && (c_47 != d_47)))
            _fail(d_47);
          else
            c_47 = d_47;
        }
        {
          t = not_null(v_46);
          {
            ATerm r_47 = NULL;
            t = t_66(t);
            {
              e_47 = t;
              {
                t = not_null(w_46);
                {
                  ATerm u_47 = NULL;
                  t = u_66(t);
                  {
                    r_47 = t;
                    {
                      ATerm v_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(r_47)), not_null(e_47)), not_null(c_47));
                      {
                        v_47 = t;
                        if(((u_47 != NULL) && (u_47 != v_47)))
                          _fail(v_47);
                        else
                          u_47 = v_47;
                      }
                      t = not_null(u_47);
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
ATerm Signature_1 (ATerm t, ATerm y_66 (ATerm))
{
  ATerm g_48 = NULL,h_48 = NULL;
  g_48 = t;
  f_48 :
  if(match_cons(g_48, sym_Signature_1))
    {
      h_48 = ATgetArgument(g_48, 0);
      {
        ATerm k_48 = NULL,m_48 = NULL;
        ATerm l_48 = NULL;
        t = SSLgetAnnotations(not_null(g_48));
        {
          l_48 = t;
          if(((k_48 != NULL) && (k_48 != l_48)))
            _fail(l_48);
          else
            k_48 = l_48;
        }
        {
          t = not_null(h_48);
          {
            ATerm o_48 = NULL;
            t = y_66(t);
            {
              m_48 = t;
              {
                ATerm p_48 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(m_48)), not_null(k_48));
                {
                  p_48 = t;
                  if(((o_48 != NULL) && (o_48 != p_48)))
                    _fail(p_48);
                  else
                    o_48 = p_48;
                }
                t = not_null(o_48);
              }
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
ATerm Specification_1 (ATerm t, ATerm c_67 (ATerm))
{
  ATerm z_48 = NULL,a_49 = NULL;
  z_48 = t;
  y_48 :
  if(match_cons(z_48, sym_Specification_1))
    {
      a_49 = ATgetArgument(z_48, 0);
      {
        ATerm j_49 = NULL,l_49 = NULL;
        ATerm k_49 = NULL;
        t = SSLgetAnnotations(not_null(z_48));
        {
          k_49 = t;
          if(((j_49 != NULL) && (j_49 != k_49)))
            _fail(k_49);
          else
            j_49 = k_49;
        }
        {
          t = not_null(a_49);
          {
            ATerm n_49 = NULL;
            t = c_67(t);
            {
              l_49 = t;
              {
                ATerm o_49 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(l_49)), not_null(j_49));
                {
                  o_49 = t;
                  if(((n_49 != NULL) && (n_49 != o_49)))
                    _fail(o_49);
                  else
                    n_49 = o_49;
                }
                t = not_null(n_49);
              }
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
ATerm _2 (ATerm t, ATerm k_65 (ATerm), ATerm l_65 (ATerm))
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL;
  z_49 = t;
  y_49 :
  if(match_cons(z_49, sym__2))
    {
      a_50 = ATgetArgument(z_49, 0);
      b_50 = ATgetArgument(z_49, 1);
      {
        ATerm f_50 = NULL,h_50 = NULL;
        ATerm g_50 = NULL;
        t = SSLgetAnnotations(not_null(z_49));
        {
          g_50 = t;
          if(((f_50 != NULL) && (f_50 != g_50)))
            _fail(g_50);
          else
            f_50 = g_50;
        }
        {
          t = not_null(a_50);
          {
            ATerm j_50 = NULL;
            t = k_65(t);
            {
              h_50 = t;
              {
                t = not_null(b_50);
                {
                  ATerm l_50 = NULL;
                  t = l_65(t);
                  {
                    j_50 = t;
                    {
                      ATerm m_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(h_50), not_null(j_50)), not_null(f_50));
                      {
                        m_50 = t;
                        if(((l_50 != NULL) && (l_50 != m_50)))
                          _fail(m_50);
                        else
                          l_50 = m_50;
                      }
                      t = not_null(l_50);
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
  ATerm e_14;
  e_14 = t;
  {
    ATerm t_50 = NULL;
    ATerm u_50 = NULL;
    t = term_x_9;
    {
      t = whoami_0(t);
      {
        u_50 = t;
        if(((t_50 != NULL) && (t_50 != u_50)))
          _fail(u_50);
        else
          t_50 = u_50;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_14), not_null(t_50)), term_g_14));
      {
        t = printnl_0(t);
        {
          t = term_i_14;
          t = exit_0(t);
        }
      }
    }
  }
  t = e_14;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL;
  y_50 = t;
  x_50 :
  if(match_cons(y_50, sym__2))
    {
      z_50 = ATgetArgument(y_50, 0);
      a_51 = ATgetArgument(y_50, 1);
      {
        ATerm j_14;
        j_14 = t;
        t = SSL_printnl(not_null(z_50), not_null(a_51));
        t = j_14;
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
  ATerm f_51 = NULL;
  f_51 = t;
  t = SSL_implode_string(not_null(f_51));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(l_14);
    }
  else
    {
      t = k_14;
      {
        ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL;
        k_51 = t;
        j_51 :
        if(((ATgetType(k_51) == AT_LIST) && !(ATisEmpty(k_51))))
          {
            l_51 = ATgetFirst((ATermList) k_51);
            m_51 = (ATerm) ATgetNext((ATermList) k_51);
            {
              t = not_null(l_51);
              {
                ATerm v_2 (ATerm t)
                {
                  t = not_null(m_51);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, v_2);
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
  ATerm w_51 = NULL;
  ATerm y_51 = NULL;
  w_51 = t;
  {
    ATerm z_51 = NULL;
    ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
    t = not_null(w_51);
    {
      z_51 = t;
      {
        t = SSL_explode_term(not_null(z_51));
        {
          b_52 = t;
          u_51 :
          if(match_cons(b_52, sym__2))
            {
              c_52 = ATgetArgument(b_52, 0);
              d_52 = ATgetArgument(b_52, 1);
              v_51 :
              if(match_string(c_52, ""))
                {
                  if(((y_51 != NULL) && (y_51 != d_52)))
                    _fail(d_52);
                  else
                    y_51 = d_52;
                }
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
      t = not_null(y_51);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_88 (ATerm))
{
  ATerm h_52 (ATerm t)
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, h_52);
        ;
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        {
          t = Nil_0(t);
          t = n_88(t);
        }
      }
    return(t);
  }
  t = h_52(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm k_52 = NULL,p_52 = NULL,q_52 = NULL;
  k_52 = t;
  j_52 :
  if(match_cons(k_52, sym__2))
    {
      p_52 = ATgetArgument(k_52, 0);
      q_52 = ATgetArgument(k_52, 1);
      {
        t = not_null(p_52);
        {
          ATerm w_2 (ATerm t)
          {
            t = not_null(q_52);
            return(t);
          }
          t = at_end_1(t, w_2);
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
  ATerm s_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = s_14;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm a_53 = NULL;
  a_53 = t;
  t = SSL_explode_string(not_null(a_53));
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
  ATerm y_14 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(b_15);
    }
  else
    {
      t = y_14;
      {
        ATerm c_15 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, x_2);
            ;
            LocalPopChoice(d_15);
          }
        else
          {
            t = c_15;
            {
              ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL;
              j_53 = t;
              i_53 :
              if(match_cons(j_53, sym_Path_1))
                {
                  k_53 = ATgetArgument(j_53, 0);
                  t = not_null(k_53);
                }
              else
                {
                  if(match_cons(j_53, sym_Var_1))
                    {
                      k_53 = ATgetArgument(j_53, 0);
                      {
                        t = not_null(k_53);
                        {
                          ATerm e_15 = t;
                          int f_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(f_15);
                            }
                          else
                            {
                              t = e_15;
                              {
                                ATerm y_2 (ATerm t)
                                {
                                  t = term_g_15;
                                  return(t);
                                }
                                t = debug_1(t, y_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(j_53, sym_Prefix_2))
                        {
                          k_53 = ATgetArgument(j_53, 0);
                          l_53 = ATgetArgument(j_53, 1);
                          {
                            ATerm q_53 = NULL,s_53 = NULL;
                            ATerm h_15;
                            h_15 = t;
                            {
                              ATerm r_53 = NULL;
                              t = not_null(k_53);
                              {
                                t = eval_config_0(t);
                                {
                                  r_53 = t;
                                  if(((q_53 != NULL) && (q_53 != r_53)))
                                    _fail(r_53);
                                  else
                                    q_53 = r_53;
                                }
                              }
                            }
                            t = h_15;
                            {
                              ATerm t_53 = NULL;
                              t = not_null(l_53);
                              {
                                t = eval_config_0(t);
                                {
                                  t_53 = t;
                                  if(((s_53 != NULL) && (s_53 != t_53)))
                                    _fail(t_53);
                                  else
                                    s_53 = t_53;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_53), not_null(s_53));
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
  ATerm i_54 = NULL;
  i_54 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_15, not_null(i_54));
    {
      t = table_get_0(t);
      {
        ATerm z_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm j_15;
            j_15 = t;
            {
              ATerm k_54 = NULL;
              ATerm l_54 = NULL;
              l_54 = t;
              if(((k_54 != NULL) && (k_54 != l_54)))
                _fail(l_54);
              else
                k_54 = l_54;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_i_15, not_null(i_54), not_null(k_54));
                t = table_put_0(t);
              }
            }
            t = j_15;
          }
          return(t);
        }
        t = try_1(t, z_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm n_101 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    ATerm k_15;
    k_15 = t;
    {
      ATerm p_54 = NULL;
      ATerm q_54 = NULL;
      t = term_p_15;
      {
        t = get_config_0(t);
        {
          q_54 = t;
          if(((p_54 != NULL) && (p_54 != q_54)))
            _fail(q_54);
          else
            p_54 = q_54;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_54), term_q_15);
        t = geq_0(t);
      }
    }
    t = k_15;
    t = n_101(t);
    return(t);
  }
  t = try_1(t, a_3);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL;
  x_54 = t;
  u_54 :
  if(match_cons(x_54, sym__2))
    {
      y_54 = ATgetArgument(x_54, 0);
      z_54 = ATgetArgument(x_54, 1);
      v_54 :
      if(match_cons(z_54, sym_Stream_1))
        {
          a_55 = ATgetArgument(z_54, 0);
          {
            ATerm d_55 = NULL;
            t = SSL_fputc(not_null(y_54), not_null(a_55));
            {
              ATerm e_55 = NULL;
              e_55 = t;
              if(((d_55 != NULL) && (d_55 != e_55)))
                _fail(e_55);
              else
                d_55 = e_55;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_55));
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
  ATerm l_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL;
  l_55 = t;
  j_55 :
  if(match_cons(l_55, sym__2))
    {
      s_55 = ATgetArgument(l_55, 0);
      u_55 = ATgetArgument(l_55, 1);
      k_55 :
      if(match_cons(s_55, sym_Stream_1))
        {
          t_55 = ATgetArgument(s_55, 0);
          {
            ATerm y_55 = NULL;
            t = SSL_write_term_to_stream_text(not_null(t_55), not_null(u_55));
            {
              ATerm z_55 = NULL;
              z_55 = t;
              if(((y_55 != NULL) && (y_55 != z_55)))
                _fail(z_55);
              else
                y_55 = z_55;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_55));
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
  ATerm b_3 (ATerm t)
  {
    ATerm d_56 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm e_56 = NULL;
      e_56 = t;
      if(((d_56 != NULL) && (d_56 != e_56)))
        _fail(e_56);
      else
        d_56 = e_56;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_15, not_null(d_56));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, b_3);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL;
  k_56 = t;
  i_56 :
  if(match_cons(k_56, sym__2))
    {
      l_56 = ATgetArgument(k_56, 0);
      n_56 = ATgetArgument(k_56, 1);
      j_56 :
      if(match_cons(l_56, sym_Stream_1))
        {
          m_56 = ATgetArgument(l_56, 0);
          {
            ATerm q_56 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(m_56), not_null(n_56));
            {
              ATerm r_56 = NULL;
              r_56 = t;
              if(((q_56 != NULL) && (q_56 != r_56)))
                _fail(r_56);
              else
                q_56 = r_56;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_56));
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
ATerm WriteToFile_1 (ATerm t, ATerm j_100 (ATerm))
{
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL;
  y_56 = t;
  x_56 :
  if(match_cons(y_56, sym__2))
    {
      z_56 = ATgetArgument(y_56, 0);
      a_57 = ATgetArgument(y_56, 1);
      {
        ATerm d_57 = NULL,f_57 = NULL;
        t = not_null(z_56);
        {
          ATerm e_57 = NULL;
          e_57 = t;
          if(((d_57 != NULL) && (d_57 != e_57)))
            _fail(e_57);
          else
            d_57 = e_57;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_57), term_v_15);
            {
              t = open_stream_0(t);
              {
                ATerm g_57 = NULL;
                g_57 = t;
                if(((f_57 != NULL) && (f_57 != g_57)))
                  _fail(g_57);
                else
                  f_57 = g_57;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_57), not_null(a_57));
                  {
                    t = j_100(t);
                    {
                      t = fclose_0(t);
                      t = not_null(a_57);
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
  ATerm o_57 = NULL;
  ATerm x_15;
  x_15 = t;
  {
    ATerm c_3 (ATerm t)
    {
      ATerm a_16 = t;
      int b_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_3 (ATerm t)
          {
            ATerm p_57 = NULL,q_57 = NULL;
            p_57 = t;
            l_57 :
            if(match_cons(p_57, sym_Output_1))
              {
                q_57 = ATgetArgument(p_57, 0);
                if(((o_57 != NULL) && (o_57 != q_57)))
                  _fail(q_57);
                else
                  o_57 = q_57;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, d_3);
          ;
          LocalPopChoice(b_16);
        }
      else
        {
          t = a_16;
          {
            ATerm r_57 = NULL;
            t = term_c_16;
            {
              r_57 = t;
              if(((o_57 != NULL) && (o_57 != r_57)))
                _fail(r_57);
              else
                o_57 = r_57;
            }
          }
        }
      return(t);
    }
    t = _2(t, c_3, _id);
  }
  t = x_15;
  {
    ATerm e_3 (ATerm t)
    {
      ATerm f_3 (ATerm t)
      {
        t = not_null(o_57);
        return(t);
      }
      t = split_2(t, f_3, _id);
      return(t);
    }
    t = _2(t, _id, e_3);
    {
      ATerm d_16 = t;
      int e_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_3 (ATerm t)
          {
            ATerm h_3 (ATerm t)
            {
              ATerm s_57 = NULL;
              s_57 = t;
              n_57 :
              if(!(match_cons(s_57, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, h_3);
            return(t);
          }
          t = _2(t, g_3, WriteToBinaryFile_0);
          ;
          LocalPopChoice(e_16);
        }
      else
        {
          t = d_16;
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
ATerm apply_strategy_1 (ATerm t, ATerm l_103 (ATerm))
{
  ATerm y_57 = NULL,a_58 = NULL,b_58 = NULL,h_58 = NULL;
  ATerm f_16;
  f_16 = t;
  t = dtime_0(t);
  t = f_16;
  {
    t = l_103(t);
    {
      ATerm g_16;
      g_16 = t;
      {
        ATerm z_57 = NULL;
        t = dtime_0(t);
        {
          z_57 = t;
          if(((y_57 != NULL) && (y_57 != z_57)))
            _fail(z_57);
          else
            y_57 = z_57;
        }
      }
      t = g_16;
      {
        a_58 = t;
        x_57 :
        if(match_cons(a_58, sym__2))
          {
            b_58 = ATgetArgument(a_58, 0);
            h_58 = ATgetArgument(a_58, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_58)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(y_57))), not_null(h_58));
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
  ATerm y_58 = NULL,z_58 = NULL;
  ATerm h_59 (ATerm t)
  {
    t = SSL_fclose(not_null(z_58));
    return(t);
  }
  z_58 = t;
  o_58 :
  if(match_cons(z_58, sym_Stream_1))
    {
      y_58 = ATgetArgument(z_58, 0);
      {
        ATerm w_16 = t;
        int x_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(y_58));
            ;
            LocalPopChoice(x_16);
          }
        else
          {
            t = w_16;
            t = h_59(t);
          }
      }
    }
  else
    {
      t = h_59(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL;
  k_59 = t;
  j_59 :
  if(match_cons(k_59, sym_Stream_1))
    {
      l_59 = ATgetArgument(k_59, 0);
      t = SSL_read_term_from_stream(not_null(l_59));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm v_99 (ATerm))
{
  ATerm d_17;
  d_17 = t;
  {
    ATerm q_59 = NULL,y_59 = NULL;
    ATerm e_17;
    e_17 = t;
    {
      ATerm x_59 = NULL;
      t = v_99(t);
      {
        x_59 = t;
        if(((q_59 != NULL) && (q_59 != x_59)))
          _fail(x_59);
        else
          q_59 = x_59;
      }
    }
    t = e_17;
    {
      ATerm z_59 = NULL;
      z_59 = t;
      if(((y_59 != NULL) && (y_59 != z_59)))
        _fail(z_59);
      else
        y_59 = z_59;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_59)), not_null(q_59)));
        t = printnl_0(t);
      }
    }
  }
  t = d_17;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL,p_60 = NULL;
  n_60 = t;
  l_60 :
  if(match_cons(n_60, sym__2))
    {
      o_60 = ATgetArgument(n_60, 0);
      p_60 = ATgetArgument(n_60, 1);
      {
        ATerm s_60 = NULL;
        t = SSL_fopen(not_null(o_60), not_null(p_60));
        {
          ATerm t_60 = NULL;
          t_60 = t;
          if(((s_60 != NULL) && (s_60 != t_60)))
            _fail(t_60);
          else
            s_60 = t_60;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_60));
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
  ATerm x_60 = NULL;
  x_60 = t;
  t = SSL_is_string(not_null(x_60));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm b_61 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm c_61 = NULL;
    c_61 = t;
    if(((b_61 != NULL) && (b_61 != c_61)))
      _fail(c_61);
    else
      b_61 = c_61;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_61));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm f_61 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm g_61 = NULL;
    g_61 = t;
    if(((f_61 != NULL) && (f_61 != g_61)))
      _fail(g_61);
    else
      f_61 = g_61;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_61));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm j_61 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm k_61 = NULL;
    k_61 = t;
    if(((j_61 != NULL) && (j_61 != k_61)))
      _fail(k_61);
    else
      j_61 = k_61;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_61));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm q_61 = NULL;
  q_61 = t;
  p_61 :
  if(match_cons(q_61, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(q_61, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(q_61, sym_stdin_0))
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
  ATerm a_62 = NULL;
  ATerm c_62 = NULL,d_62 = NULL;
  a_62 = t;
  {
    ATerm e_62 = NULL;
    ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL;
    t = not_null(a_62);
    {
      e_62 = t;
      {
        t = SSL_explode_term(not_null(e_62));
        {
          g_62 = t;
          x_61 :
          if(match_cons(g_62, sym__2))
            {
              h_62 = ATgetArgument(g_62, 0);
              i_62 = ATgetArgument(g_62, 1);
              y_61 :
              if(match_string(h_62, ""))
                {
                  z_61 :
                  if(((ATgetType(i_62) == AT_LIST) && !(ATisEmpty(i_62))))
                    {
                      j_62 = ATgetFirst((ATermList) i_62);
                      k_62 = (ATerm) ATgetNext((ATermList) i_62);
                      {
                        if(((d_62 != NULL) && (d_62 != j_62)))
                          _fail(j_62);
                        else
                          d_62 = j_62;
                        if(((c_62 != NULL) && (c_62 != k_62)))
                          _fail(k_62);
                        else
                          c_62 = k_62;
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
    t = not_null(d_62);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm s_62 = NULL,t_62 = NULL,u_62 = NULL;
  s_62 = t;
  r_62 :
  if(match_cons(s_62, sym__2))
    {
      t_62 = ATgetArgument(s_62, 0);
      u_62 = ATgetArgument(s_62, 1);
      {
        ATerm f_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(g_17);
          }
        else
          {
            t = f_17;
            {
              ATerm w_17 = t;
              int x_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_3 (ATerm t)
                  {
                    ATerm v_62 = NULL,w_62 = NULL;
                    v_62 = t;
                    q_62 :
                    if(match_cons(v_62, sym_Path_1))
                      {
                        w_62 = ATgetArgument(v_62, 0);
                        t = not_null(w_62);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, i_3, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(x_17);
                }
              else
                {
                  t = w_17;
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
  ATerm e_63 = NULL;
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_63 = NULL;
      ATerm d_63 = NULL;
      d_63 = t;
      if(((c_63 != NULL) && (c_63 != d_63)))
        _fail(d_63);
      else
        c_63 = d_63;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_63), term_f_18);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(e_18);
    }
  else
    {
      t = d_18;
      {
        ATerm j_3 (ATerm t)
        {
          t = term_h_18;
          return(t);
        }
        t = debug_1(t, j_3);
        _fail(t);
      }
    }
  {
    ATerm i_18;
    i_18 = t;
    {
      ATerm f_63 = NULL;
      t = read_from_stream_0(t);
      {
        f_63 = t;
        if(((e_63 != NULL) && (e_63 != f_63)))
          _fail(f_63);
        else
          e_63 = f_63;
      }
    }
    t = i_18;
    {
      t = fclose_0(t);
      t = not_null(e_63);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm n_95 (ATerm), ATerm o_95 (ATerm))
{
  ATerm k_63 = NULL,m_63 = NULL;
  ATerm j_18;
  j_18 = t;
  {
    ATerm l_63 = NULL;
    t = n_95(t);
    {
      l_63 = t;
      if(((k_63 != NULL) && (k_63 != l_63)))
        _fail(l_63);
      else
        k_63 = l_63;
    }
  }
  t = j_18;
  {
    ATerm n_63 = NULL;
    t = o_95(t);
    {
      n_63 = t;
      if(((m_63 != NULL) && (m_63 != n_63)))
        _fail(n_63);
      else
        m_63 = n_63;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_63), not_null(m_63));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm t_63 = NULL;
  ATerm k_18;
  k_18 = t;
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_3 (ATerm t)
        {
          ATerm u_63 = NULL,v_63 = NULL;
          u_63 = t;
          r_63 :
          if(match_cons(u_63, sym_Input_1))
            {
              v_63 = ATgetArgument(u_63, 0);
              if(((t_63 != NULL) && (t_63 != v_63)))
                _fail(v_63);
              else
                t_63 = v_63;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, k_3);
        ;
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        {
          ATerm w_63 = NULL;
          t = term_v_18;
          {
            w_63 = t;
            if(((t_63 != NULL) && (t_63 != w_63)))
              _fail(w_63);
            else
              t_63 = w_63;
          }
        }
      }
  }
  t = k_18;
  {
    ATerm l_3 (ATerm t)
    {
      t = not_null(t_63);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, l_3);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm b_64 = NULL;
    b_64 = t;
    z_63 :
    if(!(match_string(b_64, "-k")))
      {
        if(!(match_string(b_64, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    ATerm w_18;
    w_18 = t;
    {
      ATerm c_64 = NULL;
      ATerm d_64 = NULL;
      t = string_to_int_0(t);
      {
        d_64 = t;
        if(((c_64 != NULL) && (c_64 != d_64)))
          _fail(d_64);
        else
          c_64 = d_64;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_18, not_null(c_64));
        t = set_config_0(t);
      }
    }
    t = w_18;
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = term_y_18;
    return(t);
  }
  t = ArgOption_3(t, m_3, n_3, o_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm g_64 = NULL;
  g_64 = t;
  t = SSL_string_to_int(not_null(g_64));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm z_18 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_3 (ATerm t)
      {
        ATerm o_64 = NULL;
        o_64 = t;
        j_64 :
        if(!(match_string(o_64, "-S")))
          {
            if(!(match_string(o_64, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm q_3 (ATerm t)
      {
        t = term_d_19;
        t = set_config_0(t);
        t = term_f_19;
        return(t);
      }
      ATerm r_3 (ATerm t)
      {
        t = term_g_19;
        return(t);
      }
      t = Option_3(t, p_3, q_3, r_3);
      ;
      LocalPopChoice(b_19);
    }
  else
    {
      t = z_18;
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_3 (ATerm t)
            {
              ATerm p_64 = NULL;
              p_64 = t;
              k_64 :
              if(!(match_string(p_64, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm t_3 (ATerm t)
            {
              ATerm x_64 = NULL;
              ATerm j_19;
              j_19 = t;
              {
                ATerm q_64 = NULL;
                ATerm r_64 = NULL;
                t = string_to_int_0(t);
                {
                  r_64 = t;
                  if(((q_64 != NULL) && (q_64 != r_64)))
                    _fail(r_64);
                  else
                    q_64 = r_64;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_15, not_null(q_64));
                  t = set_config_0(t);
                }
              }
              t = j_19;
              {
                ATerm y_64 = NULL;
                y_64 = t;
                if(((x_64 != NULL) && (x_64 != y_64)))
                  _fail(y_64);
                else
                  x_64 = y_64;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(x_64));
              }
              return(t);
            }
            ATerm u_3 (ATerm t)
            {
              t = term_l_19;
              return(t);
            }
            t = ArgOption_3(t, s_3, t_3, u_3);
            ;
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            {
              ATerm v_3 (ATerm t)
              {
                ATerm z_64 = NULL;
                z_64 = t;
                n_64 :
                if(!(match_string(z_64, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm w_3 (ATerm t)
              {
                t = term_q_19;
                t = set_config_0(t);
                t = term_r_19;
                return(t);
              }
              ATerm x_3 (ATerm t)
              {
                t = term_s_19;
                return(t);
              }
              t = Option_3(t, v_3, w_3, x_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm n_65 = NULL;
    n_65 = t;
    c_65 :
    if(!(match_string(n_65, "-o")))
      {
        if(!(match_string(n_65, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    ATerm q_65 = NULL;
    ATerm v_19;
    v_19 = t;
    {
      ATerm o_65 = NULL;
      ATerm p_65 = NULL;
      p_65 = t;
      if(((o_65 != NULL) && (o_65 != p_65)))
        _fail(p_65);
      else
        o_65 = p_65;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_19, not_null(o_65));
        t = set_config_0(t);
      }
    }
    t = v_19;
    {
      ATerm r_65 = NULL;
      r_65 = t;
      if(((q_65 != NULL) && (q_65 != r_65)))
        _fail(r_65);
      else
        q_65 = r_65;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_65));
    }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_f_20;
    return(t);
  }
  t = ArgOption_3(t, y_3, z_3, a_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
      {
        ATerm b_4 (ATerm t)
        {
          ATerm v_65 = NULL;
          v_65 = t;
          u_65 :
          if(!(match_string(v_65, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm c_4 (ATerm t)
        {
          t = term_j_20;
          t = set_config_0(t);
          t = term_k_20;
          return(t);
        }
        ATerm d_4 (ATerm t)
        {
          t = term_l_20;
          return(t);
        }
        t = Option_3(t, b_4, c_4, d_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL;
  b_66 = t;
  z_65 :
  if(match_string(b_66, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(b_66) == AT_LIST) && !(ATisEmpty(b_66))))
        {
          c_66 = ATgetFirst((ATermList) b_66);
          d_66 = (ATerm) ATgetNext((ATermList) b_66);
          a_66 :
          if(((ATgetType(d_66) == AT_LIST) && !(ATisEmpty(d_66))))
            {
              e_66 = ATgetFirst((ATermList) d_66);
              f_66 = (ATerm) ATgetNext((ATermList) d_66);
              {
                ATerm j_66 = NULL;
                ATerm m_20;
                m_20 = t;
                {
                  t = not_null(c_66);
                  t = j_0(t);
                }
                t = m_20;
                {
                  ATerm k_66 = NULL;
                  t = not_null(e_66);
                  {
                    t = l_0(t);
                    {
                      k_66 = t;
                      if(((j_66 != NULL) && (j_66 != k_66)))
                        _fail(k_66);
                      else
                        j_66 = k_66;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_66)), not_null(j_66));
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
  ATerm e_4 (ATerm t)
  {
    ATerm r_66 = NULL;
    r_66 = t;
    o_66 :
    if(!(match_string(r_66, "-i")))
      {
        if(!(match_string(r_66, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    ATerm w_66 = NULL;
    ATerm n_20;
    n_20 = t;
    {
      ATerm s_66 = NULL;
      ATerm v_66 = NULL;
      v_66 = t;
      if(((s_66 != NULL) && (s_66 != v_66)))
        _fail(v_66);
      else
        s_66 = v_66;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_20, not_null(s_66));
        t = set_config_0(t);
      }
    }
    t = n_20;
    {
      ATerm z_66 = NULL;
      z_66 = t;
      if(((w_66 != NULL) && (w_66 != z_66)))
        _fail(z_66);
      else
        w_66 = z_66;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_66));
    }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = term_t_20;
    return(t);
  }
  t = ArgOption_3(t, e_4, f_4, g_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm u_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(y_20);
    }
  else
    {
      t = u_20;
      {
        ATerm a_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(d_21);
          }
        else
          {
            t = a_21;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm e_67 = NULL;
  t = report_run_time_0(t);
  {
    ATerm f_67 = NULL;
    t = term_x_9;
    {
      t = whoami_0(t);
      {
        f_67 = t;
        if(((e_67 != NULL) && (e_67 != f_67)))
          _fail(f_67);
        else
          e_67 = f_67;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_14, (ATerm) ATinsert(ATinsert(ATempty, term_e_21), not_null(e_67)));
      {
        t = printnl_0(t);
        {
          t = term_i_14;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_f_21;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm i_67 = NULL;
  i_67 = t;
  t = SSL_TicksToSeconds(not_null(i_67));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL;
  n_67 = t;
  m_67 :
  if(match_cons(n_67, sym__2))
    {
      o_67 = ATgetArgument(n_67, 0);
      p_67 = ATgetArgument(n_67, 1);
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(o_67), not_null(p_67));
            ;
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            t = SSL_addr(not_null(o_67), not_null(p_67));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm y_93 (ATerm), ATerm z_93 (ATerm))
{
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_93(t);
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      {
        ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL;
        w_67 = t;
        v_67 :
        if(((ATgetType(w_67) == AT_LIST) && !(ATisEmpty(w_67))))
          {
            x_67 = ATgetFirst((ATermList) w_67);
            y_67 = (ATerm) ATgetNext((ATermList) w_67);
            {
              ATerm b_68 = NULL;
              ATerm c_68 = NULL;
              t = not_null(y_67);
              {
                t = foldr_2(t, y_93, z_93);
                {
                  c_68 = t;
                  if(((b_68 != NULL) && (b_68 != c_68)))
                    _fail(c_68);
                  else
                    b_68 = c_68;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_67), not_null(b_68));
                t = z_93(t);
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
ATerm crush_2 (ATerm t, ATerm r_97 (ATerm), ATerm s_97 (ATerm))
{
  ATerm j_68 = NULL;
  ATerm l_68 = NULL;
  j_68 = t;
  {
    ATerm m_68 = NULL;
    ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL;
    t = not_null(j_68);
    {
      m_68 = t;
      {
        t = SSL_explode_term(not_null(m_68));
        {
          o_68 = t;
          i_68 :
          if(match_cons(o_68, sym__2))
            {
              p_68 = ATgetArgument(o_68, 0);
              q_68 = ATgetArgument(o_68, 1);
              if(((l_68 != NULL) && (l_68 != q_68)))
                _fail(q_68);
              else
                l_68 = q_68;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(l_68);
      t = foldr_2(t, r_97, s_97);
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
    ATerm h_4 (ATerm t)
    {
      t = term_c_19;
      return(t);
    }
    t = crush_2(t, h_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL;
  w_68 = t;
  v_68 :
  if(match_cons(w_68, sym__2))
    {
      x_68 = ATgetArgument(w_68, 0);
      y_68 = ATgetArgument(w_68, 1);
      {
        ATerm k_21;
        k_21 = t;
        {
          ATerm l_21 = t;
          int m_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(x_68), not_null(y_68));
              ;
              LocalPopChoice(m_21);
            }
          else
            {
              t = l_21;
              t = SSL_gtr(not_null(x_68), not_null(y_68));
            }
        }
        t = k_21;
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
  ATerm e_69 = NULL;
  ATerm n_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL;
      f_69 = t;
      d_69 :
      if(match_cons(f_69, sym__2))
        {
          g_69 = ATgetArgument(f_69, 0);
          h_69 = ATgetArgument(f_69, 1);
          {
            if(((e_69 != NULL) && (e_69 != g_69)))
              _fail(g_69);
            else
              e_69 = g_69;
            if(((e_69 != NULL) && (e_69 != h_69)))
              _fail(h_69);
            else
              e_69 = h_69;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(t_21);
    }
  else
    {
      t = n_21;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm m_101 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    ATerm u_21;
    u_21 = t;
    {
      ATerm k_69 = NULL;
      ATerm l_69 = NULL;
      t = term_p_15;
      {
        t = get_config_0(t);
        {
          l_69 = t;
          if(((k_69 != NULL) && (k_69 != l_69)))
            _fail(l_69);
          else
            k_69 = l_69;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_69), term_i_14);
        t = geq_0(t);
      }
    }
    t = u_21;
    t = m_101(t);
    return(t);
  }
  t = try_1(t, i_4);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm p_69 = NULL,r_69 = NULL;
    ATerm v_21;
    v_21 = t;
    {
      ATerm q_69 = NULL;
      t = run_time_0(t);
      {
        q_69 = t;
        if(((p_69 != NULL) && (p_69 != q_69)))
          _fail(q_69);
        else
          p_69 = q_69;
      }
    }
    t = v_21;
    {
      ATerm s_69 = NULL;
      t = term_x_9;
      {
        t = whoami_0(t);
        {
          s_69 = t;
          if(((r_69 != NULL) && (r_69 != s_69)))
            _fail(s_69);
          else
            r_69 = s_69;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_22), not_null(p_69)), term_w_21), not_null(r_69)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, j_4);
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
  ATerm z_69 = NULL;
  z_69 = t;
  y_69 :
  if(match_cons(z_69, sym_Version_0))
    {
      ATerm b_70 = NULL,d_70 = NULL;
      ATerm c_22;
      c_22 = t;
      {
        ATerm c_70 = NULL;
        t = SSLgetAnnotations(not_null(z_69));
        {
          c_70 = t;
          if(((b_70 != NULL) && (b_70 != c_70)))
            _fail(c_70);
          else
            b_70 = c_70;
        }
      }
      t = c_22;
      {
        ATerm e_70 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(b_70));
        {
          e_70 = t;
          if(((d_70 != NULL) && (d_70 != e_70)))
            _fail(e_70);
          else
            d_70 = e_70;
        }
        t = not_null(d_70);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm j_104 (ATerm))
{
  ATerm e_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_22;
      t = get_config_0(t);
      ;
      LocalPopChoice(h_22);
    }
  else
    {
      t = e_22;
      {
        ATerm k_4 (ATerm t)
        {
          ATerm j_22 = t;
          int k_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(k_22);
            }
          else
            {
              t = j_22;
              {
                ATerm l_22 = t;
                int m_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(m_22);
                  }
                else
                  {
                    t = l_22;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, k_4);
      }
    }
  t = j_104(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm j_70 = NULL;
  j_70 = t;
  t = SSL_table_create(not_null(j_70));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm n_70 = NULL;
  n_70 = t;
  {
    ATerm n_22;
    n_22 = t;
    {
      t = term_o_22;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_o_22, term_p_22, not_null(n_70));
          t = table_put_0(t);
        }
      }
    }
    t = n_22;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm r_70 = NULL;
  r_70 = t;
  t = SSL_table_destroy(not_null(r_70));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_70 = NULL;
  x_70 = t;
  t = SSL_exit(not_null(x_70));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_106 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm i_71 = NULL,j_71 = NULL,p_71 = NULL;
  p_71 = t;
  f_71 :
  if(((ATgetType(p_71) == AT_LIST) && !(ATisEmpty(p_71))))
    {
      i_71 = ATgetFirst((ATermList) p_71);
      j_71 = (ATerm) ATgetNext((ATermList) p_71);
      {
        ATerm y_71 = NULL;
        t = not_null(j_71);
        {
          ATerm q_22;
          q_22 = t;
          {
            ATerm z_71 = NULL,h_72 = NULL,j_72 = NULL;
            ATerm r_22;
            r_22 = t;
            {
              ATerm g_72 = NULL;
              t = e_0(t);
              {
                g_72 = t;
                if(((z_71 != NULL) && (z_71 != g_72)))
                  _fail(g_72);
                else
                  z_71 = g_72;
              }
            }
            t = r_22;
            {
              ATerm i_72 = NULL;
              t = not_null(i_71);
              {
                t = d_0(t);
                {
                  i_72 = t;
                  if(((h_72 != NULL) && (h_72 != i_72)))
                    _fail(i_72);
                  else
                    h_72 = i_72;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(z_71)), not_null(h_72));
                {
                  j_72 = t;
                  if(((y_71 != NULL) && (y_71 != j_72)))
                    _fail(j_72);
                  else
                    y_71 = j_72;
                }
              }
            }
          }
          t = q_22;
          {
            ATerm l_4 (ATerm t)
            {
              t = not_null(y_71);
              return(t);
            }
            t = reverse_acc_2(t, d_0, l_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(p_71) == AT_LIST) && ATisEmpty(p_71)))
        {
          {
            t = term_x_9;
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
  ATerm m_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, m_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm j_106 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_79 (ATerm))
{
  ATerm x_72 = NULL,y_72 = NULL;
  x_72 = t;
  w_72 :
  if(match_cons(x_72, sym_Program_1))
    {
      y_72 = ATgetArgument(x_72, 0);
      {
        ATerm b_73 = NULL,d_73 = NULL;
        ATerm c_73 = NULL;
        t = SSLgetAnnotations(not_null(x_72));
        {
          c_73 = t;
          if(((b_73 != NULL) && (b_73 != c_73)))
            _fail(c_73);
          else
            b_73 = c_73;
        }
        {
          t = not_null(y_72);
          {
            ATerm f_73 = NULL;
            t = r_79(t);
            {
              d_73 = t;
              {
                ATerm g_73 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(d_73)), not_null(b_73));
                {
                  g_73 = t;
                  if(((f_73 != NULL) && (f_73 != g_73)))
                    _fail(g_73);
                  else
                    f_73 = g_73;
                }
                t = not_null(f_73);
              }
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
  ATerm p_73 = NULL;
  ATerm s_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_73 = NULL;
      t = term_f_21;
      {
        t = get_config_0(t);
        {
          q_73 = t;
          if(((p_73 != NULL) && (p_73 != q_73)))
            _fail(q_73);
          else
            p_73 = q_73;
        }
      }
      ;
      LocalPopChoice(y_22);
    }
  else
    {
      t = s_22;
      {
        ATerm n_4 (ATerm t)
        {
          ATerm o_4 (ATerm t)
          {
            ATerm r_73 = NULL;
            r_73 = t;
            if(((p_73 != NULL) && (p_73 != r_73)))
              _fail(r_73);
            else
              p_73 = r_73;
            return(t);
          }
          t = Program_1(t, o_4);
          return(t);
        }
        t = option_defined_1(t, n_4);
      }
    }
  {
    ATerm p_4 (ATerm t)
    {
      ATerm q_4 (ATerm t)
      {
        t = not_null(p_73);
        return(t);
      }
      t = short_description_1(t, q_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, p_4);
    {
      t = term_z_22;
      {
        t = echo_0(t);
        {
          t = term_f_23;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm r_4 (ATerm t)
                {
                  ATerm s_73 = NULL;
                  ATerm t_73 = NULL;
                  t_73 = t;
                  if(((s_73 != NULL) && (s_73 != t_73)))
                    _fail(t_73);
                  else
                    s_73 = t_73;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_73)), term_h_23);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, r_4);
                {
                  ATerm s_4 (ATerm t)
                  {
                    ATerm u_73 = NULL;
                    ATerm v_73 = NULL;
                    ATerm t_4 (ATerm t)
                    {
                      t = not_null(p_73);
                      return(t);
                    }
                    t = long_description_1(t, t_4);
                    {
                      v_73 = t;
                      if(((u_73 != NULL) && (u_73 != v_73)))
                        _fail(v_73);
                      else
                        u_73 = v_73;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(u_73)), term_j_23);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, s_4);
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
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm s_79 (ATerm))
{
  ATerm j_74 = NULL,k_74 = NULL;
  j_74 = t;
  i_74 :
  if(match_cons(j_74, sym_Undefined_1))
    {
      k_74 = ATgetArgument(j_74, 0);
      {
        ATerm n_74 = NULL,p_74 = NULL;
        ATerm o_74 = NULL;
        t = SSLgetAnnotations(not_null(j_74));
        {
          o_74 = t;
          if(((n_74 != NULL) && (n_74 != o_74)))
            _fail(o_74);
          else
            n_74 = o_74;
        }
        {
          t = not_null(k_74);
          {
            ATerm r_74 = NULL;
            t = s_79(t);
            {
              p_74 = t;
              {
                ATerm s_74 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_74)), not_null(n_74));
                {
                  s_74 = t;
                  if(((r_74 != NULL) && (r_74 != s_74)))
                    _fail(s_74);
                  else
                    r_74 = s_74;
                }
                t = not_null(r_74);
              }
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
ATerm fetch_1 (ATerm t, ATerm h_88 (ATerm))
{
  ATerm x_74 (ATerm t)
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_88, _id);
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        t = Cons_2(t, _id, x_74);
      }
    return(t);
  }
  t = x_74(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_105 (ATerm))
{
  t = fetch_1(t, j_105);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm z_74 = NULL,a_75 = NULL,b_75 = NULL;
  z_74 = t;
  y_74 :
  if(((ATgetType(z_74) == AT_LIST) && ATisEmpty(z_74)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(z_74) == AT_LIST) && !(ATisEmpty(z_74))))
        {
          a_75 = ATgetFirst((ATermList) z_74);
          b_75 = (ATerm) ATgetNext((ATermList) z_74);
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
  ATerm q_23;
  q_23 = t;
  {
    ATerm e_75 = NULL;
    ATerm h_75 = NULL;
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        {
          ATerm f_75 = NULL;
          ATerm g_75 = NULL;
          g_75 = t;
          if(((f_75 != NULL) && (f_75 != g_75)))
            _fail(g_75);
          else
            f_75 = g_75;
          t = (ATerm) ATinsert(ATempty, not_null(f_75));
        }
      }
    {
      h_75 = t;
      if(((e_75 != NULL) && (e_75 != h_75)))
        _fail(h_75);
      else
        e_75 = h_75;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_16, not_null(e_75));
      t = printnl_0(t);
    }
  }
  t = q_23;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_f_21;
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
  ATerm t_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = t_23;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_75 = NULL;
  o_75 = t;
  n_75 :
  if(match_cons(o_75, sym_Help_0))
    {
      ATerm q_75 = NULL,s_75 = NULL;
      ATerm a_24;
      a_24 = t;
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
      t = a_24;
      {
        ATerm t_75 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(q_75));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm m_80 (ATerm))
{
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_80(t);
      ;
      LocalPopChoice(c_24);
    }
  else
    {
      t = b_24;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_4 (ATerm t)
      {
        ATerm z_75 = NULL;
        z_75 = t;
        x_75 :
        if(!(match_string(z_75, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm v_4 (ATerm t)
      {
        t = term_k_24;
        t = set_config_0(t);
        return(t);
      }
      ATerm w_4 (ATerm t)
      {
        t = term_l_24;
        return(t);
      }
      t = Option_3(t, u_4, v_4, w_4);
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
      {
        ATerm x_4 (ATerm t)
        {
          ATerm a_76 = NULL;
          a_76 = t;
          y_75 :
          if(!(match_string(a_76, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm y_4 (ATerm t)
        {
          t = term_k_24;
          {
            t = set_config_0(t);
            {
              t = term_q_24;
              t = set_config_0(t);
            }
          }
          t = term_s_24;
          return(t);
        }
        ATerm z_4 (ATerm t)
        {
          t = term_v_24;
          return(t);
        }
        t = Option_3(t, x_4, y_4, z_4);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL;
  d_76 = t;
  c_76 :
  if(match_cons(d_76, sym__2))
    {
      e_76 = ATgetArgument(d_76, 0);
      f_76 = ATgetArgument(d_76, 1);
      t = SSL_table_get(not_null(e_76), not_null(f_76));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL;
  m_76 = t;
  l_76 :
  if(match_cons(m_76, sym__3))
    {
      n_76 = ATgetArgument(m_76, 0);
      o_76 = ATgetArgument(m_76, 1);
      p_76 = ATgetArgument(m_76, 2);
      {
        ATerm w_24;
        w_24 = t;
        {
          ATerm t_76 = NULL;
          ATerm u_76 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_76), not_null(o_76));
          {
            ATerm x_24 = t;
            int y_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(y_24);
              }
            else
              {
                t = x_24;
                t = (ATerm) ATempty;
              }
            {
              u_76 = t;
              if(((t_76 != NULL) && (t_76 != u_76)))
                _fail(u_76);
              else
                t_76 = u_76;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_76), not_null(o_76), (ATerm) ATinsert(CheckATermList(not_null(t_76)), not_null(p_76)));
            t = table_put_0(t);
          }
        }
        t = w_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm o_106 (ATerm))
{
  ATerm y_76 = NULL;
  ATerm z_76 = NULL;
  t = term_x_9;
  {
    t = o_106(t);
    {
      z_76 = t;
      if(((y_76 != NULL) && (y_76 != z_76)))
        _fail(z_76);
      else
        y_76 = z_76;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_a_23, term_b_23, not_null(y_76));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL;
  f_77 = t;
  e_77 :
  if(match_string(f_77, "register-usage-info"))
    {
      t = register_usage_1(t, c_0);
    }
  else
    {
      if(((ATgetType(f_77) == AT_LIST) && !(ATisEmpty(f_77))))
        {
          g_77 = ATgetFirst((ATermList) f_77);
          h_77 = (ATerm) ATgetNext((ATermList) f_77);
          {
            ATerm k_77 = NULL;
            ATerm z_24;
            z_24 = t;
            {
              t = not_null(g_77);
              t = a_0(t);
            }
            t = z_24;
            {
              ATerm l_77 = NULL;
              t = term_x_9;
              {
                t = b_0(t);
                {
                  l_77 = t;
                  if(((k_77 != NULL) && (k_77 != l_77)))
                    _fail(l_77);
                  else
                    k_77 = l_77;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(h_77)), not_null(k_77));
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
  ATerm a_5 (ATerm t)
  {
    ATerm q_77 = NULL;
    q_77 = t;
    p_77 :
    if(!(match_string(q_77, "--help")))
      {
        if(!(match_string(q_77, "-h")))
          {
            if(!(match_string(q_77, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = term_a_25;
    {
      t = set_config_0(t);
      t = term_b_25;
    }
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = term_c_25;
    return(t);
  }
  t = Option_3(t, a_5, b_5, c_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL,v_77 = NULL;
  t_77 = t;
  s_77 :
  if(((ATgetType(t_77) == AT_LIST) && !(ATisEmpty(t_77))))
    {
      u_77 = ATgetFirst((ATermList) t_77);
      v_77 = (ATerm) ATgetNext((ATermList) t_77);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_77)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_77)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL;
  b_78 = t;
  a_78 :
  if(match_cons(b_78, sym__2))
    {
      c_78 = ATgetArgument(b_78, 0);
      d_78 = ATgetArgument(b_78, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_15, not_null(c_78), not_null(d_78));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_106 (ATerm))
{
  ATerm d_25;
  d_25 = t;
  {
    ATerm d_5 (ATerm t)
    {
      t = term_j_25;
      t = m_106(t);
      return(t);
    }
    t = try_1(t, d_5);
  }
  t = d_25;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm l_78 = NULL;
      ATerm l_25;
      l_25 = t;
      {
        ATerm j_78 = NULL;
        ATerm k_78 = NULL;
        k_78 = t;
        if(((j_78 != NULL) && (j_78 != k_78)))
          _fail(k_78);
        else
          j_78 = k_78;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_21, not_null(j_78));
          t = set_config_0(t);
        }
      }
      t = l_25;
      {
        ATerm m_78 = NULL;
        m_78 = t;
        if(((l_78 != NULL) && (l_78 != m_78)))
          _fail(m_78);
        else
          l_78 = m_78;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_78));
      }
      return(t);
    }
    ATerm f_5 (ATerm t)
    {
      ATerm o_25 = t;
      int q_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_25 = t;
          int s_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(s_25);
            }
          else
            {
              t = r_25;
              {
                t = m_106(t);
                t = Cons_2(t, _id, f_5);
              }
            }
          ;
          LocalPopChoice(q_25);
        }
      else
        {
          t = o_25;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, e_5, f_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm s_78 = NULL,t_78 = NULL,u_78 = NULL;
  ATerm t_25;
  t_25 = t;
  {
    ATerm v_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL;
    v_78 = t;
    r_78 :
    if(match_cons(v_78, sym__3))
      {
        w_78 = ATgetArgument(v_78, 0);
        x_78 = ATgetArgument(v_78, 1);
        y_78 = ATgetArgument(v_78, 2);
        {
          if(((s_78 != NULL) && (s_78 != w_78)))
            _fail(w_78);
          else
            s_78 = w_78;
          {
            if(((t_78 != NULL) && (t_78 != x_78)))
              _fail(x_78);
            else
              t_78 = x_78;
            {
              if(((u_78 != NULL) && (u_78 != y_78)))
                _fail(y_78);
              else
                u_78 = y_78;
              t = SSL_table_put(not_null(s_78), not_null(t_78), not_null(u_78));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = t_25;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_106 (ATerm))
{
  ATerm b_79 = NULL;
  ATerm u_25;
  u_25 = t;
  {
    t = term_v_25;
    t = table_put_0(t);
  }
  t = u_25;
  {
    ATerm g_5 (ATerm t)
    {
      ATerm w_25 = t;
      int x_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_106(t);
          ;
          LocalPopChoice(x_25);
        }
      else
        {
          t = w_25;
          {
            ATerm b_26 = t;
            int c_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(c_26);
              }
            else
              {
                t = b_26;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, g_5);
    {
      ATerm h_5 (ATerm t)
      {
        ATerm g_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_26;
            k_26 = t;
            {
              ATerm l_26 = t;
              int m_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_i_22;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(m_26);
                }
              else
                {
                  t = l_26;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = k_26;
            {
              t = system_usage_0(t);
              {
                t = term_c_19;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(j_26);
          }
        else
          {
            t = g_26;
            {
              ATerm n_26 = t;
              int r_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_26;
                  s_26 = t;
                  {
                    t = term_f_24;
                    t = get_config_0(t);
                  }
                  t = s_26;
                  {
                    t = system_about_0(t);
                    {
                      t = term_c_19;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(r_26);
                }
              else
                {
                  t = n_26;
                  {
                    ATerm i_5 (ATerm t)
                    {
                      ATerm j_5 (ATerm t)
                      {
                        ATerm c_79 = NULL;
                        c_79 = t;
                        if(((b_79 != NULL) && (b_79 != c_79)))
                          _fail(c_79);
                        else
                          b_79 = c_79;
                        return(t);
                      }
                      t = Undefined_1(t, j_5);
                      return(t);
                    }
                    t = option_defined_1(t, i_5);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_f_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_79)), term_t_26));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_i_14;
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
      t = try_1(t, h_5);
      {
        ATerm u_26;
        u_26 = t;
        {
          t = term_a_23;
          t = table_destroy_0(t);
        }
        t = u_26;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm n_104 (ATerm), ATerm o_104 (ATerm))
{
  t = parse_options_1(t, l_104);
  {
    t = store_options_0(t);
    {
      t = n_104(t);
      {
        ATerm v_26 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, m_104);
            ;
            LocalPopChoice(b_27);
          }
        else
          {
            t = v_26;
            {
              ATerm c_27 = t;
              int k_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_104(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(k_27);
                }
              else
                {
                  t = c_27;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm d_104 (ATerm))
{
  ATerm k_5 (ATerm t)
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_104(t);
        ;
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, a_104);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, k_5, c_104, d_104, l_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm w_103 (ATerm))
{
  ATerm m_5 (ATerm t)
  {
    ATerm n_5 (ATerm t)
    {
      ATerm o_27;
      o_27 = t;
      {
        ATerm f_79 = NULL;
        ATerm g_79 = NULL;
        t = term_f_21;
        {
          t = get_config_0(t);
          {
            g_79 = t;
            if(((f_79 != NULL) && (f_79 != g_79)))
              _fail(g_79);
            else
              f_79 = g_79;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_14, (ATerm) ATinsert(ATempty, not_null(f_79)));
          t = printnl_0(t);
        }
      }
      t = o_27;
      return(t);
    }
    t = if_verbose2_1(t, n_5);
    return(t);
  }
  t = iowrap_4(t, u_103, v_103, w_103, m_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm s_103 (ATerm), ATerm t_103 (ATerm))
{
  t = iowrap_3(t, s_103, t_103, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm p_103 (ATerm))
{
  ATerm o_5 (ATerm t)
  {
    t = _2(t, _id, p_103);
    return(t);
  }
  t = iowrap_2(t, o_5, _fail);
  return(t);
}
ATerm const_prop_io_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm q_5 (ATerm t)
    {
      ATerm r_5 (ATerm t)
      {
        t = Signature_1(t, _id);
        return(t);
      }
      ATerm s_5 (ATerm t)
      {
        ATerm t_5 (ATerm t)
        {
          ATerm u_5 (ATerm t)
          {
            t = map_1(t, const_prop_0);
            return(t);
          }
          t = Strategies_1(t, u_5);
          return(t);
        }
        t = Cons_2(t, t_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, r_5, s_5);
      return(t);
    }
    t = Specification_1(t, q_5);
    return(t);
  }
  t = iowrap_1(t, p_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = const_prop_io_0(t);
  return(t);
}
