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
ATerm term_h_16;
ATerm term_i_15;
ATerm term_u_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_z_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_v_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_y_10;
ATerm term_x_10;
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
ATerm term_r_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_h_8;
ATerm term_f_8;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_l_7;
ATerm term_g_7;
ATerm term_b_7;
ATerm term_y_4;
void init_constant_terms (void)
{
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_stdout_0);
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
  term_x_9 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_w_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__2, term_e_10, term_n_7);
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
  term_q_10 = (ATerm) ATmakeAppl(sym__2, term_p_10, term_n_7);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_r_12, term_s_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_n_7);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym__2, term_e_14, term_n_7);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__2, term_v_11, term_n_7);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym__3, term_r_12, term_s_12, (ATerm) ATempty);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm SDef_3 (ATerm, ATerm h_68 (ATerm), ATerm i_68 (ATerm), ATerm j_68 (ATerm));
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
ATerm SDef_3 (ATerm t, ATerm h_68 (ATerm), ATerm i_68 (ATerm), ATerm j_68 (ATerm))
{
  ATerm z_8 = NULL,a_9 = NULL,u_10 = NULL,v_10 = NULL;
  z_8 = t;
  y_8 :
  if(match_cons(z_8, sym_SDef_3))
    {
      a_9 = ATgetArgument(z_8, 0);
      u_10 = ATgetArgument(z_8, 1);
      v_10 = ATgetArgument(z_8, 2);
      {
        ATerm x_11 = NULL,z_11 = NULL;
        ATerm y_11 = NULL;
        t = SSLgetAnnotations(not_null(z_8));
        {
          y_11 = t;
          if(((x_11 != NULL) && (x_11 != y_11)))
            _fail(y_11);
          else
            x_11 = y_11;
        }
        {
          t = not_null(a_9);
          {
            ATerm e_12 = NULL;
            t = h_68(t);
            {
              z_11 = t;
              {
                t = not_null(u_10);
                {
                  ATerm g_12 = NULL;
                  t = i_68(t);
                  {
                    e_12 = t;
                    {
                      t = not_null(v_10);
                      {
                        ATerm i_12 = NULL;
                        t = j_68(t);
                        {
                          g_12 = t;
                          {
                            ATerm j_12 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(z_11), not_null(e_12), not_null(g_12)), not_null(x_11));
                            {
                              j_12 = t;
                              if(((i_12 != NULL) && (i_12 != j_12)))
                                _fail(j_12);
                              else
                                i_12 = j_12;
                            }
                            t = not_null(i_12);
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
ATerm Let_2 (ATerm t, ATerm s_65 (ATerm), ATerm t_65 (ATerm))
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL;
  w_12 = t;
  v_12 :
  if(match_cons(w_12, sym_Let_2))
    {
      x_12 = ATgetArgument(w_12, 0);
      y_12 = ATgetArgument(w_12, 1);
      {
        ATerm c_13 = NULL,e_13 = NULL;
        ATerm d_13 = NULL;
        t = SSLgetAnnotations(not_null(w_12));
        {
          d_13 = t;
          if(((c_13 != NULL) && (c_13 != d_13)))
            _fail(d_13);
          else
            c_13 = d_13;
        }
        {
          t = not_null(x_12);
          {
            ATerm g_13 = NULL;
            t = s_65(t);
            {
              e_13 = t;
              {
                t = not_null(y_12);
                {
                  ATerm i_13 = NULL;
                  t = t_65(t);
                  {
                    g_13 = t;
                    {
                      ATerm j_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(e_13), not_null(g_13)), not_null(c_13));
                      {
                        j_13 = t;
                        if(((i_13 != NULL) && (i_13 != j_13)))
                          _fail(j_13);
                        else
                          i_13 = j_13;
                      }
                      t = not_null(i_13);
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
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
  v_13 = t;
  u_13 :
  if(match_cons(v_13, sym_Op_2))
    {
      w_13 = ATgetArgument(v_13, 0);
      x_13 = ATgetArgument(v_13, 1);
      {
        ATerm b_14 = NULL,d_14 = NULL;
        ATerm c_14 = NULL;
        t = SSLgetAnnotations(not_null(v_13));
        {
          c_14 = t;
          if(((b_14 != NULL) && (b_14 != c_14)))
            _fail(c_14);
          else
            b_14 = c_14;
        }
        {
          t = not_null(w_13);
          {
            ATerm f_14 = NULL;
            t = o_62(t);
            {
              d_14 = t;
              {
                t = not_null(x_13);
                {
                  ATerm h_14 = NULL;
                  t = p_62(t);
                  {
                    f_14 = t;
                    {
                      ATerm i_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(d_14), not_null(f_14)), not_null(b_14));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm b_15 = NULL,c_15 = NULL;
  b_15 = t;
  a_15 :
  if(match_cons(b_15, sym_Var_1))
    {
      c_15 = ATgetArgument(b_15, 0);
      {
        ATerm d_4 = t;
        int e_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_15 = NULL,h_15 = NULL;
            ATerm g_15 = NULL;
            t = SSLgetAnnotations(not_null(b_15));
            {
              g_15 = t;
              if(((f_15 != NULL) && (f_15 != g_15)))
                _fail(g_15);
              else
                f_15 = g_15;
            }
            {
              t = not_null(c_15);
              {
                ATerm j_15 = NULL;
                t = n_0(t);
                {
                  h_15 = t;
                  {
                    ATerm k_15 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(h_15)), not_null(f_15));
                    {
                      k_15 = t;
                      if(((j_15 != NULL) && (j_15 != k_15)))
                        _fail(k_15);
                      else
                        j_15 = k_15;
                    }
                    t = not_null(j_15);
                  }
                }
              }
            }
            ;
            LocalPopChoice(e_4);
          }
        else
          {
            t = d_4;
            {
              ATerm f_4 = t;
              int g_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_15 = NULL,p_15 = NULL;
                  ATerm o_15 = NULL;
                  t = SSLgetAnnotations(not_null(b_15));
                  {
                    o_15 = t;
                    if(((n_15 != NULL) && (n_15 != o_15)))
                      _fail(o_15);
                    else
                      n_15 = o_15;
                  }
                  {
                    t = not_null(c_15);
                    {
                      ATerm r_15 = NULL;
                      t = n_0(t);
                      {
                        p_15 = t;
                        {
                          ATerm s_15 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(p_15)), not_null(n_15));
                          {
                            s_15 = t;
                            if(((r_15 != NULL) && (r_15 != s_15)))
                              _fail(s_15);
                            else
                              r_15 = s_15;
                          }
                          t = not_null(r_15);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(g_4);
                }
              else
                {
                  t = f_4;
                  {
                    ATerm v_15 = NULL,x_15 = NULL;
                    ATerm w_15 = NULL;
                    t = SSLgetAnnotations(not_null(b_15));
                    {
                      w_15 = t;
                      if(((v_15 != NULL) && (v_15 != w_15)))
                        _fail(w_15);
                      else
                        v_15 = w_15;
                    }
                    {
                      t = not_null(c_15);
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
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
  t_16 = t;
  s_16 :
  if(match_cons(t_16, sym_As_2))
    {
      u_16 = ATgetArgument(t_16, 0);
      v_16 = ATgetArgument(t_16, 1);
      {
        ATerm z_16 = NULL,b_17 = NULL;
        ATerm a_17 = NULL;
        t = SSLgetAnnotations(not_null(t_16));
        {
          a_17 = t;
          if(((z_16 != NULL) && (z_16 != a_17)))
            _fail(a_17);
          else
            z_16 = a_17;
        }
        {
          t = not_null(u_16);
          {
            ATerm d_17 = NULL;
            t = z_62(t);
            {
              b_17 = t;
              {
                t = not_null(v_16);
                {
                  ATerm f_17 = NULL;
                  t = a_63(t);
                  {
                    d_17 = t;
                    {
                      ATerm g_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(b_17), not_null(d_17)), not_null(z_16));
                      {
                        g_17 = t;
                        if(((f_17 != NULL) && (f_17 != g_17)))
                          _fail(g_17);
                        else
                          f_17 = g_17;
                      }
                      t = not_null(f_17);
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
  ATerm r_17 = NULL,s_17 = NULL;
  r_17 = t;
  q_17 :
  if(match_cons(r_17, sym_BuildDefault_1))
    {
      s_17 = ATgetArgument(r_17, 0);
      {
        ATerm v_17 = NULL,x_17 = NULL;
        ATerm w_17 = NULL;
        t = SSLgetAnnotations(not_null(r_17));
        {
          w_17 = t;
          if(((v_17 != NULL) && (v_17 != w_17)))
            _fail(w_17);
          else
            v_17 = w_17;
        }
        {
          t = not_null(s_17);
          {
            ATerm z_17 = NULL;
            t = f_63(t);
            {
              x_17 = t;
              {
                ATerm a_18 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(x_17)), not_null(v_17));
                {
                  a_18 = t;
                  if(((z_17 != NULL) && (z_17 != a_18)))
                    _fail(a_18);
                  else
                    z_17 = a_18;
                }
                t = not_null(z_17);
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
  ATerm k_18 = NULL,l_18 = NULL;
  k_18 = t;
  j_18 :
  if(match_cons(k_18, sym_Str_1))
    {
      l_18 = ATgetArgument(k_18, 0);
      {
        ATerm o_18 = NULL,q_18 = NULL;
        ATerm p_18 = NULL;
        t = SSLgetAnnotations(not_null(k_18));
        {
          p_18 = t;
          if(((o_18 != NULL) && (o_18 != p_18)))
            _fail(p_18);
          else
            o_18 = p_18;
        }
        {
          t = not_null(l_18);
          {
            ATerm s_18 = NULL;
            t = m_62(t);
            {
              q_18 = t;
              {
                ATerm t_18 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(q_18)), not_null(o_18));
                {
                  t_18 = t;
                  if(((s_18 != NULL) && (s_18 != t_18)))
                    _fail(t_18);
                  else
                    s_18 = t_18;
                }
                t = not_null(s_18);
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
  ATerm z_18 = NULL;
  z_18 = t;
  t = SSL_is_real(not_null(z_18));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm l_62 (ATerm))
{
  ATerm h_19 = NULL,i_19 = NULL;
  h_19 = t;
  g_19 :
  if(match_cons(h_19, sym_Real_1))
    {
      i_19 = ATgetArgument(h_19, 0);
      {
        ATerm l_19 = NULL,n_19 = NULL;
        ATerm m_19 = NULL;
        t = SSLgetAnnotations(not_null(h_19));
        {
          m_19 = t;
          if(((l_19 != NULL) && (l_19 != m_19)))
            _fail(m_19);
          else
            l_19 = m_19;
        }
        {
          t = not_null(i_19);
          {
            ATerm p_19 = NULL;
            t = l_62(t);
            {
              n_19 = t;
              {
                ATerm q_19 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(n_19)), not_null(l_19));
                {
                  q_19 = t;
                  if(((p_19 != NULL) && (p_19 != q_19)))
                    _fail(q_19);
                  else
                    p_19 = q_19;
                }
                t = not_null(p_19);
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
  ATerm a_20 = NULL,b_20 = NULL;
  a_20 = t;
  z_19 :
  if(match_cons(a_20, sym_Int_1))
    {
      b_20 = ATgetArgument(a_20, 0);
      {
        ATerm e_20 = NULL,g_20 = NULL;
        ATerm f_20 = NULL;
        t = SSLgetAnnotations(not_null(a_20));
        {
          f_20 = t;
          if(((e_20 != NULL) && (e_20 != f_20)))
            _fail(f_20);
          else
            e_20 = f_20;
        }
        {
          t = not_null(b_20);
          {
            ATerm i_20 = NULL;
            t = k_62(t);
            {
              g_20 = t;
              {
                ATerm j_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(g_20)), not_null(e_20));
                {
                  j_20 = t;
                  if(((i_20 != NULL) && (i_20 != j_20)))
                    _fail(j_20);
                  else
                    i_20 = j_20;
                }
                t = not_null(i_20);
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
  ATerm s_20 = NULL;
  s_20 = t;
  r_20 :
  if(match_cons(s_20, sym_Wld_0))
    {
      ATerm u_20 = NULL,w_20 = NULL;
      ATerm h_4;
      h_4 = t;
      {
        ATerm v_20 = NULL;
        t = SSLgetAnnotations(not_null(s_20));
        {
          v_20 = t;
          if(((u_20 != NULL) && (u_20 != v_20)))
            _fail(v_20);
          else
            u_20 = v_20;
        }
      }
      t = h_4;
      {
        ATerm x_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(u_20));
        {
          x_20 = t;
          if(((w_20 != NULL) && (w_20 != x_20)))
            _fail(x_20);
          else
            w_20 = x_20;
        }
        t = not_null(w_20);
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
  ATerm i_4 = t;
  int j_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      ;
      LocalPopChoice(j_4);
    }
  else
    {
      t = i_4;
      {
        ATerm k_4 = t;
        int l_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
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
                  t = Int_1(t, is_int_0);
                  ;
                  LocalPopChoice(n_4);
                }
              else
                {
                  t = m_4;
                  {
                    ATerm o_4 = t;
                    int p_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
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
                              t = Str_1(t, is_string_0);
                              ;
                              LocalPopChoice(r_4);
                            }
                          else
                            {
                              t = q_4;
                              {
                                ATerm s_4 = t;
                                int t_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    ;
                                    LocalPopChoice(t_4);
                                  }
                                else
                                  {
                                    t = s_4;
                                    {
                                      ATerm u_4 = t;
                                      int v_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm c_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, c_0, term_expression_0);
                                          ;
                                          LocalPopChoice(v_4);
                                        }
                                      else
                                        {
                                          t = u_4;
                                          {
                                            ATerm w_4 = t;
                                            int x_4 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm e_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, e_0);
                                                ;
                                                LocalPopChoice(x_4);
                                              }
                                            else
                                              {
                                                t = w_4;
                                                {
                                                  ATerm f_0 (ATerm t)
                                                  {
                                                    t = term_y_4;
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
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
  j_21 = t;
  i_21 :
  if(match_cons(j_21, sym_PrimT_3))
    {
      k_21 = ATgetArgument(j_21, 0);
      l_21 = ATgetArgument(j_21, 1);
      m_21 = ATgetArgument(j_21, 2);
      {
        ATerm r_21 = NULL,t_21 = NULL;
        ATerm s_21 = NULL;
        t = SSLgetAnnotations(not_null(j_21));
        {
          s_21 = t;
          if(((r_21 != NULL) && (r_21 != s_21)))
            _fail(s_21);
          else
            r_21 = s_21;
        }
        {
          t = not_null(k_21);
          {
            ATerm v_21 = NULL;
            t = y_66(t);
            {
              t_21 = t;
              {
                t = not_null(l_21);
                {
                  ATerm x_21 = NULL;
                  t = z_66(t);
                  {
                    v_21 = t;
                    {
                      t = not_null(m_21);
                      {
                        ATerm z_21 = NULL;
                        t = a_67(t);
                        {
                          x_21 = t;
                          {
                            ATerm a_22 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(t_21), not_null(v_21), not_null(x_21)), not_null(r_21));
                            {
                              a_22 = t;
                              if(((z_21 != NULL) && (z_21 != a_22)))
                                _fail(a_22);
                              else
                                z_21 = a_22;
                            }
                            t = not_null(z_21);
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
  ATerm m_22 = NULL,n_22 = NULL;
  m_22 = t;
  l_22 :
  if(match_cons(m_22, sym_Where_1))
    {
      n_22 = ATgetArgument(m_22, 0);
      {
        ATerm q_22 = NULL,s_22 = NULL;
        ATerm r_22 = NULL;
        t = SSLgetAnnotations(not_null(m_22));
        {
          r_22 = t;
          if(((q_22 != NULL) && (q_22 != r_22)))
            _fail(r_22);
          else
            q_22 = r_22;
        }
        {
          t = not_null(n_22);
          {
            ATerm u_22 = NULL;
            t = s_66(t);
            {
              s_22 = t;
              {
                ATerm v_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(s_22)), not_null(q_22));
                {
                  v_22 = t;
                  if(((u_22 != NULL) && (u_22 != v_22)))
                    _fail(v_22);
                  else
                    u_22 = v_22;
                }
                t = not_null(u_22);
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
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL;
  g_23 = t;
  f_23 :
  if(match_cons(g_23, sym_Scope_2))
    {
      h_23 = ATgetArgument(g_23, 0);
      i_23 = ATgetArgument(g_23, 1);
      {
        ATerm m_23 = NULL,o_23 = NULL;
        ATerm n_23 = NULL;
        t = SSLgetAnnotations(not_null(g_23));
        {
          n_23 = t;
          if(((m_23 != NULL) && (m_23 != n_23)))
            _fail(n_23);
          else
            m_23 = n_23;
        }
        {
          t = not_null(h_23);
          {
            ATerm q_23 = NULL;
            t = c_66(t);
            {
              o_23 = t;
              {
                t = not_null(i_23);
                {
                  ATerm s_23 = NULL;
                  t = d_66(t);
                  {
                    q_23 = t;
                    {
                      ATerm t_23 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(o_23), not_null(q_23)), not_null(m_23));
                      {
                        t_23 = t;
                        if(((s_23 != NULL) && (s_23 != t_23)))
                          _fail(t_23);
                        else
                          s_23 = t_23;
                      }
                      t = not_null(s_23);
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
  ATerm e_24 = NULL,f_24 = NULL;
  e_24 = t;
  d_24 :
  if(match_cons(e_24, sym_Build_1))
    {
      f_24 = ATgetArgument(e_24, 0);
      {
        ATerm i_24 = NULL,k_24 = NULL;
        ATerm j_24 = NULL;
        t = SSLgetAnnotations(not_null(e_24));
        {
          j_24 = t;
          if(((i_24 != NULL) && (i_24 != j_24)))
            _fail(j_24);
          else
            i_24 = j_24;
        }
        {
          t = not_null(f_24);
          {
            ATerm m_24 = NULL;
            t = a_66(t);
            {
              k_24 = t;
              {
                ATerm n_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(k_24)), not_null(i_24));
                {
                  n_24 = t;
                  if(((m_24 != NULL) && (m_24 != n_24)))
                    _fail(n_24);
                  else
                    m_24 = n_24;
                }
                t = not_null(m_24);
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
  ATerm x_24 = NULL,y_24 = NULL;
  x_24 = t;
  w_24 :
  if(match_cons(x_24, sym_Match_1))
    {
      y_24 = ATgetArgument(x_24, 0);
      {
        ATerm b_25 = NULL,d_25 = NULL;
        ATerm c_25 = NULL;
        t = SSLgetAnnotations(not_null(x_24));
        {
          c_25 = t;
          if(((b_25 != NULL) && (b_25 != c_25)))
            _fail(c_25);
          else
            b_25 = c_25;
        }
        {
          t = not_null(y_24);
          {
            ATerm f_25 = NULL;
            t = z_65(t);
            {
              d_25 = t;
              {
                ATerm g_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(d_25)), not_null(b_25));
                {
                  g_25 = t;
                  if(((f_25 != NULL) && (f_25 != g_25)))
                    _fail(g_25);
                  else
                    f_25 = g_25;
                }
                t = not_null(f_25);
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
  ATerm q_25 = NULL,r_25 = NULL;
  q_25 = t;
  p_25 :
  if(match_cons(q_25, sym_Thread_1))
    {
      r_25 = ATgetArgument(q_25, 0);
      {
        ATerm u_25 = NULL,w_25 = NULL;
        ATerm v_25 = NULL;
        t = SSLgetAnnotations(not_null(q_25));
        {
          v_25 = t;
          if(((u_25 != NULL) && (u_25 != v_25)))
            _fail(v_25);
          else
            u_25 = v_25;
        }
        {
          t = not_null(r_25);
          {
            ATerm y_25 = NULL;
            t = g_67(t);
            {
              w_25 = t;
              {
                ATerm z_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(w_25)), not_null(u_25));
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
  ATerm j_26 = NULL,k_26 = NULL;
  j_26 = t;
  i_26 :
  if(match_cons(j_26, sym_All_1))
    {
      k_26 = ATgetArgument(j_26, 0);
      {
        ATerm n_26 = NULL,p_26 = NULL;
        ATerm o_26 = NULL;
        t = SSLgetAnnotations(not_null(j_26));
        {
          o_26 = t;
          if(((n_26 != NULL) && (n_26 != o_26)))
            _fail(o_26);
          else
            n_26 = o_26;
        }
        {
          t = not_null(k_26);
          {
            ATerm r_26 = NULL;
            t = f_67(t);
            {
              p_26 = t;
              {
                ATerm s_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(p_26)), not_null(n_26));
                {
                  s_26 = t;
                  if(((r_26 != NULL) && (r_26 != s_26)))
                    _fail(s_26);
                  else
                    r_26 = s_26;
                }
                t = not_null(r_26);
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
  ATerm g_27 = NULL,h_27 = NULL;
  g_27 = t;
  f_27 :
  if(match_cons(g_27, sym_Some_1))
    {
      h_27 = ATgetArgument(g_27, 0);
      {
        ATerm z_4 = t;
        int a_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_27 = NULL,m_27 = NULL;
            ATerm l_27 = NULL;
            t = SSLgetAnnotations(not_null(g_27));
            {
              l_27 = t;
              if(((k_27 != NULL) && (k_27 != l_27)))
                _fail(l_27);
              else
                k_27 = l_27;
            }
            {
              t = not_null(h_27);
              {
                ATerm t_27 = NULL;
                t = m_0(t);
                {
                  m_27 = t;
                  {
                    ATerm u_27 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(m_27)), not_null(k_27));
                    {
                      u_27 = t;
                      if(((t_27 != NULL) && (t_27 != u_27)))
                        _fail(u_27);
                      else
                        t_27 = u_27;
                    }
                    t = not_null(t_27);
                  }
                }
              }
            }
            ;
            LocalPopChoice(a_5);
          }
        else
          {
            t = z_4;
            {
              ATerm x_27 = NULL,z_27 = NULL;
              ATerm y_27 = NULL;
              t = SSLgetAnnotations(not_null(g_27));
              {
                y_27 = t;
                if(((x_27 != NULL) && (x_27 != y_27)))
                  _fail(y_27);
                else
                  x_27 = y_27;
              }
              {
                t = not_null(h_27);
                {
                  ATerm b_28 = NULL;
                  t = m_0(t);
                  {
                    z_27 = t;
                    {
                      ATerm c_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(z_27)), not_null(x_27));
                      {
                        c_28 = t;
                        if(((b_28 != NULL) && (b_28 != c_28)))
                          _fail(c_28);
                        else
                          b_28 = c_28;
                      }
                      t = not_null(b_28);
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
  ATerm t_28 = NULL,u_28 = NULL;
  t_28 = t;
  s_28 :
  if(match_cons(t_28, sym_One_1))
    {
      u_28 = ATgetArgument(t_28, 0);
      {
        ATerm x_28 = NULL,z_28 = NULL;
        ATerm y_28 = NULL;
        t = SSLgetAnnotations(not_null(t_28));
        {
          y_28 = t;
          if(((x_28 != NULL) && (x_28 != y_28)))
            _fail(y_28);
          else
            x_28 = y_28;
        }
        {
          t = not_null(u_28);
          {
            ATerm b_29 = NULL;
            t = e_67(t);
            {
              z_28 = t;
              {
                ATerm c_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(z_28)), not_null(x_28));
                {
                  c_29 = t;
                  if(((b_29 != NULL) && (b_29 != c_29)))
                    _fail(c_29);
                  else
                    b_29 = c_29;
                }
                t = not_null(b_29);
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
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
  n_29 = t;
  m_29 :
  if(match_cons(n_29, sym_Cong_2))
    {
      o_29 = ATgetArgument(n_29, 0);
      p_29 = ATgetArgument(n_29, 1);
      {
        ATerm t_29 = NULL,v_29 = NULL;
        ATerm u_29 = NULL;
        t = SSLgetAnnotations(not_null(n_29));
        {
          u_29 = t;
          if(((t_29 != NULL) && (t_29 != u_29)))
            _fail(u_29);
          else
            t_29 = u_29;
        }
        {
          t = not_null(o_29);
          {
            ATerm x_29 = NULL;
            t = f_61(t);
            {
              v_29 = t;
              {
                t = not_null(p_29);
                {
                  ATerm z_29 = NULL;
                  t = g_61(t);
                  {
                    x_29 = t;
                    {
                      ATerm a_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(v_29), not_null(x_29)), not_null(t_29));
                      {
                        a_30 = t;
                        if(((z_29 != NULL) && (z_29 != a_30)))
                          _fail(a_30);
                        else
                          z_29 = a_30;
                      }
                      t = not_null(z_29);
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
  ATerm h_30 = NULL;
  h_30 = t;
  t = SSL_is_int(not_null(h_30));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm b_67 (ATerm), ATerm c_67 (ATerm))
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL;
  q_30 = t;
  p_30 :
  if(match_cons(q_30, sym_Path_2))
    {
      r_30 = ATgetArgument(q_30, 0);
      s_30 = ATgetArgument(q_30, 1);
      {
        ATerm w_30 = NULL,y_30 = NULL;
        ATerm x_30 = NULL;
        t = SSLgetAnnotations(not_null(q_30));
        {
          x_30 = t;
          if(((w_30 != NULL) && (w_30 != x_30)))
            _fail(x_30);
          else
            w_30 = x_30;
        }
        {
          t = not_null(r_30);
          {
            ATerm a_31 = NULL;
            t = b_67(t);
            {
              y_30 = t;
              {
                t = not_null(s_30);
                {
                  ATerm c_31 = NULL;
                  t = c_67(t);
                  {
                    a_31 = t;
                    {
                      ATerm d_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(y_30), not_null(a_31)), not_null(w_30));
                      {
                        d_31 = t;
                        if(((c_31 != NULL) && (c_31 != d_31)))
                          _fail(d_31);
                        else
                          c_31 = d_31;
                      }
                      t = not_null(c_31);
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
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
  p_31 = t;
  o_31 :
  if(match_cons(p_31, sym_Rec_2))
    {
      q_31 = ATgetArgument(p_31, 0);
      r_31 = ATgetArgument(p_31, 1);
      {
        ATerm v_31 = NULL,x_31 = NULL;
        ATerm w_31 = NULL;
        t = SSLgetAnnotations(not_null(p_31));
        {
          w_31 = t;
          if(((v_31 != NULL) && (v_31 != w_31)))
            _fail(w_31);
          else
            v_31 = w_31;
        }
        {
          t = not_null(q_31);
          {
            ATerm z_31 = NULL;
            t = p_66(t);
            {
              x_31 = t;
              {
                t = not_null(r_31);
                {
                  ATerm b_32 = NULL;
                  t = q_66(t);
                  {
                    z_31 = t;
                    {
                      ATerm c_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(x_31), not_null(z_31)), not_null(v_31));
                      {
                        c_32 = t;
                        if(((b_32 != NULL) && (b_32 != c_32)))
                          _fail(c_32);
                        else
                          b_32 = c_32;
                      }
                      t = not_null(b_32);
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
  ATerm n_32 = NULL,o_32 = NULL;
  n_32 = t;
  m_32 :
  if(match_cons(n_32, sym_SVar_1))
    {
      o_32 = ATgetArgument(n_32, 0);
      {
        ATerm r_32 = NULL,t_32 = NULL;
        ATerm s_32 = NULL;
        t = SSLgetAnnotations(not_null(n_32));
        {
          s_32 = t;
          if(((r_32 != NULL) && (r_32 != s_32)))
            _fail(s_32);
          else
            r_32 = s_32;
        }
        {
          t = not_null(o_32);
          {
            ATerm v_32 = NULL;
            t = r_65(t);
            {
              t_32 = t;
              {
                ATerm w_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(t_32)), not_null(r_32));
                {
                  w_32 = t;
                  if(((v_32 != NULL) && (v_32 != w_32)))
                    _fail(w_32);
                  else
                    v_32 = w_32;
                }
                t = not_null(v_32);
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
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL;
  i_33 = t;
  h_33 :
  if(match_cons(i_33, sym_CallT_3))
    {
      j_33 = ATgetArgument(i_33, 0);
      k_33 = ATgetArgument(i_33, 1);
      l_33 = ATgetArgument(i_33, 2);
      {
        ATerm q_33 = NULL,s_33 = NULL;
        ATerm r_33 = NULL;
        t = SSLgetAnnotations(not_null(i_33));
        {
          r_33 = t;
          if(((q_33 != NULL) && (q_33 != r_33)))
            _fail(r_33);
          else
            q_33 = r_33;
        }
        {
          t = not_null(j_33);
          {
            ATerm w_33 = NULL;
            t = w_65(t);
            {
              s_33 = t;
              {
                t = not_null(k_33);
                {
                  ATerm y_33 = NULL;
                  t = x_65(t);
                  {
                    w_33 = t;
                    {
                      t = not_null(l_33);
                      {
                        ATerm a_34 = NULL;
                        t = y_65(t);
                        {
                          y_33 = t;
                          {
                            ATerm b_34 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(s_33), not_null(w_33), not_null(y_33)), not_null(q_33));
                            {
                              b_34 = t;
                              if(((a_34 != NULL) && (a_34 != b_34)))
                                _fail(b_34);
                              else
                                a_34 = b_34;
                            }
                            t = not_null(a_34);
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
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
  o_34 = t;
  n_34 :
  if(match_cons(o_34, sym_LGChoice_2))
    {
      p_34 = ATgetArgument(o_34, 0);
      q_34 = ATgetArgument(o_34, 1);
      {
        ATerm u_34 = NULL,w_34 = NULL;
        ATerm v_34 = NULL;
        t = SSLgetAnnotations(not_null(o_34));
        {
          v_34 = t;
          if(((u_34 != NULL) && (u_34 != v_34)))
            _fail(v_34);
          else
            u_34 = v_34;
        }
        {
          t = not_null(p_34);
          {
            ATerm y_34 = NULL;
            t = k_66(t);
            {
              w_34 = t;
              {
                t = not_null(q_34);
                {
                  ATerm a_35 = NULL;
                  t = l_66(t);
                  {
                    y_34 = t;
                    {
                      ATerm b_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(w_34), not_null(y_34)), not_null(u_34));
                      {
                        b_35 = t;
                        if(((a_35 != NULL) && (a_35 != b_35)))
                          _fail(b_35);
                        else
                          a_35 = b_35;
                      }
                      t = not_null(a_35);
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
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
  p_35 = t;
  o_35 :
  if(match_cons(p_35, sym_GChoice_2))
    {
      q_35 = ATgetArgument(p_35, 0);
      r_35 = ATgetArgument(p_35, 1);
      {
        ATerm v_35 = NULL,x_35 = NULL;
        ATerm w_35 = NULL;
        t = SSLgetAnnotations(not_null(p_35));
        {
          w_35 = t;
          if(((v_35 != NULL) && (v_35 != w_35)))
            _fail(w_35);
          else
            v_35 = w_35;
        }
        {
          t = not_null(q_35);
          {
            ATerm z_35 = NULL;
            t = k_65(t);
            {
              x_35 = t;
              {
                t = not_null(r_35);
                {
                  ATerm b_36 = NULL;
                  t = l_65(t);
                  {
                    z_35 = t;
                    {
                      ATerm c_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(x_35), not_null(z_35)), not_null(v_35));
                      {
                        c_36 = t;
                        if(((b_36 != NULL) && (b_36 != c_36)))
                          _fail(c_36);
                        else
                          b_36 = c_36;
                      }
                      t = not_null(b_36);
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
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL;
  p_36 = t;
  o_36 :
  if(match_cons(p_36, sym_GuardedLChoice_3))
    {
      q_36 = ATgetArgument(p_36, 0);
      r_36 = ATgetArgument(p_36, 1);
      s_36 = ATgetArgument(p_36, 2);
      {
        ATerm x_36 = NULL,z_36 = NULL;
        ATerm y_36 = NULL;
        t = SSLgetAnnotations(not_null(p_36));
        {
          y_36 = t;
          if(((x_36 != NULL) && (x_36 != y_36)))
            _fail(y_36);
          else
            x_36 = y_36;
        }
        {
          t = not_null(q_36);
          {
            ATerm b_37 = NULL;
            t = m_66(t);
            {
              z_36 = t;
              {
                t = not_null(r_36);
                {
                  ATerm d_37 = NULL;
                  t = n_66(t);
                  {
                    b_37 = t;
                    {
                      t = not_null(s_36);
                      {
                        ATerm f_37 = NULL;
                        t = o_66(t);
                        {
                          d_37 = t;
                          {
                            ATerm g_37 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(z_36), not_null(b_37), not_null(d_37)), not_null(x_36));
                            {
                              g_37 = t;
                              if(((f_37 != NULL) && (f_37 != g_37)))
                                _fail(g_37);
                              else
                                f_37 = g_37;
                            }
                            t = not_null(f_37);
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
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL;
  t_37 = t;
  s_37 :
  if(match_cons(t_37, sym_LChoice_2))
    {
      u_37 = ATgetArgument(t_37, 0);
      v_37 = ATgetArgument(t_37, 1);
      {
        ATerm z_37 = NULL,b_38 = NULL;
        ATerm a_38 = NULL;
        t = SSLgetAnnotations(not_null(t_37));
        {
          a_38 = t;
          if(((z_37 != NULL) && (z_37 != a_38)))
            _fail(a_38);
          else
            z_37 = a_38;
        }
        {
          t = not_null(u_37);
          {
            ATerm d_38 = NULL;
            t = i_66(t);
            {
              b_38 = t;
              {
                t = not_null(v_37);
                {
                  ATerm f_38 = NULL;
                  t = j_66(t);
                  {
                    d_38 = t;
                    {
                      ATerm g_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(b_38), not_null(d_38)), not_null(z_37));
                      {
                        g_38 = t;
                        if(((f_38 != NULL) && (f_38 != g_38)))
                          _fail(g_38);
                        else
                          f_38 = g_38;
                      }
                      t = not_null(f_38);
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
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
  s_38 = t;
  r_38 :
  if(match_cons(s_38, sym_Choice_2))
    {
      t_38 = ATgetArgument(s_38, 0);
      u_38 = ATgetArgument(s_38, 1);
      {
        ATerm y_38 = NULL,a_39 = NULL;
        ATerm z_38 = NULL;
        t = SSLgetAnnotations(not_null(s_38));
        {
          z_38 = t;
          if(((y_38 != NULL) && (y_38 != z_38)))
            _fail(z_38);
          else
            y_38 = z_38;
        }
        {
          t = not_null(t_38);
          {
            ATerm c_39 = NULL;
            t = g_65(t);
            {
              a_39 = t;
              {
                t = not_null(u_38);
                {
                  ATerm e_39 = NULL;
                  t = h_65(t);
                  {
                    c_39 = t;
                    {
                      ATerm f_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(a_39), not_null(c_39)), not_null(y_38));
                      {
                        f_39 = t;
                        if(((e_39 != NULL) && (e_39 != f_39)))
                          _fail(f_39);
                        else
                          e_39 = f_39;
                      }
                      t = not_null(e_39);
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
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
  r_39 = t;
  q_39 :
  if(match_cons(r_39, sym_Seq_2))
    {
      s_39 = ATgetArgument(r_39, 0);
      t_39 = ATgetArgument(r_39, 1);
      {
        ATerm x_39 = NULL,z_39 = NULL;
        ATerm y_39 = NULL;
        t = SSLgetAnnotations(not_null(r_39));
        {
          y_39 = t;
          if(((x_39 != NULL) && (x_39 != y_39)))
            _fail(y_39);
          else
            x_39 = y_39;
        }
        {
          t = not_null(s_39);
          {
            ATerm b_40 = NULL;
            t = g_66(t);
            {
              z_39 = t;
              {
                t = not_null(t_39);
                {
                  ATerm d_40 = NULL;
                  t = h_66(t);
                  {
                    b_40 = t;
                    {
                      ATerm e_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(z_39), not_null(b_40)), not_null(x_39));
                      {
                        e_40 = t;
                        if(((d_40 != NULL) && (d_40 != e_40)))
                          _fail(e_40);
                        else
                          d_40 = e_40;
                      }
                      t = not_null(d_40);
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
  ATerm t_40 = NULL,u_40 = NULL;
  t_40 = t;
  s_40 :
  if(match_cons(t_40, sym_Test_1))
    {
      u_40 = ATgetArgument(t_40, 0);
      {
        ATerm x_40 = NULL,z_40 = NULL;
        ATerm y_40 = NULL;
        t = SSLgetAnnotations(not_null(t_40));
        {
          y_40 = t;
          if(((x_40 != NULL) && (x_40 != y_40)))
            _fail(y_40);
          else
            x_40 = y_40;
        }
        {
          t = not_null(u_40);
          {
            ATerm b_41 = NULL;
            t = t_66(t);
            {
              z_40 = t;
              {
                ATerm c_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(z_40)), not_null(x_40));
                {
                  c_41 = t;
                  if(((b_41 != NULL) && (b_41 != c_41)))
                    _fail(c_41);
                  else
                    b_41 = c_41;
                }
                t = not_null(b_41);
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
  ATerm m_41 = NULL,n_41 = NULL;
  m_41 = t;
  l_41 :
  if(match_cons(m_41, sym_Not_1))
    {
      n_41 = ATgetArgument(m_41, 0);
      {
        ATerm q_41 = NULL,s_41 = NULL;
        ATerm r_41 = NULL;
        t = SSLgetAnnotations(not_null(m_41));
        {
          r_41 = t;
          if(((q_41 != NULL) && (q_41 != r_41)))
            _fail(r_41);
          else
            q_41 = r_41;
        }
        {
          t = not_null(n_41);
          {
            ATerm u_41 = NULL;
            t = r_66(t);
            {
              s_41 = t;
              {
                ATerm v_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(s_41)), not_null(q_41));
                {
                  v_41 = t;
                  if(((u_41 != NULL) && (u_41 != v_41)))
                    _fail(v_41);
                  else
                    u_41 = v_41;
                }
                t = not_null(u_41);
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
  ATerm e_42 = NULL;
  e_42 = t;
  d_42 :
  if(match_cons(e_42, sym_Fail_0))
    {
      ATerm h_42 = NULL,m_42 = NULL;
      ATerm b_5;
      b_5 = t;
      {
        ATerm i_42 = NULL;
        t = SSLgetAnnotations(not_null(e_42));
        {
          i_42 = t;
          if(((h_42 != NULL) && (h_42 != i_42)))
            _fail(i_42);
          else
            h_42 = i_42;
        }
      }
      t = b_5;
      {
        ATerm n_42 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(h_42));
        {
          n_42 = t;
          if(((m_42 != NULL) && (m_42 != n_42)))
            _fail(n_42);
          else
            m_42 = n_42;
        }
        t = not_null(m_42);
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
  ATerm v_42 = NULL;
  v_42 = t;
  u_42 :
  if(match_cons(v_42, sym_Id_0))
    {
      ATerm x_42 = NULL,z_42 = NULL;
      ATerm c_5;
      c_5 = t;
      {
        ATerm y_42 = NULL;
        t = SSLgetAnnotations(not_null(v_42));
        {
          y_42 = t;
          if(((x_42 != NULL) && (x_42 != y_42)))
            _fail(y_42);
          else
            x_42 = y_42;
        }
      }
      t = c_5;
      {
        ATerm a_43 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(x_42));
        {
          a_43 = t;
          if(((z_42 != NULL) && (z_42 != a_43)))
            _fail(a_43);
          else
            z_42 = a_43;
        }
        t = not_null(z_42);
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
  ATerm d_5 = t;
  int e_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      ;
      LocalPopChoice(e_5);
    }
  else
    {
      t = d_5;
      {
        ATerm f_5 = t;
        int g_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            ;
            LocalPopChoice(g_5);
          }
        else
          {
            t = f_5;
            {
              ATerm h_5 = t;
              int i_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  ;
                  LocalPopChoice(i_5);
                }
              else
                {
                  t = h_5;
                  {
                    ATerm j_5 = t;
                    int k_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        ;
                        LocalPopChoice(k_5);
                      }
                    else
                      {
                        t = j_5;
                        {
                          ATerm l_5 = t;
                          int m_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              ;
                              LocalPopChoice(m_5);
                            }
                          else
                            {
                              t = l_5;
                              {
                                ATerm n_5 = t;
                                int o_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    ;
                                    LocalPopChoice(o_5);
                                  }
                                else
                                  {
                                    t = n_5;
                                    {
                                      ATerm p_5 = t;
                                      int q_5 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          ;
                                          LocalPopChoice(q_5);
                                        }
                                      else
                                        {
                                          t = p_5;
                                          {
                                            ATerm r_5 = t;
                                            int s_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
                                                ;
                                                LocalPopChoice(s_5);
                                              }
                                            else
                                              {
                                                t = r_5;
                                                {
                                                  ATerm t_5 = t;
                                                  int u_5 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      ;
                                                      LocalPopChoice(u_5);
                                                    }
                                                  else
                                                    {
                                                      t = t_5;
                                                      {
                                                        ATerm v_5 = t;
                                                        int w_5 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                            ;
                                                            LocalPopChoice(w_5);
                                                          }
                                                        else
                                                          {
                                                            t = v_5;
                                                            {
                                                              ATerm x_5 = t;
                                                              int y_5 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm h_0 (ATerm t)
                                                                  {
                                                                    ATerm q_0 (ATerm t)
                                                                    {
                                                                      ATerm z_5 = t;
                                                                      int a_6 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = is_string_0(t);
                                                                          ;
                                                                          LocalPopChoice(a_6);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = z_5;
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
                                                                  LocalPopChoice(y_5);
                                                                }
                                                              else
                                                                {
                                                                  t = x_5;
                                                                  {
                                                                    ATerm b_6 = t;
                                                                    int c_6 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
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
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
                                                                              ;
                                                                              LocalPopChoice(e_6);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = d_6;
                                                                              {
                                                                                ATerm f_6 = t;
                                                                                int g_6 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm r_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, r_0);
                                                                                    ;
                                                                                    LocalPopChoice(g_6);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = f_6;
                                                                                    {
                                                                                      ATerm h_6 = t;
                                                                                      int i_6 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1(t, strategy_expression_0);
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
                                                                                                t = Some_1(t, strategy_expression_0);
                                                                                                ;
                                                                                                LocalPopChoice(k_6);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = j_6;
                                                                                                {
                                                                                                  ATerm l_6 = t;
                                                                                                  int m_6 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1(t, strategy_expression_0);
                                                                                                      ;
                                                                                                      LocalPopChoice(m_6);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = l_6;
                                                                                                      {
                                                                                                        ATerm n_6 = t;
                                                                                                        int o_6 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1(t, strategy_expression_0);
                                                                                                            ;
                                                                                                            LocalPopChoice(o_6);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = n_6;
                                                                                                            {
                                                                                                              ATerm p_6 = t;
                                                                                                              int q_6 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1(t, term_expression_0);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(q_6);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = p_6;
                                                                                                                  {
                                                                                                                    ATerm r_6 = t;
                                                                                                                    int s_6 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1(t, term_expression_0);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(s_6);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = r_6;
                                                                                                                        {
                                                                                                                          ATerm t_6 = t;
                                                                                                                          int u_6 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm s_0 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, s_0, strategy_expression_0);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(u_6);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = t_6;
                                                                                                                              {
                                                                                                                                ATerm v_6 = t;
                                                                                                                                int w_6 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1(t, strategy_expression_0);
                                                                                                                                    ;
                                                                                                                                    LocalPopChoice(w_6);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = v_6;
                                                                                                                                    {
                                                                                                                                      ATerm x_6 = t;
                                                                                                                                      int y_6 = stack_ptr;
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
                                                                                                                                          LocalPopChoice(y_6);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = x_6;
                                                                                                                                          {
                                                                                                                                            ATerm z_6 = t;
                                                                                                                                            int a_7 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm v_0 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm w_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, w_0);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Let_2(t, v_0, strategy_expression_0);
                                                                                                                                                ;
                                                                                                                                                LocalPopChoice(a_7);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = z_6;
                                                                                                                                                {
                                                                                                                                                  ATerm x_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = term_b_7;
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = debug_1(t, x_0);
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
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
  n_43 = t;
  m_43 :
  if(match_cons(n_43, sym_VarDec_2))
    {
      o_43 = ATgetArgument(n_43, 0);
      p_43 = ATgetArgument(n_43, 1);
      {
        ATerm u_43 = NULL,w_43 = NULL;
        ATerm v_43 = NULL;
        t = SSLgetAnnotations(not_null(n_43));
        {
          v_43 = t;
          if(((u_43 != NULL) && (u_43 != v_43)))
            _fail(v_43);
          else
            u_43 = v_43;
        }
        {
          t = not_null(o_43);
          {
            ATerm y_43 = NULL;
            t = d_68(t);
            {
              w_43 = t;
              {
                t = not_null(p_43);
                {
                  ATerm a_44 = NULL;
                  t = e_68(t);
                  {
                    y_43 = t;
                    {
                      ATerm b_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(w_43), not_null(y_43)), not_null(u_43));
                      {
                        b_44 = t;
                        if(((a_44 != NULL) && (a_44 != b_44)))
                          _fail(b_44);
                        else
                          a_44 = b_44;
                      }
                      t = not_null(a_44);
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
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL;
  o_44 = t;
  n_44 :
  if(match_cons(o_44, sym_Mod_2))
    {
      p_44 = ATgetArgument(o_44, 0);
      q_44 = ATgetArgument(o_44, 1);
      {
        ATerm u_44 = NULL,w_44 = NULL;
        ATerm v_44 = NULL;
        t = SSLgetAnnotations(not_null(o_44));
        {
          v_44 = t;
          if(((u_44 != NULL) && (u_44 != v_44)))
            _fail(v_44);
          else
            u_44 = v_44;
        }
        {
          t = not_null(p_44);
          {
            ATerm y_44 = NULL;
            t = v_67(t);
            {
              w_44 = t;
              {
                t = not_null(q_44);
                {
                  ATerm a_45 = NULL;
                  t = w_67(t);
                  {
                    y_44 = t;
                    {
                      ATerm b_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Mod_2, not_null(w_44), not_null(y_44)), not_null(u_44));
                      {
                        b_45 = t;
                        if(((a_45 != NULL) && (a_45 != b_45)))
                          _fail(b_45);
                        else
                          a_45 = b_45;
                      }
                      t = not_null(a_45);
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
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL;
  v_45 = t;
  u_45 :
  if(match_cons(v_45, sym_SDefT_4))
    {
      w_45 = ATgetArgument(v_45, 0);
      x_45 = ATgetArgument(v_45, 1);
      y_45 = ATgetArgument(v_45, 2);
      z_45 = ATgetArgument(v_45, 3);
      {
        ATerm f_46 = NULL,h_46 = NULL;
        ATerm g_46 = NULL;
        t = SSLgetAnnotations(not_null(v_45));
        {
          g_46 = t;
          if(((f_46 != NULL) && (f_46 != g_46)))
            _fail(g_46);
          else
            f_46 = g_46;
        }
        {
          t = not_null(w_45);
          {
            ATerm j_46 = NULL;
            t = k_68(t);
            {
              h_46 = t;
              {
                t = not_null(x_45);
                {
                  ATerm l_46 = NULL;
                  t = l_68(t);
                  {
                    j_46 = t;
                    {
                      t = not_null(y_45);
                      {
                        ATerm n_46 = NULL;
                        t = m_68(t);
                        {
                          l_46 = t;
                          {
                            t = not_null(z_45);
                            {
                              ATerm p_46 = NULL;
                              t = n_68(t);
                              {
                                n_46 = t;
                                {
                                  ATerm q_46 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(h_46), not_null(j_46), not_null(l_46), not_null(n_46)), not_null(f_46));
                                  {
                                    q_46 = t;
                                    if(((p_46 != NULL) && (p_46 != q_46)))
                                      _fail(q_46);
                                    else
                                      p_46 = q_46;
                                  }
                                  t = not_null(p_46);
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
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_0 (ATerm t)
      {
        ATerm e_7 = t;
        int f_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_string_0(t);
            ;
            LocalPopChoice(f_7);
          }
        else
          {
            t = e_7;
            t = Mod_2(t, is_string_0, is_string_0);
          }
        return(t);
      }
      ATerm z_0 (ATerm t)
      {
        ATerm b_1 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, b_1);
        return(t);
      }
      ATerm a_1 (ATerm t)
      {
        ATerm c_1 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, c_1);
        return(t);
      }
      t = SDefT_4(t, y_0, z_0, a_1, strategy_expression_0);
      ;
      LocalPopChoice(d_7);
    }
  else
    {
      t = c_7;
      {
        ATerm d_1 (ATerm t)
        {
          t = term_g_7;
          return(t);
        }
        t = debug_1(t, d_1);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm z_81 (ATerm))
{
  ATerm y_46 (ATerm t)
  {
    ATerm h_7 = t;
    int i_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(i_7);
      }
    else
      {
        t = h_7;
        t = Cons_2(t, z_81, y_46);
      }
    return(t);
  }
  t = y_46(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm j_61 (ATerm))
{
  ATerm e_47 = NULL,f_47 = NULL;
  e_47 = t;
  d_47 :
  if(match_cons(e_47, sym_Strategies_1))
    {
      f_47 = ATgetArgument(e_47, 0);
      {
        ATerm i_47 = NULL,k_47 = NULL;
        ATerm j_47 = NULL;
        t = SSLgetAnnotations(not_null(e_47));
        {
          j_47 = t;
          if(((i_47 != NULL) && (i_47 != j_47)))
            _fail(j_47);
          else
            i_47 = j_47;
        }
        {
          t = not_null(f_47);
          {
            ATerm m_47 = NULL;
            t = j_61(t);
            {
              k_47 = t;
              {
                ATerm n_47 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(k_47)), not_null(i_47));
                {
                  n_47 = t;
                  if(((m_47 != NULL) && (m_47 != n_47)))
                    _fail(n_47);
                  else
                    m_47 = n_47;
                }
                t = not_null(m_47);
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
  ATerm x_47 = NULL,y_47 = NULL;
  x_47 = t;
  w_47 :
  if(match_cons(x_47, sym_Specification_1))
    {
      y_47 = ATgetArgument(x_47, 0);
      {
        ATerm b_48 = NULL,d_48 = NULL;
        ATerm c_48 = NULL;
        t = SSLgetAnnotations(not_null(x_47));
        {
          c_48 = t;
          if(((b_48 != NULL) && (b_48 != c_48)))
            _fail(c_48);
          else
            b_48 = c_48;
        }
        {
          t = not_null(y_47);
          {
            ATerm f_48 = NULL;
            t = o_61(t);
            {
              d_48 = t;
              {
                ATerm g_48 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(d_48)), not_null(b_48));
                {
                  g_48 = t;
                  if(((f_48 != NULL) && (f_48 != g_48)))
                    _fail(g_48);
                  else
                    f_48 = g_48;
                }
                t = not_null(f_48);
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
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_1 (ATerm t)
      {
        ATerm f_1 (ATerm t)
        {
          ATerm g_1 (ATerm t)
          {
            ATerm h_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, h_1);
            return(t);
          }
          t = Cons_2(t, g_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, f_1);
        return(t);
      }
      t = Specification_1(t, e_1);
      ;
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      {
        ATerm i_1 (ATerm t)
        {
          t = term_l_7;
          return(t);
        }
        t = debug_1(t, i_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm u_59 (ATerm), ATerm v_59 (ATerm))
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL;
  r_48 = t;
  q_48 :
  if(match_cons(r_48, sym__2))
    {
      s_48 = ATgetArgument(r_48, 0);
      t_48 = ATgetArgument(r_48, 1);
      {
        ATerm b_49 = NULL,i_49 = NULL;
        ATerm h_49 = NULL;
        t = SSLgetAnnotations(not_null(r_48));
        {
          h_49 = t;
          if(((b_49 != NULL) && (b_49 != h_49)))
            _fail(h_49);
          else
            b_49 = h_49;
        }
        {
          t = not_null(s_48);
          {
            ATerm k_49 = NULL;
            t = u_59(t);
            {
              i_49 = t;
              {
                t = not_null(t_48);
                {
                  ATerm m_49 = NULL;
                  t = v_59(t);
                  {
                    k_49 = t;
                    {
                      ATerm n_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(i_49), not_null(k_49)), not_null(b_49));
                      {
                        n_49 = t;
                        if(((m_49 != NULL) && (m_49 != n_49)))
                          _fail(n_49);
                        else
                          m_49 = n_49;
                      }
                      t = not_null(m_49);
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
  ATerm m_7;
  m_7 = t;
  {
    ATerm u_49 = NULL;
    ATerm v_49 = NULL;
    t = term_n_7;
    {
      t = whoami_0(t);
      {
        v_49 = t;
        if(((u_49 != NULL) && (u_49 != v_49)))
          _fail(v_49);
        else
          u_49 = v_49;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_7), not_null(u_49)), term_p_7));
      {
        t = printnl_0(t);
        {
          t = term_r_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = m_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL;
  z_49 = t;
  y_49 :
  if(match_cons(z_49, sym__2))
    {
      a_50 = ATgetArgument(z_49, 0);
      b_50 = ATgetArgument(z_49, 1);
      {
        ATerm s_7;
        s_7 = t;
        t = SSL_printnl(not_null(a_50), not_null(b_50));
        t = s_7;
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
  ATerm i_50 = NULL;
  i_50 = t;
  t = SSL_implode_string(not_null(i_50));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(u_7);
    }
  else
    {
      t = t_7;
      {
        ATerm n_50 = NULL,t_50 = NULL,u_50 = NULL;
        n_50 = t;
        m_50 :
        if(((ATgetType(n_50) == AT_LIST) && !(ATisEmpty(n_50))))
          {
            t_50 = ATgetFirst((ATermList) n_50);
            u_50 = (ATerm) ATgetNext((ATermList) n_50);
            {
              t = not_null(t_50);
              {
                ATerm j_1 (ATerm t)
                {
                  t = not_null(u_50);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, j_1);
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
  ATerm e_51 = NULL;
  ATerm g_51 = NULL;
  e_51 = t;
  {
    ATerm i_51 = NULL;
    ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL;
    t = not_null(e_51);
    {
      i_51 = t;
      {
        t = SSL_explode_term(not_null(i_51));
        {
          k_51 = t;
          c_51 :
          if(match_cons(k_51, sym__2))
            {
              l_51 = ATgetArgument(k_51, 0);
              m_51 = ATgetArgument(k_51, 1);
              d_51 :
              if(match_string(l_51, ""))
                {
                  if(((g_51 != NULL) && (g_51 != m_51)))
                    _fail(m_51);
                  else
                    g_51 = m_51;
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
      t = not_null(g_51);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_82 (ATerm))
{
  ATerm q_51 (ATerm t)
  {
    ATerm v_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_51);
        ;
        LocalPopChoice(w_7);
      }
    else
      {
        t = v_7;
        {
          t = Nil_0(t);
          t = m_82(t);
        }
      }
    return(t);
  }
  t = q_51(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL;
  t_51 = t;
  s_51 :
  if(match_cons(t_51, sym__2))
    {
      u_51 = ATgetArgument(t_51, 0);
      v_51 = ATgetArgument(t_51, 1);
      {
        t = not_null(u_51);
        {
          ATerm k_1 (ATerm t)
          {
            t = not_null(v_51);
            return(t);
          }
          t = at_end_1(t, k_1);
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
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm h_52 = NULL;
  h_52 = t;
  t = SSL_explode_string(not_null(h_52));
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
  ATerm z_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(a_8);
    }
  else
    {
      t = z_7;
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, l_1);
            ;
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
            {
              ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL;
              q_52 = t;
              p_52 :
              if(match_cons(q_52, sym_Path_1))
                {
                  r_52 = ATgetArgument(q_52, 0);
                  t = not_null(r_52);
                }
              else
                {
                  if(match_cons(q_52, sym_Var_1))
                    {
                      r_52 = ATgetArgument(q_52, 0);
                      {
                        t = not_null(r_52);
                        {
                          ATerm d_8 = t;
                          int e_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(e_8);
                            }
                          else
                            {
                              t = d_8;
                              {
                                ATerm m_1 (ATerm t)
                                {
                                  t = term_f_8;
                                  return(t);
                                }
                                t = debug_1(t, m_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(q_52, sym_Prefix_2))
                        {
                          r_52 = ATgetArgument(q_52, 0);
                          s_52 = ATgetArgument(q_52, 1);
                          {
                            ATerm x_52 = NULL,z_52 = NULL;
                            ATerm g_8;
                            g_8 = t;
                            {
                              ATerm y_52 = NULL;
                              t = not_null(r_52);
                              {
                                t = eval_config_0(t);
                                {
                                  y_52 = t;
                                  if(((x_52 != NULL) && (x_52 != y_52)))
                                    _fail(y_52);
                                  else
                                    x_52 = y_52;
                                }
                              }
                            }
                            t = g_8;
                            {
                              ATerm a_53 = NULL;
                              t = not_null(s_52);
                              {
                                t = eval_config_0(t);
                                {
                                  a_53 = t;
                                  if(((z_52 != NULL) && (z_52 != a_53)))
                                    _fail(a_53);
                                  else
                                    z_52 = a_53;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_52), not_null(z_52));
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
  ATerm i_53 = NULL;
  i_53 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_8, not_null(i_53));
    {
      t = table_get_0(t);
      {
        ATerm n_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm i_8;
            i_8 = t;
            {
              ATerm k_53 = NULL;
              ATerm l_53 = NULL;
              l_53 = t;
              if(((k_53 != NULL) && (k_53 != l_53)))
                _fail(l_53);
              else
                k_53 = l_53;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_h_8, not_null(i_53), not_null(k_53));
                t = table_put_0(t);
              }
            }
            t = i_8;
          }
          return(t);
        }
        t = try_1(t, n_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm m_95 (ATerm))
{
  ATerm o_1 (ATerm t)
  {
    ATerm j_8;
    j_8 = t;
    {
      ATerm p_53 = NULL;
      ATerm q_53 = NULL;
      t = term_k_8;
      {
        t = get_config_0(t);
        {
          q_53 = t;
          if(((p_53 != NULL) && (p_53 != q_53)))
            _fail(q_53);
          else
            p_53 = q_53;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_53), term_l_8);
        t = geq_0(t);
      }
    }
    t = j_8;
    t = m_95(t);
    return(t);
  }
  t = try_1(t, o_1);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL;
  w_53 = t;
  u_53 :
  if(match_cons(w_53, sym__2))
    {
      x_53 = ATgetArgument(w_53, 0);
      y_53 = ATgetArgument(w_53, 1);
      v_53 :
      if(match_cons(y_53, sym_Stream_1))
        {
          z_53 = ATgetArgument(y_53, 0);
          {
            ATerm c_54 = NULL;
            t = SSL_fputc(not_null(x_53), not_null(z_53));
            {
              ATerm d_54 = NULL;
              d_54 = t;
              if(((c_54 != NULL) && (c_54 != d_54)))
                _fail(d_54);
              else
                c_54 = d_54;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_54));
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
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL,s_54 = NULL;
  k_54 = t;
  i_54 :
  if(match_cons(k_54, sym__2))
    {
      l_54 = ATgetArgument(k_54, 0);
      s_54 = ATgetArgument(k_54, 1);
      j_54 :
      if(match_cons(l_54, sym_Stream_1))
        {
          m_54 = ATgetArgument(l_54, 0);
          {
            ATerm v_54 = NULL;
            t = SSL_write_term_to_stream_text(not_null(m_54), not_null(s_54));
            {
              ATerm w_54 = NULL;
              w_54 = t;
              if(((v_54 != NULL) && (v_54 != w_54)))
                _fail(w_54);
              else
                v_54 = w_54;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_54));
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
  ATerm p_1 (ATerm t)
  {
    ATerm h_55 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm i_55 = NULL;
      i_55 = t;
      if(((h_55 != NULL) && (h_55 != i_55)))
        _fail(i_55);
      else
        h_55 = i_55;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_8, not_null(h_55));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, p_1);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL;
  o_55 = t;
  m_55 :
  if(match_cons(o_55, sym__2))
    {
      p_55 = ATgetArgument(o_55, 0);
      r_55 = ATgetArgument(o_55, 1);
      n_55 :
      if(match_cons(p_55, sym_Stream_1))
        {
          q_55 = ATgetArgument(p_55, 0);
          {
            ATerm u_55 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(q_55), not_null(r_55));
            {
              ATerm v_55 = NULL;
              v_55 = t;
              if(((u_55 != NULL) && (u_55 != v_55)))
                _fail(v_55);
              else
                u_55 = v_55;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_55));
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
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL;
  c_56 = t;
  b_56 :
  if(match_cons(c_56, sym__2))
    {
      d_56 = ATgetArgument(c_56, 0);
      e_56 = ATgetArgument(c_56, 1);
      {
        ATerm h_56 = NULL,j_56 = NULL;
        t = not_null(d_56);
        {
          ATerm i_56 = NULL;
          i_56 = t;
          if(((h_56 != NULL) && (h_56 != i_56)))
            _fail(i_56);
          else
            h_56 = i_56;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_56), term_n_8);
            {
              t = open_stream_0(t);
              {
                ATerm k_56 = NULL;
                k_56 = t;
                if(((j_56 != NULL) && (j_56 != k_56)))
                  _fail(k_56);
                else
                  j_56 = k_56;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_56), not_null(e_56));
                  {
                    t = i_94(t);
                    {
                      t = fclose_0(t);
                      t = not_null(e_56);
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
  ATerm z_56 = NULL;
  ATerm o_8;
  o_8 = t;
  {
    ATerm q_1 (ATerm t)
    {
      ATerm p_8 = t;
      int q_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_1 (ATerm t)
          {
            ATerm a_57 = NULL,b_57 = NULL;
            a_57 = t;
            w_56 :
            if(match_cons(a_57, sym_Output_1))
              {
                b_57 = ATgetArgument(a_57, 0);
                if(((z_56 != NULL) && (z_56 != b_57)))
                  _fail(b_57);
                else
                  z_56 = b_57;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, r_1);
          ;
          LocalPopChoice(q_8);
        }
      else
        {
          t = p_8;
          {
            ATerm c_57 = NULL;
            t = term_r_8;
            {
              c_57 = t;
              if(((z_56 != NULL) && (z_56 != c_57)))
                _fail(c_57);
              else
                z_56 = c_57;
            }
          }
        }
      return(t);
    }
    t = _2(t, q_1, _id);
  }
  t = o_8;
  {
    ATerm s_1 (ATerm t)
    {
      ATerm t_1 (ATerm t)
      {
        t = not_null(z_56);
        return(t);
      }
      t = split_2(t, t_1, _id);
      return(t);
    }
    t = _2(t, _id, s_1);
    {
      ATerm s_8 = t;
      int t_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_1 (ATerm t)
          {
            ATerm v_1 (ATerm t)
            {
              ATerm d_57 = NULL;
              d_57 = t;
              y_56 :
              if(!(match_cons(d_57, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, v_1);
            return(t);
          }
          t = _2(t, u_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(t_8);
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
ATerm apply_strategy_1 (ATerm t, ATerm k_97 (ATerm))
{
  ATerm j_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL;
  ATerm u_8;
  u_8 = t;
  t = dtime_0(t);
  t = u_8;
  {
    t = k_97(t);
    {
      ATerm v_8;
      v_8 = t;
      {
        ATerm k_57 = NULL;
        t = dtime_0(t);
        {
          k_57 = t;
          if(((j_57 != NULL) && (j_57 != k_57)))
            _fail(k_57);
          else
            j_57 = k_57;
        }
      }
      t = v_8;
      {
        l_57 = t;
        i_57 :
        if(match_cons(l_57, sym__2))
          {
            m_57 = ATgetArgument(l_57, 0);
            n_57 = ATgetArgument(l_57, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_57)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(j_57))), not_null(n_57));
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
  ATerm v_57 = NULL,w_57 = NULL;
  ATerm c_58 (ATerm t)
  {
    t = SSL_fclose(not_null(w_57));
    return(t);
  }
  w_57 = t;
  u_57 :
  if(match_cons(w_57, sym_Stream_1))
    {
      v_57 = ATgetArgument(w_57, 0);
      {
        ATerm w_8 = t;
        int x_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(v_57));
            ;
            LocalPopChoice(x_8);
          }
        else
          {
            t = w_8;
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
ATerm read_from_stream_0 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL;
  f_58 = t;
  e_58 :
  if(match_cons(f_58, sym_Stream_1))
    {
      g_58 = ATgetArgument(f_58, 0);
      t = SSL_read_term_from_stream(not_null(g_58));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm u_93 (ATerm))
{
  ATerm b_9;
  b_9 = t;
  {
    ATerm l_58 = NULL,n_58 = NULL;
    ATerm c_9;
    c_9 = t;
    {
      ATerm m_58 = NULL;
      t = u_93(t);
      {
        m_58 = t;
        if(((l_58 != NULL) && (l_58 != m_58)))
          _fail(m_58);
        else
          l_58 = m_58;
      }
    }
    t = c_9;
    {
      ATerm o_58 = NULL;
      o_58 = t;
      if(((n_58 != NULL) && (n_58 != o_58)))
        _fail(o_58);
      else
        n_58 = o_58;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_58)), not_null(l_58)));
        t = printnl_0(t);
      }
    }
  }
  t = b_9;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
  u_58 = t;
  t_58 :
  if(match_cons(u_58, sym__2))
    {
      v_58 = ATgetArgument(u_58, 0);
      w_58 = ATgetArgument(u_58, 1);
      {
        ATerm z_58 = NULL;
        t = SSL_fopen(not_null(v_58), not_null(w_58));
        {
          ATerm a_59 = NULL;
          a_59 = t;
          if(((z_58 != NULL) && (z_58 != a_59)))
            _fail(a_59);
          else
            z_58 = a_59;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_58));
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
  ATerm e_59 = NULL;
  e_59 = t;
  t = SSL_is_string(not_null(e_59));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm i_59 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm j_59 = NULL;
    j_59 = t;
    if(((i_59 != NULL) && (i_59 != j_59)))
      _fail(j_59);
    else
      i_59 = j_59;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_59));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm m_59 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm n_59 = NULL;
    n_59 = t;
    if(((m_59 != NULL) && (m_59 != n_59)))
      _fail(n_59);
    else
      m_59 = n_59;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_59));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm q_59 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm r_59 = NULL;
    r_59 = t;
    if(((q_59 != NULL) && (q_59 != r_59)))
      _fail(r_59);
    else
      q_59 = r_59;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_59));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm z_59 = NULL;
  z_59 = t;
  y_59 :
  if(match_cons(z_59, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(z_59, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(z_59, sym_stdin_0))
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
  ATerm j_60 = NULL;
  ATerm l_60 = NULL,m_60 = NULL;
  j_60 = t;
  {
    ATerm n_60 = NULL;
    ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL;
    t = not_null(j_60);
    {
      n_60 = t;
      {
        t = SSL_explode_term(not_null(n_60));
        {
          p_60 = t;
          g_60 :
          if(match_cons(p_60, sym__2))
            {
              q_60 = ATgetArgument(p_60, 0);
              r_60 = ATgetArgument(p_60, 1);
              h_60 :
              if(match_string(q_60, ""))
                {
                  i_60 :
                  if(((ATgetType(r_60) == AT_LIST) && !(ATisEmpty(r_60))))
                    {
                      s_60 = ATgetFirst((ATermList) r_60);
                      t_60 = (ATerm) ATgetNext((ATermList) r_60);
                      {
                        if(((m_60 != NULL) && (m_60 != s_60)))
                          _fail(s_60);
                        else
                          m_60 = s_60;
                        if(((l_60 != NULL) && (l_60 != t_60)))
                          _fail(t_60);
                        else
                          l_60 = t_60;
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
    t = not_null(m_60);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm b_61 = NULL,c_61 = NULL,h_61 = NULL;
  b_61 = t;
  a_61 :
  if(match_cons(b_61, sym__2))
    {
      c_61 = ATgetArgument(b_61, 0);
      h_61 = ATgetArgument(b_61, 1);
      {
        ATerm d_9 = t;
        int e_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
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
                  ATerm w_1 (ATerm t)
                  {
                    ATerm i_61 = NULL,k_61 = NULL;
                    i_61 = t;
                    z_60 :
                    if(match_cons(i_61, sym_Path_1))
                      {
                        k_61 = ATgetArgument(i_61, 0);
                        t = not_null(k_61);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, w_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(g_9);
                }
              else
                {
                  t = f_9;
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
  ATerm t_61 = NULL;
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_61 = NULL;
      ATerm s_61 = NULL;
      s_61 = t;
      if(((r_61 != NULL) && (r_61 != s_61)))
        _fail(s_61);
      else
        r_61 = s_61;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_61), term_j_9);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      {
        ATerm x_1 (ATerm t)
        {
          t = term_k_9;
          return(t);
        }
        t = debug_1(t, x_1);
        _fail(t);
      }
    }
  {
    ATerm l_9;
    l_9 = t;
    {
      ATerm u_61 = NULL;
      t = read_from_stream_0(t);
      {
        u_61 = t;
        if(((t_61 != NULL) && (t_61 != u_61)))
          _fail(u_61);
        else
          t_61 = u_61;
      }
    }
    t = l_9;
    {
      t = fclose_0(t);
      t = not_null(t_61);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm m_89 (ATerm), ATerm n_89 (ATerm))
{
  ATerm z_61 = NULL,b_62 = NULL;
  ATerm m_9;
  m_9 = t;
  {
    ATerm a_62 = NULL;
    t = m_89(t);
    {
      a_62 = t;
      if(((z_61 != NULL) && (z_61 != a_62)))
        _fail(a_62);
      else
        z_61 = a_62;
    }
  }
  t = m_9;
  {
    ATerm c_62 = NULL;
    t = n_89(t);
    {
      c_62 = t;
      if(((b_62 != NULL) && (b_62 != c_62)))
        _fail(c_62);
      else
        b_62 = c_62;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_61), not_null(b_62));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm i_62 = NULL;
  ATerm n_9;
  n_9 = t;
  {
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_1 (ATerm t)
        {
          ATerm j_62 = NULL,n_62 = NULL;
          j_62 = t;
          g_62 :
          if(match_cons(j_62, sym_Input_1))
            {
              n_62 = ATgetArgument(j_62, 0);
              if(((i_62 != NULL) && (i_62 != n_62)))
                _fail(n_62);
              else
                i_62 = n_62;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, y_1);
        ;
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        {
          ATerm q_62 = NULL;
          t = term_q_9;
          {
            q_62 = t;
            if(((i_62 != NULL) && (i_62 != q_62)))
              _fail(q_62);
            else
              i_62 = q_62;
          }
        }
      }
  }
  t = n_9;
  {
    ATerm z_1 (ATerm t)
    {
      t = not_null(i_62);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_1);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm v_62 = NULL;
    v_62 = t;
    t_62 :
    if(!(match_string(v_62, "-k")))
      {
        if(!(match_string(v_62, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    ATerm r_9;
    r_9 = t;
    {
      ATerm w_62 = NULL;
      ATerm x_62 = NULL;
      t = string_to_int_0(t);
      {
        x_62 = t;
        if(((w_62 != NULL) && (w_62 != x_62)))
          _fail(x_62);
        else
          w_62 = x_62;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_9, not_null(w_62));
        t = set_config_0(t);
      }
    }
    t = r_9;
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = term_t_9;
    return(t);
  }
  t = ArgOption_3(t, a_2, b_2, c_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm c_63 = NULL;
  c_63 = t;
  t = SSL_string_to_int(not_null(c_63));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm l_63 = NULL;
        l_63 = t;
        g_63 :
        if(!(match_string(l_63, "-S")))
          {
            if(!(match_string(l_63, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_2 (ATerm t)
      {
        t = term_x_9;
        t = set_config_0(t);
        t = term_y_9;
        return(t);
      }
      ATerm f_2 (ATerm t)
      {
        t = term_z_9;
        return(t);
      }
      t = Option_3(t, d_2, e_2, f_2);
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
            ATerm g_2 (ATerm t)
            {
              ATerm m_63 = NULL;
              m_63 = t;
              h_63 :
              if(!(match_string(m_63, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_2 (ATerm t)
            {
              ATerm p_63 = NULL;
              ATerm c_10;
              c_10 = t;
              {
                ATerm n_63 = NULL;
                ATerm o_63 = NULL;
                t = string_to_int_0(t);
                {
                  o_63 = t;
                  if(((n_63 != NULL) && (n_63 != o_63)))
                    _fail(o_63);
                  else
                    n_63 = o_63;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_8, not_null(n_63));
                  t = set_config_0(t);
                }
              }
              t = c_10;
              {
                ATerm q_63 = NULL;
                q_63 = t;
                if(((p_63 != NULL) && (p_63 != q_63)))
                  _fail(q_63);
                else
                  p_63 = q_63;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(p_63));
              }
              return(t);
            }
            ATerm i_2 (ATerm t)
            {
              t = term_d_10;
              return(t);
            }
            t = ArgOption_3(t, g_2, h_2, i_2);
            ;
            LocalPopChoice(b_10);
          }
        else
          {
            t = a_10;
            {
              ATerm j_2 (ATerm t)
              {
                ATerm r_63 = NULL;
                r_63 = t;
                k_63 :
                if(!(match_string(r_63, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm k_2 (ATerm t)
              {
                t = term_f_10;
                t = set_config_0(t);
                t = term_g_10;
                return(t);
              }
              ATerm l_2 (ATerm t)
              {
                t = term_h_10;
                return(t);
              }
              t = Option_3(t, j_2, k_2, l_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(j_10);
    }
  else
    {
      t = i_10;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm x_63 = NULL;
    x_63 = t;
    u_63 :
    if(!(match_string(x_63, "-o")))
      {
        if(!(match_string(x_63, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    ATerm a_64 = NULL;
    ATerm k_10;
    k_10 = t;
    {
      ATerm y_63 = NULL;
      ATerm z_63 = NULL;
      z_63 = t;
      if(((y_63 != NULL) && (y_63 != z_63)))
        _fail(z_63);
      else
        y_63 = z_63;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_10, not_null(y_63));
        t = set_config_0(t);
      }
    }
    t = k_10;
    {
      ATerm b_64 = NULL;
      b_64 = t;
      if(((a_64 != NULL) && (a_64 != b_64)))
        _fail(b_64);
      else
        a_64 = b_64;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_64));
    }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_m_10;
    return(t);
  }
  t = ArgOption_3(t, m_2, n_2, o_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm n_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(o_10);
    }
  else
    {
      t = n_10;
      {
        ATerm p_2 (ATerm t)
        {
          ATerm f_64 = NULL;
          f_64 = t;
          e_64 :
          if(!(match_string(f_64, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm q_2 (ATerm t)
        {
          t = term_q_10;
          t = set_config_0(t);
          t = term_r_10;
          return(t);
        }
        ATerm r_2 (ATerm t)
        {
          t = term_s_10;
          return(t);
        }
        t = Option_3(t, p_2, q_2, r_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL;
  l_64 = t;
  j_64 :
  if(match_string(l_64, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(l_64) == AT_LIST) && !(ATisEmpty(l_64))))
        {
          m_64 = ATgetFirst((ATermList) l_64);
          n_64 = (ATerm) ATgetNext((ATermList) l_64);
          k_64 :
          if(((ATgetType(n_64) == AT_LIST) && !(ATisEmpty(n_64))))
            {
              o_64 = ATgetFirst((ATermList) n_64);
              p_64 = (ATerm) ATgetNext((ATermList) n_64);
              {
                ATerm t_64 = NULL;
                ATerm t_10;
                t_10 = t;
                {
                  t = not_null(m_64);
                  t = j_0(t);
                }
                t = t_10;
                {
                  ATerm u_64 = NULL;
                  t = not_null(o_64);
                  {
                    t = k_0(t);
                    {
                      u_64 = t;
                      if(((t_64 != NULL) && (t_64 != u_64)))
                        _fail(u_64);
                      else
                        t_64 = u_64;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_64)), not_null(t_64));
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
  ATerm s_2 (ATerm t)
  {
    ATerm b_65 = NULL;
    b_65 = t;
    y_64 :
    if(!(match_string(b_65, "-i")))
      {
        if(!(match_string(b_65, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm e_65 = NULL;
    ATerm w_10;
    w_10 = t;
    {
      ATerm c_65 = NULL;
      ATerm d_65 = NULL;
      d_65 = t;
      if(((c_65 != NULL) && (c_65 != d_65)))
        _fail(d_65);
      else
        c_65 = d_65;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_10, not_null(c_65));
        t = set_config_0(t);
      }
    }
    t = w_10;
    {
      ATerm f_65 = NULL;
      f_65 = t;
      if(((e_65 != NULL) && (e_65 != f_65)))
        _fail(f_65);
      else
        e_65 = f_65;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_65));
    }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_y_10;
    return(t);
  }
  t = ArgOption_3(t, s_2, t_2, u_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
      {
        ATerm b_11 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(c_11);
          }
        else
          {
            t = b_11;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm n_65 = NULL;
  t = report_run_time_0(t);
  {
    ATerm o_65 = NULL;
    t = term_n_7;
    {
      t = whoami_0(t);
      {
        o_65 = t;
        if(((n_65 != NULL) && (n_65 != o_65)))
          _fail(o_65);
        else
          n_65 = o_65;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATempty, term_d_11), not_null(n_65)));
      {
        t = printnl_0(t);
        {
          t = term_r_7;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_e_11;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_65 = NULL;
  u_65 = t;
  t = SSL_TicksToSeconds(not_null(u_65));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL;
  u_66 = t;
  f_66 :
  if(match_cons(u_66, sym__2))
    {
      v_66 = ATgetArgument(u_66, 0);
      w_66 = ATgetArgument(u_66, 1);
      {
        ATerm f_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(v_66), not_null(w_66));
            ;
            LocalPopChoice(g_11);
          }
        else
          {
            t = f_11;
            t = SSL_addr(not_null(v_66), not_null(w_66));
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
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_87(t);
      ;
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      {
        ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL;
        l_67 = t;
        k_67 :
        if(((ATgetType(l_67) == AT_LIST) && !(ATisEmpty(l_67))))
          {
            m_67 = ATgetFirst((ATermList) l_67);
            n_67 = (ATerm) ATgetNext((ATermList) l_67);
            {
              ATerm q_67 = NULL;
              ATerm r_67 = NULL;
              t = not_null(n_67);
              {
                t = foldr_2(t, x_87, y_87);
                {
                  r_67 = t;
                  if(((q_67 != NULL) && (q_67 != r_67)))
                    _fail(r_67);
                  else
                    q_67 = r_67;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_67), not_null(q_67));
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
  ATerm a_68 = NULL;
  ATerm c_68 = NULL;
  a_68 = t;
  {
    ATerm f_68 = NULL;
    ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL;
    t = not_null(a_68);
    {
      f_68 = t;
      {
        t = SSL_explode_term(not_null(f_68));
        {
          o_68 = t;
          z_67 :
          if(match_cons(o_68, sym__2))
            {
              p_68 = ATgetArgument(o_68, 0);
              q_68 = ATgetArgument(o_68, 1);
              if(((c_68 != NULL) && (c_68 != q_68)))
                _fail(q_68);
              else
                c_68 = q_68;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(c_68);
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
    ATerm v_2 (ATerm t)
    {
      t = term_w_9;
      return(t);
    }
    t = crush_2(t, v_2, add_0);
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
        ATerm j_11;
        j_11 = t;
        {
          ATerm k_11 = t;
          int l_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(x_68), not_null(y_68));
              ;
              LocalPopChoice(l_11);
            }
          else
            {
              t = k_11;
              t = SSL_gtr(not_null(x_68), not_null(y_68));
            }
        }
        t = j_11;
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
  ATerm m_11 = t;
  int n_11 = stack_ptr;
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
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_95 (ATerm))
{
  ATerm w_2 (ATerm t)
  {
    ATerm o_11;
    o_11 = t;
    {
      ATerm k_69 = NULL;
      ATerm l_69 = NULL;
      t = term_k_8;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_69), term_r_7);
        t = geq_0(t);
      }
    }
    t = o_11;
    t = l_95(t);
    return(t);
  }
  t = try_1(t, w_2);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm p_69 = NULL,r_69 = NULL;
    ATerm p_11;
    p_11 = t;
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
    t = p_11;
    {
      ATerm s_69 = NULL;
      t = term_n_7;
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
        t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_11), not_null(p_69)), term_q_11), not_null(r_69)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, x_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_w_9;
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
      ATerm s_11;
      s_11 = t;
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
      t = s_11;
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
ATerm need_help_1 (ATerm t, ATerm i_98 (ATerm))
{
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_11;
      t = get_config_0(t);
      ;
      LocalPopChoice(u_11);
    }
  else
    {
      t = t_11;
      {
        ATerm y_2 (ATerm t)
        {
          ATerm w_11 = t;
          int a_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(a_12);
            }
          else
            {
              t = w_11;
              {
                ATerm b_12 = t;
                int c_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(c_12);
                  }
                else
                  {
                    t = b_12;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, y_2);
      }
    }
  t = i_98(t);
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
    ATerm d_12;
    d_12 = t;
    {
      t = term_f_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_12, term_h_12, not_null(n_70));
          t = table_put_0(t);
        }
      }
    }
    t = d_12;
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
  ATerm v_70 = NULL;
  v_70 = t;
  t = SSL_exit(not_null(v_70));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm j_100 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_81 (ATerm))
{
  ATerm y_70 (ATerm t)
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        t = Cons_2(t, w_81, y_70);
      }
    return(t);
  }
  t = y_70(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL;
  h_71 = t;
  e_71 :
  if(((ATgetType(h_71) == AT_LIST) && !(ATisEmpty(h_71))))
    {
      f_71 = ATgetFirst((ATermList) h_71);
      g_71 = (ATerm) ATgetNext((ATermList) h_71);
      {
        ATerm k_71 = NULL;
        t = not_null(g_71);
        {
          ATerm m_12;
          m_12 = t;
          {
            ATerm l_71 = NULL,n_71 = NULL,p_71 = NULL;
            ATerm n_12;
            n_12 = t;
            {
              ATerm m_71 = NULL;
              t = i_0(t);
              {
                m_71 = t;
                if(((l_71 != NULL) && (l_71 != m_71)))
                  _fail(m_71);
                else
                  l_71 = m_71;
              }
            }
            t = n_12;
            {
              ATerm o_71 = NULL;
              t = not_null(f_71);
              {
                t = g_0(t);
                {
                  o_71 = t;
                  if(((n_71 != NULL) && (n_71 != o_71)))
                    _fail(o_71);
                  else
                    n_71 = o_71;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_71)), not_null(n_71));
                {
                  p_71 = t;
                  if(((k_71 != NULL) && (k_71 != p_71)))
                    _fail(p_71);
                  else
                    k_71 = p_71;
                }
              }
            }
          }
          t = m_12;
          {
            ATerm z_2 (ATerm t)
            {
              t = not_null(k_71);
              return(t);
            }
            t = reverse_acc_2(t, g_0, z_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(h_71) == AT_LIST) && ATisEmpty(h_71)))
        {
          {
            t = term_n_7;
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
  ATerm a_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm i_100 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm a_72 = NULL,b_72 = NULL;
  a_72 = t;
  z_71 :
  if(match_cons(a_72, sym_Program_1))
    {
      b_72 = ATgetArgument(a_72, 0);
      {
        ATerm e_72 = NULL,g_72 = NULL;
        ATerm f_72 = NULL;
        t = SSLgetAnnotations(not_null(a_72));
        {
          f_72 = t;
          if(((e_72 != NULL) && (e_72 != f_72)))
            _fail(f_72);
          else
            e_72 = f_72;
        }
        {
          t = not_null(b_72);
          {
            ATerm i_72 = NULL;
            t = d_74(t);
            {
              g_72 = t;
              {
                ATerm j_72 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_72)), not_null(e_72));
                {
                  j_72 = t;
                  if(((i_72 != NULL) && (i_72 != j_72)))
                    _fail(j_72);
                  else
                    i_72 = j_72;
                }
                t = not_null(i_72);
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
  ATerm s_72 = NULL;
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_72 = NULL;
      t = term_e_11;
      {
        t = get_config_0(t);
        {
          t_72 = t;
          if(((s_72 != NULL) && (s_72 != t_72)))
            _fail(t_72);
          else
            s_72 = t_72;
        }
      }
      ;
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      {
        ATerm b_3 (ATerm t)
        {
          ATerm c_3 (ATerm t)
          {
            ATerm u_72 = NULL;
            u_72 = t;
            if(((s_72 != NULL) && (s_72 != u_72)))
              _fail(u_72);
            else
              s_72 = u_72;
            return(t);
          }
          t = Program_1(t, c_3);
          return(t);
        }
        t = option_defined_1(t, b_3);
      }
    }
  {
    ATerm d_3 (ATerm t)
    {
      ATerm e_3 (ATerm t)
      {
        t = not_null(s_72);
        return(t);
      }
      t = short_description_1(t, e_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, d_3);
    {
      t = term_q_12;
      {
        t = echo_0(t);
        {
          t = term_t_12;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm f_3 (ATerm t)
                {
                  ATerm v_72 = NULL;
                  ATerm w_72 = NULL;
                  w_72 = t;
                  if(((v_72 != NULL) && (v_72 != w_72)))
                    _fail(w_72);
                  else
                    v_72 = w_72;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_72)), term_u_12);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, f_3);
                {
                  ATerm g_3 (ATerm t)
                  {
                    ATerm x_72 = NULL;
                    ATerm y_72 = NULL;
                    ATerm h_3 (ATerm t)
                    {
                      t = not_null(s_72);
                      return(t);
                    }
                    t = long_description_1(t, h_3);
                    {
                      y_72 = t;
                      if(((x_72 != NULL) && (x_72 != y_72)))
                        _fail(y_72);
                      else
                        x_72 = y_72;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(x_72)), term_z_12);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, g_3);
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
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_74 (ATerm))
{
  ATerm i_73 = NULL,j_73 = NULL;
  i_73 = t;
  h_73 :
  if(match_cons(i_73, sym_Undefined_1))
    {
      j_73 = ATgetArgument(i_73, 0);
      {
        ATerm m_73 = NULL,o_73 = NULL;
        ATerm n_73 = NULL;
        t = SSLgetAnnotations(not_null(i_73));
        {
          n_73 = t;
          if(((m_73 != NULL) && (m_73 != n_73)))
            _fail(n_73);
          else
            m_73 = n_73;
        }
        {
          t = not_null(j_73);
          {
            ATerm q_73 = NULL;
            t = e_74(t);
            {
              o_73 = t;
              {
                ATerm r_73 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_73)), not_null(m_73));
                {
                  r_73 = t;
                  if(((q_73 != NULL) && (q_73 != r_73)))
                    _fail(r_73);
                  else
                    q_73 = r_73;
                }
                t = not_null(q_73);
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
  ATerm w_73 (ATerm t)
  {
    ATerm f_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_82, _id);
        ;
        LocalPopChoice(h_13);
      }
    else
      {
        t = f_13;
        t = Cons_2(t, _id, w_73);
      }
    return(t);
  }
  t = w_73(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_99 (ATerm))
{
  t = fetch_1(t, i_99);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL;
  y_73 = t;
  x_73 :
  if(((ATgetType(y_73) == AT_LIST) && ATisEmpty(y_73)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(y_73) == AT_LIST) && !(ATisEmpty(y_73))))
        {
          z_73 = ATgetFirst((ATermList) y_73);
          a_74 = (ATerm) ATgetNext((ATermList) y_73);
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
  ATerm k_13;
  k_13 = t;
  {
    ATerm f_74 = NULL;
    ATerm i_74 = NULL;
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
        {
          ATerm g_74 = NULL;
          ATerm h_74 = NULL;
          h_74 = t;
          if(((g_74 != NULL) && (g_74 != h_74)))
            _fail(h_74);
          else
            g_74 = h_74;
          t = (ATerm) ATinsert(ATempty, not_null(g_74));
        }
      }
    {
      i_74 = t;
      if(((f_74 != NULL) && (f_74 != i_74)))
        _fail(i_74);
      else
        f_74 = i_74;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_8, not_null(f_74));
      t = printnl_0(t);
    }
  }
  t = k_13;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_e_11;
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
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm s_74 = NULL;
  s_74 = t;
  r_74 :
  if(match_cons(s_74, sym_Help_0))
    {
      ATerm u_74 = NULL,w_74 = NULL;
      ATerm p_13;
      p_13 = t;
      {
        ATerm v_74 = NULL;
        t = SSLgetAnnotations(not_null(s_74));
        {
          v_74 = t;
          if(((u_74 != NULL) && (u_74 != v_74)))
            _fail(v_74);
          else
            u_74 = v_74;
        }
      }
      t = p_13;
      {
        ATerm x_74 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(u_74));
        {
          x_74 = t;
          if(((w_74 != NULL) && (w_74 != x_74)))
            _fail(x_74);
          else
            w_74 = x_74;
        }
        t = not_null(w_74);
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
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_74(t);
      ;
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_3 (ATerm t)
      {
        ATerm d_75 = NULL;
        d_75 = t;
        b_75 :
        if(!(match_string(d_75, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm j_3 (ATerm t)
      {
        t = term_z_13;
        t = set_config_0(t);
        return(t);
      }
      ATerm k_3 (ATerm t)
      {
        t = term_a_14;
        return(t);
      }
      t = Option_3(t, i_3, j_3, k_3);
      ;
      LocalPopChoice(t_13);
    }
  else
    {
      t = s_13;
      {
        ATerm l_3 (ATerm t)
        {
          ATerm e_75 = NULL;
          e_75 = t;
          c_75 :
          if(!(match_string(e_75, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm m_3 (ATerm t)
        {
          t = term_z_13;
          {
            t = set_config_0(t);
            {
              t = term_g_14;
              t = set_config_0(t);
            }
          }
          t = term_j_14;
          return(t);
        }
        ATerm n_3 (ATerm t)
        {
          t = term_k_14;
          return(t);
        }
        t = Option_3(t, l_3, m_3, n_3);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL;
  h_75 = t;
  g_75 :
  if(match_cons(h_75, sym__2))
    {
      i_75 = ATgetArgument(h_75, 0);
      j_75 = ATgetArgument(h_75, 1);
      t = SSL_table_get(not_null(i_75), not_null(j_75));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL;
  q_75 = t;
  p_75 :
  if(match_cons(q_75, sym__3))
    {
      r_75 = ATgetArgument(q_75, 0);
      s_75 = ATgetArgument(q_75, 1);
      t_75 = ATgetArgument(q_75, 2);
      {
        ATerm l_14;
        l_14 = t;
        {
          ATerm x_75 = NULL;
          ATerm y_75 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_75), not_null(s_75));
          {
            ATerm m_14 = t;
            int n_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(n_14);
              }
            else
              {
                t = m_14;
                t = (ATerm) ATempty;
              }
            {
              y_75 = t;
              if(((x_75 != NULL) && (x_75 != y_75)))
                _fail(y_75);
              else
                x_75 = y_75;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_75), not_null(s_75), (ATerm) ATinsert(CheckATermList(not_null(x_75)), not_null(t_75)));
            t = table_put_0(t);
          }
        }
        t = l_14;
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
  ATerm c_76 = NULL;
  ATerm d_76 = NULL;
  t = term_n_7;
  {
    t = n_100(t);
    {
      d_76 = t;
      if(((c_76 != NULL) && (c_76 != d_76)))
        _fail(d_76);
      else
        c_76 = d_76;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_r_12, term_s_12, not_null(c_76));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL;
  j_76 = t;
  i_76 :
  if(match_string(j_76, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(j_76) == AT_LIST) && !(ATisEmpty(j_76))))
        {
          k_76 = ATgetFirst((ATermList) j_76);
          l_76 = (ATerm) ATgetNext((ATermList) j_76);
          {
            ATerm o_76 = NULL;
            ATerm o_14;
            o_14 = t;
            {
              t = not_null(k_76);
              t = a_0(t);
            }
            t = o_14;
            {
              ATerm p_76 = NULL;
              t = term_n_7;
              {
                t = b_0(t);
                {
                  p_76 = t;
                  if(((o_76 != NULL) && (o_76 != p_76)))
                    _fail(p_76);
                  else
                    o_76 = p_76;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_76)), not_null(o_76));
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
  ATerm o_3 (ATerm t)
  {
    ATerm u_76 = NULL;
    u_76 = t;
    t_76 :
    if(!(match_string(u_76, "--help")))
      {
        if(!(match_string(u_76, "-h")))
          {
            if(!(match_string(u_76, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    t = term_p_14;
    {
      t = set_config_0(t);
      t = term_q_14;
    }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_r_14;
    return(t);
  }
  t = Option_3(t, o_3, p_3, q_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_76 = NULL,y_76 = NULL,z_76 = NULL;
  x_76 = t;
  w_76 :
  if(((ATgetType(x_76) == AT_LIST) && !(ATisEmpty(x_76))))
    {
      y_76 = ATgetFirst((ATermList) x_76);
      z_76 = (ATerm) ATgetNext((ATermList) x_76);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_76)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_76)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm d_61 (ATerm), ATerm e_61 (ATerm))
{
  ATerm j_77 = NULL,k_77 = NULL,l_77 = NULL;
  j_77 = t;
  i_77 :
  if(((ATgetType(j_77) == AT_LIST) && !(ATisEmpty(j_77))))
    {
      k_77 = ATgetFirst((ATermList) j_77);
      l_77 = (ATerm) ATgetNext((ATermList) j_77);
      {
        ATerm p_77 = NULL,r_77 = NULL;
        ATerm q_77 = NULL;
        t = SSLgetAnnotations(not_null(j_77));
        {
          q_77 = t;
          if(((p_77 != NULL) && (p_77 != q_77)))
            _fail(q_77);
          else
            p_77 = q_77;
        }
        {
          t = not_null(k_77);
          {
            ATerm t_77 = NULL;
            t = d_61(t);
            {
              r_77 = t;
              {
                t = not_null(l_77);
                {
                  ATerm v_77 = NULL;
                  t = e_61(t);
                  {
                    t_77 = t;
                    {
                      ATerm w_77 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(t_77)), not_null(r_77)), not_null(p_77));
                      {
                        w_77 = t;
                        if(((v_77 != NULL) && (v_77 != w_77)))
                          _fail(w_77);
                        else
                          v_77 = w_77;
                      }
                      t = not_null(v_77);
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
  ATerm g_78 = NULL;
  g_78 = t;
  f_78 :
  if(((ATgetType(g_78) == AT_LIST) && ATisEmpty(g_78)))
    {
      {
        ATerm i_78 = NULL,k_78 = NULL;
        ATerm s_14;
        s_14 = t;
        {
          ATerm j_78 = NULL;
          t = SSLgetAnnotations(not_null(g_78));
          {
            j_78 = t;
            if(((i_78 != NULL) && (i_78 != j_78)))
              _fail(j_78);
            else
              i_78 = j_78;
          }
        }
        t = s_14;
        {
          ATerm l_78 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(i_78));
          {
            l_78 = t;
            if(((k_78 != NULL) && (k_78 != l_78)))
              _fail(l_78);
            else
              k_78 = l_78;
          }
          t = not_null(k_78);
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
  ATerm r_78 = NULL,s_78 = NULL,t_78 = NULL;
  r_78 = t;
  q_78 :
  if(match_cons(r_78, sym__2))
    {
      s_78 = ATgetArgument(r_78, 0);
      t_78 = ATgetArgument(r_78, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_8, not_null(s_78), not_null(t_78));
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
  ATerm t_14;
  t_14 = t;
  {
    ATerm r_3 (ATerm t)
    {
      t = term_u_14;
      t = l_100(t);
      return(t);
    }
    t = try_1(t, r_3);
  }
  t = t_14;
  {
    ATerm s_3 (ATerm t)
    {
      ATerm b_79 = NULL;
      ATerm v_14;
      v_14 = t;
      {
        ATerm z_78 = NULL;
        ATerm a_79 = NULL;
        a_79 = t;
        if(((z_78 != NULL) && (z_78 != a_79)))
          _fail(a_79);
        else
          z_78 = a_79;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_11, not_null(z_78));
          t = set_config_0(t);
        }
      }
      t = v_14;
      {
        ATerm c_79 = NULL;
        c_79 = t;
        if(((b_79 != NULL) && (b_79 != c_79)))
          _fail(c_79);
        else
          b_79 = c_79;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_79));
      }
      return(t);
    }
    ATerm t_3 (ATerm t)
    {
      ATerm w_14 = t;
      int x_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_14 = t;
          int z_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(z_14);
            }
          else
            {
              t = y_14;
              {
                t = l_100(t);
                t = Cons_2(t, _id, t_3);
              }
            }
          ;
          LocalPopChoice(x_14);
        }
      else
        {
          t = w_14;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_3, t_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL;
  ATerm d_15;
  d_15 = t;
  {
    ATerm l_79 = NULL,m_79 = NULL,n_79 = NULL,o_79 = NULL;
    l_79 = t;
    h_79 :
    if(match_cons(l_79, sym__3))
      {
        m_79 = ATgetArgument(l_79, 0);
        n_79 = ATgetArgument(l_79, 1);
        o_79 = ATgetArgument(l_79, 2);
        {
          if(((i_79 != NULL) && (i_79 != m_79)))
            _fail(m_79);
          else
            i_79 = m_79;
          {
            if(((j_79 != NULL) && (j_79 != n_79)))
              _fail(n_79);
            else
              j_79 = n_79;
            {
              if(((k_79 != NULL) && (k_79 != o_79)))
                _fail(o_79);
              else
                k_79 = o_79;
              t = SSL_table_put(not_null(i_79), not_null(j_79), not_null(k_79));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = d_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm k_100 (ATerm))
{
  ATerm r_79 = NULL;
  ATerm e_15;
  e_15 = t;
  {
    t = term_i_15;
    t = table_put_0(t);
  }
  t = e_15;
  {
    ATerm u_3 (ATerm t)
    {
      ATerm l_15 = t;
      int m_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_100(t);
          ;
          LocalPopChoice(m_15);
        }
      else
        {
          t = l_15;
          {
            ATerm q_15 = t;
            int t_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(t_15);
              }
            else
              {
                t = q_15;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, u_3);
    {
      ATerm v_3 (ATerm t)
      {
        ATerm u_15 = t;
        int y_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_16;
            b_16 = t;
            {
              ATerm c_16 = t;
              int d_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_v_11;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(d_16);
                }
              else
                {
                  t = c_16;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = b_16;
            {
              t = system_usage_0(t);
              {
                t = term_w_9;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(y_15);
          }
        else
          {
            t = u_15;
            {
              ATerm e_16 = t;
              int f_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_16;
                  g_16 = t;
                  {
                    t = term_y_13;
                    t = get_config_0(t);
                  }
                  t = g_16;
                  {
                    t = system_about_0(t);
                    {
                      t = term_w_9;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(f_16);
                }
              else
                {
                  t = e_16;
                  {
                    ATerm w_3 (ATerm t)
                    {
                      ATerm x_3 (ATerm t)
                      {
                        ATerm s_79 = NULL;
                        s_79 = t;
                        if(((r_79 != NULL) && (r_79 != s_79)))
                          _fail(s_79);
                        else
                          r_79 = s_79;
                        return(t);
                      }
                      t = Undefined_1(t, x_3);
                      return(t);
                    }
                    t = option_defined_1(t, w_3);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_79)), term_h_16));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_r_7;
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
      t = try_1(t, v_3);
      {
        ATerm i_16;
        i_16 = t;
        {
          t = term_r_12;
          t = table_destroy_0(t);
        }
        t = i_16;
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
        ATerm j_16 = t;
        int k_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_98);
            ;
            LocalPopChoice(k_16);
          }
        else
          {
            t = j_16;
            {
              ATerm l_16 = t;
              int m_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_98(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(m_16);
                }
              else
                {
                  t = l_16;
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
  ATerm y_3 (ATerm t)
  {
    ATerm n_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_98(t);
        ;
        LocalPopChoice(o_16);
      }
    else
      {
        t = n_16;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, z_97);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, y_3, b_98, c_98, z_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm))
{
  ATerm a_4 (ATerm t)
  {
    ATerm b_4 (ATerm t)
    {
      ATerm p_16;
      p_16 = t;
      {
        ATerm v_79 = NULL;
        ATerm w_79 = NULL;
        t = term_e_11;
        {
          t = get_config_0(t);
          {
            w_79 = t;
            if(((v_79 != NULL) && (v_79 != w_79)))
              _fail(w_79);
            else
              v_79 = w_79;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATempty, not_null(v_79)));
          t = printnl_0(t);
        }
      }
      t = p_16;
      return(t);
    }
    t = if_verbose2_1(t, b_4);
    return(t);
  }
  t = iowrap_4(t, t_97, u_97, v_97, a_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm r_97 (ATerm), ATerm s_97 (ATerm))
{
  t = iowrap_3(t, r_97, s_97, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm o_97 (ATerm))
{
  ATerm c_4 (ATerm t)
  {
    t = _2(t, _id, o_97);
    return(t);
  }
  t = iowrap_2(t, c_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
