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
ATerm term_b_23;
ATerm term_c_21;
ATerm term_x_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_p_13;
ATerm term_v_12;
ATerm term_c_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_s_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_i_8;
ATerm term_g_8;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_m_7;
ATerm term_h_7;
ATerm term_c_7;
ATerm term_z_4;
void init_constant_terms (void)
{
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym__2, term_l_8, term_w_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__2, term_e_10, term_o_7);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym__2, term_p_10, term_o_7);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym__2, term_q_14, term_r_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym__2, term_o_17, term_o_7);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_o_7);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym__2, term_c_12, term_o_7);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__3, term_q_14, term_r_14, (ATerm) ATempty);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm SDef_3_0 (ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm l_68 (ATerm), ATerm);
ATerm Let_2_0 (ATerm u_65 (ATerm), ATerm v_65 (ATerm), ATerm);
ATerm Op_2_0 (ATerm q_62 (ATerm), ATerm r_62 (ATerm), ATerm);
ATerm Var_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm As_2_0 (ATerm b_63 (ATerm), ATerm c_63 (ATerm), ATerm);
ATerm BuildDefault_1_0 (ATerm h_63 (ATerm), ATerm);
ATerm Str_1_0 (ATerm o_62 (ATerm), ATerm);
ATerm is_real_0_0 (ATerm);
ATerm Real_1_0 (ATerm n_62 (ATerm), ATerm);
ATerm Int_1_0 (ATerm m_62 (ATerm), ATerm);
ATerm Wld_0_0 (ATerm);
ATerm term_expression_0_0 (ATerm);
ATerm PrimT_3_0 (ATerm a_67 (ATerm), ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm);
ATerm Where_1_0 (ATerm u_66 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm e_66 (ATerm), ATerm f_66 (ATerm), ATerm);
ATerm Build_1_0 (ATerm c_66 (ATerm), ATerm);
ATerm Match_1_0 (ATerm b_66 (ATerm), ATerm);
ATerm Thread_1_0 (ATerm i_67 (ATerm), ATerm);
ATerm All_1_0 (ATerm h_67 (ATerm), ATerm);
ATerm Some_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm One_1_0 (ATerm g_67 (ATerm), ATerm);
ATerm Cong_2_0 (ATerm h_61 (ATerm), ATerm i_61 (ATerm), ATerm);
ATerm is_int_0_0 (ATerm);
ATerm Path_2_0 (ATerm d_67 (ATerm), ATerm e_67 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm r_66 (ATerm), ATerm s_66 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm t_65 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm y_65 (ATerm), ATerm z_65 (ATerm), ATerm a_66 (ATerm), ATerm);
ATerm LGChoice_2_0 (ATerm m_66 (ATerm), ATerm n_66 (ATerm), ATerm);
ATerm GChoice_2_0 (ATerm m_65 (ATerm), ATerm n_65 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm o_66 (ATerm), ATerm p_66 (ATerm), ATerm q_66 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm k_66 (ATerm), ATerm l_66 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm i_65 (ATerm), ATerm j_65 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm i_66 (ATerm), ATerm j_66 (ATerm), ATerm);
ATerm Test_1_0 (ATerm v_66 (ATerm), ATerm);
ATerm Not_1_0 (ATerm t_66 (ATerm), ATerm);
ATerm Fail_0_0 (ATerm);
ATerm Id_0_0 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm f_68 (ATerm), ATerm g_68 (ATerm), ATerm);
ATerm Mod_2_0 (ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm m_68 (ATerm), ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm list_1_0 (ATerm b_82 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm l_61 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm q_61 (ATerm), ATerm);
ATerm stratego_specification_0_0 (ATerm);
ATerm _2_0 (ATerm w_59 (ATerm), ATerm x_59 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm o_82 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm o_95 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm k_94 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm m_97 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm w_93 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm);
ATerm crush_2_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_95 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm k_98 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm l_100 (ATerm), ATerm);
ATerm map_1_0 (ATerm y_81 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm k_100 (ATerm), ATerm);
ATerm Program_1_0 (ATerm f_74 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm g_74 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm i_82 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm k_99 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm n_74 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm p_100 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm f_61 (ATerm), ATerm g_61 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm n_100 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm m_100 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm q_97 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm SDef_3_0 (ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm l_68 (ATerm), ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL,u_10 = NULL,v_10 = NULL;
  ATerm k_12 (ATerm t)
  {
    ATerm w_10 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,x_11 = NULL,z_11 = NULL;
    ATerm m_12 (ATerm t)
    {
      ATerm d_12 = NULL,e_12 = NULL;
      ATerm n_12 (ATerm t)
      {
        ATerm f_12 = NULL,g_12 = NULL;
        ATerm o_12 (ATerm t)
        {
          ATerm h_12 = NULL,i_12 = NULL;
          t = not_null(g_12);
          if(((h_12 != NULL) && (h_12 != t)))
            _fail(t);
          else
            h_12 = t;
          t = not_null(g_12);
          {
            ATerm j_12 = NULL;
            ATerm p_12 (ATerm t)
            {
              t = not_null(j_12);
              if(((i_12 != NULL) && (i_12 != t)))
                _fail(t);
              else
                i_12 = t;
              t = not_null(j_12);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(d_12), not_null(f_12), not_null(h_12)), not_null(x_11));
            if(((j_12 != NULL) && (j_12 != t)))
              _fail(t);
            else
              j_12 = t;
            t = p_12(t);
            t = not_null(i_12);
          }
          return(t);
        }
        t = not_null(e_12);
        if(((f_12 != NULL) && (f_12 != t)))
          _fail(t);
        else
          f_12 = t;
        t = not_null(m_11);
        t = l_68(t);
        if(((g_12 != NULL) && (g_12 != t)))
          _fail(t);
        else
          g_12 = t;
        t = o_12(t);
        return(t);
      }
      t = not_null(z_11);
      if(((d_12 != NULL) && (d_12 != t)))
        _fail(t);
      else
        d_12 = t;
      t = not_null(l_11);
      t = k_68(t);
      if(((e_12 != NULL) && (e_12 != t)))
        _fail(t);
      else
        e_12 = t;
      t = n_12(t);
      return(t);
    }
    t = not_null(z_8);
    if(((w_10 != NULL) && (w_10 != t)))
      _fail(t);
    else
      w_10 = t;
    t = not_null(a_9);
    if(((k_11 != NULL) && (k_11 != t)))
      _fail(t);
    else
      k_11 = t;
    t = not_null(u_10);
    if(((l_11 != NULL) && (l_11 != t)))
      _fail(t);
    else
      l_11 = t;
    t = not_null(v_10);
    if(((m_11 != NULL) && (m_11 != t)))
      _fail(t);
    else
      m_11 = t;
    t = not_null(z_8);
    {
      ATerm y_11 = NULL;
      ATerm l_12 (ATerm t)
      {
        t = not_null(y_11);
        if(((x_11 != NULL) && (x_11 != t)))
          _fail(t);
        else
          x_11 = t;
        t = not_null(y_11);
        return(t);
      }
      t = SSLgetAnnotations(not_null(w_10));
      if(((y_11 != NULL) && (y_11 != t)))
        _fail(t);
      else
        y_11 = t;
      t = l_12(t);
      t = not_null(k_11);
      t = j_68(t);
      if(((z_11 != NULL) && (z_11 != t)))
        _fail(t);
      else
        z_11 = t;
      t = m_12(t);
    }
    return(t);
  }
  if(((z_8 != NULL) && (z_8 != t)))
    _fail(t);
  else
    z_8 = t;
  t = not_null(z_8);
  if(match_cons(t, sym_SDef_3))
    {
      a_9 = ATgetArgument(t, 0);
      u_10 = ATgetArgument(t, 1);
      v_10 = ATgetArgument(t, 2);
      t = k_12(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2_0 (ATerm u_65 (ATerm), ATerm v_65 (ATerm), ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL;
  ATerm k_13 (ATerm t)
  {
    ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,e_13 = NULL;
    ATerm m_13 (ATerm t)
    {
      ATerm f_13 = NULL,g_13 = NULL;
      ATerm n_13 (ATerm t)
      {
        ATerm h_13 = NULL,i_13 = NULL;
        t = not_null(g_13);
        if(((h_13 != NULL) && (h_13 != t)))
          _fail(t);
        else
          h_13 = t;
        t = not_null(g_13);
        {
          ATerm j_13 = NULL;
          ATerm o_13 (ATerm t)
          {
            t = not_null(j_13);
            if(((i_13 != NULL) && (i_13 != t)))
              _fail(t);
            else
              i_13 = t;
            t = not_null(j_13);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(f_13), not_null(h_13)), not_null(c_13));
          if(((j_13 != NULL) && (j_13 != t)))
            _fail(t);
          else
            j_13 = t;
          t = o_13(t);
          t = not_null(i_13);
        }
        return(t);
      }
      t = not_null(e_13);
      if(((f_13 != NULL) && (f_13 != t)))
        _fail(t);
      else
        f_13 = t;
      t = not_null(b_13);
      t = v_65(t);
      if(((g_13 != NULL) && (g_13 != t)))
        _fail(t);
      else
        g_13 = t;
      t = n_13(t);
      return(t);
    }
    t = not_null(w_12);
    if(((z_12 != NULL) && (z_12 != t)))
      _fail(t);
    else
      z_12 = t;
    t = not_null(x_12);
    if(((a_13 != NULL) && (a_13 != t)))
      _fail(t);
    else
      a_13 = t;
    t = not_null(y_12);
    if(((b_13 != NULL) && (b_13 != t)))
      _fail(t);
    else
      b_13 = t;
    t = not_null(w_12);
    {
      ATerm d_13 = NULL;
      ATerm l_13 (ATerm t)
      {
        t = not_null(d_13);
        if(((c_13 != NULL) && (c_13 != t)))
          _fail(t);
        else
          c_13 = t;
        t = not_null(d_13);
        return(t);
      }
      t = SSLgetAnnotations(not_null(z_12));
      if(((d_13 != NULL) && (d_13 != t)))
        _fail(t);
      else
        d_13 = t;
      t = l_13(t);
      t = not_null(a_13);
      t = u_65(t);
      if(((e_13 != NULL) && (e_13 != t)))
        _fail(t);
      else
        e_13 = t;
      t = m_13(t);
    }
    return(t);
  }
  if(((w_12 != NULL) && (w_12 != t)))
    _fail(t);
  else
    w_12 = t;
  t = not_null(w_12);
  if(match_cons(t, sym_Let_2))
    {
      x_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
      t = k_13(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Op_2_0 (ATerm q_62 (ATerm), ATerm r_62 (ATerm), ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
  ATerm j_14 (ATerm t)
  {
    ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,d_14 = NULL;
    ATerm l_14 (ATerm t)
    {
      ATerm e_14 = NULL,f_14 = NULL;
      ATerm m_14 (ATerm t)
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
          ATerm n_14 (ATerm t)
          {
            t = not_null(i_14);
            if(((h_14 != NULL) && (h_14 != t)))
              _fail(t);
            else
              h_14 = t;
            t = not_null(i_14);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(e_14), not_null(g_14)), not_null(b_14));
          if(((i_14 != NULL) && (i_14 != t)))
            _fail(t);
          else
            i_14 = t;
          t = n_14(t);
          t = not_null(h_14);
        }
        return(t);
      }
      t = not_null(d_14);
      if(((e_14 != NULL) && (e_14 != t)))
        _fail(t);
      else
        e_14 = t;
      t = not_null(a_14);
      t = r_62(t);
      if(((f_14 != NULL) && (f_14 != t)))
        _fail(t);
      else
        f_14 = t;
      t = m_14(t);
      return(t);
    }
    t = not_null(v_13);
    if(((y_13 != NULL) && (y_13 != t)))
      _fail(t);
    else
      y_13 = t;
    t = not_null(w_13);
    if(((z_13 != NULL) && (z_13 != t)))
      _fail(t);
    else
      z_13 = t;
    t = not_null(x_13);
    if(((a_14 != NULL) && (a_14 != t)))
      _fail(t);
    else
      a_14 = t;
    t = not_null(v_13);
    {
      ATerm c_14 = NULL;
      ATerm k_14 (ATerm t)
      {
        t = not_null(c_14);
        if(((b_14 != NULL) && (b_14 != t)))
          _fail(t);
        else
          b_14 = t;
        t = not_null(c_14);
        return(t);
      }
      t = SSLgetAnnotations(not_null(y_13));
      if(((c_14 != NULL) && (c_14 != t)))
        _fail(t);
      else
        c_14 = t;
      t = k_14(t);
      t = not_null(z_13);
      t = q_62(t);
      if(((d_14 != NULL) && (d_14 != t)))
        _fail(t);
      else
        d_14 = t;
      t = l_14(t);
    }
    return(t);
  }
  if(((v_13 != NULL) && (v_13 != t)))
    _fail(t);
  else
    v_13 = t;
  t = not_null(v_13);
  if(match_cons(t, sym_Op_2))
    {
      w_13 = ATgetArgument(t, 0);
      x_13 = ATgetArgument(t, 1);
      t = j_14(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL;
  ATerm b_16 (ATerm t)
  {
    ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,h_15 = NULL;
    ATerm f_16 (ATerm t)
    {
      ATerm i_15 = NULL,j_15 = NULL;
      t = not_null(h_15);
      if(((i_15 != NULL) && (i_15 != t)))
        _fail(t);
      else
        i_15 = t;
      t = not_null(h_15);
      {
        ATerm k_15 = NULL;
        ATerm g_16 (ATerm t)
        {
          t = not_null(k_15);
          if(((j_15 != NULL) && (j_15 != t)))
            _fail(t);
          else
            j_15 = t;
          t = not_null(k_15);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(i_15)), not_null(f_15));
        if(((k_15 != NULL) && (k_15 != t)))
          _fail(t);
        else
          k_15 = t;
        t = g_16(t);
        t = not_null(j_15);
      }
      return(t);
    }
    t = not_null(b_15);
    if(((d_15 != NULL) && (d_15 != t)))
      _fail(t);
    else
      d_15 = t;
    t = not_null(c_15);
    if(((e_15 != NULL) && (e_15 != t)))
      _fail(t);
    else
      e_15 = t;
    t = not_null(b_15);
    {
      ATerm g_15 = NULL;
      ATerm e_16 (ATerm t)
      {
        t = not_null(g_15);
        if(((f_15 != NULL) && (f_15 != t)))
          _fail(t);
        else
          f_15 = t;
        t = not_null(g_15);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_15));
      if(((g_15 != NULL) && (g_15 != t)))
        _fail(t);
      else
        g_15 = t;
      t = e_16(t);
      t = not_null(e_15);
      t = n_0(t);
      if(((h_15 != NULL) && (h_15 != t)))
        _fail(t);
      else
        h_15 = t;
      t = f_16(t);
    }
    return(t);
  }
  ATerm c_16 (ATerm t)
  {
    ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,p_15 = NULL;
    ATerm i_16 (ATerm t)
    {
      ATerm q_15 = NULL,r_15 = NULL;
      t = not_null(p_15);
      if(((q_15 != NULL) && (q_15 != t)))
        _fail(t);
      else
        q_15 = t;
      t = not_null(p_15);
      {
        ATerm s_15 = NULL;
        ATerm j_16 (ATerm t)
        {
          t = not_null(s_15);
          if(((r_15 != NULL) && (r_15 != t)))
            _fail(t);
          else
            r_15 = t;
          t = not_null(s_15);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(q_15)), not_null(n_15));
        if(((s_15 != NULL) && (s_15 != t)))
          _fail(t);
        else
          s_15 = t;
        t = j_16(t);
        t = not_null(r_15);
      }
      return(t);
    }
    t = not_null(b_15);
    if(((l_15 != NULL) && (l_15 != t)))
      _fail(t);
    else
      l_15 = t;
    t = not_null(c_15);
    if(((m_15 != NULL) && (m_15 != t)))
      _fail(t);
    else
      m_15 = t;
    t = not_null(b_15);
    {
      ATerm o_15 = NULL;
      ATerm h_16 (ATerm t)
      {
        t = not_null(o_15);
        if(((n_15 != NULL) && (n_15 != t)))
          _fail(t);
        else
          n_15 = t;
        t = not_null(o_15);
        return(t);
      }
      t = SSLgetAnnotations(not_null(l_15));
      if(((o_15 != NULL) && (o_15 != t)))
        _fail(t);
      else
        o_15 = t;
      t = h_16(t);
      t = not_null(m_15);
      t = n_0(t);
      if(((p_15 != NULL) && (p_15 != t)))
        _fail(t);
      else
        p_15 = t;
      t = i_16(t);
    }
    return(t);
  }
  ATerm d_16 (ATerm t)
  {
    ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,x_15 = NULL;
    ATerm l_16 (ATerm t)
    {
      ATerm y_15 = NULL,z_15 = NULL;
      t = not_null(x_15);
      if(((y_15 != NULL) && (y_15 != t)))
        _fail(t);
      else
        y_15 = t;
      t = not_null(x_15);
      {
        ATerm a_16 = NULL;
        ATerm m_16 (ATerm t)
        {
          t = not_null(a_16);
          if(((z_15 != NULL) && (z_15 != t)))
            _fail(t);
          else
            z_15 = t;
          t = not_null(a_16);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(y_15)), not_null(v_15));
        if(((a_16 != NULL) && (a_16 != t)))
          _fail(t);
        else
          a_16 = t;
        t = m_16(t);
        t = not_null(z_15);
      }
      return(t);
    }
    t = not_null(b_15);
    if(((t_15 != NULL) && (t_15 != t)))
      _fail(t);
    else
      t_15 = t;
    t = not_null(c_15);
    if(((u_15 != NULL) && (u_15 != t)))
      _fail(t);
    else
      u_15 = t;
    t = not_null(b_15);
    {
      ATerm w_15 = NULL;
      ATerm k_16 (ATerm t)
      {
        t = not_null(w_15);
        if(((v_15 != NULL) && (v_15 != t)))
          _fail(t);
        else
          v_15 = t;
        t = not_null(w_15);
        return(t);
      }
      t = SSLgetAnnotations(not_null(t_15));
      if(((w_15 != NULL) && (w_15 != t)))
        _fail(t);
      else
        w_15 = t;
      t = k_16(t);
      t = not_null(u_15);
      t = n_0(t);
      if(((x_15 != NULL) && (x_15 != t)))
        _fail(t);
      else
        x_15 = t;
      t = l_16(t);
    }
    return(t);
  }
  if(((b_15 != NULL) && (b_15 != t)))
    _fail(t);
  else
    b_15 = t;
  t = not_null(b_15);
  if(match_cons(t, sym_Var_1))
    {
      c_15 = ATgetArgument(t, 0);
      {
        ATerm e_4 = t;
        int f_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_16(t);
            ;
            LocalPopChoice(f_4);
          }
        else
          {
            t = e_4;
            {
              ATerm g_4 = t;
              int h_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_16(t);
                  ;
                  LocalPopChoice(h_4);
                }
              else
                {
                  t = g_4;
                  t = d_16(t);
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
ATerm As_2_0 (ATerm b_63 (ATerm), ATerm c_63 (ATerm), ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
  ATerm h_17 (ATerm t)
  {
    ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,b_17 = NULL;
    ATerm j_17 (ATerm t)
    {
      ATerm c_17 = NULL,d_17 = NULL;
      ATerm k_17 (ATerm t)
      {
        ATerm e_17 = NULL,f_17 = NULL;
        t = not_null(d_17);
        if(((e_17 != NULL) && (e_17 != t)))
          _fail(t);
        else
          e_17 = t;
        t = not_null(d_17);
        {
          ATerm g_17 = NULL;
          ATerm l_17 (ATerm t)
          {
            t = not_null(g_17);
            if(((f_17 != NULL) && (f_17 != t)))
              _fail(t);
            else
              f_17 = t;
            t = not_null(g_17);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(c_17), not_null(e_17)), not_null(z_16));
          if(((g_17 != NULL) && (g_17 != t)))
            _fail(t);
          else
            g_17 = t;
          t = l_17(t);
          t = not_null(f_17);
        }
        return(t);
      }
      t = not_null(b_17);
      if(((c_17 != NULL) && (c_17 != t)))
        _fail(t);
      else
        c_17 = t;
      t = not_null(y_16);
      t = c_63(t);
      if(((d_17 != NULL) && (d_17 != t)))
        _fail(t);
      else
        d_17 = t;
      t = k_17(t);
      return(t);
    }
    t = not_null(t_16);
    if(((w_16 != NULL) && (w_16 != t)))
      _fail(t);
    else
      w_16 = t;
    t = not_null(u_16);
    if(((x_16 != NULL) && (x_16 != t)))
      _fail(t);
    else
      x_16 = t;
    t = not_null(v_16);
    if(((y_16 != NULL) && (y_16 != t)))
      _fail(t);
    else
      y_16 = t;
    t = not_null(t_16);
    {
      ATerm a_17 = NULL;
      ATerm i_17 (ATerm t)
      {
        t = not_null(a_17);
        if(((z_16 != NULL) && (z_16 != t)))
          _fail(t);
        else
          z_16 = t;
        t = not_null(a_17);
        return(t);
      }
      t = SSLgetAnnotations(not_null(w_16));
      if(((a_17 != NULL) && (a_17 != t)))
        _fail(t);
      else
        a_17 = t;
      t = i_17(t);
      t = not_null(x_16);
      t = b_63(t);
      if(((b_17 != NULL) && (b_17 != t)))
        _fail(t);
      else
        b_17 = t;
      t = j_17(t);
    }
    return(t);
  }
  if(((t_16 != NULL) && (t_16 != t)))
    _fail(t);
  else
    t_16 = t;
  t = not_null(t_16);
  if(match_cons(t, sym_As_2))
    {
      u_16 = ATgetArgument(t, 0);
      v_16 = ATgetArgument(t, 1);
      t = h_17(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BuildDefault_1_0 (ATerm h_63 (ATerm), ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL;
  ATerm b_18 (ATerm t)
  {
    ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,x_17 = NULL;
    ATerm d_18 (ATerm t)
    {
      ATerm y_17 = NULL,z_17 = NULL;
      t = not_null(x_17);
      if(((y_17 != NULL) && (y_17 != t)))
        _fail(t);
      else
        y_17 = t;
      t = not_null(x_17);
      {
        ATerm a_18 = NULL;
        ATerm e_18 (ATerm t)
        {
          t = not_null(a_18);
          if(((z_17 != NULL) && (z_17 != t)))
            _fail(t);
          else
            z_17 = t;
          t = not_null(a_18);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(y_17)), not_null(v_17));
        if(((a_18 != NULL) && (a_18 != t)))
          _fail(t);
        else
          a_18 = t;
        t = e_18(t);
        t = not_null(z_17);
      }
      return(t);
    }
    t = not_null(r_17);
    if(((t_17 != NULL) && (t_17 != t)))
      _fail(t);
    else
      t_17 = t;
    t = not_null(s_17);
    if(((u_17 != NULL) && (u_17 != t)))
      _fail(t);
    else
      u_17 = t;
    t = not_null(r_17);
    {
      ATerm w_17 = NULL;
      ATerm c_18 (ATerm t)
      {
        t = not_null(w_17);
        if(((v_17 != NULL) && (v_17 != t)))
          _fail(t);
        else
          v_17 = t;
        t = not_null(w_17);
        return(t);
      }
      t = SSLgetAnnotations(not_null(t_17));
      if(((w_17 != NULL) && (w_17 != t)))
        _fail(t);
      else
        w_17 = t;
      t = c_18(t);
      t = not_null(u_17);
      t = h_63(t);
      if(((x_17 != NULL) && (x_17 != t)))
        _fail(t);
      else
        x_17 = t;
      t = d_18(t);
    }
    return(t);
  }
  if(((r_17 != NULL) && (r_17 != t)))
    _fail(t);
  else
    r_17 = t;
  t = not_null(r_17);
  if(match_cons(t, sym_BuildDefault_1))
    {
      s_17 = ATgetArgument(t, 0);
      t = b_18(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Str_1_0 (ATerm o_62 (ATerm), ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL;
  ATerm u_18 (ATerm t)
  {
    ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,q_18 = NULL;
    ATerm w_18 (ATerm t)
    {
      ATerm r_18 = NULL,s_18 = NULL;
      t = not_null(q_18);
      if(((r_18 != NULL) && (r_18 != t)))
        _fail(t);
      else
        r_18 = t;
      t = not_null(q_18);
      {
        ATerm t_18 = NULL;
        ATerm x_18 (ATerm t)
        {
          t = not_null(t_18);
          if(((s_18 != NULL) && (s_18 != t)))
            _fail(t);
          else
            s_18 = t;
          t = not_null(t_18);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(r_18)), not_null(o_18));
        if(((t_18 != NULL) && (t_18 != t)))
          _fail(t);
        else
          t_18 = t;
        t = x_18(t);
        t = not_null(s_18);
      }
      return(t);
    }
    t = not_null(k_18);
    if(((m_18 != NULL) && (m_18 != t)))
      _fail(t);
    else
      m_18 = t;
    t = not_null(l_18);
    if(((n_18 != NULL) && (n_18 != t)))
      _fail(t);
    else
      n_18 = t;
    t = not_null(k_18);
    {
      ATerm p_18 = NULL;
      ATerm v_18 (ATerm t)
      {
        t = not_null(p_18);
        if(((o_18 != NULL) && (o_18 != t)))
          _fail(t);
        else
          o_18 = t;
        t = not_null(p_18);
        return(t);
      }
      t = SSLgetAnnotations(not_null(m_18));
      if(((p_18 != NULL) && (p_18 != t)))
        _fail(t);
      else
        p_18 = t;
      t = v_18(t);
      t = not_null(n_18);
      t = o_62(t);
      if(((q_18 != NULL) && (q_18 != t)))
        _fail(t);
      else
        q_18 = t;
      t = w_18(t);
    }
    return(t);
  }
  if(((k_18 != NULL) && (k_18 != t)))
    _fail(t);
  else
    k_18 = t;
  t = not_null(k_18);
  if(match_cons(t, sym_Str_1))
    {
      l_18 = ATgetArgument(t, 0);
      t = u_18(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_real_0_0 (ATerm t)
{
  ATerm z_18 = NULL;
  ATerm b_19 (ATerm t)
  {
    ATerm a_19 = NULL;
    t = not_null(z_18);
    if(((a_19 != NULL) && (a_19 != t)))
      _fail(t);
    else
      a_19 = t;
    t = not_null(z_18);
    t = SSL_is_real(not_null(a_19));
    return(t);
  }
  if(((z_18 != NULL) && (z_18 != t)))
    _fail(t);
  else
    z_18 = t;
  t = b_19(t);
  return(t);
}
ATerm Real_1_0 (ATerm n_62 (ATerm), ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL;
  ATerm r_19 (ATerm t)
  {
    ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,n_19 = NULL;
    ATerm t_19 (ATerm t)
    {
      ATerm o_19 = NULL,p_19 = NULL;
      t = not_null(n_19);
      if(((o_19 != NULL) && (o_19 != t)))
        _fail(t);
      else
        o_19 = t;
      t = not_null(n_19);
      {
        ATerm q_19 = NULL;
        ATerm u_19 (ATerm t)
        {
          t = not_null(q_19);
          if(((p_19 != NULL) && (p_19 != t)))
            _fail(t);
          else
            p_19 = t;
          t = not_null(q_19);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(o_19)), not_null(l_19));
        if(((q_19 != NULL) && (q_19 != t)))
          _fail(t);
        else
          q_19 = t;
        t = u_19(t);
        t = not_null(p_19);
      }
      return(t);
    }
    t = not_null(h_19);
    if(((j_19 != NULL) && (j_19 != t)))
      _fail(t);
    else
      j_19 = t;
    t = not_null(i_19);
    if(((k_19 != NULL) && (k_19 != t)))
      _fail(t);
    else
      k_19 = t;
    t = not_null(h_19);
    {
      ATerm m_19 = NULL;
      ATerm s_19 (ATerm t)
      {
        t = not_null(m_19);
        if(((l_19 != NULL) && (l_19 != t)))
          _fail(t);
        else
          l_19 = t;
        t = not_null(m_19);
        return(t);
      }
      t = SSLgetAnnotations(not_null(j_19));
      if(((m_19 != NULL) && (m_19 != t)))
        _fail(t);
      else
        m_19 = t;
      t = s_19(t);
      t = not_null(k_19);
      t = n_62(t);
      if(((n_19 != NULL) && (n_19 != t)))
        _fail(t);
      else
        n_19 = t;
      t = t_19(t);
    }
    return(t);
  }
  if(((h_19 != NULL) && (h_19 != t)))
    _fail(t);
  else
    h_19 = t;
  t = not_null(h_19);
  if(match_cons(t, sym_Real_1))
    {
      i_19 = ATgetArgument(t, 0);
      t = r_19(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Int_1_0 (ATerm m_62 (ATerm), ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL;
  ATerm k_20 (ATerm t)
  {
    ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,g_20 = NULL;
    ATerm m_20 (ATerm t)
    {
      ATerm h_20 = NULL,i_20 = NULL;
      t = not_null(g_20);
      if(((h_20 != NULL) && (h_20 != t)))
        _fail(t);
      else
        h_20 = t;
      t = not_null(g_20);
      {
        ATerm j_20 = NULL;
        ATerm n_20 (ATerm t)
        {
          t = not_null(j_20);
          if(((i_20 != NULL) && (i_20 != t)))
            _fail(t);
          else
            i_20 = t;
          t = not_null(j_20);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(h_20)), not_null(e_20));
        if(((j_20 != NULL) && (j_20 != t)))
          _fail(t);
        else
          j_20 = t;
        t = n_20(t);
        t = not_null(i_20);
      }
      return(t);
    }
    t = not_null(a_20);
    if(((c_20 != NULL) && (c_20 != t)))
      _fail(t);
    else
      c_20 = t;
    t = not_null(b_20);
    if(((d_20 != NULL) && (d_20 != t)))
      _fail(t);
    else
      d_20 = t;
    t = not_null(a_20);
    {
      ATerm f_20 = NULL;
      ATerm l_20 (ATerm t)
      {
        t = not_null(f_20);
        if(((e_20 != NULL) && (e_20 != t)))
          _fail(t);
        else
          e_20 = t;
        t = not_null(f_20);
        return(t);
      }
      t = SSLgetAnnotations(not_null(c_20));
      if(((f_20 != NULL) && (f_20 != t)))
        _fail(t);
      else
        f_20 = t;
      t = l_20(t);
      t = not_null(d_20);
      t = m_62(t);
      if(((g_20 != NULL) && (g_20 != t)))
        _fail(t);
      else
        g_20 = t;
      t = m_20(t);
    }
    return(t);
  }
  if(((a_20 != NULL) && (a_20 != t)))
    _fail(t);
  else
    a_20 = t;
  t = not_null(a_20);
  if(match_cons(t, sym_Int_1))
    {
      b_20 = ATgetArgument(t, 0);
      t = k_20(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Wld_0_0 (ATerm t)
{
  ATerm s_20 = NULL;
  ATerm y_20 (ATerm t)
  {
    ATerm t_20 = NULL,u_20 = NULL,w_20 = NULL;
    t = not_null(s_20);
    if(((t_20 != NULL) && (t_20 != t)))
      _fail(t);
    else
      t_20 = t;
    t = not_null(s_20);
    {
      ATerm i_4;
      i_4 = t;
      {
        ATerm v_20 = NULL;
        ATerm z_20 (ATerm t)
        {
          t = not_null(v_20);
          if(((u_20 != NULL) && (u_20 != t)))
            _fail(t);
          else
            u_20 = t;
          t = not_null(v_20);
          return(t);
        }
        t = SSLgetAnnotations(not_null(t_20));
        if(((v_20 != NULL) && (v_20 != t)))
          _fail(t);
        else
          v_20 = t;
        t = z_20(t);
      }
      t = i_4;
      {
        ATerm x_20 = NULL;
        ATerm a_21 (ATerm t)
        {
          t = not_null(x_20);
          if(((w_20 != NULL) && (w_20 != t)))
            _fail(t);
          else
            w_20 = t;
          t = not_null(x_20);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(u_20));
        if(((x_20 != NULL) && (x_20 != t)))
          _fail(t);
        else
          x_20 = t;
        t = a_21(t);
        t = not_null(w_20);
      }
    }
    return(t);
  }
  if(((s_20 != NULL) && (s_20 != t)))
    _fail(t);
  else
    s_20 = t;
  t = not_null(s_20);
  if(match_cons(t, sym_Wld_0))
    {
      t = y_20(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm j_4 = t;
  int k_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0_0(t);
      ;
      LocalPopChoice(k_4);
    }
  else
    {
      t = j_4;
      {
        ATerm l_4 = t;
        int m_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1_0(is_string_0_0, t);
            ;
            LocalPopChoice(m_4);
          }
        else
          {
            t = l_4;
            {
              ATerm n_4 = t;
              int o_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1_0(is_int_0_0, t);
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
                        t = Real_1_0(is_real_0_0, t);
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
                              t = Str_1_0(is_string_0_0, t);
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
                                    t = BuildDefault_1_0(term_expression_0_0, t);
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
                                          ATerm c_0 (ATerm t)
                                          {
                                            t = Var_1_0(is_string_0_0, t);
                                            return(t);
                                          }
                                          t = As_2_0(c_0, term_expression_0_0, t);
                                          ;
                                          LocalPopChoice(w_4);
                                        }
                                      else
                                        {
                                          t = v_4;
                                          {
                                            ATerm x_4 = t;
                                            int y_4 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm e_0 (ATerm t)
                                                {
                                                  t = list_1_0(term_expression_0_0, t);
                                                  return(t);
                                                }
                                                t = Op_2_0(is_string_0_0, e_0, t);
                                                ;
                                                LocalPopChoice(y_4);
                                              }
                                            else
                                              {
                                                t = x_4;
                                                {
                                                  ATerm m_0 (ATerm t)
                                                  {
                                                    t = term_z_4;
                                                    return(t);
                                                  }
                                                  t = debug_1_0(m_0, t);
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
ATerm PrimT_3_0 (ATerm a_67 (ATerm), ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
  ATerm b_22 (ATerm t)
  {
    ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,t_21 = NULL;
    ATerm d_22 (ATerm t)
    {
      ATerm u_21 = NULL,v_21 = NULL;
      ATerm e_22 (ATerm t)
      {
        ATerm w_21 = NULL,x_21 = NULL;
        ATerm f_22 (ATerm t)
        {
          ATerm y_21 = NULL,z_21 = NULL;
          t = not_null(x_21);
          if(((y_21 != NULL) && (y_21 != t)))
            _fail(t);
          else
            y_21 = t;
          t = not_null(x_21);
          {
            ATerm a_22 = NULL;
            ATerm g_22 (ATerm t)
            {
              t = not_null(a_22);
              if(((z_21 != NULL) && (z_21 != t)))
                _fail(t);
              else
                z_21 = t;
              t = not_null(a_22);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(u_21), not_null(w_21), not_null(y_21)), not_null(r_21));
            if(((a_22 != NULL) && (a_22 != t)))
              _fail(t);
            else
              a_22 = t;
            t = g_22(t);
            t = not_null(z_21);
          }
          return(t);
        }
        t = not_null(v_21);
        if(((w_21 != NULL) && (w_21 != t)))
          _fail(t);
        else
          w_21 = t;
        t = not_null(q_21);
        t = c_67(t);
        if(((x_21 != NULL) && (x_21 != t)))
          _fail(t);
        else
          x_21 = t;
        t = f_22(t);
        return(t);
      }
      t = not_null(t_21);
      if(((u_21 != NULL) && (u_21 != t)))
        _fail(t);
      else
        u_21 = t;
      t = not_null(p_21);
      t = b_67(t);
      if(((v_21 != NULL) && (v_21 != t)))
        _fail(t);
      else
        v_21 = t;
      t = e_22(t);
      return(t);
    }
    t = not_null(j_21);
    if(((n_21 != NULL) && (n_21 != t)))
      _fail(t);
    else
      n_21 = t;
    t = not_null(k_21);
    if(((o_21 != NULL) && (o_21 != t)))
      _fail(t);
    else
      o_21 = t;
    t = not_null(l_21);
    if(((p_21 != NULL) && (p_21 != t)))
      _fail(t);
    else
      p_21 = t;
    t = not_null(m_21);
    if(((q_21 != NULL) && (q_21 != t)))
      _fail(t);
    else
      q_21 = t;
    t = not_null(j_21);
    {
      ATerm s_21 = NULL;
      ATerm c_22 (ATerm t)
      {
        t = not_null(s_21);
        if(((r_21 != NULL) && (r_21 != t)))
          _fail(t);
        else
          r_21 = t;
        t = not_null(s_21);
        return(t);
      }
      t = SSLgetAnnotations(not_null(n_21));
      if(((s_21 != NULL) && (s_21 != t)))
        _fail(t);
      else
        s_21 = t;
      t = c_22(t);
      t = not_null(o_21);
      t = a_67(t);
      if(((t_21 != NULL) && (t_21 != t)))
        _fail(t);
      else
        t_21 = t;
      t = d_22(t);
    }
    return(t);
  }
  if(((j_21 != NULL) && (j_21 != t)))
    _fail(t);
  else
    j_21 = t;
  t = not_null(j_21);
  if(match_cons(t, sym_PrimT_3))
    {
      k_21 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
      m_21 = ATgetArgument(t, 2);
      t = b_22(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Where_1_0 (ATerm u_66 (ATerm), ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL;
  ATerm w_22 (ATerm t)
  {
    ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,s_22 = NULL;
    ATerm y_22 (ATerm t)
    {
      ATerm t_22 = NULL,u_22 = NULL;
      t = not_null(s_22);
      if(((t_22 != NULL) && (t_22 != t)))
        _fail(t);
      else
        t_22 = t;
      t = not_null(s_22);
      {
        ATerm v_22 = NULL;
        ATerm z_22 (ATerm t)
        {
          t = not_null(v_22);
          if(((u_22 != NULL) && (u_22 != t)))
            _fail(t);
          else
            u_22 = t;
          t = not_null(v_22);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(t_22)), not_null(q_22));
        if(((v_22 != NULL) && (v_22 != t)))
          _fail(t);
        else
          v_22 = t;
        t = z_22(t);
        t = not_null(u_22);
      }
      return(t);
    }
    t = not_null(m_22);
    if(((o_22 != NULL) && (o_22 != t)))
      _fail(t);
    else
      o_22 = t;
    t = not_null(n_22);
    if(((p_22 != NULL) && (p_22 != t)))
      _fail(t);
    else
      p_22 = t;
    t = not_null(m_22);
    {
      ATerm r_22 = NULL;
      ATerm x_22 (ATerm t)
      {
        t = not_null(r_22);
        if(((q_22 != NULL) && (q_22 != t)))
          _fail(t);
        else
          q_22 = t;
        t = not_null(r_22);
        return(t);
      }
      t = SSLgetAnnotations(not_null(o_22));
      if(((r_22 != NULL) && (r_22 != t)))
        _fail(t);
      else
        r_22 = t;
      t = x_22(t);
      t = not_null(p_22);
      t = u_66(t);
      if(((s_22 != NULL) && (s_22 != t)))
        _fail(t);
      else
        s_22 = t;
      t = y_22(t);
    }
    return(t);
  }
  if(((m_22 != NULL) && (m_22 != t)))
    _fail(t);
  else
    m_22 = t;
  t = not_null(m_22);
  if(match_cons(t, sym_Where_1))
    {
      n_22 = ATgetArgument(t, 0);
      t = w_22(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2_0 (ATerm e_66 (ATerm), ATerm f_66 (ATerm), ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL;
  ATerm u_23 (ATerm t)
  {
    ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,o_23 = NULL;
    ATerm w_23 (ATerm t)
    {
      ATerm p_23 = NULL,q_23 = NULL;
      ATerm x_23 (ATerm t)
      {
        ATerm r_23 = NULL,s_23 = NULL;
        t = not_null(q_23);
        if(((r_23 != NULL) && (r_23 != t)))
          _fail(t);
        else
          r_23 = t;
        t = not_null(q_23);
        {
          ATerm t_23 = NULL;
          ATerm y_23 (ATerm t)
          {
            t = not_null(t_23);
            if(((s_23 != NULL) && (s_23 != t)))
              _fail(t);
            else
              s_23 = t;
            t = not_null(t_23);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(p_23), not_null(r_23)), not_null(m_23));
          if(((t_23 != NULL) && (t_23 != t)))
            _fail(t);
          else
            t_23 = t;
          t = y_23(t);
          t = not_null(s_23);
        }
        return(t);
      }
      t = not_null(o_23);
      if(((p_23 != NULL) && (p_23 != t)))
        _fail(t);
      else
        p_23 = t;
      t = not_null(l_23);
      t = f_66(t);
      if(((q_23 != NULL) && (q_23 != t)))
        _fail(t);
      else
        q_23 = t;
      t = x_23(t);
      return(t);
    }
    t = not_null(g_23);
    if(((j_23 != NULL) && (j_23 != t)))
      _fail(t);
    else
      j_23 = t;
    t = not_null(h_23);
    if(((k_23 != NULL) && (k_23 != t)))
      _fail(t);
    else
      k_23 = t;
    t = not_null(i_23);
    if(((l_23 != NULL) && (l_23 != t)))
      _fail(t);
    else
      l_23 = t;
    t = not_null(g_23);
    {
      ATerm n_23 = NULL;
      ATerm v_23 (ATerm t)
      {
        t = not_null(n_23);
        if(((m_23 != NULL) && (m_23 != t)))
          _fail(t);
        else
          m_23 = t;
        t = not_null(n_23);
        return(t);
      }
      t = SSLgetAnnotations(not_null(j_23));
      if(((n_23 != NULL) && (n_23 != t)))
        _fail(t);
      else
        n_23 = t;
      t = v_23(t);
      t = not_null(k_23);
      t = e_66(t);
      if(((o_23 != NULL) && (o_23 != t)))
        _fail(t);
      else
        o_23 = t;
      t = w_23(t);
    }
    return(t);
  }
  if(((g_23 != NULL) && (g_23 != t)))
    _fail(t);
  else
    g_23 = t;
  t = not_null(g_23);
  if(match_cons(t, sym_Scope_2))
    {
      h_23 = ATgetArgument(t, 0);
      i_23 = ATgetArgument(t, 1);
      t = u_23(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Build_1_0 (ATerm c_66 (ATerm), ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL;
  ATerm o_24 (ATerm t)
  {
    ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL,k_24 = NULL;
    ATerm q_24 (ATerm t)
    {
      ATerm l_24 = NULL,m_24 = NULL;
      t = not_null(k_24);
      if(((l_24 != NULL) && (l_24 != t)))
        _fail(t);
      else
        l_24 = t;
      t = not_null(k_24);
      {
        ATerm n_24 = NULL;
        ATerm r_24 (ATerm t)
        {
          t = not_null(n_24);
          if(((m_24 != NULL) && (m_24 != t)))
            _fail(t);
          else
            m_24 = t;
          t = not_null(n_24);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(l_24)), not_null(i_24));
        if(((n_24 != NULL) && (n_24 != t)))
          _fail(t);
        else
          n_24 = t;
        t = r_24(t);
        t = not_null(m_24);
      }
      return(t);
    }
    t = not_null(e_24);
    if(((g_24 != NULL) && (g_24 != t)))
      _fail(t);
    else
      g_24 = t;
    t = not_null(f_24);
    if(((h_24 != NULL) && (h_24 != t)))
      _fail(t);
    else
      h_24 = t;
    t = not_null(e_24);
    {
      ATerm j_24 = NULL;
      ATerm p_24 (ATerm t)
      {
        t = not_null(j_24);
        if(((i_24 != NULL) && (i_24 != t)))
          _fail(t);
        else
          i_24 = t;
        t = not_null(j_24);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_24));
      if(((j_24 != NULL) && (j_24 != t)))
        _fail(t);
      else
        j_24 = t;
      t = p_24(t);
      t = not_null(h_24);
      t = c_66(t);
      if(((k_24 != NULL) && (k_24 != t)))
        _fail(t);
      else
        k_24 = t;
      t = q_24(t);
    }
    return(t);
  }
  if(((e_24 != NULL) && (e_24 != t)))
    _fail(t);
  else
    e_24 = t;
  t = not_null(e_24);
  if(match_cons(t, sym_Build_1))
    {
      f_24 = ATgetArgument(t, 0);
      t = o_24(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Match_1_0 (ATerm b_66 (ATerm), ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL;
  ATerm h_25 (ATerm t)
  {
    ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,d_25 = NULL;
    ATerm j_25 (ATerm t)
    {
      ATerm e_25 = NULL,f_25 = NULL;
      t = not_null(d_25);
      if(((e_25 != NULL) && (e_25 != t)))
        _fail(t);
      else
        e_25 = t;
      t = not_null(d_25);
      {
        ATerm g_25 = NULL;
        ATerm k_25 (ATerm t)
        {
          t = not_null(g_25);
          if(((f_25 != NULL) && (f_25 != t)))
            _fail(t);
          else
            f_25 = t;
          t = not_null(g_25);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(e_25)), not_null(b_25));
        if(((g_25 != NULL) && (g_25 != t)))
          _fail(t);
        else
          g_25 = t;
        t = k_25(t);
        t = not_null(f_25);
      }
      return(t);
    }
    t = not_null(x_24);
    if(((z_24 != NULL) && (z_24 != t)))
      _fail(t);
    else
      z_24 = t;
    t = not_null(y_24);
    if(((a_25 != NULL) && (a_25 != t)))
      _fail(t);
    else
      a_25 = t;
    t = not_null(x_24);
    {
      ATerm c_25 = NULL;
      ATerm i_25 (ATerm t)
      {
        t = not_null(c_25);
        if(((b_25 != NULL) && (b_25 != t)))
          _fail(t);
        else
          b_25 = t;
        t = not_null(c_25);
        return(t);
      }
      t = SSLgetAnnotations(not_null(z_24));
      if(((c_25 != NULL) && (c_25 != t)))
        _fail(t);
      else
        c_25 = t;
      t = i_25(t);
      t = not_null(a_25);
      t = b_66(t);
      if(((d_25 != NULL) && (d_25 != t)))
        _fail(t);
      else
        d_25 = t;
      t = j_25(t);
    }
    return(t);
  }
  if(((x_24 != NULL) && (x_24 != t)))
    _fail(t);
  else
    x_24 = t;
  t = not_null(x_24);
  if(match_cons(t, sym_Match_1))
    {
      y_24 = ATgetArgument(t, 0);
      t = h_25(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Thread_1_0 (ATerm i_67 (ATerm), ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL;
  ATerm a_26 (ATerm t)
  {
    ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL,w_25 = NULL;
    ATerm c_26 (ATerm t)
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
        ATerm d_26 (ATerm t)
        {
          t = not_null(z_25);
          if(((y_25 != NULL) && (y_25 != t)))
            _fail(t);
          else
            y_25 = t;
          t = not_null(z_25);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(x_25)), not_null(u_25));
        if(((z_25 != NULL) && (z_25 != t)))
          _fail(t);
        else
          z_25 = t;
        t = d_26(t);
        t = not_null(y_25);
      }
      return(t);
    }
    t = not_null(q_25);
    if(((s_25 != NULL) && (s_25 != t)))
      _fail(t);
    else
      s_25 = t;
    t = not_null(r_25);
    if(((t_25 != NULL) && (t_25 != t)))
      _fail(t);
    else
      t_25 = t;
    t = not_null(q_25);
    {
      ATerm v_25 = NULL;
      ATerm b_26 (ATerm t)
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
      t = b_26(t);
      t = not_null(t_25);
      t = i_67(t);
      if(((w_25 != NULL) && (w_25 != t)))
        _fail(t);
      else
        w_25 = t;
      t = c_26(t);
    }
    return(t);
  }
  if(((q_25 != NULL) && (q_25 != t)))
    _fail(t);
  else
    q_25 = t;
  t = not_null(q_25);
  if(match_cons(t, sym_Thread_1))
    {
      r_25 = ATgetArgument(t, 0);
      t = a_26(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm All_1_0 (ATerm h_67 (ATerm), ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL;
  ATerm t_26 (ATerm t)
  {
    ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,p_26 = NULL;
    ATerm v_26 (ATerm t)
    {
      ATerm q_26 = NULL,r_26 = NULL;
      t = not_null(p_26);
      if(((q_26 != NULL) && (q_26 != t)))
        _fail(t);
      else
        q_26 = t;
      t = not_null(p_26);
      {
        ATerm s_26 = NULL;
        ATerm w_26 (ATerm t)
        {
          t = not_null(s_26);
          if(((r_26 != NULL) && (r_26 != t)))
            _fail(t);
          else
            r_26 = t;
          t = not_null(s_26);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(q_26)), not_null(n_26));
        if(((s_26 != NULL) && (s_26 != t)))
          _fail(t);
        else
          s_26 = t;
        t = w_26(t);
        t = not_null(r_26);
      }
      return(t);
    }
    t = not_null(j_26);
    if(((l_26 != NULL) && (l_26 != t)))
      _fail(t);
    else
      l_26 = t;
    t = not_null(k_26);
    if(((m_26 != NULL) && (m_26 != t)))
      _fail(t);
    else
      m_26 = t;
    t = not_null(j_26);
    {
      ATerm o_26 = NULL;
      ATerm u_26 (ATerm t)
      {
        t = not_null(o_26);
        if(((n_26 != NULL) && (n_26 != t)))
          _fail(t);
        else
          n_26 = t;
        t = not_null(o_26);
        return(t);
      }
      t = SSLgetAnnotations(not_null(l_26));
      if(((o_26 != NULL) && (o_26 != t)))
        _fail(t);
      else
        o_26 = t;
      t = u_26(t);
      t = not_null(m_26);
      t = h_67(t);
      if(((p_26 != NULL) && (p_26 != t)))
        _fail(t);
      else
        p_26 = t;
      t = v_26(t);
    }
    return(t);
  }
  if(((j_26 != NULL) && (j_26 != t)))
    _fail(t);
  else
    j_26 = t;
  t = not_null(j_26);
  if(match_cons(t, sym_All_1))
    {
      k_26 = ATgetArgument(t, 0);
      t = t_26(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Some_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL;
  ATerm d_28 (ATerm t)
  {
    ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,m_27 = NULL;
    ATerm g_28 (ATerm t)
    {
      ATerm n_27 = NULL,o_27 = NULL;
      t = not_null(m_27);
      if(((n_27 != NULL) && (n_27 != t)))
        _fail(t);
      else
        n_27 = t;
      t = not_null(m_27);
      {
        ATerm u_27 = NULL;
        ATerm h_28 (ATerm t)
        {
          t = not_null(u_27);
          if(((o_27 != NULL) && (o_27 != t)))
            _fail(t);
          else
            o_27 = t;
          t = not_null(u_27);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(n_27)), not_null(k_27));
        if(((u_27 != NULL) && (u_27 != t)))
          _fail(t);
        else
          u_27 = t;
        t = h_28(t);
        t = not_null(o_27);
      }
      return(t);
    }
    t = not_null(g_27);
    if(((i_27 != NULL) && (i_27 != t)))
      _fail(t);
    else
      i_27 = t;
    t = not_null(h_27);
    if(((j_27 != NULL) && (j_27 != t)))
      _fail(t);
    else
      j_27 = t;
    t = not_null(g_27);
    {
      ATerm l_27 = NULL;
      ATerm f_28 (ATerm t)
      {
        t = not_null(l_27);
        if(((k_27 != NULL) && (k_27 != t)))
          _fail(t);
        else
          k_27 = t;
        t = not_null(l_27);
        return(t);
      }
      t = SSLgetAnnotations(not_null(i_27));
      if(((l_27 != NULL) && (l_27 != t)))
        _fail(t);
      else
        l_27 = t;
      t = f_28(t);
      t = not_null(j_27);
      t = l_0(t);
      if(((m_27 != NULL) && (m_27 != t)))
        _fail(t);
      else
        m_27 = t;
      t = g_28(t);
    }
    return(t);
  }
  ATerm e_28 (ATerm t)
  {
    ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,z_27 = NULL;
    ATerm m_28 (ATerm t)
    {
      ATerm a_28 = NULL,b_28 = NULL;
      t = not_null(z_27);
      if(((a_28 != NULL) && (a_28 != t)))
        _fail(t);
      else
        a_28 = t;
      t = not_null(z_27);
      {
        ATerm c_28 = NULL;
        ATerm n_28 (ATerm t)
        {
          t = not_null(c_28);
          if(((b_28 != NULL) && (b_28 != t)))
            _fail(t);
          else
            b_28 = t;
          t = not_null(c_28);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(a_28)), not_null(x_27));
        if(((c_28 != NULL) && (c_28 != t)))
          _fail(t);
        else
          c_28 = t;
        t = n_28(t);
        t = not_null(b_28);
      }
      return(t);
    }
    t = not_null(g_27);
    if(((v_27 != NULL) && (v_27 != t)))
      _fail(t);
    else
      v_27 = t;
    t = not_null(h_27);
    if(((w_27 != NULL) && (w_27 != t)))
      _fail(t);
    else
      w_27 = t;
    t = not_null(g_27);
    {
      ATerm y_27 = NULL;
      ATerm l_28 (ATerm t)
      {
        t = not_null(y_27);
        if(((x_27 != NULL) && (x_27 != t)))
          _fail(t);
        else
          x_27 = t;
        t = not_null(y_27);
        return(t);
      }
      t = SSLgetAnnotations(not_null(v_27));
      if(((y_27 != NULL) && (y_27 != t)))
        _fail(t);
      else
        y_27 = t;
      t = l_28(t);
      t = not_null(w_27);
      t = l_0(t);
      if(((z_27 != NULL) && (z_27 != t)))
        _fail(t);
      else
        z_27 = t;
      t = m_28(t);
    }
    return(t);
  }
  if(((g_27 != NULL) && (g_27 != t)))
    _fail(t);
  else
    g_27 = t;
  t = not_null(g_27);
  if(match_cons(t, sym_Some_1))
    {
      h_27 = ATgetArgument(t, 0);
      {
        ATerm a_5 = t;
        int b_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_28(t);
            ;
            LocalPopChoice(b_5);
          }
        else
          {
            t = a_5;
            t = e_28(t);
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm One_1_0 (ATerm g_67 (ATerm), ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL;
  ATerm d_29 (ATerm t)
  {
    ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL,z_28 = NULL;
    ATerm f_29 (ATerm t)
    {
      ATerm a_29 = NULL,b_29 = NULL;
      t = not_null(z_28);
      if(((a_29 != NULL) && (a_29 != t)))
        _fail(t);
      else
        a_29 = t;
      t = not_null(z_28);
      {
        ATerm c_29 = NULL;
        ATerm g_29 (ATerm t)
        {
          t = not_null(c_29);
          if(((b_29 != NULL) && (b_29 != t)))
            _fail(t);
          else
            b_29 = t;
          t = not_null(c_29);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(a_29)), not_null(x_28));
        if(((c_29 != NULL) && (c_29 != t)))
          _fail(t);
        else
          c_29 = t;
        t = g_29(t);
        t = not_null(b_29);
      }
      return(t);
    }
    t = not_null(t_28);
    if(((v_28 != NULL) && (v_28 != t)))
      _fail(t);
    else
      v_28 = t;
    t = not_null(u_28);
    if(((w_28 != NULL) && (w_28 != t)))
      _fail(t);
    else
      w_28 = t;
    t = not_null(t_28);
    {
      ATerm y_28 = NULL;
      ATerm e_29 (ATerm t)
      {
        t = not_null(y_28);
        if(((x_28 != NULL) && (x_28 != t)))
          _fail(t);
        else
          x_28 = t;
        t = not_null(y_28);
        return(t);
      }
      t = SSLgetAnnotations(not_null(v_28));
      if(((y_28 != NULL) && (y_28 != t)))
        _fail(t);
      else
        y_28 = t;
      t = e_29(t);
      t = not_null(w_28);
      t = g_67(t);
      if(((z_28 != NULL) && (z_28 != t)))
        _fail(t);
      else
        z_28 = t;
      t = f_29(t);
    }
    return(t);
  }
  if(((t_28 != NULL) && (t_28 != t)))
    _fail(t);
  else
    t_28 = t;
  t = not_null(t_28);
  if(match_cons(t, sym_One_1))
    {
      u_28 = ATgetArgument(t, 0);
      t = d_29(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cong_2_0 (ATerm h_61 (ATerm), ATerm i_61 (ATerm), ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
  ATerm b_30 (ATerm t)
  {
    ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,v_29 = NULL;
    ATerm d_30 (ATerm t)
    {
      ATerm w_29 = NULL,x_29 = NULL;
      ATerm e_30 (ATerm t)
      {
        ATerm y_29 = NULL,z_29 = NULL;
        t = not_null(x_29);
        if(((y_29 != NULL) && (y_29 != t)))
          _fail(t);
        else
          y_29 = t;
        t = not_null(x_29);
        {
          ATerm a_30 = NULL;
          ATerm f_30 (ATerm t)
          {
            t = not_null(a_30);
            if(((z_29 != NULL) && (z_29 != t)))
              _fail(t);
            else
              z_29 = t;
            t = not_null(a_30);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(w_29), not_null(y_29)), not_null(t_29));
          if(((a_30 != NULL) && (a_30 != t)))
            _fail(t);
          else
            a_30 = t;
          t = f_30(t);
          t = not_null(z_29);
        }
        return(t);
      }
      t = not_null(v_29);
      if(((w_29 != NULL) && (w_29 != t)))
        _fail(t);
      else
        w_29 = t;
      t = not_null(s_29);
      t = i_61(t);
      if(((x_29 != NULL) && (x_29 != t)))
        _fail(t);
      else
        x_29 = t;
      t = e_30(t);
      return(t);
    }
    t = not_null(n_29);
    if(((q_29 != NULL) && (q_29 != t)))
      _fail(t);
    else
      q_29 = t;
    t = not_null(o_29);
    if(((r_29 != NULL) && (r_29 != t)))
      _fail(t);
    else
      r_29 = t;
    t = not_null(p_29);
    if(((s_29 != NULL) && (s_29 != t)))
      _fail(t);
    else
      s_29 = t;
    t = not_null(n_29);
    {
      ATerm u_29 = NULL;
      ATerm c_30 (ATerm t)
      {
        t = not_null(u_29);
        if(((t_29 != NULL) && (t_29 != t)))
          _fail(t);
        else
          t_29 = t;
        t = not_null(u_29);
        return(t);
      }
      t = SSLgetAnnotations(not_null(q_29));
      if(((u_29 != NULL) && (u_29 != t)))
        _fail(t);
      else
        u_29 = t;
      t = c_30(t);
      t = not_null(r_29);
      t = h_61(t);
      if(((v_29 != NULL) && (v_29 != t)))
        _fail(t);
      else
        v_29 = t;
      t = d_30(t);
    }
    return(t);
  }
  if(((n_29 != NULL) && (n_29 != t)))
    _fail(t);
  else
    n_29 = t;
  t = not_null(n_29);
  if(match_cons(t, sym_Cong_2))
    {
      o_29 = ATgetArgument(t, 0);
      p_29 = ATgetArgument(t, 1);
      t = b_30(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_int_0_0 (ATerm t)
{
  ATerm h_30 = NULL;
  ATerm j_30 (ATerm t)
  {
    ATerm i_30 = NULL;
    t = not_null(h_30);
    if(((i_30 != NULL) && (i_30 != t)))
      _fail(t);
    else
      i_30 = t;
    t = not_null(h_30);
    t = SSL_is_int(not_null(i_30));
    return(t);
  }
  if(((h_30 != NULL) && (h_30 != t)))
    _fail(t);
  else
    h_30 = t;
  t = j_30(t);
  return(t);
}
ATerm Path_2_0 (ATerm d_67 (ATerm), ATerm e_67 (ATerm), ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL;
  ATerm e_31 (ATerm t)
  {
    ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,y_30 = NULL;
    ATerm g_31 (ATerm t)
    {
      ATerm z_30 = NULL,a_31 = NULL;
      ATerm h_31 (ATerm t)
      {
        ATerm b_31 = NULL,c_31 = NULL;
        t = not_null(a_31);
        if(((b_31 != NULL) && (b_31 != t)))
          _fail(t);
        else
          b_31 = t;
        t = not_null(a_31);
        {
          ATerm d_31 = NULL;
          ATerm i_31 (ATerm t)
          {
            t = not_null(d_31);
            if(((c_31 != NULL) && (c_31 != t)))
              _fail(t);
            else
              c_31 = t;
            t = not_null(d_31);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(z_30), not_null(b_31)), not_null(w_30));
          if(((d_31 != NULL) && (d_31 != t)))
            _fail(t);
          else
            d_31 = t;
          t = i_31(t);
          t = not_null(c_31);
        }
        return(t);
      }
      t = not_null(y_30);
      if(((z_30 != NULL) && (z_30 != t)))
        _fail(t);
      else
        z_30 = t;
      t = not_null(v_30);
      t = e_67(t);
      if(((a_31 != NULL) && (a_31 != t)))
        _fail(t);
      else
        a_31 = t;
      t = h_31(t);
      return(t);
    }
    t = not_null(q_30);
    if(((t_30 != NULL) && (t_30 != t)))
      _fail(t);
    else
      t_30 = t;
    t = not_null(r_30);
    if(((u_30 != NULL) && (u_30 != t)))
      _fail(t);
    else
      u_30 = t;
    t = not_null(s_30);
    if(((v_30 != NULL) && (v_30 != t)))
      _fail(t);
    else
      v_30 = t;
    t = not_null(q_30);
    {
      ATerm x_30 = NULL;
      ATerm f_31 (ATerm t)
      {
        t = not_null(x_30);
        if(((w_30 != NULL) && (w_30 != t)))
          _fail(t);
        else
          w_30 = t;
        t = not_null(x_30);
        return(t);
      }
      t = SSLgetAnnotations(not_null(t_30));
      if(((x_30 != NULL) && (x_30 != t)))
        _fail(t);
      else
        x_30 = t;
      t = f_31(t);
      t = not_null(u_30);
      t = d_67(t);
      if(((y_30 != NULL) && (y_30 != t)))
        _fail(t);
      else
        y_30 = t;
      t = g_31(t);
    }
    return(t);
  }
  if(((q_30 != NULL) && (q_30 != t)))
    _fail(t);
  else
    q_30 = t;
  t = not_null(q_30);
  if(match_cons(t, sym_Path_2))
    {
      r_30 = ATgetArgument(t, 0);
      s_30 = ATgetArgument(t, 1);
      t = e_31(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Rec_2_0 (ATerm r_66 (ATerm), ATerm s_66 (ATerm), ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
  ATerm d_32 (ATerm t)
  {
    ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,x_31 = NULL;
    ATerm f_32 (ATerm t)
    {
      ATerm y_31 = NULL,z_31 = NULL;
      ATerm g_32 (ATerm t)
      {
        ATerm a_32 = NULL,b_32 = NULL;
        t = not_null(z_31);
        if(((a_32 != NULL) && (a_32 != t)))
          _fail(t);
        else
          a_32 = t;
        t = not_null(z_31);
        {
          ATerm c_32 = NULL;
          ATerm h_32 (ATerm t)
          {
            t = not_null(c_32);
            if(((b_32 != NULL) && (b_32 != t)))
              _fail(t);
            else
              b_32 = t;
            t = not_null(c_32);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(y_31), not_null(a_32)), not_null(v_31));
          if(((c_32 != NULL) && (c_32 != t)))
            _fail(t);
          else
            c_32 = t;
          t = h_32(t);
          t = not_null(b_32);
        }
        return(t);
      }
      t = not_null(x_31);
      if(((y_31 != NULL) && (y_31 != t)))
        _fail(t);
      else
        y_31 = t;
      t = not_null(u_31);
      t = s_66(t);
      if(((z_31 != NULL) && (z_31 != t)))
        _fail(t);
      else
        z_31 = t;
      t = g_32(t);
      return(t);
    }
    t = not_null(p_31);
    if(((s_31 != NULL) && (s_31 != t)))
      _fail(t);
    else
      s_31 = t;
    t = not_null(q_31);
    if(((t_31 != NULL) && (t_31 != t)))
      _fail(t);
    else
      t_31 = t;
    t = not_null(r_31);
    if(((u_31 != NULL) && (u_31 != t)))
      _fail(t);
    else
      u_31 = t;
    t = not_null(p_31);
    {
      ATerm w_31 = NULL;
      ATerm e_32 (ATerm t)
      {
        t = not_null(w_31);
        if(((v_31 != NULL) && (v_31 != t)))
          _fail(t);
        else
          v_31 = t;
        t = not_null(w_31);
        return(t);
      }
      t = SSLgetAnnotations(not_null(s_31));
      if(((w_31 != NULL) && (w_31 != t)))
        _fail(t);
      else
        w_31 = t;
      t = e_32(t);
      t = not_null(t_31);
      t = r_66(t);
      if(((x_31 != NULL) && (x_31 != t)))
        _fail(t);
      else
        x_31 = t;
      t = f_32(t);
    }
    return(t);
  }
  if(((p_31 != NULL) && (p_31 != t)))
    _fail(t);
  else
    p_31 = t;
  t = not_null(p_31);
  if(match_cons(t, sym_Rec_2))
    {
      q_31 = ATgetArgument(t, 0);
      r_31 = ATgetArgument(t, 1);
      t = d_32(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1_0 (ATerm t_65 (ATerm), ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL;
  ATerm x_32 (ATerm t)
  {
    ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,t_32 = NULL;
    ATerm z_32 (ATerm t)
    {
      ATerm u_32 = NULL,v_32 = NULL;
      t = not_null(t_32);
      if(((u_32 != NULL) && (u_32 != t)))
        _fail(t);
      else
        u_32 = t;
      t = not_null(t_32);
      {
        ATerm w_32 = NULL;
        ATerm a_33 (ATerm t)
        {
          t = not_null(w_32);
          if(((v_32 != NULL) && (v_32 != t)))
            _fail(t);
          else
            v_32 = t;
          t = not_null(w_32);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(u_32)), not_null(r_32));
        if(((w_32 != NULL) && (w_32 != t)))
          _fail(t);
        else
          w_32 = t;
        t = a_33(t);
        t = not_null(v_32);
      }
      return(t);
    }
    t = not_null(n_32);
    if(((p_32 != NULL) && (p_32 != t)))
      _fail(t);
    else
      p_32 = t;
    t = not_null(o_32);
    if(((q_32 != NULL) && (q_32 != t)))
      _fail(t);
    else
      q_32 = t;
    t = not_null(n_32);
    {
      ATerm s_32 = NULL;
      ATerm y_32 (ATerm t)
      {
        t = not_null(s_32);
        if(((r_32 != NULL) && (r_32 != t)))
          _fail(t);
        else
          r_32 = t;
        t = not_null(s_32);
        return(t);
      }
      t = SSLgetAnnotations(not_null(p_32));
      if(((s_32 != NULL) && (s_32 != t)))
        _fail(t);
      else
        s_32 = t;
      t = y_32(t);
      t = not_null(q_32);
      t = t_65(t);
      if(((t_32 != NULL) && (t_32 != t)))
        _fail(t);
      else
        t_32 = t;
      t = z_32(t);
    }
    return(t);
  }
  if(((n_32 != NULL) && (n_32 != t)))
    _fail(t);
  else
    n_32 = t;
  t = not_null(n_32);
  if(match_cons(t, sym_SVar_1))
    {
      o_32 = ATgetArgument(t, 0);
      t = x_32(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm y_65 (ATerm), ATerm z_65 (ATerm), ATerm a_66 (ATerm), ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL;
  ATerm c_34 (ATerm t)
  {
    ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,s_33 = NULL;
    ATerm e_34 (ATerm t)
    {
      ATerm t_33 = NULL,u_33 = NULL;
      ATerm f_34 (ATerm t)
      {
        ATerm v_33 = NULL,y_33 = NULL;
        ATerm g_34 (ATerm t)
        {
          ATerm z_33 = NULL,a_34 = NULL;
          t = not_null(y_33);
          if(((z_33 != NULL) && (z_33 != t)))
            _fail(t);
          else
            z_33 = t;
          t = not_null(y_33);
          {
            ATerm b_34 = NULL;
            ATerm h_34 (ATerm t)
            {
              t = not_null(b_34);
              if(((a_34 != NULL) && (a_34 != t)))
                _fail(t);
              else
                a_34 = t;
              t = not_null(b_34);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(t_33), not_null(v_33), not_null(z_33)), not_null(q_33));
            if(((b_34 != NULL) && (b_34 != t)))
              _fail(t);
            else
              b_34 = t;
            t = h_34(t);
            t = not_null(a_34);
          }
          return(t);
        }
        t = not_null(u_33);
        if(((v_33 != NULL) && (v_33 != t)))
          _fail(t);
        else
          v_33 = t;
        t = not_null(p_33);
        t = a_66(t);
        if(((y_33 != NULL) && (y_33 != t)))
          _fail(t);
        else
          y_33 = t;
        t = g_34(t);
        return(t);
      }
      t = not_null(s_33);
      if(((t_33 != NULL) && (t_33 != t)))
        _fail(t);
      else
        t_33 = t;
      t = not_null(o_33);
      t = z_65(t);
      if(((u_33 != NULL) && (u_33 != t)))
        _fail(t);
      else
        u_33 = t;
      t = f_34(t);
      return(t);
    }
    t = not_null(i_33);
    if(((m_33 != NULL) && (m_33 != t)))
      _fail(t);
    else
      m_33 = t;
    t = not_null(j_33);
    if(((n_33 != NULL) && (n_33 != t)))
      _fail(t);
    else
      n_33 = t;
    t = not_null(k_33);
    if(((o_33 != NULL) && (o_33 != t)))
      _fail(t);
    else
      o_33 = t;
    t = not_null(l_33);
    if(((p_33 != NULL) && (p_33 != t)))
      _fail(t);
    else
      p_33 = t;
    t = not_null(i_33);
    {
      ATerm r_33 = NULL;
      ATerm d_34 (ATerm t)
      {
        t = not_null(r_33);
        if(((q_33 != NULL) && (q_33 != t)))
          _fail(t);
        else
          q_33 = t;
        t = not_null(r_33);
        return(t);
      }
      t = SSLgetAnnotations(not_null(m_33));
      if(((r_33 != NULL) && (r_33 != t)))
        _fail(t);
      else
        r_33 = t;
      t = d_34(t);
      t = not_null(n_33);
      t = y_65(t);
      if(((s_33 != NULL) && (s_33 != t)))
        _fail(t);
      else
        s_33 = t;
      t = e_34(t);
    }
    return(t);
  }
  if(((i_33 != NULL) && (i_33 != t)))
    _fail(t);
  else
    i_33 = t;
  t = not_null(i_33);
  if(match_cons(t, sym_CallT_3))
    {
      j_33 = ATgetArgument(t, 0);
      k_33 = ATgetArgument(t, 1);
      l_33 = ATgetArgument(t, 2);
      t = c_34(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LGChoice_2_0 (ATerm m_66 (ATerm), ATerm n_66 (ATerm), ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
  ATerm c_35 (ATerm t)
  {
    ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,w_34 = NULL;
    ATerm e_35 (ATerm t)
    {
      ATerm x_34 = NULL,y_34 = NULL;
      ATerm f_35 (ATerm t)
      {
        ATerm z_34 = NULL,a_35 = NULL;
        t = not_null(y_34);
        if(((z_34 != NULL) && (z_34 != t)))
          _fail(t);
        else
          z_34 = t;
        t = not_null(y_34);
        {
          ATerm b_35 = NULL;
          ATerm g_35 (ATerm t)
          {
            t = not_null(b_35);
            if(((a_35 != NULL) && (a_35 != t)))
              _fail(t);
            else
              a_35 = t;
            t = not_null(b_35);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(x_34), not_null(z_34)), not_null(u_34));
          if(((b_35 != NULL) && (b_35 != t)))
            _fail(t);
          else
            b_35 = t;
          t = g_35(t);
          t = not_null(a_35);
        }
        return(t);
      }
      t = not_null(w_34);
      if(((x_34 != NULL) && (x_34 != t)))
        _fail(t);
      else
        x_34 = t;
      t = not_null(t_34);
      t = n_66(t);
      if(((y_34 != NULL) && (y_34 != t)))
        _fail(t);
      else
        y_34 = t;
      t = f_35(t);
      return(t);
    }
    t = not_null(o_34);
    if(((r_34 != NULL) && (r_34 != t)))
      _fail(t);
    else
      r_34 = t;
    t = not_null(p_34);
    if(((s_34 != NULL) && (s_34 != t)))
      _fail(t);
    else
      s_34 = t;
    t = not_null(q_34);
    if(((t_34 != NULL) && (t_34 != t)))
      _fail(t);
    else
      t_34 = t;
    t = not_null(o_34);
    {
      ATerm v_34 = NULL;
      ATerm d_35 (ATerm t)
      {
        t = not_null(v_34);
        if(((u_34 != NULL) && (u_34 != t)))
          _fail(t);
        else
          u_34 = t;
        t = not_null(v_34);
        return(t);
      }
      t = SSLgetAnnotations(not_null(r_34));
      if(((v_34 != NULL) && (v_34 != t)))
        _fail(t);
      else
        v_34 = t;
      t = d_35(t);
      t = not_null(s_34);
      t = m_66(t);
      if(((w_34 != NULL) && (w_34 != t)))
        _fail(t);
      else
        w_34 = t;
      t = e_35(t);
    }
    return(t);
  }
  if(((o_34 != NULL) && (o_34 != t)))
    _fail(t);
  else
    o_34 = t;
  t = not_null(o_34);
  if(match_cons(t, sym_LGChoice_2))
    {
      p_34 = ATgetArgument(t, 0);
      q_34 = ATgetArgument(t, 1);
      t = c_35(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm GChoice_2_0 (ATerm m_65 (ATerm), ATerm n_65 (ATerm), ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
  ATerm d_36 (ATerm t)
  {
    ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,x_35 = NULL;
    ATerm f_36 (ATerm t)
    {
      ATerm y_35 = NULL,z_35 = NULL;
      ATerm g_36 (ATerm t)
      {
        ATerm a_36 = NULL,b_36 = NULL;
        t = not_null(z_35);
        if(((a_36 != NULL) && (a_36 != t)))
          _fail(t);
        else
          a_36 = t;
        t = not_null(z_35);
        {
          ATerm c_36 = NULL;
          ATerm h_36 (ATerm t)
          {
            t = not_null(c_36);
            if(((b_36 != NULL) && (b_36 != t)))
              _fail(t);
            else
              b_36 = t;
            t = not_null(c_36);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(y_35), not_null(a_36)), not_null(v_35));
          if(((c_36 != NULL) && (c_36 != t)))
            _fail(t);
          else
            c_36 = t;
          t = h_36(t);
          t = not_null(b_36);
        }
        return(t);
      }
      t = not_null(x_35);
      if(((y_35 != NULL) && (y_35 != t)))
        _fail(t);
      else
        y_35 = t;
      t = not_null(u_35);
      t = n_65(t);
      if(((z_35 != NULL) && (z_35 != t)))
        _fail(t);
      else
        z_35 = t;
      t = g_36(t);
      return(t);
    }
    t = not_null(p_35);
    if(((s_35 != NULL) && (s_35 != t)))
      _fail(t);
    else
      s_35 = t;
    t = not_null(q_35);
    if(((t_35 != NULL) && (t_35 != t)))
      _fail(t);
    else
      t_35 = t;
    t = not_null(r_35);
    if(((u_35 != NULL) && (u_35 != t)))
      _fail(t);
    else
      u_35 = t;
    t = not_null(p_35);
    {
      ATerm w_35 = NULL;
      ATerm e_36 (ATerm t)
      {
        t = not_null(w_35);
        if(((v_35 != NULL) && (v_35 != t)))
          _fail(t);
        else
          v_35 = t;
        t = not_null(w_35);
        return(t);
      }
      t = SSLgetAnnotations(not_null(s_35));
      if(((w_35 != NULL) && (w_35 != t)))
        _fail(t);
      else
        w_35 = t;
      t = e_36(t);
      t = not_null(t_35);
      t = m_65(t);
      if(((x_35 != NULL) && (x_35 != t)))
        _fail(t);
      else
        x_35 = t;
      t = f_36(t);
    }
    return(t);
  }
  if(((p_35 != NULL) && (p_35 != t)))
    _fail(t);
  else
    p_35 = t;
  t = not_null(p_35);
  if(match_cons(t, sym_GChoice_2))
    {
      q_35 = ATgetArgument(t, 0);
      r_35 = ATgetArgument(t, 1);
      t = d_36(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm o_66 (ATerm), ATerm p_66 (ATerm), ATerm q_66 (ATerm), ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL;
  ATerm h_37 (ATerm t)
  {
    ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,z_36 = NULL;
    ATerm j_37 (ATerm t)
    {
      ATerm a_37 = NULL,b_37 = NULL;
      ATerm k_37 (ATerm t)
      {
        ATerm c_37 = NULL,d_37 = NULL;
        ATerm l_37 (ATerm t)
        {
          ATerm e_37 = NULL,f_37 = NULL;
          t = not_null(d_37);
          if(((e_37 != NULL) && (e_37 != t)))
            _fail(t);
          else
            e_37 = t;
          t = not_null(d_37);
          {
            ATerm g_37 = NULL;
            ATerm m_37 (ATerm t)
            {
              t = not_null(g_37);
              if(((f_37 != NULL) && (f_37 != t)))
                _fail(t);
              else
                f_37 = t;
              t = not_null(g_37);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(a_37), not_null(c_37), not_null(e_37)), not_null(x_36));
            if(((g_37 != NULL) && (g_37 != t)))
              _fail(t);
            else
              g_37 = t;
            t = m_37(t);
            t = not_null(f_37);
          }
          return(t);
        }
        t = not_null(b_37);
        if(((c_37 != NULL) && (c_37 != t)))
          _fail(t);
        else
          c_37 = t;
        t = not_null(w_36);
        t = q_66(t);
        if(((d_37 != NULL) && (d_37 != t)))
          _fail(t);
        else
          d_37 = t;
        t = l_37(t);
        return(t);
      }
      t = not_null(z_36);
      if(((a_37 != NULL) && (a_37 != t)))
        _fail(t);
      else
        a_37 = t;
      t = not_null(v_36);
      t = p_66(t);
      if(((b_37 != NULL) && (b_37 != t)))
        _fail(t);
      else
        b_37 = t;
      t = k_37(t);
      return(t);
    }
    t = not_null(p_36);
    if(((t_36 != NULL) && (t_36 != t)))
      _fail(t);
    else
      t_36 = t;
    t = not_null(q_36);
    if(((u_36 != NULL) && (u_36 != t)))
      _fail(t);
    else
      u_36 = t;
    t = not_null(r_36);
    if(((v_36 != NULL) && (v_36 != t)))
      _fail(t);
    else
      v_36 = t;
    t = not_null(s_36);
    if(((w_36 != NULL) && (w_36 != t)))
      _fail(t);
    else
      w_36 = t;
    t = not_null(p_36);
    {
      ATerm y_36 = NULL;
      ATerm i_37 (ATerm t)
      {
        t = not_null(y_36);
        if(((x_36 != NULL) && (x_36 != t)))
          _fail(t);
        else
          x_36 = t;
        t = not_null(y_36);
        return(t);
      }
      t = SSLgetAnnotations(not_null(t_36));
      if(((y_36 != NULL) && (y_36 != t)))
        _fail(t);
      else
        y_36 = t;
      t = i_37(t);
      t = not_null(u_36);
      t = o_66(t);
      if(((z_36 != NULL) && (z_36 != t)))
        _fail(t);
      else
        z_36 = t;
      t = j_37(t);
    }
    return(t);
  }
  if(((p_36 != NULL) && (p_36 != t)))
    _fail(t);
  else
    p_36 = t;
  t = not_null(p_36);
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      q_36 = ATgetArgument(t, 0);
      r_36 = ATgetArgument(t, 1);
      s_36 = ATgetArgument(t, 2);
      t = h_37(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LChoice_2_0 (ATerm k_66 (ATerm), ATerm l_66 (ATerm), ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL;
  ATerm h_38 (ATerm t)
  {
    ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,b_38 = NULL;
    ATerm j_38 (ATerm t)
    {
      ATerm c_38 = NULL,d_38 = NULL;
      ATerm k_38 (ATerm t)
      {
        ATerm e_38 = NULL,f_38 = NULL;
        t = not_null(d_38);
        if(((e_38 != NULL) && (e_38 != t)))
          _fail(t);
        else
          e_38 = t;
        t = not_null(d_38);
        {
          ATerm g_38 = NULL;
          ATerm l_38 (ATerm t)
          {
            t = not_null(g_38);
            if(((f_38 != NULL) && (f_38 != t)))
              _fail(t);
            else
              f_38 = t;
            t = not_null(g_38);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(c_38), not_null(e_38)), not_null(z_37));
          if(((g_38 != NULL) && (g_38 != t)))
            _fail(t);
          else
            g_38 = t;
          t = l_38(t);
          t = not_null(f_38);
        }
        return(t);
      }
      t = not_null(b_38);
      if(((c_38 != NULL) && (c_38 != t)))
        _fail(t);
      else
        c_38 = t;
      t = not_null(y_37);
      t = l_66(t);
      if(((d_38 != NULL) && (d_38 != t)))
        _fail(t);
      else
        d_38 = t;
      t = k_38(t);
      return(t);
    }
    t = not_null(t_37);
    if(((w_37 != NULL) && (w_37 != t)))
      _fail(t);
    else
      w_37 = t;
    t = not_null(u_37);
    if(((x_37 != NULL) && (x_37 != t)))
      _fail(t);
    else
      x_37 = t;
    t = not_null(v_37);
    if(((y_37 != NULL) && (y_37 != t)))
      _fail(t);
    else
      y_37 = t;
    t = not_null(t_37);
    {
      ATerm a_38 = NULL;
      ATerm i_38 (ATerm t)
      {
        t = not_null(a_38);
        if(((z_37 != NULL) && (z_37 != t)))
          _fail(t);
        else
          z_37 = t;
        t = not_null(a_38);
        return(t);
      }
      t = SSLgetAnnotations(not_null(w_37));
      if(((a_38 != NULL) && (a_38 != t)))
        _fail(t);
      else
        a_38 = t;
      t = i_38(t);
      t = not_null(x_37);
      t = k_66(t);
      if(((b_38 != NULL) && (b_38 != t)))
        _fail(t);
      else
        b_38 = t;
      t = j_38(t);
    }
    return(t);
  }
  if(((t_37 != NULL) && (t_37 != t)))
    _fail(t);
  else
    t_37 = t;
  t = not_null(t_37);
  if(match_cons(t, sym_LChoice_2))
    {
      u_37 = ATgetArgument(t, 0);
      v_37 = ATgetArgument(t, 1);
      t = h_38(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Choice_2_0 (ATerm i_65 (ATerm), ATerm j_65 (ATerm), ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
  ATerm g_39 (ATerm t)
  {
    ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,a_39 = NULL;
    ATerm i_39 (ATerm t)
    {
      ATerm b_39 = NULL,c_39 = NULL;
      ATerm j_39 (ATerm t)
      {
        ATerm d_39 = NULL,e_39 = NULL;
        t = not_null(c_39);
        if(((d_39 != NULL) && (d_39 != t)))
          _fail(t);
        else
          d_39 = t;
        t = not_null(c_39);
        {
          ATerm f_39 = NULL;
          ATerm k_39 (ATerm t)
          {
            t = not_null(f_39);
            if(((e_39 != NULL) && (e_39 != t)))
              _fail(t);
            else
              e_39 = t;
            t = not_null(f_39);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(b_39), not_null(d_39)), not_null(y_38));
          if(((f_39 != NULL) && (f_39 != t)))
            _fail(t);
          else
            f_39 = t;
          t = k_39(t);
          t = not_null(e_39);
        }
        return(t);
      }
      t = not_null(a_39);
      if(((b_39 != NULL) && (b_39 != t)))
        _fail(t);
      else
        b_39 = t;
      t = not_null(x_38);
      t = j_65(t);
      if(((c_39 != NULL) && (c_39 != t)))
        _fail(t);
      else
        c_39 = t;
      t = j_39(t);
      return(t);
    }
    t = not_null(s_38);
    if(((v_38 != NULL) && (v_38 != t)))
      _fail(t);
    else
      v_38 = t;
    t = not_null(t_38);
    if(((w_38 != NULL) && (w_38 != t)))
      _fail(t);
    else
      w_38 = t;
    t = not_null(u_38);
    if(((x_38 != NULL) && (x_38 != t)))
      _fail(t);
    else
      x_38 = t;
    t = not_null(s_38);
    {
      ATerm z_38 = NULL;
      ATerm h_39 (ATerm t)
      {
        t = not_null(z_38);
        if(((y_38 != NULL) && (y_38 != t)))
          _fail(t);
        else
          y_38 = t;
        t = not_null(z_38);
        return(t);
      }
      t = SSLgetAnnotations(not_null(v_38));
      if(((z_38 != NULL) && (z_38 != t)))
        _fail(t);
      else
        z_38 = t;
      t = h_39(t);
      t = not_null(w_38);
      t = i_65(t);
      if(((a_39 != NULL) && (a_39 != t)))
        _fail(t);
      else
        a_39 = t;
      t = i_39(t);
    }
    return(t);
  }
  if(((s_38 != NULL) && (s_38 != t)))
    _fail(t);
  else
    s_38 = t;
  t = not_null(s_38);
  if(match_cons(t, sym_Choice_2))
    {
      t_38 = ATgetArgument(t, 0);
      u_38 = ATgetArgument(t, 1);
      t = g_39(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2_0 (ATerm i_66 (ATerm), ATerm j_66 (ATerm), ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
  ATerm f_40 (ATerm t)
  {
    ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,z_39 = NULL;
    ATerm h_40 (ATerm t)
    {
      ATerm a_40 = NULL,b_40 = NULL;
      ATerm i_40 (ATerm t)
      {
        ATerm c_40 = NULL,d_40 = NULL;
        t = not_null(b_40);
        if(((c_40 != NULL) && (c_40 != t)))
          _fail(t);
        else
          c_40 = t;
        t = not_null(b_40);
        {
          ATerm e_40 = NULL;
          ATerm j_40 (ATerm t)
          {
            t = not_null(e_40);
            if(((d_40 != NULL) && (d_40 != t)))
              _fail(t);
            else
              d_40 = t;
            t = not_null(e_40);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(a_40), not_null(c_40)), not_null(x_39));
          if(((e_40 != NULL) && (e_40 != t)))
            _fail(t);
          else
            e_40 = t;
          t = j_40(t);
          t = not_null(d_40);
        }
        return(t);
      }
      t = not_null(z_39);
      if(((a_40 != NULL) && (a_40 != t)))
        _fail(t);
      else
        a_40 = t;
      t = not_null(w_39);
      t = j_66(t);
      if(((b_40 != NULL) && (b_40 != t)))
        _fail(t);
      else
        b_40 = t;
      t = i_40(t);
      return(t);
    }
    t = not_null(r_39);
    if(((u_39 != NULL) && (u_39 != t)))
      _fail(t);
    else
      u_39 = t;
    t = not_null(s_39);
    if(((v_39 != NULL) && (v_39 != t)))
      _fail(t);
    else
      v_39 = t;
    t = not_null(t_39);
    if(((w_39 != NULL) && (w_39 != t)))
      _fail(t);
    else
      w_39 = t;
    t = not_null(r_39);
    {
      ATerm y_39 = NULL;
      ATerm g_40 (ATerm t)
      {
        t = not_null(y_39);
        if(((x_39 != NULL) && (x_39 != t)))
          _fail(t);
        else
          x_39 = t;
        t = not_null(y_39);
        return(t);
      }
      t = SSLgetAnnotations(not_null(u_39));
      if(((y_39 != NULL) && (y_39 != t)))
        _fail(t);
      else
        y_39 = t;
      t = g_40(t);
      t = not_null(v_39);
      t = i_66(t);
      if(((z_39 != NULL) && (z_39 != t)))
        _fail(t);
      else
        z_39 = t;
      t = h_40(t);
    }
    return(t);
  }
  if(((r_39 != NULL) && (r_39 != t)))
    _fail(t);
  else
    r_39 = t;
  t = not_null(r_39);
  if(match_cons(t, sym_Seq_2))
    {
      s_39 = ATgetArgument(t, 0);
      t_39 = ATgetArgument(t, 1);
      t = f_40(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Test_1_0 (ATerm v_66 (ATerm), ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL;
  ATerm d_41 (ATerm t)
  {
    ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,z_40 = NULL;
    ATerm f_41 (ATerm t)
    {
      ATerm a_41 = NULL,b_41 = NULL;
      t = not_null(z_40);
      if(((a_41 != NULL) && (a_41 != t)))
        _fail(t);
      else
        a_41 = t;
      t = not_null(z_40);
      {
        ATerm c_41 = NULL;
        ATerm g_41 (ATerm t)
        {
          t = not_null(c_41);
          if(((b_41 != NULL) && (b_41 != t)))
            _fail(t);
          else
            b_41 = t;
          t = not_null(c_41);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(a_41)), not_null(x_40));
        if(((c_41 != NULL) && (c_41 != t)))
          _fail(t);
        else
          c_41 = t;
        t = g_41(t);
        t = not_null(b_41);
      }
      return(t);
    }
    t = not_null(t_40);
    if(((v_40 != NULL) && (v_40 != t)))
      _fail(t);
    else
      v_40 = t;
    t = not_null(u_40);
    if(((w_40 != NULL) && (w_40 != t)))
      _fail(t);
    else
      w_40 = t;
    t = not_null(t_40);
    {
      ATerm y_40 = NULL;
      ATerm e_41 (ATerm t)
      {
        t = not_null(y_40);
        if(((x_40 != NULL) && (x_40 != t)))
          _fail(t);
        else
          x_40 = t;
        t = not_null(y_40);
        return(t);
      }
      t = SSLgetAnnotations(not_null(v_40));
      if(((y_40 != NULL) && (y_40 != t)))
        _fail(t);
      else
        y_40 = t;
      t = e_41(t);
      t = not_null(w_40);
      t = v_66(t);
      if(((z_40 != NULL) && (z_40 != t)))
        _fail(t);
      else
        z_40 = t;
      t = f_41(t);
    }
    return(t);
  }
  if(((t_40 != NULL) && (t_40 != t)))
    _fail(t);
  else
    t_40 = t;
  t = not_null(t_40);
  if(match_cons(t, sym_Test_1))
    {
      u_40 = ATgetArgument(t, 0);
      t = d_41(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Not_1_0 (ATerm t_66 (ATerm), ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL;
  ATerm w_41 (ATerm t)
  {
    ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,s_41 = NULL;
    ATerm y_41 (ATerm t)
    {
      ATerm t_41 = NULL,u_41 = NULL;
      t = not_null(s_41);
      if(((t_41 != NULL) && (t_41 != t)))
        _fail(t);
      else
        t_41 = t;
      t = not_null(s_41);
      {
        ATerm v_41 = NULL;
        ATerm z_41 (ATerm t)
        {
          t = not_null(v_41);
          if(((u_41 != NULL) && (u_41 != t)))
            _fail(t);
          else
            u_41 = t;
          t = not_null(v_41);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(t_41)), not_null(q_41));
        if(((v_41 != NULL) && (v_41 != t)))
          _fail(t);
        else
          v_41 = t;
        t = z_41(t);
        t = not_null(u_41);
      }
      return(t);
    }
    t = not_null(m_41);
    if(((o_41 != NULL) && (o_41 != t)))
      _fail(t);
    else
      o_41 = t;
    t = not_null(n_41);
    if(((p_41 != NULL) && (p_41 != t)))
      _fail(t);
    else
      p_41 = t;
    t = not_null(m_41);
    {
      ATerm r_41 = NULL;
      ATerm x_41 (ATerm t)
      {
        t = not_null(r_41);
        if(((q_41 != NULL) && (q_41 != t)))
          _fail(t);
        else
          q_41 = t;
        t = not_null(r_41);
        return(t);
      }
      t = SSLgetAnnotations(not_null(o_41));
      if(((r_41 != NULL) && (r_41 != t)))
        _fail(t);
      else
        r_41 = t;
      t = x_41(t);
      t = not_null(p_41);
      t = t_66(t);
      if(((s_41 != NULL) && (s_41 != t)))
        _fail(t);
      else
        s_41 = t;
      t = y_41(t);
    }
    return(t);
  }
  if(((m_41 != NULL) && (m_41 != t)))
    _fail(t);
  else
    m_41 = t;
  t = not_null(m_41);
  if(match_cons(t, sym_Not_1))
    {
      n_41 = ATgetArgument(t, 0);
      t = w_41(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Fail_0_0 (ATerm t)
{
  ATerm e_42 = NULL;
  ATerm o_42 (ATerm t)
  {
    ATerm f_42 = NULL,g_42 = NULL,j_42 = NULL;
    t = not_null(e_42);
    if(((f_42 != NULL) && (f_42 != t)))
      _fail(t);
    else
      f_42 = t;
    t = not_null(e_42);
    {
      ATerm c_5;
      c_5 = t;
      {
        ATerm i_42 = NULL;
        ATerm p_42 (ATerm t)
        {
          t = not_null(i_42);
          if(((g_42 != NULL) && (g_42 != t)))
            _fail(t);
          else
            g_42 = t;
          t = not_null(i_42);
          return(t);
        }
        t = SSLgetAnnotations(not_null(f_42));
        if(((i_42 != NULL) && (i_42 != t)))
          _fail(t);
        else
          i_42 = t;
        t = p_42(t);
      }
      t = c_5;
      {
        ATerm k_42 = NULL;
        ATerm q_42 (ATerm t)
        {
          t = not_null(k_42);
          if(((j_42 != NULL) && (j_42 != t)))
            _fail(t);
          else
            j_42 = t;
          t = not_null(k_42);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(g_42));
        if(((k_42 != NULL) && (k_42 != t)))
          _fail(t);
        else
          k_42 = t;
        t = q_42(t);
        t = not_null(j_42);
      }
    }
    return(t);
  }
  if(((e_42 != NULL) && (e_42 != t)))
    _fail(t);
  else
    e_42 = t;
  t = not_null(e_42);
  if(match_cons(t, sym_Fail_0))
    {
      t = o_42(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Id_0_0 (ATerm t)
{
  ATerm v_42 = NULL;
  ATerm b_43 (ATerm t)
  {
    ATerm w_42 = NULL,x_42 = NULL,z_42 = NULL;
    t = not_null(v_42);
    if(((w_42 != NULL) && (w_42 != t)))
      _fail(t);
    else
      w_42 = t;
    t = not_null(v_42);
    {
      ATerm d_5;
      d_5 = t;
      {
        ATerm y_42 = NULL;
        ATerm c_43 (ATerm t)
        {
          t = not_null(y_42);
          if(((x_42 != NULL) && (x_42 != t)))
            _fail(t);
          else
            x_42 = t;
          t = not_null(y_42);
          return(t);
        }
        t = SSLgetAnnotations(not_null(w_42));
        if(((y_42 != NULL) && (y_42 != t)))
          _fail(t);
        else
          y_42 = t;
        t = c_43(t);
      }
      t = d_5;
      {
        ATerm a_43 = NULL;
        ATerm d_43 (ATerm t)
        {
          t = not_null(a_43);
          if(((z_42 != NULL) && (z_42 != t)))
            _fail(t);
          else
            z_42 = t;
          t = not_null(a_43);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(x_42));
        if(((a_43 != NULL) && (a_43 != t)))
          _fail(t);
        else
          a_43 = t;
        t = d_43(t);
        t = not_null(z_42);
      }
    }
    return(t);
  }
  if(((v_42 != NULL) && (v_42 != t)))
    _fail(t);
  else
    v_42 = t;
  t = not_null(v_42);
  if(match_cons(t, sym_Id_0))
    {
      t = b_43(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm e_5 = t;
  int f_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0_0(t);
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
            t = Fail_0_0(t);
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
                  t = Not_1_0(strategy_expression_0_0, t);
                  ;
                  LocalPopChoice(j_5);
                }
              else
                {
                  t = i_5;
                  {
                    ATerm k_5 = t;
                    int l_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1_0(strategy_expression_0_0, t);
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
                              t = Seq_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
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
                                    t = Choice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
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
                                          t = LChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                          ;
                                          LocalPopChoice(r_5);
                                        }
                                      else
                                        {
                                          t = q_5;
                                          {
                                            ATerm s_5 = t;
                                            int t_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3_0(strategy_expression_0_0, strategy_expression_0_0, strategy_expression_0_0, t);
                                                ;
                                                LocalPopChoice(t_5);
                                              }
                                            else
                                              {
                                                t = s_5;
                                                {
                                                  ATerm u_5 = t;
                                                  int v_5 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                      ;
                                                      LocalPopChoice(v_5);
                                                    }
                                                  else
                                                    {
                                                      t = u_5;
                                                      {
                                                        ATerm w_5 = t;
                                                        int x_5 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                            ;
                                                            LocalPopChoice(x_5);
                                                          }
                                                        else
                                                          {
                                                            t = w_5;
                                                            {
                                                              ATerm y_5 = t;
                                                              int z_5 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm o_0 (ATerm t)
                                                                  {
                                                                    ATerm r_0 (ATerm t)
                                                                    {
                                                                      ATerm a_6 = t;
                                                                      int b_6 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = is_string_0_0(t);
                                                                          ;
                                                                          LocalPopChoice(b_6);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = a_6;
                                                                          t = Mod_2_0(is_string_0_0, is_string_0_0, t);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = SVar_1_0(r_0, t);
                                                                    return(t);
                                                                  }
                                                                  ATerm p_0 (ATerm t)
                                                                  {
                                                                    t = list_1_0(strategy_expression_0_0, t);
                                                                    return(t);
                                                                  }
                                                                  ATerm q_0 (ATerm t)
                                                                  {
                                                                    t = list_1_0(term_expression_0_0, t);
                                                                    return(t);
                                                                  }
                                                                  t = CallT_3_0(o_0, p_0, q_0, t);
                                                                  ;
                                                                  LocalPopChoice(z_5);
                                                                }
                                                              else
                                                                {
                                                                  t = y_5;
                                                                  {
                                                                    ATerm c_6 = t;
                                                                    int d_6 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2_0(is_string_0_0, strategy_expression_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(d_6);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_6;
                                                                        {
                                                                          ATerm e_6 = t;
                                                                          int f_6 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2_0(is_int_0_0, strategy_expression_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(f_6);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = e_6;
                                                                              {
                                                                                ATerm g_6 = t;
                                                                                int h_6 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm s_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1_0(strategy_expression_0_0, t);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2_0(is_string_0_0, s_0, t);
                                                                                    ;
                                                                                    LocalPopChoice(h_6);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = g_6;
                                                                                    {
                                                                                      ATerm i_6 = t;
                                                                                      int j_6 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1_0(strategy_expression_0_0, t);
                                                                                          ;
                                                                                          LocalPopChoice(j_6);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = i_6;
                                                                                          {
                                                                                            ATerm k_6 = t;
                                                                                            int l_6 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1_0(strategy_expression_0_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(l_6);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = k_6;
                                                                                                {
                                                                                                  ATerm m_6 = t;
                                                                                                  int n_6 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1_0(strategy_expression_0_0, t);
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
                                                                                                            t = Thread_1_0(strategy_expression_0_0, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(p_6);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = o_6;
                                                                                                            {
                                                                                                              ATerm q_6 = t;
                                                                                                              int r_6 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1_0(term_expression_0_0, t);
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
                                                                                                                        t = Build_1_0(term_expression_0_0, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(t_6);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = s_6;
                                                                                                                        {
                                                                                                                          ATerm u_6 = t;
                                                                                                                          int v_6 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm t_0 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1_0(is_string_0_0, t);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2_0(t_0, strategy_expression_0_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(v_6);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = u_6;
                                                                                                                              {
                                                                                                                                ATerm w_6 = t;
                                                                                                                                int x_6 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1_0(strategy_expression_0_0, t);
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
                                                                                                                                          ATerm u_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1_0(strategy_expression_0_0, t);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          ATerm v_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1_0(term_expression_0_0, t);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = PrimT_3_0(is_string_0_0, u_0, v_0, t);
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
                                                                                                                                                ATerm w_0 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm x_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = SDef_3_0(is_string_0_0, Nil_0_0, strategy_expression_0_0, t);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1_0(x_0, t);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Let_2_0(w_0, strategy_expression_0_0, t);
                                                                                                                                                ;
                                                                                                                                                LocalPopChoice(b_7);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = a_7;
                                                                                                                                                {
                                                                                                                                                  ATerm y_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = term_c_7;
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = debug_1_0(y_0, t);
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
ATerm VarDec_2_0 (ATerm f_68 (ATerm), ATerm g_68 (ATerm), ATerm t)
{
  ATerm l_43 = NULL,o_43 = NULL,p_43 = NULL;
  ATerm c_44 (ATerm t)
  {
    ATerm q_43 = NULL,r_43 = NULL,t_43 = NULL,u_43 = NULL,w_43 = NULL;
    ATerm e_44 (ATerm t)
    {
      ATerm x_43 = NULL,y_43 = NULL;
      ATerm f_44 (ATerm t)
      {
        ATerm z_43 = NULL,a_44 = NULL;
        t = not_null(y_43);
        if(((z_43 != NULL) && (z_43 != t)))
          _fail(t);
        else
          z_43 = t;
        t = not_null(y_43);
        {
          ATerm b_44 = NULL;
          ATerm g_44 (ATerm t)
          {
            t = not_null(b_44);
            if(((a_44 != NULL) && (a_44 != t)))
              _fail(t);
            else
              a_44 = t;
            t = not_null(b_44);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(x_43), not_null(z_43)), not_null(u_43));
          if(((b_44 != NULL) && (b_44 != t)))
            _fail(t);
          else
            b_44 = t;
          t = g_44(t);
          t = not_null(a_44);
        }
        return(t);
      }
      t = not_null(w_43);
      if(((x_43 != NULL) && (x_43 != t)))
        _fail(t);
      else
        x_43 = t;
      t = not_null(t_43);
      t = g_68(t);
      if(((y_43 != NULL) && (y_43 != t)))
        _fail(t);
      else
        y_43 = t;
      t = f_44(t);
      return(t);
    }
    t = not_null(l_43);
    if(((q_43 != NULL) && (q_43 != t)))
      _fail(t);
    else
      q_43 = t;
    t = not_null(o_43);
    if(((r_43 != NULL) && (r_43 != t)))
      _fail(t);
    else
      r_43 = t;
    t = not_null(p_43);
    if(((t_43 != NULL) && (t_43 != t)))
      _fail(t);
    else
      t_43 = t;
    t = not_null(l_43);
    {
      ATerm v_43 = NULL;
      ATerm d_44 (ATerm t)
      {
        t = not_null(v_43);
        if(((u_43 != NULL) && (u_43 != t)))
          _fail(t);
        else
          u_43 = t;
        t = not_null(v_43);
        return(t);
      }
      t = SSLgetAnnotations(not_null(q_43));
      if(((v_43 != NULL) && (v_43 != t)))
        _fail(t);
      else
        v_43 = t;
      t = d_44(t);
      t = not_null(r_43);
      t = f_68(t);
      if(((w_43 != NULL) && (w_43 != t)))
        _fail(t);
      else
        w_43 = t;
      t = e_44(t);
    }
    return(t);
  }
  if(((l_43 != NULL) && (l_43 != t)))
    _fail(t);
  else
    l_43 = t;
  t = not_null(l_43);
  if(match_cons(t, sym_VarDec_2))
    {
      o_43 = ATgetArgument(t, 0);
      p_43 = ATgetArgument(t, 1);
      t = c_44(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Mod_2_0 (ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL;
  ATerm c_45 (ATerm t)
  {
    ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,w_44 = NULL;
    ATerm e_45 (ATerm t)
    {
      ATerm x_44 = NULL,y_44 = NULL;
      ATerm f_45 (ATerm t)
      {
        ATerm z_44 = NULL,a_45 = NULL;
        t = not_null(y_44);
        if(((z_44 != NULL) && (z_44 != t)))
          _fail(t);
        else
          z_44 = t;
        t = not_null(y_44);
        {
          ATerm b_45 = NULL;
          ATerm g_45 (ATerm t)
          {
            t = not_null(b_45);
            if(((a_45 != NULL) && (a_45 != t)))
              _fail(t);
            else
              a_45 = t;
            t = not_null(b_45);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Mod_2, not_null(x_44), not_null(z_44)), not_null(u_44));
          if(((b_45 != NULL) && (b_45 != t)))
            _fail(t);
          else
            b_45 = t;
          t = g_45(t);
          t = not_null(a_45);
        }
        return(t);
      }
      t = not_null(w_44);
      if(((x_44 != NULL) && (x_44 != t)))
        _fail(t);
      else
        x_44 = t;
      t = not_null(t_44);
      t = y_67(t);
      if(((y_44 != NULL) && (y_44 != t)))
        _fail(t);
      else
        y_44 = t;
      t = f_45(t);
      return(t);
    }
    t = not_null(o_44);
    if(((r_44 != NULL) && (r_44 != t)))
      _fail(t);
    else
      r_44 = t;
    t = not_null(p_44);
    if(((s_44 != NULL) && (s_44 != t)))
      _fail(t);
    else
      s_44 = t;
    t = not_null(q_44);
    if(((t_44 != NULL) && (t_44 != t)))
      _fail(t);
    else
      t_44 = t;
    t = not_null(o_44);
    {
      ATerm v_44 = NULL;
      ATerm d_45 (ATerm t)
      {
        t = not_null(v_44);
        if(((u_44 != NULL) && (u_44 != t)))
          _fail(t);
        else
          u_44 = t;
        t = not_null(v_44);
        return(t);
      }
      t = SSLgetAnnotations(not_null(r_44));
      if(((v_44 != NULL) && (v_44 != t)))
        _fail(t);
      else
        v_44 = t;
      t = d_45(t);
      t = not_null(s_44);
      t = x_67(t);
      if(((w_44 != NULL) && (w_44 != t)))
        _fail(t);
      else
        w_44 = t;
      t = e_45(t);
    }
    return(t);
  }
  if(((o_44 != NULL) && (o_44 != t)))
    _fail(t);
  else
    o_44 = t;
  t = not_null(o_44);
  if(match_cons(t, sym_Mod_2))
    {
      p_44 = ATgetArgument(t, 0);
      q_44 = ATgetArgument(t, 1);
      t = c_45(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm m_68 (ATerm), ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm t)
{
  ATerm p_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL;
  ATerm r_46 (ATerm t)
  {
    ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,h_46 = NULL;
    ATerm t_46 (ATerm t)
    {
      ATerm i_46 = NULL,j_46 = NULL;
      ATerm u_46 (ATerm t)
      {
        ATerm k_46 = NULL,l_46 = NULL;
        ATerm v_46 (ATerm t)
        {
          ATerm m_46 = NULL,n_46 = NULL;
          ATerm w_46 (ATerm t)
          {
            ATerm o_46 = NULL,p_46 = NULL;
            t = not_null(n_46);
            if(((o_46 != NULL) && (o_46 != t)))
              _fail(t);
            else
              o_46 = t;
            t = not_null(n_46);
            {
              ATerm q_46 = NULL;
              ATerm x_46 (ATerm t)
              {
                t = not_null(q_46);
                if(((p_46 != NULL) && (p_46 != t)))
                  _fail(t);
                else
                  p_46 = t;
                t = not_null(q_46);
                return(t);
              }
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(i_46), not_null(k_46), not_null(m_46), not_null(o_46)), not_null(f_46));
              if(((q_46 != NULL) && (q_46 != t)))
                _fail(t);
              else
                q_46 = t;
              t = x_46(t);
              t = not_null(p_46);
            }
            return(t);
          }
          t = not_null(l_46);
          if(((m_46 != NULL) && (m_46 != t)))
            _fail(t);
          else
            m_46 = t;
          t = not_null(e_46);
          t = p_68(t);
          if(((n_46 != NULL) && (n_46 != t)))
            _fail(t);
          else
            n_46 = t;
          t = w_46(t);
          return(t);
        }
        t = not_null(j_46);
        if(((k_46 != NULL) && (k_46 != t)))
          _fail(t);
        else
          k_46 = t;
        t = not_null(d_46);
        t = o_68(t);
        if(((l_46 != NULL) && (l_46 != t)))
          _fail(t);
        else
          l_46 = t;
        t = v_46(t);
        return(t);
      }
      t = not_null(h_46);
      if(((i_46 != NULL) && (i_46 != t)))
        _fail(t);
      else
        i_46 = t;
      t = not_null(c_46);
      t = n_68(t);
      if(((j_46 != NULL) && (j_46 != t)))
        _fail(t);
      else
        j_46 = t;
      t = u_46(t);
      return(t);
    }
    t = not_null(p_45);
    if(((a_46 != NULL) && (a_46 != t)))
      _fail(t);
    else
      a_46 = t;
    t = not_null(w_45);
    if(((b_46 != NULL) && (b_46 != t)))
      _fail(t);
    else
      b_46 = t;
    t = not_null(x_45);
    if(((c_46 != NULL) && (c_46 != t)))
      _fail(t);
    else
      c_46 = t;
    t = not_null(y_45);
    if(((d_46 != NULL) && (d_46 != t)))
      _fail(t);
    else
      d_46 = t;
    t = not_null(z_45);
    if(((e_46 != NULL) && (e_46 != t)))
      _fail(t);
    else
      e_46 = t;
    t = not_null(p_45);
    {
      ATerm g_46 = NULL;
      ATerm s_46 (ATerm t)
      {
        t = not_null(g_46);
        if(((f_46 != NULL) && (f_46 != t)))
          _fail(t);
        else
          f_46 = t;
        t = not_null(g_46);
        return(t);
      }
      t = SSLgetAnnotations(not_null(a_46));
      if(((g_46 != NULL) && (g_46 != t)))
        _fail(t);
      else
        g_46 = t;
      t = s_46(t);
      t = not_null(b_46);
      t = m_68(t);
      if(((h_46 != NULL) && (h_46 != t)))
        _fail(t);
      else
        h_46 = t;
      t = t_46(t);
    }
    return(t);
  }
  if(((p_45 != NULL) && (p_45 != t)))
    _fail(t);
  else
    p_45 = t;
  t = not_null(p_45);
  if(match_cons(t, sym_SDefT_4))
    {
      w_45 = ATgetArgument(t, 0);
      x_45 = ATgetArgument(t, 1);
      y_45 = ATgetArgument(t, 2);
      z_45 = ATgetArgument(t, 3);
      t = r_46(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm d_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_0 (ATerm t)
      {
        ATerm f_7 = t;
        int g_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_string_0_0(t);
            ;
            LocalPopChoice(g_7);
          }
        else
          {
            t = f_7;
            t = Mod_2_0(is_string_0_0, is_string_0_0, t);
          }
        return(t);
      }
      ATerm a_1 (ATerm t)
      {
        ATerm c_1 (ATerm t)
        {
          t = VarDec_2_0(is_string_0_0, _id, t);
          return(t);
        }
        t = list_1_0(c_1, t);
        return(t);
      }
      ATerm b_1 (ATerm t)
      {
        ATerm d_1 (ATerm t)
        {
          t = VarDec_2_0(is_string_0_0, _id, t);
          return(t);
        }
        t = list_1_0(d_1, t);
        return(t);
      }
      t = SDefT_4_0(z_0, a_1, b_1, strategy_expression_0_0, t);
      ;
      LocalPopChoice(e_7);
    }
  else
    {
      t = d_7;
      {
        ATerm e_1 (ATerm t)
        {
          t = term_h_7;
          return(t);
        }
        t = debug_1_0(e_1, t);
      }
    }
  return(t);
}
ATerm list_1_0 (ATerm b_82 (ATerm), ATerm t)
{
  ATerm y_46 (ATerm t)
  {
    ATerm i_7 = t;
    int j_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(j_7);
      }
    else
      {
        t = i_7;
        t = Cons_2_0(b_82, y_46, t);
      }
    return(t);
  }
  t = y_46(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm l_61 (ATerm), ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL;
  ATerm o_47 (ATerm t)
  {
    ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL,k_47 = NULL;
    ATerm q_47 (ATerm t)
    {
      ATerm l_47 = NULL,m_47 = NULL;
      t = not_null(k_47);
      if(((l_47 != NULL) && (l_47 != t)))
        _fail(t);
      else
        l_47 = t;
      t = not_null(k_47);
      {
        ATerm n_47 = NULL;
        ATerm r_47 (ATerm t)
        {
          t = not_null(n_47);
          if(((m_47 != NULL) && (m_47 != t)))
            _fail(t);
          else
            m_47 = t;
          t = not_null(n_47);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(l_47)), not_null(i_47));
        if(((n_47 != NULL) && (n_47 != t)))
          _fail(t);
        else
          n_47 = t;
        t = r_47(t);
        t = not_null(m_47);
      }
      return(t);
    }
    t = not_null(e_47);
    if(((g_47 != NULL) && (g_47 != t)))
      _fail(t);
    else
      g_47 = t;
    t = not_null(f_47);
    if(((h_47 != NULL) && (h_47 != t)))
      _fail(t);
    else
      h_47 = t;
    t = not_null(e_47);
    {
      ATerm j_47 = NULL;
      ATerm p_47 (ATerm t)
      {
        t = not_null(j_47);
        if(((i_47 != NULL) && (i_47 != t)))
          _fail(t);
        else
          i_47 = t;
        t = not_null(j_47);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_47));
      if(((j_47 != NULL) && (j_47 != t)))
        _fail(t);
      else
        j_47 = t;
      t = p_47(t);
      t = not_null(h_47);
      t = l_61(t);
      if(((k_47 != NULL) && (k_47 != t)))
        _fail(t);
      else
        k_47 = t;
      t = q_47(t);
    }
    return(t);
  }
  if(((e_47 != NULL) && (e_47 != t)))
    _fail(t);
  else
    e_47 = t;
  t = not_null(e_47);
  if(match_cons(t, sym_Strategies_1))
    {
      f_47 = ATgetArgument(t, 0);
      t = o_47(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1_0 (ATerm q_61 (ATerm), ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL;
  ATerm h_48 (ATerm t)
  {
    ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL,d_48 = NULL;
    ATerm j_48 (ATerm t)
    {
      ATerm e_48 = NULL,f_48 = NULL;
      t = not_null(d_48);
      if(((e_48 != NULL) && (e_48 != t)))
        _fail(t);
      else
        e_48 = t;
      t = not_null(d_48);
      {
        ATerm g_48 = NULL;
        ATerm k_48 (ATerm t)
        {
          t = not_null(g_48);
          if(((f_48 != NULL) && (f_48 != t)))
            _fail(t);
          else
            f_48 = t;
          t = not_null(g_48);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(e_48)), not_null(b_48));
        if(((g_48 != NULL) && (g_48 != t)))
          _fail(t);
        else
          g_48 = t;
        t = k_48(t);
        t = not_null(f_48);
      }
      return(t);
    }
    t = not_null(x_47);
    if(((z_47 != NULL) && (z_47 != t)))
      _fail(t);
    else
      z_47 = t;
    t = not_null(y_47);
    if(((a_48 != NULL) && (a_48 != t)))
      _fail(t);
    else
      a_48 = t;
    t = not_null(x_47);
    {
      ATerm c_48 = NULL;
      ATerm i_48 (ATerm t)
      {
        t = not_null(c_48);
        if(((b_48 != NULL) && (b_48 != t)))
          _fail(t);
        else
          b_48 = t;
        t = not_null(c_48);
        return(t);
      }
      t = SSLgetAnnotations(not_null(z_47));
      if(((c_48 != NULL) && (c_48 != t)))
        _fail(t);
      else
        c_48 = t;
      t = i_48(t);
      t = not_null(a_48);
      t = q_61(t);
      if(((d_48 != NULL) && (d_48 != t)))
        _fail(t);
      else
        d_48 = t;
      t = j_48(t);
    }
    return(t);
  }
  if(((x_47 != NULL) && (x_47 != t)))
    _fail(t);
  else
    x_47 = t;
  t = not_null(x_47);
  if(match_cons(t, sym_Specification_1))
    {
      y_47 = ATgetArgument(t, 0);
      t = h_48(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stratego_specification_0_0 (ATerm t)
{
  ATerm k_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_1 (ATerm t)
      {
        ATerm g_1 (ATerm t)
        {
          ATerm h_1 (ATerm t)
          {
            ATerm i_1 (ATerm t)
            {
              t = list_1_0(strategy_definition_0_0, t);
              return(t);
            }
            t = Strategies_1_0(i_1, t);
            return(t);
          }
          t = Cons_2_0(h_1, Nil_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, g_1, t);
        return(t);
      }
      t = Specification_1_0(f_1, t);
      ;
      LocalPopChoice(l_7);
    }
  else
    {
      t = k_7;
      {
        ATerm j_1 (ATerm t)
        {
          t = term_m_7;
          return(t);
        }
        t = debug_1_0(j_1, t);
      }
    }
  return(t);
}
ATerm _2_0 (ATerm w_59 (ATerm), ATerm x_59 (ATerm), ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL;
  ATerm o_49 (ATerm t)
  {
    ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,d_49 = NULL;
    ATerm q_49 (ATerm t)
    {
      ATerm j_49 = NULL,k_49 = NULL;
      ATerm r_49 (ATerm t)
      {
        ATerm l_49 = NULL,m_49 = NULL;
        t = not_null(k_49);
        if(((l_49 != NULL) && (l_49 != t)))
          _fail(t);
        else
          l_49 = t;
        t = not_null(k_49);
        {
          ATerm n_49 = NULL;
          ATerm s_49 (ATerm t)
          {
            t = not_null(n_49);
            if(((m_49 != NULL) && (m_49 != t)))
              _fail(t);
            else
              m_49 = t;
            t = not_null(n_49);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(j_49), not_null(l_49)), not_null(x_48));
          if(((n_49 != NULL) && (n_49 != t)))
            _fail(t);
          else
            n_49 = t;
          t = s_49(t);
          t = not_null(m_49);
        }
        return(t);
      }
      t = not_null(d_49);
      if(((j_49 != NULL) && (j_49 != t)))
        _fail(t);
      else
        j_49 = t;
      t = not_null(w_48);
      t = x_59(t);
      if(((k_49 != NULL) && (k_49 != t)))
        _fail(t);
      else
        k_49 = t;
      t = r_49(t);
      return(t);
    }
    t = not_null(r_48);
    if(((u_48 != NULL) && (u_48 != t)))
      _fail(t);
    else
      u_48 = t;
    t = not_null(s_48);
    if(((v_48 != NULL) && (v_48 != t)))
      _fail(t);
    else
      v_48 = t;
    t = not_null(t_48);
    if(((w_48 != NULL) && (w_48 != t)))
      _fail(t);
    else
      w_48 = t;
    t = not_null(r_48);
    {
      ATerm c_49 = NULL;
      ATerm p_49 (ATerm t)
      {
        t = not_null(c_49);
        if(((x_48 != NULL) && (x_48 != t)))
          _fail(t);
        else
          x_48 = t;
        t = not_null(c_49);
        return(t);
      }
      t = SSLgetAnnotations(not_null(u_48));
      if(((c_49 != NULL) && (c_49 != t)))
        _fail(t);
      else
        c_49 = t;
      t = p_49(t);
      t = not_null(v_48);
      t = w_59(t);
      if(((d_49 != NULL) && (d_49 != t)))
        _fail(t);
      else
        d_49 = t;
      t = q_49(t);
    }
    return(t);
  }
  if(((r_48 != NULL) && (r_48 != t)))
    _fail(t);
  else
    r_48 = t;
  t = not_null(r_48);
  if(match_cons(t, sym__2))
    {
      s_48 = ATgetArgument(t, 0);
      t_48 = ATgetArgument(t, 1);
      t = o_49(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_7;
  n_7 = t;
  {
    ATerm u_49 = NULL;
    ATerm v_49 = NULL;
    ATerm w_49 (ATerm t)
    {
      t = not_null(v_49);
      if(((u_49 != NULL) && (u_49 != t)))
        _fail(t);
      else
        u_49 = t;
      t = not_null(v_49);
      return(t);
    }
    t = term_o_7;
    t = whoami_0_0(t);
    if(((v_49 != NULL) && (v_49 != t)))
      _fail(t);
    else
      v_49 = t;
    t = w_49(t);
    t = (ATerm) ATmakeAppl(sym__2, term_p_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_7), not_null(u_49)), term_q_7));
    t = printnl_0_0(t);
    t = term_s_7;
    t = exit_0_0(t);
  }
  t = n_7;
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL;
  ATerm e_50 (ATerm t)
  {
    ATerm c_50 = NULL,d_50 = NULL;
    t = not_null(a_50);
    if(((c_50 != NULL) && (c_50 != t)))
      _fail(t);
    else
      c_50 = t;
    t = not_null(b_50);
    if(((d_50 != NULL) && (d_50 != t)))
      _fail(t);
    else
      d_50 = t;
    t = not_null(z_49);
    {
      ATerm t_7;
      t_7 = t;
      t = SSL_printnl(not_null(c_50), not_null(d_50));
      t = t_7;
    }
    return(t);
  }
  if(((z_49 != NULL) && (z_49 != t)))
    _fail(t);
  else
    z_49 = t;
  t = not_null(z_49);
  if(match_cons(t, sym__2))
    {
      a_50 = ATgetArgument(t, 0);
      b_50 = ATgetArgument(t, 1);
      t = e_50(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm g_50 = NULL;
  ATerm k_50 (ATerm t)
  {
    ATerm j_50 = NULL;
    t = not_null(g_50);
    if(((j_50 != NULL) && (j_50 != t)))
      _fail(t);
    else
      j_50 = t;
    t = not_null(g_50);
    t = SSL_implode_string(not_null(j_50));
    return(t);
  }
  if(((g_50 != NULL) && (g_50 != t)))
    _fail(t);
  else
    g_50 = t;
  t = k_50(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_7 = t;
  int v_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(v_7);
    }
  else
    {
      t = u_7;
      {
        ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
        ATerm y_50 (ATerm t)
        {
          ATerm v_50 = NULL,w_50 = NULL;
          t = not_null(o_50);
          if(((v_50 != NULL) && (v_50 != t)))
            _fail(t);
          else
            v_50 = t;
          t = not_null(p_50);
          if(((w_50 != NULL) && (w_50 != t)))
            _fail(t);
          else
            w_50 = t;
          t = not_null(v_50);
          {
            ATerm k_1 (ATerm t)
            {
              t = not_null(w_50);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(k_1, t);
          }
          return(t);
        }
        if(((n_50 != NULL) && (n_50 != t)))
          _fail(t);
        else
          n_50 = t;
        t = not_null(n_50);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_50 = ATgetFirst((ATermList) t);
            p_50 = (ATerm) ATgetNext((ATermList) t);
            t = y_50(t);
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
  ATerm e_51 = NULL;
  ATerm n_51 (ATerm t)
  {
    ATerm f_51 = NULL,g_51 = NULL;
    t = not_null(e_51);
    if(((f_51 != NULL) && (f_51 != t)))
      _fail(t);
    else
      f_51 = t;
    t = not_null(e_51);
    {
      ATerm h_51 = NULL;
      ATerm o_51 (ATerm t)
      {
        ATerm i_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL;
        ATerm p_51 (ATerm t)
        {
          t = not_null(m_51);
          if(((g_51 != NULL) && (g_51 != t)))
            _fail(t);
          else
            g_51 = t;
          t = not_null(k_51);
          return(t);
        }
        t = not_null(h_51);
        if(((i_51 != NULL) && (i_51 != t)))
          _fail(t);
        else
          i_51 = t;
        t = not_null(h_51);
        t = SSL_explode_term(not_null(i_51));
        if(((k_51 != NULL) && (k_51 != t)))
          _fail(t);
        else
          k_51 = t;
        t = not_null(k_51);
        if(match_cons(t, sym__2))
          {
            l_51 = ATgetArgument(t, 0);
            m_51 = ATgetArgument(t, 1);
            t = not_null(l_51);
            if(match_string(t, ""))
              {
                t = p_51(t);
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
      t = not_null(f_51);
      if(((h_51 != NULL) && (h_51 != t)))
        _fail(t);
      else
        h_51 = t;
      t = o_51(t);
      t = not_null(g_51);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((e_51 != NULL) && (e_51 != t)))
    _fail(t);
  else
    e_51 = t;
  t = n_51(t);
  return(t);
}
ATerm at_end_1_0 (ATerm o_82 (ATerm), ATerm t)
{
  ATerm q_51 (ATerm t)
  {
    ATerm w_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, q_51, t);
        ;
        LocalPopChoice(x_7);
      }
    else
      {
        t = w_7;
        t = Nil_0_0(t);
        t = o_82(t);
      }
    return(t);
  }
  t = q_51(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL;
  ATerm y_51 (ATerm t)
  {
    ATerm w_51 = NULL,x_51 = NULL;
    t = not_null(u_51);
    if(((x_51 != NULL) && (x_51 != t)))
      _fail(t);
    else
      x_51 = t;
    t = not_null(v_51);
    if(((w_51 != NULL) && (w_51 != t)))
      _fail(t);
    else
      w_51 = t;
    t = not_null(x_51);
    {
      ATerm l_1 (ATerm t)
      {
        t = not_null(w_51);
        return(t);
      }
      t = at_end_1_0(l_1, t);
    }
    return(t);
  }
  if(((t_51 != NULL) && (t_51 != t)))
    _fail(t);
  else
    t_51 = t;
  t = not_null(t_51);
  if(match_cons(t, sym__2))
    {
      u_51 = ATgetArgument(t, 0);
      v_51 = ATgetArgument(t, 1);
      t = y_51(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(z_7);
    }
  else
    {
      t = y_7;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm g_52 = NULL;
  ATerm j_52 (ATerm t)
  {
    ATerm h_52 = NULL;
    t = not_null(g_52);
    if(((h_52 != NULL) && (h_52 != t)))
      _fail(t);
    else
      h_52 = t;
    t = not_null(g_52);
    t = SSL_explode_string(not_null(h_52));
    return(t);
  }
  if(((g_52 != NULL) && (g_52 != t)))
    _fail(t);
  else
    g_52 = t;
  t = j_52(t);
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
  ATerm a_8 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
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
            ATerm m_1 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(m_1, t);
            ;
            LocalPopChoice(d_8);
          }
        else
          {
            t = c_8;
            {
              ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL;
              ATerm b_53 (ATerm t)
              {
                ATerm t_52 = NULL;
                t = not_null(r_52);
                if(((t_52 != NULL) && (t_52 != t)))
                  _fail(t);
                else
                  t_52 = t;
                t = not_null(t_52);
                return(t);
              }
              ATerm c_53 (ATerm t)
              {
                ATerm u_52 = NULL;
                t = not_null(r_52);
                if(((u_52 != NULL) && (u_52 != t)))
                  _fail(t);
                else
                  u_52 = t;
                t = not_null(u_52);
                {
                  ATerm e_8 = t;
                  int f_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(f_8);
                    }
                  else
                    {
                      t = e_8;
                      {
                        ATerm n_1 (ATerm t)
                        {
                          t = term_g_8;
                          return(t);
                        }
                        t = debug_1_0(n_1, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm d_53 (ATerm t)
              {
                ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL,z_52 = NULL;
                t = not_null(r_52);
                if(((v_52 != NULL) && (v_52 != t)))
                  _fail(t);
                else
                  v_52 = t;
                t = not_null(s_52);
                if(((w_52 != NULL) && (w_52 != t)))
                  _fail(t);
                else
                  w_52 = t;
                t = not_null(q_52);
                {
                  ATerm h_8;
                  h_8 = t;
                  {
                    ATerm y_52 = NULL;
                    ATerm e_53 (ATerm t)
                    {
                      t = not_null(y_52);
                      if(((x_52 != NULL) && (x_52 != t)))
                        _fail(t);
                      else
                        x_52 = t;
                      t = not_null(y_52);
                      return(t);
                    }
                    t = not_null(v_52);
                    t = eval_config_0_0(t);
                    if(((y_52 != NULL) && (y_52 != t)))
                      _fail(t);
                    else
                      y_52 = t;
                    t = e_53(t);
                  }
                  t = h_8;
                  {
                    ATerm a_53 = NULL;
                    ATerm f_53 (ATerm t)
                    {
                      t = not_null(a_53);
                      if(((z_52 != NULL) && (z_52 != t)))
                        _fail(t);
                      else
                        z_52 = t;
                      t = not_null(a_53);
                      return(t);
                    }
                    t = not_null(w_52);
                    t = eval_config_0_0(t);
                    if(((a_53 != NULL) && (a_53 != t)))
                      _fail(t);
                    else
                      a_53 = t;
                    t = f_53(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(x_52), not_null(z_52));
                    t = conc_strings_0_0(t);
                  }
                }
                return(t);
              }
              if(((q_52 != NULL) && (q_52 != t)))
                _fail(t);
              else
                q_52 = t;
              t = not_null(q_52);
              if(match_cons(t, sym_Path_1))
                {
                  r_52 = ATgetArgument(t, 0);
                  t = b_53(t);
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      r_52 = ATgetArgument(t, 0);
                      t = c_53(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Prefix_2))
                        {
                          r_52 = ATgetArgument(t, 0);
                          s_52 = ATgetArgument(t, 1);
                          t = d_53(t);
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
  ATerm i_53 = NULL;
  ATerm m_53 (ATerm t)
  {
    ATerm j_53 = NULL;
    t = not_null(i_53);
    if(((j_53 != NULL) && (j_53 != t)))
      _fail(t);
    else
      j_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_i_8, not_null(j_53));
    t = table_get_0_0(t);
    {
      ATerm o_1 (ATerm t)
      {
        t = eval_config_0_0(t);
        {
          ATerm j_8;
          j_8 = t;
          {
            ATerm k_53 = NULL;
            ATerm l_53 = NULL;
            ATerm n_53 (ATerm t)
            {
              t = not_null(l_53);
              if(((k_53 != NULL) && (k_53 != t)))
                _fail(t);
              else
                k_53 = t;
              t = not_null(l_53);
              return(t);
            }
            if(((l_53 != NULL) && (l_53 != t)))
              _fail(t);
            else
              l_53 = t;
            t = n_53(t);
            t = (ATerm) ATmakeAppl(sym__3, term_i_8, not_null(j_53), not_null(k_53));
            t = table_put_0_0(t);
          }
          t = j_8;
        }
        return(t);
      }
      t = try_1_0(o_1, t);
    }
    return(t);
  }
  if(((i_53 != NULL) && (i_53 != t)))
    _fail(t);
  else
    i_53 = t;
  t = m_53(t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_95 (ATerm), ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm k_8;
    k_8 = t;
    {
      ATerm p_53 = NULL;
      ATerm q_53 = NULL;
      ATerm r_53 (ATerm t)
      {
        t = not_null(q_53);
        if(((p_53 != NULL) && (p_53 != t)))
          _fail(t);
        else
          p_53 = t;
        t = not_null(q_53);
        return(t);
      }
      t = term_l_8;
      t = get_config_0_0(t);
      if(((q_53 != NULL) && (q_53 != t)))
        _fail(t);
      else
        q_53 = t;
      t = r_53(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_53), term_m_8);
      t = geq_0_0(t);
    }
    t = k_8;
    t = o_95(t);
    return(t);
  }
  t = try_1_0(p_1, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL;
  ATerm e_54 (ATerm t)
  {
    ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL;
    t = not_null(x_53);
    if(((a_54 != NULL) && (a_54 != t)))
      _fail(t);
    else
      a_54 = t;
    t = not_null(z_53);
    if(((b_54 != NULL) && (b_54 != t)))
      _fail(t);
    else
      b_54 = t;
    t = not_null(w_53);
    t = SSL_fputc(not_null(a_54), not_null(b_54));
    {
      ATerm d_54 = NULL;
      ATerm f_54 (ATerm t)
      {
        t = not_null(d_54);
        if(((c_54 != NULL) && (c_54 != t)))
          _fail(t);
        else
          c_54 = t;
        t = not_null(d_54);
        return(t);
      }
      if(((d_54 != NULL) && (d_54 != t)))
        _fail(t);
      else
        d_54 = t;
      t = f_54(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_54));
    }
    return(t);
  }
  if(((w_53 != NULL) && (w_53 != t)))
    _fail(t);
  else
    w_53 = t;
  t = not_null(w_53);
  if(match_cons(t, sym__2))
    {
      x_53 = ATgetArgument(t, 0);
      y_53 = ATgetArgument(t, 1);
      t = not_null(y_53);
      if(match_cons(t, sym_Stream_1))
        {
          z_53 = ATgetArgument(t, 0);
          t = e_54(t);
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
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL;
  ATerm x_54 (ATerm t)
  {
    ATerm o_54 = NULL,u_54 = NULL,v_54 = NULL;
    t = not_null(m_54);
    if(((o_54 != NULL) && (o_54 != t)))
      _fail(t);
    else
      o_54 = t;
    t = not_null(n_54);
    if(((u_54 != NULL) && (u_54 != t)))
      _fail(t);
    else
      u_54 = t;
    t = not_null(k_54);
    t = SSL_write_term_to_stream_text(not_null(o_54), not_null(u_54));
    {
      ATerm w_54 = NULL;
      ATerm y_54 (ATerm t)
      {
        t = not_null(w_54);
        if(((v_54 != NULL) && (v_54 != t)))
          _fail(t);
        else
          v_54 = t;
        t = not_null(w_54);
        return(t);
      }
      if(((w_54 != NULL) && (w_54 != t)))
        _fail(t);
      else
        w_54 = t;
      t = y_54(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_54));
    }
    return(t);
  }
  if(((k_54 != NULL) && (k_54 != t)))
    _fail(t);
  else
    k_54 = t;
  t = not_null(k_54);
  if(match_cons(t, sym__2))
    {
      l_54 = ATgetArgument(t, 0);
      n_54 = ATgetArgument(t, 1);
      t = not_null(l_54);
      if(match_cons(t, sym_Stream_1))
        {
          m_54 = ATgetArgument(t, 0);
          t = x_54(t);
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
  ATerm q_1 (ATerm t)
  {
    ATerm a_55 = NULL;
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm b_55 = NULL;
      ATerm j_55 (ATerm t)
      {
        t = not_null(b_55);
        if(((a_55 != NULL) && (a_55 != t)))
          _fail(t);
        else
          a_55 = t;
        t = not_null(b_55);
        return(t);
      }
      if(((b_55 != NULL) && (b_55 != t)))
        _fail(t);
      else
        b_55 = t;
      t = j_55(t);
      t = (ATerm) ATmakeAppl(sym__2, term_n_8, not_null(a_55));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(q_1, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL;
  ATerm w_55 (ATerm t)
  {
    ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL;
    t = not_null(q_55);
    if(((s_55 != NULL) && (s_55 != t)))
      _fail(t);
    else
      s_55 = t;
    t = not_null(r_55);
    if(((t_55 != NULL) && (t_55 != t)))
      _fail(t);
    else
      t_55 = t;
    t = not_null(o_55);
    t = SSL_write_term_to_stream_baf(not_null(s_55), not_null(t_55));
    {
      ATerm v_55 = NULL;
      ATerm x_55 (ATerm t)
      {
        t = not_null(v_55);
        if(((u_55 != NULL) && (u_55 != t)))
          _fail(t);
        else
          u_55 = t;
        t = not_null(v_55);
        return(t);
      }
      if(((v_55 != NULL) && (v_55 != t)))
        _fail(t);
      else
        v_55 = t;
      t = x_55(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_55));
    }
    return(t);
  }
  if(((o_55 != NULL) && (o_55 != t)))
    _fail(t);
  else
    o_55 = t;
  t = not_null(o_55);
  if(match_cons(t, sym__2))
    {
      p_55 = ATgetArgument(t, 0);
      r_55 = ATgetArgument(t, 1);
      t = not_null(p_55);
      if(match_cons(t, sym_Stream_1))
        {
          q_55 = ATgetArgument(t, 0);
          t = w_55(t);
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
ATerm WriteToFile_1_0 (ATerm k_94 (ATerm), ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL;
  ATerm l_56 (ATerm t)
  {
    ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL,j_56 = NULL;
    t = not_null(d_56);
    if(((f_56 != NULL) && (f_56 != t)))
      _fail(t);
    else
      f_56 = t;
    t = not_null(e_56);
    if(((g_56 != NULL) && (g_56 != t)))
      _fail(t);
    else
      g_56 = t;
    t = not_null(f_56);
    {
      ATerm i_56 = NULL;
      ATerm m_56 (ATerm t)
      {
        t = not_null(i_56);
        if(((h_56 != NULL) && (h_56 != t)))
          _fail(t);
        else
          h_56 = t;
        t = not_null(i_56);
        return(t);
      }
      if(((i_56 != NULL) && (i_56 != t)))
        _fail(t);
      else
        i_56 = t;
      t = m_56(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_56), term_o_8);
      t = open_stream_0_0(t);
      {
        ATerm k_56 = NULL;
        ATerm n_56 (ATerm t)
        {
          t = not_null(k_56);
          if(((j_56 != NULL) && (j_56 != t)))
            _fail(t);
          else
            j_56 = t;
          t = not_null(k_56);
          return(t);
        }
        if(((k_56 != NULL) && (k_56 != t)))
          _fail(t);
        else
          k_56 = t;
        t = n_56(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_56), not_null(g_56));
        t = k_94(t);
        t = fclose_0_0(t);
        t = not_null(g_56);
      }
    }
    return(t);
  }
  if(((c_56 != NULL) && (c_56 != t)))
    _fail(t);
  else
    c_56 = t;
  t = not_null(c_56);
  if(match_cons(t, sym__2))
    {
      d_56 = ATgetArgument(t, 0);
      e_56 = ATgetArgument(t, 1);
      t = l_56(t);
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
  ATerm z_56 = NULL;
  ATerm p_8;
  p_8 = t;
  {
    ATerm r_1 (ATerm t)
    {
      ATerm q_8 = t;
      int r_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_1 (ATerm t)
          {
            ATerm a_57 = NULL,b_57 = NULL;
            ATerm e_57 (ATerm t)
            {
              t = not_null(b_57);
              if(((z_56 != NULL) && (z_56 != t)))
                _fail(t);
              else
                z_56 = t;
              t = not_null(a_57);
              return(t);
            }
            if(((a_57 != NULL) && (a_57 != t)))
              _fail(t);
            else
              a_57 = t;
            t = not_null(a_57);
            if(match_cons(t, sym_Output_1))
              {
                b_57 = ATgetArgument(t, 0);
                t = e_57(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1_0(s_1, t);
          ;
          LocalPopChoice(r_8);
        }
      else
        {
          t = q_8;
          {
            ATerm c_57 = NULL;
            ATerm f_57 (ATerm t)
            {
              t = not_null(c_57);
              if(((z_56 != NULL) && (z_56 != t)))
                _fail(t);
              else
                z_56 = t;
              t = not_null(c_57);
              return(t);
            }
            t = term_s_8;
            if(((c_57 != NULL) && (c_57 != t)))
              _fail(t);
            else
              c_57 = t;
            t = f_57(t);
          }
        }
      return(t);
    }
    t = _2_0(r_1, _id, t);
  }
  t = p_8;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm u_1 (ATerm t)
      {
        t = not_null(z_56);
        return(t);
      }
      t = split_2_0(u_1, _id, t);
      return(t);
    }
    t = _2_0(_id, t_1, t);
    {
      ATerm t_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_1 (ATerm t)
          {
            ATerm w_1 (ATerm t)
            {
              ATerm d_57 = NULL;
              if(((d_57 != NULL) && (d_57 != t)))
                _fail(t);
              else
                d_57 = t;
              t = not_null(d_57);
              if(match_cons(t, sym_Binary_0))
                {
                  t = not_null(d_57);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1_0(w_1, t);
            return(t);
          }
          t = _2_0(v_1, WriteToBinaryFile_0_0, t);
          ;
          LocalPopChoice(u_8);
        }
      else
        {
          t = t_8;
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
ATerm apply_strategy_1_0 (ATerm m_97 (ATerm), ATerm t)
{
  ATerm j_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL;
  ATerm r_57 (ATerm t)
  {
    ATerm o_57 = NULL,p_57 = NULL;
    t = not_null(m_57);
    if(((o_57 != NULL) && (o_57 != t)))
      _fail(t);
    else
      o_57 = t;
    t = not_null(n_57);
    if(((p_57 != NULL) && (p_57 != t)))
      _fail(t);
    else
      p_57 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_57)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(j_57))), not_null(p_57));
    return(t);
  }
  ATerm v_8;
  v_8 = t;
  t = dtime_0_0(t);
  t = v_8;
  t = m_97(t);
  {
    ATerm w_8;
    w_8 = t;
    {
      ATerm k_57 = NULL;
      ATerm q_57 (ATerm t)
      {
        t = not_null(k_57);
        if(((j_57 != NULL) && (j_57 != t)))
          _fail(t);
        else
          j_57 = t;
        t = not_null(k_57);
        return(t);
      }
      t = dtime_0_0(t);
      if(((k_57 != NULL) && (k_57 != t)))
        _fail(t);
      else
        k_57 = t;
      t = q_57(t);
    }
    t = w_8;
    if(((l_57 != NULL) && (l_57 != t)))
      _fail(t);
    else
      l_57 = t;
    t = not_null(l_57);
    if(match_cons(t, sym__2))
      {
        m_57 = ATgetArgument(t, 0);
        n_57 = ATgetArgument(t, 1);
        t = r_57(t);
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
  ATerm v_57 = NULL,w_57 = NULL;
  ATerm b_58 (ATerm t)
  {
    ATerm x_57 = NULL;
    t = not_null(v_57);
    if(((x_57 != NULL) && (x_57 != t)))
      _fail(t);
    else
      x_57 = t;
    t = not_null(w_57);
    t = SSL_fclose(not_null(x_57));
    return(t);
  }
  ATerm c_58 (ATerm t)
  {
    ATerm a_58 = NULL;
    t = not_null(w_57);
    if(((a_58 != NULL) && (a_58 != t)))
      _fail(t);
    else
      a_58 = t;
    t = not_null(w_57);
    t = SSL_fclose(not_null(a_58));
    return(t);
  }
  if(((w_57 != NULL) && (w_57 != t)))
    _fail(t);
  else
    w_57 = t;
  t = not_null(w_57);
  if(match_cons(t, sym_Stream_1))
    {
      v_57 = ATgetArgument(t, 0);
      {
        ATerm x_8 = t;
        int y_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_58(t);
            ;
            LocalPopChoice(y_8);
          }
        else
          {
            t = x_8;
            t = c_58(t);
          }
      }
    }
  else
    {
      t = c_58(t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL;
  ATerm i_58 (ATerm t)
  {
    ATerm h_58 = NULL;
    t = not_null(g_58);
    if(((h_58 != NULL) && (h_58 != t)))
      _fail(t);
    else
      h_58 = t;
    t = not_null(f_58);
    t = SSL_read_term_from_stream(not_null(h_58));
    return(t);
  }
  if(((f_58 != NULL) && (f_58 != t)))
    _fail(t);
  else
    f_58 = t;
  t = not_null(f_58);
  if(match_cons(t, sym_Stream_1))
    {
      g_58 = ATgetArgument(t, 0);
      t = i_58(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm w_93 (ATerm), ATerm t)
{
  ATerm b_9;
  b_9 = t;
  {
    ATerm l_58 = NULL,n_58 = NULL;
    ATerm c_9;
    c_9 = t;
    {
      ATerm m_58 = NULL;
      ATerm p_58 (ATerm t)
      {
        t = not_null(m_58);
        if(((l_58 != NULL) && (l_58 != t)))
          _fail(t);
        else
          l_58 = t;
        t = not_null(m_58);
        return(t);
      }
      t = w_93(t);
      if(((m_58 != NULL) && (m_58 != t)))
        _fail(t);
      else
        m_58 = t;
      t = p_58(t);
    }
    t = c_9;
    {
      ATerm o_58 = NULL;
      ATerm q_58 (ATerm t)
      {
        t = not_null(o_58);
        if(((n_58 != NULL) && (n_58 != t)))
          _fail(t);
        else
          n_58 = t;
        t = not_null(o_58);
        return(t);
      }
      if(((o_58 != NULL) && (o_58 != t)))
        _fail(t);
      else
        o_58 = t;
      t = q_58(t);
      t = (ATerm) ATmakeAppl(sym__2, term_p_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_58)), not_null(l_58)));
      t = printnl_0_0(t);
    }
  }
  t = b_9;
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
  ATerm b_59 (ATerm t)
  {
    ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL;
    t = not_null(v_58);
    if(((x_58 != NULL) && (x_58 != t)))
      _fail(t);
    else
      x_58 = t;
    t = not_null(w_58);
    if(((y_58 != NULL) && (y_58 != t)))
      _fail(t);
    else
      y_58 = t;
    t = not_null(u_58);
    t = SSL_fopen(not_null(x_58), not_null(y_58));
    {
      ATerm a_59 = NULL;
      ATerm c_59 (ATerm t)
      {
        t = not_null(a_59);
        if(((z_58 != NULL) && (z_58 != t)))
          _fail(t);
        else
          z_58 = t;
        t = not_null(a_59);
        return(t);
      }
      if(((a_59 != NULL) && (a_59 != t)))
        _fail(t);
      else
        a_59 = t;
      t = c_59(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_58));
    }
    return(t);
  }
  if(((u_58 != NULL) && (u_58 != t)))
    _fail(t);
  else
    u_58 = t;
  t = not_null(u_58);
  if(match_cons(t, sym__2))
    {
      v_58 = ATgetArgument(t, 0);
      w_58 = ATgetArgument(t, 1);
      t = b_59(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm e_59 = NULL;
  ATerm g_59 (ATerm t)
  {
    ATerm f_59 = NULL;
    t = not_null(e_59);
    if(((f_59 != NULL) && (f_59 != t)))
      _fail(t);
    else
      f_59 = t;
    t = not_null(e_59);
    t = SSL_is_string(not_null(f_59));
    return(t);
  }
  if(((e_59 != NULL) && (e_59 != t)))
    _fail(t);
  else
    e_59 = t;
  t = g_59(t);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_59 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm j_59 = NULL;
    ATerm k_59 (ATerm t)
    {
      t = not_null(j_59);
      if(((i_59 != NULL) && (i_59 != t)))
        _fail(t);
      else
        i_59 = t;
      t = not_null(j_59);
      return(t);
    }
    if(((j_59 != NULL) && (j_59 != t)))
      _fail(t);
    else
      j_59 = t;
    t = k_59(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_59));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_59 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm n_59 = NULL;
    ATerm o_59 (ATerm t)
    {
      t = not_null(n_59);
      if(((m_59 != NULL) && (m_59 != t)))
        _fail(t);
      else
        m_59 = t;
      t = not_null(n_59);
      return(t);
    }
    if(((n_59 != NULL) && (n_59 != t)))
      _fail(t);
    else
      n_59 = t;
    t = o_59(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_59));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_59 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm r_59 = NULL;
    ATerm s_59 (ATerm t)
    {
      t = not_null(r_59);
      if(((q_59 != NULL) && (q_59 != t)))
        _fail(t);
      else
        q_59 = t;
      t = not_null(r_59);
      return(t);
    }
    if(((r_59 != NULL) && (r_59 != t)))
      _fail(t);
    else
      r_59 = t;
    t = s_59(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_59));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm z_59 = NULL;
  ATerm a_60 (ATerm t)
  {
    t = not_null(z_59);
    t = stderr_stream_0_0(t);
    return(t);
  }
  ATerm b_60 (ATerm t)
  {
    t = not_null(z_59);
    t = stdout_stream_0_0(t);
    return(t);
  }
  ATerm c_60 (ATerm t)
  {
    t = not_null(z_59);
    t = stdin_stream_0_0(t);
    return(t);
  }
  if(((z_59 != NULL) && (z_59 != t)))
    _fail(t);
  else
    z_59 = t;
  t = not_null(z_59);
  if(match_cons(t, sym_stderr_0))
    {
      t = a_60(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_60(t);
        }
      else
        {
          if(match_cons(t, sym_stdin_0))
            {
              t = c_60(t);
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
  ATerm j_60 = NULL;
  ATerm u_60 (ATerm t)
  {
    ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL;
    t = not_null(j_60);
    if(((k_60 != NULL) && (k_60 != t)))
      _fail(t);
    else
      k_60 = t;
    t = not_null(j_60);
    {
      ATerm n_60 = NULL;
      ATerm v_60 (ATerm t)
      {
        ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL;
        ATerm w_60 (ATerm t)
        {
          t = not_null(s_60);
          if(((m_60 != NULL) && (m_60 != t)))
            _fail(t);
          else
            m_60 = t;
          t = not_null(t_60);
          if(((l_60 != NULL) && (l_60 != t)))
            _fail(t);
          else
            l_60 = t;
          t = not_null(p_60);
          return(t);
        }
        t = not_null(n_60);
        if(((o_60 != NULL) && (o_60 != t)))
          _fail(t);
        else
          o_60 = t;
        t = not_null(n_60);
        t = SSL_explode_term(not_null(o_60));
        if(((p_60 != NULL) && (p_60 != t)))
          _fail(t);
        else
          p_60 = t;
        t = not_null(p_60);
        if(match_cons(t, sym__2))
          {
            q_60 = ATgetArgument(t, 0);
            r_60 = ATgetArgument(t, 1);
            t = not_null(q_60);
            if(match_string(t, ""))
              {
                t = not_null(r_60);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    s_60 = ATgetFirst((ATermList) t);
                    t_60 = (ATerm) ATgetNext((ATermList) t);
                    t = w_60(t);
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
      t = not_null(k_60);
      if(((n_60 != NULL) && (n_60 != t)))
        _fail(t);
      else
        n_60 = t;
      t = v_60(t);
      t = not_null(m_60);
    }
    return(t);
  }
  if(((j_60 != NULL) && (j_60 != t)))
    _fail(t);
  else
    j_60 = t;
  t = u_60(t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL;
  ATerm m_61 (ATerm t)
  {
    t = not_null(b_61);
    {
      ATerm d_9 = t;
      int e_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Fst_0_0(t);
          t = stdio_stream_0_0(t);
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
                ATerm x_1 (ATerm t)
                {
                  ATerm e_61 = NULL,j_61 = NULL;
                  ATerm n_61 (ATerm t)
                  {
                    ATerm k_61 = NULL;
                    t = not_null(j_61);
                    if(((k_61 != NULL) && (k_61 != t)))
                      _fail(t);
                    else
                      k_61 = t;
                    t = not_null(k_61);
                    return(t);
                  }
                  if(((e_61 != NULL) && (e_61 != t)))
                    _fail(t);
                  else
                    e_61 = t;
                  t = not_null(e_61);
                  if(match_cons(t, sym_Path_1))
                    {
                      j_61 = ATgetArgument(t, 0);
                      t = n_61(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = _2_0(x_1, _id, t);
                t = fopen_0_0(t);
                ;
                LocalPopChoice(g_9);
              }
            else
              {
                t = f_9;
                t = _2_0(is_string_0_0, _id, t);
                t = fopen_0_0(t);
              }
          }
        }
    }
    return(t);
  }
  if(((b_61 != NULL) && (b_61 != t)))
    _fail(t);
  else
    b_61 = t;
  t = not_null(b_61);
  if(match_cons(t, sym__2))
    {
      c_61 = ATgetArgument(t, 0);
      d_61 = ATgetArgument(t, 1);
      t = m_61(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_61 = NULL;
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_61 = NULL;
      ATerm s_61 = NULL;
      ATerm v_61 (ATerm t)
      {
        t = not_null(s_61);
        if(((r_61 != NULL) && (r_61 != t)))
          _fail(t);
        else
          r_61 = t;
        t = not_null(s_61);
        return(t);
      }
      if(((s_61 != NULL) && (s_61 != t)))
        _fail(t);
      else
        s_61 = t;
      t = v_61(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_61), term_j_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      {
        ATerm y_1 (ATerm t)
        {
          t = term_k_9;
          return(t);
        }
        t = debug_1_0(y_1, t);
        _fail(t);
      }
    }
  {
    ATerm l_9;
    l_9 = t;
    {
      ATerm u_61 = NULL;
      ATerm w_61 (ATerm t)
      {
        t = not_null(u_61);
        if(((t_61 != NULL) && (t_61 != t)))
          _fail(t);
        else
          t_61 = t;
        t = not_null(u_61);
        return(t);
      }
      t = read_from_stream_0_0(t);
      if(((u_61 != NULL) && (u_61 != t)))
        _fail(t);
      else
        u_61 = t;
      t = w_61(t);
    }
    t = l_9;
    t = fclose_0_0(t);
    t = not_null(t_61);
  }
  return(t);
}
ATerm split_2_0 (ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm t)
{
  ATerm z_61 = NULL,b_62 = NULL;
  ATerm m_9;
  m_9 = t;
  {
    ATerm a_62 = NULL;
    ATerm d_62 (ATerm t)
    {
      t = not_null(a_62);
      if(((z_61 != NULL) && (z_61 != t)))
        _fail(t);
      else
        z_61 = t;
      t = not_null(a_62);
      return(t);
    }
    t = o_89(t);
    if(((a_62 != NULL) && (a_62 != t)))
      _fail(t);
    else
      a_62 = t;
    t = d_62(t);
  }
  t = m_9;
  {
    ATerm c_62 = NULL;
    ATerm e_62 (ATerm t)
    {
      t = not_null(c_62);
      if(((b_62 != NULL) && (b_62 != t)))
        _fail(t);
      else
        b_62 = t;
      t = not_null(c_62);
      return(t);
    }
    t = p_89(t);
    if(((c_62 != NULL) && (c_62 != t)))
      _fail(t);
    else
      c_62 = t;
    t = e_62(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_61), not_null(b_62));
  }
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm i_62 = NULL;
  ATerm n_9;
  n_9 = t;
  {
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 (ATerm t)
        {
          ATerm j_62 = NULL,k_62 = NULL;
          ATerm p_62 (ATerm t)
          {
            t = not_null(k_62);
            if(((i_62 != NULL) && (i_62 != t)))
              _fail(t);
            else
              i_62 = t;
            t = not_null(j_62);
            return(t);
          }
          if(((j_62 != NULL) && (j_62 != t)))
            _fail(t);
          else
            j_62 = t;
          t = not_null(j_62);
          if(match_cons(t, sym_Input_1))
            {
              k_62 = ATgetArgument(t, 0);
              t = p_62(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1_0(z_1, t);
        ;
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        {
          ATerm l_62 = NULL;
          ATerm s_62 (ATerm t)
          {
            t = not_null(l_62);
            if(((i_62 != NULL) && (i_62 != t)))
              _fail(t);
            else
              i_62 = t;
            t = not_null(l_62);
            return(t);
          }
          t = term_q_9;
          if(((l_62 != NULL) && (l_62 != t)))
            _fail(t);
          else
            l_62 = t;
          t = s_62(t);
        }
      }
  }
  t = n_9;
  {
    ATerm a_2 (ATerm t)
    {
      t = not_null(i_62);
      t = ReadFromFile_0_0(t);
      return(t);
    }
    t = split_2_0(_id, a_2, t);
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm v_62 = NULL;
    if(((v_62 != NULL) && (v_62 != t)))
      _fail(t);
    else
      v_62 = t;
    t = not_null(v_62);
    if(match_string(t, "-k"))
      {
        t = not_null(v_62);
      }
    else
      {
        if(match_string(t, "--keep"))
          {
            t = not_null(v_62);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm r_9;
    r_9 = t;
    {
      ATerm w_62 = NULL;
      ATerm x_62 = NULL;
      ATerm y_62 (ATerm t)
      {
        t = not_null(x_62);
        if(((w_62 != NULL) && (w_62 != t)))
          _fail(t);
        else
          w_62 = t;
        t = not_null(x_62);
        return(t);
      }
      t = string_to_int_0_0(t);
      if(((x_62 != NULL) && (x_62 != t)))
        _fail(t);
      else
        x_62 = t;
      t = y_62(t);
      t = (ATerm) ATmakeAppl(sym__2, term_s_9, not_null(w_62));
      t = set_config_0_0(t);
    }
    t = r_9;
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    t = term_t_9;
    return(t);
  }
  t = ArgOption_3_0(b_2, c_2, d_2, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm a_63 = NULL;
  ATerm e_63 (ATerm t)
  {
    ATerm d_63 = NULL;
    t = not_null(a_63);
    if(((d_63 != NULL) && (d_63 != t)))
      _fail(t);
    else
      d_63 = t;
    t = not_null(a_63);
    t = SSL_string_to_int(not_null(d_63));
    return(t);
  }
  if(((a_63 != NULL) && (a_63 != t)))
    _fail(t);
  else
    a_63 = t;
  t = e_63(t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
      {
        ATerm l_63 = NULL;
        if(((l_63 != NULL) && (l_63 != t)))
          _fail(t);
        else
          l_63 = t;
        t = not_null(l_63);
        if(match_string(t, "-S"))
          {
            t = not_null(l_63);
          }
        else
          {
            if(match_string(t, "--silent"))
              {
                t = not_null(l_63);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_2 (ATerm t)
      {
        t = term_x_9;
        t = set_config_0_0(t);
        t = term_y_9;
        return(t);
      }
      ATerm g_2 (ATerm t)
      {
        t = term_z_9;
        return(t);
      }
      t = Option_3_0(e_2, f_2, g_2, t);
      ;
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      {
        ATerm a_10 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_2 (ATerm t)
            {
              ATerm m_63 = NULL;
              if(((m_63 != NULL) && (m_63 != t)))
                _fail(t);
              else
                m_63 = t;
              t = not_null(m_63);
              if(match_string(t, "--verbose"))
                {
                  t = not_null(m_63);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_2 (ATerm t)
            {
              ATerm p_63 = NULL;
              ATerm c_10;
              c_10 = t;
              {
                ATerm n_63 = NULL;
                ATerm o_63 = NULL;
                ATerm s_63 (ATerm t)
                {
                  t = not_null(o_63);
                  if(((n_63 != NULL) && (n_63 != t)))
                    _fail(t);
                  else
                    n_63 = t;
                  t = not_null(o_63);
                  return(t);
                }
                t = string_to_int_0_0(t);
                if(((o_63 != NULL) && (o_63 != t)))
                  _fail(t);
                else
                  o_63 = t;
                t = s_63(t);
                t = (ATerm) ATmakeAppl(sym__2, term_l_8, not_null(n_63));
                t = set_config_0_0(t);
              }
              t = c_10;
              {
                ATerm q_63 = NULL;
                ATerm t_63 (ATerm t)
                {
                  t = not_null(q_63);
                  if(((p_63 != NULL) && (p_63 != t)))
                    _fail(t);
                  else
                    p_63 = t;
                  t = not_null(q_63);
                  return(t);
                }
                if(((q_63 != NULL) && (q_63 != t)))
                  _fail(t);
                else
                  q_63 = t;
                t = t_63(t);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(p_63));
              }
              return(t);
            }
            ATerm j_2 (ATerm t)
            {
              t = term_d_10;
              return(t);
            }
            t = ArgOption_3_0(h_2, i_2, j_2, t);
            ;
            LocalPopChoice(b_10);
          }
        else
          {
            t = a_10;
            {
              ATerm k_2 (ATerm t)
              {
                ATerm r_63 = NULL;
                if(((r_63 != NULL) && (r_63 != t)))
                  _fail(t);
                else
                  r_63 = t;
                t = not_null(r_63);
                if(match_string(t, "-s"))
                  {
                    t = not_null(r_63);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm l_2 (ATerm t)
              {
                t = term_f_10;
                t = set_config_0_0(t);
                t = term_g_10;
                return(t);
              }
              ATerm m_2 (ATerm t)
              {
                t = term_h_10;
                return(t);
              }
              t = Option_3_0(k_2, l_2, m_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(j_10);
    }
  else
    {
      t = i_10;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm x_63 = NULL;
    if(((x_63 != NULL) && (x_63 != t)))
      _fail(t);
    else
      x_63 = t;
    t = not_null(x_63);
    if(match_string(t, "-o"))
      {
        t = not_null(x_63);
      }
    else
      {
        if(match_string(t, "--output"))
          {
            t = not_null(x_63);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm a_64 = NULL;
    ATerm k_10;
    k_10 = t;
    {
      ATerm y_63 = NULL;
      ATerm z_63 = NULL;
      ATerm c_64 (ATerm t)
      {
        t = not_null(z_63);
        if(((y_63 != NULL) && (y_63 != t)))
          _fail(t);
        else
          y_63 = t;
        t = not_null(z_63);
        return(t);
      }
      if(((z_63 != NULL) && (z_63 != t)))
        _fail(t);
      else
        z_63 = t;
      t = c_64(t);
      t = (ATerm) ATmakeAppl(sym__2, term_l_10, not_null(y_63));
      t = set_config_0_0(t);
    }
    t = k_10;
    {
      ATerm b_64 = NULL;
      ATerm d_64 (ATerm t)
      {
        t = not_null(b_64);
        if(((a_64 != NULL) && (a_64 != t)))
          _fail(t);
        else
          a_64 = t;
        t = not_null(b_64);
        return(t);
      }
      if(((b_64 != NULL) && (b_64 != t)))
        _fail(t);
      else
        b_64 = t;
      t = d_64(t);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_64));
    }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_m_10;
    return(t);
  }
  t = ArgOption_3_0(n_2, o_2, p_2, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm n_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(o_10);
    }
  else
    {
      t = n_10;
      {
        ATerm q_2 (ATerm t)
        {
          ATerm f_64 = NULL;
          if(((f_64 != NULL) && (f_64 != t)))
            _fail(t);
          else
            f_64 = t;
          t = not_null(f_64);
          if(match_string(t, "-b"))
            {
              t = not_null(f_64);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_2 (ATerm t)
        {
          t = term_q_10;
          t = set_config_0_0(t);
          t = term_r_10;
          return(t);
        }
        ATerm s_2 (ATerm t)
        {
          t = term_s_10;
          return(t);
        }
        t = Option_3_0(q_2, r_2, s_2, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL;
  ATerm v_64 (ATerm t)
  {
    t = not_null(l_64);
    t = register_usage_1_0(k_0, t);
    return(t);
  }
  ATerm w_64 (ATerm t)
  {
    ATerm q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL;
    t = not_null(m_64);
    if(((q_64 != NULL) && (q_64 != t)))
      _fail(t);
    else
      q_64 = t;
    t = not_null(o_64);
    if(((r_64 != NULL) && (r_64 != t)))
      _fail(t);
    else
      r_64 = t;
    t = not_null(p_64);
    if(((s_64 != NULL) && (s_64 != t)))
      _fail(t);
    else
      s_64 = t;
    t = not_null(l_64);
    {
      ATerm t_10;
      t_10 = t;
      t = not_null(q_64);
      t = h_0(t);
      t = t_10;
      {
        ATerm u_64 = NULL;
        ATerm x_64 (ATerm t)
        {
          t = not_null(u_64);
          if(((t_64 != NULL) && (t_64 != t)))
            _fail(t);
          else
            t_64 = t;
          t = not_null(u_64);
          return(t);
        }
        t = not_null(r_64);
        t = i_0(t);
        if(((u_64 != NULL) && (u_64 != t)))
          _fail(t);
        else
          u_64 = t;
        t = x_64(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(s_64)), not_null(t_64));
      }
    }
    return(t);
  }
  if(((l_64 != NULL) && (l_64 != t)))
    _fail(t);
  else
    l_64 = t;
  t = not_null(l_64);
  if(match_string(t, "register-usage-info"))
    {
      t = v_64(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_64 = ATgetFirst((ATermList) t);
          n_64 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(n_64);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_64 = ATgetFirst((ATermList) t);
              p_64 = (ATerm) ATgetNext((ATermList) t);
              t = w_64(t);
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
  ATerm t_2 (ATerm t)
  {
    ATerm b_65 = NULL;
    if(((b_65 != NULL) && (b_65 != t)))
      _fail(t);
    else
      b_65 = t;
    t = not_null(b_65);
    if(match_string(t, "-i"))
      {
        t = not_null(b_65);
      }
    else
      {
        if(match_string(t, "--input"))
          {
            t = not_null(b_65);
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
    ATerm e_65 = NULL;
    ATerm x_10;
    x_10 = t;
    {
      ATerm c_65 = NULL;
      ATerm d_65 = NULL;
      ATerm g_65 (ATerm t)
      {
        t = not_null(d_65);
        if(((c_65 != NULL) && (c_65 != t)))
          _fail(t);
        else
          c_65 = t;
        t = not_null(d_65);
        return(t);
      }
      if(((d_65 != NULL) && (d_65 != t)))
        _fail(t);
      else
        d_65 = t;
      t = g_65(t);
      t = (ATerm) ATmakeAppl(sym__2, term_y_10, not_null(c_65));
      t = set_config_0_0(t);
    }
    t = x_10;
    {
      ATerm f_65 = NULL;
      ATerm h_65 (ATerm t)
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
      t = h_65(t);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_65));
    }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_z_10;
    return(t);
  }
  t = ArgOption_3_0(t_2, u_2, v_2, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm a_11 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_65 = NULL;
  t = report_run_time_0_0(t);
  {
    ATerm o_65 = NULL;
    ATerm p_65 (ATerm t)
    {
      t = not_null(o_65);
      if(((l_65 != NULL) && (l_65 != t)))
        _fail(t);
      else
        l_65 = t;
      t = not_null(o_65);
      return(t);
    }
    t = term_o_7;
    t = whoami_0_0(t);
    if(((o_65 != NULL) && (o_65 != t)))
      _fail(t);
    else
      o_65 = t;
    t = p_65(t);
    t = (ATerm) ATmakeAppl(sym__2, term_p_7, (ATerm) ATinsert(ATinsert(ATempty, term_e_11), not_null(l_65)));
    t = printnl_0_0(t);
    t = term_s_7;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_f_11;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm r_65 = NULL;
  ATerm w_65 (ATerm t)
  {
    ATerm s_65 = NULL;
    t = not_null(r_65);
    if(((s_65 != NULL) && (s_65 != t)))
      _fail(t);
    else
      s_65 = t;
    t = not_null(r_65);
    t = SSL_TicksToSeconds(not_null(s_65));
    return(t);
  }
  if(((r_65 != NULL) && (r_65 != t)))
    _fail(t);
  else
    r_65 = t;
  t = w_65(t);
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm g_66 = NULL,h_66 = NULL,w_66 = NULL;
  ATerm z_66 (ATerm t)
  {
    ATerm x_66 = NULL,y_66 = NULL;
    t = not_null(h_66);
    if(((x_66 != NULL) && (x_66 != t)))
      _fail(t);
    else
      x_66 = t;
    t = not_null(w_66);
    if(((y_66 != NULL) && (y_66 != t)))
      _fail(t);
    else
      y_66 = t;
    t = not_null(g_66);
    {
      ATerm g_11 = t;
      int h_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(x_66), not_null(y_66));
          ;
          LocalPopChoice(h_11);
        }
      else
        {
          t = g_11;
          t = SSL_addr(not_null(x_66), not_null(y_66));
        }
    }
    return(t);
  }
  if(((g_66 != NULL) && (g_66 != t)))
    _fail(t);
  else
    g_66 = t;
  t = not_null(g_66);
  if(match_cons(t, sym__2))
    {
      h_66 = ATgetArgument(t, 0);
      w_66 = ATgetArgument(t, 1);
      t = z_66(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm t)
{
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = z_87(t);
      ;
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      {
        ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL;
        ATerm s_67 (ATerm t)
        {
          ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL;
          t = not_null(m_67);
          if(((o_67 != NULL) && (o_67 != t)))
            _fail(t);
          else
            o_67 = t;
          t = not_null(n_67);
          if(((p_67 != NULL) && (p_67 != t)))
            _fail(t);
          else
            p_67 = t;
          t = not_null(l_67);
          {
            ATerm r_67 = NULL;
            ATerm t_67 (ATerm t)
            {
              t = not_null(r_67);
              if(((q_67 != NULL) && (q_67 != t)))
                _fail(t);
              else
                q_67 = t;
              t = not_null(r_67);
              return(t);
            }
            t = not_null(p_67);
            t = foldr_2_0(z_87, a_88, t);
            if(((r_67 != NULL) && (r_67 != t)))
              _fail(t);
            else
              r_67 = t;
            t = t_67(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_67), not_null(q_67));
            t = a_88(t);
          }
          return(t);
        }
        if(((l_67 != NULL) && (l_67 != t)))
          _fail(t);
        else
          l_67 = t;
        t = not_null(l_67);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_67 = ATgetFirst((ATermList) t);
            n_67 = (ATerm) ATgetNext((ATermList) t);
            t = s_67(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm t)
{
  ATerm a_68 = NULL;
  ATerm r_68 (ATerm t)
  {
    ATerm b_68 = NULL,c_68 = NULL;
    t = not_null(a_68);
    if(((b_68 != NULL) && (b_68 != t)))
      _fail(t);
    else
      b_68 = t;
    t = not_null(a_68);
    {
      ATerm d_68 = NULL;
      ATerm s_68 (ATerm t)
      {
        ATerm e_68 = NULL,h_68 = NULL,i_68 = NULL,q_68 = NULL;
        ATerm t_68 (ATerm t)
        {
          t = not_null(q_68);
          if(((c_68 != NULL) && (c_68 != t)))
            _fail(t);
          else
            c_68 = t;
          t = not_null(h_68);
          return(t);
        }
        t = not_null(d_68);
        if(((e_68 != NULL) && (e_68 != t)))
          _fail(t);
        else
          e_68 = t;
        t = not_null(d_68);
        t = SSL_explode_term(not_null(e_68));
        if(((h_68 != NULL) && (h_68 != t)))
          _fail(t);
        else
          h_68 = t;
        t = not_null(h_68);
        if(match_cons(t, sym__2))
          {
            i_68 = ATgetArgument(t, 0);
            q_68 = ATgetArgument(t, 1);
            t = t_68(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(b_68);
      if(((d_68 != NULL) && (d_68 != t)))
        _fail(t);
      else
        d_68 = t;
      t = s_68(t);
      t = not_null(c_68);
      t = foldr_2_0(s_91, t_91, t);
    }
    return(t);
  }
  if(((a_68 != NULL) && (a_68 != t)))
    _fail(t);
  else
    a_68 = t;
  t = r_68(t);
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
    ATerm w_2 (ATerm t)
    {
      t = term_w_9;
      return(t);
    }
    t = crush_2_0(w_2, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL;
  ATerm b_69 (ATerm t)
  {
    ATerm z_68 = NULL,a_69 = NULL;
    t = not_null(x_68);
    if(((z_68 != NULL) && (z_68 != t)))
      _fail(t);
    else
      z_68 = t;
    t = not_null(y_68);
    if(((a_69 != NULL) && (a_69 != t)))
      _fail(t);
    else
      a_69 = t;
    t = not_null(w_68);
    {
      ATerm n_11;
      n_11 = t;
      {
        ATerm o_11 = t;
        int p_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(not_null(z_68), not_null(a_69));
            ;
            LocalPopChoice(p_11);
          }
        else
          {
            t = o_11;
            t = SSL_gtr(not_null(z_68), not_null(a_69));
          }
      }
      t = n_11;
    }
    return(t);
  }
  if(((w_68 != NULL) && (w_68 != t)))
    _fail(t);
  else
    w_68 = t;
  t = not_null(w_68);
  if(match_cons(t, sym__2))
    {
      x_68 = ATgetArgument(t, 0);
      y_68 = ATgetArgument(t, 1);
      t = b_69(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_69 = NULL;
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL;
      ATerm i_69 (ATerm t)
      {
        t = not_null(g_69);
        if(((e_69 != NULL) && (e_69 != t)))
          _fail(t);
        else
          e_69 = t;
        t = not_null(h_69);
        if(((e_69 != NULL) && (e_69 != t)))
          _fail(t);
        else
          e_69 = t;
        t = not_null(f_69);
        return(t);
      }
      if(((f_69 != NULL) && (f_69 != t)))
        _fail(t);
      else
        f_69 = t;
      t = not_null(f_69);
      if(match_cons(t, sym__2))
        {
          g_69 = ATgetArgument(t, 0);
          h_69 = ATgetArgument(t, 1);
          t = i_69(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_95 (ATerm), ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm s_11;
    s_11 = t;
    {
      ATerm k_69 = NULL;
      ATerm l_69 = NULL;
      ATerm m_69 (ATerm t)
      {
        t = not_null(l_69);
        if(((k_69 != NULL) && (k_69 != t)))
          _fail(t);
        else
          k_69 = t;
        t = not_null(l_69);
        return(t);
      }
      t = term_l_8;
      t = get_config_0_0(t);
      if(((l_69 != NULL) && (l_69 != t)))
        _fail(t);
      else
        l_69 = t;
      t = m_69(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_69), term_s_7);
      t = geq_0_0(t);
    }
    t = s_11;
    t = n_95(t);
    return(t);
  }
  t = try_1_0(x_2, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm p_69 = NULL,r_69 = NULL;
    ATerm t_11;
    t_11 = t;
    {
      ATerm q_69 = NULL;
      ATerm t_69 (ATerm t)
      {
        t = not_null(q_69);
        if(((p_69 != NULL) && (p_69 != t)))
          _fail(t);
        else
          p_69 = t;
        t = not_null(q_69);
        return(t);
      }
      t = run_time_0_0(t);
      if(((q_69 != NULL) && (q_69 != t)))
        _fail(t);
      else
        q_69 = t;
      t = t_69(t);
    }
    t = t_11;
    {
      ATerm s_69 = NULL;
      ATerm u_69 (ATerm t)
      {
        t = not_null(s_69);
        if(((r_69 != NULL) && (r_69 != t)))
          _fail(t);
        else
          r_69 = t;
        t = not_null(s_69);
        return(t);
      }
      t = term_o_7;
      t = whoami_0_0(t);
      if(((s_69 != NULL) && (s_69 != t)))
        _fail(t);
      else
        s_69 = t;
      t = u_69(t);
      t = (ATerm) ATmakeAppl(sym__2, term_p_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_11), not_null(p_69)), term_u_11), not_null(r_69)));
      t = printnl_0_0(t);
    }
    return(t);
  }
  t = if_verbose1_1_0(y_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_w_9;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  ATerm z_69 = NULL;
  ATerm f_70 (ATerm t)
  {
    ATerm a_70 = NULL,b_70 = NULL,d_70 = NULL;
    t = not_null(z_69);
    if(((a_70 != NULL) && (a_70 != t)))
      _fail(t);
    else
      a_70 = t;
    t = not_null(z_69);
    {
      ATerm w_11;
      w_11 = t;
      {
        ATerm c_70 = NULL;
        ATerm g_70 (ATerm t)
        {
          t = not_null(c_70);
          if(((b_70 != NULL) && (b_70 != t)))
            _fail(t);
          else
            b_70 = t;
          t = not_null(c_70);
          return(t);
        }
        t = SSLgetAnnotations(not_null(a_70));
        if(((c_70 != NULL) && (c_70 != t)))
          _fail(t);
        else
          c_70 = t;
        t = g_70(t);
      }
      t = w_11;
      {
        ATerm e_70 = NULL;
        ATerm h_70 (ATerm t)
        {
          t = not_null(e_70);
          if(((d_70 != NULL) && (d_70 != t)))
            _fail(t);
          else
            d_70 = t;
          t = not_null(e_70);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(b_70));
        if(((e_70 != NULL) && (e_70 != t)))
          _fail(t);
        else
          e_70 = t;
        t = h_70(t);
        t = not_null(d_70);
      }
    }
    return(t);
  }
  if(((z_69 != NULL) && (z_69 != t)))
    _fail(t);
  else
    z_69 = t;
  t = not_null(z_69);
  if(match_cons(t, sym_Version_0))
    {
      t = f_70(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_98 (ATerm), ATerm t)
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      {
        ATerm z_2 (ATerm t)
        {
          ATerm q_12 = t;
          int r_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(r_12);
            }
          else
            {
              t = q_12;
              {
                ATerm s_12 = t;
                int t_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(t_12);
                  }
                else
                  {
                    t = s_12;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(z_2, t);
      }
    }
  t = k_98(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm j_70 = NULL;
  ATerm l_70 (ATerm t)
  {
    ATerm k_70 = NULL;
    t = not_null(j_70);
    if(((k_70 != NULL) && (k_70 != t)))
      _fail(t);
    else
      k_70 = t;
    t = not_null(j_70);
    t = SSL_table_create(not_null(k_70));
    return(t);
  }
  if(((j_70 != NULL) && (j_70 != t)))
    _fail(t);
  else
    j_70 = t;
  t = l_70(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm n_70 = NULL;
  ATerm p_70 (ATerm t)
  {
    ATerm o_70 = NULL;
    t = not_null(n_70);
    if(((o_70 != NULL) && (o_70 != t)))
      _fail(t);
    else
      o_70 = t;
    t = not_null(n_70);
    {
      ATerm u_12;
      u_12 = t;
      t = term_v_12;
      t = table_create_0_0(t);
      t = (ATerm) ATmakeAppl(sym__3, term_v_12, term_p_13, not_null(o_70));
      t = table_put_0_0(t);
      t = u_12;
    }
    return(t);
  }
  if(((n_70 != NULL) && (n_70 != t)))
    _fail(t);
  else
    n_70 = t;
  t = p_70(t);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm r_70 = NULL;
  ATerm t_70 (ATerm t)
  {
    ATerm s_70 = NULL;
    t = not_null(r_70);
    if(((s_70 != NULL) && (s_70 != t)))
      _fail(t);
    else
      s_70 = t;
    t = not_null(r_70);
    t = SSL_table_destroy(not_null(s_70));
    return(t);
  }
  if(((r_70 != NULL) && (r_70 != t)))
    _fail(t);
  else
    r_70 = t;
  t = t_70(t);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm v_70 = NULL;
  ATerm x_70 (ATerm t)
  {
    ATerm w_70 = NULL;
    t = not_null(v_70);
    if(((w_70 != NULL) && (w_70 != t)))
      _fail(t);
    else
      w_70 = t;
    t = not_null(v_70);
    t = SSL_exit(not_null(w_70));
    return(t);
  }
  if(((v_70 != NULL) && (v_70 != t)))
    _fail(t);
  else
    v_70 = t;
  t = x_70(t);
  return(t);
}
ATerm long_description_1_0 (ATerm l_100 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm y_81 (ATerm), ATerm t)
{
  ATerm y_70 (ATerm t)
  {
    ATerm q_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(r_13);
      }
    else
      {
        t = q_13;
        t = Cons_2_0(y_81, y_70, t);
      }
    return(t);
  }
  t = y_70(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL;
  ATerm q_71 (ATerm t)
  {
    ATerm i_71 = NULL,j_71 = NULL,k_71 = NULL;
    t = not_null(f_71);
    if(((i_71 != NULL) && (i_71 != t)))
      _fail(t);
    else
      i_71 = t;
    t = not_null(g_71);
    if(((j_71 != NULL) && (j_71 != t)))
      _fail(t);
    else
      j_71 = t;
    t = not_null(j_71);
    {
      ATerm s_13;
      s_13 = t;
      {
        ATerm l_71 = NULL,n_71 = NULL,p_71 = NULL;
        ATerm u_71 (ATerm t)
        {
          t = not_null(p_71);
          if(((k_71 != NULL) && (k_71 != t)))
            _fail(t);
          else
            k_71 = t;
          t = not_null(p_71);
          return(t);
        }
        ATerm t_13;
        t_13 = t;
        {
          ATerm m_71 = NULL;
          ATerm s_71 (ATerm t)
          {
            t = not_null(m_71);
            if(((l_71 != NULL) && (l_71 != t)))
              _fail(t);
            else
              l_71 = t;
            t = not_null(m_71);
            return(t);
          }
          t = g_0(t);
          if(((m_71 != NULL) && (m_71 != t)))
            _fail(t);
          else
            m_71 = t;
          t = s_71(t);
        }
        t = t_13;
        {
          ATerm o_71 = NULL;
          ATerm t_71 (ATerm t)
          {
            t = not_null(o_71);
            if(((n_71 != NULL) && (n_71 != t)))
              _fail(t);
            else
              n_71 = t;
            t = not_null(o_71);
            return(t);
          }
          t = not_null(i_71);
          t = f_0(t);
          if(((o_71 != NULL) && (o_71 != t)))
            _fail(t);
          else
            o_71 = t;
          t = t_71(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(l_71)), not_null(n_71));
          if(((p_71 != NULL) && (p_71 != t)))
            _fail(t);
          else
            p_71 = t;
          t = u_71(t);
        }
      }
      t = s_13;
      {
        ATerm a_3 (ATerm t)
        {
          t = not_null(k_71);
          return(t);
        }
        t = reverse_acc_2_0(f_0, a_3, t);
      }
    }
    return(t);
  }
  ATerm r_71 (ATerm t)
  {
    t = term_o_7;
    t = g_0(t);
    return(t);
  }
  if(((h_71 != NULL) && (h_71 != t)))
    _fail(t);
  else
    h_71 = t;
  t = not_null(h_71);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_71 = ATgetFirst((ATermList) t);
      g_71 = (ATerm) ATgetNext((ATermList) t);
      t = q_71(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = r_71(t);
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
  ATerm b_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, b_3, t);
  return(t);
}
ATerm short_description_1_0 (ATerm k_100 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm f_74 (ATerm), ATerm t)
{
  ATerm a_72 = NULL,b_72 = NULL;
  ATerm k_72 (ATerm t)
  {
    ATerm c_72 = NULL,d_72 = NULL,e_72 = NULL,g_72 = NULL;
    ATerm m_72 (ATerm t)
    {
      ATerm h_72 = NULL,i_72 = NULL;
      t = not_null(g_72);
      if(((h_72 != NULL) && (h_72 != t)))
        _fail(t);
      else
        h_72 = t;
      t = not_null(g_72);
      {
        ATerm j_72 = NULL;
        ATerm n_72 (ATerm t)
        {
          t = not_null(j_72);
          if(((i_72 != NULL) && (i_72 != t)))
            _fail(t);
          else
            i_72 = t;
          t = not_null(j_72);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(h_72)), not_null(e_72));
        if(((j_72 != NULL) && (j_72 != t)))
          _fail(t);
        else
          j_72 = t;
        t = n_72(t);
        t = not_null(i_72);
      }
      return(t);
    }
    t = not_null(a_72);
    if(((c_72 != NULL) && (c_72 != t)))
      _fail(t);
    else
      c_72 = t;
    t = not_null(b_72);
    if(((d_72 != NULL) && (d_72 != t)))
      _fail(t);
    else
      d_72 = t;
    t = not_null(a_72);
    {
      ATerm f_72 = NULL;
      ATerm l_72 (ATerm t)
      {
        t = not_null(f_72);
        if(((e_72 != NULL) && (e_72 != t)))
          _fail(t);
        else
          e_72 = t;
        t = not_null(f_72);
        return(t);
      }
      t = SSLgetAnnotations(not_null(c_72));
      if(((f_72 != NULL) && (f_72 != t)))
        _fail(t);
      else
        f_72 = t;
      t = l_72(t);
      t = not_null(d_72);
      t = f_74(t);
      if(((g_72 != NULL) && (g_72 != t)))
        _fail(t);
      else
        g_72 = t;
      t = m_72(t);
    }
    return(t);
  }
  if(((a_72 != NULL) && (a_72 != t)))
    _fail(t);
  else
    a_72 = t;
  t = not_null(a_72);
  if(match_cons(t, sym_Program_1))
    {
      b_72 = ATgetArgument(t, 0);
      t = k_72(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_72 = NULL;
  ATerm u_13 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_72 = NULL;
      ATerm z_72 (ATerm t)
      {
        t = not_null(t_72);
        if(((s_72 != NULL) && (s_72 != t)))
          _fail(t);
        else
          s_72 = t;
        t = not_null(t_72);
        return(t);
      }
      t = term_f_11;
      t = get_config_0_0(t);
      if(((t_72 != NULL) && (t_72 != t)))
        _fail(t);
      else
        t_72 = t;
      t = z_72(t);
      ;
      LocalPopChoice(o_14);
    }
  else
    {
      t = u_13;
      {
        ATerm c_3 (ATerm t)
        {
          ATerm d_3 (ATerm t)
          {
            ATerm u_72 = NULL;
            ATerm a_73 (ATerm t)
            {
              t = not_null(u_72);
              if(((s_72 != NULL) && (s_72 != t)))
                _fail(t);
              else
                s_72 = t;
              t = not_null(u_72);
              return(t);
            }
            if(((u_72 != NULL) && (u_72 != t)))
              _fail(t);
            else
              u_72 = t;
            t = a_73(t);
            return(t);
          }
          t = Program_1_0(d_3, t);
          return(t);
        }
        t = option_defined_1_0(c_3, t);
      }
    }
  {
    ATerm e_3 (ATerm t)
    {
      ATerm f_3 (ATerm t)
      {
        t = not_null(s_72);
        return(t);
      }
      t = short_description_1_0(f_3, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(e_3, t);
    t = term_p_14;
    t = echo_0_0(t);
    t = term_s_14;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm g_3 (ATerm t)
      {
        ATerm v_72 = NULL;
        ATerm w_72 = NULL;
        ATerm b_73 (ATerm t)
        {
          t = not_null(w_72);
          if(((v_72 != NULL) && (v_72 != t)))
            _fail(t);
          else
            v_72 = t;
          t = not_null(w_72);
          return(t);
        }
        if(((w_72 != NULL) && (w_72 != t)))
          _fail(t);
        else
          w_72 = t;
        t = b_73(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_72)), term_t_14);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(g_3, t);
      {
        ATerm h_3 (ATerm t)
        {
          ATerm x_72 = NULL;
          ATerm y_72 = NULL;
          ATerm c_73 (ATerm t)
          {
            t = not_null(y_72);
            if(((x_72 != NULL) && (x_72 != t)))
              _fail(t);
            else
              x_72 = t;
            t = not_null(y_72);
            return(t);
          }
          ATerm i_3 (ATerm t)
          {
            t = not_null(s_72);
            return(t);
          }
          t = long_description_1_0(i_3, t);
          if(((y_72 != NULL) && (y_72 != t)))
            _fail(t);
          else
            y_72 = t;
          t = c_73(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(x_72)), term_u_14);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(h_3, t);
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
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm g_74 (ATerm), ATerm t)
{
  ATerm i_73 = NULL,j_73 = NULL;
  ATerm s_73 (ATerm t)
  {
    ATerm k_73 = NULL,l_73 = NULL,m_73 = NULL,o_73 = NULL;
    ATerm u_73 (ATerm t)
    {
      ATerm p_73 = NULL,q_73 = NULL;
      t = not_null(o_73);
      if(((p_73 != NULL) && (p_73 != t)))
        _fail(t);
      else
        p_73 = t;
      t = not_null(o_73);
      {
        ATerm r_73 = NULL;
        ATerm v_73 (ATerm t)
        {
          t = not_null(r_73);
          if(((q_73 != NULL) && (q_73 != t)))
            _fail(t);
          else
            q_73 = t;
          t = not_null(r_73);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_73)), not_null(m_73));
        if(((r_73 != NULL) && (r_73 != t)))
          _fail(t);
        else
          r_73 = t;
        t = v_73(t);
        t = not_null(q_73);
      }
      return(t);
    }
    t = not_null(i_73);
    if(((k_73 != NULL) && (k_73 != t)))
      _fail(t);
    else
      k_73 = t;
    t = not_null(j_73);
    if(((l_73 != NULL) && (l_73 != t)))
      _fail(t);
    else
      l_73 = t;
    t = not_null(i_73);
    {
      ATerm n_73 = NULL;
      ATerm t_73 (ATerm t)
      {
        t = not_null(n_73);
        if(((m_73 != NULL) && (m_73 != t)))
          _fail(t);
        else
          m_73 = t;
        t = not_null(n_73);
        return(t);
      }
      t = SSLgetAnnotations(not_null(k_73));
      if(((n_73 != NULL) && (n_73 != t)))
        _fail(t);
      else
        n_73 = t;
      t = t_73(t);
      t = not_null(l_73);
      t = g_74(t);
      if(((o_73 != NULL) && (o_73 != t)))
        _fail(t);
      else
        o_73 = t;
      t = u_73(t);
    }
    return(t);
  }
  if(((i_73 != NULL) && (i_73 != t)))
    _fail(t);
  else
    i_73 = t;
  t = not_null(i_73);
  if(match_cons(t, sym_Undefined_1))
    {
      j_73 = ATgetArgument(t, 0);
      t = s_73(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm i_82 (ATerm), ATerm t)
{
  ATerm w_73 (ATerm t)
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(i_82, _id, t);
        ;
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = Cons_2_0(_id, w_73, t);
      }
    return(t);
  }
  t = w_73(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm k_99 (ATerm), ATerm t)
{
  t = fetch_1_0(k_99, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL;
  if(((y_73 != NULL) && (y_73 != t)))
    _fail(t);
  else
    y_73 = t;
  t = not_null(y_73);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(y_73);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_73 = ATgetFirst((ATermList) t);
          a_74 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(y_73);
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
  ATerm z_14;
  z_14 = t;
  {
    ATerm d_74 = NULL;
    ATerm i_74 = NULL;
    ATerm k_74 (ATerm t)
    {
      t = not_null(i_74);
      if(((d_74 != NULL) && (d_74 != t)))
        _fail(t);
      else
        d_74 = t;
      t = not_null(i_74);
      return(t);
    }
    ATerm a_15 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(n_16);
      }
    else
      {
        t = a_15;
        {
          ATerm e_74 = NULL;
          ATerm h_74 = NULL;
          ATerm j_74 (ATerm t)
          {
            t = not_null(h_74);
            if(((e_74 != NULL) && (e_74 != t)))
              _fail(t);
            else
              e_74 = t;
            t = not_null(h_74);
            return(t);
          }
          if(((h_74 != NULL) && (h_74 != t)))
            _fail(t);
          else
            h_74 = t;
          t = j_74(t);
          t = (ATerm) ATinsert(ATempty, not_null(e_74));
        }
      }
    if(((i_74 != NULL) && (i_74 != t)))
      _fail(t);
    else
      i_74 = t;
    t = k_74(t);
    t = (ATerm) ATmakeAppl(sym__2, term_s_8, not_null(d_74));
    t = printnl_0_0(t);
  }
  t = z_14;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_f_11;
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
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(p_16);
    }
  else
    {
      t = o_16;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  ATerm s_74 = NULL;
  ATerm y_74 (ATerm t)
  {
    ATerm t_74 = NULL,u_74 = NULL,w_74 = NULL;
    t = not_null(s_74);
    if(((t_74 != NULL) && (t_74 != t)))
      _fail(t);
    else
      t_74 = t;
    t = not_null(s_74);
    {
      ATerm q_16;
      q_16 = t;
      {
        ATerm v_74 = NULL;
        ATerm z_74 (ATerm t)
        {
          t = not_null(v_74);
          if(((u_74 != NULL) && (u_74 != t)))
            _fail(t);
          else
            u_74 = t;
          t = not_null(v_74);
          return(t);
        }
        t = SSLgetAnnotations(not_null(t_74));
        if(((v_74 != NULL) && (v_74 != t)))
          _fail(t);
        else
          v_74 = t;
        t = z_74(t);
      }
      t = q_16;
      {
        ATerm x_74 = NULL;
        ATerm a_75 (ATerm t)
        {
          t = not_null(x_74);
          if(((w_74 != NULL) && (w_74 != t)))
            _fail(t);
          else
            w_74 = t;
          t = not_null(x_74);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(u_74));
        if(((x_74 != NULL) && (x_74 != t)))
          _fail(t);
        else
          x_74 = t;
        t = a_75(t);
        t = not_null(w_74);
      }
    }
    return(t);
  }
  if(((s_74 != NULL) && (s_74 != t)))
    _fail(t);
  else
    s_74 = t;
  t = not_null(s_74);
  if(match_cons(t, sym_Help_0))
    {
      t = y_74(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1_0 (ATerm n_74 (ATerm), ATerm t)
{
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_74(t);
      ;
      LocalPopChoice(s_16);
    }
  else
    {
      t = r_16;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_3 (ATerm t)
      {
        ATerm d_75 = NULL;
        if(((d_75 != NULL) && (d_75 != t)))
          _fail(t);
        else
          d_75 = t;
        t = not_null(d_75);
        if(match_string(t, "--about"))
          {
            t = not_null(d_75);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm k_3 (ATerm t)
      {
        t = term_p_17;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm l_3 (ATerm t)
      {
        t = term_q_17;
        return(t);
      }
      t = Option_3_0(j_3, k_3, l_3, t);
      ;
      LocalPopChoice(n_17);
    }
  else
    {
      t = m_17;
      {
        ATerm m_3 (ATerm t)
        {
          ATerm e_75 = NULL;
          if(((e_75 != NULL) && (e_75 != t)))
            _fail(t);
          else
            e_75 = t;
          t = not_null(e_75);
          if(match_string(t, "--version"))
            {
              t = not_null(e_75);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm n_3 (ATerm t)
        {
          t = term_p_17;
          t = set_config_0_0(t);
          t = term_g_18;
          t = set_config_0_0(t);
          t = term_h_18;
          return(t);
        }
        ATerm o_3 (ATerm t)
        {
          t = term_i_18;
          return(t);
        }
        t = Option_3_0(m_3, n_3, o_3, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL;
  ATerm m_75 (ATerm t)
  {
    ATerm k_75 = NULL,l_75 = NULL;
    t = not_null(i_75);
    if(((k_75 != NULL) && (k_75 != t)))
      _fail(t);
    else
      k_75 = t;
    t = not_null(j_75);
    if(((l_75 != NULL) && (l_75 != t)))
      _fail(t);
    else
      l_75 = t;
    t = not_null(h_75);
    t = SSL_table_get(not_null(k_75), not_null(l_75));
    return(t);
  }
  if(((h_75 != NULL) && (h_75 != t)))
    _fail(t);
  else
    h_75 = t;
  t = not_null(h_75);
  if(match_cons(t, sym__2))
    {
      i_75 = ATgetArgument(t, 0);
      j_75 = ATgetArgument(t, 1);
      t = m_75(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL;
  ATerm z_75 (ATerm t)
  {
    ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL;
    t = not_null(r_75);
    if(((v_75 != NULL) && (v_75 != t)))
      _fail(t);
    else
      v_75 = t;
    t = not_null(s_75);
    if(((w_75 != NULL) && (w_75 != t)))
      _fail(t);
    else
      w_75 = t;
    t = not_null(t_75);
    if(((u_75 != NULL) && (u_75 != t)))
      _fail(t);
    else
      u_75 = t;
    t = not_null(q_75);
    {
      ATerm j_18;
      j_18 = t;
      {
        ATerm x_75 = NULL;
        ATerm y_75 = NULL;
        ATerm a_76 (ATerm t)
        {
          t = not_null(y_75);
          if(((x_75 != NULL) && (x_75 != t)))
            _fail(t);
          else
            x_75 = t;
          t = not_null(y_75);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_75), not_null(w_75));
        {
          ATerm y_18 = t;
          int c_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(c_19);
            }
          else
            {
              t = y_18;
              t = (ATerm) ATempty;
            }
          if(((y_75 != NULL) && (y_75 != t)))
            _fail(t);
          else
            y_75 = t;
          t = a_76(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(v_75), not_null(w_75), (ATerm) ATinsert(CheckATermList(not_null(x_75)), not_null(u_75)));
        t = table_put_0_0(t);
      }
      t = j_18;
    }
    return(t);
  }
  if(((q_75 != NULL) && (q_75 != t)))
    _fail(t);
  else
    q_75 = t;
  t = not_null(q_75);
  if(match_cons(t, sym__3))
    {
      r_75 = ATgetArgument(t, 0);
      s_75 = ATgetArgument(t, 1);
      t_75 = ATgetArgument(t, 2);
      t = z_75(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm p_100 (ATerm), ATerm t)
{
  ATerm c_76 = NULL;
  ATerm d_76 = NULL;
  ATerm e_76 (ATerm t)
  {
    t = not_null(d_76);
    if(((c_76 != NULL) && (c_76 != t)))
      _fail(t);
    else
      c_76 = t;
    t = not_null(d_76);
    return(t);
  }
  t = term_o_7;
  t = p_100(t);
  if(((d_76 != NULL) && (d_76 != t)))
    _fail(t);
  else
    d_76 = t;
  t = e_76(t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_14, term_r_14, not_null(c_76));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL;
  ATerm q_76 (ATerm t)
  {
    t = not_null(j_76);
    t = register_usage_1_0(d_0, t);
    return(t);
  }
  ATerm r_76 (ATerm t)
  {
    ATerm m_76 = NULL,n_76 = NULL,o_76 = NULL;
    t = not_null(k_76);
    if(((m_76 != NULL) && (m_76 != t)))
      _fail(t);
    else
      m_76 = t;
    t = not_null(l_76);
    if(((n_76 != NULL) && (n_76 != t)))
      _fail(t);
    else
      n_76 = t;
    t = not_null(j_76);
    {
      ATerm d_19;
      d_19 = t;
      t = not_null(m_76);
      t = a_0(t);
      t = d_19;
      {
        ATerm p_76 = NULL;
        ATerm s_76 (ATerm t)
        {
          t = not_null(p_76);
          if(((o_76 != NULL) && (o_76 != t)))
            _fail(t);
          else
            o_76 = t;
          t = not_null(p_76);
          return(t);
        }
        t = term_o_7;
        t = b_0(t);
        if(((p_76 != NULL) && (p_76 != t)))
          _fail(t);
        else
          p_76 = t;
        t = s_76(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(n_76)), not_null(o_76));
      }
    }
    return(t);
  }
  if(((j_76 != NULL) && (j_76 != t)))
    _fail(t);
  else
    j_76 = t;
  t = not_null(j_76);
  if(match_string(t, "register-usage-info"))
    {
      t = q_76(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_76 = ATgetFirst((ATermList) t);
          l_76 = (ATerm) ATgetNext((ATermList) t);
          t = r_76(t);
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
  ATerm p_3 (ATerm t)
  {
    ATerm u_76 = NULL;
    if(((u_76 != NULL) && (u_76 != t)))
      _fail(t);
    else
      u_76 = t;
    t = not_null(u_76);
    if(match_string(t, "--help"))
      {
        t = not_null(u_76);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(u_76);
          }
        else
          {
            if(match_string(t, "-?"))
              {
                t = not_null(u_76);
              }
            else
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_e_19;
    t = set_config_0_0(t);
    t = term_f_19;
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    t = term_g_19;
    return(t);
  }
  t = Option_3_0(p_3, q_3, r_3, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm x_76 = NULL,y_76 = NULL,z_76 = NULL;
  ATerm c_77 (ATerm t)
  {
    ATerm a_77 = NULL,b_77 = NULL;
    t = not_null(y_76);
    if(((a_77 != NULL) && (a_77 != t)))
      _fail(t);
    else
      a_77 = t;
    t = not_null(z_76);
    if(((b_77 != NULL) && (b_77 != t)))
      _fail(t);
    else
      b_77 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(b_77)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_77)));
    return(t);
  }
  if(((x_76 != NULL) && (x_76 != t)))
    _fail(t);
  else
    x_76 = t;
  t = not_null(x_76);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_76 = ATgetFirst((ATermList) t);
      z_76 = (ATerm) ATgetNext((ATermList) t);
      t = c_77(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_61 (ATerm), ATerm g_61 (ATerm), ATerm t)
{
  ATerm j_77 = NULL,k_77 = NULL,l_77 = NULL;
  ATerm x_77 (ATerm t)
  {
    ATerm m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,r_77 = NULL;
    ATerm z_77 (ATerm t)
    {
      ATerm s_77 = NULL,t_77 = NULL;
      ATerm a_78 (ATerm t)
      {
        ATerm u_77 = NULL,v_77 = NULL;
        t = not_null(t_77);
        if(((u_77 != NULL) && (u_77 != t)))
          _fail(t);
        else
          u_77 = t;
        t = not_null(t_77);
        {
          ATerm w_77 = NULL;
          ATerm b_78 (ATerm t)
          {
            t = not_null(w_77);
            if(((v_77 != NULL) && (v_77 != t)))
              _fail(t);
            else
              v_77 = t;
            t = not_null(w_77);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(u_77)), not_null(s_77)), not_null(p_77));
          if(((w_77 != NULL) && (w_77 != t)))
            _fail(t);
          else
            w_77 = t;
          t = b_78(t);
          t = not_null(v_77);
        }
        return(t);
      }
      t = not_null(r_77);
      if(((s_77 != NULL) && (s_77 != t)))
        _fail(t);
      else
        s_77 = t;
      t = not_null(o_77);
      t = g_61(t);
      if(((t_77 != NULL) && (t_77 != t)))
        _fail(t);
      else
        t_77 = t;
      t = a_78(t);
      return(t);
    }
    t = not_null(j_77);
    if(((m_77 != NULL) && (m_77 != t)))
      _fail(t);
    else
      m_77 = t;
    t = not_null(k_77);
    if(((n_77 != NULL) && (n_77 != t)))
      _fail(t);
    else
      n_77 = t;
    t = not_null(l_77);
    if(((o_77 != NULL) && (o_77 != t)))
      _fail(t);
    else
      o_77 = t;
    t = not_null(j_77);
    {
      ATerm q_77 = NULL;
      ATerm y_77 (ATerm t)
      {
        t = not_null(q_77);
        if(((p_77 != NULL) && (p_77 != t)))
          _fail(t);
        else
          p_77 = t;
        t = not_null(q_77);
        return(t);
      }
      t = SSLgetAnnotations(not_null(m_77));
      if(((q_77 != NULL) && (q_77 != t)))
        _fail(t);
      else
        q_77 = t;
      t = y_77(t);
      t = not_null(n_77);
      t = f_61(t);
      if(((r_77 != NULL) && (r_77 != t)))
        _fail(t);
      else
        r_77 = t;
      t = z_77(t);
    }
    return(t);
  }
  if(((j_77 != NULL) && (j_77 != t)))
    _fail(t);
  else
    j_77 = t;
  t = not_null(j_77);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_77 = ATgetFirst((ATermList) t);
      l_77 = (ATerm) ATgetNext((ATermList) t);
      t = x_77(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm g_78 = NULL;
  ATerm m_78 (ATerm t)
  {
    ATerm h_78 = NULL,i_78 = NULL,k_78 = NULL;
    t = not_null(g_78);
    if(((h_78 != NULL) && (h_78 != t)))
      _fail(t);
    else
      h_78 = t;
    t = not_null(g_78);
    {
      ATerm v_19;
      v_19 = t;
      {
        ATerm j_78 = NULL;
        ATerm n_78 (ATerm t)
        {
          t = not_null(j_78);
          if(((i_78 != NULL) && (i_78 != t)))
            _fail(t);
          else
            i_78 = t;
          t = not_null(j_78);
          return(t);
        }
        t = SSLgetAnnotations(not_null(h_78));
        if(((j_78 != NULL) && (j_78 != t)))
          _fail(t);
        else
          j_78 = t;
        t = n_78(t);
      }
      t = v_19;
      {
        ATerm l_78 = NULL;
        ATerm o_78 (ATerm t)
        {
          t = not_null(l_78);
          if(((k_78 != NULL) && (k_78 != t)))
            _fail(t);
          else
            k_78 = t;
          t = not_null(l_78);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(i_78));
        if(((l_78 != NULL) && (l_78 != t)))
          _fail(t);
        else
          l_78 = t;
        t = o_78(t);
        t = not_null(k_78);
      }
    }
    return(t);
  }
  if(((g_78 != NULL) && (g_78 != t)))
    _fail(t);
  else
    g_78 = t;
  t = not_null(g_78);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_78(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm r_78 = NULL,s_78 = NULL,t_78 = NULL;
  ATerm w_78 (ATerm t)
  {
    ATerm u_78 = NULL,v_78 = NULL;
    t = not_null(s_78);
    if(((u_78 != NULL) && (u_78 != t)))
      _fail(t);
    else
      u_78 = t;
    t = not_null(t_78);
    if(((v_78 != NULL) && (v_78 != t)))
      _fail(t);
    else
      v_78 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_i_8, not_null(u_78), not_null(v_78));
    t = table_put_0_0(t);
    return(t);
  }
  if(((r_78 != NULL) && (r_78 != t)))
    _fail(t);
  else
    r_78 = t;
  t = not_null(r_78);
  if(match_cons(t, sym__2))
    {
      s_78 = ATgetArgument(t, 0);
      t_78 = ATgetArgument(t, 1);
      t = w_78(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_100 (ATerm), ATerm t)
{
  ATerm w_19;
  w_19 = t;
  {
    ATerm s_3 (ATerm t)
    {
      t = term_x_19;
      t = n_100(t);
      return(t);
    }
    t = try_1_0(s_3, t);
  }
  t = w_19;
  {
    ATerm t_3 (ATerm t)
    {
      ATerm b_79 = NULL;
      ATerm y_19;
      y_19 = t;
      {
        ATerm z_78 = NULL;
        ATerm a_79 = NULL;
        ATerm d_79 (ATerm t)
        {
          t = not_null(a_79);
          if(((z_78 != NULL) && (z_78 != t)))
            _fail(t);
          else
            z_78 = t;
          t = not_null(a_79);
          return(t);
        }
        if(((a_79 != NULL) && (a_79 != t)))
          _fail(t);
        else
          a_79 = t;
        t = d_79(t);
        t = (ATerm) ATmakeAppl(sym__2, term_f_11, not_null(z_78));
        t = set_config_0_0(t);
      }
      t = y_19;
      {
        ATerm c_79 = NULL;
        ATerm e_79 (ATerm t)
        {
          t = not_null(c_79);
          if(((b_79 != NULL) && (b_79 != t)))
            _fail(t);
          else
            b_79 = t;
          t = not_null(c_79);
          return(t);
        }
        if(((c_79 != NULL) && (c_79 != t)))
          _fail(t);
        else
          c_79 = t;
        t = e_79(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_79));
      }
      return(t);
    }
    ATerm u_3 (ATerm t)
    {
      ATerm z_19 = t;
      int o_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_20 = t;
          int q_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(q_20);
            }
          else
            {
              t = p_20;
              t = n_100(t);
              t = Cons_2_0(_id, u_3, t);
            }
          ;
          LocalPopChoice(o_20);
        }
      else
        {
          t = z_19;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(t_3, u_3, t);
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL;
  ATerm r_20;
  r_20 = t;
  {
    ATerm l_79 = NULL,m_79 = NULL,n_79 = NULL,o_79 = NULL;
    ATerm p_79 (ATerm t)
    {
      t = not_null(m_79);
      if(((i_79 != NULL) && (i_79 != t)))
        _fail(t);
      else
        i_79 = t;
      t = not_null(n_79);
      if(((j_79 != NULL) && (j_79 != t)))
        _fail(t);
      else
        j_79 = t;
      t = not_null(o_79);
      if(((k_79 != NULL) && (k_79 != t)))
        _fail(t);
      else
        k_79 = t;
      t = not_null(l_79);
      t = SSL_table_put(not_null(i_79), not_null(j_79), not_null(k_79));
      return(t);
    }
    if(((l_79 != NULL) && (l_79 != t)))
      _fail(t);
    else
      l_79 = t;
    t = not_null(l_79);
    if(match_cons(t, sym__3))
      {
        m_79 = ATgetArgument(t, 0);
        n_79 = ATgetArgument(t, 1);
        o_79 = ATgetArgument(t, 2);
        t = p_79(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = r_20;
  return(t);
}
ATerm parse_options_1_0 (ATerm m_100 (ATerm), ATerm t)
{
  ATerm r_79 = NULL;
  ATerm b_21;
  b_21 = t;
  t = term_c_21;
  t = table_put_0_0(t);
  t = b_21;
  {
    ATerm v_3 (ATerm t)
    {
      ATerm d_21 = t;
      int e_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_100(t);
          ;
          LocalPopChoice(e_21);
        }
      else
        {
          t = d_21;
          {
            ATerm f_21 = t;
            int g_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(g_21);
              }
            else
              {
                t = f_21;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_3, t);
    {
      ATerm w_3 (ATerm t)
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_22;
            h_22 = t;
            {
              ATerm i_22 = t;
              int j_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_c_12;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(j_22);
                }
              else
                {
                  t = i_22;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = h_22;
            t = system_usage_0_0(t);
            t = term_w_9;
            t = exit_0_0(t);
            ;
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            {
              ATerm k_22 = t;
              int l_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_23;
                  a_23 = t;
                  t = term_o_17;
                  t = get_config_0_0(t);
                  t = a_23;
                  t = system_about_0_0(t);
                  t = term_w_9;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(l_22);
                }
              else
                {
                  t = k_22;
                  {
                    ATerm x_3 (ATerm t)
                    {
                      ATerm y_3 (ATerm t)
                      {
                        ATerm s_79 = NULL;
                        ATerm t_79 (ATerm t)
                        {
                          t = not_null(s_79);
                          if(((r_79 != NULL) && (r_79 != t)))
                            _fail(t);
                          else
                            r_79 = t;
                          t = not_null(s_79);
                          return(t);
                        }
                        if(((s_79 != NULL) && (s_79 != t)))
                          _fail(t);
                        else
                          s_79 = t;
                        t = t_79(t);
                        return(t);
                      }
                      t = Undefined_1_0(y_3, t);
                      return(t);
                    }
                    t = option_defined_1_0(x_3, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_p_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_79)), term_b_23));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_s_7;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(w_3, t);
      {
        ATerm c_23;
        c_23 = t;
        t = term_q_14;
        t = table_destroy_0_0(t);
        t = c_23;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm t)
{
  t = parse_options_1_0(m_98, t);
  t = store_options_0_0(t);
  t = o_98(t);
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_98, t);
        ;
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        {
          ATerm f_23 = t;
          int z_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_98(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(z_23);
            }
          else
            {
              t = f_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_98(t);
        ;
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(b_98, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(z_3, d_98, e_98, a_4, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm c_4 (ATerm t)
    {
      ATerm c_24;
      c_24 = t;
      {
        ATerm v_79 = NULL;
        ATerm w_79 = NULL;
        ATerm x_79 (ATerm t)
        {
          t = not_null(w_79);
          if(((v_79 != NULL) && (v_79 != t)))
            _fail(t);
          else
            v_79 = t;
          t = not_null(w_79);
          return(t);
        }
        t = term_f_11;
        t = get_config_0_0(t);
        if(((w_79 != NULL) && (w_79 != t)))
          _fail(t);
        else
          w_79 = t;
        t = x_79(t);
        t = (ATerm) ATmakeAppl(sym__2, term_p_7, (ATerm) ATinsert(ATempty, not_null(v_79)));
        t = printnl_0_0(t);
      }
      t = c_24;
      return(t);
    }
    t = if_verbose2_1_0(c_4, t);
    return(t);
  }
  t = iowrap_4_0(v_97, w_97, x_97, b_4, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm t)
{
  t = iowrap_3_0(t_97, u_97, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm q_97 (ATerm), ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    t = _2_0(_id, q_97, t);
    return(t);
  }
  t = iowrap_2_0(d_4, _fail, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_1_0(stratego_specification_0_0, t);
  return(t);
}
