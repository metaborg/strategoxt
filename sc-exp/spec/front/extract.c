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
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
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
  init_constant_terms();
}
ATerm term_v_37;
ATerm term_t_36;
ATerm term_l_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_p_35;
ATerm term_f_35;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_q_34;
ATerm term_z_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_s_32;
ATerm term_o_32;
ATerm term_i_32;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_w_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_r_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_j_29;
ATerm term_g_29;
ATerm term_e_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_m_28;
ATerm term_h_28;
ATerm term_f_28;
ATerm term_x_27;
ATerm term_v_27;
ATerm term_k_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_i_25;
ATerm term_d_25;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_s_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_v_22;
ATerm term_h_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_f_21;
ATerm term_b_19;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_i_15;
ATerm term_b_13;
ATerm term_l_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_10;
ATerm term_g_9;
ATerm term_z_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_n_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_o_7;
void init_constant_terms (void)
{
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("x_1", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_7);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("v_1", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_8);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Op_2, term_i_15, (ATerm) ATempty);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_ConstType_1, term_l_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym__2, term_h_22, term_h_22);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym__2, term_h_23, term_i_23);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym__2, term_w_25, term_h_22);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_22);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym__2, term_a_29, term_v_18);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym__2, term_r_29, term_v_18);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_m_33, term_u_33);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__2, term_q_34, term_v_18);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_v_18);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym__2, term_s_32, term_v_18);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(sym__3, term_m_33, term_u_33, (ATerm) ATempty);
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm ConstructorNeeded_0 (ATerm);
ATerm filter_1 (ATerm, ATerm t_116 (ATerm));
ATerm Constructors_1 (ATerm, ATerm z_89 (ATerm));
ATerm Signature_1 (ATerm, ATerm d_89 (ATerm));
ATerm DeclareConstructorNeeded_0 (ATerm);
ATerm needed_constructors_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm MissingDef_0 (ATerm);
ATerm MissingDefMod_0 (ATerm);
ATerm MissingDefs_0 (ATerm);
ATerm NoMissingDefs_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm giving_up_0 (ATerm);
ATerm error_0 (ATerm);
ATerm DefinitionExists_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm i_94 (ATerm), ATerm j_94 (ATerm));
ATerm SDefT_4 (ATerm, ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm g_96 (ATerm));
ATerm SDef_3 (ATerm, ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm c_96 (ATerm));
ATerm Let_2 (ATerm, ATerm l_93 (ATerm), ATerm m_93 (ATerm));
ATerm sboundin_3 (ATerm, ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm w_103 (ATerm));
ATerm Bind7_0 (ATerm);
ATerm Bind5_0 (ATerm);
ATerm Bind3_0 (ATerm);
ATerm declared_vars_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm g_113 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm a_119 (ATerm), ATerm b_119 (ATerm), ATerm c_119 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_119 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm tsubs_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm n_104 (ATerm), ATerm o_104 (ATerm));
ATerm alltd_1 (ATerm, ATerm h_106 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm y_103 (ATerm), ATerm z_103 (ATerm));
ATerm substitute_1 (ATerm, ATerm a_104 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm w_95 (ATerm), ATerm x_95 (ATerm));
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm OverloadedDef_0 (ATerm);
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm s_90 (ATerm), ATerm t_90 (ATerm));
ATerm PrimT_3 (ATerm, ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t_94 (ATerm));
ATerm Explode_2 (ATerm, ATerm l_90 (ATerm), ATerm m_90 (ATerm));
ATerm Op_2 (ATerm, ATerm h_90 (ATerm), ATerm i_90 (ATerm));
ATerm pat_td_1 (ATerm, ATerm r_133 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm MkConstType_0 (ATerm);
ATerm MkFunType_0 (ATerm);
ATerm map1_1 (ATerm, ATerm q_0 (ATerm));
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm l_109 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm z_120 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm p_90 (ATerm), ATerm q_90 (ATerm));
ATerm Con_3 (ATerm, ATerm b_91 (ATerm), ATerm c_91 (ATerm), ATerm d_91 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm v_93 (ATerm), ATerm w_93 (ATerm));
ATerm oncetd_1 (ATerm, ATerm t_105 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm p_104 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm r_108 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm t_115 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm j_109 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm diff_1 (ATerm, ATerm n_112 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm e_109 (ATerm));
ATerm zip_1 (ATerm, ATerm g_109 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm n_133 (ATerm), ATerm o_133 (ATerm), ATerm p_133 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm o_121 (ATerm), ATerm p_121 (ATerm));
ATerm for_3 (ATerm, ATerm r_121 (ATerm), ATerm s_121 (ATerm), ATerm t_121 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm y_132 (ATerm), ATerm z_132 (ATerm), ATerm a_133 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm p_116 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm v_112 (ATerm), ATerm w_112 (ATerm));
ATerm union_1 (ATerm, ATerm r_112 (ATerm));
ATerm union_0 (ATerm);
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm r_116 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm g_115 (ATerm), ATerm h_115 (ATerm), ATerm i_115 (ATerm));
ATerm length_0 (ATerm);
ATerm RegisterSDefT_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm c_89 (ATerm));
ATerm Cons_2 (ATerm, ATerm y_88 (ATerm), ATerm z_88 (ATerm));
ATerm Specification_1 (ATerm, ATerm h_89 (ATerm));
ATerm _2 (ATerm, ATerm p_87 (ATerm), ATerm q_87 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm g_111 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm i_127 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm e_126 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm g_129 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm q_125 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_108 (ATerm), ATerm c_108 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm e_115 (ATerm), ATerm f_115 (ATerm));
ATerm crush_2 (ATerm, ATerm c_113 (ATerm), ATerm d_113 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm h_127 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm e_130 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm f_132 (ATerm));
ATerm map_1 (ATerm, ATerm q_110 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm e_132 (ATerm));
ATerm Program_1 (ATerm, ATerm w_101 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm x_101 (ATerm));
ATerm fetch_1 (ATerm, ATerm a_111 (ATerm));
ATerm option_defined_1 (ATerm, ATerm e_131 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_107 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm j_132 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm h_132 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm g_132 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm g_130 (ATerm), ATerm h_130 (ATerm), ATerm i_130 (ATerm), ATerm j_130 (ATerm));
ATerm iowrap_4 (ATerm, ATerm v_129 (ATerm), ATerm w_129 (ATerm), ATerm x_129 (ATerm), ATerm y_129 (ATerm));
ATerm iowrap_3 (ATerm, ATerm p_129 (ATerm), ATerm q_129 (ATerm), ATerm r_129 (ATerm));
ATerm iowrap_2 (ATerm, ATerm n_129 (ATerm), ATerm o_129 (ATerm));
ATerm iowrap_1 (ATerm, ATerm k_129 (ATerm));
ATerm extract_0 (ATerm);
ATerm main_0 (ATerm);
ATerm ConstructorNeeded_0 (ATerm t)
{
  ATerm t_5 = NULL,v_6 = NULL,w_6 = NULL;
  t_5 = t;
  s_5 :
  if(match_cons(t_5, sym_OpDecl_2))
    {
      v_6 = ATgetArgument(t_5, 0);
      w_6 = ATgetArgument(t_5, 1);
      {
        ATerm l_7 = t;
        int m_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_7 = NULL,r_7 = NULL;
            t = (ATerm) ATmakeAppl(sym_OpDecl_2, not_null(v_6), (ATerm) ATempty);
            {
              ATerm c_0 (ATerm t)
              {
                t = term_o_7;
                return(t);
              }
              t = rewrite_1(t, c_0);
              {
                n_7 = t;
                o_4 :
                if(match_cons(n_7, sym_Defined_1))
                  {
                    r_7 = ATgetArgument(n_7, 0);
                    p_4 :
                    if(!(match_string(r_7, "x_1")))
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
            t = (ATerm) ATmakeAppl(sym_OpDecl_2, not_null(v_6), not_null(w_6));
            ;
            LocalPopChoice(m_7);
          }
        else
          {
            t = l_7;
            {
              ATerm v_7 = NULL,w_7 = NULL;
              t = (ATerm) ATmakeAppl(sym_OpDecl_2, not_null(v_6), (ATerm) ATempty);
              {
                ATerm e_0 (ATerm t)
                {
                  t = term_o_7;
                  return(t);
                }
                t = rewrite_1(t, e_0);
                {
                  v_7 = t;
                  q_4 :
                  if(match_cons(v_7, sym_Defined_1))
                    {
                      w_7 = ATgetArgument(v_7, 0);
                      r_5 :
                      if(!(match_string(w_7, "v_1")))
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
              t = (ATerm) ATmakeAppl(sym_OpDecl_2, not_null(v_6), not_null(w_6));
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm t_116 (ATerm))
{
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(q_7);
    }
  else
    {
      t = p_7;
      {
        ATerm s_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 (ATerm t)
            {
              t = filter_1(t, t_116);
              return(t);
            }
            t = Cons_2(t, t_116, f_0);
            ;
            LocalPopChoice(t_7);
          }
        else
          {
            t = s_7;
            {
              ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
              b_8 = t;
              a_8 :
              if(((ATgetType(b_8) == AT_LIST) && !(ATisEmpty(b_8))))
                {
                  c_8 = ATgetFirst((ATermList) b_8);
                  d_8 = (ATerm) ATgetNext((ATermList) b_8);
                  {
                    t = not_null(d_8);
                    t = filter_1(t, t_116);
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
ATerm Constructors_1 (ATerm t, ATerm z_89 (ATerm))
{
  ATerm l_8 = NULL,m_8 = NULL;
  l_8 = t;
  k_8 :
  if(match_cons(l_8, sym_Constructors_1))
    {
      m_8 = ATgetArgument(l_8, 0);
      {
        ATerm p_8 = NULL,r_8 = NULL;
        ATerm q_8 = NULL;
        t = SSLgetAnnotations(not_null(l_8));
        {
          q_8 = t;
          if(((p_8 != NULL) && (p_8 != q_8)))
            _fail(q_8);
          else
            p_8 = q_8;
        }
        {
          t = not_null(m_8);
          {
            ATerm t_8 = NULL;
            t = z_89(t);
            {
              r_8 = t;
              {
                ATerm u_8 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, not_null(r_8)), not_null(p_8));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm d_89 (ATerm))
{
  ATerm e_9 = NULL,f_9 = NULL;
  e_9 = t;
  d_9 :
  if(match_cons(e_9, sym_Signature_1))
    {
      f_9 = ATgetArgument(e_9, 0);
      {
        ATerm i_9 = NULL,k_9 = NULL;
        ATerm j_9 = NULL;
        t = SSLgetAnnotations(not_null(e_9));
        {
          j_9 = t;
          if(((i_9 != NULL) && (i_9 != j_9)))
            _fail(j_9);
          else
            i_9 = j_9;
        }
        {
          t = not_null(f_9);
          {
            ATerm m_9 = NULL;
            t = d_89(t);
            {
              k_9 = t;
              {
                ATerm n_9 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(k_9)), not_null(i_9));
                {
                  n_9 = t;
                  if(((m_9 != NULL) && (m_9 != n_9)))
                    _fail(n_9);
                  else
                    m_9 = n_9;
                }
                t = not_null(m_9);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DeclareConstructorNeeded_0 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_cons(v_9, sym_Cong_2))
    {
      w_9 = ATgetArgument(v_9, 0);
      x_9 = ATgetArgument(v_9, 1);
      {
        ATerm u_7;
        u_7 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, not_null(w_9), (ATerm) ATempty), term_y_7);
          {
            ATerm h_0 (ATerm t)
            {
              t = term_o_7;
              return(t);
            }
            t = assert_1(t, h_0);
          }
        }
        t = u_7;
      }
    }
  else
    {
      if(match_cons(v_9, sym_Op_2))
        {
          w_9 = ATgetArgument(v_9, 0);
          x_9 = ATgetArgument(v_9, 1);
          {
            ATerm z_7;
            z_7 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, not_null(w_9), (ATerm) ATempty), term_f_8);
              {
                ATerm s_0 (ATerm t)
                {
                  t = term_o_7;
                  return(t);
                }
                t = assert_1(t, s_0);
              }
            }
            t = z_7;
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm needed_constructors_0 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
  j_10 = t;
  e_10 :
  if(match_cons(j_10, sym_Specification_1))
    {
      k_10 = ATgetArgument(j_10, 0);
      f_10 :
      if(((ATgetType(k_10) == AT_LIST) && !(ATisEmpty(k_10))))
        {
          l_10 = ATgetFirst((ATermList) k_10);
          m_10 = (ATerm) ATgetNext((ATermList) k_10);
          g_10 :
          if(((ATgetType(m_10) == AT_LIST) && !(ATisEmpty(m_10))))
            {
              n_10 = ATgetFirst((ATermList) m_10);
              p_10 = (ATerm) ATgetNext((ATermList) m_10);
              h_10 :
              if(match_cons(n_10, sym_Strategies_1))
                {
                  o_10 = ATgetArgument(n_10, 0);
                  i_10 :
                  if(((ATgetType(p_10) == AT_LIST) && ATisEmpty(p_10)))
                    {
                      {
                        ATerm s_10 = NULL;
                        ATerm t_10 = NULL;
                        t = not_null(o_10);
                        {
                          ATerm t_0 (ATerm t)
                          {
                            t = try_1(t, DeclareConstructorNeeded_0);
                            return(t);
                          }
                          t = topdown_1(t, t_0);
                          {
                            t = not_null(l_10);
                            {
                              ATerm u_0 (ATerm t)
                              {
                                ATerm v_0 (ATerm t)
                                {
                                  ATerm w_0 (ATerm t)
                                  {
                                    t = filter_1(t, ConstructorNeeded_0);
                                    return(t);
                                  }
                                  t = Constructors_1(t, w_0);
                                  return(t);
                                }
                                t = Cons_2(t, v_0, Nil_0);
                                return(t);
                              }
                              t = Signature_1(t, u_0);
                              {
                                t_10 = t;
                                if(((s_10 != NULL) && (s_10 != t_10)))
                                  _fail(t_10);
                                else
                                  s_10 = t_10;
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(o_10))), not_null(s_10)));
                      }
                    }
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
ATerm Nil_0 (ATerm t)
{
  ATerm a_11 = NULL;
  a_11 = t;
  z_10 :
  if(((ATgetType(a_11) == AT_LIST) && ATisEmpty(a_11)))
    {
      {
        ATerm c_11 = NULL,e_11 = NULL;
        ATerm g_8;
        g_8 = t;
        {
          ATerm d_11 = NULL;
          t = SSLgetAnnotations(not_null(a_11));
          {
            d_11 = t;
            if(((c_11 != NULL) && (c_11 != d_11)))
              _fail(d_11);
            else
              c_11 = d_11;
          }
        }
        t = g_8;
        {
          ATerm f_11 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(c_11));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDef_0 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
  l_11 = t;
  k_11 :
  if(match_cons(l_11, sym__2))
    {
      m_11 = ATgetArgument(l_11, 0);
      n_11 = ATgetArgument(l_11, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_8), not_null(n_11)), term_i_8), not_null(m_11)), term_h_8);
        t = error_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDefMod_0 (ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
  u_11 = t;
  s_11 :
  if(match_cons(u_11, sym__2))
    {
      v_11 = ATgetArgument(u_11, 0);
      y_11 = ATgetArgument(u_11, 1);
      t_11 :
      if(match_cons(v_11, sym_Mod_2))
        {
          w_11 = ATgetArgument(v_11, 0);
          x_11 = ATgetArgument(v_11, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_8), not_null(y_11)), term_i_8), not_null(x_11)), term_n_8), not_null(w_11)), term_h_8);
            t = error_0(t);
          }
        }
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
ATerm MissingDefs_0 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
  g_12 = t;
  e_12 :
  if(match_cons(g_12, sym__2))
    {
      h_12 = ATgetArgument(g_12, 0);
      i_12 = ATgetArgument(g_12, 1);
      f_12 :
      if(((ATgetType(i_12) == AT_LIST) && !(ATisEmpty(i_12))))
        {
          j_12 = ATgetFirst((ATermList) i_12);
          k_12 = (ATerm) ATgetNext((ATermList) i_12);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(k_12)), not_null(j_12));
            {
              ATerm x_0 (ATerm t)
              {
                ATerm o_8 = t;
                int s_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    ;
                    LocalPopChoice(s_8);
                  }
                else
                  {
                    t = o_8;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, x_0);
            }
            t = not_null(h_12);
          }
        }
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
ATerm NoMissingDefs_0 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
  s_12 = t;
  q_12 :
  if(match_cons(s_12, sym__2))
    {
      t_12 = ATgetArgument(s_12, 0);
      u_12 = ATgetArgument(s_12, 1);
      r_12 :
      if(((ATgetType(u_12) == AT_LIST) && ATisEmpty(u_12)))
        {
          t = not_null(t_12);
        }
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
ATerm fatal_error_0 (ATerm t)
{
  ATerm v_8;
  v_8 = t;
  {
    t = error_0(t);
    {
      t = term_w_8;
      t = exit_0(t);
    }
  }
  t = v_8;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_x_8);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm y_8;
  y_8 = t;
  {
    ATerm y_12 = NULL;
    ATerm z_12 = NULL;
    z_12 = t;
    if(((y_12 != NULL) && (y_12 != z_12)))
      _fail(z_12);
    else
      y_12 = z_12;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_8, not_null(y_12));
      t = printnl_0(t);
    }
  }
  t = y_8;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
  r_13 = t;
  n_13 :
  if(match_cons(r_13, sym__2))
    {
      s_13 = ATgetArgument(r_13, 0);
      t_13 = ATgetArgument(r_13, 1);
      o_13 :
      if(match_cons(t_13, sym__2))
        {
          u_13 = ATgetArgument(t_13, 0);
          v_13 = ATgetArgument(t_13, 1);
          p_13 :
          if(match_int(u_13, 0))
            {
              q_13 :
              if(match_int(v_13, 0))
                {
                  ATerm a_9 = t;
                  int b_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL;
                      t = not_null(s_13);
                      {
                        t = Arities_0(t);
                        {
                          x_13 = t;
                          h_13 :
                          if(((ATgetType(x_13) == AT_LIST) && !(ATisEmpty(x_13))))
                            {
                              y_13 = ATgetFirst((ATermList) x_13);
                              z_13 = (ATerm) ATgetNext((ATermList) x_13);
                              i_13 :
                              if(((ATgetType(z_13) == AT_LIST) && !(ATisEmpty(z_13))))
                                {
                                  a_14 = ATgetFirst((ATermList) z_13);
                                  b_14 = (ATerm) ATgetNext((ATermList) z_13);
                                  {
                                    ATerm c_9 = t;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm y_0 (ATerm t)
                                        {
                                          ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL;
                                          c_14 = t;
                                          e_13 :
                                          if(match_cons(c_14, sym__2))
                                            {
                                              d_14 = ATgetArgument(c_14, 0);
                                              e_14 = ATgetArgument(c_14, 1);
                                              f_13 :
                                              if(match_int(d_14, 0))
                                                {
                                                  g_13 :
                                                  if(!(match_int(e_14, 0)))
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
                                        t = fetch_1(t, y_0);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = c_9;
                                      }
                                    {
                                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_13)), term_g_9);
                                      {
                                        t = error_0(t);
                                        t = giving_up_0(t);
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
                      ;
                      LocalPopChoice(b_9);
                    }
                  else
                    {
                      t = a_9;
                      {
                        ATerm g_14 = NULL,h_14 = NULL;
                        ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL;
                        t = not_null(s_13);
                        {
                          t = Arities_0(t);
                          {
                            i_14 = t;
                            k_13 :
                            if(((ATgetType(i_14) == AT_LIST) && !(ATisEmpty(i_14))))
                              {
                                j_14 = ATgetFirst((ATermList) i_14);
                                m_14 = (ATerm) ATgetNext((ATermList) i_14);
                                l_13 :
                                if(match_cons(j_14, sym__2))
                                  {
                                    k_14 = ATgetArgument(j_14, 0);
                                    l_14 = ATgetArgument(j_14, 1);
                                    m_13 :
                                    if(((ATgetType(m_14) == AT_LIST) && ATisEmpty(m_14)))
                                      {
                                        {
                                          if(((g_14 != NULL) && (g_14 != k_14)))
                                            _fail(k_14);
                                          else
                                            g_14 = k_14;
                                          {
                                            if(((h_14 != NULL) && (h_14 != l_14)))
                                              _fail(l_14);
                                            else
                                              h_14 = l_14;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(s_13), (ATerm) ATmakeAppl(sym__2, not_null(g_14), not_null(h_14)));
                                              t = Definitions_0(t);
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
                        }
                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_13), (ATerm) ATmakeAppl(sym__2, not_null(g_14), not_null(h_14)));
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
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm i_94 (ATerm), ATerm j_94 (ATerm))
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL;
  x_14 = t;
  w_14 :
  if(match_cons(x_14, sym_Rec_2))
    {
      y_14 = ATgetArgument(x_14, 0);
      z_14 = ATgetArgument(x_14, 1);
      {
        ATerm d_15 = NULL,f_15 = NULL;
        ATerm e_15 = NULL;
        t = SSLgetAnnotations(not_null(x_14));
        {
          e_15 = t;
          if(((d_15 != NULL) && (d_15 != e_15)))
            _fail(e_15);
          else
            d_15 = e_15;
        }
        {
          t = not_null(y_14);
          {
            ATerm h_15 = NULL;
            t = i_94(t);
            {
              f_15 = t;
              {
                t = not_null(z_14);
                {
                  ATerm j_15 = NULL;
                  t = j_94(t);
                  {
                    h_15 = t;
                    {
                      ATerm k_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(f_15), not_null(h_15)), not_null(d_15));
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
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDefT_4 (ATerm t, ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm g_96 (ATerm))
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  y_15 = t;
  x_15 :
  if(match_cons(y_15, sym_SDefT_4))
    {
      z_15 = ATgetArgument(y_15, 0);
      a_16 = ATgetArgument(y_15, 1);
      b_16 = ATgetArgument(y_15, 2);
      c_16 = ATgetArgument(y_15, 3);
      {
        ATerm i_16 = NULL,k_16 = NULL;
        ATerm j_16 = NULL;
        t = SSLgetAnnotations(not_null(y_15));
        {
          j_16 = t;
          if(((i_16 != NULL) && (i_16 != j_16)))
            _fail(j_16);
          else
            i_16 = j_16;
        }
        {
          t = not_null(z_15);
          {
            ATerm m_16 = NULL;
            t = d_96(t);
            {
              k_16 = t;
              {
                t = not_null(a_16);
                {
                  ATerm o_16 = NULL;
                  t = e_96(t);
                  {
                    m_16 = t;
                    {
                      t = not_null(b_16);
                      {
                        ATerm q_16 = NULL;
                        t = f_96(t);
                        {
                          o_16 = t;
                          {
                            t = not_null(c_16);
                            {
                              ATerm s_16 = NULL;
                              t = g_96(t);
                              {
                                q_16 = t;
                                {
                                  ATerm t_16 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(k_16), not_null(m_16), not_null(o_16), not_null(q_16)), not_null(i_16));
                                  {
                                    t_16 = t;
                                    if(((s_16 != NULL) && (s_16 != t_16)))
                                      _fail(t_16);
                                    else
                                      s_16 = t_16;
                                  }
                                  t = not_null(s_16);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm SDef_3 (ATerm t, ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm c_96 (ATerm))
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  i_17 = t;
  h_17 :
  if(match_cons(i_17, sym_SDef_3))
    {
      j_17 = ATgetArgument(i_17, 0);
      k_17 = ATgetArgument(i_17, 1);
      l_17 = ATgetArgument(i_17, 2);
      {
        ATerm q_17 = NULL,s_17 = NULL;
        ATerm r_17 = NULL;
        t = SSLgetAnnotations(not_null(i_17));
        {
          r_17 = t;
          if(((q_17 != NULL) && (q_17 != r_17)))
            _fail(r_17);
          else
            q_17 = r_17;
        }
        {
          t = not_null(j_17);
          {
            ATerm u_17 = NULL;
            t = a_96(t);
            {
              s_17 = t;
              {
                t = not_null(k_17);
                {
                  ATerm w_17 = NULL;
                  t = b_96(t);
                  {
                    u_17 = t;
                    {
                      t = not_null(l_17);
                      {
                        ATerm y_17 = NULL;
                        t = c_96(t);
                        {
                          w_17 = t;
                          {
                            ATerm z_17 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(s_17), not_null(u_17), not_null(w_17)), not_null(q_17));
                            {
                              z_17 = t;
                              if(((y_17 != NULL) && (y_17 != z_17)))
                                _fail(z_17);
                              else
                                y_17 = z_17;
                            }
                            t = not_null(y_17);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm l_93 (ATerm), ATerm m_93 (ATerm))
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
  m_18 = t;
  l_18 :
  if(match_cons(m_18, sym_Let_2))
    {
      n_18 = ATgetArgument(m_18, 0);
      o_18 = ATgetArgument(m_18, 1);
      {
        ATerm s_18 = NULL,u_18 = NULL;
        ATerm t_18 = NULL;
        t = SSLgetAnnotations(not_null(m_18));
        {
          t_18 = t;
          if(((s_18 != NULL) && (s_18 != t_18)))
            _fail(t_18);
          else
            s_18 = t_18;
        }
        {
          t = not_null(n_18);
          {
            ATerm w_18 = NULL;
            t = l_93(t);
            {
              u_18 = t;
              {
                t = not_null(o_18);
                {
                  ATerm y_18 = NULL;
                  t = m_93(t);
                  {
                    w_18 = t;
                    {
                      ATerm z_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(u_18), not_null(w_18)), not_null(s_18));
                      {
                        z_18 = t;
                        if(((y_18 != NULL) && (y_18 != z_18)))
                          _fail(z_18);
                        else
                          y_18 = z_18;
                      }
                      t = not_null(y_18);
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
ATerm sboundin_3 (ATerm t, ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm w_103 (ATerm))
{
  ATerm h_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, u_103, u_103);
      ;
      LocalPopChoice(l_9);
    }
  else
    {
      t = h_9;
      {
        ATerm o_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, w_103, w_103, u_103);
            ;
            LocalPopChoice(p_9);
          }
        else
          {
            t = o_9;
            {
              ATerm q_9 = t;
              int r_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4(t, w_103, w_103, w_103, u_103);
                  ;
                  LocalPopChoice(r_9);
                }
              else
                {
                  t = q_9;
                  t = Rec_2(t, w_103, u_103);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  h_19 = t;
  g_19 :
  if(match_cons(h_19, sym_RDefT_4))
    {
      i_19 = ATgetArgument(h_19, 0);
      j_19 = ATgetArgument(h_19, 1);
      k_19 = ATgetArgument(h_19, 2);
      l_19 = ATgetArgument(h_19, 3);
      {
        t = not_null(j_19);
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
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
  t_19 = t;
  s_19 :
  if(match_cons(t_19, sym_SDefT_4))
    {
      u_19 = ATgetArgument(t_19, 0);
      v_19 = ATgetArgument(t_19, 1);
      w_19 = ATgetArgument(t_19, 2);
      x_19 = ATgetArgument(t_19, 3);
      {
        t = not_null(v_19);
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
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
  f_20 = t;
  e_20 :
  if(match_cons(f_20, sym_Rec_2))
    {
      g_20 = ATgetArgument(f_20, 0);
      h_20 = ATgetArgument(f_20, 1);
      t = (ATerm) ATinsert(ATempty, not_null(g_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declared_vars_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
    p_20 = t;
    n_20 :
    if(match_cons(p_20, sym_VarDec_2))
      {
        q_20 = ATgetArgument(p_20, 0);
        o_20 = ATgetArgument(p_20, 1);
        t = not_null(q_20);
      }
    else
      {
        if(match_cons(p_20, sym_DefaultVarDec_1))
          {
            q_20 = ATgetArgument(p_20, 0);
            t = not_null(q_20);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1(t, z_0);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL;
  x_20 = t;
  w_20 :
  if(match_cons(x_20, sym_SDef_3))
    {
      y_20 = ATgetArgument(x_20, 0);
      z_20 = ATgetArgument(x_20, 1);
      a_21 = ATgetArgument(x_20, 2);
      {
        t = not_null(z_20);
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
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
  k_21 = t;
  j_21 :
  if(match_cons(k_21, sym_Let_2))
    {
      l_21 = ATgetArgument(k_21, 0);
      m_21 = ATgetArgument(k_21, 1);
      {
        t = not_null(l_21);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL;
            p_21 = t;
            i_21 :
            if(match_cons(p_21, sym_SDef_3))
              {
                q_21 = ATgetArgument(p_21, 0);
                r_21 = ATgetArgument(p_21, 1);
                s_21 = ATgetArgument(p_21, 2);
                t = not_null(q_21);
              }
            else
              {
                if(match_cons(p_21, sym_SDefT_4))
                  {
                    q_21 = ATgetArgument(p_21, 0);
                    r_21 = ATgetArgument(p_21, 1);
                    s_21 = ATgetArgument(p_21, 2);
                    t_21 = ATgetArgument(p_21, 3);
                    t = not_null(q_21);
                  }
                else
                  {
                    _fail(t);
                  }
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
ATerm crush_3 (ATerm t, ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm g_113 (ATerm))
{
  ATerm d_22 = NULL;
  ATerm f_22 = NULL;
  d_22 = t;
  {
    ATerm g_22 = NULL;
    ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL;
    t = not_null(d_22);
    {
      g_22 = t;
      {
        t = SSL_explode_term(not_null(g_22));
        {
          i_22 = t;
          c_22 :
          if(match_cons(i_22, sym__2))
            {
              j_22 = ATgetArgument(i_22, 0);
              k_22 = ATgetArgument(i_22, 1);
              if(((f_22 != NULL) && (f_22 != k_22)))
                _fail(k_22);
              else
                f_22 = k_22;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(f_22);
      t = foldr_3(t, e_113, f_113, g_113);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm a_119 (ATerm), ATerm b_119 (ATerm), ATerm c_119 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_119 (ATerm))
{
  ATerm r_22 (ATerm t)
  {
    ATerm b_1 (ATerm t)
    {
      ATerm s_9 = t;
      int t_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_119(t);
          ;
          LocalPopChoice(t_9);
        }
      else
        {
          t = s_9;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm c_1 (ATerm t)
    {
      ATerm y_9 = t;
      int z_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_22 = NULL;
          ATerm a_10;
          a_10 = t;
          {
            ATerm q_22 = NULL;
            t = b_119(t);
            {
              q_22 = t;
              if(((p_22 != NULL) && (p_22 != q_22)))
                _fail(q_22);
              else
                p_22 = q_22;
            }
          }
          t = a_10;
          {
            ATerm d_1 (ATerm t)
            {
              ATerm f_1 (ATerm t)
              {
                t = not_null(p_22);
                return(t);
              }
              t = split_2(t, r_22, f_1);
              t = diff_1(t, d_119);
              return(t);
            }
            ATerm e_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = c_119(t, d_1, r_22, e_1);
            {
              ATerm g_1 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, g_1, union_0, _id);
            }
          }
          ;
          LocalPopChoice(z_9);
        }
      else
        {
          t = y_9;
          {
            ATerm h_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, h_1, union_0, r_22);
          }
        }
      return(t);
    }
    t = split_2(t, b_1, c_1);
    t = union_0(t);
    return(t);
  }
  t = r_22(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
    b_23 = t;
    w_22 :
    if(match_cons(b_23, sym_CallT_3))
      {
        c_23 = ATgetArgument(b_23, 0);
        e_23 = ATgetArgument(b_23, 1);
        f_23 = ATgetArgument(b_23, 2);
        x_22 :
        if(match_cons(c_23, sym_SVar_1))
          {
            d_23 = ATgetArgument(c_23, 0);
            {
              ATerm j_23 = NULL,l_23 = NULL;
              ATerm b_10;
              b_10 = t;
              {
                ATerm k_23 = NULL;
                t = not_null(e_23);
                {
                  t = length_0(t);
                  {
                    k_23 = t;
                    if(((j_23 != NULL) && (j_23 != k_23)))
                      _fail(k_23);
                    else
                      j_23 = k_23;
                  }
                }
              }
              t = b_10;
              {
                ATerm m_23 = NULL;
                t = not_null(f_23);
                {
                  t = length_0(t);
                  {
                    m_23 = t;
                    if(((l_23 != NULL) && (l_23 != m_23)))
                      _fail(m_23);
                    else
                      l_23 = m_23;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(d_23), (ATerm) ATmakeAppl(sym__2, not_null(j_23), not_null(l_23))));
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
  ATerm j_1 (ATerm t)
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
        {
          ATerm q_10 = t;
          int r_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(r_10);
            }
          else
            {
              t = q_10;
              {
                ATerm u_10 = t;
                int v_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0(t);
                    ;
                    LocalPopChoice(v_10);
                  }
                else
                  {
                    t = u_10;
                    {
                      ATerm w_10 = t;
                      int x_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0(t);
                          ;
                          LocalPopChoice(x_10);
                        }
                      else
                        {
                          t = w_10;
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
  ATerm k_1 (ATerm t)
  {
    ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL;
    n_23 = t;
    z_22 :
    if(match_cons(n_23, sym__2))
      {
        o_23 = ATgetArgument(n_23, 0);
        r_23 = ATgetArgument(n_23, 1);
        a_23 :
        if(match_cons(o_23, sym__2))
          {
            p_23 = ATgetArgument(o_23, 0);
            q_23 = ATgetArgument(o_23, 1);
            if(((p_23 != NULL) && (p_23 != r_23)))
              _fail(r_23);
            else
              p_23 = r_23;
          }
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
  t = free_vars2_4(t, i_1, j_1, sboundin_3, k_1);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm e_24 = NULL;
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
  e_24 = t;
  {
    ATerm j_24 = NULL;
    ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL;
    t = not_null(e_24);
    {
      j_24 = t;
      {
        t = SSL_explode_term(not_null(j_24));
        {
          l_24 = t;
          a_24 :
          if(match_cons(l_24, sym__2))
            {
              m_24 = ATgetArgument(l_24, 0);
              n_24 = ATgetArgument(l_24, 1);
              b_24 :
              if(match_string(m_24, ""))
                {
                  c_24 :
                  if(((ATgetType(n_24) == AT_LIST) && !(ATisEmpty(n_24))))
                    {
                      o_24 = ATgetFirst((ATermList) n_24);
                      p_24 = (ATerm) ATgetNext((ATermList) n_24);
                      d_24 :
                      if(((ATgetType(p_24) == AT_LIST) && !(ATisEmpty(p_24))))
                        {
                          q_24 = ATgetFirst((ATermList) p_24);
                          r_24 = (ATerm) ATgetNext((ATermList) p_24);
                          {
                            if(((g_24 != NULL) && (g_24 != o_24)))
                              _fail(o_24);
                            else
                              g_24 = o_24;
                            {
                              if(((i_24 != NULL) && (i_24 != q_24)))
                                _fail(q_24);
                              else
                                i_24 = q_24;
                              if(((h_24 != NULL) && (h_24 != r_24)))
                                _fail(r_24);
                              else
                                h_24 = r_24;
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
    t = not_null(i_24);
  }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = term_y_10;
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    ATerm x_24 = NULL,z_24 = NULL;
    ATerm b_11;
    b_11 = t;
    {
      ATerm y_24 = NULL;
      t = Fst_0(t);
      {
        y_24 = t;
        if(((x_24 != NULL) && (x_24 != y_24)))
          _fail(y_24);
        else
          x_24 = y_24;
      }
    }
    t = b_11;
    {
      ATerm a_25 = NULL;
      t = Snd_0(t);
      {
        a_25 = t;
        if(((z_24 != NULL) && (z_24 != a_25)))
          _fail(a_25);
        else
          z_24 = a_25;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(x_24), not_null(z_24));
    }
    return(t);
  }
  t = foldr_2(t, l_1, m_1);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL;
  f_25 = t;
  e_25 :
  if(match_cons(f_25, sym_Var_1))
    {
      g_25 = ATgetArgument(f_25, 0);
      t = not_null(g_25);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
  s_25 = t;
  l_25 :
  if(match_cons(s_25, sym_CallT_3))
    {
      t_25 = ATgetArgument(s_25, 0);
      v_25 = ATgetArgument(s_25, 1);
      r_25 = ATgetArgument(s_25, 2);
      m_25 :
      if(match_cons(t_25, sym_SVar_1))
        {
          u_25 = ATgetArgument(t_25, 0);
          n_25 :
          if(((ATgetType(v_25) == AT_LIST) && ATisEmpty(v_25)))
            {
              o_25 :
              if(((ATgetType(r_25) == AT_LIST) && ATisEmpty(r_25)))
                {
                  t = not_null(u_25);
                }
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
      if(match_cons(s_25, sym_Call_2))
        {
          t_25 = ATgetArgument(s_25, 0);
          v_25 = ATgetArgument(s_25, 1);
          p_25 :
          if(match_cons(t_25, sym_SVar_1))
            {
              u_25 = ATgetArgument(t_25, 0);
              q_25 :
              if(((ATgetType(v_25) == AT_LIST) && ATisEmpty(v_25)))
                {
                  t = not_null(u_25);
                }
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
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL;
  d_26 = t;
  b_26 :
  if(match_cons(d_26, sym__2))
    {
      e_26 = ATgetArgument(d_26, 0);
      f_26 = ATgetArgument(d_26, 1);
      c_26 :
      if(((ATgetType(f_26) == AT_LIST) && !(ATisEmpty(f_26))))
        {
          g_26 = ATgetFirst((ATermList) f_26);
          h_26 = (ATerm) ATgetNext((ATermList) f_26);
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_26), not_null(h_26));
        }
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
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
  p_26 = t;
  m_26 :
  if(match_cons(p_26, sym__2))
    {
      q_26 = ATgetArgument(p_26, 0);
      r_26 = ATgetArgument(p_26, 1);
      n_26 :
      if(((ATgetType(r_26) == AT_LIST) && !(ATisEmpty(r_26))))
        {
          s_26 = ATgetFirst((ATermList) r_26);
          v_26 = (ATerm) ATgetNext((ATermList) r_26);
          o_26 :
          if(match_cons(s_26, sym__2))
            {
              t_26 = ATgetArgument(s_26, 0);
              u_26 = ATgetArgument(s_26, 1);
              {
                ATerm x_26 = NULL;
                if(((q_26 != NULL) && (q_26 != t_26)))
                  _fail(t_26);
                else
                  q_26 = t_26;
                {
                  if(((x_26 != NULL) && (x_26 != u_26)))
                    _fail(u_26);
                  else
                    x_26 = u_26;
                  t = not_null(x_26);
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
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm n_104 (ATerm), ATerm o_104 (ATerm))
{
  ATerm d_27 = NULL;
  ATerm f_27 = NULL,g_27 = NULL;
  d_27 = t;
  {
    ATerm h_27 = NULL;
    t = not_null(d_27);
    {
      ATerm i_27 = NULL;
      t = n_104(t);
      {
        h_27 = t;
        {
          if(((f_27 != NULL) && (f_27 != h_27)))
            _fail(h_27);
          else
            f_27 = h_27;
          {
            t = o_104(t);
            {
              i_27 = t;
              if(((g_27 != NULL) && (g_27 != i_27)))
                _fail(i_27);
              else
                g_27 = i_27;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_27), not_null(g_27));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm h_106 (ATerm))
{
  ATerm m_27 (ATerm t)
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_106(t);
        ;
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        t = _all(t, m_27);
      }
    return(t);
  }
  t = m_27(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL;
  r_27 = t;
  q_27 :
  if(match_cons(r_27, sym__2))
    {
      s_27 = ATgetArgument(r_27, 0);
      t_27 = ATgetArgument(r_27, 1);
      {
        ATerm w_27 = NULL;
        if(((w_27 != NULL) && (w_27 != t_27)))
          _fail(t_27);
        else
          w_27 = t_27;
      }
    }
  else
    {
      if(match_cons(r_27, sym__3))
        {
          s_27 = ATgetArgument(r_27, 0);
          t_27 = ATgetArgument(r_27, 1);
          u_27 = ATgetArgument(r_27, 2);
          {
            ATerm c_28 = NULL;
            ATerm d_28 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_27), not_null(t_27));
            {
              t = zip_1(t, _id);
              {
                d_28 = t;
                if(((c_28 != NULL) && (c_28 != d_28)))
                  _fail(d_28);
                else
                  c_28 = d_28;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_28), not_null(u_27));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm y_103 (ATerm), ATerm z_103 (ATerm))
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
  t = subs_args_0(t);
  {
    j_28 = t;
    i_28 :
    if(match_cons(j_28, sym__2))
      {
        k_28 = ATgetArgument(j_28, 0);
        l_28 = ATgetArgument(j_28, 1);
        {
          t = not_null(l_28);
          {
            ATerm n_1 (ATerm t)
            {
              ATerm o_1 (ATerm t)
              {
                t = not_null(k_28);
                return(t);
              }
              t = SubsVar_2(t, y_103, o_1);
              t = z_103(t);
              return(t);
            }
            t = alltd_1(t, n_1);
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
ATerm substitute_1 (ATerm t, ATerm a_104 (ATerm))
{
  t = substitute_2(t, a_104, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm w_95 (ATerm), ATerm x_95 (ATerm))
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
  v_28 = t;
  u_28 :
  if(match_cons(v_28, sym_VarDec_2))
    {
      w_28 = ATgetArgument(v_28, 0);
      x_28 = ATgetArgument(v_28, 1);
      {
        ATerm b_29 = NULL,d_29 = NULL;
        ATerm c_29 = NULL;
        t = SSLgetAnnotations(not_null(v_28));
        {
          c_29 = t;
          if(((b_29 != NULL) && (b_29 != c_29)))
            _fail(c_29);
          else
            b_29 = c_29;
        }
        {
          t = not_null(w_28);
          {
            ATerm f_29 = NULL;
            t = w_95(t);
            {
              d_29 = t;
              {
                t = not_null(x_28);
                {
                  ATerm h_29 = NULL;
                  t = x_95(t);
                  {
                    f_29 = t;
                    {
                      ATerm i_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(d_29), not_null(f_29)), not_null(b_29));
                      {
                        i_29 = t;
                        if(((h_29 != NULL) && (h_29 != i_29)))
                          _fail(i_29);
                        else
                          h_29 = i_29;
                      }
                      t = not_null(h_29);
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
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL;
  k_30 = t;
  i_30 :
  if(((ATgetType(k_30) == AT_LIST) && !(ATisEmpty(k_30))))
    {
      l_30 = ATgetFirst((ATermList) k_30);
      q_30 = (ATerm) ATgetNext((ATermList) k_30);
      j_30 :
      if(match_cons(l_30, sym_SDefT_4))
        {
          m_30 = ATgetArgument(l_30, 0);
          n_30 = ATgetArgument(l_30, 1);
          o_30 = ATgetArgument(l_30, 2);
          p_30 = ATgetArgument(l_30, 3);
          {
            ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,m_32 = NULL;
            ATerm o_11;
            o_11 = t;
            {
              ATerm b_31 = NULL;
              t = not_null(n_30);
              {
                ATerm c_31 = NULL;
                ATerm p_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, p_1);
                {
                  b_31 = t;
                  {
                    if(((w_30 != NULL) && (w_30 != b_31)))
                      _fail(b_31);
                    else
                      w_30 = b_31;
                    {
                      t = not_null(o_30);
                      {
                        ATerm i_31 = NULL;
                        ATerm q_1 (ATerm t)
                        {
                          t = VarDec_2(t, new_0, _id);
                          return(t);
                        }
                        t = map_1(t, q_1);
                        {
                          c_31 = t;
                          {
                            if(((x_30 != NULL) && (x_30 != c_31)))
                              _fail(c_31);
                            else
                              x_30 = c_31;
                            {
                              t = not_null(w_30);
                              {
                                ATerm o_31 = NULL;
                                ATerm r_1 (ATerm t)
                                {
                                  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
                                  d_31 = t;
                                  s_29 :
                                  if(match_cons(d_31, sym_VarDec_2))
                                    {
                                      e_31 = ATgetArgument(d_31, 0);
                                      f_31 = ATgetArgument(d_31, 1);
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_31)), (ATerm)ATempty, (ATerm) ATempty);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, r_1);
                                {
                                  i_31 = t;
                                  {
                                    if(((y_30 != NULL) && (y_30 != i_31)))
                                      _fail(i_31);
                                    else
                                      y_30 = i_31;
                                    {
                                      t = not_null(x_30);
                                      {
                                        ATerm l_32 = NULL;
                                        ATerm s_1 (ATerm t)
                                        {
                                          ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
                                          j_31 = t;
                                          v_29 :
                                          if(match_cons(j_31, sym_VarDec_2))
                                            {
                                              k_31 = ATgetArgument(j_31, 0);
                                              l_31 = ATgetArgument(j_31, 1);
                                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_31));
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                          return(t);
                                        }
                                        t = map_1(t, s_1);
                                        {
                                          o_31 = t;
                                          {
                                            if(((z_30 != NULL) && (z_30 != o_31)))
                                              _fail(o_31);
                                            else
                                              z_30 = o_31;
                                            {
                                              t = not_null(k_30);
                                              {
                                                ATerm t_1 (ATerm t)
                                                {
                                                  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
                                                  p_31 = t;
                                                  f_30 :
                                                  if(match_cons(p_31, sym_SDefT_4))
                                                    {
                                                      q_31 = ATgetArgument(p_31, 0);
                                                      r_31 = ATgetArgument(p_31, 1);
                                                      s_31 = ATgetArgument(p_31, 2);
                                                      t_31 = ATgetArgument(p_31, 3);
                                                      {
                                                        ATerm x_31 = NULL,d_32 = NULL;
                                                        ATerm p_11;
                                                        p_11 = t;
                                                        {
                                                          ATerm c_32 = NULL;
                                                          t = not_null(s_31);
                                                          {
                                                            ATerm u_1 (ATerm t)
                                                            {
                                                              ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL;
                                                              y_31 = t;
                                                              z_29 :
                                                              if(match_cons(y_31, sym_VarDec_2))
                                                                {
                                                                  z_31 = ATgetArgument(y_31, 0);
                                                                  a_32 = ATgetArgument(y_31, 1);
                                                                  t = not_null(z_31);
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            t = map_1(t, u_1);
                                                            {
                                                              c_32 = t;
                                                              if(((x_31 != NULL) && (x_31 != c_32)))
                                                                _fail(c_32);
                                                              else
                                                                x_31 = c_32;
                                                            }
                                                          }
                                                        }
                                                        t = p_11;
                                                        {
                                                          ATerm e_32 = NULL,k_32 = NULL;
                                                          ATerm j_32 = NULL;
                                                          t = not_null(r_31);
                                                          {
                                                            ATerm w_1 (ATerm t)
                                                            {
                                                              ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
                                                              f_32 = t;
                                                              c_30 :
                                                              if(match_cons(f_32, sym_VarDec_2))
                                                                {
                                                                  g_32 = ATgetArgument(f_32, 0);
                                                                  h_32 = ATgetArgument(f_32, 1);
                                                                  t = not_null(g_32);
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            t = map_1(t, w_1);
                                                            {
                                                              j_32 = t;
                                                              if(((e_32 != NULL) && (e_32 != j_32)))
                                                                _fail(j_32);
                                                              else
                                                                e_32 = j_32;
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym__3, not_null(e_32), not_null(y_30), not_null(t_31));
                                                            {
                                                              t = ssubs_0(t);
                                                              {
                                                                k_32 = t;
                                                                if(((d_32 != NULL) && (d_32 != k_32)))
                                                                  _fail(k_32);
                                                                else
                                                                  d_32 = k_32;
                                                              }
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym__3, not_null(x_31), not_null(z_30), not_null(d_32));
                                                            t = tsubs_0(t);
                                                          }
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                t = map_1(t, t_1);
                                                {
                                                  l_32 = t;
                                                  if(((a_31 != NULL) && (a_31 != l_32)))
                                                    _fail(l_32);
                                                  else
                                                    a_31 = l_32;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = o_11;
            {
              ATerm n_32 = NULL;
              t = not_null(a_31);
              {
                t = choices_0(t);
                {
                  n_32 = t;
                  if(((m_32 != NULL) && (m_32 != n_32)))
                    _fail(n_32);
                  else
                    m_32 = n_32;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(m_30), not_null(w_30), not_null(x_30), not_null(m_32));
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
ATerm JoinDefs1_0 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
  g_33 = t;
  e_33 :
  if(((ATgetType(g_33) == AT_LIST) && !(ATisEmpty(g_33))))
    {
      h_33 = ATgetFirst((ATermList) g_33);
      i_33 = (ATerm) ATgetNext((ATermList) g_33);
      f_33 :
      if(((ATgetType(i_33) == AT_LIST) && ATisEmpty(i_33)))
        {
          t = not_null(h_33);
        }
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
ATerm joindefs_0 (ATerm t)
{
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL;
  p_33 = t;
  n_33 :
  if(match_cons(p_33, sym__2))
    {
      q_33 = ATgetArgument(p_33, 0);
      t_33 = ATgetArgument(p_33, 1);
      o_33 :
      if(match_cons(q_33, sym__2))
        {
          r_33 = ATgetArgument(q_33, 0);
          s_33 = ATgetArgument(q_33, 1);
          {
            ATerm x_33 = NULL;
            ATerm y_33 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_33), not_null(s_33));
            {
              t = Definitions_0(t);
              {
                y_33 = t;
                if(((x_33 != NULL) && (x_33 != y_33)))
                  _fail(y_33);
                else
                  x_33 = y_33;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_33), not_null(t_33));
          }
        }
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
ATerm Expl_0 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
  t_34 = t;
  r_34 :
  if(match_cons(t_34, sym_ExplodeCong_2))
    {
      u_34 = ATgetArgument(t_34, 0);
      s_34 = ATgetArgument(t_34, 1);
      {
        ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL;
        ATerm b_35 = NULL;
        ATerm c_35 = NULL;
        t = new_0(t);
        {
          b_35 = t;
          {
            if(((x_34 != NULL) && (x_34 != b_35)))
              _fail(b_35);
            else
              x_34 = b_35;
            {
              ATerm d_35 = NULL;
              t = new_0(t);
              {
                c_35 = t;
                {
                  if(((y_34 != NULL) && (y_34 != c_35)))
                    _fail(c_35);
                  else
                    y_34 = c_35;
                  {
                    ATerm e_35 = NULL;
                    t = new_0(t);
                    {
                      d_35 = t;
                      {
                        if(((z_34 != NULL) && (z_34 != d_35)))
                          _fail(d_35);
                        else
                          z_34 = d_35;
                        {
                          t = new_0(t);
                          {
                            e_35 = t;
                            if(((a_35 != NULL) && (a_35 != e_35)))
                              _fail(e_35);
                            else
                              a_35 = e_35;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(a_35)), not_null(z_34)), not_null(y_34)), not_null(x_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_34)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_34)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(u_34), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_34)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_34))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(s_34), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_34)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_35))))), (ATerm) ATmakeAppl(sym_PrimT_3, term_z_11, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_35))), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_34)))))));
      }
    }
  else
    {
      if(match_cons(t_34, sym_Build_1))
        {
          u_34 = ATgetArgument(t_34, 0);
          {
            ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL;
            ATerm k_35 = NULL;
            ATerm o_35 = NULL;
            t = new_0(t);
            {
              k_35 = t;
              {
                if(((i_35 != NULL) && (i_35 != k_35)))
                  _fail(k_35);
                else
                  i_35 = k_35;
                {
                  t = not_null(u_34);
                  {
                    ATerm y_1 (ATerm t)
                    {
                      ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL;
                      l_35 = t;
                      k_34 :
                      if(match_cons(l_35, sym_Explode_2))
                        {
                          m_35 = ATgetArgument(l_35, 0);
                          n_35 = ATgetArgument(l_35, 1);
                          {
                            if(((g_35 != NULL) && (g_35 != m_35)))
                              _fail(m_35);
                            else
                              g_35 = m_35;
                            {
                              if(((h_35 != NULL) && (h_35 != n_35)))
                                _fail(n_35);
                              else
                                h_35 = n_35;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_35));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, y_1);
                    {
                      o_35 = t;
                      if(((j_35 != NULL) && (j_35 != o_35)))
                        _fail(o_35);
                      else
                        j_35 = o_35;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_z_11, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_35)), not_null(g_35))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_35))), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_35)))));
          }
        }
      else
        {
          if(match_cons(t_34, sym_Match_1))
            {
              u_34 = ATgetArgument(t_34, 0);
              {
                ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL;
                ATerm v_35 = NULL;
                ATerm w_35 = NULL;
                t = new_0(t);
                {
                  v_35 = t;
                  {
                    if(((s_35 != NULL) && (s_35 != v_35)))
                      _fail(v_35);
                    else
                      s_35 = v_35;
                    {
                      ATerm a_36 = NULL;
                      t = new_0(t);
                      {
                        w_35 = t;
                        {
                          if(((t_35 != NULL) && (t_35 != w_35)))
                            _fail(w_35);
                          else
                            t_35 = w_35;
                          {
                            t = not_null(u_34);
                            {
                              ATerm z_1 (ATerm t)
                              {
                                ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
                                x_35 = t;
                                p_34 :
                                if(match_cons(x_35, sym_Explode_2))
                                  {
                                    y_35 = ATgetArgument(x_35, 0);
                                    z_35 = ATgetArgument(x_35, 1);
                                    {
                                      if(((q_35 != NULL) && (q_35 != y_35)))
                                        _fail(y_35);
                                      else
                                        q_35 = y_35;
                                      {
                                        if(((r_35 != NULL) && (r_35 != z_35)))
                                          _fail(z_35);
                                        else
                                          r_35 = z_35;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_35));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, z_1);
                              {
                                a_36 = t;
                                if(((u_35 != NULL) && (u_35 != a_36)))
                                  _fail(a_36);
                                else
                                  u_35 = a_36;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_35)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_35))), (ATerm) ATmakeAppl(sym_PrimT_3, term_a_12, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_35)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(s_35)), (ATerm) ATmakeAppl(sym_Op_2, term_b_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_35)), not_null(q_35)))))));
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
  ATerm j_37 = NULL,k_37 = NULL;
  j_37 = t;
  i_37 :
  if(match_cons(j_37, sym_Match_1))
    {
      k_37 = ATgetArgument(j_37, 0);
      {
        ATerm c_12 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL;
            ATerm q_37 = NULL;
            ATerm u_37 = NULL;
            t = new_0(t);
            {
              q_37 = t;
              {
                if(((o_37 != NULL) && (o_37 != q_37)))
                  _fail(q_37);
                else
                  o_37 = q_37;
                {
                  t = not_null(k_37);
                  {
                    ATerm a_2 (ATerm t)
                    {
                      ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL;
                      r_37 = t;
                      u_36 :
                      if(match_cons(r_37, sym_Anno_2))
                        {
                          s_37 = ATgetArgument(r_37, 0);
                          t_37 = ATgetArgument(r_37, 1);
                          {
                            if(((m_37 != NULL) && (m_37 != s_37)))
                              _fail(s_37);
                            else
                              m_37 = s_37;
                            {
                              if(((n_37 != NULL) && (n_37 != t_37)))
                                _fail(t_37);
                              else
                                n_37 = t_37;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_37)), not_null(m_37));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, a_2);
                    {
                      u_37 = t;
                      if(((p_37 != NULL) && (p_37 != u_37)))
                        _fail(u_37);
                      else
                        p_37 = u_37;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_37)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_37)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_l_12, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_37)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(n_37))))));
            ;
            LocalPopChoice(d_12);
          }
        else
          {
            t = c_12;
            {
              ATerm m_12 = t;
              int n_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL;
                  ATerm k_38 = NULL;
                  ATerm r_38 = NULL;
                  t = new_0(t);
                  {
                    k_38 = t;
                    {
                      if(((i_38 != NULL) && (i_38 != k_38)))
                        _fail(k_38);
                      else
                        i_38 = k_38;
                      {
                        t = not_null(k_37);
                        {
                          ATerm b_2 (ATerm t)
                          {
                            ATerm p_38 = NULL,q_38 = NULL;
                            p_38 = t;
                            y_36 :
                            if(match_cons(p_38, sym_RootApp_1))
                              {
                                q_38 = ATgetArgument(p_38, 0);
                                {
                                  if(((h_38 != NULL) && (h_38 != q_38)))
                                    _fail(q_38);
                                  else
                                    h_38 = q_38;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_38));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, b_2);
                          {
                            r_38 = t;
                            if(((j_38 != NULL) && (j_38 != r_38)))
                              _fail(r_38);
                            else
                              j_38 = r_38;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_38))), not_null(h_38))));
                  ;
                  LocalPopChoice(n_12);
                }
              else
                {
                  t = m_12;
                  {
                    ATerm t_38 = NULL,u_38 = NULL,y_38 = NULL,z_38 = NULL;
                    ATerm a_39 = NULL;
                    ATerm p_39 = NULL;
                    t = new_0(t);
                    {
                      a_39 = t;
                      {
                        if(((y_38 != NULL) && (y_38 != a_39)))
                          _fail(a_39);
                        else
                          y_38 = a_39;
                        {
                          t = not_null(k_37);
                          {
                            ATerm c_2 (ATerm t)
                            {
                              ATerm d_39 = NULL,e_39 = NULL,n_39 = NULL;
                              d_39 = t;
                              g_37 :
                              if(match_cons(d_39, sym_App_2))
                                {
                                  e_39 = ATgetArgument(d_39, 0);
                                  n_39 = ATgetArgument(d_39, 1);
                                  {
                                    if(((u_38 != NULL) && (u_38 != e_39)))
                                      _fail(e_39);
                                    else
                                      u_38 = e_39;
                                    {
                                      if(((t_38 != NULL) && (t_38 != n_39)))
                                        _fail(n_39);
                                      else
                                        t_38 = n_39;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_38));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, c_2);
                            {
                              p_39 = t;
                              if(((z_38 != NULL) && (z_38 != p_39)))
                                _fail(p_39);
                              else
                                z_38 = p_39;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_38))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_38)), not_null(u_38)))));
                  }
                }
            }
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
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL;
  l_40 = t;
  j_40 :
  if(match_cons(l_40, sym_Match_1))
    {
      m_40 = ATgetArgument(l_40, 0);
      k_40 :
      if(match_cons(m_40, sym_RootApp_1))
        {
          n_40 = ATgetArgument(m_40, 0);
          t = not_null(n_40);
        }
      else
        {
          if(match_cons(m_40, sym_App_2))
            {
              n_40 = ATgetArgument(m_40, 0);
              o_40 = ATgetArgument(m_40, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(n_40), not_null(o_40));
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
  ATerm c_41 = NULL,d_41 = NULL;
  c_41 = t;
  b_41 :
  if(match_cons(c_41, sym_Match_1))
    {
      d_41 = ATgetArgument(c_41, 0);
      {
        ATerm f_41 = NULL,g_41 = NULL;
        ATerm k_41 = NULL;
        t = not_null(d_41);
        {
          ATerm d_2 (ATerm t)
          {
            ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL;
            h_41 = t;
            y_40 :
            if(match_cons(h_41, sym_RootApp_1))
              {
                i_41 = ATgetArgument(h_41, 0);
                z_40 :
                if(match_cons(i_41, sym_Match_1))
                  {
                    j_41 = ATgetArgument(i_41, 0);
                    {
                      if(((f_41 != NULL) && (f_41 != j_41)))
                        _fail(j_41);
                      else
                        f_41 = j_41;
                      t = not_null(f_41);
                    }
                  }
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
          t = pat_td_1(t, d_2);
          {
            k_41 = t;
            if(((g_41 != NULL) && (g_41 != k_41)))
              _fail(k_41);
            else
              g_41 = k_41;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(g_41));
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
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      ;
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      {
        ATerm v_12 = t;
        int w_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            ;
            LocalPopChoice(w_12);
          }
        else
          {
            t = v_12;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL;
  e_42 = t;
  d_42 :
  if(match_cons(e_42, sym_Build_1))
    {
      f_42 = ATgetArgument(e_42, 0);
      {
        ATerm x_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL,o_42 = NULL;
            ATerm p_42 = NULL;
            ATerm t_42 = NULL;
            t = new_0(t);
            {
              p_42 = t;
              {
                if(((j_42 != NULL) && (j_42 != p_42)))
                  _fail(p_42);
                else
                  j_42 = p_42;
                {
                  t = not_null(f_42);
                  {
                    ATerm e_2 (ATerm t)
                    {
                      ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL;
                      q_42 = t;
                      t_41 :
                      if(match_cons(q_42, sym_Anno_2))
                        {
                          r_42 = ATgetArgument(q_42, 0);
                          s_42 = ATgetArgument(q_42, 1);
                          {
                            if(((h_42 != NULL) && (h_42 != r_42)))
                              _fail(r_42);
                            else
                              h_42 = r_42;
                            {
                              if(((i_42 != NULL) && (i_42 != s_42)))
                                _fail(s_42);
                              else
                                i_42 = s_42;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_42));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, e_2);
                    {
                      t_42 = t;
                      if(((o_42 != NULL) && (o_42 != t_42)))
                        _fail(t_42);
                      else
                        o_42 = t_42;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_42)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_b_13, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_42)), not_null(h_42))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_42))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_42))));
            ;
            LocalPopChoice(a_13);
          }
        else
          {
            t = x_12;
            {
              ATerm c_13 = t;
              int d_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL;
                  ATerm g_43 = NULL;
                  ATerm j_43 = NULL;
                  t = new_0(t);
                  {
                    g_43 = t;
                    {
                      if(((e_43 != NULL) && (e_43 != g_43)))
                        _fail(g_43);
                      else
                        e_43 = g_43;
                      {
                        t = not_null(f_42);
                        {
                          ATerm f_2 (ATerm t)
                          {
                            ATerm h_43 = NULL,i_43 = NULL;
                            h_43 = t;
                            x_41 :
                            if(match_cons(h_43, sym_RootApp_1))
                              {
                                i_43 = ATgetArgument(h_43, 0);
                                {
                                  if(((d_43 != NULL) && (d_43 != i_43)))
                                    _fail(i_43);
                                  else
                                    d_43 = i_43;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_43));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, f_2);
                          {
                            j_43 = t;
                            if(((f_43 != NULL) && (f_43 != j_43)))
                              _fail(j_43);
                            else
                              f_43 = j_43;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_43)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_43), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_43))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_43))));
                  ;
                  LocalPopChoice(d_13);
                }
              else
                {
                  t = c_13;
                  {
                    ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL;
                    ATerm p_43 = NULL;
                    ATerm t_43 = NULL;
                    t = new_0(t);
                    {
                      p_43 = t;
                      {
                        if(((n_43 != NULL) && (n_43 != p_43)))
                          _fail(p_43);
                        else
                          n_43 = p_43;
                        {
                          t = not_null(f_42);
                          {
                            ATerm g_2 (ATerm t)
                            {
                              ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL;
                              q_43 = t;
                              b_42 :
                              if(match_cons(q_43, sym_App_2))
                                {
                                  r_43 = ATgetArgument(q_43, 0);
                                  s_43 = ATgetArgument(q_43, 1);
                                  {
                                    if(((l_43 != NULL) && (l_43 != r_43)))
                                      _fail(r_43);
                                    else
                                      l_43 = r_43;
                                    {
                                      if(((m_43 != NULL) && (m_43 != s_43)))
                                        _fail(s_43);
                                      else
                                        m_43 = s_43;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_43));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, g_2);
                            {
                              t_43 = t;
                              if(((o_43 != NULL) && (o_43 != t_43)))
                                _fail(t_43);
                              else
                                o_43 = t_43;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_43)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(l_43), not_null(m_43), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_43)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_43))));
                  }
                }
            }
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
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL;
  p_44 = t;
  n_44 :
  if(match_cons(p_44, sym_Build_1))
    {
      q_44 = ATgetArgument(p_44, 0);
      o_44 :
      if(match_cons(q_44, sym_RootApp_1))
        {
          r_44 = ATgetArgument(q_44, 0);
          t = not_null(r_44);
        }
      else
        {
          if(match_cons(q_44, sym_App_2))
            {
              r_44 = ATgetArgument(q_44, 0);
              s_44 = ATgetArgument(q_44, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_44)), not_null(r_44));
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
ATerm As_2 (ATerm t, ATerm s_90 (ATerm), ATerm t_90 (ATerm))
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL;
  t_45 = t;
  q_45 :
  if(match_cons(t_45, sym_As_2))
    {
      u_45 = ATgetArgument(t_45, 0);
      v_45 = ATgetArgument(t_45, 1);
      {
        ATerm z_45 = NULL,b_46 = NULL;
        ATerm a_46 = NULL;
        t = SSLgetAnnotations(not_null(t_45));
        {
          a_46 = t;
          if(((z_45 != NULL) && (z_45 != a_46)))
            _fail(a_46);
          else
            z_45 = a_46;
        }
        {
          t = not_null(u_45);
          {
            ATerm d_46 = NULL;
            t = s_90(t);
            {
              b_46 = t;
              {
                t = not_null(v_45);
                {
                  ATerm f_46 = NULL;
                  t = t_90(t);
                  {
                    d_46 = t;
                    {
                      ATerm g_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(b_46), not_null(d_46)), not_null(z_45));
                      {
                        g_46 = t;
                        if(((f_46 != NULL) && (f_46 != g_46)))
                          _fail(g_46);
                        else
                          f_46 = g_46;
                      }
                      t = not_null(f_46);
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
ATerm PrimT_3 (ATerm t, ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t_94 (ATerm))
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL;
  b_47 = t;
  a_47 :
  if(match_cons(b_47, sym_PrimT_3))
    {
      c_47 = ATgetArgument(b_47, 0);
      d_47 = ATgetArgument(b_47, 1);
      e_47 = ATgetArgument(b_47, 2);
      {
        ATerm q_47 = NULL,s_47 = NULL;
        ATerm r_47 = NULL;
        t = SSLgetAnnotations(not_null(b_47));
        {
          r_47 = t;
          if(((q_47 != NULL) && (q_47 != r_47)))
            _fail(r_47);
          else
            q_47 = r_47;
        }
        {
          t = not_null(c_47);
          {
            ATerm u_47 = NULL;
            t = r_94(t);
            {
              s_47 = t;
              {
                t = not_null(d_47);
                {
                  ATerm w_47 = NULL;
                  t = s_94(t);
                  {
                    u_47 = t;
                    {
                      t = not_null(e_47);
                      {
                        ATerm y_47 = NULL;
                        t = t_94(t);
                        {
                          w_47 = t;
                          {
                            ATerm z_47 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(s_47), not_null(u_47), not_null(w_47)), not_null(q_47));
                            {
                              z_47 = t;
                              if(((y_47 != NULL) && (y_47 != z_47)))
                                _fail(z_47);
                              else
                                y_47 = z_47;
                            }
                            t = not_null(y_47);
                          }
                        }
                      }
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
ATerm Explode_2 (ATerm t, ATerm l_90 (ATerm), ATerm m_90 (ATerm))
{
  ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL;
  m_48 = t;
  l_48 :
  if(match_cons(m_48, sym_Explode_2))
    {
      n_48 = ATgetArgument(m_48, 0);
      o_48 = ATgetArgument(m_48, 1);
      {
        ATerm s_48 = NULL,v_48 = NULL;
        ATerm u_48 = NULL;
        t = SSLgetAnnotations(not_null(m_48));
        {
          u_48 = t;
          if(((s_48 != NULL) && (s_48 != u_48)))
            _fail(u_48);
          else
            s_48 = u_48;
        }
        {
          t = not_null(n_48);
          {
            ATerm x_48 = NULL;
            t = l_90(t);
            {
              v_48 = t;
              {
                t = not_null(o_48);
                {
                  ATerm b_49 = NULL;
                  t = m_90(t);
                  {
                    x_48 = t;
                    {
                      ATerm c_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(v_48), not_null(x_48)), not_null(s_48));
                      {
                        c_49 = t;
                        if(((b_49 != NULL) && (b_49 != c_49)))
                          _fail(c_49);
                        else
                          b_49 = c_49;
                      }
                      t = not_null(b_49);
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
ATerm Op_2 (ATerm t, ATerm h_90 (ATerm), ATerm i_90 (ATerm))
{
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL;
  q_49 = t;
  p_49 :
  if(match_cons(q_49, sym_Op_2))
    {
      r_49 = ATgetArgument(q_49, 0);
      s_49 = ATgetArgument(q_49, 1);
      {
        ATerm w_49 = NULL,a_50 = NULL;
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
            ATerm c_50 = NULL;
            t = h_90(t);
            {
              a_50 = t;
              {
                t = not_null(s_49);
                {
                  ATerm f_50 = NULL;
                  t = i_90(t);
                  {
                    c_50 = t;
                    {
                      ATerm g_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(a_50), not_null(c_50)), not_null(w_49));
                      {
                        g_50 = t;
                        if(((f_50 != NULL) && (f_50 != g_50)))
                          _fail(g_50);
                        else
                          f_50 = g_50;
                      }
                      t = not_null(f_50);
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
ATerm pat_td_1 (ATerm t, ATerm r_133 (ATerm))
{
  ATerm j_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_133(t);
      ;
      LocalPopChoice(w_13);
    }
  else
    {
      t = j_13;
      {
        ATerm f_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_2 (ATerm t)
            {
              ATerm i_2 (ATerm t)
              {
                t = pat_td_1(t, r_133);
                return(t);
              }
              t = fetch_1(t, i_2);
              return(t);
            }
            t = Op_2(t, _id, h_2);
            ;
            LocalPopChoice(n_14);
          }
        else
          {
            t = f_14;
            {
              ATerm o_14 = t;
              int p_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_2 (ATerm t)
                  {
                    t = pat_td_1(t, r_133);
                    return(t);
                  }
                  t = Explode_2(t, _id, j_2);
                  ;
                  LocalPopChoice(p_14);
                }
              else
                {
                  t = o_14;
                  {
                    ATerm q_14 = t;
                    int r_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_2 (ATerm t)
                        {
                          t = pat_td_1(t, r_133);
                          return(t);
                        }
                        t = Explode_2(t, k_2, _id);
                        ;
                        LocalPopChoice(r_14);
                      }
                    else
                      {
                        t = q_14;
                        {
                          ATerm s_14 = t;
                          int t_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_2 (ATerm t)
                              {
                                ATerm m_2 (ATerm t)
                                {
                                  t = pat_td_1(t, r_133);
                                  return(t);
                                }
                                t = fetch_1(t, m_2);
                                return(t);
                              }
                              t = PrimT_3(t, _id, _id, l_2);
                              ;
                              LocalPopChoice(t_14);
                            }
                          else
                            {
                              t = s_14;
                              {
                                ATerm n_2 (ATerm t)
                                {
                                  t = pat_td_1(t, r_133);
                                  return(t);
                                }
                                t = As_2(t, _id, n_2);
                              }
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
  ATerm i_51 = NULL,j_51 = NULL;
  i_51 = t;
  h_51 :
  if(match_cons(i_51, sym_Build_1))
    {
      j_51 = ATgetArgument(i_51, 0);
      {
        ATerm u_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_51 = NULL,m_51 = NULL;
            ATerm q_51 = NULL;
            t = not_null(j_51);
            {
              ATerm o_2 (ATerm t)
              {
                ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL;
                n_51 = t;
                y_50 :
                if(match_cons(n_51, sym_RootApp_1))
                  {
                    o_51 = ATgetArgument(n_51, 0);
                    z_50 :
                    if(match_cons(o_51, sym_Build_1))
                      {
                        p_51 = ATgetArgument(o_51, 0);
                        {
                          if(((l_51 != NULL) && (l_51 != p_51)))
                            _fail(p_51);
                          else
                            l_51 = p_51;
                          t = not_null(l_51);
                        }
                      }
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
              t = pat_td_1(t, o_2);
              {
                q_51 = t;
                if(((m_51 != NULL) && (m_51 != q_51)))
                  _fail(q_51);
                else
                  m_51 = q_51;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(m_51));
            ;
            LocalPopChoice(v_14);
          }
        else
          {
            t = u_14;
            {
              ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
              ATerm z_51 = NULL;
              t = not_null(j_51);
              {
                ATerm p_2 (ATerm t)
                {
                  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL;
                  v_51 = t;
                  e_51 :
                  if(match_cons(v_51, sym_App_2))
                    {
                      w_51 = ATgetArgument(v_51, 0);
                      y_51 = ATgetArgument(v_51, 1);
                      f_51 :
                      if(match_cons(w_51, sym_Build_1))
                        {
                          x_51 = ATgetArgument(w_51, 0);
                          {
                            if(((t_51 != NULL) && (t_51 != x_51)))
                              _fail(x_51);
                            else
                              t_51 = x_51;
                            {
                              if(((s_51 != NULL) && (s_51 != y_51)))
                                _fail(y_51);
                              else
                                s_51 = y_51;
                              t = not_null(t_51);
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
                t = pat_td_1(t, p_2);
                {
                  z_51 = t;
                  if(((u_51 != NULL) && (u_51 != z_51)))
                    _fail(z_51);
                  else
                    u_51 = z_51;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(u_51));
            }
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
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      ;
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
      {
        ATerm c_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            ;
            LocalPopChoice(g_15);
          }
        else
          {
            t = c_15;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm MkConstType_0 (ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL;
  p_52 = t;
  o_52 :
  if(match_cons(p_52, sym_DefaultVarDec_1))
    {
      q_52 = ATgetArgument(p_52, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(q_52), term_m_15);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL;
  v_52 = t;
  u_52 :
  if(match_cons(v_52, sym_DefaultVarDec_1))
    {
      w_52 = ATgetArgument(v_52, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(w_52), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_15), term_m_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2(t, q_0, _id);
      {
        ATerm q_2 (ATerm t)
        {
          ATerm r_2 (ATerm t)
          {
            t = map1_1(t, q_0);
            return(t);
          }
          t = try_1(t, r_2);
          return(t);
        }
        t = Cons_2(t, _id, q_2);
      }
      ;
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      {
        ATerm s_2 (ATerm t)
        {
          t = map1_1(t, q_0);
          return(t);
        }
        t = Cons_2(t, _id, s_2);
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL;
  c_54 = t;
  u_53 :
  if(match_cons(c_54, sym_Lets_2))
    {
      d_54 = ATgetArgument(c_54, 0);
      e_54 = ATgetArgument(c_54, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(d_54), not_null(e_54));
    }
  else
    {
      if(match_cons(c_54, sym_LChoices_1))
        {
          d_54 = ATgetArgument(c_54, 0);
          v_53 :
          if(((ATgetType(d_54) == AT_LIST) && !(ATisEmpty(d_54))))
            {
              y_53 = ATgetFirst((ATermList) d_54);
              z_53 = (ATerm) ATgetNext((ATermList) d_54);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(y_53), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(z_53)));
            }
          else
            {
              if(((ATgetType(d_54) == AT_LIST) && ATisEmpty(d_54)))
                {
                  t = term_y_10;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(c_54, sym_Choices_1))
            {
              d_54 = ATgetArgument(c_54, 0);
              w_53 :
              if(((ATgetType(d_54) == AT_LIST) && !(ATisEmpty(d_54))))
                {
                  y_53 = ATgetFirst((ATermList) d_54);
                  z_53 = (ATerm) ATgetNext((ATermList) d_54);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(y_53), (ATerm) ATmakeAppl(sym_Choices_1, not_null(z_53)));
                }
              else
                {
                  if(((ATgetType(d_54) == AT_LIST) && ATisEmpty(d_54)))
                    {
                      t = term_y_10;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(c_54, sym_Seqs_1))
                {
                  d_54 = ATgetArgument(c_54, 0);
                  x_53 :
                  if(((ATgetType(d_54) == AT_LIST) && !(ATisEmpty(d_54))))
                    {
                      y_53 = ATgetFirst((ATermList) d_54);
                      z_53 = (ATerm) ATgetNext((ATermList) d_54);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_53), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(z_53)));
                    }
                  else
                    {
                      if(((ATgetType(d_54) == AT_LIST) && ATisEmpty(d_54)))
                        {
                          t = term_p_15;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(c_54, sym_RDefT_4))
                    {
                      d_54 = ATgetArgument(c_54, 0);
                      e_54 = ATgetArgument(c_54, 1);
                      b_54 = ATgetArgument(c_54, 2);
                      a_54 = ATgetArgument(c_54, 3);
                      {
                        ATerm s_54 = NULL,t_54 = NULL;
                        ATerm u_54 = NULL;
                        t = not_null(e_54);
                        {
                          ATerm v_54 = NULL;
                          t = map1_1(t, MkFunType_0);
                          {
                            u_54 = t;
                            {
                              if(((s_54 != NULL) && (s_54 != u_54)))
                                _fail(u_54);
                              else
                                s_54 = u_54;
                              {
                                t = not_null(b_54);
                                {
                                  ATerm t_2 (ATerm t)
                                  {
                                    t = try_1(t, MkConstType_0);
                                    return(t);
                                  }
                                  t = map1_1(t, t_2);
                                  {
                                    v_54 = t;
                                    if(((t_54 != NULL) && (t_54 != v_54)))
                                      _fail(v_54);
                                    else
                                      t_54 = v_54;
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(d_54), not_null(s_54), not_null(t_54), not_null(a_54));
                      }
                    }
                  else
                    {
                      if(match_cons(c_54, sym_SDefT_4))
                        {
                          d_54 = ATgetArgument(c_54, 0);
                          e_54 = ATgetArgument(c_54, 1);
                          b_54 = ATgetArgument(c_54, 2);
                          a_54 = ATgetArgument(c_54, 3);
                          {
                            ATerm q_15 = t;
                            int r_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm a_55 = NULL,b_55 = NULL;
                                ATerm c_55 = NULL;
                                t = not_null(b_54);
                                {
                                  ATerm d_55 = NULL;
                                  t = map1_1(t, MkConstType_0);
                                  {
                                    c_55 = t;
                                    {
                                      if(((a_55 != NULL) && (a_55 != c_55)))
                                        _fail(c_55);
                                      else
                                        a_55 = c_55;
                                      {
                                        t = not_null(e_54);
                                        {
                                          ATerm u_2 (ATerm t)
                                          {
                                            t = try_1(t, MkFunType_0);
                                            return(t);
                                          }
                                          t = map_1(t, u_2);
                                          {
                                            d_55 = t;
                                            if(((b_55 != NULL) && (b_55 != d_55)))
                                              _fail(d_55);
                                            else
                                              b_55 = d_55;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(d_54), not_null(b_55), not_null(a_55), not_null(a_54));
                                ;
                                LocalPopChoice(r_15);
                              }
                            else
                              {
                                t = q_15;
                                {
                                  ATerm i_55 = NULL,j_55 = NULL;
                                  ATerm k_55 = NULL;
                                  t = not_null(e_54);
                                  {
                                    ATerm l_55 = NULL;
                                    t = map1_1(t, MkFunType_0);
                                    {
                                      k_55 = t;
                                      {
                                        if(((i_55 != NULL) && (i_55 != k_55)))
                                          _fail(k_55);
                                        else
                                          i_55 = k_55;
                                        {
                                          t = not_null(b_54);
                                          {
                                            ATerm v_2 (ATerm t)
                                            {
                                              t = try_1(t, MkConstType_0);
                                              return(t);
                                            }
                                            t = map_1(t, v_2);
                                            {
                                              l_55 = t;
                                              if(((j_55 != NULL) && (j_55 != l_55)))
                                                _fail(l_55);
                                              else
                                                j_55 = l_55;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(d_54), not_null(i_55), not_null(j_55), not_null(a_54));
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(c_54, sym_InfixApp_3))
                            {
                              d_54 = ATgetArgument(c_54, 0);
                              e_54 = ATgetArgument(c_54, 1);
                              b_54 = ATgetArgument(c_54, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, not_null(e_54), (ATerm) ATmakeAppl(sym_Op_2, term_b_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_54)), not_null(d_54))));
                            }
                          else
                            {
                              if(match_cons(c_54, sym_BAM_3))
                                {
                                  d_54 = ATgetArgument(c_54, 0);
                                  e_54 = ATgetArgument(c_54, 1);
                                  b_54 = ATgetArgument(c_54, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(b_54))), not_null(d_54)), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_54))));
                                }
                              else
                                {
                                  if(match_cons(c_54, sym_AM_2))
                                    {
                                      d_54 = ATgetArgument(c_54, 0);
                                      e_54 = ATgetArgument(c_54, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_54), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_54)));
                                    }
                                  else
                                    {
                                      if(match_cons(c_54, sym_MA_2))
                                        {
                                          d_54 = ATgetArgument(c_54, 0);
                                          e_54 = ATgetArgument(c_54, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_54)), not_null(e_54));
                                        }
                                      else
                                        {
                                          if(match_cons(c_54, sym_BA_2))
                                            {
                                              d_54 = ATgetArgument(c_54, 0);
                                              e_54 = ATgetArgument(c_54, 1);
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_54)), not_null(d_54));
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
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL;
  x_56 = t;
  u_56 :
  if(match_cons(x_56, sym__2))
    {
      y_56 = ATgetArgument(x_56, 0);
      b_57 = ATgetArgument(x_56, 1);
      v_56 :
      if(match_cons(y_56, sym__2))
        {
          z_56 = ATgetArgument(y_56, 0);
          a_57 = ATgetArgument(y_56, 1);
          w_56 :
          if(match_cons(b_57, sym__2))
            {
              c_57 = ATgetArgument(b_57, 0);
              d_57 = ATgetArgument(b_57, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_57)), not_null(z_56)), (ATerm) ATinsert(CheckATermList(not_null(d_57)), not_null(a_57)));
            }
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
  ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL;
  l_57 = t;
  k_57 :
  if(((ATgetType(l_57) == AT_LIST) && !(ATisEmpty(l_57))))
    {
      m_57 = ATgetFirst((ATermList) l_57);
      n_57 = (ATerm) ATgetNext((ATermList) l_57);
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_57), not_null(n_57));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm t_57 = NULL;
  t_57 = t;
  s_57 :
  if(((ATgetType(t_57) == AT_LIST) && ATisEmpty(t_57)))
    {
      t = term_s_15;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm l_109 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, l_109);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL;
  ATerm f_58 (ATerm t)
  {
    ATerm c_58 = NULL;
    ATerm d_58 = NULL;
    t = not_null(z_57);
    {
      ATerm t_15 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_15;
        }
      {
        t = new_0(t);
        {
          d_58 = t;
          if(((c_58 != NULL) && (c_58 != d_58)))
            _fail(d_58);
          else
            c_58 = d_58;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(c_58)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_57)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_58))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_58))));
    return(t);
  }
  ATerm g_58 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_p_15, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_58))));
    return(t);
  }
  z_57 = t;
  y_57 :
  if(match_cons(z_57, sym_Var_1))
    {
      a_58 = ATgetArgument(z_57, 0);
      {
        ATerm u_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_58(t);
            ;
            LocalPopChoice(v_15);
          }
        else
          {
            t = u_15;
            t = g_58(t);
          }
      }
    }
  else
    {
      t = f_58(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm v_58 = NULL,w_58 = NULL;
  v_58 = t;
  u_58 :
  if(match_cons(v_58, sym_Var_1))
    {
      w_58 = ATgetArgument(v_58, 0);
      {
        ATerm w_15 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_59 = NULL,e_59 = NULL;
            ATerm d_59 = NULL;
            t = SSLgetAnnotations(not_null(v_58));
            {
              d_59 = t;
              if(((c_59 != NULL) && (c_59 != d_59)))
                _fail(d_59);
              else
                c_59 = d_59;
            }
            {
              t = not_null(w_58);
              {
                ATerm g_59 = NULL;
                t = p_0(t);
                {
                  e_59 = t;
                  {
                    ATerm h_59 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(e_59)), not_null(c_59));
                    {
                      h_59 = t;
                      if(((g_59 != NULL) && (g_59 != h_59)))
                        _fail(h_59);
                      else
                        g_59 = h_59;
                    }
                    t = not_null(g_59);
                  }
                }
              }
            }
            ;
            LocalPopChoice(d_16);
          }
        else
          {
            t = w_15;
            {
              ATerm e_16 = t;
              int f_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_59 = NULL,m_59 = NULL;
                  ATerm l_59 = NULL;
                  t = SSLgetAnnotations(not_null(v_58));
                  {
                    l_59 = t;
                    if(((k_59 != NULL) && (k_59 != l_59)))
                      _fail(l_59);
                    else
                      k_59 = l_59;
                  }
                  {
                    t = not_null(w_58);
                    {
                      ATerm o_59 = NULL;
                      t = p_0(t);
                      {
                        m_59 = t;
                        {
                          ATerm p_59 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(m_59)), not_null(k_59));
                          {
                            p_59 = t;
                            if(((o_59 != NULL) && (o_59 != p_59)))
                              _fail(p_59);
                            else
                              o_59 = p_59;
                          }
                          t = not_null(o_59);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(f_16);
                }
              else
                {
                  t = e_16;
                  {
                    ATerm s_59 = NULL,u_59 = NULL;
                    ATerm t_59 = NULL;
                    t = SSLgetAnnotations(not_null(v_58));
                    {
                      t_59 = t;
                      if(((s_59 != NULL) && (s_59 != t_59)))
                        _fail(t_59);
                      else
                        s_59 = t_59;
                    }
                    {
                      t = not_null(w_58);
                      {
                        ATerm d_62 = NULL;
                        t = p_0(t);
                        {
                          u_59 = t;
                          {
                            ATerm e_62 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(u_59)), not_null(s_59));
                            {
                              e_62 = t;
                              if(((d_62 != NULL) && (d_62 != e_62)))
                                _fail(e_62);
                              else
                                d_62 = e_62;
                            }
                            t = not_null(d_62);
                          }
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
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL;
  w_64 = t;
  u_64 :
  if(match_cons(w_64, sym_PrimT_3))
    {
      x_64 = ATgetArgument(w_64, 0);
      y_64 = ATgetArgument(w_64, 1);
      v_64 = ATgetArgument(w_64, 2);
      {
        ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL;
        ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL;
        t = not_null(v_64);
        {
          ATerm w_2 (ATerm t)
          {
            ATerm g_16 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = g_16;
              }
            return(t);
          }
          t = fetch_1(t, w_2);
          {
            t = not_null(v_64);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm x_2 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, x_2);
                {
                  f_65 = t;
                  p_64 :
                  if(match_cons(f_65, sym__2))
                    {
                      g_65 = ATgetArgument(f_65, 0);
                      h_65 = ATgetArgument(f_65, 1);
                      q_64 :
                      if(match_cons(h_65, sym__2))
                        {
                          i_65 = ATgetArgument(h_65, 0);
                          j_65 = ATgetArgument(h_65, 1);
                          {
                            if(((c_65 != NULL) && (c_65 != g_65)))
                              _fail(g_65);
                            else
                              c_65 = g_65;
                            {
                              if(((d_65 != NULL) && (d_65 != i_65)))
                                _fail(i_65);
                              else
                                d_65 = i_65;
                              if(((e_65 != NULL) && (e_65 != j_65)))
                                _fail(j_65);
                              else
                                e_65 = j_65;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_65), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(d_65)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(x_64), not_null(y_64), not_null(e_65))));
      }
    }
  else
    {
      if(match_cons(w_64, sym_Prim_2))
        {
          x_64 = ATgetArgument(w_64, 0);
          y_64 = ATgetArgument(w_64, 1);
          {
            ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL;
            ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL;
            t = not_null(y_64);
            {
              ATerm y_2 (ATerm t)
              {
                ATerm h_16 = t;
                if((PushChoice() == 0))
                  {
                    t = Var_1(t, _id);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_16;
                  }
                return(t);
              }
              t = fetch_1(t, y_2);
              {
                t = not_null(y_64);
                {
                  t = unzip_1(t, LiftPrimArg_0);
                  {
                    ATerm z_2 (ATerm t)
                    {
                      t = unzip_1(t, _id);
                      return(t);
                    }
                    t = _2(t, concat_0, z_2);
                    {
                      p_65 = t;
                      s_64 :
                      if(match_cons(p_65, sym__2))
                        {
                          q_65 = ATgetArgument(p_65, 0);
                          r_65 = ATgetArgument(p_65, 1);
                          t_64 :
                          if(match_cons(r_65, sym__2))
                            {
                              s_65 = ATgetArgument(r_65, 0);
                              t_65 = ATgetArgument(r_65, 1);
                              {
                                if(((m_65 != NULL) && (m_65 != q_65)))
                                  _fail(q_65);
                                else
                                  m_65 = q_65;
                                {
                                  if(((n_65 != NULL) && (n_65 != s_65)))
                                    _fail(s_65);
                                  else
                                    n_65 = s_65;
                                  if(((o_65 != NULL) && (o_65 != t_65)))
                                    _fail(t_65);
                                  else
                                    o_65 = t_65;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(m_65), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(n_65)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(x_64), (ATerm)ATempty, not_null(o_65))));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm z_120 (ATerm))
{
  ATerm y_65 (ATerm t)
  {
    ATerm a_3 (ATerm t)
    {
      t = z_120(t);
      t = y_65(t);
      return(t);
    }
    t = try_1(t, a_3);
    return(t);
  }
  t = y_65(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm d_66 = NULL;
  d_66 = t;
  c_66 :
  if(match_cons(d_66, sym_Wld_0))
    {
      ATerm f_66 = NULL,h_66 = NULL;
      ATerm l_16;
      l_16 = t;
      {
        ATerm g_66 = NULL;
        t = SSLgetAnnotations(not_null(d_66));
        {
          g_66 = t;
          if(((f_66 != NULL) && (f_66 != g_66)))
            _fail(g_66);
          else
            f_66 = g_66;
        }
      }
      t = l_16;
      {
        ATerm i_66 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(f_66));
        {
          i_66 = t;
          if(((h_66 != NULL) && (h_66 != i_66)))
            _fail(i_66);
          else
            h_66 = i_66;
        }
        t = not_null(h_66);
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
  ATerm n_16 = t;
  if((PushChoice() == 0))
    {
      ATerm b_3 (ATerm t)
      {
        ATerm p_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(r_16);
          }
        else
          {
            t = p_16;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, b_3);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_16;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm p_90 (ATerm), ATerm q_90 (ATerm))
{
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL;
  y_66 = t;
  x_66 :
  if(match_cons(y_66, sym_App_2))
    {
      z_66 = ATgetArgument(y_66, 0);
      a_67 = ATgetArgument(y_66, 1);
      {
        ATerm e_67 = NULL,g_67 = NULL;
        ATerm f_67 = NULL;
        t = SSLgetAnnotations(not_null(y_66));
        {
          f_67 = t;
          if(((e_67 != NULL) && (e_67 != f_67)))
            _fail(f_67);
          else
            e_67 = f_67;
        }
        {
          t = not_null(z_66);
          {
            ATerm i_67 = NULL;
            t = p_90(t);
            {
              g_67 = t;
              {
                t = not_null(a_67);
                {
                  ATerm k_67 = NULL;
                  t = q_90(t);
                  {
                    i_67 = t;
                    {
                      ATerm l_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(g_67), not_null(i_67)), not_null(e_67));
                      {
                        l_67 = t;
                        if(((k_67 != NULL) && (k_67 != l_67)))
                          _fail(l_67);
                        else
                          k_67 = l_67;
                      }
                      t = not_null(k_67);
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
ATerm Con_3 (ATerm t, ATerm b_91 (ATerm), ATerm c_91 (ATerm), ATerm d_91 (ATerm))
{
  ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL;
  y_67 = t;
  x_67 :
  if(match_cons(y_67, sym_Con_3))
    {
      z_67 = ATgetArgument(y_67, 0);
      a_68 = ATgetArgument(y_67, 1);
      b_68 = ATgetArgument(y_67, 2);
      {
        ATerm g_68 = NULL,i_68 = NULL;
        ATerm h_68 = NULL;
        t = SSLgetAnnotations(not_null(y_67));
        {
          h_68 = t;
          if(((g_68 != NULL) && (g_68 != h_68)))
            _fail(h_68);
          else
            g_68 = h_68;
        }
        {
          t = not_null(z_67);
          {
            ATerm k_68 = NULL;
            t = b_91(t);
            {
              i_68 = t;
              {
                t = not_null(a_68);
                {
                  ATerm m_68 = NULL;
                  t = c_91(t);
                  {
                    k_68 = t;
                    {
                      t = not_null(b_68);
                      {
                        ATerm o_68 = NULL;
                        t = d_91(t);
                        {
                          m_68 = t;
                          {
                            ATerm p_68 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(i_68), not_null(k_68), not_null(m_68)), not_null(g_68));
                            {
                              p_68 = t;
                              if(((o_68 != NULL) && (o_68 != p_68)))
                                _fail(p_68);
                              else
                                o_68 = p_68;
                            }
                            t = not_null(o_68);
                          }
                        }
                      }
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
  ATerm u_16 = t;
  if((PushChoice() == 0))
    {
      ATerm c_3 (ATerm t)
      {
        ATerm v_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(w_16);
          }
        else
          {
            t = v_16;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, c_3);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_16;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL;
  a_69 = t;
  y_68 :
  if(match_cons(a_69, sym_SRule_1))
    {
      b_69 = ATgetArgument(a_69, 0);
      z_68 :
      if(match_cons(b_69, sym_StratRule_3))
        {
          c_69 = ATgetArgument(b_69, 0);
          d_69 = ATgetArgument(b_69, 1);
          e_69 = ATgetArgument(b_69, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(d_69)), (ATerm) ATmakeAppl(sym_Where_1, not_null(e_69))), not_null(c_69)));
        }
      else
        {
          if(match_cons(b_69, sym_Rule_3))
            {
              c_69 = ATgetArgument(b_69, 0);
              d_69 = ATgetArgument(b_69, 1);
              e_69 = ATgetArgument(b_69, 2);
              {
                t = not_null(c_69);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(d_69);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(d_69))), (ATerm) ATmakeAppl(sym_Where_1, not_null(e_69))), (ATerm) ATmakeAppl(sym_Match_1, not_null(c_69))));
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
ATerm Scope_2 (ATerm t, ATerm v_93 (ATerm), ATerm w_93 (ATerm))
{
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL;
  c_70 = t;
  w_69 :
  if(match_cons(c_70, sym_Scope_2))
    {
      d_70 = ATgetArgument(c_70, 0);
      e_70 = ATgetArgument(c_70, 1);
      {
        ATerm i_70 = NULL,k_70 = NULL;
        ATerm j_70 = NULL;
        t = SSLgetAnnotations(not_null(c_70));
        {
          j_70 = t;
          if(((i_70 != NULL) && (i_70 != j_70)))
            _fail(j_70);
          else
            i_70 = j_70;
        }
        {
          t = not_null(d_70);
          {
            ATerm m_70 = NULL;
            t = v_93(t);
            {
              k_70 = t;
              {
                t = not_null(e_70);
                {
                  ATerm o_70 = NULL;
                  t = w_93(t);
                  {
                    m_70 = t;
                    {
                      ATerm p_70 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(k_70), not_null(m_70)), not_null(i_70));
                      {
                        p_70 = t;
                        if(((o_70 != NULL) && (o_70 != p_70)))
                          _fail(p_70);
                        else
                          o_70 = p_70;
                      }
                      t = not_null(o_70);
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
ATerm oncetd_1 (ATerm t, ATerm t_105 (ATerm))
{
  ATerm v_70 (ATerm t)
  {
    ATerm x_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_105(t);
        ;
        LocalPopChoice(y_16);
      }
    else
      {
        t = x_16;
        t = _one(t, v_70);
      }
    return(t);
  }
  t = v_70(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL;
  s_71 = t;
  q_71 :
  if(match_cons(s_71, sym_SRule_1))
    {
      t_71 = ATgetArgument(s_71, 0);
      r_71 :
      if(match_cons(t_71, sym_Rule_3))
        {
          u_71 = ATgetArgument(t_71, 0);
          v_71 = ATgetArgument(t_71, 1);
          w_71 = ATgetArgument(t_71, 2);
          {
            ATerm a_72 = NULL,b_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL;
            ATerm j_72 = NULL;
            ATerm p_72 = NULL;
            t = new_0(t);
            {
              j_72 = t;
              {
                if(((g_72 != NULL) && (g_72 != j_72)))
                  _fail(j_72);
                else
                  g_72 = j_72;
                {
                  t = not_null(u_71);
                  {
                    ATerm f_73 = NULL;
                    ATerm d_3 (ATerm t)
                    {
                      ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL;
                      k_72 = t;
                      z_70 :
                      if(match_cons(k_72, sym_Con_3))
                        {
                          l_72 = ATgetArgument(k_72, 0);
                          n_72 = ATgetArgument(k_72, 1);
                          o_72 = ATgetArgument(k_72, 2);
                          c_71 :
                          if(match_cons(l_72, sym_Var_1))
                            {
                              m_72 = ATgetArgument(l_72, 0);
                              {
                                if(((f_72 != NULL) && (f_72 != m_72)))
                                  _fail(m_72);
                                else
                                  f_72 = m_72;
                                {
                                  if(((d_72 != NULL) && (d_72 != n_72)))
                                    _fail(n_72);
                                  else
                                    d_72 = n_72;
                                  {
                                    if(((a_72 != NULL) && (a_72 != o_72)))
                                      _fail(o_72);
                                    else
                                      a_72 = o_72;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_72));
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
                    t = oncetd_1(t, d_3);
                    {
                      p_72 = t;
                      {
                        if(((h_72 != NULL) && (h_72 != p_72)))
                          _fail(p_72);
                        else
                          h_72 = p_72;
                        {
                          t = not_null(v_71);
                          {
                            ATerm e_3 (ATerm t)
                            {
                              ATerm q_72 = NULL,r_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL;
                              q_72 = t;
                              f_71 :
                              if(match_cons(q_72, sym_Con_3))
                                {
                                  r_72 = ATgetArgument(q_72, 0);
                                  z_72 = ATgetArgument(q_72, 1);
                                  a_73 = ATgetArgument(q_72, 2);
                                  g_71 :
                                  if(match_cons(r_72, sym_Var_1))
                                    {
                                      y_72 = ATgetArgument(r_72, 0);
                                      h_71 :
                                      if(match_cons(a_73, sym_CallT_3))
                                        {
                                          c_73 = ATgetArgument(a_73, 0);
                                          d_73 = ATgetArgument(a_73, 1);
                                          e_73 = ATgetArgument(a_73, 2);
                                          i_71 :
                                          if(((ATgetType(d_73) == AT_LIST) && ATisEmpty(d_73)))
                                            {
                                              o_71 :
                                              if(((ATgetType(e_73) == AT_LIST) && ATisEmpty(e_73)))
                                                {
                                                  {
                                                    if(((f_72 != NULL) && (f_72 != y_72)))
                                                      _fail(y_72);
                                                    else
                                                      f_72 = y_72;
                                                    {
                                                      if(((e_72 != NULL) && (e_72 != z_72)))
                                                        _fail(z_72);
                                                      else
                                                        e_72 = z_72;
                                                      {
                                                        if(((b_72 != NULL) && (b_72 != c_73)))
                                                          _fail(c_73);
                                                        else
                                                          b_72 = c_73;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_72));
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
                            t = oncetd_1(t, e_3);
                            {
                              f_73 = t;
                              if(((i_72 != NULL) && (i_72 != f_73)))
                                _fail(f_73);
                              else
                                i_72 = f_73;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(h_72), not_null(i_72), (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_71), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(b_72), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_72), not_null(e_72), term_p_15))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_72)), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_72)))))));
          }
        }
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
  ATerm f_3 (ATerm t)
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        ;
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
        {
          ATerm b_17 = t;
          int c_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              ;
              LocalPopChoice(c_17);
            }
          else
            {
              t = b_17;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, f_3);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm p_104 (ATerm))
{
  t = p_104(t);
  {
    ATerm g_3 (ATerm t)
    {
      t = topdown_1(t, p_104);
      return(t);
    }
    t = _all(t, g_3);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm i_3 (ATerm t)
      {
        ATerm d_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            ;
            LocalPopChoice(e_17);
          }
        else
          {
            t = d_17;
            {
              ATerm f_17 = t;
              int g_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(g_17);
                }
              else
                {
                  t = f_17;
                  {
                    ATerm m_17 = t;
                    int n_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
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
                              t = Mapp_0(t);
                              ;
                              LocalPopChoice(p_17);
                            }
                          else
                            {
                              t = o_17;
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
      t = repeat_1(t, i_3);
    }
    return(t);
  }
  t = topdown_1(t, h_3);
  return(t);
}
ATerm _0 (ATerm t)
{
  ATerm r_73 = NULL;
  r_73 = t;
  q_73 :
  if(match_cons(r_73, sym__0))
    {
      ATerm t_73 = NULL,v_73 = NULL;
      ATerm t_17;
      t_17 = t;
      {
        ATerm u_73 = NULL;
        t = SSLgetAnnotations(not_null(r_73));
        {
          u_73 = t;
          if(((t_73 != NULL) && (t_73 != u_73)))
            _fail(u_73);
          else
            t_73 = u_73;
        }
      }
      t = t_17;
      {
        ATerm w_73 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(t_73));
        {
          w_73 = t;
          if(((v_73 != NULL) && (v_73 != w_73)))
            _fail(w_73);
          else
            v_73 = w_73;
        }
        t = not_null(v_73);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm i_74 = NULL;
  ATerm k_74 = NULL,l_74 = NULL,t_74 = NULL,v_74 = NULL;
  i_74 = t;
  {
    ATerm v_17;
    v_17 = t;
    {
      ATerm m_74 = NULL;
      ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL;
      t = not_null(i_74);
      {
        m_74 = t;
        {
          t = SSL_explode_term(not_null(m_74));
          {
            o_74 = t;
            d_74 :
            if(match_cons(o_74, sym__2))
              {
                p_74 = ATgetArgument(o_74, 0);
                q_74 = ATgetArgument(o_74, 1);
                e_74 :
                if(match_string(p_74, ""))
                  {
                    f_74 :
                    if(((ATgetType(q_74) == AT_LIST) && !(ATisEmpty(q_74))))
                      {
                        r_74 = ATgetFirst((ATermList) q_74);
                        s_74 = (ATerm) ATgetNext((ATermList) q_74);
                        {
                          if(((k_74 != NULL) && (k_74 != r_74)))
                            _fail(r_74);
                          else
                            k_74 = r_74;
                          if(((l_74 != NULL) && (l_74 != s_74)))
                            _fail(s_74);
                          else
                            l_74 = s_74;
                        }
                      }
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
    t = v_17;
    {
      ATerm x_17;
      x_17 = t;
      {
        ATerm u_74 = NULL;
        t = term_b_12;
        {
          u_74 = t;
          if(((t_74 != NULL) && (t_74 != u_74)))
            _fail(u_74);
          else
            t_74 = u_74;
        }
      }
      t = x_17;
      {
        t = SSL_mkterm(not_null(t_74), not_null(l_74));
        {
          v_74 = t;
          t = not_null(v_74);
        }
      }
    }
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm r_108 (ATerm))
{
  ATerm q_75 = NULL,s_75 = NULL,u_75 = NULL;
  ATerm a_76 (ATerm t)
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_75 = NULL,o_75 = NULL;
        ATerm c_18;
        c_18 = t;
        {
          ATerm n_75 = NULL;
          t = map_1(t, Thd_0);
          {
            t = r_108(t);
            {
              n_75 = t;
              if(((h_75 != NULL) && (h_75 != n_75)))
                _fail(n_75);
              else
                h_75 = n_75;
            }
          }
        }
        t = c_18;
        {
          ATerm p_75 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = a_76(t);
            {
              p_75 = t;
              if(((o_75 != NULL) && (o_75 != p_75)))
                _fail(p_75);
              else
                o_75 = p_75;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(o_75)), not_null(h_75));
        }
        ;
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = a_76(t);
  {
    ATerm d_18;
    d_18 = t;
    {
      ATerm r_75 = NULL;
      r_75 = t;
      if(((q_75 != NULL) && (q_75 != r_75)))
        _fail(r_75);
      else
        q_75 = r_75;
    }
    t = d_18;
    {
      ATerm e_18;
      e_18 = t;
      {
        ATerm t_75 = NULL;
        t = term_b_12;
        {
          t_75 = t;
          if(((s_75 != NULL) && (s_75 != t_75)))
            _fail(t_75);
          else
            s_75 = t_75;
        }
      }
      t = e_18;
      {
        t = SSL_mkterm(not_null(s_75), not_null(q_75));
        {
          u_75 = t;
          t = not_null(u_75);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm o_76 = NULL;
  o_76 = t;
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL;
        ATerm t_76 = NULL;
        ATerm e_77 = NULL;
        t = new_0(t);
        {
          t_76 = t;
          {
            if(((q_76 != NULL) && (q_76 != t_76)))
              _fail(t_76);
            else
              q_76 = t_76;
            {
              ATerm f_77 = NULL;
              t = new_0(t);
              {
                e_77 = t;
                {
                  if(((r_76 != NULL) && (r_76 != e_77)))
                    _fail(e_77);
                  else
                    r_76 = e_77;
                  {
                    t = new_0(t);
                    {
                      f_77 = t;
                      if(((s_76 != NULL) && (s_76 != f_77)))
                        _fail(f_77);
                      else
                        s_76 = f_77;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_76)), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_b_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_76)), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_76)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_76))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(q_76), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_15), term_m_15)), not_null(r_76), (ATerm)ATmakeAppl(sym_Var_1, not_null(r_76)), not_null(s_76), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_76)));
        ;
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        {
          ATerm h_77 = NULL,i_77 = NULL,j_77 = NULL;
          ATerm k_77 = NULL;
          ATerm o_77 = NULL;
          t = new_0(t);
          {
            k_77 = t;
            {
              if(((h_77 != NULL) && (h_77 != k_77)))
                _fail(k_77);
              else
                h_77 = k_77;
              {
                ATerm p_77 = NULL;
                t = new_0(t);
                {
                  o_77 = t;
                  {
                    if(((i_77 != NULL) && (i_77 != o_77)))
                      _fail(o_77);
                    else
                      i_77 = o_77;
                    {
                      t = new_0(t);
                      {
                        p_77 = t;
                        if(((j_77 != NULL) && (j_77 != p_77)))
                          _fail(p_77);
                        else
                          j_77 = p_77;
                      }
                    }
                  }
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_77)), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_b_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_76)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_77)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_77))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(h_77), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_15), term_m_15)), not_null(i_77), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_77)), not_null(j_77), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_77)));
        }
      }
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm f_79 = NULL,g_79 = NULL,h_79 = NULL;
  f_79 = t;
  e_79 :
  if(match_cons(f_79, sym__2))
    {
      g_79 = ATgetArgument(f_79, 0);
      h_79 = ATgetArgument(f_79, 1);
      {
        ATerm h_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(g_79), not_null(h_79));
            ;
            LocalPopChoice(i_18);
          }
        else
          {
            t = h_18;
            t = SSL_subtr(not_null(g_79), not_null(h_79));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm t_115 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm r_80 = NULL,s_80 = NULL,t_80 = NULL;
    r_80 = t;
    m_79 :
    if(match_cons(r_80, sym__2))
      {
        s_80 = ATgetArgument(r_80, 0);
        t_80 = ATgetArgument(r_80, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(s_80), not_null(t_80), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL;
    w_80 = t;
    o_79 :
    if(match_cons(w_80, sym__3))
      {
        x_80 = ATgetArgument(w_80, 0);
        y_80 = ATgetArgument(w_80, 1);
        z_80 = ATgetArgument(w_80, 2);
        p_79 :
        if(match_int(x_80, 0))
          {
            t = not_null(z_80);
          }
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
  ATerm l_3 (ATerm t)
  {
    ATerm w_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL;
    w_84 = t;
    q_80 :
    if(match_cons(w_84, sym__3))
      {
        x_84 = ATgetArgument(w_84, 0);
        y_84 = ATgetArgument(w_84, 1);
        z_84 = ATgetArgument(w_84, 2);
        {
          ATerm d_85 = NULL,f_85 = NULL;
          ATerm j_18;
          j_18 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_84), term_w_8);
            t = geq_0(t);
          }
          t = j_18;
          {
            ATerm k_18;
            k_18 = t;
            {
              ATerm e_85 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_84), term_w_8);
              {
                t = subt_0(t);
                {
                  e_85 = t;
                  if(((d_85 != NULL) && (d_85 != e_85)))
                    _fail(e_85);
                  else
                    d_85 = e_85;
                }
              }
            }
            t = k_18;
            {
              ATerm g_85 = NULL;
              t = not_null(y_84);
              {
                t = t_115(t);
                {
                  g_85 = t;
                  if(((f_85 != NULL) && (f_85 != g_85)))
                    _fail(g_85);
                  else
                    f_85 = g_85;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(d_85), not_null(y_84), (ATerm) ATinsert(CheckATermList(not_null(z_84)), not_null(f_85)));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, j_3, k_3, l_3);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL;
  r_85 = t;
  q_85 :
  if(match_cons(r_85, sym__2))
    {
      s_85 = ATgetArgument(r_85, 0);
      t_85 = ATgetArgument(r_85, 1);
      {
        ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL;
        ATerm z_85 = NULL;
        ATerm a_86 = NULL;
        t = new_0(t);
        {
          z_85 = t;
          {
            if(((w_85 != NULL) && (w_85 != z_85)))
              _fail(z_85);
            else
              w_85 = z_85;
            {
              ATerm b_86 = NULL;
              t = new_0(t);
              {
                a_86 = t;
                {
                  if(((x_85 != NULL) && (x_85 != a_86)))
                    _fail(a_86);
                  else
                    x_85 = a_86;
                  {
                    t = new_0(t);
                    {
                      b_86 = t;
                      if(((y_85 != NULL) && (y_85 != b_86)))
                        _fail(b_86);
                      else
                        y_85 = b_86;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_85)), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_b_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_85))), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_85)))), (ATerm) ATmakeAppl(sym_Op_2, term_b_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_85))), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_85))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(w_85), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_15), term_m_15)), not_null(x_85), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_85)), not_null(y_85), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_85)));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm j_86 = NULL,k_86 = NULL,l_86 = NULL;
  j_86 = t;
  h_86 :
  if(match_cons(j_86, sym__2))
    {
      k_86 = ATgetArgument(j_86, 0);
      l_86 = ATgetArgument(j_86, 1);
      i_86 :
      if(((ATgetType(l_86) == AT_LIST) && ATisEmpty(l_86)))
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
  return(t);
}
ATerm zipr_1 (ATerm t, ATerm j_109 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, j_109);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm p_86 = NULL,q_86 = NULL,r_86 = NULL;
  p_86 = t;
  o_86 :
  if(((ATgetType(p_86) == AT_LIST) && !(ATisEmpty(p_86))))
    {
      q_86 = ATgetFirst((ATermList) p_86);
      r_86 = (ATerm) ATgetNext((ATermList) p_86);
      t = not_null(r_86);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm x_86 = NULL,y_86 = NULL,z_86 = NULL;
  x_86 = t;
  v_86 :
  if(((ATgetType(x_86) == AT_LIST) && !(ATisEmpty(x_86))))
    {
      y_86 = ATgetFirst((ATermList) x_86);
      z_86 = (ATerm) ATgetNext((ATermList) x_86);
      w_86 :
      if(((ATgetType(z_86) == AT_LIST) && ATisEmpty(z_86)))
        {
          t = not_null(y_86);
        }
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
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm k_88 = NULL,l_88 = NULL,m_88 = NULL,n_88 = NULL,o_88 = NULL,p_88 = NULL;
  ATerm g_91 (ATerm t)
  {
    ATerm t_88 = NULL,u_88 = NULL,v_88 = NULL,w_88 = NULL,x_88 = NULL,a_89 = NULL,b_89 = NULL,e_89 = NULL,f_89 = NULL,u_89 = NULL;
    ATerm r_18;
    r_18 = t;
    {
      ATerm g_89 = NULL,j_89 = NULL,k_89 = NULL,l_89 = NULL;
      ATerm i_89 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_88), term_w_8);
      {
        t = add_0(t);
        {
          i_89 = t;
          if(((g_89 != NULL) && (g_89 != i_89)))
            _fail(i_89);
          else
            g_89 = i_89;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_89), term_v_18);
        {
          t = copy_1(t, new_0);
          {
            j_89 = t;
            y_87 :
            if(((ATgetType(j_89) == AT_LIST) && !(ATisEmpty(j_89))))
              {
                k_89 = ATgetFirst((ATermList) j_89);
                l_89 = (ATerm) ATgetNext((ATermList) j_89);
                {
                  ATerm m_89 = NULL;
                  if(((u_88 != NULL) && (u_88 != k_89)))
                    _fail(k_89);
                  else
                    u_88 = k_89;
                  {
                    if(((v_88 != NULL) && (v_88 != l_89)))
                      _fail(l_89);
                    else
                      v_88 = l_89;
                    {
                      t = not_null(v_88);
                      {
                        ATerm n_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL,r_89 = NULL,s_89 = NULL,t_89 = NULL;
                        t = last_0(t);
                        {
                          m_89 = t;
                          {
                            if(((t_88 != NULL) && (t_88 != m_89)))
                              _fail(m_89);
                            else
                              t_88 = m_89;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_88)), not_null(u_88)), not_null(v_88));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    n_89 = t;
                                    x_87 :
                                    if(match_cons(n_89, sym__6))
                                      {
                                        o_89 = ATgetArgument(n_89, 0);
                                        p_89 = ATgetArgument(n_89, 1);
                                        q_89 = ATgetArgument(n_89, 2);
                                        r_89 = ATgetArgument(n_89, 3);
                                        s_89 = ATgetArgument(n_89, 4);
                                        t_89 = ATgetArgument(n_89, 5);
                                        {
                                          if(((w_88 != NULL) && (w_88 != o_89)))
                                            _fail(o_89);
                                          else
                                            w_88 = o_89;
                                          {
                                            if(((x_88 != NULL) && (x_88 != p_89)))
                                              _fail(p_89);
                                            else
                                              x_88 = p_89;
                                            {
                                              if(((a_89 != NULL) && (a_89 != q_89)))
                                                _fail(q_89);
                                              else
                                                a_89 = q_89;
                                              {
                                                if(((b_89 != NULL) && (b_89 != r_89)))
                                                  _fail(r_89);
                                                else
                                                  b_89 = r_89;
                                                {
                                                  if(((e_89 != NULL) && (e_89 != s_89)))
                                                    _fail(s_89);
                                                  else
                                                    e_89 = s_89;
                                                  if(((f_89 != NULL) && (f_89 != t_89)))
                                                    _fail(t_89);
                                                  else
                                                    f_89 = t_89;
                                                }
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
                        }
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
    t = r_18;
    {
      ATerm v_89 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_89)), not_null(a_89)), not_null(v_88));
      {
        t = concat_0(t);
        {
          v_89 = t;
          if(((u_89 != NULL) && (u_89 != v_89)))
            _fail(v_89);
          else
            u_89 = v_89;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, not_null(l_88), term_x_18), not_null(x_88), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(u_89)), not_null(u_88)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_b_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_88))), (ATerm) ATmakeAppl(sym_Op_2, not_null(l_88), not_null(b_89)))), (ATerm)ATmakeAppl(sym_Op_2, term_b_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_88))), (ATerm) ATmakeAppl(sym_Op_2, not_null(l_88), not_null(f_89)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(w_88))))));
    }
    return(t);
  }
  ATerm h_91 (ATerm t)
  {
    ATerm y_89 = NULL;
    ATerm a_90 = NULL;
    t = new_0(t);
    {
      a_90 = t;
      if(((y_89 != NULL) && (y_89 != a_90)))
        _fail(a_90);
      else
        y_89 = a_90;
    }
    t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, not_null(l_88), term_x_18), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_89)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_b_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_89))), (ATerm) ATmakeAppl(sym_Op_2, not_null(l_88), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_b_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_89))), (ATerm) ATmakeAppl(sym_Op_2, not_null(l_88), (ATerm) ATempty))), term_p_15))));
    return(t);
  }
  ATerm i_91 (ATerm t)
  {
    ATerm e_90 = NULL,f_90 = NULL,g_90 = NULL,j_90 = NULL,k_90 = NULL,n_90 = NULL,o_90 = NULL,e_91 = NULL;
    ATerm a_19;
    a_19 = t;
    {
      ATerm r_90 = NULL;
      ATerm u_90 = NULL,v_90 = NULL,w_90 = NULL,x_90 = NULL,y_90 = NULL,z_90 = NULL,a_91 = NULL;
      t = new_0(t);
      {
        r_90 = t;
        {
          if(((e_90 != NULL) && (e_90 != r_90)))
            _fail(r_90);
          else
            e_90 = r_90;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_88), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_90)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  u_90 = t;
                  d_88 :
                  if(match_cons(u_90, sym__6))
                    {
                      v_90 = ATgetArgument(u_90, 0);
                      w_90 = ATgetArgument(u_90, 1);
                      x_90 = ATgetArgument(u_90, 2);
                      y_90 = ATgetArgument(u_90, 3);
                      z_90 = ATgetArgument(u_90, 4);
                      a_91 = ATgetArgument(u_90, 5);
                      {
                        if(((f_90 != NULL) && (f_90 != v_90)))
                          _fail(v_90);
                        else
                          f_90 = v_90;
                        {
                          if(((g_90 != NULL) && (g_90 != w_90)))
                            _fail(w_90);
                          else
                            g_90 = w_90;
                          {
                            if(((j_90 != NULL) && (j_90 != x_90)))
                              _fail(x_90);
                            else
                              j_90 = x_90;
                            {
                              if(((k_90 != NULL) && (k_90 != y_90)))
                                _fail(y_90);
                              else
                                k_90 = y_90;
                              {
                                if(((n_90 != NULL) && (n_90 != z_90)))
                                  _fail(z_90);
                                else
                                  n_90 = z_90;
                                if(((o_90 != NULL) && (o_90 != a_91)))
                                  _fail(a_91);
                                else
                                  o_90 = a_91;
                              }
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
      }
    }
    t = a_19;
    {
      ATerm f_91 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_90), not_null(n_90));
      {
        t = conc_0(t);
        {
          f_91 = t;
          if(((e_91 != NULL) && (e_91 != f_91)))
            _fail(f_91);
          else
            e_91 = f_91;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, not_null(l_88), term_b_19), not_null(g_90), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(e_91)), not_null(e_90)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_b_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_90))), (ATerm) ATmakeAppl(sym_Op_2, not_null(l_88), not_null(k_90)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(l_88), not_null(o_90)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(f_90))))));
    }
    return(t);
  }
  k_88 = t;
  f_88 :
  if(match_cons(k_88, sym__3))
    {
      l_88 = ATgetArgument(k_88, 0);
      m_88 = ATgetArgument(k_88, 1);
      n_88 = ATgetArgument(k_88, 2);
      g_88 :
      if(match_string(m_88, "T"))
        {
          h_88 :
          if(match_cons(n_88, sym__2))
            {
              o_88 = ATgetArgument(n_88, 0);
              p_88 = ATgetArgument(n_88, 1);
              i_88 :
              if(match_int(o_88, 0))
                {
                  ATerm c_19 = t;
                  int d_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = g_91(t);
                      ;
                      LocalPopChoice(d_19);
                    }
                  else
                    {
                      t = c_19;
                      t = h_91(t);
                    }
                }
              else
                {
                  t = g_91(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_string(m_88, "D"))
            {
              j_88 :
              if(match_cons(n_88, sym__2))
                {
                  o_88 = ATgetArgument(n_88, 0);
                  p_88 = ATgetArgument(n_88, 1);
                  t = i_91(t);
                }
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CongruenceDef_0 (ATerm t)
{
  ATerm x_91 = NULL,y_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL,c_92 = NULL,d_92 = NULL;
  x_91 = t;
  u_91 :
  if(match_cons(x_91, sym__2))
    {
      y_91 = ATgetArgument(x_91, 0);
      d_92 = ATgetArgument(x_91, 1);
      v_91 :
      if(match_cons(y_91, sym__2))
        {
          z_91 = ATgetArgument(y_91, 0);
          c_92 = ATgetArgument(y_91, 1);
          w_91 :
          if(match_cons(z_91, sym_Mod_2))
            {
              a_92 = ATgetArgument(z_91, 0);
              b_92 = ATgetArgument(z_91, 1);
              {
                ATerm i_92 = NULL;
                ATerm j_92 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(a_92), not_null(b_92), not_null(c_92));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      j_92 = t;
                      if(((i_92 != NULL) && (i_92 != j_92)))
                        _fail(j_92);
                      else
                        i_92 = j_92;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_92), not_null(d_92));
              }
            }
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
ATerm get_definition_0 (ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      ;
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm p_92 = NULL,q_92 = NULL,r_92 = NULL,s_92 = NULL,t_92 = NULL,u_92 = NULL,v_92 = NULL,w_92 = NULL;
  p_92 = t;
  n_92 :
  if(match_cons(p_92, sym__5))
    {
      q_92 = ATgetArgument(p_92, 0);
      t_92 = ATgetArgument(p_92, 1);
      u_92 = ATgetArgument(p_92, 2);
      v_92 = ATgetArgument(p_92, 3);
      w_92 = ATgetArgument(p_92, 4);
      o_92 :
      if(((ATgetType(q_92) == AT_LIST) && !(ATisEmpty(q_92))))
        {
          r_92 = ATgetFirst((ATermList) q_92);
          s_92 = (ATerm) ATgetNext((ATermList) q_92);
          t = (ATerm) ATmakeAppl(sym__5, not_null(s_92), not_null(t_92), not_null(u_92), not_null(v_92), (ATerm) ATinsert(CheckATermList(not_null(w_92)), not_null(r_92)));
        }
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
ATerm diff_1 (ATerm t, ATerm n_112 (ATerm))
{
  ATerm g_93 = NULL,h_93 = NULL,i_93 = NULL;
  g_93 = t;
  f_93 :
  if(match_cons(g_93, sym__2))
    {
      h_93 = ATgetArgument(g_93, 0);
      i_93 = ATgetArgument(g_93, 1);
      {
        t = not_null(h_93);
        {
          ATerm o_93 (ATerm t)
          {
            ATerm m_19 = t;
            int n_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(n_19);
              }
            else
              {
                t = m_19;
                {
                  ATerm o_19 = t;
                  int p_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_3 (ATerm t)
                      {
                        t = not_null(i_93);
                        return(t);
                      }
                      t = HdMember_p__2(t, n_112, m_3);
                      t = o_93(t);
                      ;
                      LocalPopChoice(p_19);
                    }
                  else
                    {
                      t = o_19;
                      t = Cons_2(t, _id, o_93);
                    }
                }
              }
            return(t);
          }
          t = o_93(t);
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
  ATerm s_93 = NULL,t_93 = NULL,u_93 = NULL,x_93 = NULL,y_93 = NULL;
  s_93 = t;
  q_93 :
  if(match_cons(s_93, sym__2))
    {
      t_93 = ATgetArgument(s_93, 0);
      u_93 = ATgetArgument(s_93, 1);
      r_93 :
      if(((ATgetType(u_93) == AT_LIST) && !(ATisEmpty(u_93))))
        {
          x_93 = ATgetFirst((ATermList) u_93);
          y_93 = (ATerm) ATgetNext((ATermList) u_93);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_93)), not_null(x_93)), not_null(y_93));
        }
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
  ATerm f_94 = NULL,g_94 = NULL,h_94 = NULL;
  f_94 = t;
  e_94 :
  if(match_cons(f_94, sym__2))
    {
      g_94 = ATgetArgument(f_94, 0);
      h_94 = ATgetArgument(f_94, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_94)), not_null(g_94));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL,y_94 = NULL,z_94 = NULL,a_95 = NULL;
  u_94 = t;
  o_94 :
  if(match_cons(u_94, sym__2))
    {
      v_94 = ATgetArgument(u_94, 0);
      y_94 = ATgetArgument(u_94, 1);
      p_94 :
      if(((ATgetType(v_94) == AT_LIST) && !(ATisEmpty(v_94))))
        {
          w_94 = ATgetFirst((ATermList) v_94);
          x_94 = (ATerm) ATgetNext((ATermList) v_94);
          q_94 :
          if(((ATgetType(y_94) == AT_LIST) && !(ATisEmpty(y_94))))
            {
              z_94 = ATgetFirst((ATermList) y_94);
              a_95 = (ATerm) ATgetNext((ATermList) y_94);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(w_94), not_null(z_94)), (ATerm) ATmakeAppl(sym__2, not_null(x_94), not_null(a_95)));
            }
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
  ATerm k_95 = NULL,l_95 = NULL,m_95 = NULL;
  k_95 = t;
  h_95 :
  if(match_cons(k_95, sym__2))
    {
      l_95 = ATgetArgument(k_95, 0);
      m_95 = ATgetArgument(k_95, 1);
      i_95 :
      if(((ATgetType(l_95) == AT_LIST) && ATisEmpty(l_95)))
        {
          j_95 :
          if(((ATgetType(m_95) == AT_LIST) && ATisEmpty(m_95)))
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
ATerm genzip_4 (ATerm t, ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm e_109 (ATerm))
{
  ATerm o_95 (ATerm t)
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_109(t);
        ;
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        {
          t = c_109(t);
          {
            t = _2(t, e_109, o_95);
            t = d_109(t);
          }
        }
      }
    return(t);
  }
  t = o_95(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm g_109 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, g_109);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm i_96 = NULL,j_96 = NULL,k_96 = NULL,l_96 = NULL,m_96 = NULL;
  i_96 = t;
  z_95 :
  if(((ATgetType(i_96) == AT_LIST) && !(ATisEmpty(i_96))))
    {
      j_96 = ATgetFirst((ATermList) i_96);
      m_96 = (ATerm) ATgetNext((ATermList) i_96);
      h_96 :
      if(match_cons(j_96, sym__2))
        {
          k_96 = ATgetArgument(j_96, 0);
          l_96 = ATgetArgument(j_96, 1);
          {
            ATerm q_96 = NULL,r_96 = NULL,x_96 = NULL,d_97 = NULL;
            ATerm y_19;
            y_19 = t;
            {
              ATerm s_96 = NULL;
              ATerm u_96 = NULL,v_96 = NULL,w_96 = NULL;
              t = not_null(l_96);
              {
                s_96 = t;
                {
                  t = SSL_explode_term(not_null(s_96));
                  {
                    u_96 = t;
                    s_95 :
                    if(match_cons(u_96, sym__2))
                      {
                        v_96 = ATgetArgument(u_96, 0);
                        w_96 = ATgetArgument(u_96, 1);
                        {
                          if(((q_96 != NULL) && (q_96 != v_96)))
                            _fail(v_96);
                          else
                            q_96 = v_96;
                          if(((r_96 != NULL) && (r_96 != w_96)))
                            _fail(w_96);
                          else
                            r_96 = w_96;
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
            t = y_19;
            {
              ATerm z_19;
              z_19 = t;
              {
                ATerm y_96 = NULL;
                ATerm a_97 = NULL,b_97 = NULL,c_97 = NULL;
                t = not_null(k_96);
                {
                  y_96 = t;
                  {
                    t = SSL_explode_term(not_null(y_96));
                    {
                      a_97 = t;
                      v_95 :
                      if(match_cons(a_97, sym__2))
                        {
                          b_97 = ATgetArgument(a_97, 0);
                          c_97 = ATgetArgument(a_97, 1);
                          {
                            if(((q_96 != NULL) && (q_96 != b_97)))
                              _fail(b_97);
                            else
                              q_96 = b_97;
                            if(((x_96 != NULL) && (x_96 != c_97)))
                              _fail(c_97);
                            else
                              x_96 = c_97;
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
              t = z_19;
              {
                ATerm e_97 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_96), not_null(r_96));
                {
                  t = zip_1(t, _id);
                  {
                    e_97 = t;
                    if(((d_97 != NULL) && (d_97 != e_97)))
                      _fail(e_97);
                    else
                      d_97 = e_97;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_97), not_null(m_96));
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
  ATerm o_97 = NULL,p_97 = NULL,q_97 = NULL,r_97 = NULL,s_97 = NULL;
  o_97 = t;
  m_97 :
  if(((ATgetType(o_97) == AT_LIST) && !(ATisEmpty(o_97))))
    {
      p_97 = ATgetFirst((ATermList) o_97);
      s_97 = (ATerm) ATgetNext((ATermList) o_97);
      n_97 :
      if(match_cons(p_97, sym__2))
        {
          q_97 = ATgetArgument(p_97, 0);
          r_97 = ATgetArgument(p_97, 1);
          {
            ATerm u_97 = NULL;
            if(((q_97 != NULL) && (q_97 != r_97)))
              _fail(r_97);
            else
              q_97 = r_97;
            {
              if(((u_97 != NULL) && (u_97 != s_97)))
                _fail(s_97);
              else
                u_97 = s_97;
              t = not_null(u_97);
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
ATerm diff_0 (ATerm t)
{
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_3 (ATerm t)
      {
        ATerm x_97 = NULL;
        x_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(x_97));
        return(t);
      }
      ATerm o_3 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm p_3 (ATerm t)
      {
        ATerm c_20 = t;
        int d_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_3 (ATerm t)
            {
              ATerm i_20 = t;
              int j_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(j_20);
                }
              else
                {
                  t = i_20;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, q_3);
            ;
            LocalPopChoice(d_20);
          }
        else
          {
            t = c_20;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, n_3, o_3, p_3);
      ;
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm n_133 (ATerm), ATerm o_133 (ATerm), ATerm p_133 (ATerm))
{
  ATerm k_98 = NULL,l_98 = NULL,m_98 = NULL,n_98 = NULL,o_98 = NULL,p_98 = NULL,q_98 = NULL,r_98 = NULL;
  k_98 = t;
  i_98 :
  if(match_cons(k_98, sym__5))
    {
      l_98 = ATgetArgument(k_98, 0);
      o_98 = ATgetArgument(k_98, 1);
      p_98 = ATgetArgument(k_98, 2);
      q_98 = ATgetArgument(k_98, 3);
      r_98 = ATgetArgument(k_98, 4);
      j_98 :
      if(((ATgetType(l_98) == AT_LIST) && !(ATisEmpty(l_98))))
        {
          m_98 = ATgetFirst((ATermList) l_98);
          n_98 = (ATerm) ATgetNext((ATermList) l_98);
          {
            ATerm y_98 = NULL,z_98 = NULL,a_99 = NULL,b_99 = NULL,h_99 = NULL,j_99 = NULL,l_99 = NULL;
            ATerm k_20;
            k_20 = t;
            {
              ATerm c_99 = NULL,d_99 = NULL,e_99 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_98), not_null(p_98));
              {
                t = n_133(t);
                {
                  c_99 = t;
                  e_98 :
                  if(match_cons(c_99, sym__2))
                    {
                      d_99 = ATgetArgument(c_99, 0);
                      e_99 = ATgetArgument(c_99, 1);
                      {
                        ATerm f_99 = NULL;
                        if(((z_98 != NULL) && (z_98 != d_99)))
                          _fail(d_99);
                        else
                          z_98 = d_99;
                        {
                          if(((y_98 != NULL) && (y_98 != e_99)))
                            _fail(e_99);
                          else
                            y_98 = e_99;
                          {
                            t = not_null(z_98);
                            {
                              ATerm g_99 = NULL;
                              t = o_133(t);
                              {
                                f_99 = t;
                                {
                                  if(((a_99 != NULL) && (a_99 != f_99)))
                                    _fail(f_99);
                                  else
                                    a_99 = f_99;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_99), not_null(o_98));
                                    {
                                      t = diff_0(t);
                                      {
                                        g_99 = t;
                                        if(((b_99 != NULL) && (b_99 != g_99)))
                                          _fail(g_99);
                                        else
                                          b_99 = g_99;
                                      }
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
              }
            }
            t = k_20;
            {
              ATerm l_20;
              l_20 = t;
              {
                ATerm i_99 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_99), not_null(n_98));
                {
                  t = conc_0(t);
                  {
                    i_99 = t;
                    if(((h_99 != NULL) && (h_99 != i_99)))
                      _fail(i_99);
                    else
                      h_99 = i_99;
                  }
                }
              }
              t = l_20;
              {
                ATerm m_20;
                m_20 = t;
                {
                  ATerm k_99 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_99), not_null(o_98));
                  {
                    t = conc_0(t);
                    {
                      k_99 = t;
                      if(((j_99 != NULL) && (j_99 != k_99)))
                        _fail(k_99);
                      else
                        j_99 = k_99;
                    }
                  }
                }
                t = m_20;
                {
                  ATerm m_99 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(m_98), not_null(z_98), not_null(q_98));
                  {
                    t = p_133(t);
                    {
                      m_99 = t;
                      if(((l_99 != NULL) && (l_99 != m_99)))
                        _fail(m_99);
                      else
                        l_99 = m_99;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(h_99), not_null(j_99), not_null(y_98), not_null(l_99), not_null(r_98));
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
ATerm GnExit_0 (ATerm t)
{
  ATerm x_99 = NULL,y_99 = NULL,z_99 = NULL,a_100 = NULL,b_100 = NULL,c_100 = NULL;
  x_99 = t;
  v_99 :
  if(match_cons(x_99, sym__5))
    {
      y_99 = ATgetArgument(x_99, 0);
      z_99 = ATgetArgument(x_99, 1);
      a_100 = ATgetArgument(x_99, 2);
      b_100 = ATgetArgument(x_99, 3);
      c_100 = ATgetArgument(x_99, 4);
      w_99 :
      if(((ATgetType(y_99) == AT_LIST) && ATisEmpty(y_99)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_100), not_null(c_100));
        }
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
ATerm GnInitRoots_0 (ATerm t)
{
  ATerm k_100 = NULL,l_100 = NULL,m_100 = NULL,n_100 = NULL;
  k_100 = t;
  j_100 :
  if(match_cons(k_100, sym__3))
    {
      l_100 = ATgetArgument(k_100, 0);
      m_100 = ATgetArgument(k_100, 1);
      n_100 = ATgetArgument(k_100, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(l_100), not_null(l_100), not_null(m_100), not_null(n_100), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm o_121 (ATerm), ATerm p_121 (ATerm))
{
  ATerm s_100 (ATerm t)
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_121(t);
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        {
          t = p_121(t);
          t = s_100(t);
        }
      }
    return(t);
  }
  t = s_100(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm r_121 (ATerm), ATerm s_121 (ATerm), ATerm t_121 (ATerm))
{
  t = r_121(t);
  t = while_not_2(t, s_121, t_121);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm y_132 (ATerm), ATerm z_132 (ATerm), ATerm a_133 (ATerm))
{
  ATerm r_3 (ATerm t)
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, y_132, z_132, a_133);
        ;
        LocalPopChoice(u_20);
      }
    else
      {
        t = t_20;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, r_3);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    t = svars_arity_0(t);
    {
      ATerm u_3 (ATerm t)
      {
        t = try_1(t, DefinitionExists_0);
        return(t);
      }
      t = map_1(t, u_3);
    }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    ATerm v_100 = NULL,w_100 = NULL,x_100 = NULL,y_100 = NULL;
    v_100 = t;
    u_100 :
    if(match_cons(v_100, sym__3))
      {
        w_100 = ATgetArgument(v_100, 0);
        x_100 = ATgetArgument(v_100, 1);
        y_100 = ATgetArgument(v_100, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(y_100)), not_null(x_100));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, s_3, t_3);
  {
    ATerm v_20 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        ;
        LocalPopChoice(b_21);
      }
    else
      {
        t = v_20;
        {
          t = MissingDefs_0(t);
          {
            t = term_w_8;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm p_116 (ATerm))
{
  ATerm h_101 = NULL,i_101 = NULL,j_101 = NULL;
  h_101 = t;
  g_101 :
  if(match_cons(h_101, sym__2))
    {
      i_101 = ATgetArgument(h_101, 0);
      j_101 = ATgetArgument(h_101, 1);
      {
        ATerm m_101 = NULL,n_101 = NULL,o_101 = NULL;
        ATerm c_21;
        c_21 = t;
        {
          ATerm p_101 = NULL;
          ATerm q_101 = NULL,r_101 = NULL,s_101 = NULL;
          t = p_116(t);
          {
            p_101 = t;
            {
              if(((m_101 != NULL) && (m_101 != p_101)))
                _fail(p_101);
              else
                m_101 = p_101;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(m_101), not_null(i_101), not_null(j_101));
                {
                  t = table_push_0(t);
                  {
                    ATerm d_21 = t;
                    int e_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_101), term_f_21);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(e_21);
                      }
                    else
                      {
                        t = d_21;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      q_101 = t;
                      f_101 :
                      if(((ATgetType(q_101) == AT_LIST) && !(ATisEmpty(q_101))))
                        {
                          r_101 = ATgetFirst((ATermList) q_101);
                          s_101 = (ATerm) ATgetNext((ATermList) q_101);
                          {
                            if(((n_101 != NULL) && (n_101 != r_101)))
                              _fail(r_101);
                            else
                              n_101 = r_101;
                            {
                              if(((o_101 != NULL) && (o_101 != s_101)))
                                _fail(s_101);
                              else
                                o_101 = s_101;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(m_101), term_f_21, (ATerm) ATinsert(CheckATermList(not_null(o_101)), (ATerm) ATinsert(CheckATermList(not_null(n_101)), not_null(i_101))));
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
        t = c_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm a_102 = NULL,b_102 = NULL,c_102 = NULL;
  a_102 = t;
  z_101 :
  if(match_cons(a_102, sym__2))
    {
      b_102 = ATgetArgument(a_102, 0);
      c_102 = ATgetArgument(a_102, 1);
      if(((b_102 != NULL) && (b_102 != c_102)))
        _fail(c_102);
      else
        b_102 = c_102;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm v_112 (ATerm), ATerm w_112 (ATerm))
{
  ATerm i_102 = NULL,j_102 = NULL,k_102 = NULL;
  i_102 = t;
  h_102 :
  if(((ATgetType(i_102) == AT_LIST) && !(ATisEmpty(i_102))))
    {
      j_102 = ATgetFirst((ATermList) i_102);
      k_102 = (ATerm) ATgetNext((ATermList) i_102);
      {
        t = w_112(t);
        {
          ATerm v_3 (ATerm t)
          {
            ATerm n_102 = NULL;
            n_102 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_102), not_null(n_102));
              t = v_112(t);
            }
            return(t);
          }
          t = fetch_1(t, v_3);
        }
        t = not_null(k_102);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm r_112 (ATerm))
{
  ATerm t_102 = NULL,u_102 = NULL,v_102 = NULL;
  t_102 = t;
  s_102 :
  if(match_cons(t_102, sym__2))
    {
      u_102 = ATgetArgument(t_102, 0);
      v_102 = ATgetArgument(t_102, 1);
      {
        t = not_null(u_102);
        {
          ATerm z_102 (ATerm t)
          {
            ATerm g_21 = t;
            int h_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(v_102);
                ;
                LocalPopChoice(h_21);
              }
            else
              {
                t = g_21;
                {
                  ATerm n_21 = t;
                  int o_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_3 (ATerm t)
                      {
                        t = not_null(v_102);
                        return(t);
                      }
                      t = HdMember_p__2(t, r_112, w_3);
                      t = z_102(t);
                      ;
                      LocalPopChoice(o_21);
                    }
                  else
                    {
                      t = n_21;
                      t = Cons_2(t, _id, z_102);
                    }
                }
              }
            return(t);
          }
          t = z_102(t);
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
ATerm Arities_0 (ATerm t)
{
  ATerm i_103 = NULL;
  i_103 = t;
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_103 = NULL;
        ATerm m_103 = NULL,n_103 = NULL,o_103 = NULL;
        t = not_null(i_103);
        {
          ATerm x_3 (ATerm t)
          {
            t = term_w_21;
            return(t);
          }
          t = rewrite_1(t, x_3);
          {
            m_103 = t;
            d_103 :
            if(match_cons(m_103, sym_Defined_2))
              {
                n_103 = ATgetArgument(m_103, 0);
                o_103 = ATgetArgument(m_103, 1);
                e_103 :
                if(match_string(n_103, "r_0"))
                  {
                    if(((l_103 != NULL) && (l_103 != o_103)))
                      _fail(o_103);
                    else
                      l_103 = o_103;
                  }
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
        t = not_null(l_103);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        {
          ATerm r_103 = NULL;
          ATerm s_103 = NULL,t_103 = NULL,x_103 = NULL;
          t = not_null(i_103);
          {
            ATerm y_3 (ATerm t)
            {
              t = term_w_21;
              return(t);
            }
            t = rewrite_1(t, y_3);
            {
              s_103 = t;
              g_103 :
              if(match_cons(s_103, sym_Defined_2))
                {
                  t_103 = ATgetArgument(s_103, 0);
                  x_103 = ATgetArgument(s_103, 1);
                  h_103 :
                  if(match_string(t_103, "l_0"))
                    {
                      if(((r_103 != NULL) && (r_103 != x_103)))
                        _fail(x_103);
                      else
                        r_103 = x_103;
                    }
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
          t = not_null(r_103);
        }
      }
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm h_104 = NULL,i_104 = NULL,j_104 = NULL;
  h_104 = t;
  g_104 :
  if(((ATgetType(h_104) == AT_LIST) && !(ATisEmpty(h_104))))
    {
      i_104 = ATgetFirst((ATermList) h_104);
      j_104 = (ATerm) ATgetNext((ATermList) h_104);
      t = not_null(i_104);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm r_104 = NULL,s_104 = NULL,t_104 = NULL;
  r_104 = t;
  q_104 :
  if(match_cons(r_104, sym__2))
    {
      s_104 = ATgetArgument(r_104, 0);
      t_104 = ATgetArgument(r_104, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_104), not_null(t_104));
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
ATerm rewrite_1 (ATerm t, ATerm r_116 (ATerm))
{
  ATerm z_104 = NULL;
  ATerm b_105 = NULL;
  z_104 = t;
  {
    ATerm c_105 = NULL;
    t = term_v_18;
    {
      t = r_116(t);
      {
        c_105 = t;
        if(((b_105 != NULL) && (b_105 != c_105)))
          _fail(c_105);
        else
          b_105 = c_105;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_105), not_null(z_104));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm p_105 = NULL,q_105 = NULL,r_105 = NULL,s_105 = NULL,v_105 = NULL;
  ATerm q_106 (ATerm t)
  {
    ATerm j_106 = NULL,k_106 = NULL;
    ATerm l_106 = NULL,m_106 = NULL,n_106 = NULL,o_106 = NULL;
    t = not_null(r_105);
    {
      ATerm z_3 (ATerm t)
      {
        t = term_x_21;
        return(t);
      }
      t = rewrite_1(t, z_3);
      {
        l_106 = t;
        l_105 :
        if(match_cons(l_106, sym_Defined_3))
          {
            m_106 = ATgetArgument(l_106, 0);
            n_106 = ATgetArgument(l_106, 1);
            o_106 = ATgetArgument(l_106, 2);
            m_105 :
            if(match_string(m_106, "j_0"))
              {
                if(((j_106 != NULL) && (j_106 != n_106)))
                  _fail(n_106);
                else
                  j_106 = n_106;
                if(((k_106 != NULL) && (k_106 != o_106)))
                  _fail(o_106);
                else
                  k_106 = o_106;
              }
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
    t = (ATerm) ATinsert(CheckATermList(not_null(k_106)), not_null(j_106));
    return(t);
  }
  r_105 = t;
  n_105 :
  if(match_cons(r_105, sym__2))
    {
      s_105 = ATgetArgument(r_105, 0);
      v_105 = ATgetArgument(r_105, 1);
      o_105 :
      if(match_cons(v_105, sym__2))
        {
          p_105 = ATgetArgument(v_105, 0);
          q_105 = ATgetArgument(v_105, 1);
          {
            ATerm y_21 = t;
            int z_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_106 = NULL;
                ATerm b_106 = NULL,c_106 = NULL,d_106 = NULL;
                t = not_null(r_105);
                {
                  ATerm a_4 (ATerm t)
                  {
                    t = term_x_21;
                    return(t);
                  }
                  t = rewrite_1(t, a_4);
                  {
                    b_106 = t;
                    i_105 :
                    if(match_cons(b_106, sym_Defined_2))
                      {
                        c_106 = ATgetArgument(b_106, 0);
                        d_106 = ATgetArgument(b_106, 1);
                        j_105 :
                        if(match_string(c_106, "o_0"))
                          {
                            if(((a_106 != NULL) && (a_106 != d_106)))
                              _fail(d_106);
                            else
                              a_106 = d_106;
                          }
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
                t = not_null(a_106);
                ;
                LocalPopChoice(z_21);
              }
            else
              {
                t = y_21;
                t = q_106(t);
              }
          }
        }
      else
        {
          t = q_106(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm g_115 (ATerm), ATerm h_115 (ATerm), ATerm i_115 (ATerm))
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_115(t);
      ;
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      {
        ATerm x_106 = NULL,y_106 = NULL,z_106 = NULL;
        x_106 = t;
        w_106 :
        if(((ATgetType(x_106) == AT_LIST) && !(ATisEmpty(x_106))))
          {
            y_106 = ATgetFirst((ATermList) x_106);
            z_106 = (ATerm) ATgetNext((ATermList) x_106);
            {
              ATerm c_107 = NULL,e_107 = NULL;
              ATerm e_22;
              e_22 = t;
              {
                ATerm d_107 = NULL;
                t = not_null(y_106);
                {
                  t = i_115(t);
                  {
                    d_107 = t;
                    if(((c_107 != NULL) && (c_107 != d_107)))
                      _fail(d_107);
                    else
                      c_107 = d_107;
                  }
                }
              }
              t = e_22;
              {
                ATerm f_107 = NULL;
                t = not_null(z_106);
                {
                  t = foldr_3(t, g_115, h_115, i_115);
                  {
                    f_107 = t;
                    if(((e_107 != NULL) && (e_107 != f_107)))
                      _fail(f_107);
                    else
                      e_107 = f_107;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_107), not_null(e_107));
                  t = h_115(t);
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
ATerm length_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    t = term_h_22;
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_w_8;
    return(t);
  }
  t = foldr_3(t, b_4, add_0, c_4);
  return(t);
}
ATerm RegisterSDefT_0 (ATerm t)
{
  ATerm s_107 = NULL,t_107 = NULL,u_107 = NULL,v_107 = NULL,w_107 = NULL;
  s_107 = t;
  r_107 :
  if(match_cons(s_107, sym_SDefT_4))
    {
      t_107 = ATgetArgument(s_107, 0);
      u_107 = ATgetArgument(s_107, 1);
      v_107 = ATgetArgument(s_107, 2);
      w_107 = ATgetArgument(s_107, 3);
      {
        ATerm e_108 = NULL,f_108 = NULL,g_108 = NULL,h_108 = NULL;
        ATerm l_22;
        l_22 = t;
        {
          ATerm i_108 = NULL;
          t = not_null(u_107);
          {
            ATerm j_108 = NULL;
            t = length_0(t);
            {
              i_108 = t;
              {
                if(((e_108 != NULL) && (e_108 != i_108)))
                  _fail(i_108);
                else
                  e_108 = i_108;
                {
                  t = not_null(v_107);
                  {
                    ATerm k_108 = NULL,m_108 = NULL;
                    t = length_0(t);
                    {
                      j_108 = t;
                      {
                        if(((f_108 != NULL) && (f_108 != j_108)))
                          _fail(j_108);
                        else
                          f_108 = j_108;
                        {
                          ATerm m_22;
                          m_22 = t;
                          {
                            ATerm l_108 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(t_107), (ATerm) ATmakeAppl(sym__2, not_null(e_108), not_null(f_108)));
                            {
                              ATerm n_22 = t;
                              int o_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Definitions_0(t);
                                  ;
                                  LocalPopChoice(o_22);
                                }
                              else
                                {
                                  t = n_22;
                                  t = (ATerm) ATempty;
                                }
                              {
                                l_108 = t;
                                if(((k_108 != NULL) && (k_108 != l_108)))
                                  _fail(l_108);
                                else
                                  k_108 = l_108;
                              }
                            }
                          }
                          t = m_22;
                          {
                            ATerm n_108 = NULL,p_108 = NULL;
                            t = (ATerm) ATinsert(CheckATermList(not_null(k_108)), not_null(s_107));
                            {
                              m_108 = t;
                              {
                                if(((g_108 != NULL) && (g_108 != m_108)))
                                  _fail(m_108);
                                else
                                  g_108 = m_108;
                                {
                                  ATerm o_108 = NULL;
                                  t = not_null(t_107);
                                  {
                                    ATerm s_22 = t;
                                    int t_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = Arities_0(t);
                                        ;
                                        LocalPopChoice(t_22);
                                      }
                                    else
                                      {
                                        t = s_22;
                                        t = (ATerm) ATempty;
                                      }
                                    {
                                      o_108 = t;
                                      if(((n_108 != NULL) && (n_108 != o_108)))
                                        _fail(o_108);
                                      else
                                        n_108 = o_108;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(e_108), not_null(f_108))), not_null(n_108));
                                    {
                                      t = union_0(t);
                                      {
                                        p_108 = t;
                                        {
                                          if(((h_108 != NULL) && (h_108 != p_108)))
                                            _fail(p_108);
                                          else
                                            h_108 = p_108;
                                          {
                                            ATerm u_22;
                                            u_22 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(t_107), (ATerm) ATmakeAppl(sym__2, not_null(e_108), not_null(f_108))), (ATerm) ATmakeAppl(sym_Defined_2, term_v_22, not_null(g_108)));
                                              {
                                                ATerm d_4 (ATerm t)
                                                {
                                                  t = term_x_21;
                                                  return(t);
                                                }
                                                t = assert_1(t, d_4);
                                              }
                                            }
                                            t = u_22;
                                            {
                                              ATerm y_22;
                                              y_22 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_107), (ATerm) ATmakeAppl(sym_Defined_2, term_g_23, not_null(h_108)));
                                                {
                                                  ATerm e_4 (ATerm t)
                                                  {
                                                    t = term_w_21;
                                                    return(t);
                                                  }
                                                  t = assert_1(t, e_4);
                                                }
                                              }
                                              t = y_22;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = l_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  t = map_1(t, RegisterSDefT_0);
  return(t);
}
ATerm needed_defs_0 (ATerm t)
{
  ATerm a_109 = NULL;
  ATerm h_109 = NULL;
  t = sort_defs_0(t);
  {
    h_109 = t;
    if(((a_109 != NULL) && (a_109 != h_109)))
      _fail(h_109);
    else
      a_109 = h_109;
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_s_23), not_null(a_109), (ATerm) ATempty);
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm c_89 (ATerm))
{
  ATerm q_109 = NULL,r_109 = NULL;
  q_109 = t;
  p_109 :
  if(match_cons(q_109, sym_Strategies_1))
    {
      r_109 = ATgetArgument(q_109, 0);
      {
        ATerm u_109 = NULL,w_109 = NULL;
        ATerm v_109 = NULL;
        t = SSLgetAnnotations(not_null(q_109));
        {
          v_109 = t;
          if(((u_109 != NULL) && (u_109 != v_109)))
            _fail(v_109);
          else
            u_109 = v_109;
        }
        {
          t = not_null(r_109);
          {
            ATerm y_109 = NULL;
            t = c_89(t);
            {
              w_109 = t;
              {
                ATerm z_109 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(w_109)), not_null(u_109));
                {
                  z_109 = t;
                  if(((y_109 != NULL) && (y_109 != z_109)))
                    _fail(z_109);
                  else
                    y_109 = z_109;
                }
                t = not_null(y_109);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_88 (ATerm), ATerm z_88 (ATerm))
{
  ATerm k_110 = NULL,l_110 = NULL,m_110 = NULL;
  k_110 = t;
  j_110 :
  if(((ATgetType(k_110) == AT_LIST) && !(ATisEmpty(k_110))))
    {
      l_110 = ATgetFirst((ATermList) k_110);
      m_110 = (ATerm) ATgetNext((ATermList) k_110);
      {
        ATerm t_110 = NULL,v_110 = NULL;
        ATerm u_110 = NULL;
        t = SSLgetAnnotations(not_null(k_110));
        {
          u_110 = t;
          if(((t_110 != NULL) && (t_110 != u_110)))
            _fail(u_110);
          else
            t_110 = u_110;
        }
        {
          t = not_null(l_110);
          {
            ATerm x_110 = NULL;
            t = y_88(t);
            {
              v_110 = t;
              {
                t = not_null(m_110);
                {
                  ATerm z_110 = NULL;
                  t = z_88(t);
                  {
                    x_110 = t;
                    {
                      ATerm c_111 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(x_110)), not_null(v_110)), not_null(t_110));
                      {
                        c_111 = t;
                        if(((z_110 != NULL) && (z_110 != c_111)))
                          _fail(c_111);
                        else
                          z_110 = c_111;
                      }
                      t = not_null(z_110);
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
ATerm Specification_1 (ATerm t, ATerm h_89 (ATerm))
{
  ATerm p_111 = NULL,q_111 = NULL;
  p_111 = t;
  o_111 :
  if(match_cons(p_111, sym_Specification_1))
    {
      q_111 = ATgetArgument(p_111, 0);
      {
        ATerm t_111 = NULL,v_111 = NULL;
        ATerm u_111 = NULL;
        t = SSLgetAnnotations(not_null(p_111));
        {
          u_111 = t;
          if(((t_111 != NULL) && (t_111 != u_111)))
            _fail(u_111);
          else
            t_111 = u_111;
        }
        {
          t = not_null(q_111);
          {
            ATerm x_111 = NULL;
            t = h_89(t);
            {
              v_111 = t;
              {
                ATerm y_111 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(v_111)), not_null(t_111));
                {
                  y_111 = t;
                  if(((x_111 != NULL) && (x_111 != y_111)))
                    _fail(y_111);
                  else
                    x_111 = y_111;
                }
                t = not_null(x_111);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm p_87 (ATerm), ATerm q_87 (ATerm))
{
  ATerm j_112 = NULL,k_112 = NULL,l_112 = NULL;
  j_112 = t;
  i_112 :
  if(match_cons(j_112, sym__2))
    {
      k_112 = ATgetArgument(j_112, 0);
      l_112 = ATgetArgument(j_112, 1);
      {
        ATerm t_112 = NULL,x_112 = NULL;
        ATerm u_112 = NULL;
        t = SSLgetAnnotations(not_null(j_112));
        {
          u_112 = t;
          if(((t_112 != NULL) && (t_112 != u_112)))
            _fail(u_112);
          else
            t_112 = u_112;
        }
        {
          t = not_null(k_112);
          {
            ATerm z_112 = NULL;
            t = p_87(t);
            {
              x_112 = t;
              {
                t = not_null(l_112);
                {
                  ATerm b_113 = NULL;
                  t = q_87(t);
                  {
                    z_112 = t;
                    {
                      ATerm h_113 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(x_112), not_null(z_112)), not_null(t_112));
                      {
                        h_113 = t;
                        if(((b_113 != NULL) && (b_113 != h_113)))
                          _fail(h_113);
                        else
                          b_113 = h_113;
                      }
                      t = not_null(b_113);
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
  ATerm t_23;
  t_23 = t;
  {
    ATerm o_113 = NULL;
    ATerm p_113 = NULL;
    t = term_v_18;
    {
      t = whoami_0(t);
      {
        p_113 = t;
        if(((o_113 != NULL) && (o_113 != p_113)))
          _fail(p_113);
        else
          o_113 = p_113;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_23), not_null(o_113)), term_u_23));
      {
        t = printnl_0(t);
        {
          t = term_w_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = t_23;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm t_113 = NULL,u_113 = NULL,v_113 = NULL;
  t_113 = t;
  s_113 :
  if(match_cons(t_113, sym__2))
    {
      u_113 = ATgetArgument(t_113, 0);
      v_113 = ATgetArgument(t_113, 1);
      {
        ATerm w_23;
        w_23 = t;
        t = SSL_printnl(not_null(u_113), not_null(v_113));
        t = w_23;
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
  ATerm a_114 = NULL;
  a_114 = t;
  t = SSL_implode_string(not_null(a_114));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(y_23);
    }
  else
    {
      t = x_23;
      {
        ATerm f_114 = NULL,g_114 = NULL,h_114 = NULL;
        f_114 = t;
        e_114 :
        if(((ATgetType(f_114) == AT_LIST) && !(ATisEmpty(f_114))))
          {
            g_114 = ATgetFirst((ATermList) f_114);
            h_114 = (ATerm) ATgetNext((ATermList) f_114);
            {
              t = not_null(g_114);
              {
                ATerm f_4 (ATerm t)
                {
                  t = not_null(h_114);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, f_4);
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
  ATerm r_114 = NULL;
  ATerm u_114 = NULL;
  r_114 = t;
  {
    ATerm v_114 = NULL;
    ATerm x_114 = NULL,y_114 = NULL,z_114 = NULL;
    t = not_null(r_114);
    {
      v_114 = t;
      {
        t = SSL_explode_term(not_null(v_114));
        {
          x_114 = t;
          p_114 :
          if(match_cons(x_114, sym__2))
            {
              y_114 = ATgetArgument(x_114, 0);
              z_114 = ATgetArgument(x_114, 1);
              q_114 :
              if(match_string(y_114, ""))
                {
                  if(((u_114 != NULL) && (u_114 != z_114)))
                    _fail(z_114);
                  else
                    u_114 = z_114;
                }
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
      t = not_null(u_114);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_111 (ATerm))
{
  ATerm d_115 (ATerm t)
  {
    ATerm z_23 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_115);
        ;
        LocalPopChoice(f_24);
      }
    else
      {
        t = z_23;
        {
          t = Nil_0(t);
          t = g_111(t);
        }
      }
    return(t);
  }
  t = d_115(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm l_115 = NULL,m_115 = NULL,n_115 = NULL;
  l_115 = t;
  k_115 :
  if(match_cons(l_115, sym__2))
    {
      m_115 = ATgetArgument(l_115, 0);
      n_115 = ATgetArgument(l_115, 1);
      {
        t = not_null(m_115);
        {
          ATerm g_4 (ATerm t)
          {
            t = not_null(n_115);
            return(t);
          }
          t = at_end_1(t, g_4);
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
  ATerm k_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(s_24);
    }
  else
    {
      t = k_24;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm u_115 = NULL;
  u_115 = t;
  t = SSL_explode_string(not_null(u_115));
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
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      {
        ATerm v_24 = t;
        int w_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, h_4);
            ;
            LocalPopChoice(w_24);
          }
        else
          {
            t = v_24;
            {
              ATerm d_116 = NULL,e_116 = NULL,f_116 = NULL;
              d_116 = t;
              c_116 :
              if(match_cons(d_116, sym_Path_1))
                {
                  e_116 = ATgetArgument(d_116, 0);
                  t = not_null(e_116);
                }
              else
                {
                  if(match_cons(d_116, sym_Var_1))
                    {
                      e_116 = ATgetArgument(d_116, 0);
                      {
                        t = not_null(e_116);
                        {
                          ATerm b_25 = t;
                          int c_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(c_25);
                            }
                          else
                            {
                              t = b_25;
                              {
                                ATerm i_4 (ATerm t)
                                {
                                  t = term_d_25;
                                  return(t);
                                }
                                t = debug_1(t, i_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(d_116, sym_Prefix_2))
                        {
                          e_116 = ATgetArgument(d_116, 0);
                          f_116 = ATgetArgument(d_116, 1);
                          {
                            ATerm k_116 = NULL,m_116 = NULL;
                            ATerm h_25;
                            h_25 = t;
                            {
                              ATerm l_116 = NULL;
                              t = not_null(e_116);
                              {
                                t = eval_config_0(t);
                                {
                                  l_116 = t;
                                  if(((k_116 != NULL) && (k_116 != l_116)))
                                    _fail(l_116);
                                  else
                                    k_116 = l_116;
                                }
                              }
                            }
                            t = h_25;
                            {
                              ATerm n_116 = NULL;
                              t = not_null(f_116);
                              {
                                t = eval_config_0(t);
                                {
                                  n_116 = t;
                                  if(((m_116 != NULL) && (m_116 != n_116)))
                                    _fail(n_116);
                                  else
                                    m_116 = n_116;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_116), not_null(m_116));
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
  ATerm y_116 = NULL;
  y_116 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_25, not_null(y_116));
    {
      t = table_get_0(t);
      {
        ATerm j_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm j_25;
            j_25 = t;
            {
              ATerm a_117 = NULL;
              ATerm b_117 = NULL;
              b_117 = t;
              if(((a_117 != NULL) && (a_117 != b_117)))
                _fail(b_117);
              else
                a_117 = b_117;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_i_25, not_null(y_116), not_null(a_117));
                t = table_put_0(t);
              }
            }
            t = j_25;
          }
          return(t);
        }
        t = try_1(t, j_4);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm i_127 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm k_25;
    k_25 = t;
    {
      ATerm f_117 = NULL;
      ATerm g_117 = NULL;
      t = term_w_25;
      {
        t = get_config_0(t);
        {
          g_117 = t;
          if(((f_117 != NULL) && (f_117 != g_117)))
            _fail(g_117);
          else
            f_117 = g_117;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_117), term_x_25);
        t = geq_0(t);
      }
    }
    t = k_25;
    t = i_127(t);
    return(t);
  }
  t = try_1(t, k_4);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm m_117 = NULL,n_117 = NULL,o_117 = NULL,p_117 = NULL;
  m_117 = t;
  k_117 :
  if(match_cons(m_117, sym__2))
    {
      n_117 = ATgetArgument(m_117, 0);
      o_117 = ATgetArgument(m_117, 1);
      l_117 :
      if(match_cons(o_117, sym_Stream_1))
        {
          p_117 = ATgetArgument(o_117, 0);
          {
            ATerm s_117 = NULL;
            t = SSL_fputc(not_null(n_117), not_null(p_117));
            {
              ATerm t_117 = NULL;
              t_117 = t;
              if(((s_117 != NULL) && (s_117 != t_117)))
                _fail(t_117);
              else
                s_117 = t_117;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_117));
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
  ATerm a_118 = NULL,b_118 = NULL,c_118 = NULL,d_118 = NULL;
  a_118 = t;
  y_117 :
  if(match_cons(a_118, sym__2))
    {
      b_118 = ATgetArgument(a_118, 0);
      d_118 = ATgetArgument(a_118, 1);
      z_117 :
      if(match_cons(b_118, sym_Stream_1))
        {
          c_118 = ATgetArgument(b_118, 0);
          {
            ATerm g_118 = NULL;
            t = SSL_write_term_to_stream_text(not_null(c_118), not_null(d_118));
            {
              ATerm h_118 = NULL;
              h_118 = t;
              if(((g_118 != NULL) && (g_118 != h_118)))
                _fail(h_118);
              else
                g_118 = h_118;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_118));
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
  ATerm l_4 (ATerm t)
  {
    ATerm l_118 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm m_118 = NULL;
      m_118 = t;
      if(((l_118 != NULL) && (l_118 != m_118)))
        _fail(m_118);
      else
        l_118 = m_118;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_25, not_null(l_118));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, l_4);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm s_118 = NULL,t_118 = NULL,u_118 = NULL,v_118 = NULL;
  s_118 = t;
  q_118 :
  if(match_cons(s_118, sym__2))
    {
      t_118 = ATgetArgument(s_118, 0);
      v_118 = ATgetArgument(s_118, 1);
      r_118 :
      if(match_cons(t_118, sym_Stream_1))
        {
          u_118 = ATgetArgument(t_118, 0);
          {
            ATerm y_118 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(u_118), not_null(v_118));
            {
              ATerm z_118 = NULL;
              z_118 = t;
              if(((y_118 != NULL) && (y_118 != z_118)))
                _fail(z_118);
              else
                y_118 = z_118;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_118));
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
ATerm WriteToFile_1 (ATerm t, ATerm e_126 (ATerm))
{
  ATerm l_119 = NULL,m_119 = NULL,n_119 = NULL;
  l_119 = t;
  k_119 :
  if(match_cons(l_119, sym__2))
    {
      m_119 = ATgetArgument(l_119, 0);
      n_119 = ATgetArgument(l_119, 1);
      {
        ATerm q_119 = NULL,s_119 = NULL;
        t = not_null(m_119);
        {
          ATerm r_119 = NULL;
          r_119 = t;
          if(((q_119 != NULL) && (q_119 != r_119)))
            _fail(r_119);
          else
            q_119 = r_119;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_119), term_z_25);
            {
              t = open_stream_0(t);
              {
                ATerm t_119 = NULL;
                t_119 = t;
                if(((s_119 != NULL) && (s_119 != t_119)))
                  _fail(t_119);
                else
                  s_119 = t_119;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_119), not_null(n_119));
                  {
                    t = e_126(t);
                    {
                      t = fclose_0(t);
                      t = not_null(n_119);
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
  ATerm b_120 = NULL;
  ATerm a_26;
  a_26 = t;
  {
    ATerm m_4 (ATerm t)
    {
      ATerm i_26 = t;
      int j_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_4 (ATerm t)
          {
            ATerm c_120 = NULL,d_120 = NULL;
            c_120 = t;
            y_119 :
            if(match_cons(c_120, sym_Output_1))
              {
                d_120 = ATgetArgument(c_120, 0);
                if(((b_120 != NULL) && (b_120 != d_120)))
                  _fail(d_120);
                else
                  b_120 = d_120;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, n_4);
          ;
          LocalPopChoice(j_26);
        }
      else
        {
          t = i_26;
          {
            ATerm e_120 = NULL;
            t = term_k_26;
            {
              e_120 = t;
              if(((b_120 != NULL) && (b_120 != e_120)))
                _fail(e_120);
              else
                b_120 = e_120;
            }
          }
        }
      return(t);
    }
    t = _2(t, m_4, _id);
  }
  t = a_26;
  {
    ATerm r_4 (ATerm t)
    {
      ATerm s_4 (ATerm t)
      {
        t = not_null(b_120);
        return(t);
      }
      t = split_2(t, s_4, _id);
      return(t);
    }
    t = _2(t, _id, r_4);
    {
      ATerm l_26 = t;
      int w_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_4 (ATerm t)
          {
            ATerm u_4 (ATerm t)
            {
              ATerm f_120 = NULL;
              f_120 = t;
              a_120 :
              if(!(match_cons(f_120, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, u_4);
            return(t);
          }
          t = _2(t, t_4, WriteToBinaryFile_0);
          ;
          LocalPopChoice(w_26);
        }
      else
        {
          t = l_26;
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
ATerm apply_strategy_1 (ATerm t, ATerm g_129 (ATerm))
{
  ATerm l_120 = NULL,n_120 = NULL,o_120 = NULL,p_120 = NULL;
  ATerm y_26;
  y_26 = t;
  t = dtime_0(t);
  t = y_26;
  {
    t = g_129(t);
    {
      ATerm z_26;
      z_26 = t;
      {
        ATerm m_120 = NULL;
        t = dtime_0(t);
        {
          m_120 = t;
          if(((l_120 != NULL) && (l_120 != m_120)))
            _fail(m_120);
          else
            l_120 = m_120;
        }
      }
      t = z_26;
      {
        n_120 = t;
        k_120 :
        if(match_cons(n_120, sym__2))
          {
            o_120 = ATgetArgument(n_120, 0);
            p_120 = ATgetArgument(n_120, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_120)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_120))), not_null(p_120));
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
  ATerm x_120 = NULL,y_120 = NULL;
  ATerm g_121 (ATerm t)
  {
    t = SSL_fclose(not_null(y_120));
    return(t);
  }
  y_120 = t;
  w_120 :
  if(match_cons(y_120, sym_Stream_1))
    {
      x_120 = ATgetArgument(y_120, 0);
      {
        ATerm a_27 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(x_120));
            ;
            LocalPopChoice(b_27);
          }
        else
          {
            t = a_27;
            t = g_121(t);
          }
      }
    }
  else
    {
      t = g_121(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm j_121 = NULL,k_121 = NULL;
  j_121 = t;
  i_121 :
  if(match_cons(j_121, sym_Stream_1))
    {
      k_121 = ATgetArgument(j_121, 0);
      t = SSL_read_term_from_stream(not_null(k_121));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm q_125 (ATerm))
{
  ATerm c_27;
  c_27 = t;
  {
    ATerm v_121 = NULL,x_121 = NULL;
    ATerm e_27;
    e_27 = t;
    {
      ATerm w_121 = NULL;
      t = q_125(t);
      {
        w_121 = t;
        if(((v_121 != NULL) && (v_121 != w_121)))
          _fail(w_121);
        else
          v_121 = w_121;
      }
    }
    t = e_27;
    {
      ATerm y_121 = NULL;
      y_121 = t;
      if(((x_121 != NULL) && (x_121 != y_121)))
        _fail(y_121);
      else
        x_121 = y_121;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_121)), not_null(v_121)));
        t = printnl_0(t);
      }
    }
  }
  t = c_27;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm e_122 = NULL,f_122 = NULL,g_122 = NULL;
  e_122 = t;
  d_122 :
  if(match_cons(e_122, sym__2))
    {
      f_122 = ATgetArgument(e_122, 0);
      g_122 = ATgetArgument(e_122, 1);
      {
        ATerm j_122 = NULL;
        t = SSL_fopen(not_null(f_122), not_null(g_122));
        {
          ATerm k_122 = NULL;
          k_122 = t;
          if(((j_122 != NULL) && (j_122 != k_122)))
            _fail(k_122);
          else
            j_122 = k_122;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_122));
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
  ATerm o_122 = NULL;
  o_122 = t;
  t = SSL_is_string(not_null(o_122));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm s_122 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm t_122 = NULL;
    t_122 = t;
    if(((s_122 != NULL) && (s_122 != t_122)))
      _fail(t_122);
    else
      s_122 = t_122;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_122));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm w_122 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm x_122 = NULL;
    x_122 = t;
    if(((w_122 != NULL) && (w_122 != x_122)))
      _fail(x_122);
    else
      w_122 = x_122;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_122));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm a_123 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm b_123 = NULL;
    b_123 = t;
    if(((a_123 != NULL) && (a_123 != b_123)))
      _fail(b_123);
    else
      a_123 = b_123;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_123));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm h_123 = NULL;
  h_123 = t;
  g_123 :
  if(match_cons(h_123, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(h_123, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(h_123, sym_stdin_0))
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
  ATerm r_123 = NULL;
  ATerm t_123 = NULL,u_123 = NULL;
  r_123 = t;
  {
    ATerm v_123 = NULL;
    ATerm x_123 = NULL,y_123 = NULL,z_123 = NULL,a_124 = NULL,b_124 = NULL;
    t = not_null(r_123);
    {
      v_123 = t;
      {
        t = SSL_explode_term(not_null(v_123));
        {
          x_123 = t;
          o_123 :
          if(match_cons(x_123, sym__2))
            {
              y_123 = ATgetArgument(x_123, 0);
              z_123 = ATgetArgument(x_123, 1);
              p_123 :
              if(match_string(y_123, ""))
                {
                  q_123 :
                  if(((ATgetType(z_123) == AT_LIST) && !(ATisEmpty(z_123))))
                    {
                      a_124 = ATgetFirst((ATermList) z_123);
                      b_124 = (ATerm) ATgetNext((ATermList) z_123);
                      {
                        if(((u_123 != NULL) && (u_123 != a_124)))
                          _fail(a_124);
                        else
                          u_123 = a_124;
                        if(((t_123 != NULL) && (t_123 != b_124)))
                          _fail(b_124);
                        else
                          t_123 = b_124;
                      }
                    }
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
    t = not_null(u_123);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm j_124 = NULL,k_124 = NULL,l_124 = NULL;
  j_124 = t;
  i_124 :
  if(match_cons(j_124, sym__2))
    {
      k_124 = ATgetArgument(j_124, 0);
      l_124 = ATgetArgument(j_124, 1);
      {
        ATerm j_27 = t;
        int k_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(k_27);
          }
        else
          {
            t = j_27;
            {
              ATerm l_27 = t;
              int n_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_4 (ATerm t)
                  {
                    ATerm m_124 = NULL,n_124 = NULL;
                    m_124 = t;
                    h_124 :
                    if(match_cons(m_124, sym_Path_1))
                      {
                        n_124 = ATgetArgument(m_124, 0);
                        t = not_null(n_124);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, v_4, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(n_27);
                }
              else
                {
                  t = l_27;
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
  ATerm v_124 = NULL;
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_124 = NULL;
      ATerm u_124 = NULL;
      u_124 = t;
      if(((t_124 != NULL) && (t_124 != u_124)))
        _fail(u_124);
      else
        t_124 = u_124;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_124), term_v_27);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      {
        ATerm w_4 (ATerm t)
        {
          t = term_x_27;
          return(t);
        }
        t = debug_1(t, w_4);
        _fail(t);
      }
    }
  {
    ATerm y_27;
    y_27 = t;
    {
      ATerm w_124 = NULL;
      t = read_from_stream_0(t);
      {
        w_124 = t;
        if(((v_124 != NULL) && (v_124 != w_124)))
          _fail(w_124);
        else
          v_124 = w_124;
      }
    }
    t = y_27;
    {
      t = fclose_0(t);
      t = not_null(v_124);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_108 (ATerm), ATerm c_108 (ATerm))
{
  ATerm b_125 = NULL,d_125 = NULL;
  ATerm z_27;
  z_27 = t;
  {
    ATerm c_125 = NULL;
    t = b_108(t);
    {
      c_125 = t;
      if(((b_125 != NULL) && (b_125 != c_125)))
        _fail(c_125);
      else
        b_125 = c_125;
    }
  }
  t = z_27;
  {
    ATerm e_125 = NULL;
    t = c_108(t);
    {
      e_125 = t;
      if(((d_125 != NULL) && (d_125 != e_125)))
        _fail(e_125);
      else
        d_125 = e_125;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_125), not_null(d_125));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm k_125 = NULL;
  ATerm a_28;
  a_28 = t;
  {
    ATerm b_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_4 (ATerm t)
        {
          ATerm l_125 = NULL,m_125 = NULL;
          l_125 = t;
          i_125 :
          if(match_cons(l_125, sym_Input_1))
            {
              m_125 = ATgetArgument(l_125, 0);
              if(((k_125 != NULL) && (k_125 != m_125)))
                _fail(m_125);
              else
                k_125 = m_125;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, x_4);
        ;
        LocalPopChoice(e_28);
      }
    else
      {
        t = b_28;
        {
          ATerm n_125 = NULL;
          t = term_f_28;
          {
            n_125 = t;
            if(((k_125 != NULL) && (k_125 != n_125)))
              _fail(n_125);
            else
              k_125 = n_125;
          }
        }
      }
  }
  t = a_28;
  {
    ATerm y_4 (ATerm t)
    {
      t = not_null(k_125);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_4);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm t_125 = NULL;
    t_125 = t;
    r_125 :
    if(!(match_string(t_125, "-k")))
      {
        if(!(match_string(t_125, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    ATerm g_28;
    g_28 = t;
    {
      ATerm u_125 = NULL;
      ATerm v_125 = NULL;
      t = string_to_int_0(t);
      {
        v_125 = t;
        if(((u_125 != NULL) && (u_125 != v_125)))
          _fail(v_125);
        else
          u_125 = v_125;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_28, not_null(u_125));
        t = set_config_0(t);
      }
    }
    t = g_28;
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = term_m_28;
    return(t);
  }
  t = ArgOption_3(t, z_4, a_5, b_5);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm y_125 = NULL;
  y_125 = t;
  t = SSL_string_to_int(not_null(y_125));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm n_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_5 (ATerm t)
      {
        ATerm h_126 = NULL;
        h_126 = t;
        b_126 :
        if(!(match_string(h_126, "-S")))
          {
            if(!(match_string(h_126, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm d_5 (ATerm t)
      {
        t = term_p_28;
        t = set_config_0(t);
        t = term_q_28;
        return(t);
      }
      ATerm e_5 (ATerm t)
      {
        t = term_r_28;
        return(t);
      }
      t = Option_3(t, c_5, d_5, e_5);
      ;
      LocalPopChoice(o_28);
    }
  else
    {
      t = n_28;
      {
        ATerm s_28 = t;
        int t_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_5 (ATerm t)
            {
              ATerm i_126 = NULL;
              i_126 = t;
              c_126 :
              if(!(match_string(i_126, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm g_5 (ATerm t)
            {
              ATerm l_126 = NULL;
              ATerm y_28;
              y_28 = t;
              {
                ATerm j_126 = NULL;
                ATerm k_126 = NULL;
                t = string_to_int_0(t);
                {
                  k_126 = t;
                  if(((j_126 != NULL) && (j_126 != k_126)))
                    _fail(k_126);
                  else
                    j_126 = k_126;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_25, not_null(j_126));
                  t = set_config_0(t);
                }
              }
              t = y_28;
              {
                ATerm m_126 = NULL;
                m_126 = t;
                if(((l_126 != NULL) && (l_126 != m_126)))
                  _fail(m_126);
                else
                  l_126 = m_126;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(l_126));
              }
              return(t);
            }
            ATerm h_5 (ATerm t)
            {
              t = term_z_28;
              return(t);
            }
            t = ArgOption_3(t, f_5, g_5, h_5);
            ;
            LocalPopChoice(t_28);
          }
        else
          {
            t = s_28;
            {
              ATerm i_5 (ATerm t)
              {
                ATerm n_126 = NULL;
                n_126 = t;
                g_126 :
                if(!(match_string(n_126, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm j_5 (ATerm t)
              {
                t = term_e_29;
                t = set_config_0(t);
                t = term_g_29;
                return(t);
              }
              ATerm k_5 (ATerm t)
              {
                t = term_j_29;
                return(t);
              }
              t = Option_3(t, i_5, j_5, k_5);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm k_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(l_29);
    }
  else
    {
      t = k_29;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    ATerm t_126 = NULL;
    t_126 = t;
    q_126 :
    if(!(match_string(t_126, "-o")))
      {
        if(!(match_string(t_126, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    ATerm w_126 = NULL;
    ATerm m_29;
    m_29 = t;
    {
      ATerm u_126 = NULL;
      ATerm v_126 = NULL;
      v_126 = t;
      if(((u_126 != NULL) && (u_126 != v_126)))
        _fail(v_126);
      else
        u_126 = v_126;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_29, not_null(u_126));
        t = set_config_0(t);
      }
    }
    t = m_29;
    {
      ATerm x_126 = NULL;
      x_126 = t;
      if(((w_126 != NULL) && (w_126 != x_126)))
        _fail(x_126);
      else
        w_126 = x_126;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_126));
    }
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    t = term_o_29;
    return(t);
  }
  t = ArgOption_3(t, l_5, m_5, n_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm p_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(q_29);
    }
  else
    {
      t = p_29;
      {
        ATerm o_5 (ATerm t)
        {
          ATerm b_127 = NULL;
          b_127 = t;
          a_127 :
          if(!(match_string(b_127, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm p_5 (ATerm t)
        {
          t = term_t_29;
          t = set_config_0(t);
          t = term_u_29;
          return(t);
        }
        ATerm q_5 (ATerm t)
        {
          t = term_w_29;
          return(t);
        }
        t = Option_3(t, o_5, p_5, q_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm j_127 = NULL,k_127 = NULL,l_127 = NULL,m_127 = NULL,n_127 = NULL;
  j_127 = t;
  f_127 :
  if(match_string(j_127, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(j_127) == AT_LIST) && !(ATisEmpty(j_127))))
        {
          k_127 = ATgetFirst((ATermList) j_127);
          l_127 = (ATerm) ATgetNext((ATermList) j_127);
          g_127 :
          if(((ATgetType(l_127) == AT_LIST) && !(ATisEmpty(l_127))))
            {
              m_127 = ATgetFirst((ATermList) l_127);
              n_127 = (ATerm) ATgetNext((ATermList) l_127);
              {
                ATerm r_127 = NULL;
                ATerm x_29;
                x_29 = t;
                {
                  t = not_null(k_127);
                  t = k_0(t);
                }
                t = x_29;
                {
                  ATerm s_127 = NULL;
                  t = not_null(m_127);
                  {
                    t = m_0(t);
                    {
                      s_127 = t;
                      if(((r_127 != NULL) && (r_127 != s_127)))
                        _fail(s_127);
                      else
                        r_127 = s_127;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_127)), not_null(r_127));
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
  ATerm u_5 (ATerm t)
  {
    ATerm z_127 = NULL;
    z_127 = t;
    w_127 :
    if(!(match_string(z_127, "-i")))
      {
        if(!(match_string(z_127, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    ATerm c_128 = NULL;
    ATerm y_29;
    y_29 = t;
    {
      ATerm a_128 = NULL;
      ATerm b_128 = NULL;
      b_128 = t;
      if(((a_128 != NULL) && (a_128 != b_128)))
        _fail(b_128);
      else
        a_128 = b_128;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_30, not_null(a_128));
        t = set_config_0(t);
      }
    }
    t = y_29;
    {
      ATerm d_128 = NULL;
      d_128 = t;
      if(((c_128 != NULL) && (c_128 != d_128)))
        _fail(d_128);
      else
        c_128 = d_128;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(c_128));
    }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = term_b_30;
    return(t);
  }
  t = ArgOption_3(t, u_5, v_5, w_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm d_30 = t;
  int e_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(e_30);
    }
  else
    {
      t = d_30;
      {
        ATerm g_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(h_30);
          }
        else
          {
            t = g_30;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm h_128 = NULL;
  t = report_run_time_0(t);
  {
    ATerm i_128 = NULL;
    t = term_v_18;
    {
      t = whoami_0(t);
      {
        i_128 = t;
        if(((h_128 != NULL) && (h_128 != i_128)))
          _fail(i_128);
        else
          h_128 = i_128;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_8, (ATerm) ATinsert(ATinsert(ATempty, term_r_30), not_null(h_128)));
      {
        t = printnl_0(t);
        {
          t = term_w_8;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_s_30;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm l_128 = NULL;
  l_128 = t;
  t = SSL_TicksToSeconds(not_null(l_128));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm q_128 = NULL,r_128 = NULL,s_128 = NULL;
  q_128 = t;
  p_128 :
  if(match_cons(q_128, sym__2))
    {
      r_128 = ATgetArgument(q_128, 0);
      s_128 = ATgetArgument(q_128, 1);
      {
        ATerm t_30 = t;
        int u_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(r_128), not_null(s_128));
            ;
            LocalPopChoice(u_30);
          }
        else
          {
            t = t_30;
            t = SSL_addr(not_null(r_128), not_null(s_128));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm e_115 (ATerm), ATerm f_115 (ATerm))
{
  ATerm v_30 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_115(t);
      ;
      LocalPopChoice(g_31);
    }
  else
    {
      t = v_30;
      {
        ATerm z_128 = NULL,a_129 = NULL,b_129 = NULL;
        z_128 = t;
        y_128 :
        if(((ATgetType(z_128) == AT_LIST) && !(ATisEmpty(z_128))))
          {
            a_129 = ATgetFirst((ATermList) z_128);
            b_129 = (ATerm) ATgetNext((ATermList) z_128);
            {
              ATerm e_129 = NULL;
              ATerm f_129 = NULL;
              t = not_null(b_129);
              {
                t = foldr_2(t, e_115, f_115);
                {
                  f_129 = t;
                  if(((e_129 != NULL) && (e_129 != f_129)))
                    _fail(f_129);
                  else
                    e_129 = f_129;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_129), not_null(e_129));
                t = f_115(t);
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
ATerm crush_2 (ATerm t, ATerm c_113 (ATerm), ATerm d_113 (ATerm))
{
  ATerm t_129 = NULL;
  ATerm z_129 = NULL;
  t_129 = t;
  {
    ATerm a_130 = NULL;
    ATerm c_130 = NULL,d_130 = NULL,f_130 = NULL;
    t = not_null(t_129);
    {
      a_130 = t;
      {
        t = SSL_explode_term(not_null(a_130));
        {
          c_130 = t;
          s_129 :
          if(match_cons(c_130, sym__2))
            {
              d_130 = ATgetArgument(c_130, 0);
              f_130 = ATgetArgument(c_130, 1);
              if(((z_129 != NULL) && (z_129 != f_130)))
                _fail(f_130);
              else
                z_129 = f_130;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_129);
      t = foldr_2(t, c_113, d_113);
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
    ATerm x_5 (ATerm t)
    {
      t = term_h_22;
      return(t);
    }
    t = crush_2(t, x_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm p_130 = NULL,q_130 = NULL,r_130 = NULL;
  p_130 = t;
  o_130 :
  if(match_cons(p_130, sym__2))
    {
      q_130 = ATgetArgument(p_130, 0);
      r_130 = ATgetArgument(p_130, 1);
      {
        ATerm h_31;
        h_31 = t;
        {
          ATerm m_31 = t;
          int n_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(q_130), not_null(r_130));
              ;
              LocalPopChoice(n_31);
            }
          else
            {
              t = m_31;
              t = SSL_gtr(not_null(q_130), not_null(r_130));
            }
        }
        t = h_31;
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
  ATerm x_130 = NULL;
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_130 = NULL,z_130 = NULL,a_131 = NULL;
      y_130 = t;
      w_130 :
      if(match_cons(y_130, sym__2))
        {
          z_130 = ATgetArgument(y_130, 0);
          a_131 = ATgetArgument(y_130, 1);
          {
            if(((x_130 != NULL) && (x_130 != z_130)))
              _fail(z_130);
            else
              x_130 = z_130;
            if(((x_130 != NULL) && (x_130 != a_131)))
              _fail(a_131);
            else
              x_130 = a_131;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm h_127 (ATerm))
{
  ATerm y_5 (ATerm t)
  {
    ATerm w_31;
    w_31 = t;
    {
      ATerm d_131 = NULL;
      ATerm f_131 = NULL;
      t = term_w_25;
      {
        t = get_config_0(t);
        {
          f_131 = t;
          if(((d_131 != NULL) && (d_131 != f_131)))
            _fail(f_131);
          else
            d_131 = f_131;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_131), term_w_8);
        t = geq_0(t);
      }
    }
    t = w_31;
    t = h_127(t);
    return(t);
  }
  t = try_1(t, y_5);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm j_131 = NULL,l_131 = NULL;
    ATerm b_32;
    b_32 = t;
    {
      ATerm k_131 = NULL;
      t = run_time_0(t);
      {
        k_131 = t;
        if(((j_131 != NULL) && (j_131 != k_131)))
          _fail(k_131);
        else
          j_131 = k_131;
      }
    }
    t = b_32;
    {
      ATerm m_131 = NULL;
      t = term_v_18;
      {
        t = whoami_0(t);
        {
          m_131 = t;
          if(((l_131 != NULL) && (l_131 != m_131)))
            _fail(m_131);
          else
            l_131 = m_131;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_32), not_null(j_131)), term_i_32), not_null(l_131)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, z_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_h_22;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_131 = NULL;
  t_131 = t;
  s_131 :
  if(match_cons(t_131, sym_Version_0))
    {
      ATerm v_131 = NULL,x_131 = NULL;
      ATerm p_32;
      p_32 = t;
      {
        ATerm w_131 = NULL;
        t = SSLgetAnnotations(not_null(t_131));
        {
          w_131 = t;
          if(((v_131 != NULL) && (v_131 != w_131)))
            _fail(w_131);
          else
            v_131 = w_131;
        }
      }
      t = p_32;
      {
        ATerm y_131 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(v_131));
        {
          y_131 = t;
          if(((x_131 != NULL) && (x_131 != y_131)))
            _fail(y_131);
          else
            x_131 = y_131;
        }
        t = not_null(x_131);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm e_130 (ATerm))
{
  ATerm q_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_32;
      t = get_config_0(t);
      ;
      LocalPopChoice(r_32);
    }
  else
    {
      t = q_32;
      {
        ATerm a_6 (ATerm t)
        {
          ATerm t_32 = t;
          int u_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(u_32);
            }
          else
            {
              t = t_32;
              {
                ATerm v_32 = t;
                int w_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(w_32);
                  }
                else
                  {
                    t = v_32;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, a_6);
      }
    }
  t = e_130(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm d_132 = NULL;
  d_132 = t;
  t = SSL_table_create(not_null(d_132));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm n_132 = NULL;
  n_132 = t;
  {
    ATerm x_32;
    x_32 = t;
    {
      t = term_y_32;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_32, term_z_32, not_null(n_132));
          t = table_put_0(t);
        }
      }
    }
    t = x_32;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm r_132 = NULL;
  r_132 = t;
  t = SSL_table_destroy(not_null(r_132));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm v_132 = NULL;
  v_132 = t;
  t = SSL_exit(not_null(v_132));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm f_132 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_110 (ATerm))
{
  ATerm b_133 (ATerm t)
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        t = Cons_2(t, q_110, b_133);
      }
    return(t);
  }
  t = b_133(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm i_133 = NULL,j_133 = NULL,k_133 = NULL;
  k_133 = t;
  h_133 :
  if(((ATgetType(k_133) == AT_LIST) && !(ATisEmpty(k_133))))
    {
      i_133 = ATgetFirst((ATermList) k_133);
      j_133 = (ATerm) ATgetNext((ATermList) k_133);
      {
        ATerm s_133 = NULL;
        t = not_null(j_133);
        {
          ATerm c_33;
          c_33 = t;
          {
            ATerm t_133 = NULL,v_133 = NULL,x_133 = NULL;
            ATerm d_33;
            d_33 = t;
            {
              ATerm u_133 = NULL;
              t = i_0(t);
              {
                u_133 = t;
                if(((t_133 != NULL) && (t_133 != u_133)))
                  _fail(u_133);
                else
                  t_133 = u_133;
              }
            }
            t = d_33;
            {
              ATerm w_133 = NULL;
              t = not_null(i_133);
              {
                t = g_0(t);
                {
                  w_133 = t;
                  if(((v_133 != NULL) && (v_133 != w_133)))
                    _fail(w_133);
                  else
                    v_133 = w_133;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(t_133)), not_null(v_133));
                {
                  x_133 = t;
                  if(((s_133 != NULL) && (s_133 != x_133)))
                    _fail(x_133);
                  else
                    s_133 = x_133;
                }
              }
            }
          }
          t = c_33;
          {
            ATerm b_6 (ATerm t)
            {
              t = not_null(s_133);
              return(t);
            }
            t = reverse_acc_2(t, g_0, b_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(k_133) == AT_LIST) && ATisEmpty(k_133)))
        {
          {
            t = term_v_18;
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
  ATerm c_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, c_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm e_132 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_101 (ATerm))
{
  ATerm i_134 = NULL,j_134 = NULL;
  i_134 = t;
  h_134 :
  if(match_cons(i_134, sym_Program_1))
    {
      j_134 = ATgetArgument(i_134, 0);
      {
        ATerm m_134 = NULL,o_134 = NULL;
        ATerm n_134 = NULL;
        t = SSLgetAnnotations(not_null(i_134));
        {
          n_134 = t;
          if(((m_134 != NULL) && (m_134 != n_134)))
            _fail(n_134);
          else
            m_134 = n_134;
        }
        {
          t = not_null(j_134);
          {
            ATerm q_134 = NULL;
            t = w_101(t);
            {
              o_134 = t;
              {
                ATerm r_134 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(o_134)), not_null(m_134));
                {
                  r_134 = t;
                  if(((q_134 != NULL) && (q_134 != r_134)))
                    _fail(r_134);
                  else
                    q_134 = r_134;
                }
                t = not_null(q_134);
              }
            }
          }
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
  ATerm a_135 = NULL;
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_135 = NULL;
      t = term_s_30;
      {
        t = get_config_0(t);
        {
          b_135 = t;
          if(((a_135 != NULL) && (a_135 != b_135)))
            _fail(b_135);
          else
            a_135 = b_135;
        }
      }
      ;
      LocalPopChoice(k_33);
    }
  else
    {
      t = j_33;
      {
        ATerm d_6 (ATerm t)
        {
          ATerm e_6 (ATerm t)
          {
            ATerm c_135 = NULL;
            c_135 = t;
            if(((a_135 != NULL) && (a_135 != c_135)))
              _fail(c_135);
            else
              a_135 = c_135;
            return(t);
          }
          t = Program_1(t, e_6);
          return(t);
        }
        t = option_defined_1(t, d_6);
      }
    }
  {
    ATerm f_6 (ATerm t)
    {
      ATerm g_6 (ATerm t)
      {
        t = not_null(a_135);
        return(t);
      }
      t = short_description_1(t, g_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, f_6);
    {
      t = term_l_33;
      {
        t = echo_0(t);
        {
          t = term_v_33;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm h_6 (ATerm t)
                {
                  ATerm d_135 = NULL;
                  ATerm e_135 = NULL;
                  e_135 = t;
                  if(((d_135 != NULL) && (d_135 != e_135)))
                    _fail(e_135);
                  else
                    d_135 = e_135;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_135)), term_w_33);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, h_6);
                {
                  ATerm i_6 (ATerm t)
                  {
                    ATerm f_135 = NULL;
                    ATerm g_135 = NULL;
                    ATerm j_6 (ATerm t)
                    {
                      t = not_null(a_135);
                      return(t);
                    }
                    t = long_description_1(t, j_6);
                    {
                      g_135 = t;
                      if(((f_135 != NULL) && (f_135 != g_135)))
                        _fail(g_135);
                      else
                        f_135 = g_135;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(f_135)), term_z_33);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, i_6);
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
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(b_34);
    }
  else
    {
      t = a_34;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_101 (ATerm))
{
  ATerm q_135 = NULL,r_135 = NULL;
  q_135 = t;
  p_135 :
  if(match_cons(q_135, sym_Undefined_1))
    {
      r_135 = ATgetArgument(q_135, 0);
      {
        ATerm u_135 = NULL,w_135 = NULL;
        ATerm v_135 = NULL;
        t = SSLgetAnnotations(not_null(q_135));
        {
          v_135 = t;
          if(((u_135 != NULL) && (u_135 != v_135)))
            _fail(v_135);
          else
            u_135 = v_135;
        }
        {
          t = not_null(r_135);
          {
            ATerm y_135 = NULL;
            t = x_101(t);
            {
              w_135 = t;
              {
                ATerm z_135 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_135)), not_null(u_135));
                {
                  z_135 = t;
                  if(((y_135 != NULL) && (y_135 != z_135)))
                    _fail(z_135);
                  else
                    y_135 = z_135;
                }
                t = not_null(y_135);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm a_111 (ATerm))
{
  ATerm e_136 (ATerm t)
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_111, _id);
        ;
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        t = Cons_2(t, _id, e_136);
      }
    return(t);
  }
  t = e_136(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_131 (ATerm))
{
  t = fetch_1(t, e_131);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm g_136 = NULL,h_136 = NULL,i_136 = NULL;
  g_136 = t;
  f_136 :
  if(((ATgetType(g_136) == AT_LIST) && ATisEmpty(g_136)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(g_136) == AT_LIST) && !(ATisEmpty(g_136))))
        {
          h_136 = ATgetFirst((ATermList) g_136);
          i_136 = (ATerm) ATgetNext((ATermList) g_136);
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
  ATerm e_34;
  e_34 = t;
  {
    ATerm l_136 = NULL;
    ATerm o_136 = NULL;
    ATerm f_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(g_34);
      }
    else
      {
        t = f_34;
        {
          ATerm m_136 = NULL;
          ATerm n_136 = NULL;
          n_136 = t;
          if(((m_136 != NULL) && (m_136 != n_136)))
            _fail(n_136);
          else
            m_136 = n_136;
          t = (ATerm) ATinsert(ATempty, not_null(m_136));
        }
      }
    {
      o_136 = t;
      if(((l_136 != NULL) && (l_136 != o_136)))
        _fail(o_136);
      else
        l_136 = o_136;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_26, not_null(l_136));
      t = printnl_0(t);
    }
  }
  t = e_34;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_s_30;
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
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(i_34);
    }
  else
    {
      t = h_34;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm v_136 = NULL;
  v_136 = t;
  u_136 :
  if(match_cons(v_136, sym_Help_0))
    {
      ATerm x_136 = NULL,z_136 = NULL;
      ATerm j_34;
      j_34 = t;
      {
        ATerm y_136 = NULL;
        t = SSLgetAnnotations(not_null(v_136));
        {
          y_136 = t;
          if(((x_136 != NULL) && (x_136 != y_136)))
            _fail(y_136);
          else
            x_136 = y_136;
        }
      }
      t = j_34;
      {
        ATerm a_137 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(x_136));
        {
          a_137 = t;
          if(((z_136 != NULL) && (z_136 != a_137)))
            _fail(a_137);
          else
            z_136 = a_137;
        }
        t = not_null(z_136);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm h_107 (ATerm))
{
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_107(t);
      ;
      LocalPopChoice(m_34);
    }
  else
    {
      t = l_34;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm n_34 = t;
  int o_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_6 (ATerm t)
      {
        ATerm g_137 = NULL;
        g_137 = t;
        e_137 :
        if(!(match_string(g_137, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm l_6 (ATerm t)
      {
        t = term_v_34;
        t = set_config_0(t);
        return(t);
      }
      ATerm m_6 (ATerm t)
      {
        t = term_w_34;
        return(t);
      }
      t = Option_3(t, k_6, l_6, m_6);
      ;
      LocalPopChoice(o_34);
    }
  else
    {
      t = n_34;
      {
        ATerm n_6 (ATerm t)
        {
          ATerm h_137 = NULL;
          h_137 = t;
          f_137 :
          if(!(match_string(h_137, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm o_6 (ATerm t)
        {
          t = term_v_34;
          {
            t = set_config_0(t);
            {
              t = term_p_35;
              t = set_config_0(t);
            }
          }
          t = term_b_36;
          return(t);
        }
        ATerm p_6 (ATerm t)
        {
          t = term_c_36;
          return(t);
        }
        t = Option_3(t, n_6, o_6, p_6);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_137 = NULL,l_137 = NULL,m_137 = NULL;
  k_137 = t;
  j_137 :
  if(match_cons(k_137, sym__2))
    {
      l_137 = ATgetArgument(k_137, 0);
      m_137 = ATgetArgument(k_137, 1);
      t = SSL_table_get(not_null(l_137), not_null(m_137));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_137 = NULL,u_137 = NULL,v_137 = NULL,w_137 = NULL;
  t_137 = t;
  s_137 :
  if(match_cons(t_137, sym__3))
    {
      u_137 = ATgetArgument(t_137, 0);
      v_137 = ATgetArgument(t_137, 1);
      w_137 = ATgetArgument(t_137, 2);
      {
        ATerm d_36;
        d_36 = t;
        {
          ATerm a_138 = NULL;
          ATerm b_138 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_137), not_null(v_137));
          {
            ATerm e_36 = t;
            int f_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(f_36);
              }
            else
              {
                t = e_36;
                t = (ATerm) ATempty;
              }
            {
              b_138 = t;
              if(((a_138 != NULL) && (a_138 != b_138)))
                _fail(b_138);
              else
                a_138 = b_138;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_137), not_null(v_137), (ATerm) ATinsert(CheckATermList(not_null(a_138)), not_null(w_137)));
            t = table_put_0(t);
          }
        }
        t = d_36;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm j_132 (ATerm))
{
  ATerm f_138 = NULL;
  ATerm g_138 = NULL;
  t = term_v_18;
  {
    t = j_132(t);
    {
      g_138 = t;
      if(((f_138 != NULL) && (f_138 != g_138)))
        _fail(g_138);
      else
        f_138 = g_138;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_33, term_u_33, not_null(f_138));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm m_138 = NULL,n_138 = NULL,o_138 = NULL;
  m_138 = t;
  l_138 :
  if(match_string(m_138, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(m_138) == AT_LIST) && !(ATisEmpty(m_138))))
        {
          n_138 = ATgetFirst((ATermList) m_138);
          o_138 = (ATerm) ATgetNext((ATermList) m_138);
          {
            ATerm r_138 = NULL;
            ATerm g_36;
            g_36 = t;
            {
              t = not_null(n_138);
              t = a_0(t);
            }
            t = g_36;
            {
              ATerm s_138 = NULL;
              t = term_v_18;
              {
                t = b_0(t);
                {
                  s_138 = t;
                  if(((r_138 != NULL) && (r_138 != s_138)))
                    _fail(s_138);
                  else
                    r_138 = s_138;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(o_138)), not_null(r_138));
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
  ATerm q_6 (ATerm t)
  {
    ATerm x_138 = NULL;
    x_138 = t;
    w_138 :
    if(!(match_string(x_138, "--help")))
      {
        if(!(match_string(x_138, "-h")))
          {
            if(!(match_string(x_138, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm r_6 (ATerm t)
  {
    t = term_h_36;
    {
      t = set_config_0(t);
      t = term_i_36;
    }
    return(t);
  }
  ATerm s_6 (ATerm t)
  {
    t = term_j_36;
    return(t);
  }
  t = Option_3(t, q_6, r_6, s_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm a_139 = NULL,b_139 = NULL,c_139 = NULL;
  a_139 = t;
  z_138 :
  if(((ATgetType(a_139) == AT_LIST) && !(ATisEmpty(a_139))))
    {
      b_139 = ATgetFirst((ATermList) a_139);
      c_139 = (ATerm) ATgetNext((ATermList) a_139);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_139)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_139)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm i_139 = NULL,j_139 = NULL,k_139 = NULL;
  i_139 = t;
  h_139 :
  if(match_cons(i_139, sym__2))
    {
      j_139 = ATgetArgument(i_139, 0);
      k_139 = ATgetArgument(i_139, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_25, not_null(j_139), not_null(k_139));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm h_132 (ATerm))
{
  ATerm k_36;
  k_36 = t;
  {
    ATerm t_6 (ATerm t)
    {
      t = term_l_36;
      t = h_132(t);
      return(t);
    }
    t = try_1(t, t_6);
  }
  t = k_36;
  {
    ATerm u_6 (ATerm t)
    {
      ATerm s_139 = NULL;
      ATerm m_36;
      m_36 = t;
      {
        ATerm q_139 = NULL;
        ATerm r_139 = NULL;
        r_139 = t;
        if(((q_139 != NULL) && (q_139 != r_139)))
          _fail(r_139);
        else
          q_139 = r_139;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_30, not_null(q_139));
          t = set_config_0(t);
        }
      }
      t = m_36;
      {
        ATerm t_139 = NULL;
        t_139 = t;
        if(((s_139 != NULL) && (s_139 != t_139)))
          _fail(t_139);
        else
          s_139 = t_139;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_139));
      }
      return(t);
    }
    ATerm x_6 (ATerm t)
    {
      ATerm n_36 = t;
      int o_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_36 = t;
          int q_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(q_36);
            }
          else
            {
              t = p_36;
              {
                t = h_132(t);
                t = Cons_2(t, _id, x_6);
              }
            }
          ;
          LocalPopChoice(o_36);
        }
      else
        {
          t = n_36;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, u_6, x_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm z_139 = NULL,a_140 = NULL,b_140 = NULL;
  ATerm r_36;
  r_36 = t;
  {
    ATerm c_140 = NULL,d_140 = NULL,e_140 = NULL,f_140 = NULL;
    c_140 = t;
    y_139 :
    if(match_cons(c_140, sym__3))
      {
        d_140 = ATgetArgument(c_140, 0);
        e_140 = ATgetArgument(c_140, 1);
        f_140 = ATgetArgument(c_140, 2);
        {
          if(((z_139 != NULL) && (z_139 != d_140)))
            _fail(d_140);
          else
            z_139 = d_140;
          {
            if(((a_140 != NULL) && (a_140 != e_140)))
              _fail(e_140);
            else
              a_140 = e_140;
            {
              if(((b_140 != NULL) && (b_140 != f_140)))
                _fail(f_140);
              else
                b_140 = f_140;
              t = SSL_table_put(not_null(z_139), not_null(a_140), not_null(b_140));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = r_36;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm g_132 (ATerm))
{
  ATerm i_140 = NULL;
  ATerm s_36;
  s_36 = t;
  {
    t = term_t_36;
    t = table_put_0(t);
  }
  t = s_36;
  {
    ATerm y_6 (ATerm t)
    {
      ATerm v_36 = t;
      int w_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_132(t);
          ;
          LocalPopChoice(w_36);
        }
      else
        {
          t = v_36;
          {
            ATerm x_36 = t;
            int z_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(z_36);
              }
            else
              {
                t = x_36;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, y_6);
    {
      ATerm z_6 (ATerm t)
      {
        ATerm a_37 = t;
        int b_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_37;
            c_37 = t;
            {
              ATerm d_37 = t;
              int e_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_s_32;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(e_37);
                }
              else
                {
                  t = d_37;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = c_37;
            {
              t = system_usage_0(t);
              {
                t = term_h_22;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(b_37);
          }
        else
          {
            t = a_37;
            {
              ATerm f_37 = t;
              int h_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_37;
                  l_37 = t;
                  {
                    t = term_q_34;
                    t = get_config_0(t);
                  }
                  t = l_37;
                  {
                    t = system_about_0(t);
                    {
                      t = term_h_22;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(h_37);
                }
              else
                {
                  t = f_37;
                  {
                    ATerm a_7 (ATerm t)
                    {
                      ATerm b_7 (ATerm t)
                      {
                        ATerm j_140 = NULL;
                        j_140 = t;
                        if(((i_140 != NULL) && (i_140 != j_140)))
                          _fail(j_140);
                        else
                          i_140 = j_140;
                        return(t);
                      }
                      t = Undefined_1(t, b_7);
                      return(t);
                    }
                    t = option_defined_1(t, a_7);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_z_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_140)), term_v_37));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_w_8;
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
      t = try_1(t, z_6);
      {
        ATerm w_37;
        w_37 = t;
        {
          t = term_m_33;
          t = table_destroy_0(t);
        }
        t = w_37;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm g_130 (ATerm), ATerm h_130 (ATerm), ATerm i_130 (ATerm), ATerm j_130 (ATerm))
{
  t = parse_options_1(t, g_130);
  {
    t = store_options_0(t);
    {
      t = i_130(t);
      {
        ATerm x_37 = t;
        int y_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, h_130);
            ;
            LocalPopChoice(y_37);
          }
        else
          {
            t = x_37;
            {
              ATerm z_37 = t;
              int a_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_130(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(a_38);
                }
              else
                {
                  t = z_37;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm v_129 (ATerm), ATerm w_129 (ATerm), ATerm x_129 (ATerm), ATerm y_129 (ATerm))
{
  ATerm c_7 (ATerm t)
  {
    ATerm b_38 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_129(t);
        ;
        LocalPopChoice(c_38);
      }
    else
      {
        t = b_38;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm d_7 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, v_129);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, c_7, x_129, y_129, d_7);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm p_129 (ATerm), ATerm q_129 (ATerm), ATerm r_129 (ATerm))
{
  ATerm e_7 (ATerm t)
  {
    ATerm f_7 (ATerm t)
    {
      ATerm d_38;
      d_38 = t;
      {
        ATerm m_140 = NULL;
        ATerm n_140 = NULL;
        t = term_s_30;
        {
          t = get_config_0(t);
          {
            n_140 = t;
            if(((m_140 != NULL) && (m_140 != n_140)))
              _fail(n_140);
            else
              m_140 = n_140;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_8, (ATerm) ATinsert(ATempty, not_null(m_140)));
          t = printnl_0(t);
        }
      }
      t = d_38;
      return(t);
    }
    t = if_verbose2_1(t, f_7);
    return(t);
  }
  t = iowrap_4(t, p_129, q_129, r_129, e_7);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm n_129 (ATerm), ATerm o_129 (ATerm))
{
  t = iowrap_3(t, n_129, o_129, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm k_129 (ATerm))
{
  ATerm g_7 (ATerm t)
  {
    t = _2(t, _id, k_129);
    return(t);
  }
  t = iowrap_2(t, g_7, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm h_7 (ATerm t)
  {
    ATerm i_7 (ATerm t)
    {
      ATerm j_7 (ATerm t)
      {
        ATerm k_7 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, k_7, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, j_7);
      return(t);
    }
    t = Specification_1(t, i_7);
    t = needed_constructors_0(t);
    return(t);
  }
  t = iowrap_1(t, h_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_0(t);
  return(t);
}
