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
ATerm term_j_76;
ATerm term_v_75;
ATerm term_n_75;
ATerm term_k_75;
ATerm term_j_75;
ATerm term_i_75;
ATerm term_d_75;
ATerm term_c_75;
ATerm term_b_75;
ATerm term_a_75;
ATerm term_z_74;
ATerm term_y_74;
ATerm term_x_74;
ATerm term_f_74;
ATerm term_e_74;
ATerm term_d_74;
ATerm term_c_74;
ATerm term_b_74;
ATerm term_a_74;
ATerm term_t_73;
ATerm term_s_73;
ATerm term_m_73;
ATerm term_i_73;
ATerm term_h_73;
ATerm term_v_72;
ATerm term_u_72;
ATerm term_p_72;
ATerm term_o_72;
ATerm term_j_72;
ATerm term_i_72;
ATerm term_h_72;
ATerm term_g_72;
ATerm term_d_72;
ATerm term_c_72;
ATerm term_y_71;
ATerm term_x_71;
ATerm term_w_71;
ATerm term_v_71;
ATerm term_u_71;
ATerm term_q_71;
ATerm term_p_71;
ATerm term_o_71;
ATerm term_l_71;
ATerm term_k_71;
ATerm term_i_71;
ATerm term_c_71;
ATerm term_b_71;
ATerm term_j_70;
ATerm term_a_70;
ATerm term_z_69;
ATerm term_o_69;
ATerm term_m_69;
ATerm term_p_68;
ATerm term_o_68;
ATerm term_m_68;
ATerm term_l_68;
ATerm term_k_68;
ATerm term_j_68;
ATerm term_i_68;
ATerm term_h_68;
ATerm term_f_68;
ATerm term_e_68;
ATerm term_d_68;
ATerm term_q_67;
ATerm term_i_67;
ATerm term_h_67;
ATerm term_g_67;
ATerm term_f_67;
ATerm term_d_67;
ATerm term_t_66;
ATerm term_s_66;
ATerm term_p_66;
ATerm term_n_66;
ATerm term_m_66;
ATerm term_l_66;
ATerm term_k_66;
ATerm term_j_66;
ATerm term_h_63;
ATerm term_d_63;
ATerm term_c_63;
ATerm term_o_60;
ATerm term_n_60;
ATerm term_l_60;
ATerm term_k_60;
ATerm term_g_60;
ATerm term_a_60;
ATerm term_z_59;
ATerm term_i_55;
ATerm term_h_55;
ATerm term_e_55;
ATerm term_d_55;
ATerm term_x_54;
ATerm term_w_54;
ATerm term_v_54;
ATerm term_u_54;
ATerm term_r_54;
ATerm term_s_53;
ATerm term_r_53;
ATerm term_o_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_i_53;
ATerm term_h_53;
ATerm term_d_53;
ATerm term_w_52;
ATerm term_c_52;
ATerm term_e_51;
ATerm term_i_50;
ATerm term_g_50;
ATerm term_f_50;
ATerm term_z_46;
ATerm term_y_46;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_p_43;
ATerm term_n_43;
ATerm term_b_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_i_40;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_u_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_z_36;
ATerm term_w_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_m_22;
ATerm term_q_19;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
void init_constant_terms (void)
{
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym_Op_2, term_w_33, (ATerm) ATempty);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym_ConstType_1, term_x_33);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym_Var_1, term_d_34);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_Var_1, term_f_34);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym_Anno_2, term_e_34, term_g_34);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_Var_1, term_c_35);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym_Var_1, term_e_35);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_Anno_2, term_d_35, term_f_35);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_34);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym_Call_2, term_h_35, (ATerm) ATempty);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_BAM_3, term_i_35, term_e_34, term_d_35);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_34);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_Call_2, term_k_35, (ATerm) ATempty);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym_BAM_3, term_l_35, term_g_34, term_f_35);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("t_1", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym_Var_1, term_c_37);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("w_1", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("q_1", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_38);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("n_1", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_38);
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym_ConstType_1, term_d_37);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_q_17, term_j_39);
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_34);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("d_1", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("x_0", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(sym_Defined_1, term_y_46);
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(ATmakeSymbol("k_1", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_50);
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(sym_Op_2, term_h_53, (ATerm) ATempty);
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(sym_Op_2, term_n_53, (ATerm) ATempty);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_53);
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_54);
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_54);
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_55);
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_55);
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_g_60));
  term_g_60 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_l_60));
  term_l_60 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_60);
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_60);
  ATprotect(&(term_c_63));
  term_c_63 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_d_63));
  term_d_63 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_j_66));
  term_j_66 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_k_66));
  term_k_66 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_l_66));
  term_l_66 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_m_66));
  term_m_66 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_66));
  term_n_66 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_p_66));
  term_p_66 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_s_66));
  term_s_66 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_t_66));
  term_t_66 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_66);
  ATprotect(&(term_d_67));
  term_d_67 = (ATerm) ATmakeAppl(sym_Call_2, term_t_66, (ATerm) ATempty);
  ATprotect(&(term_f_67));
  term_f_67 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_66);
  ATprotect(&(term_g_67));
  term_g_67 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_53);
  ATprotect(&(term_h_67));
  term_h_67 = (ATerm) ATmakeAppl(sym_Call_2, term_g_67, (ATerm) ATempty);
  ATprotect(&(term_i_67));
  term_i_67 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_17);
  ATprotect(&(term_q_67));
  term_q_67 = (ATerm) ATmakeAppl(sym_Call_2, term_i_67, (ATerm) ATempty);
  ATprotect(&(term_d_68));
  term_d_68 = (ATerm) ATmakeAppl(ATmakeSymbol("  frontend initialization: ", 0, ATtrue));
  ATprotect(&(term_e_68));
  term_e_68 = (ATerm) ATmakeAppl(ATmakeSymbol("  pre-desugar: ", 0, ATtrue));
  ATprotect(&(term_f_68));
  term_f_68 = (ATerm) ATmakeAppl(ATmakeSymbol("  normalize-spec: ", 0, ATtrue));
  ATprotect(&(term_h_68));
  term_h_68 = (ATerm) ATmakeAppl(ATmakeSymbol("  spec-use-def: ", 0, ATtrue));
  ATprotect(&(term_i_68));
  term_i_68 = (ATerm) ATmakeAppl(ATmakeSymbol("  ExpandOverlays: ", 0, ATtrue));
  ATprotect(&(term_j_68));
  term_j_68 = (ATerm) ATmakeAppl(ATmakeSymbol("  CheckConstructors: ", 0, ATtrue));
  ATprotect(&(term_k_68));
  term_k_68 = (ATerm) ATmakeAppl(ATmakeSymbol("  RulesToSdefs: ", 0, ATtrue));
  ATprotect(&(term_l_68));
  term_l_68 = (ATerm) ATmakeAppl(ATmakeSymbol("  DesugarListMatching: ", 0, ATtrue));
  ATprotect(&(term_m_68));
  term_m_68 = (ATerm) ATmakeAppl(ATmakeSymbol("  strename: ", 0, ATtrue));
  ATprotect(&(term_o_68));
  term_o_68 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_68));
  term_p_68 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_69));
  term_m_69 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_69));
  term_o_69 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_69));
  term_z_69 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_70));
  term_a_70 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_70));
  term_j_70 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_71));
  term_b_71 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_71));
  term_c_71 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_71));
  term_i_71 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_71));
  term_k_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_71));
  term_l_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_71));
  term_o_71 = (ATerm) ATmakeAppl(sym__2, term_c_25, term_a_38);
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_38);
  ATprotect(&(term_q_71));
  term_q_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_71));
  term_u_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_71));
  term_v_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_71));
  term_w_71 = (ATerm) ATmakeAppl(sym__2, term_v_71, term_z_59);
  ATprotect(&(term_x_71));
  term_x_71 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_71));
  term_y_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_72));
  term_c_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_72));
  term_d_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_72));
  term_g_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_72));
  term_h_72 = (ATerm) ATmakeAppl(sym__2, term_g_72, term_z_59);
  ATprotect(&(term_i_72));
  term_i_72 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_72));
  term_j_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_72));
  term_o_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_72));
  term_p_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_72));
  term_u_72 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_72));
  term_v_72 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_73));
  term_h_73 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_73));
  term_i_73 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_73));
  term_m_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_73));
  term_s_73 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_73));
  term_t_73 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_74));
  term_a_74 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_74));
  term_b_74 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_74));
  term_c_74 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_74));
  term_d_74 = (ATerm) ATmakeAppl(sym__2, term_b_74, term_c_74);
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_74));
  term_f_74 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_x_74));
  term_x_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_74));
  term_y_74 = (ATerm) ATmakeAppl(sym__2, term_x_74, term_z_59);
  ATprotect(&(term_z_74));
  term_z_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_75));
  term_a_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_75));
  term_b_75 = (ATerm) ATmakeAppl(sym__2, term_a_75, term_z_59);
  ATprotect(&(term_c_75));
  term_c_75 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_75));
  term_d_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_75));
  term_i_75 = (ATerm) ATmakeAppl(sym__2, term_m_73, term_z_59);
  ATprotect(&(term_j_75));
  term_j_75 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_75));
  term_k_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_75));
  term_n_75 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_75));
  term_v_75 = (ATerm) ATmakeAppl(sym__3, term_b_74, term_c_74, (ATerm) ATempty);
  ATprotect(&(term_j_76));
  term_j_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm Mapp1_0_0 (ATerm);
ATerm Mapp0_0_0 (ATerm);
ATerm Mapp_0_0 (ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm Bapp1_0_0 (ATerm);
ATerm As_2_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm p_92 (ATerm), ATerm q_92 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm o_135 (ATerm), ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm desugar_spec_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm g_91 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm l_91 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm d_126 (ATerm), ATerm);
ATerm timing_1_0 (ATerm a_105 (ATerm), ATerm);
ATerm spaste_1_0 (ATerm a_135 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm);
ATerm Let_2_0 (ATerm p_95 (ATerm), ATerm q_95 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm Bind3_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm srename_0_0 (ATerm);
ATerm rename_4_0 (ATerm w_131 (ATerm, ATerm (ATerm)), ATerm x_131 (ATerm), ATerm y_131 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_131 (ATerm, ATerm (ATerm)), ATerm);
ATerm trename_0_0 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm SingleListVar_0_0 (ATerm);
ATerm ListBuild_0_0 (ATerm);
ATerm ListMatch_0_0 (ATerm);
ATerm Wld_0_0 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm Con_3_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm w_0 (ATerm), ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm ListVarScope_0_0 (ATerm);
ATerm DesugarListMatching_0_0 (ATerm);
ATerm ExpandCall_0_0 (ATerm);
ATerm expand_calls_0_0 (ATerm);
ATerm DeclareVariables_0_0 (ATerm);
ATerm RDtoSD_0_0 (ATerm);
ATerm MkCall_0_0 (ATerm);
ATerm MkCongDef_0_0 (ATerm);
ATerm MkCongDefs_0_0 (ATerm);
ATerm congdefs_0_0 (ATerm);
ATerm RulesToSdefs_0_0 (ATerm);
ATerm TupleDeclarations_0_0 (ATerm);
ATerm int_to_string_0_0 (ATerm);
ATerm CheckConsError_0_0 (ATerm);
ATerm subt_0_0 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm CheckTuple_0_0 (ATerm);
ATerm CheckCons_0_0 (ATerm);
ATerm manytd_1_0 (ATerm h_109 (ATerm), ATerm);
ATerm check_constructors_p__2_0 (ATerm l_135 (ATerm), ATerm m_135 (ATerm), ATerm);
ATerm check_constructors_0_0 (ATerm);
ATerm length_0_0 (ATerm);
ATerm GenerateCheckRule_0_0 (ATerm);
ATerm CheckConstructors_0_0 (ATerm);
ATerm exp_overlays2_1_0 (ATerm b_134 (ATerm), ATerm);
ATerm Trm_to_Cong_0_0 (ATerm);
ATerm trm_to_cong_0_0 (ATerm);
ATerm Overlay_to_Congdef_0_0 (ATerm);
ATerm ReplaceVar_0_0 (ATerm);
ATerm tpaste_1_0 (ATerm w_134 (ATerm), ATerm);
ATerm IsVar_0_0 (ATerm);
ATerm DistBinding_2_0 (ATerm h_132 (ATerm), ATerm i_132 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm);
ATerm RnBinding_2_0 (ATerm b_132 (ATerm), ATerm c_132 (ATerm, ATerm (ATerm)), ATerm);
ATerm SubsVar_2_0 (ATerm u_131 (ATerm), ATerm v_131 (ATerm), ATerm);
ATerm Look2_0_0 (ATerm);
ATerm Look1_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm RnVar_1_0 (ATerm m_132 (ATerm, ATerm (ATerm)), ATerm);
ATerm all_dist_1_0 (ATerm b_112 (ATerm), ATerm);
ATerm env_alltd_1_0 (ATerm l_111 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_6_0 (ATerm i_131 (ATerm), ATerm j_131 (ATerm, ATerm (ATerm)), ATerm k_131 (ATerm), ATerm l_131 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_131 (ATerm, ATerm (ATerm)), ATerm n_131 (ATerm), ATerm);
ATerm substitute_5_0 (ATerm p_131 (ATerm), ATerm q_131 (ATerm, ATerm (ATerm)), ATerm r_131 (ATerm), ATerm s_131 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t_131 (ATerm, ATerm (ATerm)), ATerm);
ATerm tsubstitute_0_0 (ATerm);
ATerm ExpOverlay_1_0 (ATerm c_134 (ATerm), ATerm);
ATerm exp_overlays1_1_0 (ATerm a_134 (ATerm), ATerm);
ATerm ExpandOverlays_0_0 (ATerm);
ATerm overlay_ud_0_0 (ATerm);
ATerm rdef_ud_0_0 (ATerm);
ATerm guardedlchoice_1_0 (ATerm k_135 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm);
ATerm lchoice_1_0 (ATerm j_135 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm);
ATerm isect_Bound_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm restore_Bound_0_0 (ATerm);
ATerm table_keys_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_Bound_0_0 (ATerm);
ATerm abstract_choice_2_0 (ATerm g_135 (ATerm), ATerm h_135 (ATerm), ATerm);
ATerm choice_1_0 (ATerm i_135 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm d_95 (ATerm), ATerm e_95 (ATerm), ATerm);
ATerm Context_0_0 (ATerm);
ATerm Unbound_0_0 (ATerm);
ATerm Bound_0_0 (ATerm);
ATerm use_vars_0_0 (ATerm);
ATerm Rule_3_0 (ATerm w_93 (ATerm), ATerm x_93 (ATerm), ATerm y_93 (ATerm), ATerm);
ATerm RootApp_1_0 (ATerm v_92 (ATerm), ATerm);
ATerm App_2_0 (ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm override_key_1_0 (ATerm g_123 (ATerm), ATerm);
ATerm Binding_0_0 (ATerm);
ATerm bind_vars_0_0 (ATerm);
ATerm Match_1_0 (ATerm w_95 (ATerm), ATerm);
ATerm Build_1_0 (ATerm x_95 (ATerm), ATerm);
ATerm VarScope_1_0 (ATerm f_135 (ATerm), ATerm);
ATerm unbound_vars_0_0 (ATerm);
ATerm DefineBound_0_0 (ATerm);
ATerm sdef_ud_0_0 (ATerm);
ATerm DefineUnbound_0_0 (ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm defs_use_def_0_0 (ATerm);
ATerm Signature_1_0 (ATerm h_91 (ATerm), ATerm);
ATerm spec_use_def_0_0 (ATerm);
ATerm MkConstType_0_0 (ATerm);
ATerm MkFunType_0_0 (ATerm);
ATerm map1_1_0 (ATerm s_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm UnZip2_0_0 (ATerm);
ATerm UnZip3_0_0 (ATerm);
ATerm UnZip1_0_0 (ATerm);
ATerm unzip_1_0 (ATerm z_114 (ATerm), ATerm);
ATerm unzip_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm ContextVar_0_0 (ATerm);
ATerm error_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm dummify_0_0 (ATerm);
ATerm SplitDynamicRule_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm split_dynamic_rules_0_0 (ATerm);
ATerm split_under_scope_1_0 (ATerm x_133 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm z_107 (ATerm), ATerm);
ATerm split_dynamic_rule_1_0 (ATerm v_133 (ATerm), ATerm);
ATerm DeclareContextVars_0_0 (ATerm);
ATerm lift_dynamic_rule_0_0 (ATerm);
ATerm listtd_1_0 (ATerm v_113 (ATerm), ATerm);
ATerm lift_dynamic_rules_0_0 (ATerm);
ATerm DefDynamicRuleScope_0_0 (ATerm);
ATerm define_rule_scope_0_0 (ATerm);
ATerm LiftDynamicRules_0_0 (ATerm);
ATerm DefScopeDefault_0_0 (ATerm);
ATerm DynamicRules_1_0 (ATerm w_94 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm x_134 (ATerm), ATerm y_134 (ATerm), ATerm z_134 (ATerm), ATerm);
ATerm Bind8_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind6_0_0 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Add1_0_0 (ATerm);
ATerm union_1_0 (ATerm p_116 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm crush_3_0 (ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm k_122 (ATerm), ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm);
ATerm diff_1_0 (ATerm l_116 (ATerm), ATerm);
ATerm UfShift_0_0 (ATerm);
ATerm Zip3_0_0 (ATerm);
ATerm Zip2_0_0 (ATerm);
ATerm Zip1_0_0 (ATerm);
ATerm genzip_4_0 (ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm);
ATerm zip_1_0 (ATerm u_114 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm UfIdem_0_0 (ATerm);
ATerm while_not_2_0 (ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm);
ATerm for_3_0 (ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm m_133 (ATerm), ATerm n_133 (ATerm), ATerm o_133 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm DefLRule_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm w_106 (ATerm), ATerm);
ATerm define_lrules_0_0 (ATerm);
ATerm table_lookup_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm h_123 (ATerm), ATerm);
ATerm VarToConst_0_0 (ATerm);
ATerm alltd_1_0 (ATerm n_108 (ATerm), ATerm);
ATerm assert_1_0 (ATerm f_123 (ATerm), ATerm);
ATerm DeclareVarToConst_0_0 (ATerm);
ATerm Overlays_1_0 (ATerm i_91 (ATerm), ATerm);
ATerm Constructors_1_0 (ATerm d_92 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm c_123 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm b_123 (ATerm), ATerm);
ATerm scope_2_0 (ATerm d_123 (ATerm), ATerm e_123 (ATerm), ATerm);
ATerm vars_to_consts_0_0 (ATerm);
ATerm RulesToStrategies_0_0 (ATerm);
ATerm filter_1_0 (ATerm q_119 (ATerm), ATerm);
ATerm GetConstructors_0_0 (ATerm);
ATerm InsertBSpec_0_0 (ATerm);
ATerm foldr_3_0 (ATerm p_118 (ATerm), ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm);
ATerm CombineSections_0_0 (ATerm);
ATerm normalize_spec_0_0 (ATerm);
ATerm RemoveLeadingPrime_0_0 (ATerm);
ATerm Op_2_0 (ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm);
ATerm OpDecl_2_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm o_95 (ATerm), ATerm);
ATerm Var_1_0 (ATerm p_0 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm h_98 (ATerm), ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm);
ATerm RDef_3_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm q_94 (ATerm), ATerm);
ATerm DefaultVarDec_1_0 (ATerm z_97 (ATerm), ATerm);
ATerm string_to_real_0_0 (ATerm);
ATerm DesugarOnce_0_0 (ATerm);
ATerm at_last_1_0 (ATerm n_113 (ATerm), ATerm);
ATerm init_0_0 (ATerm);
ATerm Tl_0_0 (ATerm);
ATerm Last_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm Hd_0_0 (ATerm);
ATerm unquote_chars_1_0 (ATerm o_121 (ATerm), ATerm);
ATerm un_double_quote_chars_0_0 (ATerm);
ATerm string_as_chars_1_0 (ATerm z_121 (ATerm), ATerm);
ATerm un_double_quote_0_0 (ATerm);
ATerm DesugarCharGeneric_0_0 (ATerm);
ATerm DesugarChar_0_0 (ATerm);
ATerm Snd_0_0 (ATerm);
ATerm Desugar_0_0 (ATerm);
ATerm repeat_1_0 (ATerm x_105 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm v_106 (ATerm), ATerm);
ATerm pre_desugar_0_0 (ATerm);
ATerm frontend_transformation_0_0 (ATerm);
ATerm _2_0 (ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm c_113 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm c_126 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm y_124 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm a_128 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm k_124 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm);
ATerm crush_2_0 (ATerm g_122 (ATerm), ATerm h_122 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_126 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm y_128 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm z_130 (ATerm), ATerm);
ATerm map_1_0 (ATerm m_112 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm y_130 (ATerm), ATerm);
ATerm Program_1_0 (ATerm a_104 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm b_104 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm w_112 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm y_129 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm b_105 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm d_131 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm c_91 (ATerm), ATerm d_91 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm b_131 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm a_131 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_129 (ATerm), ATerm b_129 (ATerm), ATerm c_129 (ATerm), ATerm d_129 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm p_128 (ATerm), ATerm q_128 (ATerm), ATerm r_128 (ATerm), ATerm s_128 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm j_128 (ATerm), ATerm k_128 (ATerm), ATerm l_128 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm h_128 (ATerm), ATerm i_128 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm e_128 (ATerm), ATerm);
ATerm frontend_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
  ATerm l_13 (ATerm t)
  {
    ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
    t = not_null(e_12);
    if(((f_12 != NULL) && (f_12 != t)))
      _fail(t);
    else
      f_12 = t;
    t = not_null(c_12);
    if(((g_12 != NULL) && (g_12 != t)))
      _fail(t);
    else
      g_12 = t;
    t = not_null(d_12);
    {
      ATerm l_12 = NULL;
      ATerm o_13 (ATerm t)
      {
        ATerm m_12 = NULL;
        ATerm p_13 (ATerm t)
        {
          ATerm n_12 = NULL;
          ATerm q_13 (ATerm t)
          {
            ATerm o_12 = NULL;
            ATerm r_13 (ATerm t)
            {
              t = not_null(o_12);
              if(((k_12 != NULL) && (k_12 != t)))
                _fail(t);
              else
                k_12 = t;
              t = not_null(o_12);
              return(t);
            }
            t = not_null(n_12);
            if(((j_12 != NULL) && (j_12 != t)))
              _fail(t);
            else
              j_12 = t;
            t = not_null(n_12);
            t = new_0_0(t);
            if(((o_12 != NULL) && (o_12 != t)))
              _fail(t);
            else
              o_12 = t;
            t = r_13(t);
            return(t);
          }
          t = not_null(m_12);
          if(((i_12 != NULL) && (i_12 != t)))
            _fail(t);
          else
            i_12 = t;
          t = not_null(m_12);
          t = new_0_0(t);
          if(((n_12 != NULL) && (n_12 != t)))
            _fail(t);
          else
            n_12 = t;
          t = q_13(t);
          return(t);
        }
        t = not_null(l_12);
        if(((h_12 != NULL) && (h_12 != t)))
          _fail(t);
        else
          h_12 = t;
        t = not_null(l_12);
        t = new_0_0(t);
        if(((m_12 != NULL) && (m_12 != t)))
          _fail(t);
        else
          m_12 = t;
        t = p_13(t);
        return(t);
      }
      t = new_0_0(t);
      if(((l_12 != NULL) && (l_12 != t)))
        _fail(t);
      else
        l_12 = t;
      t = o_13(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_12)), not_null(j_12)), not_null(i_12)), not_null(h_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_12)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_12)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(f_12), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_12)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_12))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(g_12), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_12)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_12))))), (ATerm) ATmakeAppl(sym_PrimT_3, term_o_17, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_12))), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_12)))))));
    }
    return(t);
  }
  ATerm m_13 (ATerm t)
  {
    ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
    t = not_null(e_12);
    if(((p_12 != NULL) && (p_12 != t)))
      _fail(t);
    else
      p_12 = t;
    t = not_null(d_12);
    {
      ATerm u_12 = NULL;
      ATerm s_13 (ATerm t)
      {
        ATerm y_12 = NULL;
        ATerm u_13 (ATerm t)
        {
          t = not_null(y_12);
          if(((t_12 != NULL) && (t_12 != t)))
            _fail(t);
          else
            t_12 = t;
          t = not_null(y_12);
          return(t);
        }
        t = not_null(u_12);
        if(((s_12 != NULL) && (s_12 != t)))
          _fail(t);
        else
          s_12 = t;
        t = not_null(p_12);
        {
          ATerm m_0 (ATerm t)
          {
            ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
            ATerm t_13 (ATerm t)
            {
              t = not_null(w_12);
              if(((q_12 != NULL) && (q_12 != t)))
                _fail(t);
              else
                q_12 = t;
              t = not_null(x_12);
              if(((r_12 != NULL) && (r_12 != t)))
                _fail(t);
              else
                r_12 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_12));
              return(t);
            }
            if(((v_12 != NULL) && (v_12 != t)))
              _fail(t);
            else
              v_12 = t;
            t = not_null(v_12);
            if(match_cons(t, sym_Explode_2))
              {
                w_12 = ATgetArgument(t, 0);
                x_12 = ATgetArgument(t, 1);
                t = t_13(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(m_0, t);
          if(((y_12 != NULL) && (y_12 != t)))
            _fail(t);
          else
            y_12 = t;
          t = u_13(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((u_12 != NULL) && (u_12 != t)))
        _fail(t);
      else
        u_12 = t;
      t = s_13(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_o_17, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_12)), not_null(q_12))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_12))), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_12)))));
    }
    return(t);
  }
  ATerm n_13 (ATerm t)
  {
    ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
    t = not_null(e_12);
    if(((z_12 != NULL) && (z_12 != t)))
      _fail(t);
    else
      z_12 = t;
    t = not_null(d_12);
    {
      ATerm f_13 = NULL;
      ATerm v_13 (ATerm t)
      {
        ATerm g_13 = NULL;
        ATerm w_13 (ATerm t)
        {
          ATerm k_13 = NULL;
          ATerm y_13 (ATerm t)
          {
            t = not_null(k_13);
            if(((e_13 != NULL) && (e_13 != t)))
              _fail(t);
            else
              e_13 = t;
            t = not_null(k_13);
            return(t);
          }
          t = not_null(g_13);
          if(((d_13 != NULL) && (d_13 != t)))
            _fail(t);
          else
            d_13 = t;
          t = not_null(z_12);
          {
            ATerm y_0 (ATerm t)
            {
              ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
              ATerm x_13 (ATerm t)
              {
                t = not_null(i_13);
                if(((a_13 != NULL) && (a_13 != t)))
                  _fail(t);
                else
                  a_13 = t;
                t = not_null(j_13);
                if(((b_13 != NULL) && (b_13 != t)))
                  _fail(t);
                else
                  b_13 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_13));
                return(t);
              }
              if(((h_13 != NULL) && (h_13 != t)))
                _fail(t);
              else
                h_13 = t;
              t = not_null(h_13);
              if(match_cons(t, sym_Explode_2))
                {
                  i_13 = ATgetArgument(t, 0);
                  j_13 = ATgetArgument(t, 1);
                  t = x_13(t);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = oncetd_1_0(y_0, t);
            if(((k_13 != NULL) && (k_13 != t)))
              _fail(t);
            else
              k_13 = t;
            t = y_13(t);
          }
          return(t);
        }
        t = not_null(f_13);
        if(((c_13 != NULL) && (c_13 != t)))
          _fail(t);
        else
          c_13 = t;
        t = not_null(f_13);
        t = new_0_0(t);
        if(((g_13 != NULL) && (g_13 != t)))
          _fail(t);
        else
          g_13 = t;
        t = w_13(t);
        return(t);
      }
      t = new_0_0(t);
      if(((f_13 != NULL) && (f_13 != t)))
        _fail(t);
      else
        f_13 = t;
      t = v_13(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_13)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_13))), (ATerm) ATmakeAppl(sym_PrimT_3, term_p_17, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_13)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_13)), (ATerm) ATmakeAppl(sym_Op_2, term_q_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_13)), not_null(a_13)))))));
    }
    return(t);
  }
  if(((d_12 != NULL) && (d_12 != t)))
    _fail(t);
  else
    d_12 = t;
  t = not_null(d_12);
  if(match_cons(t, sym_ExplodeCong_2))
    {
      e_12 = ATgetArgument(t, 0);
      c_12 = ATgetArgument(t, 1);
      t = l_13(t);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          e_12 = ATgetArgument(t, 0);
          t = m_13(t);
        }
      else
        {
          if(match_cons(t, sym_Match_1))
            {
              e_12 = ATgetArgument(t, 0);
              t = n_13(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL;
  ATerm t_15 (ATerm t)
  {
    ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
    t = not_null(q_14);
    if(((r_14 != NULL) && (r_14 != t)))
      _fail(t);
    else
      r_14 = t;
    t = not_null(p_14);
    {
      ATerm w_14 = NULL;
      ATerm w_15 (ATerm t)
      {
        ATerm a_15 = NULL;
        ATerm y_15 (ATerm t)
        {
          t = not_null(a_15);
          if(((v_14 != NULL) && (v_14 != t)))
            _fail(t);
          else
            v_14 = t;
          t = not_null(a_15);
          return(t);
        }
        t = not_null(w_14);
        if(((u_14 != NULL) && (u_14 != t)))
          _fail(t);
        else
          u_14 = t;
        t = not_null(r_14);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL;
            ATerm x_15 (ATerm t)
            {
              t = not_null(y_14);
              if(((s_14 != NULL) && (s_14 != t)))
                _fail(t);
              else
                s_14 = t;
              t = not_null(z_14);
              if(((t_14 != NULL) && (t_14 != t)))
                _fail(t);
              else
                t_14 = t;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_14)), not_null(s_14));
              return(t);
            }
            if(((x_14 != NULL) && (x_14 != t)))
              _fail(t);
            else
              x_14 = t;
            t = not_null(x_14);
            if(match_cons(t, sym_Anno_2))
              {
                y_14 = ATgetArgument(t, 0);
                z_14 = ATgetArgument(t, 1);
                t = x_15(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(z_0, t);
          if(((a_15 != NULL) && (a_15 != t)))
            _fail(t);
          else
            a_15 = t;
          t = y_15(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((w_14 != NULL) && (w_14 != t)))
        _fail(t);
      else
        w_14 = t;
      t = w_15(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_14)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_14)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_r_17, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_14)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_14))))));
    }
    return(t);
  }
  ATerm u_15 (ATerm t)
  {
    ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
    t = not_null(q_14);
    if(((b_15 != NULL) && (b_15 != t)))
      _fail(t);
    else
      b_15 = t;
    t = not_null(p_14);
    {
      ATerm f_15 = NULL;
      ATerm z_15 (ATerm t)
      {
        ATerm i_15 = NULL;
        ATerm b_16 (ATerm t)
        {
          t = not_null(i_15);
          if(((e_15 != NULL) && (e_15 != t)))
            _fail(t);
          else
            e_15 = t;
          t = not_null(i_15);
          return(t);
        }
        t = not_null(f_15);
        if(((d_15 != NULL) && (d_15 != t)))
          _fail(t);
        else
          d_15 = t;
        t = not_null(b_15);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm g_15 = NULL,h_15 = NULL;
            ATerm a_16 (ATerm t)
            {
              t = not_null(h_15);
              if(((c_15 != NULL) && (c_15 != t)))
                _fail(t);
              else
                c_15 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_15));
              return(t);
            }
            if(((g_15 != NULL) && (g_15 != t)))
              _fail(t);
            else
              g_15 = t;
            t = not_null(g_15);
            if(match_cons(t, sym_RootApp_1))
              {
                h_15 = ATgetArgument(t, 0);
                t = a_16(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(b_1, t);
          if(((i_15 != NULL) && (i_15 != t)))
            _fail(t);
          else
            i_15 = t;
          t = b_16(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((f_15 != NULL) && (f_15 != t)))
        _fail(t);
      else
        f_15 = t;
      t = z_15(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_15))), not_null(c_15))));
    }
    return(t);
  }
  ATerm v_15 (ATerm t)
  {
    ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
    t = not_null(q_14);
    if(((j_15 != NULL) && (j_15 != t)))
      _fail(t);
    else
      j_15 = t;
    t = not_null(p_14);
    {
      ATerm o_15 = NULL;
      ATerm c_16 (ATerm t)
      {
        ATerm s_15 = NULL;
        ATerm e_16 (ATerm t)
        {
          t = not_null(s_15);
          if(((n_15 != NULL) && (n_15 != t)))
            _fail(t);
          else
            n_15 = t;
          t = not_null(s_15);
          return(t);
        }
        t = not_null(o_15);
        if(((m_15 != NULL) && (m_15 != t)))
          _fail(t);
        else
          m_15 = t;
        t = not_null(j_15);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
            ATerm d_16 (ATerm t)
            {
              t = not_null(q_15);
              if(((l_15 != NULL) && (l_15 != t)))
                _fail(t);
              else
                l_15 = t;
              t = not_null(r_15);
              if(((k_15 != NULL) && (k_15 != t)))
                _fail(t);
              else
                k_15 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_15));
              return(t);
            }
            if(((p_15 != NULL) && (p_15 != t)))
              _fail(t);
            else
              p_15 = t;
            t = not_null(p_15);
            if(match_cons(t, sym_App_2))
              {
                q_15 = ATgetArgument(t, 0);
                r_15 = ATgetArgument(t, 1);
                t = d_16(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(c_1, t);
          if(((s_15 != NULL) && (s_15 != t)))
            _fail(t);
          else
            s_15 = t;
          t = e_16(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((o_15 != NULL) && (o_15 != t)))
        _fail(t);
      else
        o_15 = t;
      t = c_16(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_15))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_15)), not_null(l_15)))));
    }
    return(t);
  }
  if(((p_14 != NULL) && (p_14 != t)))
    _fail(t);
  else
    p_14 = t;
  t = not_null(p_14);
  if(match_cons(t, sym_Match_1))
    {
      q_14 = ATgetArgument(t, 0);
      {
        ATerm s_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_15(t);
            ;
            LocalPopChoice(t_17);
          }
        else
          {
            t = s_17;
            {
              ATerm u_17 = t;
              int v_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_15(t);
                  ;
                  LocalPopChoice(v_17);
                }
              else
                {
                  t = u_17;
                  t = v_15(t);
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
ATerm Mapp1_0_0 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
  ATerm q_16 (ATerm t)
  {
    ATerm n_16 = NULL;
    t = not_null(l_16);
    if(((n_16 != NULL) && (n_16 != t)))
      _fail(t);
    else
      n_16 = t;
    t = not_null(n_16);
    return(t);
  }
  ATerm r_16 (ATerm t)
  {
    ATerm o_16 = NULL,p_16 = NULL;
    t = not_null(l_16);
    if(((o_16 != NULL) && (o_16 != t)))
      _fail(t);
    else
      o_16 = t;
    t = not_null(m_16);
    if(((p_16 != NULL) && (p_16 != t)))
      _fail(t);
    else
      p_16 = t;
    t = (ATerm) ATmakeAppl(sym_BA_2, not_null(o_16), not_null(p_16));
    return(t);
  }
  if(((j_16 != NULL) && (j_16 != t)))
    _fail(t);
  else
    j_16 = t;
  t = not_null(j_16);
  if(match_cons(t, sym_Match_1))
    {
      k_16 = ATgetArgument(t, 0);
      t = not_null(k_16);
      if(match_cons(t, sym_RootApp_1))
        {
          l_16 = ATgetArgument(t, 0);
          t = q_16(t);
        }
      else
        {
          if(match_cons(t, sym_App_2))
            {
              l_16 = ATgetArgument(t, 0);
              m_16 = ATgetArgument(t, 1);
              t = r_16(t);
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
ATerm Mapp0_0_0 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  ATerm h_17 (ATerm t)
  {
    ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
    t = not_null(z_16);
    if(((a_17 != NULL) && (a_17 != t)))
      _fail(t);
    else
      a_17 = t;
    t = not_null(y_16);
    {
      ATerm g_17 = NULL;
      ATerm j_17 (ATerm t)
      {
        t = not_null(g_17);
        if(((c_17 != NULL) && (c_17 != t)))
          _fail(t);
        else
          c_17 = t;
        t = not_null(g_17);
        return(t);
      }
      t = not_null(a_17);
      {
        ATerm e_1 (ATerm t)
        {
          ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
          ATerm i_17 (ATerm t)
          {
            t = not_null(f_17);
            if(((b_17 != NULL) && (b_17 != t)))
              _fail(t);
            else
              b_17 = t;
            t = not_null(b_17);
            return(t);
          }
          if(((d_17 != NULL) && (d_17 != t)))
            _fail(t);
          else
            d_17 = t;
          t = not_null(d_17);
          if(match_cons(t, sym_RootApp_1))
            {
              e_17 = ATgetArgument(t, 0);
              t = not_null(e_17);
              if(match_cons(t, sym_Match_1))
                {
                  f_17 = ATgetArgument(t, 0);
                  t = i_17(t);
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
        t = pat_td_1_0(e_1, t);
        if(((g_17 != NULL) && (g_17 != t)))
          _fail(t);
        else
          g_17 = t;
        t = j_17(t);
      }
      t = (ATerm) ATmakeAppl(sym_Match_1, not_null(c_17));
    }
    return(t);
  }
  if(((y_16 != NULL) && (y_16 != t)))
    _fail(t);
  else
    y_16 = t;
  t = not_null(y_16);
  if(match_cons(t, sym_Match_1))
    {
      z_16 = ATgetArgument(t, 0);
      t = h_17(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Mapp_0_0 (ATerm t)
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0_0(t);
      ;
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      {
        ATerm y_17 = t;
        int z_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0_0(t);
            ;
            LocalPopChoice(z_17);
          }
        else
          {
            t = y_17;
            t = Mapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL;
  ATerm e_19 (ATerm t)
  {
    ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
    t = not_null(b_18);
    if(((c_18 != NULL) && (c_18 != t)))
      _fail(t);
    else
      c_18 = t;
    t = not_null(a_18);
    {
      ATerm h_18 = NULL;
      ATerm h_19 (ATerm t)
      {
        ATerm l_18 = NULL;
        ATerm j_19 (ATerm t)
        {
          t = not_null(l_18);
          if(((g_18 != NULL) && (g_18 != t)))
            _fail(t);
          else
            g_18 = t;
          t = not_null(l_18);
          return(t);
        }
        t = not_null(h_18);
        if(((f_18 != NULL) && (f_18 != t)))
          _fail(t);
        else
          f_18 = t;
        t = not_null(c_18);
        {
          ATerm f_1 (ATerm t)
          {
            ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
            ATerm i_19 (ATerm t)
            {
              t = not_null(j_18);
              if(((d_18 != NULL) && (d_18 != t)))
                _fail(t);
              else
                d_18 = t;
              t = not_null(k_18);
              if(((e_18 != NULL) && (e_18 != t)))
                _fail(t);
              else
                e_18 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_18));
              return(t);
            }
            if(((i_18 != NULL) && (i_18 != t)))
              _fail(t);
            else
              i_18 = t;
            t = not_null(i_18);
            if(match_cons(t, sym_Anno_2))
              {
                j_18 = ATgetArgument(t, 0);
                k_18 = ATgetArgument(t, 1);
                t = i_19(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(f_1, t);
          if(((l_18 != NULL) && (l_18 != t)))
            _fail(t);
          else
            l_18 = t;
          t = j_19(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((h_18 != NULL) && (h_18 != t)))
        _fail(t);
      else
        h_18 = t;
      t = h_19(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_18)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_q_19, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_18)), not_null(d_18))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_18))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_18))));
    }
    return(t);
  }
  ATerm f_19 (ATerm t)
  {
    ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL;
    t = not_null(b_18);
    if(((m_18 != NULL) && (m_18 != t)))
      _fail(t);
    else
      m_18 = t;
    t = not_null(a_18);
    {
      ATerm q_18 = NULL;
      ATerm k_19 (ATerm t)
      {
        ATerm t_18 = NULL;
        ATerm m_19 (ATerm t)
        {
          t = not_null(t_18);
          if(((p_18 != NULL) && (p_18 != t)))
            _fail(t);
          else
            p_18 = t;
          t = not_null(t_18);
          return(t);
        }
        t = not_null(q_18);
        if(((o_18 != NULL) && (o_18 != t)))
          _fail(t);
        else
          o_18 = t;
        t = not_null(m_18);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm r_18 = NULL,s_18 = NULL;
            ATerm l_19 (ATerm t)
            {
              t = not_null(s_18);
              if(((n_18 != NULL) && (n_18 != t)))
                _fail(t);
              else
                n_18 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_18));
              return(t);
            }
            if(((r_18 != NULL) && (r_18 != t)))
              _fail(t);
            else
              r_18 = t;
            t = not_null(r_18);
            if(match_cons(t, sym_RootApp_1))
              {
                s_18 = ATgetArgument(t, 0);
                t = l_19(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(h_1, t);
          if(((t_18 != NULL) && (t_18 != t)))
            _fail(t);
          else
            t_18 = t;
          t = m_19(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((q_18 != NULL) && (q_18 != t)))
        _fail(t);
      else
        q_18 = t;
      t = k_19(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_18)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_18), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_18))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_18))));
    }
    return(t);
  }
  ATerm g_19 (ATerm t)
  {
    ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL;
    t = not_null(b_18);
    if(((u_18 != NULL) && (u_18 != t)))
      _fail(t);
    else
      u_18 = t;
    t = not_null(a_18);
    {
      ATerm z_18 = NULL;
      ATerm n_19 (ATerm t)
      {
        ATerm d_19 = NULL;
        ATerm p_19 (ATerm t)
        {
          t = not_null(d_19);
          if(((y_18 != NULL) && (y_18 != t)))
            _fail(t);
          else
            y_18 = t;
          t = not_null(d_19);
          return(t);
        }
        t = not_null(z_18);
        if(((x_18 != NULL) && (x_18 != t)))
          _fail(t);
        else
          x_18 = t;
        t = not_null(u_18);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
            ATerm o_19 (ATerm t)
            {
              t = not_null(b_19);
              if(((v_18 != NULL) && (v_18 != t)))
                _fail(t);
              else
                v_18 = t;
              t = not_null(c_19);
              if(((w_18 != NULL) && (w_18 != t)))
                _fail(t);
              else
                w_18 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_18));
              return(t);
            }
            if(((a_19 != NULL) && (a_19 != t)))
              _fail(t);
            else
              a_19 = t;
            t = not_null(a_19);
            if(match_cons(t, sym_App_2))
              {
                b_19 = ATgetArgument(t, 0);
                c_19 = ATgetArgument(t, 1);
                t = o_19(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(i_1, t);
          if(((d_19 != NULL) && (d_19 != t)))
            _fail(t);
          else
            d_19 = t;
          t = p_19(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((z_18 != NULL) && (z_18 != t)))
        _fail(t);
      else
        z_18 = t;
      t = n_19(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_18)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(v_18), not_null(w_18), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_18)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_18))));
    }
    return(t);
  }
  if(((a_18 != NULL) && (a_18 != t)))
    _fail(t);
  else
    a_18 = t;
  t = not_null(a_18);
  if(match_cons(t, sym_Build_1))
    {
      b_18 = ATgetArgument(t, 0);
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_19(t);
            ;
            LocalPopChoice(s_19);
          }
        else
          {
            t = r_19;
            {
              ATerm t_19 = t;
              int d_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_19(t);
                  ;
                  LocalPopChoice(d_20);
                }
              else
                {
                  t = t_19;
                  t = g_19(t);
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
ATerm Bapp1_0_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
  ATerm b_20 (ATerm t)
  {
    ATerm y_19 = NULL;
    t = not_null(w_19);
    if(((y_19 != NULL) && (y_19 != t)))
      _fail(t);
    else
      y_19 = t;
    t = not_null(y_19);
    return(t);
  }
  ATerm c_20 (ATerm t)
  {
    ATerm z_19 = NULL,a_20 = NULL;
    t = not_null(w_19);
    if(((a_20 != NULL) && (a_20 != t)))
      _fail(t);
    else
      a_20 = t;
    t = not_null(x_19);
    if(((z_19 != NULL) && (z_19 != t)))
      _fail(t);
    else
      z_19 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_19)), not_null(a_20));
    return(t);
  }
  if(((u_19 != NULL) && (u_19 != t)))
    _fail(t);
  else
    u_19 = t;
  t = not_null(u_19);
  if(match_cons(t, sym_Build_1))
    {
      v_19 = ATgetArgument(t, 0);
      t = not_null(v_19);
      if(match_cons(t, sym_RootApp_1))
        {
          w_19 = ATgetArgument(t, 0);
          t = b_20(t);
        }
      else
        {
          if(match_cons(t, sym_App_2))
            {
              w_19 = ATgetArgument(t, 0);
              x_19 = ATgetArgument(t, 1);
              t = c_20(t);
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
ATerm As_2_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  ATerm x_20 (ATerm t)
  {
    ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,r_20 = NULL;
    ATerm z_20 (ATerm t)
    {
      ATerm s_20 = NULL,t_20 = NULL;
      ATerm a_21 (ATerm t)
      {
        ATerm u_20 = NULL,v_20 = NULL;
        t = not_null(t_20);
        if(((u_20 != NULL) && (u_20 != t)))
          _fail(t);
        else
          u_20 = t;
        t = not_null(t_20);
        {
          ATerm w_20 = NULL;
          ATerm b_21 (ATerm t)
          {
            t = not_null(w_20);
            if(((v_20 != NULL) && (v_20 != t)))
              _fail(t);
            else
              v_20 = t;
            t = not_null(w_20);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(s_20), not_null(u_20)), not_null(p_20));
          if(((w_20 != NULL) && (w_20 != t)))
            _fail(t);
          else
            w_20 = t;
          t = b_21(t);
          t = not_null(v_20);
        }
        return(t);
      }
      t = not_null(r_20);
      if(((s_20 != NULL) && (s_20 != t)))
        _fail(t);
      else
        s_20 = t;
      t = not_null(o_20);
      t = x_92(t);
      if(((t_20 != NULL) && (t_20 != t)))
        _fail(t);
      else
        t_20 = t;
      t = a_21(t);
      return(t);
    }
    t = not_null(j_20);
    if(((m_20 != NULL) && (m_20 != t)))
      _fail(t);
    else
      m_20 = t;
    t = not_null(k_20);
    if(((n_20 != NULL) && (n_20 != t)))
      _fail(t);
    else
      n_20 = t;
    t = not_null(l_20);
    if(((o_20 != NULL) && (o_20 != t)))
      _fail(t);
    else
      o_20 = t;
    t = not_null(j_20);
    {
      ATerm q_20 = NULL;
      ATerm y_20 (ATerm t)
      {
        t = not_null(q_20);
        if(((p_20 != NULL) && (p_20 != t)))
          _fail(t);
        else
          p_20 = t;
        t = not_null(q_20);
        return(t);
      }
      t = SSLgetAnnotations(not_null(m_20));
      if(((q_20 != NULL) && (q_20 != t)))
        _fail(t);
      else
        q_20 = t;
      t = y_20(t);
      t = not_null(n_20);
      t = w_92(t);
      if(((r_20 != NULL) && (r_20 != t)))
        _fail(t);
      else
        r_20 = t;
      t = z_20(t);
    }
    return(t);
  }
  if(((j_20 != NULL) && (j_20 != t)))
    _fail(t);
  else
    j_20 = t;
  t = not_null(j_20);
  if(match_cons(t, sym_As_2))
    {
      k_20 = ATgetArgument(t, 0);
      l_20 = ATgetArgument(t, 1);
      t = x_20(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm PrimT_3_0 (ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm t)
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
        t = x_96(t);
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
      t = w_96(t);
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
      t = v_96(t);
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
ATerm Explode_2_0 (ATerm p_92 (ATerm), ATerm q_92 (ATerm), ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
  ATerm b_23 (ATerm t)
  {
    ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,v_22 = NULL;
    ATerm d_23 (ATerm t)
    {
      ATerm w_22 = NULL,x_22 = NULL;
      ATerm e_23 (ATerm t)
      {
        ATerm y_22 = NULL,z_22 = NULL;
        t = not_null(x_22);
        if(((y_22 != NULL) && (y_22 != t)))
          _fail(t);
        else
          y_22 = t;
        t = not_null(x_22);
        {
          ATerm a_23 = NULL;
          ATerm f_23 (ATerm t)
          {
            t = not_null(a_23);
            if(((z_22 != NULL) && (z_22 != t)))
              _fail(t);
            else
              z_22 = t;
            t = not_null(a_23);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(w_22), not_null(y_22)), not_null(t_22));
          if(((a_23 != NULL) && (a_23 != t)))
            _fail(t);
          else
            a_23 = t;
          t = f_23(t);
          t = not_null(z_22);
        }
        return(t);
      }
      t = not_null(v_22);
      if(((w_22 != NULL) && (w_22 != t)))
        _fail(t);
      else
        w_22 = t;
      t = not_null(s_22);
      t = q_92(t);
      if(((x_22 != NULL) && (x_22 != t)))
        _fail(t);
      else
        x_22 = t;
      t = e_23(t);
      return(t);
    }
    t = not_null(n_22);
    if(((q_22 != NULL) && (q_22 != t)))
      _fail(t);
    else
      q_22 = t;
    t = not_null(o_22);
    if(((r_22 != NULL) && (r_22 != t)))
      _fail(t);
    else
      r_22 = t;
    t = not_null(p_22);
    if(((s_22 != NULL) && (s_22 != t)))
      _fail(t);
    else
      s_22 = t;
    t = not_null(n_22);
    {
      ATerm u_22 = NULL;
      ATerm c_23 (ATerm t)
      {
        t = not_null(u_22);
        if(((t_22 != NULL) && (t_22 != t)))
          _fail(t);
        else
          t_22 = t;
        t = not_null(u_22);
        return(t);
      }
      t = SSLgetAnnotations(not_null(q_22));
      if(((u_22 != NULL) && (u_22 != t)))
        _fail(t);
      else
        u_22 = t;
      t = c_23(t);
      t = not_null(r_22);
      t = p_92(t);
      if(((v_22 != NULL) && (v_22 != t)))
        _fail(t);
      else
        v_22 = t;
      t = d_23(t);
    }
    return(t);
  }
  if(((n_22 != NULL) && (n_22 != t)))
    _fail(t);
  else
    n_22 = t;
  t = not_null(n_22);
  if(match_cons(t, sym_Explode_2))
    {
      o_22 = ATgetArgument(t, 0);
      p_22 = ATgetArgument(t, 1);
      t = b_23(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pat_td_1_0 (ATerm o_135 (ATerm), ATerm t)
{
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_135(t);
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
            ATerm j_1 (ATerm t)
            {
              ATerm l_1 (ATerm t)
              {
                t = pat_td_1_0(o_135, t);
                return(t);
              }
              t = fetch_1_0(l_1, t);
              return(t);
            }
            t = Op_2_0(_id, j_1, t);
            ;
            LocalPopChoice(h_20);
          }
        else
          {
            t = g_20;
            {
              ATerm i_20 = t;
              int c_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_1 (ATerm t)
                  {
                    t = pat_td_1_0(o_135, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, m_1, t);
                  ;
                  LocalPopChoice(c_21);
                }
              else
                {
                  t = i_20;
                  {
                    ATerm d_21 = t;
                    int e_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_1 (ATerm t)
                        {
                          t = pat_td_1_0(o_135, t);
                          return(t);
                        }
                        t = Explode_2_0(o_1, _id, t);
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
                              ATerm p_1 (ATerm t)
                              {
                                ATerm r_1 (ATerm t)
                                {
                                  t = pat_td_1_0(o_135, t);
                                  return(t);
                                }
                                t = fetch_1_0(r_1, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, p_1, t);
                              ;
                              LocalPopChoice(g_21);
                            }
                          else
                            {
                              t = f_21;
                              {
                                ATerm s_1 (ATerm t)
                                {
                                  t = pat_td_1_0(o_135, t);
                                  return(t);
                                }
                                t = As_2_0(_id, s_1, t);
                              }
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
ATerm Bapp0_0_0 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL;
  ATerm j_24 (ATerm t)
  {
    ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
    t = not_null(s_23);
    if(((t_23 != NULL) && (t_23 != t)))
      _fail(t);
    else
      t_23 = t;
    t = not_null(r_23);
    {
      ATerm z_23 = NULL;
      ATerm m_24 (ATerm t)
      {
        t = not_null(z_23);
        if(((v_23 != NULL) && (v_23 != t)))
          _fail(t);
        else
          v_23 = t;
        t = not_null(z_23);
        return(t);
      }
      t = not_null(t_23);
      {
        ATerm u_1 (ATerm t)
        {
          ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
          ATerm l_24 (ATerm t)
          {
            t = not_null(y_23);
            if(((u_23 != NULL) && (u_23 != t)))
              _fail(t);
            else
              u_23 = t;
            t = not_null(u_23);
            return(t);
          }
          if(((w_23 != NULL) && (w_23 != t)))
            _fail(t);
          else
            w_23 = t;
          t = not_null(w_23);
          if(match_cons(t, sym_RootApp_1))
            {
              x_23 = ATgetArgument(t, 0);
              t = not_null(x_23);
              if(match_cons(t, sym_Build_1))
                {
                  y_23 = ATgetArgument(t, 0);
                  t = l_24(t);
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
        t = pat_td_1_0(u_1, t);
        if(((z_23 != NULL) && (z_23 != t)))
          _fail(t);
        else
          z_23 = t;
        t = m_24(t);
      }
      t = (ATerm) ATmakeAppl(sym_Build_1, not_null(v_23));
    }
    return(t);
  }
  ATerm k_24 (ATerm t)
  {
    ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
    t = not_null(s_23);
    if(((a_24 != NULL) && (a_24 != t)))
      _fail(t);
    else
      a_24 = t;
    t = not_null(r_23);
    {
      ATerm i_24 = NULL;
      ATerm o_24 (ATerm t)
      {
        t = not_null(i_24);
        if(((d_24 != NULL) && (d_24 != t)))
          _fail(t);
        else
          d_24 = t;
        t = not_null(i_24);
        return(t);
      }
      t = not_null(a_24);
      {
        ATerm v_1 (ATerm t)
        {
          ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL;
          ATerm n_24 (ATerm t)
          {
            t = not_null(g_24);
            if(((c_24 != NULL) && (c_24 != t)))
              _fail(t);
            else
              c_24 = t;
            t = not_null(h_24);
            if(((b_24 != NULL) && (b_24 != t)))
              _fail(t);
            else
              b_24 = t;
            t = not_null(c_24);
            return(t);
          }
          if(((e_24 != NULL) && (e_24 != t)))
            _fail(t);
          else
            e_24 = t;
          t = not_null(e_24);
          if(match_cons(t, sym_App_2))
            {
              f_24 = ATgetArgument(t, 0);
              h_24 = ATgetArgument(t, 1);
              t = not_null(f_24);
              if(match_cons(t, sym_Build_1))
                {
                  g_24 = ATgetArgument(t, 0);
                  t = n_24(t);
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
        t = pat_td_1_0(v_1, t);
        if(((i_24 != NULL) && (i_24 != t)))
          _fail(t);
        else
          i_24 = t;
        t = o_24(t);
      }
      t = (ATerm) ATmakeAppl(sym_Build_1, not_null(d_24));
    }
    return(t);
  }
  if(((r_23 != NULL) && (r_23 != t)))
    _fail(t);
  else
    r_23 = t;
  t = not_null(r_23);
  if(match_cons(t, sym_Build_1))
    {
      s_23 = ATgetArgument(t, 0);
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_24(t);
            ;
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            t = k_24(t);
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0_0(t);
      ;
      LocalPopChoice(i_22);
    }
  else
    {
      t = h_22;
      {
        ATerm j_22 = t;
        int k_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0_0(t);
            ;
            LocalPopChoice(k_22);
          }
        else
          {
            t = j_22;
            t = Bapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL;
  ATerm z_24 (ATerm t)
  {
    ATerm v_24 = NULL,w_24 = NULL;
    t = not_null(t_24);
    if(((v_24 != NULL) && (v_24 != t)))
      _fail(t);
    else
      v_24 = t;
    t = not_null(t_24);
    {
      ATerm x_24 = NULL;
      ATerm b_25 (ATerm t)
      {
        t = not_null(x_24);
        if(((w_24 != NULL) && (w_24 != t)))
          _fail(t);
        else
          w_24 = t;
        t = not_null(x_24);
        return(t);
      }
      t = not_null(v_24);
      {
        ATerm l_22 = t;
        if((PushChoice() == 0))
          {
            t = Var_1_0(_id, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_22;
          }
        t = new_0_0(t);
        if(((x_24 != NULL) && (x_24 != t)))
          _fail(t);
        else
          x_24 = t;
        t = b_25(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(w_24)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_24)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_24))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_24))));
    }
    return(t);
  }
  ATerm a_25 (ATerm t)
  {
    ATerm y_24 = NULL;
    t = not_null(u_24);
    if(((y_24 != NULL) && (y_24 != t)))
      _fail(t);
    else
      y_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_m_22, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_24))));
    return(t);
  }
  if(((t_24 != NULL) && (t_24 != t)))
    _fail(t);
  else
    t_24 = t;
  t = not_null(t_24);
  if(match_cons(t, sym_Var_1))
    {
      u_24 = ATgetArgument(t, 0);
      {
        ATerm g_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_24(t);
            ;
            LocalPopChoice(h_23);
          }
        else
          {
            t = g_23;
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
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
  ATerm k_26 (ATerm t)
  {
    ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
    t = not_null(n_25);
    if(((p_25 != NULL) && (p_25 != t)))
      _fail(t);
    else
      p_25 = t;
    t = not_null(o_25);
    if(((q_25 != NULL) && (q_25 != t)))
      _fail(t);
    else
      q_25 = t;
    t = not_null(l_25);
    if(((r_25 != NULL) && (r_25 != t)))
      _fail(t);
    else
      r_25 = t;
    t = not_null(m_25);
    {
      ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL;
      ATerm m_26 (ATerm t)
      {
        t = not_null(w_25);
        if(((s_25 != NULL) && (s_25 != t)))
          _fail(t);
        else
          s_25 = t;
        t = not_null(y_25);
        if(((t_25 != NULL) && (t_25 != t)))
          _fail(t);
        else
          t_25 = t;
        t = not_null(z_25);
        if(((u_25 != NULL) && (u_25 != t)))
          _fail(t);
        else
          u_25 = t;
        t = not_null(v_25);
        return(t);
      }
      t = not_null(r_25);
      {
        ATerm x_1 (ATerm t)
        {
          ATerm i_23 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_23;
            }
          return(t);
        }
        t = fetch_1_0(x_1, t);
        t = not_null(r_25);
        t = unzip_1_0(LiftPrimArg_0_0, t);
        {
          ATerm y_1 (ATerm t)
          {
            t = unzip_1_0(_id, t);
            return(t);
          }
          t = _2_0(concat_0_0, y_1, t);
          if(((v_25 != NULL) && (v_25 != t)))
            _fail(t);
          else
            v_25 = t;
          t = not_null(v_25);
          if(match_cons(t, sym__2))
            {
              w_25 = ATgetArgument(t, 0);
              x_25 = ATgetArgument(t, 1);
              t = not_null(x_25);
              if(match_cons(t, sym__2))
                {
                  y_25 = ATgetArgument(t, 0);
                  z_25 = ATgetArgument(t, 1);
                  t = m_26(t);
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
      t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(t_25)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(p_25), not_null(q_25), not_null(u_25))));
    }
    return(t);
  }
  ATerm l_26 (ATerm t)
  {
    ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL;
    t = not_null(n_25);
    if(((a_26 != NULL) && (a_26 != t)))
      _fail(t);
    else
      a_26 = t;
    t = not_null(o_25);
    if(((b_26 != NULL) && (b_26 != t)))
      _fail(t);
    else
      b_26 = t;
    t = not_null(m_25);
    {
      ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
      ATerm n_26 (ATerm t)
      {
        t = not_null(g_26);
        if(((c_26 != NULL) && (c_26 != t)))
          _fail(t);
        else
          c_26 = t;
        t = not_null(i_26);
        if(((d_26 != NULL) && (d_26 != t)))
          _fail(t);
        else
          d_26 = t;
        t = not_null(j_26);
        if(((e_26 != NULL) && (e_26 != t)))
          _fail(t);
        else
          e_26 = t;
        t = not_null(f_26);
        return(t);
      }
      t = not_null(b_26);
      {
        ATerm z_1 (ATerm t)
        {
          ATerm j_23 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_23;
            }
          return(t);
        }
        t = fetch_1_0(z_1, t);
        t = not_null(b_26);
        t = unzip_1_0(LiftPrimArg_0_0, t);
        {
          ATerm a_2 (ATerm t)
          {
            t = unzip_1_0(_id, t);
            return(t);
          }
          t = _2_0(concat_0_0, a_2, t);
          if(((f_26 != NULL) && (f_26 != t)))
            _fail(t);
          else
            f_26 = t;
          t = not_null(f_26);
          if(match_cons(t, sym__2))
            {
              g_26 = ATgetArgument(t, 0);
              h_26 = ATgetArgument(t, 1);
              t = not_null(h_26);
              if(match_cons(t, sym__2))
                {
                  i_26 = ATgetArgument(t, 0);
                  j_26 = ATgetArgument(t, 1);
                  t = n_26(t);
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
      t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(d_26)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(a_26), (ATerm)ATempty, not_null(e_26))));
    }
    return(t);
  }
  if(((m_25 != NULL) && (m_25 != t)))
    _fail(t);
  else
    m_25 = t;
  t = not_null(m_25);
  if(match_cons(t, sym_PrimT_3))
    {
      n_25 = ATgetArgument(t, 0);
      o_25 = ATgetArgument(t, 1);
      l_25 = ATgetArgument(t, 2);
      t = k_26(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          n_25 = ATgetArgument(t, 0);
          o_25 = ATgetArgument(t, 1);
          t = l_26(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm desugar_0_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    t = try_1_0(desugarRule_0_0, t);
    {
      ATerm c_2 (ATerm t)
      {
        ATerm k_23 = t;
        int l_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(l_23);
          }
        else
          {
            t = k_23;
            {
              ATerm m_23 = t;
              int n_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(n_23);
                }
              else
                {
                  t = m_23;
                  {
                    ATerm o_23 = t;
                    int p_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(p_23);
                      }
                    else
                      {
                        t = o_23;
                        {
                          ATerm q_23 = t;
                          int p_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0_0(t);
                              ;
                              LocalPopChoice(p_24);
                            }
                          else
                            {
                              t = q_23;
                              t = Expl_0_0(t);
                            }
                        }
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1_0(c_2, t);
    }
    return(t);
  }
  t = topdown_1_0(b_2, t);
  return(t);
}
ATerm desugar_spec_0_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SDef_3_0(_id, _id, desugar_0_0, t);
        ;
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        t = SDefT_4_0(_id, _id, _id, desugar_0_0, t);
      }
    return(t);
  }
  t = map_1_0(d_2, t);
  return(t);
}
ATerm Strategies_1_0 (ATerm g_91 (ATerm), ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL;
  ATerm d_27 (ATerm t)
  {
    ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,z_26 = NULL;
    ATerm f_27 (ATerm t)
    {
      ATerm a_27 = NULL,b_27 = NULL;
      t = not_null(z_26);
      if(((a_27 != NULL) && (a_27 != t)))
        _fail(t);
      else
        a_27 = t;
      t = not_null(z_26);
      {
        ATerm c_27 = NULL;
        ATerm g_27 (ATerm t)
        {
          t = not_null(c_27);
          if(((b_27 != NULL) && (b_27 != t)))
            _fail(t);
          else
            b_27 = t;
          t = not_null(c_27);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(a_27)), not_null(x_26));
        if(((c_27 != NULL) && (c_27 != t)))
          _fail(t);
        else
          c_27 = t;
        t = g_27(t);
        t = not_null(b_27);
      }
      return(t);
    }
    t = not_null(t_26);
    if(((v_26 != NULL) && (v_26 != t)))
      _fail(t);
    else
      v_26 = t;
    t = not_null(u_26);
    if(((w_26 != NULL) && (w_26 != t)))
      _fail(t);
    else
      w_26 = t;
    t = not_null(t_26);
    {
      ATerm y_26 = NULL;
      ATerm e_27 (ATerm t)
      {
        t = not_null(y_26);
        if(((x_26 != NULL) && (x_26 != t)))
          _fail(t);
        else
          x_26 = t;
        t = not_null(y_26);
        return(t);
      }
      t = SSLgetAnnotations(not_null(v_26));
      if(((y_26 != NULL) && (y_26 != t)))
        _fail(t);
      else
        y_26 = t;
      t = e_27(t);
      t = not_null(w_26);
      t = g_91(t);
      if(((z_26 != NULL) && (z_26 != t)))
        _fail(t);
      else
        z_26 = t;
      t = f_27(t);
    }
    return(t);
  }
  if(((t_26 != NULL) && (t_26 != t)))
    _fail(t);
  else
    t_26 = t;
  t = not_null(t_26);
  if(match_cons(t, sym_Strategies_1))
    {
      u_26 = ATgetArgument(t, 0);
      t = d_27(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1_0 (ATerm l_91 (ATerm), ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL;
  ATerm w_27 (ATerm t)
  {
    ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,s_27 = NULL;
    ATerm y_27 (ATerm t)
    {
      ATerm t_27 = NULL,u_27 = NULL;
      t = not_null(s_27);
      if(((t_27 != NULL) && (t_27 != t)))
        _fail(t);
      else
        t_27 = t;
      t = not_null(s_27);
      {
        ATerm v_27 = NULL;
        ATerm z_27 (ATerm t)
        {
          t = not_null(v_27);
          if(((u_27 != NULL) && (u_27 != t)))
            _fail(t);
          else
            u_27 = t;
          t = not_null(v_27);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(t_27)), not_null(q_27));
        if(((v_27 != NULL) && (v_27 != t)))
          _fail(t);
        else
          v_27 = t;
        t = z_27(t);
        t = not_null(u_27);
      }
      return(t);
    }
    t = not_null(m_27);
    if(((o_27 != NULL) && (o_27 != t)))
      _fail(t);
    else
      o_27 = t;
    t = not_null(n_27);
    if(((p_27 != NULL) && (p_27 != t)))
      _fail(t);
    else
      p_27 = t;
    t = not_null(m_27);
    {
      ATerm r_27 = NULL;
      ATerm x_27 (ATerm t)
      {
        t = not_null(r_27);
        if(((q_27 != NULL) && (q_27 != t)))
          _fail(t);
        else
          q_27 = t;
        t = not_null(r_27);
        return(t);
      }
      t = SSLgetAnnotations(not_null(o_27));
      if(((r_27 != NULL) && (r_27 != t)))
        _fail(t);
      else
        r_27 = t;
      t = x_27(t);
      t = not_null(p_27);
      t = l_91(t);
      if(((s_27 != NULL) && (s_27 != t)))
        _fail(t);
      else
        s_27 = t;
      t = y_27(t);
    }
    return(t);
  }
  if(((m_27 != NULL) && (m_27 != t)))
    _fail(t);
  else
    m_27 = t;
  t = not_null(m_27);
  if(match_cons(t, sym_Specification_1))
    {
      n_27 = ATgetArgument(t, 0);
      t = w_27(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm d_126 (ATerm), ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm s_24;
    s_24 = t;
    {
      ATerm b_28 = NULL;
      ATerm c_28 = NULL;
      ATerm d_28 (ATerm t)
      {
        t = not_null(c_28);
        if(((b_28 != NULL) && (b_28 != t)))
          _fail(t);
        else
          b_28 = t;
        t = not_null(c_28);
        return(t);
      }
      t = term_c_25;
      t = get_config_0_0(t);
      if(((c_28 != NULL) && (c_28 != t)))
        _fail(t);
      else
        c_28 = t;
      t = d_28(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), term_d_25);
      t = geq_0_0(t);
    }
    t = s_24;
    t = d_126(t);
    return(t);
  }
  t = try_1_0(e_2, t);
  return(t);
}
ATerm timing_1_0 (ATerm a_105 (ATerm), ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm e_25;
    e_25 = t;
    t = dtime_0_0(t);
    t = debug_1_0(a_105, t);
    t = e_25;
    return(t);
  }
  t = if_verbose3_1_0(f_2, t);
  return(t);
}
ATerm spaste_1_0 (ATerm a_135 (ATerm), ATerm t)
{
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 (ATerm t)
      {
        t = split_2_0(_id, a_135, t);
        {
          ATerm h_2 (ATerm t)
          {
            ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL;
            ATerm w_28 (ATerm t)
            {
              ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
              t = not_null(l_28);
              if(((p_28 != NULL) && (p_28 != t)))
                _fail(t);
              else
                p_28 = t;
              t = not_null(m_28);
              if(((q_28 != NULL) && (q_28 != t)))
                _fail(t);
              else
                q_28 = t;
              t = not_null(o_28);
              if(((r_28 != NULL) && (r_28 != t)))
                _fail(t);
              else
                r_28 = t;
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_28), not_null(p_28), not_null(q_28));
              return(t);
            }
            ATerm x_28 (ATerm t)
            {
              ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
              t = not_null(l_28);
              if(((s_28 != NULL) && (s_28 != t)))
                _fail(t);
              else
                s_28 = t;
              t = not_null(m_28);
              if(((t_28 != NULL) && (t_28 != t)))
                _fail(t);
              else
                t_28 = t;
              t = not_null(n_28);
              if(((u_28 != NULL) && (u_28 != t)))
                _fail(t);
              else
                u_28 = t;
              t = not_null(o_28);
              if(((v_28 != NULL) && (v_28 != t)))
                _fail(t);
              else
                v_28 = t;
              t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(v_28), not_null(s_28), not_null(t_28), not_null(u_28));
              return(t);
            }
            if(((i_28 != NULL) && (i_28 != t)))
              _fail(t);
            else
              i_28 = t;
            t = not_null(i_28);
            if(match_cons(t, sym__2))
              {
                j_28 = ATgetArgument(t, 0);
                o_28 = ATgetArgument(t, 1);
                t = not_null(j_28);
                if(match_cons(t, sym_SDef_3))
                  {
                    k_28 = ATgetArgument(t, 0);
                    l_28 = ATgetArgument(t, 1);
                    m_28 = ATgetArgument(t, 2);
                    t = w_28(t);
                  }
                else
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        k_28 = ATgetArgument(t, 0);
                        l_28 = ATgetArgument(t, 1);
                        m_28 = ATgetArgument(t, 2);
                        n_28 = ATgetArgument(t, 3);
                        t = x_28(t);
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
          t = zip_1_0(h_2, t);
        }
        return(t);
      }
      t = Let_2_0(g_2, _id, t);
      ;
      LocalPopChoice(g_25);
    }
  else
    {
      t = f_25;
      {
        ATerm h_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_2 (ATerm t)
            {
              t = split_2_0(_id, a_135, t);
              t = zip_1_0(ReplaceVar_0_0, t);
              return(t);
            }
            t = SDef_3_0(_id, i_2, _id, t);
            ;
            LocalPopChoice(i_25);
          }
        else
          {
            t = h_25;
            {
              ATerm j_25 = t;
              int k_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_2 (ATerm t)
                  {
                    t = split_2_0(_id, a_135, t);
                    t = zip_1_0(ReplaceVar_0_0, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, j_2, _id, _id, t);
                  ;
                  LocalPopChoice(k_25);
                }
              else
                {
                  t = j_25;
                  {
                    ATerm o_26 = t;
                    int p_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_2 (ATerm t)
                        {
                          t = split_2_0(_id, a_135, t);
                          t = zip_1_0(ReplaceVar_0_0, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, k_2, _id, _id, t);
                        ;
                        LocalPopChoice(p_26);
                      }
                    else
                      {
                        t = o_26;
                        {
                          ATerm l_2 (ATerm t)
                          {
                            t = a_135(t);
                            t = Hd_0_0(t);
                            return(t);
                          }
                          t = Rec_2_0(l_2, _id, t);
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
ATerm Rec_2_0 (ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
  ATerm s_29 (ATerm t)
  {
    ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,m_29 = NULL;
    ATerm u_29 (ATerm t)
    {
      ATerm n_29 = NULL,o_29 = NULL;
      ATerm v_29 (ATerm t)
      {
        ATerm p_29 = NULL,q_29 = NULL;
        t = not_null(o_29);
        if(((p_29 != NULL) && (p_29 != t)))
          _fail(t);
        else
          p_29 = t;
        t = not_null(o_29);
        {
          ATerm r_29 = NULL;
          ATerm w_29 (ATerm t)
          {
            t = not_null(r_29);
            if(((q_29 != NULL) && (q_29 != t)))
              _fail(t);
            else
              q_29 = t;
            t = not_null(r_29);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(n_29), not_null(p_29)), not_null(k_29));
          if(((r_29 != NULL) && (r_29 != t)))
            _fail(t);
          else
            r_29 = t;
          t = w_29(t);
          t = not_null(q_29);
        }
        return(t);
      }
      t = not_null(m_29);
      if(((n_29 != NULL) && (n_29 != t)))
        _fail(t);
      else
        n_29 = t;
      t = not_null(j_29);
      t = n_96(t);
      if(((o_29 != NULL) && (o_29 != t)))
        _fail(t);
      else
        o_29 = t;
      t = v_29(t);
      return(t);
    }
    t = not_null(e_29);
    if(((h_29 != NULL) && (h_29 != t)))
      _fail(t);
    else
      h_29 = t;
    t = not_null(f_29);
    if(((i_29 != NULL) && (i_29 != t)))
      _fail(t);
    else
      i_29 = t;
    t = not_null(g_29);
    if(((j_29 != NULL) && (j_29 != t)))
      _fail(t);
    else
      j_29 = t;
    t = not_null(e_29);
    {
      ATerm l_29 = NULL;
      ATerm t_29 (ATerm t)
      {
        t = not_null(l_29);
        if(((k_29 != NULL) && (k_29 != t)))
          _fail(t);
        else
          k_29 = t;
        t = not_null(l_29);
        return(t);
      }
      t = SSLgetAnnotations(not_null(h_29));
      if(((l_29 != NULL) && (l_29 != t)))
        _fail(t);
      else
        l_29 = t;
      t = t_29(t);
      t = not_null(i_29);
      t = m_96(t);
      if(((m_29 != NULL) && (m_29 != t)))
        _fail(t);
      else
        m_29 = t;
      t = u_29(t);
    }
    return(t);
  }
  if(((e_29 != NULL) && (e_29 != t)))
    _fail(t);
  else
    e_29 = t;
  t = not_null(e_29);
  if(match_cons(t, sym_Rec_2))
    {
      f_29 = ATgetArgument(t, 0);
      g_29 = ATgetArgument(t, 1);
      t = s_29(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2_0 (ATerm p_95 (ATerm), ATerm q_95 (ATerm), ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  ATerm r_30 (ATerm t)
  {
    ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,l_30 = NULL;
    ATerm t_30 (ATerm t)
    {
      ATerm m_30 = NULL,n_30 = NULL;
      ATerm u_30 (ATerm t)
      {
        ATerm o_30 = NULL,p_30 = NULL;
        t = not_null(n_30);
        if(((o_30 != NULL) && (o_30 != t)))
          _fail(t);
        else
          o_30 = t;
        t = not_null(n_30);
        {
          ATerm q_30 = NULL;
          ATerm v_30 (ATerm t)
          {
            t = not_null(q_30);
            if(((p_30 != NULL) && (p_30 != t)))
              _fail(t);
            else
              p_30 = t;
            t = not_null(q_30);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(m_30), not_null(o_30)), not_null(j_30));
          if(((q_30 != NULL) && (q_30 != t)))
            _fail(t);
          else
            q_30 = t;
          t = v_30(t);
          t = not_null(p_30);
        }
        return(t);
      }
      t = not_null(l_30);
      if(((m_30 != NULL) && (m_30 != t)))
        _fail(t);
      else
        m_30 = t;
      t = not_null(i_30);
      t = q_95(t);
      if(((n_30 != NULL) && (n_30 != t)))
        _fail(t);
      else
        n_30 = t;
      t = u_30(t);
      return(t);
    }
    t = not_null(d_30);
    if(((g_30 != NULL) && (g_30 != t)))
      _fail(t);
    else
      g_30 = t;
    t = not_null(e_30);
    if(((h_30 != NULL) && (h_30 != t)))
      _fail(t);
    else
      h_30 = t;
    t = not_null(f_30);
    if(((i_30 != NULL) && (i_30 != t)))
      _fail(t);
    else
      i_30 = t;
    t = not_null(d_30);
    {
      ATerm k_30 = NULL;
      ATerm s_30 (ATerm t)
      {
        t = not_null(k_30);
        if(((j_30 != NULL) && (j_30 != t)))
          _fail(t);
        else
          j_30 = t;
        t = not_null(k_30);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_30));
      if(((k_30 != NULL) && (k_30 != t)))
        _fail(t);
      else
        k_30 = t;
      t = s_30(t);
      t = not_null(h_30);
      t = p_95(t);
      if(((l_30 != NULL) && (l_30 != t)))
        _fail(t);
      else
        l_30 = t;
      t = t_30(t);
    }
    return(t);
  }
  if(((d_30 != NULL) && (d_30 != t)))
    _fail(t);
  else
    d_30 = t;
  t = not_null(d_30);
  if(match_cons(t, sym_Let_2))
    {
      e_30 = ATgetArgument(t, 0);
      f_30 = ATgetArgument(t, 1);
      t = r_30(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm t)
{
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(b_135, b_135, t);
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      {
        ATerm s_26 = t;
        int h_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(d_135, d_135, b_135, t);
            ;
            LocalPopChoice(h_27);
          }
        else
          {
            t = s_26;
            {
              ATerm i_27 = t;
              int j_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(d_135, d_135, d_135, b_135, t);
                  ;
                  LocalPopChoice(j_27);
                }
              else
                {
                  t = i_27;
                  t = Rec_2_0(d_135, b_135, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
  ATerm h_31 (ATerm t)
  {
    ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL;
    t = not_null(z_30);
    if(((d_31 != NULL) && (d_31 != t)))
      _fail(t);
    else
      d_31 = t;
    t = not_null(a_31);
    if(((g_31 != NULL) && (g_31 != t)))
      _fail(t);
    else
      g_31 = t;
    t = not_null(b_31);
    if(((e_31 != NULL) && (e_31 != t)))
      _fail(t);
    else
      e_31 = t;
    t = not_null(c_31);
    if(((f_31 != NULL) && (f_31 != t)))
      _fail(t);
    else
      f_31 = t;
    t = not_null(g_31);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((y_30 != NULL) && (y_30 != t)))
    _fail(t);
  else
    y_30 = t;
  t = not_null(y_30);
  if(match_cons(t, sym_RDefT_4))
    {
      z_30 = ATgetArgument(t, 0);
      a_31 = ATgetArgument(t, 1);
      b_31 = ATgetArgument(t, 2);
      c_31 = ATgetArgument(t, 3);
      t = h_31(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
  ATerm t_31 (ATerm t)
  {
    ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL;
    t = not_null(l_31);
    if(((p_31 != NULL) && (p_31 != t)))
      _fail(t);
    else
      p_31 = t;
    t = not_null(m_31);
    if(((s_31 != NULL) && (s_31 != t)))
      _fail(t);
    else
      s_31 = t;
    t = not_null(n_31);
    if(((q_31 != NULL) && (q_31 != t)))
      _fail(t);
    else
      q_31 = t;
    t = not_null(o_31);
    if(((r_31 != NULL) && (r_31 != t)))
      _fail(t);
    else
      r_31 = t;
    t = not_null(s_31);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((k_31 != NULL) && (k_31 != t)))
    _fail(t);
  else
    k_31 = t;
  t = not_null(k_31);
  if(match_cons(t, sym_SDefT_4))
    {
      l_31 = ATgetArgument(t, 0);
      m_31 = ATgetArgument(t, 1);
      n_31 = ATgetArgument(t, 2);
      o_31 = ATgetArgument(t, 3);
      t = t_31(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind3_0_0 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
  ATerm b_32 (ATerm t)
  {
    ATerm z_31 = NULL,a_32 = NULL;
    t = not_null(x_31);
    if(((a_32 != NULL) && (a_32 != t)))
      _fail(t);
    else
      a_32 = t;
    t = not_null(y_31);
    if(((z_31 != NULL) && (z_31 != t)))
      _fail(t);
    else
      z_31 = t;
    t = (ATerm) ATinsert(ATempty, not_null(a_32));
    return(t);
  }
  if(((w_31 != NULL) && (w_31 != t)))
    _fail(t);
  else
    w_31 = t;
  t = not_null(w_31);
  if(match_cons(t, sym_Rec_2))
    {
      x_31 = ATgetArgument(t, 0);
      y_31 = ATgetArgument(t, 1);
      t = b_32(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL;
  ATerm l_32 (ATerm t)
  {
    ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
    t = not_null(f_32);
    if(((i_32 != NULL) && (i_32 != t)))
      _fail(t);
    else
      i_32 = t;
    t = not_null(g_32);
    if(((k_32 != NULL) && (k_32 != t)))
      _fail(t);
    else
      k_32 = t;
    t = not_null(h_32);
    if(((j_32 != NULL) && (j_32 != t)))
      _fail(t);
    else
      j_32 = t;
    t = not_null(k_32);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((e_32 != NULL) && (e_32 != t)))
    _fail(t);
  else
    e_32 = t;
  t = not_null(e_32);
  if(match_cons(t, sym_SDef_3))
    {
      f_32 = ATgetArgument(t, 0);
      g_32 = ATgetArgument(t, 1);
      h_32 = ATgetArgument(t, 2);
      t = l_32(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
  ATerm d_33 (ATerm t)
  {
    ATerm u_32 = NULL,v_32 = NULL;
    t = not_null(s_32);
    if(((v_32 != NULL) && (v_32 != t)))
      _fail(t);
    else
      v_32 = t;
    t = not_null(t_32);
    if(((u_32 != NULL) && (u_32 != t)))
      _fail(t);
    else
      u_32 = t;
    t = not_null(v_32);
    {
      ATerm m_2 (ATerm t)
      {
        ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL;
        ATerm e_33 (ATerm t)
        {
          ATerm b_33 = NULL;
          t = not_null(x_32);
          if(((b_33 != NULL) && (b_33 != t)))
            _fail(t);
          else
            b_33 = t;
          t = not_null(b_33);
          return(t);
        }
        ATerm f_33 (ATerm t)
        {
          ATerm c_33 = NULL;
          t = not_null(x_32);
          if(((c_33 != NULL) && (c_33 != t)))
            _fail(t);
          else
            c_33 = t;
          t = not_null(c_33);
          return(t);
        }
        if(((w_32 != NULL) && (w_32 != t)))
          _fail(t);
        else
          w_32 = t;
        t = not_null(w_32);
        if(match_cons(t, sym_SDef_3))
          {
            x_32 = ATgetArgument(t, 0);
            y_32 = ATgetArgument(t, 1);
            z_32 = ATgetArgument(t, 2);
            t = e_33(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                x_32 = ATgetArgument(t, 0);
                y_32 = ATgetArgument(t, 1);
                z_32 = ATgetArgument(t, 2);
                a_33 = ATgetArgument(t, 3);
                t = f_33(t);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      t = map_1_0(m_2, t);
    }
    return(t);
  }
  if(((r_32 != NULL) && (r_32 != t)))
    _fail(t);
  else
    r_32 = t;
  t = not_null(r_32);
  if(match_cons(t, sym_Let_2))
    {
      s_32 = ATgetArgument(t, 0);
      t_32 = ATgetArgument(t, 1);
      t = d_33(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        {
          ATerm a_28 = t;
          int e_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(e_28);
            }
          else
            {
              t = a_28;
              {
                ATerm f_28 = t;
                int g_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0_0(t);
                    ;
                    LocalPopChoice(g_28);
                  }
                else
                  {
                    t = f_28;
                    {
                      ATerm h_28 = t;
                      int y_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(y_28);
                        }
                      else
                        {
                          t = h_28;
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
  t = rename_4_0(SVar_1_0, n_2, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm rename_4_0 (ATerm w_131 (ATerm, ATerm (ATerm)), ATerm x_131 (ATerm), ATerm y_131 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_131 (ATerm, ATerm (ATerm)), ATerm t)
{
  ATerm h_33 = NULL;
  ATerm j_33 (ATerm t)
  {
    ATerm i_33 = NULL;
    t = not_null(h_33);
    if(((i_33 != NULL) && (i_33 != t)))
      _fail(t);
    else
      i_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_33), (ATerm) ATempty);
    {
      ATerm k_33 (ATerm t)
      {
        ATerm o_2 (ATerm t)
        {
          ATerm z_28 = t;
          int a_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1_0(w_131, t);
              ;
              LocalPopChoice(a_29);
            }
          else
            {
              t = z_28;
              t = RnBinding_2_0(x_131, z_131, t);
              t = DistBinding_2_0(k_33, y_131, t);
            }
          return(t);
        }
        t = env_alltd_1_0(o_2, t);
        return(t);
      }
      t = k_33(t);
    }
    return(t);
  }
  if(((h_33 != NULL) && (h_33 != t)))
    _fail(t);
  else
    h_33 = t;
  t = j_33(t);
  return(t);
}
ATerm trename_0_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
        {
          ATerm d_29 = t;
          int x_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0_0(t);
              ;
              LocalPopChoice(x_29);
            }
          else
            {
              t = d_29;
              t = Bind8_0_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, p_2, tboundin_3_0, tpaste_1_0, t);
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = trename_0_0(t);
  t = srename_0_0(t);
  return(t);
}
ATerm SingleListVar_0_0 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
  ATerm s_33 (ATerm t)
  {
    ATerm r_33 = NULL;
    t = not_null(q_33);
    if(((r_33 != NULL) && (r_33 != t)))
      _fail(t);
    else
      r_33 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_33));
    return(t);
  }
  if(((o_33 != NULL) && (o_33 != t)))
    _fail(t);
  else
    o_33 = t;
  t = not_null(o_33);
  if(match_cons(t, sym_Var_1))
    {
      p_33 = ATgetArgument(t, 0);
      t = not_null(p_33);
      if(match_cons(t, sym_ListVar_1))
        {
          q_33 = ATgetArgument(t, 0);
          t = s_33(t);
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
ATerm ListBuild_0_0 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL;
  ATerm y_34 (ATerm t)
  {
    ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
    t = not_null(i_34);
    if(((j_34 != NULL) && (j_34 != t)))
      _fail(t);
    else
      j_34 = t;
    t = not_null(h_34);
    {
      ATerm x_34 = NULL;
      ATerm a_35 (ATerm t)
      {
        t = not_null(x_34);
        if(((l_34 != NULL) && (l_34 != t)))
          _fail(t);
        else
          l_34 = t;
        t = not_null(x_34);
        return(t);
      }
      t = not_null(j_34);
      {
        ATerm q_2 (ATerm t)
        {
          ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
          ATerm z_34 (ATerm t)
          {
            t = not_null(r_34);
            if(((k_34 != NULL) && (k_34 != t)))
              _fail(t);
            else
              k_34 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_34));
            return(t);
          }
          if(((m_34 != NULL) && (m_34 != t)))
            _fail(t);
          else
            m_34 = t;
          t = not_null(m_34);
          if(match_cons(t, sym_Op_2))
            {
              n_34 = ATgetArgument(t, 0);
              o_34 = ATgetArgument(t, 1);
              t = not_null(n_34);
              if(match_string(t, "Cons"))
                {
                  t = not_null(o_34);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      p_34 = ATgetFirst((ATermList) t);
                      s_34 = (ATerm) ATgetNext((ATermList) t);
                      t = not_null(p_34);
                      if(match_cons(t, sym_Var_1))
                        {
                          q_34 = ATgetArgument(t, 0);
                          t = not_null(q_34);
                          if(match_cons(t, sym_ListVar_1))
                            {
                              r_34 = ATgetArgument(t, 0);
                              t = not_null(s_34);
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  t_34 = ATgetFirst((ATermList) t);
                                  w_34 = (ATerm) ATgetNext((ATermList) t);
                                  t = not_null(t_34);
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      u_34 = ATgetArgument(t, 0);
                                      v_34 = ATgetArgument(t, 1);
                                      t = not_null(u_34);
                                      if(match_string(t, "Nil"))
                                        {
                                          t = not_null(v_34);
                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                            {
                                              t = not_null(w_34);
                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                {
                                                  t = z_34(t);
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
        t = oncetd_1_0(q_2, t);
        if(((x_34 != NULL) && (x_34 != t)))
          _fail(t);
        else
          x_34 = t;
        t = a_35(t);
      }
      t = (ATerm) ATmakeAppl(sym_Build_1, not_null(l_34));
    }
    return(t);
  }
  if(((h_34 != NULL) && (h_34 != t)))
    _fail(t);
  else
    h_34 = t;
  t = not_null(h_34);
  if(match_cons(t, sym_Build_1))
    {
      i_34 = ATgetArgument(t, 0);
      t = y_34(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ListMatch_0_0 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL;
  ATerm g_36 (ATerm t)
  {
    ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
    t = not_null(q_35);
    if(((r_35 != NULL) && (r_35 != t)))
      _fail(t);
    else
      r_35 = t;
    t = not_null(p_35);
    {
      ATerm f_36 = NULL;
      ATerm i_36 (ATerm t)
      {
        t = not_null(f_36);
        if(((t_35 != NULL) && (t_35 != t)))
          _fail(t);
        else
          t_35 = t;
        t = not_null(f_36);
        return(t);
      }
      t = not_null(r_35);
      {
        ATerm r_2 (ATerm t)
        {
          ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
          ATerm h_36 (ATerm t)
          {
            t = not_null(z_35);
            if(((s_35 != NULL) && (s_35 != t)))
              _fail(t);
            else
              s_35 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_35));
            return(t);
          }
          if(((u_35 != NULL) && (u_35 != t)))
            _fail(t);
          else
            u_35 = t;
          t = not_null(u_35);
          if(match_cons(t, sym_Op_2))
            {
              v_35 = ATgetArgument(t, 0);
              w_35 = ATgetArgument(t, 1);
              t = not_null(v_35);
              if(match_string(t, "Cons"))
                {
                  t = not_null(w_35);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_35 = ATgetFirst((ATermList) t);
                      a_36 = (ATerm) ATgetNext((ATermList) t);
                      t = not_null(x_35);
                      if(match_cons(t, sym_Var_1))
                        {
                          y_35 = ATgetArgument(t, 0);
                          t = not_null(y_35);
                          if(match_cons(t, sym_ListVar_1))
                            {
                              z_35 = ATgetArgument(t, 0);
                              t = not_null(a_36);
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  b_36 = ATgetFirst((ATermList) t);
                                  e_36 = (ATerm) ATgetNext((ATermList) t);
                                  t = not_null(b_36);
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      c_36 = ATgetArgument(t, 0);
                                      d_36 = ATgetArgument(t, 1);
                                      t = not_null(c_36);
                                      if(match_string(t, "Nil"))
                                        {
                                          t = not_null(d_36);
                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                            {
                                              t = not_null(e_36);
                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                {
                                                  t = h_36(t);
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
        t = oncetd_1_0(r_2, t);
        if(((f_36 != NULL) && (f_36 != t)))
          _fail(t);
        else
          f_36 = t;
        t = i_36(t);
      }
      t = (ATerm) ATmakeAppl(sym_Match_1, not_null(t_35));
    }
    return(t);
  }
  if(((p_35 != NULL) && (p_35 != t)))
    _fail(t);
  else
    p_35 = t;
  t = not_null(p_35);
  if(match_cons(t, sym_Match_1))
    {
      q_35 = ATgetArgument(t, 0);
      t = g_36(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Wld_0_0 (ATerm t)
{
  ATerm g_37 = NULL;
  ATerm m_37 (ATerm t)
  {
    ATerm h_37 = NULL,i_37 = NULL,k_37 = NULL;
    t = not_null(g_37);
    if(((h_37 != NULL) && (h_37 != t)))
      _fail(t);
    else
      h_37 = t;
    t = not_null(g_37);
    {
      ATerm y_29;
      y_29 = t;
      {
        ATerm j_37 = NULL;
        ATerm n_37 (ATerm t)
        {
          t = not_null(j_37);
          if(((i_37 != NULL) && (i_37 != t)))
            _fail(t);
          else
            i_37 = t;
          t = not_null(j_37);
          return(t);
        }
        t = SSLgetAnnotations(not_null(h_37));
        if(((j_37 != NULL) && (j_37 != t)))
          _fail(t);
        else
          j_37 = t;
        t = n_37(t);
      }
      t = y_29;
      {
        ATerm l_37 = NULL;
        ATerm o_37 (ATerm t)
        {
          t = not_null(l_37);
          if(((k_37 != NULL) && (k_37 != t)))
            _fail(t);
          else
            k_37 = t;
          t = not_null(l_37);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(i_37));
        if(((l_37 != NULL) && (l_37 != t)))
          _fail(t);
        else
          l_37 = t;
        t = o_37(t);
        t = not_null(k_37);
      }
    }
    return(t);
  }
  if(((g_37 != NULL) && (g_37 != t)))
    _fail(t);
  else
    g_37 = t;
  t = not_null(g_37);
  if(match_cons(t, sym_Wld_0))
    {
      t = m_37(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm z_29 = t;
  if((PushChoice() == 0))
    {
      ATerm s_2 (ATerm t)
      {
        ATerm a_30 = t;
        int b_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(b_30);
          }
        else
          {
            t = a_30;
            t = Wld_0_0(t);
          }
        return(t);
      }
      t = topdown_1_0(s_2, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_29;
    }
  return(t);
}
ATerm Con_3_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm w_0 (ATerm), ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL;
  ATerm w_39 (ATerm t)
  {
    ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,u_38 = NULL;
    ATerm z_39 (ATerm t)
    {
      ATerm v_38 = NULL,w_38 = NULL;
      ATerm a_40 (ATerm t)
      {
        ATerm x_38 = NULL,y_38 = NULL;
        ATerm b_40 (ATerm t)
        {
          ATerm z_38 = NULL,a_39 = NULL;
          t = not_null(y_38);
          if(((z_38 != NULL) && (z_38 != t)))
            _fail(t);
          else
            z_38 = t;
          t = not_null(y_38);
          {
            ATerm b_39 = NULL;
            ATerm c_40 (ATerm t)
            {
              t = not_null(b_39);
              if(((a_39 != NULL) && (a_39 != t)))
                _fail(t);
              else
                a_39 = t;
              t = not_null(b_39);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(v_38), not_null(x_38), not_null(z_38)), not_null(n_38));
            if(((b_39 != NULL) && (b_39 != t)))
              _fail(t);
            else
              b_39 = t;
            t = c_40(t);
            t = not_null(a_39);
          }
          return(t);
        }
        t = not_null(w_38);
        if(((x_38 != NULL) && (x_38 != t)))
          _fail(t);
        else
          x_38 = t;
        t = not_null(m_38);
        t = w_0(t);
        if(((y_38 != NULL) && (y_38 != t)))
          _fail(t);
        else
          y_38 = t;
        t = b_40(t);
        return(t);
      }
      t = not_null(u_38);
      if(((v_38 != NULL) && (v_38 != t)))
        _fail(t);
      else
        v_38 = t;
      t = not_null(l_38);
      t = v_0(t);
      if(((w_38 != NULL) && (w_38 != t)))
        _fail(t);
      else
        w_38 = t;
      t = a_40(t);
      return(t);
    }
    t = not_null(f_38);
    if(((j_38 != NULL) && (j_38 != t)))
      _fail(t);
    else
      j_38 = t;
    t = not_null(g_38);
    if(((k_38 != NULL) && (k_38 != t)))
      _fail(t);
    else
      k_38 = t;
    t = not_null(h_38);
    if(((l_38 != NULL) && (l_38 != t)))
      _fail(t);
    else
      l_38 = t;
    t = not_null(i_38);
    if(((m_38 != NULL) && (m_38 != t)))
      _fail(t);
    else
      m_38 = t;
    t = not_null(f_38);
    {
      ATerm t_38 = NULL;
      ATerm y_39 (ATerm t)
      {
        t = not_null(t_38);
        if(((n_38 != NULL) && (n_38 != t)))
          _fail(t);
        else
          n_38 = t;
        t = not_null(t_38);
        return(t);
      }
      t = SSLgetAnnotations(not_null(j_38));
      if(((t_38 != NULL) && (t_38 != t)))
        _fail(t);
      else
        t_38 = t;
      t = y_39(t);
      t = not_null(k_38);
      t = t_0(t);
      if(((u_38 != NULL) && (u_38 != t)))
        _fail(t);
      else
        u_38 = t;
      t = z_39(t);
    }
    return(t);
  }
  ATerm x_39 (ATerm t)
  {
    ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,o_39 = NULL;
    ATerm e_40 (ATerm t)
    {
      ATerm p_39 = NULL,q_39 = NULL;
      ATerm f_40 (ATerm t)
      {
        ATerm r_39 = NULL,s_39 = NULL;
        ATerm g_40 (ATerm t)
        {
          ATerm t_39 = NULL,u_39 = NULL;
          t = not_null(s_39);
          if(((t_39 != NULL) && (t_39 != t)))
            _fail(t);
          else
            t_39 = t;
          t = not_null(s_39);
          {
            ATerm v_39 = NULL;
            ATerm h_40 (ATerm t)
            {
              t = not_null(v_39);
              if(((u_39 != NULL) && (u_39 != t)))
                _fail(t);
              else
                u_39 = t;
              t = not_null(v_39);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(p_39), not_null(r_39), not_null(t_39)), not_null(g_39));
            if(((v_39 != NULL) && (v_39 != t)))
              _fail(t);
            else
              v_39 = t;
            t = h_40(t);
            t = not_null(u_39);
          }
          return(t);
        }
        t = not_null(q_39);
        if(((r_39 != NULL) && (r_39 != t)))
          _fail(t);
        else
          r_39 = t;
        t = not_null(f_39);
        t = w_0(t);
        if(((s_39 != NULL) && (s_39 != t)))
          _fail(t);
        else
          s_39 = t;
        t = g_40(t);
        return(t);
      }
      t = not_null(o_39);
      if(((p_39 != NULL) && (p_39 != t)))
        _fail(t);
      else
        p_39 = t;
      t = not_null(e_39);
      t = v_0(t);
      if(((q_39 != NULL) && (q_39 != t)))
        _fail(t);
      else
        q_39 = t;
      t = f_40(t);
      return(t);
    }
    t = not_null(f_38);
    if(((c_39 != NULL) && (c_39 != t)))
      _fail(t);
    else
      c_39 = t;
    t = not_null(g_38);
    if(((d_39 != NULL) && (d_39 != t)))
      _fail(t);
    else
      d_39 = t;
    t = not_null(h_38);
    if(((e_39 != NULL) && (e_39 != t)))
      _fail(t);
    else
      e_39 = t;
    t = not_null(i_38);
    if(((f_39 != NULL) && (f_39 != t)))
      _fail(t);
    else
      f_39 = t;
    t = not_null(f_38);
    {
      ATerm n_39 = NULL;
      ATerm d_40 (ATerm t)
      {
        t = not_null(n_39);
        if(((g_39 != NULL) && (g_39 != t)))
          _fail(t);
        else
          g_39 = t;
        t = not_null(n_39);
        return(t);
      }
      t = SSLgetAnnotations(not_null(c_39));
      if(((n_39 != NULL) && (n_39 != t)))
        _fail(t);
      else
        n_39 = t;
      t = d_40(t);
      t = not_null(d_39);
      t = t_0(t);
      if(((o_39 != NULL) && (o_39 != t)))
        _fail(t);
      else
        o_39 = t;
      t = e_40(t);
    }
    return(t);
  }
  if(((f_38 != NULL) && (f_38 != t)))
    _fail(t);
  else
    f_38 = t;
  t = not_null(f_38);
  if(match_cons(t, sym_Con_3))
    {
      g_38 = ATgetArgument(t, 0);
      h_38 = ATgetArgument(t, 1);
      i_38 = ATgetArgument(t, 2);
      {
        ATerm c_30 = t;
        int w_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_39(t);
            ;
            LocalPopChoice(w_30);
          }
        else
          {
            t = c_30;
            t = x_39(t);
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm x_30 = t;
  if((PushChoice() == 0))
    {
      ATerm t_2 (ATerm t)
      {
        ATerm i_31 = t;
        int j_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(j_31);
          }
        else
          {
            t = i_31;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(t_2, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_30;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL;
  ATerm x_40 (ATerm t)
  {
    ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
    t = not_null(o_40);
    if(((r_40 != NULL) && (r_40 != t)))
      _fail(t);
    else
      r_40 = t;
    t = not_null(p_40);
    if(((t_40 != NULL) && (t_40 != t)))
      _fail(t);
    else
      t_40 = t;
    t = not_null(q_40);
    if(((s_40 != NULL) && (s_40 != t)))
      _fail(t);
    else
      s_40 = t;
    t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(t_40)), (ATerm) ATmakeAppl(sym_Where_1, not_null(s_40))), not_null(r_40)));
    return(t);
  }
  ATerm y_40 (ATerm t)
  {
    ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL;
    t = not_null(o_40);
    if(((v_40 != NULL) && (v_40 != t)))
      _fail(t);
    else
      v_40 = t;
    t = not_null(p_40);
    if(((w_40 != NULL) && (w_40 != t)))
      _fail(t);
    else
      w_40 = t;
    t = not_null(q_40);
    if(((u_40 != NULL) && (u_40 != t)))
      _fail(t);
    else
      u_40 = t;
    t = not_null(m_40);
    t = not_null(v_40);
    t = pureterm_0_0(t);
    t = not_null(w_40);
    t = buildterm_0_0(t);
    t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(w_40))), (ATerm) ATmakeAppl(sym_Where_1, not_null(u_40))), (ATerm) ATmakeAppl(sym_Match_1, not_null(v_40))));
    return(t);
  }
  if(((m_40 != NULL) && (m_40 != t)))
    _fail(t);
  else
    m_40 = t;
  t = not_null(m_40);
  if(match_cons(t, sym_SRule_1))
    {
      n_40 = ATgetArgument(t, 0);
      t = not_null(n_40);
      if(match_cons(t, sym_StratRule_3))
        {
          o_40 = ATgetArgument(t, 0);
          p_40 = ATgetArgument(t, 1);
          q_40 = ATgetArgument(t, 2);
          t = x_40(t);
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              o_40 = ATgetArgument(t, 0);
              p_40 = ATgetArgument(t, 1);
              q_40 = ATgetArgument(t, 2);
              t = y_40(t);
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
ATerm Rcon_0_0 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL;
  ATerm g_43 (ATerm t)
  {
    ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL;
    t = not_null(c_42);
    if(((f_42 != NULL) && (f_42 != t)))
      _fail(t);
    else
      f_42 = t;
    t = not_null(d_42);
    if(((g_42 != NULL) && (g_42 != t)))
      _fail(t);
    else
      g_42 = t;
    t = not_null(e_42);
    if(((h_42 != NULL) && (h_42 != t)))
      _fail(t);
    else
      h_42 = t;
    t = not_null(s_41);
    {
      ATerm q_42 = NULL;
      ATerm h_43 (ATerm t)
      {
        ATerm w_42 = NULL;
        ATerm j_43 (ATerm t)
        {
          ATerm f_43 = NULL;
          ATerm l_43 (ATerm t)
          {
            t = not_null(f_43);
            if(((p_42 != NULL) && (p_42 != t)))
              _fail(t);
            else
              p_42 = t;
            t = not_null(f_43);
            return(t);
          }
          t = not_null(w_42);
          if(((o_42 != NULL) && (o_42 != t)))
            _fail(t);
          else
            o_42 = t;
          t = not_null(g_42);
          {
            ATerm u_2 (ATerm t)
            {
              ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL;
              ATerm k_43 (ATerm t)
              {
                t = not_null(z_42);
                if(((m_42 != NULL) && (m_42 != t)))
                  _fail(t);
                else
                  m_42 = t;
                t = not_null(a_43);
                if(((l_42 != NULL) && (l_42 != t)))
                  _fail(t);
                else
                  l_42 = t;
                t = not_null(c_43);
                if(((j_42 != NULL) && (j_42 != t)))
                  _fail(t);
                else
                  j_42 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_42));
                return(t);
              }
              if(((x_42 != NULL) && (x_42 != t)))
                _fail(t);
              else
                x_42 = t;
              t = not_null(x_42);
              if(match_cons(t, sym_Con_3))
                {
                  y_42 = ATgetArgument(t, 0);
                  a_43 = ATgetArgument(t, 1);
                  b_43 = ATgetArgument(t, 2);
                  t = not_null(y_42);
                  if(match_cons(t, sym_Var_1))
                    {
                      z_42 = ATgetArgument(t, 0);
                      t = not_null(b_43);
                      if(match_cons(t, sym_CallT_3))
                        {
                          c_43 = ATgetArgument(t, 0);
                          d_43 = ATgetArgument(t, 1);
                          e_43 = ATgetArgument(t, 2);
                          t = not_null(d_43);
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = not_null(e_43);
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = k_43(t);
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
            t = oncetd_1_0(u_2, t);
            if(((f_43 != NULL) && (f_43 != t)))
              _fail(t);
            else
              f_43 = t;
            t = l_43(t);
          }
          return(t);
        }
        t = not_null(q_42);
        if(((n_42 != NULL) && (n_42 != t)))
          _fail(t);
        else
          n_42 = t;
        t = not_null(f_42);
        {
          ATerm v_2 (ATerm t)
          {
            ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL;
            ATerm i_43 (ATerm t)
            {
              t = not_null(t_42);
              if(((m_42 != NULL) && (m_42 != t)))
                _fail(t);
              else
                m_42 = t;
              t = not_null(u_42);
              if(((k_42 != NULL) && (k_42 != t)))
                _fail(t);
              else
                k_42 = t;
              t = not_null(v_42);
              if(((i_42 != NULL) && (i_42 != t)))
                _fail(t);
              else
                i_42 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_42));
              return(t);
            }
            if(((r_42 != NULL) && (r_42 != t)))
              _fail(t);
            else
              r_42 = t;
            t = not_null(r_42);
            if(match_cons(t, sym_Con_3))
              {
                s_42 = ATgetArgument(t, 0);
                u_42 = ATgetArgument(t, 1);
                v_42 = ATgetArgument(t, 2);
                t = not_null(s_42);
                if(match_cons(t, sym_Var_1))
                  {
                    t_42 = ATgetArgument(t, 0);
                    t = i_43(t);
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
          t = oncetd_1_0(v_2, t);
          if(((w_42 != NULL) && (w_42 != t)))
            _fail(t);
          else
            w_42 = t;
          t = j_43(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((q_42 != NULL) && (q_42 != t)))
        _fail(t);
      else
        q_42 = t;
      t = h_43(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_42)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_42), not_null(p_42), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_42), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(j_42), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_42), not_null(l_42), term_m_22))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_42)), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_42)))))));
    }
    return(t);
  }
  if(((s_41 != NULL) && (s_41 != t)))
    _fail(t);
  else
    s_41 = t;
  t = not_null(s_41);
  if(match_cons(t, sym_SRule_1))
    {
      t_41 = ATgetArgument(t, 0);
      t = not_null(t_41);
      if(match_cons(t, sym_Rule_3))
        {
          c_42 = ATgetArgument(t, 0);
          d_42 = ATgetArgument(t, 1);
          e_42 = ATgetArgument(t, 2);
          t = g_43(t);
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
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm u_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0_0(t);
        t = desugarRule_0_0(t);
        ;
        LocalPopChoice(v_31);
      }
    else
      {
        t = u_31;
        {
          ATerm c_32 = t;
          int d_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2_0(_id, desugarRule_0_0, t);
              ;
              LocalPopChoice(d_32);
            }
          else
            {
              t = c_32;
              t = RtoS_0_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1_0(w_2, t);
  return(t);
}
ATerm ListVarScope_0_0 (ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL,b_44 = NULL;
  ATerm j_44 (ATerm t)
  {
    ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL;
    t = not_null(x_43);
    if(((c_44 != NULL) && (c_44 != t)))
      _fail(t);
    else
      c_44 = t;
    t = not_null(b_44);
    if(((d_44 != NULL) && (d_44 != t)))
      _fail(t);
    else
      d_44 = t;
    t = not_null(w_43);
    {
      ATerm i_44 = NULL;
      ATerm l_44 (ATerm t)
      {
        t = not_null(i_44);
        if(((e_44 != NULL) && (e_44 != t)))
          _fail(t);
        else
          e_44 = t;
        t = not_null(i_44);
        return(t);
      }
      t = not_null(c_44);
      {
        ATerm x_2 (ATerm t)
        {
          ATerm y_2 (ATerm t)
          {
            ATerm f_44 = NULL,g_44 = NULL;
            ATerm k_44 (ATerm t)
            {
              ATerm h_44 = NULL;
              t = not_null(g_44);
              if(((h_44 != NULL) && (h_44 != t)))
                _fail(t);
              else
                h_44 = t;
              t = not_null(h_44);
              return(t);
            }
            if(((f_44 != NULL) && (f_44 != t)))
              _fail(t);
            else
              f_44 = t;
            t = not_null(f_44);
            if(match_cons(t, sym_ListVar_1))
              {
                g_44 = ATgetArgument(t, 0);
                t = k_44(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = try_1_0(y_2, t);
          return(t);
        }
        t = map_1_0(x_2, t);
        if(((i_44 != NULL) && (i_44 != t)))
          _fail(t);
        else
          i_44 = t;
        t = l_44(t);
      }
      t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_44), not_null(d_44));
    }
    return(t);
  }
  if(((w_43 != NULL) && (w_43 != t)))
    _fail(t);
  else
    w_43 = t;
  t = not_null(w_43);
  if(match_cons(t, sym_Scope_2))
    {
      x_43 = ATgetArgument(t, 0);
      b_44 = ATgetArgument(t, 1);
      t = j_44(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DesugarListMatching_0_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm a_3 (ATerm t)
    {
      ATerm m_32 = t;
      int n_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0_0(t);
          ;
          LocalPopChoice(n_32);
        }
      else
        {
          t = m_32;
          t = desugarRule_0_0(t);
        }
      return(t);
    }
    t = try_1_0(a_3, t);
    {
      ATerm b_3 (ATerm t)
      {
        ATerm o_32 = t;
        int p_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_32 = t;
            int g_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = HL_0_0(t);
                ;
                LocalPopChoice(g_33);
              }
            else
              {
                t = q_32;
                {
                  ATerm l_33 = t;
                  int m_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = ListMatch_0_0(t);
                      ;
                      LocalPopChoice(m_33);
                    }
                  else
                    {
                      t = l_33;
                      t = ListBuild_0_0(t);
                    }
                }
              }
            ;
            LocalPopChoice(p_32);
          }
        else
          {
            t = o_32;
            t = SingleListVar_0_0(t);
          }
        return(t);
      }
      t = repeat_1_0(b_3, t);
    }
    return(t);
  }
  t = topdown_1_0(z_2, t);
  return(t);
}
ATerm ExpandCall_0_0 (ATerm t)
{
  ATerm o_44 = NULL,t_44 = NULL,u_44 = NULL;
  ATerm b_45 (ATerm t)
  {
    ATerm z_44 = NULL,a_45 = NULL;
    t = not_null(t_44);
    if(((z_44 != NULL) && (z_44 != t)))
      _fail(t);
    else
      z_44 = t;
    t = not_null(u_44);
    if(((a_45 != NULL) && (a_45 != t)))
      _fail(t);
    else
      a_45 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(z_44), not_null(a_45), (ATerm) ATempty);
    return(t);
  }
  if(((o_44 != NULL) && (o_44 != t)))
    _fail(t);
  else
    o_44 = t;
  t = not_null(o_44);
  if(match_cons(t, sym_Call_2))
    {
      t_44 = ATgetArgument(t, 0);
      u_44 = ATgetArgument(t, 1);
      t = b_45(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm expand_calls_0_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    t = try_1_0(ExpandCall_0_0, t);
    return(t);
  }
  t = topdown_1_0(c_3, t);
  return(t);
}
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL;
  ATerm p_46 (ATerm t)
  {
    ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,b_46 = NULL;
    t = not_null(s_45);
    if(((v_45 != NULL) && (v_45 != t)))
      _fail(t);
    else
      v_45 = t;
    t = not_null(t_45);
    if(((w_45 != NULL) && (w_45 != t)))
      _fail(t);
    else
      w_45 = t;
    t = not_null(u_45);
    if(((x_45 != NULL) && (x_45 != t)))
      _fail(t);
    else
      x_45 = t;
    t = not_null(q_45);
    if(((y_45 != NULL) && (y_45 != t)))
      _fail(t);
    else
      y_45 = t;
    t = not_null(r_45);
    {
      ATerm n_33;
      n_33 = t;
      {
        ATerm a_46 = NULL;
        ATerm r_46 (ATerm t)
        {
          t = not_null(a_46);
          if(((z_45 != NULL) && (z_45 != t)))
            _fail(t);
          else
            z_45 = t;
          t = not_null(a_46);
          return(t);
        }
        t = not_null(x_45);
        t = declared_vars_0_0(t);
        if(((a_46 != NULL) && (a_46 != t)))
          _fail(t);
        else
          a_46 = t;
        t = r_46(t);
      }
      t = n_33;
      {
        ATerm c_46 = NULL,e_46 = NULL;
        ATerm t_46 (ATerm t)
        {
          t = not_null(e_46);
          if(((b_46 != NULL) && (b_46 != t)))
            _fail(t);
          else
            b_46 = t;
          t = not_null(e_46);
          return(t);
        }
        ATerm d_46 = NULL;
        ATerm s_46 (ATerm t)
        {
          t = not_null(d_46);
          if(((c_46 != NULL) && (c_46 != t)))
            _fail(t);
          else
            c_46 = t;
          t = not_null(d_46);
          return(t);
        }
        t = not_null(y_45);
        t = tvars_0_0(t);
        if(((d_46 != NULL) && (d_46 != t)))
          _fail(t);
        else
          d_46 = t;
        t = s_46(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_46), not_null(z_45));
        t = diff_0_0(t);
        if(((e_46 != NULL) && (e_46 != t)))
          _fail(t);
        else
          e_46 = t;
        t = t_46(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(v_45), not_null(w_45), not_null(x_45), (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_46), not_null(y_45)));
      }
    }
    return(t);
  }
  ATerm q_46 (ATerm t)
  {
    ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL;
    t = not_null(s_45);
    if(((f_46 != NULL) && (f_46 != t)))
      _fail(t);
    else
      f_46 = t;
    t = not_null(t_45);
    if(((g_46 != NULL) && (g_46 != t)))
      _fail(t);
    else
      g_46 = t;
    t = not_null(u_45);
    if(((h_46 != NULL) && (h_46 != t)))
      _fail(t);
    else
      h_46 = t;
    t = not_null(r_45);
    {
      ATerm j_46 = NULL;
      ATerm u_46 (ATerm t)
      {
        t = not_null(j_46);
        if(((i_46 != NULL) && (i_46 != t)))
          _fail(t);
        else
          i_46 = t;
        t = not_null(j_46);
        return(t);
      }
      t = not_null(h_46);
      t = tvars_0_0(t);
      if(((j_46 != NULL) && (j_46 != t)))
        _fail(t);
      else
        j_46 = t;
      t = u_46(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(f_46), not_null(g_46), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_46), not_null(h_46)));
    }
    return(t);
  }
  if(((r_45 != NULL) && (r_45 != t)))
    _fail(t);
  else
    r_45 = t;
  t = not_null(r_45);
  if(match_cons(t, sym_SDefT_4))
    {
      s_45 = ATgetArgument(t, 0);
      t_45 = ATgetArgument(t, 1);
      u_45 = ATgetArgument(t, 2);
      q_45 = ATgetArgument(t, 3);
      t = p_46(t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          s_45 = ATgetArgument(t, 0);
          t_45 = ATgetArgument(t, 1);
          u_45 = ATgetArgument(t, 2);
          t = q_46(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
  ATerm w_47 (ATerm t)
  {
    ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,n_47 = NULL;
    t = not_null(e_47);
    if(((h_47 != NULL) && (h_47 != t)))
      _fail(t);
    else
      h_47 = t;
    t = not_null(f_47);
    if(((i_47 != NULL) && (i_47 != t)))
      _fail(t);
    else
      i_47 = t;
    t = not_null(g_47);
    if(((j_47 != NULL) && (j_47 != t)))
      _fail(t);
    else
      j_47 = t;
    t = not_null(c_47);
    if(((k_47 != NULL) && (k_47 != t)))
      _fail(t);
    else
      k_47 = t;
    t = not_null(d_47);
    {
      ATerm t_33;
      t_33 = t;
      {
        ATerm m_47 = NULL;
        ATerm y_47 (ATerm t)
        {
          t = not_null(m_47);
          if(((l_47 != NULL) && (l_47 != t)))
            _fail(t);
          else
            l_47 = t;
          t = not_null(m_47);
          return(t);
        }
        t = not_null(j_47);
        t = declared_vars_0_0(t);
        if(((m_47 != NULL) && (m_47 != t)))
          _fail(t);
        else
          m_47 = t;
        t = y_47(t);
      }
      t = t_33;
      {
        ATerm o_47 = NULL,q_47 = NULL;
        ATerm a_48 (ATerm t)
        {
          t = not_null(q_47);
          if(((n_47 != NULL) && (n_47 != t)))
            _fail(t);
          else
            n_47 = t;
          t = not_null(q_47);
          return(t);
        }
        ATerm p_47 = NULL;
        ATerm z_47 (ATerm t)
        {
          t = not_null(p_47);
          if(((o_47 != NULL) && (o_47 != t)))
            _fail(t);
          else
            o_47 = t;
          t = not_null(p_47);
          return(t);
        }
        t = not_null(k_47);
        t = tvars_0_0(t);
        if(((p_47 != NULL) && (p_47 != t)))
          _fail(t);
        else
          p_47 = t;
        t = z_47(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_47), not_null(l_47));
        t = diff_0_0(t);
        if(((q_47 != NULL) && (q_47 != t)))
          _fail(t);
        else
          q_47 = t;
        t = a_48(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(h_47), not_null(i_47), not_null(j_47), (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_47), (ATerm) ATmakeAppl(sym_SRule_1, not_null(k_47))));
      }
    }
    return(t);
  }
  ATerm x_47 (ATerm t)
  {
    ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL;
    t = not_null(e_47);
    if(((r_47 != NULL) && (r_47 != t)))
      _fail(t);
    else
      r_47 = t;
    t = not_null(f_47);
    if(((s_47 != NULL) && (s_47 != t)))
      _fail(t);
    else
      s_47 = t;
    t = not_null(g_47);
    if(((t_47 != NULL) && (t_47 != t)))
      _fail(t);
    else
      t_47 = t;
    t = not_null(d_47);
    {
      ATerm v_47 = NULL;
      ATerm b_48 (ATerm t)
      {
        t = not_null(v_47);
        if(((u_47 != NULL) && (u_47 != t)))
          _fail(t);
        else
          u_47 = t;
        t = not_null(v_47);
        return(t);
      }
      t = not_null(t_47);
      t = tvars_0_0(t);
      if(((v_47 != NULL) && (v_47 != t)))
        _fail(t);
      else
        v_47 = t;
      t = b_48(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(r_47), not_null(s_47), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_47), (ATerm) ATmakeAppl(sym_SRule_1, not_null(t_47))));
    }
    return(t);
  }
  if(((d_47 != NULL) && (d_47 != t)))
    _fail(t);
  else
    d_47 = t;
  t = not_null(d_47);
  if(match_cons(t, sym_RDefT_4))
    {
      e_47 = ATgetArgument(t, 0);
      f_47 = ATgetArgument(t, 1);
      g_47 = ATgetArgument(t, 2);
      c_47 = ATgetArgument(t, 3);
      t = w_47(t);
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          e_47 = ATgetArgument(t, 0);
          f_47 = ATgetArgument(t, 1);
          g_47 = ATgetArgument(t, 2);
          t = x_47(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm MkCall_0_0 (ATerm t)
{
  ATerm d_48 = NULL;
  ATerm f_48 (ATerm t)
  {
    ATerm e_48 = NULL;
    t = not_null(d_48);
    if(((e_48 != NULL) && (e_48 != t)))
      _fail(t);
    else
      e_48 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_48)), (ATerm)ATempty, (ATerm) ATempty);
    return(t);
  }
  if(((d_48 != NULL) && (d_48 != t)))
    _fail(t);
  else
    d_48 = t;
  t = f_48(t);
  return(t);
}
ATerm MkCongDef_0_0 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL;
  ATerm k_49 (ATerm t)
  {
    ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,g_49 = NULL;
    t = not_null(r_48);
    if(((u_48 != NULL) && (u_48 != t)))
      _fail(t);
    else
      u_48 = t;
    t = not_null(t_48);
    if(((v_48 != NULL) && (v_48 != t)))
      _fail(t);
    else
      v_48 = t;
    t = not_null(p_48);
    if(((w_48 != NULL) && (w_48 != t)))
      _fail(t);
    else
      w_48 = t;
    t = not_null(q_48);
    {
      ATerm u_33;
      u_33 = t;
      {
        ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL;
        ATerm o_49 (ATerm t)
        {
          t = not_null(e_49);
          if(((x_48 != NULL) && (x_48 != t)))
            _fail(t);
          else
            x_48 = t;
          t = not_null(f_49);
          if(((y_48 != NULL) && (y_48 != t)))
            _fail(t);
          else
            y_48 = t;
          t = not_null(d_49);
          return(t);
        }
        t = not_null(v_48);
        {
          ATerm d_3 (ATerm t)
          {
            ATerm z_48 = NULL,b_49 = NULL;
            t = new_0_0(t);
            {
              ATerm v_33;
              v_33 = t;
              {
                ATerm a_49 = NULL;
                ATerm m_49 (ATerm t)
                {
                  t = not_null(a_49);
                  if(((z_48 != NULL) && (z_48 != t)))
                    _fail(t);
                  else
                    z_48 = t;
                  t = not_null(a_49);
                  return(t);
                }
                if(((a_49 != NULL) && (a_49 != t)))
                  _fail(t);
                else
                  a_49 = t;
                t = m_49(t);
              }
              t = v_33;
              {
                ATerm c_49 = NULL;
                ATerm n_49 (ATerm t)
                {
                  t = not_null(c_49);
                  if(((b_49 != NULL) && (b_49 != t)))
                    _fail(t);
                  else
                    b_49 = t;
                  t = not_null(c_49);
                  return(t);
                }
                if(((c_49 != NULL) && (c_49 != t)))
                  _fail(t);
                else
                  c_49 = t;
                t = n_49(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(z_48), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_33), term_y_33)), not_null(b_49));
              }
            }
            return(t);
          }
          t = map_1_0(d_3, t);
          t = unzip_0_0(t);
          if(((d_49 != NULL) && (d_49 != t)))
            _fail(t);
          else
            d_49 = t;
          t = not_null(d_49);
          if(match_cons(t, sym__2))
            {
              e_49 = ATgetArgument(t, 0);
              f_49 = ATgetArgument(t, 1);
              t = o_49(t);
            }
          else
            {
              _fail(t);
            }
        }
      }
      t = u_33;
      {
        ATerm h_49 = NULL;
        ATerm p_49 (ATerm t)
        {
          t = not_null(h_49);
          if(((g_49 != NULL) && (g_49 != t)))
            _fail(t);
          else
            g_49 = t;
          t = not_null(h_49);
          return(t);
        }
        t = not_null(y_48);
        t = map_1_0(MkCall_0_0, t);
        if(((h_49 != NULL) && (h_49 != t)))
          _fail(t);
        else
          h_49 = t;
        t = p_49(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(u_48), not_null(x_48), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(u_48), not_null(g_49)));
      }
    }
    return(t);
  }
  ATerm l_49 (ATerm t)
  {
    ATerm i_49 = NULL,j_49 = NULL;
    t = not_null(r_48);
    if(((j_49 != NULL) && (j_49 != t)))
      _fail(t);
    else
      j_49 = t;
    t = not_null(t_48);
    if(((i_49 != NULL) && (i_49 != t)))
      _fail(t);
    else
      i_49 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(j_49), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(j_49), (ATerm) ATempty));
    return(t);
  }
  if(((q_48 != NULL) && (q_48 != t)))
    _fail(t);
  else
    q_48 = t;
  t = not_null(q_48);
  if(match_cons(t, sym_OpDecl_2))
    {
      r_48 = ATgetArgument(t, 0);
      s_48 = ATgetArgument(t, 1);
      t = not_null(s_48);
      if(match_cons(t, sym_FunType_2))
        {
          t_48 = ATgetArgument(t, 0);
          p_48 = ATgetArgument(t, 1);
          t = k_49(t);
        }
      else
        {
          if(match_cons(t, sym_ConstType_1))
            {
              t_48 = ATgetArgument(t, 0);
              t = l_49(t);
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
ATerm MkCongDefs_0_0 (ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL;
  ATerm x_49 (ATerm t)
  {
    ATerm v_49 = NULL;
    t = not_null(u_49);
    if(((v_49 != NULL) && (v_49 != t)))
      _fail(t);
    else
      v_49 = t;
    t = not_null(v_49);
    t = map_1_0(MkCongDef_0_0, t);
    return(t);
  }
  ATerm y_49 (ATerm t)
  {
    ATerm w_49 = NULL;
    t = not_null(u_49);
    if(((w_49 != NULL) && (w_49 != t)))
      _fail(t);
    else
      w_49 = t;
    t = (ATerm) ATempty;
    return(t);
  }
  if(((t_49 != NULL) && (t_49 != t)))
    _fail(t);
  else
    t_49 = t;
  t = not_null(t_49);
  if(match_cons(t, sym_Constructors_1))
    {
      u_49 = ATgetArgument(t, 0);
      t = x_49(t);
    }
  else
    {
      if(match_cons(t, sym_Sorts_1))
        {
          u_49 = ATgetArgument(t, 0);
          t = y_49(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm congdefs_0_0 (ATerm t)
{
  t = map_1_0(MkCongDefs_0_0, t);
  t = concat_0_0(t);
  return(t);
}
ATerm RulesToSdefs_0_0 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL;
  ATerm z_50 (ATerm t)
  {
    ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL;
    t = not_null(m_50);
    if(((r_50 != NULL) && (r_50 != t)))
      _fail(t);
    else
      r_50 = t;
    t = not_null(p_50);
    if(((s_50 != NULL) && (s_50 != t)))
      _fail(t);
    else
      s_50 = t;
    t = not_null(j_50);
    {
      ATerm u_50 = NULL,w_50 = NULL,y_50 = NULL;
      ATerm c_51 (ATerm t)
      {
        t = not_null(y_50);
        if(((t_50 != NULL) && (t_50 != t)))
          _fail(t);
        else
          t_50 = t;
        t = not_null(y_50);
        return(t);
      }
      ATerm z_33;
      z_33 = t;
      {
        ATerm v_50 = NULL;
        ATerm a_51 (ATerm t)
        {
          t = not_null(v_50);
          if(((u_50 != NULL) && (u_50 != t)))
            _fail(t);
          else
            u_50 = t;
          t = not_null(v_50);
          return(t);
        }
        t = not_null(r_50);
        t = congdefs_0_0(t);
        if(((v_50 != NULL) && (v_50 != t)))
          _fail(t);
        else
          v_50 = t;
        t = a_51(t);
      }
      t = z_33;
      {
        ATerm x_50 = NULL;
        ATerm b_51 (ATerm t)
        {
          t = not_null(x_50);
          if(((w_50 != NULL) && (w_50 != t)))
            _fail(t);
          else
            w_50 = t;
          t = not_null(x_50);
          return(t);
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(s_50)), (ATerm) ATmakeAppl(sym_RDefT_4, term_a_34, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_c_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_33), term_y_33))), (ATerm) ATmakeAppl(sym_VarDec_2, term_b_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_33), term_y_33))), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, term_b_35, term_g_35, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_35), term_j_35)))));
        {
          ATerm e_3 (ATerm t)
          {
            ATerm n_35 = t;
            int o_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = RDtoSD_0_0(t);
                ;
                LocalPopChoice(o_35);
              }
            else
              {
                t = n_35;
                t = DeclareVariables_0_0(t);
              }
            t = expand_calls_0_0(t);
            return(t);
          }
          t = map_1_0(e_3, t);
          if(((x_50 != NULL) && (x_50 != t)))
            _fail(t);
          else
            x_50 = t;
          t = b_51(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_50), not_null(w_50));
        t = conc_0_0(t);
        if(((y_50 != NULL) && (y_50 != t)))
          _fail(t);
        else
          y_50 = t;
        t = c_51(t);
      }
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(t_50))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(r_50))));
    }
    return(t);
  }
  if(((j_50 != NULL) && (j_50 != t)))
    _fail(t);
  else
    j_50 = t;
  t = not_null(j_50);
  if(match_cons(t, sym_Specification_1))
    {
      k_50 = ATgetArgument(t, 0);
      t = not_null(k_50);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_50 = ATgetFirst((ATermList) t);
          n_50 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(l_50);
          if(match_cons(t, sym_Signature_1))
            {
              m_50 = ATgetArgument(t, 0);
              t = not_null(n_50);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_50 = ATgetFirst((ATermList) t);
                  q_50 = (ATerm) ATgetNext((ATermList) t);
                  t = not_null(o_50);
                  if(match_cons(t, sym_Strategies_1))
                    {
                      p_50 = ATgetArgument(t, 0);
                      t = not_null(q_50);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = z_50(t);
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
ATerm TupleDeclarations_0_0 (ATerm t)
{
  ATerm h_51 = NULL;
  ATerm s_51 (ATerm t)
  {
    ATerm i_51 = NULL,j_51 = NULL;
    t = not_null(h_51);
    if(((i_51 != NULL) && (i_51 != t)))
      _fail(t);
    else
      i_51 = t;
    t = not_null(h_51);
    {
      ATerm n_51 = NULL,q_51 = NULL,r_51 = NULL;
      ATerm t_51 (ATerm t)
      {
        t = not_null(r_51);
        if(((j_51 != NULL) && (j_51 != t)))
          _fail(t);
        else
          j_51 = t;
        t = not_null(n_51);
        return(t);
      }
      t = (ATerm) ATempty;
      {
        ATerm f_3 (ATerm t)
        {
          t = term_j_36;
          return(t);
        }
        t = rewrite_1_0(f_3, t);
        if(((n_51 != NULL) && (n_51 != t)))
          _fail(t);
        else
          n_51 = t;
        t = not_null(n_51);
        if(match_cons(t, sym_Defined_2))
          {
            q_51 = ATgetArgument(t, 0);
            r_51 = ATgetArgument(t, 1);
            t = not_null(q_51);
            if(match_string(t, "t_1"))
              {
                t = t_51(t);
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
      t = not_null(j_51);
    }
    return(t);
  }
  if(((h_51 != NULL) && (h_51 != t)))
    _fail(t);
  else
    h_51 = t;
  t = s_51(t);
  return(t);
}
ATerm int_to_string_0_0 (ATerm t)
{
  ATerm v_51 = NULL;
  ATerm x_51 (ATerm t)
  {
    ATerm w_51 = NULL;
    t = not_null(v_51);
    if(((w_51 != NULL) && (w_51 != t)))
      _fail(t);
    else
      w_51 = t;
    t = not_null(v_51);
    t = SSL_int_to_string(not_null(w_51));
    return(t);
  }
  if(((v_51 != NULL) && (v_51 != t)))
    _fail(t);
  else
    v_51 = t;
  t = x_51(t);
  return(t);
}
ATerm CheckConsError_0_0 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL;
  ATerm s_52 (ATerm t)
  {
    ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL;
    t = not_null(e_52);
    if(((h_52 != NULL) && (h_52 != t)))
      _fail(t);
    else
      h_52 = t;
    t = not_null(f_52);
    if(((i_52 != NULL) && (i_52 != t)))
      _fail(t);
    else
      i_52 = t;
    t = not_null(g_52);
    if(((j_52 != NULL) && (j_52 != t)))
      _fail(t);
    else
      j_52 = t;
    t = not_null(e_52);
    {
      ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL;
      ATerm t_52 (ATerm t)
      {
        ATerm q_52 = NULL;
        t = not_null(o_52);
        if(((k_52 != NULL) && (k_52 != t)))
          _fail(t);
        else
          k_52 = t;
        t = not_null(p_52);
        if(((l_52 != NULL) && (l_52 != t)))
          _fail(t);
        else
          l_52 = t;
        t = not_null(m_52);
        {
          ATerm r_52 = NULL;
          ATerm u_52 (ATerm t)
          {
            t = not_null(r_52);
            if(((q_52 != NULL) && (q_52 != t)))
              _fail(t);
            else
              q_52 = t;
            t = not_null(r_52);
            return(t);
          }
          t = not_null(j_52);
          t = length_0_0(t);
          t = int_to_string_0_0(t);
          if(((r_52 != NULL) && (r_52 != t)))
            _fail(t);
          else
            r_52 = t;
          t = u_52(t);
          t = (ATerm) ATmakeAppl(sym__2, term_k_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_36), not_null(q_52)), term_p_36), not_null(i_52)), term_o_36), term_n_36), not_null(l_52)), term_m_36), not_null(k_52)), term_l_36));
          t = printnl_0_0(t);
        }
        return(t);
      }
      t = term_r_36;
      {
        ATerm g_3 (ATerm t)
        {
          t = term_s_36;
          return(t);
        }
        t = rewrite_1_0(g_3, t);
        if(((m_52 != NULL) && (m_52 != t)))
          _fail(t);
        else
          m_52 = t;
        t = not_null(m_52);
        if(match_cons(t, sym_Defined_3))
          {
            n_52 = ATgetArgument(t, 0);
            o_52 = ATgetArgument(t, 1);
            p_52 = ATgetArgument(t, 2);
            t = not_null(n_52);
            if(match_string(t, "w_1"))
              {
                t = t_52(t);
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
      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(i_52), not_null(j_52));
    }
    return(t);
  }
  if(((e_52 != NULL) && (e_52 != t)))
    _fail(t);
  else
    e_52 = t;
  t = not_null(e_52);
  if(match_cons(t, sym_Op_2))
    {
      f_52 = ATgetArgument(t, 0);
      g_52 = ATgetArgument(t, 1);
      t = s_52(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL;
  ATerm c_53 (ATerm t)
  {
    ATerm a_53 = NULL,b_53 = NULL;
    t = not_null(y_52);
    if(((a_53 != NULL) && (a_53 != t)))
      _fail(t);
    else
      a_53 = t;
    t = not_null(z_52);
    if(((b_53 != NULL) && (b_53 != t)))
      _fail(t);
    else
      b_53 = t;
    t = not_null(x_52);
    {
      ATerm t_36 = t;
      int u_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(not_null(a_53), not_null(b_53));
          ;
          LocalPopChoice(u_36);
        }
      else
        {
          t = t_36;
          t = SSL_subtr(not_null(a_53), not_null(b_53));
        }
    }
    return(t);
  }
  if(((x_52 != NULL) && (x_52 != t)))
    _fail(t);
  else
    x_52 = t;
  t = not_null(x_52);
  if(match_cons(t, sym__2))
    {
      y_52 = ATgetArgument(t, 0);
      z_52 = ATgetArgument(t, 1);
      t = c_53(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm p_53 = NULL,q_53 = NULL,t_53 = NULL;
    ATerm n_54 (ATerm t)
    {
      ATerm u_53 = NULL,v_53 = NULL;
      t = not_null(q_53);
      if(((u_53 != NULL) && (u_53 != t)))
        _fail(t);
      else
        u_53 = t;
      t = not_null(t_53);
      if(((v_53 != NULL) && (v_53 != t)))
        _fail(t);
      else
        v_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, not_null(u_53), not_null(v_53), (ATerm) ATempty);
      return(t);
    }
    if(((p_53 != NULL) && (p_53 != t)))
      _fail(t);
    else
      p_53 = t;
    t = not_null(p_53);
    if(match_cons(t, sym__2))
      {
        q_53 = ATgetArgument(t, 0);
        t_53 = ATgetArgument(t, 1);
        t = n_54(t);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL;
    ATerm o_54 (ATerm t)
    {
      ATerm a_54 = NULL,b_54 = NULL;
      t = not_null(y_53);
      if(((a_54 != NULL) && (a_54 != t)))
        _fail(t);
      else
        a_54 = t;
      t = not_null(z_53);
      if(((b_54 != NULL) && (b_54 != t)))
        _fail(t);
      else
        b_54 = t;
      t = not_null(b_54);
      return(t);
    }
    if(((w_53 != NULL) && (w_53 != t)))
      _fail(t);
    else
      w_53 = t;
    t = not_null(w_53);
    if(match_cons(t, sym__3))
      {
        x_53 = ATgetArgument(t, 0);
        y_53 = ATgetArgument(t, 1);
        z_53 = ATgetArgument(t, 2);
        t = not_null(x_53);
        if(match_int(t, 0))
          {
            t = o_54(t);
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
  ATerm j_3 (ATerm t)
  {
    ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL;
    ATerm p_54 (ATerm t)
    {
      ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL;
      t = not_null(d_54);
      if(((g_54 != NULL) && (g_54 != t)))
        _fail(t);
      else
        g_54 = t;
      t = not_null(e_54);
      if(((h_54 != NULL) && (h_54 != t)))
        _fail(t);
      else
        h_54 = t;
      t = not_null(f_54);
      if(((i_54 != NULL) && (i_54 != t)))
        _fail(t);
      else
        i_54 = t;
      t = not_null(c_54);
      {
        ATerm v_36;
        v_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_54), term_w_36);
        t = geq_0_0(t);
        t = v_36;
        {
          ATerm k_54 = NULL;
          ATerm q_54 (ATerm t)
          {
            t = not_null(k_54);
            if(((j_54 != NULL) && (j_54 != t)))
              _fail(t);
            else
              j_54 = t;
            t = not_null(k_54);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_54), term_w_36);
          t = subt_0_0(t);
          if(((k_54 != NULL) && (k_54 != t)))
            _fail(t);
          else
            k_54 = t;
          t = q_54(t);
          t = (ATerm) ATmakeAppl(sym__3, not_null(j_54), not_null(h_54), (ATerm) ATinsert(CheckATermList(not_null(i_54)), not_null(h_54)));
        }
      }
      return(t);
    }
    if(((c_54 != NULL) && (c_54 != t)))
      _fail(t);
    else
      c_54 = t;
    t = not_null(c_54);
    if(match_cons(t, sym__3))
      {
        d_54 = ATgetArgument(t, 0);
        e_54 = ATgetArgument(t, 1);
        f_54 = ATgetArgument(t, 2);
        t = p_54(t);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3_0(h_3, i_3, j_3, t);
  return(t);
}
ATerm CheckTuple_0_0 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
  ATerm g_56 (ATerm t)
  {
    ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
    t = not_null(s_55);
    if(((t_55 != NULL) && (t_55 != t)))
      _fail(t);
    else
      t_55 = t;
    t = not_null(q_55);
    {
      ATerm x_36;
      x_36 = t;
      {
        ATerm y_55 = NULL;
        ATerm h_56 (ATerm t)
        {
          ATerm z_55 = NULL;
          ATerm i_56 (ATerm t)
          {
            ATerm a_56 = NULL,c_56 = NULL;
            ATerm k_56 (ATerm t)
            {
              ATerm d_56 = NULL,f_56 = NULL;
              ATerm m_56 (ATerm t)
              {
                t = not_null(f_56);
                if(((x_55 != NULL) && (x_55 != t)))
                  _fail(t);
                else
                  x_55 = t;
                t = not_null(f_56);
                {
                  ATerm y_36;
                  y_36 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_z_36, not_null(x_55)));
                  {
                    ATerm k_3 (ATerm t)
                    {
                      t = term_j_36;
                      return(t);
                    }
                    t = assert_1_0(k_3, t);
                  }
                  t = y_36;
                }
                return(t);
              }
              t = not_null(c_56);
              if(((w_55 != NULL) && (w_55 != t)))
                _fail(t);
              else
                w_55 = t;
              t = not_null(c_56);
              t = GenerateCheckRule_0_0(t);
              {
                ATerm e_56 = NULL;
                ATerm l_56 (ATerm t)
                {
                  t = not_null(e_56);
                  if(((d_56 != NULL) && (d_56 != t)))
                    _fail(t);
                  else
                    d_56 = t;
                  t = not_null(e_56);
                  return(t);
                }
                ATerm a_37 = t;
                int b_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TupleDeclarations_0_0(t);
                    ;
                    LocalPopChoice(b_37);
                  }
                else
                  {
                    t = a_37;
                    t = (ATerm) ATempty;
                  }
                if(((e_56 != NULL) && (e_56 != t)))
                  _fail(t);
                else
                  e_56 = t;
                t = l_56(t);
                t = (ATerm) ATinsert(CheckATermList(not_null(d_56)), not_null(w_55));
                if(((f_56 != NULL) && (f_56 != t)))
                  _fail(t);
                else
                  f_56 = t;
                t = m_56(t);
              }
              return(t);
            }
            t = not_null(z_55);
            if(((u_55 != NULL) && (u_55 != t)))
              _fail(t);
            else
              u_55 = t;
            t = not_null(z_55);
            {
              ATerm b_56 = NULL;
              ATerm j_56 (ATerm t)
              {
                t = not_null(b_56);
                if(((a_56 != NULL) && (a_56 != t)))
                  _fail(t);
                else
                  a_56 = t;
                t = not_null(b_56);
                return(t);
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_55), term_d_37);
              t = copy_0_0(t);
              if(((b_56 != NULL) && (b_56 != t)))
                _fail(t);
              else
                b_56 = t;
              t = j_56(t);
              t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_q_17, (ATerm) ATmakeAppl(sym_FunType_2, not_null(a_56), term_d_37));
              if(((c_56 != NULL) && (c_56 != t)))
                _fail(t);
              else
                c_56 = t;
              t = k_56(t);
            }
            return(t);
          }
          t = not_null(y_55);
          if(((v_55 != NULL) && (v_55 != t)))
            _fail(t);
          else
            v_55 = t;
          t = term_q_17;
          if(((z_55 != NULL) && (z_55 != t)))
            _fail(t);
          else
            z_55 = t;
          t = i_56(t);
          return(t);
        }
        t = not_null(t_55);
        t = length_0_0(t);
        if(((y_55 != NULL) && (y_55 != t)))
          _fail(t);
        else
          y_55 = t;
        t = h_56(t);
      }
      t = x_36;
    }
    return(t);
  }
  if(((q_55 != NULL) && (q_55 != t)))
    _fail(t);
  else
    q_55 = t;
  t = not_null(q_55);
  if(match_cons(t, sym_Op_2))
    {
      r_55 = ATgetArgument(t, 0);
      s_55 = ATgetArgument(t, 1);
      t = not_null(r_55);
      if(match_string(t, ""))
        {
          t = g_56(t);
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
ATerm CheckCons_0_0 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL;
  ATerm t_57 (ATerm t)
  {
    ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL;
    ATerm v_57 (ATerm t)
    {
      ATerm j_57 = NULL;
      t = not_null(i_57);
      if(((j_57 != NULL) && (j_57 != t)))
        _fail(t);
      else
        j_57 = t;
      t = not_null(i_57);
      {
        ATerm k_57 = NULL,l_57 = NULL;
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(g_57), (ATerm) ATmakeAppl(sym_Keys_1, not_null(j_57)));
        {
          ATerm l_3 (ATerm t)
          {
            t = term_e_37;
            return(t);
          }
          t = rewrite_1_0(l_3, t);
          if(((k_57 != NULL) && (k_57 != t)))
            _fail(t);
          else
            k_57 = t;
          t = not_null(k_57);
          if(match_cons(t, sym_Defined_1))
            {
              l_57 = ATgetArgument(t, 0);
              t = not_null(l_57);
              if(match_string(t, "q_1"))
                {
                  t = not_null(k_57);
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
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(g_57), (ATerm) ATempty);
      }
      return(t);
    }
    t = not_null(c_57);
    if(((f_57 != NULL) && (f_57 != t)))
      _fail(t);
    else
      f_57 = t;
    t = not_null(d_57);
    if(((g_57 != NULL) && (g_57 != t)))
      _fail(t);
    else
      g_57 = t;
    t = not_null(e_57);
    if(((h_57 != NULL) && (h_57 != t)))
      _fail(t);
    else
      h_57 = t;
    t = not_null(h_57);
    t = length_0_0(t);
    if(((i_57 != NULL) && (i_57 != t)))
      _fail(t);
    else
      i_57 = t;
    t = v_57(t);
    return(t);
  }
  ATerm u_57 (ATerm t)
  {
    ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL;
    ATerm w_57 (ATerm t)
    {
      ATerm q_57 = NULL;
      t = not_null(p_57);
      if(((q_57 != NULL) && (q_57 != t)))
        _fail(t);
      else
        q_57 = t;
      t = not_null(p_57);
      {
        ATerm r_57 = NULL,s_57 = NULL;
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(n_57), (ATerm) ATmakeAppl(sym_Keys_1, not_null(q_57)));
        {
          ATerm m_3 (ATerm t)
          {
            t = term_e_37;
            return(t);
          }
          t = rewrite_1_0(m_3, t);
          if(((r_57 != NULL) && (r_57 != t)))
            _fail(t);
          else
            r_57 = t;
          t = not_null(r_57);
          if(match_cons(t, sym_Defined_1))
            {
              s_57 = ATgetArgument(t, 0);
              t = not_null(s_57);
              if(match_string(t, "n_1"))
                {
                  t = not_null(r_57);
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
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(n_57), (ATerm) ATempty);
      }
      return(t);
    }
    t = not_null(c_57);
    if(((m_57 != NULL) && (m_57 != t)))
      _fail(t);
    else
      m_57 = t;
    t = not_null(d_57);
    if(((n_57 != NULL) && (n_57 != t)))
      _fail(t);
    else
      n_57 = t;
    t = not_null(e_57);
    if(((o_57 != NULL) && (o_57 != t)))
      _fail(t);
    else
      o_57 = t;
    t = not_null(o_57);
    t = length_0_0(t);
    if(((p_57 != NULL) && (p_57 != t)))
      _fail(t);
    else
      p_57 = t;
    t = w_57(t);
    return(t);
  }
  if(((c_57 != NULL) && (c_57 != t)))
    _fail(t);
  else
    c_57 = t;
  t = not_null(c_57);
  if(match_cons(t, sym_Op_2))
    {
      d_57 = ATgetArgument(t, 0);
      e_57 = ATgetArgument(t, 1);
      {
        ATerm f_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_57(t);
            ;
            LocalPopChoice(p_37);
          }
        else
          {
            t = f_37;
            t = u_57(t);
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm manytd_1_0 (ATerm h_109 (ATerm), ATerm t)
{
  ATerm x_57 (ATerm t)
  {
    ATerm q_37 = t;
    int r_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_109(t);
        {
          ATerm n_3 (ATerm t)
          {
            t = try_1_0(x_57, t);
            return(t);
          }
          t = SRTS_all(n_3, t);
        }
        ;
        LocalPopChoice(r_37);
      }
    else
      {
        t = q_37;
        t = SRTS_some(x_57, t);
      }
    return(t);
  }
  t = x_57(t);
  return(t);
}
ATerm check_constructors_p__2_0 (ATerm l_135 (ATerm), ATerm m_135 (ATerm), ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL;
  ATerm o_3 (ATerm t)
  {
    t = term_s_36;
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    ATerm s_37;
    s_37 = t;
    {
      ATerm c_58 = NULL;
      ATerm e_58 (ATerm t)
      {
        ATerm d_58 = NULL;
        ATerm f_58 (ATerm t)
        {
          t = not_null(d_58);
          if(((a_58 != NULL) && (a_58 != t)))
            _fail(t);
          else
            a_58 = t;
          t = not_null(d_58);
          return(t);
        }
        t = not_null(c_58);
        if(((b_58 != NULL) && (b_58 != t)))
          _fail(t);
        else
          b_58 = t;
        t = not_null(c_58);
        t = m_135(t);
        if(((d_58 != NULL) && (d_58 != t)))
          _fail(t);
        else
          d_58 = t;
        t = f_58(t);
        return(t);
      }
      t = l_135(t);
      if(((c_58 != NULL) && (c_58 != t)))
        _fail(t);
      else
        c_58 = t;
      t = e_58(t);
    }
    t = s_37;
    {
      ATerm t_37;
      t_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_r_36, (ATerm) ATmakeAppl(sym_Defined_3, term_u_37, not_null(a_58), not_null(b_58)));
      {
        ATerm q_3 (ATerm t)
        {
          t = term_s_36;
          return(t);
        }
        t = assert_1_0(q_3, t);
      }
      t = t_37;
      {
        ATerm r_3 (ATerm t)
        {
          ATerm v_37 = t;
          if((PushChoice() == 0))
            {
              ATerm w_37 = t;
              int x_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CheckCons_0_0(t);
                  ;
                  LocalPopChoice(x_37);
                }
              else
                {
                  t = w_37;
                  t = CheckTuple_0_0(t);
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_37;
            }
          t = CheckConsError_0_0(t);
          return(t);
        }
        t = manytd_1_0(r_3, t);
      }
    }
    return(t);
  }
  t = scope_2_0(o_3, p_3, t);
  return(t);
}
ATerm check_constructors_0_0 (ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL;
  ATerm t_58 (ATerm t)
  {
    ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL;
    t = not_null(k_58);
    if(((o_58 != NULL) && (o_58 != t)))
      _fail(t);
    else
      o_58 = t;
    t = not_null(l_58);
    if(((n_58 != NULL) && (n_58 != t)))
      _fail(t);
    else
      n_58 = t;
    t = not_null(m_58);
    if(((p_58 != NULL) && (p_58 != t)))
      _fail(t);
    else
      p_58 = t;
    t = not_null(p_58);
    {
      ATerm s_3 (ATerm t)
      {
        t = not_null(o_58);
        return(t);
      }
      ATerm t_3 (ATerm t)
      {
        t = term_y_37;
        return(t);
      }
      t = check_constructors_p__2_0(s_3, t_3, t);
    }
    return(t);
  }
  ATerm u_58 (ATerm t)
  {
    ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL;
    t = not_null(k_58);
    if(((r_58 != NULL) && (r_58 != t)))
      _fail(t);
    else
      r_58 = t;
    t = not_null(l_58);
    if(((q_58 != NULL) && (q_58 != t)))
      _fail(t);
    else
      q_58 = t;
    t = not_null(m_58);
    if(((s_58 != NULL) && (s_58 != t)))
      _fail(t);
    else
      s_58 = t;
    t = not_null(s_58);
    {
      ATerm u_3 (ATerm t)
      {
        t = not_null(r_58);
        return(t);
      }
      ATerm v_3 (ATerm t)
      {
        t = term_z_37;
        return(t);
      }
      t = check_constructors_p__2_0(u_3, v_3, t);
    }
    return(t);
  }
  if(((j_58 != NULL) && (j_58 != t)))
    _fail(t);
  else
    j_58 = t;
  t = not_null(j_58);
  if(match_cons(t, sym_SDef_3))
    {
      k_58 = ATgetArgument(t, 0);
      l_58 = ATgetArgument(t, 1);
      m_58 = ATgetArgument(t, 2);
      t = t_58(t);
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          k_58 = ATgetArgument(t, 0);
          l_58 = ATgetArgument(t, 1);
          m_58 = ATgetArgument(t, 2);
          t = u_58(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    t = term_a_38;
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_w_36;
    return(t);
  }
  t = foldr_3_0(w_3, add_0_0, x_3, t);
  return(t);
}
ATerm GenerateCheckRule_0_0 (ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL;
  ATerm p_59 (ATerm t)
  {
    ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL;
    t = not_null(d_59);
    if(((g_59 != NULL) && (g_59 != t)))
      _fail(t);
    else
      g_59 = t;
    t = not_null(f_59);
    if(((h_59 != NULL) && (h_59 != t)))
      _fail(t);
    else
      h_59 = t;
    t = not_null(b_59);
    if(((i_59 != NULL) && (i_59 != t)))
      _fail(t);
    else
      i_59 = t;
    t = not_null(c_59);
    {
      ATerm b_38;
      b_38 = t;
      {
        ATerm k_59 = NULL;
        ATerm r_59 (ATerm t)
        {
          t = not_null(k_59);
          if(((j_59 != NULL) && (j_59 != t)))
            _fail(t);
          else
            j_59 = t;
          t = not_null(k_59);
          return(t);
        }
        t = not_null(h_59);
        t = length_0_0(t);
        if(((k_59 != NULL) && (k_59 != t)))
          _fail(t);
        else
          k_59 = t;
        t = r_59(t);
      }
      t = b_38;
      {
        ATerm c_38;
        c_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, not_null(g_59), (ATerm) ATmakeAppl(sym_Keys_1, not_null(j_59))), term_e_38);
        {
          ATerm y_3 (ATerm t)
          {
            t = term_e_37;
            return(t);
          }
          t = assert_1_0(y_3, t);
        }
        t = c_38;
      }
    }
    return(t);
  }
  ATerm q_59 (ATerm t)
  {
    ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL;
    t = not_null(d_59);
    if(((l_59 != NULL) && (l_59 != t)))
      _fail(t);
    else
      l_59 = t;
    t = not_null(f_59);
    if(((m_59 != NULL) && (m_59 != t)))
      _fail(t);
    else
      m_59 = t;
    t = not_null(c_59);
    {
      ATerm o_38;
      o_38 = t;
      {
        ATerm o_59 = NULL;
        ATerm s_59 (ATerm t)
        {
          t = not_null(o_59);
          if(((n_59 != NULL) && (n_59 != t)))
            _fail(t);
          else
            n_59 = t;
          t = not_null(o_59);
          return(t);
        }
        t = term_a_38;
        if(((o_59 != NULL) && (o_59 != t)))
          _fail(t);
        else
          o_59 = t;
        t = s_59(t);
      }
      t = o_38;
      {
        ATerm p_38;
        p_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, not_null(l_59), (ATerm) ATmakeAppl(sym_Keys_1, not_null(n_59))), term_r_38);
        {
          ATerm z_3 (ATerm t)
          {
            t = term_e_37;
            return(t);
          }
          t = assert_1_0(z_3, t);
        }
        t = p_38;
      }
    }
    return(t);
  }
  if(((c_59 != NULL) && (c_59 != t)))
    _fail(t);
  else
    c_59 = t;
  t = not_null(c_59);
  if(match_cons(t, sym_OpDecl_2))
    {
      d_59 = ATgetArgument(t, 0);
      e_59 = ATgetArgument(t, 1);
      t = not_null(e_59);
      if(match_cons(t, sym_FunType_2))
        {
          f_59 = ATgetArgument(t, 0);
          b_59 = ATgetArgument(t, 1);
          t = p_59(t);
        }
      else
        {
          if(match_cons(t, sym_ConstType_1))
            {
              f_59 = ATgetArgument(t, 0);
              t = q_59(t);
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
ATerm CheckConstructors_0_0 (ATerm t)
{
  ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL;
  ATerm n_61 (ATerm t)
  {
    ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,l_61 = NULL;
    t = not_null(w_60);
    if(((c_61 != NULL) && (c_61 != t)))
      _fail(t);
    else
      c_61 = t;
    t = not_null(a_61);
    if(((d_61 != NULL) && (d_61 != t)))
      _fail(t);
    else
      d_61 = t;
    t = not_null(r_60);
    {
      ATerm s_38;
      s_38 = t;
      {
        ATerm i_61 = NULL;
        ATerm o_61 (ATerm t)
        {
          ATerm j_61 = NULL;
          ATerm u_61 (ATerm t)
          {
            ATerm k_61 = NULL;
            ATerm v_61 (ATerm t)
            {
              t = not_null(k_61);
              if(((f_61 != NULL) && (f_61 != t)))
                _fail(t);
              else
                f_61 = t;
              t = not_null(k_61);
              return(t);
            }
            t = not_null(j_61);
            {
              ATerm h_39 = t;
              int i_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TupleDeclarations_0_0(t);
                  ;
                  LocalPopChoice(i_39);
                }
              else
                {
                  t = h_39;
                  t = (ATerm) ATempty;
                }
              if(((k_61 != NULL) && (k_61 != t)))
                _fail(t);
              else
                k_61 = t;
              t = v_61(t);
            }
            return(t);
          }
          t = not_null(i_61);
          if(((e_61 != NULL) && (e_61 != t)))
            _fail(t);
          else
            e_61 = t;
          t = not_null(e_61);
          t = map_1_0(GenerateCheckRule_0_0, t);
          t = not_null(d_61);
          t = filter_1_0(check_constructors_0_0, t);
          if(((j_61 != NULL) && (j_61 != t)))
            _fail(t);
          else
            j_61 = t;
          t = not_null(j_61);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = u_61(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(c_61)), (ATerm) ATmakeAppl(sym_OpDecl_2, term_q_17, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_37), term_d_37), term_d_37), term_d_37), term_d_37), term_d_37), term_d_37), term_d_37), term_d_37))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_q_17, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_37), term_d_37), term_d_37), term_d_37), term_d_37), term_d_37), term_d_37), term_d_37))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_q_17, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_37), term_d_37), term_d_37), term_d_37), term_d_37), term_d_37), term_d_37))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_q_17, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_37), term_d_37), term_d_37), term_d_37), term_d_37), term_d_37))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_q_17, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_37), term_d_37), term_d_37), term_d_37), term_d_37))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_q_17, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_d_37), term_d_37), term_d_37), term_d_37))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_q_17, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_d_37), term_d_37), term_d_37))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_q_17, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_d_37), term_d_37))), term_k_39);
        if(((i_61 != NULL) && (i_61 != t)))
          _fail(t);
        else
          i_61 = t;
        t = o_61(t);
      }
      t = s_38;
      {
        ATerm m_61 = NULL;
        ATerm w_61 (ATerm t)
        {
          t = not_null(m_61);
          if(((l_61 != NULL) && (l_61 != t)))
            _fail(t);
          else
            l_61 = t;
          t = not_null(m_61);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_61), not_null(e_61));
        t = conc_0_0(t);
        if(((m_61 != NULL) && (m_61 != t)))
          _fail(t);
        else
          m_61 = t;
        t = w_61(t);
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(d_61))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(l_61))))));
      }
    }
    return(t);
  }
  if(((r_60 != NULL) && (r_60 != t)))
    _fail(t);
  else
    r_60 = t;
  t = not_null(r_60);
  if(match_cons(t, sym_Specification_1))
    {
      s_60 = ATgetArgument(t, 0);
      t = not_null(s_60);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_60 = ATgetFirst((ATermList) t);
          y_60 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(t_60);
          if(match_cons(t, sym_Signature_1))
            {
              u_60 = ATgetArgument(t, 0);
              t = not_null(u_60);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_60 = ATgetFirst((ATermList) t);
                  x_60 = (ATerm) ATgetNext((ATermList) t);
                  t = not_null(v_60);
                  if(match_cons(t, sym_Constructors_1))
                    {
                      w_60 = ATgetArgument(t, 0);
                      t = not_null(x_60);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = not_null(y_60);
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              z_60 = ATgetFirst((ATermList) t);
                              b_61 = (ATerm) ATgetNext((ATermList) t);
                              t = not_null(z_60);
                              if(match_cons(t, sym_Strategies_1))
                                {
                                  a_61 = ATgetArgument(t, 0);
                                  t = not_null(b_61);
                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                    {
                                      t = n_61(t);
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
ATerm exp_overlays2_1_0 (ATerm b_134 (ATerm), ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm l_39;
    l_39 = t;
    {
      ATerm m_39 = t;
      if((PushChoice() == 0))
        {
          ATerm y_61 = NULL;
          t = b_134(t);
          if(((y_61 != NULL) && (y_61 != t)))
            _fail(t);
          else
            y_61 = t;
          t = not_null(y_61);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = not_null(y_61);
            }
          else
            {
              _fail(t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_39;
        }
    }
    t = l_39;
    {
      ATerm b_4 (ATerm t)
      {
        ATerm c_4 (ATerm t)
        {
          t = ExpOverlay_1_0(b_134, t);
          return(t);
        }
        t = try_1_0(c_4, t);
        return(t);
      }
      t = topdown_1_0(b_4, t);
    }
    return(t);
  }
  t = try_1_0(a_4, t);
  return(t);
}
ATerm Trm_to_Cong_0_0 (ATerm t)
{
  ATerm h_62 = NULL,j_62 = NULL,k_62 = NULL;
  ATerm u_62 (ATerm t)
  {
    ATerm l_62 = NULL;
    t = not_null(k_62);
    if(((l_62 != NULL) && (l_62 != t)))
      _fail(t);
    else
      l_62 = t;
    t = term_m_22;
    return(t);
  }
  ATerm v_62 (ATerm t)
  {
    ATerm m_62 = NULL;
    t = not_null(k_62);
    if(((m_62 != NULL) && (m_62 != t)))
      _fail(t);
    else
      m_62 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(m_62)));
    return(t);
  }
  ATerm w_62 (ATerm t)
  {
    ATerm n_62 = NULL;
    t = not_null(k_62);
    if(((n_62 != NULL) && (n_62 != t)))
      _fail(t);
    else
      n_62 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(n_62)));
    return(t);
  }
  ATerm x_62 (ATerm t)
  {
    ATerm o_62 = NULL;
    t = not_null(k_62);
    if(((o_62 != NULL) && (o_62 != t)))
      _fail(t);
    else
      o_62 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(o_62)));
    return(t);
  }
  ATerm e_63 (ATerm t)
  {
    ATerm p_62 = NULL,q_62 = NULL;
    t = not_null(k_62);
    if(((p_62 != NULL) && (p_62 != t)))
      _fail(t);
    else
      p_62 = t;
    t = not_null(h_62);
    if(((q_62 != NULL) && (q_62 != t)))
      _fail(t);
    else
      q_62 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_i_40, (ATerm)ATinsert(ATinsert(ATempty, not_null(q_62)), not_null(p_62)), (ATerm) ATempty);
    return(t);
  }
  ATerm f_63 (ATerm t)
  {
    ATerm r_62 = NULL,s_62 = NULL;
    t = not_null(k_62);
    if(((r_62 != NULL) && (r_62 != t)))
      _fail(t);
    else
      r_62 = t;
    t = not_null(h_62);
    if(((s_62 != NULL) && (s_62 != t)))
      _fail(t);
    else
      s_62 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_62)), not_null(s_62), (ATerm) ATempty);
    return(t);
  }
  ATerm g_63 (ATerm t)
  {
    ATerm t_62 = NULL;
    t = not_null(k_62);
    if(((t_62 != NULL) && (t_62 != t)))
      _fail(t);
    else
      t_62 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_62)), (ATerm)ATempty, (ATerm) ATempty);
    return(t);
  }
  if(((j_62 != NULL) && (j_62 != t)))
    _fail(t);
  else
    j_62 = t;
  t = not_null(j_62);
  if(match_cons(t, sym_BuildDefault_1))
    {
      k_62 = ATgetArgument(t, 0);
      t = u_62(t);
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          k_62 = ATgetArgument(t, 0);
          t = v_62(t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              k_62 = ATgetArgument(t, 0);
              t = w_62(t);
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  k_62 = ATgetArgument(t, 0);
                  t = x_62(t);
                }
              else
                {
                  if(match_cons(t, sym_Anno_2))
                    {
                      k_62 = ATgetArgument(t, 0);
                      h_62 = ATgetArgument(t, 1);
                      t = e_63(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          k_62 = ATgetArgument(t, 0);
                          h_62 = ATgetArgument(t, 1);
                          t = f_63(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_Var_1))
                            {
                              k_62 = ATgetArgument(t, 0);
                              t = g_63(t);
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
ATerm trm_to_cong_0_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm e_4 (ATerm t)
    {
      t = map_1_0(trm_to_cong_0_0, t);
      return(t);
    }
    t = Op_2_0(_id, e_4, t);
    return(t);
  }
  t = try_1_0(d_4, t);
  t = Trm_to_Cong_0_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0_0 (ATerm t)
{
  ATerm o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL;
  ATerm b_64 (ATerm t)
  {
    ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,z_63 = NULL;
    t = not_null(p_63);
    if(((s_63 != NULL) && (s_63 != t)))
      _fail(t);
    else
      s_63 = t;
    t = not_null(q_63);
    if(((t_63 != NULL) && (t_63 != t)))
      _fail(t);
    else
      t_63 = t;
    t = not_null(r_63);
    if(((u_63 != NULL) && (u_63 != t)))
      _fail(t);
    else
      u_63 = t;
    t = not_null(o_63);
    {
      ATerm j_40;
      j_40 = t;
      {
        ATerm y_63 = NULL;
        ATerm d_64 (ATerm t)
        {
          t = not_null(y_63);
          if(((v_63 != NULL) && (v_63 != t)))
            _fail(t);
          else
            v_63 = t;
          t = not_null(y_63);
          return(t);
        }
        t = not_null(t_63);
        {
          ATerm f_4 (ATerm t)
          {
            ATerm w_63 = NULL;
            ATerm x_63 = NULL;
            ATerm c_64 (ATerm t)
            {
              t = not_null(x_63);
              if(((w_63 != NULL) && (w_63 != t)))
                _fail(t);
              else
                w_63 = t;
              t = not_null(x_63);
              return(t);
            }
            if(((x_63 != NULL) && (x_63 != t)))
              _fail(t);
            else
              x_63 = t;
            t = c_64(t);
            t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(w_63), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_33), term_y_33));
            return(t);
          }
          t = map_1_0(f_4, t);
          if(((y_63 != NULL) && (y_63 != t)))
            _fail(t);
          else
            y_63 = t;
          t = d_64(t);
        }
      }
      t = j_40;
      {
        ATerm a_64 = NULL;
        ATerm e_64 (ATerm t)
        {
          t = not_null(a_64);
          if(((z_63 != NULL) && (z_63 != t)))
            _fail(t);
          else
            z_63 = t;
          t = not_null(a_64);
          return(t);
        }
        t = not_null(u_63);
        t = trm_to_cong_0_0(t);
        if(((a_64 != NULL) && (a_64 != t)))
          _fail(t);
        else
          a_64 = t;
        t = e_64(t);
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(s_63), not_null(v_63), not_null(z_63));
      }
    }
    return(t);
  }
  if(((o_63 != NULL) && (o_63 != t)))
    _fail(t);
  else
    o_63 = t;
  t = not_null(o_63);
  if(match_cons(t, sym_Overlay_3))
    {
      p_63 = ATgetArgument(t, 0);
      q_63 = ATgetArgument(t, 1);
      r_63 = ATgetArgument(t, 2);
      t = b_64(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReplaceVar_0_0 (ATerm t)
{
  ATerm j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL;
  ATerm t_64 (ATerm t)
  {
    ATerm o_64 = NULL,p_64 = NULL;
    t = not_null(l_64);
    if(((o_64 != NULL) && (o_64 != t)))
      _fail(t);
    else
      o_64 = t;
    t = not_null(n_64);
    if(((p_64 != NULL) && (p_64 != t)))
      _fail(t);
    else
      p_64 = t;
    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, not_null(p_64));
    return(t);
  }
  ATerm u_64 (ATerm t)
  {
    ATerm q_64 = NULL,r_64 = NULL,s_64 = NULL;
    t = not_null(l_64);
    if(((q_64 != NULL) && (q_64 != t)))
      _fail(t);
    else
      q_64 = t;
    t = not_null(m_64);
    if(((s_64 != NULL) && (s_64 != t)))
      _fail(t);
    else
      s_64 = t;
    t = not_null(n_64);
    if(((r_64 != NULL) && (r_64 != t)))
      _fail(t);
    else
      r_64 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(r_64), not_null(s_64));
    return(t);
  }
  if(((j_64 != NULL) && (j_64 != t)))
    _fail(t);
  else
    j_64 = t;
  t = not_null(j_64);
  if(match_cons(t, sym__2))
    {
      k_64 = ATgetArgument(t, 0);
      n_64 = ATgetArgument(t, 1);
      t = not_null(k_64);
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_64 = ATgetArgument(t, 0);
          t = t_64(t);
        }
      else
        {
          if(match_cons(t, sym_VarDec_2))
            {
              l_64 = ATgetArgument(t, 0);
              m_64 = ATgetArgument(t, 1);
              t = u_64(t);
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
ATerm tpaste_1_0 (ATerm w_134 (ATerm), ATerm t)
{
  ATerm k_40 = t;
  int l_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(w_134, _id, t);
      ;
      LocalPopChoice(l_40);
    }
  else
    {
      t = k_40;
      {
        ATerm z_40 = t;
        int a_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_4 (ATerm t)
            {
              t = split_2_0(_id, w_134, t);
              t = zip_1_0(ReplaceVar_0_0, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, g_4, _id, t);
            ;
            LocalPopChoice(a_41);
          }
        else
          {
            t = z_40;
            {
              ATerm h_4 (ATerm t)
              {
                t = split_2_0(_id, w_134, t);
                t = zip_1_0(ReplaceVar_0_0, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, h_4, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm IsVar_0_0 (ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL;
  ATerm a_65 (ATerm t)
  {
    ATerm z_64 = NULL;
    t = not_null(y_64);
    if(((z_64 != NULL) && (z_64 != t)))
      _fail(t);
    else
      z_64 = t;
    t = not_null(z_64);
    return(t);
  }
  if(((x_64 != NULL) && (x_64 != t)))
    _fail(t);
  else
    x_64 = t;
  t = not_null(x_64);
  if(match_cons(t, sym_Var_1))
    {
      y_64 = ATgetArgument(t, 0);
      t = a_65(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DistBinding_2_0 (ATerm h_132 (ATerm), ATerm i_132 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL;
  ATerm v_65 (ATerm t)
  {
    ATerm j_65 = NULL,k_65 = NULL,l_65 = NULL;
    t = not_null(g_65);
    if(((l_65 != NULL) && (l_65 != t)))
      _fail(t);
    else
      l_65 = t;
    t = not_null(h_65);
    if(((k_65 != NULL) && (k_65 != t)))
      _fail(t);
    else
      k_65 = t;
    t = not_null(i_65);
    if(((j_65 != NULL) && (j_65 != t)))
      _fail(t);
    else
      j_65 = t;
    t = not_null(l_65);
    {
      ATerm i_4 (ATerm t)
      {
        ATerm m_65 = NULL;
        ATerm w_65 (ATerm t)
        {
          ATerm n_65 = NULL;
          t = not_null(m_65);
          if(((n_65 != NULL) && (n_65 != t)))
            _fail(t);
          else
            n_65 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_65), not_null(j_65));
          t = h_132(t);
          return(t);
        }
        if(((m_65 != NULL) && (m_65 != t)))
          _fail(t);
        else
          m_65 = t;
        t = w_65(t);
        return(t);
      }
      ATerm j_4 (ATerm t)
      {
        ATerm t_65 = NULL;
        ATerm x_65 (ATerm t)
        {
          ATerm u_65 = NULL;
          t = not_null(t_65);
          if(((u_65 != NULL) && (u_65 != t)))
            _fail(t);
          else
            u_65 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_65), not_null(k_65));
          t = h_132(t);
          return(t);
        }
        if(((t_65 != NULL) && (t_65 != t)))
          _fail(t);
        else
          t_65 = t;
        t = x_65(t);
        return(t);
      }
      t = i_132(i_4, j_4, _id, t);
    }
    return(t);
  }
  if(((f_65 != NULL) && (f_65 != t)))
    _fail(t);
  else
    f_65 = t;
  t = not_null(f_65);
  if(match_cons(t, sym__3))
    {
      g_65 = ATgetArgument(t, 0);
      h_65 = ATgetArgument(t, 1);
      i_65 = ATgetArgument(t, 2);
      t = v_65(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2_0 (ATerm b_132 (ATerm), ATerm c_132 (ATerm, ATerm (ATerm)), ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL;
  ATerm w_67 (ATerm t)
  {
    ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,n_67 = NULL;
    t = not_null(v_66);
    if(((x_66 != NULL) && (x_66 != t)))
      _fail(t);
    else
      x_66 = t;
    t = not_null(w_66);
    if(((y_66 != NULL) && (y_66 != t)))
      _fail(t);
    else
      y_66 = t;
    t = not_null(u_66);
    {
      ATerm b_41;
      b_41 = t;
      {
        ATerm c_67 = NULL;
        ATerm x_67 (ATerm t)
        {
          ATerm j_67 = NULL;
          ATerm z_67 (ATerm t)
          {
            ATerm k_67 = NULL,m_67 = NULL;
            ATerm b_68 (ATerm t)
            {
              t = not_null(m_67);
              if(((b_67 != NULL) && (b_67 != t)))
                _fail(t);
              else
                b_67 = t;
              t = not_null(m_67);
              return(t);
            }
            t = not_null(j_67);
            if(((a_67 != NULL) && (a_67 != t)))
              _fail(t);
            else
              a_67 = t;
            t = not_null(j_67);
            {
              ATerm l_67 = NULL;
              ATerm a_68 (ATerm t)
              {
                t = not_null(l_67);
                if(((k_67 != NULL) && (k_67 != t)))
                  _fail(t);
                else
                  k_67 = t;
                t = not_null(l_67);
                return(t);
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_66), not_null(a_67));
              t = zip_1_0(_id, t);
              if(((l_67 != NULL) && (l_67 != t)))
                _fail(t);
              else
                l_67 = t;
              t = a_68(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_67), not_null(y_66));
              t = conc_0_0(t);
              if(((m_67 != NULL) && (m_67 != t)))
                _fail(t);
              else
                m_67 = t;
              t = b_68(t);
            }
            return(t);
          }
          t = not_null(c_67);
          if(((z_66 != NULL) && (z_66 != t)))
            _fail(t);
          else
            z_66 = t;
          t = not_null(c_67);
          t = map_1_0(new_0_0, t);
          if(((j_67 != NULL) && (j_67 != t)))
            _fail(t);
          else
            j_67 = t;
          t = z_67(t);
          return(t);
        }
        t = not_null(x_66);
        t = b_132(t);
        if(((c_67 != NULL) && (c_67 != t)))
          _fail(t);
        else
          c_67 = t;
        t = x_67(t);
      }
      t = b_41;
      {
        ATerm o_67 = NULL;
        ATerm c_68 (ATerm t)
        {
          t = not_null(o_67);
          if(((n_67 != NULL) && (n_67 != t)))
            _fail(t);
          else
            n_67 = t;
          t = not_null(o_67);
          return(t);
        }
        t = not_null(x_66);
        {
          ATerm k_4 (ATerm t)
          {
            t = not_null(a_67);
            return(t);
          }
          t = c_132(k_4, t);
          if(((o_67 != NULL) && (o_67 != t)))
            _fail(t);
          else
            o_67 = t;
          t = c_68(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(n_67), not_null(y_66), not_null(b_67));
      }
    }
    return(t);
  }
  if(((u_66 != NULL) && (u_66 != t)))
    _fail(t);
  else
    u_66 = t;
  t = not_null(u_66);
  if(match_cons(t, sym__2))
    {
      v_66 = ATgetArgument(t, 0);
      w_66 = ATgetArgument(t, 1);
      t = w_67(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SubsVar_2_0 (ATerm u_131 (ATerm), ATerm v_131 (ATerm), ATerm t)
{
  ATerm d_69 = NULL;
  ATerm j_69 (ATerm t)
  {
    ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL;
    t = not_null(d_69);
    if(((e_69 != NULL) && (e_69 != t)))
      _fail(t);
    else
      e_69 = t;
    t = not_null(d_69);
    {
      ATerm h_69 = NULL;
      ATerm k_69 (ATerm t)
      {
        ATerm i_69 = NULL;
        ATerm l_69 (ATerm t)
        {
          t = not_null(i_69);
          if(((g_69 != NULL) && (g_69 != t)))
            _fail(t);
          else
            g_69 = t;
          t = not_null(i_69);
          return(t);
        }
        t = not_null(h_69);
        if(((f_69 != NULL) && (f_69 != t)))
          _fail(t);
        else
          f_69 = t;
        t = not_null(h_69);
        t = v_131(t);
        if(((i_69 != NULL) && (i_69 != t)))
          _fail(t);
        else
          i_69 = t;
        t = l_69(t);
        return(t);
      }
      t = not_null(e_69);
      t = u_131(t);
      if(((h_69 != NULL) && (h_69 != t)))
        _fail(t);
      else
        h_69 = t;
      t = k_69(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_69), not_null(g_69));
      t = lookup_0_0(t);
    }
    return(t);
  }
  if(((d_69 != NULL) && (d_69 != t)))
    _fail(t);
  else
    d_69 = t;
  t = j_69(t);
  return(t);
}
ATerm Look2_0_0 (ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL;
  ATerm w_69 (ATerm t)
  {
    ATerm u_69 = NULL,v_69 = NULL;
    t = not_null(q_69);
    if(((u_69 != NULL) && (u_69 != t)))
      _fail(t);
    else
      u_69 = t;
    t = not_null(t_69);
    if(((v_69 != NULL) && (v_69 != t)))
      _fail(t);
    else
      v_69 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_69), not_null(v_69));
    return(t);
  }
  if(((p_69 != NULL) && (p_69 != t)))
    _fail(t);
  else
    p_69 = t;
  t = not_null(p_69);
  if(match_cons(t, sym__2))
    {
      q_69 = ATgetArgument(t, 0);
      r_69 = ATgetArgument(t, 1);
      t = not_null(r_69);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_69 = ATgetFirst((ATermList) t);
          t_69 = (ATerm) ATgetNext((ATermList) t);
          t = w_69(t);
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
  ATerm b_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,q_70 = NULL,r_70 = NULL;
  ATerm l_72 (ATerm t)
  {
    ATerm t_70 = NULL,k_72 = NULL;
    t = not_null(c_70);
    if(((t_70 != NULL) && (t_70 != t)))
      _fail(t);
    else
      t_70 = t;
    t = not_null(f_70);
    if(((t_70 != NULL) && (t_70 != t)))
      _fail(t);
    else
      t_70 = t;
    t = not_null(q_70);
    if(((k_72 != NULL) && (k_72 != t)))
      _fail(t);
    else
      k_72 = t;
    t = not_null(k_72);
    return(t);
  }
  if(((b_70 != NULL) && (b_70 != t)))
    _fail(t);
  else
    b_70 = t;
  t = not_null(b_70);
  if(match_cons(t, sym__2))
    {
      c_70 = ATgetArgument(t, 0);
      d_70 = ATgetArgument(t, 1);
      t = not_null(d_70);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_70 = ATgetFirst((ATermList) t);
          r_70 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(e_70);
          if(match_cons(t, sym__2))
            {
              f_70 = ATgetArgument(t, 0);
              q_70 = ATgetArgument(t, 1);
              t = l_72(t);
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
  ATerm c_41 = t;
  int d_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0_0(t);
      ;
      LocalPopChoice(d_41);
    }
  else
    {
      t = c_41;
      t = Look2_0_0(t);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm RnVar_1_0 (ATerm m_132 (ATerm, ATerm (ATerm)), ATerm t)
{
  ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL;
  ATerm l_76 (ATerm t)
  {
    ATerm i_76 = NULL,k_76 = NULL;
    t = not_null(q_74);
    if(((k_76 != NULL) && (k_76 != t)))
      _fail(t);
    else
      k_76 = t;
    t = not_null(r_74);
    if(((i_76 != NULL) && (i_76 != t)))
      _fail(t);
    else
      i_76 = t;
    t = not_null(k_76);
    {
      ATerm l_4 (ATerm t)
      {
        ATerm m_4 (ATerm t)
        {
          t = not_null(i_76);
          return(t);
        }
        t = split_2_0(_id, m_4, t);
        t = lookup_0_0(t);
        return(t);
      }
      t = m_132(l_4, t);
    }
    return(t);
  }
  if(((p_74 != NULL) && (p_74 != t)))
    _fail(t);
  else
    p_74 = t;
  t = not_null(p_74);
  if(match_cons(t, sym__2))
    {
      q_74 = ATgetArgument(t, 0);
      r_74 = ATgetArgument(t, 1);
      t = l_76(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1_0 (ATerm b_112 (ATerm), ATerm t)
{
  ATerm r_80 = NULL,s_80 = NULL,t_80 = NULL;
  ATerm y_80 (ATerm t)
  {
    ATerm u_80 = NULL,v_80 = NULL;
    t = not_null(s_80);
    if(((v_80 != NULL) && (v_80 != t)))
      _fail(t);
    else
      v_80 = t;
    t = not_null(t_80);
    if(((u_80 != NULL) && (u_80 != t)))
      _fail(t);
    else
      u_80 = t;
    t = not_null(v_80);
    {
      ATerm n_4 (ATerm t)
      {
        ATerm w_80 = NULL;
        ATerm z_80 (ATerm t)
        {
          ATerm x_80 = NULL;
          t = not_null(w_80);
          if(((x_80 != NULL) && (x_80 != t)))
            _fail(t);
          else
            x_80 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_80), not_null(u_80));
          t = b_112(t);
          return(t);
        }
        if(((w_80 != NULL) && (w_80 != t)))
          _fail(t);
        else
          w_80 = t;
        t = z_80(t);
        return(t);
      }
      t = SRTS_all(n_4, t);
    }
    return(t);
  }
  if(((r_80 != NULL) && (r_80 != t)))
    _fail(t);
  else
    r_80 = t;
  t = not_null(r_80);
  if(match_cons(t, sym__2))
    {
      s_80 = ATgetArgument(t, 0);
      t_80 = ATgetArgument(t, 1);
      t = y_80(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm l_111 (ATerm), ATerm t)
{
  ATerm a_81 (ATerm t)
  {
    ATerm e_41 = t;
    int f_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_111(t);
        ;
        LocalPopChoice(f_41);
      }
    else
      {
        t = e_41;
        t = all_dist_1_0(a_81, t);
      }
    return(t);
  }
  t = a_81(t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm f_81 = NULL,g_81 = NULL,i_86 = NULL,j_86 = NULL;
  ATerm c_90 (ATerm t)
  {
    ATerm r_89 = NULL,s_89 = NULL;
    t = not_null(g_81);
    if(((r_89 != NULL) && (r_89 != t)))
      _fail(t);
    else
      r_89 = t;
    t = not_null(i_86);
    if(((s_89 != NULL) && (s_89 != t)))
      _fail(t);
    else
      s_89 = t;
    t = not_null(f_81);
    return(t);
  }
  ATerm d_90 (ATerm t)
  {
    ATerm x_89 = NULL,y_89 = NULL,z_89 = NULL,a_90 = NULL;
    t = not_null(g_81);
    if(((x_89 != NULL) && (x_89 != t)))
      _fail(t);
    else
      x_89 = t;
    t = not_null(i_86);
    if(((y_89 != NULL) && (y_89 != t)))
      _fail(t);
    else
      y_89 = t;
    t = not_null(j_86);
    if(((z_89 != NULL) && (z_89 != t)))
      _fail(t);
    else
      z_89 = t;
    t = not_null(f_81);
    {
      ATerm b_90 = NULL;
      ATerm e_90 (ATerm t)
      {
        t = not_null(b_90);
        if(((a_90 != NULL) && (a_90 != t)))
          _fail(t);
        else
          a_90 = t;
        t = not_null(b_90);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_89), not_null(y_89));
      t = zip_1_0(_id, t);
      if(((b_90 != NULL) && (b_90 != t)))
        _fail(t);
      else
        b_90 = t;
      t = e_90(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_90), not_null(z_89));
    }
    return(t);
  }
  if(((f_81 != NULL) && (f_81 != t)))
    _fail(t);
  else
    f_81 = t;
  t = not_null(f_81);
  if(match_cons(t, sym__2))
    {
      g_81 = ATgetArgument(t, 0);
      i_86 = ATgetArgument(t, 1);
      t = c_90(t);
    }
  else
    {
      if(match_cons(t, sym__3))
        {
          g_81 = ATgetArgument(t, 0);
          i_86 = ATgetArgument(t, 1);
          j_86 = ATgetArgument(t, 2);
          t = d_90(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_6_0 (ATerm i_131 (ATerm), ATerm j_131 (ATerm, ATerm (ATerm)), ATerm k_131 (ATerm), ATerm l_131 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_131 (ATerm, ATerm (ATerm)), ATerm n_131 (ATerm), ATerm t)
{
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL;
  ATerm m_90 (ATerm t)
  {
    ATerm k_90 = NULL,l_90 = NULL;
    t = not_null(i_90);
    if(((l_90 != NULL) && (l_90 != t)))
      _fail(t);
    else
      l_90 = t;
    t = not_null(j_90);
    if(((k_90 != NULL) && (k_90 != t)))
      _fail(t);
    else
      k_90 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_90), (ATerm) ATempty);
    {
      ATerm n_90 (ATerm t)
      {
        ATerm o_4 (ATerm t)
        {
          ATerm g_41 = t;
          int h_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1_0(j_131, t);
              ;
              LocalPopChoice(h_41);
            }
          else
            {
              t = g_41;
              {
                ATerm i_41 = t;
                int j_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Fst_0_0(t);
                    {
                      ATerm p_4 (ATerm t)
                      {
                        t = not_null(l_90);
                        return(t);
                      }
                      t = SubsVar_2_0(i_131, p_4, t);
                      t = n_131(t);
                    }
                    ;
                    LocalPopChoice(j_41);
                  }
                else
                  {
                    t = i_41;
                    t = RnBinding_2_0(k_131, m_131, t);
                    t = DistBinding_2_0(n_90, l_131, t);
                  }
              }
            }
          return(t);
        }
        t = env_alltd_1_0(o_4, t);
        return(t);
      }
      t = n_90(t);
    }
    return(t);
  }
  t = subs_args_0_0(t);
  if(((h_90 != NULL) && (h_90 != t)))
    _fail(t);
  else
    h_90 = t;
  t = not_null(h_90);
  if(match_cons(t, sym__2))
    {
      i_90 = ATgetArgument(t, 0);
      j_90 = ATgetArgument(t, 1);
      t = m_90(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm substitute_5_0 (ATerm p_131 (ATerm), ATerm q_131 (ATerm, ATerm (ATerm)), ATerm r_131 (ATerm), ATerm s_131 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t_131 (ATerm, ATerm (ATerm)), ATerm t)
{
  t = substitute_6_0(p_131, q_131, r_131, s_131, t_131, _id, t);
  return(t);
}
ATerm tsubstitute_0_0 (ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    ATerm k_41 = t;
    int l_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(l_41);
      }
    else
      {
        t = k_41;
        {
          ATerm m_41 = t;
          int n_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(n_41);
            }
          else
            {
              t = m_41;
              {
                ATerm o_41 = t;
                int p_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(p_41);
                  }
                else
                  {
                    t = o_41;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = substitute_5_0(IsVar_0_0, Var_1_0, q_4, tboundin_3_0, tpaste_1_0, t);
  return(t);
}
ATerm ExpOverlay_1_0 (ATerm c_134 (ATerm), ATerm t)
{
  ATerm v_90 = NULL,w_90 = NULL,x_90 = NULL;
  ATerm s_91 (ATerm t)
  {
    ATerm y_90 = NULL,z_90 = NULL,a_91 = NULL,b_91 = NULL;
    t = not_null(w_90);
    if(((y_90 != NULL) && (y_90 != t)))
      _fail(t);
    else
      y_90 = t;
    t = not_null(x_90);
    if(((z_90 != NULL) && (z_90 != t)))
      _fail(t);
    else
      z_90 = t;
    t = not_null(v_90);
    t = c_134(t);
    {
      ATerm r_4 (ATerm t)
      {
        ATerm q_41;
        q_41 = t;
        {
          ATerm e_91 = NULL,f_91 = NULL,j_91 = NULL,k_91 = NULL;
          ATerm t_91 (ATerm t)
          {
            ATerm m_91 = NULL,n_91 = NULL,o_91 = NULL,q_91 = NULL;
            ATerm x_91 (ATerm t)
            {
              ATerm r_91 = NULL;
              ATerm y_91 (ATerm t)
              {
                t = not_null(r_91);
                if(((b_91 != NULL) && (b_91 != t)))
                  _fail(t);
                else
                  b_91 = t;
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_91), not_null(n_91));
                return(t);
              }
              t = not_null(q_91);
              if(((a_91 != NULL) && (a_91 != t)))
                _fail(t);
              else
                a_91 = t;
              t = not_null(n_91);
              if(((r_91 != NULL) && (r_91 != t)))
                _fail(t);
              else
                r_91 = t;
              t = y_91(t);
              return(t);
            }
            t = not_null(f_91);
            if(((y_90 != NULL) && (y_90 != t)))
              _fail(t);
            else
              y_90 = t;
            t = not_null(j_91);
            if(((m_91 != NULL) && (m_91 != t)))
              _fail(t);
            else
              m_91 = t;
            t = not_null(k_91);
            if(((n_91 != NULL) && (n_91 != t)))
              _fail(t);
            else
              n_91 = t;
            t = not_null(e_91);
            {
              ATerm p_91 = NULL;
              ATerm w_91 (ATerm t)
              {
                t = not_null(p_91);
                if(((o_91 != NULL) && (o_91 != t)))
                  _fail(t);
                else
                  o_91 = t;
                t = not_null(p_91);
                return(t);
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_91), not_null(z_90));
              t = zip_1_0(_id, t);
              if(((p_91 != NULL) && (p_91 != t)))
                _fail(t);
              else
                p_91 = t;
              t = w_91(t);
              t = not_null(o_91);
              if(((q_91 != NULL) && (q_91 != t)))
                _fail(t);
              else
                q_91 = t;
              t = x_91(t);
            }
            return(t);
          }
          if(((e_91 != NULL) && (e_91 != t)))
            _fail(t);
          else
            e_91 = t;
          t = not_null(e_91);
          if(match_cons(t, sym_Overlay_3))
            {
              f_91 = ATgetArgument(t, 0);
              j_91 = ATgetArgument(t, 1);
              k_91 = ATgetArgument(t, 2);
              t = t_91(t);
            }
          else
            {
              _fail(t);
            }
        }
        t = q_41;
        return(t);
      }
      t = fetch_1_0(r_4, t);
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_91), not_null(b_91));
    t = tsubstitute_0_0(t);
    return(t);
  }
  if(((v_90 != NULL) && (v_90 != t)))
    _fail(t);
  else
    v_90 = t;
  t = not_null(v_90);
  if(match_cons(t, sym_Op_2))
    {
      w_90 = ATgetArgument(t, 0);
      x_90 = ATgetArgument(t, 1);
      t = s_91(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm exp_overlays1_1_0 (ATerm a_134 (ATerm), ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm r_41;
    r_41 = t;
    {
      ATerm u_41 = t;
      if((PushChoice() == 0))
        {
          ATerm a_92 = NULL;
          t = a_134(t);
          if(((a_92 != NULL) && (a_92 != t)))
            _fail(t);
          else
            a_92 = t;
          t = not_null(a_92);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = not_null(a_92);
            }
          else
            {
              _fail(t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = u_41;
        }
    }
    t = r_41;
    {
      ATerm t_4 (ATerm t)
      {
        ATerm u_4 (ATerm t)
        {
          t = ExpOverlay_1_0(a_134, t);
          return(t);
        }
        t = repeat_1_0(u_4, t);
        return(t);
      }
      t = topdown_1_0(t_4, t);
    }
    return(t);
  }
  t = try_1_0(s_4, t);
  return(t);
}
ATerm ExpandOverlays_0_0 (ATerm t)
{
  ATerm y_92 = NULL,z_92 = NULL,a_93 = NULL,b_93 = NULL,c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL,g_93 = NULL,h_93 = NULL,i_93 = NULL;
  ATerm u_93 (ATerm t)
  {
    ATerm j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL,o_93 = NULL;
    t = not_null(b_93);
    if(((j_93 != NULL) && (j_93 != t)))
      _fail(t);
    else
      j_93 = t;
    t = not_null(e_93);
    if(((k_93 != NULL) && (k_93 != t)))
      _fail(t);
    else
      k_93 = t;
    t = not_null(h_93);
    if(((l_93 != NULL) && (l_93 != t)))
      _fail(t);
    else
      l_93 = t;
    t = not_null(y_92);
    {
      ATerm v_41;
      v_41 = t;
      {
        ATerm n_93 = NULL;
        ATerm v_93 (ATerm t)
        {
          t = not_null(n_93);
          if(((m_93 != NULL) && (m_93 != t)))
            _fail(t);
          else
            m_93 = t;
          t = not_null(n_93);
          return(t);
        }
        t = not_null(k_93);
        {
          ATerm v_4 (ATerm t)
          {
            t = not_null(k_93);
            return(t);
          }
          t = exp_overlays1_1_0(v_4, t);
          if(((n_93 != NULL) && (n_93 != t)))
            _fail(t);
          else
            n_93 = t;
          t = v_93(t);
        }
      }
      t = v_41;
      {
        ATerm p_93 = NULL,r_93 = NULL,t_93 = NULL;
        ATerm b_94 (ATerm t)
        {
          t = not_null(t_93);
          if(((o_93 != NULL) && (o_93 != t)))
            _fail(t);
          else
            o_93 = t;
          t = not_null(t_93);
          return(t);
        }
        ATerm w_41;
        w_41 = t;
        {
          ATerm q_93 = NULL;
          ATerm z_93 (ATerm t)
          {
            t = not_null(q_93);
            if(((p_93 != NULL) && (p_93 != t)))
              _fail(t);
            else
              p_93 = t;
            t = not_null(q_93);
            return(t);
          }
          t = not_null(k_93);
          t = map_1_0(Overlay_to_Congdef_0_0, t);
          if(((q_93 != NULL) && (q_93 != t)))
            _fail(t);
          else
            q_93 = t;
          t = z_93(t);
        }
        t = w_41;
        {
          ATerm s_93 = NULL;
          ATerm a_94 (ATerm t)
          {
            t = not_null(s_93);
            if(((r_93 != NULL) && (r_93 != t)))
              _fail(t);
            else
              r_93 = t;
            t = not_null(s_93);
            return(t);
          }
          t = not_null(l_93);
          {
            ATerm w_4 (ATerm t)
            {
              t = not_null(m_93);
              return(t);
            }
            t = exp_overlays2_1_0(w_4, t);
            if(((s_93 != NULL) && (s_93 != t)))
              _fail(t);
            else
              s_93 = t;
            t = a_94(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_93), not_null(r_93));
          t = conc_0_0(t);
          if(((t_93 != NULL) && (t_93 != t)))
            _fail(t);
          else
            t_93 = t;
          t = b_94(t);
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(o_93))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(j_93))));
      }
    }
    return(t);
  }
  if(((y_92 != NULL) && (y_92 != t)))
    _fail(t);
  else
    y_92 = t;
  t = not_null(y_92);
  if(match_cons(t, sym_Specification_1))
    {
      z_92 = ATgetArgument(t, 0);
      t = not_null(z_92);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_93 = ATgetFirst((ATermList) t);
          c_93 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(a_93);
          if(match_cons(t, sym_Signature_1))
            {
              b_93 = ATgetArgument(t, 0);
              t = not_null(c_93);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_93 = ATgetFirst((ATermList) t);
                  f_93 = (ATerm) ATgetNext((ATermList) t);
                  t = not_null(d_93);
                  if(match_cons(t, sym_Overlays_1))
                    {
                      e_93 = ATgetArgument(t, 0);
                      t = not_null(f_93);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          g_93 = ATgetFirst((ATermList) t);
                          i_93 = (ATerm) ATgetNext((ATermList) t);
                          t = not_null(g_93);
                          if(match_cons(t, sym_Strategies_1))
                            {
                              h_93 = ATgetArgument(t, 0);
                              t = not_null(i_93);
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = u_93(t);
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
ATerm overlay_ud_0_0 (ATerm t)
{
  ATerm e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL;
  ATerm s_94 (ATerm t)
  {
    ATerm i_94 = NULL,j_94 = NULL,r_94 = NULL;
    t = not_null(f_94);
    if(((i_94 != NULL) && (i_94 != t)))
      _fail(t);
    else
      i_94 = t;
    t = not_null(g_94);
    if(((j_94 != NULL) && (j_94 != t)))
      _fail(t);
    else
      j_94 = t;
    t = not_null(h_94);
    if(((r_94 != NULL) && (r_94 != t)))
      _fail(t);
    else
      r_94 = t;
    t = not_null(e_94);
    {
      ATerm x_41;
      x_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_y_41, not_null(i_94)));
      {
        ATerm x_4 (ATerm t)
        {
          t = term_z_41;
          return(t);
        }
        t = assert_1_0(x_4, t);
        t = not_null(j_94);
        t = DefineBound_0_0(t);
        t = not_null(r_94);
        t = use_vars_0_0(t);
      }
      t = x_41;
    }
    return(t);
  }
  if(((e_94 != NULL) && (e_94 != t)))
    _fail(t);
  else
    e_94 = t;
  t = not_null(e_94);
  if(match_cons(t, sym_Overlay_3))
    {
      f_94 = ATgetArgument(t, 0);
      g_94 = ATgetArgument(t, 1);
      h_94 = ATgetArgument(t, 2);
      t = s_94(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm a_95 = NULL,b_95 = NULL,c_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL;
  ATerm s_96 (ATerm t)
  {
    ATerm n_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL,v_95 = NULL;
    t = not_null(h_95);
    if(((r_95 != NULL) && (r_95 != t)))
      _fail(t);
    else
      r_95 = t;
    t = not_null(i_95);
    if(((n_95 != NULL) && (n_95 != t)))
      _fail(t);
    else
      n_95 = t;
    t = not_null(j_95);
    if(((s_95 != NULL) && (s_95 != t)))
      _fail(t);
    else
      s_95 = t;
    t = not_null(b_95);
    if(((t_95 != NULL) && (t_95 != t)))
      _fail(t);
    else
      t_95 = t;
    t = not_null(c_95);
    if(((u_95 != NULL) && (u_95 != t)))
      _fail(t);
    else
      u_95 = t;
    t = not_null(f_95);
    if(((v_95 != NULL) && (v_95 != t)))
      _fail(t);
    else
      v_95 = t;
    t = not_null(g_95);
    {
      ATerm a_42;
      a_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_b_42, not_null(r_95)));
      {
        ATerm y_4 (ATerm t)
        {
          t = term_z_41;
          return(t);
        }
        t = assert_1_0(y_4, t);
        t = not_null(s_95);
        t = declared_vars_0_0(t);
        t = DefineBound_0_0(t);
        t = not_null(t_95);
        t = unbound_vars_0_0(t);
        t = not_null(u_95);
        t = unbound_vars_0_0(t);
        t = not_null(v_95);
        t = unbound_vars_0_0(t);
      }
      t = a_42;
    }
    return(t);
  }
  ATerm t_96 (ATerm t)
  {
    ATerm y_95 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL,h_96 = NULL;
    t = not_null(h_95);
    if(((b_96 != NULL) && (b_96 != t)))
      _fail(t);
    else
      b_96 = t;
    t = not_null(i_95);
    if(((y_95 != NULL) && (y_95 != t)))
      _fail(t);
    else
      y_95 = t;
    t = not_null(j_95);
    if(((c_96 != NULL) && (c_96 != t)))
      _fail(t);
    else
      c_96 = t;
    t = not_null(b_95);
    if(((d_96 != NULL) && (d_96 != t)))
      _fail(t);
    else
      d_96 = t;
    t = not_null(c_95);
    if(((h_96 != NULL) && (h_96 != t)))
      _fail(t);
    else
      h_96 = t;
    t = not_null(f_95);
    if(((e_96 != NULL) && (e_96 != t)))
      _fail(t);
    else
      e_96 = t;
    t = not_null(g_95);
    {
      ATerm m_43;
      m_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_n_43, not_null(b_96)));
      {
        ATerm z_4 (ATerm t)
        {
          t = term_z_41;
          return(t);
        }
        t = assert_1_0(z_4, t);
        t = not_null(c_96);
        t = declared_vars_0_0(t);
        t = DefineBound_0_0(t);
        t = not_null(d_96);
        t = bind_vars_0_0(t);
        t = not_null(e_96);
        t = unbound_vars_0_0(t);
        t = not_null(h_96);
        t = use_vars_0_0(t);
      }
      t = m_43;
    }
    return(t);
  }
  ATerm u_96 (ATerm t)
  {
    ATerm i_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL,r_96 = NULL;
    t = not_null(h_95);
    if(((o_96 != NULL) && (o_96 != t)))
      _fail(t);
    else
      o_96 = t;
    t = not_null(i_95);
    if(((i_96 != NULL) && (i_96 != t)))
      _fail(t);
    else
      i_96 = t;
    t = not_null(k_95);
    if(((p_96 != NULL) && (p_96 != t)))
      _fail(t);
    else
      p_96 = t;
    t = not_null(l_95);
    if(((r_96 != NULL) && (r_96 != t)))
      _fail(t);
    else
      r_96 = t;
    t = not_null(m_95);
    if(((q_96 != NULL) && (q_96 != t)))
      _fail(t);
    else
      q_96 = t;
    t = not_null(g_95);
    {
      ATerm o_43;
      o_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_43, not_null(o_96)));
      {
        ATerm a_5 (ATerm t)
        {
          t = term_z_41;
          return(t);
        }
        t = assert_1_0(a_5, t);
        t = not_null(p_96);
        t = bind_vars_0_0(t);
        t = not_null(q_96);
        t = unbound_vars_0_0(t);
        t = not_null(r_96);
        t = use_vars_0_0(t);
      }
      t = o_43;
    }
    return(t);
  }
  if(((g_95 != NULL) && (g_95 != t)))
    _fail(t);
  else
    g_95 = t;
  t = not_null(g_95);
  if(match_cons(t, sym_RDefT_4))
    {
      h_95 = ATgetArgument(t, 0);
      i_95 = ATgetArgument(t, 1);
      j_95 = ATgetArgument(t, 2);
      a_95 = ATgetArgument(t, 3);
      t = not_null(a_95);
      if(match_cons(t, sym_StratRule_3))
        {
          b_95 = ATgetArgument(t, 0);
          c_95 = ATgetArgument(t, 1);
          f_95 = ATgetArgument(t, 2);
          t = s_96(t);
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              b_95 = ATgetArgument(t, 0);
              c_95 = ATgetArgument(t, 1);
              f_95 = ATgetArgument(t, 2);
              t = t_96(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          h_95 = ATgetArgument(t, 0);
          i_95 = ATgetArgument(t, 1);
          j_95 = ATgetArgument(t, 2);
          t = not_null(j_95);
          if(match_cons(t, sym_Rule_3))
            {
              k_95 = ATgetArgument(t, 0);
              l_95 = ATgetArgument(t, 1);
              m_95 = ATgetArgument(t, 2);
              t = u_96(t);
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
ATerm guardedlchoice_1_0 (ATerm k_135 (ATerm), ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    t = GuardedLChoice_3_0(k_135, k_135, _id, t);
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = GuardedLChoice_3_0(_id, _id, k_135, t);
    return(t);
  }
  t = abstract_choice_2_0(b_5, c_5, t);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm t)
{
  ATerm f_97 = NULL,g_97 = NULL,h_97 = NULL,i_97 = NULL;
  ATerm x_97 (ATerm t)
  {
    ATerm j_97 = NULL,k_97 = NULL,l_97 = NULL,m_97 = NULL,n_97 = NULL,p_97 = NULL;
    ATerm c_98 (ATerm t)
    {
      ATerm q_97 = NULL,r_97 = NULL;
      ATerm d_98 (ATerm t)
      {
        ATerm s_97 = NULL,t_97 = NULL;
        ATerm l_98 (ATerm t)
        {
          ATerm u_97 = NULL,v_97 = NULL;
          t = not_null(t_97);
          if(((u_97 != NULL) && (u_97 != t)))
            _fail(t);
          else
            u_97 = t;
          t = not_null(t_97);
          {
            ATerm w_97 = NULL;
            ATerm m_98 (ATerm t)
            {
              t = not_null(w_97);
              if(((v_97 != NULL) && (v_97 != t)))
                _fail(t);
              else
                v_97 = t;
              t = not_null(w_97);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(q_97), not_null(s_97), not_null(u_97)), not_null(n_97));
            if(((w_97 != NULL) && (w_97 != t)))
              _fail(t);
            else
              w_97 = t;
            t = m_98(t);
            t = not_null(v_97);
          }
          return(t);
        }
        t = not_null(r_97);
        if(((s_97 != NULL) && (s_97 != t)))
          _fail(t);
        else
          s_97 = t;
        t = not_null(m_97);
        t = l_96(t);
        if(((t_97 != NULL) && (t_97 != t)))
          _fail(t);
        else
          t_97 = t;
        t = l_98(t);
        return(t);
      }
      t = not_null(p_97);
      if(((q_97 != NULL) && (q_97 != t)))
        _fail(t);
      else
        q_97 = t;
      t = not_null(l_97);
      t = k_96(t);
      if(((r_97 != NULL) && (r_97 != t)))
        _fail(t);
      else
        r_97 = t;
      t = d_98(t);
      return(t);
    }
    t = not_null(f_97);
    if(((j_97 != NULL) && (j_97 != t)))
      _fail(t);
    else
      j_97 = t;
    t = not_null(g_97);
    if(((k_97 != NULL) && (k_97 != t)))
      _fail(t);
    else
      k_97 = t;
    t = not_null(h_97);
    if(((l_97 != NULL) && (l_97 != t)))
      _fail(t);
    else
      l_97 = t;
    t = not_null(i_97);
    if(((m_97 != NULL) && (m_97 != t)))
      _fail(t);
    else
      m_97 = t;
    t = not_null(f_97);
    {
      ATerm o_97 = NULL;
      ATerm y_97 (ATerm t)
      {
        t = not_null(o_97);
        if(((n_97 != NULL) && (n_97 != t)))
          _fail(t);
        else
          n_97 = t;
        t = not_null(o_97);
        return(t);
      }
      t = SSLgetAnnotations(not_null(j_97));
      if(((o_97 != NULL) && (o_97 != t)))
        _fail(t);
      else
        o_97 = t;
      t = y_97(t);
      t = not_null(k_97);
      t = j_96(t);
      if(((p_97 != NULL) && (p_97 != t)))
        _fail(t);
      else
        p_97 = t;
      t = c_98(t);
    }
    return(t);
  }
  if(((f_97 != NULL) && (f_97 != t)))
    _fail(t);
  else
    f_97 = t;
  t = not_null(f_97);
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      g_97 = ATgetArgument(t, 0);
      h_97 = ATgetArgument(t, 1);
      i_97 = ATgetArgument(t, 2);
      t = x_97(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm lchoice_1_0 (ATerm j_135 (ATerm), ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    t = LChoice_2_0(j_135, _id, t);
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = LChoice_2_0(_id, j_135, t);
    return(t);
  }
  t = abstract_choice_2_0(d_5, e_5, t);
  return(t);
}
ATerm LChoice_2_0 (ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm t)
{
  ATerm t_98 = NULL,u_98 = NULL,v_98 = NULL;
  ATerm h_99 (ATerm t)
  {
    ATerm w_98 = NULL,x_98 = NULL,y_98 = NULL,z_98 = NULL,b_99 = NULL;
    ATerm j_99 (ATerm t)
    {
      ATerm c_99 = NULL,d_99 = NULL;
      ATerm k_99 (ATerm t)
      {
        ATerm e_99 = NULL,f_99 = NULL;
        t = not_null(d_99);
        if(((e_99 != NULL) && (e_99 != t)))
          _fail(t);
        else
          e_99 = t;
        t = not_null(d_99);
        {
          ATerm g_99 = NULL;
          ATerm l_99 (ATerm t)
          {
            t = not_null(g_99);
            if(((f_99 != NULL) && (f_99 != t)))
              _fail(t);
            else
              f_99 = t;
            t = not_null(g_99);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(c_99), not_null(e_99)), not_null(z_98));
          if(((g_99 != NULL) && (g_99 != t)))
            _fail(t);
          else
            g_99 = t;
          t = l_99(t);
          t = not_null(f_99);
        }
        return(t);
      }
      t = not_null(b_99);
      if(((c_99 != NULL) && (c_99 != t)))
        _fail(t);
      else
        c_99 = t;
      t = not_null(y_98);
      t = g_96(t);
      if(((d_99 != NULL) && (d_99 != t)))
        _fail(t);
      else
        d_99 = t;
      t = k_99(t);
      return(t);
    }
    t = not_null(t_98);
    if(((w_98 != NULL) && (w_98 != t)))
      _fail(t);
    else
      w_98 = t;
    t = not_null(u_98);
    if(((x_98 != NULL) && (x_98 != t)))
      _fail(t);
    else
      x_98 = t;
    t = not_null(v_98);
    if(((y_98 != NULL) && (y_98 != t)))
      _fail(t);
    else
      y_98 = t;
    t = not_null(t_98);
    {
      ATerm a_99 = NULL;
      ATerm i_99 (ATerm t)
      {
        t = not_null(a_99);
        if(((z_98 != NULL) && (z_98 != t)))
          _fail(t);
        else
          z_98 = t;
        t = not_null(a_99);
        return(t);
      }
      t = SSLgetAnnotations(not_null(w_98));
      if(((a_99 != NULL) && (a_99 != t)))
        _fail(t);
      else
        a_99 = t;
      t = i_99(t);
      t = not_null(x_98);
      t = f_96(t);
      if(((b_99 != NULL) && (b_99 != t)))
        _fail(t);
      else
        b_99 = t;
      t = j_99(t);
    }
    return(t);
  }
  if(((t_98 != NULL) && (t_98 != t)))
    _fail(t);
  else
    t_98 = t;
  t = not_null(t_98);
  if(match_cons(t, sym_LChoice_2))
    {
      u_98 = ATgetArgument(t, 0);
      v_98 = ATgetArgument(t, 1);
      t = h_99(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm isect_Bound_0_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm g_5 (ATerm t)
    {
      ATerm v_99 = NULL,w_99 = NULL,x_99 = NULL,y_99 = NULL,z_99 = NULL,a_100 = NULL;
      ATerm g_100 (ATerm t)
      {
        ATerm b_100 = NULL;
        t = not_null(w_99);
        if(((b_100 != NULL) && (b_100 != t)))
          _fail(t);
        else
          b_100 = t;
        t = not_null(v_99);
        {
          ATerm q_43 = t;
          int r_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_43;
              s_43 = t;
              {
                ATerm c_100 = NULL,d_100 = NULL,e_100 = NULL,f_100 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, term_t_43, not_null(b_100));
                t = table_get_0_0(t);
                if(((c_100 != NULL) && (c_100 != t)))
                  _fail(t);
                else
                  c_100 = t;
                t = not_null(c_100);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    d_100 = ATgetFirst((ATermList) t);
                    f_100 = (ATerm) ATgetNext((ATermList) t);
                    t = not_null(d_100);
                    if(match_cons(t, sym_Defined_1))
                      {
                        e_100 = ATgetArgument(t, 0);
                        t = not_null(c_100);
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
              t = s_43;
              ;
              LocalPopChoice(r_43);
            }
          else
            {
              t = q_43;
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_100), (ATerm) ATinsert(ATempty, term_u_43));
            }
        }
        return(t);
      }
      if(((v_99 != NULL) && (v_99 != t)))
        _fail(t);
      else
        v_99 = t;
      t = not_null(v_99);
      if(match_cons(t, sym__2))
        {
          w_99 = ATgetArgument(t, 0);
          x_99 = ATgetArgument(t, 1);
          t = not_null(x_99);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_99 = ATgetFirst((ATermList) t);
              a_100 = (ATerm) ATgetNext((ATermList) t);
              t = not_null(y_99);
              if(match_cons(t, sym_Defined_1))
                {
                  z_99 = ATgetArgument(t, 0);
                  t = not_null(w_99);
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm v_43 = t;
                      int y_43 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = not_null(v_99);
                          ;
                          LocalPopChoice(y_43);
                        }
                      else
                        {
                          t = v_43;
                          t = g_100(t);
                        }
                    }
                  else
                    {
                      t = g_100(t);
                    }
                }
              else
                {
                  t = not_null(w_99);
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = not_null(v_99);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              t = not_null(w_99);
              if(match_cons(t, sym_Scopes_0))
                {
                  t = not_null(v_99);
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
    t = try_1_0(g_5, t);
    return(t);
  }
  t = map_1_0(f_5, t);
  t = restore_Bound_0_0(t);
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm l_100 = NULL,m_100 = NULL,n_100 = NULL;
  ATerm v_100 (ATerm t)
  {
    ATerm o_100 = NULL,p_100 = NULL;
    t = not_null(m_100);
    if(((p_100 != NULL) && (p_100 != t)))
      _fail(t);
    else
      p_100 = t;
    t = not_null(n_100);
    if(((o_100 != NULL) && (o_100 != t)))
      _fail(t);
    else
      o_100 = t;
    t = not_null(o_100);
    {
      ATerm h_5 (ATerm t)
      {
        ATerm q_100 = NULL,r_100 = NULL,s_100 = NULL;
        ATerm w_100 (ATerm t)
        {
          ATerm t_100 = NULL,u_100 = NULL;
          t = not_null(r_100);
          if(((t_100 != NULL) && (t_100 != t)))
            _fail(t);
          else
            t_100 = t;
          t = not_null(s_100);
          if(((u_100 != NULL) && (u_100 != t)))
            _fail(t);
          else
            u_100 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(p_100), not_null(t_100), not_null(u_100));
          t = table_put_0_0(t);
          return(t);
        }
        if(((q_100 != NULL) && (q_100 != t)))
          _fail(t);
        else
          q_100 = t;
        t = not_null(q_100);
        if(match_cons(t, sym__2))
          {
            r_100 = ATgetArgument(t, 0);
            s_100 = ATgetArgument(t, 1);
            t = w_100(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = map_1_0(h_5, t);
    }
    return(t);
  }
  if(((l_100 != NULL) && (l_100 != t)))
    _fail(t);
  else
    l_100 = t;
  t = not_null(l_100);
  if(match_cons(t, sym__2))
    {
      m_100 = ATgetArgument(t, 0);
      n_100 = ATgetArgument(t, 1);
      t = v_100(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm restore_Bound_0_0 (ATerm t)
{
  ATerm y_100 = NULL;
  ATerm a_101 (ATerm t)
  {
    ATerm z_100 = NULL;
    t = not_null(y_100);
    if(((z_100 != NULL) && (z_100 != t)))
      _fail(t);
    else
      z_100 = t;
    t = not_null(y_100);
    {
      ATerm z_43;
      z_43 = t;
      t = term_t_43;
      t = table_destroy_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, term_t_43, not_null(z_100));
      t = table_putlist_0_0(t);
      t = z_43;
    }
    return(t);
  }
  if(((y_100 != NULL) && (y_100 != t)))
    _fail(t);
  else
    y_100 = t;
  t = a_101(t);
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm c_101 = NULL;
  ATerm e_101 (ATerm t)
  {
    ATerm d_101 = NULL;
    t = not_null(c_101);
    if(((d_101 != NULL) && (d_101 != t)))
      _fail(t);
    else
      d_101 = t;
    t = not_null(c_101);
    t = SSL_table_keys(not_null(d_101));
    return(t);
  }
  if(((c_101 != NULL) && (c_101 != t)))
    _fail(t);
  else
    c_101 = t;
  t = e_101(t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm i_101 = NULL;
  ATerm o_101 (ATerm t)
  {
    ATerm j_101 = NULL;
    t = not_null(i_101);
    if(((j_101 != NULL) && (j_101 != t)))
      _fail(t);
    else
      j_101 = t;
    t = not_null(i_101);
    t = table_keys_0_0(t);
    {
      ATerm i_5 (ATerm t)
      {
        ATerm k_101 = NULL;
        ATerm p_101 (ATerm t)
        {
          ATerm l_101 = NULL,m_101 = NULL;
          t = not_null(k_101);
          if(((l_101 != NULL) && (l_101 != t)))
            _fail(t);
          else
            l_101 = t;
          t = not_null(k_101);
          {
            ATerm n_101 = NULL;
            ATerm q_101 (ATerm t)
            {
              t = not_null(n_101);
              if(((m_101 != NULL) && (m_101 != t)))
                _fail(t);
              else
                m_101 = t;
              t = not_null(n_101);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_101), not_null(l_101));
            t = table_get_0_0(t);
            if(((n_101 != NULL) && (n_101 != t)))
              _fail(t);
            else
              n_101 = t;
            t = q_101(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_101), not_null(m_101));
          }
          return(t);
        }
        if(((k_101 != NULL) && (k_101 != t)))
          _fail(t);
        else
          k_101 = t;
        t = p_101(t);
        return(t);
      }
      t = map_1_0(i_5, t);
    }
    return(t);
  }
  if(((i_101 != NULL) && (i_101 != t)))
    _fail(t);
  else
    i_101 = t;
  t = o_101(t);
  return(t);
}
ATerm save_Bound_0_0 (ATerm t)
{
  t = term_t_43;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm g_135 (ATerm), ATerm h_135 (ATerm), ATerm t)
{
  ATerm t_101 = NULL,v_101 = NULL;
  ATerm a_44;
  a_44 = t;
  {
    ATerm u_101 = NULL;
    ATerm x_101 (ATerm t)
    {
      t = not_null(u_101);
      if(((t_101 != NULL) && (t_101 != t)))
        _fail(t);
      else
        t_101 = t;
      t = not_null(u_101);
      return(t);
    }
    t = save_Bound_0_0(t);
    if(((u_101 != NULL) && (u_101 != t)))
      _fail(t);
    else
      u_101 = t;
    t = x_101(t);
  }
  t = a_44;
  t = g_135(t);
  {
    ATerm m_44;
    m_44 = t;
    {
      ATerm w_101 = NULL;
      ATerm y_101 (ATerm t)
      {
        t = not_null(w_101);
        if(((v_101 != NULL) && (v_101 != t)))
          _fail(t);
        else
          v_101 = t;
        t = not_null(t_101);
        t = restore_Bound_0_0(t);
        return(t);
      }
      t = save_Bound_0_0(t);
      if(((w_101 != NULL) && (w_101 != t)))
        _fail(t);
      else
        w_101 = t;
      t = y_101(t);
    }
    t = m_44;
    t = h_135(t);
    {
      ATerm n_44;
      n_44 = t;
      t = not_null(v_101);
      t = isect_Bound_0_0(t);
      t = n_44;
    }
  }
  return(t);
}
ATerm choice_1_0 (ATerm i_135 (ATerm), ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    t = Choice_2_0(i_135, _id, t);
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = Choice_2_0(_id, i_135, t);
    return(t);
  }
  t = abstract_choice_2_0(j_5, k_5, t);
  return(t);
}
ATerm Choice_2_0 (ATerm d_95 (ATerm), ATerm e_95 (ATerm), ATerm t)
{
  ATerm f_102 = NULL,g_102 = NULL,h_102 = NULL;
  ATerm t_102 (ATerm t)
  {
    ATerm i_102 = NULL,j_102 = NULL,k_102 = NULL,l_102 = NULL,n_102 = NULL;
    ATerm v_102 (ATerm t)
    {
      ATerm o_102 = NULL,p_102 = NULL;
      ATerm w_102 (ATerm t)
      {
        ATerm q_102 = NULL,r_102 = NULL;
        t = not_null(p_102);
        if(((q_102 != NULL) && (q_102 != t)))
          _fail(t);
        else
          q_102 = t;
        t = not_null(p_102);
        {
          ATerm s_102 = NULL;
          ATerm x_102 (ATerm t)
          {
            t = not_null(s_102);
            if(((r_102 != NULL) && (r_102 != t)))
              _fail(t);
            else
              r_102 = t;
            t = not_null(s_102);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(o_102), not_null(q_102)), not_null(l_102));
          if(((s_102 != NULL) && (s_102 != t)))
            _fail(t);
          else
            s_102 = t;
          t = x_102(t);
          t = not_null(r_102);
        }
        return(t);
      }
      t = not_null(n_102);
      if(((o_102 != NULL) && (o_102 != t)))
        _fail(t);
      else
        o_102 = t;
      t = not_null(k_102);
      t = e_95(t);
      if(((p_102 != NULL) && (p_102 != t)))
        _fail(t);
      else
        p_102 = t;
      t = w_102(t);
      return(t);
    }
    t = not_null(f_102);
    if(((i_102 != NULL) && (i_102 != t)))
      _fail(t);
    else
      i_102 = t;
    t = not_null(g_102);
    if(((j_102 != NULL) && (j_102 != t)))
      _fail(t);
    else
      j_102 = t;
    t = not_null(h_102);
    if(((k_102 != NULL) && (k_102 != t)))
      _fail(t);
    else
      k_102 = t;
    t = not_null(f_102);
    {
      ATerm m_102 = NULL;
      ATerm u_102 (ATerm t)
      {
        t = not_null(m_102);
        if(((l_102 != NULL) && (l_102 != t)))
          _fail(t);
        else
          l_102 = t;
        t = not_null(m_102);
        return(t);
      }
      t = SSLgetAnnotations(not_null(i_102));
      if(((m_102 != NULL) && (m_102 != t)))
        _fail(t);
      else
        m_102 = t;
      t = u_102(t);
      t = not_null(j_102);
      t = d_95(t);
      if(((n_102 != NULL) && (n_102 != t)))
        _fail(t);
      else
        n_102 = t;
      t = v_102(t);
    }
    return(t);
  }
  if(((f_102 != NULL) && (f_102 != t)))
    _fail(t);
  else
    f_102 = t;
  t = not_null(f_102);
  if(match_cons(t, sym_Choice_2))
    {
      g_102 = ATgetArgument(t, 0);
      h_102 = ATgetArgument(t, 1);
      t = t_102(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm w_103 = NULL;
  ATerm l_105 (ATerm t)
  {
    ATerm x_103 = NULL,y_103 = NULL,z_103 = NULL;
    t = not_null(w_103);
    if(((x_103 != NULL) && (x_103 != t)))
      _fail(t);
    else
      x_103 = t;
    t = not_null(w_103);
    if(((y_103 != NULL) && (y_103 != t)))
      _fail(t);
    else
      y_103 = t;
    t = not_null(w_103);
    {
      ATerm c_104 = NULL,d_104 = NULL,e_104 = NULL;
      ATerm t_105 (ATerm t)
      {
        t = not_null(e_104);
        if(((z_103 != NULL) && (z_103 != t)))
          _fail(t);
        else
          z_103 = t;
        t = not_null(c_104);
        return(t);
      }
      t = (ATerm) ATempty;
      {
        ATerm l_5 (ATerm t)
        {
          t = term_z_41;
          return(t);
        }
        t = rewrite_1_0(l_5, t);
        if(((c_104 != NULL) && (c_104 != t)))
          _fail(t);
        else
          c_104 = t;
        t = not_null(c_104);
        if(match_cons(t, sym_Defined_2))
          {
            d_104 = ATgetArgument(t, 0);
            e_104 = ATgetArgument(t, 1);
            t = not_null(d_104);
            if(match_string(t, "d_1"))
              {
                t = t_105(t);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(y_103)), term_n_36), not_null(z_103)), term_p_44);
    }
    return(t);
  }
  ATerm m_105 (ATerm t)
  {
    ATerm f_104 = NULL,g_104 = NULL,h_104 = NULL;
    t = not_null(w_103);
    if(((f_104 != NULL) && (f_104 != t)))
      _fail(t);
    else
      f_104 = t;
    t = not_null(w_103);
    if(((g_104 != NULL) && (g_104 != t)))
      _fail(t);
    else
      g_104 = t;
    t = not_null(w_103);
    {
      ATerm i_104 = NULL,j_104 = NULL,k_104 = NULL;
      ATerm u_105 (ATerm t)
      {
        t = not_null(k_104);
        if(((h_104 != NULL) && (h_104 != t)))
          _fail(t);
        else
          h_104 = t;
        t = not_null(i_104);
        return(t);
      }
      t = (ATerm) ATempty;
      {
        ATerm m_5 (ATerm t)
        {
          t = term_z_41;
          return(t);
        }
        t = rewrite_1_0(m_5, t);
        if(((i_104 != NULL) && (i_104 != t)))
          _fail(t);
        else
          i_104 = t;
        t = not_null(i_104);
        if(match_cons(t, sym_Defined_2))
          {
            j_104 = ATgetArgument(t, 0);
            k_104 = ATgetArgument(t, 1);
            t = not_null(j_104);
            if(match_string(t, "a_1"))
              {
                t = u_105(t);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_104)), term_n_36), not_null(h_104)), term_q_44);
    }
    return(t);
  }
  ATerm n_105 (ATerm t)
  {
    ATerm l_104 = NULL,m_104 = NULL,n_104 = NULL;
    t = not_null(w_103);
    if(((l_104 != NULL) && (l_104 != t)))
      _fail(t);
    else
      l_104 = t;
    t = not_null(w_103);
    if(((m_104 != NULL) && (m_104 != t)))
      _fail(t);
    else
      m_104 = t;
    t = not_null(w_103);
    {
      ATerm o_104 = NULL,p_104 = NULL,q_104 = NULL;
      ATerm v_105 (ATerm t)
      {
        t = not_null(q_104);
        if(((n_104 != NULL) && (n_104 != t)))
          _fail(t);
        else
          n_104 = t;
        t = not_null(o_104);
        return(t);
      }
      t = (ATerm) ATempty;
      {
        ATerm n_5 (ATerm t)
        {
          t = term_z_41;
          return(t);
        }
        t = rewrite_1_0(n_5, t);
        if(((o_104 != NULL) && (o_104 != t)))
          _fail(t);
        else
          o_104 = t;
        t = not_null(o_104);
        if(match_cons(t, sym_Defined_2))
          {
            p_104 = ATgetArgument(t, 0);
            q_104 = ATgetArgument(t, 1);
            t = not_null(p_104);
            if(match_string(t, "x_0"))
              {
                t = v_105(t);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(m_104)), term_n_36), not_null(n_104)), term_q_44);
    }
    return(t);
  }
  ATerm o_105 (ATerm t)
  {
    ATerm r_104 = NULL,s_104 = NULL,t_104 = NULL;
    t = not_null(w_103);
    if(((r_104 != NULL) && (r_104 != t)))
      _fail(t);
    else
      r_104 = t;
    t = not_null(w_103);
    if(((s_104 != NULL) && (s_104 != t)))
      _fail(t);
    else
      s_104 = t;
    t = not_null(w_103);
    {
      ATerm u_104 = NULL,v_104 = NULL,w_104 = NULL;
      ATerm w_105 (ATerm t)
      {
        t = not_null(w_104);
        if(((t_104 != NULL) && (t_104 != t)))
          _fail(t);
        else
          t_104 = t;
        t = not_null(u_104);
        return(t);
      }
      t = (ATerm) ATempty;
      {
        ATerm o_5 (ATerm t)
        {
          t = term_z_41;
          return(t);
        }
        t = rewrite_1_0(o_5, t);
        if(((u_104 != NULL) && (u_104 != t)))
          _fail(t);
        else
          u_104 = t;
        t = not_null(u_104);
        if(match_cons(t, sym_Defined_2))
          {
            v_104 = ATgetArgument(t, 0);
            w_104 = ATgetArgument(t, 1);
            t = not_null(v_104);
            if(match_string(t, "u_0"))
              {
                t = w_105(t);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(s_104)), term_n_36), not_null(t_104)), term_q_44);
    }
    return(t);
  }
  ATerm p_105 (ATerm t)
  {
    ATerm x_104 = NULL,y_104 = NULL,z_104 = NULL;
    t = not_null(w_103);
    if(((x_104 != NULL) && (x_104 != t)))
      _fail(t);
    else
      x_104 = t;
    t = not_null(w_103);
    if(((y_104 != NULL) && (y_104 != t)))
      _fail(t);
    else
      y_104 = t;
    t = not_null(w_103);
    {
      ATerm c_105 = NULL,d_105 = NULL,e_105 = NULL;
      ATerm z_105 (ATerm t)
      {
        t = not_null(e_105);
        if(((z_104 != NULL) && (z_104 != t)))
          _fail(t);
        else
          z_104 = t;
        t = not_null(c_105);
        return(t);
      }
      t = (ATerm) ATempty;
      {
        ATerm p_5 (ATerm t)
        {
          t = term_z_41;
          return(t);
        }
        t = rewrite_1_0(p_5, t);
        if(((c_105 != NULL) && (c_105 != t)))
          _fail(t);
        else
          c_105 = t;
        t = not_null(c_105);
        if(match_cons(t, sym_Defined_2))
          {
            d_105 = ATgetArgument(t, 0);
            e_105 = ATgetArgument(t, 1);
            t = not_null(d_105);
            if(match_string(t, "r_0"))
              {
                t = z_105(t);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(y_104)), term_n_36), not_null(z_104)), term_r_44);
    }
    return(t);
  }
  ATerm s_105 (ATerm t)
  {
    ATerm f_105 = NULL,g_105 = NULL,h_105 = NULL;
    t = not_null(w_103);
    if(((f_105 != NULL) && (f_105 != t)))
      _fail(t);
    else
      f_105 = t;
    t = not_null(w_103);
    if(((g_105 != NULL) && (g_105 != t)))
      _fail(t);
    else
      g_105 = t;
    t = not_null(w_103);
    {
      ATerm i_105 = NULL,j_105 = NULL,k_105 = NULL;
      ATerm a_106 (ATerm t)
      {
        t = not_null(k_105);
        if(((h_105 != NULL) && (h_105 != t)))
          _fail(t);
        else
          h_105 = t;
        t = not_null(i_105);
        return(t);
      }
      t = (ATerm) ATempty;
      {
        ATerm q_5 (ATerm t)
        {
          t = term_z_41;
          return(t);
        }
        t = rewrite_1_0(q_5, t);
        if(((i_105 != NULL) && (i_105 != t)))
          _fail(t);
        else
          i_105 = t;
        t = not_null(i_105);
        if(match_cons(t, sym_Defined_2))
          {
            j_105 = ATgetArgument(t, 0);
            k_105 = ATgetArgument(t, 1);
            t = not_null(j_105);
            if(match_string(t, "o_0"))
              {
                t = a_106(t);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_105)), term_n_36), not_null(h_105)), term_r_44);
    }
    return(t);
  }
  if(((w_103 != NULL) && (w_103 != t)))
    _fail(t);
  else
    w_103 = t;
  {
    ATerm s_44 = t;
    int v_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_105(t);
        ;
        LocalPopChoice(v_44);
      }
    else
      {
        t = s_44;
        {
          ATerm w_44 = t;
          int x_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_105(t);
              ;
              LocalPopChoice(x_44);
            }
          else
            {
              t = w_44;
              {
                ATerm y_44 = t;
                int c_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = n_105(t);
                    ;
                    LocalPopChoice(c_45);
                  }
                else
                  {
                    t = y_44;
                    {
                      ATerm d_45 = t;
                      int e_45 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = o_105(t);
                          ;
                          LocalPopChoice(e_45);
                        }
                      else
                        {
                          t = d_45;
                          {
                            ATerm f_45 = t;
                            int g_45 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = p_105(t);
                                ;
                                LocalPopChoice(g_45);
                              }
                            else
                              {
                                t = f_45;
                                t = s_105(t);
                              }
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
ATerm Unbound_0_0 (ATerm t)
{
  ATerm d_106 = NULL,e_106 = NULL;
  ATerm g_106 (ATerm t)
  {
    ATerm f_106 = NULL;
    t = not_null(e_106);
    if(((f_106 != NULL) && (f_106 != t)))
      _fail(t);
    else
      f_106 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_45), not_null(f_106)), term_h_45);
    t = Context_0_0(t);
    t = error_0_0(t);
    return(t);
  }
  if(((d_106 != NULL) && (d_106 != t)))
    _fail(t);
  else
    d_106 = t;
  t = not_null(d_106);
  if(match_cons(t, sym_Var_1))
    {
      e_106 = ATgetArgument(t, 0);
      t = g_106(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bound_0_0 (ATerm t)
{
  ATerm z_106 = NULL,a_107 = NULL;
  ATerm m_107 (ATerm t)
  {
    ATerm b_107 = NULL,c_107 = NULL;
    t = not_null(z_106);
    if(((c_107 != NULL) && (c_107 != t)))
      _fail(t);
    else
      c_107 = t;
    t = not_null(a_107);
    if(((b_107 != NULL) && (b_107 != t)))
      _fail(t);
    else
      b_107 = t;
    t = not_null(z_106);
    {
      ATerm d_107 = NULL,e_107 = NULL;
      t = not_null(c_107);
      {
        ATerm r_5 (ATerm t)
        {
          t = term_t_43;
          return(t);
        }
        t = rewrite_1_0(r_5, t);
        if(((d_107 != NULL) && (d_107 != t)))
          _fail(t);
        else
          d_107 = t;
        t = not_null(d_107);
        if(match_cons(t, sym_Defined_1))
          {
            e_107 = ATgetArgument(t, 0);
            t = not_null(e_107);
            if(match_string(t, "k_1"))
              {
                t = not_null(d_107);
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
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_107));
    }
    return(t);
  }
  ATerm n_107 (ATerm t)
  {
    ATerm f_107 = NULL,g_107 = NULL;
    t = not_null(z_106);
    if(((g_107 != NULL) && (g_107 != t)))
      _fail(t);
    else
      g_107 = t;
    t = not_null(a_107);
    if(((f_107 != NULL) && (f_107 != t)))
      _fail(t);
    else
      f_107 = t;
    t = not_null(z_106);
    {
      ATerm h_107 = NULL;
      ATerm p_107 (ATerm t)
      {
        t = not_null(h_107);
        _fail(t);
        return(t);
      }
      t = not_null(g_107);
      {
        ATerm s_5 (ATerm t)
        {
          t = term_t_43;
          return(t);
        }
        t = rewrite_1_0(s_5, t);
        if(((h_107 != NULL) && (h_107 != t)))
          _fail(t);
        else
          h_107 = t;
        t = not_null(h_107);
        if(match_cons(t, sym_Undefined_0))
          {
            t = p_107(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = term_u_43;
    }
    return(t);
  }
  ATerm o_107 (ATerm t)
  {
    ATerm i_107 = NULL,j_107 = NULL;
    t = not_null(z_106);
    if(((j_107 != NULL) && (j_107 != t)))
      _fail(t);
    else
      j_107 = t;
    t = not_null(a_107);
    if(((i_107 != NULL) && (i_107 != t)))
      _fail(t);
    else
      i_107 = t;
    t = not_null(z_106);
    {
      ATerm k_107 = NULL,l_107 = NULL;
      t = not_null(j_107);
      {
        ATerm t_5 (ATerm t)
        {
          t = term_t_43;
          return(t);
        }
        t = rewrite_1_0(t_5, t);
        if(((k_107 != NULL) && (k_107 != t)))
          _fail(t);
        else
          k_107 = t;
        t = not_null(k_107);
        if(match_cons(t, sym_Defined_1))
          {
            l_107 = ATgetArgument(t, 0);
            t = not_null(l_107);
            if(match_string(t, "g_1"))
              {
                t = not_null(k_107);
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
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_107));
    }
    return(t);
  }
  if(((z_106 != NULL) && (z_106 != t)))
    _fail(t);
  else
    z_106 = t;
  t = not_null(z_106);
  if(match_cons(t, sym_Var_1))
    {
      a_107 = ATgetArgument(t, 0);
      {
        ATerm j_45 = t;
        int k_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_107(t);
            ;
            LocalPopChoice(k_45);
          }
        else
          {
            t = j_45;
            {
              ATerm l_45 = t;
              int m_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_107(t);
                  ;
                  LocalPopChoice(m_45);
                }
              else
                {
                  t = l_45;
                  t = o_107(t);
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
ATerm use_vars_0_0 (ATerm t)
{
  ATerm n_45 = t;
  int o_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(o_45);
      {
        ATerm p_45 = t;
        int k_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0_0(t);
            ;
            LocalPopChoice(k_46);
          }
        else
          {
            t = p_45;
            t = Unbound_0_0(t);
            _fail(t);
          }
      }
    }
  else
    {
      t = n_45;
      {
        ATerm l_46 = t;
        int m_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(m_46);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = l_46;
            {
              ATerm n_46 = t;
              int o_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(o_46);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = n_46;
                  t = SRTS_all(use_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3_0 (ATerm w_93 (ATerm), ATerm x_93 (ATerm), ATerm y_93 (ATerm), ATerm t)
{
  ATerm x_107 = NULL,y_107 = NULL,b_108 = NULL,c_108 = NULL;
  ATerm t_108 (ATerm t)
  {
    ATerm d_108 = NULL,e_108 = NULL,f_108 = NULL,g_108 = NULL,h_108 = NULL,j_108 = NULL;
    ATerm v_108 (ATerm t)
    {
      ATerm k_108 = NULL,l_108 = NULL;
      ATerm w_108 (ATerm t)
      {
        ATerm m_108 = NULL,p_108 = NULL;
        ATerm x_108 (ATerm t)
        {
          ATerm q_108 = NULL,r_108 = NULL;
          t = not_null(p_108);
          if(((q_108 != NULL) && (q_108 != t)))
            _fail(t);
          else
            q_108 = t;
          t = not_null(p_108);
          {
            ATerm s_108 = NULL;
            ATerm y_108 (ATerm t)
            {
              t = not_null(s_108);
              if(((r_108 != NULL) && (r_108 != t)))
                _fail(t);
              else
                r_108 = t;
              t = not_null(s_108);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(k_108), not_null(m_108), not_null(q_108)), not_null(h_108));
            if(((s_108 != NULL) && (s_108 != t)))
              _fail(t);
            else
              s_108 = t;
            t = y_108(t);
            t = not_null(r_108);
          }
          return(t);
        }
        t = not_null(l_108);
        if(((m_108 != NULL) && (m_108 != t)))
          _fail(t);
        else
          m_108 = t;
        t = not_null(g_108);
        t = y_93(t);
        if(((p_108 != NULL) && (p_108 != t)))
          _fail(t);
        else
          p_108 = t;
        t = x_108(t);
        return(t);
      }
      t = not_null(j_108);
      if(((k_108 != NULL) && (k_108 != t)))
        _fail(t);
      else
        k_108 = t;
      t = not_null(f_108);
      t = x_93(t);
      if(((l_108 != NULL) && (l_108 != t)))
        _fail(t);
      else
        l_108 = t;
      t = w_108(t);
      return(t);
    }
    t = not_null(x_107);
    if(((d_108 != NULL) && (d_108 != t)))
      _fail(t);
    else
      d_108 = t;
    t = not_null(y_107);
    if(((e_108 != NULL) && (e_108 != t)))
      _fail(t);
    else
      e_108 = t;
    t = not_null(b_108);
    if(((f_108 != NULL) && (f_108 != t)))
      _fail(t);
    else
      f_108 = t;
    t = not_null(c_108);
    if(((g_108 != NULL) && (g_108 != t)))
      _fail(t);
    else
      g_108 = t;
    t = not_null(x_107);
    {
      ATerm i_108 = NULL;
      ATerm u_108 (ATerm t)
      {
        t = not_null(i_108);
        if(((h_108 != NULL) && (h_108 != t)))
          _fail(t);
        else
          h_108 = t;
        t = not_null(i_108);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_108));
      if(((i_108 != NULL) && (i_108 != t)))
        _fail(t);
      else
        i_108 = t;
      t = u_108(t);
      t = not_null(e_108);
      t = w_93(t);
      if(((j_108 != NULL) && (j_108 != t)))
        _fail(t);
      else
        j_108 = t;
      t = v_108(t);
    }
    return(t);
  }
  if(((x_107 != NULL) && (x_107 != t)))
    _fail(t);
  else
    x_107 = t;
  t = not_null(x_107);
  if(match_cons(t, sym_Rule_3))
    {
      y_107 = ATgetArgument(t, 0);
      b_108 = ATgetArgument(t, 1);
      c_108 = ATgetArgument(t, 2);
      t = t_108(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RootApp_1_0 (ATerm v_92 (ATerm), ATerm t)
{
  ATerm e_109 = NULL,f_109 = NULL;
  ATerm q_109 (ATerm t)
  {
    ATerm g_109 = NULL,j_109 = NULL,k_109 = NULL,m_109 = NULL;
    ATerm s_109 (ATerm t)
    {
      ATerm n_109 = NULL,o_109 = NULL;
      t = not_null(m_109);
      if(((n_109 != NULL) && (n_109 != t)))
        _fail(t);
      else
        n_109 = t;
      t = not_null(m_109);
      {
        ATerm p_109 = NULL;
        ATerm t_109 (ATerm t)
        {
          t = not_null(p_109);
          if(((o_109 != NULL) && (o_109 != t)))
            _fail(t);
          else
            o_109 = t;
          t = not_null(p_109);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, not_null(n_109)), not_null(k_109));
        if(((p_109 != NULL) && (p_109 != t)))
          _fail(t);
        else
          p_109 = t;
        t = t_109(t);
        t = not_null(o_109);
      }
      return(t);
    }
    t = not_null(e_109);
    if(((g_109 != NULL) && (g_109 != t)))
      _fail(t);
    else
      g_109 = t;
    t = not_null(f_109);
    if(((j_109 != NULL) && (j_109 != t)))
      _fail(t);
    else
      j_109 = t;
    t = not_null(e_109);
    {
      ATerm l_109 = NULL;
      ATerm r_109 (ATerm t)
      {
        t = not_null(l_109);
        if(((k_109 != NULL) && (k_109 != t)))
          _fail(t);
        else
          k_109 = t;
        t = not_null(l_109);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_109));
      if(((l_109 != NULL) && (l_109 != t)))
        _fail(t);
      else
        l_109 = t;
      t = r_109(t);
      t = not_null(j_109);
      t = v_92(t);
      if(((m_109 != NULL) && (m_109 != t)))
        _fail(t);
      else
        m_109 = t;
      t = s_109(t);
    }
    return(t);
  }
  if(((e_109 != NULL) && (e_109 != t)))
    _fail(t);
  else
    e_109 = t;
  t = not_null(e_109);
  if(match_cons(t, sym_RootApp_1))
    {
      f_109 = ATgetArgument(t, 0);
      t = q_109(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm App_2_0 (ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm t)
{
  ATerm a_110 = NULL,b_110 = NULL,c_110 = NULL;
  ATerm o_110 (ATerm t)
  {
    ATerm d_110 = NULL,e_110 = NULL,f_110 = NULL,g_110 = NULL,i_110 = NULL;
    ATerm q_110 (ATerm t)
    {
      ATerm j_110 = NULL,k_110 = NULL;
      ATerm r_110 (ATerm t)
      {
        ATerm l_110 = NULL,m_110 = NULL;
        t = not_null(k_110);
        if(((l_110 != NULL) && (l_110 != t)))
          _fail(t);
        else
          l_110 = t;
        t = not_null(k_110);
        {
          ATerm n_110 = NULL;
          ATerm s_110 (ATerm t)
          {
            t = not_null(n_110);
            if(((m_110 != NULL) && (m_110 != t)))
              _fail(t);
            else
              m_110 = t;
            t = not_null(n_110);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(j_110), not_null(l_110)), not_null(g_110));
          if(((n_110 != NULL) && (n_110 != t)))
            _fail(t);
          else
            n_110 = t;
          t = s_110(t);
          t = not_null(m_110);
        }
        return(t);
      }
      t = not_null(i_110);
      if(((j_110 != NULL) && (j_110 != t)))
        _fail(t);
      else
        j_110 = t;
      t = not_null(f_110);
      t = u_92(t);
      if(((k_110 != NULL) && (k_110 != t)))
        _fail(t);
      else
        k_110 = t;
      t = r_110(t);
      return(t);
    }
    t = not_null(a_110);
    if(((d_110 != NULL) && (d_110 != t)))
      _fail(t);
    else
      d_110 = t;
    t = not_null(b_110);
    if(((e_110 != NULL) && (e_110 != t)))
      _fail(t);
    else
      e_110 = t;
    t = not_null(c_110);
    if(((f_110 != NULL) && (f_110 != t)))
      _fail(t);
    else
      f_110 = t;
    t = not_null(a_110);
    {
      ATerm h_110 = NULL;
      ATerm p_110 (ATerm t)
      {
        t = not_null(h_110);
        if(((g_110 != NULL) && (g_110 != t)))
          _fail(t);
        else
          g_110 = t;
        t = not_null(h_110);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_110));
      if(((h_110 != NULL) && (h_110 != t)))
        _fail(t);
      else
        h_110 = t;
      t = p_110(t);
      t = not_null(e_110);
      t = t_92(t);
      if(((i_110 != NULL) && (i_110 != t)))
        _fail(t);
      else
        i_110 = t;
      t = q_110(t);
    }
    return(t);
  }
  if(((a_110 != NULL) && (a_110 != t)))
    _fail(t);
  else
    a_110 = t;
  t = not_null(a_110);
  if(match_cons(t, sym_App_2))
    {
      b_110 = ATgetArgument(t, 0);
      c_110 = ATgetArgument(t, 1);
      t = o_110(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm x_110 = NULL,y_110 = NULL,z_110 = NULL,a_111 = NULL;
  ATerm i_111 (ATerm t)
  {
    ATerm b_111 = NULL,c_111 = NULL,d_111 = NULL,e_111 = NULL;
    t = not_null(y_110);
    if(((b_111 != NULL) && (b_111 != t)))
      _fail(t);
    else
      b_111 = t;
    t = not_null(z_110);
    if(((c_111 != NULL) && (c_111 != t)))
      _fail(t);
    else
      c_111 = t;
    t = not_null(a_111);
    if(((d_111 != NULL) && (d_111 != t)))
      _fail(t);
    else
      d_111 = t;
    t = not_null(x_110);
    {
      ATerm v_46;
      v_46 = t;
      {
        ATerm f_111 = NULL,g_111 = NULL,h_111 = NULL;
        ATerm j_111 (ATerm t)
        {
          t = not_null(h_111);
          if(((e_111 != NULL) && (e_111 != t)))
            _fail(t);
          else
            e_111 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(b_111), not_null(c_111), (ATerm) ATinsert(CheckATermList(not_null(e_111)), not_null(d_111)));
          t = table_put_0_0(t);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_111), not_null(c_111));
        t = table_get_0_0(t);
        if(((f_111 != NULL) && (f_111 != t)))
          _fail(t);
        else
          f_111 = t;
        t = not_null(f_111);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_111 = ATgetFirst((ATermList) t);
            h_111 = (ATerm) ATgetNext((ATermList) t);
            t = j_111(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = v_46;
    }
    return(t);
  }
  if(((x_110 != NULL) && (x_110 != t)))
    _fail(t);
  else
    x_110 = t;
  t = not_null(x_110);
  if(match_cons(t, sym__3))
    {
      y_110 = ATgetArgument(t, 0);
      z_110 = ATgetArgument(t, 1);
      a_111 = ATgetArgument(t, 2);
      t = i_111(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm override_key_1_0 (ATerm g_123 (ATerm), ATerm t)
{
  ATerm p_111 = NULL,q_111 = NULL,r_111 = NULL;
  ATerm w_111 (ATerm t)
  {
    ATerm s_111 = NULL,t_111 = NULL,u_111 = NULL;
    t = not_null(q_111);
    if(((s_111 != NULL) && (s_111 != t)))
      _fail(t);
    else
      s_111 = t;
    t = not_null(r_111);
    if(((t_111 != NULL) && (t_111 != t)))
      _fail(t);
    else
      t_111 = t;
    t = not_null(p_111);
    {
      ATerm w_46;
      w_46 = t;
      {
        ATerm v_111 = NULL;
        ATerm x_111 (ATerm t)
        {
          t = not_null(v_111);
          if(((u_111 != NULL) && (u_111 != t)))
            _fail(t);
          else
            u_111 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(u_111), not_null(s_111), not_null(t_111));
          t = table_replace_0_0(t);
          return(t);
        }
        t = g_123(t);
        if(((v_111 != NULL) && (v_111 != t)))
          _fail(t);
        else
          v_111 = t;
        t = x_111(t);
      }
      t = w_46;
    }
    return(t);
  }
  if(((p_111 != NULL) && (p_111 != t)))
    _fail(t);
  else
    p_111 = t;
  t = not_null(p_111);
  if(match_cons(t, sym__2))
    {
      q_111 = ATgetArgument(t, 0);
      r_111 = ATgetArgument(t, 1);
      t = w_111(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm a_112 = NULL,c_112 = NULL;
  ATerm e_112 (ATerm t)
  {
    ATerm d_112 = NULL;
    t = not_null(c_112);
    if(((d_112 != NULL) && (d_112 != t)))
      _fail(t);
    else
      d_112 = t;
    t = not_null(a_112);
    {
      ATerm x_46;
      x_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_112)), term_z_46);
      {
        ATerm u_5 (ATerm t)
        {
          t = term_t_43;
          return(t);
        }
        t = override_key_1_0(u_5, t);
      }
      t = x_46;
    }
    return(t);
  }
  if(((a_112 != NULL) && (a_112 != t)))
    _fail(t);
  else
    a_112 = t;
  t = not_null(a_112);
  if(match_cons(t, sym_Var_1))
    {
      c_112 = ATgetArgument(t, 0);
      t = e_112(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm bind_vars_0_0 (ATerm t)
{
  ATerm a_47 = t;
  int b_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(b_47);
      t = Binding_0_0(t);
    }
  else
    {
      t = a_47;
      {
        ATerm c_48 = t;
        int g_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(g_48);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = c_48;
            {
              ATerm h_48 = t;
              int i_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(i_48);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = h_48;
                  t = SRTS_all(bind_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1_0 (ATerm w_95 (ATerm), ATerm t)
{
  ATerm l_112 = NULL,o_112 = NULL;
  ATerm z_112 (ATerm t)
  {
    ATerm p_112 = NULL,q_112 = NULL,r_112 = NULL,t_112 = NULL;
    ATerm b_113 (ATerm t)
    {
      ATerm u_112 = NULL,v_112 = NULL;
      t = not_null(t_112);
      if(((u_112 != NULL) && (u_112 != t)))
        _fail(t);
      else
        u_112 = t;
      t = not_null(t_112);
      {
        ATerm y_112 = NULL;
        ATerm e_113 (ATerm t)
        {
          t = not_null(y_112);
          if(((v_112 != NULL) && (v_112 != t)))
            _fail(t);
          else
            v_112 = t;
          t = not_null(y_112);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(u_112)), not_null(r_112));
        if(((y_112 != NULL) && (y_112 != t)))
          _fail(t);
        else
          y_112 = t;
        t = e_113(t);
        t = not_null(v_112);
      }
      return(t);
    }
    t = not_null(l_112);
    if(((p_112 != NULL) && (p_112 != t)))
      _fail(t);
    else
      p_112 = t;
    t = not_null(o_112);
    if(((q_112 != NULL) && (q_112 != t)))
      _fail(t);
    else
      q_112 = t;
    t = not_null(l_112);
    {
      ATerm s_112 = NULL;
      ATerm a_113 (ATerm t)
      {
        t = not_null(s_112);
        if(((r_112 != NULL) && (r_112 != t)))
          _fail(t);
        else
          r_112 = t;
        t = not_null(s_112);
        return(t);
      }
      t = SSLgetAnnotations(not_null(p_112));
      if(((s_112 != NULL) && (s_112 != t)))
        _fail(t);
      else
        s_112 = t;
      t = a_113(t);
      t = not_null(q_112);
      t = w_95(t);
      if(((t_112 != NULL) && (t_112 != t)))
        _fail(t);
      else
        t_112 = t;
      t = b_113(t);
    }
    return(t);
  }
  if(((l_112 != NULL) && (l_112 != t)))
    _fail(t);
  else
    l_112 = t;
  t = not_null(l_112);
  if(match_cons(t, sym_Match_1))
    {
      o_112 = ATgetArgument(t, 0);
      t = z_112(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Build_1_0 (ATerm x_95 (ATerm), ATerm t)
{
  ATerm k_113 = NULL,l_113 = NULL;
  ATerm y_113 (ATerm t)
  {
    ATerm m_113 = NULL,p_113 = NULL,q_113 = NULL,s_113 = NULL;
    ATerm a_114 (ATerm t)
    {
      ATerm t_113 = NULL,u_113 = NULL;
      t = not_null(s_113);
      if(((t_113 != NULL) && (t_113 != t)))
        _fail(t);
      else
        t_113 = t;
      t = not_null(s_113);
      {
        ATerm x_113 = NULL;
        ATerm b_114 (ATerm t)
        {
          t = not_null(x_113);
          if(((u_113 != NULL) && (u_113 != t)))
            _fail(t);
          else
            u_113 = t;
          t = not_null(x_113);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(t_113)), not_null(q_113));
        if(((x_113 != NULL) && (x_113 != t)))
          _fail(t);
        else
          x_113 = t;
        t = b_114(t);
        t = not_null(u_113);
      }
      return(t);
    }
    t = not_null(k_113);
    if(((m_113 != NULL) && (m_113 != t)))
      _fail(t);
    else
      m_113 = t;
    t = not_null(l_113);
    if(((p_113 != NULL) && (p_113 != t)))
      _fail(t);
    else
      p_113 = t;
    t = not_null(k_113);
    {
      ATerm r_113 = NULL;
      ATerm z_113 (ATerm t)
      {
        t = not_null(r_113);
        if(((q_113 != NULL) && (q_113 != t)))
          _fail(t);
        else
          q_113 = t;
        t = not_null(r_113);
        return(t);
      }
      t = SSLgetAnnotations(not_null(m_113));
      if(((r_113 != NULL) && (r_113 != t)))
        _fail(t);
      else
        r_113 = t;
      t = z_113(t);
      t = not_null(p_113);
      t = x_95(t);
      if(((s_113 != NULL) && (s_113 != t)))
        _fail(t);
      else
        s_113 = t;
      t = a_114(t);
    }
    return(t);
  }
  if(((k_113 != NULL) && (k_113 != t)))
    _fail(t);
  else
    k_113 = t;
  t = not_null(k_113);
  if(match_cons(t, sym_Build_1))
    {
      l_113 = ATgetArgument(t, 0);
      t = y_113(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm VarScope_1_0 (ATerm f_135 (ATerm), ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    t = term_t_43;
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = Scope_2_0(DefineUnbound_0_0, f_135, t);
    return(t);
  }
  t = scope_2_0(v_5, w_5, t);
  return(t);
}
ATerm unbound_vars_0_0 (ATerm t)
{
  ATerm j_48 = t;
  int k_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(_id, _id, t);
      LocalPopChoice(k_48);
      t = VarScope_1_0(unbound_vars_0_0, t);
    }
  else
    {
      t = j_48;
      {
        ATerm l_48 = t;
        int m_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1_0(_id, t);
            LocalPopChoice(m_48);
            t = Build_1_0(use_vars_0_0, t);
          }
        else
          {
            t = l_48;
            {
              ATerm n_48 = t;
              int o_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1_0(_id, t);
                  LocalPopChoice(o_48);
                  t = Match_1_0(bind_vars_0_0, t);
                }
              else
                {
                  t = n_48;
                  {
                    ATerm q_49 = t;
                    int r_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3_0(_id, _id, _id, t);
                        LocalPopChoice(r_49);
                        t = Rule_3_0(bind_vars_0_0, _id, _id, t);
                        t = Rule_3_0(_id, _id, unbound_vars_0_0, t);
                        t = Rule_3_0(_id, use_vars_0_0, _id, t);
                      }
                    else
                      {
                        t = q_49;
                        {
                          ATerm s_49 = t;
                          int z_49 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2_0(_id, _id, t);
                              LocalPopChoice(z_49);
                              t = choice_1_0(unbound_vars_0_0, t);
                            }
                          else
                            {
                              t = s_49;
                              {
                                ATerm a_50 = t;
                                int b_50 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2_0(_id, _id, t);
                                    LocalPopChoice(b_50);
                                    t = lchoice_1_0(unbound_vars_0_0, t);
                                  }
                                else
                                  {
                                    t = a_50;
                                    {
                                      ATerm c_50 = t;
                                      int d_50 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3_0(_id, _id, _id, t);
                                          LocalPopChoice(d_50);
                                          t = guardedlchoice_1_0(unbound_vars_0_0, t);
                                        }
                                      else
                                        {
                                          t = c_50;
                                          t = SRTS_all(unbound_vars_0_0, t);
                                        }
                                    }
                                  }
                              }
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
ATerm DefineBound_0_0 (ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm d_114 = NULL;
    ATerm f_114 (ATerm t)
    {
      ATerm e_114 = NULL;
      t = not_null(d_114);
      if(((e_114 != NULL) && (e_114 != t)))
        _fail(t);
      else
        e_114 = t;
      t = not_null(d_114);
      {
        ATerm e_50;
        e_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_114)), term_g_50);
        {
          ATerm y_5 (ATerm t)
          {
            t = term_t_43;
            return(t);
          }
          t = assert_1_0(y_5, t);
        }
        t = e_50;
      }
      return(t);
    }
    if(((d_114 != NULL) && (d_114 != t)))
      _fail(t);
    else
      d_114 = t;
    t = f_114(t);
    return(t);
  }
  t = map_1_0(x_5, t);
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm j_114 = NULL,k_114 = NULL,l_114 = NULL,m_114 = NULL,n_114 = NULL;
  ATerm c_115 (ATerm t)
  {
    ATerm o_114 = NULL,v_114 = NULL,w_114 = NULL,x_114 = NULL;
    t = not_null(l_114);
    if(((v_114 != NULL) && (v_114 != t)))
      _fail(t);
    else
      v_114 = t;
    t = not_null(m_114);
    if(((o_114 != NULL) && (o_114 != t)))
      _fail(t);
    else
      o_114 = t;
    t = not_null(n_114);
    if(((w_114 != NULL) && (w_114 != t)))
      _fail(t);
    else
      w_114 = t;
    t = not_null(j_114);
    if(((x_114 != NULL) && (x_114 != t)))
      _fail(t);
    else
      x_114 = t;
    t = not_null(k_114);
    {
      ATerm h_50;
      h_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_i_50, not_null(v_114)));
      {
        ATerm z_5 (ATerm t)
        {
          t = term_z_41;
          return(t);
        }
        t = assert_1_0(z_5, t);
        t = not_null(w_114);
        t = declared_vars_0_0(t);
        t = DefineBound_0_0(t);
        t = not_null(x_114);
        t = unbound_vars_0_0(t);
      }
      t = h_50;
    }
    return(t);
  }
  ATerm d_115 (ATerm t)
  {
    ATerm y_114 = NULL,a_115 = NULL,b_115 = NULL;
    t = not_null(l_114);
    if(((a_115 != NULL) && (a_115 != t)))
      _fail(t);
    else
      a_115 = t;
    t = not_null(m_114);
    if(((y_114 != NULL) && (y_114 != t)))
      _fail(t);
    else
      y_114 = t;
    t = not_null(n_114);
    if(((b_115 != NULL) && (b_115 != t)))
      _fail(t);
    else
      b_115 = t;
    t = not_null(k_114);
    {
      ATerm d_51;
      d_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_51, not_null(a_115)));
      {
        ATerm a_6 (ATerm t)
        {
          t = term_z_41;
          return(t);
        }
        t = assert_1_0(a_6, t);
        t = not_null(b_115);
        t = unbound_vars_0_0(t);
      }
      t = d_51;
    }
    return(t);
  }
  if(((k_114 != NULL) && (k_114 != t)))
    _fail(t);
  else
    k_114 = t;
  t = not_null(k_114);
  if(match_cons(t, sym_SDefT_4))
    {
      l_114 = ATgetArgument(t, 0);
      m_114 = ATgetArgument(t, 1);
      n_114 = ATgetArgument(t, 2);
      j_114 = ATgetArgument(t, 3);
      t = c_115(t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          l_114 = ATgetArgument(t, 0);
          m_114 = ATgetArgument(t, 1);
          n_114 = ATgetArgument(t, 2);
          t = d_115(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm DefineUnbound_0_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm f_115 = NULL;
    ATerm h_115 (ATerm t)
    {
      ATerm g_115 = NULL;
      t = not_null(f_115);
      if(((g_115 != NULL) && (g_115 != t)))
        _fail(t);
      else
        g_115 = t;
      t = not_null(f_115);
      {
        ATerm f_51;
        f_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_115)), term_u_43);
        {
          ATerm c_6 (ATerm t)
          {
            t = term_t_43;
            return(t);
          }
          t = assert_1_0(c_6, t);
        }
        t = f_51;
      }
      return(t);
    }
    if(((f_115 != NULL) && (f_115 != t)))
      _fail(t);
    else
      f_115 = t;
    t = h_115(t);
    return(t);
  }
  t = map_1_0(b_6, t);
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm d_6 (ATerm t)
  {
    t = term_z_41;
    return(t);
  }
  ATerm e_6 (ATerm t)
  {
    ATerm f_6 (ATerm t)
    {
      t = term_t_43;
      return(t);
    }
    ATerm g_6 (ATerm t)
    {
      ATerm g_51;
      g_51 = t;
      t = tvars_0_0(t);
      t = DefineUnbound_0_0(t);
      t = g_51;
      {
        ATerm k_51 = t;
        int l_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = sdef_ud_0_0(t);
            ;
            LocalPopChoice(l_51);
          }
        else
          {
            t = k_51;
            {
              ATerm m_51 = t;
              int o_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = rdef_ud_0_0(t);
                  ;
                  LocalPopChoice(o_51);
                }
              else
                {
                  t = m_51;
                  t = overlay_ud_0_0(t);
                }
            }
          }
      }
      return(t);
    }
    t = scope_2_0(f_6, g_6, t);
    return(t);
  }
  t = scope_2_0(d_6, e_6, t);
  return(t);
}
ATerm defs_use_def_0_0 (ATerm t)
{
  ATerm p_51 = t;
  int u_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(u_51);
    }
  else
    {
      t = p_51;
      {
        ATerm y_51;
        y_51 = t;
        {
          ATerm h_6 (ATerm t)
          {
            ATerm z_51 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = z_51;
              }
            return(t);
          }
          t = filter_1_0(h_6, t);
          t = Nil_0_0(t);
        }
        t = y_51;
      }
    }
  return(t);
}
ATerm Signature_1_0 (ATerm h_91 (ATerm), ATerm t)
{
  ATerm n_115 = NULL,o_115 = NULL;
  ATerm x_115 (ATerm t)
  {
    ATerm p_115 = NULL,q_115 = NULL,r_115 = NULL,t_115 = NULL;
    ATerm z_115 (ATerm t)
    {
      ATerm u_115 = NULL,v_115 = NULL;
      t = not_null(t_115);
      if(((u_115 != NULL) && (u_115 != t)))
        _fail(t);
      else
        u_115 = t;
      t = not_null(t_115);
      {
        ATerm w_115 = NULL;
        ATerm a_116 (ATerm t)
        {
          t = not_null(w_115);
          if(((v_115 != NULL) && (v_115 != t)))
            _fail(t);
          else
            v_115 = t;
          t = not_null(w_115);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(u_115)), not_null(r_115));
        if(((w_115 != NULL) && (w_115 != t)))
          _fail(t);
        else
          w_115 = t;
        t = a_116(t);
        t = not_null(v_115);
      }
      return(t);
    }
    t = not_null(n_115);
    if(((p_115 != NULL) && (p_115 != t)))
      _fail(t);
    else
      p_115 = t;
    t = not_null(o_115);
    if(((q_115 != NULL) && (q_115 != t)))
      _fail(t);
    else
      q_115 = t;
    t = not_null(n_115);
    {
      ATerm s_115 = NULL;
      ATerm y_115 (ATerm t)
      {
        t = not_null(s_115);
        if(((r_115 != NULL) && (r_115 != t)))
          _fail(t);
        else
          r_115 = t;
        t = not_null(s_115);
        return(t);
      }
      t = SSLgetAnnotations(not_null(p_115));
      if(((s_115 != NULL) && (s_115 != t)))
        _fail(t);
      else
        s_115 = t;
      t = y_115(t);
      t = not_null(q_115);
      t = h_91(t);
      if(((t_115 != NULL) && (t_115 != t)))
        _fail(t);
      else
        t_115 = t;
      t = z_115(t);
    }
    return(t);
  }
  if(((n_115 != NULL) && (n_115 != t)))
    _fail(t);
  else
    n_115 = t;
  t = not_null(n_115);
  if(match_cons(t, sym_Signature_1))
    {
      o_115 = ATgetArgument(t, 0);
      t = x_115(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spec_use_def_0_0 (ATerm t)
{
  ATerm i_6 (ATerm t)
  {
    ATerm j_6 (ATerm t)
    {
      t = Signature_1_0(_id, t);
      return(t);
    }
    ATerm k_6 (ATerm t)
    {
      ATerm l_6 (ATerm t)
      {
        t = Overlays_1_0(defs_use_def_0_0, t);
        return(t);
      }
      ATerm m_6 (ATerm t)
      {
        ATerm n_6 (ATerm t)
        {
          t = Strategies_1_0(defs_use_def_0_0, t);
          return(t);
        }
        t = Cons_2_0(n_6, Nil_0_0, t);
        return(t);
      }
      t = Cons_2_0(l_6, m_6, t);
      return(t);
    }
    t = Cons_2_0(j_6, k_6, t);
    return(t);
  }
  t = Specification_1_0(i_6, t);
  return(t);
}
ATerm MkConstType_0_0 (ATerm t)
{
  ATerm d_116 = NULL,e_116 = NULL;
  ATerm g_116 (ATerm t)
  {
    ATerm f_116 = NULL;
    t = not_null(e_116);
    if(((f_116 != NULL) && (f_116 != t)))
      _fail(t);
    else
      f_116 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(f_116), term_y_33);
    return(t);
  }
  if(((d_116 != NULL) && (d_116 != t)))
    _fail(t);
  else
    d_116 = t;
  t = not_null(d_116);
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_116 = ATgetArgument(t, 0);
      t = g_116(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0_0 (ATerm t)
{
  ATerm j_116 = NULL,k_116 = NULL;
  ATerm o_116 (ATerm t)
  {
    ATerm n_116 = NULL;
    t = not_null(k_116);
    if(((n_116 != NULL) && (n_116 != t)))
      _fail(t);
    else
      n_116 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(n_116), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_33), term_y_33));
    return(t);
  }
  if(((j_116 != NULL) && (j_116 != t)))
    _fail(t);
  else
    j_116 = t;
  t = not_null(j_116);
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_116 = ATgetArgument(t, 0);
      t = o_116(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1_0 (ATerm s_0 (ATerm), ATerm t)
{
  ATerm a_52 = t;
  int b_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(s_0, _id, t);
      {
        ATerm o_6 (ATerm t)
        {
          ATerm p_6 (ATerm t)
          {
            t = map1_1_0(s_0, t);
            return(t);
          }
          t = try_1_0(p_6, t);
          return(t);
        }
        t = Cons_2_0(_id, o_6, t);
      }
      ;
      LocalPopChoice(b_52);
    }
  else
    {
      t = a_52;
      {
        ATerm q_6 (ATerm t)
        {
          t = map1_1_0(s_0, t);
          return(t);
        }
        t = Cons_2_0(_id, q_6, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm s_117 = NULL,t_117 = NULL,u_117 = NULL,v_117 = NULL,w_117 = NULL,x_117 = NULL,y_117 = NULL;
  ATerm z_119 (ATerm t)
  {
    ATerm z_117 = NULL,a_118 = NULL;
    t = not_null(x_117);
    if(((z_117 != NULL) && (z_117 != t)))
      _fail(t);
    else
      z_117 = t;
    t = not_null(y_117);
    if(((a_118 != NULL) && (a_118 != t)))
      _fail(t);
    else
      a_118 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(z_117), not_null(a_118));
    return(t);
  }
  ATerm a_120 (ATerm t)
  {
    ATerm b_118 = NULL,d_118 = NULL;
    t = not_null(s_117);
    if(((b_118 != NULL) && (b_118 != t)))
      _fail(t);
    else
      b_118 = t;
    t = not_null(t_117);
    if(((d_118 != NULL) && (d_118 != t)))
      _fail(t);
    else
      d_118 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(b_118), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(d_118)));
    return(t);
  }
  ATerm b_120 (ATerm t)
  {
    t = term_c_52;
    return(t);
  }
  ATerm e_120 (ATerm t)
  {
    ATerm e_118 = NULL,f_118 = NULL;
    t = not_null(s_117);
    if(((e_118 != NULL) && (e_118 != t)))
      _fail(t);
    else
      e_118 = t;
    t = not_null(t_117);
    if(((f_118 != NULL) && (f_118 != t)))
      _fail(t);
    else
      f_118 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(e_118), (ATerm) ATmakeAppl(sym_Choices_1, not_null(f_118)));
    return(t);
  }
  ATerm f_120 (ATerm t)
  {
    t = term_c_52;
    return(t);
  }
  ATerm g_120 (ATerm t)
  {
    ATerm g_118 = NULL,h_118 = NULL;
    t = not_null(s_117);
    if(((g_118 != NULL) && (g_118 != t)))
      _fail(t);
    else
      g_118 = t;
    t = not_null(t_117);
    if(((h_118 != NULL) && (h_118 != t)))
      _fail(t);
    else
      h_118 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_118), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(h_118)));
    return(t);
  }
  ATerm h_120 (ATerm t)
  {
    t = term_m_22;
    return(t);
  }
  ATerm i_120 (ATerm t)
  {
    ATerm i_118 = NULL,j_118 = NULL,k_118 = NULL,l_118 = NULL,m_118 = NULL,s_118 = NULL;
    t = not_null(x_117);
    if(((i_118 != NULL) && (i_118 != t)))
      _fail(t);
    else
      i_118 = t;
    t = not_null(y_117);
    if(((j_118 != NULL) && (j_118 != t)))
      _fail(t);
    else
      j_118 = t;
    t = not_null(v_117);
    if(((k_118 != NULL) && (k_118 != t)))
      _fail(t);
    else
      k_118 = t;
    t = not_null(u_117);
    if(((l_118 != NULL) && (l_118 != t)))
      _fail(t);
    else
      l_118 = t;
    t = not_null(w_117);
    {
      ATerm t_118 = NULL;
      ATerm q_120 (ATerm t)
      {
        ATerm u_118 = NULL;
        ATerm r_120 (ATerm t)
        {
          t = not_null(u_118);
          if(((s_118 != NULL) && (s_118 != t)))
            _fail(t);
          else
            s_118 = t;
          t = not_null(u_118);
          return(t);
        }
        t = not_null(t_118);
        if(((m_118 != NULL) && (m_118 != t)))
          _fail(t);
        else
          m_118 = t;
        t = not_null(k_118);
        {
          ATerm r_6 (ATerm t)
          {
            t = try_1_0(MkConstType_0_0, t);
            return(t);
          }
          t = map1_1_0(r_6, t);
          if(((u_118 != NULL) && (u_118 != t)))
            _fail(t);
          else
            u_118 = t;
          t = r_120(t);
        }
        return(t);
      }
      t = not_null(j_118);
      t = map1_1_0(MkFunType_0_0, t);
      if(((t_118 != NULL) && (t_118 != t)))
        _fail(t);
      else
        t_118 = t;
      t = q_120(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(i_118), not_null(m_118), not_null(s_118), not_null(l_118));
    }
    return(t);
  }
  ATerm j_120 (ATerm t)
  {
    ATerm v_118 = NULL,w_118 = NULL,x_118 = NULL,y_118 = NULL,z_118 = NULL,a_119 = NULL;
    t = not_null(x_117);
    if(((v_118 != NULL) && (v_118 != t)))
      _fail(t);
    else
      v_118 = t;
    t = not_null(y_117);
    if(((w_118 != NULL) && (w_118 != t)))
      _fail(t);
    else
      w_118 = t;
    t = not_null(v_117);
    if(((x_118 != NULL) && (x_118 != t)))
      _fail(t);
    else
      x_118 = t;
    t = not_null(u_117);
    if(((y_118 != NULL) && (y_118 != t)))
      _fail(t);
    else
      y_118 = t;
    t = not_null(w_117);
    {
      ATerm c_119 = NULL;
      ATerm s_120 (ATerm t)
      {
        ATerm d_119 = NULL;
        ATerm t_120 (ATerm t)
        {
          t = not_null(d_119);
          if(((a_119 != NULL) && (a_119 != t)))
            _fail(t);
          else
            a_119 = t;
          t = not_null(d_119);
          return(t);
        }
        t = not_null(c_119);
        if(((z_118 != NULL) && (z_118 != t)))
          _fail(t);
        else
          z_118 = t;
        t = not_null(w_118);
        {
          ATerm s_6 (ATerm t)
          {
            t = try_1_0(MkFunType_0_0, t);
            return(t);
          }
          t = map_1_0(s_6, t);
          if(((d_119 != NULL) && (d_119 != t)))
            _fail(t);
          else
            d_119 = t;
          t = t_120(t);
        }
        return(t);
      }
      t = not_null(x_118);
      t = map1_1_0(MkConstType_0_0, t);
      if(((c_119 != NULL) && (c_119 != t)))
        _fail(t);
      else
        c_119 = t;
      t = s_120(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(v_118), not_null(a_119), not_null(z_118), not_null(y_118));
    }
    return(t);
  }
  ATerm k_120 (ATerm t)
  {
    ATerm e_119 = NULL,f_119 = NULL,g_119 = NULL,h_119 = NULL,i_119 = NULL,j_119 = NULL;
    t = not_null(x_117);
    if(((e_119 != NULL) && (e_119 != t)))
      _fail(t);
    else
      e_119 = t;
    t = not_null(y_117);
    if(((f_119 != NULL) && (f_119 != t)))
      _fail(t);
    else
      f_119 = t;
    t = not_null(v_117);
    if(((g_119 != NULL) && (g_119 != t)))
      _fail(t);
    else
      g_119 = t;
    t = not_null(u_117);
    if(((h_119 != NULL) && (h_119 != t)))
      _fail(t);
    else
      h_119 = t;
    t = not_null(w_117);
    {
      ATerm k_119 = NULL;
      ATerm u_120 (ATerm t)
      {
        ATerm l_119 = NULL;
        ATerm v_120 (ATerm t)
        {
          t = not_null(l_119);
          if(((j_119 != NULL) && (j_119 != t)))
            _fail(t);
          else
            j_119 = t;
          t = not_null(l_119);
          return(t);
        }
        t = not_null(k_119);
        if(((i_119 != NULL) && (i_119 != t)))
          _fail(t);
        else
          i_119 = t;
        t = not_null(g_119);
        {
          ATerm t_6 (ATerm t)
          {
            t = try_1_0(MkConstType_0_0, t);
            return(t);
          }
          t = map_1_0(t_6, t);
          if(((l_119 != NULL) && (l_119 != t)))
            _fail(t);
          else
            l_119 = t;
          t = v_120(t);
        }
        return(t);
      }
      t = not_null(f_119);
      t = map1_1_0(MkFunType_0_0, t);
      if(((k_119 != NULL) && (k_119 != t)))
        _fail(t);
      else
        k_119 = t;
      t = u_120(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(e_119), not_null(i_119), not_null(j_119), not_null(h_119));
    }
    return(t);
  }
  ATerm l_120 (ATerm t)
  {
    ATerm m_119 = NULL,n_119 = NULL,o_119 = NULL;
    t = not_null(x_117);
    if(((n_119 != NULL) && (n_119 != t)))
      _fail(t);
    else
      n_119 = t;
    t = not_null(y_117);
    if(((m_119 != NULL) && (m_119 != t)))
      _fail(t);
    else
      m_119 = t;
    t = not_null(v_117);
    if(((o_119 != NULL) && (o_119 != t)))
      _fail(t);
    else
      o_119 = t;
    t = (ATerm) ATmakeAppl(sym_App_2, not_null(m_119), (ATerm) ATmakeAppl(sym_Op_2, term_q_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_119)), not_null(n_119))));
    return(t);
  }
  ATerm m_120 (ATerm t)
  {
    ATerm p_119 = NULL,r_119 = NULL,s_119 = NULL;
    t = not_null(x_117);
    if(((r_119 != NULL) && (r_119 != t)))
      _fail(t);
    else
      r_119 = t;
    t = not_null(y_117);
    if(((p_119 != NULL) && (p_119 != t)))
      _fail(t);
    else
      p_119 = t;
    t = not_null(v_117);
    if(((s_119 != NULL) && (s_119 != t)))
      _fail(t);
    else
      s_119 = t;
    t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(s_119))), not_null(r_119)), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_119))));
    return(t);
  }
  ATerm n_120 (ATerm t)
  {
    ATerm t_119 = NULL,u_119 = NULL;
    t = not_null(x_117);
    if(((t_119 != NULL) && (t_119 != t)))
      _fail(t);
    else
      t_119 = t;
    t = not_null(y_117);
    if(((u_119 != NULL) && (u_119 != t)))
      _fail(t);
    else
      u_119 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_119), (ATerm) ATmakeAppl(sym_Match_1, not_null(u_119)));
    return(t);
  }
  ATerm o_120 (ATerm t)
  {
    ATerm v_119 = NULL,w_119 = NULL;
    t = not_null(x_117);
    if(((v_119 != NULL) && (v_119 != t)))
      _fail(t);
    else
      v_119 = t;
    t = not_null(y_117);
    if(((w_119 != NULL) && (w_119 != t)))
      _fail(t);
    else
      w_119 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_119)), not_null(w_119));
    return(t);
  }
  ATerm p_120 (ATerm t)
  {
    ATerm x_119 = NULL,y_119 = NULL;
    t = not_null(x_117);
    if(((y_119 != NULL) && (y_119 != t)))
      _fail(t);
    else
      y_119 = t;
    t = not_null(y_117);
    if(((x_119 != NULL) && (x_119 != t)))
      _fail(t);
    else
      x_119 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_119)), not_null(y_119));
    return(t);
  }
  if(((w_117 != NULL) && (w_117 != t)))
    _fail(t);
  else
    w_117 = t;
  t = not_null(w_117);
  if(match_cons(t, sym_Lets_2))
    {
      x_117 = ATgetArgument(t, 0);
      y_117 = ATgetArgument(t, 1);
      t = z_119(t);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          x_117 = ATgetArgument(t, 0);
          t = not_null(x_117);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_117 = ATgetFirst((ATermList) t);
              t_117 = (ATerm) ATgetNext((ATermList) t);
              t = a_120(t);
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = b_120(t);
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              x_117 = ATgetArgument(t, 0);
              t = not_null(x_117);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_117 = ATgetFirst((ATermList) t);
                  t_117 = (ATerm) ATgetNext((ATermList) t);
                  t = e_120(t);
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = f_120(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  x_117 = ATgetArgument(t, 0);
                  t = not_null(x_117);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      s_117 = ATgetFirst((ATermList) t);
                      t_117 = (ATerm) ATgetNext((ATermList) t);
                      t = g_120(t);
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = h_120(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      x_117 = ATgetArgument(t, 0);
                      y_117 = ATgetArgument(t, 1);
                      v_117 = ATgetArgument(t, 2);
                      u_117 = ATgetArgument(t, 3);
                      t = i_120(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          x_117 = ATgetArgument(t, 0);
                          y_117 = ATgetArgument(t, 1);
                          v_117 = ATgetArgument(t, 2);
                          u_117 = ATgetArgument(t, 3);
                          {
                            ATerm d_52 = t;
                            int v_52 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = j_120(t);
                                ;
                                LocalPopChoice(v_52);
                              }
                            else
                              {
                                t = d_52;
                                t = k_120(t);
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              x_117 = ATgetArgument(t, 0);
                              y_117 = ATgetArgument(t, 1);
                              v_117 = ATgetArgument(t, 2);
                              t = l_120(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  x_117 = ATgetArgument(t, 0);
                                  y_117 = ATgetArgument(t, 1);
                                  v_117 = ATgetArgument(t, 2);
                                  t = m_120(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      x_117 = ATgetArgument(t, 0);
                                      y_117 = ATgetArgument(t, 1);
                                      t = n_120(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          x_117 = ATgetArgument(t, 0);
                                          y_117 = ATgetArgument(t, 1);
                                          t = o_120(t);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              x_117 = ATgetArgument(t, 0);
                                              y_117 = ATgetArgument(t, 1);
                                              t = p_120(t);
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
ATerm UnZip2_0_0 (ATerm t)
{
  ATerm a_121 = NULL,b_121 = NULL,c_121 = NULL,d_121 = NULL,e_121 = NULL,f_121 = NULL,g_121 = NULL;
  ATerm l_121 (ATerm t)
  {
    ATerm h_121 = NULL,i_121 = NULL,j_121 = NULL,k_121 = NULL;
    t = not_null(c_121);
    if(((h_121 != NULL) && (h_121 != t)))
      _fail(t);
    else
      h_121 = t;
    t = not_null(d_121);
    if(((j_121 != NULL) && (j_121 != t)))
      _fail(t);
    else
      j_121 = t;
    t = not_null(f_121);
    if(((i_121 != NULL) && (i_121 != t)))
      _fail(t);
    else
      i_121 = t;
    t = not_null(g_121);
    if(((k_121 != NULL) && (k_121 != t)))
      _fail(t);
    else
      k_121 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_121)), not_null(h_121)), (ATerm) ATinsert(CheckATermList(not_null(k_121)), not_null(j_121)));
    return(t);
  }
  if(((a_121 != NULL) && (a_121 != t)))
    _fail(t);
  else
    a_121 = t;
  t = not_null(a_121);
  if(match_cons(t, sym__2))
    {
      b_121 = ATgetArgument(t, 0);
      e_121 = ATgetArgument(t, 1);
      t = not_null(b_121);
      if(match_cons(t, sym__2))
        {
          c_121 = ATgetArgument(t, 0);
          d_121 = ATgetArgument(t, 1);
          t = not_null(e_121);
          if(match_cons(t, sym__2))
            {
              f_121 = ATgetArgument(t, 0);
              g_121 = ATgetArgument(t, 1);
              t = l_121(t);
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
ATerm UnZip3_0_0 (ATerm t)
{
  ATerm p_121 = NULL,q_121 = NULL,r_121 = NULL;
  ATerm u_121 (ATerm t)
  {
    ATerm s_121 = NULL,t_121 = NULL;
    t = not_null(q_121);
    if(((s_121 != NULL) && (s_121 != t)))
      _fail(t);
    else
      s_121 = t;
    t = not_null(r_121);
    if(((t_121 != NULL) && (t_121 != t)))
      _fail(t);
    else
      t_121 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_121), not_null(t_121));
    return(t);
  }
  if(((p_121 != NULL) && (p_121 != t)))
    _fail(t);
  else
    p_121 = t;
  t = not_null(p_121);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_121 = ATgetFirst((ATermList) t);
      r_121 = (ATerm) ATgetNext((ATermList) t);
      t = u_121(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0_0 (ATerm t)
{
  ATerm x_121 = NULL;
  ATerm y_121 (ATerm t)
  {
    t = term_w_52;
    return(t);
  }
  if(((x_121 != NULL) && (x_121 != t)))
    _fail(t);
  else
    x_121 = t;
  t = not_null(x_121);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_121(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1_0 (ATerm z_114 (ATerm), ATerm t)
{
  t = genzip_4_0(UnZip1_0_0, UnZip3_0_0, UnZip2_0_0, z_114, t);
  return(t);
}
ATerm unzip_0_0 (ATerm t)
{
  t = unzip_1_0(_id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm ContextVar_0_0 (ATerm t)
{
  ATerm e_122 = NULL,f_122 = NULL;
  ATerm p_122 (ATerm t)
  {
    ATerm l_122 = NULL,m_122 = NULL;
    t = not_null(e_122);
    if(((m_122 != NULL) && (m_122 != t)))
      _fail(t);
    else
      m_122 = t;
    t = not_null(f_122);
    if(((l_122 != NULL) && (l_122 != t)))
      _fail(t);
    else
      l_122 = t;
    t = not_null(e_122);
    {
      ATerm n_122 = NULL,o_122 = NULL;
      t = not_null(m_122);
      {
        ATerm u_6 (ATerm t)
        {
          t = term_d_53;
          return(t);
        }
        t = rewrite_1_0(u_6, t);
        if(((n_122 != NULL) && (n_122 != t)))
          _fail(t);
        else
          n_122 = t;
        t = not_null(n_122);
        if(match_cons(t, sym_Defined_1))
          {
            o_122 = ATgetArgument(t, 0);
            t = not_null(o_122);
            if(match_string(t, "l_0"))
              {
                t = not_null(n_122);
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
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_122));
    }
    return(t);
  }
  if(((e_122 != NULL) && (e_122 != t)))
    _fail(t);
  else
    e_122 = t;
  t = not_null(e_122);
  if(match_cons(t, sym_Var_1))
    {
      f_122 = ATgetArgument(t, 0);
      t = p_122(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm error_0_0 (ATerm t)
{
  ATerm e_53;
  e_53 = t;
  {
    ATerm r_122 = NULL;
    ATerm s_122 = NULL;
    ATerm t_122 (ATerm t)
    {
      t = not_null(s_122);
      if(((r_122 != NULL) && (r_122 != t)))
        _fail(t);
      else
        r_122 = t;
      t = not_null(s_122);
      return(t);
    }
    if(((s_122 != NULL) && (s_122 != t)))
      _fail(t);
    else
      s_122 = t;
    t = t_122(t);
    t = (ATerm) ATmakeAppl(sym__2, term_k_36, not_null(r_122));
    t = printnl_0_0(t);
  }
  t = e_53;
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm f_53;
  f_53 = t;
  t = error_0_0(t);
  t = term_w_36;
  t = exit_0_0(t);
  t = f_53;
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    ATerm l_123 = NULL,m_123 = NULL,n_123 = NULL,o_123 = NULL;
    ATerm b_124 (ATerm t)
    {
      ATerm p_123 = NULL;
      t = not_null(m_123);
      if(((p_123 != NULL) && (p_123 != t)))
        _fail(t);
      else
        p_123 = t;
      t = not_null(l_123);
      {
        ATerm g_53 = t;
        if((PushChoice() == 0))
          {
            t = ContextVar_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_53;
          }
        t = term_i_53;
      }
      return(t);
    }
    ATerm c_124 (ATerm t)
    {
      t = term_i_53;
      return(t);
    }
    ATerm d_124 (ATerm t)
    {
      ATerm q_123 = NULL,r_123 = NULL;
      t = not_null(m_123);
      if(((q_123 != NULL) && (q_123 != t)))
        _fail(t);
      else
        q_123 = t;
      t = not_null(l_123);
      {
        ATerm u_123 = NULL;
        ATerm h_124 (ATerm t)
        {
          t = not_null(u_123);
          if(((r_123 != NULL) && (r_123 != t)))
            _fail(t);
          else
            r_123 = t;
          t = not_null(u_123);
          return(t);
        }
        t = not_null(q_123);
        t = tvars_0_0(t);
        {
          ATerm w_6 (ATerm t)
          {
            ATerm s_123 = NULL;
            ATerm t_123 = NULL;
            ATerm g_124 (ATerm t)
            {
              t = not_null(t_123);
              if(((s_123 != NULL) && (s_123 != t)))
                _fail(t);
              else
                s_123 = t;
              t = not_null(t_123);
              return(t);
            }
            if(((t_123 != NULL) && (t_123 != t)))
              _fail(t);
            else
              t_123 = t;
            t = g_124(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_123));
            return(t);
          }
          t = map_1_0(w_6, t);
          if(((u_123 != NULL) && (u_123 != t)))
            _fail(t);
          else
            u_123 = t;
          t = h_124(t);
        }
        t = (ATerm) ATmakeAppl(sym_Op_2, term_j_53, not_null(r_123));
      }
      return(t);
    }
    ATerm e_124 (ATerm t)
    {
      ATerm v_123 = NULL,w_123 = NULL,x_123 = NULL;
      t = not_null(m_123);
      if(((v_123 != NULL) && (v_123 != t)))
        _fail(t);
      else
        v_123 = t;
      t = not_null(n_123);
      if(((w_123 != NULL) && (w_123 != t)))
        _fail(t);
      else
        w_123 = t;
      t = not_null(l_123);
      {
        ATerm a_124 = NULL;
        ATerm j_124 (ATerm t)
        {
          t = not_null(a_124);
          if(((x_123 != NULL) && (x_123 != t)))
            _fail(t);
          else
            x_123 = t;
          t = not_null(a_124);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_123), not_null(w_123));
        t = tvars_0_0(t);
        {
          ATerm x_6 (ATerm t)
          {
            ATerm y_123 = NULL;
            ATerm z_123 = NULL;
            ATerm i_124 (ATerm t)
            {
              t = not_null(z_123);
              if(((y_123 != NULL) && (y_123 != t)))
                _fail(t);
              else
                y_123 = t;
              t = not_null(z_123);
              return(t);
            }
            if(((z_123 != NULL) && (z_123 != t)))
              _fail(t);
            else
              z_123 = t;
            t = i_124(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_123));
            return(t);
          }
          t = map_1_0(x_6, t);
          if(((a_124 != NULL) && (a_124 != t)))
            _fail(t);
          else
            a_124 = t;
          t = j_124(t);
        }
        t = (ATerm) ATmakeAppl(sym_Op_2, term_j_53, not_null(x_123));
      }
      return(t);
    }
    ATerm f_124 (ATerm t)
    {
      t = (ATerm) ATinsert(ATempty, term_k_53);
      t = fatal_error_0_0(t);
      return(t);
    }
    if(((l_123 != NULL) && (l_123 != t)))
      _fail(t);
    else
      l_123 = t;
    t = not_null(l_123);
    if(match_cons(t, sym_Var_1))
      {
        m_123 = ATgetArgument(t, 0);
        t = b_124(t);
      }
    else
      {
        if(match_cons(t, sym_Wld_0))
          {
            t = c_124(t);
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                m_123 = ATgetArgument(t, 0);
                t = d_124(t);
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    m_123 = ATgetArgument(t, 0);
                    n_123 = ATgetArgument(t, 1);
                    t = e_124(t);
                  }
                else
                  {
                    if(match_cons(t, sym_Con_3))
                      {
                        m_123 = ATgetArgument(t, 0);
                        n_123 = ATgetArgument(t, 1);
                        o_123 = ATgetArgument(t, 2);
                        t = f_124(t);
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
  t = alltd_1_0(v_6, t);
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm k_125 = NULL,l_125 = NULL,m_125 = NULL,n_125 = NULL,o_125 = NULL,p_125 = NULL,q_125 = NULL,r_125 = NULL,s_125 = NULL,t_125 = NULL;
  ATerm m_127 (ATerm t)
  {
    ATerm u_125 = NULL,v_125 = NULL,w_125 = NULL,x_125 = NULL,y_125 = NULL,z_125 = NULL,a_126 = NULL,e_126 = NULL,j_126 = NULL;
    t = not_null(n_125);
    if(((u_125 != NULL) && (u_125 != t)))
      _fail(t);
    else
      u_125 = t;
    t = not_null(o_125);
    if(((v_125 != NULL) && (v_125 != t)))
      _fail(t);
    else
      v_125 = t;
    t = not_null(p_125);
    if(((w_125 != NULL) && (w_125 != t)))
      _fail(t);
    else
      w_125 = t;
    t = not_null(r_125);
    if(((x_125 != NULL) && (x_125 != t)))
      _fail(t);
    else
      x_125 = t;
    t = not_null(t_125);
    if(((y_125 != NULL) && (y_125 != t)))
      _fail(t);
    else
      y_125 = t;
    t = not_null(m_125);
    {
      ATerm l_53;
      l_53 = t;
      {
        ATerm f_126 = NULL;
        ATerm o_127 (ATerm t)
        {
          ATerm g_126 = NULL;
          ATerm p_127 (ATerm t)
          {
            ATerm i_126 = NULL;
            ATerm r_127 (ATerm t)
            {
              t = not_null(i_126);
              if(((e_126 != NULL) && (e_126 != t)))
                _fail(t);
              else
                e_126 = t;
              t = not_null(i_126);
              return(t);
            }
            t = not_null(g_126);
            if(((z_125 != NULL) && (z_125 != t)))
              _fail(t);
            else
              z_125 = t;
            t = not_null(g_126);
            {
              ATerm y_6 (ATerm t)
              {
                ATerm h_126 = NULL;
                ATerm q_127 (ATerm t)
                {
                  t = not_null(h_126);
                  if(((x_125 != NULL) && (x_125 != t)))
                    _fail(t);
                  else
                    x_125 = t;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_126));
                  return(t);
                }
                if(((h_126 != NULL) && (h_126 != t)))
                  _fail(t);
                else
                  h_126 = t;
                t = q_127(t);
                return(t);
              }
              t = try_1_0(y_6, t);
              if(((i_126 != NULL) && (i_126 != t)))
                _fail(t);
              else
                i_126 = t;
              t = r_127(t);
            }
            return(t);
          }
          t = not_null(f_126);
          if(((a_126 != NULL) && (a_126 != t)))
            _fail(t);
          else
            a_126 = t;
          t = not_null(x_125);
          t = dummify_0_0(t);
          if(((g_126 != NULL) && (g_126 != t)))
            _fail(t);
          else
            g_126 = t;
          t = p_127(t);
          return(t);
        }
        t = new_0_0(t);
        if(((f_126 != NULL) && (f_126 != t)))
          _fail(t);
        else
          f_126 = t;
        t = o_127(t);
      }
      t = l_53;
      {
        ATerm k_126 = NULL;
        ATerm s_127 (ATerm t)
        {
          t = not_null(k_126);
          if(((j_126 != NULL) && (j_126 != t)))
            _fail(t);
          else
            j_126 = t;
          t = not_null(k_126);
          return(t);
        }
        t = not_null(u_125);
        t = q_0(t);
        if(((k_126 != NULL) && (k_126 != t)))
          _fail(t);
        else
          k_126 = t;
        t = s_127(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(j_126), (ATerm) ATmakeAppl(sym_Op_2, term_m_53, (ATerm) ATinsert(ATinsert(ATempty, term_o_53), not_null(z_125))))), (ATerm) ATmakeAppl(sym_RDefT_4, not_null(u_125), not_null(v_125), not_null(w_125), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(a_126)), not_null(x_125)), term_o_53, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_s_53, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(u_125))))), not_null(e_126)), term_o_53), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_125), term_c_52)))));
      }
    }
    return(t);
  }
  ATerm n_127 (ATerm t)
  {
    ATerm l_126 = NULL,m_126 = NULL,n_126 = NULL,o_126 = NULL,p_126 = NULL,q_126 = NULL,r_126 = NULL,s_126 = NULL,t_126 = NULL,u_126 = NULL,v_126 = NULL,w_126 = NULL,x_126 = NULL,k_127 = NULL;
    t = not_null(n_125);
    if(((l_126 != NULL) && (l_126 != t)))
      _fail(t);
    else
      l_126 = t;
    t = not_null(o_125);
    if(((m_126 != NULL) && (m_126 != t)))
      _fail(t);
    else
      m_126 = t;
    t = not_null(p_125);
    if(((n_126 != NULL) && (n_126 != t)))
      _fail(t);
    else
      n_126 = t;
    t = not_null(r_125);
    if(((o_126 != NULL) && (o_126 != t)))
      _fail(t);
    else
      o_126 = t;
    t = not_null(s_125);
    if(((p_126 != NULL) && (p_126 != t)))
      _fail(t);
    else
      p_126 = t;
    t = not_null(t_125);
    if(((q_126 != NULL) && (q_126 != t)))
      _fail(t);
    else
      q_126 = t;
    t = not_null(m_125);
    {
      ATerm l_54;
      l_54 = t;
      {
        ATerm y_126 = NULL;
        ATerm t_127 (ATerm t)
        {
          ATerm z_126 = NULL;
          ATerm u_127 (ATerm t)
          {
            ATerm b_127 = NULL;
            ATerm w_127 (ATerm t)
            {
              ATerm e_127 = NULL;
              ATerm y_127 (ATerm t)
              {
                ATerm h_127 = NULL;
                ATerm b_128 (ATerm t)
                {
                  ATerm i_127 = NULL;
                  ATerm c_128 (ATerm t)
                  {
                    ATerm j_127 = NULL;
                    ATerm d_128 (ATerm t)
                    {
                      t = not_null(j_127);
                      if(((x_126 != NULL) && (x_126 != t)))
                        _fail(t);
                      else
                        x_126 = t;
                      t = not_null(j_127);
                      return(t);
                    }
                    t = not_null(i_127);
                    if(((w_126 != NULL) && (w_126 != t)))
                      _fail(t);
                    else
                      w_126 = t;
                    t = not_null(i_127);
                    t = new_0_0(t);
                    if(((j_127 != NULL) && (j_127 != t)))
                      _fail(t);
                    else
                      j_127 = t;
                    t = d_128(t);
                    return(t);
                  }
                  t = not_null(h_127);
                  if(((u_126 != NULL) && (u_126 != t)))
                    _fail(t);
                  else
                    u_126 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_126), not_null(v_126));
                  t = diff_0_0(t);
                  if(((i_127 != NULL) && (i_127 != t)))
                    _fail(t);
                  else
                    i_127 = t;
                  t = c_128(t);
                  return(t);
                }
                t = not_null(e_127);
                if(((v_126 != NULL) && (v_126 != t)))
                  _fail(t);
                else
                  v_126 = t;
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_126), not_null(q_126));
                t = tvars_0_0(t);
                {
                  ATerm z_6 (ATerm t)
                  {
                    ATerm f_127 = NULL;
                    ATerm g_127 = NULL;
                    ATerm z_127 (ATerm t)
                    {
                      t = not_null(g_127);
                      if(((f_127 != NULL) && (f_127 != t)))
                        _fail(t);
                      else
                        f_127 = t;
                      t = not_null(g_127);
                      return(t);
                    }
                    if(((g_127 != NULL) && (g_127 != t)))
                      _fail(t);
                    else
                      g_127 = t;
                    t = z_127(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_127));
                    t = ContextVar_0_0(t);
                    return(t);
                  }
                  t = filter_1_0(z_6, t);
                  if(((h_127 != NULL) && (h_127 != t)))
                    _fail(t);
                  else
                    h_127 = t;
                  t = b_128(t);
                }
                return(t);
              }
              t = not_null(b_127);
              if(((s_126 != NULL) && (s_126 != t)))
                _fail(t);
              else
                s_126 = t;
              t = not_null(t_126);
              t = tvars_0_0(t);
              {
                ATerm a_7 (ATerm t)
                {
                  ATerm c_127 = NULL;
                  ATerm d_127 = NULL;
                  ATerm x_127 (ATerm t)
                  {
                    t = not_null(d_127);
                    if(((c_127 != NULL) && (c_127 != t)))
                      _fail(t);
                    else
                      c_127 = t;
                    t = not_null(d_127);
                    return(t);
                  }
                  if(((d_127 != NULL) && (d_127 != t)))
                    _fail(t);
                  else
                    d_127 = t;
                  t = x_127(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_127));
                  return(t);
                }
                t = map_1_0(a_7, t);
                if(((e_127 != NULL) && (e_127 != t)))
                  _fail(t);
                else
                  e_127 = t;
                t = y_127(t);
              }
              return(t);
            }
            t = not_null(z_126);
            if(((t_126 != NULL) && (t_126 != t)))
              _fail(t);
            else
              t_126 = t;
            t = not_null(z_126);
            {
              ATerm b_7 (ATerm t)
              {
                ATerm a_127 = NULL;
                ATerm v_127 (ATerm t)
                {
                  t = not_null(a_127);
                  if(((o_126 != NULL) && (o_126 != t)))
                    _fail(t);
                  else
                    o_126 = t;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_126));
                  return(t);
                }
                if(((a_127 != NULL) && (a_127 != t)))
                  _fail(t);
                else
                  a_127 = t;
                t = v_127(t);
                return(t);
              }
              t = try_1_0(b_7, t);
              if(((b_127 != NULL) && (b_127 != t)))
                _fail(t);
              else
                b_127 = t;
              t = w_127(t);
            }
            return(t);
          }
          t = not_null(y_126);
          if(((r_126 != NULL) && (r_126 != t)))
            _fail(t);
          else
            r_126 = t;
          t = not_null(o_126);
          t = dummify_0_0(t);
          if(((z_126 != NULL) && (z_126 != t)))
            _fail(t);
          else
            z_126 = t;
          t = u_127(t);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_126), term_o_53);
        {
          ATerm m_54 = t;
          if((PushChoice() == 0))
            {
              t = eq_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_54;
            }
          t = new_0_0(t);
          if(((y_126 != NULL) && (y_126 != t)))
            _fail(t);
          else
            y_126 = t;
          t = t_127(t);
        }
      }
      t = l_54;
      {
        ATerm l_127 = NULL;
        ATerm f_128 (ATerm t)
        {
          t = not_null(l_127);
          if(((k_127 != NULL) && (k_127 != t)))
            _fail(t);
          else
            k_127 = t;
          t = not_null(l_127);
          return(t);
        }
        t = not_null(l_126);
        t = q_0(t);
        if(((l_127 != NULL) && (l_127 != t)))
          _fail(t);
        else
          l_127 = t;
        t = f_128(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(k_127), (ATerm) ATmakeAppl(sym_Op_2, term_m_53, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_r_54, (ATerm) ATinsert(CheckATermList(not_null(w_126)), (ATerm) ATmakeAppl(sym_Str_1, not_null(x_126))))), not_null(t_126))))), (ATerm) ATmakeAppl(sym_RDefT_4, not_null(l_126), not_null(m_126), not_null(n_126), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_126)), not_null(o_126)), not_null(p_126), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_s_53, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(l_126))))), not_null(s_126)), (ATerm) ATmakeAppl(sym_Op_2, term_r_54, (ATerm) ATinsert(CheckATermList(not_null(w_126)), (ATerm) ATmakeAppl(sym_Str_1, not_null(x_126))))), not_null(q_126)))));
      }
    }
    return(t);
  }
  if(((m_125 != NULL) && (m_125 != t)))
    _fail(t);
  else
    m_125 = t;
  t = not_null(m_125);
  if(match_cons(t, sym_RDefT_4))
    {
      n_125 = ATgetArgument(t, 0);
      o_125 = ATgetArgument(t, 1);
      p_125 = ATgetArgument(t, 2);
      q_125 = ATgetArgument(t, 3);
      t = not_null(q_125);
      if(match_cons(t, sym_Rule_3))
        {
          r_125 = ATgetArgument(t, 0);
          s_125 = ATgetArgument(t, 1);
          t_125 = ATgetArgument(t, 2);
          t = not_null(s_125);
          if(match_cons(t, sym_Op_2))
            {
              k_125 = ATgetArgument(t, 0);
              l_125 = ATgetArgument(t, 1);
              t = not_null(l_125);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = not_null(k_125);
                  if(match_string(t, "Undefined"))
                    {
                      ATerm s_54 = t;
                      int t_54 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = m_127(t);
                          ;
                          LocalPopChoice(t_54);
                        }
                      else
                        {
                          t = s_54;
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
                  t = not_null(k_125);
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
ATerm split_dynamic_rules_0_0 (ATerm t)
{
  ATerm u_128 = NULL,v_128 = NULL;
  ATerm h_129 (ATerm t)
  {
    ATerm w_128 = NULL;
    t = not_null(v_128);
    if(((w_128 != NULL) && (w_128 != t)))
      _fail(t);
    else
      w_128 = t;
    t = not_null(w_128);
    {
      ATerm c_7 (ATerm t)
      {
        ATerm d_7 (ATerm t)
        {
          ATerm x_128 = NULL;
          ATerm z_128 = NULL;
          ATerm j_129 (ATerm t)
          {
            t = not_null(z_128);
            if(((x_128 != NULL) && (x_128 != t)))
              _fail(t);
            else
              x_128 = t;
            t = not_null(z_128);
            return(t);
          }
          if(((z_128 != NULL) && (z_128 != t)))
            _fail(t);
          else
            z_128 = t;
          t = j_129(t);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_v_54, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(x_128)))));
          return(t);
        }
        t = SplitDynamicRule_1_0(d_7, t);
        return(t);
      }
      t = map_1_0(c_7, t);
      t = unzip_0_0(t);
    }
    return(t);
  }
  ATerm i_129 (ATerm t)
  {
    ATerm e_129 = NULL;
    t = not_null(v_128);
    if(((e_129 != NULL) && (e_129 != t)))
      _fail(t);
    else
      e_129 = t;
    t = not_null(e_129);
    {
      ATerm e_7 (ATerm t)
      {
        ATerm f_7 (ATerm t)
        {
          ATerm f_129 = NULL;
          ATerm g_129 = NULL;
          ATerm k_129 (ATerm t)
          {
            t = not_null(g_129);
            if(((f_129 != NULL) && (f_129 != t)))
              _fail(t);
            else
              f_129 = t;
            t = not_null(g_129);
            return(t);
          }
          if(((g_129 != NULL) && (g_129 != t)))
            _fail(t);
          else
            g_129 = t;
          t = k_129(t);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_x_54, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(f_129)))));
          return(t);
        }
        t = SplitDynamicRule_1_0(f_7, t);
        return(t);
      }
      t = map_1_0(e_7, t);
      t = unzip_0_0(t);
    }
    return(t);
  }
  if(((u_128 != NULL) && (u_128 != t)))
    _fail(t);
  else
    u_128 = t;
  t = not_null(u_128);
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      v_128 = ATgetArgument(t, 0);
      t = h_129(t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          v_128 = ATgetArgument(t, 0);
          t = i_129(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm split_under_scope_1_0 (ATerm x_133 (ATerm), ATerm t)
{
  ATerm o_129 = NULL,p_129 = NULL,q_129 = NULL;
  ATerm v_129 (ATerm t)
  {
    ATerm r_129 = NULL,s_129 = NULL,t_129 = NULL;
    t = not_null(p_129);
    if(((r_129 != NULL) && (r_129 != t)))
      _fail(t);
    else
      r_129 = t;
    t = not_null(q_129);
    if(((s_129 != NULL) && (s_129 != t)))
      _fail(t);
    else
      s_129 = t;
    t = not_null(o_129);
    {
      ATerm g_7 (ATerm t)
      {
        t = term_d_53;
        return(t);
      }
      ATerm h_7 (ATerm t)
      {
        ATerm u_129 = NULL;
        ATerm w_129 (ATerm t)
        {
          t = not_null(u_129);
          if(((t_129 != NULL) && (t_129 != t)))
            _fail(t);
          else
            t_129 = t;
          t = not_null(u_129);
          return(t);
        }
        t = not_null(r_129);
        t = DeclareContextVars_0_0(t);
        t = not_null(s_129);
        t = x_133(t);
        if(((u_129 != NULL) && (u_129 != t)))
          _fail(t);
        else
          u_129 = t;
        t = w_129(t);
        return(t);
      }
      t = scope_2_0(g_7, h_7, t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(r_129), not_null(t_129));
    }
    return(t);
  }
  if(((o_129 != NULL) && (o_129 != t)))
    _fail(t);
  else
    o_129 = t;
  t = not_null(o_129);
  if(match_cons(t, sym_Scope_2))
    {
      p_129 = ATgetArgument(t, 0);
      q_129 = ATgetArgument(t, 1);
      t = v_129(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm z_107 (ATerm), ATerm t)
{
  ATerm x_129 (ATerm t)
  {
    ATerm y_54 = t;
    int z_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_107(t);
        ;
        LocalPopChoice(z_54);
      }
    else
      {
        t = y_54;
        t = SRTS_one(x_129, t);
      }
    return(t);
  }
  t = x_129(t);
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm v_133 (ATerm), ATerm t)
{
  ATerm z_129 (ATerm t)
  {
    ATerm i_7 (ATerm t)
    {
      ATerm a_55 = t;
      int b_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_133(t);
          ;
          LocalPopChoice(b_55);
        }
      else
        {
          t = a_55;
          t = split_under_scope_1_0(z_129, t);
        }
      return(t);
    }
    t = oncetd_1_0(i_7, t);
    return(t);
  }
  t = z_129(t);
  return(t);
}
ATerm DeclareContextVars_0_0 (ATerm t)
{
  ATerm j_7 (ATerm t)
  {
    ATerm b_130 = NULL;
    ATerm d_130 (ATerm t)
    {
      ATerm c_130 = NULL;
      t = not_null(b_130);
      if(((c_130 != NULL) && (c_130 != t)))
        _fail(t);
      else
        c_130 = t;
      t = not_null(b_130);
      {
        ATerm c_55;
        c_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_130)), term_e_55);
        {
          ATerm k_7 (ATerm t)
          {
            t = term_d_53;
            return(t);
          }
          t = assert_1_0(k_7, t);
        }
        t = c_55;
      }
      return(t);
    }
    if(((b_130 != NULL) && (b_130 != t)))
      _fail(t);
    else
      b_130 = t;
    t = d_130(t);
    return(t);
  }
  t = map_1_0(j_7, t);
  return(t);
}
ATerm lift_dynamic_rule_0_0 (ATerm t)
{
  ATerm j_130 = NULL,k_130 = NULL,l_130 = NULL;
  ATerm v_130 (ATerm t)
  {
    ATerm m_130 = NULL,n_130 = NULL,o_130 = NULL,p_130 = NULL,q_130 = NULL;
    t = not_null(k_130);
    if(((m_130 != NULL) && (m_130 != t)))
      _fail(t);
    else
      m_130 = t;
    t = not_null(l_130);
    if(((n_130 != NULL) && (n_130 != t)))
      _fail(t);
    else
      n_130 = t;
    t = not_null(j_130);
    {
      ATerm l_7 (ATerm t)
      {
        t = term_d_53;
        return(t);
      }
      ATerm m_7 (ATerm t)
      {
        ATerm u_130 = NULL;
        ATerm x_130 (ATerm t)
        {
          t = not_null(u_130);
          if(((q_130 != NULL) && (q_130 != t)))
            _fail(t);
          else
            q_130 = t;
          t = not_null(u_130);
          return(t);
        }
        t = not_null(m_130);
        t = tvars_0_0(t);
        t = DeclareContextVars_0_0(t);
        t = not_null(m_130);
        {
          ATerm n_7 (ATerm t)
          {
            ATerm r_130 = NULL,s_130 = NULL,t_130 = NULL;
            ATerm w_130 (ATerm t)
            {
              t = not_null(s_130);
              if(((p_130 != NULL) && (p_130 != t)))
                _fail(t);
              else
                p_130 = t;
              t = not_null(t_130);
              if(((o_130 != NULL) && (o_130 != t)))
                _fail(t);
              else
                o_130 = t;
              t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(p_130));
              return(t);
            }
            t = split_dynamic_rules_0_0(t);
            if(((r_130 != NULL) && (r_130 != t)))
              _fail(t);
            else
              r_130 = t;
            t = not_null(r_130);
            if(match_cons(t, sym__2))
              {
                s_130 = ATgetArgument(t, 0);
                t_130 = ATgetArgument(t, 1);
                t = w_130(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = split_dynamic_rule_1_0(n_7, t);
          if(((u_130 != NULL) && (u_130 != t)))
            _fail(t);
          else
            u_130 = t;
          t = x_130(t);
        }
        return(t);
      }
      t = scope_2_0(l_7, m_7, t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_130)), not_null(q_130)), not_null(n_130));
      t = conc_0_0(t);
    }
    return(t);
  }
  if(((j_130 != NULL) && (j_130 != t)))
    _fail(t);
  else
    j_130 = t;
  t = not_null(j_130);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_130 = ATgetFirst((ATermList) t);
      l_130 = (ATerm) ATgetNext((ATermList) t);
      t = v_130(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm listtd_1_0 (ATerm v_113 (ATerm), ATerm t)
{
  ATerm e_131 (ATerm t)
  {
    t = v_113(t);
    {
      ATerm f_55 = t;
      int g_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          ;
          LocalPopChoice(g_55);
        }
      else
        {
          t = f_55;
          t = Cons_2_0(_id, e_131, t);
        }
    }
    return(t);
  }
  t = e_131(t);
  return(t);
}
ATerm lift_dynamic_rules_0_0 (ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    t = repeat_1_0(lift_dynamic_rule_0_0, t);
    return(t);
  }
  t = listtd_1_0(o_7, t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm e_132 = NULL,f_132 = NULL,g_132 = NULL,j_132 = NULL,k_132 = NULL;
  ATerm q_132 (ATerm t)
  {
    ATerm l_132 = NULL,n_132 = NULL,o_132 = NULL;
    t = not_null(e_132);
    if(((l_132 != NULL) && (l_132 != t)))
      _fail(t);
    else
      l_132 = t;
    t = not_null(f_132);
    if(((n_132 != NULL) && (n_132 != t)))
      _fail(t);
    else
      n_132 = t;
    t = not_null(k_132);
    if(((o_132 != NULL) && (o_132 != t)))
      _fail(t);
    else
      o_132 = t;
    t = (ATerm) ATmakeAppl(sym_Call_2, term_i_55, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(n_132), not_null(o_132))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(l_132)))));
    return(t);
  }
  ATerm r_132 (ATerm t)
  {
    ATerm p_132 = NULL;
    t = not_null(k_132);
    if(((p_132 != NULL) && (p_132 != t)))
      _fail(t);
    else
      p_132 = t;
    t = not_null(p_132);
    return(t);
  }
  if(((g_132 != NULL) && (g_132 != t)))
    _fail(t);
  else
    g_132 = t;
  t = not_null(g_132);
  if(match_cons(t, sym_DynRuleScope_2))
    {
      j_132 = ATgetArgument(t, 0);
      k_132 = ATgetArgument(t, 1);
      t = not_null(j_132);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_132 = ATgetFirst((ATermList) t);
          f_132 = (ATerm) ATgetNext((ATermList) t);
          t = q_132(t);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = r_132(t);
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
ATerm define_rule_scope_0_0 (ATerm t)
{
  ATerm p_7 (ATerm t)
  {
    t = try_1_0(DefDynamicRuleScope_0_0, t);
    return(t);
  }
  t = topdown_1_0(p_7, t);
  return(t);
}
ATerm LiftDynamicRules_0_0 (ATerm t)
{
  ATerm q_7 (ATerm t)
  {
    ATerm r_7 (ATerm t)
    {
      ATerm s_7 (ATerm t)
      {
        ATerm t_7 (ATerm t)
        {
          ATerm u_7 (ATerm t)
          {
            t = define_rule_scope_0_0(t);
            t = lift_dynamic_rules_0_0(t);
            return(t);
          }
          t = Strategies_1_0(u_7, t);
          return(t);
        }
        t = Cons_2_0(t_7, Nil_0_0, t);
        return(t);
      }
      t = Cons_2_0(_id, s_7, t);
      return(t);
    }
    t = Cons_2_0(_id, r_7, t);
    return(t);
  }
  t = Specification_1_0(q_7, t);
  return(t);
}
ATerm DefScopeDefault_0_0 (ATerm t)
{
  ATerm v_132 = NULL,w_132 = NULL;
  ATerm a_133 (ATerm t)
  {
    ATerm x_132 = NULL,y_132 = NULL;
    t = not_null(w_132);
    if(((x_132 != NULL) && (x_132 != t)))
      _fail(t);
    else
      x_132 = t;
    t = not_null(v_132);
    {
      ATerm z_132 = NULL;
      ATerm b_133 (ATerm t)
      {
        t = not_null(z_132);
        if(((y_132 != NULL) && (y_132 != t)))
          _fail(t);
        else
          y_132 = t;
        t = not_null(z_132);
        return(t);
      }
      t = not_null(x_132);
      t = tvars_0_0(t);
      if(((z_132 != NULL) && (z_132 != t)))
        _fail(t);
      else
        z_132 = t;
      t = b_133(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_132), not_null(x_132));
    }
    return(t);
  }
  if(((v_132 != NULL) && (v_132 != t)))
    _fail(t);
  else
    v_132 = t;
  t = not_null(v_132);
  if(match_cons(t, sym_ScopeDefault_1))
    {
      w_132 = ATgetArgument(t, 0);
      t = a_133(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm w_94 (ATerm), ATerm t)
{
  ATerm h_133 = NULL,i_133 = NULL;
  ATerm y_133 (ATerm t)
  {
    ATerm j_133 = NULL,k_133 = NULL,l_133 = NULL,r_133 = NULL;
    ATerm e_134 (ATerm t)
    {
      ATerm s_133 = NULL,t_133 = NULL;
      t = not_null(r_133);
      if(((s_133 != NULL) && (s_133 != t)))
        _fail(t);
      else
        s_133 = t;
      t = not_null(r_133);
      {
        ATerm u_133 = NULL;
        ATerm f_134 (ATerm t)
        {
          t = not_null(u_133);
          if(((t_133 != NULL) && (t_133 != t)))
            _fail(t);
          else
            t_133 = t;
          t = not_null(u_133);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(s_133)), not_null(l_133));
        if(((u_133 != NULL) && (u_133 != t)))
          _fail(t);
        else
          u_133 = t;
        t = f_134(t);
        t = not_null(t_133);
      }
      return(t);
    }
    t = not_null(h_133);
    if(((j_133 != NULL) && (j_133 != t)))
      _fail(t);
    else
      j_133 = t;
    t = not_null(i_133);
    if(((k_133 != NULL) && (k_133 != t)))
      _fail(t);
    else
      k_133 = t;
    t = not_null(h_133);
    {
      ATerm q_133 = NULL;
      ATerm z_133 (ATerm t)
      {
        t = not_null(q_133);
        if(((l_133 != NULL) && (l_133 != t)))
          _fail(t);
        else
          l_133 = t;
        t = not_null(q_133);
        return(t);
      }
      t = SSLgetAnnotations(not_null(j_133));
      if(((q_133 != NULL) && (q_133 != t)))
        _fail(t);
      else
        q_133 = t;
      t = z_133(t);
      t = not_null(k_133);
      t = w_94(t);
      if(((r_133 != NULL) && (r_133 != t)))
        _fail(t);
      else
        r_133 = t;
      t = e_134(t);
    }
    return(t);
  }
  if(((h_133 != NULL) && (h_133 != t)))
    _fail(t);
  else
    h_133 = t;
  t = not_null(h_133);
  if(match_cons(t, sym_DynamicRules_1))
    {
      i_133 = ATgetArgument(t, 0);
      t = y_133(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2_0 (ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm t)
{
  ATerm m_134 = NULL,n_134 = NULL,o_134 = NULL;
  ATerm s_135 (ATerm t)
  {
    ATerm p_134 = NULL,q_134 = NULL,r_134 = NULL,s_134 = NULL,u_134 = NULL;
    ATerm u_135 (ATerm t)
    {
      ATerm v_134 = NULL,e_135 = NULL;
      ATerm v_135 (ATerm t)
      {
        ATerm p_135 = NULL,q_135 = NULL;
        t = not_null(e_135);
        if(((p_135 != NULL) && (p_135 != t)))
          _fail(t);
        else
          p_135 = t;
        t = not_null(e_135);
        {
          ATerm r_135 = NULL;
          ATerm w_135 (ATerm t)
          {
            t = not_null(r_135);
            if(((q_135 != NULL) && (q_135 != t)))
              _fail(t);
            else
              q_135 = t;
            t = not_null(r_135);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(v_134), not_null(p_135)), not_null(s_134));
          if(((r_135 != NULL) && (r_135 != t)))
            _fail(t);
          else
            r_135 = t;
          t = w_135(t);
          t = not_null(q_135);
        }
        return(t);
      }
      t = not_null(u_134);
      if(((v_134 != NULL) && (v_134 != t)))
        _fail(t);
      else
        v_134 = t;
      t = not_null(r_134);
      t = a_96(t);
      if(((e_135 != NULL) && (e_135 != t)))
        _fail(t);
      else
        e_135 = t;
      t = v_135(t);
      return(t);
    }
    t = not_null(m_134);
    if(((p_134 != NULL) && (p_134 != t)))
      _fail(t);
    else
      p_134 = t;
    t = not_null(n_134);
    if(((q_134 != NULL) && (q_134 != t)))
      _fail(t);
    else
      q_134 = t;
    t = not_null(o_134);
    if(((r_134 != NULL) && (r_134 != t)))
      _fail(t);
    else
      r_134 = t;
    t = not_null(m_134);
    {
      ATerm t_134 = NULL;
      ATerm t_135 (ATerm t)
      {
        t = not_null(t_134);
        if(((s_134 != NULL) && (s_134 != t)))
          _fail(t);
        else
          s_134 = t;
        t = not_null(t_134);
        return(t);
      }
      t = SSLgetAnnotations(not_null(p_134));
      if(((t_134 != NULL) && (t_134 != t)))
        _fail(t);
      else
        t_134 = t;
      t = t_135(t);
      t = not_null(q_134);
      t = z_95(t);
      if(((u_134 != NULL) && (u_134 != t)))
        _fail(t);
      else
        u_134 = t;
      t = u_135(t);
    }
    return(t);
  }
  if(((m_134 != NULL) && (m_134 != t)))
    _fail(t);
  else
    m_134 = t;
  t = not_null(m_134);
  if(match_cons(t, sym_Scope_2))
    {
      n_134 = ATgetArgument(t, 0);
      o_134 = ATgetArgument(t, 1);
      t = s_135(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm x_134 (ATerm), ATerm y_134 (ATerm), ATerm z_134 (ATerm), ATerm t)
{
  ATerm j_55 = t;
  int k_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(z_134, x_134, t);
      ;
      LocalPopChoice(k_55);
    }
  else
    {
      t = j_55;
      {
        ATerm l_55 = t;
        int m_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(z_134, z_134, z_134, x_134, t);
            ;
            LocalPopChoice(m_55);
          }
        else
          {
            t = l_55;
            {
              ATerm n_55 = t;
              int o_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(z_134, z_134, z_134, x_134, t);
                  ;
                  LocalPopChoice(o_55);
                }
              else
                {
                  t = n_55;
                  t = DynamicRules_1_0(x_134, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm z_135 = NULL,a_136 = NULL,b_136 = NULL,c_136 = NULL,d_136 = NULL;
  ATerm i_136 (ATerm t)
  {
    ATerm e_136 = NULL,f_136 = NULL,g_136 = NULL,h_136 = NULL;
    t = not_null(a_136);
    if(((e_136 != NULL) && (e_136 != t)))
      _fail(t);
    else
      e_136 = t;
    t = not_null(b_136);
    if(((f_136 != NULL) && (f_136 != t)))
      _fail(t);
    else
      f_136 = t;
    t = not_null(c_136);
    if(((h_136 != NULL) && (h_136 != t)))
      _fail(t);
    else
      h_136 = t;
    t = not_null(d_136);
    if(((g_136 != NULL) && (g_136 != t)))
      _fail(t);
    else
      g_136 = t;
    t = not_null(h_136);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((z_135 != NULL) && (z_135 != t)))
    _fail(t);
  else
    z_135 = t;
  t = not_null(z_135);
  if(match_cons(t, sym_RDefT_4))
    {
      a_136 = ATgetArgument(t, 0);
      b_136 = ATgetArgument(t, 1);
      c_136 = ATgetArgument(t, 2);
      d_136 = ATgetArgument(t, 3);
      t = i_136(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm v_7 (ATerm t)
  {
    ATerm m_136 = NULL,n_136 = NULL,o_136 = NULL;
    ATerm r_136 (ATerm t)
    {
      ATerm p_136 = NULL;
      t = not_null(o_136);
      if(((p_136 != NULL) && (p_136 != t)))
        _fail(t);
      else
        p_136 = t;
      t = not_null(p_136);
      return(t);
    }
    ATerm s_136 (ATerm t)
    {
      ATerm q_136 = NULL;
      t = not_null(o_136);
      if(((q_136 != NULL) && (q_136 != t)))
        _fail(t);
      else
        q_136 = t;
      t = not_null(q_136);
      return(t);
    }
    if(((n_136 != NULL) && (n_136 != t)))
      _fail(t);
    else
      n_136 = t;
    t = not_null(n_136);
    if(match_cons(t, sym_VarDec_2))
      {
        o_136 = ATgetArgument(t, 0);
        m_136 = ATgetArgument(t, 1);
        t = r_136(t);
      }
    else
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            o_136 = ATgetArgument(t, 0);
            t = s_136(t);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1_0(v_7, t);
  return(t);
}
ATerm Bind6_0_0 (ATerm t)
{
  ATerm v_136 = NULL,w_136 = NULL,x_136 = NULL,y_136 = NULL,z_136 = NULL;
  ATerm e_137 (ATerm t)
  {
    ATerm a_137 = NULL,b_137 = NULL,c_137 = NULL,d_137 = NULL;
    t = not_null(w_136);
    if(((a_137 != NULL) && (a_137 != t)))
      _fail(t);
    else
      a_137 = t;
    t = not_null(x_136);
    if(((b_137 != NULL) && (b_137 != t)))
      _fail(t);
    else
      b_137 = t;
    t = not_null(y_136);
    if(((d_137 != NULL) && (d_137 != t)))
      _fail(t);
    else
      d_137 = t;
    t = not_null(z_136);
    if(((c_137 != NULL) && (c_137 != t)))
      _fail(t);
    else
      c_137 = t;
    t = not_null(d_137);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((v_136 != NULL) && (v_136 != t)))
    _fail(t);
  else
    v_136 = t;
  t = not_null(v_136);
  if(match_cons(t, sym_SDefT_4))
    {
      w_136 = ATgetArgument(t, 0);
      x_136 = ATgetArgument(t, 1);
      y_136 = ATgetArgument(t, 2);
      z_136 = ATgetArgument(t, 3);
      t = e_137(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm h_137 = NULL,i_137 = NULL;
  ATerm k_137 (ATerm t)
  {
    ATerm j_137 = NULL;
    t = not_null(i_137);
    if(((j_137 != NULL) && (j_137 != t)))
      _fail(t);
    else
      j_137 = t;
    t = not_null(j_137);
    t = tvars_0_0(t);
    return(t);
  }
  if(((h_137 != NULL) && (h_137 != t)))
    _fail(t);
  else
    h_137 = t;
  t = not_null(h_137);
  if(match_cons(t, sym_DynamicRules_1))
    {
      i_137 = ATgetArgument(t, 0);
      t = k_137(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm p_137 = NULL,q_137 = NULL,r_137 = NULL,s_137 = NULL,t_137 = NULL,u_137 = NULL;
  ATerm a_138 (ATerm t)
  {
    ATerm v_137 = NULL,w_137 = NULL,x_137 = NULL;
    t = not_null(p_137);
    if(((x_137 != NULL) && (x_137 != t)))
      _fail(t);
    else
      x_137 = t;
    t = not_null(q_137);
    if(((v_137 != NULL) && (v_137 != t)))
      _fail(t);
    else
      v_137 = t;
    t = not_null(r_137);
    if(((w_137 != NULL) && (w_137 != t)))
      _fail(t);
    else
      w_137 = t;
    t = not_null(x_137);
    t = tvars_0_0(t);
    return(t);
  }
  ATerm b_138 (ATerm t)
  {
    ATerm y_137 = NULL,z_137 = NULL;
    t = not_null(t_137);
    if(((z_137 != NULL) && (z_137 != t)))
      _fail(t);
    else
      z_137 = t;
    t = not_null(u_137);
    if(((y_137 != NULL) && (y_137 != t)))
      _fail(t);
    else
      y_137 = t;
    t = not_null(z_137);
    return(t);
  }
  if(((s_137 != NULL) && (s_137 != t)))
    _fail(t);
  else
    s_137 = t;
  t = not_null(s_137);
  if(match_cons(t, sym_LRule_1))
    {
      t_137 = ATgetArgument(t, 0);
      t = not_null(t_137);
      if(match_cons(t, sym_Rule_3))
        {
          p_137 = ATgetArgument(t, 0);
          q_137 = ATgetArgument(t, 1);
          r_137 = ATgetArgument(t, 2);
          t = a_138(t);
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
          t_137 = ATgetArgument(t, 0);
          u_137 = ATgetArgument(t, 1);
          t = b_138(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Add1_0_0 (ATerm t)
{
  ATerm e_138 = NULL,f_138 = NULL;
  ATerm h_138 (ATerm t)
  {
    ATerm g_138 = NULL;
    t = not_null(f_138);
    if(((g_138 != NULL) && (g_138 != t)))
      _fail(t);
    else
      g_138 = t;
    t = (ATerm) ATinsert(ATempty, not_null(g_138));
    return(t);
  }
  if(((e_138 != NULL) && (e_138 != t)))
    _fail(t);
  else
    e_138 = t;
  t = not_null(e_138);
  if(match_cons(t, sym_Var_1))
    {
      f_138 = ATgetArgument(t, 0);
      t = h_138(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1_0 (ATerm p_116 (ATerm), ATerm t)
{
  ATerm k_138 = NULL,l_138 = NULL,m_138 = NULL;
  ATerm p_138 (ATerm t)
  {
    ATerm n_138 = NULL,o_138 = NULL;
    t = not_null(l_138);
    if(((o_138 != NULL) && (o_138 != t)))
      _fail(t);
    else
      o_138 = t;
    t = not_null(m_138);
    if(((n_138 != NULL) && (n_138 != t)))
      _fail(t);
    else
      n_138 = t;
    t = not_null(o_138);
    {
      ATerm q_138 (ATerm t)
      {
        ATerm p_55 = t;
        int n_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            t = not_null(n_138);
            ;
            LocalPopChoice(n_56);
          }
        else
          {
            t = p_55;
            {
              ATerm o_56 = t;
              int p_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_7 (ATerm t)
                  {
                    t = not_null(n_138);
                    return(t);
                  }
                  t = HdMember_p__2_0(p_116, w_7, t);
                  t = q_138(t);
                  ;
                  LocalPopChoice(p_56);
                }
              else
                {
                  t = o_56;
                  t = Cons_2_0(_id, q_138, t);
                }
            }
          }
        return(t);
      }
      t = q_138(t);
    }
    return(t);
  }
  if(((k_138 != NULL) && (k_138 != t)))
    _fail(t);
  else
    k_138 = t;
  t = not_null(k_138);
  if(match_cons(t, sym__2))
    {
      l_138 = ATgetArgument(t, 0);
      m_138 = ATgetArgument(t, 1);
      t = p_138(t);
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
ATerm crush_3_0 (ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm k_122 (ATerm), ATerm t)
{
  ATerm v_138 = NULL;
  ATerm d_139 (ATerm t)
  {
    ATerm w_138 = NULL,x_138 = NULL;
    t = not_null(v_138);
    if(((w_138 != NULL) && (w_138 != t)))
      _fail(t);
    else
      w_138 = t;
    t = not_null(v_138);
    {
      ATerm y_138 = NULL;
      ATerm e_139 (ATerm t)
      {
        ATerm z_138 = NULL,a_139 = NULL,b_139 = NULL,c_139 = NULL;
        ATerm f_139 (ATerm t)
        {
          t = not_null(c_139);
          if(((x_138 != NULL) && (x_138 != t)))
            _fail(t);
          else
            x_138 = t;
          t = not_null(a_139);
          return(t);
        }
        t = not_null(y_138);
        if(((z_138 != NULL) && (z_138 != t)))
          _fail(t);
        else
          z_138 = t;
        t = not_null(y_138);
        t = SSL_explode_term(not_null(z_138));
        if(((a_139 != NULL) && (a_139 != t)))
          _fail(t);
        else
          a_139 = t;
        t = not_null(a_139);
        if(match_cons(t, sym__2))
          {
            b_139 = ATgetArgument(t, 0);
            c_139 = ATgetArgument(t, 1);
            t = f_139(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(w_138);
      if(((y_138 != NULL) && (y_138 != t)))
        _fail(t);
      else
        y_138 = t;
      t = e_139(t);
      t = not_null(x_138);
      t = foldr_3_0(i_122, j_122, k_122, t);
    }
    return(t);
  }
  if(((v_138 != NULL) && (v_138 != t)))
    _fail(t);
  else
    v_138 = t;
  t = d_139(t);
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm i_139 = NULL,j_139 = NULL,k_139 = NULL;
  ATerm m_139 (ATerm t)
  {
    ATerm l_139 = NULL;
    t = not_null(j_139);
    if(((l_139 != NULL) && (l_139 != t)))
      _fail(t);
    else
      l_139 = t;
    t = not_null(k_139);
    if(((l_139 != NULL) && (l_139 != t)))
      _fail(t);
    else
      l_139 = t;
    t = not_null(i_139);
    return(t);
  }
  if(((i_139 != NULL) && (i_139 != t)))
    _fail(t);
  else
    i_139 = t;
  t = not_null(i_139);
  if(match_cons(t, sym__2))
    {
      j_139 = ATgetArgument(t, 0);
      k_139 = ATgetArgument(t, 1);
      t = m_139(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm t)
{
  ATerm q_139 = NULL,r_139 = NULL,s_139 = NULL;
  ATerm x_139 (ATerm t)
  {
    ATerm t_139 = NULL,u_139 = NULL;
    t = not_null(r_139);
    if(((u_139 != NULL) && (u_139 != t)))
      _fail(t);
    else
      u_139 = t;
    t = not_null(s_139);
    if(((t_139 != NULL) && (t_139 != t)))
      _fail(t);
    else
      t_139 = t;
    t = not_null(q_139);
    t = u_116(t);
    {
      ATerm x_7 (ATerm t)
      {
        ATerm v_139 = NULL;
        ATerm y_139 (ATerm t)
        {
          ATerm w_139 = NULL;
          t = not_null(v_139);
          if(((w_139 != NULL) && (w_139 != t)))
            _fail(t);
          else
            w_139 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_139), not_null(w_139));
          t = t_116(t);
          return(t);
        }
        if(((v_139 != NULL) && (v_139 != t)))
          _fail(t);
        else
          v_139 = t;
        t = y_139(t);
        return(t);
      }
      t = fetch_1_0(x_7, t);
    }
    t = not_null(t_139);
    return(t);
  }
  if(((q_139 != NULL) && (q_139 != t)))
    _fail(t);
  else
    q_139 = t;
  t = not_null(q_139);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_139 = ATgetFirst((ATermList) t);
      s_139 = (ATerm) ATgetNext((ATermList) t);
      t = x_139(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1_0 (ATerm l_116 (ATerm), ATerm t)
{
  ATerm b_140 = NULL,c_140 = NULL,d_140 = NULL;
  ATerm g_140 (ATerm t)
  {
    ATerm e_140 = NULL,f_140 = NULL;
    t = not_null(c_140);
    if(((f_140 != NULL) && (f_140 != t)))
      _fail(t);
    else
      f_140 = t;
    t = not_null(d_140);
    if(((e_140 != NULL) && (e_140 != t)))
      _fail(t);
    else
      e_140 = t;
    t = not_null(f_140);
    {
      ATerm h_140 (ATerm t)
      {
        ATerm q_56 = t;
        int r_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            ;
            LocalPopChoice(r_56);
          }
        else
          {
            t = q_56;
            {
              ATerm s_56 = t;
              int t_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_7 (ATerm t)
                  {
                    t = not_null(e_140);
                    return(t);
                  }
                  t = HdMember_p__2_0(l_116, y_7, t);
                  t = h_140(t);
                  ;
                  LocalPopChoice(t_56);
                }
              else
                {
                  t = s_56;
                  t = Cons_2_0(_id, h_140, t);
                }
            }
          }
        return(t);
      }
      t = h_140(t);
    }
    return(t);
  }
  if(((b_140 != NULL) && (b_140 != t)))
    _fail(t);
  else
    b_140 = t;
  t = not_null(b_140);
  if(match_cons(t, sym__2))
    {
      c_140 = ATgetArgument(t, 0);
      d_140 = ATgetArgument(t, 1);
      t = g_140(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfShift_0_0 (ATerm t)
{
  ATerm l_140 = NULL,m_140 = NULL,n_140 = NULL,o_140 = NULL,p_140 = NULL;
  ATerm t_140 (ATerm t)
  {
    ATerm q_140 = NULL,r_140 = NULL,s_140 = NULL;
    t = not_null(m_140);
    if(((r_140 != NULL) && (r_140 != t)))
      _fail(t);
    else
      r_140 = t;
    t = not_null(o_140);
    if(((q_140 != NULL) && (q_140 != t)))
      _fail(t);
    else
      q_140 = t;
    t = not_null(p_140);
    if(((s_140 != NULL) && (s_140 != t)))
      _fail(t);
    else
      s_140 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_140)), not_null(q_140)), not_null(s_140));
    return(t);
  }
  if(((l_140 != NULL) && (l_140 != t)))
    _fail(t);
  else
    l_140 = t;
  t = not_null(l_140);
  if(match_cons(t, sym__2))
    {
      m_140 = ATgetArgument(t, 0);
      n_140 = ATgetArgument(t, 1);
      t = not_null(n_140);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_140 = ATgetFirst((ATermList) t);
          p_140 = (ATerm) ATgetNext((ATermList) t);
          t = t_140(t);
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
ATerm Zip3_0_0 (ATerm t)
{
  ATerm w_140 = NULL,x_140 = NULL,y_140 = NULL;
  ATerm b_141 (ATerm t)
  {
    ATerm z_140 = NULL,a_141 = NULL;
    t = not_null(x_140);
    if(((z_140 != NULL) && (z_140 != t)))
      _fail(t);
    else
      z_140 = t;
    t = not_null(y_140);
    if(((a_141 != NULL) && (a_141 != t)))
      _fail(t);
    else
      a_141 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(a_141)), not_null(z_140));
    return(t);
  }
  if(((w_140 != NULL) && (w_140 != t)))
    _fail(t);
  else
    w_140 = t;
  t = not_null(w_140);
  if(match_cons(t, sym__2))
    {
      x_140 = ATgetArgument(t, 0);
      y_140 = ATgetArgument(t, 1);
      t = b_141(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0_0 (ATerm t)
{
  ATerm g_141 = NULL,h_141 = NULL,i_141 = NULL,j_141 = NULL,k_141 = NULL,l_141 = NULL,m_141 = NULL;
  ATerm r_141 (ATerm t)
  {
    ATerm n_141 = NULL,o_141 = NULL,p_141 = NULL,q_141 = NULL;
    t = not_null(i_141);
    if(((n_141 != NULL) && (n_141 != t)))
      _fail(t);
    else
      n_141 = t;
    t = not_null(j_141);
    if(((p_141 != NULL) && (p_141 != t)))
      _fail(t);
    else
      p_141 = t;
    t = not_null(l_141);
    if(((o_141 != NULL) && (o_141 != t)))
      _fail(t);
    else
      o_141 = t;
    t = not_null(m_141);
    if(((q_141 != NULL) && (q_141 != t)))
      _fail(t);
    else
      q_141 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(n_141), not_null(o_141)), (ATerm) ATmakeAppl(sym__2, not_null(p_141), not_null(q_141)));
    return(t);
  }
  if(((g_141 != NULL) && (g_141 != t)))
    _fail(t);
  else
    g_141 = t;
  t = not_null(g_141);
  if(match_cons(t, sym__2))
    {
      h_141 = ATgetArgument(t, 0);
      k_141 = ATgetArgument(t, 1);
      t = not_null(h_141);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_141 = ATgetFirst((ATermList) t);
          j_141 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(k_141);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_141 = ATgetFirst((ATermList) t);
              m_141 = (ATerm) ATgetNext((ATermList) t);
              t = r_141(t);
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
  ATerm w_141 = NULL,x_141 = NULL,y_141 = NULL;
  ATerm z_141 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  if(((w_141 != NULL) && (w_141 != t)))
    _fail(t);
  else
    w_141 = t;
  t = not_null(w_141);
  if(match_cons(t, sym__2))
    {
      x_141 = ATgetArgument(t, 0);
      y_141 = ATgetArgument(t, 1);
      t = not_null(x_141);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = not_null(y_141);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = z_141(t);
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
ATerm genzip_4_0 (ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t)
{
  ATerm a_142 (ATerm t)
  {
    ATerm u_56 = t;
    int v_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_114(t);
        ;
        LocalPopChoice(v_56);
      }
    else
      {
        t = u_56;
        t = q_114(t);
        t = _2_0(s_114, a_142, t);
        t = r_114(t);
      }
    return(t);
  }
  t = a_142(t);
  return(t);
}
ATerm zip_1_0 (ATerm u_114 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1_0_0, Zip2_0_0, Zip3_0_0, u_114, t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm l_142 = NULL,m_142 = NULL,n_142 = NULL,o_142 = NULL,p_142 = NULL;
  ATerm i_143 (ATerm t)
  {
    ATerm q_142 = NULL,r_142 = NULL,s_142 = NULL,t_142 = NULL,u_142 = NULL,a_143 = NULL,g_143 = NULL;
    t = not_null(n_142);
    if(((q_142 != NULL) && (q_142 != t)))
      _fail(t);
    else
      q_142 = t;
    t = not_null(o_142);
    if(((r_142 != NULL) && (r_142 != t)))
      _fail(t);
    else
      r_142 = t;
    t = not_null(p_142);
    if(((s_142 != NULL) && (s_142 != t)))
      _fail(t);
    else
      s_142 = t;
    t = not_null(l_142);
    {
      ATerm w_56;
      w_56 = t;
      {
        ATerm v_142 = NULL;
        ATerm j_143 (ATerm t)
        {
          ATerm w_142 = NULL,x_142 = NULL,y_142 = NULL,z_142 = NULL;
          ATerm k_143 (ATerm t)
          {
            t = not_null(y_142);
            if(((t_142 != NULL) && (t_142 != t)))
              _fail(t);
            else
              t_142 = t;
            t = not_null(z_142);
            if(((u_142 != NULL) && (u_142 != t)))
              _fail(t);
            else
              u_142 = t;
            t = not_null(x_142);
            return(t);
          }
          t = not_null(v_142);
          if(((w_142 != NULL) && (w_142 != t)))
            _fail(t);
          else
            w_142 = t;
          t = not_null(v_142);
          t = SSL_explode_term(not_null(w_142));
          if(((x_142 != NULL) && (x_142 != t)))
            _fail(t);
          else
            x_142 = t;
          t = not_null(x_142);
          if(match_cons(t, sym__2))
            {
              y_142 = ATgetArgument(t, 0);
              z_142 = ATgetArgument(t, 1);
              t = k_143(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = not_null(r_142);
        if(((v_142 != NULL) && (v_142 != t)))
          _fail(t);
        else
          v_142 = t;
        t = j_143(t);
      }
      t = w_56;
      {
        ATerm x_56;
        x_56 = t;
        {
          ATerm b_143 = NULL;
          ATerm l_143 (ATerm t)
          {
            ATerm c_143 = NULL,d_143 = NULL,e_143 = NULL,f_143 = NULL;
            ATerm m_143 (ATerm t)
            {
              t = not_null(e_143);
              if(((t_142 != NULL) && (t_142 != t)))
                _fail(t);
              else
                t_142 = t;
              t = not_null(f_143);
              if(((a_143 != NULL) && (a_143 != t)))
                _fail(t);
              else
                a_143 = t;
              t = not_null(d_143);
              return(t);
            }
            t = not_null(b_143);
            if(((c_143 != NULL) && (c_143 != t)))
              _fail(t);
            else
              c_143 = t;
            t = not_null(b_143);
            t = SSL_explode_term(not_null(c_143));
            if(((d_143 != NULL) && (d_143 != t)))
              _fail(t);
            else
              d_143 = t;
            t = not_null(d_143);
            if(match_cons(t, sym__2))
              {
                e_143 = ATgetArgument(t, 0);
                f_143 = ATgetArgument(t, 1);
                t = m_143(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = not_null(q_142);
          if(((b_143 != NULL) && (b_143 != t)))
            _fail(t);
          else
            b_143 = t;
          t = l_143(t);
        }
        t = x_56;
        {
          ATerm h_143 = NULL;
          ATerm n_143 (ATerm t)
          {
            t = not_null(h_143);
            if(((g_143 != NULL) && (g_143 != t)))
              _fail(t);
            else
              g_143 = t;
            t = not_null(h_143);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_143), not_null(u_142));
          t = zip_1_0(_id, t);
          if(((h_143 != NULL) && (h_143 != t)))
            _fail(t);
          else
            h_143 = t;
          t = n_143(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_143), not_null(s_142));
          t = conc_0_0(t);
        }
      }
    }
    return(t);
  }
  if(((l_142 != NULL) && (l_142 != t)))
    _fail(t);
  else
    l_142 = t;
  t = not_null(l_142);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_142 = ATgetFirst((ATermList) t);
      p_142 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(m_142);
      if(match_cons(t, sym__2))
        {
          n_142 = ATgetArgument(t, 0);
          o_142 = ATgetArgument(t, 1);
          t = i_143(t);
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
  ATerm r_143 = NULL,s_143 = NULL,t_143 = NULL,u_143 = NULL,v_143 = NULL;
  ATerm y_143 (ATerm t)
  {
    ATerm w_143 = NULL,x_143 = NULL;
    t = not_null(t_143);
    if(((w_143 != NULL) && (w_143 != t)))
      _fail(t);
    else
      w_143 = t;
    t = not_null(u_143);
    if(((w_143 != NULL) && (w_143 != t)))
      _fail(t);
    else
      w_143 = t;
    t = not_null(v_143);
    if(((x_143 != NULL) && (x_143 != t)))
      _fail(t);
    else
      x_143 = t;
    t = not_null(x_143);
    return(t);
  }
  if(((r_143 != NULL) && (r_143 != t)))
    _fail(t);
  else
    r_143 = t;
  t = not_null(r_143);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_143 = ATgetFirst((ATermList) t);
      v_143 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(s_143);
      if(match_cons(t, sym__2))
        {
          t_143 = ATgetArgument(t, 0);
          u_143 = ATgetArgument(t, 1);
          t = y_143(t);
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
ATerm while_not_2_0 (ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm t)
{
  ATerm z_143 (ATerm t)
  {
    ATerm y_56 = t;
    int z_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_106(t);
        ;
        LocalPopChoice(z_56);
      }
    else
      {
        t = y_56;
        t = n_106(t);
        t = z_143(t);
      }
    return(t);
  }
  t = z_143(t);
  return(t);
}
ATerm for_3_0 (ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm t)
{
  t = p_106(t);
  t = while_not_2_0(q_106, r_106, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm a_57 = t;
  int b_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_7 (ATerm t)
      {
        ATerm b_144 = NULL;
        ATerm d_144 (ATerm t)
        {
          ATerm c_144 = NULL;
          t = not_null(b_144);
          if(((c_144 != NULL) && (c_144 != t)))
            _fail(t);
          else
            c_144 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(c_144));
          return(t);
        }
        if(((b_144 != NULL) && (b_144 != t)))
          _fail(t);
        else
          b_144 = t;
        t = d_144(t);
        return(t);
      }
      ATerm a_8 (ATerm t)
      {
        t = _2_0(_id, Nil_0_0, t);
        return(t);
      }
      ATerm b_8 (ATerm t)
      {
        ATerm y_57 = t;
        int z_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_8 (ATerm t)
            {
              ATerm g_58 = t;
              int h_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0_0(t);
                  ;
                  LocalPopChoice(h_58);
                }
              else
                {
                  t = g_58;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, c_8, t);
            ;
            LocalPopChoice(z_57);
          }
        else
          {
            t = y_57;
            t = UfShift_0_0(t);
          }
        return(t);
      }
      t = for_3_0(z_7, a_8, b_8, t);
      ;
      LocalPopChoice(b_57);
    }
  else
    {
      t = a_57;
      t = diff_1_0(eq_0_0, t);
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm m_133 (ATerm), ATerm n_133 (ATerm), ATerm o_133 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t)
{
  ATerm h_144 (ATerm t)
  {
    ATerm i_58 = t;
    int v_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_133(t);
        ;
        LocalPopChoice(v_58);
      }
    else
      {
        t = i_58;
        {
          ATerm w_58 = t;
          int x_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_144 = NULL;
              ATerm y_58;
              y_58 = t;
              {
                ATerm g_144 = NULL;
                ATerm i_144 (ATerm t)
                {
                  t = not_null(g_144);
                  if(((f_144 != NULL) && (f_144 != t)))
                    _fail(t);
                  else
                    f_144 = t;
                  t = not_null(g_144);
                  return(t);
                }
                t = n_133(t);
                if(((g_144 != NULL) && (g_144 != t)))
                  _fail(t);
                else
                  g_144 = t;
                t = i_144(t);
              }
              t = y_58;
              {
                ATerm d_8 (ATerm t)
                {
                  ATerm f_8 (ATerm t)
                  {
                    t = not_null(f_144);
                    return(t);
                  }
                  t = split_2_0(h_144, f_8, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm e_8 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = o_133(d_8, h_144, e_8, t);
                {
                  ATerm g_8 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(g_8, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(x_58);
            }
          else
            {
              t = w_58;
              {
                ATerm h_8 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(h_8, union_0_0, h_144, t);
              }
            }
        }
      }
    return(t);
  }
  t = h_144(t);
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm i_8 (ATerm t)
  {
    ATerm z_58 = t;
    int a_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(a_59);
      }
    else
      {
        t = z_58;
        {
          ATerm t_59 = t;
          int u_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(u_59);
            }
          else
            {
              t = t_59;
              {
                ATerm v_59 = t;
                int w_59 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(w_59);
                  }
                else
                  {
                    t = v_59;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(Add1_0_0, i_8, tboundin_3_0, t);
  return(t);
}
ATerm DefLRule_0_0 (ATerm t)
{
  ATerm n_144 = NULL,o_144 = NULL,p_144 = NULL,q_144 = NULL,r_144 = NULL;
  ATerm x_144 (ATerm t)
  {
    ATerm s_144 = NULL,t_144 = NULL,u_144 = NULL,v_144 = NULL;
    t = not_null(p_144);
    if(((s_144 != NULL) && (s_144 != t)))
      _fail(t);
    else
      s_144 = t;
    t = not_null(q_144);
    if(((t_144 != NULL) && (t_144 != t)))
      _fail(t);
    else
      t_144 = t;
    t = not_null(r_144);
    if(((u_144 != NULL) && (u_144 != t)))
      _fail(t);
    else
      u_144 = t;
    t = not_null(n_144);
    {
      ATerm w_144 = NULL;
      ATerm y_144 (ATerm t)
      {
        t = not_null(w_144);
        if(((v_144 != NULL) && (v_144 != t)))
          _fail(t);
        else
          v_144 = t;
        t = not_null(w_144);
        return(t);
      }
      t = not_null(s_144);
      t = tvars_0_0(t);
      if(((w_144 != NULL) && (w_144 != t)))
        _fail(t);
      else
        w_144 = t;
      t = y_144(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_144), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_144), not_null(t_144), not_null(u_144))));
    }
    return(t);
  }
  if(((n_144 != NULL) && (n_144 != t)))
    _fail(t);
  else
    n_144 = t;
  t = not_null(n_144);
  if(match_cons(t, sym_LRule_1))
    {
      o_144 = ATgetArgument(t, 0);
      t = not_null(o_144);
      if(match_cons(t, sym_Rule_3))
        {
          p_144 = ATgetArgument(t, 0);
          q_144 = ATgetArgument(t, 1);
          r_144 = ATgetArgument(t, 2);
          t = x_144(t);
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
ATerm bottomup_1_0 (ATerm w_106 (ATerm), ATerm t)
{
  ATerm j_8 (ATerm t)
  {
    t = bottomup_1_0(w_106, t);
    return(t);
  }
  t = SRTS_all(j_8, t);
  t = w_106(t);
  return(t);
}
ATerm define_lrules_0_0 (ATerm t)
{
  ATerm k_8 (ATerm t)
  {
    ATerm l_8 (ATerm t)
    {
      ATerm x_59 = t;
      int y_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0_0(t);
          ;
          LocalPopChoice(y_59);
        }
      else
        {
          t = x_59;
          t = DefScopeDefault_0_0(t);
        }
      return(t);
    }
    t = try_1_0(l_8, t);
    return(t);
  }
  t = bottomup_1_0(k_8, t);
  return(t);
}
ATerm table_lookup_0_0 (ATerm t)
{
  ATerm b_145 = NULL,c_145 = NULL,d_145 = NULL;
  ATerm g_145 (ATerm t)
  {
    ATerm e_145 = NULL,f_145 = NULL;
    t = not_null(c_145);
    if(((e_145 != NULL) && (e_145 != t)))
      _fail(t);
    else
      e_145 = t;
    t = not_null(d_145);
    if(((f_145 != NULL) && (f_145 != t)))
      _fail(t);
    else
      f_145 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_145), not_null(f_145));
    t = table_get_0_0(t);
    t = Hd_0_0(t);
    return(t);
  }
  if(((b_145 != NULL) && (b_145 != t)))
    _fail(t);
  else
    b_145 = t;
  t = not_null(b_145);
  if(match_cons(t, sym__2))
    {
      c_145 = ATgetArgument(t, 0);
      d_145 = ATgetArgument(t, 1);
      t = g_145(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1_0 (ATerm h_123 (ATerm), ATerm t)
{
  ATerm j_145 = NULL;
  ATerm n_145 (ATerm t)
  {
    ATerm k_145 = NULL,l_145 = NULL;
    t = not_null(j_145);
    if(((k_145 != NULL) && (k_145 != t)))
      _fail(t);
    else
      k_145 = t;
    t = not_null(j_145);
    {
      ATerm m_145 = NULL;
      ATerm o_145 (ATerm t)
      {
        t = not_null(m_145);
        if(((l_145 != NULL) && (l_145 != t)))
          _fail(t);
        else
          l_145 = t;
        t = not_null(m_145);
        return(t);
      }
      t = term_z_59;
      t = h_123(t);
      if(((m_145 != NULL) && (m_145 != t)))
        _fail(t);
      else
        m_145 = t;
      t = o_145(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_145), not_null(k_145));
      t = table_lookup_0_0(t);
    }
    return(t);
  }
  if(((j_145 != NULL) && (j_145 != t)))
    _fail(t);
  else
    j_145 = t;
  t = n_145(t);
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm w_145 = NULL,x_145 = NULL;
  ATerm g_146 (ATerm t)
  {
    ATerm y_145 = NULL,z_145 = NULL;
    t = not_null(w_145);
    if(((z_145 != NULL) && (z_145 != t)))
      _fail(t);
    else
      z_145 = t;
    t = not_null(x_145);
    if(((y_145 != NULL) && (y_145 != t)))
      _fail(t);
    else
      y_145 = t;
    t = not_null(w_145);
    {
      ATerm a_146 = NULL,b_146 = NULL;
      t = not_null(z_145);
      {
        ATerm m_8 (ATerm t)
        {
          t = term_a_60;
          return(t);
        }
        t = rewrite_1_0(m_8, t);
        if(((a_146 != NULL) && (a_146 != t)))
          _fail(t);
        else
          a_146 = t;
        t = not_null(a_146);
        if(match_cons(t, sym_Defined_1))
          {
            b_146 = ATgetArgument(t, 0);
            t = not_null(b_146);
            if(match_string(t, "e_0"))
              {
                t = not_null(a_146);
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
      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(y_145), (ATerm) ATempty);
    }
    return(t);
  }
  ATerm h_146 (ATerm t)
  {
    ATerm c_146 = NULL,d_146 = NULL;
    t = not_null(w_145);
    if(((d_146 != NULL) && (d_146 != t)))
      _fail(t);
    else
      d_146 = t;
    t = not_null(x_145);
    if(((c_146 != NULL) && (c_146 != t)))
      _fail(t);
    else
      c_146 = t;
    t = not_null(w_145);
    {
      ATerm e_146 = NULL,f_146 = NULL;
      t = not_null(d_146);
      {
        ATerm n_8 (ATerm t)
        {
          t = term_a_60;
          return(t);
        }
        t = rewrite_1_0(n_8, t);
        if(((e_146 != NULL) && (e_146 != t)))
          _fail(t);
        else
          e_146 = t;
        t = not_null(e_146);
        if(match_cons(t, sym_Defined_1))
          {
            f_146 = ATgetArgument(t, 0);
            t = not_null(f_146);
            if(match_string(t, "c_0"))
              {
                t = not_null(e_146);
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
      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(c_146), (ATerm) ATempty);
    }
    return(t);
  }
  if(((w_145 != NULL) && (w_145 != t)))
    _fail(t);
  else
    w_145 = t;
  t = not_null(w_145);
  if(match_cons(t, sym_Var_1))
    {
      x_145 = ATgetArgument(t, 0);
      {
        ATerm b_60 = t;
        int c_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_146(t);
            ;
            LocalPopChoice(c_60);
          }
        else
          {
            t = b_60;
            t = h_146(t);
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm n_108 (ATerm), ATerm t)
{
  ATerm i_146 (ATerm t)
  {
    ATerm d_60 = t;
    int e_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_108(t);
        ;
        LocalPopChoice(e_60);
      }
    else
      {
        t = d_60;
        t = SRTS_all(i_146, t);
      }
    return(t);
  }
  t = i_146(t);
  return(t);
}
ATerm assert_1_0 (ATerm f_123 (ATerm), ATerm t)
{
  ATerm o_146 = NULL,p_146 = NULL,q_146 = NULL;
  ATerm a_147 (ATerm t)
  {
    ATerm r_146 = NULL,s_146 = NULL,t_146 = NULL,u_146 = NULL,v_146 = NULL;
    t = not_null(p_146);
    if(((r_146 != NULL) && (r_146 != t)))
      _fail(t);
    else
      r_146 = t;
    t = not_null(q_146);
    if(((s_146 != NULL) && (s_146 != t)))
      _fail(t);
    else
      s_146 = t;
    t = not_null(o_146);
    {
      ATerm f_60;
      f_60 = t;
      {
        ATerm w_146 = NULL;
        ATerm b_147 (ATerm t)
        {
          ATerm x_146 = NULL,y_146 = NULL,z_146 = NULL;
          ATerm c_147 (ATerm t)
          {
            t = not_null(y_146);
            if(((u_146 != NULL) && (u_146 != t)))
              _fail(t);
            else
              u_146 = t;
            t = not_null(z_146);
            if(((v_146 != NULL) && (v_146 != t)))
              _fail(t);
            else
              v_146 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_146), term_g_60, (ATerm) ATinsert(CheckATermList(not_null(v_146)), (ATerm) ATinsert(CheckATermList(not_null(u_146)), not_null(r_146))));
            t = table_put_0_0(t);
            return(t);
          }
          t = not_null(w_146);
          if(((t_146 != NULL) && (t_146 != t)))
            _fail(t);
          else
            t_146 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(t_146), not_null(r_146), not_null(s_146));
          t = table_push_0_0(t);
          {
            ATerm h_60 = t;
            int i_60 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_146), term_g_60);
                t = table_get_0_0(t);
                ;
                LocalPopChoice(i_60);
              }
            else
              {
                t = h_60;
                t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
              }
            if(((x_146 != NULL) && (x_146 != t)))
              _fail(t);
            else
              x_146 = t;
            t = not_null(x_146);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_146 = ATgetFirst((ATermList) t);
                z_146 = (ATerm) ATgetNext((ATermList) t);
                t = c_147(t);
              }
            else
              {
                _fail(t);
              }
          }
          return(t);
        }
        t = f_123(t);
        if(((w_146 != NULL) && (w_146 != t)))
          _fail(t);
        else
          w_146 = t;
        t = b_147(t);
      }
      t = f_60;
    }
    return(t);
  }
  if(((o_146 != NULL) && (o_146 != t)))
    _fail(t);
  else
    o_146 = t;
  t = not_null(o_146);
  if(match_cons(t, sym__2))
    {
      p_146 = ATgetArgument(t, 0);
      q_146 = ATgetArgument(t, 1);
      t = a_147(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm i_147 = NULL,j_147 = NULL,k_147 = NULL,l_147 = NULL,m_147 = NULL;
  ATerm r_147 (ATerm t)
  {
    ATerm n_147 = NULL,o_147 = NULL;
    t = not_null(k_147);
    if(((o_147 != NULL) && (o_147 != t)))
      _fail(t);
    else
      o_147 = t;
    t = not_null(i_147);
    if(((n_147 != NULL) && (n_147 != t)))
      _fail(t);
    else
      n_147 = t;
    t = not_null(j_147);
    {
      ATerm j_60;
      j_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_147)), term_l_60);
      {
        ATerm o_8 (ATerm t)
        {
          t = term_a_60;
          return(t);
        }
        t = assert_1_0(o_8, t);
      }
      t = j_60;
    }
    return(t);
  }
  ATerm s_147 (ATerm t)
  {
    ATerm p_147 = NULL,q_147 = NULL;
    t = not_null(k_147);
    if(((q_147 != NULL) && (q_147 != t)))
      _fail(t);
    else
      q_147 = t;
    t = not_null(m_147);
    if(((p_147 != NULL) && (p_147 != t)))
      _fail(t);
    else
      p_147 = t;
    t = not_null(j_147);
    {
      ATerm m_60;
      m_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_147)), term_o_60);
      {
        ATerm p_8 (ATerm t)
        {
          t = term_a_60;
          return(t);
        }
        t = assert_1_0(p_8, t);
      }
      t = m_60;
    }
    return(t);
  }
  if(((j_147 != NULL) && (j_147 != t)))
    _fail(t);
  else
    j_147 = t;
  t = not_null(j_147);
  if(match_cons(t, sym_Overlay_3))
    {
      k_147 = ATgetArgument(t, 0);
      l_147 = ATgetArgument(t, 1);
      i_147 = ATgetArgument(t, 2);
      t = not_null(l_147);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = r_147(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_OpDecl_2))
        {
          k_147 = ATgetArgument(t, 0);
          l_147 = ATgetArgument(t, 1);
          t = not_null(l_147);
          if(match_cons(t, sym_ConstType_1))
            {
              m_147 = ATgetArgument(t, 0);
              t = s_147(t);
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
ATerm Overlays_1_0 (ATerm i_91 (ATerm), ATerm t)
{
  ATerm y_147 = NULL,z_147 = NULL;
  ATerm i_148 (ATerm t)
  {
    ATerm a_148 = NULL,b_148 = NULL,c_148 = NULL,e_148 = NULL;
    ATerm k_148 (ATerm t)
    {
      ATerm f_148 = NULL,g_148 = NULL;
      t = not_null(e_148);
      if(((f_148 != NULL) && (f_148 != t)))
        _fail(t);
      else
        f_148 = t;
      t = not_null(e_148);
      {
        ATerm h_148 = NULL;
        ATerm l_148 (ATerm t)
        {
          t = not_null(h_148);
          if(((g_148 != NULL) && (g_148 != t)))
            _fail(t);
          else
            g_148 = t;
          t = not_null(h_148);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(f_148)), not_null(c_148));
        if(((h_148 != NULL) && (h_148 != t)))
          _fail(t);
        else
          h_148 = t;
        t = l_148(t);
        t = not_null(g_148);
      }
      return(t);
    }
    t = not_null(y_147);
    if(((a_148 != NULL) && (a_148 != t)))
      _fail(t);
    else
      a_148 = t;
    t = not_null(z_147);
    if(((b_148 != NULL) && (b_148 != t)))
      _fail(t);
    else
      b_148 = t;
    t = not_null(y_147);
    {
      ATerm d_148 = NULL;
      ATerm j_148 (ATerm t)
      {
        t = not_null(d_148);
        if(((c_148 != NULL) && (c_148 != t)))
          _fail(t);
        else
          c_148 = t;
        t = not_null(d_148);
        return(t);
      }
      t = SSLgetAnnotations(not_null(a_148));
      if(((d_148 != NULL) && (d_148 != t)))
        _fail(t);
      else
        d_148 = t;
      t = j_148(t);
      t = not_null(b_148);
      t = i_91(t);
      if(((e_148 != NULL) && (e_148 != t)))
        _fail(t);
      else
        e_148 = t;
      t = k_148(t);
    }
    return(t);
  }
  if(((y_147 != NULL) && (y_147 != t)))
    _fail(t);
  else
    y_147 = t;
  t = not_null(y_147);
  if(match_cons(t, sym_Overlays_1))
    {
      z_147 = ATgetArgument(t, 0);
      t = i_148(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Constructors_1_0 (ATerm d_92 (ATerm), ATerm t)
{
  ATerm r_148 = NULL,s_148 = NULL;
  ATerm b_149 (ATerm t)
  {
    ATerm t_148 = NULL,u_148 = NULL,v_148 = NULL,x_148 = NULL;
    ATerm d_149 (ATerm t)
    {
      ATerm y_148 = NULL,z_148 = NULL;
      t = not_null(x_148);
      if(((y_148 != NULL) && (y_148 != t)))
        _fail(t);
      else
        y_148 = t;
      t = not_null(x_148);
      {
        ATerm a_149 = NULL;
        ATerm e_149 (ATerm t)
        {
          t = not_null(a_149);
          if(((z_148 != NULL) && (z_148 != t)))
            _fail(t);
          else
            z_148 = t;
          t = not_null(a_149);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, not_null(y_148)), not_null(v_148));
        if(((a_149 != NULL) && (a_149 != t)))
          _fail(t);
        else
          a_149 = t;
        t = e_149(t);
        t = not_null(z_148);
      }
      return(t);
    }
    t = not_null(r_148);
    if(((t_148 != NULL) && (t_148 != t)))
      _fail(t);
    else
      t_148 = t;
    t = not_null(s_148);
    if(((u_148 != NULL) && (u_148 != t)))
      _fail(t);
    else
      u_148 = t;
    t = not_null(r_148);
    {
      ATerm w_148 = NULL;
      ATerm c_149 (ATerm t)
      {
        t = not_null(w_148);
        if(((v_148 != NULL) && (v_148 != t)))
          _fail(t);
        else
          v_148 = t;
        t = not_null(w_148);
        return(t);
      }
      t = SSLgetAnnotations(not_null(t_148));
      if(((w_148 != NULL) && (w_148 != t)))
        _fail(t);
      else
        w_148 = t;
      t = c_149(t);
      t = not_null(u_148);
      t = d_92(t);
      if(((x_148 != NULL) && (x_148 != t)))
        _fail(t);
      else
        x_148 = t;
      t = d_149(t);
    }
    return(t);
  }
  if(((r_148 != NULL) && (r_148 != t)))
    _fail(t);
  else
    r_148 = t;
  t = not_null(r_148);
  if(match_cons(t, sym_Constructors_1))
    {
      s_148 = ATgetArgument(t, 0);
      t = b_149(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm i_149 = NULL,j_149 = NULL,k_149 = NULL;
  ATerm p_149 (ATerm t)
  {
    ATerm l_149 = NULL,m_149 = NULL;
    t = not_null(j_149);
    if(((l_149 != NULL) && (l_149 != t)))
      _fail(t);
    else
      l_149 = t;
    t = not_null(k_149);
    if(((m_149 != NULL) && (m_149 != t)))
      _fail(t);
    else
      m_149 = t;
    t = not_null(i_149);
    {
      ATerm p_60;
      p_60 = t;
      {
        ATerm n_149 = NULL;
        ATerm o_149 = NULL;
        ATerm q_149 (ATerm t)
        {
          t = not_null(o_149);
          if(((n_149 != NULL) && (n_149 != t)))
            _fail(t);
          else
            n_149 = t;
          t = not_null(o_149);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_149), not_null(m_149));
        {
          ATerm q_60 = t;
          int g_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              t = Tl_0_0(t);
              ;
              LocalPopChoice(g_61);
            }
          else
            {
              t = q_60;
              t = (ATerm) ATempty;
            }
          if(((o_149 != NULL) && (o_149 != t)))
            _fail(t);
          else
            o_149 = t;
          t = q_149(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(l_149), not_null(m_149), not_null(n_149));
        t = table_put_0_0(t);
      }
      t = p_60;
    }
    return(t);
  }
  if(((i_149 != NULL) && (i_149 != t)))
    _fail(t);
  else
    i_149 = t;
  t = not_null(i_149);
  if(match_cons(t, sym__2))
    {
      j_149 = ATgetArgument(t, 0);
      k_149 = ATgetArgument(t, 1);
      t = p_149(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1_0 (ATerm c_123 (ATerm), ATerm t)
{
  ATerm v_149 = NULL,w_149 = NULL,x_149 = NULL;
  ATerm h_61;
  h_61 = t;
  {
    ATerm y_149 = NULL;
    ATerm e_150 (ATerm t)
    {
      ATerm z_149 = NULL,a_150 = NULL,b_150 = NULL;
      ATerm f_150 (ATerm t)
      {
        t = not_null(a_150);
        if(((w_149 != NULL) && (w_149 != t)))
          _fail(t);
        else
          w_149 = t;
        t = not_null(b_150);
        if(((v_149 != NULL) && (v_149 != t)))
          _fail(t);
        else
          v_149 = t;
        t = (ATerm) ATmakeAppl(sym__3, not_null(x_149), term_g_60, not_null(v_149));
        t = table_put_0_0(t);
        t = not_null(w_149);
        {
          ATerm q_8 (ATerm t)
          {
            ATerm c_150 = NULL;
            ATerm g_150 (ATerm t)
            {
              ATerm d_150 = NULL;
              t = not_null(c_150);
              if(((d_150 != NULL) && (d_150 != t)))
                _fail(t);
              else
                d_150 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_149), not_null(d_150));
              t = table_pop_0_0(t);
              return(t);
            }
            if(((c_150 != NULL) && (c_150 != t)))
              _fail(t);
            else
              c_150 = t;
            t = g_150(t);
            return(t);
          }
          t = map_1_0(q_8, t);
        }
        return(t);
      }
      t = not_null(y_149);
      if(((x_149 != NULL) && (x_149 != t)))
        _fail(t);
      else
        x_149 = t;
      t = not_null(y_149);
      {
        ATerm p_61 = t;
        int q_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_149), term_g_60);
            t = table_get_0_0(t);
            ;
            LocalPopChoice(q_61);
          }
        else
          {
            t = p_61;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((z_149 != NULL) && (z_149 != t)))
          _fail(t);
        else
          z_149 = t;
        t = not_null(z_149);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_150 = ATgetFirst((ATermList) t);
            b_150 = (ATerm) ATgetNext((ATermList) t);
            t = f_150(t);
          }
        else
          {
            _fail(t);
          }
      }
      return(t);
    }
    t = c_123(t);
    if(((y_149 != NULL) && (y_149 != t)))
      _fail(t);
    else
      y_149 = t;
    t = e_150(t);
  }
  t = h_61;
  return(t);
}
ATerm restore_always_2_0 (ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm t)
{
  ATerm r_61 = t;
  int s_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_105(t);
      t = r_105(t);
      ;
      LocalPopChoice(s_61);
    }
  else
    {
      t = r_61;
      t = r_105(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm b_123 (ATerm), ATerm t)
{
  ATerm j_150 = NULL;
  ATerm t_61;
  t_61 = t;
  {
    ATerm k_150 = NULL;
    ATerm n_150 (ATerm t)
    {
      ATerm l_150 = NULL;
      t = not_null(k_150);
      if(((j_150 != NULL) && (j_150 != t)))
        _fail(t);
      else
        j_150 = t;
      t = not_null(k_150);
      {
        ATerm m_150 = NULL;
        ATerm o_150 (ATerm t)
        {
          t = not_null(m_150);
          if(((l_150 != NULL) && (l_150 != t)))
            _fail(t);
          else
            l_150 = t;
          t = not_null(m_150);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_150), term_g_60);
        {
          ATerm x_61 = t;
          int z_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(z_61);
            }
          else
            {
              t = x_61;
              t = (ATerm) ATempty;
            }
          if(((m_150 != NULL) && (m_150 != t)))
            _fail(t);
          else
            m_150 = t;
          t = o_150(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(j_150), term_g_60, (ATerm) ATinsert(CheckATermList(not_null(l_150)), (ATerm) ATempty));
        t = table_put_0_0(t);
      }
      return(t);
    }
    t = b_123(t);
    if(((k_150 != NULL) && (k_150 != t)))
      _fail(t);
    else
      k_150 = t;
    t = n_150(t);
  }
  t = t_61;
  return(t);
}
ATerm scope_2_0 (ATerm d_123 (ATerm), ATerm e_123 (ATerm), ATerm t)
{
  t = begin_scope_1_0(d_123, t);
  {
    ATerm r_8 (ATerm t)
    {
      t = end_scope_1_0(d_123, t);
      return(t);
    }
    t = restore_always_2_0(e_123, r_8, t);
  }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  ATerm s_8 (ATerm t)
  {
    t = term_a_60;
    return(t);
  }
  ATerm t_8 (ATerm t)
  {
    ATerm u_8 (ATerm t)
    {
      ATerm v_8 (ATerm t)
      {
        ATerm w_8 (ATerm t)
        {
          ATerm a_62 = t;
          int b_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_8 (ATerm t)
              {
                ATerm y_8 (ATerm t)
                {
                  t = try_1_0(DeclareVarToConst_0_0, t);
                  return(t);
                }
                t = map_1_0(y_8, t);
                return(t);
              }
              t = Constructors_1_0(x_8, t);
              ;
              LocalPopChoice(b_62);
            }
          else
            {
              t = a_62;
              {
                ATerm z_8 (ATerm t)
                {
                  ATerm a_9 (ATerm t)
                  {
                    t = try_1_0(DeclareVarToConst_0_0, t);
                    return(t);
                  }
                  t = map_1_0(a_9, t);
                  return(t);
                }
                t = Overlays_1_0(z_8, t);
              }
            }
          return(t);
        }
        t = try_1_0(w_8, t);
        return(t);
      }
      t = map_1_0(v_8, t);
      return(t);
    }
    t = Specification_1_0(u_8, t);
    t = alltd_1_0(VarToConst_0_0, t);
    return(t);
  }
  t = scope_2_0(s_8, t_8, t);
  return(t);
}
ATerm RulesToStrategies_0_0 (ATerm t)
{
  ATerm r_150 = NULL,s_150 = NULL;
  ATerm u_150 (ATerm t)
  {
    ATerm t_150 = NULL;
    t = not_null(s_150);
    if(((t_150 != NULL) && (t_150 != t)))
      _fail(t);
    else
      t_150 = t;
    t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(t_150));
    return(t);
  }
  if(((r_150 != NULL) && (r_150 != t)))
    _fail(t);
  else
    r_150 = t;
  t = not_null(r_150);
  if(match_cons(t, sym_Rules_1))
    {
      s_150 = ATgetArgument(t, 0);
      t = u_150(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm q_119 (ATerm), ATerm t)
{
  ATerm c_62 = t;
  int d_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(d_62);
    }
  else
    {
      t = c_62;
      {
        ATerm e_62 = t;
        int f_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_9 (ATerm t)
            {
              t = filter_1_0(q_119, t);
              return(t);
            }
            t = Cons_2_0(q_119, b_9, t);
            ;
            LocalPopChoice(f_62);
          }
        else
          {
            t = e_62;
            {
              ATerm x_150 = NULL,y_150 = NULL,z_150 = NULL;
              ATerm b_151 (ATerm t)
              {
                ATerm a_151 = NULL;
                t = not_null(z_150);
                if(((a_151 != NULL) && (a_151 != t)))
                  _fail(t);
                else
                  a_151 = t;
                t = not_null(a_151);
                t = filter_1_0(q_119, t);
                return(t);
              }
              if(((x_150 != NULL) && (x_150 != t)))
                _fail(t);
              else
                x_150 = t;
              t = not_null(x_150);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_150 = ATgetFirst((ATermList) t);
                  z_150 = (ATerm) ATgetNext((ATermList) t);
                  t = b_151(t);
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
ATerm GetConstructors_0_0 (ATerm t)
{
  ATerm h_151 = NULL,i_151 = NULL;
  ATerm p_151 (ATerm t)
  {
    ATerm j_151 = NULL,k_151 = NULL;
    t = not_null(i_151);
    if(((j_151 != NULL) && (j_151 != t)))
      _fail(t);
    else
      j_151 = t;
    t = not_null(h_151);
    {
      ATerm o_151 = NULL;
      ATerm r_151 (ATerm t)
      {
        t = not_null(o_151);
        if(((k_151 != NULL) && (k_151 != t)))
          _fail(t);
        else
          k_151 = t;
        t = not_null(o_151);
        return(t);
      }
      t = not_null(j_151);
      {
        ATerm c_9 (ATerm t)
        {
          ATerm l_151 = NULL,m_151 = NULL;
          ATerm q_151 (ATerm t)
          {
            ATerm n_151 = NULL;
            t = not_null(m_151);
            if(((n_151 != NULL) && (n_151 != t)))
              _fail(t);
            else
              n_151 = t;
            t = not_null(n_151);
            return(t);
          }
          if(((l_151 != NULL) && (l_151 != t)))
            _fail(t);
          else
            l_151 = t;
          t = not_null(l_151);
          if(match_cons(t, sym_Constructors_1))
            {
              m_151 = ATgetArgument(t, 0);
              t = q_151(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = filter_1_0(c_9, t);
        t = concat_0_0(t);
        if(((o_151 != NULL) && (o_151 != t)))
          _fail(t);
        else
          o_151 = t;
        t = r_151(t);
      }
      t = (ATerm) ATmakeAppl(sym_Constructors_1, not_null(k_151));
    }
    return(t);
  }
  if(((h_151 != NULL) && (h_151 != t)))
    _fail(t);
  else
    h_151 = t;
  t = not_null(h_151);
  if(match_cons(t, sym_Signature_1))
    {
      i_151 = ATgetArgument(t, 0);
      t = p_151(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InsertBSpec_0_0 (ATerm t)
{
  ATerm i_152 = NULL,j_152 = NULL,k_152 = NULL;
  ATerm m_153 (ATerm t)
  {
    ATerm l_152 = NULL,m_152 = NULL,n_152 = NULL,o_152 = NULL;
    t = not_null(j_152);
    if(((l_152 != NULL) && (l_152 != t)))
      _fail(t);
    else
      l_152 = t;
    t = not_null(k_152);
    if(((m_152 != NULL) && (m_152 != t)))
      _fail(t);
    else
      m_152 = t;
    t = not_null(i_152);
    {
      ATerm p_152 = NULL;
      ATerm n_153 (ATerm t)
      {
        ATerm q_152 = NULL,r_152 = NULL,s_152 = NULL,t_152 = NULL,u_152 = NULL,v_152 = NULL;
        ATerm o_153 (ATerm t)
        {
          t = not_null(s_152);
          if(((n_152 != NULL) && (n_152 != t)))
            _fail(t);
          else
            n_152 = t;
          t = not_null(u_152);
          if(((o_152 != NULL) && (o_152 != t)))
            _fail(t);
          else
            o_152 = t;
          t = not_null(r_152);
          return(t);
        }
        t = not_null(p_152);
        if(((q_152 != NULL) && (q_152 != t)))
          _fail(t);
        else
          q_152 = t;
        t = not_null(p_152);
        t = SSL_explode_term(not_null(q_152));
        if(((r_152 != NULL) && (r_152 != t)))
          _fail(t);
        else
          r_152 = t;
        t = not_null(r_152);
        if(match_cons(t, sym__2))
          {
            s_152 = ATgetArgument(t, 0);
            t_152 = ATgetArgument(t, 1);
            t = not_null(t_152);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_152 = ATgetFirst((ATermList) t);
                v_152 = (ATerm) ATgetNext((ATermList) t);
                t = not_null(v_152);
                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                  {
                    t = o_153(t);
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
      t = not_null(l_152);
      if(((p_152 != NULL) && (p_152 != t)))
        _fail(t);
      else
        p_152 = t;
      t = n_153(t);
      t = not_null(m_152);
      {
        ATerm d_9 (ATerm t)
        {
          ATerm w_152 = NULL;
          ATerm p_153 (ATerm t)
          {
            ATerm x_152 = NULL,y_152 = NULL,g_153 = NULL,i_153 = NULL,k_153 = NULL;
            ATerm u_153 (ATerm t)
            {
              ATerm l_153 = NULL;
              t = not_null(k_153);
              if(((l_153 != NULL) && (l_153 != t)))
                _fail(t);
              else
                l_153 = t;
              t = not_null(l_153);
              return(t);
            }
            t = not_null(w_152);
            if(((x_152 != NULL) && (x_152 != t)))
              _fail(t);
            else
              x_152 = t;
            t = not_null(w_152);
            {
              ATerm g_62;
              g_62 = t;
              {
                ATerm z_152 = NULL;
                ATerm q_153 (ATerm t)
                {
                  ATerm a_153 = NULL,b_153 = NULL,c_153 = NULL,d_153 = NULL,e_153 = NULL,f_153 = NULL;
                  ATerm r_153 (ATerm t)
                  {
                    t = not_null(c_153);
                    if(((n_152 != NULL) && (n_152 != t)))
                      _fail(t);
                    else
                      n_152 = t;
                    t = not_null(e_153);
                    if(((y_152 != NULL) && (y_152 != t)))
                      _fail(t);
                    else
                      y_152 = t;
                    t = not_null(b_153);
                    return(t);
                  }
                  t = not_null(z_152);
                  if(((a_153 != NULL) && (a_153 != t)))
                    _fail(t);
                  else
                    a_153 = t;
                  t = not_null(z_152);
                  t = SSL_explode_term(not_null(a_153));
                  if(((b_153 != NULL) && (b_153 != t)))
                    _fail(t);
                  else
                    b_153 = t;
                  t = not_null(b_153);
                  if(match_cons(t, sym__2))
                    {
                      c_153 = ATgetArgument(t, 0);
                      d_153 = ATgetArgument(t, 1);
                      t = not_null(d_153);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          e_153 = ATgetFirst((ATermList) t);
                          f_153 = (ATerm) ATgetNext((ATermList) t);
                          t = not_null(f_153);
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = r_153(t);
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
                t = not_null(x_152);
                if(((z_152 != NULL) && (z_152 != t)))
                  _fail(t);
                else
                  z_152 = t;
                t = q_153(t);
              }
              t = g_62;
              {
                ATerm i_62;
                i_62 = t;
                {
                  ATerm h_153 = NULL;
                  ATerm s_153 (ATerm t)
                  {
                    t = not_null(h_153);
                    if(((g_153 != NULL) && (g_153 != t)))
                      _fail(t);
                    else
                      g_153 = t;
                    t = not_null(h_153);
                    return(t);
                  }
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_152), not_null(o_152));
                  t = conc_0_0(t);
                  if(((h_153 != NULL) && (h_153 != t)))
                    _fail(t);
                  else
                    h_153 = t;
                  t = s_153(t);
                }
                t = i_62;
                {
                  ATerm y_62;
                  y_62 = t;
                  {
                    ATerm j_153 = NULL;
                    ATerm t_153 (ATerm t)
                    {
                      t = not_null(j_153);
                      if(((i_153 != NULL) && (i_153 != t)))
                        _fail(t);
                      else
                        i_153 = t;
                      t = not_null(j_153);
                      return(t);
                    }
                    t = (ATerm) ATinsert(ATempty, not_null(g_153));
                    if(((j_153 != NULL) && (j_153 != t)))
                      _fail(t);
                    else
                      j_153 = t;
                    t = t_153(t);
                  }
                  t = y_62;
                  t = SSL_mkterm(not_null(n_152), not_null(i_153));
                  if(((k_153 != NULL) && (k_153 != t)))
                    _fail(t);
                  else
                    k_153 = t;
                  t = u_153(t);
                }
              }
            }
            return(t);
          }
          if(((w_152 != NULL) && (w_152 != t)))
            _fail(t);
          else
            w_152 = t;
          t = p_153(t);
          return(t);
        }
        t = fetch_1_0(d_9, t);
      }
    }
    return(t);
  }
  if(((i_152 != NULL) && (i_152 != t)))
    _fail(t);
  else
    i_152 = t;
  t = not_null(i_152);
  if(match_cons(t, sym__2))
    {
      j_152 = ATgetArgument(t, 0);
      k_152 = ATgetArgument(t, 1);
      t = m_153(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm p_118 (ATerm), ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm t)
{
  ATerm z_62 = t;
  int a_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = p_118(t);
      ;
      LocalPopChoice(a_63);
    }
  else
    {
      t = z_62;
      {
        ATerm z_153 = NULL,a_154 = NULL,b_154 = NULL;
        ATerm i_154 (ATerm t)
        {
          ATerm c_154 = NULL,d_154 = NULL,e_154 = NULL,g_154 = NULL;
          t = not_null(a_154);
          if(((c_154 != NULL) && (c_154 != t)))
            _fail(t);
          else
            c_154 = t;
          t = not_null(b_154);
          if(((d_154 != NULL) && (d_154 != t)))
            _fail(t);
          else
            d_154 = t;
          t = not_null(z_153);
          {
            ATerm b_63;
            b_63 = t;
            {
              ATerm f_154 = NULL;
              ATerm j_154 (ATerm t)
              {
                t = not_null(f_154);
                if(((e_154 != NULL) && (e_154 != t)))
                  _fail(t);
                else
                  e_154 = t;
                t = not_null(f_154);
                return(t);
              }
              t = not_null(c_154);
              t = r_118(t);
              if(((f_154 != NULL) && (f_154 != t)))
                _fail(t);
              else
                f_154 = t;
              t = j_154(t);
            }
            t = b_63;
            {
              ATerm h_154 = NULL;
              ATerm k_154 (ATerm t)
              {
                t = not_null(h_154);
                if(((g_154 != NULL) && (g_154 != t)))
                  _fail(t);
                else
                  g_154 = t;
                t = not_null(h_154);
                return(t);
              }
              t = not_null(d_154);
              t = foldr_3_0(p_118, q_118, r_118, t);
              if(((h_154 != NULL) && (h_154 != t)))
                _fail(t);
              else
                h_154 = t;
              t = k_154(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_154), not_null(g_154));
              t = q_118(t);
            }
          }
          return(t);
        }
        if(((z_153 != NULL) && (z_153 != t)))
          _fail(t);
        else
          z_153 = t;
        t = not_null(z_153);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_154 = ATgetFirst((ATermList) t);
            b_154 = (ATerm) ATgetNext((ATermList) t);
            t = i_154(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm e_9 (ATerm t)
  {
    ATerm f_9 (ATerm t)
    {
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_63), term_d_63), term_c_63);
      return(t);
    }
    ATerm g_9 (ATerm t)
    {
      ATerm h_9 (ATerm t)
      {
        ATerm i_63 = t;
        int j_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = GetConstructors_0_0(t);
            ;
            LocalPopChoice(j_63);
          }
        else
          {
            t = i_63;
            t = RulesToStrategies_0_0(t);
          }
        return(t);
      }
      t = try_1_0(h_9, t);
      return(t);
    }
    t = foldr_3_0(f_9, InsertBSpec_0_0, g_9, t);
    return(t);
  }
  t = Specification_1_0(e_9, t);
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  t = CombineSections_0_0(t);
  {
    ATerm i_9 (ATerm t)
    {
      t = try_1_0(HL_0_0, t);
      return(t);
    }
    t = topdown_1_0(i_9, t);
    t = vars_to_consts_0_0(t);
    t = define_lrules_0_0(t);
    t = LiftDynamicRules_0_0(t);
    {
      ATerm j_9 (ATerm t)
      {
        t = try_1_0(HL_0_0, t);
        return(t);
      }
      t = topdown_1_0(j_9, t);
      {
        ATerm k_9 (ATerm t)
        {
          ATerm l_9 (ATerm t)
          {
            ATerm n_154 = NULL,o_154 = NULL;
            ATerm q_154 (ATerm t)
            {
              ATerm p_154 = NULL;
              t = not_null(o_154);
              if(((p_154 != NULL) && (p_154 != t)))
                _fail(t);
              else
                p_154 = t;
              t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(p_154))));
              return(t);
            }
            if(((n_154 != NULL) && (n_154 != t)))
              _fail(t);
            else
              n_154 = t;
            t = not_null(n_154);
            if(match_cons(t, sym_Constructors_1))
              {
                o_154 = ATgetArgument(t, 0);
                t = q_154(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(l_9, t);
          return(t);
        }
        t = Specification_1_0(k_9, t);
      }
    }
  }
  return(t);
}
ATerm RemoveLeadingPrime_0_0 (ATerm t)
{
  ATerm w_154 = NULL;
  ATerm e_155 (ATerm t)
  {
    ATerm x_154 = NULL,y_154 = NULL,z_154 = NULL;
    t = not_null(w_154);
    if(((x_154 != NULL) && (x_154 != t)))
      _fail(t);
    else
      x_154 = t;
    t = not_null(w_154);
    {
      ATerm a_155 = NULL,b_155 = NULL,c_155 = NULL;
      ATerm f_155 (ATerm t)
      {
        ATerm d_155 = NULL;
        ATerm g_155 (ATerm t)
        {
          t = not_null(d_155);
          if(((z_154 != NULL) && (z_154 != t)))
            _fail(t);
          else
            z_154 = t;
          t = not_null(d_155);
          return(t);
        }
        t = not_null(c_155);
        if(((y_154 != NULL) && (y_154 != t)))
          _fail(t);
        else
          y_154 = t;
        t = not_null(y_154);
        t = implode_string_0_0(t);
        if(((d_155 != NULL) && (d_155 != t)))
          _fail(t);
        else
          d_155 = t;
        t = g_155(t);
        return(t);
      }
      t = not_null(x_154);
      t = explode_string_0_0(t);
      if(((a_155 != NULL) && (a_155 != t)))
        _fail(t);
      else
        a_155 = t;
      t = not_null(a_155);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_155 = ATgetFirst((ATermList) t);
          c_155 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(b_155);
          if(match_int(t, 39))
            {
              t = f_155(t);
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
      t = not_null(z_154);
    }
    return(t);
  }
  if(((w_154 != NULL) && (w_154 != t)))
    _fail(t);
  else
    w_154 = t;
  t = e_155(t);
  return(t);
}
ATerm Op_2_0 (ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm t)
{
  ATerm n_155 = NULL,o_155 = NULL,p_155 = NULL;
  ATerm b_156 (ATerm t)
  {
    ATerm q_155 = NULL,r_155 = NULL,s_155 = NULL,t_155 = NULL,v_155 = NULL;
    ATerm d_156 (ATerm t)
    {
      ATerm w_155 = NULL,x_155 = NULL;
      ATerm e_156 (ATerm t)
      {
        ATerm y_155 = NULL,z_155 = NULL;
        t = not_null(x_155);
        if(((y_155 != NULL) && (y_155 != t)))
          _fail(t);
        else
          y_155 = t;
        t = not_null(x_155);
        {
          ATerm a_156 = NULL;
          ATerm f_156 (ATerm t)
          {
            t = not_null(a_156);
            if(((z_155 != NULL) && (z_155 != t)))
              _fail(t);
            else
              z_155 = t;
            t = not_null(a_156);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(w_155), not_null(y_155)), not_null(t_155));
          if(((a_156 != NULL) && (a_156 != t)))
            _fail(t);
          else
            a_156 = t;
          t = f_156(t);
          t = not_null(z_155);
        }
        return(t);
      }
      t = not_null(v_155);
      if(((w_155 != NULL) && (w_155 != t)))
        _fail(t);
      else
        w_155 = t;
      t = not_null(s_155);
      t = m_92(t);
      if(((x_155 != NULL) && (x_155 != t)))
        _fail(t);
      else
        x_155 = t;
      t = e_156(t);
      return(t);
    }
    t = not_null(n_155);
    if(((q_155 != NULL) && (q_155 != t)))
      _fail(t);
    else
      q_155 = t;
    t = not_null(o_155);
    if(((r_155 != NULL) && (r_155 != t)))
      _fail(t);
    else
      r_155 = t;
    t = not_null(p_155);
    if(((s_155 != NULL) && (s_155 != t)))
      _fail(t);
    else
      s_155 = t;
    t = not_null(n_155);
    {
      ATerm u_155 = NULL;
      ATerm c_156 (ATerm t)
      {
        t = not_null(u_155);
        if(((t_155 != NULL) && (t_155 != t)))
          _fail(t);
        else
          t_155 = t;
        t = not_null(u_155);
        return(t);
      }
      t = SSLgetAnnotations(not_null(q_155));
      if(((u_155 != NULL) && (u_155 != t)))
        _fail(t);
      else
        u_155 = t;
      t = c_156(t);
      t = not_null(r_155);
      t = l_92(t);
      if(((v_155 != NULL) && (v_155 != t)))
        _fail(t);
      else
        v_155 = t;
      t = d_156(t);
    }
    return(t);
  }
  if(((n_155 != NULL) && (n_155 != t)))
    _fail(t);
  else
    n_155 = t;
  t = not_null(n_155);
  if(match_cons(t, sym_Op_2))
    {
      o_155 = ATgetArgument(t, 0);
      p_155 = ATgetArgument(t, 1);
      t = b_156(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm OpDecl_2_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm t)
{
  ATerm m_156 = NULL,n_156 = NULL,o_156 = NULL;
  ATerm a_157 (ATerm t)
  {
    ATerm p_156 = NULL,q_156 = NULL,r_156 = NULL,s_156 = NULL,u_156 = NULL;
    ATerm c_157 (ATerm t)
    {
      ATerm v_156 = NULL,w_156 = NULL;
      ATerm d_157 (ATerm t)
      {
        ATerm x_156 = NULL,y_156 = NULL;
        t = not_null(w_156);
        if(((x_156 != NULL) && (x_156 != t)))
          _fail(t);
        else
          x_156 = t;
        t = not_null(w_156);
        {
          ATerm z_156 = NULL;
          ATerm e_157 (ATerm t)
          {
            t = not_null(z_156);
            if(((y_156 != NULL) && (y_156 != t)))
              _fail(t);
            else
              y_156 = t;
            t = not_null(z_156);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, not_null(v_156), not_null(x_156)), not_null(s_156));
          if(((z_156 != NULL) && (z_156 != t)))
            _fail(t);
          else
            z_156 = t;
          t = e_157(t);
          t = not_null(y_156);
        }
        return(t);
      }
      t = not_null(u_156);
      if(((v_156 != NULL) && (v_156 != t)))
        _fail(t);
      else
        v_156 = t;
      t = not_null(r_156);
      t = v_91(t);
      if(((w_156 != NULL) && (w_156 != t)))
        _fail(t);
      else
        w_156 = t;
      t = d_157(t);
      return(t);
    }
    t = not_null(m_156);
    if(((p_156 != NULL) && (p_156 != t)))
      _fail(t);
    else
      p_156 = t;
    t = not_null(n_156);
    if(((q_156 != NULL) && (q_156 != t)))
      _fail(t);
    else
      q_156 = t;
    t = not_null(o_156);
    if(((r_156 != NULL) && (r_156 != t)))
      _fail(t);
    else
      r_156 = t;
    t = not_null(m_156);
    {
      ATerm t_156 = NULL;
      ATerm b_157 (ATerm t)
      {
        t = not_null(t_156);
        if(((s_156 != NULL) && (s_156 != t)))
          _fail(t);
        else
          s_156 = t;
        t = not_null(t_156);
        return(t);
      }
      t = SSLgetAnnotations(not_null(p_156));
      if(((t_156 != NULL) && (t_156 != t)))
        _fail(t);
      else
        t_156 = t;
      t = b_157(t);
      t = not_null(q_156);
      t = u_91(t);
      if(((u_156 != NULL) && (u_156 != t)))
        _fail(t);
      else
        u_156 = t;
      t = c_157(t);
    }
    return(t);
  }
  if(((m_156 != NULL) && (m_156 != t)))
    _fail(t);
  else
    m_156 = t;
  t = not_null(m_156);
  if(match_cons(t, sym_OpDecl_2))
    {
      n_156 = ATgetArgument(t, 0);
      o_156 = ATgetArgument(t, 1);
      t = a_157(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1_0 (ATerm o_95 (ATerm), ATerm t)
{
  ATerm k_157 = NULL,l_157 = NULL;
  ATerm u_157 (ATerm t)
  {
    ATerm m_157 = NULL,n_157 = NULL,o_157 = NULL,q_157 = NULL;
    ATerm w_157 (ATerm t)
    {
      ATerm r_157 = NULL,s_157 = NULL;
      t = not_null(q_157);
      if(((r_157 != NULL) && (r_157 != t)))
        _fail(t);
      else
        r_157 = t;
      t = not_null(q_157);
      {
        ATerm t_157 = NULL;
        ATerm x_157 (ATerm t)
        {
          t = not_null(t_157);
          if(((s_157 != NULL) && (s_157 != t)))
            _fail(t);
          else
            s_157 = t;
          t = not_null(t_157);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(r_157)), not_null(o_157));
        if(((t_157 != NULL) && (t_157 != t)))
          _fail(t);
        else
          t_157 = t;
        t = x_157(t);
        t = not_null(s_157);
      }
      return(t);
    }
    t = not_null(k_157);
    if(((m_157 != NULL) && (m_157 != t)))
      _fail(t);
    else
      m_157 = t;
    t = not_null(l_157);
    if(((n_157 != NULL) && (n_157 != t)))
      _fail(t);
    else
      n_157 = t;
    t = not_null(k_157);
    {
      ATerm p_157 = NULL;
      ATerm v_157 (ATerm t)
      {
        t = not_null(p_157);
        if(((o_157 != NULL) && (o_157 != t)))
          _fail(t);
        else
          o_157 = t;
        t = not_null(p_157);
        return(t);
      }
      t = SSLgetAnnotations(not_null(m_157));
      if(((p_157 != NULL) && (p_157 != t)))
        _fail(t);
      else
        p_157 = t;
      t = v_157(t);
      t = not_null(n_157);
      t = o_95(t);
      if(((q_157 != NULL) && (q_157 != t)))
        _fail(t);
      else
        q_157 = t;
      t = w_157(t);
    }
    return(t);
  }
  if(((k_157 != NULL) && (k_157 != t)))
    _fail(t);
  else
    k_157 = t;
  t = not_null(k_157);
  if(match_cons(t, sym_SVar_1))
    {
      l_157 = ATgetArgument(t, 0);
      t = u_157(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm l_158 = NULL,m_158 = NULL;
  ATerm l_159 (ATerm t)
  {
    ATerm n_158 = NULL,o_158 = NULL,p_158 = NULL,r_158 = NULL;
    ATerm p_159 (ATerm t)
    {
      ATerm s_158 = NULL,t_158 = NULL;
      t = not_null(r_158);
      if(((s_158 != NULL) && (s_158 != t)))
        _fail(t);
      else
        s_158 = t;
      t = not_null(r_158);
      {
        ATerm u_158 = NULL;
        ATerm q_159 (ATerm t)
        {
          t = not_null(u_158);
          if(((t_158 != NULL) && (t_158 != t)))
            _fail(t);
          else
            t_158 = t;
          t = not_null(u_158);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(s_158)), not_null(p_158));
        if(((u_158 != NULL) && (u_158 != t)))
          _fail(t);
        else
          u_158 = t;
        t = q_159(t);
        t = not_null(t_158);
      }
      return(t);
    }
    t = not_null(l_158);
    if(((n_158 != NULL) && (n_158 != t)))
      _fail(t);
    else
      n_158 = t;
    t = not_null(m_158);
    if(((o_158 != NULL) && (o_158 != t)))
      _fail(t);
    else
      o_158 = t;
    t = not_null(l_158);
    {
      ATerm q_158 = NULL;
      ATerm o_159 (ATerm t)
      {
        t = not_null(q_158);
        if(((p_158 != NULL) && (p_158 != t)))
          _fail(t);
        else
          p_158 = t;
        t = not_null(q_158);
        return(t);
      }
      t = SSLgetAnnotations(not_null(n_158));
      if(((q_158 != NULL) && (q_158 != t)))
        _fail(t);
      else
        q_158 = t;
      t = o_159(t);
      t = not_null(o_158);
      t = p_0(t);
      if(((r_158 != NULL) && (r_158 != t)))
        _fail(t);
      else
        r_158 = t;
      t = p_159(t);
    }
    return(t);
  }
  ATerm m_159 (ATerm t)
  {
    ATerm v_158 = NULL,w_158 = NULL,x_158 = NULL,z_158 = NULL;
    ATerm s_159 (ATerm t)
    {
      ATerm a_159 = NULL,b_159 = NULL;
      t = not_null(z_158);
      if(((a_159 != NULL) && (a_159 != t)))
        _fail(t);
      else
        a_159 = t;
      t = not_null(z_158);
      {
        ATerm c_159 = NULL;
        ATerm t_159 (ATerm t)
        {
          t = not_null(c_159);
          if(((b_159 != NULL) && (b_159 != t)))
            _fail(t);
          else
            b_159 = t;
          t = not_null(c_159);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(a_159)), not_null(x_158));
        if(((c_159 != NULL) && (c_159 != t)))
          _fail(t);
        else
          c_159 = t;
        t = t_159(t);
        t = not_null(b_159);
      }
      return(t);
    }
    t = not_null(l_158);
    if(((v_158 != NULL) && (v_158 != t)))
      _fail(t);
    else
      v_158 = t;
    t = not_null(m_158);
    if(((w_158 != NULL) && (w_158 != t)))
      _fail(t);
    else
      w_158 = t;
    t = not_null(l_158);
    {
      ATerm y_158 = NULL;
      ATerm r_159 (ATerm t)
      {
        t = not_null(y_158);
        if(((x_158 != NULL) && (x_158 != t)))
          _fail(t);
        else
          x_158 = t;
        t = not_null(y_158);
        return(t);
      }
      t = SSLgetAnnotations(not_null(v_158));
      if(((y_158 != NULL) && (y_158 != t)))
        _fail(t);
      else
        y_158 = t;
      t = r_159(t);
      t = not_null(w_158);
      t = p_0(t);
      if(((z_158 != NULL) && (z_158 != t)))
        _fail(t);
      else
        z_158 = t;
      t = s_159(t);
    }
    return(t);
  }
  ATerm n_159 (ATerm t)
  {
    ATerm d_159 = NULL,e_159 = NULL,f_159 = NULL,h_159 = NULL;
    ATerm v_159 (ATerm t)
    {
      ATerm i_159 = NULL,j_159 = NULL;
      t = not_null(h_159);
      if(((i_159 != NULL) && (i_159 != t)))
        _fail(t);
      else
        i_159 = t;
      t = not_null(h_159);
      {
        ATerm k_159 = NULL;
        ATerm w_159 (ATerm t)
        {
          t = not_null(k_159);
          if(((j_159 != NULL) && (j_159 != t)))
            _fail(t);
          else
            j_159 = t;
          t = not_null(k_159);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(i_159)), not_null(f_159));
        if(((k_159 != NULL) && (k_159 != t)))
          _fail(t);
        else
          k_159 = t;
        t = w_159(t);
        t = not_null(j_159);
      }
      return(t);
    }
    t = not_null(l_158);
    if(((d_159 != NULL) && (d_159 != t)))
      _fail(t);
    else
      d_159 = t;
    t = not_null(m_158);
    if(((e_159 != NULL) && (e_159 != t)))
      _fail(t);
    else
      e_159 = t;
    t = not_null(l_158);
    {
      ATerm g_159 = NULL;
      ATerm u_159 (ATerm t)
      {
        t = not_null(g_159);
        if(((f_159 != NULL) && (f_159 != t)))
          _fail(t);
        else
          f_159 = t;
        t = not_null(g_159);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_159));
      if(((g_159 != NULL) && (g_159 != t)))
        _fail(t);
      else
        g_159 = t;
      t = u_159(t);
      t = not_null(e_159);
      t = p_0(t);
      if(((h_159 != NULL) && (h_159 != t)))
        _fail(t);
      else
        h_159 = t;
      t = v_159(t);
    }
    return(t);
  }
  if(((l_158 != NULL) && (l_158 != t)))
    _fail(t);
  else
    l_158 = t;
  t = not_null(l_158);
  if(match_cons(t, sym_Var_1))
    {
      m_158 = ATgetArgument(t, 0);
      {
        ATerm k_63 = t;
        int l_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_159(t);
            ;
            LocalPopChoice(l_63);
          }
        else
          {
            t = k_63;
            {
              ATerm m_63 = t;
              int n_63 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_159(t);
                  ;
                  LocalPopChoice(n_63);
                }
              else
                {
                  t = m_63;
                  t = n_159(t);
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
ATerm VarDec_2_0 (ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm t)
{
  ATerm d_160 = NULL,e_160 = NULL,f_160 = NULL;
  ATerm r_160 (ATerm t)
  {
    ATerm g_160 = NULL,h_160 = NULL,i_160 = NULL,j_160 = NULL,l_160 = NULL;
    ATerm t_160 (ATerm t)
    {
      ATerm m_160 = NULL,n_160 = NULL;
      ATerm u_160 (ATerm t)
      {
        ATerm o_160 = NULL,p_160 = NULL;
        t = not_null(n_160);
        if(((o_160 != NULL) && (o_160 != t)))
          _fail(t);
        else
          o_160 = t;
        t = not_null(n_160);
        {
          ATerm q_160 = NULL;
          ATerm v_160 (ATerm t)
          {
            t = not_null(q_160);
            if(((p_160 != NULL) && (p_160 != t)))
              _fail(t);
            else
              p_160 = t;
            t = not_null(q_160);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(m_160), not_null(o_160)), not_null(j_160));
          if(((q_160 != NULL) && (q_160 != t)))
            _fail(t);
          else
            q_160 = t;
          t = v_160(t);
          t = not_null(p_160);
        }
        return(t);
      }
      t = not_null(l_160);
      if(((m_160 != NULL) && (m_160 != t)))
        _fail(t);
      else
        m_160 = t;
      t = not_null(i_160);
      t = b_98(t);
      if(((n_160 != NULL) && (n_160 != t)))
        _fail(t);
      else
        n_160 = t;
      t = u_160(t);
      return(t);
    }
    t = not_null(d_160);
    if(((g_160 != NULL) && (g_160 != t)))
      _fail(t);
    else
      g_160 = t;
    t = not_null(e_160);
    if(((h_160 != NULL) && (h_160 != t)))
      _fail(t);
    else
      h_160 = t;
    t = not_null(f_160);
    if(((i_160 != NULL) && (i_160 != t)))
      _fail(t);
    else
      i_160 = t;
    t = not_null(d_160);
    {
      ATerm k_160 = NULL;
      ATerm s_160 (ATerm t)
      {
        t = not_null(k_160);
        if(((j_160 != NULL) && (j_160 != t)))
          _fail(t);
        else
          j_160 = t;
        t = not_null(k_160);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_160));
      if(((k_160 != NULL) && (k_160 != t)))
        _fail(t);
      else
        k_160 = t;
      t = s_160(t);
      t = not_null(h_160);
      t = a_98(t);
      if(((l_160 != NULL) && (l_160 != t)))
        _fail(t);
      else
        l_160 = t;
      t = t_160(t);
    }
    return(t);
  }
  if(((d_160 != NULL) && (d_160 != t)))
    _fail(t);
  else
    d_160 = t;
  t = not_null(d_160);
  if(match_cons(t, sym_VarDec_2))
    {
      e_160 = ATgetArgument(t, 0);
      f_160 = ATgetArgument(t, 1);
      t = r_160(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_3_0 (ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm t)
{
  ATerm d_161 = NULL,e_161 = NULL,f_161 = NULL,g_161 = NULL;
  ATerm v_161 (ATerm t)
  {
    ATerm h_161 = NULL,i_161 = NULL,j_161 = NULL,k_161 = NULL,l_161 = NULL,n_161 = NULL;
    ATerm x_161 (ATerm t)
    {
      ATerm o_161 = NULL,p_161 = NULL;
      ATerm y_161 (ATerm t)
      {
        ATerm q_161 = NULL,r_161 = NULL;
        ATerm z_161 (ATerm t)
        {
          ATerm s_161 = NULL,t_161 = NULL;
          t = not_null(r_161);
          if(((s_161 != NULL) && (s_161 != t)))
            _fail(t);
          else
            s_161 = t;
          t = not_null(r_161);
          {
            ATerm u_161 = NULL;
            ATerm a_162 (ATerm t)
            {
              t = not_null(u_161);
              if(((t_161 != NULL) && (t_161 != t)))
                _fail(t);
              else
                t_161 = t;
              t = not_null(u_161);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(o_161), not_null(q_161), not_null(s_161)), not_null(l_161));
            if(((u_161 != NULL) && (u_161 != t)))
              _fail(t);
            else
              u_161 = t;
            t = a_162(t);
            t = not_null(t_161);
          }
          return(t);
        }
        t = not_null(p_161);
        if(((q_161 != NULL) && (q_161 != t)))
          _fail(t);
        else
          q_161 = t;
        t = not_null(k_161);
        t = g_98(t);
        if(((r_161 != NULL) && (r_161 != t)))
          _fail(t);
        else
          r_161 = t;
        t = z_161(t);
        return(t);
      }
      t = not_null(n_161);
      if(((o_161 != NULL) && (o_161 != t)))
        _fail(t);
      else
        o_161 = t;
      t = not_null(j_161);
      t = f_98(t);
      if(((p_161 != NULL) && (p_161 != t)))
        _fail(t);
      else
        p_161 = t;
      t = y_161(t);
      return(t);
    }
    t = not_null(d_161);
    if(((h_161 != NULL) && (h_161 != t)))
      _fail(t);
    else
      h_161 = t;
    t = not_null(e_161);
    if(((i_161 != NULL) && (i_161 != t)))
      _fail(t);
    else
      i_161 = t;
    t = not_null(f_161);
    if(((j_161 != NULL) && (j_161 != t)))
      _fail(t);
    else
      j_161 = t;
    t = not_null(g_161);
    if(((k_161 != NULL) && (k_161 != t)))
      _fail(t);
    else
      k_161 = t;
    t = not_null(d_161);
    {
      ATerm m_161 = NULL;
      ATerm w_161 (ATerm t)
      {
        t = not_null(m_161);
        if(((l_161 != NULL) && (l_161 != t)))
          _fail(t);
        else
          l_161 = t;
        t = not_null(m_161);
        return(t);
      }
      t = SSLgetAnnotations(not_null(h_161));
      if(((m_161 != NULL) && (m_161 != t)))
        _fail(t);
      else
        m_161 = t;
      t = w_161(t);
      t = not_null(i_161);
      t = e_98(t);
      if(((n_161 != NULL) && (n_161 != t)))
        _fail(t);
      else
        n_161 = t;
      t = x_161(t);
    }
    return(t);
  }
  if(((d_161 != NULL) && (d_161 != t)))
    _fail(t);
  else
    d_161 = t;
  t = not_null(d_161);
  if(match_cons(t, sym_SDef_3))
    {
      e_161 = ATgetArgument(t, 0);
      f_161 = ATgetArgument(t, 1);
      g_161 = ATgetArgument(t, 2);
      t = v_161(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm h_98 (ATerm), ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm t)
{
  ATerm j_162 = NULL,k_162 = NULL,l_162 = NULL,m_162 = NULL,n_162 = NULL;
  ATerm f_163 (ATerm t)
  {
    ATerm o_162 = NULL,p_162 = NULL,q_162 = NULL,r_162 = NULL,s_162 = NULL,t_162 = NULL,v_162 = NULL;
    ATerm h_163 (ATerm t)
    {
      ATerm w_162 = NULL,x_162 = NULL;
      ATerm i_163 (ATerm t)
      {
        ATerm y_162 = NULL,z_162 = NULL;
        ATerm j_163 (ATerm t)
        {
          ATerm a_163 = NULL,b_163 = NULL;
          ATerm k_163 (ATerm t)
          {
            ATerm c_163 = NULL,d_163 = NULL;
            t = not_null(b_163);
            if(((c_163 != NULL) && (c_163 != t)))
              _fail(t);
            else
              c_163 = t;
            t = not_null(b_163);
            {
              ATerm e_163 = NULL;
              ATerm l_163 (ATerm t)
              {
                t = not_null(e_163);
                if(((d_163 != NULL) && (d_163 != t)))
                  _fail(t);
                else
                  d_163 = t;
                t = not_null(e_163);
                return(t);
              }
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(w_162), not_null(y_162), not_null(a_163), not_null(c_163)), not_null(t_162));
              if(((e_163 != NULL) && (e_163 != t)))
                _fail(t);
              else
                e_163 = t;
              t = l_163(t);
              t = not_null(d_163);
            }
            return(t);
          }
          t = not_null(z_162);
          if(((a_163 != NULL) && (a_163 != t)))
            _fail(t);
          else
            a_163 = t;
          t = not_null(s_162);
          t = k_98(t);
          if(((b_163 != NULL) && (b_163 != t)))
            _fail(t);
          else
            b_163 = t;
          t = k_163(t);
          return(t);
        }
        t = not_null(x_162);
        if(((y_162 != NULL) && (y_162 != t)))
          _fail(t);
        else
          y_162 = t;
        t = not_null(r_162);
        t = j_98(t);
        if(((z_162 != NULL) && (z_162 != t)))
          _fail(t);
        else
          z_162 = t;
        t = j_163(t);
        return(t);
      }
      t = not_null(v_162);
      if(((w_162 != NULL) && (w_162 != t)))
        _fail(t);
      else
        w_162 = t;
      t = not_null(q_162);
      t = i_98(t);
      if(((x_162 != NULL) && (x_162 != t)))
        _fail(t);
      else
        x_162 = t;
      t = i_163(t);
      return(t);
    }
    t = not_null(j_162);
    if(((o_162 != NULL) && (o_162 != t)))
      _fail(t);
    else
      o_162 = t;
    t = not_null(k_162);
    if(((p_162 != NULL) && (p_162 != t)))
      _fail(t);
    else
      p_162 = t;
    t = not_null(l_162);
    if(((q_162 != NULL) && (q_162 != t)))
      _fail(t);
    else
      q_162 = t;
    t = not_null(m_162);
    if(((r_162 != NULL) && (r_162 != t)))
      _fail(t);
    else
      r_162 = t;
    t = not_null(n_162);
    if(((s_162 != NULL) && (s_162 != t)))
      _fail(t);
    else
      s_162 = t;
    t = not_null(j_162);
    {
      ATerm u_162 = NULL;
      ATerm g_163 (ATerm t)
      {
        t = not_null(u_162);
        if(((t_162 != NULL) && (t_162 != t)))
          _fail(t);
        else
          t_162 = t;
        t = not_null(u_162);
        return(t);
      }
      t = SSLgetAnnotations(not_null(o_162));
      if(((u_162 != NULL) && (u_162 != t)))
        _fail(t);
      else
        u_162 = t;
      t = g_163(t);
      t = not_null(p_162);
      t = h_98(t);
      if(((v_162 != NULL) && (v_162 != t)))
        _fail(t);
      else
        v_162 = t;
      t = h_163(t);
    }
    return(t);
  }
  if(((j_162 != NULL) && (j_162 != t)))
    _fail(t);
  else
    j_162 = t;
  t = not_null(j_162);
  if(match_cons(t, sym_SDefT_4))
    {
      k_162 = ATgetArgument(t, 0);
      l_162 = ATgetArgument(t, 1);
      m_162 = ATgetArgument(t, 2);
      n_162 = ATgetArgument(t, 3);
      t = f_163(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RDef_3_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm t)
{
  ATerm t_163 = NULL,u_163 = NULL,v_163 = NULL,w_163 = NULL;
  ATerm l_164 (ATerm t)
  {
    ATerm x_163 = NULL,y_163 = NULL,z_163 = NULL,a_164 = NULL,b_164 = NULL,d_164 = NULL;
    ATerm n_164 (ATerm t)
    {
      ATerm e_164 = NULL,f_164 = NULL;
      ATerm o_164 (ATerm t)
      {
        ATerm g_164 = NULL,h_164 = NULL;
        ATerm p_164 (ATerm t)
        {
          ATerm i_164 = NULL,j_164 = NULL;
          t = not_null(h_164);
          if(((i_164 != NULL) && (i_164 != t)))
            _fail(t);
          else
            i_164 = t;
          t = not_null(h_164);
          {
            ATerm k_164 = NULL;
            ATerm q_164 (ATerm t)
            {
              t = not_null(k_164);
              if(((j_164 != NULL) && (j_164 != t)))
                _fail(t);
              else
                j_164 = t;
              t = not_null(k_164);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, not_null(e_164), not_null(g_164), not_null(i_164)), not_null(b_164));
            if(((k_164 != NULL) && (k_164 != t)))
              _fail(t);
            else
              k_164 = t;
            t = q_164(t);
            t = not_null(j_164);
          }
          return(t);
        }
        t = not_null(f_164);
        if(((g_164 != NULL) && (g_164 != t)))
          _fail(t);
        else
          g_164 = t;
        t = not_null(a_164);
        t = m_94(t);
        if(((h_164 != NULL) && (h_164 != t)))
          _fail(t);
        else
          h_164 = t;
        t = p_164(t);
        return(t);
      }
      t = not_null(d_164);
      if(((e_164 != NULL) && (e_164 != t)))
        _fail(t);
      else
        e_164 = t;
      t = not_null(z_163);
      t = l_94(t);
      if(((f_164 != NULL) && (f_164 != t)))
        _fail(t);
      else
        f_164 = t;
      t = o_164(t);
      return(t);
    }
    t = not_null(t_163);
    if(((x_163 != NULL) && (x_163 != t)))
      _fail(t);
    else
      x_163 = t;
    t = not_null(u_163);
    if(((y_163 != NULL) && (y_163 != t)))
      _fail(t);
    else
      y_163 = t;
    t = not_null(v_163);
    if(((z_163 != NULL) && (z_163 != t)))
      _fail(t);
    else
      z_163 = t;
    t = not_null(w_163);
    if(((a_164 != NULL) && (a_164 != t)))
      _fail(t);
    else
      a_164 = t;
    t = not_null(t_163);
    {
      ATerm c_164 = NULL;
      ATerm m_164 (ATerm t)
      {
        t = not_null(c_164);
        if(((b_164 != NULL) && (b_164 != t)))
          _fail(t);
        else
          b_164 = t;
        t = not_null(c_164);
        return(t);
      }
      t = SSLgetAnnotations(not_null(x_163));
      if(((c_164 != NULL) && (c_164 != t)))
        _fail(t);
      else
        c_164 = t;
      t = m_164(t);
      t = not_null(y_163);
      t = k_94(t);
      if(((d_164 != NULL) && (d_164 != t)))
        _fail(t);
      else
        d_164 = t;
      t = n_164(t);
    }
    return(t);
  }
  if(((t_163 != NULL) && (t_163 != t)))
    _fail(t);
  else
    t_163 = t;
  t = not_null(t_163);
  if(match_cons(t, sym_RDef_3))
    {
      u_163 = ATgetArgument(t, 0);
      v_163 = ATgetArgument(t, 1);
      w_163 = ATgetArgument(t, 2);
      t = l_164(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RDefT_4_0 (ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm q_94 (ATerm), ATerm t)
{
  ATerm z_164 = NULL,a_165 = NULL,b_165 = NULL,c_165 = NULL,d_165 = NULL;
  ATerm v_165 (ATerm t)
  {
    ATerm e_165 = NULL,f_165 = NULL,g_165 = NULL,h_165 = NULL,i_165 = NULL,j_165 = NULL,l_165 = NULL;
    ATerm x_165 (ATerm t)
    {
      ATerm m_165 = NULL,n_165 = NULL;
      ATerm y_165 (ATerm t)
      {
        ATerm o_165 = NULL,p_165 = NULL;
        ATerm z_165 (ATerm t)
        {
          ATerm q_165 = NULL,r_165 = NULL;
          ATerm a_166 (ATerm t)
          {
            ATerm s_165 = NULL,t_165 = NULL;
            t = not_null(r_165);
            if(((s_165 != NULL) && (s_165 != t)))
              _fail(t);
            else
              s_165 = t;
            t = not_null(r_165);
            {
              ATerm u_165 = NULL;
              ATerm b_166 (ATerm t)
              {
                t = not_null(u_165);
                if(((t_165 != NULL) && (t_165 != t)))
                  _fail(t);
                else
                  t_165 = t;
                t = not_null(u_165);
                return(t);
              }
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, not_null(m_165), not_null(o_165), not_null(q_165), not_null(s_165)), not_null(j_165));
              if(((u_165 != NULL) && (u_165 != t)))
                _fail(t);
              else
                u_165 = t;
              t = b_166(t);
              t = not_null(t_165);
            }
            return(t);
          }
          t = not_null(p_165);
          if(((q_165 != NULL) && (q_165 != t)))
            _fail(t);
          else
            q_165 = t;
          t = not_null(i_165);
          t = q_94(t);
          if(((r_165 != NULL) && (r_165 != t)))
            _fail(t);
          else
            r_165 = t;
          t = a_166(t);
          return(t);
        }
        t = not_null(n_165);
        if(((o_165 != NULL) && (o_165 != t)))
          _fail(t);
        else
          o_165 = t;
        t = not_null(h_165);
        t = p_94(t);
        if(((p_165 != NULL) && (p_165 != t)))
          _fail(t);
        else
          p_165 = t;
        t = z_165(t);
        return(t);
      }
      t = not_null(l_165);
      if(((m_165 != NULL) && (m_165 != t)))
        _fail(t);
      else
        m_165 = t;
      t = not_null(g_165);
      t = o_94(t);
      if(((n_165 != NULL) && (n_165 != t)))
        _fail(t);
      else
        n_165 = t;
      t = y_165(t);
      return(t);
    }
    t = not_null(z_164);
    if(((e_165 != NULL) && (e_165 != t)))
      _fail(t);
    else
      e_165 = t;
    t = not_null(a_165);
    if(((f_165 != NULL) && (f_165 != t)))
      _fail(t);
    else
      f_165 = t;
    t = not_null(b_165);
    if(((g_165 != NULL) && (g_165 != t)))
      _fail(t);
    else
      g_165 = t;
    t = not_null(c_165);
    if(((h_165 != NULL) && (h_165 != t)))
      _fail(t);
    else
      h_165 = t;
    t = not_null(d_165);
    if(((i_165 != NULL) && (i_165 != t)))
      _fail(t);
    else
      i_165 = t;
    t = not_null(z_164);
    {
      ATerm k_165 = NULL;
      ATerm w_165 (ATerm t)
      {
        t = not_null(k_165);
        if(((j_165 != NULL) && (j_165 != t)))
          _fail(t);
        else
          j_165 = t;
        t = not_null(k_165);
        return(t);
      }
      t = SSLgetAnnotations(not_null(e_165));
      if(((k_165 != NULL) && (k_165 != t)))
        _fail(t);
      else
        k_165 = t;
      t = w_165(t);
      t = not_null(f_165);
      t = n_94(t);
      if(((l_165 != NULL) && (l_165 != t)))
        _fail(t);
      else
        l_165 = t;
      t = x_165(t);
    }
    return(t);
  }
  if(((z_164 != NULL) && (z_164 != t)))
    _fail(t);
  else
    z_164 = t;
  t = not_null(z_164);
  if(match_cons(t, sym_RDefT_4))
    {
      a_165 = ATgetArgument(t, 0);
      b_165 = ATgetArgument(t, 1);
      c_165 = ATgetArgument(t, 2);
      d_165 = ATgetArgument(t, 3);
      t = v_165(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DefaultVarDec_1_0 (ATerm z_97 (ATerm), ATerm t)
{
  ATerm h_166 = NULL,i_166 = NULL;
  ATerm r_166 (ATerm t)
  {
    ATerm j_166 = NULL,k_166 = NULL,l_166 = NULL,n_166 = NULL;
    ATerm t_166 (ATerm t)
    {
      ATerm o_166 = NULL,p_166 = NULL;
      t = not_null(n_166);
      if(((o_166 != NULL) && (o_166 != t)))
        _fail(t);
      else
        o_166 = t;
      t = not_null(n_166);
      {
        ATerm q_166 = NULL;
        ATerm u_166 (ATerm t)
        {
          t = not_null(q_166);
          if(((p_166 != NULL) && (p_166 != t)))
            _fail(t);
          else
            p_166 = t;
          t = not_null(q_166);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, not_null(o_166)), not_null(l_166));
        if(((q_166 != NULL) && (q_166 != t)))
          _fail(t);
        else
          q_166 = t;
        t = u_166(t);
        t = not_null(p_166);
      }
      return(t);
    }
    t = not_null(h_166);
    if(((j_166 != NULL) && (j_166 != t)))
      _fail(t);
    else
      j_166 = t;
    t = not_null(i_166);
    if(((k_166 != NULL) && (k_166 != t)))
      _fail(t);
    else
      k_166 = t;
    t = not_null(h_166);
    {
      ATerm m_166 = NULL;
      ATerm s_166 (ATerm t)
      {
        t = not_null(m_166);
        if(((l_166 != NULL) && (l_166 != t)))
          _fail(t);
        else
          l_166 = t;
        t = not_null(m_166);
        return(t);
      }
      t = SSLgetAnnotations(not_null(j_166));
      if(((m_166 != NULL) && (m_166 != t)))
        _fail(t);
      else
        m_166 = t;
      t = s_166(t);
      t = not_null(k_166);
      t = z_97(t);
      if(((n_166 != NULL) && (n_166 != t)))
        _fail(t);
      else
        n_166 = t;
      t = t_166(t);
    }
    return(t);
  }
  if(((h_166 != NULL) && (h_166 != t)))
    _fail(t);
  else
    h_166 = t;
  t = not_null(h_166);
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_166 = ATgetArgument(t, 0);
      t = r_166(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm string_to_real_0_0 (ATerm t)
{
  ATerm w_166 = NULL;
  ATerm y_166 (ATerm t)
  {
    ATerm x_166 = NULL;
    t = not_null(w_166);
    if(((x_166 != NULL) && (x_166 != t)))
      _fail(t);
    else
      x_166 = t;
    t = not_null(w_166);
    t = SSL_string_to_real(not_null(x_166));
    return(t);
  }
  if(((w_166 != NULL) && (w_166 != t)))
    _fail(t);
  else
    w_166 = t;
  t = y_166(t);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm f_64 = t;
  int g_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_167 = NULL,g_167 = NULL,h_167 = NULL,i_167 = NULL;
      ATerm s_167 (ATerm t)
      {
        ATerm j_167 = NULL,k_167 = NULL;
        t = not_null(g_167);
        if(((j_167 != NULL) && (j_167 != t)))
          _fail(t);
        else
          j_167 = t;
        t = not_null(f_167);
        {
          ATerm l_167 = NULL;
          ATerm v_167 (ATerm t)
          {
            t = not_null(l_167);
            if(((k_167 != NULL) && (k_167 != t)))
              _fail(t);
            else
              k_167 = t;
            t = not_null(l_167);
            return(t);
          }
          t = not_null(j_167);
          t = string_to_real_0_0(t);
          if(((l_167 != NULL) && (l_167 != t)))
            _fail(t);
          else
            l_167 = t;
          t = v_167(t);
          t = (ATerm) ATmakeAppl(sym_Real_1, not_null(k_167));
        }
        return(t);
      }
      ATerm t_167 (ATerm t)
      {
        ATerm m_167 = NULL,n_167 = NULL;
        t = not_null(g_167);
        if(((m_167 != NULL) && (m_167 != t)))
          _fail(t);
        else
          m_167 = t;
        t = not_null(f_167);
        {
          ATerm o_167 = NULL;
          ATerm w_167 (ATerm t)
          {
            t = not_null(o_167);
            if(((n_167 != NULL) && (n_167 != t)))
              _fail(t);
            else
              n_167 = t;
            t = not_null(o_167);
            return(t);
          }
          t = not_null(m_167);
          t = string_to_int_0_0(t);
          if(((o_167 != NULL) && (o_167 != t)))
            _fail(t);
          else
            o_167 = t;
          t = w_167(t);
          t = (ATerm) ATmakeAppl(sym_Int_1, not_null(n_167));
        }
        return(t);
      }
      ATerm u_167 (ATerm t)
      {
        ATerm p_167 = NULL,q_167 = NULL,r_167 = NULL;
        t = not_null(g_167);
        if(((p_167 != NULL) && (p_167 != t)))
          _fail(t);
        else
          p_167 = t;
        t = not_null(h_167);
        if(((q_167 != NULL) && (q_167 != t)))
          _fail(t);
        else
          q_167 = t;
        t = not_null(i_167);
        if(((r_167 != NULL) && (r_167 != t)))
          _fail(t);
        else
          r_167 = t;
        t = not_null(f_167);
        t = not_null(r_167);
        t = is_string_0_0(t);
        t = (ATerm) ATmakeAppl(sym_Con_3, not_null(p_167), not_null(q_167), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_167)), (ATerm) ATempty));
        return(t);
      }
      if(((f_167 != NULL) && (f_167 != t)))
        _fail(t);
      else
        f_167 = t;
      t = not_null(f_167);
      if(match_cons(t, sym_Real_1))
        {
          g_167 = ATgetArgument(t, 0);
          t = s_167(t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              g_167 = ATgetArgument(t, 0);
              t = t_167(t);
            }
          else
            {
              if(match_cons(t, sym_Con_3))
                {
                  g_167 = ATgetArgument(t, 0);
                  h_167 = ATgetArgument(t, 1);
                  i_167 = ATgetArgument(t, 2);
                  t = u_167(t);
                }
              else
                {
                  _fail(t);
                }
            }
        }
      ;
      LocalPopChoice(g_64);
    }
  else
    {
      t = f_64;
      {
        ATerm h_64 = t;
        int i_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1_0(RemoveLeadingPrime_0_0, t);
            ;
            LocalPopChoice(i_64);
          }
        else
          {
            t = h_64;
            {
              ATerm v_64 = t;
              int w_64 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(RemoveLeadingPrime_0_0, _id, _id, _id, t);
                  ;
                  LocalPopChoice(w_64);
                }
              else
                {
                  t = v_64;
                  {
                    ATerm b_65 = t;
                    int c_65 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = RDef_3_0(RemoveLeadingPrime_0_0, _id, _id, t);
                        ;
                        LocalPopChoice(c_65);
                      }
                    else
                      {
                        t = b_65;
                        {
                          ATerm d_65 = t;
                          int e_65 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SDefT_4_0(RemoveLeadingPrime_0_0, _id, _id, _id, t);
                              ;
                              LocalPopChoice(e_65);
                            }
                          else
                            {
                              t = d_65;
                              {
                                ATerm o_65 = t;
                                int p_65 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = SDef_3_0(RemoveLeadingPrime_0_0, _id, _id, t);
                                    ;
                                    LocalPopChoice(p_65);
                                  }
                                else
                                  {
                                    t = o_65;
                                    {
                                      ATerm q_65 = t;
                                      int r_65 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = VarDec_2_0(RemoveLeadingPrime_0_0, _id, t);
                                          ;
                                          LocalPopChoice(r_65);
                                        }
                                      else
                                        {
                                          t = q_65;
                                          {
                                            ATerm s_65 = t;
                                            int y_65 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Var_1_0(RemoveLeadingPrime_0_0, t);
                                                ;
                                                LocalPopChoice(y_65);
                                              }
                                            else
                                              {
                                                t = s_65;
                                                {
                                                  ATerm z_65 = t;
                                                  int a_66 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = SVar_1_0(RemoveLeadingPrime_0_0, t);
                                                      ;
                                                      LocalPopChoice(a_66);
                                                    }
                                                  else
                                                    {
                                                      t = z_65;
                                                      {
                                                        ATerm b_66 = t;
                                                        int c_66 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = OpDecl_2_0(RemoveLeadingPrime_0_0, _id, t);
                                                            ;
                                                            LocalPopChoice(c_66);
                                                          }
                                                        else
                                                          {
                                                            t = b_66;
                                                            t = Op_2_0(RemoveLeadingPrime_0_0, _id, t);
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm at_last_1_0 (ATerm n_113 (ATerm), ATerm t)
{
  ATerm x_167 (ATerm t)
  {
    ATerm d_66 = t;
    int e_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, Nil_0_0, t);
        t = n_113(t);
        ;
        LocalPopChoice(e_66);
      }
    else
      {
        t = d_66;
        t = Cons_2_0(_id, x_167, t);
      }
    return(t);
  }
  t = x_167(t);
  return(t);
}
ATerm init_0_0 (ATerm t)
{
  t = at_last_1_0(Tl_0_0, t);
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm a_168 = NULL,b_168 = NULL,c_168 = NULL;
  ATerm e_168 (ATerm t)
  {
    ATerm d_168 = NULL;
    t = not_null(c_168);
    if(((d_168 != NULL) && (d_168 != t)))
      _fail(t);
    else
      d_168 = t;
    t = not_null(d_168);
    return(t);
  }
  if(((a_168 != NULL) && (a_168 != t)))
    _fail(t);
  else
    a_168 = t;
  t = not_null(a_168);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_168 = ATgetFirst((ATermList) t);
      c_168 = (ATerm) ATgetNext((ATermList) t);
      t = e_168(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0_0 (ATerm t)
{
  ATerm i_168 = NULL,j_168 = NULL,k_168 = NULL;
  ATerm m_168 (ATerm t)
  {
    ATerm l_168 = NULL;
    t = not_null(j_168);
    if(((l_168 != NULL) && (l_168 != t)))
      _fail(t);
    else
      l_168 = t;
    t = not_null(l_168);
    return(t);
  }
  if(((i_168 != NULL) && (i_168 != t)))
    _fail(t);
  else
    i_168 = t;
  t = not_null(i_168);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_168 = ATgetFirst((ATermList) t);
      k_168 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(k_168);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = m_168(t);
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
ATerm last_0_0 (ATerm t)
{
  ATerm f_66 = t;
  int g_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0_0(t);
      ;
      LocalPopChoice(g_66);
    }
  else
    {
      t = f_66;
      t = Tl_0_0(t);
      t = last_0_0(t);
    }
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm q_168 = NULL,r_168 = NULL,s_168 = NULL;
  ATerm u_168 (ATerm t)
  {
    ATerm t_168 = NULL;
    t = not_null(r_168);
    if(((t_168 != NULL) && (t_168 != t)))
      _fail(t);
    else
      t_168 = t;
    t = not_null(t_168);
    return(t);
  }
  if(((q_168 != NULL) && (q_168 != t)))
    _fail(t);
  else
    q_168 = t;
  t = not_null(q_168);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_168 = ATgetFirst((ATermList) t);
      s_168 = (ATerm) ATgetNext((ATermList) t);
      t = u_168(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unquote_chars_1_0 (ATerm o_121 (ATerm), ATerm t)
{
  ATerm h_66;
  h_66 = t;
  t = Hd_0_0(t);
  t = o_121(t);
  t = h_66;
  {
    ATerm i_66;
    i_66 = t;
    t = last_0_0(t);
    t = o_121(t);
    t = i_66;
    t = Tl_0_0(t);
    t = init_0_0(t);
  }
  return(t);
}
ATerm un_double_quote_chars_0_0 (ATerm t)
{
  ATerm m_9 (ATerm t)
  {
    ATerm w_168 = NULL;
    if(((w_168 != NULL) && (w_168 != t)))
      _fail(t);
    else
      w_168 = t;
    t = not_null(w_168);
    if(match_int(t, 34))
      {
        t = not_null(w_168);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = unquote_chars_1_0(m_9, t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm z_121 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  t = z_121(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm un_double_quote_0_0 (ATerm t)
{
  t = string_as_chars_1_0(un_double_quote_chars_0_0, t);
  return(t);
}
ATerm DesugarCharGeneric_0_0 (ATerm t)
{
  ATerm e_169 = NULL,f_169 = NULL,g_169 = NULL,h_169 = NULL,i_169 = NULL,j_169 = NULL,k_169 = NULL;
  ATerm m_169 (ATerm t)
  {
    ATerm l_169 = NULL;
    t = not_null(h_169);
    if(((l_169 != NULL) && (l_169 != t)))
      _fail(t);
    else
      l_169 = t;
    t = not_null(l_169);
    return(t);
  }
  if(((e_169 != NULL) && (e_169 != t)))
    _fail(t);
  else
    e_169 = t;
  t = not_null(e_169);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_169 = ATgetFirst((ATermList) t);
      g_169 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(f_169);
      if(match_int(t, 39))
        {
          t = not_null(g_169);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_169 = ATgetFirst((ATermList) t);
              i_169 = (ATerm) ATgetNext((ATermList) t);
              t = not_null(i_169);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_169 = ATgetFirst((ATermList) t);
                  k_169 = (ATerm) ATgetNext((ATermList) t);
                  t = not_null(j_169);
                  if(match_int(t, 39))
                    {
                      t = not_null(k_169);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = m_169(t);
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
ATerm DesugarChar_0_0 (ATerm t)
{
  ATerm u_169 = NULL;
  ATerm v_169 (ATerm t)
  {
    t = term_j_66;
    return(t);
  }
  ATerm w_169 (ATerm t)
  {
    t = term_k_66;
    return(t);
  }
  ATerm y_169 (ATerm t)
  {
    t = term_l_66;
    return(t);
  }
  ATerm z_169 (ATerm t)
  {
    t = term_m_66;
    return(t);
  }
  ATerm a_170 (ATerm t)
  {
    t = term_n_66;
    return(t);
  }
  if(((u_169 != NULL) && (u_169 != t)))
    _fail(t);
  else
    u_169 = t;
  t = not_null(u_169);
  if(match_string(t, "'\\ '"))
    {
      t = v_169(t);
    }
  else
    {
      if(match_string(t, "'\\r'"))
        {
          t = w_169(t);
        }
      else
        {
          if(match_string(t, "'\\t'"))
            {
              t = y_169(t);
            }
          else
            {
              if(match_string(t, "'\\n'"))
                {
                  t = z_169(t);
                }
              else
                {
                  if(match_string(t, "'\\''"))
                    {
                      t = a_170(t);
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
ATerm Snd_0_0 (ATerm t)
{
  ATerm i_170 = NULL;
  ATerm w_170 (ATerm t)
  {
    ATerm j_170 = NULL,k_170 = NULL,l_170 = NULL,m_170 = NULL;
    t = not_null(i_170);
    if(((j_170 != NULL) && (j_170 != t)))
      _fail(t);
    else
      j_170 = t;
    t = not_null(i_170);
    {
      ATerm n_170 = NULL;
      ATerm x_170 (ATerm t)
      {
        ATerm o_170 = NULL,p_170 = NULL,q_170 = NULL,r_170 = NULL,s_170 = NULL,t_170 = NULL,u_170 = NULL,v_170 = NULL;
        ATerm y_170 (ATerm t)
        {
          t = not_null(s_170);
          if(((k_170 != NULL) && (k_170 != t)))
            _fail(t);
          else
            k_170 = t;
          t = not_null(u_170);
          if(((m_170 != NULL) && (m_170 != t)))
            _fail(t);
          else
            m_170 = t;
          t = not_null(v_170);
          if(((l_170 != NULL) && (l_170 != t)))
            _fail(t);
          else
            l_170 = t;
          t = not_null(p_170);
          return(t);
        }
        t = not_null(n_170);
        if(((o_170 != NULL) && (o_170 != t)))
          _fail(t);
        else
          o_170 = t;
        t = not_null(n_170);
        t = SSL_explode_term(not_null(o_170));
        if(((p_170 != NULL) && (p_170 != t)))
          _fail(t);
        else
          p_170 = t;
        t = not_null(p_170);
        if(match_cons(t, sym__2))
          {
            q_170 = ATgetArgument(t, 0);
            r_170 = ATgetArgument(t, 1);
            t = not_null(q_170);
            if(match_string(t, ""))
              {
                t = not_null(r_170);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    s_170 = ATgetFirst((ATermList) t);
                    t_170 = (ATerm) ATgetNext((ATermList) t);
                    t = not_null(t_170);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        u_170 = ATgetFirst((ATermList) t);
                        v_170 = (ATerm) ATgetNext((ATermList) t);
                        t = y_170(t);
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
      t = not_null(j_170);
      if(((n_170 != NULL) && (n_170 != t)))
        _fail(t);
      else
        n_170 = t;
      t = x_170(t);
      t = not_null(m_170);
    }
    return(t);
  }
  if(((i_170 != NULL) && (i_170 != t)))
    _fail(t);
  else
    i_170 = t;
  t = w_170(t);
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm n_173 = NULL,o_173 = NULL,p_173 = NULL,s_173 = NULL,t_173 = NULL,u_173 = NULL,v_173 = NULL,w_173 = NULL;
  ATerm r_177 (ATerm t)
  {
    ATerm x_173 = NULL,y_173 = NULL,z_173 = NULL;
    t = not_null(v_173);
    if(((x_173 != NULL) && (x_173 != t)))
      _fail(t);
    else
      x_173 = t;
    t = not_null(w_173);
    if(((y_173 != NULL) && (y_173 != t)))
      _fail(t);
    else
      y_173 = t;
    t = not_null(u_173);
    {
      ATerm e_174 = NULL;
      ATerm i_179 (ATerm t)
      {
        t = not_null(e_174);
        if(((z_173 != NULL) && (z_173 != t)))
          _fail(t);
        else
          z_173 = t;
        t = not_null(e_174);
        return(t);
      }
      t = not_null(y_173);
      {
        ATerm n_9 (ATerm t)
        {
          t = term_i_53;
          return(t);
        }
        ATerm o_9 (ATerm t)
        {
          ATerm a_174 = NULL,c_174 = NULL;
          ATerm o_66;
          o_66 = t;
          {
            ATerm b_174 = NULL;
            ATerm g_179 (ATerm t)
            {
              t = not_null(b_174);
              if(((a_174 != NULL) && (a_174 != t)))
                _fail(t);
              else
                a_174 = t;
              t = not_null(b_174);
              return(t);
            }
            t = Fst_0_0(t);
            if(((b_174 != NULL) && (b_174 != t)))
              _fail(t);
            else
              b_174 = t;
            t = g_179(t);
          }
          t = o_66;
          {
            ATerm d_174 = NULL;
            ATerm h_179 (ATerm t)
            {
              t = not_null(d_174);
              if(((c_174 != NULL) && (c_174 != t)))
                _fail(t);
              else
                c_174 = t;
              t = not_null(d_174);
              return(t);
            }
            t = Snd_0_0(t);
            if(((d_174 != NULL) && (d_174 != t)))
              _fail(t);
            else
              d_174 = t;
            t = h_179(t);
            t = (ATerm) ATmakeAppl(sym_Op_2, term_p_66, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_174)), not_null(a_174)));
          }
          return(t);
        }
        t = foldr_2_0(n_9, o_9, t);
        if(((e_174 != NULL) && (e_174 != t)))
          _fail(t);
        else
          e_174 = t;
        t = i_179(t);
      }
      t = (ATerm) ATmakeAppl(sym_Anno_2, not_null(x_173), not_null(z_173));
    }
    return(t);
  }
  ATerm s_177 (ATerm t)
  {
    ATerm f_174 = NULL;
    t = not_null(v_173);
    if(((f_174 != NULL) && (f_174 != t)))
      _fail(t);
    else
      f_174 = t;
    t = (ATerm) ATmakeAppl(sym_Sort_2, not_null(f_174), (ATerm) ATempty);
    return(t);
  }
  ATerm t_177 (ATerm t)
  {
    ATerm g_174 = NULL,h_174 = NULL;
    t = not_null(v_173);
    if(((g_174 != NULL) && (g_174 != t)))
      _fail(t);
    else
      g_174 = t;
    t = not_null(u_173);
    {
      ATerm i_174 = NULL;
      ATerm j_179 (ATerm t)
      {
        t = not_null(i_174);
        if(((h_174 != NULL) && (h_174 != t)))
          _fail(t);
        else
          h_174 = t;
        t = not_null(i_174);
        return(t);
      }
      t = not_null(g_174);
      {
        ATerm q_66 = t;
        int r_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DesugarChar_0_0(t);
            ;
            LocalPopChoice(r_66);
          }
        else
          {
            t = q_66;
            t = explode_string_0_0(t);
            t = DesugarCharGeneric_0_0(t);
          }
        if(((i_174 != NULL) && (i_174 != t)))
          _fail(t);
        else
          i_174 = t;
        t = j_179(t);
      }
      t = (ATerm) ATmakeAppl(sym_Int_1, not_null(h_174));
    }
    return(t);
  }
  ATerm u_177 (ATerm t)
  {
    ATerm j_174 = NULL;
    t = not_null(v_173);
    if(((j_174 != NULL) && (j_174 != t)))
      _fail(t);
    else
      j_174 = t;
    t = (ATerm) ATmakeAppl(sym_Sort_2, not_null(j_174), (ATerm) ATempty);
    return(t);
  }
  ATerm v_177 (ATerm t)
  {
    ATerm k_174 = NULL,l_174 = NULL,m_174 = NULL;
    t = not_null(v_173);
    if(((k_174 != NULL) && (k_174 != t)))
      _fail(t);
    else
      k_174 = t;
    t = not_null(t_173);
    if(((l_174 != NULL) && (l_174 != t)))
      _fail(t);
    else
      l_174 = t;
    t = not_null(n_173);
    if(((m_174 != NULL) && (m_174 != t)))
      _fail(t);
    else
      m_174 = t;
    t = (ATerm) ATmakeAppl(sym_Con_3, not_null(k_174), not_null(l_174), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_174)), (ATerm) ATempty));
    return(t);
  }
  ATerm w_177 (ATerm t)
  {
    ATerm n_174 = NULL,o_174 = NULL;
    t = not_null(v_173);
    if(((n_174 != NULL) && (n_174 != t)))
      _fail(t);
    else
      n_174 = t;
    t = not_null(t_173);
    if(((o_174 != NULL) && (o_174 != t)))
      _fail(t);
    else
      o_174 = t;
    t = (ATerm) ATmakeAppl(sym_Con_3, not_null(n_174), not_null(o_174), term_d_67);
    return(t);
  }
  ATerm x_177 (ATerm t)
  {
    ATerm p_174 = NULL,q_174 = NULL;
    t = not_null(v_173);
    if(((p_174 != NULL) && (p_174 != t)))
      _fail(t);
    else
      p_174 = t;
    t = not_null(w_173);
    if(((q_174 != NULL) && (q_174 != t)))
      _fail(t);
    else
      q_174 = t;
    t = (ATerm) ATmakeAppl(sym_Con_3, not_null(p_174), not_null(q_174), term_d_67);
    return(t);
  }
  ATerm y_177 (ATerm t)
  {
    ATerm r_174 = NULL,s_174 = NULL;
    t = not_null(v_173);
    if(((s_174 != NULL) && (s_174 != t)))
      _fail(t);
    else
      s_174 = t;
    t = not_null(w_173);
    if(((r_174 != NULL) && (r_174 != t)))
      _fail(t);
    else
      r_174 = t;
    t = not_null(s_174);
    {
      ATerm p_9 (ATerm t)
      {
        t = not_null(r_174);
        return(t);
      }
      ATerm q_9 (ATerm t)
      {
        ATerm t_174 = NULL,u_174 = NULL,v_174 = NULL;
        ATerm k_179 (ATerm t)
        {
          ATerm w_174 = NULL,x_174 = NULL;
          t = not_null(u_174);
          if(((w_174 != NULL) && (w_174 != t)))
            _fail(t);
          else
            w_174 = t;
          t = not_null(v_174);
          if(((x_174 != NULL) && (x_174 != t)))
            _fail(t);
          else
            x_174 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, term_p_66, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_174)), not_null(w_174)));
          return(t);
        }
        if(((t_174 != NULL) && (t_174 != t)))
          _fail(t);
        else
          t_174 = t;
        t = not_null(t_174);
        if(match_cons(t, sym__2))
          {
            u_174 = ATgetArgument(t, 0);
            v_174 = ATgetArgument(t, 1);
            t = k_179(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = foldr_2_0(p_9, q_9, t);
    }
    return(t);
  }
  ATerm z_177 (ATerm t)
  {
    ATerm y_174 = NULL;
    t = not_null(v_173);
    if(((y_174 != NULL) && (y_174 != t)))
      _fail(t);
    else
      y_174 = t;
    t = not_null(y_174);
    {
      ATerm r_9 (ATerm t)
      {
        t = term_i_53;
        return(t);
      }
      ATerm s_9 (ATerm t)
      {
        ATerm z_174 = NULL,a_175 = NULL,b_175 = NULL;
        ATerm l_179 (ATerm t)
        {
          ATerm c_175 = NULL,d_175 = NULL;
          t = not_null(a_175);
          if(((c_175 != NULL) && (c_175 != t)))
            _fail(t);
          else
            c_175 = t;
          t = not_null(b_175);
          if(((d_175 != NULL) && (d_175 != t)))
            _fail(t);
          else
            d_175 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, term_p_66, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_175)), not_null(c_175)));
          return(t);
        }
        if(((z_174 != NULL) && (z_174 != t)))
          _fail(t);
        else
          z_174 = t;
        t = not_null(z_174);
        if(match_cons(t, sym__2))
          {
            a_175 = ATgetArgument(t, 0);
            b_175 = ATgetArgument(t, 1);
            t = l_179(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = foldr_2_0(r_9, s_9, t);
    }
    return(t);
  }
  ATerm a_178 (ATerm t)
  {
    ATerm e_175 = NULL;
    t = not_null(v_173);
    if(((e_175 != NULL) && (e_175 != t)))
      _fail(t);
    else
      e_175 = t;
    t = not_null(u_173);
    t = not_null(e_175);
    {
      ATerm e_67 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(_id, Nil_0_0, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_67;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_q_17, not_null(e_175));
    return(t);
  }
  ATerm b_178 (ATerm t)
  {
    ATerm f_175 = NULL;
    t = not_null(o_173);
    if(((f_175 != NULL) && (f_175 != t)))
      _fail(t);
    else
      f_175 = t;
    t = not_null(f_175);
    return(t);
  }
  ATerm c_178 (ATerm t)
  {
    ATerm g_175 = NULL;
    t = not_null(v_173);
    if(((g_175 != NULL) && (g_175 != t)))
      _fail(t);
    else
      g_175 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, not_null(g_175)));
    return(t);
  }
  ATerm d_178 (ATerm t)
  {
    ATerm h_175 = NULL;
    t = not_null(v_173);
    if(((h_175 != NULL) && (h_175 != t)))
      _fail(t);
    else
      h_175 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(h_175)));
    return(t);
  }
  ATerm e_178 (ATerm t)
  {
    ATerm i_175 = NULL;
    t = not_null(v_173);
    if(((i_175 != NULL) && (i_175 != t)))
      _fail(t);
    else
      i_175 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(i_175)));
    return(t);
  }
  ATerm f_178 (ATerm t)
  {
    ATerm j_175 = NULL;
    t = not_null(v_173);
    if(((j_175 != NULL) && (j_175 != t)))
      _fail(t);
    else
      j_175 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(j_175)));
    return(t);
  }
  ATerm g_178 (ATerm t)
  {
    ATerm k_175 = NULL;
    t = not_null(v_173);
    if(((k_175 != NULL) && (k_175 != t)))
      _fail(t);
    else
      k_175 = t;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_175)), (ATerm) ATempty);
    return(t);
  }
  ATerm h_178 (ATerm t)
  {
    ATerm l_175 = NULL,m_175 = NULL;
    t = not_null(v_173);
    if(((l_175 != NULL) && (l_175 != t)))
      _fail(t);
    else
      l_175 = t;
    t = not_null(w_173);
    if(((m_175 != NULL) && (m_175 != t)))
      _fail(t);
    else
      m_175 = t;
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_175)), not_null(m_175));
    return(t);
  }
  ATerm j_178 (ATerm t)
  {
    ATerm n_175 = NULL,o_175 = NULL;
    t = not_null(v_173);
    if(((o_175 != NULL) && (o_175 != t)))
      _fail(t);
    else
      o_175 = t;
    t = not_null(w_173);
    if(((n_175 != NULL) && (n_175 != t)))
      _fail(t);
    else
      n_175 = t;
    t = not_null(o_175);
    {
      ATerm t_9 (ATerm t)
      {
        t = not_null(n_175);
        return(t);
      }
      ATerm u_9 (ATerm t)
      {
        ATerm p_175 = NULL,q_175 = NULL,r_175 = NULL;
        ATerm m_179 (ATerm t)
        {
          ATerm s_175 = NULL,t_175 = NULL;
          t = not_null(q_175);
          if(((s_175 != NULL) && (s_175 != t)))
            _fail(t);
          else
            s_175 = t;
          t = not_null(r_175);
          if(((t_175 != NULL) && (t_175 != t)))
            _fail(t);
          else
            t_175 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, term_f_67, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_175)), not_null(s_175)));
          return(t);
        }
        if(((p_175 != NULL) && (p_175 != t)))
          _fail(t);
        else
          p_175 = t;
        t = not_null(p_175);
        if(match_cons(t, sym__2))
          {
            q_175 = ATgetArgument(t, 0);
            r_175 = ATgetArgument(t, 1);
            t = m_179(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = foldr_2_0(t_9, u_9, t);
    }
    return(t);
  }
  ATerm k_178 (ATerm t)
  {
    ATerm u_175 = NULL;
    t = not_null(v_173);
    if(((u_175 != NULL) && (u_175 != t)))
      _fail(t);
    else
      u_175 = t;
    t = not_null(u_175);
    {
      ATerm v_9 (ATerm t)
      {
        t = term_h_67;
        return(t);
      }
      ATerm w_9 (ATerm t)
      {
        ATerm v_175 = NULL,w_175 = NULL,x_175 = NULL;
        ATerm n_179 (ATerm t)
        {
          ATerm y_175 = NULL,z_175 = NULL;
          t = not_null(w_175);
          if(((y_175 != NULL) && (y_175 != t)))
            _fail(t);
          else
            y_175 = t;
          t = not_null(x_175);
          if(((z_175 != NULL) && (z_175 != t)))
            _fail(t);
          else
            z_175 = t;
          t = (ATerm) ATmakeAppl(sym_Call_2, term_f_67, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_175)), not_null(y_175)));
          return(t);
        }
        if(((v_175 != NULL) && (v_175 != t)))
          _fail(t);
        else
          v_175 = t;
        t = not_null(v_175);
        if(match_cons(t, sym__2))
          {
            w_175 = ATgetArgument(t, 0);
            x_175 = ATgetArgument(t, 1);
            t = n_179(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = foldr_2_0(v_9, w_9, t);
    }
    return(t);
  }
  ATerm l_178 (ATerm t)
  {
    ATerm a_176 = NULL,b_176 = NULL;
    t = not_null(v_173);
    if(((a_176 != NULL) && (a_176 != t)))
      _fail(t);
    else
      a_176 = t;
    t = not_null(w_173);
    if(((b_176 != NULL) && (b_176 != t)))
      _fail(t);
    else
      b_176 = t;
    t = (ATerm) ATmakeAppl(sym_Call_2, term_i_67, (ATerm) ATinsert(CheckATermList(not_null(b_176)), not_null(a_176)));
    return(t);
  }
  ATerm m_178 (ATerm t)
  {
    ATerm c_176 = NULL;
    t = not_null(v_173);
    if(((c_176 != NULL) && (c_176 != t)))
      _fail(t);
    else
      c_176 = t;
    t = not_null(u_173);
    t = not_null(c_176);
    {
      ATerm p_67 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(_id, Nil_0_0, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_67;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_i_67, not_null(c_176));
    return(t);
  }
  ATerm n_178 (ATerm t)
  {
    ATerm d_176 = NULL;
    t = not_null(o_173);
    if(((d_176 != NULL) && (d_176 != t)))
      _fail(t);
    else
      d_176 = t;
    t = not_null(d_176);
    return(t);
  }
  ATerm o_178 (ATerm t)
  {
    t = term_q_67;
    return(t);
  }
  ATerm p_178 (ATerm t)
  {
    ATerm e_176 = NULL,f_176 = NULL;
    t = not_null(v_173);
    if(((e_176 != NULL) && (e_176 != t)))
      _fail(t);
    else
      e_176 = t;
    t = not_null(s_173);
    if(((f_176 != NULL) && (f_176 != t)))
      _fail(t);
    else
      f_176 = t;
    t = (ATerm) ATmakeAppl(sym_Call_2, term_i_40, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_176)), not_null(e_176)));
    return(t);
  }
  ATerm q_178 (ATerm t)
  {
    ATerm g_176 = NULL;
    t = not_null(v_173);
    if(((g_176 != NULL) && (g_176 != t)))
      _fail(t);
    else
      g_176 = t;
    t = not_null(g_176);
    return(t);
  }
  ATerm r_178 (ATerm t)
  {
    ATerm h_176 = NULL,i_176 = NULL;
    t = not_null(v_173);
    if(((h_176 != NULL) && (h_176 != t)))
      _fail(t);
    else
      h_176 = t;
    t = not_null(w_173);
    if(((i_176 != NULL) && (i_176 != t)))
      _fail(t);
    else
      i_176 = t;
    t = (ATerm) ATmakeAppl(sym_StratRule_3, not_null(h_176), not_null(i_176), term_m_22);
    return(t);
  }
  ATerm s_178 (ATerm t)
  {
    ATerm j_176 = NULL,k_176 = NULL;
    t = not_null(v_173);
    if(((j_176 != NULL) && (j_176 != t)))
      _fail(t);
    else
      j_176 = t;
    t = not_null(w_173);
    if(((k_176 != NULL) && (k_176 != t)))
      _fail(t);
    else
      k_176 = t;
    t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(j_176), not_null(k_176), term_m_22);
    return(t);
  }
  ATerm t_178 (ATerm t)
  {
    ATerm l_176 = NULL,m_176 = NULL;
    t = not_null(v_173);
    if(((l_176 != NULL) && (l_176 != t)))
      _fail(t);
    else
      l_176 = t;
    t = not_null(w_173);
    if(((m_176 != NULL) && (m_176 != t)))
      _fail(t);
    else
      m_176 = t;
    t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(l_176), (ATerm)ATempty, not_null(m_176));
    return(t);
  }
  ATerm u_178 (ATerm t)
  {
    ATerm n_176 = NULL,o_176 = NULL;
    t = not_null(v_173);
    if(((o_176 != NULL) && (o_176 != t)))
      _fail(t);
    else
      o_176 = t;
    t = not_null(w_173);
    if(((n_176 != NULL) && (n_176 != t)))
      _fail(t);
    else
      n_176 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_176), not_null(o_176));
    return(t);
  }
  ATerm v_178 (ATerm t)
  {
    ATerm p_176 = NULL,q_176 = NULL,r_176 = NULL;
    t = not_null(v_173);
    if(((p_176 != NULL) && (p_176 != t)))
      _fail(t);
    else
      p_176 = t;
    t = not_null(w_173);
    if(((q_176 != NULL) && (q_176 != t)))
      _fail(t);
    else
      q_176 = t;
    t = not_null(u_173);
    {
      ATerm s_176 = NULL;
      ATerm o_179 (ATerm t)
      {
        t = not_null(s_176);
        if(((r_176 != NULL) && (r_176 != t)))
          _fail(t);
        else
          r_176 = t;
        t = not_null(s_176);
        return(t);
      }
      t = not_null(p_176);
      t = try_1_0(un_double_quote_0_0, t);
      if(((s_176 != NULL) && (s_176 != t)))
        _fail(t);
      else
        s_176 = t;
      t = o_179(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(r_176), (ATerm)ATempty, not_null(q_176));
    }
    return(t);
  }
  ATerm w_178 (ATerm t)
  {
    ATerm t_176 = NULL,u_176 = NULL;
    t = not_null(v_173);
    if(((t_176 != NULL) && (t_176 != t)))
      _fail(t);
    else
      t_176 = t;
    t = not_null(u_173);
    {
      ATerm v_176 = NULL;
      ATerm p_179 (ATerm t)
      {
        t = not_null(v_176);
        if(((u_176 != NULL) && (u_176 != t)))
          _fail(t);
        else
          u_176 = t;
        t = not_null(v_176);
        return(t);
      }
      t = not_null(t_176);
      t = try_1_0(un_double_quote_0_0, t);
      if(((v_176 != NULL) && (v_176 != t)))
        _fail(t);
      else
        v_176 = t;
      t = p_179(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(u_176), (ATerm)ATempty, (ATerm) ATempty);
    }
    return(t);
  }
  ATerm x_178 (ATerm t)
  {
    ATerm w_176 = NULL,x_176 = NULL;
    t = not_null(v_173);
    if(((w_176 != NULL) && (w_176 != t)))
      _fail(t);
    else
      w_176 = t;
    t = not_null(w_173);
    if(((x_176 != NULL) && (x_176 != t)))
      _fail(t);
    else
      x_176 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(w_176), not_null(x_176), (ATerm) ATempty);
    return(t);
  }
  ATerm y_178 (ATerm t)
  {
    ATerm y_176 = NULL;
    t = not_null(v_173);
    if(((y_176 != NULL) && (y_176 != t)))
      _fail(t);
    else
      y_176 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(y_176), (ATerm)ATempty, (ATerm) ATempty);
    return(t);
  }
  ATerm z_178 (ATerm t)
  {
    ATerm z_176 = NULL,a_177 = NULL,b_177 = NULL;
    t = not_null(v_173);
    if(((z_176 != NULL) && (z_176 != t)))
      _fail(t);
    else
      z_176 = t;
    t = not_null(w_173);
    if(((a_177 != NULL) && (a_177 != t)))
      _fail(t);
    else
      a_177 = t;
    t = not_null(t_173);
    if(((b_177 != NULL) && (b_177 != t)))
      _fail(t);
    else
      b_177 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(z_176), not_null(a_177), (ATerm)ATempty, not_null(b_177));
    return(t);
  }
  ATerm a_179 (ATerm t)
  {
    ATerm c_177 = NULL,d_177 = NULL;
    t = not_null(v_173);
    if(((c_177 != NULL) && (c_177 != t)))
      _fail(t);
    else
      c_177 = t;
    t = not_null(w_173);
    if(((d_177 != NULL) && (d_177 != t)))
      _fail(t);
    else
      d_177 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(c_177), (ATerm)ATempty, (ATerm)ATempty, not_null(d_177));
    return(t);
  }
  ATerm b_179 (ATerm t)
  {
    ATerm e_177 = NULL,f_177 = NULL,g_177 = NULL;
    t = not_null(v_173);
    if(((e_177 != NULL) && (e_177 != t)))
      _fail(t);
    else
      e_177 = t;
    t = not_null(w_173);
    if(((f_177 != NULL) && (f_177 != t)))
      _fail(t);
    else
      f_177 = t;
    t = not_null(t_173);
    if(((g_177 != NULL) && (g_177 != t)))
      _fail(t);
    else
      g_177 = t;
    t = (ATerm) ATmakeAppl(sym_SRDefT_4, not_null(e_177), not_null(f_177), (ATerm)ATempty, not_null(g_177));
    return(t);
  }
  ATerm c_179 (ATerm t)
  {
    ATerm h_177 = NULL,i_177 = NULL;
    t = not_null(v_173);
    if(((h_177 != NULL) && (h_177 != t)))
      _fail(t);
    else
      h_177 = t;
    t = not_null(w_173);
    if(((i_177 != NULL) && (i_177 != t)))
      _fail(t);
    else
      i_177 = t;
    t = (ATerm) ATmakeAppl(sym_SRDefT_4, not_null(h_177), (ATerm)ATempty, (ATerm)ATempty, not_null(i_177));
    return(t);
  }
  ATerm d_179 (ATerm t)
  {
    ATerm j_177 = NULL,k_177 = NULL,l_177 = NULL;
    t = not_null(v_173);
    if(((j_177 != NULL) && (j_177 != t)))
      _fail(t);
    else
      j_177 = t;
    t = not_null(w_173);
    if(((k_177 != NULL) && (k_177 != t)))
      _fail(t);
    else
      k_177 = t;
    t = not_null(t_173);
    if(((l_177 != NULL) && (l_177 != t)))
      _fail(t);
    else
      l_177 = t;
    t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(j_177), not_null(k_177), (ATerm)ATempty, not_null(l_177));
    return(t);
  }
  ATerm e_179 (ATerm t)
  {
    ATerm m_177 = NULL,o_177 = NULL;
    t = not_null(v_173);
    if(((m_177 != NULL) && (m_177 != t)))
      _fail(t);
    else
      m_177 = t;
    t = not_null(w_173);
    if(((o_177 != NULL) && (o_177 != t)))
      _fail(t);
    else
      o_177 = t;
    t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(m_177), (ATerm)ATempty, (ATerm)ATempty, not_null(o_177));
    return(t);
  }
  ATerm f_179 (ATerm t)
  {
    ATerm p_177 = NULL,q_177 = NULL;
    t = not_null(v_173);
    if(((p_177 != NULL) && (p_177 != t)))
      _fail(t);
    else
      p_177 = t;
    t = not_null(w_173);
    if(((q_177 != NULL) && (q_177 != t)))
      _fail(t);
    else
      q_177 = t;
    t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(q_177));
    return(t);
  }
  if(((u_173 != NULL) && (u_173 != t)))
    _fail(t);
  else
    u_173 = t;
  t = not_null(u_173);
  if(match_cons(t, sym_Anno_2))
    {
      v_173 = ATgetArgument(t, 0);
      w_173 = ATgetArgument(t, 1);
      t = r_177(t);
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          v_173 = ATgetArgument(t, 0);
          {
            ATerm r_67 = t;
            int s_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = s_177(t);
                ;
                LocalPopChoice(s_67);
              }
            else
              {
                t = r_67;
                t = u_177(t);
              }
          }
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              v_173 = ATgetArgument(t, 0);
              t = t_177(t);
            }
          else
            {
              if(match_cons(t, sym_Con4_4))
                {
                  v_173 = ATgetArgument(t, 0);
                  w_173 = ATgetArgument(t, 1);
                  t_173 = ATgetArgument(t, 2);
                  n_173 = ATgetArgument(t, 3);
                  t = v_177(t);
                }
              else
                {
                  if(match_cons(t, sym_Con3_3))
                    {
                      v_173 = ATgetArgument(t, 0);
                      w_173 = ATgetArgument(t, 1);
                      t_173 = ATgetArgument(t, 2);
                      t = w_177(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Con1_2))
                        {
                          v_173 = ATgetArgument(t, 0);
                          w_173 = ATgetArgument(t, 1);
                          t = x_177(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_ListTail_2))
                            {
                              v_173 = ATgetArgument(t, 0);
                              w_173 = ATgetArgument(t, 1);
                              t = y_177(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_List_1))
                                {
                                  v_173 = ATgetArgument(t, 0);
                                  t = z_177(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Tuple_1))
                                    {
                                      v_173 = ATgetArgument(t, 0);
                                      t = not_null(v_173);
                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                        {
                                          o_173 = ATgetFirst((ATermList) t);
                                          p_173 = (ATerm) ATgetNext((ATermList) t);
                                          t = not_null(p_173);
                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                            {
                                              ATerm t_67 = t;
                                              int u_67 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = a_178(t);
                                                  ;
                                                  LocalPopChoice(u_67);
                                                }
                                              else
                                                {
                                                  t = t_67;
                                                  t = b_178(t);
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
                                      if(match_cons(t, sym_CharCong_1))
                                        {
                                          v_173 = ATgetArgument(t, 0);
                                          t = c_178(t);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_RealCong_1))
                                            {
                                              v_173 = ATgetArgument(t, 0);
                                              t = d_178(t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_IntCong_1))
                                                {
                                                  v_173 = ATgetArgument(t, 0);
                                                  t = e_178(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_StrCong_1))
                                                    {
                                                      v_173 = ATgetArgument(t, 0);
                                                      t = f_178(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_ModCongNoArgs_1))
                                                        {
                                                          v_173 = ATgetArgument(t, 0);
                                                          t = g_178(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_ModCong_2))
                                                            {
                                                              v_173 = ATgetArgument(t, 0);
                                                              w_173 = ATgetArgument(t, 1);
                                                              t = h_178(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_ListCong_2))
                                                                {
                                                                  v_173 = ATgetArgument(t, 0);
                                                                  w_173 = ATgetArgument(t, 1);
                                                                  t = j_178(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_ListCongNoTail_1))
                                                                    {
                                                                      v_173 = ATgetArgument(t, 0);
                                                                      t = k_178(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_TupleCong_2))
                                                                        {
                                                                          v_173 = ATgetArgument(t, 0);
                                                                          w_173 = ATgetArgument(t, 1);
                                                                          t = l_178(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_TupleCong_1))
                                                                            {
                                                                              v_173 = ATgetArgument(t, 0);
                                                                              t = not_null(v_173);
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  o_173 = ATgetFirst((ATermList) t);
                                                                                  p_173 = (ATerm) ATgetNext((ATermList) t);
                                                                                  t = not_null(p_173);
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm v_67 = t;
                                                                                      int y_67 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = m_178(t);
                                                                                          ;
                                                                                          LocalPopChoice(y_67);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = v_67;
                                                                                          t = n_178(t);
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
                                                                              if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                {
                                                                                  t = o_178(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_AnnoCong_2))
                                                                                    {
                                                                                      v_173 = ATgetArgument(t, 0);
                                                                                      w_173 = ATgetArgument(t, 1);
                                                                                      t = not_null(w_173);
                                                                                      if(match_cons(t, sym_StrategyCurly_1))
                                                                                        {
                                                                                          s_173 = ATgetArgument(t, 0);
                                                                                          t = p_178(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_ParenStrat_1))
                                                                                        {
                                                                                          v_173 = ATgetArgument(t, 0);
                                                                                          t = q_178(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                            {
                                                                                              v_173 = ATgetArgument(t, 0);
                                                                                              w_173 = ATgetArgument(t, 1);
                                                                                              t = r_178(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_RuleNoCond_2))
                                                                                                {
                                                                                                  v_173 = ATgetArgument(t, 0);
                                                                                                  w_173 = ATgetArgument(t, 1);
                                                                                                  t = s_178(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                    {
                                                                                                      v_173 = ATgetArgument(t, 0);
                                                                                                      w_173 = ATgetArgument(t, 1);
                                                                                                      t = t_178(t);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RChoice_2))
                                                                                                        {
                                                                                                          v_173 = ATgetArgument(t, 0);
                                                                                                          w_173 = ATgetArgument(t, 1);
                                                                                                          t = u_178(t);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_Prim_2))
                                                                                                            {
                                                                                                              v_173 = ATgetArgument(t, 0);
                                                                                                              w_173 = ATgetArgument(t, 1);
                                                                                                              t = v_178(t);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                {
                                                                                                                  v_173 = ATgetArgument(t, 0);
                                                                                                                  t = w_178(t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_Call_2))
                                                                                                                    {
                                                                                                                      v_173 = ATgetArgument(t, 0);
                                                                                                                      w_173 = ATgetArgument(t, 1);
                                                                                                                      t = x_178(t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                        {
                                                                                                                          v_173 = ATgetArgument(t, 0);
                                                                                                                          t = y_178(t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_SDef_3))
                                                                                                                            {
                                                                                                                              v_173 = ATgetArgument(t, 0);
                                                                                                                              w_173 = ATgetArgument(t, 1);
                                                                                                                              t_173 = ATgetArgument(t, 2);
                                                                                                                              t = z_178(t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                {
                                                                                                                                  v_173 = ATgetArgument(t, 0);
                                                                                                                                  w_173 = ATgetArgument(t, 1);
                                                                                                                                  t = a_179(t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_cons(t, sym_SRDef_3))
                                                                                                                                    {
                                                                                                                                      v_173 = ATgetArgument(t, 0);
                                                                                                                                      w_173 = ATgetArgument(t, 1);
                                                                                                                                      t_173 = ATgetArgument(t, 2);
                                                                                                                                      t = b_179(t);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                        {
                                                                                                                                          v_173 = ATgetArgument(t, 0);
                                                                                                                                          w_173 = ATgetArgument(t, 1);
                                                                                                                                          t = c_179(t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_cons(t, sym_RDef_3))
                                                                                                                                            {
                                                                                                                                              v_173 = ATgetArgument(t, 0);
                                                                                                                                              w_173 = ATgetArgument(t, 1);
                                                                                                                                              t_173 = ATgetArgument(t, 2);
                                                                                                                                              t = d_179(t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                                {
                                                                                                                                                  v_173 = ATgetArgument(t, 0);
                                                                                                                                                  w_173 = ATgetArgument(t, 1);
                                                                                                                                                  t = e_179(t);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_cons(t, sym_Module_2))
                                                                                                                                                    {
                                                                                                                                                      v_173 = ATgetArgument(t, 0);
                                                                                                                                                      w_173 = ATgetArgument(t, 1);
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
ATerm repeat_1_0 (ATerm x_105 (ATerm), ATerm t)
{
  ATerm q_179 (ATerm t)
  {
    ATerm x_9 (ATerm t)
    {
      t = x_105(t);
      t = q_179(t);
      return(t);
    }
    t = try_1_0(x_9, t);
    return(t);
  }
  t = q_179(t);
  return(t);
}
ATerm topdown_1_0 (ATerm v_106 (ATerm), ATerm t)
{
  t = v_106(t);
  {
    ATerm y_9 (ATerm t)
    {
      t = topdown_1_0(v_106, t);
      return(t);
    }
    t = SRTS_all(y_9, t);
  }
  return(t);
}
ATerm pre_desugar_0_0 (ATerm t)
{
  ATerm z_9 (ATerm t)
  {
    t = repeat_1_0(Desugar_0_0, t);
    t = try_1_0(DesugarOnce_0_0, t);
    return(t);
  }
  t = topdown_1_0(z_9, t);
  return(t);
}
ATerm frontend_transformation_0_0 (ATerm t)
{
  ATerm a_10 (ATerm t)
  {
    t = term_d_68;
    return(t);
  }
  t = timing_1_0(a_10, t);
  t = pre_desugar_0_0(t);
  {
    ATerm b_10 (ATerm t)
    {
      t = term_e_68;
      return(t);
    }
    t = timing_1_0(b_10, t);
    t = normalize_spec_0_0(t);
    {
      ATerm c_10 (ATerm t)
      {
        t = term_f_68;
        return(t);
      }
      t = timing_1_0(c_10, t);
      {
        ATerm g_68;
        g_68 = t;
        t = spec_use_def_0_0(t);
        t = g_68;
        {
          ATerm d_10 (ATerm t)
          {
            t = term_h_68;
            return(t);
          }
          t = timing_1_0(d_10, t);
          t = ExpandOverlays_0_0(t);
          {
            ATerm e_10 (ATerm t)
            {
              t = term_i_68;
              return(t);
            }
            t = timing_1_0(e_10, t);
            t = CheckConstructors_0_0(t);
            {
              ATerm f_10 (ATerm t)
              {
                t = term_j_68;
                return(t);
              }
              t = timing_1_0(f_10, t);
              t = RulesToSdefs_0_0(t);
              {
                ATerm g_10 (ATerm t)
                {
                  t = term_k_68;
                  return(t);
                }
                t = timing_1_0(g_10, t);
                t = DesugarListMatching_0_0(t);
                {
                  ATerm h_10 (ATerm t)
                  {
                    t = term_l_68;
                    return(t);
                  }
                  t = timing_1_0(h_10, t);
                  t = strename_0_0(t);
                  {
                    ATerm i_10 (ATerm t)
                    {
                      t = term_m_68;
                      return(t);
                    }
                    t = timing_1_0(i_10, t);
                    {
                      ATerm j_10 (ATerm t)
                      {
                        ATerm k_10 (ATerm t)
                        {
                          ATerm l_10 (ATerm t)
                          {
                            t = Strategies_1_0(desugar_spec_0_0, t);
                            return(t);
                          }
                          t = Cons_2_0(l_10, Nil_0_0, t);
                          return(t);
                        }
                        t = Cons_2_0(_id, k_10, t);
                        return(t);
                      }
                      t = Specification_1_0(j_10, t);
                    }
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
ATerm _2_0 (ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm t)
{
  ATerm x_179 = NULL,y_179 = NULL,z_179 = NULL;
  ATerm l_180 (ATerm t)
  {
    ATerm a_180 = NULL,b_180 = NULL,c_180 = NULL,d_180 = NULL,f_180 = NULL;
    ATerm n_180 (ATerm t)
    {
      ATerm g_180 = NULL,h_180 = NULL;
      ATerm o_180 (ATerm t)
      {
        ATerm i_180 = NULL,j_180 = NULL;
        t = not_null(h_180);
        if(((i_180 != NULL) && (i_180 != t)))
          _fail(t);
        else
          i_180 = t;
        t = not_null(h_180);
        {
          ATerm k_180 = NULL;
          ATerm p_180 (ATerm t)
          {
            t = not_null(k_180);
            if(((j_180 != NULL) && (j_180 != t)))
              _fail(t);
            else
              j_180 = t;
            t = not_null(k_180);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_180), not_null(i_180)), not_null(d_180));
          if(((k_180 != NULL) && (k_180 != t)))
            _fail(t);
          else
            k_180 = t;
          t = p_180(t);
          t = not_null(j_180);
        }
        return(t);
      }
      t = not_null(f_180);
      if(((g_180 != NULL) && (g_180 != t)))
        _fail(t);
      else
        g_180 = t;
      t = not_null(c_180);
      t = u_89(t);
      if(((h_180 != NULL) && (h_180 != t)))
        _fail(t);
      else
        h_180 = t;
      t = o_180(t);
      return(t);
    }
    t = not_null(x_179);
    if(((a_180 != NULL) && (a_180 != t)))
      _fail(t);
    else
      a_180 = t;
    t = not_null(y_179);
    if(((b_180 != NULL) && (b_180 != t)))
      _fail(t);
    else
      b_180 = t;
    t = not_null(z_179);
    if(((c_180 != NULL) && (c_180 != t)))
      _fail(t);
    else
      c_180 = t;
    t = not_null(x_179);
    {
      ATerm e_180 = NULL;
      ATerm m_180 (ATerm t)
      {
        t = not_null(e_180);
        if(((d_180 != NULL) && (d_180 != t)))
          _fail(t);
        else
          d_180 = t;
        t = not_null(e_180);
        return(t);
      }
      t = SSLgetAnnotations(not_null(a_180));
      if(((e_180 != NULL) && (e_180 != t)))
        _fail(t);
      else
        e_180 = t;
      t = m_180(t);
      t = not_null(b_180);
      t = t_89(t);
      if(((f_180 != NULL) && (f_180 != t)))
        _fail(t);
      else
        f_180 = t;
      t = n_180(t);
    }
    return(t);
  }
  if(((x_179 != NULL) && (x_179 != t)))
    _fail(t);
  else
    x_179 = t;
  t = not_null(x_179);
  if(match_cons(t, sym__2))
    {
      y_179 = ATgetArgument(t, 0);
      z_179 = ATgetArgument(t, 1);
      t = l_180(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_68;
  n_68 = t;
  {
    ATerm r_180 = NULL;
    ATerm s_180 = NULL;
    ATerm t_180 (ATerm t)
    {
      t = not_null(s_180);
      if(((r_180 != NULL) && (r_180 != t)))
        _fail(t);
      else
        r_180 = t;
      t = not_null(s_180);
      return(t);
    }
    t = term_z_59;
    t = whoami_0_0(t);
    if(((s_180 != NULL) && (s_180 != t)))
      _fail(t);
    else
      s_180 = t;
    t = t_180(t);
    t = (ATerm) ATmakeAppl(sym__2, term_k_36, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_68), not_null(r_180)), term_o_68));
    t = printnl_0_0(t);
    t = term_w_36;
    t = exit_0_0(t);
  }
  t = n_68;
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm w_180 = NULL,x_180 = NULL,y_180 = NULL;
  ATerm b_181 (ATerm t)
  {
    ATerm z_180 = NULL,a_181 = NULL;
    t = not_null(x_180);
    if(((z_180 != NULL) && (z_180 != t)))
      _fail(t);
    else
      z_180 = t;
    t = not_null(y_180);
    if(((a_181 != NULL) && (a_181 != t)))
      _fail(t);
    else
      a_181 = t;
    t = not_null(w_180);
    {
      ATerm q_68;
      q_68 = t;
      t = SSL_printnl(not_null(z_180), not_null(a_181));
      t = q_68;
    }
    return(t);
  }
  if(((w_180 != NULL) && (w_180 != t)))
    _fail(t);
  else
    w_180 = t;
  t = not_null(w_180);
  if(match_cons(t, sym__2))
    {
      x_180 = ATgetArgument(t, 0);
      y_180 = ATgetArgument(t, 1);
      t = b_181(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm d_181 = NULL;
  ATerm f_181 (ATerm t)
  {
    ATerm e_181 = NULL;
    t = not_null(d_181);
    if(((e_181 != NULL) && (e_181 != t)))
      _fail(t);
    else
      e_181 = t;
    t = not_null(d_181);
    t = SSL_implode_string(not_null(e_181));
    return(t);
  }
  if(((d_181 != NULL) && (d_181 != t)))
    _fail(t);
  else
    d_181 = t;
  t = f_181(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_68 = t;
  int s_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(s_68);
    }
  else
    {
      t = r_68;
      {
        ATerm i_181 = NULL,j_181 = NULL,k_181 = NULL;
        ATerm o_181 (ATerm t)
        {
          ATerm l_181 = NULL,m_181 = NULL;
          t = not_null(j_181);
          if(((l_181 != NULL) && (l_181 != t)))
            _fail(t);
          else
            l_181 = t;
          t = not_null(k_181);
          if(((m_181 != NULL) && (m_181 != t)))
            _fail(t);
          else
            m_181 = t;
          t = not_null(l_181);
          {
            ATerm m_10 (ATerm t)
            {
              t = not_null(m_181);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(m_10, t);
          }
          return(t);
        }
        if(((i_181 != NULL) && (i_181 != t)))
          _fail(t);
        else
          i_181 = t;
        t = not_null(i_181);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_181 = ATgetFirst((ATermList) t);
            k_181 = (ATerm) ATgetNext((ATermList) t);
            t = o_181(t);
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
  ATerm u_181 = NULL;
  ATerm c_182 (ATerm t)
  {
    ATerm v_181 = NULL,w_181 = NULL;
    t = not_null(u_181);
    if(((v_181 != NULL) && (v_181 != t)))
      _fail(t);
    else
      v_181 = t;
    t = not_null(u_181);
    {
      ATerm x_181 = NULL;
      ATerm d_182 (ATerm t)
      {
        ATerm y_181 = NULL,z_181 = NULL,a_182 = NULL,b_182 = NULL;
        ATerm e_182 (ATerm t)
        {
          t = not_null(b_182);
          if(((w_181 != NULL) && (w_181 != t)))
            _fail(t);
          else
            w_181 = t;
          t = not_null(z_181);
          return(t);
        }
        t = not_null(x_181);
        if(((y_181 != NULL) && (y_181 != t)))
          _fail(t);
        else
          y_181 = t;
        t = not_null(x_181);
        t = SSL_explode_term(not_null(y_181));
        if(((z_181 != NULL) && (z_181 != t)))
          _fail(t);
        else
          z_181 = t;
        t = not_null(z_181);
        if(match_cons(t, sym__2))
          {
            a_182 = ATgetArgument(t, 0);
            b_182 = ATgetArgument(t, 1);
            t = not_null(a_182);
            if(match_string(t, ""))
              {
                t = e_182(t);
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
      t = not_null(v_181);
      if(((x_181 != NULL) && (x_181 != t)))
        _fail(t);
      else
        x_181 = t;
      t = d_182(t);
      t = not_null(w_181);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((u_181 != NULL) && (u_181 != t)))
    _fail(t);
  else
    u_181 = t;
  t = c_182(t);
  return(t);
}
ATerm at_end_1_0 (ATerm c_113 (ATerm), ATerm t)
{
  ATerm f_182 (ATerm t)
  {
    ATerm t_68 = t;
    int u_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, f_182, t);
        ;
        LocalPopChoice(u_68);
      }
    else
      {
        t = t_68;
        t = Nil_0_0(t);
        t = c_113(t);
      }
    return(t);
  }
  t = f_182(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm i_182 = NULL,j_182 = NULL,k_182 = NULL;
  ATerm n_182 (ATerm t)
  {
    ATerm l_182 = NULL,m_182 = NULL;
    t = not_null(j_182);
    if(((m_182 != NULL) && (m_182 != t)))
      _fail(t);
    else
      m_182 = t;
    t = not_null(k_182);
    if(((l_182 != NULL) && (l_182 != t)))
      _fail(t);
    else
      l_182 = t;
    t = not_null(m_182);
    {
      ATerm n_10 (ATerm t)
      {
        t = not_null(l_182);
        return(t);
      }
      t = at_end_1_0(n_10, t);
    }
    return(t);
  }
  if(((i_182 != NULL) && (i_182 != t)))
    _fail(t);
  else
    i_182 = t;
  t = not_null(i_182);
  if(match_cons(t, sym__2))
    {
      j_182 = ATgetArgument(t, 0);
      k_182 = ATgetArgument(t, 1);
      t = n_182(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_68 = t;
  int w_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(w_68);
    }
  else
    {
      t = v_68;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm p_182 = NULL;
  ATerm r_182 (ATerm t)
  {
    ATerm q_182 = NULL;
    t = not_null(p_182);
    if(((q_182 != NULL) && (q_182 != t)))
      _fail(t);
    else
      q_182 = t;
    t = not_null(p_182);
    t = SSL_explode_string(not_null(q_182));
    return(t);
  }
  if(((p_182 != NULL) && (p_182 != t)))
    _fail(t);
  else
    p_182 = t;
  t = r_182(t);
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
  ATerm x_68 = t;
  int y_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(y_68);
    }
  else
    {
      t = x_68;
      {
        ATerm z_68 = t;
        int a_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_10 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(o_10, t);
            ;
            LocalPopChoice(a_69);
          }
        else
          {
            t = z_68;
            {
              ATerm y_182 = NULL,z_182 = NULL,a_183 = NULL;
              ATerm j_183 (ATerm t)
              {
                ATerm b_183 = NULL;
                t = not_null(z_182);
                if(((b_183 != NULL) && (b_183 != t)))
                  _fail(t);
                else
                  b_183 = t;
                t = not_null(b_183);
                return(t);
              }
              ATerm k_183 (ATerm t)
              {
                ATerm c_183 = NULL;
                t = not_null(z_182);
                if(((c_183 != NULL) && (c_183 != t)))
                  _fail(t);
                else
                  c_183 = t;
                t = not_null(c_183);
                {
                  ATerm b_69 = t;
                  int c_69 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(c_69);
                    }
                  else
                    {
                      t = b_69;
                      {
                        ATerm p_10 (ATerm t)
                        {
                          t = term_m_69;
                          return(t);
                        }
                        t = debug_1_0(p_10, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm l_183 (ATerm t)
              {
                ATerm d_183 = NULL,e_183 = NULL,f_183 = NULL,h_183 = NULL;
                t = not_null(z_182);
                if(((d_183 != NULL) && (d_183 != t)))
                  _fail(t);
                else
                  d_183 = t;
                t = not_null(a_183);
                if(((e_183 != NULL) && (e_183 != t)))
                  _fail(t);
                else
                  e_183 = t;
                t = not_null(y_182);
                {
                  ATerm n_69;
                  n_69 = t;
                  {
                    ATerm g_183 = NULL;
                    ATerm m_183 (ATerm t)
                    {
                      t = not_null(g_183);
                      if(((f_183 != NULL) && (f_183 != t)))
                        _fail(t);
                      else
                        f_183 = t;
                      t = not_null(g_183);
                      return(t);
                    }
                    t = not_null(d_183);
                    t = eval_config_0_0(t);
                    if(((g_183 != NULL) && (g_183 != t)))
                      _fail(t);
                    else
                      g_183 = t;
                    t = m_183(t);
                  }
                  t = n_69;
                  {
                    ATerm i_183 = NULL;
                    ATerm n_183 (ATerm t)
                    {
                      t = not_null(i_183);
                      if(((h_183 != NULL) && (h_183 != t)))
                        _fail(t);
                      else
                        h_183 = t;
                      t = not_null(i_183);
                      return(t);
                    }
                    t = not_null(e_183);
                    t = eval_config_0_0(t);
                    if(((i_183 != NULL) && (i_183 != t)))
                      _fail(t);
                    else
                      i_183 = t;
                    t = n_183(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(f_183), not_null(h_183));
                    t = conc_strings_0_0(t);
                  }
                }
                return(t);
              }
              if(((y_182 != NULL) && (y_182 != t)))
                _fail(t);
              else
                y_182 = t;
              t = not_null(y_182);
              if(match_cons(t, sym_Path_1))
                {
                  z_182 = ATgetArgument(t, 0);
                  t = j_183(t);
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_182 = ATgetArgument(t, 0);
                      t = k_183(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_182 = ATgetArgument(t, 0);
                          a_183 = ATgetArgument(t, 1);
                          t = l_183(t);
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
  ATerm q_183 = NULL;
  ATerm u_183 (ATerm t)
  {
    ATerm r_183 = NULL;
    t = not_null(q_183);
    if(((r_183 != NULL) && (r_183 != t)))
      _fail(t);
    else
      r_183 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_o_69, not_null(r_183));
    t = table_get_0_0(t);
    {
      ATerm q_10 (ATerm t)
      {
        t = eval_config_0_0(t);
        {
          ATerm x_69;
          x_69 = t;
          {
            ATerm s_183 = NULL;
            ATerm t_183 = NULL;
            ATerm v_183 (ATerm t)
            {
              t = not_null(t_183);
              if(((s_183 != NULL) && (s_183 != t)))
                _fail(t);
              else
                s_183 = t;
              t = not_null(t_183);
              return(t);
            }
            if(((t_183 != NULL) && (t_183 != t)))
              _fail(t);
            else
              t_183 = t;
            t = v_183(t);
            t = (ATerm) ATmakeAppl(sym__3, term_o_69, not_null(r_183), not_null(s_183));
            t = table_put_0_0(t);
          }
          t = x_69;
        }
        return(t);
      }
      t = try_1_0(q_10, t);
    }
    return(t);
  }
  if(((q_183 != NULL) && (q_183 != t)))
    _fail(t);
  else
    q_183 = t;
  t = u_183(t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm c_126 (ATerm), ATerm t)
{
  ATerm r_10 (ATerm t)
  {
    ATerm y_69;
    y_69 = t;
    {
      ATerm x_183 = NULL;
      ATerm y_183 = NULL;
      ATerm z_183 (ATerm t)
      {
        t = not_null(y_183);
        if(((x_183 != NULL) && (x_183 != t)))
          _fail(t);
        else
          x_183 = t;
        t = not_null(y_183);
        return(t);
      }
      t = term_c_25;
      t = get_config_0_0(t);
      if(((y_183 != NULL) && (y_183 != t)))
        _fail(t);
      else
        y_183 = t;
      t = z_183(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_183), term_z_69);
      t = geq_0_0(t);
    }
    t = y_69;
    t = c_126(t);
    return(t);
  }
  t = try_1_0(r_10, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm e_184 = NULL,f_184 = NULL,g_184 = NULL,h_184 = NULL;
  ATerm m_184 (ATerm t)
  {
    ATerm i_184 = NULL,j_184 = NULL,k_184 = NULL;
    t = not_null(f_184);
    if(((i_184 != NULL) && (i_184 != t)))
      _fail(t);
    else
      i_184 = t;
    t = not_null(h_184);
    if(((j_184 != NULL) && (j_184 != t)))
      _fail(t);
    else
      j_184 = t;
    t = not_null(e_184);
    t = SSL_fputc(not_null(i_184), not_null(j_184));
    {
      ATerm l_184 = NULL;
      ATerm n_184 (ATerm t)
      {
        t = not_null(l_184);
        if(((k_184 != NULL) && (k_184 != t)))
          _fail(t);
        else
          k_184 = t;
        t = not_null(l_184);
        return(t);
      }
      if(((l_184 != NULL) && (l_184 != t)))
        _fail(t);
      else
        l_184 = t;
      t = n_184(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_184));
    }
    return(t);
  }
  if(((e_184 != NULL) && (e_184 != t)))
    _fail(t);
  else
    e_184 = t;
  t = not_null(e_184);
  if(match_cons(t, sym__2))
    {
      f_184 = ATgetArgument(t, 0);
      g_184 = ATgetArgument(t, 1);
      t = not_null(g_184);
      if(match_cons(t, sym_Stream_1))
        {
          h_184 = ATgetArgument(t, 0);
          t = m_184(t);
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
  ATerm s_184 = NULL,t_184 = NULL,u_184 = NULL,v_184 = NULL;
  ATerm a_185 (ATerm t)
  {
    ATerm w_184 = NULL,x_184 = NULL,y_184 = NULL;
    t = not_null(u_184);
    if(((w_184 != NULL) && (w_184 != t)))
      _fail(t);
    else
      w_184 = t;
    t = not_null(v_184);
    if(((x_184 != NULL) && (x_184 != t)))
      _fail(t);
    else
      x_184 = t;
    t = not_null(s_184);
    t = SSL_write_term_to_stream_text(not_null(w_184), not_null(x_184));
    {
      ATerm z_184 = NULL;
      ATerm b_185 (ATerm t)
      {
        t = not_null(z_184);
        if(((y_184 != NULL) && (y_184 != t)))
          _fail(t);
        else
          y_184 = t;
        t = not_null(z_184);
        return(t);
      }
      if(((z_184 != NULL) && (z_184 != t)))
        _fail(t);
      else
        z_184 = t;
      t = b_185(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_184));
    }
    return(t);
  }
  if(((s_184 != NULL) && (s_184 != t)))
    _fail(t);
  else
    s_184 = t;
  t = not_null(s_184);
  if(match_cons(t, sym__2))
    {
      t_184 = ATgetArgument(t, 0);
      v_184 = ATgetArgument(t, 1);
      t = not_null(t_184);
      if(match_cons(t, sym_Stream_1))
        {
          u_184 = ATgetArgument(t, 0);
          t = a_185(t);
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
  ATerm s_10 (ATerm t)
  {
    ATerm d_185 = NULL;
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm e_185 = NULL;
      ATerm f_185 (ATerm t)
      {
        t = not_null(e_185);
        if(((d_185 != NULL) && (d_185 != t)))
          _fail(t);
        else
          d_185 = t;
        t = not_null(e_185);
        return(t);
      }
      if(((e_185 != NULL) && (e_185 != t)))
        _fail(t);
      else
        e_185 = t;
      t = f_185(t);
      t = (ATerm) ATmakeAppl(sym__2, term_m_66, not_null(d_185));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(s_10, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm k_185 = NULL,l_185 = NULL,m_185 = NULL,n_185 = NULL;
  ATerm s_185 (ATerm t)
  {
    ATerm o_185 = NULL,p_185 = NULL,q_185 = NULL;
    t = not_null(m_185);
    if(((o_185 != NULL) && (o_185 != t)))
      _fail(t);
    else
      o_185 = t;
    t = not_null(n_185);
    if(((p_185 != NULL) && (p_185 != t)))
      _fail(t);
    else
      p_185 = t;
    t = not_null(k_185);
    t = SSL_write_term_to_stream_baf(not_null(o_185), not_null(p_185));
    {
      ATerm r_185 = NULL;
      ATerm t_185 (ATerm t)
      {
        t = not_null(r_185);
        if(((q_185 != NULL) && (q_185 != t)))
          _fail(t);
        else
          q_185 = t;
        t = not_null(r_185);
        return(t);
      }
      if(((r_185 != NULL) && (r_185 != t)))
        _fail(t);
      else
        r_185 = t;
      t = t_185(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_185));
    }
    return(t);
  }
  if(((k_185 != NULL) && (k_185 != t)))
    _fail(t);
  else
    k_185 = t;
  t = not_null(k_185);
  if(match_cons(t, sym__2))
    {
      l_185 = ATgetArgument(t, 0);
      n_185 = ATgetArgument(t, 1);
      t = not_null(l_185);
      if(match_cons(t, sym_Stream_1))
        {
          m_185 = ATgetArgument(t, 0);
          t = s_185(t);
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
ATerm WriteToFile_1_0 (ATerm y_124 (ATerm), ATerm t)
{
  ATerm y_185 = NULL,z_185 = NULL,a_186 = NULL;
  ATerm h_186 (ATerm t)
  {
    ATerm b_186 = NULL,c_186 = NULL,d_186 = NULL,f_186 = NULL;
    t = not_null(z_185);
    if(((b_186 != NULL) && (b_186 != t)))
      _fail(t);
    else
      b_186 = t;
    t = not_null(a_186);
    if(((c_186 != NULL) && (c_186 != t)))
      _fail(t);
    else
      c_186 = t;
    t = not_null(b_186);
    {
      ATerm e_186 = NULL;
      ATerm i_186 (ATerm t)
      {
        t = not_null(e_186);
        if(((d_186 != NULL) && (d_186 != t)))
          _fail(t);
        else
          d_186 = t;
        t = not_null(e_186);
        return(t);
      }
      if(((e_186 != NULL) && (e_186 != t)))
        _fail(t);
      else
        e_186 = t;
      t = i_186(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_186), term_a_70);
      t = open_stream_0_0(t);
      {
        ATerm g_186 = NULL;
        ATerm j_186 (ATerm t)
        {
          t = not_null(g_186);
          if(((f_186 != NULL) && (f_186 != t)))
            _fail(t);
          else
            f_186 = t;
          t = not_null(g_186);
          return(t);
        }
        if(((g_186 != NULL) && (g_186 != t)))
          _fail(t);
        else
          g_186 = t;
        t = j_186(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_186), not_null(c_186));
        t = y_124(t);
        t = fclose_0_0(t);
        t = not_null(c_186);
      }
    }
    return(t);
  }
  if(((y_185 != NULL) && (y_185 != t)))
    _fail(t);
  else
    y_185 = t;
  t = not_null(y_185);
  if(match_cons(t, sym__2))
    {
      z_185 = ATgetArgument(t, 0);
      a_186 = ATgetArgument(t, 1);
      t = h_186(t);
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
  ATerm o_186 = NULL;
  ATerm g_70;
  g_70 = t;
  {
    ATerm t_10 (ATerm t)
    {
      ATerm h_70 = t;
      int i_70 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_10 (ATerm t)
          {
            ATerm p_186 = NULL,q_186 = NULL;
            ATerm t_186 (ATerm t)
            {
              t = not_null(q_186);
              if(((o_186 != NULL) && (o_186 != t)))
                _fail(t);
              else
                o_186 = t;
              t = not_null(p_186);
              return(t);
            }
            if(((p_186 != NULL) && (p_186 != t)))
              _fail(t);
            else
              p_186 = t;
            t = not_null(p_186);
            if(match_cons(t, sym_Output_1))
              {
                q_186 = ATgetArgument(t, 0);
                t = t_186(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1_0(u_10, t);
          ;
          LocalPopChoice(i_70);
        }
      else
        {
          t = h_70;
          {
            ATerm r_186 = NULL;
            ATerm u_186 (ATerm t)
            {
              t = not_null(r_186);
              if(((o_186 != NULL) && (o_186 != t)))
                _fail(t);
              else
                o_186 = t;
              t = not_null(r_186);
              return(t);
            }
            t = term_j_70;
            if(((r_186 != NULL) && (r_186 != t)))
              _fail(t);
            else
              r_186 = t;
            t = u_186(t);
          }
        }
      return(t);
    }
    t = _2_0(t_10, _id, t);
  }
  t = g_70;
  {
    ATerm v_10 (ATerm t)
    {
      ATerm w_10 (ATerm t)
      {
        t = not_null(o_186);
        return(t);
      }
      t = split_2_0(w_10, _id, t);
      return(t);
    }
    t = _2_0(_id, v_10, t);
    {
      ATerm k_70 = t;
      int l_70 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_10 (ATerm t)
          {
            ATerm y_10 (ATerm t)
            {
              ATerm s_186 = NULL;
              if(((s_186 != NULL) && (s_186 != t)))
                _fail(t);
              else
                s_186 = t;
              t = not_null(s_186);
              if(match_cons(t, sym_Binary_0))
                {
                  t = not_null(s_186);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1_0(y_10, t);
            return(t);
          }
          t = _2_0(x_10, WriteToBinaryFile_0_0, t);
          ;
          LocalPopChoice(l_70);
        }
      else
        {
          t = k_70;
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
ATerm apply_strategy_1_0 (ATerm a_128 (ATerm), ATerm t)
{
  ATerm y_186 = NULL,a_187 = NULL,b_187 = NULL,c_187 = NULL;
  ATerm g_187 (ATerm t)
  {
    ATerm d_187 = NULL,e_187 = NULL;
    t = not_null(b_187);
    if(((d_187 != NULL) && (d_187 != t)))
      _fail(t);
    else
      d_187 = t;
    t = not_null(c_187);
    if(((e_187 != NULL) && (e_187 != t)))
      _fail(t);
    else
      e_187 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_187)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(y_186))), not_null(e_187));
    return(t);
  }
  ATerm m_70;
  m_70 = t;
  t = dtime_0_0(t);
  t = m_70;
  t = a_128(t);
  {
    ATerm n_70;
    n_70 = t;
    {
      ATerm z_186 = NULL;
      ATerm f_187 (ATerm t)
      {
        t = not_null(z_186);
        if(((y_186 != NULL) && (y_186 != t)))
          _fail(t);
        else
          y_186 = t;
        t = not_null(z_186);
        return(t);
      }
      t = dtime_0_0(t);
      if(((z_186 != NULL) && (z_186 != t)))
        _fail(t);
      else
        z_186 = t;
      t = f_187(t);
    }
    t = n_70;
    if(((a_187 != NULL) && (a_187 != t)))
      _fail(t);
    else
      a_187 = t;
    t = not_null(a_187);
    if(match_cons(t, sym__2))
      {
        b_187 = ATgetArgument(t, 0);
        c_187 = ATgetArgument(t, 1);
        t = g_187(t);
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
  ATerm k_187 = NULL,l_187 = NULL;
  ATerm q_187 (ATerm t)
  {
    ATerm m_187 = NULL;
    t = not_null(k_187);
    if(((m_187 != NULL) && (m_187 != t)))
      _fail(t);
    else
      m_187 = t;
    t = not_null(l_187);
    t = SSL_fclose(not_null(m_187));
    return(t);
  }
  ATerm r_187 (ATerm t)
  {
    ATerm p_187 = NULL;
    t = not_null(l_187);
    if(((p_187 != NULL) && (p_187 != t)))
      _fail(t);
    else
      p_187 = t;
    t = not_null(l_187);
    t = SSL_fclose(not_null(p_187));
    return(t);
  }
  if(((l_187 != NULL) && (l_187 != t)))
    _fail(t);
  else
    l_187 = t;
  t = not_null(l_187);
  if(match_cons(t, sym_Stream_1))
    {
      k_187 = ATgetArgument(t, 0);
      {
        ATerm o_70 = t;
        int p_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_187(t);
            ;
            LocalPopChoice(p_70);
          }
        else
          {
            t = o_70;
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
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm u_187 = NULL,v_187 = NULL;
  ATerm x_187 (ATerm t)
  {
    ATerm w_187 = NULL;
    t = not_null(v_187);
    if(((w_187 != NULL) && (w_187 != t)))
      _fail(t);
    else
      w_187 = t;
    t = not_null(u_187);
    t = SSL_read_term_from_stream(not_null(w_187));
    return(t);
  }
  if(((u_187 != NULL) && (u_187 != t)))
    _fail(t);
  else
    u_187 = t;
  t = not_null(u_187);
  if(match_cons(t, sym_Stream_1))
    {
      v_187 = ATgetArgument(t, 0);
      t = x_187(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm k_124 (ATerm), ATerm t)
{
  ATerm s_70;
  s_70 = t;
  {
    ATerm a_188 = NULL,c_188 = NULL;
    ATerm u_70;
    u_70 = t;
    {
      ATerm b_188 = NULL;
      ATerm e_188 (ATerm t)
      {
        t = not_null(b_188);
        if(((a_188 != NULL) && (a_188 != t)))
          _fail(t);
        else
          a_188 = t;
        t = not_null(b_188);
        return(t);
      }
      t = k_124(t);
      if(((b_188 != NULL) && (b_188 != t)))
        _fail(t);
      else
        b_188 = t;
      t = e_188(t);
    }
    t = u_70;
    {
      ATerm d_188 = NULL;
      ATerm f_188 (ATerm t)
      {
        t = not_null(d_188);
        if(((c_188 != NULL) && (c_188 != t)))
          _fail(t);
        else
          c_188 = t;
        t = not_null(d_188);
        return(t);
      }
      if(((d_188 != NULL) && (d_188 != t)))
        _fail(t);
      else
        d_188 = t;
      t = f_188(t);
      t = (ATerm) ATmakeAppl(sym__2, term_k_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_188)), not_null(a_188)));
      t = printnl_0_0(t);
    }
  }
  t = s_70;
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm j_188 = NULL,k_188 = NULL,l_188 = NULL;
  ATerm q_188 (ATerm t)
  {
    ATerm m_188 = NULL,n_188 = NULL,o_188 = NULL;
    t = not_null(k_188);
    if(((m_188 != NULL) && (m_188 != t)))
      _fail(t);
    else
      m_188 = t;
    t = not_null(l_188);
    if(((n_188 != NULL) && (n_188 != t)))
      _fail(t);
    else
      n_188 = t;
    t = not_null(j_188);
    t = SSL_fopen(not_null(m_188), not_null(n_188));
    {
      ATerm p_188 = NULL;
      ATerm r_188 (ATerm t)
      {
        t = not_null(p_188);
        if(((o_188 != NULL) && (o_188 != t)))
          _fail(t);
        else
          o_188 = t;
        t = not_null(p_188);
        return(t);
      }
      if(((p_188 != NULL) && (p_188 != t)))
        _fail(t);
      else
        p_188 = t;
      t = r_188(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_188));
    }
    return(t);
  }
  if(((j_188 != NULL) && (j_188 != t)))
    _fail(t);
  else
    j_188 = t;
  t = not_null(j_188);
  if(match_cons(t, sym__2))
    {
      k_188 = ATgetArgument(t, 0);
      l_188 = ATgetArgument(t, 1);
      t = q_188(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm t_188 = NULL;
  ATerm v_188 (ATerm t)
  {
    ATerm u_188 = NULL;
    t = not_null(t_188);
    if(((u_188 != NULL) && (u_188 != t)))
      _fail(t);
    else
      u_188 = t;
    t = not_null(t_188);
    t = SSL_is_string(not_null(u_188));
    return(t);
  }
  if(((t_188 != NULL) && (t_188 != t)))
    _fail(t);
  else
    t_188 = t;
  t = v_188(t);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_188 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm y_188 = NULL;
    ATerm z_188 (ATerm t)
    {
      t = not_null(y_188);
      if(((x_188 != NULL) && (x_188 != t)))
        _fail(t);
      else
        x_188 = t;
      t = not_null(y_188);
      return(t);
    }
    if(((y_188 != NULL) && (y_188 != t)))
      _fail(t);
    else
      y_188 = t;
    t = z_188(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_188));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_189 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm c_189 = NULL;
    ATerm d_189 (ATerm t)
    {
      t = not_null(c_189);
      if(((b_189 != NULL) && (b_189 != t)))
        _fail(t);
      else
        b_189 = t;
      t = not_null(c_189);
      return(t);
    }
    if(((c_189 != NULL) && (c_189 != t)))
      _fail(t);
    else
      c_189 = t;
    t = d_189(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_189));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_189 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm g_189 = NULL;
    ATerm h_189 (ATerm t)
    {
      t = not_null(g_189);
      if(((f_189 != NULL) && (f_189 != t)))
        _fail(t);
      else
        f_189 = t;
      t = not_null(g_189);
      return(t);
    }
    if(((g_189 != NULL) && (g_189 != t)))
      _fail(t);
    else
      g_189 = t;
    t = h_189(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_189));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm m_189 = NULL;
  ATerm n_189 (ATerm t)
  {
    t = not_null(m_189);
    t = stderr_stream_0_0(t);
    return(t);
  }
  ATerm o_189 (ATerm t)
  {
    t = not_null(m_189);
    t = stdout_stream_0_0(t);
    return(t);
  }
  ATerm p_189 (ATerm t)
  {
    t = not_null(m_189);
    t = stdin_stream_0_0(t);
    return(t);
  }
  if(((m_189 != NULL) && (m_189 != t)))
    _fail(t);
  else
    m_189 = t;
  t = not_null(m_189);
  if(match_cons(t, sym_stderr_0))
    {
      t = n_189(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_189(t);
        }
      else
        {
          if(match_cons(t, sym_stdin_0))
            {
              t = p_189(t);
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
  ATerm w_189 = NULL;
  ATerm h_190 (ATerm t)
  {
    ATerm x_189 = NULL,y_189 = NULL,z_189 = NULL;
    t = not_null(w_189);
    if(((x_189 != NULL) && (x_189 != t)))
      _fail(t);
    else
      x_189 = t;
    t = not_null(w_189);
    {
      ATerm a_190 = NULL;
      ATerm i_190 (ATerm t)
      {
        ATerm b_190 = NULL,c_190 = NULL,d_190 = NULL,e_190 = NULL,f_190 = NULL,g_190 = NULL;
        ATerm j_190 (ATerm t)
        {
          t = not_null(f_190);
          if(((z_189 != NULL) && (z_189 != t)))
            _fail(t);
          else
            z_189 = t;
          t = not_null(g_190);
          if(((y_189 != NULL) && (y_189 != t)))
            _fail(t);
          else
            y_189 = t;
          t = not_null(c_190);
          return(t);
        }
        t = not_null(a_190);
        if(((b_190 != NULL) && (b_190 != t)))
          _fail(t);
        else
          b_190 = t;
        t = not_null(a_190);
        t = SSL_explode_term(not_null(b_190));
        if(((c_190 != NULL) && (c_190 != t)))
          _fail(t);
        else
          c_190 = t;
        t = not_null(c_190);
        if(match_cons(t, sym__2))
          {
            d_190 = ATgetArgument(t, 0);
            e_190 = ATgetArgument(t, 1);
            t = not_null(d_190);
            if(match_string(t, ""))
              {
                t = not_null(e_190);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_190 = ATgetFirst((ATermList) t);
                    g_190 = (ATerm) ATgetNext((ATermList) t);
                    t = j_190(t);
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
      t = not_null(x_189);
      if(((a_190 != NULL) && (a_190 != t)))
        _fail(t);
      else
        a_190 = t;
      t = i_190(t);
      t = not_null(z_189);
    }
    return(t);
  }
  if(((w_189 != NULL) && (w_189 != t)))
    _fail(t);
  else
    w_189 = t;
  t = h_190(t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm o_190 = NULL,p_190 = NULL,q_190 = NULL;
  ATerm u_190 (ATerm t)
  {
    t = not_null(o_190);
    {
      ATerm v_70 = t;
      int w_70 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Fst_0_0(t);
          t = stdio_stream_0_0(t);
          ;
          LocalPopChoice(w_70);
        }
      else
        {
          t = v_70;
          {
            ATerm x_70 = t;
            int y_70 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_10 (ATerm t)
                {
                  ATerm r_190 = NULL,s_190 = NULL;
                  ATerm v_190 (ATerm t)
                  {
                    ATerm t_190 = NULL;
                    t = not_null(s_190);
                    if(((t_190 != NULL) && (t_190 != t)))
                      _fail(t);
                    else
                      t_190 = t;
                    t = not_null(t_190);
                    return(t);
                  }
                  if(((r_190 != NULL) && (r_190 != t)))
                    _fail(t);
                  else
                    r_190 = t;
                  t = not_null(r_190);
                  if(match_cons(t, sym_Path_1))
                    {
                      s_190 = ATgetArgument(t, 0);
                      t = v_190(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = _2_0(z_10, _id, t);
                t = fopen_0_0(t);
                ;
                LocalPopChoice(y_70);
              }
            else
              {
                t = x_70;
                t = _2_0(is_string_0_0, _id, t);
                t = fopen_0_0(t);
              }
          }
        }
    }
    return(t);
  }
  if(((o_190 != NULL) && (o_190 != t)))
    _fail(t);
  else
    o_190 = t;
  t = not_null(o_190);
  if(match_cons(t, sym__2))
    {
      p_190 = ATgetArgument(t, 0);
      q_190 = ATgetArgument(t, 1);
      t = u_190(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_191 = NULL;
  ATerm z_70 = t;
  int a_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_190 = NULL;
      ATerm z_190 = NULL;
      ATerm c_191 (ATerm t)
      {
        t = not_null(z_190);
        if(((y_190 != NULL) && (y_190 != t)))
          _fail(t);
        else
          y_190 = t;
        t = not_null(z_190);
        return(t);
      }
      if(((z_190 != NULL) && (z_190 != t)))
        _fail(t);
      else
        z_190 = t;
      t = c_191(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_190), term_b_71);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_71);
    }
  else
    {
      t = z_70;
      {
        ATerm a_11 (ATerm t)
        {
          t = term_c_71;
          return(t);
        }
        t = debug_1_0(a_11, t);
        _fail(t);
      }
    }
  {
    ATerm d_71;
    d_71 = t;
    {
      ATerm b_191 = NULL;
      ATerm d_191 (ATerm t)
      {
        t = not_null(b_191);
        if(((a_191 != NULL) && (a_191 != t)))
          _fail(t);
        else
          a_191 = t;
        t = not_null(b_191);
        return(t);
      }
      t = read_from_stream_0_0(t);
      if(((b_191 != NULL) && (b_191 != t)))
        _fail(t);
      else
        b_191 = t;
      t = d_191(t);
    }
    t = d_71;
    t = fclose_0_0(t);
    t = not_null(a_191);
  }
  return(t);
}
ATerm split_2_0 (ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm t)
{
  ATerm g_191 = NULL,i_191 = NULL;
  ATerm e_71;
  e_71 = t;
  {
    ATerm h_191 = NULL;
    ATerm k_191 (ATerm t)
    {
      t = not_null(h_191);
      if(((g_191 != NULL) && (g_191 != t)))
        _fail(t);
      else
        g_191 = t;
      t = not_null(h_191);
      return(t);
    }
    t = c_120(t);
    if(((h_191 != NULL) && (h_191 != t)))
      _fail(t);
    else
      h_191 = t;
    t = k_191(t);
  }
  t = e_71;
  {
    ATerm j_191 = NULL;
    ATerm l_191 (ATerm t)
    {
      t = not_null(j_191);
      if(((i_191 != NULL) && (i_191 != t)))
        _fail(t);
      else
        i_191 = t;
      t = not_null(j_191);
      return(t);
    }
    t = d_120(t);
    if(((j_191 != NULL) && (j_191 != t)))
      _fail(t);
    else
      j_191 = t;
    t = l_191(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_191), not_null(i_191));
  }
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm p_191 = NULL;
  ATerm f_71;
  f_71 = t;
  {
    ATerm g_71 = t;
    int h_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_11 (ATerm t)
        {
          ATerm q_191 = NULL,r_191 = NULL;
          ATerm t_191 (ATerm t)
          {
            t = not_null(r_191);
            if(((p_191 != NULL) && (p_191 != t)))
              _fail(t);
            else
              p_191 = t;
            t = not_null(q_191);
            return(t);
          }
          if(((q_191 != NULL) && (q_191 != t)))
            _fail(t);
          else
            q_191 = t;
          t = not_null(q_191);
          if(match_cons(t, sym_Input_1))
            {
              r_191 = ATgetArgument(t, 0);
              t = t_191(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1_0(b_11, t);
        ;
        LocalPopChoice(h_71);
      }
    else
      {
        t = g_71;
        {
          ATerm s_191 = NULL;
          ATerm u_191 (ATerm t)
          {
            t = not_null(s_191);
            if(((p_191 != NULL) && (p_191 != t)))
              _fail(t);
            else
              p_191 = t;
            t = not_null(s_191);
            return(t);
          }
          t = term_i_71;
          if(((s_191 != NULL) && (s_191 != t)))
            _fail(t);
          else
            s_191 = t;
          t = u_191(t);
        }
      }
  }
  t = f_71;
  {
    ATerm c_11 (ATerm t)
    {
      t = not_null(p_191);
      t = ReadFromFile_0_0(t);
      return(t);
    }
    t = split_2_0(_id, c_11, t);
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm d_11 (ATerm t)
  {
    ATerm x_191 = NULL;
    if(((x_191 != NULL) && (x_191 != t)))
      _fail(t);
    else
      x_191 = t;
    t = not_null(x_191);
    if(match_string(t, "-k"))
      {
        t = not_null(x_191);
      }
    else
      {
        if(match_string(t, "--keep"))
          {
            t = not_null(x_191);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_11 (ATerm t)
  {
    ATerm j_71;
    j_71 = t;
    {
      ATerm y_191 = NULL;
      ATerm z_191 = NULL;
      ATerm a_192 (ATerm t)
      {
        t = not_null(z_191);
        if(((y_191 != NULL) && (y_191 != t)))
          _fail(t);
        else
          y_191 = t;
        t = not_null(z_191);
        return(t);
      }
      t = string_to_int_0_0(t);
      if(((z_191 != NULL) && (z_191 != t)))
        _fail(t);
      else
        z_191 = t;
      t = a_192(t);
      t = (ATerm) ATmakeAppl(sym__2, term_k_71, not_null(y_191));
      t = set_config_0_0(t);
    }
    t = j_71;
    return(t);
  }
  ATerm f_11 (ATerm t)
  {
    t = term_l_71;
    return(t);
  }
  t = ArgOption_3_0(d_11, e_11, f_11, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm c_192 = NULL;
  ATerm e_192 (ATerm t)
  {
    ATerm d_192 = NULL;
    t = not_null(c_192);
    if(((d_192 != NULL) && (d_192 != t)))
      _fail(t);
    else
      d_192 = t;
    t = not_null(c_192);
    t = SSL_string_to_int(not_null(d_192));
    return(t);
  }
  if(((c_192 != NULL) && (c_192 != t)))
    _fail(t);
  else
    c_192 = t;
  t = e_192(t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_71 = t;
  int n_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_11 (ATerm t)
      {
        ATerm k_192 = NULL;
        if(((k_192 != NULL) && (k_192 != t)))
          _fail(t);
        else
          k_192 = t;
        t = not_null(k_192);
        if(match_string(t, "-S"))
          {
            t = not_null(k_192);
          }
        else
          {
            if(match_string(t, "--silent"))
              {
                t = not_null(k_192);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm h_11 (ATerm t)
      {
        t = term_o_71;
        t = set_config_0_0(t);
        t = term_p_71;
        return(t);
      }
      ATerm i_11 (ATerm t)
      {
        t = term_q_71;
        return(t);
      }
      t = Option_3_0(g_11, h_11, i_11, t);
      ;
      LocalPopChoice(n_71);
    }
  else
    {
      t = m_71;
      {
        ATerm r_71 = t;
        int s_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_11 (ATerm t)
            {
              ATerm l_192 = NULL;
              if(((l_192 != NULL) && (l_192 != t)))
                _fail(t);
              else
                l_192 = t;
              t = not_null(l_192);
              if(match_string(t, "--verbose"))
                {
                  t = not_null(l_192);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm k_11 (ATerm t)
            {
              ATerm o_192 = NULL;
              ATerm t_71;
              t_71 = t;
              {
                ATerm m_192 = NULL;
                ATerm n_192 = NULL;
                ATerm r_192 (ATerm t)
                {
                  t = not_null(n_192);
                  if(((m_192 != NULL) && (m_192 != t)))
                    _fail(t);
                  else
                    m_192 = t;
                  t = not_null(n_192);
                  return(t);
                }
                t = string_to_int_0_0(t);
                if(((n_192 != NULL) && (n_192 != t)))
                  _fail(t);
                else
                  n_192 = t;
                t = r_192(t);
                t = (ATerm) ATmakeAppl(sym__2, term_c_25, not_null(m_192));
                t = set_config_0_0(t);
              }
              t = t_71;
              {
                ATerm p_192 = NULL;
                ATerm s_192 (ATerm t)
                {
                  t = not_null(p_192);
                  if(((o_192 != NULL) && (o_192 != t)))
                    _fail(t);
                  else
                    o_192 = t;
                  t = not_null(p_192);
                  return(t);
                }
                if(((p_192 != NULL) && (p_192 != t)))
                  _fail(t);
                else
                  p_192 = t;
                t = s_192(t);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_192));
              }
              return(t);
            }
            ATerm l_11 (ATerm t)
            {
              t = term_u_71;
              return(t);
            }
            t = ArgOption_3_0(j_11, k_11, l_11, t);
            ;
            LocalPopChoice(s_71);
          }
        else
          {
            t = r_71;
            {
              ATerm m_11 (ATerm t)
              {
                ATerm q_192 = NULL;
                if(((q_192 != NULL) && (q_192 != t)))
                  _fail(t);
                else
                  q_192 = t;
                t = not_null(q_192);
                if(match_string(t, "-s"))
                  {
                    t = not_null(q_192);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm n_11 (ATerm t)
              {
                t = term_w_71;
                t = set_config_0_0(t);
                t = term_x_71;
                return(t);
              }
              ATerm o_11 (ATerm t)
              {
                t = term_y_71;
                return(t);
              }
              t = Option_3_0(m_11, n_11, o_11, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm z_71 = t;
  int a_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(a_72);
    }
  else
    {
      t = z_71;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm p_11 (ATerm t)
  {
    ATerm w_192 = NULL;
    if(((w_192 != NULL) && (w_192 != t)))
      _fail(t);
    else
      w_192 = t;
    t = not_null(w_192);
    if(match_string(t, "-o"))
      {
        t = not_null(w_192);
      }
    else
      {
        if(match_string(t, "--output"))
          {
            t = not_null(w_192);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_11 (ATerm t)
  {
    ATerm z_192 = NULL;
    ATerm b_72;
    b_72 = t;
    {
      ATerm x_192 = NULL;
      ATerm y_192 = NULL;
      ATerm b_193 (ATerm t)
      {
        t = not_null(y_192);
        if(((x_192 != NULL) && (x_192 != t)))
          _fail(t);
        else
          x_192 = t;
        t = not_null(y_192);
        return(t);
      }
      if(((y_192 != NULL) && (y_192 != t)))
        _fail(t);
      else
        y_192 = t;
      t = b_193(t);
      t = (ATerm) ATmakeAppl(sym__2, term_c_72, not_null(x_192));
      t = set_config_0_0(t);
    }
    t = b_72;
    {
      ATerm a_193 = NULL;
      ATerm c_193 (ATerm t)
      {
        t = not_null(a_193);
        if(((z_192 != NULL) && (z_192 != t)))
          _fail(t);
        else
          z_192 = t;
        t = not_null(a_193);
        return(t);
      }
      if(((a_193 != NULL) && (a_193 != t)))
        _fail(t);
      else
        a_193 = t;
      t = c_193(t);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_192));
    }
    return(t);
  }
  ATerm r_11 (ATerm t)
  {
    t = term_d_72;
    return(t);
  }
  t = ArgOption_3_0(p_11, q_11, r_11, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm e_72 = t;
  int f_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(f_72);
    }
  else
    {
      t = e_72;
      {
        ATerm s_11 (ATerm t)
        {
          ATerm e_193 = NULL;
          if(((e_193 != NULL) && (e_193 != t)))
            _fail(t);
          else
            e_193 = t;
          t = not_null(e_193);
          if(match_string(t, "-b"))
            {
              t = not_null(e_193);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm t_11 (ATerm t)
        {
          t = term_h_72;
          t = set_config_0_0(t);
          t = term_i_72;
          return(t);
        }
        ATerm u_11 (ATerm t)
        {
          t = term_j_72;
          return(t);
        }
        t = Option_3_0(s_11, t_11, u_11, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm k_193 = NULL,l_193 = NULL,m_193 = NULL,n_193 = NULL,o_193 = NULL;
  ATerm u_193 (ATerm t)
  {
    t = not_null(k_193);
    t = register_usage_1_0(n_0, t);
    return(t);
  }
  ATerm v_193 (ATerm t)
  {
    ATerm p_193 = NULL,q_193 = NULL,r_193 = NULL,s_193 = NULL;
    t = not_null(l_193);
    if(((p_193 != NULL) && (p_193 != t)))
      _fail(t);
    else
      p_193 = t;
    t = not_null(n_193);
    if(((q_193 != NULL) && (q_193 != t)))
      _fail(t);
    else
      q_193 = t;
    t = not_null(o_193);
    if(((r_193 != NULL) && (r_193 != t)))
      _fail(t);
    else
      r_193 = t;
    t = not_null(k_193);
    {
      ATerm m_72;
      m_72 = t;
      t = not_null(p_193);
      t = i_0(t);
      t = m_72;
      {
        ATerm t_193 = NULL;
        ATerm w_193 (ATerm t)
        {
          t = not_null(t_193);
          if(((s_193 != NULL) && (s_193 != t)))
            _fail(t);
          else
            s_193 = t;
          t = not_null(t_193);
          return(t);
        }
        t = not_null(q_193);
        t = k_0(t);
        if(((t_193 != NULL) && (t_193 != t)))
          _fail(t);
        else
          t_193 = t;
        t = w_193(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(r_193)), not_null(s_193));
      }
    }
    return(t);
  }
  if(((k_193 != NULL) && (k_193 != t)))
    _fail(t);
  else
    k_193 = t;
  t = not_null(k_193);
  if(match_string(t, "register-usage-info"))
    {
      t = u_193(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_193 = ATgetFirst((ATermList) t);
          m_193 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(m_193);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_193 = ATgetFirst((ATermList) t);
              o_193 = (ATerm) ATgetNext((ATermList) t);
              t = v_193(t);
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
  ATerm v_11 (ATerm t)
  {
    ATerm a_194 = NULL;
    if(((a_194 != NULL) && (a_194 != t)))
      _fail(t);
    else
      a_194 = t;
    t = not_null(a_194);
    if(match_string(t, "-i"))
      {
        t = not_null(a_194);
      }
    else
      {
        if(match_string(t, "--input"))
          {
            t = not_null(a_194);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_11 (ATerm t)
  {
    ATerm d_194 = NULL;
    ATerm n_72;
    n_72 = t;
    {
      ATerm b_194 = NULL;
      ATerm c_194 = NULL;
      ATerm f_194 (ATerm t)
      {
        t = not_null(c_194);
        if(((b_194 != NULL) && (b_194 != t)))
          _fail(t);
        else
          b_194 = t;
        t = not_null(c_194);
        return(t);
      }
      if(((c_194 != NULL) && (c_194 != t)))
        _fail(t);
      else
        c_194 = t;
      t = f_194(t);
      t = (ATerm) ATmakeAppl(sym__2, term_o_72, not_null(b_194));
      t = set_config_0_0(t);
    }
    t = n_72;
    {
      ATerm e_194 = NULL;
      ATerm g_194 (ATerm t)
      {
        t = not_null(e_194);
        if(((d_194 != NULL) && (d_194 != t)))
          _fail(t);
        else
          d_194 = t;
        t = not_null(e_194);
        return(t);
      }
      if(((e_194 != NULL) && (e_194 != t)))
        _fail(t);
      else
        e_194 = t;
      t = g_194(t);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_194));
    }
    return(t);
  }
  ATerm x_11 (ATerm t)
  {
    t = term_p_72;
    return(t);
  }
  t = ArgOption_3_0(v_11, w_11, x_11, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm q_72 = t;
  int r_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(r_72);
    }
  else
    {
      t = q_72;
      {
        ATerm s_72 = t;
        int t_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(t_72);
          }
        else
          {
            t = s_72;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_194 = NULL;
  t = report_run_time_0_0(t);
  {
    ATerm j_194 = NULL;
    ATerm k_194 (ATerm t)
    {
      t = not_null(j_194);
      if(((i_194 != NULL) && (i_194 != t)))
        _fail(t);
      else
        i_194 = t;
      t = not_null(j_194);
      return(t);
    }
    t = term_z_59;
    t = whoami_0_0(t);
    if(((j_194 != NULL) && (j_194 != t)))
      _fail(t);
    else
      j_194 = t;
    t = k_194(t);
    t = (ATerm) ATmakeAppl(sym__2, term_k_36, (ATerm) ATinsert(ATinsert(ATempty, term_u_72), not_null(i_194)));
    t = printnl_0_0(t);
    t = term_w_36;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_72;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm m_194 = NULL;
  ATerm o_194 (ATerm t)
  {
    ATerm n_194 = NULL;
    t = not_null(m_194);
    if(((n_194 != NULL) && (n_194 != t)))
      _fail(t);
    else
      n_194 = t;
    t = not_null(m_194);
    t = SSL_TicksToSeconds(not_null(n_194));
    return(t);
  }
  if(((m_194 != NULL) && (m_194 != t)))
    _fail(t);
  else
    m_194 = t;
  t = o_194(t);
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm r_194 = NULL,s_194 = NULL,t_194 = NULL;
  ATerm w_194 (ATerm t)
  {
    ATerm u_194 = NULL,v_194 = NULL;
    t = not_null(s_194);
    if(((u_194 != NULL) && (u_194 != t)))
      _fail(t);
    else
      u_194 = t;
    t = not_null(t_194);
    if(((v_194 != NULL) && (v_194 != t)))
      _fail(t);
    else
      v_194 = t;
    t = not_null(r_194);
    {
      ATerm w_72 = t;
      int x_72 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(u_194), not_null(v_194));
          ;
          LocalPopChoice(x_72);
        }
      else
        {
          t = w_72;
          t = SSL_addr(not_null(u_194), not_null(v_194));
        }
    }
    return(t);
  }
  if(((r_194 != NULL) && (r_194 != t)))
    _fail(t);
  else
    r_194 = t;
  t = not_null(r_194);
  if(match_cons(t, sym__2))
    {
      s_194 = ATgetArgument(t, 0);
      t_194 = ATgetArgument(t, 1);
      t = w_194(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm t)
{
  ATerm y_72 = t;
  int z_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = n_118(t);
      ;
      LocalPopChoice(z_72);
    }
  else
    {
      t = y_72;
      {
        ATerm a_195 = NULL,b_195 = NULL,c_195 = NULL;
        ATerm h_195 (ATerm t)
        {
          ATerm d_195 = NULL,e_195 = NULL,f_195 = NULL;
          t = not_null(b_195);
          if(((d_195 != NULL) && (d_195 != t)))
            _fail(t);
          else
            d_195 = t;
          t = not_null(c_195);
          if(((e_195 != NULL) && (e_195 != t)))
            _fail(t);
          else
            e_195 = t;
          t = not_null(a_195);
          {
            ATerm g_195 = NULL;
            ATerm i_195 (ATerm t)
            {
              t = not_null(g_195);
              if(((f_195 != NULL) && (f_195 != t)))
                _fail(t);
              else
                f_195 = t;
              t = not_null(g_195);
              return(t);
            }
            t = not_null(e_195);
            t = foldr_2_0(n_118, o_118, t);
            if(((g_195 != NULL) && (g_195 != t)))
              _fail(t);
            else
              g_195 = t;
            t = i_195(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_195), not_null(f_195));
            t = o_118(t);
          }
          return(t);
        }
        if(((a_195 != NULL) && (a_195 != t)))
          _fail(t);
        else
          a_195 = t;
        t = not_null(a_195);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_195 = ATgetFirst((ATermList) t);
            c_195 = (ATerm) ATgetNext((ATermList) t);
            t = h_195(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm g_122 (ATerm), ATerm h_122 (ATerm), ATerm t)
{
  ATerm n_195 = NULL;
  ATerm v_195 (ATerm t)
  {
    ATerm o_195 = NULL,p_195 = NULL;
    t = not_null(n_195);
    if(((o_195 != NULL) && (o_195 != t)))
      _fail(t);
    else
      o_195 = t;
    t = not_null(n_195);
    {
      ATerm q_195 = NULL;
      ATerm w_195 (ATerm t)
      {
        ATerm r_195 = NULL,s_195 = NULL,t_195 = NULL,u_195 = NULL;
        ATerm x_195 (ATerm t)
        {
          t = not_null(u_195);
          if(((p_195 != NULL) && (p_195 != t)))
            _fail(t);
          else
            p_195 = t;
          t = not_null(s_195);
          return(t);
        }
        t = not_null(q_195);
        if(((r_195 != NULL) && (r_195 != t)))
          _fail(t);
        else
          r_195 = t;
        t = not_null(q_195);
        t = SSL_explode_term(not_null(r_195));
        if(((s_195 != NULL) && (s_195 != t)))
          _fail(t);
        else
          s_195 = t;
        t = not_null(s_195);
        if(match_cons(t, sym__2))
          {
            t_195 = ATgetArgument(t, 0);
            u_195 = ATgetArgument(t, 1);
            t = x_195(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(o_195);
      if(((q_195 != NULL) && (q_195 != t)))
        _fail(t);
      else
        q_195 = t;
      t = w_195(t);
      t = not_null(p_195);
      t = foldr_2_0(g_122, h_122, t);
    }
    return(t);
  }
  if(((n_195 != NULL) && (n_195 != t)))
    _fail(t);
  else
    n_195 = t;
  t = v_195(t);
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
    ATerm y_11 (ATerm t)
    {
      t = term_a_38;
      return(t);
    }
    t = crush_2_0(y_11, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm a_196 = NULL,b_196 = NULL,c_196 = NULL;
  ATerm f_196 (ATerm t)
  {
    ATerm d_196 = NULL,e_196 = NULL;
    t = not_null(b_196);
    if(((d_196 != NULL) && (d_196 != t)))
      _fail(t);
    else
      d_196 = t;
    t = not_null(c_196);
    if(((e_196 != NULL) && (e_196 != t)))
      _fail(t);
    else
      e_196 = t;
    t = not_null(a_196);
    {
      ATerm a_73;
      a_73 = t;
      {
        ATerm b_73 = t;
        int c_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(not_null(d_196), not_null(e_196));
            ;
            LocalPopChoice(c_73);
          }
        else
          {
            t = b_73;
            t = SSL_gtr(not_null(d_196), not_null(e_196));
          }
      }
      t = a_73;
    }
    return(t);
  }
  if(((a_196 != NULL) && (a_196 != t)))
    _fail(t);
  else
    a_196 = t;
  t = not_null(a_196);
  if(match_cons(t, sym__2))
    {
      b_196 = ATgetArgument(t, 0);
      c_196 = ATgetArgument(t, 1);
      t = f_196(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_196 = NULL;
  ATerm d_73 = t;
  int e_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_196 = NULL,k_196 = NULL,l_196 = NULL;
      ATerm m_196 (ATerm t)
      {
        t = not_null(k_196);
        if(((i_196 != NULL) && (i_196 != t)))
          _fail(t);
        else
          i_196 = t;
        t = not_null(l_196);
        if(((i_196 != NULL) && (i_196 != t)))
          _fail(t);
        else
          i_196 = t;
        t = not_null(j_196);
        return(t);
      }
      if(((j_196 != NULL) && (j_196 != t)))
        _fail(t);
      else
        j_196 = t;
      t = not_null(j_196);
      if(match_cons(t, sym__2))
        {
          k_196 = ATgetArgument(t, 0);
          l_196 = ATgetArgument(t, 1);
          t = m_196(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(e_73);
    }
  else
    {
      t = d_73;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_126 (ATerm), ATerm t)
{
  ATerm z_11 (ATerm t)
  {
    ATerm f_73;
    f_73 = t;
    {
      ATerm o_196 = NULL;
      ATerm p_196 = NULL;
      ATerm q_196 (ATerm t)
      {
        t = not_null(p_196);
        if(((o_196 != NULL) && (o_196 != t)))
          _fail(t);
        else
          o_196 = t;
        t = not_null(p_196);
        return(t);
      }
      t = term_c_25;
      t = get_config_0_0(t);
      if(((p_196 != NULL) && (p_196 != t)))
        _fail(t);
      else
        p_196 = t;
      t = q_196(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_196), term_w_36);
      t = geq_0_0(t);
    }
    t = f_73;
    t = b_126(t);
    return(t);
  }
  t = try_1_0(z_11, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm a_12 (ATerm t)
  {
    ATerm t_196 = NULL,v_196 = NULL;
    ATerm g_73;
    g_73 = t;
    {
      ATerm u_196 = NULL;
      ATerm x_196 (ATerm t)
      {
        t = not_null(u_196);
        if(((t_196 != NULL) && (t_196 != t)))
          _fail(t);
        else
          t_196 = t;
        t = not_null(u_196);
        return(t);
      }
      t = run_time_0_0(t);
      if(((u_196 != NULL) && (u_196 != t)))
        _fail(t);
      else
        u_196 = t;
      t = x_196(t);
    }
    t = g_73;
    {
      ATerm w_196 = NULL;
      ATerm y_196 (ATerm t)
      {
        t = not_null(w_196);
        if(((v_196 != NULL) && (v_196 != t)))
          _fail(t);
        else
          v_196 = t;
        t = not_null(w_196);
        return(t);
      }
      t = term_z_59;
      t = whoami_0_0(t);
      if(((w_196 != NULL) && (w_196 != t)))
        _fail(t);
      else
        w_196 = t;
      t = y_196(t);
      t = (ATerm) ATmakeAppl(sym__2, term_k_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_73), not_null(t_196)), term_h_73), not_null(v_196)));
      t = printnl_0_0(t);
    }
    return(t);
  }
  t = if_verbose1_1_0(a_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_a_38;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  ATerm d_197 = NULL;
  ATerm l_197 (ATerm t)
  {
    ATerm e_197 = NULL,f_197 = NULL,h_197 = NULL;
    t = not_null(d_197);
    if(((e_197 != NULL) && (e_197 != t)))
      _fail(t);
    else
      e_197 = t;
    t = not_null(d_197);
    {
      ATerm j_73;
      j_73 = t;
      {
        ATerm g_197 = NULL;
        ATerm m_197 (ATerm t)
        {
          t = not_null(g_197);
          if(((f_197 != NULL) && (f_197 != t)))
            _fail(t);
          else
            f_197 = t;
          t = not_null(g_197);
          return(t);
        }
        t = SSLgetAnnotations(not_null(e_197));
        if(((g_197 != NULL) && (g_197 != t)))
          _fail(t);
        else
          g_197 = t;
        t = m_197(t);
      }
      t = j_73;
      {
        ATerm k_197 = NULL;
        ATerm n_197 (ATerm t)
        {
          t = not_null(k_197);
          if(((h_197 != NULL) && (h_197 != t)))
            _fail(t);
          else
            h_197 = t;
          t = not_null(k_197);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(f_197));
        if(((k_197 != NULL) && (k_197 != t)))
          _fail(t);
        else
          k_197 = t;
        t = n_197(t);
        t = not_null(h_197);
      }
    }
    return(t);
  }
  if(((d_197 != NULL) && (d_197 != t)))
    _fail(t);
  else
    d_197 = t;
  t = not_null(d_197);
  if(match_cons(t, sym_Version_0))
    {
      t = l_197(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_128 (ATerm), ATerm t)
{
  ATerm k_73 = t;
  int l_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_73;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_73);
    }
  else
    {
      t = k_73;
      {
        ATerm b_12 (ATerm t)
        {
          ATerm n_73 = t;
          int o_73 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(o_73);
            }
          else
            {
              t = n_73;
              {
                ATerm p_73 = t;
                int q_73 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(q_73);
                  }
                else
                  {
                    t = p_73;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(b_12, t);
      }
    }
  t = y_128(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm p_197 = NULL;
  ATerm r_197 (ATerm t)
  {
    ATerm q_197 = NULL;
    t = not_null(p_197);
    if(((q_197 != NULL) && (q_197 != t)))
      _fail(t);
    else
      q_197 = t;
    t = not_null(p_197);
    t = SSL_table_create(not_null(q_197));
    return(t);
  }
  if(((p_197 != NULL) && (p_197 != t)))
    _fail(t);
  else
    p_197 = t;
  t = r_197(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm t_197 = NULL;
  ATerm v_197 (ATerm t)
  {
    ATerm u_197 = NULL;
    t = not_null(t_197);
    if(((u_197 != NULL) && (u_197 != t)))
      _fail(t);
    else
      u_197 = t;
    t = not_null(t_197);
    {
      ATerm r_73;
      r_73 = t;
      t = term_s_73;
      t = table_create_0_0(t);
      t = (ATerm) ATmakeAppl(sym__3, term_s_73, term_t_73, not_null(u_197));
      t = table_put_0_0(t);
      t = r_73;
    }
    return(t);
  }
  if(((t_197 != NULL) && (t_197 != t)))
    _fail(t);
  else
    t_197 = t;
  t = v_197(t);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm x_197 = NULL;
  ATerm z_197 (ATerm t)
  {
    ATerm y_197 = NULL;
    t = not_null(x_197);
    if(((y_197 != NULL) && (y_197 != t)))
      _fail(t);
    else
      y_197 = t;
    t = not_null(x_197);
    t = SSL_table_destroy(not_null(y_197));
    return(t);
  }
  if(((x_197 != NULL) && (x_197 != t)))
    _fail(t);
  else
    x_197 = t;
  t = z_197(t);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm b_198 = NULL;
  ATerm d_198 (ATerm t)
  {
    ATerm c_198 = NULL;
    t = not_null(b_198);
    if(((c_198 != NULL) && (c_198 != t)))
      _fail(t);
    else
      c_198 = t;
    t = not_null(b_198);
    t = SSL_exit(not_null(c_198));
    return(t);
  }
  if(((b_198 != NULL) && (b_198 != t)))
    _fail(t);
  else
    b_198 = t;
  t = d_198(t);
  return(t);
}
ATerm long_description_1_0 (ATerm z_130 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm m_112 (ATerm), ATerm t)
{
  ATerm e_198 (ATerm t)
  {
    ATerm u_73 = t;
    int v_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(v_73);
      }
    else
      {
        t = u_73;
        t = Cons_2_0(m_112, e_198, t);
      }
    return(t);
  }
  t = e_198(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_198 = NULL,m_198 = NULL,n_198 = NULL;
  ATerm w_198 (ATerm t)
  {
    ATerm o_198 = NULL,p_198 = NULL,q_198 = NULL;
    t = not_null(l_198);
    if(((o_198 != NULL) && (o_198 != t)))
      _fail(t);
    else
      o_198 = t;
    t = not_null(m_198);
    if(((p_198 != NULL) && (p_198 != t)))
      _fail(t);
    else
      p_198 = t;
    t = not_null(p_198);
    {
      ATerm w_73;
      w_73 = t;
      {
        ATerm r_198 = NULL,t_198 = NULL,v_198 = NULL;
        ATerm a_199 (ATerm t)
        {
          t = not_null(v_198);
          if(((q_198 != NULL) && (q_198 != t)))
            _fail(t);
          else
            q_198 = t;
          t = not_null(v_198);
          return(t);
        }
        ATerm x_73;
        x_73 = t;
        {
          ATerm s_198 = NULL;
          ATerm y_198 (ATerm t)
          {
            t = not_null(s_198);
            if(((r_198 != NULL) && (r_198 != t)))
              _fail(t);
            else
              r_198 = t;
            t = not_null(s_198);
            return(t);
          }
          t = g_0(t);
          if(((s_198 != NULL) && (s_198 != t)))
            _fail(t);
          else
            s_198 = t;
          t = y_198(t);
        }
        t = x_73;
        {
          ATerm u_198 = NULL;
          ATerm z_198 (ATerm t)
          {
            t = not_null(u_198);
            if(((t_198 != NULL) && (t_198 != t)))
              _fail(t);
            else
              t_198 = t;
            t = not_null(u_198);
            return(t);
          }
          t = not_null(o_198);
          t = f_0(t);
          if(((u_198 != NULL) && (u_198 != t)))
            _fail(t);
          else
            u_198 = t;
          t = z_198(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(r_198)), not_null(t_198));
          if(((v_198 != NULL) && (v_198 != t)))
            _fail(t);
          else
            v_198 = t;
          t = a_199(t);
        }
      }
      t = w_73;
      {
        ATerm z_13 (ATerm t)
        {
          t = not_null(q_198);
          return(t);
        }
        t = reverse_acc_2_0(f_0, z_13, t);
      }
    }
    return(t);
  }
  ATerm x_198 (ATerm t)
  {
    t = term_z_59;
    t = g_0(t);
    return(t);
  }
  if(((n_198 != NULL) && (n_198 != t)))
    _fail(t);
  else
    n_198 = t;
  t = not_null(n_198);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_198 = ATgetFirst((ATermList) t);
      m_198 = (ATerm) ATgetNext((ATermList) t);
      t = w_198(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = x_198(t);
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
  ATerm a_14 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, a_14, t);
  return(t);
}
ATerm short_description_1_0 (ATerm y_130 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  ATerm g_199 = NULL,h_199 = NULL;
  ATerm q_199 (ATerm t)
  {
    ATerm i_199 = NULL,j_199 = NULL,k_199 = NULL,m_199 = NULL;
    ATerm s_199 (ATerm t)
    {
      ATerm n_199 = NULL,o_199 = NULL;
      t = not_null(m_199);
      if(((n_199 != NULL) && (n_199 != t)))
        _fail(t);
      else
        n_199 = t;
      t = not_null(m_199);
      {
        ATerm p_199 = NULL;
        ATerm t_199 (ATerm t)
        {
          t = not_null(p_199);
          if(((o_199 != NULL) && (o_199 != t)))
            _fail(t);
          else
            o_199 = t;
          t = not_null(p_199);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(n_199)), not_null(k_199));
        if(((p_199 != NULL) && (p_199 != t)))
          _fail(t);
        else
          p_199 = t;
        t = t_199(t);
        t = not_null(o_199);
      }
      return(t);
    }
    t = not_null(g_199);
    if(((i_199 != NULL) && (i_199 != t)))
      _fail(t);
    else
      i_199 = t;
    t = not_null(h_199);
    if(((j_199 != NULL) && (j_199 != t)))
      _fail(t);
    else
      j_199 = t;
    t = not_null(g_199);
    {
      ATerm l_199 = NULL;
      ATerm r_199 (ATerm t)
      {
        t = not_null(l_199);
        if(((k_199 != NULL) && (k_199 != t)))
          _fail(t);
        else
          k_199 = t;
        t = not_null(l_199);
        return(t);
      }
      t = SSLgetAnnotations(not_null(i_199));
      if(((l_199 != NULL) && (l_199 != t)))
        _fail(t);
      else
        l_199 = t;
      t = r_199(t);
      t = not_null(j_199);
      t = a_104(t);
      if(((m_199 != NULL) && (m_199 != t)))
        _fail(t);
      else
        m_199 = t;
      t = s_199(t);
    }
    return(t);
  }
  if(((g_199 != NULL) && (g_199 != t)))
    _fail(t);
  else
    g_199 = t;
  t = not_null(g_199);
  if(match_cons(t, sym_Program_1))
    {
      h_199 = ATgetArgument(t, 0);
      t = q_199(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_199 = NULL;
  ATerm y_73 = t;
  int z_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_199 = NULL;
      ATerm f_200 (ATerm t)
      {
        t = not_null(z_199);
        if(((y_199 != NULL) && (y_199 != t)))
          _fail(t);
        else
          y_199 = t;
        t = not_null(z_199);
        return(t);
      }
      t = term_v_72;
      t = get_config_0_0(t);
      if(((z_199 != NULL) && (z_199 != t)))
        _fail(t);
      else
        z_199 = t;
      t = f_200(t);
      ;
      LocalPopChoice(z_73);
    }
  else
    {
      t = y_73;
      {
        ATerm b_14 (ATerm t)
        {
          ATerm c_14 (ATerm t)
          {
            ATerm a_200 = NULL;
            ATerm g_200 (ATerm t)
            {
              t = not_null(a_200);
              if(((y_199 != NULL) && (y_199 != t)))
                _fail(t);
              else
                y_199 = t;
              t = not_null(a_200);
              return(t);
            }
            if(((a_200 != NULL) && (a_200 != t)))
              _fail(t);
            else
              a_200 = t;
            t = g_200(t);
            return(t);
          }
          t = Program_1_0(c_14, t);
          return(t);
        }
        t = option_defined_1_0(b_14, t);
      }
    }
  {
    ATerm d_14 (ATerm t)
    {
      ATerm e_14 (ATerm t)
      {
        t = not_null(y_199);
        return(t);
      }
      t = short_description_1_0(e_14, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(d_14, t);
    t = term_a_74;
    t = echo_0_0(t);
    t = term_d_74;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm f_14 (ATerm t)
      {
        ATerm b_200 = NULL;
        ATerm c_200 = NULL;
        ATerm h_200 (ATerm t)
        {
          t = not_null(c_200);
          if(((b_200 != NULL) && (b_200 != t)))
            _fail(t);
          else
            b_200 = t;
          t = not_null(c_200);
          return(t);
        }
        if(((c_200 != NULL) && (c_200 != t)))
          _fail(t);
        else
          c_200 = t;
        t = h_200(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_200)), term_e_74);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(f_14, t);
      {
        ATerm g_14 (ATerm t)
        {
          ATerm d_200 = NULL;
          ATerm e_200 = NULL;
          ATerm i_200 (ATerm t)
          {
            t = not_null(e_200);
            if(((d_200 != NULL) && (d_200 != t)))
              _fail(t);
            else
              d_200 = t;
            t = not_null(e_200);
            return(t);
          }
          ATerm h_14 (ATerm t)
          {
            t = not_null(y_199);
            return(t);
          }
          t = long_description_1_0(h_14, t);
          if(((e_200 != NULL) && (e_200 != t)))
            _fail(t);
          else
            e_200 = t;
          t = i_200(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(d_200)), term_f_74);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(g_14, t);
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
  ATerm g_74 = t;
  int h_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(h_74);
    }
  else
    {
      t = g_74;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm b_104 (ATerm), ATerm t)
{
  ATerm o_200 = NULL,p_200 = NULL;
  ATerm y_200 (ATerm t)
  {
    ATerm q_200 = NULL,r_200 = NULL,s_200 = NULL,u_200 = NULL;
    ATerm a_201 (ATerm t)
    {
      ATerm v_200 = NULL,w_200 = NULL;
      t = not_null(u_200);
      if(((v_200 != NULL) && (v_200 != t)))
        _fail(t);
      else
        v_200 = t;
      t = not_null(u_200);
      {
        ATerm x_200 = NULL;
        ATerm b_201 (ATerm t)
        {
          t = not_null(x_200);
          if(((w_200 != NULL) && (w_200 != t)))
            _fail(t);
          else
            w_200 = t;
          t = not_null(x_200);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(v_200)), not_null(s_200));
        if(((x_200 != NULL) && (x_200 != t)))
          _fail(t);
        else
          x_200 = t;
        t = b_201(t);
        t = not_null(w_200);
      }
      return(t);
    }
    t = not_null(o_200);
    if(((q_200 != NULL) && (q_200 != t)))
      _fail(t);
    else
      q_200 = t;
    t = not_null(p_200);
    if(((r_200 != NULL) && (r_200 != t)))
      _fail(t);
    else
      r_200 = t;
    t = not_null(o_200);
    {
      ATerm t_200 = NULL;
      ATerm z_200 (ATerm t)
      {
        t = not_null(t_200);
        if(((s_200 != NULL) && (s_200 != t)))
          _fail(t);
        else
          s_200 = t;
        t = not_null(t_200);
        return(t);
      }
      t = SSLgetAnnotations(not_null(q_200));
      if(((t_200 != NULL) && (t_200 != t)))
        _fail(t);
      else
        t_200 = t;
      t = z_200(t);
      t = not_null(r_200);
      t = b_104(t);
      if(((u_200 != NULL) && (u_200 != t)))
        _fail(t);
      else
        u_200 = t;
      t = a_201(t);
    }
    return(t);
  }
  if(((o_200 != NULL) && (o_200 != t)))
    _fail(t);
  else
    o_200 = t;
  t = not_null(o_200);
  if(match_cons(t, sym_Undefined_1))
    {
      p_200 = ATgetArgument(t, 0);
      t = y_200(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm w_112 (ATerm), ATerm t)
{
  ATerm c_201 (ATerm t)
  {
    ATerm i_74 = t;
    int j_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(w_112, _id, t);
        ;
        LocalPopChoice(j_74);
      }
    else
      {
        t = i_74;
        t = Cons_2_0(_id, c_201, t);
      }
    return(t);
  }
  t = c_201(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm y_129 (ATerm), ATerm t)
{
  t = fetch_1_0(y_129, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm e_201 = NULL,f_201 = NULL,g_201 = NULL;
  if(((e_201 != NULL) && (e_201 != t)))
    _fail(t);
  else
    e_201 = t;
  t = not_null(e_201);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(e_201);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_201 = ATgetFirst((ATermList) t);
          g_201 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(e_201);
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
  ATerm k_74;
  k_74 = t;
  {
    ATerm j_201 = NULL;
    ATerm m_201 = NULL;
    ATerm o_201 (ATerm t)
    {
      t = not_null(m_201);
      if(((j_201 != NULL) && (j_201 != t)))
        _fail(t);
      else
        j_201 = t;
      t = not_null(m_201);
      return(t);
    }
    ATerm l_74 = t;
    int m_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(m_74);
      }
    else
      {
        t = l_74;
        {
          ATerm k_201 = NULL;
          ATerm l_201 = NULL;
          ATerm n_201 (ATerm t)
          {
            t = not_null(l_201);
            if(((k_201 != NULL) && (k_201 != t)))
              _fail(t);
            else
              k_201 = t;
            t = not_null(l_201);
            return(t);
          }
          if(((l_201 != NULL) && (l_201 != t)))
            _fail(t);
          else
            l_201 = t;
          t = n_201(t);
          t = (ATerm) ATinsert(ATempty, not_null(k_201));
        }
      }
    if(((m_201 != NULL) && (m_201 != t)))
      _fail(t);
    else
      m_201 = t;
    t = o_201(t);
    t = (ATerm) ATmakeAppl(sym__2, term_j_70, not_null(j_201));
    t = printnl_0_0(t);
  }
  t = k_74;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_72;
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
  ATerm n_74 = t;
  int o_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(o_74);
    }
  else
    {
      t = n_74;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  ATerm t_201 = NULL;
  ATerm z_201 (ATerm t)
  {
    ATerm u_201 = NULL,v_201 = NULL,x_201 = NULL;
    t = not_null(t_201);
    if(((u_201 != NULL) && (u_201 != t)))
      _fail(t);
    else
      u_201 = t;
    t = not_null(t_201);
    {
      ATerm s_74;
      s_74 = t;
      {
        ATerm w_201 = NULL;
        ATerm a_202 (ATerm t)
        {
          t = not_null(w_201);
          if(((v_201 != NULL) && (v_201 != t)))
            _fail(t);
          else
            v_201 = t;
          t = not_null(w_201);
          return(t);
        }
        t = SSLgetAnnotations(not_null(u_201));
        if(((w_201 != NULL) && (w_201 != t)))
          _fail(t);
        else
          w_201 = t;
        t = a_202(t);
      }
      t = s_74;
      {
        ATerm y_201 = NULL;
        ATerm b_202 (ATerm t)
        {
          t = not_null(y_201);
          if(((x_201 != NULL) && (x_201 != t)))
            _fail(t);
          else
            x_201 = t;
          t = not_null(y_201);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(v_201));
        if(((y_201 != NULL) && (y_201 != t)))
          _fail(t);
        else
          y_201 = t;
        t = b_202(t);
        t = not_null(x_201);
      }
    }
    return(t);
  }
  if(((t_201 != NULL) && (t_201 != t)))
    _fail(t);
  else
    t_201 = t;
  t = not_null(t_201);
  if(match_cons(t, sym_Help_0))
    {
      t = z_201(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1_0 (ATerm b_105 (ATerm), ATerm t)
{
  ATerm t_74 = t;
  int u_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_105(t);
      ;
      LocalPopChoice(u_74);
    }
  else
    {
      t = t_74;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_74 = t;
  int w_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_14 (ATerm t)
      {
        ATerm e_202 = NULL;
        if(((e_202 != NULL) && (e_202 != t)))
          _fail(t);
        else
          e_202 = t;
        t = not_null(e_202);
        if(match_string(t, "--about"))
          {
            t = not_null(e_202);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm j_14 (ATerm t)
      {
        t = term_y_74;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm k_14 (ATerm t)
      {
        t = term_z_74;
        return(t);
      }
      t = Option_3_0(i_14, j_14, k_14, t);
      ;
      LocalPopChoice(w_74);
    }
  else
    {
      t = v_74;
      {
        ATerm l_14 (ATerm t)
        {
          ATerm f_202 = NULL;
          if(((f_202 != NULL) && (f_202 != t)))
            _fail(t);
          else
            f_202 = t;
          t = not_null(f_202);
          if(match_string(t, "--version"))
            {
              t = not_null(f_202);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm m_14 (ATerm t)
        {
          t = term_y_74;
          t = set_config_0_0(t);
          t = term_b_75;
          t = set_config_0_0(t);
          t = term_c_75;
          return(t);
        }
        ATerm n_14 (ATerm t)
        {
          t = term_d_75;
          return(t);
        }
        t = Option_3_0(l_14, m_14, n_14, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm i_202 = NULL,j_202 = NULL,k_202 = NULL;
  ATerm n_202 (ATerm t)
  {
    ATerm l_202 = NULL,m_202 = NULL;
    t = not_null(j_202);
    if(((l_202 != NULL) && (l_202 != t)))
      _fail(t);
    else
      l_202 = t;
    t = not_null(k_202);
    if(((m_202 != NULL) && (m_202 != t)))
      _fail(t);
    else
      m_202 = t;
    t = not_null(i_202);
    t = SSL_table_get(not_null(l_202), not_null(m_202));
    return(t);
  }
  if(((i_202 != NULL) && (i_202 != t)))
    _fail(t);
  else
    i_202 = t;
  t = not_null(i_202);
  if(match_cons(t, sym__2))
    {
      j_202 = ATgetArgument(t, 0);
      k_202 = ATgetArgument(t, 1);
      t = n_202(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm r_202 = NULL,s_202 = NULL,t_202 = NULL,u_202 = NULL;
  ATerm a_203 (ATerm t)
  {
    ATerm v_202 = NULL,w_202 = NULL,x_202 = NULL;
    t = not_null(s_202);
    if(((w_202 != NULL) && (w_202 != t)))
      _fail(t);
    else
      w_202 = t;
    t = not_null(t_202);
    if(((x_202 != NULL) && (x_202 != t)))
      _fail(t);
    else
      x_202 = t;
    t = not_null(u_202);
    if(((v_202 != NULL) && (v_202 != t)))
      _fail(t);
    else
      v_202 = t;
    t = not_null(r_202);
    {
      ATerm e_75;
      e_75 = t;
      {
        ATerm y_202 = NULL;
        ATerm z_202 = NULL;
        ATerm b_203 (ATerm t)
        {
          t = not_null(z_202);
          if(((y_202 != NULL) && (y_202 != t)))
            _fail(t);
          else
            y_202 = t;
          t = not_null(z_202);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_202), not_null(x_202));
        {
          ATerm f_75 = t;
          int g_75 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(g_75);
            }
          else
            {
              t = f_75;
              t = (ATerm) ATempty;
            }
          if(((z_202 != NULL) && (z_202 != t)))
            _fail(t);
          else
            z_202 = t;
          t = b_203(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(w_202), not_null(x_202), (ATerm) ATinsert(CheckATermList(not_null(y_202)), not_null(v_202)));
        t = table_put_0_0(t);
      }
      t = e_75;
    }
    return(t);
  }
  if(((r_202 != NULL) && (r_202 != t)))
    _fail(t);
  else
    r_202 = t;
  t = not_null(r_202);
  if(match_cons(t, sym__3))
    {
      s_202 = ATgetArgument(t, 0);
      t_202 = ATgetArgument(t, 1);
      u_202 = ATgetArgument(t, 2);
      t = a_203(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm d_131 (ATerm), ATerm t)
{
  ATerm d_203 = NULL;
  ATerm e_203 = NULL;
  ATerm f_203 (ATerm t)
  {
    t = not_null(e_203);
    if(((d_203 != NULL) && (d_203 != t)))
      _fail(t);
    else
      d_203 = t;
    t = not_null(e_203);
    return(t);
  }
  t = term_z_59;
  t = d_131(t);
  if(((e_203 != NULL) && (e_203 != t)))
    _fail(t);
  else
    e_203 = t;
  t = f_203(t);
  t = (ATerm) ATmakeAppl(sym__3, term_b_74, term_c_74, not_null(d_203));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm k_203 = NULL,l_203 = NULL,m_203 = NULL;
  ATerm r_203 (ATerm t)
  {
    t = not_null(k_203);
    t = register_usage_1_0(d_0, t);
    return(t);
  }
  ATerm s_203 (ATerm t)
  {
    ATerm n_203 = NULL,o_203 = NULL,p_203 = NULL;
    t = not_null(l_203);
    if(((n_203 != NULL) && (n_203 != t)))
      _fail(t);
    else
      n_203 = t;
    t = not_null(m_203);
    if(((o_203 != NULL) && (o_203 != t)))
      _fail(t);
    else
      o_203 = t;
    t = not_null(k_203);
    {
      ATerm h_75;
      h_75 = t;
      t = not_null(n_203);
      t = a_0(t);
      t = h_75;
      {
        ATerm q_203 = NULL;
        ATerm t_203 (ATerm t)
        {
          t = not_null(q_203);
          if(((p_203 != NULL) && (p_203 != t)))
            _fail(t);
          else
            p_203 = t;
          t = not_null(q_203);
          return(t);
        }
        t = term_z_59;
        t = b_0(t);
        if(((q_203 != NULL) && (q_203 != t)))
          _fail(t);
        else
          q_203 = t;
        t = t_203(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(o_203)), not_null(p_203));
      }
    }
    return(t);
  }
  if(((k_203 != NULL) && (k_203 != t)))
    _fail(t);
  else
    k_203 = t;
  t = not_null(k_203);
  if(match_string(t, "register-usage-info"))
    {
      t = r_203(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_203 = ATgetFirst((ATermList) t);
          m_203 = (ATerm) ATgetNext((ATermList) t);
          t = s_203(t);
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
  ATerm o_14 (ATerm t)
  {
    ATerm v_203 = NULL;
    if(((v_203 != NULL) && (v_203 != t)))
      _fail(t);
    else
      v_203 = t;
    t = not_null(v_203);
    if(match_string(t, "--help"))
      {
        t = not_null(v_203);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(v_203);
          }
        else
          {
            if(match_string(t, "-?"))
              {
                t = not_null(v_203);
              }
            else
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm f_16 (ATerm t)
  {
    t = term_i_75;
    t = set_config_0_0(t);
    t = term_j_75;
    return(t);
  }
  ATerm g_16 (ATerm t)
  {
    t = term_k_75;
    return(t);
  }
  t = Option_3_0(o_14, f_16, g_16, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm y_203 = NULL,z_203 = NULL,a_204 = NULL;
  ATerm d_204 (ATerm t)
  {
    ATerm b_204 = NULL,c_204 = NULL;
    t = not_null(z_203);
    if(((b_204 != NULL) && (b_204 != t)))
      _fail(t);
    else
      b_204 = t;
    t = not_null(a_204);
    if(((c_204 != NULL) && (c_204 != t)))
      _fail(t);
    else
      c_204 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(c_204)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_204)));
    return(t);
  }
  if(((y_203 != NULL) && (y_203 != t)))
    _fail(t);
  else
    y_203 = t;
  t = not_null(y_203);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_203 = ATgetFirst((ATermList) t);
      a_204 = (ATerm) ATgetNext((ATermList) t);
      t = d_204(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_91 (ATerm), ATerm d_91 (ATerm), ATerm t)
{
  ATerm k_204 = NULL,l_204 = NULL,m_204 = NULL;
  ATerm y_204 (ATerm t)
  {
    ATerm n_204 = NULL,o_204 = NULL,p_204 = NULL,q_204 = NULL,s_204 = NULL;
    ATerm a_205 (ATerm t)
    {
      ATerm t_204 = NULL,u_204 = NULL;
      ATerm b_205 (ATerm t)
      {
        ATerm v_204 = NULL,w_204 = NULL;
        t = not_null(u_204);
        if(((v_204 != NULL) && (v_204 != t)))
          _fail(t);
        else
          v_204 = t;
        t = not_null(u_204);
        {
          ATerm x_204 = NULL;
          ATerm c_205 (ATerm t)
          {
            t = not_null(x_204);
            if(((w_204 != NULL) && (w_204 != t)))
              _fail(t);
            else
              w_204 = t;
            t = not_null(x_204);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(v_204)), not_null(t_204)), not_null(q_204));
          if(((x_204 != NULL) && (x_204 != t)))
            _fail(t);
          else
            x_204 = t;
          t = c_205(t);
          t = not_null(w_204);
        }
        return(t);
      }
      t = not_null(s_204);
      if(((t_204 != NULL) && (t_204 != t)))
        _fail(t);
      else
        t_204 = t;
      t = not_null(p_204);
      t = d_91(t);
      if(((u_204 != NULL) && (u_204 != t)))
        _fail(t);
      else
        u_204 = t;
      t = b_205(t);
      return(t);
    }
    t = not_null(k_204);
    if(((n_204 != NULL) && (n_204 != t)))
      _fail(t);
    else
      n_204 = t;
    t = not_null(l_204);
    if(((o_204 != NULL) && (o_204 != t)))
      _fail(t);
    else
      o_204 = t;
    t = not_null(m_204);
    if(((p_204 != NULL) && (p_204 != t)))
      _fail(t);
    else
      p_204 = t;
    t = not_null(k_204);
    {
      ATerm r_204 = NULL;
      ATerm z_204 (ATerm t)
      {
        t = not_null(r_204);
        if(((q_204 != NULL) && (q_204 != t)))
          _fail(t);
        else
          q_204 = t;
        t = not_null(r_204);
        return(t);
      }
      t = SSLgetAnnotations(not_null(n_204));
      if(((r_204 != NULL) && (r_204 != t)))
        _fail(t);
      else
        r_204 = t;
      t = z_204(t);
      t = not_null(o_204);
      t = c_91(t);
      if(((s_204 != NULL) && (s_204 != t)))
        _fail(t);
      else
        s_204 = t;
      t = a_205(t);
    }
    return(t);
  }
  if(((k_204 != NULL) && (k_204 != t)))
    _fail(t);
  else
    k_204 = t;
  t = not_null(k_204);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_204 = ATgetFirst((ATermList) t);
      m_204 = (ATerm) ATgetNext((ATermList) t);
      t = y_204(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm h_205 = NULL;
  ATerm n_205 (ATerm t)
  {
    ATerm i_205 = NULL,j_205 = NULL,l_205 = NULL;
    t = not_null(h_205);
    if(((i_205 != NULL) && (i_205 != t)))
      _fail(t);
    else
      i_205 = t;
    t = not_null(h_205);
    {
      ATerm l_75;
      l_75 = t;
      {
        ATerm k_205 = NULL;
        ATerm o_205 (ATerm t)
        {
          t = not_null(k_205);
          if(((j_205 != NULL) && (j_205 != t)))
            _fail(t);
          else
            j_205 = t;
          t = not_null(k_205);
          return(t);
        }
        t = SSLgetAnnotations(not_null(i_205));
        if(((k_205 != NULL) && (k_205 != t)))
          _fail(t);
        else
          k_205 = t;
        t = o_205(t);
      }
      t = l_75;
      {
        ATerm m_205 = NULL;
        ATerm p_205 (ATerm t)
        {
          t = not_null(m_205);
          if(((l_205 != NULL) && (l_205 != t)))
            _fail(t);
          else
            l_205 = t;
          t = not_null(m_205);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(j_205));
        if(((m_205 != NULL) && (m_205 != t)))
          _fail(t);
        else
          m_205 = t;
        t = p_205(t);
        t = not_null(l_205);
      }
    }
    return(t);
  }
  if(((h_205 != NULL) && (h_205 != t)))
    _fail(t);
  else
    h_205 = t;
  t = not_null(h_205);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_205(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm s_205 = NULL,t_205 = NULL,u_205 = NULL;
  ATerm x_205 (ATerm t)
  {
    ATerm v_205 = NULL,w_205 = NULL;
    t = not_null(t_205);
    if(((v_205 != NULL) && (v_205 != t)))
      _fail(t);
    else
      v_205 = t;
    t = not_null(u_205);
    if(((w_205 != NULL) && (w_205 != t)))
      _fail(t);
    else
      w_205 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_o_69, not_null(v_205), not_null(w_205));
    t = table_put_0_0(t);
    return(t);
  }
  if(((s_205 != NULL) && (s_205 != t)))
    _fail(t);
  else
    s_205 = t;
  t = not_null(s_205);
  if(match_cons(t, sym__2))
    {
      t_205 = ATgetArgument(t, 0);
      u_205 = ATgetArgument(t, 1);
      t = x_205(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_131 (ATerm), ATerm t)
{
  ATerm m_75;
  m_75 = t;
  {
    ATerm h_16 (ATerm t)
    {
      t = term_n_75;
      t = b_131(t);
      return(t);
    }
    t = try_1_0(h_16, t);
  }
  t = m_75;
  {
    ATerm i_16 (ATerm t)
    {
      ATerm c_206 = NULL;
      ATerm o_75;
      o_75 = t;
      {
        ATerm a_206 = NULL;
        ATerm b_206 = NULL;
        ATerm e_206 (ATerm t)
        {
          t = not_null(b_206);
          if(((a_206 != NULL) && (a_206 != t)))
            _fail(t);
          else
            a_206 = t;
          t = not_null(b_206);
          return(t);
        }
        if(((b_206 != NULL) && (b_206 != t)))
          _fail(t);
        else
          b_206 = t;
        t = e_206(t);
        t = (ATerm) ATmakeAppl(sym__2, term_v_72, not_null(a_206));
        t = set_config_0_0(t);
      }
      t = o_75;
      {
        ATerm d_206 = NULL;
        ATerm f_206 (ATerm t)
        {
          t = not_null(d_206);
          if(((c_206 != NULL) && (c_206 != t)))
            _fail(t);
          else
            c_206 = t;
          t = not_null(d_206);
          return(t);
        }
        if(((d_206 != NULL) && (d_206 != t)))
          _fail(t);
        else
          d_206 = t;
        t = f_206(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_206));
      }
      return(t);
    }
    ATerm s_16 (ATerm t)
    {
      ATerm p_75 = t;
      int q_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_75 = t;
          int s_75 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(s_75);
            }
          else
            {
              t = r_75;
              t = b_131(t);
              t = Cons_2_0(_id, s_16, t);
            }
          ;
          LocalPopChoice(q_75);
        }
      else
        {
          t = p_75;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(i_16, s_16, t);
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm j_206 = NULL,k_206 = NULL,l_206 = NULL;
  ATerm t_75;
  t_75 = t;
  {
    ATerm m_206 = NULL,n_206 = NULL,p_206 = NULL,q_206 = NULL;
    ATerm r_206 (ATerm t)
    {
      t = not_null(n_206);
      if(((j_206 != NULL) && (j_206 != t)))
        _fail(t);
      else
        j_206 = t;
      t = not_null(p_206);
      if(((k_206 != NULL) && (k_206 != t)))
        _fail(t);
      else
        k_206 = t;
      t = not_null(q_206);
      if(((l_206 != NULL) && (l_206 != t)))
        _fail(t);
      else
        l_206 = t;
      t = not_null(m_206);
      t = SSL_table_put(not_null(j_206), not_null(k_206), not_null(l_206));
      return(t);
    }
    if(((m_206 != NULL) && (m_206 != t)))
      _fail(t);
    else
      m_206 = t;
    t = not_null(m_206);
    if(match_cons(t, sym__3))
      {
        n_206 = ATgetArgument(t, 0);
        p_206 = ATgetArgument(t, 1);
        q_206 = ATgetArgument(t, 2);
        t = r_206(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = t_75;
  return(t);
}
ATerm parse_options_1_0 (ATerm a_131 (ATerm), ATerm t)
{
  ATerm t_206 = NULL;
  ATerm u_75;
  u_75 = t;
  t = term_v_75;
  t = table_put_0_0(t);
  t = u_75;
  {
    ATerm t_16 (ATerm t)
    {
      ATerm w_75 = t;
      int x_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_131(t);
          ;
          LocalPopChoice(x_75);
        }
      else
        {
          t = w_75;
          {
            ATerm y_75 = t;
            int z_75 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(z_75);
              }
            else
              {
                t = y_75;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_16, t);
    {
      ATerm u_16 (ATerm t)
      {
        ATerm a_76 = t;
        int b_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_76;
            c_76 = t;
            {
              ATerm d_76 = t;
              int e_76 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_m_73;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(e_76);
                }
              else
                {
                  t = d_76;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = c_76;
            t = system_usage_0_0(t);
            t = term_a_38;
            t = exit_0_0(t);
            ;
            LocalPopChoice(b_76);
          }
        else
          {
            t = a_76;
            {
              ATerm f_76 = t;
              int g_76 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_76;
                  h_76 = t;
                  t = term_x_74;
                  t = get_config_0_0(t);
                  t = h_76;
                  t = system_about_0_0(t);
                  t = term_a_38;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(g_76);
                }
              else
                {
                  t = f_76;
                  {
                    ATerm v_16 (ATerm t)
                    {
                      ATerm w_16 (ATerm t)
                      {
                        ATerm u_206 = NULL;
                        ATerm v_206 (ATerm t)
                        {
                          t = not_null(u_206);
                          if(((t_206 != NULL) && (t_206 != t)))
                            _fail(t);
                          else
                            t_206 = t;
                          t = not_null(u_206);
                          return(t);
                        }
                        if(((u_206 != NULL) && (u_206 != t)))
                          _fail(t);
                        else
                          u_206 = t;
                        t = v_206(t);
                        return(t);
                      }
                      t = Undefined_1_0(w_16, t);
                      return(t);
                    }
                    t = option_defined_1_0(v_16, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_k_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_206)), term_j_76));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_w_36;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(u_16, t);
      {
        ATerm m_76;
        m_76 = t;
        t = term_b_74;
        t = table_destroy_0_0(t);
        t = m_76;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_129 (ATerm), ATerm b_129 (ATerm), ATerm c_129 (ATerm), ATerm d_129 (ATerm), ATerm t)
{
  t = parse_options_1_0(a_129, t);
  t = store_options_0_0(t);
  t = c_129(t);
  {
    ATerm n_76 = t;
    int o_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_129, t);
        ;
        LocalPopChoice(o_76);
      }
    else
      {
        t = n_76;
        {
          ATerm p_76 = t;
          int q_76 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_129(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(q_76);
            }
          else
            {
              t = p_76;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm p_128 (ATerm), ATerm q_128 (ATerm), ATerm r_128 (ATerm), ATerm s_128 (ATerm), ATerm t)
{
  ATerm x_16 (ATerm t)
  {
    ATerm r_76 = t;
    int s_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_128(t);
        ;
        LocalPopChoice(s_76);
      }
    else
      {
        t = r_76;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm k_17 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(p_128, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(x_16, r_128, s_128, k_17, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm j_128 (ATerm), ATerm k_128 (ATerm), ATerm l_128 (ATerm), ATerm t)
{
  ATerm l_17 (ATerm t)
  {
    ATerm m_17 (ATerm t)
    {
      ATerm t_76;
      t_76 = t;
      {
        ATerm y_206 = NULL;
        ATerm z_206 = NULL;
        ATerm a_207 (ATerm t)
        {
          t = not_null(z_206);
          if(((y_206 != NULL) && (y_206 != t)))
            _fail(t);
          else
            y_206 = t;
          t = not_null(z_206);
          return(t);
        }
        t = term_v_72;
        t = get_config_0_0(t);
        if(((z_206 != NULL) && (z_206 != t)))
          _fail(t);
        else
          z_206 = t;
        t = a_207(t);
        t = (ATerm) ATmakeAppl(sym__2, term_k_36, (ATerm) ATinsert(ATempty, not_null(y_206)));
        t = printnl_0_0(t);
      }
      t = t_76;
      return(t);
    }
    t = if_verbose2_1_0(m_17, t);
    return(t);
  }
  t = iowrap_4_0(j_128, k_128, l_128, l_17, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm h_128 (ATerm), ATerm i_128 (ATerm), ATerm t)
{
  t = iowrap_3_0(h_128, i_128, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm e_128 (ATerm), ATerm t)
{
  ATerm n_17 (ATerm t)
  {
    t = _2_0(_id, e_128, t);
    return(t);
  }
  t = iowrap_2_0(n_17, _fail, t);
  return(t);
}
ATerm frontend_0_0 (ATerm t)
{
  t = iowrap_1_0(frontend_transformation_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = frontend_0_0(t);
  return(t);
}
