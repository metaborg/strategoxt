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
ATerm term_l_36;
ATerm term_s_35;
ATerm term_u_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_p_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_v_32;
ATerm term_o_31;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_d_29;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_a_25;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_y_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_p_20;
ATerm term_i_20;
ATerm term_i_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_o_17;
ATerm term_n_17;
void init_constant_terms (void)
{
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym__2, term_b_21, term_g_25);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_25);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym__2, term_f_27, term_n_17);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym__2, term_q_27, term_n_17);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym__2, term_p_30, term_q_30);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym__2, term_v_32, term_n_17);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym__2, term_e_33, term_n_17);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym__2, term_d_29, term_n_17);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym__3, term_p_30, term_q_30, (ATerm) ATempty);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0_0 (ATerm);
ATerm spaste_1_0 (ATerm b_78 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm d_71 (ATerm), ATerm e_71 (ATerm), ATerm f_71 (ATerm), ATerm);
ATerm Let_2_0 (ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm Bind3_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm SVar_1_0 (ATerm n_68 (ATerm), ATerm);
ATerm srename_0_0 (ATerm);
ATerm ReplaceVar_0_0 (ATerm);
ATerm tpaste_1_0 (ATerm x_77 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm v_67 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm o_67 (ATerm), ATerm p_67 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm g_71 (ATerm), ATerm h_71 (ATerm), ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm y_77 (ATerm), ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm);
ATerm Bind8_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind6_0_0 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm Add1_0_0 (ATerm);
ATerm union_1_0 (ATerm k_87 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm z_89 (ATerm), ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm);
ATerm crush_3_0 (ATerm x_87 (ATerm), ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm);
ATerm diff_1_0 (ATerm g_87 (ATerm), ATerm);
ATerm UfShift_0_0 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm UfIdem_0_0 (ATerm);
ATerm while_not_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm);
ATerm for_3_0 (ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm d_94 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm j_92 (ATerm), ATerm k_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm);
ATerm Zip3_0_0 (ATerm);
ATerm Zip2_0_0 (ATerm);
ATerm Zip1_0_0 (ATerm);
ATerm genzip_4_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm);
ATerm zip_1_0 (ATerm o_83 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm RnBinding_2_0 (ATerm d_92 (ATerm), ATerm e_92 (ATerm, ATerm (ATerm)), ATerm);
ATerm Look2_0_0 (ATerm);
ATerm Look1_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm RnVar_1_0 (ATerm o_92 (ATerm, ATerm (ATerm)), ATerm);
ATerm all_dist_1_0 (ATerm h_93 (ATerm), ATerm);
ATerm env_alltd_1_0 (ATerm r_92 (ATerm), ATerm);
ATerm rename_4_0 (ATerm y_91 (ATerm, ATerm (ATerm)), ATerm z_91 (ATerm), ATerm a_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm b_92 (ATerm, ATerm (ATerm)), ATerm);
ATerm trename_0_0 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm _2_0 (ATerm s_62 (ATerm), ATerm t_62 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm o_85 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm z_105 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm b_100 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm o_96 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm n_99 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm);
ATerm crush_2_0 (ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_105 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm m_97 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm g_102 (ATerm), ATerm);
ATerm map_1_0 (ATerm y_84 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm f_102 (ATerm), ATerm);
ATerm Program_1_0 (ATerm h_76 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm i_85 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm f_101 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm p_81 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm k_102 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm b_64 (ATerm), ATerm c_64 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm i_102 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm h_102 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm x_96 (ATerm), ATerm y_96 (ATerm), ATerm z_96 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm s_96 (ATerm), ATerm);
ATerm rename_vars_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm r_3 = NULL,f_4 = NULL,g_4 = NULL;
  ATerm s_4 (ATerm t)
  {
    ATerm h_4 = NULL;
    t = not_null(f_4);
    if(((h_4 != NULL) && (h_4 != t)))
      _fail(t);
    else
      h_4 = t;
    t = not_null(h_4);
    return(t);
  }
  if(((r_3 != NULL) && (r_3 != t)))
    _fail(t);
  else
    r_3 = t;
  t = not_null(r_3);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_4 = ATgetFirst((ATermList) t);
      g_4 = (ATerm) ATgetNext((ATermList) t);
      t = s_4(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1_0 (ATerm b_78 (ATerm), ATerm t)
{
  ATerm o_4 = t;
  int p_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = split_2_0(_id, b_78, t);
        {
          ATerm f_0 (ATerm t)
          {
            ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL;
            ATerm o_5 (ATerm t)
            {
              ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
              t = not_null(d_5);
              if(((h_5 != NULL) && (h_5 != t)))
                _fail(t);
              else
                h_5 = t;
              t = not_null(e_5);
              if(((i_5 != NULL) && (i_5 != t)))
                _fail(t);
              else
                i_5 = t;
              t = not_null(g_5);
              if(((j_5 != NULL) && (j_5 != t)))
                _fail(t);
              else
                j_5 = t;
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(j_5), not_null(h_5), not_null(i_5));
              return(t);
            }
            ATerm p_5 (ATerm t)
            {
              ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL;
              t = not_null(d_5);
              if(((k_5 != NULL) && (k_5 != t)))
                _fail(t);
              else
                k_5 = t;
              t = not_null(e_5);
              if(((l_5 != NULL) && (l_5 != t)))
                _fail(t);
              else
                l_5 = t;
              t = not_null(f_5);
              if(((m_5 != NULL) && (m_5 != t)))
                _fail(t);
              else
                m_5 = t;
              t = not_null(g_5);
              if(((n_5 != NULL) && (n_5 != t)))
                _fail(t);
              else
                n_5 = t;
              t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(n_5), not_null(k_5), not_null(l_5), not_null(m_5));
              return(t);
            }
            if(((a_5 != NULL) && (a_5 != t)))
              _fail(t);
            else
              a_5 = t;
            t = not_null(a_5);
            if(match_cons(t, sym__2))
              {
                b_5 = ATgetArgument(t, 0);
                g_5 = ATgetArgument(t, 1);
                t = not_null(b_5);
                if(match_cons(t, sym_SDef_3))
                  {
                    c_5 = ATgetArgument(t, 0);
                    d_5 = ATgetArgument(t, 1);
                    e_5 = ATgetArgument(t, 2);
                    t = o_5(t);
                  }
                else
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        c_5 = ATgetArgument(t, 0);
                        d_5 = ATgetArgument(t, 1);
                        e_5 = ATgetArgument(t, 2);
                        f_5 = ATgetArgument(t, 3);
                        t = p_5(t);
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
          t = zip_1_0(f_0, t);
        }
        return(t);
      }
      t = Let_2_0(b_0, _id, t);
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
            ATerm l_0 (ATerm t)
            {
              t = split_2_0(_id, b_78, t);
              t = zip_1_0(ReplaceVar_0_0, t);
              return(t);
            }
            t = SDef_3_0(_id, l_0, _id, t);
            ;
            LocalPopChoice(r_4);
          }
        else
          {
            t = q_4;
            {
              ATerm t_4 = t;
              int u_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_0 (ATerm t)
                  {
                    t = split_2_0(_id, b_78, t);
                    t = zip_1_0(ReplaceVar_0_0, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, n_0, _id, _id, t);
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
                        ATerm o_0 (ATerm t)
                        {
                          t = split_2_0(_id, b_78, t);
                          t = zip_1_0(ReplaceVar_0_0, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, o_0, _id, _id, t);
                        ;
                        LocalPopChoice(w_4);
                      }
                    else
                      {
                        t = v_4;
                        {
                          ATerm p_0 (ATerm t)
                          {
                            t = b_78(t);
                            t = Hd_0_0(t);
                            return(t);
                          }
                          t = Rec_2_0(p_0, _id, t);
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
ATerm Rec_2_0 (ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm t)
{
  ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
  ATerm k_6 (ATerm t)
  {
    ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,e_6 = NULL;
    ATerm m_6 (ATerm t)
    {
      ATerm f_6 = NULL,g_6 = NULL;
      ATerm n_6 (ATerm t)
      {
        ATerm h_6 = NULL,i_6 = NULL;
        t = not_null(g_6);
        if(((h_6 != NULL) && (h_6 != t)))
          _fail(t);
        else
          h_6 = t;
        t = not_null(g_6);
        {
          ATerm j_6 = NULL;
          ATerm o_6 (ATerm t)
          {
            t = not_null(j_6);
            if(((i_6 != NULL) && (i_6 != t)))
              _fail(t);
            else
              i_6 = t;
            t = not_null(j_6);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(f_6), not_null(h_6)), not_null(c_6));
          if(((j_6 != NULL) && (j_6 != t)))
            _fail(t);
          else
            j_6 = t;
          t = o_6(t);
          t = not_null(i_6);
        }
        return(t);
      }
      t = not_null(e_6);
      if(((f_6 != NULL) && (f_6 != t)))
        _fail(t);
      else
        f_6 = t;
      t = not_null(b_6);
      t = m_69(t);
      if(((g_6 != NULL) && (g_6 != t)))
        _fail(t);
      else
        g_6 = t;
      t = n_6(t);
      return(t);
    }
    t = not_null(w_5);
    if(((z_5 != NULL) && (z_5 != t)))
      _fail(t);
    else
      z_5 = t;
    t = not_null(x_5);
    if(((a_6 != NULL) && (a_6 != t)))
      _fail(t);
    else
      a_6 = t;
    t = not_null(y_5);
    if(((b_6 != NULL) && (b_6 != t)))
      _fail(t);
    else
      b_6 = t;
    t = not_null(w_5);
    {
      ATerm d_6 = NULL;
      ATerm l_6 (ATerm t)
      {
        t = not_null(d_6);
        if(((c_6 != NULL) && (c_6 != t)))
          _fail(t);
        else
          c_6 = t;
        t = not_null(d_6);
        return(t);
      }
      t = SSLgetAnnotations(not_null(z_5));
      if(((d_6 != NULL) && (d_6 != t)))
        _fail(t);
      else
        d_6 = t;
      t = l_6(t);
      t = not_null(a_6);
      t = l_69(t);
      if(((e_6 != NULL) && (e_6 != t)))
        _fail(t);
      else
        e_6 = t;
      t = m_6(t);
    }
    return(t);
  }
  if(((w_5 != NULL) && (w_5 != t)))
    _fail(t);
  else
    w_5 = t;
  t = not_null(w_5);
  if(match_cons(t, sym_Rec_2))
    {
      x_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
      t = k_6(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_3_0 (ATerm d_71 (ATerm), ATerm e_71 (ATerm), ATerm f_71 (ATerm), ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL;
  ATerm o_7 (ATerm t)
  {
    ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,g_7 = NULL;
    ATerm q_7 (ATerm t)
    {
      ATerm h_7 = NULL,i_7 = NULL;
      ATerm r_7 (ATerm t)
      {
        ATerm j_7 = NULL,k_7 = NULL;
        ATerm s_7 (ATerm t)
        {
          ATerm l_7 = NULL,m_7 = NULL;
          t = not_null(k_7);
          if(((l_7 != NULL) && (l_7 != t)))
            _fail(t);
          else
            l_7 = t;
          t = not_null(k_7);
          {
            ATerm n_7 = NULL;
            ATerm t_7 (ATerm t)
            {
              t = not_null(n_7);
              if(((m_7 != NULL) && (m_7 != t)))
                _fail(t);
              else
                m_7 = t;
              t = not_null(n_7);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(h_7), not_null(j_7), not_null(l_7)), not_null(e_7));
            if(((n_7 != NULL) && (n_7 != t)))
              _fail(t);
            else
              n_7 = t;
            t = t_7(t);
            t = not_null(m_7);
          }
          return(t);
        }
        t = not_null(i_7);
        if(((j_7 != NULL) && (j_7 != t)))
          _fail(t);
        else
          j_7 = t;
        t = not_null(d_7);
        t = f_71(t);
        if(((k_7 != NULL) && (k_7 != t)))
          _fail(t);
        else
          k_7 = t;
        t = s_7(t);
        return(t);
      }
      t = not_null(g_7);
      if(((h_7 != NULL) && (h_7 != t)))
        _fail(t);
      else
        h_7 = t;
      t = not_null(c_7);
      t = e_71(t);
      if(((i_7 != NULL) && (i_7 != t)))
        _fail(t);
      else
        i_7 = t;
      t = r_7(t);
      return(t);
    }
    t = not_null(w_6);
    if(((a_7 != NULL) && (a_7 != t)))
      _fail(t);
    else
      a_7 = t;
    t = not_null(x_6);
    if(((b_7 != NULL) && (b_7 != t)))
      _fail(t);
    else
      b_7 = t;
    t = not_null(y_6);
    if(((c_7 != NULL) && (c_7 != t)))
      _fail(t);
    else
      c_7 = t;
    t = not_null(z_6);
    if(((d_7 != NULL) && (d_7 != t)))
      _fail(t);
    else
      d_7 = t;
    t = not_null(w_6);
    {
      ATerm f_7 = NULL;
      ATerm p_7 (ATerm t)
      {
        t = not_null(f_7);
        if(((e_7 != NULL) && (e_7 != t)))
          _fail(t);
        else
          e_7 = t;
        t = not_null(f_7);
        return(t);
      }
      t = SSLgetAnnotations(not_null(a_7));
      if(((f_7 != NULL) && (f_7 != t)))
        _fail(t);
      else
        f_7 = t;
      t = p_7(t);
      t = not_null(b_7);
      t = d_71(t);
      if(((g_7 != NULL) && (g_7 != t)))
        _fail(t);
      else
        g_7 = t;
      t = q_7(t);
    }
    return(t);
  }
  if(((w_6 != NULL) && (w_6 != t)))
    _fail(t);
  else
    w_6 = t;
  t = not_null(w_6);
  if(match_cons(t, sym_SDef_3))
    {
      x_6 = ATgetArgument(t, 0);
      y_6 = ATgetArgument(t, 1);
      z_6 = ATgetArgument(t, 2);
      t = o_7(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2_0 (ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL;
  ATerm o_8 (ATerm t)
  {
    ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,i_8 = NULL;
    ATerm q_8 (ATerm t)
    {
      ATerm j_8 = NULL,k_8 = NULL;
      ATerm r_8 (ATerm t)
      {
        ATerm l_8 = NULL,m_8 = NULL;
        t = not_null(k_8);
        if(((l_8 != NULL) && (l_8 != t)))
          _fail(t);
        else
          l_8 = t;
        t = not_null(k_8);
        {
          ATerm n_8 = NULL;
          ATerm s_8 (ATerm t)
          {
            t = not_null(n_8);
            if(((m_8 != NULL) && (m_8 != t)))
              _fail(t);
            else
              m_8 = t;
            t = not_null(n_8);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(j_8), not_null(l_8)), not_null(g_8));
          if(((n_8 != NULL) && (n_8 != t)))
            _fail(t);
          else
            n_8 = t;
          t = s_8(t);
          t = not_null(m_8);
        }
        return(t);
      }
      t = not_null(i_8);
      if(((j_8 != NULL) && (j_8 != t)))
        _fail(t);
      else
        j_8 = t;
      t = not_null(f_8);
      t = p_68(t);
      if(((k_8 != NULL) && (k_8 != t)))
        _fail(t);
      else
        k_8 = t;
      t = r_8(t);
      return(t);
    }
    t = not_null(a_8);
    if(((d_8 != NULL) && (d_8 != t)))
      _fail(t);
    else
      d_8 = t;
    t = not_null(b_8);
    if(((e_8 != NULL) && (e_8 != t)))
      _fail(t);
    else
      e_8 = t;
    t = not_null(c_8);
    if(((f_8 != NULL) && (f_8 != t)))
      _fail(t);
    else
      f_8 = t;
    t = not_null(a_8);
    {
      ATerm h_8 = NULL;
      ATerm p_8 (ATerm t)
      {
        t = not_null(h_8);
        if(((g_8 != NULL) && (g_8 != t)))
          _fail(t);
        else
          g_8 = t;
        t = not_null(h_8);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_8));
      if(((h_8 != NULL) && (h_8 != t)))
        _fail(t);
      else
        h_8 = t;
      t = p_8(t);
      t = not_null(e_8);
      t = o_68(t);
      if(((i_8 != NULL) && (i_8 != t)))
        _fail(t);
      else
        i_8 = t;
      t = q_8(t);
    }
    return(t);
  }
  if(((a_8 != NULL) && (a_8 != t)))
    _fail(t);
  else
    a_8 = t;
  t = not_null(a_8);
  if(match_cons(t, sym_Let_2))
    {
      b_8 = ATgetArgument(t, 0);
      c_8 = ATgetArgument(t, 1);
      t = o_8(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm t)
{
  ATerm x_4 = t;
  int y_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(c_78, c_78, t);
      ;
      LocalPopChoice(y_4);
    }
  else
    {
      t = x_4;
      {
        ATerm z_4 = t;
        int q_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(e_78, e_78, c_78, t);
            ;
            LocalPopChoice(q_5);
          }
        else
          {
            t = z_4;
            {
              ATerm r_5 = t;
              int s_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(e_78, e_78, e_78, c_78, t);
                  ;
                  LocalPopChoice(s_5);
                }
              else
                {
                  t = r_5;
                  t = Rec_2_0(e_78, c_78, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
  ATerm e_9 (ATerm t)
  {
    ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL;
    t = not_null(w_8);
    if(((a_9 != NULL) && (a_9 != t)))
      _fail(t);
    else
      a_9 = t;
    t = not_null(x_8);
    if(((d_9 != NULL) && (d_9 != t)))
      _fail(t);
    else
      d_9 = t;
    t = not_null(y_8);
    if(((b_9 != NULL) && (b_9 != t)))
      _fail(t);
    else
      b_9 = t;
    t = not_null(z_8);
    if(((c_9 != NULL) && (c_9 != t)))
      _fail(t);
    else
      c_9 = t;
    t = not_null(d_9);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((v_8 != NULL) && (v_8 != t)))
    _fail(t);
  else
    v_8 = t;
  t = not_null(v_8);
  if(match_cons(t, sym_RDefT_4))
    {
      w_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
      y_8 = ATgetArgument(t, 2);
      z_8 = ATgetArgument(t, 3);
      t = e_9(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL;
  ATerm q_9 (ATerm t)
  {
    ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
    t = not_null(i_9);
    if(((m_9 != NULL) && (m_9 != t)))
      _fail(t);
    else
      m_9 = t;
    t = not_null(j_9);
    if(((p_9 != NULL) && (p_9 != t)))
      _fail(t);
    else
      p_9 = t;
    t = not_null(k_9);
    if(((n_9 != NULL) && (n_9 != t)))
      _fail(t);
    else
      n_9 = t;
    t = not_null(l_9);
    if(((o_9 != NULL) && (o_9 != t)))
      _fail(t);
    else
      o_9 = t;
    t = not_null(p_9);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((h_9 != NULL) && (h_9 != t)))
    _fail(t);
  else
    h_9 = t;
  t = not_null(h_9);
  if(match_cons(t, sym_SDefT_4))
    {
      i_9 = ATgetArgument(t, 0);
      j_9 = ATgetArgument(t, 1);
      k_9 = ATgetArgument(t, 2);
      l_9 = ATgetArgument(t, 3);
      t = q_9(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind3_0_0 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
  ATerm y_9 (ATerm t)
  {
    ATerm w_9 = NULL,x_9 = NULL;
    t = not_null(u_9);
    if(((x_9 != NULL) && (x_9 != t)))
      _fail(t);
    else
      x_9 = t;
    t = not_null(v_9);
    if(((w_9 != NULL) && (w_9 != t)))
      _fail(t);
    else
      w_9 = t;
    t = (ATerm) ATinsert(ATempty, not_null(x_9));
    return(t);
  }
  if(((t_9 != NULL) && (t_9 != t)))
    _fail(t);
  else
    t_9 = t;
  t = not_null(t_9);
  if(match_cons(t, sym_Rec_2))
    {
      u_9 = ATgetArgument(t, 0);
      v_9 = ATgetArgument(t, 1);
      t = y_9(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
  ATerm i_10 (ATerm t)
  {
    ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL;
    t = not_null(c_10);
    if(((f_10 != NULL) && (f_10 != t)))
      _fail(t);
    else
      f_10 = t;
    t = not_null(d_10);
    if(((h_10 != NULL) && (h_10 != t)))
      _fail(t);
    else
      h_10 = t;
    t = not_null(e_10);
    if(((g_10 != NULL) && (g_10 != t)))
      _fail(t);
    else
      g_10 = t;
    t = not_null(h_10);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((b_10 != NULL) && (b_10 != t)))
    _fail(t);
  else
    b_10 = t;
  t = not_null(b_10);
  if(match_cons(t, sym_SDef_3))
    {
      c_10 = ATgetArgument(t, 0);
      d_10 = ATgetArgument(t, 1);
      e_10 = ATgetArgument(t, 2);
      t = i_10(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  ATerm a_11 (ATerm t)
  {
    ATerm r_10 = NULL,s_10 = NULL;
    t = not_null(p_10);
    if(((s_10 != NULL) && (s_10 != t)))
      _fail(t);
    else
      s_10 = t;
    t = not_null(q_10);
    if(((r_10 != NULL) && (r_10 != t)))
      _fail(t);
    else
      r_10 = t;
    t = not_null(s_10);
    {
      ATerm q_0 (ATerm t)
      {
        ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
        ATerm b_11 (ATerm t)
        {
          ATerm y_10 = NULL;
          t = not_null(u_10);
          if(((y_10 != NULL) && (y_10 != t)))
            _fail(t);
          else
            y_10 = t;
          t = not_null(y_10);
          return(t);
        }
        ATerm c_11 (ATerm t)
        {
          ATerm z_10 = NULL;
          t = not_null(u_10);
          if(((z_10 != NULL) && (z_10 != t)))
            _fail(t);
          else
            z_10 = t;
          t = not_null(z_10);
          return(t);
        }
        if(((t_10 != NULL) && (t_10 != t)))
          _fail(t);
        else
          t_10 = t;
        t = not_null(t_10);
        if(match_cons(t, sym_SDef_3))
          {
            u_10 = ATgetArgument(t, 0);
            v_10 = ATgetArgument(t, 1);
            w_10 = ATgetArgument(t, 2);
            t = b_11(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                u_10 = ATgetArgument(t, 0);
                v_10 = ATgetArgument(t, 1);
                w_10 = ATgetArgument(t, 2);
                x_10 = ATgetArgument(t, 3);
                t = c_11(t);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      t = map_1_0(q_0, t);
    }
    return(t);
  }
  if(((o_10 != NULL) && (o_10 != t)))
    _fail(t);
  else
    o_10 = t;
  t = not_null(o_10);
  if(match_cons(t, sym_Let_2))
    {
      p_10 = ATgetArgument(t, 0);
      q_10 = ATgetArgument(t, 1);
      t = a_11(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1_0 (ATerm n_68 (ATerm), ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL;
  ATerm s_11 (ATerm t)
  {
    ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,o_11 = NULL;
    ATerm u_11 (ATerm t)
    {
      ATerm p_11 = NULL,q_11 = NULL;
      t = not_null(o_11);
      if(((p_11 != NULL) && (p_11 != t)))
        _fail(t);
      else
        p_11 = t;
      t = not_null(o_11);
      {
        ATerm r_11 = NULL;
        ATerm v_11 (ATerm t)
        {
          t = not_null(r_11);
          if(((q_11 != NULL) && (q_11 != t)))
            _fail(t);
          else
            q_11 = t;
          t = not_null(r_11);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(p_11)), not_null(m_11));
        if(((r_11 != NULL) && (r_11 != t)))
          _fail(t);
        else
          r_11 = t;
        t = v_11(t);
        t = not_null(q_11);
      }
      return(t);
    }
    t = not_null(i_11);
    if(((k_11 != NULL) && (k_11 != t)))
      _fail(t);
    else
      k_11 = t;
    t = not_null(j_11);
    if(((l_11 != NULL) && (l_11 != t)))
      _fail(t);
    else
      l_11 = t;
    t = not_null(i_11);
    {
      ATerm n_11 = NULL;
      ATerm t_11 (ATerm t)
      {
        t = not_null(n_11);
        if(((m_11 != NULL) && (m_11 != t)))
          _fail(t);
        else
          m_11 = t;
        t = not_null(n_11);
        return(t);
      }
      t = SSLgetAnnotations(not_null(k_11));
      if(((n_11 != NULL) && (n_11 != t)))
        _fail(t);
      else
        n_11 = t;
      t = t_11(t);
      t = not_null(l_11);
      t = n_68(t);
      if(((o_11 != NULL) && (o_11 != t)))
        _fail(t);
      else
        o_11 = t;
      t = u_11(t);
    }
    return(t);
  }
  if(((i_11 != NULL) && (i_11 != t)))
    _fail(t);
  else
    i_11 = t;
  t = not_null(i_11);
  if(match_cons(t, sym_SVar_1))
    {
      j_11 = ATgetArgument(t, 0);
      t = s_11(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm t_5 = t;
    int u_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(u_5);
      }
    else
      {
        t = t_5;
        {
          ATerm v_5 = t;
          int p_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(p_6);
            }
          else
            {
              t = v_5;
              {
                ATerm q_6 = t;
                int r_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0_0(t);
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
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(t_6);
                        }
                      else
                        {
                          t = s_6;
                          t = Bind7_0_0(t);
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  t = rename_4_0(SVar_1_0, r_0, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm ReplaceVar_0_0 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
  ATerm k_12 (ATerm t)
  {
    ATerm f_12 = NULL,g_12 = NULL;
    t = not_null(c_12);
    if(((f_12 != NULL) && (f_12 != t)))
      _fail(t);
    else
      f_12 = t;
    t = not_null(e_12);
    if(((g_12 != NULL) && (g_12 != t)))
      _fail(t);
    else
      g_12 = t;
    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, not_null(g_12));
    return(t);
  }
  ATerm l_12 (ATerm t)
  {
    ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
    t = not_null(c_12);
    if(((h_12 != NULL) && (h_12 != t)))
      _fail(t);
    else
      h_12 = t;
    t = not_null(d_12);
    if(((j_12 != NULL) && (j_12 != t)))
      _fail(t);
    else
      j_12 = t;
    t = not_null(e_12);
    if(((i_12 != NULL) && (i_12 != t)))
      _fail(t);
    else
      i_12 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(i_12), not_null(j_12));
    return(t);
  }
  if(((a_12 != NULL) && (a_12 != t)))
    _fail(t);
  else
    a_12 = t;
  t = not_null(a_12);
  if(match_cons(t, sym__2))
    {
      b_12 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
      t = not_null(b_12);
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_12 = ATgetArgument(t, 0);
          t = k_12(t);
        }
      else
        {
          if(match_cons(t, sym_VarDec_2))
            {
              c_12 = ATgetArgument(t, 0);
              d_12 = ATgetArgument(t, 1);
              t = l_12(t);
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
ATerm tpaste_1_0 (ATerm x_77 (ATerm), ATerm t)
{
  ATerm u_6 = t;
  int v_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(x_77, _id, t);
      ;
      LocalPopChoice(v_6);
    }
  else
    {
      t = u_6;
      {
        ATerm u_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              t = split_2_0(_id, x_77, t);
              t = zip_1_0(ReplaceVar_0_0, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, s_0, _id, t);
            ;
            LocalPopChoice(v_7);
          }
        else
          {
            t = u_7;
            {
              ATerm t_0 (ATerm t)
              {
                t = split_2_0(_id, x_77, t);
                t = zip_1_0(ReplaceVar_0_0, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, t_0, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm v_67 (ATerm), ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL;
  ATerm b_13 (ATerm t)
  {
    ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,x_12 = NULL;
    ATerm d_13 (ATerm t)
    {
      ATerm y_12 = NULL,z_12 = NULL;
      t = not_null(x_12);
      if(((y_12 != NULL) && (y_12 != t)))
        _fail(t);
      else
        y_12 = t;
      t = not_null(x_12);
      {
        ATerm a_13 = NULL;
        ATerm e_13 (ATerm t)
        {
          t = not_null(a_13);
          if(((z_12 != NULL) && (z_12 != t)))
            _fail(t);
          else
            z_12 = t;
          t = not_null(a_13);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(y_12)), not_null(v_12));
        if(((a_13 != NULL) && (a_13 != t)))
          _fail(t);
        else
          a_13 = t;
        t = e_13(t);
        t = not_null(z_12);
      }
      return(t);
    }
    t = not_null(r_12);
    if(((t_12 != NULL) && (t_12 != t)))
      _fail(t);
    else
      t_12 = t;
    t = not_null(s_12);
    if(((u_12 != NULL) && (u_12 != t)))
      _fail(t);
    else
      u_12 = t;
    t = not_null(r_12);
    {
      ATerm w_12 = NULL;
      ATerm c_13 (ATerm t)
      {
        t = not_null(w_12);
        if(((v_12 != NULL) && (v_12 != t)))
          _fail(t);
        else
          v_12 = t;
        t = not_null(w_12);
        return(t);
      }
      t = SSLgetAnnotations(not_null(t_12));
      if(((w_12 != NULL) && (w_12 != t)))
        _fail(t);
      else
        w_12 = t;
      t = c_13(t);
      t = not_null(u_12);
      t = v_67(t);
      if(((x_12 != NULL) && (x_12 != t)))
        _fail(t);
      else
        x_12 = t;
      t = d_13(t);
    }
    return(t);
  }
  if(((r_12 != NULL) && (r_12 != t)))
    _fail(t);
  else
    r_12 = t;
  t = not_null(r_12);
  if(match_cons(t, sym_DynamicRules_1))
    {
      s_12 = ATgetArgument(t, 0);
      t = b_13(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RDefT_4_0 (ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm o_67 (ATerm), ATerm p_67 (ATerm), ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL;
  ATerm j_14 (ATerm t)
  {
    ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,z_13 = NULL;
    ATerm l_14 (ATerm t)
    {
      ATerm a_14 = NULL,b_14 = NULL;
      ATerm m_14 (ATerm t)
      {
        ATerm c_14 = NULL,d_14 = NULL;
        ATerm n_14 (ATerm t)
        {
          ATerm e_14 = NULL,f_14 = NULL;
          ATerm o_14 (ATerm t)
          {
            ATerm g_14 = NULL,h_14 = NULL;
            t = not_null(f_14);
            if(((g_14 != NULL) && (g_14 != t)))
              _fail(t);
            else
              g_14 = t;
            t = not_null(f_14);
            {
              ATerm i_14 = NULL;
              ATerm p_14 (ATerm t)
              {
                t = not_null(i_14);
                if(((h_14 != NULL) && (h_14 != t)))
                  _fail(t);
                else
                  h_14 = t;
                t = not_null(i_14);
                return(t);
              }
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, not_null(a_14), not_null(c_14), not_null(e_14), not_null(g_14)), not_null(x_13));
              if(((i_14 != NULL) && (i_14 != t)))
                _fail(t);
              else
                i_14 = t;
              t = p_14(t);
              t = not_null(h_14);
            }
            return(t);
          }
          t = not_null(d_14);
          if(((e_14 != NULL) && (e_14 != t)))
            _fail(t);
          else
            e_14 = t;
          t = not_null(w_13);
          t = p_67(t);
          if(((f_14 != NULL) && (f_14 != t)))
            _fail(t);
          else
            f_14 = t;
          t = o_14(t);
          return(t);
        }
        t = not_null(b_14);
        if(((c_14 != NULL) && (c_14 != t)))
          _fail(t);
        else
          c_14 = t;
        t = not_null(v_13);
        t = o_67(t);
        if(((d_14 != NULL) && (d_14 != t)))
          _fail(t);
        else
          d_14 = t;
        t = n_14(t);
        return(t);
      }
      t = not_null(z_13);
      if(((a_14 != NULL) && (a_14 != t)))
        _fail(t);
      else
        a_14 = t;
      t = not_null(u_13);
      t = n_67(t);
      if(((b_14 != NULL) && (b_14 != t)))
        _fail(t);
      else
        b_14 = t;
      t = m_14(t);
      return(t);
    }
    t = not_null(n_13);
    if(((s_13 != NULL) && (s_13 != t)))
      _fail(t);
    else
      s_13 = t;
    t = not_null(o_13);
    if(((t_13 != NULL) && (t_13 != t)))
      _fail(t);
    else
      t_13 = t;
    t = not_null(p_13);
    if(((u_13 != NULL) && (u_13 != t)))
      _fail(t);
    else
      u_13 = t;
    t = not_null(q_13);
    if(((v_13 != NULL) && (v_13 != t)))
      _fail(t);
    else
      v_13 = t;
    t = not_null(r_13);
    if(((w_13 != NULL) && (w_13 != t)))
      _fail(t);
    else
      w_13 = t;
    t = not_null(n_13);
    {
      ATerm y_13 = NULL;
      ATerm k_14 (ATerm t)
      {
        t = not_null(y_13);
        if(((x_13 != NULL) && (x_13 != t)))
          _fail(t);
        else
          x_13 = t;
        t = not_null(y_13);
        return(t);
      }
      t = SSLgetAnnotations(not_null(s_13));
      if(((y_13 != NULL) && (y_13 != t)))
        _fail(t);
      else
        y_13 = t;
      t = k_14(t);
      t = not_null(t_13);
      t = m_67(t);
      if(((z_13 != NULL) && (z_13 != t)))
        _fail(t);
      else
        z_13 = t;
      t = l_14(t);
    }
    return(t);
  }
  if(((n_13 != NULL) && (n_13 != t)))
    _fail(t);
  else
    n_13 = t;
  t = not_null(n_13);
  if(match_cons(t, sym_RDefT_4))
    {
      o_13 = ATgetArgument(t, 0);
      p_13 = ATgetArgument(t, 1);
      q_13 = ATgetArgument(t, 2);
      r_13 = ATgetArgument(t, 3);
      t = j_14(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm g_71 (ATerm), ATerm h_71 (ATerm), ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
  ATerm u_15 (ATerm t)
  {
    ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,k_15 = NULL;
    ATerm w_15 (ATerm t)
    {
      ATerm l_15 = NULL,m_15 = NULL;
      ATerm x_15 (ATerm t)
      {
        ATerm n_15 = NULL,o_15 = NULL;
        ATerm y_15 (ATerm t)
        {
          ATerm p_15 = NULL,q_15 = NULL;
          ATerm z_15 (ATerm t)
          {
            ATerm r_15 = NULL,s_15 = NULL;
            t = not_null(q_15);
            if(((r_15 != NULL) && (r_15 != t)))
              _fail(t);
            else
              r_15 = t;
            t = not_null(q_15);
            {
              ATerm t_15 = NULL;
              ATerm a_16 (ATerm t)
              {
                t = not_null(t_15);
                if(((s_15 != NULL) && (s_15 != t)))
                  _fail(t);
                else
                  s_15 = t;
                t = not_null(t_15);
                return(t);
              }
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(l_15), not_null(n_15), not_null(p_15), not_null(r_15)), not_null(i_15));
              if(((t_15 != NULL) && (t_15 != t)))
                _fail(t);
              else
                t_15 = t;
              t = a_16(t);
              t = not_null(s_15);
            }
            return(t);
          }
          t = not_null(o_15);
          if(((p_15 != NULL) && (p_15 != t)))
            _fail(t);
          else
            p_15 = t;
          t = not_null(h_15);
          t = j_71(t);
          if(((q_15 != NULL) && (q_15 != t)))
            _fail(t);
          else
            q_15 = t;
          t = z_15(t);
          return(t);
        }
        t = not_null(m_15);
        if(((n_15 != NULL) && (n_15 != t)))
          _fail(t);
        else
          n_15 = t;
        t = not_null(g_15);
        t = i_71(t);
        if(((o_15 != NULL) && (o_15 != t)))
          _fail(t);
        else
          o_15 = t;
        t = y_15(t);
        return(t);
      }
      t = not_null(k_15);
      if(((l_15 != NULL) && (l_15 != t)))
        _fail(t);
      else
        l_15 = t;
      t = not_null(f_15);
      t = h_71(t);
      if(((m_15 != NULL) && (m_15 != t)))
        _fail(t);
      else
        m_15 = t;
      t = x_15(t);
      return(t);
    }
    t = not_null(y_14);
    if(((d_15 != NULL) && (d_15 != t)))
      _fail(t);
    else
      d_15 = t;
    t = not_null(z_14);
    if(((e_15 != NULL) && (e_15 != t)))
      _fail(t);
    else
      e_15 = t;
    t = not_null(a_15);
    if(((f_15 != NULL) && (f_15 != t)))
      _fail(t);
    else
      f_15 = t;
    t = not_null(b_15);
    if(((g_15 != NULL) && (g_15 != t)))
      _fail(t);
    else
      g_15 = t;
    t = not_null(c_15);
    if(((h_15 != NULL) && (h_15 != t)))
      _fail(t);
    else
      h_15 = t;
    t = not_null(y_14);
    {
      ATerm j_15 = NULL;
      ATerm v_15 (ATerm t)
      {
        t = not_null(j_15);
        if(((i_15 != NULL) && (i_15 != t)))
          _fail(t);
        else
          i_15 = t;
        t = not_null(j_15);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_15));
      if(((j_15 != NULL) && (j_15 != t)))
        _fail(t);
      else
        j_15 = t;
      t = v_15(t);
      t = not_null(e_15);
      t = g_71(t);
      if(((k_15 != NULL) && (k_15 != t)))
        _fail(t);
      else
        k_15 = t;
      t = w_15(t);
    }
    return(t);
  }
  if(((y_14 != NULL) && (y_14 != t)))
    _fail(t);
  else
    y_14 = t;
  t = not_null(y_14);
  if(match_cons(t, sym_SDefT_4))
    {
      z_14 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
      b_15 = ATgetArgument(t, 2);
      c_15 = ATgetArgument(t, 3);
      t = u_15(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2_0 (ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL;
  ATerm v_16 (ATerm t)
  {
    ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,p_16 = NULL;
    ATerm x_16 (ATerm t)
    {
      ATerm q_16 = NULL,r_16 = NULL;
      ATerm y_16 (ATerm t)
      {
        ATerm s_16 = NULL,t_16 = NULL;
        t = not_null(r_16);
        if(((s_16 != NULL) && (s_16 != t)))
          _fail(t);
        else
          s_16 = t;
        t = not_null(r_16);
        {
          ATerm u_16 = NULL;
          ATerm z_16 (ATerm t)
          {
            t = not_null(u_16);
            if(((t_16 != NULL) && (t_16 != t)))
              _fail(t);
            else
              t_16 = t;
            t = not_null(u_16);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(q_16), not_null(s_16)), not_null(n_16));
          if(((u_16 != NULL) && (u_16 != t)))
            _fail(t);
          else
            u_16 = t;
          t = z_16(t);
          t = not_null(t_16);
        }
        return(t);
      }
      t = not_null(p_16);
      if(((q_16 != NULL) && (q_16 != t)))
        _fail(t);
      else
        q_16 = t;
      t = not_null(m_16);
      t = z_68(t);
      if(((r_16 != NULL) && (r_16 != t)))
        _fail(t);
      else
        r_16 = t;
      t = y_16(t);
      return(t);
    }
    t = not_null(h_16);
    if(((k_16 != NULL) && (k_16 != t)))
      _fail(t);
    else
      k_16 = t;
    t = not_null(i_16);
    if(((l_16 != NULL) && (l_16 != t)))
      _fail(t);
    else
      l_16 = t;
    t = not_null(j_16);
    if(((m_16 != NULL) && (m_16 != t)))
      _fail(t);
    else
      m_16 = t;
    t = not_null(h_16);
    {
      ATerm o_16 = NULL;
      ATerm w_16 (ATerm t)
      {
        t = not_null(o_16);
        if(((n_16 != NULL) && (n_16 != t)))
          _fail(t);
        else
          n_16 = t;
        t = not_null(o_16);
        return(t);
      }
      t = SSLgetAnnotations(not_null(k_16));
      if(((o_16 != NULL) && (o_16 != t)))
        _fail(t);
      else
        o_16 = t;
      t = w_16(t);
      t = not_null(l_16);
      t = y_68(t);
      if(((p_16 != NULL) && (p_16 != t)))
        _fail(t);
      else
        p_16 = t;
      t = x_16(t);
    }
    return(t);
  }
  if(((h_16 != NULL) && (h_16 != t)))
    _fail(t);
  else
    h_16 = t;
  t = not_null(h_16);
  if(match_cons(t, sym_Scope_2))
    {
      i_16 = ATgetArgument(t, 0);
      j_16 = ATgetArgument(t, 1);
      t = v_16(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm y_77 (ATerm), ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm t)
{
  ATerm w_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(a_78, y_77, t);
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
            t = SDefT_4_0(a_78, a_78, a_78, y_77, t);
            ;
            LocalPopChoice(z_7);
          }
        else
          {
            t = y_7;
            {
              ATerm t_8 = t;
              int u_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(a_78, a_78, a_78, y_77, t);
                  ;
                  LocalPopChoice(u_8);
                }
              else
                {
                  t = t_8;
                  t = DynamicRules_1_0(y_77, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  ATerm l_17 (ATerm t)
  {
    ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL;
    t = not_null(d_17);
    if(((h_17 != NULL) && (h_17 != t)))
      _fail(t);
    else
      h_17 = t;
    t = not_null(e_17);
    if(((i_17 != NULL) && (i_17 != t)))
      _fail(t);
    else
      i_17 = t;
    t = not_null(f_17);
    if(((k_17 != NULL) && (k_17 != t)))
      _fail(t);
    else
      k_17 = t;
    t = not_null(g_17);
    if(((j_17 != NULL) && (j_17 != t)))
      _fail(t);
    else
      j_17 = t;
    t = not_null(k_17);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((c_17 != NULL) && (c_17 != t)))
    _fail(t);
  else
    c_17 = t;
  t = not_null(c_17);
  if(match_cons(t, sym_RDefT_4))
    {
      d_17 = ATgetArgument(t, 0);
      e_17 = ATgetArgument(t, 1);
      f_17 = ATgetArgument(t, 2);
      g_17 = ATgetArgument(t, 3);
      t = l_17(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
    ATerm u_17 (ATerm t)
    {
      ATerm s_17 = NULL;
      t = not_null(r_17);
      if(((s_17 != NULL) && (s_17 != t)))
        _fail(t);
      else
        s_17 = t;
      t = not_null(s_17);
      return(t);
    }
    ATerm v_17 (ATerm t)
    {
      ATerm t_17 = NULL;
      t = not_null(r_17);
      if(((t_17 != NULL) && (t_17 != t)))
        _fail(t);
      else
        t_17 = t;
      t = not_null(t_17);
      return(t);
    }
    if(((q_17 != NULL) && (q_17 != t)))
      _fail(t);
    else
      q_17 = t;
    t = not_null(q_17);
    if(match_cons(t, sym_VarDec_2))
      {
        r_17 = ATgetArgument(t, 0);
        p_17 = ATgetArgument(t, 1);
        t = u_17(t);
      }
    else
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            r_17 = ATgetArgument(t, 0);
            t = v_17(t);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1_0(u_0, t);
  return(t);
}
ATerm Bind6_0_0 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  ATerm h_18 (ATerm t)
  {
    ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
    t = not_null(z_17);
    if(((d_18 != NULL) && (d_18 != t)))
      _fail(t);
    else
      d_18 = t;
    t = not_null(a_18);
    if(((e_18 != NULL) && (e_18 != t)))
      _fail(t);
    else
      e_18 = t;
    t = not_null(b_18);
    if(((g_18 != NULL) && (g_18 != t)))
      _fail(t);
    else
      g_18 = t;
    t = not_null(c_18);
    if(((f_18 != NULL) && (f_18 != t)))
      _fail(t);
    else
      f_18 = t;
    t = not_null(g_18);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((y_17 != NULL) && (y_17 != t)))
    _fail(t);
  else
    y_17 = t;
  t = not_null(y_17);
  if(match_cons(t, sym_SDefT_4))
    {
      z_17 = ATgetArgument(t, 0);
      a_18 = ATgetArgument(t, 1);
      b_18 = ATgetArgument(t, 2);
      c_18 = ATgetArgument(t, 3);
      t = h_18(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL;
  ATerm n_18 (ATerm t)
  {
    ATerm m_18 = NULL;
    t = not_null(l_18);
    if(((m_18 != NULL) && (m_18 != t)))
      _fail(t);
    else
      m_18 = t;
    t = not_null(m_18);
    t = tvars_0_0(t);
    return(t);
  }
  if(((k_18 != NULL) && (k_18 != t)))
    _fail(t);
  else
    k_18 = t;
  t = not_null(k_18);
  if(match_cons(t, sym_DynamicRules_1))
    {
      l_18 = ATgetArgument(t, 0);
      t = n_18(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Add1_0_0 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL;
  ATerm t_18 (ATerm t)
  {
    ATerm s_18 = NULL;
    t = not_null(r_18);
    if(((s_18 != NULL) && (s_18 != t)))
      _fail(t);
    else
      s_18 = t;
    t = (ATerm) ATinsert(ATempty, not_null(s_18));
    return(t);
  }
  if(((q_18 != NULL) && (q_18 != t)))
    _fail(t);
  else
    q_18 = t;
  t = not_null(q_18);
  if(match_cons(t, sym_Var_1))
    {
      r_18 = ATgetArgument(t, 0);
      t = t_18(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1_0 (ATerm k_87 (ATerm), ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  ATerm b_19 (ATerm t)
  {
    ATerm z_18 = NULL,a_19 = NULL;
    t = not_null(x_18);
    if(((a_19 != NULL) && (a_19 != t)))
      _fail(t);
    else
      a_19 = t;
    t = not_null(y_18);
    if(((z_18 != NULL) && (z_18 != t)))
      _fail(t);
    else
      z_18 = t;
    t = not_null(a_19);
    {
      ATerm c_19 (ATerm t)
      {
        ATerm f_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            t = not_null(z_18);
            ;
            LocalPopChoice(g_9);
          }
        else
          {
            t = f_9;
            {
              ATerm r_9 = t;
              int s_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_0 (ATerm t)
                  {
                    t = not_null(z_18);
                    return(t);
                  }
                  t = HdMember_p__2_0(k_87, v_0, t);
                  t = c_19(t);
                  ;
                  LocalPopChoice(s_9);
                }
              else
                {
                  t = r_9;
                  t = Cons_2_0(_id, c_19, t);
                }
            }
          }
        return(t);
      }
      t = c_19(t);
    }
    return(t);
  }
  if(((w_18 != NULL) && (w_18 != t)))
    _fail(t);
  else
    w_18 = t;
  t = not_null(w_18);
  if(match_cons(t, sym__2))
    {
      x_18 = ATgetArgument(t, 0);
      y_18 = ATgetArgument(t, 1);
      t = b_19(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  t = union_1_0(eq_0_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm z_89 (ATerm), ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm t)
{
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = z_89(t);
      ;
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      {
        ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
        ATerm q_19 (ATerm t)
        {
          ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,o_19 = NULL;
          t = not_null(i_19);
          if(((k_19 != NULL) && (k_19 != t)))
            _fail(t);
          else
            k_19 = t;
          t = not_null(j_19);
          if(((l_19 != NULL) && (l_19 != t)))
            _fail(t);
          else
            l_19 = t;
          t = not_null(h_19);
          {
            ATerm j_10;
            j_10 = t;
            {
              ATerm n_19 = NULL;
              ATerm r_19 (ATerm t)
              {
                t = not_null(n_19);
                if(((m_19 != NULL) && (m_19 != t)))
                  _fail(t);
                else
                  m_19 = t;
                t = not_null(n_19);
                return(t);
              }
              t = not_null(k_19);
              t = b_90(t);
              if(((n_19 != NULL) && (n_19 != t)))
                _fail(t);
              else
                n_19 = t;
              t = r_19(t);
            }
            t = j_10;
            {
              ATerm p_19 = NULL;
              ATerm s_19 (ATerm t)
              {
                t = not_null(p_19);
                if(((o_19 != NULL) && (o_19 != t)))
                  _fail(t);
                else
                  o_19 = t;
                t = not_null(p_19);
                return(t);
              }
              t = not_null(l_19);
              t = foldr_3_0(z_89, a_90, b_90, t);
              if(((p_19 != NULL) && (p_19 != t)))
                _fail(t);
              else
                p_19 = t;
              t = s_19(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), not_null(o_19));
              t = a_90(t);
            }
          }
          return(t);
        }
        if(((h_19 != NULL) && (h_19 != t)))
          _fail(t);
        else
          h_19 = t;
        t = not_null(h_19);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_19 = ATgetFirst((ATermList) t);
            j_19 = (ATerm) ATgetNext((ATermList) t);
            t = q_19(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm x_87 (ATerm), ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm t)
{
  ATerm x_19 = NULL;
  ATerm f_20 (ATerm t)
  {
    ATerm y_19 = NULL,z_19 = NULL;
    t = not_null(x_19);
    if(((y_19 != NULL) && (y_19 != t)))
      _fail(t);
    else
      y_19 = t;
    t = not_null(x_19);
    {
      ATerm a_20 = NULL;
      ATerm g_20 (ATerm t)
      {
        ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
        ATerm h_20 (ATerm t)
        {
          t = not_null(e_20);
          if(((z_19 != NULL) && (z_19 != t)))
            _fail(t);
          else
            z_19 = t;
          t = not_null(c_20);
          return(t);
        }
        t = not_null(a_20);
        if(((b_20 != NULL) && (b_20 != t)))
          _fail(t);
        else
          b_20 = t;
        t = not_null(a_20);
        t = SSL_explode_term(not_null(b_20));
        if(((c_20 != NULL) && (c_20 != t)))
          _fail(t);
        else
          c_20 = t;
        t = not_null(c_20);
        if(match_cons(t, sym__2))
          {
            d_20 = ATgetArgument(t, 0);
            e_20 = ATgetArgument(t, 1);
            t = h_20(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(y_19);
      if(((a_20 != NULL) && (a_20 != t)))
        _fail(t);
      else
        a_20 = t;
      t = g_20(t);
      t = not_null(z_19);
      t = foldr_3_0(x_87, y_87, z_87, t);
    }
    return(t);
  }
  if(((x_19 != NULL) && (x_19 != t)))
    _fail(t);
  else
    x_19 = t;
  t = f_20(t);
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
  ATerm o_20 (ATerm t)
  {
    ATerm n_20 = NULL;
    t = not_null(l_20);
    if(((n_20 != NULL) && (n_20 != t)))
      _fail(t);
    else
      n_20 = t;
    t = not_null(m_20);
    if(((n_20 != NULL) && (n_20 != t)))
      _fail(t);
    else
      n_20 = t;
    t = not_null(k_20);
    return(t);
  }
  if(((k_20 != NULL) && (k_20 != t)))
    _fail(t);
  else
    k_20 = t;
  t = not_null(k_20);
  if(match_cons(t, sym__2))
    {
      l_20 = ATgetArgument(t, 0);
      m_20 = ATgetArgument(t, 1);
      t = o_20(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
  ATerm z_20 (ATerm t)
  {
    ATerm v_20 = NULL,w_20 = NULL;
    t = not_null(t_20);
    if(((w_20 != NULL) && (w_20 != t)))
      _fail(t);
    else
      w_20 = t;
    t = not_null(u_20);
    if(((v_20 != NULL) && (v_20 != t)))
      _fail(t);
    else
      v_20 = t;
    t = not_null(s_20);
    t = p_87(t);
    {
      ATerm w_0 (ATerm t)
      {
        ATerm x_20 = NULL;
        ATerm a_21 (ATerm t)
        {
          ATerm y_20 = NULL;
          t = not_null(x_20);
          if(((y_20 != NULL) && (y_20 != t)))
            _fail(t);
          else
            y_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_20), not_null(y_20));
          t = o_87(t);
          return(t);
        }
        if(((x_20 != NULL) && (x_20 != t)))
          _fail(t);
        else
          x_20 = t;
        t = a_21(t);
        return(t);
      }
      t = fetch_1_0(w_0, t);
    }
    t = not_null(v_20);
    return(t);
  }
  if(((s_20 != NULL) && (s_20 != t)))
    _fail(t);
  else
    s_20 = t;
  t = not_null(s_20);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_20 = ATgetFirst((ATermList) t);
      u_20 = (ATerm) ATgetNext((ATermList) t);
      t = z_20(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1_0 (ATerm g_87 (ATerm), ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
  ATerm i_21 (ATerm t)
  {
    ATerm g_21 = NULL,h_21 = NULL;
    t = not_null(e_21);
    if(((h_21 != NULL) && (h_21 != t)))
      _fail(t);
    else
      h_21 = t;
    t = not_null(f_21);
    if(((g_21 != NULL) && (g_21 != t)))
      _fail(t);
    else
      g_21 = t;
    t = not_null(h_21);
    {
      ATerm j_21 (ATerm t)
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
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
                  ATerm x_0 (ATerm t)
                  {
                    t = not_null(g_21);
                    return(t);
                  }
                  t = HdMember_p__2_0(g_87, x_0, t);
                  t = j_21(t);
                  ;
                  LocalPopChoice(n_10);
                }
              else
                {
                  t = m_10;
                  t = Cons_2_0(_id, j_21, t);
                }
            }
          }
        return(t);
      }
      t = j_21(t);
    }
    return(t);
  }
  if(((d_21 != NULL) && (d_21 != t)))
    _fail(t);
  else
    d_21 = t;
  t = not_null(d_21);
  if(match_cons(t, sym__2))
    {
      e_21 = ATgetArgument(t, 0);
      f_21 = ATgetArgument(t, 1);
      t = i_21(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfShift_0_0 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  ATerm v_21 (ATerm t)
  {
    ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
    t = not_null(o_21);
    if(((t_21 != NULL) && (t_21 != t)))
      _fail(t);
    else
      t_21 = t;
    t = not_null(q_21);
    if(((s_21 != NULL) && (s_21 != t)))
      _fail(t);
    else
      s_21 = t;
    t = not_null(r_21);
    if(((u_21 != NULL) && (u_21 != t)))
      _fail(t);
    else
      u_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_21)), not_null(s_21)), not_null(u_21));
    return(t);
  }
  if(((n_21 != NULL) && (n_21 != t)))
    _fail(t);
  else
    n_21 = t;
  t = not_null(n_21);
  if(match_cons(t, sym__2))
    {
      o_21 = ATgetArgument(t, 0);
      p_21 = ATgetArgument(t, 1);
      t = not_null(p_21);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_21 = ATgetFirst((ATermList) t);
          r_21 = (ATerm) ATgetNext((ATermList) t);
          t = v_21(t);
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
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
  ATerm d_23 (ATerm t)
  {
    ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,v_22 = NULL,b_23 = NULL;
    t = not_null(i_22);
    if(((l_22 != NULL) && (l_22 != t)))
      _fail(t);
    else
      l_22 = t;
    t = not_null(j_22);
    if(((m_22 != NULL) && (m_22 != t)))
      _fail(t);
    else
      m_22 = t;
    t = not_null(k_22);
    if(((n_22 != NULL) && (n_22 != t)))
      _fail(t);
    else
      n_22 = t;
    t = not_null(g_22);
    {
      ATerm d_11;
      d_11 = t;
      {
        ATerm q_22 = NULL;
        ATerm e_23 (ATerm t)
        {
          ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
          ATerm f_23 (ATerm t)
          {
            t = not_null(t_22);
            if(((o_22 != NULL) && (o_22 != t)))
              _fail(t);
            else
              o_22 = t;
            t = not_null(u_22);
            if(((p_22 != NULL) && (p_22 != t)))
              _fail(t);
            else
              p_22 = t;
            t = not_null(s_22);
            return(t);
          }
          t = not_null(q_22);
          if(((r_22 != NULL) && (r_22 != t)))
            _fail(t);
          else
            r_22 = t;
          t = not_null(q_22);
          t = SSL_explode_term(not_null(r_22));
          if(((s_22 != NULL) && (s_22 != t)))
            _fail(t);
          else
            s_22 = t;
          t = not_null(s_22);
          if(match_cons(t, sym__2))
            {
              t_22 = ATgetArgument(t, 0);
              u_22 = ATgetArgument(t, 1);
              t = f_23(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = not_null(m_22);
        if(((q_22 != NULL) && (q_22 != t)))
          _fail(t);
        else
          q_22 = t;
        t = e_23(t);
      }
      t = d_11;
      {
        ATerm e_11;
        e_11 = t;
        {
          ATerm w_22 = NULL;
          ATerm g_23 (ATerm t)
          {
            ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
            ATerm h_23 (ATerm t)
            {
              t = not_null(z_22);
              if(((o_22 != NULL) && (o_22 != t)))
                _fail(t);
              else
                o_22 = t;
              t = not_null(a_23);
              if(((v_22 != NULL) && (v_22 != t)))
                _fail(t);
              else
                v_22 = t;
              t = not_null(y_22);
              return(t);
            }
            t = not_null(w_22);
            if(((x_22 != NULL) && (x_22 != t)))
              _fail(t);
            else
              x_22 = t;
            t = not_null(w_22);
            t = SSL_explode_term(not_null(x_22));
            if(((y_22 != NULL) && (y_22 != t)))
              _fail(t);
            else
              y_22 = t;
            t = not_null(y_22);
            if(match_cons(t, sym__2))
              {
                z_22 = ATgetArgument(t, 0);
                a_23 = ATgetArgument(t, 1);
                t = h_23(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = not_null(l_22);
          if(((w_22 != NULL) && (w_22 != t)))
            _fail(t);
          else
            w_22 = t;
          t = g_23(t);
        }
        t = e_11;
        {
          ATerm c_23 = NULL;
          ATerm i_23 (ATerm t)
          {
            t = not_null(c_23);
            if(((b_23 != NULL) && (b_23 != t)))
              _fail(t);
            else
              b_23 = t;
            t = not_null(c_23);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_22), not_null(p_22));
          t = zip_1_0(_id, t);
          if(((c_23 != NULL) && (c_23 != t)))
            _fail(t);
          else
            c_23 = t;
          t = i_23(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_23), not_null(n_22));
          t = conc_0_0(t);
        }
      }
    }
    return(t);
  }
  if(((g_22 != NULL) && (g_22 != t)))
    _fail(t);
  else
    g_22 = t;
  t = not_null(g_22);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_22 = ATgetFirst((ATermList) t);
      k_22 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(h_22);
      if(match_cons(t, sym__2))
        {
          i_22 = ATgetArgument(t, 0);
          j_22 = ATgetArgument(t, 1);
          t = d_23(t);
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
ATerm UfIdem_0_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  ATerm t_23 (ATerm t)
  {
    ATerm r_23 = NULL,s_23 = NULL;
    t = not_null(o_23);
    if(((r_23 != NULL) && (r_23 != t)))
      _fail(t);
    else
      r_23 = t;
    t = not_null(p_23);
    if(((r_23 != NULL) && (r_23 != t)))
      _fail(t);
    else
      r_23 = t;
    t = not_null(q_23);
    if(((s_23 != NULL) && (s_23 != t)))
      _fail(t);
    else
      s_23 = t;
    t = not_null(s_23);
    return(t);
  }
  if(((m_23 != NULL) && (m_23 != t)))
    _fail(t);
  else
    m_23 = t;
  t = not_null(m_23);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_23 = ATgetFirst((ATermList) t);
      q_23 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(n_23);
      if(match_cons(t, sym__2))
        {
          o_23 = ATgetArgument(t, 0);
          p_23 = ATgetArgument(t, 1);
          t = t_23(t);
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
ATerm while_not_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm t)
{
  ATerm u_23 (ATerm t)
  {
    ATerm f_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_96(t);
        ;
        LocalPopChoice(g_11);
      }
    else
      {
        t = f_11;
        t = i_96(t);
        t = u_23(t);
      }
    return(t);
  }
  t = u_23(t);
  return(t);
}
ATerm for_3_0 (ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm t)
{
  t = k_96(t);
  t = while_not_2_0(l_96, m_96, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm h_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_0 (ATerm t)
      {
        ATerm w_23 = NULL;
        ATerm y_23 (ATerm t)
        {
          ATerm x_23 = NULL;
          t = not_null(w_23);
          if(((x_23 != NULL) && (x_23 != t)))
            _fail(t);
          else
            x_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(x_23));
          return(t);
        }
        if(((w_23 != NULL) && (w_23 != t)))
          _fail(t);
        else
          w_23 = t;
        t = y_23(t);
        return(t);
      }
      ATerm z_0 (ATerm t)
      {
        t = _2_0(_id, Nil_0_0, t);
        return(t);
      }
      ATerm a_1 (ATerm t)
      {
        ATerm x_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 (ATerm t)
            {
              ATerm z_11 = t;
              int m_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0_0(t);
                  ;
                  LocalPopChoice(m_12);
                }
              else
                {
                  t = z_11;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, b_1, t);
            ;
            LocalPopChoice(y_11);
          }
        else
          {
            t = x_11;
            t = UfShift_0_0(t);
          }
        return(t);
      }
      t = for_3_0(y_0, z_0, a_1, t);
      ;
      LocalPopChoice(w_11);
    }
  else
    {
      t = h_11;
      t = diff_1_0(eq_0_0, t);
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm d_94 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t)
{
  ATerm c_24 (ATerm t)
  {
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_94(t);
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
              ATerm a_24 = NULL;
              ATerm f_13;
              f_13 = t;
              {
                ATerm b_24 = NULL;
                ATerm d_24 (ATerm t)
                {
                  t = not_null(b_24);
                  if(((a_24 != NULL) && (a_24 != t)))
                    _fail(t);
                  else
                    a_24 = t;
                  t = not_null(b_24);
                  return(t);
                }
                t = c_94(t);
                if(((b_24 != NULL) && (b_24 != t)))
                  _fail(t);
                else
                  b_24 = t;
                t = d_24(t);
              }
              t = f_13;
              {
                ATerm c_1 (ATerm t)
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = not_null(a_24);
                    return(t);
                  }
                  t = split_2_0(c_24, e_1, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm d_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = d_94(c_1, c_24, d_1, t);
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(f_1, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(q_12);
            }
          else
            {
              t = p_12;
              {
                ATerm g_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(g_1, union_0_0, c_24, t);
              }
            }
        }
      }
    return(t);
  }
  t = c_24(t);
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
        {
          ATerm i_13 = t;
          int j_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(j_13);
            }
          else
            {
              t = i_13;
              {
                ATerm k_13 = t;
                int l_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(l_13);
                  }
                else
                  {
                    t = k_13;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(Add1_0_0, h_1, tboundin_3_0, t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL;
  ATerm t_24 (ATerm t)
  {
    ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL;
    t = not_null(i_24);
    if(((q_24 != NULL) && (q_24 != t)))
      _fail(t);
    else
      q_24 = t;
    t = not_null(j_24);
    if(((o_24 != NULL) && (o_24 != t)))
      _fail(t);
    else
      o_24 = t;
    t = not_null(k_24);
    if(((p_24 != NULL) && (p_24 != t)))
      _fail(t);
    else
      p_24 = t;
    t = not_null(q_24);
    t = tvars_0_0(t);
    return(t);
  }
  ATerm u_24 (ATerm t)
  {
    ATerm r_24 = NULL,s_24 = NULL;
    t = not_null(m_24);
    if(((s_24 != NULL) && (s_24 != t)))
      _fail(t);
    else
      s_24 = t;
    t = not_null(n_24);
    if(((r_24 != NULL) && (r_24 != t)))
      _fail(t);
    else
      r_24 = t;
    t = not_null(s_24);
    return(t);
  }
  if(((l_24 != NULL) && (l_24 != t)))
    _fail(t);
  else
    l_24 = t;
  t = not_null(l_24);
  if(match_cons(t, sym_LRule_1))
    {
      m_24 = ATgetArgument(t, 0);
      t = not_null(m_24);
      if(match_cons(t, sym_Rule_3))
        {
          i_24 = ATgetArgument(t, 0);
          j_24 = ATgetArgument(t, 1);
          k_24 = ATgetArgument(t, 2);
          t = t_24(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          m_24 = ATgetArgument(t, 0);
          n_24 = ATgetArgument(t, 1);
          t = u_24(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL;
  ATerm i_26 (ATerm t)
  {
    ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,o_25 = NULL;
    ATerm m_26 (ATerm t)
    {
      ATerm p_25 = NULL,q_25 = NULL;
      t = not_null(o_25);
      if(((p_25 != NULL) && (p_25 != t)))
        _fail(t);
      else
        p_25 = t;
      t = not_null(o_25);
      {
        ATerm r_25 = NULL;
        ATerm n_26 (ATerm t)
        {
          t = not_null(r_25);
          if(((q_25 != NULL) && (q_25 != t)))
            _fail(t);
          else
            q_25 = t;
          t = not_null(r_25);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(p_25)), not_null(m_25));
        if(((r_25 != NULL) && (r_25 != t)))
          _fail(t);
        else
          r_25 = t;
        t = n_26(t);
        t = not_null(q_25);
      }
      return(t);
    }
    t = not_null(i_25);
    if(((k_25 != NULL) && (k_25 != t)))
      _fail(t);
    else
      k_25 = t;
    t = not_null(j_25);
    if(((l_25 != NULL) && (l_25 != t)))
      _fail(t);
    else
      l_25 = t;
    t = not_null(i_25);
    {
      ATerm n_25 = NULL;
      ATerm l_26 (ATerm t)
      {
        t = not_null(n_25);
        if(((m_25 != NULL) && (m_25 != t)))
          _fail(t);
        else
          m_25 = t;
        t = not_null(n_25);
        return(t);
      }
      t = SSLgetAnnotations(not_null(k_25));
      if(((n_25 != NULL) && (n_25 != t)))
        _fail(t);
      else
        n_25 = t;
      t = l_26(t);
      t = not_null(l_25);
      t = m_0(t);
      if(((o_25 != NULL) && (o_25 != t)))
        _fail(t);
      else
        o_25 = t;
      t = m_26(t);
    }
    return(t);
  }
  ATerm j_26 (ATerm t)
  {
    ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL,w_25 = NULL;
    ATerm p_26 (ATerm t)
    {
      ATerm x_25 = NULL,y_25 = NULL;
      t = not_null(w_25);
      if(((x_25 != NULL) && (x_25 != t)))
        _fail(t);
      else
        x_25 = t;
      t = not_null(w_25);
      {
        ATerm z_25 = NULL;
        ATerm q_26 (ATerm t)
        {
          t = not_null(z_25);
          if(((y_25 != NULL) && (y_25 != t)))
            _fail(t);
          else
            y_25 = t;
          t = not_null(z_25);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(x_25)), not_null(u_25));
        if(((z_25 != NULL) && (z_25 != t)))
          _fail(t);
        else
          z_25 = t;
        t = q_26(t);
        t = not_null(y_25);
      }
      return(t);
    }
    t = not_null(i_25);
    if(((s_25 != NULL) && (s_25 != t)))
      _fail(t);
    else
      s_25 = t;
    t = not_null(j_25);
    if(((t_25 != NULL) && (t_25 != t)))
      _fail(t);
    else
      t_25 = t;
    t = not_null(i_25);
    {
      ATerm v_25 = NULL;
      ATerm o_26 (ATerm t)
      {
        t = not_null(v_25);
        if(((u_25 != NULL) && (u_25 != t)))
          _fail(t);
        else
          u_25 = t;
        t = not_null(v_25);
        return(t);
      }
      t = SSLgetAnnotations(not_null(s_25));
      if(((v_25 != NULL) && (v_25 != t)))
        _fail(t);
      else
        v_25 = t;
      t = o_26(t);
      t = not_null(t_25);
      t = m_0(t);
      if(((w_25 != NULL) && (w_25 != t)))
        _fail(t);
      else
        w_25 = t;
      t = p_26(t);
    }
    return(t);
  }
  ATerm k_26 (ATerm t)
  {
    ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,e_26 = NULL;
    ATerm s_26 (ATerm t)
    {
      ATerm f_26 = NULL,g_26 = NULL;
      t = not_null(e_26);
      if(((f_26 != NULL) && (f_26 != t)))
        _fail(t);
      else
        f_26 = t;
      t = not_null(e_26);
      {
        ATerm h_26 = NULL;
        ATerm t_26 (ATerm t)
        {
          t = not_null(h_26);
          if(((g_26 != NULL) && (g_26 != t)))
            _fail(t);
          else
            g_26 = t;
          t = not_null(h_26);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(f_26)), not_null(c_26));
        if(((h_26 != NULL) && (h_26 != t)))
          _fail(t);
        else
          h_26 = t;
        t = t_26(t);
        t = not_null(g_26);
      }
      return(t);
    }
    t = not_null(i_25);
    if(((a_26 != NULL) && (a_26 != t)))
      _fail(t);
    else
      a_26 = t;
    t = not_null(j_25);
    if(((b_26 != NULL) && (b_26 != t)))
      _fail(t);
    else
      b_26 = t;
    t = not_null(i_25);
    {
      ATerm d_26 = NULL;
      ATerm r_26 (ATerm t)
      {
        t = not_null(d_26);
        if(((c_26 != NULL) && (c_26 != t)))
          _fail(t);
        else
          c_26 = t;
        t = not_null(d_26);
        return(t);
      }
      t = SSLgetAnnotations(not_null(a_26));
      if(((d_26 != NULL) && (d_26 != t)))
        _fail(t);
      else
        d_26 = t;
      t = r_26(t);
      t = not_null(b_26);
      t = m_0(t);
      if(((e_26 != NULL) && (e_26 != t)))
        _fail(t);
      else
        e_26 = t;
      t = s_26(t);
    }
    return(t);
  }
  if(((i_25 != NULL) && (i_25 != t)))
    _fail(t);
  else
    i_25 = t;
  t = not_null(i_25);
  if(match_cons(t, sym_Var_1))
    {
      j_25 = ATgetArgument(t, 0);
      {
        ATerm m_13 = t;
        int q_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_26(t);
            ;
            LocalPopChoice(q_14);
          }
        else
          {
            t = m_13;
            {
              ATerm r_14 = t;
              int s_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_26(t);
                  ;
                  LocalPopChoice(s_14);
                }
              else
                {
                  t = r_14;
                  t = k_26(t);
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
ATerm DistBinding_2_0 (ATerm j_92 (ATerm), ATerm k_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL;
  ATerm z_28 (ATerm t)
  {
    ATerm c_27 = NULL,t_28 = NULL,u_28 = NULL;
    t = not_null(z_26);
    if(((u_28 != NULL) && (u_28 != t)))
      _fail(t);
    else
      u_28 = t;
    t = not_null(a_27);
    if(((t_28 != NULL) && (t_28 != t)))
      _fail(t);
    else
      t_28 = t;
    t = not_null(b_27);
    if(((c_27 != NULL) && (c_27 != t)))
      _fail(t);
    else
      c_27 = t;
    t = not_null(u_28);
    {
      ATerm i_1 (ATerm t)
      {
        ATerm v_28 = NULL;
        ATerm a_29 (ATerm t)
        {
          ATerm w_28 = NULL;
          t = not_null(v_28);
          if(((w_28 != NULL) && (w_28 != t)))
            _fail(t);
          else
            w_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_28), not_null(c_27));
          t = j_92(t);
          return(t);
        }
        if(((v_28 != NULL) && (v_28 != t)))
          _fail(t);
        else
          v_28 = t;
        t = a_29(t);
        return(t);
      }
      ATerm j_1 (ATerm t)
      {
        ATerm x_28 = NULL;
        ATerm b_29 (ATerm t)
        {
          ATerm y_28 = NULL;
          t = not_null(x_28);
          if(((y_28 != NULL) && (y_28 != t)))
            _fail(t);
          else
            y_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_28), not_null(t_28));
          t = j_92(t);
          return(t);
        }
        if(((x_28 != NULL) && (x_28 != t)))
          _fail(t);
        else
          x_28 = t;
        t = b_29(t);
        return(t);
      }
      t = k_92(i_1, j_1, _id, t);
    }
    return(t);
  }
  if(((y_26 != NULL) && (y_26 != t)))
    _fail(t);
  else
    y_26 = t;
  t = not_null(y_26);
  if(match_cons(t, sym__3))
    {
      z_26 = ATgetArgument(t, 0);
      a_27 = ATgetArgument(t, 1);
      b_27 = ATgetArgument(t, 2);
      t = z_28(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip3_0_0 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
  ATerm j_29 (ATerm t)
  {
    ATerm h_29 = NULL,i_29 = NULL;
    t = not_null(f_29);
    if(((h_29 != NULL) && (h_29 != t)))
      _fail(t);
    else
      h_29 = t;
    t = not_null(g_29);
    if(((i_29 != NULL) && (i_29 != t)))
      _fail(t);
    else
      i_29 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(i_29)), not_null(h_29));
    return(t);
  }
  if(((e_29 != NULL) && (e_29 != t)))
    _fail(t);
  else
    e_29 = t;
  t = not_null(e_29);
  if(match_cons(t, sym__2))
    {
      f_29 = ATgetArgument(t, 0);
      g_29 = ATgetArgument(t, 1);
      t = j_29(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0_0 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL;
  ATerm a_30 (ATerm t)
  {
    ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL;
    t = not_null(r_29);
    if(((w_29 != NULL) && (w_29 != t)))
      _fail(t);
    else
      w_29 = t;
    t = not_null(s_29);
    if(((y_29 != NULL) && (y_29 != t)))
      _fail(t);
    else
      y_29 = t;
    t = not_null(u_29);
    if(((x_29 != NULL) && (x_29 != t)))
      _fail(t);
    else
      x_29 = t;
    t = not_null(v_29);
    if(((z_29 != NULL) && (z_29 != t)))
      _fail(t);
    else
      z_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(w_29), not_null(x_29)), (ATerm) ATmakeAppl(sym__2, not_null(y_29), not_null(z_29)));
    return(t);
  }
  if(((p_29 != NULL) && (p_29 != t)))
    _fail(t);
  else
    p_29 = t;
  t = not_null(p_29);
  if(match_cons(t, sym__2))
    {
      q_29 = ATgetArgument(t, 0);
      t_29 = ATgetArgument(t, 1);
      t = not_null(q_29);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_29 = ATgetFirst((ATermList) t);
          s_29 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(t_29);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_29 = ATgetFirst((ATermList) t);
              v_29 = (ATerm) ATgetNext((ATermList) t);
              t = a_30(t);
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
ATerm Zip1_0_0 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
  ATerm k_30 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  if(((h_30 != NULL) && (h_30 != t)))
    _fail(t);
  else
    h_30 = t;
  t = not_null(h_30);
  if(match_cons(t, sym__2))
    {
      i_30 = ATgetArgument(t, 0);
      j_30 = ATgetArgument(t, 1);
      t = not_null(i_30);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = not_null(j_30);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = k_30(t);
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
ATerm genzip_4_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t)
{
  ATerm l_30 (ATerm t)
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_83(t);
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        t = k_83(t);
        t = _2_0(m_83, l_30, t);
        t = l_83(t);
      }
    return(t);
  }
  t = l_30(t);
  return(t);
}
ATerm zip_1_0 (ATerm o_83 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1_0_0, Zip2_0_0, Zip3_0_0, o_83, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm RnBinding_2_0 (ATerm d_92 (ATerm), ATerm e_92 (ATerm, ATerm (ATerm)), ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
  ATerm i_31 (ATerm t)
  {
    ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,g_31 = NULL;
    t = not_null(u_30);
    if(((w_30 != NULL) && (w_30 != t)))
      _fail(t);
    else
      w_30 = t;
    t = not_null(v_30);
    if(((x_30 != NULL) && (x_30 != t)))
      _fail(t);
    else
      x_30 = t;
    t = not_null(t_30);
    {
      ATerm v_14;
      v_14 = t;
      {
        ATerm b_31 = NULL;
        ATerm j_31 (ATerm t)
        {
          ATerm c_31 = NULL;
          ATerm k_31 (ATerm t)
          {
            ATerm d_31 = NULL,f_31 = NULL;
            ATerm m_31 (ATerm t)
            {
              t = not_null(f_31);
              if(((a_31 != NULL) && (a_31 != t)))
                _fail(t);
              else
                a_31 = t;
              t = not_null(f_31);
              return(t);
            }
            t = not_null(c_31);
            if(((z_30 != NULL) && (z_30 != t)))
              _fail(t);
            else
              z_30 = t;
            t = not_null(c_31);
            {
              ATerm e_31 = NULL;
              ATerm l_31 (ATerm t)
              {
                t = not_null(e_31);
                if(((d_31 != NULL) && (d_31 != t)))
                  _fail(t);
                else
                  d_31 = t;
                t = not_null(e_31);
                return(t);
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_30), not_null(z_30));
              t = zip_1_0(_id, t);
              if(((e_31 != NULL) && (e_31 != t)))
                _fail(t);
              else
                e_31 = t;
              t = l_31(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_31), not_null(x_30));
              t = conc_0_0(t);
              if(((f_31 != NULL) && (f_31 != t)))
                _fail(t);
              else
                f_31 = t;
              t = m_31(t);
            }
            return(t);
          }
          t = not_null(b_31);
          if(((y_30 != NULL) && (y_30 != t)))
            _fail(t);
          else
            y_30 = t;
          t = not_null(b_31);
          t = map_1_0(new_0_0, t);
          if(((c_31 != NULL) && (c_31 != t)))
            _fail(t);
          else
            c_31 = t;
          t = k_31(t);
          return(t);
        }
        t = not_null(w_30);
        t = d_92(t);
        if(((b_31 != NULL) && (b_31 != t)))
          _fail(t);
        else
          b_31 = t;
        t = j_31(t);
      }
      t = v_14;
      {
        ATerm h_31 = NULL;
        ATerm n_31 (ATerm t)
        {
          t = not_null(h_31);
          if(((g_31 != NULL) && (g_31 != t)))
            _fail(t);
          else
            g_31 = t;
          t = not_null(h_31);
          return(t);
        }
        t = not_null(w_30);
        {
          ATerm k_1 (ATerm t)
          {
            t = not_null(z_30);
            return(t);
          }
          t = e_92(k_1, t);
          if(((h_31 != NULL) && (h_31 != t)))
            _fail(t);
          else
            h_31 = t;
          t = n_31(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(g_31), not_null(x_30), not_null(a_31));
      }
    }
    return(t);
  }
  if(((t_30 != NULL) && (t_30 != t)))
    _fail(t);
  else
    t_30 = t;
  t = not_null(t_30);
  if(match_cons(t, sym__2))
    {
      u_30 = ATgetArgument(t, 0);
      v_30 = ATgetArgument(t, 1);
      t = i_31(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0_0 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
  ATerm y_31 (ATerm t)
  {
    ATerm w_31 = NULL,x_31 = NULL;
    t = not_null(s_31);
    if(((w_31 != NULL) && (w_31 != t)))
      _fail(t);
    else
      w_31 = t;
    t = not_null(v_31);
    if(((x_31 != NULL) && (x_31 != t)))
      _fail(t);
    else
      x_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_31), not_null(x_31));
    return(t);
  }
  if(((r_31 != NULL) && (r_31 != t)))
    _fail(t);
  else
    r_31 = t;
  t = not_null(r_31);
  if(match_cons(t, sym__2))
    {
      s_31 = ATgetArgument(t, 0);
      t_31 = ATgetArgument(t, 1);
      t = not_null(t_31);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_31 = ATgetFirst((ATermList) t);
          v_31 = (ATerm) ATgetNext((ATermList) t);
          t = y_31(t);
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
ATerm Look1_0_0 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,n_32 = NULL;
  ATerm q_32 (ATerm t)
  {
    ATerm o_32 = NULL,p_32 = NULL;
    t = not_null(e_32);
    if(((o_32 != NULL) && (o_32 != t)))
      _fail(t);
    else
      o_32 = t;
    t = not_null(h_32);
    if(((o_32 != NULL) && (o_32 != t)))
      _fail(t);
    else
      o_32 = t;
    t = not_null(i_32);
    if(((p_32 != NULL) && (p_32 != t)))
      _fail(t);
    else
      p_32 = t;
    t = not_null(p_32);
    return(t);
  }
  if(((d_32 != NULL) && (d_32 != t)))
    _fail(t);
  else
    d_32 = t;
  t = not_null(d_32);
  if(match_cons(t, sym__2))
    {
      e_32 = ATgetArgument(t, 0);
      f_32 = ATgetArgument(t, 1);
      t = not_null(f_32);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_32 = ATgetFirst((ATermList) t);
          n_32 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(g_32);
          if(match_cons(t, sym__2))
            {
              h_32 = ATgetArgument(t, 0);
              i_32 = ATgetArgument(t, 1);
              t = q_32(t);
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
ATerm lookup_0_0 (ATerm t)
{
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0_0(t);
      ;
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      t = Look2_0_0(t);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm RnVar_1_0 (ATerm o_92 (ATerm, ATerm (ATerm)), ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
  ATerm b_33 (ATerm t)
  {
    ATerm z_32 = NULL,a_33 = NULL;
    t = not_null(x_32);
    if(((a_33 != NULL) && (a_33 != t)))
      _fail(t);
    else
      a_33 = t;
    t = not_null(y_32);
    if(((z_32 != NULL) && (z_32 != t)))
      _fail(t);
    else
      z_32 = t;
    t = not_null(a_33);
    {
      ATerm l_1 (ATerm t)
      {
        ATerm m_1 (ATerm t)
        {
          t = not_null(z_32);
          return(t);
        }
        t = split_2_0(_id, m_1, t);
        t = lookup_0_0(t);
        return(t);
      }
      t = o_92(l_1, t);
    }
    return(t);
  }
  if(((w_32 != NULL) && (w_32 != t)))
    _fail(t);
  else
    w_32 = t;
  t = not_null(w_32);
  if(match_cons(t, sym__2))
    {
      x_32 = ATgetArgument(t, 0);
      y_32 = ATgetArgument(t, 1);
      t = b_33(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1_0 (ATerm h_93 (ATerm), ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL;
  ATerm m_33 (ATerm t)
  {
    ATerm i_33 = NULL,j_33 = NULL;
    t = not_null(g_33);
    if(((j_33 != NULL) && (j_33 != t)))
      _fail(t);
    else
      j_33 = t;
    t = not_null(h_33);
    if(((i_33 != NULL) && (i_33 != t)))
      _fail(t);
    else
      i_33 = t;
    t = not_null(j_33);
    {
      ATerm n_1 (ATerm t)
      {
        ATerm k_33 = NULL;
        ATerm n_33 (ATerm t)
        {
          ATerm l_33 = NULL;
          t = not_null(k_33);
          if(((l_33 != NULL) && (l_33 != t)))
            _fail(t);
          else
            l_33 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_33), not_null(i_33));
          t = h_93(t);
          return(t);
        }
        if(((k_33 != NULL) && (k_33 != t)))
          _fail(t);
        else
          k_33 = t;
        t = n_33(t);
        return(t);
      }
      t = SRTS_all(n_1, t);
    }
    return(t);
  }
  if(((f_33 != NULL) && (f_33 != t)))
    _fail(t);
  else
    f_33 = t;
  t = not_null(f_33);
  if(match_cons(t, sym__2))
    {
      g_33 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
      t = m_33(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm r_92 (ATerm), ATerm t)
{
  ATerm o_33 (ATerm t)
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_92(t);
        ;
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
        t = all_dist_1_0(o_33, t);
      }
    return(t);
  }
  t = o_33(t);
  return(t);
}
ATerm rename_4_0 (ATerm y_91 (ATerm, ATerm (ATerm)), ATerm z_91 (ATerm), ATerm a_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm b_92 (ATerm, ATerm (ATerm)), ATerm t)
{
  ATerm q_33 = NULL;
  ATerm s_33 (ATerm t)
  {
    ATerm r_33 = NULL;
    t = not_null(q_33);
    if(((r_33 != NULL) && (r_33 != t)))
      _fail(t);
    else
      r_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_33), (ATerm) ATempty);
    {
      ATerm t_33 (ATerm t)
      {
        ATerm o_1 (ATerm t)
        {
          ATerm d_16 = t;
          int e_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1_0(y_91, t);
              ;
              LocalPopChoice(e_16);
            }
          else
            {
              t = d_16;
              t = RnBinding_2_0(z_91, b_92, t);
              t = DistBinding_2_0(t_33, a_92, t);
            }
          return(t);
        }
        t = env_alltd_1_0(o_1, t);
        return(t);
      }
      t = t_33(t);
    }
    return(t);
  }
  if(((q_33 != NULL) && (q_33 != t)))
    _fail(t);
  else
    q_33 = t;
  t = s_33(t);
  return(t);
}
ATerm trename_0_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
        {
          ATerm a_17 = t;
          int b_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0_0(t);
              ;
              LocalPopChoice(b_17);
            }
          else
            {
              t = a_17;
              t = Bind8_0_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, p_1, tboundin_3_0, tpaste_1_0, t);
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = trename_0_0(t);
  t = srename_0_0(t);
  return(t);
}
ATerm _2_0 (ATerm s_62 (ATerm), ATerm t_62 (ATerm), ATerm t)
{
  ATerm a_34 = NULL,g_34 = NULL,h_34 = NULL;
  ATerm t_34 (ATerm t)
  {
    ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,n_34 = NULL;
    ATerm z_34 (ATerm t)
    {
      ATerm o_34 = NULL,p_34 = NULL;
      ATerm a_35 (ATerm t)
      {
        ATerm q_34 = NULL,r_34 = NULL;
        t = not_null(p_34);
        if(((q_34 != NULL) && (q_34 != t)))
          _fail(t);
        else
          q_34 = t;
        t = not_null(p_34);
        {
          ATerm s_34 = NULL;
          ATerm b_35 (ATerm t)
          {
            t = not_null(s_34);
            if(((r_34 != NULL) && (r_34 != t)))
              _fail(t);
            else
              r_34 = t;
            t = not_null(s_34);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_34), not_null(q_34)), not_null(l_34));
          if(((s_34 != NULL) && (s_34 != t)))
            _fail(t);
          else
            s_34 = t;
          t = b_35(t);
          t = not_null(r_34);
        }
        return(t);
      }
      t = not_null(n_34);
      if(((o_34 != NULL) && (o_34 != t)))
        _fail(t);
      else
        o_34 = t;
      t = not_null(k_34);
      t = t_62(t);
      if(((p_34 != NULL) && (p_34 != t)))
        _fail(t);
      else
        p_34 = t;
      t = a_35(t);
      return(t);
    }
    t = not_null(a_34);
    if(((i_34 != NULL) && (i_34 != t)))
      _fail(t);
    else
      i_34 = t;
    t = not_null(g_34);
    if(((j_34 != NULL) && (j_34 != t)))
      _fail(t);
    else
      j_34 = t;
    t = not_null(h_34);
    if(((k_34 != NULL) && (k_34 != t)))
      _fail(t);
    else
      k_34 = t;
    t = not_null(a_34);
    {
      ATerm m_34 = NULL;
      ATerm y_34 (ATerm t)
      {
        t = not_null(m_34);
        if(((l_34 != NULL) && (l_34 != t)))
          _fail(t);
        else
          l_34 = t;
        t = not_null(m_34);
        return(t);
      }
      t = SSLgetAnnotations(not_null(i_34));
      if(((m_34 != NULL) && (m_34 != t)))
        _fail(t);
      else
        m_34 = t;
      t = y_34(t);
      t = not_null(j_34);
      t = s_62(t);
      if(((n_34 != NULL) && (n_34 != t)))
        _fail(t);
      else
        n_34 = t;
      t = z_34(t);
    }
    return(t);
  }
  if(((a_34 != NULL) && (a_34 != t)))
    _fail(t);
  else
    a_34 = t;
  t = not_null(a_34);
  if(match_cons(t, sym__2))
    {
      g_34 = ATgetArgument(t, 0);
      h_34 = ATgetArgument(t, 1);
      t = t_34(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_17;
  m_17 = t;
  {
    ATerm d_35 = NULL;
    ATerm e_35 = NULL;
    ATerm f_35 (ATerm t)
    {
      t = not_null(e_35);
      if(((d_35 != NULL) && (d_35 != t)))
        _fail(t);
      else
        d_35 = t;
      t = not_null(e_35);
      return(t);
    }
    t = term_n_17;
    t = whoami_0_0(t);
    if(((e_35 != NULL) && (e_35 != t)))
      _fail(t);
    else
      e_35 = t;
    t = f_35(t);
    t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_17), not_null(d_35)), term_w_17));
    t = printnl_0_0(t);
    t = term_i_18;
    t = exit_0_0(t);
  }
  t = m_17;
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL;
  ATerm n_35 (ATerm t)
  {
    ATerm l_35 = NULL,m_35 = NULL;
    t = not_null(j_35);
    if(((l_35 != NULL) && (l_35 != t)))
      _fail(t);
    else
      l_35 = t;
    t = not_null(k_35);
    if(((m_35 != NULL) && (m_35 != t)))
      _fail(t);
    else
      m_35 = t;
    t = not_null(i_35);
    {
      ATerm j_18;
      j_18 = t;
      t = SSL_printnl(not_null(l_35), not_null(m_35));
      t = j_18;
    }
    return(t);
  }
  if(((i_35 != NULL) && (i_35 != t)))
    _fail(t);
  else
    i_35 = t;
  t = not_null(i_35);
  if(match_cons(t, sym__2))
    {
      j_35 = ATgetArgument(t, 0);
      k_35 = ATgetArgument(t, 1);
      t = n_35(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm p_35 = NULL;
  ATerm r_35 (ATerm t)
  {
    ATerm q_35 = NULL;
    t = not_null(p_35);
    if(((q_35 != NULL) && (q_35 != t)))
      _fail(t);
    else
      q_35 = t;
    t = not_null(p_35);
    t = SSL_implode_string(not_null(q_35));
    return(t);
  }
  if(((p_35 != NULL) && (p_35 != t)))
    _fail(t);
  else
    p_35 = t;
  t = r_35(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
      {
        ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
        ATerm a_36 (ATerm t)
        {
          ATerm x_35 = NULL,y_35 = NULL;
          t = not_null(v_35);
          if(((x_35 != NULL) && (x_35 != t)))
            _fail(t);
          else
            x_35 = t;
          t = not_null(w_35);
          if(((y_35 != NULL) && (y_35 != t)))
            _fail(t);
          else
            y_35 = t;
          t = not_null(x_35);
          {
            ATerm q_1 (ATerm t)
            {
              t = not_null(y_35);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(q_1, t);
          }
          return(t);
        }
        if(((u_35 != NULL) && (u_35 != t)))
          _fail(t);
        else
          u_35 = t;
        t = not_null(u_35);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_35 = ATgetFirst((ATermList) t);
            w_35 = (ATerm) ATgetNext((ATermList) t);
            t = a_36(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm p_36 = NULL;
  ATerm x_36 (ATerm t)
  {
    ATerm q_36 = NULL,r_36 = NULL;
    t = not_null(p_36);
    if(((q_36 != NULL) && (q_36 != t)))
      _fail(t);
    else
      q_36 = t;
    t = not_null(p_36);
    {
      ATerm s_36 = NULL;
      ATerm y_36 (ATerm t)
      {
        ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL;
        ATerm z_36 (ATerm t)
        {
          t = not_null(w_36);
          if(((r_36 != NULL) && (r_36 != t)))
            _fail(t);
          else
            r_36 = t;
          t = not_null(u_36);
          return(t);
        }
        t = not_null(s_36);
        if(((t_36 != NULL) && (t_36 != t)))
          _fail(t);
        else
          t_36 = t;
        t = not_null(s_36);
        t = SSL_explode_term(not_null(t_36));
        if(((u_36 != NULL) && (u_36 != t)))
          _fail(t);
        else
          u_36 = t;
        t = not_null(u_36);
        if(match_cons(t, sym__2))
          {
            v_36 = ATgetArgument(t, 0);
            w_36 = ATgetArgument(t, 1);
            t = not_null(v_36);
            if(match_string(t, ""))
              {
                t = z_36(t);
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
      t = not_null(q_36);
      if(((s_36 != NULL) && (s_36 != t)))
        _fail(t);
      else
        s_36 = t;
      t = y_36(t);
      t = not_null(r_36);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((p_36 != NULL) && (p_36 != t)))
    _fail(t);
  else
    p_36 = t;
  t = x_36(t);
  return(t);
}
ATerm at_end_1_0 (ATerm o_85 (ATerm), ATerm t)
{
  ATerm a_37 (ATerm t)
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, a_37, t);
        ;
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        t = Nil_0_0(t);
        t = o_85(t);
      }
    return(t);
  }
  t = a_37(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
  ATerm m_37 (ATerm t)
  {
    ATerm g_37 = NULL,l_37 = NULL;
    t = not_null(e_37);
    if(((l_37 != NULL) && (l_37 != t)))
      _fail(t);
    else
      l_37 = t;
    t = not_null(f_37);
    if(((g_37 != NULL) && (g_37 != t)))
      _fail(t);
    else
      g_37 = t;
    t = not_null(l_37);
    {
      ATerm r_1 (ATerm t)
      {
        t = not_null(g_37);
        return(t);
      }
      t = at_end_1_0(r_1, t);
    }
    return(t);
  }
  if(((d_37 != NULL) && (d_37 != t)))
    _fail(t);
  else
    d_37 = t;
  t = not_null(d_37);
  if(match_cons(t, sym__2))
    {
      e_37 = ATgetArgument(t, 0);
      f_37 = ATgetArgument(t, 1);
      t = m_37(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm s_37 = NULL;
  ATerm u_37 (ATerm t)
  {
    ATerm t_37 = NULL;
    t = not_null(s_37);
    if(((t_37 != NULL) && (t_37 != t)))
      _fail(t);
    else
      t_37 = t;
    t = not_null(s_37);
    t = SSL_explode_string(not_null(t_37));
    return(t);
  }
  if(((s_37 != NULL) && (s_37 != t)))
    _fail(t);
  else
    s_37 = t;
  t = u_37(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      {
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_1 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(s_1, t);
            ;
            LocalPopChoice(u_19);
          }
        else
          {
            t = t_19;
            {
              ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL;
              ATerm m_38 (ATerm t)
              {
                ATerm e_38 = NULL;
                t = not_null(c_38);
                if(((e_38 != NULL) && (e_38 != t)))
                  _fail(t);
                else
                  e_38 = t;
                t = not_null(e_38);
                return(t);
              }
              ATerm n_38 (ATerm t)
              {
                ATerm f_38 = NULL;
                t = not_null(c_38);
                if(((f_38 != NULL) && (f_38 != t)))
                  _fail(t);
                else
                  f_38 = t;
                t = not_null(f_38);
                {
                  ATerm v_19 = t;
                  int w_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(w_19);
                    }
                  else
                    {
                      t = v_19;
                      {
                        ATerm t_1 (ATerm t)
                        {
                          t = term_i_20;
                          return(t);
                        }
                        t = debug_1_0(t_1, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm o_38 (ATerm t)
              {
                ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL,k_38 = NULL;
                t = not_null(c_38);
                if(((g_38 != NULL) && (g_38 != t)))
                  _fail(t);
                else
                  g_38 = t;
                t = not_null(d_38);
                if(((h_38 != NULL) && (h_38 != t)))
                  _fail(t);
                else
                  h_38 = t;
                t = not_null(b_38);
                {
                  ATerm j_20;
                  j_20 = t;
                  {
                    ATerm j_38 = NULL;
                    ATerm p_38 (ATerm t)
                    {
                      t = not_null(j_38);
                      if(((i_38 != NULL) && (i_38 != t)))
                        _fail(t);
                      else
                        i_38 = t;
                      t = not_null(j_38);
                      return(t);
                    }
                    t = not_null(g_38);
                    t = eval_config_0_0(t);
                    if(((j_38 != NULL) && (j_38 != t)))
                      _fail(t);
                    else
                      j_38 = t;
                    t = p_38(t);
                  }
                  t = j_20;
                  {
                    ATerm l_38 = NULL;
                    ATerm q_38 (ATerm t)
                    {
                      t = not_null(l_38);
                      if(((k_38 != NULL) && (k_38 != t)))
                        _fail(t);
                      else
                        k_38 = t;
                      t = not_null(l_38);
                      return(t);
                    }
                    t = not_null(h_38);
                    t = eval_config_0_0(t);
                    if(((l_38 != NULL) && (l_38 != t)))
                      _fail(t);
                    else
                      l_38 = t;
                    t = q_38(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(i_38), not_null(k_38));
                    t = conc_strings_0_0(t);
                  }
                }
                return(t);
              }
              if(((b_38 != NULL) && (b_38 != t)))
                _fail(t);
              else
                b_38 = t;
              t = not_null(b_38);
              if(match_cons(t, sym_Path_1))
                {
                  c_38 = ATgetArgument(t, 0);
                  t = m_38(t);
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_38 = ATgetArgument(t, 0);
                      t = n_38(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_38 = ATgetArgument(t, 0);
                          d_38 = ATgetArgument(t, 1);
                          t = o_38(t);
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
ATerm get_config_0_0 (ATerm t)
{
  ATerm t_38 = NULL;
  ATerm x_38 (ATerm t)
  {
    ATerm u_38 = NULL;
    t = not_null(t_38);
    if(((u_38 != NULL) && (u_38 != t)))
      _fail(t);
    else
      u_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_20, not_null(u_38));
    t = table_get_0_0(t);
    {
      ATerm u_1 (ATerm t)
      {
        t = eval_config_0_0(t);
        {
          ATerm q_20;
          q_20 = t;
          {
            ATerm v_38 = NULL;
            ATerm w_38 = NULL;
            ATerm y_38 (ATerm t)
            {
              t = not_null(w_38);
              if(((v_38 != NULL) && (v_38 != t)))
                _fail(t);
              else
                v_38 = t;
              t = not_null(w_38);
              return(t);
            }
            if(((w_38 != NULL) && (w_38 != t)))
              _fail(t);
            else
              w_38 = t;
            t = y_38(t);
            t = (ATerm) ATmakeAppl(sym__3, term_p_20, not_null(u_38), not_null(v_38));
            t = table_put_0_0(t);
          }
          t = q_20;
        }
        return(t);
      }
      t = try_1_0(u_1, t);
    }
    return(t);
  }
  if(((t_38 != NULL) && (t_38 != t)))
    _fail(t);
  else
    t_38 = t;
  t = x_38(t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm z_105 (ATerm), ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm r_20;
    r_20 = t;
    {
      ATerm a_39 = NULL;
      ATerm b_39 = NULL;
      ATerm c_39 (ATerm t)
      {
        t = not_null(b_39);
        if(((a_39 != NULL) && (a_39 != t)))
          _fail(t);
        else
          a_39 = t;
        t = not_null(b_39);
        return(t);
      }
      t = term_b_21;
      t = get_config_0_0(t);
      if(((b_39 != NULL) && (b_39 != t)))
        _fail(t);
      else
        b_39 = t;
      t = c_39(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_39), term_c_21);
      t = geq_0_0(t);
    }
    t = r_20;
    t = z_105(t);
    return(t);
  }
  t = try_1_0(v_1, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL;
  ATerm q_39 (ATerm t)
  {
    ATerm l_39 = NULL,m_39 = NULL,o_39 = NULL;
    t = not_null(i_39);
    if(((l_39 != NULL) && (l_39 != t)))
      _fail(t);
    else
      l_39 = t;
    t = not_null(k_39);
    if(((m_39 != NULL) && (m_39 != t)))
      _fail(t);
    else
      m_39 = t;
    t = not_null(h_39);
    t = SSL_fputc(not_null(l_39), not_null(m_39));
    {
      ATerm p_39 = NULL;
      ATerm r_39 (ATerm t)
      {
        t = not_null(p_39);
        if(((o_39 != NULL) && (o_39 != t)))
          _fail(t);
        else
          o_39 = t;
        t = not_null(p_39);
        return(t);
      }
      if(((p_39 != NULL) && (p_39 != t)))
        _fail(t);
      else
        p_39 = t;
      t = r_39(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_39));
    }
    return(t);
  }
  if(((h_39 != NULL) && (h_39 != t)))
    _fail(t);
  else
    h_39 = t;
  t = not_null(h_39);
  if(match_cons(t, sym__2))
    {
      i_39 = ATgetArgument(t, 0);
      j_39 = ATgetArgument(t, 1);
      t = not_null(j_39);
      if(match_cons(t, sym_Stream_1))
        {
          k_39 = ATgetArgument(t, 0);
          t = q_39(t);
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
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL;
  ATerm g_40 (ATerm t)
  {
    ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL;
    t = not_null(a_40);
    if(((c_40 != NULL) && (c_40 != t)))
      _fail(t);
    else
      c_40 = t;
    t = not_null(b_40);
    if(((d_40 != NULL) && (d_40 != t)))
      _fail(t);
    else
      d_40 = t;
    t = not_null(y_39);
    t = SSL_write_term_to_stream_text(not_null(c_40), not_null(d_40));
    {
      ATerm f_40 = NULL;
      ATerm h_40 (ATerm t)
      {
        t = not_null(f_40);
        if(((e_40 != NULL) && (e_40 != t)))
          _fail(t);
        else
          e_40 = t;
        t = not_null(f_40);
        return(t);
      }
      if(((f_40 != NULL) && (f_40 != t)))
        _fail(t);
      else
        f_40 = t;
      t = h_40(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_40));
    }
    return(t);
  }
  if(((y_39 != NULL) && (y_39 != t)))
    _fail(t);
  else
    y_39 = t;
  t = not_null(y_39);
  if(match_cons(t, sym__2))
    {
      z_39 = ATgetArgument(t, 0);
      b_40 = ATgetArgument(t, 1);
      t = not_null(z_39);
      if(match_cons(t, sym_Stream_1))
        {
          a_40 = ATgetArgument(t, 0);
          t = g_40(t);
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
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm j_40 = NULL;
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm k_40 = NULL;
      ATerm l_40 (ATerm t)
      {
        t = not_null(k_40);
        if(((j_40 != NULL) && (j_40 != t)))
          _fail(t);
        else
          j_40 = t;
        t = not_null(k_40);
        return(t);
      }
      if(((k_40 != NULL) && (k_40 != t)))
        _fail(t);
      else
        k_40 = t;
      t = l_40(t);
      t = (ATerm) ATmakeAppl(sym__2, term_k_21, not_null(j_40));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(w_1, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,u_40 = NULL,v_40 = NULL;
  ATerm b_41 (ATerm t)
  {
    ATerm w_40 = NULL,x_40 = NULL,z_40 = NULL;
    t = not_null(u_40);
    if(((w_40 != NULL) && (w_40 != t)))
      _fail(t);
    else
      w_40 = t;
    t = not_null(v_40);
    if(((x_40 != NULL) && (x_40 != t)))
      _fail(t);
    else
      x_40 = t;
    t = not_null(q_40);
    t = SSL_write_term_to_stream_baf(not_null(w_40), not_null(x_40));
    {
      ATerm a_41 = NULL;
      ATerm c_41 (ATerm t)
      {
        t = not_null(a_41);
        if(((z_40 != NULL) && (z_40 != t)))
          _fail(t);
        else
          z_40 = t;
        t = not_null(a_41);
        return(t);
      }
      if(((a_41 != NULL) && (a_41 != t)))
        _fail(t);
      else
        a_41 = t;
      t = c_41(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_40));
    }
    return(t);
  }
  if(((q_40 != NULL) && (q_40 != t)))
    _fail(t);
  else
    q_40 = t;
  t = not_null(q_40);
  if(match_cons(t, sym__2))
    {
      r_40 = ATgetArgument(t, 0);
      v_40 = ATgetArgument(t, 1);
      t = not_null(r_40);
      if(match_cons(t, sym_Stream_1))
        {
          u_40 = ATgetArgument(t, 0);
          t = b_41(t);
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
ATerm WriteToFile_1_0 (ATerm b_100 (ATerm), ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL;
  ATerm t_41 (ATerm t)
  {
    ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,r_41 = NULL;
    t = not_null(i_41);
    if(((k_41 != NULL) && (k_41 != t)))
      _fail(t);
    else
      k_41 = t;
    t = not_null(j_41);
    if(((l_41 != NULL) && (l_41 != t)))
      _fail(t);
    else
      l_41 = t;
    t = not_null(k_41);
    {
      ATerm q_41 = NULL;
      ATerm u_41 (ATerm t)
      {
        t = not_null(q_41);
        if(((m_41 != NULL) && (m_41 != t)))
          _fail(t);
        else
          m_41 = t;
        t = not_null(q_41);
        return(t);
      }
      if(((q_41 != NULL) && (q_41 != t)))
        _fail(t);
      else
        q_41 = t;
      t = u_41(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_41), term_l_21);
      t = open_stream_0_0(t);
      {
        ATerm s_41 = NULL;
        ATerm v_41 (ATerm t)
        {
          t = not_null(s_41);
          if(((r_41 != NULL) && (r_41 != t)))
            _fail(t);
          else
            r_41 = t;
          t = not_null(s_41);
          return(t);
        }
        if(((s_41 != NULL) && (s_41 != t)))
          _fail(t);
        else
          s_41 = t;
        t = v_41(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_41), not_null(l_41));
        t = b_100(t);
        t = fclose_0_0(t);
        t = not_null(l_41);
      }
    }
    return(t);
  }
  if(((h_41 != NULL) && (h_41 != t)))
    _fail(t);
  else
    h_41 = t;
  t = not_null(h_41);
  if(match_cons(t, sym__2))
    {
      i_41 = ATgetArgument(t, 0);
      j_41 = ATgetArgument(t, 1);
      t = t_41(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_42 = NULL;
  ATerm m_21;
  m_21 = t;
  {
    ATerm x_1 (ATerm t)
    {
      ATerm w_21 = t;
      int x_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_1 (ATerm t)
          {
            ATerm b_42 = NULL,c_42 = NULL;
            ATerm f_42 (ATerm t)
            {
              t = not_null(c_42);
              if(((a_42 != NULL) && (a_42 != t)))
                _fail(t);
              else
                a_42 = t;
              t = not_null(b_42);
              return(t);
            }
            if(((b_42 != NULL) && (b_42 != t)))
              _fail(t);
            else
              b_42 = t;
            t = not_null(b_42);
            if(match_cons(t, sym_Output_1))
              {
                c_42 = ATgetArgument(t, 0);
                t = f_42(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1_0(y_1, t);
          ;
          LocalPopChoice(x_21);
        }
      else
        {
          t = w_21;
          {
            ATerm d_42 = NULL;
            ATerm g_42 (ATerm t)
            {
              t = not_null(d_42);
              if(((a_42 != NULL) && (a_42 != t)))
                _fail(t);
              else
                a_42 = t;
              t = not_null(d_42);
              return(t);
            }
            t = term_y_21;
            if(((d_42 != NULL) && (d_42 != t)))
              _fail(t);
            else
              d_42 = t;
            t = g_42(t);
          }
        }
      return(t);
    }
    t = _2_0(x_1, _id, t);
  }
  t = m_21;
  {
    ATerm z_1 (ATerm t)
    {
      ATerm a_2 (ATerm t)
      {
        t = not_null(a_42);
        return(t);
      }
      t = split_2_0(a_2, _id, t);
      return(t);
    }
    t = _2_0(_id, z_1, t);
    {
      ATerm z_21 = t;
      int a_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_2 (ATerm t)
          {
            ATerm c_2 (ATerm t)
            {
              ATerm e_42 = NULL;
              if(((e_42 != NULL) && (e_42 != t)))
                _fail(t);
              else
                e_42 = t;
              t = not_null(e_42);
              if(match_cons(t, sym_Binary_0))
                {
                  t = not_null(e_42);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1_0(c_2, t);
            return(t);
          }
          t = _2_0(b_2, WriteToBinaryFile_0_0, t);
          ;
          LocalPopChoice(a_22);
        }
      else
        {
          t = z_21;
          t = _2_0(_id, WriteToTextFile_0_0, t);
        }
    }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm o_96 (ATerm), ATerm t)
{
  ATerm k_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL;
  ATerm s_42 (ATerm t)
  {
    ATerm p_42 = NULL,q_42 = NULL;
    t = not_null(n_42);
    if(((p_42 != NULL) && (p_42 != t)))
      _fail(t);
    else
      p_42 = t;
    t = not_null(o_42);
    if(((q_42 != NULL) && (q_42 != t)))
      _fail(t);
    else
      q_42 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_42)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(k_42))), not_null(q_42));
    return(t);
  }
  ATerm b_22;
  b_22 = t;
  t = dtime_0_0(t);
  t = b_22;
  t = o_96(t);
  {
    ATerm c_22;
    c_22 = t;
    {
      ATerm l_42 = NULL;
      ATerm r_42 (ATerm t)
      {
        t = not_null(l_42);
        if(((k_42 != NULL) && (k_42 != t)))
          _fail(t);
        else
          k_42 = t;
        t = not_null(l_42);
        return(t);
      }
      t = dtime_0_0(t);
      if(((l_42 != NULL) && (l_42 != t)))
        _fail(t);
      else
        l_42 = t;
      t = r_42(t);
    }
    t = c_22;
    if(((m_42 != NULL) && (m_42 != t)))
      _fail(t);
    else
      m_42 = t;
    t = not_null(m_42);
    if(match_cons(t, sym__2))
      {
        n_42 = ATgetArgument(t, 0);
        o_42 = ATgetArgument(t, 1);
        t = s_42(t);
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_42 = NULL,e_43 = NULL;
  ATerm j_43 (ATerm t)
  {
    ATerm f_43 = NULL;
    t = not_null(w_42);
    if(((f_43 != NULL) && (f_43 != t)))
      _fail(t);
    else
      f_43 = t;
    t = not_null(e_43);
    t = SSL_fclose(not_null(f_43));
    return(t);
  }
  ATerm k_43 (ATerm t)
  {
    ATerm i_43 = NULL;
    t = not_null(e_43);
    if(((i_43 != NULL) && (i_43 != t)))
      _fail(t);
    else
      i_43 = t;
    t = not_null(e_43);
    t = SSL_fclose(not_null(i_43));
    return(t);
  }
  if(((e_43 != NULL) && (e_43 != t)))
    _fail(t);
  else
    e_43 = t;
  t = not_null(e_43);
  if(match_cons(t, sym_Stream_1))
    {
      w_42 = ATgetArgument(t, 0);
      {
        ATerm d_22 = t;
        int e_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_43(t);
            ;
            LocalPopChoice(e_22);
          }
        else
          {
            t = d_22;
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
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL;
  ATerm b_44 (ATerm t)
  {
    ATerm v_43 = NULL;
    t = not_null(o_43);
    if(((v_43 != NULL) && (v_43 != t)))
      _fail(t);
    else
      v_43 = t;
    t = not_null(n_43);
    t = SSL_read_term_from_stream(not_null(v_43));
    return(t);
  }
  if(((n_43 != NULL) && (n_43 != t)))
    _fail(t);
  else
    n_43 = t;
  t = not_null(n_43);
  if(match_cons(t, sym_Stream_1))
    {
      o_43 = ATgetArgument(t, 0);
      t = b_44(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm n_99 (ATerm), ATerm t)
{
  ATerm f_22;
  f_22 = t;
  {
    ATerm g_44 = NULL,i_44 = NULL;
    ATerm j_23;
    j_23 = t;
    {
      ATerm h_44 = NULL;
      ATerm k_44 (ATerm t)
      {
        t = not_null(h_44);
        if(((g_44 != NULL) && (g_44 != t)))
          _fail(t);
        else
          g_44 = t;
        t = not_null(h_44);
        return(t);
      }
      t = n_99(t);
      if(((h_44 != NULL) && (h_44 != t)))
        _fail(t);
      else
        h_44 = t;
      t = k_44(t);
    }
    t = j_23;
    {
      ATerm j_44 = NULL;
      ATerm l_44 (ATerm t)
      {
        t = not_null(j_44);
        if(((i_44 != NULL) && (i_44 != t)))
          _fail(t);
        else
          i_44 = t;
        t = not_null(j_44);
        return(t);
      }
      if(((j_44 != NULL) && (j_44 != t)))
        _fail(t);
      else
        j_44 = t;
      t = l_44(t);
      t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_44)), not_null(g_44)));
      t = printnl_0_0(t);
    }
  }
  t = f_22;
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
  ATerm z_44 (ATerm t)
  {
    ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL;
    t = not_null(t_44);
    if(((v_44 != NULL) && (v_44 != t)))
      _fail(t);
    else
      v_44 = t;
    t = not_null(u_44);
    if(((w_44 != NULL) && (w_44 != t)))
      _fail(t);
    else
      w_44 = t;
    t = not_null(s_44);
    t = SSL_fopen(not_null(v_44), not_null(w_44));
    {
      ATerm y_44 = NULL;
      ATerm a_45 (ATerm t)
      {
        t = not_null(y_44);
        if(((x_44 != NULL) && (x_44 != t)))
          _fail(t);
        else
          x_44 = t;
        t = not_null(y_44);
        return(t);
      }
      if(((y_44 != NULL) && (y_44 != t)))
        _fail(t);
      else
        y_44 = t;
      t = a_45(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_44));
    }
    return(t);
  }
  if(((s_44 != NULL) && (s_44 != t)))
    _fail(t);
  else
    s_44 = t;
  t = not_null(s_44);
  if(match_cons(t, sym__2))
    {
      t_44 = ATgetArgument(t, 0);
      u_44 = ATgetArgument(t, 1);
      t = z_44(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm c_45 = NULL;
  ATerm f_45 (ATerm t)
  {
    ATerm e_45 = NULL;
    t = not_null(c_45);
    if(((e_45 != NULL) && (e_45 != t)))
      _fail(t);
    else
      e_45 = t;
    t = not_null(c_45);
    t = SSL_is_string(not_null(e_45));
    return(t);
  }
  if(((c_45 != NULL) && (c_45 != t)))
    _fail(t);
  else
    c_45 = t;
  t = f_45(t);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_45 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm i_45 = NULL;
    ATerm j_45 (ATerm t)
    {
      t = not_null(i_45);
      if(((h_45 != NULL) && (h_45 != t)))
        _fail(t);
      else
        h_45 = t;
      t = not_null(i_45);
      return(t);
    }
    if(((i_45 != NULL) && (i_45 != t)))
      _fail(t);
    else
      i_45 = t;
    t = j_45(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_45));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_45 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm m_45 = NULL;
    ATerm n_45 (ATerm t)
    {
      t = not_null(m_45);
      if(((l_45 != NULL) && (l_45 != t)))
        _fail(t);
      else
        l_45 = t;
      t = not_null(m_45);
      return(t);
    }
    if(((m_45 != NULL) && (m_45 != t)))
      _fail(t);
    else
      m_45 = t;
    t = n_45(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_45));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_45 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm q_45 = NULL;
    ATerm r_45 (ATerm t)
    {
      t = not_null(q_45);
      if(((p_45 != NULL) && (p_45 != t)))
        _fail(t);
      else
        p_45 = t;
      t = not_null(q_45);
      return(t);
    }
    if(((q_45 != NULL) && (q_45 != t)))
      _fail(t);
    else
      q_45 = t;
    t = r_45(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_45));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm w_45 = NULL;
  ATerm x_45 (ATerm t)
  {
    t = not_null(w_45);
    t = stderr_stream_0_0(t);
    return(t);
  }
  ATerm y_45 (ATerm t)
  {
    t = not_null(w_45);
    t = stdout_stream_0_0(t);
    return(t);
  }
  ATerm z_45 (ATerm t)
  {
    t = not_null(w_45);
    t = stdin_stream_0_0(t);
    return(t);
  }
  if(((w_45 != NULL) && (w_45 != t)))
    _fail(t);
  else
    w_45 = t;
  t = not_null(w_45);
  if(match_cons(t, sym_stderr_0))
    {
      t = x_45(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_45(t);
        }
      else
        {
          if(match_cons(t, sym_stdin_0))
            {
              t = z_45(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm g_46 = NULL;
  ATerm r_46 (ATerm t)
  {
    ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
    t = not_null(g_46);
    if(((h_46 != NULL) && (h_46 != t)))
      _fail(t);
    else
      h_46 = t;
    t = not_null(g_46);
    {
      ATerm k_46 = NULL;
      ATerm s_46 (ATerm t)
      {
        ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL;
        ATerm t_46 (ATerm t)
        {
          t = not_null(p_46);
          if(((j_46 != NULL) && (j_46 != t)))
            _fail(t);
          else
            j_46 = t;
          t = not_null(q_46);
          if(((i_46 != NULL) && (i_46 != t)))
            _fail(t);
          else
            i_46 = t;
          t = not_null(m_46);
          return(t);
        }
        t = not_null(k_46);
        if(((l_46 != NULL) && (l_46 != t)))
          _fail(t);
        else
          l_46 = t;
        t = not_null(k_46);
        t = SSL_explode_term(not_null(l_46));
        if(((m_46 != NULL) && (m_46 != t)))
          _fail(t);
        else
          m_46 = t;
        t = not_null(m_46);
        if(match_cons(t, sym__2))
          {
            n_46 = ATgetArgument(t, 0);
            o_46 = ATgetArgument(t, 1);
            t = not_null(n_46);
            if(match_string(t, ""))
              {
                t = not_null(o_46);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    p_46 = ATgetFirst((ATermList) t);
                    q_46 = (ATerm) ATgetNext((ATermList) t);
                    t = t_46(t);
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
      t = not_null(h_46);
      if(((k_46 != NULL) && (k_46 != t)))
        _fail(t);
      else
        k_46 = t;
      t = s_46(t);
      t = not_null(j_46);
    }
    return(t);
  }
  if(((g_46 != NULL) && (g_46 != t)))
    _fail(t);
  else
    g_46 = t;
  t = r_46(t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL;
  ATerm e_47 (ATerm t)
  {
    t = not_null(y_46);
    {
      ATerm k_23 = t;
      int l_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Fst_0_0(t);
          t = stdio_stream_0_0(t);
          ;
          LocalPopChoice(l_23);
        }
      else
        {
          t = k_23;
          {
            ATerm v_23 = t;
            int z_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_2 (ATerm t)
                {
                  ATerm b_47 = NULL,c_47 = NULL;
                  ATerm f_47 (ATerm t)
                  {
                    ATerm d_47 = NULL;
                    t = not_null(c_47);
                    if(((d_47 != NULL) && (d_47 != t)))
                      _fail(t);
                    else
                      d_47 = t;
                    t = not_null(d_47);
                    return(t);
                  }
                  if(((b_47 != NULL) && (b_47 != t)))
                    _fail(t);
                  else
                    b_47 = t;
                  t = not_null(b_47);
                  if(match_cons(t, sym_Path_1))
                    {
                      c_47 = ATgetArgument(t, 0);
                      t = f_47(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = _2_0(d_2, _id, t);
                t = fopen_0_0(t);
                ;
                LocalPopChoice(z_23);
              }
            else
              {
                t = v_23;
                t = _2_0(is_string_0_0, _id, t);
                t = fopen_0_0(t);
              }
          }
        }
    }
    return(t);
  }
  if(((y_46 != NULL) && (y_46 != t)))
    _fail(t);
  else
    y_46 = t;
  t = not_null(y_46);
  if(match_cons(t, sym__2))
    {
      z_46 = ATgetArgument(t, 0);
      a_47 = ATgetArgument(t, 1);
      t = e_47(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_47 = NULL;
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_47 = NULL;
      ATerm j_47 = NULL;
      ATerm m_47 (ATerm t)
      {
        t = not_null(j_47);
        if(((i_47 != NULL) && (i_47 != t)))
          _fail(t);
        else
          i_47 = t;
        t = not_null(j_47);
        return(t);
      }
      if(((j_47 != NULL) && (j_47 != t)))
        _fail(t);
      else
        j_47 = t;
      t = m_47(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_47), term_g_24);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      {
        ATerm e_2 (ATerm t)
        {
          t = term_h_24;
          return(t);
        }
        t = debug_1_0(e_2, t);
        _fail(t);
      }
    }
  {
    ATerm v_24;
    v_24 = t;
    {
      ATerm l_47 = NULL;
      ATerm n_47 (ATerm t)
      {
        t = not_null(l_47);
        if(((k_47 != NULL) && (k_47 != t)))
          _fail(t);
        else
          k_47 = t;
        t = not_null(l_47);
        return(t);
      }
      t = read_from_stream_0_0(t);
      if(((l_47 != NULL) && (l_47 != t)))
        _fail(t);
      else
        l_47 = t;
      t = n_47(t);
    }
    t = v_24;
    t = fclose_0_0(t);
    t = not_null(k_47);
  }
  return(t);
}
ATerm split_2_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm t)
{
  ATerm q_47 = NULL,s_47 = NULL;
  ATerm w_24;
  w_24 = t;
  {
    ATerm r_47 = NULL;
    ATerm u_47 (ATerm t)
    {
      t = not_null(r_47);
      if(((q_47 != NULL) && (q_47 != t)))
        _fail(t);
      else
        q_47 = t;
      t = not_null(r_47);
      return(t);
    }
    t = j_82(t);
    if(((r_47 != NULL) && (r_47 != t)))
      _fail(t);
    else
      r_47 = t;
    t = u_47(t);
  }
  t = w_24;
  {
    ATerm t_47 = NULL;
    ATerm v_47 (ATerm t)
    {
      t = not_null(t_47);
      if(((s_47 != NULL) && (s_47 != t)))
        _fail(t);
      else
        s_47 = t;
      t = not_null(t_47);
      return(t);
    }
    t = k_82(t);
    if(((t_47 != NULL) && (t_47 != t)))
      _fail(t);
    else
      t_47 = t;
    t = v_47(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_47), not_null(s_47));
  }
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm z_47 = NULL;
  ATerm x_24;
  x_24 = t;
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_2 (ATerm t)
        {
          ATerm a_48 = NULL,b_48 = NULL;
          ATerm d_48 (ATerm t)
          {
            t = not_null(b_48);
            if(((z_47 != NULL) && (z_47 != t)))
              _fail(t);
            else
              z_47 = t;
            t = not_null(a_48);
            return(t);
          }
          if(((a_48 != NULL) && (a_48 != t)))
            _fail(t);
          else
            a_48 = t;
          t = not_null(a_48);
          if(match_cons(t, sym_Input_1))
            {
              b_48 = ATgetArgument(t, 0);
              t = d_48(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1_0(f_2, t);
        ;
        LocalPopChoice(z_24);
      }
    else
      {
        t = y_24;
        {
          ATerm c_48 = NULL;
          ATerm e_48 (ATerm t)
          {
            t = not_null(c_48);
            if(((z_47 != NULL) && (z_47 != t)))
              _fail(t);
            else
              z_47 = t;
            t = not_null(c_48);
            return(t);
          }
          t = term_a_25;
          if(((c_48 != NULL) && (c_48 != t)))
            _fail(t);
          else
            c_48 = t;
          t = e_48(t);
        }
      }
  }
  t = x_24;
  {
    ATerm g_2 (ATerm t)
    {
      t = not_null(z_47);
      t = ReadFromFile_0_0(t);
      return(t);
    }
    t = split_2_0(_id, g_2, t);
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm h_48 = NULL;
    if(((h_48 != NULL) && (h_48 != t)))
      _fail(t);
    else
      h_48 = t;
    t = not_null(h_48);
    if(match_string(t, "-k"))
      {
        t = not_null(h_48);
      }
    else
      {
        if(match_string(t, "--keep"))
          {
            t = not_null(h_48);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm b_25;
    b_25 = t;
    {
      ATerm i_48 = NULL;
      ATerm j_48 = NULL;
      ATerm k_48 (ATerm t)
      {
        t = not_null(j_48);
        if(((i_48 != NULL) && (i_48 != t)))
          _fail(t);
        else
          i_48 = t;
        t = not_null(j_48);
        return(t);
      }
      t = string_to_int_0_0(t);
      if(((j_48 != NULL) && (j_48 != t)))
        _fail(t);
      else
        j_48 = t;
      t = k_48(t);
      t = (ATerm) ATmakeAppl(sym__2, term_c_25, not_null(i_48));
      t = set_config_0_0(t);
    }
    t = b_25;
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_d_25;
    return(t);
  }
  t = ArgOption_3_0(h_2, i_2, j_2, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm m_48 = NULL;
  ATerm o_48 (ATerm t)
  {
    ATerm n_48 = NULL;
    t = not_null(m_48);
    if(((n_48 != NULL) && (n_48 != t)))
      _fail(t);
    else
      n_48 = t;
    t = not_null(m_48);
    t = SSL_string_to_int(not_null(n_48));
    return(t);
  }
  if(((m_48 != NULL) && (m_48 != t)))
    _fail(t);
  else
    m_48 = t;
  t = o_48(t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_2 (ATerm t)
      {
        ATerm u_48 = NULL;
        if(((u_48 != NULL) && (u_48 != t)))
          _fail(t);
        else
          u_48 = t;
        t = not_null(u_48);
        if(match_string(t, "-S"))
          {
            t = not_null(u_48);
          }
        else
          {
            if(match_string(t, "--silent"))
              {
                t = not_null(u_48);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_2 (ATerm t)
      {
        t = term_h_25;
        t = set_config_0_0(t);
        t = term_u_26;
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        t = term_v_26;
        return(t);
      }
      t = Option_3_0(k_2, l_2, m_2, t);
      ;
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      {
        ATerm w_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 (ATerm t)
            {
              ATerm v_48 = NULL;
              if(((v_48 != NULL) && (v_48 != t)))
                _fail(t);
              else
                v_48 = t;
              t = not_null(v_48);
              if(match_string(t, "--verbose"))
                {
                  t = not_null(v_48);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm o_2 (ATerm t)
            {
              ATerm y_48 = NULL;
              ATerm d_27;
              d_27 = t;
              {
                ATerm w_48 = NULL;
                ATerm x_48 = NULL;
                ATerm b_49 (ATerm t)
                {
                  t = not_null(x_48);
                  if(((w_48 != NULL) && (w_48 != t)))
                    _fail(t);
                  else
                    w_48 = t;
                  t = not_null(x_48);
                  return(t);
                }
                t = string_to_int_0_0(t);
                if(((x_48 != NULL) && (x_48 != t)))
                  _fail(t);
                else
                  x_48 = t;
                t = b_49(t);
                t = (ATerm) ATmakeAppl(sym__2, term_b_21, not_null(w_48));
                t = set_config_0_0(t);
              }
              t = d_27;
              {
                ATerm z_48 = NULL;
                ATerm c_49 (ATerm t)
                {
                  t = not_null(z_48);
                  if(((y_48 != NULL) && (y_48 != t)))
                    _fail(t);
                  else
                    y_48 = t;
                  t = not_null(z_48);
                  return(t);
                }
                if(((z_48 != NULL) && (z_48 != t)))
                  _fail(t);
                else
                  z_48 = t;
                t = c_49(t);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(y_48));
              }
              return(t);
            }
            ATerm p_2 (ATerm t)
            {
              t = term_e_27;
              return(t);
            }
            t = ArgOption_3_0(n_2, o_2, p_2, t);
            ;
            LocalPopChoice(x_26);
          }
        else
          {
            t = w_26;
            {
              ATerm q_2 (ATerm t)
              {
                ATerm a_49 = NULL;
                if(((a_49 != NULL) && (a_49 != t)))
                  _fail(t);
                else
                  a_49 = t;
                t = not_null(a_49);
                if(match_string(t, "-s"))
                  {
                    t = not_null(a_49);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm r_2 (ATerm t)
              {
                t = term_g_27;
                t = set_config_0_0(t);
                t = term_h_27;
                return(t);
              }
              ATerm s_2 (ATerm t)
              {
                t = term_i_27;
                return(t);
              }
              t = Option_3_0(q_2, r_2, s_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    ATerm g_49 = NULL;
    if(((g_49 != NULL) && (g_49 != t)))
      _fail(t);
    else
      g_49 = t;
    t = not_null(g_49);
    if(match_string(t, "-o"))
      {
        t = not_null(g_49);
      }
    else
      {
        if(match_string(t, "--output"))
          {
            t = not_null(g_49);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm j_49 = NULL;
    ATerm l_27;
    l_27 = t;
    {
      ATerm h_49 = NULL;
      ATerm i_49 = NULL;
      ATerm l_49 (ATerm t)
      {
        t = not_null(i_49);
        if(((h_49 != NULL) && (h_49 != t)))
          _fail(t);
        else
          h_49 = t;
        t = not_null(i_49);
        return(t);
      }
      if(((i_49 != NULL) && (i_49 != t)))
        _fail(t);
      else
        i_49 = t;
      t = l_49(t);
      t = (ATerm) ATmakeAppl(sym__2, term_m_27, not_null(h_49));
      t = set_config_0_0(t);
    }
    t = l_27;
    {
      ATerm k_49 = NULL;
      ATerm m_49 (ATerm t)
      {
        t = not_null(k_49);
        if(((j_49 != NULL) && (j_49 != t)))
          _fail(t);
        else
          j_49 = t;
        t = not_null(k_49);
        return(t);
      }
      if(((k_49 != NULL) && (k_49 != t)))
        _fail(t);
      else
        k_49 = t;
      t = m_49(t);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_49));
    }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_n_27;
    return(t);
  }
  t = ArgOption_3_0(t_2, u_2, v_2, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      {
        ATerm w_2 (ATerm t)
        {
          ATerm o_49 = NULL;
          if(((o_49 != NULL) && (o_49 != t)))
            _fail(t);
          else
            o_49 = t;
          t = not_null(o_49);
          if(match_string(t, "-b"))
            {
              t = not_null(o_49);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm x_2 (ATerm t)
        {
          t = term_r_27;
          t = set_config_0_0(t);
          t = term_s_27;
          return(t);
        }
        ATerm y_2 (ATerm t)
        {
          t = term_t_27;
          return(t);
        }
        t = Option_3_0(w_2, x_2, y_2, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL;
  ATerm n_50 (ATerm t)
  {
    t = not_null(d_50);
    t = register_usage_1_0(k_0, t);
    return(t);
  }
  ATerm o_50 (ATerm t)
  {
    ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL;
    t = not_null(e_50);
    if(((i_50 != NULL) && (i_50 != t)))
      _fail(t);
    else
      i_50 = t;
    t = not_null(g_50);
    if(((j_50 != NULL) && (j_50 != t)))
      _fail(t);
    else
      j_50 = t;
    t = not_null(h_50);
    if(((k_50 != NULL) && (k_50 != t)))
      _fail(t);
    else
      k_50 = t;
    t = not_null(d_50);
    {
      ATerm u_27;
      u_27 = t;
      t = not_null(i_50);
      t = h_0(t);
      t = u_27;
      {
        ATerm m_50 = NULL;
        ATerm p_50 (ATerm t)
        {
          t = not_null(m_50);
          if(((l_50 != NULL) && (l_50 != t)))
            _fail(t);
          else
            l_50 = t;
          t = not_null(m_50);
          return(t);
        }
        t = not_null(j_50);
        t = i_0(t);
        if(((m_50 != NULL) && (m_50 != t)))
          _fail(t);
        else
          m_50 = t;
        t = p_50(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(k_50)), not_null(l_50));
      }
    }
    return(t);
  }
  if(((d_50 != NULL) && (d_50 != t)))
    _fail(t);
  else
    d_50 = t;
  t = not_null(d_50);
  if(match_string(t, "register-usage-info"))
    {
      t = n_50(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_50 = ATgetFirst((ATermList) t);
          f_50 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(f_50);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_50 = ATgetFirst((ATermList) t);
              h_50 = (ATerm) ATgetNext((ATermList) t);
              t = o_50(t);
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
ATerm input_option_0_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm t_50 = NULL;
    if(((t_50 != NULL) && (t_50 != t)))
      _fail(t);
    else
      t_50 = t;
    t = not_null(t_50);
    if(match_string(t, "-i"))
      {
        t = not_null(t_50);
      }
    else
      {
        if(match_string(t, "--input"))
          {
            t = not_null(t_50);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm w_50 = NULL;
    ATerm v_27;
    v_27 = t;
    {
      ATerm u_50 = NULL;
      ATerm v_50 = NULL;
      ATerm y_50 (ATerm t)
      {
        t = not_null(v_50);
        if(((u_50 != NULL) && (u_50 != t)))
          _fail(t);
        else
          u_50 = t;
        t = not_null(v_50);
        return(t);
      }
      if(((v_50 != NULL) && (v_50 != t)))
        _fail(t);
      else
        v_50 = t;
      t = y_50(t);
      t = (ATerm) ATmakeAppl(sym__2, term_w_27, not_null(u_50));
      t = set_config_0_0(t);
    }
    t = v_27;
    {
      ATerm x_50 = NULL;
      ATerm z_50 (ATerm t)
      {
        t = not_null(x_50);
        if(((w_50 != NULL) && (w_50 != t)))
          _fail(t);
        else
          w_50 = t;
        t = not_null(x_50);
        return(t);
      }
      if(((x_50 != NULL) && (x_50 != t)))
        _fail(t);
      else
        x_50 = t;
      t = z_50(t);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_50));
    }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_x_27;
    return(t);
  }
  t = ArgOption_3_0(z_2, a_3, b_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm y_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(z_27);
    }
  else
    {
      t = y_27;
      {
        ATerm a_28 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(b_28);
          }
        else
          {
            t = a_28;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_51 = NULL;
  t = report_run_time_0_0(t);
  {
    ATerm i_51 = NULL;
    ATerm j_51 (ATerm t)
    {
      t = not_null(i_51);
      if(((b_51 != NULL) && (b_51 != t)))
        _fail(t);
      else
        b_51 = t;
      t = not_null(i_51);
      return(t);
    }
    t = term_n_17;
    t = whoami_0_0(t);
    if(((i_51 != NULL) && (i_51 != t)))
      _fail(t);
    else
      i_51 = t;
    t = j_51(t);
    t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, term_c_28), not_null(b_51)));
    t = printnl_0_0(t);
    t = term_i_18;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_28;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm l_51 = NULL;
  ATerm n_51 (ATerm t)
  {
    ATerm m_51 = NULL;
    t = not_null(l_51);
    if(((m_51 != NULL) && (m_51 != t)))
      _fail(t);
    else
      m_51 = t;
    t = not_null(l_51);
    t = SSL_TicksToSeconds(not_null(m_51));
    return(t);
  }
  if(((l_51 != NULL) && (l_51 != t)))
    _fail(t);
  else
    l_51 = t;
  t = n_51(t);
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL;
  ATerm v_51 (ATerm t)
  {
    ATerm t_51 = NULL,u_51 = NULL;
    t = not_null(r_51);
    if(((t_51 != NULL) && (t_51 != t)))
      _fail(t);
    else
      t_51 = t;
    t = not_null(s_51);
    if(((u_51 != NULL) && (u_51 != t)))
      _fail(t);
    else
      u_51 = t;
    t = not_null(q_51);
    {
      ATerm e_28 = t;
      int f_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(t_51), not_null(u_51));
          ;
          LocalPopChoice(f_28);
        }
      else
        {
          t = e_28;
          t = SSL_addr(not_null(t_51), not_null(u_51));
        }
    }
    return(t);
  }
  if(((q_51 != NULL) && (q_51 != t)))
    _fail(t);
  else
    q_51 = t;
  t = not_null(q_51);
  if(match_cons(t, sym__2))
    {
      r_51 = ATgetArgument(t, 0);
      s_51 = ATgetArgument(t, 1);
      t = v_51(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm t)
{
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = x_89(t);
      ;
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
      {
        ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL;
        ATerm g_52 (ATerm t)
        {
          ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL;
          t = not_null(a_52);
          if(((c_52 != NULL) && (c_52 != t)))
            _fail(t);
          else
            c_52 = t;
          t = not_null(b_52);
          if(((d_52 != NULL) && (d_52 != t)))
            _fail(t);
          else
            d_52 = t;
          t = not_null(z_51);
          {
            ATerm f_52 = NULL;
            ATerm h_52 (ATerm t)
            {
              t = not_null(f_52);
              if(((e_52 != NULL) && (e_52 != t)))
                _fail(t);
              else
                e_52 = t;
              t = not_null(f_52);
              return(t);
            }
            t = not_null(d_52);
            t = foldr_2_0(x_89, y_89, t);
            if(((f_52 != NULL) && (f_52 != t)))
              _fail(t);
            else
              f_52 = t;
            t = h_52(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_52), not_null(e_52));
            t = y_89(t);
          }
          return(t);
        }
        if(((z_51 != NULL) && (z_51 != t)))
          _fail(t);
        else
          z_51 = t;
        t = not_null(z_51);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_52 = ATgetFirst((ATermList) t);
            b_52 = (ATerm) ATgetNext((ATermList) t);
            t = g_52(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm t)
{
  ATerm m_52 = NULL;
  ATerm u_52 (ATerm t)
  {
    ATerm n_52 = NULL,o_52 = NULL;
    t = not_null(m_52);
    if(((n_52 != NULL) && (n_52 != t)))
      _fail(t);
    else
      n_52 = t;
    t = not_null(m_52);
    {
      ATerm p_52 = NULL;
      ATerm v_52 (ATerm t)
      {
        ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL;
        ATerm w_52 (ATerm t)
        {
          t = not_null(t_52);
          if(((o_52 != NULL) && (o_52 != t)))
            _fail(t);
          else
            o_52 = t;
          t = not_null(r_52);
          return(t);
        }
        t = not_null(p_52);
        if(((q_52 != NULL) && (q_52 != t)))
          _fail(t);
        else
          q_52 = t;
        t = not_null(p_52);
        t = SSL_explode_term(not_null(q_52));
        if(((r_52 != NULL) && (r_52 != t)))
          _fail(t);
        else
          r_52 = t;
        t = not_null(r_52);
        if(match_cons(t, sym__2))
          {
            s_52 = ATgetArgument(t, 0);
            t_52 = ATgetArgument(t, 1);
            t = w_52(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(n_52);
      if(((p_52 != NULL) && (p_52 != t)))
        _fail(t);
      else
        p_52 = t;
      t = v_52(t);
      t = not_null(o_52);
      t = foldr_2_0(v_87, w_87, t);
    }
    return(t);
  }
  if(((m_52 != NULL) && (m_52 != t)))
    _fail(t);
  else
    m_52 = t;
  t = u_52(t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  {
    ATerm c_3 (ATerm t)
    {
      t = term_g_25;
      return(t);
    }
    t = crush_2_0(c_3, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL;
  ATerm e_53 (ATerm t)
  {
    ATerm c_53 = NULL,d_53 = NULL;
    t = not_null(a_53);
    if(((c_53 != NULL) && (c_53 != t)))
      _fail(t);
    else
      c_53 = t;
    t = not_null(b_53);
    if(((d_53 != NULL) && (d_53 != t)))
      _fail(t);
    else
      d_53 = t;
    t = not_null(z_52);
    {
      ATerm i_28;
      i_28 = t;
      {
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(not_null(c_53), not_null(d_53));
            ;
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            t = SSL_gtr(not_null(c_53), not_null(d_53));
          }
      }
      t = i_28;
    }
    return(t);
  }
  if(((z_52 != NULL) && (z_52 != t)))
    _fail(t);
  else
    z_52 = t;
  t = not_null(z_52);
  if(match_cons(t, sym__2))
    {
      a_53 = ATgetArgument(t, 0);
      b_53 = ATgetArgument(t, 1);
      t = e_53(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_53 = NULL;
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL;
      ATerm l_53 (ATerm t)
      {
        t = not_null(j_53);
        if(((h_53 != NULL) && (h_53 != t)))
          _fail(t);
        else
          h_53 = t;
        t = not_null(k_53);
        if(((h_53 != NULL) && (h_53 != t)))
          _fail(t);
        else
          h_53 = t;
        t = not_null(i_53);
        return(t);
      }
      if(((i_53 != NULL) && (i_53 != t)))
        _fail(t);
      else
        i_53 = t;
      t = not_null(i_53);
      if(match_cons(t, sym__2))
        {
          j_53 = ATgetArgument(t, 0);
          k_53 = ATgetArgument(t, 1);
          t = l_53(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_105 (ATerm), ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm n_28;
    n_28 = t;
    {
      ATerm n_53 = NULL;
      ATerm o_53 = NULL;
      ATerm p_53 (ATerm t)
      {
        t = not_null(o_53);
        if(((n_53 != NULL) && (n_53 != t)))
          _fail(t);
        else
          n_53 = t;
        t = not_null(o_53);
        return(t);
      }
      t = term_b_21;
      t = get_config_0_0(t);
      if(((o_53 != NULL) && (o_53 != t)))
        _fail(t);
      else
        o_53 = t;
      t = p_53(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_53), term_i_18);
      t = geq_0_0(t);
    }
    t = n_28;
    t = y_105(t);
    return(t);
  }
  t = try_1_0(d_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm s_53 = NULL,u_53 = NULL;
    ATerm o_28;
    o_28 = t;
    {
      ATerm t_53 = NULL;
      ATerm w_53 (ATerm t)
      {
        t = not_null(t_53);
        if(((s_53 != NULL) && (s_53 != t)))
          _fail(t);
        else
          s_53 = t;
        t = not_null(t_53);
        return(t);
      }
      t = run_time_0_0(t);
      if(((t_53 != NULL) && (t_53 != t)))
        _fail(t);
      else
        t_53 = t;
      t = w_53(t);
    }
    t = o_28;
    {
      ATerm v_53 = NULL;
      ATerm x_53 (ATerm t)
      {
        t = not_null(v_53);
        if(((u_53 != NULL) && (u_53 != t)))
          _fail(t);
        else
          u_53 = t;
        t = not_null(v_53);
        return(t);
      }
      t = term_n_17;
      t = whoami_0_0(t);
      if(((v_53 != NULL) && (v_53 != t)))
        _fail(t);
      else
        v_53 = t;
      t = x_53(t);
      t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_28), not_null(s_53)), term_p_28), not_null(u_53)));
      t = printnl_0_0(t);
    }
    return(t);
  }
  t = if_verbose1_1_0(e_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_g_25;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  ATerm c_54 = NULL;
  ATerm i_54 (ATerm t)
  {
    ATerm d_54 = NULL,e_54 = NULL,g_54 = NULL;
    t = not_null(c_54);
    if(((d_54 != NULL) && (d_54 != t)))
      _fail(t);
    else
      d_54 = t;
    t = not_null(c_54);
    {
      ATerm r_28;
      r_28 = t;
      {
        ATerm f_54 = NULL;
        ATerm j_54 (ATerm t)
        {
          t = not_null(f_54);
          if(((e_54 != NULL) && (e_54 != t)))
            _fail(t);
          else
            e_54 = t;
          t = not_null(f_54);
          return(t);
        }
        t = SSLgetAnnotations(not_null(d_54));
        if(((f_54 != NULL) && (f_54 != t)))
          _fail(t);
        else
          f_54 = t;
        t = j_54(t);
      }
      t = r_28;
      {
        ATerm h_54 = NULL;
        ATerm k_54 (ATerm t)
        {
          t = not_null(h_54);
          if(((g_54 != NULL) && (g_54 != t)))
            _fail(t);
          else
            g_54 = t;
          t = not_null(h_54);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(e_54));
        if(((h_54 != NULL) && (h_54 != t)))
          _fail(t);
        else
          h_54 = t;
        t = k_54(t);
        t = not_null(g_54);
      }
    }
    return(t);
  }
  if(((c_54 != NULL) && (c_54 != t)))
    _fail(t);
  else
    c_54 = t;
  t = not_null(c_54);
  if(match_cons(t, sym_Version_0))
    {
      t = i_54(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_97 (ATerm), ATerm t)
{
  ATerm s_28 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_29);
    }
  else
    {
      t = s_28;
      {
        ATerm f_3 (ATerm t)
        {
          ATerm k_29 = t;
          int l_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(l_29);
            }
          else
            {
              t = k_29;
              {
                ATerm m_29 = t;
                int n_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(n_29);
                  }
                else
                  {
                    t = m_29;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(f_3, t);
      }
    }
  t = m_97(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm m_54 = NULL;
  ATerm p_54 (ATerm t)
  {
    ATerm n_54 = NULL;
    t = not_null(m_54);
    if(((n_54 != NULL) && (n_54 != t)))
      _fail(t);
    else
      n_54 = t;
    t = not_null(m_54);
    t = SSL_table_create(not_null(n_54));
    return(t);
  }
  if(((m_54 != NULL) && (m_54 != t)))
    _fail(t);
  else
    m_54 = t;
  t = p_54(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm r_54 = NULL;
  ATerm t_54 (ATerm t)
  {
    ATerm s_54 = NULL;
    t = not_null(r_54);
    if(((s_54 != NULL) && (s_54 != t)))
      _fail(t);
    else
      s_54 = t;
    t = not_null(r_54);
    {
      ATerm o_29;
      o_29 = t;
      t = term_b_30;
      t = table_create_0_0(t);
      t = (ATerm) ATmakeAppl(sym__3, term_b_30, term_c_30, not_null(s_54));
      t = table_put_0_0(t);
      t = o_29;
    }
    return(t);
  }
  if(((r_54 != NULL) && (r_54 != t)))
    _fail(t);
  else
    r_54 = t;
  t = t_54(t);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm v_54 = NULL;
  ATerm x_54 (ATerm t)
  {
    ATerm w_54 = NULL;
    t = not_null(v_54);
    if(((w_54 != NULL) && (w_54 != t)))
      _fail(t);
    else
      w_54 = t;
    t = not_null(v_54);
    t = SSL_table_destroy(not_null(w_54));
    return(t);
  }
  if(((v_54 != NULL) && (v_54 != t)))
    _fail(t);
  else
    v_54 = t;
  t = x_54(t);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm z_54 = NULL;
  ATerm b_55 (ATerm t)
  {
    ATerm a_55 = NULL;
    t = not_null(z_54);
    if(((a_55 != NULL) && (a_55 != t)))
      _fail(t);
    else
      a_55 = t;
    t = not_null(z_54);
    t = SSL_exit(not_null(a_55));
    return(t);
  }
  if(((z_54 != NULL) && (z_54 != t)))
    _fail(t);
  else
    z_54 = t;
  t = b_55(t);
  return(t);
}
ATerm long_description_1_0 (ATerm g_102 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm y_84 (ATerm), ATerm t)
{
  ATerm c_55 (ATerm t)
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        t = Cons_2_0(y_84, c_55, t);
      }
    return(t);
  }
  t = c_55(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm n_55 = NULL,o_55 = NULL,u_55 = NULL;
  ATerm d_56 (ATerm t)
  {
    ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL;
    t = not_null(n_55);
    if(((v_55 != NULL) && (v_55 != t)))
      _fail(t);
    else
      v_55 = t;
    t = not_null(o_55);
    if(((w_55 != NULL) && (w_55 != t)))
      _fail(t);
    else
      w_55 = t;
    t = not_null(w_55);
    {
      ATerm f_30;
      f_30 = t;
      {
        ATerm y_55 = NULL,a_56 = NULL,c_56 = NULL;
        ATerm h_56 (ATerm t)
        {
          t = not_null(c_56);
          if(((x_55 != NULL) && (x_55 != t)))
            _fail(t);
          else
            x_55 = t;
          t = not_null(c_56);
          return(t);
        }
        ATerm g_30;
        g_30 = t;
        {
          ATerm z_55 = NULL;
          ATerm f_56 (ATerm t)
          {
            t = not_null(z_55);
            if(((y_55 != NULL) && (y_55 != t)))
              _fail(t);
            else
              y_55 = t;
            t = not_null(z_55);
            return(t);
          }
          t = g_0(t);
          if(((z_55 != NULL) && (z_55 != t)))
            _fail(t);
          else
            z_55 = t;
          t = f_56(t);
        }
        t = g_30;
        {
          ATerm b_56 = NULL;
          ATerm g_56 (ATerm t)
          {
            t = not_null(b_56);
            if(((a_56 != NULL) && (a_56 != t)))
              _fail(t);
            else
              a_56 = t;
            t = not_null(b_56);
            return(t);
          }
          t = not_null(v_55);
          t = e_0(t);
          if(((b_56 != NULL) && (b_56 != t)))
            _fail(t);
          else
            b_56 = t;
          t = g_56(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(y_55)), not_null(a_56));
          if(((c_56 != NULL) && (c_56 != t)))
            _fail(t);
          else
            c_56 = t;
          t = h_56(t);
        }
      }
      t = f_30;
      {
        ATerm g_3 (ATerm t)
        {
          t = not_null(x_55);
          return(t);
        }
        t = reverse_acc_2_0(e_0, g_3, t);
      }
    }
    return(t);
  }
  ATerm e_56 (ATerm t)
  {
    t = term_n_17;
    t = g_0(t);
    return(t);
  }
  if(((u_55 != NULL) && (u_55 != t)))
    _fail(t);
  else
    u_55 = t;
  t = not_null(u_55);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_55 = ATgetFirst((ATermList) t);
      o_55 = (ATerm) ATgetNext((ATermList) t);
      t = d_56(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = e_56(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, h_3, t);
  return(t);
}
ATerm short_description_1_0 (ATerm f_102 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm h_76 (ATerm), ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL;
  ATerm c_57 (ATerm t)
  {
    ATerm p_56 = NULL,v_56 = NULL,w_56 = NULL,y_56 = NULL;
    ATerm i_57 (ATerm t)
    {
      ATerm z_56 = NULL,a_57 = NULL;
      t = not_null(y_56);
      if(((z_56 != NULL) && (z_56 != t)))
        _fail(t);
      else
        z_56 = t;
      t = not_null(y_56);
      {
        ATerm b_57 = NULL;
        ATerm j_57 (ATerm t)
        {
          t = not_null(b_57);
          if(((a_57 != NULL) && (a_57 != t)))
            _fail(t);
          else
            a_57 = t;
          t = not_null(b_57);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(z_56)), not_null(w_56));
        if(((b_57 != NULL) && (b_57 != t)))
          _fail(t);
        else
          b_57 = t;
        t = j_57(t);
        t = not_null(a_57);
      }
      return(t);
    }
    t = not_null(n_56);
    if(((p_56 != NULL) && (p_56 != t)))
      _fail(t);
    else
      p_56 = t;
    t = not_null(o_56);
    if(((v_56 != NULL) && (v_56 != t)))
      _fail(t);
    else
      v_56 = t;
    t = not_null(n_56);
    {
      ATerm x_56 = NULL;
      ATerm h_57 (ATerm t)
      {
        t = not_null(x_56);
        if(((w_56 != NULL) && (w_56 != t)))
          _fail(t);
        else
          w_56 = t;
        t = not_null(x_56);
        return(t);
      }
      t = SSLgetAnnotations(not_null(p_56));
      if(((x_56 != NULL) && (x_56 != t)))
        _fail(t);
      else
        x_56 = t;
      t = h_57(t);
      t = not_null(v_56);
      t = h_76(t);
      if(((y_56 != NULL) && (y_56 != t)))
        _fail(t);
      else
        y_56 = t;
      t = i_57(t);
    }
    return(t);
  }
  if(((n_56 != NULL) && (n_56 != t)))
    _fail(t);
  else
    n_56 = t;
  t = not_null(n_56);
  if(match_cons(t, sym_Program_1))
    {
      o_56 = ATgetArgument(t, 0);
      t = c_57(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_57 = NULL;
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_57 = NULL;
      ATerm v_57 (ATerm t)
      {
        t = not_null(p_57);
        if(((o_57 != NULL) && (o_57 != t)))
          _fail(t);
        else
          o_57 = t;
        t = not_null(p_57);
        return(t);
      }
      t = term_d_28;
      t = get_config_0_0(t);
      if(((p_57 != NULL) && (p_57 != t)))
        _fail(t);
      else
        p_57 = t;
      t = v_57(t);
      ;
      LocalPopChoice(n_30);
    }
  else
    {
      t = m_30;
      {
        ATerm i_3 (ATerm t)
        {
          ATerm j_3 (ATerm t)
          {
            ATerm q_57 = NULL;
            ATerm w_57 (ATerm t)
            {
              t = not_null(q_57);
              if(((o_57 != NULL) && (o_57 != t)))
                _fail(t);
              else
                o_57 = t;
              t = not_null(q_57);
              return(t);
            }
            if(((q_57 != NULL) && (q_57 != t)))
              _fail(t);
            else
              q_57 = t;
            t = w_57(t);
            return(t);
          }
          t = Program_1_0(j_3, t);
          return(t);
        }
        t = option_defined_1_0(i_3, t);
      }
    }
  {
    ATerm k_3 (ATerm t)
    {
      ATerm l_3 (ATerm t)
      {
        t = not_null(o_57);
        return(t);
      }
      t = short_description_1_0(l_3, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(k_3, t);
    t = term_o_30;
    t = echo_0_0(t);
    t = term_r_30;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm m_3 (ATerm t)
      {
        ATerm r_57 = NULL;
        ATerm s_57 = NULL;
        ATerm x_57 (ATerm t)
        {
          t = not_null(s_57);
          if(((r_57 != NULL) && (r_57 != t)))
            _fail(t);
          else
            r_57 = t;
          t = not_null(s_57);
          return(t);
        }
        if(((s_57 != NULL) && (s_57 != t)))
          _fail(t);
        else
          s_57 = t;
        t = x_57(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_57)), term_s_30);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(m_3, t);
      {
        ATerm n_3 (ATerm t)
        {
          ATerm t_57 = NULL;
          ATerm u_57 = NULL;
          ATerm y_57 (ATerm t)
          {
            t = not_null(u_57);
            if(((t_57 != NULL) && (t_57 != t)))
              _fail(t);
            else
              t_57 = t;
            t = not_null(u_57);
            return(t);
          }
          ATerm o_3 (ATerm t)
          {
            t = not_null(o_57);
            return(t);
          }
          t = long_description_1_0(o_3, t);
          if(((u_57 != NULL) && (u_57 != t)))
            _fail(t);
          else
            u_57 = t;
          t = y_57(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(t_57)), term_o_31);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(n_3, t);
      }
    }
  }
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL;
  ATerm o_58 (ATerm t)
  {
    ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL,k_58 = NULL;
    ATerm q_58 (ATerm t)
    {
      ATerm l_58 = NULL,m_58 = NULL;
      t = not_null(k_58);
      if(((l_58 != NULL) && (l_58 != t)))
        _fail(t);
      else
        l_58 = t;
      t = not_null(k_58);
      {
        ATerm n_58 = NULL;
        ATerm r_58 (ATerm t)
        {
          t = not_null(n_58);
          if(((m_58 != NULL) && (m_58 != t)))
            _fail(t);
          else
            m_58 = t;
          t = not_null(n_58);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_58)), not_null(i_58));
        if(((n_58 != NULL) && (n_58 != t)))
          _fail(t);
        else
          n_58 = t;
        t = r_58(t);
        t = not_null(m_58);
      }
      return(t);
    }
    t = not_null(e_58);
    if(((g_58 != NULL) && (g_58 != t)))
      _fail(t);
    else
      g_58 = t;
    t = not_null(f_58);
    if(((h_58 != NULL) && (h_58 != t)))
      _fail(t);
    else
      h_58 = t;
    t = not_null(e_58);
    {
      ATerm j_58 = NULL;
      ATerm p_58 (ATerm t)
      {
        t = not_null(j_58);
        if(((i_58 != NULL) && (i_58 != t)))
          _fail(t);
        else
          i_58 = t;
        t = not_null(j_58);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_58));
      if(((j_58 != NULL) && (j_58 != t)))
        _fail(t);
      else
        j_58 = t;
      t = p_58(t);
      t = not_null(h_58);
      t = i_76(t);
      if(((k_58 != NULL) && (k_58 != t)))
        _fail(t);
      else
        k_58 = t;
      t = q_58(t);
    }
    return(t);
  }
  if(((e_58 != NULL) && (e_58 != t)))
    _fail(t);
  else
    e_58 = t;
  t = not_null(e_58);
  if(match_cons(t, sym_Undefined_1))
    {
      f_58 = ATgetArgument(t, 0);
      t = o_58(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm i_85 (ATerm), ATerm t)
{
  ATerm s_58 (ATerm t)
  {
    ATerm z_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(i_85, _id, t);
        ;
        LocalPopChoice(a_32);
      }
    else
      {
        t = z_31;
        t = Cons_2_0(_id, s_58, t);
      }
    return(t);
  }
  t = s_58(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm f_101 (ATerm), ATerm t)
{
  t = fetch_1_0(f_101, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
  if(((u_58 != NULL) && (u_58 != t)))
    _fail(t);
  else
    u_58 = t;
  t = not_null(u_58);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(u_58);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_58 = ATgetFirst((ATermList) t);
          w_58 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(u_58);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_32;
  b_32 = t;
  {
    ATerm z_58 = NULL;
    ATerm c_59 = NULL;
    ATerm e_59 (ATerm t)
    {
      t = not_null(c_59);
      if(((z_58 != NULL) && (z_58 != t)))
        _fail(t);
      else
        z_58 = t;
      t = not_null(c_59);
      return(t);
    }
    ATerm c_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(j_32);
      }
    else
      {
        t = c_32;
        {
          ATerm a_59 = NULL;
          ATerm b_59 = NULL;
          ATerm d_59 (ATerm t)
          {
            t = not_null(b_59);
            if(((a_59 != NULL) && (a_59 != t)))
              _fail(t);
            else
              a_59 = t;
            t = not_null(b_59);
            return(t);
          }
          if(((b_59 != NULL) && (b_59 != t)))
            _fail(t);
          else
            b_59 = t;
          t = d_59(t);
          t = (ATerm) ATinsert(ATempty, not_null(a_59));
        }
      }
    if(((c_59 != NULL) && (c_59 != t)))
      _fail(t);
    else
      c_59 = t;
    t = e_59(t);
    t = (ATerm) ATmakeAppl(sym__2, term_y_21, not_null(z_58));
    t = printnl_0_0(t);
  }
  t = b_32;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_28;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm override_system_about_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  ATerm k_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(l_32);
    }
  else
    {
      t = k_32;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  ATerm t_59 = NULL;
  ATerm b_60 (ATerm t)
  {
    ATerm u_59 = NULL,x_59 = NULL,z_59 = NULL;
    t = not_null(t_59);
    if(((u_59 != NULL) && (u_59 != t)))
      _fail(t);
    else
      u_59 = t;
    t = not_null(t_59);
    {
      ATerm m_32;
      m_32 = t;
      {
        ATerm y_59 = NULL;
        ATerm c_60 (ATerm t)
        {
          t = not_null(y_59);
          if(((x_59 != NULL) && (x_59 != t)))
            _fail(t);
          else
            x_59 = t;
          t = not_null(y_59);
          return(t);
        }
        t = SSLgetAnnotations(not_null(u_59));
        if(((y_59 != NULL) && (y_59 != t)))
          _fail(t);
        else
          y_59 = t;
        t = c_60(t);
      }
      t = m_32;
      {
        ATerm a_60 = NULL;
        ATerm d_60 (ATerm t)
        {
          t = not_null(a_60);
          if(((z_59 != NULL) && (z_59 != t)))
            _fail(t);
          else
            z_59 = t;
          t = not_null(a_60);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(x_59));
        if(((a_60 != NULL) && (a_60 != t)))
          _fail(t);
        else
          a_60 = t;
        t = d_60(t);
        t = not_null(z_59);
      }
    }
    return(t);
  }
  if(((t_59 != NULL) && (t_59 != t)))
    _fail(t);
  else
    t_59 = t;
  t = not_null(t_59);
  if(match_cons(t, sym_Help_0))
    {
      t = b_60(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1_0 (ATerm p_81 (ATerm), ATerm t)
{
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_81(t);
      ;
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_3 (ATerm t)
      {
        ATerm m_60 = NULL;
        if(((m_60 != NULL) && (m_60 != t)))
          _fail(t);
        else
          m_60 = t;
        t = not_null(m_60);
        if(match_string(t, "--about"))
          {
            t = not_null(m_60);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm q_3 (ATerm t)
      {
        t = term_c_33;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm s_3 (ATerm t)
      {
        t = term_d_33;
        return(t);
      }
      t = Option_3_0(p_3, q_3, s_3, t);
      ;
      LocalPopChoice(u_32);
    }
  else
    {
      t = t_32;
      {
        ATerm t_3 (ATerm t)
        {
          ATerm n_60 = NULL;
          if(((n_60 != NULL) && (n_60 != t)))
            _fail(t);
          else
            n_60 = t;
          t = not_null(n_60);
          if(match_string(t, "--version"))
            {
              t = not_null(n_60);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_3 (ATerm t)
        {
          t = term_c_33;
          t = set_config_0_0(t);
          t = term_p_33;
          t = set_config_0_0(t);
          t = term_u_33;
          return(t);
        }
        ATerm v_3 (ATerm t)
        {
          t = term_v_33;
          return(t);
        }
        t = Option_3_0(t_3, u_3, v_3, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL;
  ATerm v_60 (ATerm t)
  {
    ATerm t_60 = NULL,u_60 = NULL;
    t = not_null(r_60);
    if(((t_60 != NULL) && (t_60 != t)))
      _fail(t);
    else
      t_60 = t;
    t = not_null(s_60);
    if(((u_60 != NULL) && (u_60 != t)))
      _fail(t);
    else
      u_60 = t;
    t = not_null(q_60);
    t = SSL_table_get(not_null(t_60), not_null(u_60));
    return(t);
  }
  if(((q_60 != NULL) && (q_60 != t)))
    _fail(t);
  else
    q_60 = t;
  t = not_null(q_60);
  if(match_cons(t, sym__2))
    {
      r_60 = ATgetArgument(t, 0);
      s_60 = ATgetArgument(t, 1);
      t = v_60(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL;
  ATerm i_61 (ATerm t)
  {
    ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL;
    t = not_null(a_61);
    if(((e_61 != NULL) && (e_61 != t)))
      _fail(t);
    else
      e_61 = t;
    t = not_null(b_61);
    if(((f_61 != NULL) && (f_61 != t)))
      _fail(t);
    else
      f_61 = t;
    t = not_null(c_61);
    if(((d_61 != NULL) && (d_61 != t)))
      _fail(t);
    else
      d_61 = t;
    t = not_null(z_60);
    {
      ATerm w_33;
      w_33 = t;
      {
        ATerm g_61 = NULL;
        ATerm h_61 = NULL;
        ATerm j_61 (ATerm t)
        {
          t = not_null(h_61);
          if(((g_61 != NULL) && (g_61 != t)))
            _fail(t);
          else
            g_61 = t;
          t = not_null(h_61);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_61), not_null(f_61));
        {
          ATerm x_33 = t;
          int y_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(y_33);
            }
          else
            {
              t = x_33;
              t = (ATerm) ATempty;
            }
          if(((h_61 != NULL) && (h_61 != t)))
            _fail(t);
          else
            h_61 = t;
          t = j_61(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(e_61), not_null(f_61), (ATerm) ATinsert(CheckATermList(not_null(g_61)), not_null(d_61)));
        t = table_put_0_0(t);
      }
      t = w_33;
    }
    return(t);
  }
  if(((z_60 != NULL) && (z_60 != t)))
    _fail(t);
  else
    z_60 = t;
  t = not_null(z_60);
  if(match_cons(t, sym__3))
    {
      a_61 = ATgetArgument(t, 0);
      b_61 = ATgetArgument(t, 1);
      c_61 = ATgetArgument(t, 2);
      t = i_61(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm k_102 (ATerm), ATerm t)
{
  ATerm l_61 = NULL;
  ATerm m_61 = NULL;
  ATerm n_61 (ATerm t)
  {
    t = not_null(m_61);
    if(((l_61 != NULL) && (l_61 != t)))
      _fail(t);
    else
      l_61 = t;
    t = not_null(m_61);
    return(t);
  }
  t = term_n_17;
  t = k_102(t);
  if(((m_61 != NULL) && (m_61 != t)))
    _fail(t);
  else
    m_61 = t;
  t = n_61(t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_30, term_q_30, not_null(l_61));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL;
  ATerm z_61 (ATerm t)
  {
    t = not_null(s_61);
    t = register_usage_1_0(d_0, t);
    return(t);
  }
  ATerm a_62 (ATerm t)
  {
    ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL;
    t = not_null(t_61);
    if(((v_61 != NULL) && (v_61 != t)))
      _fail(t);
    else
      v_61 = t;
    t = not_null(u_61);
    if(((w_61 != NULL) && (w_61 != t)))
      _fail(t);
    else
      w_61 = t;
    t = not_null(s_61);
    {
      ATerm z_33;
      z_33 = t;
      t = not_null(v_61);
      t = a_0(t);
      t = z_33;
      {
        ATerm y_61 = NULL;
        ATerm b_62 (ATerm t)
        {
          t = not_null(y_61);
          if(((x_61 != NULL) && (x_61 != t)))
            _fail(t);
          else
            x_61 = t;
          t = not_null(y_61);
          return(t);
        }
        t = term_n_17;
        t = c_0(t);
        if(((y_61 != NULL) && (y_61 != t)))
          _fail(t);
        else
          y_61 = t;
        t = b_62(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(w_61)), not_null(x_61));
      }
    }
    return(t);
  }
  if(((s_61 != NULL) && (s_61 != t)))
    _fail(t);
  else
    s_61 = t;
  t = not_null(s_61);
  if(match_string(t, "register-usage-info"))
    {
      t = z_61(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_61 = ATgetFirst((ATermList) t);
          u_61 = (ATerm) ATgetNext((ATermList) t);
          t = a_62(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm d_62 = NULL;
    if(((d_62 != NULL) && (d_62 != t)))
      _fail(t);
    else
      d_62 = t;
    t = not_null(d_62);
    if(match_string(t, "--help"))
      {
        t = not_null(d_62);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(d_62);
          }
        else
          {
            if(match_string(t, "-?"))
              {
                t = not_null(d_62);
              }
            else
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_b_34;
    t = set_config_0_0(t);
    t = term_c_34;
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_d_34;
    return(t);
  }
  t = Option_3_0(w_3, x_3, y_3, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL;
  ATerm l_62 (ATerm t)
  {
    ATerm j_62 = NULL,k_62 = NULL;
    t = not_null(h_62);
    if(((j_62 != NULL) && (j_62 != t)))
      _fail(t);
    else
      j_62 = t;
    t = not_null(i_62);
    if(((k_62 != NULL) && (k_62 != t)))
      _fail(t);
    else
      k_62 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(k_62)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_62)));
    return(t);
  }
  if(((g_62 != NULL) && (g_62 != t)))
    _fail(t);
  else
    g_62 = t;
  t = not_null(g_62);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_62 = ATgetFirst((ATermList) t);
      i_62 = (ATerm) ATgetNext((ATermList) t);
      t = l_62(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_64 (ATerm), ATerm c_64 (ATerm), ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL;
  ATerm i_63 (ATerm t)
  {
    ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,c_63 = NULL;
    ATerm k_63 (ATerm t)
    {
      ATerm d_63 = NULL,e_63 = NULL;
      ATerm l_63 (ATerm t)
      {
        ATerm f_63 = NULL,g_63 = NULL;
        t = not_null(e_63);
        if(((f_63 != NULL) && (f_63 != t)))
          _fail(t);
        else
          f_63 = t;
        t = not_null(e_63);
        {
          ATerm h_63 = NULL;
          ATerm m_63 (ATerm t)
          {
            t = not_null(h_63);
            if(((g_63 != NULL) && (g_63 != t)))
              _fail(t);
            else
              g_63 = t;
            t = not_null(h_63);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(f_63)), not_null(d_63)), not_null(a_63));
          if(((h_63 != NULL) && (h_63 != t)))
            _fail(t);
          else
            h_63 = t;
          t = m_63(t);
          t = not_null(g_63);
        }
        return(t);
      }
      t = not_null(c_63);
      if(((d_63 != NULL) && (d_63 != t)))
        _fail(t);
      else
        d_63 = t;
      t = not_null(z_62);
      t = c_64(t);
      if(((e_63 != NULL) && (e_63 != t)))
        _fail(t);
      else
        e_63 = t;
      t = l_63(t);
      return(t);
    }
    t = not_null(u_62);
    if(((x_62 != NULL) && (x_62 != t)))
      _fail(t);
    else
      x_62 = t;
    t = not_null(v_62);
    if(((y_62 != NULL) && (y_62 != t)))
      _fail(t);
    else
      y_62 = t;
    t = not_null(w_62);
    if(((z_62 != NULL) && (z_62 != t)))
      _fail(t);
    else
      z_62 = t;
    t = not_null(u_62);
    {
      ATerm b_63 = NULL;
      ATerm j_63 (ATerm t)
      {
        t = not_null(b_63);
        if(((a_63 != NULL) && (a_63 != t)))
          _fail(t);
        else
          a_63 = t;
        t = not_null(b_63);
        return(t);
      }
      t = SSLgetAnnotations(not_null(x_62));
      if(((b_63 != NULL) && (b_63 != t)))
        _fail(t);
      else
        b_63 = t;
      t = j_63(t);
      t = not_null(y_62);
      t = b_64(t);
      if(((c_63 != NULL) && (c_63 != t)))
        _fail(t);
      else
        c_63 = t;
      t = k_63(t);
    }
    return(t);
  }
  if(((u_62 != NULL) && (u_62 != t)))
    _fail(t);
  else
    u_62 = t;
  t = not_null(u_62);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_62 = ATgetFirst((ATermList) t);
      w_62 = (ATerm) ATgetNext((ATermList) t);
      t = i_63(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm r_63 = NULL;
  ATerm x_63 (ATerm t)
  {
    ATerm s_63 = NULL,t_63 = NULL,v_63 = NULL;
    t = not_null(r_63);
    if(((s_63 != NULL) && (s_63 != t)))
      _fail(t);
    else
      s_63 = t;
    t = not_null(r_63);
    {
      ATerm e_34;
      e_34 = t;
      {
        ATerm u_63 = NULL;
        ATerm y_63 (ATerm t)
        {
          t = not_null(u_63);
          if(((t_63 != NULL) && (t_63 != t)))
            _fail(t);
          else
            t_63 = t;
          t = not_null(u_63);
          return(t);
        }
        t = SSLgetAnnotations(not_null(s_63));
        if(((u_63 != NULL) && (u_63 != t)))
          _fail(t);
        else
          u_63 = t;
        t = y_63(t);
      }
      t = e_34;
      {
        ATerm w_63 = NULL;
        ATerm z_63 (ATerm t)
        {
          t = not_null(w_63);
          if(((v_63 != NULL) && (v_63 != t)))
            _fail(t);
          else
            v_63 = t;
          t = not_null(w_63);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(t_63));
        if(((w_63 != NULL) && (w_63 != t)))
          _fail(t);
        else
          w_63 = t;
        t = z_63(t);
        t = not_null(v_63);
      }
    }
    return(t);
  }
  if(((r_63 != NULL) && (r_63 != t)))
    _fail(t);
  else
    r_63 = t;
  t = not_null(r_63);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_63(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm e_64 = NULL,f_64 = NULL,g_64 = NULL;
  ATerm j_64 (ATerm t)
  {
    ATerm h_64 = NULL,i_64 = NULL;
    t = not_null(f_64);
    if(((h_64 != NULL) && (h_64 != t)))
      _fail(t);
    else
      h_64 = t;
    t = not_null(g_64);
    if(((i_64 != NULL) && (i_64 != t)))
      _fail(t);
    else
      i_64 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_p_20, not_null(h_64), not_null(i_64));
    t = table_put_0_0(t);
    return(t);
  }
  if(((e_64 != NULL) && (e_64 != t)))
    _fail(t);
  else
    e_64 = t;
  t = not_null(e_64);
  if(match_cons(t, sym__2))
    {
      f_64 = ATgetArgument(t, 0);
      g_64 = ATgetArgument(t, 1);
      t = j_64(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_102 (ATerm), ATerm t)
{
  ATerm f_34;
  f_34 = t;
  {
    ATerm z_3 (ATerm t)
    {
      t = term_u_34;
      t = i_102(t);
      return(t);
    }
    t = try_1_0(z_3, t);
  }
  t = f_34;
  {
    ATerm a_4 (ATerm t)
    {
      ATerm o_64 = NULL;
      ATerm v_34;
      v_34 = t;
      {
        ATerm m_64 = NULL;
        ATerm n_64 = NULL;
        ATerm q_64 (ATerm t)
        {
          t = not_null(n_64);
          if(((m_64 != NULL) && (m_64 != t)))
            _fail(t);
          else
            m_64 = t;
          t = not_null(n_64);
          return(t);
        }
        if(((n_64 != NULL) && (n_64 != t)))
          _fail(t);
        else
          n_64 = t;
        t = q_64(t);
        t = (ATerm) ATmakeAppl(sym__2, term_d_28, not_null(m_64));
        t = set_config_0_0(t);
      }
      t = v_34;
      {
        ATerm p_64 = NULL;
        ATerm r_64 (ATerm t)
        {
          t = not_null(p_64);
          if(((o_64 != NULL) && (o_64 != t)))
            _fail(t);
          else
            o_64 = t;
          t = not_null(p_64);
          return(t);
        }
        if(((p_64 != NULL) && (p_64 != t)))
          _fail(t);
        else
          p_64 = t;
        t = r_64(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_64));
      }
      return(t);
    }
    ATerm b_4 (ATerm t)
    {
      ATerm w_34 = t;
      int x_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_35 = t;
          int g_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(g_35);
            }
          else
            {
              t = c_35;
              t = i_102(t);
              t = Cons_2_0(_id, b_4, t);
            }
          ;
          LocalPopChoice(x_34);
        }
      else
        {
          t = w_34;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(a_4, b_4, t);
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL;
  ATerm h_35;
  h_35 = t;
  {
    ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL;
    ATerm c_65 (ATerm t)
    {
      t = not_null(z_64);
      if(((v_64 != NULL) && (v_64 != t)))
        _fail(t);
      else
        v_64 = t;
      t = not_null(a_65);
      if(((w_64 != NULL) && (w_64 != t)))
        _fail(t);
      else
        w_64 = t;
      t = not_null(b_65);
      if(((x_64 != NULL) && (x_64 != t)))
        _fail(t);
      else
        x_64 = t;
      t = not_null(y_64);
      t = SSL_table_put(not_null(v_64), not_null(w_64), not_null(x_64));
      return(t);
    }
    if(((y_64 != NULL) && (y_64 != t)))
      _fail(t);
    else
      y_64 = t;
    t = not_null(y_64);
    if(match_cons(t, sym__3))
      {
        z_64 = ATgetArgument(t, 0);
        a_65 = ATgetArgument(t, 1);
        b_65 = ATgetArgument(t, 2);
        t = c_65(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = h_35;
  return(t);
}
ATerm parse_options_1_0 (ATerm h_102 (ATerm), ATerm t)
{
  ATerm e_65 = NULL;
  ATerm o_35;
  o_35 = t;
  t = term_s_35;
  t = table_put_0_0(t);
  t = o_35;
  {
    ATerm c_4 (ATerm t)
    {
      ATerm t_35 = t;
      int z_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_102(t);
          ;
          LocalPopChoice(z_35);
        }
      else
        {
          t = t_35;
          {
            ATerm b_36 = t;
            int c_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(c_36);
              }
            else
              {
                t = b_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_4, t);
    {
      ATerm d_4 (ATerm t)
      {
        ATerm d_36 = t;
        int e_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_36;
            f_36 = t;
            {
              ATerm g_36 = t;
              int h_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_d_29;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(h_36);
                }
              else
                {
                  t = g_36;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = f_36;
            t = system_usage_0_0(t);
            t = term_g_25;
            t = exit_0_0(t);
            ;
            LocalPopChoice(e_36);
          }
        else
          {
            t = d_36;
            {
              ATerm i_36 = t;
              int j_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_36;
                  k_36 = t;
                  t = term_v_32;
                  t = get_config_0_0(t);
                  t = k_36;
                  t = system_about_0_0(t);
                  t = term_g_25;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(j_36);
                }
              else
                {
                  t = i_36;
                  {
                    ATerm e_4 (ATerm t)
                    {
                      ATerm i_4 (ATerm t)
                      {
                        ATerm f_65 = NULL;
                        ATerm g_65 (ATerm t)
                        {
                          t = not_null(f_65);
                          if(((e_65 != NULL) && (e_65 != t)))
                            _fail(t);
                          else
                            e_65 = t;
                          t = not_null(f_65);
                          return(t);
                        }
                        if(((f_65 != NULL) && (f_65 != t)))
                          _fail(t);
                        else
                          f_65 = t;
                        t = g_65(t);
                        return(t);
                      }
                      t = Undefined_1_0(i_4, t);
                      return(t);
                    }
                    t = option_defined_1_0(e_4, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_65)), term_l_36));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_i_18;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(d_4, t);
      {
        ATerm m_36;
        m_36 = t;
        t = term_p_30;
        t = table_destroy_0_0(t);
        t = m_36;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm t)
{
  t = parse_options_1_0(o_97, t);
  t = store_options_0_0(t);
  t = q_97(t);
  {
    ATerm n_36 = t;
    int o_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_97, t);
        ;
        LocalPopChoice(o_36);
      }
    else
      {
        t = n_36;
        {
          ATerm b_37 = t;
          int c_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_97(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_37);
            }
          else
            {
              t = b_37;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm h_37 = t;
    int i_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_97(t);
        ;
        LocalPopChoice(i_37);
      }
    else
      {
        t = h_37;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(d_97, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(j_4, f_97, g_97, k_4, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm x_96 (ATerm), ATerm y_96 (ATerm), ATerm z_96 (ATerm), ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    ATerm m_4 (ATerm t)
    {
      ATerm j_37;
      j_37 = t;
      {
        ATerm i_65 = NULL;
        ATerm j_65 = NULL;
        ATerm k_65 (ATerm t)
        {
          t = not_null(j_65);
          if(((i_65 != NULL) && (i_65 != t)))
            _fail(t);
          else
            i_65 = t;
          t = not_null(j_65);
          return(t);
        }
        t = term_d_28;
        t = get_config_0_0(t);
        if(((j_65 != NULL) && (j_65 != t)))
          _fail(t);
        else
          j_65 = t;
        t = k_65(t);
        t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATempty, not_null(i_65)));
        t = printnl_0_0(t);
      }
      t = j_37;
      return(t);
    }
    t = if_verbose2_1_0(m_4, t);
    return(t);
  }
  t = iowrap_4_0(x_96, y_96, z_96, l_4, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm t)
{
  t = iowrap_3_0(v_96, w_96, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm s_96 (ATerm), ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    t = _2_0(_id, s_96, t);
    return(t);
  }
  t = iowrap_2_0(n_4, _fail, t);
  return(t);
}
ATerm rename_vars_0_0 (ATerm t)
{
  t = iowrap_1_0(strename_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = rename_vars_0_0(t);
  return(t);
}
