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
ATerm term_n_26;
ATerm term_o_25;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_q_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_w_23;
ATerm term_q_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_o_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_u_17;
ATerm term_q_17;
ATerm term_j_17;
ATerm term_g_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_b_16;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_j_14;
ATerm term_f_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_n_13;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_r_10;
ATerm term_e_8;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_t_6;
ATerm term_m_6;
ATerm term_l_6;
void init_constant_terms (void)
{
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_7);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Definition", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_m_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym__2, term_c_17, term_t_6);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym__2, term_b_18, term_t_6);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__2, term_o_21, term_t_21);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym__2, term_l_23, term_t_6);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym__2, term_w_23, term_t_6);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym__2, term_o_20, term_t_6);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym__3, term_o_21, term_t_21, (ATerm) ATempty);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm DefDead_0 (ATerm);
ATerm filter_1 (ATerm, ATerm f_94 (ATerm));
ATerm DeleteDeadDefinitions_0 (ATerm);
ATerm table_replace_0 (ATerm);
ATerm override_key_1 (ATerm, ATerm c_94 (ATerm));
ATerm DeclareNotDead_0 (ATerm);
ATerm DeclareDefDead_0 (ATerm);
ATerm DeclareDead_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm y_93 (ATerm));
ATerm restore_always_2 (ATerm, ATerm x_84 (ATerm), ATerm y_84 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm x_93 (ATerm));
ATerm scope_2 (ATerm, ATerm z_93 (ATerm), ATerm a_94 (ATerm));
ATerm local_dead_def_elim_0 (ATerm);
ATerm map_1 (ATerm, ATerm r_87 (ATerm));
ATerm Rec_2 (ATerm, ATerm d_72 (ATerm), ATerm e_72 (ATerm));
ATerm SDefT_4 (ATerm, ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm b_74 (ATerm));
ATerm SDef_3 (ATerm, ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm x_73 (ATerm));
ATerm Let_2 (ATerm, ATerm g_71 (ATerm), ATerm h_71 (ATerm));
ATerm sboundin_3 (ATerm, ATerm v_80 (ATerm), ATerm w_80 (ATerm), ATerm x_80 (ATerm));
ATerm Bind7_0 (ATerm);
ATerm Bind5_0 (ATerm);
ATerm Bind3_0 (ATerm);
ATerm declared_vars_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm Add2_0 (ATerm);
ATerm union_1 (ATerm, ATerm d_90 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm u_92 (ATerm));
ATerm crush_3 (ATerm, ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm s_90 (ATerm));
ATerm free_vars_3 (ATerm, ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm svars_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm d_94 (ATerm));
ATerm Definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm h_90 (ATerm), ATerm i_90 (ATerm));
ATerm diff_1 (ATerm, ATerm z_89 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm f_86 (ATerm));
ATerm zip_1 (ATerm, ATerm h_86 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm a_99 (ATerm), ATerm b_99 (ATerm));
ATerm for_3 (ATerm, ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm v_109 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm k_110 (ATerm));
ATerm assert_1 (ATerm, ATerm b_94 (ATerm));
ATerm RegisterDefinition_0 (ATerm);
ATerm dead_def_elim_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm x_66 (ATerm));
ATerm Cons_2 (ATerm, ATerm t_66 (ATerm), ATerm u_66 (ATerm));
ATerm Specification_1 (ATerm, ATerm c_67 (ATerm));
ATerm _2 (ATerm, ATerm k_65 (ATerm), ATerm l_65 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_88 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm j_104 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm f_103 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm h_106 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm r_102 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm c_85 (ATerm), ATerm d_85 (ATerm));
ATerm input_file_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm q_92 (ATerm), ATerm r_92 (ATerm));
ATerm crush_2 (ATerm, ATerm o_90 (ATerm), ATerm p_90 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm i_104 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm f_107 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_109 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_109 (ATerm));
ATerm Program_1 (ATerm, ATerm r_79 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm s_79 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_88 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_108 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_84 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_109 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_109 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_109 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm k_107 (ATerm));
ATerm iowrap_4 (ATerm, ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm z_106 (ATerm));
ATerm iowrap_3 (ATerm, ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm s_106 (ATerm));
ATerm iowrap_2 (ATerm, ATerm o_106 (ATerm), ATerm p_106 (ATerm));
ATerm iowrap_1 (ATerm, ATerm l_106 (ATerm));
ATerm dead_def_elim_io_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm x_2 = NULL;
  x_2 = t;
  w_2 :
  if(((ATgetType(x_2) == AT_LIST) && ATisEmpty(x_2)))
    {
      {
        ATerm m_3 = NULL,o_3 = NULL;
        ATerm b_6;
        b_6 = t;
        {
          ATerm n_3 = NULL;
          t = SSLgetAnnotations(not_null(x_2));
          {
            n_3 = t;
            if(((m_3 != NULL) && (m_3 != n_3)))
              _fail(n_3);
            else
              m_3 = n_3;
          }
        }
        t = b_6;
        {
          ATerm s_3 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(m_3));
          {
            s_3 = t;
            if(((o_3 != NULL) && (o_3 != s_3)))
              _fail(s_3);
            else
              o_3 = s_3;
          }
          t = not_null(o_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DefDead_0 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL;
  d_4 = t;
  c_4 :
  if(match_cons(d_4, sym_SDefT_4))
    {
      e_4 = ATgetArgument(d_4, 0);
      f_4 = ATgetArgument(d_4, 1);
      g_4 = ATgetArgument(d_4, 2);
      h_4 = ATgetArgument(d_4, 3);
      {
        ATerm c_6 = t;
        int k_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_4 = NULL;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(e_4), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
            {
              ATerm f_0 (ATerm t)
              {
                t = term_l_6;
                return(t);
              }
              t = rewrite_1(t, f_0);
              {
                k_4 = t;
                z_3 :
                if(match_cons(k_4, sym_Undefined_0))
                  {
                    _fail(t);
                  }
                else
                  {
                    _fail(t);
                  }
              }
            }
            t = term_m_6;
            ;
            LocalPopChoice(k_6);
          }
        else
          {
            t = c_6;
            {
              ATerm n_4 = NULL,o_4 = NULL;
              t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(e_4), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
              {
                ATerm h_0 (ATerm t)
                {
                  t = term_l_6;
                  return(t);
                }
                t = rewrite_1(t, h_0);
                {
                  n_4 = t;
                  a_4 :
                  if(match_cons(n_4, sym_Defined_1))
                    {
                      o_4 = ATgetArgument(n_4, 0);
                      b_4 :
                      if(!(match_string(o_4, "e_0")))
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
              t = term_t_6;
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
ATerm filter_1 (ATerm t, ATerm f_94 (ATerm))
{
  ATerm u_6 = t;
  int v_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(v_6);
    }
  else
    {
      t = u_6;
      {
        ATerm a_7 = t;
        int b_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_0 (ATerm t)
            {
              t = filter_1(t, f_94);
              return(t);
            }
            t = Cons_2(t, f_94, i_0);
            ;
            LocalPopChoice(b_7);
          }
        else
          {
            t = a_7;
            {
              ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL;
              u_4 = t;
              t_4 :
              if(((ATgetType(u_4) == AT_LIST) && !(ATisEmpty(u_4))))
                {
                  v_4 = ATgetFirst((ATermList) u_4);
                  w_4 = (ATerm) ATgetNext((ATermList) u_4);
                  {
                    t = not_null(w_4);
                    t = filter_1(t, f_94);
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
  return(t);
}
ATerm DeleteDeadDefinitions_0 (ATerm t)
{
  ATerm k_0 (ATerm t)
  {
    ATerm o_0 (ATerm t)
    {
      ATerm c_7 = t;
      if((PushChoice() == 0))
        {
          t = DefDead_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = c_7;
        }
      return(t);
    }
    t = filter_1(t, o_0);
    return(t);
  }
  t = Let_2(t, k_0, _id);
  return(t);
}
ATerm table_replace_0 (ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL;
  d_5 = t;
  c_5 :
  if(match_cons(d_5, sym__3))
    {
      e_5 = ATgetArgument(d_5, 0);
      f_5 = ATgetArgument(d_5, 1);
      g_5 = ATgetArgument(d_5, 2);
      {
        ATerm k_5 = NULL;
        ATerm d_7;
        d_7 = t;
        {
          ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_5), not_null(f_5));
          {
            t = table_get_0(t);
            {
              l_5 = t;
              b_5 :
              if(((ATgetType(l_5) == AT_LIST) && !(ATisEmpty(l_5))))
                {
                  m_5 = ATgetFirst((ATermList) l_5);
                  n_5 = (ATerm) ATgetNext((ATermList) l_5);
                  {
                    if(((k_5 != NULL) && (k_5 != n_5)))
                      _fail(n_5);
                    else
                      k_5 = n_5;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(e_5), not_null(f_5), (ATerm) ATinsert(CheckATermList(not_null(k_5)), not_null(g_5)));
                      t = table_put_0(t);
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
        t = d_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm override_key_1 (ATerm t, ATerm c_94 (ATerm))
{
  ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL;
  t_5 = t;
  s_5 :
  if(match_cons(t_5, sym__2))
    {
      u_5 = ATgetArgument(t_5, 0);
      v_5 = ATgetArgument(t_5, 1);
      {
        ATerm y_5 = NULL;
        ATerm i_7;
        i_7 = t;
        {
          ATerm z_5 = NULL;
          t = c_94(t);
          {
            z_5 = t;
            {
              if(((y_5 != NULL) && (y_5 != z_5)))
                _fail(z_5);
              else
                y_5 = z_5;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(y_5), not_null(u_5), not_null(v_5));
                t = table_replace_0(t);
              }
            }
          }
        }
        t = i_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DeclareNotDead_0 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL;
  f_6 = t;
  d_6 :
  if(match_cons(f_6, sym_CallT_3))
    {
      g_6 = ATgetArgument(f_6, 0);
      i_6 = ATgetArgument(f_6, 1);
      j_6 = ATgetArgument(f_6, 2);
      e_6 :
      if(match_cons(g_6, sym_SVar_1))
        {
          h_6 = ATgetArgument(g_6, 0);
          {
            ATerm j_7;
            j_7 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, not_null(h_6), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_m_6);
              {
                ATerm p_0 (ATerm t)
                {
                  t = term_l_6;
                  return(t);
                }
                t = override_key_1(t, p_0);
              }
            }
            t = j_7;
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
ATerm DeclareDefDead_0 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL;
  o_6 = t;
  n_6 :
  if(match_cons(o_6, sym_SDefT_4))
    {
      p_6 = ATgetArgument(o_6, 0);
      q_6 = ATgetArgument(o_6, 1);
      r_6 = ATgetArgument(o_6, 2);
      s_6 = ATgetArgument(o_6, 3);
      {
        ATerm m_7;
        m_7 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, not_null(p_6), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_o_7);
          {
            ATerm q_0 (ATerm t)
            {
              t = term_l_6;
              return(t);
            }
            t = assert_1(t, q_0);
          }
        }
        t = m_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DeclareDead_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    t = map_1(t, DeclareDefDead_0);
    return(t);
  }
  t = Let_2(t, r_0, _id);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL;
  x_6 = t;
  w_6 :
  if(((ATgetType(x_6) == AT_LIST) && !(ATisEmpty(x_6))))
    {
      y_6 = ATgetFirst((ATermList) x_6);
      z_6 = (ATerm) ATgetNext((ATermList) x_6);
      t = not_null(z_6);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
  f_7 = t;
  e_7 :
  if(match_cons(f_7, sym__2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      {
        ATerm p_7;
        p_7 = t;
        {
          ATerm k_7 = NULL;
          ATerm l_7 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_7), not_null(h_7));
          {
            ATerm q_7 = t;
            int a_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(a_8);
              }
            else
              {
                t = q_7;
                t = (ATerm) ATempty;
              }
            {
              l_7 = t;
              if(((k_7 != NULL) && (k_7 != l_7)))
                _fail(l_7);
              else
                k_7 = l_7;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_7), not_null(h_7), not_null(k_7));
            t = table_put_0(t);
          }
        }
        t = p_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm y_93 (ATerm))
{
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
  ATerm b_8;
  b_8 = t;
  {
    ATerm v_7 = NULL;
    ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL;
    t = y_93(t);
    {
      v_7 = t;
      {
        if(((u_7 != NULL) && (u_7 != v_7)))
          _fail(v_7);
        else
          u_7 = v_7;
        {
          ATerm c_8 = t;
          int d_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_7), term_e_8);
              t = table_get_0(t);
              ;
              LocalPopChoice(d_8);
            }
          else
            {
              t = c_8;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            w_7 = t;
            r_7 :
            if(((ATgetType(w_7) == AT_LIST) && !(ATisEmpty(w_7))))
              {
                x_7 = ATgetFirst((ATermList) w_7);
                y_7 = (ATerm) ATgetNext((ATermList) w_7);
                {
                  if(((t_7 != NULL) && (t_7 != x_7)))
                    _fail(x_7);
                  else
                    t_7 = x_7;
                  {
                    if(((s_7 != NULL) && (s_7 != y_7)))
                      _fail(y_7);
                    else
                      s_7 = y_7;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(u_7), term_e_8, not_null(s_7));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(t_7);
                          {
                            ATerm s_0 (ATerm t)
                            {
                              ATerm z_7 = NULL;
                              z_7 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_7), not_null(z_7));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, s_0);
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
  t = b_8;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm x_84 (ATerm), ATerm y_84 (ATerm))
{
  ATerm f_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_84(t);
      t = y_84(t);
      ;
      LocalPopChoice(k_8);
    }
  else
    {
      t = f_8;
      {
        t = y_84(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm x_93 (ATerm))
{
  ATerm g_8 = NULL;
  ATerm l_8;
  l_8 = t;
  {
    ATerm h_8 = NULL;
    ATerm i_8 = NULL;
    t = x_93(t);
    {
      h_8 = t;
      {
        if(((g_8 != NULL) && (g_8 != h_8)))
          _fail(h_8);
        else
          g_8 = h_8;
        {
          ATerm j_8 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_8), term_e_8);
          {
            ATerm m_8 = t;
            int o_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(o_8);
              }
            else
              {
                t = m_8;
                t = (ATerm) ATempty;
              }
            {
              j_8 = t;
              if(((i_8 != NULL) && (i_8 != j_8)))
                _fail(j_8);
              else
                i_8 = j_8;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_8), term_e_8, (ATerm) ATinsert(CheckATermList(not_null(i_8)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = l_8;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm z_93 (ATerm), ATerm a_94 (ATerm))
{
  t = begin_scope_1(t, z_93);
  {
    ATerm t_0 (ATerm t)
    {
      t = end_scope_1(t, z_93);
      return(t);
    }
    t = restore_always_2(t, a_94, t_0);
  }
  return(t);
}
ATerm local_dead_def_elim_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    t = term_l_6;
    return(t);
  }
  ATerm v_0 (ATerm t)
  {
    ATerm w_0 (ATerm t)
    {
      ATerm p_8 = t;
      int q_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DeclareDead_0(t);
          ;
          LocalPopChoice(q_8);
        }
      else
        {
          t = p_8;
          t = DeclareNotDead_0(t);
        }
      return(t);
    }
    t = try_1(t, w_0);
    {
      t = _all(t, local_dead_def_elim_0);
      t = try_1(t, DeleteDeadDefinitions_0);
    }
    return(t);
  }
  t = scope_2(t, u_0, v_0);
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_87 (ATerm))
{
  ATerm n_8 (ATerm t)
  {
    ATerm r_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(s_8);
      }
    else
      {
        t = r_8;
        t = Cons_2(t, r_87, n_8);
      }
    return(t);
  }
  t = n_8(t);
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm d_72 (ATerm), ATerm e_72 (ATerm))
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
  u_8 = t;
  t_8 :
  if(match_cons(u_8, sym_Rec_2))
    {
      v_8 = ATgetArgument(u_8, 0);
      w_8 = ATgetArgument(u_8, 1);
      {
        ATerm a_9 = NULL,c_9 = NULL;
        ATerm b_9 = NULL;
        t = SSLgetAnnotations(not_null(u_8));
        {
          b_9 = t;
          if(((a_9 != NULL) && (a_9 != b_9)))
            _fail(b_9);
          else
            a_9 = b_9;
        }
        {
          t = not_null(v_8);
          {
            ATerm e_9 = NULL;
            t = d_72(t);
            {
              c_9 = t;
              {
                t = not_null(w_8);
                {
                  ATerm g_9 = NULL;
                  t = e_72(t);
                  {
                    e_9 = t;
                    {
                      ATerm h_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(c_9), not_null(e_9)), not_null(a_9));
                      {
                        h_9 = t;
                        if(((g_9 != NULL) && (g_9 != h_9)))
                          _fail(h_9);
                        else
                          g_9 = h_9;
                      }
                      t = not_null(g_9);
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
ATerm SDefT_4 (ATerm t, ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm b_74 (ATerm))
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_cons(v_9, sym_SDefT_4))
    {
      w_9 = ATgetArgument(v_9, 0);
      x_9 = ATgetArgument(v_9, 1);
      y_9 = ATgetArgument(v_9, 2);
      z_9 = ATgetArgument(v_9, 3);
      {
        ATerm f_10 = NULL,h_10 = NULL;
        ATerm g_10 = NULL;
        t = SSLgetAnnotations(not_null(v_9));
        {
          g_10 = t;
          if(((f_10 != NULL) && (f_10 != g_10)))
            _fail(g_10);
          else
            f_10 = g_10;
        }
        {
          t = not_null(w_9);
          {
            ATerm j_10 = NULL;
            t = y_73(t);
            {
              h_10 = t;
              {
                t = not_null(x_9);
                {
                  ATerm l_10 = NULL;
                  t = z_73(t);
                  {
                    j_10 = t;
                    {
                      t = not_null(y_9);
                      {
                        ATerm n_10 = NULL;
                        t = a_74(t);
                        {
                          l_10 = t;
                          {
                            t = not_null(z_9);
                            {
                              ATerm p_10 = NULL;
                              t = b_74(t);
                              {
                                n_10 = t;
                                {
                                  ATerm q_10 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(h_10), not_null(j_10), not_null(l_10), not_null(n_10)), not_null(f_10));
                                  {
                                    q_10 = t;
                                    if(((p_10 != NULL) && (p_10 != q_10)))
                                      _fail(q_10);
                                    else
                                      p_10 = q_10;
                                  }
                                  t = not_null(p_10);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm SDef_3 (ATerm t, ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm x_73 (ATerm))
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
  f_11 = t;
  e_11 :
  if(match_cons(f_11, sym_SDef_3))
    {
      g_11 = ATgetArgument(f_11, 0);
      h_11 = ATgetArgument(f_11, 1);
      i_11 = ATgetArgument(f_11, 2);
      {
        ATerm n_11 = NULL,p_11 = NULL;
        ATerm o_11 = NULL;
        t = SSLgetAnnotations(not_null(f_11));
        {
          o_11 = t;
          if(((n_11 != NULL) && (n_11 != o_11)))
            _fail(o_11);
          else
            n_11 = o_11;
        }
        {
          t = not_null(g_11);
          {
            ATerm r_11 = NULL;
            t = v_73(t);
            {
              p_11 = t;
              {
                t = not_null(h_11);
                {
                  ATerm t_11 = NULL;
                  t = w_73(t);
                  {
                    r_11 = t;
                    {
                      t = not_null(i_11);
                      {
                        ATerm v_11 = NULL;
                        t = x_73(t);
                        {
                          t_11 = t;
                          {
                            ATerm w_11 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(p_11), not_null(r_11), not_null(t_11)), not_null(n_11));
                            {
                              w_11 = t;
                              if(((v_11 != NULL) && (v_11 != w_11)))
                                _fail(w_11);
                              else
                                v_11 = w_11;
                            }
                            t = not_null(v_11);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm g_71 (ATerm), ATerm h_71 (ATerm))
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym_Let_2))
    {
      k_12 = ATgetArgument(j_12, 0);
      l_12 = ATgetArgument(j_12, 1);
      {
        ATerm p_12 = NULL,r_12 = NULL;
        ATerm q_12 = NULL;
        t = SSLgetAnnotations(not_null(j_12));
        {
          q_12 = t;
          if(((p_12 != NULL) && (p_12 != q_12)))
            _fail(q_12);
          else
            p_12 = q_12;
        }
        {
          t = not_null(k_12);
          {
            ATerm t_12 = NULL;
            t = g_71(t);
            {
              r_12 = t;
              {
                t = not_null(l_12);
                {
                  ATerm v_12 = NULL;
                  t = h_71(t);
                  {
                    t_12 = t;
                    {
                      ATerm w_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(r_12), not_null(t_12)), not_null(p_12));
                      {
                        w_12 = t;
                        if(((v_12 != NULL) && (v_12 != w_12)))
                          _fail(w_12);
                        else
                          v_12 = w_12;
                      }
                      t = not_null(v_12);
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
ATerm sboundin_3 (ATerm t, ATerm v_80 (ATerm), ATerm w_80 (ATerm), ATerm x_80 (ATerm))
{
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, v_80, v_80);
      ;
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      {
        ATerm z_8 = t;
        int d_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, x_80, x_80, v_80);
            ;
            LocalPopChoice(d_9);
          }
        else
          {
            t = z_8;
            {
              ATerm f_9 = t;
              int i_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4(t, x_80, x_80, x_80, v_80);
                  ;
                  LocalPopChoice(i_9);
                }
              else
                {
                  t = f_9;
                  t = Rec_2(t, x_80, v_80);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
  e_13 = t;
  d_13 :
  if(match_cons(e_13, sym_RDefT_4))
    {
      f_13 = ATgetArgument(e_13, 0);
      g_13 = ATgetArgument(e_13, 1);
      h_13 = ATgetArgument(e_13, 2);
      i_13 = ATgetArgument(e_13, 3);
      {
        t = not_null(g_13);
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
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL;
  q_13 = t;
  p_13 :
  if(match_cons(q_13, sym_SDefT_4))
    {
      r_13 = ATgetArgument(q_13, 0);
      s_13 = ATgetArgument(q_13, 1);
      t_13 = ATgetArgument(q_13, 2);
      u_13 = ATgetArgument(q_13, 3);
      {
        t = not_null(s_13);
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
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL;
  c_14 = t;
  b_14 :
  if(match_cons(c_14, sym_Rec_2))
    {
      d_14 = ATgetArgument(c_14, 0);
      e_14 = ATgetArgument(c_14, 1);
      t = (ATerm) ATinsert(ATempty, not_null(d_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declared_vars_0 (ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
    m_14 = t;
    k_14 :
    if(match_cons(m_14, sym_VarDec_2))
      {
        n_14 = ATgetArgument(m_14, 0);
        l_14 = ATgetArgument(m_14, 1);
        t = not_null(n_14);
      }
    else
      {
        if(match_cons(m_14, sym_DefaultVarDec_1))
          {
            n_14 = ATgetArgument(m_14, 0);
            t = not_null(n_14);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1(t, x_0);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
  u_14 = t;
  t_14 :
  if(match_cons(u_14, sym_SDef_3))
    {
      v_14 = ATgetArgument(u_14, 0);
      w_14 = ATgetArgument(u_14, 1);
      x_14 = ATgetArgument(u_14, 2);
      {
        t = not_null(w_14);
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
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL;
  h_15 = t;
  g_15 :
  if(match_cons(h_15, sym_Let_2))
    {
      i_15 = ATgetArgument(h_15, 0);
      j_15 = ATgetArgument(h_15, 1);
      {
        t = not_null(i_15);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
            m_15 = t;
            f_15 :
            if(match_cons(m_15, sym_SDef_3))
              {
                n_15 = ATgetArgument(m_15, 0);
                o_15 = ATgetArgument(m_15, 1);
                p_15 = ATgetArgument(m_15, 2);
                t = not_null(n_15);
              }
            else
              {
                if(match_cons(m_15, sym_SDefT_4))
                  {
                    n_15 = ATgetArgument(m_15, 0);
                    o_15 = ATgetArgument(m_15, 1);
                    p_15 = ATgetArgument(m_15, 2);
                    q_15 = ATgetArgument(m_15, 3);
                    t = not_null(n_15);
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, y_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Add2_0 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL;
  y_15 = t;
  x_15 :
  if(match_cons(y_15, sym_SVar_1))
    {
      z_15 = ATgetArgument(y_15, 0);
      t = (ATerm) ATinsert(ATempty, not_null(z_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm d_90 (ATerm))
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  e_16 = t;
  d_16 :
  if(match_cons(e_16, sym__2))
    {
      f_16 = ATgetArgument(e_16, 0);
      g_16 = ATgetArgument(e_16, 1);
      {
        t = not_null(f_16);
        {
          ATerm k_16 (ATerm t)
          {
            ATerm j_9 = t;
            int k_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(g_16);
                ;
                LocalPopChoice(k_9);
              }
            else
              {
                t = j_9;
                {
                  ATerm l_9 = t;
                  int m_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_0 (ATerm t)
                      {
                        t = not_null(g_16);
                        return(t);
                      }
                      t = HdMember_p__2(t, d_90, z_0);
                      t = k_16(t);
                      ;
                      LocalPopChoice(m_9);
                    }
                  else
                    {
                      t = l_9;
                      t = Cons_2(t, _id, k_16);
                    }
                }
              }
            return(t);
          }
          t = k_16(t);
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
ATerm foldr_3 (ATerm t, ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm u_92 (ATerm))
{
  ATerm n_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_92(t);
      ;
      LocalPopChoice(o_9);
    }
  else
    {
      t = n_9;
      {
        ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
        p_16 = t;
        o_16 :
        if(((ATgetType(p_16) == AT_LIST) && !(ATisEmpty(p_16))))
          {
            q_16 = ATgetFirst((ATermList) p_16);
            r_16 = (ATerm) ATgetNext((ATermList) p_16);
            {
              ATerm u_16 = NULL,w_16 = NULL;
              ATerm p_9;
              p_9 = t;
              {
                ATerm v_16 = NULL;
                t = not_null(q_16);
                {
                  t = u_92(t);
                  {
                    v_16 = t;
                    if(((u_16 != NULL) && (u_16 != v_16)))
                      _fail(v_16);
                    else
                      u_16 = v_16;
                  }
                }
              }
              t = p_9;
              {
                ATerm x_16 = NULL;
                t = not_null(r_16);
                {
                  t = foldr_3(t, s_92, t_92, u_92);
                  {
                    x_16 = t;
                    if(((w_16 != NULL) && (w_16 != x_16)))
                      _fail(x_16);
                    else
                      w_16 = x_16;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_16), not_null(w_16));
                  t = t_92(t);
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
ATerm crush_3 (ATerm t, ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm s_90 (ATerm))
{
  ATerm f_17 = NULL;
  ATerm h_17 = NULL;
  f_17 = t;
  {
    ATerm i_17 = NULL;
    ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
    t = not_null(f_17);
    {
      i_17 = t;
      {
        t = SSL_explode_term(not_null(i_17));
        {
          k_17 = t;
          e_17 :
          if(match_cons(k_17, sym__2))
            {
              l_17 = ATgetArgument(k_17, 0);
              m_17 = ATgetArgument(k_17, 1);
              if(((h_17 != NULL) && (h_17 != m_17)))
                _fail(m_17);
              else
                h_17 = m_17;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_17);
      t = foldr_3(t, q_90, r_90, s_90);
    }
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm t_17 (ATerm t)
  {
    ATerm q_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_96(t);
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
              ATerm r_17 = NULL;
              ATerm a_10;
              a_10 = t;
              {
                ATerm s_17 = NULL;
                t = v_96(t);
                {
                  s_17 = t;
                  if(((r_17 != NULL) && (r_17 != s_17)))
                    _fail(s_17);
                  else
                    r_17 = s_17;
                }
              }
              t = a_10;
              {
                ATerm a_1 (ATerm t)
                {
                  ATerm c_1 (ATerm t)
                  {
                    t = not_null(r_17);
                    return(t);
                  }
                  t = split_2(t, t_17, c_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm b_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = w_96(t, a_1, t_17, b_1);
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, d_1, union_0, _id);
                }
              }
              ;
              LocalPopChoice(t_9);
            }
          else
            {
              t = s_9;
              {
                ATerm e_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, e_1, union_0, t_17);
              }
            }
        }
      }
    return(t);
  }
  t = t_17(t);
  return(t);
}
ATerm svars_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm b_10 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(c_10);
      }
    else
      {
        t = b_10;
        {
          ATerm d_10 = t;
          int e_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(e_10);
            }
          else
            {
              t = d_10;
              {
                ATerm i_10 = t;
                int k_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0(t);
                    ;
                    LocalPopChoice(k_10);
                  }
                else
                  {
                    t = i_10;
                    {
                      ATerm m_10 = t;
                      int o_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0(t);
                          ;
                          LocalPopChoice(o_10);
                        }
                      else
                        {
                          t = m_10;
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
  t = free_vars_3(t, Add2_0, f_1, sboundin_3);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
  x_17 = t;
  w_17 :
  if(((ATgetType(x_17) == AT_LIST) && !(ATisEmpty(x_17))))
    {
      y_17 = ATgetFirst((ATermList) x_17);
      z_17 = (ATerm) ATgetNext((ATermList) x_17);
      t = not_null(y_17);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  e_18 = t;
  d_18 :
  if(match_cons(e_18, sym__2))
    {
      f_18 = ATgetArgument(e_18, 0);
      g_18 = ATgetArgument(e_18, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_18), not_null(g_18));
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
ATerm rewrite_1 (ATerm t, ATerm d_94 (ATerm))
{
  ATerm m_18 = NULL;
  ATerm o_18 = NULL;
  m_18 = t;
  {
    ATerm p_18 = NULL;
    t = term_t_6;
    {
      t = d_94(t);
      {
        p_18 = t;
        if(((o_18 != NULL) && (o_18 != p_18)))
          _fail(p_18);
        else
          o_18 = p_18;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_18), not_null(m_18));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definition_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
  x_18 = t;
  w_18 :
  if(match_cons(x_18, sym__2))
    {
      y_18 = ATgetArgument(x_18, 0);
      z_18 = ATgetArgument(x_18, 1);
      {
        ATerm c_19 = NULL;
        ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_18), (ATerm) ATempty);
        {
          ATerm g_1 (ATerm t)
          {
            t = term_r_10;
            return(t);
          }
          t = rewrite_1(t, g_1);
          {
            d_19 = t;
            u_18 :
            if(match_cons(d_19, sym_Defined_2))
              {
                e_19 = ATgetArgument(d_19, 0);
                f_19 = ATgetArgument(d_19, 1);
                v_18 :
                if(match_string(e_19, "c_0"))
                  {
                    if(((c_19 != NULL) && (c_19 != f_19)))
                      _fail(f_19);
                    else
                      c_19 = f_19;
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
        t = not_null(c_19);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL;
  l_19 = t;
  j_19 :
  if(match_cons(l_19, sym__5))
    {
      m_19 = ATgetArgument(l_19, 0);
      p_19 = ATgetArgument(l_19, 1);
      q_19 = ATgetArgument(l_19, 2);
      r_19 = ATgetArgument(l_19, 3);
      s_19 = ATgetArgument(l_19, 4);
      k_19 :
      if(((ATgetType(m_19) == AT_LIST) && !(ATisEmpty(m_19))))
        {
          n_19 = ATgetFirst((ATermList) m_19);
          o_19 = (ATerm) ATgetNext((ATermList) m_19);
          t = (ATerm) ATmakeAppl(sym__5, not_null(o_19), not_null(p_19), not_null(q_19), not_null(r_19), (ATerm) ATinsert(CheckATermList(not_null(s_19)), not_null(n_19)));
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
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
  c_20 = t;
  b_20 :
  if(match_cons(c_20, sym__2))
    {
      d_20 = ATgetArgument(c_20, 0);
      e_20 = ATgetArgument(c_20, 1);
      if(((d_20 != NULL) && (d_20 != e_20)))
        _fail(e_20);
      else
        d_20 = e_20;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm h_90 (ATerm), ATerm i_90 (ATerm))
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
  k_20 = t;
  j_20 :
  if(((ATgetType(k_20) == AT_LIST) && !(ATisEmpty(k_20))))
    {
      l_20 = ATgetFirst((ATermList) k_20);
      m_20 = (ATerm) ATgetNext((ATermList) k_20);
      {
        t = i_90(t);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm p_20 = NULL;
            p_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_20), not_null(p_20));
              t = h_90(t);
            }
            return(t);
          }
          t = fetch_1(t, h_1);
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
ATerm diff_1 (ATerm t, ATerm z_89 (ATerm))
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
  v_20 = t;
  u_20 :
  if(match_cons(v_20, sym__2))
    {
      w_20 = ATgetArgument(v_20, 0);
      x_20 = ATgetArgument(v_20, 1);
      {
        t = not_null(w_20);
        {
          ATerm b_21 (ATerm t)
          {
            ATerm s_10 = t;
            int t_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(t_10);
              }
            else
              {
                t = s_10;
                {
                  ATerm u_10 = t;
                  int v_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_1 (ATerm t)
                      {
                        t = not_null(x_20);
                        return(t);
                      }
                      t = HdMember_p__2(t, z_89, i_1);
                      t = b_21(t);
                      ;
                      LocalPopChoice(v_10);
                    }
                  else
                    {
                      t = u_10;
                      t = Cons_2(t, _id, b_21);
                    }
                }
              }
            return(t);
          }
          t = b_21(t);
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
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL;
  f_21 = t;
  d_21 :
  if(match_cons(f_21, sym__2))
    {
      g_21 = ATgetArgument(f_21, 0);
      h_21 = ATgetArgument(f_21, 1);
      e_21 :
      if(((ATgetType(h_21) == AT_LIST) && !(ATisEmpty(h_21))))
        {
          i_21 = ATgetFirst((ATermList) h_21);
          j_21 = (ATerm) ATgetNext((ATermList) h_21);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_21)), not_null(i_21)), not_null(j_21));
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
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
  q_21 = t;
  p_21 :
  if(match_cons(q_21, sym__2))
    {
      r_21 = ATgetArgument(q_21, 0);
      s_21 = ATgetArgument(q_21, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(s_21)), not_null(r_21));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL;
  a_22 = t;
  x_21 :
  if(match_cons(a_22, sym__2))
    {
      b_22 = ATgetArgument(a_22, 0);
      e_22 = ATgetArgument(a_22, 1);
      y_21 :
      if(((ATgetType(b_22) == AT_LIST) && !(ATisEmpty(b_22))))
        {
          c_22 = ATgetFirst((ATermList) b_22);
          d_22 = (ATerm) ATgetNext((ATermList) b_22);
          z_21 :
          if(((ATgetType(e_22) == AT_LIST) && !(ATisEmpty(e_22))))
            {
              f_22 = ATgetFirst((ATermList) e_22);
              g_22 = (ATerm) ATgetNext((ATermList) e_22);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(c_22), not_null(f_22)), (ATerm) ATmakeAppl(sym__2, not_null(d_22), not_null(g_22)));
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
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
  q_22 = t;
  n_22 :
  if(match_cons(q_22, sym__2))
    {
      r_22 = ATgetArgument(q_22, 0);
      s_22 = ATgetArgument(q_22, 1);
      o_22 :
      if(((ATgetType(r_22) == AT_LIST) && ATisEmpty(r_22)))
        {
          p_22 :
          if(((ATgetType(s_22) == AT_LIST) && ATisEmpty(s_22)))
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
ATerm genzip_4 (ATerm t, ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm f_86 (ATerm))
{
  ATerm u_22 (ATerm t)
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_86(t);
        ;
        LocalPopChoice(x_10);
      }
    else
      {
        t = w_10;
        {
          t = d_86(t);
          {
            t = _2(t, f_86, u_22);
            t = e_86(t);
          }
        }
      }
    return(t);
  }
  t = u_22(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm h_86 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, h_86);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
  f_23 = t;
  d_23 :
  if(((ATgetType(f_23) == AT_LIST) && !(ATisEmpty(f_23))))
    {
      g_23 = ATgetFirst((ATermList) f_23);
      j_23 = (ATerm) ATgetNext((ATermList) f_23);
      e_23 :
      if(match_cons(g_23, sym__2))
        {
          h_23 = ATgetArgument(g_23, 0);
          i_23 = ATgetArgument(g_23, 1);
          {
            ATerm n_23 = NULL,o_23 = NULL,u_23 = NULL,a_24 = NULL;
            ATerm y_10;
            y_10 = t;
            {
              ATerm p_23 = NULL;
              ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
              t = not_null(i_23);
              {
                p_23 = t;
                {
                  t = SSL_explode_term(not_null(p_23));
                  {
                    r_23 = t;
                    y_22 :
                    if(match_cons(r_23, sym__2))
                      {
                        s_23 = ATgetArgument(r_23, 0);
                        t_23 = ATgetArgument(r_23, 1);
                        {
                          if(((n_23 != NULL) && (n_23 != s_23)))
                            _fail(s_23);
                          else
                            n_23 = s_23;
                          if(((o_23 != NULL) && (o_23 != t_23)))
                            _fail(t_23);
                          else
                            o_23 = t_23;
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
            t = y_10;
            {
              ATerm z_10;
              z_10 = t;
              {
                ATerm v_23 = NULL;
                ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
                t = not_null(h_23);
                {
                  v_23 = t;
                  {
                    t = SSL_explode_term(not_null(v_23));
                    {
                      x_23 = t;
                      b_23 :
                      if(match_cons(x_23, sym__2))
                        {
                          y_23 = ATgetArgument(x_23, 0);
                          z_23 = ATgetArgument(x_23, 1);
                          {
                            if(((n_23 != NULL) && (n_23 != y_23)))
                              _fail(y_23);
                            else
                              n_23 = y_23;
                            if(((u_23 != NULL) && (u_23 != z_23)))
                              _fail(z_23);
                            else
                              u_23 = z_23;
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
              t = z_10;
              {
                ATerm b_24 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_23), not_null(o_23));
                {
                  t = zip_1(t, _id);
                  {
                    b_24 = t;
                    if(((a_24 != NULL) && (a_24 != b_24)))
                      _fail(b_24);
                    else
                      a_24 = b_24;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_24), not_null(j_23));
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
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL;
  l_24 = t;
  j_24 :
  if(((ATgetType(l_24) == AT_LIST) && !(ATisEmpty(l_24))))
    {
      m_24 = ATgetFirst((ATermList) l_24);
      p_24 = (ATerm) ATgetNext((ATermList) l_24);
      k_24 :
      if(match_cons(m_24, sym__2))
        {
          n_24 = ATgetArgument(m_24, 0);
          o_24 = ATgetArgument(m_24, 1);
          {
            ATerm r_24 = NULL;
            if(((n_24 != NULL) && (n_24 != o_24)))
              _fail(o_24);
            else
              n_24 = o_24;
            {
              if(((r_24 != NULL) && (r_24 != p_24)))
                _fail(p_24);
              else
                r_24 = p_24;
              t = not_null(r_24);
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
ATerm diff_0 (ATerm t)
{
  ATerm a_11 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 (ATerm t)
      {
        ATerm u_24 = NULL;
        u_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(u_24));
        return(t);
      }
      ATerm k_1 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              ATerm j_11 = t;
              int k_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(k_11);
                }
              else
                {
                  t = j_11;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, m_1);
            ;
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, j_1, k_1, l_1);
      ;
      LocalPopChoice(b_11);
    }
  else
    {
      t = a_11;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNext_3 (ATerm t, ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm))
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
  g_25 = t;
  e_25 :
  if(match_cons(g_25, sym__5))
    {
      h_25 = ATgetArgument(g_25, 0);
      k_25 = ATgetArgument(g_25, 1);
      l_25 = ATgetArgument(g_25, 2);
      m_25 = ATgetArgument(g_25, 3);
      n_25 = ATgetArgument(g_25, 4);
      f_25 :
      if(((ATgetType(h_25) == AT_LIST) && !(ATisEmpty(h_25))))
        {
          i_25 = ATgetFirst((ATermList) h_25);
          j_25 = (ATerm) ATgetNext((ATermList) h_25);
          {
            ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,a_26 = NULL,c_26 = NULL,e_26 = NULL;
            ATerm l_11;
            l_11 = t;
            {
              ATerm x_25 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_25), not_null(l_25));
              {
                ATerm y_25 = NULL;
                t = l_110(t);
                {
                  x_25 = t;
                  {
                    if(((u_25 != NULL) && (u_25 != x_25)))
                      _fail(x_25);
                    else
                      u_25 = x_25;
                    {
                      t = not_null(u_25);
                      {
                        ATerm z_25 = NULL;
                        t = m_110(t);
                        {
                          y_25 = t;
                          {
                            if(((v_25 != NULL) && (v_25 != y_25)))
                              _fail(y_25);
                            else
                              v_25 = y_25;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(v_25), not_null(k_25));
                              {
                                t = diff_0(t);
                                {
                                  z_25 = t;
                                  if(((w_25 != NULL) && (w_25 != z_25)))
                                    _fail(z_25);
                                  else
                                    w_25 = z_25;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = l_11;
            {
              ATerm m_11;
              m_11 = t;
              {
                ATerm b_26 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_25), not_null(j_25));
                {
                  t = conc_0(t);
                  {
                    b_26 = t;
                    if(((a_26 != NULL) && (a_26 != b_26)))
                      _fail(b_26);
                    else
                      a_26 = b_26;
                  }
                }
              }
              t = m_11;
              {
                ATerm q_11;
                q_11 = t;
                {
                  ATerm d_26 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_25), not_null(k_25));
                  {
                    t = conc_0(t);
                    {
                      d_26 = t;
                      if(((c_26 != NULL) && (c_26 != d_26)))
                        _fail(d_26);
                      else
                        c_26 = d_26;
                    }
                  }
                }
                t = q_11;
                {
                  ATerm f_26 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(i_25), not_null(u_25), not_null(m_25));
                  {
                    t = n_110(t);
                    {
                      f_26 = t;
                      if(((e_26 != NULL) && (e_26 != f_26)))
                        _fail(f_26);
                      else
                        e_26 = f_26;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(a_26), not_null(c_26), not_null(l_25), not_null(e_26), not_null(n_25));
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
ATerm GnExit_0 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
  q_26 = t;
  o_26 :
  if(match_cons(q_26, sym__5))
    {
      r_26 = ATgetArgument(q_26, 0);
      s_26 = ATgetArgument(q_26, 1);
      t_26 = ATgetArgument(q_26, 2);
      u_26 = ATgetArgument(q_26, 3);
      v_26 = ATgetArgument(q_26, 4);
      p_26 :
      if(((ATgetType(r_26) == AT_LIST) && ATisEmpty(r_26)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_26), not_null(v_26));
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
ATerm GnInitRoots_0 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
  d_27 = t;
  c_27 :
  if(match_cons(d_27, sym__3))
    {
      e_27 = ATgetArgument(d_27, 0);
      f_27 = ATgetArgument(d_27, 1);
      g_27 = ATgetArgument(d_27, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(e_27), not_null(e_27), not_null(f_27), not_null(g_27), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm a_99 (ATerm), ATerm b_99 (ATerm))
{
  ATerm l_27 (ATerm t)
  {
    ATerm s_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_99(t);
        ;
        LocalPopChoice(u_11);
      }
    else
      {
        t = s_11;
        {
          t = b_99(t);
          t = l_27(t);
        }
      }
    return(t);
  }
  t = l_27(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm))
{
  t = d_99(t);
  t = while_not_2(t, e_99, f_99);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm v_109 (ATerm))
{
  ATerm n_1 (ATerm t)
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3(t, t_109, u_109, v_109);
        ;
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, n_1);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm k_110 (ATerm))
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
  t = graph_nodes_undef_roots_3(t, i_110, j_110, k_110);
  {
    e_28 = t;
    n_27 :
    if(match_cons(e_28, sym__2))
      {
        f_28 = ATgetArgument(e_28, 0);
        g_28 = ATgetArgument(e_28, 1);
        t = not_null(f_28);
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm b_94 (ATerm))
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
  p_28 = t;
  o_28 :
  if(match_cons(p_28, sym__2))
    {
      q_28 = ATgetArgument(p_28, 0);
      r_28 = ATgetArgument(p_28, 1);
      {
        ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
        ATerm z_11;
        z_11 = t;
        {
          ATerm x_28 = NULL;
          ATerm y_28 = NULL,g_29 = NULL,l_29 = NULL;
          t = b_94(t);
          {
            x_28 = t;
            {
              if(((u_28 != NULL) && (u_28 != x_28)))
                _fail(x_28);
              else
                u_28 = x_28;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(u_28), not_null(q_28), not_null(r_28));
                {
                  t = table_push_0(t);
                  {
                    ATerm a_12 = t;
                    int b_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(u_28), term_e_8);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(b_12);
                      }
                    else
                      {
                        t = a_12;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      y_28 = t;
                      n_28 :
                      if(((ATgetType(y_28) == AT_LIST) && !(ATisEmpty(y_28))))
                        {
                          g_29 = ATgetFirst((ATermList) y_28);
                          l_29 = (ATerm) ATgetNext((ATermList) y_28);
                          {
                            if(((v_28 != NULL) && (v_28 != g_29)))
                              _fail(g_29);
                            else
                              v_28 = g_29;
                            {
                              if(((w_28 != NULL) && (w_28 != l_29)))
                                _fail(l_29);
                              else
                                w_28 = l_29;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(u_28), term_e_8, (ATerm) ATinsert(CheckATermList(not_null(w_28)), (ATerm) ATinsert(CheckATermList(not_null(v_28)), not_null(q_28))));
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
        t = z_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RegisterDefinition_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,z_29 = NULL,a_30 = NULL;
  v_29 = t;
  u_29 :
  if(match_cons(v_29, sym_SDefT_4))
    {
      w_29 = ATgetArgument(v_29, 0);
      x_29 = ATgetArgument(v_29, 1);
      z_29 = ATgetArgument(v_29, 2);
      a_30 = ATgetArgument(v_29, 3);
      {
        ATerm c_12;
        c_12 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(w_29), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_d_12, not_null(v_29)));
          {
            ATerm o_1 (ATerm t)
            {
              t = term_r_10;
              return(t);
            }
            t = assert_1(t, o_1);
          }
        }
        t = c_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm dead_def_elim_0 (ATerm t)
{
  ATerm k_30 = NULL;
  ATerm l_30 = NULL;
  t = map_1(t, RegisterDefinition_0);
  {
    l_30 = t;
    if(((k_30 != NULL) && (k_30 != l_30)))
      _fail(l_30);
    else
      k_30 = l_30;
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_e_12), not_null(k_30), (ATerm) ATempty);
    {
      ATerm p_1 (ATerm t)
      {
        ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL;
        m_30 = t;
        j_30 :
        if(match_cons(m_30, sym__3))
          {
            n_30 = ATgetArgument(m_30, 0);
            o_30 = ATgetArgument(m_30, 1);
            p_30 = ATgetArgument(m_30, 2);
            t = (ATerm) ATinsert(CheckATermList(not_null(p_30)), not_null(o_30));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = graph_nodes_roots_3(t, Definition_0, svars_0, p_1);
    }
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm x_66 (ATerm))
{
  ATerm a_31 = NULL,b_31 = NULL;
  a_31 = t;
  z_30 :
  if(match_cons(a_31, sym_Strategies_1))
    {
      b_31 = ATgetArgument(a_31, 0);
      {
        ATerm e_31 = NULL,g_31 = NULL;
        ATerm f_31 = NULL;
        t = SSLgetAnnotations(not_null(a_31));
        {
          f_31 = t;
          if(((e_31 != NULL) && (e_31 != f_31)))
            _fail(f_31);
          else
            e_31 = f_31;
        }
        {
          t = not_null(b_31);
          {
            ATerm k_31 = NULL;
            t = x_66(t);
            {
              g_31 = t;
              {
                ATerm l_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(g_31)), not_null(e_31));
                {
                  l_31 = t;
                  if(((k_31 != NULL) && (k_31 != l_31)))
                    _fail(l_31);
                  else
                    k_31 = l_31;
                }
                t = not_null(k_31);
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
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
  w_31 = t;
  v_31 :
  if(((ATgetType(w_31) == AT_LIST) && !(ATisEmpty(w_31))))
    {
      x_31 = ATgetFirst((ATermList) w_31);
      y_31 = (ATerm) ATgetNext((ATermList) w_31);
      {
        ATerm c_32 = NULL,e_32 = NULL;
        ATerm d_32 = NULL;
        t = SSLgetAnnotations(not_null(w_31));
        {
          d_32 = t;
          if(((c_32 != NULL) && (c_32 != d_32)))
            _fail(d_32);
          else
            c_32 = d_32;
        }
        {
          t = not_null(x_31);
          {
            ATerm g_32 = NULL;
            t = t_66(t);
            {
              e_32 = t;
              {
                t = not_null(y_31);
                {
                  ATerm i_32 = NULL;
                  t = u_66(t);
                  {
                    g_32 = t;
                    {
                      ATerm j_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_32)), not_null(e_32)), not_null(c_32));
                      {
                        j_32 = t;
                        if(((i_32 != NULL) && (i_32 != j_32)))
                          _fail(j_32);
                        else
                          i_32 = j_32;
                      }
                      t = not_null(i_32);
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
ATerm Specification_1 (ATerm t, ATerm c_67 (ATerm))
{
  ATerm u_32 = NULL,v_32 = NULL;
  u_32 = t;
  t_32 :
  if(match_cons(u_32, sym_Specification_1))
    {
      v_32 = ATgetArgument(u_32, 0);
      {
        ATerm y_32 = NULL,a_33 = NULL;
        ATerm z_32 = NULL;
        t = SSLgetAnnotations(not_null(u_32));
        {
          z_32 = t;
          if(((y_32 != NULL) && (y_32 != z_32)))
            _fail(z_32);
          else
            y_32 = z_32;
        }
        {
          t = not_null(v_32);
          {
            ATerm c_33 = NULL;
            t = c_67(t);
            {
              a_33 = t;
              {
                ATerm d_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(a_33)), not_null(y_32));
                {
                  d_33 = t;
                  if(((c_33 != NULL) && (c_33 != d_33)))
                    _fail(d_33);
                  else
                    c_33 = d_33;
                }
                t = not_null(c_33);
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
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
  s_33 = t;
  n_33 :
  if(match_cons(s_33, sym__2))
    {
      t_33 = ATgetArgument(s_33, 0);
      u_33 = ATgetArgument(s_33, 1);
      {
        ATerm a_34 = NULL,c_34 = NULL;
        ATerm b_34 = NULL;
        t = SSLgetAnnotations(not_null(s_33));
        {
          b_34 = t;
          if(((a_34 != NULL) && (a_34 != b_34)))
            _fail(b_34);
          else
            a_34 = b_34;
        }
        {
          t = not_null(t_33);
          {
            ATerm e_34 = NULL;
            t = k_65(t);
            {
              c_34 = t;
              {
                t = not_null(u_33);
                {
                  ATerm g_34 = NULL;
                  t = l_65(t);
                  {
                    e_34 = t;
                    {
                      ATerm h_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(c_34), not_null(e_34)), not_null(a_34));
                      {
                        h_34 = t;
                        if(((g_34 != NULL) && (g_34 != h_34)))
                          _fail(h_34);
                        else
                          g_34 = h_34;
                      }
                      t = not_null(g_34);
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
  ATerm f_12;
  f_12 = t;
  {
    ATerm o_34 = NULL;
    ATerm p_34 = NULL;
    t = term_t_6;
    {
      t = whoami_0(t);
      {
        p_34 = t;
        if(((o_34 != NULL) && (o_34 != p_34)))
          _fail(p_34);
        else
          o_34 = p_34;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_12, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_12), not_null(o_34)), term_h_12));
      {
        t = printnl_0(t);
        {
          t = term_n_12;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_12;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t_34 = t;
  s_34 :
  if(match_cons(t_34, sym__2))
    {
      u_34 = ATgetArgument(t_34, 0);
      v_34 = ATgetArgument(t_34, 1);
      {
        ATerm o_12;
        o_12 = t;
        t = SSL_printnl(not_null(u_34), not_null(v_34));
        t = o_12;
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
  ATerm a_35 = NULL;
  a_35 = t;
  t = SSL_implode_string(not_null(a_35));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(u_12);
    }
  else
    {
      t = s_12;
      {
        ATerm f_35 = NULL,l_35 = NULL,m_35 = NULL;
        f_35 = t;
        e_35 :
        if(((ATgetType(f_35) == AT_LIST) && !(ATisEmpty(f_35))))
          {
            l_35 = ATgetFirst((ATermList) f_35);
            m_35 = (ATerm) ATgetNext((ATermList) f_35);
            {
              t = not_null(l_35);
              {
                ATerm q_1 (ATerm t)
                {
                  t = not_null(m_35);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm w_35 = NULL;
  ATerm y_35 = NULL;
  w_35 = t;
  {
    ATerm e_36 = NULL;
    ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
    t = not_null(w_35);
    {
      e_36 = t;
      {
        t = SSL_explode_term(not_null(e_36));
        {
          g_36 = t;
          u_35 :
          if(match_cons(g_36, sym__2))
            {
              h_36 = ATgetArgument(g_36, 0);
              i_36 = ATgetArgument(g_36, 1);
              v_35 :
              if(match_string(h_36, ""))
                {
                  if(((y_35 != NULL) && (y_35 != i_36)))
                    _fail(i_36);
                  else
                    y_35 = i_36;
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
      t = not_null(y_35);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_88 (ATerm))
{
  ATerm m_36 (ATerm t)
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, m_36);
        ;
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        {
          t = Nil_0(t);
          t = h_88(t);
        }
      }
    return(t);
  }
  t = m_36(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
  p_36 = t;
  o_36 :
  if(match_cons(p_36, sym__2))
    {
      q_36 = ATgetArgument(p_36, 0);
      r_36 = ATgetArgument(p_36, 1);
      {
        t = not_null(q_36);
        {
          ATerm r_1 (ATerm t)
          {
            t = not_null(r_36);
            return(t);
          }
          t = at_end_1(t, r_1);
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
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm w_36 = NULL;
  w_36 = t;
  t = SSL_explode_string(not_null(w_36));
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
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(c_13);
    }
  else
    {
      t = b_13;
      {
        ATerm j_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, s_1);
            ;
            LocalPopChoice(k_13);
          }
        else
          {
            t = j_13;
            {
              ATerm f_37 = NULL,k_37 = NULL,l_37 = NULL;
              f_37 = t;
              e_37 :
              if(match_cons(f_37, sym_Path_1))
                {
                  k_37 = ATgetArgument(f_37, 0);
                  t = not_null(k_37);
                }
              else
                {
                  if(match_cons(f_37, sym_Var_1))
                    {
                      k_37 = ATgetArgument(f_37, 0);
                      {
                        t = not_null(k_37);
                        {
                          ATerm l_13 = t;
                          int m_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(m_13);
                            }
                          else
                            {
                              t = l_13;
                              {
                                ATerm t_1 (ATerm t)
                                {
                                  t = term_n_13;
                                  return(t);
                                }
                                t = debug_1(t, t_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(f_37, sym_Prefix_2))
                        {
                          k_37 = ATgetArgument(f_37, 0);
                          l_37 = ATgetArgument(f_37, 1);
                          {
                            ATerm v_37 = NULL,x_37 = NULL;
                            ATerm o_13;
                            o_13 = t;
                            {
                              ATerm w_37 = NULL;
                              t = not_null(k_37);
                              {
                                t = eval_config_0(t);
                                {
                                  w_37 = t;
                                  if(((v_37 != NULL) && (v_37 != w_37)))
                                    _fail(w_37);
                                  else
                                    v_37 = w_37;
                                }
                              }
                            }
                            t = o_13;
                            {
                              ATerm y_37 = NULL;
                              t = not_null(l_37);
                              {
                                t = eval_config_0(t);
                                {
                                  y_37 = t;
                                  if(((x_37 != NULL) && (x_37 != y_37)))
                                    _fail(y_37);
                                  else
                                    x_37 = y_37;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_37), not_null(x_37));
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
  ATerm g_38 = NULL;
  g_38 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_13, not_null(g_38));
    {
      t = table_get_0(t);
      {
        ATerm u_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm w_13;
            w_13 = t;
            {
              ATerm i_38 = NULL;
              ATerm j_38 = NULL;
              j_38 = t;
              if(((i_38 != NULL) && (i_38 != j_38)))
                _fail(j_38);
              else
                i_38 = j_38;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_v_13, not_null(g_38), not_null(i_38));
                t = table_put_0(t);
              }
            }
            t = w_13;
          }
          return(t);
        }
        t = try_1(t, u_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm j_104 (ATerm))
{
  ATerm v_1 (ATerm t)
  {
    ATerm x_13;
    x_13 = t;
    {
      ATerm n_38 = NULL;
      ATerm o_38 = NULL;
      t = term_y_13;
      {
        t = get_config_0(t);
        {
          o_38 = t;
          if(((n_38 != NULL) && (n_38 != o_38)))
            _fail(o_38);
          else
            n_38 = o_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_38), term_z_13);
        t = geq_0(t);
      }
    }
    t = x_13;
    t = j_104(t);
    return(t);
  }
  t = try_1(t, v_1);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL;
  y_38 = t;
  w_38 :
  if(match_cons(y_38, sym__2))
    {
      z_38 = ATgetArgument(y_38, 0);
      a_39 = ATgetArgument(y_38, 1);
      x_38 :
      if(match_cons(a_39, sym_Stream_1))
        {
          b_39 = ATgetArgument(a_39, 0);
          {
            ATerm e_39 = NULL;
            t = SSL_fputc(not_null(z_38), not_null(b_39));
            {
              ATerm f_39 = NULL;
              f_39 = t;
              if(((e_39 != NULL) && (e_39 != f_39)))
                _fail(f_39);
              else
                e_39 = f_39;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_39));
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
  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL;
  m_39 = t;
  k_39 :
  if(match_cons(m_39, sym__2))
    {
      n_39 = ATgetArgument(m_39, 0);
      p_39 = ATgetArgument(m_39, 1);
      l_39 :
      if(match_cons(n_39, sym_Stream_1))
        {
          o_39 = ATgetArgument(n_39, 0);
          {
            ATerm s_39 = NULL;
            t = SSL_write_term_to_stream_text(not_null(o_39), not_null(p_39));
            {
              ATerm t_39 = NULL;
              t_39 = t;
              if(((s_39 != NULL) && (s_39 != t_39)))
                _fail(t_39);
              else
                s_39 = t_39;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_39));
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
  ATerm w_1 (ATerm t)
  {
    ATerm x_39 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm y_39 = NULL;
      y_39 = t;
      if(((x_39 != NULL) && (x_39 != y_39)))
        _fail(y_39);
      else
        x_39 = y_39;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_14, not_null(x_39));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, w_1);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL;
  e_40 = t;
  c_40 :
  if(match_cons(e_40, sym__2))
    {
      f_40 = ATgetArgument(e_40, 0);
      h_40 = ATgetArgument(e_40, 1);
      d_40 :
      if(match_cons(f_40, sym_Stream_1))
        {
          g_40 = ATgetArgument(f_40, 0);
          {
            ATerm k_40 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(g_40), not_null(h_40));
            {
              ATerm l_40 = NULL;
              l_40 = t;
              if(((k_40 != NULL) && (k_40 != l_40)))
                _fail(l_40);
              else
                k_40 = l_40;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_40));
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
ATerm WriteToFile_1 (ATerm t, ATerm f_103 (ATerm))
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
  t_40 = t;
  r_40 :
  if(match_cons(t_40, sym__2))
    {
      u_40 = ATgetArgument(t_40, 0);
      v_40 = ATgetArgument(t_40, 1);
      {
        ATerm a_41 = NULL,c_41 = NULL;
        t = not_null(u_40);
        {
          ATerm b_41 = NULL;
          b_41 = t;
          if(((a_41 != NULL) && (a_41 != b_41)))
            _fail(b_41);
          else
            a_41 = b_41;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_41), term_f_14);
            {
              t = open_stream_0(t);
              {
                ATerm d_41 = NULL;
                d_41 = t;
                if(((c_41 != NULL) && (c_41 != d_41)))
                  _fail(d_41);
                else
                  c_41 = d_41;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_41), not_null(v_40));
                  {
                    t = f_103(t);
                    {
                      t = fclose_0(t);
                      t = not_null(v_40);
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
  ATerm l_41 = NULL;
  ATerm g_14;
  g_14 = t;
  {
    ATerm x_1 (ATerm t)
    {
      ATerm h_14 = t;
      int i_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_1 (ATerm t)
          {
            ATerm m_41 = NULL,n_41 = NULL;
            m_41 = t;
            i_41 :
            if(match_cons(m_41, sym_Output_1))
              {
                n_41 = ATgetArgument(m_41, 0);
                if(((l_41 != NULL) && (l_41 != n_41)))
                  _fail(n_41);
                else
                  l_41 = n_41;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, y_1);
          ;
          LocalPopChoice(i_14);
        }
      else
        {
          t = h_14;
          {
            ATerm o_41 = NULL;
            t = term_j_14;
            {
              o_41 = t;
              if(((l_41 != NULL) && (l_41 != o_41)))
                _fail(o_41);
              else
                l_41 = o_41;
            }
          }
        }
      return(t);
    }
    t = _2(t, x_1, _id);
  }
  t = g_14;
  {
    ATerm z_1 (ATerm t)
    {
      ATerm a_2 (ATerm t)
      {
        t = not_null(l_41);
        return(t);
      }
      t = split_2(t, a_2, _id);
      return(t);
    }
    t = _2(t, _id, z_1);
    {
      ATerm o_14 = t;
      int p_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_2 (ATerm t)
          {
            ATerm c_2 (ATerm t)
            {
              ATerm p_41 = NULL;
              p_41 = t;
              k_41 :
              if(!(match_cons(p_41, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, c_2);
            return(t);
          }
          t = _2(t, b_2, WriteToBinaryFile_0);
          ;
          LocalPopChoice(p_14);
        }
      else
        {
          t = o_14;
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
ATerm apply_strategy_1 (ATerm t, ATerm h_106 (ATerm))
{
  ATerm v_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL;
  ATerm q_14;
  q_14 = t;
  t = dtime_0(t);
  t = q_14;
  {
    t = h_106(t);
    {
      ATerm r_14;
      r_14 = t;
      {
        ATerm w_41 = NULL;
        t = dtime_0(t);
        {
          w_41 = t;
          if(((v_41 != NULL) && (v_41 != w_41)))
            _fail(w_41);
          else
            v_41 = w_41;
        }
      }
      t = r_14;
      {
        z_41 = t;
        u_41 :
        if(match_cons(z_41, sym__2))
          {
            a_42 = ATgetArgument(z_41, 0);
            b_42 = ATgetArgument(z_41, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_42)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(v_41))), not_null(b_42));
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
  ATerm j_43 = NULL,k_43 = NULL;
  ATerm q_43 (ATerm t)
  {
    t = SSL_fclose(not_null(k_43));
    return(t);
  }
  k_43 = t;
  i_43 :
  if(match_cons(k_43, sym_Stream_1))
    {
      j_43 = ATgetArgument(k_43, 0);
      {
        ATerm s_14 = t;
        int y_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(j_43));
            ;
            LocalPopChoice(y_14);
          }
        else
          {
            t = s_14;
            t = q_43(t);
          }
      }
    }
  else
    {
      t = q_43(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL;
  t_43 = t;
  s_43 :
  if(match_cons(t_43, sym_Stream_1))
    {
      u_43 = ATgetArgument(t_43, 0);
      t = SSL_read_term_from_stream(not_null(u_43));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm r_102 (ATerm))
{
  ATerm z_14;
  z_14 = t;
  {
    ATerm z_43 = NULL,b_44 = NULL;
    ATerm a_15;
    a_15 = t;
    {
      ATerm a_44 = NULL;
      t = r_102(t);
      {
        a_44 = t;
        if(((z_43 != NULL) && (z_43 != a_44)))
          _fail(a_44);
        else
          z_43 = a_44;
      }
    }
    t = a_15;
    {
      ATerm j_44 = NULL;
      j_44 = t;
      if(((b_44 != NULL) && (b_44 != j_44)))
        _fail(j_44);
      else
        b_44 = j_44;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_44)), not_null(z_43)));
        t = printnl_0(t);
      }
    }
  }
  t = z_14;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL;
  p_44 = t;
  o_44 :
  if(match_cons(p_44, sym__2))
    {
      q_44 = ATgetArgument(p_44, 0);
      r_44 = ATgetArgument(p_44, 1);
      {
        ATerm u_44 = NULL;
        t = SSL_fopen(not_null(q_44), not_null(r_44));
        {
          ATerm v_44 = NULL;
          v_44 = t;
          if(((u_44 != NULL) && (u_44 != v_44)))
            _fail(v_44);
          else
            u_44 = v_44;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_44));
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
  ATerm z_44 = NULL;
  z_44 = t;
  t = SSL_is_string(not_null(z_44));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm d_45 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm e_45 = NULL;
    e_45 = t;
    if(((d_45 != NULL) && (d_45 != e_45)))
      _fail(e_45);
    else
      d_45 = e_45;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_45));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm h_45 = NULL;
  t = SSL_stdout_stream();
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
ATerm stderr_stream_0 (ATerm t)
{
  ATerm l_45 = NULL;
  t = SSL_stderr_stream();
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
ATerm stdio_stream_0 (ATerm t)
{
  ATerm s_45 = NULL;
  s_45 = t;
  r_45 :
  if(match_cons(s_45, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(s_45, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(s_45, sym_stdin_0))
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
  ATerm c_46 = NULL;
  ATerm e_46 = NULL,f_46 = NULL;
  c_46 = t;
  {
    ATerm g_46 = NULL;
    ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL;
    t = not_null(c_46);
    {
      g_46 = t;
      {
        t = SSL_explode_term(not_null(g_46));
        {
          j_46 = t;
          z_45 :
          if(match_cons(j_46, sym__2))
            {
              k_46 = ATgetArgument(j_46, 0);
              l_46 = ATgetArgument(j_46, 1);
              a_46 :
              if(match_string(k_46, ""))
                {
                  b_46 :
                  if(((ATgetType(l_46) == AT_LIST) && !(ATisEmpty(l_46))))
                    {
                      m_46 = ATgetFirst((ATermList) l_46);
                      n_46 = (ATerm) ATgetNext((ATermList) l_46);
                      {
                        if(((f_46 != NULL) && (f_46 != m_46)))
                          _fail(m_46);
                        else
                          f_46 = m_46;
                        if(((e_46 != NULL) && (e_46 != n_46)))
                          _fail(n_46);
                        else
                          e_46 = n_46;
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
    t = not_null(f_46);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL;
  v_46 = t;
  u_46 :
  if(match_cons(v_46, sym__2))
    {
      w_46 = ATgetArgument(v_46, 0);
      x_46 = ATgetArgument(v_46, 1);
      {
        ATerm b_15 = t;
        int c_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(c_15);
          }
        else
          {
            t = b_15;
            {
              ATerm d_15 = t;
              int e_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_2 (ATerm t)
                  {
                    ATerm y_46 = NULL,z_46 = NULL;
                    y_46 = t;
                    t_46 :
                    if(match_cons(y_46, sym_Path_1))
                      {
                        z_46 = ATgetArgument(y_46, 0);
                        t = not_null(z_46);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, d_2, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(e_15);
                }
              else
                {
                  t = d_15;
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
  ATerm h_47 = NULL;
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_47 = NULL;
      ATerm g_47 = NULL;
      g_47 = t;
      if(((f_47 != NULL) && (f_47 != g_47)))
        _fail(g_47);
      else
        f_47 = g_47;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_47), term_r_15);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      {
        ATerm e_2 (ATerm t)
        {
          t = term_s_15;
          return(t);
        }
        t = debug_1(t, e_2);
        _fail(t);
      }
    }
  {
    ATerm t_15;
    t_15 = t;
    {
      ATerm i_47 = NULL;
      t = read_from_stream_0(t);
      {
        i_47 = t;
        if(((h_47 != NULL) && (h_47 != i_47)))
          _fail(i_47);
        else
          h_47 = i_47;
      }
    }
    t = t_15;
    {
      t = fclose_0(t);
      t = not_null(h_47);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm c_85 (ATerm), ATerm d_85 (ATerm))
{
  ATerm n_47 = NULL,p_47 = NULL;
  ATerm u_15;
  u_15 = t;
  {
    ATerm o_47 = NULL;
    t = c_85(t);
    {
      o_47 = t;
      if(((n_47 != NULL) && (n_47 != o_47)))
        _fail(o_47);
      else
        n_47 = o_47;
    }
  }
  t = u_15;
  {
    ATerm q_47 = NULL;
    t = d_85(t);
    {
      q_47 = t;
      if(((p_47 != NULL) && (p_47 != q_47)))
        _fail(q_47);
      else
        p_47 = q_47;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_47), not_null(p_47));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm w_47 = NULL;
  ATerm v_15;
  v_15 = t;
  {
    ATerm w_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_2 (ATerm t)
        {
          ATerm x_47 = NULL,y_47 = NULL;
          x_47 = t;
          u_47 :
          if(match_cons(x_47, sym_Input_1))
            {
              y_47 = ATgetArgument(x_47, 0);
              if(((w_47 != NULL) && (w_47 != y_47)))
                _fail(y_47);
              else
                w_47 = y_47;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, f_2);
        ;
        LocalPopChoice(a_16);
      }
    else
      {
        t = w_15;
        {
          ATerm z_47 = NULL;
          t = term_b_16;
          {
            z_47 = t;
            if(((w_47 != NULL) && (w_47 != z_47)))
              _fail(z_47);
            else
              w_47 = z_47;
          }
        }
      }
  }
  t = v_15;
  {
    ATerm g_2 (ATerm t)
    {
      t = not_null(w_47);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, g_2);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm e_48 = NULL;
    e_48 = t;
    c_48 :
    if(!(match_string(e_48, "-k")))
      {
        if(!(match_string(e_48, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm c_16;
    c_16 = t;
    {
      ATerm f_48 = NULL;
      ATerm g_48 = NULL;
      t = string_to_int_0(t);
      {
        g_48 = t;
        if(((f_48 != NULL) && (f_48 != g_48)))
          _fail(g_48);
        else
          f_48 = g_48;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_16, not_null(f_48));
        t = set_config_0(t);
      }
    }
    t = c_16;
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_i_16;
    return(t);
  }
  t = ArgOption_3(t, h_2, i_2, j_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm j_48 = NULL;
  j_48 = t;
  t = SSL_string_to_int(not_null(j_48));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm j_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_2 (ATerm t)
      {
        ATerm r_48 = NULL;
        r_48 = t;
        m_48 :
        if(!(match_string(r_48, "-S")))
          {
            if(!(match_string(r_48, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_2 (ATerm t)
      {
        t = term_n_16;
        t = set_config_0(t);
        t = term_s_16;
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        t = term_t_16;
        return(t);
      }
      t = Option_3(t, k_2, l_2, m_2);
      ;
      LocalPopChoice(l_16);
    }
  else
    {
      t = j_16;
      {
        ATerm y_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 (ATerm t)
            {
              ATerm s_48 = NULL;
              s_48 = t;
              n_48 :
              if(!(match_string(s_48, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm o_2 (ATerm t)
            {
              ATerm v_48 = NULL;
              ATerm a_17;
              a_17 = t;
              {
                ATerm t_48 = NULL;
                ATerm u_48 = NULL;
                t = string_to_int_0(t);
                {
                  u_48 = t;
                  if(((t_48 != NULL) && (t_48 != u_48)))
                    _fail(u_48);
                  else
                    t_48 = u_48;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_13, not_null(t_48));
                  t = set_config_0(t);
                }
              }
              t = a_17;
              {
                ATerm w_48 = NULL;
                w_48 = t;
                if(((v_48 != NULL) && (v_48 != w_48)))
                  _fail(w_48);
                else
                  v_48 = w_48;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(v_48));
              }
              return(t);
            }
            ATerm p_2 (ATerm t)
            {
              t = term_b_17;
              return(t);
            }
            t = ArgOption_3(t, n_2, o_2, p_2);
            ;
            LocalPopChoice(z_16);
          }
        else
          {
            t = y_16;
            {
              ATerm q_2 (ATerm t)
              {
                ATerm x_48 = NULL;
                x_48 = t;
                q_48 :
                if(!(match_string(x_48, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm r_2 (ATerm t)
              {
                t = term_d_17;
                t = set_config_0(t);
                t = term_g_17;
                return(t);
              }
              ATerm s_2 (ATerm t)
              {
                t = term_j_17;
                return(t);
              }
              t = Option_3(t, q_2, r_2, s_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    ATerm d_49 = NULL;
    d_49 = t;
    a_49 :
    if(!(match_string(d_49, "-o")))
      {
        if(!(match_string(d_49, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm g_49 = NULL;
    ATerm p_17;
    p_17 = t;
    {
      ATerm e_49 = NULL;
      ATerm f_49 = NULL;
      f_49 = t;
      if(((e_49 != NULL) && (e_49 != f_49)))
        _fail(f_49);
      else
        e_49 = f_49;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_17, not_null(e_49));
        t = set_config_0(t);
      }
    }
    t = p_17;
    {
      ATerm h_49 = NULL;
      h_49 = t;
      if(((g_49 != NULL) && (g_49 != h_49)))
        _fail(h_49);
      else
        g_49 = h_49;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_49));
    }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_u_17;
    return(t);
  }
  t = ArgOption_3(t, t_2, u_2, v_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm v_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(a_18);
    }
  else
    {
      t = v_17;
      {
        ATerm y_2 (ATerm t)
        {
          ATerm l_49 = NULL;
          l_49 = t;
          k_49 :
          if(!(match_string(l_49, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm z_2 (ATerm t)
        {
          t = term_c_18;
          t = set_config_0(t);
          t = term_h_18;
          return(t);
        }
        ATerm a_3 (ATerm t)
        {
          t = term_i_18;
          return(t);
        }
        t = Option_3(t, y_2, z_2, a_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL;
  r_49 = t;
  p_49 :
  if(match_string(r_49, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(r_49) == AT_LIST) && !(ATisEmpty(r_49))))
        {
          s_49 = ATgetFirst((ATermList) r_49);
          t_49 = (ATerm) ATgetNext((ATermList) r_49);
          q_49 :
          if(((ATgetType(t_49) == AT_LIST) && !(ATisEmpty(t_49))))
            {
              u_49 = ATgetFirst((ATermList) t_49);
              v_49 = (ATerm) ATgetNext((ATermList) t_49);
              {
                ATerm z_49 = NULL;
                ATerm j_18;
                j_18 = t;
                {
                  t = not_null(s_49);
                  t = l_0(t);
                }
                t = j_18;
                {
                  ATerm a_50 = NULL;
                  t = not_null(u_49);
                  {
                    t = m_0(t);
                    {
                      a_50 = t;
                      if(((z_49 != NULL) && (z_49 != a_50)))
                        _fail(a_50);
                      else
                        z_49 = a_50;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(v_49)), not_null(z_49));
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
  ATerm b_3 (ATerm t)
  {
    ATerm h_50 = NULL;
    h_50 = t;
    e_50 :
    if(!(match_string(h_50, "-i")))
      {
        if(!(match_string(h_50, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    ATerm k_50 = NULL;
    ATerm k_18;
    k_18 = t;
    {
      ATerm i_50 = NULL;
      ATerm j_50 = NULL;
      j_50 = t;
      if(((i_50 != NULL) && (i_50 != j_50)))
        _fail(j_50);
      else
        i_50 = j_50;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_18, not_null(i_50));
        t = set_config_0(t);
      }
    }
    t = k_18;
    {
      ATerm l_50 = NULL;
      l_50 = t;
      if(((k_50 != NULL) && (k_50 != l_50)))
        _fail(l_50);
      else
        k_50 = l_50;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_50));
    }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_n_18;
    return(t);
  }
  t = ArgOption_3(t, b_3, c_3, d_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
      {
        ATerm s_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(t_18);
          }
        else
          {
            t = s_18;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm p_50 = NULL;
  t = report_run_time_0(t);
  {
    ATerm q_50 = NULL;
    t = term_t_6;
    {
      t = whoami_0(t);
      {
        q_50 = t;
        if(((p_50 != NULL) && (p_50 != q_50)))
          _fail(q_50);
        else
          p_50 = q_50;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_12, (ATerm) ATinsert(ATinsert(ATempty, term_a_19), not_null(p_50)));
      {
        t = printnl_0(t);
        {
          t = term_n_12;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_b_19;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm t_50 = NULL;
  t_50 = t;
  t = SSL_TicksToSeconds(not_null(t_50));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
  b_51 = t;
  a_51 :
  if(match_cons(b_51, sym__2))
    {
      c_51 = ATgetArgument(b_51, 0);
      d_51 = ATgetArgument(b_51, 1);
      {
        ATerm g_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(c_51), not_null(d_51));
            ;
            LocalPopChoice(h_19);
          }
        else
          {
            t = g_19;
            t = SSL_addr(not_null(c_51), not_null(d_51));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm q_92 (ATerm), ATerm r_92 (ATerm))
{
  ATerm i_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_92(t);
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = i_19;
      {
        ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL;
        k_51 = t;
        j_51 :
        if(((ATgetType(k_51) == AT_LIST) && !(ATisEmpty(k_51))))
          {
            l_51 = ATgetFirst((ATermList) k_51);
            m_51 = (ATerm) ATgetNext((ATermList) k_51);
            {
              ATerm p_51 = NULL;
              ATerm q_51 = NULL;
              t = not_null(m_51);
              {
                t = foldr_2(t, q_92, r_92);
                {
                  q_51 = t;
                  if(((p_51 != NULL) && (p_51 != q_51)))
                    _fail(q_51);
                  else
                    p_51 = q_51;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_51), not_null(p_51));
                t = r_92(t);
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
ATerm crush_2 (ATerm t, ATerm o_90 (ATerm), ATerm p_90 (ATerm))
{
  ATerm x_51 = NULL;
  ATerm z_51 = NULL;
  x_51 = t;
  {
    ATerm a_52 = NULL;
    ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL;
    t = not_null(x_51);
    {
      a_52 = t;
      {
        t = SSL_explode_term(not_null(a_52));
        {
          c_52 = t;
          w_51 :
          if(match_cons(c_52, sym__2))
            {
              d_52 = ATgetArgument(c_52, 0);
              e_52 = ATgetArgument(c_52, 1);
              if(((z_51 != NULL) && (z_51 != e_52)))
                _fail(e_52);
              else
                z_51 = e_52;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_51);
      t = foldr_2(t, o_90, p_90);
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
    ATerm e_3 (ATerm t)
    {
      t = term_m_16;
      return(t);
    }
    t = crush_2(t, e_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
  k_52 = t;
  j_52 :
  if(match_cons(k_52, sym__2))
    {
      l_52 = ATgetArgument(k_52, 0);
      m_52 = ATgetArgument(k_52, 1);
      {
        ATerm u_19;
        u_19 = t;
        {
          ATerm v_19 = t;
          int w_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_52), not_null(m_52));
              ;
              LocalPopChoice(w_19);
            }
          else
            {
              t = v_19;
              t = SSL_gtr(not_null(l_52), not_null(m_52));
            }
        }
        t = u_19;
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
  ATerm s_52 = NULL;
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL;
      t_52 = t;
      r_52 :
      if(match_cons(t_52, sym__2))
        {
          u_52 = ATgetArgument(t_52, 0);
          v_52 = ATgetArgument(t_52, 1);
          {
            if(((s_52 != NULL) && (s_52 != u_52)))
              _fail(u_52);
            else
              s_52 = u_52;
            if(((s_52 != NULL) && (s_52 != v_52)))
              _fail(v_52);
            else
              s_52 = v_52;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(y_19);
    }
  else
    {
      t = x_19;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm i_104 (ATerm))
{
  ATerm f_3 (ATerm t)
  {
    ATerm z_19;
    z_19 = t;
    {
      ATerm y_52 = NULL;
      ATerm z_52 = NULL;
      t = term_y_13;
      {
        t = get_config_0(t);
        {
          z_52 = t;
          if(((y_52 != NULL) && (y_52 != z_52)))
            _fail(z_52);
          else
            y_52 = z_52;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_52), term_n_12);
        t = geq_0(t);
      }
    }
    t = z_19;
    t = i_104(t);
    return(t);
  }
  t = try_1(t, f_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm j_53 = NULL,l_53 = NULL;
    ATerm a_20;
    a_20 = t;
    {
      ATerm k_53 = NULL;
      t = run_time_0(t);
      {
        k_53 = t;
        if(((j_53 != NULL) && (j_53 != k_53)))
          _fail(k_53);
        else
          j_53 = k_53;
      }
    }
    t = a_20;
    {
      ATerm m_53 = NULL;
      t = term_t_6;
      {
        t = whoami_0(t);
        {
          m_53 = t;
          if(((l_53 != NULL) && (l_53 != m_53)))
            _fail(m_53);
          else
            l_53 = m_53;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_20), not_null(j_53)), term_f_20), not_null(l_53)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, g_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_m_16;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_53 = NULL;
  t_53 = t;
  s_53 :
  if(match_cons(t_53, sym_Version_0))
    {
      ATerm v_53 = NULL,x_53 = NULL;
      ATerm h_20;
      h_20 = t;
      {
        ATerm w_53 = NULL;
        t = SSLgetAnnotations(not_null(t_53));
        {
          w_53 = t;
          if(((v_53 != NULL) && (v_53 != w_53)))
            _fail(w_53);
          else
            v_53 = w_53;
        }
      }
      t = h_20;
      {
        ATerm y_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(v_53));
        {
          y_53 = t;
          if(((x_53 != NULL) && (x_53 != y_53)))
            _fail(y_53);
          else
            x_53 = y_53;
        }
        t = not_null(x_53);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm f_107 (ATerm))
{
  ATerm i_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_20;
      t = get_config_0(t);
      ;
      LocalPopChoice(n_20);
    }
  else
    {
      t = i_20;
      {
        ATerm h_3 (ATerm t)
        {
          ATerm q_20 = t;
          int r_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(r_20);
            }
          else
            {
              t = q_20;
              {
                ATerm s_20 = t;
                int t_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(t_20);
                  }
                else
                  {
                    t = s_20;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, h_3);
      }
    }
  t = f_107(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm d_54 = NULL;
  d_54 = t;
  t = SSL_table_create(not_null(d_54));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm h_54 = NULL;
  h_54 = t;
  {
    ATerm y_20;
    y_20 = t;
    {
      t = term_z_20;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_z_20, term_a_21, not_null(h_54));
          t = table_put_0(t);
        }
      }
    }
    t = y_20;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm l_54 = NULL;
  l_54 = t;
  t = SSL_table_destroy(not_null(l_54));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm p_54 = NULL;
  p_54 = t;
  t = SSL_exit(not_null(p_54));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm g_109 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL;
  a_55 = t;
  x_54 :
  if(((ATgetType(a_55) == AT_LIST) && !(ATisEmpty(a_55))))
    {
      y_54 = ATgetFirst((ATermList) a_55);
      z_54 = (ATerm) ATgetNext((ATermList) a_55);
      {
        ATerm d_55 = NULL;
        t = not_null(z_54);
        {
          ATerm c_21;
          c_21 = t;
          {
            ATerm e_55 = NULL,g_55 = NULL,i_55 = NULL;
            ATerm k_21;
            k_21 = t;
            {
              ATerm f_55 = NULL;
              t = j_0(t);
              {
                f_55 = t;
                if(((e_55 != NULL) && (e_55 != f_55)))
                  _fail(f_55);
                else
                  e_55 = f_55;
              }
            }
            t = k_21;
            {
              ATerm h_55 = NULL;
              t = not_null(y_54);
              {
                t = g_0(t);
                {
                  h_55 = t;
                  if(((g_55 != NULL) && (g_55 != h_55)))
                    _fail(h_55);
                  else
                    g_55 = h_55;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_55)), not_null(g_55));
                {
                  i_55 = t;
                  if(((d_55 != NULL) && (d_55 != i_55)))
                    _fail(i_55);
                  else
                    d_55 = i_55;
                }
              }
            }
          }
          t = c_21;
          {
            ATerm i_3 (ATerm t)
            {
              t = not_null(d_55);
              return(t);
            }
            t = reverse_acc_2(t, g_0, i_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(a_55) == AT_LIST) && ATisEmpty(a_55)))
        {
          {
            t = term_t_6;
            t = j_0(t);
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
  ATerm j_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, j_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_109 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_79 (ATerm))
{
  ATerm t_55 = NULL,u_55 = NULL;
  t_55 = t;
  s_55 :
  if(match_cons(t_55, sym_Program_1))
    {
      u_55 = ATgetArgument(t_55, 0);
      {
        ATerm x_55 = NULL,z_55 = NULL;
        ATerm y_55 = NULL;
        t = SSLgetAnnotations(not_null(t_55));
        {
          y_55 = t;
          if(((x_55 != NULL) && (x_55 != y_55)))
            _fail(y_55);
          else
            x_55 = y_55;
        }
        {
          t = not_null(u_55);
          {
            ATerm b_56 = NULL;
            t = r_79(t);
            {
              z_55 = t;
              {
                ATerm c_56 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(z_55)), not_null(x_55));
                {
                  c_56 = t;
                  if(((b_56 != NULL) && (b_56 != c_56)))
                    _fail(c_56);
                  else
                    b_56 = c_56;
                }
                t = not_null(b_56);
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
  ATerm u_56 = NULL;
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_56 = NULL;
      t = term_b_19;
      {
        t = get_config_0(t);
        {
          v_56 = t;
          if(((u_56 != NULL) && (u_56 != v_56)))
            _fail(v_56);
          else
            u_56 = v_56;
        }
      }
      ;
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      {
        ATerm k_3 (ATerm t)
        {
          ATerm l_3 (ATerm t)
          {
            ATerm w_56 = NULL;
            w_56 = t;
            if(((u_56 != NULL) && (u_56 != w_56)))
              _fail(w_56);
            else
              u_56 = w_56;
            return(t);
          }
          t = Program_1(t, l_3);
          return(t);
        }
        t = option_defined_1(t, k_3);
      }
    }
  {
    ATerm p_3 (ATerm t)
    {
      ATerm q_3 (ATerm t)
      {
        t = not_null(u_56);
        return(t);
      }
      t = short_description_1(t, q_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, p_3);
    {
      t = term_n_21;
      {
        t = echo_0(t);
        {
          t = term_u_21;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm r_3 (ATerm t)
                {
                  ATerm x_56 = NULL;
                  ATerm y_56 = NULL;
                  y_56 = t;
                  if(((x_56 != NULL) && (x_56 != y_56)))
                    _fail(y_56);
                  else
                    x_56 = y_56;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_56)), term_v_21);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, r_3);
                {
                  ATerm t_3 (ATerm t)
                  {
                    ATerm z_56 = NULL;
                    ATerm a_57 = NULL;
                    ATerm u_3 (ATerm t)
                    {
                      t = not_null(u_56);
                      return(t);
                    }
                    t = long_description_1(t, u_3);
                    {
                      a_57 = t;
                      if(((z_56 != NULL) && (z_56 != a_57)))
                        _fail(a_57);
                      else
                        z_56 = a_57;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(z_56)), term_w_21);
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
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(i_22);
    }
  else
    {
      t = h_22;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm s_79 (ATerm))
{
  ATerm k_57 = NULL,l_57 = NULL;
  k_57 = t;
  j_57 :
  if(match_cons(k_57, sym_Undefined_1))
    {
      l_57 = ATgetArgument(k_57, 0);
      {
        ATerm o_57 = NULL,q_57 = NULL;
        ATerm p_57 = NULL;
        t = SSLgetAnnotations(not_null(k_57));
        {
          p_57 = t;
          if(((o_57 != NULL) && (o_57 != p_57)))
            _fail(p_57);
          else
            o_57 = p_57;
        }
        {
          t = not_null(l_57);
          {
            ATerm u_57 = NULL;
            t = s_79(t);
            {
              q_57 = t;
              {
                ATerm v_57 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_57)), not_null(o_57));
                {
                  v_57 = t;
                  if(((u_57 != NULL) && (u_57 != v_57)))
                    _fail(v_57);
                  else
                    u_57 = v_57;
                }
                t = not_null(u_57);
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
ATerm fetch_1 (ATerm t, ATerm b_88 (ATerm))
{
  ATerm a_58 (ATerm t)
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_88, _id);
        ;
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        t = Cons_2(t, _id, a_58);
      }
    return(t);
  }
  t = a_58(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_108 (ATerm))
{
  t = fetch_1(t, f_108);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL;
  h_58 = t;
  g_58 :
  if(((ATgetType(h_58) == AT_LIST) && ATisEmpty(h_58)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(h_58) == AT_LIST) && !(ATisEmpty(h_58))))
        {
          i_58 = ATgetFirst((ATermList) h_58);
          j_58 = (ATerm) ATgetNext((ATermList) h_58);
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
  ATerm l_22;
  l_22 = t;
  {
    ATerm m_58 = NULL;
    ATerm p_58 = NULL;
    ATerm m_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(t_22);
      }
    else
      {
        t = m_22;
        {
          ATerm n_58 = NULL;
          ATerm o_58 = NULL;
          o_58 = t;
          if(((n_58 != NULL) && (n_58 != o_58)))
            _fail(o_58);
          else
            n_58 = o_58;
          t = (ATerm) ATinsert(ATempty, not_null(n_58));
        }
      }
    {
      p_58 = t;
      if(((m_58 != NULL) && (m_58 != p_58)))
        _fail(p_58);
      else
        m_58 = p_58;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_14, not_null(m_58));
      t = printnl_0(t);
    }
  }
  t = l_22;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_b_19;
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
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_58 = NULL;
  x_58 = t;
  w_58 :
  if(match_cons(x_58, sym_Help_0))
    {
      ATerm z_58 = NULL,b_59 = NULL;
      ATerm x_22;
      x_22 = t;
      {
        ATerm a_59 = NULL;
        t = SSLgetAnnotations(not_null(x_58));
        {
          a_59 = t;
          if(((z_58 != NULL) && (z_58 != a_59)))
            _fail(a_59);
          else
            z_58 = a_59;
        }
      }
      t = x_22;
      {
        ATerm c_59 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(z_58));
        {
          c_59 = t;
          if(((b_59 != NULL) && (b_59 != c_59)))
            _fail(c_59);
          else
            b_59 = c_59;
        }
        t = not_null(b_59);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm i_84 (ATerm))
{
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_84(t);
      ;
      LocalPopChoice(a_23);
    }
  else
    {
      t = z_22;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm c_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_3 (ATerm t)
      {
        ATerm i_59 = NULL;
        i_59 = t;
        g_59 :
        if(!(match_string(i_59, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm w_3 (ATerm t)
      {
        t = term_m_23;
        t = set_config_0(t);
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        t = term_q_23;
        return(t);
      }
      t = Option_3(t, v_3, w_3, x_3);
      ;
      LocalPopChoice(k_23);
    }
  else
    {
      t = c_23;
      {
        ATerm y_3 (ATerm t)
        {
          ATerm j_59 = NULL;
          j_59 = t;
          h_59 :
          if(!(match_string(j_59, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm i_4 (ATerm t)
        {
          t = term_m_23;
          {
            t = set_config_0(t);
            {
              t = term_c_24;
              t = set_config_0(t);
            }
          }
          t = term_d_24;
          return(t);
        }
        ATerm j_4 (ATerm t)
        {
          t = term_e_24;
          return(t);
        }
        t = Option_3(t, y_3, i_4, j_4);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm s_59 = NULL,u_59 = NULL,v_59 = NULL;
  s_59 = t;
  r_59 :
  if(match_cons(s_59, sym__2))
    {
      u_59 = ATgetArgument(s_59, 0);
      v_59 = ATgetArgument(s_59, 1);
      t = SSL_table_get(not_null(u_59), not_null(v_59));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL;
  c_60 = t;
  b_60 :
  if(match_cons(c_60, sym__3))
    {
      d_60 = ATgetArgument(c_60, 0);
      e_60 = ATgetArgument(c_60, 1);
      f_60 = ATgetArgument(c_60, 2);
      {
        ATerm f_24;
        f_24 = t;
        {
          ATerm j_60 = NULL;
          ATerm k_60 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_60), not_null(e_60));
          {
            ATerm g_24 = t;
            int h_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(h_24);
              }
            else
              {
                t = g_24;
                t = (ATerm) ATempty;
              }
            {
              k_60 = t;
              if(((j_60 != NULL) && (j_60 != k_60)))
                _fail(k_60);
              else
                j_60 = k_60;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_60), not_null(e_60), (ATerm) ATinsert(CheckATermList(not_null(j_60)), not_null(f_60)));
            t = table_put_0(t);
          }
        }
        t = f_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm k_109 (ATerm))
{
  ATerm o_60 = NULL;
  ATerm p_60 = NULL;
  t = term_t_6;
  {
    t = k_109(t);
    {
      p_60 = t;
      if(((o_60 != NULL) && (o_60 != p_60)))
        _fail(p_60);
      else
        o_60 = p_60;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_21, term_t_21, not_null(o_60));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL;
  v_60 = t;
  u_60 :
  if(match_string(v_60, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(v_60) == AT_LIST) && !(ATisEmpty(v_60))))
        {
          w_60 = ATgetFirst((ATermList) v_60);
          x_60 = (ATerm) ATgetNext((ATermList) v_60);
          {
            ATerm a_61 = NULL;
            ATerm i_24;
            i_24 = t;
            {
              t = not_null(w_60);
              t = a_0(t);
            }
            t = i_24;
            {
              ATerm b_61 = NULL;
              t = term_t_6;
              {
                t = b_0(t);
                {
                  b_61 = t;
                  if(((a_61 != NULL) && (a_61 != b_61)))
                    _fail(b_61);
                  else
                    a_61 = b_61;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_60)), not_null(a_61));
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
  ATerm l_4 (ATerm t)
  {
    ATerm g_61 = NULL;
    g_61 = t;
    f_61 :
    if(!(match_string(g_61, "--help")))
      {
        if(!(match_string(g_61, "-h")))
          {
            if(!(match_string(g_61, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_q_24;
    {
      t = set_config_0(t);
      t = term_s_24;
    }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = term_t_24;
    return(t);
  }
  t = Option_3(t, l_4, m_4, p_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm j_61 = NULL,k_61 = NULL,l_61 = NULL;
  j_61 = t;
  i_61 :
  if(((ATgetType(j_61) == AT_LIST) && !(ATisEmpty(j_61))))
    {
      k_61 = ATgetFirst((ATermList) j_61);
      l_61 = (ATerm) ATgetNext((ATermList) j_61);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_61)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_61)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL;
  r_61 = t;
  q_61 :
  if(match_cons(r_61, sym__2))
    {
      s_61 = ATgetArgument(r_61, 0);
      t_61 = ATgetArgument(r_61, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_13, not_null(s_61), not_null(t_61));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_109 (ATerm))
{
  ATerm v_24;
  v_24 = t;
  {
    ATerm q_4 (ATerm t)
    {
      t = term_w_24;
      t = i_109(t);
      return(t);
    }
    t = try_1(t, q_4);
  }
  t = v_24;
  {
    ATerm r_4 (ATerm t)
    {
      ATerm g_62 = NULL;
      ATerm x_24;
      x_24 = t;
      {
        ATerm z_61 = NULL;
        ATerm f_62 = NULL;
        f_62 = t;
        if(((z_61 != NULL) && (z_61 != f_62)))
          _fail(f_62);
        else
          z_61 = f_62;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_19, not_null(z_61));
          t = set_config_0(t);
        }
      }
      t = x_24;
      {
        ATerm h_62 = NULL;
        h_62 = t;
        if(((g_62 != NULL) && (g_62 != h_62)))
          _fail(h_62);
        else
          g_62 = h_62;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_62));
      }
      return(t);
    }
    ATerm s_4 (ATerm t)
    {
      ATerm y_24 = t;
      int z_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_25 = t;
          int b_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(b_25);
            }
          else
            {
              t = a_25;
              {
                t = i_109(t);
                t = Cons_2(t, _id, s_4);
              }
            }
          ;
          LocalPopChoice(z_24);
        }
      else
        {
          t = y_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, r_4, s_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL;
  ATerm c_25;
  c_25 = t;
  {
    ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL;
    u_62 = t;
    m_62 :
    if(match_cons(u_62, sym__3))
      {
        v_62 = ATgetArgument(u_62, 0);
        w_62 = ATgetArgument(u_62, 1);
        x_62 = ATgetArgument(u_62, 2);
        {
          if(((r_62 != NULL) && (r_62 != v_62)))
            _fail(v_62);
          else
            r_62 = v_62;
          {
            if(((s_62 != NULL) && (s_62 != w_62)))
              _fail(w_62);
            else
              s_62 = w_62;
            {
              if(((t_62 != NULL) && (t_62 != x_62)))
                _fail(x_62);
              else
                t_62 = x_62;
              t = SSL_table_put(not_null(r_62), not_null(s_62), not_null(t_62));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_25;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_109 (ATerm))
{
  ATerm a_63 = NULL;
  ATerm d_25;
  d_25 = t;
  {
    t = term_o_25;
    t = table_put_0(t);
  }
  t = d_25;
  {
    ATerm x_4 (ATerm t)
    {
      ATerm p_25 = t;
      int q_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_109(t);
          ;
          LocalPopChoice(q_25);
        }
      else
        {
          t = p_25;
          {
            ATerm r_25 = t;
            int s_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(s_25);
              }
            else
              {
                t = r_25;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, x_4);
    {
      ATerm y_4 (ATerm t)
      {
        ATerm t_25 = t;
        int g_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_26;
            h_26 = t;
            {
              ATerm i_26 = t;
              int j_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_o_20;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(j_26);
                }
              else
                {
                  t = i_26;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = h_26;
            {
              t = system_usage_0(t);
              {
                t = term_m_16;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(g_26);
          }
        else
          {
            t = t_25;
            {
              ATerm k_26 = t;
              int l_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_26;
                  m_26 = t;
                  {
                    t = term_l_23;
                    t = get_config_0(t);
                  }
                  t = m_26;
                  {
                    t = system_about_0(t);
                    {
                      t = term_m_16;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(l_26);
                }
              else
                {
                  t = k_26;
                  {
                    ATerm z_4 (ATerm t)
                    {
                      ATerm a_5 (ATerm t)
                      {
                        ATerm b_63 = NULL;
                        b_63 = t;
                        if(((a_63 != NULL) && (a_63 != b_63)))
                          _fail(b_63);
                        else
                          a_63 = b_63;
                        return(t);
                      }
                      t = Undefined_1(t, a_5);
                      return(t);
                    }
                    t = option_defined_1(t, z_4);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_g_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_63)), term_n_26));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_n_12;
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
      t = try_1(t, y_4);
      {
        ATerm w_26;
        w_26 = t;
        {
          t = term_o_21;
          t = table_destroy_0(t);
        }
        t = w_26;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm k_107 (ATerm))
{
  t = parse_options_1(t, h_107);
  {
    t = store_options_0(t);
    {
      t = j_107(t);
      {
        ATerm x_26 = t;
        int y_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, i_107);
            ;
            LocalPopChoice(y_26);
          }
        else
          {
            t = x_26;
            {
              ATerm z_26 = t;
              int a_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_107(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(a_27);
                }
              else
                {
                  t = z_26;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm z_106 (ATerm))
{
  ATerm h_5 (ATerm t)
  {
    ATerm b_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_106(t);
        ;
        LocalPopChoice(h_27);
      }
    else
      {
        t = b_27;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, w_106);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, h_5, y_106, z_106, i_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm s_106 (ATerm))
{
  ATerm j_5 (ATerm t)
  {
    ATerm o_5 (ATerm t)
    {
      ATerm i_27;
      i_27 = t;
      {
        ATerm e_63 = NULL;
        ATerm f_63 = NULL;
        t = term_b_19;
        {
          t = get_config_0(t);
          {
            f_63 = t;
            if(((e_63 != NULL) && (e_63 != f_63)))
              _fail(f_63);
            else
              e_63 = f_63;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_12, (ATerm) ATinsert(ATempty, not_null(e_63)));
          t = printnl_0(t);
        }
      }
      t = i_27;
      return(t);
    }
    t = if_verbose2_1(t, o_5);
    return(t);
  }
  t = iowrap_4(t, q_106, r_106, s_106, j_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm o_106 (ATerm), ATerm p_106 (ATerm))
{
  t = iowrap_3(t, o_106, p_106, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm l_106 (ATerm))
{
  ATerm p_5 (ATerm t)
  {
    t = _2(t, _id, l_106);
    return(t);
  }
  t = iowrap_2(t, p_5, _fail);
  return(t);
}
ATerm dead_def_elim_io_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm r_5 (ATerm t)
    {
      ATerm w_5 (ATerm t)
      {
        ATerm x_5 (ATerm t)
        {
          ATerm a_6 (ATerm t)
          {
            t = dead_def_elim_0(t);
            t = map_1(t, local_dead_def_elim_0);
            return(t);
          }
          t = Strategies_1(t, a_6);
          return(t);
        }
        t = Cons_2(t, x_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, w_5);
      return(t);
    }
    t = Specification_1(t, r_5);
    return(t);
  }
  t = iowrap_1(t, q_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = dead_def_elim_io_0(t);
  return(t);
}
