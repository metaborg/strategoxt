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
ATerm term_y_26;
ATerm term_e_26;
ATerm term_r_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_v_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_g_23;
ATerm term_a_23;
ATerm term_n_22;
ATerm term_g_22;
ATerm term_c_22;
ATerm term_m_21;
ATerm term_j_21;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_x_19;
ATerm term_v_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_l_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_t_16;
ATerm term_r_16;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_w_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_l_10;
ATerm term_h_8;
ATerm term_v_7;
ATerm term_r_7;
ATerm term_l_7;
ATerm term_u_6;
ATerm term_l_6;
ATerm term_i_6;
void init_constant_terms (void)
{
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_l_6);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("strat: ", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("current: ", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("no match with current term: ", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym__2, term_e_17, term_h_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__2, term_x_19, term_l_10);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym__2, term_p_20, term_l_10);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym__2, term_p_23, term_r_23);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__2, term_q_24, term_l_10);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym__2, term_y_24, term_l_10);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym__2, term_n_22, term_l_10);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym__3, term_p_23, term_r_23, (ATerm) ATempty);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm SDefT_4 (ATerm, ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm e_74 (ATerm));
ATerm prop_sdef_1 (ATerm, ATerm j_80 (ATerm));
ATerm Not_1 (ATerm, ATerm i_72 (ATerm));
ATerm prop_not_1 (ATerm, ATerm h_80 (ATerm));
ATerm Rec_2 (ATerm, ATerm g_72 (ATerm), ATerm h_72 (ATerm));
ATerm prop_rec_1 (ATerm, ATerm g_80 (ATerm));
ATerm Let_2 (ATerm, ATerm j_71 (ATerm), ATerm k_71 (ATerm));
ATerm prop_let_1 (ATerm, ATerm k_80 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm d_72 (ATerm), ATerm e_72 (ATerm), ATerm f_72 (ATerm));
ATerm isect_CurrentTerm_0 (ATerm);
ATerm isect_Binding_0 (ATerm);
ATerm restore_CurrentTerm_0 (ATerm);
ATerm save_CurrentTerm_0 (ATerm);
ATerm prop_abstract_choice_2 (ATerm, ATerm o_80 (ATerm), ATerm p_80 (ATerm));
ATerm LChoice_2 (ATerm, ATerm z_71 (ATerm), ATerm a_72 (ATerm));
ATerm GChoice_2 (ATerm, ATerm b_71 (ATerm), ATerm c_71 (ATerm));
ATerm Choice_2 (ATerm, ATerm x_70 (ATerm), ATerm y_70 (ATerm));
ATerm prop_choice_1 (ATerm, ATerm n_80 (ATerm));
ATerm Seq_2 (ATerm, ATerm x_71 (ATerm), ATerm y_71 (ATerm));
ATerm prop_seq_1 (ATerm, ATerm b_80 (ATerm));
ATerm Cong_2 (ATerm, ATerm w_66 (ATerm), ATerm x_66 (ATerm));
ATerm prop_traversal_1 (ATerm, ATerm r_0 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm restore_Binding_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_Binding_0 (ATerm);
ATerm exec_maybe_1 (ATerm, ATerm a_80 (ATerm));
ATerm CallT_3 (ATerm, ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm p_71 (ATerm));
ATerm PrimT_3 (ATerm, ATerm p_72 (ATerm), ATerm q_72 (ATerm), ATerm r_72 (ATerm));
ATerm prop_call_1 (ATerm, ATerm p_0 (ATerm));
ATerm UndefCurrentTerm_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm t_71 (ATerm), ATerm u_71 (ATerm));
ATerm prop_scope_1 (ATerm, ATerm i_80 (ATerm));
ATerm Build_1 (ATerm, ATerm r_71 (ATerm));
ATerm prop_build_0 (ATerm);
ATerm assert_1 (ATerm, ATerm u_98 (ATerm));
ATerm oncetd_1 (ATerm, ATerm o_83 (ATerm));
ATerm introduce_binding_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm TermIsVarIgnore_1 (ATerm, ATerm m_80 (ATerm));
ATerm MatchWildCard_0 (ATerm);
ATerm AsMatch_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm j_107 (ATerm), ATerm k_107 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm h_90 (ATerm));
ATerm zip_1 (ATerm, ATerm j_90 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm u_106 (ATerm), ATerm v_106 (ATerm));
ATerm substitute_1 (ATerm, ATerm w_106 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm UfVar_1 (ATerm, ATerm g_110 (ATerm));
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm b_82 (ATerm), ATerm c_82 (ATerm));
ATerm for_3 (ATerm, ATerm e_82 (ATerm), ATerm f_82 (ATerm), ATerm g_82 (ATerm));
ATerm prop_pattern_match_0 (ATerm);
ATerm CurrentTerm_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm w_98 (ATerm));
ATerm Binding_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm c_84 (ATerm));
ATerm Match_1 (ATerm, ATerm q_71 (ATerm));
ATerm prop_match_0 (ATerm);
ATerm cp_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm r_98 (ATerm));
ATerm restore_always_2 (ATerm, ATerm f_81 (ATerm), ATerm g_81 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm q_98 (ATerm));
ATerm scope_2 (ATerm, ATerm s_98 (ATerm), ATerm t_98 (ATerm));
ATerm const_prop_0 (ATerm);
ATerm map_1 (ATerm, ATerm b_88 (ATerm));
ATerm Strategies_1 (ATerm, ATerm a_67 (ATerm));
ATerm Cons_2 (ATerm, ATerm u_66 (ATerm), ATerm v_66 (ATerm));
ATerm Signature_1 (ATerm, ATerm b_67 (ATerm));
ATerm Specification_1 (ATerm, ATerm f_67 (ATerm));
ATerm _2 (ATerm, ATerm l_65 (ATerm), ATerm m_65 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_88 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm r_101 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm n_100 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm p_103 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm z_99 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm r_95 (ATerm), ATerm s_95 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm c_94 (ATerm), ATerm d_94 (ATerm));
ATerm crush_2 (ATerm, ATerm v_97 (ATerm), ATerm w_97 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm q_101 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm n_104 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_106 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm d_0 (ATerm), ATerm e_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_106 (ATerm));
ATerm Program_1 (ATerm, ATerm u_79 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm v_79 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_88 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_105 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_80 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_106 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_106 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_106 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm p_104 (ATerm), ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm s_104 (ATerm));
ATerm iowrap_4 (ATerm, ATerm e_104 (ATerm), ATerm f_104 (ATerm), ATerm g_104 (ATerm), ATerm h_104 (ATerm));
ATerm iowrap_3 (ATerm, ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm a_104 (ATerm));
ATerm iowrap_2 (ATerm, ATerm w_103 (ATerm), ATerm x_103 (ATerm));
ATerm iowrap_1 (ATerm, ATerm t_103 (ATerm));
ATerm const_prop_io_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm s_6 = NULL;
  s_6 = t;
  r_6 :
  if(((ATgetType(s_6) == AT_LIST) && ATisEmpty(s_6)))
    {
      {
        ATerm h_7 = NULL,j_7 = NULL;
        ATerm h_6;
        h_6 = t;
        {
          ATerm i_7 = NULL;
          t = SSLgetAnnotations(not_null(s_6));
          {
            i_7 = t;
            if(((h_7 != NULL) && (h_7 != i_7)))
              _fail(i_7);
            else
              h_7 = i_7;
          }
        }
        t = h_6;
        {
          ATerm n_7 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(h_7));
          {
            n_7 = t;
            if(((j_7 != NULL) && (j_7 != n_7)))
              _fail(n_7);
            else
              j_7 = n_7;
          }
          t = not_null(j_7);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDefT_4 (ATerm t, ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm e_74 (ATerm))
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
  z_7 = t;
  y_7 :
  if(match_cons(z_7, sym_SDefT_4))
    {
      a_8 = ATgetArgument(z_7, 0);
      b_8 = ATgetArgument(z_7, 1);
      c_8 = ATgetArgument(z_7, 2);
      d_8 = ATgetArgument(z_7, 3);
      {
        ATerm j_8 = NULL,l_8 = NULL;
        ATerm k_8 = NULL;
        t = SSLgetAnnotations(not_null(z_7));
        {
          k_8 = t;
          if(((j_8 != NULL) && (j_8 != k_8)))
            _fail(k_8);
          else
            j_8 = k_8;
        }
        {
          t = not_null(a_8);
          {
            ATerm n_8 = NULL;
            t = b_74(t);
            {
              l_8 = t;
              {
                t = not_null(b_8);
                {
                  ATerm p_8 = NULL;
                  t = c_74(t);
                  {
                    n_8 = t;
                    {
                      t = not_null(c_8);
                      {
                        ATerm r_8 = NULL;
                        t = d_74(t);
                        {
                          p_8 = t;
                          {
                            t = not_null(d_8);
                            {
                              ATerm t_8 = NULL;
                              t = e_74(t);
                              {
                                r_8 = t;
                                {
                                  ATerm u_8 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(l_8), not_null(n_8), not_null(p_8), not_null(r_8)), not_null(j_8));
                                  {
                                    u_8 = t;
                                    if(((t_8 != NULL) && (t_8 != u_8)))
                                      _fail(u_8);
                                    else
                                      t_8 = u_8;
                                  }
                                  t = not_null(t_8);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm prop_sdef_1 (ATerm t, ATerm j_80 (ATerm))
{
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL;
  g_9 = t;
  f_9 :
  if(match_cons(g_9, sym_SDefT_4))
    {
      h_9 = ATgetArgument(g_9, 0);
      i_9 = ATgetArgument(g_9, 1);
      j_9 = ATgetArgument(g_9, 2);
      k_9 = ATgetArgument(g_9, 3);
      {
        ATerm f_0 (ATerm t)
        {
          t = term_i_6;
          return(t);
        }
        ATerm h_0 (ATerm t)
        {
          ATerm j_6;
          j_6 = t;
          {
            t = not_null(j_9);
            {
              ATerm n_0 (ATerm t)
              {
                ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
                n_9 = t;
                e_9 :
                if(match_cons(n_9, sym_VarDec_2))
                  {
                    o_9 = ATgetArgument(n_9, 0);
                    p_9 = ATgetArgument(n_9, 1);
                    {
                      ATerm k_6;
                      k_6 = t;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_9)), term_l_6);
                        {
                          ATerm q_0 (ATerm t)
                          {
                            t = term_i_6;
                            return(t);
                          }
                          t = assert_1(t, q_0);
                        }
                      }
                      t = k_6;
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
          t = j_6;
          {
            ATerm s_0 (ATerm t)
            {
              t = UndefCurrentTerm_0(t);
              t = j_80(t);
              return(t);
            }
            t = SDefT_4(t, _id, _id, _id, s_0);
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
ATerm Not_1 (ATerm t, ATerm i_72 (ATerm))
{
  ATerm y_9 = NULL,z_9 = NULL;
  y_9 = t;
  x_9 :
  if(match_cons(y_9, sym_Not_1))
    {
      z_9 = ATgetArgument(y_9, 0);
      {
        ATerm c_10 = NULL,e_10 = NULL;
        ATerm d_10 = NULL;
        t = SSLgetAnnotations(not_null(y_9));
        {
          d_10 = t;
          if(((c_10 != NULL) && (c_10 != d_10)))
            _fail(d_10);
          else
            c_10 = d_10;
        }
        {
          t = not_null(z_9);
          {
            ATerm g_10 = NULL;
            t = i_72(t);
            {
              e_10 = t;
              {
                ATerm h_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(e_10)), not_null(c_10));
                {
                  h_10 = t;
                  if(((g_10 != NULL) && (g_10 != h_10)))
                    _fail(h_10);
                  else
                    g_10 = h_10;
                }
                t = not_null(g_10);
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
ATerm prop_not_1 (ATerm t, ATerm h_80 (ATerm))
{
  ATerm o_10 = NULL,p_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym_Not_1))
    {
      p_10 = ATgetArgument(o_10, 0);
      {
        t = UndefCurrentTerm_0(t);
        {
          ATerm t_0 (ATerm t)
          {
            t = exec_maybe_1(t, h_80);
            return(t);
          }
          t = Not_1(t, t_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm g_72 (ATerm), ATerm h_72 (ATerm))
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
  x_10 = t;
  w_10 :
  if(match_cons(x_10, sym_Rec_2))
    {
      y_10 = ATgetArgument(x_10, 0);
      z_10 = ATgetArgument(x_10, 1);
      {
        ATerm d_11 = NULL,f_11 = NULL;
        ATerm e_11 = NULL;
        t = SSLgetAnnotations(not_null(x_10));
        {
          e_11 = t;
          if(((d_11 != NULL) && (d_11 != e_11)))
            _fail(e_11);
          else
            d_11 = e_11;
        }
        {
          t = not_null(y_10);
          {
            ATerm h_11 = NULL;
            t = g_72(t);
            {
              f_11 = t;
              {
                t = not_null(z_10);
                {
                  ATerm j_11 = NULL;
                  t = h_72(t);
                  {
                    h_11 = t;
                    {
                      ATerm k_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(f_11), not_null(h_11)), not_null(d_11));
                      {
                        k_11 = t;
                        if(((j_11 != NULL) && (j_11 != k_11)))
                          _fail(k_11);
                        else
                          j_11 = k_11;
                      }
                      t = not_null(j_11);
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
ATerm prop_rec_1 (ATerm t, ATerm g_80 (ATerm))
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
  s_11 = t;
  r_11 :
  if(match_cons(s_11, sym_Rec_2))
    {
      t_11 = ATgetArgument(s_11, 0);
      u_11 = ATgetArgument(s_11, 1);
      {
        ATerm u_0 (ATerm t)
        {
          t = exec_maybe_1(t, g_80);
          return(t);
        }
        t = Rec_2(t, _id, u_0);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2 (ATerm t, ATerm j_71 (ATerm), ATerm k_71 (ATerm))
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
  c_12 = t;
  b_12 :
  if(match_cons(c_12, sym_Let_2))
    {
      d_12 = ATgetArgument(c_12, 0);
      e_12 = ATgetArgument(c_12, 1);
      {
        ATerm i_12 = NULL,k_12 = NULL;
        ATerm j_12 = NULL;
        t = SSLgetAnnotations(not_null(c_12));
        {
          j_12 = t;
          if(((i_12 != NULL) && (i_12 != j_12)))
            _fail(j_12);
          else
            i_12 = j_12;
        }
        {
          t = not_null(d_12);
          {
            ATerm m_12 = NULL;
            t = j_71(t);
            {
              k_12 = t;
              {
                t = not_null(e_12);
                {
                  ATerm o_12 = NULL;
                  t = k_71(t);
                  {
                    m_12 = t;
                    {
                      ATerm p_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(k_12), not_null(m_12)), not_null(i_12));
                      {
                        p_12 = t;
                        if(((o_12 != NULL) && (o_12 != p_12)))
                          _fail(p_12);
                        else
                          o_12 = p_12;
                      }
                      t = not_null(o_12);
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
ATerm prop_let_1 (ATerm t, ATerm k_80 (ATerm))
{
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL;
  z_12 = t;
  y_12 :
  if(match_cons(z_12, sym_Let_2))
    {
      a_13 = ATgetArgument(z_12, 0);
      b_13 = ATgetArgument(z_12, 1);
      {
        ATerm c_13 = NULL,d_13 = NULL;
        ATerm m_6;
        m_6 = t;
        {
          ATerm e_13 = NULL;
          ATerm f_13 = NULL;
          t = save_Binding_0(t);
          {
            e_13 = t;
            {
              if(((d_13 != NULL) && (d_13 != e_13)))
                _fail(e_13);
              else
                d_13 = e_13;
              {
                t = save_CurrentTerm_0(t);
                {
                  f_13 = t;
                  if(((c_13 != NULL) && (c_13 != f_13)))
                    _fail(f_13);
                  else
                    c_13 = f_13;
                }
              }
            }
          }
        }
        t = m_6;
        {
          ATerm v_0 (ATerm t)
          {
            ATerm x_0 (ATerm t)
            {
              ATerm n_6;
              n_6 = t;
              {
                t = UndefCurrentTerm_0(t);
                {
                  t = not_null(d_13);
                  t = restore_Binding_0(t);
                }
              }
              t = n_6;
              t = k_80(t);
              return(t);
            }
            t = map_1(t, x_0);
            return(t);
          }
          ATerm w_0 (ATerm t)
          {
            ATerm o_6;
            o_6 = t;
            {
              t = not_null(c_13);
              {
                t = restore_CurrentTerm_0(t);
                {
                  t = not_null(d_13);
                  t = restore_Binding_0(t);
                }
              }
            }
            t = o_6;
            t = k_80(t);
            return(t);
          }
          t = Let_2(t, v_0, w_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm d_72 (ATerm), ATerm e_72 (ATerm), ATerm f_72 (ATerm))
{
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
  q_13 = t;
  p_13 :
  if(match_cons(q_13, sym_GuardedLChoice_3))
    {
      r_13 = ATgetArgument(q_13, 0);
      s_13 = ATgetArgument(q_13, 1);
      t_13 = ATgetArgument(q_13, 2);
      {
        ATerm y_13 = NULL,a_14 = NULL;
        ATerm z_13 = NULL;
        t = SSLgetAnnotations(not_null(q_13));
        {
          z_13 = t;
          if(((y_13 != NULL) && (y_13 != z_13)))
            _fail(z_13);
          else
            y_13 = z_13;
        }
        {
          t = not_null(r_13);
          {
            ATerm c_14 = NULL;
            t = d_72(t);
            {
              a_14 = t;
              {
                t = not_null(s_13);
                {
                  ATerm e_14 = NULL;
                  t = e_72(t);
                  {
                    c_14 = t;
                    {
                      t = not_null(t_13);
                      {
                        ATerm g_14 = NULL;
                        t = f_72(t);
                        {
                          e_14 = t;
                          {
                            ATerm h_14 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(a_14), not_null(c_14), not_null(e_14)), not_null(y_13));
                            {
                              h_14 = t;
                              if(((g_14 != NULL) && (g_14 != h_14)))
                                _fail(h_14);
                              else
                                g_14 = h_14;
                            }
                            t = not_null(g_14);
                          }
                        }
                      }
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
  ATerm y_0 (ATerm t)
  {
    ATerm z_0 (ATerm t)
    {
      ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
      y_14 = t;
      s_14 :
      if(match_cons(y_14, sym__2))
        {
          z_14 = ATgetArgument(y_14, 0);
          a_15 = ATgetArgument(y_14, 1);
          t_14 :
          if(((ATgetType(a_15) == AT_LIST) && !(ATisEmpty(a_15))))
            {
              b_15 = ATgetFirst((ATermList) a_15);
              e_15 = (ATerm) ATgetNext((ATermList) a_15);
              u_14 :
              if(match_cons(b_15, sym_Defined_2))
                {
                  c_15 = ATgetArgument(b_15, 0);
                  d_15 = ATgetArgument(b_15, 1);
                  v_14 :
                  if(!(match_cons(z_14, sym_Scopes_0)))
                    {
                      ATerm p_6 = t;
                      int q_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_6;
                          t_6 = t;
                          {
                            ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, term_u_6, not_null(z_14));
                            {
                              t = table_get_0(t);
                              {
                                h_15 = t;
                                q_14 :
                                if(((ATgetType(h_15) == AT_LIST) && !(ATisEmpty(h_15))))
                                  {
                                    i_15 = ATgetFirst((ATermList) h_15);
                                    l_15 = (ATerm) ATgetNext((ATermList) h_15);
                                    r_14 :
                                    if(match_cons(i_15, sym_Defined_2))
                                      {
                                        j_15 = ATgetArgument(i_15, 0);
                                        k_15 = ATgetArgument(i_15, 1);
                                        if(((d_15 != NULL) && (d_15 != k_15)))
                                          _fail(k_15);
                                        else
                                          d_15 = k_15;
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
                          t = t_6;
                          ;
                          LocalPopChoice(q_6);
                        }
                      else
                        {
                          t = p_6;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_14), (ATerm) ATinsert(ATempty, term_l_6));
                        }
                    }
                }
              else
                {
                  w_14 :
                  if(!(match_cons(z_14, sym_Scopes_0)))
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              x_14 :
              if(!(match_cons(z_14, sym_Scopes_0)))
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
    t = try_1(t, z_0);
    return(t);
  }
  t = map_1(t, y_0);
  t = restore_CurrentTerm_0(t);
  return(t);
}
ATerm isect_Binding_0 (ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm b_1 (ATerm t)
    {
      ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
      y_15 = t;
      s_15 :
      if(match_cons(y_15, sym__2))
        {
          z_15 = ATgetArgument(y_15, 0);
          a_16 = ATgetArgument(y_15, 1);
          t_15 :
          if(((ATgetType(a_16) == AT_LIST) && !(ATisEmpty(a_16))))
            {
              b_16 = ATgetFirst((ATermList) a_16);
              e_16 = (ATerm) ATgetNext((ATermList) a_16);
              u_15 :
              if(match_cons(b_16, sym_Defined_2))
                {
                  c_16 = ATgetArgument(b_16, 0);
                  d_16 = ATgetArgument(b_16, 1);
                  v_15 :
                  if(!(match_cons(z_15, sym_Scopes_0)))
                    {
                      ATerm v_6 = t;
                      int w_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm x_6;
                          x_6 = t;
                          {
                            ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, term_i_6, not_null(z_15));
                            {
                              t = table_get_0(t);
                              {
                                h_16 = t;
                                q_15 :
                                if(((ATgetType(h_16) == AT_LIST) && !(ATisEmpty(h_16))))
                                  {
                                    i_16 = ATgetFirst((ATermList) h_16);
                                    l_16 = (ATerm) ATgetNext((ATermList) h_16);
                                    r_15 :
                                    if(match_cons(i_16, sym_Defined_2))
                                      {
                                        j_16 = ATgetArgument(i_16, 0);
                                        k_16 = ATgetArgument(i_16, 1);
                                        if(((d_16 != NULL) && (d_16 != k_16)))
                                          _fail(k_16);
                                        else
                                          d_16 = k_16;
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
                          t = x_6;
                          ;
                          LocalPopChoice(w_6);
                        }
                      else
                        {
                          t = v_6;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_15), (ATerm) ATinsert(ATempty, term_l_6));
                        }
                    }
                }
              else
                {
                  w_15 :
                  if(!(match_cons(z_15, sym_Scopes_0)))
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              x_15 :
              if(!(match_cons(z_15, sym_Scopes_0)))
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
  t = restore_Binding_0(t);
  return(t);
}
ATerm restore_CurrentTerm_0 (ATerm t)
{
  ATerm p_16 = NULL;
  p_16 = t;
  {
    ATerm y_6;
    y_6 = t;
    {
      t = term_u_6;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_6, not_null(p_16));
          t = table_putlist_0(t);
        }
      }
    }
    t = y_6;
  }
  return(t);
}
ATerm save_CurrentTerm_0 (ATerm t)
{
  t = term_u_6;
  t = table_getlist_0(t);
  return(t);
}
ATerm prop_abstract_choice_2 (ATerm t, ATerm o_80 (ATerm), ATerm p_80 (ATerm))
{
  ATerm w_16 = NULL,x_16 = NULL,a_17 = NULL,b_17 = NULL;
  ATerm z_6;
  z_6 = t;
  {
    ATerm y_16 = NULL;
    ATerm z_16 = NULL;
    t = save_Binding_0(t);
    {
      y_16 = t;
      {
        if(((w_16 != NULL) && (w_16 != y_16)))
          _fail(y_16);
        else
          w_16 = y_16;
        {
          t = save_CurrentTerm_0(t);
          {
            z_16 = t;
            if(((x_16 != NULL) && (x_16 != z_16)))
              _fail(z_16);
            else
              x_16 = z_16;
          }
        }
      }
    }
  }
  t = z_6;
  {
    t = o_80(t);
    {
      ATerm a_7;
      a_7 = t;
      {
        ATerm c_17 = NULL;
        ATerm d_17 = NULL;
        t = save_Binding_0(t);
        {
          c_17 = t;
          {
            if(((a_17 != NULL) && (a_17 != c_17)))
              _fail(c_17);
            else
              a_17 = c_17;
            {
              t = not_null(w_16);
              {
                t = restore_Binding_0(t);
                {
                  t = save_CurrentTerm_0(t);
                  {
                    d_17 = t;
                    {
                      if(((b_17 != NULL) && (b_17 != d_17)))
                        _fail(d_17);
                      else
                        b_17 = d_17;
                      {
                        t = not_null(x_16);
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
      t = a_7;
      {
        t = p_80(t);
        {
          ATerm b_7;
          b_7 = t;
          {
            t = not_null(a_17);
            {
              t = isect_Binding_0(t);
              {
                t = not_null(b_17);
                t = isect_CurrentTerm_0(t);
              }
            }
          }
          t = b_7;
        }
      }
    }
  }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm z_71 (ATerm), ATerm a_72 (ATerm))
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL;
  o_17 = t;
  n_17 :
  if(match_cons(o_17, sym_LChoice_2))
    {
      p_17 = ATgetArgument(o_17, 0);
      q_17 = ATgetArgument(o_17, 1);
      {
        ATerm u_17 = NULL,w_17 = NULL;
        ATerm v_17 = NULL;
        t = SSLgetAnnotations(not_null(o_17));
        {
          v_17 = t;
          if(((u_17 != NULL) && (u_17 != v_17)))
            _fail(v_17);
          else
            u_17 = v_17;
        }
        {
          t = not_null(p_17);
          {
            ATerm y_17 = NULL;
            t = z_71(t);
            {
              w_17 = t;
              {
                t = not_null(q_17);
                {
                  ATerm a_18 = NULL;
                  t = a_72(t);
                  {
                    y_17 = t;
                    {
                      ATerm b_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(w_17), not_null(y_17)), not_null(u_17));
                      {
                        b_18 = t;
                        if(((a_18 != NULL) && (a_18 != b_18)))
                          _fail(b_18);
                        else
                          a_18 = b_18;
                      }
                      t = not_null(a_18);
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
ATerm GChoice_2 (ATerm t, ATerm b_71 (ATerm), ATerm c_71 (ATerm))
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
  n_18 = t;
  m_18 :
  if(match_cons(n_18, sym_GChoice_2))
    {
      o_18 = ATgetArgument(n_18, 0);
      p_18 = ATgetArgument(n_18, 1);
      {
        ATerm t_18 = NULL,v_18 = NULL;
        ATerm u_18 = NULL;
        t = SSLgetAnnotations(not_null(n_18));
        {
          u_18 = t;
          if(((t_18 != NULL) && (t_18 != u_18)))
            _fail(u_18);
          else
            t_18 = u_18;
        }
        {
          t = not_null(o_18);
          {
            ATerm x_18 = NULL;
            t = b_71(t);
            {
              v_18 = t;
              {
                t = not_null(p_18);
                {
                  ATerm z_18 = NULL;
                  t = c_71(t);
                  {
                    x_18 = t;
                    {
                      ATerm a_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(v_18), not_null(x_18)), not_null(t_18));
                      {
                        a_19 = t;
                        if(((z_18 != NULL) && (z_18 != a_19)))
                          _fail(a_19);
                        else
                          z_18 = a_19;
                      }
                      t = not_null(z_18);
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
ATerm Choice_2 (ATerm t, ATerm x_70 (ATerm), ATerm y_70 (ATerm))
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL;
  m_19 = t;
  l_19 :
  if(match_cons(m_19, sym_Choice_2))
    {
      n_19 = ATgetArgument(m_19, 0);
      o_19 = ATgetArgument(m_19, 1);
      {
        ATerm s_19 = NULL,u_19 = NULL;
        ATerm t_19 = NULL;
        t = SSLgetAnnotations(not_null(m_19));
        {
          t_19 = t;
          if(((s_19 != NULL) && (s_19 != t_19)))
            _fail(t_19);
          else
            s_19 = t_19;
        }
        {
          t = not_null(n_19);
          {
            ATerm w_19 = NULL;
            t = x_70(t);
            {
              u_19 = t;
              {
                t = not_null(o_19);
                {
                  ATerm y_19 = NULL;
                  t = y_70(t);
                  {
                    w_19 = t;
                    {
                      ATerm z_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(u_19), not_null(w_19)), not_null(s_19));
                      {
                        z_19 = t;
                        if(((y_19 != NULL) && (y_19 != z_19)))
                          _fail(z_19);
                        else
                          y_19 = z_19;
                      }
                      t = not_null(y_19);
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
ATerm prop_choice_1 (ATerm t, ATerm n_80 (ATerm))
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL;
  k_20 = t;
  j_20 :
  if(match_cons(k_20, sym_Choice_2))
    {
      l_20 = ATgetArgument(k_20, 0);
      m_20 = ATgetArgument(k_20, 1);
      {
        ATerm c_1 (ATerm t)
        {
          t = Choice_2(t, n_80, _id);
          return(t);
        }
        ATerm d_1 (ATerm t)
        {
          t = Choice_2(t, _id, n_80);
          return(t);
        }
        t = prop_abstract_choice_2(t, c_1, d_1);
      }
    }
  else
    {
      if(match_cons(k_20, sym_GChoice_2))
        {
          l_20 = ATgetArgument(k_20, 0);
          m_20 = ATgetArgument(k_20, 1);
          {
            ATerm e_1 (ATerm t)
            {
              t = GChoice_2(t, n_80, _id);
              return(t);
            }
            ATerm f_1 (ATerm t)
            {
              t = GChoice_2(t, _id, n_80);
              return(t);
            }
            t = prop_abstract_choice_2(t, e_1, f_1);
          }
        }
      else
        {
          if(match_cons(k_20, sym_LChoice_2))
            {
              l_20 = ATgetArgument(k_20, 0);
              m_20 = ATgetArgument(k_20, 1);
              {
                ATerm g_1 (ATerm t)
                {
                  t = LChoice_2(t, n_80, _id);
                  return(t);
                }
                ATerm h_1 (ATerm t)
                {
                  t = LChoice_2(t, _id, n_80);
                  return(t);
                }
                t = prop_abstract_choice_2(t, g_1, h_1);
              }
            }
          else
            {
              if(match_cons(k_20, sym_GuardedLChoice_3))
                {
                  l_20 = ATgetArgument(k_20, 0);
                  m_20 = ATgetArgument(k_20, 1);
                  n_20 = ATgetArgument(k_20, 2);
                  {
                    ATerm i_1 (ATerm t)
                    {
                      t = GuardedLChoice_3(t, n_80, _id, _id);
                      t = GuardedLChoice_3(t, _id, n_80, _id);
                      return(t);
                    }
                    ATerm j_1 (ATerm t)
                    {
                      t = GuardedLChoice_3(t, _id, _id, n_80);
                      return(t);
                    }
                    t = prop_abstract_choice_2(t, i_1, j_1);
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
ATerm Seq_2 (ATerm t, ATerm x_71 (ATerm), ATerm y_71 (ATerm))
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
  y_20 = t;
  x_20 :
  if(match_cons(y_20, sym_Seq_2))
    {
      z_20 = ATgetArgument(y_20, 0);
      a_21 = ATgetArgument(y_20, 1);
      {
        ATerm e_21 = NULL,g_21 = NULL;
        ATerm f_21 = NULL;
        t = SSLgetAnnotations(not_null(y_20));
        {
          f_21 = t;
          if(((e_21 != NULL) && (e_21 != f_21)))
            _fail(f_21);
          else
            e_21 = f_21;
        }
        {
          t = not_null(z_20);
          {
            ATerm i_21 = NULL;
            t = x_71(t);
            {
              g_21 = t;
              {
                t = not_null(a_21);
                {
                  ATerm k_21 = NULL;
                  t = y_71(t);
                  {
                    i_21 = t;
                    {
                      ATerm l_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(g_21), not_null(i_21)), not_null(e_21));
                      {
                        l_21 = t;
                        if(((k_21 != NULL) && (k_21 != l_21)))
                          _fail(l_21);
                        else
                          k_21 = l_21;
                      }
                      t = not_null(k_21);
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
ATerm prop_seq_1 (ATerm t, ATerm b_80 (ATerm))
{
  t = Seq_2(t, b_80, b_80);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm w_66 (ATerm), ATerm x_66 (ATerm))
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  x_21 = t;
  w_21 :
  if(match_cons(x_21, sym_Cong_2))
    {
      y_21 = ATgetArgument(x_21, 0);
      z_21 = ATgetArgument(x_21, 1);
      {
        ATerm d_22 = NULL,f_22 = NULL;
        ATerm e_22 = NULL;
        t = SSLgetAnnotations(not_null(x_21));
        {
          e_22 = t;
          if(((d_22 != NULL) && (d_22 != e_22)))
            _fail(e_22);
          else
            d_22 = e_22;
        }
        {
          t = not_null(y_21);
          {
            ATerm h_22 = NULL;
            t = w_66(t);
            {
              f_22 = t;
              {
                t = not_null(z_21);
                {
                  ATerm j_22 = NULL;
                  t = x_66(t);
                  {
                    h_22 = t;
                    {
                      ATerm k_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(f_22), not_null(h_22)), not_null(d_22));
                      {
                        k_22 = t;
                        if(((j_22 != NULL) && (j_22 != k_22)))
                          _fail(k_22);
                        else
                          j_22 = k_22;
                      }
                      t = not_null(j_22);
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
ATerm prop_traversal_1 (ATerm t, ATerm r_0 (ATerm))
{
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
      t_22 = t;
      r_22 :
      if(match_cons(t_22, sym_Cong_2))
        {
          u_22 = ATgetArgument(t_22, 0);
          v_22 = ATgetArgument(t_22, 1);
          {
            t = UndefCurrentTerm_0(t);
            {
              ATerm k_1 (ATerm t)
              {
                ATerm l_1 (ATerm t)
                {
                  t = exec_maybe_1(t, r_0);
                  return(t);
                }
                t = map_1(t, l_1);
                return(t);
              }
              t = Cong_2(t, _id, k_1);
            }
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(d_7);
    }
  else
    {
      t = c_7;
      {
        ATerm w_22 = NULL,x_22 = NULL;
        w_22 = t;
        s_22 :
        if(match_cons(w_22, sym_All_1))
          {
            x_22 = ATgetArgument(w_22, 0);
            {
            }
          }
        else
          {
            if(match_cons(w_22, sym_One_1))
              {
                x_22 = ATgetArgument(w_22, 0);
                {
                }
              }
            else
              {
                if(match_cons(w_22, sym_Some_1))
                  {
                    x_22 = ATgetArgument(w_22, 0);
                    {
                    }
                  }
                else
                  {
                    if(match_cons(w_22, sym_Thread_1))
                      {
                        x_22 = ATgetArgument(w_22, 0);
                        {
                        }
                      }
                    else
                      {
                        if(match_cons(w_22, sym_Bagof_1))
                          {
                            x_22 = ATgetArgument(w_22, 0);
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
            ATerm m_1 (ATerm t)
            {
              t = exec_maybe_1(t, r_0);
              return(t);
            }
            t = _one(t, m_1);
          }
        }
      }
    }
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
  d_23 = t;
  c_23 :
  if(match_cons(d_23, sym__2))
    {
      e_23 = ATgetArgument(d_23, 0);
      f_23 = ATgetArgument(d_23, 1);
      {
        t = not_null(f_23);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL;
            i_23 = t;
            b_23 :
            if(match_cons(i_23, sym__2))
              {
                j_23 = ATgetArgument(i_23, 0);
                k_23 = ATgetArgument(i_23, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(e_23), not_null(j_23), not_null(k_23));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, n_1);
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
  ATerm q_23 = NULL;
  q_23 = t;
  {
    ATerm e_7;
    e_7 = t;
    {
      t = term_i_6;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_6, not_null(q_23));
          t = table_putlist_0(t);
        }
      }
    }
    t = e_7;
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm u_23 = NULL;
  u_23 = t;
  t = SSL_table_keys(not_null(u_23));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm a_24 = NULL;
  a_24 = t;
  {
    t = table_keys_0(t);
    {
      ATerm o_1 (ATerm t)
      {
        ATerm c_24 = NULL;
        ATerm e_24 = NULL;
        c_24 = t;
        {
          ATerm f_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_24), not_null(c_24));
          {
            t = table_get_0(t);
            {
              f_24 = t;
              if(((e_24 != NULL) && (e_24 != f_24)))
                _fail(f_24);
              else
                e_24 = f_24;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_24), not_null(e_24));
        }
        return(t);
      }
      t = map_1(t, o_1);
    }
  }
  return(t);
}
ATerm save_Binding_0 (ATerm t)
{
  t = term_i_6;
  t = table_getlist_0(t);
  return(t);
}
ATerm exec_maybe_1 (ATerm t, ATerm a_80 (ATerm))
{
  ATerm k_24 = NULL;
  ATerm f_7;
  f_7 = t;
  {
    ATerm l_24 = NULL;
    t = UndefCurrentTerm_0(t);
    {
      t = save_Binding_0(t);
      {
        l_24 = t;
        if(((k_24 != NULL) && (k_24 != l_24)))
          _fail(l_24);
        else
          k_24 = l_24;
      }
    }
  }
  t = f_7;
  {
    t = a_80(t);
    {
      ATerm g_7;
      g_7 = t;
      {
        t = UndefCurrentTerm_0(t);
        {
          t = not_null(k_24);
          t = restore_Binding_0(t);
        }
      }
      t = g_7;
    }
  }
  return(t);
}
ATerm CallT_3 (ATerm t, ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm p_71 (ATerm))
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym_CallT_3))
    {
      v_24 = ATgetArgument(u_24, 0);
      w_24 = ATgetArgument(u_24, 1);
      x_24 = ATgetArgument(u_24, 2);
      {
        ATerm c_25 = NULL,e_25 = NULL;
        ATerm d_25 = NULL;
        t = SSLgetAnnotations(not_null(u_24));
        {
          d_25 = t;
          if(((c_25 != NULL) && (c_25 != d_25)))
            _fail(d_25);
          else
            c_25 = d_25;
        }
        {
          t = not_null(v_24);
          {
            ATerm g_25 = NULL;
            t = n_71(t);
            {
              e_25 = t;
              {
                t = not_null(w_24);
                {
                  ATerm i_25 = NULL;
                  t = o_71(t);
                  {
                    g_25 = t;
                    {
                      t = not_null(x_24);
                      {
                        ATerm k_25 = NULL;
                        t = p_71(t);
                        {
                          i_25 = t;
                          {
                            ATerm l_25 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(e_25), not_null(g_25), not_null(i_25)), not_null(c_25));
                            {
                              l_25 = t;
                              if(((k_25 != NULL) && (k_25 != l_25)))
                                _fail(l_25);
                              else
                                k_25 = l_25;
                            }
                            t = not_null(k_25);
                          }
                        }
                      }
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
ATerm PrimT_3 (ATerm t, ATerm p_72 (ATerm), ATerm q_72 (ATerm), ATerm r_72 (ATerm))
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
  z_25 = t;
  y_25 :
  if(match_cons(z_25, sym_PrimT_3))
    {
      a_26 = ATgetArgument(z_25, 0);
      b_26 = ATgetArgument(z_25, 1);
      c_26 = ATgetArgument(z_25, 2);
      {
        ATerm h_26 = NULL,j_26 = NULL;
        ATerm i_26 = NULL;
        t = SSLgetAnnotations(not_null(z_25));
        {
          i_26 = t;
          if(((h_26 != NULL) && (h_26 != i_26)))
            _fail(i_26);
          else
            h_26 = i_26;
        }
        {
          t = not_null(a_26);
          {
            ATerm l_26 = NULL;
            t = p_72(t);
            {
              j_26 = t;
              {
                t = not_null(b_26);
                {
                  ATerm n_26 = NULL;
                  t = q_72(t);
                  {
                    l_26 = t;
                    {
                      t = not_null(c_26);
                      {
                        ATerm p_26 = NULL;
                        t = r_72(t);
                        {
                          n_26 = t;
                          {
                            ATerm q_26 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(j_26), not_null(l_26), not_null(n_26)), not_null(h_26));
                            {
                              q_26 = t;
                              if(((p_26 != NULL) && (p_26 != q_26)))
                                _fail(q_26);
                              else
                                p_26 = q_26;
                            }
                            t = not_null(p_26);
                          }
                        }
                      }
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
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
  a_27 = t;
  z_26 :
  if(match_cons(a_27, sym_PrimT_3))
    {
      b_27 = ATgetArgument(a_27, 0);
      c_27 = ATgetArgument(a_27, 1);
      d_27 = ATgetArgument(a_27, 2);
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
          t = PrimT_3(t, _id, p_1, q_1);
        }
      }
    }
  else
    {
      if(match_cons(a_27, sym_CallT_3))
        {
          b_27 = ATgetArgument(a_27, 0);
          c_27 = ATgetArgument(a_27, 1);
          d_27 = ATgetArgument(a_27, 2);
          {
            t = UndefCurrentTerm_0(t);
            {
              ATerm s_1 (ATerm t)
              {
                ATerm u_1 (ATerm t)
                {
                  t = exec_maybe_1(t, p_0);
                  return(t);
                }
                t = map_1(t, u_1);
                return(t);
              }
              ATerm t_1 (ATerm t)
              {
                t = alltd_1(t, Binding_0);
                return(t);
              }
              t = CallT_3(t, _id, s_1, t_1);
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
  ATerm k_7;
  k_7 = t;
  {
    t = term_l_7;
    {
      ATerm v_1 (ATerm t)
      {
        t = term_u_6;
        return(t);
      }
      t = assert_1(t, v_1);
    }
  }
  t = k_7;
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm t_71 (ATerm), ATerm u_71 (ATerm))
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
  m_27 = t;
  l_27 :
  if(match_cons(m_27, sym_Scope_2))
    {
      n_27 = ATgetArgument(m_27, 0);
      o_27 = ATgetArgument(m_27, 1);
      {
        ATerm s_27 = NULL,c_29 = NULL;
        ATerm t_27 = NULL;
        t = SSLgetAnnotations(not_null(m_27));
        {
          t_27 = t;
          if(((s_27 != NULL) && (s_27 != t_27)))
            _fail(t_27);
          else
            s_27 = t_27;
        }
        {
          t = not_null(n_27);
          {
            ATerm e_29 = NULL;
            t = t_71(t);
            {
              c_29 = t;
              {
                t = not_null(o_27);
                {
                  ATerm t_29 = NULL;
                  t = u_71(t);
                  {
                    e_29 = t;
                    {
                      ATerm u_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(c_29), not_null(e_29)), not_null(s_27));
                      {
                        u_29 = t;
                        if(((t_29 != NULL) && (t_29 != u_29)))
                          _fail(u_29);
                        else
                          t_29 = u_29;
                      }
                      t = not_null(t_29);
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
ATerm prop_scope_1 (ATerm t, ATerm i_80 (ATerm))
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
  i_30 = t;
  h_30 :
  if(match_cons(i_30, sym_Scope_2))
    {
      j_30 = ATgetArgument(i_30, 0);
      k_30 = ATgetArgument(i_30, 1);
      {
        ATerm w_1 (ATerm t)
        {
          t = term_i_6;
          return(t);
        }
        ATerm x_1 (ATerm t)
        {
          ATerm m_7;
          m_7 = t;
          {
            t = not_null(j_30);
            {
              ATerm y_1 (ATerm t)
              {
                ATerm m_30 = NULL;
                m_30 = t;
                {
                  ATerm o_7;
                  o_7 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_30)), term_l_6);
                    {
                      ATerm z_1 (ATerm t)
                      {
                        t = term_i_6;
                        return(t);
                      }
                      t = assert_1(t, z_1);
                    }
                  }
                  t = o_7;
                }
                return(t);
              }
              t = map_1(t, y_1);
            }
          }
          t = m_7;
          {
            t = Scope_2(t, _id, i_80);
            {
              ATerm p_7;
              p_7 = t;
              {
                ATerm a_2 (ATerm t)
                {
                  t = CurrentTerm_0(t);
                  {
                    ATerm b_2 (ATerm t)
                    {
                      ATerm o_30 = NULL,p_30 = NULL;
                      o_30 = t;
                      g_30 :
                      if(match_cons(o_30, sym_Var_1))
                        {
                          p_30 = ATgetArgument(o_30, 0);
                          {
                            t = not_null(j_30);
                            {
                              ATerm c_2 (ATerm t)
                              {
                                ATerm r_30 = NULL;
                                r_30 = t;
                                if(((p_30 != NULL) && (p_30 != r_30)))
                                  _fail(r_30);
                                else
                                  p_30 = r_30;
                                return(t);
                              }
                              t = fetch_1(t, c_2);
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, b_2);
                    t = UndefCurrentTerm_0(t);
                  }
                  return(t);
                }
                t = try_1(t, a_2);
              }
              t = p_7;
            }
          }
          return(t);
        }
        t = scope_2(t, w_1, x_1);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Build_1 (ATerm t, ATerm r_71 (ATerm))
{
  ATerm b_31 = NULL,c_31 = NULL;
  b_31 = t;
  a_31 :
  if(match_cons(b_31, sym_Build_1))
    {
      c_31 = ATgetArgument(b_31, 0);
      {
        ATerm k_31 = NULL,m_31 = NULL;
        ATerm l_31 = NULL;
        t = SSLgetAnnotations(not_null(b_31));
        {
          l_31 = t;
          if(((k_31 != NULL) && (k_31 != l_31)))
            _fail(l_31);
          else
            k_31 = l_31;
        }
        {
          t = not_null(c_31);
          {
            ATerm o_31 = NULL;
            t = r_71(t);
            {
              m_31 = t;
              {
                ATerm p_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(m_31)), not_null(k_31));
                {
                  p_31 = t;
                  if(((o_31 != NULL) && (o_31 != p_31)))
                    _fail(p_31);
                  else
                    o_31 = p_31;
                }
                t = not_null(o_31);
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
  ATerm b_32 = NULL,c_32 = NULL;
  ATerm d_2 (ATerm t)
  {
    t = alltd_1(t, Binding_0);
    return(t);
  }
  t = Build_1(t, d_2);
  {
    b_32 = t;
    v_31 :
    if(match_cons(b_32, sym_Build_1))
      {
        c_32 = ATgetArgument(b_32, 0);
        {
          ATerm q_7;
          q_7 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_r_7, not_null(c_32)));
            {
              ATerm e_2 (ATerm t)
              {
                t = term_u_6;
                return(t);
              }
              t = assert_1(t, e_2);
            }
          }
          t = q_7;
        }
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm u_98 (ATerm))
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
  k_32 = t;
  j_32 :
  if(match_cons(k_32, sym__2))
    {
      l_32 = ATgetArgument(k_32, 0);
      m_32 = ATgetArgument(k_32, 1);
      {
        ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL;
        ATerm s_7;
        s_7 = t;
        {
          ATerm s_32 = NULL;
          ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
          t = u_98(t);
          {
            s_32 = t;
            {
              if(((p_32 != NULL) && (p_32 != s_32)))
                _fail(s_32);
              else
                p_32 = s_32;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(p_32), not_null(l_32), not_null(m_32));
                {
                  t = table_push_0(t);
                  {
                    ATerm t_7 = t;
                    int u_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_32), term_v_7);
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
                      t_32 = t;
                      i_32 :
                      if(((ATgetType(t_32) == AT_LIST) && !(ATisEmpty(t_32))))
                        {
                          u_32 = ATgetFirst((ATermList) t_32);
                          v_32 = (ATerm) ATgetNext((ATermList) t_32);
                          {
                            if(((q_32 != NULL) && (q_32 != u_32)))
                              _fail(u_32);
                            else
                              q_32 = u_32;
                            {
                              if(((r_32 != NULL) && (r_32 != v_32)))
                                _fail(v_32);
                              else
                                r_32 = v_32;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(p_32), term_v_7, (ATerm) ATinsert(CheckATermList(not_null(r_32)), (ATerm) ATinsert(CheckATermList(not_null(q_32)), not_null(l_32))));
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
        t = s_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm o_83 (ATerm))
{
  ATerm z_32 (ATerm t)
  {
    ATerm w_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_83(t);
        ;
        LocalPopChoice(x_7);
      }
    else
      {
        t = w_7;
        t = _one(t, z_32);
      }
    return(t);
  }
  t = z_32(t);
  return(t);
}
ATerm introduce_binding_0 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL;
  e_33 = t;
  c_33 :
  if(match_cons(e_33, sym__2))
    {
      f_33 = ATgetArgument(e_33, 0);
      h_33 = ATgetArgument(e_33, 1);
      d_33 :
      if(match_cons(f_33, sym_Var_1))
        {
          g_33 = ATgetArgument(f_33, 0);
          {
            ATerm e_8;
            e_8 = t;
            {
              t = not_null(h_33);
              {
                ATerm f_8 = t;
                if((PushChoice() == 0))
                  {
                    ATerm f_2 (ATerm t)
                    {
                      ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL;
                      k_33 = t;
                      b_33 :
                      if(!(match_cons(k_33, sym_Wld_0)))
                        {
                          if(match_cons(k_33, sym_As_2))
                            {
                              l_33 = ATgetArgument(k_33, 0);
                              m_33 = ATgetArgument(k_33, 1);
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
                    t = oncetd_1(t, f_2);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_8;
                  }
              }
            }
            t = e_8;
            {
              ATerm g_8;
              g_8 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_33)), (ATerm) ATmakeAppl(sym_Defined_2, term_h_8, not_null(h_33)));
                {
                  ATerm g_2 (ATerm t)
                  {
                    t = term_i_6;
                    return(t);
                  }
                  t = assert_1(t, g_2);
                }
              }
              t = g_8;
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
  ATerm f_34 = NULL,g_34 = NULL;
  f_34 = t;
  e_34 :
  if(match_cons(f_34, sym_Var_1))
    {
      g_34 = ATgetArgument(f_34, 0);
      {
        ATerm i_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
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
                t = o_0(t);
                {
                  n_34 = t;
                  {
                    ATerm q_34 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(n_34)), not_null(l_34));
                    {
                      q_34 = t;
                      if(((p_34 != NULL) && (p_34 != q_34)))
                        _fail(q_34);
                      else
                        p_34 = q_34;
                    }
                    t = not_null(p_34);
                  }
                }
              }
            }
            ;
            LocalPopChoice(m_8);
          }
        else
          {
            t = i_8;
            {
              ATerm o_8 = t;
              int q_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_34 = NULL,v_34 = NULL;
                  ATerm u_34 = NULL;
                  t = SSLgetAnnotations(not_null(f_34));
                  {
                    u_34 = t;
                    if(((t_34 != NULL) && (t_34 != u_34)))
                      _fail(u_34);
                    else
                      t_34 = u_34;
                  }
                  {
                    t = not_null(g_34);
                    {
                      ATerm x_34 = NULL;
                      t = o_0(t);
                      {
                        v_34 = t;
                        {
                          ATerm y_34 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(v_34)), not_null(t_34));
                          {
                            y_34 = t;
                            if(((x_34 != NULL) && (x_34 != y_34)))
                              _fail(y_34);
                            else
                              x_34 = y_34;
                          }
                          t = not_null(x_34);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(q_8);
                }
              else
                {
                  t = o_8;
                  {
                    ATerm b_35 = NULL,d_35 = NULL;
                    ATerm c_35 = NULL;
                    t = SSLgetAnnotations(not_null(f_34));
                    {
                      c_35 = t;
                      if(((b_35 != NULL) && (b_35 != c_35)))
                        _fail(c_35);
                      else
                        b_35 = c_35;
                    }
                    {
                      t = not_null(g_34);
                      {
                        ATerm f_35 = NULL;
                        t = o_0(t);
                        {
                          d_35 = t;
                          {
                            ATerm g_35 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(d_35)), not_null(b_35));
                            {
                              g_35 = t;
                              if(((f_35 != NULL) && (f_35 != g_35)))
                                _fail(g_35);
                              else
                                f_35 = g_35;
                            }
                            t = not_null(f_35);
                          }
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
ATerm TermIsVarIgnore_1 (ATerm t, ATerm m_80 (ATerm))
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL;
  w_35 = t;
  u_35 :
  if(((ATgetType(w_35) == AT_LIST) && !(ATisEmpty(w_35))))
    {
      x_35 = ATgetFirst((ATermList) w_35);
      a_36 = (ATerm) ATgetNext((ATermList) w_35);
      v_35 :
      if(match_cons(x_35, sym__2))
        {
          y_35 = ATgetArgument(x_35, 0);
          z_35 = ATgetArgument(x_35, 1);
          {
            t = not_null(y_35);
            {
              ATerm s_8 = t;
              if((PushChoice() == 0))
                {
                  t = m_80(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = s_8;
                }
              {
                t = not_null(z_35);
                t = m_80(t);
              }
            }
            t = not_null(a_36);
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
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL;
  j_36 = t;
  g_36 :
  if(((ATgetType(j_36) == AT_LIST) && !(ATisEmpty(j_36))))
    {
      k_36 = ATgetFirst((ATermList) j_36);
      n_36 = (ATerm) ATgetNext((ATermList) j_36);
      h_36 :
      if(match_cons(k_36, sym__2))
        {
          l_36 = ATgetArgument(k_36, 0);
          m_36 = ATgetArgument(k_36, 1);
          i_36 :
          if(match_cons(l_36, sym_Wld_0))
            {
              t = not_null(n_36);
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
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL;
  v_36 = t;
  s_36 :
  if(((ATgetType(v_36) == AT_LIST) && !(ATisEmpty(v_36))))
    {
      w_36 = ATgetFirst((ATermList) v_36);
      b_37 = (ATerm) ATgetNext((ATermList) v_36);
      t_36 :
      if(match_cons(w_36, sym__2))
        {
          x_36 = ATgetArgument(w_36, 0);
          a_37 = ATgetArgument(w_36, 1);
          u_36 :
          if(match_cons(x_36, sym_As_2))
            {
              y_36 = ATgetArgument(x_36, 0);
              z_36 = ATgetArgument(x_36, 1);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(b_37)), (ATerm) ATmakeAppl(sym__2, not_null(z_36), not_null(a_37))), (ATerm) ATmakeAppl(sym__2, not_null(y_36), not_null(a_37)));
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
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL;
  x_37 = t;
  v_37 :
  if(((ATgetType(x_37) == AT_LIST) && !(ATisEmpty(x_37))))
    {
      y_37 = ATgetFirst((ATermList) x_37);
      b_38 = (ATerm) ATgetNext((ATermList) x_37);
      w_37 :
      if(match_cons(y_37, sym__2))
        {
          z_37 = ATgetArgument(y_37, 0);
          a_38 = ATgetArgument(y_37, 1);
          {
            ATerm f_38 = NULL,g_38 = NULL,m_38 = NULL,s_38 = NULL;
            ATerm v_8;
            v_8 = t;
            {
              ATerm h_38 = NULL;
              ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL;
              t = not_null(a_38);
              {
                h_38 = t;
                {
                  t = SSL_explode_term(not_null(h_38));
                  {
                    j_38 = t;
                    q_37 :
                    if(match_cons(j_38, sym__2))
                      {
                        k_38 = ATgetArgument(j_38, 0);
                        l_38 = ATgetArgument(j_38, 1);
                        {
                          if(((f_38 != NULL) && (f_38 != k_38)))
                            _fail(k_38);
                          else
                            f_38 = k_38;
                          if(((g_38 != NULL) && (g_38 != l_38)))
                            _fail(l_38);
                          else
                            g_38 = l_38;
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
            t = v_8;
            {
              ATerm w_8;
              w_8 = t;
              {
                ATerm n_38 = NULL;
                ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
                t = not_null(z_37);
                {
                  n_38 = t;
                  {
                    t = SSL_explode_term(not_null(n_38));
                    {
                      p_38 = t;
                      t_37 :
                      if(match_cons(p_38, sym__2))
                        {
                          q_38 = ATgetArgument(p_38, 0);
                          r_38 = ATgetArgument(p_38, 1);
                          {
                            if(((f_38 != NULL) && (f_38 != q_38)))
                              _fail(q_38);
                            else
                              f_38 = q_38;
                            if(((m_38 != NULL) && (m_38 != r_38)))
                              _fail(r_38);
                            else
                              m_38 = r_38;
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
              t = w_8;
              {
                ATerm t_38 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_38), not_null(g_38));
                {
                  t = zip_1(t, _id);
                  {
                    t_38 = t;
                    if(((s_38 != NULL) && (s_38 != t_38)))
                      _fail(t_38);
                    else
                      s_38 = t_38;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_38), not_null(b_38));
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
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL;
  f_39 = t;
  d_39 :
  if(match_cons(f_39, sym__2))
    {
      g_39 = ATgetArgument(f_39, 0);
      h_39 = ATgetArgument(f_39, 1);
      e_39 :
      if(((ATgetType(h_39) == AT_LIST) && !(ATisEmpty(h_39))))
        {
          i_39 = ATgetFirst((ATermList) h_39);
          j_39 = (ATerm) ATgetNext((ATermList) h_39);
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_39), not_null(j_39));
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
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL;
  r_39 = t;
  o_39 :
  if(match_cons(r_39, sym__2))
    {
      s_39 = ATgetArgument(r_39, 0);
      t_39 = ATgetArgument(r_39, 1);
      p_39 :
      if(((ATgetType(t_39) == AT_LIST) && !(ATisEmpty(t_39))))
        {
          u_39 = ATgetFirst((ATermList) t_39);
          x_39 = (ATerm) ATgetNext((ATermList) t_39);
          q_39 :
          if(match_cons(u_39, sym__2))
            {
              v_39 = ATgetArgument(u_39, 0);
              w_39 = ATgetArgument(u_39, 1);
              {
                ATerm z_39 = NULL;
                if(((s_39 != NULL) && (s_39 != v_39)))
                  _fail(v_39);
                else
                  s_39 = v_39;
                {
                  if(((z_39 != NULL) && (z_39 != w_39)))
                    _fail(w_39);
                  else
                    z_39 = w_39;
                  t = not_null(z_39);
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
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm j_107 (ATerm), ATerm k_107 (ATerm))
{
  ATerm f_40 = NULL;
  ATerm h_40 = NULL,i_40 = NULL;
  f_40 = t;
  {
    ATerm j_40 = NULL;
    t = not_null(f_40);
    {
      ATerm k_40 = NULL;
      t = j_107(t);
      {
        j_40 = t;
        {
          if(((h_40 != NULL) && (h_40 != j_40)))
            _fail(j_40);
          else
            h_40 = j_40;
          {
            t = k_107(t);
            {
              k_40 = t;
              if(((i_40 != NULL) && (i_40 != k_40)))
                _fail(k_40);
              else
                i_40 = k_40;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_40), not_null(i_40));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
  q_40 = t;
  p_40 :
  if(match_cons(q_40, sym__2))
    {
      r_40 = ATgetArgument(q_40, 0);
      s_40 = ATgetArgument(q_40, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(s_40)), not_null(r_40));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL;
  a_41 = t;
  x_40 :
  if(match_cons(a_41, sym__2))
    {
      b_41 = ATgetArgument(a_41, 0);
      e_41 = ATgetArgument(a_41, 1);
      y_40 :
      if(((ATgetType(b_41) == AT_LIST) && !(ATisEmpty(b_41))))
        {
          c_41 = ATgetFirst((ATermList) b_41);
          d_41 = (ATerm) ATgetNext((ATermList) b_41);
          z_40 :
          if(((ATgetType(e_41) == AT_LIST) && !(ATisEmpty(e_41))))
            {
              f_41 = ATgetFirst((ATermList) e_41);
              g_41 = (ATerm) ATgetNext((ATermList) e_41);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(c_41), not_null(f_41)), (ATerm) ATmakeAppl(sym__2, not_null(d_41), not_null(g_41)));
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
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL;
  q_41 = t;
  n_41 :
  if(match_cons(q_41, sym__2))
    {
      r_41 = ATgetArgument(q_41, 0);
      s_41 = ATgetArgument(q_41, 1);
      o_41 :
      if(((ATgetType(r_41) == AT_LIST) && ATisEmpty(r_41)))
        {
          p_41 :
          if(((ATgetType(s_41) == AT_LIST) && ATisEmpty(s_41)))
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
ATerm genzip_4 (ATerm t, ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm h_90 (ATerm))
{
  ATerm u_41 (ATerm t)
  {
    ATerm z_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_90(t);
        ;
        LocalPopChoice(a_9);
      }
    else
      {
        t = z_8;
        {
          t = f_90(t);
          {
            t = _2(t, h_90, u_41);
            t = g_90(t);
          }
        }
      }
    return(t);
  }
  t = u_41(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm j_90 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, j_90);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL;
  z_41 = t;
  y_41 :
  if(match_cons(z_41, sym__2))
    {
      a_42 = ATgetArgument(z_41, 0);
      b_42 = ATgetArgument(z_41, 1);
      {
        ATerm e_42 = NULL;
        if(((e_42 != NULL) && (e_42 != b_42)))
          _fail(b_42);
        else
          e_42 = b_42;
      }
    }
  else
    {
      if(match_cons(z_41, sym__3))
        {
          a_42 = ATgetArgument(z_41, 0);
          b_42 = ATgetArgument(z_41, 1);
          c_42 = ATgetArgument(z_41, 2);
          {
            ATerm k_42 = NULL;
            ATerm l_42 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_42), not_null(b_42));
            {
              t = zip_1(t, _id);
              {
                l_42 = t;
                if(((k_42 != NULL) && (k_42 != l_42)))
                  _fail(l_42);
                else
                  k_42 = l_42;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_42), not_null(c_42));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm u_106 (ATerm), ATerm v_106 (ATerm))
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL;
  t = subs_args_0(t);
  {
    r_42 = t;
    q_42 :
    if(match_cons(r_42, sym__2))
      {
        s_42 = ATgetArgument(r_42, 0);
        t_42 = ATgetArgument(r_42, 1);
        {
          t = not_null(t_42);
          {
            ATerm h_2 (ATerm t)
            {
              ATerm i_2 (ATerm t)
              {
                t = not_null(s_42);
                return(t);
              }
              t = SubsVar_2(t, u_106, i_2);
              t = v_106(t);
              return(t);
            }
            t = alltd_1(t, h_2);
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
ATerm substitute_1 (ATerm t, ATerm w_106 (ATerm))
{
  t = substitute_2(t, w_106, _id);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
  a_43 = t;
  z_42 :
  if(match_cons(a_43, sym__2))
    {
      b_43 = ATgetArgument(a_43, 0);
      c_43 = ATgetArgument(a_43, 1);
      {
        ATerm b_9;
        b_9 = t;
        {
          t = not_null(c_43);
          {
            ATerm j_2 (ATerm t)
            {
              ATerm f_43 = NULL;
              f_43 = t;
              if(((b_43 != NULL) && (b_43 != f_43)))
                _fail(f_43);
              else
                b_43 = f_43;
              return(t);
            }
            t = oncetd_1(t, j_2);
          }
        }
        t = b_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfVar_1 (ATerm t, ATerm g_110 (ATerm))
{
  ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL;
  o_43 = t;
  l_43 :
  if(match_cons(o_43, sym__2))
    {
      p_43 = ATgetArgument(o_43, 0);
      u_43 = ATgetArgument(o_43, 1);
      m_43 :
      if(((ATgetType(p_43) == AT_LIST) && !(ATisEmpty(p_43))))
        {
          q_43 = ATgetFirst((ATermList) p_43);
          t_43 = (ATerm) ATgetNext((ATermList) p_43);
          n_43 :
          if(match_cons(q_43, sym__2))
            {
              r_43 = ATgetArgument(q_43, 0);
              s_43 = ATgetArgument(q_43, 1);
              {
                ATerm c_44 = NULL,e_44 = NULL;
                ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL;
                t = not_null(r_43);
                {
                  t = g_110(t);
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_43), not_null(s_43));
                    {
                      ATerm c_9 = t;
                      if((PushChoice() == 0))
                        {
                          t = is_subterm_0(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = c_9;
                        }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(r_43), not_null(s_43))), (ATerm) ATmakeAppl(sym__2, not_null(u_43), not_null(t_43)));
                        {
                          t = substitute_1(t, g_110);
                          {
                            f_44 = t;
                            k_43 :
                            if(match_cons(f_44, sym__2))
                              {
                                g_44 = ATgetArgument(f_44, 0);
                                h_44 = ATgetArgument(f_44, 1);
                                {
                                  if(((c_44 != NULL) && (c_44 != g_44)))
                                    _fail(g_44);
                                  else
                                    c_44 = g_44;
                                  if(((e_44 != NULL) && (e_44 != h_44)))
                                    _fail(h_44);
                                  else
                                    e_44 = h_44;
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_44), (ATerm) ATinsert(CheckATermList(not_null(c_44)), (ATerm) ATmakeAppl(sym__2, not_null(r_43), not_null(s_43))));
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
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL;
  n_44 = t;
  l_44 :
  if(((ATgetType(n_44) == AT_LIST) && !(ATisEmpty(n_44))))
    {
      o_44 = ATgetFirst((ATermList) n_44);
      r_44 = (ATerm) ATgetNext((ATermList) n_44);
      m_44 :
      if(match_cons(o_44, sym__2))
        {
          p_44 = ATgetArgument(o_44, 0);
          q_44 = ATgetArgument(o_44, 1);
          {
            ATerm t_44 = NULL;
            if(((p_44 != NULL) && (p_44 != q_44)))
              _fail(q_44);
            else
              p_44 = q_44;
            {
              if(((t_44 != NULL) && (t_44 != r_44)))
                _fail(r_44);
              else
                t_44 = r_44;
              t = not_null(t_44);
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
ATerm while_not_2 (ATerm t, ATerm b_82 (ATerm), ATerm c_82 (ATerm))
{
  ATerm v_44 (ATerm t)
  {
    ATerm d_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_82(t);
        ;
        LocalPopChoice(l_9);
      }
    else
      {
        t = d_9;
        {
          t = c_82(t);
          t = v_44(t);
        }
      }
    return(t);
  }
  t = v_44(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm e_82 (ATerm), ATerm f_82 (ATerm), ATerm g_82 (ATerm))
{
  t = e_82(t);
  t = while_not_2(t, f_82, g_82);
  return(t);
}
ATerm prop_pattern_match_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm a_45 = NULL;
    a_45 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_45), (ATerm) ATempty);
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL;
    c_45 = t;
    y_44 :
    if(match_cons(c_45, sym__2))
      {
        d_45 = ATgetArgument(c_45, 0);
        e_45 = ATgetArgument(c_45, 1);
        z_44 :
        if(((ATgetType(d_45) == AT_LIST) && ATisEmpty(d_45)))
          {
            t = not_null(e_45);
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
  ATerm m_2 (ATerm t)
  {
    ATerm m_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2(t, UfIdem_0, _id);
        ;
        LocalPopChoice(q_9);
      }
    else
      {
        t = m_9;
        {
          ATerm r_9 = t;
          int s_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_2 (ATerm t)
              {
                t = Var_1(t, _id);
                return(t);
              }
              t = UfVar_1(t, n_2);
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
                    t = _2(t, UfDecompose_0, _id);
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
                          t = _2(t, AsMatch_0, _id);
                          ;
                          LocalPopChoice(w_9);
                        }
                      else
                        {
                          t = v_9;
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
                                  ATerm o_2 (ATerm t)
                                  {
                                    ATerm p_2 (ATerm t)
                                    {
                                      t = Var_1(t, _id);
                                      return(t);
                                    }
                                    t = TermIsVarIgnore_1(t, p_2);
                                    return(t);
                                  }
                                  t = _2(t, o_2, _id);
                                }
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
  t = for_3(t, k_2, l_2, m_2);
  return(t);
}
ATerm CurrentTerm_0 (ATerm t)
{
  ATerm t_45 = NULL;
  t_45 = t;
  {
    ATerm f_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_45 = NULL;
        ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm q_2 (ATerm t)
          {
            t = term_u_6;
            return(t);
          }
          t = rewrite_1(t, q_2);
          {
            x_45 = t;
            m_45 :
            if(match_cons(x_45, sym_Defined_2))
              {
                y_45 = ATgetArgument(x_45, 0);
                z_45 = ATgetArgument(x_45, 1);
                n_45 :
                if(match_string(y_45, "i_0"))
                  {
                    if(((w_45 != NULL) && (w_45 != z_45)))
                      _fail(z_45);
                    else
                      w_45 = z_45;
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
        t = not_null(w_45);
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = f_10;
        {
          ATerm j_10 = t;
          int k_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_46 = NULL;
              ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL;
              t = (ATerm) ATempty;
              {
                ATerm r_2 (ATerm t)
                {
                  t = term_u_6;
                  return(t);
                }
                t = rewrite_1(t, r_2);
                {
                  e_46 = t;
                  p_45 :
                  if(match_cons(e_46, sym_Defined_2))
                    {
                      f_46 = ATgetArgument(e_46, 0);
                      g_46 = ATgetArgument(e_46, 1);
                      q_45 :
                      if(match_string(f_46, "g_0"))
                        {
                          if(((d_46 != NULL) && (d_46 != g_46)))
                            _fail(g_46);
                          else
                            d_46 = g_46;
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
              t = not_null(d_46);
              ;
              LocalPopChoice(k_10);
            }
          else
            {
              t = j_10;
              {
                ATerm i_46 = NULL;
                t = (ATerm) ATempty;
                {
                  ATerm s_2 (ATerm t)
                  {
                    t = term_u_6;
                    return(t);
                  }
                  t = rewrite_1(t, s_2);
                  {
                    i_46 = t;
                    s_45 :
                    if(match_cons(i_46, sym_Undefined_0))
                      {
                        _fail(t);
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                }
                t = term_l_6;
              }
            }
        }
      }
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
  r_46 = t;
  q_46 :
  if(((ATgetType(r_46) == AT_LIST) && !(ATisEmpty(r_46))))
    {
      s_46 = ATgetFirst((ATermList) r_46);
      t_46 = (ATerm) ATgetNext((ATermList) r_46);
      t = not_null(s_46);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,c_47 = NULL;
  y_46 = t;
  x_46 :
  if(match_cons(y_46, sym__2))
    {
      z_46 = ATgetArgument(y_46, 0);
      c_47 = ATgetArgument(y_46, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_46), not_null(c_47));
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
ATerm rewrite_1 (ATerm t, ATerm w_98 (ATerm))
{
  ATerm t_47 = NULL;
  ATerm w_47 = NULL;
  t_47 = t;
  {
    ATerm x_47 = NULL;
    t = term_l_10;
    {
      t = w_98(t);
      {
        x_47 = t;
        if(((w_47 != NULL) && (w_47 != x_47)))
          _fail(x_47);
        else
          w_47 = x_47;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_47), not_null(t_47));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Binding_0 (ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL;
  l_48 = t;
  k_48 :
  if(match_cons(l_48, sym_Var_1))
    {
      m_48 = ATgetArgument(l_48, 0);
      {
        ATerm m_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_48 = NULL;
            ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL;
            t = not_null(l_48);
            {
              ATerm t_2 (ATerm t)
              {
                t = term_i_6;
                return(t);
              }
              t = rewrite_1(t, t_2);
              {
                q_48 = t;
                e_48 :
                if(match_cons(q_48, sym_Defined_2))
                  {
                    r_48 = ATgetArgument(q_48, 0);
                    s_48 = ATgetArgument(q_48, 1);
                    f_48 :
                    if(match_string(r_48, "k_0"))
                      {
                        if(((p_48 != NULL) && (p_48 != s_48)))
                          _fail(s_48);
                        else
                          p_48 = s_48;
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
            t = not_null(p_48);
            ;
            LocalPopChoice(q_10);
          }
        else
          {
            t = m_10;
            {
              ATerm r_10 = t;
              int s_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_48 = NULL;
                  t = not_null(l_48);
                  {
                    ATerm u_2 (ATerm t)
                    {
                      t = term_i_6;
                      return(t);
                    }
                    t = rewrite_1(t, u_2);
                    {
                      v_48 = t;
                      h_48 :
                      if(match_cons(v_48, sym_Undefined_0))
                        {
                          _fail(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                  t = term_l_6;
                  ;
                  LocalPopChoice(s_10);
                }
              else
                {
                  t = r_10;
                  {
                    ATerm y_48 = NULL;
                    t = not_null(l_48);
                    {
                      ATerm v_2 (ATerm t)
                      {
                        t = term_i_6;
                        return(t);
                      }
                      t = rewrite_1(t, v_2);
                      {
                        y_48 = t;
                        j_48 :
                        if(match_cons(y_48, sym_Undefined_0))
                          {
                            _fail(t);
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    }
                    t = term_l_6;
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
ATerm alltd_1 (ATerm t, ATerm c_84 (ATerm))
{
  ATerm l_49 (ATerm t)
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_84(t);
        ;
        LocalPopChoice(u_10);
      }
    else
      {
        t = t_10;
        t = _all(t, l_49);
      }
    return(t);
  }
  t = l_49(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm q_71 (ATerm))
{
  ATerm r_49 = NULL,s_49 = NULL;
  r_49 = t;
  q_49 :
  if(match_cons(r_49, sym_Match_1))
    {
      s_49 = ATgetArgument(r_49, 0);
      {
        ATerm v_49 = NULL,x_49 = NULL;
        ATerm w_49 = NULL;
        t = SSLgetAnnotations(not_null(r_49));
        {
          w_49 = t;
          if(((v_49 != NULL) && (v_49 != w_49)))
            _fail(w_49);
          else
            v_49 = w_49;
        }
        {
          t = not_null(s_49);
          {
            ATerm z_49 = NULL;
            t = q_71(t);
            {
              x_49 = t;
              {
                ATerm a_50 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(x_49)), not_null(v_49));
                {
                  a_50 = t;
                  if(((z_49 != NULL) && (z_49 != a_50)))
                    _fail(a_50);
                  else
                    z_49 = a_50;
                }
                t = not_null(z_49);
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
  ATerm k_50 = NULL,l_50 = NULL;
  ATerm w_2 (ATerm t)
  {
    t = alltd_1(t, Binding_0);
    return(t);
  }
  t = Match_1(t, w_2);
  {
    k_50 = t;
    j_50 :
    if(match_cons(k_50, sym_Match_1))
      {
        l_50 = ATgetArgument(k_50, 0);
        {
          ATerm n_50 = NULL;
          ATerm x_2 (ATerm t)
          {
            ATerm v_10 = t;
            int a_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_11;
                b_11 = t;
                {
                  ATerm o_50 = NULL;
                  t = CurrentTerm_0(t);
                  {
                    o_50 = t;
                    if(((n_50 != NULL) && (n_50 != o_50)))
                      _fail(o_50);
                    else
                      n_50 = o_50;
                  }
                }
                t = b_11;
                {
                  ATerm c_11 = t;
                  int g_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_11;
                      i_11 = t;
                      {
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(l_50), not_null(n_50)));
                        {
                          t = prop_pattern_match_0(t);
                          {
                            ATerm y_2 (ATerm t)
                            {
                              t = try_1(t, introduce_binding_0);
                              return(t);
                            }
                            t = map_1(t, y_2);
                          }
                        }
                      }
                      t = i_11;
                      ;
                      LocalPopChoice(g_11);
                    }
                  else
                    {
                      t = c_11;
                      {
                        ATerm p_50 = NULL;
                        ATerm q_50 = NULL;
                        q_50 = t;
                        if(((p_50 != NULL) && (p_50 != q_50)))
                          _fail(q_50);
                        else
                          p_50 = q_50;
                        {
                          t = (ATerm) ATmakeAppl(sym__4, term_l_11, not_null(p_50), term_m_11, not_null(n_50));
                          {
                            ATerm z_2 (ATerm t)
                            {
                              t = term_n_11;
                              return(t);
                            }
                            t = debug_1(t, z_2);
                            t = term_o_11;
                          }
                        }
                      }
                    }
                }
                ;
                LocalPopChoice(a_11);
              }
            else
              {
                t = v_10;
                {
                  ATerm p_11;
                  p_11 = t;
                  {
                    t = not_null(l_50);
                    {
                      ATerm q_11 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm a_3 (ATerm t)
                          {
                            ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL;
                            r_50 = t;
                            i_50 :
                            if(!(match_cons(r_50, sym_Wld_0)))
                              {
                                if(match_cons(r_50, sym_As_2))
                                  {
                                    s_50 = ATgetArgument(r_50, 0);
                                    t_50 = ATgetArgument(r_50, 1);
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
                          t = oncetd_1(t, a_3);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = q_11;
                        }
                    }
                  }
                  t = p_11;
                  {
                    ATerm v_11;
                    v_11 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_w_11, not_null(l_50)));
                      {
                        ATerm b_3 (ATerm t)
                        {
                          t = term_u_6;
                          return(t);
                        }
                        t = assert_1(t, b_3);
                      }
                    }
                    t = v_11;
                  }
                }
              }
            return(t);
          }
          t = try_1(t, x_2);
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
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prop_match_0(t);
      ;
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = prop_build_0(t);
            ;
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            {
              ATerm f_12 = t;
              int g_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = prop_scope_1(t, cp_0);
                  ;
                  LocalPopChoice(g_12);
                }
              else
                {
                  t = f_12;
                  {
                    ATerm h_12 = t;
                    int l_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = prop_call_1(t, cp_0);
                        ;
                        LocalPopChoice(l_12);
                      }
                    else
                      {
                        t = h_12;
                        {
                          ATerm n_12 = t;
                          int q_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_traversal_1(t, cp_0);
                              ;
                              LocalPopChoice(q_12);
                            }
                          else
                            {
                              t = n_12;
                              {
                                ATerm r_12 = t;
                                int s_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = prop_seq_1(t, cp_0);
                                    ;
                                    LocalPopChoice(s_12);
                                  }
                                else
                                  {
                                    t = r_12;
                                    {
                                      ATerm t_12 = t;
                                      int u_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = prop_choice_1(t, cp_0);
                                          ;
                                          LocalPopChoice(u_12);
                                        }
                                      else
                                        {
                                          t = t_12;
                                          {
                                            ATerm v_12 = t;
                                            int w_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = prop_let_1(t, cp_0);
                                                ;
                                                LocalPopChoice(w_12);
                                              }
                                            else
                                              {
                                                t = v_12;
                                                {
                                                  ATerm x_12 = t;
                                                  int g_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = prop_rec_1(t, cp_0);
                                                      ;
                                                      LocalPopChoice(g_13);
                                                    }
                                                  else
                                                    {
                                                      t = x_12;
                                                      {
                                                        ATerm h_13 = t;
                                                        int i_13 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = prop_not_1(t, cp_0);
                                                            ;
                                                            LocalPopChoice(i_13);
                                                          }
                                                        else
                                                          {
                                                            t = h_13;
                                                            {
                                                              ATerm j_13 = t;
                                                              int k_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = prop_sdef_1(t, cp_0);
                                                                  ;
                                                                  LocalPopChoice(k_13);
                                                                }
                                                              else
                                                                {
                                                                  t = j_13;
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
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL;
  z_50 = t;
  y_50 :
  if(((ATgetType(z_50) == AT_LIST) && !(ATisEmpty(z_50))))
    {
      a_51 = ATgetFirst((ATermList) z_50);
      b_51 = (ATerm) ATgetNext((ATermList) z_50);
      t = not_null(b_51);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL;
  h_51 = t;
  g_51 :
  if(match_cons(h_51, sym__2))
    {
      i_51 = ATgetArgument(h_51, 0);
      j_51 = ATgetArgument(h_51, 1);
      {
        ATerm l_13;
        l_13 = t;
        {
          ATerm m_51 = NULL;
          ATerm n_51 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_51), not_null(j_51));
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
              n_51 = t;
              if(((m_51 != NULL) && (m_51 != n_51)))
                _fail(n_51);
              else
                m_51 = n_51;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_51), not_null(j_51), not_null(m_51));
            t = table_put_0(t);
          }
        }
        t = l_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm r_98 (ATerm))
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL;
  ATerm o_13;
  o_13 = t;
  {
    ATerm x_51 = NULL;
    ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL;
    t = r_98(t);
    {
      x_51 = t;
      {
        if(((w_51 != NULL) && (w_51 != x_51)))
          _fail(x_51);
        else
          w_51 = x_51;
        {
          ATerm u_13 = t;
          int v_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_51), term_v_7);
              t = table_get_0(t);
              ;
              LocalPopChoice(v_13);
            }
          else
            {
              t = u_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            y_51 = t;
            t_51 :
            if(((ATgetType(y_51) == AT_LIST) && !(ATisEmpty(y_51))))
              {
                z_51 = ATgetFirst((ATermList) y_51);
                a_52 = (ATerm) ATgetNext((ATermList) y_51);
                {
                  if(((v_51 != NULL) && (v_51 != z_51)))
                    _fail(z_51);
                  else
                    v_51 = z_51;
                  {
                    if(((u_51 != NULL) && (u_51 != a_52)))
                      _fail(a_52);
                    else
                      u_51 = a_52;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(w_51), term_v_7, not_null(u_51));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(v_51);
                          {
                            ATerm c_3 (ATerm t)
                            {
                              ATerm b_52 = NULL;
                              b_52 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_51), not_null(b_52));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, c_3);
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
ATerm restore_always_2 (ATerm t, ATerm f_81 (ATerm), ATerm g_81 (ATerm))
{
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_81(t);
      t = g_81(t);
      ;
      LocalPopChoice(x_13);
    }
  else
    {
      t = w_13;
      {
        t = g_81(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm q_98 (ATerm))
{
  ATerm i_52 = NULL;
  ATerm b_14;
  b_14 = t;
  {
    ATerm j_52 = NULL;
    ATerm k_52 = NULL;
    t = q_98(t);
    {
      j_52 = t;
      {
        if(((i_52 != NULL) && (i_52 != j_52)))
          _fail(j_52);
        else
          i_52 = j_52;
        {
          ATerm l_52 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_52), term_v_7);
          {
            ATerm d_14 = t;
            int f_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(f_14);
              }
            else
              {
                t = d_14;
                t = (ATerm) ATempty;
              }
            {
              l_52 = t;
              if(((k_52 != NULL) && (k_52 != l_52)))
                _fail(l_52);
              else
                k_52 = l_52;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_52), term_v_7, (ATerm) ATinsert(CheckATermList(not_null(k_52)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = b_14;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm s_98 (ATerm), ATerm t_98 (ATerm))
{
  t = begin_scope_1(t, s_98);
  {
    ATerm d_3 (ATerm t)
    {
      t = end_scope_1(t, s_98);
      return(t);
    }
    t = restore_always_2(t, t_98, d_3);
  }
  return(t);
}
ATerm const_prop_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    t = term_u_6;
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    ATerm g_3 (ATerm t)
    {
      t = term_i_6;
      return(t);
    }
    t = scope_2(t, g_3, cp_0);
    return(t);
  }
  t = scope_2(t, e_3, f_3);
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_88 (ATerm))
{
  ATerm x_52 (ATerm t)
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
        t = Cons_2(t, b_88, x_52);
      }
    return(t);
  }
  t = x_52(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm a_67 (ATerm))
{
  ATerm d_53 = NULL,e_53 = NULL;
  d_53 = t;
  c_53 :
  if(match_cons(d_53, sym_Strategies_1))
    {
      e_53 = ATgetArgument(d_53, 0);
      {
        ATerm h_53 = NULL,j_53 = NULL;
        ATerm i_53 = NULL;
        t = SSLgetAnnotations(not_null(d_53));
        {
          i_53 = t;
          if(((h_53 != NULL) && (h_53 != i_53)))
            _fail(i_53);
          else
            h_53 = i_53;
        }
        {
          t = not_null(e_53);
          {
            ATerm l_53 = NULL;
            t = a_67(t);
            {
              j_53 = t;
              {
                ATerm m_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(j_53)), not_null(h_53));
                {
                  m_53 = t;
                  if(((l_53 != NULL) && (l_53 != m_53)))
                    _fail(m_53);
                  else
                    l_53 = m_53;
                }
                t = not_null(l_53);
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
ATerm Cons_2 (ATerm t, ATerm u_66 (ATerm), ATerm v_66 (ATerm))
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
  z_53 = t;
  y_53 :
  if(((ATgetType(z_53) == AT_LIST) && !(ATisEmpty(z_53))))
    {
      a_54 = ATgetFirst((ATermList) z_53);
      b_54 = (ATerm) ATgetNext((ATermList) z_53);
      {
        ATerm k_54 = NULL,m_54 = NULL;
        ATerm l_54 = NULL;
        t = SSLgetAnnotations(not_null(z_53));
        {
          l_54 = t;
          if(((k_54 != NULL) && (k_54 != l_54)))
            _fail(l_54);
          else
            k_54 = l_54;
        }
        {
          t = not_null(a_54);
          {
            ATerm o_54 = NULL;
            t = u_66(t);
            {
              m_54 = t;
              {
                t = not_null(b_54);
                {
                  ATerm q_54 = NULL;
                  t = v_66(t);
                  {
                    o_54 = t;
                    {
                      ATerm r_54 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_54)), not_null(m_54)), not_null(k_54));
                      {
                        r_54 = t;
                        if(((q_54 != NULL) && (q_54 != r_54)))
                          _fail(r_54);
                        else
                          q_54 = r_54;
                      }
                      t = not_null(q_54);
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
ATerm Signature_1 (ATerm t, ATerm b_67 (ATerm))
{
  ATerm d_55 = NULL,e_55 = NULL;
  d_55 = t;
  c_55 :
  if(match_cons(d_55, sym_Signature_1))
    {
      e_55 = ATgetArgument(d_55, 0);
      {
        ATerm h_55 = NULL,j_55 = NULL;
        ATerm i_55 = NULL;
        t = SSLgetAnnotations(not_null(d_55));
        {
          i_55 = t;
          if(((h_55 != NULL) && (h_55 != i_55)))
            _fail(i_55);
          else
            h_55 = i_55;
        }
        {
          t = not_null(e_55);
          {
            ATerm l_55 = NULL;
            t = b_67(t);
            {
              j_55 = t;
              {
                ATerm m_55 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(j_55)), not_null(h_55));
                {
                  m_55 = t;
                  if(((l_55 != NULL) && (l_55 != m_55)))
                    _fail(m_55);
                  else
                    l_55 = m_55;
                }
                t = not_null(l_55);
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
ATerm Specification_1 (ATerm t, ATerm f_67 (ATerm))
{
  ATerm d_56 = NULL,e_56 = NULL;
  d_56 = t;
  c_56 :
  if(match_cons(d_56, sym_Specification_1))
    {
      e_56 = ATgetArgument(d_56, 0);
      {
        ATerm h_56 = NULL,j_56 = NULL;
        ATerm i_56 = NULL;
        t = SSLgetAnnotations(not_null(d_56));
        {
          i_56 = t;
          if(((h_56 != NULL) && (h_56 != i_56)))
            _fail(i_56);
          else
            h_56 = i_56;
        }
        {
          t = not_null(e_56);
          {
            ATerm l_56 = NULL;
            t = f_67(t);
            {
              j_56 = t;
              {
                ATerm m_56 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(j_56)), not_null(h_56));
                {
                  m_56 = t;
                  if(((l_56 != NULL) && (l_56 != m_56)))
                    _fail(m_56);
                  else
                    l_56 = m_56;
                }
                t = not_null(l_56);
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
ATerm _2 (ATerm t, ATerm l_65 (ATerm), ATerm m_65 (ATerm))
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL;
  x_56 = t;
  w_56 :
  if(match_cons(x_56, sym__2))
    {
      y_56 = ATgetArgument(x_56, 0);
      z_56 = ATgetArgument(x_56, 1);
      {
        ATerm d_57 = NULL,f_57 = NULL;
        ATerm e_57 = NULL;
        t = SSLgetAnnotations(not_null(x_56));
        {
          e_57 = t;
          if(((d_57 != NULL) && (d_57 != e_57)))
            _fail(e_57);
          else
            d_57 = e_57;
        }
        {
          t = not_null(y_56);
          {
            ATerm h_57 = NULL;
            t = l_65(t);
            {
              f_57 = t;
              {
                t = not_null(z_56);
                {
                  ATerm j_57 = NULL;
                  t = m_65(t);
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
  ATerm k_14;
  k_14 = t;
  {
    ATerm r_57 = NULL;
    ATerm s_57 = NULL;
    t = term_l_10;
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
      t = (ATerm) ATmakeAppl(sym__2, term_l_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_14), not_null(r_57)), term_m_14));
      {
        t = printnl_0(t);
        {
          t = term_o_14;
          t = exit_0(t);
        }
      }
    }
  }
  t = k_14;
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
        ATerm p_14;
        p_14 = t;
        t = SSL_printnl(not_null(x_57), not_null(y_57));
        t = p_14;
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
  ATerm i_58 = NULL;
  i_58 = t;
  t = SSL_implode_string(not_null(i_58));
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
        ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL;
        n_58 = t;
        m_58 :
        if(((ATgetType(n_58) == AT_LIST) && !(ATisEmpty(n_58))))
          {
            o_58 = ATgetFirst((ATermList) n_58);
            p_58 = (ATerm) ATgetNext((ATermList) n_58);
            {
              t = not_null(o_58);
              {
                ATerm h_3 (ATerm t)
                {
                  t = not_null(p_58);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, h_3);
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
  ATerm k_59 = NULL;
  ATerm m_59 = NULL;
  k_59 = t;
  {
    ATerm n_59 = NULL;
    ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL;
    t = not_null(k_59);
    {
      n_59 = t;
      {
        t = SSL_explode_term(not_null(n_59));
        {
          p_59 = t;
          i_59 :
          if(match_cons(p_59, sym__2))
            {
              q_59 = ATgetArgument(p_59, 0);
              r_59 = ATgetArgument(p_59, 1);
              j_59 :
              if(match_string(q_59, ""))
                {
                  if(((m_59 != NULL) && (m_59 != r_59)))
                    _fail(r_59);
                  else
                    m_59 = r_59;
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
      t = not_null(m_59);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_88 (ATerm))
{
  ATerm b_60 (ATerm t)
  {
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, b_60);
        ;
        LocalPopChoice(n_15);
      }
    else
      {
        t = m_15;
        {
          t = Nil_0(t);
          t = r_88(t);
        }
      }
    return(t);
  }
  t = b_60(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL,o_60 = NULL;
  l_60 = t;
  d_60 :
  if(match_cons(l_60, sym__2))
    {
      m_60 = ATgetArgument(l_60, 0);
      o_60 = ATgetArgument(l_60, 1);
      {
        t = not_null(m_60);
        {
          ATerm i_3 (ATerm t)
          {
            t = not_null(o_60);
            return(t);
          }
          t = at_end_1(t, i_3);
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
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(p_15);
    }
  else
    {
      t = o_15;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm d_61 = NULL;
  d_61 = t;
  t = SSL_explode_string(not_null(d_61));
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
        ATerm m_16 = t;
        int n_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, j_3);
            ;
            LocalPopChoice(n_16);
          }
        else
          {
            t = m_16;
            {
              ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL;
              m_61 = t;
              l_61 :
              if(match_cons(m_61, sym_Path_1))
                {
                  n_61 = ATgetArgument(m_61, 0);
                  t = not_null(n_61);
                }
              else
                {
                  if(match_cons(m_61, sym_Var_1))
                    {
                      n_61 = ATgetArgument(m_61, 0);
                      {
                        t = not_null(n_61);
                        {
                          ATerm o_16 = t;
                          int q_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(q_16);
                            }
                          else
                            {
                              t = o_16;
                              {
                                ATerm k_3 (ATerm t)
                                {
                                  t = term_r_16;
                                  return(t);
                                }
                                t = debug_1(t, k_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(m_61, sym_Prefix_2))
                        {
                          n_61 = ATgetArgument(m_61, 0);
                          o_61 = ATgetArgument(m_61, 1);
                          {
                            ATerm t_61 = NULL,v_61 = NULL;
                            ATerm s_16;
                            s_16 = t;
                            {
                              ATerm u_61 = NULL;
                              t = not_null(n_61);
                              {
                                t = eval_config_0(t);
                                {
                                  u_61 = t;
                                  if(((t_61 != NULL) && (t_61 != u_61)))
                                    _fail(u_61);
                                  else
                                    t_61 = u_61;
                                }
                              }
                            }
                            t = s_16;
                            {
                              ATerm w_61 = NULL;
                              t = not_null(o_61);
                              {
                                t = eval_config_0(t);
                                {
                                  w_61 = t;
                                  if(((v_61 != NULL) && (v_61 != w_61)))
                                    _fail(w_61);
                                  else
                                    v_61 = w_61;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_61), not_null(v_61));
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
  ATerm e_62 = NULL;
  e_62 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_t_16, not_null(e_62));
    {
      t = table_get_0(t);
      {
        ATerm l_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm u_16;
            u_16 = t;
            {
              ATerm g_62 = NULL;
              ATerm h_62 = NULL;
              h_62 = t;
              if(((g_62 != NULL) && (g_62 != h_62)))
                _fail(h_62);
              else
                g_62 = h_62;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_t_16, not_null(e_62), not_null(g_62));
                t = table_put_0(t);
              }
            }
            t = u_16;
          }
          return(t);
        }
        t = try_1(t, l_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm r_101 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm v_16;
    v_16 = t;
    {
      ATerm l_62 = NULL;
      ATerm m_62 = NULL;
      t = term_e_17;
      {
        t = get_config_0(t);
        {
          m_62 = t;
          if(((l_62 != NULL) && (l_62 != m_62)))
            _fail(m_62);
          else
            l_62 = m_62;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_62), term_f_17);
        t = geq_0(t);
      }
    }
    t = v_16;
    t = r_101(t);
    return(t);
  }
  t = try_1(t, m_3);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL;
  s_62 = t;
  q_62 :
  if(match_cons(s_62, sym__2))
    {
      t_62 = ATgetArgument(s_62, 0);
      u_62 = ATgetArgument(s_62, 1);
      r_62 :
      if(match_cons(u_62, sym_Stream_1))
        {
          v_62 = ATgetArgument(u_62, 0);
          {
            ATerm y_62 = NULL;
            t = SSL_fputc(not_null(t_62), not_null(v_62));
            {
              ATerm z_62 = NULL;
              z_62 = t;
              if(((y_62 != NULL) && (y_62 != z_62)))
                _fail(z_62);
              else
                y_62 = z_62;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_62));
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
  ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL;
  g_63 = t;
  e_63 :
  if(match_cons(g_63, sym__2))
    {
      h_63 = ATgetArgument(g_63, 0);
      j_63 = ATgetArgument(g_63, 1);
      f_63 :
      if(match_cons(h_63, sym_Stream_1))
        {
          i_63 = ATgetArgument(h_63, 0);
          {
            ATerm m_63 = NULL;
            t = SSL_write_term_to_stream_text(not_null(i_63), not_null(j_63));
            {
              ATerm n_63 = NULL;
              n_63 = t;
              if(((m_63 != NULL) && (m_63 != n_63)))
                _fail(n_63);
              else
                m_63 = n_63;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_63));
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
  ATerm n_3 (ATerm t)
  {
    ATerm r_63 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm s_63 = NULL;
      s_63 = t;
      if(((r_63 != NULL) && (r_63 != s_63)))
        _fail(s_63);
      else
        r_63 = s_63;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_17, not_null(r_63));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, n_3);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL;
  y_63 = t;
  w_63 :
  if(match_cons(y_63, sym__2))
    {
      z_63 = ATgetArgument(y_63, 0);
      b_64 = ATgetArgument(y_63, 1);
      x_63 :
      if(match_cons(z_63, sym_Stream_1))
        {
          a_64 = ATgetArgument(z_63, 0);
          {
            ATerm e_64 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(a_64), not_null(b_64));
            {
              ATerm f_64 = NULL;
              f_64 = t;
              if(((e_64 != NULL) && (e_64 != f_64)))
                _fail(f_64);
              else
                e_64 = f_64;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_64));
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
ATerm WriteToFile_1 (ATerm t, ATerm n_100 (ATerm))
{
  ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL;
  s_64 = t;
  r_64 :
  if(match_cons(s_64, sym__2))
    {
      t_64 = ATgetArgument(s_64, 0);
      u_64 = ATgetArgument(s_64, 1);
      {
        ATerm x_64 = NULL,z_64 = NULL;
        t = not_null(t_64);
        {
          ATerm y_64 = NULL;
          y_64 = t;
          if(((x_64 != NULL) && (x_64 != y_64)))
            _fail(y_64);
          else
            x_64 = y_64;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_64), term_h_17);
            {
              t = open_stream_0(t);
              {
                ATerm a_65 = NULL;
                a_65 = t;
                if(((z_64 != NULL) && (z_64 != a_65)))
                  _fail(a_65);
                else
                  z_64 = a_65;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_64), not_null(u_64));
                  {
                    t = n_100(t);
                    {
                      t = fclose_0(t);
                      t = not_null(u_64);
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
  ATerm q_65 = NULL;
  ATerm i_17;
  i_17 = t;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm j_17 = t;
      int k_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_3 (ATerm t)
          {
            ATerm r_65 = NULL,s_65 = NULL;
            r_65 = t;
            n_65 :
            if(match_cons(r_65, sym_Output_1))
              {
                s_65 = ATgetArgument(r_65, 0);
                if(((q_65 != NULL) && (q_65 != s_65)))
                  _fail(s_65);
                else
                  q_65 = s_65;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, p_3);
          ;
          LocalPopChoice(k_17);
        }
      else
        {
          t = j_17;
          {
            ATerm t_65 = NULL;
            t = term_l_17;
            {
              t_65 = t;
              if(((q_65 != NULL) && (q_65 != t_65)))
                _fail(t_65);
              else
                q_65 = t_65;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_3, _id);
  }
  t = i_17;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm r_3 (ATerm t)
      {
        t = not_null(q_65);
        return(t);
      }
      t = split_2(t, r_3, _id);
      return(t);
    }
    t = _2(t, _id, q_3);
    {
      ATerm m_17 = t;
      int r_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_3 (ATerm t)
          {
            ATerm t_3 (ATerm t)
            {
              ATerm u_65 = NULL;
              u_65 = t;
              p_65 :
              if(!(match_cons(u_65, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, t_3);
            return(t);
          }
          t = _2(t, s_3, WriteToBinaryFile_0);
          ;
          LocalPopChoice(r_17);
        }
      else
        {
          t = m_17;
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
ATerm apply_strategy_1 (ATerm t, ATerm p_103 (ATerm))
{
  ATerm a_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL;
  ATerm s_17;
  s_17 = t;
  t = dtime_0(t);
  t = s_17;
  {
    t = p_103(t);
    {
      ATerm t_17;
      t_17 = t;
      {
        ATerm b_66 = NULL;
        t = dtime_0(t);
        {
          b_66 = t;
          if(((a_66 != NULL) && (a_66 != b_66)))
            _fail(b_66);
          else
            a_66 = b_66;
        }
      }
      t = t_17;
      {
        c_66 = t;
        z_65 :
        if(match_cons(c_66, sym__2))
          {
            d_66 = ATgetArgument(c_66, 0);
            e_66 = ATgetArgument(c_66, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_66)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(a_66))), not_null(e_66));
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
  ATerm m_66 = NULL,n_66 = NULL;
  ATerm t_66 (ATerm t)
  {
    t = SSL_fclose(not_null(n_66));
    return(t);
  }
  n_66 = t;
  l_66 :
  if(match_cons(n_66, sym_Stream_1))
    {
      m_66 = ATgetArgument(n_66, 0);
      {
        ATerm x_17 = t;
        int z_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(m_66));
            ;
            LocalPopChoice(z_17);
          }
        else
          {
            t = x_17;
            t = t_66(t);
          }
      }
    }
  else
    {
      t = t_66(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm c_67 = NULL,d_67 = NULL;
  c_67 = t;
  z_66 :
  if(match_cons(c_67, sym_Stream_1))
    {
      d_67 = ATgetArgument(c_67, 0);
      t = SSL_read_term_from_stream(not_null(d_67));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm z_99 (ATerm))
{
  ATerm c_18;
  c_18 = t;
  {
    ATerm j_67 = NULL,l_67 = NULL;
    ATerm d_18;
    d_18 = t;
    {
      ATerm k_67 = NULL;
      t = z_99(t);
      {
        k_67 = t;
        if(((j_67 != NULL) && (j_67 != k_67)))
          _fail(k_67);
        else
          j_67 = k_67;
      }
    }
    t = d_18;
    {
      ATerm m_67 = NULL;
      m_67 = t;
      if(((l_67 != NULL) && (l_67 != m_67)))
        _fail(m_67);
      else
        l_67 = m_67;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_67)), not_null(j_67)));
        t = printnl_0(t);
      }
    }
  }
  t = c_18;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL;
  s_67 = t;
  r_67 :
  if(match_cons(s_67, sym__2))
    {
      t_67 = ATgetArgument(s_67, 0);
      u_67 = ATgetArgument(s_67, 1);
      {
        ATerm x_67 = NULL;
        t = SSL_fopen(not_null(t_67), not_null(u_67));
        {
          ATerm y_67 = NULL;
          y_67 = t;
          if(((x_67 != NULL) && (x_67 != y_67)))
            _fail(y_67);
          else
            x_67 = y_67;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_67));
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
  ATerm c_68 = NULL;
  c_68 = t;
  t = SSL_is_string(not_null(c_68));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm g_68 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm h_68 = NULL;
    h_68 = t;
    if(((g_68 != NULL) && (g_68 != h_68)))
      _fail(h_68);
    else
      g_68 = h_68;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_68));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm k_68 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm l_68 = NULL;
    l_68 = t;
    if(((k_68 != NULL) && (k_68 != l_68)))
      _fail(l_68);
    else
      k_68 = l_68;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_68));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm o_68 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm p_68 = NULL;
    p_68 = t;
    if(((o_68 != NULL) && (o_68 != p_68)))
      _fail(p_68);
    else
      o_68 = p_68;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_68));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm v_68 = NULL;
  v_68 = t;
  u_68 :
  if(match_cons(v_68, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(v_68, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(v_68, sym_stdin_0))
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
  ATerm f_69 = NULL;
  ATerm h_69 = NULL,i_69 = NULL;
  f_69 = t;
  {
    ATerm j_69 = NULL;
    ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL;
    t = not_null(f_69);
    {
      j_69 = t;
      {
        t = SSL_explode_term(not_null(j_69));
        {
          l_69 = t;
          c_69 :
          if(match_cons(l_69, sym__2))
            {
              m_69 = ATgetArgument(l_69, 0);
              n_69 = ATgetArgument(l_69, 1);
              d_69 :
              if(match_string(m_69, ""))
                {
                  e_69 :
                  if(((ATgetType(n_69) == AT_LIST) && !(ATisEmpty(n_69))))
                    {
                      o_69 = ATgetFirst((ATermList) n_69);
                      p_69 = (ATerm) ATgetNext((ATermList) n_69);
                      {
                        if(((i_69 != NULL) && (i_69 != o_69)))
                          _fail(o_69);
                        else
                          i_69 = o_69;
                        if(((h_69 != NULL) && (h_69 != p_69)))
                          _fail(p_69);
                        else
                          h_69 = p_69;
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
    t = not_null(i_69);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL;
  x_69 = t;
  w_69 :
  if(match_cons(x_69, sym__2))
    {
      y_69 = ATgetArgument(x_69, 0);
      z_69 = ATgetArgument(x_69, 1);
      {
        ATerm e_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(f_18);
          }
        else
          {
            t = e_18;
            {
              ATerm g_18 = t;
              int h_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_3 (ATerm t)
                  {
                    ATerm a_70 = NULL,b_70 = NULL;
                    a_70 = t;
                    v_69 :
                    if(match_cons(a_70, sym_Path_1))
                      {
                        b_70 = ATgetArgument(a_70, 0);
                        t = not_null(b_70);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, u_3, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(h_18);
                }
              else
                {
                  t = g_18;
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
  ATerm j_70 = NULL;
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_70 = NULL;
      ATerm i_70 = NULL;
      i_70 = t;
      if(((h_70 != NULL) && (h_70 != i_70)))
        _fail(i_70);
      else
        h_70 = i_70;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_70), term_k_18);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(j_18);
    }
  else
    {
      t = i_18;
      {
        ATerm v_3 (ATerm t)
        {
          t = term_l_18;
          return(t);
        }
        t = debug_1(t, v_3);
        _fail(t);
      }
    }
  {
    ATerm q_18;
    q_18 = t;
    {
      ATerm k_70 = NULL;
      t = read_from_stream_0(t);
      {
        k_70 = t;
        if(((j_70 != NULL) && (j_70 != k_70)))
          _fail(k_70);
        else
          j_70 = k_70;
      }
    }
    t = q_18;
    {
      t = fclose_0(t);
      t = not_null(j_70);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm r_95 (ATerm), ATerm s_95 (ATerm))
{
  ATerm p_70 = NULL,r_70 = NULL;
  ATerm r_18;
  r_18 = t;
  {
    ATerm q_70 = NULL;
    t = r_95(t);
    {
      q_70 = t;
      if(((p_70 != NULL) && (p_70 != q_70)))
        _fail(q_70);
      else
        p_70 = q_70;
    }
  }
  t = r_18;
  {
    ATerm s_70 = NULL;
    t = s_95(t);
    {
      s_70 = t;
      if(((r_70 != NULL) && (r_70 != s_70)))
        _fail(s_70);
      else
        r_70 = s_70;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_70), not_null(r_70));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm a_71 = NULL;
  ATerm s_18;
  s_18 = t;
  {
    ATerm w_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 (ATerm t)
        {
          ATerm d_71 = NULL,e_71 = NULL;
          d_71 = t;
          w_70 :
          if(match_cons(d_71, sym_Input_1))
            {
              e_71 = ATgetArgument(d_71, 0);
              if(((a_71 != NULL) && (a_71 != e_71)))
                _fail(e_71);
              else
                a_71 = e_71;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, w_3);
        ;
        LocalPopChoice(y_18);
      }
    else
      {
        t = w_18;
        {
          ATerm f_71 = NULL;
          t = term_b_19;
          {
            f_71 = t;
            if(((a_71 != NULL) && (a_71 != f_71)))
              _fail(f_71);
            else
              a_71 = f_71;
          }
        }
      }
  }
  t = s_18;
  {
    ATerm x_3 (ATerm t)
    {
      t = not_null(a_71);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_3);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm m_71 = NULL;
    m_71 = t;
    i_71 :
    if(!(match_string(m_71, "-k")))
      {
        if(!(match_string(m_71, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    ATerm c_19;
    c_19 = t;
    {
      ATerm s_71 = NULL;
      ATerm v_71 = NULL;
      t = string_to_int_0(t);
      {
        v_71 = t;
        if(((s_71 != NULL) && (s_71 != v_71)))
          _fail(v_71);
        else
          s_71 = v_71;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_19, not_null(s_71));
        t = set_config_0(t);
      }
    }
    t = c_19;
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_e_19;
    return(t);
  }
  t = ArgOption_3(t, y_3, z_3, a_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm c_72 = NULL;
  c_72 = t;
  t = SSL_string_to_int(not_null(c_72));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_4 (ATerm t)
      {
        ATerm t_72 = NULL;
        t_72 = t;
        l_72 :
        if(!(match_string(t_72, "-S")))
          {
            if(!(match_string(t_72, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        t = term_i_19;
        t = set_config_0(t);
        t = term_j_19;
        return(t);
      }
      ATerm d_4 (ATerm t)
      {
        t = term_k_19;
        return(t);
      }
      t = Option_3(t, b_4, c_4, d_4);
      ;
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      {
        ATerm p_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_4 (ATerm t)
            {
              ATerm u_72 = NULL;
              u_72 = t;
              m_72 :
              if(!(match_string(u_72, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm f_4 (ATerm t)
            {
              ATerm x_72 = NULL;
              ATerm r_19;
              r_19 = t;
              {
                ATerm v_72 = NULL;
                ATerm w_72 = NULL;
                t = string_to_int_0(t);
                {
                  w_72 = t;
                  if(((v_72 != NULL) && (v_72 != w_72)))
                    _fail(w_72);
                  else
                    v_72 = w_72;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_17, not_null(v_72));
                  t = set_config_0(t);
                }
              }
              t = r_19;
              {
                ATerm y_72 = NULL;
                y_72 = t;
                if(((x_72 != NULL) && (x_72 != y_72)))
                  _fail(y_72);
                else
                  x_72 = y_72;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(x_72));
              }
              return(t);
            }
            ATerm g_4 (ATerm t)
            {
              t = term_v_19;
              return(t);
            }
            t = ArgOption_3(t, e_4, f_4, g_4);
            ;
            LocalPopChoice(q_19);
          }
        else
          {
            t = p_19;
            {
              ATerm h_4 (ATerm t)
              {
                ATerm z_72 = NULL;
                z_72 = t;
                s_72 :
                if(!(match_string(z_72, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm i_4 (ATerm t)
              {
                t = term_a_20;
                t = set_config_0(t);
                t = term_b_20;
                return(t);
              }
              ATerm j_4 (ATerm t)
              {
                t = term_c_20;
                return(t);
              }
              t = Option_3(t, h_4, i_4, j_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    ATerm f_73 = NULL;
    f_73 = t;
    c_73 :
    if(!(match_string(f_73, "-o")))
      {
        if(!(match_string(f_73, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    ATerm i_73 = NULL;
    ATerm f_20;
    f_20 = t;
    {
      ATerm g_73 = NULL;
      ATerm h_73 = NULL;
      h_73 = t;
      if(((g_73 != NULL) && (g_73 != h_73)))
        _fail(h_73);
      else
        g_73 = h_73;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_20, not_null(g_73));
        t = set_config_0(t);
      }
    }
    t = f_20;
    {
      ATerm j_73 = NULL;
      j_73 = t;
      if(((i_73 != NULL) && (i_73 != j_73)))
        _fail(j_73);
      else
        i_73 = j_73;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(i_73));
    }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_h_20;
    return(t);
  }
  t = ArgOption_3(t, k_4, l_4, m_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm i_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(o_20);
    }
  else
    {
      t = i_20;
      {
        ATerm n_4 (ATerm t)
        {
          ATerm n_73 = NULL;
          n_73 = t;
          m_73 :
          if(!(match_string(n_73, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm o_4 (ATerm t)
        {
          t = term_q_20;
          t = set_config_0(t);
          t = term_r_20;
          return(t);
        }
        ATerm p_4 (ATerm t)
        {
          t = term_s_20;
          return(t);
        }
        t = Option_3(t, n_4, o_4, p_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL;
  t_73 = t;
  r_73 :
  if(match_string(t_73, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(t_73) == AT_LIST) && !(ATisEmpty(t_73))))
        {
          u_73 = ATgetFirst((ATermList) t_73);
          v_73 = (ATerm) ATgetNext((ATermList) t_73);
          s_73 :
          if(((ATgetType(v_73) == AT_LIST) && !(ATisEmpty(v_73))))
            {
              w_73 = ATgetFirst((ATermList) v_73);
              x_73 = (ATerm) ATgetNext((ATermList) v_73);
              {
                ATerm f_74 = NULL;
                ATerm t_20;
                t_20 = t;
                {
                  t = not_null(u_73);
                  t = j_0(t);
                }
                t = t_20;
                {
                  ATerm g_74 = NULL;
                  t = not_null(w_73);
                  {
                    t = l_0(t);
                    {
                      g_74 = t;
                      if(((f_74 != NULL) && (f_74 != g_74)))
                        _fail(g_74);
                      else
                        f_74 = g_74;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_73)), not_null(f_74));
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
  ATerm q_4 (ATerm t)
  {
    ATerm n_74 = NULL;
    n_74 = t;
    k_74 :
    if(!(match_string(n_74, "-i")))
      {
        if(!(match_string(n_74, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    ATerm q_74 = NULL;
    ATerm u_20;
    u_20 = t;
    {
      ATerm o_74 = NULL;
      ATerm p_74 = NULL;
      p_74 = t;
      if(((o_74 != NULL) && (o_74 != p_74)))
        _fail(p_74);
      else
        o_74 = p_74;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_20, not_null(o_74));
        t = set_config_0(t);
      }
    }
    t = u_20;
    {
      ATerm r_74 = NULL;
      r_74 = t;
      if(((q_74 != NULL) && (q_74 != r_74)))
        _fail(r_74);
      else
        q_74 = r_74;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(q_74));
    }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    t = term_w_20;
    return(t);
  }
  t = ArgOption_3(t, q_4, r_4, s_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      {
        ATerm d_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(h_21);
          }
        else
          {
            t = d_21;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm v_74 = NULL;
  t = report_run_time_0(t);
  {
    ATerm w_74 = NULL;
    t = term_l_10;
    {
      t = whoami_0(t);
      {
        w_74 = t;
        if(((v_74 != NULL) && (v_74 != w_74)))
          _fail(w_74);
        else
          v_74 = w_74;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_14, (ATerm) ATinsert(ATinsert(ATempty, term_j_21), not_null(v_74)));
      {
        t = printnl_0(t);
        {
          t = term_o_14;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_m_21;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm z_74 = NULL;
  z_74 = t;
  t = SSL_TicksToSeconds(not_null(z_74));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm e_75 = NULL,f_75 = NULL,g_75 = NULL;
  e_75 = t;
  d_75 :
  if(match_cons(e_75, sym__2))
    {
      f_75 = ATgetArgument(e_75, 0);
      g_75 = ATgetArgument(e_75, 1);
      {
        ATerm n_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(f_75), not_null(g_75));
            ;
            LocalPopChoice(o_21);
          }
        else
          {
            t = n_21;
            t = SSL_addr(not_null(f_75), not_null(g_75));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm c_94 (ATerm), ATerm d_94 (ATerm))
{
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_94(t);
      ;
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
      {
        ATerm n_75 = NULL,o_75 = NULL,p_75 = NULL;
        n_75 = t;
        m_75 :
        if(((ATgetType(n_75) == AT_LIST) && !(ATisEmpty(n_75))))
          {
            o_75 = ATgetFirst((ATermList) n_75);
            p_75 = (ATerm) ATgetNext((ATermList) n_75);
            {
              ATerm s_75 = NULL;
              ATerm t_75 = NULL;
              t = not_null(p_75);
              {
                t = foldr_2(t, c_94, d_94);
                {
                  t_75 = t;
                  if(((s_75 != NULL) && (s_75 != t_75)))
                    _fail(t_75);
                  else
                    s_75 = t_75;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_75), not_null(s_75));
                t = d_94(t);
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
ATerm crush_2 (ATerm t, ATerm v_97 (ATerm), ATerm w_97 (ATerm))
{
  ATerm a_76 = NULL;
  ATerm c_76 = NULL;
  a_76 = t;
  {
    ATerm d_76 = NULL;
    ATerm f_76 = NULL,g_76 = NULL,h_76 = NULL;
    t = not_null(a_76);
    {
      d_76 = t;
      {
        t = SSL_explode_term(not_null(d_76));
        {
          f_76 = t;
          z_75 :
          if(match_cons(f_76, sym__2))
            {
              g_76 = ATgetArgument(f_76, 0);
              h_76 = ATgetArgument(f_76, 1);
              if(((c_76 != NULL) && (c_76 != h_76)))
                _fail(h_76);
              else
                c_76 = h_76;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(c_76);
      t = foldr_2(t, v_97, w_97);
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
    ATerm t_4 (ATerm t)
    {
      t = term_h_19;
      return(t);
    }
    t = crush_2(t, t_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm n_76 = NULL,o_76 = NULL,p_76 = NULL;
  n_76 = t;
  m_76 :
  if(match_cons(n_76, sym__2))
    {
      o_76 = ATgetArgument(n_76, 0);
      p_76 = ATgetArgument(n_76, 1);
      {
        ATerm r_21;
        r_21 = t;
        {
          ATerm s_21 = t;
          int t_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(o_76), not_null(p_76));
              ;
              LocalPopChoice(t_21);
            }
          else
            {
              t = s_21;
              t = SSL_gtr(not_null(o_76), not_null(p_76));
            }
        }
        t = r_21;
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
  ATerm v_76 = NULL;
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_76 = NULL,x_76 = NULL,y_76 = NULL;
      w_76 = t;
      u_76 :
      if(match_cons(w_76, sym__2))
        {
          x_76 = ATgetArgument(w_76, 0);
          y_76 = ATgetArgument(w_76, 1);
          {
            if(((v_76 != NULL) && (v_76 != x_76)))
              _fail(x_76);
            else
              v_76 = x_76;
            if(((v_76 != NULL) && (v_76 != y_76)))
              _fail(y_76);
            else
              v_76 = y_76;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(v_21);
    }
  else
    {
      t = u_21;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm q_101 (ATerm))
{
  ATerm u_4 (ATerm t)
  {
    ATerm a_22;
    a_22 = t;
    {
      ATerm b_77 = NULL;
      ATerm c_77 = NULL;
      t = term_e_17;
      {
        t = get_config_0(t);
        {
          c_77 = t;
          if(((b_77 != NULL) && (b_77 != c_77)))
            _fail(c_77);
          else
            b_77 = c_77;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_77), term_o_14);
        t = geq_0(t);
      }
    }
    t = a_22;
    t = q_101(t);
    return(t);
  }
  t = try_1(t, u_4);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    ATerm g_77 = NULL,i_77 = NULL;
    ATerm b_22;
    b_22 = t;
    {
      ATerm h_77 = NULL;
      t = run_time_0(t);
      {
        h_77 = t;
        if(((g_77 != NULL) && (g_77 != h_77)))
          _fail(h_77);
        else
          g_77 = h_77;
      }
    }
    t = b_22;
    {
      ATerm j_77 = NULL;
      t = term_l_10;
      {
        t = whoami_0(t);
        {
          j_77 = t;
          if(((i_77 != NULL) && (i_77 != j_77)))
            _fail(j_77);
          else
            i_77 = j_77;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_22), not_null(g_77)), term_c_22), not_null(i_77)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, v_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_h_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_77 = NULL;
  q_77 = t;
  p_77 :
  if(match_cons(q_77, sym_Version_0))
    {
      ATerm s_77 = NULL,u_77 = NULL;
      ATerm i_22;
      i_22 = t;
      {
        ATerm t_77 = NULL;
        t = SSLgetAnnotations(not_null(q_77));
        {
          t_77 = t;
          if(((s_77 != NULL) && (s_77 != t_77)))
            _fail(t_77);
          else
            s_77 = t_77;
        }
      }
      t = i_22;
      {
        ATerm v_77 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(s_77));
        {
          v_77 = t;
          if(((u_77 != NULL) && (u_77 != v_77)))
            _fail(v_77);
          else
            u_77 = v_77;
        }
        t = not_null(u_77);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm n_104 (ATerm))
{
  ATerm l_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_22;
      t = get_config_0(t);
      ;
      LocalPopChoice(m_22);
    }
  else
    {
      t = l_22;
      {
        ATerm w_4 (ATerm t)
        {
          ATerm o_22 = t;
          int p_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(p_22);
            }
          else
            {
              t = o_22;
              {
                ATerm q_22 = t;
                int y_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(y_22);
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
        t = option_defined_1(t, w_4);
      }
    }
  t = n_104(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_78 = NULL;
  a_78 = t;
  t = SSL_table_create(not_null(a_78));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm e_78 = NULL;
  e_78 = t;
  {
    ATerm z_22;
    z_22 = t;
    {
      t = term_a_23;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_23, term_g_23, not_null(e_78));
          t = table_put_0(t);
        }
      }
    }
    t = z_22;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm i_78 = NULL;
  i_78 = t;
  t = SSL_table_destroy(not_null(i_78));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_78 = NULL;
  m_78 = t;
  t = SSL_exit(not_null(m_78));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_106 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm v_78 = NULL,w_78 = NULL,x_78 = NULL;
  x_78 = t;
  u_78 :
  if(((ATgetType(x_78) == AT_LIST) && !(ATisEmpty(x_78))))
    {
      v_78 = ATgetFirst((ATermList) x_78);
      w_78 = (ATerm) ATgetNext((ATermList) x_78);
      {
        ATerm a_79 = NULL;
        t = not_null(w_78);
        {
          ATerm h_23;
          h_23 = t;
          {
            ATerm b_79 = NULL,d_79 = NULL,f_79 = NULL;
            ATerm l_23;
            l_23 = t;
            {
              ATerm c_79 = NULL;
              t = e_0(t);
              {
                c_79 = t;
                if(((b_79 != NULL) && (b_79 != c_79)))
                  _fail(c_79);
                else
                  b_79 = c_79;
              }
            }
            t = l_23;
            {
              ATerm e_79 = NULL;
              t = not_null(v_78);
              {
                t = d_0(t);
                {
                  e_79 = t;
                  if(((d_79 != NULL) && (d_79 != e_79)))
                    _fail(e_79);
                  else
                    d_79 = e_79;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(b_79)), not_null(d_79));
                {
                  f_79 = t;
                  if(((a_79 != NULL) && (a_79 != f_79)))
                    _fail(f_79);
                  else
                    a_79 = f_79;
                }
              }
            }
          }
          t = h_23;
          {
            ATerm x_4 (ATerm t)
            {
              t = not_null(a_79);
              return(t);
            }
            t = reverse_acc_2(t, d_0, x_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(x_78) == AT_LIST) && ATisEmpty(x_78)))
        {
          {
            t = term_l_10;
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
  ATerm y_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, y_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm n_106 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm u_79 (ATerm))
{
  ATerm q_79 = NULL,r_79 = NULL;
  q_79 = t;
  p_79 :
  if(match_cons(q_79, sym_Program_1))
    {
      r_79 = ATgetArgument(q_79, 0);
      {
        ATerm w_79 = NULL,y_79 = NULL;
        ATerm x_79 = NULL;
        t = SSLgetAnnotations(not_null(q_79));
        {
          x_79 = t;
          if(((w_79 != NULL) && (w_79 != x_79)))
            _fail(x_79);
          else
            w_79 = x_79;
        }
        {
          t = not_null(r_79);
          {
            ATerm c_80 = NULL;
            t = u_79(t);
            {
              y_79 = t;
              {
                ATerm d_80 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(y_79)), not_null(w_79));
                {
                  d_80 = t;
                  if(((c_80 != NULL) && (c_80 != d_80)))
                    _fail(d_80);
                  else
                    c_80 = d_80;
                }
                t = not_null(c_80);
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
  ATerm w_80 = NULL;
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_80 = NULL;
      t = term_m_21;
      {
        t = get_config_0(t);
        {
          x_80 = t;
          if(((w_80 != NULL) && (w_80 != x_80)))
            _fail(x_80);
          else
            w_80 = x_80;
        }
      }
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      {
        ATerm z_4 (ATerm t)
        {
          ATerm a_5 (ATerm t)
          {
            ATerm y_80 = NULL;
            y_80 = t;
            if(((w_80 != NULL) && (w_80 != y_80)))
              _fail(y_80);
            else
              w_80 = y_80;
            return(t);
          }
          t = Program_1(t, a_5);
          return(t);
        }
        t = option_defined_1(t, z_4);
      }
    }
  {
    ATerm b_5 (ATerm t)
    {
      ATerm c_5 (ATerm t)
      {
        t = not_null(w_80);
        return(t);
      }
      t = short_description_1(t, c_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, b_5);
    {
      t = term_o_23;
      {
        t = echo_0(t);
        {
          t = term_s_23;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm d_5 (ATerm t)
                {
                  ATerm z_80 = NULL;
                  ATerm a_81 = NULL;
                  a_81 = t;
                  if(((z_80 != NULL) && (z_80 != a_81)))
                    _fail(a_81);
                  else
                    z_80 = a_81;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_80)), term_t_23);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, d_5);
                {
                  ATerm e_5 (ATerm t)
                  {
                    ATerm b_81 = NULL;
                    ATerm c_81 = NULL;
                    ATerm f_5 (ATerm t)
                    {
                      t = not_null(w_80);
                      return(t);
                    }
                    t = long_description_1(t, f_5);
                    {
                      c_81 = t;
                      if(((b_81 != NULL) && (b_81 != c_81)))
                        _fail(c_81);
                      else
                        b_81 = c_81;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(b_81)), term_v_23);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, e_5);
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
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(x_23);
    }
  else
    {
      t = w_23;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm v_79 (ATerm))
{
  ATerm o_81 = NULL,p_81 = NULL;
  o_81 = t;
  n_81 :
  if(match_cons(o_81, sym_Undefined_1))
    {
      p_81 = ATgetArgument(o_81, 0);
      {
        ATerm s_81 = NULL,u_81 = NULL;
        ATerm t_81 = NULL;
        t = SSLgetAnnotations(not_null(o_81));
        {
          t_81 = t;
          if(((s_81 != NULL) && (s_81 != t_81)))
            _fail(t_81);
          else
            s_81 = t_81;
        }
        {
          t = not_null(p_81);
          {
            ATerm w_81 = NULL;
            t = v_79(t);
            {
              u_81 = t;
              {
                ATerm x_81 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_81)), not_null(s_81));
                {
                  x_81 = t;
                  if(((w_81 != NULL) && (w_81 != x_81)))
                    _fail(x_81);
                  else
                    w_81 = x_81;
                }
                t = not_null(w_81);
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
ATerm fetch_1 (ATerm t, ATerm l_88 (ATerm))
{
  ATerm i_82 (ATerm t)
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_88, _id);
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        t = Cons_2(t, _id, i_82);
      }
    return(t);
  }
  t = i_82(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_105 (ATerm))
{
  t = fetch_1(t, n_105);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL;
  k_82 = t;
  j_82 :
  if(((ATgetType(k_82) == AT_LIST) && ATisEmpty(k_82)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(k_82) == AT_LIST) && !(ATisEmpty(k_82))))
        {
          l_82 = ATgetFirst((ATermList) k_82);
          m_82 = (ATerm) ATgetNext((ATermList) k_82);
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
  ATerm b_24;
  b_24 = t;
  {
    ATerm p_82 = NULL;
    ATerm s_82 = NULL;
    ATerm d_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = d_24;
        {
          ATerm q_82 = NULL;
          ATerm r_82 = NULL;
          r_82 = t;
          if(((q_82 != NULL) && (q_82 != r_82)))
            _fail(r_82);
          else
            q_82 = r_82;
          t = (ATerm) ATinsert(ATempty, not_null(q_82));
        }
      }
    {
      s_82 = t;
      if(((p_82 != NULL) && (p_82 != s_82)))
        _fail(s_82);
      else
        p_82 = s_82;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_17, not_null(p_82));
      t = printnl_0(t);
    }
  }
  t = b_24;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_m_21;
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
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_82 = NULL;
  z_82 = t;
  y_82 :
  if(match_cons(z_82, sym_Help_0))
    {
      ATerm b_83 = NULL,d_83 = NULL;
      ATerm j_24;
      j_24 = t;
      {
        ATerm c_83 = NULL;
        t = SSLgetAnnotations(not_null(z_82));
        {
          c_83 = t;
          if(((b_83 != NULL) && (b_83 != c_83)))
            _fail(c_83);
          else
            b_83 = c_83;
        }
      }
      t = j_24;
      {
        ATerm e_83 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_83));
        {
          e_83 = t;
          if(((d_83 != NULL) && (d_83 != e_83)))
            _fail(e_83);
          else
            d_83 = e_83;
        }
        t = not_null(d_83);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_80 (ATerm))
{
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_80(t);
      ;
      LocalPopChoice(n_24);
    }
  else
    {
      t = m_24;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm o_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_5 (ATerm t)
      {
        ATerm k_83 = NULL;
        k_83 = t;
        i_83 :
        if(!(match_string(k_83, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm h_5 (ATerm t)
      {
        t = term_r_24;
        t = set_config_0(t);
        return(t);
      }
      ATerm i_5 (ATerm t)
      {
        t = term_s_24;
        return(t);
      }
      t = Option_3(t, g_5, h_5, i_5);
      ;
      LocalPopChoice(p_24);
    }
  else
    {
      t = o_24;
      {
        ATerm j_5 (ATerm t)
        {
          ATerm l_83 = NULL;
          l_83 = t;
          j_83 :
          if(!(match_string(l_83, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm k_5 (ATerm t)
        {
          t = term_r_24;
          {
            t = set_config_0(t);
            {
              t = term_z_24;
              t = set_config_0(t);
            }
          }
          t = term_a_25;
          return(t);
        }
        ATerm l_5 (ATerm t)
        {
          t = term_b_25;
          return(t);
        }
        t = Option_3(t, j_5, k_5, l_5);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm q_83 = NULL,r_83 = NULL,s_83 = NULL;
  q_83 = t;
  n_83 :
  if(match_cons(q_83, sym__2))
    {
      r_83 = ATgetArgument(q_83, 0);
      s_83 = ATgetArgument(q_83, 1);
      t = SSL_table_get(not_null(r_83), not_null(s_83));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_83 = NULL,a_84 = NULL,b_84 = NULL,e_84 = NULL;
  z_83 = t;
  y_83 :
  if(match_cons(z_83, sym__3))
    {
      a_84 = ATgetArgument(z_83, 0);
      b_84 = ATgetArgument(z_83, 1);
      e_84 = ATgetArgument(z_83, 2);
      {
        ATerm f_25;
        f_25 = t;
        {
          ATerm i_84 = NULL;
          ATerm j_84 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_84), not_null(b_84));
          {
            ATerm h_25 = t;
            int j_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(j_25);
              }
            else
              {
                t = h_25;
                t = (ATerm) ATempty;
              }
            {
              j_84 = t;
              if(((i_84 != NULL) && (i_84 != j_84)))
                _fail(j_84);
              else
                i_84 = j_84;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_84), not_null(b_84), (ATerm) ATinsert(CheckATermList(not_null(i_84)), not_null(e_84)));
            t = table_put_0(t);
          }
        }
        t = f_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_106 (ATerm))
{
  ATerm n_84 = NULL;
  ATerm o_84 = NULL;
  t = term_l_10;
  {
    t = s_106(t);
    {
      o_84 = t;
      if(((n_84 != NULL) && (n_84 != o_84)))
        _fail(o_84);
      else
        n_84 = o_84;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_p_23, term_r_23, not_null(n_84));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm u_84 = NULL,v_84 = NULL,w_84 = NULL;
  u_84 = t;
  t_84 :
  if(match_string(u_84, "register-usage-info"))
    {
      t = register_usage_1(t, c_0);
    }
  else
    {
      if(((ATgetType(u_84) == AT_LIST) && !(ATisEmpty(u_84))))
        {
          v_84 = ATgetFirst((ATermList) u_84);
          w_84 = (ATerm) ATgetNext((ATermList) u_84);
          {
            ATerm z_84 = NULL;
            ATerm m_25;
            m_25 = t;
            {
              t = not_null(v_84);
              t = a_0(t);
            }
            t = m_25;
            {
              ATerm a_85 = NULL;
              t = term_l_10;
              {
                t = b_0(t);
                {
                  a_85 = t;
                  if(((z_84 != NULL) && (z_84 != a_85)))
                    _fail(a_85);
                  else
                    z_84 = a_85;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_84)), not_null(z_84));
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
  ATerm m_5 (ATerm t)
  {
    ATerm f_85 = NULL;
    f_85 = t;
    e_85 :
    if(!(match_string(f_85, "--help")))
      {
        if(!(match_string(f_85, "-h")))
          {
            if(!(match_string(f_85, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    t = term_n_25;
    {
      t = set_config_0(t);
      t = term_o_25;
    }
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    t = term_p_25;
    return(t);
  }
  t = Option_3(t, m_5, n_5, o_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_85 = NULL,j_85 = NULL,k_85 = NULL;
  i_85 = t;
  h_85 :
  if(((ATgetType(i_85) == AT_LIST) && !(ATisEmpty(i_85))))
    {
      j_85 = ATgetFirst((ATermList) i_85);
      k_85 = (ATerm) ATgetNext((ATermList) i_85);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_85)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_85)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm q_85 = NULL,r_85 = NULL,s_85 = NULL;
  q_85 = t;
  p_85 :
  if(match_cons(q_85, sym__2))
    {
      r_85 = ATgetArgument(q_85, 0);
      s_85 = ATgetArgument(q_85, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_t_16, not_null(r_85), not_null(s_85));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_106 (ATerm))
{
  ATerm q_25;
  q_25 = t;
  {
    ATerm p_5 (ATerm t)
    {
      t = term_r_25;
      t = q_106(t);
      return(t);
    }
    t = try_1(t, p_5);
  }
  t = q_25;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm a_86 = NULL;
      ATerm s_25;
      s_25 = t;
      {
        ATerm y_85 = NULL;
        ATerm z_85 = NULL;
        z_85 = t;
        if(((y_85 != NULL) && (y_85 != z_85)))
          _fail(z_85);
        else
          y_85 = z_85;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_21, not_null(y_85));
          t = set_config_0(t);
        }
      }
      t = s_25;
      {
        ATerm b_86 = NULL;
        b_86 = t;
        if(((a_86 != NULL) && (a_86 != b_86)))
          _fail(b_86);
        else
          a_86 = b_86;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_86));
      }
      return(t);
    }
    ATerm r_5 (ATerm t)
    {
      ATerm t_25 = t;
      int u_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_25 = t;
          int w_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(w_25);
            }
          else
            {
              t = v_25;
              {
                t = q_106(t);
                t = Cons_2(t, _id, r_5);
              }
            }
          ;
          LocalPopChoice(u_25);
        }
      else
        {
          t = t_25;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, q_5, r_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm h_86 = NULL,i_86 = NULL,j_86 = NULL;
  ATerm x_25;
  x_25 = t;
  {
    ATerm k_86 = NULL,l_86 = NULL,m_86 = NULL,n_86 = NULL;
    k_86 = t;
    g_86 :
    if(match_cons(k_86, sym__3))
      {
        l_86 = ATgetArgument(k_86, 0);
        m_86 = ATgetArgument(k_86, 1);
        n_86 = ATgetArgument(k_86, 2);
        {
          if(((h_86 != NULL) && (h_86 != l_86)))
            _fail(l_86);
          else
            h_86 = l_86;
          {
            if(((i_86 != NULL) && (i_86 != m_86)))
              _fail(m_86);
            else
              i_86 = m_86;
            {
              if(((j_86 != NULL) && (j_86 != n_86)))
                _fail(n_86);
              else
                j_86 = n_86;
              t = SSL_table_put(not_null(h_86), not_null(i_86), not_null(j_86));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = x_25;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_106 (ATerm))
{
  ATerm q_86 = NULL;
  ATerm d_26;
  d_26 = t;
  {
    t = term_e_26;
    t = table_put_0(t);
  }
  t = d_26;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm f_26 = t;
      int g_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_106(t);
          ;
          LocalPopChoice(g_26);
        }
      else
        {
          t = f_26;
          {
            ATerm k_26 = t;
            int m_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(m_26);
              }
            else
              {
                t = k_26;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, s_5);
    {
      ATerm t_5 (ATerm t)
      {
        ATerm o_26 = t;
        int r_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_26;
            s_26 = t;
            {
              ATerm t_26 = t;
              int u_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_n_22;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(u_26);
                }
              else
                {
                  t = t_26;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = s_26;
            {
              t = system_usage_0(t);
              {
                t = term_h_19;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(r_26);
          }
        else
          {
            t = o_26;
            {
              ATerm v_26 = t;
              int w_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_26;
                  x_26 = t;
                  {
                    t = term_q_24;
                    t = get_config_0(t);
                  }
                  t = x_26;
                  {
                    t = system_about_0(t);
                    {
                      t = term_h_19;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(w_26);
                }
              else
                {
                  t = v_26;
                  {
                    ATerm u_5 (ATerm t)
                    {
                      ATerm v_5 (ATerm t)
                      {
                        ATerm r_86 = NULL;
                        r_86 = t;
                        if(((q_86 != NULL) && (q_86 != r_86)))
                          _fail(r_86);
                        else
                          q_86 = r_86;
                        return(t);
                      }
                      t = Undefined_1(t, v_5);
                      return(t);
                    }
                    t = option_defined_1(t, u_5);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_l_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_86)), term_y_26));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_o_14;
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
      t = try_1(t, t_5);
      {
        ATerm e_27;
        e_27 = t;
        {
          t = term_p_23;
          t = table_destroy_0(t);
        }
        t = e_27;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm p_104 (ATerm), ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm s_104 (ATerm))
{
  t = parse_options_1(t, p_104);
  {
    t = store_options_0(t);
    {
      t = r_104(t);
      {
        ATerm f_27 = t;
        int g_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, q_104);
            ;
            LocalPopChoice(g_27);
          }
        else
          {
            t = f_27;
            {
              ATerm h_27 = t;
              int i_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_104(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(i_27);
                }
              else
                {
                  t = h_27;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm e_104 (ATerm), ATerm f_104 (ATerm), ATerm g_104 (ATerm), ATerm h_104 (ATerm))
{
  ATerm w_5 (ATerm t)
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_104(t);
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
  ATerm x_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, e_104);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, w_5, g_104, h_104, x_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm a_104 (ATerm))
{
  ATerm y_5 (ATerm t)
  {
    ATerm z_5 (ATerm t)
    {
      ATerm p_27;
      p_27 = t;
      {
        ATerm u_86 = NULL;
        ATerm v_86 = NULL;
        t = term_m_21;
        {
          t = get_config_0(t);
          {
            v_86 = t;
            if(((u_86 != NULL) && (u_86 != v_86)))
              _fail(v_86);
            else
              u_86 = v_86;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_14, (ATerm) ATinsert(ATempty, not_null(u_86)));
          t = printnl_0(t);
        }
      }
      t = p_27;
      return(t);
    }
    t = if_verbose2_1(t, z_5);
    return(t);
  }
  t = iowrap_4(t, y_103, z_103, a_104, y_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm w_103 (ATerm), ATerm x_103 (ATerm))
{
  t = iowrap_3(t, w_103, x_103, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm t_103 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    t = _2(t, _id, t_103);
    return(t);
  }
  t = iowrap_2(t, a_6, _fail);
  return(t);
}
ATerm const_prop_io_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm c_6 (ATerm t)
    {
      ATerm d_6 (ATerm t)
      {
        t = Signature_1(t, _id);
        return(t);
      }
      ATerm e_6 (ATerm t)
      {
        ATerm f_6 (ATerm t)
        {
          ATerm g_6 (ATerm t)
          {
            t = map_1(t, const_prop_0);
            return(t);
          }
          t = Strategies_1(t, g_6);
          return(t);
        }
        t = Cons_2(t, f_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, d_6, e_6);
      return(t);
    }
    t = Specification_1(t, c_6);
    return(t);
  }
  t = iowrap_1(t, b_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = const_prop_io_0(t);
  return(t);
}
