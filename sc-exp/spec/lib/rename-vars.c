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
ATerm term_d_22;
ATerm term_g_21;
ATerm term_p_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_x_16;
ATerm term_q_16;
ATerm term_m_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_l_15;
ATerm term_h_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_a_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_x_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_l_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_f_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
void init_constant_terms (void)
{
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym__2, term_l_11, term_u_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym__2, term_k_14, term_w_9);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym__2, term_v_14, term_w_9);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym__2, term_w_17, term_d_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym__2, term_k_19, term_w_9);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym__2, term_r_19, term_w_9);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_w_9);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym__3, term_w_17, term_d_18, (ATerm) ATempty);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm z_77 (ATerm));
ATerm Rec_2 (ATerm, ATerm j_69 (ATerm), ATerm k_69 (ATerm));
ATerm SDef_3 (ATerm, ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm d_71 (ATerm));
ATerm Let_2 (ATerm, ATerm m_68 (ATerm), ATerm n_68 (ATerm));
ATerm sboundin_3 (ATerm, ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm c_78 (ATerm));
ATerm Bind7_0 (ATerm);
ATerm Bind5_0 (ATerm);
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm l_68 (ATerm));
ATerm srename_0 (ATerm);
ATerm ReplaceVar_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm v_77 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm t_67 (ATerm));
ATerm RDefT_4 (ATerm, ATerm k_67 (ATerm), ATerm l_67 (ATerm), ATerm m_67 (ATerm), ATerm n_67 (ATerm));
ATerm SDefT_4 (ATerm, ATerm e_71 (ATerm), ATerm f_71 (ATerm), ATerm g_71 (ATerm), ATerm h_71 (ATerm));
ATerm Scope_2 (ATerm, ATerm w_68 (ATerm), ATerm x_68 (ATerm));
ATerm tboundin_3 (ATerm, ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm y_77 (ATerm));
ATerm Bind8_0 (ATerm);
ATerm declared_vars_0 (ATerm);
ATerm Bind6_0 (ATerm);
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm i_87 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm z_89 (ATerm));
ATerm crush_3 (ATerm, ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm x_87 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm m_87 (ATerm), ATerm n_87 (ATerm));
ATerm diff_1 (ATerm, ATerm e_87 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm f_96 (ATerm), ATerm g_96 (ATerm));
ATerm for_3 (ATerm, ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm b_94 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm m_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm h_92 (ATerm), ATerm i_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm k_83 (ATerm));
ATerm zip_1 (ATerm, ATerm m_83 (ATerm));
ATerm new_0 (ATerm);
ATerm RnBinding_2 (ATerm, ATerm b_92 (ATerm), ATerm c_92 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm m_92 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm f_93 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm p_92 (ATerm));
ATerm rename_4 (ATerm, ATerm w_91 (ATerm, ATerm (ATerm)), ATerm x_91 (ATerm), ATerm y_91 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_91 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm _2 (ATerm, ATerm q_62 (ATerm), ATerm r_62 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_85 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm x_105 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm z_99 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm m_96 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm l_99 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm h_82 (ATerm), ATerm i_82 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm v_89 (ATerm), ATerm w_89 (ATerm));
ATerm crush_2 (ATerm, ATerm t_87 (ATerm), ATerm u_87 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm w_105 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_97 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm e_102 (ATerm));
ATerm map_1 (ATerm, ATerm w_84 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm d_102 (ATerm));
ATerm Program_1 (ATerm, ATerm f_76 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm g_76 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_85 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_101 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_81 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm i_102 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_63 (ATerm), ATerm a_64 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm g_102 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm f_102 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm));
ATerm iowrap_4 (ATerm, ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm e_97 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm));
ATerm iowrap_2 (ATerm, ATerm t_96 (ATerm), ATerm u_96 (ATerm));
ATerm iowrap_1 (ATerm, ATerm q_96 (ATerm));
ATerm rename_vars_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm r_3 = NULL,f_4 = NULL,g_4 = NULL;
  r_3 = t;
  q_3 :
  if(((ATgetType(r_3) == AT_LIST) && !(ATisEmpty(r_3))))
    {
      f_4 = ATgetFirst((ATermList) r_3);
      g_4 = (ATerm) ATgetNext((ATermList) r_3);
      t = not_null(f_4);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm z_77 (ATerm))
{
  ATerm n_4 = t;
  int o_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_0 (ATerm t)
      {
        t = split_2(t, _id, z_77);
        {
          ATerm e_0 (ATerm t)
          {
            ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL;
            a_5 = t;
            y_4 :
            if(match_cons(a_5, sym__2))
              {
                b_5 = ATgetArgument(a_5, 0);
                g_5 = ATgetArgument(a_5, 1);
                z_4 :
                if(match_cons(b_5, sym_SDef_3))
                  {
                    c_5 = ATgetArgument(b_5, 0);
                    d_5 = ATgetArgument(b_5, 1);
                    e_5 = ATgetArgument(b_5, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(g_5), not_null(d_5), not_null(e_5));
                  }
                else
                  {
                    if(match_cons(b_5, sym_SDefT_4))
                      {
                        c_5 = ATgetArgument(b_5, 0);
                        d_5 = ATgetArgument(b_5, 1);
                        e_5 = ATgetArgument(b_5, 2);
                        f_5 = ATgetArgument(b_5, 3);
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(g_5), not_null(d_5), not_null(e_5), not_null(f_5));
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
          t = zip_1(t, e_0);
        }
        return(t);
      }
      t = Let_2(t, c_0, _id);
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
            ATerm f_0 (ATerm t)
            {
              t = split_2(t, _id, z_77);
              t = zip_1(t, ReplaceVar_0);
              return(t);
            }
            t = SDef_3(t, _id, f_0, _id);
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
                  ATerm h_0 (ATerm t)
                  {
                    t = split_2(t, _id, z_77);
                    t = zip_1(t, ReplaceVar_0);
                    return(t);
                  }
                  t = SDefT_4(t, _id, h_0, _id, _id);
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
                        ATerm n_0 (ATerm t)
                        {
                          t = split_2(t, _id, z_77);
                          t = zip_1(t, ReplaceVar_0);
                          return(t);
                        }
                        t = RDefT_4(t, _id, n_0, _id, _id);
                        ;
                        LocalPopChoice(u_4);
                      }
                    else
                      {
                        t = t_4;
                        {
                          ATerm o_0 (ATerm t)
                          {
                            t = z_77(t);
                            t = Hd_0(t);
                            return(t);
                          }
                          t = Rec_2(t, o_0, _id);
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
ATerm Rec_2 (ATerm t, ATerm j_69 (ATerm), ATerm k_69 (ATerm))
{
  ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
  w_5 = t;
  v_5 :
  if(match_cons(w_5, sym_Rec_2))
    {
      x_5 = ATgetArgument(w_5, 0);
      y_5 = ATgetArgument(w_5, 1);
      {
        ATerm c_6 = NULL,e_6 = NULL;
        ATerm d_6 = NULL;
        t = SSLgetAnnotations(not_null(w_5));
        {
          d_6 = t;
          if(((c_6 != NULL) && (c_6 != d_6)))
            _fail(d_6);
          else
            c_6 = d_6;
        }
        {
          t = not_null(x_5);
          {
            ATerm g_6 = NULL;
            t = j_69(t);
            {
              e_6 = t;
              {
                t = not_null(y_5);
                {
                  ATerm i_6 = NULL;
                  t = k_69(t);
                  {
                    g_6 = t;
                    {
                      ATerm j_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(e_6), not_null(g_6)), not_null(c_6));
                      {
                        j_6 = t;
                        if(((i_6 != NULL) && (i_6 != j_6)))
                          _fail(j_6);
                        else
                          i_6 = j_6;
                      }
                      t = not_null(i_6);
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
ATerm SDef_3 (ATerm t, ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm d_71 (ATerm))
{
  ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL;
  w_6 = t;
  v_6 :
  if(match_cons(w_6, sym_SDef_3))
    {
      x_6 = ATgetArgument(w_6, 0);
      y_6 = ATgetArgument(w_6, 1);
      z_6 = ATgetArgument(w_6, 2);
      {
        ATerm e_7 = NULL,g_7 = NULL;
        ATerm f_7 = NULL;
        t = SSLgetAnnotations(not_null(w_6));
        {
          f_7 = t;
          if(((e_7 != NULL) && (e_7 != f_7)))
            _fail(f_7);
          else
            e_7 = f_7;
        }
        {
          t = not_null(x_6);
          {
            ATerm i_7 = NULL;
            t = b_71(t);
            {
              g_7 = t;
              {
                t = not_null(y_6);
                {
                  ATerm k_7 = NULL;
                  t = c_71(t);
                  {
                    i_7 = t;
                    {
                      t = not_null(z_6);
                      {
                        ATerm m_7 = NULL;
                        t = d_71(t);
                        {
                          k_7 = t;
                          {
                            ATerm n_7 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(g_7), not_null(i_7), not_null(k_7)), not_null(e_7));
                            {
                              n_7 = t;
                              if(((m_7 != NULL) && (m_7 != n_7)))
                                _fail(n_7);
                              else
                                m_7 = n_7;
                            }
                            t = not_null(m_7);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm m_68 (ATerm), ATerm n_68 (ATerm))
{
  ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL;
  a_8 = t;
  z_7 :
  if(match_cons(a_8, sym_Let_2))
    {
      b_8 = ATgetArgument(a_8, 0);
      c_8 = ATgetArgument(a_8, 1);
      {
        ATerm g_8 = NULL,i_8 = NULL;
        ATerm h_8 = NULL;
        t = SSLgetAnnotations(not_null(a_8));
        {
          h_8 = t;
          if(((g_8 != NULL) && (g_8 != h_8)))
            _fail(h_8);
          else
            g_8 = h_8;
        }
        {
          t = not_null(b_8);
          {
            ATerm k_8 = NULL;
            t = m_68(t);
            {
              i_8 = t;
              {
                t = not_null(c_8);
                {
                  ATerm m_8 = NULL;
                  t = n_68(t);
                  {
                    k_8 = t;
                    {
                      ATerm n_8 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(i_8), not_null(k_8)), not_null(g_8));
                      {
                        n_8 = t;
                        if(((m_8 != NULL) && (m_8 != n_8)))
                          _fail(n_8);
                        else
                          m_8 = n_8;
                      }
                      t = not_null(m_8);
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
ATerm sboundin_3 (ATerm t, ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm c_78 (ATerm))
{
  ATerm v_4 = t;
  int w_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, a_78, a_78);
      ;
      LocalPopChoice(w_4);
    }
  else
    {
      t = v_4;
      {
        ATerm x_4 = t;
        int h_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, c_78, c_78, a_78);
            ;
            LocalPopChoice(h_5);
          }
        else
          {
            t = x_4;
            {
              ATerm i_5 = t;
              int j_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4(t, c_78, c_78, c_78, a_78);
                  ;
                  LocalPopChoice(j_5);
                }
              else
                {
                  t = i_5;
                  t = Rec_2(t, c_78, a_78);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
  v_8 = t;
  u_8 :
  if(match_cons(v_8, sym_RDefT_4))
    {
      w_8 = ATgetArgument(v_8, 0);
      x_8 = ATgetArgument(v_8, 1);
      y_8 = ATgetArgument(v_8, 2);
      z_8 = ATgetArgument(v_8, 3);
      {
        t = not_null(x_8);
        t = declared_vars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind5_0 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL;
  h_9 = t;
  g_9 :
  if(match_cons(h_9, sym_SDefT_4))
    {
      i_9 = ATgetArgument(h_9, 0);
      j_9 = ATgetArgument(h_9, 1);
      k_9 = ATgetArgument(h_9, 2);
      l_9 = ATgetArgument(h_9, 3);
      {
        t = not_null(j_9);
        t = declared_vars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
  t_9 = t;
  s_9 :
  if(match_cons(t_9, sym_Rec_2))
    {
      u_9 = ATgetArgument(t_9, 0);
      v_9 = ATgetArgument(t_9, 1);
      t = (ATerm) ATinsert(ATempty, not_null(u_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
  b_10 = t;
  a_10 :
  if(match_cons(b_10, sym_SDef_3))
    {
      c_10 = ATgetArgument(b_10, 0);
      d_10 = ATgetArgument(b_10, 1);
      e_10 = ATgetArgument(b_10, 2);
      {
        t = not_null(d_10);
        t = declared_vars_0(t);
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
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym_Let_2))
    {
      p_10 = ATgetArgument(o_10, 0);
      q_10 = ATgetArgument(o_10, 1);
      {
        t = not_null(p_10);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
            t_10 = t;
            m_10 :
            if(match_cons(t_10, sym_SDef_3))
              {
                u_10 = ATgetArgument(t_10, 0);
                v_10 = ATgetArgument(t_10, 1);
                w_10 = ATgetArgument(t_10, 2);
                t = not_null(u_10);
              }
            else
              {
                if(match_cons(t_10, sym_SDefT_4))
                  {
                    u_10 = ATgetArgument(t_10, 0);
                    v_10 = ATgetArgument(t_10, 1);
                    w_10 = ATgetArgument(t_10, 2);
                    x_10 = ATgetArgument(t_10, 3);
                    t = not_null(u_10);
                  }
                else
                  {
                    _fail(t);
                  }
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
ATerm SVar_1 (ATerm t, ATerm l_68 (ATerm))
{
  ATerm i_11 = NULL,j_11 = NULL;
  i_11 = t;
  h_11 :
  if(match_cons(i_11, sym_SVar_1))
    {
      j_11 = ATgetArgument(i_11, 0);
      {
        ATerm m_11 = NULL,o_11 = NULL;
        ATerm n_11 = NULL;
        t = SSLgetAnnotations(not_null(i_11));
        {
          n_11 = t;
          if(((m_11 != NULL) && (m_11 != n_11)))
            _fail(n_11);
          else
            m_11 = n_11;
        }
        {
          t = not_null(j_11);
          {
            ATerm q_11 = NULL;
            t = l_68(t);
            {
              o_11 = t;
              {
                ATerm r_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(o_11)), not_null(m_11));
                {
                  r_11 = t;
                  if(((q_11 != NULL) && (q_11 != r_11)))
                    _fail(r_11);
                  else
                    q_11 = r_11;
                }
                t = not_null(q_11);
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
          int n_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
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
                    t = Bind3_0(t);
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
                          t = Bind5_0(t);
                          ;
                          LocalPopChoice(r_5);
                        }
                      else
                        {
                          t = q_5;
                          t = Bind7_0(t);
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, q_0, sboundin_3, spaste_1);
  return(t);
}
ATerm ReplaceVar_0 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
  a_12 = t;
  y_11 :
  if(match_cons(a_12, sym__2))
    {
      b_12 = ATgetArgument(a_12, 0);
      e_12 = ATgetArgument(a_12, 1);
      z_11 :
      if(match_cons(b_12, sym_DefaultVarDec_1))
        {
          c_12 = ATgetArgument(b_12, 0);
          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, not_null(e_12));
        }
      else
        {
          if(match_cons(b_12, sym_VarDec_2))
            {
              c_12 = ATgetArgument(b_12, 0);
              d_12 = ATgetArgument(b_12, 1);
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(e_12), not_null(d_12));
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
ATerm tpaste_1 (ATerm t, ATerm v_77 (ATerm))
{
  ATerm s_5 = t;
  int t_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, v_77, _id);
      ;
      LocalPopChoice(t_5);
    }
  else
    {
      t = s_5;
      {
        ATerm u_5 = t;
        int z_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              t = split_2(t, _id, v_77);
              t = zip_1(t, ReplaceVar_0);
              return(t);
            }
            t = SDefT_4(t, _id, _id, r_0, _id);
            ;
            LocalPopChoice(z_5);
          }
        else
          {
            t = u_5;
            {
              ATerm s_0 (ATerm t)
              {
                t = split_2(t, _id, v_77);
                t = zip_1(t, ReplaceVar_0);
                return(t);
              }
              t = RDefT_4(t, _id, _id, s_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm t_67 (ATerm))
{
  ATerm r_12 = NULL,s_12 = NULL;
  r_12 = t;
  q_12 :
  if(match_cons(r_12, sym_DynamicRules_1))
    {
      s_12 = ATgetArgument(r_12, 0);
      {
        ATerm v_12 = NULL,x_12 = NULL;
        ATerm w_12 = NULL;
        t = SSLgetAnnotations(not_null(r_12));
        {
          w_12 = t;
          if(((v_12 != NULL) && (v_12 != w_12)))
            _fail(w_12);
          else
            v_12 = w_12;
        }
        {
          t = not_null(s_12);
          {
            ATerm z_12 = NULL;
            t = t_67(t);
            {
              x_12 = t;
              {
                ATerm a_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(x_12)), not_null(v_12));
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
ATerm RDefT_4 (ATerm t, ATerm k_67 (ATerm), ATerm l_67 (ATerm), ATerm m_67 (ATerm), ATerm n_67 (ATerm))
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL;
  n_13 = t;
  m_13 :
  if(match_cons(n_13, sym_RDefT_4))
    {
      o_13 = ATgetArgument(n_13, 0);
      p_13 = ATgetArgument(n_13, 1);
      q_13 = ATgetArgument(n_13, 2);
      r_13 = ATgetArgument(n_13, 3);
      {
        ATerm x_13 = NULL,z_13 = NULL;
        ATerm y_13 = NULL;
        t = SSLgetAnnotations(not_null(n_13));
        {
          y_13 = t;
          if(((x_13 != NULL) && (x_13 != y_13)))
            _fail(y_13);
          else
            x_13 = y_13;
        }
        {
          t = not_null(o_13);
          {
            ATerm b_14 = NULL;
            t = k_67(t);
            {
              z_13 = t;
              {
                t = not_null(p_13);
                {
                  ATerm d_14 = NULL;
                  t = l_67(t);
                  {
                    b_14 = t;
                    {
                      t = not_null(q_13);
                      {
                        ATerm f_14 = NULL;
                        t = m_67(t);
                        {
                          d_14 = t;
                          {
                            t = not_null(r_13);
                            {
                              ATerm h_14 = NULL;
                              t = n_67(t);
                              {
                                f_14 = t;
                                {
                                  ATerm i_14 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, not_null(z_13), not_null(b_14), not_null(d_14), not_null(f_14)), not_null(x_13));
                                  {
                                    i_14 = t;
                                    if(((h_14 != NULL) && (h_14 != i_14)))
                                      _fail(i_14);
                                    else
                                      h_14 = i_14;
                                  }
                                  t = not_null(h_14);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm SDefT_4 (ATerm t, ATerm e_71 (ATerm), ATerm f_71 (ATerm), ATerm g_71 (ATerm), ATerm h_71 (ATerm))
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
  y_14 = t;
  x_14 :
  if(match_cons(y_14, sym_SDefT_4))
    {
      z_14 = ATgetArgument(y_14, 0);
      a_15 = ATgetArgument(y_14, 1);
      b_15 = ATgetArgument(y_14, 2);
      c_15 = ATgetArgument(y_14, 3);
      {
        ATerm i_15 = NULL,k_15 = NULL;
        ATerm j_15 = NULL;
        t = SSLgetAnnotations(not_null(y_14));
        {
          j_15 = t;
          if(((i_15 != NULL) && (i_15 != j_15)))
            _fail(j_15);
          else
            i_15 = j_15;
        }
        {
          t = not_null(z_14);
          {
            ATerm m_15 = NULL;
            t = e_71(t);
            {
              k_15 = t;
              {
                t = not_null(a_15);
                {
                  ATerm o_15 = NULL;
                  t = f_71(t);
                  {
                    m_15 = t;
                    {
                      t = not_null(b_15);
                      {
                        ATerm q_15 = NULL;
                        t = g_71(t);
                        {
                          o_15 = t;
                          {
                            t = not_null(c_15);
                            {
                              ATerm s_15 = NULL;
                              t = h_71(t);
                              {
                                q_15 = t;
                                {
                                  ATerm t_15 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(k_15), not_null(m_15), not_null(o_15), not_null(q_15)), not_null(i_15));
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
ATerm Scope_2 (ATerm t, ATerm w_68 (ATerm), ATerm x_68 (ATerm))
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL;
  h_16 = t;
  g_16 :
  if(match_cons(h_16, sym_Scope_2))
    {
      i_16 = ATgetArgument(h_16, 0);
      j_16 = ATgetArgument(h_16, 1);
      {
        ATerm n_16 = NULL,p_16 = NULL;
        ATerm o_16 = NULL;
        t = SSLgetAnnotations(not_null(h_16));
        {
          o_16 = t;
          if(((n_16 != NULL) && (n_16 != o_16)))
            _fail(o_16);
          else
            n_16 = o_16;
        }
        {
          t = not_null(i_16);
          {
            ATerm r_16 = NULL;
            t = w_68(t);
            {
              p_16 = t;
              {
                t = not_null(j_16);
                {
                  ATerm t_16 = NULL;
                  t = x_68(t);
                  {
                    r_16 = t;
                    {
                      ATerm u_16 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(p_16), not_null(r_16)), not_null(n_16));
                      {
                        u_16 = t;
                        if(((t_16 != NULL) && (t_16 != u_16)))
                          _fail(u_16);
                        else
                          t_16 = u_16;
                      }
                      t = not_null(t_16);
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
ATerm tboundin_3 (ATerm t, ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm y_77 (ATerm))
{
  ATerm a_6 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, y_77, w_77);
      ;
      LocalPopChoice(b_6);
    }
  else
    {
      t = a_6;
      {
        ATerm f_6 = t;
        int h_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4(t, y_77, y_77, y_77, w_77);
            ;
            LocalPopChoice(h_6);
          }
        else
          {
            t = f_6;
            {
              ATerm k_6 = t;
              int l_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4(t, y_77, y_77, y_77, w_77);
                  ;
                  LocalPopChoice(l_6);
                }
              else
                {
                  t = k_6;
                  t = DynamicRules_1(t, w_77);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  c_17 = t;
  b_17 :
  if(match_cons(c_17, sym_RDefT_4))
    {
      d_17 = ATgetArgument(c_17, 0);
      e_17 = ATgetArgument(c_17, 1);
      f_17 = ATgetArgument(c_17, 2);
      g_17 = ATgetArgument(c_17, 3);
      {
        t = not_null(f_17);
        t = declared_vars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declared_vars_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
    q_17 = t;
    o_17 :
    if(match_cons(q_17, sym_VarDec_2))
      {
        r_17 = ATgetArgument(q_17, 0);
        p_17 = ATgetArgument(q_17, 1);
        t = not_null(r_17);
      }
    else
      {
        if(match_cons(q_17, sym_DefaultVarDec_1))
          {
            r_17 = ATgetArgument(q_17, 0);
            t = not_null(r_17);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1(t, t_0);
  return(t);
}
ATerm Bind6_0 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  y_17 = t;
  x_17 :
  if(match_cons(y_17, sym_SDefT_4))
    {
      z_17 = ATgetArgument(y_17, 0);
      a_18 = ATgetArgument(y_17, 1);
      b_18 = ATgetArgument(y_17, 2);
      c_18 = ATgetArgument(y_17, 3);
      {
        t = not_null(b_18);
        t = declared_vars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL;
  k_18 = t;
  j_18 :
  if(match_cons(k_18, sym_DynamicRules_1))
    {
      l_18 = ATgetArgument(k_18, 0);
      {
        t = not_null(l_18);
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
  ATerm q_18 = NULL,r_18 = NULL;
  q_18 = t;
  p_18 :
  if(match_cons(q_18, sym_Var_1))
    {
      r_18 = ATgetArgument(q_18, 0);
      t = (ATerm) ATinsert(ATempty, not_null(r_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm i_87 (ATerm))
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  w_18 = t;
  v_18 :
  if(match_cons(w_18, sym__2))
    {
      x_18 = ATgetArgument(w_18, 0);
      y_18 = ATgetArgument(w_18, 1);
      {
        t = not_null(x_18);
        {
          ATerm c_19 (ATerm t)
          {
            ATerm m_6 = t;
            int n_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(y_18);
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
                      ATerm u_0 (ATerm t)
                      {
                        t = not_null(y_18);
                        return(t);
                      }
                      t = HdMember_p__2(t, i_87, u_0);
                      t = c_19(t);
                      ;
                      LocalPopChoice(p_6);
                    }
                  else
                    {
                      t = o_6;
                      t = Cons_2(t, _id, c_19);
                    }
                }
              }
            return(t);
          }
          t = c_19(t);
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
ATerm foldr_3 (ATerm t, ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm z_89 (ATerm))
{
  ATerm q_6 = t;
  int r_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_89(t);
      ;
      LocalPopChoice(r_6);
    }
  else
    {
      t = q_6;
      {
        ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
        h_19 = t;
        g_19 :
        if(((ATgetType(h_19) == AT_LIST) && !(ATisEmpty(h_19))))
          {
            i_19 = ATgetFirst((ATermList) h_19);
            j_19 = (ATerm) ATgetNext((ATermList) h_19);
            {
              ATerm m_19 = NULL,o_19 = NULL;
              ATerm s_6;
              s_6 = t;
              {
                ATerm n_19 = NULL;
                t = not_null(i_19);
                {
                  t = z_89(t);
                  {
                    n_19 = t;
                    if(((m_19 != NULL) && (m_19 != n_19)))
                      _fail(n_19);
                    else
                      m_19 = n_19;
                  }
                }
              }
              t = s_6;
              {
                ATerm p_19 = NULL;
                t = not_null(j_19);
                {
                  t = foldr_3(t, x_89, y_89, z_89);
                  {
                    p_19 = t;
                    if(((o_19 != NULL) && (o_19 != p_19)))
                      _fail(p_19);
                    else
                      o_19 = p_19;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), not_null(o_19));
                  t = y_89(t);
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
ATerm crush_3 (ATerm t, ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm x_87 (ATerm))
{
  ATerm x_19 = NULL;
  ATerm z_19 = NULL;
  x_19 = t;
  {
    ATerm a_20 = NULL;
    ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
    t = not_null(x_19);
    {
      a_20 = t;
      {
        t = SSL_explode_term(not_null(a_20));
        {
          c_20 = t;
          w_19 :
          if(match_cons(c_20, sym__2))
            {
              d_20 = ATgetArgument(c_20, 0);
              e_20 = ATgetArgument(c_20, 1);
              if(((z_19 != NULL) && (z_19 != e_20)))
                _fail(e_20);
              else
                z_19 = e_20;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_19);
      t = foldr_3(t, v_87, w_87, x_87);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
  k_20 = t;
  j_20 :
  if(match_cons(k_20, sym__2))
    {
      l_20 = ATgetArgument(k_20, 0);
      m_20 = ATgetArgument(k_20, 1);
      if(((l_20 != NULL) && (l_20 != m_20)))
        _fail(m_20);
      else
        l_20 = m_20;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm m_87 (ATerm), ATerm n_87 (ATerm))
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
  s_20 = t;
  r_20 :
  if(((ATgetType(s_20) == AT_LIST) && !(ATisEmpty(s_20))))
    {
      t_20 = ATgetFirst((ATermList) s_20);
      u_20 = (ATerm) ATgetNext((ATermList) s_20);
      {
        t = n_87(t);
        {
          ATerm v_0 (ATerm t)
          {
            ATerm x_20 = NULL;
            x_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_20), not_null(x_20));
              t = m_87(t);
            }
            return(t);
          }
          t = fetch_1(t, v_0);
        }
        t = not_null(u_20);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm e_87 (ATerm))
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
  d_21 = t;
  c_21 :
  if(match_cons(d_21, sym__2))
    {
      e_21 = ATgetArgument(d_21, 0);
      f_21 = ATgetArgument(d_21, 1);
      {
        t = not_null(e_21);
        {
          ATerm j_21 (ATerm t)
          {
            ATerm t_6 = t;
            int u_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(u_6);
              }
            else
              {
                t = t_6;
                {
                  ATerm a_7 = t;
                  int b_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_0 (ATerm t)
                      {
                        t = not_null(f_21);
                        return(t);
                      }
                      t = HdMember_p__2(t, e_87, w_0);
                      t = j_21(t);
                      ;
                      LocalPopChoice(b_7);
                    }
                  else
                    {
                      t = a_7;
                      t = Cons_2(t, _id, j_21);
                    }
                }
              }
            return(t);
          }
          t = j_21(t);
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
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  n_21 = t;
  l_21 :
  if(match_cons(n_21, sym__2))
    {
      o_21 = ATgetArgument(n_21, 0);
      p_21 = ATgetArgument(n_21, 1);
      m_21 :
      if(((ATgetType(p_21) == AT_LIST) && !(ATisEmpty(p_21))))
        {
          q_21 = ATgetFirst((ATermList) p_21);
          r_21 = (ATerm) ATgetNext((ATermList) p_21);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_21)), not_null(q_21)), not_null(r_21));
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
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
  g_22 = t;
  e_22 :
  if(((ATgetType(g_22) == AT_LIST) && !(ATisEmpty(g_22))))
    {
      h_22 = ATgetFirst((ATermList) g_22);
      k_22 = (ATerm) ATgetNext((ATermList) g_22);
      f_22 :
      if(match_cons(h_22, sym__2))
        {
          i_22 = ATgetArgument(h_22, 0);
          j_22 = ATgetArgument(h_22, 1);
          {
            ATerm o_22 = NULL,p_22 = NULL,v_22 = NULL,b_23 = NULL;
            ATerm c_7;
            c_7 = t;
            {
              ATerm q_22 = NULL;
              ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
              t = not_null(j_22);
              {
                q_22 = t;
                {
                  t = SSL_explode_term(not_null(q_22));
                  {
                    s_22 = t;
                    z_21 :
                    if(match_cons(s_22, sym__2))
                      {
                        t_22 = ATgetArgument(s_22, 0);
                        u_22 = ATgetArgument(s_22, 1);
                        {
                          if(((o_22 != NULL) && (o_22 != t_22)))
                            _fail(t_22);
                          else
                            o_22 = t_22;
                          if(((p_22 != NULL) && (p_22 != u_22)))
                            _fail(u_22);
                          else
                            p_22 = u_22;
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
            t = c_7;
            {
              ATerm d_7;
              d_7 = t;
              {
                ATerm w_22 = NULL;
                ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
                t = not_null(i_22);
                {
                  w_22 = t;
                  {
                    t = SSL_explode_term(not_null(w_22));
                    {
                      y_22 = t;
                      c_22 :
                      if(match_cons(y_22, sym__2))
                        {
                          z_22 = ATgetArgument(y_22, 0);
                          a_23 = ATgetArgument(y_22, 1);
                          {
                            if(((o_22 != NULL) && (o_22 != z_22)))
                              _fail(z_22);
                            else
                              o_22 = z_22;
                            if(((v_22 != NULL) && (v_22 != a_23)))
                              _fail(a_23);
                            else
                              v_22 = a_23;
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
              t = d_7;
              {
                ATerm c_23 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_22), not_null(p_22));
                {
                  t = zip_1(t, _id);
                  {
                    c_23 = t;
                    if(((b_23 != NULL) && (b_23 != c_23)))
                      _fail(c_23);
                    else
                      b_23 = c_23;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_23), not_null(k_22));
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
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  m_23 = t;
  k_23 :
  if(((ATgetType(m_23) == AT_LIST) && !(ATisEmpty(m_23))))
    {
      n_23 = ATgetFirst((ATermList) m_23);
      q_23 = (ATerm) ATgetNext((ATermList) m_23);
      l_23 :
      if(match_cons(n_23, sym__2))
        {
          o_23 = ATgetArgument(n_23, 0);
          p_23 = ATgetArgument(n_23, 1);
          {
            ATerm s_23 = NULL;
            if(((o_23 != NULL) && (o_23 != p_23)))
              _fail(p_23);
            else
              o_23 = p_23;
            {
              if(((s_23 != NULL) && (s_23 != q_23)))
                _fail(q_23);
              else
                s_23 = q_23;
              t = not_null(s_23);
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
ATerm while_not_2 (ATerm t, ATerm f_96 (ATerm), ATerm g_96 (ATerm))
{
  ATerm u_23 (ATerm t)
  {
    ATerm h_7 = t;
    int j_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_96(t);
        ;
        LocalPopChoice(j_7);
      }
    else
      {
        t = h_7;
        {
          t = g_96(t);
          t = u_23(t);
        }
      }
    return(t);
  }
  t = u_23(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm))
{
  t = i_96(t);
  t = while_not_2(t, j_96, k_96);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm l_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_0 (ATerm t)
      {
        ATerm w_23 = NULL;
        w_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(w_23));
        return(t);
      }
      ATerm y_0 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm z_0 (ATerm t)
      {
        ATerm p_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 (ATerm t)
            {
              ATerm r_7 = t;
              int s_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(s_7);
                }
              else
                {
                  t = r_7;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, a_1);
            ;
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, x_0, y_0, z_0);
      ;
      LocalPopChoice(o_7);
    }
  else
    {
      t = l_7;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm b_94 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm c_24 (ATerm t)
  {
    ATerm t_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_93(t);
        ;
        LocalPopChoice(u_7);
      }
    else
      {
        t = t_7;
        {
          ATerm v_7 = t;
          int w_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_24 = NULL;
              ATerm x_7;
              x_7 = t;
              {
                ATerm b_24 = NULL;
                t = a_94(t);
                {
                  b_24 = t;
                  if(((a_24 != NULL) && (a_24 != b_24)))
                    _fail(b_24);
                  else
                    a_24 = b_24;
                }
              }
              t = x_7;
              {
                ATerm b_1 (ATerm t)
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = not_null(a_24);
                    return(t);
                  }
                  t = split_2(t, c_24, d_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm c_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = b_94(t, b_1, c_24, c_1);
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, e_1, union_0, _id);
                }
              }
              ;
              LocalPopChoice(w_7);
            }
          else
            {
              t = v_7;
              {
                ATerm f_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, f_1, union_0, c_24);
              }
            }
        }
      }
    return(t);
  }
  t = c_24(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm y_7 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(d_8);
      }
    else
      {
        t = y_7;
        {
          ATerm e_8 = t;
          int f_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0(t);
              ;
              LocalPopChoice(f_8);
            }
          else
            {
              t = e_8;
              {
                ATerm j_8 = t;
                int l_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0(t);
                    ;
                    LocalPopChoice(l_8);
                  }
                else
                  {
                    t = j_8;
                    t = Bind8_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, g_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL;
  l_24 = t;
  g_24 :
  if(match_cons(l_24, sym_LRule_1))
    {
      m_24 = ATgetArgument(l_24, 0);
      h_24 :
      if(match_cons(m_24, sym_Rule_3))
        {
          i_24 = ATgetArgument(m_24, 0);
          j_24 = ATgetArgument(m_24, 1);
          k_24 = ATgetArgument(m_24, 2);
          {
            t = not_null(i_24);
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
      if(match_cons(l_24, sym_Scope_2))
        {
          m_24 = ATgetArgument(l_24, 0);
          n_24 = ATgetArgument(l_24, 1);
          t = not_null(m_24);
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
  ATerm i_25 = NULL,j_25 = NULL;
  i_25 = t;
  h_25 :
  if(match_cons(i_25, sym_Var_1))
    {
      j_25 = ATgetArgument(i_25, 0);
      {
        ATerm o_8 = t;
        int p_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_25 = NULL,o_25 = NULL;
            ATerm n_25 = NULL;
            t = SSLgetAnnotations(not_null(i_25));
            {
              n_25 = t;
              if(((m_25 != NULL) && (m_25 != n_25)))
                _fail(n_25);
              else
                m_25 = n_25;
            }
            {
              t = not_null(j_25);
              {
                ATerm q_25 = NULL;
                t = m_0(t);
                {
                  o_25 = t;
                  {
                    ATerm r_25 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(o_25)), not_null(m_25));
                    {
                      r_25 = t;
                      if(((q_25 != NULL) && (q_25 != r_25)))
                        _fail(r_25);
                      else
                        q_25 = r_25;
                    }
                    t = not_null(q_25);
                  }
                }
              }
            }
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
                  ATerm u_25 = NULL,w_25 = NULL;
                  ATerm v_25 = NULL;
                  t = SSLgetAnnotations(not_null(i_25));
                  {
                    v_25 = t;
                    if(((u_25 != NULL) && (u_25 != v_25)))
                      _fail(v_25);
                    else
                      u_25 = v_25;
                  }
                  {
                    t = not_null(j_25);
                    {
                      ATerm y_25 = NULL;
                      t = m_0(t);
                      {
                        w_25 = t;
                        {
                          ATerm z_25 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(w_25)), not_null(u_25));
                          {
                            z_25 = t;
                            if(((y_25 != NULL) && (y_25 != z_25)))
                              _fail(z_25);
                            else
                              y_25 = z_25;
                          }
                          t = not_null(y_25);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(r_8);
                }
              else
                {
                  t = q_8;
                  {
                    ATerm c_26 = NULL,e_26 = NULL;
                    ATerm d_26 = NULL;
                    t = SSLgetAnnotations(not_null(i_25));
                    {
                      d_26 = t;
                      if(((c_26 != NULL) && (c_26 != d_26)))
                        _fail(d_26);
                      else
                        c_26 = d_26;
                    }
                    {
                      t = not_null(j_25);
                      {
                        ATerm g_26 = NULL;
                        t = m_0(t);
                        {
                          e_26 = t;
                          {
                            ATerm h_26 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(e_26)), not_null(c_26));
                            {
                              h_26 = t;
                              if(((g_26 != NULL) && (g_26 != h_26)))
                                _fail(h_26);
                              else
                                g_26 = h_26;
                            }
                            t = not_null(g_26);
                          }
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
ATerm DistBinding_2 (ATerm t, ATerm h_92 (ATerm), ATerm i_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL,r_28 = NULL;
  y_26 = t;
  x_26 :
  if(match_cons(y_26, sym__3))
    {
      z_26 = ATgetArgument(y_26, 0);
      a_27 = ATgetArgument(y_26, 1);
      r_28 = ATgetArgument(y_26, 2);
      {
        t = not_null(z_26);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm v_28 = NULL;
            v_28 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), not_null(r_28));
              t = h_92(t);
            }
            return(t);
          }
          ATerm i_1 (ATerm t)
          {
            ATerm x_28 = NULL;
            x_28 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_28), not_null(a_27));
              t = h_92(t);
            }
            return(t);
          }
          t = i_92(t, h_1, i_1, _id);
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
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
  e_29 = t;
  d_29 :
  if(match_cons(e_29, sym__2))
    {
      f_29 = ATgetArgument(e_29, 0);
      g_29 = ATgetArgument(e_29, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_29)), not_null(f_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL;
  p_29 = t;
  m_29 :
  if(match_cons(p_29, sym__2))
    {
      q_29 = ATgetArgument(p_29, 0);
      t_29 = ATgetArgument(p_29, 1);
      n_29 :
      if(((ATgetType(q_29) == AT_LIST) && !(ATisEmpty(q_29))))
        {
          r_29 = ATgetFirst((ATermList) q_29);
          s_29 = (ATerm) ATgetNext((ATermList) q_29);
          o_29 :
          if(((ATgetType(t_29) == AT_LIST) && !(ATisEmpty(t_29))))
            {
              u_29 = ATgetFirst((ATermList) t_29);
              v_29 = (ATerm) ATgetNext((ATermList) t_29);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(r_29), not_null(u_29)), (ATerm) ATmakeAppl(sym__2, not_null(s_29), not_null(v_29)));
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
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
  h_30 = t;
  e_30 :
  if(match_cons(h_30, sym__2))
    {
      i_30 = ATgetArgument(h_30, 0);
      j_30 = ATgetArgument(h_30, 1);
      f_30 :
      if(((ATgetType(i_30) == AT_LIST) && ATisEmpty(i_30)))
        {
          g_30 :
          if(((ATgetType(j_30) == AT_LIST) && ATisEmpty(j_30)))
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
ATerm genzip_4 (ATerm t, ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm k_83 (ATerm))
{
  ATerm l_30 (ATerm t)
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_83(t);
        ;
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
        {
          t = i_83(t);
          {
            t = _2(t, k_83, l_30);
            t = j_83(t);
          }
        }
      }
    return(t);
  }
  t = l_30(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm m_83 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, m_83);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm b_92 (ATerm), ATerm c_92 (ATerm, ATerm (ATerm)))
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
  t_30 = t;
  s_30 :
  if(match_cons(t_30, sym__2))
    {
      u_30 = ATgetArgument(t_30, 0);
      v_30 = ATgetArgument(t_30, 1);
      {
        ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,g_31 = NULL;
        ATerm a_9;
        a_9 = t;
        {
          ATerm b_31 = NULL;
          t = not_null(u_30);
          {
            ATerm c_31 = NULL;
            t = b_92(t);
            {
              b_31 = t;
              {
                if(((y_30 != NULL) && (y_30 != b_31)))
                  _fail(b_31);
                else
                  y_30 = b_31;
                {
                  ATerm d_31 = NULL,f_31 = NULL;
                  t = map_1(t, new_0);
                  {
                    c_31 = t;
                    {
                      if(((z_30 != NULL) && (z_30 != c_31)))
                        _fail(c_31);
                      else
                        z_30 = c_31;
                      {
                        ATerm e_31 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(y_30), not_null(z_30));
                        {
                          t = zip_1(t, _id);
                          {
                            e_31 = t;
                            if(((d_31 != NULL) && (d_31 != e_31)))
                              _fail(e_31);
                            else
                              d_31 = e_31;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(d_31), not_null(v_30));
                          {
                            t = conc_0(t);
                            {
                              f_31 = t;
                              if(((a_31 != NULL) && (a_31 != f_31)))
                                _fail(f_31);
                              else
                                a_31 = f_31;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = a_9;
        {
          ATerm h_31 = NULL;
          t = not_null(u_30);
          {
            ATerm j_1 (ATerm t)
            {
              t = not_null(z_30);
              return(t);
            }
            t = c_92(t, j_1);
            {
              h_31 = t;
              if(((g_31 != NULL) && (g_31 != h_31)))
                _fail(h_31);
              else
                g_31 = h_31;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(g_31), not_null(v_30), not_null(a_31));
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
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
  r_31 = t;
  p_31 :
  if(match_cons(r_31, sym__2))
    {
      s_31 = ATgetArgument(r_31, 0);
      t_31 = ATgetArgument(r_31, 1);
      q_31 :
      if(((ATgetType(t_31) == AT_LIST) && !(ATisEmpty(t_31))))
        {
          u_31 = ATgetFirst((ATermList) t_31);
          v_31 = (ATerm) ATgetNext((ATermList) t_31);
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_31), not_null(v_31));
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
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL;
  d_32 = t;
  a_32 :
  if(match_cons(d_32, sym__2))
    {
      e_32 = ATgetArgument(d_32, 0);
      f_32 = ATgetArgument(d_32, 1);
      b_32 :
      if(((ATgetType(f_32) == AT_LIST) && !(ATisEmpty(f_32))))
        {
          g_32 = ATgetFirst((ATermList) f_32);
          n_32 = (ATerm) ATgetNext((ATermList) f_32);
          c_32 :
          if(match_cons(g_32, sym__2))
            {
              l_32 = ATgetArgument(g_32, 0);
              m_32 = ATgetArgument(g_32, 1);
              {
                ATerm p_32 = NULL;
                if(((e_32 != NULL) && (e_32 != l_32)))
                  _fail(l_32);
                else
                  e_32 = l_32;
                {
                  if(((p_32 != NULL) && (p_32 != m_32)))
                    _fail(m_32);
                  else
                    p_32 = m_32;
                  t = not_null(p_32);
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
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(c_9);
    }
  else
    {
      t = b_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm m_92 (ATerm, ATerm (ATerm)))
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
  w_32 = t;
  v_32 :
  if(match_cons(w_32, sym__2))
    {
      x_32 = ATgetArgument(w_32, 0);
      y_32 = ATgetArgument(w_32, 1);
      {
        t = not_null(x_32);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm l_1 (ATerm t)
            {
              t = not_null(y_32);
              return(t);
            }
            t = split_2(t, _id, l_1);
            t = lookup_0(t);
            return(t);
          }
          t = m_92(t, k_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm f_93 (ATerm))
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL;
  f_33 = t;
  e_33 :
  if(match_cons(f_33, sym__2))
    {
      g_33 = ATgetArgument(f_33, 0);
      h_33 = ATgetArgument(f_33, 1);
      {
        t = not_null(g_33);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm k_33 = NULL;
            k_33 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_33), not_null(h_33));
              t = f_93(t);
            }
            return(t);
          }
          t = _all(t, m_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm p_92 (ATerm))
{
  ATerm o_33 (ATerm t)
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_92(t);
        ;
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        t = all_dist_1(t, o_33);
      }
    return(t);
  }
  t = o_33(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm w_91 (ATerm, ATerm (ATerm)), ATerm x_91 (ATerm), ATerm y_91 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_91 (ATerm, ATerm (ATerm)))
{
  ATerm q_33 = NULL;
  q_33 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_33), (ATerm) ATempty);
    {
      ATerm t_33 (ATerm t)
      {
        ATerm n_1 (ATerm t)
        {
          ATerm f_9 = t;
          int m_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, w_91);
              ;
              LocalPopChoice(m_9);
            }
          else
            {
              t = f_9;
              {
                t = RnBinding_2(t, x_91, z_91);
                t = DistBinding_2(t, t_33, y_91);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, n_1);
        return(t);
      }
      t = t_33(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm n_9 = t;
    int o_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(o_9);
      }
    else
      {
        t = n_9;
        {
          ATerm p_9 = t;
          int q_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0(t);
              ;
              LocalPopChoice(q_9);
            }
          else
            {
              t = p_9;
              t = Bind8_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, Var_1, o_1, tboundin_3, tpaste_1);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm q_62 (ATerm), ATerm r_62 (ATerm))
{
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
  f_34 = t;
  e_34 :
  if(match_cons(f_34, sym__2))
    {
      g_34 = ATgetArgument(f_34, 0);
      h_34 = ATgetArgument(f_34, 1);
      {
        ATerm l_34 = NULL,n_34 = NULL;
        ATerm m_34 = NULL;
        t = SSLgetAnnotations(not_null(f_34));
        {
          m_34 = t;
          if(((l_34 != NULL) && (l_34 != m_34)))
            _fail(m_34);
          else
            l_34 = m_34;
        }
        {
          t = not_null(g_34);
          {
            ATerm p_34 = NULL;
            t = q_62(t);
            {
              n_34 = t;
              {
                t = not_null(h_34);
                {
                  ATerm r_34 = NULL;
                  t = r_62(t);
                  {
                    p_34 = t;
                    {
                      ATerm w_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(n_34), not_null(p_34)), not_null(l_34));
                      {
                        w_34 = t;
                        if(((r_34 != NULL) && (r_34 != w_34)))
                          _fail(w_34);
                        else
                          r_34 = w_34;
                      }
                      t = not_null(r_34);
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
  ATerm r_9;
  r_9 = t;
  {
    ATerm d_35 = NULL;
    ATerm e_35 = NULL;
    t = term_w_9;
    {
      t = whoami_0(t);
      {
        e_35 = t;
        if(((d_35 != NULL) && (d_35 != e_35)))
          _fail(e_35);
        else
          d_35 = e_35;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_9), not_null(d_35)), term_y_9));
      {
        t = printnl_0(t);
        {
          t = term_f_10;
          t = exit_0(t);
        }
      }
    }
  }
  t = r_9;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL;
  i_35 = t;
  h_35 :
  if(match_cons(i_35, sym__2))
    {
      j_35 = ATgetArgument(i_35, 0);
      k_35 = ATgetArgument(i_35, 1);
      {
        ATerm g_10;
        g_10 = t;
        t = SSL_printnl(not_null(j_35), not_null(k_35));
        t = g_10;
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
  ATerm p_35 = NULL;
  p_35 = t;
  t = SSL_implode_string(not_null(p_35));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      {
        ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
        u_35 = t;
        t_35 :
        if(((ATgetType(u_35) == AT_LIST) && !(ATisEmpty(u_35))))
          {
            v_35 = ATgetFirst((ATermList) u_35);
            w_35 = (ATerm) ATgetNext((ATermList) u_35);
            {
              t = not_null(v_35);
              {
                ATerm p_1 (ATerm t)
                {
                  t = not_null(w_35);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_1);
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
  ATerm p_36 = NULL;
  ATerm r_36 = NULL;
  p_36 = t;
  {
    ATerm s_36 = NULL;
    ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
    t = not_null(p_36);
    {
      s_36 = t;
      {
        t = SSL_explode_term(not_null(s_36));
        {
          u_36 = t;
          n_36 :
          if(match_cons(u_36, sym__2))
            {
              v_36 = ATgetArgument(u_36, 0);
              w_36 = ATgetArgument(u_36, 1);
              o_36 :
              if(match_string(v_36, ""))
                {
                  if(((r_36 != NULL) && (r_36 != w_36)))
                    _fail(w_36);
                  else
                    r_36 = w_36;
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
      t = not_null(r_36);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_85 (ATerm))
{
  ATerm a_37 (ATerm t)
  {
    ATerm j_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_37);
        ;
        LocalPopChoice(k_10);
      }
    else
      {
        t = j_10;
        {
          t = Nil_0(t);
          t = m_85(t);
        }
      }
    return(t);
  }
  t = a_37(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,j_37 = NULL;
  d_37 = t;
  c_37 :
  if(match_cons(d_37, sym__2))
    {
      e_37 = ATgetArgument(d_37, 0);
      j_37 = ATgetArgument(d_37, 1);
      {
        t = not_null(e_37);
        {
          ATerm q_1 (ATerm t)
          {
            t = not_null(j_37);
            return(t);
          }
          t = at_end_1(t, q_1);
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
  ATerm l_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(r_10);
    }
  else
    {
      t = l_10;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm s_37 = NULL;
  s_37 = t;
  t = SSL_explode_string(not_null(s_37));
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
  ATerm s_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(y_10);
    }
  else
    {
      t = s_10;
      {
        ATerm z_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, r_1);
            ;
            LocalPopChoice(a_11);
          }
        else
          {
            t = z_10;
            {
              ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL;
              b_38 = t;
              a_38 :
              if(match_cons(b_38, sym_Path_1))
                {
                  c_38 = ATgetArgument(b_38, 0);
                  t = not_null(c_38);
                }
              else
                {
                  if(match_cons(b_38, sym_Var_1))
                    {
                      c_38 = ATgetArgument(b_38, 0);
                      {
                        t = not_null(c_38);
                        {
                          ATerm b_11 = t;
                          int c_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(c_11);
                            }
                          else
                            {
                              t = b_11;
                              {
                                ATerm s_1 (ATerm t)
                                {
                                  t = term_d_11;
                                  return(t);
                                }
                                t = debug_1(t, s_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(b_38, sym_Prefix_2))
                        {
                          c_38 = ATgetArgument(b_38, 0);
                          d_38 = ATgetArgument(b_38, 1);
                          {
                            ATerm i_38 = NULL,k_38 = NULL;
                            ATerm e_11;
                            e_11 = t;
                            {
                              ATerm j_38 = NULL;
                              t = not_null(c_38);
                              {
                                t = eval_config_0(t);
                                {
                                  j_38 = t;
                                  if(((i_38 != NULL) && (i_38 != j_38)))
                                    _fail(j_38);
                                  else
                                    i_38 = j_38;
                                }
                              }
                            }
                            t = e_11;
                            {
                              ATerm l_38 = NULL;
                              t = not_null(d_38);
                              {
                                t = eval_config_0(t);
                                {
                                  l_38 = t;
                                  if(((k_38 != NULL) && (k_38 != l_38)))
                                    _fail(l_38);
                                  else
                                    k_38 = l_38;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_38), not_null(k_38));
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
  ATerm t_38 = NULL;
  t_38 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_11, not_null(t_38));
    {
      t = table_get_0(t);
      {
        ATerm t_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm g_11;
            g_11 = t;
            {
              ATerm v_38 = NULL;
              ATerm w_38 = NULL;
              w_38 = t;
              if(((v_38 != NULL) && (v_38 != w_38)))
                _fail(w_38);
              else
                v_38 = w_38;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_f_11, not_null(t_38), not_null(v_38));
                t = table_put_0(t);
              }
            }
            t = g_11;
          }
          return(t);
        }
        t = try_1(t, t_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm x_105 (ATerm))
{
  ATerm u_1 (ATerm t)
  {
    ATerm k_11;
    k_11 = t;
    {
      ATerm a_39 = NULL;
      ATerm b_39 = NULL;
      t = term_l_11;
      {
        t = get_config_0(t);
        {
          b_39 = t;
          if(((a_39 != NULL) && (a_39 != b_39)))
            _fail(b_39);
          else
            a_39 = b_39;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_39), term_p_11);
        t = geq_0(t);
      }
    }
    t = k_11;
    t = x_105(t);
    return(t);
  }
  t = try_1(t, u_1);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL;
  h_39 = t;
  f_39 :
  if(match_cons(h_39, sym__2))
    {
      i_39 = ATgetArgument(h_39, 0);
      j_39 = ATgetArgument(h_39, 1);
      g_39 :
      if(match_cons(j_39, sym_Stream_1))
        {
          k_39 = ATgetArgument(j_39, 0);
          {
            ATerm o_39 = NULL;
            t = SSL_fputc(not_null(i_39), not_null(k_39));
            {
              ATerm p_39 = NULL;
              p_39 = t;
              if(((o_39 != NULL) && (o_39 != p_39)))
                _fail(p_39);
              else
                o_39 = p_39;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_39));
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
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL;
  y_39 = t;
  w_39 :
  if(match_cons(y_39, sym__2))
    {
      z_39 = ATgetArgument(y_39, 0);
      b_40 = ATgetArgument(y_39, 1);
      x_39 :
      if(match_cons(z_39, sym_Stream_1))
        {
          a_40 = ATgetArgument(z_39, 0);
          {
            ATerm e_40 = NULL;
            t = SSL_write_term_to_stream_text(not_null(a_40), not_null(b_40));
            {
              ATerm f_40 = NULL;
              f_40 = t;
              if(((e_40 != NULL) && (e_40 != f_40)))
                _fail(f_40);
              else
                e_40 = f_40;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_40));
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
  ATerm v_1 (ATerm t)
  {
    ATerm j_40 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm k_40 = NULL;
      k_40 = t;
      if(((j_40 != NULL) && (j_40 != k_40)))
        _fail(k_40);
      else
        j_40 = k_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_11, not_null(j_40));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, v_1);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL;
  s_40 = t;
  o_40 :
  if(match_cons(s_40, sym__2))
    {
      t_40 = ATgetArgument(s_40, 0);
      v_40 = ATgetArgument(s_40, 1);
      p_40 :
      if(match_cons(t_40, sym_Stream_1))
        {
          u_40 = ATgetArgument(t_40, 0);
          {
            ATerm z_40 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(u_40), not_null(v_40));
            {
              ATerm a_41 = NULL;
              a_41 = t;
              if(((z_40 != NULL) && (z_40 != a_41)))
                _fail(a_41);
              else
                z_40 = a_41;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_40));
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
ATerm WriteToFile_1 (ATerm t, ATerm z_99 (ATerm))
{
  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL;
  h_41 = t;
  g_41 :
  if(match_cons(h_41, sym__2))
    {
      i_41 = ATgetArgument(h_41, 0);
      j_41 = ATgetArgument(h_41, 1);
      {
        ATerm p_41 = NULL,r_41 = NULL;
        t = not_null(i_41);
        {
          ATerm q_41 = NULL;
          q_41 = t;
          if(((p_41 != NULL) && (p_41 != q_41)))
            _fail(q_41);
          else
            p_41 = q_41;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_41), term_t_11);
            {
              t = open_stream_0(t);
              {
                ATerm s_41 = NULL;
                s_41 = t;
                if(((r_41 != NULL) && (r_41 != s_41)))
                  _fail(s_41);
                else
                  r_41 = s_41;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_41), not_null(j_41));
                  {
                    t = z_99(t);
                    {
                      t = fclose_0(t);
                      t = not_null(j_41);
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
  ATerm a_42 = NULL;
  ATerm u_11;
  u_11 = t;
  {
    ATerm w_1 (ATerm t)
    {
      ATerm v_11 = t;
      int w_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_1 (ATerm t)
          {
            ATerm b_42 = NULL,c_42 = NULL;
            b_42 = t;
            x_41 :
            if(match_cons(b_42, sym_Output_1))
              {
                c_42 = ATgetArgument(b_42, 0);
                if(((a_42 != NULL) && (a_42 != c_42)))
                  _fail(c_42);
                else
                  a_42 = c_42;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, x_1);
          ;
          LocalPopChoice(w_11);
        }
      else
        {
          t = v_11;
          {
            ATerm d_42 = NULL;
            t = term_x_11;
            {
              d_42 = t;
              if(((a_42 != NULL) && (a_42 != d_42)))
                _fail(d_42);
              else
                a_42 = d_42;
            }
          }
        }
      return(t);
    }
    t = _2(t, w_1, _id);
  }
  t = u_11;
  {
    ATerm y_1 (ATerm t)
    {
      ATerm z_1 (ATerm t)
      {
        t = not_null(a_42);
        return(t);
      }
      t = split_2(t, z_1, _id);
      return(t);
    }
    t = _2(t, _id, y_1);
    {
      ATerm f_12 = t;
      int g_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_2 (ATerm t)
          {
            ATerm b_2 (ATerm t)
            {
              ATerm e_42 = NULL;
              e_42 = t;
              z_41 :
              if(!(match_cons(e_42, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, b_2);
            return(t);
          }
          t = _2(t, a_2, WriteToBinaryFile_0);
          ;
          LocalPopChoice(g_12);
        }
      else
        {
          t = f_12;
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
ATerm apply_strategy_1 (ATerm t, ATerm m_96 (ATerm))
{
  ATerm k_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL;
  ATerm h_12;
  h_12 = t;
  t = dtime_0(t);
  t = h_12;
  {
    t = m_96(t);
    {
      ATerm i_12;
      i_12 = t;
      {
        ATerm l_42 = NULL;
        t = dtime_0(t);
        {
          l_42 = t;
          if(((k_42 != NULL) && (k_42 != l_42)))
            _fail(l_42);
          else
            k_42 = l_42;
        }
      }
      t = i_12;
      {
        m_42 = t;
        j_42 :
        if(match_cons(m_42, sym__2))
          {
            n_42 = ATgetArgument(m_42, 0);
            o_42 = ATgetArgument(m_42, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_42)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(k_42))), not_null(o_42));
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
  ATerm d_43 = NULL,e_43 = NULL;
  ATerm k_43 (ATerm t)
  {
    t = SSL_fclose(not_null(e_43));
    return(t);
  }
  e_43 = t;
  c_43 :
  if(match_cons(e_43, sym_Stream_1))
    {
      d_43 = ATgetArgument(e_43, 0);
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(d_43));
            ;
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
            t = k_43(t);
          }
      }
    }
  else
    {
      t = k_43(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm t_43 = NULL,z_43 = NULL;
  t_43 = t;
  m_43 :
  if(match_cons(t_43, sym_Stream_1))
    {
      z_43 = ATgetArgument(t_43, 0);
      t = SSL_read_term_from_stream(not_null(z_43));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm l_99 (ATerm))
{
  ATerm l_12;
  l_12 = t;
  {
    ATerm g_44 = NULL,i_44 = NULL;
    ATerm m_12;
    m_12 = t;
    {
      ATerm h_44 = NULL;
      t = l_99(t);
      {
        h_44 = t;
        if(((g_44 != NULL) && (g_44 != h_44)))
          _fail(h_44);
        else
          g_44 = h_44;
      }
    }
    t = m_12;
    {
      ATerm j_44 = NULL;
      j_44 = t;
      if(((i_44 != NULL) && (i_44 != j_44)))
        _fail(j_44);
      else
        i_44 = j_44;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_44)), not_null(g_44)));
        t = printnl_0(t);
      }
    }
  }
  t = l_12;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
  s_44 = t;
  r_44 :
  if(match_cons(s_44, sym__2))
    {
      t_44 = ATgetArgument(s_44, 0);
      u_44 = ATgetArgument(s_44, 1);
      {
        ATerm x_44 = NULL;
        t = SSL_fopen(not_null(t_44), not_null(u_44));
        {
          ATerm y_44 = NULL;
          y_44 = t;
          if(((x_44 != NULL) && (x_44 != y_44)))
            _fail(y_44);
          else
            x_44 = y_44;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_44));
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
  ATerm d_45 = NULL;
  d_45 = t;
  t = SSL_is_string(not_null(d_45));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm h_45 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm i_45 = NULL;
    i_45 = t;
    if(((h_45 != NULL) && (h_45 != i_45)))
      _fail(i_45);
    else
      h_45 = i_45;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_45));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm l_45 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm m_45 = NULL;
    m_45 = t;
    if(((l_45 != NULL) && (l_45 != m_45)))
      _fail(m_45);
    else
      l_45 = m_45;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_45));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm p_45 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm q_45 = NULL;
    q_45 = t;
    if(((p_45 != NULL) && (p_45 != q_45)))
      _fail(q_45);
    else
      p_45 = q_45;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_45));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm w_45 = NULL;
  w_45 = t;
  v_45 :
  if(match_cons(w_45, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(w_45, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(w_45, sym_stdin_0))
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
  ATerm g_46 = NULL;
  ATerm i_46 = NULL,j_46 = NULL;
  g_46 = t;
  {
    ATerm k_46 = NULL;
    ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL;
    t = not_null(g_46);
    {
      k_46 = t;
      {
        t = SSL_explode_term(not_null(k_46));
        {
          m_46 = t;
          d_46 :
          if(match_cons(m_46, sym__2))
            {
              n_46 = ATgetArgument(m_46, 0);
              o_46 = ATgetArgument(m_46, 1);
              e_46 :
              if(match_string(n_46, ""))
                {
                  f_46 :
                  if(((ATgetType(o_46) == AT_LIST) && !(ATisEmpty(o_46))))
                    {
                      p_46 = ATgetFirst((ATermList) o_46);
                      q_46 = (ATerm) ATgetNext((ATermList) o_46);
                      {
                        if(((j_46 != NULL) && (j_46 != p_46)))
                          _fail(p_46);
                        else
                          j_46 = p_46;
                        if(((i_46 != NULL) && (i_46 != q_46)))
                          _fail(q_46);
                        else
                          i_46 = q_46;
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
    t = not_null(j_46);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL;
  y_46 = t;
  x_46 :
  if(match_cons(y_46, sym__2))
    {
      z_46 = ATgetArgument(y_46, 0);
      a_47 = ATgetArgument(y_46, 1);
      {
        ATerm n_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(o_12);
          }
        else
          {
            t = n_12;
            {
              ATerm p_12 = t;
              int t_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_2 (ATerm t)
                  {
                    ATerm b_47 = NULL,c_47 = NULL;
                    b_47 = t;
                    w_46 :
                    if(match_cons(b_47, sym_Path_1))
                      {
                        c_47 = ATgetArgument(b_47, 0);
                        t = not_null(c_47);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, c_2, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(t_12);
                }
              else
                {
                  t = p_12;
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
  ATerm k_47 = NULL;
  ATerm u_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_47 = NULL;
      ATerm j_47 = NULL;
      j_47 = t;
      if(((i_47 != NULL) && (i_47 != j_47)))
        _fail(j_47);
      else
        i_47 = j_47;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_47), term_b_13);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = u_12;
      {
        ATerm d_2 (ATerm t)
        {
          t = term_c_13;
          return(t);
        }
        t = debug_1(t, d_2);
        _fail(t);
      }
    }
  {
    ATerm d_13;
    d_13 = t;
    {
      ATerm l_47 = NULL;
      t = read_from_stream_0(t);
      {
        l_47 = t;
        if(((k_47 != NULL) && (k_47 != l_47)))
          _fail(l_47);
        else
          k_47 = l_47;
      }
    }
    t = d_13;
    {
      t = fclose_0(t);
      t = not_null(k_47);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm h_82 (ATerm), ATerm i_82 (ATerm))
{
  ATerm q_47 = NULL,s_47 = NULL;
  ATerm e_13;
  e_13 = t;
  {
    ATerm r_47 = NULL;
    t = h_82(t);
    {
      r_47 = t;
      if(((q_47 != NULL) && (q_47 != r_47)))
        _fail(r_47);
      else
        q_47 = r_47;
    }
  }
  t = e_13;
  {
    ATerm t_47 = NULL;
    t = i_82(t);
    {
      t_47 = t;
      if(((s_47 != NULL) && (s_47 != t_47)))
        _fail(t_47);
      else
        s_47 = t_47;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_47), not_null(s_47));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm z_47 = NULL;
  ATerm f_13;
  f_13 = t;
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_2 (ATerm t)
        {
          ATerm a_48 = NULL,b_48 = NULL;
          a_48 = t;
          x_47 :
          if(match_cons(a_48, sym_Input_1))
            {
              b_48 = ATgetArgument(a_48, 0);
              if(((z_47 != NULL) && (z_47 != b_48)))
                _fail(b_48);
              else
                z_47 = b_48;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, e_2);
        ;
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
        {
          ATerm c_48 = NULL;
          t = term_i_13;
          {
            c_48 = t;
            if(((z_47 != NULL) && (z_47 != c_48)))
              _fail(c_48);
            else
              z_47 = c_48;
          }
        }
      }
  }
  t = f_13;
  {
    ATerm f_2 (ATerm t)
    {
      t = not_null(z_47);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, f_2);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm h_48 = NULL;
    h_48 = t;
    f_48 :
    if(!(match_string(h_48, "-k")))
      {
        if(!(match_string(h_48, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    ATerm j_13;
    j_13 = t;
    {
      ATerm i_48 = NULL;
      ATerm j_48 = NULL;
      t = string_to_int_0(t);
      {
        j_48 = t;
        if(((i_48 != NULL) && (i_48 != j_48)))
          _fail(j_48);
        else
          i_48 = j_48;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_13, not_null(i_48));
        t = set_config_0(t);
      }
    }
    t = j_13;
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = term_l_13;
    return(t);
  }
  t = ArgOption_3(t, g_2, h_2, i_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_48 = NULL;
  m_48 = t;
  t = SSL_string_to_int(not_null(m_48));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_2 (ATerm t)
      {
        ATerm u_48 = NULL;
        u_48 = t;
        p_48 :
        if(!(match_string(u_48, "-S")))
          {
            if(!(match_string(u_48, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_2 (ATerm t)
      {
        t = term_v_13;
        t = set_config_0(t);
        t = term_w_13;
        return(t);
      }
      ATerm l_2 (ATerm t)
      {
        t = term_a_14;
        return(t);
      }
      t = Option_3(t, j_2, k_2, l_2);
      ;
      LocalPopChoice(t_13);
    }
  else
    {
      t = s_13;
      {
        ATerm c_14 = t;
        int e_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_2 (ATerm t)
            {
              ATerm v_48 = NULL;
              v_48 = t;
              q_48 :
              if(!(match_string(v_48, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm n_2 (ATerm t)
            {
              ATerm y_48 = NULL;
              ATerm g_14;
              g_14 = t;
              {
                ATerm w_48 = NULL;
                ATerm x_48 = NULL;
                t = string_to_int_0(t);
                {
                  x_48 = t;
                  if(((w_48 != NULL) && (w_48 != x_48)))
                    _fail(x_48);
                  else
                    w_48 = x_48;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_l_11, not_null(w_48));
                  t = set_config_0(t);
                }
              }
              t = g_14;
              {
                ATerm z_48 = NULL;
                z_48 = t;
                if(((y_48 != NULL) && (y_48 != z_48)))
                  _fail(z_48);
                else
                  y_48 = z_48;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(y_48));
              }
              return(t);
            }
            ATerm o_2 (ATerm t)
            {
              t = term_j_14;
              return(t);
            }
            t = ArgOption_3(t, m_2, n_2, o_2);
            ;
            LocalPopChoice(e_14);
          }
        else
          {
            t = c_14;
            {
              ATerm p_2 (ATerm t)
              {
                ATerm a_49 = NULL;
                a_49 = t;
                t_48 :
                if(!(match_string(a_49, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm q_2 (ATerm t)
              {
                t = term_l_14;
                t = set_config_0(t);
                t = term_m_14;
                return(t);
              }
              ATerm r_2 (ATerm t)
              {
                t = term_n_14;
                return(t);
              }
              t = Option_3(t, p_2, q_2, r_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm g_49 = NULL;
    g_49 = t;
    d_49 :
    if(!(match_string(g_49, "-o")))
      {
        if(!(match_string(g_49, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm j_49 = NULL;
    ATerm q_14;
    q_14 = t;
    {
      ATerm h_49 = NULL;
      ATerm i_49 = NULL;
      i_49 = t;
      if(((h_49 != NULL) && (h_49 != i_49)))
        _fail(i_49);
      else
        h_49 = i_49;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_14, not_null(h_49));
        t = set_config_0(t);
      }
    }
    t = q_14;
    {
      ATerm k_49 = NULL;
      k_49 = t;
      if(((j_49 != NULL) && (j_49 != k_49)))
        _fail(k_49);
      else
        j_49 = k_49;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_49));
    }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_s_14;
    return(t);
  }
  t = ArgOption_3(t, s_2, t_2, u_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm t_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(u_14);
    }
  else
    {
      t = t_14;
      {
        ATerm v_2 (ATerm t)
        {
          ATerm o_49 = NULL;
          o_49 = t;
          n_49 :
          if(!(match_string(o_49, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm w_2 (ATerm t)
        {
          t = term_w_14;
          t = set_config_0(t);
          t = term_d_15;
          return(t);
        }
        ATerm x_2 (ATerm t)
        {
          t = term_e_15;
          return(t);
        }
        t = Option_3(t, v_2, w_2, x_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL;
  d_50 = t;
  b_50 :
  if(match_string(d_50, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(d_50) == AT_LIST) && !(ATisEmpty(d_50))))
        {
          e_50 = ATgetFirst((ATermList) d_50);
          f_50 = (ATerm) ATgetNext((ATermList) d_50);
          c_50 :
          if(((ATgetType(f_50) == AT_LIST) && !(ATisEmpty(f_50))))
            {
              g_50 = ATgetFirst((ATermList) f_50);
              h_50 = (ATerm) ATgetNext((ATermList) f_50);
              {
                ATerm l_50 = NULL;
                ATerm f_15;
                f_15 = t;
                {
                  t = not_null(e_50);
                  t = j_0(t);
                }
                t = f_15;
                {
                  ATerm m_50 = NULL;
                  t = not_null(g_50);
                  {
                    t = k_0(t);
                    {
                      m_50 = t;
                      if(((l_50 != NULL) && (l_50 != m_50)))
                        _fail(m_50);
                      else
                        l_50 = m_50;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_50)), not_null(l_50));
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
  ATerm y_2 (ATerm t)
  {
    ATerm t_50 = NULL;
    t_50 = t;
    q_50 :
    if(!(match_string(t_50, "-i")))
      {
        if(!(match_string(t_50, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    ATerm w_50 = NULL;
    ATerm g_15;
    g_15 = t;
    {
      ATerm u_50 = NULL;
      ATerm v_50 = NULL;
      v_50 = t;
      if(((u_50 != NULL) && (u_50 != v_50)))
        _fail(v_50);
      else
        u_50 = v_50;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_15, not_null(u_50));
        t = set_config_0(t);
      }
    }
    t = g_15;
    {
      ATerm x_50 = NULL;
      x_50 = t;
      if(((w_50 != NULL) && (w_50 != x_50)))
        _fail(x_50);
      else
        w_50 = x_50;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_50));
    }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_l_15;
    return(t);
  }
  t = ArgOption_3(t, y_2, z_2, a_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm n_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(p_15);
    }
  else
    {
      t = n_15;
      {
        ATerm r_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(u_15);
          }
        else
          {
            t = r_15;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm h_51 = NULL;
  t = report_run_time_0(t);
  {
    ATerm i_51 = NULL;
    t = term_w_9;
    {
      t = whoami_0(t);
      {
        i_51 = t;
        if(((h_51 != NULL) && (h_51 != i_51)))
          _fail(i_51);
        else
          h_51 = i_51;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, term_v_15), not_null(h_51)));
      {
        t = printnl_0(t);
        {
          t = term_f_10;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_w_15;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm l_51 = NULL;
  l_51 = t;
  t = SSL_TicksToSeconds(not_null(l_51));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL;
  q_51 = t;
  p_51 :
  if(match_cons(q_51, sym__2))
    {
      r_51 = ATgetArgument(q_51, 0);
      s_51 = ATgetArgument(q_51, 1);
      {
        ATerm x_15 = t;
        int y_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(r_51), not_null(s_51));
            ;
            LocalPopChoice(y_15);
          }
        else
          {
            t = x_15;
            t = SSL_addr(not_null(r_51), not_null(s_51));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm v_89 (ATerm), ATerm w_89 (ATerm))
{
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_89(t);
      ;
      LocalPopChoice(a_16);
    }
  else
    {
      t = z_15;
      {
        ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL;
        z_51 = t;
        y_51 :
        if(((ATgetType(z_51) == AT_LIST) && !(ATisEmpty(z_51))))
          {
            a_52 = ATgetFirst((ATermList) z_51);
            b_52 = (ATerm) ATgetNext((ATermList) z_51);
            {
              ATerm e_52 = NULL;
              ATerm f_52 = NULL;
              t = not_null(b_52);
              {
                t = foldr_2(t, v_89, w_89);
                {
                  f_52 = t;
                  if(((e_52 != NULL) && (e_52 != f_52)))
                    _fail(f_52);
                  else
                    e_52 = f_52;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_52), not_null(e_52));
                t = w_89(t);
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
ATerm crush_2 (ATerm t, ATerm t_87 (ATerm), ATerm u_87 (ATerm))
{
  ATerm m_52 = NULL;
  ATerm o_52 = NULL;
  m_52 = t;
  {
    ATerm p_52 = NULL;
    ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL;
    t = not_null(m_52);
    {
      p_52 = t;
      {
        t = SSL_explode_term(not_null(p_52));
        {
          r_52 = t;
          l_52 :
          if(match_cons(r_52, sym__2))
            {
              s_52 = ATgetArgument(r_52, 0);
              t_52 = ATgetArgument(r_52, 1);
              if(((o_52 != NULL) && (o_52 != t_52)))
                _fail(t_52);
              else
                o_52 = t_52;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(o_52);
      t = foldr_2(t, t_87, u_87);
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
    ATerm b_3 (ATerm t)
    {
      t = term_u_13;
      return(t);
    }
    t = crush_2(t, b_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL;
  z_52 = t;
  y_52 :
  if(match_cons(z_52, sym__2))
    {
      a_53 = ATgetArgument(z_52, 0);
      b_53 = ATgetArgument(z_52, 1);
      {
        ATerm b_16;
        b_16 = t;
        {
          ATerm c_16 = t;
          int d_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(a_53), not_null(b_53));
              ;
              LocalPopChoice(d_16);
            }
          else
            {
              t = c_16;
              t = SSL_gtr(not_null(a_53), not_null(b_53));
            }
        }
        t = b_16;
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
  ATerm h_53 = NULL;
  ATerm e_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL;
      i_53 = t;
      g_53 :
      if(match_cons(i_53, sym__2))
        {
          j_53 = ATgetArgument(i_53, 0);
          k_53 = ATgetArgument(i_53, 1);
          {
            if(((h_53 != NULL) && (h_53 != j_53)))
              _fail(j_53);
            else
              h_53 = j_53;
            if(((h_53 != NULL) && (h_53 != k_53)))
              _fail(k_53);
            else
              h_53 = k_53;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(f_16);
    }
  else
    {
      t = e_16;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm w_105 (ATerm))
{
  ATerm c_3 (ATerm t)
  {
    ATerm k_16;
    k_16 = t;
    {
      ATerm n_53 = NULL;
      ATerm o_53 = NULL;
      t = term_l_11;
      {
        t = get_config_0(t);
        {
          o_53 = t;
          if(((n_53 != NULL) && (n_53 != o_53)))
            _fail(o_53);
          else
            n_53 = o_53;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_53), term_f_10);
        t = geq_0(t);
      }
    }
    t = k_16;
    t = w_105(t);
    return(t);
  }
  t = try_1(t, c_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm s_53 = NULL,u_53 = NULL;
    ATerm l_16;
    l_16 = t;
    {
      ATerm t_53 = NULL;
      t = run_time_0(t);
      {
        t_53 = t;
        if(((s_53 != NULL) && (s_53 != t_53)))
          _fail(t_53);
        else
          s_53 = t_53;
      }
    }
    t = l_16;
    {
      ATerm v_53 = NULL;
      t = term_w_9;
      {
        t = whoami_0(t);
        {
          v_53 = t;
          if(((u_53 != NULL) && (u_53 != v_53)))
            _fail(v_53);
          else
            u_53 = v_53;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_16), not_null(s_53)), term_m_16), not_null(u_53)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, d_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_u_13;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm c_54 = NULL;
  c_54 = t;
  b_54 :
  if(match_cons(c_54, sym_Version_0))
    {
      ATerm e_54 = NULL,g_54 = NULL;
      ATerm s_16;
      s_16 = t;
      {
        ATerm f_54 = NULL;
        t = SSLgetAnnotations(not_null(c_54));
        {
          f_54 = t;
          if(((e_54 != NULL) && (e_54 != f_54)))
            _fail(f_54);
          else
            e_54 = f_54;
        }
      }
      t = s_16;
      {
        ATerm h_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(e_54));
        {
          h_54 = t;
          if(((g_54 != NULL) && (g_54 != h_54)))
            _fail(h_54);
          else
            g_54 = h_54;
        }
        t = not_null(g_54);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_97 (ATerm))
{
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_16;
      t = get_config_0(t);
      ;
      LocalPopChoice(w_16);
    }
  else
    {
      t = v_16;
      {
        ATerm e_3 (ATerm t)
        {
          ATerm y_16 = t;
          int z_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(z_16);
            }
          else
            {
              t = y_16;
              {
                ATerm a_17 = t;
                int h_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(h_17);
                  }
                else
                  {
                    t = a_17;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, e_3);
      }
    }
  t = k_97(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_54 = NULL;
  n_54 = t;
  t = SSL_table_create(not_null(n_54));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_54 = NULL;
  r_54 = t;
  {
    ATerm i_17;
    i_17 = t;
    {
      t = term_j_17;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_17, term_k_17, not_null(r_54));
          t = table_put_0(t);
        }
      }
    }
    t = i_17;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm v_54 = NULL;
  v_54 = t;
  t = SSL_table_destroy(not_null(v_54));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm z_54 = NULL;
  z_54 = t;
  t = SSL_exit(not_null(z_54));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm e_102 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_84 (ATerm))
{
  ATerm c_55 (ATerm t)
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
        t = Cons_2(t, w_84, c_55);
      }
    return(t);
  }
  t = c_55(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL;
  u_55 = t;
  m_55 :
  if(((ATgetType(u_55) == AT_LIST) && !(ATisEmpty(u_55))))
    {
      s_55 = ATgetFirst((ATermList) u_55);
      t_55 = (ATerm) ATgetNext((ATermList) u_55);
      {
        ATerm x_55 = NULL;
        t = not_null(t_55);
        {
          ATerm n_17;
          n_17 = t;
          {
            ATerm y_55 = NULL,a_56 = NULL,c_56 = NULL;
            ATerm s_17;
            s_17 = t;
            {
              ATerm z_55 = NULL;
              t = i_0(t);
              {
                z_55 = t;
                if(((y_55 != NULL) && (y_55 != z_55)))
                  _fail(z_55);
                else
                  y_55 = z_55;
              }
            }
            t = s_17;
            {
              ATerm b_56 = NULL;
              t = not_null(s_55);
              {
                t = g_0(t);
                {
                  b_56 = t;
                  if(((a_56 != NULL) && (a_56 != b_56)))
                    _fail(b_56);
                  else
                    a_56 = b_56;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(y_55)), not_null(a_56));
                {
                  c_56 = t;
                  if(((x_55 != NULL) && (x_55 != c_56)))
                    _fail(c_56);
                  else
                    x_55 = c_56;
                }
              }
            }
          }
          t = n_17;
          {
            ATerm f_3 (ATerm t)
            {
              t = not_null(x_55);
              return(t);
            }
            t = reverse_acc_2(t, g_0, f_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(u_55) == AT_LIST) && ATisEmpty(u_55)))
        {
          {
            t = term_w_9;
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
  ATerm g_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, g_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm d_102 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm f_76 (ATerm))
{
  ATerm n_56 = NULL,t_56 = NULL;
  n_56 = t;
  m_56 :
  if(match_cons(n_56, sym_Program_1))
    {
      t_56 = ATgetArgument(n_56, 0);
      {
        ATerm w_56 = NULL,y_56 = NULL;
        ATerm x_56 = NULL;
        t = SSLgetAnnotations(not_null(n_56));
        {
          x_56 = t;
          if(((w_56 != NULL) && (w_56 != x_56)))
            _fail(x_56);
          else
            w_56 = x_56;
        }
        {
          t = not_null(t_56);
          {
            ATerm a_57 = NULL;
            t = f_76(t);
            {
              y_56 = t;
              {
                ATerm f_57 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(y_56)), not_null(w_56));
                {
                  f_57 = t;
                  if(((a_57 != NULL) && (a_57 != f_57)))
                    _fail(f_57);
                  else
                    a_57 = f_57;
                }
                t = not_null(a_57);
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
  ATerm o_57 = NULL;
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_57 = NULL;
      t = term_w_15;
      {
        t = get_config_0(t);
        {
          p_57 = t;
          if(((o_57 != NULL) && (o_57 != p_57)))
            _fail(p_57);
          else
            o_57 = p_57;
        }
      }
      ;
      LocalPopChoice(u_17);
    }
  else
    {
      t = t_17;
      {
        ATerm h_3 (ATerm t)
        {
          ATerm i_3 (ATerm t)
          {
            ATerm q_57 = NULL;
            q_57 = t;
            if(((o_57 != NULL) && (o_57 != q_57)))
              _fail(q_57);
            else
              o_57 = q_57;
            return(t);
          }
          t = Program_1(t, i_3);
          return(t);
        }
        t = option_defined_1(t, h_3);
      }
    }
  {
    ATerm j_3 (ATerm t)
    {
      ATerm k_3 (ATerm t)
      {
        t = not_null(o_57);
        return(t);
      }
      t = short_description_1(t, k_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, j_3);
    {
      t = term_v_17;
      {
        t = echo_0(t);
        {
          t = term_e_18;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm l_3 (ATerm t)
                {
                  ATerm r_57 = NULL;
                  ATerm s_57 = NULL;
                  s_57 = t;
                  if(((r_57 != NULL) && (r_57 != s_57)))
                    _fail(s_57);
                  else
                    r_57 = s_57;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_57)), term_f_18);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, l_3);
                {
                  ATerm m_3 (ATerm t)
                  {
                    ATerm t_57 = NULL;
                    ATerm u_57 = NULL;
                    ATerm n_3 (ATerm t)
                    {
                      t = not_null(o_57);
                      return(t);
                    }
                    t = long_description_1(t, n_3);
                    {
                      u_57 = t;
                      if(((t_57 != NULL) && (t_57 != u_57)))
                        _fail(u_57);
                      else
                        t_57 = u_57;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(t_57)), term_g_18);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, m_3);
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
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_76 (ATerm))
{
  ATerm e_58 = NULL,f_58 = NULL;
  e_58 = t;
  d_58 :
  if(match_cons(e_58, sym_Undefined_1))
    {
      f_58 = ATgetArgument(e_58, 0);
      {
        ATerm i_58 = NULL,k_58 = NULL;
        ATerm j_58 = NULL;
        t = SSLgetAnnotations(not_null(e_58));
        {
          j_58 = t;
          if(((i_58 != NULL) && (i_58 != j_58)))
            _fail(j_58);
          else
            i_58 = j_58;
        }
        {
          t = not_null(f_58);
          {
            ATerm m_58 = NULL;
            t = g_76(t);
            {
              k_58 = t;
              {
                ATerm n_58 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(k_58)), not_null(i_58));
                {
                  n_58 = t;
                  if(((m_58 != NULL) && (m_58 != n_58)))
                    _fail(n_58);
                  else
                    m_58 = n_58;
                }
                t = not_null(m_58);
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
ATerm fetch_1 (ATerm t, ATerm g_85 (ATerm))
{
  ATerm s_58 (ATerm t)
  {
    ATerm m_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_85, _id);
        ;
        LocalPopChoice(n_18);
      }
    else
      {
        t = m_18;
        t = Cons_2(t, _id, s_58);
      }
    return(t);
  }
  t = s_58(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_101 (ATerm))
{
  t = fetch_1(t, d_101);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
  u_58 = t;
  t_58 :
  if(((ATgetType(u_58) == AT_LIST) && ATisEmpty(u_58)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(u_58) == AT_LIST) && !(ATisEmpty(u_58))))
        {
          v_58 = ATgetFirst((ATermList) u_58);
          w_58 = (ATerm) ATgetNext((ATermList) u_58);
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
  ATerm o_18;
  o_18 = t;
  {
    ATerm z_58 = NULL;
    ATerm c_59 = NULL;
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
          ATerm a_59 = NULL;
          ATerm b_59 = NULL;
          b_59 = t;
          if(((a_59 != NULL) && (a_59 != b_59)))
            _fail(b_59);
          else
            a_59 = b_59;
          t = (ATerm) ATinsert(ATempty, not_null(a_59));
        }
      }
    {
      c_59 = t;
      if(((z_58 != NULL) && (z_58 != c_59)))
        _fail(c_59);
      else
        z_58 = c_59;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_11, not_null(z_58));
      t = printnl_0(t);
    }
  }
  t = o_18;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_w_15;
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
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(z_18);
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
  ATerm v_59 = NULL;
  v_59 = t;
  s_59 :
  if(match_cons(v_59, sym_Help_0))
    {
      ATerm x_59 = NULL,z_59 = NULL;
      ATerm a_19;
      a_19 = t;
      {
        ATerm y_59 = NULL;
        t = SSLgetAnnotations(not_null(v_59));
        {
          y_59 = t;
          if(((x_59 != NULL) && (x_59 != y_59)))
            _fail(y_59);
          else
            x_59 = y_59;
        }
      }
      t = a_19;
      {
        ATerm a_60 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(x_59));
        {
          a_60 = t;
          if(((z_59 != NULL) && (z_59 != a_60)))
            _fail(a_60);
          else
            z_59 = a_60;
        }
        t = not_null(z_59);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_81 (ATerm))
{
  ATerm b_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_81(t);
      ;
      LocalPopChoice(d_19);
    }
  else
    {
      t = b_19;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_3 (ATerm t)
      {
        ATerm m_60 = NULL;
        m_60 = t;
        k_60 :
        if(!(match_string(m_60, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm p_3 (ATerm t)
      {
        t = term_l_19;
        t = set_config_0(t);
        return(t);
      }
      ATerm s_3 (ATerm t)
      {
        t = term_q_19;
        return(t);
      }
      t = Option_3(t, o_3, p_3, s_3);
      ;
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      {
        ATerm t_3 (ATerm t)
        {
          ATerm n_60 = NULL;
          n_60 = t;
          l_60 :
          if(!(match_string(n_60, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_3 (ATerm t)
        {
          t = term_l_19;
          {
            t = set_config_0(t);
            {
              t = term_s_19;
              t = set_config_0(t);
            }
          }
          t = term_t_19;
          return(t);
        }
        ATerm v_3 (ATerm t)
        {
          t = term_u_19;
          return(t);
        }
        t = Option_3(t, t_3, u_3, v_3);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL;
  q_60 = t;
  p_60 :
  if(match_cons(q_60, sym__2))
    {
      r_60 = ATgetArgument(q_60, 0);
      s_60 = ATgetArgument(q_60, 1);
      t = SSL_table_get(not_null(r_60), not_null(s_60));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL;
  z_60 = t;
  y_60 :
  if(match_cons(z_60, sym__3))
    {
      a_61 = ATgetArgument(z_60, 0);
      b_61 = ATgetArgument(z_60, 1);
      c_61 = ATgetArgument(z_60, 2);
      {
        ATerm v_19;
        v_19 = t;
        {
          ATerm g_61 = NULL;
          ATerm h_61 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_61), not_null(b_61));
          {
            ATerm y_19 = t;
            int b_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(b_20);
              }
            else
              {
                t = y_19;
                t = (ATerm) ATempty;
              }
            {
              h_61 = t;
              if(((g_61 != NULL) && (g_61 != h_61)))
                _fail(h_61);
              else
                g_61 = h_61;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_61), not_null(b_61), (ATerm) ATinsert(CheckATermList(not_null(g_61)), not_null(c_61)));
            t = table_put_0(t);
          }
        }
        t = v_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm i_102 (ATerm))
{
  ATerm l_61 = NULL;
  ATerm m_61 = NULL;
  t = term_w_9;
  {
    t = i_102(t);
    {
      m_61 = t;
      if(((l_61 != NULL) && (l_61 != m_61)))
        _fail(m_61);
      else
        l_61 = m_61;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_w_17, term_d_18, not_null(l_61));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL;
  s_61 = t;
  r_61 :
  if(match_string(s_61, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(s_61) == AT_LIST) && !(ATisEmpty(s_61))))
        {
          t_61 = ATgetFirst((ATermList) s_61);
          u_61 = (ATerm) ATgetNext((ATermList) s_61);
          {
            ATerm x_61 = NULL;
            ATerm f_20;
            f_20 = t;
            {
              t = not_null(t_61);
              t = a_0(t);
            }
            t = f_20;
            {
              ATerm y_61 = NULL;
              t = term_w_9;
              {
                t = b_0(t);
                {
                  y_61 = t;
                  if(((x_61 != NULL) && (x_61 != y_61)))
                    _fail(y_61);
                  else
                    x_61 = y_61;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_61)), not_null(x_61));
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
  ATerm w_3 (ATerm t)
  {
    ATerm d_62 = NULL;
    d_62 = t;
    c_62 :
    if(!(match_string(d_62, "--help")))
      {
        if(!(match_string(d_62, "-h")))
          {
            if(!(match_string(d_62, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_g_20;
    {
      t = set_config_0(t);
      t = term_h_20;
    }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_i_20;
    return(t);
  }
  t = Option_3(t, w_3, x_3, y_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL;
  g_62 = t;
  f_62 :
  if(((ATgetType(g_62) == AT_LIST) && !(ATisEmpty(g_62))))
    {
      h_62 = ATgetFirst((ATermList) g_62);
      i_62 = (ATerm) ATgetNext((ATermList) g_62);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_62)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_62)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_63 (ATerm), ATerm a_64 (ATerm))
{
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL;
  u_62 = t;
  t_62 :
  if(((ATgetType(u_62) == AT_LIST) && !(ATisEmpty(u_62))))
    {
      v_62 = ATgetFirst((ATermList) u_62);
      w_62 = (ATerm) ATgetNext((ATermList) u_62);
      {
        ATerm a_63 = NULL,c_63 = NULL;
        ATerm b_63 = NULL;
        t = SSLgetAnnotations(not_null(u_62));
        {
          b_63 = t;
          if(((a_63 != NULL) && (a_63 != b_63)))
            _fail(b_63);
          else
            a_63 = b_63;
        }
        {
          t = not_null(v_62);
          {
            ATerm e_63 = NULL;
            t = z_63(t);
            {
              c_63 = t;
              {
                t = not_null(w_62);
                {
                  ATerm g_63 = NULL;
                  t = a_64(t);
                  {
                    e_63 = t;
                    {
                      ATerm h_63 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_63)), not_null(c_63)), not_null(a_63));
                      {
                        h_63 = t;
                        if(((g_63 != NULL) && (g_63 != h_63)))
                          _fail(h_63);
                        else
                          g_63 = h_63;
                      }
                      t = not_null(g_63);
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
  ATerm r_63 = NULL;
  r_63 = t;
  q_63 :
  if(((ATgetType(r_63) == AT_LIST) && ATisEmpty(r_63)))
    {
      {
        ATerm t_63 = NULL,v_63 = NULL;
        ATerm n_20;
        n_20 = t;
        {
          ATerm u_63 = NULL;
          t = SSLgetAnnotations(not_null(r_63));
          {
            u_63 = t;
            if(((t_63 != NULL) && (t_63 != u_63)))
              _fail(u_63);
            else
              t_63 = u_63;
          }
        }
        t = n_20;
        {
          ATerm w_63 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_63));
          {
            w_63 = t;
            if(((v_63 != NULL) && (v_63 != w_63)))
              _fail(w_63);
            else
              v_63 = w_63;
          }
          t = not_null(v_63);
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
  ATerm e_64 = NULL,f_64 = NULL,g_64 = NULL;
  e_64 = t;
  d_64 :
  if(match_cons(e_64, sym__2))
    {
      f_64 = ATgetArgument(e_64, 0);
      g_64 = ATgetArgument(e_64, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_11, not_null(f_64), not_null(g_64));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm g_102 (ATerm))
{
  ATerm o_20;
  o_20 = t;
  {
    ATerm z_3 (ATerm t)
    {
      t = term_p_20;
      t = g_102(t);
      return(t);
    }
    t = try_1(t, z_3);
  }
  t = o_20;
  {
    ATerm a_4 (ATerm t)
    {
      ATerm o_64 = NULL;
      ATerm q_20;
      q_20 = t;
      {
        ATerm m_64 = NULL;
        ATerm n_64 = NULL;
        n_64 = t;
        if(((m_64 != NULL) && (m_64 != n_64)))
          _fail(n_64);
        else
          m_64 = n_64;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_15, not_null(m_64));
          t = set_config_0(t);
        }
      }
      t = q_20;
      {
        ATerm p_64 = NULL;
        p_64 = t;
        if(((o_64 != NULL) && (o_64 != p_64)))
          _fail(p_64);
        else
          o_64 = p_64;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_64));
      }
      return(t);
    }
    ATerm b_4 (ATerm t)
    {
      ATerm v_20 = t;
      int w_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_20 = t;
          int z_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(z_20);
            }
          else
            {
              t = y_20;
              {
                t = g_102(t);
                t = Cons_2(t, _id, b_4);
              }
            }
          ;
          LocalPopChoice(w_20);
        }
      else
        {
          t = v_20;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_4, b_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL;
  ATerm a_21;
  a_21 = t;
  {
    ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL;
    y_64 = t;
    u_64 :
    if(match_cons(y_64, sym__3))
      {
        z_64 = ATgetArgument(y_64, 0);
        a_65 = ATgetArgument(y_64, 1);
        b_65 = ATgetArgument(y_64, 2);
        {
          if(((v_64 != NULL) && (v_64 != z_64)))
            _fail(z_64);
          else
            v_64 = z_64;
          {
            if(((w_64 != NULL) && (w_64 != a_65)))
              _fail(a_65);
            else
              w_64 = a_65;
            {
              if(((x_64 != NULL) && (x_64 != b_65)))
                _fail(b_65);
              else
                x_64 = b_65;
              t = SSL_table_put(not_null(v_64), not_null(w_64), not_null(x_64));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = a_21;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_102 (ATerm))
{
  ATerm e_65 = NULL;
  ATerm b_21;
  b_21 = t;
  {
    t = term_g_21;
    t = table_put_0(t);
  }
  t = b_21;
  {
    ATerm c_4 (ATerm t)
    {
      ATerm h_21 = t;
      int i_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_102(t);
          ;
          LocalPopChoice(i_21);
        }
      else
        {
          t = h_21;
          {
            ATerm k_21 = t;
            int s_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(s_21);
              }
            else
              {
                t = k_21;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, c_4);
    {
      ATerm d_4 (ATerm t)
      {
        ATerm t_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_21;
            v_21 = t;
            {
              ATerm w_21 = t;
              int x_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_x_16;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(x_21);
                }
              else
                {
                  t = w_21;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = v_21;
            {
              t = system_usage_0(t);
              {
                t = term_u_13;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(u_21);
          }
        else
          {
            t = t_21;
            {
              ATerm y_21 = t;
              int a_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_22;
                  b_22 = t;
                  {
                    t = term_k_19;
                    t = get_config_0(t);
                  }
                  t = b_22;
                  {
                    t = system_about_0(t);
                    {
                      t = term_u_13;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(a_22);
                }
              else
                {
                  t = y_21;
                  {
                    ATerm e_4 (ATerm t)
                    {
                      ATerm h_4 (ATerm t)
                      {
                        ATerm f_65 = NULL;
                        f_65 = t;
                        if(((e_65 != NULL) && (e_65 != f_65)))
                          _fail(f_65);
                        else
                          e_65 = f_65;
                        return(t);
                      }
                      t = Undefined_1(t, h_4);
                      return(t);
                    }
                    t = option_defined_1(t, e_4);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_65)), term_d_22));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_f_10;
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
      t = try_1(t, d_4);
      {
        ATerm l_22;
        l_22 = t;
        {
          t = term_w_17;
          t = table_destroy_0(t);
        }
        t = l_22;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm))
{
  t = parse_options_1(t, m_97);
  {
    t = store_options_0(t);
    {
      t = o_97(t);
      {
        ATerm m_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, n_97);
            ;
            LocalPopChoice(n_22);
          }
        else
          {
            t = m_22;
            {
              ATerm r_22 = t;
              int x_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_97(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(x_22);
                }
              else
                {
                  t = r_22;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm e_97 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_97(t);
        ;
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, b_97);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, i_4, d_97, e_97, j_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm l_4 (ATerm t)
    {
      ATerm f_23;
      f_23 = t;
      {
        ATerm i_65 = NULL;
        ATerm j_65 = NULL;
        t = term_w_15;
        {
          t = get_config_0(t);
          {
            j_65 = t;
            if(((i_65 != NULL) && (i_65 != j_65)))
              _fail(j_65);
            else
              i_65 = j_65;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATempty, not_null(i_65)));
          t = printnl_0(t);
        }
      }
      t = f_23;
      return(t);
    }
    t = if_verbose2_1(t, l_4);
    return(t);
  }
  t = iowrap_4(t, v_96, w_96, x_96, k_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm t_96 (ATerm), ATerm u_96 (ATerm))
{
  t = iowrap_3(t, t_96, u_96, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm q_96 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    t = _2(t, _id, q_96);
    return(t);
  }
  t = iowrap_2(t, m_4, _fail);
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
