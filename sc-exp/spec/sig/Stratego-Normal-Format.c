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
ATerm term_u_16;
ATerm term_p_15;
ATerm term_h_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_u_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_q_12;
ATerm term_l_12;
ATerm term_f_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_w_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_a_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_o_8;
ATerm term_m_8;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_s_7;
ATerm term_n_7;
ATerm term_i_7;
ATerm term_f_5;
void init_constant_terms (void)
{
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym__2, term_r_8, term_d_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_u_7);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_u_7);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym__2, term_e_13, term_f_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym__2, term_h_14, term_u_7);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__2, term_o_14, term_u_7);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym__2, term_f_12, term_u_7);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym__3, term_e_13, term_f_13, (ATerm) ATempty);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm ConstType_1 (ATerm, ATerm u_61 (ATerm));
ATerm FunType_2 (ATerm, ATerm v_61 (ATerm), ATerm w_61 (ATerm));
ATerm Let_2 (ATerm, ATerm s_65 (ATerm), ATerm t_65 (ATerm));
ATerm Op_2 (ATerm, ATerm o_62 (ATerm), ATerm p_62 (ATerm));
ATerm Var_1 (ATerm, ATerm n_0 (ATerm));
ATerm As_2 (ATerm, ATerm z_62 (ATerm), ATerm a_63 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm f_63 (ATerm));
ATerm Str_1 (ATerm, ATerm m_62 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm l_62 (ATerm));
ATerm Int_1 (ATerm, ATerm k_62 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm PrimT_3 (ATerm, ATerm y_66 (ATerm), ATerm z_66 (ATerm), ATerm a_67 (ATerm));
ATerm Where_1 (ATerm, ATerm s_66 (ATerm));
ATerm Scope_2 (ATerm, ATerm c_66 (ATerm), ATerm d_66 (ATerm));
ATerm Build_1 (ATerm, ATerm a_66 (ATerm));
ATerm Match_1 (ATerm, ATerm z_65 (ATerm));
ATerm Thread_1 (ATerm, ATerm g_67 (ATerm));
ATerm All_1 (ATerm, ATerm f_67 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm e_67 (ATerm));
ATerm Cong_2 (ATerm, ATerm f_61 (ATerm), ATerm g_61 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm b_67 (ATerm), ATerm c_67 (ATerm));
ATerm Rec_2 (ATerm, ATerm p_66 (ATerm), ATerm q_66 (ATerm));
ATerm SVar_1 (ATerm, ATerm r_65 (ATerm));
ATerm CallT_3 (ATerm, ATerm w_65 (ATerm), ATerm x_65 (ATerm), ATerm y_65 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm k_66 (ATerm), ATerm l_66 (ATerm));
ATerm GChoice_2 (ATerm, ATerm k_65 (ATerm), ATerm l_65 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm m_66 (ATerm), ATerm n_66 (ATerm), ATerm o_66 (ATerm));
ATerm LChoice_2 (ATerm, ATerm i_66 (ATerm), ATerm j_66 (ATerm));
ATerm Choice_2 (ATerm, ATerm g_65 (ATerm), ATerm h_65 (ATerm));
ATerm Seq_2 (ATerm, ATerm g_66 (ATerm), ATerm h_66 (ATerm));
ATerm Test_1 (ATerm, ATerm t_66 (ATerm));
ATerm Not_1 (ATerm, ATerm r_66 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm d_68 (ATerm), ATerm e_68 (ATerm));
ATerm Mod_2 (ATerm, ATerm v_67 (ATerm), ATerm w_67 (ATerm));
ATerm SDefT_4 (ATerm, ATerm k_68 (ATerm), ATerm l_68 (ATerm), ATerm m_68 (ATerm), ATerm n_68 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm z_81 (ATerm));
ATerm Strategies_1 (ATerm, ATerm j_61 (ATerm));
ATerm Specification_1 (ATerm, ATerm o_61 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm u_59 (ATerm), ATerm v_59 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_82 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm m_95 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm i_94 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm k_97 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm u_93 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm m_89 (ATerm), ATerm n_89 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm x_87 (ATerm), ATerm y_87 (ATerm));
ATerm crush_2 (ATerm, ATerm q_91 (ATerm), ATerm r_91 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_95 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm i_98 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm j_100 (ATerm));
ATerm map_1 (ATerm, ATerm w_81 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm i_100 (ATerm));
ATerm Program_1 (ATerm, ATerm d_74 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm e_74 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_82 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_99 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_74 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm n_100 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm d_61 (ATerm), ATerm e_61 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm l_100 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm k_100 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm n_98 (ATerm));
ATerm iowrap_4 (ATerm, ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm c_98 (ATerm));
ATerm iowrap_3 (ATerm, ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm));
ATerm iowrap_2 (ATerm, ATerm r_97 (ATerm), ATerm s_97 (ATerm));
ATerm iowrap_1 (ATerm, ATerm o_97 (ATerm));
ATerm main_0 (ATerm);
ATerm ConstType_1 (ATerm t, ATerm u_61 (ATerm))
{
  ATerm x_8 = NULL,b_9 = NULL;
  x_8 = t;
  w_8 :
  if(match_cons(x_8, sym_ConstType_1))
    {
      b_9 = ATgetArgument(x_8, 0);
      {
        ATerm x_10 = NULL,z_10 = NULL;
        ATerm y_10 = NULL;
        t = SSLgetAnnotations(not_null(x_8));
        {
          y_10 = t;
          if(((x_10 != NULL) && (x_10 != y_10)))
            _fail(y_10);
          else
            x_10 = y_10;
        }
        {
          t = not_null(b_9);
          {
            ATerm o_11 = NULL;
            t = u_61(t);
            {
              z_10 = t;
              {
                ATerm p_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ConstType_1, not_null(z_10)), not_null(x_10));
                {
                  p_11 = t;
                  if(((o_11 != NULL) && (o_11 != p_11)))
                    _fail(p_11);
                  else
                    o_11 = p_11;
                }
                t = not_null(o_11);
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
ATerm FunType_2 (ATerm t, ATerm v_61 (ATerm), ATerm w_61 (ATerm))
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL;
  n_12 = t;
  m_12 :
  if(match_cons(n_12, sym_FunType_2))
    {
      o_12 = ATgetArgument(n_12, 0);
      p_12 = ATgetArgument(n_12, 1);
      {
        ATerm t_12 = NULL,v_12 = NULL;
        ATerm u_12 = NULL;
        t = SSLgetAnnotations(not_null(n_12));
        {
          u_12 = t;
          if(((t_12 != NULL) && (t_12 != u_12)))
            _fail(u_12);
          else
            t_12 = u_12;
        }
        {
          t = not_null(o_12);
          {
            ATerm x_12 = NULL;
            t = v_61(t);
            {
              v_12 = t;
              {
                t = not_null(p_12);
                {
                  ATerm z_12 = NULL;
                  t = w_61(t);
                  {
                    x_12 = t;
                    {
                      ATerm a_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunType_2, not_null(v_12), not_null(x_12)), not_null(t_12));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2 (ATerm t, ATerm s_65 (ATerm), ATerm t_65 (ATerm))
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
  m_13 = t;
  l_13 :
  if(match_cons(m_13, sym_Let_2))
    {
      n_13 = ATgetArgument(m_13, 0);
      o_13 = ATgetArgument(m_13, 1);
      {
        ATerm s_13 = NULL,u_13 = NULL;
        ATerm t_13 = NULL;
        t = SSLgetAnnotations(not_null(m_13));
        {
          t_13 = t;
          if(((s_13 != NULL) && (s_13 != t_13)))
            _fail(t_13);
          else
            s_13 = t_13;
        }
        {
          t = not_null(n_13);
          {
            ATerm w_13 = NULL;
            t = s_65(t);
            {
              u_13 = t;
              {
                t = not_null(o_13);
                {
                  ATerm y_13 = NULL;
                  t = t_65(t);
                  {
                    w_13 = t;
                    {
                      ATerm z_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(u_13), not_null(w_13)), not_null(s_13));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm o_62 (ATerm), ATerm p_62 (ATerm))
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
  l_14 = t;
  k_14 :
  if(match_cons(l_14, sym_Op_2))
    {
      m_14 = ATgetArgument(l_14, 0);
      n_14 = ATgetArgument(l_14, 1);
      {
        ATerm r_14 = NULL,t_14 = NULL;
        ATerm s_14 = NULL;
        t = SSLgetAnnotations(not_null(l_14));
        {
          s_14 = t;
          if(((r_14 != NULL) && (r_14 != s_14)))
            _fail(s_14);
          else
            r_14 = s_14;
        }
        {
          t = not_null(m_14);
          {
            ATerm v_14 = NULL;
            t = o_62(t);
            {
              t_14 = t;
              {
                t = not_null(n_14);
                {
                  ATerm x_14 = NULL;
                  t = p_62(t);
                  {
                    v_14 = t;
                    {
                      ATerm y_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(t_14), not_null(v_14)), not_null(r_14));
                      {
                        y_14 = t;
                        if(((x_14 != NULL) && (x_14 != y_14)))
                          _fail(y_14);
                        else
                          x_14 = y_14;
                      }
                      t = not_null(x_14);
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
ATerm Var_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm r_15 = NULL,s_15 = NULL;
  r_15 = t;
  q_15 :
  if(match_cons(r_15, sym_Var_1))
    {
      s_15 = ATgetArgument(r_15, 0);
      {
        ATerm k_4 = t;
        int l_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_15 = NULL,x_15 = NULL;
            ATerm w_15 = NULL;
            t = SSLgetAnnotations(not_null(r_15));
            {
              w_15 = t;
              if(((v_15 != NULL) && (v_15 != w_15)))
                _fail(w_15);
              else
                v_15 = w_15;
            }
            {
              t = not_null(s_15);
              {
                ATerm z_15 = NULL;
                t = n_0(t);
                {
                  x_15 = t;
                  {
                    ATerm a_16 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(x_15)), not_null(v_15));
                    {
                      a_16 = t;
                      if(((z_15 != NULL) && (z_15 != a_16)))
                        _fail(a_16);
                      else
                        z_15 = a_16;
                    }
                    t = not_null(z_15);
                  }
                }
              }
            }
            ;
            LocalPopChoice(l_4);
          }
        else
          {
            t = k_4;
            {
              ATerm m_4 = t;
              int n_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_16 = NULL,f_16 = NULL;
                  ATerm e_16 = NULL;
                  t = SSLgetAnnotations(not_null(r_15));
                  {
                    e_16 = t;
                    if(((d_16 != NULL) && (d_16 != e_16)))
                      _fail(e_16);
                    else
                      d_16 = e_16;
                  }
                  {
                    t = not_null(s_15);
                    {
                      ATerm h_16 = NULL;
                      t = n_0(t);
                      {
                        f_16 = t;
                        {
                          ATerm i_16 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(f_16)), not_null(d_16));
                          {
                            i_16 = t;
                            if(((h_16 != NULL) && (h_16 != i_16)))
                              _fail(i_16);
                            else
                              h_16 = i_16;
                          }
                          t = not_null(h_16);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(n_4);
                }
              else
                {
                  t = m_4;
                  {
                    ATerm l_16 = NULL,n_16 = NULL;
                    ATerm m_16 = NULL;
                    t = SSLgetAnnotations(not_null(r_15));
                    {
                      m_16 = t;
                      if(((l_16 != NULL) && (l_16 != m_16)))
                        _fail(m_16);
                      else
                        l_16 = m_16;
                    }
                    {
                      t = not_null(s_15);
                      {
                        ATerm p_16 = NULL;
                        t = n_0(t);
                        {
                          n_16 = t;
                          {
                            ATerm q_16 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(n_16)), not_null(l_16));
                            {
                              q_16 = t;
                              if(((p_16 != NULL) && (p_16 != q_16)))
                                _fail(q_16);
                              else
                                p_16 = q_16;
                            }
                            t = not_null(p_16);
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
ATerm As_2 (ATerm t, ATerm z_62 (ATerm), ATerm a_63 (ATerm))
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
  j_17 = t;
  i_17 :
  if(match_cons(j_17, sym_As_2))
    {
      k_17 = ATgetArgument(j_17, 0);
      l_17 = ATgetArgument(j_17, 1);
      {
        ATerm p_17 = NULL,r_17 = NULL;
        ATerm q_17 = NULL;
        t = SSLgetAnnotations(not_null(j_17));
        {
          q_17 = t;
          if(((p_17 != NULL) && (p_17 != q_17)))
            _fail(q_17);
          else
            p_17 = q_17;
        }
        {
          t = not_null(k_17);
          {
            ATerm t_17 = NULL;
            t = z_62(t);
            {
              r_17 = t;
              {
                t = not_null(l_17);
                {
                  ATerm v_17 = NULL;
                  t = a_63(t);
                  {
                    t_17 = t;
                    {
                      ATerm w_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(r_17), not_null(t_17)), not_null(p_17));
                      {
                        w_17 = t;
                        if(((v_17 != NULL) && (v_17 != w_17)))
                          _fail(w_17);
                        else
                          v_17 = w_17;
                      }
                      t = not_null(v_17);
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
ATerm BuildDefault_1 (ATerm t, ATerm f_63 (ATerm))
{
  ATerm h_18 = NULL,i_18 = NULL;
  h_18 = t;
  g_18 :
  if(match_cons(h_18, sym_BuildDefault_1))
    {
      i_18 = ATgetArgument(h_18, 0);
      {
        ATerm l_18 = NULL,n_18 = NULL;
        ATerm m_18 = NULL;
        t = SSLgetAnnotations(not_null(h_18));
        {
          m_18 = t;
          if(((l_18 != NULL) && (l_18 != m_18)))
            _fail(m_18);
          else
            l_18 = m_18;
        }
        {
          t = not_null(i_18);
          {
            ATerm p_18 = NULL;
            t = f_63(t);
            {
              n_18 = t;
              {
                ATerm q_18 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(n_18)), not_null(l_18));
                {
                  q_18 = t;
                  if(((p_18 != NULL) && (p_18 != q_18)))
                    _fail(q_18);
                  else
                    p_18 = q_18;
                }
                t = not_null(p_18);
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
ATerm Str_1 (ATerm t, ATerm m_62 (ATerm))
{
  ATerm a_19 = NULL,b_19 = NULL;
  a_19 = t;
  z_18 :
  if(match_cons(a_19, sym_Str_1))
    {
      b_19 = ATgetArgument(a_19, 0);
      {
        ATerm e_19 = NULL,g_19 = NULL;
        ATerm f_19 = NULL;
        t = SSLgetAnnotations(not_null(a_19));
        {
          f_19 = t;
          if(((e_19 != NULL) && (e_19 != f_19)))
            _fail(f_19);
          else
            e_19 = f_19;
        }
        {
          t = not_null(b_19);
          {
            ATerm i_19 = NULL;
            t = m_62(t);
            {
              g_19 = t;
              {
                ATerm j_19 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(g_19)), not_null(e_19));
                {
                  j_19 = t;
                  if(((i_19 != NULL) && (i_19 != j_19)))
                    _fail(j_19);
                  else
                    i_19 = j_19;
                }
                t = not_null(i_19);
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
ATerm is_real_0 (ATerm t)
{
  ATerm p_19 = NULL;
  p_19 = t;
  t = SSL_is_real(not_null(p_19));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm l_62 (ATerm))
{
  ATerm x_19 = NULL,y_19 = NULL;
  x_19 = t;
  w_19 :
  if(match_cons(x_19, sym_Real_1))
    {
      y_19 = ATgetArgument(x_19, 0);
      {
        ATerm b_20 = NULL,d_20 = NULL;
        ATerm c_20 = NULL;
        t = SSLgetAnnotations(not_null(x_19));
        {
          c_20 = t;
          if(((b_20 != NULL) && (b_20 != c_20)))
            _fail(c_20);
          else
            b_20 = c_20;
        }
        {
          t = not_null(y_19);
          {
            ATerm f_20 = NULL;
            t = l_62(t);
            {
              d_20 = t;
              {
                ATerm g_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(d_20)), not_null(b_20));
                {
                  g_20 = t;
                  if(((f_20 != NULL) && (f_20 != g_20)))
                    _fail(g_20);
                  else
                    f_20 = g_20;
                }
                t = not_null(f_20);
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
ATerm Int_1 (ATerm t, ATerm k_62 (ATerm))
{
  ATerm q_20 = NULL,r_20 = NULL;
  q_20 = t;
  p_20 :
  if(match_cons(q_20, sym_Int_1))
    {
      r_20 = ATgetArgument(q_20, 0);
      {
        ATerm u_20 = NULL,w_20 = NULL;
        ATerm v_20 = NULL;
        t = SSLgetAnnotations(not_null(q_20));
        {
          v_20 = t;
          if(((u_20 != NULL) && (u_20 != v_20)))
            _fail(v_20);
          else
            u_20 = v_20;
        }
        {
          t = not_null(r_20);
          {
            ATerm y_20 = NULL;
            t = k_62(t);
            {
              w_20 = t;
              {
                ATerm z_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(w_20)), not_null(u_20));
                {
                  z_20 = t;
                  if(((y_20 != NULL) && (y_20 != z_20)))
                    _fail(z_20);
                  else
                    y_20 = z_20;
                }
                t = not_null(y_20);
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
ATerm Wld_0 (ATerm t)
{
  ATerm i_21 = NULL;
  i_21 = t;
  h_21 :
  if(match_cons(i_21, sym_Wld_0))
    {
      ATerm k_21 = NULL,m_21 = NULL;
      ATerm o_4;
      o_4 = t;
      {
        ATerm l_21 = NULL;
        t = SSLgetAnnotations(not_null(i_21));
        {
          l_21 = t;
          if(((k_21 != NULL) && (k_21 != l_21)))
            _fail(l_21);
          else
            k_21 = l_21;
        }
      }
      t = o_4;
      {
        ATerm n_21 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(k_21));
        {
          n_21 = t;
          if(((m_21 != NULL) && (m_21 != n_21)))
            _fail(n_21);
          else
            m_21 = n_21;
        }
        t = not_null(m_21);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm p_4 = t;
  int q_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
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
            t = Var_1(t, is_string_0);
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
                  t = Int_1(t, is_int_0);
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
                        t = Real_1(t, is_real_0);
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
                              t = Str_1(t, is_string_0);
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
                                    t = BuildDefault_1(t, term_expression_0);
                                    ;
                                    LocalPopChoice(a_5);
                                  }
                                else
                                  {
                                    t = z_4;
                                    {
                                      ATerm b_5 = t;
                                      int c_5 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm c_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, c_0, term_expression_0);
                                          ;
                                          LocalPopChoice(c_5);
                                        }
                                      else
                                        {
                                          t = b_5;
                                          {
                                            ATerm d_5 = t;
                                            int e_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm e_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, e_0);
                                                ;
                                                LocalPopChoice(e_5);
                                              }
                                            else
                                              {
                                                t = d_5;
                                                {
                                                  ATerm f_0 (ATerm t)
                                                  {
                                                    t = term_f_5;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, f_0);
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
ATerm PrimT_3 (ATerm t, ATerm y_66 (ATerm), ATerm z_66 (ATerm), ATerm a_67 (ATerm))
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
  z_21 = t;
  y_21 :
  if(match_cons(z_21, sym_PrimT_3))
    {
      a_22 = ATgetArgument(z_21, 0);
      b_22 = ATgetArgument(z_21, 1);
      c_22 = ATgetArgument(z_21, 2);
      {
        ATerm h_22 = NULL,j_22 = NULL;
        ATerm i_22 = NULL;
        t = SSLgetAnnotations(not_null(z_21));
        {
          i_22 = t;
          if(((h_22 != NULL) && (h_22 != i_22)))
            _fail(i_22);
          else
            h_22 = i_22;
        }
        {
          t = not_null(a_22);
          {
            ATerm l_22 = NULL;
            t = y_66(t);
            {
              j_22 = t;
              {
                t = not_null(b_22);
                {
                  ATerm n_22 = NULL;
                  t = z_66(t);
                  {
                    l_22 = t;
                    {
                      t = not_null(c_22);
                      {
                        ATerm p_22 = NULL;
                        t = a_67(t);
                        {
                          n_22 = t;
                          {
                            ATerm q_22 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(j_22), not_null(l_22), not_null(n_22)), not_null(h_22));
                            {
                              q_22 = t;
                              if(((p_22 != NULL) && (p_22 != q_22)))
                                _fail(q_22);
                              else
                                p_22 = q_22;
                            }
                            t = not_null(p_22);
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
ATerm Where_1 (ATerm t, ATerm s_66 (ATerm))
{
  ATerm c_23 = NULL,d_23 = NULL;
  c_23 = t;
  b_23 :
  if(match_cons(c_23, sym_Where_1))
    {
      d_23 = ATgetArgument(c_23, 0);
      {
        ATerm g_23 = NULL,i_23 = NULL;
        ATerm h_23 = NULL;
        t = SSLgetAnnotations(not_null(c_23));
        {
          h_23 = t;
          if(((g_23 != NULL) && (g_23 != h_23)))
            _fail(h_23);
          else
            g_23 = h_23;
        }
        {
          t = not_null(d_23);
          {
            ATerm k_23 = NULL;
            t = s_66(t);
            {
              i_23 = t;
              {
                ATerm l_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(i_23)), not_null(g_23));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm c_66 (ATerm), ATerm d_66 (ATerm))
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
  w_23 = t;
  v_23 :
  if(match_cons(w_23, sym_Scope_2))
    {
      x_23 = ATgetArgument(w_23, 0);
      y_23 = ATgetArgument(w_23, 1);
      {
        ATerm c_24 = NULL,e_24 = NULL;
        ATerm d_24 = NULL;
        t = SSLgetAnnotations(not_null(w_23));
        {
          d_24 = t;
          if(((c_24 != NULL) && (c_24 != d_24)))
            _fail(d_24);
          else
            c_24 = d_24;
        }
        {
          t = not_null(x_23);
          {
            ATerm g_24 = NULL;
            t = c_66(t);
            {
              e_24 = t;
              {
                t = not_null(y_23);
                {
                  ATerm i_24 = NULL;
                  t = d_66(t);
                  {
                    g_24 = t;
                    {
                      ATerm j_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(e_24), not_null(g_24)), not_null(c_24));
                      {
                        j_24 = t;
                        if(((i_24 != NULL) && (i_24 != j_24)))
                          _fail(j_24);
                        else
                          i_24 = j_24;
                      }
                      t = not_null(i_24);
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
ATerm Build_1 (ATerm t, ATerm a_66 (ATerm))
{
  ATerm u_24 = NULL,v_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym_Build_1))
    {
      v_24 = ATgetArgument(u_24, 0);
      {
        ATerm y_24 = NULL,a_25 = NULL;
        ATerm z_24 = NULL;
        t = SSLgetAnnotations(not_null(u_24));
        {
          z_24 = t;
          if(((y_24 != NULL) && (y_24 != z_24)))
            _fail(z_24);
          else
            y_24 = z_24;
        }
        {
          t = not_null(v_24);
          {
            ATerm c_25 = NULL;
            t = a_66(t);
            {
              a_25 = t;
              {
                ATerm d_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(a_25)), not_null(y_24));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Match_1 (ATerm t, ATerm z_65 (ATerm))
{
  ATerm n_25 = NULL,o_25 = NULL;
  n_25 = t;
  m_25 :
  if(match_cons(n_25, sym_Match_1))
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
            t = z_65(t);
            {
              t_25 = t;
              {
                ATerm w_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(t_25)), not_null(r_25));
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
ATerm Thread_1 (ATerm t, ATerm g_67 (ATerm))
{
  ATerm g_26 = NULL,h_26 = NULL;
  g_26 = t;
  f_26 :
  if(match_cons(g_26, sym_Thread_1))
    {
      h_26 = ATgetArgument(g_26, 0);
      {
        ATerm k_26 = NULL,m_26 = NULL;
        ATerm l_26 = NULL;
        t = SSLgetAnnotations(not_null(g_26));
        {
          l_26 = t;
          if(((k_26 != NULL) && (k_26 != l_26)))
            _fail(l_26);
          else
            k_26 = l_26;
        }
        {
          t = not_null(h_26);
          {
            ATerm o_26 = NULL;
            t = g_67(t);
            {
              m_26 = t;
              {
                ATerm p_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(m_26)), not_null(k_26));
                {
                  p_26 = t;
                  if(((o_26 != NULL) && (o_26 != p_26)))
                    _fail(p_26);
                  else
                    o_26 = p_26;
                }
                t = not_null(o_26);
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
ATerm All_1 (ATerm t, ATerm f_67 (ATerm))
{
  ATerm z_26 = NULL,a_27 = NULL;
  z_26 = t;
  y_26 :
  if(match_cons(z_26, sym_All_1))
    {
      a_27 = ATgetArgument(z_26, 0);
      {
        ATerm d_27 = NULL,f_27 = NULL;
        ATerm e_27 = NULL;
        t = SSLgetAnnotations(not_null(z_26));
        {
          e_27 = t;
          if(((d_27 != NULL) && (d_27 != e_27)))
            _fail(e_27);
          else
            d_27 = e_27;
        }
        {
          t = not_null(a_27);
          {
            ATerm h_27 = NULL;
            t = f_67(t);
            {
              f_27 = t;
              {
                ATerm i_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(f_27)), not_null(d_27));
                {
                  i_27 = t;
                  if(((h_27 != NULL) && (h_27 != i_27)))
                    _fail(i_27);
                  else
                    h_27 = i_27;
                }
                t = not_null(h_27);
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
ATerm Some_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm b_28 = NULL,c_28 = NULL;
  b_28 = t;
  a_28 :
  if(match_cons(b_28, sym_Some_1))
    {
      c_28 = ATgetArgument(b_28, 0);
      {
        ATerm g_5 = t;
        int h_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_28 = NULL,k_28 = NULL;
            ATerm j_28 = NULL;
            t = SSLgetAnnotations(not_null(b_28));
            {
              j_28 = t;
              if(((f_28 != NULL) && (f_28 != j_28)))
                _fail(j_28);
              else
                f_28 = j_28;
            }
            {
              t = not_null(c_28);
              {
                ATerm m_28 = NULL;
                t = m_0(t);
                {
                  k_28 = t;
                  {
                    ATerm n_28 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(k_28)), not_null(f_28));
                    {
                      n_28 = t;
                      if(((m_28 != NULL) && (m_28 != n_28)))
                        _fail(n_28);
                      else
                        m_28 = n_28;
                    }
                    t = not_null(m_28);
                  }
                }
              }
            }
            ;
            LocalPopChoice(h_5);
          }
        else
          {
            t = g_5;
            {
              ATerm q_28 = NULL,s_28 = NULL;
              ATerm r_28 = NULL;
              t = SSLgetAnnotations(not_null(b_28));
              {
                r_28 = t;
                if(((q_28 != NULL) && (q_28 != r_28)))
                  _fail(r_28);
                else
                  q_28 = r_28;
              }
              {
                t = not_null(c_28);
                {
                  ATerm u_28 = NULL;
                  t = m_0(t);
                  {
                    s_28 = t;
                    {
                      ATerm v_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(s_28)), not_null(q_28));
                      {
                        v_28 = t;
                        if(((u_28 != NULL) && (u_28 != v_28)))
                          _fail(v_28);
                        else
                          u_28 = v_28;
                      }
                      t = not_null(u_28);
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
ATerm One_1 (ATerm t, ATerm e_67 (ATerm))
{
  ATerm j_29 = NULL,k_29 = NULL;
  j_29 = t;
  i_29 :
  if(match_cons(j_29, sym_One_1))
    {
      k_29 = ATgetArgument(j_29, 0);
      {
        ATerm n_29 = NULL,p_29 = NULL;
        ATerm o_29 = NULL;
        t = SSLgetAnnotations(not_null(j_29));
        {
          o_29 = t;
          if(((n_29 != NULL) && (n_29 != o_29)))
            _fail(o_29);
          else
            n_29 = o_29;
        }
        {
          t = not_null(k_29);
          {
            ATerm r_29 = NULL;
            t = e_67(t);
            {
              p_29 = t;
              {
                ATerm s_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(p_29)), not_null(n_29));
                {
                  s_29 = t;
                  if(((r_29 != NULL) && (r_29 != s_29)))
                    _fail(s_29);
                  else
                    r_29 = s_29;
                }
                t = not_null(r_29);
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
ATerm Cong_2 (ATerm t, ATerm f_61 (ATerm), ATerm g_61 (ATerm))
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  d_30 = t;
  c_30 :
  if(match_cons(d_30, sym_Cong_2))
    {
      e_30 = ATgetArgument(d_30, 0);
      f_30 = ATgetArgument(d_30, 1);
      {
        ATerm j_30 = NULL,l_30 = NULL;
        ATerm k_30 = NULL;
        t = SSLgetAnnotations(not_null(d_30));
        {
          k_30 = t;
          if(((j_30 != NULL) && (j_30 != k_30)))
            _fail(k_30);
          else
            j_30 = k_30;
        }
        {
          t = not_null(e_30);
          {
            ATerm n_30 = NULL;
            t = f_61(t);
            {
              l_30 = t;
              {
                t = not_null(f_30);
                {
                  ATerm p_30 = NULL;
                  t = g_61(t);
                  {
                    n_30 = t;
                    {
                      ATerm q_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(l_30), not_null(n_30)), not_null(j_30));
                      {
                        q_30 = t;
                        if(((p_30 != NULL) && (p_30 != q_30)))
                          _fail(q_30);
                        else
                          p_30 = q_30;
                      }
                      t = not_null(p_30);
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
ATerm is_int_0 (ATerm t)
{
  ATerm x_30 = NULL;
  x_30 = t;
  t = SSL_is_int(not_null(x_30));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm b_67 (ATerm), ATerm c_67 (ATerm))
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
  g_31 = t;
  f_31 :
  if(match_cons(g_31, sym_Path_2))
    {
      h_31 = ATgetArgument(g_31, 0);
      i_31 = ATgetArgument(g_31, 1);
      {
        ATerm m_31 = NULL,o_31 = NULL;
        ATerm n_31 = NULL;
        t = SSLgetAnnotations(not_null(g_31));
        {
          n_31 = t;
          if(((m_31 != NULL) && (m_31 != n_31)))
            _fail(n_31);
          else
            m_31 = n_31;
        }
        {
          t = not_null(h_31);
          {
            ATerm q_31 = NULL;
            t = b_67(t);
            {
              o_31 = t;
              {
                t = not_null(i_31);
                {
                  ATerm s_31 = NULL;
                  t = c_67(t);
                  {
                    q_31 = t;
                    {
                      ATerm t_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(o_31), not_null(q_31)), not_null(m_31));
                      {
                        t_31 = t;
                        if(((s_31 != NULL) && (s_31 != t_31)))
                          _fail(t_31);
                        else
                          s_31 = t_31;
                      }
                      t = not_null(s_31);
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
ATerm Rec_2 (ATerm t, ATerm p_66 (ATerm), ATerm q_66 (ATerm))
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
  f_32 = t;
  e_32 :
  if(match_cons(f_32, sym_Rec_2))
    {
      g_32 = ATgetArgument(f_32, 0);
      h_32 = ATgetArgument(f_32, 1);
      {
        ATerm l_32 = NULL,n_32 = NULL;
        ATerm m_32 = NULL;
        t = SSLgetAnnotations(not_null(f_32));
        {
          m_32 = t;
          if(((l_32 != NULL) && (l_32 != m_32)))
            _fail(m_32);
          else
            l_32 = m_32;
        }
        {
          t = not_null(g_32);
          {
            ATerm p_32 = NULL;
            t = p_66(t);
            {
              n_32 = t;
              {
                t = not_null(h_32);
                {
                  ATerm r_32 = NULL;
                  t = q_66(t);
                  {
                    p_32 = t;
                    {
                      ATerm s_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(n_32), not_null(p_32)), not_null(l_32));
                      {
                        s_32 = t;
                        if(((r_32 != NULL) && (r_32 != s_32)))
                          _fail(s_32);
                        else
                          r_32 = s_32;
                      }
                      t = not_null(r_32);
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
ATerm SVar_1 (ATerm t, ATerm r_65 (ATerm))
{
  ATerm d_33 = NULL,e_33 = NULL;
  d_33 = t;
  c_33 :
  if(match_cons(d_33, sym_SVar_1))
    {
      e_33 = ATgetArgument(d_33, 0);
      {
        ATerm h_33 = NULL,j_33 = NULL;
        ATerm i_33 = NULL;
        t = SSLgetAnnotations(not_null(d_33));
        {
          i_33 = t;
          if(((h_33 != NULL) && (h_33 != i_33)))
            _fail(i_33);
          else
            h_33 = i_33;
        }
        {
          t = not_null(e_33);
          {
            ATerm l_33 = NULL;
            t = r_65(t);
            {
              j_33 = t;
              {
                ATerm m_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(j_33)), not_null(h_33));
                {
                  m_33 = t;
                  if(((l_33 != NULL) && (l_33 != m_33)))
                    _fail(m_33);
                  else
                    l_33 = m_33;
                }
                t = not_null(l_33);
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
ATerm CallT_3 (ATerm t, ATerm w_65 (ATerm), ATerm x_65 (ATerm), ATerm y_65 (ATerm))
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL;
  a_34 = t;
  z_33 :
  if(match_cons(a_34, sym_CallT_3))
    {
      b_34 = ATgetArgument(a_34, 0);
      c_34 = ATgetArgument(a_34, 1);
      d_34 = ATgetArgument(a_34, 2);
      {
        ATerm i_34 = NULL,k_34 = NULL;
        ATerm j_34 = NULL;
        t = SSLgetAnnotations(not_null(a_34));
        {
          j_34 = t;
          if(((i_34 != NULL) && (i_34 != j_34)))
            _fail(j_34);
          else
            i_34 = j_34;
        }
        {
          t = not_null(b_34);
          {
            ATerm m_34 = NULL;
            t = w_65(t);
            {
              k_34 = t;
              {
                t = not_null(c_34);
                {
                  ATerm o_34 = NULL;
                  t = x_65(t);
                  {
                    m_34 = t;
                    {
                      t = not_null(d_34);
                      {
                        ATerm q_34 = NULL;
                        t = y_65(t);
                        {
                          o_34 = t;
                          {
                            ATerm r_34 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(k_34), not_null(m_34), not_null(o_34)), not_null(i_34));
                            {
                              r_34 = t;
                              if(((q_34 != NULL) && (q_34 != r_34)))
                                _fail(r_34);
                              else
                                q_34 = r_34;
                            }
                            t = not_null(q_34);
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
ATerm LGChoice_2 (ATerm t, ATerm k_66 (ATerm), ATerm l_66 (ATerm))
{
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL;
  e_35 = t;
  d_35 :
  if(match_cons(e_35, sym_LGChoice_2))
    {
      f_35 = ATgetArgument(e_35, 0);
      g_35 = ATgetArgument(e_35, 1);
      {
        ATerm m_35 = NULL,o_35 = NULL;
        ATerm n_35 = NULL;
        t = SSLgetAnnotations(not_null(e_35));
        {
          n_35 = t;
          if(((m_35 != NULL) && (m_35 != n_35)))
            _fail(n_35);
          else
            m_35 = n_35;
        }
        {
          t = not_null(f_35);
          {
            ATerm q_35 = NULL;
            t = k_66(t);
            {
              o_35 = t;
              {
                t = not_null(g_35);
                {
                  ATerm s_35 = NULL;
                  t = l_66(t);
                  {
                    q_35 = t;
                    {
                      ATerm t_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(o_35), not_null(q_35)), not_null(m_35));
                      {
                        t_35 = t;
                        if(((s_35 != NULL) && (s_35 != t_35)))
                          _fail(t_35);
                        else
                          s_35 = t_35;
                      }
                      t = not_null(s_35);
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
ATerm GChoice_2 (ATerm t, ATerm k_65 (ATerm), ATerm l_65 (ATerm))
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL;
  f_36 = t;
  e_36 :
  if(match_cons(f_36, sym_GChoice_2))
    {
      g_36 = ATgetArgument(f_36, 0);
      h_36 = ATgetArgument(f_36, 1);
      {
        ATerm l_36 = NULL,n_36 = NULL;
        ATerm m_36 = NULL;
        t = SSLgetAnnotations(not_null(f_36));
        {
          m_36 = t;
          if(((l_36 != NULL) && (l_36 != m_36)))
            _fail(m_36);
          else
            l_36 = m_36;
        }
        {
          t = not_null(g_36);
          {
            ATerm p_36 = NULL;
            t = k_65(t);
            {
              n_36 = t;
              {
                t = not_null(h_36);
                {
                  ATerm r_36 = NULL;
                  t = l_65(t);
                  {
                    p_36 = t;
                    {
                      ATerm s_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(n_36), not_null(p_36)), not_null(l_36));
                      {
                        s_36 = t;
                        if(((r_36 != NULL) && (r_36 != s_36)))
                          _fail(s_36);
                        else
                          r_36 = s_36;
                      }
                      t = not_null(r_36);
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
ATerm GuardedLChoice_3 (ATerm t, ATerm m_66 (ATerm), ATerm n_66 (ATerm), ATerm o_66 (ATerm))
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL;
  f_37 = t;
  e_37 :
  if(match_cons(f_37, sym_GuardedLChoice_3))
    {
      g_37 = ATgetArgument(f_37, 0);
      h_37 = ATgetArgument(f_37, 1);
      i_37 = ATgetArgument(f_37, 2);
      {
        ATerm n_37 = NULL,p_37 = NULL;
        ATerm o_37 = NULL;
        t = SSLgetAnnotations(not_null(f_37));
        {
          o_37 = t;
          if(((n_37 != NULL) && (n_37 != o_37)))
            _fail(o_37);
          else
            n_37 = o_37;
        }
        {
          t = not_null(g_37);
          {
            ATerm r_37 = NULL;
            t = m_66(t);
            {
              p_37 = t;
              {
                t = not_null(h_37);
                {
                  ATerm t_37 = NULL;
                  t = n_66(t);
                  {
                    r_37 = t;
                    {
                      t = not_null(i_37);
                      {
                        ATerm v_37 = NULL;
                        t = o_66(t);
                        {
                          t_37 = t;
                          {
                            ATerm w_37 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(p_37), not_null(r_37), not_null(t_37)), not_null(n_37));
                            {
                              w_37 = t;
                              if(((v_37 != NULL) && (v_37 != w_37)))
                                _fail(w_37);
                              else
                                v_37 = w_37;
                            }
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm i_66 (ATerm), ATerm j_66 (ATerm))
{
  ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL;
  j_38 = t;
  i_38 :
  if(match_cons(j_38, sym_LChoice_2))
    {
      k_38 = ATgetArgument(j_38, 0);
      l_38 = ATgetArgument(j_38, 1);
      {
        ATerm p_38 = NULL,r_38 = NULL;
        ATerm q_38 = NULL;
        t = SSLgetAnnotations(not_null(j_38));
        {
          q_38 = t;
          if(((p_38 != NULL) && (p_38 != q_38)))
            _fail(q_38);
          else
            p_38 = q_38;
        }
        {
          t = not_null(k_38);
          {
            ATerm t_38 = NULL;
            t = i_66(t);
            {
              r_38 = t;
              {
                t = not_null(l_38);
                {
                  ATerm v_38 = NULL;
                  t = j_66(t);
                  {
                    t_38 = t;
                    {
                      ATerm w_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(r_38), not_null(t_38)), not_null(p_38));
                      {
                        w_38 = t;
                        if(((v_38 != NULL) && (v_38 != w_38)))
                          _fail(w_38);
                        else
                          v_38 = w_38;
                      }
                      t = not_null(v_38);
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
ATerm Choice_2 (ATerm t, ATerm g_65 (ATerm), ATerm h_65 (ATerm))
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL;
  i_39 = t;
  h_39 :
  if(match_cons(i_39, sym_Choice_2))
    {
      j_39 = ATgetArgument(i_39, 0);
      k_39 = ATgetArgument(i_39, 1);
      {
        ATerm o_39 = NULL,q_39 = NULL;
        ATerm p_39 = NULL;
        t = SSLgetAnnotations(not_null(i_39));
        {
          p_39 = t;
          if(((o_39 != NULL) && (o_39 != p_39)))
            _fail(p_39);
          else
            o_39 = p_39;
        }
        {
          t = not_null(j_39);
          {
            ATerm s_39 = NULL;
            t = g_65(t);
            {
              q_39 = t;
              {
                t = not_null(k_39);
                {
                  ATerm u_39 = NULL;
                  t = h_65(t);
                  {
                    s_39 = t;
                    {
                      ATerm v_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(q_39), not_null(s_39)), not_null(o_39));
                      {
                        v_39 = t;
                        if(((u_39 != NULL) && (u_39 != v_39)))
                          _fail(v_39);
                        else
                          u_39 = v_39;
                      }
                      t = not_null(u_39);
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
ATerm Seq_2 (ATerm t, ATerm g_66 (ATerm), ATerm h_66 (ATerm))
{
  ATerm h_40 = NULL,i_40 = NULL,m_40 = NULL;
  h_40 = t;
  g_40 :
  if(match_cons(h_40, sym_Seq_2))
    {
      i_40 = ATgetArgument(h_40, 0);
      m_40 = ATgetArgument(h_40, 1);
      {
        ATerm r_40 = NULL,t_40 = NULL;
        ATerm s_40 = NULL;
        t = SSLgetAnnotations(not_null(h_40));
        {
          s_40 = t;
          if(((r_40 != NULL) && (r_40 != s_40)))
            _fail(s_40);
          else
            r_40 = s_40;
        }
        {
          t = not_null(i_40);
          {
            ATerm v_40 = NULL;
            t = g_66(t);
            {
              t_40 = t;
              {
                t = not_null(m_40);
                {
                  ATerm x_40 = NULL;
                  t = h_66(t);
                  {
                    v_40 = t;
                    {
                      ATerm y_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(t_40), not_null(v_40)), not_null(r_40));
                      {
                        y_40 = t;
                        if(((x_40 != NULL) && (x_40 != y_40)))
                          _fail(y_40);
                        else
                          x_40 = y_40;
                      }
                      t = not_null(x_40);
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
ATerm Test_1 (ATerm t, ATerm t_66 (ATerm))
{
  ATerm j_41 = NULL,k_41 = NULL;
  j_41 = t;
  i_41 :
  if(match_cons(j_41, sym_Test_1))
    {
      k_41 = ATgetArgument(j_41, 0);
      {
        ATerm n_41 = NULL,p_41 = NULL;
        ATerm o_41 = NULL;
        t = SSLgetAnnotations(not_null(j_41));
        {
          o_41 = t;
          if(((n_41 != NULL) && (n_41 != o_41)))
            _fail(o_41);
          else
            n_41 = o_41;
        }
        {
          t = not_null(k_41);
          {
            ATerm r_41 = NULL;
            t = t_66(t);
            {
              p_41 = t;
              {
                ATerm s_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(p_41)), not_null(n_41));
                {
                  s_41 = t;
                  if(((r_41 != NULL) && (r_41 != s_41)))
                    _fail(s_41);
                  else
                    r_41 = s_41;
                }
                t = not_null(r_41);
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
ATerm Not_1 (ATerm t, ATerm r_66 (ATerm))
{
  ATerm c_42 = NULL,d_42 = NULL;
  c_42 = t;
  b_42 :
  if(match_cons(c_42, sym_Not_1))
    {
      d_42 = ATgetArgument(c_42, 0);
      {
        ATerm h_42 = NULL,m_42 = NULL;
        ATerm i_42 = NULL;
        t = SSLgetAnnotations(not_null(c_42));
        {
          i_42 = t;
          if(((h_42 != NULL) && (h_42 != i_42)))
            _fail(i_42);
          else
            h_42 = i_42;
        }
        {
          t = not_null(d_42);
          {
            ATerm o_42 = NULL;
            t = r_66(t);
            {
              m_42 = t;
              {
                ATerm p_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(m_42)), not_null(h_42));
                {
                  p_42 = t;
                  if(((o_42 != NULL) && (o_42 != p_42)))
                    _fail(p_42);
                  else
                    o_42 = p_42;
                }
                t = not_null(o_42);
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
ATerm Fail_0 (ATerm t)
{
  ATerm y_42 = NULL;
  y_42 = t;
  x_42 :
  if(match_cons(y_42, sym_Fail_0))
    {
      ATerm a_43 = NULL,c_43 = NULL;
      ATerm i_5;
      i_5 = t;
      {
        ATerm b_43 = NULL;
        t = SSLgetAnnotations(not_null(y_42));
        {
          b_43 = t;
          if(((a_43 != NULL) && (a_43 != b_43)))
            _fail(b_43);
          else
            a_43 = b_43;
        }
      }
      t = i_5;
      {
        ATerm d_43 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(a_43));
        {
          d_43 = t;
          if(((c_43 != NULL) && (c_43 != d_43)))
            _fail(d_43);
          else
            c_43 = d_43;
        }
        t = not_null(c_43);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm n_43 = NULL;
  n_43 = t;
  m_43 :
  if(match_cons(n_43, sym_Id_0))
    {
      ATerm p_43 = NULL,s_43 = NULL;
      ATerm j_5;
      j_5 = t;
      {
        ATerm r_43 = NULL;
        t = SSLgetAnnotations(not_null(n_43));
        {
          r_43 = t;
          if(((p_43 != NULL) && (p_43 != r_43)))
            _fail(r_43);
          else
            p_43 = r_43;
        }
      }
      t = j_5;
      {
        ATerm t_43 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(p_43));
        {
          t_43 = t;
          if(((s_43 != NULL) && (s_43 != t_43)))
            _fail(t_43);
          else
            s_43 = t_43;
        }
        t = not_null(s_43);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm k_5 = t;
  int l_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
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
            t = Fail_0(t);
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
                  t = Not_1(t, strategy_expression_0);
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
                        t = Test_1(t, strategy_expression_0);
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
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
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
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
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
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
                                                ;
                                                LocalPopChoice(z_5);
                                              }
                                            else
                                              {
                                                t = y_5;
                                                {
                                                  ATerm a_6 = t;
                                                  int b_6 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      ;
                                                      LocalPopChoice(b_6);
                                                    }
                                                  else
                                                    {
                                                      t = a_6;
                                                      {
                                                        ATerm c_6 = t;
                                                        int d_6 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                                  ATerm h_0 (ATerm t)
                                                                  {
                                                                    ATerm q_0 (ATerm t)
                                                                    {
                                                                      ATerm g_6 = t;
                                                                      int h_6 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = is_string_0(t);
                                                                          ;
                                                                          LocalPopChoice(h_6);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = g_6;
                                                                          t = Mod_2(t, is_string_0, is_string_0);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = SVar_1(t, q_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm o_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm p_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, term_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = CallT_3(t, h_0, o_0, p_0);
                                                                  ;
                                                                  LocalPopChoice(f_6);
                                                                }
                                                              else
                                                                {
                                                                  t = e_6;
                                                                  {
                                                                    ATerm i_6 = t;
                                                                    int j_6 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
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
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
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
                                                                                    ATerm r_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, r_0);
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
                                                                                          t = One_1(t, strategy_expression_0);
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
                                                                                                t = Some_1(t, strategy_expression_0);
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
                                                                                                      t = All_1(t, strategy_expression_0);
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
                                                                                                            t = Thread_1(t, strategy_expression_0);
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
                                                                                                                  t = Match_1(t, term_expression_0);
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
                                                                                                                        t = Build_1(t, term_expression_0);
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
                                                                                                                              ATerm s_0 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, s_0, strategy_expression_0);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(b_7);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = a_7;
                                                                                                                              {
                                                                                                                                ATerm c_7 = t;
                                                                                                                                int d_7 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1(t, strategy_expression_0);
                                                                                                                                    ;
                                                                                                                                    LocalPopChoice(d_7);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = c_7;
                                                                                                                                    {
                                                                                                                                      ATerm e_7 = t;
                                                                                                                                      int f_7 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm t_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, strategy_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          ATerm u_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = PrimT_3(t, is_string_0, t_0, u_0);
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(f_7);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = e_7;
                                                                                                                                          {
                                                                                                                                            ATerm g_7 = t;
                                                                                                                                            int h_7 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm v_0 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm w_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    ATerm x_0 (ATerm t)
                                                                                                                                                    {
                                                                                                                                                      ATerm z_0 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        ATerm a_1 (ATerm t)
                                                                                                                                                        {
                                                                                                                                                          ATerm b_1 (ATerm t)
                                                                                                                                                          {
                                                                                                                                                            t = list_1(t, _id);
                                                                                                                                                            return(t);
                                                                                                                                                          }
                                                                                                                                                          t = FunType_2(t, b_1, _id);
                                                                                                                                                          return(t);
                                                                                                                                                        }
                                                                                                                                                        t = VarDec_2(t, is_string_0, a_1);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = list_1(t, z_0);
                                                                                                                                                      return(t);
                                                                                                                                                    }
                                                                                                                                                    ATerm y_0 (ATerm t)
                                                                                                                                                    {
                                                                                                                                                      ATerm c_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        ATerm d_1 (ATerm t)
                                                                                                                                                        {
                                                                                                                                                          t = ConstType_1(t, _id);
                                                                                                                                                          return(t);
                                                                                                                                                        }
                                                                                                                                                        t = VarDec_2(t, is_string_0, d_1);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = list_1(t, c_1);
                                                                                                                                                      return(t);
                                                                                                                                                    }
                                                                                                                                                    t = SDefT_4(t, is_string_0, x_0, y_0, strategy_expression_0);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, w_0);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Let_2(t, v_0, strategy_expression_0);
                                                                                                                                                ;
                                                                                                                                                LocalPopChoice(h_7);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = g_7;
                                                                                                                                                {
                                                                                                                                                  ATerm e_1 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = term_i_7;
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = debug_1(t, e_1);
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
ATerm VarDec_2 (ATerm t, ATerm d_68 (ATerm), ATerm e_68 (ATerm))
{
  ATerm e_44 = NULL,g_44 = NULL,h_44 = NULL;
  e_44 = t;
  d_44 :
  if(match_cons(e_44, sym_VarDec_2))
    {
      g_44 = ATgetArgument(e_44, 0);
      h_44 = ATgetArgument(e_44, 1);
      {
        ATerm l_44 = NULL,n_44 = NULL;
        ATerm m_44 = NULL;
        t = SSLgetAnnotations(not_null(e_44));
        {
          m_44 = t;
          if(((l_44 != NULL) && (l_44 != m_44)))
            _fail(m_44);
          else
            l_44 = m_44;
        }
        {
          t = not_null(g_44);
          {
            ATerm p_44 = NULL;
            t = d_68(t);
            {
              n_44 = t;
              {
                t = not_null(h_44);
                {
                  ATerm r_44 = NULL;
                  t = e_68(t);
                  {
                    p_44 = t;
                    {
                      ATerm s_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(n_44), not_null(p_44)), not_null(l_44));
                      {
                        s_44 = t;
                        if(((r_44 != NULL) && (r_44 != s_44)))
                          _fail(s_44);
                        else
                          r_44 = s_44;
                      }
                      t = not_null(r_44);
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
ATerm Mod_2 (ATerm t, ATerm v_67 (ATerm), ATerm w_67 (ATerm))
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL;
  e_45 = t;
  d_45 :
  if(match_cons(e_45, sym_Mod_2))
    {
      f_45 = ATgetArgument(e_45, 0);
      g_45 = ATgetArgument(e_45, 1);
      {
        ATerm k_45 = NULL,m_45 = NULL;
        ATerm l_45 = NULL;
        t = SSLgetAnnotations(not_null(e_45));
        {
          l_45 = t;
          if(((k_45 != NULL) && (k_45 != l_45)))
            _fail(l_45);
          else
            k_45 = l_45;
        }
        {
          t = not_null(f_45);
          {
            ATerm u_45 = NULL;
            t = v_67(t);
            {
              m_45 = t;
              {
                t = not_null(g_45);
                {
                  ATerm w_45 = NULL;
                  t = w_67(t);
                  {
                    u_45 = t;
                    {
                      ATerm x_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Mod_2, not_null(m_45), not_null(u_45)), not_null(k_45));
                      {
                        x_45 = t;
                        if(((w_45 != NULL) && (w_45 != x_45)))
                          _fail(x_45);
                        else
                          w_45 = x_45;
                      }
                      t = not_null(w_45);
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
ATerm SDefT_4 (ATerm t, ATerm k_68 (ATerm), ATerm l_68 (ATerm), ATerm m_68 (ATerm), ATerm n_68 (ATerm))
{
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL;
  l_46 = t;
  k_46 :
  if(match_cons(l_46, sym_SDefT_4))
    {
      m_46 = ATgetArgument(l_46, 0);
      n_46 = ATgetArgument(l_46, 1);
      o_46 = ATgetArgument(l_46, 2);
      p_46 = ATgetArgument(l_46, 3);
      {
        ATerm v_46 = NULL,x_46 = NULL;
        ATerm w_46 = NULL;
        t = SSLgetAnnotations(not_null(l_46));
        {
          w_46 = t;
          if(((v_46 != NULL) && (v_46 != w_46)))
            _fail(w_46);
          else
            v_46 = w_46;
        }
        {
          t = not_null(m_46);
          {
            ATerm z_46 = NULL;
            t = k_68(t);
            {
              x_46 = t;
              {
                t = not_null(n_46);
                {
                  ATerm b_47 = NULL;
                  t = l_68(t);
                  {
                    z_46 = t;
                    {
                      t = not_null(o_46);
                      {
                        ATerm d_47 = NULL;
                        t = m_68(t);
                        {
                          b_47 = t;
                          {
                            t = not_null(p_46);
                            {
                              ATerm f_47 = NULL;
                              t = n_68(t);
                              {
                                d_47 = t;
                                {
                                  ATerm g_47 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(x_46), not_null(z_46), not_null(b_47), not_null(d_47)), not_null(v_46));
                                  {
                                    g_47 = t;
                                    if(((f_47 != NULL) && (f_47 != g_47)))
                                      _fail(g_47);
                                    else
                                      f_47 = g_47;
                                  }
                                  t = not_null(f_47);
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
ATerm strategy_definition_0 (ATerm t)
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_1 (ATerm t)
      {
        ATerm l_7 = t;
        int m_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_string_0(t);
            ;
            LocalPopChoice(m_7);
          }
        else
          {
            t = l_7;
            t = Mod_2(t, is_string_0, is_string_0);
          }
        return(t);
      }
      ATerm g_1 (ATerm t)
      {
        ATerm i_1 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, i_1);
        return(t);
      }
      ATerm h_1 (ATerm t)
      {
        ATerm j_1 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, j_1);
        return(t);
      }
      t = SDefT_4(t, f_1, g_1, h_1, strategy_expression_0);
      ;
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      {
        ATerm k_1 (ATerm t)
        {
          t = term_n_7;
          return(t);
        }
        t = debug_1(t, k_1);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm z_81 (ATerm))
{
  ATerm o_47 (ATerm t)
  {
    ATerm o_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(p_7);
      }
    else
      {
        t = o_7;
        t = Cons_2(t, z_81, o_47);
      }
    return(t);
  }
  t = o_47(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm j_61 (ATerm))
{
  ATerm u_47 = NULL,v_47 = NULL;
  u_47 = t;
  t_47 :
  if(match_cons(u_47, sym_Strategies_1))
    {
      v_47 = ATgetArgument(u_47, 0);
      {
        ATerm y_47 = NULL,a_48 = NULL;
        ATerm z_47 = NULL;
        t = SSLgetAnnotations(not_null(u_47));
        {
          z_47 = t;
          if(((y_47 != NULL) && (y_47 != z_47)))
            _fail(z_47);
          else
            y_47 = z_47;
        }
        {
          t = not_null(v_47);
          {
            ATerm c_48 = NULL;
            t = j_61(t);
            {
              a_48 = t;
              {
                ATerm d_48 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(a_48)), not_null(y_47));
                {
                  d_48 = t;
                  if(((c_48 != NULL) && (c_48 != d_48)))
                    _fail(d_48);
                  else
                    c_48 = d_48;
                }
                t = not_null(c_48);
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
ATerm Specification_1 (ATerm t, ATerm o_61 (ATerm))
{
  ATerm n_48 = NULL,o_48 = NULL;
  n_48 = t;
  m_48 :
  if(match_cons(n_48, sym_Specification_1))
    {
      o_48 = ATgetArgument(n_48, 0);
      {
        ATerm r_48 = NULL,t_48 = NULL;
        ATerm s_48 = NULL;
        t = SSLgetAnnotations(not_null(n_48));
        {
          s_48 = t;
          if(((r_48 != NULL) && (r_48 != s_48)))
            _fail(s_48);
          else
            r_48 = s_48;
        }
        {
          t = not_null(o_48);
          {
            ATerm v_48 = NULL;
            t = o_61(t);
            {
              t_48 = t;
              {
                ATerm a_49 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(t_48)), not_null(r_48));
                {
                  a_49 = t;
                  if(((v_48 != NULL) && (v_48 != a_49)))
                    _fail(a_49);
                  else
                    v_48 = a_49;
                }
                t = not_null(v_48);
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
ATerm stratego_specification_0 (ATerm t)
{
  ATerm q_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        ATerm m_1 (ATerm t)
        {
          ATerm n_1 (ATerm t)
          {
            ATerm o_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, o_1);
            return(t);
          }
          t = Cons_2(t, n_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, m_1);
        return(t);
      }
      t = Specification_1(t, l_1);
      ;
      LocalPopChoice(r_7);
    }
  else
    {
      t = q_7;
      {
        ATerm p_1 (ATerm t)
        {
          t = term_s_7;
          return(t);
        }
        t = debug_1(t, p_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm u_59 (ATerm), ATerm v_59 (ATerm))
{
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL;
  q_49 = t;
  p_49 :
  if(match_cons(q_49, sym__2))
    {
      r_49 = ATgetArgument(q_49, 0);
      s_49 = ATgetArgument(q_49, 1);
      {
        ATerm w_49 = NULL,y_49 = NULL;
        ATerm x_49 = NULL;
        t = SSLgetAnnotations(not_null(q_49));
        {
          x_49 = t;
          if(((w_49 != NULL) && (w_49 != x_49)))
            _fail(x_49);
          else
            w_49 = x_49;
        }
        {
          t = not_null(r_49);
          {
            ATerm a_50 = NULL;
            t = u_59(t);
            {
              y_49 = t;
              {
                t = not_null(s_49);
                {
                  ATerm c_50 = NULL;
                  t = v_59(t);
                  {
                    a_50 = t;
                    {
                      ATerm d_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_49), not_null(a_50)), not_null(w_49));
                      {
                        d_50 = t;
                        if(((c_50 != NULL) && (c_50 != d_50)))
                          _fail(d_50);
                        else
                          c_50 = d_50;
                      }
                      t = not_null(c_50);
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
  ATerm t_7;
  t_7 = t;
  {
    ATerm m_50 = NULL;
    ATerm n_50 = NULL;
    t = term_u_7;
    {
      t = whoami_0(t);
      {
        n_50 = t;
        if(((m_50 != NULL) && (m_50 != n_50)))
          _fail(n_50);
        else
          m_50 = n_50;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_7), not_null(m_50)), term_w_7));
      {
        t = printnl_0(t);
        {
          t = term_y_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = t_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL;
  w_50 = t;
  v_50 :
  if(match_cons(w_50, sym__2))
    {
      x_50 = ATgetArgument(w_50, 0);
      y_50 = ATgetArgument(w_50, 1);
      {
        ATerm z_7;
        z_7 = t;
        t = SSL_printnl(not_null(x_50), not_null(y_50));
        t = z_7;
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
  ATerm d_51 = NULL;
  d_51 = t;
  t = SSL_implode_string(not_null(d_51));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_8 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(b_8);
    }
  else
    {
      t = a_8;
      {
        ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL;
        j_51 = t;
        i_51 :
        if(((ATgetType(j_51) == AT_LIST) && !(ATisEmpty(j_51))))
          {
            k_51 = ATgetFirst((ATermList) j_51);
            l_51 = (ATerm) ATgetNext((ATermList) j_51);
            {
              t = not_null(k_51);
              {
                ATerm q_1 (ATerm t)
                {
                  t = not_null(l_51);
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
  ATerm v_51 = NULL;
  ATerm d_52 = NULL;
  v_51 = t;
  {
    ATerm e_52 = NULL;
    ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL;
    t = not_null(v_51);
    {
      e_52 = t;
      {
        t = SSL_explode_term(not_null(e_52));
        {
          h_52 = t;
          t_51 :
          if(match_cons(h_52, sym__2))
            {
              i_52 = ATgetArgument(h_52, 0);
              j_52 = ATgetArgument(h_52, 1);
              u_51 :
              if(match_string(i_52, ""))
                {
                  if(((d_52 != NULL) && (d_52 != j_52)))
                    _fail(j_52);
                  else
                    d_52 = j_52;
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
      t = not_null(d_52);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_82 (ATerm))
{
  ATerm n_52 (ATerm t)
  {
    ATerm c_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, n_52);
        ;
        LocalPopChoice(d_8);
      }
    else
      {
        t = c_8;
        {
          t = Nil_0(t);
          t = m_82(t);
        }
      }
    return(t);
  }
  t = n_52(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL;
  q_52 = t;
  p_52 :
  if(match_cons(q_52, sym__2))
    {
      r_52 = ATgetArgument(q_52, 0);
      s_52 = ATgetArgument(q_52, 1);
      {
        t = not_null(r_52);
        {
          ATerm r_1 (ATerm t)
          {
            t = not_null(s_52);
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
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm x_52 = NULL;
  x_52 = t;
  t = SSL_explode_string(not_null(x_52));
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
  ATerm g_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(h_8);
    }
  else
    {
      t = g_8;
      {
        ATerm i_8 = t;
        int j_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, s_1);
            ;
            LocalPopChoice(j_8);
          }
        else
          {
            t = i_8;
            {
              ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL;
              g_53 = t;
              f_53 :
              if(match_cons(g_53, sym_Path_1))
                {
                  h_53 = ATgetArgument(g_53, 0);
                  t = not_null(h_53);
                }
              else
                {
                  if(match_cons(g_53, sym_Var_1))
                    {
                      h_53 = ATgetArgument(g_53, 0);
                      {
                        t = not_null(h_53);
                        {
                          ATerm k_8 = t;
                          int l_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(l_8);
                            }
                          else
                            {
                              t = k_8;
                              {
                                ATerm t_1 (ATerm t)
                                {
                                  t = term_m_8;
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
                      if(match_cons(g_53, sym_Prefix_2))
                        {
                          h_53 = ATgetArgument(g_53, 0);
                          i_53 = ATgetArgument(g_53, 1);
                          {
                            ATerm n_53 = NULL,p_53 = NULL;
                            ATerm n_8;
                            n_8 = t;
                            {
                              ATerm o_53 = NULL;
                              t = not_null(h_53);
                              {
                                t = eval_config_0(t);
                                {
                                  o_53 = t;
                                  if(((n_53 != NULL) && (n_53 != o_53)))
                                    _fail(o_53);
                                  else
                                    n_53 = o_53;
                                }
                              }
                            }
                            t = n_8;
                            {
                              ATerm q_53 = NULL;
                              t = not_null(i_53);
                              {
                                t = eval_config_0(t);
                                {
                                  q_53 = t;
                                  if(((p_53 != NULL) && (p_53 != q_53)))
                                    _fail(q_53);
                                  else
                                    p_53 = q_53;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(n_53), not_null(p_53));
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
  ATerm y_53 = NULL;
  y_53 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_8, not_null(y_53));
    {
      t = table_get_0(t);
      {
        ATerm u_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm p_8;
            p_8 = t;
            {
              ATerm a_54 = NULL;
              ATerm b_54 = NULL;
              b_54 = t;
              if(((a_54 != NULL) && (a_54 != b_54)))
                _fail(b_54);
              else
                a_54 = b_54;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(y_53), not_null(a_54));
                t = table_put_0(t);
              }
            }
            t = p_8;
          }
          return(t);
        }
        t = try_1(t, u_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm m_95 (ATerm))
{
  ATerm v_1 (ATerm t)
  {
    ATerm q_8;
    q_8 = t;
    {
      ATerm f_54 = NULL;
      ATerm g_54 = NULL;
      t = term_r_8;
      {
        t = get_config_0(t);
        {
          g_54 = t;
          if(((f_54 != NULL) && (f_54 != g_54)))
            _fail(g_54);
          else
            f_54 = g_54;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_54), term_s_8);
        t = geq_0(t);
      }
    }
    t = q_8;
    t = m_95(t);
    return(t);
  }
  t = try_1(t, v_1);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm m_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL;
  m_54 = t;
  k_54 :
  if(match_cons(m_54, sym__2))
    {
      s_54 = ATgetArgument(m_54, 0);
      t_54 = ATgetArgument(m_54, 1);
      l_54 :
      if(match_cons(t_54, sym_Stream_1))
        {
          u_54 = ATgetArgument(t_54, 0);
          {
            ATerm x_54 = NULL;
            t = SSL_fputc(not_null(s_54), not_null(u_54));
            {
              ATerm y_54 = NULL;
              y_54 = t;
              if(((x_54 != NULL) && (x_54 != y_54)))
                _fail(y_54);
              else
                x_54 = y_54;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_54));
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
  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL;
  m_55 = t;
  k_55 :
  if(match_cons(m_55, sym__2))
    {
      n_55 = ATgetArgument(m_55, 0);
      p_55 = ATgetArgument(m_55, 1);
      l_55 :
      if(match_cons(n_55, sym_Stream_1))
        {
          o_55 = ATgetArgument(n_55, 0);
          {
            ATerm s_55 = NULL;
            t = SSL_write_term_to_stream_text(not_null(o_55), not_null(p_55));
            {
              ATerm t_55 = NULL;
              t_55 = t;
              if(((s_55 != NULL) && (s_55 != t_55)))
                _fail(t_55);
              else
                s_55 = t_55;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_55));
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
    ATerm x_55 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm y_55 = NULL;
      y_55 = t;
      if(((x_55 != NULL) && (x_55 != y_55)))
        _fail(y_55);
      else
        x_55 = y_55;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_8, not_null(x_55));
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
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
  e_56 = t;
  c_56 :
  if(match_cons(e_56, sym__2))
    {
      f_56 = ATgetArgument(e_56, 0);
      h_56 = ATgetArgument(e_56, 1);
      d_56 :
      if(match_cons(f_56, sym_Stream_1))
        {
          g_56 = ATgetArgument(f_56, 0);
          {
            ATerm k_56 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(g_56), not_null(h_56));
            {
              ATerm l_56 = NULL;
              l_56 = t;
              if(((k_56 != NULL) && (k_56 != l_56)))
                _fail(l_56);
              else
                k_56 = l_56;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_56));
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
ATerm WriteToFile_1 (ATerm t, ATerm i_94 (ATerm))
{
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL;
  z_56 = t;
  y_56 :
  if(match_cons(z_56, sym__2))
    {
      a_57 = ATgetArgument(z_56, 0);
      b_57 = ATgetArgument(z_56, 1);
      {
        ATerm e_57 = NULL,g_57 = NULL;
        t = not_null(a_57);
        {
          ATerm f_57 = NULL;
          f_57 = t;
          if(((e_57 != NULL) && (e_57 != f_57)))
            _fail(f_57);
          else
            e_57 = f_57;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_57), term_u_8);
            {
              t = open_stream_0(t);
              {
                ATerm h_57 = NULL;
                h_57 = t;
                if(((g_57 != NULL) && (g_57 != h_57)))
                  _fail(h_57);
                else
                  g_57 = h_57;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_57), not_null(b_57));
                  {
                    t = i_94(t);
                    {
                      t = fclose_0(t);
                      t = not_null(b_57);
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
  ATerm p_57 = NULL;
  ATerm v_8;
  v_8 = t;
  {
    ATerm x_1 (ATerm t)
    {
      ATerm y_8 = t;
      int z_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_1 (ATerm t)
          {
            ATerm q_57 = NULL,r_57 = NULL;
            q_57 = t;
            m_57 :
            if(match_cons(q_57, sym_Output_1))
              {
                r_57 = ATgetArgument(q_57, 0);
                if(((p_57 != NULL) && (p_57 != r_57)))
                  _fail(r_57);
                else
                  p_57 = r_57;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, y_1);
          ;
          LocalPopChoice(z_8);
        }
      else
        {
          t = y_8;
          {
            ATerm s_57 = NULL;
            t = term_a_9;
            {
              s_57 = t;
              if(((p_57 != NULL) && (p_57 != s_57)))
                _fail(s_57);
              else
                p_57 = s_57;
            }
          }
        }
      return(t);
    }
    t = _2(t, x_1, _id);
  }
  t = v_8;
  {
    ATerm z_1 (ATerm t)
    {
      ATerm a_2 (ATerm t)
      {
        t = not_null(p_57);
        return(t);
      }
      t = split_2(t, a_2, _id);
      return(t);
    }
    t = _2(t, _id, z_1);
    {
      ATerm c_9 = t;
      int d_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_2 (ATerm t)
          {
            ATerm c_2 (ATerm t)
            {
              ATerm t_57 = NULL;
              t_57 = t;
              o_57 :
              if(!(match_cons(t_57, sym_Binary_0)))
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
          LocalPopChoice(d_9);
        }
      else
        {
          t = c_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm k_97 (ATerm))
{
  ATerm z_57 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL;
  ATerm e_9;
  e_9 = t;
  t = dtime_0(t);
  t = e_9;
  {
    t = k_97(t);
    {
      ATerm f_9;
      f_9 = t;
      {
        ATerm a_58 = NULL;
        t = dtime_0(t);
        {
          a_58 = t;
          if(((z_57 != NULL) && (z_57 != a_58)))
            _fail(a_58);
          else
            z_57 = a_58;
        }
      }
      t = f_9;
      {
        b_58 = t;
        y_57 :
        if(match_cons(b_58, sym__2))
          {
            c_58 = ATgetArgument(b_58, 0);
            d_58 = ATgetArgument(b_58, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_58)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(z_57))), not_null(d_58));
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
  ATerm l_58 = NULL,m_58 = NULL;
  ATerm s_58 (ATerm t)
  {
    t = SSL_fclose(not_null(m_58));
    return(t);
  }
  m_58 = t;
  k_58 :
  if(match_cons(m_58, sym_Stream_1))
    {
      l_58 = ATgetArgument(m_58, 0);
      {
        ATerm g_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(l_58));
            ;
            LocalPopChoice(h_9);
          }
        else
          {
            t = g_9;
            t = s_58(t);
          }
      }
    }
  else
    {
      t = s_58(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL;
  v_58 = t;
  u_58 :
  if(match_cons(v_58, sym_Stream_1))
    {
      w_58 = ATgetArgument(v_58, 0);
      t = SSL_read_term_from_stream(not_null(w_58));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm u_93 (ATerm))
{
  ATerm i_9;
  i_9 = t;
  {
    ATerm b_59 = NULL,d_59 = NULL;
    ATerm j_9;
    j_9 = t;
    {
      ATerm c_59 = NULL;
      t = u_93(t);
      {
        c_59 = t;
        if(((b_59 != NULL) && (b_59 != c_59)))
          _fail(c_59);
        else
          b_59 = c_59;
      }
    }
    t = j_9;
    {
      ATerm e_59 = NULL;
      e_59 = t;
      if(((d_59 != NULL) && (d_59 != e_59)))
        _fail(e_59);
      else
        d_59 = e_59;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_59)), not_null(b_59)));
        t = printnl_0(t);
      }
    }
  }
  t = i_9;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL;
  k_59 = t;
  j_59 :
  if(match_cons(k_59, sym__2))
    {
      l_59 = ATgetArgument(k_59, 0);
      m_59 = ATgetArgument(k_59, 1);
      {
        ATerm p_59 = NULL;
        t = SSL_fopen(not_null(l_59), not_null(m_59));
        {
          ATerm q_59 = NULL;
          q_59 = t;
          if(((p_59 != NULL) && (p_59 != q_59)))
            _fail(q_59);
          else
            p_59 = q_59;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_59));
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
  ATerm w_59 = NULL;
  w_59 = t;
  t = SSL_is_string(not_null(w_59));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm a_60 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm b_60 = NULL;
    b_60 = t;
    if(((a_60 != NULL) && (a_60 != b_60)))
      _fail(b_60);
    else
      a_60 = b_60;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_60));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm e_60 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm f_60 = NULL;
    f_60 = t;
    if(((e_60 != NULL) && (e_60 != f_60)))
      _fail(f_60);
    else
      e_60 = f_60;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_60));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm i_60 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm j_60 = NULL;
    j_60 = t;
    if(((i_60 != NULL) && (i_60 != j_60)))
      _fail(j_60);
    else
      i_60 = j_60;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_60));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm p_60 = NULL;
  p_60 = t;
  o_60 :
  if(match_cons(p_60, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(p_60, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(p_60, sym_stdin_0))
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
  ATerm z_60 = NULL;
  ATerm b_61 = NULL,c_61 = NULL;
  z_60 = t;
  {
    ATerm h_61 = NULL;
    ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL,p_61 = NULL;
    t = not_null(z_60);
    {
      h_61 = t;
      {
        t = SSL_explode_term(not_null(h_61));
        {
          k_61 = t;
          w_60 :
          if(match_cons(k_61, sym__2))
            {
              l_61 = ATgetArgument(k_61, 0);
              m_61 = ATgetArgument(k_61, 1);
              x_60 :
              if(match_string(l_61, ""))
                {
                  y_60 :
                  if(((ATgetType(m_61) == AT_LIST) && !(ATisEmpty(m_61))))
                    {
                      n_61 = ATgetFirst((ATermList) m_61);
                      p_61 = (ATerm) ATgetNext((ATermList) m_61);
                      {
                        if(((c_61 != NULL) && (c_61 != n_61)))
                          _fail(n_61);
                        else
                          c_61 = n_61;
                        if(((b_61 != NULL) && (b_61 != p_61)))
                          _fail(p_61);
                        else
                          b_61 = p_61;
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
    t = not_null(c_61);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL;
  a_62 = t;
  z_61 :
  if(match_cons(a_62, sym__2))
    {
      b_62 = ATgetArgument(a_62, 0);
      c_62 = ATgetArgument(a_62, 1);
      {
        ATerm k_9 = t;
        int l_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
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
                  ATerm d_2 (ATerm t)
                  {
                    ATerm d_62 = NULL,e_62 = NULL;
                    d_62 = t;
                    y_61 :
                    if(match_cons(d_62, sym_Path_1))
                      {
                        e_62 = ATgetArgument(d_62, 0);
                        t = not_null(e_62);
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
                  LocalPopChoice(n_9);
                }
              else
                {
                  t = m_9;
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
  ATerm r_62 = NULL;
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_62 = NULL;
      ATerm q_62 = NULL;
      q_62 = t;
      if(((n_62 != NULL) && (n_62 != q_62)))
        _fail(q_62);
      else
        n_62 = q_62;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_62), term_q_9);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
      {
        ATerm e_2 (ATerm t)
        {
          t = term_r_9;
          return(t);
        }
        t = debug_1(t, e_2);
        _fail(t);
      }
    }
  {
    ATerm s_9;
    s_9 = t;
    {
      ATerm s_62 = NULL;
      t = read_from_stream_0(t);
      {
        s_62 = t;
        if(((r_62 != NULL) && (r_62 != s_62)))
          _fail(s_62);
        else
          r_62 = s_62;
      }
    }
    t = s_9;
    {
      t = fclose_0(t);
      t = not_null(r_62);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm m_89 (ATerm), ATerm n_89 (ATerm))
{
  ATerm x_62 = NULL,b_63 = NULL;
  ATerm t_9;
  t_9 = t;
  {
    ATerm y_62 = NULL;
    t = m_89(t);
    {
      y_62 = t;
      if(((x_62 != NULL) && (x_62 != y_62)))
        _fail(y_62);
      else
        x_62 = y_62;
    }
  }
  t = t_9;
  {
    ATerm c_63 = NULL;
    t = n_89(t);
    {
      c_63 = t;
      if(((b_63 != NULL) && (b_63 != c_63)))
        _fail(c_63);
      else
        b_63 = c_63;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_62), not_null(b_63));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm j_63 = NULL;
  ATerm u_9;
  u_9 = t;
  {
    ATerm v_9 = t;
    int w_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_2 (ATerm t)
        {
          ATerm k_63 = NULL,l_63 = NULL;
          k_63 = t;
          h_63 :
          if(match_cons(k_63, sym_Input_1))
            {
              l_63 = ATgetArgument(k_63, 0);
              if(((j_63 != NULL) && (j_63 != l_63)))
                _fail(l_63);
              else
                j_63 = l_63;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, f_2);
        ;
        LocalPopChoice(w_9);
      }
    else
      {
        t = v_9;
        {
          ATerm m_63 = NULL;
          t = term_x_9;
          {
            m_63 = t;
            if(((j_63 != NULL) && (j_63 != m_63)))
              _fail(m_63);
            else
              j_63 = m_63;
          }
        }
      }
  }
  t = u_9;
  {
    ATerm g_2 (ATerm t)
    {
      t = not_null(j_63);
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
    ATerm r_63 = NULL;
    r_63 = t;
    p_63 :
    if(!(match_string(r_63, "-k")))
      {
        if(!(match_string(r_63, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm y_9;
    y_9 = t;
    {
      ATerm s_63 = NULL;
      ATerm t_63 = NULL;
      t = string_to_int_0(t);
      {
        t_63 = t;
        if(((s_63 != NULL) && (s_63 != t_63)))
          _fail(t_63);
        else
          s_63 = t_63;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_9, not_null(s_63));
        t = set_config_0(t);
      }
    }
    t = y_9;
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_a_10;
    return(t);
  }
  t = ArgOption_3(t, h_2, i_2, j_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm w_63 = NULL;
  w_63 = t;
  t = SSL_string_to_int(not_null(w_63));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_2 (ATerm t)
      {
        ATerm e_64 = NULL;
        e_64 = t;
        z_63 :
        if(!(match_string(e_64, "-S")))
          {
            if(!(match_string(e_64, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_2 (ATerm t)
      {
        t = term_e_10;
        t = set_config_0(t);
        t = term_f_10;
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        t = term_g_10;
        return(t);
      }
      t = Option_3(t, k_2, l_2, m_2);
      ;
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 (ATerm t)
            {
              ATerm f_64 = NULL;
              f_64 = t;
              a_64 :
              if(!(match_string(f_64, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm o_2 (ATerm t)
            {
              ATerm i_64 = NULL;
              ATerm j_10;
              j_10 = t;
              {
                ATerm g_64 = NULL;
                ATerm h_64 = NULL;
                t = string_to_int_0(t);
                {
                  h_64 = t;
                  if(((g_64 != NULL) && (g_64 != h_64)))
                    _fail(h_64);
                  else
                    g_64 = h_64;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_r_8, not_null(g_64));
                  t = set_config_0(t);
                }
              }
              t = j_10;
              {
                ATerm j_64 = NULL;
                j_64 = t;
                if(((i_64 != NULL) && (i_64 != j_64)))
                  _fail(j_64);
                else
                  i_64 = j_64;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_64));
              }
              return(t);
            }
            ATerm p_2 (ATerm t)
            {
              t = term_k_10;
              return(t);
            }
            t = ArgOption_3(t, n_2, o_2, p_2);
            ;
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            {
              ATerm q_2 (ATerm t)
              {
                ATerm k_64 = NULL;
                k_64 = t;
                d_64 :
                if(!(match_string(k_64, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm r_2 (ATerm t)
              {
                t = term_m_10;
                t = set_config_0(t);
                t = term_n_10;
                return(t);
              }
              ATerm s_2 (ATerm t)
              {
                t = term_o_10;
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
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    ATerm q_64 = NULL;
    q_64 = t;
    n_64 :
    if(!(match_string(q_64, "-o")))
      {
        if(!(match_string(q_64, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm t_64 = NULL;
    ATerm r_10;
    r_10 = t;
    {
      ATerm r_64 = NULL;
      ATerm s_64 = NULL;
      s_64 = t;
      if(((r_64 != NULL) && (r_64 != s_64)))
        _fail(s_64);
      else
        r_64 = s_64;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_10, not_null(r_64));
        t = set_config_0(t);
      }
    }
    t = r_10;
    {
      ATerm u_64 = NULL;
      u_64 = t;
      if(((t_64 != NULL) && (t_64 != u_64)))
        _fail(u_64);
      else
        t_64 = u_64;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_64));
    }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_t_10;
    return(t);
  }
  t = ArgOption_3(t, t_2, u_2, v_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      {
        ATerm w_2 (ATerm t)
        {
          ATerm y_64 = NULL;
          y_64 = t;
          x_64 :
          if(!(match_string(y_64, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm x_2 (ATerm t)
        {
          t = term_a_11;
          t = set_config_0(t);
          t = term_b_11;
          return(t);
        }
        ATerm y_2 (ATerm t)
        {
          t = term_c_11;
          return(t);
        }
        t = Option_3(t, w_2, x_2, y_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm e_65 = NULL,f_65 = NULL,i_65 = NULL,j_65 = NULL,m_65 = NULL;
  e_65 = t;
  c_65 :
  if(match_string(e_65, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(e_65) == AT_LIST) && !(ATisEmpty(e_65))))
        {
          f_65 = ATgetFirst((ATermList) e_65);
          i_65 = (ATerm) ATgetNext((ATermList) e_65);
          d_65 :
          if(((ATgetType(i_65) == AT_LIST) && !(ATisEmpty(i_65))))
            {
              j_65 = ATgetFirst((ATermList) i_65);
              m_65 = (ATerm) ATgetNext((ATermList) i_65);
              {
                ATerm q_65 = NULL;
                ATerm d_11;
                d_11 = t;
                {
                  t = not_null(f_65);
                  t = j_0(t);
                }
                t = d_11;
                {
                  ATerm u_65 = NULL;
                  t = not_null(j_65);
                  {
                    t = k_0(t);
                    {
                      u_65 = t;
                      if(((q_65 != NULL) && (q_65 != u_65)))
                        _fail(u_65);
                      else
                        q_65 = u_65;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_65)), not_null(q_65));
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
  ATerm z_2 (ATerm t)
  {
    ATerm w_66 = NULL;
    w_66 = t;
    f_66 :
    if(!(match_string(w_66, "-i")))
      {
        if(!(match_string(w_66, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm h_67 = NULL;
    ATerm e_11;
    e_11 = t;
    {
      ATerm x_66 = NULL;
      ATerm d_67 = NULL;
      d_67 = t;
      if(((x_66 != NULL) && (x_66 != d_67)))
        _fail(d_67);
      else
        x_66 = d_67;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_11, not_null(x_66));
        t = set_config_0(t);
      }
    }
    t = e_11;
    {
      ATerm i_67 = NULL;
      i_67 = t;
      if(((h_67 != NULL) && (h_67 != i_67)))
        _fail(i_67);
      else
        h_67 = i_67;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_67));
    }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_g_11;
    return(t);
  }
  t = ArgOption_3(t, z_2, a_3, b_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm m_67 = NULL;
  t = report_run_time_0(t);
  {
    ATerm n_67 = NULL;
    t = term_u_7;
    {
      t = whoami_0(t);
      {
        n_67 = t;
        if(((m_67 != NULL) && (m_67 != n_67)))
          _fail(n_67);
        else
          m_67 = n_67;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATinsert(ATempty, term_l_11), not_null(m_67)));
      {
        t = printnl_0(t);
        {
          t = term_y_7;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_m_11;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm q_67 = NULL;
  q_67 = t;
  t = SSL_TicksToSeconds(not_null(q_67));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL;
  x_67 = t;
  u_67 :
  if(match_cons(x_67, sym__2))
    {
      y_67 = ATgetArgument(x_67, 0);
      z_67 = ATgetArgument(x_67, 1);
      {
        ATerm n_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_67), not_null(z_67));
            ;
            LocalPopChoice(q_11);
          }
        else
          {
            t = n_11;
            t = SSL_addr(not_null(y_67), not_null(z_67));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm x_87 (ATerm), ATerm y_87 (ATerm))
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_87(t);
      ;
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      {
        ATerm i_68 = NULL,j_68 = NULL,o_68 = NULL;
        i_68 = t;
        h_68 :
        if(((ATgetType(i_68) == AT_LIST) && !(ATisEmpty(i_68))))
          {
            j_68 = ATgetFirst((ATermList) i_68);
            o_68 = (ATerm) ATgetNext((ATermList) i_68);
            {
              ATerm r_68 = NULL;
              ATerm s_68 = NULL;
              t = not_null(o_68);
              {
                t = foldr_2(t, x_87, y_87);
                {
                  s_68 = t;
                  if(((r_68 != NULL) && (r_68 != s_68)))
                    _fail(s_68);
                  else
                    r_68 = s_68;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_68), not_null(r_68));
                t = y_87(t);
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
ATerm crush_2 (ATerm t, ATerm q_91 (ATerm), ATerm r_91 (ATerm))
{
  ATerm z_68 = NULL;
  ATerm b_69 = NULL;
  z_68 = t;
  {
    ATerm c_69 = NULL;
    ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL;
    t = not_null(z_68);
    {
      c_69 = t;
      {
        t = SSL_explode_term(not_null(c_69));
        {
          e_69 = t;
          y_68 :
          if(match_cons(e_69, sym__2))
            {
              f_69 = ATgetArgument(e_69, 0);
              g_69 = ATgetArgument(e_69, 1);
              if(((b_69 != NULL) && (b_69 != g_69)))
                _fail(g_69);
              else
                b_69 = g_69;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(b_69);
      t = foldr_2(t, q_91, r_91);
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
    ATerm c_3 (ATerm t)
    {
      t = term_d_10;
      return(t);
    }
    t = crush_2(t, c_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm m_69 = NULL,n_69 = NULL,o_69 = NULL;
  m_69 = t;
  l_69 :
  if(match_cons(m_69, sym__2))
    {
      n_69 = ATgetArgument(m_69, 0);
      o_69 = ATgetArgument(m_69, 1);
      {
        ATerm t_11;
        t_11 = t;
        {
          ATerm u_11 = t;
          int v_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(n_69), not_null(o_69));
              ;
              LocalPopChoice(v_11);
            }
          else
            {
              t = u_11;
              t = SSL_gtr(not_null(n_69), not_null(o_69));
            }
        }
        t = t_11;
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
  ATerm u_69 = NULL;
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_69 = NULL,w_69 = NULL,x_69 = NULL;
      v_69 = t;
      t_69 :
      if(match_cons(v_69, sym__2))
        {
          w_69 = ATgetArgument(v_69, 0);
          x_69 = ATgetArgument(v_69, 1);
          {
            if(((u_69 != NULL) && (u_69 != w_69)))
              _fail(w_69);
            else
              u_69 = w_69;
            if(((u_69 != NULL) && (u_69 != x_69)))
              _fail(x_69);
            else
              u_69 = x_69;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(x_11);
    }
  else
    {
      t = w_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_95 (ATerm))
{
  ATerm d_3 (ATerm t)
  {
    ATerm y_11;
    y_11 = t;
    {
      ATerm a_70 = NULL;
      ATerm b_70 = NULL;
      t = term_r_8;
      {
        t = get_config_0(t);
        {
          b_70 = t;
          if(((a_70 != NULL) && (a_70 != b_70)))
            _fail(b_70);
          else
            a_70 = b_70;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_70), term_y_7);
        t = geq_0(t);
      }
    }
    t = y_11;
    t = l_95(t);
    return(t);
  }
  t = try_1(t, d_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm f_70 = NULL,h_70 = NULL;
    ATerm z_11;
    z_11 = t;
    {
      ATerm g_70 = NULL;
      t = run_time_0(t);
      {
        g_70 = t;
        if(((f_70 != NULL) && (f_70 != g_70)))
          _fail(g_70);
        else
          f_70 = g_70;
      }
    }
    t = z_11;
    {
      ATerm i_70 = NULL;
      t = term_u_7;
      {
        t = whoami_0(t);
        {
          i_70 = t;
          if(((h_70 != NULL) && (h_70 != i_70)))
            _fail(i_70);
          else
            h_70 = i_70;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_12), not_null(f_70)), term_a_12), not_null(h_70)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, e_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_d_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_70 = NULL;
  p_70 = t;
  o_70 :
  if(match_cons(p_70, sym_Version_0))
    {
      ATerm r_70 = NULL,t_70 = NULL;
      ATerm c_12;
      c_12 = t;
      {
        ATerm s_70 = NULL;
        t = SSLgetAnnotations(not_null(p_70));
        {
          s_70 = t;
          if(((r_70 != NULL) && (r_70 != s_70)))
            _fail(s_70);
          else
            r_70 = s_70;
        }
      }
      t = c_12;
      {
        ATerm u_70 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(r_70));
        {
          u_70 = t;
          if(((t_70 != NULL) && (t_70 != u_70)))
            _fail(u_70);
          else
            t_70 = u_70;
        }
        t = not_null(t_70);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm i_98 (ATerm))
{
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_12;
      t = get_config_0(t);
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      {
        ATerm f_3 (ATerm t)
        {
          ATerm g_12 = t;
          int h_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(h_12);
            }
          else
            {
              t = g_12;
              {
                ATerm i_12 = t;
                int j_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(j_12);
                  }
                else
                  {
                    t = i_12;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, f_3);
      }
    }
  t = i_98(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm z_70 = NULL;
  z_70 = t;
  t = SSL_table_create(not_null(z_70));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm d_71 = NULL;
  d_71 = t;
  {
    ATerm k_12;
    k_12 = t;
    {
      t = term_l_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_12, term_q_12, not_null(d_71));
          t = table_put_0(t);
        }
      }
    }
    t = k_12;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm h_71 = NULL;
  h_71 = t;
  t = SSL_table_destroy(not_null(h_71));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm l_71 = NULL;
  l_71 = t;
  t = SSL_exit(not_null(l_71));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm j_100 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_81 (ATerm))
{
  ATerm o_71 (ATerm t)
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        t = Cons_2(t, w_81, o_71);
      }
    return(t);
  }
  t = o_71(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL;
  x_71 = t;
  u_71 :
  if(((ATgetType(x_71) == AT_LIST) && !(ATisEmpty(x_71))))
    {
      v_71 = ATgetFirst((ATermList) x_71);
      w_71 = (ATerm) ATgetNext((ATermList) x_71);
      {
        ATerm a_72 = NULL;
        t = not_null(w_71);
        {
          ATerm w_12;
          w_12 = t;
          {
            ATerm b_72 = NULL,d_72 = NULL,f_72 = NULL;
            ATerm y_12;
            y_12 = t;
            {
              ATerm c_72 = NULL;
              t = i_0(t);
              {
                c_72 = t;
                if(((b_72 != NULL) && (b_72 != c_72)))
                  _fail(c_72);
                else
                  b_72 = c_72;
              }
            }
            t = y_12;
            {
              ATerm e_72 = NULL;
              t = not_null(v_71);
              {
                t = g_0(t);
                {
                  e_72 = t;
                  if(((d_72 != NULL) && (d_72 != e_72)))
                    _fail(e_72);
                  else
                    d_72 = e_72;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(b_72)), not_null(d_72));
                {
                  f_72 = t;
                  if(((a_72 != NULL) && (a_72 != f_72)))
                    _fail(f_72);
                  else
                    a_72 = f_72;
                }
              }
            }
          }
          t = w_12;
          {
            ATerm g_3 (ATerm t)
            {
              t = not_null(a_72);
              return(t);
            }
            t = reverse_acc_2(t, g_0, g_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(x_71) == AT_LIST) && ATisEmpty(x_71)))
        {
          {
            t = term_u_7;
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
  ATerm h_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, h_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm i_100 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm q_72 = NULL,r_72 = NULL;
  q_72 = t;
  p_72 :
  if(match_cons(q_72, sym_Program_1))
    {
      r_72 = ATgetArgument(q_72, 0);
      {
        ATerm u_72 = NULL,w_72 = NULL;
        ATerm v_72 = NULL;
        t = SSLgetAnnotations(not_null(q_72));
        {
          v_72 = t;
          if(((u_72 != NULL) && (u_72 != v_72)))
            _fail(v_72);
          else
            u_72 = v_72;
        }
        {
          t = not_null(r_72);
          {
            ATerm y_72 = NULL;
            t = d_74(t);
            {
              w_72 = t;
              {
                ATerm z_72 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(w_72)), not_null(u_72));
                {
                  z_72 = t;
                  if(((y_72 != NULL) && (y_72 != z_72)))
                    _fail(z_72);
                  else
                    y_72 = z_72;
                }
                t = not_null(y_72);
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
  ATerm i_73 = NULL;
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_73 = NULL;
      t = term_m_11;
      {
        t = get_config_0(t);
        {
          j_73 = t;
          if(((i_73 != NULL) && (i_73 != j_73)))
            _fail(j_73);
          else
            i_73 = j_73;
        }
      }
      ;
      LocalPopChoice(c_13);
    }
  else
    {
      t = b_13;
      {
        ATerm i_3 (ATerm t)
        {
          ATerm j_3 (ATerm t)
          {
            ATerm k_73 = NULL;
            k_73 = t;
            if(((i_73 != NULL) && (i_73 != k_73)))
              _fail(k_73);
            else
              i_73 = k_73;
            return(t);
          }
          t = Program_1(t, j_3);
          return(t);
        }
        t = option_defined_1(t, i_3);
      }
    }
  {
    ATerm k_3 (ATerm t)
    {
      ATerm l_3 (ATerm t)
      {
        t = not_null(i_73);
        return(t);
      }
      t = short_description_1(t, l_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, k_3);
    {
      t = term_d_13;
      {
        t = echo_0(t);
        {
          t = term_g_13;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm m_3 (ATerm t)
                {
                  ATerm l_73 = NULL;
                  ATerm m_73 = NULL;
                  m_73 = t;
                  if(((l_73 != NULL) && (l_73 != m_73)))
                    _fail(m_73);
                  else
                    l_73 = m_73;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_73)), term_h_13);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, m_3);
                {
                  ATerm n_3 (ATerm t)
                  {
                    ATerm n_73 = NULL;
                    ATerm o_73 = NULL;
                    ATerm o_3 (ATerm t)
                    {
                      t = not_null(i_73);
                      return(t);
                    }
                    t = long_description_1(t, o_3);
                    {
                      o_73 = t;
                      if(((n_73 != NULL) && (n_73 != o_73)))
                        _fail(o_73);
                      else
                        n_73 = o_73;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(n_73)), term_i_13);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, n_3);
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
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_74 (ATerm))
{
  ATerm y_73 = NULL,z_73 = NULL;
  y_73 = t;
  x_73 :
  if(match_cons(y_73, sym_Undefined_1))
    {
      z_73 = ATgetArgument(y_73, 0);
      {
        ATerm c_74 = NULL,g_74 = NULL;
        ATerm f_74 = NULL;
        t = SSLgetAnnotations(not_null(y_73));
        {
          f_74 = t;
          if(((c_74 != NULL) && (c_74 != f_74)))
            _fail(f_74);
          else
            c_74 = f_74;
        }
        {
          t = not_null(z_73);
          {
            ATerm i_74 = NULL;
            t = e_74(t);
            {
              g_74 = t;
              {
                ATerm m_74 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_74)), not_null(c_74));
                {
                  m_74 = t;
                  if(((i_74 != NULL) && (i_74 != m_74)))
                    _fail(m_74);
                  else
                    i_74 = m_74;
                }
                t = not_null(i_74);
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
ATerm fetch_1 (ATerm t, ATerm g_82 (ATerm))
{
  ATerm r_74 (ATerm t)
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_82, _id);
        ;
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
        t = Cons_2(t, _id, r_74);
      }
    return(t);
  }
  t = r_74(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_99 (ATerm))
{
  t = fetch_1(t, i_99);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm t_74 = NULL,u_74 = NULL,v_74 = NULL;
  t_74 = t;
  s_74 :
  if(((ATgetType(t_74) == AT_LIST) && ATisEmpty(t_74)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(t_74) == AT_LIST) && !(ATisEmpty(t_74))))
        {
          u_74 = ATgetFirst((ATermList) t_74);
          v_74 = (ATerm) ATgetNext((ATermList) t_74);
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
  ATerm r_13;
  r_13 = t;
  {
    ATerm y_74 = NULL;
    ATerm b_75 = NULL;
    ATerm v_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(x_13);
      }
    else
      {
        t = v_13;
        {
          ATerm z_74 = NULL;
          ATerm a_75 = NULL;
          a_75 = t;
          if(((z_74 != NULL) && (z_74 != a_75)))
            _fail(a_75);
          else
            z_74 = a_75;
          t = (ATerm) ATinsert(ATempty, not_null(z_74));
        }
      }
    {
      b_75 = t;
      if(((y_74 != NULL) && (y_74 != b_75)))
        _fail(b_75);
      else
        y_74 = b_75;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_9, not_null(y_74));
      t = printnl_0(t);
    }
  }
  t = r_13;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_m_11;
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
  ATerm a_14 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(b_14);
    }
  else
    {
      t = a_14;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_75 = NULL;
  i_75 = t;
  h_75 :
  if(match_cons(i_75, sym_Help_0))
    {
      ATerm k_75 = NULL,m_75 = NULL;
      ATerm c_14;
      c_14 = t;
      {
        ATerm l_75 = NULL;
        t = SSLgetAnnotations(not_null(i_75));
        {
          l_75 = t;
          if(((k_75 != NULL) && (k_75 != l_75)))
            _fail(l_75);
          else
            k_75 = l_75;
        }
      }
      t = c_14;
      {
        ATerm n_75 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(k_75));
        {
          n_75 = t;
          if(((m_75 != NULL) && (m_75 != n_75)))
            _fail(n_75);
          else
            m_75 = n_75;
        }
        t = not_null(m_75);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_74 (ATerm))
{
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_74(t);
      ;
      LocalPopChoice(e_14);
    }
  else
    {
      t = d_14;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm f_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_3 (ATerm t)
      {
        ATerm t_75 = NULL;
        t_75 = t;
        r_75 :
        if(!(match_string(t_75, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm q_3 (ATerm t)
      {
        t = term_i_14;
        t = set_config_0(t);
        return(t);
      }
      ATerm r_3 (ATerm t)
      {
        t = term_j_14;
        return(t);
      }
      t = Option_3(t, p_3, q_3, r_3);
      ;
      LocalPopChoice(g_14);
    }
  else
    {
      t = f_14;
      {
        ATerm s_3 (ATerm t)
        {
          ATerm u_75 = NULL;
          u_75 = t;
          s_75 :
          if(!(match_string(u_75, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm t_3 (ATerm t)
        {
          t = term_i_14;
          {
            t = set_config_0(t);
            {
              t = term_p_14;
              t = set_config_0(t);
            }
          }
          t = term_q_14;
          return(t);
        }
        ATerm u_3 (ATerm t)
        {
          t = term_u_14;
          return(t);
        }
        t = Option_3(t, s_3, t_3, u_3);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm x_75 = NULL,y_75 = NULL,z_75 = NULL;
  x_75 = t;
  w_75 :
  if(match_cons(x_75, sym__2))
    {
      y_75 = ATgetArgument(x_75, 0);
      z_75 = ATgetArgument(x_75, 1);
      t = SSL_table_get(not_null(y_75), not_null(z_75));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm g_76 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL;
  g_76 = t;
  f_76 :
  if(match_cons(g_76, sym__3))
    {
      h_76 = ATgetArgument(g_76, 0);
      i_76 = ATgetArgument(g_76, 1);
      j_76 = ATgetArgument(g_76, 2);
      {
        ATerm w_14;
        w_14 = t;
        {
          ATerm n_76 = NULL;
          ATerm o_76 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_76), not_null(i_76));
          {
            ATerm z_14 = t;
            int a_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(a_15);
              }
            else
              {
                t = z_14;
                t = (ATerm) ATempty;
              }
            {
              o_76 = t;
              if(((n_76 != NULL) && (n_76 != o_76)))
                _fail(o_76);
              else
                n_76 = o_76;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_76), not_null(i_76), (ATerm) ATinsert(CheckATermList(not_null(n_76)), not_null(j_76)));
            t = table_put_0(t);
          }
        }
        t = w_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm n_100 (ATerm))
{
  ATerm s_76 = NULL;
  ATerm t_76 = NULL;
  t = term_u_7;
  {
    t = n_100(t);
    {
      t_76 = t;
      if(((s_76 != NULL) && (s_76 != t_76)))
        _fail(t_76);
      else
        s_76 = t_76;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_13, term_f_13, not_null(s_76));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm z_76 = NULL,a_77 = NULL,b_77 = NULL;
  z_76 = t;
  y_76 :
  if(match_string(z_76, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(z_76) == AT_LIST) && !(ATisEmpty(z_76))))
        {
          a_77 = ATgetFirst((ATermList) z_76);
          b_77 = (ATerm) ATgetNext((ATermList) z_76);
          {
            ATerm e_77 = NULL;
            ATerm b_15;
            b_15 = t;
            {
              t = not_null(a_77);
              t = a_0(t);
            }
            t = b_15;
            {
              ATerm f_77 = NULL;
              t = term_u_7;
              {
                t = b_0(t);
                {
                  f_77 = t;
                  if(((e_77 != NULL) && (e_77 != f_77)))
                    _fail(f_77);
                  else
                    e_77 = f_77;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(b_77)), not_null(e_77));
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
  ATerm v_3 (ATerm t)
  {
    ATerm k_77 = NULL;
    k_77 = t;
    j_77 :
    if(!(match_string(k_77, "--help")))
      {
        if(!(match_string(k_77, "-h")))
          {
            if(!(match_string(k_77, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_c_15;
    {
      t = set_config_0(t);
      t = term_d_15;
    }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_e_15;
    return(t);
  }
  t = Option_3(t, v_3, w_3, x_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm n_77 = NULL,o_77 = NULL,p_77 = NULL;
  n_77 = t;
  m_77 :
  if(((ATgetType(n_77) == AT_LIST) && !(ATisEmpty(n_77))))
    {
      o_77 = ATgetFirst((ATermList) n_77);
      p_77 = (ATerm) ATgetNext((ATermList) n_77);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_77)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_77)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm d_61 (ATerm), ATerm e_61 (ATerm))
{
  ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL;
  z_77 = t;
  y_77 :
  if(((ATgetType(z_77) == AT_LIST) && !(ATisEmpty(z_77))))
    {
      a_78 = ATgetFirst((ATermList) z_77);
      b_78 = (ATerm) ATgetNext((ATermList) z_77);
      {
        ATerm f_78 = NULL,h_78 = NULL;
        ATerm g_78 = NULL;
        t = SSLgetAnnotations(not_null(z_77));
        {
          g_78 = t;
          if(((f_78 != NULL) && (f_78 != g_78)))
            _fail(g_78);
          else
            f_78 = g_78;
        }
        {
          t = not_null(a_78);
          {
            ATerm j_78 = NULL;
            t = d_61(t);
            {
              h_78 = t;
              {
                t = not_null(b_78);
                {
                  ATerm l_78 = NULL;
                  t = e_61(t);
                  {
                    j_78 = t;
                    {
                      ATerm m_78 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(j_78)), not_null(h_78)), not_null(f_78));
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
  ATerm w_78 = NULL;
  w_78 = t;
  v_78 :
  if(((ATgetType(w_78) == AT_LIST) && ATisEmpty(w_78)))
    {
      {
        ATerm y_78 = NULL,a_79 = NULL;
        ATerm f_15;
        f_15 = t;
        {
          ATerm z_78 = NULL;
          t = SSLgetAnnotations(not_null(w_78));
          {
            z_78 = t;
            if(((y_78 != NULL) && (y_78 != z_78)))
              _fail(z_78);
            else
              y_78 = z_78;
          }
        }
        t = f_15;
        {
          ATerm b_79 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(y_78));
          {
            b_79 = t;
            if(((a_79 != NULL) && (a_79 != b_79)))
              _fail(b_79);
            else
              a_79 = b_79;
          }
          t = not_null(a_79);
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
  ATerm h_79 = NULL,i_79 = NULL,j_79 = NULL;
  h_79 = t;
  g_79 :
  if(match_cons(h_79, sym__2))
    {
      i_79 = ATgetArgument(h_79, 0);
      j_79 = ATgetArgument(h_79, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(i_79), not_null(j_79));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm l_100 (ATerm))
{
  ATerm g_15;
  g_15 = t;
  {
    ATerm y_3 (ATerm t)
    {
      t = term_h_15;
      t = l_100(t);
      return(t);
    }
    t = try_1(t, y_3);
  }
  t = g_15;
  {
    ATerm z_3 (ATerm t)
    {
      ATerm r_79 = NULL;
      ATerm i_15;
      i_15 = t;
      {
        ATerm p_79 = NULL;
        ATerm q_79 = NULL;
        q_79 = t;
        if(((p_79 != NULL) && (p_79 != q_79)))
          _fail(q_79);
        else
          p_79 = q_79;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_11, not_null(p_79));
          t = set_config_0(t);
        }
      }
      t = i_15;
      {
        ATerm s_79 = NULL;
        s_79 = t;
        if(((r_79 != NULL) && (r_79 != s_79)))
          _fail(s_79);
        else
          r_79 = s_79;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_79));
      }
      return(t);
    }
    ATerm a_4 (ATerm t)
    {
      ATerm j_15 = t;
      int k_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_15 = t;
          int m_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(m_15);
            }
          else
            {
              t = l_15;
              {
                t = l_100(t);
                t = Cons_2(t, _id, a_4);
              }
            }
          ;
          LocalPopChoice(k_15);
        }
      else
        {
          t = j_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, z_3, a_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm y_79 = NULL,z_79 = NULL,a_80 = NULL;
  ATerm n_15;
  n_15 = t;
  {
    ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL,e_80 = NULL;
    b_80 = t;
    x_79 :
    if(match_cons(b_80, sym__3))
      {
        c_80 = ATgetArgument(b_80, 0);
        d_80 = ATgetArgument(b_80, 1);
        e_80 = ATgetArgument(b_80, 2);
        {
          if(((y_79 != NULL) && (y_79 != c_80)))
            _fail(c_80);
          else
            y_79 = c_80;
          {
            if(((z_79 != NULL) && (z_79 != d_80)))
              _fail(d_80);
            else
              z_79 = d_80;
            {
              if(((a_80 != NULL) && (a_80 != e_80)))
                _fail(e_80);
              else
                a_80 = e_80;
              t = SSL_table_put(not_null(y_79), not_null(z_79), not_null(a_80));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = n_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm k_100 (ATerm))
{
  ATerm h_80 = NULL;
  ATerm o_15;
  o_15 = t;
  {
    t = term_p_15;
    t = table_put_0(t);
  }
  t = o_15;
  {
    ATerm b_4 (ATerm t)
    {
      ATerm t_15 = t;
      int u_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_100(t);
          ;
          LocalPopChoice(u_15);
        }
      else
        {
          t = t_15;
          {
            ATerm y_15 = t;
            int b_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(b_16);
              }
            else
              {
                t = y_15;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, b_4);
    {
      ATerm c_4 (ATerm t)
      {
        ATerm c_16 = t;
        int g_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_16;
            j_16 = t;
            {
              ATerm k_16 = t;
              int o_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_f_12;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(o_16);
                }
              else
                {
                  t = k_16;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = j_16;
            {
              t = system_usage_0(t);
              {
                t = term_d_10;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(g_16);
          }
        else
          {
            t = c_16;
            {
              ATerm r_16 = t;
              int s_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_16;
                  t_16 = t;
                  {
                    t = term_h_14;
                    t = get_config_0(t);
                  }
                  t = t_16;
                  {
                    t = system_about_0(t);
                    {
                      t = term_d_10;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(s_16);
                }
              else
                {
                  t = r_16;
                  {
                    ATerm d_4 (ATerm t)
                    {
                      ATerm e_4 (ATerm t)
                      {
                        ATerm i_80 = NULL;
                        i_80 = t;
                        if(((h_80 != NULL) && (h_80 != i_80)))
                          _fail(i_80);
                        else
                          h_80 = i_80;
                        return(t);
                      }
                      t = Undefined_1(t, e_4);
                      return(t);
                    }
                    t = option_defined_1(t, d_4);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_80)), term_u_16));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_y_7;
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
      t = try_1(t, c_4);
      {
        ATerm v_16;
        v_16 = t;
        {
          t = term_e_13;
          t = table_destroy_0(t);
        }
        t = v_16;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm n_98 (ATerm))
{
  t = parse_options_1(t, k_98);
  {
    t = store_options_0(t);
    {
      t = m_98(t);
      {
        ATerm w_16 = t;
        int x_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_98);
            ;
            LocalPopChoice(x_16);
          }
        else
          {
            t = w_16;
            {
              ATerm y_16 = t;
              int z_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_98(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(z_16);
                }
              else
                {
                  t = y_16;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm c_98 (ATerm))
{
  ATerm f_4 (ATerm t)
  {
    ATerm a_17 = t;
    int b_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_98(t);
        ;
        LocalPopChoice(b_17);
      }
    else
      {
        t = a_17;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, z_97);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, f_4, b_98, c_98, g_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm))
{
  ATerm h_4 (ATerm t)
  {
    ATerm i_4 (ATerm t)
    {
      ATerm c_17;
      c_17 = t;
      {
        ATerm l_80 = NULL;
        ATerm m_80 = NULL;
        t = term_m_11;
        {
          t = get_config_0(t);
          {
            m_80 = t;
            if(((l_80 != NULL) && (l_80 != m_80)))
              _fail(m_80);
            else
              l_80 = m_80;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATempty, not_null(l_80)));
          t = printnl_0(t);
        }
      }
      t = c_17;
      return(t);
    }
    t = if_verbose2_1(t, i_4);
    return(t);
  }
  t = iowrap_4(t, t_97, u_97, v_97, h_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm r_97 (ATerm), ATerm s_97 (ATerm))
{
  t = iowrap_3(t, r_97, s_97, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm o_97 (ATerm))
{
  ATerm j_4 (ATerm t)
  {
    t = _2(t, _id, o_97);
    return(t);
  }
  t = iowrap_2(t, j_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
