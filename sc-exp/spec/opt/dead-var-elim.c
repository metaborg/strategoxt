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
ATerm term_r_22;
ATerm term_r_21;
ATerm term_g_21;
ATerm term_e_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_p_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_y_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_c_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_t_14;
ATerm term_q_14;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_t_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_x_7;
ATerm term_j_7;
ATerm term_j_6;
ATerm term_k_5;
ATerm term_j_5;
void init_constant_terms (void)
{
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("ElimVar", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_Defined_1, term_z_7);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym__2, term_i_12, term_t_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym__2, term_l_15, term_j_6);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym__2, term_f_16, term_j_6);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym__2, term_u_18, term_v_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_j_6);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym__2, term_c_20, term_j_6);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_j_6);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym__3, term_u_18, term_v_18, (ATerm) ATempty);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm try_1 (ATerm, ATerm u_82 (ATerm));
ATerm topdown_1 (ATerm, ATerm c_80 (ATerm));
ATerm Match_1 (ATerm, ATerm s_69 (ATerm));
ATerm EliminateFromMatch_0 (ATerm);
ATerm GuardedLChoice_3 (ATerm, ATerm f_70 (ATerm), ATerm g_70 (ATerm), ATerm h_70 (ATerm));
ATerm elim_guardedlchoice_1 (ATerm, ATerm e_78 (ATerm));
ATerm LChoice_2 (ATerm, ATerm b_70 (ATerm), ATerm c_70 (ATerm));
ATerm elim_lchoice_1 (ATerm, ATerm d_78 (ATerm));
ATerm Choice_2 (ATerm, ATerm z_68 (ATerm), ATerm a_69 (ATerm));
ATerm isect_ElimVar_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm restore_ElimVar_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_ElimVar_0 (ATerm);
ATerm elim_abstract_choice_2 (ATerm, ATerm f_78 (ATerm), ATerm g_78 (ATerm));
ATerm elim_choice_1 (ATerm, ATerm c_78 (ATerm));
ATerm Seq_2 (ATerm, ATerm z_69 (ATerm), ATerm a_70 (ATerm));
ATerm table_replace_0 (ATerm);
ATerm override_key_1 (ATerm, ATerm o_92 (ATerm));
ATerm alltd_1 (ATerm, ATerm u_81 (ATerm));
ATerm mark_build_term_0 (ATerm);
ATerm CallT_3 (ATerm, ATerm p_69 (ATerm), ATerm q_69 (ATerm), ATerm r_69 (ATerm));
ATerm PrimT_3 (ATerm, ATerm r_70 (ATerm), ATerm s_70 (ATerm), ATerm t_70 (ATerm));
ATerm Build_1 (ATerm, ATerm t_69 (ATerm));
ATerm MarkBuild_0 (ATerm);
ATerm DeclareAlive_0 (ATerm);
ATerm SDefT_4 (ATerm, ATerm d_72 (ATerm), ATerm e_72 (ATerm), ATerm f_72 (ATerm), ATerm g_72 (ATerm));
ATerm elim_sdef_1 (ATerm, ATerm i_78 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm p_92 (ATerm));
ATerm ElimVar_0 (ATerm);
ATerm filter_1 (ATerm, ATerm r_92 (ATerm));
ATerm EliminateFromScope_0 (ATerm);
ATerm assert_1 (ATerm, ATerm n_92 (ATerm));
ATerm DeclareDead_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm v_69 (ATerm), ATerm w_69 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm k_92 (ATerm));
ATerm restore_always_2 (ATerm, ATerm j_83 (ATerm), ATerm k_83 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm j_92 (ATerm));
ATerm scope_2 (ATerm, ATerm l_92 (ATerm), ATerm m_92 (ATerm));
ATerm elim_scope_1 (ATerm, ATerm j_78 (ATerm));
ATerm dead_var_elim_0 (ATerm);
ATerm map_1 (ATerm, ATerm d_86 (ATerm));
ATerm Strategies_1 (ATerm, ATerm c_65 (ATerm));
ATerm Cons_2 (ATerm, ATerm y_64 (ATerm), ATerm z_64 (ATerm));
ATerm Signature_1 (ATerm, ATerm d_65 (ATerm));
ATerm Specification_1 (ATerm, ATerm h_65 (ATerm));
ATerm _2 (ATerm, ATerm p_63 (ATerm), ATerm q_63 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm t_86 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm v_102 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm r_101 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm t_104 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm d_101 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm o_83 (ATerm), ATerm p_83 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm c_91 (ATerm), ATerm d_91 (ATerm));
ATerm crush_2 (ATerm, ATerm a_89 (ATerm), ATerm b_89 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm u_102 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_105 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm s_107 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm e_0 (ATerm), ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm r_107 (ATerm));
ATerm Program_1 (ATerm, ATerm w_77 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm x_77 (ATerm));
ATerm fetch_1 (ATerm, ATerm n_86 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_106 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm w_107 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm u_107 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_107 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm w_105 (ATerm));
ATerm iowrap_4 (ATerm, ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm l_105 (ATerm));
ATerm iowrap_3 (ATerm, ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm));
ATerm iowrap_2 (ATerm, ATerm a_105 (ATerm), ATerm b_105 (ATerm));
ATerm iowrap_1 (ATerm, ATerm x_104 (ATerm));
ATerm dead_var_elim_io_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm r_4 = NULL;
  r_4 = t;
  q_4 :
  if(((ATgetType(r_4) == AT_LIST) && ATisEmpty(r_4)))
    {
      {
        ATerm g_5 = NULL,i_5 = NULL;
        ATerm b_5;
        b_5 = t;
        {
          ATerm h_5 = NULL;
          t = SSLgetAnnotations(not_null(r_4));
          {
            h_5 = t;
            if(((g_5 != NULL) && (g_5 != h_5)))
              _fail(h_5);
            else
              g_5 = h_5;
          }
        }
        t = b_5;
        {
          ATerm m_5 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(g_5));
          {
            m_5 = t;
            if(((i_5 != NULL) && (i_5 != m_5)))
              _fail(m_5);
            else
              i_5 = m_5;
          }
          t = not_null(i_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm u_82 (ATerm))
{
  ATerm c_5 = t;
  int d_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_82(t);
      ;
      LocalPopChoice(d_5);
    }
  else
    {
      t = c_5;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm c_80 (ATerm))
{
  t = c_80(t);
  {
    ATerm f_0 (ATerm t)
    {
      t = topdown_1(t, c_80);
      return(t);
    }
    t = _all(t, f_0);
  }
  return(t);
}
ATerm Match_1 (ATerm t, ATerm s_69 (ATerm))
{
  ATerm v_5 = NULL,w_5 = NULL;
  v_5 = t;
  u_5 :
  if(match_cons(v_5, sym_Match_1))
    {
      w_5 = ATgetArgument(v_5, 0);
      {
        ATerm z_5 = NULL,b_6 = NULL;
        ATerm a_6 = NULL;
        t = SSLgetAnnotations(not_null(v_5));
        {
          a_6 = t;
          if(((z_5 != NULL) && (z_5 != a_6)))
            _fail(a_6);
          else
            z_5 = a_6;
        }
        {
          t = not_null(w_5);
          {
            ATerm d_6 = NULL;
            t = s_69(t);
            {
              b_6 = t;
              {
                ATerm e_6 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(b_6)), not_null(z_5));
                {
                  e_6 = t;
                  if(((d_6 != NULL) && (d_6 != e_6)))
                    _fail(e_6);
                  else
                    d_6 = e_6;
                }
                t = not_null(d_6);
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
ATerm EliminateFromMatch_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    ATerm i_0 (ATerm t)
    {
      ATerm t_6 = NULL,u_6 = NULL;
      t_6 = t;
      n_6 :
      if(match_cons(t_6, sym_Var_1))
        {
          u_6 = ATgetArgument(t_6, 0);
          {
            ATerm e_5;
            e_5 = t;
            {
              ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL;
              t = SSLgetAnnotations(not_null(t_6));
              {
                x_6 = t;
                k_6 :
                if(((ATgetType(x_6) == AT_LIST) && !(ATisEmpty(x_6))))
                  {
                    y_6 = ATgetFirst((ATermList) x_6);
                    z_6 = (ATerm) ATgetNext((ATermList) x_6);
                    l_6 :
                    if(match_string(y_6, "bound"))
                      {
                        m_6 :
                        if(((ATgetType(z_6) == AT_LIST) && ATisEmpty(z_6)))
                          {
                            {
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
            t = e_5;
            {
              ATerm f_5;
              f_5 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_6)), term_j_5);
                {
                  ATerm k_0 (ATerm t)
                  {
                    t = term_k_5;
                    return(t);
                  }
                  t = override_key_1(t, k_0);
                }
              }
              t = f_5;
            }
          }
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = alltd_1(t, i_0);
    {
      ATerm n_0 (ATerm t)
      {
        ATerm a_7 = NULL,b_7 = NULL;
        a_7 = t;
        s_6 :
        if(match_cons(a_7, sym_Var_1))
          {
            b_7 = ATgetArgument(a_7, 0);
            {
              ATerm e_7 = NULL;
              t = not_null(b_7);
              {
                ATerm f_7 = NULL;
                f_7 = t;
                if(((e_7 != NULL) && (e_7 != f_7)))
                  _fail(f_7);
                else
                  e_7 = f_7;
                {
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_7));
                  {
                    ATerm l_5;
                    l_5 = t;
                    {
                      ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL;
                      t = SSLgetAnnotations(not_null(a_7));
                      {
                        g_7 = t;
                        q_6 :
                        if(((ATgetType(g_7) == AT_LIST) && !(ATisEmpty(g_7))))
                          {
                            h_7 = ATgetFirst((ATermList) g_7);
                            i_7 = (ATerm) ATgetNext((ATermList) g_7);
                            r_6 :
                            if(((ATgetType(i_7) == AT_LIST) && ATisEmpty(i_7)))
                              {
                                {
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
                    t = l_5;
                    t = ElimVar_0(t);
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
      t = alltd_1(t, n_0);
    }
    return(t);
  }
  t = Match_1(t, h_0);
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm f_70 (ATerm), ATerm g_70 (ATerm), ATerm h_70 (ATerm))
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL;
  t_7 = t;
  s_7 :
  if(match_cons(t_7, sym_GuardedLChoice_3))
    {
      u_7 = ATgetArgument(t_7, 0);
      v_7 = ATgetArgument(t_7, 1);
      w_7 = ATgetArgument(t_7, 2);
      {
        ATerm b_8 = NULL,d_8 = NULL;
        ATerm c_8 = NULL;
        t = SSLgetAnnotations(not_null(t_7));
        {
          c_8 = t;
          if(((b_8 != NULL) && (b_8 != c_8)))
            _fail(c_8);
          else
            b_8 = c_8;
        }
        {
          t = not_null(u_7);
          {
            ATerm f_8 = NULL;
            t = f_70(t);
            {
              d_8 = t;
              {
                t = not_null(v_7);
                {
                  ATerm h_8 = NULL;
                  t = g_70(t);
                  {
                    f_8 = t;
                    {
                      t = not_null(w_7);
                      {
                        ATerm j_8 = NULL;
                        t = h_70(t);
                        {
                          h_8 = t;
                          {
                            ATerm k_8 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(d_8), not_null(f_8), not_null(h_8)), not_null(b_8));
                            {
                              k_8 = t;
                              if(((j_8 != NULL) && (j_8 != k_8)))
                                _fail(k_8);
                              else
                                j_8 = k_8;
                            }
                            t = not_null(j_8);
                          }
                        }
                      }
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
ATerm elim_guardedlchoice_1 (ATerm t, ATerm e_78 (ATerm))
{
  t = GuardedLChoice_3(t, _id, _id, _id);
  {
    ATerm o_0 (ATerm t)
    {
      t = GuardedLChoice_3(t, _id, e_78, _id);
      t = GuardedLChoice_3(t, e_78, _id, _id);
      return(t);
    }
    ATerm p_0 (ATerm t)
    {
      t = GuardedLChoice_3(t, _id, _id, e_78);
      return(t);
    }
    t = elim_abstract_choice_2(t, o_0, p_0);
  }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm b_70 (ATerm), ATerm c_70 (ATerm))
{
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
  x_8 = t;
  w_8 :
  if(match_cons(x_8, sym_LChoice_2))
    {
      y_8 = ATgetArgument(x_8, 0);
      z_8 = ATgetArgument(x_8, 1);
      {
        ATerm d_9 = NULL,f_9 = NULL;
        ATerm e_9 = NULL;
        t = SSLgetAnnotations(not_null(x_8));
        {
          e_9 = t;
          if(((d_9 != NULL) && (d_9 != e_9)))
            _fail(e_9);
          else
            d_9 = e_9;
        }
        {
          t = not_null(y_8);
          {
            ATerm h_9 = NULL;
            t = b_70(t);
            {
              f_9 = t;
              {
                t = not_null(z_8);
                {
                  ATerm j_9 = NULL;
                  t = c_70(t);
                  {
                    h_9 = t;
                    {
                      ATerm k_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(f_9), not_null(h_9)), not_null(d_9));
                      {
                        k_9 = t;
                        if(((j_9 != NULL) && (j_9 != k_9)))
                          _fail(k_9);
                        else
                          j_9 = k_9;
                      }
                      t = not_null(j_9);
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
ATerm elim_lchoice_1 (ATerm t, ATerm d_78 (ATerm))
{
  t = LChoice_2(t, _id, _id);
  {
    ATerm q_0 (ATerm t)
    {
      t = LChoice_2(t, d_78, _id);
      return(t);
    }
    ATerm r_0 (ATerm t)
    {
      t = LChoice_2(t, _id, d_78);
      return(t);
    }
    t = elim_abstract_choice_2(t, q_0, r_0);
  }
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm z_68 (ATerm), ATerm a_69 (ATerm))
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL;
  w_9 = t;
  v_9 :
  if(match_cons(w_9, sym_Choice_2))
    {
      x_9 = ATgetArgument(w_9, 0);
      y_9 = ATgetArgument(w_9, 1);
      {
        ATerm c_10 = NULL,e_10 = NULL;
        ATerm d_10 = NULL;
        t = SSLgetAnnotations(not_null(w_9));
        {
          d_10 = t;
          if(((c_10 != NULL) && (c_10 != d_10)))
            _fail(d_10);
          else
            c_10 = d_10;
        }
        {
          t = not_null(x_9);
          {
            ATerm g_10 = NULL;
            t = z_68(t);
            {
              e_10 = t;
              {
                t = not_null(y_9);
                {
                  ATerm i_10 = NULL;
                  t = a_69(t);
                  {
                    g_10 = t;
                    {
                      ATerm j_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(e_10), not_null(g_10)), not_null(c_10));
                      {
                        j_10 = t;
                        if(((i_10 != NULL) && (i_10 != j_10)))
                          _fail(j_10);
                        else
                          i_10 = j_10;
                      }
                      t = not_null(i_10);
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
ATerm isect_ElimVar_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm t_0 (ATerm t)
    {
      ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL;
      y_10 = t;
      s_10 :
      if(match_cons(y_10, sym__2))
        {
          z_10 = ATgetArgument(y_10, 0);
          a_11 = ATgetArgument(y_10, 1);
          t_10 :
          if(((ATgetType(a_11) == AT_LIST) && !(ATisEmpty(a_11))))
            {
              b_11 = ATgetFirst((ATermList) a_11);
              d_11 = (ATerm) ATgetNext((ATermList) a_11);
              u_10 :
              if(match_cons(b_11, sym_Defined_1))
                {
                  c_11 = ATgetArgument(b_11, 0);
                  v_10 :
                  if(!(match_cons(z_10, sym_Scopes_0)))
                    {
                      ATerm n_5 = t;
                      int o_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm p_5;
                          p_5 = t;
                          {
                            ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, term_k_5, not_null(z_10));
                            {
                              t = table_get_0(t);
                              {
                                f_11 = t;
                                q_10 :
                                if(((ATgetType(f_11) == AT_LIST) && !(ATisEmpty(f_11))))
                                  {
                                    g_11 = ATgetFirst((ATermList) f_11);
                                    i_11 = (ATerm) ATgetNext((ATermList) f_11);
                                    r_10 :
                                    if(match_cons(g_11, sym_Defined_1))
                                      {
                                        h_11 = ATgetArgument(g_11, 0);
                                        {
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
                          t = p_5;
                          ;
                          LocalPopChoice(o_5);
                        }
                      else
                        {
                          t = n_5;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_10), (ATerm) ATinsert(ATempty, term_j_5));
                        }
                    }
                }
              else
                {
                  w_10 :
                  if(!(match_cons(z_10, sym_Scopes_0)))
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              x_10 :
              if(!(match_cons(z_10, sym_Scopes_0)))
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
    t = try_1(t, t_0);
    return(t);
  }
  t = map_1(t, s_0);
  t = restore_ElimVar_0(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym__2))
    {
      p_11 = ATgetArgument(o_11, 0);
      q_11 = ATgetArgument(o_11, 1);
      {
        t = not_null(q_11);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
            t_11 = t;
            m_11 :
            if(match_cons(t_11, sym__2))
              {
                u_11 = ATgetArgument(t_11, 0);
                v_11 = ATgetArgument(t_11, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(p_11), not_null(u_11), not_null(v_11));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, u_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm restore_ElimVar_0 (ATerm t)
{
  ATerm b_12 = NULL;
  b_12 = t;
  {
    ATerm q_5;
    q_5 = t;
    {
      t = term_k_5;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_5, not_null(b_12));
          t = table_putlist_0(t);
        }
      }
    }
    t = q_5;
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm f_12 = NULL;
  f_12 = t;
  t = SSL_table_keys(not_null(f_12));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm l_12 = NULL;
  l_12 = t;
  {
    t = table_keys_0(t);
    {
      ATerm v_0 (ATerm t)
      {
        ATerm n_12 = NULL;
        ATerm p_12 = NULL;
        n_12 = t;
        {
          ATerm q_12 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_12), not_null(n_12));
          {
            t = table_get_0(t);
            {
              q_12 = t;
              if(((p_12 != NULL) && (p_12 != q_12)))
                _fail(q_12);
              else
                p_12 = q_12;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_12), not_null(p_12));
        }
        return(t);
      }
      t = map_1(t, v_0);
    }
  }
  return(t);
}
ATerm save_ElimVar_0 (ATerm t)
{
  t = term_k_5;
  t = table_getlist_0(t);
  return(t);
}
ATerm elim_abstract_choice_2 (ATerm t, ATerm f_78 (ATerm), ATerm g_78 (ATerm))
{
  ATerm w_12 = NULL,y_12 = NULL;
  ATerm r_5;
  r_5 = t;
  {
    ATerm x_12 = NULL;
    t = save_ElimVar_0(t);
    {
      x_12 = t;
      if(((w_12 != NULL) && (w_12 != x_12)))
        _fail(x_12);
      else
        w_12 = x_12;
    }
  }
  t = r_5;
  {
    t = f_78(t);
    {
      ATerm s_5;
      s_5 = t;
      {
        ATerm z_12 = NULL;
        t = save_ElimVar_0(t);
        {
          z_12 = t;
          {
            if(((y_12 != NULL) && (y_12 != z_12)))
              _fail(z_12);
            else
              y_12 = z_12;
            {
              t = not_null(w_12);
              t = restore_ElimVar_0(t);
            }
          }
        }
      }
      t = s_5;
      {
        t = g_78(t);
        {
          ATerm t_5;
          t_5 = t;
          {
            t = not_null(y_12);
            t = isect_ElimVar_0(t);
          }
          t = t_5;
        }
      }
    }
  }
  return(t);
}
ATerm elim_choice_1 (ATerm t, ATerm c_78 (ATerm))
{
  t = Choice_2(t, _id, _id);
  {
    ATerm w_0 (ATerm t)
    {
      t = Choice_2(t, c_78, _id);
      return(t);
    }
    ATerm x_0 (ATerm t)
    {
      t = Choice_2(t, _id, c_78);
      return(t);
    }
    t = elim_abstract_choice_2(t, w_0, x_0);
  }
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm z_69 (ATerm), ATerm a_70 (ATerm))
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
  i_13 = t;
  h_13 :
  if(match_cons(i_13, sym_Seq_2))
    {
      j_13 = ATgetArgument(i_13, 0);
      k_13 = ATgetArgument(i_13, 1);
      {
        ATerm o_13 = NULL,q_13 = NULL;
        ATerm p_13 = NULL;
        t = SSLgetAnnotations(not_null(i_13));
        {
          p_13 = t;
          if(((o_13 != NULL) && (o_13 != p_13)))
            _fail(p_13);
          else
            o_13 = p_13;
        }
        {
          t = not_null(j_13);
          {
            ATerm s_13 = NULL;
            t = z_69(t);
            {
              q_13 = t;
              {
                t = not_null(k_13);
                {
                  ATerm u_13 = NULL;
                  t = a_70(t);
                  {
                    s_13 = t;
                    {
                      ATerm v_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(q_13), not_null(s_13)), not_null(o_13));
                      {
                        v_13 = t;
                        if(((u_13 != NULL) && (u_13 != v_13)))
                          _fail(v_13);
                        else
                          u_13 = v_13;
                      }
                      t = not_null(u_13);
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
ATerm table_replace_0 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL;
  f_14 = t;
  e_14 :
  if(match_cons(f_14, sym__3))
    {
      g_14 = ATgetArgument(f_14, 0);
      h_14 = ATgetArgument(f_14, 1);
      i_14 = ATgetArgument(f_14, 2);
      {
        ATerm m_14 = NULL;
        ATerm x_5;
        x_5 = t;
        {
          ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_14), not_null(h_14));
          {
            t = table_get_0(t);
            {
              n_14 = t;
              d_14 :
              if(((ATgetType(n_14) == AT_LIST) && !(ATisEmpty(n_14))))
                {
                  o_14 = ATgetFirst((ATermList) n_14);
                  p_14 = (ATerm) ATgetNext((ATermList) n_14);
                  {
                    if(((m_14 != NULL) && (m_14 != p_14)))
                      _fail(p_14);
                    else
                      m_14 = p_14;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(g_14), not_null(h_14), (ATerm) ATinsert(CheckATermList(not_null(m_14)), not_null(i_14)));
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
        t = x_5;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm override_key_1 (ATerm t, ATerm o_92 (ATerm))
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
  v_14 = t;
  u_14 :
  if(match_cons(v_14, sym__2))
    {
      w_14 = ATgetArgument(v_14, 0);
      x_14 = ATgetArgument(v_14, 1);
      {
        ATerm a_15 = NULL;
        ATerm y_5;
        y_5 = t;
        {
          ATerm b_15 = NULL;
          t = o_92(t);
          {
            b_15 = t;
            {
              if(((a_15 != NULL) && (a_15 != b_15)))
                _fail(b_15);
              else
                a_15 = b_15;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(a_15), not_null(w_14), not_null(x_14));
                t = table_replace_0(t);
              }
            }
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
ATerm alltd_1 (ATerm t, ATerm u_81 (ATerm))
{
  ATerm e_15 (ATerm t)
  {
    ATerm c_6 = t;
    int f_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_81(t);
        ;
        LocalPopChoice(f_6);
      }
    else
      {
        t = c_6;
        t = _all(t, e_15);
      }
    return(t);
  }
  t = e_15(t);
  return(t);
}
ATerm mark_build_term_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm h_15 = NULL,i_15 = NULL;
    h_15 = t;
    g_15 :
    if(match_cons(h_15, sym_Var_1))
      {
        i_15 = ATgetArgument(h_15, 0);
        {
          ATerm g_6;
          g_6 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_15)), term_j_5);
            {
              ATerm z_0 (ATerm t)
              {
                t = term_k_5;
                return(t);
              }
              t = override_key_1(t, z_0);
            }
          }
          t = g_6;
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = alltd_1(t, y_0);
  return(t);
}
ATerm CallT_3 (ATerm t, ATerm p_69 (ATerm), ATerm q_69 (ATerm), ATerm r_69 (ATerm))
{
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL;
  s_15 = t;
  r_15 :
  if(match_cons(s_15, sym_CallT_3))
    {
      t_15 = ATgetArgument(s_15, 0);
      u_15 = ATgetArgument(s_15, 1);
      v_15 = ATgetArgument(s_15, 2);
      {
        ATerm a_16 = NULL,c_16 = NULL;
        ATerm b_16 = NULL;
        t = SSLgetAnnotations(not_null(s_15));
        {
          b_16 = t;
          if(((a_16 != NULL) && (a_16 != b_16)))
            _fail(b_16);
          else
            a_16 = b_16;
        }
        {
          t = not_null(t_15);
          {
            ATerm e_16 = NULL;
            t = p_69(t);
            {
              c_16 = t;
              {
                t = not_null(u_15);
                {
                  ATerm g_16 = NULL;
                  t = q_69(t);
                  {
                    e_16 = t;
                    {
                      t = not_null(v_15);
                      {
                        ATerm i_16 = NULL;
                        t = r_69(t);
                        {
                          g_16 = t;
                          {
                            ATerm j_16 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(c_16), not_null(e_16), not_null(g_16)), not_null(a_16));
                            {
                              j_16 = t;
                              if(((i_16 != NULL) && (i_16 != j_16)))
                                _fail(j_16);
                              else
                                i_16 = j_16;
                            }
                            t = not_null(i_16);
                          }
                        }
                      }
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
ATerm PrimT_3 (ATerm t, ATerm r_70 (ATerm), ATerm s_70 (ATerm), ATerm t_70 (ATerm))
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL;
  x_16 = t;
  w_16 :
  if(match_cons(x_16, sym_PrimT_3))
    {
      y_16 = ATgetArgument(x_16, 0);
      z_16 = ATgetArgument(x_16, 1);
      a_17 = ATgetArgument(x_16, 2);
      {
        ATerm f_17 = NULL,h_17 = NULL;
        ATerm g_17 = NULL;
        t = SSLgetAnnotations(not_null(x_16));
        {
          g_17 = t;
          if(((f_17 != NULL) && (f_17 != g_17)))
            _fail(g_17);
          else
            f_17 = g_17;
        }
        {
          t = not_null(y_16);
          {
            ATerm j_17 = NULL;
            t = r_70(t);
            {
              h_17 = t;
              {
                t = not_null(z_16);
                {
                  ATerm l_17 = NULL;
                  t = s_70(t);
                  {
                    j_17 = t;
                    {
                      t = not_null(a_17);
                      {
                        ATerm n_17 = NULL;
                        t = t_70(t);
                        {
                          l_17 = t;
                          {
                            ATerm o_17 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(h_17), not_null(j_17), not_null(l_17)), not_null(f_17));
                            {
                              o_17 = t;
                              if(((n_17 != NULL) && (n_17 != o_17)))
                                _fail(o_17);
                              else
                                n_17 = o_17;
                            }
                            t = not_null(n_17);
                          }
                        }
                      }
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
ATerm Build_1 (ATerm t, ATerm t_69 (ATerm))
{
  ATerm a_18 = NULL,b_18 = NULL;
  a_18 = t;
  z_17 :
  if(match_cons(a_18, sym_Build_1))
    {
      b_18 = ATgetArgument(a_18, 0);
      {
        ATerm e_18 = NULL,g_18 = NULL;
        ATerm f_18 = NULL;
        t = SSLgetAnnotations(not_null(a_18));
        {
          f_18 = t;
          if(((e_18 != NULL) && (e_18 != f_18)))
            _fail(f_18);
          else
            e_18 = f_18;
        }
        {
          t = not_null(b_18);
          {
            ATerm i_18 = NULL;
            t = t_69(t);
            {
              g_18 = t;
              {
                ATerm j_18 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(g_18)), not_null(e_18));
                {
                  j_18 = t;
                  if(((i_18 != NULL) && (i_18 != j_18)))
                    _fail(j_18);
                  else
                    i_18 = j_18;
                }
                t = not_null(i_18);
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
ATerm MarkBuild_0 (ATerm t)
{
  t = Build_1(t, mark_build_term_0);
  return(t);
}
ATerm DeclareAlive_0 (ATerm t)
{
  ATerm p_18 = NULL;
  p_18 = t;
  {
    ATerm h_6;
    h_6 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_18)), term_j_5);
      {
        ATerm a_1 (ATerm t)
        {
          t = term_k_5;
          return(t);
        }
        t = assert_1(t, a_1);
      }
    }
    t = h_6;
  }
  return(t);
}
ATerm SDefT_4 (ATerm t, ATerm d_72 (ATerm), ATerm e_72 (ATerm), ATerm f_72 (ATerm), ATerm g_72 (ATerm))
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
  a_19 = t;
  z_18 :
  if(match_cons(a_19, sym_SDefT_4))
    {
      b_19 = ATgetArgument(a_19, 0);
      c_19 = ATgetArgument(a_19, 1);
      d_19 = ATgetArgument(a_19, 2);
      e_19 = ATgetArgument(a_19, 3);
      {
        ATerm k_19 = NULL,m_19 = NULL;
        ATerm l_19 = NULL;
        t = SSLgetAnnotations(not_null(a_19));
        {
          l_19 = t;
          if(((k_19 != NULL) && (k_19 != l_19)))
            _fail(l_19);
          else
            k_19 = l_19;
        }
        {
          t = not_null(b_19);
          {
            ATerm o_19 = NULL;
            t = d_72(t);
            {
              m_19 = t;
              {
                t = not_null(c_19);
                {
                  ATerm q_19 = NULL;
                  t = e_72(t);
                  {
                    o_19 = t;
                    {
                      t = not_null(d_19);
                      {
                        ATerm s_19 = NULL;
                        t = f_72(t);
                        {
                          q_19 = t;
                          {
                            t = not_null(e_19);
                            {
                              ATerm u_19 = NULL;
                              t = g_72(t);
                              {
                                s_19 = t;
                                {
                                  ATerm v_19 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(m_19), not_null(o_19), not_null(q_19), not_null(s_19)), not_null(k_19));
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
ATerm elim_sdef_1 (ATerm t, ATerm i_78 (ATerm))
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
  h_20 = t;
  g_20 :
  if(match_cons(h_20, sym_SDefT_4))
    {
      i_20 = ATgetArgument(h_20, 0);
      j_20 = ATgetArgument(h_20, 1);
      k_20 = ATgetArgument(h_20, 2);
      l_20 = ATgetArgument(h_20, 3);
      {
        ATerm b_1 (ATerm t)
        {
          t = term_k_5;
          return(t);
        }
        ATerm c_1 (ATerm t)
        {
          ATerm d_1 (ATerm t)
          {
            ATerm e_1 (ATerm t)
            {
              ATerm i_6;
              i_6 = t;
              {
                ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
                m_20 = t;
                f_20 :
                if(match_cons(m_20, sym_VarDec_2))
                  {
                    n_20 = ATgetArgument(m_20, 0);
                    o_20 = ATgetArgument(m_20, 1);
                    {
                      t = not_null(n_20);
                      t = DeclareAlive_0(t);
                    }
                  }
                else
                  {
                    _fail(t);
                  }
              }
              t = i_6;
              return(t);
            }
            t = map_1(t, e_1);
            return(t);
          }
          t = SDefT_4(t, _id, _id, d_1, i_78);
          return(t);
        }
        t = scope_2(t, b_1, c_1);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
  u_20 = t;
  t_20 :
  if(((ATgetType(u_20) == AT_LIST) && !(ATisEmpty(u_20))))
    {
      v_20 = ATgetFirst((ATermList) u_20);
      w_20 = (ATerm) ATgetNext((ATermList) u_20);
      t = not_null(v_20);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
  b_21 = t;
  a_21 :
  if(match_cons(b_21, sym__2))
    {
      c_21 = ATgetArgument(b_21, 0);
      d_21 = ATgetArgument(b_21, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_21), not_null(d_21));
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
ATerm rewrite_1 (ATerm t, ATerm p_92 (ATerm))
{
  ATerm j_21 = NULL;
  ATerm l_21 = NULL;
  j_21 = t;
  {
    ATerm m_21 = NULL;
    t = term_j_6;
    {
      t = p_92(t);
      {
        m_21 = t;
        if(((l_21 != NULL) && (l_21 != m_21)))
          _fail(m_21);
        else
          l_21 = m_21;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_21), not_null(j_21));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm ElimVar_0 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL;
  c_22 = t;
  b_22 :
  if(match_cons(c_22, sym_Var_1))
    {
      d_22 = ATgetArgument(c_22, 0);
      {
        ATerm o_6 = t;
        int p_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_22 = NULL;
            t = not_null(c_22);
            {
              ATerm f_1 (ATerm t)
              {
                t = term_k_5;
                return(t);
              }
              t = rewrite_1(t, f_1);
              {
                g_22 = t;
                u_21 :
                if(match_cons(g_22, sym_Undefined_0))
                  {
                    _fail(t);
                  }
                else
                  {
                    _fail(t);
                  }
              }
            }
            t = term_j_5;
            ;
            LocalPopChoice(p_6);
          }
        else
          {
            t = o_6;
            {
              ATerm v_6 = t;
              int w_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_22 = NULL;
                  t = not_null(c_22);
                  {
                    ATerm g_1 (ATerm t)
                    {
                      t = term_k_5;
                      return(t);
                    }
                    t = rewrite_1(t, g_1);
                    {
                      j_22 = t;
                      w_21 :
                      if(match_cons(j_22, sym_Undefined_0))
                        {
                          _fail(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                  t = term_j_5;
                  ;
                  LocalPopChoice(w_6);
                }
              else
                {
                  t = v_6;
                  {
                    ATerm c_7 = t;
                    int d_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_22 = NULL;
                        t = not_null(c_22);
                        {
                          ATerm h_1 (ATerm t)
                          {
                            t = term_k_5;
                            return(t);
                          }
                          t = rewrite_1(t, h_1);
                          {
                            m_22 = t;
                            y_21 :
                            if(match_cons(m_22, sym_Undefined_0))
                              {
                                _fail(t);
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        }
                        t = term_j_5;
                        ;
                        LocalPopChoice(d_7);
                      }
                    else
                      {
                        t = c_7;
                        {
                          ATerm p_22 = NULL,q_22 = NULL;
                          t = not_null(c_22);
                          {
                            ATerm i_1 (ATerm t)
                            {
                              t = term_k_5;
                              return(t);
                            }
                            t = rewrite_1(t, i_1);
                            {
                              p_22 = t;
                              z_21 :
                              if(match_cons(p_22, sym_Defined_1))
                                {
                                  q_22 = ATgetArgument(p_22, 0);
                                  a_22 :
                                  if(!(match_string(q_22, "c_0")))
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
                          t = term_j_7;
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
ATerm filter_1 (ATerm t, ATerm r_92 (ATerm))
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
      {
        ATerm m_7 = t;
        int n_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 (ATerm t)
            {
              t = filter_1(t, r_92);
              return(t);
            }
            t = Cons_2(t, r_92, j_1);
            ;
            LocalPopChoice(n_7);
          }
        else
          {
            t = m_7;
            {
              ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL;
              a_23 = t;
              z_22 :
              if(((ATgetType(a_23) == AT_LIST) && !(ATisEmpty(a_23))))
                {
                  b_23 = ATgetFirst((ATermList) a_23);
                  c_23 = (ATerm) ATgetNext((ATermList) a_23);
                  {
                    t = not_null(c_23);
                    t = filter_1(t, r_92);
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
ATerm EliminateFromScope_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm l_1 (ATerm t)
    {
      ATerm o_7 = t;
      if((PushChoice() == 0))
        {
          ATerm g_23 = NULL;
          ATerm h_23 = NULL;
          h_23 = t;
          if(((g_23 != NULL) && (g_23 != h_23)))
            _fail(h_23);
          else
            g_23 = h_23;
          {
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_23));
            t = ElimVar_0(t);
          }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = o_7;
        }
      return(t);
    }
    t = filter_1(t, l_1);
    return(t);
  }
  t = Scope_2(t, k_1, _id);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm n_92 (ATerm))
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
  o_23 = t;
  n_23 :
  if(match_cons(o_23, sym__2))
    {
      p_23 = ATgetArgument(o_23, 0);
      q_23 = ATgetArgument(o_23, 1);
      {
        ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
        ATerm p_7;
        p_7 = t;
        {
          ATerm w_23 = NULL;
          ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
          t = n_92(t);
          {
            w_23 = t;
            {
              if(((t_23 != NULL) && (t_23 != w_23)))
                _fail(w_23);
              else
                t_23 = w_23;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(t_23), not_null(p_23), not_null(q_23));
                {
                  t = table_push_0(t);
                  {
                    ATerm q_7 = t;
                    int r_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(t_23), term_x_7);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(r_7);
                      }
                    else
                      {
                        t = q_7;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      x_23 = t;
                      m_23 :
                      if(((ATgetType(x_23) == AT_LIST) && !(ATisEmpty(x_23))))
                        {
                          y_23 = ATgetFirst((ATermList) x_23);
                          z_23 = (ATerm) ATgetNext((ATermList) x_23);
                          {
                            if(((u_23 != NULL) && (u_23 != y_23)))
                              _fail(y_23);
                            else
                              u_23 = y_23;
                            {
                              if(((v_23 != NULL) && (v_23 != z_23)))
                                _fail(z_23);
                              else
                                v_23 = z_23;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(t_23), term_x_7, (ATerm) ATinsert(CheckATermList(not_null(v_23)), (ATerm) ATinsert(CheckATermList(not_null(u_23)), not_null(p_23))));
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
        t = p_7;
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
  ATerm e_24 = NULL;
  e_24 = t;
  {
    ATerm y_7;
    y_7 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_24)), term_a_8);
      {
        ATerm m_1 (ATerm t)
        {
          t = term_k_5;
          return(t);
        }
        t = assert_1(t, m_1);
      }
    }
    t = y_7;
  }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm v_69 (ATerm), ATerm w_69 (ATerm))
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL;
  n_24 = t;
  m_24 :
  if(match_cons(n_24, sym_Scope_2))
    {
      o_24 = ATgetArgument(n_24, 0);
      p_24 = ATgetArgument(n_24, 1);
      {
        ATerm t_24 = NULL,v_24 = NULL;
        ATerm u_24 = NULL;
        t = SSLgetAnnotations(not_null(n_24));
        {
          u_24 = t;
          if(((t_24 != NULL) && (t_24 != u_24)))
            _fail(u_24);
          else
            t_24 = u_24;
        }
        {
          t = not_null(o_24);
          {
            ATerm x_24 = NULL;
            t = v_69(t);
            {
              v_24 = t;
              {
                t = not_null(p_24);
                {
                  ATerm z_24 = NULL;
                  t = w_69(t);
                  {
                    x_24 = t;
                    {
                      ATerm a_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(v_24), not_null(x_24)), not_null(t_24));
                      {
                        a_25 = t;
                        if(((z_24 != NULL) && (z_24 != a_25)))
                          _fail(a_25);
                        else
                          z_24 = a_25;
                      }
                      t = not_null(z_24);
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
ATerm Tl_0 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
  i_25 = t;
  h_25 :
  if(((ATgetType(i_25) == AT_LIST) && !(ATisEmpty(i_25))))
    {
      j_25 = ATgetFirst((ATermList) i_25);
      k_25 = (ATerm) ATgetNext((ATermList) i_25);
      t = not_null(k_25);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  q_25 = t;
  p_25 :
  if(match_cons(q_25, sym__2))
    {
      r_25 = ATgetArgument(q_25, 0);
      s_25 = ATgetArgument(q_25, 1);
      {
        ATerm e_8;
        e_8 = t;
        {
          ATerm v_25 = NULL;
          ATerm w_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_25), not_null(s_25));
          {
            ATerm g_8 = t;
            int i_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(i_8);
              }
            else
              {
                t = g_8;
                t = (ATerm) ATempty;
              }
            {
              w_25 = t;
              if(((v_25 != NULL) && (v_25 != w_25)))
                _fail(w_25);
              else
                v_25 = w_25;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_25), not_null(s_25), not_null(v_25));
            t = table_put_0(t);
          }
        }
        t = e_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm k_92 (ATerm))
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
  ATerm l_8;
  l_8 = t;
  {
    ATerm g_26 = NULL;
    ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL;
    t = k_92(t);
    {
      g_26 = t;
      {
        if(((f_26 != NULL) && (f_26 != g_26)))
          _fail(g_26);
        else
          f_26 = g_26;
        {
          ATerm m_8 = t;
          int n_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_26), term_x_7);
              t = table_get_0(t);
              ;
              LocalPopChoice(n_8);
            }
          else
            {
              t = m_8;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            h_26 = t;
            c_26 :
            if(((ATgetType(h_26) == AT_LIST) && !(ATisEmpty(h_26))))
              {
                i_26 = ATgetFirst((ATermList) h_26);
                j_26 = (ATerm) ATgetNext((ATermList) h_26);
                {
                  if(((e_26 != NULL) && (e_26 != i_26)))
                    _fail(i_26);
                  else
                    e_26 = i_26;
                  {
                    if(((d_26 != NULL) && (d_26 != j_26)))
                      _fail(j_26);
                    else
                      d_26 = j_26;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(f_26), term_x_7, not_null(d_26));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(e_26);
                          {
                            ATerm n_1 (ATerm t)
                            {
                              ATerm k_26 = NULL;
                              k_26 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_26), not_null(k_26));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, n_1);
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
  t = l_8;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm j_83 (ATerm), ATerm k_83 (ATerm))
{
  ATerm o_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_83(t);
      t = k_83(t);
      ;
      LocalPopChoice(p_8);
    }
  else
    {
      t = o_8;
      {
        t = k_83(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm j_92 (ATerm))
{
  ATerm r_26 = NULL;
  ATerm q_8;
  q_8 = t;
  {
    ATerm s_26 = NULL;
    ATerm t_26 = NULL;
    t = j_92(t);
    {
      s_26 = t;
      {
        if(((r_26 != NULL) && (r_26 != s_26)))
          _fail(s_26);
        else
          r_26 = s_26;
        {
          ATerm u_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_26), term_x_7);
          {
            ATerm r_8 = t;
            int s_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(s_8);
              }
            else
              {
                t = r_8;
                t = (ATerm) ATempty;
              }
            {
              u_26 = t;
              if(((t_26 != NULL) && (t_26 != u_26)))
                _fail(u_26);
              else
                t_26 = u_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_26), term_x_7, (ATerm) ATinsert(CheckATermList(not_null(t_26)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = q_8;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm l_92 (ATerm), ATerm m_92 (ATerm))
{
  t = begin_scope_1(t, l_92);
  {
    ATerm o_1 (ATerm t)
    {
      t = end_scope_1(t, l_92);
      return(t);
    }
    t = restore_always_2(t, m_92, o_1);
  }
  return(t);
}
ATerm elim_scope_1 (ATerm t, ATerm j_78 (ATerm))
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  z_26 = t;
  y_26 :
  if(match_cons(z_26, sym_Scope_2))
    {
      a_27 = ATgetArgument(z_26, 0);
      b_27 = ATgetArgument(z_26, 1);
      {
        ATerm p_1 (ATerm t)
        {
          t = term_k_5;
          return(t);
        }
        ATerm q_1 (ATerm t)
        {
          ATerm r_1 (ATerm t)
          {
            t = map_1(t, DeclareDead_0);
            return(t);
          }
          t = Scope_2(t, r_1, j_78);
          t = EliminateFromScope_0(t);
          return(t);
        }
        t = scope_2(t, p_1, q_1);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm dead_var_elim_0 (ATerm t)
{
  ATerm t_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = elim_scope_1(t, dead_var_elim_0);
      ;
      LocalPopChoice(u_8);
    }
  else
    {
      t = t_8;
      {
        ATerm v_8 = t;
        int a_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = elim_sdef_1(t, dead_var_elim_0);
            ;
            LocalPopChoice(a_9);
          }
        else
          {
            t = v_8;
            {
              ATerm b_9 = t;
              int c_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MarkBuild_0(t);
                  ;
                  LocalPopChoice(c_9);
                }
              else
                {
                  t = b_9;
                  {
                    ATerm g_9 = t;
                    int i_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_1 (ATerm t)
                        {
                          t = map_1(t, dead_var_elim_0);
                          return(t);
                        }
                        ATerm t_1 (ATerm t)
                        {
                          t = map_1(t, mark_build_term_0);
                          return(t);
                        }
                        t = PrimT_3(t, _id, s_1, t_1);
                        ;
                        LocalPopChoice(i_9);
                      }
                    else
                      {
                        t = g_9;
                        {
                          ATerm l_9 = t;
                          int m_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_1 (ATerm t)
                              {
                                t = map_1(t, dead_var_elim_0);
                                return(t);
                              }
                              ATerm v_1 (ATerm t)
                              {
                                t = map_1(t, mark_build_term_0);
                                return(t);
                              }
                              t = CallT_3(t, _id, u_1, v_1);
                              ;
                              LocalPopChoice(m_9);
                            }
                          else
                            {
                              t = l_9;
                              {
                                ATerm n_9 = t;
                                int o_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Seq_2(t, _id, dead_var_elim_0);
                                    t = Seq_2(t, dead_var_elim_0, _id);
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
                                          t = elim_choice_1(t, dead_var_elim_0);
                                          ;
                                          LocalPopChoice(q_9);
                                        }
                                      else
                                        {
                                          t = p_9;
                                          {
                                            ATerm r_9 = t;
                                            int s_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = elim_lchoice_1(t, dead_var_elim_0);
                                                ;
                                                LocalPopChoice(s_9);
                                              }
                                            else
                                              {
                                                t = r_9;
                                                {
                                                  ATerm t_9 = t;
                                                  int u_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = elim_guardedlchoice_1(t, dead_var_elim_0);
                                                      ;
                                                      LocalPopChoice(u_9);
                                                    }
                                                  else
                                                    {
                                                      t = t_9;
                                                      {
                                                        ATerm z_9 = t;
                                                        int a_10 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = EliminateFromMatch_0(t);
                                                            ;
                                                            LocalPopChoice(a_10);
                                                          }
                                                        else
                                                          {
                                                            t = z_9;
                                                            t = _all(t, dead_var_elim_0);
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm map_1 (ATerm t, ATerm d_86 (ATerm))
{
  ATerm e_27 (ATerm t)
  {
    ATerm b_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(f_10);
      }
    else
      {
        t = b_10;
        t = Cons_2(t, d_86, e_27);
      }
    return(t);
  }
  t = e_27(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm c_65 (ATerm))
{
  ATerm a_28 = NULL,b_28 = NULL;
  a_28 = t;
  z_27 :
  if(match_cons(a_28, sym_Strategies_1))
    {
      b_28 = ATgetArgument(a_28, 0);
      {
        ATerm e_28 = NULL,g_28 = NULL;
        ATerm f_28 = NULL;
        t = SSLgetAnnotations(not_null(a_28));
        {
          f_28 = t;
          if(((e_28 != NULL) && (e_28 != f_28)))
            _fail(f_28);
          else
            e_28 = f_28;
        }
        {
          t = not_null(b_28);
          {
            ATerm i_28 = NULL;
            t = c_65(t);
            {
              g_28 = t;
              {
                ATerm j_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(g_28)), not_null(e_28));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_64 (ATerm), ATerm z_64 (ATerm))
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  u_28 = t;
  t_28 :
  if(((ATgetType(u_28) == AT_LIST) && !(ATisEmpty(u_28))))
    {
      v_28 = ATgetFirst((ATermList) u_28);
      w_28 = (ATerm) ATgetNext((ATermList) u_28);
      {
        ATerm a_29 = NULL,c_29 = NULL;
        ATerm b_29 = NULL;
        t = SSLgetAnnotations(not_null(u_28));
        {
          b_29 = t;
          if(((a_29 != NULL) && (a_29 != b_29)))
            _fail(b_29);
          else
            a_29 = b_29;
        }
        {
          t = not_null(v_28);
          {
            ATerm e_29 = NULL;
            t = y_64(t);
            {
              c_29 = t;
              {
                t = not_null(w_28);
                {
                  ATerm g_29 = NULL;
                  t = z_64(t);
                  {
                    e_29 = t;
                    {
                      ATerm h_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_29)), not_null(c_29)), not_null(a_29));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm s_29 = NULL,t_29 = NULL;
  s_29 = t;
  r_29 :
  if(match_cons(s_29, sym_Signature_1))
    {
      t_29 = ATgetArgument(s_29, 0);
      {
        ATerm w_29 = NULL,y_29 = NULL;
        ATerm x_29 = NULL;
        t = SSLgetAnnotations(not_null(s_29));
        {
          x_29 = t;
          if(((w_29 != NULL) && (w_29 != x_29)))
            _fail(x_29);
          else
            w_29 = x_29;
        }
        {
          t = not_null(t_29);
          {
            ATerm a_30 = NULL;
            t = d_65(t);
            {
              y_29 = t;
              {
                ATerm b_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(y_29)), not_null(w_29));
                {
                  b_30 = t;
                  if(((a_30 != NULL) && (a_30 != b_30)))
                    _fail(b_30);
                  else
                    a_30 = b_30;
                }
                t = not_null(a_30);
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
ATerm Specification_1 (ATerm t, ATerm h_65 (ATerm))
{
  ATerm l_30 = NULL,m_30 = NULL;
  l_30 = t;
  k_30 :
  if(match_cons(l_30, sym_Specification_1))
    {
      m_30 = ATgetArgument(l_30, 0);
      {
        ATerm p_30 = NULL,r_30 = NULL;
        ATerm q_30 = NULL;
        t = SSLgetAnnotations(not_null(l_30));
        {
          q_30 = t;
          if(((p_30 != NULL) && (p_30 != q_30)))
            _fail(q_30);
          else
            p_30 = q_30;
        }
        {
          t = not_null(m_30);
          {
            ATerm t_30 = NULL;
            t = h_65(t);
            {
              r_30 = t;
              {
                ATerm u_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(r_30)), not_null(p_30));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm p_63 (ATerm), ATerm q_63 (ATerm))
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL;
  h_31 = t;
  g_31 :
  if(match_cons(h_31, sym__2))
    {
      i_31 = ATgetArgument(h_31, 0);
      j_31 = ATgetArgument(h_31, 1);
      {
        ATerm n_31 = NULL,p_31 = NULL;
        ATerm o_31 = NULL;
        t = SSLgetAnnotations(not_null(h_31));
        {
          o_31 = t;
          if(((n_31 != NULL) && (n_31 != o_31)))
            _fail(o_31);
          else
            n_31 = o_31;
        }
        {
          t = not_null(i_31);
          {
            ATerm r_31 = NULL;
            t = p_63(t);
            {
              p_31 = t;
              {
                t = not_null(j_31);
                {
                  ATerm t_31 = NULL;
                  t = q_63(t);
                  {
                    r_31 = t;
                    {
                      ATerm u_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(p_31), not_null(r_31)), not_null(n_31));
                      {
                        u_31 = t;
                        if(((t_31 != NULL) && (t_31 != u_31)))
                          _fail(u_31);
                        else
                          t_31 = u_31;
                      }
                      t = not_null(t_31);
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
  ATerm h_10;
  h_10 = t;
  {
    ATerm b_32 = NULL;
    ATerm c_32 = NULL;
    t = term_j_6;
    {
      t = whoami_0(t);
      {
        c_32 = t;
        if(((b_32 != NULL) && (b_32 != c_32)))
          _fail(c_32);
        else
          b_32 = c_32;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_10), not_null(b_32)), term_l_10));
      {
        t = printnl_0(t);
        {
          t = term_n_10;
          t = exit_0(t);
        }
      }
    }
  }
  t = h_10;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
  g_32 = t;
  f_32 :
  if(match_cons(g_32, sym__2))
    {
      h_32 = ATgetArgument(g_32, 0);
      i_32 = ATgetArgument(g_32, 1);
      {
        ATerm o_10;
        o_10 = t;
        t = SSL_printnl(not_null(h_32), not_null(i_32));
        t = o_10;
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
  ATerm n_32 = NULL;
  n_32 = t;
  t = SSL_implode_string(not_null(n_32));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm p_10 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(e_11);
    }
  else
    {
      t = p_10;
      {
        ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL;
        s_32 = t;
        r_32 :
        if(((ATgetType(s_32) == AT_LIST) && !(ATisEmpty(s_32))))
          {
            t_32 = ATgetFirst((ATermList) s_32);
            u_32 = (ATerm) ATgetNext((ATermList) s_32);
            {
              t = not_null(t_32);
              {
                ATerm w_1 (ATerm t)
                {
                  t = not_null(u_32);
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
  ATerm e_33 = NULL;
  ATerm g_33 = NULL;
  e_33 = t;
  {
    ATerm h_33 = NULL;
    ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
    t = not_null(e_33);
    {
      h_33 = t;
      {
        t = SSL_explode_term(not_null(h_33));
        {
          j_33 = t;
          c_33 :
          if(match_cons(j_33, sym__2))
            {
              k_33 = ATgetArgument(j_33, 0);
              l_33 = ATgetArgument(j_33, 1);
              d_33 :
              if(match_string(k_33, ""))
                {
                  if(((g_33 != NULL) && (g_33 != l_33)))
                    _fail(l_33);
                  else
                    g_33 = l_33;
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
      t = not_null(g_33);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm t_86 (ATerm))
{
  ATerm p_33 (ATerm t)
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_33);
        ;
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
        {
          t = Nil_0(t);
          t = t_86(t);
        }
      }
    return(t);
  }
  t = p_33(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
  s_33 = t;
  r_33 :
  if(match_cons(s_33, sym__2))
    {
      t_33 = ATgetArgument(s_33, 0);
      u_33 = ATgetArgument(s_33, 1);
      {
        t = not_null(t_33);
        {
          ATerm x_1 (ATerm t)
          {
            t = not_null(u_33);
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
  ATerm l_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = l_11;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm z_33 = NULL;
  z_33 = t;
  t = SSL_explode_string(not_null(z_33));
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
  ATerm s_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(w_11);
    }
  else
    {
      t = s_11;
      {
        ATerm x_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, y_1);
            ;
            LocalPopChoice(y_11);
          }
        else
          {
            t = x_11;
            {
              ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL;
              i_34 = t;
              h_34 :
              if(match_cons(i_34, sym_Path_1))
                {
                  j_34 = ATgetArgument(i_34, 0);
                  t = not_null(j_34);
                }
              else
                {
                  if(match_cons(i_34, sym_Var_1))
                    {
                      j_34 = ATgetArgument(i_34, 0);
                      {
                        t = not_null(j_34);
                        {
                          ATerm z_11 = t;
                          int a_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(a_12);
                            }
                          else
                            {
                              t = z_11;
                              {
                                ATerm z_1 (ATerm t)
                                {
                                  t = term_c_12;
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
                      if(match_cons(i_34, sym_Prefix_2))
                        {
                          j_34 = ATgetArgument(i_34, 0);
                          k_34 = ATgetArgument(i_34, 1);
                          {
                            ATerm p_34 = NULL,r_34 = NULL;
                            ATerm d_12;
                            d_12 = t;
                            {
                              ATerm q_34 = NULL;
                              t = not_null(j_34);
                              {
                                t = eval_config_0(t);
                                {
                                  q_34 = t;
                                  if(((p_34 != NULL) && (p_34 != q_34)))
                                    _fail(q_34);
                                  else
                                    p_34 = q_34;
                                }
                              }
                            }
                            t = d_12;
                            {
                              ATerm s_34 = NULL;
                              t = not_null(k_34);
                              {
                                t = eval_config_0(t);
                                {
                                  s_34 = t;
                                  if(((r_34 != NULL) && (r_34 != s_34)))
                                    _fail(s_34);
                                  else
                                    r_34 = s_34;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_34), not_null(r_34));
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
  ATerm f_35 = NULL;
  f_35 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_12, not_null(f_35));
    {
      t = table_get_0(t);
      {
        ATerm a_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm g_12;
            g_12 = t;
            {
              ATerm h_35 = NULL;
              ATerm i_35 = NULL;
              i_35 = t;
              if(((h_35 != NULL) && (h_35 != i_35)))
                _fail(i_35);
              else
                h_35 = i_35;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_e_12, not_null(f_35), not_null(h_35));
                t = table_put_0(t);
              }
            }
            t = g_12;
          }
          return(t);
        }
        t = try_1(t, a_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm v_102 (ATerm))
{
  ATerm b_2 (ATerm t)
  {
    ATerm h_12;
    h_12 = t;
    {
      ATerm m_35 = NULL;
      ATerm n_35 = NULL;
      t = term_i_12;
      {
        t = get_config_0(t);
        {
          n_35 = t;
          if(((m_35 != NULL) && (m_35 != n_35)))
            _fail(n_35);
          else
            m_35 = n_35;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_35), term_j_12);
        t = geq_0(t);
      }
    }
    t = h_12;
    t = v_102(t);
    return(t);
  }
  t = try_1(t, b_2);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
  y_35 = t;
  w_35 :
  if(match_cons(y_35, sym__2))
    {
      z_35 = ATgetArgument(y_35, 0);
      a_36 = ATgetArgument(y_35, 1);
      x_35 :
      if(match_cons(a_36, sym_Stream_1))
        {
          b_36 = ATgetArgument(a_36, 0);
          {
            ATerm e_36 = NULL;
            t = SSL_fputc(not_null(z_35), not_null(b_36));
            {
              ATerm f_36 = NULL;
              f_36 = t;
              if(((e_36 != NULL) && (e_36 != f_36)))
                _fail(f_36);
              else
                e_36 = f_36;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_36));
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
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL;
  m_36 = t;
  k_36 :
  if(match_cons(m_36, sym__2))
    {
      n_36 = ATgetArgument(m_36, 0);
      p_36 = ATgetArgument(m_36, 1);
      l_36 :
      if(match_cons(n_36, sym_Stream_1))
        {
          o_36 = ATgetArgument(n_36, 0);
          {
            ATerm s_36 = NULL;
            t = SSL_write_term_to_stream_text(not_null(o_36), not_null(p_36));
            {
              ATerm t_36 = NULL;
              t_36 = t;
              if(((s_36 != NULL) && (s_36 != t_36)))
                _fail(t_36);
              else
                s_36 = t_36;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_36));
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
    ATerm x_36 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm y_36 = NULL;
      y_36 = t;
      if(((x_36 != NULL) && (x_36 != y_36)))
        _fail(y_36);
      else
        x_36 = y_36;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_12, not_null(x_36));
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
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL;
  e_37 = t;
  c_37 :
  if(match_cons(e_37, sym__2))
    {
      f_37 = ATgetArgument(e_37, 0);
      h_37 = ATgetArgument(e_37, 1);
      d_37 :
      if(match_cons(f_37, sym_Stream_1))
        {
          g_37 = ATgetArgument(f_37, 0);
          {
            ATerm l_37 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(g_37), not_null(h_37));
            {
              ATerm m_37 = NULL;
              m_37 = t;
              if(((l_37 != NULL) && (l_37 != m_37)))
                _fail(m_37);
              else
                l_37 = m_37;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_37));
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
ATerm WriteToFile_1 (ATerm t, ATerm r_101 (ATerm))
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL;
  t_37 = t;
  s_37 :
  if(match_cons(t_37, sym__2))
    {
      u_37 = ATgetArgument(t_37, 0);
      v_37 = ATgetArgument(t_37, 1);
      {
        ATerm y_37 = NULL,a_38 = NULL;
        t = not_null(u_37);
        {
          ATerm z_37 = NULL;
          z_37 = t;
          if(((y_37 != NULL) && (y_37 != z_37)))
            _fail(z_37);
          else
            y_37 = z_37;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_37), term_m_12);
            {
              t = open_stream_0(t);
              {
                ATerm b_38 = NULL;
                b_38 = t;
                if(((a_38 != NULL) && (a_38 != b_38)))
                  _fail(b_38);
                else
                  a_38 = b_38;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_38), not_null(v_37));
                  {
                    t = r_101(t);
                    {
                      t = fclose_0(t);
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  t = WriteToFile_1(t, write_in_baf_to_stream_0);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm j_38 = NULL;
  ATerm o_12;
  o_12 = t;
  {
    ATerm d_2 (ATerm t)
    {
      ATerm r_12 = t;
      int s_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_2 (ATerm t)
          {
            ATerm m_38 = NULL,n_38 = NULL;
            m_38 = t;
            g_38 :
            if(match_cons(m_38, sym_Output_1))
              {
                n_38 = ATgetArgument(m_38, 0);
                if(((j_38 != NULL) && (j_38 != n_38)))
                  _fail(n_38);
                else
                  j_38 = n_38;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, e_2);
          ;
          LocalPopChoice(s_12);
        }
      else
        {
          t = r_12;
          {
            ATerm o_38 = NULL;
            t = term_t_12;
            {
              o_38 = t;
              if(((j_38 != NULL) && (j_38 != o_38)))
                _fail(o_38);
              else
                j_38 = o_38;
            }
          }
        }
      return(t);
    }
    t = _2(t, d_2, _id);
  }
  t = o_12;
  {
    ATerm f_2 (ATerm t)
    {
      ATerm g_2 (ATerm t)
      {
        t = not_null(j_38);
        return(t);
      }
      t = split_2(t, g_2, _id);
      return(t);
    }
    t = _2(t, _id, f_2);
    {
      ATerm u_12 = t;
      int v_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_2 (ATerm t)
          {
            ATerm i_2 (ATerm t)
            {
              ATerm p_38 = NULL;
              p_38 = t;
              i_38 :
              if(!(match_cons(p_38, sym_Binary_0)))
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
          LocalPopChoice(v_12);
        }
      else
        {
          t = u_12;
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
ATerm apply_strategy_1 (ATerm t, ATerm t_104 (ATerm))
{
  ATerm v_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL;
  ATerm a_13;
  a_13 = t;
  t = dtime_0(t);
  t = a_13;
  {
    t = t_104(t);
    {
      ATerm b_13;
      b_13 = t;
      {
        ATerm w_38 = NULL;
        t = dtime_0(t);
        {
          w_38 = t;
          if(((v_38 != NULL) && (v_38 != w_38)))
            _fail(w_38);
          else
            v_38 = w_38;
        }
      }
      t = b_13;
      {
        x_38 = t;
        u_38 :
        if(match_cons(x_38, sym__2))
          {
            y_38 = ATgetArgument(x_38, 0);
            z_38 = ATgetArgument(x_38, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_38)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(v_38))), not_null(z_38));
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
  ATerm h_39 = NULL,i_39 = NULL;
  ATerm o_39 (ATerm t)
  {
    t = SSL_fclose(not_null(i_39));
    return(t);
  }
  i_39 = t;
  g_39 :
  if(match_cons(i_39, sym_Stream_1))
    {
      h_39 = ATgetArgument(i_39, 0);
      {
        ATerm c_13 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(h_39));
            ;
            LocalPopChoice(d_13);
          }
        else
          {
            t = c_13;
            t = o_39(t);
          }
      }
    }
  else
    {
      t = o_39(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL;
  r_39 = t;
  q_39 :
  if(match_cons(r_39, sym_Stream_1))
    {
      s_39 = ATgetArgument(r_39, 0);
      t = SSL_read_term_from_stream(not_null(s_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm d_101 (ATerm))
{
  ATerm e_13;
  e_13 = t;
  {
    ATerm x_39 = NULL,z_39 = NULL;
    ATerm f_13;
    f_13 = t;
    {
      ATerm y_39 = NULL;
      t = d_101(t);
      {
        y_39 = t;
        if(((x_39 != NULL) && (x_39 != y_39)))
          _fail(y_39);
        else
          x_39 = y_39;
      }
    }
    t = f_13;
    {
      ATerm a_40 = NULL;
      a_40 = t;
      if(((z_39 != NULL) && (z_39 != a_40)))
        _fail(a_40);
      else
        z_39 = a_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_39)), not_null(x_39)));
        t = printnl_0(t);
      }
    }
  }
  t = e_13;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL;
  g_40 = t;
  f_40 :
  if(match_cons(g_40, sym__2))
    {
      h_40 = ATgetArgument(g_40, 0);
      i_40 = ATgetArgument(g_40, 1);
      {
        ATerm m_40 = NULL;
        t = SSL_fopen(not_null(h_40), not_null(i_40));
        {
          ATerm n_40 = NULL;
          n_40 = t;
          if(((m_40 != NULL) && (m_40 != n_40)))
            _fail(n_40);
          else
            m_40 = n_40;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_40));
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
  ATerm t_40 = NULL;
  t_40 = t;
  t = SSL_is_string(not_null(t_40));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm x_40 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm y_40 = NULL;
    y_40 = t;
    if(((x_40 != NULL) && (x_40 != y_40)))
      _fail(y_40);
    else
      x_40 = y_40;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_40));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm b_41 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm c_41 = NULL;
    c_41 = t;
    if(((b_41 != NULL) && (b_41 != c_41)))
      _fail(c_41);
    else
      b_41 = c_41;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_41));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm f_41 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm g_41 = NULL;
    g_41 = t;
    if(((f_41 != NULL) && (f_41 != g_41)))
      _fail(g_41);
    else
      f_41 = g_41;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_41));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm m_41 = NULL;
  m_41 = t;
  l_41 :
  if(match_cons(m_41, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(m_41, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(m_41, sym_stdin_0))
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
  ATerm s_42 = NULL;
  ATerm a_43 = NULL,b_43 = NULL;
  s_42 = t;
  {
    ATerm c_43 = NULL;
    ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL,o_43 = NULL;
    t = not_null(s_42);
    {
      c_43 = t;
      {
        t = SSL_explode_term(not_null(c_43));
        {
          e_43 = t;
          p_42 :
          if(match_cons(e_43, sym__2))
            {
              f_43 = ATgetArgument(e_43, 0);
              g_43 = ATgetArgument(e_43, 1);
              q_42 :
              if(match_string(f_43, ""))
                {
                  r_42 :
                  if(((ATgetType(g_43) == AT_LIST) && !(ATisEmpty(g_43))))
                    {
                      h_43 = ATgetFirst((ATermList) g_43);
                      o_43 = (ATerm) ATgetNext((ATermList) g_43);
                      {
                        if(((b_43 != NULL) && (b_43 != h_43)))
                          _fail(h_43);
                        else
                          b_43 = h_43;
                        if(((a_43 != NULL) && (a_43 != o_43)))
                          _fail(o_43);
                        else
                          a_43 = o_43;
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
    t = not_null(b_43);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL;
  e_44 = t;
  c_44 :
  if(match_cons(e_44, sym__2))
    {
      f_44 = ATgetArgument(e_44, 0);
      g_44 = ATgetArgument(e_44, 1);
      {
        ATerm g_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(l_13);
          }
        else
          {
            t = g_13;
            {
              ATerm m_13 = t;
              int n_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_2 (ATerm t)
                  {
                    ATerm h_44 = NULL,i_44 = NULL;
                    h_44 = t;
                    b_44 :
                    if(match_cons(h_44, sym_Path_1))
                      {
                        i_44 = ATgetArgument(h_44, 0);
                        t = not_null(i_44);
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
                  LocalPopChoice(n_13);
                }
              else
                {
                  t = m_13;
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
  ATerm q_44 = NULL;
  ATerm r_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_44 = NULL;
      ATerm p_44 = NULL;
      p_44 = t;
      if(((o_44 != NULL) && (o_44 != p_44)))
        _fail(p_44);
      else
        o_44 = p_44;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_44), term_w_13);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(t_13);
    }
  else
    {
      t = r_13;
      {
        ATerm k_2 (ATerm t)
        {
          t = term_x_13;
          return(t);
        }
        t = debug_1(t, k_2);
        _fail(t);
      }
    }
  {
    ATerm y_13;
    y_13 = t;
    {
      ATerm r_44 = NULL;
      t = read_from_stream_0(t);
      {
        r_44 = t;
        if(((q_44 != NULL) && (q_44 != r_44)))
          _fail(r_44);
        else
          q_44 = r_44;
      }
    }
    t = y_13;
    {
      t = fclose_0(t);
      t = not_null(q_44);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm o_83 (ATerm), ATerm p_83 (ATerm))
{
  ATerm w_44 = NULL,y_44 = NULL;
  ATerm z_13;
  z_13 = t;
  {
    ATerm x_44 = NULL;
    t = o_83(t);
    {
      x_44 = t;
      if(((w_44 != NULL) && (w_44 != x_44)))
        _fail(x_44);
      else
        w_44 = x_44;
    }
  }
  t = z_13;
  {
    ATerm z_44 = NULL;
    t = p_83(t);
    {
      z_44 = t;
      if(((y_44 != NULL) && (y_44 != z_44)))
        _fail(z_44);
      else
        y_44 = z_44;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_44), not_null(y_44));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm f_45 = NULL;
  ATerm a_14;
  a_14 = t;
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_2 (ATerm t)
        {
          ATerm g_45 = NULL,h_45 = NULL;
          g_45 = t;
          d_45 :
          if(match_cons(g_45, sym_Input_1))
            {
              h_45 = ATgetArgument(g_45, 0);
              if(((f_45 != NULL) && (f_45 != h_45)))
                _fail(h_45);
              else
                f_45 = h_45;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, l_2);
        ;
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        {
          ATerm i_45 = NULL;
          t = term_j_14;
          {
            i_45 = t;
            if(((f_45 != NULL) && (f_45 != i_45)))
              _fail(i_45);
            else
              f_45 = i_45;
          }
        }
      }
  }
  t = a_14;
  {
    ATerm m_2 (ATerm t)
    {
      t = not_null(f_45);
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
    ATerm n_45 = NULL;
    n_45 = t;
    l_45 :
    if(!(match_string(n_45, "-k")))
      {
        if(!(match_string(n_45, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm k_14;
    k_14 = t;
    {
      ATerm o_45 = NULL;
      ATerm p_45 = NULL;
      t = string_to_int_0(t);
      {
        p_45 = t;
        if(((o_45 != NULL) && (o_45 != p_45)))
          _fail(p_45);
        else
          o_45 = p_45;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_14, not_null(o_45));
        t = set_config_0(t);
      }
    }
    t = k_14;
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_q_14;
    return(t);
  }
  t = ArgOption_3(t, n_2, o_2, p_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm s_45 = NULL;
  s_45 = t;
  t = SSL_string_to_int(not_null(s_45));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_2 (ATerm t)
      {
        ATerm a_46 = NULL;
        a_46 = t;
        v_45 :
        if(!(match_string(a_46, "-S")))
          {
            if(!(match_string(a_46, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_2 (ATerm t)
      {
        t = term_y_14;
        t = set_config_0(t);
        t = term_z_14;
        return(t);
      }
      ATerm s_2 (ATerm t)
      {
        t = term_c_15;
        return(t);
      }
      t = Option_3(t, q_2, r_2, s_2);
      ;
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
      {
        ATerm d_15 = t;
        int f_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 (ATerm t)
            {
              ATerm b_46 = NULL;
              b_46 = t;
              w_45 :
              if(!(match_string(b_46, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm u_2 (ATerm t)
            {
              ATerm e_46 = NULL;
              ATerm j_15;
              j_15 = t;
              {
                ATerm c_46 = NULL;
                ATerm d_46 = NULL;
                t = string_to_int_0(t);
                {
                  d_46 = t;
                  if(((c_46 != NULL) && (c_46 != d_46)))
                    _fail(d_46);
                  else
                    c_46 = d_46;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_i_12, not_null(c_46));
                  t = set_config_0(t);
                }
              }
              t = j_15;
              {
                ATerm f_46 = NULL;
                f_46 = t;
                if(((e_46 != NULL) && (e_46 != f_46)))
                  _fail(f_46);
                else
                  e_46 = f_46;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_46));
              }
              return(t);
            }
            ATerm v_2 (ATerm t)
            {
              t = term_k_15;
              return(t);
            }
            t = ArgOption_3(t, t_2, u_2, v_2);
            ;
            LocalPopChoice(f_15);
          }
        else
          {
            t = d_15;
            {
              ATerm w_2 (ATerm t)
              {
                ATerm g_46 = NULL;
                g_46 = t;
                z_45 :
                if(!(match_string(g_46, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm x_2 (ATerm t)
              {
                t = term_m_15;
                t = set_config_0(t);
                t = term_n_15;
                return(t);
              }
              ATerm y_2 (ATerm t)
              {
                t = term_o_15;
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
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(q_15);
    }
  else
    {
      t = p_15;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm m_46 = NULL;
    m_46 = t;
    j_46 :
    if(!(match_string(m_46, "-o")))
      {
        if(!(match_string(m_46, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm p_46 = NULL;
    ATerm w_15;
    w_15 = t;
    {
      ATerm n_46 = NULL;
      ATerm o_46 = NULL;
      o_46 = t;
      if(((n_46 != NULL) && (n_46 != o_46)))
        _fail(o_46);
      else
        n_46 = o_46;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_15, not_null(n_46));
        t = set_config_0(t);
      }
    }
    t = w_15;
    {
      ATerm q_46 = NULL;
      q_46 = t;
      if(((p_46 != NULL) && (p_46 != q_46)))
        _fail(q_46);
      else
        p_46 = q_46;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_46));
    }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_y_15;
    return(t);
  }
  t = ArgOption_3(t, z_2, a_3, b_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm z_15 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(d_16);
    }
  else
    {
      t = z_15;
      {
        ATerm c_3 (ATerm t)
        {
          ATerm u_46 = NULL;
          u_46 = t;
          t_46 :
          if(!(match_string(u_46, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm d_3 (ATerm t)
        {
          t = term_h_16;
          t = set_config_0(t);
          t = term_k_16;
          return(t);
        }
        ATerm e_3 (ATerm t)
        {
          t = term_l_16;
          return(t);
        }
        t = Option_3(t, c_3, d_3, e_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL;
  a_47 = t;
  y_46 :
  if(match_string(a_47, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(a_47) == AT_LIST) && !(ATisEmpty(a_47))))
        {
          b_47 = ATgetFirst((ATermList) a_47);
          c_47 = (ATerm) ATgetNext((ATermList) a_47);
          z_46 :
          if(((ATgetType(c_47) == AT_LIST) && !(ATisEmpty(c_47))))
            {
              d_47 = ATgetFirst((ATermList) c_47);
              e_47 = (ATerm) ATgetNext((ATermList) c_47);
              {
                ATerm i_47 = NULL;
                ATerm m_16;
                m_16 = t;
                {
                  t = not_null(b_47);
                  t = j_0(t);
                }
                t = m_16;
                {
                  ATerm j_47 = NULL;
                  t = not_null(d_47);
                  {
                    t = l_0(t);
                    {
                      j_47 = t;
                      if(((i_47 != NULL) && (i_47 != j_47)))
                        _fail(j_47);
                      else
                        i_47 = j_47;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_47)), not_null(i_47));
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
    ATerm q_47 = NULL;
    q_47 = t;
    n_47 :
    if(!(match_string(q_47, "-i")))
      {
        if(!(match_string(q_47, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    ATerm t_47 = NULL;
    ATerm n_16;
    n_16 = t;
    {
      ATerm r_47 = NULL;
      ATerm s_47 = NULL;
      s_47 = t;
      if(((r_47 != NULL) && (r_47 != s_47)))
        _fail(s_47);
      else
        r_47 = s_47;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_16, not_null(r_47));
        t = set_config_0(t);
      }
    }
    t = n_16;
    {
      ATerm u_47 = NULL;
      u_47 = t;
      if(((t_47 != NULL) && (t_47 != u_47)))
        _fail(u_47);
      else
        t_47 = u_47;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_47));
    }
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_p_16;
    return(t);
  }
  t = ArgOption_3(t, f_3, g_3, h_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(r_16);
    }
  else
    {
      t = q_16;
      {
        ATerm s_16 = t;
        int t_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(t_16);
          }
        else
          {
            t = s_16;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm y_47 = NULL;
  t = report_run_time_0(t);
  {
    ATerm z_47 = NULL;
    t = term_j_6;
    {
      t = whoami_0(t);
      {
        z_47 = t;
        if(((y_47 != NULL) && (y_47 != z_47)))
          _fail(z_47);
        else
          y_47 = z_47;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_10, (ATerm) ATinsert(ATinsert(ATempty, term_u_16), not_null(y_47)));
      {
        t = printnl_0(t);
        {
          t = term_n_10;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_v_16;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_48 = NULL;
  c_48 = t;
  t = SSL_TicksToSeconds(not_null(c_48));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL;
  h_48 = t;
  g_48 :
  if(match_cons(h_48, sym__2))
    {
      i_48 = ATgetArgument(h_48, 0);
      j_48 = ATgetArgument(h_48, 1);
      {
        ATerm b_17 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(i_48), not_null(j_48));
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = b_17;
            t = SSL_addr(not_null(i_48), not_null(j_48));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm c_91 (ATerm), ATerm d_91 (ATerm))
{
  ATerm d_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_91(t);
      ;
      LocalPopChoice(e_17);
    }
  else
    {
      t = d_17;
      {
        ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL;
        q_48 = t;
        p_48 :
        if(((ATgetType(q_48) == AT_LIST) && !(ATisEmpty(q_48))))
          {
            r_48 = ATgetFirst((ATermList) q_48);
            s_48 = (ATerm) ATgetNext((ATermList) q_48);
            {
              ATerm v_48 = NULL;
              ATerm w_48 = NULL;
              t = not_null(s_48);
              {
                t = foldr_2(t, c_91, d_91);
                {
                  w_48 = t;
                  if(((v_48 != NULL) && (v_48 != w_48)))
                    _fail(w_48);
                  else
                    v_48 = w_48;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_48), not_null(v_48));
                t = d_91(t);
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
ATerm crush_2 (ATerm t, ATerm a_89 (ATerm), ATerm b_89 (ATerm))
{
  ATerm d_49 = NULL;
  ATerm f_49 = NULL;
  d_49 = t;
  {
    ATerm g_49 = NULL;
    ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL;
    t = not_null(d_49);
    {
      g_49 = t;
      {
        t = SSL_explode_term(not_null(g_49));
        {
          i_49 = t;
          c_49 :
          if(match_cons(i_49, sym__2))
            {
              j_49 = ATgetArgument(i_49, 0);
              k_49 = ATgetArgument(i_49, 1);
              if(((f_49 != NULL) && (f_49 != k_49)))
                _fail(k_49);
              else
                f_49 = k_49;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(f_49);
      t = foldr_2(t, a_89, b_89);
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
      t = term_t_14;
      return(t);
    }
    t = crush_2(t, i_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL;
  q_49 = t;
  p_49 :
  if(match_cons(q_49, sym__2))
    {
      r_49 = ATgetArgument(q_49, 0);
      s_49 = ATgetArgument(q_49, 1);
      {
        ATerm i_17;
        i_17 = t;
        {
          ATerm k_17 = t;
          int m_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_49), not_null(s_49));
              ;
              LocalPopChoice(m_17);
            }
          else
            {
              t = k_17;
              t = SSL_gtr(not_null(r_49), not_null(s_49));
            }
        }
        t = i_17;
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
  ATerm y_49 = NULL;
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL;
      z_49 = t;
      x_49 :
      if(match_cons(z_49, sym__2))
        {
          a_50 = ATgetArgument(z_49, 0);
          b_50 = ATgetArgument(z_49, 1);
          {
            if(((y_49 != NULL) && (y_49 != a_50)))
              _fail(a_50);
            else
              y_49 = a_50;
            if(((y_49 != NULL) && (y_49 != b_50)))
              _fail(b_50);
            else
              y_49 = b_50;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(q_17);
    }
  else
    {
      t = p_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm u_102 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm r_17;
    r_17 = t;
    {
      ATerm e_50 = NULL;
      ATerm f_50 = NULL;
      t = term_i_12;
      {
        t = get_config_0(t);
        {
          f_50 = t;
          if(((e_50 != NULL) && (e_50 != f_50)))
            _fail(f_50);
          else
            e_50 = f_50;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_50), term_n_10);
        t = geq_0(t);
      }
    }
    t = r_17;
    t = u_102(t);
    return(t);
  }
  t = try_1(t, j_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm j_50 = NULL,l_50 = NULL;
    ATerm s_17;
    s_17 = t;
    {
      ATerm k_50 = NULL;
      t = run_time_0(t);
      {
        k_50 = t;
        if(((j_50 != NULL) && (j_50 != k_50)))
          _fail(k_50);
        else
          j_50 = k_50;
      }
    }
    t = s_17;
    {
      ATerm m_50 = NULL;
      t = term_j_6;
      {
        t = whoami_0(t);
        {
          m_50 = t;
          if(((l_50 != NULL) && (l_50 != m_50)))
            _fail(m_50);
          else
            l_50 = m_50;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_17), not_null(j_50)), term_t_17), not_null(l_50)));
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
    t = term_t_14;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm w_50 = NULL;
  w_50 = t;
  v_50 :
  if(match_cons(w_50, sym_Version_0))
    {
      ATerm y_50 = NULL,a_51 = NULL;
      ATerm v_17;
      v_17 = t;
      {
        ATerm z_50 = NULL;
        t = SSLgetAnnotations(not_null(w_50));
        {
          z_50 = t;
          if(((y_50 != NULL) && (y_50 != z_50)))
            _fail(z_50);
          else
            y_50 = z_50;
        }
      }
      t = v_17;
      {
        ATerm b_51 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(y_50));
        {
          b_51 = t;
          if(((a_51 != NULL) && (a_51 != b_51)))
            _fail(b_51);
          else
            a_51 = b_51;
        }
        t = not_null(a_51);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_105 (ATerm))
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_17;
      t = get_config_0(t);
      ;
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      {
        ATerm l_3 (ATerm t)
        {
          ATerm c_18 = t;
          int d_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(d_18);
            }
          else
            {
              t = c_18;
              {
                ATerm h_18 = t;
                int k_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(k_18);
                  }
                else
                  {
                    t = h_18;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, l_3);
      }
    }
  t = r_105(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm g_51 = NULL;
  g_51 = t;
  t = SSL_table_create(not_null(g_51));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_51 = NULL;
  k_51 = t;
  {
    ATerm l_18;
    l_18 = t;
    {
      t = term_m_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_18, term_n_18, not_null(k_51));
          t = table_put_0(t);
        }
      }
    }
    t = l_18;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm o_51 = NULL;
  o_51 = t;
  t = SSL_table_destroy(not_null(o_51));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm s_51 = NULL;
  s_51 = t;
  t = SSL_exit(not_null(s_51));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm s_107 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm e_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
  d_52 = t;
  a_52 :
  if(((ATgetType(d_52) == AT_LIST) && !(ATisEmpty(d_52))))
    {
      b_52 = ATgetFirst((ATermList) d_52);
      c_52 = (ATerm) ATgetNext((ATermList) d_52);
      {
        ATerm g_52 = NULL;
        t = not_null(c_52);
        {
          ATerm o_18;
          o_18 = t;
          {
            ATerm h_52 = NULL,j_52 = NULL,l_52 = NULL;
            ATerm q_18;
            q_18 = t;
            {
              ATerm i_52 = NULL;
              t = g_0(t);
              {
                i_52 = t;
                if(((h_52 != NULL) && (h_52 != i_52)))
                  _fail(i_52);
                else
                  h_52 = i_52;
              }
            }
            t = q_18;
            {
              ATerm k_52 = NULL;
              t = not_null(b_52);
              {
                t = e_0(t);
                {
                  k_52 = t;
                  if(((j_52 != NULL) && (j_52 != k_52)))
                    _fail(k_52);
                  else
                    j_52 = k_52;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(h_52)), not_null(j_52));
                {
                  l_52 = t;
                  if(((g_52 != NULL) && (g_52 != l_52)))
                    _fail(l_52);
                  else
                    g_52 = l_52;
                }
              }
            }
          }
          t = o_18;
          {
            ATerm m_3 (ATerm t)
            {
              t = not_null(g_52);
              return(t);
            }
            t = reverse_acc_2(t, e_0, m_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(d_52) == AT_LIST) && ATisEmpty(d_52)))
        {
          {
            t = term_j_6;
            t = g_0(t);
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
ATerm short_description_1 (ATerm t, ATerm r_107 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_77 (ATerm))
{
  ATerm c_53 = NULL,d_53 = NULL;
  c_53 = t;
  b_53 :
  if(match_cons(c_53, sym_Program_1))
    {
      d_53 = ATgetArgument(c_53, 0);
      {
        ATerm g_53 = NULL,i_53 = NULL;
        ATerm h_53 = NULL;
        t = SSLgetAnnotations(not_null(c_53));
        {
          h_53 = t;
          if(((g_53 != NULL) && (g_53 != h_53)))
            _fail(h_53);
          else
            g_53 = h_53;
        }
        {
          t = not_null(d_53);
          {
            ATerm k_53 = NULL;
            t = w_77(t);
            {
              i_53 = t;
              {
                ATerm l_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_53)), not_null(g_53));
                {
                  l_53 = t;
                  if(((k_53 != NULL) && (k_53 != l_53)))
                    _fail(l_53);
                  else
                    k_53 = l_53;
                }
                t = not_null(k_53);
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
  ATerm u_53 = NULL;
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_53 = NULL;
      t = term_v_16;
      {
        t = get_config_0(t);
        {
          v_53 = t;
          if(((u_53 != NULL) && (u_53 != v_53)))
            _fail(v_53);
          else
            u_53 = v_53;
        }
      }
      ;
      LocalPopChoice(s_18);
    }
  else
    {
      t = r_18;
      {
        ATerm o_3 (ATerm t)
        {
          ATerm p_3 (ATerm t)
          {
            ATerm w_53 = NULL;
            w_53 = t;
            if(((u_53 != NULL) && (u_53 != w_53)))
              _fail(w_53);
            else
              u_53 = w_53;
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
        t = not_null(u_53);
        return(t);
      }
      t = short_description_1(t, r_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, q_3);
    {
      t = term_t_18;
      {
        t = echo_0(t);
        {
          t = term_w_18;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_3 (ATerm t)
                {
                  ATerm x_53 = NULL;
                  ATerm y_53 = NULL;
                  y_53 = t;
                  if(((x_53 != NULL) && (x_53 != y_53)))
                    _fail(y_53);
                  else
                    x_53 = y_53;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_53)), term_x_18);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_3);
                {
                  ATerm t_3 (ATerm t)
                  {
                    ATerm z_53 = NULL;
                    ATerm a_54 = NULL;
                    ATerm u_3 (ATerm t)
                    {
                      t = not_null(u_53);
                      return(t);
                    }
                    t = long_description_1(t, u_3);
                    {
                      a_54 = t;
                      if(((z_53 != NULL) && (z_53 != a_54)))
                        _fail(a_54);
                      else
                        z_53 = a_54;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(z_53)), term_y_18);
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
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_77 (ATerm))
{
  ATerm k_54 = NULL,l_54 = NULL;
  k_54 = t;
  j_54 :
  if(match_cons(k_54, sym_Undefined_1))
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
            t = x_77(t);
            {
              q_54 = t;
              {
                ATerm t_54 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_54)), not_null(o_54));
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
ATerm fetch_1 (ATerm t, ATerm n_86 (ATerm))
{
  ATerm y_54 (ATerm t)
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, n_86, _id);
        ;
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        t = Cons_2(t, _id, y_54);
      }
    return(t);
  }
  t = y_54(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_106 (ATerm))
{
  t = fetch_1(t, r_106);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL;
  a_55 = t;
  z_54 :
  if(((ATgetType(a_55) == AT_LIST) && ATisEmpty(a_55)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(a_55) == AT_LIST) && !(ATisEmpty(a_55))))
        {
          b_55 = ATgetFirst((ATermList) a_55);
          c_55 = (ATerm) ATgetNext((ATermList) a_55);
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
  ATerm j_19;
  j_19 = t;
  {
    ATerm f_55 = NULL;
    ATerm i_55 = NULL;
    ATerm n_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(p_19);
      }
    else
      {
        t = n_19;
        {
          ATerm g_55 = NULL;
          ATerm h_55 = NULL;
          h_55 = t;
          if(((g_55 != NULL) && (g_55 != h_55)))
            _fail(h_55);
          else
            g_55 = h_55;
          t = (ATerm) ATinsert(ATempty, not_null(g_55));
        }
      }
    {
      i_55 = t;
      if(((f_55 != NULL) && (f_55 != i_55)))
        _fail(i_55);
      else
        f_55 = i_55;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_12, not_null(f_55));
      t = printnl_0(t);
    }
  }
  t = j_19;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_v_16;
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
  ATerm r_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = r_19;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm p_55 = NULL;
  p_55 = t;
  o_55 :
  if(match_cons(p_55, sym_Help_0))
    {
      ATerm r_55 = NULL,t_55 = NULL;
      ATerm w_19;
      w_19 = t;
      {
        ATerm s_55 = NULL;
        t = SSLgetAnnotations(not_null(p_55));
        {
          s_55 = t;
          if(((r_55 != NULL) && (r_55 != s_55)))
            _fail(s_55);
          else
            r_55 = s_55;
        }
      }
      t = w_19;
      {
        ATerm u_55 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(r_55));
        {
          u_55 = t;
          if(((t_55 != NULL) && (t_55 != u_55)))
            _fail(u_55);
          else
            t_55 = u_55;
        }
        t = not_null(t_55);
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
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_3 (ATerm t)
      {
        ATerm a_56 = NULL;
        a_56 = t;
        y_55 :
        if(!(match_string(a_56, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm w_3 (ATerm t)
      {
        t = term_a_20;
        t = set_config_0(t);
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        t = term_b_20;
        return(t);
      }
      t = Option_3(t, v_3, w_3, x_3);
      ;
      LocalPopChoice(y_19);
    }
  else
    {
      t = x_19;
      {
        ATerm y_3 (ATerm t)
        {
          ATerm f_56 = NULL;
          f_56 = t;
          z_55 :
          if(!(match_string(f_56, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm z_3 (ATerm t)
        {
          t = term_a_20;
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
        ATerm a_4 (ATerm t)
        {
          t = term_p_20;
          return(t);
        }
        t = Option_3(t, y_3, z_3, a_4);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL;
  n_56 = t;
  m_56 :
  if(match_cons(n_56, sym__2))
    {
      o_56 = ATgetArgument(n_56, 0);
      p_56 = ATgetArgument(n_56, 1);
      t = SSL_table_get(not_null(o_56), not_null(p_56));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL;
  w_56 = t;
  v_56 :
  if(match_cons(w_56, sym__3))
    {
      x_56 = ATgetArgument(w_56, 0);
      y_56 = ATgetArgument(w_56, 1);
      z_56 = ATgetArgument(w_56, 2);
      {
        ATerm q_20;
        q_20 = t;
        {
          ATerm d_57 = NULL;
          ATerm e_57 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_56), not_null(y_56));
          {
            ATerm r_20 = t;
            int s_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(s_20);
              }
            else
              {
                t = r_20;
                t = (ATerm) ATempty;
              }
            {
              e_57 = t;
              if(((d_57 != NULL) && (d_57 != e_57)))
                _fail(e_57);
              else
                d_57 = e_57;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_56), not_null(y_56), (ATerm) ATinsert(CheckATermList(not_null(d_57)), not_null(z_56)));
            t = table_put_0(t);
          }
        }
        t = q_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm w_107 (ATerm))
{
  ATerm i_57 = NULL;
  ATerm j_57 = NULL;
  t = term_j_6;
  {
    t = w_107(t);
    {
      j_57 = t;
      if(((i_57 != NULL) && (i_57 != j_57)))
        _fail(j_57);
      else
        i_57 = j_57;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_18, term_v_18, not_null(i_57));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm r_57 = NULL,s_57 = NULL,y_57 = NULL;
  r_57 = t;
  q_57 :
  if(match_string(r_57, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(r_57) == AT_LIST) && !(ATisEmpty(r_57))))
        {
          s_57 = ATgetFirst((ATermList) r_57);
          y_57 = (ATerm) ATgetNext((ATermList) r_57);
          {
            ATerm b_58 = NULL;
            ATerm x_20;
            x_20 = t;
            {
              t = not_null(s_57);
              t = a_0(t);
            }
            t = x_20;
            {
              ATerm c_58 = NULL;
              t = term_j_6;
              {
                t = b_0(t);
                {
                  c_58 = t;
                  if(((b_58 != NULL) && (b_58 != c_58)))
                    _fail(c_58);
                  else
                    b_58 = c_58;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(y_57)), not_null(b_58));
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
    ATerm h_58 = NULL;
    h_58 = t;
    g_58 :
    if(!(match_string(h_58, "--help")))
      {
        if(!(match_string(h_58, "-h")))
          {
            if(!(match_string(h_58, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_y_20;
    {
      t = set_config_0(t);
      t = term_z_20;
    }
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    t = term_e_21;
    return(t);
  }
  t = Option_3(t, b_4, c_4, d_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm k_58 = NULL,l_58 = NULL,n_58 = NULL;
  k_58 = t;
  j_58 :
  if(((ATgetType(k_58) == AT_LIST) && !(ATisEmpty(k_58))))
    {
      l_58 = ATgetFirst((ATermList) k_58);
      n_58 = (ATerm) ATgetNext((ATermList) k_58);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_58)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_58)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL;
  t_58 = t;
  s_58 :
  if(match_cons(t_58, sym__2))
    {
      u_58 = ATgetArgument(t_58, 0);
      v_58 = ATgetArgument(t_58, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_e_12, not_null(u_58), not_null(v_58));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm u_107 (ATerm))
{
  ATerm f_21;
  f_21 = t;
  {
    ATerm e_4 (ATerm t)
    {
      t = term_g_21;
      t = u_107(t);
      return(t);
    }
    t = try_1(t, e_4);
  }
  t = f_21;
  {
    ATerm f_4 (ATerm t)
    {
      ATerm j_59 = NULL;
      ATerm h_21;
      h_21 = t;
      {
        ATerm b_59 = NULL;
        ATerm i_59 = NULL;
        i_59 = t;
        if(((b_59 != NULL) && (b_59 != i_59)))
          _fail(i_59);
        else
          b_59 = i_59;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_16, not_null(b_59));
          t = set_config_0(t);
        }
      }
      t = h_21;
      {
        ATerm k_59 = NULL;
        k_59 = t;
        if(((j_59 != NULL) && (j_59 != k_59)))
          _fail(k_59);
        else
          j_59 = k_59;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_59));
      }
      return(t);
    }
    ATerm g_4 (ATerm t)
    {
      ATerm i_21 = t;
      int k_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_21 = t;
          int o_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(o_21);
            }
          else
            {
              t = n_21;
              {
                t = u_107(t);
                t = Cons_2(t, _id, g_4);
              }
            }
          ;
          LocalPopChoice(k_21);
        }
      else
        {
          t = i_21;
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
  ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL;
  ATerm p_21;
  p_21 = t;
  {
    ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL;
    u_59 = t;
    q_59 :
    if(match_cons(u_59, sym__3))
      {
        v_59 = ATgetArgument(u_59, 0);
        w_59 = ATgetArgument(u_59, 1);
        x_59 = ATgetArgument(u_59, 2);
        {
          if(((r_59 != NULL) && (r_59 != v_59)))
            _fail(v_59);
          else
            r_59 = v_59;
          {
            if(((s_59 != NULL) && (s_59 != w_59)))
              _fail(w_59);
            else
              s_59 = w_59;
            {
              if(((t_59 != NULL) && (t_59 != x_59)))
                _fail(x_59);
              else
                t_59 = x_59;
              t = SSL_table_put(not_null(r_59), not_null(s_59), not_null(t_59));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = p_21;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_107 (ATerm))
{
  ATerm a_60 = NULL;
  ATerm q_21;
  q_21 = t;
  {
    t = term_r_21;
    t = table_put_0(t);
  }
  t = q_21;
  {
    ATerm h_4 (ATerm t)
    {
      ATerm s_21 = t;
      int t_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_107(t);
          ;
          LocalPopChoice(t_21);
        }
      else
        {
          t = s_21;
          {
            ATerm v_21 = t;
            int x_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(x_21);
              }
            else
              {
                t = v_21;
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
        ATerm e_22 = t;
        int f_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_22;
            h_22 = t;
            {
              ATerm i_22 = t;
              int k_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_y_17;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(k_22);
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
                t = term_t_14;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(f_22);
          }
        else
          {
            t = e_22;
            {
              ATerm l_22 = t;
              int n_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_22;
                  o_22 = t;
                  {
                    t = term_z_19;
                    t = get_config_0(t);
                  }
                  t = o_22;
                  {
                    t = system_about_0(t);
                    {
                      t = term_t_14;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(n_22);
                }
              else
                {
                  t = l_22;
                  {
                    ATerm j_4 (ATerm t)
                    {
                      ATerm k_4 (ATerm t)
                      {
                        ATerm b_60 = NULL;
                        b_60 = t;
                        if(((a_60 != NULL) && (a_60 != b_60)))
                          _fail(b_60);
                        else
                          a_60 = b_60;
                        return(t);
                      }
                      t = Undefined_1(t, k_4);
                      return(t);
                    }
                    t = option_defined_1(t, j_4);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_k_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_60)), term_r_22));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_n_10;
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
        ATerm s_22;
        s_22 = t;
        {
          t = term_u_18;
          t = table_destroy_0(t);
        }
        t = s_22;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm w_105 (ATerm))
{
  t = parse_options_1(t, t_105);
  {
    t = store_options_0(t);
    {
      t = v_105(t);
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, u_105);
            ;
            LocalPopChoice(u_22);
          }
        else
          {
            t = t_22;
            {
              ATerm v_22 = t;
              int w_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_105(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(w_22);
                }
              else
                {
                  t = v_22;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm l_105 (ATerm))
{
  ATerm l_4 (ATerm t)
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_105(t);
        ;
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, i_105);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, l_4, k_105, l_105, m_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    ATerm o_4 (ATerm t)
    {
      ATerm d_23;
      d_23 = t;
      {
        ATerm e_60 = NULL;
        ATerm f_60 = NULL;
        t = term_v_16;
        {
          t = get_config_0(t);
          {
            f_60 = t;
            if(((e_60 != NULL) && (e_60 != f_60)))
              _fail(f_60);
            else
              e_60 = f_60;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_10, (ATerm) ATinsert(ATempty, not_null(e_60)));
          t = printnl_0(t);
        }
      }
      t = d_23;
      return(t);
    }
    t = if_verbose2_1(t, o_4);
    return(t);
  }
  t = iowrap_4(t, c_105, d_105, e_105, n_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm a_105 (ATerm), ATerm b_105 (ATerm))
{
  t = iowrap_3(t, a_105, b_105, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm x_104 (ATerm))
{
  ATerm p_4 (ATerm t)
  {
    t = _2(t, _id, x_104);
    return(t);
  }
  t = iowrap_2(t, p_4, _fail);
  return(t);
}
ATerm dead_var_elim_io_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm t_4 (ATerm t)
    {
      ATerm u_4 (ATerm t)
      {
        t = Signature_1(t, _id);
        return(t);
      }
      ATerm v_4 (ATerm t)
      {
        ATerm w_4 (ATerm t)
        {
          ATerm x_4 (ATerm t)
          {
            ATerm y_4 (ATerm t)
            {
              t = dead_var_elim_0(t);
              {
                ATerm z_4 (ATerm t)
                {
                  ATerm a_5 (ATerm t)
                  {
                    ATerm m_60 = NULL,n_60 = NULL;
                    m_60 = t;
                    l_60 :
                    if(match_cons(m_60, sym_Var_1))
                      {
                        n_60 = ATgetArgument(m_60, 0);
                        {
                          ATerm q_60 = NULL;
                          t = not_null(n_60);
                          {
                            ATerm r_60 = NULL;
                            r_60 = t;
                            if(((q_60 != NULL) && (q_60 != r_60)))
                              _fail(r_60);
                            else
                              q_60 = r_60;
                            {
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_60));
                              {
                                ATerm e_23;
                                e_23 = t;
                                {
                                  ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL;
                                  t = SSLgetAnnotations(not_null(m_60));
                                  {
                                    s_60 = t;
                                    j_60 :
                                    if(((ATgetType(s_60) == AT_LIST) && !(ATisEmpty(s_60))))
                                      {
                                        t_60 = ATgetFirst((ATermList) s_60);
                                        u_60 = (ATerm) ATgetNext((ATermList) s_60);
                                        k_60 :
                                        if(((ATgetType(u_60) == AT_LIST) && ATisEmpty(u_60)))
                                          {
                                            {
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
                                t = e_23;
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
                  t = try_1(t, a_5);
                  return(t);
                }
                t = topdown_1(t, z_4);
              }
              return(t);
            }
            t = map_1(t, y_4);
            return(t);
          }
          t = Strategies_1(t, x_4);
          return(t);
        }
        t = Cons_2(t, w_4, Nil_0);
        return(t);
      }
      t = Cons_2(t, u_4, v_4);
      return(t);
    }
    t = Specification_1(t, t_4);
    return(t);
  }
  t = iowrap_1(t, s_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = dead_var_elim_io_0(t);
  return(t);
}
