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
ATerm term_y_63;
ATerm term_h_63;
ATerm term_z_62;
ATerm term_u_62;
ATerm term_t_62;
ATerm term_s_62;
ATerm term_w_61;
ATerm term_v_61;
ATerm term_u_61;
ATerm term_t_61;
ATerm term_l_61;
ATerm term_k_61;
ATerm term_g_61;
ATerm term_k_60;
ATerm term_j_60;
ATerm term_i_60;
ATerm term_h_60;
ATerm term_e_60;
ATerm term_d_60;
ATerm term_t_59;
ATerm term_s_59;
ATerm term_m_59;
ATerm term_d_59;
ATerm term_y_58;
ATerm term_f_58;
ATerm term_e_58;
ATerm term_r_57;
ATerm term_q_57;
ATerm term_n_57;
ATerm term_m_57;
ATerm term_l_57;
ATerm term_y_56;
ATerm term_v_56;
ATerm term_u_56;
ATerm term_l_56;
ATerm term_k_56;
ATerm term_j_56;
ATerm term_i_56;
ATerm term_h_56;
ATerm term_d_56;
ATerm term_c_56;
ATerm term_z_55;
ATerm term_s_55;
ATerm term_r_55;
ATerm term_l_55;
ATerm term_f_55;
ATerm term_e_55;
ATerm term_i_54;
ATerm term_a_54;
ATerm term_z_53;
ATerm term_w_53;
ATerm term_q_53;
ATerm term_r_52;
ATerm term_m_52;
ATerm term_h_52;
ATerm term_g_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_w_51;
ATerm term_t_51;
ATerm term_s_51;
ATerm term_q_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_x_50;
ATerm term_q_50;
ATerm term_o_50;
ATerm term_n_50;
ATerm term_m_50;
ATerm term_l_50;
ATerm term_k_50;
ATerm term_v_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_l_49;
ATerm term_j_49;
ATerm term_y_46;
ATerm term_x_46;
ATerm term_w_46;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_e_45;
ATerm term_y_44;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_n_39;
ATerm term_t_38;
ATerm term_o_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_d_35;
ATerm term_a_35;
ATerm term_n_33;
ATerm term_l_33;
ATerm term_g_33;
ATerm term_e_33;
ATerm term_x_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_q_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_p_29;
ATerm term_l_29;
ATerm term_d_29;
ATerm term_y_28;
ATerm term_v_28;
ATerm term_r_28;
ATerm term_h_28;
ATerm term_c_28;
ATerm term_y_27;
ATerm term_v_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_c_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_j_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_d_25;
ATerm term_a_25;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_b_20;
ATerm term_o_18;
ATerm term_u_16;
ATerm term_f_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
void init_constant_terms (void)
{
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("not a definition: ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("CongDefined", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_24);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Op_2, term_p_24, (ATerm) ATempty);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_ConstType_1, term_q_24);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_25);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_Var_1, term_r_25);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Var_1, term_t_25);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Anno_2, term_s_25, term_c_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Var_1, term_m_26);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_Var_1, term_o_26);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_Anno_2, term_n_26, term_p_26);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_25);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Call_2, term_r_26, (ATerm) ATempty);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_BAM_3, term_s_26, term_s_25, term_n_26);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_25);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Call_2, term_x_26, (ATerm) ATempty);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_BAM_3, term_y_26, term_c_26, term_p_26);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym_Var_1, term_h_28);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("x_1", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("z_1", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("v_1", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_29);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("t_1", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_Defined_1, term_z_29);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_ConstType_1, term_r_28);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_16, term_c_30);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_25);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("j_1", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("d_1", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("m_1", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_37);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("q_1", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_38);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("x_0", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym_Op_2, term_z_39, (ATerm) ATempty);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(sym_Op_2, term_e_40, (ATerm) ATempty);
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_40);
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_40);
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_40);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_41);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_41);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_45);
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_45);
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_50);
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_39);
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(sym_Call_2, term_m_50, (ATerm) ATempty);
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_16);
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(sym_Call_2, term_o_50, (ATerm) ATempty);
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_50);
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(sym_Call_2, term_y_50, (ATerm) ATempty);
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(ATmakeSymbol("  frontend initialization: ", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("  pre-desugar: ", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("  normalize-spec: ", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol("  spec-use-def: ", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("  ExpandOverlays: ", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("  CheckConstructors: ", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("  RulesToSdefs: ", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("  DesugarListMatching: ", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("  strename: ", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(sym__2, term_d_20, term_s_24);
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_24);
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(sym__2, term_i_56, term_o_23);
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(sym__2, term_y_56, term_o_23);
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_57));
  term_r_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_59));
  term_d_59 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_59));
  term_s_59 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_59));
  term_t_59 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_60));
  term_e_60 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(sym__2, term_e_60, term_h_60);
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_61));
  term_g_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(sym__2, term_g_61, term_o_23);
  ATprotect(&(term_l_61));
  term_l_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_61));
  term_t_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_61));
  term_u_61 = (ATerm) ATmakeAppl(sym__2, term_t_61, term_o_23);
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(sym__2, term_m_59, term_o_23);
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_62));
  term_u_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(sym__3, term_e_60, term_h_60, (ATerm) ATempty);
  ATprotect(&(term_y_63));
  term_y_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm f_93 (ATerm), ATerm g_93 (ATerm));
ATerm PrimT_3 (ATerm, ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm g_97 (ATerm));
ATerm Explode_2 (ATerm, ATerm y_92 (ATerm), ATerm z_92 (ATerm));
ATerm pat_td_1 (ATerm, ATerm x_135 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm p_91 (ATerm));
ATerm Specification_1 (ATerm, ATerm u_91 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm m_126 (ATerm));
ATerm timing_1 (ATerm, ATerm j_105 (ATerm));
ATerm spaste_1 (ATerm, ATerm j_135 (ATerm));
ATerm Rec_2 (ATerm, ATerm v_96 (ATerm), ATerm w_96 (ATerm));
ATerm Let_2 (ATerm, ATerm y_95 (ATerm), ATerm z_95 (ATerm));
ATerm sboundin_3 (ATerm, ATerm k_135 (ATerm), ATerm l_135 (ATerm), ATerm m_135 (ATerm));
ATerm Bind7_0 (ATerm);
ATerm Bind5_0 (ATerm);
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm f_132 (ATerm, ATerm (ATerm)), ATerm g_132 (ATerm), ATerm h_132 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm i_132 (ATerm, ATerm (ATerm)));
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
ATerm CongDefined_0 (ATerm);
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
ATerm manytd_1 (ATerm, ATerm q_109 (ATerm));
ATerm check_constructors_p__2 (ATerm, ATerm u_135 (ATerm), ATerm v_135 (ATerm));
ATerm check_constructors_0 (ATerm);
ATerm length_0 (ATerm);
ATerm GenerateCheckRule_0 (ATerm);
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm k_134 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm ReplaceVar_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm f_135 (ATerm));
ATerm IsVar_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm q_132 (ATerm), ATerm r_132 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm k_132 (ATerm), ATerm l_132 (ATerm, ATerm (ATerm)));
ATerm SubsVar_2 (ATerm, ATerm d_132 (ATerm), ATerm e_132 (ATerm));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm v_132 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm k_112 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm u_111 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_6 (ATerm, ATerm r_131 (ATerm), ATerm s_131 (ATerm, ATerm (ATerm)), ATerm t_131 (ATerm), ATerm u_131 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm v_131 (ATerm, ATerm (ATerm)), ATerm w_131 (ATerm));
ATerm substitute_5 (ATerm, ATerm y_131 (ATerm), ATerm z_131 (ATerm, ATerm (ATerm)), ATerm a_132 (ATerm), ATerm b_132 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_132 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm l_134 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm j_134 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm overlay_ud_0 (ATerm);
ATerm rdef_ud_0 (ATerm);
ATerm guardedlchoice_1 (ATerm, ATerm t_135 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm u_96 (ATerm));
ATerm lchoice_1 (ATerm, ATerm s_135 (ATerm));
ATerm LChoice_2 (ATerm, ATerm o_96 (ATerm), ATerm p_96 (ATerm));
ATerm isect_Bound_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm restore_Bound_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_Bound_0 (ATerm);
ATerm abstract_choice_2 (ATerm, ATerm p_135 (ATerm), ATerm q_135 (ATerm));
ATerm choice_1 (ATerm, ATerm r_135 (ATerm));
ATerm Choice_2 (ATerm, ATerm m_95 (ATerm), ATerm n_95 (ATerm));
ATerm Context_0 (ATerm);
ATerm Unbound_0 (ATerm);
ATerm Bound_0 (ATerm);
ATerm use_vars_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm f_94 (ATerm), ATerm g_94 (ATerm), ATerm h_94 (ATerm));
ATerm RootApp_1 (ATerm, ATerm e_93 (ATerm));
ATerm App_2 (ATerm, ATerm c_93 (ATerm), ATerm d_93 (ATerm));
ATerm table_replace_0 (ATerm);
ATerm override_key_1 (ATerm, ATerm p_123 (ATerm));
ATerm Binding_0 (ATerm);
ATerm bind_vars_0 (ATerm);
ATerm Match_1 (ATerm, ATerm f_96 (ATerm));
ATerm Build_1 (ATerm, ATerm g_96 (ATerm));
ATerm VarScope_1 (ATerm, ATerm o_135 (ATerm));
ATerm unbound_vars_0 (ATerm);
ATerm DefineBound_0 (ATerm);
ATerm sdef_ud_0 (ATerm);
ATerm DefineUnbound_0 (ATerm);
ATerm def_use_def_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Signature_1 (ATerm, ATerm q_91 (ATerm));
ATerm spec_use_def_0 (ATerm);
ATerm MkConstType_0 (ATerm);
ATerm MkFunType_0 (ATerm);
ATerm map1_1 (ATerm, ATerm s_0 (ATerm));
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm i_115 (ATerm));
ATerm unzip_0 (ATerm);
ATerm new_0 (ATerm);
ATerm ContextVar_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm dummify_0 (ATerm);
ATerm SplitDynamicRule_1 (ATerm, ATerm q_0 (ATerm));
ATerm split_dynamic_rules_0 (ATerm);
ATerm split_under_scope_1 (ATerm, ATerm g_134 (ATerm));
ATerm oncetd_1 (ATerm, ATerm i_108 (ATerm));
ATerm split_dynamic_rule_1 (ATerm, ATerm e_134 (ATerm));
ATerm DeclareContextVars_0 (ATerm);
ATerm lift_dynamic_rule_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm e_114 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm f_95 (ATerm));
ATerm Scope_2 (ATerm, ATerm i_96 (ATerm), ATerm j_96 (ATerm));
ATerm tboundin_3 (ATerm, ATerm g_135 (ATerm), ATerm h_135 (ATerm), ATerm i_135 (ATerm));
ATerm Bind8_0 (ATerm);
ATerm declared_vars_0 (ATerm);
ATerm Bind6_0 (ATerm);
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm y_116 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm r_122 (ATerm), ATerm s_122 (ATerm), ATerm t_122 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm c_117 (ATerm), ATerm d_117 (ATerm));
ATerm diff_1 (ATerm, ATerm u_116 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm b_115 (ATerm));
ATerm zip_1 (ATerm, ATerm d_115 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm v_106 (ATerm), ATerm w_106 (ATerm));
ATerm for_3 (ATerm, ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm a_107 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm v_133 (ATerm), ATerm w_133 (ATerm), ATerm x_133 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm f_107 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm q_123 (ATerm));
ATerm VarToConst_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm w_108 (ATerm));
ATerm assert_1 (ATerm, ATerm o_123 (ATerm));
ATerm DeclareVarToConst_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm r_91 (ATerm));
ATerm Constructors_1 (ATerm, ATerm m_92 (ATerm));
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm l_123 (ATerm));
ATerm restore_always_2 (ATerm, ATerm z_105 (ATerm), ATerm a_106 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm k_123 (ATerm));
ATerm scope_2 (ATerm, ATerm m_123 (ATerm), ATerm n_123 (ATerm));
ATerm vars_to_consts_0 (ATerm);
ATerm RulesToStrategies_0 (ATerm);
ATerm filter_1 (ATerm, ATerm z_119 (ATerm));
ATerm GetConstructors_0 (ATerm);
ATerm InsertBSpec_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm y_118 (ATerm), ATerm z_118 (ATerm), ATerm a_119 (ATerm));
ATerm CombineSections_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm RemoveLeadingPrime_0 (ATerm);
ATerm Op_2 (ATerm, ATerm u_92 (ATerm), ATerm v_92 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm d_92 (ATerm), ATerm e_92 (ATerm));
ATerm SVar_1 (ATerm, ATerm x_95 (ATerm));
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm VarDec_2 (ATerm, ATerm j_98 (ATerm), ATerm k_98 (ATerm));
ATerm SDef_3 (ATerm, ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm p_98 (ATerm));
ATerm SDefT_4 (ATerm, ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t_98 (ATerm));
ATerm RDef_3 (ATerm, ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_94 (ATerm));
ATerm RDefT_4 (ATerm, ATerm w_94 (ATerm), ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm z_94 (ATerm));
ATerm DefaultVarDec_1 (ATerm, ATerm i_98 (ATerm));
ATerm string_to_real_0 (ATerm);
ATerm DesugarOnce_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm w_113 (ATerm));
ATerm init_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm unquote_chars_1 (ATerm, ATerm x_121 (ATerm));
ATerm un_double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm i_122 (ATerm));
ATerm un_double_quote_0 (ATerm);
ATerm DesugarCharGeneric_0 (ATerm);
ATerm DesugarChar_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm Desugar_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm g_106 (ATerm));
ATerm topdown_1 (ATerm, ATerm e_107 (ATerm));
ATerm pre_desugar_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm _2 (ATerm, ATerm c_90 (ATerm), ATerm d_90 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_113 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm l_126 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm h_125 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm j_128 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm t_124 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm l_120 (ATerm), ATerm m_120 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm w_118 (ATerm), ATerm x_118 (ATerm));
ATerm crush_2 (ATerm, ATerm p_122 (ATerm), ATerm q_122 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm k_126 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm h_129 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm i_131 (ATerm));
ATerm map_1 (ATerm, ATerm v_112 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_131 (ATerm));
ATerm Program_1 (ATerm, ATerm j_104 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm k_104 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_113 (ATerm));
ATerm option_defined_1 (ATerm, ATerm h_130 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_105 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm m_131 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm l_91 (ATerm), ATerm m_91 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm k_131 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm j_131 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm j_129 (ATerm), ATerm k_129 (ATerm), ATerm l_129 (ATerm), ATerm m_129 (ATerm));
ATerm iowrap_4 (ATerm, ATerm y_128 (ATerm), ATerm z_128 (ATerm), ATerm a_129 (ATerm), ATerm b_129 (ATerm));
ATerm iowrap_3 (ATerm, ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm u_128 (ATerm));
ATerm iowrap_2 (ATerm, ATerm q_128 (ATerm), ATerm r_128 (ATerm));
ATerm iowrap_1 (ATerm, ATerm n_128 (ATerm));
ATerm frontend_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Expl_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
  f_12 = t;
  d_12 :
  if(match_cons(f_12, sym_ExplodeCong_2))
    {
      g_12 = ATgetArgument(f_12, 0);
      e_12 = ATgetArgument(f_12, 1);
      {
        ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
        ATerm n_12 = NULL;
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
              ATerm p_12 = NULL;
              t = new_0(t);
              {
                o_12 = t;
                {
                  if(((k_12 != NULL) && (k_12 != o_12)))
                    _fail(o_12);
                  else
                    k_12 = o_12;
                  {
                    ATerm q_12 = NULL;
                    t = new_0(t);
                    {
                      p_12 = t;
                      {
                        if(((l_12 != NULL) && (l_12 != p_12)))
                          _fail(p_12);
                        else
                          l_12 = p_12;
                        {
                          t = new_0(t);
                          {
                            q_12 = t;
                            if(((m_12 != NULL) && (m_12 != q_12)))
                              _fail(q_12);
                            else
                              m_12 = q_12;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(m_12)), not_null(l_12)), not_null(k_12)), not_null(j_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(j_12)), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_12)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(g_12), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_12)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_12))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(e_12), (ATerm)ATmakeAppl(sym_Var_1, not_null(l_12)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_12))))), (ATerm) ATmakeAppl(sym_PrimT_3, term_a_16, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_12))), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_12)))))));
      }
    }
  else
    {
      if(match_cons(f_12, sym_Build_1))
        {
          g_12 = ATgetArgument(f_12, 0);
          {
            ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
            ATerm w_12 = NULL;
            ATerm a_13 = NULL;
            t = new_0(t);
            {
              w_12 = t;
              {
                if(((u_12 != NULL) && (u_12 != w_12)))
                  _fail(w_12);
                else
                  u_12 = w_12;
                {
                  t = not_null(g_12);
                  {
                    ATerm f_0 (ATerm t)
                    {
                      ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
                      x_12 = t;
                      t_11 :
                      if(match_cons(x_12, sym_Explode_2))
                        {
                          y_12 = ATgetArgument(x_12, 0);
                          z_12 = ATgetArgument(x_12, 1);
                          {
                            if(((s_12 != NULL) && (s_12 != y_12)))
                              _fail(y_12);
                            else
                              s_12 = y_12;
                            {
                              if(((t_12 != NULL) && (t_12 != z_12)))
                                _fail(z_12);
                              else
                                t_12 = z_12;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_12));
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
                      a_13 = t;
                      if(((v_12 != NULL) && (v_12 != a_13)))
                        _fail(a_13);
                      else
                        v_12 = a_13;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_a_16, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_12)), not_null(s_12))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_12))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_12)))));
          }
        }
      else
        {
          if(match_cons(f_12, sym_Match_1))
            {
              g_12 = ATgetArgument(f_12, 0);
              {
                ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
                ATerm h_13 = NULL;
                ATerm i_13 = NULL;
                t = new_0(t);
                {
                  h_13 = t;
                  {
                    if(((e_13 != NULL) && (e_13 != h_13)))
                      _fail(h_13);
                    else
                      e_13 = h_13;
                    {
                      ATerm m_13 = NULL;
                      t = new_0(t);
                      {
                        i_13 = t;
                        {
                          if(((f_13 != NULL) && (f_13 != i_13)))
                            _fail(i_13);
                          else
                            f_13 = i_13;
                          {
                            t = not_null(g_12);
                            {
                              ATerm h_0 (ATerm t)
                              {
                                ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
                                j_13 = t;
                                b_12 :
                                if(match_cons(j_13, sym_Explode_2))
                                  {
                                    k_13 = ATgetArgument(j_13, 0);
                                    l_13 = ATgetArgument(j_13, 1);
                                    {
                                      if(((c_13 != NULL) && (c_13 != k_13)))
                                        _fail(k_13);
                                      else
                                        c_13 = k_13;
                                      {
                                        if(((d_13 != NULL) && (d_13 != l_13)))
                                          _fail(l_13);
                                        else
                                          d_13 = l_13;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_13));
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
                                m_13 = t;
                                if(((g_13 != NULL) && (g_13 != m_13)))
                                  _fail(m_13);
                                else
                                  g_13 = m_13;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_13)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_13))), (ATerm) ATmakeAppl(sym_PrimT_3, term_b_16, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_13)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(e_13)), (ATerm) ATmakeAppl(sym_Op_2, term_c_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_13)), not_null(c_13)))))));
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
  ATerm r_14 = NULL,s_14 = NULL;
  r_14 = t;
  q_14 :
  if(match_cons(r_14, sym_Match_1))
    {
      s_14 = ATgetArgument(r_14, 0);
      {
        ATerm d_16 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
            ATerm y_14 = NULL;
            ATerm c_15 = NULL;
            t = new_0(t);
            {
              y_14 = t;
              {
                if(((w_14 != NULL) && (w_14 != y_14)))
                  _fail(y_14);
                else
                  w_14 = y_14;
                {
                  t = not_null(s_14);
                  {
                    ATerm j_0 (ATerm t)
                    {
                      ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
                      z_14 = t;
                      g_14 :
                      if(match_cons(z_14, sym_Anno_2))
                        {
                          a_15 = ATgetArgument(z_14, 0);
                          b_15 = ATgetArgument(z_14, 1);
                          {
                            if(((u_14 != NULL) && (u_14 != a_15)))
                              _fail(a_15);
                            else
                              u_14 = a_15;
                            {
                              if(((v_14 != NULL) && (v_14 != b_15)))
                                _fail(b_15);
                              else
                                v_14 = b_15;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_14)), not_null(u_14));
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
                      c_15 = t;
                      if(((x_14 != NULL) && (x_14 != c_15)))
                        _fail(c_15);
                      else
                        x_14 = c_15;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_14)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_14)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_16, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_14)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(v_14))))));
            ;
            LocalPopChoice(e_16);
          }
        else
          {
            t = d_16;
            {
              ATerm g_16 = t;
              int h_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
                  ATerm h_15 = NULL;
                  ATerm k_15 = NULL;
                  t = new_0(t);
                  {
                    h_15 = t;
                    {
                      if(((f_15 != NULL) && (f_15 != h_15)))
                        _fail(h_15);
                      else
                        f_15 = h_15;
                      {
                        t = not_null(s_14);
                        {
                          ATerm y_0 (ATerm t)
                          {
                            ATerm i_15 = NULL,j_15 = NULL;
                            i_15 = t;
                            k_14 :
                            if(match_cons(i_15, sym_RootApp_1))
                              {
                                j_15 = ATgetArgument(i_15, 0);
                                {
                                  if(((e_15 != NULL) && (e_15 != j_15)))
                                    _fail(j_15);
                                  else
                                    e_15 = j_15;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_15));
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
                            k_15 = t;
                            if(((g_15 != NULL) && (g_15 != k_15)))
                              _fail(k_15);
                            else
                              g_15 = k_15;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_15))), not_null(e_15))));
                  ;
                  LocalPopChoice(h_16);
                }
              else
                {
                  t = g_16;
                  {
                    ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
                    ATerm q_15 = NULL;
                    ATerm u_15 = NULL;
                    t = new_0(t);
                    {
                      q_15 = t;
                      {
                        if(((o_15 != NULL) && (o_15 != q_15)))
                          _fail(q_15);
                        else
                          o_15 = q_15;
                        {
                          t = not_null(s_14);
                          {
                            ATerm z_0 (ATerm t)
                            {
                              ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL;
                              r_15 = t;
                              o_14 :
                              if(match_cons(r_15, sym_App_2))
                                {
                                  s_15 = ATgetArgument(r_15, 0);
                                  t_15 = ATgetArgument(r_15, 1);
                                  {
                                    if(((n_15 != NULL) && (n_15 != s_15)))
                                      _fail(s_15);
                                    else
                                      n_15 = s_15;
                                    {
                                      if(((m_15 != NULL) && (m_15 != t_15)))
                                        _fail(t_15);
                                      else
                                        m_15 = t_15;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_15));
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
                              u_15 = t;
                              if(((p_15 != NULL) && (p_15 != u_15)))
                                _fail(u_15);
                              else
                                p_15 = u_15;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_15))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_15)), not_null(n_15)))));
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
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
  l_16 = t;
  j_16 :
  if(match_cons(l_16, sym_Match_1))
    {
      m_16 = ATgetArgument(l_16, 0);
      k_16 :
      if(match_cons(m_16, sym_RootApp_1))
        {
          n_16 = ATgetArgument(m_16, 0);
          t = not_null(n_16);
        }
      else
        {
          if(match_cons(m_16, sym_App_2))
            {
              n_16 = ATgetArgument(m_16, 0);
              o_16 = ATgetArgument(m_16, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(n_16), not_null(o_16));
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
  ATerm a_17 = NULL,b_17 = NULL;
  a_17 = t;
  z_16 :
  if(match_cons(a_17, sym_Match_1))
    {
      b_17 = ATgetArgument(a_17, 0);
      {
        ATerm d_17 = NULL,e_17 = NULL;
        ATerm i_17 = NULL;
        t = not_null(b_17);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL;
            f_17 = t;
            w_16 :
            if(match_cons(f_17, sym_RootApp_1))
              {
                g_17 = ATgetArgument(f_17, 0);
                x_16 :
                if(match_cons(g_17, sym_Match_1))
                  {
                    h_17 = ATgetArgument(g_17, 0);
                    {
                      if(((d_17 != NULL) && (d_17 != h_17)))
                        _fail(h_17);
                      else
                        d_17 = h_17;
                      t = not_null(d_17);
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
            i_17 = t;
            if(((e_17 != NULL) && (e_17 != i_17)))
              _fail(i_17);
            else
              e_17 = i_17;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(e_17));
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
  ATerm i_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      ;
      LocalPopChoice(p_16);
    }
  else
    {
      t = i_16;
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            ;
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL;
  c_18 = t;
  b_18 :
  if(match_cons(c_18, sym_Build_1))
    {
      d_18 = ATgetArgument(c_18, 0);
      {
        ATerm s_16 = t;
        int t_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
            ATerm j_18 = NULL;
            ATerm n_18 = NULL;
            t = new_0(t);
            {
              j_18 = t;
              {
                if(((h_18 != NULL) && (h_18 != j_18)))
                  _fail(j_18);
                else
                  h_18 = j_18;
                {
                  t = not_null(d_18);
                  {
                    ATerm c_1 (ATerm t)
                    {
                      ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
                      k_18 = t;
                      r_17 :
                      if(match_cons(k_18, sym_Anno_2))
                        {
                          l_18 = ATgetArgument(k_18, 0);
                          m_18 = ATgetArgument(k_18, 1);
                          {
                            if(((f_18 != NULL) && (f_18 != l_18)))
                              _fail(l_18);
                            else
                              f_18 = l_18;
                            {
                              if(((g_18 != NULL) && (g_18 != m_18)))
                                _fail(m_18);
                              else
                                g_18 = m_18;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_18));
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
                      n_18 = t;
                      if(((i_18 != NULL) && (i_18 != n_18)))
                        _fail(n_18);
                      else
                        i_18 = n_18;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_18)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_16, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_18)), not_null(f_18))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_18))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_18))));
            ;
            LocalPopChoice(t_16);
          }
        else
          {
            t = s_16;
            {
              ATerm v_16 = t;
              int y_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
                  ATerm s_18 = NULL;
                  ATerm v_18 = NULL;
                  t = new_0(t);
                  {
                    s_18 = t;
                    {
                      if(((q_18 != NULL) && (q_18 != s_18)))
                        _fail(s_18);
                      else
                        q_18 = s_18;
                      {
                        t = not_null(d_18);
                        {
                          ATerm e_1 (ATerm t)
                          {
                            ATerm t_18 = NULL,u_18 = NULL;
                            t_18 = t;
                            v_17 :
                            if(match_cons(t_18, sym_RootApp_1))
                              {
                                u_18 = ATgetArgument(t_18, 0);
                                {
                                  if(((p_18 != NULL) && (p_18 != u_18)))
                                    _fail(u_18);
                                  else
                                    p_18 = u_18;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_18));
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
                            v_18 = t;
                            if(((r_18 != NULL) && (r_18 != v_18)))
                              _fail(v_18);
                            else
                              r_18 = v_18;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_18)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_18), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_18))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_18))));
                  ;
                  LocalPopChoice(y_16);
                }
              else
                {
                  t = v_16;
                  {
                    ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
                    ATerm b_19 = NULL;
                    ATerm f_19 = NULL;
                    t = new_0(t);
                    {
                      b_19 = t;
                      {
                        if(((z_18 != NULL) && (z_18 != b_19)))
                          _fail(b_19);
                        else
                          z_18 = b_19;
                        {
                          t = not_null(d_18);
                          {
                            ATerm f_1 (ATerm t)
                            {
                              ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
                              c_19 = t;
                              z_17 :
                              if(match_cons(c_19, sym_App_2))
                                {
                                  d_19 = ATgetArgument(c_19, 0);
                                  e_19 = ATgetArgument(c_19, 1);
                                  {
                                    if(((x_18 != NULL) && (x_18 != d_19)))
                                      _fail(d_19);
                                    else
                                      x_18 = d_19;
                                    {
                                      if(((y_18 != NULL) && (y_18 != e_19)))
                                        _fail(e_19);
                                      else
                                        y_18 = e_19;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_18));
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
                              f_19 = t;
                              if(((a_19 != NULL) && (a_19 != f_19)))
                                _fail(f_19);
                              else
                                a_19 = f_19;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_18)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(x_18), not_null(y_18), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_18)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_19))));
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
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
  w_19 = t;
  u_19 :
  if(match_cons(w_19, sym_Build_1))
    {
      x_19 = ATgetArgument(w_19, 0);
      v_19 :
      if(match_cons(x_19, sym_RootApp_1))
        {
          y_19 = ATgetArgument(x_19, 0);
          t = not_null(y_19);
        }
      else
        {
          if(match_cons(x_19, sym_App_2))
            {
              y_19 = ATgetArgument(x_19, 0);
              z_19 = ATgetArgument(x_19, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_19)), not_null(y_19));
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
ATerm As_2 (ATerm t, ATerm f_93 (ATerm), ATerm g_93 (ATerm))
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
  l_20 = t;
  k_20 :
  if(match_cons(l_20, sym_As_2))
    {
      m_20 = ATgetArgument(l_20, 0);
      n_20 = ATgetArgument(l_20, 1);
      {
        ATerm r_20 = NULL,t_20 = NULL;
        ATerm s_20 = NULL;
        t = SSLgetAnnotations(not_null(l_20));
        {
          s_20 = t;
          if(((r_20 != NULL) && (r_20 != s_20)))
            _fail(s_20);
          else
            r_20 = s_20;
        }
        {
          t = not_null(m_20);
          {
            ATerm v_20 = NULL;
            t = f_93(t);
            {
              t_20 = t;
              {
                t = not_null(n_20);
                {
                  ATerm x_20 = NULL;
                  t = g_93(t);
                  {
                    v_20 = t;
                    {
                      ATerm y_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(t_20), not_null(v_20)), not_null(r_20));
                      {
                        y_20 = t;
                        if(((x_20 != NULL) && (x_20 != y_20)))
                          _fail(y_20);
                        else
                          x_20 = y_20;
                      }
                      t = not_null(x_20);
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
ATerm PrimT_3 (ATerm t, ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm g_97 (ATerm))
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL;
  l_21 = t;
  k_21 :
  if(match_cons(l_21, sym_PrimT_3))
    {
      m_21 = ATgetArgument(l_21, 0);
      n_21 = ATgetArgument(l_21, 1);
      o_21 = ATgetArgument(l_21, 2);
      {
        ATerm t_21 = NULL,v_21 = NULL;
        ATerm u_21 = NULL;
        t = SSLgetAnnotations(not_null(l_21));
        {
          u_21 = t;
          if(((t_21 != NULL) && (t_21 != u_21)))
            _fail(u_21);
          else
            t_21 = u_21;
        }
        {
          t = not_null(m_21);
          {
            ATerm x_21 = NULL;
            t = e_97(t);
            {
              v_21 = t;
              {
                t = not_null(n_21);
                {
                  ATerm z_21 = NULL;
                  t = f_97(t);
                  {
                    x_21 = t;
                    {
                      t = not_null(o_21);
                      {
                        ATerm b_22 = NULL;
                        t = g_97(t);
                        {
                          z_21 = t;
                          {
                            ATerm c_22 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(v_21), not_null(x_21), not_null(z_21)), not_null(t_21));
                            {
                              c_22 = t;
                              if(((b_22 != NULL) && (b_22 != c_22)))
                                _fail(c_22);
                              else
                                b_22 = c_22;
                            }
                            t = not_null(b_22);
                          }
                        }
                      }
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
ATerm Explode_2 (ATerm t, ATerm y_92 (ATerm), ATerm z_92 (ATerm))
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
  p_22 = t;
  o_22 :
  if(match_cons(p_22, sym_Explode_2))
    {
      q_22 = ATgetArgument(p_22, 0);
      r_22 = ATgetArgument(p_22, 1);
      {
        ATerm v_22 = NULL,x_22 = NULL;
        ATerm w_22 = NULL;
        t = SSLgetAnnotations(not_null(p_22));
        {
          w_22 = t;
          if(((v_22 != NULL) && (v_22 != w_22)))
            _fail(w_22);
          else
            v_22 = w_22;
        }
        {
          t = not_null(q_22);
          {
            ATerm z_22 = NULL;
            t = y_92(t);
            {
              x_22 = t;
              {
                t = not_null(r_22);
                {
                  ATerm b_23 = NULL;
                  t = z_92(t);
                  {
                    z_22 = t;
                    {
                      ATerm c_23 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(x_22), not_null(z_22)), not_null(v_22));
                      {
                        c_23 = t;
                        if(((b_23 != NULL) && (b_23 != c_23)))
                          _fail(c_23);
                        else
                          b_23 = c_23;
                      }
                      t = not_null(b_23);
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
ATerm pat_td_1 (ATerm t, ATerm x_135 (ATerm))
{
  ATerm c_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_135(t);
      ;
      LocalPopChoice(j_17);
    }
  else
    {
      t = c_17;
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              ATerm i_1 (ATerm t)
              {
                t = pat_td_1(t, x_135);
                return(t);
              }
              t = fetch_1(t, i_1);
              return(t);
            }
            t = Op_2(t, _id, h_1);
            ;
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            {
              ATerm m_17 = t;
              int n_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_1 (ATerm t)
                  {
                    t = pat_td_1(t, x_135);
                    return(t);
                  }
                  t = Explode_2(t, _id, k_1);
                  ;
                  LocalPopChoice(n_17);
                }
              else
                {
                  t = m_17;
                  {
                    ATerm o_17 = t;
                    int p_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_1 (ATerm t)
                        {
                          t = pat_td_1(t, x_135);
                          return(t);
                        }
                        t = Explode_2(t, l_1, _id);
                        ;
                        LocalPopChoice(p_17);
                      }
                    else
                      {
                        t = o_17;
                        {
                          ATerm q_17 = t;
                          int s_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_1 (ATerm t)
                              {
                                ATerm o_1 (ATerm t)
                                {
                                  t = pat_td_1(t, x_135);
                                  return(t);
                                }
                                t = fetch_1(t, o_1);
                                return(t);
                              }
                              t = PrimT_3(t, _id, _id, n_1);
                              ;
                              LocalPopChoice(s_17);
                            }
                          else
                            {
                              t = q_17;
                              {
                                ATerm p_1 (ATerm t)
                                {
                                  t = pat_td_1(t, x_135);
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
  ATerm t_23 = NULL,u_23 = NULL;
  t_23 = t;
  s_23 :
  if(match_cons(t_23, sym_Build_1))
    {
      u_23 = ATgetArgument(t_23, 0);
      {
        ATerm t_17 = t;
        int u_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_23 = NULL,x_23 = NULL;
            ATerm b_24 = NULL;
            t = not_null(u_23);
            {
              ATerm r_1 (ATerm t)
              {
                ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL;
                y_23 = t;
                l_23 :
                if(match_cons(y_23, sym_RootApp_1))
                  {
                    z_23 = ATgetArgument(y_23, 0);
                    m_23 :
                    if(match_cons(z_23, sym_Build_1))
                      {
                        a_24 = ATgetArgument(z_23, 0);
                        {
                          if(((w_23 != NULL) && (w_23 != a_24)))
                            _fail(a_24);
                          else
                            w_23 = a_24;
                          t = not_null(w_23);
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
                b_24 = t;
                if(((x_23 != NULL) && (x_23 != b_24)))
                  _fail(b_24);
                else
                  x_23 = b_24;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(x_23));
            ;
            LocalPopChoice(u_17);
          }
        else
          {
            t = t_17;
            {
              ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
              ATerm k_24 = NULL;
              t = not_null(u_23);
              {
                ATerm s_1 (ATerm t)
                {
                  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL;
                  g_24 = t;
                  p_23 :
                  if(match_cons(g_24, sym_App_2))
                    {
                      h_24 = ATgetArgument(g_24, 0);
                      j_24 = ATgetArgument(g_24, 1);
                      q_23 :
                      if(match_cons(h_24, sym_Build_1))
                        {
                          i_24 = ATgetArgument(h_24, 0);
                          {
                            if(((e_24 != NULL) && (e_24 != i_24)))
                              _fail(i_24);
                            else
                              e_24 = i_24;
                            {
                              if(((d_24 != NULL) && (d_24 != j_24)))
                                _fail(j_24);
                              else
                                d_24 = j_24;
                              t = not_null(e_24);
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
                  k_24 = t;
                  if(((f_24 != NULL) && (f_24 != k_24)))
                    _fail(k_24);
                  else
                    f_24 = k_24;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(f_24));
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
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      ;
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      {
        ATerm y_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            ;
            LocalPopChoice(a_18);
          }
        else
          {
            t = y_17;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL;
  ATerm b_25 (ATerm t)
  {
    ATerm y_24 = NULL;
    ATerm z_24 = NULL;
    t = not_null(v_24);
    {
      ATerm e_18 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_18;
        }
      {
        t = new_0(t);
        {
          z_24 = t;
          if(((y_24 != NULL) && (y_24 != z_24)))
            _fail(z_24);
          else
            y_24 = z_24;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(y_24)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_24)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_24))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_24))));
    return(t);
  }
  ATerm c_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_o_18, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_24))));
    return(t);
  }
  v_24 = t;
  u_24 :
  if(match_cons(v_24, sym_Var_1))
    {
      w_24 = ATgetArgument(v_24, 0);
      {
        ATerm w_18 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_25(t);
            ;
            LocalPopChoice(g_19);
          }
        else
          {
            t = w_18;
            t = c_25(t);
          }
      }
    }
  else
    {
      t = b_25(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
  o_25 = t;
  m_25 :
  if(match_cons(o_25, sym_PrimT_3))
    {
      p_25 = ATgetArgument(o_25, 0);
      q_25 = ATgetArgument(o_25, 1);
      n_25 = ATgetArgument(o_25, 2);
      {
        ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
        ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL;
        t = not_null(n_25);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm h_19 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = h_19;
              }
            return(t);
          }
          t = fetch_1(t, u_1);
          {
            t = not_null(n_25);
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
                  x_25 = t;
                  h_25 :
                  if(match_cons(x_25, sym__2))
                    {
                      y_25 = ATgetArgument(x_25, 0);
                      z_25 = ATgetArgument(x_25, 1);
                      i_25 :
                      if(match_cons(z_25, sym__2))
                        {
                          a_26 = ATgetArgument(z_25, 0);
                          b_26 = ATgetArgument(z_25, 1);
                          {
                            if(((u_25 != NULL) && (u_25 != y_25)))
                              _fail(y_25);
                            else
                              u_25 = y_25;
                            {
                              if(((v_25 != NULL) && (v_25 != a_26)))
                                _fail(a_26);
                              else
                                v_25 = a_26;
                              if(((w_25 != NULL) && (w_25 != b_26)))
                                _fail(b_26);
                              else
                                w_25 = b_26;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(v_25)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(p_25), not_null(q_25), not_null(w_25))));
      }
    }
  else
    {
      if(match_cons(o_25, sym_Prim_2))
        {
          p_25 = ATgetArgument(o_25, 0);
          q_25 = ATgetArgument(o_25, 1);
          {
            ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL;
            ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL;
            t = not_null(q_25);
            {
              ATerm y_1 (ATerm t)
              {
                ATerm i_19 = t;
                if((PushChoice() == 0))
                  {
                    t = Var_1(t, _id);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_19;
                  }
                return(t);
              }
              t = fetch_1(t, y_1);
              {
                t = not_null(q_25);
                {
                  t = unzip_1(t, LiftPrimArg_0);
                  {
                    ATerm a_2 (ATerm t)
                    {
                      t = unzip_1(t, _id);
                      return(t);
                    }
                    t = _2(t, concat_0, a_2);
                    {
                      h_26 = t;
                      k_25 :
                      if(match_cons(h_26, sym__2))
                        {
                          i_26 = ATgetArgument(h_26, 0);
                          j_26 = ATgetArgument(h_26, 1);
                          l_25 :
                          if(match_cons(j_26, sym__2))
                            {
                              k_26 = ATgetArgument(j_26, 0);
                              l_26 = ATgetArgument(j_26, 1);
                              {
                                if(((e_26 != NULL) && (e_26 != i_26)))
                                  _fail(i_26);
                                else
                                  e_26 = i_26;
                                {
                                  if(((f_26 != NULL) && (f_26 != k_26)))
                                    _fail(k_26);
                                  else
                                    f_26 = k_26;
                                  if(((g_26 != NULL) && (g_26 != l_26)))
                                    _fail(l_26);
                                  else
                                    g_26 = l_26;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(f_26)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(p_25), (ATerm)ATempty, not_null(g_26))));
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
  ATerm b_2 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm c_2 (ATerm t)
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            ;
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
            {
              ATerm l_19 = t;
              int m_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(m_19);
                }
              else
                {
                  t = l_19;
                  {
                    ATerm n_19 = t;
                    int o_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        ;
                        LocalPopChoice(o_19);
                      }
                    else
                      {
                        t = n_19;
                        {
                          ATerm p_19 = t;
                          int q_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              ;
                              LocalPopChoice(q_19);
                            }
                          else
                            {
                              t = p_19;
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
      t = repeat_1(t, c_2);
    }
    return(t);
  }
  t = topdown_1(t, b_2);
  return(t);
}
ATerm desugar_spec_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SDef_3(t, _id, _id, desugar_0);
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        {
          ATerm t_19 = t;
          int a_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SDefT_4(t, _id, _id, _id, desugar_0);
              ;
              LocalPopChoice(a_20);
            }
          else
            {
              t = t_19;
              {
                ATerm e_2 (ATerm t)
                {
                  t = term_b_20;
                  return(t);
                }
                t = debug_1(t, e_2);
                _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = map_1(t, d_2);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm p_91 (ATerm))
{
  ATerm v_26 = NULL,w_26 = NULL;
  v_26 = t;
  u_26 :
  if(match_cons(v_26, sym_Strategies_1))
    {
      w_26 = ATgetArgument(v_26, 0);
      {
        ATerm z_26 = NULL,b_27 = NULL;
        ATerm a_27 = NULL;
        t = SSLgetAnnotations(not_null(v_26));
        {
          a_27 = t;
          if(((z_26 != NULL) && (z_26 != a_27)))
            _fail(a_27);
          else
            z_26 = a_27;
        }
        {
          t = not_null(w_26);
          {
            ATerm d_27 = NULL;
            t = p_91(t);
            {
              b_27 = t;
              {
                ATerm e_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(b_27)), not_null(z_26));
                {
                  e_27 = t;
                  if(((d_27 != NULL) && (d_27 != e_27)))
                    _fail(e_27);
                  else
                    d_27 = e_27;
                }
                t = not_null(d_27);
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
ATerm Specification_1 (ATerm t, ATerm u_91 (ATerm))
{
  ATerm o_27 = NULL,p_27 = NULL;
  o_27 = t;
  n_27 :
  if(match_cons(o_27, sym_Specification_1))
    {
      p_27 = ATgetArgument(o_27, 0);
      {
        ATerm s_27 = NULL,u_27 = NULL;
        ATerm t_27 = NULL;
        t = SSLgetAnnotations(not_null(o_27));
        {
          t_27 = t;
          if(((s_27 != NULL) && (s_27 != t_27)))
            _fail(t_27);
          else
            s_27 = t_27;
        }
        {
          t = not_null(p_27);
          {
            ATerm w_27 = NULL;
            t = u_91(t);
            {
              u_27 = t;
              {
                ATerm x_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(u_27)), not_null(s_27));
                {
                  x_27 = t;
                  if(((w_27 != NULL) && (w_27 != x_27)))
                    _fail(x_27);
                  else
                    w_27 = x_27;
                }
                t = not_null(w_27);
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
ATerm if_verbose3_1 (ATerm t, ATerm m_126 (ATerm))
{
  ATerm f_2 (ATerm t)
  {
    ATerm c_20;
    c_20 = t;
    {
      ATerm d_28 = NULL;
      ATerm e_28 = NULL;
      t = term_d_20;
      {
        t = get_config_0(t);
        {
          e_28 = t;
          if(((d_28 != NULL) && (d_28 != e_28)))
            _fail(e_28);
          else
            d_28 = e_28;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_28), term_e_20);
        t = geq_0(t);
      }
    }
    t = c_20;
    t = m_126(t);
    return(t);
  }
  t = try_1(t, f_2);
  return(t);
}
ATerm timing_1 (ATerm t, ATerm j_105 (ATerm))
{
  ATerm g_2 (ATerm t)
  {
    ATerm f_20;
    f_20 = t;
    {
      t = dtime_0(t);
      t = debug_1(t, j_105);
    }
    t = f_20;
    return(t);
  }
  t = if_verbose3_1(t, g_2);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm j_135 (ATerm))
{
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_2 (ATerm t)
      {
        t = split_2(t, _id, j_135);
        {
          ATerm i_2 (ATerm t)
          {
            ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
            k_28 = t;
            i_28 :
            if(match_cons(k_28, sym__2))
              {
                l_28 = ATgetArgument(k_28, 0);
                q_28 = ATgetArgument(k_28, 1);
                j_28 :
                if(match_cons(l_28, sym_SDef_3))
                  {
                    m_28 = ATgetArgument(l_28, 0);
                    n_28 = ATgetArgument(l_28, 1);
                    o_28 = ATgetArgument(l_28, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(q_28), not_null(n_28), not_null(o_28));
                  }
                else
                  {
                    if(match_cons(l_28, sym_SDefT_4))
                      {
                        m_28 = ATgetArgument(l_28, 0);
                        n_28 = ATgetArgument(l_28, 1);
                        o_28 = ATgetArgument(l_28, 2);
                        p_28 = ATgetArgument(l_28, 3);
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(q_28), not_null(n_28), not_null(o_28), not_null(p_28));
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
          t = zip_1(t, i_2);
        }
        return(t);
      }
      t = Let_2(t, h_2, _id);
      ;
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
      {
        ATerm i_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_2 (ATerm t)
            {
              t = split_2(t, _id, j_135);
              t = zip_1(t, ReplaceVar_0);
              return(t);
            }
            t = SDef_3(t, _id, j_2, _id);
            ;
            LocalPopChoice(j_20);
          }
        else
          {
            t = i_20;
            {
              ATerm o_20 = t;
              int p_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_2 (ATerm t)
                  {
                    t = split_2(t, _id, j_135);
                    t = zip_1(t, ReplaceVar_0);
                    return(t);
                  }
                  t = SDefT_4(t, _id, k_2, _id, _id);
                  ;
                  LocalPopChoice(p_20);
                }
              else
                {
                  t = o_20;
                  {
                    ATerm q_20 = t;
                    int u_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_2 (ATerm t)
                        {
                          t = split_2(t, _id, j_135);
                          t = zip_1(t, ReplaceVar_0);
                          return(t);
                        }
                        t = RDefT_4(t, _id, l_2, _id, _id);
                        ;
                        LocalPopChoice(u_20);
                      }
                    else
                      {
                        t = q_20;
                        {
                          ATerm m_2 (ATerm t)
                          {
                            t = j_135(t);
                            t = Hd_0(t);
                            return(t);
                          }
                          t = Rec_2(t, m_2, _id);
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
ATerm Rec_2 (ATerm t, ATerm v_96 (ATerm), ATerm w_96 (ATerm))
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL;
  g_29 = t;
  f_29 :
  if(match_cons(g_29, sym_Rec_2))
    {
      h_29 = ATgetArgument(g_29, 0);
      i_29 = ATgetArgument(g_29, 1);
      {
        ATerm m_29 = NULL,o_29 = NULL;
        ATerm n_29 = NULL;
        t = SSLgetAnnotations(not_null(g_29));
        {
          n_29 = t;
          if(((m_29 != NULL) && (m_29 != n_29)))
            _fail(n_29);
          else
            m_29 = n_29;
        }
        {
          t = not_null(h_29);
          {
            ATerm q_29 = NULL;
            t = v_96(t);
            {
              o_29 = t;
              {
                t = not_null(i_29);
                {
                  ATerm s_29 = NULL;
                  t = w_96(t);
                  {
                    q_29 = t;
                    {
                      ATerm t_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(o_29), not_null(q_29)), not_null(m_29));
                      {
                        t_29 = t;
                        if(((s_29 != NULL) && (s_29 != t_29)))
                          _fail(t_29);
                        else
                          s_29 = t_29;
                      }
                      t = not_null(s_29);
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
ATerm Let_2 (ATerm t, ATerm y_95 (ATerm), ATerm z_95 (ATerm))
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
  f_30 = t;
  e_30 :
  if(match_cons(f_30, sym_Let_2))
    {
      g_30 = ATgetArgument(f_30, 0);
      h_30 = ATgetArgument(f_30, 1);
      {
        ATerm l_30 = NULL,n_30 = NULL;
        ATerm m_30 = NULL;
        t = SSLgetAnnotations(not_null(f_30));
        {
          m_30 = t;
          if(((l_30 != NULL) && (l_30 != m_30)))
            _fail(m_30);
          else
            l_30 = m_30;
        }
        {
          t = not_null(g_30);
          {
            ATerm p_30 = NULL;
            t = y_95(t);
            {
              n_30 = t;
              {
                t = not_null(h_30);
                {
                  ATerm r_30 = NULL;
                  t = z_95(t);
                  {
                    p_30 = t;
                    {
                      ATerm s_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(n_30), not_null(p_30)), not_null(l_30));
                      {
                        s_30 = t;
                        if(((r_30 != NULL) && (r_30 != s_30)))
                          _fail(s_30);
                        else
                          r_30 = s_30;
                      }
                      t = not_null(r_30);
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
ATerm sboundin_3 (ATerm t, ATerm k_135 (ATerm), ATerm l_135 (ATerm), ATerm m_135 (ATerm))
{
  ATerm w_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, k_135, k_135);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = w_20;
      {
        ATerm a_21 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, m_135, m_135, k_135);
            ;
            LocalPopChoice(b_21);
          }
        else
          {
            t = a_21;
            {
              ATerm c_21 = t;
              int d_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4(t, m_135, m_135, m_135, k_135);
                  ;
                  LocalPopChoice(d_21);
                }
              else
                {
                  t = c_21;
                  t = Rec_2(t, m_135, k_135);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
  a_31 = t;
  z_30 :
  if(match_cons(a_31, sym_RDefT_4))
    {
      b_31 = ATgetArgument(a_31, 0);
      c_31 = ATgetArgument(a_31, 1);
      d_31 = ATgetArgument(a_31, 2);
      e_31 = ATgetArgument(a_31, 3);
      {
        t = not_null(c_31);
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
  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL;
  m_31 = t;
  l_31 :
  if(match_cons(m_31, sym_SDefT_4))
    {
      n_31 = ATgetArgument(m_31, 0);
      o_31 = ATgetArgument(m_31, 1);
      p_31 = ATgetArgument(m_31, 2);
      q_31 = ATgetArgument(m_31, 3);
      {
        t = not_null(o_31);
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
  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL;
  y_31 = t;
  x_31 :
  if(match_cons(y_31, sym_Rec_2))
    {
      z_31 = ATgetArgument(y_31, 0);
      a_32 = ATgetArgument(y_31, 1);
      t = (ATerm) ATinsert(ATempty, not_null(z_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL;
  g_32 = t;
  f_32 :
  if(match_cons(g_32, sym_SDef_3))
    {
      h_32 = ATgetArgument(g_32, 0);
      i_32 = ATgetArgument(g_32, 1);
      j_32 = ATgetArgument(g_32, 2);
      {
        t = not_null(i_32);
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
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
  t_32 = t;
  s_32 :
  if(match_cons(t_32, sym_Let_2))
    {
      u_32 = ATgetArgument(t_32, 0);
      v_32 = ATgetArgument(t_32, 1);
      {
        t = not_null(u_32);
        {
          ATerm n_2 (ATerm t)
          {
            ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL;
            y_32 = t;
            r_32 :
            if(match_cons(y_32, sym_SDef_3))
              {
                z_32 = ATgetArgument(y_32, 0);
                a_33 = ATgetArgument(y_32, 1);
                b_33 = ATgetArgument(y_32, 2);
                t = not_null(z_32);
              }
            else
              {
                if(match_cons(y_32, sym_SDefT_4))
                  {
                    z_32 = ATgetArgument(y_32, 0);
                    a_33 = ATgetArgument(y_32, 1);
                    b_33 = ATgetArgument(y_32, 2);
                    c_33 = ATgetArgument(y_32, 3);
                    t = not_null(z_32);
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, n_2);
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
  ATerm o_2 (ATerm t)
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        {
          ATerm g_21 = t;
          int h_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(h_21);
            }
          else
            {
              t = g_21;
              {
                ATerm i_21 = t;
                int j_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0(t);
                    ;
                    LocalPopChoice(j_21);
                  }
                else
                  {
                    t = i_21;
                    {
                      ATerm p_21 = t;
                      int q_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0(t);
                          ;
                          LocalPopChoice(q_21);
                        }
                      else
                        {
                          t = p_21;
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
  t = rename_4(t, SVar_1, o_2, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm f_132 (ATerm, ATerm (ATerm)), ATerm g_132 (ATerm), ATerm h_132 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm i_132 (ATerm, ATerm (ATerm)))
{
  ATerm j_33 = NULL;
  j_33 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_33), (ATerm) ATempty);
    {
      ATerm m_33 (ATerm t)
      {
        ATerm p_2 (ATerm t)
        {
          ATerm r_21 = t;
          int s_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, f_132);
              ;
              LocalPopChoice(s_21);
            }
          else
            {
              t = r_21;
              {
                t = RnBinding_2(t, g_132, i_132);
                t = DistBinding_2(t, m_33, h_132);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, p_2);
        return(t);
      }
      t = m_33(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm w_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(y_21);
      }
    else
      {
        t = w_21;
        {
          ATerm a_22 = t;
          int d_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0(t);
              ;
              LocalPopChoice(d_22);
            }
          else
            {
              t = a_22;
              t = Bind8_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, Var_1, q_2, tboundin_3, tpaste_1);
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
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
  q_33 = t;
  o_33 :
  if(match_cons(q_33, sym_Var_1))
    {
      r_33 = ATgetArgument(q_33, 0);
      p_33 :
      if(match_cons(r_33, sym_ListVar_1))
        {
          s_33 = ATgetArgument(r_33, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_33));
        }
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
  ATerm j_34 = NULL,k_34 = NULL;
  j_34 = t;
  i_34 :
  if(match_cons(j_34, sym_Build_1))
    {
      k_34 = ATgetArgument(j_34, 0);
      {
        ATerm m_34 = NULL,n_34 = NULL;
        ATerm z_34 = NULL;
        t = not_null(k_34);
        {
          ATerm r_2 (ATerm t)
          {
            ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL;
            o_34 = t;
            x_33 :
            if(match_cons(o_34, sym_Op_2))
              {
                p_34 = ATgetArgument(o_34, 0);
                q_34 = ATgetArgument(o_34, 1);
                y_33 :
                if(match_string(p_34, "Cons"))
                  {
                    z_33 :
                    if(((ATgetType(q_34) == AT_LIST) && !(ATisEmpty(q_34))))
                      {
                        r_34 = ATgetFirst((ATermList) q_34);
                        u_34 = (ATerm) ATgetNext((ATermList) q_34);
                        a_34 :
                        if(match_cons(r_34, sym_Var_1))
                          {
                            s_34 = ATgetArgument(r_34, 0);
                            b_34 :
                            if(match_cons(s_34, sym_ListVar_1))
                              {
                                t_34 = ATgetArgument(s_34, 0);
                                c_34 :
                                if(((ATgetType(u_34) == AT_LIST) && !(ATisEmpty(u_34))))
                                  {
                                    v_34 = ATgetFirst((ATermList) u_34);
                                    y_34 = (ATerm) ATgetNext((ATermList) u_34);
                                    d_34 :
                                    if(match_cons(v_34, sym_Op_2))
                                      {
                                        w_34 = ATgetArgument(v_34, 0);
                                        x_34 = ATgetArgument(v_34, 1);
                                        e_34 :
                                        if(match_string(w_34, "Nil"))
                                          {
                                            f_34 :
                                            if(((ATgetType(x_34) == AT_LIST) && ATisEmpty(x_34)))
                                              {
                                                g_34 :
                                                if(((ATgetType(y_34) == AT_LIST) && ATisEmpty(y_34)))
                                                  {
                                                    {
                                                      if(((m_34 != NULL) && (m_34 != t_34)))
                                                        _fail(t_34);
                                                      else
                                                        m_34 = t_34;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_34));
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
          t = oncetd_1(t, r_2);
          {
            z_34 = t;
            if(((n_34 != NULL) && (n_34 != z_34)))
              _fail(z_34);
            else
              n_34 = z_34;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(n_34));
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
  ATerm r_35 = NULL,s_35 = NULL;
  r_35 = t;
  q_35 :
  if(match_cons(r_35, sym_Match_1))
    {
      s_35 = ATgetArgument(r_35, 0);
      {
        ATerm u_35 = NULL,v_35 = NULL;
        ATerm h_36 = NULL;
        t = not_null(s_35);
        {
          ATerm s_2 (ATerm t)
          {
            ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL;
            w_35 = t;
            f_35 :
            if(match_cons(w_35, sym_Op_2))
              {
                x_35 = ATgetArgument(w_35, 0);
                y_35 = ATgetArgument(w_35, 1);
                g_35 :
                if(match_string(x_35, "Cons"))
                  {
                    h_35 :
                    if(((ATgetType(y_35) == AT_LIST) && !(ATisEmpty(y_35))))
                      {
                        z_35 = ATgetFirst((ATermList) y_35);
                        c_36 = (ATerm) ATgetNext((ATermList) y_35);
                        i_35 :
                        if(match_cons(z_35, sym_Var_1))
                          {
                            a_36 = ATgetArgument(z_35, 0);
                            j_35 :
                            if(match_cons(a_36, sym_ListVar_1))
                              {
                                b_36 = ATgetArgument(a_36, 0);
                                k_35 :
                                if(((ATgetType(c_36) == AT_LIST) && !(ATisEmpty(c_36))))
                                  {
                                    d_36 = ATgetFirst((ATermList) c_36);
                                    g_36 = (ATerm) ATgetNext((ATermList) c_36);
                                    l_35 :
                                    if(match_cons(d_36, sym_Op_2))
                                      {
                                        e_36 = ATgetArgument(d_36, 0);
                                        f_36 = ATgetArgument(d_36, 1);
                                        m_35 :
                                        if(match_string(e_36, "Nil"))
                                          {
                                            n_35 :
                                            if(((ATgetType(f_36) == AT_LIST) && ATisEmpty(f_36)))
                                              {
                                                o_35 :
                                                if(((ATgetType(g_36) == AT_LIST) && ATisEmpty(g_36)))
                                                  {
                                                    {
                                                      if(((u_35 != NULL) && (u_35 != b_36)))
                                                        _fail(b_36);
                                                      else
                                                        u_35 = b_36;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_35));
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
          t = oncetd_1(t, s_2);
          {
            h_36 = t;
            if(((v_35 != NULL) && (v_35 != h_36)))
              _fail(h_36);
            else
              v_35 = h_36;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(v_35));
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
  ATerm h_37 = NULL;
  h_37 = t;
  o_36 :
  if(match_cons(h_37, sym_Wld_0))
    {
      ATerm k_37 = NULL,m_37 = NULL;
      ATerm e_22;
      e_22 = t;
      {
        ATerm l_37 = NULL;
        t = SSLgetAnnotations(not_null(h_37));
        {
          l_37 = t;
          if(((k_37 != NULL) && (k_37 != l_37)))
            _fail(l_37);
          else
            k_37 = l_37;
        }
      }
      t = e_22;
      {
        ATerm n_37 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(k_37));
        {
          n_37 = t;
          if(((m_37 != NULL) && (m_37 != n_37)))
            _fail(n_37);
          else
            m_37 = n_37;
        }
        t = not_null(m_37);
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
  ATerm f_22 = t;
  if((PushChoice() == 0))
    {
      ATerm t_2 (ATerm t)
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, t_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_22;
    }
  return(t);
}
ATerm Con_3 (ATerm t, ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm w_0 (ATerm))
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL;
  h_38 = t;
  g_38 :
  if(match_cons(h_38, sym_Con_3))
    {
      i_38 = ATgetArgument(h_38, 0);
      j_38 = ATgetArgument(h_38, 1);
      k_38 = ATgetArgument(h_38, 2);
      {
        ATerm i_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_38 = NULL,r_38 = NULL;
            ATerm q_38 = NULL;
            t = SSLgetAnnotations(not_null(h_38));
            {
              q_38 = t;
              if(((p_38 != NULL) && (p_38 != q_38)))
                _fail(q_38);
              else
                p_38 = q_38;
            }
            {
              t = not_null(i_38);
              {
                ATerm y_38 = NULL;
                t = t_0(t);
                {
                  r_38 = t;
                  {
                    t = not_null(j_38);
                    {
                      ATerm a_39 = NULL;
                      t = v_0(t);
                      {
                        y_38 = t;
                        {
                          t = not_null(k_38);
                          {
                            ATerm c_39 = NULL;
                            t = w_0(t);
                            {
                              a_39 = t;
                              {
                                ATerm d_39 = NULL;
                                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(r_38), not_null(y_38), not_null(a_39)), not_null(p_38));
                                {
                                  d_39 = t;
                                  if(((c_39 != NULL) && (c_39 != d_39)))
                                    _fail(d_39);
                                  else
                                    c_39 = d_39;
                                }
                                t = not_null(c_39);
                              }
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
            LocalPopChoice(j_22);
          }
        else
          {
            t = i_22;
            {
              ATerm i_39 = NULL,k_39 = NULL;
              ATerm j_39 = NULL;
              t = SSLgetAnnotations(not_null(h_38));
              {
                j_39 = t;
                if(((i_39 != NULL) && (i_39 != j_39)))
                  _fail(j_39);
                else
                  i_39 = j_39;
              }
              {
                t = not_null(i_38);
                {
                  ATerm s_39 = NULL;
                  t = t_0(t);
                  {
                    k_39 = t;
                    {
                      t = not_null(j_38);
                      {
                        ATerm u_39 = NULL;
                        t = v_0(t);
                        {
                          s_39 = t;
                          {
                            t = not_null(k_38);
                            {
                              ATerm w_39 = NULL;
                              t = w_0(t);
                              {
                                u_39 = t;
                                {
                                  ATerm x_39 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(k_39), not_null(s_39), not_null(u_39)), not_null(i_39));
                                  {
                                    x_39 = t;
                                    if(((w_39 != NULL) && (w_39 != x_39)))
                                      _fail(x_39);
                                    else
                                      w_39 = x_39;
                                  }
                                  t = not_null(w_39);
                                }
                              }
                            }
                          }
                        }
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
  ATerm k_22 = t;
  if((PushChoice() == 0))
    {
      ATerm u_2 (ATerm t)
      {
        ATerm l_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(m_22);
          }
        else
          {
            t = l_22;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, u_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_22;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL;
  o_40 = t;
  m_40 :
  if(match_cons(o_40, sym_SRule_1))
    {
      p_40 = ATgetArgument(o_40, 0);
      n_40 :
      if(match_cons(p_40, sym_StratRule_3))
        {
          q_40 = ATgetArgument(p_40, 0);
          r_40 = ATgetArgument(p_40, 1);
          s_40 = ATgetArgument(p_40, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(r_40)), (ATerm) ATmakeAppl(sym_Where_1, not_null(s_40))), not_null(q_40)));
        }
      else
        {
          if(match_cons(p_40, sym_Rule_3))
            {
              q_40 = ATgetArgument(p_40, 0);
              r_40 = ATgetArgument(p_40, 1);
              s_40 = ATgetArgument(p_40, 2);
              {
                t = not_null(q_40);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(r_40);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(r_40))), (ATerm) ATmakeAppl(sym_Where_1, not_null(s_40))), (ATerm) ATmakeAppl(sym_Match_1, not_null(q_40))));
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
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,g_42 = NULL;
  u_41 = t;
  s_41 :
  if(match_cons(u_41, sym_SRule_1))
    {
      v_41 = ATgetArgument(u_41, 0);
      t_41 :
      if(match_cons(v_41, sym_Rule_3))
        {
          w_41 = ATgetArgument(v_41, 0);
          x_41 = ATgetArgument(v_41, 1);
          g_42 = ATgetArgument(v_41, 2);
          {
            ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
            ATerm s_42 = NULL;
            ATerm y_42 = NULL;
            t = new_0(t);
            {
              s_42 = t;
              {
                if(((p_42 != NULL) && (p_42 != s_42)))
                  _fail(s_42);
                else
                  p_42 = s_42;
                {
                  t = not_null(w_41);
                  {
                    ATerm h_43 = NULL;
                    ATerm v_2 (ATerm t)
                    {
                      ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL;
                      t_42 = t;
                      e_41 :
                      if(match_cons(t_42, sym_Con_3))
                        {
                          u_42 = ATgetArgument(t_42, 0);
                          w_42 = ATgetArgument(t_42, 1);
                          x_42 = ATgetArgument(t_42, 2);
                          f_41 :
                          if(match_cons(u_42, sym_Var_1))
                            {
                              v_42 = ATgetArgument(u_42, 0);
                              {
                                if(((o_42 != NULL) && (o_42 != v_42)))
                                  _fail(v_42);
                                else
                                  o_42 = v_42;
                                {
                                  if(((m_42 != NULL) && (m_42 != w_42)))
                                    _fail(w_42);
                                  else
                                    m_42 = w_42;
                                  {
                                    if(((k_42 != NULL) && (k_42 != x_42)))
                                      _fail(x_42);
                                    else
                                      k_42 = x_42;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_42));
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
                    t = oncetd_1(t, v_2);
                    {
                      y_42 = t;
                      {
                        if(((q_42 != NULL) && (q_42 != y_42)))
                          _fail(y_42);
                        else
                          q_42 = y_42;
                        {
                          t = not_null(x_41);
                          {
                            ATerm w_2 (ATerm t)
                            {
                              ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL;
                              z_42 = t;
                              i_41 :
                              if(match_cons(z_42, sym_Con_3))
                                {
                                  a_43 = ATgetArgument(z_42, 0);
                                  c_43 = ATgetArgument(z_42, 1);
                                  d_43 = ATgetArgument(z_42, 2);
                                  j_41 :
                                  if(match_cons(a_43, sym_Var_1))
                                    {
                                      b_43 = ATgetArgument(a_43, 0);
                                      k_41 :
                                      if(match_cons(d_43, sym_CallT_3))
                                        {
                                          e_43 = ATgetArgument(d_43, 0);
                                          f_43 = ATgetArgument(d_43, 1);
                                          g_43 = ATgetArgument(d_43, 2);
                                          l_41 :
                                          if(((ATgetType(f_43) == AT_LIST) && ATisEmpty(f_43)))
                                            {
                                              m_41 :
                                              if(((ATgetType(g_43) == AT_LIST) && ATisEmpty(g_43)))
                                                {
                                                  {
                                                    if(((o_42 != NULL) && (o_42 != b_43)))
                                                      _fail(b_43);
                                                    else
                                                      o_42 = b_43;
                                                    {
                                                      if(((n_42 != NULL) && (n_42 != c_43)))
                                                        _fail(c_43);
                                                      else
                                                        n_42 = c_43;
                                                      {
                                                        if(((l_42 != NULL) && (l_42 != e_43)))
                                                          _fail(e_43);
                                                        else
                                                          l_42 = e_43;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_42));
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
                            t = oncetd_1(t, w_2);
                            {
                              h_43 = t;
                              if(((r_42 != NULL) && (r_42 != h_43)))
                                _fail(h_43);
                              else
                                r_42 = h_43;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_42)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(q_42), not_null(r_42), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_42), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(l_42), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(m_42), not_null(n_42), term_o_18))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(o_42)), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_42)))))));
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
  ATerm x_2 (ATerm t)
  {
    ATerm n_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        ;
        LocalPopChoice(s_22);
      }
    else
      {
        t = n_22;
        {
          ATerm t_22 = t;
          int u_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              ;
              LocalPopChoice(u_22);
            }
          else
            {
              t = t_22;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, x_2);
  return(t);
}
ATerm ListVarScope_0 (ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL,a_44 = NULL;
  u_43 = t;
  t_43 :
  if(match_cons(u_43, sym_Scope_2))
    {
      v_43 = ATgetArgument(u_43, 0);
      a_44 = ATgetArgument(u_43, 1);
      {
        ATerm g_44 = NULL;
        ATerm k_44 = NULL;
        t = not_null(v_43);
        {
          ATerm y_2 (ATerm t)
          {
            ATerm z_2 (ATerm t)
            {
              ATerm h_44 = NULL,i_44 = NULL;
              h_44 = t;
              r_43 :
              if(match_cons(h_44, sym_ListVar_1))
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
            t = try_1(t, z_2);
            return(t);
          }
          t = map_1(t, y_2);
          {
            k_44 = t;
            if(((g_44 != NULL) && (g_44 != k_44)))
              _fail(k_44);
            else
              g_44 = k_44;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_44), not_null(a_44));
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
  ATerm a_3 (ATerm t)
  {
    ATerm b_3 (ATerm t)
    {
      ATerm y_22 = t;
      int a_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0(t);
          ;
          LocalPopChoice(a_23);
        }
      else
        {
          t = y_22;
          t = desugarRule_0(t);
        }
      return(t);
    }
    t = try_1(t, b_3);
    {
      ATerm c_3 (ATerm t)
      {
        ATerm d_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_23 = t;
            int g_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = HL_0(t);
                ;
                LocalPopChoice(g_23);
              }
            else
              {
                t = f_23;
                {
                  ATerm h_23 = t;
                  int i_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = ListMatch_0(t);
                      ;
                      LocalPopChoice(i_23);
                    }
                  else
                    {
                      t = h_23;
                      t = ListBuild_0(t);
                    }
                }
              }
            ;
            LocalPopChoice(e_23);
          }
        else
          {
            t = d_23;
            t = SingleListVar_0(t);
          }
        return(t);
      }
      t = repeat_1(t, c_3);
    }
    return(t);
  }
  t = topdown_1(t, a_3);
  return(t);
}
ATerm ExpandCall_0 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL;
  q_44 = t;
  p_44 :
  if(match_cons(q_44, sym_Call_2))
    {
      r_44 = ATgetArgument(q_44, 0);
      s_44 = ATgetArgument(q_44, 1);
      t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(r_44), not_null(s_44), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm expand_calls_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    t = try_1(t, ExpandCall_0);
    return(t);
  }
  t = topdown_1(t, d_3);
  return(t);
}
ATerm DeclareVariables_0 (ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL;
  t_45 = t;
  r_45 :
  if(match_cons(t_45, sym_SDefT_4))
    {
      u_45 = ATgetArgument(t_45, 0);
      v_45 = ATgetArgument(t_45, 1);
      w_45 = ATgetArgument(t_45, 2);
      s_45 = ATgetArgument(t_45, 3);
      {
        ATerm b_46 = NULL,d_46 = NULL;
        ATerm j_23;
        j_23 = t;
        {
          ATerm c_46 = NULL;
          t = not_null(w_45);
          {
            t = declared_vars_0(t);
            {
              c_46 = t;
              if(((b_46 != NULL) && (b_46 != c_46)))
                _fail(c_46);
              else
                b_46 = c_46;
            }
          }
        }
        t = j_23;
        {
          ATerm e_46 = NULL,g_46 = NULL;
          ATerm f_46 = NULL;
          t = not_null(s_45);
          {
            t = tvars_0(t);
            {
              f_46 = t;
              if(((e_46 != NULL) && (e_46 != f_46)))
                _fail(f_46);
              else
                e_46 = f_46;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_46), not_null(b_46));
            {
              t = diff_0(t);
              {
                g_46 = t;
                if(((d_46 != NULL) && (d_46 != g_46)))
                  _fail(g_46);
                else
                  d_46 = g_46;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(u_45), not_null(v_45), not_null(w_45), (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_46), not_null(s_45)));
        }
      }
    }
  else
    {
      if(match_cons(t_45, sym_SDef_3))
        {
          u_45 = ATgetArgument(t_45, 0);
          v_45 = ATgetArgument(t_45, 1);
          w_45 = ATgetArgument(t_45, 2);
          {
            ATerm k_46 = NULL;
            ATerm l_46 = NULL;
            t = not_null(w_45);
            {
              t = tvars_0(t);
              {
                l_46 = t;
                if(((k_46 != NULL) && (k_46 != l_46)))
                  _fail(l_46);
                else
                  k_46 = l_46;
              }
            }
            t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(u_45), not_null(v_45), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_46), not_null(w_45)));
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
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL;
  f_47 = t;
  d_47 :
  if(match_cons(f_47, sym_RDefT_4))
    {
      g_47 = ATgetArgument(f_47, 0);
      h_47 = ATgetArgument(f_47, 1);
      i_47 = ATgetArgument(f_47, 2);
      e_47 = ATgetArgument(f_47, 3);
      {
        ATerm n_47 = NULL,p_47 = NULL;
        ATerm k_23;
        k_23 = t;
        {
          ATerm o_47 = NULL;
          t = not_null(i_47);
          {
            t = declared_vars_0(t);
            {
              o_47 = t;
              if(((n_47 != NULL) && (n_47 != o_47)))
                _fail(o_47);
              else
                n_47 = o_47;
            }
          }
        }
        t = k_23;
        {
          ATerm q_47 = NULL,s_47 = NULL;
          ATerm r_47 = NULL;
          t = not_null(e_47);
          {
            t = tvars_0(t);
            {
              r_47 = t;
              if(((q_47 != NULL) && (q_47 != r_47)))
                _fail(r_47);
              else
                q_47 = r_47;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_47), not_null(n_47));
            {
              t = diff_0(t);
              {
                s_47 = t;
                if(((p_47 != NULL) && (p_47 != s_47)))
                  _fail(s_47);
                else
                  p_47 = s_47;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(g_47), not_null(h_47), not_null(i_47), (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_47), (ATerm) ATmakeAppl(sym_SRule_1, not_null(e_47))));
        }
      }
    }
  else
    {
      if(match_cons(f_47, sym_RDef_3))
        {
          g_47 = ATgetArgument(f_47, 0);
          h_47 = ATgetArgument(f_47, 1);
          i_47 = ATgetArgument(f_47, 2);
          {
            ATerm w_47 = NULL;
            ATerm x_47 = NULL;
            t = not_null(i_47);
            {
              t = tvars_0(t);
              {
                x_47 = t;
                if(((w_47 != NULL) && (w_47 != x_47)))
                  _fail(x_47);
                else
                  w_47 = x_47;
              }
            }
            t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(g_47), not_null(h_47), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_47), (ATerm) ATmakeAppl(sym_SRule_1, not_null(i_47))));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm CongDefined_0 (ATerm t)
{
  ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL;
  ATerm y_48 (ATerm t)
  {
    ATerm s_48 = NULL,t_48 = NULL;
    t = not_null(m_48);
    {
      ATerm e_3 (ATerm t)
      {
        t = term_n_23;
        return(t);
      }
      t = rewrite_1(t, e_3);
      {
        s_48 = t;
        g_48 :
        if(match_cons(s_48, sym_Defined_1))
          {
            t_48 = ATgetArgument(s_48, 0);
            h_48 :
            if(!(match_string(t_48, "r_0")))
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
    t = term_o_23;
    return(t);
  }
  ATerm z_48 (ATerm t)
  {
    ATerm w_48 = NULL,x_48 = NULL;
    t = not_null(m_48);
    {
      ATerm f_3 (ATerm t)
      {
        t = term_n_23;
        return(t);
      }
      t = rewrite_1(t, f_3);
      {
        w_48 = t;
        i_48 :
        if(match_cons(w_48, sym_Defined_1))
          {
            x_48 = ATgetArgument(w_48, 0);
            j_48 :
            if(!(match_string(x_48, "o_0")))
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
    t = term_o_23;
    return(t);
  }
  m_48 = t;
  k_48 :
  if(match_cons(m_48, sym__2))
    {
      n_48 = ATgetArgument(m_48, 0);
      o_48 = ATgetArgument(m_48, 1);
      l_48 :
      if(match_int(o_48, 0))
        {
          ATerm r_23 = t;
          int v_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_48(t);
              ;
              LocalPopChoice(v_23);
            }
          else
            {
              t = r_23;
              t = z_48(t);
            }
        }
      else
        {
          t = y_48(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkCall_0 (ATerm t)
{
  ATerm b_49 = NULL;
  b_49 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_49)), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL;
  p_49 = t;
  m_49 :
  if(match_cons(p_49, sym_OpDecl_2))
    {
      q_49 = ATgetArgument(p_49, 0);
      r_49 = ATgetArgument(p_49, 1);
      n_49 :
      if(match_cons(r_49, sym_FunType_2))
        {
          s_49 = ATgetArgument(r_49, 0);
          o_49 = ATgetArgument(r_49, 1);
          {
            ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL,h_50 = NULL;
            ATerm c_24;
            c_24 = t;
            {
              ATerm z_49 = NULL;
              t = not_null(s_49);
              {
                ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL;
                t = length_0(t);
                {
                  z_49 = t;
                  {
                    if(((w_49 != NULL) && (w_49 != z_49)))
                      _fail(z_49);
                    else
                      w_49 = z_49;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_49), not_null(w_49));
                      {
                        ATerm l_24 = t;
                        if((PushChoice() == 0))
                          {
                            t = CongDefined_0(t);
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = l_24;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(q_49), not_null(w_49)), term_n_24);
                          {
                            ATerm g_3 (ATerm t)
                            {
                              t = term_n_23;
                              return(t);
                            }
                            t = assert_1(t, g_3);
                          }
                          {
                            t = not_null(s_49);
                            {
                              ATerm h_3 (ATerm t)
                              {
                                ATerm a_50 = NULL,c_50 = NULL;
                                t = new_0(t);
                                {
                                  ATerm o_24;
                                  o_24 = t;
                                  {
                                    ATerm b_50 = NULL;
                                    b_50 = t;
                                    if(((a_50 != NULL) && (a_50 != b_50)))
                                      _fail(b_50);
                                    else
                                      a_50 = b_50;
                                  }
                                  t = o_24;
                                  {
                                    ATerm d_50 = NULL;
                                    d_50 = t;
                                    if(((c_50 != NULL) && (c_50 != d_50)))
                                      _fail(d_50);
                                    else
                                      c_50 = d_50;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(a_50), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_24), term_r_24)), not_null(c_50));
                                  }
                                }
                                return(t);
                              }
                              t = unzip_1(t, h_3);
                              {
                                e_50 = t;
                                k_49 :
                                if(match_cons(e_50, sym__2))
                                  {
                                    f_50 = ATgetArgument(e_50, 0);
                                    g_50 = ATgetArgument(e_50, 1);
                                    {
                                      if(((x_49 != NULL) && (x_49 != f_50)))
                                        _fail(f_50);
                                      else
                                        x_49 = f_50;
                                      if(((y_49 != NULL) && (y_49 != g_50)))
                                        _fail(g_50);
                                      else
                                        y_49 = g_50;
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
              }
            }
            t = c_24;
            {
              ATerm i_50 = NULL;
              t = not_null(y_49);
              {
                t = map_1(t, MkCall_0);
                {
                  i_50 = t;
                  if(((h_50 != NULL) && (h_50 != i_50)))
                    _fail(i_50);
                  else
                    h_50 = i_50;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(q_49), not_null(x_49), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(q_49), not_null(h_50)));
            }
          }
        }
      else
        {
          if(match_cons(r_49, sym_ConstType_1))
            {
              s_49 = ATgetArgument(r_49, 0);
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_49), term_s_24);
                {
                  ATerm t_24 = t;
                  if((PushChoice() == 0))
                    {
                      t = CongDefined_0(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = t_24;
                    }
                  {
                    ATerm x_24;
                    x_24 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(q_49), term_s_24), term_d_25);
                      {
                        ATerm i_3 (ATerm t)
                        {
                          t = term_n_23;
                          return(t);
                        }
                        t = assert_1(t, i_3);
                      }
                    }
                    t = x_24;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(q_49), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(q_49), (ATerm) ATempty));
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
ATerm MkCongDefs_0 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL;
  u_50 = t;
  t_50 :
  if(match_cons(u_50, sym_Constructors_1))
    {
      v_50 = ATgetArgument(u_50, 0);
      {
        t = not_null(v_50);
        t = filter_1(t, MkCongDef_0);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm congdefs_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    t = term_n_23;
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = filter_1(t, MkCongDefs_0);
    t = concat_0(t);
    return(t);
  }
  t = scope_2(t, j_3, k_3);
  return(t);
}
ATerm RulesToSdefs_0 (ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL,r_51 = NULL,u_51 = NULL;
  i_51 = t;
  c_51 :
  if(match_cons(i_51, sym_Specification_1))
    {
      j_51 = ATgetArgument(i_51, 0);
      d_51 :
      if(((ATgetType(j_51) == AT_LIST) && !(ATisEmpty(j_51))))
        {
          k_51 = ATgetFirst((ATermList) j_51);
          m_51 = (ATerm) ATgetNext((ATermList) j_51);
          e_51 :
          if(match_cons(k_51, sym_Signature_1))
            {
              l_51 = ATgetArgument(k_51, 0);
              f_51 :
              if(((ATgetType(m_51) == AT_LIST) && !(ATisEmpty(m_51))))
                {
                  n_51 = ATgetFirst((ATermList) m_51);
                  u_51 = (ATerm) ATgetNext((ATermList) m_51);
                  g_51 :
                  if(match_cons(n_51, sym_Strategies_1))
                    {
                      r_51 = ATgetArgument(n_51, 0);
                      h_51 :
                      if(((ATgetType(u_51) == AT_LIST) && ATisEmpty(u_51)))
                        {
                          {
                            ATerm x_51 = NULL;
                            ATerm y_51 = NULL,a_52 = NULL,c_52 = NULL;
                            ATerm e_25;
                            e_25 = t;
                            {
                              ATerm z_51 = NULL;
                              t = not_null(l_51);
                              {
                                t = congdefs_0(t);
                                {
                                  z_51 = t;
                                  if(((y_51 != NULL) && (y_51 != z_51)))
                                    _fail(z_51);
                                  else
                                    y_51 = z_51;
                                }
                              }
                            }
                            t = e_25;
                            {
                              ATerm b_52 = NULL;
                              t = (ATerm) ATinsert(CheckATermList(not_null(r_51)), (ATerm) ATmakeAppl(sym_RDefT_4, term_f_25, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_j_25, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_24), term_r_24))), (ATerm) ATmakeAppl(sym_VarDec_2, term_g_25, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_24), term_r_24))), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, term_d_26, term_q_26, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_c_27), term_t_26)))));
                              {
                                ATerm l_3 (ATerm t)
                                {
                                  ATerm f_27 = t;
                                  int g_27 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = RDtoSD_0(t);
                                      ;
                                      LocalPopChoice(g_27);
                                    }
                                  else
                                    {
                                      t = f_27;
                                      t = DeclareVariables_0(t);
                                    }
                                  t = expand_calls_0(t);
                                  return(t);
                                }
                                t = map_1(t, l_3);
                                {
                                  b_52 = t;
                                  if(((a_52 != NULL) && (a_52 != b_52)))
                                    _fail(b_52);
                                  else
                                    a_52 = b_52;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_51), not_null(a_52));
                                {
                                  t = conc_0(t);
                                  {
                                    c_52 = t;
                                    if(((x_51 != NULL) && (x_51 != c_52)))
                                      _fail(c_52);
                                    else
                                      x_51 = c_52;
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(x_51))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(l_51))));
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
  ATerm l_52 = NULL;
  ATerm n_52 = NULL;
  l_52 = t;
  {
    ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL;
    t = (ATerm) ATempty;
    {
      ATerm m_3 (ATerm t)
      {
        t = term_h_27;
        return(t);
      }
      t = rewrite_1(t, m_3);
      {
        o_52 = t;
        j_52 :
        if(match_cons(o_52, sym_Defined_2))
          {
            p_52 = ATgetArgument(o_52, 0);
            q_52 = ATgetArgument(o_52, 1);
            k_52 :
            if(match_string(p_52, "x_1"))
              {
                if(((n_52 != NULL) && (n_52 != q_52)))
                  _fail(q_52);
                else
                  n_52 = q_52;
              }
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
    t = not_null(n_52);
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm u_52 = NULL;
  u_52 = t;
  t = SSL_int_to_string(not_null(u_52));
  return(t);
}
ATerm CheckConsError_0 (ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL;
  d_53 = t;
  c_53 :
  if(match_cons(d_53, sym_Op_2))
    {
      e_53 = ATgetArgument(d_53, 0);
      f_53 = ATgetArgument(d_53, 1);
      {
        ATerm l_53 = NULL,m_53 = NULL;
        ATerm n_53 = NULL,o_53 = NULL,r_53 = NULL,s_53 = NULL;
        t = term_i_27;
        {
          ATerm n_3 (ATerm t)
          {
            t = term_j_27;
            return(t);
          }
          t = rewrite_1(t, n_3);
          {
            n_53 = t;
            a_53 :
            if(match_cons(n_53, sym_Defined_3))
              {
                o_53 = ATgetArgument(n_53, 0);
                r_53 = ATgetArgument(n_53, 1);
                s_53 = ATgetArgument(n_53, 2);
                b_53 :
                if(match_string(o_53, "z_1"))
                  {
                    ATerm t_53 = NULL;
                    if(((l_53 != NULL) && (l_53 != r_53)))
                      _fail(r_53);
                    else
                      l_53 = r_53;
                    {
                      if(((m_53 != NULL) && (m_53 != s_53)))
                        _fail(s_53);
                      else
                        m_53 = s_53;
                      {
                        ATerm u_53 = NULL;
                        t = not_null(f_53);
                        {
                          t = length_0(t);
                          {
                            t = int_to_string_0(t);
                            {
                              u_53 = t;
                              if(((t_53 != NULL) && (t_53 != u_53)))
                                _fail(u_53);
                              else
                                t_53 = u_53;
                            }
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_k_27, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_27), not_null(t_53)), term_v_27), not_null(e_53)), term_r_27), term_q_27), not_null(m_53)), term_m_27), not_null(l_53)), term_l_27));
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
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(e_53), not_null(f_53));
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
  ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
  c_54 = t;
  b_54 :
  if(match_cons(c_54, sym__2))
    {
      d_54 = ATgetArgument(c_54, 0);
      e_54 = ATgetArgument(c_54, 1);
      {
        ATerm z_27 = t;
        int a_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(d_54), not_null(e_54));
            ;
            LocalPopChoice(a_28);
          }
        else
          {
            t = z_27;
            t = SSL_subtr(not_null(d_54), not_null(e_54));
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
  ATerm o_3 (ATerm t)
  {
    ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL;
    s_54 = t;
    j_54 :
    if(match_cons(s_54, sym__2))
      {
        t_54 = ATgetArgument(s_54, 0);
        u_54 = ATgetArgument(s_54, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(t_54), not_null(u_54), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL;
    m_55 = t;
    l_54 :
    if(match_cons(m_55, sym__3))
      {
        n_55 = ATgetArgument(m_55, 0);
        o_55 = ATgetArgument(m_55, 1);
        p_55 = ATgetArgument(m_55, 2);
        m_54 :
        if(match_int(n_55, 0))
          {
            t = not_null(p_55);
          }
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
  ATerm q_3 (ATerm t)
  {
    ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL;
    t_55 = t;
    r_54 :
    if(match_cons(t_55, sym__3))
      {
        u_55 = ATgetArgument(t_55, 0);
        v_55 = ATgetArgument(t_55, 1);
        w_55 = ATgetArgument(t_55, 2);
        {
          ATerm a_56 = NULL;
          ATerm b_28;
          b_28 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_55), term_c_28);
            t = geq_0(t);
          }
          t = b_28;
          {
            ATerm b_56 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_55), term_c_28);
            {
              t = subt_0(t);
              {
                b_56 = t;
                if(((a_56 != NULL) && (a_56 != b_56)))
                  _fail(b_56);
                else
                  a_56 = b_56;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_56), not_null(v_55), (ATerm) ATinsert(CheckATermList(not_null(w_55)), not_null(v_55)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, o_3, p_3, q_3);
  return(t);
}
ATerm CheckTuple_0 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL;
  p_56 = t;
  n_56 :
  if(match_cons(p_56, sym_Op_2))
    {
      q_56 = ATgetArgument(p_56, 0);
      r_56 = ATgetArgument(p_56, 1);
      o_56 :
      if(match_string(q_56, ""))
        {
          ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL;
          ATerm f_28;
          f_28 = t;
          {
            ATerm d_57 = NULL;
            t = not_null(r_56);
            {
              ATerm e_57 = NULL;
              t = length_0(t);
              {
                d_57 = t;
                {
                  if(((a_57 != NULL) && (a_57 != d_57)))
                    _fail(d_57);
                  else
                    a_57 = d_57;
                  {
                    ATerm f_57 = NULL,h_57 = NULL;
                    t = term_c_16;
                    {
                      e_57 = t;
                      {
                        if(((z_56 != NULL) && (z_56 != e_57)))
                          _fail(e_57);
                        else
                          z_56 = e_57;
                        {
                          ATerm g_28;
                          g_28 = t;
                          {
                            ATerm g_57 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_57), term_r_28);
                            {
                              t = copy_0(t);
                              {
                                g_57 = t;
                                if(((f_57 != NULL) && (f_57 != g_57)))
                                  _fail(g_57);
                                else
                                  f_57 = g_57;
                              }
                            }
                          }
                          t = g_28;
                          {
                            ATerm i_57 = NULL,k_57 = NULL;
                            t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_16, (ATerm) ATmakeAppl(sym_FunType_2, not_null(f_57), term_r_28));
                            {
                              h_57 = t;
                              {
                                if(((b_57 != NULL) && (b_57 != h_57)))
                                  _fail(h_57);
                                else
                                  b_57 = h_57;
                                {
                                  t = GenerateCheckRule_0(t);
                                  {
                                    ATerm j_57 = NULL;
                                    ATerm s_28 = t;
                                    int t_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = TupleDeclarations_0(t);
                                        ;
                                        LocalPopChoice(t_28);
                                      }
                                    else
                                      {
                                        t = s_28;
                                        t = (ATerm) ATempty;
                                      }
                                    {
                                      j_57 = t;
                                      if(((i_57 != NULL) && (i_57 != j_57)))
                                        _fail(j_57);
                                      else
                                        i_57 = j_57;
                                    }
                                    {
                                      t = (ATerm) ATinsert(CheckATermList(not_null(i_57)), not_null(b_57));
                                      {
                                        k_57 = t;
                                        {
                                          if(((c_57 != NULL) && (c_57 != k_57)))
                                            _fail(k_57);
                                          else
                                            c_57 = k_57;
                                          {
                                            ATerm u_28;
                                            u_28 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_v_28, not_null(c_57)));
                                              {
                                                ATerm r_3 (ATerm t)
                                                {
                                                  t = term_h_27;
                                                  return(t);
                                                }
                                                t = assert_1(t, r_3);
                                              }
                                            }
                                            t = u_28;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = f_28;
        }
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
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL;
  b_58 = t;
  a_58 :
  if(match_cons(b_58, sym_Op_2))
    {
      c_58 = ATgetArgument(b_58, 0);
      d_58 = ATgetArgument(b_58, 1);
      {
        ATerm w_28 = t;
        int x_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_58 = NULL;
            t = not_null(d_58);
            {
              t = length_0(t);
              {
                h_58 = t;
                {
                  ATerm j_58 = NULL,k_58 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(c_58), (ATerm) ATmakeAppl(sym_Keys_1, not_null(h_58)));
                  {
                    ATerm s_3 (ATerm t)
                    {
                      t = term_y_28;
                      return(t);
                    }
                    t = rewrite_1(t, s_3);
                    {
                      j_58 = t;
                      v_57 :
                      if(match_cons(j_58, sym_Defined_1))
                        {
                          k_58 = ATgetArgument(j_58, 0);
                          w_57 :
                          if(!(match_string(k_58, "v_1")))
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
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(c_58), (ATerm) ATempty);
                }
              }
            }
            ;
            LocalPopChoice(x_28);
          }
        else
          {
            t = w_28;
            {
              ATerm o_58 = NULL;
              t = not_null(d_58);
              {
                t = length_0(t);
                {
                  o_58 = t;
                  {
                    ATerm q_58 = NULL,r_58 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(c_58), (ATerm) ATmakeAppl(sym_Keys_1, not_null(o_58)));
                    {
                      ATerm t_3 (ATerm t)
                      {
                        t = term_y_28;
                        return(t);
                      }
                      t = rewrite_1(t, t_3);
                      {
                        q_58 = t;
                        y_57 :
                        if(match_cons(q_58, sym_Defined_1))
                          {
                            r_58 = ATgetArgument(q_58, 0);
                            z_57 :
                            if(!(match_string(r_58, "t_1")))
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
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(c_58), (ATerm) ATempty);
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
ATerm manytd_1 (ATerm t, ATerm q_109 (ATerm))
{
  ATerm w_58 (ATerm t)
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_109(t);
        {
          ATerm u_3 (ATerm t)
          {
            t = try_1(t, w_58);
            return(t);
          }
          t = _all(t, u_3);
        }
        ;
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        t = _some(t, w_58);
      }
    return(t);
  }
  t = w_58(t);
  return(t);
}
ATerm check_constructors_p__2 (ATerm t, ATerm u_135 (ATerm), ATerm v_135 (ATerm))
{
  ATerm z_58 = NULL,a_59 = NULL;
  ATerm v_3 (ATerm t)
  {
    t = term_j_27;
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    ATerm b_29;
    b_29 = t;
    {
      ATerm b_59 = NULL;
      ATerm c_59 = NULL;
      t = u_135(t);
      {
        b_59 = t;
        {
          if(((a_59 != NULL) && (a_59 != b_59)))
            _fail(b_59);
          else
            a_59 = b_59;
          {
            t = v_135(t);
            {
              c_59 = t;
              if(((z_58 != NULL) && (z_58 != c_59)))
                _fail(c_59);
              else
                z_58 = c_59;
            }
          }
        }
      }
    }
    t = b_29;
    {
      ATerm c_29;
      c_29 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_27, (ATerm) ATmakeAppl(sym_Defined_3, term_d_29, not_null(z_58), not_null(a_59)));
        {
          ATerm x_3 (ATerm t)
          {
            t = term_j_27;
            return(t);
          }
          t = assert_1(t, x_3);
        }
      }
      t = c_29;
      {
        ATerm y_3 (ATerm t)
        {
          ATerm e_29 = t;
          if((PushChoice() == 0))
            {
              ATerm j_29 = t;
              int k_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CheckCons_0(t);
                  ;
                  LocalPopChoice(k_29);
                }
              else
                {
                  t = j_29;
                  t = CheckTuple_0(t);
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = e_29;
            }
          t = CheckConsError_0(t);
          return(t);
        }
        t = manytd_1(t, y_3);
      }
    }
    return(t);
  }
  t = scope_2(t, v_3, w_3);
  return(t);
}
ATerm check_constructors_0 (ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL;
  i_59 = t;
  h_59 :
  if(match_cons(i_59, sym_SDef_3))
    {
      j_59 = ATgetArgument(i_59, 0);
      k_59 = ATgetArgument(i_59, 1);
      l_59 = ATgetArgument(i_59, 2);
      {
        t = not_null(l_59);
        {
          ATerm z_3 (ATerm t)
          {
            t = not_null(j_59);
            return(t);
          }
          ATerm a_4 (ATerm t)
          {
            t = term_l_29;
            return(t);
          }
          t = check_constructors_p__2(t, z_3, a_4);
        }
      }
    }
  else
    {
      if(match_cons(i_59, sym_RDef_3))
        {
          j_59 = ATgetArgument(i_59, 0);
          k_59 = ATgetArgument(i_59, 1);
          l_59 = ATgetArgument(i_59, 2);
          {
            t = not_null(l_59);
            {
              ATerm b_4 (ATerm t)
              {
                t = not_null(j_59);
                return(t);
              }
              ATerm c_4 (ATerm t)
              {
                t = term_p_29;
                return(t);
              }
              t = check_constructors_p__2(t, b_4, c_4);
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
  ATerm d_4 (ATerm t)
  {
    t = term_s_24;
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    t = term_c_28;
    return(t);
  }
  t = foldr_3(t, d_4, add_0, e_4);
  return(t);
}
ATerm GenerateCheckRule_0 (ATerm t)
{
  ATerm a_60 = NULL,f_60 = NULL,g_60 = NULL,m_60 = NULL,n_60 = NULL;
  f_60 = t;
  y_59 :
  if(match_cons(f_60, sym_OpDecl_2))
    {
      g_60 = ATgetArgument(f_60, 0);
      m_60 = ATgetArgument(f_60, 1);
      z_59 :
      if(match_cons(m_60, sym_FunType_2))
        {
          n_60 = ATgetArgument(m_60, 0);
          a_60 = ATgetArgument(m_60, 1);
          {
            ATerm r_60 = NULL;
            ATerm r_29;
            r_29 = t;
            {
              ATerm s_60 = NULL;
              t = not_null(n_60);
              {
                t = length_0(t);
                {
                  s_60 = t;
                  if(((r_60 != NULL) && (r_60 != s_60)))
                    _fail(s_60);
                  else
                    r_60 = s_60;
                }
              }
            }
            t = r_29;
            {
              ATerm u_29;
              u_29 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, not_null(g_60), (ATerm) ATmakeAppl(sym_Keys_1, not_null(r_60))), term_w_29);
                {
                  ATerm f_4 (ATerm t)
                  {
                    t = term_y_28;
                    return(t);
                  }
                  t = assert_1(t, f_4);
                }
              }
              t = u_29;
            }
          }
        }
      else
        {
          if(match_cons(m_60, sym_ConstType_1))
            {
              n_60 = ATgetArgument(m_60, 0);
              {
                ATerm v_60 = NULL;
                ATerm x_29;
                x_29 = t;
                {
                  ATerm w_60 = NULL;
                  t = term_s_24;
                  {
                    w_60 = t;
                    if(((v_60 != NULL) && (v_60 != w_60)))
                      _fail(w_60);
                    else
                      v_60 = w_60;
                  }
                }
                t = x_29;
                {
                  ATerm y_29;
                  y_29 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, not_null(g_60), (ATerm) ATmakeAppl(sym_Keys_1, not_null(v_60))), term_a_30);
                    {
                      ATerm g_4 (ATerm t)
                      {
                        t = term_y_28;
                        return(t);
                      }
                      t = assert_1(t, g_4);
                    }
                  }
                  t = y_29;
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
  ATerm s_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL;
  s_61 = t;
  h_61 :
  if(match_cons(s_61, sym_Specification_1))
    {
      y_61 = ATgetArgument(s_61, 0);
      i_61 :
      if(((ATgetType(y_61) == AT_LIST) && !(ATisEmpty(y_61))))
        {
          z_61 = ATgetFirst((ATermList) y_61);
          e_62 = (ATerm) ATgetNext((ATermList) y_61);
          j_61 :
          if(match_cons(z_61, sym_Signature_1))
            {
              a_62 = ATgetArgument(z_61, 0);
              m_61 :
              if(((ATgetType(a_62) == AT_LIST) && !(ATisEmpty(a_62))))
                {
                  b_62 = ATgetFirst((ATermList) a_62);
                  d_62 = (ATerm) ATgetNext((ATermList) a_62);
                  n_61 :
                  if(match_cons(b_62, sym_Constructors_1))
                    {
                      c_62 = ATgetArgument(b_62, 0);
                      o_61 :
                      if(((ATgetType(d_62) == AT_LIST) && ATisEmpty(d_62)))
                        {
                          p_61 :
                          if(((ATgetType(e_62) == AT_LIST) && !(ATisEmpty(e_62))))
                            {
                              f_62 = ATgetFirst((ATermList) e_62);
                              h_62 = (ATerm) ATgetNext((ATermList) e_62);
                              q_61 :
                              if(match_cons(f_62, sym_Strategies_1))
                                {
                                  g_62 = ATgetArgument(f_62, 0);
                                  r_61 :
                                  if(((ATgetType(h_62) == AT_LIST) && ATisEmpty(h_62)))
                                    {
                                      {
                                        ATerm k_62 = NULL,l_62 = NULL,q_62 = NULL;
                                        ATerm b_30;
                                        b_30 = t;
                                        {
                                          ATerm n_62 = NULL;
                                          ATerm o_62 = NULL;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(c_62)), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_16, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_28), term_r_28), term_r_28), term_r_28), term_r_28), term_r_28), term_r_28), term_r_28), term_r_28))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_16, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_28), term_r_28), term_r_28), term_r_28), term_r_28), term_r_28), term_r_28), term_r_28))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_16, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_28), term_r_28), term_r_28), term_r_28), term_r_28), term_r_28), term_r_28))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_16, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_28), term_r_28), term_r_28), term_r_28), term_r_28), term_r_28))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_16, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_28), term_r_28), term_r_28), term_r_28), term_r_28))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_16, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_r_28), term_r_28), term_r_28), term_r_28))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_16, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_r_28), term_r_28), term_r_28))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_16, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_28), term_r_28))), term_d_30);
                                          {
                                            n_62 = t;
                                            {
                                              if(((k_62 != NULL) && (k_62 != n_62)))
                                                _fail(n_62);
                                              else
                                                k_62 = n_62;
                                              {
                                                t = not_null(k_62);
                                                {
                                                  t = map_1(t, GenerateCheckRule_0);
                                                  {
                                                    t = not_null(g_62);
                                                    {
                                                      t = filter_1(t, check_constructors_0);
                                                      {
                                                        o_62 = t;
                                                        f_61 :
                                                        if(((ATgetType(o_62) == AT_LIST) && ATisEmpty(o_62)))
                                                          {
                                                            {
                                                              ATerm p_62 = NULL;
                                                              ATerm i_30 = t;
                                                              int j_30 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = TupleDeclarations_0(t);
                                                                  ;
                                                                  LocalPopChoice(j_30);
                                                                }
                                                              else
                                                                {
                                                                  t = i_30;
                                                                  t = (ATerm) ATempty;
                                                                }
                                                              {
                                                                p_62 = t;
                                                                if(((l_62 != NULL) && (l_62 != p_62)))
                                                                  _fail(p_62);
                                                                else
                                                                  l_62 = p_62;
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
                                        t = b_30;
                                        {
                                          ATerm r_62 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_62), not_null(k_62));
                                          {
                                            t = conc_0(t);
                                            {
                                              r_62 = t;
                                              if(((q_62 != NULL) && (q_62 != r_62)))
                                                _fail(r_62);
                                              else
                                                q_62 = r_62;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(g_62))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(q_62))))));
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
ATerm exp_overlays2_1 (ATerm t, ATerm k_134 (ATerm))
{
  ATerm h_4 (ATerm t)
  {
    ATerm k_30;
    k_30 = t;
    {
      ATerm o_30 = t;
      if((PushChoice() == 0))
        {
          ATerm y_62 = NULL;
          t = k_134(t);
          {
            y_62 = t;
            x_62 :
            if(((ATgetType(y_62) == AT_LIST) && ATisEmpty(y_62)))
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
          t = o_30;
        }
    }
    t = k_30;
    {
      ATerm i_4 (ATerm t)
      {
        ATerm j_4 (ATerm t)
        {
          t = ExpOverlay_1(t, k_134);
          return(t);
        }
        t = try_1(t, j_4);
        return(t);
      }
      t = topdown_1(t, i_4);
    }
    return(t);
  }
  t = try_1(t, h_4);
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm o_63 = NULL,p_63 = NULL,q_63 = NULL;
  p_63 = t;
  n_63 :
  if(match_cons(p_63, sym_BuildDefault_1))
    {
      q_63 = ATgetArgument(p_63, 0);
      t = term_o_18;
    }
  else
    {
      if(match_cons(p_63, sym_Real_1))
        {
          q_63 = ATgetArgument(p_63, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(q_63)));
        }
      else
        {
          if(match_cons(p_63, sym_Int_1))
            {
              q_63 = ATgetArgument(p_63, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(q_63)));
            }
          else
            {
              if(match_cons(p_63, sym_Str_1))
                {
                  q_63 = ATgetArgument(p_63, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(q_63)));
                }
              else
                {
                  if(match_cons(p_63, sym_Anno_2))
                    {
                      q_63 = ATgetArgument(p_63, 0);
                      o_63 = ATgetArgument(p_63, 1);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_q_30, (ATerm)ATinsert(ATinsert(ATempty, not_null(o_63)), not_null(q_63)), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(p_63, sym_Op_2))
                        {
                          q_63 = ATgetArgument(p_63, 0);
                          o_63 = ATgetArgument(p_63, 1);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_63)), not_null(o_63), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(p_63, sym_Var_1))
                            {
                              q_63 = ATgetArgument(p_63, 0);
                              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_63)), (ATerm)ATempty, (ATerm) ATempty);
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
  ATerm k_4 (ATerm t)
  {
    ATerm l_4 (ATerm t)
    {
      t = map_1(t, trm_to_cong_0);
      return(t);
    }
    t = Op_2(t, _id, l_4);
    return(t);
  }
  t = try_1(t, k_4);
  t = Trm_to_Cong_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0 (ATerm t)
{
  ATerm n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL;
  n_64 = t;
  m_64 :
  if(match_cons(n_64, sym_Overlay_3))
    {
      o_64 = ATgetArgument(n_64, 0);
      p_64 = ATgetArgument(n_64, 1);
      q_64 = ATgetArgument(n_64, 2);
      {
        ATerm u_64 = NULL,y_64 = NULL;
        ATerm t_30;
        t_30 = t;
        {
          ATerm x_64 = NULL;
          t = not_null(p_64);
          {
            ATerm m_4 (ATerm t)
            {
              ATerm v_64 = NULL;
              ATerm w_64 = NULL;
              w_64 = t;
              if(((v_64 != NULL) && (v_64 != w_64)))
                _fail(w_64);
              else
                v_64 = w_64;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(v_64), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_24), term_r_24));
              return(t);
            }
            t = map_1(t, m_4);
            {
              x_64 = t;
              if(((u_64 != NULL) && (u_64 != x_64)))
                _fail(x_64);
              else
                u_64 = x_64;
            }
          }
        }
        t = t_30;
        {
          ATerm z_64 = NULL;
          t = not_null(q_64);
          {
            t = trm_to_cong_0(t);
            {
              z_64 = t;
              if(((y_64 != NULL) && (y_64 != z_64)))
                _fail(z_64);
              else
                y_64 = z_64;
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_64), not_null(u_64), not_null(y_64));
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
  ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL;
  i_65 = t;
  g_65 :
  if(match_cons(i_65, sym__2))
    {
      j_65 = ATgetArgument(i_65, 0);
      m_65 = ATgetArgument(i_65, 1);
      h_65 :
      if(match_cons(j_65, sym_DefaultVarDec_1))
        {
          k_65 = ATgetArgument(j_65, 0);
          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, not_null(m_65));
        }
      else
        {
          if(match_cons(j_65, sym_VarDec_2))
            {
              k_65 = ATgetArgument(j_65, 0);
              l_65 = ATgetArgument(j_65, 1);
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(m_65), not_null(l_65));
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
ATerm tpaste_1 (ATerm t, ATerm f_135 (ATerm))
{
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, f_135, _id);
      ;
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      {
        ATerm w_30 = t;
        int x_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_4 (ATerm t)
            {
              t = split_2(t, _id, f_135);
              t = zip_1(t, ReplaceVar_0);
              return(t);
            }
            t = SDefT_4(t, _id, _id, n_4, _id);
            ;
            LocalPopChoice(x_30);
          }
        else
          {
            t = w_30;
            {
              ATerm o_4 (ATerm t)
              {
                t = split_2(t, _id, f_135);
                t = zip_1(t, ReplaceVar_0);
                return(t);
              }
              t = RDefT_4(t, _id, _id, o_4, _id);
            }
          }
      }
    }
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL;
  b_66 = t;
  a_66 :
  if(match_cons(b_66, sym_Var_1))
    {
      c_66 = ATgetArgument(b_66, 0);
      t = not_null(c_66);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm q_132 (ATerm), ATerm r_132 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL;
  y_66 = t;
  r_66 :
  if(match_cons(y_66, sym__3))
    {
      z_66 = ATgetArgument(y_66, 0);
      a_67 = ATgetArgument(y_66, 1);
      b_67 = ATgetArgument(y_66, 2);
      {
        t = not_null(z_66);
        {
          ATerm p_4 (ATerm t)
          {
            ATerm f_67 = NULL;
            f_67 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_67), not_null(b_67));
              t = q_132(t);
            }
            return(t);
          }
          ATerm q_4 (ATerm t)
          {
            ATerm n_67 = NULL;
            n_67 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_67), not_null(a_67));
              t = q_132(t);
            }
            return(t);
          }
          t = r_132(t, p_4, q_4, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm k_132 (ATerm), ATerm l_132 (ATerm, ATerm (ATerm)))
{
  ATerm x_68 = NULL,d_69 = NULL,g_69 = NULL;
  x_68 = t;
  g_68 :
  if(match_cons(x_68, sym__2))
    {
      d_69 = ATgetArgument(x_68, 0);
      g_69 = ATgetArgument(x_68, 1);
      {
        ATerm j_69 = NULL,k_69 = NULL,l_69 = NULL,r_69 = NULL;
        ATerm y_30;
        y_30 = t;
        {
          ATerm m_69 = NULL;
          t = not_null(d_69);
          {
            ATerm n_69 = NULL;
            t = k_132(t);
            {
              m_69 = t;
              {
                if(((j_69 != NULL) && (j_69 != m_69)))
                  _fail(m_69);
                else
                  j_69 = m_69;
                {
                  ATerm o_69 = NULL,q_69 = NULL;
                  t = map_1(t, new_0);
                  {
                    n_69 = t;
                    {
                      if(((k_69 != NULL) && (k_69 != n_69)))
                        _fail(n_69);
                      else
                        k_69 = n_69;
                      {
                        ATerm p_69 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_69), not_null(k_69));
                        {
                          t = zip_1(t, _id);
                          {
                            p_69 = t;
                            if(((o_69 != NULL) && (o_69 != p_69)))
                              _fail(p_69);
                            else
                              o_69 = p_69;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_69), not_null(g_69));
                          {
                            t = conc_0(t);
                            {
                              q_69 = t;
                              if(((l_69 != NULL) && (l_69 != q_69)))
                                _fail(q_69);
                              else
                                l_69 = q_69;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = y_30;
        {
          ATerm s_69 = NULL;
          t = not_null(d_69);
          {
            ATerm r_4 (ATerm t)
            {
              t = not_null(k_69);
              return(t);
            }
            t = l_132(t, r_4);
            {
              s_69 = t;
              if(((r_69 != NULL) && (r_69 != s_69)))
                _fail(s_69);
              else
                r_69 = s_69;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(r_69), not_null(g_69), not_null(l_69));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm d_132 (ATerm), ATerm e_132 (ATerm))
{
  ATerm c_70 = NULL;
  ATerm e_70 = NULL,f_70 = NULL;
  c_70 = t;
  {
    ATerm g_70 = NULL;
    t = not_null(c_70);
    {
      ATerm h_70 = NULL;
      t = d_132(t);
      {
        g_70 = t;
        {
          if(((e_70 != NULL) && (e_70 != g_70)))
            _fail(g_70);
          else
            e_70 = g_70;
          {
            t = e_132(t);
            {
              h_70 = t;
              if(((f_70 != NULL) && (f_70 != h_70)))
                _fail(h_70);
              else
                f_70 = h_70;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_70), not_null(f_70));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL,x_74 = NULL,y_74 = NULL;
  p_72 = t;
  x_70 :
  if(match_cons(p_72, sym__2))
    {
      q_72 = ATgetArgument(p_72, 0);
      r_72 = ATgetArgument(p_72, 1);
      o_72 :
      if(((ATgetType(r_72) == AT_LIST) && !(ATisEmpty(r_72))))
        {
          x_74 = ATgetFirst((ATermList) r_72);
          y_74 = (ATerm) ATgetNext((ATermList) r_72);
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_72), not_null(y_74));
        }
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
  ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL,f_81 = NULL;
  z_80 = t;
  u_76 :
  if(match_cons(z_80, sym__2))
    {
      a_81 = ATgetArgument(z_80, 0);
      b_81 = ATgetArgument(z_80, 1);
      v_76 :
      if(((ATgetType(b_81) == AT_LIST) && !(ATisEmpty(b_81))))
        {
          c_81 = ATgetFirst((ATermList) b_81);
          f_81 = (ATerm) ATgetNext((ATermList) b_81);
          w_76 :
          if(match_cons(c_81, sym__2))
            {
              d_81 = ATgetArgument(c_81, 0);
              e_81 = ATgetArgument(c_81, 1);
              {
                ATerm h_81 = NULL;
                if(((a_81 != NULL) && (a_81 != d_81)))
                  _fail(d_81);
                else
                  a_81 = d_81;
                {
                  if(((h_81 != NULL) && (h_81 != e_81)))
                    _fail(e_81);
                  else
                    h_81 = e_81;
                  t = not_null(h_81);
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
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(g_31);
    }
  else
    {
      t = f_31;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm v_132 (ATerm, ATerm (ATerm)))
{
  ATerm m_81 = NULL,n_81 = NULL,o_81 = NULL;
  m_81 = t;
  l_81 :
  if(match_cons(m_81, sym__2))
    {
      n_81 = ATgetArgument(m_81, 0);
      o_81 = ATgetArgument(m_81, 1);
      {
        t = not_null(n_81);
        {
          ATerm s_4 (ATerm t)
          {
            ATerm t_4 (ATerm t)
            {
              t = not_null(o_81);
              return(t);
            }
            t = split_2(t, _id, t_4);
            t = lookup_0(t);
            return(t);
          }
          t = v_132(t, s_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm k_112 (ATerm))
{
  ATerm f_90 = NULL,g_90 = NULL,h_90 = NULL;
  f_90 = t;
  e_90 :
  if(match_cons(f_90, sym__2))
    {
      g_90 = ATgetArgument(f_90, 0);
      h_90 = ATgetArgument(f_90, 1);
      {
        t = not_null(g_90);
        {
          ATerm u_4 (ATerm t)
          {
            ATerm k_90 = NULL;
            k_90 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_90), not_null(h_90));
              t = k_112(t);
            }
            return(t);
          }
          t = _all(t, u_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm u_111 (ATerm))
{
  ATerm o_90 (ATerm t)
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_111(t);
        ;
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
        t = all_dist_1(t, o_90);
      }
    return(t);
  }
  t = o_90(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm t_90 = NULL,u_90 = NULL,v_90 = NULL,w_90 = NULL;
  t_90 = t;
  s_90 :
  if(match_cons(t_90, sym__2))
    {
      u_90 = ATgetArgument(t_90, 0);
      v_90 = ATgetArgument(t_90, 1);
      {
        ATerm y_90 = NULL;
        if(((y_90 != NULL) && (y_90 != v_90)))
          _fail(v_90);
        else
          y_90 = v_90;
      }
    }
  else
    {
      if(match_cons(t_90, sym__3))
        {
          u_90 = ATgetArgument(t_90, 0);
          v_90 = ATgetArgument(t_90, 1);
          w_90 = ATgetArgument(t_90, 2);
          {
            ATerm e_91 = NULL;
            ATerm f_91 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_90), not_null(v_90));
            {
              t = zip_1(t, _id);
              {
                f_91 = t;
                if(((e_91 != NULL) && (e_91 != f_91)))
                  _fail(f_91);
                else
                  e_91 = f_91;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_91), not_null(w_90));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm r_131 (ATerm), ATerm s_131 (ATerm, ATerm (ATerm)), ATerm t_131 (ATerm), ATerm u_131 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm v_131 (ATerm, ATerm (ATerm)), ATerm w_131 (ATerm))
{
  ATerm n_91 = NULL,o_91 = NULL,s_91 = NULL;
  t = subs_args_0(t);
  {
    n_91 = t;
    k_91 :
    if(match_cons(n_91, sym__2))
      {
        o_91 = ATgetArgument(n_91, 0);
        s_91 = ATgetArgument(n_91, 1);
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_91), (ATerm) ATempty);
          {
            ATerm x_91 (ATerm t)
            {
              ATerm v_4 (ATerm t)
              {
                ATerm j_31 = t;
                int k_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = RnVar_1(t, s_131);
                    ;
                    LocalPopChoice(k_31);
                  }
                else
                  {
                    t = j_31;
                    {
                      ATerm r_31 = t;
                      int s_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Fst_0(t);
                          {
                            ATerm w_4 (ATerm t)
                            {
                              t = not_null(o_91);
                              return(t);
                            }
                            t = SubsVar_2(t, r_131, w_4);
                            t = w_131(t);
                          }
                          ;
                          LocalPopChoice(s_31);
                        }
                      else
                        {
                          t = r_31;
                          {
                            t = RnBinding_2(t, t_131, v_131);
                            t = DistBinding_2(t, x_91, u_131);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = env_alltd_1(t, v_4);
              return(t);
            }
            t = x_91(t);
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
ATerm substitute_5 (ATerm t, ATerm y_131 (ATerm), ATerm z_131 (ATerm, ATerm (ATerm)), ATerm a_132 (ATerm), ATerm b_132 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_132 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, y_131, z_131, a_132, b_132, c_132, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(u_31);
      }
    else
      {
        t = t_31;
        {
          ATerm v_31 = t;
          int w_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0(t);
              ;
              LocalPopChoice(w_31);
            }
          else
            {
              t = v_31;
              {
                ATerm b_32 = t;
                int c_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0(t);
                    ;
                    LocalPopChoice(c_32);
                  }
                else
                  {
                    t = b_32;
                    t = Bind8_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = substitute_5(t, IsVar_0, Var_1, x_4, tboundin_3, tpaste_1);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm l_134 (ATerm))
{
  ATerm h_92 = NULL,i_92 = NULL,j_92 = NULL;
  h_92 = t;
  g_92 :
  if(match_cons(h_92, sym_Op_2))
    {
      i_92 = ATgetArgument(h_92, 0);
      j_92 = ATgetArgument(h_92, 1);
      {
        ATerm n_92 = NULL,o_92 = NULL;
        t = l_134(t);
        {
          ATerm y_4 (ATerm t)
          {
            ATerm d_32;
            d_32 = t;
            {
              ATerm p_92 = NULL,q_92 = NULL,r_92 = NULL,s_92 = NULL;
              p_92 = t;
              f_92 :
              if(match_cons(p_92, sym_Overlay_3))
                {
                  q_92 = ATgetArgument(p_92, 0);
                  r_92 = ATgetArgument(p_92, 1);
                  s_92 = ATgetArgument(p_92, 2);
                  {
                    ATerm t_92 = NULL,w_92 = NULL,x_92 = NULL,b_93 = NULL;
                    if(((i_92 != NULL) && (i_92 != q_92)))
                      _fail(q_92);
                    else
                      i_92 = q_92;
                    {
                      if(((t_92 != NULL) && (t_92 != r_92)))
                        _fail(r_92);
                      else
                        t_92 = r_92;
                      {
                        if(((w_92 != NULL) && (w_92 != s_92)))
                          _fail(s_92);
                        else
                          w_92 = s_92;
                        {
                          ATerm e_32;
                          e_32 = t;
                          {
                            ATerm a_93 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(t_92), not_null(j_92));
                            {
                              t = zip_1(t, _id);
                              {
                                a_93 = t;
                                if(((x_92 != NULL) && (x_92 != a_93)))
                                  _fail(a_93);
                                else
                                  x_92 = a_93;
                              }
                            }
                          }
                          t = e_32;
                          {
                            ATerm h_93 = NULL;
                            t = not_null(x_92);
                            {
                              b_93 = t;
                              {
                                if(((n_92 != NULL) && (n_92 != b_93)))
                                  _fail(b_93);
                                else
                                  n_92 = b_93;
                                {
                                  t = not_null(w_92);
                                  {
                                    h_93 = t;
                                    {
                                      if(((o_92 != NULL) && (o_92 != h_93)))
                                        _fail(h_93);
                                      else
                                        o_92 = h_93;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(x_92), not_null(w_92));
                                    }
                                  }
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
            t = d_32;
            return(t);
          }
          t = fetch_1(t, y_4);
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_92), not_null(o_92));
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
ATerm exp_overlays1_1 (ATerm t, ATerm j_134 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    ATerm k_32;
    k_32 = t;
    {
      ATerm l_32 = t;
      if((PushChoice() == 0))
        {
          ATerm o_93 = NULL;
          t = j_134(t);
          {
            o_93 = t;
            n_93 :
            if(((ATgetType(o_93) == AT_LIST) && ATisEmpty(o_93)))
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
          t = l_32;
        }
    }
    t = k_32;
    {
      ATerm a_5 (ATerm t)
      {
        ATerm b_5 (ATerm t)
        {
          t = ExpOverlay_1(t, j_134);
          return(t);
        }
        t = repeat_1(t, b_5);
        return(t);
      }
      t = topdown_1(t, a_5);
    }
    return(t);
  }
  t = try_1(t, z_4);
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm c_94 = NULL,d_94 = NULL,e_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL,l_94 = NULL,m_94 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL;
  c_94 = t;
  u_93 :
  if(match_cons(c_94, sym_Specification_1))
    {
      d_94 = ATgetArgument(c_94, 0);
      v_93 :
      if(((ATgetType(d_94) == AT_LIST) && !(ATisEmpty(d_94))))
        {
          e_94 = ATgetFirst((ATermList) d_94);
          j_94 = (ATerm) ATgetNext((ATermList) d_94);
          w_93 :
          if(match_cons(e_94, sym_Signature_1))
            {
              i_94 = ATgetArgument(e_94, 0);
              x_93 :
              if(((ATgetType(j_94) == AT_LIST) && !(ATisEmpty(j_94))))
                {
                  k_94 = ATgetFirst((ATermList) j_94);
                  m_94 = (ATerm) ATgetNext((ATermList) j_94);
                  y_93 :
                  if(match_cons(k_94, sym_Overlays_1))
                    {
                      l_94 = ATgetArgument(k_94, 0);
                      z_93 :
                      if(((ATgetType(m_94) == AT_LIST) && !(ATisEmpty(m_94))))
                        {
                          n_94 = ATgetFirst((ATermList) m_94);
                          p_94 = (ATerm) ATgetNext((ATermList) m_94);
                          a_94 :
                          if(match_cons(n_94, sym_Strategies_1))
                            {
                              o_94 = ATgetArgument(n_94, 0);
                              b_94 :
                              if(((ATgetType(p_94) == AT_LIST) && ATisEmpty(p_94)))
                                {
                                  {
                                    ATerm a_95 = NULL,c_95 = NULL;
                                    ATerm m_32;
                                    m_32 = t;
                                    {
                                      ATerm b_95 = NULL;
                                      t = not_null(l_94);
                                      {
                                        ATerm c_5 (ATerm t)
                                        {
                                          t = not_null(l_94);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, c_5);
                                        {
                                          b_95 = t;
                                          if(((a_95 != NULL) && (a_95 != b_95)))
                                            _fail(b_95);
                                          else
                                            a_95 = b_95;
                                        }
                                      }
                                    }
                                    t = m_32;
                                    {
                                      ATerm d_95 = NULL,g_95 = NULL,i_95 = NULL;
                                      ATerm n_32;
                                      n_32 = t;
                                      {
                                        ATerm e_95 = NULL;
                                        t = not_null(l_94);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            e_95 = t;
                                            if(((d_95 != NULL) && (d_95 != e_95)))
                                              _fail(e_95);
                                            else
                                              d_95 = e_95;
                                          }
                                        }
                                      }
                                      t = n_32;
                                      {
                                        ATerm h_95 = NULL;
                                        t = not_null(o_94);
                                        {
                                          ATerm d_5 (ATerm t)
                                          {
                                            t = not_null(a_95);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, d_5);
                                          {
                                            h_95 = t;
                                            if(((g_95 != NULL) && (g_95 != h_95)))
                                              _fail(h_95);
                                            else
                                              g_95 = h_95;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(d_95), not_null(g_95));
                                          {
                                            t = conc_0(t);
                                            {
                                              i_95 = t;
                                              if(((c_95 != NULL) && (c_95 != i_95)))
                                                _fail(i_95);
                                              else
                                                c_95 = i_95;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(c_95))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(i_94))));
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
  ATerm s_95 = NULL,t_95 = NULL,u_95 = NULL,v_95 = NULL;
  s_95 = t;
  r_95 :
  if(match_cons(s_95, sym_Overlay_3))
    {
      t_95 = ATgetArgument(s_95, 0);
      u_95 = ATgetArgument(s_95, 1);
      v_95 = ATgetArgument(s_95, 2);
      {
        ATerm o_32;
        o_32 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_32, not_null(t_95)));
          {
            ATerm e_5 (ATerm t)
            {
              t = term_q_32;
              return(t);
            }
            t = assert_1(t, e_5);
            {
              t = not_null(u_95);
              {
                t = DefineBound_0(t);
                {
                  t = not_null(v_95);
                  t = use_vars_0(t);
                }
              }
            }
          }
        }
        t = o_32;
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
  ATerm n_96 = NULL,q_96 = NULL,r_96 = NULL,x_96 = NULL,y_96 = NULL,z_96 = NULL,a_97 = NULL,b_97 = NULL,c_97 = NULL,d_97 = NULL,h_97 = NULL;
  y_96 = t;
  k_96 :
  if(match_cons(y_96, sym_RDefT_4))
    {
      z_96 = ATgetArgument(y_96, 0);
      a_97 = ATgetArgument(y_96, 1);
      b_97 = ATgetArgument(y_96, 2);
      n_96 = ATgetArgument(y_96, 3);
      l_96 :
      if(match_cons(n_96, sym_StratRule_3))
        {
          q_96 = ATgetArgument(n_96, 0);
          r_96 = ATgetArgument(n_96, 1);
          x_96 = ATgetArgument(n_96, 2);
          {
            ATerm w_32;
            w_32 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_x_32, not_null(z_96)));
              {
                ATerm f_5 (ATerm t)
                {
                  t = term_q_32;
                  return(t);
                }
                t = assert_1(t, f_5);
                {
                  t = not_null(b_97);
                  {
                    t = declared_vars_0(t);
                    {
                      t = DefineBound_0(t);
                      {
                        t = not_null(q_96);
                        {
                          t = unbound_vars_0(t);
                          {
                            t = not_null(r_96);
                            {
                              t = unbound_vars_0(t);
                              {
                                t = not_null(x_96);
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
            t = w_32;
          }
        }
      else
        {
          if(match_cons(n_96, sym_Rule_3))
            {
              q_96 = ATgetArgument(n_96, 0);
              r_96 = ATgetArgument(n_96, 1);
              x_96 = ATgetArgument(n_96, 2);
              {
                ATerm d_33;
                d_33 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_33, not_null(z_96)));
                  {
                    ATerm g_5 (ATerm t)
                    {
                      t = term_q_32;
                      return(t);
                    }
                    t = assert_1(t, g_5);
                    {
                      t = not_null(b_97);
                      {
                        t = declared_vars_0(t);
                        {
                          t = DefineBound_0(t);
                          {
                            t = not_null(q_96);
                            {
                              t = bind_vars_0(t);
                              {
                                t = not_null(x_96);
                                {
                                  t = unbound_vars_0(t);
                                  {
                                    t = not_null(r_96);
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
                t = d_33;
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
      if(match_cons(y_96, sym_RDef_3))
        {
          z_96 = ATgetArgument(y_96, 0);
          a_97 = ATgetArgument(y_96, 1);
          b_97 = ATgetArgument(y_96, 2);
          m_96 :
          if(match_cons(b_97, sym_Rule_3))
            {
              c_97 = ATgetArgument(b_97, 0);
              d_97 = ATgetArgument(b_97, 1);
              h_97 = ATgetArgument(b_97, 2);
              {
                ATerm f_33;
                f_33 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_33, not_null(z_96)));
                  {
                    ATerm h_5 (ATerm t)
                    {
                      t = term_q_32;
                      return(t);
                    }
                    t = assert_1(t, h_5);
                    {
                      t = not_null(c_97);
                      {
                        t = bind_vars_0(t);
                        {
                          t = not_null(h_97);
                          {
                            t = unbound_vars_0(t);
                            {
                              t = not_null(d_97);
                              t = use_vars_0(t);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = f_33;
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
ATerm guardedlchoice_1 (ATerm t, ATerm t_135 (ATerm))
{
  ATerm i_5 (ATerm t)
  {
    t = GuardedLChoice_3(t, t_135, t_135, _id);
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = GuardedLChoice_3(t, _id, _id, t_135);
    return(t);
  }
  t = abstract_choice_2(t, i_5, j_5);
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm u_96 (ATerm))
{
  ATerm m_98 = NULL,u_98 = NULL,v_98 = NULL,w_98 = NULL;
  m_98 = t;
  l_98 :
  if(match_cons(m_98, sym_GuardedLChoice_3))
    {
      u_98 = ATgetArgument(m_98, 0);
      v_98 = ATgetArgument(m_98, 1);
      w_98 = ATgetArgument(m_98, 2);
      {
        ATerm b_99 = NULL,d_99 = NULL;
        ATerm c_99 = NULL;
        t = SSLgetAnnotations(not_null(m_98));
        {
          c_99 = t;
          if(((b_99 != NULL) && (b_99 != c_99)))
            _fail(c_99);
          else
            b_99 = c_99;
        }
        {
          t = not_null(u_98);
          {
            ATerm f_99 = NULL;
            t = s_96(t);
            {
              d_99 = t;
              {
                t = not_null(v_98);
                {
                  ATerm h_99 = NULL;
                  t = t_96(t);
                  {
                    f_99 = t;
                    {
                      t = not_null(w_98);
                      {
                        ATerm j_99 = NULL;
                        t = u_96(t);
                        {
                          h_99 = t;
                          {
                            ATerm k_99 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(d_99), not_null(f_99), not_null(h_99)), not_null(b_99));
                            {
                              k_99 = t;
                              if(((j_99 != NULL) && (j_99 != k_99)))
                                _fail(k_99);
                              else
                                j_99 = k_99;
                            }
                            t = not_null(j_99);
                          }
                        }
                      }
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
ATerm lchoice_1 (ATerm t, ATerm s_135 (ATerm))
{
  ATerm k_5 (ATerm t)
  {
    t = LChoice_2(t, s_135, _id);
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = LChoice_2(t, _id, s_135);
    return(t);
  }
  t = abstract_choice_2(t, k_5, l_5);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm o_96 (ATerm), ATerm p_96 (ATerm))
{
  ATerm x_99 = NULL,y_99 = NULL,z_99 = NULL;
  x_99 = t;
  w_99 :
  if(match_cons(x_99, sym_LChoice_2))
    {
      y_99 = ATgetArgument(x_99, 0);
      z_99 = ATgetArgument(x_99, 1);
      {
        ATerm d_100 = NULL,f_100 = NULL;
        ATerm e_100 = NULL;
        t = SSLgetAnnotations(not_null(x_99));
        {
          e_100 = t;
          if(((d_100 != NULL) && (d_100 != e_100)))
            _fail(e_100);
          else
            d_100 = e_100;
        }
        {
          t = not_null(y_99);
          {
            ATerm h_100 = NULL;
            t = o_96(t);
            {
              f_100 = t;
              {
                t = not_null(z_99);
                {
                  ATerm j_100 = NULL;
                  t = p_96(t);
                  {
                    h_100 = t;
                    {
                      ATerm k_100 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(f_100), not_null(h_100)), not_null(d_100));
                      {
                        k_100 = t;
                        if(((j_100 != NULL) && (j_100 != k_100)))
                          _fail(k_100);
                        else
                          j_100 = k_100;
                      }
                      t = not_null(j_100);
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
  ATerm m_5 (ATerm t)
  {
    ATerm n_5 (ATerm t)
    {
      ATerm z_100 = NULL,a_101 = NULL,b_101 = NULL,c_101 = NULL,d_101 = NULL,e_101 = NULL;
      z_100 = t;
      t_100 :
      if(match_cons(z_100, sym__2))
        {
          a_101 = ATgetArgument(z_100, 0);
          b_101 = ATgetArgument(z_100, 1);
          u_100 :
          if(((ATgetType(b_101) == AT_LIST) && !(ATisEmpty(b_101))))
            {
              c_101 = ATgetFirst((ATermList) b_101);
              e_101 = (ATerm) ATgetNext((ATermList) b_101);
              v_100 :
              if(match_cons(c_101, sym_Defined_1))
                {
                  d_101 = ATgetArgument(c_101, 0);
                  w_100 :
                  if(!(match_cons(a_101, sym_Scopes_0)))
                    {
                      ATerm h_33 = t;
                      int i_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_33;
                          k_33 = t;
                          {
                            ATerm g_101 = NULL,h_101 = NULL,i_101 = NULL,j_101 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, term_l_33, not_null(a_101));
                            {
                              t = table_get_0(t);
                              {
                                g_101 = t;
                                r_100 :
                                if(((ATgetType(g_101) == AT_LIST) && !(ATisEmpty(g_101))))
                                  {
                                    h_101 = ATgetFirst((ATermList) g_101);
                                    j_101 = (ATerm) ATgetNext((ATermList) g_101);
                                    s_100 :
                                    if(match_cons(h_101, sym_Defined_1))
                                      {
                                        i_101 = ATgetArgument(h_101, 0);
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
                          t = k_33;
                          ;
                          LocalPopChoice(i_33);
                        }
                      else
                        {
                          t = h_33;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_101), (ATerm) ATinsert(ATempty, term_n_33));
                        }
                    }
                }
              else
                {
                  x_100 :
                  if(!(match_cons(a_101, sym_Scopes_0)))
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              y_100 :
              if(!(match_cons(a_101, sym_Scopes_0)))
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
    t = try_1(t, n_5);
    return(t);
  }
  t = map_1(t, m_5);
  t = restore_Bound_0(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm p_101 = NULL,q_101 = NULL,r_101 = NULL;
  p_101 = t;
  o_101 :
  if(match_cons(p_101, sym__2))
    {
      q_101 = ATgetArgument(p_101, 0);
      r_101 = ATgetArgument(p_101, 1);
      {
        t = not_null(r_101);
        {
          ATerm o_5 (ATerm t)
          {
            ATerm u_101 = NULL,v_101 = NULL,w_101 = NULL;
            u_101 = t;
            n_101 :
            if(match_cons(u_101, sym__2))
              {
                v_101 = ATgetArgument(u_101, 0);
                w_101 = ATgetArgument(u_101, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(q_101), not_null(v_101), not_null(w_101));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, o_5);
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
  ATerm c_102 = NULL;
  c_102 = t;
  {
    ATerm t_33;
    t_33 = t;
    {
      t = term_l_33;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_33, not_null(c_102));
          t = table_putlist_0(t);
        }
      }
    }
    t = t_33;
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm g_102 = NULL;
  g_102 = t;
  t = SSL_table_keys(not_null(g_102));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm m_102 = NULL;
  m_102 = t;
  {
    t = table_keys_0(t);
    {
      ATerm p_5 (ATerm t)
      {
        ATerm o_102 = NULL;
        ATerm q_102 = NULL;
        o_102 = t;
        {
          ATerm r_102 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_102), not_null(o_102));
          {
            t = table_get_0(t);
            {
              r_102 = t;
              if(((q_102 != NULL) && (q_102 != r_102)))
                _fail(r_102);
              else
                q_102 = r_102;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_102), not_null(q_102));
        }
        return(t);
      }
      t = map_1(t, p_5);
    }
  }
  return(t);
}
ATerm save_Bound_0 (ATerm t)
{
  t = term_l_33;
  t = table_getlist_0(t);
  return(t);
}
ATerm abstract_choice_2 (ATerm t, ATerm p_135 (ATerm), ATerm q_135 (ATerm))
{
  ATerm x_102 = NULL,z_102 = NULL;
  ATerm u_33;
  u_33 = t;
  {
    ATerm y_102 = NULL;
    t = save_Bound_0(t);
    {
      y_102 = t;
      if(((x_102 != NULL) && (x_102 != y_102)))
        _fail(y_102);
      else
        x_102 = y_102;
    }
  }
  t = u_33;
  {
    t = p_135(t);
    {
      ATerm v_33;
      v_33 = t;
      {
        ATerm a_103 = NULL;
        t = save_Bound_0(t);
        {
          a_103 = t;
          {
            if(((z_102 != NULL) && (z_102 != a_103)))
              _fail(a_103);
            else
              z_102 = a_103;
            {
              t = not_null(x_102);
              t = restore_Bound_0(t);
            }
          }
        }
      }
      t = v_33;
      {
        t = q_135(t);
        {
          ATerm w_33;
          w_33 = t;
          {
            t = not_null(z_102);
            t = isect_Bound_0(t);
          }
          t = w_33;
        }
      }
    }
  }
  return(t);
}
ATerm choice_1 (ATerm t, ATerm r_135 (ATerm))
{
  ATerm q_5 (ATerm t)
  {
    t = Choice_2(t, r_135, _id);
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = Choice_2(t, _id, r_135);
    return(t);
  }
  t = abstract_choice_2(t, q_5, r_5);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm m_95 (ATerm), ATerm n_95 (ATerm))
{
  ATerm j_103 = NULL,k_103 = NULL,l_103 = NULL;
  j_103 = t;
  i_103 :
  if(match_cons(j_103, sym_Choice_2))
    {
      k_103 = ATgetArgument(j_103, 0);
      l_103 = ATgetArgument(j_103, 1);
      {
        ATerm p_103 = NULL,r_103 = NULL;
        ATerm q_103 = NULL;
        t = SSLgetAnnotations(not_null(j_103));
        {
          q_103 = t;
          if(((p_103 != NULL) && (p_103 != q_103)))
            _fail(q_103);
          else
            p_103 = q_103;
        }
        {
          t = not_null(k_103);
          {
            ATerm t_103 = NULL;
            t = m_95(t);
            {
              r_103 = t;
              {
                t = not_null(l_103);
                {
                  ATerm v_103 = NULL;
                  t = n_95(t);
                  {
                    t_103 = t;
                    {
                      ATerm w_103 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(r_103), not_null(t_103)), not_null(p_103));
                      {
                        w_103 = t;
                        if(((v_103 != NULL) && (v_103 != w_103)))
                          _fail(w_103);
                        else
                          v_103 = w_103;
                      }
                      t = not_null(v_103);
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
  ATerm c_105 = NULL;
  c_105 = t;
  {
    ATerm h_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_105 = NULL;
        ATerm g_105 = NULL,h_105 = NULL,i_105 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm s_5 (ATerm t)
          {
            t = term_q_32;
            return(t);
          }
          t = rewrite_1(t, s_5);
          {
            g_105 = t;
            l_104 :
            if(match_cons(g_105, sym_Defined_2))
              {
                h_105 = ATgetArgument(g_105, 0);
                i_105 = ATgetArgument(g_105, 1);
                m_104 :
                if(match_string(h_105, "j_1"))
                  {
                    if(((f_105 != NULL) && (f_105 != i_105)))
                      _fail(i_105);
                    else
                      f_105 = i_105;
                  }
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(c_105)), term_q_27), not_null(f_105)), term_a_35);
        ;
        LocalPopChoice(l_34);
      }
    else
      {
        t = h_34;
        {
          ATerm b_35 = t;
          int c_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_105 = NULL;
              ATerm o_105 = NULL,p_105 = NULL,q_105 = NULL;
              t = (ATerm) ATempty;
              {
                ATerm t_5 (ATerm t)
                {
                  t = term_q_32;
                  return(t);
                }
                t = rewrite_1(t, t_5);
                {
                  o_105 = t;
                  o_104 :
                  if(match_cons(o_105, sym_Defined_2))
                    {
                      p_105 = ATgetArgument(o_105, 0);
                      q_105 = ATgetArgument(o_105, 1);
                      p_104 :
                      if(match_string(p_105, "g_1"))
                        {
                          if(((n_105 != NULL) && (n_105 != q_105)))
                            _fail(q_105);
                          else
                            n_105 = q_105;
                        }
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
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(c_105)), term_q_27), not_null(n_105)), term_d_35);
              ;
              LocalPopChoice(c_35);
            }
          else
            {
              t = b_35;
              {
                ATerm e_35 = t;
                int p_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_105 = NULL;
                    ATerm u_105 = NULL,v_105 = NULL,w_105 = NULL;
                    t = (ATerm) ATempty;
                    {
                      ATerm u_5 (ATerm t)
                      {
                        t = term_q_32;
                        return(t);
                      }
                      t = rewrite_1(t, u_5);
                      {
                        u_105 = t;
                        r_104 :
                        if(match_cons(u_105, sym_Defined_2))
                          {
                            v_105 = ATgetArgument(u_105, 0);
                            w_105 = ATgetArgument(u_105, 1);
                            s_104 :
                            if(match_string(v_105, "d_1"))
                              {
                                if(((t_105 != NULL) && (t_105 != w_105)))
                                  _fail(w_105);
                                else
                                  t_105 = w_105;
                              }
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
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(c_105)), term_q_27), not_null(t_105)), term_d_35);
                    ;
                    LocalPopChoice(p_35);
                  }
                else
                  {
                    t = e_35;
                    {
                      ATerm t_35 = t;
                      int i_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_106 = NULL;
                          ATerm c_106 = NULL,d_106 = NULL,e_106 = NULL;
                          t = (ATerm) ATempty;
                          {
                            ATerm v_5 (ATerm t)
                            {
                              t = term_q_32;
                              return(t);
                            }
                            t = rewrite_1(t, v_5);
                            {
                              c_106 = t;
                              u_104 :
                              if(match_cons(c_106, sym_Defined_2))
                                {
                                  d_106 = ATgetArgument(c_106, 0);
                                  e_106 = ATgetArgument(c_106, 1);
                                  v_104 :
                                  if(match_string(d_106, "a_1"))
                                    {
                                      if(((b_106 != NULL) && (b_106 != e_106)))
                                        _fail(e_106);
                                      else
                                        b_106 = e_106;
                                    }
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
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(c_105)), term_q_27), not_null(b_106)), term_d_35);
                          ;
                          LocalPopChoice(i_36);
                        }
                      else
                        {
                          t = t_35;
                          {
                            ATerm j_36 = t;
                            int k_36 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm j_106 = NULL;
                                ATerm k_106 = NULL,l_106 = NULL,m_106 = NULL;
                                t = (ATerm) ATempty;
                                {
                                  ATerm w_5 (ATerm t)
                                  {
                                    t = term_q_32;
                                    return(t);
                                  }
                                  t = rewrite_1(t, w_5);
                                  {
                                    k_106 = t;
                                    x_104 :
                                    if(match_cons(k_106, sym_Defined_2))
                                      {
                                        l_106 = ATgetArgument(k_106, 0);
                                        m_106 = ATgetArgument(k_106, 1);
                                        y_104 :
                                        if(match_string(l_106, "x_0"))
                                          {
                                            if(((j_106 != NULL) && (j_106 != m_106)))
                                              _fail(m_106);
                                            else
                                              j_106 = m_106;
                                          }
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
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(c_105)), term_q_27), not_null(j_106)), term_l_36);
                                ;
                                LocalPopChoice(k_36);
                              }
                            else
                              {
                                t = j_36;
                                {
                                  ATerm p_106 = NULL;
                                  ATerm q_106 = NULL,r_106 = NULL,s_106 = NULL;
                                  t = (ATerm) ATempty;
                                  {
                                    ATerm x_5 (ATerm t)
                                    {
                                      t = term_q_32;
                                      return(t);
                                    }
                                    t = rewrite_1(t, x_5);
                                    {
                                      q_106 = t;
                                      a_105 :
                                      if(match_cons(q_106, sym_Defined_2))
                                        {
                                          r_106 = ATgetArgument(q_106, 0);
                                          s_106 = ATgetArgument(q_106, 1);
                                          b_105 :
                                          if(match_string(r_106, "u_0"))
                                            {
                                              if(((p_106 != NULL) && (p_106 != s_106)))
                                                _fail(s_106);
                                              else
                                                p_106 = s_106;
                                            }
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
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(c_105)), term_q_27), not_null(p_106)), term_l_36);
                                }
                              }
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
  ATerm p_107 = NULL,q_107 = NULL;
  p_107 = t;
  o_107 :
  if(match_cons(p_107, sym_Var_1))
    {
      q_107 = ATgetArgument(p_107, 0);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_36), not_null(q_107)), term_m_36);
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
  ATerm d_108 = NULL,e_108 = NULL;
  d_108 = t;
  c_108 :
  if(match_cons(d_108, sym_Var_1))
    {
      e_108 = ATgetArgument(d_108, 0);
      {
        ATerm p_36 = t;
        int q_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_108 = NULL,k_108 = NULL;
            t = not_null(d_108);
            {
              ATerm y_5 (ATerm t)
              {
                t = term_l_33;
                return(t);
              }
              t = rewrite_1(t, y_5);
              {
                h_108 = t;
                w_107 :
                if(match_cons(h_108, sym_Defined_1))
                  {
                    k_108 = ATgetArgument(h_108, 0);
                    x_107 :
                    if(!(match_string(k_108, "q_1")))
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
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_108));
            ;
            LocalPopChoice(q_36);
          }
        else
          {
            t = p_36;
            {
              ATerm r_36 = t;
              int s_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_108 = NULL;
                  t = not_null(d_108);
                  {
                    ATerm z_5 (ATerm t)
                    {
                      t = term_l_33;
                      return(t);
                    }
                    t = rewrite_1(t, z_5);
                    {
                      n_108 = t;
                      z_107 :
                      if(match_cons(n_108, sym_Undefined_0))
                        {
                          _fail(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                  t = term_n_33;
                  ;
                  LocalPopChoice(s_36);
                }
              else
                {
                  t = r_36;
                  {
                    ATerm q_108 = NULL,r_108 = NULL;
                    t = not_null(d_108);
                    {
                      ATerm a_6 (ATerm t)
                      {
                        t = term_l_33;
                        return(t);
                      }
                      t = rewrite_1(t, a_6);
                      {
                        q_108 = t;
                        a_108 :
                        if(match_cons(q_108, sym_Defined_1))
                          {
                            r_108 = ATgetArgument(q_108, 0);
                            b_108 :
                            if(!(match_string(r_108, "m_1")))
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_108));
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
  ATerm t_36 = t;
  int u_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(u_36);
      {
        ATerm v_36 = t;
        int w_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0(t);
            ;
            LocalPopChoice(w_36);
          }
        else
          {
            t = v_36;
            {
              t = Unbound_0(t);
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = t_36;
      {
        ATerm x_36 = t;
        int y_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(y_36);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = x_36;
            {
              ATerm z_36 = t;
              int a_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(a_37);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = z_36;
                  t = _all(t, use_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm f_94 (ATerm), ATerm g_94 (ATerm), ATerm h_94 (ATerm))
{
  ATerm f_109 = NULL,g_109 = NULL,h_109 = NULL,i_109 = NULL;
  f_109 = t;
  e_109 :
  if(match_cons(f_109, sym_Rule_3))
    {
      g_109 = ATgetArgument(f_109, 0);
      h_109 = ATgetArgument(f_109, 1);
      i_109 = ATgetArgument(f_109, 2);
      {
        ATerm n_109 = NULL,p_109 = NULL;
        ATerm o_109 = NULL;
        t = SSLgetAnnotations(not_null(f_109));
        {
          o_109 = t;
          if(((n_109 != NULL) && (n_109 != o_109)))
            _fail(o_109);
          else
            n_109 = o_109;
        }
        {
          t = not_null(g_109);
          {
            ATerm t_109 = NULL;
            t = f_94(t);
            {
              p_109 = t;
              {
                t = not_null(h_109);
                {
                  ATerm v_109 = NULL;
                  t = g_94(t);
                  {
                    t_109 = t;
                    {
                      t = not_null(i_109);
                      {
                        ATerm x_109 = NULL;
                        t = h_94(t);
                        {
                          v_109 = t;
                          {
                            ATerm y_109 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(p_109), not_null(t_109), not_null(v_109)), not_null(n_109));
                            {
                              y_109 = t;
                              if(((x_109 != NULL) && (x_109 != y_109)))
                                _fail(y_109);
                              else
                                x_109 = y_109;
                            }
                            t = not_null(x_109);
                          }
                        }
                      }
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
ATerm RootApp_1 (ATerm t, ATerm e_93 (ATerm))
{
  ATerm k_110 = NULL,l_110 = NULL;
  k_110 = t;
  j_110 :
  if(match_cons(k_110, sym_RootApp_1))
    {
      l_110 = ATgetArgument(k_110, 0);
      {
        ATerm o_110 = NULL,q_110 = NULL;
        ATerm p_110 = NULL;
        t = SSLgetAnnotations(not_null(k_110));
        {
          p_110 = t;
          if(((o_110 != NULL) && (o_110 != p_110)))
            _fail(p_110);
          else
            o_110 = p_110;
        }
        {
          t = not_null(l_110);
          {
            ATerm s_110 = NULL;
            t = e_93(t);
            {
              q_110 = t;
              {
                ATerm t_110 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, not_null(q_110)), not_null(o_110));
                {
                  t_110 = t;
                  if(((s_110 != NULL) && (s_110 != t_110)))
                    _fail(t_110);
                  else
                    s_110 = t_110;
                }
                t = not_null(s_110);
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
ATerm App_2 (ATerm t, ATerm c_93 (ATerm), ATerm d_93 (ATerm))
{
  ATerm e_111 = NULL,f_111 = NULL,g_111 = NULL;
  e_111 = t;
  d_111 :
  if(match_cons(e_111, sym_App_2))
    {
      f_111 = ATgetArgument(e_111, 0);
      g_111 = ATgetArgument(e_111, 1);
      {
        ATerm k_111 = NULL,m_111 = NULL;
        ATerm l_111 = NULL;
        t = SSLgetAnnotations(not_null(e_111));
        {
          l_111 = t;
          if(((k_111 != NULL) && (k_111 != l_111)))
            _fail(l_111);
          else
            k_111 = l_111;
        }
        {
          t = not_null(f_111);
          {
            ATerm o_111 = NULL;
            t = c_93(t);
            {
              m_111 = t;
              {
                t = not_null(g_111);
                {
                  ATerm q_111 = NULL;
                  t = d_93(t);
                  {
                    o_111 = t;
                    {
                      ATerm r_111 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(m_111), not_null(o_111)), not_null(k_111));
                      {
                        r_111 = t;
                        if(((q_111 != NULL) && (q_111 != r_111)))
                          _fail(r_111);
                        else
                          q_111 = r_111;
                      }
                      t = not_null(q_111);
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
  ATerm d_112 = NULL,e_112 = NULL,f_112 = NULL,g_112 = NULL;
  d_112 = t;
  c_112 :
  if(match_cons(d_112, sym__3))
    {
      e_112 = ATgetArgument(d_112, 0);
      f_112 = ATgetArgument(d_112, 1);
      g_112 = ATgetArgument(d_112, 2);
      {
        ATerm l_112 = NULL;
        ATerm b_37;
        b_37 = t;
        {
          ATerm m_112 = NULL,n_112 = NULL,o_112 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_112), not_null(f_112));
          {
            t = table_get_0(t);
            {
              m_112 = t;
              b_112 :
              if(((ATgetType(m_112) == AT_LIST) && !(ATisEmpty(m_112))))
                {
                  n_112 = ATgetFirst((ATermList) m_112);
                  o_112 = (ATerm) ATgetNext((ATermList) m_112);
                  {
                    if(((l_112 != NULL) && (l_112 != o_112)))
                      _fail(o_112);
                    else
                      l_112 = o_112;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(e_112), not_null(f_112), (ATerm) ATinsert(CheckATermList(not_null(l_112)), not_null(g_112)));
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
        t = b_37;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm override_key_1 (ATerm t, ATerm p_123 (ATerm))
{
  ATerm x_112 = NULL,y_112 = NULL,z_112 = NULL;
  x_112 = t;
  u_112 :
  if(match_cons(x_112, sym__2))
    {
      y_112 = ATgetArgument(x_112, 0);
      z_112 = ATgetArgument(x_112, 1);
      {
        ATerm c_113 = NULL;
        ATerm c_37;
        c_37 = t;
        {
          ATerm d_113 = NULL;
          t = p_123(t);
          {
            d_113 = t;
            {
              if(((c_113 != NULL) && (c_113 != d_113)))
                _fail(d_113);
              else
                c_113 = d_113;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(c_113), not_null(y_112), not_null(z_112));
                t = table_replace_0(t);
              }
            }
          }
        }
        t = c_37;
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
  ATerm k_113 = NULL,n_113 = NULL;
  k_113 = t;
  j_113 :
  if(match_cons(k_113, sym_Var_1))
    {
      n_113 = ATgetArgument(k_113, 0);
      {
        ATerm d_37;
        d_37 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_113)), term_f_37);
          {
            ATerm b_6 (ATerm t)
            {
              t = term_l_33;
              return(t);
            }
            t = override_key_1(t, b_6);
          }
        }
        t = d_37;
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
  ATerm g_37 = t;
  int i_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(i_37);
      t = Binding_0(t);
    }
  else
    {
      t = g_37;
      {
        ATerm j_37 = t;
        int o_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(o_37);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = j_37;
            {
              ATerm p_37 = t;
              int q_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(q_37);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = p_37;
                  t = _all(t, bind_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1 (ATerm t, ATerm f_96 (ATerm))
{
  ATerm v_113 = NULL,y_113 = NULL;
  v_113 = t;
  u_113 :
  if(match_cons(v_113, sym_Match_1))
    {
      y_113 = ATgetArgument(v_113, 0);
      {
        ATerm b_114 = NULL,d_114 = NULL;
        ATerm c_114 = NULL;
        t = SSLgetAnnotations(not_null(v_113));
        {
          c_114 = t;
          if(((b_114 != NULL) && (b_114 != c_114)))
            _fail(c_114);
          else
            b_114 = c_114;
        }
        {
          t = not_null(y_113);
          {
            ATerm h_114 = NULL;
            t = f_96(t);
            {
              d_114 = t;
              {
                ATerm i_114 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(d_114)), not_null(b_114));
                {
                  i_114 = t;
                  if(((h_114 != NULL) && (h_114 != i_114)))
                    _fail(i_114);
                  else
                    h_114 = i_114;
                }
                t = not_null(h_114);
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
ATerm Build_1 (ATerm t, ATerm g_96 (ATerm))
{
  ATerm s_114 = NULL,t_114 = NULL;
  s_114 = t;
  r_114 :
  if(match_cons(s_114, sym_Build_1))
    {
      t_114 = ATgetArgument(s_114, 0);
      {
        ATerm w_114 = NULL,e_115 = NULL;
        ATerm x_114 = NULL;
        t = SSLgetAnnotations(not_null(s_114));
        {
          x_114 = t;
          if(((w_114 != NULL) && (w_114 != x_114)))
            _fail(x_114);
          else
            w_114 = x_114;
        }
        {
          t = not_null(t_114);
          {
            ATerm g_115 = NULL;
            t = g_96(t);
            {
              e_115 = t;
              {
                ATerm h_115 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(e_115)), not_null(w_114));
                {
                  h_115 = t;
                  if(((g_115 != NULL) && (g_115 != h_115)))
                    _fail(h_115);
                  else
                    g_115 = h_115;
                }
                t = not_null(g_115);
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
ATerm VarScope_1 (ATerm t, ATerm o_135 (ATerm))
{
  ATerm c_6 (ATerm t)
  {
    t = term_l_33;
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    t = Scope_2(t, DefineUnbound_0, o_135);
    return(t);
  }
  t = scope_2(t, c_6, d_6);
  return(t);
}
ATerm unbound_vars_0 (ATerm t)
{
  ATerm r_37 = t;
  int s_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, _id, _id);
      LocalPopChoice(s_37);
      t = VarScope_1(t, unbound_vars_0);
    }
  else
    {
      t = r_37;
      {
        ATerm t_37 = t;
        int u_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1(t, _id);
            LocalPopChoice(u_37);
            t = Build_1(t, use_vars_0);
          }
        else
          {
            t = t_37;
            {
              ATerm v_37 = t;
              int w_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1(t, _id);
                  LocalPopChoice(w_37);
                  t = Match_1(t, bind_vars_0);
                }
              else
                {
                  t = v_37;
                  {
                    ATerm x_37 = t;
                    int y_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3(t, _id, _id, _id);
                        LocalPopChoice(y_37);
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
                        t = x_37;
                        {
                          ATerm z_37 = t;
                          int a_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2(t, _id, _id);
                              LocalPopChoice(a_38);
                              t = choice_1(t, unbound_vars_0);
                            }
                          else
                            {
                              t = z_37;
                              {
                                ATerm b_38 = t;
                                int c_38 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2(t, _id, _id);
                                    LocalPopChoice(c_38);
                                    t = lchoice_1(t, unbound_vars_0);
                                  }
                                else
                                  {
                                    t = b_38;
                                    {
                                      ATerm d_38 = t;
                                      int e_38 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3(t, _id, _id, _id);
                                          LocalPopChoice(e_38);
                                          t = guardedlchoice_1(t, unbound_vars_0);
                                        }
                                      else
                                        {
                                          t = d_38;
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
  ATerm e_6 (ATerm t)
  {
    ATerm o_115 = NULL;
    o_115 = t;
    {
      ATerm f_38;
      f_38 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_115)), term_m_38);
        {
          ATerm f_6 (ATerm t)
          {
            t = term_l_33;
            return(t);
          }
          t = assert_1(t, f_6);
        }
      }
      t = f_38;
    }
    return(t);
  }
  t = map_1(t, e_6);
  return(t);
}
ATerm sdef_ud_0 (ATerm t)
{
  ATerm u_115 = NULL,v_115 = NULL,w_115 = NULL,x_115 = NULL,y_115 = NULL;
  v_115 = t;
  t_115 :
  if(match_cons(v_115, sym_SDefT_4))
    {
      w_115 = ATgetArgument(v_115, 0);
      x_115 = ATgetArgument(v_115, 1);
      y_115 = ATgetArgument(v_115, 2);
      u_115 = ATgetArgument(v_115, 3);
      {
        ATerm n_38;
        n_38 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_38, not_null(w_115)));
          {
            ATerm g_6 (ATerm t)
            {
              t = term_q_32;
              return(t);
            }
            t = assert_1(t, g_6);
            {
              t = not_null(y_115);
              {
                t = declared_vars_0(t);
                {
                  t = DefineBound_0(t);
                  {
                    t = not_null(u_115);
                    t = unbound_vars_0(t);
                  }
                }
              }
            }
          }
        }
        t = n_38;
      }
    }
  else
    {
      if(match_cons(v_115, sym_SDef_3))
        {
          w_115 = ATgetArgument(v_115, 0);
          x_115 = ATgetArgument(v_115, 1);
          y_115 = ATgetArgument(v_115, 2);
          {
            ATerm s_38;
            s_38 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_t_38, not_null(w_115)));
              {
                ATerm h_6 (ATerm t)
                {
                  t = term_q_32;
                  return(t);
                }
                t = assert_1(t, h_6);
                {
                  t = not_null(y_115);
                  t = unbound_vars_0(t);
                }
              }
            }
            t = s_38;
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
  ATerm i_6 (ATerm t)
  {
    ATerm j_116 = NULL;
    j_116 = t;
    {
      ATerm u_38;
      u_38 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(j_116)), term_n_33);
        {
          ATerm j_6 (ATerm t)
          {
            t = term_l_33;
            return(t);
          }
          t = assert_1(t, j_6);
        }
      }
      t = u_38;
    }
    return(t);
  }
  t = map_1(t, i_6);
  return(t);
}
ATerm def_use_def_0 (ATerm t)
{
  ATerm k_6 (ATerm t)
  {
    t = term_q_32;
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    ATerm m_6 (ATerm t)
    {
      t = term_l_33;
      return(t);
    }
    ATerm n_6 (ATerm t)
    {
      ATerm v_38;
      v_38 = t;
      {
        t = tvars_0(t);
        t = DefineUnbound_0(t);
      }
      t = v_38;
      {
        ATerm w_38 = t;
        int x_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = sdef_ud_0(t);
            ;
            LocalPopChoice(x_38);
          }
        else
          {
            t = w_38;
            {
              ATerm z_38 = t;
              int b_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = rdef_ud_0(t);
                  ;
                  LocalPopChoice(b_39);
                }
              else
                {
                  t = z_38;
                  t = overlay_ud_0(t);
                }
            }
          }
      }
      return(t);
    }
    t = scope_2(t, m_6, n_6);
    return(t);
  }
  t = scope_2(t, k_6, l_6);
  return(t);
}
ATerm defs_use_def_0 (ATerm t)
{
  ATerm e_39 = t;
  int f_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(f_39);
    }
  else
    {
      t = e_39;
      {
        ATerm g_39;
        g_39 = t;
        {
          ATerm o_6 (ATerm t)
          {
            ATerm h_39 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = h_39;
              }
            return(t);
          }
          t = filter_1(t, o_6);
          t = Nil_0(t);
        }
        t = g_39;
      }
    }
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm q_91 (ATerm))
{
  ATerm r_116 = NULL,s_116 = NULL;
  r_116 = t;
  q_116 :
  if(match_cons(r_116, sym_Signature_1))
    {
      s_116 = ATgetArgument(r_116, 0);
      {
        ATerm x_116 = NULL,b_117 = NULL;
        ATerm a_117 = NULL;
        t = SSLgetAnnotations(not_null(r_116));
        {
          a_117 = t;
          if(((x_116 != NULL) && (x_116 != a_117)))
            _fail(a_117);
          else
            x_116 = a_117;
        }
        {
          t = not_null(s_116);
          {
            ATerm f_117 = NULL;
            t = q_91(t);
            {
              b_117 = t;
              {
                ATerm g_117 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(b_117)), not_null(x_116));
                {
                  g_117 = t;
                  if(((f_117 != NULL) && (f_117 != g_117)))
                    _fail(g_117);
                  else
                    f_117 = g_117;
                }
                t = not_null(f_117);
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
  ATerm p_6 (ATerm t)
  {
    ATerm q_6 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm r_6 (ATerm t)
    {
      ATerm s_6 (ATerm t)
      {
        t = Overlays_1(t, defs_use_def_0);
        return(t);
      }
      ATerm t_6 (ATerm t)
      {
        ATerm u_6 (ATerm t)
        {
          t = Strategies_1(t, defs_use_def_0);
          return(t);
        }
        t = Cons_2(t, u_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, s_6, t_6);
      return(t);
    }
    t = Cons_2(t, q_6, r_6);
    return(t);
  }
  t = Specification_1(t, p_6);
  return(t);
}
ATerm MkConstType_0 (ATerm t)
{
  ATerm n_117 = NULL,o_117 = NULL;
  n_117 = t;
  m_117 :
  if(match_cons(n_117, sym_DefaultVarDec_1))
    {
      o_117 = ATgetArgument(n_117, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(o_117), term_r_24);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0 (ATerm t)
{
  ATerm t_117 = NULL,u_117 = NULL;
  t_117 = t;
  s_117 :
  if(match_cons(t_117, sym_DefaultVarDec_1))
    {
      u_117 = ATgetArgument(t_117, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(u_117), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_24), term_r_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm l_39 = t;
  int m_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2(t, s_0, _id);
      {
        ATerm v_6 (ATerm t)
        {
          ATerm w_6 (ATerm t)
          {
            t = map1_1(t, s_0);
            return(t);
          }
          t = try_1(t, w_6);
          return(t);
        }
        t = Cons_2(t, _id, v_6);
      }
      ;
      LocalPopChoice(m_39);
    }
  else
    {
      t = l_39;
      {
        ATerm x_6 (ATerm t)
        {
          t = map1_1(t, s_0);
          return(t);
        }
        t = Cons_2(t, _id, x_6);
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm c_119 = NULL,d_119 = NULL,e_119 = NULL,f_119 = NULL,g_119 = NULL,h_119 = NULL,i_119 = NULL;
  g_119 = t;
  t_118 :
  if(match_cons(g_119, sym_Lets_2))
    {
      h_119 = ATgetArgument(g_119, 0);
      i_119 = ATgetArgument(g_119, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(h_119), not_null(i_119));
    }
  else
    {
      if(match_cons(g_119, sym_LChoices_1))
        {
          h_119 = ATgetArgument(g_119, 0);
          u_118 :
          if(((ATgetType(h_119) == AT_LIST) && !(ATisEmpty(h_119))))
            {
              c_119 = ATgetFirst((ATermList) h_119);
              d_119 = (ATerm) ATgetNext((ATermList) h_119);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(c_119), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(d_119)));
            }
          else
            {
              if(((ATgetType(h_119) == AT_LIST) && ATisEmpty(h_119)))
                {
                  t = term_n_39;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(g_119, sym_Choices_1))
            {
              h_119 = ATgetArgument(g_119, 0);
              v_118 :
              if(((ATgetType(h_119) == AT_LIST) && !(ATisEmpty(h_119))))
                {
                  c_119 = ATgetFirst((ATermList) h_119);
                  d_119 = (ATerm) ATgetNext((ATermList) h_119);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(c_119), (ATerm) ATmakeAppl(sym_Choices_1, not_null(d_119)));
                }
              else
                {
                  if(((ATgetType(h_119) == AT_LIST) && ATisEmpty(h_119)))
                    {
                      t = term_n_39;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(g_119, sym_Seqs_1))
                {
                  h_119 = ATgetArgument(g_119, 0);
                  b_119 :
                  if(((ATgetType(h_119) == AT_LIST) && !(ATisEmpty(h_119))))
                    {
                      c_119 = ATgetFirst((ATermList) h_119);
                      d_119 = (ATerm) ATgetNext((ATermList) h_119);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_119), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(d_119)));
                    }
                  else
                    {
                      if(((ATgetType(h_119) == AT_LIST) && ATisEmpty(h_119)))
                        {
                          t = term_o_18;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(g_119, sym_RDefT_4))
                    {
                      h_119 = ATgetArgument(g_119, 0);
                      i_119 = ATgetArgument(g_119, 1);
                      f_119 = ATgetArgument(g_119, 2);
                      e_119 = ATgetArgument(g_119, 3);
                      {
                        ATerm w_119 = NULL,x_119 = NULL;
                        ATerm y_119 = NULL;
                        t = not_null(i_119);
                        {
                          ATerm a_120 = NULL;
                          t = map1_1(t, MkFunType_0);
                          {
                            y_119 = t;
                            {
                              if(((w_119 != NULL) && (w_119 != y_119)))
                                _fail(y_119);
                              else
                                w_119 = y_119;
                              {
                                t = not_null(f_119);
                                {
                                  ATerm y_6 (ATerm t)
                                  {
                                    t = try_1(t, MkConstType_0);
                                    return(t);
                                  }
                                  t = map1_1(t, y_6);
                                  {
                                    a_120 = t;
                                    if(((x_119 != NULL) && (x_119 != a_120)))
                                      _fail(a_120);
                                    else
                                      x_119 = a_120;
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(h_119), not_null(w_119), not_null(x_119), not_null(e_119));
                      }
                    }
                  else
                    {
                      if(match_cons(g_119, sym_SDefT_4))
                        {
                          h_119 = ATgetArgument(g_119, 0);
                          i_119 = ATgetArgument(g_119, 1);
                          f_119 = ATgetArgument(g_119, 2);
                          e_119 = ATgetArgument(g_119, 3);
                          {
                            ATerm o_39 = t;
                            int p_39 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm f_120 = NULL,g_120 = NULL;
                                ATerm h_120 = NULL;
                                t = not_null(f_119);
                                {
                                  ATerm i_120 = NULL;
                                  t = map1_1(t, MkConstType_0);
                                  {
                                    h_120 = t;
                                    {
                                      if(((f_120 != NULL) && (f_120 != h_120)))
                                        _fail(h_120);
                                      else
                                        f_120 = h_120;
                                      {
                                        t = not_null(i_119);
                                        {
                                          ATerm z_6 (ATerm t)
                                          {
                                            t = try_1(t, MkFunType_0);
                                            return(t);
                                          }
                                          t = map_1(t, z_6);
                                          {
                                            i_120 = t;
                                            if(((g_120 != NULL) && (g_120 != i_120)))
                                              _fail(i_120);
                                            else
                                              g_120 = i_120;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(h_119), not_null(g_120), not_null(f_120), not_null(e_119));
                                ;
                                LocalPopChoice(p_39);
                              }
                            else
                              {
                                t = o_39;
                                {
                                  ATerm p_120 = NULL,q_120 = NULL;
                                  ATerm r_120 = NULL;
                                  t = not_null(i_119);
                                  {
                                    ATerm s_120 = NULL;
                                    t = map1_1(t, MkFunType_0);
                                    {
                                      r_120 = t;
                                      {
                                        if(((p_120 != NULL) && (p_120 != r_120)))
                                          _fail(r_120);
                                        else
                                          p_120 = r_120;
                                        {
                                          t = not_null(f_119);
                                          {
                                            ATerm a_7 (ATerm t)
                                            {
                                              t = try_1(t, MkConstType_0);
                                              return(t);
                                            }
                                            t = map_1(t, a_7);
                                            {
                                              s_120 = t;
                                              if(((q_120 != NULL) && (q_120 != s_120)))
                                                _fail(s_120);
                                              else
                                                q_120 = s_120;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(h_119), not_null(p_120), not_null(q_120), not_null(e_119));
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(g_119, sym_InfixApp_3))
                            {
                              h_119 = ATgetArgument(g_119, 0);
                              i_119 = ATgetArgument(g_119, 1);
                              f_119 = ATgetArgument(g_119, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, not_null(i_119), (ATerm) ATmakeAppl(sym_Op_2, term_c_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_119)), not_null(h_119))));
                            }
                          else
                            {
                              if(match_cons(g_119, sym_BAM_3))
                                {
                                  h_119 = ATgetArgument(g_119, 0);
                                  i_119 = ATgetArgument(g_119, 1);
                                  f_119 = ATgetArgument(g_119, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(f_119))), not_null(h_119)), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_119))));
                                }
                              else
                                {
                                  if(match_cons(g_119, sym_AM_2))
                                    {
                                      h_119 = ATgetArgument(g_119, 0);
                                      i_119 = ATgetArgument(g_119, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_119), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_119)));
                                    }
                                  else
                                    {
                                      if(match_cons(g_119, sym_MA_2))
                                        {
                                          h_119 = ATgetArgument(g_119, 0);
                                          i_119 = ATgetArgument(g_119, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(h_119)), not_null(i_119));
                                        }
                                      else
                                        {
                                          if(match_cons(g_119, sym_BA_2))
                                            {
                                              h_119 = ATgetArgument(g_119, 0);
                                              i_119 = ATgetArgument(g_119, 1);
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_119)), not_null(h_119));
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
  ATerm f_122 = NULL,g_122 = NULL,h_122 = NULL,j_122 = NULL,k_122 = NULL,l_122 = NULL,m_122 = NULL;
  f_122 = t;
  c_122 :
  if(match_cons(f_122, sym__2))
    {
      g_122 = ATgetArgument(f_122, 0);
      k_122 = ATgetArgument(f_122, 1);
      d_122 :
      if(match_cons(g_122, sym__2))
        {
          h_122 = ATgetArgument(g_122, 0);
          j_122 = ATgetArgument(g_122, 1);
          e_122 :
          if(match_cons(k_122, sym__2))
            {
              l_122 = ATgetArgument(k_122, 0);
              m_122 = ATgetArgument(k_122, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_122)), not_null(h_122)), (ATerm) ATinsert(CheckATermList(not_null(m_122)), not_null(j_122)));
            }
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
  ATerm z_122 = NULL,a_123 = NULL,b_123 = NULL;
  z_122 = t;
  y_122 :
  if(((ATgetType(z_122) == AT_LIST) && !(ATisEmpty(z_122))))
    {
      a_123 = ATgetFirst((ATermList) z_122);
      b_123 = (ATerm) ATgetNext((ATermList) z_122);
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_123), not_null(b_123));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm h_123 = NULL;
  h_123 = t;
  g_123 :
  if(((ATgetType(h_123) == AT_LIST) && ATisEmpty(h_123)))
    {
      t = term_q_39;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm i_115 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, i_115);
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
  ATerm u_123 = NULL,v_123 = NULL;
  u_123 = t;
  t_123 :
  if(match_cons(u_123, sym_Var_1))
    {
      v_123 = ATgetArgument(u_123, 0);
      {
        ATerm y_123 = NULL,z_123 = NULL;
        t = not_null(u_123);
        {
          ATerm b_7 (ATerm t)
          {
            t = term_r_39;
            return(t);
          }
          t = rewrite_1(t, b_7);
          {
            y_123 = t;
            r_123 :
            if(match_cons(y_123, sym_Defined_1))
              {
                z_123 = ATgetArgument(y_123, 0);
                s_123 :
                if(!(match_string(z_123, "l_0")))
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
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_123));
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
  ATerm t_39;
  t_39 = t;
  {
    ATerm c_124 = NULL;
    ATerm d_124 = NULL;
    d_124 = t;
    if(((c_124 != NULL) && (c_124 != d_124)))
      _fail(d_124);
    else
      c_124 = d_124;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_27, not_null(c_124));
      t = printnl_0(t);
    }
  }
  t = t_39;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm v_39;
  v_39 = t;
  {
    t = error_0(t);
    {
      t = term_c_28;
      t = exit_0(t);
    }
  }
  t = v_39;
  return(t);
}
ATerm dummify_0 (ATerm t)
{
  ATerm c_7 (ATerm t)
  {
    ATerm p_124 = NULL,q_124 = NULL,r_124 = NULL,s_124 = NULL;
    p_124 = t;
    o_124 :
    if(match_cons(p_124, sym_Var_1))
      {
        q_124 = ATgetArgument(p_124, 0);
        {
          ATerm y_39 = t;
          if((PushChoice() == 0))
            {
              t = ContextVar_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_39;
            }
          t = term_a_40;
        }
      }
    else
      {
        if(match_cons(p_124, sym_Wld_0))
          {
            t = term_a_40;
          }
        else
          {
            if(match_cons(p_124, sym_RootApp_1))
              {
                q_124 = ATgetArgument(p_124, 0);
                {
                  ATerm w_124 = NULL;
                  ATerm z_124 = NULL;
                  t = not_null(q_124);
                  {
                    t = tvars_0(t);
                    {
                      ATerm d_7 (ATerm t)
                      {
                        ATerm x_124 = NULL;
                        ATerm y_124 = NULL;
                        y_124 = t;
                        if(((x_124 != NULL) && (x_124 != y_124)))
                          _fail(y_124);
                        else
                          x_124 = y_124;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_124));
                        return(t);
                      }
                      t = map_1(t, d_7);
                      {
                        z_124 = t;
                        if(((w_124 != NULL) && (w_124 != z_124)))
                          _fail(z_124);
                        else
                          w_124 = z_124;
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_b_40, not_null(w_124));
                }
              }
            else
              {
                if(match_cons(p_124, sym_App_2))
                  {
                    q_124 = ATgetArgument(p_124, 0);
                    r_124 = ATgetArgument(p_124, 1);
                    {
                      ATerm c_125 = NULL;
                      ATerm f_125 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_124), not_null(r_124));
                      {
                        t = tvars_0(t);
                        {
                          ATerm e_7 (ATerm t)
                          {
                            ATerm d_125 = NULL;
                            ATerm e_125 = NULL;
                            e_125 = t;
                            if(((d_125 != NULL) && (d_125 != e_125)))
                              _fail(e_125);
                            else
                              d_125 = e_125;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_125));
                            return(t);
                          }
                          t = map_1(t, e_7);
                          {
                            f_125 = t;
                            if(((c_125 != NULL) && (c_125 != f_125)))
                              _fail(f_125);
                            else
                              c_125 = f_125;
                          }
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_b_40, not_null(c_125));
                    }
                  }
                else
                  {
                    if(match_cons(p_124, sym_Con_3))
                      {
                        q_124 = ATgetArgument(p_124, 0);
                        r_124 = ATgetArgument(p_124, 1);
                        s_124 = ATgetArgument(p_124, 2);
                        {
                          t = (ATerm) ATinsert(ATempty, term_c_40);
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
  t = alltd_1(t, c_7);
  return(t);
}
ATerm SplitDynamicRule_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm r_126 = NULL,s_126 = NULL,t_126 = NULL,u_126 = NULL,v_126 = NULL,w_126 = NULL,x_126 = NULL,y_126 = NULL,z_126 = NULL,a_127 = NULL;
  ATerm c_129 (ATerm t)
  {
    ATerm v_127 = NULL,w_127 = NULL,x_127 = NULL,y_127 = NULL,z_127 = NULL,a_128 = NULL,b_128 = NULL,v_128 = NULL;
    ATerm d_40;
    d_40 = t;
    {
      ATerm c_128 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_126), term_f_40);
      {
        ATerm g_40 = t;
        if((PushChoice() == 0))
          {
            t = eq_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_40;
          }
        {
          ATerm d_128 = NULL;
          t = new_0(t);
          {
            c_128 = t;
            {
              if(((v_127 != NULL) && (v_127 != c_128)))
                _fail(c_128);
              else
                v_127 = c_128;
              {
                t = not_null(y_126);
                {
                  ATerm f_128 = NULL;
                  t = dummify_0(t);
                  {
                    d_128 = t;
                    {
                      if(((x_127 != NULL) && (x_127 != d_128)))
                        _fail(d_128);
                      else
                        x_127 = d_128;
                      {
                        ATerm i_128 = NULL;
                        ATerm f_7 (ATerm t)
                        {
                          ATerm e_128 = NULL;
                          e_128 = t;
                          {
                            if(((y_126 != NULL) && (y_126 != e_128)))
                              _fail(e_128);
                            else
                              y_126 = e_128;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_127));
                          }
                          return(t);
                        }
                        t = try_1(t, f_7);
                        {
                          f_128 = t;
                          {
                            if(((w_127 != NULL) && (w_127 != f_128)))
                              _fail(f_128);
                            else
                              w_127 = f_128;
                            {
                              t = not_null(x_127);
                              {
                                t = tvars_0(t);
                                {
                                  ATerm m_128 = NULL;
                                  ATerm g_7 (ATerm t)
                                  {
                                    ATerm g_128 = NULL;
                                    ATerm h_128 = NULL;
                                    h_128 = t;
                                    if(((g_128 != NULL) && (g_128 != h_128)))
                                      _fail(h_128);
                                    else
                                      g_128 = h_128;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_128));
                                    return(t);
                                  }
                                  t = map_1(t, g_7);
                                  {
                                    i_128 = t;
                                    {
                                      if(((z_127 != NULL) && (z_127 != i_128)))
                                        _fail(i_128);
                                      else
                                        z_127 = i_128;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_126), not_null(a_127));
                                        {
                                          t = tvars_0(t);
                                          {
                                            ATerm o_128 = NULL;
                                            ATerm h_7 (ATerm t)
                                            {
                                              ATerm k_128 = NULL;
                                              ATerm l_128 = NULL;
                                              l_128 = t;
                                              if(((k_128 != NULL) && (k_128 != l_128)))
                                                _fail(l_128);
                                              else
                                                k_128 = l_128;
                                              {
                                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_128));
                                                t = ContextVar_0(t);
                                              }
                                              return(t);
                                            }
                                            t = filter_1(t, h_7);
                                            {
                                              m_128 = t;
                                              {
                                                if(((y_127 != NULL) && (y_127 != m_128)))
                                                  _fail(m_128);
                                                else
                                                  y_127 = m_128;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_127), not_null(z_127));
                                                  {
                                                    ATerm p_128 = NULL;
                                                    t = diff_0(t);
                                                    {
                                                      o_128 = t;
                                                      {
                                                        if(((a_128 != NULL) && (a_128 != o_128)))
                                                          _fail(o_128);
                                                        else
                                                          a_128 = o_128;
                                                        {
                                                          t = new_0(t);
                                                          {
                                                            p_128 = t;
                                                            if(((b_128 != NULL) && (b_128 != p_128)))
                                                              _fail(p_128);
                                                            else
                                                              b_128 = p_128;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = d_40;
    {
      ATerm w_128 = NULL;
      t = not_null(u_126);
      {
        t = q_0(t);
        {
          w_128 = t;
          if(((v_128 != NULL) && (v_128 != w_128)))
            _fail(w_128);
          else
            v_128 = w_128;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(v_128), (ATerm) ATmakeAppl(sym_Op_2, term_h_40, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_40, (ATerm) ATinsert(CheckATermList(not_null(a_128)), (ATerm) ATmakeAppl(sym_Str_1, not_null(b_128))))), not_null(x_127))))), (ATerm) ATmakeAppl(sym_RDefT_4, not_null(u_126), not_null(v_126), not_null(w_126), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_127)), not_null(y_126)), not_null(z_126), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_k_40, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(u_126))))), not_null(w_127)), (ATerm) ATmakeAppl(sym_Op_2, term_i_40, (ATerm) ATinsert(CheckATermList(not_null(a_128)), (ATerm) ATmakeAppl(sym_Str_1, not_null(b_128))))), not_null(a_127)))));
    }
    return(t);
  }
  t_126 = t;
  i_126 :
  if(match_cons(t_126, sym_RDefT_4))
    {
      u_126 = ATgetArgument(t_126, 0);
      v_126 = ATgetArgument(t_126, 1);
      w_126 = ATgetArgument(t_126, 2);
      x_126 = ATgetArgument(t_126, 3);
      j_126 :
      if(match_cons(x_126, sym_Rule_3))
        {
          y_126 = ATgetArgument(x_126, 0);
          z_126 = ATgetArgument(x_126, 1);
          a_127 = ATgetArgument(x_126, 2);
          n_126 :
          if(match_cons(z_126, sym_Op_2))
            {
              r_126 = ATgetArgument(z_126, 0);
              s_126 = ATgetArgument(z_126, 1);
              o_126 :
              if(((ATgetType(s_126) == AT_LIST) && ATisEmpty(s_126)))
                {
                  p_126 :
                  if(match_string(r_126, "Undefined"))
                    {
                      ATerm l_40 = t;
                      int t_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_127 = NULL,h_127 = NULL,i_127 = NULL,n_127 = NULL;
                          ATerm u_40;
                          u_40 = t;
                          {
                            ATerm j_127 = NULL;
                            ATerm k_127 = NULL;
                            t = new_0(t);
                            {
                              j_127 = t;
                              {
                                if(((h_127 != NULL) && (h_127 != j_127)))
                                  _fail(j_127);
                                else
                                  h_127 = j_127;
                                {
                                  t = not_null(y_126);
                                  {
                                    ATerm m_127 = NULL;
                                    t = dummify_0(t);
                                    {
                                      k_127 = t;
                                      {
                                        if(((g_127 != NULL) && (g_127 != k_127)))
                                          _fail(k_127);
                                        else
                                          g_127 = k_127;
                                        {
                                          ATerm i_7 (ATerm t)
                                          {
                                            ATerm l_127 = NULL;
                                            l_127 = t;
                                            {
                                              if(((y_126 != NULL) && (y_126 != l_127)))
                                                _fail(l_127);
                                              else
                                                y_126 = l_127;
                                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_127));
                                            }
                                            return(t);
                                          }
                                          t = try_1(t, i_7);
                                          {
                                            m_127 = t;
                                            if(((i_127 != NULL) && (i_127 != m_127)))
                                              _fail(m_127);
                                            else
                                              i_127 = m_127;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          t = u_40;
                          {
                            ATerm o_127 = NULL;
                            t = not_null(u_126);
                            {
                              t = q_0(t);
                              {
                                o_127 = t;
                                if(((n_127 != NULL) && (n_127 != o_127)))
                                  _fail(o_127);
                                else
                                  n_127 = o_127;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(n_127), (ATerm) ATmakeAppl(sym_Op_2, term_h_40, (ATerm) ATinsert(ATinsert(ATempty, term_f_40), not_null(g_127))))), (ATerm) ATmakeAppl(sym_RDefT_4, not_null(u_126), not_null(v_126), not_null(w_126), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_127)), not_null(y_126)), term_f_40, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_k_40, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(u_126))))), not_null(i_127)), term_f_40), (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_127), term_n_39)))));
                          }
                          ;
                          LocalPopChoice(t_40);
                        }
                      else
                        {
                          t = l_40;
                          t = c_129(t);
                        }
                    }
                  else
                    {
                      t = c_129(t);
                    }
                }
              else
                {
                  q_126 :
                  t = c_129(t);
                }
            }
          else
            {
              t = c_129(t);
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
  ATerm d_130 = NULL,e_130 = NULL;
  d_130 = t;
  c_130 :
  if(match_cons(d_130, sym_OverrideDynamicRules_1))
    {
      e_130 = ATgetArgument(d_130, 0);
      {
        t = not_null(e_130);
        {
          ATerm j_7 (ATerm t)
          {
            ATerm k_7 (ATerm t)
            {
              ATerm g_130 = NULL;
              ATerm i_130 = NULL;
              i_130 = t;
              if(((g_130 != NULL) && (g_130 != i_130)))
                _fail(i_130);
              else
                g_130 = i_130;
              t = (ATerm) ATmakeAppl(sym_Call_2, term_w_40, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(g_130)))));
              return(t);
            }
            t = SplitDynamicRule_1(t, k_7);
            return(t);
          }
          t = map_1(t, j_7);
          t = unzip_0(t);
        }
      }
    }
  else
    {
      if(match_cons(d_130, sym_DynamicRules_1))
        {
          e_130 = ATgetArgument(d_130, 0);
          {
            t = not_null(e_130);
            {
              ATerm l_7 (ATerm t)
              {
                ATerm m_7 (ATerm t)
                {
                  ATerm k_130 = NULL;
                  ATerm l_130 = NULL;
                  l_130 = t;
                  if(((k_130 != NULL) && (k_130 != l_130)))
                    _fail(l_130);
                  else
                    k_130 = l_130;
                  t = (ATerm) ATmakeAppl(sym_Call_2, term_y_40, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(k_130)))));
                  return(t);
                }
                t = SplitDynamicRule_1(t, m_7);
                return(t);
              }
              t = map_1(t, l_7);
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
ATerm split_under_scope_1 (ATerm t, ATerm g_134 (ATerm))
{
  ATerm t_130 = NULL,u_130 = NULL,v_130 = NULL;
  t_130 = t;
  s_130 :
  if(match_cons(t_130, sym_Scope_2))
    {
      u_130 = ATgetArgument(t_130, 0);
      v_130 = ATgetArgument(t_130, 1);
      {
        ATerm y_130 = NULL;
        ATerm n_7 (ATerm t)
        {
          t = term_r_39;
          return(t);
        }
        ATerm o_7 (ATerm t)
        {
          ATerm z_130 = NULL;
          t = not_null(u_130);
          {
            t = DeclareContextVars_0(t);
            {
              t = not_null(v_130);
              {
                t = g_134(t);
                {
                  z_130 = t;
                  if(((y_130 != NULL) && (y_130 != z_130)))
                    _fail(z_130);
                  else
                    y_130 = z_130;
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, n_7, o_7);
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_130), not_null(y_130));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm i_108 (ATerm))
{
  ATerm c_131 (ATerm t)
  {
    ATerm z_40 = t;
    int a_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_108(t);
        ;
        LocalPopChoice(a_41);
      }
    else
      {
        t = z_40;
        t = _one(t, c_131);
      }
    return(t);
  }
  t = c_131(t);
  return(t);
}
ATerm split_dynamic_rule_1 (ATerm t, ATerm e_134 (ATerm))
{
  ATerm d_131 (ATerm t)
  {
    ATerm p_7 (ATerm t)
    {
      ATerm b_41 = t;
      int c_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_134(t);
          ;
          LocalPopChoice(c_41);
        }
      else
        {
          t = b_41;
          t = split_under_scope_1(t, d_131);
        }
      return(t);
    }
    t = oncetd_1(t, p_7);
    return(t);
  }
  t = d_131(t);
  return(t);
}
ATerm DeclareContextVars_0 (ATerm t)
{
  ATerm q_7 (ATerm t)
  {
    ATerm f_131 = NULL;
    f_131 = t;
    {
      ATerm d_41;
      d_41 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_131)), term_h_41);
        {
          ATerm r_7 (ATerm t)
          {
            t = term_r_39;
            return(t);
          }
          t = assert_1(t, r_7);
        }
      }
      t = d_41;
    }
    return(t);
  }
  t = map_1(t, q_7);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm o_132 = NULL,p_132 = NULL,s_132 = NULL;
  o_132 = t;
  n_132 :
  if(((ATgetType(o_132) == AT_LIST) && !(ATisEmpty(o_132))))
    {
      p_132 = ATgetFirst((ATermList) o_132);
      s_132 = (ATerm) ATgetNext((ATermList) o_132);
      {
        ATerm w_132 = NULL,x_132 = NULL,y_132 = NULL;
        ATerm s_7 (ATerm t)
        {
          t = term_r_39;
          return(t);
        }
        ATerm t_7 (ATerm t)
        {
          ATerm c_133 = NULL;
          t = not_null(p_132);
          {
            t = tvars_0(t);
            {
              t = DeclareContextVars_0(t);
              {
                t = not_null(p_132);
                {
                  ATerm u_7 (ATerm t)
                  {
                    ATerm z_132 = NULL,a_133 = NULL,b_133 = NULL;
                    t = split_dynamic_rules_0(t);
                    {
                      z_132 = t;
                      q_131 :
                      if(match_cons(z_132, sym__2))
                        {
                          a_133 = ATgetArgument(z_132, 0);
                          b_133 = ATgetArgument(z_132, 1);
                          {
                            if(((x_132 != NULL) && (x_132 != a_133)))
                              _fail(a_133);
                            else
                              x_132 = a_133;
                            {
                              if(((w_132 != NULL) && (w_132 != b_133)))
                                _fail(b_133);
                              else
                                w_132 = b_133;
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(x_132));
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
                  t = split_dynamic_rule_1(t, u_7);
                  {
                    c_133 = t;
                    if(((y_132 != NULL) && (y_132 != c_133)))
                      _fail(c_133);
                    else
                      y_132 = c_133;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, s_7, t_7);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_132)), not_null(y_132)), not_null(s_132));
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
ATerm listtd_1 (ATerm t, ATerm e_114 (ATerm))
{
  ATerm g_133 (ATerm t)
  {
    t = e_114(t);
    {
      ATerm n_41 = t;
      int o_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          ;
          LocalPopChoice(o_41);
        }
      else
        {
          t = n_41;
          t = Cons_2(t, _id, g_133);
        }
    }
    return(t);
  }
  t = g_133(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm v_7 (ATerm t)
  {
    t = repeat_1(t, lift_dynamic_rule_0);
    return(t);
  }
  t = listtd_1(t, v_7);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm l_133 = NULL,m_133 = NULL,n_133 = NULL,o_133 = NULL,p_133 = NULL;
  n_133 = t;
  j_133 :
  if(match_cons(n_133, sym_DynRuleScope_2))
    {
      o_133 = ATgetArgument(n_133, 0);
      p_133 = ATgetArgument(n_133, 1);
      k_133 :
      if(((ATgetType(o_133) == AT_LIST) && !(ATisEmpty(o_133))))
        {
          l_133 = ATgetFirst((ATermList) o_133);
          m_133 = (ATerm) ATgetNext((ATermList) o_133);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_q_41, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(m_133), not_null(p_133))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(l_133)))));
        }
      else
        {
          if(((ATgetType(o_133) == AT_LIST) && ATisEmpty(o_133)))
            {
              t = not_null(p_133);
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
  ATerm w_7 (ATerm t)
  {
    t = try_1(t, DefDynamicRuleScope_0);
    return(t);
  }
  t = topdown_1(t, w_7);
  return(t);
}
ATerm LiftDynamicRules_0 (ATerm t)
{
  ATerm x_7 (ATerm t)
  {
    ATerm y_7 (ATerm t)
    {
      ATerm z_7 (ATerm t)
      {
        ATerm a_8 (ATerm t)
        {
          ATerm b_8 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, b_8);
          return(t);
        }
        t = Cons_2(t, a_8, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, z_7);
      return(t);
    }
    t = Cons_2(t, _id, y_7);
    return(t);
  }
  t = Specification_1(t, x_7);
  return(t);
}
ATerm DefScopeDefault_0 (ATerm t)
{
  ATerm d_134 = NULL,h_134 = NULL;
  d_134 = t;
  c_134 :
  if(match_cons(d_134, sym_ScopeDefault_1))
    {
      h_134 = ATgetArgument(d_134, 0);
      {
        ATerm n_134 = NULL;
        ATerm o_134 = NULL;
        t = not_null(h_134);
        {
          t = tvars_0(t);
          {
            o_134 = t;
            if(((n_134 != NULL) && (n_134 != o_134)))
              _fail(o_134);
            else
              n_134 = o_134;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_134), not_null(h_134));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm f_95 (ATerm))
{
  ATerm w_134 = NULL,x_134 = NULL;
  w_134 = t;
  v_134 :
  if(match_cons(w_134, sym_DynamicRules_1))
    {
      x_134 = ATgetArgument(w_134, 0);
      {
        ATerm a_135 = NULL,c_135 = NULL;
        ATerm b_135 = NULL;
        t = SSLgetAnnotations(not_null(w_134));
        {
          b_135 = t;
          if(((a_135 != NULL) && (a_135 != b_135)))
            _fail(b_135);
          else
            a_135 = b_135;
        }
        {
          t = not_null(x_134);
          {
            ATerm e_135 = NULL;
            t = f_95(t);
            {
              c_135 = t;
              {
                ATerm n_135 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(c_135)), not_null(a_135));
                {
                  n_135 = t;
                  if(((e_135 != NULL) && (e_135 != n_135)))
                    _fail(n_135);
                  else
                    e_135 = n_135;
                }
                t = not_null(e_135);
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
ATerm Scope_2 (ATerm t, ATerm i_96 (ATerm), ATerm j_96 (ATerm))
{
  ATerm i_136 = NULL,j_136 = NULL,k_136 = NULL;
  i_136 = t;
  h_136 :
  if(match_cons(i_136, sym_Scope_2))
    {
      j_136 = ATgetArgument(i_136, 0);
      k_136 = ATgetArgument(i_136, 1);
      {
        ATerm o_136 = NULL,q_136 = NULL;
        ATerm p_136 = NULL;
        t = SSLgetAnnotations(not_null(i_136));
        {
          p_136 = t;
          if(((o_136 != NULL) && (o_136 != p_136)))
            _fail(p_136);
          else
            o_136 = p_136;
        }
        {
          t = not_null(j_136);
          {
            ATerm s_136 = NULL;
            t = i_96(t);
            {
              q_136 = t;
              {
                t = not_null(k_136);
                {
                  ATerm u_136 = NULL;
                  t = j_96(t);
                  {
                    s_136 = t;
                    {
                      ATerm v_136 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(q_136), not_null(s_136)), not_null(o_136));
                      {
                        v_136 = t;
                        if(((u_136 != NULL) && (u_136 != v_136)))
                          _fail(v_136);
                        else
                          u_136 = v_136;
                      }
                      t = not_null(u_136);
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
ATerm tboundin_3 (ATerm t, ATerm g_135 (ATerm), ATerm h_135 (ATerm), ATerm i_135 (ATerm))
{
  ATerm r_41 = t;
  int y_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, i_135, g_135);
      ;
      LocalPopChoice(y_41);
    }
  else
    {
      t = r_41;
      {
        ATerm z_41 = t;
        int a_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4(t, i_135, i_135, i_135, g_135);
            ;
            LocalPopChoice(a_42);
          }
        else
          {
            t = z_41;
            {
              ATerm b_42 = t;
              int c_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4(t, i_135, i_135, i_135, g_135);
                  ;
                  LocalPopChoice(c_42);
                }
              else
                {
                  t = b_42;
                  t = DynamicRules_1(t, g_135);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0 (ATerm t)
{
  ATerm d_137 = NULL,e_137 = NULL,f_137 = NULL,g_137 = NULL,h_137 = NULL;
  d_137 = t;
  c_137 :
  if(match_cons(d_137, sym_RDefT_4))
    {
      e_137 = ATgetArgument(d_137, 0);
      f_137 = ATgetArgument(d_137, 1);
      g_137 = ATgetArgument(d_137, 2);
      h_137 = ATgetArgument(d_137, 3);
      {
        t = not_null(g_137);
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
  ATerm c_8 (ATerm t)
  {
    ATerm q_137 = NULL,r_137 = NULL,s_137 = NULL;
    r_137 = t;
    p_137 :
    if(match_cons(r_137, sym_VarDec_2))
      {
        s_137 = ATgetArgument(r_137, 0);
        q_137 = ATgetArgument(r_137, 1);
        t = not_null(s_137);
      }
    else
      {
        if(match_cons(r_137, sym_DefaultVarDec_1))
          {
            s_137 = ATgetArgument(r_137, 0);
            t = not_null(s_137);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1(t, c_8);
  return(t);
}
ATerm Bind6_0 (ATerm t)
{
  ATerm z_137 = NULL,a_138 = NULL,b_138 = NULL,c_138 = NULL,d_138 = NULL;
  z_137 = t;
  y_137 :
  if(match_cons(z_137, sym_SDefT_4))
    {
      a_138 = ATgetArgument(z_137, 0);
      b_138 = ATgetArgument(z_137, 1);
      c_138 = ATgetArgument(z_137, 2);
      d_138 = ATgetArgument(z_137, 3);
      {
        t = not_null(c_138);
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
  ATerm l_138 = NULL,m_138 = NULL;
  l_138 = t;
  k_138 :
  if(match_cons(l_138, sym_DynamicRules_1))
    {
      m_138 = ATgetArgument(l_138, 0);
      {
        t = not_null(m_138);
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
  ATerm t_138 = NULL,u_138 = NULL,v_138 = NULL,w_138 = NULL,x_138 = NULL,y_138 = NULL;
  w_138 = t;
  r_138 :
  if(match_cons(w_138, sym_LRule_1))
    {
      x_138 = ATgetArgument(w_138, 0);
      s_138 :
      if(match_cons(x_138, sym_Rule_3))
        {
          t_138 = ATgetArgument(x_138, 0);
          u_138 = ATgetArgument(x_138, 1);
          v_138 = ATgetArgument(x_138, 2);
          {
            t = not_null(t_138);
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
      if(match_cons(w_138, sym_Scope_2))
        {
          x_138 = ATgetArgument(w_138, 0);
          y_138 = ATgetArgument(w_138, 1);
          t = not_null(x_138);
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
  ATerm i_139 = NULL,j_139 = NULL;
  i_139 = t;
  h_139 :
  if(match_cons(i_139, sym_Var_1))
    {
      j_139 = ATgetArgument(i_139, 0);
      t = (ATerm) ATinsert(ATempty, not_null(j_139));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm y_116 (ATerm))
{
  ATerm o_139 = NULL,p_139 = NULL,q_139 = NULL;
  o_139 = t;
  n_139 :
  if(match_cons(o_139, sym__2))
    {
      p_139 = ATgetArgument(o_139, 0);
      q_139 = ATgetArgument(o_139, 1);
      {
        t = not_null(p_139);
        {
          ATerm u_139 (ATerm t)
          {
            ATerm d_42 = t;
            int e_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(q_139);
                ;
                LocalPopChoice(e_42);
              }
            else
              {
                t = d_42;
                {
                  ATerm f_42 = t;
                  int h_42 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_8 (ATerm t)
                      {
                        t = not_null(q_139);
                        return(t);
                      }
                      t = HdMember_p__2(t, y_116, d_8);
                      t = u_139(t);
                      ;
                      LocalPopChoice(h_42);
                    }
                  else
                    {
                      t = f_42;
                      t = Cons_2(t, _id, u_139);
                    }
                }
              }
            return(t);
          }
          t = u_139(t);
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
ATerm crush_3 (ATerm t, ATerm r_122 (ATerm), ATerm s_122 (ATerm), ATerm t_122 (ATerm))
{
  ATerm z_139 = NULL;
  ATerm b_140 = NULL;
  z_139 = t;
  {
    ATerm c_140 = NULL;
    ATerm e_140 = NULL,f_140 = NULL,g_140 = NULL;
    t = not_null(z_139);
    {
      c_140 = t;
      {
        t = SSL_explode_term(not_null(c_140));
        {
          e_140 = t;
          y_139 :
          if(match_cons(e_140, sym__2))
            {
              f_140 = ATgetArgument(e_140, 0);
              g_140 = ATgetArgument(e_140, 1);
              if(((b_140 != NULL) && (b_140 != g_140)))
                _fail(g_140);
              else
                b_140 = g_140;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(b_140);
      t = foldr_3(t, r_122, s_122, t_122);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm m_140 = NULL,n_140 = NULL,o_140 = NULL;
  m_140 = t;
  l_140 :
  if(match_cons(m_140, sym__2))
    {
      n_140 = ATgetArgument(m_140, 0);
      o_140 = ATgetArgument(m_140, 1);
      if(((n_140 != NULL) && (n_140 != o_140)))
        _fail(o_140);
      else
        n_140 = o_140;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm c_117 (ATerm), ATerm d_117 (ATerm))
{
  ATerm u_140 = NULL,v_140 = NULL,w_140 = NULL;
  u_140 = t;
  t_140 :
  if(((ATgetType(u_140) == AT_LIST) && !(ATisEmpty(u_140))))
    {
      v_140 = ATgetFirst((ATermList) u_140);
      w_140 = (ATerm) ATgetNext((ATermList) u_140);
      {
        t = d_117(t);
        {
          ATerm e_8 (ATerm t)
          {
            ATerm z_140 = NULL;
            z_140 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_140), not_null(z_140));
              t = c_117(t);
            }
            return(t);
          }
          t = fetch_1(t, e_8);
        }
        t = not_null(w_140);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm u_116 (ATerm))
{
  ATerm f_141 = NULL,g_141 = NULL,h_141 = NULL;
  f_141 = t;
  e_141 :
  if(match_cons(f_141, sym__2))
    {
      g_141 = ATgetArgument(f_141, 0);
      h_141 = ATgetArgument(f_141, 1);
      {
        t = not_null(g_141);
        {
          ATerm l_141 (ATerm t)
          {
            ATerm i_42 = t;
            int j_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(j_42);
              }
            else
              {
                t = i_42;
                {
                  ATerm i_43 = t;
                  int j_43 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_8 (ATerm t)
                      {
                        t = not_null(h_141);
                        return(t);
                      }
                      t = HdMember_p__2(t, u_116, f_8);
                      t = l_141(t);
                      ;
                      LocalPopChoice(j_43);
                    }
                  else
                    {
                      t = i_43;
                      t = Cons_2(t, _id, l_141);
                    }
                }
              }
            return(t);
          }
          t = l_141(t);
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
  ATerm p_141 = NULL,q_141 = NULL,r_141 = NULL,s_141 = NULL,t_141 = NULL;
  p_141 = t;
  n_141 :
  if(match_cons(p_141, sym__2))
    {
      q_141 = ATgetArgument(p_141, 0);
      r_141 = ATgetArgument(p_141, 1);
      o_141 :
      if(((ATgetType(r_141) == AT_LIST) && !(ATisEmpty(r_141))))
        {
          s_141 = ATgetFirst((ATermList) r_141);
          t_141 = (ATerm) ATgetNext((ATermList) r_141);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_141)), not_null(s_141)), not_null(t_141));
        }
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
  ATerm a_142 = NULL,b_142 = NULL,c_142 = NULL;
  a_142 = t;
  z_141 :
  if(match_cons(a_142, sym__2))
    {
      b_142 = ATgetArgument(a_142, 0);
      c_142 = ATgetArgument(a_142, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_142)), not_null(b_142));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm k_142 = NULL,l_142 = NULL,m_142 = NULL,n_142 = NULL,o_142 = NULL,p_142 = NULL,q_142 = NULL;
  k_142 = t;
  h_142 :
  if(match_cons(k_142, sym__2))
    {
      l_142 = ATgetArgument(k_142, 0);
      o_142 = ATgetArgument(k_142, 1);
      i_142 :
      if(((ATgetType(l_142) == AT_LIST) && !(ATisEmpty(l_142))))
        {
          m_142 = ATgetFirst((ATermList) l_142);
          n_142 = (ATerm) ATgetNext((ATermList) l_142);
          j_142 :
          if(((ATgetType(o_142) == AT_LIST) && !(ATisEmpty(o_142))))
            {
              p_142 = ATgetFirst((ATermList) o_142);
              q_142 = (ATerm) ATgetNext((ATermList) o_142);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(m_142), not_null(p_142)), (ATerm) ATmakeAppl(sym__2, not_null(n_142), not_null(q_142)));
            }
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
  ATerm a_143 = NULL,b_143 = NULL,c_143 = NULL;
  a_143 = t;
  x_142 :
  if(match_cons(a_143, sym__2))
    {
      b_143 = ATgetArgument(a_143, 0);
      c_143 = ATgetArgument(a_143, 1);
      y_142 :
      if(((ATgetType(b_143) == AT_LIST) && ATisEmpty(b_143)))
        {
          z_142 :
          if(((ATgetType(c_143) == AT_LIST) && ATisEmpty(c_143)))
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
ATerm genzip_4 (ATerm t, ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm b_115 (ATerm))
{
  ATerm e_143 (ATerm t)
  {
    ATerm k_43 = t;
    int l_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_114(t);
        ;
        LocalPopChoice(l_43);
      }
    else
      {
        t = k_43;
        {
          t = z_114(t);
          {
            t = _2(t, b_115, e_143);
            t = a_115(t);
          }
        }
      }
    return(t);
  }
  t = e_143(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm d_115 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, d_115);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm p_143 = NULL,q_143 = NULL,r_143 = NULL,s_143 = NULL,t_143 = NULL;
  p_143 = t;
  n_143 :
  if(((ATgetType(p_143) == AT_LIST) && !(ATisEmpty(p_143))))
    {
      q_143 = ATgetFirst((ATermList) p_143);
      t_143 = (ATerm) ATgetNext((ATermList) p_143);
      o_143 :
      if(match_cons(q_143, sym__2))
        {
          r_143 = ATgetArgument(q_143, 0);
          s_143 = ATgetArgument(q_143, 1);
          {
            ATerm x_143 = NULL,y_143 = NULL,e_144 = NULL,k_144 = NULL;
            ATerm m_43;
            m_43 = t;
            {
              ATerm z_143 = NULL;
              ATerm b_144 = NULL,c_144 = NULL,d_144 = NULL;
              t = not_null(s_143);
              {
                z_143 = t;
                {
                  t = SSL_explode_term(not_null(z_143));
                  {
                    b_144 = t;
                    i_143 :
                    if(match_cons(b_144, sym__2))
                      {
                        c_144 = ATgetArgument(b_144, 0);
                        d_144 = ATgetArgument(b_144, 1);
                        {
                          if(((x_143 != NULL) && (x_143 != c_144)))
                            _fail(c_144);
                          else
                            x_143 = c_144;
                          if(((y_143 != NULL) && (y_143 != d_144)))
                            _fail(d_144);
                          else
                            y_143 = d_144;
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
            t = m_43;
            {
              ATerm n_43;
              n_43 = t;
              {
                ATerm f_144 = NULL;
                ATerm h_144 = NULL,i_144 = NULL,j_144 = NULL;
                t = not_null(r_143);
                {
                  f_144 = t;
                  {
                    t = SSL_explode_term(not_null(f_144));
                    {
                      h_144 = t;
                      l_143 :
                      if(match_cons(h_144, sym__2))
                        {
                          i_144 = ATgetArgument(h_144, 0);
                          j_144 = ATgetArgument(h_144, 1);
                          {
                            if(((x_143 != NULL) && (x_143 != i_144)))
                              _fail(i_144);
                            else
                              x_143 = i_144;
                            if(((e_144 != NULL) && (e_144 != j_144)))
                              _fail(j_144);
                            else
                              e_144 = j_144;
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
              t = n_43;
              {
                ATerm l_144 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_144), not_null(y_143));
                {
                  t = zip_1(t, _id);
                  {
                    l_144 = t;
                    if(((k_144 != NULL) && (k_144 != l_144)))
                      _fail(l_144);
                    else
                      k_144 = l_144;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_144), not_null(t_143));
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
  ATerm v_144 = NULL,w_144 = NULL,x_144 = NULL,y_144 = NULL,z_144 = NULL;
  v_144 = t;
  t_144 :
  if(((ATgetType(v_144) == AT_LIST) && !(ATisEmpty(v_144))))
    {
      w_144 = ATgetFirst((ATermList) v_144);
      z_144 = (ATerm) ATgetNext((ATermList) v_144);
      u_144 :
      if(match_cons(w_144, sym__2))
        {
          x_144 = ATgetArgument(w_144, 0);
          y_144 = ATgetArgument(w_144, 1);
          {
            ATerm b_145 = NULL;
            if(((x_144 != NULL) && (x_144 != y_144)))
              _fail(y_144);
            else
              x_144 = y_144;
            {
              if(((b_145 != NULL) && (b_145 != z_144)))
                _fail(z_144);
              else
                b_145 = z_144;
              t = not_null(b_145);
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
ATerm while_not_2 (ATerm t, ATerm v_106 (ATerm), ATerm w_106 (ATerm))
{
  ATerm d_145 (ATerm t)
  {
    ATerm o_43 = t;
    int p_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_106(t);
        ;
        LocalPopChoice(p_43);
      }
    else
      {
        t = o_43;
        {
          t = w_106(t);
          t = d_145(t);
        }
      }
    return(t);
  }
  t = d_145(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm a_107 (ATerm))
{
  t = y_106(t);
  t = while_not_2(t, z_106, a_107);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm q_43 = t;
  int s_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_8 (ATerm t)
      {
        ATerm f_145 = NULL;
        f_145 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(f_145));
        return(t);
      }
      ATerm h_8 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm i_8 (ATerm t)
      {
        ATerm w_43 = t;
        int x_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_8 (ATerm t)
            {
              ATerm y_43 = t;
              int z_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(z_43);
                }
              else
                {
                  t = y_43;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, j_8);
            ;
            LocalPopChoice(x_43);
          }
        else
          {
            t = w_43;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, g_8, h_8, i_8);
      ;
      LocalPopChoice(s_43);
    }
  else
    {
      t = q_43;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm v_133 (ATerm), ATerm w_133 (ATerm), ATerm x_133 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm l_145 (ATerm t)
  {
    ATerm b_44 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_133(t);
        ;
        LocalPopChoice(c_44);
      }
    else
      {
        t = b_44;
        {
          ATerm d_44 = t;
          int e_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_145 = NULL;
              ATerm f_44;
              f_44 = t;
              {
                ATerm k_145 = NULL;
                t = w_133(t);
                {
                  k_145 = t;
                  if(((j_145 != NULL) && (j_145 != k_145)))
                    _fail(k_145);
                  else
                    j_145 = k_145;
                }
              }
              t = f_44;
              {
                ATerm k_8 (ATerm t)
                {
                  ATerm m_8 (ATerm t)
                  {
                    t = not_null(j_145);
                    return(t);
                  }
                  t = split_2(t, l_145, m_8);
                  t = diff_0(t);
                  return(t);
                }
                ATerm l_8 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = x_133(t, k_8, l_145, l_8);
                {
                  ATerm n_8 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, n_8, union_0, _id);
                }
              }
              ;
              LocalPopChoice(e_44);
            }
          else
            {
              t = d_44;
              {
                ATerm o_8 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, o_8, union_0, l_145);
              }
            }
        }
      }
    return(t);
  }
  t = l_145(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm p_8 (ATerm t)
  {
    ATerm j_44 = t;
    int l_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(l_44);
      }
    else
      {
        t = j_44;
        {
          ATerm m_44 = t;
          int n_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0(t);
              ;
              LocalPopChoice(n_44);
            }
          else
            {
              t = m_44;
              {
                ATerm o_44 = t;
                int t_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0(t);
                    ;
                    LocalPopChoice(t_44);
                  }
                else
                  {
                    t = o_44;
                    t = Bind8_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, p_8, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm r_145 = NULL,s_145 = NULL,t_145 = NULL,u_145 = NULL,v_145 = NULL;
  r_145 = t;
  p_145 :
  if(match_cons(r_145, sym_LRule_1))
    {
      s_145 = ATgetArgument(r_145, 0);
      q_145 :
      if(match_cons(s_145, sym_Rule_3))
        {
          t_145 = ATgetArgument(s_145, 0);
          u_145 = ATgetArgument(s_145, 1);
          v_145 = ATgetArgument(s_145, 2);
          {
            ATerm z_145 = NULL;
            ATerm a_146 = NULL;
            t = not_null(t_145);
            {
              t = tvars_0(t);
              {
                a_146 = t;
                if(((z_145 != NULL) && (z_145 != a_146)))
                  _fail(a_146);
                else
                  z_145 = a_146;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_145), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_145), not_null(u_145), not_null(v_145))));
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
ATerm bottomup_1 (ATerm t, ATerm f_107 (ATerm))
{
  ATerm q_8 (ATerm t)
  {
    t = bottomup_1(t, f_107);
    return(t);
  }
  t = _all(t, q_8);
  t = f_107(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm r_8 (ATerm t)
  {
    ATerm s_8 (ATerm t)
    {
      ATerm u_44 = t;
      int v_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0(t);
          ;
          LocalPopChoice(v_44);
        }
      else
        {
          t = u_44;
          t = DefScopeDefault_0(t);
        }
      return(t);
    }
    t = try_1(t, s_8);
    return(t);
  }
  t = bottomup_1(t, r_8);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm f_146 = NULL,g_146 = NULL,h_146 = NULL;
  f_146 = t;
  e_146 :
  if(match_cons(f_146, sym__2))
    {
      g_146 = ATgetArgument(f_146, 0);
      h_146 = ATgetArgument(f_146, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_146), not_null(h_146));
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
ATerm rewrite_1 (ATerm t, ATerm q_123 (ATerm))
{
  ATerm n_146 = NULL;
  ATerm p_146 = NULL;
  n_146 = t;
  {
    ATerm q_146 = NULL;
    t = term_o_23;
    {
      t = q_123(t);
      {
        q_146 = t;
        if(((p_146 != NULL) && (p_146 != q_146)))
          _fail(q_146);
        else
          p_146 = q_146;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_146), not_null(n_146));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm VarToConst_0 (ATerm t)
{
  ATerm a_147 = NULL,b_147 = NULL;
  a_147 = t;
  z_146 :
  if(match_cons(a_147, sym_Var_1))
    {
      b_147 = ATgetArgument(a_147, 0);
      {
        ATerm w_44 = t;
        int x_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_147 = NULL,f_147 = NULL;
            t = not_null(a_147);
            {
              ATerm t_8 (ATerm t)
              {
                t = term_y_44;
                return(t);
              }
              t = rewrite_1(t, t_8);
              {
                e_147 = t;
                v_146 :
                if(match_cons(e_147, sym_Defined_1))
                  {
                    f_147 = ATgetArgument(e_147, 0);
                    w_146 :
                    if(!(match_string(f_147, "e_0")))
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
            t = (ATerm) ATmakeAppl(sym_Op_2, not_null(b_147), (ATerm) ATempty);
            ;
            LocalPopChoice(x_44);
          }
        else
          {
            t = w_44;
            {
              ATerm i_147 = NULL,j_147 = NULL;
              t = not_null(a_147);
              {
                ATerm u_8 (ATerm t)
                {
                  t = term_y_44;
                  return(t);
                }
                t = rewrite_1(t, u_8);
                {
                  i_147 = t;
                  x_146 :
                  if(match_cons(i_147, sym_Defined_1))
                    {
                      j_147 = ATgetArgument(i_147, 0);
                      y_146 :
                      if(!(match_string(j_147, "c_0")))
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
              t = (ATerm) ATmakeAppl(sym_Op_2, not_null(b_147), (ATerm) ATempty);
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
ATerm alltd_1 (ATerm t, ATerm w_108 (ATerm))
{
  ATerm m_147 (ATerm t)
  {
    ATerm z_44 = t;
    int a_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_108(t);
        ;
        LocalPopChoice(a_45);
      }
    else
      {
        t = z_44;
        t = _all(t, m_147);
      }
    return(t);
  }
  t = m_147(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm o_123 (ATerm))
{
  ATerm s_147 = NULL,t_147 = NULL,u_147 = NULL;
  s_147 = t;
  r_147 :
  if(match_cons(s_147, sym__2))
    {
      t_147 = ATgetArgument(s_147, 0);
      u_147 = ATgetArgument(s_147, 1);
      {
        ATerm x_147 = NULL,y_147 = NULL,z_147 = NULL;
        ATerm b_45;
        b_45 = t;
        {
          ATerm a_148 = NULL;
          ATerm b_148 = NULL,c_148 = NULL,d_148 = NULL;
          t = o_123(t);
          {
            a_148 = t;
            {
              if(((x_147 != NULL) && (x_147 != a_148)))
                _fail(a_148);
              else
                x_147 = a_148;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(x_147), not_null(t_147), not_null(u_147));
                {
                  t = table_push_0(t);
                  {
                    ATerm c_45 = t;
                    int d_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_147), term_e_45);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(d_45);
                      }
                    else
                      {
                        t = c_45;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      b_148 = t;
                      q_147 :
                      if(((ATgetType(b_148) == AT_LIST) && !(ATisEmpty(b_148))))
                        {
                          c_148 = ATgetFirst((ATermList) b_148);
                          d_148 = (ATerm) ATgetNext((ATermList) b_148);
                          {
                            if(((y_147 != NULL) && (y_147 != c_148)))
                              _fail(c_148);
                            else
                              y_147 = c_148;
                            {
                              if(((z_147 != NULL) && (z_147 != d_148)))
                                _fail(d_148);
                              else
                                z_147 = d_148;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(x_147), term_e_45, (ATerm) ATinsert(CheckATermList(not_null(z_147)), (ATerm) ATinsert(CheckATermList(not_null(y_147)), not_null(t_147))));
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
        t = b_45;
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
  ATerm m_148 = NULL,n_148 = NULL,o_148 = NULL,p_148 = NULL,q_148 = NULL;
  n_148 = t;
  j_148 :
  if(match_cons(n_148, sym_Overlay_3))
    {
      o_148 = ATgetArgument(n_148, 0);
      p_148 = ATgetArgument(n_148, 1);
      m_148 = ATgetArgument(n_148, 2);
      k_148 :
      if(((ATgetType(p_148) == AT_LIST) && ATisEmpty(p_148)))
        {
          {
            ATerm f_45;
            f_45 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_148)), term_h_45);
              {
                ATerm v_8 (ATerm t)
                {
                  t = term_y_44;
                  return(t);
                }
                t = assert_1(t, v_8);
              }
            }
            t = f_45;
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(n_148, sym_OpDecl_2))
        {
          o_148 = ATgetArgument(n_148, 0);
          p_148 = ATgetArgument(n_148, 1);
          l_148 :
          if(match_cons(p_148, sym_ConstType_1))
            {
              q_148 = ATgetArgument(p_148, 0);
              {
                ATerm i_45;
                i_45 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_148)), term_k_45);
                  {
                    ATerm w_8 (ATerm t)
                    {
                      t = term_y_44;
                      return(t);
                    }
                    t = assert_1(t, w_8);
                  }
                }
                t = i_45;
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
ATerm Overlays_1 (ATerm t, ATerm r_91 (ATerm))
{
  ATerm c_149 = NULL,d_149 = NULL;
  c_149 = t;
  b_149 :
  if(match_cons(c_149, sym_Overlays_1))
    {
      d_149 = ATgetArgument(c_149, 0);
      {
        ATerm g_149 = NULL,i_149 = NULL;
        ATerm h_149 = NULL;
        t = SSLgetAnnotations(not_null(c_149));
        {
          h_149 = t;
          if(((g_149 != NULL) && (g_149 != h_149)))
            _fail(h_149);
          else
            g_149 = h_149;
        }
        {
          t = not_null(d_149);
          {
            ATerm k_149 = NULL;
            t = r_91(t);
            {
              i_149 = t;
              {
                ATerm l_149 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(i_149)), not_null(g_149));
                {
                  l_149 = t;
                  if(((k_149 != NULL) && (k_149 != l_149)))
                    _fail(l_149);
                  else
                    k_149 = l_149;
                }
                t = not_null(k_149);
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
ATerm Constructors_1 (ATerm t, ATerm m_92 (ATerm))
{
  ATerm v_149 = NULL,w_149 = NULL;
  v_149 = t;
  u_149 :
  if(match_cons(v_149, sym_Constructors_1))
    {
      w_149 = ATgetArgument(v_149, 0);
      {
        ATerm z_149 = NULL,b_150 = NULL;
        ATerm a_150 = NULL;
        t = SSLgetAnnotations(not_null(v_149));
        {
          a_150 = t;
          if(((z_149 != NULL) && (z_149 != a_150)))
            _fail(a_150);
          else
            z_149 = a_150;
        }
        {
          t = not_null(w_149);
          {
            ATerm d_150 = NULL;
            t = m_92(t);
            {
              b_150 = t;
              {
                ATerm e_150 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, not_null(b_150)), not_null(z_149));
                {
                  e_150 = t;
                  if(((d_150 != NULL) && (d_150 != e_150)))
                    _fail(e_150);
                  else
                    d_150 = e_150;
                }
                t = not_null(d_150);
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
  ATerm m_150 = NULL,n_150 = NULL,o_150 = NULL;
  m_150 = t;
  l_150 :
  if(match_cons(m_150, sym__2))
    {
      n_150 = ATgetArgument(m_150, 0);
      o_150 = ATgetArgument(m_150, 1);
      {
        ATerm l_45;
        l_45 = t;
        {
          ATerm r_150 = NULL;
          ATerm s_150 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_150), not_null(o_150));
          {
            ATerm m_45 = t;
            int n_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(n_45);
              }
            else
              {
                t = m_45;
                t = (ATerm) ATempty;
              }
            {
              s_150 = t;
              if(((r_150 != NULL) && (r_150 != s_150)))
                _fail(s_150);
              else
                r_150 = s_150;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_150), not_null(o_150), not_null(r_150));
            t = table_put_0(t);
          }
        }
        t = l_45;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm l_123 (ATerm))
{
  ATerm z_150 = NULL,a_151 = NULL,b_151 = NULL;
  ATerm o_45;
  o_45 = t;
  {
    ATerm c_151 = NULL;
    ATerm d_151 = NULL,e_151 = NULL,f_151 = NULL;
    t = l_123(t);
    {
      c_151 = t;
      {
        if(((b_151 != NULL) && (b_151 != c_151)))
          _fail(c_151);
        else
          b_151 = c_151;
        {
          ATerm p_45 = t;
          int q_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_151), term_e_45);
              t = table_get_0(t);
              ;
              LocalPopChoice(q_45);
            }
          else
            {
              t = p_45;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            d_151 = t;
            y_150 :
            if(((ATgetType(d_151) == AT_LIST) && !(ATisEmpty(d_151))))
              {
                e_151 = ATgetFirst((ATermList) d_151);
                f_151 = (ATerm) ATgetNext((ATermList) d_151);
                {
                  if(((a_151 != NULL) && (a_151 != e_151)))
                    _fail(e_151);
                  else
                    a_151 = e_151;
                  {
                    if(((z_150 != NULL) && (z_150 != f_151)))
                      _fail(f_151);
                    else
                      z_150 = f_151;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(b_151), term_e_45, not_null(z_150));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(a_151);
                          {
                            ATerm x_8 (ATerm t)
                            {
                              ATerm g_151 = NULL;
                              g_151 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_151), not_null(g_151));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, x_8);
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
  t = o_45;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm z_105 (ATerm), ATerm a_106 (ATerm))
{
  ATerm x_45 = t;
  int y_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_105(t);
      t = a_106(t);
      ;
      LocalPopChoice(y_45);
    }
  else
    {
      t = x_45;
      {
        t = a_106(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm k_123 (ATerm))
{
  ATerm n_151 = NULL;
  ATerm z_45;
  z_45 = t;
  {
    ATerm o_151 = NULL;
    ATerm p_151 = NULL;
    t = k_123(t);
    {
      o_151 = t;
      {
        if(((n_151 != NULL) && (n_151 != o_151)))
          _fail(o_151);
        else
          n_151 = o_151;
        {
          ATerm q_151 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_151), term_e_45);
          {
            ATerm a_46 = t;
            int h_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(h_46);
              }
            else
              {
                t = a_46;
                t = (ATerm) ATempty;
              }
            {
              q_151 = t;
              if(((p_151 != NULL) && (p_151 != q_151)))
                _fail(q_151);
              else
                p_151 = q_151;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_151), term_e_45, (ATerm) ATinsert(CheckATermList(not_null(p_151)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = z_45;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm m_123 (ATerm), ATerm n_123 (ATerm))
{
  t = begin_scope_1(t, m_123);
  {
    ATerm y_8 (ATerm t)
    {
      t = end_scope_1(t, m_123);
      return(t);
    }
    t = restore_always_2(t, n_123, y_8);
  }
  return(t);
}
ATerm vars_to_consts_0 (ATerm t)
{
  ATerm z_8 (ATerm t)
  {
    t = term_y_44;
    return(t);
  }
  ATerm a_9 (ATerm t)
  {
    ATerm b_9 (ATerm t)
    {
      ATerm c_9 (ATerm t)
      {
        ATerm d_9 (ATerm t)
        {
          ATerm i_46 = t;
          int j_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_9 (ATerm t)
              {
                ATerm f_9 (ATerm t)
                {
                  t = try_1(t, DeclareVarToConst_0);
                  return(t);
                }
                t = map_1(t, f_9);
                return(t);
              }
              t = Constructors_1(t, e_9);
              ;
              LocalPopChoice(j_46);
            }
          else
            {
              t = i_46;
              {
                ATerm g_9 (ATerm t)
                {
                  ATerm h_9 (ATerm t)
                  {
                    t = try_1(t, DeclareVarToConst_0);
                    return(t);
                  }
                  t = map_1(t, h_9);
                  return(t);
                }
                t = Overlays_1(t, g_9);
              }
            }
          return(t);
        }
        t = try_1(t, d_9);
        return(t);
      }
      t = map_1(t, c_9);
      return(t);
    }
    t = Specification_1(t, b_9);
    t = alltd_1(t, VarToConst_0);
    return(t);
  }
  t = scope_2(t, z_8, a_9);
  return(t);
}
ATerm RulesToStrategies_0 (ATerm t)
{
  ATerm v_151 = NULL,w_151 = NULL;
  v_151 = t;
  u_151 :
  if(match_cons(v_151, sym_Rules_1))
    {
      w_151 = ATgetArgument(v_151, 0);
      t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(w_151));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm z_119 (ATerm))
{
  ATerm m_46 = t;
  int n_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(n_46);
    }
  else
    {
      t = m_46;
      {
        ATerm o_46 = t;
        int p_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_9 (ATerm t)
            {
              t = filter_1(t, z_119);
              return(t);
            }
            t = Cons_2(t, z_119, i_9);
            ;
            LocalPopChoice(p_46);
          }
        else
          {
            t = o_46;
            {
              ATerm b_152 = NULL,c_152 = NULL,d_152 = NULL;
              b_152 = t;
              a_152 :
              if(((ATgetType(b_152) == AT_LIST) && !(ATisEmpty(b_152))))
                {
                  c_152 = ATgetFirst((ATermList) b_152);
                  d_152 = (ATerm) ATgetNext((ATermList) b_152);
                  {
                    t = not_null(d_152);
                    t = filter_1(t, z_119);
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
  ATerm l_152 = NULL,m_152 = NULL;
  l_152 = t;
  k_152 :
  if(match_cons(l_152, sym_Signature_1))
    {
      m_152 = ATgetArgument(l_152, 0);
      {
        ATerm o_152 = NULL;
        ATerm s_152 = NULL;
        t = not_null(m_152);
        {
          ATerm j_9 (ATerm t)
          {
            ATerm p_152 = NULL,q_152 = NULL;
            p_152 = t;
            i_152 :
            if(match_cons(p_152, sym_Constructors_1))
              {
                q_152 = ATgetArgument(p_152, 0);
                t = not_null(q_152);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = filter_1(t, j_9);
          {
            t = concat_0(t);
            {
              s_152 = t;
              if(((o_152 != NULL) && (o_152 != s_152)))
                _fail(s_152);
              else
                o_152 = s_152;
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Constructors_1, not_null(o_152));
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
  ATerm m_153 = NULL,n_153 = NULL,o_153 = NULL;
  m_153 = t;
  l_153 :
  if(match_cons(m_153, sym__2))
    {
      n_153 = ATgetArgument(m_153, 0);
      o_153 = ATgetArgument(m_153, 1);
      {
        ATerm r_153 = NULL,s_153 = NULL;
        ATerm t_153 = NULL;
        ATerm v_153 = NULL,w_153 = NULL,x_153 = NULL,y_153 = NULL,z_153 = NULL;
        t = not_null(n_153);
        {
          t_153 = t;
          {
            t = SSL_explode_term(not_null(t_153));
            {
              v_153 = t;
              z_152 :
              if(match_cons(v_153, sym__2))
                {
                  w_153 = ATgetArgument(v_153, 0);
                  x_153 = ATgetArgument(v_153, 1);
                  a_153 :
                  if(((ATgetType(x_153) == AT_LIST) && !(ATisEmpty(x_153))))
                    {
                      y_153 = ATgetFirst((ATermList) x_153);
                      z_153 = (ATerm) ATgetNext((ATermList) x_153);
                      b_153 :
                      if(((ATgetType(z_153) == AT_LIST) && ATisEmpty(z_153)))
                        {
                          {
                            if(((r_153 != NULL) && (r_153 != w_153)))
                              _fail(w_153);
                            else
                              r_153 = w_153;
                            if(((s_153 != NULL) && (s_153 != y_153)))
                              _fail(y_153);
                            else
                              s_153 = y_153;
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
          t = not_null(o_153);
          {
            ATerm k_9 (ATerm t)
            {
              ATerm a_154 = NULL;
              ATerm c_154 = NULL,k_154 = NULL,m_154 = NULL,o_154 = NULL;
              a_154 = t;
              {
                ATerm q_46;
                q_46 = t;
                {
                  ATerm d_154 = NULL;
                  ATerm f_154 = NULL,g_154 = NULL,h_154 = NULL,i_154 = NULL,j_154 = NULL;
                  t = not_null(a_154);
                  {
                    d_154 = t;
                    {
                      t = SSL_explode_term(not_null(d_154));
                      {
                        f_154 = t;
                        f_153 :
                        if(match_cons(f_154, sym__2))
                          {
                            g_154 = ATgetArgument(f_154, 0);
                            h_154 = ATgetArgument(f_154, 1);
                            g_153 :
                            if(((ATgetType(h_154) == AT_LIST) && !(ATisEmpty(h_154))))
                              {
                                i_154 = ATgetFirst((ATermList) h_154);
                                j_154 = (ATerm) ATgetNext((ATermList) h_154);
                                h_153 :
                                if(((ATgetType(j_154) == AT_LIST) && ATisEmpty(j_154)))
                                  {
                                    {
                                      if(((r_153 != NULL) && (r_153 != g_154)))
                                        _fail(g_154);
                                      else
                                        r_153 = g_154;
                                      if(((c_154 != NULL) && (c_154 != i_154)))
                                        _fail(i_154);
                                      else
                                        c_154 = i_154;
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
                t = q_46;
                {
                  ATerm r_46;
                  r_46 = t;
                  {
                    ATerm l_154 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(c_154), not_null(s_153));
                    {
                      t = conc_0(t);
                      {
                        l_154 = t;
                        if(((k_154 != NULL) && (k_154 != l_154)))
                          _fail(l_154);
                        else
                          k_154 = l_154;
                      }
                    }
                  }
                  t = r_46;
                  {
                    ATerm s_46;
                    s_46 = t;
                    {
                      ATerm n_154 = NULL;
                      t = (ATerm) ATinsert(ATempty, not_null(k_154));
                      {
                        n_154 = t;
                        if(((m_154 != NULL) && (m_154 != n_154)))
                          _fail(n_154);
                        else
                          m_154 = n_154;
                      }
                    }
                    t = s_46;
                    {
                      t = SSL_mkterm(not_null(r_153), not_null(m_154));
                      {
                        o_154 = t;
                        t = not_null(o_154);
                      }
                    }
                  }
                }
              }
              return(t);
            }
            t = fetch_1(t, k_9);
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
ATerm foldr_3 (ATerm t, ATerm y_118 (ATerm), ATerm z_118 (ATerm), ATerm a_119 (ATerm))
{
  ATerm t_46 = t;
  int u_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_118(t);
      ;
      LocalPopChoice(u_46);
    }
  else
    {
      t = t_46;
      {
        ATerm d_155 = NULL,e_155 = NULL,f_155 = NULL;
        d_155 = t;
        c_155 :
        if(((ATgetType(d_155) == AT_LIST) && !(ATisEmpty(d_155))))
          {
            e_155 = ATgetFirst((ATermList) d_155);
            f_155 = (ATerm) ATgetNext((ATermList) d_155);
            {
              ATerm i_155 = NULL,k_155 = NULL;
              ATerm v_46;
              v_46 = t;
              {
                ATerm j_155 = NULL;
                t = not_null(e_155);
                {
                  t = a_119(t);
                  {
                    j_155 = t;
                    if(((i_155 != NULL) && (i_155 != j_155)))
                      _fail(j_155);
                    else
                      i_155 = j_155;
                  }
                }
              }
              t = v_46;
              {
                ATerm l_155 = NULL;
                t = not_null(f_155);
                {
                  t = foldr_3(t, y_118, z_118, a_119);
                  {
                    l_155 = t;
                    if(((k_155 != NULL) && (k_155 != l_155)))
                      _fail(l_155);
                    else
                      k_155 = l_155;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_155), not_null(k_155));
                  t = z_118(t);
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
  ATerm l_9 (ATerm t)
  {
    ATerm m_9 (ATerm t)
    {
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_46), term_x_46), term_w_46);
      return(t);
    }
    ATerm n_9 (ATerm t)
    {
      ATerm o_9 (ATerm t)
      {
        ATerm z_46 = t;
        int a_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = GetConstructors_0(t);
            ;
            LocalPopChoice(a_47);
          }
        else
          {
            t = z_46;
            t = RulesToStrategies_0(t);
          }
        return(t);
      }
      t = try_1(t, o_9);
      return(t);
    }
    t = foldr_3(t, m_9, InsertBSpec_0, n_9);
    return(t);
  }
  t = Specification_1(t, l_9);
  return(t);
}
ATerm normalize_spec_0 (ATerm t)
{
  t = CombineSections_0(t);
  {
    ATerm p_9 (ATerm t)
    {
      t = try_1(t, HL_0);
      return(t);
    }
    t = topdown_1(t, p_9);
    {
      t = vars_to_consts_0(t);
      {
        t = define_lrules_0(t);
        {
          t = LiftDynamicRules_0(t);
          {
            ATerm q_9 (ATerm t)
            {
              t = try_1(t, HL_0);
              return(t);
            }
            t = topdown_1(t, q_9);
            {
              ATerm r_9 (ATerm t)
              {
                ATerm s_9 (ATerm t)
                {
                  ATerm r_155 = NULL,s_155 = NULL;
                  r_155 = t;
                  q_155 :
                  if(match_cons(r_155, sym_Constructors_1))
                    {
                      s_155 = ATgetArgument(r_155, 0);
                      t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(s_155))));
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = fetch_1(t, s_9);
                return(t);
              }
              t = Specification_1(t, r_9);
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
  ATerm a_156 = NULL;
  ATerm c_156 = NULL,d_156 = NULL;
  a_156 = t;
  {
    ATerm e_156 = NULL,f_156 = NULL,g_156 = NULL;
    t = not_null(a_156);
    {
      t = explode_string_0(t);
      {
        e_156 = t;
        y_155 :
        if(((ATgetType(e_156) == AT_LIST) && !(ATisEmpty(e_156))))
          {
            f_156 = ATgetFirst((ATermList) e_156);
            g_156 = (ATerm) ATgetNext((ATermList) e_156);
            z_155 :
            if(match_int(f_156, 39))
              {
                ATerm h_156 = NULL;
                if(((c_156 != NULL) && (c_156 != g_156)))
                  _fail(g_156);
                else
                  c_156 = g_156;
                {
                  t = not_null(c_156);
                  {
                    t = implode_string_0(t);
                    {
                      h_156 = t;
                      if(((d_156 != NULL) && (d_156 != h_156)))
                        _fail(h_156);
                      else
                        d_156 = h_156;
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
    t = not_null(d_156);
  }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm u_92 (ATerm), ATerm v_92 (ATerm))
{
  ATerm r_156 = NULL,s_156 = NULL,t_156 = NULL;
  r_156 = t;
  q_156 :
  if(match_cons(r_156, sym_Op_2))
    {
      s_156 = ATgetArgument(r_156, 0);
      t_156 = ATgetArgument(r_156, 1);
      {
        ATerm x_156 = NULL,z_156 = NULL;
        ATerm y_156 = NULL;
        t = SSLgetAnnotations(not_null(r_156));
        {
          y_156 = t;
          if(((x_156 != NULL) && (x_156 != y_156)))
            _fail(y_156);
          else
            x_156 = y_156;
        }
        {
          t = not_null(s_156);
          {
            ATerm b_157 = NULL;
            t = u_92(t);
            {
              z_156 = t;
              {
                t = not_null(t_156);
                {
                  ATerm d_157 = NULL;
                  t = v_92(t);
                  {
                    b_157 = t;
                    {
                      ATerm e_157 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(z_156), not_null(b_157)), not_null(x_156));
                      {
                        e_157 = t;
                        if(((d_157 != NULL) && (d_157 != e_157)))
                          _fail(e_157);
                        else
                          d_157 = e_157;
                      }
                      t = not_null(d_157);
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
ATerm OpDecl_2 (ATerm t, ATerm d_92 (ATerm), ATerm e_92 (ATerm))
{
  ATerm q_157 = NULL,r_157 = NULL,s_157 = NULL;
  q_157 = t;
  p_157 :
  if(match_cons(q_157, sym_OpDecl_2))
    {
      r_157 = ATgetArgument(q_157, 0);
      s_157 = ATgetArgument(q_157, 1);
      {
        ATerm w_157 = NULL,y_157 = NULL;
        ATerm x_157 = NULL;
        t = SSLgetAnnotations(not_null(q_157));
        {
          x_157 = t;
          if(((w_157 != NULL) && (w_157 != x_157)))
            _fail(x_157);
          else
            w_157 = x_157;
        }
        {
          t = not_null(r_157);
          {
            ATerm a_158 = NULL;
            t = d_92(t);
            {
              y_157 = t;
              {
                t = not_null(s_157);
                {
                  ATerm c_158 = NULL;
                  t = e_92(t);
                  {
                    a_158 = t;
                    {
                      ATerm d_158 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, not_null(y_157), not_null(a_158)), not_null(w_157));
                      {
                        d_158 = t;
                        if(((c_158 != NULL) && (c_158 != d_158)))
                          _fail(d_158);
                        else
                          c_158 = d_158;
                      }
                      t = not_null(c_158);
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
ATerm SVar_1 (ATerm t, ATerm x_95 (ATerm))
{
  ATerm o_158 = NULL,p_158 = NULL;
  o_158 = t;
  n_158 :
  if(match_cons(o_158, sym_SVar_1))
    {
      p_158 = ATgetArgument(o_158, 0);
      {
        ATerm s_158 = NULL,u_158 = NULL;
        ATerm t_158 = NULL;
        t = SSLgetAnnotations(not_null(o_158));
        {
          t_158 = t;
          if(((s_158 != NULL) && (s_158 != t_158)))
            _fail(t_158);
          else
            s_158 = t_158;
        }
        {
          t = not_null(p_158);
          {
            ATerm w_158 = NULL;
            t = x_95(t);
            {
              u_158 = t;
              {
                ATerm x_158 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(u_158)), not_null(s_158));
                {
                  x_158 = t;
                  if(((w_158 != NULL) && (w_158 != x_158)))
                    _fail(x_158);
                  else
                    w_158 = x_158;
                }
                t = not_null(w_158);
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
  ATerm p_159 = NULL,q_159 = NULL;
  p_159 = t;
  o_159 :
  if(match_cons(p_159, sym_Var_1))
    {
      q_159 = ATgetArgument(p_159, 0);
      {
        ATerm b_47 = t;
        int c_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_159 = NULL,v_159 = NULL;
            ATerm u_159 = NULL;
            t = SSLgetAnnotations(not_null(p_159));
            {
              u_159 = t;
              if(((t_159 != NULL) && (t_159 != u_159)))
                _fail(u_159);
              else
                t_159 = u_159;
            }
            {
              t = not_null(q_159);
              {
                ATerm x_159 = NULL;
                t = p_0(t);
                {
                  v_159 = t;
                  {
                    ATerm y_159 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(v_159)), not_null(t_159));
                    {
                      y_159 = t;
                      if(((x_159 != NULL) && (x_159 != y_159)))
                        _fail(y_159);
                      else
                        x_159 = y_159;
                    }
                    t = not_null(x_159);
                  }
                }
              }
            }
            ;
            LocalPopChoice(c_47);
          }
        else
          {
            t = b_47;
            {
              ATerm j_47 = t;
              int k_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_160 = NULL,d_160 = NULL;
                  ATerm c_160 = NULL;
                  t = SSLgetAnnotations(not_null(p_159));
                  {
                    c_160 = t;
                    if(((b_160 != NULL) && (b_160 != c_160)))
                      _fail(c_160);
                    else
                      b_160 = c_160;
                  }
                  {
                    t = not_null(q_159);
                    {
                      ATerm f_160 = NULL;
                      t = p_0(t);
                      {
                        d_160 = t;
                        {
                          ATerm g_160 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(d_160)), not_null(b_160));
                          {
                            g_160 = t;
                            if(((f_160 != NULL) && (f_160 != g_160)))
                              _fail(g_160);
                            else
                              f_160 = g_160;
                          }
                          t = not_null(f_160);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(k_47);
                }
              else
                {
                  t = j_47;
                  {
                    ATerm j_160 = NULL,l_160 = NULL;
                    ATerm k_160 = NULL;
                    t = SSLgetAnnotations(not_null(p_159));
                    {
                      k_160 = t;
                      if(((j_160 != NULL) && (j_160 != k_160)))
                        _fail(k_160);
                      else
                        j_160 = k_160;
                    }
                    {
                      t = not_null(q_159);
                      {
                        ATerm n_160 = NULL;
                        t = p_0(t);
                        {
                          l_160 = t;
                          {
                            ATerm o_160 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_160)), not_null(j_160));
                            {
                              o_160 = t;
                              if(((n_160 != NULL) && (n_160 != o_160)))
                                _fail(o_160);
                              else
                                n_160 = o_160;
                            }
                            t = not_null(n_160);
                          }
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
ATerm VarDec_2 (ATerm t, ATerm j_98 (ATerm), ATerm k_98 (ATerm))
{
  ATerm h_161 = NULL,i_161 = NULL,j_161 = NULL;
  h_161 = t;
  g_161 :
  if(match_cons(h_161, sym_VarDec_2))
    {
      i_161 = ATgetArgument(h_161, 0);
      j_161 = ATgetArgument(h_161, 1);
      {
        ATerm n_161 = NULL,p_161 = NULL;
        ATerm o_161 = NULL;
        t = SSLgetAnnotations(not_null(h_161));
        {
          o_161 = t;
          if(((n_161 != NULL) && (n_161 != o_161)))
            _fail(o_161);
          else
            n_161 = o_161;
        }
        {
          t = not_null(i_161);
          {
            ATerm r_161 = NULL;
            t = j_98(t);
            {
              p_161 = t;
              {
                t = not_null(j_161);
                {
                  ATerm t_161 = NULL;
                  t = k_98(t);
                  {
                    r_161 = t;
                    {
                      ATerm u_161 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(p_161), not_null(r_161)), not_null(n_161));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm p_98 (ATerm))
{
  ATerm h_162 = NULL,i_162 = NULL,j_162 = NULL,k_162 = NULL;
  h_162 = t;
  g_162 :
  if(match_cons(h_162, sym_SDef_3))
    {
      i_162 = ATgetArgument(h_162, 0);
      j_162 = ATgetArgument(h_162, 1);
      k_162 = ATgetArgument(h_162, 2);
      {
        ATerm p_162 = NULL,r_162 = NULL;
        ATerm q_162 = NULL;
        t = SSLgetAnnotations(not_null(h_162));
        {
          q_162 = t;
          if(((p_162 != NULL) && (p_162 != q_162)))
            _fail(q_162);
          else
            p_162 = q_162;
        }
        {
          t = not_null(i_162);
          {
            ATerm t_162 = NULL;
            t = n_98(t);
            {
              r_162 = t;
              {
                t = not_null(j_162);
                {
                  ATerm v_162 = NULL;
                  t = o_98(t);
                  {
                    t_162 = t;
                    {
                      t = not_null(k_162);
                      {
                        ATerm x_162 = NULL;
                        t = p_98(t);
                        {
                          v_162 = t;
                          {
                            ATerm y_162 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(r_162), not_null(t_162), not_null(v_162)), not_null(p_162));
                            {
                              y_162 = t;
                              if(((x_162 != NULL) && (x_162 != y_162)))
                                _fail(y_162);
                              else
                                x_162 = y_162;
                            }
                            t = not_null(x_162);
                          }
                        }
                      }
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
ATerm SDefT_4 (ATerm t, ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t_98 (ATerm))
{
  ATerm n_163 = NULL,o_163 = NULL,p_163 = NULL,q_163 = NULL,r_163 = NULL;
  n_163 = t;
  m_163 :
  if(match_cons(n_163, sym_SDefT_4))
    {
      o_163 = ATgetArgument(n_163, 0);
      p_163 = ATgetArgument(n_163, 1);
      q_163 = ATgetArgument(n_163, 2);
      r_163 = ATgetArgument(n_163, 3);
      {
        ATerm x_163 = NULL,z_163 = NULL;
        ATerm y_163 = NULL;
        t = SSLgetAnnotations(not_null(n_163));
        {
          y_163 = t;
          if(((x_163 != NULL) && (x_163 != y_163)))
            _fail(y_163);
          else
            x_163 = y_163;
        }
        {
          t = not_null(o_163);
          {
            ATerm b_164 = NULL;
            t = q_98(t);
            {
              z_163 = t;
              {
                t = not_null(p_163);
                {
                  ATerm d_164 = NULL;
                  t = r_98(t);
                  {
                    b_164 = t;
                    {
                      t = not_null(q_163);
                      {
                        ATerm f_164 = NULL;
                        t = s_98(t);
                        {
                          d_164 = t;
                          {
                            t = not_null(r_163);
                            {
                              ATerm h_164 = NULL;
                              t = t_98(t);
                              {
                                f_164 = t;
                                {
                                  ATerm i_164 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(z_163), not_null(b_164), not_null(d_164), not_null(f_164)), not_null(x_163));
                                  {
                                    i_164 = t;
                                    if(((h_164 != NULL) && (h_164 != i_164)))
                                      _fail(i_164);
                                    else
                                      h_164 = i_164;
                                  }
                                  t = not_null(h_164);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm RDef_3 (ATerm t, ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_94 (ATerm))
{
  ATerm x_164 = NULL,y_164 = NULL,z_164 = NULL,a_165 = NULL;
  x_164 = t;
  w_164 :
  if(match_cons(x_164, sym_RDef_3))
    {
      y_164 = ATgetArgument(x_164, 0);
      z_164 = ATgetArgument(x_164, 1);
      a_165 = ATgetArgument(x_164, 2);
      {
        ATerm f_165 = NULL,h_165 = NULL;
        ATerm g_165 = NULL;
        t = SSLgetAnnotations(not_null(x_164));
        {
          g_165 = t;
          if(((f_165 != NULL) && (f_165 != g_165)))
            _fail(g_165);
          else
            f_165 = g_165;
        }
        {
          t = not_null(y_164);
          {
            ATerm j_165 = NULL;
            t = t_94(t);
            {
              h_165 = t;
              {
                t = not_null(z_164);
                {
                  ATerm l_165 = NULL;
                  t = u_94(t);
                  {
                    j_165 = t;
                    {
                      t = not_null(a_165);
                      {
                        ATerm n_165 = NULL;
                        t = v_94(t);
                        {
                          l_165 = t;
                          {
                            ATerm o_165 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, not_null(h_165), not_null(j_165), not_null(l_165)), not_null(f_165));
                            {
                              o_165 = t;
                              if(((n_165 != NULL) && (n_165 != o_165)))
                                _fail(o_165);
                              else
                                n_165 = o_165;
                            }
                            t = not_null(n_165);
                          }
                        }
                      }
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
ATerm RDefT_4 (ATerm t, ATerm w_94 (ATerm), ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm z_94 (ATerm))
{
  ATerm d_166 = NULL,e_166 = NULL,f_166 = NULL,g_166 = NULL,h_166 = NULL;
  d_166 = t;
  c_166 :
  if(match_cons(d_166, sym_RDefT_4))
    {
      e_166 = ATgetArgument(d_166, 0);
      f_166 = ATgetArgument(d_166, 1);
      g_166 = ATgetArgument(d_166, 2);
      h_166 = ATgetArgument(d_166, 3);
      {
        ATerm n_166 = NULL,p_166 = NULL;
        ATerm o_166 = NULL;
        t = SSLgetAnnotations(not_null(d_166));
        {
          o_166 = t;
          if(((n_166 != NULL) && (n_166 != o_166)))
            _fail(o_166);
          else
            n_166 = o_166;
        }
        {
          t = not_null(e_166);
          {
            ATerm r_166 = NULL;
            t = w_94(t);
            {
              p_166 = t;
              {
                t = not_null(f_166);
                {
                  ATerm t_166 = NULL;
                  t = x_94(t);
                  {
                    r_166 = t;
                    {
                      t = not_null(g_166);
                      {
                        ATerm v_166 = NULL;
                        t = y_94(t);
                        {
                          t_166 = t;
                          {
                            t = not_null(h_166);
                            {
                              ATerm x_166 = NULL;
                              t = z_94(t);
                              {
                                v_166 = t;
                                {
                                  ATerm y_166 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, not_null(p_166), not_null(r_166), not_null(t_166), not_null(v_166)), not_null(n_166));
                                  {
                                    y_166 = t;
                                    if(((x_166 != NULL) && (x_166 != y_166)))
                                      _fail(y_166);
                                    else
                                      x_166 = y_166;
                                  }
                                  t = not_null(x_166);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm DefaultVarDec_1 (ATerm t, ATerm i_98 (ATerm))
{
  ATerm l_167 = NULL,m_167 = NULL;
  l_167 = t;
  k_167 :
  if(match_cons(l_167, sym_DefaultVarDec_1))
    {
      m_167 = ATgetArgument(l_167, 0);
      {
        ATerm p_167 = NULL,r_167 = NULL;
        ATerm q_167 = NULL;
        t = SSLgetAnnotations(not_null(l_167));
        {
          q_167 = t;
          if(((p_167 != NULL) && (p_167 != q_167)))
            _fail(q_167);
          else
            p_167 = q_167;
        }
        {
          t = not_null(m_167);
          {
            ATerm t_167 = NULL;
            t = i_98(t);
            {
              r_167 = t;
              {
                ATerm u_167 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, not_null(r_167)), not_null(p_167));
                {
                  u_167 = t;
                  if(((t_167 != NULL) && (t_167 != u_167)))
                    _fail(u_167);
                  else
                    t_167 = u_167;
                }
                t = not_null(t_167);
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
  ATerm a_168 = NULL;
  a_168 = t;
  t = SSL_string_to_real(not_null(a_168));
  return(t);
}
ATerm DesugarOnce_0 (ATerm t)
{
  ATerm l_47 = t;
  int m_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_168 = NULL,k_168 = NULL,l_168 = NULL,m_168 = NULL;
      j_168 = t;
      i_168 :
      if(match_cons(j_168, sym_Real_1))
        {
          k_168 = ATgetArgument(j_168, 0);
          {
            ATerm o_168 = NULL;
            ATerm p_168 = NULL;
            t = not_null(k_168);
            {
              t = string_to_real_0(t);
              {
                p_168 = t;
                if(((o_168 != NULL) && (o_168 != p_168)))
                  _fail(p_168);
                else
                  o_168 = p_168;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Real_1, not_null(o_168));
          }
        }
      else
        {
          if(match_cons(j_168, sym_Int_1))
            {
              k_168 = ATgetArgument(j_168, 0);
              {
                ATerm r_168 = NULL;
                ATerm s_168 = NULL;
                t = not_null(k_168);
                {
                  t = string_to_int_0(t);
                  {
                    s_168 = t;
                    if(((r_168 != NULL) && (r_168 != s_168)))
                      _fail(s_168);
                    else
                      r_168 = s_168;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(r_168));
              }
            }
          else
            {
              if(match_cons(j_168, sym_Con_3))
                {
                  k_168 = ATgetArgument(j_168, 0);
                  l_168 = ATgetArgument(j_168, 1);
                  m_168 = ATgetArgument(j_168, 2);
                  {
                    t = not_null(m_168);
                    t = is_string_0(t);
                    t = (ATerm) ATmakeAppl(sym_Con_3, not_null(k_168), not_null(l_168), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_168)), (ATerm) ATempty));
                  }
                }
              else
                {
                  _fail(t);
                }
            }
        }
      ;
      LocalPopChoice(m_47);
    }
  else
    {
      t = l_47;
      {
        ATerm t_47 = t;
        int u_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1(t, RemoveLeadingPrime_0);
            ;
            LocalPopChoice(u_47);
          }
        else
          {
            t = t_47;
            {
              ATerm v_47 = t;
              int y_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4(t, RemoveLeadingPrime_0, _id, _id, _id);
                  ;
                  LocalPopChoice(y_47);
                }
              else
                {
                  t = v_47;
                  {
                    ATerm z_47 = t;
                    int a_48 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = RDef_3(t, RemoveLeadingPrime_0, _id, _id);
                        ;
                        LocalPopChoice(a_48);
                      }
                    else
                      {
                        t = z_47;
                        {
                          ATerm b_48 = t;
                          int c_48 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SDefT_4(t, RemoveLeadingPrime_0, _id, _id, _id);
                              ;
                              LocalPopChoice(c_48);
                            }
                          else
                            {
                              t = b_48;
                              {
                                ATerm d_48 = t;
                                int e_48 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = SDef_3(t, RemoveLeadingPrime_0, _id, _id);
                                    ;
                                    LocalPopChoice(e_48);
                                  }
                                else
                                  {
                                    t = d_48;
                                    {
                                      ATerm f_48 = t;
                                      int p_48 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = VarDec_2(t, RemoveLeadingPrime_0, _id);
                                          ;
                                          LocalPopChoice(p_48);
                                        }
                                      else
                                        {
                                          t = f_48;
                                          {
                                            ATerm q_48 = t;
                                            int r_48 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Var_1(t, RemoveLeadingPrime_0);
                                                ;
                                                LocalPopChoice(r_48);
                                              }
                                            else
                                              {
                                                t = q_48;
                                                {
                                                  ATerm u_48 = t;
                                                  int v_48 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = SVar_1(t, RemoveLeadingPrime_0);
                                                      ;
                                                      LocalPopChoice(v_48);
                                                    }
                                                  else
                                                    {
                                                      t = u_48;
                                                      {
                                                        ATerm a_49 = t;
                                                        int c_49 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = OpDecl_2(t, RemoveLeadingPrime_0, _id);
                                                            ;
                                                            LocalPopChoice(c_49);
                                                          }
                                                        else
                                                          {
                                                            t = a_49;
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
ATerm at_last_1 (ATerm t, ATerm w_113 (ATerm))
{
  ATerm b_169 (ATerm t)
  {
    ATerm d_49 = t;
    int e_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = w_113(t);
        ;
        LocalPopChoice(e_49);
      }
    else
      {
        t = d_49;
        t = Cons_2(t, _id, b_169);
      }
    return(t);
  }
  t = b_169(t);
  return(t);
}
ATerm init_0 (ATerm t)
{
  t = at_last_1(t, Tl_0);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm e_169 = NULL,f_169 = NULL,g_169 = NULL;
  e_169 = t;
  d_169 :
  if(((ATgetType(e_169) == AT_LIST) && !(ATisEmpty(e_169))))
    {
      f_169 = ATgetFirst((ATermList) e_169);
      g_169 = (ATerm) ATgetNext((ATermList) e_169);
      t = not_null(g_169);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm m_169 = NULL,n_169 = NULL,o_169 = NULL;
  m_169 = t;
  k_169 :
  if(((ATgetType(m_169) == AT_LIST) && !(ATisEmpty(m_169))))
    {
      n_169 = ATgetFirst((ATermList) m_169);
      o_169 = (ATerm) ATgetNext((ATermList) m_169);
      l_169 :
      if(((ATgetType(o_169) == AT_LIST) && ATisEmpty(o_169)))
        {
          t = not_null(n_169);
        }
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
  ATerm f_49 = t;
  int g_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(g_49);
    }
  else
    {
      t = f_49;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm u_169 = NULL,v_169 = NULL,w_169 = NULL;
  u_169 = t;
  t_169 :
  if(((ATgetType(u_169) == AT_LIST) && !(ATisEmpty(u_169))))
    {
      v_169 = ATgetFirst((ATermList) u_169);
      w_169 = (ATerm) ATgetNext((ATermList) u_169);
      t = not_null(v_169);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unquote_chars_1 (ATerm t, ATerm x_121 (ATerm))
{
  ATerm h_49;
  h_49 = t;
  {
    t = Hd_0(t);
    t = x_121(t);
  }
  t = h_49;
  {
    ATerm i_49;
    i_49 = t;
    {
      t = last_0(t);
      t = x_121(t);
    }
    t = i_49;
    {
      t = Tl_0(t);
      t = init_0(t);
    }
  }
  return(t);
}
ATerm un_double_quote_chars_0 (ATerm t)
{
  ATerm t_9 (ATerm t)
  {
    ATerm b_170 = NULL;
    b_170 = t;
    z_169 :
    if(!(match_int(b_170, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  t = unquote_chars_1(t, t_9);
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm i_122 (ATerm))
{
  t = explode_string_0(t);
  {
    t = i_122(t);
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
  ATerm k_170 = NULL,l_170 = NULL,m_170 = NULL,n_170 = NULL,o_170 = NULL,p_170 = NULL,q_170 = NULL;
  k_170 = t;
  d_170 :
  if(((ATgetType(k_170) == AT_LIST) && !(ATisEmpty(k_170))))
    {
      l_170 = ATgetFirst((ATermList) k_170);
      m_170 = (ATerm) ATgetNext((ATermList) k_170);
      e_170 :
      if(match_int(l_170, 39))
        {
          f_170 :
          if(((ATgetType(m_170) == AT_LIST) && !(ATisEmpty(m_170))))
            {
              n_170 = ATgetFirst((ATermList) m_170);
              o_170 = (ATerm) ATgetNext((ATermList) m_170);
              h_170 :
              if(((ATgetType(o_170) == AT_LIST) && !(ATisEmpty(o_170))))
                {
                  p_170 = ATgetFirst((ATermList) o_170);
                  q_170 = (ATerm) ATgetNext((ATermList) o_170);
                  i_170 :
                  if(match_int(p_170, 39))
                    {
                      j_170 :
                      if(((ATgetType(q_170) == AT_LIST) && ATisEmpty(q_170)))
                        {
                          t = not_null(n_170);
                        }
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
  ATerm z_170 = NULL;
  z_170 = t;
  y_170 :
  if(match_string(z_170, "'\\ '"))
    {
      t = term_j_49;
    }
  else
    {
      if(match_string(z_170, "'\\r'"))
        {
          t = term_l_49;
        }
      else
        {
          if(match_string(z_170, "'\\t'"))
            {
              t = term_t_49;
            }
          else
            {
              if(match_string(z_170, "'\\n'"))
                {
                  t = term_u_49;
                }
              else
                {
                  if(match_string(z_170, "'\\''"))
                    {
                      t = term_v_49;
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
  ATerm p_171 = NULL;
  ATerm r_171 = NULL,s_171 = NULL,t_171 = NULL;
  p_171 = t;
  {
    ATerm u_171 = NULL;
    ATerm w_171 = NULL,x_171 = NULL,y_171 = NULL,z_171 = NULL,a_172 = NULL,b_172 = NULL,c_172 = NULL;
    t = not_null(p_171);
    {
      u_171 = t;
      {
        t = SSL_explode_term(not_null(u_171));
        {
          w_171 = t;
          i_171 :
          if(match_cons(w_171, sym__2))
            {
              x_171 = ATgetArgument(w_171, 0);
              y_171 = ATgetArgument(w_171, 1);
              k_171 :
              if(match_string(x_171, ""))
                {
                  l_171 :
                  if(((ATgetType(y_171) == AT_LIST) && !(ATisEmpty(y_171))))
                    {
                      z_171 = ATgetFirst((ATermList) y_171);
                      a_172 = (ATerm) ATgetNext((ATermList) y_171);
                      m_171 :
                      if(((ATgetType(a_172) == AT_LIST) && !(ATisEmpty(a_172))))
                        {
                          b_172 = ATgetFirst((ATermList) a_172);
                          c_172 = (ATerm) ATgetNext((ATermList) a_172);
                          {
                            if(((r_171 != NULL) && (r_171 != z_171)))
                              _fail(z_171);
                            else
                              r_171 = z_171;
                            {
                              if(((t_171 != NULL) && (t_171 != b_172)))
                                _fail(b_172);
                              else
                                t_171 = b_172;
                              if(((s_171 != NULL) && (s_171 != c_172)))
                                _fail(c_172);
                              else
                                s_171 = c_172;
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
    t = not_null(t_171);
  }
  return(t);
}
ATerm Desugar_0 (ATerm t)
{
  ATerm t_174 = NULL,u_174 = NULL,v_174 = NULL,w_174 = NULL,x_174 = NULL,y_174 = NULL,z_174 = NULL,a_175 = NULL;
  ATerm f_179 (ATerm t)
  {
    t = not_null(z_174);
    {
      ATerm j_50 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, Nil_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = j_50;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_c_16, not_null(z_174));
    return(t);
  }
  ATerm g_179 (ATerm t)
  {
    t = not_null(u_174);
    return(t);
  }
  ATerm h_179 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, not_null(z_174)));
    return(t);
  }
  ATerm i_179 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(z_174)));
    return(t);
  }
  ATerm j_179 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(z_174)));
    return(t);
  }
  ATerm k_179 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(z_174)));
    return(t);
  }
  ATerm l_179 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_174)), (ATerm) ATempty);
    return(t);
  }
  ATerm m_179 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_174)), not_null(a_175));
    return(t);
  }
  ATerm n_179 (ATerm t)
  {
    t = not_null(z_174);
    {
      ATerm u_9 (ATerm t)
      {
        t = not_null(a_175);
        return(t);
      }
      ATerm v_9 (ATerm t)
      {
        ATerm t_176 = NULL,u_176 = NULL,v_176 = NULL;
        t_176 = t;
        i_174 :
        if(match_cons(t_176, sym__2))
          {
            u_176 = ATgetArgument(t_176, 0);
            v_176 = ATgetArgument(t_176, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_l_50, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_176)), not_null(u_176)));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = foldr_2(t, u_9, v_9);
    }
    return(t);
  }
  ATerm o_179 (ATerm t)
  {
    t = not_null(z_174);
    {
      ATerm w_9 (ATerm t)
      {
        t = term_n_50;
        return(t);
      }
      ATerm x_9 (ATerm t)
      {
        ATerm z_176 = NULL,a_177 = NULL,b_177 = NULL;
        z_176 = t;
        k_174 :
        if(match_cons(z_176, sym__2))
          {
            a_177 = ATgetArgument(z_176, 0);
            b_177 = ATgetArgument(z_176, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_l_50, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_177)), not_null(a_177)));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = foldr_2(t, w_9, x_9);
    }
    return(t);
  }
  ATerm p_179 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_o_50, (ATerm) ATinsert(CheckATermList(not_null(a_175)), not_null(z_174)));
    return(t);
  }
  ATerm q_179 (ATerm t)
  {
    t = not_null(z_174);
    {
      ATerm p_50 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, Nil_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_50;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_o_50, not_null(z_174));
    return(t);
  }
  ATerm r_179 (ATerm t)
  {
    t = not_null(u_174);
    return(t);
  }
  ATerm s_179 (ATerm t)
  {
    t = term_q_50;
    return(t);
  }
  ATerm t_179 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_q_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_174)), not_null(z_174)));
    return(t);
  }
  ATerm u_179 (ATerm t)
  {
    t = not_null(z_174);
    return(t);
  }
  ATerm v_179 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_StratRule_3, not_null(z_174), not_null(a_175), term_o_18);
    return(t);
  }
  ATerm w_179 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_174), not_null(a_175), term_o_18);
    return(t);
  }
  ATerm x_179 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(z_174), (ATerm)ATempty, not_null(a_175));
    return(t);
  }
  ATerm y_179 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(a_175), not_null(z_174));
    return(t);
  }
  ATerm z_179 (ATerm t)
  {
    ATerm v_177 = NULL;
    ATerm x_177 = NULL;
    t = not_null(z_174);
    {
      t = try_1(t, un_double_quote_0);
      {
        x_177 = t;
        if(((v_177 != NULL) && (v_177 != x_177)))
          _fail(x_177);
        else
          v_177 = x_177;
      }
    }
    t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(v_177), (ATerm)ATempty, not_null(a_175));
    return(t);
  }
  ATerm a_180 (ATerm t)
  {
    ATerm z_177 = NULL;
    ATerm a_178 = NULL;
    t = not_null(z_174);
    {
      t = try_1(t, un_double_quote_0);
      {
        a_178 = t;
        if(((z_177 != NULL) && (z_177 != a_178)))
          _fail(a_178);
        else
          z_177 = a_178;
      }
    }
    t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(z_177), (ATerm)ATempty, (ATerm) ATempty);
    return(t);
  }
  ATerm b_180 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(z_174), not_null(a_175), (ATerm) ATempty);
    return(t);
  }
  ATerm c_180 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(z_174), (ATerm)ATempty, (ATerm) ATempty);
    return(t);
  }
  ATerm d_180 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(z_174), not_null(a_175), (ATerm)ATempty, not_null(x_174));
    return(t);
  }
  ATerm e_180 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(z_174), (ATerm)ATempty, (ATerm)ATempty, not_null(a_175));
    return(t);
  }
  ATerm f_180 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SRDefT_4, not_null(z_174), not_null(a_175), (ATerm)ATempty, not_null(x_174));
    return(t);
  }
  ATerm g_180 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SRDefT_4, not_null(z_174), (ATerm)ATempty, (ATerm)ATempty, not_null(a_175));
    return(t);
  }
  ATerm h_180 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(z_174), not_null(a_175), (ATerm)ATempty, not_null(x_174));
    return(t);
  }
  ATerm i_180 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(z_174), (ATerm)ATempty, (ATerm)ATempty, not_null(a_175));
    return(t);
  }
  ATerm j_180 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(a_175));
    return(t);
  }
  y_174 = t;
  n_174 :
  if(match_cons(y_174, sym_Anno_2))
    {
      z_174 = ATgetArgument(y_174, 0);
      a_175 = ATgetArgument(y_174, 1);
      {
        ATerm d_175 = NULL;
        ATerm i_175 = NULL;
        t = not_null(a_175);
        {
          ATerm y_9 (ATerm t)
          {
            t = term_a_40;
            return(t);
          }
          ATerm z_9 (ATerm t)
          {
            ATerm e_175 = NULL,g_175 = NULL;
            ATerm r_50;
            r_50 = t;
            {
              ATerm f_175 = NULL;
              t = Fst_0(t);
              {
                f_175 = t;
                if(((e_175 != NULL) && (e_175 != f_175)))
                  _fail(f_175);
                else
                  e_175 = f_175;
              }
            }
            t = r_50;
            {
              ATerm h_175 = NULL;
              t = Snd_0(t);
              {
                h_175 = t;
                if(((g_175 != NULL) && (g_175 != h_175)))
                  _fail(h_175);
                else
                  g_175 = h_175;
              }
              t = (ATerm) ATmakeAppl(sym_Op_2, term_k_50, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_175)), not_null(e_175)));
            }
            return(t);
          }
          t = foldr_2(t, y_9, z_9);
          {
            i_175 = t;
            if(((d_175 != NULL) && (d_175 != i_175)))
              _fail(i_175);
            else
              d_175 = i_175;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Anno_2, not_null(z_174), not_null(d_175));
      }
    }
  else
    {
      if(match_cons(y_174, sym_SortNoArgs_1))
        {
          z_174 = ATgetArgument(y_174, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, not_null(z_174), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(y_174, sym_Char_1))
            {
              z_174 = ATgetArgument(y_174, 0);
              {
                ATerm l_175 = NULL;
                ATerm m_175 = NULL;
                t = not_null(z_174);
                {
                  ATerm s_50 = t;
                  int w_50 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = DesugarChar_0(t);
                      ;
                      LocalPopChoice(w_50);
                    }
                  else
                    {
                      t = s_50;
                      {
                        t = explode_string_0(t);
                        t = DesugarCharGeneric_0(t);
                      }
                    }
                  {
                    m_175 = t;
                    if(((l_175 != NULL) && (l_175 != m_175)))
                      _fail(m_175);
                    else
                      l_175 = m_175;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(l_175));
              }
            }
          else
            {
              if(match_cons(y_174, sym_Con4_4))
                {
                  z_174 = ATgetArgument(y_174, 0);
                  a_175 = ATgetArgument(y_174, 1);
                  x_174 = ATgetArgument(y_174, 2);
                  t_174 = ATgetArgument(y_174, 3);
                  t = (ATerm) ATmakeAppl(sym_Con_3, not_null(z_174), not_null(x_174), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_174)), (ATerm) ATempty));
                }
              else
                {
                  if(match_cons(y_174, sym_Con3_3))
                    {
                      z_174 = ATgetArgument(y_174, 0);
                      a_175 = ATgetArgument(y_174, 1);
                      x_174 = ATgetArgument(y_174, 2);
                      t = (ATerm) ATmakeAppl(sym_Con_3, not_null(z_174), not_null(x_174), term_z_50);
                    }
                  else
                    {
                      if(match_cons(y_174, sym_Con1_2))
                        {
                          z_174 = ATgetArgument(y_174, 0);
                          a_175 = ATgetArgument(y_174, 1);
                          t = (ATerm) ATmakeAppl(sym_Con_3, not_null(z_174), not_null(a_175), term_z_50);
                        }
                      else
                        {
                          if(match_cons(y_174, sym_ListTail_2))
                            {
                              z_174 = ATgetArgument(y_174, 0);
                              a_175 = ATgetArgument(y_174, 1);
                              {
                                t = not_null(z_174);
                                {
                                  ATerm a_10 (ATerm t)
                                  {
                                    t = not_null(a_175);
                                    return(t);
                                  }
                                  ATerm b_10 (ATerm t)
                                  {
                                    ATerm x_175 = NULL,y_175 = NULL,z_175 = NULL;
                                    x_175 = t;
                                    e_174 :
                                    if(match_cons(x_175, sym__2))
                                      {
                                        y_175 = ATgetArgument(x_175, 0);
                                        z_175 = ATgetArgument(x_175, 1);
                                        t = (ATerm) ATmakeAppl(sym_Op_2, term_k_50, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_175)), not_null(y_175)));
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                    return(t);
                                  }
                                  t = foldr_2(t, a_10, b_10);
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(y_174, sym_List_1))
                                {
                                  z_174 = ATgetArgument(y_174, 0);
                                  {
                                    t = not_null(z_174);
                                    {
                                      ATerm c_10 (ATerm t)
                                      {
                                        t = term_a_40;
                                        return(t);
                                      }
                                      ATerm d_10 (ATerm t)
                                      {
                                        ATerm d_176 = NULL,e_176 = NULL,f_176 = NULL;
                                        d_176 = t;
                                        g_174 :
                                        if(match_cons(d_176, sym__2))
                                          {
                                            e_176 = ATgetArgument(d_176, 0);
                                            f_176 = ATgetArgument(d_176, 1);
                                            t = (ATerm) ATmakeAppl(sym_Op_2, term_k_50, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_176)), not_null(e_176)));
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      t = foldr_2(t, c_10, d_10);
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(y_174, sym_Tuple_1))
                                    {
                                      z_174 = ATgetArgument(y_174, 0);
                                      o_174 :
                                      if(((ATgetType(z_174) == AT_LIST) && !(ATisEmpty(z_174))))
                                        {
                                          u_174 = ATgetFirst((ATermList) z_174);
                                          v_174 = (ATerm) ATgetNext((ATermList) z_174);
                                          p_174 :
                                          if(((ATgetType(v_174) == AT_LIST) && ATisEmpty(v_174)))
                                            {
                                              {
                                                ATerm a_51 = t;
                                                int b_51 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = f_179(t);
                                                    ;
                                                    LocalPopChoice(b_51);
                                                  }
                                                else
                                                  {
                                                    t = a_51;
                                                    t = g_179(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              t = f_179(t);
                                            }
                                        }
                                      else
                                        {
                                          t = f_179(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(y_174, sym_CharCong_1))
                                        {
                                          z_174 = ATgetArgument(y_174, 0);
                                          t = h_179(t);
                                        }
                                      else
                                        {
                                          if(match_cons(y_174, sym_RealCong_1))
                                            {
                                              z_174 = ATgetArgument(y_174, 0);
                                              t = i_179(t);
                                            }
                                          else
                                            {
                                              if(match_cons(y_174, sym_IntCong_1))
                                                {
                                                  z_174 = ATgetArgument(y_174, 0);
                                                  t = j_179(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(y_174, sym_StrCong_1))
                                                    {
                                                      z_174 = ATgetArgument(y_174, 0);
                                                      t = k_179(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(y_174, sym_ModCongNoArgs_1))
                                                        {
                                                          z_174 = ATgetArgument(y_174, 0);
                                                          t = l_179(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(y_174, sym_ModCong_2))
                                                            {
                                                              z_174 = ATgetArgument(y_174, 0);
                                                              a_175 = ATgetArgument(y_174, 1);
                                                              t = m_179(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(y_174, sym_ListCong_2))
                                                                {
                                                                  z_174 = ATgetArgument(y_174, 0);
                                                                  a_175 = ATgetArgument(y_174, 1);
                                                                  t = n_179(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(y_174, sym_ListCongNoTail_1))
                                                                    {
                                                                      z_174 = ATgetArgument(y_174, 0);
                                                                      t = o_179(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(y_174, sym_TupleCong_2))
                                                                        {
                                                                          z_174 = ATgetArgument(y_174, 0);
                                                                          a_175 = ATgetArgument(y_174, 1);
                                                                          t = p_179(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(y_174, sym_TupleCong_1))
                                                                            {
                                                                              z_174 = ATgetArgument(y_174, 0);
                                                                              q_174 :
                                                                              if(((ATgetType(z_174) == AT_LIST) && !(ATisEmpty(z_174))))
                                                                                {
                                                                                  u_174 = ATgetFirst((ATermList) z_174);
                                                                                  v_174 = (ATerm) ATgetNext((ATermList) z_174);
                                                                                  r_174 :
                                                                                  if(((ATgetType(v_174) == AT_LIST) && ATisEmpty(v_174)))
                                                                                    {
                                                                                      {
                                                                                        ATerm o_51 = t;
                                                                                        int p_51 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = q_179(t);
                                                                                            ;
                                                                                            LocalPopChoice(p_51);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = o_51;
                                                                                            t = r_179(t);
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = q_179(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = q_179(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(y_174, sym_EmptyTupleCong_0))
                                                                                {
                                                                                  t = s_179(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(y_174, sym_AnnoCong_2))
                                                                                    {
                                                                                      z_174 = ATgetArgument(y_174, 0);
                                                                                      a_175 = ATgetArgument(y_174, 1);
                                                                                      s_174 :
                                                                                      if(match_cons(a_175, sym_StrategyCurly_1))
                                                                                        {
                                                                                          w_174 = ATgetArgument(a_175, 0);
                                                                                          t = t_179(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(y_174, sym_ParenStrat_1))
                                                                                        {
                                                                                          z_174 = ATgetArgument(y_174, 0);
                                                                                          t = u_179(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(y_174, sym_StratRuleNoCond_2))
                                                                                            {
                                                                                              z_174 = ATgetArgument(y_174, 0);
                                                                                              a_175 = ATgetArgument(y_174, 1);
                                                                                              t = v_179(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(y_174, sym_RuleNoCond_2))
                                                                                                {
                                                                                                  z_174 = ATgetArgument(y_174, 0);
                                                                                                  a_175 = ATgetArgument(y_174, 1);
                                                                                                  t = w_179(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(y_174, sym_OverlayNoArgs_2))
                                                                                                    {
                                                                                                      z_174 = ATgetArgument(y_174, 0);
                                                                                                      a_175 = ATgetArgument(y_174, 1);
                                                                                                      t = x_179(t);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(y_174, sym_RChoice_2))
                                                                                                        {
                                                                                                          z_174 = ATgetArgument(y_174, 0);
                                                                                                          a_175 = ATgetArgument(y_174, 1);
                                                                                                          t = y_179(t);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(y_174, sym_Prim_2))
                                                                                                            {
                                                                                                              z_174 = ATgetArgument(y_174, 0);
                                                                                                              a_175 = ATgetArgument(y_174, 1);
                                                                                                              t = z_179(t);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(y_174, sym_PrimNoArgs_1))
                                                                                                                {
                                                                                                                  z_174 = ATgetArgument(y_174, 0);
                                                                                                                  t = a_180(t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(y_174, sym_Call_2))
                                                                                                                    {
                                                                                                                      z_174 = ATgetArgument(y_174, 0);
                                                                                                                      a_175 = ATgetArgument(y_174, 1);
                                                                                                                      t = b_180(t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(y_174, sym_CallNoArgs_1))
                                                                                                                        {
                                                                                                                          z_174 = ATgetArgument(y_174, 0);
                                                                                                                          t = c_180(t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_cons(y_174, sym_SDef_3))
                                                                                                                            {
                                                                                                                              z_174 = ATgetArgument(y_174, 0);
                                                                                                                              a_175 = ATgetArgument(y_174, 1);
                                                                                                                              x_174 = ATgetArgument(y_174, 2);
                                                                                                                              t = d_180(t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_cons(y_174, sym_SDefNoArgs_2))
                                                                                                                                {
                                                                                                                                  z_174 = ATgetArgument(y_174, 0);
                                                                                                                                  a_175 = ATgetArgument(y_174, 1);
                                                                                                                                  t = e_180(t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_cons(y_174, sym_SRDef_3))
                                                                                                                                    {
                                                                                                                                      z_174 = ATgetArgument(y_174, 0);
                                                                                                                                      a_175 = ATgetArgument(y_174, 1);
                                                                                                                                      x_174 = ATgetArgument(y_174, 2);
                                                                                                                                      t = f_180(t);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_cons(y_174, sym_SRDefNoArgs_2))
                                                                                                                                        {
                                                                                                                                          z_174 = ATgetArgument(y_174, 0);
                                                                                                                                          a_175 = ATgetArgument(y_174, 1);
                                                                                                                                          t = g_180(t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_cons(y_174, sym_RDef_3))
                                                                                                                                            {
                                                                                                                                              z_174 = ATgetArgument(y_174, 0);
                                                                                                                                              a_175 = ATgetArgument(y_174, 1);
                                                                                                                                              x_174 = ATgetArgument(y_174, 2);
                                                                                                                                              t = h_180(t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_cons(y_174, sym_RDefNoArgs_2))
                                                                                                                                                {
                                                                                                                                                  z_174 = ATgetArgument(y_174, 0);
                                                                                                                                                  a_175 = ATgetArgument(y_174, 1);
                                                                                                                                                  t = i_180(t);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_cons(y_174, sym_Module_2))
                                                                                                                                                    {
                                                                                                                                                      z_174 = ATgetArgument(y_174, 0);
                                                                                                                                                      a_175 = ATgetArgument(y_174, 1);
                                                                                                                                                      t = j_180(t);
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
ATerm repeat_1 (ATerm t, ATerm g_106 (ATerm))
{
  ATerm u_180 (ATerm t)
  {
    ATerm e_10 (ATerm t)
    {
      t = g_106(t);
      t = u_180(t);
      return(t);
    }
    t = try_1(t, e_10);
    return(t);
  }
  t = u_180(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm e_107 (ATerm))
{
  t = e_107(t);
  {
    ATerm f_10 (ATerm t)
    {
      t = topdown_1(t, e_107);
      return(t);
    }
    t = _all(t, f_10);
  }
  return(t);
}
ATerm pre_desugar_0 (ATerm t)
{
  ATerm g_10 (ATerm t)
  {
    t = repeat_1(t, Desugar_0);
    t = try_1(t, DesugarOnce_0);
    return(t);
  }
  t = topdown_1(t, g_10);
  return(t);
}
ATerm frontend_transformation_0 (ATerm t)
{
  ATerm h_10 (ATerm t)
  {
    t = term_q_51;
    return(t);
  }
  t = timing_1(t, h_10);
  {
    t = pre_desugar_0(t);
    {
      ATerm i_10 (ATerm t)
      {
        t = term_s_51;
        return(t);
      }
      t = timing_1(t, i_10);
      {
        t = normalize_spec_0(t);
        {
          ATerm j_10 (ATerm t)
          {
            t = term_t_51;
            return(t);
          }
          t = timing_1(t, j_10);
          {
            ATerm v_51;
            v_51 = t;
            t = spec_use_def_0(t);
            t = v_51;
            {
              ATerm k_10 (ATerm t)
              {
                t = term_w_51;
                return(t);
              }
              t = timing_1(t, k_10);
              {
                t = ExpandOverlays_0(t);
                {
                  ATerm l_10 (ATerm t)
                  {
                    t = term_d_52;
                    return(t);
                  }
                  t = timing_1(t, l_10);
                  {
                    t = CheckConstructors_0(t);
                    {
                      ATerm m_10 (ATerm t)
                      {
                        t = term_e_52;
                        return(t);
                      }
                      t = timing_1(t, m_10);
                      {
                        t = RulesToSdefs_0(t);
                        {
                          ATerm n_10 (ATerm t)
                          {
                            t = term_f_52;
                            return(t);
                          }
                          t = timing_1(t, n_10);
                          {
                            t = DesugarListMatching_0(t);
                            {
                              ATerm o_10 (ATerm t)
                              {
                                t = term_g_52;
                                return(t);
                              }
                              t = timing_1(t, o_10);
                              {
                                t = strename_0(t);
                                {
                                  ATerm p_10 (ATerm t)
                                  {
                                    t = term_h_52;
                                    return(t);
                                  }
                                  t = timing_1(t, p_10);
                                  {
                                    ATerm q_10 (ATerm t)
                                    {
                                      ATerm r_10 (ATerm t)
                                      {
                                        ATerm s_10 (ATerm t)
                                        {
                                          t = Strategies_1(t, desugar_spec_0);
                                          return(t);
                                        }
                                        t = Cons_2(t, s_10, Nil_0);
                                        return(t);
                                      }
                                      t = Cons_2(t, _id, r_10);
                                      return(t);
                                    }
                                    t = Specification_1(t, q_10);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
ATerm _2 (ATerm t, ATerm c_90 (ATerm), ATerm d_90 (ATerm))
{
  ATerm b_181 = NULL,c_181 = NULL,d_181 = NULL;
  b_181 = t;
  a_181 :
  if(match_cons(b_181, sym__2))
    {
      c_181 = ATgetArgument(b_181, 0);
      d_181 = ATgetArgument(b_181, 1);
      {
        ATerm h_181 = NULL,j_181 = NULL;
        ATerm i_181 = NULL;
        t = SSLgetAnnotations(not_null(b_181));
        {
          i_181 = t;
          if(((h_181 != NULL) && (h_181 != i_181)))
            _fail(i_181);
          else
            h_181 = i_181;
        }
        {
          t = not_null(c_181);
          {
            ATerm l_181 = NULL;
            t = c_90(t);
            {
              j_181 = t;
              {
                t = not_null(d_181);
                {
                  ATerm n_181 = NULL;
                  t = d_90(t);
                  {
                    l_181 = t;
                    {
                      ATerm o_181 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(j_181), not_null(l_181)), not_null(h_181));
                      {
                        o_181 = t;
                        if(((n_181 != NULL) && (n_181 != o_181)))
                          _fail(o_181);
                        else
                          n_181 = o_181;
                      }
                      t = not_null(n_181);
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
  ATerm i_52;
  i_52 = t;
  {
    ATerm v_181 = NULL;
    ATerm w_181 = NULL;
    t = term_o_23;
    {
      t = whoami_0(t);
      {
        w_181 = t;
        if(((v_181 != NULL) && (v_181 != w_181)))
          _fail(w_181);
        else
          v_181 = w_181;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_27, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_52), not_null(v_181)), term_m_52));
      {
        t = printnl_0(t);
        {
          t = term_c_28;
          t = exit_0(t);
        }
      }
    }
  }
  t = i_52;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm a_182 = NULL,b_182 = NULL,c_182 = NULL;
  a_182 = t;
  z_181 :
  if(match_cons(a_182, sym__2))
    {
      b_182 = ATgetArgument(a_182, 0);
      c_182 = ATgetArgument(a_182, 1);
      {
        ATerm s_52;
        s_52 = t;
        t = SSL_printnl(not_null(b_182), not_null(c_182));
        t = s_52;
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
  ATerm h_182 = NULL;
  h_182 = t;
  t = SSL_implode_string(not_null(h_182));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_52 = t;
  int v_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(v_52);
    }
  else
    {
      t = t_52;
      {
        ATerm m_182 = NULL,n_182 = NULL,o_182 = NULL;
        m_182 = t;
        l_182 :
        if(((ATgetType(m_182) == AT_LIST) && !(ATisEmpty(m_182))))
          {
            n_182 = ATgetFirst((ATermList) m_182);
            o_182 = (ATerm) ATgetNext((ATermList) m_182);
            {
              t = not_null(n_182);
              {
                ATerm t_10 (ATerm t)
                {
                  t = not_null(o_182);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, t_10);
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
  ATerm y_182 = NULL;
  ATerm a_183 = NULL;
  y_182 = t;
  {
    ATerm b_183 = NULL;
    ATerm d_183 = NULL,e_183 = NULL,f_183 = NULL;
    t = not_null(y_182);
    {
      b_183 = t;
      {
        t = SSL_explode_term(not_null(b_183));
        {
          d_183 = t;
          w_182 :
          if(match_cons(d_183, sym__2))
            {
              e_183 = ATgetArgument(d_183, 0);
              f_183 = ATgetArgument(d_183, 1);
              x_182 :
              if(match_string(e_183, ""))
                {
                  if(((a_183 != NULL) && (a_183 != f_183)))
                    _fail(f_183);
                  else
                    a_183 = f_183;
                }
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
      t = not_null(a_183);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_113 (ATerm))
{
  ATerm j_183 (ATerm t)
  {
    ATerm w_52 = t;
    int x_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, j_183);
        ;
        LocalPopChoice(x_52);
      }
    else
      {
        t = w_52;
        {
          t = Nil_0(t);
          t = l_113(t);
        }
      }
    return(t);
  }
  t = j_183(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm m_183 = NULL,n_183 = NULL,o_183 = NULL;
  m_183 = t;
  l_183 :
  if(match_cons(m_183, sym__2))
    {
      n_183 = ATgetArgument(m_183, 0);
      o_183 = ATgetArgument(m_183, 1);
      {
        t = not_null(n_183);
        {
          ATerm u_10 (ATerm t)
          {
            t = not_null(o_183);
            return(t);
          }
          t = at_end_1(t, u_10);
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
  ATerm y_52 = t;
  int z_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(z_52);
    }
  else
    {
      t = y_52;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm t_183 = NULL;
  t_183 = t;
  t = SSL_explode_string(not_null(t_183));
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
  ATerm g_53 = t;
  int h_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(h_53);
    }
  else
    {
      t = g_53;
      {
        ATerm i_53 = t;
        int j_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_10 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, v_10);
            ;
            LocalPopChoice(j_53);
          }
        else
          {
            t = i_53;
            {
              ATerm c_184 = NULL,d_184 = NULL,e_184 = NULL;
              c_184 = t;
              b_184 :
              if(match_cons(c_184, sym_Path_1))
                {
                  d_184 = ATgetArgument(c_184, 0);
                  t = not_null(d_184);
                }
              else
                {
                  if(match_cons(c_184, sym_Var_1))
                    {
                      d_184 = ATgetArgument(c_184, 0);
                      {
                        t = not_null(d_184);
                        {
                          ATerm k_53 = t;
                          int p_53 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(p_53);
                            }
                          else
                            {
                              t = k_53;
                              {
                                ATerm w_10 (ATerm t)
                                {
                                  t = term_q_53;
                                  return(t);
                                }
                                t = debug_1(t, w_10);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(c_184, sym_Prefix_2))
                        {
                          d_184 = ATgetArgument(c_184, 0);
                          e_184 = ATgetArgument(c_184, 1);
                          {
                            ATerm j_184 = NULL,l_184 = NULL;
                            ATerm v_53;
                            v_53 = t;
                            {
                              ATerm k_184 = NULL;
                              t = not_null(d_184);
                              {
                                t = eval_config_0(t);
                                {
                                  k_184 = t;
                                  if(((j_184 != NULL) && (j_184 != k_184)))
                                    _fail(k_184);
                                  else
                                    j_184 = k_184;
                                }
                              }
                            }
                            t = v_53;
                            {
                              ATerm m_184 = NULL;
                              t = not_null(e_184);
                              {
                                t = eval_config_0(t);
                                {
                                  m_184 = t;
                                  if(((l_184 != NULL) && (l_184 != m_184)))
                                    _fail(m_184);
                                  else
                                    l_184 = m_184;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_184), not_null(l_184));
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
  ATerm u_184 = NULL;
  u_184 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_w_53, not_null(u_184));
    {
      t = table_get_0(t);
      {
        ATerm x_10 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm x_53;
            x_53 = t;
            {
              ATerm w_184 = NULL;
              ATerm x_184 = NULL;
              x_184 = t;
              if(((w_184 != NULL) && (w_184 != x_184)))
                _fail(x_184);
              else
                w_184 = x_184;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_w_53, not_null(u_184), not_null(w_184));
                t = table_put_0(t);
              }
            }
            t = x_53;
          }
          return(t);
        }
        t = try_1(t, x_10);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm l_126 (ATerm))
{
  ATerm y_10 (ATerm t)
  {
    ATerm y_53;
    y_53 = t;
    {
      ATerm b_185 = NULL;
      ATerm c_185 = NULL;
      t = term_d_20;
      {
        t = get_config_0(t);
        {
          c_185 = t;
          if(((b_185 != NULL) && (b_185 != c_185)))
            _fail(c_185);
          else
            b_185 = c_185;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_185), term_z_53);
        t = geq_0(t);
      }
    }
    t = y_53;
    t = l_126(t);
    return(t);
  }
  t = try_1(t, y_10);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm i_185 = NULL,j_185 = NULL,k_185 = NULL,l_185 = NULL;
  i_185 = t;
  g_185 :
  if(match_cons(i_185, sym__2))
    {
      j_185 = ATgetArgument(i_185, 0);
      k_185 = ATgetArgument(i_185, 1);
      h_185 :
      if(match_cons(k_185, sym_Stream_1))
        {
          l_185 = ATgetArgument(k_185, 0);
          {
            ATerm o_185 = NULL;
            t = SSL_fputc(not_null(j_185), not_null(l_185));
            {
              ATerm p_185 = NULL;
              p_185 = t;
              if(((o_185 != NULL) && (o_185 != p_185)))
                _fail(p_185);
              else
                o_185 = p_185;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_185));
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
  ATerm w_185 = NULL,x_185 = NULL,y_185 = NULL,z_185 = NULL;
  w_185 = t;
  u_185 :
  if(match_cons(w_185, sym__2))
    {
      x_185 = ATgetArgument(w_185, 0);
      z_185 = ATgetArgument(w_185, 1);
      v_185 :
      if(match_cons(x_185, sym_Stream_1))
        {
          y_185 = ATgetArgument(x_185, 0);
          {
            ATerm c_186 = NULL;
            t = SSL_write_term_to_stream_text(not_null(y_185), not_null(z_185));
            {
              ATerm d_186 = NULL;
              d_186 = t;
              if(((c_186 != NULL) && (c_186 != d_186)))
                _fail(d_186);
              else
                c_186 = d_186;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_186));
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
  ATerm z_10 (ATerm t)
  {
    ATerm h_186 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm i_186 = NULL;
      i_186 = t;
      if(((h_186 != NULL) && (h_186 != i_186)))
        _fail(i_186);
      else
        h_186 = i_186;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_49, not_null(h_186));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, z_10);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm o_186 = NULL,p_186 = NULL,q_186 = NULL,r_186 = NULL;
  o_186 = t;
  m_186 :
  if(match_cons(o_186, sym__2))
    {
      p_186 = ATgetArgument(o_186, 0);
      r_186 = ATgetArgument(o_186, 1);
      n_186 :
      if(match_cons(p_186, sym_Stream_1))
        {
          q_186 = ATgetArgument(p_186, 0);
          {
            ATerm u_186 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(q_186), not_null(r_186));
            {
              ATerm v_186 = NULL;
              v_186 = t;
              if(((u_186 != NULL) && (u_186 != v_186)))
                _fail(v_186);
              else
                u_186 = v_186;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_186));
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
ATerm WriteToFile_1 (ATerm t, ATerm h_125 (ATerm))
{
  ATerm c_187 = NULL,d_187 = NULL,e_187 = NULL;
  c_187 = t;
  b_187 :
  if(match_cons(c_187, sym__2))
    {
      d_187 = ATgetArgument(c_187, 0);
      e_187 = ATgetArgument(c_187, 1);
      {
        ATerm h_187 = NULL,j_187 = NULL;
        t = not_null(d_187);
        {
          ATerm i_187 = NULL;
          i_187 = t;
          if(((h_187 != NULL) && (h_187 != i_187)))
            _fail(i_187);
          else
            h_187 = i_187;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_187), term_a_54);
            {
              t = open_stream_0(t);
              {
                ATerm k_187 = NULL;
                k_187 = t;
                if(((j_187 != NULL) && (j_187 != k_187)))
                  _fail(k_187);
                else
                  j_187 = k_187;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_187), not_null(e_187));
                  {
                    t = h_125(t);
                    {
                      t = fclose_0(t);
                      t = not_null(e_187);
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
  ATerm s_187 = NULL;
  ATerm f_54;
  f_54 = t;
  {
    ATerm a_11 (ATerm t)
    {
      ATerm g_54 = t;
      int h_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_11 (ATerm t)
          {
            ATerm t_187 = NULL,u_187 = NULL;
            t_187 = t;
            p_187 :
            if(match_cons(t_187, sym_Output_1))
              {
                u_187 = ATgetArgument(t_187, 0);
                if(((s_187 != NULL) && (s_187 != u_187)))
                  _fail(u_187);
                else
                  s_187 = u_187;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, b_11);
          ;
          LocalPopChoice(h_54);
        }
      else
        {
          t = g_54;
          {
            ATerm v_187 = NULL;
            t = term_i_54;
            {
              v_187 = t;
              if(((s_187 != NULL) && (s_187 != v_187)))
                _fail(v_187);
              else
                s_187 = v_187;
            }
          }
        }
      return(t);
    }
    t = _2(t, a_11, _id);
  }
  t = f_54;
  {
    ATerm c_11 (ATerm t)
    {
      ATerm d_11 (ATerm t)
      {
        t = not_null(s_187);
        return(t);
      }
      t = split_2(t, d_11, _id);
      return(t);
    }
    t = _2(t, _id, c_11);
    {
      ATerm k_54 = t;
      int n_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_11 (ATerm t)
          {
            ATerm f_11 (ATerm t)
            {
              ATerm w_187 = NULL;
              w_187 = t;
              r_187 :
              if(!(match_cons(w_187, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, f_11);
            return(t);
          }
          t = _2(t, e_11, WriteToBinaryFile_0);
          ;
          LocalPopChoice(n_54);
        }
      else
        {
          t = k_54;
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
ATerm apply_strategy_1 (ATerm t, ATerm j_128 (ATerm))
{
  ATerm c_188 = NULL,e_188 = NULL,f_188 = NULL,g_188 = NULL;
  ATerm o_54;
  o_54 = t;
  t = dtime_0(t);
  t = o_54;
  {
    t = j_128(t);
    {
      ATerm p_54;
      p_54 = t;
      {
        ATerm d_188 = NULL;
        t = dtime_0(t);
        {
          d_188 = t;
          if(((c_188 != NULL) && (c_188 != d_188)))
            _fail(d_188);
          else
            c_188 = d_188;
        }
      }
      t = p_54;
      {
        e_188 = t;
        b_188 :
        if(match_cons(e_188, sym__2))
          {
            f_188 = ATgetArgument(e_188, 0);
            g_188 = ATgetArgument(e_188, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_188)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(c_188))), not_null(g_188));
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
  ATerm o_188 = NULL,p_188 = NULL;
  ATerm v_188 (ATerm t)
  {
    t = SSL_fclose(not_null(p_188));
    return(t);
  }
  p_188 = t;
  n_188 :
  if(match_cons(p_188, sym_Stream_1))
    {
      o_188 = ATgetArgument(p_188, 0);
      {
        ATerm q_54 = t;
        int v_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(o_188));
            ;
            LocalPopChoice(v_54);
          }
        else
          {
            t = q_54;
            t = v_188(t);
          }
      }
    }
  else
    {
      t = v_188(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm y_188 = NULL,z_188 = NULL;
  y_188 = t;
  x_188 :
  if(match_cons(y_188, sym_Stream_1))
    {
      z_188 = ATgetArgument(y_188, 0);
      t = SSL_read_term_from_stream(not_null(z_188));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm t_124 (ATerm))
{
  ATerm w_54;
  w_54 = t;
  {
    ATerm e_189 = NULL,g_189 = NULL;
    ATerm x_54;
    x_54 = t;
    {
      ATerm f_189 = NULL;
      t = t_124(t);
      {
        f_189 = t;
        if(((e_189 != NULL) && (e_189 != f_189)))
          _fail(f_189);
        else
          e_189 = f_189;
      }
    }
    t = x_54;
    {
      ATerm h_189 = NULL;
      h_189 = t;
      if(((g_189 != NULL) && (g_189 != h_189)))
        _fail(h_189);
      else
        g_189 = h_189;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_27, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_189)), not_null(e_189)));
        t = printnl_0(t);
      }
    }
  }
  t = w_54;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm n_189 = NULL,o_189 = NULL,p_189 = NULL;
  n_189 = t;
  m_189 :
  if(match_cons(n_189, sym__2))
    {
      o_189 = ATgetArgument(n_189, 0);
      p_189 = ATgetArgument(n_189, 1);
      {
        ATerm s_189 = NULL;
        t = SSL_fopen(not_null(o_189), not_null(p_189));
        {
          ATerm t_189 = NULL;
          t_189 = t;
          if(((s_189 != NULL) && (s_189 != t_189)))
            _fail(t_189);
          else
            s_189 = t_189;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_189));
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
  ATerm x_189 = NULL;
  x_189 = t;
  t = SSL_is_string(not_null(x_189));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm b_190 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm c_190 = NULL;
    c_190 = t;
    if(((b_190 != NULL) && (b_190 != c_190)))
      _fail(c_190);
    else
      b_190 = c_190;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_190));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm f_190 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm g_190 = NULL;
    g_190 = t;
    if(((f_190 != NULL) && (f_190 != g_190)))
      _fail(g_190);
    else
      f_190 = g_190;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_190));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm j_190 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm k_190 = NULL;
    k_190 = t;
    if(((j_190 != NULL) && (j_190 != k_190)))
      _fail(k_190);
    else
      j_190 = k_190;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_190));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm q_190 = NULL;
  q_190 = t;
  p_190 :
  if(match_cons(q_190, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(q_190, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(q_190, sym_stdin_0))
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
  ATerm a_191 = NULL;
  ATerm c_191 = NULL,d_191 = NULL;
  a_191 = t;
  {
    ATerm e_191 = NULL;
    ATerm g_191 = NULL,h_191 = NULL,i_191 = NULL,j_191 = NULL,k_191 = NULL;
    t = not_null(a_191);
    {
      e_191 = t;
      {
        t = SSL_explode_term(not_null(e_191));
        {
          g_191 = t;
          x_190 :
          if(match_cons(g_191, sym__2))
            {
              h_191 = ATgetArgument(g_191, 0);
              i_191 = ATgetArgument(g_191, 1);
              y_190 :
              if(match_string(h_191, ""))
                {
                  z_190 :
                  if(((ATgetType(i_191) == AT_LIST) && !(ATisEmpty(i_191))))
                    {
                      j_191 = ATgetFirst((ATermList) i_191);
                      k_191 = (ATerm) ATgetNext((ATermList) i_191);
                      {
                        if(((d_191 != NULL) && (d_191 != j_191)))
                          _fail(j_191);
                        else
                          d_191 = j_191;
                        if(((c_191 != NULL) && (c_191 != k_191)))
                          _fail(k_191);
                        else
                          c_191 = k_191;
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
    t = not_null(d_191);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm s_191 = NULL,t_191 = NULL,u_191 = NULL;
  s_191 = t;
  r_191 :
  if(match_cons(s_191, sym__2))
    {
      t_191 = ATgetArgument(s_191, 0);
      u_191 = ATgetArgument(s_191, 1);
      {
        ATerm y_54 = t;
        int z_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(z_54);
          }
        else
          {
            t = y_54;
            {
              ATerm a_55 = t;
              int b_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_11 (ATerm t)
                  {
                    ATerm v_191 = NULL,w_191 = NULL;
                    v_191 = t;
                    q_191 :
                    if(match_cons(v_191, sym_Path_1))
                      {
                        w_191 = ATgetArgument(v_191, 0);
                        t = not_null(w_191);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, g_11, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(b_55);
                }
              else
                {
                  t = a_55;
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
  ATerm e_192 = NULL;
  ATerm c_55 = t;
  int d_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_192 = NULL;
      ATerm d_192 = NULL;
      d_192 = t;
      if(((c_192 != NULL) && (c_192 != d_192)))
        _fail(d_192);
      else
        c_192 = d_192;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_192), term_e_55);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(d_55);
    }
  else
    {
      t = c_55;
      {
        ATerm h_11 (ATerm t)
        {
          t = term_f_55;
          return(t);
        }
        t = debug_1(t, h_11);
        _fail(t);
      }
    }
  {
    ATerm g_55;
    g_55 = t;
    {
      ATerm f_192 = NULL;
      t = read_from_stream_0(t);
      {
        f_192 = t;
        if(((e_192 != NULL) && (e_192 != f_192)))
          _fail(f_192);
        else
          e_192 = f_192;
      }
    }
    t = g_55;
    {
      t = fclose_0(t);
      t = not_null(e_192);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm l_120 (ATerm), ATerm m_120 (ATerm))
{
  ATerm k_192 = NULL,m_192 = NULL;
  ATerm h_55;
  h_55 = t;
  {
    ATerm l_192 = NULL;
    t = l_120(t);
    {
      l_192 = t;
      if(((k_192 != NULL) && (k_192 != l_192)))
        _fail(l_192);
      else
        k_192 = l_192;
    }
  }
  t = h_55;
  {
    ATerm n_192 = NULL;
    t = m_120(t);
    {
      n_192 = t;
      if(((m_192 != NULL) && (m_192 != n_192)))
        _fail(n_192);
      else
        m_192 = n_192;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_192), not_null(m_192));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm t_192 = NULL;
  ATerm i_55;
  i_55 = t;
  {
    ATerm j_55 = t;
    int k_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_11 (ATerm t)
        {
          ATerm u_192 = NULL,v_192 = NULL;
          u_192 = t;
          r_192 :
          if(match_cons(u_192, sym_Input_1))
            {
              v_192 = ATgetArgument(u_192, 0);
              if(((t_192 != NULL) && (t_192 != v_192)))
                _fail(v_192);
              else
                t_192 = v_192;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, i_11);
        ;
        LocalPopChoice(k_55);
      }
    else
      {
        t = j_55;
        {
          ATerm w_192 = NULL;
          t = term_l_55;
          {
            w_192 = t;
            if(((t_192 != NULL) && (t_192 != w_192)))
              _fail(w_192);
            else
              t_192 = w_192;
          }
        }
      }
  }
  t = i_55;
  {
    ATerm j_11 (ATerm t)
    {
      t = not_null(t_192);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, j_11);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm k_11 (ATerm t)
  {
    ATerm b_193 = NULL;
    b_193 = t;
    z_192 :
    if(!(match_string(b_193, "-k")))
      {
        if(!(match_string(b_193, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_11 (ATerm t)
  {
    ATerm q_55;
    q_55 = t;
    {
      ATerm c_193 = NULL;
      ATerm d_193 = NULL;
      t = string_to_int_0(t);
      {
        d_193 = t;
        if(((c_193 != NULL) && (c_193 != d_193)))
          _fail(d_193);
        else
          c_193 = d_193;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_55, not_null(c_193));
        t = set_config_0(t);
      }
    }
    t = q_55;
    return(t);
  }
  ATerm m_11 (ATerm t)
  {
    t = term_s_55;
    return(t);
  }
  t = ArgOption_3(t, k_11, l_11, m_11);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm g_193 = NULL;
  g_193 = t;
  t = SSL_string_to_int(not_null(g_193));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm x_55 = t;
  int y_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_11 (ATerm t)
      {
        ATerm o_193 = NULL;
        o_193 = t;
        j_193 :
        if(!(match_string(o_193, "-S")))
          {
            if(!(match_string(o_193, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm o_11 (ATerm t)
      {
        t = term_z_55;
        t = set_config_0(t);
        t = term_c_56;
        return(t);
      }
      ATerm p_11 (ATerm t)
      {
        t = term_d_56;
        return(t);
      }
      t = Option_3(t, n_11, o_11, p_11);
      ;
      LocalPopChoice(y_55);
    }
  else
    {
      t = x_55;
      {
        ATerm e_56 = t;
        int f_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_11 (ATerm t)
            {
              ATerm p_193 = NULL;
              p_193 = t;
              k_193 :
              if(!(match_string(p_193, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm r_11 (ATerm t)
            {
              ATerm s_193 = NULL;
              ATerm g_56;
              g_56 = t;
              {
                ATerm q_193 = NULL;
                ATerm r_193 = NULL;
                t = string_to_int_0(t);
                {
                  r_193 = t;
                  if(((q_193 != NULL) && (q_193 != r_193)))
                    _fail(r_193);
                  else
                    q_193 = r_193;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_d_20, not_null(q_193));
                  t = set_config_0(t);
                }
              }
              t = g_56;
              {
                ATerm t_193 = NULL;
                t_193 = t;
                if(((s_193 != NULL) && (s_193 != t_193)))
                  _fail(t_193);
                else
                  s_193 = t_193;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(s_193));
              }
              return(t);
            }
            ATerm s_11 (ATerm t)
            {
              t = term_h_56;
              return(t);
            }
            t = ArgOption_3(t, q_11, r_11, s_11);
            ;
            LocalPopChoice(f_56);
          }
        else
          {
            t = e_56;
            {
              ATerm u_11 (ATerm t)
              {
                ATerm u_193 = NULL;
                u_193 = t;
                n_193 :
                if(!(match_string(u_193, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm v_11 (ATerm t)
              {
                t = term_j_56;
                t = set_config_0(t);
                t = term_k_56;
                return(t);
              }
              ATerm w_11 (ATerm t)
              {
                t = term_l_56;
                return(t);
              }
              t = Option_3(t, u_11, v_11, w_11);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm m_56 = t;
  int s_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(s_56);
    }
  else
    {
      t = m_56;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm x_11 (ATerm t)
  {
    ATerm a_194 = NULL;
    a_194 = t;
    x_193 :
    if(!(match_string(a_194, "-o")))
      {
        if(!(match_string(a_194, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_11 (ATerm t)
  {
    ATerm d_194 = NULL;
    ATerm t_56;
    t_56 = t;
    {
      ATerm b_194 = NULL;
      ATerm c_194 = NULL;
      c_194 = t;
      if(((b_194 != NULL) && (b_194 != c_194)))
        _fail(c_194);
      else
        b_194 = c_194;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_56, not_null(b_194));
        t = set_config_0(t);
      }
    }
    t = t_56;
    {
      ATerm e_194 = NULL;
      e_194 = t;
      if(((d_194 != NULL) && (d_194 != e_194)))
        _fail(e_194);
      else
        d_194 = e_194;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_194));
    }
    return(t);
  }
  ATerm z_11 (ATerm t)
  {
    t = term_v_56;
    return(t);
  }
  t = ArgOption_3(t, x_11, y_11, z_11);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm w_56 = t;
  int x_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(x_56);
    }
  else
    {
      t = w_56;
      {
        ATerm a_12 (ATerm t)
        {
          ATerm i_194 = NULL;
          i_194 = t;
          h_194 :
          if(!(match_string(i_194, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm c_12 (ATerm t)
        {
          t = term_l_57;
          t = set_config_0(t);
          t = term_m_57;
          return(t);
        }
        ATerm h_12 (ATerm t)
        {
          t = term_n_57;
          return(t);
        }
        t = Option_3(t, a_12, c_12, h_12);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm o_194 = NULL,p_194 = NULL,q_194 = NULL,r_194 = NULL,s_194 = NULL;
  o_194 = t;
  m_194 :
  if(match_string(o_194, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(o_194) == AT_LIST) && !(ATisEmpty(o_194))))
        {
          p_194 = ATgetFirst((ATermList) o_194);
          q_194 = (ATerm) ATgetNext((ATermList) o_194);
          n_194 :
          if(((ATgetType(q_194) == AT_LIST) && !(ATisEmpty(q_194))))
            {
              r_194 = ATgetFirst((ATermList) q_194);
              s_194 = (ATerm) ATgetNext((ATermList) q_194);
              {
                ATerm w_194 = NULL;
                ATerm o_57;
                o_57 = t;
                {
                  t = not_null(p_194);
                  t = k_0(t);
                }
                t = o_57;
                {
                  ATerm x_194 = NULL;
                  t = not_null(r_194);
                  {
                    t = m_0(t);
                    {
                      x_194 = t;
                      if(((w_194 != NULL) && (w_194 != x_194)))
                        _fail(x_194);
                      else
                        w_194 = x_194;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_194)), not_null(w_194));
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
  ATerm i_12 (ATerm t)
  {
    ATerm e_195 = NULL;
    e_195 = t;
    b_195 :
    if(!(match_string(e_195, "-i")))
      {
        if(!(match_string(e_195, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_12 (ATerm t)
  {
    ATerm h_195 = NULL;
    ATerm p_57;
    p_57 = t;
    {
      ATerm f_195 = NULL;
      ATerm g_195 = NULL;
      g_195 = t;
      if(((f_195 != NULL) && (f_195 != g_195)))
        _fail(g_195);
      else
        f_195 = g_195;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_57, not_null(f_195));
        t = set_config_0(t);
      }
    }
    t = p_57;
    {
      ATerm i_195 = NULL;
      i_195 = t;
      if(((h_195 != NULL) && (h_195 != i_195)))
        _fail(i_195);
      else
        h_195 = i_195;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_195));
    }
    return(t);
  }
  ATerm b_13 (ATerm t)
  {
    t = term_r_57;
    return(t);
  }
  t = ArgOption_3(t, i_12, r_12, b_13);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm s_57 = t;
  int t_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(t_57);
    }
  else
    {
      t = s_57;
      {
        ATerm u_57 = t;
        int x_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(x_57);
          }
        else
          {
            t = u_57;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm m_195 = NULL;
  t = report_run_time_0(t);
  {
    ATerm n_195 = NULL;
    t = term_o_23;
    {
      t = whoami_0(t);
      {
        n_195 = t;
        if(((m_195 != NULL) && (m_195 != n_195)))
          _fail(n_195);
        else
          m_195 = n_195;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_27, (ATerm) ATinsert(ATinsert(ATempty, term_e_58), not_null(m_195)));
      {
        t = printnl_0(t);
        {
          t = term_c_28;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_f_58;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm q_195 = NULL;
  q_195 = t;
  t = SSL_TicksToSeconds(not_null(q_195));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_195 = NULL,w_195 = NULL,x_195 = NULL;
  v_195 = t;
  u_195 :
  if(match_cons(v_195, sym__2))
    {
      w_195 = ATgetArgument(v_195, 0);
      x_195 = ATgetArgument(v_195, 1);
      {
        ATerm g_58 = t;
        int i_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_195), not_null(x_195));
            ;
            LocalPopChoice(i_58);
          }
        else
          {
            t = g_58;
            t = SSL_addr(not_null(w_195), not_null(x_195));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm w_118 (ATerm), ATerm x_118 (ATerm))
{
  ATerm l_58 = t;
  int m_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_118(t);
      ;
      LocalPopChoice(m_58);
    }
  else
    {
      t = l_58;
      {
        ATerm e_196 = NULL,f_196 = NULL,g_196 = NULL;
        e_196 = t;
        d_196 :
        if(((ATgetType(e_196) == AT_LIST) && !(ATisEmpty(e_196))))
          {
            f_196 = ATgetFirst((ATermList) e_196);
            g_196 = (ATerm) ATgetNext((ATermList) e_196);
            {
              ATerm j_196 = NULL;
              ATerm k_196 = NULL;
              t = not_null(g_196);
              {
                t = foldr_2(t, w_118, x_118);
                {
                  k_196 = t;
                  if(((j_196 != NULL) && (j_196 != k_196)))
                    _fail(k_196);
                  else
                    j_196 = k_196;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_196), not_null(j_196));
                t = x_118(t);
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
ATerm crush_2 (ATerm t, ATerm p_122 (ATerm), ATerm q_122 (ATerm))
{
  ATerm r_196 = NULL;
  ATerm t_196 = NULL;
  r_196 = t;
  {
    ATerm u_196 = NULL;
    ATerm w_196 = NULL,x_196 = NULL,y_196 = NULL;
    t = not_null(r_196);
    {
      u_196 = t;
      {
        t = SSL_explode_term(not_null(u_196));
        {
          w_196 = t;
          q_196 :
          if(match_cons(w_196, sym__2))
            {
              x_196 = ATgetArgument(w_196, 0);
              y_196 = ATgetArgument(w_196, 1);
              if(((t_196 != NULL) && (t_196 != y_196)))
                _fail(y_196);
              else
                t_196 = y_196;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_196);
      t = foldr_2(t, p_122, q_122);
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
    ATerm n_13 (ATerm t)
    {
      t = term_s_24;
      return(t);
    }
    t = crush_2(t, n_13, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm e_197 = NULL,f_197 = NULL,g_197 = NULL;
  e_197 = t;
  d_197 :
  if(match_cons(e_197, sym__2))
    {
      f_197 = ATgetArgument(e_197, 0);
      g_197 = ATgetArgument(e_197, 1);
      {
        ATerm n_58;
        n_58 = t;
        {
          ATerm p_58 = t;
          int s_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(f_197), not_null(g_197));
              ;
              LocalPopChoice(s_58);
            }
          else
            {
              t = p_58;
              t = SSL_gtr(not_null(f_197), not_null(g_197));
            }
        }
        t = n_58;
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
  ATerm m_197 = NULL;
  ATerm t_58 = t;
  int u_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_197 = NULL,o_197 = NULL,p_197 = NULL;
      n_197 = t;
      l_197 :
      if(match_cons(n_197, sym__2))
        {
          o_197 = ATgetArgument(n_197, 0);
          p_197 = ATgetArgument(n_197, 1);
          {
            if(((m_197 != NULL) && (m_197 != o_197)))
              _fail(o_197);
            else
              m_197 = o_197;
            if(((m_197 != NULL) && (m_197 != p_197)))
              _fail(p_197);
            else
              m_197 = p_197;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(u_58);
    }
  else
    {
      t = t_58;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm k_126 (ATerm))
{
  ATerm o_13 (ATerm t)
  {
    ATerm v_58;
    v_58 = t;
    {
      ATerm u_197 = NULL;
      ATerm v_197 = NULL;
      t = term_d_20;
      {
        t = get_config_0(t);
        {
          v_197 = t;
          if(((u_197 != NULL) && (u_197 != v_197)))
            _fail(v_197);
          else
            u_197 = v_197;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_197), term_c_28);
        t = geq_0(t);
      }
    }
    t = v_58;
    t = k_126(t);
    return(t);
  }
  t = try_1(t, o_13);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm p_13 (ATerm t)
  {
    ATerm z_197 = NULL,b_198 = NULL;
    ATerm x_58;
    x_58 = t;
    {
      ATerm a_198 = NULL;
      t = run_time_0(t);
      {
        a_198 = t;
        if(((z_197 != NULL) && (z_197 != a_198)))
          _fail(a_198);
        else
          z_197 = a_198;
      }
    }
    t = x_58;
    {
      ATerm c_198 = NULL;
      t = term_o_23;
      {
        t = whoami_0(t);
        {
          c_198 = t;
          if(((b_198 != NULL) && (b_198 != c_198)))
            _fail(c_198);
          else
            b_198 = c_198;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_27, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_59), not_null(z_197)), term_y_58), not_null(b_198)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, p_13);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_s_24;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_198 = NULL;
  j_198 = t;
  i_198 :
  if(match_cons(j_198, sym_Version_0))
    {
      ATerm l_198 = NULL,n_198 = NULL;
      ATerm e_59;
      e_59 = t;
      {
        ATerm m_198 = NULL;
        t = SSLgetAnnotations(not_null(j_198));
        {
          m_198 = t;
          if(((l_198 != NULL) && (l_198 != m_198)))
            _fail(m_198);
          else
            l_198 = m_198;
        }
      }
      t = e_59;
      {
        ATerm o_198 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_198));
        {
          o_198 = t;
          if(((n_198 != NULL) && (n_198 != o_198)))
            _fail(o_198);
          else
            n_198 = o_198;
        }
        t = not_null(n_198);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm h_129 (ATerm))
{
  ATerm f_59 = t;
  int g_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_59;
      t = get_config_0(t);
      ;
      LocalPopChoice(g_59);
    }
  else
    {
      t = f_59;
      {
        ATerm q_13 (ATerm t)
        {
          ATerm n_59 = t;
          int o_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(o_59);
            }
          else
            {
              t = n_59;
              {
                ATerm p_59 = t;
                int q_59 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(q_59);
                  }
                else
                  {
                    t = p_59;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, q_13);
      }
    }
  t = h_129(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_198 = NULL;
  t_198 = t;
  t = SSL_table_create(not_null(t_198));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_198 = NULL;
  x_198 = t;
  {
    ATerm r_59;
    r_59 = t;
    {
      t = term_s_59;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_59, term_t_59, not_null(x_198));
          t = table_put_0(t);
        }
      }
    }
    t = r_59;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_199 = NULL;
  b_199 = t;
  t = SSL_table_destroy(not_null(b_199));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_199 = NULL;
  f_199 = t;
  t = SSL_exit(not_null(f_199));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm i_131 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_112 (ATerm))
{
  ATerm i_199 (ATerm t)
  {
    ATerm u_59 = t;
    int v_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(v_59);
      }
    else
      {
        t = u_59;
        t = Cons_2(t, v_112, i_199);
      }
    return(t);
  }
  t = i_199(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm p_199 = NULL,q_199 = NULL,r_199 = NULL;
  r_199 = t;
  o_199 :
  if(((ATgetType(r_199) == AT_LIST) && !(ATisEmpty(r_199))))
    {
      p_199 = ATgetFirst((ATermList) r_199);
      q_199 = (ATerm) ATgetNext((ATermList) r_199);
      {
        ATerm u_199 = NULL;
        t = not_null(q_199);
        {
          ATerm w_59;
          w_59 = t;
          {
            ATerm v_199 = NULL,x_199 = NULL,z_199 = NULL;
            ATerm x_59;
            x_59 = t;
            {
              ATerm w_199 = NULL;
              t = i_0(t);
              {
                w_199 = t;
                if(((v_199 != NULL) && (v_199 != w_199)))
                  _fail(w_199);
                else
                  v_199 = w_199;
              }
            }
            t = x_59;
            {
              ATerm y_199 = NULL;
              t = not_null(p_199);
              {
                t = g_0(t);
                {
                  y_199 = t;
                  if(((x_199 != NULL) && (x_199 != y_199)))
                    _fail(y_199);
                  else
                    x_199 = y_199;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(v_199)), not_null(x_199));
                {
                  z_199 = t;
                  if(((u_199 != NULL) && (u_199 != z_199)))
                    _fail(z_199);
                  else
                    u_199 = z_199;
                }
              }
            }
          }
          t = w_59;
          {
            ATerm r_13 (ATerm t)
            {
              t = not_null(u_199);
              return(t);
            }
            t = reverse_acc_2(t, g_0, r_13);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(r_199) == AT_LIST) && ATisEmpty(r_199)))
        {
          {
            t = term_o_23;
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
  ATerm s_13 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, s_13);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_131 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm j_104 (ATerm))
{
  ATerm k_200 = NULL,l_200 = NULL;
  k_200 = t;
  j_200 :
  if(match_cons(k_200, sym_Program_1))
    {
      l_200 = ATgetArgument(k_200, 0);
      {
        ATerm o_200 = NULL,q_200 = NULL;
        ATerm p_200 = NULL;
        t = SSLgetAnnotations(not_null(k_200));
        {
          p_200 = t;
          if(((o_200 != NULL) && (o_200 != p_200)))
            _fail(p_200);
          else
            o_200 = p_200;
        }
        {
          t = not_null(l_200);
          {
            ATerm s_200 = NULL;
            t = j_104(t);
            {
              q_200 = t;
              {
                ATerm t_200 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(q_200)), not_null(o_200));
                {
                  t_200 = t;
                  if(((s_200 != NULL) && (s_200 != t_200)))
                    _fail(t_200);
                  else
                    s_200 = t_200;
                }
                t = not_null(s_200);
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
  ATerm c_201 = NULL;
  ATerm b_60 = t;
  int c_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_201 = NULL;
      t = term_f_58;
      {
        t = get_config_0(t);
        {
          d_201 = t;
          if(((c_201 != NULL) && (c_201 != d_201)))
            _fail(d_201);
          else
            c_201 = d_201;
        }
      }
      ;
      LocalPopChoice(c_60);
    }
  else
    {
      t = b_60;
      {
        ATerm t_13 (ATerm t)
        {
          ATerm u_13 (ATerm t)
          {
            ATerm e_201 = NULL;
            e_201 = t;
            if(((c_201 != NULL) && (c_201 != e_201)))
              _fail(e_201);
            else
              c_201 = e_201;
            return(t);
          }
          t = Program_1(t, u_13);
          return(t);
        }
        t = option_defined_1(t, t_13);
      }
    }
  {
    ATerm v_13 (ATerm t)
    {
      ATerm w_13 (ATerm t)
      {
        t = not_null(c_201);
        return(t);
      }
      t = short_description_1(t, w_13);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, v_13);
    {
      t = term_d_60;
      {
        t = echo_0(t);
        {
          t = term_i_60;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm x_13 (ATerm t)
                {
                  ATerm f_201 = NULL;
                  ATerm g_201 = NULL;
                  g_201 = t;
                  if(((f_201 != NULL) && (f_201 != g_201)))
                    _fail(g_201);
                  else
                    f_201 = g_201;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_201)), term_j_60);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, x_13);
                {
                  ATerm y_13 (ATerm t)
                  {
                    ATerm h_201 = NULL;
                    ATerm i_201 = NULL;
                    ATerm z_13 (ATerm t)
                    {
                      t = not_null(c_201);
                      return(t);
                    }
                    t = long_description_1(t, z_13);
                    {
                      i_201 = t;
                      if(((h_201 != NULL) && (h_201 != i_201)))
                        _fail(i_201);
                      else
                        h_201 = i_201;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(h_201)), term_k_60);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, y_13);
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
  ATerm l_60 = t;
  int o_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(o_60);
    }
  else
    {
      t = l_60;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm k_104 (ATerm))
{
  ATerm s_201 = NULL,t_201 = NULL;
  s_201 = t;
  r_201 :
  if(match_cons(s_201, sym_Undefined_1))
    {
      t_201 = ATgetArgument(s_201, 0);
      {
        ATerm w_201 = NULL,y_201 = NULL;
        ATerm x_201 = NULL;
        t = SSLgetAnnotations(not_null(s_201));
        {
          x_201 = t;
          if(((w_201 != NULL) && (w_201 != x_201)))
            _fail(x_201);
          else
            w_201 = x_201;
        }
        {
          t = not_null(t_201);
          {
            ATerm a_202 = NULL;
            t = k_104(t);
            {
              y_201 = t;
              {
                ATerm b_202 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_201)), not_null(w_201));
                {
                  b_202 = t;
                  if(((a_202 != NULL) && (a_202 != b_202)))
                    _fail(b_202);
                  else
                    a_202 = b_202;
                }
                t = not_null(a_202);
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
ATerm fetch_1 (ATerm t, ATerm f_113 (ATerm))
{
  ATerm g_202 (ATerm t)
  {
    ATerm p_60 = t;
    int q_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_113, _id);
        ;
        LocalPopChoice(q_60);
      }
    else
      {
        t = p_60;
        t = Cons_2(t, _id, g_202);
      }
    return(t);
  }
  t = g_202(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm h_130 (ATerm))
{
  t = fetch_1(t, h_130);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm i_202 = NULL,j_202 = NULL,k_202 = NULL;
  i_202 = t;
  h_202 :
  if(((ATgetType(i_202) == AT_LIST) && ATisEmpty(i_202)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(i_202) == AT_LIST) && !(ATisEmpty(i_202))))
        {
          j_202 = ATgetFirst((ATermList) i_202);
          k_202 = (ATerm) ATgetNext((ATermList) i_202);
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
  ATerm t_60;
  t_60 = t;
  {
    ATerm n_202 = NULL;
    ATerm q_202 = NULL;
    ATerm u_60 = t;
    int x_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(x_60);
      }
    else
      {
        t = u_60;
        {
          ATerm o_202 = NULL;
          ATerm p_202 = NULL;
          p_202 = t;
          if(((o_202 != NULL) && (o_202 != p_202)))
            _fail(p_202);
          else
            o_202 = p_202;
          t = (ATerm) ATinsert(ATempty, not_null(o_202));
        }
      }
    {
      q_202 = t;
      if(((n_202 != NULL) && (n_202 != q_202)))
        _fail(q_202);
      else
        n_202 = q_202;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_54, not_null(n_202));
      t = printnl_0(t);
    }
  }
  t = t_60;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_f_58;
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
  ATerm y_60 = t;
  int z_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(z_60);
    }
  else
    {
      t = y_60;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_202 = NULL;
  x_202 = t;
  w_202 :
  if(match_cons(x_202, sym_Help_0))
    {
      ATerm z_202 = NULL,b_203 = NULL;
      ATerm a_61;
      a_61 = t;
      {
        ATerm a_203 = NULL;
        t = SSLgetAnnotations(not_null(x_202));
        {
          a_203 = t;
          if(((z_202 != NULL) && (z_202 != a_203)))
            _fail(a_203);
          else
            z_202 = a_203;
        }
      }
      t = a_61;
      {
        ATerm c_203 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(z_202));
        {
          c_203 = t;
          if(((b_203 != NULL) && (b_203 != c_203)))
            _fail(c_203);
          else
            b_203 = c_203;
        }
        t = not_null(b_203);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_105 (ATerm))
{
  ATerm b_61 = t;
  int c_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_105(t);
      ;
      LocalPopChoice(c_61);
    }
  else
    {
      t = b_61;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm d_61 = t;
  int e_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_14 (ATerm t)
      {
        ATerm i_203 = NULL;
        i_203 = t;
        g_203 :
        if(!(match_string(i_203, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm b_14 (ATerm t)
      {
        t = term_k_61;
        t = set_config_0(t);
        return(t);
      }
      ATerm c_14 (ATerm t)
      {
        t = term_l_61;
        return(t);
      }
      t = Option_3(t, a_14, b_14, c_14);
      ;
      LocalPopChoice(e_61);
    }
  else
    {
      t = d_61;
      {
        ATerm d_14 (ATerm t)
        {
          ATerm j_203 = NULL;
          j_203 = t;
          h_203 :
          if(!(match_string(j_203, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm e_14 (ATerm t)
        {
          t = term_k_61;
          {
            t = set_config_0(t);
            {
              t = term_u_61;
              t = set_config_0(t);
            }
          }
          t = term_v_61;
          return(t);
        }
        ATerm f_14 (ATerm t)
        {
          t = term_w_61;
          return(t);
        }
        t = Option_3(t, d_14, e_14, f_14);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_203 = NULL,n_203 = NULL,o_203 = NULL;
  m_203 = t;
  l_203 :
  if(match_cons(m_203, sym__2))
    {
      n_203 = ATgetArgument(m_203, 0);
      o_203 = ATgetArgument(m_203, 1);
      t = SSL_table_get(not_null(n_203), not_null(o_203));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_203 = NULL,w_203 = NULL,x_203 = NULL,y_203 = NULL;
  v_203 = t;
  u_203 :
  if(match_cons(v_203, sym__3))
    {
      w_203 = ATgetArgument(v_203, 0);
      x_203 = ATgetArgument(v_203, 1);
      y_203 = ATgetArgument(v_203, 2);
      {
        ATerm x_61;
        x_61 = t;
        {
          ATerm c_204 = NULL;
          ATerm d_204 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_203), not_null(x_203));
          {
            ATerm i_62 = t;
            int j_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(j_62);
              }
            else
              {
                t = i_62;
                t = (ATerm) ATempty;
              }
            {
              d_204 = t;
              if(((c_204 != NULL) && (c_204 != d_204)))
                _fail(d_204);
              else
                c_204 = d_204;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_203), not_null(x_203), (ATerm) ATinsert(CheckATermList(not_null(c_204)), not_null(y_203)));
            t = table_put_0(t);
          }
        }
        t = x_61;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm m_131 (ATerm))
{
  ATerm h_204 = NULL;
  ATerm i_204 = NULL;
  t = term_o_23;
  {
    t = m_131(t);
    {
      i_204 = t;
      if(((h_204 != NULL) && (h_204 != i_204)))
        _fail(i_204);
      else
        h_204 = i_204;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_60, term_h_60, not_null(h_204));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm o_204 = NULL,p_204 = NULL,q_204 = NULL;
  o_204 = t;
  n_204 :
  if(match_string(o_204, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(o_204) == AT_LIST) && !(ATisEmpty(o_204))))
        {
          p_204 = ATgetFirst((ATermList) o_204);
          q_204 = (ATerm) ATgetNext((ATermList) o_204);
          {
            ATerm t_204 = NULL;
            ATerm m_62;
            m_62 = t;
            {
              t = not_null(p_204);
              t = a_0(t);
            }
            t = m_62;
            {
              ATerm u_204 = NULL;
              t = term_o_23;
              {
                t = b_0(t);
                {
                  u_204 = t;
                  if(((t_204 != NULL) && (t_204 != u_204)))
                    _fail(u_204);
                  else
                    t_204 = u_204;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_204)), not_null(t_204));
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
  ATerm h_14 (ATerm t)
  {
    ATerm z_204 = NULL;
    z_204 = t;
    y_204 :
    if(!(match_string(z_204, "--help")))
      {
        if(!(match_string(z_204, "-h")))
          {
            if(!(match_string(z_204, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm i_14 (ATerm t)
  {
    t = term_s_62;
    {
      t = set_config_0(t);
      t = term_t_62;
    }
    return(t);
  }
  ATerm j_14 (ATerm t)
  {
    t = term_u_62;
    return(t);
  }
  t = Option_3(t, h_14, i_14, j_14);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_205 = NULL,d_205 = NULL,e_205 = NULL;
  c_205 = t;
  b_205 :
  if(((ATgetType(c_205) == AT_LIST) && !(ATisEmpty(c_205))))
    {
      d_205 = ATgetFirst((ATermList) c_205);
      e_205 = (ATerm) ATgetNext((ATermList) c_205);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_205)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_205)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm l_91 (ATerm), ATerm m_91 (ATerm))
{
  ATerm o_205 = NULL,p_205 = NULL,q_205 = NULL;
  o_205 = t;
  n_205 :
  if(((ATgetType(o_205) == AT_LIST) && !(ATisEmpty(o_205))))
    {
      p_205 = ATgetFirst((ATermList) o_205);
      q_205 = (ATerm) ATgetNext((ATermList) o_205);
      {
        ATerm u_205 = NULL,w_205 = NULL;
        ATerm v_205 = NULL;
        t = SSLgetAnnotations(not_null(o_205));
        {
          v_205 = t;
          if(((u_205 != NULL) && (u_205 != v_205)))
            _fail(v_205);
          else
            u_205 = v_205;
        }
        {
          t = not_null(p_205);
          {
            ATerm y_205 = NULL;
            t = l_91(t);
            {
              w_205 = t;
              {
                t = not_null(q_205);
                {
                  ATerm a_206 = NULL;
                  t = m_91(t);
                  {
                    y_205 = t;
                    {
                      ATerm b_206 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_205)), not_null(w_205)), not_null(u_205));
                      {
                        b_206 = t;
                        if(((a_206 != NULL) && (a_206 != b_206)))
                          _fail(b_206);
                        else
                          a_206 = b_206;
                      }
                      t = not_null(a_206);
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
  ATerm l_206 = NULL;
  l_206 = t;
  k_206 :
  if(((ATgetType(l_206) == AT_LIST) && ATisEmpty(l_206)))
    {
      {
        ATerm n_206 = NULL,p_206 = NULL;
        ATerm v_62;
        v_62 = t;
        {
          ATerm o_206 = NULL;
          t = SSLgetAnnotations(not_null(l_206));
          {
            o_206 = t;
            if(((n_206 != NULL) && (n_206 != o_206)))
              _fail(o_206);
            else
              n_206 = o_206;
          }
        }
        t = v_62;
        {
          ATerm q_206 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(n_206));
          {
            q_206 = t;
            if(((p_206 != NULL) && (p_206 != q_206)))
              _fail(q_206);
            else
              p_206 = q_206;
          }
          t = not_null(p_206);
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
  ATerm w_206 = NULL,y_206 = NULL,z_206 = NULL;
  w_206 = t;
  v_206 :
  if(match_cons(w_206, sym__2))
    {
      y_206 = ATgetArgument(w_206, 0);
      z_206 = ATgetArgument(w_206, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_w_53, not_null(y_206), not_null(z_206));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm k_131 (ATerm))
{
  ATerm w_62;
  w_62 = t;
  {
    ATerm l_14 (ATerm t)
    {
      t = term_z_62;
      t = k_131(t);
      return(t);
    }
    t = try_1(t, l_14);
  }
  t = w_62;
  {
    ATerm m_14 (ATerm t)
    {
      ATerm i_207 = NULL;
      ATerm a_63;
      a_63 = t;
      {
        ATerm g_207 = NULL;
        ATerm h_207 = NULL;
        h_207 = t;
        if(((g_207 != NULL) && (g_207 != h_207)))
          _fail(h_207);
        else
          g_207 = h_207;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_58, not_null(g_207));
          t = set_config_0(t);
        }
      }
      t = a_63;
      {
        ATerm j_207 = NULL;
        j_207 = t;
        if(((i_207 != NULL) && (i_207 != j_207)))
          _fail(j_207);
        else
          i_207 = j_207;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_207));
      }
      return(t);
    }
    ATerm n_14 (ATerm t)
    {
      ATerm b_63 = t;
      int c_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_63 = t;
          int e_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(e_63);
            }
          else
            {
              t = d_63;
              {
                t = k_131(t);
                t = Cons_2(t, _id, n_14);
              }
            }
          ;
          LocalPopChoice(c_63);
        }
      else
        {
          t = b_63;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_14, n_14);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_207 = NULL,q_207 = NULL,r_207 = NULL;
  ATerm f_63;
  f_63 = t;
  {
    ATerm s_207 = NULL,t_207 = NULL,u_207 = NULL,v_207 = NULL;
    s_207 = t;
    o_207 :
    if(match_cons(s_207, sym__3))
      {
        t_207 = ATgetArgument(s_207, 0);
        u_207 = ATgetArgument(s_207, 1);
        v_207 = ATgetArgument(s_207, 2);
        {
          if(((p_207 != NULL) && (p_207 != t_207)))
            _fail(t_207);
          else
            p_207 = t_207;
          {
            if(((q_207 != NULL) && (q_207 != u_207)))
              _fail(u_207);
            else
              q_207 = u_207;
            {
              if(((r_207 != NULL) && (r_207 != v_207)))
                _fail(v_207);
              else
                r_207 = v_207;
              t = SSL_table_put(not_null(p_207), not_null(q_207), not_null(r_207));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_63;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm j_131 (ATerm))
{
  ATerm y_207 = NULL;
  ATerm g_63;
  g_63 = t;
  {
    t = term_h_63;
    t = table_put_0(t);
  }
  t = g_63;
  {
    ATerm p_14 (ATerm t)
    {
      ATerm i_63 = t;
      int j_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_131(t);
          ;
          LocalPopChoice(j_63);
        }
      else
        {
          t = i_63;
          {
            ATerm k_63 = t;
            int l_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(l_63);
              }
            else
              {
                t = k_63;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, p_14);
    {
      ATerm t_14 (ATerm t)
      {
        ATerm m_63 = t;
        int r_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_63;
            s_63 = t;
            {
              ATerm t_63 = t;
              int u_63 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_m_59;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(u_63);
                }
              else
                {
                  t = t_63;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = s_63;
            {
              t = system_usage_0(t);
              {
                t = term_s_24;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(r_63);
          }
        else
          {
            t = m_63;
            {
              ATerm v_63 = t;
              int w_63 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_63;
                  x_63 = t;
                  {
                    t = term_g_61;
                    t = get_config_0(t);
                  }
                  t = x_63;
                  {
                    t = system_about_0(t);
                    {
                      t = term_s_24;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(w_63);
                }
              else
                {
                  t = v_63;
                  {
                    ATerm d_15 (ATerm t)
                    {
                      ATerm l_15 (ATerm t)
                      {
                        ATerm z_207 = NULL;
                        z_207 = t;
                        if(((y_207 != NULL) && (y_207 != z_207)))
                          _fail(z_207);
                        else
                          y_207 = z_207;
                        return(t);
                      }
                      t = Undefined_1(t, l_15);
                      return(t);
                    }
                    t = option_defined_1(t, d_15);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_k_27, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_207)), term_y_63));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_c_28;
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
      t = try_1(t, t_14);
      {
        ATerm z_63;
        z_63 = t;
        {
          t = term_e_60;
          t = table_destroy_0(t);
        }
        t = z_63;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm j_129 (ATerm), ATerm k_129 (ATerm), ATerm l_129 (ATerm), ATerm m_129 (ATerm))
{
  t = parse_options_1(t, j_129);
  {
    t = store_options_0(t);
    {
      t = l_129(t);
      {
        ATerm a_64 = t;
        int b_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, k_129);
            ;
            LocalPopChoice(b_64);
          }
        else
          {
            t = a_64;
            {
              ATerm c_64 = t;
              int d_64 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_129(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(d_64);
                }
              else
                {
                  t = c_64;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm y_128 (ATerm), ATerm z_128 (ATerm), ATerm a_129 (ATerm), ATerm b_129 (ATerm))
{
  ATerm v_15 (ATerm t)
  {
    ATerm e_64 = t;
    int f_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_128(t);
        ;
        LocalPopChoice(f_64);
      }
    else
      {
        t = e_64;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm w_15 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, y_128);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, v_15, a_129, b_129, w_15);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm u_128 (ATerm))
{
  ATerm x_15 (ATerm t)
  {
    ATerm y_15 (ATerm t)
    {
      ATerm g_64;
      g_64 = t;
      {
        ATerm c_208 = NULL;
        ATerm d_208 = NULL;
        t = term_f_58;
        {
          t = get_config_0(t);
          {
            d_208 = t;
            if(((c_208 != NULL) && (c_208 != d_208)))
              _fail(d_208);
            else
              c_208 = d_208;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_27, (ATerm) ATinsert(ATempty, not_null(c_208)));
          t = printnl_0(t);
        }
      }
      t = g_64;
      return(t);
    }
    t = if_verbose2_1(t, y_15);
    return(t);
  }
  t = iowrap_4(t, s_128, t_128, u_128, x_15);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_128 (ATerm), ATerm r_128 (ATerm))
{
  t = iowrap_3(t, q_128, r_128, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm n_128 (ATerm))
{
  ATerm z_15 (ATerm t)
  {
    t = _2(t, _id, n_128);
    return(t);
  }
  t = iowrap_2(t, z_15, _fail);
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
