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
ATerm term_t_22;
ATerm term_s_21;
ATerm term_y_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_k_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_a_18;
ATerm term_t_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_r_16;
ATerm term_f_16;
ATerm term_a_16;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_h_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_u_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_a_12;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_i_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_e_8;
ATerm term_b_8;
ATerm term_v_7;
ATerm term_g_6;
ATerm term_f_6;
void init_constant_terms (void)
{
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Definition", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_w_9, term_k_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__2, term_c_13, term_f_6);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_f_6);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym__2, term_a_18, term_c_18);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym__2, term_x_19, term_f_6);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym__2, term_c_20, term_f_6);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym__2, term_r_16, term_f_6);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym__3, term_a_18, term_c_18, (ATerm) ATempty);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm s_71 (ATerm), ATerm t_71 (ATerm));
ATerm SDefT_4 (ATerm, ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm q_73 (ATerm));
ATerm SDef_3 (ATerm, ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm m_73 (ATerm));
ATerm Let_2 (ATerm, ATerm v_70 (ATerm), ATerm w_70 (ATerm));
ATerm sboundin_3 (ATerm, ATerm j_80 (ATerm), ATerm k_80 (ATerm), ATerm l_80 (ATerm));
ATerm Bind7_0 (ATerm);
ATerm Bind5_0 (ATerm);
ATerm Bind3_0 (ATerm);
ATerm declared_vars_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm Add2_0 (ATerm);
ATerm union_1 (ATerm, ATerm r_89 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm i_92 (ATerm));
ATerm crush_3 (ATerm, ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm g_90 (ATerm));
ATerm free_vars_3 (ATerm, ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm svars_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm r_93 (ATerm));
ATerm Definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm v_89 (ATerm), ATerm w_89 (ATerm));
ATerm diff_1 (ATerm, ATerm n_89 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm s_85 (ATerm), ATerm t_85 (ATerm));
ATerm zip_1 (ATerm, ATerm v_85 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm b_110 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm o_98 (ATerm), ATerm p_98 (ATerm));
ATerm for_3 (ATerm, ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t_98 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm j_109 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm y_109 (ATerm));
ATerm assert_1 (ATerm, ATerm p_93 (ATerm));
ATerm RegisterDefinition_0 (ATerm);
ATerm dead_def_elim_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm m_66 (ATerm));
ATerm Cons_2 (ATerm, ATerm i_66 (ATerm), ATerm j_66 (ATerm));
ATerm Specification_1 (ATerm, ATerm r_66 (ATerm));
ATerm _2 (ATerm, ATerm z_64 (ATerm), ATerm a_65 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm v_87 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm x_103 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm t_102 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm v_105 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm f_102 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_84 (ATerm), ATerm r_84 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm e_92 (ATerm), ATerm f_92 (ATerm));
ATerm crush_2 (ATerm, ATerm c_90 (ATerm), ATerm d_90 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm w_103 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_106 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm u_108 (ATerm));
ATerm map_1 (ATerm, ATerm f_87 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm t_108 (ATerm));
ATerm Program_1 (ATerm, ATerm g_79 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm h_79 (ATerm));
ATerm fetch_1 (ATerm, ATerm p_87 (ATerm));
ATerm option_defined_1 (ATerm, ATerm t_107 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_83 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm y_108 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm w_108 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm v_108 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm y_106 (ATerm));
ATerm iowrap_4 (ATerm, ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm n_106 (ATerm));
ATerm iowrap_3 (ATerm, ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm));
ATerm iowrap_2 (ATerm, ATerm c_106 (ATerm), ATerm d_106 (ATerm));
ATerm iowrap_1 (ATerm, ATerm z_105 (ATerm));
ATerm dead_def_elim_io_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm w_2 = NULL;
  w_2 = t;
  v_2 :
  if(((ATgetType(w_2) == AT_LIST) && ATisEmpty(w_2)))
    {
      {
        ATerm l_3 = NULL,n_3 = NULL;
        ATerm q_4;
        q_4 = t;
        {
          ATerm m_3 = NULL;
          t = SSLgetAnnotations(not_null(w_2));
          {
            m_3 = t;
            if(((l_3 != NULL) && (l_3 != m_3)))
              _fail(m_3);
            else
              l_3 = m_3;
          }
        }
        t = q_4;
        {
          ATerm r_3 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(l_3));
          {
            r_3 = t;
            if(((n_3 != NULL) && (n_3 != r_3)))
              _fail(r_3);
            else
              n_3 = r_3;
          }
          t = not_null(n_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm s_71 (ATerm), ATerm t_71 (ATerm))
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL;
  b_4 = t;
  a_4 :
  if(match_cons(b_4, sym_Rec_2))
    {
      c_4 = ATgetArgument(b_4, 0);
      d_4 = ATgetArgument(b_4, 1);
      {
        ATerm h_4 = NULL,j_4 = NULL;
        ATerm i_4 = NULL;
        t = SSLgetAnnotations(not_null(b_4));
        {
          i_4 = t;
          if(((h_4 != NULL) && (h_4 != i_4)))
            _fail(i_4);
          else
            h_4 = i_4;
        }
        {
          t = not_null(c_4);
          {
            ATerm l_4 = NULL;
            t = s_71(t);
            {
              j_4 = t;
              {
                t = not_null(d_4);
                {
                  ATerm n_4 = NULL;
                  t = t_71(t);
                  {
                    l_4 = t;
                    {
                      ATerm o_4 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(j_4), not_null(l_4)), not_null(h_4));
                      {
                        o_4 = t;
                        if(((n_4 != NULL) && (n_4 != o_4)))
                          _fail(o_4);
                        else
                          n_4 = o_4;
                      }
                      t = not_null(n_4);
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
ATerm SDefT_4 (ATerm t, ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm q_73 (ATerm))
{
  ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL;
  c_5 = t;
  b_5 :
  if(match_cons(c_5, sym_SDefT_4))
    {
      d_5 = ATgetArgument(c_5, 0);
      e_5 = ATgetArgument(c_5, 1);
      f_5 = ATgetArgument(c_5, 2);
      g_5 = ATgetArgument(c_5, 3);
      {
        ATerm m_5 = NULL,o_5 = NULL;
        ATerm n_5 = NULL;
        t = SSLgetAnnotations(not_null(c_5));
        {
          n_5 = t;
          if(((m_5 != NULL) && (m_5 != n_5)))
            _fail(n_5);
          else
            m_5 = n_5;
        }
        {
          t = not_null(d_5);
          {
            ATerm q_5 = NULL;
            t = n_73(t);
            {
              o_5 = t;
              {
                t = not_null(e_5);
                {
                  ATerm s_5 = NULL;
                  t = o_73(t);
                  {
                    q_5 = t;
                    {
                      t = not_null(f_5);
                      {
                        ATerm u_5 = NULL;
                        t = p_73(t);
                        {
                          s_5 = t;
                          {
                            t = not_null(g_5);
                            {
                              ATerm w_5 = NULL;
                              t = q_73(t);
                              {
                                u_5 = t;
                                {
                                  ATerm x_5 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(o_5), not_null(q_5), not_null(s_5), not_null(u_5)), not_null(m_5));
                                  {
                                    x_5 = t;
                                    if(((w_5 != NULL) && (w_5 != x_5)))
                                      _fail(x_5);
                                    else
                                      w_5 = x_5;
                                  }
                                  t = not_null(w_5);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm SDef_3 (ATerm t, ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm m_73 (ATerm))
{
  ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL;
  m_6 = t;
  l_6 :
  if(match_cons(m_6, sym_SDef_3))
    {
      n_6 = ATgetArgument(m_6, 0);
      o_6 = ATgetArgument(m_6, 1);
      p_6 = ATgetArgument(m_6, 2);
      {
        ATerm u_6 = NULL,w_6 = NULL;
        ATerm v_6 = NULL;
        t = SSLgetAnnotations(not_null(m_6));
        {
          v_6 = t;
          if(((u_6 != NULL) && (u_6 != v_6)))
            _fail(v_6);
          else
            u_6 = v_6;
        }
        {
          t = not_null(n_6);
          {
            ATerm y_6 = NULL;
            t = k_73(t);
            {
              w_6 = t;
              {
                t = not_null(o_6);
                {
                  ATerm a_7 = NULL;
                  t = l_73(t);
                  {
                    y_6 = t;
                    {
                      t = not_null(p_6);
                      {
                        ATerm c_7 = NULL;
                        t = m_73(t);
                        {
                          a_7 = t;
                          {
                            ATerm d_7 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(w_6), not_null(y_6), not_null(a_7)), not_null(u_6));
                            {
                              d_7 = t;
                              if(((c_7 != NULL) && (c_7 != d_7)))
                                _fail(d_7);
                              else
                                c_7 = d_7;
                            }
                            t = not_null(c_7);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm v_70 (ATerm), ATerm w_70 (ATerm))
{
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL;
  q_7 = t;
  p_7 :
  if(match_cons(q_7, sym_Let_2))
    {
      r_7 = ATgetArgument(q_7, 0);
      s_7 = ATgetArgument(q_7, 1);
      {
        ATerm w_7 = NULL,y_7 = NULL;
        ATerm x_7 = NULL;
        t = SSLgetAnnotations(not_null(q_7));
        {
          x_7 = t;
          if(((w_7 != NULL) && (w_7 != x_7)))
            _fail(x_7);
          else
            w_7 = x_7;
        }
        {
          t = not_null(r_7);
          {
            ATerm a_8 = NULL;
            t = v_70(t);
            {
              y_7 = t;
              {
                t = not_null(s_7);
                {
                  ATerm c_8 = NULL;
                  t = w_70(t);
                  {
                    a_8 = t;
                    {
                      ATerm d_8 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(y_7), not_null(a_8)), not_null(w_7));
                      {
                        d_8 = t;
                        if(((c_8 != NULL) && (c_8 != d_8)))
                          _fail(d_8);
                        else
                          c_8 = d_8;
                      }
                      t = not_null(c_8);
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
ATerm sboundin_3 (ATerm t, ATerm j_80 (ATerm), ATerm k_80 (ATerm), ATerm l_80 (ATerm))
{
  ATerm r_4 = t;
  int s_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, j_80, j_80);
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
            t = SDef_3(t, l_80, l_80, j_80);
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
                  t = SDefT_4(t, l_80, l_80, l_80, j_80);
                  ;
                  LocalPopChoice(w_4);
                }
              else
                {
                  t = v_4;
                  t = Rec_2(t, l_80, j_80);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0 (ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
  l_8 = t;
  k_8 :
  if(match_cons(l_8, sym_RDefT_4))
    {
      m_8 = ATgetArgument(l_8, 0);
      n_8 = ATgetArgument(l_8, 1);
      o_8 = ATgetArgument(l_8, 2);
      p_8 = ATgetArgument(l_8, 3);
      {
        t = not_null(n_8);
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
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL;
  x_8 = t;
  w_8 :
  if(match_cons(x_8, sym_SDefT_4))
    {
      y_8 = ATgetArgument(x_8, 0);
      z_8 = ATgetArgument(x_8, 1);
      a_9 = ATgetArgument(x_8, 2);
      b_9 = ATgetArgument(x_8, 3);
      {
        t = not_null(z_8);
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
  ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL;
  j_9 = t;
  i_9 :
  if(match_cons(j_9, sym_Rec_2))
    {
      k_9 = ATgetArgument(j_9, 0);
      l_9 = ATgetArgument(j_9, 1);
      t = (ATerm) ATinsert(ATempty, not_null(k_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declared_vars_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
    t_9 = t;
    r_9 :
    if(match_cons(t_9, sym_VarDec_2))
      {
        u_9 = ATgetArgument(t_9, 0);
        s_9 = ATgetArgument(t_9, 1);
        t = not_null(u_9);
      }
    else
      {
        if(match_cons(t_9, sym_DefaultVarDec_1))
          {
            u_9 = ATgetArgument(t_9, 0);
            t = not_null(u_9);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1(t, e_0);
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
          ATerm f_0 (ATerm t)
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
          t = map_1(t, f_0);
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
  ATerm f_11 = NULL,g_11 = NULL;
  f_11 = t;
  e_11 :
  if(match_cons(f_11, sym_SVar_1))
    {
      g_11 = ATgetArgument(f_11, 0);
      t = (ATerm) ATinsert(ATempty, not_null(g_11));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm r_89 (ATerm))
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
  l_11 = t;
  k_11 :
  if(match_cons(l_11, sym__2))
    {
      m_11 = ATgetArgument(l_11, 0);
      n_11 = ATgetArgument(l_11, 1);
      {
        t = not_null(m_11);
        {
          ATerm r_11 (ATerm t)
          {
            ATerm x_4 = t;
            int y_4 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(n_11);
                ;
                LocalPopChoice(y_4);
              }
            else
              {
                t = x_4;
                {
                  ATerm z_4 = t;
                  int a_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_0 (ATerm t)
                      {
                        t = not_null(n_11);
                        return(t);
                      }
                      t = HdMember_p__2(t, r_89, h_0);
                      t = r_11(t);
                      ;
                      LocalPopChoice(a_5);
                    }
                  else
                    {
                      t = z_4;
                      t = Cons_2(t, _id, r_11);
                    }
                }
              }
            return(t);
          }
          t = r_11(t);
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
ATerm foldr_3 (ATerm t, ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm i_92 (ATerm))
{
  ATerm h_5 = t;
  int i_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_92(t);
      ;
      LocalPopChoice(i_5);
    }
  else
    {
      t = h_5;
      {
        ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
        w_11 = t;
        v_11 :
        if(((ATgetType(w_11) == AT_LIST) && !(ATisEmpty(w_11))))
          {
            x_11 = ATgetFirst((ATermList) w_11);
            y_11 = (ATerm) ATgetNext((ATermList) w_11);
            {
              ATerm b_12 = NULL,d_12 = NULL;
              ATerm j_5;
              j_5 = t;
              {
                ATerm c_12 = NULL;
                t = not_null(x_11);
                {
                  t = i_92(t);
                  {
                    c_12 = t;
                    if(((b_12 != NULL) && (b_12 != c_12)))
                      _fail(c_12);
                    else
                      b_12 = c_12;
                  }
                }
              }
              t = j_5;
              {
                ATerm e_12 = NULL;
                t = not_null(y_11);
                {
                  t = foldr_3(t, g_92, h_92, i_92);
                  {
                    e_12 = t;
                    if(((d_12 != NULL) && (d_12 != e_12)))
                      _fail(e_12);
                    else
                      d_12 = e_12;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_12), not_null(d_12));
                  t = h_92(t);
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
ATerm crush_3 (ATerm t, ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm g_90 (ATerm))
{
  ATerm m_12 = NULL;
  ATerm o_12 = NULL;
  m_12 = t;
  {
    ATerm p_12 = NULL;
    ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
    t = not_null(m_12);
    {
      p_12 = t;
      {
        t = SSL_explode_term(not_null(p_12));
        {
          r_12 = t;
          l_12 :
          if(match_cons(r_12, sym__2))
            {
              s_12 = ATgetArgument(r_12, 0);
              t_12 = ATgetArgument(r_12, 1);
              if(((o_12 != NULL) && (o_12 != t_12)))
                _fail(t_12);
              else
                o_12 = t_12;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(o_12);
      t = foldr_3(t, e_90, f_90, g_90);
    }
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm k_96 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm a_13 (ATerm t)
  {
    ATerm k_5 = t;
    int l_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_96(t);
        ;
        LocalPopChoice(l_5);
      }
    else
      {
        t = k_5;
        {
          ATerm p_5 = t;
          int r_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_12 = NULL;
              ATerm t_5;
              t_5 = t;
              {
                ATerm z_12 = NULL;
                t = j_96(t);
                {
                  z_12 = t;
                  if(((y_12 != NULL) && (y_12 != z_12)))
                    _fail(z_12);
                  else
                    y_12 = z_12;
                }
              }
              t = t_5;
              {
                ATerm m_0 (ATerm t)
                {
                  ATerm o_0 (ATerm t)
                  {
                    t = not_null(y_12);
                    return(t);
                  }
                  t = split_2(t, a_13, o_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm n_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = k_96(t, m_0, a_13, n_0);
                {
                  ATerm p_0 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, p_0, union_0, _id);
                }
              }
              ;
              LocalPopChoice(r_5);
            }
          else
            {
              t = p_5;
              {
                ATerm q_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, q_0, union_0, a_13);
              }
            }
        }
      }
    return(t);
  }
  t = a_13(t);
  return(t);
}
ATerm svars_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm v_5 = t;
    int y_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(y_5);
      }
    else
      {
        t = v_5;
        {
          ATerm z_5 = t;
          int a_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(a_6);
            }
          else
            {
              t = z_5;
              {
                ATerm b_6 = t;
                int c_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0(t);
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
                          t = Bind5_0(t);
                          ;
                          LocalPopChoice(e_6);
                        }
                      else
                        {
                          t = d_6;
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
  t = free_vars_3(t, Add2_0, r_0, sboundin_3);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
  e_13 = t;
  d_13 :
  if(((ATgetType(e_13) == AT_LIST) && !(ATisEmpty(e_13))))
    {
      f_13 = ATgetFirst((ATermList) e_13);
      g_13 = (ATerm) ATgetNext((ATermList) e_13);
      t = not_null(f_13);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
  l_13 = t;
  k_13 :
  if(match_cons(l_13, sym__2))
    {
      m_13 = ATgetArgument(l_13, 0);
      n_13 = ATgetArgument(l_13, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_13), not_null(n_13));
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
ATerm rewrite_1 (ATerm t, ATerm r_93 (ATerm))
{
  ATerm t_13 = NULL;
  ATerm v_13 = NULL;
  t_13 = t;
  {
    ATerm w_13 = NULL;
    t = term_f_6;
    {
      t = r_93(t);
      {
        w_13 = t;
        if(((v_13 != NULL) && (v_13 != w_13)))
          _fail(w_13);
        else
          v_13 = w_13;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_13), not_null(t_13));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definition_0 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
  e_14 = t;
  d_14 :
  if(match_cons(e_14, sym__2))
    {
      f_14 = ATgetArgument(e_14, 0);
      g_14 = ATgetArgument(e_14, 1);
      {
        ATerm j_14 = NULL;
        ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_14), (ATerm) ATempty);
        {
          ATerm s_0 (ATerm t)
          {
            t = term_g_6;
            return(t);
          }
          t = rewrite_1(t, s_0);
          {
            k_14 = t;
            b_14 :
            if(match_cons(k_14, sym_Defined_2))
              {
                l_14 = ATgetArgument(k_14, 0);
                m_14 = ATgetArgument(k_14, 1);
                c_14 :
                if(match_string(l_14, "c_0"))
                  {
                    if(((j_14 != NULL) && (j_14 != m_14)))
                      _fail(m_14);
                    else
                      j_14 = m_14;
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
        t = not_null(j_14);
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
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL;
  s_14 = t;
  q_14 :
  if(match_cons(s_14, sym__5))
    {
      t_14 = ATgetArgument(s_14, 0);
      w_14 = ATgetArgument(s_14, 1);
      x_14 = ATgetArgument(s_14, 2);
      y_14 = ATgetArgument(s_14, 3);
      z_14 = ATgetArgument(s_14, 4);
      r_14 :
      if(((ATgetType(t_14) == AT_LIST) && !(ATisEmpty(t_14))))
        {
          u_14 = ATgetFirst((ATermList) t_14);
          v_14 = (ATerm) ATgetNext((ATermList) t_14);
          t = (ATerm) ATmakeAppl(sym__5, not_null(v_14), not_null(w_14), not_null(x_14), not_null(y_14), (ATerm) ATinsert(CheckATermList(not_null(z_14)), not_null(u_14)));
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
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
  j_15 = t;
  i_15 :
  if(match_cons(j_15, sym__2))
    {
      k_15 = ATgetArgument(j_15, 0);
      l_15 = ATgetArgument(j_15, 1);
      if(((k_15 != NULL) && (k_15 != l_15)))
        _fail(l_15);
      else
        k_15 = l_15;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm v_89 (ATerm), ATerm w_89 (ATerm))
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL;
  r_15 = t;
  q_15 :
  if(((ATgetType(r_15) == AT_LIST) && !(ATisEmpty(r_15))))
    {
      s_15 = ATgetFirst((ATermList) r_15);
      t_15 = (ATerm) ATgetNext((ATermList) r_15);
      {
        t = w_89(t);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm w_15 = NULL;
            w_15 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_15), not_null(w_15));
              t = v_89(t);
            }
            return(t);
          }
          t = fetch_1(t, t_0);
        }
        t = not_null(t_15);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm n_89 (ATerm))
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  c_16 = t;
  b_16 :
  if(match_cons(c_16, sym__2))
    {
      d_16 = ATgetArgument(c_16, 0);
      e_16 = ATgetArgument(c_16, 1);
      {
        t = not_null(d_16);
        {
          ATerm i_16 (ATerm t)
          {
            ATerm h_6 = t;
            int i_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
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
                      ATerm u_0 (ATerm t)
                      {
                        t = not_null(e_16);
                        return(t);
                      }
                      t = HdMember_p__2(t, n_89, u_0);
                      t = i_16(t);
                      ;
                      LocalPopChoice(k_6);
                    }
                  else
                    {
                      t = j_6;
                      t = Cons_2(t, _id, i_16);
                    }
                }
              }
            return(t);
          }
          t = i_16(t);
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
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
  m_16 = t;
  k_16 :
  if(match_cons(m_16, sym__2))
    {
      n_16 = ATgetArgument(m_16, 0);
      o_16 = ATgetArgument(m_16, 1);
      l_16 :
      if(((ATgetType(o_16) == AT_LIST) && !(ATisEmpty(o_16))))
        {
          p_16 = ATgetFirst((ATermList) o_16);
          q_16 = (ATerm) ATgetNext((ATermList) o_16);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_16)), not_null(p_16)), not_null(q_16));
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
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL;
  x_16 = t;
  w_16 :
  if(match_cons(x_16, sym__2))
    {
      y_16 = ATgetArgument(x_16, 0);
      z_16 = ATgetArgument(x_16, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_16)), not_null(y_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  h_17 = t;
  e_17 :
  if(match_cons(h_17, sym__2))
    {
      i_17 = ATgetArgument(h_17, 0);
      l_17 = ATgetArgument(h_17, 1);
      f_17 :
      if(((ATgetType(i_17) == AT_LIST) && !(ATisEmpty(i_17))))
        {
          j_17 = ATgetFirst((ATermList) i_17);
          k_17 = (ATerm) ATgetNext((ATermList) i_17);
          g_17 :
          if(((ATgetType(l_17) == AT_LIST) && !(ATisEmpty(l_17))))
            {
              m_17 = ATgetFirst((ATermList) l_17);
              n_17 = (ATerm) ATgetNext((ATermList) l_17);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(j_17), not_null(m_17)), (ATerm) ATmakeAppl(sym__2, not_null(k_17), not_null(n_17)));
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
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
  x_17 = t;
  u_17 :
  if(match_cons(x_17, sym__2))
    {
      y_17 = ATgetArgument(x_17, 0);
      z_17 = ATgetArgument(x_17, 1);
      v_17 :
      if(((ATgetType(y_17) == AT_LIST) && ATisEmpty(y_17)))
        {
          w_17 :
          if(((ATgetType(z_17) == AT_LIST) && ATisEmpty(z_17)))
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
ATerm genzip_4 (ATerm t, ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm s_85 (ATerm), ATerm t_85 (ATerm))
{
  ATerm b_18 (ATerm t)
  {
    ATerm q_6 = t;
    int r_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_85(t);
        ;
        LocalPopChoice(r_6);
      }
    else
      {
        t = q_6;
        {
          t = r_85(t);
          {
            t = _2(t, t_85, b_18);
            t = s_85(t);
          }
        }
      }
    return(t);
  }
  t = b_18(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm v_85 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, v_85);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  m_18 = t;
  k_18 :
  if(((ATgetType(m_18) == AT_LIST) && !(ATisEmpty(m_18))))
    {
      n_18 = ATgetFirst((ATermList) m_18);
      q_18 = (ATerm) ATgetNext((ATermList) m_18);
      l_18 :
      if(match_cons(n_18, sym__2))
        {
          o_18 = ATgetArgument(n_18, 0);
          p_18 = ATgetArgument(n_18, 1);
          {
            ATerm u_18 = NULL,v_18 = NULL,b_19 = NULL,h_19 = NULL;
            ATerm s_6;
            s_6 = t;
            {
              ATerm w_18 = NULL;
              ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
              t = not_null(p_18);
              {
                w_18 = t;
                {
                  t = SSL_explode_term(not_null(w_18));
                  {
                    y_18 = t;
                    f_18 :
                    if(match_cons(y_18, sym__2))
                      {
                        z_18 = ATgetArgument(y_18, 0);
                        a_19 = ATgetArgument(y_18, 1);
                        {
                          if(((u_18 != NULL) && (u_18 != z_18)))
                            _fail(z_18);
                          else
                            u_18 = z_18;
                          if(((v_18 != NULL) && (v_18 != a_19)))
                            _fail(a_19);
                          else
                            v_18 = a_19;
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
            t = s_6;
            {
              ATerm t_6;
              t_6 = t;
              {
                ATerm c_19 = NULL;
                ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
                t = not_null(o_18);
                {
                  c_19 = t;
                  {
                    t = SSL_explode_term(not_null(c_19));
                    {
                      e_19 = t;
                      i_18 :
                      if(match_cons(e_19, sym__2))
                        {
                          f_19 = ATgetArgument(e_19, 0);
                          g_19 = ATgetArgument(e_19, 1);
                          {
                            if(((u_18 != NULL) && (u_18 != f_19)))
                              _fail(f_19);
                            else
                              u_18 = f_19;
                            if(((b_19 != NULL) && (b_19 != g_19)))
                              _fail(g_19);
                            else
                              b_19 = g_19;
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
              t = t_6;
              {
                ATerm i_19 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), not_null(v_18));
                {
                  t = zip_1(t, _id);
                  {
                    i_19 = t;
                    if(((h_19 != NULL) && (h_19 != i_19)))
                      _fail(i_19);
                    else
                      h_19 = i_19;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_19), not_null(q_18));
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
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL;
  s_19 = t;
  q_19 :
  if(((ATgetType(s_19) == AT_LIST) && !(ATisEmpty(s_19))))
    {
      t_19 = ATgetFirst((ATermList) s_19);
      w_19 = (ATerm) ATgetNext((ATermList) s_19);
      r_19 :
      if(match_cons(t_19, sym__2))
        {
          u_19 = ATgetArgument(t_19, 0);
          v_19 = ATgetArgument(t_19, 1);
          {
            ATerm y_19 = NULL;
            if(((u_19 != NULL) && (u_19 != v_19)))
              _fail(v_19);
            else
              u_19 = v_19;
            {
              if(((y_19 != NULL) && (y_19 != w_19)))
                _fail(w_19);
              else
                y_19 = w_19;
              t = not_null(y_19);
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
  ATerm x_6 = t;
  int z_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_0 (ATerm t)
      {
        ATerm b_20 = NULL;
        b_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(b_20));
        return(t);
      }
      ATerm w_0 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm x_0 (ATerm t)
      {
        ATerm b_7 = t;
        int e_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              ATerm f_7 = t;
              int g_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(g_7);
                }
              else
                {
                  t = f_7;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, y_0);
            ;
            LocalPopChoice(e_7);
          }
        else
          {
            t = b_7;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, v_0, w_0, x_0);
      ;
      LocalPopChoice(z_6);
    }
  else
    {
      t = x_6;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNext_3 (ATerm t, ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm b_110 (ATerm))
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL;
  n_20 = t;
  l_20 :
  if(match_cons(n_20, sym__5))
    {
      o_20 = ATgetArgument(n_20, 0);
      r_20 = ATgetArgument(n_20, 1);
      s_20 = ATgetArgument(n_20, 2);
      t_20 = ATgetArgument(n_20, 3);
      u_20 = ATgetArgument(n_20, 4);
      m_20 :
      if(((ATgetType(o_20) == AT_LIST) && !(ATisEmpty(o_20))))
        {
          p_20 = ATgetFirst((ATermList) o_20);
          q_20 = (ATerm) ATgetNext((ATermList) o_20);
          {
            ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,h_21 = NULL,j_21 = NULL,l_21 = NULL;
            ATerm h_7;
            h_7 = t;
            {
              ATerm e_21 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_20), not_null(s_20));
              {
                ATerm f_21 = NULL;
                t = z_109(t);
                {
                  e_21 = t;
                  {
                    if(((b_21 != NULL) && (b_21 != e_21)))
                      _fail(e_21);
                    else
                      b_21 = e_21;
                    {
                      t = not_null(b_21);
                      {
                        ATerm g_21 = NULL;
                        t = a_110(t);
                        {
                          f_21 = t;
                          {
                            if(((c_21 != NULL) && (c_21 != f_21)))
                              _fail(f_21);
                            else
                              c_21 = f_21;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(c_21), not_null(r_20));
                              {
                                t = diff_0(t);
                                {
                                  g_21 = t;
                                  if(((d_21 != NULL) && (d_21 != g_21)))
                                    _fail(g_21);
                                  else
                                    d_21 = g_21;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = h_7;
            {
              ATerm i_7;
              i_7 = t;
              {
                ATerm i_21 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_21), not_null(q_20));
                {
                  t = conc_0(t);
                  {
                    i_21 = t;
                    if(((h_21 != NULL) && (h_21 != i_21)))
                      _fail(i_21);
                    else
                      h_21 = i_21;
                  }
                }
              }
              t = i_7;
              {
                ATerm j_7;
                j_7 = t;
                {
                  ATerm k_21 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_21), not_null(r_20));
                  {
                    t = conc_0(t);
                    {
                      k_21 = t;
                      if(((j_21 != NULL) && (j_21 != k_21)))
                        _fail(k_21);
                      else
                        j_21 = k_21;
                    }
                  }
                }
                t = j_7;
                {
                  ATerm m_21 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(p_20), not_null(b_21), not_null(t_20));
                  {
                    t = b_110(t);
                    {
                      m_21 = t;
                      if(((l_21 != NULL) && (l_21 != m_21)))
                        _fail(m_21);
                      else
                        l_21 = m_21;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(h_21), not_null(j_21), not_null(s_20), not_null(l_21), not_null(u_20));
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
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
  x_21 = t;
  v_21 :
  if(match_cons(x_21, sym__5))
    {
      y_21 = ATgetArgument(x_21, 0);
      z_21 = ATgetArgument(x_21, 1);
      a_22 = ATgetArgument(x_21, 2);
      b_22 = ATgetArgument(x_21, 3);
      c_22 = ATgetArgument(x_21, 4);
      w_21 :
      if(((ATgetType(y_21) == AT_LIST) && ATisEmpty(y_21)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_22), not_null(c_22));
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
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL;
  k_22 = t;
  j_22 :
  if(match_cons(k_22, sym__3))
    {
      l_22 = ATgetArgument(k_22, 0);
      m_22 = ATgetArgument(k_22, 1);
      n_22 = ATgetArgument(k_22, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(l_22), not_null(l_22), not_null(m_22), not_null(n_22), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm o_98 (ATerm), ATerm p_98 (ATerm))
{
  ATerm s_22 (ATerm t)
  {
    ATerm k_7 = t;
    int l_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_98(t);
        ;
        LocalPopChoice(l_7);
      }
    else
      {
        t = k_7;
        {
          t = p_98(t);
          t = s_22(t);
        }
      }
    return(t);
  }
  t = s_22(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t_98 (ATerm))
{
  t = r_98(t);
  t = while_not_2(t, s_98, t_98);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm j_109 (ATerm))
{
  ATerm z_0 (ATerm t)
  {
    ATerm m_7 = t;
    int n_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3(t, h_109, i_109, j_109);
        ;
        LocalPopChoice(n_7);
      }
    else
      {
        t = m_7;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, z_0);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm y_109 (ATerm))
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
  t = graph_nodes_undef_roots_3(t, w_109, x_109, y_109);
  {
    v_22 = t;
    u_22 :
    if(match_cons(v_22, sym__2))
      {
        w_22 = ATgetArgument(v_22, 0);
        x_22 = ATgetArgument(v_22, 1);
        t = not_null(w_22);
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm p_93 (ATerm))
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL;
  g_23 = t;
  f_23 :
  if(match_cons(g_23, sym__2))
    {
      h_23 = ATgetArgument(g_23, 0);
      i_23 = ATgetArgument(g_23, 1);
      {
        ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
        ATerm o_7;
        o_7 = t;
        {
          ATerm o_23 = NULL;
          ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
          t = p_93(t);
          {
            o_23 = t;
            {
              if(((l_23 != NULL) && (l_23 != o_23)))
                _fail(o_23);
              else
                l_23 = o_23;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(l_23), not_null(h_23), not_null(i_23));
                {
                  t = table_push_0(t);
                  {
                    ATerm t_7 = t;
                    int u_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_23), term_v_7);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(u_7);
                      }
                    else
                      {
                        t = t_7;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      p_23 = t;
                      e_23 :
                      if(((ATgetType(p_23) == AT_LIST) && !(ATisEmpty(p_23))))
                        {
                          q_23 = ATgetFirst((ATermList) p_23);
                          r_23 = (ATerm) ATgetNext((ATermList) p_23);
                          {
                            if(((m_23 != NULL) && (m_23 != q_23)))
                              _fail(q_23);
                            else
                              m_23 = q_23;
                            {
                              if(((n_23 != NULL) && (n_23 != r_23)))
                                _fail(r_23);
                              else
                                n_23 = r_23;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(l_23), term_v_7, (ATerm) ATinsert(CheckATermList(not_null(n_23)), (ATerm) ATinsert(CheckATermList(not_null(m_23)), not_null(h_23))));
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
        t = o_7;
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
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL;
  x_23 = t;
  w_23 :
  if(match_cons(x_23, sym_SDefT_4))
    {
      y_23 = ATgetArgument(x_23, 0);
      z_23 = ATgetArgument(x_23, 1);
      a_24 = ATgetArgument(x_23, 2);
      b_24 = ATgetArgument(x_23, 3);
      {
        ATerm z_7;
        z_7 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(y_23), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_b_8, not_null(x_23)));
          {
            ATerm a_1 (ATerm t)
            {
              t = term_g_6;
              return(t);
            }
            t = assert_1(t, a_1);
          }
        }
        t = z_7;
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
  ATerm l_24 = NULL;
  ATerm m_24 = NULL;
  t = map_1(t, RegisterDefinition_0);
  {
    m_24 = t;
    if(((l_24 != NULL) && (l_24 != m_24)))
      _fail(m_24);
    else
      l_24 = m_24;
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_e_8), not_null(l_24), (ATerm) ATempty);
    {
      ATerm b_1 (ATerm t)
      {
        ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
        n_24 = t;
        k_24 :
        if(match_cons(n_24, sym__3))
          {
            o_24 = ATgetArgument(n_24, 0);
            p_24 = ATgetArgument(n_24, 1);
            q_24 = ATgetArgument(n_24, 2);
            t = (ATerm) ATinsert(CheckATermList(not_null(q_24)), not_null(p_24));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = graph_nodes_roots_3(t, Definition_0, svars_0, b_1);
    }
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm m_66 (ATerm))
{
  ATerm a_25 = NULL,b_25 = NULL;
  a_25 = t;
  z_24 :
  if(match_cons(a_25, sym_Strategies_1))
    {
      b_25 = ATgetArgument(a_25, 0);
      {
        ATerm e_25 = NULL,g_25 = NULL;
        ATerm f_25 = NULL;
        t = SSLgetAnnotations(not_null(a_25));
        {
          f_25 = t;
          if(((e_25 != NULL) && (e_25 != f_25)))
            _fail(f_25);
          else
            e_25 = f_25;
        }
        {
          t = not_null(b_25);
          {
            ATerm i_25 = NULL;
            t = m_66(t);
            {
              g_25 = t;
              {
                ATerm j_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(g_25)), not_null(e_25));
                {
                  j_25 = t;
                  if(((i_25 != NULL) && (i_25 != j_25)))
                    _fail(j_25);
                  else
                    i_25 = j_25;
                }
                t = not_null(i_25);
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
ATerm Cons_2 (ATerm t, ATerm i_66 (ATerm), ATerm j_66 (ATerm))
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  u_25 = t;
  t_25 :
  if(((ATgetType(u_25) == AT_LIST) && !(ATisEmpty(u_25))))
    {
      v_25 = ATgetFirst((ATermList) u_25);
      w_25 = (ATerm) ATgetNext((ATermList) u_25);
      {
        ATerm a_26 = NULL,c_26 = NULL;
        ATerm b_26 = NULL;
        t = SSLgetAnnotations(not_null(u_25));
        {
          b_26 = t;
          if(((a_26 != NULL) && (a_26 != b_26)))
            _fail(b_26);
          else
            a_26 = b_26;
        }
        {
          t = not_null(v_25);
          {
            ATerm e_26 = NULL;
            t = i_66(t);
            {
              c_26 = t;
              {
                t = not_null(w_25);
                {
                  ATerm g_26 = NULL;
                  t = j_66(t);
                  {
                    e_26 = t;
                    {
                      ATerm h_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_26)), not_null(c_26)), not_null(a_26));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm r_66 (ATerm))
{
  ATerm s_26 = NULL,t_26 = NULL;
  s_26 = t;
  r_26 :
  if(match_cons(s_26, sym_Specification_1))
    {
      t_26 = ATgetArgument(s_26, 0);
      {
        ATerm w_26 = NULL,y_26 = NULL;
        ATerm x_26 = NULL;
        t = SSLgetAnnotations(not_null(s_26));
        {
          x_26 = t;
          if(((w_26 != NULL) && (w_26 != x_26)))
            _fail(x_26);
          else
            w_26 = x_26;
        }
        {
          t = not_null(t_26);
          {
            ATerm a_27 = NULL;
            t = r_66(t);
            {
              y_26 = t;
              {
                ATerm b_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(y_26)), not_null(w_26));
                {
                  b_27 = t;
                  if(((a_27 != NULL) && (a_27 != b_27)))
                    _fail(b_27);
                  else
                    a_27 = b_27;
                }
                t = not_null(a_27);
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
ATerm _2 (ATerm t, ATerm z_64 (ATerm), ATerm a_65 (ATerm))
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
  w_27 = t;
  v_27 :
  if(match_cons(w_27, sym__2))
    {
      x_27 = ATgetArgument(w_27, 0);
      y_27 = ATgetArgument(w_27, 1);
      {
        ATerm c_28 = NULL,e_28 = NULL;
        ATerm d_28 = NULL;
        t = SSLgetAnnotations(not_null(w_27));
        {
          d_28 = t;
          if(((c_28 != NULL) && (c_28 != d_28)))
            _fail(d_28);
          else
            c_28 = d_28;
        }
        {
          t = not_null(x_27);
          {
            ATerm g_28 = NULL;
            t = z_64(t);
            {
              e_28 = t;
              {
                t = not_null(y_27);
                {
                  ATerm i_28 = NULL;
                  t = a_65(t);
                  {
                    g_28 = t;
                    {
                      ATerm j_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(e_28), not_null(g_28)), not_null(c_28));
                      {
                        j_28 = t;
                        if(((i_28 != NULL) && (i_28 != j_28)))
                          _fail(j_28);
                        else
                          i_28 = j_28;
                      }
                      t = not_null(i_28);
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
  ATerm f_8;
  f_8 = t;
  {
    ATerm b_29 = NULL;
    ATerm c_29 = NULL;
    t = term_f_6;
    {
      t = whoami_0(t);
      {
        c_29 = t;
        if(((b_29 != NULL) && (b_29 != c_29)))
          _fail(c_29);
        else
          b_29 = c_29;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_8), not_null(b_29)), term_h_8));
      {
        t = printnl_0(t);
        {
          t = term_j_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL;
  k_29 = t;
  j_29 :
  if(match_cons(k_29, sym__2))
    {
      l_29 = ATgetArgument(k_29, 0);
      m_29 = ATgetArgument(k_29, 1);
      {
        ATerm q_8;
        q_8 = t;
        t = SSL_printnl(not_null(l_29), not_null(m_29));
        t = q_8;
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
  ATerm s_29 = NULL;
  s_29 = t;
  t = SSL_implode_string(not_null(s_29));
  return(t);
}
ATerm concat_0 (ATerm t)
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
      {
        ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
        x_29 = t;
        w_29 :
        if(((ATgetType(x_29) == AT_LIST) && !(ATisEmpty(x_29))))
          {
            y_29 = ATgetFirst((ATermList) x_29);
            z_29 = (ATerm) ATgetNext((ATermList) x_29);
            {
              t = not_null(y_29);
              {
                ATerm c_1 (ATerm t)
                {
                  t = not_null(z_29);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, c_1);
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
  ATerm k_30 = NULL;
  ATerm m_30 = NULL;
  k_30 = t;
  {
    ATerm n_30 = NULL;
    ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
    t = not_null(k_30);
    {
      n_30 = t;
      {
        t = SSL_explode_term(not_null(n_30));
        {
          p_30 = t;
          i_30 :
          if(match_cons(p_30, sym__2))
            {
              q_30 = ATgetArgument(p_30, 0);
              r_30 = ATgetArgument(p_30, 1);
              j_30 :
              if(match_string(q_30, ""))
                {
                  if(((m_30 != NULL) && (m_30 != r_30)))
                    _fail(r_30);
                  else
                    m_30 = r_30;
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
      t = not_null(m_30);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm v_87 (ATerm))
{
  ATerm v_30 (ATerm t)
  {
    ATerm t_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, v_30);
        ;
        LocalPopChoice(u_8);
      }
    else
      {
        t = t_8;
        {
          t = Nil_0(t);
          t = v_87(t);
        }
      }
    return(t);
  }
  t = v_30(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
  a_31 = t;
  z_30 :
  if(match_cons(a_31, sym__2))
    {
      b_31 = ATgetArgument(a_31, 0);
      c_31 = ATgetArgument(a_31, 1);
      {
        t = not_null(b_31);
        {
          ATerm d_1 (ATerm t)
          {
            t = not_null(c_31);
            return(t);
          }
          t = at_end_1(t, d_1);
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
  ATerm v_8 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(c_9);
    }
  else
    {
      t = v_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm h_31 = NULL;
  h_31 = t;
  t = SSL_explode_string(not_null(h_31));
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
  ATerm d_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
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
            ATerm e_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, e_1);
            ;
            LocalPopChoice(g_9);
          }
        else
          {
            t = f_9;
            {
              ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
              q_31 = t;
              p_31 :
              if(match_cons(q_31, sym_Path_1))
                {
                  r_31 = ATgetArgument(q_31, 0);
                  t = not_null(r_31);
                }
              else
                {
                  if(match_cons(q_31, sym_Var_1))
                    {
                      r_31 = ATgetArgument(q_31, 0);
                      {
                        t = not_null(r_31);
                        {
                          ATerm h_9 = t;
                          int m_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(m_9);
                            }
                          else
                            {
                              t = h_9;
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  t = term_n_9;
                                  return(t);
                                }
                                t = debug_1(t, f_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(q_31, sym_Prefix_2))
                        {
                          r_31 = ATgetArgument(q_31, 0);
                          s_31 = ATgetArgument(q_31, 1);
                          {
                            ATerm x_31 = NULL,z_31 = NULL;
                            ATerm o_9;
                            o_9 = t;
                            {
                              ATerm y_31 = NULL;
                              t = not_null(r_31);
                              {
                                t = eval_config_0(t);
                                {
                                  y_31 = t;
                                  if(((x_31 != NULL) && (x_31 != y_31)))
                                    _fail(y_31);
                                  else
                                    x_31 = y_31;
                                }
                              }
                            }
                            t = o_9;
                            {
                              ATerm a_32 = NULL;
                              t = not_null(s_31);
                              {
                                t = eval_config_0(t);
                                {
                                  a_32 = t;
                                  if(((z_31 != NULL) && (z_31 != a_32)))
                                    _fail(a_32);
                                  else
                                    z_31 = a_32;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_31), not_null(z_31));
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
  ATerm i_32 = NULL;
  i_32 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_9, not_null(i_32));
    {
      t = table_get_0(t);
      {
        ATerm g_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm q_9;
            q_9 = t;
            {
              ATerm k_32 = NULL;
              ATerm l_32 = NULL;
              l_32 = t;
              if(((k_32 != NULL) && (k_32 != l_32)))
                _fail(l_32);
              else
                k_32 = l_32;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_p_9, not_null(i_32), not_null(k_32));
                t = table_put_0(t);
              }
            }
            t = q_9;
          }
          return(t);
        }
        t = try_1(t, g_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm x_103 (ATerm))
{
  ATerm h_1 (ATerm t)
  {
    ATerm v_9;
    v_9 = t;
    {
      ATerm p_32 = NULL;
      ATerm q_32 = NULL;
      t = term_w_9;
      {
        t = get_config_0(t);
        {
          q_32 = t;
          if(((p_32 != NULL) && (p_32 != q_32)))
            _fail(q_32);
          else
            p_32 = q_32;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_32), term_x_9);
        t = geq_0(t);
      }
    }
    t = v_9;
    t = x_103(t);
    return(t);
  }
  t = try_1(t, h_1);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
  w_32 = t;
  u_32 :
  if(match_cons(w_32, sym__2))
    {
      x_32 = ATgetArgument(w_32, 0);
      y_32 = ATgetArgument(w_32, 1);
      v_32 :
      if(match_cons(y_32, sym_Stream_1))
        {
          z_32 = ATgetArgument(y_32, 0);
          {
            ATerm c_33 = NULL;
            t = SSL_fputc(not_null(x_32), not_null(z_32));
            {
              ATerm h_33 = NULL;
              h_33 = t;
              if(((c_33 != NULL) && (c_33 != h_33)))
                _fail(h_33);
              else
                c_33 = h_33;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_33));
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
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL;
  q_33 = t;
  m_33 :
  if(match_cons(q_33, sym__2))
    {
      r_33 = ATgetArgument(q_33, 0);
      t_33 = ATgetArgument(q_33, 1);
      p_33 :
      if(match_cons(r_33, sym_Stream_1))
        {
          s_33 = ATgetArgument(r_33, 0);
          {
            ATerm w_33 = NULL;
            t = SSL_write_term_to_stream_text(not_null(s_33), not_null(t_33));
            {
              ATerm x_33 = NULL;
              x_33 = t;
              if(((w_33 != NULL) && (w_33 != x_33)))
                _fail(x_33);
              else
                w_33 = x_33;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_33));
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
  ATerm i_1 (ATerm t)
  {
    ATerm b_34 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm c_34 = NULL;
      c_34 = t;
      if(((b_34 != NULL) && (b_34 != c_34)))
        _fail(c_34);
      else
        b_34 = c_34;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_9, not_null(b_34));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, i_1);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL;
  i_34 = t;
  g_34 :
  if(match_cons(i_34, sym__2))
    {
      j_34 = ATgetArgument(i_34, 0);
      l_34 = ATgetArgument(i_34, 1);
      h_34 :
      if(match_cons(j_34, sym_Stream_1))
        {
          k_34 = ATgetArgument(j_34, 0);
          {
            ATerm o_34 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(k_34), not_null(l_34));
            {
              ATerm p_34 = NULL;
              p_34 = t;
              if(((o_34 != NULL) && (o_34 != p_34)))
                _fail(p_34);
              else
                o_34 = p_34;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_34));
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
ATerm WriteToFile_1 (ATerm t, ATerm t_102 (ATerm))
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
  b_35 = t;
  a_35 :
  if(match_cons(b_35, sym__2))
    {
      c_35 = ATgetArgument(b_35, 0);
      d_35 = ATgetArgument(b_35, 1);
      {
        ATerm g_35 = NULL,i_35 = NULL;
        t = not_null(c_35);
        {
          ATerm h_35 = NULL;
          h_35 = t;
          if(((g_35 != NULL) && (g_35 != h_35)))
            _fail(h_35);
          else
            g_35 = h_35;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_35), term_z_9);
            {
              t = open_stream_0(t);
              {
                ATerm j_35 = NULL;
                j_35 = t;
                if(((i_35 != NULL) && (i_35 != j_35)))
                  _fail(j_35);
                else
                  i_35 = j_35;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_35), not_null(d_35));
                  {
                    t = t_102(t);
                    {
                      t = fclose_0(t);
                      t = not_null(d_35);
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
  ATerm v_35 = NULL;
  ATerm f_10;
  f_10 = t;
  {
    ATerm j_1 (ATerm t)
    {
      ATerm g_10 = t;
      int h_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_1 (ATerm t)
          {
            ATerm w_35 = NULL,x_35 = NULL;
            w_35 = t;
            s_35 :
            if(match_cons(w_35, sym_Output_1))
              {
                x_35 = ATgetArgument(w_35, 0);
                if(((v_35 != NULL) && (v_35 != x_35)))
                  _fail(x_35);
                else
                  v_35 = x_35;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, k_1);
          ;
          LocalPopChoice(h_10);
        }
      else
        {
          t = g_10;
          {
            ATerm y_35 = NULL;
            t = term_i_10;
            {
              y_35 = t;
              if(((v_35 != NULL) && (v_35 != y_35)))
                _fail(y_35);
              else
                v_35 = y_35;
            }
          }
        }
      return(t);
    }
    t = _2(t, j_1, _id);
  }
  t = f_10;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm m_1 (ATerm t)
      {
        t = not_null(v_35);
        return(t);
      }
      t = split_2(t, m_1, _id);
      return(t);
    }
    t = _2(t, _id, l_1);
    {
      ATerm j_10 = t;
      int k_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_1 (ATerm t)
          {
            ATerm o_1 (ATerm t)
            {
              ATerm z_35 = NULL;
              z_35 = t;
              u_35 :
              if(!(match_cons(z_35, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, o_1);
            return(t);
          }
          t = _2(t, n_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(k_10);
        }
      else
        {
          t = j_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm v_105 (ATerm))
{
  ATerm f_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL;
  ATerm l_10;
  l_10 = t;
  t = dtime_0(t);
  t = l_10;
  {
    t = v_105(t);
    {
      ATerm r_10;
      r_10 = t;
      {
        ATerm g_36 = NULL;
        t = dtime_0(t);
        {
          g_36 = t;
          if(((f_36 != NULL) && (f_36 != g_36)))
            _fail(g_36);
          else
            f_36 = g_36;
        }
      }
      t = r_10;
      {
        h_36 = t;
        e_36 :
        if(match_cons(h_36, sym__2))
          {
            i_36 = ATgetArgument(h_36, 0);
            j_36 = ATgetArgument(h_36, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_36)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(f_36))), not_null(j_36));
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
  ATerm r_36 = NULL,s_36 = NULL;
  ATerm h_37 (ATerm t)
  {
    t = SSL_fclose(not_null(s_36));
    return(t);
  }
  s_36 = t;
  q_36 :
  if(match_cons(s_36, sym_Stream_1))
    {
      r_36 = ATgetArgument(s_36, 0);
      {
        ATerm s_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(r_36));
            ;
            LocalPopChoice(y_10);
          }
        else
          {
            t = s_10;
            t = h_37(t);
          }
      }
    }
  else
    {
      t = h_37(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL;
  k_37 = t;
  j_37 :
  if(match_cons(k_37, sym_Stream_1))
    {
      l_37 = ATgetArgument(k_37, 0);
      t = SSL_read_term_from_stream(not_null(l_37));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm f_102 (ATerm))
{
  ATerm z_10;
  z_10 = t;
  {
    ATerm q_37 = NULL,s_37 = NULL;
    ATerm a_11;
    a_11 = t;
    {
      ATerm r_37 = NULL;
      t = f_102(t);
      {
        r_37 = t;
        if(((q_37 != NULL) && (q_37 != r_37)))
          _fail(r_37);
        else
          q_37 = r_37;
      }
    }
    t = a_11;
    {
      ATerm t_37 = NULL;
      t_37 = t;
      if(((s_37 != NULL) && (s_37 != t_37)))
        _fail(t_37);
      else
        s_37 = t_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_37)), not_null(q_37)));
        t = printnl_0(t);
      }
    }
  }
  t = z_10;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  z_37 = t;
  y_37 :
  if(match_cons(z_37, sym__2))
    {
      a_38 = ATgetArgument(z_37, 0);
      b_38 = ATgetArgument(z_37, 1);
      {
        ATerm e_38 = NULL;
        t = SSL_fopen(not_null(a_38), not_null(b_38));
        {
          ATerm f_38 = NULL;
          f_38 = t;
          if(((e_38 != NULL) && (e_38 != f_38)))
            _fail(f_38);
          else
            e_38 = f_38;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_38));
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
  ATerm n_38 = NULL;
  n_38 = t;
  t = SSL_is_string(not_null(n_38));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm r_38 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm s_38 = NULL;
    s_38 = t;
    if(((r_38 != NULL) && (r_38 != s_38)))
      _fail(s_38);
    else
      r_38 = s_38;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_38));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm v_38 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm w_38 = NULL;
    w_38 = t;
    if(((v_38 != NULL) && (v_38 != w_38)))
      _fail(w_38);
    else
      v_38 = w_38;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_38));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm z_38 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm a_39 = NULL;
    a_39 = t;
    if(((z_38 != NULL) && (z_38 != a_39)))
      _fail(a_39);
    else
      z_38 = a_39;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_38));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm g_39 = NULL;
  g_39 = t;
  f_39 :
  if(match_cons(g_39, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(g_39, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(g_39, sym_stdin_0))
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
  ATerm q_39 = NULL;
  ATerm s_39 = NULL,t_39 = NULL;
  q_39 = t;
  {
    ATerm u_39 = NULL;
    ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL;
    t = not_null(q_39);
    {
      u_39 = t;
      {
        t = SSL_explode_term(not_null(u_39));
        {
          w_39 = t;
          n_39 :
          if(match_cons(w_39, sym__2))
            {
              x_39 = ATgetArgument(w_39, 0);
              y_39 = ATgetArgument(w_39, 1);
              o_39 :
              if(match_string(x_39, ""))
                {
                  p_39 :
                  if(((ATgetType(y_39) == AT_LIST) && !(ATisEmpty(y_39))))
                    {
                      z_39 = ATgetFirst((ATermList) y_39);
                      a_40 = (ATerm) ATgetNext((ATermList) y_39);
                      {
                        if(((t_39 != NULL) && (t_39 != z_39)))
                          _fail(z_39);
                        else
                          t_39 = z_39;
                        if(((s_39 != NULL) && (s_39 != a_40)))
                          _fail(a_40);
                        else
                          s_39 = a_40;
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
    t = not_null(t_39);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
  j_40 = t;
  i_40 :
  if(match_cons(j_40, sym__2))
    {
      k_40 = ATgetArgument(j_40, 0);
      l_40 = ATgetArgument(j_40, 1);
      {
        ATerm b_11 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(c_11);
          }
        else
          {
            t = b_11;
            {
              ATerm d_11 = t;
              int h_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_1 (ATerm t)
                  {
                    ATerm o_40 = NULL,p_40 = NULL;
                    o_40 = t;
                    g_40 :
                    if(match_cons(o_40, sym_Path_1))
                      {
                        p_40 = ATgetArgument(o_40, 0);
                        t = not_null(p_40);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, p_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(h_11);
                }
              else
                {
                  t = d_11;
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
  ATerm x_40 = NULL;
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_40 = NULL;
      ATerm w_40 = NULL;
      w_40 = t;
      if(((v_40 != NULL) && (v_40 != w_40)))
        _fail(w_40);
      else
        v_40 = w_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_40), term_o_11);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      {
        ATerm q_1 (ATerm t)
        {
          t = term_p_11;
          return(t);
        }
        t = debug_1(t, q_1);
        _fail(t);
      }
    }
  {
    ATerm q_11;
    q_11 = t;
    {
      ATerm y_40 = NULL;
      t = read_from_stream_0(t);
      {
        y_40 = t;
        if(((x_40 != NULL) && (x_40 != y_40)))
          _fail(y_40);
        else
          x_40 = y_40;
      }
    }
    t = q_11;
    {
      t = fclose_0(t);
      t = not_null(x_40);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_84 (ATerm), ATerm r_84 (ATerm))
{
  ATerm d_41 = NULL,f_41 = NULL;
  ATerm s_11;
  s_11 = t;
  {
    ATerm e_41 = NULL;
    t = q_84(t);
    {
      e_41 = t;
      if(((d_41 != NULL) && (d_41 != e_41)))
        _fail(e_41);
      else
        d_41 = e_41;
    }
  }
  t = s_11;
  {
    ATerm g_41 = NULL;
    t = r_84(t);
    {
      g_41 = t;
      if(((f_41 != NULL) && (f_41 != g_41)))
        _fail(g_41);
      else
        f_41 = g_41;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_41), not_null(f_41));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm o_41 = NULL;
  ATerm t_11;
  t_11 = t;
  {
    ATerm u_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 (ATerm t)
        {
          ATerm p_41 = NULL,q_41 = NULL;
          p_41 = t;
          k_41 :
          if(match_cons(p_41, sym_Input_1))
            {
              q_41 = ATgetArgument(p_41, 0);
              if(((o_41 != NULL) && (o_41 != q_41)))
                _fail(q_41);
              else
                o_41 = q_41;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, r_1);
        ;
        LocalPopChoice(z_11);
      }
    else
      {
        t = u_11;
        {
          ATerm r_41 = NULL;
          t = term_a_12;
          {
            r_41 = t;
            if(((o_41 != NULL) && (o_41 != r_41)))
              _fail(r_41);
            else
              o_41 = r_41;
          }
        }
      }
  }
  t = t_11;
  {
    ATerm s_1 (ATerm t)
    {
      t = not_null(o_41);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, s_1);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm x_41 = NULL;
    x_41 = t;
    v_41 :
    if(!(match_string(x_41, "-k")))
      {
        if(!(match_string(x_41, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    ATerm f_12;
    f_12 = t;
    {
      ATerm d_42 = NULL;
      ATerm e_42 = NULL;
      t = string_to_int_0(t);
      {
        e_42 = t;
        if(((d_42 != NULL) && (d_42 != e_42)))
          _fail(e_42);
        else
          d_42 = e_42;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_12, not_null(d_42));
        t = set_config_0(t);
      }
    }
    t = f_12;
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    t = term_h_12;
    return(t);
  }
  t = ArgOption_3(t, t_1, u_1, v_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm l_42 = NULL;
  l_42 = t;
  t = SSL_string_to_int(not_null(l_42));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        ATerm v_42 = NULL;
        v_42 = t;
        o_42 :
        if(!(match_string(v_42, "-S")))
          {
            if(!(match_string(v_42, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm x_1 (ATerm t)
      {
        t = term_n_12;
        t = set_config_0(t);
        t = term_q_12;
        return(t);
      }
      ATerm y_1 (ATerm t)
      {
        t = term_u_12;
        return(t);
      }
      t = Option_3(t, w_1, x_1, y_1);
      ;
      LocalPopChoice(j_12);
    }
  else
    {
      t = i_12;
      {
        ATerm v_12 = t;
        int w_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_1 (ATerm t)
            {
              ATerm w_42 = NULL;
              w_42 = t;
              p_42 :
              if(!(match_string(w_42, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm a_2 (ATerm t)
            {
              ATerm z_42 = NULL;
              ATerm x_12;
              x_12 = t;
              {
                ATerm x_42 = NULL;
                ATerm y_42 = NULL;
                t = string_to_int_0(t);
                {
                  y_42 = t;
                  if(((x_42 != NULL) && (x_42 != y_42)))
                    _fail(y_42);
                  else
                    x_42 = y_42;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_9, not_null(x_42));
                  t = set_config_0(t);
                }
              }
              t = x_12;
              {
                ATerm a_43 = NULL;
                a_43 = t;
                if(((z_42 != NULL) && (z_42 != a_43)))
                  _fail(a_43);
                else
                  z_42 = a_43;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(z_42));
              }
              return(t);
            }
            ATerm b_2 (ATerm t)
            {
              t = term_b_13;
              return(t);
            }
            t = ArgOption_3(t, z_1, a_2, b_2);
            ;
            LocalPopChoice(w_12);
          }
        else
          {
            t = v_12;
            {
              ATerm c_2 (ATerm t)
              {
                ATerm b_43 = NULL;
                b_43 = t;
                u_42 :
                if(!(match_string(b_43, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm d_2 (ATerm t)
              {
                t = term_h_13;
                t = set_config_0(t);
                t = term_i_13;
                return(t);
              }
              ATerm e_2 (ATerm t)
              {
                t = term_j_13;
                return(t);
              }
              t = Option_3(t, c_2, d_2, e_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm h_43 = NULL;
    h_43 = t;
    e_43 :
    if(!(match_string(h_43, "-o")))
      {
        if(!(match_string(h_43, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    ATerm k_43 = NULL;
    ATerm q_13;
    q_13 = t;
    {
      ATerm i_43 = NULL;
      ATerm j_43 = NULL;
      j_43 = t;
      if(((i_43 != NULL) && (i_43 != j_43)))
        _fail(j_43);
      else
        i_43 = j_43;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_13, not_null(i_43));
        t = set_config_0(t);
      }
    }
    t = q_13;
    {
      ATerm l_43 = NULL;
      l_43 = t;
      if(((k_43 != NULL) && (k_43 != l_43)))
        _fail(l_43);
      else
        k_43 = l_43;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(k_43));
    }
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    t = term_s_13;
    return(t);
  }
  t = ArgOption_3(t, f_2, g_2, h_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm u_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(x_13);
    }
  else
    {
      t = u_13;
      {
        ATerm i_2 (ATerm t)
        {
          ATerm p_43 = NULL;
          p_43 = t;
          o_43 :
          if(!(match_string(p_43, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm j_2 (ATerm t)
        {
          t = term_z_13;
          t = set_config_0(t);
          t = term_a_14;
          return(t);
        }
        ATerm k_2 (ATerm t)
        {
          t = term_h_14;
          return(t);
        }
        t = Option_3(t, i_2, j_2, k_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL;
  c_44 = t;
  a_44 :
  if(match_string(c_44, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(c_44) == AT_LIST) && !(ATisEmpty(c_44))))
        {
          d_44 = ATgetFirst((ATermList) c_44);
          e_44 = (ATerm) ATgetNext((ATermList) c_44);
          b_44 :
          if(((ATgetType(e_44) == AT_LIST) && !(ATisEmpty(e_44))))
            {
              f_44 = ATgetFirst((ATermList) e_44);
              g_44 = (ATerm) ATgetNext((ATermList) e_44);
              {
                ATerm k_44 = NULL;
                ATerm i_14;
                i_14 = t;
                {
                  t = not_null(d_44);
                  t = j_0(t);
                }
                t = i_14;
                {
                  ATerm l_44 = NULL;
                  t = not_null(f_44);
                  {
                    t = k_0(t);
                    {
                      l_44 = t;
                      if(((k_44 != NULL) && (k_44 != l_44)))
                        _fail(l_44);
                      else
                        k_44 = l_44;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(g_44)), not_null(k_44));
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
  ATerm l_2 (ATerm t)
  {
    ATerm s_44 = NULL;
    s_44 = t;
    p_44 :
    if(!(match_string(s_44, "-i")))
      {
        if(!(match_string(s_44, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    ATerm v_44 = NULL;
    ATerm n_14;
    n_14 = t;
    {
      ATerm t_44 = NULL;
      ATerm u_44 = NULL;
      u_44 = t;
      if(((t_44 != NULL) && (t_44 != u_44)))
        _fail(u_44);
      else
        t_44 = u_44;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_14, not_null(t_44));
        t = set_config_0(t);
      }
    }
    t = n_14;
    {
      ATerm w_44 = NULL;
      w_44 = t;
      if(((v_44 != NULL) && (v_44 != w_44)))
        _fail(w_44);
      else
        v_44 = w_44;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_44));
    }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_p_14;
    return(t);
  }
  t = ArgOption_3(t, l_2, m_2, n_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
      {
        ATerm c_15 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(d_15);
          }
        else
          {
            t = c_15;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm a_45 = NULL;
  t = report_run_time_0(t);
  {
    ATerm b_45 = NULL;
    t = term_f_6;
    {
      t = whoami_0(t);
      {
        b_45 = t;
        if(((a_45 != NULL) && (a_45 != b_45)))
          _fail(b_45);
        else
          a_45 = b_45;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATempty, term_e_15), not_null(a_45)));
      {
        t = printnl_0(t);
        {
          t = term_j_8;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_f_15;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_45 = NULL;
  e_45 = t;
  t = SSL_TicksToSeconds(not_null(e_45));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL;
  j_45 = t;
  i_45 :
  if(match_cons(j_45, sym__2))
    {
      k_45 = ATgetArgument(j_45, 0);
      l_45 = ATgetArgument(j_45, 1);
      {
        ATerm g_15 = t;
        int h_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_45), not_null(l_45));
            ;
            LocalPopChoice(h_15);
          }
        else
          {
            t = g_15;
            t = SSL_addr(not_null(k_45), not_null(l_45));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm e_92 (ATerm), ATerm f_92 (ATerm))
{
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_92(t);
      ;
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      {
        ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL;
        s_45 = t;
        r_45 :
        if(((ATgetType(s_45) == AT_LIST) && !(ATisEmpty(s_45))))
          {
            t_45 = ATgetFirst((ATermList) s_45);
            u_45 = (ATerm) ATgetNext((ATermList) s_45);
            {
              ATerm y_45 = NULL;
              ATerm z_45 = NULL;
              t = not_null(u_45);
              {
                t = foldr_2(t, e_92, f_92);
                {
                  z_45 = t;
                  if(((y_45 != NULL) && (y_45 != z_45)))
                    _fail(z_45);
                  else
                    y_45 = z_45;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_45), not_null(y_45));
                t = f_92(t);
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
ATerm crush_2 (ATerm t, ATerm c_90 (ATerm), ATerm d_90 (ATerm))
{
  ATerm g_46 = NULL;
  ATerm i_46 = NULL;
  g_46 = t;
  {
    ATerm j_46 = NULL;
    ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL;
    t = not_null(g_46);
    {
      j_46 = t;
      {
        t = SSL_explode_term(not_null(j_46));
        {
          l_46 = t;
          f_46 :
          if(match_cons(l_46, sym__2))
            {
              m_46 = ATgetArgument(l_46, 0);
              n_46 = ATgetArgument(l_46, 1);
              if(((i_46 != NULL) && (i_46 != n_46)))
                _fail(n_46);
              else
                i_46 = n_46;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_46);
      t = foldr_2(t, c_90, d_90);
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
    ATerm o_2 (ATerm t)
    {
      t = term_k_12;
      return(t);
    }
    t = crush_2(t, o_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL;
  t_46 = t;
  s_46 :
  if(match_cons(t_46, sym__2))
    {
      u_46 = ATgetArgument(t_46, 0);
      v_46 = ATgetArgument(t_46, 1);
      {
        ATerm o_15;
        o_15 = t;
        {
          ATerm p_15 = t;
          int u_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_46), not_null(v_46));
              ;
              LocalPopChoice(u_15);
            }
          else
            {
              t = p_15;
              t = SSL_gtr(not_null(u_46), not_null(v_46));
            }
        }
        t = o_15;
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
  ATerm b_47 = NULL;
  ATerm v_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL;
      c_47 = t;
      a_47 :
      if(match_cons(c_47, sym__2))
        {
          d_47 = ATgetArgument(c_47, 0);
          e_47 = ATgetArgument(c_47, 1);
          {
            if(((b_47 != NULL) && (b_47 != d_47)))
              _fail(d_47);
            else
              b_47 = d_47;
            if(((b_47 != NULL) && (b_47 != e_47)))
              _fail(e_47);
            else
              b_47 = e_47;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(x_15);
    }
  else
    {
      t = v_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm w_103 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    ATerm y_15;
    y_15 = t;
    {
      ATerm h_47 = NULL;
      ATerm i_47 = NULL;
      t = term_w_9;
      {
        t = get_config_0(t);
        {
          i_47 = t;
          if(((h_47 != NULL) && (h_47 != i_47)))
            _fail(i_47);
          else
            h_47 = i_47;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_47), term_j_8);
        t = geq_0(t);
      }
    }
    t = y_15;
    t = w_103(t);
    return(t);
  }
  t = try_1(t, p_2);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm m_47 = NULL,o_47 = NULL;
    ATerm z_15;
    z_15 = t;
    {
      ATerm n_47 = NULL;
      t = run_time_0(t);
      {
        n_47 = t;
        if(((m_47 != NULL) && (m_47 != n_47)))
          _fail(n_47);
        else
          m_47 = n_47;
      }
    }
    t = z_15;
    {
      ATerm p_47 = NULL;
      t = term_f_6;
      {
        t = whoami_0(t);
        {
          p_47 = t;
          if(((o_47 != NULL) && (o_47 != p_47)))
            _fail(p_47);
          else
            o_47 = p_47;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_16), not_null(m_47)), term_a_16), not_null(o_47)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, q_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_k_12;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm w_47 = NULL;
  w_47 = t;
  v_47 :
  if(match_cons(w_47, sym_Version_0))
    {
      ATerm y_47 = NULL,a_48 = NULL;
      ATerm g_16;
      g_16 = t;
      {
        ATerm z_47 = NULL;
        t = SSLgetAnnotations(not_null(w_47));
        {
          z_47 = t;
          if(((y_47 != NULL) && (y_47 != z_47)))
            _fail(z_47);
          else
            y_47 = z_47;
        }
      }
      t = g_16;
      {
        ATerm b_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(y_47));
        {
          b_48 = t;
          if(((a_48 != NULL) && (a_48 != b_48)))
            _fail(b_48);
          else
            a_48 = b_48;
        }
        t = not_null(a_48);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_106 (ATerm))
{
  ATerm h_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_16;
      t = get_config_0(t);
      ;
      LocalPopChoice(j_16);
    }
  else
    {
      t = h_16;
      {
        ATerm r_2 (ATerm t)
        {
          ATerm s_16 = t;
          int t_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(t_16);
            }
          else
            {
              t = s_16;
              {
                ATerm u_16 = t;
                int v_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(v_16);
                  }
                else
                  {
                    t = u_16;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, r_2);
      }
    }
  t = t_106(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm g_48 = NULL;
  g_48 = t;
  t = SSL_table_create(not_null(g_48));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_48 = NULL;
  k_48 = t;
  {
    ATerm a_17;
    a_17 = t;
    {
      t = term_b_17;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_b_17, term_c_17, not_null(k_48));
          t = table_put_0(t);
        }
      }
    }
    t = a_17;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm o_48 = NULL;
  o_48 = t;
  t = SSL_table_destroy(not_null(o_48));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm s_48 = NULL;
  s_48 = t;
  t = SSL_exit(not_null(s_48));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm u_108 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm f_87 (ATerm))
{
  ATerm v_48 (ATerm t)
  {
    ATerm d_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(o_17);
      }
    else
      {
        t = d_17;
        t = Cons_2(t, f_87, v_48);
      }
    return(t);
  }
  t = v_48(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
  e_49 = t;
  b_49 :
  if(((ATgetType(e_49) == AT_LIST) && !(ATisEmpty(e_49))))
    {
      c_49 = ATgetFirst((ATermList) e_49);
      d_49 = (ATerm) ATgetNext((ATermList) e_49);
      {
        ATerm h_49 = NULL;
        t = not_null(d_49);
        {
          ATerm p_17;
          p_17 = t;
          {
            ATerm i_49 = NULL,k_49 = NULL,m_49 = NULL;
            ATerm q_17;
            q_17 = t;
            {
              ATerm j_49 = NULL;
              t = i_0(t);
              {
                j_49 = t;
                if(((i_49 != NULL) && (i_49 != j_49)))
                  _fail(j_49);
                else
                  i_49 = j_49;
              }
            }
            t = q_17;
            {
              ATerm l_49 = NULL;
              t = not_null(c_49);
              {
                t = g_0(t);
                {
                  l_49 = t;
                  if(((k_49 != NULL) && (k_49 != l_49)))
                    _fail(l_49);
                  else
                    k_49 = l_49;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(i_49)), not_null(k_49));
                {
                  m_49 = t;
                  if(((h_49 != NULL) && (h_49 != m_49)))
                    _fail(m_49);
                  else
                    h_49 = m_49;
                }
              }
            }
          }
          t = p_17;
          {
            ATerm s_2 (ATerm t)
            {
              t = not_null(h_49);
              return(t);
            }
            t = reverse_acc_2(t, g_0, s_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(e_49) == AT_LIST) && ATisEmpty(e_49)))
        {
          {
            t = term_f_6;
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
  ATerm t_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, t_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm t_108 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm g_79 (ATerm))
{
  ATerm x_49 = NULL,y_49 = NULL;
  x_49 = t;
  w_49 :
  if(match_cons(x_49, sym_Program_1))
    {
      y_49 = ATgetArgument(x_49, 0);
      {
        ATerm b_50 = NULL,d_50 = NULL;
        ATerm c_50 = NULL;
        t = SSLgetAnnotations(not_null(x_49));
        {
          c_50 = t;
          if(((b_50 != NULL) && (b_50 != c_50)))
            _fail(c_50);
          else
            b_50 = c_50;
        }
        {
          t = not_null(y_49);
          {
            ATerm f_50 = NULL;
            t = g_79(t);
            {
              d_50 = t;
              {
                ATerm g_50 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(d_50)), not_null(b_50));
                {
                  g_50 = t;
                  if(((f_50 != NULL) && (f_50 != g_50)))
                    _fail(g_50);
                  else
                    f_50 = g_50;
                }
                t = not_null(f_50);
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
  ATerm s_50 = NULL;
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_50 = NULL;
      t = term_f_15;
      {
        t = get_config_0(t);
        {
          t_50 = t;
          if(((s_50 != NULL) && (s_50 != t_50)))
            _fail(t_50);
          else
            s_50 = t_50;
        }
      }
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
      {
        ATerm u_2 (ATerm t)
        {
          ATerm x_2 (ATerm t)
          {
            ATerm u_50 = NULL;
            u_50 = t;
            if(((s_50 != NULL) && (s_50 != u_50)))
              _fail(u_50);
            else
              s_50 = u_50;
            return(t);
          }
          t = Program_1(t, x_2);
          return(t);
        }
        t = option_defined_1(t, u_2);
      }
    }
  {
    ATerm y_2 (ATerm t)
    {
      ATerm z_2 (ATerm t)
      {
        t = not_null(s_50);
        return(t);
      }
      t = short_description_1(t, z_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, y_2);
    {
      t = term_t_17;
      {
        t = echo_0(t);
        {
          t = term_d_18;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_3 (ATerm t)
                {
                  ATerm v_50 = NULL;
                  ATerm w_50 = NULL;
                  w_50 = t;
                  if(((v_50 != NULL) && (v_50 != w_50)))
                    _fail(w_50);
                  else
                    v_50 = w_50;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_50)), term_e_18);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_3);
                {
                  ATerm b_3 (ATerm t)
                  {
                    ATerm x_50 = NULL;
                    ATerm y_50 = NULL;
                    ATerm c_3 (ATerm t)
                    {
                      t = not_null(s_50);
                      return(t);
                    }
                    t = long_description_1(t, c_3);
                    {
                      y_50 = t;
                      if(((x_50 != NULL) && (x_50 != y_50)))
                        _fail(y_50);
                      else
                        x_50 = y_50;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(x_50)), term_g_18);
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
  ATerm h_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(j_18);
    }
  else
    {
      t = h_18;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm h_79 (ATerm))
{
  ATerm i_51 = NULL,j_51 = NULL;
  i_51 = t;
  h_51 :
  if(match_cons(i_51, sym_Undefined_1))
    {
      j_51 = ATgetArgument(i_51, 0);
      {
        ATerm m_51 = NULL,o_51 = NULL;
        ATerm n_51 = NULL;
        t = SSLgetAnnotations(not_null(i_51));
        {
          n_51 = t;
          if(((m_51 != NULL) && (m_51 != n_51)))
            _fail(n_51);
          else
            m_51 = n_51;
        }
        {
          t = not_null(j_51);
          {
            ATerm q_51 = NULL;
            t = h_79(t);
            {
              o_51 = t;
              {
                ATerm r_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_51)), not_null(m_51));
                {
                  r_51 = t;
                  if(((q_51 != NULL) && (q_51 != r_51)))
                    _fail(r_51);
                  else
                    q_51 = r_51;
                }
                t = not_null(q_51);
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
ATerm fetch_1 (ATerm t, ATerm p_87 (ATerm))
{
  ATerm w_51 (ATerm t)
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, p_87, _id);
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        t = Cons_2(t, _id, w_51);
      }
    return(t);
  }
  t = w_51(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm t_107 (ATerm))
{
  t = fetch_1(t, t_107);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL;
  y_51 = t;
  x_51 :
  if(((ATgetType(y_51) == AT_LIST) && ATisEmpty(y_51)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(y_51) == AT_LIST) && !(ATisEmpty(y_51))))
        {
          z_51 = ATgetFirst((ATermList) y_51);
          a_52 = (ATerm) ATgetNext((ATermList) y_51);
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
  ATerm t_18;
  t_18 = t;
  {
    ATerm d_52 = NULL;
    ATerm g_52 = NULL;
    ATerm x_18 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = x_18;
        {
          ATerm e_52 = NULL;
          ATerm f_52 = NULL;
          f_52 = t;
          if(((e_52 != NULL) && (e_52 != f_52)))
            _fail(f_52);
          else
            e_52 = f_52;
          t = (ATerm) ATinsert(ATempty, not_null(e_52));
        }
      }
    {
      g_52 = t;
      if(((d_52 != NULL) && (d_52 != g_52)))
        _fail(g_52);
      else
        d_52 = g_52;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_10, not_null(d_52));
      t = printnl_0(t);
    }
  }
  t = t_18;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_f_15;
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
  ATerm j_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(k_19);
    }
  else
    {
      t = j_19;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_52 = NULL;
  n_52 = t;
  m_52 :
  if(match_cons(n_52, sym_Help_0))
    {
      ATerm p_52 = NULL,x_52 = NULL;
      ATerm l_19;
      l_19 = t;
      {
        ATerm w_52 = NULL;
        t = SSLgetAnnotations(not_null(n_52));
        {
          w_52 = t;
          if(((p_52 != NULL) && (p_52 != w_52)))
            _fail(w_52);
          else
            p_52 = w_52;
        }
      }
      t = l_19;
      {
        ATerm y_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_52));
        {
          y_52 = t;
          if(((x_52 != NULL) && (x_52 != y_52)))
            _fail(y_52);
          else
            x_52 = y_52;
        }
        t = not_null(x_52);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_83 (ATerm))
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_83(t);
      ;
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_3 (ATerm t)
      {
        ATerm e_53 = NULL;
        e_53 = t;
        c_53 :
        if(!(match_string(e_53, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        t = term_z_19;
        t = set_config_0(t);
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        t = term_a_20;
        return(t);
      }
      t = Option_3(t, d_3, e_3, f_3);
      ;
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      {
        ATerm g_3 (ATerm t)
        {
          ATerm f_53 = NULL;
          f_53 = t;
          d_53 :
          if(!(match_string(f_53, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm h_3 (ATerm t)
        {
          t = term_z_19;
          {
            t = set_config_0(t);
            {
              t = term_d_20;
              t = set_config_0(t);
            }
          }
          t = term_e_20;
          return(t);
        }
        ATerm i_3 (ATerm t)
        {
          t = term_f_20;
          return(t);
        }
        t = Option_3(t, g_3, h_3, i_3);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL;
  i_53 = t;
  h_53 :
  if(match_cons(i_53, sym__2))
    {
      j_53 = ATgetArgument(i_53, 0);
      k_53 = ATgetArgument(i_53, 1);
      t = SSL_table_get(not_null(j_53), not_null(k_53));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL;
  r_53 = t;
  q_53 :
  if(match_cons(r_53, sym__3))
    {
      s_53 = ATgetArgument(r_53, 0);
      t_53 = ATgetArgument(r_53, 1);
      u_53 = ATgetArgument(r_53, 2);
      {
        ATerm g_20;
        g_20 = t;
        {
          ATerm y_53 = NULL;
          ATerm z_53 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_53), not_null(t_53));
          {
            ATerm h_20 = t;
            int i_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(i_20);
              }
            else
              {
                t = h_20;
                t = (ATerm) ATempty;
              }
            {
              z_53 = t;
              if(((y_53 != NULL) && (y_53 != z_53)))
                _fail(z_53);
              else
                y_53 = z_53;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_53), not_null(t_53), (ATerm) ATinsert(CheckATermList(not_null(y_53)), not_null(u_53)));
            t = table_put_0(t);
          }
        }
        t = g_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm y_108 (ATerm))
{
  ATerm d_54 = NULL;
  ATerm e_54 = NULL;
  t = term_f_6;
  {
    t = y_108(t);
    {
      e_54 = t;
      if(((d_54 != NULL) && (d_54 != e_54)))
        _fail(e_54);
      else
        d_54 = e_54;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_a_18, term_c_18, not_null(d_54));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL;
  k_54 = t;
  j_54 :
  if(match_string(k_54, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(k_54) == AT_LIST) && !(ATisEmpty(k_54))))
        {
          l_54 = ATgetFirst((ATermList) k_54);
          m_54 = (ATerm) ATgetNext((ATermList) k_54);
          {
            ATerm p_54 = NULL;
            ATerm j_20;
            j_20 = t;
            {
              t = not_null(l_54);
              t = a_0(t);
            }
            t = j_20;
            {
              ATerm q_54 = NULL;
              t = term_f_6;
              {
                t = b_0(t);
                {
                  q_54 = t;
                  if(((p_54 != NULL) && (p_54 != q_54)))
                    _fail(q_54);
                  else
                    p_54 = q_54;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(m_54)), not_null(p_54));
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
    ATerm v_54 = NULL;
    v_54 = t;
    u_54 :
    if(!(match_string(v_54, "--help")))
      {
        if(!(match_string(v_54, "-h")))
          {
            if(!(match_string(v_54, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = term_k_20;
    {
      t = set_config_0(t);
      t = term_v_20;
    }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = term_w_20;
    return(t);
  }
  t = Option_3(t, j_3, k_3, o_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL;
  y_54 = t;
  x_54 :
  if(((ATgetType(y_54) == AT_LIST) && !(ATisEmpty(y_54))))
    {
      z_54 = ATgetFirst((ATermList) y_54);
      a_55 = (ATerm) ATgetNext((ATermList) y_54);
      t = (ATerm) ATinsert(CheckATermList(not_null(a_55)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(z_54)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL;
  g_55 = t;
  f_55 :
  if(match_cons(g_55, sym__2))
    {
      h_55 = ATgetArgument(g_55, 0);
      i_55 = ATgetArgument(g_55, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_9, not_null(h_55), not_null(i_55));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm w_108 (ATerm))
{
  ATerm x_20;
  x_20 = t;
  {
    ATerm p_3 (ATerm t)
    {
      t = term_y_20;
      t = w_108(t);
      return(t);
    }
    t = try_1(t, p_3);
  }
  t = x_20;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm q_55 = NULL;
      ATerm z_20;
      z_20 = t;
      {
        ATerm o_55 = NULL;
        ATerm p_55 = NULL;
        p_55 = t;
        if(((o_55 != NULL) && (o_55 != p_55)))
          _fail(p_55);
        else
          o_55 = p_55;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_15, not_null(o_55));
          t = set_config_0(t);
        }
      }
      t = z_20;
      {
        ATerm r_55 = NULL;
        r_55 = t;
        if(((q_55 != NULL) && (q_55 != r_55)))
          _fail(r_55);
        else
          q_55 = r_55;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_55));
      }
      return(t);
    }
    ATerm s_3 (ATerm t)
    {
      ATerm a_21 = t;
      int n_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_21 = t;
          int p_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(p_21);
            }
          else
            {
              t = o_21;
              {
                t = w_108(t);
                t = Cons_2(t, _id, s_3);
              }
            }
          ;
          LocalPopChoice(n_21);
        }
      else
        {
          t = a_21;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, q_3, s_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_55 = NULL,c_56 = NULL,d_56 = NULL;
  ATerm q_21;
  q_21 = t;
  {
    ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL;
    j_56 = t;
    w_55 :
    if(match_cons(j_56, sym__3))
      {
        k_56 = ATgetArgument(j_56, 0);
        l_56 = ATgetArgument(j_56, 1);
        m_56 = ATgetArgument(j_56, 2);
        {
          if(((x_55 != NULL) && (x_55 != k_56)))
            _fail(k_56);
          else
            x_55 = k_56;
          {
            if(((c_56 != NULL) && (c_56 != l_56)))
              _fail(l_56);
            else
              c_56 = l_56;
            {
              if(((d_56 != NULL) && (d_56 != m_56)))
                _fail(m_56);
              else
                d_56 = m_56;
              t = SSL_table_put(not_null(x_55), not_null(c_56), not_null(d_56));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = q_21;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm v_108 (ATerm))
{
  ATerm p_56 = NULL;
  ATerm r_21;
  r_21 = t;
  {
    t = term_s_21;
    t = table_put_0(t);
  }
  t = r_21;
  {
    ATerm t_3 (ATerm t)
    {
      ATerm t_21 = t;
      int u_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_108(t);
          ;
          LocalPopChoice(u_21);
        }
      else
        {
          t = t_21;
          {
            ATerm d_22 = t;
            int e_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(e_22);
              }
            else
              {
                t = d_22;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, t_3);
    {
      ATerm u_3 (ATerm t)
      {
        ATerm f_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_22;
            h_22 = t;
            {
              ATerm i_22 = t;
              int o_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_r_16;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(o_22);
                }
              else
                {
                  t = i_22;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = h_22;
            {
              t = system_usage_0(t);
              {
                t = term_k_12;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(g_22);
          }
        else
          {
            t = f_22;
            {
              ATerm p_22 = t;
              int q_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_22;
                  r_22 = t;
                  {
                    t = term_x_19;
                    t = get_config_0(t);
                  }
                  t = r_22;
                  {
                    t = system_about_0(t);
                    {
                      t = term_k_12;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(q_22);
                }
              else
                {
                  t = p_22;
                  {
                    ATerm v_3 (ATerm t)
                    {
                      ATerm w_3 (ATerm t)
                      {
                        ATerm q_56 = NULL;
                        q_56 = t;
                        if(((p_56 != NULL) && (p_56 != q_56)))
                          _fail(q_56);
                        else
                          p_56 = q_56;
                        return(t);
                      }
                      t = Undefined_1(t, w_3);
                      return(t);
                    }
                    t = option_defined_1(t, v_3);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_56)), term_t_22));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_j_8;
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
      t = try_1(t, u_3);
      {
        ATerm y_22;
        y_22 = t;
        {
          t = term_a_18;
          t = table_destroy_0(t);
        }
        t = y_22;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm y_106 (ATerm))
{
  t = parse_options_1(t, v_106);
  {
    t = store_options_0(t);
    {
      t = x_106(t);
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, w_106);
            ;
            LocalPopChoice(a_23);
          }
        else
          {
            t = z_22;
            {
              ATerm b_23 = t;
              int c_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_106(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(c_23);
                }
              else
                {
                  t = b_23;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm n_106 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm d_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_106(t);
        ;
        LocalPopChoice(j_23);
      }
    else
      {
        t = d_23;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, k_106);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, x_3, m_106, n_106, y_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm))
{
  ATerm z_3 (ATerm t)
  {
    ATerm e_4 (ATerm t)
    {
      ATerm k_23;
      k_23 = t;
      {
        ATerm t_56 = NULL;
        ATerm u_56 = NULL;
        t = term_f_15;
        {
          t = get_config_0(t);
          {
            u_56 = t;
            if(((t_56 != NULL) && (t_56 != u_56)))
              _fail(u_56);
            else
              t_56 = u_56;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATempty, not_null(t_56)));
          t = printnl_0(t);
        }
      }
      t = k_23;
      return(t);
    }
    t = if_verbose2_1(t, e_4);
    return(t);
  }
  t = iowrap_4(t, e_106, f_106, g_106, z_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm c_106 (ATerm), ATerm d_106 (ATerm))
{
  t = iowrap_3(t, c_106, d_106, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm z_105 (ATerm))
{
  ATerm f_4 (ATerm t)
  {
    t = _2(t, _id, z_105);
    return(t);
  }
  t = iowrap_2(t, f_4, _fail);
  return(t);
}
ATerm dead_def_elim_io_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm k_4 (ATerm t)
    {
      ATerm m_4 (ATerm t)
      {
        ATerm p_4 (ATerm t)
        {
          t = Strategies_1(t, dead_def_elim_0);
          return(t);
        }
        t = Cons_2(t, p_4, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, m_4);
      return(t);
    }
    t = Specification_1(t, k_4);
    return(t);
  }
  t = iowrap_1(t, g_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = dead_def_elim_io_0(t);
  return(t);
}
