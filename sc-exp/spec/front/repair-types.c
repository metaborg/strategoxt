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
  init_constant_terms();
}
ATerm term_l_20;
ATerm term_o_19;
ATerm term_x_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_c_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_i_15;
ATerm term_c_15;
ATerm term_p_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_n_13;
ATerm term_i_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_n_11;
ATerm term_i_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_x_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_p_10;
ATerm term_b_10;
ATerm term_y_9;
ATerm term_q_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_f_8;
ATerm term_c_8;
ATerm term_w_7;
ATerm term_z_6;
ATerm term_w_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_u_5;
ATerm term_r_5;
void init_constant_terms (void)
{
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: argument '", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("' of ", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" '", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("' starts with constant type", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__2, term_f_8, term_x_10);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_10);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym__2, term_u_11, term_r_6);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__2, term_o_12, term_r_6);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym__2, term_x_15, term_y_15);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym__2, term_i_17, term_r_6);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym__2, term_t_17, term_r_6);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym__2, term_p_14, term_r_6);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym__3, term_x_15, term_y_15, (ATerm) ATempty);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm explanation_0 (ATerm);
ATerm RepairVarDec_2 (ATerm, ATerm e_78 (ATerm), ATerm f_78 (ATerm));
ATerm RepairDefinition_0 (ATerm);
ATerm sometd_1 (ATerm, ATerm m_81 (ATerm));
ATerm try_1 (ATerm, ATerm q_82 (ATerm));
ATerm _2 (ATerm, ATerm r_63 (ATerm), ATerm s_63 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm p_86 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm r_102 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm n_101 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm p_104 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm z_100 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm k_83 (ATerm), ATerm l_83 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm y_90 (ATerm), ATerm z_90 (ATerm));
ATerm crush_2 (ATerm, ATerm w_88 (ATerm), ATerm x_88 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm q_102 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm n_105 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_107 (ATerm));
ATerm map_1 (ATerm, ATerm z_85 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_107 (ATerm));
ATerm Program_1 (ATerm, ATerm y_77 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm z_77 (ATerm));
ATerm fetch_1 (ATerm, ATerm j_86 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_106 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_107 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm a_65 (ATerm), ATerm b_65 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_107 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_107 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm s_105 (ATerm));
ATerm iowrap_4 (ATerm, ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm h_105 (ATerm));
ATerm iowrap_3 (ATerm, ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm a_105 (ATerm));
ATerm iowrap_2 (ATerm, ATerm w_104 (ATerm), ATerm x_104 (ATerm));
ATerm iowrap_1 (ATerm, ATerm t_104 (ATerm));
ATerm repair_types_0 (ATerm);
ATerm main_0 (ATerm);
ATerm explanation_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATempty, term_u_5));
  t = printnl_0(t);
  return(t);
}
ATerm RepairVarDec_2 (ATerm t, ATerm e_78 (ATerm), ATerm f_78 (ATerm))
{
  ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL;
  z_1 = t;
  g_1 :
  if(match_cons(z_1, sym_VarDec_2))
    {
      a_2 = ATgetArgument(z_1, 0);
      b_2 = ATgetArgument(z_1, 1);
      h_1 :
      if(match_cons(b_2, sym_FunType_2))
        {
          c_2 = ATgetArgument(b_2, 0);
          k_2 = ATgetArgument(b_2, 1);
          s_1 :
          if(((ATgetType(c_2) == AT_LIST) && !(ATisEmpty(c_2))))
            {
              d_2 = ATgetFirst((ATermList) c_2);
              f_2 = (ATerm) ATgetNext((ATermList) c_2);
              t_1 :
              if(match_cons(d_2, sym_ConstType_1))
                {
                  e_2 = ATgetArgument(d_2, 0);
                  u_1 :
                  if(((ATgetType(f_2) == AT_LIST) && !(ATisEmpty(f_2))))
                    {
                      g_2 = ATgetFirst((ATermList) f_2);
                      j_2 = (ATerm) ATgetNext((ATermList) f_2);
                      y_1 :
                      if(match_cons(g_2, sym_FunType_2))
                        {
                          h_2 = ATgetArgument(g_2, 0);
                          i_2 = ATgetArgument(g_2, 1);
                          {
                            ATerm t_2 = NULL;
                            ATerm v_5;
                            v_5 = t;
                            {
                              ATerm p_2 = NULL,r_2 = NULL;
                              ATerm a_6;
                              a_6 = t;
                              {
                                ATerm q_2 = NULL;
                                t = e_78(t);
                                {
                                  q_2 = t;
                                  if(((p_2 != NULL) && (p_2 != q_2)))
                                    _fail(q_2);
                                  else
                                    p_2 = q_2;
                                }
                              }
                              t = a_6;
                              {
                                ATerm s_2 = NULL;
                                t = f_78(t);
                                {
                                  s_2 = t;
                                  if(((r_2 != NULL) && (r_2 != s_2)))
                                    _fail(s_2);
                                  else
                                    r_2 = s_2;
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_6), not_null(r_2)), term_d_6), not_null(p_2)), term_c_6), not_null(a_2)), term_b_6));
                                  t = printnl_0(t);
                                }
                              }
                            }
                            t = v_5;
                            {
                              ATerm u_2 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(f_2), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, not_null(e_2))));
                              {
                                t = conc_0(t);
                                {
                                  u_2 = t;
                                  if(((t_2 != NULL) && (t_2 != u_2)))
                                    _fail(u_2);
                                  else
                                    t_2 = u_2;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(a_2), (ATerm) ATmakeAppl(sym_FunType_2, not_null(t_2), not_null(k_2)));
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
  return(t);
}
ATerm RepairDefinition_0 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL;
  j_3 = t;
  h_3 :
  if(match_cons(j_3, sym_RDefT_4))
    {
      k_3 = ATgetArgument(j_3, 0);
      l_3 = ATgetArgument(j_3, 1);
      m_3 = ATgetArgument(j_3, 2);
      i_3 = ATgetArgument(j_3, 3);
      {
        ATerm r_3 = NULL;
        ATerm s_3 = NULL;
        t = not_null(l_3);
        {
          ATerm c_0 (ATerm t)
          {
            ATerm e_0 (ATerm t)
            {
              ATerm f_0 (ATerm t)
              {
                t = term_g_6;
                return(t);
              }
              ATerm h_0 (ATerm t)
              {
                t = not_null(k_3);
                return(t);
              }
              t = RepairVarDec_2(t, f_0, h_0);
              return(t);
            }
            t = try_1(t, e_0);
            return(t);
          }
          t = map_1(t, c_0);
          {
            s_3 = t;
            if(((r_3 != NULL) && (r_3 != s_3)))
              _fail(s_3);
            else
              r_3 = s_3;
          }
        }
        t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(k_3), not_null(r_3), not_null(m_3), not_null(i_3));
      }
    }
  else
    {
      if(match_cons(j_3, sym_RDef_3))
        {
          k_3 = ATgetArgument(j_3, 0);
          l_3 = ATgetArgument(j_3, 1);
          m_3 = ATgetArgument(j_3, 2);
          {
            ATerm w_3 = NULL;
            ATerm x_3 = NULL;
            t = not_null(l_3);
            {
              ATerm m_0 (ATerm t)
              {
                ATerm n_0 (ATerm t)
                {
                  ATerm o_0 (ATerm t)
                  {
                    t = term_g_6;
                    return(t);
                  }
                  ATerm p_0 (ATerm t)
                  {
                    t = not_null(k_3);
                    return(t);
                  }
                  t = RepairVarDec_2(t, o_0, p_0);
                  return(t);
                }
                t = try_1(t, n_0);
                return(t);
              }
              t = map_1(t, m_0);
              {
                x_3 = t;
                if(((w_3 != NULL) && (w_3 != x_3)))
                  _fail(x_3);
                else
                  w_3 = x_3;
              }
            }
            t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(k_3), not_null(w_3), not_null(m_3));
          }
        }
      else
        {
          if(match_cons(j_3, sym_SDefT_4))
            {
              k_3 = ATgetArgument(j_3, 0);
              l_3 = ATgetArgument(j_3, 1);
              m_3 = ATgetArgument(j_3, 2);
              i_3 = ATgetArgument(j_3, 3);
              {
                ATerm c_4 = NULL;
                ATerm d_4 = NULL;
                t = not_null(l_3);
                {
                  ATerm q_0 (ATerm t)
                  {
                    ATerm r_0 (ATerm t)
                    {
                      ATerm s_0 (ATerm t)
                      {
                        t = term_h_6;
                        return(t);
                      }
                      ATerm t_0 (ATerm t)
                      {
                        t = not_null(k_3);
                        return(t);
                      }
                      t = RepairVarDec_2(t, s_0, t_0);
                      return(t);
                    }
                    t = try_1(t, r_0);
                    return(t);
                  }
                  t = map_1(t, q_0);
                  {
                    d_4 = t;
                    if(((c_4 != NULL) && (c_4 != d_4)))
                      _fail(d_4);
                    else
                      c_4 = d_4;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(k_3), not_null(c_4), not_null(m_3), not_null(i_3));
              }
            }
          else
            {
              if(match_cons(j_3, sym_SDef_3))
                {
                  k_3 = ATgetArgument(j_3, 0);
                  l_3 = ATgetArgument(j_3, 1);
                  m_3 = ATgetArgument(j_3, 2);
                  {
                    ATerm h_4 = NULL;
                    ATerm i_4 = NULL;
                    t = not_null(l_3);
                    {
                      ATerm u_0 (ATerm t)
                      {
                        ATerm v_0 (ATerm t)
                        {
                          ATerm w_0 (ATerm t)
                          {
                            t = term_h_6;
                            return(t);
                          }
                          ATerm x_0 (ATerm t)
                          {
                            t = not_null(k_3);
                            return(t);
                          }
                          t = RepairVarDec_2(t, w_0, x_0);
                          return(t);
                        }
                        t = try_1(t, v_0);
                        return(t);
                      }
                      t = map_1(t, u_0);
                      {
                        i_4 = t;
                        if(((h_4 != NULL) && (h_4 != i_4)))
                          _fail(i_4);
                        else
                          h_4 = i_4;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_3), not_null(h_4), not_null(m_3));
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
ATerm sometd_1 (ATerm t, ATerm m_81 (ATerm))
{
  ATerm r_4 (ATerm t)
  {
    ATerm m_6 = t;
    int n_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_81(t);
        ;
        LocalPopChoice(n_6);
      }
    else
      {
        t = m_6;
        t = _some(t, r_4);
      }
    return(t);
  }
  t = r_4(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_82 (ATerm))
{
  ATerm o_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_82(t);
      ;
      LocalPopChoice(p_6);
    }
  else
    {
      t = o_6;
      {
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm r_63 (ATerm), ATerm s_63 (ATerm))
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
  y_4 = t;
  x_4 :
  if(match_cons(y_4, sym__2))
    {
      z_4 = ATgetArgument(y_4, 0);
      a_5 = ATgetArgument(y_4, 1);
      {
        ATerm e_5 = NULL,g_5 = NULL;
        ATerm f_5 = NULL;
        t = SSLgetAnnotations(not_null(y_4));
        {
          f_5 = t;
          if(((e_5 != NULL) && (e_5 != f_5)))
            _fail(f_5);
          else
            e_5 = f_5;
        }
        {
          t = not_null(z_4);
          {
            ATerm i_5 = NULL;
            t = r_63(t);
            {
              g_5 = t;
              {
                t = not_null(a_5);
                {
                  ATerm k_5 = NULL;
                  t = s_63(t);
                  {
                    i_5 = t;
                    {
                      ATerm l_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_5), not_null(i_5)), not_null(e_5));
                      {
                        l_5 = t;
                        if(((k_5 != NULL) && (k_5 != l_5)))
                          _fail(l_5);
                        else
                          k_5 = l_5;
                      }
                      t = not_null(k_5);
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
  ATerm q_6;
  q_6 = t;
  {
    ATerm s_5 = NULL;
    ATerm t_5 = NULL;
    t = term_r_6;
    {
      t = whoami_0(t);
      {
        t_5 = t;
        if(((s_5 != NULL) && (s_5 != t_5)))
          _fail(t_5);
        else
          s_5 = t_5;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_6), not_null(s_5)), term_s_6));
      {
        t = printnl_0(t);
        {
          t = term_z_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = q_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL;
  x_5 = t;
  w_5 :
  if(match_cons(x_5, sym__2))
    {
      y_5 = ATgetArgument(x_5, 0);
      z_5 = ATgetArgument(x_5, 1);
      {
        ATerm d_7;
        d_7 = t;
        t = SSL_printnl(not_null(y_5), not_null(z_5));
        t = d_7;
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
  ATerm e_6 = NULL;
  e_6 = t;
  t = SSL_implode_string(not_null(e_6));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_7 = t;
  int f_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(f_7);
    }
  else
    {
      t = e_7;
      {
        ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL;
        j_6 = t;
        i_6 :
        if(((ATgetType(j_6) == AT_LIST) && !(ATisEmpty(j_6))))
          {
            k_6 = ATgetFirst((ATermList) j_6);
            l_6 = (ATerm) ATgetNext((ATermList) j_6);
            {
              t = not_null(k_6);
              {
                ATerm y_0 (ATerm t)
                {
                  t = not_null(l_6);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, y_0);
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
  ATerm v_6 = NULL;
  ATerm x_6 = NULL;
  v_6 = t;
  {
    ATerm y_6 = NULL;
    ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL;
    t = not_null(v_6);
    {
      y_6 = t;
      {
        t = SSL_explode_term(not_null(y_6));
        {
          a_7 = t;
          t_6 :
          if(match_cons(a_7, sym__2))
            {
              b_7 = ATgetArgument(a_7, 0);
              c_7 = ATgetArgument(a_7, 1);
              u_6 :
              if(match_string(b_7, ""))
                {
                  if(((x_6 != NULL) && (x_6 != c_7)))
                    _fail(c_7);
                  else
                    x_6 = c_7;
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
      t = not_null(x_6);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm p_86 (ATerm))
{
  ATerm g_7 (ATerm t)
  {
    ATerm h_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, g_7);
        ;
        LocalPopChoice(m_7);
      }
    else
      {
        t = h_7;
        {
          t = Nil_0(t);
          t = p_86(t);
        }
      }
    return(t);
  }
  t = g_7(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL;
  j_7 = t;
  i_7 :
  if(match_cons(j_7, sym__2))
    {
      k_7 = ATgetArgument(j_7, 0);
      l_7 = ATgetArgument(j_7, 1);
      {
        t = not_null(k_7);
        {
          ATerm z_0 (ATerm t)
          {
            t = not_null(l_7);
            return(t);
          }
          t = at_end_1(t, z_0);
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
  ATerm n_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(o_7);
    }
  else
    {
      t = n_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm q_7 = NULL;
  q_7 = t;
  t = SSL_explode_string(not_null(q_7));
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
  ATerm p_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(r_7);
    }
  else
    {
      t = p_7;
      {
        ATerm s_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, a_1);
            ;
            LocalPopChoice(t_7);
          }
        else
          {
            t = s_7;
            {
              ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
              z_7 = t;
              y_7 :
              if(match_cons(z_7, sym_Path_1))
                {
                  a_8 = ATgetArgument(z_7, 0);
                  t = not_null(a_8);
                }
              else
                {
                  if(match_cons(z_7, sym_Var_1))
                    {
                      a_8 = ATgetArgument(z_7, 0);
                      {
                        t = not_null(a_8);
                        {
                          ATerm u_7 = t;
                          int v_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(v_7);
                            }
                          else
                            {
                              t = u_7;
                              {
                                ATerm b_1 (ATerm t)
                                {
                                  t = term_w_7;
                                  return(t);
                                }
                                t = debug_1(t, b_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(z_7, sym_Prefix_2))
                        {
                          a_8 = ATgetArgument(z_7, 0);
                          b_8 = ATgetArgument(z_7, 1);
                          {
                            ATerm g_8 = NULL,i_8 = NULL;
                            ATerm x_7;
                            x_7 = t;
                            {
                              ATerm h_8 = NULL;
                              t = not_null(a_8);
                              {
                                t = eval_config_0(t);
                                {
                                  h_8 = t;
                                  if(((g_8 != NULL) && (g_8 != h_8)))
                                    _fail(h_8);
                                  else
                                    g_8 = h_8;
                                }
                              }
                            }
                            t = x_7;
                            {
                              ATerm j_8 = NULL;
                              t = not_null(b_8);
                              {
                                t = eval_config_0(t);
                                {
                                  j_8 = t;
                                  if(((i_8 != NULL) && (i_8 != j_8)))
                                    _fail(j_8);
                                  else
                                    i_8 = j_8;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_8), not_null(i_8));
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
  ATerm r_8 = NULL;
  r_8 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_8, not_null(r_8));
    {
      t = table_get_0(t);
      {
        ATerm c_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm d_8;
            d_8 = t;
            {
              ATerm t_8 = NULL;
              ATerm u_8 = NULL;
              u_8 = t;
              if(((t_8 != NULL) && (t_8 != u_8)))
                _fail(u_8);
              else
                t_8 = u_8;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_c_8, not_null(r_8), not_null(t_8));
                t = table_put_0(t);
              }
            }
            t = d_8;
          }
          return(t);
        }
        t = try_1(t, c_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm r_102 (ATerm))
{
  ATerm d_1 (ATerm t)
  {
    ATerm e_8;
    e_8 = t;
    {
      ATerm y_8 = NULL;
      ATerm z_8 = NULL;
      t = term_f_8;
      {
        t = get_config_0(t);
        {
          z_8 = t;
          if(((y_8 != NULL) && (y_8 != z_8)))
            _fail(z_8);
          else
            y_8 = z_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_8), term_k_8);
        t = geq_0(t);
      }
    }
    t = e_8;
    t = r_102(t);
    return(t);
  }
  t = try_1(t, d_1);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL;
  f_9 = t;
  d_9 :
  if(match_cons(f_9, sym__2))
    {
      g_9 = ATgetArgument(f_9, 0);
      h_9 = ATgetArgument(f_9, 1);
      e_9 :
      if(match_cons(h_9, sym_Stream_1))
        {
          i_9 = ATgetArgument(h_9, 0);
          {
            ATerm l_9 = NULL;
            t = SSL_fputc(not_null(g_9), not_null(i_9));
            {
              ATerm m_9 = NULL;
              m_9 = t;
              if(((l_9 != NULL) && (l_9 != m_9)))
                _fail(m_9);
              else
                l_9 = m_9;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_9));
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
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL;
  t_9 = t;
  r_9 :
  if(match_cons(t_9, sym__2))
    {
      u_9 = ATgetArgument(t_9, 0);
      w_9 = ATgetArgument(t_9, 1);
      s_9 :
      if(match_cons(u_9, sym_Stream_1))
        {
          v_9 = ATgetArgument(u_9, 0);
          {
            ATerm z_9 = NULL;
            t = SSL_write_term_to_stream_text(not_null(v_9), not_null(w_9));
            {
              ATerm a_10 = NULL;
              a_10 = t;
              if(((z_9 != NULL) && (z_9 != a_10)))
                _fail(a_10);
              else
                z_9 = a_10;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_9));
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
  ATerm e_1 (ATerm t)
  {
    ATerm e_10 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm f_10 = NULL;
      f_10 = t;
      if(((e_10 != NULL) && (e_10 != f_10)))
        _fail(f_10);
      else
        e_10 = f_10;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_8, not_null(e_10));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, e_1);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL;
  l_10 = t;
  j_10 :
  if(match_cons(l_10, sym__2))
    {
      m_10 = ATgetArgument(l_10, 0);
      o_10 = ATgetArgument(l_10, 1);
      k_10 :
      if(match_cons(m_10, sym_Stream_1))
        {
          n_10 = ATgetArgument(m_10, 0);
          {
            ATerm r_10 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(n_10), not_null(o_10));
            {
              ATerm s_10 = NULL;
              s_10 = t;
              if(((r_10 != NULL) && (r_10 != s_10)))
                _fail(s_10);
              else
                r_10 = s_10;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_10));
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
ATerm WriteToFile_1 (ATerm t, ATerm n_101 (ATerm))
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL;
  z_10 = t;
  y_10 :
  if(match_cons(z_10, sym__2))
    {
      a_11 = ATgetArgument(z_10, 0);
      b_11 = ATgetArgument(z_10, 1);
      {
        ATerm e_11 = NULL,g_11 = NULL;
        t = not_null(a_11);
        {
          ATerm f_11 = NULL;
          f_11 = t;
          if(((e_11 != NULL) && (e_11 != f_11)))
            _fail(f_11);
          else
            e_11 = f_11;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_11), term_m_8);
            {
              t = open_stream_0(t);
              {
                ATerm h_11 = NULL;
                h_11 = t;
                if(((g_11 != NULL) && (g_11 != h_11)))
                  _fail(h_11);
                else
                  g_11 = h_11;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_11), not_null(b_11));
                  {
                    t = n_101(t);
                    {
                      t = fclose_0(t);
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  t = WriteToFile_1(t, write_in_baf_to_stream_0);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm p_11 = NULL;
  ATerm n_8;
  n_8 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm o_8 = t;
      int p_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_1 (ATerm t)
          {
            ATerm q_11 = NULL,r_11 = NULL;
            q_11 = t;
            m_11 :
            if(match_cons(q_11, sym_Output_1))
              {
                r_11 = ATgetArgument(q_11, 0);
                if(((p_11 != NULL) && (p_11 != r_11)))
                  _fail(r_11);
                else
                  p_11 = r_11;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, i_1);
          ;
          LocalPopChoice(p_8);
        }
      else
        {
          t = o_8;
          {
            ATerm s_11 = NULL;
            t = term_q_8;
            {
              s_11 = t;
              if(((p_11 != NULL) && (p_11 != s_11)))
                _fail(s_11);
              else
                p_11 = s_11;
            }
          }
        }
      return(t);
    }
    t = _2(t, f_1, _id);
  }
  t = n_8;
  {
    ATerm j_1 (ATerm t)
    {
      ATerm k_1 (ATerm t)
      {
        t = not_null(p_11);
        return(t);
      }
      t = split_2(t, k_1, _id);
      return(t);
    }
    t = _2(t, _id, j_1);
    {
      ATerm s_8 = t;
      int v_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_1 (ATerm t)
          {
            ATerm m_1 (ATerm t)
            {
              ATerm t_11 = NULL;
              t_11 = t;
              o_11 :
              if(!(match_cons(t_11, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, m_1);
            return(t);
          }
          t = _2(t, l_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(v_8);
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
ATerm apply_strategy_1 (ATerm t, ATerm p_104 (ATerm))
{
  ATerm z_11 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
  ATerm w_8;
  w_8 = t;
  t = dtime_0(t);
  t = w_8;
  {
    t = p_104(t);
    {
      ATerm x_8;
      x_8 = t;
      {
        ATerm a_12 = NULL;
        t = dtime_0(t);
        {
          a_12 = t;
          if(((z_11 != NULL) && (z_11 != a_12)))
            _fail(a_12);
          else
            z_11 = a_12;
        }
      }
      t = x_8;
      {
        b_12 = t;
        y_11 :
        if(match_cons(b_12, sym__2))
          {
            c_12 = ATgetArgument(b_12, 0);
            d_12 = ATgetArgument(b_12, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_12)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(z_11))), not_null(d_12));
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
  ATerm l_12 = NULL,m_12 = NULL;
  ATerm s_12 (ATerm t)
  {
    t = SSL_fclose(not_null(m_12));
    return(t);
  }
  m_12 = t;
  k_12 :
  if(match_cons(m_12, sym_Stream_1))
    {
      l_12 = ATgetArgument(m_12, 0);
      {
        ATerm a_9 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(l_12));
            ;
            LocalPopChoice(b_9);
          }
        else
          {
            t = a_9;
            t = s_12(t);
          }
      }
    }
  else
    {
      t = s_12(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL;
  v_12 = t;
  u_12 :
  if(match_cons(v_12, sym_Stream_1))
    {
      w_12 = ATgetArgument(v_12, 0);
      t = SSL_read_term_from_stream(not_null(w_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm z_100 (ATerm))
{
  ATerm c_9;
  c_9 = t;
  {
    ATerm b_13 = NULL,d_13 = NULL;
    ATerm j_9;
    j_9 = t;
    {
      ATerm c_13 = NULL;
      t = z_100(t);
      {
        c_13 = t;
        if(((b_13 != NULL) && (b_13 != c_13)))
          _fail(c_13);
        else
          b_13 = c_13;
      }
    }
    t = j_9;
    {
      ATerm e_13 = NULL;
      e_13 = t;
      if(((d_13 != NULL) && (d_13 != e_13)))
        _fail(e_13);
      else
        d_13 = e_13;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_13)), not_null(b_13)));
        t = printnl_0(t);
      }
    }
  }
  t = c_9;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  k_13 = t;
  j_13 :
  if(match_cons(k_13, sym__2))
    {
      l_13 = ATgetArgument(k_13, 0);
      m_13 = ATgetArgument(k_13, 1);
      {
        ATerm p_13 = NULL;
        t = SSL_fopen(not_null(l_13), not_null(m_13));
        {
          ATerm q_13 = NULL;
          q_13 = t;
          if(((p_13 != NULL) && (p_13 != q_13)))
            _fail(q_13);
          else
            p_13 = q_13;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_13));
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
  ATerm u_13 = NULL;
  u_13 = t;
  t = SSL_is_string(not_null(u_13));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm y_13 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm z_13 = NULL;
    z_13 = t;
    if(((y_13 != NULL) && (y_13 != z_13)))
      _fail(z_13);
    else
      y_13 = z_13;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_13));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm c_14 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm d_14 = NULL;
    d_14 = t;
    if(((c_14 != NULL) && (c_14 != d_14)))
      _fail(d_14);
    else
      c_14 = d_14;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_14));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm g_14 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm h_14 = NULL;
    h_14 = t;
    if(((g_14 != NULL) && (g_14 != h_14)))
      _fail(h_14);
    else
      g_14 = h_14;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_14));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  m_14 :
  if(match_cons(n_14, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(n_14, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(n_14, sym_stdin_0))
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
  ATerm x_14 = NULL;
  ATerm z_14 = NULL,a_15 = NULL;
  x_14 = t;
  {
    ATerm b_15 = NULL;
    ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
    t = not_null(x_14);
    {
      b_15 = t;
      {
        t = SSL_explode_term(not_null(b_15));
        {
          d_15 = t;
          u_14 :
          if(match_cons(d_15, sym__2))
            {
              e_15 = ATgetArgument(d_15, 0);
              f_15 = ATgetArgument(d_15, 1);
              v_14 :
              if(match_string(e_15, ""))
                {
                  w_14 :
                  if(((ATgetType(f_15) == AT_LIST) && !(ATisEmpty(f_15))))
                    {
                      g_15 = ATgetFirst((ATermList) f_15);
                      h_15 = (ATerm) ATgetNext((ATermList) f_15);
                      {
                        if(((a_15 != NULL) && (a_15 != g_15)))
                          _fail(g_15);
                        else
                          a_15 = g_15;
                        if(((z_14 != NULL) && (z_14 != h_15)))
                          _fail(h_15);
                        else
                          z_14 = h_15;
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
    t = not_null(a_15);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
  p_15 = t;
  o_15 :
  if(match_cons(p_15, sym__2))
    {
      q_15 = ATgetArgument(p_15, 0);
      r_15 = ATgetArgument(p_15, 1);
      {
        ATerm k_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(n_9);
          }
        else
          {
            t = k_9;
            {
              ATerm o_9 = t;
              int p_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_1 (ATerm t)
                  {
                    ATerm s_15 = NULL,t_15 = NULL;
                    s_15 = t;
                    n_15 :
                    if(match_cons(s_15, sym_Path_1))
                      {
                        t_15 = ATgetArgument(s_15, 0);
                        t = not_null(t_15);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, n_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(p_9);
                }
              else
                {
                  t = o_9;
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
  ATerm b_16 = NULL;
  ATerm q_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_15 = NULL;
      ATerm a_16 = NULL;
      a_16 = t;
      if(((z_15 != NULL) && (z_15 != a_16)))
        _fail(a_16);
      else
        z_15 = a_16;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_15), term_y_9);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(x_9);
    }
  else
    {
      t = q_9;
      {
        ATerm o_1 (ATerm t)
        {
          t = term_b_10;
          return(t);
        }
        t = debug_1(t, o_1);
        _fail(t);
      }
    }
  {
    ATerm c_10;
    c_10 = t;
    {
      ATerm c_16 = NULL;
      t = read_from_stream_0(t);
      {
        c_16 = t;
        if(((b_16 != NULL) && (b_16 != c_16)))
          _fail(c_16);
        else
          b_16 = c_16;
      }
    }
    t = c_10;
    {
      t = fclose_0(t);
      t = not_null(b_16);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm k_83 (ATerm), ATerm l_83 (ATerm))
{
  ATerm h_16 = NULL,j_16 = NULL;
  ATerm d_10;
  d_10 = t;
  {
    ATerm i_16 = NULL;
    t = k_83(t);
    {
      i_16 = t;
      if(((h_16 != NULL) && (h_16 != i_16)))
        _fail(i_16);
      else
        h_16 = i_16;
    }
  }
  t = d_10;
  {
    ATerm k_16 = NULL;
    t = l_83(t);
    {
      k_16 = t;
      if(((j_16 != NULL) && (j_16 != k_16)))
        _fail(k_16);
      else
        j_16 = k_16;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_16), not_null(j_16));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm q_16 = NULL;
  ATerm g_10;
  g_10 = t;
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_1 (ATerm t)
        {
          ATerm r_16 = NULL,s_16 = NULL;
          r_16 = t;
          o_16 :
          if(match_cons(r_16, sym_Input_1))
            {
              s_16 = ATgetArgument(r_16, 0);
              if(((q_16 != NULL) && (q_16 != s_16)))
                _fail(s_16);
              else
                q_16 = s_16;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, p_1);
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        {
          ATerm t_16 = NULL;
          t = term_p_10;
          {
            t_16 = t;
            if(((q_16 != NULL) && (q_16 != t_16)))
              _fail(t_16);
            else
              q_16 = t_16;
          }
        }
      }
  }
  t = g_10;
  {
    ATerm q_1 (ATerm t)
    {
      t = not_null(q_16);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, q_1);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm y_16 = NULL;
    y_16 = t;
    w_16 :
    if(!(match_string(y_16, "-k")))
      {
        if(!(match_string(y_16, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    ATerm q_10;
    q_10 = t;
    {
      ATerm z_16 = NULL;
      ATerm a_17 = NULL;
      t = string_to_int_0(t);
      {
        a_17 = t;
        if(((z_16 != NULL) && (z_16 != a_17)))
          _fail(a_17);
        else
          z_16 = a_17;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_10, not_null(z_16));
        t = set_config_0(t);
      }
    }
    t = q_10;
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    t = term_u_10;
    return(t);
  }
  t = ArgOption_3(t, r_1, v_1, w_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm d_17 = NULL;
  d_17 = t;
  t = SSL_string_to_int(not_null(d_17));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm v_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm l_17 = NULL;
        l_17 = t;
        g_17 :
        if(!(match_string(l_17, "-S")))
          {
            if(!(match_string(l_17, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_2 (ATerm t)
      {
        t = term_c_11;
        t = set_config_0(t);
        t = term_d_11;
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        t = term_i_11;
        return(t);
      }
      t = Option_3(t, x_1, l_2, m_2);
      ;
      LocalPopChoice(w_10);
    }
  else
    {
      t = v_10;
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 (ATerm t)
            {
              ATerm m_17 = NULL;
              m_17 = t;
              h_17 :
              if(!(match_string(m_17, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm o_2 (ATerm t)
            {
              ATerm p_17 = NULL;
              ATerm l_11;
              l_11 = t;
              {
                ATerm n_17 = NULL;
                ATerm o_17 = NULL;
                t = string_to_int_0(t);
                {
                  o_17 = t;
                  if(((n_17 != NULL) && (n_17 != o_17)))
                    _fail(o_17);
                  else
                    n_17 = o_17;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_8, not_null(n_17));
                  t = set_config_0(t);
                }
              }
              t = l_11;
              {
                ATerm q_17 = NULL;
                q_17 = t;
                if(((p_17 != NULL) && (p_17 != q_17)))
                  _fail(q_17);
                else
                  p_17 = q_17;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(p_17));
              }
              return(t);
            }
            ATerm v_2 (ATerm t)
            {
              t = term_n_11;
              return(t);
            }
            t = ArgOption_3(t, n_2, o_2, v_2);
            ;
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
            {
              ATerm w_2 (ATerm t)
              {
                ATerm r_17 = NULL;
                r_17 = t;
                k_17 :
                if(!(match_string(r_17, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm x_2 (ATerm t)
              {
                t = term_v_11;
                t = set_config_0(t);
                t = term_w_11;
                return(t);
              }
              ATerm y_2 (ATerm t)
              {
                t = term_x_11;
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
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(f_12);
    }
  else
    {
      t = e_12;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm x_17 = NULL;
    x_17 = t;
    u_17 :
    if(!(match_string(x_17, "-o")))
      {
        if(!(match_string(x_17, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm a_18 = NULL;
    ATerm g_12;
    g_12 = t;
    {
      ATerm y_17 = NULL;
      ATerm z_17 = NULL;
      z_17 = t;
      if(((y_17 != NULL) && (y_17 != z_17)))
        _fail(z_17);
      else
        y_17 = z_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_12, not_null(y_17));
        t = set_config_0(t);
      }
    }
    t = g_12;
    {
      ATerm b_18 = NULL;
      b_18 = t;
      if(((a_18 != NULL) && (a_18 != b_18)))
        _fail(b_18);
      else
        a_18 = b_18;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_18));
    }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_i_12;
    return(t);
  }
  t = ArgOption_3(t, z_2, a_3, b_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm j_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(n_12);
    }
  else
    {
      t = j_12;
      {
        ATerm c_3 (ATerm t)
        {
          ATerm f_18 = NULL;
          f_18 = t;
          e_18 :
          if(!(match_string(f_18, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm d_3 (ATerm t)
        {
          t = term_p_12;
          t = set_config_0(t);
          t = term_q_12;
          return(t);
        }
        ATerm e_3 (ATerm t)
        {
          t = term_r_12;
          return(t);
        }
        t = Option_3(t, c_3, d_3, e_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL;
  l_18 = t;
  j_18 :
  if(match_string(l_18, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(l_18) == AT_LIST) && !(ATisEmpty(l_18))))
        {
          m_18 = ATgetFirst((ATermList) l_18);
          n_18 = (ATerm) ATgetNext((ATermList) l_18);
          k_18 :
          if(((ATgetType(n_18) == AT_LIST) && !(ATisEmpty(n_18))))
            {
              o_18 = ATgetFirst((ATermList) n_18);
              p_18 = (ATerm) ATgetNext((ATermList) n_18);
              {
                ATerm t_18 = NULL;
                ATerm t_12;
                t_12 = t;
                {
                  t = not_null(m_18);
                  t = j_0(t);
                }
                t = t_12;
                {
                  ATerm u_18 = NULL;
                  t = not_null(o_18);
                  {
                    t = k_0(t);
                    {
                      u_18 = t;
                      if(((t_18 != NULL) && (t_18 != u_18)))
                        _fail(u_18);
                      else
                        t_18 = u_18;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_18)), not_null(t_18));
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
    ATerm b_19 = NULL;
    b_19 = t;
    y_18 :
    if(!(match_string(b_19, "-i")))
      {
        if(!(match_string(b_19, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    ATerm e_19 = NULL;
    ATerm x_12;
    x_12 = t;
    {
      ATerm c_19 = NULL;
      ATerm d_19 = NULL;
      d_19 = t;
      if(((c_19 != NULL) && (c_19 != d_19)))
        _fail(d_19);
      else
        c_19 = d_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_12, not_null(c_19));
        t = set_config_0(t);
      }
    }
    t = x_12;
    {
      ATerm f_19 = NULL;
      f_19 = t;
      if(((e_19 != NULL) && (e_19 != f_19)))
        _fail(f_19);
      else
        e_19 = f_19;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_19));
    }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = term_z_12;
    return(t);
  }
  t = ArgOption_3(t, f_3, g_3, n_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm a_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(f_13);
    }
  else
    {
      t = a_13;
      {
        ATerm g_13 = t;
        int h_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(h_13);
          }
        else
          {
            t = g_13;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm j_19 = NULL;
  t = report_run_time_0(t);
  {
    ATerm k_19 = NULL;
    t = term_r_6;
    {
      t = whoami_0(t);
      {
        k_19 = t;
        if(((j_19 != NULL) && (j_19 != k_19)))
          _fail(k_19);
        else
          j_19 = k_19;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATinsert(ATempty, term_i_13), not_null(j_19)));
      {
        t = printnl_0(t);
        {
          t = term_z_6;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_n_13;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm n_19 = NULL;
  n_19 = t;
  t = SSL_TicksToSeconds(not_null(n_19));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  s_19 = t;
  r_19 :
  if(match_cons(s_19, sym__2))
    {
      t_19 = ATgetArgument(s_19, 0);
      u_19 = ATgetArgument(s_19, 1);
      {
        ATerm o_13 = t;
        int r_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(t_19), not_null(u_19));
            ;
            LocalPopChoice(r_13);
          }
        else
          {
            t = o_13;
            t = SSL_addr(not_null(t_19), not_null(u_19));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm y_90 (ATerm), ATerm z_90 (ATerm))
{
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_90(t);
      ;
      LocalPopChoice(t_13);
    }
  else
    {
      t = s_13;
      {
        ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
        b_20 = t;
        a_20 :
        if(((ATgetType(b_20) == AT_LIST) && !(ATisEmpty(b_20))))
          {
            c_20 = ATgetFirst((ATermList) b_20);
            d_20 = (ATerm) ATgetNext((ATermList) b_20);
            {
              ATerm g_20 = NULL;
              ATerm h_20 = NULL;
              t = not_null(d_20);
              {
                t = foldr_2(t, y_90, z_90);
                {
                  h_20 = t;
                  if(((g_20 != NULL) && (g_20 != h_20)))
                    _fail(h_20);
                  else
                    g_20 = h_20;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_20), not_null(g_20));
                t = z_90(t);
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
ATerm crush_2 (ATerm t, ATerm w_88 (ATerm), ATerm x_88 (ATerm))
{
  ATerm o_20 = NULL;
  ATerm q_20 = NULL;
  o_20 = t;
  {
    ATerm r_20 = NULL;
    ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
    t = not_null(o_20);
    {
      r_20 = t;
      {
        t = SSL_explode_term(not_null(r_20));
        {
          t_20 = t;
          n_20 :
          if(match_cons(t_20, sym__2))
            {
              u_20 = ATgetArgument(t_20, 0);
              v_20 = ATgetArgument(t_20, 1);
              if(((q_20 != NULL) && (q_20 != v_20)))
                _fail(v_20);
              else
                q_20 = v_20;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_20);
      t = foldr_2(t, w_88, x_88);
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
    ATerm o_3 (ATerm t)
    {
      t = term_x_10;
      return(t);
    }
    t = crush_2(t, o_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
  b_21 = t;
  a_21 :
  if(match_cons(b_21, sym__2))
    {
      c_21 = ATgetArgument(b_21, 0);
      d_21 = ATgetArgument(b_21, 1);
      {
        ATerm v_13;
        v_13 = t;
        {
          ATerm w_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(c_21), not_null(d_21));
              ;
              LocalPopChoice(x_13);
            }
          else
            {
              t = w_13;
              t = SSL_gtr(not_null(c_21), not_null(d_21));
            }
        }
        t = v_13;
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
  ATerm j_21 = NULL;
  ATerm a_14 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
      k_21 = t;
      i_21 :
      if(match_cons(k_21, sym__2))
        {
          l_21 = ATgetArgument(k_21, 0);
          m_21 = ATgetArgument(k_21, 1);
          {
            if(((j_21 != NULL) && (j_21 != l_21)))
              _fail(l_21);
            else
              j_21 = l_21;
            if(((j_21 != NULL) && (j_21 != m_21)))
              _fail(m_21);
            else
              j_21 = m_21;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(b_14);
    }
  else
    {
      t = a_14;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm q_102 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm e_14;
    e_14 = t;
    {
      ATerm p_21 = NULL;
      ATerm q_21 = NULL;
      t = term_f_8;
      {
        t = get_config_0(t);
        {
          q_21 = t;
          if(((p_21 != NULL) && (p_21 != q_21)))
            _fail(q_21);
          else
            p_21 = q_21;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_21), term_z_6);
        t = geq_0(t);
      }
    }
    t = e_14;
    t = q_102(t);
    return(t);
  }
  t = try_1(t, p_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm u_21 = NULL,w_21 = NULL;
    ATerm f_14;
    f_14 = t;
    {
      ATerm v_21 = NULL;
      t = run_time_0(t);
      {
        v_21 = t;
        if(((u_21 != NULL) && (u_21 != v_21)))
          _fail(v_21);
        else
          u_21 = v_21;
      }
    }
    t = f_14;
    {
      ATerm x_21 = NULL;
      t = term_r_6;
      {
        t = whoami_0(t);
        {
          x_21 = t;
          if(((w_21 != NULL) && (w_21 != x_21)))
            _fail(x_21);
          else
            w_21 = x_21;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_14), not_null(u_21)), term_i_14), not_null(w_21)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, q_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_x_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_22 = NULL;
  e_22 = t;
  d_22 :
  if(match_cons(e_22, sym_Version_0))
    {
      ATerm g_22 = NULL,i_22 = NULL;
      ATerm k_14;
      k_14 = t;
      {
        ATerm h_22 = NULL;
        t = SSLgetAnnotations(not_null(e_22));
        {
          h_22 = t;
          if(((g_22 != NULL) && (g_22 != h_22)))
            _fail(h_22);
          else
            g_22 = h_22;
        }
      }
      t = k_14;
      {
        ATerm j_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(g_22));
        {
          j_22 = t;
          if(((i_22 != NULL) && (i_22 != j_22)))
            _fail(j_22);
          else
            i_22 = j_22;
        }
        t = not_null(i_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm n_105 (ATerm))
{
  ATerm l_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_14;
      t = get_config_0(t);
      ;
      LocalPopChoice(o_14);
    }
  else
    {
      t = l_14;
      {
        ATerm t_3 (ATerm t)
        {
          ATerm q_14 = t;
          int r_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(r_14);
            }
          else
            {
              t = q_14;
              {
                ATerm s_14 = t;
                int t_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(t_14);
                  }
                else
                  {
                    t = s_14;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, t_3);
      }
    }
  t = n_105(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm o_22 = NULL;
  o_22 = t;
  t = SSL_table_create(not_null(o_22));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm s_22 = NULL;
  s_22 = t;
  {
    ATerm y_14;
    y_14 = t;
    {
      t = term_c_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_c_15, term_i_15, not_null(s_22));
          t = table_put_0(t);
        }
      }
    }
    t = y_14;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm w_22 = NULL;
  w_22 = t;
  t = SSL_table_destroy(not_null(w_22));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm a_23 = NULL;
  a_23 = t;
  t = SSL_exit(not_null(a_23));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_107 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_85 (ATerm))
{
  ATerm d_23 (ATerm t)
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
        t = Cons_2(t, z_85, d_23);
      }
    return(t);
  }
  t = d_23(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
  m_23 = t;
  j_23 :
  if(((ATgetType(m_23) == AT_LIST) && !(ATisEmpty(m_23))))
    {
      k_23 = ATgetFirst((ATermList) m_23);
      l_23 = (ATerm) ATgetNext((ATermList) m_23);
      {
        ATerm p_23 = NULL;
        t = not_null(l_23);
        {
          ATerm l_15;
          l_15 = t;
          {
            ATerm q_23 = NULL,s_23 = NULL,u_23 = NULL;
            ATerm m_15;
            m_15 = t;
            {
              ATerm r_23 = NULL;
              t = i_0(t);
              {
                r_23 = t;
                if(((q_23 != NULL) && (q_23 != r_23)))
                  _fail(r_23);
                else
                  q_23 = r_23;
              }
            }
            t = m_15;
            {
              ATerm t_23 = NULL;
              t = not_null(k_23);
              {
                t = g_0(t);
                {
                  t_23 = t;
                  if(((s_23 != NULL) && (s_23 != t_23)))
                    _fail(t_23);
                  else
                    s_23 = t_23;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(q_23)), not_null(s_23));
                {
                  u_23 = t;
                  if(((p_23 != NULL) && (p_23 != u_23)))
                    _fail(u_23);
                  else
                    p_23 = u_23;
                }
              }
            }
          }
          t = l_15;
          {
            ATerm u_3 (ATerm t)
            {
              t = not_null(p_23);
              return(t);
            }
            t = reverse_acc_2(t, g_0, u_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(m_23) == AT_LIST) && ATisEmpty(m_23)))
        {
          {
            t = term_r_6;
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
  ATerm v_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, v_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm n_107 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_77 (ATerm))
{
  ATerm f_24 = NULL,g_24 = NULL;
  f_24 = t;
  e_24 :
  if(match_cons(f_24, sym_Program_1))
    {
      g_24 = ATgetArgument(f_24, 0);
      {
        ATerm j_24 = NULL,l_24 = NULL;
        ATerm k_24 = NULL;
        t = SSLgetAnnotations(not_null(f_24));
        {
          k_24 = t;
          if(((j_24 != NULL) && (j_24 != k_24)))
            _fail(k_24);
          else
            j_24 = k_24;
        }
        {
          t = not_null(g_24);
          {
            ATerm n_24 = NULL;
            t = y_77(t);
            {
              l_24 = t;
              {
                ATerm o_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(l_24)), not_null(j_24));
                {
                  o_24 = t;
                  if(((n_24 != NULL) && (n_24 != o_24)))
                    _fail(o_24);
                  else
                    n_24 = o_24;
                }
                t = not_null(n_24);
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
  ATerm x_24 = NULL;
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_24 = NULL;
      t = term_n_13;
      {
        t = get_config_0(t);
        {
          y_24 = t;
          if(((x_24 != NULL) && (x_24 != y_24)))
            _fail(y_24);
          else
            x_24 = y_24;
        }
      }
      ;
      LocalPopChoice(v_15);
    }
  else
    {
      t = u_15;
      {
        ATerm y_3 (ATerm t)
        {
          ATerm z_3 (ATerm t)
          {
            ATerm z_24 = NULL;
            z_24 = t;
            if(((x_24 != NULL) && (x_24 != z_24)))
              _fail(z_24);
            else
              x_24 = z_24;
            return(t);
          }
          t = Program_1(t, z_3);
          return(t);
        }
        t = option_defined_1(t, y_3);
      }
    }
  {
    ATerm a_4 (ATerm t)
    {
      ATerm b_4 (ATerm t)
      {
        t = not_null(x_24);
        return(t);
      }
      t = short_description_1(t, b_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, a_4);
    {
      t = term_w_15;
      {
        t = echo_0(t);
        {
          t = term_d_16;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm e_4 (ATerm t)
                {
                  ATerm a_25 = NULL;
                  ATerm b_25 = NULL;
                  b_25 = t;
                  if(((a_25 != NULL) && (a_25 != b_25)))
                    _fail(b_25);
                  else
                    a_25 = b_25;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_25)), term_e_16);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, e_4);
                {
                  ATerm f_4 (ATerm t)
                  {
                    ATerm c_25 = NULL;
                    ATerm d_25 = NULL;
                    ATerm g_4 (ATerm t)
                    {
                      t = not_null(x_24);
                      return(t);
                    }
                    t = long_description_1(t, g_4);
                    {
                      d_25 = t;
                      if(((c_25 != NULL) && (c_25 != d_25)))
                        _fail(d_25);
                      else
                        c_25 = d_25;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(c_25)), term_f_16);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, f_4);
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
  ATerm g_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(l_16);
    }
  else
    {
      t = g_16;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_77 (ATerm))
{
  ATerm n_25 = NULL,o_25 = NULL;
  n_25 = t;
  m_25 :
  if(match_cons(n_25, sym_Undefined_1))
    {
      o_25 = ATgetArgument(n_25, 0);
      {
        ATerm r_25 = NULL,t_25 = NULL;
        ATerm s_25 = NULL;
        t = SSLgetAnnotations(not_null(n_25));
        {
          s_25 = t;
          if(((r_25 != NULL) && (r_25 != s_25)))
            _fail(s_25);
          else
            r_25 = s_25;
        }
        {
          t = not_null(o_25);
          {
            ATerm v_25 = NULL;
            t = z_77(t);
            {
              t_25 = t;
              {
                ATerm w_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_25)), not_null(r_25));
                {
                  w_25 = t;
                  if(((v_25 != NULL) && (v_25 != w_25)))
                    _fail(w_25);
                  else
                    v_25 = w_25;
                }
                t = not_null(v_25);
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
ATerm fetch_1 (ATerm t, ATerm j_86 (ATerm))
{
  ATerm b_26 (ATerm t)
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, j_86, _id);
        ;
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
        t = Cons_2(t, _id, b_26);
      }
    return(t);
  }
  t = b_26(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_106 (ATerm))
{
  t = fetch_1(t, n_106);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
  d_26 = t;
  c_26 :
  if(((ATgetType(d_26) == AT_LIST) && ATisEmpty(d_26)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(d_26) == AT_LIST) && !(ATisEmpty(d_26))))
        {
          e_26 = ATgetFirst((ATermList) d_26);
          f_26 = (ATerm) ATgetNext((ATermList) d_26);
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
  ATerm p_16;
  p_16 = t;
  {
    ATerm i_26 = NULL;
    ATerm l_26 = NULL;
    ATerm u_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(v_16);
      }
    else
      {
        t = u_16;
        {
          ATerm j_26 = NULL;
          ATerm k_26 = NULL;
          k_26 = t;
          if(((j_26 != NULL) && (j_26 != k_26)))
            _fail(k_26);
          else
            j_26 = k_26;
          t = (ATerm) ATinsert(ATempty, not_null(j_26));
        }
      }
    {
      l_26 = t;
      if(((i_26 != NULL) && (i_26 != l_26)))
        _fail(l_26);
      else
        i_26 = l_26;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_8, not_null(i_26));
      t = printnl_0(t);
    }
  }
  t = p_16;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_n_13;
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
  ATerm x_16 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(b_17);
    }
  else
    {
      t = x_16;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm s_26 = NULL;
  s_26 = t;
  r_26 :
  if(match_cons(s_26, sym_Help_0))
    {
      ATerm u_26 = NULL,w_26 = NULL;
      ATerm c_17;
      c_17 = t;
      {
        ATerm v_26 = NULL;
        t = SSLgetAnnotations(not_null(s_26));
        {
          v_26 = t;
          if(((u_26 != NULL) && (u_26 != v_26)))
            _fail(v_26);
          else
            u_26 = v_26;
        }
      }
      t = c_17;
      {
        ATerm x_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(u_26));
        {
          x_26 = t;
          if(((w_26 != NULL) && (w_26 != x_26)))
            _fail(x_26);
          else
            w_26 = x_26;
        }
        t = not_null(w_26);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_4 (ATerm t)
      {
        ATerm z_27 = NULL;
        z_27 = t;
        b_27 :
        if(!(match_string(z_27, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm k_4 (ATerm t)
      {
        t = term_j_17;
        t = set_config_0(t);
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        t = term_s_17;
        return(t);
      }
      t = Option_3(t, j_4, k_4, l_4);
      ;
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      {
        ATerm m_4 (ATerm t)
        {
          ATerm a_28 = NULL;
          a_28 = t;
          y_27 :
          if(!(match_string(a_28, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm n_4 (ATerm t)
        {
          t = term_j_17;
          {
            t = set_config_0(t);
            {
              t = term_v_17;
              t = set_config_0(t);
            }
          }
          t = term_w_17;
          return(t);
        }
        ATerm o_4 (ATerm t)
        {
          t = term_c_18;
          return(t);
        }
        t = Option_3(t, m_4, n_4, o_4);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
  d_28 = t;
  c_28 :
  if(match_cons(d_28, sym__2))
    {
      e_28 = ATgetArgument(d_28, 0);
      f_28 = ATgetArgument(d_28, 1);
      t = SSL_table_get(not_null(e_28), not_null(f_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
  m_28 = t;
  l_28 :
  if(match_cons(m_28, sym__3))
    {
      n_28 = ATgetArgument(m_28, 0);
      o_28 = ATgetArgument(m_28, 1);
      p_28 = ATgetArgument(m_28, 2);
      {
        ATerm d_18;
        d_18 = t;
        {
          ATerm t_28 = NULL;
          ATerm u_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_28), not_null(o_28));
          {
            ATerm g_18 = t;
            int h_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(h_18);
              }
            else
              {
                t = g_18;
                t = (ATerm) ATempty;
              }
            {
              u_28 = t;
              if(((t_28 != NULL) && (t_28 != u_28)))
                _fail(u_28);
              else
                t_28 = u_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_28), not_null(o_28), (ATerm) ATinsert(CheckATermList(not_null(t_28)), not_null(p_28)));
            t = table_put_0(t);
          }
        }
        t = d_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_107 (ATerm))
{
  ATerm y_28 = NULL;
  ATerm z_28 = NULL;
  t = term_r_6;
  {
    t = s_107(t);
    {
      z_28 = t;
      if(((y_28 != NULL) && (y_28 != z_28)))
        _fail(z_28);
      else
        y_28 = z_28;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_x_15, term_y_15, not_null(y_28));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
  f_29 = t;
  e_29 :
  if(match_string(f_29, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(f_29) == AT_LIST) && !(ATisEmpty(f_29))))
        {
          g_29 = ATgetFirst((ATermList) f_29);
          h_29 = (ATerm) ATgetNext((ATermList) f_29);
          {
            ATerm k_29 = NULL;
            ATerm i_18;
            i_18 = t;
            {
              t = not_null(g_29);
              t = a_0(t);
            }
            t = i_18;
            {
              ATerm l_29 = NULL;
              t = term_r_6;
              {
                t = b_0(t);
                {
                  l_29 = t;
                  if(((k_29 != NULL) && (k_29 != l_29)))
                    _fail(l_29);
                  else
                    k_29 = l_29;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(h_29)), not_null(k_29));
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
  ATerm p_4 (ATerm t)
  {
    ATerm q_29 = NULL;
    q_29 = t;
    p_29 :
    if(!(match_string(q_29, "--help")))
      {
        if(!(match_string(q_29, "-h")))
          {
            if(!(match_string(q_29, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    t = term_q_18;
    {
      t = set_config_0(t);
      t = term_r_18;
    }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    t = term_s_18;
    return(t);
  }
  t = Option_3(t, p_4, q_4, s_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
  t_29 = t;
  s_29 :
  if(((ATgetType(t_29) == AT_LIST) && !(ATisEmpty(t_29))))
    {
      u_29 = ATgetFirst((ATermList) t_29);
      v_29 = (ATerm) ATgetNext((ATermList) t_29);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_29)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_29)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm a_65 (ATerm), ATerm b_65 (ATerm))
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
  f_30 = t;
  e_30 :
  if(((ATgetType(f_30) == AT_LIST) && !(ATisEmpty(f_30))))
    {
      g_30 = ATgetFirst((ATermList) f_30);
      h_30 = (ATerm) ATgetNext((ATermList) f_30);
      {
        ATerm l_30 = NULL,n_30 = NULL;
        ATerm m_30 = NULL;
        t = SSLgetAnnotations(not_null(f_30));
        {
          m_30 = t;
          if(((l_30 != NULL) && (l_30 != m_30)))
            _fail(m_30);
          else
            l_30 = m_30;
        }
        {
          t = not_null(g_30);
          {
            ATerm p_30 = NULL;
            t = a_65(t);
            {
              n_30 = t;
              {
                t = not_null(h_30);
                {
                  ATerm r_30 = NULL;
                  t = b_65(t);
                  {
                    p_30 = t;
                    {
                      ATerm s_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(p_30)), not_null(n_30)), not_null(l_30));
                      {
                        s_30 = t;
                        if(((r_30 != NULL) && (r_30 != s_30)))
                          _fail(s_30);
                        else
                          r_30 = s_30;
                      }
                      t = not_null(r_30);
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
  ATerm e_31 = NULL;
  e_31 = t;
  d_31 :
  if(((ATgetType(e_31) == AT_LIST) && ATisEmpty(e_31)))
    {
      {
        ATerm g_31 = NULL,i_31 = NULL;
        ATerm v_18;
        v_18 = t;
        {
          ATerm h_31 = NULL;
          t = SSLgetAnnotations(not_null(e_31));
          {
            h_31 = t;
            if(((g_31 != NULL) && (g_31 != h_31)))
              _fail(h_31);
            else
              g_31 = h_31;
          }
        }
        t = v_18;
        {
          ATerm j_31 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(g_31));
          {
            j_31 = t;
            if(((i_31 != NULL) && (i_31 != j_31)))
              _fail(j_31);
            else
              i_31 = j_31;
          }
          t = not_null(i_31);
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
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
  p_31 = t;
  o_31 :
  if(match_cons(p_31, sym__2))
    {
      q_31 = ATgetArgument(p_31, 0);
      r_31 = ATgetArgument(p_31, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_8, not_null(q_31), not_null(r_31));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_107 (ATerm))
{
  ATerm w_18;
  w_18 = t;
  {
    ATerm t_4 (ATerm t)
    {
      t = term_x_18;
      t = q_107(t);
      return(t);
    }
    t = try_1(t, t_4);
  }
  t = w_18;
  {
    ATerm u_4 (ATerm t)
    {
      ATerm z_31 = NULL;
      ATerm z_18;
      z_18 = t;
      {
        ATerm x_31 = NULL;
        ATerm y_31 = NULL;
        y_31 = t;
        if(((x_31 != NULL) && (x_31 != y_31)))
          _fail(y_31);
        else
          x_31 = y_31;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_13, not_null(x_31));
          t = set_config_0(t);
        }
      }
      t = z_18;
      {
        ATerm a_32 = NULL;
        a_32 = t;
        if(((z_31 != NULL) && (z_31 != a_32)))
          _fail(a_32);
        else
          z_31 = a_32;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_31));
      }
      return(t);
    }
    ATerm v_4 (ATerm t)
    {
      ATerm a_19 = t;
      int g_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_19 = t;
          int i_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(i_19);
            }
          else
            {
              t = h_19;
              {
                t = q_107(t);
                t = Cons_2(t, _id, v_4);
              }
            }
          ;
          LocalPopChoice(g_19);
        }
      else
        {
          t = a_19;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, u_4, v_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
  ATerm l_19;
  l_19 = t;
  {
    ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
    j_32 = t;
    f_32 :
    if(match_cons(j_32, sym__3))
      {
        k_32 = ATgetArgument(j_32, 0);
        l_32 = ATgetArgument(j_32, 1);
        m_32 = ATgetArgument(j_32, 2);
        {
          if(((g_32 != NULL) && (g_32 != k_32)))
            _fail(k_32);
          else
            g_32 = k_32;
          {
            if(((h_32 != NULL) && (h_32 != l_32)))
              _fail(l_32);
            else
              h_32 = l_32;
            {
              if(((i_32 != NULL) && (i_32 != m_32)))
                _fail(m_32);
              else
                i_32 = m_32;
              t = SSL_table_put(not_null(g_32), not_null(h_32), not_null(i_32));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = l_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_107 (ATerm))
{
  ATerm p_32 = NULL;
  ATerm m_19;
  m_19 = t;
  {
    t = term_o_19;
    t = table_put_0(t);
  }
  t = m_19;
  {
    ATerm w_4 (ATerm t)
    {
      ATerm p_19 = t;
      int q_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_107(t);
          ;
          LocalPopChoice(q_19);
        }
      else
        {
          t = p_19;
          {
            ATerm v_19 = t;
            int w_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(w_19);
              }
            else
              {
                t = v_19;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, w_4);
    {
      ATerm b_5 (ATerm t)
      {
        ATerm x_19 = t;
        int y_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_19;
            z_19 = t;
            {
              ATerm e_20 = t;
              int f_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_p_14;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(f_20);
                }
              else
                {
                  t = e_20;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = z_19;
            {
              t = system_usage_0(t);
              {
                t = term_x_10;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(y_19);
          }
        else
          {
            t = x_19;
            {
              ATerm i_20 = t;
              int j_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_20;
                  k_20 = t;
                  {
                    t = term_i_17;
                    t = get_config_0(t);
                  }
                  t = k_20;
                  {
                    t = system_about_0(t);
                    {
                      t = term_x_10;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(j_20);
                }
              else
                {
                  t = i_20;
                  {
                    ATerm c_5 (ATerm t)
                    {
                      ATerm d_5 (ATerm t)
                      {
                        ATerm q_32 = NULL;
                        q_32 = t;
                        if(((p_32 != NULL) && (p_32 != q_32)))
                          _fail(q_32);
                        else
                          p_32 = q_32;
                        return(t);
                      }
                      t = Undefined_1(t, d_5);
                      return(t);
                    }
                    t = option_defined_1(t, c_5);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_32)), term_l_20));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_z_6;
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
      t = try_1(t, b_5);
      {
        ATerm m_20;
        m_20 = t;
        {
          t = term_x_15;
          t = table_destroy_0(t);
        }
        t = m_20;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm s_105 (ATerm))
{
  t = parse_options_1(t, p_105);
  {
    t = store_options_0(t);
    {
      t = r_105(t);
      {
        ATerm p_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, q_105);
            ;
            LocalPopChoice(s_20);
          }
        else
          {
            t = p_20;
            {
              ATerm w_20 = t;
              int x_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_105(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(x_20);
                }
              else
                {
                  t = w_20;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm h_105 (ATerm))
{
  ATerm h_5 (ATerm t)
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_105(t);
        ;
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, e_105);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, h_5, g_105, h_105, j_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm a_105 (ATerm))
{
  ATerm m_5 (ATerm t)
  {
    ATerm n_5 (ATerm t)
    {
      ATerm e_21;
      e_21 = t;
      {
        ATerm t_32 = NULL;
        ATerm u_32 = NULL;
        t = term_n_13;
        {
          t = get_config_0(t);
          {
            u_32 = t;
            if(((t_32 != NULL) && (t_32 != u_32)))
              _fail(u_32);
            else
              t_32 = u_32;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_5, (ATerm) ATinsert(ATempty, not_null(t_32)));
          t = printnl_0(t);
        }
      }
      t = e_21;
      return(t);
    }
    t = if_verbose2_1(t, n_5);
    return(t);
  }
  t = iowrap_4(t, y_104, z_104, a_105, m_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm w_104 (ATerm), ATerm x_104 (ATerm))
{
  t = iowrap_3(t, w_104, x_104, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm t_104 (ATerm))
{
  ATerm o_5 (ATerm t)
  {
    t = _2(t, _id, t_104);
    return(t);
  }
  t = iowrap_2(t, o_5, _fail);
  return(t);
}
ATerm repair_types_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm q_5 (ATerm t)
    {
      t = sometd_1(t, RepairDefinition_0);
      {
        ATerm f_21;
        f_21 = t;
        t = explanation_0(t);
        t = f_21;
      }
      return(t);
    }
    t = try_1(t, q_5);
    return(t);
  }
  t = iowrap_1(t, p_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = repair_types_0(t);
  return(t);
}
