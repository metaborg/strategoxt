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
ATerm term_h_23;
ATerm term_j_22;
ATerm term_v_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_t_17;
ATerm term_m_17;
ATerm term_i_17;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_w_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_v_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_n_8;
ATerm term_u_7;
ATerm term_o_7;
ATerm term_h_7;
ATerm term_d_7;
ATerm term_r_6;
ATerm term_a_6;
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
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_7);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_Defined_1, term_w_8);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_f_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__2, term_t_14, term_o_7);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_o_7);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym__2, term_n_18, term_d_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym__2, term_o_20, term_o_7);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_o_7);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym__2, term_t_17, term_o_7);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym__3, term_n_18, term_d_19, (ATerm) ATempty);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm g_95 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm q_67 (ATerm), ATerm r_67 (ATerm), ATerm s_67 (ATerm));
ATerm mark_guardedlchoice_1 (ATerm, ATerm p_75 (ATerm));
ATerm LChoice_2 (ATerm, ATerm m_67 (ATerm), ATerm n_67 (ATerm));
ATerm mark_lchoice_1 (ATerm, ATerm o_75 (ATerm));
ATerm Choice_2 (ATerm, ATerm k_66 (ATerm), ATerm l_66 (ATerm));
ATerm abstract_choice_2 (ATerm, ATerm q_75 (ATerm), ATerm r_75 (ATerm));
ATerm mark_choice_1 (ATerm, ATerm n_75 (ATerm));
ATerm Rec_2 (ATerm, ATerm t_67 (ATerm), ATerm u_67 (ATerm));
ATerm mark_rec_0 (ATerm);
ATerm PrimT_3 (ATerm, ATerm c_68 (ATerm), ATerm d_68 (ATerm), ATerm e_68 (ATerm));
ATerm mark_prim_0 (ATerm);
ATerm Call_2 (ATerm, ATerm y_66 (ATerm), ATerm z_66 (ATerm));
ATerm CallT_3 (ATerm, ATerm a_67 (ATerm), ATerm b_67 (ATerm), ATerm c_67 (ATerm));
ATerm mark_call_0 (ATerm);
ATerm SDefT_4 (ATerm, ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm q_69 (ATerm), ATerm r_69 (ATerm));
ATerm mark_sdef_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm restore_MarkVar_0 (ATerm);
ATerm Let_2 (ATerm, ATerm w_66 (ATerm), ATerm x_66 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_MarkVar_0 (ATerm);
ATerm isect_MarkVar_0 (ATerm);
ATerm mark_let_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm v_75 (ATerm));
ATerm restore_always_2 (ATerm, ATerm o_88 (ATerm), ATerm p_88 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm u_75 (ATerm));
ATerm scope_2 (ATerm, ATerm w_75 (ATerm), ATerm x_75 (ATerm));
ATerm Scope_2 (ATerm, ATerm g_67 (ATerm), ATerm h_67 (ATerm));
ATerm mark_scope_0 (ATerm);
ATerm Build_1 (ATerm, ATerm e_67 (ATerm));
ATerm mark_build_0 (ATerm);
ATerm assert_1 (ATerm, ATerm y_75 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm a_76 (ATerm));
ATerm MarkVar_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm u_77 (ATerm));
ATerm mark_match_0 (ATerm);
ATerm mark_buv_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm n_62 (ATerm));
ATerm Specification_1 (ATerm, ATerm s_62 (ATerm));
ATerm mark_bound_unbound_vars_0 (ATerm);
ATerm _2 (ATerm, ATerm a_61 (ATerm), ATerm b_61 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm i_80 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm u_96 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm q_95 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm s_98 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_95 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm u_78 (ATerm), ATerm v_78 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm i_86 (ATerm), ATerm j_86 (ATerm));
ATerm crush_2 (ATerm, ATerm g_84 (ATerm), ATerm h_84 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm t_96 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_99 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm r_101 (ATerm));
ATerm map_1 (ATerm, ATerm s_79 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm q_101 (ATerm));
ATerm Program_1 (ATerm, ATerm h_75 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm i_75 (ATerm));
ATerm fetch_1 (ATerm, ATerm c_80 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_100 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm z_87 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm v_101 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm j_62 (ATerm), ATerm k_62 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm t_101 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_101 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm v_99 (ATerm));
ATerm iowrap_4 (ATerm, ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm k_99 (ATerm));
ATerm iowrap_3 (ATerm, ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm));
ATerm iowrap_2 (ATerm, ATerm z_98 (ATerm), ATerm a_99 (ATerm));
ATerm iowrap_1 (ATerm, ATerm w_98 (ATerm));
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
ATerm say_1 (ATerm t, ATerm g_95 (ATerm))
{
  ATerm x_4;
  x_4 = t;
  {
    t = g_95(t);
    t = debug_0(t);
  }
  t = x_4;
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm q_67 (ATerm), ATerm r_67 (ATerm), ATerm s_67 (ATerm))
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
            t = q_67(t);
            {
              e_6 = t;
              {
                t = not_null(w_5);
                {
                  ATerm i_6 = NULL;
                  t = r_67(t);
                  {
                    g_6 = t;
                    {
                      t = not_null(x_5);
                      {
                        ATerm k_6 = NULL;
                        t = s_67(t);
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
ATerm mark_guardedlchoice_1 (ATerm t, ATerm p_75 (ATerm))
{
  t = GuardedLChoice_3(t, _id, _id, _id);
  {
    ATerm f_0 (ATerm t)
    {
      t = GuardedLChoice_3(t, p_75, _id, _id);
      t = GuardedLChoice_3(t, _id, p_75, _id);
      return(t);
    }
    ATerm j_0 (ATerm t)
    {
      t = GuardedLChoice_3(t, _id, _id, p_75);
      return(t);
    }
    t = abstract_choice_2(t, f_0, j_0);
  }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm m_67 (ATerm), ATerm n_67 (ATerm))
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
            t = m_67(t);
            {
              g_7 = t;
              {
                t = not_null(a_7);
                {
                  ATerm k_7 = NULL;
                  t = n_67(t);
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
ATerm mark_lchoice_1 (ATerm t, ATerm o_75 (ATerm))
{
  t = LChoice_2(t, _id, _id);
  {
    ATerm l_0 (ATerm t)
    {
      t = LChoice_2(t, o_75, _id);
      return(t);
    }
    ATerm o_0 (ATerm t)
    {
      t = LChoice_2(t, _id, o_75);
      return(t);
    }
    t = abstract_choice_2(t, l_0, o_0);
  }
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm k_66 (ATerm), ATerm l_66 (ATerm))
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
            t = k_66(t);
            {
              f_8 = t;
              {
                t = not_null(z_7);
                {
                  ATerm j_8 = NULL;
                  t = l_66(t);
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
ATerm abstract_choice_2 (ATerm t, ATerm q_75 (ATerm), ATerm r_75 (ATerm))
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
    t = q_75(t);
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
        t = r_75(t);
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
ATerm mark_choice_1 (ATerm t, ATerm n_75 (ATerm))
{
  t = Choice_2(t, _id, _id);
  {
    ATerm p_0 (ATerm t)
    {
      t = Choice_2(t, n_75, _id);
      return(t);
    }
    ATerm q_0 (ATerm t)
    {
      t = Choice_2(t, _id, n_75);
      return(t);
    }
    t = abstract_choice_2(t, p_0, q_0);
  }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm t_67 (ATerm), ATerm u_67 (ATerm))
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
            t = t_67(t);
            {
              m_9 = t;
              {
                t = not_null(g_9);
                {
                  ATerm q_9 = NULL;
                  t = u_67(t);
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
ATerm PrimT_3 (ATerm t, ATerm c_68 (ATerm), ATerm d_68 (ATerm), ATerm e_68 (ATerm))
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
            t = c_68(t);
            {
              y_10 = t;
              {
                t = not_null(q_10);
                {
                  ATerm c_11 = NULL;
                  t = d_68(t);
                  {
                    a_11 = t;
                    {
                      t = not_null(r_10);
                      {
                        ATerm e_11 = NULL;
                        t = e_68(t);
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
ATerm Call_2 (ATerm t, ATerm y_66 (ATerm), ATerm z_66 (ATerm))
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
            t = y_66(t);
            {
              e_12 = t;
              {
                t = not_null(y_11);
                {
                  ATerm i_12 = NULL;
                  t = z_66(t);
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
ATerm CallT_3 (ATerm t, ATerm a_67 (ATerm), ATerm b_67 (ATerm), ATerm c_67 (ATerm))
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
            t = a_67(t);
            {
              g_13 = t;
              {
                t = not_null(y_12);
                {
                  ATerm k_13 = NULL;
                  t = b_67(t);
                  {
                    i_13 = t;
                    {
                      t = not_null(z_12);
                      {
                        ATerm m_13 = NULL;
                        t = c_67(t);
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
ATerm SDefT_4 (ATerm t, ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm q_69 (ATerm), ATerm r_69 (ATerm))
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
            t = o_69(t);
            {
              w_14 = t;
              {
                t = not_null(m_14);
                {
                  ATerm a_15 = NULL;
                  t = p_69(t);
                  {
                    y_14 = t;
                    {
                      t = not_null(n_14);
                      {
                        ATerm c_15 = NULL;
                        t = q_69(t);
                        {
                          a_15 = t;
                          {
                            t = not_null(o_14);
                            {
                              ATerm e_15 = NULL;
                              t = r_69(t);
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
ATerm table_putlist_0 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL;
  h_16 = t;
  g_16 :
  if(match_cons(h_16, sym__2))
    {
      i_16 = ATgetArgument(h_16, 0);
      j_16 = ATgetArgument(h_16, 1);
      {
        t = not_null(j_16);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL;
            m_16 = t;
            f_16 :
            if(match_cons(m_16, sym__2))
              {
                n_16 = ATgetArgument(m_16, 0);
                o_16 = ATgetArgument(m_16, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(i_16), not_null(n_16), not_null(o_16));
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
  ATerm u_16 = NULL;
  u_16 = t;
  {
    ATerm r_5;
    r_5 = t;
    {
      t = term_m_5;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_5, not_null(u_16));
          t = table_putlist_0(t);
        }
      }
    }
    t = r_5;
  }
  return(t);
}
ATerm Let_2 (ATerm t, ATerm w_66 (ATerm), ATerm x_66 (ATerm))
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  d_17 = t;
  c_17 :
  if(match_cons(d_17, sym_Let_2))
    {
      e_17 = ATgetArgument(d_17, 0);
      f_17 = ATgetArgument(d_17, 1);
      {
        ATerm j_17 = NULL,l_17 = NULL;
        ATerm k_17 = NULL;
        t = SSLgetAnnotations(not_null(d_17));
        {
          k_17 = t;
          if(((j_17 != NULL) && (j_17 != k_17)))
            _fail(k_17);
          else
            j_17 = k_17;
        }
        {
          t = not_null(e_17);
          {
            ATerm n_17 = NULL;
            t = w_66(t);
            {
              l_17 = t;
              {
                t = not_null(f_17);
                {
                  ATerm p_17 = NULL;
                  t = x_66(t);
                  {
                    n_17 = t;
                    {
                      ATerm q_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(l_17), not_null(n_17)), not_null(j_17));
                      {
                        q_17 = t;
                        if(((p_17 != NULL) && (p_17 != q_17)))
                          _fail(q_17);
                        else
                          p_17 = q_17;
                      }
                      t = not_null(p_17);
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
  ATerm x_17 = NULL;
  x_17 = t;
  t = SSL_table_keys(not_null(x_17));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm d_18 = NULL;
  d_18 = t;
  {
    t = table_keys_0(t);
    {
      ATerm b_1 (ATerm t)
      {
        ATerm f_18 = NULL;
        ATerm h_18 = NULL;
        f_18 = t;
        {
          ATerm i_18 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_18), not_null(f_18));
          {
            t = table_get_0(t);
            {
              i_18 = t;
              if(((h_18 != NULL) && (h_18 != i_18)))
                _fail(i_18);
              else
                h_18 = i_18;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_18), not_null(h_18));
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
      ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
      w_18 = t;
      q_18 :
      if(match_cons(w_18, sym__2))
        {
          x_18 = ATgetArgument(w_18, 0);
          y_18 = ATgetArgument(w_18, 1);
          r_18 :
          if(((ATgetType(y_18) == AT_LIST) && !(ATisEmpty(y_18))))
            {
              z_18 = ATgetFirst((ATermList) y_18);
              c_19 = (ATerm) ATgetNext((ATermList) y_18);
              s_18 :
              if(match_cons(z_18, sym_Defined_2))
                {
                  a_19 = ATgetArgument(z_18, 0);
                  b_19 = ATgetArgument(z_18, 1);
                  t_18 :
                  if(!(match_cons(x_18, sym_Scopes_0)))
                    {
                      ATerm s_5 = t;
                      int y_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_5;
                          z_5 = t;
                          {
                            ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, term_m_5, not_null(x_18));
                            {
                              t = table_get_0(t);
                              {
                                f_19 = t;
                                o_18 :
                                if(((ATgetType(f_19) == AT_LIST) && !(ATisEmpty(f_19))))
                                  {
                                    g_19 = ATgetFirst((ATermList) f_19);
                                    j_19 = (ATerm) ATgetNext((ATermList) f_19);
                                    p_18 :
                                    if(match_cons(g_19, sym_Defined_2))
                                      {
                                        h_19 = ATgetArgument(g_19, 0);
                                        i_19 = ATgetArgument(g_19, 1);
                                        if(((b_19 != NULL) && (b_19 != i_19)))
                                          _fail(i_19);
                                        else
                                          b_19 = i_19;
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
                          t = z_5;
                          ;
                          LocalPopChoice(y_5);
                        }
                      else
                        {
                          t = s_5;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(x_18), (ATerm) ATinsert(ATempty, term_a_6));
                        }
                    }
                }
              else
                {
                  u_18 :
                  if(!(match_cons(x_18, sym_Scopes_0)))
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              v_18 :
              if(!(match_cons(x_18, sym_Scopes_0)))
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
  ATerm o_19 = NULL,q_19 = NULL;
  t = Let_2(t, _id, _id);
  {
    ATerm b_6;
    b_6 = t;
    {
      ATerm p_19 = NULL;
      t = save_MarkVar_0(t);
      {
        p_19 = t;
        if(((o_19 != NULL) && (o_19 != p_19)))
          _fail(p_19);
        else
          o_19 = p_19;
      }
    }
    t = b_6;
    {
      t = Let_2(t, _id, mark_buv_0);
      {
        ATerm f_6;
        f_6 = t;
        {
          ATerm r_19 = NULL;
          t = not_null(o_19);
          {
            t = isect_MarkVar_0(t);
            {
              t = save_MarkVar_0(t);
              {
                r_19 = t;
                if(((q_19 != NULL) && (q_19 != r_19)))
                  _fail(r_19);
                else
                  q_19 = r_19;
              }
            }
          }
        }
        t = f_6;
        {
          ATerm e_1 (ATerm t)
          {
            ATerm f_1 (ATerm t)
            {
              t = mark_buv_0(t);
              {
                ATerm h_6;
                h_6 = t;
                {
                  t = not_null(q_19);
                  t = restore_MarkVar_0(t);
                }
                t = h_6;
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
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
  w_19 = t;
  v_19 :
  if(((ATgetType(w_19) == AT_LIST) && !(ATisEmpty(w_19))))
    {
      x_19 = ATgetFirst((ATermList) w_19);
      y_19 = (ATerm) ATgetNext((ATermList) w_19);
      t = not_null(y_19);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
  e_20 = t;
  d_20 :
  if(match_cons(e_20, sym__2))
    {
      f_20 = ATgetArgument(e_20, 0);
      g_20 = ATgetArgument(e_20, 1);
      {
        ATerm j_6;
        j_6 = t;
        {
          ATerm j_20 = NULL;
          ATerm k_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_20), not_null(g_20));
          {
            ATerm m_6 = t;
            int n_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(n_6);
              }
            else
              {
                t = m_6;
                t = (ATerm) ATempty;
              }
            {
              k_20 = t;
              if(((j_20 != NULL) && (j_20 != k_20)))
                _fail(k_20);
              else
                j_20 = k_20;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_20), not_null(g_20), not_null(j_20));
            t = table_put_0(t);
          }
        }
        t = j_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm v_75 (ATerm))
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
  ATerm o_6;
  o_6 = t;
  {
    ATerm u_20 = NULL;
    ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
    t = v_75(t);
    {
      u_20 = t;
      {
        if(((t_20 != NULL) && (t_20 != u_20)))
          _fail(u_20);
        else
          t_20 = u_20;
        {
          ATerm p_6 = t;
          int q_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_20), term_r_6);
              t = table_get_0(t);
              ;
              LocalPopChoice(q_6);
            }
          else
            {
              t = p_6;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            v_20 = t;
            q_20 :
            if(((ATgetType(v_20) == AT_LIST) && !(ATisEmpty(v_20))))
              {
                w_20 = ATgetFirst((ATermList) v_20);
                x_20 = (ATerm) ATgetNext((ATermList) v_20);
                {
                  if(((s_20 != NULL) && (s_20 != w_20)))
                    _fail(w_20);
                  else
                    s_20 = w_20;
                  {
                    if(((r_20 != NULL) && (r_20 != x_20)))
                      _fail(x_20);
                    else
                      r_20 = x_20;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(t_20), term_r_6, not_null(r_20));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(s_20);
                          {
                            ATerm g_1 (ATerm t)
                            {
                              ATerm y_20 = NULL;
                              y_20 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_20), not_null(y_20));
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
  t = o_6;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm o_88 (ATerm), ATerm p_88 (ATerm))
{
  ATerm s_6 = t;
  int t_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_88(t);
      t = p_88(t);
      ;
      LocalPopChoice(t_6);
    }
  else
    {
      t = s_6;
      {
        t = p_88(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm u_75 (ATerm))
{
  ATerm f_21 = NULL;
  ATerm u_6;
  u_6 = t;
  {
    ATerm g_21 = NULL;
    ATerm h_21 = NULL;
    t = u_75(t);
    {
      g_21 = t;
      {
        if(((f_21 != NULL) && (f_21 != g_21)))
          _fail(g_21);
        else
          f_21 = g_21;
        {
          ATerm i_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_21), term_r_6);
          {
            ATerm v_6 = t;
            int w_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(w_6);
              }
            else
              {
                t = v_6;
                t = (ATerm) ATempty;
              }
            {
              i_21 = t;
              if(((h_21 != NULL) && (h_21 != i_21)))
                _fail(i_21);
              else
                h_21 = i_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_21), term_r_6, (ATerm) ATinsert(CheckATermList(not_null(h_21)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = u_6;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm w_75 (ATerm), ATerm x_75 (ATerm))
{
  t = begin_scope_1(t, w_75);
  {
    ATerm h_1 (ATerm t)
    {
      t = end_scope_1(t, w_75);
      return(t);
    }
    t = restore_always_2(t, x_75, h_1);
  }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm g_67 (ATerm), ATerm h_67 (ATerm))
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  r_21 = t;
  q_21 :
  if(match_cons(r_21, sym_Scope_2))
    {
      s_21 = ATgetArgument(r_21, 0);
      t_21 = ATgetArgument(r_21, 1);
      {
        ATerm x_21 = NULL,z_21 = NULL;
        ATerm y_21 = NULL;
        t = SSLgetAnnotations(not_null(r_21));
        {
          y_21 = t;
          if(((x_21 != NULL) && (x_21 != y_21)))
            _fail(y_21);
          else
            x_21 = y_21;
        }
        {
          t = not_null(s_21);
          {
            ATerm b_22 = NULL;
            t = g_67(t);
            {
              z_21 = t;
              {
                t = not_null(t_21);
                {
                  ATerm d_22 = NULL;
                  t = h_67(t);
                  {
                    b_22 = t;
                    {
                      ATerm e_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(z_21), not_null(b_22)), not_null(x_21));
                      {
                        e_22 = t;
                        if(((d_22 != NULL) && (d_22 != e_22)))
                          _fail(e_22);
                        else
                          d_22 = e_22;
                      }
                      t = not_null(d_22);
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
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
  n_22 = t;
  m_22 :
  if(match_cons(n_22, sym_Scope_2))
    {
      o_22 = ATgetArgument(n_22, 0);
      p_22 = ATgetArgument(n_22, 1);
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
            ATerm b_7;
            b_7 = t;
            {
              t = not_null(o_22);
              {
                ATerm l_1 (ATerm t)
                {
                  ATerm r_22 = NULL;
                  r_22 = t;
                  {
                    ATerm c_7;
                    c_7 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_22)), term_h_7);
                      {
                        ATerm m_1 (ATerm t)
                        {
                          t = term_m_5;
                          return(t);
                        }
                        t = assert_1(t, m_1);
                      }
                    }
                    t = c_7;
                  }
                  return(t);
                }
                t = map_1(t, l_1);
              }
            }
            t = b_7;
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
ATerm Build_1 (ATerm t, ATerm e_67 (ATerm))
{
  ATerm a_23 = NULL,b_23 = NULL;
  a_23 = t;
  z_22 :
  if(match_cons(a_23, sym_Build_1))
    {
      b_23 = ATgetArgument(a_23, 0);
      {
        ATerm e_23 = NULL,g_23 = NULL;
        ATerm f_23 = NULL;
        t = SSLgetAnnotations(not_null(a_23));
        {
          f_23 = t;
          if(((e_23 != NULL) && (e_23 != f_23)))
            _fail(f_23);
          else
            e_23 = f_23;
        }
        {
          t = not_null(b_23);
          {
            ATerm i_23 = NULL;
            t = e_67(t);
            {
              g_23 = t;
              {
                ATerm j_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(g_23)), not_null(e_23));
                {
                  j_23 = t;
                  if(((i_23 != NULL) && (i_23 != j_23)))
                    _fail(j_23);
                  else
                    i_23 = j_23;
                }
                t = not_null(i_23);
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
ATerm assert_1 (ATerm t, ATerm y_75 (ATerm))
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
  t_23 = t;
  s_23 :
  if(match_cons(t_23, sym__2))
    {
      u_23 = ATgetArgument(t_23, 0);
      v_23 = ATgetArgument(t_23, 1);
      {
        ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL;
        ATerm j_7;
        j_7 = t;
        {
          ATerm b_24 = NULL;
          ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL;
          t = y_75(t);
          {
            b_24 = t;
            {
              if(((y_23 != NULL) && (y_23 != b_24)))
                _fail(b_24);
              else
                y_23 = b_24;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(y_23), not_null(u_23), not_null(v_23));
                {
                  t = table_push_0(t);
                  {
                    ATerm m_7 = t;
                    int n_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(y_23), term_r_6);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(n_7);
                      }
                    else
                      {
                        t = m_7;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      c_24 = t;
                      r_23 :
                      if(((ATgetType(c_24) == AT_LIST) && !(ATisEmpty(c_24))))
                        {
                          d_24 = ATgetFirst((ATermList) c_24);
                          e_24 = (ATerm) ATgetNext((ATermList) c_24);
                          {
                            if(((z_23 != NULL) && (z_23 != d_24)))
                              _fail(d_24);
                            else
                              z_23 = d_24;
                            {
                              if(((a_24 != NULL) && (a_24 != e_24)))
                                _fail(e_24);
                              else
                                a_24 = e_24;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(y_23), term_r_6, (ATerm) ATinsert(CheckATermList(not_null(a_24)), (ATerm) ATinsert(CheckATermList(not_null(z_23)), not_null(u_23))));
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
        t = j_7;
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
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
  k_24 = t;
  j_24 :
  if(((ATgetType(k_24) == AT_LIST) && !(ATisEmpty(k_24))))
    {
      l_24 = ATgetFirst((ATermList) k_24);
      m_24 = (ATerm) ATgetNext((ATermList) k_24);
      t = not_null(l_24);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
  r_24 = t;
  q_24 :
  if(match_cons(r_24, sym__2))
    {
      s_24 = ATgetArgument(r_24, 0);
      t_24 = ATgetArgument(r_24, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_24), not_null(t_24));
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
ATerm rewrite_1 (ATerm t, ATerm a_76 (ATerm))
{
  ATerm z_24 = NULL;
  ATerm b_25 = NULL;
  z_24 = t;
  {
    ATerm c_25 = NULL;
    t = term_o_7;
    {
      t = a_76(t);
      {
        c_25 = t;
        if(((b_25 != NULL) && (b_25 != c_25)))
          _fail(c_25);
        else
          b_25 = c_25;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_25), not_null(z_24));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm MarkVar_0 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL;
  y_25 = t;
  x_25 :
  if(match_cons(y_25, sym_Var_1))
    {
      z_25 = ATgetArgument(y_25, 0);
      {
        ATerm p_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_26 = NULL;
            ATerm r_7;
            r_7 = t;
            {
              ATerm c_26 = NULL,d_26 = NULL;
              t = not_null(y_25);
              {
                ATerm o_1 (ATerm t)
                {
                  t = term_m_5;
                  return(t);
                }
                t = rewrite_1(t, o_1);
                {
                  c_26 = t;
                  i_25 :
                  if(match_cons(c_26, sym_Defined_1))
                    {
                      d_26 = ATgetArgument(c_26, 0);
                      j_25 :
                      if(!(match_string(d_26, "h_0")))
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
            t = r_7;
            {
              ATerm f_26 = NULL,h_26 = NULL,j_26 = NULL;
              ATerm s_7;
              s_7 = t;
              {
                ATerm g_26 = NULL;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_25));
                {
                  g_26 = t;
                  if(((f_26 != NULL) && (f_26 != g_26)))
                    _fail(g_26);
                  else
                    f_26 = g_26;
                }
              }
              t = s_7;
              {
                ATerm t_7;
                t_7 = t;
                {
                  ATerm i_26 = NULL;
                  t = (ATerm) ATinsert(ATempty, term_u_7);
                  {
                    i_26 = t;
                    if(((h_26 != NULL) && (h_26 != i_26)))
                      _fail(i_26);
                    else
                      h_26 = i_26;
                  }
                }
                t = t_7;
                {
                  t = SSLsetAnnotations(not_null(f_26), not_null(h_26));
                  {
                    j_26 = t;
                    if(((e_26 != NULL) && (e_26 != j_26)))
                      _fail(j_26);
                    else
                      e_26 = j_26;
                  }
                }
              }
              t = not_null(e_26);
            }
            ;
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
            {
              ATerm v_7 = t;
              int a_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_28 = NULL;
                  ATerm b_8;
                  b_8 = t;
                  {
                    ATerm u_27 = NULL,b_28 = NULL;
                    t = not_null(y_25);
                    {
                      ATerm p_1 (ATerm t)
                      {
                        t = term_m_5;
                        return(t);
                      }
                      t = rewrite_1(t, p_1);
                      {
                        u_27 = t;
                        n_25 :
                        if(match_cons(u_27, sym_Defined_1))
                          {
                            b_28 = ATgetArgument(u_27, 0);
                            o_25 :
                            if(!(match_string(b_28, "e_0")))
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
                  t = b_8;
                  {
                    ATerm d_28 = NULL,h_28 = NULL,j_28 = NULL;
                    ATerm c_8;
                    c_8 = t;
                    {
                      ATerm e_28 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_25));
                      {
                        e_28 = t;
                        if(((d_28 != NULL) && (d_28 != e_28)))
                          _fail(e_28);
                        else
                          d_28 = e_28;
                      }
                    }
                    t = c_8;
                    {
                      ATerm g_8;
                      g_8 = t;
                      {
                        ATerm i_28 = NULL;
                        t = (ATerm) ATinsert(ATempty, term_u_7);
                        {
                          i_28 = t;
                          if(((h_28 != NULL) && (h_28 != i_28)))
                            _fail(i_28);
                          else
                            h_28 = i_28;
                        }
                      }
                      t = g_8;
                      {
                        t = SSLsetAnnotations(not_null(d_28), not_null(h_28));
                        {
                          j_28 = t;
                          if(((c_28 != NULL) && (c_28 != j_28)))
                            _fail(j_28);
                          else
                            c_28 = j_28;
                        }
                      }
                    }
                    t = not_null(c_28);
                  }
                  ;
                  LocalPopChoice(a_8);
                }
              else
                {
                  t = v_7;
                  {
                    ATerm o_28 = NULL;
                    ATerm i_8;
                    i_8 = t;
                    {
                      ATerm m_28 = NULL,n_28 = NULL;
                      t = not_null(y_25);
                      {
                        ATerm q_1 (ATerm t)
                        {
                          t = term_m_5;
                          return(t);
                        }
                        t = rewrite_1(t, q_1);
                        {
                          m_28 = t;
                          s_25 :
                          if(match_cons(m_28, sym_Defined_1))
                            {
                              n_28 = ATgetArgument(m_28, 0);
                              t_25 :
                              if(!(match_string(n_28, "c_0")))
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
                    t = i_8;
                    {
                      ATerm p_28 = NULL,r_28 = NULL,t_28 = NULL;
                      ATerm l_8;
                      l_8 = t;
                      {
                        ATerm q_28 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_25));
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
                        ATerm m_8;
                        m_8 = t;
                        {
                          ATerm s_28 = NULL;
                          t = (ATerm) ATinsert(ATempty, term_n_8);
                          {
                            s_28 = t;
                            if(((r_28 != NULL) && (r_28 != s_28)))
                              _fail(s_28);
                            else
                              r_28 = s_28;
                          }
                        }
                        t = m_8;
                        {
                          t = SSLsetAnnotations(not_null(p_28), not_null(r_28));
                          {
                            t_28 = t;
                            if(((o_28 != NULL) && (o_28 != t_28)))
                              _fail(t_28);
                            else
                              o_28 = t_28;
                          }
                        }
                      }
                      t = not_null(o_28);
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
ATerm alltd_1 (ATerm t, ATerm u_77 (ATerm))
{
  ATerm u_29 (ATerm t)
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_77(t);
        ;
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        t = _all(t, u_29);
      }
    return(t);
  }
  t = u_29(t);
  return(t);
}
ATerm mark_match_0 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  a_30 = t;
  z_29 :
  if(match_cons(a_30, sym_Match_1))
    {
      b_30 = ATgetArgument(a_30, 0);
      {
        ATerm d_30 = NULL;
        ATerm j_30 = NULL;
        t = not_null(b_30);
        {
          ATerm r_1 (ATerm t)
          {
            t = MarkVar_0(t);
            {
              ATerm q_8;
              q_8 = t;
              {
                ATerm e_30 = NULL,f_30 = NULL;
                e_30 = t;
                x_29 :
                if(match_cons(e_30, sym_Var_1))
                  {
                    f_30 = ATgetArgument(e_30, 0);
                    {
                      ATerm r_8;
                      r_8 = t;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_30)), term_x_8);
                        {
                          ATerm s_1 (ATerm t)
                          {
                            t = term_m_5;
                            return(t);
                          }
                          t = assert_1(t, s_1);
                        }
                      }
                      t = r_8;
                    }
                  }
                else
                  {
                    _fail(t);
                  }
              }
              t = q_8;
            }
            return(t);
          }
          t = alltd_1(t, r_1);
          {
            j_30 = t;
            if(((d_30 != NULL) && (d_30 != j_30)))
              _fail(j_30);
            else
              d_30 = j_30;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(d_30));
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
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = mark_match_0(t);
      ;
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
      {
        ATerm a_9 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_build_0(t);
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
                  t = mark_scope_0(t);
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
                        t = mark_let_0(t);
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
                              t = mark_sdef_0(t);
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
                                    t = mark_call_0(t);
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
                                          t = mark_prim_0(t);
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
                                                t = mark_rec_0(t);
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
                                                      t = mark_choice_1(t, mark_buv_0);
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
                                                            t = mark_lchoice_1(t, mark_buv_0);
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
                                                                  t = mark_guardedlchoice_1(t, mark_buv_0);
                                                                  ;
                                                                  LocalPopChoice(j_10);
                                                                }
                                                              else
                                                                {
                                                                  t = i_10;
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
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm n_62 (ATerm))
{
  ATerm s_30 = NULL,t_30 = NULL;
  s_30 = t;
  r_30 :
  if(match_cons(s_30, sym_Strategies_1))
    {
      t_30 = ATgetArgument(s_30, 0);
      {
        ATerm w_30 = NULL,y_30 = NULL;
        ATerm x_30 = NULL;
        t = SSLgetAnnotations(not_null(s_30));
        {
          x_30 = t;
          if(((w_30 != NULL) && (w_30 != x_30)))
            _fail(x_30);
          else
            w_30 = x_30;
        }
        {
          t = not_null(t_30);
          {
            ATerm a_31 = NULL;
            t = n_62(t);
            {
              y_30 = t;
              {
                ATerm g_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(y_30)), not_null(w_30));
                {
                  g_31 = t;
                  if(((a_31 != NULL) && (a_31 != g_31)))
                    _fail(g_31);
                  else
                    a_31 = g_31;
                }
                t = not_null(a_31);
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
ATerm Specification_1 (ATerm t, ATerm s_62 (ATerm))
{
  ATerm q_31 = NULL,r_31 = NULL;
  q_31 = t;
  p_31 :
  if(match_cons(q_31, sym_Specification_1))
    {
      r_31 = ATgetArgument(q_31, 0);
      {
        ATerm z_31 = NULL,b_32 = NULL;
        ATerm a_32 = NULL;
        t = SSLgetAnnotations(not_null(q_31));
        {
          a_32 = t;
          if(((z_31 != NULL) && (z_31 != a_32)))
            _fail(a_32);
          else
            z_31 = a_32;
        }
        {
          t = not_null(r_31);
          {
            ATerm d_32 = NULL;
            t = s_62(t);
            {
              b_32 = t;
              {
                ATerm e_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(b_32)), not_null(z_31));
                {
                  e_32 = t;
                  if(((d_32 != NULL) && (d_32 != e_32)))
                    _fail(e_32);
                  else
                    d_32 = e_32;
                }
                t = not_null(d_32);
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
    t = term_k_10;
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
        t = term_l_10;
        return(t);
      }
      t = say_1(t, y_1);
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm a_61 (ATerm), ATerm b_61 (ATerm))
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL;
  p_32 = t;
  o_32 :
  if(match_cons(p_32, sym__2))
    {
      q_32 = ATgetArgument(p_32, 0);
      r_32 = ATgetArgument(p_32, 1);
      {
        ATerm v_32 = NULL,x_32 = NULL;
        ATerm w_32 = NULL;
        t = SSLgetAnnotations(not_null(p_32));
        {
          w_32 = t;
          if(((v_32 != NULL) && (v_32 != w_32)))
            _fail(w_32);
          else
            v_32 = w_32;
        }
        {
          t = not_null(q_32);
          {
            ATerm z_32 = NULL;
            t = a_61(t);
            {
              x_32 = t;
              {
                t = not_null(r_32);
                {
                  ATerm b_33 = NULL;
                  t = b_61(t);
                  {
                    z_32 = t;
                    {
                      ATerm c_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(x_32), not_null(z_32)), not_null(v_32));
                      {
                        c_33 = t;
                        if(((b_33 != NULL) && (b_33 != c_33)))
                          _fail(c_33);
                        else
                          b_33 = c_33;
                      }
                      t = not_null(b_33);
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
  ATerm m_10;
  m_10 = t;
  {
    ATerm j_33 = NULL;
    ATerm k_33 = NULL;
    t = term_o_7;
    {
      t = whoami_0(t);
      {
        k_33 = t;
        if(((j_33 != NULL) && (j_33 != k_33)))
          _fail(k_33);
        else
          j_33 = k_33;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_10), not_null(j_33)), term_s_10));
      {
        t = printnl_0(t);
        {
          t = term_u_10;
          t = exit_0(t);
        }
      }
    }
  }
  t = m_10;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
  o_33 = t;
  n_33 :
  if(match_cons(o_33, sym__2))
    {
      p_33 = ATgetArgument(o_33, 0);
      q_33 = ATgetArgument(o_33, 1);
      {
        ATerm v_10;
        v_10 = t;
        t = SSL_printnl(not_null(p_33), not_null(q_33));
        t = v_10;
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
  ATerm v_33 = NULL;
  v_33 = t;
  t = SSL_implode_string(not_null(v_33));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_10 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(b_11);
    }
  else
    {
      t = z_10;
      {
        ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
        a_34 = t;
        z_33 :
        if(((ATgetType(a_34) == AT_LIST) && !(ATisEmpty(a_34))))
          {
            b_34 = ATgetFirst((ATermList) a_34);
            c_34 = (ATerm) ATgetNext((ATermList) a_34);
            {
              t = not_null(b_34);
              {
                ATerm z_1 (ATerm t)
                {
                  t = not_null(c_34);
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
  ATerm m_34 = NULL;
  ATerm o_34 = NULL;
  m_34 = t;
  {
    ATerm p_34 = NULL;
    ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
    t = not_null(m_34);
    {
      p_34 = t;
      {
        t = SSL_explode_term(not_null(p_34));
        {
          r_34 = t;
          k_34 :
          if(match_cons(r_34, sym__2))
            {
              s_34 = ATgetArgument(r_34, 0);
              t_34 = ATgetArgument(r_34, 1);
              l_34 :
              if(match_string(s_34, ""))
                {
                  if(((o_34 != NULL) && (o_34 != t_34)))
                    _fail(t_34);
                  else
                    o_34 = t_34;
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
      t = not_null(o_34);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm i_80 (ATerm))
{
  ATerm x_34 (ATerm t)
  {
    ATerm d_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, x_34);
        ;
        LocalPopChoice(g_11);
      }
    else
      {
        t = d_11;
        {
          t = Nil_0(t);
          t = i_80(t);
        }
      }
    return(t);
  }
  t = x_34(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
  a_35 = t;
  z_34 :
  if(match_cons(a_35, sym__2))
    {
      b_35 = ATgetArgument(a_35, 0);
      c_35 = ATgetArgument(a_35, 1);
      {
        t = not_null(b_35);
        {
          ATerm a_2 (ATerm t)
          {
            t = not_null(c_35);
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
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm h_35 = NULL;
  h_35 = t;
  t = SSL_explode_string(not_null(h_35));
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
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, b_2);
            ;
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
            {
              ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
              q_35 = t;
              p_35 :
              if(match_cons(q_35, sym_Path_1))
                {
                  r_35 = ATgetArgument(q_35, 0);
                  t = not_null(r_35);
                }
              else
                {
                  if(match_cons(q_35, sym_Var_1))
                    {
                      r_35 = ATgetArgument(q_35, 0);
                      {
                        t = not_null(r_35);
                        {
                          ATerm p_11 = t;
                          int q_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(q_11);
                            }
                          else
                            {
                              t = p_11;
                              {
                                ATerm c_2 (ATerm t)
                                {
                                  t = term_r_11;
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
                      if(match_cons(q_35, sym_Prefix_2))
                        {
                          r_35 = ATgetArgument(q_35, 0);
                          s_35 = ATgetArgument(q_35, 1);
                          {
                            ATerm x_35 = NULL,z_35 = NULL;
                            ATerm s_11;
                            s_11 = t;
                            {
                              ATerm y_35 = NULL;
                              t = not_null(r_35);
                              {
                                t = eval_config_0(t);
                                {
                                  y_35 = t;
                                  if(((x_35 != NULL) && (x_35 != y_35)))
                                    _fail(y_35);
                                  else
                                    x_35 = y_35;
                                }
                              }
                            }
                            t = s_11;
                            {
                              ATerm a_36 = NULL;
                              t = not_null(s_35);
                              {
                                t = eval_config_0(t);
                                {
                                  a_36 = t;
                                  if(((z_35 != NULL) && (z_35 != a_36)))
                                    _fail(a_36);
                                  else
                                    z_35 = a_36;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_35), not_null(z_35));
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
  ATerm i_36 = NULL;
  i_36 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_t_11, not_null(i_36));
    {
      t = table_get_0(t);
      {
        ATerm d_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm u_11;
            u_11 = t;
            {
              ATerm k_36 = NULL;
              ATerm l_36 = NULL;
              l_36 = t;
              if(((k_36 != NULL) && (k_36 != l_36)))
                _fail(l_36);
              else
                k_36 = l_36;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_t_11, not_null(i_36), not_null(k_36));
                t = table_put_0(t);
              }
            }
            t = u_11;
          }
          return(t);
        }
        t = try_1(t, d_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm u_96 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    ATerm z_11;
    z_11 = t;
    {
      ATerm q_36 = NULL;
      ATerm r_36 = NULL;
      t = term_a_12;
      {
        t = get_config_0(t);
        {
          r_36 = t;
          if(((q_36 != NULL) && (q_36 != r_36)))
            _fail(r_36);
          else
            q_36 = r_36;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_36), term_b_12);
        t = geq_0(t);
      }
    }
    t = z_11;
    t = u_96(t);
    return(t);
  }
  t = try_1(t, e_2);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
  x_36 = t;
  v_36 :
  if(match_cons(x_36, sym__2))
    {
      y_36 = ATgetArgument(x_36, 0);
      z_36 = ATgetArgument(x_36, 1);
      w_36 :
      if(match_cons(z_36, sym_Stream_1))
        {
          a_37 = ATgetArgument(z_36, 0);
          {
            ATerm d_37 = NULL;
            t = SSL_fputc(not_null(y_36), not_null(a_37));
            {
              ATerm e_37 = NULL;
              e_37 = t;
              if(((d_37 != NULL) && (d_37 != e_37)))
                _fail(e_37);
              else
                d_37 = e_37;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_37));
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
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL;
  l_37 = t;
  j_37 :
  if(match_cons(l_37, sym__2))
    {
      m_37 = ATgetArgument(l_37, 0);
      o_37 = ATgetArgument(l_37, 1);
      k_37 :
      if(match_cons(m_37, sym_Stream_1))
        {
          n_37 = ATgetArgument(m_37, 0);
          {
            ATerm t_37 = NULL;
            t = SSL_write_term_to_stream_text(not_null(n_37), not_null(o_37));
            {
              ATerm u_37 = NULL;
              u_37 = t;
              if(((t_37 != NULL) && (t_37 != u_37)))
                _fail(u_37);
              else
                t_37 = u_37;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_37));
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
    ATerm y_37 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm z_37 = NULL;
      z_37 = t;
      if(((y_37 != NULL) && (y_37 != z_37)))
        _fail(z_37);
      else
        y_37 = z_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_12, not_null(y_37));
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
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL;
  f_38 = t;
  d_38 :
  if(match_cons(f_38, sym__2))
    {
      g_38 = ATgetArgument(f_38, 0);
      i_38 = ATgetArgument(f_38, 1);
      e_38 :
      if(match_cons(g_38, sym_Stream_1))
        {
          h_38 = ATgetArgument(g_38, 0);
          {
            ATerm l_38 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(h_38), not_null(i_38));
            {
              ATerm m_38 = NULL;
              m_38 = t;
              if(((l_38 != NULL) && (l_38 != m_38)))
                _fail(m_38);
              else
                l_38 = m_38;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_38));
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
ATerm WriteToFile_1 (ATerm t, ATerm q_95 (ATerm))
{
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
  t_38 = t;
  s_38 :
  if(match_cons(t_38, sym__2))
    {
      u_38 = ATgetArgument(t_38, 0);
      v_38 = ATgetArgument(t_38, 1);
      {
        ATerm y_38 = NULL,a_39 = NULL;
        t = not_null(u_38);
        {
          ATerm z_38 = NULL;
          z_38 = t;
          if(((y_38 != NULL) && (y_38 != z_38)))
            _fail(z_38);
          else
            y_38 = z_38;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_38), term_h_12);
            {
              t = open_stream_0(t);
              {
                ATerm b_39 = NULL;
                b_39 = t;
                if(((a_39 != NULL) && (a_39 != b_39)))
                  _fail(b_39);
                else
                  a_39 = b_39;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_39), not_null(v_38));
                  {
                    t = q_95(t);
                    {
                      t = fclose_0(t);
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  t = WriteToFile_1(t, write_in_baf_to_stream_0);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm j_39 = NULL;
  ATerm k_12;
  k_12 = t;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm l_12 = t;
      int m_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_2 (ATerm t)
          {
            ATerm k_39 = NULL,l_39 = NULL;
            k_39 = t;
            g_39 :
            if(match_cons(k_39, sym_Output_1))
              {
                l_39 = ATgetArgument(k_39, 0);
                if(((j_39 != NULL) && (j_39 != l_39)))
                  _fail(l_39);
                else
                  j_39 = l_39;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, h_2);
          ;
          LocalPopChoice(m_12);
        }
      else
        {
          t = l_12;
          {
            ATerm m_39 = NULL;
            t = term_n_12;
            {
              m_39 = t;
              if(((j_39 != NULL) && (j_39 != m_39)))
                _fail(m_39);
              else
                j_39 = m_39;
            }
          }
        }
      return(t);
    }
    t = _2(t, g_2, _id);
  }
  t = k_12;
  {
    ATerm i_2 (ATerm t)
    {
      ATerm j_2 (ATerm t)
      {
        t = not_null(j_39);
        return(t);
      }
      t = split_2(t, j_2, _id);
      return(t);
    }
    t = _2(t, _id, i_2);
    {
      ATerm o_12 = t;
      int p_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_2 (ATerm t)
          {
            ATerm l_2 (ATerm t)
            {
              ATerm n_39 = NULL;
              n_39 = t;
              i_39 :
              if(!(match_cons(n_39, sym_Binary_0)))
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
          LocalPopChoice(p_12);
        }
      else
        {
          t = o_12;
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
ATerm apply_strategy_1 (ATerm t, ATerm s_98 (ATerm))
{
  ATerm u_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL;
  ATerm q_12;
  q_12 = t;
  t = dtime_0(t);
  t = q_12;
  {
    t = s_98(t);
    {
      ATerm r_12;
      r_12 = t;
      {
        ATerm v_39 = NULL;
        t = dtime_0(t);
        {
          v_39 = t;
          if(((u_39 != NULL) && (u_39 != v_39)))
            _fail(v_39);
          else
            u_39 = v_39;
        }
      }
      t = r_12;
      {
        y_39 = t;
        t_39 :
        if(match_cons(y_39, sym__2))
          {
            z_39 = ATgetArgument(y_39, 0);
            a_40 = ATgetArgument(y_39, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_39)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(u_39))), not_null(a_40));
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
  ATerm i_40 = NULL,j_40 = NULL;
  ATerm p_40 (ATerm t)
  {
    t = SSL_fclose(not_null(j_40));
    return(t);
  }
  j_40 = t;
  h_40 :
  if(match_cons(j_40, sym_Stream_1))
    {
      i_40 = ATgetArgument(j_40, 0);
      {
        ATerm s_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(i_40));
            ;
            LocalPopChoice(t_12);
          }
        else
          {
            t = s_12;
            t = p_40(t);
          }
      }
    }
  else
    {
      t = p_40(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL;
  s_40 = t;
  r_40 :
  if(match_cons(s_40, sym_Stream_1))
    {
      t_40 = ATgetArgument(s_40, 0);
      t = SSL_read_term_from_stream(not_null(t_40));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm c_95 (ATerm))
{
  ATerm u_12;
  u_12 = t;
  {
    ATerm a_41 = NULL,d_41 = NULL;
    ATerm a_13;
    a_13 = t;
    {
      ATerm b_41 = NULL;
      t = c_95(t);
      {
        b_41 = t;
        if(((a_41 != NULL) && (a_41 != b_41)))
          _fail(b_41);
        else
          a_41 = b_41;
      }
    }
    t = a_13;
    {
      ATerm e_41 = NULL;
      e_41 = t;
      if(((d_41 != NULL) && (d_41 != e_41)))
        _fail(e_41);
      else
        d_41 = e_41;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_41)), not_null(a_41)));
        t = printnl_0(t);
      }
    }
  }
  t = u_12;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
  k_41 = t;
  j_41 :
  if(match_cons(k_41, sym__2))
    {
      l_41 = ATgetArgument(k_41, 0);
      m_41 = ATgetArgument(k_41, 1);
      {
        ATerm p_41 = NULL;
        t = SSL_fopen(not_null(l_41), not_null(m_41));
        {
          ATerm q_41 = NULL;
          q_41 = t;
          if(((p_41 != NULL) && (p_41 != q_41)))
            _fail(q_41);
          else
            p_41 = q_41;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_41));
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
  ATerm u_41 = NULL;
  u_41 = t;
  t = SSL_is_string(not_null(u_41));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm y_41 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm z_41 = NULL;
    z_41 = t;
    if(((y_41 != NULL) && (y_41 != z_41)))
      _fail(z_41);
    else
      y_41 = z_41;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_41));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm c_42 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm d_42 = NULL;
    d_42 = t;
    if(((c_42 != NULL) && (c_42 != d_42)))
      _fail(d_42);
    else
      c_42 = d_42;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_42));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm g_42 = NULL;
  t = SSL_stderr_stream();
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
ATerm stdio_stream_0 (ATerm t)
{
  ATerm n_42 = NULL;
  n_42 = t;
  m_42 :
  if(match_cons(n_42, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(n_42, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(n_42, sym_stdin_0))
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
  ATerm x_42 = NULL;
  ATerm z_42 = NULL,a_43 = NULL;
  x_42 = t;
  {
    ATerm b_43 = NULL;
    ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL;
    t = not_null(x_42);
    {
      b_43 = t;
      {
        t = SSL_explode_term(not_null(b_43));
        {
          d_43 = t;
          u_42 :
          if(match_cons(d_43, sym__2))
            {
              e_43 = ATgetArgument(d_43, 0);
              f_43 = ATgetArgument(d_43, 1);
              v_42 :
              if(match_string(e_43, ""))
                {
                  w_42 :
                  if(((ATgetType(f_43) == AT_LIST) && !(ATisEmpty(f_43))))
                    {
                      g_43 = ATgetFirst((ATermList) f_43);
                      h_43 = (ATerm) ATgetNext((ATermList) f_43);
                      {
                        if(((a_43 != NULL) && (a_43 != g_43)))
                          _fail(g_43);
                        else
                          a_43 = g_43;
                        if(((z_42 != NULL) && (z_42 != h_43)))
                          _fail(h_43);
                        else
                          z_42 = h_43;
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
    t = not_null(a_43);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL;
  p_43 = t;
  o_43 :
  if(match_cons(p_43, sym__2))
    {
      q_43 = ATgetArgument(p_43, 0);
      r_43 = ATgetArgument(p_43, 1);
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            {
              ATerm d_13 = t;
              int h_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_2 (ATerm t)
                  {
                    ATerm s_43 = NULL,t_43 = NULL;
                    s_43 = t;
                    n_43 :
                    if(match_cons(s_43, sym_Path_1))
                      {
                        t_43 = ATgetArgument(s_43, 0);
                        t = not_null(t_43);
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
                  LocalPopChoice(h_13);
                }
              else
                {
                  t = d_13;
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
  ATerm b_44 = NULL;
  ATerm j_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_43 = NULL;
      ATerm a_44 = NULL;
      a_44 = t;
      if(((z_43 != NULL) && (z_43 != a_44)))
        _fail(a_44);
      else
        z_43 = a_44;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_43), term_o_13);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(l_13);
    }
  else
    {
      t = j_13;
      {
        ATerm n_2 (ATerm t)
        {
          t = term_p_13;
          return(t);
        }
        t = debug_1(t, n_2);
        _fail(t);
      }
    }
  {
    ATerm q_13;
    q_13 = t;
    {
      ATerm c_44 = NULL;
      t = read_from_stream_0(t);
      {
        c_44 = t;
        if(((b_44 != NULL) && (b_44 != c_44)))
          _fail(c_44);
        else
          b_44 = c_44;
      }
    }
    t = q_13;
    {
      t = fclose_0(t);
      t = not_null(b_44);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm u_78 (ATerm), ATerm v_78 (ATerm))
{
  ATerm h_44 = NULL,j_44 = NULL;
  ATerm r_13;
  r_13 = t;
  {
    ATerm i_44 = NULL;
    t = u_78(t);
    {
      i_44 = t;
      if(((h_44 != NULL) && (h_44 != i_44)))
        _fail(i_44);
      else
        h_44 = i_44;
    }
  }
  t = r_13;
  {
    ATerm k_44 = NULL;
    t = v_78(t);
    {
      k_44 = t;
      if(((j_44 != NULL) && (j_44 != k_44)))
        _fail(k_44);
      else
        j_44 = k_44;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_44), not_null(j_44));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm q_44 = NULL;
  ATerm s_13;
  s_13 = t;
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_2 (ATerm t)
        {
          ATerm r_44 = NULL,s_44 = NULL;
          r_44 = t;
          o_44 :
          if(match_cons(r_44, sym_Input_1))
            {
              s_44 = ATgetArgument(r_44, 0);
              if(((q_44 != NULL) && (q_44 != s_44)))
                _fail(s_44);
              else
                q_44 = s_44;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, o_2);
        ;
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
        {
          ATerm t_44 = NULL;
          t = term_v_13;
          {
            t_44 = t;
            if(((q_44 != NULL) && (q_44 != t_44)))
              _fail(t_44);
            else
              q_44 = t_44;
          }
        }
      }
  }
  t = s_13;
  {
    ATerm p_2 (ATerm t)
    {
      t = not_null(q_44);
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
    ATerm y_44 = NULL;
    y_44 = t;
    w_44 :
    if(!(match_string(y_44, "-k")))
      {
        if(!(match_string(y_44, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm a_14;
    a_14 = t;
    {
      ATerm z_44 = NULL;
      ATerm a_45 = NULL;
      t = string_to_int_0(t);
      {
        a_45 = t;
        if(((z_44 != NULL) && (z_44 != a_45)))
          _fail(a_45);
        else
          z_44 = a_45;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_14, not_null(z_44));
        t = set_config_0(t);
      }
    }
    t = a_14;
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = term_c_14;
    return(t);
  }
  t = ArgOption_3(t, q_2, r_2, s_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm d_45 = NULL;
  d_45 = t;
  t = SSL_string_to_int(not_null(d_45));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_2 (ATerm t)
      {
        ATerm l_45 = NULL;
        l_45 = t;
        g_45 :
        if(!(match_string(l_45, "-S")))
          {
            if(!(match_string(l_45, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm u_2 (ATerm t)
      {
        t = term_g_14;
        t = set_config_0(t);
        t = term_h_14;
        return(t);
      }
      ATerm v_2 (ATerm t)
      {
        t = term_i_14;
        return(t);
      }
      t = Option_3(t, t_2, u_2, v_2);
      ;
      LocalPopChoice(e_14);
    }
  else
    {
      t = d_14;
      {
        ATerm p_14 = t;
        int q_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_2 (ATerm t)
            {
              ATerm m_45 = NULL;
              m_45 = t;
              h_45 :
              if(!(match_string(m_45, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm x_2 (ATerm t)
            {
              ATerm p_45 = NULL;
              ATerm r_14;
              r_14 = t;
              {
                ATerm n_45 = NULL;
                ATerm o_45 = NULL;
                t = string_to_int_0(t);
                {
                  o_45 = t;
                  if(((n_45 != NULL) && (n_45 != o_45)))
                    _fail(o_45);
                  else
                    n_45 = o_45;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_12, not_null(n_45));
                  t = set_config_0(t);
                }
              }
              t = r_14;
              {
                ATerm q_45 = NULL;
                q_45 = t;
                if(((p_45 != NULL) && (p_45 != q_45)))
                  _fail(q_45);
                else
                  p_45 = q_45;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(p_45));
              }
              return(t);
            }
            ATerm y_2 (ATerm t)
            {
              t = term_s_14;
              return(t);
            }
            t = ArgOption_3(t, w_2, x_2, y_2);
            ;
            LocalPopChoice(q_14);
          }
        else
          {
            t = p_14;
            {
              ATerm z_2 (ATerm t)
              {
                ATerm r_45 = NULL;
                r_45 = t;
                k_45 :
                if(!(match_string(r_45, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm a_3 (ATerm t)
              {
                t = term_x_14;
                t = set_config_0(t);
                t = term_z_14;
                return(t);
              }
              ATerm b_3 (ATerm t)
              {
                t = term_b_15;
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
  ATerm d_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(g_15);
    }
  else
    {
      t = d_15;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm x_45 = NULL;
    x_45 = t;
    u_45 :
    if(!(match_string(x_45, "-o")))
      {
        if(!(match_string(x_45, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    ATerm a_46 = NULL;
    ATerm h_15;
    h_15 = t;
    {
      ATerm y_45 = NULL;
      ATerm z_45 = NULL;
      z_45 = t;
      if(((y_45 != NULL) && (y_45 != z_45)))
        _fail(z_45);
      else
        y_45 = z_45;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_15, not_null(y_45));
        t = set_config_0(t);
      }
    }
    t = h_15;
    {
      ATerm b_46 = NULL;
      b_46 = t;
      if(((a_46 != NULL) && (a_46 != b_46)))
        _fail(b_46);
      else
        a_46 = b_46;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_46));
    }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_j_15;
    return(t);
  }
  t = ArgOption_3(t, c_3, d_3, e_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      {
        ATerm f_3 (ATerm t)
        {
          ATerm f_46 = NULL;
          f_46 = t;
          e_46 :
          if(!(match_string(f_46, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm g_3 (ATerm t)
        {
          t = term_n_15;
          t = set_config_0(t);
          t = term_o_15;
          return(t);
        }
        ATerm h_3 (ATerm t)
        {
          t = term_w_15;
          return(t);
        }
        t = Option_3(t, f_3, g_3, h_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm l_46 = NULL,m_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
  l_46 = t;
  j_46 :
  if(match_string(l_46, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(l_46) == AT_LIST) && !(ATisEmpty(l_46))))
        {
          m_46 = ATgetFirst((ATermList) l_46);
          q_46 = (ATerm) ATgetNext((ATermList) l_46);
          k_46 :
          if(((ATgetType(q_46) == AT_LIST) && !(ATisEmpty(q_46))))
            {
              r_46 = ATgetFirst((ATermList) q_46);
              s_46 = (ATerm) ATgetNext((ATermList) q_46);
              {
                ATerm w_46 = NULL;
                ATerm a_16;
                a_16 = t;
                {
                  t = not_null(m_46);
                  t = k_0(t);
                }
                t = a_16;
                {
                  ATerm x_46 = NULL;
                  t = not_null(r_46);
                  {
                    t = m_0(t);
                    {
                      x_46 = t;
                      if(((w_46 != NULL) && (w_46 != x_46)))
                        _fail(x_46);
                      else
                        w_46 = x_46;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_46)), not_null(w_46));
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
    ATerm e_47 = NULL;
    e_47 = t;
    b_47 :
    if(!(match_string(e_47, "-i")))
      {
        if(!(match_string(e_47, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    ATerm h_47 = NULL;
    ATerm b_16;
    b_16 = t;
    {
      ATerm f_47 = NULL;
      ATerm g_47 = NULL;
      g_47 = t;
      if(((f_47 != NULL) && (f_47 != g_47)))
        _fail(g_47);
      else
        f_47 = g_47;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_16, not_null(f_47));
        t = set_config_0(t);
      }
    }
    t = b_16;
    {
      ATerm i_47 = NULL;
      i_47 = t;
      if(((h_47 != NULL) && (h_47 != i_47)))
        _fail(i_47);
      else
        h_47 = i_47;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_47));
    }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = term_d_16;
    return(t);
  }
  t = ArgOption_3(t, i_3, j_3, k_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm e_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(k_16);
    }
  else
    {
      t = e_16;
      {
        ATerm l_16 = t;
        int p_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(p_16);
          }
        else
          {
            t = l_16;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm m_47 = NULL;
  t = report_run_time_0(t);
  {
    ATerm n_47 = NULL;
    t = term_o_7;
    {
      t = whoami_0(t);
      {
        n_47 = t;
        if(((m_47 != NULL) && (m_47 != n_47)))
          _fail(n_47);
        else
          m_47 = n_47;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATinsert(ATempty, term_q_16), not_null(m_47)));
      {
        t = printnl_0(t);
        {
          t = term_u_10;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_r_16;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm q_47 = NULL;
  q_47 = t;
  t = SSL_TicksToSeconds(not_null(q_47));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL;
  v_47 = t;
  u_47 :
  if(match_cons(v_47, sym__2))
    {
      w_47 = ATgetArgument(v_47, 0);
      x_47 = ATgetArgument(v_47, 1);
      {
        ATerm s_16 = t;
        int t_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_47), not_null(x_47));
            ;
            LocalPopChoice(t_16);
          }
        else
          {
            t = s_16;
            t = SSL_addr(not_null(w_47), not_null(x_47));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm i_86 (ATerm), ATerm j_86 (ATerm))
{
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_86(t);
      ;
      LocalPopChoice(w_16);
    }
  else
    {
      t = v_16;
      {
        ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL;
        e_48 = t;
        d_48 :
        if(((ATgetType(e_48) == AT_LIST) && !(ATisEmpty(e_48))))
          {
            f_48 = ATgetFirst((ATermList) e_48);
            g_48 = (ATerm) ATgetNext((ATermList) e_48);
            {
              ATerm j_48 = NULL;
              ATerm k_48 = NULL;
              t = not_null(g_48);
              {
                t = foldr_2(t, i_86, j_86);
                {
                  k_48 = t;
                  if(((j_48 != NULL) && (j_48 != k_48)))
                    _fail(k_48);
                  else
                    j_48 = k_48;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_48), not_null(j_48));
                t = j_86(t);
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
ATerm crush_2 (ATerm t, ATerm g_84 (ATerm), ATerm h_84 (ATerm))
{
  ATerm x_48 = NULL;
  ATerm z_48 = NULL;
  x_48 = t;
  {
    ATerm a_49 = NULL;
    ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
    t = not_null(x_48);
    {
      a_49 = t;
      {
        t = SSL_explode_term(not_null(a_49));
        {
          c_49 = t;
          w_48 :
          if(match_cons(c_49, sym__2))
            {
              d_49 = ATgetArgument(c_49, 0);
              e_49 = ATgetArgument(c_49, 1);
              if(((z_48 != NULL) && (z_48 != e_49)))
                _fail(e_49);
              else
                z_48 = e_49;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_48);
      t = foldr_2(t, g_84, h_84);
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
      t = term_f_14;
      return(t);
    }
    t = crush_2(t, l_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL;
  k_49 = t;
  j_49 :
  if(match_cons(k_49, sym__2))
    {
      l_49 = ATgetArgument(k_49, 0);
      m_49 = ATgetArgument(k_49, 1);
      {
        ATerm x_16;
        x_16 = t;
        {
          ATerm y_16 = t;
          int z_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_49), not_null(m_49));
              ;
              LocalPopChoice(z_16);
            }
          else
            {
              t = y_16;
              t = SSL_gtr(not_null(l_49), not_null(m_49));
            }
        }
        t = x_16;
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
  ATerm s_49 = NULL;
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL;
      t_49 = t;
      r_49 :
      if(match_cons(t_49, sym__2))
        {
          u_49 = ATgetArgument(t_49, 0);
          v_49 = ATgetArgument(t_49, 1);
          {
            if(((s_49 != NULL) && (s_49 != u_49)))
              _fail(u_49);
            else
              s_49 = u_49;
            if(((s_49 != NULL) && (s_49 != v_49)))
              _fail(v_49);
            else
              s_49 = v_49;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(b_17);
    }
  else
    {
      t = a_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm t_96 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm g_17;
    g_17 = t;
    {
      ATerm y_49 = NULL;
      ATerm z_49 = NULL;
      t = term_a_12;
      {
        t = get_config_0(t);
        {
          z_49 = t;
          if(((y_49 != NULL) && (y_49 != z_49)))
            _fail(z_49);
          else
            y_49 = z_49;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_49), term_u_10);
        t = geq_0(t);
      }
    }
    t = g_17;
    t = t_96(t);
    return(t);
  }
  t = try_1(t, m_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm d_50 = NULL,f_50 = NULL;
    ATerm h_17;
    h_17 = t;
    {
      ATerm e_50 = NULL;
      t = run_time_0(t);
      {
        e_50 = t;
        if(((d_50 != NULL) && (d_50 != e_50)))
          _fail(e_50);
        else
          d_50 = e_50;
      }
    }
    t = h_17;
    {
      ATerm g_50 = NULL;
      t = term_o_7;
      {
        t = whoami_0(t);
        {
          g_50 = t;
          if(((f_50 != NULL) && (f_50 != g_50)))
            _fail(g_50);
          else
            f_50 = g_50;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_17), not_null(d_50)), term_i_17), not_null(f_50)));
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
    t = term_f_14;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_50 = NULL;
  n_50 = t;
  m_50 :
  if(match_cons(n_50, sym_Version_0))
    {
      ATerm p_50 = NULL,r_50 = NULL;
      ATerm o_17;
      o_17 = t;
      {
        ATerm q_50 = NULL;
        t = SSLgetAnnotations(not_null(n_50));
        {
          q_50 = t;
          if(((p_50 != NULL) && (p_50 != q_50)))
            _fail(q_50);
          else
            p_50 = q_50;
        }
      }
      t = o_17;
      {
        ATerm s_50 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(p_50));
        {
          s_50 = t;
          if(((r_50 != NULL) && (r_50 != s_50)))
            _fail(s_50);
          else
            r_50 = s_50;
        }
        t = not_null(r_50);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_99 (ATerm))
{
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_17;
      t = get_config_0(t);
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
      {
        ATerm o_3 (ATerm t)
        {
          ATerm u_17 = t;
          int v_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(v_17);
            }
          else
            {
              t = u_17;
              {
                ATerm w_17 = t;
                int y_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(y_17);
                  }
                else
                  {
                    t = w_17;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, o_3);
      }
    }
  t = q_99(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_50 = NULL;
  x_50 = t;
  t = SSL_table_create(not_null(x_50));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_51 = NULL;
  b_51 = t;
  {
    ATerm z_17;
    z_17 = t;
    {
      t = term_a_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_18, term_b_18, not_null(b_51));
          t = table_put_0(t);
        }
      }
    }
    t = z_17;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm f_51 = NULL;
  f_51 = t;
  t = SSL_table_destroy(not_null(f_51));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_51 = NULL;
  j_51 = t;
  t = SSL_exit(not_null(j_51));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm r_101 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_79 (ATerm))
{
  ATerm m_51 (ATerm t)
  {
    ATerm c_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = c_18;
        t = Cons_2(t, s_79, m_51);
      }
    return(t);
  }
  t = m_51(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL;
  v_51 = t;
  s_51 :
  if(((ATgetType(v_51) == AT_LIST) && !(ATisEmpty(v_51))))
    {
      t_51 = ATgetFirst((ATermList) v_51);
      u_51 = (ATerm) ATgetNext((ATermList) v_51);
      {
        ATerm c_52 = NULL;
        t = not_null(u_51);
        {
          ATerm g_18;
          g_18 = t;
          {
            ATerm d_52 = NULL,k_52 = NULL,m_52 = NULL;
            ATerm j_18;
            j_18 = t;
            {
              ATerm j_52 = NULL;
              t = i_0(t);
              {
                j_52 = t;
                if(((d_52 != NULL) && (d_52 != j_52)))
                  _fail(j_52);
                else
                  d_52 = j_52;
              }
            }
            t = j_18;
            {
              ATerm l_52 = NULL;
              t = not_null(t_51);
              {
                t = g_0(t);
                {
                  l_52 = t;
                  if(((k_52 != NULL) && (k_52 != l_52)))
                    _fail(l_52);
                  else
                    k_52 = l_52;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(d_52)), not_null(k_52));
                {
                  m_52 = t;
                  if(((c_52 != NULL) && (c_52 != m_52)))
                    _fail(m_52);
                  else
                    c_52 = m_52;
                }
              }
            }
          }
          t = g_18;
          {
            ATerm p_3 (ATerm t)
            {
              t = not_null(c_52);
              return(t);
            }
            t = reverse_acc_2(t, g_0, p_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(v_51) == AT_LIST) && ATisEmpty(v_51)))
        {
          {
            t = term_o_7;
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
ATerm short_description_1 (ATerm t, ATerm q_101 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm x_52 = NULL,y_52 = NULL;
  x_52 = t;
  w_52 :
  if(match_cons(x_52, sym_Program_1))
    {
      y_52 = ATgetArgument(x_52, 0);
      {
        ATerm b_53 = NULL,d_53 = NULL;
        ATerm c_53 = NULL;
        t = SSLgetAnnotations(not_null(x_52));
        {
          c_53 = t;
          if(((b_53 != NULL) && (b_53 != c_53)))
            _fail(c_53);
          else
            b_53 = c_53;
        }
        {
          t = not_null(y_52);
          {
            ATerm f_53 = NULL;
            t = h_75(t);
            {
              d_53 = t;
              {
                ATerm g_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(d_53)), not_null(b_53));
                {
                  g_53 = t;
                  if(((f_53 != NULL) && (f_53 != g_53)))
                    _fail(g_53);
                  else
                    f_53 = g_53;
                }
                t = not_null(f_53);
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
  ATerm w_53 = NULL;
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_53 = NULL;
      t = term_r_16;
      {
        t = get_config_0(t);
        {
          x_53 = t;
          if(((w_53 != NULL) && (w_53 != x_53)))
            _fail(x_53);
          else
            w_53 = x_53;
        }
      }
      ;
      LocalPopChoice(l_18);
    }
  else
    {
      t = k_18;
      {
        ATerm r_3 (ATerm t)
        {
          ATerm s_3 (ATerm t)
          {
            ATerm y_53 = NULL;
            y_53 = t;
            if(((w_53 != NULL) && (w_53 != y_53)))
              _fail(y_53);
            else
              w_53 = y_53;
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
        t = not_null(w_53);
        return(t);
      }
      t = short_description_1(t, u_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, t_3);
    {
      t = term_m_18;
      {
        t = echo_0(t);
        {
          t = term_e_19;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm v_3 (ATerm t)
                {
                  ATerm z_53 = NULL;
                  ATerm a_54 = NULL;
                  a_54 = t;
                  if(((z_53 != NULL) && (z_53 != a_54)))
                    _fail(a_54);
                  else
                    z_53 = a_54;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_53)), term_k_19);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, v_3);
                {
                  ATerm w_3 (ATerm t)
                  {
                    ATerm b_54 = NULL;
                    ATerm c_54 = NULL;
                    ATerm x_3 (ATerm t)
                    {
                      t = not_null(w_53);
                      return(t);
                    }
                    t = long_description_1(t, x_3);
                    {
                      c_54 = t;
                      if(((b_54 != NULL) && (b_54 != c_54)))
                        _fail(c_54);
                      else
                        b_54 = c_54;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(b_54)), term_l_19);
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
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_75 (ATerm))
{
  ATerm n_54 = NULL,o_54 = NULL;
  n_54 = t;
  m_54 :
  if(match_cons(n_54, sym_Undefined_1))
    {
      o_54 = ATgetArgument(n_54, 0);
      {
        ATerm r_54 = NULL,t_54 = NULL;
        ATerm s_54 = NULL;
        t = SSLgetAnnotations(not_null(n_54));
        {
          s_54 = t;
          if(((r_54 != NULL) && (r_54 != s_54)))
            _fail(s_54);
          else
            r_54 = s_54;
        }
        {
          t = not_null(o_54);
          {
            ATerm v_54 = NULL;
            t = i_75(t);
            {
              t_54 = t;
              {
                ATerm w_54 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_54)), not_null(r_54));
                {
                  w_54 = t;
                  if(((v_54 != NULL) && (v_54 != w_54)))
                    _fail(w_54);
                  else
                    v_54 = w_54;
                }
                t = not_null(v_54);
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
ATerm fetch_1 (ATerm t, ATerm c_80 (ATerm))
{
  ATerm h_55 (ATerm t)
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, c_80, _id);
        ;
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        t = Cons_2(t, _id, h_55);
      }
    return(t);
  }
  t = h_55(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_100 (ATerm))
{
  t = fetch_1(t, q_100);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL;
  k_55 = t;
  j_55 :
  if(((ATgetType(k_55) == AT_LIST) && ATisEmpty(k_55)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(k_55) == AT_LIST) && !(ATisEmpty(k_55))))
        {
          l_55 = ATgetFirst((ATermList) k_55);
          m_55 = (ATerm) ATgetNext((ATermList) k_55);
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
  ATerm u_19;
  u_19 = t;
  {
    ATerm p_55 = NULL;
    ATerm s_55 = NULL;
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        {
          ATerm q_55 = NULL;
          ATerm r_55 = NULL;
          r_55 = t;
          if(((q_55 != NULL) && (q_55 != r_55)))
            _fail(r_55);
          else
            q_55 = r_55;
          t = (ATerm) ATinsert(ATempty, not_null(q_55));
        }
      }
    {
      s_55 = t;
      if(((p_55 != NULL) && (p_55 != s_55)))
        _fail(s_55);
      else
        p_55 = s_55;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_12, not_null(p_55));
      t = printnl_0(t);
    }
  }
  t = u_19;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_r_16;
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
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(c_20);
    }
  else
    {
      t = b_20;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_55 = NULL;
  z_55 = t;
  y_55 :
  if(match_cons(z_55, sym_Help_0))
    {
      ATerm b_56 = NULL,d_56 = NULL;
      ATerm h_20;
      h_20 = t;
      {
        ATerm c_56 = NULL;
        t = SSLgetAnnotations(not_null(z_55));
        {
          c_56 = t;
          if(((b_56 != NULL) && (b_56 != c_56)))
            _fail(c_56);
          else
            b_56 = c_56;
        }
      }
      t = h_20;
      {
        ATerm e_56 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_56));
        {
          e_56 = t;
          if(((d_56 != NULL) && (d_56 != e_56)))
            _fail(e_56);
          else
            d_56 = e_56;
        }
        t = not_null(d_56);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm z_87 (ATerm))
{
  ATerm i_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_87(t);
      ;
      LocalPopChoice(l_20);
    }
  else
    {
      t = i_20;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_3 (ATerm t)
      {
        ATerm k_56 = NULL;
        k_56 = t;
        i_56 :
        if(!(match_string(k_56, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm z_3 (ATerm t)
      {
        t = term_p_20;
        t = set_config_0(t);
        return(t);
      }
      ATerm a_4 (ATerm t)
      {
        t = term_z_20;
        return(t);
      }
      t = Option_3(t, y_3, z_3, a_4);
      ;
      LocalPopChoice(n_20);
    }
  else
    {
      t = m_20;
      {
        ATerm b_4 (ATerm t)
        {
          ATerm l_56 = NULL;
          l_56 = t;
          j_56 :
          if(!(match_string(l_56, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm c_4 (ATerm t)
        {
          t = term_p_20;
          {
            t = set_config_0(t);
            {
              t = term_b_21;
              t = set_config_0(t);
            }
          }
          t = term_c_21;
          return(t);
        }
        ATerm d_4 (ATerm t)
        {
          t = term_d_21;
          return(t);
        }
        t = Option_3(t, b_4, c_4, d_4);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL;
  o_56 = t;
  n_56 :
  if(match_cons(o_56, sym__2))
    {
      p_56 = ATgetArgument(o_56, 0);
      q_56 = ATgetArgument(o_56, 1);
      t = SSL_table_get(not_null(p_56), not_null(q_56));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL;
  x_56 = t;
  w_56 :
  if(match_cons(x_56, sym__3))
    {
      y_56 = ATgetArgument(x_56, 0);
      z_56 = ATgetArgument(x_56, 1);
      a_57 = ATgetArgument(x_56, 2);
      {
        ATerm e_21;
        e_21 = t;
        {
          ATerm e_57 = NULL;
          ATerm f_57 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_56), not_null(z_56));
          {
            ATerm j_21 = t;
            int k_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(k_21);
              }
            else
              {
                t = j_21;
                t = (ATerm) ATempty;
              }
            {
              f_57 = t;
              if(((e_57 != NULL) && (e_57 != f_57)))
                _fail(f_57);
              else
                e_57 = f_57;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_56), not_null(z_56), (ATerm) ATinsert(CheckATermList(not_null(e_57)), not_null(a_57)));
            t = table_put_0(t);
          }
        }
        t = e_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm v_101 (ATerm))
{
  ATerm j_57 = NULL;
  ATerm k_57 = NULL;
  t = term_o_7;
  {
    t = v_101(t);
    {
      k_57 = t;
      if(((j_57 != NULL) && (j_57 != k_57)))
        _fail(k_57);
      else
        j_57 = k_57;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_n_18, term_d_19, not_null(j_57));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL;
  v_57 = t;
  u_57 :
  if(match_string(v_57, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(v_57) == AT_LIST) && !(ATisEmpty(v_57))))
        {
          w_57 = ATgetFirst((ATermList) v_57);
          x_57 = (ATerm) ATgetNext((ATermList) v_57);
          {
            ATerm a_58 = NULL;
            ATerm l_21;
            l_21 = t;
            {
              t = not_null(w_57);
              t = a_0(t);
            }
            t = l_21;
            {
              ATerm b_58 = NULL;
              t = term_o_7;
              {
                t = b_0(t);
                {
                  b_58 = t;
                  if(((a_58 != NULL) && (a_58 != b_58)))
                    _fail(b_58);
                  else
                    a_58 = b_58;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_57)), not_null(a_58));
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
    ATerm k_58 = NULL;
    k_58 = t;
    j_58 :
    if(!(match_string(k_58, "--help")))
      {
        if(!(match_string(k_58, "-h")))
          {
            if(!(match_string(k_58, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = term_m_21;
    {
      t = set_config_0(t);
      t = term_n_21;
    }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = term_o_21;
    return(t);
  }
  t = Option_3(t, e_4, f_4, g_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL;
  n_58 = t;
  m_58 :
  if(((ATgetType(n_58) == AT_LIST) && !(ATisEmpty(n_58))))
    {
      o_58 = ATgetFirst((ATermList) n_58);
      p_58 = (ATerm) ATgetNext((ATermList) n_58);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_58)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_58)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_62 (ATerm), ATerm k_62 (ATerm))
{
  ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL;
  z_58 = t;
  y_58 :
  if(((ATgetType(z_58) == AT_LIST) && !(ATisEmpty(z_58))))
    {
      a_59 = ATgetFirst((ATermList) z_58);
      b_59 = (ATerm) ATgetNext((ATermList) z_58);
      {
        ATerm f_59 = NULL,h_59 = NULL;
        ATerm g_59 = NULL;
        t = SSLgetAnnotations(not_null(z_58));
        {
          g_59 = t;
          if(((f_59 != NULL) && (f_59 != g_59)))
            _fail(g_59);
          else
            f_59 = g_59;
        }
        {
          t = not_null(a_59);
          {
            ATerm j_59 = NULL;
            t = j_62(t);
            {
              h_59 = t;
              {
                t = not_null(b_59);
                {
                  ATerm l_59 = NULL;
                  t = k_62(t);
                  {
                    j_59 = t;
                    {
                      ATerm m_59 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(j_59)), not_null(h_59)), not_null(f_59));
                      {
                        m_59 = t;
                        if(((l_59 != NULL) && (l_59 != m_59)))
                          _fail(m_59);
                        else
                          l_59 = m_59;
                      }
                      t = not_null(l_59);
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
  ATerm w_59 = NULL;
  w_59 = t;
  v_59 :
  if(((ATgetType(w_59) == AT_LIST) && ATisEmpty(w_59)))
    {
      {
        ATerm y_59 = NULL,a_60 = NULL;
        ATerm p_21;
        p_21 = t;
        {
          ATerm z_59 = NULL;
          t = SSLgetAnnotations(not_null(w_59));
          {
            z_59 = t;
            if(((y_59 != NULL) && (y_59 != z_59)))
              _fail(z_59);
            else
              y_59 = z_59;
          }
        }
        t = p_21;
        {
          ATerm b_60 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(y_59));
          {
            b_60 = t;
            if(((a_60 != NULL) && (a_60 != b_60)))
              _fail(b_60);
            else
              a_60 = b_60;
          }
          t = not_null(a_60);
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
  ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL;
  h_60 = t;
  g_60 :
  if(match_cons(h_60, sym__2))
    {
      i_60 = ATgetArgument(h_60, 0);
      j_60 = ATgetArgument(h_60, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_t_11, not_null(i_60), not_null(j_60));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm t_101 (ATerm))
{
  ATerm u_21;
  u_21 = t;
  {
    ATerm h_4 (ATerm t)
    {
      t = term_v_21;
      t = t_101(t);
      return(t);
    }
    t = try_1(t, h_4);
  }
  t = u_21;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm r_60 = NULL;
      ATerm w_21;
      w_21 = t;
      {
        ATerm p_60 = NULL;
        ATerm q_60 = NULL;
        q_60 = t;
        if(((p_60 != NULL) && (p_60 != q_60)))
          _fail(q_60);
        else
          p_60 = q_60;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_16, not_null(p_60));
          t = set_config_0(t);
        }
      }
      t = w_21;
      {
        ATerm s_60 = NULL;
        s_60 = t;
        if(((r_60 != NULL) && (r_60 != s_60)))
          _fail(s_60);
        else
          r_60 = s_60;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_60));
      }
      return(t);
    }
    ATerm j_4 (ATerm t)
    {
      ATerm a_22 = t;
      int c_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_22 = t;
          int g_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(g_22);
            }
          else
            {
              t = f_22;
              {
                t = t_101(t);
                t = Cons_2(t, _id, j_4);
              }
            }
          ;
          LocalPopChoice(c_22);
        }
      else
        {
          t = a_22;
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
  ATerm y_60 = NULL,z_60 = NULL,c_61 = NULL;
  ATerm h_22;
  h_22 = t;
  {
    ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL;
    d_61 = t;
    x_60 :
    if(match_cons(d_61, sym__3))
      {
        e_61 = ATgetArgument(d_61, 0);
        f_61 = ATgetArgument(d_61, 1);
        g_61 = ATgetArgument(d_61, 2);
        {
          if(((y_60 != NULL) && (y_60 != e_61)))
            _fail(e_61);
          else
            y_60 = e_61;
          {
            if(((z_60 != NULL) && (z_60 != f_61)))
              _fail(f_61);
            else
              z_60 = f_61;
            {
              if(((c_61 != NULL) && (c_61 != g_61)))
                _fail(g_61);
              else
                c_61 = g_61;
              t = SSL_table_put(not_null(y_60), not_null(z_60), not_null(c_61));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = h_22;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_101 (ATerm))
{
  ATerm j_61 = NULL;
  ATerm i_22;
  i_22 = t;
  {
    t = term_j_22;
    t = table_put_0(t);
  }
  t = i_22;
  {
    ATerm m_4 (ATerm t)
    {
      ATerm k_22 = t;
      int l_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_101(t);
          ;
          LocalPopChoice(l_22);
        }
      else
        {
          t = k_22;
          {
            ATerm q_22 = t;
            int s_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(s_22);
              }
            else
              {
                t = q_22;
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
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_22;
            v_22 = t;
            {
              ATerm w_22 = t;
              int x_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_t_17;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(x_22);
                }
              else
                {
                  t = w_22;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = v_22;
            {
              t = system_usage_0(t);
              {
                t = term_f_14;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(u_22);
          }
        else
          {
            t = t_22;
            {
              ATerm y_22 = t;
              int c_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_23;
                  d_23 = t;
                  {
                    t = term_o_20;
                    t = get_config_0(t);
                  }
                  t = d_23;
                  {
                    t = system_about_0(t);
                    {
                      t = term_f_14;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(c_23);
                }
              else
                {
                  t = y_22;
                  {
                    ATerm o_4 (ATerm t)
                    {
                      ATerm p_4 (ATerm t)
                      {
                        ATerm k_61 = NULL;
                        k_61 = t;
                        if(((j_61 != NULL) && (j_61 != k_61)))
                          _fail(k_61);
                        else
                          j_61 = k_61;
                        return(t);
                      }
                      t = Undefined_1(t, p_4);
                      return(t);
                    }
                    t = option_defined_1(t, o_4);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_61)), term_h_23));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_u_10;
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
        ATerm k_23;
        k_23 = t;
        {
          t = term_n_18;
          t = table_destroy_0(t);
        }
        t = k_23;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm v_99 (ATerm))
{
  t = parse_options_1(t, s_99);
  {
    t = store_options_0(t);
    {
      t = u_99(t);
      {
        ATerm l_23 = t;
        int m_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, t_99);
            ;
            LocalPopChoice(m_23);
          }
        else
          {
            t = l_23;
            {
              ATerm n_23 = t;
              int o_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_99(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(o_23);
                }
              else
                {
                  t = n_23;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm k_99 (ATerm))
{
  ATerm q_4 (ATerm t)
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_99(t);
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, h_99);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, q_4, j_99, k_99, r_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm))
{
  ATerm s_4 (ATerm t)
  {
    ATerm t_4 (ATerm t)
    {
      ATerm w_23;
      w_23 = t;
      {
        ATerm n_61 = NULL;
        ATerm o_61 = NULL;
        t = term_r_16;
        {
          t = get_config_0(t);
          {
            o_61 = t;
            if(((n_61 != NULL) && (n_61 != o_61)))
              _fail(o_61);
            else
              n_61 = o_61;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_4, (ATerm) ATinsert(ATempty, not_null(n_61)));
          t = printnl_0(t);
        }
      }
      t = w_23;
      return(t);
    }
    t = if_verbose2_1(t, t_4);
    return(t);
  }
  t = iowrap_4(t, b_99, c_99, d_99, s_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm z_98 (ATerm), ATerm a_99 (ATerm))
{
  t = iowrap_3(t, z_98, a_99, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm w_98 (ATerm))
{
  ATerm u_4 (ATerm t)
  {
    t = _2(t, _id, w_98);
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
