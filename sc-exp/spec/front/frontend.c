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
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Con_3;
Symbol sym_TupleCong_1;
Symbol sym_TupleCong_0;
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_TupleCong_1 = ATmakeSymbol("TupleCong", 1, ATfalse);
  ATprotectSymbol(sym_TupleCong_1);
  sym_TupleCong_0 = ATmakeSymbol("TupleCong", 0, ATfalse);
  ATprotectSymbol(sym_TupleCong_0);
  init_constant_terms();
}
ATerm term_l_62;
ATerm term_s_61;
ATerm term_d_61;
ATerm term_f_60;
ATerm term_e_60;
ATerm term_d_60;
ATerm term_y_59;
ATerm term_x_59;
ATerm term_w_59;
ATerm term_v_59;
ATerm term_u_59;
ATerm term_t_59;
ATerm term_s_59;
ATerm term_s_58;
ATerm term_r_58;
ATerm term_q_58;
ATerm term_p_58;
ATerm term_o_58;
ATerm term_n_58;
ATerm term_w_57;
ATerm term_v_57;
ATerm term_m_57;
ATerm term_f_57;
ATerm term_y_56;
ATerm term_k_56;
ATerm term_j_56;
ATerm term_n_55;
ATerm term_m_55;
ATerm term_j_55;
ATerm term_i_55;
ATerm term_h_55;
ATerm term_g_55;
ATerm term_d_55;
ATerm term_c_55;
ATerm term_y_54;
ATerm term_x_54;
ATerm term_w_54;
ATerm term_v_54;
ATerm term_u_54;
ATerm term_q_54;
ATerm term_p_54;
ATerm term_o_54;
ATerm term_j_54;
ATerm term_i_54;
ATerm term_g_54;
ATerm term_p_53;
ATerm term_n_53;
ATerm term_j_52;
ATerm term_z_51;
ATerm term_y_51;
ATerm term_u_51;
ATerm term_s_51;
ATerm term_r_50;
ATerm term_c_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_w_49;
ATerm term_v_49;
ATerm term_q_49;
ATerm term_p_49;
ATerm term_o_49;
ATerm term_j_49;
ATerm term_i_49;
ATerm term_w_48;
ATerm term_k_48;
ATerm term_i_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_e_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_x_43;
ATerm term_q_43;
ATerm term_m_43;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_r_39;
ATerm term_p_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_z_38;
ATerm term_x_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_b_38;
ATerm term_o_37;
ATerm term_m_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_i_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_o_32;
ATerm term_l_32;
ATerm term_z_31;
ATerm term_u_31;
ATerm term_q_31;
ATerm term_i_31;
ATerm term_g_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_b_29;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_p_28;
ATerm term_f_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_p_27;
ATerm term_h_27;
ATerm term_e_27;
ATerm term_v_26;
ATerm term_r_26;
ATerm term_o_26;
ATerm term_k_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_h_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_v_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_a_24;
ATerm term_t_23;
ATerm term_p_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_r_17;
ATerm term_f_16;
ATerm term_w_15;
ATerm term_t_15;
ATerm term_j_15;
ATerm term_b_15;
void init_constant_terms (void)
{
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Op_2, term_b_23, (ATerm) ATempty);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_ConstType_1, term_c_23);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Var_1, term_i_23);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_Var_1, term_m_23);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Anno_2, term_l_23, term_p_23);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_Var_1, term_a_24);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Var_1, term_k_24);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Anno_2, term_j_24, term_l_24);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_23);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Call_2, term_n_24, (ATerm) ATempty);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_BAM_3, term_o_24, term_l_23, term_j_24);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_23);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_Call_2, term_q_24, (ATerm) ATempty);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_BAM_3, term_r_24, term_p_23, term_l_24);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Var_1, term_r_26);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("t_1", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("v_1", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("q_1", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_28);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("n_1", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_28);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym_ConstType_1, term_v_26);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_15, term_v_28);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_23);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("d_1", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("x_0", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_36);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("k_1", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_37);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(sym_Op_2, term_o_38, (ATerm) ATempty);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(sym_Op_2, term_x_38, (ATerm) ATempty);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_39);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_39);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_39);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_40);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_40);
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_44);
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_44);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_48);
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_38);
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(sym_Call_2, term_g_48, (ATerm) ATempty);
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_15);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(sym_Call_2, term_i_48, (ATerm) ATempty);
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_48);
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(sym_Call_2, term_i_49, (ATerm) ATempty);
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("  frontend initialization: ", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("  pre-desugar: ", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(ATmakeSymbol("  normalize-spec: ", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("  spec-use-def: ", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("  ExpandOverlays: ", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("  CheckConstructors: ", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("  RulesToSdefs: ", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("  DesugarListMatching: ", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("  strename: ", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(sym__2, term_l_19, term_a_28);
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_28);
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(sym__2, term_v_54, term_m_43);
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(sym__2, term_g_55, term_m_43);
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_58));
  term_o_58 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(sym__2, term_o_58, term_p_58);
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_59));
  term_s_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_59));
  term_t_59 = (ATerm) ATmakeAppl(sym__2, term_s_59, term_m_43);
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_59));
  term_v_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_59));
  term_w_59 = (ATerm) ATmakeAppl(sym__2, term_v_59, term_m_43);
  ATprotect(&(term_x_59));
  term_x_59 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_59));
  term_y_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(sym__2, term_m_57, term_m_43);
  ATprotect(&(term_e_60));
  term_e_60 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_60));
  term_f_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_61));
  term_s_61 = (ATerm) ATmakeAppl(sym__3, term_o_58, term_p_58, (ATerm) ATempty);
  ATprotect(&(term_l_62));
  term_l_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm u_92 (ATerm), ATerm v_92 (ATerm));
ATerm PrimT_3 (ATerm, ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm));
ATerm Explode_2 (ATerm, ATerm n_92 (ATerm), ATerm o_92 (ATerm));
ATerm pat_td_1 (ATerm, ATerm m_135 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm e_91 (ATerm));
ATerm Specification_1 (ATerm, ATerm j_91 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm b_126 (ATerm));
ATerm timing_1 (ATerm, ATerm y_104 (ATerm));
ATerm spaste_1 (ATerm, ATerm y_134 (ATerm));
ATerm Rec_2 (ATerm, ATerm k_96 (ATerm), ATerm l_96 (ATerm));
ATerm Let_2 (ATerm, ATerm n_95 (ATerm), ATerm o_95 (ATerm));
ATerm sboundin_3 (ATerm, ATerm z_134 (ATerm), ATerm a_135 (ATerm), ATerm b_135 (ATerm));
ATerm Bind7_0 (ATerm);
ATerm Bind5_0 (ATerm);
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm u_131 (ATerm, ATerm (ATerm)), ATerm v_131 (ATerm), ATerm w_131 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm x_131 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm SingleListVar_0 (ATerm);
ATerm ListBuild_0 (ATerm);
ATerm ListMatch_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm Con_3 (ATerm, ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm w_0 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm ListVarScope_0 (ATerm);
ATerm DesugarListMatching_0 (ATerm);
ATerm ExpandCall_0 (ATerm);
ATerm expand_calls_0 (ATerm);
ATerm DeclareVariables_0 (ATerm);
ATerm RDtoSD_0 (ATerm);
ATerm MkCall_0 (ATerm);
ATerm MkCongDef_0 (ATerm);
ATerm MkCongDefs_0 (ATerm);
ATerm congdefs_0 (ATerm);
ATerm RulesToSdefs_0 (ATerm);
ATerm TupleDeclarations_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm CheckConsError_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_0 (ATerm);
ATerm CheckTuple_0 (ATerm);
ATerm CheckCons_0 (ATerm);
ATerm manytd_1 (ATerm, ATerm f_109 (ATerm));
ATerm check_constructors_p__2 (ATerm, ATerm j_135 (ATerm), ATerm k_135 (ATerm));
ATerm check_constructors_0 (ATerm);
ATerm length_0 (ATerm);
ATerm GenerateCheckRule_0 (ATerm);
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm z_133 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm ReplaceVar_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm u_134 (ATerm));
ATerm IsVar_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm f_132 (ATerm), ATerm g_132 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm z_131 (ATerm), ATerm a_132 (ATerm, ATerm (ATerm)));
ATerm SubsVar_2 (ATerm, ATerm s_131 (ATerm), ATerm t_131 (ATerm));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm k_132 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm z_111 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm j_111 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_6 (ATerm, ATerm g_131 (ATerm), ATerm h_131 (ATerm, ATerm (ATerm)), ATerm i_131 (ATerm), ATerm j_131 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm k_131 (ATerm, ATerm (ATerm)), ATerm l_131 (ATerm));
ATerm substitute_5 (ATerm, ATerm n_131 (ATerm), ATerm o_131 (ATerm, ATerm (ATerm)), ATerm p_131 (ATerm), ATerm q_131 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm r_131 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm a_134 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm y_133 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm overlay_ud_0 (ATerm);
ATerm rdef_ud_0 (ATerm);
ATerm guardedlchoice_1 (ATerm, ATerm i_135 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm j_96 (ATerm));
ATerm lchoice_1 (ATerm, ATerm h_135 (ATerm));
ATerm LChoice_2 (ATerm, ATerm d_96 (ATerm), ATerm e_96 (ATerm));
ATerm isect_Bound_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm restore_Bound_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_Bound_0 (ATerm);
ATerm abstract_choice_2 (ATerm, ATerm e_135 (ATerm), ATerm f_135 (ATerm));
ATerm choice_1 (ATerm, ATerm g_135 (ATerm));
ATerm Choice_2 (ATerm, ATerm b_95 (ATerm), ATerm c_95 (ATerm));
ATerm Context_0 (ATerm);
ATerm Unbound_0 (ATerm);
ATerm Bound_0 (ATerm);
ATerm use_vars_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm w_93 (ATerm));
ATerm RootApp_1 (ATerm, ATerm t_92 (ATerm));
ATerm App_2 (ATerm, ATerm r_92 (ATerm), ATerm s_92 (ATerm));
ATerm table_replace_0 (ATerm);
ATerm override_key_1 (ATerm, ATerm e_123 (ATerm));
ATerm Binding_0 (ATerm);
ATerm bind_vars_0 (ATerm);
ATerm Match_1 (ATerm, ATerm u_95 (ATerm));
ATerm Build_1 (ATerm, ATerm v_95 (ATerm));
ATerm VarScope_1 (ATerm, ATerm d_135 (ATerm));
ATerm unbound_vars_0 (ATerm);
ATerm DefineBound_0 (ATerm);
ATerm sdef_ud_0 (ATerm);
ATerm DefineUnbound_0 (ATerm);
ATerm def_use_def_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Signature_1 (ATerm, ATerm f_91 (ATerm));
ATerm spec_use_def_0 (ATerm);
ATerm MkConstType_0 (ATerm);
ATerm MkFunType_0 (ATerm);
ATerm map1_1 (ATerm, ATerm s_0 (ATerm));
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm x_114 (ATerm));
ATerm unzip_0 (ATerm);
ATerm new_0 (ATerm);
ATerm ContextVar_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm dummify_0 (ATerm);
ATerm SplitDynamicRule_1 (ATerm, ATerm q_0 (ATerm));
ATerm split_dynamic_rules_0 (ATerm);
ATerm split_under_scope_1 (ATerm, ATerm v_133 (ATerm));
ATerm oncetd_1 (ATerm, ATerm x_107 (ATerm));
ATerm split_dynamic_rule_1 (ATerm, ATerm t_133 (ATerm));
ATerm DeclareContextVars_0 (ATerm);
ATerm lift_dynamic_rule_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm t_113 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm u_94 (ATerm));
ATerm Scope_2 (ATerm, ATerm x_95 (ATerm), ATerm y_95 (ATerm));
ATerm tboundin_3 (ATerm, ATerm v_134 (ATerm), ATerm w_134 (ATerm), ATerm x_134 (ATerm));
ATerm Bind8_0 (ATerm);
ATerm declared_vars_0 (ATerm);
ATerm Bind6_0 (ATerm);
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm n_116 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm g_122 (ATerm), ATerm h_122 (ATerm), ATerm i_122 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm r_116 (ATerm), ATerm s_116 (ATerm));
ATerm diff_1 (ATerm, ATerm j_116 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm n_114 (ATerm), ATerm o_114 (ATerm), ATerm p_114 (ATerm), ATerm q_114 (ATerm));
ATerm zip_1 (ATerm, ATerm s_114 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm k_106 (ATerm), ATerm l_106 (ATerm));
ATerm for_3 (ATerm, ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm p_106 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm k_133 (ATerm), ATerm l_133 (ATerm), ATerm m_133 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm u_106 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm f_123 (ATerm));
ATerm VarToConst_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm l_108 (ATerm));
ATerm assert_1 (ATerm, ATerm d_123 (ATerm));
ATerm DeclareVarToConst_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm g_91 (ATerm));
ATerm Constructors_1 (ATerm, ATerm b_92 (ATerm));
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm a_123 (ATerm));
ATerm restore_always_2 (ATerm, ATerm o_105 (ATerm), ATerm p_105 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm z_122 (ATerm));
ATerm scope_2 (ATerm, ATerm b_123 (ATerm), ATerm c_123 (ATerm));
ATerm vars_to_consts_0 (ATerm);
ATerm RulesToStrategies_0 (ATerm);
ATerm filter_1 (ATerm, ATerm o_119 (ATerm));
ATerm GetConstructors_0 (ATerm);
ATerm InsertBSpec_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm p_118 (ATerm));
ATerm CombineSections_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm RemoveLeadingPrime_0 (ATerm);
ATerm Op_2 (ATerm, ATerm j_92 (ATerm), ATerm k_92 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm s_91 (ATerm), ATerm t_91 (ATerm));
ATerm SVar_1 (ATerm, ATerm m_95 (ATerm));
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm VarDec_2 (ATerm, ATerm y_97 (ATerm), ATerm z_97 (ATerm));
ATerm SDef_3 (ATerm, ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm));
ATerm SDefT_4 (ATerm, ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm h_98 (ATerm), ATerm i_98 (ATerm));
ATerm RDef_3 (ATerm, ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm k_94 (ATerm));
ATerm RDefT_4 (ATerm, ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm o_94 (ATerm));
ATerm DefaultVarDec_1 (ATerm, ATerm x_97 (ATerm));
ATerm string_to_real_0 (ATerm);
ATerm DesugarOnce_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm l_113 (ATerm));
ATerm init_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm unquote_chars_1 (ATerm, ATerm m_121 (ATerm));
ATerm un_double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm x_121 (ATerm));
ATerm un_double_quote_0 (ATerm);
ATerm DesugarCharGeneric_0 (ATerm);
ATerm DesugarChar_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm Desugar_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm v_105 (ATerm));
ATerm topdown_1 (ATerm, ATerm t_106 (ATerm));
ATerm pre_desugar_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm _2 (ATerm, ATerm r_89 (ATerm), ATerm s_89 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm a_113 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm a_126 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm w_124 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm y_127 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm i_124 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm a_120 (ATerm), ATerm b_120 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm l_118 (ATerm), ATerm m_118 (ATerm));
ATerm crush_2 (ATerm, ATerm e_122 (ATerm), ATerm f_122 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm z_125 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_128 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_130 (ATerm));
ATerm map_1 (ATerm, ATerm k_112 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_130 (ATerm));
ATerm Program_1 (ATerm, ATerm y_103 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm z_103 (ATerm));
ATerm fetch_1 (ATerm, ATerm u_112 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_129 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm z_104 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_131 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm a_91 (ATerm), ATerm b_91 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_130 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_130 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm y_128 (ATerm), ATerm z_128 (ATerm), ATerm a_129 (ATerm), ATerm b_129 (ATerm));
ATerm iowrap_4 (ATerm, ATerm n_128 (ATerm), ATerm o_128 (ATerm), ATerm p_128 (ATerm), ATerm q_128 (ATerm));
ATerm iowrap_3 (ATerm, ATerm h_128 (ATerm), ATerm i_128 (ATerm), ATerm j_128 (ATerm));
ATerm iowrap_2 (ATerm, ATerm f_128 (ATerm), ATerm g_128 (ATerm));
ATerm iowrap_1 (ATerm, ATerm c_128 (ATerm));
ATerm frontend_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Expl_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
  d_12 = t;
  b_12 :
  if(match_cons(d_12, sym_ExplodeCong_2))
    {
      e_12 = ATgetArgument(d_12, 0);
      c_12 = ATgetArgument(d_12, 1);
      {
        ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
        ATerm l_12 = NULL;
        ATerm m_12 = NULL;
        t = new_0(t);
        {
          l_12 = t;
          {
            if(((h_12 != NULL) && (h_12 != l_12)))
              _fail(l_12);
            else
              h_12 = l_12;
            {
              ATerm n_12 = NULL;
              t = new_0(t);
              {
                m_12 = t;
                {
                  if(((i_12 != NULL) && (i_12 != m_12)))
                    _fail(m_12);
                  else
                    i_12 = m_12;
                  {
                    ATerm o_12 = NULL;
                    t = new_0(t);
                    {
                      n_12 = t;
                      {
                        if(((j_12 != NULL) && (j_12 != n_12)))
                          _fail(n_12);
                        else
                          j_12 = n_12;
                        {
                          t = new_0(t);
                          {
                            o_12 = t;
                            if(((k_12 != NULL) && (k_12 != o_12)))
                              _fail(o_12);
                            else
                              k_12 = o_12;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_12)), not_null(j_12)), not_null(i_12)), not_null(h_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_12)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_12)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(e_12), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_12)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_12))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(c_12), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_12)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_12))))), (ATerm) ATmakeAppl(sym_PrimT_3, term_b_15, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_12))), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_12)))))));
      }
    }
  else
    {
      if(match_cons(d_12, sym_Build_1))
        {
          e_12 = ATgetArgument(d_12, 0);
          {
            ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
            ATerm u_12 = NULL;
            ATerm y_12 = NULL;
            t = new_0(t);
            {
              u_12 = t;
              {
                if(((s_12 != NULL) && (s_12 != u_12)))
                  _fail(u_12);
                else
                  s_12 = u_12;
                {
                  t = not_null(e_12);
                  {
                    ATerm f_0 (ATerm t)
                    {
                      ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
                      v_12 = t;
                      r_11 :
                      if(match_cons(v_12, sym_Explode_2))
                        {
                          w_12 = ATgetArgument(v_12, 0);
                          x_12 = ATgetArgument(v_12, 1);
                          {
                            if(((q_12 != NULL) && (q_12 != w_12)))
                              _fail(w_12);
                            else
                              q_12 = w_12;
                            {
                              if(((r_12 != NULL) && (r_12 != x_12)))
                                _fail(x_12);
                              else
                                r_12 = x_12;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_12));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, f_0);
                    {
                      y_12 = t;
                      if(((t_12 != NULL) && (t_12 != y_12)))
                        _fail(y_12);
                      else
                        t_12 = y_12;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_b_15, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_12)), not_null(q_12))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_12))), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_12)))));
          }
        }
      else
        {
          if(match_cons(d_12, sym_Match_1))
            {
              e_12 = ATgetArgument(d_12, 0);
              {
                ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
                ATerm f_13 = NULL;
                ATerm g_13 = NULL;
                t = new_0(t);
                {
                  f_13 = t;
                  {
                    if(((c_13 != NULL) && (c_13 != f_13)))
                      _fail(f_13);
                    else
                      c_13 = f_13;
                    {
                      ATerm k_13 = NULL;
                      t = new_0(t);
                      {
                        g_13 = t;
                        {
                          if(((d_13 != NULL) && (d_13 != g_13)))
                            _fail(g_13);
                          else
                            d_13 = g_13;
                          {
                            t = not_null(e_12);
                            {
                              ATerm h_0 (ATerm t)
                              {
                                ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
                                h_13 = t;
                                z_11 :
                                if(match_cons(h_13, sym_Explode_2))
                                  {
                                    i_13 = ATgetArgument(h_13, 0);
                                    j_13 = ATgetArgument(h_13, 1);
                                    {
                                      if(((a_13 != NULL) && (a_13 != i_13)))
                                        _fail(i_13);
                                      else
                                        a_13 = i_13;
                                      {
                                        if(((b_13 != NULL) && (b_13 != j_13)))
                                          _fail(j_13);
                                        else
                                          b_13 = j_13;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_13));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, h_0);
                              {
                                k_13 = t;
                                if(((e_13 != NULL) && (e_13 != k_13)))
                                  _fail(k_13);
                                else
                                  e_13 = k_13;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_13)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_13))), (ATerm) ATmakeAppl(sym_PrimT_3, term_j_15, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_13)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_13)), (ATerm) ATmakeAppl(sym_Op_2, term_t_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_13)), not_null(a_13)))))));
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
ATerm Mapp2_0 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL;
  p_14 = t;
  o_14 :
  if(match_cons(p_14, sym_Match_1))
    {
      q_14 = ATgetArgument(p_14, 0);
      {
        ATerm u_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
            ATerm w_14 = NULL;
            ATerm a_15 = NULL;
            t = new_0(t);
            {
              w_14 = t;
              {
                if(((u_14 != NULL) && (u_14 != w_14)))
                  _fail(w_14);
                else
                  u_14 = w_14;
                {
                  t = not_null(q_14);
                  {
                    ATerm j_0 (ATerm t)
                    {
                      ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL;
                      x_14 = t;
                      e_14 :
                      if(match_cons(x_14, sym_Anno_2))
                        {
                          y_14 = ATgetArgument(x_14, 0);
                          z_14 = ATgetArgument(x_14, 1);
                          {
                            if(((s_14 != NULL) && (s_14 != y_14)))
                              _fail(y_14);
                            else
                              s_14 = y_14;
                            {
                              if(((t_14 != NULL) && (t_14 != z_14)))
                                _fail(z_14);
                              else
                                t_14 = z_14;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_14)), not_null(s_14));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, j_0);
                    {
                      a_15 = t;
                      if(((v_14 != NULL) && (v_14 != a_15)))
                        _fail(a_15);
                      else
                        v_14 = a_15;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_14)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_14)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_w_15, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_14)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_14))))));
            ;
            LocalPopChoice(v_15);
          }
        else
          {
            t = u_15;
            {
              ATerm x_15 = t;
              int y_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
                  ATerm f_15 = NULL;
                  ATerm i_15 = NULL;
                  t = new_0(t);
                  {
                    f_15 = t;
                    {
                      if(((d_15 != NULL) && (d_15 != f_15)))
                        _fail(f_15);
                      else
                        d_15 = f_15;
                      {
                        t = not_null(q_14);
                        {
                          ATerm y_0 (ATerm t)
                          {
                            ATerm g_15 = NULL,h_15 = NULL;
                            g_15 = t;
                            i_14 :
                            if(match_cons(g_15, sym_RootApp_1))
                              {
                                h_15 = ATgetArgument(g_15, 0);
                                {
                                  if(((c_15 != NULL) && (c_15 != h_15)))
                                    _fail(h_15);
                                  else
                                    c_15 = h_15;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_15));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, y_0);
                          {
                            i_15 = t;
                            if(((e_15 != NULL) && (e_15 != i_15)))
                              _fail(i_15);
                            else
                              e_15 = i_15;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_15))), not_null(c_15))));
                  ;
                  LocalPopChoice(y_15);
                }
              else
                {
                  t = x_15;
                  {
                    ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
                    ATerm o_15 = NULL;
                    ATerm s_15 = NULL;
                    t = new_0(t);
                    {
                      o_15 = t;
                      {
                        if(((m_15 != NULL) && (m_15 != o_15)))
                          _fail(o_15);
                        else
                          m_15 = o_15;
                        {
                          t = not_null(q_14);
                          {
                            ATerm z_0 (ATerm t)
                            {
                              ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
                              p_15 = t;
                              m_14 :
                              if(match_cons(p_15, sym_App_2))
                                {
                                  q_15 = ATgetArgument(p_15, 0);
                                  r_15 = ATgetArgument(p_15, 1);
                                  {
                                    if(((l_15 != NULL) && (l_15 != q_15)))
                                      _fail(q_15);
                                    else
                                      l_15 = q_15;
                                    {
                                      if(((k_15 != NULL) && (k_15 != r_15)))
                                        _fail(r_15);
                                      else
                                        k_15 = r_15;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_15));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, z_0);
                            {
                              s_15 = t;
                              if(((n_15 != NULL) && (n_15 != s_15)))
                                _fail(s_15);
                              else
                                n_15 = s_15;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_15))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_15)), not_null(l_15)))));
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
ATerm Mapp1_0 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
  j_16 = t;
  h_16 :
  if(match_cons(j_16, sym_Match_1))
    {
      k_16 = ATgetArgument(j_16, 0);
      i_16 :
      if(match_cons(k_16, sym_RootApp_1))
        {
          l_16 = ATgetArgument(k_16, 0);
          t = not_null(l_16);
        }
      else
        {
          if(match_cons(k_16, sym_App_2))
            {
              l_16 = ATgetArgument(k_16, 0);
              m_16 = ATgetArgument(k_16, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(l_16), not_null(m_16));
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
ATerm Mapp0_0 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  y_16 = t;
  x_16 :
  if(match_cons(y_16, sym_Match_1))
    {
      z_16 = ATgetArgument(y_16, 0);
      {
        ATerm b_17 = NULL,c_17 = NULL;
        ATerm g_17 = NULL;
        t = not_null(z_16);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
            d_17 = t;
            u_16 :
            if(match_cons(d_17, sym_RootApp_1))
              {
                e_17 = ATgetArgument(d_17, 0);
                v_16 :
                if(match_cons(e_17, sym_Match_1))
                  {
                    f_17 = ATgetArgument(e_17, 0);
                    {
                      if(((b_17 != NULL) && (b_17 != f_17)))
                        _fail(f_17);
                      else
                        b_17 = f_17;
                      t = not_null(b_17);
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
          t = pat_td_1(t, b_1);
          {
            g_17 = t;
            if(((c_17 != NULL) && (c_17 != g_17)))
              _fail(g_17);
            else
              c_17 = g_17;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(c_17));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Mapp_0 (ATerm t)
{
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      ;
      LocalPopChoice(a_16);
    }
  else
    {
      t = z_15;
      {
        ATerm b_16 = t;
        int c_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            ;
            LocalPopChoice(c_16);
          }
        else
          {
            t = b_16;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL;
  a_18 = t;
  z_17 :
  if(match_cons(a_18, sym_Build_1))
    {
      b_18 = ATgetArgument(a_18, 0);
      {
        ATerm d_16 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
            ATerm h_18 = NULL;
            ATerm l_18 = NULL;
            t = new_0(t);
            {
              h_18 = t;
              {
                if(((f_18 != NULL) && (f_18 != h_18)))
                  _fail(h_18);
                else
                  f_18 = h_18;
                {
                  t = not_null(b_18);
                  {
                    ATerm c_1 (ATerm t)
                    {
                      ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
                      i_18 = t;
                      p_17 :
                      if(match_cons(i_18, sym_Anno_2))
                        {
                          j_18 = ATgetArgument(i_18, 0);
                          k_18 = ATgetArgument(i_18, 1);
                          {
                            if(((d_18 != NULL) && (d_18 != j_18)))
                              _fail(j_18);
                            else
                              d_18 = j_18;
                            {
                              if(((e_18 != NULL) && (e_18 != k_18)))
                                _fail(k_18);
                              else
                                e_18 = k_18;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_18));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, c_1);
                    {
                      l_18 = t;
                      if(((g_18 != NULL) && (g_18 != l_18)))
                        _fail(l_18);
                      else
                        g_18 = l_18;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_18)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_16, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_18)), not_null(d_18))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_18))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_18))));
            ;
            LocalPopChoice(e_16);
          }
        else
          {
            t = d_16;
            {
              ATerm g_16 = t;
              int n_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
                  ATerm q_18 = NULL;
                  ATerm t_18 = NULL;
                  t = new_0(t);
                  {
                    q_18 = t;
                    {
                      if(((o_18 != NULL) && (o_18 != q_18)))
                        _fail(q_18);
                      else
                        o_18 = q_18;
                      {
                        t = not_null(b_18);
                        {
                          ATerm e_1 (ATerm t)
                          {
                            ATerm r_18 = NULL,s_18 = NULL;
                            r_18 = t;
                            t_17 :
                            if(match_cons(r_18, sym_RootApp_1))
                              {
                                s_18 = ATgetArgument(r_18, 0);
                                {
                                  if(((n_18 != NULL) && (n_18 != s_18)))
                                    _fail(s_18);
                                  else
                                    n_18 = s_18;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_18));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, e_1);
                          {
                            t_18 = t;
                            if(((p_18 != NULL) && (p_18 != t_18)))
                              _fail(t_18);
                            else
                              p_18 = t_18;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_18)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_18), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_18))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_18))));
                  ;
                  LocalPopChoice(n_16);
                }
              else
                {
                  t = g_16;
                  {
                    ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL;
                    ATerm z_18 = NULL;
                    ATerm d_19 = NULL;
                    t = new_0(t);
                    {
                      z_18 = t;
                      {
                        if(((x_18 != NULL) && (x_18 != z_18)))
                          _fail(z_18);
                        else
                          x_18 = z_18;
                        {
                          t = not_null(b_18);
                          {
                            ATerm f_1 (ATerm t)
                            {
                              ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
                              a_19 = t;
                              x_17 :
                              if(match_cons(a_19, sym_App_2))
                                {
                                  b_19 = ATgetArgument(a_19, 0);
                                  c_19 = ATgetArgument(a_19, 1);
                                  {
                                    if(((v_18 != NULL) && (v_18 != b_19)))
                                      _fail(b_19);
                                    else
                                      v_18 = b_19;
                                    {
                                      if(((w_18 != NULL) && (w_18 != c_19)))
                                        _fail(c_19);
                                      else
                                        w_18 = c_19;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_18));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, f_1);
                            {
                              d_19 = t;
                              if(((y_18 != NULL) && (y_18 != d_19)))
                                _fail(d_19);
                              else
                                y_18 = d_19;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_18)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(v_18), not_null(w_18), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_18)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_18))));
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
ATerm Bapp1_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
  u_19 = t;
  s_19 :
  if(match_cons(u_19, sym_Build_1))
    {
      v_19 = ATgetArgument(u_19, 0);
      t_19 :
      if(match_cons(v_19, sym_RootApp_1))
        {
          w_19 = ATgetArgument(v_19, 0);
          t = not_null(w_19);
        }
      else
        {
          if(match_cons(v_19, sym_App_2))
            {
              w_19 = ATgetArgument(v_19, 0);
              x_19 = ATgetArgument(v_19, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_19)), not_null(w_19));
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
ATerm As_2 (ATerm t, ATerm u_92 (ATerm), ATerm v_92 (ATerm))
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  j_20 = t;
  i_20 :
  if(match_cons(j_20, sym_As_2))
    {
      k_20 = ATgetArgument(j_20, 0);
      l_20 = ATgetArgument(j_20, 1);
      {
        ATerm p_20 = NULL,r_20 = NULL;
        ATerm q_20 = NULL;
        t = SSLgetAnnotations(not_null(j_20));
        {
          q_20 = t;
          if(((p_20 != NULL) && (p_20 != q_20)))
            _fail(q_20);
          else
            p_20 = q_20;
        }
        {
          t = not_null(k_20);
          {
            ATerm t_20 = NULL;
            t = u_92(t);
            {
              r_20 = t;
              {
                t = not_null(l_20);
                {
                  ATerm v_20 = NULL;
                  t = v_92(t);
                  {
                    t_20 = t;
                    {
                      ATerm w_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(r_20), not_null(t_20)), not_null(p_20));
                      {
                        w_20 = t;
                        if(((v_20 != NULL) && (v_20 != w_20)))
                          _fail(w_20);
                        else
                          v_20 = w_20;
                      }
                      t = not_null(v_20);
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
ATerm PrimT_3 (ATerm t, ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm))
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
            t = t_96(t);
            {
              t_21 = t;
              {
                t = not_null(l_21);
                {
                  ATerm x_21 = NULL;
                  t = u_96(t);
                  {
                    v_21 = t;
                    {
                      t = not_null(m_21);
                      {
                        ATerm z_21 = NULL;
                        t = v_96(t);
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
ATerm Explode_2 (ATerm t, ATerm n_92 (ATerm), ATerm o_92 (ATerm))
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
  n_22 = t;
  m_22 :
  if(match_cons(n_22, sym_Explode_2))
    {
      o_22 = ATgetArgument(n_22, 0);
      p_22 = ATgetArgument(n_22, 1);
      {
        ATerm t_22 = NULL,v_22 = NULL;
        ATerm u_22 = NULL;
        t = SSLgetAnnotations(not_null(n_22));
        {
          u_22 = t;
          if(((t_22 != NULL) && (t_22 != u_22)))
            _fail(u_22);
          else
            t_22 = u_22;
        }
        {
          t = not_null(o_22);
          {
            ATerm x_22 = NULL;
            t = n_92(t);
            {
              v_22 = t;
              {
                t = not_null(p_22);
                {
                  ATerm z_22 = NULL;
                  t = o_92(t);
                  {
                    x_22 = t;
                    {
                      ATerm a_23 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(v_22), not_null(x_22)), not_null(t_22));
                      {
                        a_23 = t;
                        if(((z_22 != NULL) && (z_22 != a_23)))
                          _fail(a_23);
                        else
                          z_22 = a_23;
                      }
                      t = not_null(z_22);
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
ATerm pat_td_1 (ATerm t, ATerm m_135 (ATerm))
{
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_135(t);
      ;
      LocalPopChoice(p_16);
    }
  else
    {
      t = o_16;
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              ATerm i_1 (ATerm t)
              {
                t = pat_td_1(t, m_135);
                return(t);
              }
              t = fetch_1(t, i_1);
              return(t);
            }
            t = Op_2(t, _id, h_1);
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
                  ATerm j_1 (ATerm t)
                  {
                    t = pat_td_1(t, m_135);
                    return(t);
                  }
                  t = Explode_2(t, _id, j_1);
                  ;
                  LocalPopChoice(t_16);
                }
              else
                {
                  t = s_16;
                  {
                    ATerm w_16 = t;
                    int a_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_1 (ATerm t)
                        {
                          t = pat_td_1(t, m_135);
                          return(t);
                        }
                        t = Explode_2(t, l_1, _id);
                        ;
                        LocalPopChoice(a_17);
                      }
                    else
                      {
                        t = w_16;
                        {
                          ATerm h_17 = t;
                          int i_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_1 (ATerm t)
                              {
                                ATerm o_1 (ATerm t)
                                {
                                  t = pat_td_1(t, m_135);
                                  return(t);
                                }
                                t = fetch_1(t, o_1);
                                return(t);
                              }
                              t = PrimT_3(t, _id, _id, m_1);
                              ;
                              LocalPopChoice(i_17);
                            }
                          else
                            {
                              t = h_17;
                              {
                                ATerm p_1 (ATerm t)
                                {
                                  t = pat_td_1(t, m_135);
                                  return(t);
                                }
                                t = As_2(t, _id, p_1);
                              }
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
ATerm Bapp0_0 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL;
  r_23 = t;
  q_23 :
  if(match_cons(r_23, sym_Build_1))
    {
      s_23 = ATgetArgument(r_23, 0);
      {
        ATerm j_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_23 = NULL,v_23 = NULL;
            ATerm z_23 = NULL;
            t = not_null(s_23);
            {
              ATerm r_1 (ATerm t)
              {
                ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
                w_23 = t;
                j_23 :
                if(match_cons(w_23, sym_RootApp_1))
                  {
                    x_23 = ATgetArgument(w_23, 0);
                    k_23 :
                    if(match_cons(x_23, sym_Build_1))
                      {
                        y_23 = ATgetArgument(x_23, 0);
                        {
                          if(((u_23 != NULL) && (u_23 != y_23)))
                            _fail(y_23);
                          else
                            u_23 = y_23;
                          t = not_null(u_23);
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
              t = pat_td_1(t, r_1);
              {
                z_23 = t;
                if(((v_23 != NULL) && (v_23 != z_23)))
                  _fail(z_23);
                else
                  v_23 = z_23;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(v_23));
            ;
            LocalPopChoice(k_17);
          }
        else
          {
            t = j_17;
            {
              ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
              ATerm i_24 = NULL;
              t = not_null(s_23);
              {
                ATerm s_1 (ATerm t)
                {
                  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL;
                  e_24 = t;
                  n_23 :
                  if(match_cons(e_24, sym_App_2))
                    {
                      f_24 = ATgetArgument(e_24, 0);
                      h_24 = ATgetArgument(e_24, 1);
                      o_23 :
                      if(match_cons(f_24, sym_Build_1))
                        {
                          g_24 = ATgetArgument(f_24, 0);
                          {
                            if(((c_24 != NULL) && (c_24 != g_24)))
                              _fail(g_24);
                            else
                              c_24 = g_24;
                            {
                              if(((b_24 != NULL) && (b_24 != h_24)))
                                _fail(h_24);
                              else
                                b_24 = h_24;
                              t = not_null(c_24);
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
                t = pat_td_1(t, s_1);
                {
                  i_24 = t;
                  if(((d_24 != NULL) && (d_24 != i_24)))
                    _fail(i_24);
                  else
                    d_24 = i_24;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(d_24));
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
ATerm Bapp_0 (ATerm t)
{
  ATerm l_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      ;
      LocalPopChoice(m_17);
    }
  else
    {
      t = l_17;
      {
        ATerm n_17 = t;
        int o_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            ;
            LocalPopChoice(o_17);
          }
        else
          {
            t = n_17;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL;
  ATerm z_24 (ATerm t)
  {
    ATerm w_24 = NULL;
    ATerm x_24 = NULL;
    t = not_null(t_24);
    {
      ATerm q_17 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_17;
        }
      {
        t = new_0(t);
        {
          x_24 = t;
          if(((w_24 != NULL) && (w_24 != x_24)))
            _fail(x_24);
          else
            w_24 = x_24;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(w_24)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_24)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_24))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_24))));
    return(t);
  }
  ATerm a_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_r_17, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_24))));
    return(t);
  }
  t_24 = t;
  s_24 :
  if(match_cons(t_24, sym_Var_1))
    {
      u_24 = ATgetArgument(t_24, 0);
      {
        ATerm s_17 = t;
        int u_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_24(t);
            ;
            LocalPopChoice(u_17);
          }
        else
          {
            t = s_17;
            t = a_25(t);
          }
      }
    }
  else
    {
      t = z_24(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
  m_25 = t;
  k_25 :
  if(match_cons(m_25, sym_PrimT_3))
    {
      n_25 = ATgetArgument(m_25, 0);
      o_25 = ATgetArgument(m_25, 1);
      l_25 = ATgetArgument(m_25, 2);
      {
        ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
        ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL;
        t = not_null(l_25);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm v_17 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_17;
              }
            return(t);
          }
          t = fetch_1(t, u_1);
          {
            t = not_null(l_25);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm w_1 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, w_1);
                {
                  v_25 = t;
                  f_25 :
                  if(match_cons(v_25, sym__2))
                    {
                      w_25 = ATgetArgument(v_25, 0);
                      x_25 = ATgetArgument(v_25, 1);
                      g_25 :
                      if(match_cons(x_25, sym__2))
                        {
                          y_25 = ATgetArgument(x_25, 0);
                          z_25 = ATgetArgument(x_25, 1);
                          {
                            if(((s_25 != NULL) && (s_25 != w_25)))
                              _fail(w_25);
                            else
                              s_25 = w_25;
                            {
                              if(((t_25 != NULL) && (t_25 != y_25)))
                                _fail(y_25);
                              else
                                t_25 = y_25;
                              if(((u_25 != NULL) && (u_25 != z_25)))
                                _fail(z_25);
                              else
                                u_25 = z_25;
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
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(t_25)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(n_25), not_null(o_25), not_null(u_25))));
      }
    }
  else
    {
      if(match_cons(m_25, sym_Prim_2))
        {
          n_25 = ATgetArgument(m_25, 0);
          o_25 = ATgetArgument(m_25, 1);
          {
            ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
            ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
            t = not_null(o_25);
            {
              ATerm x_1 (ATerm t)
              {
                ATerm w_17 = t;
                if((PushChoice() == 0))
                  {
                    t = Var_1(t, _id);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_17;
                  }
                return(t);
              }
              t = fetch_1(t, x_1);
              {
                t = not_null(o_25);
                {
                  t = unzip_1(t, LiftPrimArg_0);
                  {
                    ATerm y_1 (ATerm t)
                    {
                      t = unzip_1(t, _id);
                      return(t);
                    }
                    t = _2(t, concat_0, y_1);
                    {
                      f_26 = t;
                      i_25 :
                      if(match_cons(f_26, sym__2))
                        {
                          g_26 = ATgetArgument(f_26, 0);
                          h_26 = ATgetArgument(f_26, 1);
                          j_25 :
                          if(match_cons(h_26, sym__2))
                            {
                              i_26 = ATgetArgument(h_26, 0);
                              j_26 = ATgetArgument(h_26, 1);
                              {
                                if(((c_26 != NULL) && (c_26 != g_26)))
                                  _fail(g_26);
                                else
                                  c_26 = g_26;
                                {
                                  if(((d_26 != NULL) && (d_26 != i_26)))
                                    _fail(i_26);
                                  else
                                    d_26 = i_26;
                                  if(((e_26 != NULL) && (e_26 != j_26)))
                                    _fail(j_26);
                                  else
                                    e_26 = j_26;
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
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(d_26)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(n_25), (ATerm)ATempty, not_null(e_26))));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm a_2 (ATerm t)
      {
        ATerm y_17 = t;
        int c_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            ;
            LocalPopChoice(c_18);
          }
        else
          {
            t = y_17;
            {
              ATerm m_18 = t;
              int u_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(u_18);
                }
              else
                {
                  t = m_18;
                  {
                    ATerm e_19 = t;
                    int f_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        ;
                        LocalPopChoice(f_19);
                      }
                    else
                      {
                        t = e_19;
                        {
                          ATerm g_19 = t;
                          int h_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              ;
                              LocalPopChoice(h_19);
                            }
                          else
                            {
                              t = g_19;
                              t = Expl_0(t);
                            }
                        }
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, a_2);
    }
    return(t);
  }
  t = topdown_1(t, z_1);
  return(t);
}
ATerm desugar_spec_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SDef_3(t, _id, _id, desugar_0);
        ;
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        t = SDefT_4(t, _id, _id, _id, desugar_0);
      }
    return(t);
  }
  t = map_1(t, b_2);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm e_91 (ATerm))
{
  ATerm t_26 = NULL,u_26 = NULL;
  t_26 = t;
  s_26 :
  if(match_cons(t_26, sym_Strategies_1))
    {
      u_26 = ATgetArgument(t_26, 0);
      {
        ATerm x_26 = NULL,z_26 = NULL;
        ATerm y_26 = NULL;
        t = SSLgetAnnotations(not_null(t_26));
        {
          y_26 = t;
          if(((x_26 != NULL) && (x_26 != y_26)))
            _fail(y_26);
          else
            x_26 = y_26;
        }
        {
          t = not_null(u_26);
          {
            ATerm b_27 = NULL;
            t = e_91(t);
            {
              z_26 = t;
              {
                ATerm c_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(z_26)), not_null(x_26));
                {
                  c_27 = t;
                  if(((b_27 != NULL) && (b_27 != c_27)))
                    _fail(c_27);
                  else
                    b_27 = c_27;
                }
                t = not_null(b_27);
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
ATerm Specification_1 (ATerm t, ATerm j_91 (ATerm))
{
  ATerm m_27 = NULL,n_27 = NULL;
  m_27 = t;
  l_27 :
  if(match_cons(m_27, sym_Specification_1))
    {
      n_27 = ATgetArgument(m_27, 0);
      {
        ATerm q_27 = NULL,s_27 = NULL;
        ATerm r_27 = NULL;
        t = SSLgetAnnotations(not_null(m_27));
        {
          r_27 = t;
          if(((q_27 != NULL) && (q_27 != r_27)))
            _fail(r_27);
          else
            q_27 = r_27;
        }
        {
          t = not_null(n_27);
          {
            ATerm u_27 = NULL;
            t = j_91(t);
            {
              s_27 = t;
              {
                ATerm v_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(s_27)), not_null(q_27));
                {
                  v_27 = t;
                  if(((u_27 != NULL) && (u_27 != v_27)))
                    _fail(v_27);
                  else
                    u_27 = v_27;
                }
                t = not_null(u_27);
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
ATerm if_verbose3_1 (ATerm t, ATerm b_126 (ATerm))
{
  ATerm c_2 (ATerm t)
  {
    ATerm k_19;
    k_19 = t;
    {
      ATerm b_28 = NULL;
      ATerm c_28 = NULL;
      t = term_l_19;
      {
        t = get_config_0(t);
        {
          c_28 = t;
          if(((b_28 != NULL) && (b_28 != c_28)))
            _fail(c_28);
          else
            b_28 = c_28;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), term_m_19);
        t = geq_0(t);
      }
    }
    t = k_19;
    t = b_126(t);
    return(t);
  }
  t = try_1(t, c_2);
  return(t);
}
ATerm timing_1 (ATerm t, ATerm y_104 (ATerm))
{
  ATerm d_2 (ATerm t)
  {
    ATerm n_19;
    n_19 = t;
    {
      t = dtime_0(t);
      t = debug_1(t, y_104);
    }
    t = n_19;
    return(t);
  }
  t = if_verbose3_1(t, d_2);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm y_134 (ATerm))
{
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
      {
        t = split_2(t, _id, y_134);
        {
          ATerm f_2 (ATerm t)
          {
            ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL;
            i_28 = t;
            g_28 :
            if(match_cons(i_28, sym__2))
              {
                j_28 = ATgetArgument(i_28, 0);
                o_28 = ATgetArgument(i_28, 1);
                h_28 :
                if(match_cons(j_28, sym_SDef_3))
                  {
                    k_28 = ATgetArgument(j_28, 0);
                    l_28 = ATgetArgument(j_28, 1);
                    m_28 = ATgetArgument(j_28, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_28), not_null(l_28), not_null(m_28));
                  }
                else
                  {
                    if(match_cons(j_28, sym_SDefT_4))
                      {
                        k_28 = ATgetArgument(j_28, 0);
                        l_28 = ATgetArgument(j_28, 1);
                        m_28 = ATgetArgument(j_28, 2);
                        n_28 = ATgetArgument(j_28, 3);
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(o_28), not_null(l_28), not_null(m_28), not_null(n_28));
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
          t = zip_1(t, f_2);
        }
        return(t);
      }
      t = Let_2(t, e_2, _id);
      ;
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_2 (ATerm t)
            {
              t = split_2(t, _id, y_134);
              t = zip_1(t, ReplaceVar_0);
              return(t);
            }
            t = SDef_3(t, _id, g_2, _id);
            ;
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            {
              ATerm y_19 = t;
              int z_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_2 (ATerm t)
                  {
                    t = split_2(t, _id, y_134);
                    t = zip_1(t, ReplaceVar_0);
                    return(t);
                  }
                  t = SDefT_4(t, _id, h_2, _id, _id);
                  ;
                  LocalPopChoice(z_19);
                }
              else
                {
                  t = y_19;
                  {
                    ATerm a_20 = t;
                    int b_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_2 (ATerm t)
                        {
                          t = split_2(t, _id, y_134);
                          t = zip_1(t, ReplaceVar_0);
                          return(t);
                        }
                        t = RDefT_4(t, _id, i_2, _id, _id);
                        ;
                        LocalPopChoice(b_20);
                      }
                    else
                      {
                        t = a_20;
                        {
                          ATerm j_2 (ATerm t)
                          {
                            t = y_134(t);
                            t = Hd_0(t);
                            return(t);
                          }
                          t = Rec_2(t, j_2, _id);
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
ATerm Rec_2 (ATerm t, ATerm k_96 (ATerm), ATerm l_96 (ATerm))
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
  e_29 = t;
  d_29 :
  if(match_cons(e_29, sym_Rec_2))
    {
      f_29 = ATgetArgument(e_29, 0);
      g_29 = ATgetArgument(e_29, 1);
      {
        ATerm k_29 = NULL,m_29 = NULL;
        ATerm l_29 = NULL;
        t = SSLgetAnnotations(not_null(e_29));
        {
          l_29 = t;
          if(((k_29 != NULL) && (k_29 != l_29)))
            _fail(l_29);
          else
            k_29 = l_29;
        }
        {
          t = not_null(f_29);
          {
            ATerm o_29 = NULL;
            t = k_96(t);
            {
              m_29 = t;
              {
                t = not_null(g_29);
                {
                  ATerm q_29 = NULL;
                  t = l_96(t);
                  {
                    o_29 = t;
                    {
                      ATerm r_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(m_29), not_null(o_29)), not_null(k_29));
                      {
                        r_29 = t;
                        if(((q_29 != NULL) && (q_29 != r_29)))
                          _fail(r_29);
                        else
                          q_29 = r_29;
                      }
                      t = not_null(q_29);
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
ATerm Let_2 (ATerm t, ATerm n_95 (ATerm), ATerm o_95 (ATerm))
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  d_30 = t;
  c_30 :
  if(match_cons(d_30, sym_Let_2))
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
            t = n_95(t);
            {
              l_30 = t;
              {
                t = not_null(f_30);
                {
                  ATerm p_30 = NULL;
                  t = o_95(t);
                  {
                    n_30 = t;
                    {
                      ATerm q_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(l_30), not_null(n_30)), not_null(j_30));
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
ATerm sboundin_3 (ATerm t, ATerm z_134 (ATerm), ATerm a_135 (ATerm), ATerm b_135 (ATerm))
{
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, z_134, z_134);
      ;
      LocalPopChoice(d_20);
    }
  else
    {
      t = c_20;
      {
        ATerm e_20 = t;
        int f_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, b_135, b_135, z_134);
            ;
            LocalPopChoice(f_20);
          }
        else
          {
            t = e_20;
            {
              ATerm g_20 = t;
              int h_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4(t, b_135, b_135, b_135, z_134);
                  ;
                  LocalPopChoice(h_20);
                }
              else
                {
                  t = g_20;
                  t = Rec_2(t, b_135, z_134);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
  y_30 = t;
  x_30 :
  if(match_cons(y_30, sym_RDefT_4))
    {
      z_30 = ATgetArgument(y_30, 0);
      a_31 = ATgetArgument(y_30, 1);
      b_31 = ATgetArgument(y_30, 2);
      c_31 = ATgetArgument(y_30, 3);
      {
        t = not_null(a_31);
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
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
  k_31 = t;
  j_31 :
  if(match_cons(k_31, sym_SDefT_4))
    {
      l_31 = ATgetArgument(k_31, 0);
      m_31 = ATgetArgument(k_31, 1);
      n_31 = ATgetArgument(k_31, 2);
      o_31 = ATgetArgument(k_31, 3);
      {
        t = not_null(m_31);
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
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
  w_31 = t;
  v_31 :
  if(match_cons(w_31, sym_Rec_2))
    {
      x_31 = ATgetArgument(w_31, 0);
      y_31 = ATgetArgument(w_31, 1);
      t = (ATerm) ATinsert(ATempty, not_null(x_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL;
  e_32 = t;
  d_32 :
  if(match_cons(e_32, sym_SDef_3))
    {
      f_32 = ATgetArgument(e_32, 0);
      g_32 = ATgetArgument(e_32, 1);
      h_32 = ATgetArgument(e_32, 2);
      {
        t = not_null(g_32);
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
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
  r_32 = t;
  q_32 :
  if(match_cons(r_32, sym_Let_2))
    {
      s_32 = ATgetArgument(r_32, 0);
      t_32 = ATgetArgument(r_32, 1);
      {
        t = not_null(s_32);
        {
          ATerm k_2 (ATerm t)
          {
            ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL;
            w_32 = t;
            p_32 :
            if(match_cons(w_32, sym_SDef_3))
              {
                x_32 = ATgetArgument(w_32, 0);
                y_32 = ATgetArgument(w_32, 1);
                z_32 = ATgetArgument(w_32, 2);
                t = not_null(x_32);
              }
            else
              {
                if(match_cons(w_32, sym_SDefT_4))
                  {
                    x_32 = ATgetArgument(w_32, 0);
                    y_32 = ATgetArgument(w_32, 1);
                    z_32 = ATgetArgument(w_32, 2);
                    a_33 = ATgetArgument(w_32, 3);
                    t = not_null(x_32);
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, k_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        {
          ATerm o_20 = t;
          int s_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(s_20);
            }
          else
            {
              t = o_20;
              {
                ATerm u_20 = t;
                int x_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0(t);
                    ;
                    LocalPopChoice(x_20);
                  }
                else
                  {
                    t = u_20;
                    {
                      ATerm y_20 = t;
                      int z_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0(t);
                          ;
                          LocalPopChoice(z_20);
                        }
                      else
                        {
                          t = y_20;
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
  t = rename_4(t, SVar_1, l_2, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm u_131 (ATerm, ATerm (ATerm)), ATerm v_131 (ATerm), ATerm w_131 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm x_131 (ATerm, ATerm (ATerm)))
{
  ATerm h_33 = NULL;
  h_33 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_33), (ATerm) ATempty);
    {
      ATerm k_33 (ATerm t)
      {
        ATerm m_2 (ATerm t)
        {
          ATerm a_21 = t;
          int b_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, u_131);
              ;
              LocalPopChoice(b_21);
            }
          else
            {
              t = a_21;
              {
                t = RnBinding_2(t, v_131, x_131);
                t = DistBinding_2(t, k_33, w_131);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, m_2);
        return(t);
      }
      t = k_33(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        {
          ATerm e_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0(t);
              ;
              LocalPopChoice(f_21);
            }
          else
            {
              t = e_21;
              t = Bind8_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, Var_1, n_2, tboundin_3, tpaste_1);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm SingleListVar_0 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
  o_33 = t;
  m_33 :
  if(match_cons(o_33, sym_Var_1))
    {
      p_33 = ATgetArgument(o_33, 0);
      n_33 :
      if(match_cons(p_33, sym_ListVar_1))
        {
          q_33 = ATgetArgument(p_33, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_33));
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
ATerm ListBuild_0 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL;
  h_34 = t;
  g_34 :
  if(match_cons(h_34, sym_Build_1))
    {
      i_34 = ATgetArgument(h_34, 0);
      {
        ATerm k_34 = NULL,l_34 = NULL;
        ATerm x_34 = NULL;
        t = not_null(i_34);
        {
          ATerm o_2 (ATerm t)
          {
            ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
            m_34 = t;
            v_33 :
            if(match_cons(m_34, sym_Op_2))
              {
                n_34 = ATgetArgument(m_34, 0);
                o_34 = ATgetArgument(m_34, 1);
                w_33 :
                if(match_string(n_34, "Cons"))
                  {
                    x_33 :
                    if(((ATgetType(o_34) == AT_LIST) && !(ATisEmpty(o_34))))
                      {
                        p_34 = ATgetFirst((ATermList) o_34);
                        s_34 = (ATerm) ATgetNext((ATermList) o_34);
                        y_33 :
                        if(match_cons(p_34, sym_Var_1))
                          {
                            q_34 = ATgetArgument(p_34, 0);
                            z_33 :
                            if(match_cons(q_34, sym_ListVar_1))
                              {
                                r_34 = ATgetArgument(q_34, 0);
                                a_34 :
                                if(((ATgetType(s_34) == AT_LIST) && !(ATisEmpty(s_34))))
                                  {
                                    t_34 = ATgetFirst((ATermList) s_34);
                                    w_34 = (ATerm) ATgetNext((ATermList) s_34);
                                    b_34 :
                                    if(match_cons(t_34, sym_Op_2))
                                      {
                                        u_34 = ATgetArgument(t_34, 0);
                                        v_34 = ATgetArgument(t_34, 1);
                                        c_34 :
                                        if(match_string(u_34, "Nil"))
                                          {
                                            d_34 :
                                            if(((ATgetType(v_34) == AT_LIST) && ATisEmpty(v_34)))
                                              {
                                                e_34 :
                                                if(((ATgetType(w_34) == AT_LIST) && ATisEmpty(w_34)))
                                                  {
                                                    {
                                                      if(((k_34 != NULL) && (k_34 != r_34)))
                                                        _fail(r_34);
                                                      else
                                                        k_34 = r_34;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_34));
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
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, o_2);
          {
            x_34 = t;
            if(((l_34 != NULL) && (l_34 != x_34)))
              _fail(x_34);
            else
              l_34 = x_34;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(l_34));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ListMatch_0 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL;
  p_35 = t;
  o_35 :
  if(match_cons(p_35, sym_Match_1))
    {
      q_35 = ATgetArgument(p_35, 0);
      {
        ATerm s_35 = NULL,t_35 = NULL;
        ATerm f_36 = NULL;
        t = not_null(q_35);
        {
          ATerm p_2 (ATerm t)
          {
            ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
            u_35 = t;
            d_35 :
            if(match_cons(u_35, sym_Op_2))
              {
                v_35 = ATgetArgument(u_35, 0);
                w_35 = ATgetArgument(u_35, 1);
                e_35 :
                if(match_string(v_35, "Cons"))
                  {
                    f_35 :
                    if(((ATgetType(w_35) == AT_LIST) && !(ATisEmpty(w_35))))
                      {
                        x_35 = ATgetFirst((ATermList) w_35);
                        a_36 = (ATerm) ATgetNext((ATermList) w_35);
                        g_35 :
                        if(match_cons(x_35, sym_Var_1))
                          {
                            y_35 = ATgetArgument(x_35, 0);
                            h_35 :
                            if(match_cons(y_35, sym_ListVar_1))
                              {
                                z_35 = ATgetArgument(y_35, 0);
                                i_35 :
                                if(((ATgetType(a_36) == AT_LIST) && !(ATisEmpty(a_36))))
                                  {
                                    b_36 = ATgetFirst((ATermList) a_36);
                                    e_36 = (ATerm) ATgetNext((ATermList) a_36);
                                    j_35 :
                                    if(match_cons(b_36, sym_Op_2))
                                      {
                                        c_36 = ATgetArgument(b_36, 0);
                                        d_36 = ATgetArgument(b_36, 1);
                                        k_35 :
                                        if(match_string(c_36, "Nil"))
                                          {
                                            l_35 :
                                            if(((ATgetType(d_36) == AT_LIST) && ATisEmpty(d_36)))
                                              {
                                                m_35 :
                                                if(((ATgetType(e_36) == AT_LIST) && ATisEmpty(e_36)))
                                                  {
                                                    {
                                                      if(((s_35 != NULL) && (s_35 != z_35)))
                                                        _fail(z_35);
                                                      else
                                                        s_35 = z_35;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_35));
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
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, p_2);
          {
            f_36 = t;
            if(((t_35 != NULL) && (t_35 != f_36)))
              _fail(f_36);
            else
              t_35 = f_36;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(t_35));
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
  ATerm g_37 = NULL;
  g_37 = t;
  f_37 :
  if(match_cons(g_37, sym_Wld_0))
    {
      ATerm i_37 = NULL,k_37 = NULL;
      ATerm g_21;
      g_21 = t;
      {
        ATerm j_37 = NULL;
        t = SSLgetAnnotations(not_null(g_37));
        {
          j_37 = t;
          if(((i_37 != NULL) && (i_37 != j_37)))
            _fail(j_37);
          else
            i_37 = j_37;
        }
      }
      t = g_21;
      {
        ATerm l_37 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(i_37));
        {
          l_37 = t;
          if(((k_37 != NULL) && (k_37 != l_37)))
            _fail(l_37);
          else
            k_37 = l_37;
        }
        t = not_null(k_37);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm h_21 = t;
  if((PushChoice() == 0))
    {
      ATerm q_2 (ATerm t)
      {
        ATerm n_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(o_21);
          }
        else
          {
            t = n_21;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, q_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_21;
    }
  return(t);
}
ATerm Con_3 (ATerm t, ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm w_0 (ATerm))
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL;
  f_38 = t;
  e_38 :
  if(match_cons(f_38, sym_Con_3))
    {
      g_38 = ATgetArgument(f_38, 0);
      h_38 = ATgetArgument(f_38, 1);
      i_38 = ATgetArgument(f_38, 2);
      {
        ATerm p_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_38 = NULL,u_38 = NULL;
            ATerm t_38 = NULL;
            t = SSLgetAnnotations(not_null(f_38));
            {
              t_38 = t;
              if(((s_38 != NULL) && (s_38 != t_38)))
                _fail(t_38);
              else
                s_38 = t_38;
            }
            {
              t = not_null(g_38);
              {
                ATerm w_38 = NULL;
                t = t_0(t);
                {
                  u_38 = t;
                  {
                    t = not_null(h_38);
                    {
                      ATerm y_38 = NULL;
                      t = v_0(t);
                      {
                        w_38 = t;
                        {
                          t = not_null(i_38);
                          {
                            ATerm a_39 = NULL;
                            t = w_0(t);
                            {
                              y_38 = t;
                              {
                                ATerm b_39 = NULL;
                                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(u_38), not_null(w_38), not_null(y_38)), not_null(s_38));
                                {
                                  b_39 = t;
                                  if(((a_39 != NULL) && (a_39 != b_39)))
                                    _fail(b_39);
                                  else
                                    a_39 = b_39;
                                }
                                t = not_null(a_39);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            ;
            LocalPopChoice(q_21);
          }
        else
          {
            t = p_21;
            {
              ATerm m_39 = NULL,o_39 = NULL;
              ATerm n_39 = NULL;
              t = SSLgetAnnotations(not_null(f_38));
              {
                n_39 = t;
                if(((m_39 != NULL) && (m_39 != n_39)))
                  _fail(n_39);
                else
                  m_39 = n_39;
              }
              {
                t = not_null(g_38);
                {
                  ATerm q_39 = NULL;
                  t = t_0(t);
                  {
                    o_39 = t;
                    {
                      t = not_null(h_38);
                      {
                        ATerm s_39 = NULL;
                        t = v_0(t);
                        {
                          q_39 = t;
                          {
                            t = not_null(i_38);
                            {
                              ATerm u_39 = NULL;
                              t = w_0(t);
                              {
                                s_39 = t;
                                {
                                  ATerm v_39 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(o_39), not_null(q_39), not_null(s_39)), not_null(m_39));
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
ATerm pureterm_0 (ATerm t)
{
  ATerm u_21 = t;
  if((PushChoice() == 0))
    {
      ATerm r_2 (ATerm t)
      {
        ATerm w_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(y_21);
          }
        else
          {
            t = w_21;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, r_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_21;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL;
  m_40 = t;
  k_40 :
  if(match_cons(m_40, sym_SRule_1))
    {
      n_40 = ATgetArgument(m_40, 0);
      l_40 :
      if(match_cons(n_40, sym_StratRule_3))
        {
          o_40 = ATgetArgument(n_40, 0);
          p_40 = ATgetArgument(n_40, 1);
          q_40 = ATgetArgument(n_40, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_40)), (ATerm) ATmakeAppl(sym_Where_1, not_null(q_40))), not_null(o_40)));
        }
      else
        {
          if(match_cons(n_40, sym_Rule_3))
            {
              o_40 = ATgetArgument(n_40, 0);
              p_40 = ATgetArgument(n_40, 1);
              q_40 = ATgetArgument(n_40, 2);
              {
                t = not_null(o_40);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(p_40);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(p_40))), (ATerm) ATmakeAppl(sym_Where_1, not_null(q_40))), (ATerm) ATmakeAppl(sym_Match_1, not_null(o_40))));
              }
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
ATerm Rcon_0 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL;
  a_42 = t;
  q_41 :
  if(match_cons(a_42, sym_SRule_1))
    {
      b_42 = ATgetArgument(a_42, 0);
      r_41 :
      if(match_cons(b_42, sym_Rule_3))
        {
          c_42 = ATgetArgument(b_42, 0);
          d_42 = ATgetArgument(b_42, 1);
          e_42 = ATgetArgument(b_42, 2);
          {
            ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL;
            ATerm q_42 = NULL;
            ATerm w_42 = NULL;
            t = new_0(t);
            {
              q_42 = t;
              {
                if(((n_42 != NULL) && (n_42 != q_42)))
                  _fail(q_42);
                else
                  n_42 = q_42;
                {
                  t = not_null(c_42);
                  {
                    ATerm f_43 = NULL;
                    ATerm s_2 (ATerm t)
                    {
                      ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL;
                      r_42 = t;
                      c_41 :
                      if(match_cons(r_42, sym_Con_3))
                        {
                          s_42 = ATgetArgument(r_42, 0);
                          u_42 = ATgetArgument(r_42, 1);
                          v_42 = ATgetArgument(r_42, 2);
                          d_41 :
                          if(match_cons(s_42, sym_Var_1))
                            {
                              t_42 = ATgetArgument(s_42, 0);
                              {
                                if(((m_42 != NULL) && (m_42 != t_42)))
                                  _fail(t_42);
                                else
                                  m_42 = t_42;
                                {
                                  if(((k_42 != NULL) && (k_42 != u_42)))
                                    _fail(u_42);
                                  else
                                    k_42 = u_42;
                                  {
                                    if(((i_42 != NULL) && (i_42 != v_42)))
                                      _fail(v_42);
                                    else
                                      i_42 = v_42;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_42));
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
                    t = oncetd_1(t, s_2);
                    {
                      w_42 = t;
                      {
                        if(((o_42 != NULL) && (o_42 != w_42)))
                          _fail(w_42);
                        else
                          o_42 = w_42;
                        {
                          t = not_null(d_42);
                          {
                            ATerm t_2 (ATerm t)
                            {
                              ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL;
                              x_42 = t;
                              g_41 :
                              if(match_cons(x_42, sym_Con_3))
                                {
                                  y_42 = ATgetArgument(x_42, 0);
                                  a_43 = ATgetArgument(x_42, 1);
                                  b_43 = ATgetArgument(x_42, 2);
                                  h_41 :
                                  if(match_cons(y_42, sym_Var_1))
                                    {
                                      z_42 = ATgetArgument(y_42, 0);
                                      m_41 :
                                      if(match_cons(b_43, sym_CallT_3))
                                        {
                                          c_43 = ATgetArgument(b_43, 0);
                                          d_43 = ATgetArgument(b_43, 1);
                                          e_43 = ATgetArgument(b_43, 2);
                                          n_41 :
                                          if(((ATgetType(d_43) == AT_LIST) && ATisEmpty(d_43)))
                                            {
                                              o_41 :
                                              if(((ATgetType(e_43) == AT_LIST) && ATisEmpty(e_43)))
                                                {
                                                  {
                                                    if(((m_42 != NULL) && (m_42 != z_42)))
                                                      _fail(z_42);
                                                    else
                                                      m_42 = z_42;
                                                    {
                                                      if(((l_42 != NULL) && (l_42 != a_43)))
                                                        _fail(a_43);
                                                      else
                                                        l_42 = a_43;
                                                      {
                                                        if(((j_42 != NULL) && (j_42 != c_43)))
                                                          _fail(c_43);
                                                        else
                                                          j_42 = c_43;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_42));
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
                            t = oncetd_1(t, t_2);
                            {
                              f_43 = t;
                              if(((p_42 != NULL) && (p_42 != f_43)))
                                _fail(f_43);
                              else
                                p_42 = f_43;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_42)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_42), not_null(p_42), (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_42), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(j_42), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_42), not_null(l_42), term_r_17))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_42)), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_42)))))));
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
ATerm desugarRule_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        ;
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        {
          ATerm d_22 = t;
          int e_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              ;
              LocalPopChoice(e_22);
            }
          else
            {
              t = d_22;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, u_2);
  return(t);
}
ATerm ListVarScope_0 (ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL;
  z_43 = t;
  v_43 :
  if(match_cons(z_43, sym_Scope_2))
    {
      a_44 = ATgetArgument(z_43, 0);
      b_44 = ATgetArgument(z_43, 1);
      {
        ATerm e_44 = NULL;
        ATerm i_44 = NULL;
        t = not_null(a_44);
        {
          ATerm v_2 (ATerm t)
          {
            ATerm w_2 (ATerm t)
            {
              ATerm f_44 = NULL,g_44 = NULL;
              f_44 = t;
              p_43 :
              if(match_cons(f_44, sym_ListVar_1))
                {
                  g_44 = ATgetArgument(f_44, 0);
                  t = not_null(g_44);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = try_1(t, w_2);
            return(t);
          }
          t = map_1(t, v_2);
          {
            i_44 = t;
            if(((e_44 != NULL) && (e_44 != i_44)))
              _fail(i_44);
            else
              e_44 = i_44;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_44), not_null(b_44));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DesugarListMatching_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm y_2 (ATerm t)
    {
      ATerm f_22 = t;
      int g_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0(t);
          ;
          LocalPopChoice(g_22);
        }
      else
        {
          t = f_22;
          t = desugarRule_0(t);
        }
      return(t);
    }
    t = try_1(t, y_2);
    {
      ATerm z_2 (ATerm t)
      {
        ATerm h_22 = t;
        int i_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_22 = t;
            int k_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = HL_0(t);
                ;
                LocalPopChoice(k_22);
              }
            else
              {
                t = j_22;
                {
                  ATerm l_22 = t;
                  int q_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = ListMatch_0(t);
                      ;
                      LocalPopChoice(q_22);
                    }
                  else
                    {
                      t = l_22;
                      t = ListBuild_0(t);
                    }
                }
              }
            ;
            LocalPopChoice(i_22);
          }
        else
          {
            t = h_22;
            t = SingleListVar_0(t);
          }
        return(t);
      }
      t = repeat_1(t, z_2);
    }
    return(t);
  }
  t = topdown_1(t, x_2);
  return(t);
}
ATerm ExpandCall_0 (ATerm t)
{
  ATerm s_44 = NULL,x_44 = NULL,y_44 = NULL;
  s_44 = t;
  r_44 :
  if(match_cons(s_44, sym_Call_2))
    {
      x_44 = ATgetArgument(s_44, 0);
      y_44 = ATgetArgument(s_44, 1);
      t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(x_44), not_null(y_44), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm expand_calls_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    t = try_1(t, ExpandCall_0);
    return(t);
  }
  t = topdown_1(t, a_3);
  return(t);
}
ATerm DeclareVariables_0 (ATerm t)
{
  ATerm q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL;
  r_45 = t;
  p_45 :
  if(match_cons(r_45, sym_SDefT_4))
    {
      s_45 = ATgetArgument(r_45, 0);
      t_45 = ATgetArgument(r_45, 1);
      u_45 = ATgetArgument(r_45, 2);
      q_45 = ATgetArgument(r_45, 3);
      {
        ATerm z_45 = NULL,b_46 = NULL;
        ATerm r_22;
        r_22 = t;
        {
          ATerm a_46 = NULL;
          t = not_null(u_45);
          {
            t = declared_vars_0(t);
            {
              a_46 = t;
              if(((z_45 != NULL) && (z_45 != a_46)))
                _fail(a_46);
              else
                z_45 = a_46;
            }
          }
        }
        t = r_22;
        {
          ATerm c_46 = NULL,e_46 = NULL;
          ATerm d_46 = NULL;
          t = not_null(q_45);
          {
            t = tvars_0(t);
            {
              d_46 = t;
              if(((c_46 != NULL) && (c_46 != d_46)))
                _fail(d_46);
              else
                c_46 = d_46;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_46), not_null(z_45));
            {
              t = diff_0(t);
              {
                e_46 = t;
                if(((b_46 != NULL) && (b_46 != e_46)))
                  _fail(e_46);
                else
                  b_46 = e_46;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(s_45), not_null(t_45), not_null(u_45), (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_46), not_null(q_45)));
        }
      }
    }
  else
    {
      if(match_cons(r_45, sym_SDef_3))
        {
          s_45 = ATgetArgument(r_45, 0);
          t_45 = ATgetArgument(r_45, 1);
          u_45 = ATgetArgument(r_45, 2);
          {
            ATerm n_46 = NULL;
            ATerm o_46 = NULL;
            t = not_null(u_45);
            {
              t = tvars_0(t);
              {
                o_46 = t;
                if(((n_46 != NULL) && (n_46 != o_46)))
                  _fail(o_46);
                else
                  n_46 = o_46;
              }
            }
            t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(s_45), not_null(t_45), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_46), not_null(u_45)));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm RDtoSD_0 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
  d_47 = t;
  b_47 :
  if(match_cons(d_47, sym_RDefT_4))
    {
      e_47 = ATgetArgument(d_47, 0);
      f_47 = ATgetArgument(d_47, 1);
      g_47 = ATgetArgument(d_47, 2);
      c_47 = ATgetArgument(d_47, 3);
      {
        ATerm l_47 = NULL,n_47 = NULL;
        ATerm s_22;
        s_22 = t;
        {
          ATerm m_47 = NULL;
          t = not_null(g_47);
          {
            t = declared_vars_0(t);
            {
              m_47 = t;
              if(((l_47 != NULL) && (l_47 != m_47)))
                _fail(m_47);
              else
                l_47 = m_47;
            }
          }
        }
        t = s_22;
        {
          ATerm o_47 = NULL,q_47 = NULL;
          ATerm p_47 = NULL;
          t = not_null(c_47);
          {
            t = tvars_0(t);
            {
              p_47 = t;
              if(((o_47 != NULL) && (o_47 != p_47)))
                _fail(p_47);
              else
                o_47 = p_47;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_47), not_null(l_47));
            {
              t = diff_0(t);
              {
                q_47 = t;
                if(((n_47 != NULL) && (n_47 != q_47)))
                  _fail(q_47);
                else
                  n_47 = q_47;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(e_47), not_null(f_47), not_null(g_47), (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_47), (ATerm) ATmakeAppl(sym_SRule_1, not_null(c_47))));
        }
      }
    }
  else
    {
      if(match_cons(d_47, sym_RDef_3))
        {
          e_47 = ATgetArgument(d_47, 0);
          f_47 = ATgetArgument(d_47, 1);
          g_47 = ATgetArgument(d_47, 2);
          {
            ATerm u_47 = NULL;
            ATerm v_47 = NULL;
            t = not_null(g_47);
            {
              t = tvars_0(t);
              {
                v_47 = t;
                if(((u_47 != NULL) && (u_47 != v_47)))
                  _fail(v_47);
                else
                  u_47 = v_47;
              }
            }
            t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(e_47), not_null(f_47), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_47), (ATerm) ATmakeAppl(sym_SRule_1, not_null(g_47))));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm MkCall_0 (ATerm t)
{
  ATerm d_48 = NULL;
  d_48 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_48)), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL;
  q_48 = t;
  n_48 :
  if(match_cons(q_48, sym_OpDecl_2))
    {
      r_48 = ATgetArgument(q_48, 0);
      s_48 = ATgetArgument(q_48, 1);
      o_48 :
      if(match_cons(s_48, sym_FunType_2))
        {
          t_48 = ATgetArgument(s_48, 0);
          p_48 = ATgetArgument(s_48, 1);
          {
            ATerm x_48 = NULL,y_48 = NULL,g_49 = NULL;
            ATerm w_22;
            w_22 = t;
            {
              ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL;
              t = not_null(t_48);
              {
                ATerm b_3 (ATerm t)
                {
                  ATerm z_48 = NULL,b_49 = NULL;
                  t = new_0(t);
                  {
                    ATerm y_22;
                    y_22 = t;
                    {
                      ATerm a_49 = NULL;
                      a_49 = t;
                      if(((z_48 != NULL) && (z_48 != a_49)))
                        _fail(a_49);
                      else
                        z_48 = a_49;
                    }
                    t = y_22;
                    {
                      ATerm c_49 = NULL;
                      c_49 = t;
                      if(((b_49 != NULL) && (b_49 != c_49)))
                        _fail(c_49);
                      else
                        b_49 = c_49;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(z_48), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_d_23), term_d_23)), not_null(b_49));
                    }
                  }
                  return(t);
                }
                t = map_1(t, b_3);
                {
                  t = unzip_0(t);
                  {
                    d_49 = t;
                    l_48 :
                    if(match_cons(d_49, sym__2))
                      {
                        e_49 = ATgetArgument(d_49, 0);
                        f_49 = ATgetArgument(d_49, 1);
                        {
                          if(((x_48 != NULL) && (x_48 != e_49)))
                            _fail(e_49);
                          else
                            x_48 = e_49;
                          if(((y_48 != NULL) && (y_48 != f_49)))
                            _fail(f_49);
                          else
                            y_48 = f_49;
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
            t = w_22;
            {
              ATerm h_49 = NULL;
              t = not_null(y_48);
              {
                t = map_1(t, MkCall_0);
                {
                  h_49 = t;
                  if(((g_49 != NULL) && (g_49 != h_49)))
                    _fail(h_49);
                  else
                    g_49 = h_49;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(r_48), not_null(x_48), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(r_48), not_null(g_49)));
            }
          }
        }
      else
        {
          if(match_cons(s_48, sym_ConstType_1))
            {
              t_48 = ATgetArgument(s_48, 0);
              t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(r_48), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(r_48), (ATerm) ATempty));
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
ATerm MkCongDefs_0 (ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL;
  t_49 = t;
  s_49 :
  if(match_cons(t_49, sym_Constructors_1))
    {
      u_49 = ATgetArgument(t_49, 0);
      {
        t = not_null(u_49);
        t = map_1(t, MkCongDef_0);
      }
    }
  else
    {
      if(match_cons(t_49, sym_Sorts_1))
        {
          u_49 = ATgetArgument(t_49, 0);
          t = (ATerm) ATempty;
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm congdefs_0 (ATerm t)
{
  t = map_1(t, MkCongDefs_0);
  t = concat_0(t);
  return(t);
}
ATerm RulesToSdefs_0 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL;
  j_50 = t;
  d_50 :
  if(match_cons(j_50, sym_Specification_1))
    {
      k_50 = ATgetArgument(j_50, 0);
      e_50 :
      if(((ATgetType(k_50) == AT_LIST) && !(ATisEmpty(k_50))))
        {
          l_50 = ATgetFirst((ATermList) k_50);
          n_50 = (ATerm) ATgetNext((ATermList) k_50);
          f_50 :
          if(match_cons(l_50, sym_Signature_1))
            {
              m_50 = ATgetArgument(l_50, 0);
              g_50 :
              if(((ATgetType(n_50) == AT_LIST) && !(ATisEmpty(n_50))))
                {
                  o_50 = ATgetFirst((ATermList) n_50);
                  q_50 = (ATerm) ATgetNext((ATermList) n_50);
                  h_50 :
                  if(match_cons(o_50, sym_Strategies_1))
                    {
                      p_50 = ATgetArgument(o_50, 0);
                      i_50 :
                      if(((ATgetType(q_50) == AT_LIST) && ATisEmpty(q_50)))
                        {
                          {
                            ATerm t_50 = NULL;
                            ATerm u_50 = NULL,w_50 = NULL,y_50 = NULL;
                            ATerm e_23;
                            e_23 = t;
                            {
                              ATerm v_50 = NULL;
                              t = not_null(m_50);
                              {
                                t = congdefs_0(t);
                                {
                                  v_50 = t;
                                  if(((u_50 != NULL) && (u_50 != v_50)))
                                    _fail(v_50);
                                  else
                                    u_50 = v_50;
                                }
                              }
                            }
                            t = e_23;
                            {
                              ATerm x_50 = NULL;
                              t = (ATerm) ATinsert(CheckATermList(not_null(p_50)), (ATerm) ATmakeAppl(sym_RDefT_4, term_f_23, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_h_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_d_23), term_d_23))), (ATerm) ATmakeAppl(sym_VarDec_2, term_g_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_d_23), term_d_23))), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, term_t_23, term_m_24, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_v_24), term_p_24)))));
                              {
                                ATerm c_3 (ATerm t)
                                {
                                  ATerm y_24 = t;
                                  int b_25 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = RDtoSD_0(t);
                                      ;
                                      LocalPopChoice(b_25);
                                    }
                                  else
                                    {
                                      t = y_24;
                                      t = DeclareVariables_0(t);
                                    }
                                  t = expand_calls_0(t);
                                  return(t);
                                }
                                t = map_1(t, c_3);
                                {
                                  x_50 = t;
                                  if(((w_50 != NULL) && (w_50 != x_50)))
                                    _fail(x_50);
                                  else
                                    w_50 = x_50;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_50), not_null(w_50));
                                {
                                  t = conc_0(t);
                                  {
                                    y_50 = t;
                                    if(((t_50 != NULL) && (t_50 != y_50)))
                                      _fail(y_50);
                                    else
                                      t_50 = y_50;
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(t_50))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(m_50))));
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
ATerm TupleDeclarations_0 (ATerm t)
{
  ATerm h_51 = NULL;
  ATerm o_51 = NULL;
  h_51 = t;
  {
    ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
    t = (ATerm) ATempty;
    {
      ATerm d_3 (ATerm t)
      {
        t = term_c_25;
        return(t);
      }
      t = rewrite_1(t, d_3);
      {
        p_51 = t;
        f_51 :
        if(match_cons(p_51, sym_Defined_2))
          {
            q_51 = ATgetArgument(p_51, 0);
            r_51 = ATgetArgument(p_51, 1);
            g_51 :
            if(match_string(q_51, "t_1"))
              {
                if(((o_51 != NULL) && (o_51 != r_51)))
                  _fail(r_51);
                else
                  o_51 = r_51;
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
    t = not_null(o_51);
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm v_51 = NULL;
  v_51 = t;
  t = SSL_int_to_string(not_null(v_51));
  return(t);
}
ATerm CheckConsError_0 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL;
  e_52 = t;
  d_52 :
  if(match_cons(e_52, sym_Op_2))
    {
      f_52 = ATgetArgument(e_52, 0);
      g_52 = ATgetArgument(e_52, 1);
      {
        ATerm k_52 = NULL,l_52 = NULL;
        ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL;
        t = term_d_25;
        {
          ATerm e_3 (ATerm t)
          {
            t = term_e_25;
            return(t);
          }
          t = rewrite_1(t, e_3);
          {
            m_52 = t;
            b_52 :
            if(match_cons(m_52, sym_Defined_3))
              {
                n_52 = ATgetArgument(m_52, 0);
                o_52 = ATgetArgument(m_52, 1);
                p_52 = ATgetArgument(m_52, 2);
                c_52 :
                if(match_string(n_52, "v_1"))
                  {
                    ATerm q_52 = NULL;
                    if(((k_52 != NULL) && (k_52 != o_52)))
                      _fail(o_52);
                    else
                      k_52 = o_52;
                    {
                      if(((l_52 != NULL) && (l_52 != p_52)))
                        _fail(p_52);
                      else
                        l_52 = p_52;
                      {
                        ATerm r_52 = NULL;
                        t = not_null(g_52);
                        {
                          t = length_0(t);
                          {
                            t = int_to_string_0(t);
                            {
                              r_52 = t;
                              if(((q_52 != NULL) && (q_52 != r_52)))
                                _fail(r_52);
                              else
                                q_52 = r_52;
                            }
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_h_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_26), not_null(q_52)), term_b_26), not_null(f_52)), term_a_26), term_r_25), not_null(l_52)), term_q_25), not_null(k_52)), term_p_25));
                          t = printnl_0(t);
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
          }
        }
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(f_52), not_null(g_52));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL;
  x_52 = t;
  w_52 :
  if(match_cons(x_52, sym__2))
    {
      y_52 = ATgetArgument(x_52, 0);
      z_52 = ATgetArgument(x_52, 1);
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(y_52), not_null(z_52));
            ;
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
            t = SSL_subtr(not_null(y_52), not_null(z_52));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL;
    r_53 = t;
    g_53 :
    if(match_cons(r_53, sym__2))
      {
        s_53 = ATgetArgument(r_53, 0);
        t_53 = ATgetArgument(r_53, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(s_53), not_null(t_53), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL;
    w_53 = t;
    i_53 :
    if(match_cons(w_53, sym__3))
      {
        x_53 = ATgetArgument(w_53, 0);
        y_53 = ATgetArgument(w_53, 1);
        z_53 = ATgetArgument(w_53, 2);
        l_53 :
        if(match_int(x_53, 0))
          {
            t = not_null(z_53);
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
  ATerm h_3 (ATerm t)
  {
    ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL;
    c_54 = t;
    o_53 :
    if(match_cons(c_54, sym__3))
      {
        d_54 = ATgetArgument(c_54, 0);
        e_54 = ATgetArgument(c_54, 1);
        f_54 = ATgetArgument(c_54, 2);
        {
          ATerm l_54 = NULL;
          ATerm n_26;
          n_26 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_54), term_o_26);
            t = geq_0(t);
          }
          t = n_26;
          {
            ATerm m_54 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_54), term_o_26);
            {
              t = subt_0(t);
              {
                m_54 = t;
                if(((l_54 != NULL) && (l_54 != m_54)))
                  _fail(m_54);
                else
                  l_54 = m_54;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_54), not_null(e_54), (ATerm) ATinsert(CheckATermList(not_null(f_54)), not_null(e_54)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, f_3, g_3, h_3);
  return(t);
}
ATerm CheckTuple_0 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
  q_55 = t;
  o_55 :
  if(match_cons(q_55, sym_Op_2))
    {
      r_55 = ATgetArgument(q_55, 0);
      s_55 = ATgetArgument(q_55, 1);
      p_55 :
      if(match_string(r_55, ""))
        {
          ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
          ATerm p_26;
          p_26 = t;
          {
            ATerm y_55 = NULL;
            t = not_null(s_55);
            {
              ATerm z_55 = NULL;
              t = length_0(t);
              {
                y_55 = t;
                {
                  if(((v_55 != NULL) && (v_55 != y_55)))
                    _fail(y_55);
                  else
                    v_55 = y_55;
                  {
                    ATerm a_56 = NULL,c_56 = NULL;
                    t = term_t_15;
                    {
                      z_55 = t;
                      {
                        if(((u_55 != NULL) && (u_55 != z_55)))
                          _fail(z_55);
                        else
                          u_55 = z_55;
                        {
                          ATerm q_26;
                          q_26 = t;
                          {
                            ATerm b_56 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(v_55), term_v_26);
                            {
                              t = copy_0(t);
                              {
                                b_56 = t;
                                if(((a_56 != NULL) && (a_56 != b_56)))
                                  _fail(b_56);
                                else
                                  a_56 = b_56;
                              }
                            }
                          }
                          t = q_26;
                          {
                            ATerm d_56 = NULL,f_56 = NULL;
                            t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_15, (ATerm) ATmakeAppl(sym_FunType_2, not_null(a_56), term_v_26));
                            {
                              c_56 = t;
                              {
                                if(((w_55 != NULL) && (w_55 != c_56)))
                                  _fail(c_56);
                                else
                                  w_55 = c_56;
                                {
                                  t = GenerateCheckRule_0(t);
                                  {
                                    ATerm e_56 = NULL;
                                    ATerm w_26 = t;
                                    int a_27 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = TupleDeclarations_0(t);
                                        ;
                                        LocalPopChoice(a_27);
                                      }
                                    else
                                      {
                                        t = w_26;
                                        t = (ATerm) ATempty;
                                      }
                                    {
                                      e_56 = t;
                                      if(((d_56 != NULL) && (d_56 != e_56)))
                                        _fail(e_56);
                                      else
                                        d_56 = e_56;
                                    }
                                    {
                                      t = (ATerm) ATinsert(CheckATermList(not_null(d_56)), not_null(w_55));
                                      {
                                        f_56 = t;
                                        {
                                          if(((x_55 != NULL) && (x_55 != f_56)))
                                            _fail(f_56);
                                          else
                                            x_55 = f_56;
                                          {
                                            ATerm d_27;
                                            d_27 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_27, not_null(x_55)));
                                              {
                                                ATerm i_3 (ATerm t)
                                                {
                                                  t = term_c_25;
                                                  return(t);
                                                }
                                                t = assert_1(t, i_3);
                                              }
                                            }
                                            t = d_27;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = p_26;
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
ATerm CheckCons_0 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL;
  c_57 = t;
  b_57 :
  if(match_cons(c_57, sym_Op_2))
    {
      d_57 = ATgetArgument(c_57, 0);
      e_57 = ATgetArgument(c_57, 1);
      {
        ATerm f_27 = t;
        int g_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_57 = NULL;
            t = not_null(e_57);
            {
              t = length_0(t);
              {
                i_57 = t;
                {
                  ATerm k_57 = NULL,l_57 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(d_57), (ATerm) ATmakeAppl(sym_Keys_1, not_null(i_57)));
                  {
                    ATerm j_3 (ATerm t)
                    {
                      t = term_h_27;
                      return(t);
                    }
                    t = rewrite_1(t, j_3);
                    {
                      k_57 = t;
                      w_56 :
                      if(match_cons(k_57, sym_Defined_1))
                        {
                          l_57 = ATgetArgument(k_57, 0);
                          x_56 :
                          if(!(match_string(l_57, "q_1")))
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
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(d_57), (ATerm) ATempty);
                }
              }
            }
            ;
            LocalPopChoice(g_27);
          }
        else
          {
            t = f_27;
            {
              ATerm p_57 = NULL;
              t = not_null(e_57);
              {
                t = length_0(t);
                {
                  p_57 = t;
                  {
                    ATerm r_57 = NULL,s_57 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(d_57), (ATerm) ATmakeAppl(sym_Keys_1, not_null(p_57)));
                    {
                      ATerm k_3 (ATerm t)
                      {
                        t = term_h_27;
                        return(t);
                      }
                      t = rewrite_1(t, k_3);
                      {
                        r_57 = t;
                        z_56 :
                        if(match_cons(r_57, sym_Defined_1))
                          {
                            s_57 = ATgetArgument(r_57, 0);
                            a_57 :
                            if(!(match_string(s_57, "n_1")))
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
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(d_57), (ATerm) ATempty);
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
ATerm manytd_1 (ATerm t, ATerm f_109 (ATerm))
{
  ATerm x_57 (ATerm t)
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_109(t);
        {
          ATerm l_3 (ATerm t)
          {
            t = try_1(t, x_57);
            return(t);
          }
          t = _all(t, l_3);
        }
        ;
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = _some(t, x_57);
      }
    return(t);
  }
  t = x_57(t);
  return(t);
}
ATerm check_constructors_p__2 (ATerm t, ATerm j_135 (ATerm), ATerm k_135 (ATerm))
{
  ATerm a_58 = NULL,b_58 = NULL;
  ATerm m_3 (ATerm t)
  {
    t = term_e_25;
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    ATerm k_27;
    k_27 = t;
    {
      ATerm c_58 = NULL;
      ATerm d_58 = NULL;
      t = j_135(t);
      {
        c_58 = t;
        {
          if(((b_58 != NULL) && (b_58 != c_58)))
            _fail(c_58);
          else
            b_58 = c_58;
          {
            t = k_135(t);
            {
              d_58 = t;
              if(((a_58 != NULL) && (a_58 != d_58)))
                _fail(d_58);
              else
                a_58 = d_58;
            }
          }
        }
      }
    }
    t = k_27;
    {
      ATerm o_27;
      o_27 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_25, (ATerm) ATmakeAppl(sym_Defined_3, term_p_27, not_null(a_58), not_null(b_58)));
        {
          ATerm o_3 (ATerm t)
          {
            t = term_e_25;
            return(t);
          }
          t = assert_1(t, o_3);
        }
      }
      t = o_27;
      {
        ATerm p_3 (ATerm t)
        {
          ATerm t_27 = t;
          if((PushChoice() == 0))
            {
              ATerm w_27 = t;
              int x_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CheckCons_0(t);
                  ;
                  LocalPopChoice(x_27);
                }
              else
                {
                  t = w_27;
                  t = CheckTuple_0(t);
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_27;
            }
          t = CheckConsError_0(t);
          return(t);
        }
        t = manytd_1(t, p_3);
      }
    }
    return(t);
  }
  t = scope_2(t, m_3, n_3);
  return(t);
}
ATerm check_constructors_0 (ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL;
  j_58 = t;
  i_58 :
  if(match_cons(j_58, sym_SDef_3))
    {
      k_58 = ATgetArgument(j_58, 0);
      l_58 = ATgetArgument(j_58, 1);
      m_58 = ATgetArgument(j_58, 2);
      {
        t = not_null(m_58);
        {
          ATerm q_3 (ATerm t)
          {
            t = not_null(k_58);
            return(t);
          }
          ATerm r_3 (ATerm t)
          {
            t = term_y_27;
            return(t);
          }
          t = check_constructors_p__2(t, q_3, r_3);
        }
      }
    }
  else
    {
      if(match_cons(j_58, sym_RDef_3))
        {
          k_58 = ATgetArgument(j_58, 0);
          l_58 = ATgetArgument(j_58, 1);
          m_58 = ATgetArgument(j_58, 2);
          {
            t = not_null(m_58);
            {
              ATerm s_3 (ATerm t)
              {
                t = not_null(k_58);
                return(t);
              }
              ATerm t_3 (ATerm t)
              {
                t = term_z_27;
                return(t);
              }
              t = check_constructors_p__2(t, s_3, t_3);
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
ATerm length_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    t = term_a_28;
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = term_o_26;
    return(t);
  }
  t = foldr_3(t, u_3, add_0, v_3);
  return(t);
}
ATerm GenerateCheckRule_0 (ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL;
  c_59 = t;
  z_58 :
  if(match_cons(c_59, sym_OpDecl_2))
    {
      d_59 = ATgetArgument(c_59, 0);
      e_59 = ATgetArgument(c_59, 1);
      a_59 :
      if(match_cons(e_59, sym_FunType_2))
        {
          f_59 = ATgetArgument(e_59, 0);
          b_59 = ATgetArgument(e_59, 1);
          {
            ATerm j_59 = NULL;
            ATerm d_28;
            d_28 = t;
            {
              ATerm k_59 = NULL;
              t = not_null(f_59);
              {
                t = length_0(t);
                {
                  k_59 = t;
                  if(((j_59 != NULL) && (j_59 != k_59)))
                    _fail(k_59);
                  else
                    j_59 = k_59;
                }
              }
            }
            t = d_28;
            {
              ATerm e_28;
              e_28 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, not_null(d_59), (ATerm) ATmakeAppl(sym_Keys_1, not_null(j_59))), term_p_28);
                {
                  ATerm w_3 (ATerm t)
                  {
                    t = term_h_27;
                    return(t);
                  }
                  t = assert_1(t, w_3);
                }
              }
              t = e_28;
            }
          }
        }
      else
        {
          if(match_cons(e_59, sym_ConstType_1))
            {
              f_59 = ATgetArgument(e_59, 0);
              {
                ATerm n_59 = NULL;
                ATerm q_28;
                q_28 = t;
                {
                  ATerm o_59 = NULL;
                  t = term_a_28;
                  {
                    o_59 = t;
                    if(((n_59 != NULL) && (n_59 != o_59)))
                      _fail(o_59);
                    else
                      n_59 = o_59;
                  }
                }
                t = q_28;
                {
                  ATerm r_28;
                  r_28 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, not_null(d_59), (ATerm) ATmakeAppl(sym_Keys_1, not_null(n_59))), term_t_28);
                    {
                      ATerm x_3 (ATerm t)
                      {
                        t = term_h_27;
                        return(t);
                      }
                      t = assert_1(t, x_3);
                    }
                  }
                  t = r_28;
                }
              }
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
ATerm CheckConstructors_0 (ATerm t)
{
  ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL;
  r_60 = t;
  i_60 :
  if(match_cons(r_60, sym_Specification_1))
    {
      s_60 = ATgetArgument(r_60, 0);
      j_60 :
      if(((ATgetType(s_60) == AT_LIST) && !(ATisEmpty(s_60))))
        {
          t_60 = ATgetFirst((ATermList) s_60);
          y_60 = (ATerm) ATgetNext((ATermList) s_60);
          k_60 :
          if(match_cons(t_60, sym_Signature_1))
            {
              u_60 = ATgetArgument(t_60, 0);
              l_60 :
              if(((ATgetType(u_60) == AT_LIST) && !(ATisEmpty(u_60))))
                {
                  v_60 = ATgetFirst((ATermList) u_60);
                  x_60 = (ATerm) ATgetNext((ATermList) u_60);
                  m_60 :
                  if(match_cons(v_60, sym_Constructors_1))
                    {
                      w_60 = ATgetArgument(v_60, 0);
                      n_60 :
                      if(((ATgetType(x_60) == AT_LIST) && ATisEmpty(x_60)))
                        {
                          o_60 :
                          if(((ATgetType(y_60) == AT_LIST) && !(ATisEmpty(y_60))))
                            {
                              z_60 = ATgetFirst((ATermList) y_60);
                              b_61 = (ATerm) ATgetNext((ATermList) y_60);
                              p_60 :
                              if(match_cons(z_60, sym_Strategies_1))
                                {
                                  a_61 = ATgetArgument(z_60, 0);
                                  q_60 :
                                  if(((ATgetType(b_61) == AT_LIST) && ATisEmpty(b_61)))
                                    {
                                      {
                                        ATerm g_61 = NULL,h_61 = NULL,l_61 = NULL;
                                        ATerm u_28;
                                        u_28 = t;
                                        {
                                          ATerm i_61 = NULL;
                                          ATerm j_61 = NULL;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(w_60)), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_26), term_v_26), term_v_26), term_v_26), term_v_26), term_v_26), term_v_26), term_v_26), term_v_26))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_26), term_v_26), term_v_26), term_v_26), term_v_26), term_v_26), term_v_26), term_v_26))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_26), term_v_26), term_v_26), term_v_26), term_v_26), term_v_26), term_v_26))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_26), term_v_26), term_v_26), term_v_26), term_v_26), term_v_26))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_26), term_v_26), term_v_26), term_v_26), term_v_26))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_v_26), term_v_26), term_v_26), term_v_26))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_v_26), term_v_26), term_v_26))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_26), term_v_26))), term_w_28);
                                          {
                                            i_61 = t;
                                            {
                                              if(((g_61 != NULL) && (g_61 != i_61)))
                                                _fail(i_61);
                                              else
                                                g_61 = i_61;
                                              {
                                                t = not_null(g_61);
                                                {
                                                  t = map_1(t, GenerateCheckRule_0);
                                                  {
                                                    t = not_null(a_61);
                                                    {
                                                      t = filter_1(t, check_constructors_0);
                                                      {
                                                        j_61 = t;
                                                        g_60 :
                                                        if(((ATgetType(j_61) == AT_LIST) && ATisEmpty(j_61)))
                                                          {
                                                            {
                                                              ATerm k_61 = NULL;
                                                              ATerm x_28 = t;
                                                              int y_28 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = TupleDeclarations_0(t);
                                                                  ;
                                                                  LocalPopChoice(y_28);
                                                                }
                                                              else
                                                                {
                                                                  t = x_28;
                                                                  t = (ATerm) ATempty;
                                                                }
                                                              {
                                                                k_61 = t;
                                                                if(((h_61 != NULL) && (h_61 != k_61)))
                                                                  _fail(k_61);
                                                                else
                                                                  h_61 = k_61;
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
                                        }
                                        t = u_28;
                                        {
                                          ATerm m_61 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_61), not_null(g_61));
                                          {
                                            t = conc_0(t);
                                            {
                                              m_61 = t;
                                              if(((l_61 != NULL) && (l_61 != m_61)))
                                                _fail(m_61);
                                              else
                                                l_61 = m_61;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(a_61))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(l_61))))));
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
ATerm exp_overlays2_1 (ATerm t, ATerm z_133 (ATerm))
{
  ATerm y_3 (ATerm t)
  {
    ATerm z_28;
    z_28 = t;
    {
      ATerm a_29 = t;
      if((PushChoice() == 0))
        {
          ATerm y_61 = NULL;
          t = z_133(t);
          {
            y_61 = t;
            x_61 :
            if(((ATgetType(y_61) == AT_LIST) && ATisEmpty(y_61)))
              {
                {
                }
              }
            else
              {
                _fail(t);
              }
          }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_29;
        }
    }
    t = z_28;
    {
      ATerm z_3 (ATerm t)
      {
        ATerm a_4 (ATerm t)
        {
          t = ExpOverlay_1(t, z_133);
          return(t);
        }
        t = try_1(t, a_4);
        return(t);
      }
      t = topdown_1(t, z_3);
    }
    return(t);
  }
  t = try_1(t, y_3);
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL,k_62 = NULL;
  j_62 = t;
  h_62 :
  if(match_cons(j_62, sym_BuildDefault_1))
    {
      k_62 = ATgetArgument(j_62, 0);
      t = term_r_17;
    }
  else
    {
      if(match_cons(j_62, sym_Real_1))
        {
          k_62 = ATgetArgument(j_62, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(k_62)));
        }
      else
        {
          if(match_cons(j_62, sym_Int_1))
            {
              k_62 = ATgetArgument(j_62, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(k_62)));
            }
          else
            {
              if(match_cons(j_62, sym_Str_1))
                {
                  k_62 = ATgetArgument(j_62, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(k_62)));
                }
              else
                {
                  if(match_cons(j_62, sym_Anno_2))
                    {
                      k_62 = ATgetArgument(j_62, 0);
                      i_62 = ATgetArgument(j_62, 1);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_b_29, (ATerm)ATinsert(ATinsert(ATempty, not_null(i_62)), not_null(k_62)), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(j_62, sym_Op_2))
                        {
                          k_62 = ATgetArgument(j_62, 0);
                          i_62 = ATgetArgument(j_62, 1);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_62)), not_null(i_62), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(j_62, sym_Var_1))
                            {
                              k_62 = ATgetArgument(j_62, 0);
                              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_62)), (ATerm)ATempty, (ATerm) ATempty);
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
ATerm trm_to_cong_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm c_4 (ATerm t)
    {
      t = map_1(t, trm_to_cong_0);
      return(t);
    }
    t = Op_2(t, _id, c_4);
    return(t);
  }
  t = try_1(t, b_4);
  t = Trm_to_Cong_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0 (ATerm t)
{
  ATerm o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL;
  o_63 = t;
  n_63 :
  if(match_cons(o_63, sym_Overlay_3))
    {
      p_63 = ATgetArgument(o_63, 0);
      q_63 = ATgetArgument(o_63, 1);
      r_63 = ATgetArgument(o_63, 2);
      {
        ATerm v_63 = NULL,z_63 = NULL;
        ATerm c_29;
        c_29 = t;
        {
          ATerm y_63 = NULL;
          t = not_null(q_63);
          {
            ATerm d_4 (ATerm t)
            {
              ATerm w_63 = NULL;
              ATerm x_63 = NULL;
              x_63 = t;
              if(((w_63 != NULL) && (w_63 != x_63)))
                _fail(x_63);
              else
                w_63 = x_63;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(w_63), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_d_23), term_d_23));
              return(t);
            }
            t = map_1(t, d_4);
            {
              y_63 = t;
              if(((v_63 != NULL) && (v_63 != y_63)))
                _fail(y_63);
              else
                v_63 = y_63;
            }
          }
        }
        t = c_29;
        {
          ATerm a_64 = NULL;
          t = not_null(r_63);
          {
            t = trm_to_cong_0(t);
            {
              a_64 = t;
              if(((z_63 != NULL) && (z_63 != a_64)))
                _fail(a_64);
              else
                z_63 = a_64;
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(p_63), not_null(v_63), not_null(z_63));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReplaceVar_0 (ATerm t)
{
  ATerm j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL;
  j_64 = t;
  h_64 :
  if(match_cons(j_64, sym__2))
    {
      k_64 = ATgetArgument(j_64, 0);
      n_64 = ATgetArgument(j_64, 1);
      i_64 :
      if(match_cons(k_64, sym_DefaultVarDec_1))
        {
          l_64 = ATgetArgument(k_64, 0);
          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, not_null(n_64));
        }
      else
        {
          if(match_cons(k_64, sym_VarDec_2))
            {
              l_64 = ATgetArgument(k_64, 0);
              m_64 = ATgetArgument(k_64, 1);
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(n_64), not_null(m_64));
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
ATerm tpaste_1 (ATerm t, ATerm u_134 (ATerm))
{
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, u_134, _id);
      ;
      LocalPopChoice(i_29);
    }
  else
    {
      t = h_29;
      {
        ATerm j_29 = t;
        int n_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_4 (ATerm t)
            {
              t = split_2(t, _id, u_134);
              t = zip_1(t, ReplaceVar_0);
              return(t);
            }
            t = SDefT_4(t, _id, _id, e_4, _id);
            ;
            LocalPopChoice(n_29);
          }
        else
          {
            t = j_29;
            {
              ATerm f_4 (ATerm t)
              {
                t = split_2(t, _id, u_134);
                t = zip_1(t, ReplaceVar_0);
                return(t);
              }
              t = RDefT_4(t, _id, _id, f_4, _id);
            }
          }
      }
    }
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL;
  x_64 = t;
  w_64 :
  if(match_cons(x_64, sym_Var_1))
    {
      y_64 = ATgetArgument(x_64, 0);
      t = not_null(y_64);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm f_132 (ATerm), ATerm g_132 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL;
  f_65 = t;
  e_65 :
  if(match_cons(f_65, sym__3))
    {
      g_65 = ATgetArgument(f_65, 0);
      h_65 = ATgetArgument(f_65, 1);
      i_65 = ATgetArgument(f_65, 2);
      {
        t = not_null(g_65);
        {
          ATerm g_4 (ATerm t)
          {
            ATerm r_65 = NULL;
            r_65 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_65), not_null(i_65));
              t = f_132(t);
            }
            return(t);
          }
          ATerm h_4 (ATerm t)
          {
            ATerm t_65 = NULL;
            t_65 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_65), not_null(h_65));
              t = f_132(t);
            }
            return(t);
          }
          t = g_132(t, g_4, h_4, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm z_131 (ATerm), ATerm a_132 (ATerm, ATerm (ATerm)))
{
  ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL;
  u_66 = t;
  t_66 :
  if(match_cons(u_66, sym__2))
    {
      v_66 = ATgetArgument(u_66, 0);
      w_66 = ATgetArgument(u_66, 1);
      {
        ATerm z_66 = NULL,a_67 = NULL,h_67 = NULL,u_67 = NULL;
        ATerm p_29;
        p_29 = t;
        {
          ATerm i_67 = NULL;
          t = not_null(v_66);
          {
            ATerm j_67 = NULL;
            t = z_131(t);
            {
              i_67 = t;
              {
                if(((z_66 != NULL) && (z_66 != i_67)))
                  _fail(i_67);
                else
                  z_66 = i_67;
                {
                  ATerm k_67 = NULL,m_67 = NULL;
                  t = map_1(t, new_0);
                  {
                    j_67 = t;
                    {
                      if(((a_67 != NULL) && (a_67 != j_67)))
                        _fail(j_67);
                      else
                        a_67 = j_67;
                      {
                        ATerm l_67 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_66), not_null(a_67));
                        {
                          t = zip_1(t, _id);
                          {
                            l_67 = t;
                            if(((k_67 != NULL) && (k_67 != l_67)))
                              _fail(l_67);
                            else
                              k_67 = l_67;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(k_67), not_null(w_66));
                          {
                            t = conc_0(t);
                            {
                              m_67 = t;
                              if(((h_67 != NULL) && (h_67 != m_67)))
                                _fail(m_67);
                              else
                                h_67 = m_67;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = p_29;
        {
          ATerm v_67 = NULL;
          t = not_null(v_66);
          {
            ATerm i_4 (ATerm t)
            {
              t = not_null(a_67);
              return(t);
            }
            t = a_132(t, i_4);
            {
              v_67 = t;
              if(((u_67 != NULL) && (u_67 != v_67)))
                _fail(v_67);
              else
                u_67 = v_67;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(u_67), not_null(w_66), not_null(h_67));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm s_131 (ATerm), ATerm t_131 (ATerm))
{
  ATerm d_69 = NULL;
  ATerm f_69 = NULL,g_69 = NULL;
  d_69 = t;
  {
    ATerm h_69 = NULL;
    t = not_null(d_69);
    {
      ATerm i_69 = NULL;
      t = s_131(t);
      {
        h_69 = t;
        {
          if(((f_69 != NULL) && (f_69 != h_69)))
            _fail(h_69);
          else
            f_69 = h_69;
          {
            t = t_131(t);
            {
              i_69 = t;
              if(((g_69 != NULL) && (g_69 != i_69)))
                _fail(i_69);
              else
                g_69 = i_69;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_69), not_null(g_69));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL;
  p_69 = t;
  n_69 :
  if(match_cons(p_69, sym__2))
    {
      q_69 = ATgetArgument(p_69, 0);
      r_69 = ATgetArgument(p_69, 1);
      o_69 :
      if(((ATgetType(r_69) == AT_LIST) && !(ATisEmpty(r_69))))
        {
          s_69 = ATgetFirst((ATermList) r_69);
          t_69 = (ATerm) ATgetNext((ATermList) r_69);
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_69), not_null(t_69));
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
  ATerm b_70 = NULL,c_70 = NULL,d_70 = NULL,o_70 = NULL,p_70 = NULL,r_70 = NULL,i_72 = NULL;
  b_70 = t;
  y_69 :
  if(match_cons(b_70, sym__2))
    {
      c_70 = ATgetArgument(b_70, 0);
      d_70 = ATgetArgument(b_70, 1);
      z_69 :
      if(((ATgetType(d_70) == AT_LIST) && !(ATisEmpty(d_70))))
        {
          o_70 = ATgetFirst((ATermList) d_70);
          i_72 = (ATerm) ATgetNext((ATermList) d_70);
          a_70 :
          if(match_cons(o_70, sym__2))
            {
              p_70 = ATgetArgument(o_70, 0);
              r_70 = ATgetArgument(o_70, 1);
              {
                ATerm k_72 = NULL;
                if(((c_70 != NULL) && (c_70 != p_70)))
                  _fail(p_70);
                else
                  c_70 = p_70;
                {
                  if(((k_72 != NULL) && (k_72 != r_70)))
                    _fail(r_70);
                  else
                    k_72 = r_70;
                  t = not_null(k_72);
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
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm k_132 (ATerm, ATerm (ATerm)))
{
  ATerm p_74 = NULL,g_76 = NULL,i_76 = NULL;
  p_74 = t;
  o_74 :
  if(match_cons(p_74, sym__2))
    {
      g_76 = ATgetArgument(p_74, 0);
      i_76 = ATgetArgument(p_74, 1);
      {
        t = not_null(g_76);
        {
          ATerm j_4 (ATerm t)
          {
            ATerm k_4 (ATerm t)
            {
              t = not_null(i_76);
              return(t);
            }
            t = split_2(t, _id, k_4);
            t = lookup_0(t);
            return(t);
          }
          t = k_132(t, j_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm z_111 (ATerm))
{
  ATerm r_80 = NULL,s_80 = NULL,t_80 = NULL;
  r_80 = t;
  q_80 :
  if(match_cons(r_80, sym__2))
    {
      s_80 = ATgetArgument(r_80, 0);
      t_80 = ATgetArgument(r_80, 1);
      {
        t = not_null(s_80);
        {
          ATerm l_4 (ATerm t)
          {
            ATerm w_80 = NULL;
            w_80 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_80), not_null(t_80));
              t = z_111(t);
            }
            return(t);
          }
          t = _all(t, l_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm j_111 (ATerm))
{
  ATerm a_81 (ATerm t)
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_111(t);
        ;
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        t = all_dist_1(t, a_81);
      }
    return(t);
  }
  t = a_81(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm g_86 = NULL,h_86 = NULL,p_89 = NULL,q_89 = NULL;
  g_86 = t;
  e_81 :
  if(match_cons(g_86, sym__2))
    {
      h_86 = ATgetArgument(g_86, 0);
      p_89 = ATgetArgument(g_86, 1);
      {
        ATerm u_89 = NULL;
        if(((u_89 != NULL) && (u_89 != p_89)))
          _fail(p_89);
        else
          u_89 = p_89;
      }
    }
  else
    {
      if(match_cons(g_86, sym__3))
        {
          h_86 = ATgetArgument(g_86, 0);
          p_89 = ATgetArgument(g_86, 1);
          q_89 = ATgetArgument(g_86, 2);
          {
            ATerm a_90 = NULL;
            ATerm b_90 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_86), not_null(p_89));
            {
              t = zip_1(t, _id);
              {
                b_90 = t;
                if(((a_90 != NULL) && (a_90 != b_90)))
                  _fail(b_90);
                else
                  a_90 = b_90;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_90), not_null(q_89));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm g_131 (ATerm), ATerm h_131 (ATerm, ATerm (ATerm)), ATerm i_131 (ATerm), ATerm j_131 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm k_131 (ATerm, ATerm (ATerm)), ATerm l_131 (ATerm))
{
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL;
  t = subs_args_0(t);
  {
    h_90 = t;
    g_90 :
    if(match_cons(h_90, sym__2))
      {
        i_90 = ATgetArgument(h_90, 0);
        j_90 = ATgetArgument(h_90, 1);
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_90), (ATerm) ATempty);
          {
            ATerm n_90 (ATerm t)
            {
              ATerm m_4 (ATerm t)
              {
                ATerm w_29 = t;
                int x_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = RnVar_1(t, h_131);
                    ;
                    LocalPopChoice(x_29);
                  }
                else
                  {
                    t = w_29;
                    {
                      ATerm y_29 = t;
                      int z_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Fst_0(t);
                          {
                            ATerm n_4 (ATerm t)
                            {
                              t = not_null(i_90);
                              return(t);
                            }
                            t = SubsVar_2(t, g_131, n_4);
                            t = l_131(t);
                          }
                          ;
                          LocalPopChoice(z_29);
                        }
                      else
                        {
                          t = y_29;
                          {
                            t = RnBinding_2(t, i_131, k_131);
                            t = DistBinding_2(t, n_90, j_131);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = env_alltd_1(t, m_4);
              return(t);
            }
            t = n_90(t);
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
ATerm substitute_5 (ATerm t, ATerm n_131 (ATerm), ATerm o_131 (ATerm, ATerm (ATerm)), ATerm p_131 (ATerm), ATerm q_131 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm r_131 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, n_131, o_131, p_131, q_131, r_131, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
        {
          ATerm g_30 = t;
          int h_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0(t);
              ;
              LocalPopChoice(h_30);
            }
          else
            {
              t = g_30;
              {
                ATerm i_30 = t;
                int m_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0(t);
                    ;
                    LocalPopChoice(m_30);
                  }
                else
                  {
                    t = i_30;
                    t = Bind8_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = substitute_5(t, IsVar_0, Var_1, o_4, tboundin_3, tpaste_1);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm a_134 (ATerm))
{
  ATerm v_90 = NULL,w_90 = NULL,x_90 = NULL;
  v_90 = t;
  u_90 :
  if(match_cons(v_90, sym_Op_2))
    {
      w_90 = ATgetArgument(v_90, 0);
      x_90 = ATgetArgument(v_90, 1);
      {
        ATerm c_91 = NULL,d_91 = NULL;
        t = a_134(t);
        {
          ATerm p_4 (ATerm t)
          {
            ATerm o_30;
            o_30 = t;
            {
              ATerm h_91 = NULL,i_91 = NULL,k_91 = NULL,l_91 = NULL;
              h_91 = t;
              t_90 :
              if(match_cons(h_91, sym_Overlay_3))
                {
                  i_91 = ATgetArgument(h_91, 0);
                  k_91 = ATgetArgument(h_91, 1);
                  l_91 = ATgetArgument(h_91, 2);
                  {
                    ATerm m_91 = NULL,n_91 = NULL,o_91 = NULL,q_91 = NULL;
                    if(((w_90 != NULL) && (w_90 != i_91)))
                      _fail(i_91);
                    else
                      w_90 = i_91;
                    {
                      if(((m_91 != NULL) && (m_91 != k_91)))
                        _fail(k_91);
                      else
                        m_91 = k_91;
                      {
                        if(((n_91 != NULL) && (n_91 != l_91)))
                          _fail(l_91);
                        else
                          n_91 = l_91;
                        {
                          ATerm r_30;
                          r_30 = t;
                          {
                            ATerm p_91 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(m_91), not_null(x_90));
                            {
                              t = zip_1(t, _id);
                              {
                                p_91 = t;
                                if(((o_91 != NULL) && (o_91 != p_91)))
                                  _fail(p_91);
                                else
                                  o_91 = p_91;
                              }
                            }
                          }
                          t = r_30;
                          {
                            ATerm r_91 = NULL;
                            t = not_null(o_91);
                            {
                              q_91 = t;
                              {
                                if(((c_91 != NULL) && (c_91 != q_91)))
                                  _fail(q_91);
                                else
                                  c_91 = q_91;
                                {
                                  t = not_null(n_91);
                                  {
                                    r_91 = t;
                                    {
                                      if(((d_91 != NULL) && (d_91 != r_91)))
                                        _fail(r_91);
                                      else
                                        d_91 = r_91;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_91), not_null(n_91));
                                    }
                                  }
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
            }
            t = o_30;
            return(t);
          }
          t = fetch_1(t, p_4);
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_91), not_null(d_91));
          t = tsubstitute_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm exp_overlays1_1 (ATerm t, ATerm y_133 (ATerm))
{
  ATerm q_4 (ATerm t)
  {
    ATerm s_30;
    s_30 = t;
    {
      ATerm t_30 = t;
      if((PushChoice() == 0))
        {
          ATerm a_92 = NULL;
          t = y_133(t);
          {
            a_92 = t;
            z_91 :
            if(((ATgetType(a_92) == AT_LIST) && ATisEmpty(a_92)))
              {
                {
                }
              }
            else
              {
                _fail(t);
              }
          }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_30;
        }
    }
    t = s_30;
    {
      ATerm r_4 (ATerm t)
      {
        ATerm s_4 (ATerm t)
        {
          t = ExpOverlay_1(t, y_133);
          return(t);
        }
        t = repeat_1(t, s_4);
        return(t);
      }
      t = topdown_1(t, r_4);
    }
    return(t);
  }
  t = try_1(t, q_4);
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm y_92 = NULL,z_92 = NULL,a_93 = NULL,b_93 = NULL,c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL,g_93 = NULL,h_93 = NULL,i_93 = NULL;
  y_92 = t;
  h_92 :
  if(match_cons(y_92, sym_Specification_1))
    {
      z_92 = ATgetArgument(y_92, 0);
      i_92 :
      if(((ATgetType(z_92) == AT_LIST) && !(ATisEmpty(z_92))))
        {
          a_93 = ATgetFirst((ATermList) z_92);
          c_93 = (ATerm) ATgetNext((ATermList) z_92);
          l_92 :
          if(match_cons(a_93, sym_Signature_1))
            {
              b_93 = ATgetArgument(a_93, 0);
              m_92 :
              if(((ATgetType(c_93) == AT_LIST) && !(ATisEmpty(c_93))))
                {
                  d_93 = ATgetFirst((ATermList) c_93);
                  f_93 = (ATerm) ATgetNext((ATermList) c_93);
                  p_92 :
                  if(match_cons(d_93, sym_Overlays_1))
                    {
                      e_93 = ATgetArgument(d_93, 0);
                      q_92 :
                      if(((ATgetType(f_93) == AT_LIST) && !(ATisEmpty(f_93))))
                        {
                          g_93 = ATgetFirst((ATermList) f_93);
                          i_93 = (ATerm) ATgetNext((ATermList) f_93);
                          w_92 :
                          if(match_cons(g_93, sym_Strategies_1))
                            {
                              h_93 = ATgetArgument(g_93, 0);
                              x_92 :
                              if(((ATgetType(i_93) == AT_LIST) && ATisEmpty(i_93)))
                                {
                                  {
                                    ATerm m_93 = NULL,o_93 = NULL;
                                    ATerm u_30;
                                    u_30 = t;
                                    {
                                      ATerm n_93 = NULL;
                                      t = not_null(e_93);
                                      {
                                        ATerm t_4 (ATerm t)
                                        {
                                          t = not_null(e_93);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, t_4);
                                        {
                                          n_93 = t;
                                          if(((m_93 != NULL) && (m_93 != n_93)))
                                            _fail(n_93);
                                          else
                                            m_93 = n_93;
                                        }
                                      }
                                    }
                                    t = u_30;
                                    {
                                      ATerm p_93 = NULL,r_93 = NULL,t_93 = NULL;
                                      ATerm v_30;
                                      v_30 = t;
                                      {
                                        ATerm q_93 = NULL;
                                        t = not_null(e_93);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            q_93 = t;
                                            if(((p_93 != NULL) && (p_93 != q_93)))
                                              _fail(q_93);
                                            else
                                              p_93 = q_93;
                                          }
                                        }
                                      }
                                      t = v_30;
                                      {
                                        ATerm s_93 = NULL;
                                        t = not_null(h_93);
                                        {
                                          ATerm u_4 (ATerm t)
                                          {
                                            t = not_null(m_93);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, u_4);
                                          {
                                            s_93 = t;
                                            if(((r_93 != NULL) && (r_93 != s_93)))
                                              _fail(s_93);
                                            else
                                              r_93 = s_93;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_93), not_null(r_93));
                                          {
                                            t = conc_0(t);
                                            {
                                              t_93 = t;
                                              if(((o_93 != NULL) && (o_93 != t_93)))
                                                _fail(t_93);
                                              else
                                                o_93 = t_93;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(o_93))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(b_93))));
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
ATerm overlay_ud_0 (ATerm t)
{
  ATerm e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL;
  e_94 = t;
  d_94 :
  if(match_cons(e_94, sym_Overlay_3))
    {
      f_94 = ATgetArgument(e_94, 0);
      g_94 = ATgetArgument(e_94, 1);
      h_94 = ATgetArgument(e_94, 2);
      {
        ATerm w_30;
        w_30 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_31, not_null(f_94)));
          {
            ATerm v_4 (ATerm t)
            {
              t = term_e_31;
              return(t);
            }
            t = assert_1(t, v_4);
            {
              t = not_null(g_94);
              {
                t = DefineBound_0(t);
                {
                  t = not_null(h_94);
                  t = use_vars_0(t);
                }
              }
            }
          }
        }
        t = w_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rdef_ud_0 (ATerm t)
{
  ATerm a_95 = NULL,d_95 = NULL,e_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL,p_95 = NULL;
  g_95 = t;
  x_94 :
  if(match_cons(g_95, sym_RDefT_4))
    {
      h_95 = ATgetArgument(g_95, 0);
      i_95 = ATgetArgument(g_95, 1);
      j_95 = ATgetArgument(g_95, 2);
      a_95 = ATgetArgument(g_95, 3);
      y_94 :
      if(match_cons(a_95, sym_StratRule_3))
        {
          d_95 = ATgetArgument(a_95, 0);
          e_95 = ATgetArgument(a_95, 1);
          f_95 = ATgetArgument(a_95, 2);
          {
            ATerm f_31;
            f_31 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_31, not_null(h_95)));
              {
                ATerm w_4 (ATerm t)
                {
                  t = term_e_31;
                  return(t);
                }
                t = assert_1(t, w_4);
                {
                  t = not_null(j_95);
                  {
                    t = declared_vars_0(t);
                    {
                      t = DefineBound_0(t);
                      {
                        t = not_null(d_95);
                        {
                          t = unbound_vars_0(t);
                          {
                            t = not_null(e_95);
                            {
                              t = unbound_vars_0(t);
                              {
                                t = not_null(f_95);
                                t = unbound_vars_0(t);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = f_31;
          }
        }
      else
        {
          if(match_cons(a_95, sym_Rule_3))
            {
              d_95 = ATgetArgument(a_95, 0);
              e_95 = ATgetArgument(a_95, 1);
              f_95 = ATgetArgument(a_95, 2);
              {
                ATerm h_31;
                h_31 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_i_31, not_null(h_95)));
                  {
                    ATerm x_4 (ATerm t)
                    {
                      t = term_e_31;
                      return(t);
                    }
                    t = assert_1(t, x_4);
                    {
                      t = not_null(j_95);
                      {
                        t = declared_vars_0(t);
                        {
                          t = DefineBound_0(t);
                          {
                            t = not_null(d_95);
                            {
                              t = bind_vars_0(t);
                              {
                                t = not_null(f_95);
                                {
                                  t = unbound_vars_0(t);
                                  {
                                    t = not_null(e_95);
                                    t = use_vars_0(t);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = h_31;
              }
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(g_95, sym_RDef_3))
        {
          h_95 = ATgetArgument(g_95, 0);
          i_95 = ATgetArgument(g_95, 1);
          j_95 = ATgetArgument(g_95, 2);
          z_94 :
          if(match_cons(j_95, sym_Rule_3))
            {
              k_95 = ATgetArgument(j_95, 0);
              l_95 = ATgetArgument(j_95, 1);
              p_95 = ATgetArgument(j_95, 2);
              {
                ATerm p_31;
                p_31 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_31, not_null(h_95)));
                  {
                    ATerm y_4 (ATerm t)
                    {
                      t = term_e_31;
                      return(t);
                    }
                    t = assert_1(t, y_4);
                    {
                      t = not_null(k_95);
                      {
                        t = bind_vars_0(t);
                        {
                          t = not_null(p_95);
                          {
                            t = unbound_vars_0(t);
                            {
                              t = not_null(l_95);
                              t = use_vars_0(t);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = p_31;
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
ATerm guardedlchoice_1 (ATerm t, ATerm i_135 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    t = GuardedLChoice_3(t, i_135, i_135, _id);
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = GuardedLChoice_3(t, _id, _id, i_135);
    return(t);
  }
  t = abstract_choice_2(t, z_4, a_5);
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm j_96 (ATerm))
{
  ATerm f_97 = NULL,g_97 = NULL,h_97 = NULL,i_97 = NULL;
  f_97 = t;
  e_97 :
  if(match_cons(f_97, sym_GuardedLChoice_3))
    {
      g_97 = ATgetArgument(f_97, 0);
      h_97 = ATgetArgument(f_97, 1);
      i_97 = ATgetArgument(f_97, 2);
      {
        ATerm n_97 = NULL,p_97 = NULL;
        ATerm o_97 = NULL;
        t = SSLgetAnnotations(not_null(f_97));
        {
          o_97 = t;
          if(((n_97 != NULL) && (n_97 != o_97)))
            _fail(o_97);
          else
            n_97 = o_97;
        }
        {
          t = not_null(g_97);
          {
            ATerm r_97 = NULL;
            t = h_96(t);
            {
              p_97 = t;
              {
                t = not_null(h_97);
                {
                  ATerm t_97 = NULL;
                  t = i_96(t);
                  {
                    r_97 = t;
                    {
                      t = not_null(i_97);
                      {
                        ATerm v_97 = NULL;
                        t = j_96(t);
                        {
                          t_97 = t;
                          {
                            ATerm w_97 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(p_97), not_null(r_97), not_null(t_97)), not_null(n_97));
                            {
                              w_97 = t;
                              if(((v_97 != NULL) && (v_97 != w_97)))
                                _fail(w_97);
                              else
                                v_97 = w_97;
                            }
                            t = not_null(v_97);
                          }
                        }
                      }
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
ATerm lchoice_1 (ATerm t, ATerm h_135 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    t = LChoice_2(t, h_135, _id);
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = LChoice_2(t, _id, h_135);
    return(t);
  }
  t = abstract_choice_2(t, b_5, c_5);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm d_96 (ATerm), ATerm e_96 (ATerm))
{
  ATerm t_98 = NULL,u_98 = NULL,v_98 = NULL;
  t_98 = t;
  s_98 :
  if(match_cons(t_98, sym_LChoice_2))
    {
      u_98 = ATgetArgument(t_98, 0);
      v_98 = ATgetArgument(t_98, 1);
      {
        ATerm z_98 = NULL,b_99 = NULL;
        ATerm a_99 = NULL;
        t = SSLgetAnnotations(not_null(t_98));
        {
          a_99 = t;
          if(((z_98 != NULL) && (z_98 != a_99)))
            _fail(a_99);
          else
            z_98 = a_99;
        }
        {
          t = not_null(u_98);
          {
            ATerm d_99 = NULL;
            t = d_96(t);
            {
              b_99 = t;
              {
                t = not_null(v_98);
                {
                  ATerm f_99 = NULL;
                  t = e_96(t);
                  {
                    d_99 = t;
                    {
                      ATerm g_99 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(b_99), not_null(d_99)), not_null(z_98));
                      {
                        g_99 = t;
                        if(((f_99 != NULL) && (f_99 != g_99)))
                          _fail(g_99);
                        else
                          f_99 = g_99;
                      }
                      t = not_null(f_99);
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
ATerm isect_Bound_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm e_5 (ATerm t)
    {
      ATerm v_99 = NULL,w_99 = NULL,x_99 = NULL,y_99 = NULL,z_99 = NULL,a_100 = NULL;
      v_99 = t;
      p_99 :
      if(match_cons(v_99, sym__2))
        {
          w_99 = ATgetArgument(v_99, 0);
          x_99 = ATgetArgument(v_99, 1);
          q_99 :
          if(((ATgetType(x_99) == AT_LIST) && !(ATisEmpty(x_99))))
            {
              y_99 = ATgetFirst((ATermList) x_99);
              a_100 = (ATerm) ATgetNext((ATermList) x_99);
              r_99 :
              if(match_cons(y_99, sym_Defined_1))
                {
                  z_99 = ATgetArgument(y_99, 0);
                  s_99 :
                  if(!(match_cons(w_99, sym_Scopes_0)))
                    {
                      ATerm r_31 = t;
                      int s_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_31;
                          t_31 = t;
                          {
                            ATerm c_100 = NULL,d_100 = NULL,e_100 = NULL,f_100 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, term_u_31, not_null(w_99));
                            {
                              t = table_get_0(t);
                              {
                                c_100 = t;
                                n_99 :
                                if(((ATgetType(c_100) == AT_LIST) && !(ATisEmpty(c_100))))
                                  {
                                    d_100 = ATgetFirst((ATermList) c_100);
                                    f_100 = (ATerm) ATgetNext((ATermList) c_100);
                                    o_99 :
                                    if(match_cons(d_100, sym_Defined_1))
                                      {
                                        e_100 = ATgetArgument(d_100, 0);
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
                          t = t_31;
                          ;
                          LocalPopChoice(s_31);
                        }
                      else
                        {
                          t = r_31;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(w_99), (ATerm) ATinsert(ATempty, term_z_31));
                        }
                    }
                }
              else
                {
                  t_99 :
                  if(!(match_cons(w_99, sym_Scopes_0)))
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              u_99 :
              if(!(match_cons(w_99, sym_Scopes_0)))
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
    t = try_1(t, e_5);
    return(t);
  }
  t = map_1(t, d_5);
  t = restore_Bound_0(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm l_100 = NULL,m_100 = NULL,n_100 = NULL;
  l_100 = t;
  k_100 :
  if(match_cons(l_100, sym__2))
    {
      m_100 = ATgetArgument(l_100, 0);
      n_100 = ATgetArgument(l_100, 1);
      {
        t = not_null(n_100);
        {
          ATerm f_5 (ATerm t)
          {
            ATerm q_100 = NULL,r_100 = NULL,s_100 = NULL;
            q_100 = t;
            j_100 :
            if(match_cons(q_100, sym__2))
              {
                r_100 = ATgetArgument(q_100, 0);
                s_100 = ATgetArgument(q_100, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(m_100), not_null(r_100), not_null(s_100));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, f_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm restore_Bound_0 (ATerm t)
{
  ATerm y_100 = NULL;
  y_100 = t;
  {
    ATerm a_32;
    a_32 = t;
    {
      t = term_u_31;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_31, not_null(y_100));
          t = table_putlist_0(t);
        }
      }
    }
    t = a_32;
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm c_101 = NULL;
  c_101 = t;
  t = SSL_table_keys(not_null(c_101));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm i_101 = NULL;
  i_101 = t;
  {
    t = table_keys_0(t);
    {
      ATerm g_5 (ATerm t)
      {
        ATerm k_101 = NULL;
        ATerm m_101 = NULL;
        k_101 = t;
        {
          ATerm n_101 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_101), not_null(k_101));
          {
            t = table_get_0(t);
            {
              n_101 = t;
              if(((m_101 != NULL) && (m_101 != n_101)))
                _fail(n_101);
              else
                m_101 = n_101;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_101), not_null(m_101));
        }
        return(t);
      }
      t = map_1(t, g_5);
    }
  }
  return(t);
}
ATerm save_Bound_0 (ATerm t)
{
  t = term_u_31;
  t = table_getlist_0(t);
  return(t);
}
ATerm abstract_choice_2 (ATerm t, ATerm e_135 (ATerm), ATerm f_135 (ATerm))
{
  ATerm t_101 = NULL,v_101 = NULL;
  ATerm b_32;
  b_32 = t;
  {
    ATerm u_101 = NULL;
    t = save_Bound_0(t);
    {
      u_101 = t;
      if(((t_101 != NULL) && (t_101 != u_101)))
        _fail(u_101);
      else
        t_101 = u_101;
    }
  }
  t = b_32;
  {
    t = e_135(t);
    {
      ATerm c_32;
      c_32 = t;
      {
        ATerm w_101 = NULL;
        t = save_Bound_0(t);
        {
          w_101 = t;
          {
            if(((v_101 != NULL) && (v_101 != w_101)))
              _fail(w_101);
            else
              v_101 = w_101;
            {
              t = not_null(t_101);
              t = restore_Bound_0(t);
            }
          }
        }
      }
      t = c_32;
      {
        t = f_135(t);
        {
          ATerm i_32;
          i_32 = t;
          {
            t = not_null(v_101);
            t = isect_Bound_0(t);
          }
          t = i_32;
        }
      }
    }
  }
  return(t);
}
ATerm choice_1 (ATerm t, ATerm g_135 (ATerm))
{
  ATerm h_5 (ATerm t)
  {
    t = Choice_2(t, g_135, _id);
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    t = Choice_2(t, _id, g_135);
    return(t);
  }
  t = abstract_choice_2(t, h_5, i_5);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm b_95 (ATerm), ATerm c_95 (ATerm))
{
  ATerm f_102 = NULL,g_102 = NULL,h_102 = NULL;
  f_102 = t;
  e_102 :
  if(match_cons(f_102, sym_Choice_2))
    {
      g_102 = ATgetArgument(f_102, 0);
      h_102 = ATgetArgument(f_102, 1);
      {
        ATerm l_102 = NULL,n_102 = NULL;
        ATerm m_102 = NULL;
        t = SSLgetAnnotations(not_null(f_102));
        {
          m_102 = t;
          if(((l_102 != NULL) && (l_102 != m_102)))
            _fail(m_102);
          else
            l_102 = m_102;
        }
        {
          t = not_null(g_102);
          {
            ATerm p_102 = NULL;
            t = b_95(t);
            {
              n_102 = t;
              {
                t = not_null(h_102);
                {
                  ATerm r_102 = NULL;
                  t = c_95(t);
                  {
                    p_102 = t;
                    {
                      ATerm s_102 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(n_102), not_null(p_102)), not_null(l_102));
                      {
                        s_102 = t;
                        if(((r_102 != NULL) && (r_102 != s_102)))
                          _fail(s_102);
                        else
                          r_102 = s_102;
                      }
                      t = not_null(r_102);
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
ATerm Context_0 (ATerm t)
{
  ATerm w_103 = NULL;
  w_103 = t;
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_104 = NULL;
        ATerm c_104 = NULL,d_104 = NULL,e_104 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm j_5 (ATerm t)
          {
            t = term_e_31;
            return(t);
          }
          t = rewrite_1(t, j_5);
          {
            c_104 = t;
            f_103 :
            if(match_cons(c_104, sym_Defined_2))
              {
                d_104 = ATgetArgument(c_104, 0);
                e_104 = ATgetArgument(c_104, 1);
                g_103 :
                if(match_string(d_104, "d_1"))
                  {
                    if(((b_104 != NULL) && (b_104 != e_104)))
                      _fail(e_104);
                    else
                      b_104 = e_104;
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(w_103)), term_r_25), not_null(b_104)), term_l_32);
        ;
        LocalPopChoice(k_32);
      }
    else
      {
        t = j_32;
        {
          ATerm m_32 = t;
          int n_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_104 = NULL;
              ATerm i_104 = NULL,j_104 = NULL,k_104 = NULL;
              t = (ATerm) ATempty;
              {
                ATerm k_5 (ATerm t)
                {
                  t = term_e_31;
                  return(t);
                }
                t = rewrite_1(t, k_5);
                {
                  i_104 = t;
                  i_103 :
                  if(match_cons(i_104, sym_Defined_2))
                    {
                      j_104 = ATgetArgument(i_104, 0);
                      k_104 = ATgetArgument(i_104, 1);
                      j_103 :
                      if(match_string(j_104, "a_1"))
                        {
                          if(((h_104 != NULL) && (h_104 != k_104)))
                            _fail(k_104);
                          else
                            h_104 = k_104;
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
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(w_103)), term_r_25), not_null(h_104)), term_o_32);
              ;
              LocalPopChoice(n_32);
            }
          else
            {
              t = m_32;
              {
                ATerm u_32 = t;
                int v_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_104 = NULL;
                    ATerm o_104 = NULL,p_104 = NULL,q_104 = NULL;
                    t = (ATerm) ATempty;
                    {
                      ATerm l_5 (ATerm t)
                      {
                        t = term_e_31;
                        return(t);
                      }
                      t = rewrite_1(t, l_5);
                      {
                        o_104 = t;
                        l_103 :
                        if(match_cons(o_104, sym_Defined_2))
                          {
                            p_104 = ATgetArgument(o_104, 0);
                            q_104 = ATgetArgument(o_104, 1);
                            m_103 :
                            if(match_string(p_104, "x_0"))
                              {
                                if(((n_104 != NULL) && (n_104 != q_104)))
                                  _fail(q_104);
                                else
                                  n_104 = q_104;
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
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(w_103)), term_r_25), not_null(n_104)), term_o_32);
                    ;
                    LocalPopChoice(v_32);
                  }
                else
                  {
                    t = u_32;
                    {
                      ATerm b_33 = t;
                      int c_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_104 = NULL;
                          ATerm u_104 = NULL,v_104 = NULL,w_104 = NULL;
                          t = (ATerm) ATempty;
                          {
                            ATerm m_5 (ATerm t)
                            {
                              t = term_e_31;
                              return(t);
                            }
                            t = rewrite_1(t, m_5);
                            {
                              u_104 = t;
                              o_103 :
                              if(match_cons(u_104, sym_Defined_2))
                                {
                                  v_104 = ATgetArgument(u_104, 0);
                                  w_104 = ATgetArgument(u_104, 1);
                                  p_103 :
                                  if(match_string(v_104, "u_0"))
                                    {
                                      if(((t_104 != NULL) && (t_104 != w_104)))
                                        _fail(w_104);
                                      else
                                        t_104 = w_104;
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
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(w_103)), term_r_25), not_null(t_104)), term_o_32);
                          ;
                          LocalPopChoice(c_33);
                        }
                      else
                        {
                          t = b_33;
                          {
                            ATerm d_33 = t;
                            int e_33 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm b_105 = NULL;
                                ATerm c_105 = NULL,d_105 = NULL,e_105 = NULL;
                                t = (ATerm) ATempty;
                                {
                                  ATerm n_5 (ATerm t)
                                  {
                                    t = term_e_31;
                                    return(t);
                                  }
                                  t = rewrite_1(t, n_5);
                                  {
                                    c_105 = t;
                                    r_103 :
                                    if(match_cons(c_105, sym_Defined_2))
                                      {
                                        d_105 = ATgetArgument(c_105, 0);
                                        e_105 = ATgetArgument(c_105, 1);
                                        s_103 :
                                        if(match_string(d_105, "r_0"))
                                          {
                                            if(((b_105 != NULL) && (b_105 != e_105)))
                                              _fail(e_105);
                                            else
                                              b_105 = e_105;
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
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(w_103)), term_r_25), not_null(b_105)), term_f_33);
                                ;
                                LocalPopChoice(e_33);
                              }
                            else
                              {
                                t = d_33;
                                {
                                  ATerm h_105 = NULL;
                                  ATerm i_105 = NULL,j_105 = NULL,k_105 = NULL;
                                  t = (ATerm) ATempty;
                                  {
                                    ATerm o_5 (ATerm t)
                                    {
                                      t = term_e_31;
                                      return(t);
                                    }
                                    t = rewrite_1(t, o_5);
                                    {
                                      i_105 = t;
                                      u_103 :
                                      if(match_cons(i_105, sym_Defined_2))
                                        {
                                          j_105 = ATgetArgument(i_105, 0);
                                          k_105 = ATgetArgument(i_105, 1);
                                          v_103 :
                                          if(match_string(j_105, "o_0"))
                                            {
                                              if(((h_105 != NULL) && (h_105 != k_105)))
                                                _fail(k_105);
                                              else
                                                h_105 = k_105;
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
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(w_103)), term_r_25), not_null(h_105)), term_f_33);
                                }
                              }
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
ATerm Unbound_0 (ATerm t)
{
  ATerm d_106 = NULL,e_106 = NULL;
  d_106 = t;
  c_106 :
  if(match_cons(d_106, sym_Var_1))
    {
      e_106 = ATgetArgument(d_106, 0);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_33), not_null(e_106)), term_g_33);
        {
          t = Context_0(t);
          t = error_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bound_0 (ATerm t)
{
  ATerm z_106 = NULL,a_107 = NULL;
  z_106 = t;
  y_106 :
  if(match_cons(z_106, sym_Var_1))
    {
      a_107 = ATgetArgument(z_106, 0);
      {
        ATerm j_33 = t;
        int l_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_107 = NULL,e_107 = NULL;
            t = not_null(z_106);
            {
              ATerm p_5 (ATerm t)
              {
                t = term_u_31;
                return(t);
              }
              t = rewrite_1(t, p_5);
              {
                d_107 = t;
                q_106 :
                if(match_cons(d_107, sym_Defined_1))
                  {
                    e_107 = ATgetArgument(d_107, 0);
                    r_106 :
                    if(!(match_string(e_107, "k_1")))
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
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_107));
            ;
            LocalPopChoice(l_33);
          }
        else
          {
            t = j_33;
            {
              ATerm r_33 = t;
              int s_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_107 = NULL;
                  t = not_null(z_106);
                  {
                    ATerm q_5 (ATerm t)
                    {
                      t = term_u_31;
                      return(t);
                    }
                    t = rewrite_1(t, q_5);
                    {
                      h_107 = t;
                      v_106 :
                      if(match_cons(h_107, sym_Undefined_0))
                        {
                          _fail(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                  t = term_z_31;
                  ;
                  LocalPopChoice(s_33);
                }
              else
                {
                  t = r_33;
                  {
                    ATerm k_107 = NULL,l_107 = NULL;
                    t = not_null(z_106);
                    {
                      ATerm r_5 (ATerm t)
                      {
                        t = term_u_31;
                        return(t);
                      }
                      t = rewrite_1(t, r_5);
                      {
                        k_107 = t;
                        w_106 :
                        if(match_cons(k_107, sym_Defined_1))
                          {
                            l_107 = ATgetArgument(k_107, 0);
                            x_106 :
                            if(!(match_string(l_107, "g_1")))
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_107));
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
ATerm use_vars_0 (ATerm t)
{
  ATerm t_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(u_33);
      {
        ATerm f_34 = t;
        int j_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0(t);
            ;
            LocalPopChoice(j_34);
          }
        else
          {
            t = f_34;
            {
              t = Unbound_0(t);
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = t_33;
      {
        ATerm y_34 = t;
        int z_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(z_34);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = y_34;
            {
              ATerm a_35 = t;
              int b_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(b_35);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = a_35;
                  t = _all(t, use_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm w_93 (ATerm))
{
  ATerm z_107 = NULL,a_108 = NULL,b_108 = NULL,c_108 = NULL;
  z_107 = t;
  w_107 :
  if(match_cons(z_107, sym_Rule_3))
    {
      a_108 = ATgetArgument(z_107, 0);
      b_108 = ATgetArgument(z_107, 1);
      c_108 = ATgetArgument(z_107, 2);
      {
        ATerm h_108 = NULL,j_108 = NULL;
        ATerm i_108 = NULL;
        t = SSLgetAnnotations(not_null(z_107));
        {
          i_108 = t;
          if(((h_108 != NULL) && (h_108 != i_108)))
            _fail(i_108);
          else
            h_108 = i_108;
        }
        {
          t = not_null(a_108);
          {
            ATerm n_108 = NULL;
            t = u_93(t);
            {
              j_108 = t;
              {
                t = not_null(b_108);
                {
                  ATerm p_108 = NULL;
                  t = v_93(t);
                  {
                    n_108 = t;
                    {
                      t = not_null(c_108);
                      {
                        ATerm r_108 = NULL;
                        t = w_93(t);
                        {
                          p_108 = t;
                          {
                            ATerm s_108 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(j_108), not_null(n_108), not_null(p_108)), not_null(h_108));
                            {
                              s_108 = t;
                              if(((r_108 != NULL) && (r_108 != s_108)))
                                _fail(s_108);
                              else
                                r_108 = s_108;
                            }
                            t = not_null(r_108);
                          }
                        }
                      }
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
ATerm RootApp_1 (ATerm t, ATerm t_92 (ATerm))
{
  ATerm e_109 = NULL,h_109 = NULL;
  e_109 = t;
  d_109 :
  if(match_cons(e_109, sym_RootApp_1))
    {
      h_109 = ATgetArgument(e_109, 0);
      {
        ATerm k_109 = NULL,m_109 = NULL;
        ATerm l_109 = NULL;
        t = SSLgetAnnotations(not_null(e_109));
        {
          l_109 = t;
          if(((k_109 != NULL) && (k_109 != l_109)))
            _fail(l_109);
          else
            k_109 = l_109;
        }
        {
          t = not_null(h_109);
          {
            ATerm o_109 = NULL;
            t = t_92(t);
            {
              m_109 = t;
              {
                ATerm p_109 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, not_null(m_109)), not_null(k_109));
                {
                  p_109 = t;
                  if(((o_109 != NULL) && (o_109 != p_109)))
                    _fail(p_109);
                  else
                    o_109 = p_109;
                }
                t = not_null(o_109);
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
ATerm App_2 (ATerm t, ATerm r_92 (ATerm), ATerm s_92 (ATerm))
{
  ATerm a_110 = NULL,b_110 = NULL,c_110 = NULL;
  a_110 = t;
  z_109 :
  if(match_cons(a_110, sym_App_2))
    {
      b_110 = ATgetArgument(a_110, 0);
      c_110 = ATgetArgument(a_110, 1);
      {
        ATerm g_110 = NULL,i_110 = NULL;
        ATerm h_110 = NULL;
        t = SSLgetAnnotations(not_null(a_110));
        {
          h_110 = t;
          if(((g_110 != NULL) && (g_110 != h_110)))
            _fail(h_110);
          else
            g_110 = h_110;
        }
        {
          t = not_null(b_110);
          {
            ATerm k_110 = NULL;
            t = r_92(t);
            {
              i_110 = t;
              {
                t = not_null(c_110);
                {
                  ATerm m_110 = NULL;
                  t = s_92(t);
                  {
                    k_110 = t;
                    {
                      ATerm n_110 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(i_110), not_null(k_110)), not_null(g_110));
                      {
                        n_110 = t;
                        if(((m_110 != NULL) && (m_110 != n_110)))
                          _fail(n_110);
                        else
                          m_110 = n_110;
                      }
                      t = not_null(m_110);
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
  ATerm x_110 = NULL,y_110 = NULL,z_110 = NULL,a_111 = NULL;
  x_110 = t;
  w_110 :
  if(match_cons(x_110, sym__3))
    {
      y_110 = ATgetArgument(x_110, 0);
      z_110 = ATgetArgument(x_110, 1);
      a_111 = ATgetArgument(x_110, 2);
      {
        ATerm e_111 = NULL;
        ATerm c_35;
        c_35 = t;
        {
          ATerm f_111 = NULL,g_111 = NULL,h_111 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_110), not_null(z_110));
          {
            t = table_get_0(t);
            {
              f_111 = t;
              v_110 :
              if(((ATgetType(f_111) == AT_LIST) && !(ATisEmpty(f_111))))
                {
                  g_111 = ATgetFirst((ATermList) f_111);
                  h_111 = (ATerm) ATgetNext((ATermList) f_111);
                  {
                    if(((e_111 != NULL) && (e_111 != h_111)))
                      _fail(h_111);
                    else
                      e_111 = h_111;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(y_110), not_null(z_110), (ATerm) ATinsert(CheckATermList(not_null(e_111)), not_null(a_111)));
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
        t = c_35;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm override_key_1 (ATerm t, ATerm e_123 (ATerm))
{
  ATerm p_111 = NULL,q_111 = NULL,r_111 = NULL;
  p_111 = t;
  o_111 :
  if(match_cons(p_111, sym__2))
    {
      q_111 = ATgetArgument(p_111, 0);
      r_111 = ATgetArgument(p_111, 1);
      {
        ATerm u_111 = NULL;
        ATerm n_35;
        n_35 = t;
        {
          ATerm v_111 = NULL;
          t = e_123(t);
          {
            v_111 = t;
            {
              if(((u_111 != NULL) && (u_111 != v_111)))
                _fail(v_111);
              else
                u_111 = v_111;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(u_111), not_null(q_111), not_null(r_111));
                t = table_replace_0(t);
              }
            }
          }
        }
        t = n_35;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Binding_0 (ATerm t)
{
  ATerm b_112 = NULL,c_112 = NULL;
  b_112 = t;
  a_112 :
  if(match_cons(b_112, sym_Var_1))
    {
      c_112 = ATgetArgument(b_112, 0);
      {
        ATerm r_35;
        r_35 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_112)), term_h_36);
          {
            ATerm s_5 (ATerm t)
            {
              t = term_u_31;
              return(t);
            }
            t = override_key_1(t, s_5);
          }
        }
        t = r_35;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm bind_vars_0 (ATerm t)
{
  ATerm i_36 = t;
  int j_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(j_36);
      t = Binding_0(t);
    }
  else
    {
      t = i_36;
      {
        ATerm k_36 = t;
        int l_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(l_36);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = k_36;
            {
              ATerm m_36 = t;
              int n_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(n_36);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = m_36;
                  t = _all(t, bind_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1 (ATerm t, ATerm u_95 (ATerm))
{
  ATerm n_112 = NULL,o_112 = NULL;
  n_112 = t;
  m_112 :
  if(match_cons(n_112, sym_Match_1))
    {
      o_112 = ATgetArgument(n_112, 0);
      {
        ATerm r_112 = NULL,t_112 = NULL;
        ATerm s_112 = NULL;
        t = SSLgetAnnotations(not_null(n_112));
        {
          s_112 = t;
          if(((r_112 != NULL) && (r_112 != s_112)))
            _fail(s_112);
          else
            r_112 = s_112;
        }
        {
          t = not_null(o_112);
          {
            ATerm x_112 = NULL;
            t = u_95(t);
            {
              t_112 = t;
              {
                ATerm y_112 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(t_112)), not_null(r_112));
                {
                  y_112 = t;
                  if(((x_112 != NULL) && (x_112 != y_112)))
                    _fail(y_112);
                  else
                    x_112 = y_112;
                }
                t = not_null(x_112);
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
ATerm Build_1 (ATerm t, ATerm v_95 (ATerm))
{
  ATerm k_113 = NULL,n_113 = NULL;
  k_113 = t;
  j_113 :
  if(match_cons(k_113, sym_Build_1))
    {
      n_113 = ATgetArgument(k_113, 0);
      {
        ATerm q_113 = NULL,s_113 = NULL;
        ATerm r_113 = NULL;
        t = SSLgetAnnotations(not_null(k_113));
        {
          r_113 = t;
          if(((q_113 != NULL) && (q_113 != r_113)))
            _fail(r_113);
          else
            q_113 = r_113;
        }
        {
          t = not_null(n_113);
          {
            ATerm w_113 = NULL;
            t = v_95(t);
            {
              s_113 = t;
              {
                ATerm x_113 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(s_113)), not_null(q_113));
                {
                  x_113 = t;
                  if(((w_113 != NULL) && (w_113 != x_113)))
                    _fail(x_113);
                  else
                    w_113 = x_113;
                }
                t = not_null(w_113);
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
ATerm VarScope_1 (ATerm t, ATerm d_135 (ATerm))
{
  ATerm t_5 (ATerm t)
  {
    t = term_u_31;
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = Scope_2(t, DefineUnbound_0, d_135);
    return(t);
  }
  t = scope_2(t, t_5, u_5);
  return(t);
}
ATerm unbound_vars_0 (ATerm t)
{
  ATerm o_36 = t;
  int p_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, _id, _id);
      LocalPopChoice(p_36);
      t = VarScope_1(t, unbound_vars_0);
    }
  else
    {
      t = o_36;
      {
        ATerm q_36 = t;
        int r_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1(t, _id);
            LocalPopChoice(r_36);
            t = Build_1(t, use_vars_0);
          }
        else
          {
            t = q_36;
            {
              ATerm s_36 = t;
              int t_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1(t, _id);
                  LocalPopChoice(t_36);
                  t = Match_1(t, bind_vars_0);
                }
              else
                {
                  t = s_36;
                  {
                    ATerm u_36 = t;
                    int v_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3(t, _id, _id, _id);
                        LocalPopChoice(v_36);
                        {
                          t = Rule_3(t, bind_vars_0, _id, _id);
                          {
                            t = Rule_3(t, _id, _id, unbound_vars_0);
                            t = Rule_3(t, _id, use_vars_0, _id);
                          }
                        }
                      }
                    else
                      {
                        t = u_36;
                        {
                          ATerm w_36 = t;
                          int x_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2(t, _id, _id);
                              LocalPopChoice(x_36);
                              t = choice_1(t, unbound_vars_0);
                            }
                          else
                            {
                              t = w_36;
                              {
                                ATerm y_36 = t;
                                int z_36 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2(t, _id, _id);
                                    LocalPopChoice(z_36);
                                    t = lchoice_1(t, unbound_vars_0);
                                  }
                                else
                                  {
                                    t = y_36;
                                    {
                                      ATerm a_37 = t;
                                      int b_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3(t, _id, _id, _id);
                                          LocalPopChoice(b_37);
                                          t = guardedlchoice_1(t, unbound_vars_0);
                                        }
                                      else
                                        {
                                          t = a_37;
                                          t = _all(t, unbound_vars_0);
                                        }
                                    }
                                  }
                              }
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
ATerm DefineBound_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm d_114 = NULL;
    d_114 = t;
    {
      ATerm c_37;
      c_37 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_114)), term_e_37);
        {
          ATerm w_5 (ATerm t)
          {
            t = term_u_31;
            return(t);
          }
          t = assert_1(t, w_5);
        }
      }
      t = c_37;
    }
    return(t);
  }
  t = map_1(t, v_5);
  return(t);
}
ATerm sdef_ud_0 (ATerm t)
{
  ATerm j_114 = NULL,k_114 = NULL,l_114 = NULL,m_114 = NULL,t_114 = NULL;
  k_114 = t;
  i_114 :
  if(match_cons(k_114, sym_SDefT_4))
    {
      l_114 = ATgetArgument(k_114, 0);
      m_114 = ATgetArgument(k_114, 1);
      t_114 = ATgetArgument(k_114, 2);
      j_114 = ATgetArgument(k_114, 3);
      {
        ATerm h_37;
        h_37 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_m_37, not_null(l_114)));
          {
            ATerm x_5 (ATerm t)
            {
              t = term_e_31;
              return(t);
            }
            t = assert_1(t, x_5);
            {
              t = not_null(t_114);
              {
                t = declared_vars_0(t);
                {
                  t = DefineBound_0(t);
                  {
                    t = not_null(j_114);
                    t = unbound_vars_0(t);
                  }
                }
              }
            }
          }
        }
        t = h_37;
      }
    }
  else
    {
      if(match_cons(k_114, sym_SDef_3))
        {
          l_114 = ATgetArgument(k_114, 0);
          m_114 = ATgetArgument(k_114, 1);
          t_114 = ATgetArgument(k_114, 2);
          {
            ATerm n_37;
            n_37 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_37, not_null(l_114)));
              {
                ATerm y_5 (ATerm t)
                {
                  t = term_e_31;
                  return(t);
                }
                t = assert_1(t, y_5);
                {
                  t = not_null(t_114);
                  t = unbound_vars_0(t);
                }
              }
            }
            t = n_37;
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm DefineUnbound_0 (ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm f_115 = NULL;
    f_115 = t;
    {
      ATerm p_37;
      p_37 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_115)), term_z_31);
        {
          ATerm a_6 (ATerm t)
          {
            t = term_u_31;
            return(t);
          }
          t = assert_1(t, a_6);
        }
      }
      t = p_37;
    }
    return(t);
  }
  t = map_1(t, z_5);
  return(t);
}
ATerm def_use_def_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    t = term_e_31;
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    ATerm d_6 (ATerm t)
    {
      t = term_u_31;
      return(t);
    }
    ATerm e_6 (ATerm t)
    {
      ATerm q_37;
      q_37 = t;
      {
        t = tvars_0(t);
        t = DefineUnbound_0(t);
      }
      t = q_37;
      {
        ATerm r_37 = t;
        int s_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = sdef_ud_0(t);
            ;
            LocalPopChoice(s_37);
          }
        else
          {
            t = r_37;
            {
              ATerm t_37 = t;
              int u_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = rdef_ud_0(t);
                  ;
                  LocalPopChoice(u_37);
                }
              else
                {
                  t = t_37;
                  t = overlay_ud_0(t);
                }
            }
          }
      }
      return(t);
    }
    t = scope_2(t, d_6, e_6);
    return(t);
  }
  t = scope_2(t, b_6, c_6);
  return(t);
}
ATerm defs_use_def_0 (ATerm t)
{
  ATerm v_37 = t;
  int w_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(w_37);
    }
  else
    {
      t = v_37;
      {
        ATerm x_37;
        x_37 = t;
        {
          ATerm f_6 (ATerm t)
          {
            ATerm y_37 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = y_37;
              }
            return(t);
          }
          t = filter_1(t, f_6);
          t = Nil_0(t);
        }
        t = x_37;
      }
    }
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm f_91 (ATerm))
{
  ATerm n_115 = NULL,o_115 = NULL;
  n_115 = t;
  m_115 :
  if(match_cons(n_115, sym_Signature_1))
    {
      o_115 = ATgetArgument(n_115, 0);
      {
        ATerm r_115 = NULL,t_115 = NULL;
        ATerm s_115 = NULL;
        t = SSLgetAnnotations(not_null(n_115));
        {
          s_115 = t;
          if(((r_115 != NULL) && (r_115 != s_115)))
            _fail(s_115);
          else
            r_115 = s_115;
        }
        {
          t = not_null(o_115);
          {
            ATerm v_115 = NULL;
            t = f_91(t);
            {
              t_115 = t;
              {
                ATerm w_115 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(t_115)), not_null(r_115));
                {
                  w_115 = t;
                  if(((v_115 != NULL) && (v_115 != w_115)))
                    _fail(w_115);
                  else
                    v_115 = w_115;
                }
                t = not_null(v_115);
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
ATerm spec_use_def_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm h_6 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm i_6 (ATerm t)
    {
      ATerm j_6 (ATerm t)
      {
        t = Overlays_1(t, defs_use_def_0);
        return(t);
      }
      ATerm k_6 (ATerm t)
      {
        ATerm l_6 (ATerm t)
        {
          t = Strategies_1(t, defs_use_def_0);
          return(t);
        }
        t = Cons_2(t, l_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, j_6, k_6);
      return(t);
    }
    t = Cons_2(t, h_6, i_6);
    return(t);
  }
  t = Specification_1(t, g_6);
  return(t);
}
ATerm MkConstType_0 (ATerm t)
{
  ATerm d_116 = NULL,e_116 = NULL;
  d_116 = t;
  c_116 :
  if(match_cons(d_116, sym_DefaultVarDec_1))
    {
      e_116 = ATgetArgument(d_116, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(e_116), term_d_23);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0 (ATerm t)
{
  ATerm l_116 = NULL,m_116 = NULL;
  l_116 = t;
  i_116 :
  if(match_cons(l_116, sym_DefaultVarDec_1))
    {
      m_116 = ATgetArgument(l_116, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(m_116), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_d_23), term_d_23));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm z_37 = t;
  int a_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2(t, s_0, _id);
      {
        ATerm m_6 (ATerm t)
        {
          ATerm n_6 (ATerm t)
          {
            t = map1_1(t, s_0);
            return(t);
          }
          t = try_1(t, n_6);
          return(t);
        }
        t = Cons_2(t, _id, m_6);
      }
      ;
      LocalPopChoice(a_38);
    }
  else
    {
      t = z_37;
      {
        ATerm o_6 (ATerm t)
        {
          t = map1_1(t, s_0);
          return(t);
        }
        t = Cons_2(t, _id, o_6);
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm s_117 = NULL,t_117 = NULL,u_117 = NULL,v_117 = NULL,w_117 = NULL,x_117 = NULL,y_117 = NULL;
  w_117 = t;
  o_117 :
  if(match_cons(w_117, sym_Lets_2))
    {
      x_117 = ATgetArgument(w_117, 0);
      y_117 = ATgetArgument(w_117, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(x_117), not_null(y_117));
    }
  else
    {
      if(match_cons(w_117, sym_LChoices_1))
        {
          x_117 = ATgetArgument(w_117, 0);
          p_117 :
          if(((ATgetType(x_117) == AT_LIST) && !(ATisEmpty(x_117))))
            {
              s_117 = ATgetFirst((ATermList) x_117);
              t_117 = (ATerm) ATgetNext((ATermList) x_117);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(s_117), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(t_117)));
            }
          else
            {
              if(((ATgetType(x_117) == AT_LIST) && ATisEmpty(x_117)))
                {
                  t = term_b_38;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(w_117, sym_Choices_1))
            {
              x_117 = ATgetArgument(w_117, 0);
              q_117 :
              if(((ATgetType(x_117) == AT_LIST) && !(ATisEmpty(x_117))))
                {
                  s_117 = ATgetFirst((ATermList) x_117);
                  t_117 = (ATerm) ATgetNext((ATermList) x_117);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(s_117), (ATerm) ATmakeAppl(sym_Choices_1, not_null(t_117)));
                }
              else
                {
                  if(((ATgetType(x_117) == AT_LIST) && ATisEmpty(x_117)))
                    {
                      t = term_b_38;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(w_117, sym_Seqs_1))
                {
                  x_117 = ATgetArgument(w_117, 0);
                  r_117 :
                  if(((ATgetType(x_117) == AT_LIST) && !(ATisEmpty(x_117))))
                    {
                      s_117 = ATgetFirst((ATermList) x_117);
                      t_117 = (ATerm) ATgetNext((ATermList) x_117);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_117), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(t_117)));
                    }
                  else
                    {
                      if(((ATgetType(x_117) == AT_LIST) && ATisEmpty(x_117)))
                        {
                          t = term_r_17;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(w_117, sym_RDefT_4))
                    {
                      x_117 = ATgetArgument(w_117, 0);
                      y_117 = ATgetArgument(w_117, 1);
                      v_117 = ATgetArgument(w_117, 2);
                      u_117 = ATgetArgument(w_117, 3);
                      {
                        ATerm r_118 = NULL,s_118 = NULL;
                        ATerm t_118 = NULL;
                        t = not_null(y_117);
                        {
                          ATerm u_118 = NULL;
                          t = map1_1(t, MkFunType_0);
                          {
                            t_118 = t;
                            {
                              if(((r_118 != NULL) && (r_118 != t_118)))
                                _fail(t_118);
                              else
                                r_118 = t_118;
                              {
                                t = not_null(v_117);
                                {
                                  ATerm p_6 (ATerm t)
                                  {
                                    t = try_1(t, MkConstType_0);
                                    return(t);
                                  }
                                  t = map1_1(t, p_6);
                                  {
                                    u_118 = t;
                                    if(((s_118 != NULL) && (s_118 != u_118)))
                                      _fail(u_118);
                                    else
                                      s_118 = u_118;
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(x_117), not_null(r_118), not_null(s_118), not_null(u_117));
                      }
                    }
                  else
                    {
                      if(match_cons(w_117, sym_SDefT_4))
                        {
                          x_117 = ATgetArgument(w_117, 0);
                          y_117 = ATgetArgument(w_117, 1);
                          v_117 = ATgetArgument(w_117, 2);
                          u_117 = ATgetArgument(w_117, 3);
                          {
                            ATerm c_38 = t;
                            int d_38 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm a_119 = NULL,b_119 = NULL;
                                ATerm c_119 = NULL;
                                t = not_null(v_117);
                                {
                                  ATerm d_119 = NULL;
                                  t = map1_1(t, MkConstType_0);
                                  {
                                    c_119 = t;
                                    {
                                      if(((a_119 != NULL) && (a_119 != c_119)))
                                        _fail(c_119);
                                      else
                                        a_119 = c_119;
                                      {
                                        t = not_null(y_117);
                                        {
                                          ATerm q_6 (ATerm t)
                                          {
                                            t = try_1(t, MkFunType_0);
                                            return(t);
                                          }
                                          t = map_1(t, q_6);
                                          {
                                            d_119 = t;
                                            if(((b_119 != NULL) && (b_119 != d_119)))
                                              _fail(d_119);
                                            else
                                              b_119 = d_119;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(x_117), not_null(b_119), not_null(a_119), not_null(u_117));
                                ;
                                LocalPopChoice(d_38);
                              }
                            else
                              {
                                t = c_38;
                                {
                                  ATerm i_119 = NULL,j_119 = NULL;
                                  ATerm k_119 = NULL;
                                  t = not_null(y_117);
                                  {
                                    ATerm l_119 = NULL;
                                    t = map1_1(t, MkFunType_0);
                                    {
                                      k_119 = t;
                                      {
                                        if(((i_119 != NULL) && (i_119 != k_119)))
                                          _fail(k_119);
                                        else
                                          i_119 = k_119;
                                        {
                                          t = not_null(v_117);
                                          {
                                            ATerm r_6 (ATerm t)
                                            {
                                              t = try_1(t, MkConstType_0);
                                              return(t);
                                            }
                                            t = map_1(t, r_6);
                                            {
                                              l_119 = t;
                                              if(((j_119 != NULL) && (j_119 != l_119)))
                                                _fail(l_119);
                                              else
                                                j_119 = l_119;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(x_117), not_null(i_119), not_null(j_119), not_null(u_117));
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(w_117, sym_InfixApp_3))
                            {
                              x_117 = ATgetArgument(w_117, 0);
                              y_117 = ATgetArgument(w_117, 1);
                              v_117 = ATgetArgument(w_117, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, not_null(y_117), (ATerm) ATmakeAppl(sym_Op_2, term_t_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_117)), not_null(x_117))));
                            }
                          else
                            {
                              if(match_cons(w_117, sym_BAM_3))
                                {
                                  x_117 = ATgetArgument(w_117, 0);
                                  y_117 = ATgetArgument(w_117, 1);
                                  v_117 = ATgetArgument(w_117, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(v_117))), not_null(x_117)), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_117))));
                                }
                              else
                                {
                                  if(match_cons(w_117, sym_AM_2))
                                    {
                                      x_117 = ATgetArgument(w_117, 0);
                                      y_117 = ATgetArgument(w_117, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_117), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_117)));
                                    }
                                  else
                                    {
                                      if(match_cons(w_117, sym_MA_2))
                                        {
                                          x_117 = ATgetArgument(w_117, 0);
                                          y_117 = ATgetArgument(w_117, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_117)), not_null(y_117));
                                        }
                                      else
                                        {
                                          if(match_cons(w_117, sym_BA_2))
                                            {
                                              x_117 = ATgetArgument(w_117, 0);
                                              y_117 = ATgetArgument(w_117, 1);
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_117)), not_null(x_117));
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
            }
        }
    }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm a_121 = NULL,b_121 = NULL,c_121 = NULL,d_121 = NULL,e_121 = NULL,f_121 = NULL,g_121 = NULL;
  a_121 = t;
  x_120 :
  if(match_cons(a_121, sym__2))
    {
      b_121 = ATgetArgument(a_121, 0);
      e_121 = ATgetArgument(a_121, 1);
      y_120 :
      if(match_cons(b_121, sym__2))
        {
          c_121 = ATgetArgument(b_121, 0);
          d_121 = ATgetArgument(b_121, 1);
          z_120 :
          if(match_cons(e_121, sym__2))
            {
              f_121 = ATgetArgument(e_121, 0);
              g_121 = ATgetArgument(e_121, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_121)), not_null(c_121)), (ATerm) ATinsert(CheckATermList(not_null(g_121)), not_null(d_121)));
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
ATerm UnZip3_0 (ATerm t)
{
  ATerm p_121 = NULL,q_121 = NULL,r_121 = NULL;
  p_121 = t;
  o_121 :
  if(((ATgetType(p_121) == AT_LIST) && !(ATisEmpty(p_121))))
    {
      q_121 = ATgetFirst((ATermList) p_121);
      r_121 = (ATerm) ATgetNext((ATermList) p_121);
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_121), not_null(r_121));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm y_121 = NULL;
  y_121 = t;
  w_121 :
  if(((ATgetType(y_121) == AT_LIST) && ATisEmpty(y_121)))
    {
      t = term_j_38;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm x_114 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, x_114);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = unzip_1(t, _id);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm ContextVar_0 (ATerm t)
{
  ATerm j_122 = NULL,k_122 = NULL;
  j_122 = t;
  d_122 :
  if(match_cons(j_122, sym_Var_1))
    {
      k_122 = ATgetArgument(j_122, 0);
      {
        ATerm n_122 = NULL,o_122 = NULL;
        t = not_null(j_122);
        {
          ATerm s_6 (ATerm t)
          {
            t = term_k_38;
            return(t);
          }
          t = rewrite_1(t, s_6);
          {
            n_122 = t;
            b_122 :
            if(match_cons(n_122, sym_Defined_1))
              {
                o_122 = ATgetArgument(n_122, 0);
                c_122 :
                if(!(match_string(o_122, "l_0")))
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
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_122));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm l_38;
  l_38 = t;
  {
    ATerm r_122 = NULL;
    ATerm s_122 = NULL;
    s_122 = t;
    if(((r_122 != NULL) && (r_122 != s_122)))
      _fail(s_122);
    else
      r_122 = s_122;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_25, not_null(r_122));
      t = printnl_0(t);
    }
  }
  t = l_38;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm m_38;
  m_38 = t;
  {
    t = error_0(t);
    {
      t = term_o_26;
      t = exit_0(t);
    }
  }
  t = m_38;
  return(t);
}
ATerm dummify_0 (ATerm t)
{
  ATerm t_6 (ATerm t)
  {
    ATerm l_123 = NULL,m_123 = NULL,n_123 = NULL,o_123 = NULL;
    l_123 = t;
    k_123 :
    if(match_cons(l_123, sym_Var_1))
      {
        m_123 = ATgetArgument(l_123, 0);
        {
          ATerm n_38 = t;
          if((PushChoice() == 0))
            {
              t = ContextVar_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_38;
            }
          t = term_p_38;
        }
      }
    else
      {
        if(match_cons(l_123, sym_Wld_0))
          {
            t = term_p_38;
          }
        else
          {
            if(match_cons(l_123, sym_RootApp_1))
              {
                m_123 = ATgetArgument(l_123, 0);
                {
                  ATerm r_123 = NULL;
                  ATerm u_123 = NULL;
                  t = not_null(m_123);
                  {
                    t = tvars_0(t);
                    {
                      ATerm u_6 (ATerm t)
                      {
                        ATerm s_123 = NULL;
                        ATerm t_123 = NULL;
                        t_123 = t;
                        if(((s_123 != NULL) && (s_123 != t_123)))
                          _fail(t_123);
                        else
                          s_123 = t_123;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_123));
                        return(t);
                      }
                      t = map_1(t, u_6);
                      {
                        u_123 = t;
                        if(((r_123 != NULL) && (r_123 != u_123)))
                          _fail(u_123);
                        else
                          r_123 = u_123;
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_38, not_null(r_123));
                }
              }
            else
              {
                if(match_cons(l_123, sym_App_2))
                  {
                    m_123 = ATgetArgument(l_123, 0);
                    n_123 = ATgetArgument(l_123, 1);
                    {
                      ATerm x_123 = NULL;
                      ATerm a_124 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_123), not_null(n_123));
                      {
                        t = tvars_0(t);
                        {
                          ATerm v_6 (ATerm t)
                          {
                            ATerm y_123 = NULL;
                            ATerm z_123 = NULL;
                            z_123 = t;
                            if(((y_123 != NULL) && (y_123 != z_123)))
                              _fail(z_123);
                            else
                              y_123 = z_123;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_123));
                            return(t);
                          }
                          t = map_1(t, v_6);
                          {
                            a_124 = t;
                            if(((x_123 != NULL) && (x_123 != a_124)))
                              _fail(a_124);
                            else
                              x_123 = a_124;
                          }
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_q_38, not_null(x_123));
                    }
                  }
                else
                  {
                    if(match_cons(l_123, sym_Con_3))
                      {
                        m_123 = ATgetArgument(l_123, 0);
                        n_123 = ATgetArgument(l_123, 1);
                        o_123 = ATgetArgument(l_123, 2);
                        {
                          t = (ATerm) ATinsert(ATempty, term_r_38);
                          t = fatal_error_0(t);
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
  t = alltd_1(t, t_6);
  return(t);
}
ATerm SplitDynamicRule_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm k_125 = NULL,l_125 = NULL,m_125 = NULL,n_125 = NULL,o_125 = NULL,p_125 = NULL,q_125 = NULL,r_125 = NULL,s_125 = NULL,t_125 = NULL;
  ATerm n_127 (ATerm t)
  {
    ATerm r_126 = NULL,s_126 = NULL,t_126 = NULL,u_126 = NULL,v_126 = NULL,w_126 = NULL,x_126 = NULL,k_127 = NULL;
    ATerm v_38;
    v_38 = t;
    {
      ATerm y_126 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_125), term_z_38);
      {
        ATerm c_39 = t;
        if((PushChoice() == 0))
          {
            t = eq_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_39;
          }
        {
          ATerm z_126 = NULL;
          t = new_0(t);
          {
            y_126 = t;
            {
              if(((r_126 != NULL) && (r_126 != y_126)))
                _fail(y_126);
              else
                r_126 = y_126;
              {
                t = not_null(r_125);
                {
                  ATerm b_127 = NULL;
                  t = dummify_0(t);
                  {
                    z_126 = t;
                    {
                      if(((t_126 != NULL) && (t_126 != z_126)))
                        _fail(z_126);
                      else
                        t_126 = z_126;
                      {
                        ATerm e_127 = NULL;
                        ATerm w_6 (ATerm t)
                        {
                          ATerm a_127 = NULL;
                          a_127 = t;
                          {
                            if(((r_125 != NULL) && (r_125 != a_127)))
                              _fail(a_127);
                            else
                              r_125 = a_127;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_126));
                          }
                          return(t);
                        }
                        t = try_1(t, w_6);
                        {
                          b_127 = t;
                          {
                            if(((s_126 != NULL) && (s_126 != b_127)))
                              _fail(b_127);
                            else
                              s_126 = b_127;
                            {
                              t = not_null(t_126);
                              {
                                t = tvars_0(t);
                                {
                                  ATerm h_127 = NULL;
                                  ATerm x_6 (ATerm t)
                                  {
                                    ATerm c_127 = NULL;
                                    ATerm d_127 = NULL;
                                    d_127 = t;
                                    if(((c_127 != NULL) && (c_127 != d_127)))
                                      _fail(d_127);
                                    else
                                      c_127 = d_127;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_127));
                                    return(t);
                                  }
                                  t = map_1(t, x_6);
                                  {
                                    e_127 = t;
                                    {
                                      if(((v_126 != NULL) && (v_126 != e_127)))
                                        _fail(e_127);
                                      else
                                        v_126 = e_127;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_125), not_null(t_125));
                                        {
                                          t = tvars_0(t);
                                          {
                                            ATerm i_127 = NULL;
                                            ATerm y_6 (ATerm t)
                                            {
                                              ATerm f_127 = NULL;
                                              ATerm g_127 = NULL;
                                              g_127 = t;
                                              if(((f_127 != NULL) && (f_127 != g_127)))
                                                _fail(g_127);
                                              else
                                                f_127 = g_127;
                                              {
                                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_127));
                                                t = ContextVar_0(t);
                                              }
                                              return(t);
                                            }
                                            t = filter_1(t, y_6);
                                            {
                                              h_127 = t;
                                              {
                                                if(((u_126 != NULL) && (u_126 != h_127)))
                                                  _fail(h_127);
                                                else
                                                  u_126 = h_127;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_126), not_null(v_126));
                                                  {
                                                    ATerm j_127 = NULL;
                                                    t = diff_0(t);
                                                    {
                                                      i_127 = t;
                                                      {
                                                        if(((w_126 != NULL) && (w_126 != i_127)))
                                                          _fail(i_127);
                                                        else
                                                          w_126 = i_127;
                                                        {
                                                          t = new_0(t);
                                                          {
                                                            j_127 = t;
                                                            if(((x_126 != NULL) && (x_126 != j_127)))
                                                              _fail(j_127);
                                                            else
                                                              x_126 = j_127;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = v_38;
    {
      ATerm l_127 = NULL;
      t = not_null(n_125);
      {
        t = q_0(t);
        {
          l_127 = t;
          if(((k_127 != NULL) && (k_127 != l_127)))
            _fail(l_127);
          else
            k_127 = l_127;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(k_127), (ATerm) ATmakeAppl(sym_Op_2, term_d_39, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_e_39, (ATerm) ATinsert(CheckATermList(not_null(w_126)), (ATerm) ATmakeAppl(sym_Str_1, not_null(x_126))))), not_null(t_126))))), (ATerm) ATmakeAppl(sym_RDefT_4, not_null(n_125), not_null(o_125), not_null(p_125), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_126)), not_null(r_125)), not_null(s_125), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_g_39, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(n_125))))), not_null(s_126)), (ATerm) ATmakeAppl(sym_Op_2, term_e_39, (ATerm) ATinsert(CheckATermList(not_null(w_126)), (ATerm) ATmakeAppl(sym_Str_1, not_null(x_126))))), not_null(t_125)))));
    }
    return(t);
  }
  m_125 = t;
  e_125 :
  if(match_cons(m_125, sym_RDefT_4))
    {
      n_125 = ATgetArgument(m_125, 0);
      o_125 = ATgetArgument(m_125, 1);
      p_125 = ATgetArgument(m_125, 2);
      q_125 = ATgetArgument(m_125, 3);
      f_125 :
      if(match_cons(q_125, sym_Rule_3))
        {
          r_125 = ATgetArgument(q_125, 0);
          s_125 = ATgetArgument(q_125, 1);
          t_125 = ATgetArgument(q_125, 2);
          g_125 :
          if(match_cons(s_125, sym_Op_2))
            {
              k_125 = ATgetArgument(s_125, 0);
              l_125 = ATgetArgument(s_125, 1);
              h_125 :
              if(((ATgetType(l_125) == AT_LIST) && ATisEmpty(l_125)))
                {
                  i_125 :
                  if(match_string(k_125, "Undefined"))
                    {
                      ATerm h_39 = t;
                      int i_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm c_126 = NULL,d_126 = NULL,e_126 = NULL,j_126 = NULL;
                          ATerm j_39;
                          j_39 = t;
                          {
                            ATerm f_126 = NULL;
                            ATerm g_126 = NULL;
                            t = new_0(t);
                            {
                              f_126 = t;
                              {
                                if(((d_126 != NULL) && (d_126 != f_126)))
                                  _fail(f_126);
                                else
                                  d_126 = f_126;
                                {
                                  t = not_null(r_125);
                                  {
                                    ATerm i_126 = NULL;
                                    t = dummify_0(t);
                                    {
                                      g_126 = t;
                                      {
                                        if(((c_126 != NULL) && (c_126 != g_126)))
                                          _fail(g_126);
                                        else
                                          c_126 = g_126;
                                        {
                                          ATerm z_6 (ATerm t)
                                          {
                                            ATerm h_126 = NULL;
                                            h_126 = t;
                                            {
                                              if(((r_125 != NULL) && (r_125 != h_126)))
                                                _fail(h_126);
                                              else
                                                r_125 = h_126;
                                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_126));
                                            }
                                            return(t);
                                          }
                                          t = try_1(t, z_6);
                                          {
                                            i_126 = t;
                                            if(((e_126 != NULL) && (e_126 != i_126)))
                                              _fail(i_126);
                                            else
                                              e_126 = i_126;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          t = j_39;
                          {
                            ATerm k_126 = NULL;
                            t = not_null(n_125);
                            {
                              t = q_0(t);
                              {
                                k_126 = t;
                                if(((j_126 != NULL) && (j_126 != k_126)))
                                  _fail(k_126);
                                else
                                  j_126 = k_126;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(j_126), (ATerm) ATmakeAppl(sym_Op_2, term_d_39, (ATerm) ATinsert(ATinsert(ATempty, term_z_38), not_null(c_126))))), (ATerm) ATmakeAppl(sym_RDefT_4, not_null(n_125), not_null(o_125), not_null(p_125), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_126)), not_null(r_125)), term_z_38, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_g_39, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(n_125))))), not_null(e_126)), term_z_38), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_125), term_b_38)))));
                          }
                          ;
                          LocalPopChoice(i_39);
                        }
                      else
                        {
                          t = h_39;
                          t = n_127(t);
                        }
                    }
                  else
                    {
                      t = n_127(t);
                    }
                }
              else
                {
                  j_125 :
                  t = n_127(t);
                }
            }
          else
            {
              t = n_127(t);
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
ATerm split_dynamic_rules_0 (ATerm t)
{
  ATerm u_128 = NULL,v_128 = NULL;
  u_128 = t;
  t_128 :
  if(match_cons(u_128, sym_OverrideDynamicRules_1))
    {
      v_128 = ATgetArgument(u_128, 0);
      {
        t = not_null(v_128);
        {
          ATerm a_7 (ATerm t)
          {
            ATerm b_7 (ATerm t)
            {
              ATerm c_129 = NULL;
              ATerm d_129 = NULL;
              d_129 = t;
              if(((c_129 != NULL) && (c_129 != d_129)))
                _fail(d_129);
              else
                c_129 = d_129;
              t = (ATerm) ATmakeAppl(sym_Call_2, term_l_39, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(c_129)))));
              return(t);
            }
            t = SplitDynamicRule_1(t, b_7);
            return(t);
          }
          t = map_1(t, a_7);
          t = unzip_0(t);
        }
      }
    }
  else
    {
      if(match_cons(u_128, sym_DynamicRules_1))
        {
          v_128 = ATgetArgument(u_128, 0);
          {
            t = not_null(v_128);
            {
              ATerm c_7 (ATerm t)
              {
                ATerm d_7 (ATerm t)
                {
                  ATerm f_129 = NULL;
                  ATerm g_129 = NULL;
                  g_129 = t;
                  if(((f_129 != NULL) && (f_129 != g_129)))
                    _fail(g_129);
                  else
                    f_129 = g_129;
                  t = (ATerm) ATmakeAppl(sym_Call_2, term_r_39, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(f_129)))));
                  return(t);
                }
                t = SplitDynamicRule_1(t, d_7);
                return(t);
              }
              t = map_1(t, c_7);
              t = unzip_0(t);
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
ATerm split_under_scope_1 (ATerm t, ATerm v_133 (ATerm))
{
  ATerm o_129 = NULL,p_129 = NULL,q_129 = NULL;
  o_129 = t;
  n_129 :
  if(match_cons(o_129, sym_Scope_2))
    {
      p_129 = ATgetArgument(o_129, 0);
      q_129 = ATgetArgument(o_129, 1);
      {
        ATerm t_129 = NULL;
        ATerm e_7 (ATerm t)
        {
          t = term_k_38;
          return(t);
        }
        ATerm f_7 (ATerm t)
        {
          ATerm u_129 = NULL;
          t = not_null(p_129);
          {
            t = DeclareContextVars_0(t);
            {
              t = not_null(q_129);
              {
                t = v_133(t);
                {
                  u_129 = t;
                  if(((t_129 != NULL) && (t_129 != u_129)))
                    _fail(u_129);
                  else
                    t_129 = u_129;
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, e_7, f_7);
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_129), not_null(t_129));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm x_107 (ATerm))
{
  ATerm y_129 (ATerm t)
  {
    ATerm t_39 = t;
    int w_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_107(t);
        ;
        LocalPopChoice(w_39);
      }
    else
      {
        t = t_39;
        t = _one(t, y_129);
      }
    return(t);
  }
  t = y_129(t);
  return(t);
}
ATerm split_dynamic_rule_1 (ATerm t, ATerm t_133 (ATerm))
{
  ATerm z_129 (ATerm t)
  {
    ATerm g_7 (ATerm t)
    {
      ATerm x_39 = t;
      int y_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_133(t);
          ;
          LocalPopChoice(y_39);
        }
      else
        {
          t = x_39;
          t = split_under_scope_1(t, z_129);
        }
      return(t);
    }
    t = oncetd_1(t, g_7);
    return(t);
  }
  t = z_129(t);
  return(t);
}
ATerm DeclareContextVars_0 (ATerm t)
{
  ATerm h_7 (ATerm t)
  {
    ATerm b_130 = NULL;
    b_130 = t;
    {
      ATerm z_39;
      z_39 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_130)), term_b_40);
        {
          ATerm i_7 (ATerm t)
          {
            t = term_k_38;
            return(t);
          }
          t = assert_1(t, i_7);
        }
      }
      t = z_39;
    }
    return(t);
  }
  t = map_1(t, h_7);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm j_130 = NULL,k_130 = NULL,l_130 = NULL;
  j_130 = t;
  i_130 :
  if(((ATgetType(j_130) == AT_LIST) && !(ATisEmpty(j_130))))
    {
      k_130 = ATgetFirst((ATermList) j_130);
      l_130 = (ATerm) ATgetNext((ATermList) j_130);
      {
        ATerm o_130 = NULL,p_130 = NULL,q_130 = NULL;
        ATerm j_7 (ATerm t)
        {
          t = term_k_38;
          return(t);
        }
        ATerm k_7 (ATerm t)
        {
          ATerm u_130 = NULL;
          t = not_null(k_130);
          {
            t = tvars_0(t);
            {
              t = DeclareContextVars_0(t);
              {
                t = not_null(k_130);
                {
                  ATerm l_7 (ATerm t)
                  {
                    ATerm r_130 = NULL,s_130 = NULL,t_130 = NULL;
                    t = split_dynamic_rules_0(t);
                    {
                      r_130 = t;
                      g_130 :
                      if(match_cons(r_130, sym__2))
                        {
                          s_130 = ATgetArgument(r_130, 0);
                          t_130 = ATgetArgument(r_130, 1);
                          {
                            if(((p_130 != NULL) && (p_130 != s_130)))
                              _fail(s_130);
                            else
                              p_130 = s_130;
                            {
                              if(((o_130 != NULL) && (o_130 != t_130)))
                                _fail(t_130);
                              else
                                o_130 = t_130;
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(p_130));
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
                  t = split_dynamic_rule_1(t, l_7);
                  {
                    u_130 = t;
                    if(((q_130 != NULL) && (q_130 != u_130)))
                      _fail(u_130);
                    else
                      q_130 = u_130;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, j_7, k_7);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_130)), not_null(q_130)), not_null(l_130));
          t = conc_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm t_113 (ATerm))
{
  ATerm e_131 (ATerm t)
  {
    t = t_113(t);
    {
      ATerm c_40 = t;
      int d_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          ;
          LocalPopChoice(d_40);
        }
      else
        {
          t = c_40;
          t = Cons_2(t, _id, e_131);
        }
    }
    return(t);
  }
  t = e_131(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm m_7 (ATerm t)
  {
    t = repeat_1(t, lift_dynamic_rule_0);
    return(t);
  }
  t = listtd_1(t, m_7);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm e_132 = NULL,h_132 = NULL,i_132 = NULL,j_132 = NULL,l_132 = NULL;
  i_132 = t;
  c_132 :
  if(match_cons(i_132, sym_DynRuleScope_2))
    {
      j_132 = ATgetArgument(i_132, 0);
      l_132 = ATgetArgument(i_132, 1);
      d_132 :
      if(((ATgetType(j_132) == AT_LIST) && !(ATisEmpty(j_132))))
        {
          e_132 = ATgetFirst((ATermList) j_132);
          h_132 = (ATerm) ATgetNext((ATermList) j_132);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_f_40, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(h_132), not_null(l_132))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(e_132)))));
        }
      else
        {
          if(((ATgetType(j_132) == AT_LIST) && ATisEmpty(j_132)))
            {
              t = not_null(l_132);
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
ATerm define_rule_scope_0 (ATerm t)
{
  ATerm n_7 (ATerm t)
  {
    t = try_1(t, DefDynamicRuleScope_0);
    return(t);
  }
  t = topdown_1(t, n_7);
  return(t);
}
ATerm LiftDynamicRules_0 (ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    ATerm p_7 (ATerm t)
    {
      ATerm q_7 (ATerm t)
      {
        ATerm r_7 (ATerm t)
        {
          ATerm s_7 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, s_7);
          return(t);
        }
        t = Cons_2(t, r_7, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, q_7);
      return(t);
    }
    t = Cons_2(t, _id, p_7);
    return(t);
  }
  t = Specification_1(t, o_7);
  return(t);
}
ATerm DefScopeDefault_0 (ATerm t)
{
  ATerm v_132 = NULL,w_132 = NULL;
  v_132 = t;
  u_132 :
  if(match_cons(v_132, sym_ScopeDefault_1))
    {
      w_132 = ATgetArgument(v_132, 0);
      {
        ATerm y_132 = NULL;
        ATerm z_132 = NULL;
        t = not_null(w_132);
        {
          t = tvars_0(t);
          {
            z_132 = t;
            if(((y_132 != NULL) && (y_132 != z_132)))
              _fail(z_132);
            else
              y_132 = z_132;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_132), not_null(w_132));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm u_94 (ATerm))
{
  ATerm h_133 = NULL,i_133 = NULL;
  h_133 = t;
  g_133 :
  if(match_cons(h_133, sym_DynamicRules_1))
    {
      i_133 = ATgetArgument(h_133, 0);
      {
        ATerm p_133 = NULL,r_133 = NULL;
        ATerm q_133 = NULL;
        t = SSLgetAnnotations(not_null(h_133));
        {
          q_133 = t;
          if(((p_133 != NULL) && (p_133 != q_133)))
            _fail(q_133);
          else
            p_133 = q_133;
        }
        {
          t = not_null(i_133);
          {
            ATerm w_133 = NULL;
            t = u_94(t);
            {
              r_133 = t;
              {
                ATerm x_133 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(r_133)), not_null(p_133));
                {
                  x_133 = t;
                  if(((w_133 != NULL) && (w_133 != x_133)))
                    _fail(x_133);
                  else
                    w_133 = x_133;
                }
                t = not_null(w_133);
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
ATerm Scope_2 (ATerm t, ATerm x_95 (ATerm), ATerm y_95 (ATerm))
{
  ATerm m_134 = NULL,n_134 = NULL,o_134 = NULL;
  m_134 = t;
  l_134 :
  if(match_cons(m_134, sym_Scope_2))
    {
      n_134 = ATgetArgument(m_134, 0);
      o_134 = ATgetArgument(m_134, 1);
      {
        ATerm s_134 = NULL,c_135 = NULL;
        ATerm t_134 = NULL;
        t = SSLgetAnnotations(not_null(m_134));
        {
          t_134 = t;
          if(((s_134 != NULL) && (s_134 != t_134)))
            _fail(t_134);
          else
            s_134 = t_134;
        }
        {
          t = not_null(n_134);
          {
            ATerm o_135 = NULL;
            t = x_95(t);
            {
              c_135 = t;
              {
                t = not_null(o_134);
                {
                  ATerm q_135 = NULL;
                  t = y_95(t);
                  {
                    o_135 = t;
                    {
                      ATerm r_135 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(c_135), not_null(o_135)), not_null(s_134));
                      {
                        r_135 = t;
                        if(((q_135 != NULL) && (q_135 != r_135)))
                          _fail(r_135);
                        else
                          q_135 = r_135;
                      }
                      t = not_null(q_135);
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
ATerm tboundin_3 (ATerm t, ATerm v_134 (ATerm), ATerm w_134 (ATerm), ATerm x_134 (ATerm))
{
  ATerm g_40 = t;
  int h_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, x_134, v_134);
      ;
      LocalPopChoice(h_40);
    }
  else
    {
      t = g_40;
      {
        ATerm i_40 = t;
        int j_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4(t, x_134, x_134, x_134, v_134);
            ;
            LocalPopChoice(j_40);
          }
        else
          {
            t = i_40;
            {
              ATerm r_40 = t;
              int s_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4(t, x_134, x_134, x_134, v_134);
                  ;
                  LocalPopChoice(s_40);
                }
              else
                {
                  t = r_40;
                  t = DynamicRules_1(t, v_134);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0 (ATerm t)
{
  ATerm z_135 = NULL,a_136 = NULL,b_136 = NULL,c_136 = NULL,d_136 = NULL;
  z_135 = t;
  y_135 :
  if(match_cons(z_135, sym_RDefT_4))
    {
      a_136 = ATgetArgument(z_135, 0);
      b_136 = ATgetArgument(z_135, 1);
      c_136 = ATgetArgument(z_135, 2);
      d_136 = ATgetArgument(z_135, 3);
      {
        t = not_null(c_136);
        t = declared_vars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declared_vars_0 (ATerm t)
{
  ATerm t_7 (ATerm t)
  {
    ATerm m_136 = NULL,n_136 = NULL,o_136 = NULL;
    n_136 = t;
    l_136 :
    if(match_cons(n_136, sym_VarDec_2))
      {
        o_136 = ATgetArgument(n_136, 0);
        m_136 = ATgetArgument(n_136, 1);
        t = not_null(o_136);
      }
    else
      {
        if(match_cons(n_136, sym_DefaultVarDec_1))
          {
            o_136 = ATgetArgument(n_136, 0);
            t = not_null(o_136);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1(t, t_7);
  return(t);
}
ATerm Bind6_0 (ATerm t)
{
  ATerm v_136 = NULL,w_136 = NULL,x_136 = NULL,y_136 = NULL,z_136 = NULL;
  v_136 = t;
  u_136 :
  if(match_cons(v_136, sym_SDefT_4))
    {
      w_136 = ATgetArgument(v_136, 0);
      x_136 = ATgetArgument(v_136, 1);
      y_136 = ATgetArgument(v_136, 2);
      z_136 = ATgetArgument(v_136, 3);
      {
        t = not_null(y_136);
        t = declared_vars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm h_137 = NULL,i_137 = NULL;
  h_137 = t;
  g_137 :
  if(match_cons(h_137, sym_DynamicRules_1))
    {
      i_137 = ATgetArgument(h_137, 0);
      {
        t = not_null(i_137);
        t = tvars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm p_137 = NULL,q_137 = NULL,r_137 = NULL,s_137 = NULL,t_137 = NULL,u_137 = NULL;
  s_137 = t;
  n_137 :
  if(match_cons(s_137, sym_LRule_1))
    {
      t_137 = ATgetArgument(s_137, 0);
      o_137 :
      if(match_cons(t_137, sym_Rule_3))
        {
          p_137 = ATgetArgument(t_137, 0);
          q_137 = ATgetArgument(t_137, 1);
          r_137 = ATgetArgument(t_137, 2);
          {
            t = not_null(p_137);
            t = tvars_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(s_137, sym_Scope_2))
        {
          t_137 = ATgetArgument(s_137, 0);
          u_137 = ATgetArgument(s_137, 1);
          t = not_null(t_137);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm e_138 = NULL,f_138 = NULL;
  e_138 = t;
  d_138 :
  if(match_cons(e_138, sym_Var_1))
    {
      f_138 = ATgetArgument(e_138, 0);
      t = (ATerm) ATinsert(ATempty, not_null(f_138));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm n_116 (ATerm))
{
  ATerm k_138 = NULL,l_138 = NULL,m_138 = NULL;
  k_138 = t;
  j_138 :
  if(match_cons(k_138, sym__2))
    {
      l_138 = ATgetArgument(k_138, 0);
      m_138 = ATgetArgument(k_138, 1);
      {
        t = not_null(l_138);
        {
          ATerm q_138 (ATerm t)
          {
            ATerm t_40 = t;
            int u_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(m_138);
                ;
                LocalPopChoice(u_40);
              }
            else
              {
                t = t_40;
                {
                  ATerm v_40 = t;
                  int w_40 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_7 (ATerm t)
                      {
                        t = not_null(m_138);
                        return(t);
                      }
                      t = HdMember_p__2(t, n_116, u_7);
                      t = q_138(t);
                      ;
                      LocalPopChoice(w_40);
                    }
                  else
                    {
                      t = v_40;
                      t = Cons_2(t, _id, q_138);
                    }
                }
              }
            return(t);
          }
          t = q_138(t);
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
ATerm crush_3 (ATerm t, ATerm g_122 (ATerm), ATerm h_122 (ATerm), ATerm i_122 (ATerm))
{
  ATerm v_138 = NULL;
  ATerm x_138 = NULL;
  v_138 = t;
  {
    ATerm y_138 = NULL;
    ATerm a_139 = NULL,b_139 = NULL,c_139 = NULL;
    t = not_null(v_138);
    {
      y_138 = t;
      {
        t = SSL_explode_term(not_null(y_138));
        {
          a_139 = t;
          u_138 :
          if(match_cons(a_139, sym__2))
            {
              b_139 = ATgetArgument(a_139, 0);
              c_139 = ATgetArgument(a_139, 1);
              if(((x_138 != NULL) && (x_138 != c_139)))
                _fail(c_139);
              else
                x_138 = c_139;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_138);
      t = foldr_3(t, g_122, h_122, i_122);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm i_139 = NULL,j_139 = NULL,k_139 = NULL;
  i_139 = t;
  h_139 :
  if(match_cons(i_139, sym__2))
    {
      j_139 = ATgetArgument(i_139, 0);
      k_139 = ATgetArgument(i_139, 1);
      if(((j_139 != NULL) && (j_139 != k_139)))
        _fail(k_139);
      else
        j_139 = k_139;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm r_116 (ATerm), ATerm s_116 (ATerm))
{
  ATerm q_139 = NULL,r_139 = NULL,s_139 = NULL;
  q_139 = t;
  p_139 :
  if(((ATgetType(q_139) == AT_LIST) && !(ATisEmpty(q_139))))
    {
      r_139 = ATgetFirst((ATermList) q_139);
      s_139 = (ATerm) ATgetNext((ATermList) q_139);
      {
        t = s_116(t);
        {
          ATerm v_7 (ATerm t)
          {
            ATerm v_139 = NULL;
            v_139 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_139), not_null(v_139));
              t = r_116(t);
            }
            return(t);
          }
          t = fetch_1(t, v_7);
        }
        t = not_null(s_139);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm j_116 (ATerm))
{
  ATerm b_140 = NULL,c_140 = NULL,d_140 = NULL;
  b_140 = t;
  a_140 :
  if(match_cons(b_140, sym__2))
    {
      c_140 = ATgetArgument(b_140, 0);
      d_140 = ATgetArgument(b_140, 1);
      {
        t = not_null(c_140);
        {
          ATerm h_140 (ATerm t)
          {
            ATerm x_40 = t;
            int y_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(y_40);
              }
            else
              {
                t = x_40;
                {
                  ATerm z_40 = t;
                  int a_41 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_7 (ATerm t)
                      {
                        t = not_null(d_140);
                        return(t);
                      }
                      t = HdMember_p__2(t, j_116, w_7);
                      t = h_140(t);
                      ;
                      LocalPopChoice(a_41);
                    }
                  else
                    {
                      t = z_40;
                      t = Cons_2(t, _id, h_140);
                    }
                }
              }
            return(t);
          }
          t = h_140(t);
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
  ATerm l_140 = NULL,m_140 = NULL,n_140 = NULL,o_140 = NULL,p_140 = NULL;
  l_140 = t;
  j_140 :
  if(match_cons(l_140, sym__2))
    {
      m_140 = ATgetArgument(l_140, 0);
      n_140 = ATgetArgument(l_140, 1);
      k_140 :
      if(((ATgetType(n_140) == AT_LIST) && !(ATisEmpty(n_140))))
        {
          o_140 = ATgetFirst((ATermList) n_140);
          p_140 = (ATerm) ATgetNext((ATermList) n_140);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_140)), not_null(o_140)), not_null(p_140));
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
  ATerm w_140 = NULL,x_140 = NULL,y_140 = NULL;
  w_140 = t;
  v_140 :
  if(match_cons(w_140, sym__2))
    {
      x_140 = ATgetArgument(w_140, 0);
      y_140 = ATgetArgument(w_140, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_140)), not_null(x_140));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm g_141 = NULL,h_141 = NULL,i_141 = NULL,j_141 = NULL,k_141 = NULL,l_141 = NULL,m_141 = NULL;
  g_141 = t;
  d_141 :
  if(match_cons(g_141, sym__2))
    {
      h_141 = ATgetArgument(g_141, 0);
      k_141 = ATgetArgument(g_141, 1);
      e_141 :
      if(((ATgetType(h_141) == AT_LIST) && !(ATisEmpty(h_141))))
        {
          i_141 = ATgetFirst((ATermList) h_141);
          j_141 = (ATerm) ATgetNext((ATermList) h_141);
          f_141 :
          if(((ATgetType(k_141) == AT_LIST) && !(ATisEmpty(k_141))))
            {
              l_141 = ATgetFirst((ATermList) k_141);
              m_141 = (ATerm) ATgetNext((ATermList) k_141);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(i_141), not_null(l_141)), (ATerm) ATmakeAppl(sym__2, not_null(j_141), not_null(m_141)));
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
  ATerm w_141 = NULL,x_141 = NULL,y_141 = NULL;
  w_141 = t;
  t_141 :
  if(match_cons(w_141, sym__2))
    {
      x_141 = ATgetArgument(w_141, 0);
      y_141 = ATgetArgument(w_141, 1);
      u_141 :
      if(((ATgetType(x_141) == AT_LIST) && ATisEmpty(x_141)))
        {
          v_141 :
          if(((ATgetType(y_141) == AT_LIST) && ATisEmpty(y_141)))
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
ATerm genzip_4 (ATerm t, ATerm n_114 (ATerm), ATerm o_114 (ATerm), ATerm p_114 (ATerm), ATerm q_114 (ATerm))
{
  ATerm a_142 (ATerm t)
  {
    ATerm b_41 = t;
    int e_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_114(t);
        ;
        LocalPopChoice(e_41);
      }
    else
      {
        t = b_41;
        {
          t = o_114(t);
          {
            t = _2(t, q_114, a_142);
            t = p_114(t);
          }
        }
      }
    return(t);
  }
  t = a_142(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm s_114 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, s_114);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm l_142 = NULL,m_142 = NULL,n_142 = NULL,o_142 = NULL,p_142 = NULL;
  l_142 = t;
  j_142 :
  if(((ATgetType(l_142) == AT_LIST) && !(ATisEmpty(l_142))))
    {
      m_142 = ATgetFirst((ATermList) l_142);
      p_142 = (ATerm) ATgetNext((ATermList) l_142);
      k_142 :
      if(match_cons(m_142, sym__2))
        {
          n_142 = ATgetArgument(m_142, 0);
          o_142 = ATgetArgument(m_142, 1);
          {
            ATerm t_142 = NULL,u_142 = NULL,a_143 = NULL,g_143 = NULL;
            ATerm f_41;
            f_41 = t;
            {
              ATerm v_142 = NULL;
              ATerm x_142 = NULL,y_142 = NULL,z_142 = NULL;
              t = not_null(o_142);
              {
                v_142 = t;
                {
                  t = SSL_explode_term(not_null(v_142));
                  {
                    x_142 = t;
                    e_142 :
                    if(match_cons(x_142, sym__2))
                      {
                        y_142 = ATgetArgument(x_142, 0);
                        z_142 = ATgetArgument(x_142, 1);
                        {
                          if(((t_142 != NULL) && (t_142 != y_142)))
                            _fail(y_142);
                          else
                            t_142 = y_142;
                          if(((u_142 != NULL) && (u_142 != z_142)))
                            _fail(z_142);
                          else
                            u_142 = z_142;
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
            t = f_41;
            {
              ATerm i_41;
              i_41 = t;
              {
                ATerm b_143 = NULL;
                ATerm d_143 = NULL,e_143 = NULL,f_143 = NULL;
                t = not_null(n_142);
                {
                  b_143 = t;
                  {
                    t = SSL_explode_term(not_null(b_143));
                    {
                      d_143 = t;
                      h_142 :
                      if(match_cons(d_143, sym__2))
                        {
                          e_143 = ATgetArgument(d_143, 0);
                          f_143 = ATgetArgument(d_143, 1);
                          {
                            if(((t_142 != NULL) && (t_142 != e_143)))
                              _fail(e_143);
                            else
                              t_142 = e_143;
                            if(((a_143 != NULL) && (a_143 != f_143)))
                              _fail(f_143);
                            else
                              a_143 = f_143;
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
              t = i_41;
              {
                ATerm h_143 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_143), not_null(u_142));
                {
                  t = zip_1(t, _id);
                  {
                    h_143 = t;
                    if(((g_143 != NULL) && (g_143 != h_143)))
                      _fail(h_143);
                    else
                      g_143 = h_143;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_143), not_null(p_142));
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
  ATerm r_143 = NULL,s_143 = NULL,t_143 = NULL,u_143 = NULL,v_143 = NULL;
  r_143 = t;
  p_143 :
  if(((ATgetType(r_143) == AT_LIST) && !(ATisEmpty(r_143))))
    {
      s_143 = ATgetFirst((ATermList) r_143);
      v_143 = (ATerm) ATgetNext((ATermList) r_143);
      q_143 :
      if(match_cons(s_143, sym__2))
        {
          t_143 = ATgetArgument(s_143, 0);
          u_143 = ATgetArgument(s_143, 1);
          {
            ATerm x_143 = NULL;
            if(((t_143 != NULL) && (t_143 != u_143)))
              _fail(u_143);
            else
              t_143 = u_143;
            {
              if(((x_143 != NULL) && (x_143 != v_143)))
                _fail(v_143);
              else
                x_143 = v_143;
              t = not_null(x_143);
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
ATerm while_not_2 (ATerm t, ATerm k_106 (ATerm), ATerm l_106 (ATerm))
{
  ATerm z_143 (ATerm t)
  {
    ATerm j_41 = t;
    int k_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_106(t);
        ;
        LocalPopChoice(k_41);
      }
    else
      {
        t = j_41;
        {
          t = l_106(t);
          t = z_143(t);
        }
      }
    return(t);
  }
  t = z_143(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm p_106 (ATerm))
{
  t = n_106(t);
  t = while_not_2(t, o_106, p_106);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm l_41 = t;
  int p_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_7 (ATerm t)
      {
        ATerm b_144 = NULL;
        b_144 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(b_144));
        return(t);
      }
      ATerm y_7 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm z_7 (ATerm t)
      {
        ATerm s_41 = t;
        int t_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_8 (ATerm t)
            {
              ATerm u_41 = t;
              int v_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(v_41);
                }
              else
                {
                  t = u_41;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, a_8);
            ;
            LocalPopChoice(t_41);
          }
        else
          {
            t = s_41;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, x_7, y_7, z_7);
      ;
      LocalPopChoice(p_41);
    }
  else
    {
      t = l_41;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm k_133 (ATerm), ATerm l_133 (ATerm), ATerm m_133 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm h_144 (ATerm t)
  {
    ATerm w_41 = t;
    int x_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_133(t);
        ;
        LocalPopChoice(x_41);
      }
    else
      {
        t = w_41;
        {
          ATerm y_41 = t;
          int z_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_144 = NULL;
              ATerm f_42;
              f_42 = t;
              {
                ATerm g_144 = NULL;
                t = l_133(t);
                {
                  g_144 = t;
                  if(((f_144 != NULL) && (f_144 != g_144)))
                    _fail(g_144);
                  else
                    f_144 = g_144;
                }
              }
              t = f_42;
              {
                ATerm b_8 (ATerm t)
                {
                  ATerm d_8 (ATerm t)
                  {
                    t = not_null(f_144);
                    return(t);
                  }
                  t = split_2(t, h_144, d_8);
                  t = diff_0(t);
                  return(t);
                }
                ATerm c_8 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = m_133(t, b_8, h_144, c_8);
                {
                  ATerm e_8 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, e_8, union_0, _id);
                }
              }
              ;
              LocalPopChoice(z_41);
            }
          else
            {
              t = y_41;
              {
                ATerm f_8 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, f_8, union_0, h_144);
              }
            }
        }
      }
    return(t);
  }
  t = h_144(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm g_8 (ATerm t)
  {
    ATerm g_42 = t;
    int h_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(h_42);
      }
    else
      {
        t = g_42;
        {
          ATerm g_43 = t;
          int h_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0(t);
              ;
              LocalPopChoice(h_43);
            }
          else
            {
              t = g_43;
              {
                ATerm i_43 = t;
                int j_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0(t);
                    ;
                    LocalPopChoice(j_43);
                  }
                else
                  {
                    t = i_43;
                    t = Bind8_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, g_8, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm n_144 = NULL,o_144 = NULL,p_144 = NULL,q_144 = NULL,r_144 = NULL;
  n_144 = t;
  l_144 :
  if(match_cons(n_144, sym_LRule_1))
    {
      o_144 = ATgetArgument(n_144, 0);
      m_144 :
      if(match_cons(o_144, sym_Rule_3))
        {
          p_144 = ATgetArgument(o_144, 0);
          q_144 = ATgetArgument(o_144, 1);
          r_144 = ATgetArgument(o_144, 2);
          {
            ATerm v_144 = NULL;
            ATerm w_144 = NULL;
            t = not_null(p_144);
            {
              t = tvars_0(t);
              {
                w_144 = t;
                if(((v_144 != NULL) && (v_144 != w_144)))
                  _fail(w_144);
                else
                  v_144 = w_144;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_144), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_144), not_null(q_144), not_null(r_144))));
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
ATerm bottomup_1 (ATerm t, ATerm u_106 (ATerm))
{
  ATerm h_8 (ATerm t)
  {
    t = bottomup_1(t, u_106);
    return(t);
  }
  t = _all(t, h_8);
  t = u_106(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm i_8 (ATerm t)
  {
    ATerm j_8 (ATerm t)
    {
      ATerm k_43 = t;
      int l_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0(t);
          ;
          LocalPopChoice(l_43);
        }
      else
        {
          t = k_43;
          t = DefScopeDefault_0(t);
        }
      return(t);
    }
    t = try_1(t, j_8);
    return(t);
  }
  t = bottomup_1(t, i_8);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm b_145 = NULL,c_145 = NULL,d_145 = NULL;
  b_145 = t;
  a_145 :
  if(match_cons(b_145, sym__2))
    {
      c_145 = ATgetArgument(b_145, 0);
      d_145 = ATgetArgument(b_145, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_145), not_null(d_145));
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
ATerm rewrite_1 (ATerm t, ATerm f_123 (ATerm))
{
  ATerm j_145 = NULL;
  ATerm l_145 = NULL;
  j_145 = t;
  {
    ATerm m_145 = NULL;
    t = term_m_43;
    {
      t = f_123(t);
      {
        m_145 = t;
        if(((l_145 != NULL) && (l_145 != m_145)))
          _fail(m_145);
        else
          l_145 = m_145;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_145), not_null(j_145));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm VarToConst_0 (ATerm t)
{
  ATerm w_145 = NULL,x_145 = NULL;
  w_145 = t;
  v_145 :
  if(match_cons(w_145, sym_Var_1))
    {
      x_145 = ATgetArgument(w_145, 0);
      {
        ATerm n_43 = t;
        int o_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_146 = NULL,b_146 = NULL;
            t = not_null(w_145);
            {
              ATerm k_8 (ATerm t)
              {
                t = term_q_43;
                return(t);
              }
              t = rewrite_1(t, k_8);
              {
                a_146 = t;
                r_145 :
                if(match_cons(a_146, sym_Defined_1))
                  {
                    b_146 = ATgetArgument(a_146, 0);
                    s_145 :
                    if(!(match_string(b_146, "e_0")))
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
            t = (ATerm) ATmakeAppl(sym_Op_2, not_null(x_145), (ATerm) ATempty);
            ;
            LocalPopChoice(o_43);
          }
        else
          {
            t = n_43;
            {
              ATerm e_146 = NULL,f_146 = NULL;
              t = not_null(w_145);
              {
                ATerm l_8 (ATerm t)
                {
                  t = term_q_43;
                  return(t);
                }
                t = rewrite_1(t, l_8);
                {
                  e_146 = t;
                  t_145 :
                  if(match_cons(e_146, sym_Defined_1))
                    {
                      f_146 = ATgetArgument(e_146, 0);
                      u_145 :
                      if(!(match_string(f_146, "c_0")))
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
              t = (ATerm) ATmakeAppl(sym_Op_2, not_null(x_145), (ATerm) ATempty);
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
ATerm alltd_1 (ATerm t, ATerm l_108 (ATerm))
{
  ATerm i_146 (ATerm t)
  {
    ATerm r_43 = t;
    int s_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_108(t);
        ;
        LocalPopChoice(s_43);
      }
    else
      {
        t = r_43;
        t = _all(t, i_146);
      }
    return(t);
  }
  t = i_146(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm d_123 (ATerm))
{
  ATerm o_146 = NULL,p_146 = NULL,q_146 = NULL;
  o_146 = t;
  n_146 :
  if(match_cons(o_146, sym__2))
    {
      p_146 = ATgetArgument(o_146, 0);
      q_146 = ATgetArgument(o_146, 1);
      {
        ATerm t_146 = NULL,u_146 = NULL,v_146 = NULL;
        ATerm t_43;
        t_43 = t;
        {
          ATerm w_146 = NULL;
          ATerm x_146 = NULL,y_146 = NULL,z_146 = NULL;
          t = d_123(t);
          {
            w_146 = t;
            {
              if(((t_146 != NULL) && (t_146 != w_146)))
                _fail(w_146);
              else
                t_146 = w_146;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(t_146), not_null(p_146), not_null(q_146));
                {
                  t = table_push_0(t);
                  {
                    ATerm u_43 = t;
                    int w_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(t_146), term_x_43);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(w_43);
                      }
                    else
                      {
                        t = u_43;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      x_146 = t;
                      m_146 :
                      if(((ATgetType(x_146) == AT_LIST) && !(ATisEmpty(x_146))))
                        {
                          y_146 = ATgetFirst((ATermList) x_146);
                          z_146 = (ATerm) ATgetNext((ATermList) x_146);
                          {
                            if(((u_146 != NULL) && (u_146 != y_146)))
                              _fail(y_146);
                            else
                              u_146 = y_146;
                            {
                              if(((v_146 != NULL) && (v_146 != z_146)))
                                _fail(z_146);
                              else
                                v_146 = z_146;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(t_146), term_x_43, (ATerm) ATinsert(CheckATermList(not_null(v_146)), (ATerm) ATinsert(CheckATermList(not_null(u_146)), not_null(p_146))));
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
        t = t_43;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DeclareVarToConst_0 (ATerm t)
{
  ATerm i_147 = NULL,j_147 = NULL,k_147 = NULL,l_147 = NULL,m_147 = NULL;
  j_147 = t;
  f_147 :
  if(match_cons(j_147, sym_Overlay_3))
    {
      k_147 = ATgetArgument(j_147, 0);
      l_147 = ATgetArgument(j_147, 1);
      i_147 = ATgetArgument(j_147, 2);
      g_147 :
      if(((ATgetType(l_147) == AT_LIST) && ATisEmpty(l_147)))
        {
          {
            ATerm y_43;
            y_43 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_147)), term_d_44);
              {
                ATerm m_8 (ATerm t)
                {
                  t = term_q_43;
                  return(t);
                }
                t = assert_1(t, m_8);
              }
            }
            t = y_43;
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(j_147, sym_OpDecl_2))
        {
          k_147 = ATgetArgument(j_147, 0);
          l_147 = ATgetArgument(j_147, 1);
          h_147 :
          if(match_cons(l_147, sym_ConstType_1))
            {
              m_147 = ATgetArgument(l_147, 0);
              {
                ATerm h_44;
                h_44 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_147)), term_k_44);
                  {
                    ATerm n_8 (ATerm t)
                    {
                      t = term_q_43;
                      return(t);
                    }
                    t = assert_1(t, n_8);
                  }
                }
                t = h_44;
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
ATerm Overlays_1 (ATerm t, ATerm g_91 (ATerm))
{
  ATerm y_147 = NULL,z_147 = NULL;
  y_147 = t;
  x_147 :
  if(match_cons(y_147, sym_Overlays_1))
    {
      z_147 = ATgetArgument(y_147, 0);
      {
        ATerm c_148 = NULL,e_148 = NULL;
        ATerm d_148 = NULL;
        t = SSLgetAnnotations(not_null(y_147));
        {
          d_148 = t;
          if(((c_148 != NULL) && (c_148 != d_148)))
            _fail(d_148);
          else
            c_148 = d_148;
        }
        {
          t = not_null(z_147);
          {
            ATerm g_148 = NULL;
            t = g_91(t);
            {
              e_148 = t;
              {
                ATerm h_148 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(e_148)), not_null(c_148));
                {
                  h_148 = t;
                  if(((g_148 != NULL) && (g_148 != h_148)))
                    _fail(h_148);
                  else
                    g_148 = h_148;
                }
                t = not_null(g_148);
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
ATerm Constructors_1 (ATerm t, ATerm b_92 (ATerm))
{
  ATerm r_148 = NULL,s_148 = NULL;
  r_148 = t;
  q_148 :
  if(match_cons(r_148, sym_Constructors_1))
    {
      s_148 = ATgetArgument(r_148, 0);
      {
        ATerm v_148 = NULL,x_148 = NULL;
        ATerm w_148 = NULL;
        t = SSLgetAnnotations(not_null(r_148));
        {
          w_148 = t;
          if(((v_148 != NULL) && (v_148 != w_148)))
            _fail(w_148);
          else
            v_148 = w_148;
        }
        {
          t = not_null(s_148);
          {
            ATerm z_148 = NULL;
            t = b_92(t);
            {
              x_148 = t;
              {
                ATerm a_149 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, not_null(x_148)), not_null(v_148));
                {
                  a_149 = t;
                  if(((z_148 != NULL) && (z_148 != a_149)))
                    _fail(a_149);
                  else
                    z_148 = a_149;
                }
                t = not_null(z_148);
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
ATerm table_pop_0 (ATerm t)
{
  ATerm i_149 = NULL,j_149 = NULL,k_149 = NULL;
  i_149 = t;
  h_149 :
  if(match_cons(i_149, sym__2))
    {
      j_149 = ATgetArgument(i_149, 0);
      k_149 = ATgetArgument(i_149, 1);
      {
        ATerm l_44;
        l_44 = t;
        {
          ATerm n_149 = NULL;
          ATerm o_149 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_149), not_null(k_149));
          {
            ATerm m_44 = t;
            int n_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(n_44);
              }
            else
              {
                t = m_44;
                t = (ATerm) ATempty;
              }
            {
              o_149 = t;
              if(((n_149 != NULL) && (n_149 != o_149)))
                _fail(o_149);
              else
                n_149 = o_149;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_149), not_null(k_149), not_null(n_149));
            t = table_put_0(t);
          }
        }
        t = l_44;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm a_123 (ATerm))
{
  ATerm v_149 = NULL,w_149 = NULL,x_149 = NULL;
  ATerm o_44;
  o_44 = t;
  {
    ATerm y_149 = NULL;
    ATerm z_149 = NULL,a_150 = NULL,b_150 = NULL;
    t = a_123(t);
    {
      y_149 = t;
      {
        if(((x_149 != NULL) && (x_149 != y_149)))
          _fail(y_149);
        else
          x_149 = y_149;
        {
          ATerm p_44 = t;
          int q_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_149), term_x_43);
              t = table_get_0(t);
              ;
              LocalPopChoice(q_44);
            }
          else
            {
              t = p_44;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            z_149 = t;
            u_149 :
            if(((ATgetType(z_149) == AT_LIST) && !(ATisEmpty(z_149))))
              {
                a_150 = ATgetFirst((ATermList) z_149);
                b_150 = (ATerm) ATgetNext((ATermList) z_149);
                {
                  if(((w_149 != NULL) && (w_149 != a_150)))
                    _fail(a_150);
                  else
                    w_149 = a_150;
                  {
                    if(((v_149 != NULL) && (v_149 != b_150)))
                      _fail(b_150);
                    else
                      v_149 = b_150;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(x_149), term_x_43, not_null(v_149));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(w_149);
                          {
                            ATerm o_8 (ATerm t)
                            {
                              ATerm c_150 = NULL;
                              c_150 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_149), not_null(c_150));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, o_8);
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
  t = o_44;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm o_105 (ATerm), ATerm p_105 (ATerm))
{
  ATerm t_44 = t;
  int u_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_105(t);
      t = p_105(t);
      ;
      LocalPopChoice(u_44);
    }
  else
    {
      t = t_44;
      {
        t = p_105(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm z_122 (ATerm))
{
  ATerm j_150 = NULL;
  ATerm v_44;
  v_44 = t;
  {
    ATerm k_150 = NULL;
    ATerm l_150 = NULL;
    t = z_122(t);
    {
      k_150 = t;
      {
        if(((j_150 != NULL) && (j_150 != k_150)))
          _fail(k_150);
        else
          j_150 = k_150;
        {
          ATerm m_150 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_150), term_x_43);
          {
            ATerm w_44 = t;
            int z_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(z_44);
              }
            else
              {
                t = w_44;
                t = (ATerm) ATempty;
              }
            {
              m_150 = t;
              if(((l_150 != NULL) && (l_150 != m_150)))
                _fail(m_150);
              else
                l_150 = m_150;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_150), term_x_43, (ATerm) ATinsert(CheckATermList(not_null(l_150)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = v_44;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm b_123 (ATerm), ATerm c_123 (ATerm))
{
  t = begin_scope_1(t, b_123);
  {
    ATerm p_8 (ATerm t)
    {
      t = end_scope_1(t, b_123);
      return(t);
    }
    t = restore_always_2(t, c_123, p_8);
  }
  return(t);
}
ATerm vars_to_consts_0 (ATerm t)
{
  ATerm q_8 (ATerm t)
  {
    t = term_q_43;
    return(t);
  }
  ATerm r_8 (ATerm t)
  {
    ATerm s_8 (ATerm t)
    {
      ATerm t_8 (ATerm t)
      {
        ATerm u_8 (ATerm t)
        {
          ATerm a_45 = t;
          int b_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_8 (ATerm t)
              {
                ATerm w_8 (ATerm t)
                {
                  t = try_1(t, DeclareVarToConst_0);
                  return(t);
                }
                t = map_1(t, w_8);
                return(t);
              }
              t = Constructors_1(t, v_8);
              ;
              LocalPopChoice(b_45);
            }
          else
            {
              t = a_45;
              {
                ATerm x_8 (ATerm t)
                {
                  ATerm y_8 (ATerm t)
                  {
                    t = try_1(t, DeclareVarToConst_0);
                    return(t);
                  }
                  t = map_1(t, y_8);
                  return(t);
                }
                t = Overlays_1(t, x_8);
              }
            }
          return(t);
        }
        t = try_1(t, u_8);
        return(t);
      }
      t = map_1(t, t_8);
      return(t);
    }
    t = Specification_1(t, s_8);
    t = alltd_1(t, VarToConst_0);
    return(t);
  }
  t = scope_2(t, q_8, r_8);
  return(t);
}
ATerm RulesToStrategies_0 (ATerm t)
{
  ATerm r_150 = NULL,s_150 = NULL;
  r_150 = t;
  q_150 :
  if(match_cons(r_150, sym_Rules_1))
    {
      s_150 = ATgetArgument(r_150, 0);
      t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(s_150));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm o_119 (ATerm))
{
  ATerm c_45 = t;
  int d_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(d_45);
    }
  else
    {
      t = c_45;
      {
        ATerm e_45 = t;
        int f_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_8 (ATerm t)
            {
              t = filter_1(t, o_119);
              return(t);
            }
            t = Cons_2(t, o_119, z_8);
            ;
            LocalPopChoice(f_45);
          }
        else
          {
            t = e_45;
            {
              ATerm x_150 = NULL,y_150 = NULL,z_150 = NULL;
              x_150 = t;
              w_150 :
              if(((ATgetType(x_150) == AT_LIST) && !(ATisEmpty(x_150))))
                {
                  y_150 = ATgetFirst((ATermList) x_150);
                  z_150 = (ATerm) ATgetNext((ATermList) x_150);
                  {
                    t = not_null(z_150);
                    t = filter_1(t, o_119);
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
ATerm GetConstructors_0 (ATerm t)
{
  ATerm h_151 = NULL,i_151 = NULL;
  h_151 = t;
  g_151 :
  if(match_cons(h_151, sym_Signature_1))
    {
      i_151 = ATgetArgument(h_151, 0);
      {
        ATerm k_151 = NULL;
        ATerm o_151 = NULL;
        t = not_null(i_151);
        {
          ATerm a_9 (ATerm t)
          {
            ATerm l_151 = NULL,m_151 = NULL;
            l_151 = t;
            e_151 :
            if(match_cons(l_151, sym_Constructors_1))
              {
                m_151 = ATgetArgument(l_151, 0);
                t = not_null(m_151);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = filter_1(t, a_9);
          {
            t = concat_0(t);
            {
              o_151 = t;
              if(((k_151 != NULL) && (k_151 != o_151)))
                _fail(o_151);
              else
                k_151 = o_151;
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Constructors_1, not_null(k_151));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InsertBSpec_0 (ATerm t)
{
  ATerm i_152 = NULL,j_152 = NULL,k_152 = NULL;
  i_152 = t;
  h_152 :
  if(match_cons(i_152, sym__2))
    {
      j_152 = ATgetArgument(i_152, 0);
      k_152 = ATgetArgument(i_152, 1);
      {
        ATerm n_152 = NULL,o_152 = NULL;
        ATerm p_152 = NULL;
        ATerm r_152 = NULL,s_152 = NULL,t_152 = NULL,u_152 = NULL,v_152 = NULL;
        t = not_null(j_152);
        {
          p_152 = t;
          {
            t = SSL_explode_term(not_null(p_152));
            {
              r_152 = t;
              v_151 :
              if(match_cons(r_152, sym__2))
                {
                  s_152 = ATgetArgument(r_152, 0);
                  t_152 = ATgetArgument(r_152, 1);
                  w_151 :
                  if(((ATgetType(t_152) == AT_LIST) && !(ATisEmpty(t_152))))
                    {
                      u_152 = ATgetFirst((ATermList) t_152);
                      v_152 = (ATerm) ATgetNext((ATermList) t_152);
                      x_151 :
                      if(((ATgetType(v_152) == AT_LIST) && ATisEmpty(v_152)))
                        {
                          {
                            if(((n_152 != NULL) && (n_152 != s_152)))
                              _fail(s_152);
                            else
                              n_152 = s_152;
                            if(((o_152 != NULL) && (o_152 != u_152)))
                              _fail(u_152);
                            else
                              o_152 = u_152;
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
        {
          t = not_null(k_152);
          {
            ATerm b_9 (ATerm t)
            {
              ATerm w_152 = NULL;
              ATerm y_152 = NULL,g_153 = NULL,i_153 = NULL,k_153 = NULL;
              w_152 = t;
              {
                ATerm g_45;
                g_45 = t;
                {
                  ATerm z_152 = NULL;
                  ATerm b_153 = NULL,c_153 = NULL,d_153 = NULL,e_153 = NULL,f_153 = NULL;
                  t = not_null(w_152);
                  {
                    z_152 = t;
                    {
                      t = SSL_explode_term(not_null(z_152));
                      {
                        b_153 = t;
                        b_152 :
                        if(match_cons(b_153, sym__2))
                          {
                            c_153 = ATgetArgument(b_153, 0);
                            d_153 = ATgetArgument(b_153, 1);
                            c_152 :
                            if(((ATgetType(d_153) == AT_LIST) && !(ATisEmpty(d_153))))
                              {
                                e_153 = ATgetFirst((ATermList) d_153);
                                f_153 = (ATerm) ATgetNext((ATermList) d_153);
                                d_152 :
                                if(((ATgetType(f_153) == AT_LIST) && ATisEmpty(f_153)))
                                  {
                                    {
                                      if(((n_152 != NULL) && (n_152 != c_153)))
                                        _fail(c_153);
                                      else
                                        n_152 = c_153;
                                      if(((y_152 != NULL) && (y_152 != e_153)))
                                        _fail(e_153);
                                      else
                                        y_152 = e_153;
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
                }
                t = g_45;
                {
                  ATerm h_45;
                  h_45 = t;
                  {
                    ATerm h_153 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_152), not_null(o_152));
                    {
                      t = conc_0(t);
                      {
                        h_153 = t;
                        if(((g_153 != NULL) && (g_153 != h_153)))
                          _fail(h_153);
                        else
                          g_153 = h_153;
                      }
                    }
                  }
                  t = h_45;
                  {
                    ATerm i_45;
                    i_45 = t;
                    {
                      ATerm j_153 = NULL;
                      t = (ATerm) ATinsert(ATempty, not_null(g_153));
                      {
                        j_153 = t;
                        if(((i_153 != NULL) && (i_153 != j_153)))
                          _fail(j_153);
                        else
                          i_153 = j_153;
                      }
                    }
                    t = i_45;
                    {
                      t = SSL_mkterm(not_null(n_152), not_null(i_153));
                      {
                        k_153 = t;
                        t = not_null(k_153);
                      }
                    }
                  }
                }
              }
              return(t);
            }
            t = fetch_1(t, b_9);
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
ATerm foldr_3 (ATerm t, ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm p_118 (ATerm))
{
  ATerm j_45 = t;
  int k_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_118(t);
      ;
      LocalPopChoice(k_45);
    }
  else
    {
      t = j_45;
      {
        ATerm z_153 = NULL,a_154 = NULL,b_154 = NULL;
        z_153 = t;
        y_153 :
        if(((ATgetType(z_153) == AT_LIST) && !(ATisEmpty(z_153))))
          {
            a_154 = ATgetFirst((ATermList) z_153);
            b_154 = (ATerm) ATgetNext((ATermList) z_153);
            {
              ATerm e_154 = NULL,g_154 = NULL;
              ATerm l_45;
              l_45 = t;
              {
                ATerm f_154 = NULL;
                t = not_null(a_154);
                {
                  t = p_118(t);
                  {
                    f_154 = t;
                    if(((e_154 != NULL) && (e_154 != f_154)))
                      _fail(f_154);
                    else
                      e_154 = f_154;
                  }
                }
              }
              t = l_45;
              {
                ATerm h_154 = NULL;
                t = not_null(b_154);
                {
                  t = foldr_3(t, n_118, o_118, p_118);
                  {
                    h_154 = t;
                    if(((g_154 != NULL) && (g_154 != h_154)))
                      _fail(h_154);
                    else
                      g_154 = h_154;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_154), not_null(g_154));
                  t = o_118(t);
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
ATerm CombineSections_0 (ATerm t)
{
  ATerm c_9 (ATerm t)
  {
    ATerm d_9 (ATerm t)
    {
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_45), term_n_45), term_m_45);
      return(t);
    }
    ATerm e_9 (ATerm t)
    {
      ATerm f_9 (ATerm t)
      {
        ATerm v_45 = t;
        int w_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = GetConstructors_0(t);
            ;
            LocalPopChoice(w_45);
          }
        else
          {
            t = v_45;
            t = RulesToStrategies_0(t);
          }
        return(t);
      }
      t = try_1(t, f_9);
      return(t);
    }
    t = foldr_3(t, d_9, InsertBSpec_0, e_9);
    return(t);
  }
  t = Specification_1(t, c_9);
  return(t);
}
ATerm normalize_spec_0 (ATerm t)
{
  t = CombineSections_0(t);
  {
    ATerm g_9 (ATerm t)
    {
      t = try_1(t, HL_0);
      return(t);
    }
    t = topdown_1(t, g_9);
    {
      t = vars_to_consts_0(t);
      {
        t = define_lrules_0(t);
        {
          t = LiftDynamicRules_0(t);
          {
            ATerm h_9 (ATerm t)
            {
              t = try_1(t, HL_0);
              return(t);
            }
            t = topdown_1(t, h_9);
            {
              ATerm i_9 (ATerm t)
              {
                ATerm j_9 (ATerm t)
                {
                  ATerm n_154 = NULL,o_154 = NULL;
                  n_154 = t;
                  m_154 :
                  if(match_cons(n_154, sym_Constructors_1))
                    {
                      o_154 = ATgetArgument(n_154, 0);
                      t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(o_154))));
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = fetch_1(t, j_9);
                return(t);
              }
              t = Specification_1(t, i_9);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm RemoveLeadingPrime_0 (ATerm t)
{
  ATerm w_154 = NULL;
  ATerm y_154 = NULL,z_154 = NULL;
  w_154 = t;
  {
    ATerm a_155 = NULL,b_155 = NULL,c_155 = NULL;
    t = not_null(w_154);
    {
      t = explode_string_0(t);
      {
        a_155 = t;
        u_154 :
        if(((ATgetType(a_155) == AT_LIST) && !(ATisEmpty(a_155))))
          {
            b_155 = ATgetFirst((ATermList) a_155);
            c_155 = (ATerm) ATgetNext((ATermList) a_155);
            v_154 :
            if(match_int(b_155, 39))
              {
                ATerm d_155 = NULL;
                if(((y_154 != NULL) && (y_154 != c_155)))
                  _fail(c_155);
                else
                  y_154 = c_155;
                {
                  t = not_null(y_154);
                  {
                    t = implode_string_0(t);
                    {
                      d_155 = t;
                      if(((z_154 != NULL) && (z_154 != d_155)))
                        _fail(d_155);
                      else
                        z_154 = d_155;
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
      }
    }
    t = not_null(z_154);
  }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm j_92 (ATerm), ATerm k_92 (ATerm))
{
  ATerm n_155 = NULL,o_155 = NULL,p_155 = NULL;
  n_155 = t;
  m_155 :
  if(match_cons(n_155, sym_Op_2))
    {
      o_155 = ATgetArgument(n_155, 0);
      p_155 = ATgetArgument(n_155, 1);
      {
        ATerm t_155 = NULL,v_155 = NULL;
        ATerm u_155 = NULL;
        t = SSLgetAnnotations(not_null(n_155));
        {
          u_155 = t;
          if(((t_155 != NULL) && (t_155 != u_155)))
            _fail(u_155);
          else
            t_155 = u_155;
        }
        {
          t = not_null(o_155);
          {
            ATerm x_155 = NULL;
            t = j_92(t);
            {
              v_155 = t;
              {
                t = not_null(p_155);
                {
                  ATerm z_155 = NULL;
                  t = k_92(t);
                  {
                    x_155 = t;
                    {
                      ATerm a_156 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(v_155), not_null(x_155)), not_null(t_155));
                      {
                        a_156 = t;
                        if(((z_155 != NULL) && (z_155 != a_156)))
                          _fail(a_156);
                        else
                          z_155 = a_156;
                      }
                      t = not_null(z_155);
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
ATerm OpDecl_2 (ATerm t, ATerm s_91 (ATerm), ATerm t_91 (ATerm))
{
  ATerm m_156 = NULL,n_156 = NULL,o_156 = NULL;
  m_156 = t;
  l_156 :
  if(match_cons(m_156, sym_OpDecl_2))
    {
      n_156 = ATgetArgument(m_156, 0);
      o_156 = ATgetArgument(m_156, 1);
      {
        ATerm s_156 = NULL,u_156 = NULL;
        ATerm t_156 = NULL;
        t = SSLgetAnnotations(not_null(m_156));
        {
          t_156 = t;
          if(((s_156 != NULL) && (s_156 != t_156)))
            _fail(t_156);
          else
            s_156 = t_156;
        }
        {
          t = not_null(n_156);
          {
            ATerm w_156 = NULL;
            t = s_91(t);
            {
              u_156 = t;
              {
                t = not_null(o_156);
                {
                  ATerm y_156 = NULL;
                  t = t_91(t);
                  {
                    w_156 = t;
                    {
                      ATerm z_156 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, not_null(u_156), not_null(w_156)), not_null(s_156));
                      {
                        z_156 = t;
                        if(((y_156 != NULL) && (y_156 != z_156)))
                          _fail(z_156);
                        else
                          y_156 = z_156;
                      }
                      t = not_null(y_156);
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
ATerm SVar_1 (ATerm t, ATerm m_95 (ATerm))
{
  ATerm k_157 = NULL,l_157 = NULL;
  k_157 = t;
  j_157 :
  if(match_cons(k_157, sym_SVar_1))
    {
      l_157 = ATgetArgument(k_157, 0);
      {
        ATerm o_157 = NULL,q_157 = NULL;
        ATerm p_157 = NULL;
        t = SSLgetAnnotations(not_null(k_157));
        {
          p_157 = t;
          if(((o_157 != NULL) && (o_157 != p_157)))
            _fail(p_157);
          else
            o_157 = p_157;
        }
        {
          t = not_null(l_157);
          {
            ATerm s_157 = NULL;
            t = m_95(t);
            {
              q_157 = t;
              {
                ATerm t_157 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(q_157)), not_null(o_157));
                {
                  t_157 = t;
                  if(((s_157 != NULL) && (s_157 != t_157)))
                    _fail(t_157);
                  else
                    s_157 = t_157;
                }
                t = not_null(s_157);
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
ATerm Var_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm l_158 = NULL,m_158 = NULL;
  l_158 = t;
  k_158 :
  if(match_cons(l_158, sym_Var_1))
    {
      m_158 = ATgetArgument(l_158, 0);
      {
        ATerm x_45 = t;
        int y_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_158 = NULL,r_158 = NULL;
            ATerm q_158 = NULL;
            t = SSLgetAnnotations(not_null(l_158));
            {
              q_158 = t;
              if(((p_158 != NULL) && (p_158 != q_158)))
                _fail(q_158);
              else
                p_158 = q_158;
            }
            {
              t = not_null(m_158);
              {
                ATerm t_158 = NULL;
                t = p_0(t);
                {
                  r_158 = t;
                  {
                    ATerm u_158 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(r_158)), not_null(p_158));
                    {
                      u_158 = t;
                      if(((t_158 != NULL) && (t_158 != u_158)))
                        _fail(u_158);
                      else
                        t_158 = u_158;
                    }
                    t = not_null(t_158);
                  }
                }
              }
            }
            ;
            LocalPopChoice(y_45);
          }
        else
          {
            t = x_45;
            {
              ATerm f_46 = t;
              int g_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_158 = NULL,z_158 = NULL;
                  ATerm y_158 = NULL;
                  t = SSLgetAnnotations(not_null(l_158));
                  {
                    y_158 = t;
                    if(((x_158 != NULL) && (x_158 != y_158)))
                      _fail(y_158);
                    else
                      x_158 = y_158;
                  }
                  {
                    t = not_null(m_158);
                    {
                      ATerm b_159 = NULL;
                      t = p_0(t);
                      {
                        z_158 = t;
                        {
                          ATerm c_159 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(z_158)), not_null(x_158));
                          {
                            c_159 = t;
                            if(((b_159 != NULL) && (b_159 != c_159)))
                              _fail(c_159);
                            else
                              b_159 = c_159;
                          }
                          t = not_null(b_159);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(g_46);
                }
              else
                {
                  t = f_46;
                  {
                    ATerm f_159 = NULL,h_159 = NULL;
                    ATerm g_159 = NULL;
                    t = SSLgetAnnotations(not_null(l_158));
                    {
                      g_159 = t;
                      if(((f_159 != NULL) && (f_159 != g_159)))
                        _fail(g_159);
                      else
                        f_159 = g_159;
                    }
                    {
                      t = not_null(m_158);
                      {
                        ATerm j_159 = NULL;
                        t = p_0(t);
                        {
                          h_159 = t;
                          {
                            ATerm k_159 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(h_159)), not_null(f_159));
                            {
                              k_159 = t;
                              if(((j_159 != NULL) && (j_159 != k_159)))
                                _fail(k_159);
                              else
                                j_159 = k_159;
                            }
                            t = not_null(j_159);
                          }
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
ATerm VarDec_2 (ATerm t, ATerm y_97 (ATerm), ATerm z_97 (ATerm))
{
  ATerm d_160 = NULL,e_160 = NULL,f_160 = NULL;
  d_160 = t;
  c_160 :
  if(match_cons(d_160, sym_VarDec_2))
    {
      e_160 = ATgetArgument(d_160, 0);
      f_160 = ATgetArgument(d_160, 1);
      {
        ATerm j_160 = NULL,l_160 = NULL;
        ATerm k_160 = NULL;
        t = SSLgetAnnotations(not_null(d_160));
        {
          k_160 = t;
          if(((j_160 != NULL) && (j_160 != k_160)))
            _fail(k_160);
          else
            j_160 = k_160;
        }
        {
          t = not_null(e_160);
          {
            ATerm n_160 = NULL;
            t = y_97(t);
            {
              l_160 = t;
              {
                t = not_null(f_160);
                {
                  ATerm p_160 = NULL;
                  t = z_97(t);
                  {
                    n_160 = t;
                    {
                      ATerm q_160 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(l_160), not_null(n_160)), not_null(j_160));
                      {
                        q_160 = t;
                        if(((p_160 != NULL) && (p_160 != q_160)))
                          _fail(q_160);
                        else
                          p_160 = q_160;
                      }
                      t = not_null(p_160);
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
ATerm SDef_3 (ATerm t, ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm))
{
  ATerm d_161 = NULL,e_161 = NULL,f_161 = NULL,g_161 = NULL;
  d_161 = t;
  c_161 :
  if(match_cons(d_161, sym_SDef_3))
    {
      e_161 = ATgetArgument(d_161, 0);
      f_161 = ATgetArgument(d_161, 1);
      g_161 = ATgetArgument(d_161, 2);
      {
        ATerm l_161 = NULL,n_161 = NULL;
        ATerm m_161 = NULL;
        t = SSLgetAnnotations(not_null(d_161));
        {
          m_161 = t;
          if(((l_161 != NULL) && (l_161 != m_161)))
            _fail(m_161);
          else
            l_161 = m_161;
        }
        {
          t = not_null(e_161);
          {
            ATerm p_161 = NULL;
            t = c_98(t);
            {
              n_161 = t;
              {
                t = not_null(f_161);
                {
                  ATerm r_161 = NULL;
                  t = d_98(t);
                  {
                    p_161 = t;
                    {
                      t = not_null(g_161);
                      {
                        ATerm t_161 = NULL;
                        t = e_98(t);
                        {
                          r_161 = t;
                          {
                            ATerm u_161 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(n_161), not_null(p_161), not_null(r_161)), not_null(l_161));
                            {
                              u_161 = t;
                              if(((t_161 != NULL) && (t_161 != u_161)))
                                _fail(u_161);
                              else
                                t_161 = u_161;
                            }
                            t = not_null(t_161);
                          }
                        }
                      }
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
ATerm SDefT_4 (ATerm t, ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm h_98 (ATerm), ATerm i_98 (ATerm))
{
  ATerm j_162 = NULL,k_162 = NULL,l_162 = NULL,m_162 = NULL,n_162 = NULL;
  j_162 = t;
  i_162 :
  if(match_cons(j_162, sym_SDefT_4))
    {
      k_162 = ATgetArgument(j_162, 0);
      l_162 = ATgetArgument(j_162, 1);
      m_162 = ATgetArgument(j_162, 2);
      n_162 = ATgetArgument(j_162, 3);
      {
        ATerm t_162 = NULL,v_162 = NULL;
        ATerm u_162 = NULL;
        t = SSLgetAnnotations(not_null(j_162));
        {
          u_162 = t;
          if(((t_162 != NULL) && (t_162 != u_162)))
            _fail(u_162);
          else
            t_162 = u_162;
        }
        {
          t = not_null(k_162);
          {
            ATerm x_162 = NULL;
            t = f_98(t);
            {
              v_162 = t;
              {
                t = not_null(l_162);
                {
                  ATerm z_162 = NULL;
                  t = g_98(t);
                  {
                    x_162 = t;
                    {
                      t = not_null(m_162);
                      {
                        ATerm b_163 = NULL;
                        t = h_98(t);
                        {
                          z_162 = t;
                          {
                            t = not_null(n_162);
                            {
                              ATerm d_163 = NULL;
                              t = i_98(t);
                              {
                                b_163 = t;
                                {
                                  ATerm e_163 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(v_162), not_null(x_162), not_null(z_162), not_null(b_163)), not_null(t_162));
                                  {
                                    e_163 = t;
                                    if(((d_163 != NULL) && (d_163 != e_163)))
                                      _fail(e_163);
                                    else
                                      d_163 = e_163;
                                  }
                                  t = not_null(d_163);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm RDef_3 (ATerm t, ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm k_94 (ATerm))
{
  ATerm t_163 = NULL,u_163 = NULL,v_163 = NULL,w_163 = NULL;
  t_163 = t;
  s_163 :
  if(match_cons(t_163, sym_RDef_3))
    {
      u_163 = ATgetArgument(t_163, 0);
      v_163 = ATgetArgument(t_163, 1);
      w_163 = ATgetArgument(t_163, 2);
      {
        ATerm b_164 = NULL,d_164 = NULL;
        ATerm c_164 = NULL;
        t = SSLgetAnnotations(not_null(t_163));
        {
          c_164 = t;
          if(((b_164 != NULL) && (b_164 != c_164)))
            _fail(c_164);
          else
            b_164 = c_164;
        }
        {
          t = not_null(u_163);
          {
            ATerm f_164 = NULL;
            t = i_94(t);
            {
              d_164 = t;
              {
                t = not_null(v_163);
                {
                  ATerm h_164 = NULL;
                  t = j_94(t);
                  {
                    f_164 = t;
                    {
                      t = not_null(w_163);
                      {
                        ATerm j_164 = NULL;
                        t = k_94(t);
                        {
                          h_164 = t;
                          {
                            ATerm k_164 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, not_null(d_164), not_null(f_164), not_null(h_164)), not_null(b_164));
                            {
                              k_164 = t;
                              if(((j_164 != NULL) && (j_164 != k_164)))
                                _fail(k_164);
                              else
                                j_164 = k_164;
                            }
                            t = not_null(j_164);
                          }
                        }
                      }
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
ATerm RDefT_4 (ATerm t, ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm o_94 (ATerm))
{
  ATerm z_164 = NULL,a_165 = NULL,b_165 = NULL,c_165 = NULL,d_165 = NULL;
  z_164 = t;
  y_164 :
  if(match_cons(z_164, sym_RDefT_4))
    {
      a_165 = ATgetArgument(z_164, 0);
      b_165 = ATgetArgument(z_164, 1);
      c_165 = ATgetArgument(z_164, 2);
      d_165 = ATgetArgument(z_164, 3);
      {
        ATerm j_165 = NULL,l_165 = NULL;
        ATerm k_165 = NULL;
        t = SSLgetAnnotations(not_null(z_164));
        {
          k_165 = t;
          if(((j_165 != NULL) && (j_165 != k_165)))
            _fail(k_165);
          else
            j_165 = k_165;
        }
        {
          t = not_null(a_165);
          {
            ATerm n_165 = NULL;
            t = l_94(t);
            {
              l_165 = t;
              {
                t = not_null(b_165);
                {
                  ATerm p_165 = NULL;
                  t = m_94(t);
                  {
                    n_165 = t;
                    {
                      t = not_null(c_165);
                      {
                        ATerm r_165 = NULL;
                        t = n_94(t);
                        {
                          p_165 = t;
                          {
                            t = not_null(d_165);
                            {
                              ATerm t_165 = NULL;
                              t = o_94(t);
                              {
                                r_165 = t;
                                {
                                  ATerm u_165 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, not_null(l_165), not_null(n_165), not_null(p_165), not_null(r_165)), not_null(j_165));
                                  {
                                    u_165 = t;
                                    if(((t_165 != NULL) && (t_165 != u_165)))
                                      _fail(u_165);
                                    else
                                      t_165 = u_165;
                                  }
                                  t = not_null(t_165);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm DefaultVarDec_1 (ATerm t, ATerm x_97 (ATerm))
{
  ATerm h_166 = NULL,i_166 = NULL;
  h_166 = t;
  g_166 :
  if(match_cons(h_166, sym_DefaultVarDec_1))
    {
      i_166 = ATgetArgument(h_166, 0);
      {
        ATerm l_166 = NULL,n_166 = NULL;
        ATerm m_166 = NULL;
        t = SSLgetAnnotations(not_null(h_166));
        {
          m_166 = t;
          if(((l_166 != NULL) && (l_166 != m_166)))
            _fail(m_166);
          else
            l_166 = m_166;
        }
        {
          t = not_null(i_166);
          {
            ATerm p_166 = NULL;
            t = x_97(t);
            {
              n_166 = t;
              {
                ATerm q_166 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, not_null(n_166)), not_null(l_166));
                {
                  q_166 = t;
                  if(((p_166 != NULL) && (p_166 != q_166)))
                    _fail(q_166);
                  else
                    p_166 = q_166;
                }
                t = not_null(p_166);
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
ATerm string_to_real_0 (ATerm t)
{
  ATerm w_166 = NULL;
  w_166 = t;
  t = SSL_string_to_real(not_null(w_166));
  return(t);
}
ATerm DesugarOnce_0 (ATerm t)
{
  ATerm h_46 = t;
  int i_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_167 = NULL,g_167 = NULL,h_167 = NULL,i_167 = NULL;
      f_167 = t;
      e_167 :
      if(match_cons(f_167, sym_Real_1))
        {
          g_167 = ATgetArgument(f_167, 0);
          {
            ATerm k_167 = NULL;
            ATerm l_167 = NULL;
            t = not_null(g_167);
            {
              t = string_to_real_0(t);
              {
                l_167 = t;
                if(((k_167 != NULL) && (k_167 != l_167)))
                  _fail(l_167);
                else
                  k_167 = l_167;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Real_1, not_null(k_167));
          }
        }
      else
        {
          if(match_cons(f_167, sym_Int_1))
            {
              g_167 = ATgetArgument(f_167, 0);
              {
                ATerm n_167 = NULL;
                ATerm o_167 = NULL;
                t = not_null(g_167);
                {
                  t = string_to_int_0(t);
                  {
                    o_167 = t;
                    if(((n_167 != NULL) && (n_167 != o_167)))
                      _fail(o_167);
                    else
                      n_167 = o_167;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(n_167));
              }
            }
          else
            {
              if(match_cons(f_167, sym_Con_3))
                {
                  g_167 = ATgetArgument(f_167, 0);
                  h_167 = ATgetArgument(f_167, 1);
                  i_167 = ATgetArgument(f_167, 2);
                  {
                    t = not_null(i_167);
                    t = is_string_0(t);
                    t = (ATerm) ATmakeAppl(sym_Con_3, not_null(g_167), not_null(h_167), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_167)), (ATerm) ATempty));
                  }
                }
              else
                {
                  _fail(t);
                }
            }
        }
      ;
      LocalPopChoice(i_46);
    }
  else
    {
      t = h_46;
      {
        ATerm j_46 = t;
        int k_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1(t, RemoveLeadingPrime_0);
            ;
            LocalPopChoice(k_46);
          }
        else
          {
            t = j_46;
            {
              ATerm l_46 = t;
              int m_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4(t, RemoveLeadingPrime_0, _id, _id, _id);
                  ;
                  LocalPopChoice(m_46);
                }
              else
                {
                  t = l_46;
                  {
                    ATerm p_46 = t;
                    int q_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = RDef_3(t, RemoveLeadingPrime_0, _id, _id);
                        ;
                        LocalPopChoice(q_46);
                      }
                    else
                      {
                        t = p_46;
                        {
                          ATerm r_46 = t;
                          int s_46 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SDefT_4(t, RemoveLeadingPrime_0, _id, _id, _id);
                              ;
                              LocalPopChoice(s_46);
                            }
                          else
                            {
                              t = r_46;
                              {
                                ATerm t_46 = t;
                                int u_46 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = SDef_3(t, RemoveLeadingPrime_0, _id, _id);
                                    ;
                                    LocalPopChoice(u_46);
                                  }
                                else
                                  {
                                    t = t_46;
                                    {
                                      ATerm v_46 = t;
                                      int w_46 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = VarDec_2(t, RemoveLeadingPrime_0, _id);
                                          ;
                                          LocalPopChoice(w_46);
                                        }
                                      else
                                        {
                                          t = v_46;
                                          {
                                            ATerm x_46 = t;
                                            int y_46 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Var_1(t, RemoveLeadingPrime_0);
                                                ;
                                                LocalPopChoice(y_46);
                                              }
                                            else
                                              {
                                                t = x_46;
                                                {
                                                  ATerm z_46 = t;
                                                  int a_47 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = SVar_1(t, RemoveLeadingPrime_0);
                                                      ;
                                                      LocalPopChoice(a_47);
                                                    }
                                                  else
                                                    {
                                                      t = z_46;
                                                      {
                                                        ATerm h_47 = t;
                                                        int i_47 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = OpDecl_2(t, RemoveLeadingPrime_0, _id);
                                                            ;
                                                            LocalPopChoice(i_47);
                                                          }
                                                        else
                                                          {
                                                            t = h_47;
                                                            t = Op_2(t, RemoveLeadingPrime_0, _id);
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm at_last_1 (ATerm t, ATerm l_113 (ATerm))
{
  ATerm x_167 (ATerm t)
  {
    ATerm j_47 = t;
    int k_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = l_113(t);
        ;
        LocalPopChoice(k_47);
      }
    else
      {
        t = j_47;
        t = Cons_2(t, _id, x_167);
      }
    return(t);
  }
  t = x_167(t);
  return(t);
}
ATerm init_0 (ATerm t)
{
  t = at_last_1(t, Tl_0);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm a_168 = NULL,b_168 = NULL,c_168 = NULL;
  a_168 = t;
  z_167 :
  if(((ATgetType(a_168) == AT_LIST) && !(ATisEmpty(a_168))))
    {
      b_168 = ATgetFirst((ATermList) a_168);
      c_168 = (ATerm) ATgetNext((ATermList) a_168);
      t = not_null(c_168);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm i_168 = NULL,j_168 = NULL,k_168 = NULL;
  i_168 = t;
  g_168 :
  if(((ATgetType(i_168) == AT_LIST) && !(ATisEmpty(i_168))))
    {
      j_168 = ATgetFirst((ATermList) i_168);
      k_168 = (ATerm) ATgetNext((ATermList) i_168);
      h_168 :
      if(((ATgetType(k_168) == AT_LIST) && ATisEmpty(k_168)))
        {
          t = not_null(j_168);
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
ATerm last_0 (ATerm t)
{
  ATerm r_47 = t;
  int s_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(s_47);
    }
  else
    {
      t = r_47;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm q_168 = NULL,r_168 = NULL,s_168 = NULL;
  q_168 = t;
  p_168 :
  if(((ATgetType(q_168) == AT_LIST) && !(ATisEmpty(q_168))))
    {
      r_168 = ATgetFirst((ATermList) q_168);
      s_168 = (ATerm) ATgetNext((ATermList) q_168);
      t = not_null(r_168);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unquote_chars_1 (ATerm t, ATerm m_121 (ATerm))
{
  ATerm t_47;
  t_47 = t;
  {
    t = Hd_0(t);
    t = m_121(t);
  }
  t = t_47;
  {
    ATerm w_47;
    w_47 = t;
    {
      t = last_0(t);
      t = m_121(t);
    }
    t = w_47;
    {
      t = Tl_0(t);
      t = init_0(t);
    }
  }
  return(t);
}
ATerm un_double_quote_chars_0 (ATerm t)
{
  ATerm k_9 (ATerm t)
  {
    ATerm w_168 = NULL;
    w_168 = t;
    v_168 :
    if(!(match_int(w_168, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  t = unquote_chars_1(t, k_9);
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm x_121 (ATerm))
{
  t = explode_string_0(t);
  {
    t = x_121(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm un_double_quote_0 (ATerm t)
{
  t = string_as_chars_1(t, un_double_quote_chars_0);
  return(t);
}
ATerm DesugarCharGeneric_0 (ATerm t)
{
  ATerm e_169 = NULL,f_169 = NULL,g_169 = NULL,h_169 = NULL,i_169 = NULL,j_169 = NULL,k_169 = NULL;
  e_169 = t;
  y_168 :
  if(((ATgetType(e_169) == AT_LIST) && !(ATisEmpty(e_169))))
    {
      f_169 = ATgetFirst((ATermList) e_169);
      g_169 = (ATerm) ATgetNext((ATermList) e_169);
      z_168 :
      if(match_int(f_169, 39))
        {
          a_169 :
          if(((ATgetType(g_169) == AT_LIST) && !(ATisEmpty(g_169))))
            {
              h_169 = ATgetFirst((ATermList) g_169);
              i_169 = (ATerm) ATgetNext((ATermList) g_169);
              b_169 :
              if(((ATgetType(i_169) == AT_LIST) && !(ATisEmpty(i_169))))
                {
                  j_169 = ATgetFirst((ATermList) i_169);
                  k_169 = (ATerm) ATgetNext((ATermList) i_169);
                  c_169 :
                  if(match_int(j_169, 39))
                    {
                      d_169 :
                      if(((ATgetType(k_169) == AT_LIST) && ATisEmpty(k_169)))
                        {
                          t = not_null(h_169);
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
ATerm DesugarChar_0 (ATerm t)
{
  ATerm u_169 = NULL;
  u_169 = t;
  t_169 :
  if(match_string(u_169, "'\\ '"))
    {
      t = term_x_47;
    }
  else
    {
      if(match_string(u_169, "'\\r'"))
        {
          t = term_y_47;
        }
      else
        {
          if(match_string(u_169, "'\\t'"))
            {
              t = term_z_47;
            }
          else
            {
              if(match_string(u_169, "'\\n'"))
                {
                  t = term_a_48;
                }
              else
                {
                  if(match_string(u_169, "'\\''"))
                    {
                      t = term_b_48;
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
ATerm Snd_0 (ATerm t)
{
  ATerm i_170 = NULL;
  ATerm k_170 = NULL,l_170 = NULL,m_170 = NULL;
  i_170 = t;
  {
    ATerm n_170 = NULL;
    ATerm p_170 = NULL,q_170 = NULL,r_170 = NULL,s_170 = NULL,t_170 = NULL,u_170 = NULL,v_170 = NULL;
    t = not_null(i_170);
    {
      n_170 = t;
      {
        t = SSL_explode_term(not_null(n_170));
        {
          p_170 = t;
          e_170 :
          if(match_cons(p_170, sym__2))
            {
              q_170 = ATgetArgument(p_170, 0);
              r_170 = ATgetArgument(p_170, 1);
              f_170 :
              if(match_string(q_170, ""))
                {
                  g_170 :
                  if(((ATgetType(r_170) == AT_LIST) && !(ATisEmpty(r_170))))
                    {
                      s_170 = ATgetFirst((ATermList) r_170);
                      t_170 = (ATerm) ATgetNext((ATermList) r_170);
                      h_170 :
                      if(((ATgetType(t_170) == AT_LIST) && !(ATisEmpty(t_170))))
                        {
                          u_170 = ATgetFirst((ATermList) t_170);
                          v_170 = (ATerm) ATgetNext((ATermList) t_170);
                          {
                            if(((k_170 != NULL) && (k_170 != s_170)))
                              _fail(s_170);
                            else
                              k_170 = s_170;
                            {
                              if(((m_170 != NULL) && (m_170 != u_170)))
                                _fail(u_170);
                              else
                                m_170 = u_170;
                              if(((l_170 != NULL) && (l_170 != v_170)))
                                _fail(v_170);
                              else
                                l_170 = v_170;
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
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(m_170);
  }
  return(t);
}
ATerm Desugar_0 (ATerm t)
{
  ATerm n_173 = NULL,q_173 = NULL,r_173 = NULL,s_173 = NULL,t_173 = NULL,u_173 = NULL,v_173 = NULL,w_173 = NULL;
  ATerm a_178 (ATerm t)
  {
    t = not_null(v_173);
    {
      ATerm c_48 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, Nil_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = c_48;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_t_15, not_null(v_173));
    return(t);
  }
  ATerm b_178 (ATerm t)
  {
    t = not_null(q_173);
    return(t);
  }
  ATerm c_178 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, not_null(v_173)));
    return(t);
  }
  ATerm d_178 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(v_173)));
    return(t);
  }
  ATerm e_178 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(v_173)));
    return(t);
  }
  ATerm f_178 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(v_173)));
    return(t);
  }
  ATerm h_178 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_173)), (ATerm) ATempty);
    return(t);
  }
  ATerm i_178 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_173)), not_null(w_173));
    return(t);
  }
  ATerm j_178 (ATerm t)
  {
    t = not_null(v_173);
    {
      ATerm l_9 (ATerm t)
      {
        t = not_null(w_173);
        return(t);
      }
      ATerm m_9 (ATerm t)
      {
        ATerm p_175 = NULL,q_175 = NULL,r_175 = NULL;
        p_175 = t;
        c_173 :
        if(match_cons(p_175, sym__2))
          {
            q_175 = ATgetArgument(p_175, 0);
            r_175 = ATgetArgument(p_175, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_f_48, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_175)), not_null(q_175)));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = foldr_2(t, l_9, m_9);
    }
    return(t);
  }
  ATerm k_178 (ATerm t)
  {
    t = not_null(v_173);
    {
      ATerm n_9 (ATerm t)
      {
        t = term_h_48;
        return(t);
      }
      ATerm o_9 (ATerm t)
      {
        ATerm v_175 = NULL,w_175 = NULL,x_175 = NULL;
        v_175 = t;
        e_173 :
        if(match_cons(v_175, sym__2))
          {
            w_175 = ATgetArgument(v_175, 0);
            x_175 = ATgetArgument(v_175, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_f_48, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_175)), not_null(w_175)));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = foldr_2(t, n_9, o_9);
    }
    return(t);
  }
  ATerm l_178 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_i_48, (ATerm) ATinsert(CheckATermList(not_null(w_173)), not_null(v_173)));
    return(t);
  }
  ATerm m_178 (ATerm t)
  {
    t = not_null(v_173);
    {
      ATerm j_48 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, Nil_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = j_48;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_i_48, not_null(v_173));
    return(t);
  }
  ATerm n_178 (ATerm t)
  {
    t = not_null(q_173);
    return(t);
  }
  ATerm o_178 (ATerm t)
  {
    t = term_k_48;
    return(t);
  }
  ATerm p_178 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_b_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_173)), not_null(v_173)));
    return(t);
  }
  ATerm q_178 (ATerm t)
  {
    t = not_null(v_173);
    return(t);
  }
  ATerm r_178 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_StratRule_3, not_null(v_173), not_null(w_173), term_r_17);
    return(t);
  }
  ATerm s_178 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_173), not_null(w_173), term_r_17);
    return(t);
  }
  ATerm t_178 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(v_173), (ATerm)ATempty, not_null(w_173));
    return(t);
  }
  ATerm u_178 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(w_173), not_null(v_173));
    return(t);
  }
  ATerm v_178 (ATerm t)
  {
    ATerm r_176 = NULL;
    ATerm s_176 = NULL;
    t = not_null(v_173);
    {
      t = try_1(t, un_double_quote_0);
      {
        s_176 = t;
        if(((r_176 != NULL) && (r_176 != s_176)))
          _fail(s_176);
        else
          r_176 = s_176;
      }
    }
    t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(r_176), (ATerm)ATempty, not_null(w_173));
    return(t);
  }
  ATerm w_178 (ATerm t)
  {
    ATerm u_176 = NULL;
    ATerm v_176 = NULL;
    t = not_null(v_173);
    {
      t = try_1(t, un_double_quote_0);
      {
        v_176 = t;
        if(((u_176 != NULL) && (u_176 != v_176)))
          _fail(v_176);
        else
          u_176 = v_176;
      }
    }
    t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(u_176), (ATerm)ATempty, (ATerm) ATempty);
    return(t);
  }
  ATerm x_178 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(v_173), not_null(w_173), (ATerm) ATempty);
    return(t);
  }
  ATerm y_178 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(v_173), (ATerm)ATempty, (ATerm) ATempty);
    return(t);
  }
  ATerm z_178 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(v_173), not_null(w_173), (ATerm)ATempty, not_null(t_173));
    return(t);
  }
  ATerm a_179 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(v_173), (ATerm)ATempty, (ATerm)ATempty, not_null(w_173));
    return(t);
  }
  ATerm b_179 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SRDefT_4, not_null(v_173), not_null(w_173), (ATerm)ATempty, not_null(t_173));
    return(t);
  }
  ATerm c_179 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SRDefT_4, not_null(v_173), (ATerm)ATempty, (ATerm)ATempty, not_null(w_173));
    return(t);
  }
  ATerm d_179 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(v_173), not_null(w_173), (ATerm)ATempty, not_null(t_173));
    return(t);
  }
  ATerm e_179 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(v_173), (ATerm)ATempty, (ATerm)ATempty, not_null(w_173));
    return(t);
  }
  ATerm f_179 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(w_173));
    return(t);
  }
  u_173 = t;
  h_173 :
  if(match_cons(u_173, sym_Anno_2))
    {
      v_173 = ATgetArgument(u_173, 0);
      w_173 = ATgetArgument(u_173, 1);
      {
        ATerm z_173 = NULL;
        ATerm e_174 = NULL;
        t = not_null(w_173);
        {
          ATerm p_9 (ATerm t)
          {
            t = term_p_38;
            return(t);
          }
          ATerm q_9 (ATerm t)
          {
            ATerm a_174 = NULL,c_174 = NULL;
            ATerm m_48;
            m_48 = t;
            {
              ATerm b_174 = NULL;
              t = Fst_0(t);
              {
                b_174 = t;
                if(((a_174 != NULL) && (a_174 != b_174)))
                  _fail(b_174);
                else
                  a_174 = b_174;
              }
            }
            t = m_48;
            {
              ATerm d_174 = NULL;
              t = Snd_0(t);
              {
                d_174 = t;
                if(((c_174 != NULL) && (c_174 != d_174)))
                  _fail(d_174);
                else
                  c_174 = d_174;
              }
              t = (ATerm) ATmakeAppl(sym_Op_2, term_e_48, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_174)), not_null(a_174)));
            }
            return(t);
          }
          t = foldr_2(t, p_9, q_9);
          {
            e_174 = t;
            if(((z_173 != NULL) && (z_173 != e_174)))
              _fail(e_174);
            else
              z_173 = e_174;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Anno_2, not_null(v_173), not_null(z_173));
      }
    }
  else
    {
      if(match_cons(u_173, sym_SortNoArgs_1))
        {
          v_173 = ATgetArgument(u_173, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, not_null(v_173), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(u_173, sym_Char_1))
            {
              v_173 = ATgetArgument(u_173, 0);
              {
                ATerm h_174 = NULL;
                ATerm i_174 = NULL;
                t = not_null(v_173);
                {
                  ATerm u_48 = t;
                  int v_48 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = DesugarChar_0(t);
                      ;
                      LocalPopChoice(v_48);
                    }
                  else
                    {
                      t = u_48;
                      {
                        t = explode_string_0(t);
                        t = DesugarCharGeneric_0(t);
                      }
                    }
                  {
                    i_174 = t;
                    if(((h_174 != NULL) && (h_174 != i_174)))
                      _fail(i_174);
                    else
                      h_174 = i_174;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(h_174));
              }
            }
          else
            {
              if(match_cons(u_173, sym_Con4_4))
                {
                  v_173 = ATgetArgument(u_173, 0);
                  w_173 = ATgetArgument(u_173, 1);
                  t_173 = ATgetArgument(u_173, 2);
                  n_173 = ATgetArgument(u_173, 3);
                  t = (ATerm) ATmakeAppl(sym_Con_3, not_null(v_173), not_null(t_173), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_173)), (ATerm) ATempty));
                }
              else
                {
                  if(match_cons(u_173, sym_Con3_3))
                    {
                      v_173 = ATgetArgument(u_173, 0);
                      w_173 = ATgetArgument(u_173, 1);
                      t_173 = ATgetArgument(u_173, 2);
                      t = (ATerm) ATmakeAppl(sym_Con_3, not_null(v_173), not_null(t_173), term_j_49);
                    }
                  else
                    {
                      if(match_cons(u_173, sym_Con1_2))
                        {
                          v_173 = ATgetArgument(u_173, 0);
                          w_173 = ATgetArgument(u_173, 1);
                          t = (ATerm) ATmakeAppl(sym_Con_3, not_null(v_173), not_null(w_173), term_j_49);
                        }
                      else
                        {
                          if(match_cons(u_173, sym_ListTail_2))
                            {
                              v_173 = ATgetArgument(u_173, 0);
                              w_173 = ATgetArgument(u_173, 1);
                              {
                                t = not_null(v_173);
                                {
                                  ATerm r_9 (ATerm t)
                                  {
                                    t = not_null(w_173);
                                    return(t);
                                  }
                                  ATerm s_9 (ATerm t)
                                  {
                                    ATerm t_174 = NULL,u_174 = NULL,v_174 = NULL;
                                    t_174 = t;
                                    x_172 :
                                    if(match_cons(t_174, sym__2))
                                      {
                                        u_174 = ATgetArgument(t_174, 0);
                                        v_174 = ATgetArgument(t_174, 1);
                                        t = (ATerm) ATmakeAppl(sym_Op_2, term_e_48, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_174)), not_null(u_174)));
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                    return(t);
                                  }
                                  t = foldr_2(t, r_9, s_9);
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(u_173, sym_List_1))
                                {
                                  v_173 = ATgetArgument(u_173, 0);
                                  {
                                    t = not_null(v_173);
                                    {
                                      ATerm t_9 (ATerm t)
                                      {
                                        t = term_p_38;
                                        return(t);
                                      }
                                      ATerm u_9 (ATerm t)
                                      {
                                        ATerm z_174 = NULL,a_175 = NULL,b_175 = NULL;
                                        z_174 = t;
                                        z_172 :
                                        if(match_cons(z_174, sym__2))
                                          {
                                            a_175 = ATgetArgument(z_174, 0);
                                            b_175 = ATgetArgument(z_174, 1);
                                            t = (ATerm) ATmakeAppl(sym_Op_2, term_e_48, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_175)), not_null(a_175)));
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      t = foldr_2(t, t_9, u_9);
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(u_173, sym_Tuple_1))
                                    {
                                      v_173 = ATgetArgument(u_173, 0);
                                      i_173 :
                                      if(((ATgetType(v_173) == AT_LIST) && !(ATisEmpty(v_173))))
                                        {
                                          q_173 = ATgetFirst((ATermList) v_173);
                                          r_173 = (ATerm) ATgetNext((ATermList) v_173);
                                          j_173 :
                                          if(((ATgetType(r_173) == AT_LIST) && ATisEmpty(r_173)))
                                            {
                                              {
                                                ATerm k_49 = t;
                                                int l_49 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = a_178(t);
                                                    ;
                                                    LocalPopChoice(l_49);
                                                  }
                                                else
                                                  {
                                                    t = k_49;
                                                    t = b_178(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              t = a_178(t);
                                            }
                                        }
                                      else
                                        {
                                          t = a_178(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(u_173, sym_CharCong_1))
                                        {
                                          v_173 = ATgetArgument(u_173, 0);
                                          t = c_178(t);
                                        }
                                      else
                                        {
                                          if(match_cons(u_173, sym_RealCong_1))
                                            {
                                              v_173 = ATgetArgument(u_173, 0);
                                              t = d_178(t);
                                            }
                                          else
                                            {
                                              if(match_cons(u_173, sym_IntCong_1))
                                                {
                                                  v_173 = ATgetArgument(u_173, 0);
                                                  t = e_178(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(u_173, sym_StrCong_1))
                                                    {
                                                      v_173 = ATgetArgument(u_173, 0);
                                                      t = f_178(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(u_173, sym_ModCongNoArgs_1))
                                                        {
                                                          v_173 = ATgetArgument(u_173, 0);
                                                          t = h_178(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(u_173, sym_ModCong_2))
                                                            {
                                                              v_173 = ATgetArgument(u_173, 0);
                                                              w_173 = ATgetArgument(u_173, 1);
                                                              t = i_178(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(u_173, sym_ListCong_2))
                                                                {
                                                                  v_173 = ATgetArgument(u_173, 0);
                                                                  w_173 = ATgetArgument(u_173, 1);
                                                                  t = j_178(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(u_173, sym_ListCongNoTail_1))
                                                                    {
                                                                      v_173 = ATgetArgument(u_173, 0);
                                                                      t = k_178(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(u_173, sym_TupleCong_2))
                                                                        {
                                                                          v_173 = ATgetArgument(u_173, 0);
                                                                          w_173 = ATgetArgument(u_173, 1);
                                                                          t = l_178(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(u_173, sym_TupleCong_1))
                                                                            {
                                                                              v_173 = ATgetArgument(u_173, 0);
                                                                              k_173 :
                                                                              if(((ATgetType(v_173) == AT_LIST) && !(ATisEmpty(v_173))))
                                                                                {
                                                                                  q_173 = ATgetFirst((ATermList) v_173);
                                                                                  r_173 = (ATerm) ATgetNext((ATermList) v_173);
                                                                                  l_173 :
                                                                                  if(((ATgetType(r_173) == AT_LIST) && ATisEmpty(r_173)))
                                                                                    {
                                                                                      {
                                                                                        ATerm m_49 = t;
                                                                                        int n_49 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = m_178(t);
                                                                                            ;
                                                                                            LocalPopChoice(n_49);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = m_49;
                                                                                            t = n_178(t);
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = m_178(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = m_178(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(u_173, sym_EmptyTupleCong_0))
                                                                                {
                                                                                  t = o_178(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(u_173, sym_AnnoCong_2))
                                                                                    {
                                                                                      v_173 = ATgetArgument(u_173, 0);
                                                                                      w_173 = ATgetArgument(u_173, 1);
                                                                                      m_173 :
                                                                                      if(match_cons(w_173, sym_StrategyCurly_1))
                                                                                        {
                                                                                          s_173 = ATgetArgument(w_173, 0);
                                                                                          t = p_178(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(u_173, sym_ParenStrat_1))
                                                                                        {
                                                                                          v_173 = ATgetArgument(u_173, 0);
                                                                                          t = q_178(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(u_173, sym_StratRuleNoCond_2))
                                                                                            {
                                                                                              v_173 = ATgetArgument(u_173, 0);
                                                                                              w_173 = ATgetArgument(u_173, 1);
                                                                                              t = r_178(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(u_173, sym_RuleNoCond_2))
                                                                                                {
                                                                                                  v_173 = ATgetArgument(u_173, 0);
                                                                                                  w_173 = ATgetArgument(u_173, 1);
                                                                                                  t = s_178(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(u_173, sym_OverlayNoArgs_2))
                                                                                                    {
                                                                                                      v_173 = ATgetArgument(u_173, 0);
                                                                                                      w_173 = ATgetArgument(u_173, 1);
                                                                                                      t = t_178(t);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(u_173, sym_RChoice_2))
                                                                                                        {
                                                                                                          v_173 = ATgetArgument(u_173, 0);
                                                                                                          w_173 = ATgetArgument(u_173, 1);
                                                                                                          t = u_178(t);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(u_173, sym_Prim_2))
                                                                                                            {
                                                                                                              v_173 = ATgetArgument(u_173, 0);
                                                                                                              w_173 = ATgetArgument(u_173, 1);
                                                                                                              t = v_178(t);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(u_173, sym_PrimNoArgs_1))
                                                                                                                {
                                                                                                                  v_173 = ATgetArgument(u_173, 0);
                                                                                                                  t = w_178(t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(u_173, sym_Call_2))
                                                                                                                    {
                                                                                                                      v_173 = ATgetArgument(u_173, 0);
                                                                                                                      w_173 = ATgetArgument(u_173, 1);
                                                                                                                      t = x_178(t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(u_173, sym_CallNoArgs_1))
                                                                                                                        {
                                                                                                                          v_173 = ATgetArgument(u_173, 0);
                                                                                                                          t = y_178(t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_cons(u_173, sym_SDef_3))
                                                                                                                            {
                                                                                                                              v_173 = ATgetArgument(u_173, 0);
                                                                                                                              w_173 = ATgetArgument(u_173, 1);
                                                                                                                              t_173 = ATgetArgument(u_173, 2);
                                                                                                                              t = z_178(t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_cons(u_173, sym_SDefNoArgs_2))
                                                                                                                                {
                                                                                                                                  v_173 = ATgetArgument(u_173, 0);
                                                                                                                                  w_173 = ATgetArgument(u_173, 1);
                                                                                                                                  t = a_179(t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_cons(u_173, sym_SRDef_3))
                                                                                                                                    {
                                                                                                                                      v_173 = ATgetArgument(u_173, 0);
                                                                                                                                      w_173 = ATgetArgument(u_173, 1);
                                                                                                                                      t_173 = ATgetArgument(u_173, 2);
                                                                                                                                      t = b_179(t);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_cons(u_173, sym_SRDefNoArgs_2))
                                                                                                                                        {
                                                                                                                                          v_173 = ATgetArgument(u_173, 0);
                                                                                                                                          w_173 = ATgetArgument(u_173, 1);
                                                                                                                                          t = c_179(t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_cons(u_173, sym_RDef_3))
                                                                                                                                            {
                                                                                                                                              v_173 = ATgetArgument(u_173, 0);
                                                                                                                                              w_173 = ATgetArgument(u_173, 1);
                                                                                                                                              t_173 = ATgetArgument(u_173, 2);
                                                                                                                                              t = d_179(t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_cons(u_173, sym_RDefNoArgs_2))
                                                                                                                                                {
                                                                                                                                                  v_173 = ATgetArgument(u_173, 0);
                                                                                                                                                  w_173 = ATgetArgument(u_173, 1);
                                                                                                                                                  t = e_179(t);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_cons(u_173, sym_Module_2))
                                                                                                                                                    {
                                                                                                                                                      v_173 = ATgetArgument(u_173, 0);
                                                                                                                                                      w_173 = ATgetArgument(u_173, 1);
                                                                                                                                                      t = f_179(t);
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
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm repeat_1 (ATerm t, ATerm v_105 (ATerm))
{
  ATerm q_179 (ATerm t)
  {
    ATerm v_9 (ATerm t)
    {
      t = v_105(t);
      t = q_179(t);
      return(t);
    }
    t = try_1(t, v_9);
    return(t);
  }
  t = q_179(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm t_106 (ATerm))
{
  t = t_106(t);
  {
    ATerm w_9 (ATerm t)
    {
      t = topdown_1(t, t_106);
      return(t);
    }
    t = _all(t, w_9);
  }
  return(t);
}
ATerm pre_desugar_0 (ATerm t)
{
  ATerm x_9 (ATerm t)
  {
    t = repeat_1(t, Desugar_0);
    t = try_1(t, DesugarOnce_0);
    return(t);
  }
  t = topdown_1(t, x_9);
  return(t);
}
ATerm frontend_transformation_0 (ATerm t)
{
  ATerm y_9 (ATerm t)
  {
    t = term_o_49;
    return(t);
  }
  t = timing_1(t, y_9);
  {
    t = pre_desugar_0(t);
    {
      ATerm z_9 (ATerm t)
      {
        t = term_p_49;
        return(t);
      }
      t = timing_1(t, z_9);
      {
        t = normalize_spec_0(t);
        {
          ATerm a_10 (ATerm t)
          {
            t = term_q_49;
            return(t);
          }
          t = timing_1(t, a_10);
          {
            ATerm r_49;
            r_49 = t;
            t = spec_use_def_0(t);
            t = r_49;
            {
              ATerm b_10 (ATerm t)
              {
                t = term_v_49;
                return(t);
              }
              t = timing_1(t, b_10);
              {
                t = ExpandOverlays_0(t);
                {
                  ATerm c_10 (ATerm t)
                  {
                    t = term_w_49;
                    return(t);
                  }
                  t = timing_1(t, c_10);
                  {
                    t = CheckConstructors_0(t);
                    {
                      ATerm d_10 (ATerm t)
                      {
                        t = term_x_49;
                        return(t);
                      }
                      t = timing_1(t, d_10);
                      {
                        t = RulesToSdefs_0(t);
                        {
                          ATerm e_10 (ATerm t)
                          {
                            t = term_y_49;
                            return(t);
                          }
                          t = timing_1(t, e_10);
                          {
                            t = DesugarListMatching_0(t);
                            {
                              ATerm f_10 (ATerm t)
                              {
                                t = term_z_49;
                                return(t);
                              }
                              t = timing_1(t, f_10);
                              {
                                t = strename_0(t);
                                {
                                  ATerm g_10 (ATerm t)
                                  {
                                    t = term_a_50;
                                    return(t);
                                  }
                                  t = timing_1(t, g_10);
                                  {
                                    ATerm h_10 (ATerm t)
                                    {
                                      ATerm i_10 (ATerm t)
                                      {
                                        ATerm j_10 (ATerm t)
                                        {
                                          t = Strategies_1(t, desugar_spec_0);
                                          return(t);
                                        }
                                        t = Cons_2(t, j_10, Nil_0);
                                        return(t);
                                      }
                                      t = Cons_2(t, _id, i_10);
                                      return(t);
                                    }
                                    t = Specification_1(t, h_10);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
ATerm _2 (ATerm t, ATerm r_89 (ATerm), ATerm s_89 (ATerm))
{
  ATerm x_179 = NULL,y_179 = NULL,z_179 = NULL;
  x_179 = t;
  w_179 :
  if(match_cons(x_179, sym__2))
    {
      y_179 = ATgetArgument(x_179, 0);
      z_179 = ATgetArgument(x_179, 1);
      {
        ATerm d_180 = NULL,f_180 = NULL;
        ATerm e_180 = NULL;
        t = SSLgetAnnotations(not_null(x_179));
        {
          e_180 = t;
          if(((d_180 != NULL) && (d_180 != e_180)))
            _fail(e_180);
          else
            d_180 = e_180;
        }
        {
          t = not_null(y_179);
          {
            ATerm h_180 = NULL;
            t = r_89(t);
            {
              f_180 = t;
              {
                t = not_null(z_179);
                {
                  ATerm j_180 = NULL;
                  t = s_89(t);
                  {
                    h_180 = t;
                    {
                      ATerm k_180 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(f_180), not_null(h_180)), not_null(d_180));
                      {
                        k_180 = t;
                        if(((j_180 != NULL) && (j_180 != k_180)))
                          _fail(k_180);
                        else
                          j_180 = k_180;
                      }
                      t = not_null(j_180);
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
  ATerm b_50;
  b_50 = t;
  {
    ATerm r_180 = NULL;
    ATerm s_180 = NULL;
    t = term_m_43;
    {
      t = whoami_0(t);
      {
        s_180 = t;
        if(((r_180 != NULL) && (r_180 != s_180)))
          _fail(s_180);
        else
          r_180 = s_180;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_50), not_null(r_180)), term_c_50));
      {
        t = printnl_0(t);
        {
          t = term_o_26;
          t = exit_0(t);
        }
      }
    }
  }
  t = b_50;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm w_180 = NULL,x_180 = NULL,y_180 = NULL;
  w_180 = t;
  v_180 :
  if(match_cons(w_180, sym__2))
    {
      x_180 = ATgetArgument(w_180, 0);
      y_180 = ATgetArgument(w_180, 1);
      {
        ATerm s_50;
        s_50 = t;
        t = SSL_printnl(not_null(x_180), not_null(y_180));
        t = s_50;
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
  ATerm d_181 = NULL;
  d_181 = t;
  t = SSL_implode_string(not_null(d_181));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_50 = t;
  int a_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(a_51);
    }
  else
    {
      t = z_50;
      {
        ATerm i_181 = NULL,j_181 = NULL,k_181 = NULL;
        i_181 = t;
        h_181 :
        if(((ATgetType(i_181) == AT_LIST) && !(ATisEmpty(i_181))))
          {
            j_181 = ATgetFirst((ATermList) i_181);
            k_181 = (ATerm) ATgetNext((ATermList) i_181);
            {
              t = not_null(j_181);
              {
                ATerm k_10 (ATerm t)
                {
                  t = not_null(k_181);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, k_10);
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
  ATerm u_181 = NULL;
  ATerm w_181 = NULL;
  u_181 = t;
  {
    ATerm x_181 = NULL;
    ATerm z_181 = NULL,a_182 = NULL,b_182 = NULL;
    t = not_null(u_181);
    {
      x_181 = t;
      {
        t = SSL_explode_term(not_null(x_181));
        {
          z_181 = t;
          s_181 :
          if(match_cons(z_181, sym__2))
            {
              a_182 = ATgetArgument(z_181, 0);
              b_182 = ATgetArgument(z_181, 1);
              t_181 :
              if(match_string(a_182, ""))
                {
                  if(((w_181 != NULL) && (w_181 != b_182)))
                    _fail(b_182);
                  else
                    w_181 = b_182;
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
      t = not_null(w_181);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm a_113 (ATerm))
{
  ATerm f_182 (ATerm t)
  {
    ATerm b_51 = t;
    int c_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, f_182);
        ;
        LocalPopChoice(c_51);
      }
    else
      {
        t = b_51;
        {
          t = Nil_0(t);
          t = a_113(t);
        }
      }
    return(t);
  }
  t = f_182(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm i_182 = NULL,j_182 = NULL,k_182 = NULL;
  i_182 = t;
  h_182 :
  if(match_cons(i_182, sym__2))
    {
      j_182 = ATgetArgument(i_182, 0);
      k_182 = ATgetArgument(i_182, 1);
      {
        t = not_null(j_182);
        {
          ATerm l_10 (ATerm t)
          {
            t = not_null(k_182);
            return(t);
          }
          t = at_end_1(t, l_10);
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
  ATerm d_51 = t;
  int e_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(e_51);
    }
  else
    {
      t = d_51;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm p_182 = NULL;
  p_182 = t;
  t = SSL_explode_string(not_null(p_182));
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
  ATerm i_51 = t;
  int j_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(j_51);
    }
  else
    {
      t = i_51;
      {
        ATerm k_51 = t;
        int l_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_10 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, m_10);
            ;
            LocalPopChoice(l_51);
          }
        else
          {
            t = k_51;
            {
              ATerm y_182 = NULL,z_182 = NULL,a_183 = NULL;
              y_182 = t;
              x_182 :
              if(match_cons(y_182, sym_Path_1))
                {
                  z_182 = ATgetArgument(y_182, 0);
                  t = not_null(z_182);
                }
              else
                {
                  if(match_cons(y_182, sym_Var_1))
                    {
                      z_182 = ATgetArgument(y_182, 0);
                      {
                        t = not_null(z_182);
                        {
                          ATerm m_51 = t;
                          int n_51 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(n_51);
                            }
                          else
                            {
                              t = m_51;
                              {
                                ATerm n_10 (ATerm t)
                                {
                                  t = term_s_51;
                                  return(t);
                                }
                                t = debug_1(t, n_10);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(y_182, sym_Prefix_2))
                        {
                          z_182 = ATgetArgument(y_182, 0);
                          a_183 = ATgetArgument(y_182, 1);
                          {
                            ATerm f_183 = NULL,h_183 = NULL;
                            ATerm t_51;
                            t_51 = t;
                            {
                              ATerm g_183 = NULL;
                              t = not_null(z_182);
                              {
                                t = eval_config_0(t);
                                {
                                  g_183 = t;
                                  if(((f_183 != NULL) && (f_183 != g_183)))
                                    _fail(g_183);
                                  else
                                    f_183 = g_183;
                                }
                              }
                            }
                            t = t_51;
                            {
                              ATerm i_183 = NULL;
                              t = not_null(a_183);
                              {
                                t = eval_config_0(t);
                                {
                                  i_183 = t;
                                  if(((h_183 != NULL) && (h_183 != i_183)))
                                    _fail(i_183);
                                  else
                                    h_183 = i_183;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_183), not_null(h_183));
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
  ATerm q_183 = NULL;
  q_183 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_u_51, not_null(q_183));
    {
      t = table_get_0(t);
      {
        ATerm o_10 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm w_51;
            w_51 = t;
            {
              ATerm s_183 = NULL;
              ATerm t_183 = NULL;
              t_183 = t;
              if(((s_183 != NULL) && (s_183 != t_183)))
                _fail(t_183);
              else
                s_183 = t_183;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_u_51, not_null(q_183), not_null(s_183));
                t = table_put_0(t);
              }
            }
            t = w_51;
          }
          return(t);
        }
        t = try_1(t, o_10);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm a_126 (ATerm))
{
  ATerm p_10 (ATerm t)
  {
    ATerm x_51;
    x_51 = t;
    {
      ATerm x_183 = NULL;
      ATerm y_183 = NULL;
      t = term_l_19;
      {
        t = get_config_0(t);
        {
          y_183 = t;
          if(((x_183 != NULL) && (x_183 != y_183)))
            _fail(y_183);
          else
            x_183 = y_183;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_183), term_y_51);
        t = geq_0(t);
      }
    }
    t = x_51;
    t = a_126(t);
    return(t);
  }
  t = try_1(t, p_10);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm e_184 = NULL,f_184 = NULL,g_184 = NULL,h_184 = NULL;
  e_184 = t;
  c_184 :
  if(match_cons(e_184, sym__2))
    {
      f_184 = ATgetArgument(e_184, 0);
      g_184 = ATgetArgument(e_184, 1);
      d_184 :
      if(match_cons(g_184, sym_Stream_1))
        {
          h_184 = ATgetArgument(g_184, 0);
          {
            ATerm k_184 = NULL;
            t = SSL_fputc(not_null(f_184), not_null(h_184));
            {
              ATerm l_184 = NULL;
              l_184 = t;
              if(((k_184 != NULL) && (k_184 != l_184)))
                _fail(l_184);
              else
                k_184 = l_184;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_184));
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
  ATerm s_184 = NULL,t_184 = NULL,u_184 = NULL,v_184 = NULL;
  s_184 = t;
  q_184 :
  if(match_cons(s_184, sym__2))
    {
      t_184 = ATgetArgument(s_184, 0);
      v_184 = ATgetArgument(s_184, 1);
      r_184 :
      if(match_cons(t_184, sym_Stream_1))
        {
          u_184 = ATgetArgument(t_184, 0);
          {
            ATerm y_184 = NULL;
            t = SSL_write_term_to_stream_text(not_null(u_184), not_null(v_184));
            {
              ATerm z_184 = NULL;
              z_184 = t;
              if(((y_184 != NULL) && (y_184 != z_184)))
                _fail(z_184);
              else
                y_184 = z_184;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_184));
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
  ATerm q_10 (ATerm t)
  {
    ATerm d_185 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm e_185 = NULL;
      e_185 = t;
      if(((d_185 != NULL) && (d_185 != e_185)))
        _fail(e_185);
      else
        d_185 = e_185;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_48, not_null(d_185));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, q_10);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm k_185 = NULL,l_185 = NULL,m_185 = NULL,n_185 = NULL;
  k_185 = t;
  i_185 :
  if(match_cons(k_185, sym__2))
    {
      l_185 = ATgetArgument(k_185, 0);
      n_185 = ATgetArgument(k_185, 1);
      j_185 :
      if(match_cons(l_185, sym_Stream_1))
        {
          m_185 = ATgetArgument(l_185, 0);
          {
            ATerm q_185 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(m_185), not_null(n_185));
            {
              ATerm r_185 = NULL;
              r_185 = t;
              if(((q_185 != NULL) && (q_185 != r_185)))
                _fail(r_185);
              else
                q_185 = r_185;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_185));
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
ATerm WriteToFile_1 (ATerm t, ATerm w_124 (ATerm))
{
  ATerm y_185 = NULL,z_185 = NULL,a_186 = NULL;
  y_185 = t;
  x_185 :
  if(match_cons(y_185, sym__2))
    {
      z_185 = ATgetArgument(y_185, 0);
      a_186 = ATgetArgument(y_185, 1);
      {
        ATerm d_186 = NULL,f_186 = NULL;
        t = not_null(z_185);
        {
          ATerm e_186 = NULL;
          e_186 = t;
          if(((d_186 != NULL) && (d_186 != e_186)))
            _fail(e_186);
          else
            d_186 = e_186;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_186), term_z_51);
            {
              t = open_stream_0(t);
              {
                ATerm g_186 = NULL;
                g_186 = t;
                if(((f_186 != NULL) && (f_186 != g_186)))
                  _fail(g_186);
                else
                  f_186 = g_186;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_186), not_null(a_186));
                  {
                    t = w_124(t);
                    {
                      t = fclose_0(t);
                      t = not_null(a_186);
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
  ATerm o_186 = NULL;
  ATerm a_52;
  a_52 = t;
  {
    ATerm r_10 (ATerm t)
    {
      ATerm h_52 = t;
      int i_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_10 (ATerm t)
          {
            ATerm p_186 = NULL,q_186 = NULL;
            p_186 = t;
            l_186 :
            if(match_cons(p_186, sym_Output_1))
              {
                q_186 = ATgetArgument(p_186, 0);
                if(((o_186 != NULL) && (o_186 != q_186)))
                  _fail(q_186);
                else
                  o_186 = q_186;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, s_10);
          ;
          LocalPopChoice(i_52);
        }
      else
        {
          t = h_52;
          {
            ATerm r_186 = NULL;
            t = term_j_52;
            {
              r_186 = t;
              if(((o_186 != NULL) && (o_186 != r_186)))
                _fail(r_186);
              else
                o_186 = r_186;
            }
          }
        }
      return(t);
    }
    t = _2(t, r_10, _id);
  }
  t = a_52;
  {
    ATerm t_10 (ATerm t)
    {
      ATerm u_10 (ATerm t)
      {
        t = not_null(o_186);
        return(t);
      }
      t = split_2(t, u_10, _id);
      return(t);
    }
    t = _2(t, _id, t_10);
    {
      ATerm s_52 = t;
      int t_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_10 (ATerm t)
          {
            ATerm w_10 (ATerm t)
            {
              ATerm s_186 = NULL;
              s_186 = t;
              n_186 :
              if(!(match_cons(s_186, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, w_10);
            return(t);
          }
          t = _2(t, v_10, WriteToBinaryFile_0);
          ;
          LocalPopChoice(t_52);
        }
      else
        {
          t = s_52;
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
ATerm apply_strategy_1 (ATerm t, ATerm y_127 (ATerm))
{
  ATerm y_186 = NULL,a_187 = NULL,b_187 = NULL,c_187 = NULL;
  ATerm u_52;
  u_52 = t;
  t = dtime_0(t);
  t = u_52;
  {
    t = y_127(t);
    {
      ATerm v_52;
      v_52 = t;
      {
        ATerm z_186 = NULL;
        t = dtime_0(t);
        {
          z_186 = t;
          if(((y_186 != NULL) && (y_186 != z_186)))
            _fail(z_186);
          else
            y_186 = z_186;
        }
      }
      t = v_52;
      {
        a_187 = t;
        x_186 :
        if(match_cons(a_187, sym__2))
          {
            b_187 = ATgetArgument(a_187, 0);
            c_187 = ATgetArgument(a_187, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_187)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(y_186))), not_null(c_187));
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
  ATerm k_187 = NULL,l_187 = NULL;
  ATerm r_187 (ATerm t)
  {
    t = SSL_fclose(not_null(l_187));
    return(t);
  }
  l_187 = t;
  j_187 :
  if(match_cons(l_187, sym_Stream_1))
    {
      k_187 = ATgetArgument(l_187, 0);
      {
        ATerm a_53 = t;
        int b_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(k_187));
            ;
            LocalPopChoice(b_53);
          }
        else
          {
            t = a_53;
            t = r_187(t);
          }
      }
    }
  else
    {
      t = r_187(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm u_187 = NULL,v_187 = NULL;
  u_187 = t;
  t_187 :
  if(match_cons(u_187, sym_Stream_1))
    {
      v_187 = ATgetArgument(u_187, 0);
      t = SSL_read_term_from_stream(not_null(v_187));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm i_124 (ATerm))
{
  ATerm c_53;
  c_53 = t;
  {
    ATerm a_188 = NULL,c_188 = NULL;
    ATerm d_53;
    d_53 = t;
    {
      ATerm b_188 = NULL;
      t = i_124(t);
      {
        b_188 = t;
        if(((a_188 != NULL) && (a_188 != b_188)))
          _fail(b_188);
        else
          a_188 = b_188;
      }
    }
    t = d_53;
    {
      ATerm d_188 = NULL;
      d_188 = t;
      if(((c_188 != NULL) && (c_188 != d_188)))
        _fail(d_188);
      else
        c_188 = d_188;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_188)), not_null(a_188)));
        t = printnl_0(t);
      }
    }
  }
  t = c_53;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm j_188 = NULL,k_188 = NULL,l_188 = NULL;
  j_188 = t;
  i_188 :
  if(match_cons(j_188, sym__2))
    {
      k_188 = ATgetArgument(j_188, 0);
      l_188 = ATgetArgument(j_188, 1);
      {
        ATerm o_188 = NULL;
        t = SSL_fopen(not_null(k_188), not_null(l_188));
        {
          ATerm p_188 = NULL;
          p_188 = t;
          if(((o_188 != NULL) && (o_188 != p_188)))
            _fail(p_188);
          else
            o_188 = p_188;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_188));
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
  ATerm t_188 = NULL;
  t_188 = t;
  t = SSL_is_string(not_null(t_188));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm x_188 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm y_188 = NULL;
    y_188 = t;
    if(((x_188 != NULL) && (x_188 != y_188)))
      _fail(y_188);
    else
      x_188 = y_188;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_188));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm b_189 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm c_189 = NULL;
    c_189 = t;
    if(((b_189 != NULL) && (b_189 != c_189)))
      _fail(c_189);
    else
      b_189 = c_189;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_189));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm f_189 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm g_189 = NULL;
    g_189 = t;
    if(((f_189 != NULL) && (f_189 != g_189)))
      _fail(g_189);
    else
      f_189 = g_189;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_189));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm m_189 = NULL;
  m_189 = t;
  l_189 :
  if(match_cons(m_189, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(m_189, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(m_189, sym_stdin_0))
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
  ATerm w_189 = NULL;
  ATerm y_189 = NULL,z_189 = NULL;
  w_189 = t;
  {
    ATerm a_190 = NULL;
    ATerm c_190 = NULL,d_190 = NULL,e_190 = NULL,f_190 = NULL,g_190 = NULL;
    t = not_null(w_189);
    {
      a_190 = t;
      {
        t = SSL_explode_term(not_null(a_190));
        {
          c_190 = t;
          t_189 :
          if(match_cons(c_190, sym__2))
            {
              d_190 = ATgetArgument(c_190, 0);
              e_190 = ATgetArgument(c_190, 1);
              u_189 :
              if(match_string(d_190, ""))
                {
                  v_189 :
                  if(((ATgetType(e_190) == AT_LIST) && !(ATisEmpty(e_190))))
                    {
                      f_190 = ATgetFirst((ATermList) e_190);
                      g_190 = (ATerm) ATgetNext((ATermList) e_190);
                      {
                        if(((z_189 != NULL) && (z_189 != f_190)))
                          _fail(f_190);
                        else
                          z_189 = f_190;
                        if(((y_189 != NULL) && (y_189 != g_190)))
                          _fail(g_190);
                        else
                          y_189 = g_190;
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
    t = not_null(z_189);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm o_190 = NULL,p_190 = NULL,q_190 = NULL;
  o_190 = t;
  n_190 :
  if(match_cons(o_190, sym__2))
    {
      p_190 = ATgetArgument(o_190, 0);
      q_190 = ATgetArgument(o_190, 1);
      {
        ATerm e_53 = t;
        int f_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(f_53);
          }
        else
          {
            t = e_53;
            {
              ATerm h_53 = t;
              int j_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_10 (ATerm t)
                  {
                    ATerm r_190 = NULL,s_190 = NULL;
                    r_190 = t;
                    m_190 :
                    if(match_cons(r_190, sym_Path_1))
                      {
                        s_190 = ATgetArgument(r_190, 0);
                        t = not_null(s_190);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, x_10, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(j_53);
                }
              else
                {
                  t = h_53;
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
  ATerm a_191 = NULL;
  ATerm k_53 = t;
  int m_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_190 = NULL;
      ATerm z_190 = NULL;
      z_190 = t;
      if(((y_190 != NULL) && (y_190 != z_190)))
        _fail(z_190);
      else
        y_190 = z_190;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_190), term_n_53);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(m_53);
    }
  else
    {
      t = k_53;
      {
        ATerm y_10 (ATerm t)
        {
          t = term_p_53;
          return(t);
        }
        t = debug_1(t, y_10);
        _fail(t);
      }
    }
  {
    ATerm q_53;
    q_53 = t;
    {
      ATerm b_191 = NULL;
      t = read_from_stream_0(t);
      {
        b_191 = t;
        if(((a_191 != NULL) && (a_191 != b_191)))
          _fail(b_191);
        else
          a_191 = b_191;
      }
    }
    t = q_53;
    {
      t = fclose_0(t);
      t = not_null(a_191);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm a_120 (ATerm), ATerm b_120 (ATerm))
{
  ATerm g_191 = NULL,i_191 = NULL;
  ATerm u_53;
  u_53 = t;
  {
    ATerm h_191 = NULL;
    t = a_120(t);
    {
      h_191 = t;
      if(((g_191 != NULL) && (g_191 != h_191)))
        _fail(h_191);
      else
        g_191 = h_191;
    }
  }
  t = u_53;
  {
    ATerm j_191 = NULL;
    t = b_120(t);
    {
      j_191 = t;
      if(((i_191 != NULL) && (i_191 != j_191)))
        _fail(j_191);
      else
        i_191 = j_191;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_191), not_null(i_191));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm p_191 = NULL;
  ATerm v_53;
  v_53 = t;
  {
    ATerm a_54 = t;
    int b_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_10 (ATerm t)
        {
          ATerm q_191 = NULL,r_191 = NULL;
          q_191 = t;
          n_191 :
          if(match_cons(q_191, sym_Input_1))
            {
              r_191 = ATgetArgument(q_191, 0);
              if(((p_191 != NULL) && (p_191 != r_191)))
                _fail(r_191);
              else
                p_191 = r_191;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, z_10);
        ;
        LocalPopChoice(b_54);
      }
    else
      {
        t = a_54;
        {
          ATerm s_191 = NULL;
          t = term_g_54;
          {
            s_191 = t;
            if(((p_191 != NULL) && (p_191 != s_191)))
              _fail(s_191);
            else
              p_191 = s_191;
          }
        }
      }
  }
  t = v_53;
  {
    ATerm a_11 (ATerm t)
    {
      t = not_null(p_191);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, a_11);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm b_11 (ATerm t)
  {
    ATerm x_191 = NULL;
    x_191 = t;
    v_191 :
    if(!(match_string(x_191, "-k")))
      {
        if(!(match_string(x_191, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_11 (ATerm t)
  {
    ATerm h_54;
    h_54 = t;
    {
      ATerm y_191 = NULL;
      ATerm z_191 = NULL;
      t = string_to_int_0(t);
      {
        z_191 = t;
        if(((y_191 != NULL) && (y_191 != z_191)))
          _fail(z_191);
        else
          y_191 = z_191;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_54, not_null(y_191));
        t = set_config_0(t);
      }
    }
    t = h_54;
    return(t);
  }
  ATerm d_11 (ATerm t)
  {
    t = term_j_54;
    return(t);
  }
  t = ArgOption_3(t, b_11, c_11, d_11);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm c_192 = NULL;
  c_192 = t;
  t = SSL_string_to_int(not_null(c_192));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm k_54 = t;
  int n_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_11 (ATerm t)
      {
        ATerm k_192 = NULL;
        k_192 = t;
        f_192 :
        if(!(match_string(k_192, "-S")))
          {
            if(!(match_string(k_192, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_11 (ATerm t)
      {
        t = term_o_54;
        t = set_config_0(t);
        t = term_p_54;
        return(t);
      }
      ATerm g_11 (ATerm t)
      {
        t = term_q_54;
        return(t);
      }
      t = Option_3(t, e_11, f_11, g_11);
      ;
      LocalPopChoice(n_54);
    }
  else
    {
      t = k_54;
      {
        ATerm r_54 = t;
        int s_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_11 (ATerm t)
            {
              ATerm l_192 = NULL;
              l_192 = t;
              g_192 :
              if(!(match_string(l_192, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_11 (ATerm t)
            {
              ATerm o_192 = NULL;
              ATerm t_54;
              t_54 = t;
              {
                ATerm m_192 = NULL;
                ATerm n_192 = NULL;
                t = string_to_int_0(t);
                {
                  n_192 = t;
                  if(((m_192 != NULL) && (m_192 != n_192)))
                    _fail(n_192);
                  else
                    m_192 = n_192;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_l_19, not_null(m_192));
                  t = set_config_0(t);
                }
              }
              t = t_54;
              {
                ATerm p_192 = NULL;
                p_192 = t;
                if(((o_192 != NULL) && (o_192 != p_192)))
                  _fail(p_192);
                else
                  o_192 = p_192;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_192));
              }
              return(t);
            }
            ATerm j_11 (ATerm t)
            {
              t = term_u_54;
              return(t);
            }
            t = ArgOption_3(t, h_11, i_11, j_11);
            ;
            LocalPopChoice(s_54);
          }
        else
          {
            t = r_54;
            {
              ATerm k_11 (ATerm t)
              {
                ATerm q_192 = NULL;
                q_192 = t;
                j_192 :
                if(!(match_string(q_192, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm l_11 (ATerm t)
              {
                t = term_w_54;
                t = set_config_0(t);
                t = term_x_54;
                return(t);
              }
              ATerm m_11 (ATerm t)
              {
                t = term_y_54;
                return(t);
              }
              t = Option_3(t, k_11, l_11, m_11);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm z_54 = t;
  int a_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(a_55);
    }
  else
    {
      t = z_54;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm n_11 (ATerm t)
  {
    ATerm w_192 = NULL;
    w_192 = t;
    t_192 :
    if(!(match_string(w_192, "-o")))
      {
        if(!(match_string(w_192, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_11 (ATerm t)
  {
    ATerm z_192 = NULL;
    ATerm b_55;
    b_55 = t;
    {
      ATerm x_192 = NULL;
      ATerm y_192 = NULL;
      y_192 = t;
      if(((x_192 != NULL) && (x_192 != y_192)))
        _fail(y_192);
      else
        x_192 = y_192;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_55, not_null(x_192));
        t = set_config_0(t);
      }
    }
    t = b_55;
    {
      ATerm a_193 = NULL;
      a_193 = t;
      if(((z_192 != NULL) && (z_192 != a_193)))
        _fail(a_193);
      else
        z_192 = a_193;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_192));
    }
    return(t);
  }
  ATerm p_11 (ATerm t)
  {
    t = term_d_55;
    return(t);
  }
  t = ArgOption_3(t, n_11, o_11, p_11);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm e_55 = t;
  int f_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(f_55);
    }
  else
    {
      t = e_55;
      {
        ATerm q_11 (ATerm t)
        {
          ATerm e_193 = NULL;
          e_193 = t;
          d_193 :
          if(!(match_string(e_193, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm s_11 (ATerm t)
        {
          t = term_h_55;
          t = set_config_0(t);
          t = term_i_55;
          return(t);
        }
        ATerm t_11 (ATerm t)
        {
          t = term_j_55;
          return(t);
        }
        t = Option_3(t, q_11, s_11, t_11);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm k_193 = NULL,l_193 = NULL,m_193 = NULL,n_193 = NULL,o_193 = NULL;
  k_193 = t;
  i_193 :
  if(match_string(k_193, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(k_193) == AT_LIST) && !(ATisEmpty(k_193))))
        {
          l_193 = ATgetFirst((ATermList) k_193);
          m_193 = (ATerm) ATgetNext((ATermList) k_193);
          j_193 :
          if(((ATgetType(m_193) == AT_LIST) && !(ATisEmpty(m_193))))
            {
              n_193 = ATgetFirst((ATermList) m_193);
              o_193 = (ATerm) ATgetNext((ATermList) m_193);
              {
                ATerm s_193 = NULL;
                ATerm k_55;
                k_55 = t;
                {
                  t = not_null(l_193);
                  t = k_0(t);
                }
                t = k_55;
                {
                  ATerm t_193 = NULL;
                  t = not_null(n_193);
                  {
                    t = m_0(t);
                    {
                      t_193 = t;
                      if(((s_193 != NULL) && (s_193 != t_193)))
                        _fail(t_193);
                      else
                        s_193 = t_193;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_193)), not_null(s_193));
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
  ATerm u_11 (ATerm t)
  {
    ATerm a_194 = NULL;
    a_194 = t;
    x_193 :
    if(!(match_string(a_194, "-i")))
      {
        if(!(match_string(a_194, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_11 (ATerm t)
  {
    ATerm d_194 = NULL;
    ATerm l_55;
    l_55 = t;
    {
      ATerm b_194 = NULL;
      ATerm c_194 = NULL;
      c_194 = t;
      if(((b_194 != NULL) && (b_194 != c_194)))
        _fail(c_194);
      else
        b_194 = c_194;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_55, not_null(b_194));
        t = set_config_0(t);
      }
    }
    t = l_55;
    {
      ATerm e_194 = NULL;
      e_194 = t;
      if(((d_194 != NULL) && (d_194 != e_194)))
        _fail(e_194);
      else
        d_194 = e_194;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_194));
    }
    return(t);
  }
  ATerm w_11 (ATerm t)
  {
    t = term_n_55;
    return(t);
  }
  t = ArgOption_3(t, u_11, v_11, w_11);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm t_55 = t;
  int g_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(g_56);
    }
  else
    {
      t = t_55;
      {
        ATerm h_56 = t;
        int i_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(i_56);
          }
        else
          {
            t = h_56;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm i_194 = NULL;
  t = report_run_time_0(t);
  {
    ATerm j_194 = NULL;
    t = term_m_43;
    {
      t = whoami_0(t);
      {
        j_194 = t;
        if(((i_194 != NULL) && (i_194 != j_194)))
          _fail(j_194);
        else
          i_194 = j_194;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_25, (ATerm) ATinsert(ATinsert(ATempty, term_j_56), not_null(i_194)));
      {
        t = printnl_0(t);
        {
          t = term_o_26;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_k_56;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm m_194 = NULL;
  m_194 = t;
  t = SSL_TicksToSeconds(not_null(m_194));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm r_194 = NULL,s_194 = NULL,t_194 = NULL;
  r_194 = t;
  q_194 :
  if(match_cons(r_194, sym__2))
    {
      s_194 = ATgetArgument(r_194, 0);
      t_194 = ATgetArgument(r_194, 1);
      {
        ATerm l_56 = t;
        int m_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(s_194), not_null(t_194));
            ;
            LocalPopChoice(m_56);
          }
        else
          {
            t = l_56;
            t = SSL_addr(not_null(s_194), not_null(t_194));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm l_118 (ATerm), ATerm m_118 (ATerm))
{
  ATerm n_56 = t;
  int o_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_118(t);
      ;
      LocalPopChoice(o_56);
    }
  else
    {
      t = n_56;
      {
        ATerm a_195 = NULL,b_195 = NULL,c_195 = NULL;
        a_195 = t;
        z_194 :
        if(((ATgetType(a_195) == AT_LIST) && !(ATisEmpty(a_195))))
          {
            b_195 = ATgetFirst((ATermList) a_195);
            c_195 = (ATerm) ATgetNext((ATermList) a_195);
            {
              ATerm f_195 = NULL;
              ATerm g_195 = NULL;
              t = not_null(c_195);
              {
                t = foldr_2(t, l_118, m_118);
                {
                  g_195 = t;
                  if(((f_195 != NULL) && (f_195 != g_195)))
                    _fail(g_195);
                  else
                    f_195 = g_195;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_195), not_null(f_195));
                t = m_118(t);
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
ATerm crush_2 (ATerm t, ATerm e_122 (ATerm), ATerm f_122 (ATerm))
{
  ATerm n_195 = NULL;
  ATerm p_195 = NULL;
  n_195 = t;
  {
    ATerm q_195 = NULL;
    ATerm s_195 = NULL,t_195 = NULL,u_195 = NULL;
    t = not_null(n_195);
    {
      q_195 = t;
      {
        t = SSL_explode_term(not_null(q_195));
        {
          s_195 = t;
          m_195 :
          if(match_cons(s_195, sym__2))
            {
              t_195 = ATgetArgument(s_195, 0);
              u_195 = ATgetArgument(s_195, 1);
              if(((p_195 != NULL) && (p_195 != u_195)))
                _fail(u_195);
              else
                p_195 = u_195;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(p_195);
      t = foldr_2(t, e_122, f_122);
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
    ATerm x_11 (ATerm t)
    {
      t = term_a_28;
      return(t);
    }
    t = crush_2(t, x_11, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm a_196 = NULL,b_196 = NULL,c_196 = NULL;
  a_196 = t;
  z_195 :
  if(match_cons(a_196, sym__2))
    {
      b_196 = ATgetArgument(a_196, 0);
      c_196 = ATgetArgument(a_196, 1);
      {
        ATerm p_56;
        p_56 = t;
        {
          ATerm q_56 = t;
          int r_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(b_196), not_null(c_196));
              ;
              LocalPopChoice(r_56);
            }
          else
            {
              t = q_56;
              t = SSL_gtr(not_null(b_196), not_null(c_196));
            }
        }
        t = p_56;
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
  ATerm i_196 = NULL;
  ATerm s_56 = t;
  int t_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_196 = NULL,k_196 = NULL,l_196 = NULL;
      j_196 = t;
      h_196 :
      if(match_cons(j_196, sym__2))
        {
          k_196 = ATgetArgument(j_196, 0);
          l_196 = ATgetArgument(j_196, 1);
          {
            if(((i_196 != NULL) && (i_196 != k_196)))
              _fail(k_196);
            else
              i_196 = k_196;
            if(((i_196 != NULL) && (i_196 != l_196)))
              _fail(l_196);
            else
              i_196 = l_196;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(t_56);
    }
  else
    {
      t = s_56;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm z_125 (ATerm))
{
  ATerm y_11 (ATerm t)
  {
    ATerm u_56;
    u_56 = t;
    {
      ATerm o_196 = NULL;
      ATerm p_196 = NULL;
      t = term_l_19;
      {
        t = get_config_0(t);
        {
          p_196 = t;
          if(((o_196 != NULL) && (o_196 != p_196)))
            _fail(p_196);
          else
            o_196 = p_196;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_196), term_o_26);
        t = geq_0(t);
      }
    }
    t = u_56;
    t = z_125(t);
    return(t);
  }
  t = try_1(t, y_11);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm a_12 (ATerm t)
  {
    ATerm t_196 = NULL,v_196 = NULL;
    ATerm v_56;
    v_56 = t;
    {
      ATerm u_196 = NULL;
      t = run_time_0(t);
      {
        u_196 = t;
        if(((t_196 != NULL) && (t_196 != u_196)))
          _fail(u_196);
        else
          t_196 = u_196;
      }
    }
    t = v_56;
    {
      ATerm w_196 = NULL;
      t = term_m_43;
      {
        t = whoami_0(t);
        {
          w_196 = t;
          if(((v_196 != NULL) && (v_196 != w_196)))
            _fail(w_196);
          else
            v_196 = w_196;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_57), not_null(t_196)), term_y_56), not_null(v_196)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_12);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_a_28;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_197 = NULL;
  d_197 = t;
  c_197 :
  if(match_cons(d_197, sym_Version_0))
    {
      ATerm f_197 = NULL,j_197 = NULL;
      ATerm g_57;
      g_57 = t;
      {
        ATerm i_197 = NULL;
        t = SSLgetAnnotations(not_null(d_197));
        {
          i_197 = t;
          if(((f_197 != NULL) && (f_197 != i_197)))
            _fail(i_197);
          else
            f_197 = i_197;
        }
      }
      t = g_57;
      {
        ATerm k_197 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(f_197));
        {
          k_197 = t;
          if(((j_197 != NULL) && (j_197 != k_197)))
            _fail(k_197);
          else
            j_197 = k_197;
        }
        t = not_null(j_197);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_128 (ATerm))
{
  ATerm h_57 = t;
  int j_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_57;
      t = get_config_0(t);
      ;
      LocalPopChoice(j_57);
    }
  else
    {
      t = h_57;
      {
        ATerm f_12 (ATerm t)
        {
          ATerm n_57 = t;
          int o_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(o_57);
            }
          else
            {
              t = n_57;
              {
                ATerm q_57 = t;
                int t_57 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(t_57);
                  }
                else
                  {
                    t = q_57;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, f_12);
      }
    }
  t = w_128(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm p_197 = NULL;
  p_197 = t;
  t = SSL_table_create(not_null(p_197));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm t_197 = NULL;
  t_197 = t;
  {
    ATerm u_57;
    u_57 = t;
    {
      t = term_v_57;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_57, term_w_57, not_null(t_197));
          t = table_put_0(t);
        }
      }
    }
    t = u_57;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm x_197 = NULL;
  x_197 = t;
  t = SSL_table_destroy(not_null(x_197));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm b_198 = NULL;
  b_198 = t;
  t = SSL_exit(not_null(b_198));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm x_130 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_112 (ATerm))
{
  ATerm e_198 (ATerm t)
  {
    ATerm y_57 = t;
    int z_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(z_57);
      }
    else
      {
        t = y_57;
        t = Cons_2(t, k_112, e_198);
      }
    return(t);
  }
  t = e_198(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm l_198 = NULL,m_198 = NULL,n_198 = NULL;
  n_198 = t;
  k_198 :
  if(((ATgetType(n_198) == AT_LIST) && !(ATisEmpty(n_198))))
    {
      l_198 = ATgetFirst((ATermList) n_198);
      m_198 = (ATerm) ATgetNext((ATermList) n_198);
      {
        ATerm q_198 = NULL;
        t = not_null(m_198);
        {
          ATerm e_58;
          e_58 = t;
          {
            ATerm r_198 = NULL,t_198 = NULL,v_198 = NULL;
            ATerm f_58;
            f_58 = t;
            {
              ATerm s_198 = NULL;
              t = i_0(t);
              {
                s_198 = t;
                if(((r_198 != NULL) && (r_198 != s_198)))
                  _fail(s_198);
                else
                  r_198 = s_198;
              }
            }
            t = f_58;
            {
              ATerm u_198 = NULL;
              t = not_null(l_198);
              {
                t = g_0(t);
                {
                  u_198 = t;
                  if(((t_198 != NULL) && (t_198 != u_198)))
                    _fail(u_198);
                  else
                    t_198 = u_198;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(r_198)), not_null(t_198));
                {
                  v_198 = t;
                  if(((q_198 != NULL) && (q_198 != v_198)))
                    _fail(v_198);
                  else
                    q_198 = v_198;
                }
              }
            }
          }
          t = e_58;
          {
            ATerm g_12 (ATerm t)
            {
              t = not_null(q_198);
              return(t);
            }
            t = reverse_acc_2(t, g_0, g_12);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(n_198) == AT_LIST) && ATisEmpty(n_198)))
        {
          {
            t = term_m_43;
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
  ATerm p_12 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, p_12);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm w_130 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_103 (ATerm))
{
  ATerm g_199 = NULL,h_199 = NULL;
  g_199 = t;
  f_199 :
  if(match_cons(g_199, sym_Program_1))
    {
      h_199 = ATgetArgument(g_199, 0);
      {
        ATerm k_199 = NULL,m_199 = NULL;
        ATerm l_199 = NULL;
        t = SSLgetAnnotations(not_null(g_199));
        {
          l_199 = t;
          if(((k_199 != NULL) && (k_199 != l_199)))
            _fail(l_199);
          else
            k_199 = l_199;
        }
        {
          t = not_null(h_199);
          {
            ATerm o_199 = NULL;
            t = y_103(t);
            {
              m_199 = t;
              {
                ATerm p_199 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_199)), not_null(k_199));
                {
                  p_199 = t;
                  if(((o_199 != NULL) && (o_199 != p_199)))
                    _fail(p_199);
                  else
                    o_199 = p_199;
                }
                t = not_null(o_199);
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
  ATerm y_199 = NULL;
  ATerm g_58 = t;
  int h_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_199 = NULL;
      t = term_k_56;
      {
        t = get_config_0(t);
        {
          z_199 = t;
          if(((y_199 != NULL) && (y_199 != z_199)))
            _fail(z_199);
          else
            y_199 = z_199;
        }
      }
      ;
      LocalPopChoice(h_58);
    }
  else
    {
      t = g_58;
      {
        ATerm z_12 (ATerm t)
        {
          ATerm l_13 (ATerm t)
          {
            ATerm a_200 = NULL;
            a_200 = t;
            if(((y_199 != NULL) && (y_199 != a_200)))
              _fail(a_200);
            else
              y_199 = a_200;
            return(t);
          }
          t = Program_1(t, l_13);
          return(t);
        }
        t = option_defined_1(t, z_12);
      }
    }
  {
    ATerm m_13 (ATerm t)
    {
      ATerm n_13 (ATerm t)
      {
        t = not_null(y_199);
        return(t);
      }
      t = short_description_1(t, n_13);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, m_13);
    {
      t = term_n_58;
      {
        t = echo_0(t);
        {
          t = term_q_58;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm o_13 (ATerm t)
                {
                  ATerm b_200 = NULL;
                  ATerm c_200 = NULL;
                  c_200 = t;
                  if(((b_200 != NULL) && (b_200 != c_200)))
                    _fail(c_200);
                  else
                    b_200 = c_200;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_200)), term_r_58);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, o_13);
                {
                  ATerm p_13 (ATerm t)
                  {
                    ATerm d_200 = NULL;
                    ATerm e_200 = NULL;
                    ATerm q_13 (ATerm t)
                    {
                      t = not_null(y_199);
                      return(t);
                    }
                    t = long_description_1(t, q_13);
                    {
                      e_200 = t;
                      if(((d_200 != NULL) && (d_200 != e_200)))
                        _fail(e_200);
                      else
                        d_200 = e_200;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(d_200)), term_s_58);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, p_13);
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
  ATerm t_58 = t;
  int u_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(u_58);
    }
  else
    {
      t = t_58;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_103 (ATerm))
{
  ATerm o_200 = NULL,p_200 = NULL;
  o_200 = t;
  n_200 :
  if(match_cons(o_200, sym_Undefined_1))
    {
      p_200 = ATgetArgument(o_200, 0);
      {
        ATerm s_200 = NULL,u_200 = NULL;
        ATerm t_200 = NULL;
        t = SSLgetAnnotations(not_null(o_200));
        {
          t_200 = t;
          if(((s_200 != NULL) && (s_200 != t_200)))
            _fail(t_200);
          else
            s_200 = t_200;
        }
        {
          t = not_null(p_200);
          {
            ATerm w_200 = NULL;
            t = z_103(t);
            {
              u_200 = t;
              {
                ATerm x_200 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_200)), not_null(s_200));
                {
                  x_200 = t;
                  if(((w_200 != NULL) && (w_200 != x_200)))
                    _fail(x_200);
                  else
                    w_200 = x_200;
                }
                t = not_null(w_200);
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
ATerm fetch_1 (ATerm t, ATerm u_112 (ATerm))
{
  ATerm c_201 (ATerm t)
  {
    ATerm v_58 = t;
    int w_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, u_112, _id);
        ;
        LocalPopChoice(w_58);
      }
    else
      {
        t = v_58;
        t = Cons_2(t, _id, c_201);
      }
    return(t);
  }
  t = c_201(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_129 (ATerm))
{
  t = fetch_1(t, w_129);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm e_201 = NULL,f_201 = NULL,g_201 = NULL;
  e_201 = t;
  d_201 :
  if(((ATgetType(e_201) == AT_LIST) && ATisEmpty(e_201)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(e_201) == AT_LIST) && !(ATisEmpty(e_201))))
        {
          f_201 = ATgetFirst((ATermList) e_201);
          g_201 = (ATerm) ATgetNext((ATermList) e_201);
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
  ATerm x_58;
  x_58 = t;
  {
    ATerm j_201 = NULL;
    ATerm m_201 = NULL;
    ATerm y_58 = t;
    int g_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(g_59);
      }
    else
      {
        t = y_58;
        {
          ATerm k_201 = NULL;
          ATerm l_201 = NULL;
          l_201 = t;
          if(((k_201 != NULL) && (k_201 != l_201)))
            _fail(l_201);
          else
            k_201 = l_201;
          t = (ATerm) ATinsert(ATempty, not_null(k_201));
        }
      }
    {
      m_201 = t;
      if(((j_201 != NULL) && (j_201 != m_201)))
        _fail(m_201);
      else
        j_201 = m_201;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_52, not_null(j_201));
      t = printnl_0(t);
    }
  }
  t = x_58;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_k_56;
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
  ATerm h_59 = t;
  int i_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(i_59);
    }
  else
    {
      t = h_59;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_201 = NULL;
  t_201 = t;
  s_201 :
  if(match_cons(t_201, sym_Help_0))
    {
      ATerm v_201 = NULL,x_201 = NULL;
      ATerm l_59;
      l_59 = t;
      {
        ATerm w_201 = NULL;
        t = SSLgetAnnotations(not_null(t_201));
        {
          w_201 = t;
          if(((v_201 != NULL) && (v_201 != w_201)))
            _fail(w_201);
          else
            v_201 = w_201;
        }
      }
      t = l_59;
      {
        ATerm y_201 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(v_201));
        {
          y_201 = t;
          if(((x_201 != NULL) && (x_201 != y_201)))
            _fail(y_201);
          else
            x_201 = y_201;
        }
        t = not_null(x_201);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm z_104 (ATerm))
{
  ATerm m_59 = t;
  int p_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_104(t);
      ;
      LocalPopChoice(p_59);
    }
  else
    {
      t = m_59;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm q_59 = t;
  int r_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_13 (ATerm t)
      {
        ATerm e_202 = NULL;
        e_202 = t;
        c_202 :
        if(!(match_string(e_202, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm s_13 (ATerm t)
      {
        t = term_t_59;
        t = set_config_0(t);
        return(t);
      }
      ATerm t_13 (ATerm t)
      {
        t = term_u_59;
        return(t);
      }
      t = Option_3(t, r_13, s_13, t_13);
      ;
      LocalPopChoice(r_59);
    }
  else
    {
      t = q_59;
      {
        ATerm u_13 (ATerm t)
        {
          ATerm f_202 = NULL;
          f_202 = t;
          d_202 :
          if(!(match_string(f_202, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm v_13 (ATerm t)
        {
          t = term_t_59;
          {
            t = set_config_0(t);
            {
              t = term_w_59;
              t = set_config_0(t);
            }
          }
          t = term_x_59;
          return(t);
        }
        ATerm w_13 (ATerm t)
        {
          t = term_y_59;
          return(t);
        }
        t = Option_3(t, u_13, v_13, w_13);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm i_202 = NULL,j_202 = NULL,k_202 = NULL;
  i_202 = t;
  h_202 :
  if(match_cons(i_202, sym__2))
    {
      j_202 = ATgetArgument(i_202, 0);
      k_202 = ATgetArgument(i_202, 1);
      t = SSL_table_get(not_null(j_202), not_null(k_202));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm r_202 = NULL,s_202 = NULL,t_202 = NULL,u_202 = NULL;
  r_202 = t;
  q_202 :
  if(match_cons(r_202, sym__3))
    {
      s_202 = ATgetArgument(r_202, 0);
      t_202 = ATgetArgument(r_202, 1);
      u_202 = ATgetArgument(r_202, 2);
      {
        ATerm z_59;
        z_59 = t;
        {
          ATerm y_202 = NULL;
          ATerm z_202 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_202), not_null(t_202));
          {
            ATerm a_60 = t;
            int b_60 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(b_60);
              }
            else
              {
                t = a_60;
                t = (ATerm) ATempty;
              }
            {
              z_202 = t;
              if(((y_202 != NULL) && (y_202 != z_202)))
                _fail(z_202);
              else
                y_202 = z_202;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_202), not_null(t_202), (ATerm) ATinsert(CheckATermList(not_null(y_202)), not_null(u_202)));
            t = table_put_0(t);
          }
        }
        t = z_59;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm b_131 (ATerm))
{
  ATerm d_203 = NULL;
  ATerm e_203 = NULL;
  t = term_m_43;
  {
    t = b_131(t);
    {
      e_203 = t;
      if(((d_203 != NULL) && (d_203 != e_203)))
        _fail(e_203);
      else
        d_203 = e_203;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_58, term_p_58, not_null(d_203));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm k_203 = NULL,l_203 = NULL,m_203 = NULL;
  k_203 = t;
  j_203 :
  if(match_string(k_203, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(k_203) == AT_LIST) && !(ATisEmpty(k_203))))
        {
          l_203 = ATgetFirst((ATermList) k_203);
          m_203 = (ATerm) ATgetNext((ATermList) k_203);
          {
            ATerm p_203 = NULL;
            ATerm c_60;
            c_60 = t;
            {
              t = not_null(l_203);
              t = a_0(t);
            }
            t = c_60;
            {
              ATerm q_203 = NULL;
              t = term_m_43;
              {
                t = b_0(t);
                {
                  q_203 = t;
                  if(((p_203 != NULL) && (p_203 != q_203)))
                    _fail(q_203);
                  else
                    p_203 = q_203;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(m_203)), not_null(p_203));
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
  ATerm x_13 (ATerm t)
  {
    ATerm v_203 = NULL;
    v_203 = t;
    u_203 :
    if(!(match_string(v_203, "--help")))
      {
        if(!(match_string(v_203, "-h")))
          {
            if(!(match_string(v_203, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_13 (ATerm t)
  {
    t = term_d_60;
    {
      t = set_config_0(t);
      t = term_e_60;
    }
    return(t);
  }
  ATerm z_13 (ATerm t)
  {
    t = term_f_60;
    return(t);
  }
  t = Option_3(t, x_13, y_13, z_13);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm y_203 = NULL,z_203 = NULL,a_204 = NULL;
  y_203 = t;
  x_203 :
  if(((ATgetType(y_203) == AT_LIST) && !(ATisEmpty(y_203))))
    {
      z_203 = ATgetFirst((ATermList) y_203);
      a_204 = (ATerm) ATgetNext((ATermList) y_203);
      t = (ATerm) ATinsert(CheckATermList(not_null(a_204)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(z_203)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm a_91 (ATerm), ATerm b_91 (ATerm))
{
  ATerm k_204 = NULL,l_204 = NULL,m_204 = NULL;
  k_204 = t;
  j_204 :
  if(((ATgetType(k_204) == AT_LIST) && !(ATisEmpty(k_204))))
    {
      l_204 = ATgetFirst((ATermList) k_204);
      m_204 = (ATerm) ATgetNext((ATermList) k_204);
      {
        ATerm q_204 = NULL,s_204 = NULL;
        ATerm r_204 = NULL;
        t = SSLgetAnnotations(not_null(k_204));
        {
          r_204 = t;
          if(((q_204 != NULL) && (q_204 != r_204)))
            _fail(r_204);
          else
            q_204 = r_204;
        }
        {
          t = not_null(l_204);
          {
            ATerm u_204 = NULL;
            t = a_91(t);
            {
              s_204 = t;
              {
                t = not_null(m_204);
                {
                  ATerm w_204 = NULL;
                  t = b_91(t);
                  {
                    u_204 = t;
                    {
                      ATerm x_204 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(u_204)), not_null(s_204)), not_null(q_204));
                      {
                        x_204 = t;
                        if(((w_204 != NULL) && (w_204 != x_204)))
                          _fail(x_204);
                        else
                          w_204 = x_204;
                      }
                      t = not_null(w_204);
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
  ATerm h_205 = NULL;
  h_205 = t;
  g_205 :
  if(((ATgetType(h_205) == AT_LIST) && ATisEmpty(h_205)))
    {
      {
        ATerm j_205 = NULL,l_205 = NULL;
        ATerm h_60;
        h_60 = t;
        {
          ATerm k_205 = NULL;
          t = SSLgetAnnotations(not_null(h_205));
          {
            k_205 = t;
            if(((j_205 != NULL) && (j_205 != k_205)))
              _fail(k_205);
            else
              j_205 = k_205;
          }
        }
        t = h_60;
        {
          ATerm m_205 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(j_205));
          {
            m_205 = t;
            if(((l_205 != NULL) && (l_205 != m_205)))
              _fail(m_205);
            else
              l_205 = m_205;
          }
          t = not_null(l_205);
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
  ATerm s_205 = NULL,t_205 = NULL,u_205 = NULL;
  s_205 = t;
  r_205 :
  if(match_cons(s_205, sym__2))
    {
      t_205 = ATgetArgument(s_205, 0);
      u_205 = ATgetArgument(s_205, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_u_51, not_null(t_205), not_null(u_205));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_130 (ATerm))
{
  ATerm c_61;
  c_61 = t;
  {
    ATerm a_14 (ATerm t)
    {
      t = term_d_61;
      t = z_130(t);
      return(t);
    }
    t = try_1(t, a_14);
  }
  t = c_61;
  {
    ATerm b_14 (ATerm t)
    {
      ATerm c_206 = NULL;
      ATerm e_61;
      e_61 = t;
      {
        ATerm a_206 = NULL;
        ATerm b_206 = NULL;
        b_206 = t;
        if(((a_206 != NULL) && (a_206 != b_206)))
          _fail(b_206);
        else
          a_206 = b_206;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_56, not_null(a_206));
          t = set_config_0(t);
        }
      }
      t = e_61;
      {
        ATerm d_206 = NULL;
        d_206 = t;
        if(((c_206 != NULL) && (c_206 != d_206)))
          _fail(d_206);
        else
          c_206 = d_206;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_206));
      }
      return(t);
    }
    ATerm c_14 (ATerm t)
    {
      ATerm f_61 = t;
      int n_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_61 = t;
          int p_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(p_61);
            }
          else
            {
              t = o_61;
              {
                t = z_130(t);
                t = Cons_2(t, _id, c_14);
              }
            }
          ;
          LocalPopChoice(n_61);
        }
      else
        {
          t = f_61;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_14, c_14);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm j_206 = NULL,k_206 = NULL,l_206 = NULL;
  ATerm q_61;
  q_61 = t;
  {
    ATerm n_206 = NULL,o_206 = NULL,p_206 = NULL,q_206 = NULL;
    n_206 = t;
    i_206 :
    if(match_cons(n_206, sym__3))
      {
        o_206 = ATgetArgument(n_206, 0);
        p_206 = ATgetArgument(n_206, 1);
        q_206 = ATgetArgument(n_206, 2);
        {
          if(((j_206 != NULL) && (j_206 != o_206)))
            _fail(o_206);
          else
            j_206 = o_206;
          {
            if(((k_206 != NULL) && (k_206 != p_206)))
              _fail(p_206);
            else
              k_206 = p_206;
            {
              if(((l_206 != NULL) && (l_206 != q_206)))
                _fail(q_206);
              else
                l_206 = q_206;
              t = SSL_table_put(not_null(j_206), not_null(k_206), not_null(l_206));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = q_61;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_130 (ATerm))
{
  ATerm t_206 = NULL;
  ATerm r_61;
  r_61 = t;
  {
    t = term_s_61;
    t = table_put_0(t);
  }
  t = r_61;
  {
    ATerm d_14 (ATerm t)
    {
      ATerm t_61 = t;
      int u_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_130(t);
          ;
          LocalPopChoice(u_61);
        }
      else
        {
          t = t_61;
          {
            ATerm v_61 = t;
            int w_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(w_61);
              }
            else
              {
                t = v_61;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, d_14);
    {
      ATerm f_14 (ATerm t)
      {
        ATerm z_61 = t;
        int a_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_62;
            b_62 = t;
            {
              ATerm c_62 = t;
              int d_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_m_57;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(d_62);
                }
              else
                {
                  t = c_62;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = b_62;
            {
              t = system_usage_0(t);
              {
                t = term_a_28;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(a_62);
          }
        else
          {
            t = z_61;
            {
              ATerm e_62 = t;
              int f_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_62;
                  g_62 = t;
                  {
                    t = term_s_59;
                    t = get_config_0(t);
                  }
                  t = g_62;
                  {
                    t = system_about_0(t);
                    {
                      t = term_a_28;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(f_62);
                }
              else
                {
                  t = e_62;
                  {
                    ATerm g_14 (ATerm t)
                    {
                      ATerm h_14 (ATerm t)
                      {
                        ATerm v_206 = NULL;
                        v_206 = t;
                        if(((t_206 != NULL) && (t_206 != v_206)))
                          _fail(v_206);
                        else
                          t_206 = v_206;
                        return(t);
                      }
                      t = Undefined_1(t, h_14);
                      return(t);
                    }
                    t = option_defined_1(t, g_14);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_h_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_206)), term_l_62));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_o_26;
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
      t = try_1(t, f_14);
      {
        ATerm m_62;
        m_62 = t;
        {
          t = term_o_58;
          t = table_destroy_0(t);
        }
        t = m_62;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm y_128 (ATerm), ATerm z_128 (ATerm), ATerm a_129 (ATerm), ATerm b_129 (ATerm))
{
  t = parse_options_1(t, y_128);
  {
    t = store_options_0(t);
    {
      t = a_129(t);
      {
        ATerm n_62 = t;
        int o_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, z_128);
            ;
            LocalPopChoice(o_62);
          }
        else
          {
            t = n_62;
            {
              ATerm p_62 = t;
              int q_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_129(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(q_62);
                }
              else
                {
                  t = p_62;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm n_128 (ATerm), ATerm o_128 (ATerm), ATerm p_128 (ATerm), ATerm q_128 (ATerm))
{
  ATerm j_14 (ATerm t)
  {
    ATerm r_62 = t;
    int s_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_128(t);
        ;
        LocalPopChoice(s_62);
      }
    else
      {
        t = r_62;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm k_14 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, n_128);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, j_14, p_128, q_128, k_14);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm h_128 (ATerm), ATerm i_128 (ATerm), ATerm j_128 (ATerm))
{
  ATerm l_14 (ATerm t)
  {
    ATerm n_14 (ATerm t)
    {
      ATerm t_62;
      t_62 = t;
      {
        ATerm y_206 = NULL;
        ATerm z_206 = NULL;
        t = term_k_56;
        {
          t = get_config_0(t);
          {
            z_206 = t;
            if(((y_206 != NULL) && (y_206 != z_206)))
              _fail(z_206);
            else
              y_206 = z_206;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_25, (ATerm) ATinsert(ATempty, not_null(y_206)));
          t = printnl_0(t);
        }
      }
      t = t_62;
      return(t);
    }
    t = if_verbose2_1(t, n_14);
    return(t);
  }
  t = iowrap_4(t, h_128, i_128, j_128, l_14);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm f_128 (ATerm), ATerm g_128 (ATerm))
{
  t = iowrap_3(t, f_128, g_128, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm c_128 (ATerm))
{
  ATerm r_14 (ATerm t)
  {
    t = _2(t, _id, c_128);
    return(t);
  }
  t = iowrap_2(t, r_14, _fail);
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  t = iowrap_1(t, frontend_transformation_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = frontend_0(t);
  return(t);
}
