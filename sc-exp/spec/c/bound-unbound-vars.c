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
Symbol sym_Infinite_0;
Symbol sym_None_0;
Symbol sym_Some_1;
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
ATerm term_s_23;
ATerm term_s_22;
ATerm term_h_22;
ATerm term_b_22;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_q_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_c_18;
ATerm term_y_17;
ATerm term_v_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_r_16;
ATerm term_l_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_p_8;
ATerm term_a_8;
ATerm term_q_7;
ATerm term_m_7;
ATerm term_j_7;
ATerm term_t_6;
ATerm term_f_6;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_m_5;
ATerm term_w_4;
void init_constant_terms (void)
{
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_5);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_7);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_Defined_1, term_y_8);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym__2, term_k_12, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym__2, term_d_15, term_q_7);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym__2, term_a_16, term_q_7);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym__2, term_l_19, term_r_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym__2, term_g_21, term_q_7);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_q_7);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym__2, term_c_18, term_q_7);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__3, term_l_19, term_r_19, (ATerm) ATempty);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm h_95 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm r_67 (ATerm), ATerm s_67 (ATerm), ATerm t_67 (ATerm));
ATerm mark_guardedlchoice_1 (ATerm, ATerm q_75 (ATerm));
ATerm LChoice_2 (ATerm, ATerm n_67 (ATerm), ATerm o_67 (ATerm));
ATerm mark_lchoice_1 (ATerm, ATerm p_75 (ATerm));
ATerm Choice_2 (ATerm, ATerm l_66 (ATerm), ATerm m_66 (ATerm));
ATerm abstract_choice_2 (ATerm, ATerm r_75 (ATerm), ATerm s_75 (ATerm));
ATerm mark_choice_1 (ATerm, ATerm o_75 (ATerm));
ATerm Rec_2 (ATerm, ATerm u_67 (ATerm), ATerm v_67 (ATerm));
ATerm mark_rec_0 (ATerm);
ATerm PrimT_3 (ATerm, ATerm d_68 (ATerm), ATerm e_68 (ATerm), ATerm f_68 (ATerm));
ATerm mark_prim_0 (ATerm);
ATerm Call_2 (ATerm, ATerm z_66 (ATerm), ATerm a_67 (ATerm));
ATerm CallT_3 (ATerm, ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm d_67 (ATerm));
ATerm mark_call_0 (ATerm);
ATerm SDefT_4 (ATerm, ATerm p_69 (ATerm), ATerm q_69 (ATerm), ATerm r_69 (ATerm), ATerm s_69 (ATerm));
ATerm mark_sdef_0 (ATerm);
ATerm mark_traversal_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm restore_MarkVar_0 (ATerm);
ATerm Let_2 (ATerm, ATerm x_66 (ATerm), ATerm y_66 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_MarkVar_0 (ATerm);
ATerm isect_MarkVar_0 (ATerm);
ATerm mark_let_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm w_75 (ATerm));
ATerm restore_always_2 (ATerm, ATerm p_88 (ATerm), ATerm q_88 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm v_75 (ATerm));
ATerm scope_2 (ATerm, ATerm x_75 (ATerm), ATerm y_75 (ATerm));
ATerm Scope_2 (ATerm, ATerm h_67 (ATerm), ATerm i_67 (ATerm));
ATerm mark_scope_0 (ATerm);
ATerm Build_1 (ATerm, ATerm f_67 (ATerm));
ATerm mark_build_0 (ATerm);
ATerm assert_1 (ATerm, ATerm z_75 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm b_76 (ATerm));
ATerm MarkVar_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm v_77 (ATerm));
ATerm mark_match_0 (ATerm);
ATerm mark_buv_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm o_62 (ATerm));
ATerm Specification_1 (ATerm, ATerm t_62 (ATerm));
ATerm mark_bound_unbound_vars_0 (ATerm);
ATerm _2 (ATerm, ATerm b_61 (ATerm), ATerm c_61 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_80 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm v_96 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm r_95 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm t_98 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm d_95 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_78 (ATerm), ATerm w_78 (ATerm));
ATerm input_file_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm j_86 (ATerm), ATerm k_86 (ATerm));
ATerm crush_2 (ATerm, ATerm h_84 (ATerm), ATerm i_84 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm u_96 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_99 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm s_101 (ATerm));
ATerm map_1 (ATerm, ATerm t_79 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm r_101 (ATerm));
ATerm Program_1 (ATerm, ATerm i_75 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm j_75 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_80 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_100 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm a_88 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm w_101 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm k_62 (ATerm), ATerm l_62 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm u_101 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_101 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm w_99 (ATerm));
ATerm iowrap_4 (ATerm, ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm l_99 (ATerm));
ATerm iowrap_3 (ATerm, ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm e_99 (ATerm));
ATerm iowrap_2 (ATerm, ATerm a_99 (ATerm), ATerm b_99 (ATerm));
ATerm iowrap_1 (ATerm, ATerm x_98 (ATerm));
ATerm bound_unbound_vars_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_0 (ATerm t)
{
  ATerm v_4;
  v_4 = t;
  {
    ATerm k_4 = NULL;
    ATerm l_4 = NULL;
    l_4 = t;
    if(((k_4 != NULL) && (k_4 != l_4)))
      _fail(l_4);
    else
      k_4 = l_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATempty, not_null(k_4)));
      t = printnl_0(t);
    }
  }
  t = v_4;
  return(t);
}
ATerm say_1 (ATerm t, ATerm h_95 (ATerm))
{
  ATerm x_4;
  x_4 = t;
  {
    t = h_95(t);
    t = debug_0(t);
  }
  t = x_4;
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm r_67 (ATerm), ATerm s_67 (ATerm), ATerm t_67 (ATerm))
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
  u_5 = t;
  t_5 :
  if(match_cons(u_5, sym_GuardedLChoice_3))
    {
      v_5 = ATgetArgument(u_5, 0);
      w_5 = ATgetArgument(u_5, 1);
      x_5 = ATgetArgument(u_5, 2);
      {
        ATerm c_6 = NULL,e_6 = NULL;
        ATerm d_6 = NULL;
        t = SSLgetAnnotations(not_null(u_5));
        {
          d_6 = t;
          if(((c_6 != NULL) && (c_6 != d_6)))
            _fail(d_6);
          else
            c_6 = d_6;
        }
        {
          t = not_null(v_5);
          {
            ATerm g_6 = NULL;
            t = r_67(t);
            {
              e_6 = t;
              {
                t = not_null(w_5);
                {
                  ATerm i_6 = NULL;
                  t = s_67(t);
                  {
                    g_6 = t;
                    {
                      t = not_null(x_5);
                      {
                        ATerm k_6 = NULL;
                        t = t_67(t);
                        {
                          i_6 = t;
                          {
                            ATerm l_6 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(e_6), not_null(g_6), not_null(i_6)), not_null(c_6));
                            {
                              l_6 = t;
                              if(((k_6 != NULL) && (k_6 != l_6)))
                                _fail(l_6);
                              else
                                k_6 = l_6;
                            }
                            t = not_null(k_6);
                          }
                        }
                      }
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
ATerm mark_guardedlchoice_1 (ATerm t, ATerm q_75 (ATerm))
{
  t = GuardedLChoice_3(t, _id, _id, _id);
  {
    ATerm f_0 (ATerm t)
    {
      t = GuardedLChoice_3(t, q_75, _id, _id);
      t = GuardedLChoice_3(t, _id, q_75, _id);
      return(t);
    }
    ATerm j_0 (ATerm t)
    {
      t = GuardedLChoice_3(t, _id, _id, q_75);
      return(t);
    }
    t = abstract_choice_2(t, f_0, j_0);
  }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm n_67 (ATerm), ATerm o_67 (ATerm))
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL;
  y_6 = t;
  x_6 :
  if(match_cons(y_6, sym_LChoice_2))
    {
      z_6 = ATgetArgument(y_6, 0);
      a_7 = ATgetArgument(y_6, 1);
      {
        ATerm e_7 = NULL,g_7 = NULL;
        ATerm f_7 = NULL;
        t = SSLgetAnnotations(not_null(y_6));
        {
          f_7 = t;
          if(((e_7 != NULL) && (e_7 != f_7)))
            _fail(f_7);
          else
            e_7 = f_7;
        }
        {
          t = not_null(z_6);
          {
            ATerm i_7 = NULL;
            t = n_67(t);
            {
              g_7 = t;
              {
                t = not_null(a_7);
                {
                  ATerm k_7 = NULL;
                  t = o_67(t);
                  {
                    i_7 = t;
                    {
                      ATerm l_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(g_7), not_null(i_7)), not_null(e_7));
                      {
                        l_7 = t;
                        if(((k_7 != NULL) && (k_7 != l_7)))
                          _fail(l_7);
                        else
                          k_7 = l_7;
                      }
                      t = not_null(k_7);
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
ATerm mark_lchoice_1 (ATerm t, ATerm p_75 (ATerm))
{
  t = LChoice_2(t, _id, _id);
  {
    ATerm l_0 (ATerm t)
    {
      t = LChoice_2(t, p_75, _id);
      return(t);
    }
    ATerm o_0 (ATerm t)
    {
      t = LChoice_2(t, _id, p_75);
      return(t);
    }
    t = abstract_choice_2(t, l_0, o_0);
  }
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm l_66 (ATerm), ATerm m_66 (ATerm))
{
  ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL;
  x_7 = t;
  w_7 :
  if(match_cons(x_7, sym_Choice_2))
    {
      y_7 = ATgetArgument(x_7, 0);
      z_7 = ATgetArgument(x_7, 1);
      {
        ATerm d_8 = NULL,f_8 = NULL;
        ATerm e_8 = NULL;
        t = SSLgetAnnotations(not_null(x_7));
        {
          e_8 = t;
          if(((d_8 != NULL) && (d_8 != e_8)))
            _fail(e_8);
          else
            d_8 = e_8;
        }
        {
          t = not_null(y_7);
          {
            ATerm h_8 = NULL;
            t = l_66(t);
            {
              f_8 = t;
              {
                t = not_null(z_7);
                {
                  ATerm j_8 = NULL;
                  t = m_66(t);
                  {
                    h_8 = t;
                    {
                      ATerm k_8 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(f_8), not_null(h_8)), not_null(d_8));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm abstract_choice_2 (ATerm t, ATerm r_75 (ATerm), ATerm s_75 (ATerm))
{
  ATerm s_8 = NULL,u_8 = NULL;
  ATerm y_4;
  y_4 = t;
  {
    ATerm t_8 = NULL;
    t = save_MarkVar_0(t);
    {
      t_8 = t;
      if(((s_8 != NULL) && (s_8 != t_8)))
        _fail(t_8);
      else
        s_8 = t_8;
    }
  }
  t = y_4;
  {
    t = r_75(t);
    {
      ATerm z_4;
      z_4 = t;
      {
        ATerm v_8 = NULL;
        t = save_MarkVar_0(t);
        {
          v_8 = t;
          {
            if(((u_8 != NULL) && (u_8 != v_8)))
              _fail(v_8);
            else
              u_8 = v_8;
            {
              t = not_null(s_8);
              t = restore_MarkVar_0(t);
            }
          }
        }
      }
      t = z_4;
      {
        t = s_75(t);
        {
          ATerm a_5;
          a_5 = t;
          {
            t = not_null(u_8);
            t = isect_MarkVar_0(t);
          }
          t = a_5;
        }
      }
    }
  }
  return(t);
}
ATerm mark_choice_1 (ATerm t, ATerm o_75 (ATerm))
{
  t = Choice_2(t, _id, _id);
  {
    ATerm p_0 (ATerm t)
    {
      t = Choice_2(t, o_75, _id);
      return(t);
    }
    ATerm q_0 (ATerm t)
    {
      t = Choice_2(t, _id, o_75);
      return(t);
    }
    t = abstract_choice_2(t, p_0, q_0);
  }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm u_67 (ATerm), ATerm v_67 (ATerm))
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
  e_9 = t;
  d_9 :
  if(match_cons(e_9, sym_Rec_2))
    {
      f_9 = ATgetArgument(e_9, 0);
      g_9 = ATgetArgument(e_9, 1);
      {
        ATerm k_9 = NULL,m_9 = NULL;
        ATerm l_9 = NULL;
        t = SSLgetAnnotations(not_null(e_9));
        {
          l_9 = t;
          if(((k_9 != NULL) && (k_9 != l_9)))
            _fail(l_9);
          else
            k_9 = l_9;
        }
        {
          t = not_null(f_9);
          {
            ATerm o_9 = NULL;
            t = u_67(t);
            {
              m_9 = t;
              {
                t = not_null(g_9);
                {
                  ATerm q_9 = NULL;
                  t = v_67(t);
                  {
                    o_9 = t;
                    {
                      ATerm r_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(m_9), not_null(o_9)), not_null(k_9));
                      {
                        r_9 = t;
                        if(((q_9 != NULL) && (q_9 != r_9)))
                          _fail(r_9);
                        else
                          q_9 = r_9;
                      }
                      t = not_null(q_9);
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
ATerm mark_rec_0 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL;
  a_10 = t;
  z_9 :
  if(match_cons(a_10, sym_Rec_2))
    {
      b_10 = ATgetArgument(a_10, 0);
      c_10 = ATgetArgument(a_10, 1);
      {
        ATerm d_10 = NULL;
        ATerm b_5;
        b_5 = t;
        {
          ATerm e_10 = NULL;
          t = save_MarkVar_0(t);
          {
            e_10 = t;
            if(((d_10 != NULL) && (d_10 != e_10)))
              _fail(e_10);
            else
              d_10 = e_10;
          }
        }
        t = b_5;
        {
          ATerm c_5;
          c_5 = t;
          t = Rec_2(t, _id, mark_buv_0);
          t = c_5;
          {
            ATerm d_5;
            d_5 = t;
            {
              t = not_null(d_10);
              t = isect_MarkVar_0(t);
            }
            t = d_5;
            t = Rec_2(t, _id, mark_buv_0);
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
ATerm PrimT_3 (ATerm t, ATerm d_68 (ATerm), ATerm e_68 (ATerm), ATerm f_68 (ATerm))
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym_PrimT_3))
    {
      p_10 = ATgetArgument(o_10, 0);
      q_10 = ATgetArgument(o_10, 1);
      r_10 = ATgetArgument(o_10, 2);
      {
        ATerm w_10 = NULL,y_10 = NULL;
        ATerm x_10 = NULL;
        t = SSLgetAnnotations(not_null(o_10));
        {
          x_10 = t;
          if(((w_10 != NULL) && (w_10 != x_10)))
            _fail(x_10);
          else
            w_10 = x_10;
        }
        {
          t = not_null(p_10);
          {
            ATerm a_11 = NULL;
            t = d_68(t);
            {
              y_10 = t;
              {
                t = not_null(q_10);
                {
                  ATerm c_11 = NULL;
                  t = e_68(t);
                  {
                    a_11 = t;
                    {
                      t = not_null(r_10);
                      {
                        ATerm e_11 = NULL;
                        t = f_68(t);
                        {
                          c_11 = t;
                          {
                            ATerm f_11 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(y_10), not_null(a_11), not_null(c_11)), not_null(w_10));
                            {
                              f_11 = t;
                              if(((e_11 != NULL) && (e_11 != f_11)))
                                _fail(f_11);
                              else
                                e_11 = f_11;
                            }
                            t = not_null(e_11);
                          }
                        }
                      }
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
ATerm mark_prim_0 (ATerm t)
{
  ATerm n_11 = NULL;
  t = PrimT_3(t, _id, _id, _id);
  {
    ATerm e_5;
    e_5 = t;
    {
      ATerm o_11 = NULL;
      t = save_MarkVar_0(t);
      {
        o_11 = t;
        if(((n_11 != NULL) && (n_11 != o_11)))
          _fail(o_11);
        else
          n_11 = o_11;
      }
    }
    t = e_5;
    {
      ATerm r_0 (ATerm t)
      {
        ATerm s_0 (ATerm t)
        {
          t = alltd_1(t, MarkVar_0);
          return(t);
        }
        t = map_1(t, s_0);
        return(t);
      }
      t = PrimT_3(t, _id, _id, r_0);
      {
        t = PrimT_3(t, _id, mark_buv_0, _id);
        {
          ATerm f_5;
          f_5 = t;
          {
            t = not_null(n_11);
            t = isect_MarkVar_0(t);
          }
          t = f_5;
        }
      }
    }
  }
  return(t);
}
ATerm Call_2 (ATerm t, ATerm z_66 (ATerm), ATerm a_67 (ATerm))
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
  w_11 = t;
  v_11 :
  if(match_cons(w_11, sym_Call_2))
    {
      x_11 = ATgetArgument(w_11, 0);
      y_11 = ATgetArgument(w_11, 1);
      {
        ATerm c_12 = NULL,e_12 = NULL;
        ATerm d_12 = NULL;
        t = SSLgetAnnotations(not_null(w_11));
        {
          d_12 = t;
          if(((c_12 != NULL) && (c_12 != d_12)))
            _fail(d_12);
          else
            c_12 = d_12;
        }
        {
          t = not_null(x_11);
          {
            ATerm g_12 = NULL;
            t = z_66(t);
            {
              e_12 = t;
              {
                t = not_null(y_11);
                {
                  ATerm i_12 = NULL;
                  t = a_67(t);
                  {
                    g_12 = t;
                    {
                      ATerm j_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(e_12), not_null(g_12)), not_null(c_12));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CallT_3 (ATerm t, ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm d_67 (ATerm))
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL;
  w_12 = t;
  v_12 :
  if(match_cons(w_12, sym_CallT_3))
    {
      x_12 = ATgetArgument(w_12, 0);
      y_12 = ATgetArgument(w_12, 1);
      z_12 = ATgetArgument(w_12, 2);
      {
        ATerm e_13 = NULL,g_13 = NULL;
        ATerm f_13 = NULL;
        t = SSLgetAnnotations(not_null(w_12));
        {
          f_13 = t;
          if(((e_13 != NULL) && (e_13 != f_13)))
            _fail(f_13);
          else
            e_13 = f_13;
        }
        {
          t = not_null(x_12);
          {
            ATerm i_13 = NULL;
            t = b_67(t);
            {
              g_13 = t;
              {
                t = not_null(y_12);
                {
                  ATerm k_13 = NULL;
                  t = c_67(t);
                  {
                    i_13 = t;
                    {
                      t = not_null(z_12);
                      {
                        ATerm m_13 = NULL;
                        t = d_67(t);
                        {
                          k_13 = t;
                          {
                            ATerm n_13 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(g_13), not_null(i_13), not_null(k_13)), not_null(e_13));
                            {
                              n_13 = t;
                              if(((m_13 != NULL) && (m_13 != n_13)))
                                _fail(n_13);
                              else
                                m_13 = n_13;
                            }
                            t = not_null(m_13);
                          }
                        }
                      }
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
ATerm mark_call_0 (ATerm t)
{
  ATerm g_5 = t;
  int h_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_13 = NULL;
      t = CallT_3(t, _id, _id, _id);
      {
        ATerm i_5;
        i_5 = t;
        {
          ATerm x_13 = NULL;
          t = save_MarkVar_0(t);
          {
            x_13 = t;
            if(((w_13 != NULL) && (w_13 != x_13)))
              _fail(x_13);
            else
              w_13 = x_13;
          }
        }
        t = i_5;
        {
          ATerm t_0 (ATerm t)
          {
            ATerm u_0 (ATerm t)
            {
              t = alltd_1(t, MarkVar_0);
              return(t);
            }
            t = map_1(t, u_0);
            return(t);
          }
          t = CallT_3(t, _id, _id, t_0);
          {
            t = CallT_3(t, _id, mark_buv_0, _id);
            {
              ATerm j_5;
              j_5 = t;
              {
                t = not_null(w_13);
                t = isect_MarkVar_0(t);
              }
              t = j_5;
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
        ATerm y_13 = NULL;
        t = Call_2(t, _id, _id);
        {
          ATerm k_5;
          k_5 = t;
          {
            ATerm z_13 = NULL;
            t = save_MarkVar_0(t);
            {
              z_13 = t;
              if(((y_13 != NULL) && (y_13 != z_13)))
                _fail(z_13);
              else
                y_13 = z_13;
            }
          }
          t = k_5;
          {
            t = Call_2(t, _id, mark_buv_0);
            {
              ATerm l_5;
              l_5 = t;
              {
                t = not_null(y_13);
                t = isect_MarkVar_0(t);
              }
              t = l_5;
            }
          }
        }
      }
    }
  return(t);
}
ATerm SDefT_4 (ATerm t, ATerm p_69 (ATerm), ATerm q_69 (ATerm), ATerm r_69 (ATerm), ATerm s_69 (ATerm))
{
  ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL;
  k_14 = t;
  j_14 :
  if(match_cons(k_14, sym_SDefT_4))
    {
      l_14 = ATgetArgument(k_14, 0);
      m_14 = ATgetArgument(k_14, 1);
      n_14 = ATgetArgument(k_14, 2);
      o_14 = ATgetArgument(k_14, 3);
      {
        ATerm u_14 = NULL,w_14 = NULL;
        ATerm v_14 = NULL;
        t = SSLgetAnnotations(not_null(k_14));
        {
          v_14 = t;
          if(((u_14 != NULL) && (u_14 != v_14)))
            _fail(v_14);
          else
            u_14 = v_14;
        }
        {
          t = not_null(l_14);
          {
            ATerm y_14 = NULL;
            t = p_69(t);
            {
              w_14 = t;
              {
                t = not_null(m_14);
                {
                  ATerm a_15 = NULL;
                  t = q_69(t);
                  {
                    y_14 = t;
                    {
                      t = not_null(n_14);
                      {
                        ATerm c_15 = NULL;
                        t = r_69(t);
                        {
                          a_15 = t;
                          {
                            t = not_null(o_14);
                            {
                              ATerm e_15 = NULL;
                              t = s_69(t);
                              {
                                c_15 = t;
                                {
                                  ATerm f_15 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(w_14), not_null(y_14), not_null(a_15), not_null(c_15)), not_null(u_14));
                                  {
                                    f_15 = t;
                                    if(((e_15 != NULL) && (e_15 != f_15)))
                                      _fail(f_15);
                                    else
                                      e_15 = f_15;
                                  }
                                  t = not_null(e_15);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm mark_sdef_0 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL;
  r_15 = t;
  q_15 :
  if(match_cons(r_15, sym_SDefT_4))
    {
      s_15 = ATgetArgument(r_15, 0);
      t_15 = ATgetArgument(r_15, 1);
      u_15 = ATgetArgument(r_15, 2);
      v_15 = ATgetArgument(r_15, 3);
      {
        ATerm v_0 (ATerm t)
        {
          ATerm w_0 (ATerm t)
          {
            t = term_m_5;
            return(t);
          }
          ATerm x_0 (ATerm t)
          {
            ATerm n_5;
            n_5 = t;
            {
              t = not_null(u_15);
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
                  x_15 = t;
                  p_15 :
                  if(match_cons(x_15, sym_VarDec_2))
                    {
                      y_15 = ATgetArgument(x_15, 0);
                      z_15 = ATgetArgument(x_15, 1);
                      {
                        ATerm o_5;
                        o_5 = t;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_15)), term_q_5);
                          {
                            ATerm z_0 (ATerm t)
                            {
                              t = term_m_5;
                              return(t);
                            }
                            t = assert_1(t, z_0);
                          }
                        }
                        t = o_5;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = map_1(t, y_0);
              }
            }
            t = n_5;
            t = mark_buv_0(t);
            return(t);
          }
          t = scope_2(t, w_0, x_0);
          return(t);
        }
        t = SDefT_4(t, _id, _id, _id, v_0);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm mark_traversal_0 (ATerm t)
{
  ATerm h_16 = NULL,f_16 = NULL,g_16 = NULL;
  f_16 = t;
  d_16 :
  if(match_cons(f_16, sym_All_1))
    {
      g_16 = ATgetArgument(f_16, 0);
      {
      }
    }
  else
    {
      if(match_cons(f_16, sym_One_1))
        {
          g_16 = ATgetArgument(f_16, 0);
          {
          }
        }
      else
        {
          if(match_cons(f_16, sym_Some_1))
            {
              g_16 = ATgetArgument(f_16, 0);
              {
              }
            }
          else
            {
              if(match_cons(f_16, sym_Thread_1))
                {
                  g_16 = ATgetArgument(f_16, 0);
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
  {
    ATerm r_5;
    r_5 = t;
    {
      ATerm i_16 = NULL;
      t = save_MarkVar_0(t);
      {
        i_16 = t;
        if(((h_16 != NULL) && (h_16 != i_16)))
          _fail(i_16);
        else
          h_16 = i_16;
      }
    }
    t = r_5;
    {
      t = _one(t, mark_buv_0);
      {
        ATerm s_5;
        s_5 = t;
        {
          t = not_null(h_16);
          t = isect_MarkVar_0(t);
        }
        t = s_5;
      }
    }
  }
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
  o_16 = t;
  n_16 :
  if(match_cons(o_16, sym__2))
    {
      p_16 = ATgetArgument(o_16, 0);
      q_16 = ATgetArgument(o_16, 1);
      {
        t = not_null(q_16);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
            t_16 = t;
            m_16 :
            if(match_cons(t_16, sym__2))
              {
                u_16 = ATgetArgument(t_16, 0);
                v_16 = ATgetArgument(t_16, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(p_16), not_null(u_16), not_null(v_16));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, a_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm restore_MarkVar_0 (ATerm t)
{
  ATerm b_17 = NULL;
  b_17 = t;
  {
    ATerm y_5;
    y_5 = t;
    {
      t = term_m_5;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_5, not_null(b_17));
          t = table_putlist_0(t);
        }
      }
    }
    t = y_5;
  }
  return(t);
}
ATerm Let_2 (ATerm t, ATerm x_66 (ATerm), ATerm y_66 (ATerm))
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
  k_17 = t;
  j_17 :
  if(match_cons(k_17, sym_Let_2))
    {
      l_17 = ATgetArgument(k_17, 0);
      m_17 = ATgetArgument(k_17, 1);
      {
        ATerm q_17 = NULL,s_17 = NULL;
        ATerm r_17 = NULL;
        t = SSLgetAnnotations(not_null(k_17));
        {
          r_17 = t;
          if(((q_17 != NULL) && (q_17 != r_17)))
            _fail(r_17);
          else
            q_17 = r_17;
        }
        {
          t = not_null(l_17);
          {
            ATerm u_17 = NULL;
            t = x_66(t);
            {
              s_17 = t;
              {
                t = not_null(m_17);
                {
                  ATerm w_17 = NULL;
                  t = y_66(t);
                  {
                    u_17 = t;
                    {
                      ATerm x_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(s_17), not_null(u_17)), not_null(q_17));
                      {
                        x_17 = t;
                        if(((w_17 != NULL) && (w_17 != x_17)))
                          _fail(x_17);
                        else
                          w_17 = x_17;
                      }
                      t = not_null(w_17);
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
ATerm table_keys_0 (ATerm t)
{
  ATerm e_18 = NULL;
  e_18 = t;
  t = SSL_table_keys(not_null(e_18));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm k_18 = NULL;
  k_18 = t;
  {
    t = table_keys_0(t);
    {
      ATerm b_1 (ATerm t)
      {
        ATerm m_18 = NULL;
        ATerm o_18 = NULL;
        m_18 = t;
        {
          ATerm p_18 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_18), not_null(m_18));
          {
            t = table_get_0(t);
            {
              p_18 = t;
              if(((o_18 != NULL) && (o_18 != p_18)))
                _fail(p_18);
              else
                o_18 = p_18;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_18), not_null(o_18));
        }
        return(t);
      }
      t = map_1(t, b_1);
    }
  }
  return(t);
}
ATerm save_MarkVar_0 (ATerm t)
{
  t = term_m_5;
  t = table_getlist_0(t);
  return(t);
}
ATerm isect_MarkVar_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm d_1 (ATerm t)
    {
      ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
      d_19 = t;
      x_18 :
      if(match_cons(d_19, sym__2))
        {
          e_19 = ATgetArgument(d_19, 0);
          f_19 = ATgetArgument(d_19, 1);
          y_18 :
          if(((ATgetType(f_19) == AT_LIST) && !(ATisEmpty(f_19))))
            {
              g_19 = ATgetFirst((ATermList) f_19);
              j_19 = (ATerm) ATgetNext((ATermList) f_19);
              z_18 :
              if(match_cons(g_19, sym_Defined_2))
                {
                  h_19 = ATgetArgument(g_19, 0);
                  i_19 = ATgetArgument(g_19, 1);
                  a_19 :
                  if(!(match_cons(e_19, sym_Scopes_0)))
                    {
                      ATerm z_5 = t;
                      int a_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_6;
                          b_6 = t;
                          {
                            ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, term_m_5, not_null(e_19));
                            {
                              t = table_get_0(t);
                              {
                                m_19 = t;
                                v_18 :
                                if(((ATgetType(m_19) == AT_LIST) && !(ATisEmpty(m_19))))
                                  {
                                    n_19 = ATgetFirst((ATermList) m_19);
                                    q_19 = (ATerm) ATgetNext((ATermList) m_19);
                                    w_18 :
                                    if(match_cons(n_19, sym_Defined_2))
                                      {
                                        o_19 = ATgetArgument(n_19, 0);
                                        p_19 = ATgetArgument(n_19, 1);
                                        if(((i_19 != NULL) && (i_19 != p_19)))
                                          _fail(p_19);
                                        else
                                          i_19 = p_19;
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
                          t = b_6;
                          ;
                          LocalPopChoice(a_6);
                        }
                      else
                        {
                          t = z_5;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(e_19), (ATerm) ATinsert(ATempty, term_f_6));
                        }
                    }
                }
              else
                {
                  b_19 :
                  if(!(match_cons(e_19, sym_Scopes_0)))
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              c_19 :
              if(!(match_cons(e_19, sym_Scopes_0)))
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
    t = try_1(t, d_1);
    return(t);
  }
  t = map_1(t, c_1);
  t = restore_MarkVar_0(t);
  return(t);
}
ATerm mark_let_0 (ATerm t)
{
  ATerm v_19 = NULL,x_19 = NULL;
  t = Let_2(t, _id, _id);
  {
    ATerm h_6;
    h_6 = t;
    {
      ATerm w_19 = NULL;
      t = save_MarkVar_0(t);
      {
        w_19 = t;
        if(((v_19 != NULL) && (v_19 != w_19)))
          _fail(w_19);
        else
          v_19 = w_19;
      }
    }
    t = h_6;
    {
      t = Let_2(t, _id, mark_buv_0);
      {
        ATerm j_6;
        j_6 = t;
        {
          ATerm y_19 = NULL;
          t = not_null(v_19);
          {
            t = isect_MarkVar_0(t);
            {
              t = save_MarkVar_0(t);
              {
                y_19 = t;
                if(((x_19 != NULL) && (x_19 != y_19)))
                  _fail(y_19);
                else
                  x_19 = y_19;
              }
            }
          }
        }
        t = j_6;
        {
          ATerm e_1 (ATerm t)
          {
            ATerm f_1 (ATerm t)
            {
              t = mark_buv_0(t);
              {
                ATerm m_6;
                m_6 = t;
                {
                  t = not_null(x_19);
                  t = restore_MarkVar_0(t);
                }
                t = m_6;
              }
              return(t);
            }
            t = map_1(t, f_1);
            return(t);
          }
          t = Let_2(t, e_1, _id);
        }
      }
    }
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL;
  d_20 = t;
  c_20 :
  if(((ATgetType(d_20) == AT_LIST) && !(ATisEmpty(d_20))))
    {
      e_20 = ATgetFirst((ATermList) d_20);
      f_20 = (ATerm) ATgetNext((ATermList) d_20);
      t = not_null(f_20);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
  l_20 = t;
  k_20 :
  if(match_cons(l_20, sym__2))
    {
      m_20 = ATgetArgument(l_20, 0);
      n_20 = ATgetArgument(l_20, 1);
      {
        ATerm n_6;
        n_6 = t;
        {
          ATerm q_20 = NULL;
          ATerm r_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_20), not_null(n_20));
          {
            ATerm o_6 = t;
            int p_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(p_6);
              }
            else
              {
                t = o_6;
                t = (ATerm) ATempty;
              }
            {
              r_20 = t;
              if(((q_20 != NULL) && (q_20 != r_20)))
                _fail(r_20);
              else
                q_20 = r_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_20), not_null(n_20), not_null(q_20));
            t = table_put_0(t);
          }
        }
        t = n_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm w_75 (ATerm))
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
  ATerm q_6;
  q_6 = t;
  {
    ATerm b_21 = NULL;
    ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
    t = w_75(t);
    {
      b_21 = t;
      {
        if(((a_21 != NULL) && (a_21 != b_21)))
          _fail(b_21);
        else
          a_21 = b_21;
        {
          ATerm r_6 = t;
          int s_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_21), term_t_6);
              t = table_get_0(t);
              ;
              LocalPopChoice(s_6);
            }
          else
            {
              t = r_6;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            c_21 = t;
            x_20 :
            if(((ATgetType(c_21) == AT_LIST) && !(ATisEmpty(c_21))))
              {
                d_21 = ATgetFirst((ATermList) c_21);
                e_21 = (ATerm) ATgetNext((ATermList) c_21);
                {
                  if(((z_20 != NULL) && (z_20 != d_21)))
                    _fail(d_21);
                  else
                    z_20 = d_21;
                  {
                    if(((y_20 != NULL) && (y_20 != e_21)))
                      _fail(e_21);
                    else
                      y_20 = e_21;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(a_21), term_t_6, not_null(y_20));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(z_20);
                          {
                            ATerm g_1 (ATerm t)
                            {
                              ATerm f_21 = NULL;
                              f_21 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_21), not_null(f_21));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, g_1);
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
  t = q_6;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm p_88 (ATerm), ATerm q_88 (ATerm))
{
  ATerm u_6 = t;
  int v_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_88(t);
      t = q_88(t);
      ;
      LocalPopChoice(v_6);
    }
  else
    {
      t = u_6;
      {
        t = q_88(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm v_75 (ATerm))
{
  ATerm m_21 = NULL;
  ATerm w_6;
  w_6 = t;
  {
    ATerm n_21 = NULL;
    ATerm o_21 = NULL;
    t = v_75(t);
    {
      n_21 = t;
      {
        if(((m_21 != NULL) && (m_21 != n_21)))
          _fail(n_21);
        else
          m_21 = n_21;
        {
          ATerm p_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_21), term_t_6);
          {
            ATerm b_7 = t;
            int c_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(c_7);
              }
            else
              {
                t = b_7;
                t = (ATerm) ATempty;
              }
            {
              p_21 = t;
              if(((o_21 != NULL) && (o_21 != p_21)))
                _fail(p_21);
              else
                o_21 = p_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_21), term_t_6, (ATerm) ATinsert(CheckATermList(not_null(o_21)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = w_6;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm x_75 (ATerm), ATerm y_75 (ATerm))
{
  t = begin_scope_1(t, x_75);
  {
    ATerm h_1 (ATerm t)
    {
      t = end_scope_1(t, x_75);
      return(t);
    }
    t = restore_always_2(t, y_75, h_1);
  }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm h_67 (ATerm), ATerm i_67 (ATerm))
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
  y_21 = t;
  x_21 :
  if(match_cons(y_21, sym_Scope_2))
    {
      z_21 = ATgetArgument(y_21, 0);
      a_22 = ATgetArgument(y_21, 1);
      {
        ATerm e_22 = NULL,g_22 = NULL;
        ATerm f_22 = NULL;
        t = SSLgetAnnotations(not_null(y_21));
        {
          f_22 = t;
          if(((e_22 != NULL) && (e_22 != f_22)))
            _fail(f_22);
          else
            e_22 = f_22;
        }
        {
          t = not_null(z_21);
          {
            ATerm i_22 = NULL;
            t = h_67(t);
            {
              g_22 = t;
              {
                t = not_null(a_22);
                {
                  ATerm k_22 = NULL;
                  t = i_67(t);
                  {
                    i_22 = t;
                    {
                      ATerm l_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(g_22), not_null(i_22)), not_null(e_22));
                      {
                        l_22 = t;
                        if(((k_22 != NULL) && (k_22 != l_22)))
                          _fail(l_22);
                        else
                          k_22 = l_22;
                      }
                      t = not_null(k_22);
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
ATerm mark_scope_0 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
  u_22 = t;
  t_22 :
  if(match_cons(u_22, sym_Scope_2))
    {
      v_22 = ATgetArgument(u_22, 0);
      w_22 = ATgetArgument(u_22, 1);
      {
        ATerm i_1 (ATerm t)
        {
          ATerm j_1 (ATerm t)
          {
            t = term_m_5;
            return(t);
          }
          ATerm k_1 (ATerm t)
          {
            ATerm d_7;
            d_7 = t;
            {
              t = not_null(v_22);
              {
                ATerm l_1 (ATerm t)
                {
                  ATerm y_22 = NULL;
                  y_22 = t;
                  {
                    ATerm h_7;
                    h_7 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_22)), term_m_7);
                      {
                        ATerm m_1 (ATerm t)
                        {
                          t = term_m_5;
                          return(t);
                        }
                        t = assert_1(t, m_1);
                      }
                    }
                    t = h_7;
                  }
                  return(t);
                }
                t = map_1(t, l_1);
              }
            }
            t = d_7;
            t = mark_buv_0(t);
            return(t);
          }
          t = scope_2(t, j_1, k_1);
          return(t);
        }
        t = Scope_2(t, _id, i_1);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Build_1 (ATerm t, ATerm f_67 (ATerm))
{
  ATerm h_23 = NULL,i_23 = NULL;
  h_23 = t;
  g_23 :
  if(match_cons(h_23, sym_Build_1))
    {
      i_23 = ATgetArgument(h_23, 0);
      {
        ATerm l_23 = NULL,n_23 = NULL;
        ATerm m_23 = NULL;
        t = SSLgetAnnotations(not_null(h_23));
        {
          m_23 = t;
          if(((l_23 != NULL) && (l_23 != m_23)))
            _fail(m_23);
          else
            l_23 = m_23;
        }
        {
          t = not_null(i_23);
          {
            ATerm p_23 = NULL;
            t = f_67(t);
            {
              n_23 = t;
              {
                ATerm q_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(n_23)), not_null(l_23));
                {
                  q_23 = t;
                  if(((p_23 != NULL) && (p_23 != q_23)))
                    _fail(q_23);
                  else
                    p_23 = q_23;
                }
                t = not_null(p_23);
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
ATerm mark_build_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    t = alltd_1(t, MarkVar_0);
    return(t);
  }
  t = Build_1(t, n_1);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_75 (ATerm))
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL;
  a_24 = t;
  z_23 :
  if(match_cons(a_24, sym__2))
    {
      b_24 = ATgetArgument(a_24, 0);
      c_24 = ATgetArgument(a_24, 1);
      {
        ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL;
        ATerm n_7;
        n_7 = t;
        {
          ATerm i_24 = NULL;
          ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
          t = z_75(t);
          {
            i_24 = t;
            {
              if(((f_24 != NULL) && (f_24 != i_24)))
                _fail(i_24);
              else
                f_24 = i_24;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(f_24), not_null(b_24), not_null(c_24));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_7 = t;
                    int p_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_24), term_t_6);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(p_7);
                      }
                    else
                      {
                        t = o_7;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      j_24 = t;
                      y_23 :
                      if(((ATgetType(j_24) == AT_LIST) && !(ATisEmpty(j_24))))
                        {
                          k_24 = ATgetFirst((ATermList) j_24);
                          l_24 = (ATerm) ATgetNext((ATermList) j_24);
                          {
                            if(((g_24 != NULL) && (g_24 != k_24)))
                              _fail(k_24);
                            else
                              g_24 = k_24;
                            {
                              if(((h_24 != NULL) && (h_24 != l_24)))
                                _fail(l_24);
                              else
                                h_24 = l_24;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(f_24), term_t_6, (ATerm) ATinsert(CheckATermList(not_null(h_24)), (ATerm) ATinsert(CheckATermList(not_null(g_24)), not_null(b_24))));
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
        t = n_7;
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
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
  r_24 = t;
  q_24 :
  if(((ATgetType(r_24) == AT_LIST) && !(ATisEmpty(r_24))))
    {
      s_24 = ATgetFirst((ATermList) r_24);
      t_24 = (ATerm) ATgetNext((ATermList) r_24);
      t = not_null(s_24);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
  y_24 = t;
  x_24 :
  if(match_cons(y_24, sym__2))
    {
      z_24 = ATgetArgument(y_24, 0);
      a_25 = ATgetArgument(y_24, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_24), not_null(a_25));
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
ATerm rewrite_1 (ATerm t, ATerm b_76 (ATerm))
{
  ATerm g_25 = NULL;
  ATerm i_25 = NULL;
  g_25 = t;
  {
    ATerm j_25 = NULL;
    t = term_q_7;
    {
      t = b_76(t);
      {
        j_25 = t;
        if(((i_25 != NULL) && (i_25 != j_25)))
          _fail(j_25);
        else
          i_25 = j_25;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_25), not_null(g_25));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm MarkVar_0 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL;
  f_26 = t;
  e_26 :
  if(match_cons(f_26, sym_Var_1))
    {
      g_26 = ATgetArgument(f_26, 0);
      {
        ATerm r_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_27 = NULL;
            ATerm t_7;
            t_7 = t;
            {
              ATerm j_26 = NULL,t_27 = NULL;
              t = not_null(f_26);
              {
                ATerm o_1 (ATerm t)
                {
                  t = term_m_5;
                  return(t);
                }
                t = rewrite_1(t, o_1);
                {
                  j_26 = t;
                  p_25 :
                  if(match_cons(j_26, sym_Defined_1))
                    {
                      t_27 = ATgetArgument(j_26, 0);
                      q_25 :
                      if(!(match_string(t_27, "h_0")))
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
            t = t_7;
            {
              ATerm v_27 = NULL,d_28 = NULL,f_28 = NULL;
              ATerm u_7;
              u_7 = t;
              {
                ATerm c_28 = NULL;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_26));
                {
                  c_28 = t;
                  if(((v_27 != NULL) && (v_27 != c_28)))
                    _fail(c_28);
                  else
                    v_27 = c_28;
                }
              }
              t = u_7;
              {
                ATerm v_7;
                v_7 = t;
                {
                  ATerm e_28 = NULL;
                  t = (ATerm) ATinsert(ATempty, term_a_8);
                  {
                    e_28 = t;
                    if(((d_28 != NULL) && (d_28 != e_28)))
                      _fail(e_28);
                    else
                      d_28 = e_28;
                  }
                }
                t = v_7;
                {
                  t = SSLsetAnnotations(not_null(v_27), not_null(d_28));
                  {
                    f_28 = t;
                    if(((u_27 != NULL) && (u_27 != f_28)))
                      _fail(f_28);
                    else
                      u_27 = f_28;
                  }
                }
              }
              t = not_null(u_27);
            }
            ;
            LocalPopChoice(s_7);
          }
        else
          {
            t = r_7;
            {
              ATerm b_8 = t;
              int c_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_28 = NULL;
                  ATerm g_8;
                  g_8 = t;
                  {
                    ATerm k_28 = NULL,l_28 = NULL;
                    t = not_null(f_26);
                    {
                      ATerm p_1 (ATerm t)
                      {
                        t = term_m_5;
                        return(t);
                      }
                      t = rewrite_1(t, p_1);
                      {
                        k_28 = t;
                        u_25 :
                        if(match_cons(k_28, sym_Defined_1))
                          {
                            l_28 = ATgetArgument(k_28, 0);
                            v_25 :
                            if(!(match_string(l_28, "e_0")))
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
                  t = g_8;
                  {
                    ATerm n_28 = NULL,p_28 = NULL,r_28 = NULL;
                    ATerm i_8;
                    i_8 = t;
                    {
                      ATerm o_28 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_26));
                      {
                        o_28 = t;
                        if(((n_28 != NULL) && (n_28 != o_28)))
                          _fail(o_28);
                        else
                          n_28 = o_28;
                      }
                    }
                    t = i_8;
                    {
                      ATerm l_8;
                      l_8 = t;
                      {
                        ATerm q_28 = NULL;
                        t = (ATerm) ATinsert(ATempty, term_a_8);
                        {
                          q_28 = t;
                          if(((p_28 != NULL) && (p_28 != q_28)))
                            _fail(q_28);
                          else
                            p_28 = q_28;
                        }
                      }
                      t = l_8;
                      {
                        t = SSLsetAnnotations(not_null(n_28), not_null(p_28));
                        {
                          r_28 = t;
                          if(((m_28 != NULL) && (m_28 != r_28)))
                            _fail(r_28);
                          else
                            m_28 = r_28;
                        }
                      }
                    }
                    t = not_null(m_28);
                  }
                  ;
                  LocalPopChoice(c_8);
                }
              else
                {
                  t = b_8;
                  {
                    ATerm c_29 = NULL;
                    ATerm m_8;
                    m_8 = t;
                    {
                      ATerm u_28 = NULL,b_29 = NULL;
                      t = not_null(f_26);
                      {
                        ATerm q_1 (ATerm t)
                        {
                          t = term_m_5;
                          return(t);
                        }
                        t = rewrite_1(t, q_1);
                        {
                          u_28 = t;
                          z_25 :
                          if(match_cons(u_28, sym_Defined_1))
                            {
                              b_29 = ATgetArgument(u_28, 0);
                              a_26 :
                              if(!(match_string(b_29, "c_0")))
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
                    t = m_8;
                    {
                      ATerm d_29 = NULL,f_29 = NULL,o_29 = NULL;
                      ATerm n_8;
                      n_8 = t;
                      {
                        ATerm e_29 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_26));
                        {
                          e_29 = t;
                          if(((d_29 != NULL) && (d_29 != e_29)))
                            _fail(e_29);
                          else
                            d_29 = e_29;
                        }
                      }
                      t = n_8;
                      {
                        ATerm o_8;
                        o_8 = t;
                        {
                          ATerm g_29 = NULL;
                          t = (ATerm) ATinsert(ATempty, term_p_8);
                          {
                            g_29 = t;
                            if(((f_29 != NULL) && (f_29 != g_29)))
                              _fail(g_29);
                            else
                              f_29 = g_29;
                          }
                        }
                        t = o_8;
                        {
                          t = SSLsetAnnotations(not_null(d_29), not_null(f_29));
                          {
                            o_29 = t;
                            if(((c_29 != NULL) && (c_29 != o_29)))
                              _fail(o_29);
                            else
                              c_29 = o_29;
                          }
                        }
                      }
                      t = not_null(c_29);
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
ATerm alltd_1 (ATerm t, ATerm v_77 (ATerm))
{
  ATerm c_30 (ATerm t)
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_77(t);
        ;
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
        t = _all(t, c_30);
      }
    return(t);
  }
  t = c_30(t);
  return(t);
}
ATerm mark_match_0 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL;
  k_30 = t;
  j_30 :
  if(match_cons(k_30, sym_Match_1))
    {
      l_30 = ATgetArgument(k_30, 0);
      {
        ATerm n_30 = NULL;
        ATerm r_30 = NULL;
        t = not_null(l_30);
        {
          ATerm r_1 (ATerm t)
          {
            t = MarkVar_0(t);
            {
              ATerm w_8;
              w_8 = t;
              {
                ATerm o_30 = NULL,p_30 = NULL;
                o_30 = t;
                f_30 :
                if(match_cons(o_30, sym_Var_1))
                  {
                    p_30 = ATgetArgument(o_30, 0);
                    {
                      ATerm x_8;
                      x_8 = t;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_30)), term_z_8);
                        {
                          ATerm s_1 (ATerm t)
                          {
                            t = term_m_5;
                            return(t);
                          }
                          t = assert_1(t, s_1);
                        }
                      }
                      t = x_8;
                    }
                  }
                else
                  {
                    _fail(t);
                  }
              }
              t = w_8;
            }
            return(t);
          }
          t = alltd_1(t, r_1);
          {
            r_30 = t;
            if(((n_30 != NULL) && (n_30 != r_30)))
              _fail(r_30);
            else
              n_30 = r_30;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(n_30));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm mark_buv_0 (ATerm t)
{
  ATerm a_9 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = mark_match_0(t);
      ;
      LocalPopChoice(b_9);
    }
  else
    {
      t = a_9;
      {
        ATerm c_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_build_0(t);
            ;
            LocalPopChoice(h_9);
          }
        else
          {
            t = c_9;
            {
              ATerm i_9 = t;
              int j_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_scope_0(t);
                  ;
                  LocalPopChoice(j_9);
                }
              else
                {
                  t = i_9;
                  {
                    ATerm n_9 = t;
                    int p_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_let_0(t);
                        ;
                        LocalPopChoice(p_9);
                      }
                    else
                      {
                        t = n_9;
                        {
                          ATerm s_9 = t;
                          int t_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = mark_traversal_0(t);
                              ;
                              LocalPopChoice(t_9);
                            }
                          else
                            {
                              t = s_9;
                              {
                                ATerm u_9 = t;
                                int v_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_sdef_0(t);
                                    ;
                                    LocalPopChoice(v_9);
                                  }
                                else
                                  {
                                    t = u_9;
                                    {
                                      ATerm w_9 = t;
                                      int x_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = mark_call_0(t);
                                          ;
                                          LocalPopChoice(x_9);
                                        }
                                      else
                                        {
                                          t = w_9;
                                          {
                                            ATerm y_9 = t;
                                            int f_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_prim_0(t);
                                                ;
                                                LocalPopChoice(f_10);
                                              }
                                            else
                                              {
                                                t = y_9;
                                                {
                                                  ATerm g_10 = t;
                                                  int h_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_rec_0(t);
                                                      ;
                                                      LocalPopChoice(h_10);
                                                    }
                                                  else
                                                    {
                                                      t = g_10;
                                                      {
                                                        ATerm i_10 = t;
                                                        int j_10 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = mark_choice_1(t, mark_buv_0);
                                                            ;
                                                            LocalPopChoice(j_10);
                                                          }
                                                        else
                                                          {
                                                            t = i_10;
                                                            {
                                                              ATerm k_10 = t;
                                                              int l_10 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_lchoice_1(t, mark_buv_0);
                                                                  ;
                                                                  LocalPopChoice(l_10);
                                                                }
                                                              else
                                                                {
                                                                  t = k_10;
                                                                  {
                                                                    ATerm m_10 = t;
                                                                    int s_10 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_guardedlchoice_1(t, mark_buv_0);
                                                                        ;
                                                                        LocalPopChoice(s_10);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_10;
                                                                        t = _all(t, mark_buv_0);
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Strategies_1 (ATerm t, ATerm o_62 (ATerm))
{
  ATerm a_31 = NULL,b_31 = NULL;
  a_31 = t;
  z_30 :
  if(match_cons(a_31, sym_Strategies_1))
    {
      b_31 = ATgetArgument(a_31, 0);
      {
        ATerm j_31 = NULL,l_31 = NULL;
        ATerm k_31 = NULL;
        t = SSLgetAnnotations(not_null(a_31));
        {
          k_31 = t;
          if(((j_31 != NULL) && (j_31 != k_31)))
            _fail(k_31);
          else
            j_31 = k_31;
        }
        {
          t = not_null(b_31);
          {
            ATerm n_31 = NULL;
            t = o_62(t);
            {
              l_31 = t;
              {
                ATerm o_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(l_31)), not_null(j_31));
                {
                  o_31 = t;
                  if(((n_31 != NULL) && (n_31 != o_31)))
                    _fail(o_31);
                  else
                    n_31 = o_31;
                }
                t = not_null(n_31);
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
ATerm Specification_1 (ATerm t, ATerm t_62 (ATerm))
{
  ATerm d_32 = NULL,e_32 = NULL;
  d_32 = t;
  c_32 :
  if(match_cons(d_32, sym_Specification_1))
    {
      e_32 = ATgetArgument(d_32, 0);
      {
        ATerm h_32 = NULL,j_32 = NULL;
        ATerm i_32 = NULL;
        t = SSLgetAnnotations(not_null(d_32));
        {
          i_32 = t;
          if(((h_32 != NULL) && (h_32 != i_32)))
            _fail(i_32);
          else
            h_32 = i_32;
        }
        {
          t = not_null(e_32);
          {
            ATerm l_32 = NULL;
            t = t_62(t);
            {
              j_32 = t;
              {
                ATerm m_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(j_32)), not_null(h_32));
                {
                  m_32 = t;
                  if(((l_32 != NULL) && (l_32 != m_32)))
                    _fail(m_32);
                  else
                    l_32 = m_32;
                }
                t = not_null(l_32);
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
ATerm mark_bound_unbound_vars_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    t = term_t_10;
    return(t);
  }
  t = say_1(t, t_1);
  {
    ATerm u_1 (ATerm t)
    {
      ATerm v_1 (ATerm t)
      {
        ATerm w_1 (ATerm t)
        {
          ATerm x_1 (ATerm t)
          {
            t = map_1(t, mark_buv_0);
            return(t);
          }
          t = Strategies_1(t, x_1);
          return(t);
        }
        t = Cons_2(t, w_1, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, v_1);
      return(t);
    }
    t = Specification_1(t, u_1);
    {
      ATerm y_1 (ATerm t)
      {
        t = term_u_10;
        return(t);
      }
      t = say_1(t, y_1);
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm b_61 (ATerm), ATerm c_61 (ATerm))
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  x_32 = t;
  w_32 :
  if(match_cons(x_32, sym__2))
    {
      y_32 = ATgetArgument(x_32, 0);
      z_32 = ATgetArgument(x_32, 1);
      {
        ATerm d_33 = NULL,f_33 = NULL;
        ATerm e_33 = NULL;
        t = SSLgetAnnotations(not_null(x_32));
        {
          e_33 = t;
          if(((d_33 != NULL) && (d_33 != e_33)))
            _fail(e_33);
          else
            d_33 = e_33;
        }
        {
          t = not_null(y_32);
          {
            ATerm h_33 = NULL;
            t = b_61(t);
            {
              f_33 = t;
              {
                t = not_null(z_32);
                {
                  ATerm j_33 = NULL;
                  t = c_61(t);
                  {
                    h_33 = t;
                    {
                      ATerm k_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(f_33), not_null(h_33)), not_null(d_33));
                      {
                        k_33 = t;
                        if(((j_33 != NULL) && (j_33 != k_33)))
                          _fail(k_33);
                        else
                          j_33 = k_33;
                      }
                      t = not_null(j_33);
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
  ATerm v_10;
  v_10 = t;
  {
    ATerm r_33 = NULL;
    ATerm s_33 = NULL;
    t = term_q_7;
    {
      t = whoami_0(t);
      {
        s_33 = t;
        if(((r_33 != NULL) && (r_33 != s_33)))
          _fail(s_33);
        else
          r_33 = s_33;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_11), not_null(r_33)), term_z_10));
      {
        t = printnl_0(t);
        {
          t = term_d_11;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_10;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
  w_33 = t;
  v_33 :
  if(match_cons(w_33, sym__2))
    {
      x_33 = ATgetArgument(w_33, 0);
      y_33 = ATgetArgument(w_33, 1);
      {
        ATerm g_11;
        g_11 = t;
        t = SSL_printnl(not_null(x_33), not_null(y_33));
        t = g_11;
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
  ATerm d_34 = NULL;
  d_34 = t;
  t = SSL_implode_string(not_null(d_34));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      {
        ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL;
        i_34 = t;
        h_34 :
        if(((ATgetType(i_34) == AT_LIST) && !(ATisEmpty(i_34))))
          {
            j_34 = ATgetFirst((ATermList) i_34);
            k_34 = (ATerm) ATgetNext((ATermList) i_34);
            {
              t = not_null(j_34);
              {
                ATerm z_1 (ATerm t)
                {
                  t = not_null(k_34);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, z_1);
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
  ATerm u_34 = NULL;
  ATerm w_34 = NULL;
  u_34 = t;
  {
    ATerm x_34 = NULL;
    ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
    t = not_null(u_34);
    {
      x_34 = t;
      {
        t = SSL_explode_term(not_null(x_34));
        {
          z_34 = t;
          s_34 :
          if(match_cons(z_34, sym__2))
            {
              a_35 = ATgetArgument(z_34, 0);
              b_35 = ATgetArgument(z_34, 1);
              t_34 :
              if(match_string(a_35, ""))
                {
                  if(((w_34 != NULL) && (w_34 != b_35)))
                    _fail(b_35);
                  else
                    w_34 = b_35;
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
      t = not_null(w_34);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_80 (ATerm))
{
  ATerm f_35 (ATerm t)
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, f_35);
        ;
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
        {
          t = Nil_0(t);
          t = j_80(t);
        }
      }
    return(t);
  }
  t = f_35(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL;
  i_35 = t;
  h_35 :
  if(match_cons(i_35, sym__2))
    {
      j_35 = ATgetArgument(i_35, 0);
      k_35 = ATgetArgument(i_35, 1);
      {
        t = not_null(j_35);
        {
          ATerm a_2 (ATerm t)
          {
            t = not_null(k_35);
            return(t);
          }
          t = at_end_1(t, a_2);
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
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(m_11);
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
  ATerm p_35 = NULL;
  p_35 = t;
  t = SSL_explode_string(not_null(p_35));
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
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, b_2);
            ;
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            {
              ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
              y_35 = t;
              x_35 :
              if(match_cons(y_35, sym_Path_1))
                {
                  z_35 = ATgetArgument(y_35, 0);
                  t = not_null(z_35);
                }
              else
                {
                  if(match_cons(y_35, sym_Var_1))
                    {
                      z_35 = ATgetArgument(y_35, 0);
                      {
                        t = not_null(z_35);
                        {
                          ATerm t_11 = t;
                          int u_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(u_11);
                            }
                          else
                            {
                              t = t_11;
                              {
                                ATerm c_2 (ATerm t)
                                {
                                  t = term_z_11;
                                  return(t);
                                }
                                t = debug_1(t, c_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(y_35, sym_Prefix_2))
                        {
                          z_35 = ATgetArgument(y_35, 0);
                          a_36 = ATgetArgument(y_35, 1);
                          {
                            ATerm f_36 = NULL,h_36 = NULL;
                            ATerm a_12;
                            a_12 = t;
                            {
                              ATerm g_36 = NULL;
                              t = not_null(z_35);
                              {
                                t = eval_config_0(t);
                                {
                                  g_36 = t;
                                  if(((f_36 != NULL) && (f_36 != g_36)))
                                    _fail(g_36);
                                  else
                                    f_36 = g_36;
                                }
                              }
                            }
                            t = a_12;
                            {
                              ATerm i_36 = NULL;
                              t = not_null(a_36);
                              {
                                t = eval_config_0(t);
                                {
                                  i_36 = t;
                                  if(((h_36 != NULL) && (h_36 != i_36)))
                                    _fail(i_36);
                                  else
                                    h_36 = i_36;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_36), not_null(h_36));
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
  ATerm r_36 = NULL;
  r_36 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_b_12, not_null(r_36));
    {
      t = table_get_0(t);
      {
        ATerm d_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm f_12;
            f_12 = t;
            {
              ATerm t_36 = NULL;
              ATerm u_36 = NULL;
              u_36 = t;
              if(((t_36 != NULL) && (t_36 != u_36)))
                _fail(u_36);
              else
                t_36 = u_36;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_b_12, not_null(r_36), not_null(t_36));
                t = table_put_0(t);
              }
            }
            t = f_12;
          }
          return(t);
        }
        t = try_1(t, d_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm v_96 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    ATerm h_12;
    h_12 = t;
    {
      ATerm y_36 = NULL;
      ATerm z_36 = NULL;
      t = term_k_12;
      {
        t = get_config_0(t);
        {
          z_36 = t;
          if(((y_36 != NULL) && (y_36 != z_36)))
            _fail(z_36);
          else
            y_36 = z_36;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_36), term_l_12);
        t = geq_0(t);
      }
    }
    t = h_12;
    t = v_96(t);
    return(t);
  }
  t = try_1(t, e_2);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL;
  f_37 = t;
  d_37 :
  if(match_cons(f_37, sym__2))
    {
      g_37 = ATgetArgument(f_37, 0);
      h_37 = ATgetArgument(f_37, 1);
      e_37 :
      if(match_cons(h_37, sym_Stream_1))
        {
          i_37 = ATgetArgument(h_37, 0);
          {
            ATerm l_37 = NULL;
            t = SSL_fputc(not_null(g_37), not_null(i_37));
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
ATerm write_in_text_to_stream_0 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL;
  v_37 = t;
  r_37 :
  if(match_cons(v_37, sym__2))
    {
      w_37 = ATgetArgument(v_37, 0);
      y_37 = ATgetArgument(v_37, 1);
      u_37 :
      if(match_cons(w_37, sym_Stream_1))
        {
          x_37 = ATgetArgument(w_37, 0);
          {
            ATerm b_38 = NULL;
            t = SSL_write_term_to_stream_text(not_null(x_37), not_null(y_37));
            {
              ATerm c_38 = NULL;
              c_38 = t;
              if(((b_38 != NULL) && (b_38 != c_38)))
                _fail(c_38);
              else
                b_38 = c_38;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_38));
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
  ATerm f_2 (ATerm t)
  {
    ATerm g_38 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm h_38 = NULL;
      h_38 = t;
      if(((g_38 != NULL) && (g_38 != h_38)))
        _fail(h_38);
      else
        g_38 = h_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_12, not_null(g_38));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, f_2);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL;
  n_38 = t;
  l_38 :
  if(match_cons(n_38, sym__2))
    {
      o_38 = ATgetArgument(n_38, 0);
      q_38 = ATgetArgument(n_38, 1);
      m_38 :
      if(match_cons(o_38, sym_Stream_1))
        {
          p_38 = ATgetArgument(o_38, 0);
          {
            ATerm t_38 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(p_38), not_null(q_38));
            {
              ATerm u_38 = NULL;
              u_38 = t;
              if(((t_38 != NULL) && (t_38 != u_38)))
                _fail(u_38);
              else
                t_38 = u_38;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_38));
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
ATerm WriteToFile_1 (ATerm t, ATerm r_95 (ATerm))
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL;
  b_39 = t;
  a_39 :
  if(match_cons(b_39, sym__2))
    {
      c_39 = ATgetArgument(b_39, 0);
      d_39 = ATgetArgument(b_39, 1);
      {
        ATerm g_39 = NULL,i_39 = NULL;
        t = not_null(c_39);
        {
          ATerm h_39 = NULL;
          h_39 = t;
          if(((g_39 != NULL) && (g_39 != h_39)))
            _fail(h_39);
          else
            g_39 = h_39;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_39), term_n_12);
            {
              t = open_stream_0(t);
              {
                ATerm j_39 = NULL;
                j_39 = t;
                if(((i_39 != NULL) && (i_39 != j_39)))
                  _fail(j_39);
                else
                  i_39 = j_39;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_39), not_null(d_39));
                  {
                    t = r_95(t);
                    {
                      t = fclose_0(t);
                      t = not_null(d_39);
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
  ATerm r_39 = NULL;
  ATerm o_12;
  o_12 = t;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm p_12 = t;
      int q_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_2 (ATerm t)
          {
            ATerm t_39 = NULL,u_39 = NULL;
            t_39 = t;
            o_39 :
            if(match_cons(t_39, sym_Output_1))
              {
                u_39 = ATgetArgument(t_39, 0);
                if(((r_39 != NULL) && (r_39 != u_39)))
                  _fail(u_39);
                else
                  r_39 = u_39;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, h_2);
          ;
          LocalPopChoice(q_12);
        }
      else
        {
          t = p_12;
          {
            ATerm v_39 = NULL;
            t = term_r_12;
            {
              v_39 = t;
              if(((r_39 != NULL) && (r_39 != v_39)))
                _fail(v_39);
              else
                r_39 = v_39;
            }
          }
        }
      return(t);
    }
    t = _2(t, g_2, _id);
  }
  t = o_12;
  {
    ATerm i_2 (ATerm t)
    {
      ATerm j_2 (ATerm t)
      {
        t = not_null(r_39);
        return(t);
      }
      t = split_2(t, j_2, _id);
      return(t);
    }
    t = _2(t, _id, i_2);
    {
      ATerm s_12 = t;
      int t_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_2 (ATerm t)
          {
            ATerm l_2 (ATerm t)
            {
              ATerm w_39 = NULL;
              w_39 = t;
              q_39 :
              if(!(match_cons(w_39, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, l_2);
            return(t);
          }
          t = _2(t, k_2, WriteToBinaryFile_0);
          ;
          LocalPopChoice(t_12);
        }
      else
        {
          t = s_12;
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
ATerm apply_strategy_1 (ATerm t, ATerm t_98 (ATerm))
{
  ATerm e_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL;
  ATerm u_12;
  u_12 = t;
  t = dtime_0(t);
  t = u_12;
  {
    t = t_98(t);
    {
      ATerm a_13;
      a_13 = t;
      {
        ATerm f_40 = NULL;
        t = dtime_0(t);
        {
          f_40 = t;
          if(((e_40 != NULL) && (e_40 != f_40)))
            _fail(f_40);
          else
            e_40 = f_40;
        }
      }
      t = a_13;
      {
        g_40 = t;
        d_40 :
        if(match_cons(g_40, sym__2))
          {
            h_40 = ATgetArgument(g_40, 0);
            i_40 = ATgetArgument(g_40, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_40)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(e_40))), not_null(i_40));
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
  ATerm q_40 = NULL,r_40 = NULL;
  ATerm z_40 (ATerm t)
  {
    t = SSL_fclose(not_null(r_40));
    return(t);
  }
  r_40 = t;
  p_40 :
  if(match_cons(r_40, sym_Stream_1))
    {
      q_40 = ATgetArgument(r_40, 0);
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(q_40));
            ;
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            t = z_40(t);
          }
      }
    }
  else
    {
      t = z_40(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm c_41 = NULL,e_41 = NULL;
  c_41 = t;
  b_41 :
  if(match_cons(c_41, sym_Stream_1))
    {
      e_41 = ATgetArgument(c_41, 0);
      t = SSL_read_term_from_stream(not_null(e_41));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm d_95 (ATerm))
{
  ATerm d_13;
  d_13 = t;
  {
    ATerm j_41 = NULL,l_41 = NULL;
    ATerm h_13;
    h_13 = t;
    {
      ATerm k_41 = NULL;
      t = d_95(t);
      {
        k_41 = t;
        if(((j_41 != NULL) && (j_41 != k_41)))
          _fail(k_41);
        else
          j_41 = k_41;
      }
    }
    t = h_13;
    {
      ATerm m_41 = NULL;
      m_41 = t;
      if(((l_41 != NULL) && (l_41 != m_41)))
        _fail(m_41);
      else
        l_41 = m_41;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_41)), not_null(j_41)));
        t = printnl_0(t);
      }
    }
  }
  t = d_13;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL;
  s_41 = t;
  r_41 :
  if(match_cons(s_41, sym__2))
    {
      t_41 = ATgetArgument(s_41, 0);
      u_41 = ATgetArgument(s_41, 1);
      {
        ATerm x_41 = NULL;
        t = SSL_fopen(not_null(t_41), not_null(u_41));
        {
          ATerm y_41 = NULL;
          y_41 = t;
          if(((x_41 != NULL) && (x_41 != y_41)))
            _fail(y_41);
          else
            x_41 = y_41;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_41));
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
  ATerm c_42 = NULL;
  c_42 = t;
  t = SSL_is_string(not_null(c_42));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm g_42 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm h_42 = NULL;
    h_42 = t;
    if(((g_42 != NULL) && (g_42 != h_42)))
      _fail(h_42);
    else
      g_42 = h_42;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_42));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm k_42 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm l_42 = NULL;
    l_42 = t;
    if(((k_42 != NULL) && (k_42 != l_42)))
      _fail(l_42);
    else
      k_42 = l_42;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_42));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm o_42 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm p_42 = NULL;
    p_42 = t;
    if(((o_42 != NULL) && (o_42 != p_42)))
      _fail(p_42);
    else
      o_42 = p_42;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_42));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm v_42 = NULL;
  v_42 = t;
  u_42 :
  if(match_cons(v_42, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(v_42, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(v_42, sym_stdin_0))
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
  ATerm f_43 = NULL;
  ATerm h_43 = NULL,i_43 = NULL;
  f_43 = t;
  {
    ATerm j_43 = NULL;
    ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL;
    t = not_null(f_43);
    {
      j_43 = t;
      {
        t = SSL_explode_term(not_null(j_43));
        {
          l_43 = t;
          c_43 :
          if(match_cons(l_43, sym__2))
            {
              m_43 = ATgetArgument(l_43, 0);
              n_43 = ATgetArgument(l_43, 1);
              d_43 :
              if(match_string(m_43, ""))
                {
                  e_43 :
                  if(((ATgetType(n_43) == AT_LIST) && !(ATisEmpty(n_43))))
                    {
                      o_43 = ATgetFirst((ATermList) n_43);
                      p_43 = (ATerm) ATgetNext((ATermList) n_43);
                      {
                        if(((i_43 != NULL) && (i_43 != o_43)))
                          _fail(o_43);
                        else
                          i_43 = o_43;
                        if(((h_43 != NULL) && (h_43 != p_43)))
                          _fail(p_43);
                        else
                          h_43 = p_43;
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
    t = not_null(i_43);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
  x_43 = t;
  w_43 :
  if(match_cons(x_43, sym__2))
    {
      y_43 = ATgetArgument(x_43, 0);
      z_43 = ATgetArgument(x_43, 1);
      {
        ATerm j_13 = t;
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
            t = j_13;
            {
              ATerm o_13 = t;
              int p_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_2 (ATerm t)
                  {
                    ATerm a_44 = NULL,b_44 = NULL;
                    a_44 = t;
                    v_43 :
                    if(match_cons(a_44, sym_Path_1))
                      {
                        b_44 = ATgetArgument(a_44, 0);
                        t = not_null(b_44);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, m_2, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(p_13);
                }
              else
                {
                  t = o_13;
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
  ATerm j_44 = NULL;
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_44 = NULL;
      ATerm i_44 = NULL;
      i_44 = t;
      if(((h_44 != NULL) && (h_44 != i_44)))
        _fail(i_44);
      else
        h_44 = i_44;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_44), term_s_13);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      {
        ATerm n_2 (ATerm t)
        {
          t = term_t_13;
          return(t);
        }
        t = debug_1(t, n_2);
        _fail(t);
      }
    }
  {
    ATerm u_13;
    u_13 = t;
    {
      ATerm k_44 = NULL;
      t = read_from_stream_0(t);
      {
        k_44 = t;
        if(((j_44 != NULL) && (j_44 != k_44)))
          _fail(k_44);
        else
          j_44 = k_44;
      }
    }
    t = u_13;
    {
      t = fclose_0(t);
      t = not_null(j_44);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_78 (ATerm), ATerm w_78 (ATerm))
{
  ATerm p_44 = NULL,r_44 = NULL;
  ATerm v_13;
  v_13 = t;
  {
    ATerm q_44 = NULL;
    t = v_78(t);
    {
      q_44 = t;
      if(((p_44 != NULL) && (p_44 != q_44)))
        _fail(q_44);
      else
        p_44 = q_44;
    }
  }
  t = v_13;
  {
    ATerm s_44 = NULL;
    t = w_78(t);
    {
      s_44 = t;
      if(((r_44 != NULL) && (r_44 != s_44)))
        _fail(s_44);
      else
        r_44 = s_44;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_44), not_null(r_44));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm y_44 = NULL;
  ATerm a_14;
  a_14 = t;
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_2 (ATerm t)
        {
          ATerm z_44 = NULL,a_45 = NULL;
          z_44 = t;
          w_44 :
          if(match_cons(z_44, sym_Input_1))
            {
              a_45 = ATgetArgument(z_44, 0);
              if(((y_44 != NULL) && (y_44 != a_45)))
                _fail(a_45);
              else
                y_44 = a_45;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, o_2);
        ;
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        {
          ATerm b_45 = NULL;
          t = term_d_14;
          {
            b_45 = t;
            if(((y_44 != NULL) && (y_44 != b_45)))
              _fail(b_45);
            else
              y_44 = b_45;
          }
        }
      }
  }
  t = a_14;
  {
    ATerm p_2 (ATerm t)
    {
      t = not_null(y_44);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, p_2);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm g_45 = NULL;
    g_45 = t;
    e_45 :
    if(!(match_string(g_45, "-k")))
      {
        if(!(match_string(g_45, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm e_14;
    e_14 = t;
    {
      ATerm h_45 = NULL;
      ATerm i_45 = NULL;
      t = string_to_int_0(t);
      {
        i_45 = t;
        if(((h_45 != NULL) && (h_45 != i_45)))
          _fail(i_45);
        else
          h_45 = i_45;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_14, not_null(h_45));
        t = set_config_0(t);
      }
    }
    t = e_14;
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = term_g_14;
    return(t);
  }
  t = ArgOption_3(t, q_2, r_2, s_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm l_45 = NULL;
  l_45 = t;
  t = SSL_string_to_int(not_null(l_45));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm h_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_2 (ATerm t)
      {
        ATerm t_45 = NULL;
        t_45 = t;
        o_45 :
        if(!(match_string(t_45, "-S")))
          {
            if(!(match_string(t_45, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm u_2 (ATerm t)
      {
        t = term_q_14;
        t = set_config_0(t);
        t = term_r_14;
        return(t);
      }
      ATerm v_2 (ATerm t)
      {
        t = term_s_14;
        return(t);
      }
      t = Option_3(t, t_2, u_2, v_2);
      ;
      LocalPopChoice(i_14);
    }
  else
    {
      t = h_14;
      {
        ATerm t_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_2 (ATerm t)
            {
              ATerm u_45 = NULL;
              u_45 = t;
              p_45 :
              if(!(match_string(u_45, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm x_2 (ATerm t)
            {
              ATerm x_45 = NULL;
              ATerm z_14;
              z_14 = t;
              {
                ATerm v_45 = NULL;
                ATerm w_45 = NULL;
                t = string_to_int_0(t);
                {
                  w_45 = t;
                  if(((v_45 != NULL) && (v_45 != w_45)))
                    _fail(w_45);
                  else
                    v_45 = w_45;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_12, not_null(v_45));
                  t = set_config_0(t);
                }
              }
              t = z_14;
              {
                ATerm y_45 = NULL;
                y_45 = t;
                if(((x_45 != NULL) && (x_45 != y_45)))
                  _fail(y_45);
                else
                  x_45 = y_45;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(x_45));
              }
              return(t);
            }
            ATerm y_2 (ATerm t)
            {
              t = term_b_15;
              return(t);
            }
            t = ArgOption_3(t, w_2, x_2, y_2);
            ;
            LocalPopChoice(x_14);
          }
        else
          {
            t = t_14;
            {
              ATerm z_2 (ATerm t)
              {
                ATerm z_45 = NULL;
                z_45 = t;
                s_45 :
                if(!(match_string(z_45, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm a_3 (ATerm t)
              {
                t = term_g_15;
                t = set_config_0(t);
                t = term_h_15;
                return(t);
              }
              ATerm b_3 (ATerm t)
              {
                t = term_i_15;
                return(t);
              }
              t = Option_3(t, z_2, a_3, b_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm j_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(k_15);
    }
  else
    {
      t = j_15;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm f_46 = NULL;
    f_46 = t;
    c_46 :
    if(!(match_string(f_46, "-o")))
      {
        if(!(match_string(f_46, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    ATerm i_46 = NULL;
    ATerm l_15;
    l_15 = t;
    {
      ATerm g_46 = NULL;
      ATerm h_46 = NULL;
      h_46 = t;
      if(((g_46 != NULL) && (g_46 != h_46)))
        _fail(h_46);
      else
        g_46 = h_46;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_15, not_null(g_46));
        t = set_config_0(t);
      }
    }
    t = l_15;
    {
      ATerm j_46 = NULL;
      j_46 = t;
      if(((i_46 != NULL) && (i_46 != j_46)))
        _fail(j_46);
      else
        i_46 = j_46;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(i_46));
    }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_n_15;
    return(t);
  }
  t = ArgOption_3(t, c_3, d_3, e_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm o_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(w_15);
    }
  else
    {
      t = o_15;
      {
        ATerm f_3 (ATerm t)
        {
          ATerm n_46 = NULL;
          n_46 = t;
          m_46 :
          if(!(match_string(n_46, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm g_3 (ATerm t)
        {
          t = term_b_16;
          t = set_config_0(t);
          t = term_c_16;
          return(t);
        }
        ATerm h_3 (ATerm t)
        {
          t = term_e_16;
          return(t);
        }
        t = Option_3(t, f_3, g_3, h_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL;
  w_46 = t;
  u_46 :
  if(match_string(w_46, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(w_46) == AT_LIST) && !(ATisEmpty(w_46))))
        {
          x_46 = ATgetFirst((ATermList) w_46);
          y_46 = (ATerm) ATgetNext((ATermList) w_46);
          v_46 :
          if(((ATgetType(y_46) == AT_LIST) && !(ATisEmpty(y_46))))
            {
              z_46 = ATgetFirst((ATermList) y_46);
              a_47 = (ATerm) ATgetNext((ATermList) y_46);
              {
                ATerm e_47 = NULL;
                ATerm j_16;
                j_16 = t;
                {
                  t = not_null(x_46);
                  t = k_0(t);
                }
                t = j_16;
                {
                  ATerm f_47 = NULL;
                  t = not_null(z_46);
                  {
                    t = m_0(t);
                    {
                      f_47 = t;
                      if(((e_47 != NULL) && (e_47 != f_47)))
                        _fail(f_47);
                      else
                        e_47 = f_47;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_47)), not_null(e_47));
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
  ATerm i_3 (ATerm t)
  {
    ATerm m_47 = NULL;
    m_47 = t;
    j_47 :
    if(!(match_string(m_47, "-i")))
      {
        if(!(match_string(m_47, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    ATerm p_47 = NULL;
    ATerm k_16;
    k_16 = t;
    {
      ATerm n_47 = NULL;
      ATerm o_47 = NULL;
      o_47 = t;
      if(((n_47 != NULL) && (n_47 != o_47)))
        _fail(o_47);
      else
        n_47 = o_47;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_16, not_null(n_47));
        t = set_config_0(t);
      }
    }
    t = k_16;
    {
      ATerm q_47 = NULL;
      q_47 = t;
      if(((p_47 != NULL) && (p_47 != q_47)))
        _fail(q_47);
      else
        p_47 = q_47;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_47));
    }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = term_r_16;
    return(t);
  }
  t = ArgOption_3(t, i_3, j_3, k_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm s_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(w_16);
    }
  else
    {
      t = s_16;
      {
        ATerm x_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(y_16);
          }
        else
          {
            t = x_16;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm u_47 = NULL;
  t = report_run_time_0(t);
  {
    ATerm v_47 = NULL;
    t = term_q_7;
    {
      t = whoami_0(t);
      {
        v_47 = t;
        if(((u_47 != NULL) && (u_47 != v_47)))
          _fail(v_47);
        else
          u_47 = v_47;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATinsert(ATempty, term_z_16), not_null(u_47)));
      {
        t = printnl_0(t);
        {
          t = term_d_11;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_a_17;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm y_47 = NULL;
  y_47 = t;
  t = SSL_TicksToSeconds(not_null(y_47));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL;
  d_48 = t;
  c_48 :
  if(match_cons(d_48, sym__2))
    {
      e_48 = ATgetArgument(d_48, 0);
      f_48 = ATgetArgument(d_48, 1);
      {
        ATerm c_17 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(e_48), not_null(f_48));
            ;
            LocalPopChoice(d_17);
          }
        else
          {
            t = c_17;
            t = SSL_addr(not_null(e_48), not_null(f_48));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm j_86 (ATerm), ATerm k_86 (ATerm))
{
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_86(t);
      ;
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      {
        ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL;
        m_48 = t;
        l_48 :
        if(((ATgetType(m_48) == AT_LIST) && !(ATisEmpty(m_48))))
          {
            n_48 = ATgetFirst((ATermList) m_48);
            o_48 = (ATerm) ATgetNext((ATermList) m_48);
            {
              ATerm x_48 = NULL;
              ATerm y_48 = NULL;
              t = not_null(o_48);
              {
                t = foldr_2(t, j_86, k_86);
                {
                  y_48 = t;
                  if(((x_48 != NULL) && (x_48 != y_48)))
                    _fail(y_48);
                  else
                    x_48 = y_48;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_48), not_null(x_48));
                t = k_86(t);
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
ATerm crush_2 (ATerm t, ATerm h_84 (ATerm), ATerm i_84 (ATerm))
{
  ATerm f_49 = NULL;
  ATerm h_49 = NULL;
  f_49 = t;
  {
    ATerm i_49 = NULL;
    ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL;
    t = not_null(f_49);
    {
      i_49 = t;
      {
        t = SSL_explode_term(not_null(i_49));
        {
          k_49 = t;
          e_49 :
          if(match_cons(k_49, sym__2))
            {
              l_49 = ATgetArgument(k_49, 0);
              m_49 = ATgetArgument(k_49, 1);
              if(((h_49 != NULL) && (h_49 != m_49)))
                _fail(m_49);
              else
                h_49 = m_49;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_49);
      t = foldr_2(t, h_84, i_84);
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
    ATerm l_3 (ATerm t)
    {
      t = term_p_14;
      return(t);
    }
    t = crush_2(t, l_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL;
  s_49 = t;
  r_49 :
  if(match_cons(s_49, sym__2))
    {
      t_49 = ATgetArgument(s_49, 0);
      u_49 = ATgetArgument(s_49, 1);
      {
        ATerm g_17;
        g_17 = t;
        {
          ATerm h_17 = t;
          int i_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_49), not_null(u_49));
              ;
              LocalPopChoice(i_17);
            }
          else
            {
              t = h_17;
              t = SSL_gtr(not_null(t_49), not_null(u_49));
            }
        }
        t = g_17;
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
  ATerm a_50 = NULL;
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
      b_50 = t;
      z_49 :
      if(match_cons(b_50, sym__2))
        {
          c_50 = ATgetArgument(b_50, 0);
          d_50 = ATgetArgument(b_50, 1);
          {
            if(((a_50 != NULL) && (a_50 != c_50)))
              _fail(c_50);
            else
              a_50 = c_50;
            if(((a_50 != NULL) && (a_50 != d_50)))
              _fail(d_50);
            else
              a_50 = d_50;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm u_96 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm p_17;
    p_17 = t;
    {
      ATerm g_50 = NULL;
      ATerm h_50 = NULL;
      t = term_k_12;
      {
        t = get_config_0(t);
        {
          h_50 = t;
          if(((g_50 != NULL) && (g_50 != h_50)))
            _fail(h_50);
          else
            g_50 = h_50;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_50), term_d_11);
        t = geq_0(t);
      }
    }
    t = p_17;
    t = u_96(t);
    return(t);
  }
  t = try_1(t, m_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm l_50 = NULL,n_50 = NULL;
    ATerm t_17;
    t_17 = t;
    {
      ATerm m_50 = NULL;
      t = run_time_0(t);
      {
        m_50 = t;
        if(((l_50 != NULL) && (l_50 != m_50)))
          _fail(m_50);
        else
          l_50 = m_50;
      }
    }
    t = t_17;
    {
      ATerm o_50 = NULL;
      t = term_q_7;
      {
        t = whoami_0(t);
        {
          o_50 = t;
          if(((n_50 != NULL) && (n_50 != o_50)))
            _fail(o_50);
          else
            n_50 = o_50;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_17), not_null(l_50)), term_v_17), not_null(n_50)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, n_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_p_14;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm v_50 = NULL;
  v_50 = t;
  u_50 :
  if(match_cons(v_50, sym_Version_0))
    {
      ATerm x_50 = NULL,z_50 = NULL;
      ATerm z_17;
      z_17 = t;
      {
        ATerm y_50 = NULL;
        t = SSLgetAnnotations(not_null(v_50));
        {
          y_50 = t;
          if(((x_50 != NULL) && (x_50 != y_50)))
            _fail(y_50);
          else
            x_50 = y_50;
        }
      }
      t = z_17;
      {
        ATerm a_51 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(x_50));
        {
          a_51 = t;
          if(((z_50 != NULL) && (z_50 != a_51)))
            _fail(a_51);
          else
            z_50 = a_51;
        }
        t = not_null(z_50);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_99 (ATerm))
{
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_18;
      t = get_config_0(t);
      ;
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
      {
        ATerm o_3 (ATerm t)
        {
          ATerm d_18 = t;
          int f_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(f_18);
            }
          else
            {
              t = d_18;
              {
                ATerm g_18 = t;
                int h_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(h_18);
                  }
                else
                  {
                    t = g_18;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, o_3);
      }
    }
  t = r_99(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_51 = NULL;
  f_51 = t;
  t = SSL_table_create(not_null(f_51));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_51 = NULL;
  j_51 = t;
  {
    ATerm i_18;
    i_18 = t;
    {
      t = term_j_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_18, term_l_18, not_null(j_51));
          t = table_put_0(t);
        }
      }
    }
    t = i_18;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm n_51 = NULL;
  n_51 = t;
  t = SSL_table_destroy(not_null(n_51));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_51 = NULL;
  r_51 = t;
  t = SSL_exit(not_null(r_51));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm s_101 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm t_79 (ATerm))
{
  ATerm u_51 (ATerm t)
  {
    ATerm n_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(q_18);
      }
    else
      {
        t = n_18;
        t = Cons_2(t, t_79, u_51);
      }
    return(t);
  }
  t = u_51(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
  m_52 = t;
  e_52 :
  if(((ATgetType(m_52) == AT_LIST) && !(ATisEmpty(m_52))))
    {
      k_52 = ATgetFirst((ATermList) m_52);
      l_52 = (ATerm) ATgetNext((ATermList) m_52);
      {
        ATerm p_52 = NULL;
        t = not_null(l_52);
        {
          ATerm r_18;
          r_18 = t;
          {
            ATerm q_52 = NULL,s_52 = NULL,u_52 = NULL;
            ATerm s_18;
            s_18 = t;
            {
              ATerm r_52 = NULL;
              t = i_0(t);
              {
                r_52 = t;
                if(((q_52 != NULL) && (q_52 != r_52)))
                  _fail(r_52);
                else
                  q_52 = r_52;
              }
            }
            t = s_18;
            {
              ATerm t_52 = NULL;
              t = not_null(k_52);
              {
                t = g_0(t);
                {
                  t_52 = t;
                  if(((s_52 != NULL) && (s_52 != t_52)))
                    _fail(t_52);
                  else
                    s_52 = t_52;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(q_52)), not_null(s_52));
                {
                  u_52 = t;
                  if(((p_52 != NULL) && (p_52 != u_52)))
                    _fail(u_52);
                  else
                    p_52 = u_52;
                }
              }
            }
          }
          t = r_18;
          {
            ATerm p_3 (ATerm t)
            {
              t = not_null(p_52);
              return(t);
            }
            t = reverse_acc_2(t, g_0, p_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(m_52) == AT_LIST) && ATisEmpty(m_52)))
        {
          {
            t = term_q_7;
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
  ATerm q_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm r_101 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm i_75 (ATerm))
{
  ATerm f_53 = NULL,g_53 = NULL;
  f_53 = t;
  e_53 :
  if(match_cons(f_53, sym_Program_1))
    {
      g_53 = ATgetArgument(f_53, 0);
      {
        ATerm l_53 = NULL,n_53 = NULL;
        ATerm m_53 = NULL;
        t = SSLgetAnnotations(not_null(f_53));
        {
          m_53 = t;
          if(((l_53 != NULL) && (l_53 != m_53)))
            _fail(m_53);
          else
            l_53 = m_53;
        }
        {
          t = not_null(g_53);
          {
            ATerm p_53 = NULL;
            t = i_75(t);
            {
              n_53 = t;
              {
                ATerm q_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(n_53)), not_null(l_53));
                {
                  q_53 = t;
                  if(((p_53 != NULL) && (p_53 != q_53)))
                    _fail(q_53);
                  else
                    p_53 = q_53;
                }
                t = not_null(p_53);
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
  ATerm e_54 = NULL;
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_54 = NULL;
      t = term_a_17;
      {
        t = get_config_0(t);
        {
          f_54 = t;
          if(((e_54 != NULL) && (e_54 != f_54)))
            _fail(f_54);
          else
            e_54 = f_54;
        }
      }
      ;
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      {
        ATerm r_3 (ATerm t)
        {
          ATerm s_3 (ATerm t)
          {
            ATerm g_54 = NULL;
            g_54 = t;
            if(((e_54 != NULL) && (e_54 != g_54)))
              _fail(g_54);
            else
              e_54 = g_54;
            return(t);
          }
          t = Program_1(t, s_3);
          return(t);
        }
        t = option_defined_1(t, r_3);
      }
    }
  {
    ATerm t_3 (ATerm t)
    {
      ATerm u_3 (ATerm t)
      {
        t = not_null(e_54);
        return(t);
      }
      t = short_description_1(t, u_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, t_3);
    {
      t = term_k_19;
      {
        t = echo_0(t);
        {
          t = term_s_19;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm v_3 (ATerm t)
                {
                  ATerm h_54 = NULL;
                  ATerm i_54 = NULL;
                  i_54 = t;
                  if(((h_54 != NULL) && (h_54 != i_54)))
                    _fail(i_54);
                  else
                    h_54 = i_54;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_54)), term_t_19);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, v_3);
                {
                  ATerm w_3 (ATerm t)
                  {
                    ATerm j_54 = NULL;
                    ATerm l_54 = NULL;
                    ATerm x_3 (ATerm t)
                    {
                      t = not_null(e_54);
                      return(t);
                    }
                    t = long_description_1(t, x_3);
                    {
                      l_54 = t;
                      if(((j_54 != NULL) && (j_54 != l_54)))
                        _fail(l_54);
                      else
                        j_54 = l_54;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(j_54)), term_u_19);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, w_3);
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
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(a_20);
    }
  else
    {
      t = z_19;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm j_75 (ATerm))
{
  ATerm v_54 = NULL,w_54 = NULL;
  v_54 = t;
  u_54 :
  if(match_cons(v_54, sym_Undefined_1))
    {
      w_54 = ATgetArgument(v_54, 0);
      {
        ATerm z_54 = NULL,h_55 = NULL;
        ATerm g_55 = NULL;
        t = SSLgetAnnotations(not_null(v_54));
        {
          g_55 = t;
          if(((z_54 != NULL) && (z_54 != g_55)))
            _fail(g_55);
          else
            z_54 = g_55;
        }
        {
          t = not_null(w_54);
          {
            ATerm k_55 = NULL;
            t = j_75(t);
            {
              h_55 = t;
              {
                ATerm l_55 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(h_55)), not_null(z_54));
                {
                  l_55 = t;
                  if(((k_55 != NULL) && (k_55 != l_55)))
                    _fail(l_55);
                  else
                    k_55 = l_55;
                }
                t = not_null(k_55);
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
ATerm fetch_1 (ATerm t, ATerm d_80 (ATerm))
{
  ATerm q_55 (ATerm t)
  {
    ATerm b_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_80, _id);
        ;
        LocalPopChoice(g_20);
      }
    else
      {
        t = b_20;
        t = Cons_2(t, _id, q_55);
      }
    return(t);
  }
  t = q_55(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_100 (ATerm))
{
  t = fetch_1(t, r_100);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL;
  s_55 = t;
  r_55 :
  if(((ATgetType(s_55) == AT_LIST) && ATisEmpty(s_55)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(s_55) == AT_LIST) && !(ATisEmpty(s_55))))
        {
          t_55 = ATgetFirst((ATermList) s_55);
          u_55 = (ATerm) ATgetNext((ATermList) s_55);
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
  ATerm h_20;
  h_20 = t;
  {
    ATerm x_55 = NULL;
    ATerm a_56 = NULL;
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(j_20);
      }
    else
      {
        t = i_20;
        {
          ATerm y_55 = NULL;
          ATerm z_55 = NULL;
          z_55 = t;
          if(((y_55 != NULL) && (y_55 != z_55)))
            _fail(z_55);
          else
            y_55 = z_55;
          t = (ATerm) ATinsert(ATempty, not_null(y_55));
        }
      }
    {
      a_56 = t;
      if(((x_55 != NULL) && (x_55 != a_56)))
        _fail(a_56);
      else
        x_55 = a_56;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_12, not_null(x_55));
      t = printnl_0(t);
    }
  }
  t = h_20;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_a_17;
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
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_56 = NULL;
  h_56 = t;
  g_56 :
  if(match_cons(h_56, sym_Help_0))
    {
      ATerm j_56 = NULL,l_56 = NULL;
      ATerm s_20;
      s_20 = t;
      {
        ATerm k_56 = NULL;
        t = SSLgetAnnotations(not_null(h_56));
        {
          k_56 = t;
          if(((j_56 != NULL) && (j_56 != k_56)))
            _fail(k_56);
          else
            j_56 = k_56;
        }
      }
      t = s_20;
      {
        ATerm m_56 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(j_56));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm a_88 (ATerm))
{
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_88(t);
      ;
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_3 (ATerm t)
      {
        ATerm s_56 = NULL;
        s_56 = t;
        q_56 :
        if(!(match_string(s_56, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm z_3 (ATerm t)
      {
        t = term_h_21;
        t = set_config_0(t);
        return(t);
      }
      ATerm a_4 (ATerm t)
      {
        t = term_i_21;
        return(t);
      }
      t = Option_3(t, y_3, z_3, a_4);
      ;
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      {
        ATerm b_4 (ATerm t)
        {
          ATerm t_56 = NULL;
          t_56 = t;
          r_56 :
          if(!(match_string(t_56, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm c_4 (ATerm t)
        {
          t = term_h_21;
          {
            t = set_config_0(t);
            {
              t = term_k_21;
              t = set_config_0(t);
            }
          }
          t = term_l_21;
          return(t);
        }
        ATerm d_4 (ATerm t)
        {
          t = term_q_21;
          return(t);
        }
        t = Option_3(t, b_4, c_4, d_4);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
  w_56 = t;
  v_56 :
  if(match_cons(w_56, sym__2))
    {
      x_56 = ATgetArgument(w_56, 0);
      y_56 = ATgetArgument(w_56, 1);
      t = SSL_table_get(not_null(x_56), not_null(y_56));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL;
  f_57 = t;
  e_57 :
  if(match_cons(f_57, sym__3))
    {
      g_57 = ATgetArgument(f_57, 0);
      h_57 = ATgetArgument(f_57, 1);
      i_57 = ATgetArgument(f_57, 2);
      {
        ATerm r_21;
        r_21 = t;
        {
          ATerm m_57 = NULL;
          ATerm n_57 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_57), not_null(h_57));
          {
            ATerm s_21 = t;
            int t_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(t_21);
              }
            else
              {
                t = s_21;
                t = (ATerm) ATempty;
              }
            {
              n_57 = t;
              if(((m_57 != NULL) && (m_57 != n_57)))
                _fail(n_57);
              else
                m_57 = n_57;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_57), not_null(h_57), (ATerm) ATinsert(CheckATermList(not_null(m_57)), not_null(i_57)));
            t = table_put_0(t);
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
ATerm register_usage_1 (ATerm t, ATerm w_101 (ATerm))
{
  ATerm w_57 = NULL;
  ATerm x_57 = NULL;
  t = term_q_7;
  {
    t = w_101(t);
    {
      x_57 = t;
      if(((w_57 != NULL) && (w_57 != x_57)))
        _fail(x_57);
      else
        w_57 = x_57;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_l_19, term_r_19, not_null(w_57));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL;
  h_58 = t;
  c_58 :
  if(match_string(h_58, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(h_58) == AT_LIST) && !(ATisEmpty(h_58))))
        {
          i_58 = ATgetFirst((ATermList) h_58);
          j_58 = (ATerm) ATgetNext((ATermList) h_58);
          {
            ATerm m_58 = NULL;
            ATerm u_21;
            u_21 = t;
            {
              t = not_null(i_58);
              t = a_0(t);
            }
            t = u_21;
            {
              ATerm n_58 = NULL;
              t = term_q_7;
              {
                t = b_0(t);
                {
                  n_58 = t;
                  if(((m_58 != NULL) && (m_58 != n_58)))
                    _fail(n_58);
                  else
                    m_58 = n_58;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(j_58)), not_null(m_58));
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
  ATerm e_4 (ATerm t)
  {
    ATerm s_58 = NULL;
    s_58 = t;
    r_58 :
    if(!(match_string(s_58, "--help")))
      {
        if(!(match_string(s_58, "-h")))
          {
            if(!(match_string(s_58, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = term_v_21;
    {
      t = set_config_0(t);
      t = term_w_21;
    }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = term_b_22;
    return(t);
  }
  t = Option_3(t, e_4, f_4, g_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL;
  v_58 = t;
  u_58 :
  if(((ATgetType(v_58) == AT_LIST) && !(ATisEmpty(v_58))))
    {
      w_58 = ATgetFirst((ATermList) v_58);
      x_58 = (ATerm) ATgetNext((ATermList) v_58);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_58)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_58)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_62 (ATerm), ATerm l_62 (ATerm))
{
  ATerm h_59 = NULL,i_59 = NULL,j_59 = NULL;
  h_59 = t;
  g_59 :
  if(((ATgetType(h_59) == AT_LIST) && !(ATisEmpty(h_59))))
    {
      i_59 = ATgetFirst((ATermList) h_59);
      j_59 = (ATerm) ATgetNext((ATermList) h_59);
      {
        ATerm n_59 = NULL,p_59 = NULL;
        ATerm o_59 = NULL;
        t = SSLgetAnnotations(not_null(h_59));
        {
          o_59 = t;
          if(((n_59 != NULL) && (n_59 != o_59)))
            _fail(o_59);
          else
            n_59 = o_59;
        }
        {
          t = not_null(i_59);
          {
            ATerm r_59 = NULL;
            t = k_62(t);
            {
              p_59 = t;
              {
                t = not_null(j_59);
                {
                  ATerm t_59 = NULL;
                  t = l_62(t);
                  {
                    r_59 = t;
                    {
                      ATerm u_59 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(r_59)), not_null(p_59)), not_null(n_59));
                      {
                        u_59 = t;
                        if(((t_59 != NULL) && (t_59 != u_59)))
                          _fail(u_59);
                        else
                          t_59 = u_59;
                      }
                      t = not_null(t_59);
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
  ATerm e_60 = NULL;
  e_60 = t;
  d_60 :
  if(((ATgetType(e_60) == AT_LIST) && ATisEmpty(e_60)))
    {
      {
        ATerm g_60 = NULL,i_60 = NULL;
        ATerm c_22;
        c_22 = t;
        {
          ATerm h_60 = NULL;
          t = SSLgetAnnotations(not_null(e_60));
          {
            h_60 = t;
            if(((g_60 != NULL) && (g_60 != h_60)))
              _fail(h_60);
            else
              g_60 = h_60;
          }
        }
        t = c_22;
        {
          ATerm j_60 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(g_60));
          {
            j_60 = t;
            if(((i_60 != NULL) && (i_60 != j_60)))
              _fail(j_60);
            else
              i_60 = j_60;
          }
          t = not_null(i_60);
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
  ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL;
  p_60 = t;
  o_60 :
  if(match_cons(p_60, sym__2))
    {
      q_60 = ATgetArgument(p_60, 0);
      r_60 = ATgetArgument(p_60, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_12, not_null(q_60), not_null(r_60));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm u_101 (ATerm))
{
  ATerm d_22;
  d_22 = t;
  {
    ATerm h_4 (ATerm t)
    {
      t = term_h_22;
      t = u_101(t);
      return(t);
    }
    t = try_1(t, h_4);
  }
  t = d_22;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm z_60 = NULL;
      ATerm j_22;
      j_22 = t;
      {
        ATerm x_60 = NULL;
        ATerm y_60 = NULL;
        y_60 = t;
        if(((x_60 != NULL) && (x_60 != y_60)))
          _fail(y_60);
        else
          x_60 = y_60;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_17, not_null(x_60));
          t = set_config_0(t);
        }
      }
      t = j_22;
      {
        ATerm a_61 = NULL;
        a_61 = t;
        if(((z_60 != NULL) && (z_60 != a_61)))
          _fail(a_61);
        else
          z_60 = a_61;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_60));
      }
      return(t);
    }
    ATerm j_4 (ATerm t)
    {
      ATerm m_22 = t;
      int n_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_22 = t;
          int p_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(p_22);
            }
          else
            {
              t = o_22;
              {
                t = u_101(t);
                t = Cons_2(t, _id, j_4);
              }
            }
          ;
          LocalPopChoice(n_22);
        }
      else
        {
          t = m_22;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, i_4, j_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL;
  ATerm q_22;
  q_22 = t;
  {
    ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL;
    l_61 = t;
    h_61 :
    if(match_cons(l_61, sym__3))
      {
        m_61 = ATgetArgument(l_61, 0);
        n_61 = ATgetArgument(l_61, 1);
        o_61 = ATgetArgument(l_61, 2);
        {
          if(((i_61 != NULL) && (i_61 != m_61)))
            _fail(m_61);
          else
            i_61 = m_61;
          {
            if(((j_61 != NULL) && (j_61 != n_61)))
              _fail(n_61);
            else
              j_61 = n_61;
            {
              if(((k_61 != NULL) && (k_61 != o_61)))
                _fail(o_61);
              else
                k_61 = o_61;
              t = SSL_table_put(not_null(i_61), not_null(j_61), not_null(k_61));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = q_22;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_101 (ATerm))
{
  ATerm r_61 = NULL;
  ATerm r_22;
  r_22 = t;
  {
    t = term_s_22;
    t = table_put_0(t);
  }
  t = r_22;
  {
    ATerm m_4 (ATerm t)
    {
      ATerm x_22 = t;
      int z_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_101(t);
          ;
          LocalPopChoice(z_22);
        }
      else
        {
          t = x_22;
          {
            ATerm a_23 = t;
            int b_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(b_23);
              }
            else
              {
                t = a_23;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, m_4);
    {
      ATerm n_4 (ATerm t)
      {
        ATerm c_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_23;
            e_23 = t;
            {
              ATerm f_23 = t;
              int j_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_c_18;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(j_23);
                }
              else
                {
                  t = f_23;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = e_23;
            {
              t = system_usage_0(t);
              {
                t = term_p_14;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            {
              ATerm k_23 = t;
              int o_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_23;
                  r_23 = t;
                  {
                    t = term_g_21;
                    t = get_config_0(t);
                  }
                  t = r_23;
                  {
                    t = system_about_0(t);
                    {
                      t = term_p_14;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(o_23);
                }
              else
                {
                  t = k_23;
                  {
                    ATerm o_4 (ATerm t)
                    {
                      ATerm p_4 (ATerm t)
                      {
                        ATerm s_61 = NULL;
                        s_61 = t;
                        if(((r_61 != NULL) && (r_61 != s_61)))
                          _fail(s_61);
                        else
                          r_61 = s_61;
                        return(t);
                      }
                      t = Undefined_1(t, p_4);
                      return(t);
                    }
                    t = option_defined_1(t, o_4);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_61)), term_s_23));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_d_11;
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
      t = try_1(t, n_4);
      {
        ATerm t_23;
        t_23 = t;
        {
          t = term_l_19;
          t = table_destroy_0(t);
        }
        t = t_23;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm w_99 (ATerm))
{
  t = parse_options_1(t, t_99);
  {
    t = store_options_0(t);
    {
      t = v_99(t);
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, u_99);
            ;
            LocalPopChoice(v_23);
          }
        else
          {
            t = u_23;
            {
              ATerm w_23 = t;
              int x_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_99(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(x_23);
                }
              else
                {
                  t = w_23;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm l_99 (ATerm))
{
  ATerm q_4 (ATerm t)
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_99(t);
        ;
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, i_99);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, q_4, k_99, l_99, r_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm e_99 (ATerm))
{
  ATerm s_4 (ATerm t)
  {
    ATerm t_4 (ATerm t)
    {
      ATerm m_24;
      m_24 = t;
      {
        ATerm v_61 = NULL;
        ATerm w_61 = NULL;
        t = term_a_17;
        {
          t = get_config_0(t);
          {
            w_61 = t;
            if(((v_61 != NULL) && (v_61 != w_61)))
              _fail(w_61);
            else
              v_61 = w_61;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATempty, not_null(v_61)));
          t = printnl_0(t);
        }
      }
      t = m_24;
      return(t);
    }
    t = if_verbose2_1(t, t_4);
    return(t);
  }
  t = iowrap_4(t, c_99, d_99, e_99, s_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm a_99 (ATerm), ATerm b_99 (ATerm))
{
  t = iowrap_3(t, a_99, b_99, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm x_98 (ATerm))
{
  ATerm u_4 (ATerm t)
  {
    t = _2(t, _id, x_98);
    return(t);
  }
  t = iowrap_2(t, u_4, _fail);
  return(t);
}
ATerm bound_unbound_vars_0 (ATerm t)
{
  t = iowrap_1(t, mark_bound_unbound_vars_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = bound_unbound_vars_0(t);
  return(t);
}
