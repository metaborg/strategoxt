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
ATerm term_h_50;
ATerm term_f_49;
ATerm term_t_48;
ATerm term_n_48;
ATerm term_i_48;
ATerm term_a_48;
ATerm term_v_47;
ATerm term_c_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_z_46;
ATerm term_y_46;
ATerm term_x_46;
ATerm term_c_46;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_n_44;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_k_39;
ATerm term_d_39;
ATerm term_b_39;
ATerm term_f_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_q_37;
ATerm term_o_37;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_f_35;
ATerm term_g_33;
ATerm term_d_33;
ATerm term_x_32;
ATerm term_u_32;
ATerm term_b_32;
ATerm term_h_27;
ATerm term_f_27;
ATerm term_y_26;
ATerm term_r_20;
ATerm term_z_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_m_19;
ATerm term_t_15;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_b_12;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_k_8;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_i_7;
void init_constant_terms (void)
{
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r_1", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_7);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Op_2, term_m_19, (ATerm) ATempty);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_ConstType_1, term_v_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym__2, term_d_33, term_d_33);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_l_35);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(sym__2, term_u_37, term_d_33);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_33);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(sym__2, term_j_40, term_y_26);
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(sym__2, term_z_41, term_y_26);
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(sym__2, term_f_45, term_g_45);
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(sym__2, term_x_46, term_y_26);
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(sym__2, term_a_47, term_y_26);
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(sym__2, term_n_44, term_y_26);
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(sym__3, term_f_45, term_g_45, (ATerm) ATempty);
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm ConstructorNeeded_0_0 (ATerm);
ATerm filter_1_0 (ATerm e_116 (ATerm), ATerm);
ATerm Constructors_1_0 (ATerm k_89 (ATerm), ATerm);
ATerm DeclareConstructorNeeded_0_0 (ATerm);
ATerm needed_constructors_0_0 (ATerm);
ATerm Nil_0_0 (ATerm);
ATerm MissingDef_0_0 (ATerm);
ATerm MissingDefMod_0_0 (ATerm);
ATerm MissingDefs_0_0 (ATerm);
ATerm NoMissingDefs_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm error_0_0 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm Rec_2_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm o_95 (ATerm), ATerm p_95 (ATerm), ATerm q_95 (ATerm), ATerm r_95 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm l_95 (ATerm), ATerm m_95 (ATerm), ATerm n_95 (ATerm), ATerm);
ATerm Let_2_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm Bind3_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm crush_3_0 (ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm);
ATerm free_vars2_4_0 (ATerm l_118 (ATerm), ATerm m_118 (ATerm), ATerm n_118 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_118 (ATerm), ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm Snd_0_0 (ATerm);
ATerm choices_0_0 (ATerm);
ATerm IsVar_0_0 (ATerm);
ATerm tsubs_0_0 (ATerm);
ATerm IsSVar_0_0 (ATerm);
ATerm Look2_0_0 (ATerm);
ATerm Look1_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm SubsVar_2_0 (ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm);
ATerm alltd_1_0 (ATerm s_105 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm);
ATerm substitute_1_0 (ATerm l_103 (ATerm), ATerm);
ATerm ssubs_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm h_95 (ATerm), ATerm i_95 (ATerm), ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm JoinDefs1_0_0 (ATerm);
ATerm joindefs_0_0 (ATerm);
ATerm OverloadedDef_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm Mapp1_0_0 (ATerm);
ATerm Mapp0_0_0 (ATerm);
ATerm Mapp_0_0 (ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm Bapp1_0_0 (ATerm);
ATerm As_2_0 (ATerm d_90 (ATerm), ATerm e_90 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm c_94 (ATerm), ATerm d_94 (ATerm), ATerm e_94 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm);
ATerm Op_2_0 (ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm c_133 (ATerm), ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm MkConstType_0_0 (ATerm);
ATerm MkFunType_0_0 (ATerm);
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm UnZip2_0_0 (ATerm);
ATerm UnZip3_0_0 (ATerm);
ATerm UnZip1_0_0 (ATerm);
ATerm unzip_1_0 (ATerm w_108 (ATerm), ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm o_0 (ATerm), ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm k_120 (ATerm), ATerm);
ATerm Wld_0_0 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm);
ATerm Con_3_0 (ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Scope_2_0 (ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm e_105 (ATerm), ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm a_104 (ATerm), ATerm);
ATerm desugar_0_0 (ATerm);
ATerm _0_0 (ATerm);
ATerm Ttl_0_0 (ATerm);
ATerm Thd_0_0 (ATerm);
ATerm tuple_unzip_1_0 (ATerm c_108 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm subt_0_0 (ATerm);
ATerm copy_1_0 (ATerm e_115 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm MkThreadApplication_0_0 (ATerm);
ATerm Zip1b_p__0_0 (ATerm);
ATerm zipr_1_0 (ATerm u_108 (ATerm), ATerm);
ATerm Tl_0_0 (ATerm);
ATerm Last_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm CongruenceDef_0_0 (ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm GnUndefined_0_0 (ATerm);
ATerm diff_1_0 (ATerm y_111 (ATerm), ATerm);
ATerm UfShift_0_0 (ATerm);
ATerm Zip3_0_0 (ATerm);
ATerm Zip2_0_0 (ATerm);
ATerm Zip1_0_0 (ATerm);
ATerm genzip_4_0 (ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm);
ATerm zip_1_0 (ATerm r_108 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm UfIdem_0_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm y_132 (ATerm), ATerm z_132 (ATerm), ATerm a_133 (ATerm), ATerm);
ATerm GnExit_0_0 (ATerm);
ATerm GnInitRoots_0_0 (ATerm);
ATerm while_not_2_0 (ATerm z_120 (ATerm), ATerm a_121 (ATerm), ATerm);
ATerm for_3_0 (ATerm c_121 (ATerm), ATerm d_121 (ATerm), ATerm e_121 (ATerm), ATerm);
ATerm graph_nodes_undef_roots_chgr_3_0 (ATerm j_132 (ATerm), ATerm k_132 (ATerm), ATerm l_132 (ATerm), ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm assert_1_0 (ATerm a_116 (ATerm), ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm);
ATerm union_1_0 (ATerm c_112 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm Arities_0_0 (ATerm);
ATerm Hd_0_0 (ATerm);
ATerm table_lookup_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm c_116 (ATerm), ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm foldr_3_0 (ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm);
ATerm length_0_0 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm sort_defs_0_0 (ATerm);
ATerm needed_defs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm n_88 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm s_88 (ATerm), ATerm);
ATerm _2_0 (ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm r_110 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm t_126 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm p_125 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm r_128 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm b_125 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm);
ATerm crush_2_0 (ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_126 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm p_129 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm q_131 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_110 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm p_131 (ATerm), ATerm);
ATerm Program_1_0 (ATerm h_101 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm i_101 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm l_110 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm p_130 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm s_106 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm u_131 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm s_131 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm r_131 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm u_129 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm a_129 (ATerm), ATerm b_129 (ATerm), ATerm c_129 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm y_128 (ATerm), ATerm z_128 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm v_128 (ATerm), ATerm);
ATerm extract_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm ConstructorNeeded_0_0 (ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL,l_5 = NULL;
  ATerm f_7 (ATerm t)
  {
    ATerm m_5 = NULL,n_5 = NULL,p_6 = NULL;
    t = not_null(j_4);
    if(((m_5 != NULL) && (m_5 != t)))
      _fail(t);
    else
      m_5 = t;
    t = not_null(k_4);
    if(((p_6 != NULL) && (p_6 != t)))
      _fail(t);
    else
      p_6 = t;
    t = not_null(l_5);
    if(((n_5 != NULL) && (n_5 != t)))
      _fail(t);
    else
      n_5 = t;
    t = not_null(j_4);
    {
      ATerm q_6 = NULL,r_6 = NULL;
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, not_null(p_6), (ATerm) ATempty);
      {
        ATerm b_0 (ATerm t)
        {
          t = term_i_7;
          return(t);
        }
        t = rewrite_1_0(b_0, t);
        if(((q_6 != NULL) && (q_6 != t)))
          _fail(t);
        else
          q_6 = t;
        t = not_null(q_6);
        if(match_cons(t, sym_Defined_1))
          {
            r_6 = ATgetArgument(t, 0);
            t = not_null(r_6);
            if(match_string(t, "r_1"))
              {
                t = not_null(q_6);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, not_null(p_6), not_null(n_5));
    }
    return(t);
  }
  if(((j_4 != NULL) && (j_4 != t)))
    _fail(t);
  else
    j_4 = t;
  t = not_null(j_4);
  if(match_cons(t, sym_OpDecl_2))
    {
      k_4 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
      t = f_7(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm e_116 (ATerm), ATerm t)
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      {
        ATerm q_7 = t;
        int r_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_0 (ATerm t)
            {
              t = filter_1_0(e_116, t);
              return(t);
            }
            t = Cons_2_0(e_116, l_0, t);
            ;
            LocalPopChoice(r_7);
          }
        else
          {
            t = q_7;
            {
              ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
              ATerm p_7 (ATerm t)
              {
                ATerm o_7 = NULL;
                t = not_null(n_7);
                if(((o_7 != NULL) && (o_7 != t)))
                  _fail(t);
                else
                  o_7 = t;
                t = not_null(o_7);
                t = filter_1_0(e_116, t);
                return(t);
              }
              if(((l_7 != NULL) && (l_7 != t)))
                _fail(t);
              else
                l_7 = t;
              t = not_null(l_7);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_7 = ATgetFirst((ATermList) t);
                  n_7 = (ATerm) ATgetNext((ATermList) t);
                  t = p_7(t);
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
ATerm Constructors_1_0 (ATerm k_89 (ATerm), ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL;
  ATerm f_8 (ATerm t)
  {
    ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL,b_8 = NULL;
    ATerm h_8 (ATerm t)
    {
      ATerm c_8 = NULL,d_8 = NULL;
      t = not_null(b_8);
      if(((c_8 != NULL) && (c_8 != t)))
        _fail(t);
      else
        c_8 = t;
      t = not_null(b_8);
      {
        ATerm e_8 = NULL;
        ATerm i_8 (ATerm t)
        {
          t = not_null(e_8);
          if(((d_8 != NULL) && (d_8 != t)))
            _fail(t);
          else
            d_8 = t;
          t = not_null(e_8);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, not_null(c_8)), not_null(z_7));
        if(((e_8 != NULL) && (e_8 != t)))
          _fail(t);
        else
          e_8 = t;
        t = i_8(t);
        t = not_null(d_8);
      }
      return(t);
    }
    t = not_null(v_7);
    if(((x_7 != NULL) && (x_7 != t)))
      _fail(t);
    else
      x_7 = t;
    t = not_null(w_7);
    if(((y_7 != NULL) && (y_7 != t)))
      _fail(t);
    else
      y_7 = t;
    t = not_null(v_7);
    {
      ATerm a_8 = NULL;
      ATerm g_8 (ATerm t)
      {
        t = not_null(a_8);
        if(((z_7 != NULL) && (z_7 != t)))
          _fail(t);
        else
          z_7 = t;
        t = not_null(a_8);
        return(t);
      }
      t = SSLgetAnnotations(not_null(x_7));
      if(((a_8 != NULL) && (a_8 != t)))
        _fail(t);
      else
        a_8 = t;
      t = g_8(t);
      t = not_null(y_7);
      t = k_89(t);
      if(((b_8 != NULL) && (b_8 != t)))
        _fail(t);
      else
        b_8 = t;
      t = h_8(t);
    }
    return(t);
  }
  if(((v_7 != NULL) && (v_7 != t)))
    _fail(t);
  else
    v_7 = t;
  t = not_null(v_7);
  if(match_cons(t, sym_Constructors_1))
    {
      w_7 = ATgetArgument(t, 0);
      t = f_8(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL;
  ATerm p_8 (ATerm t)
  {
    ATerm o_8 = NULL;
    t = not_null(m_8);
    if(((o_8 != NULL) && (o_8 != t)))
      _fail(t);
    else
      o_8 = t;
    t = not_null(l_8);
    {
      ATerm s_7;
      s_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, not_null(o_8), (ATerm) ATempty), term_u_7);
      {
        ATerm p_0 (ATerm t)
        {
          t = term_i_7;
          return(t);
        }
        t = assert_1_0(p_0, t);
      }
      t = s_7;
    }
    return(t);
  }
  if(((l_8 != NULL) && (l_8 != t)))
    _fail(t);
  else
    l_8 = t;
  t = not_null(l_8);
  if(match_cons(t, sym_Op_2))
    {
      m_8 = ATgetArgument(t, 0);
      n_8 = ATgetArgument(t, 1);
      t = p_8(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm needed_constructors_0_0 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL;
  ATerm k_9 (ATerm t)
  {
    ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
    t = not_null(b_9);
    if(((g_9 != NULL) && (g_9 != t)))
      _fail(t);
    else
      g_9 = t;
    t = not_null(e_9);
    if(((h_9 != NULL) && (h_9 != t)))
      _fail(t);
    else
      h_9 = t;
    t = not_null(y_8);
    {
      ATerm j_9 = NULL;
      ATerm l_9 (ATerm t)
      {
        t = not_null(j_9);
        if(((i_9 != NULL) && (i_9 != t)))
          _fail(t);
        else
          i_9 = t;
        t = not_null(j_9);
        return(t);
      }
      t = not_null(h_9);
      {
        ATerm r_0 (ATerm t)
        {
          t = try_1_0(DeclareConstructorNeeded_0_0, t);
          return(t);
        }
        t = topdown_1_0(r_0, t);
        t = not_null(g_9);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm t_0 (ATerm t)
            {
              t = filter_1_0(ConstructorNeeded_0_0, t);
              return(t);
            }
            t = Constructors_1_0(t_0, t);
            return(t);
          }
          t = Cons_2_0(s_0, Nil_0_0, t);
          if(((j_9 != NULL) && (j_9 != t)))
            _fail(t);
          else
            j_9 = t;
          t = l_9(t);
        }
      }
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(h_9))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(i_9))));
    }
    return(t);
  }
  if(((y_8 != NULL) && (y_8 != t)))
    _fail(t);
  else
    y_8 = t;
  t = not_null(y_8);
  if(match_cons(t, sym_Specification_1))
    {
      z_8 = ATgetArgument(t, 0);
      t = not_null(z_8);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_9 = ATgetFirst((ATermList) t);
          c_9 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(a_9);
          if(match_cons(t, sym_Signature_1))
            {
              b_9 = ATgetArgument(t, 0);
              t = not_null(c_9);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_9 = ATgetFirst((ATermList) t);
                  f_9 = (ATerm) ATgetNext((ATermList) t);
                  t = not_null(d_9);
                  if(match_cons(t, sym_Strategies_1))
                    {
                      e_9 = ATgetArgument(t, 0);
                      t = not_null(f_9);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = k_9(t);
                        }
                      else
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
ATerm Nil_0_0 (ATerm t)
{
  ATerm q_9 = NULL;
  ATerm w_9 (ATerm t)
  {
    ATerm r_9 = NULL,s_9 = NULL,u_9 = NULL;
    t = not_null(q_9);
    if(((r_9 != NULL) && (r_9 != t)))
      _fail(t);
    else
      r_9 = t;
    t = not_null(q_9);
    {
      ATerm j_8;
      j_8 = t;
      {
        ATerm t_9 = NULL;
        ATerm x_9 (ATerm t)
        {
          t = not_null(t_9);
          if(((s_9 != NULL) && (s_9 != t)))
            _fail(t);
          else
            s_9 = t;
          t = not_null(t_9);
          return(t);
        }
        t = SSLgetAnnotations(not_null(r_9));
        if(((t_9 != NULL) && (t_9 != t)))
          _fail(t);
        else
          t_9 = t;
        t = x_9(t);
      }
      t = j_8;
      {
        ATerm v_9 = NULL;
        ATerm y_9 (ATerm t)
        {
          t = not_null(v_9);
          if(((u_9 != NULL) && (u_9 != t)))
            _fail(t);
          else
            u_9 = t;
          t = not_null(v_9);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(s_9));
        if(((v_9 != NULL) && (v_9 != t)))
          _fail(t);
        else
          v_9 = t;
        t = y_9(t);
        t = not_null(u_9);
      }
    }
    return(t);
  }
  if(((q_9 != NULL) && (q_9 != t)))
    _fail(t);
  else
    q_9 = t;
  t = not_null(q_9);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_9(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDef_0_0 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL;
  ATerm g_10 (ATerm t)
  {
    ATerm e_10 = NULL,f_10 = NULL;
    t = not_null(c_10);
    if(((e_10 != NULL) && (e_10 != t)))
      _fail(t);
    else
      e_10 = t;
    t = not_null(d_10);
    if(((f_10 != NULL) && (f_10 != t)))
      _fail(t);
    else
      f_10 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_8), not_null(f_10)), term_q_8), not_null(e_10)), term_k_8);
    t = error_0_0(t);
    return(t);
  }
  if(((b_10 != NULL) && (b_10 != t)))
    _fail(t);
  else
    b_10 = t;
  t = not_null(b_10);
  if(match_cons(t, sym__2))
    {
      c_10 = ATgetArgument(t, 0);
      d_10 = ATgetArgument(t, 1);
      t = g_10(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDefMod_0_0 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL;
  ATerm s_10 (ATerm t)
  {
    ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
    t = not_null(m_10);
    if(((p_10 != NULL) && (p_10 != t)))
      _fail(t);
    else
      p_10 = t;
    t = not_null(n_10);
    if(((q_10 != NULL) && (q_10 != t)))
      _fail(t);
    else
      q_10 = t;
    t = not_null(o_10);
    if(((r_10 != NULL) && (r_10 != t)))
      _fail(t);
    else
      r_10 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_8), not_null(r_10)), term_q_8), not_null(q_10)), term_s_8), not_null(p_10)), term_k_8);
    t = error_0_0(t);
    return(t);
  }
  if(((k_10 != NULL) && (k_10 != t)))
    _fail(t);
  else
    k_10 = t;
  t = not_null(k_10);
  if(match_cons(t, sym__2))
    {
      l_10 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
      t = not_null(l_10);
      if(match_cons(t, sym_Mod_2))
        {
          m_10 = ATgetArgument(t, 0);
          n_10 = ATgetArgument(t, 1);
          t = s_10(t);
        }
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
ATerm MissingDefs_0_0 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL;
  ATerm e_11 (ATerm t)
  {
    ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
    t = not_null(x_10);
    if(((b_11 != NULL) && (b_11 != t)))
      _fail(t);
    else
      b_11 = t;
    t = not_null(z_10);
    if(((c_11 != NULL) && (c_11 != t)))
      _fail(t);
    else
      c_11 = t;
    t = not_null(a_11);
    if(((d_11 != NULL) && (d_11 != t)))
      _fail(t);
    else
      d_11 = t;
    t = not_null(w_10);
    t = (ATerm) ATinsert(CheckATermList(not_null(d_11)), not_null(c_11));
    {
      ATerm u_0 (ATerm t)
      {
        ATerm t_8 = t;
        int u_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = MissingDefMod_0_0(t);
            ;
            LocalPopChoice(u_8);
          }
        else
          {
            t = t_8;
            t = MissingDef_0_0(t);
          }
        return(t);
      }
      t = map_1_0(u_0, t);
    }
    t = not_null(b_11);
    return(t);
  }
  if(((w_10 != NULL) && (w_10 != t)))
    _fail(t);
  else
    w_10 = t;
  t = not_null(w_10);
  if(match_cons(t, sym__2))
    {
      x_10 = ATgetArgument(t, 0);
      y_10 = ATgetArgument(t, 1);
      t = not_null(y_10);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_10 = ATgetFirst((ATermList) t);
          a_11 = (ATerm) ATgetNext((ATermList) t);
          t = e_11(t);
        }
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
ATerm NoMissingDefs_0_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
  ATerm m_11 (ATerm t)
  {
    ATerm l_11 = NULL;
    t = not_null(j_11);
    if(((l_11 != NULL) && (l_11 != t)))
      _fail(t);
    else
      l_11 = t;
    t = not_null(l_11);
    return(t);
  }
  if(((i_11 != NULL) && (i_11 != t)))
    _fail(t);
  else
    i_11 = t;
  t = not_null(i_11);
  if(match_cons(t, sym__2))
    {
      j_11 = ATgetArgument(t, 0);
      k_11 = ATgetArgument(t, 1);
      t = not_null(k_11);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = m_11(t);
        }
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
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm v_8;
  v_8 = t;
  t = error_0_0(t);
  t = term_w_8;
  t = exit_0_0(t);
  t = v_8;
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_x_8);
  t = fatal_error_0_0(t);
  return(t);
}
ATerm error_0_0 (ATerm t)
{
  ATerm m_9;
  m_9 = t;
  {
    ATerm o_11 = NULL;
    ATerm p_11 = NULL;
    ATerm q_11 (ATerm t)
    {
      t = not_null(p_11);
      if(((o_11 != NULL) && (o_11 != t)))
        _fail(t);
      else
        o_11 = t;
      t = not_null(p_11);
      return(t);
    }
    if(((p_11 != NULL) && (p_11 != t)))
      _fail(t);
    else
      p_11 = t;
    t = q_11(t);
    t = (ATerm) ATmakeAppl(sym__2, term_n_9, not_null(o_11));
    t = printnl_0_0(t);
  }
  t = m_9;
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
  ATerm d_13 (ATerm t)
  {
    ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
    ATerm f_13 (ATerm t)
    {
      t = not_null(n_12);
      {
        ATerm o_9 = t;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
              if(((s_12 != NULL) && (s_12 != t)))
                _fail(t);
              else
                s_12 = t;
              t = not_null(s_12);
              if(match_cons(t, sym__2))
                {
                  t_12 = ATgetArgument(t, 0);
                  u_12 = ATgetArgument(t, 1);
                  t = not_null(t_12);
                  if(match_int(t, 0))
                    {
                      t = not_null(u_12);
                      if(match_int(t, 0))
                        {
                          t = not_null(s_12);
                        }
                      else
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
            t = fetch_1_0(v_0, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = o_9;
          }
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_12)), term_p_9);
        t = error_0_0(t);
        t = giving_up_0_0(t);
      }
      return(t);
    }
    t = not_null(i_12);
    if(((m_12 != NULL) && (m_12 != t)))
      _fail(t);
    else
      m_12 = t;
    t = not_null(m_12);
    t = Arities_0_0(t);
    if(((n_12 != NULL) && (n_12 != t)))
      _fail(t);
    else
      n_12 = t;
    t = not_null(n_12);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_12 = ATgetFirst((ATermList) t);
        p_12 = (ATerm) ATgetNext((ATermList) t);
        t = not_null(p_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_12 = ATgetFirst((ATermList) t);
            r_12 = (ATerm) ATgetNext((ATermList) t);
            t = f_13(t);
          }
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
  ATerm e_13 (ATerm t)
  {
    ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
    t = not_null(i_12);
    if(((v_12 != NULL) && (v_12 != t)))
      _fail(t);
    else
      v_12 = t;
    t = not_null(h_12);
    {
      ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
      ATerm g_13 (ATerm t)
      {
        t = not_null(a_13);
        if(((w_12 != NULL) && (w_12 != t)))
          _fail(t);
        else
          w_12 = t;
        t = not_null(b_13);
        if(((x_12 != NULL) && (x_12 != t)))
          _fail(t);
        else
          x_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_12), (ATerm) ATmakeAppl(sym__2, not_null(w_12), not_null(x_12)));
        t = Definitions_0_0(t);
        return(t);
      }
      t = not_null(v_12);
      t = Arities_0_0(t);
      if(((y_12 != NULL) && (y_12 != t)))
        _fail(t);
      else
        y_12 = t;
      t = not_null(y_12);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_12 = ATgetFirst((ATermList) t);
          c_13 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(z_12);
          if(match_cons(t, sym__2))
            {
              a_13 = ATgetArgument(t, 0);
              b_13 = ATgetArgument(t, 1);
              t = not_null(c_13);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = g_13(t);
                }
              else
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
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_12), (ATerm) ATmakeAppl(sym__2, not_null(w_12), not_null(x_12)));
    }
    return(t);
  }
  if(((h_12 != NULL) && (h_12 != t)))
    _fail(t);
  else
    h_12 = t;
  t = not_null(h_12);
  if(match_cons(t, sym__2))
    {
      i_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
      t = not_null(j_12);
      if(match_cons(t, sym__2))
        {
          k_12 = ATgetArgument(t, 0);
          l_12 = ATgetArgument(t, 1);
          t = not_null(k_12);
          if(match_int(t, 0))
            {
              t = not_null(l_12);
              if(match_int(t, 0))
                {
                  ATerm z_9 = t;
                  int a_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = d_13(t);
                      ;
                      LocalPopChoice(a_10);
                    }
                  else
                    {
                      t = z_9;
                      t = e_13(t);
                    }
                }
              else
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
ATerm Rec_2_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
  ATerm b_14 (ATerm t)
  {
    ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,v_13 = NULL;
    ATerm d_14 (ATerm t)
    {
      ATerm w_13 = NULL,x_13 = NULL;
      ATerm e_14 (ATerm t)
      {
        ATerm y_13 = NULL,z_13 = NULL;
        t = not_null(x_13);
        if(((y_13 != NULL) && (y_13 != t)))
          _fail(t);
        else
          y_13 = t;
        t = not_null(x_13);
        {
          ATerm a_14 = NULL;
          ATerm f_14 (ATerm t)
          {
            t = not_null(a_14);
            if(((z_13 != NULL) && (z_13 != t)))
              _fail(t);
            else
              z_13 = t;
            t = not_null(a_14);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(w_13), not_null(y_13)), not_null(t_13));
          if(((a_14 != NULL) && (a_14 != t)))
            _fail(t);
          else
            a_14 = t;
          t = f_14(t);
          t = not_null(z_13);
        }
        return(t);
      }
      t = not_null(v_13);
      if(((w_13 != NULL) && (w_13 != t)))
        _fail(t);
      else
        w_13 = t;
      t = not_null(s_13);
      t = u_93(t);
      if(((x_13 != NULL) && (x_13 != t)))
        _fail(t);
      else
        x_13 = t;
      t = e_14(t);
      return(t);
    }
    t = not_null(n_13);
    if(((q_13 != NULL) && (q_13 != t)))
      _fail(t);
    else
      q_13 = t;
    t = not_null(o_13);
    if(((r_13 != NULL) && (r_13 != t)))
      _fail(t);
    else
      r_13 = t;
    t = not_null(p_13);
    if(((s_13 != NULL) && (s_13 != t)))
      _fail(t);
    else
      s_13 = t;
    t = not_null(n_13);
    {
      ATerm u_13 = NULL;
      ATerm c_14 (ATerm t)
      {
        t = not_null(u_13);
        if(((t_13 != NULL) && (t_13 != t)))
          _fail(t);
        else
          t_13 = t;
        t = not_null(u_13);
        return(t);
      }
      t = SSLgetAnnotations(not_null(q_13));
      if(((u_13 != NULL) && (u_13 != t)))
        _fail(t);
      else
        u_13 = t;
      t = c_14(t);
      t = not_null(r_13);
      t = t_93(t);
      if(((v_13 != NULL) && (v_13 != t)))
        _fail(t);
      else
        v_13 = t;
      t = d_14(t);
    }
    return(t);
  }
  if(((n_13 != NULL) && (n_13 != t)))
    _fail(t);
  else
    n_13 = t;
  t = not_null(n_13);
  if(match_cons(t, sym_Rec_2))
    {
      o_13 = ATgetArgument(t, 0);
      p_13 = ATgetArgument(t, 1);
      t = b_14(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm o_95 (ATerm), ATerm p_95 (ATerm), ATerm q_95 (ATerm), ATerm r_95 (ATerm), ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
  ATerm k_15 (ATerm t)
  {
    ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,a_15 = NULL;
    ATerm m_15 (ATerm t)
    {
      ATerm b_15 = NULL,c_15 = NULL;
      ATerm n_15 (ATerm t)
      {
        ATerm d_15 = NULL,e_15 = NULL;
        ATerm o_15 (ATerm t)
        {
          ATerm f_15 = NULL,g_15 = NULL;
          ATerm p_15 (ATerm t)
          {
            ATerm h_15 = NULL,i_15 = NULL;
            t = not_null(g_15);
            if(((h_15 != NULL) && (h_15 != t)))
              _fail(t);
            else
              h_15 = t;
            t = not_null(g_15);
            {
              ATerm j_15 = NULL;
              ATerm q_15 (ATerm t)
              {
                t = not_null(j_15);
                if(((i_15 != NULL) && (i_15 != t)))
                  _fail(t);
                else
                  i_15 = t;
                t = not_null(j_15);
                return(t);
              }
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(b_15), not_null(d_15), not_null(f_15), not_null(h_15)), not_null(y_14));
              if(((j_15 != NULL) && (j_15 != t)))
                _fail(t);
              else
                j_15 = t;
              t = q_15(t);
              t = not_null(i_15);
            }
            return(t);
          }
          t = not_null(e_15);
          if(((f_15 != NULL) && (f_15 != t)))
            _fail(t);
          else
            f_15 = t;
          t = not_null(x_14);
          t = r_95(t);
          if(((g_15 != NULL) && (g_15 != t)))
            _fail(t);
          else
            g_15 = t;
          t = p_15(t);
          return(t);
        }
        t = not_null(c_15);
        if(((d_15 != NULL) && (d_15 != t)))
          _fail(t);
        else
          d_15 = t;
        t = not_null(w_14);
        t = q_95(t);
        if(((e_15 != NULL) && (e_15 != t)))
          _fail(t);
        else
          e_15 = t;
        t = o_15(t);
        return(t);
      }
      t = not_null(a_15);
      if(((b_15 != NULL) && (b_15 != t)))
        _fail(t);
      else
        b_15 = t;
      t = not_null(v_14);
      t = p_95(t);
      if(((c_15 != NULL) && (c_15 != t)))
        _fail(t);
      else
        c_15 = t;
      t = n_15(t);
      return(t);
    }
    t = not_null(o_14);
    if(((t_14 != NULL) && (t_14 != t)))
      _fail(t);
    else
      t_14 = t;
    t = not_null(p_14);
    if(((u_14 != NULL) && (u_14 != t)))
      _fail(t);
    else
      u_14 = t;
    t = not_null(q_14);
    if(((v_14 != NULL) && (v_14 != t)))
      _fail(t);
    else
      v_14 = t;
    t = not_null(r_14);
    if(((w_14 != NULL) && (w_14 != t)))
      _fail(t);
    else
      w_14 = t;
    t = not_null(s_14);
    if(((x_14 != NULL) && (x_14 != t)))
      _fail(t);
    else
      x_14 = t;
    t = not_null(o_14);
    {
      ATerm z_14 = NULL;
      ATerm l_15 (ATerm t)
      {
        t = not_null(z_14);
        if(((y_14 != NULL) && (y_14 != t)))
          _fail(t);
        else
          y_14 = t;
        t = not_null(z_14);
        return(t);
      }
      t = SSLgetAnnotations(not_null(t_14));
      if(((z_14 != NULL) && (z_14 != t)))
        _fail(t);
      else
        z_14 = t;
      t = l_15(t);
      t = not_null(u_14);
      t = o_95(t);
      if(((a_15 != NULL) && (a_15 != t)))
        _fail(t);
      else
        a_15 = t;
      t = m_15(t);
    }
    return(t);
  }
  if(((o_14 != NULL) && (o_14 != t)))
    _fail(t);
  else
    o_14 = t;
  t = not_null(o_14);
  if(match_cons(t, sym_SDefT_4))
    {
      p_14 = ATgetArgument(t, 0);
      q_14 = ATgetArgument(t, 1);
      r_14 = ATgetArgument(t, 2);
      s_14 = ATgetArgument(t, 3);
      t = k_15(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_3_0 (ATerm l_95 (ATerm), ATerm m_95 (ATerm), ATerm n_95 (ATerm), ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
  ATerm q_16 (ATerm t)
  {
    ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,i_16 = NULL;
    ATerm s_16 (ATerm t)
    {
      ATerm j_16 = NULL,k_16 = NULL;
      ATerm t_16 (ATerm t)
      {
        ATerm l_16 = NULL,m_16 = NULL;
        ATerm u_16 (ATerm t)
        {
          ATerm n_16 = NULL,o_16 = NULL;
          t = not_null(m_16);
          if(((n_16 != NULL) && (n_16 != t)))
            _fail(t);
          else
            n_16 = t;
          t = not_null(m_16);
          {
            ATerm p_16 = NULL;
            ATerm v_16 (ATerm t)
            {
              t = not_null(p_16);
              if(((o_16 != NULL) && (o_16 != t)))
                _fail(t);
              else
                o_16 = t;
              t = not_null(p_16);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(j_16), not_null(l_16), not_null(n_16)), not_null(g_16));
            if(((p_16 != NULL) && (p_16 != t)))
              _fail(t);
            else
              p_16 = t;
            t = v_16(t);
            t = not_null(o_16);
          }
          return(t);
        }
        t = not_null(k_16);
        if(((l_16 != NULL) && (l_16 != t)))
          _fail(t);
        else
          l_16 = t;
        t = not_null(f_16);
        t = n_95(t);
        if(((m_16 != NULL) && (m_16 != t)))
          _fail(t);
        else
          m_16 = t;
        t = u_16(t);
        return(t);
      }
      t = not_null(i_16);
      if(((j_16 != NULL) && (j_16 != t)))
        _fail(t);
      else
        j_16 = t;
      t = not_null(e_16);
      t = m_95(t);
      if(((k_16 != NULL) && (k_16 != t)))
        _fail(t);
      else
        k_16 = t;
      t = t_16(t);
      return(t);
    }
    t = not_null(y_15);
    if(((c_16 != NULL) && (c_16 != t)))
      _fail(t);
    else
      c_16 = t;
    t = not_null(z_15);
    if(((d_16 != NULL) && (d_16 != t)))
      _fail(t);
    else
      d_16 = t;
    t = not_null(a_16);
    if(((e_16 != NULL) && (e_16 != t)))
      _fail(t);
    else
      e_16 = t;
    t = not_null(b_16);
    if(((f_16 != NULL) && (f_16 != t)))
      _fail(t);
    else
      f_16 = t;
    t = not_null(y_15);
    {
      ATerm h_16 = NULL;
      ATerm r_16 (ATerm t)
      {
        t = not_null(h_16);
        if(((g_16 != NULL) && (g_16 != t)))
          _fail(t);
        else
          g_16 = t;
        t = not_null(h_16);
        return(t);
      }
      t = SSLgetAnnotations(not_null(c_16));
      if(((h_16 != NULL) && (h_16 != t)))
        _fail(t);
      else
        h_16 = t;
      t = r_16(t);
      t = not_null(d_16);
      t = l_95(t);
      if(((i_16 != NULL) && (i_16 != t)))
        _fail(t);
      else
        i_16 = t;
      t = s_16(t);
    }
    return(t);
  }
  if(((y_15 != NULL) && (y_15 != t)))
    _fail(t);
  else
    y_15 = t;
  t = not_null(y_15);
  if(match_cons(t, sym_SDef_3))
    {
      z_15 = ATgetArgument(t, 0);
      a_16 = ATgetArgument(t, 1);
      b_16 = ATgetArgument(t, 2);
      t = q_16(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  ATerm q_17 (ATerm t)
  {
    ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,k_17 = NULL;
    ATerm s_17 (ATerm t)
    {
      ATerm l_17 = NULL,m_17 = NULL;
      ATerm t_17 (ATerm t)
      {
        ATerm n_17 = NULL,o_17 = NULL;
        t = not_null(m_17);
        if(((n_17 != NULL) && (n_17 != t)))
          _fail(t);
        else
          n_17 = t;
        t = not_null(m_17);
        {
          ATerm p_17 = NULL;
          ATerm u_17 (ATerm t)
          {
            t = not_null(p_17);
            if(((o_17 != NULL) && (o_17 != t)))
              _fail(t);
            else
              o_17 = t;
            t = not_null(p_17);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(l_17), not_null(n_17)), not_null(i_17));
          if(((p_17 != NULL) && (p_17 != t)))
            _fail(t);
          else
            p_17 = t;
          t = u_17(t);
          t = not_null(o_17);
        }
        return(t);
      }
      t = not_null(k_17);
      if(((l_17 != NULL) && (l_17 != t)))
        _fail(t);
      else
        l_17 = t;
      t = not_null(h_17);
      t = x_92(t);
      if(((m_17 != NULL) && (m_17 != t)))
        _fail(t);
      else
        m_17 = t;
      t = t_17(t);
      return(t);
    }
    t = not_null(c_17);
    if(((f_17 != NULL) && (f_17 != t)))
      _fail(t);
    else
      f_17 = t;
    t = not_null(d_17);
    if(((g_17 != NULL) && (g_17 != t)))
      _fail(t);
    else
      g_17 = t;
    t = not_null(e_17);
    if(((h_17 != NULL) && (h_17 != t)))
      _fail(t);
    else
      h_17 = t;
    t = not_null(c_17);
    {
      ATerm j_17 = NULL;
      ATerm r_17 (ATerm t)
      {
        t = not_null(j_17);
        if(((i_17 != NULL) && (i_17 != t)))
          _fail(t);
        else
          i_17 = t;
        t = not_null(j_17);
        return(t);
      }
      t = SSLgetAnnotations(not_null(f_17));
      if(((j_17 != NULL) && (j_17 != t)))
        _fail(t);
      else
        j_17 = t;
      t = r_17(t);
      t = not_null(g_17);
      t = w_92(t);
      if(((k_17 != NULL) && (k_17 != t)))
        _fail(t);
      else
        k_17 = t;
      t = s_17(t);
    }
    return(t);
  }
  if(((c_17 != NULL) && (c_17 != t)))
    _fail(t);
  else
    c_17 = t;
  t = not_null(c_17);
  if(match_cons(t, sym_Let_2))
    {
      d_17 = ATgetArgument(t, 0);
      e_17 = ATgetArgument(t, 1);
      t = q_17(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm t)
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(f_103, f_103, t);
      ;
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      {
        ATerm j_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(h_103, h_103, f_103, t);
            ;
            LocalPopChoice(t_10);
          }
        else
          {
            t = j_10;
            {
              ATerm u_10 = t;
              int v_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(h_103, h_103, h_103, f_103, t);
                  ;
                  LocalPopChoice(v_10);
                }
              else
                {
                  t = u_10;
                  t = Rec_2_0(h_103, f_103, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  ATerm g_18 (ATerm t)
  {
    ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
    t = not_null(y_17);
    if(((c_18 != NULL) && (c_18 != t)))
      _fail(t);
    else
      c_18 = t;
    t = not_null(z_17);
    if(((f_18 != NULL) && (f_18 != t)))
      _fail(t);
    else
      f_18 = t;
    t = not_null(a_18);
    if(((d_18 != NULL) && (d_18 != t)))
      _fail(t);
    else
      d_18 = t;
    t = not_null(b_18);
    if(((e_18 != NULL) && (e_18 != t)))
      _fail(t);
    else
      e_18 = t;
    t = not_null(f_18);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((x_17 != NULL) && (x_17 != t)))
    _fail(t);
  else
    x_17 = t;
  t = not_null(x_17);
  if(match_cons(t, sym_RDefT_4))
    {
      y_17 = ATgetArgument(t, 0);
      z_17 = ATgetArgument(t, 1);
      a_18 = ATgetArgument(t, 2);
      b_18 = ATgetArgument(t, 3);
      t = g_18(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL;
  ATerm s_18 (ATerm t)
  {
    ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
    t = not_null(k_18);
    if(((o_18 != NULL) && (o_18 != t)))
      _fail(t);
    else
      o_18 = t;
    t = not_null(l_18);
    if(((r_18 != NULL) && (r_18 != t)))
      _fail(t);
    else
      r_18 = t;
    t = not_null(m_18);
    if(((p_18 != NULL) && (p_18 != t)))
      _fail(t);
    else
      p_18 = t;
    t = not_null(n_18);
    if(((q_18 != NULL) && (q_18 != t)))
      _fail(t);
    else
      q_18 = t;
    t = not_null(r_18);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((j_18 != NULL) && (j_18 != t)))
    _fail(t);
  else
    j_18 = t;
  t = not_null(j_18);
  if(match_cons(t, sym_SDefT_4))
    {
      k_18 = ATgetArgument(t, 0);
      l_18 = ATgetArgument(t, 1);
      m_18 = ATgetArgument(t, 2);
      n_18 = ATgetArgument(t, 3);
      t = s_18(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind3_0_0 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL;
  ATerm a_19 (ATerm t)
  {
    ATerm y_18 = NULL,z_18 = NULL;
    t = not_null(w_18);
    if(((z_18 != NULL) && (z_18 != t)))
      _fail(t);
    else
      z_18 = t;
    t = not_null(x_18);
    if(((y_18 != NULL) && (y_18 != t)))
      _fail(t);
    else
      y_18 = t;
    t = (ATerm) ATinsert(ATempty, not_null(z_18));
    return(t);
  }
  if(((v_18 != NULL) && (v_18 != t)))
    _fail(t);
  else
    v_18 = t;
  t = not_null(v_18);
  if(match_cons(t, sym_Rec_2))
    {
      w_18 = ATgetArgument(t, 0);
      x_18 = ATgetArgument(t, 1);
      t = a_19(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
    ATerm j_19 (ATerm t)
    {
      ATerm h_19 = NULL;
      t = not_null(g_19);
      if(((h_19 != NULL) && (h_19 != t)))
        _fail(t);
      else
        h_19 = t;
      t = not_null(h_19);
      return(t);
    }
    ATerm k_19 (ATerm t)
    {
      ATerm i_19 = NULL;
      t = not_null(g_19);
      if(((i_19 != NULL) && (i_19 != t)))
        _fail(t);
      else
        i_19 = t;
      t = not_null(i_19);
      return(t);
    }
    if(((f_19 != NULL) && (f_19 != t)))
      _fail(t);
    else
      f_19 = t;
    t = not_null(f_19);
    if(match_cons(t, sym_VarDec_2))
      {
        g_19 = ATgetArgument(t, 0);
        e_19 = ATgetArgument(t, 1);
        t = j_19(t);
      }
    else
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            g_19 = ATgetArgument(t, 0);
            t = k_19(t);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1_0(w_0, t);
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL;
  ATerm u_19 (ATerm t)
  {
    ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
    t = not_null(o_19);
    if(((r_19 != NULL) && (r_19 != t)))
      _fail(t);
    else
      r_19 = t;
    t = not_null(p_19);
    if(((t_19 != NULL) && (t_19 != t)))
      _fail(t);
    else
      t_19 = t;
    t = not_null(q_19);
    if(((s_19 != NULL) && (s_19 != t)))
      _fail(t);
    else
      s_19 = t;
    t = not_null(t_19);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((n_19 != NULL) && (n_19 != t)))
    _fail(t);
  else
    n_19 = t;
  t = not_null(n_19);
  if(match_cons(t, sym_SDef_3))
    {
      o_19 = ATgetArgument(t, 0);
      p_19 = ATgetArgument(t, 1);
      q_19 = ATgetArgument(t, 2);
      t = u_19(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
  ATerm m_20 (ATerm t)
  {
    ATerm d_20 = NULL,e_20 = NULL;
    t = not_null(b_20);
    if(((e_20 != NULL) && (e_20 != t)))
      _fail(t);
    else
      e_20 = t;
    t = not_null(c_20);
    if(((d_20 != NULL) && (d_20 != t)))
      _fail(t);
    else
      d_20 = t;
    t = not_null(e_20);
    {
      ATerm x_0 (ATerm t)
      {
        ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
        ATerm n_20 (ATerm t)
        {
          ATerm k_20 = NULL;
          t = not_null(g_20);
          if(((k_20 != NULL) && (k_20 != t)))
            _fail(t);
          else
            k_20 = t;
          t = not_null(k_20);
          return(t);
        }
        ATerm o_20 (ATerm t)
        {
          ATerm l_20 = NULL;
          t = not_null(g_20);
          if(((l_20 != NULL) && (l_20 != t)))
            _fail(t);
          else
            l_20 = t;
          t = not_null(l_20);
          return(t);
        }
        if(((f_20 != NULL) && (f_20 != t)))
          _fail(t);
        else
          f_20 = t;
        t = not_null(f_20);
        if(match_cons(t, sym_SDef_3))
          {
            g_20 = ATgetArgument(t, 0);
            h_20 = ATgetArgument(t, 1);
            i_20 = ATgetArgument(t, 2);
            t = n_20(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                g_20 = ATgetArgument(t, 0);
                h_20 = ATgetArgument(t, 1);
                i_20 = ATgetArgument(t, 2);
                j_20 = ATgetArgument(t, 3);
                t = o_20(t);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      t = map_1_0(x_0, t);
    }
    return(t);
  }
  if(((a_20 != NULL) && (a_20 != t)))
    _fail(t);
  else
    a_20 = t;
  t = not_null(a_20);
  if(match_cons(t, sym_Let_2))
    {
      b_20 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
      t = m_20(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm crush_3_0 (ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm t)
{
  ATerm t_20 = NULL;
  ATerm b_21 (ATerm t)
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
      ATerm c_21 (ATerm t)
      {
        ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL;
        ATerm d_21 (ATerm t)
        {
          t = not_null(a_21);
          if(((v_20 != NULL) && (v_20 != t)))
            _fail(t);
          else
            v_20 = t;
          t = not_null(y_20);
          return(t);
        }
        t = not_null(w_20);
        if(((x_20 != NULL) && (x_20 != t)))
          _fail(t);
        else
          x_20 = t;
        t = not_null(w_20);
        t = SSL_explode_term(not_null(x_20));
        if(((y_20 != NULL) && (y_20 != t)))
          _fail(t);
        else
          y_20 = t;
        t = not_null(y_20);
        if(match_cons(t, sym__2))
          {
            z_20 = ATgetArgument(t, 0);
            a_21 = ATgetArgument(t, 1);
            t = d_21(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(u_20);
      if(((w_20 != NULL) && (w_20 != t)))
        _fail(t);
      else
        w_20 = t;
      t = c_21(t);
      t = not_null(v_20);
      t = foldr_3_0(p_112, q_112, r_112, t);
    }
    return(t);
  }
  if(((t_20 != NULL) && (t_20 != t)))
    _fail(t);
  else
    t_20 = t;
  t = b_21(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm l_118 (ATerm), ATerm m_118 (ATerm), ATerm n_118 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_118 (ATerm), ATerm t)
{
  ATerm h_21 (ATerm t)
  {
    ATerm y_0 (ATerm t)
    {
      ATerm f_11 = t;
      int g_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_118(t);
          ;
          LocalPopChoice(g_11);
        }
      else
        {
          t = f_11;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm z_0 (ATerm t)
    {
      ATerm h_11 = t;
      int n_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_21 = NULL;
          ATerm r_11;
          r_11 = t;
          {
            ATerm g_21 = NULL;
            ATerm i_21 (ATerm t)
            {
              t = not_null(g_21);
              if(((f_21 != NULL) && (f_21 != t)))
                _fail(t);
              else
                f_21 = t;
              t = not_null(g_21);
              return(t);
            }
            t = m_118(t);
            if(((g_21 != NULL) && (g_21 != t)))
              _fail(t);
            else
              g_21 = t;
            t = i_21(t);
          }
          t = r_11;
          {
            ATerm a_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = not_null(f_21);
                return(t);
              }
              t = split_2_0(h_21, c_1, t);
              t = diff_1_0(o_118, t);
              return(t);
            }
            ATerm b_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = n_118(a_1, h_21, b_1, t);
            {
              ATerm d_1 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3_0(d_1, union_0_0, _id, t);
            }
          }
          ;
          LocalPopChoice(n_11);
        }
      else
        {
          t = h_11;
          {
            ATerm e_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3_0(e_1, union_0_0, h_21, t);
          }
        }
      return(t);
    }
    t = split_2_0(y_0, z_0, t);
    t = union_0_0(t);
    return(t);
  }
  t = h_21(t);
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL;
    ATerm j_22 (ATerm t)
    {
      ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,b_22 = NULL;
      t = not_null(t_21);
      if(((w_21 != NULL) && (w_21 != t)))
        _fail(t);
      else
        w_21 = t;
      t = not_null(u_21);
      if(((x_21 != NULL) && (x_21 != t)))
        _fail(t);
      else
        x_21 = t;
      t = not_null(v_21);
      if(((y_21 != NULL) && (y_21 != t)))
        _fail(t);
      else
        y_21 = t;
      t = not_null(r_21);
      {
        ATerm s_11;
        s_11 = t;
        {
          ATerm a_22 = NULL;
          ATerm k_22 (ATerm t)
          {
            t = not_null(a_22);
            if(((z_21 != NULL) && (z_21 != t)))
              _fail(t);
            else
              z_21 = t;
            t = not_null(a_22);
            return(t);
          }
          t = not_null(x_21);
          t = length_0_0(t);
          if(((a_22 != NULL) && (a_22 != t)))
            _fail(t);
          else
            a_22 = t;
          t = k_22(t);
        }
        t = s_11;
        {
          ATerm c_22 = NULL;
          ATerm l_22 (ATerm t)
          {
            t = not_null(c_22);
            if(((b_22 != NULL) && (b_22 != t)))
              _fail(t);
            else
              b_22 = t;
            t = not_null(c_22);
            return(t);
          }
          t = not_null(y_21);
          t = length_0_0(t);
          if(((c_22 != NULL) && (c_22 != t)))
            _fail(t);
          else
            c_22 = t;
          t = l_22(t);
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(w_21), (ATerm) ATmakeAppl(sym__2, not_null(z_21), not_null(b_22))));
        }
      }
      return(t);
    }
    if(((r_21 != NULL) && (r_21 != t)))
      _fail(t);
    else
      r_21 = t;
    t = not_null(r_21);
    if(match_cons(t, sym_CallT_3))
      {
        s_21 = ATgetArgument(t, 0);
        u_21 = ATgetArgument(t, 1);
        v_21 = ATgetArgument(t, 2);
        t = not_null(s_21);
        if(match_cons(t, sym_SVar_1))
          {
            t_21 = ATgetArgument(t, 0);
            t = j_22(t);
          }
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
  ATerm g_1 (ATerm t)
  {
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(u_11);
      }
    else
      {
        t = t_11;
        {
          ATerm v_11 = t;
          int w_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(w_11);
            }
          else
            {
              t = v_11;
              {
                ATerm x_11 = t;
                int y_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0_0(t);
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
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(a_12);
                        }
                      else
                        {
                          t = z_11;
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
  ATerm h_1 (ATerm t)
  {
    ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL;
    ATerm m_22 (ATerm t)
    {
      ATerm i_22 = NULL;
      t = not_null(f_22);
      if(((i_22 != NULL) && (i_22 != t)))
        _fail(t);
      else
        i_22 = t;
      t = not_null(h_22);
      if(((i_22 != NULL) && (i_22 != t)))
        _fail(t);
      else
        i_22 = t;
      t = not_null(d_22);
      return(t);
    }
    if(((d_22 != NULL) && (d_22 != t)))
      _fail(t);
    else
      d_22 = t;
    t = not_null(d_22);
    if(match_cons(t, sym__2))
      {
        e_22 = ATgetArgument(t, 0);
        h_22 = ATgetArgument(t, 1);
        t = not_null(e_22);
        if(match_cons(t, sym__2))
          {
            f_22 = ATgetArgument(t, 0);
            g_22 = ATgetArgument(t, 1);
            t = m_22(t);
          }
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
  t = free_vars2_4_0(f_1, g_1, sboundin_3_0, h_1, t);
  return(t);
}
ATerm Snd_0_0 (ATerm t)
{
  ATerm u_22 = NULL;
  ATerm i_23 (ATerm t)
  {
    ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
    t = not_null(u_22);
    if(((v_22 != NULL) && (v_22 != t)))
      _fail(t);
    else
      v_22 = t;
    t = not_null(u_22);
    {
      ATerm z_22 = NULL;
      ATerm j_23 (ATerm t)
      {
        ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL;
        ATerm k_23 (ATerm t)
        {
          t = not_null(e_23);
          if(((w_22 != NULL) && (w_22 != t)))
            _fail(t);
          else
            w_22 = t;
          t = not_null(g_23);
          if(((y_22 != NULL) && (y_22 != t)))
            _fail(t);
          else
            y_22 = t;
          t = not_null(h_23);
          if(((x_22 != NULL) && (x_22 != t)))
            _fail(t);
          else
            x_22 = t;
          t = not_null(b_23);
          return(t);
        }
        t = not_null(z_22);
        if(((a_23 != NULL) && (a_23 != t)))
          _fail(t);
        else
          a_23 = t;
        t = not_null(z_22);
        t = SSL_explode_term(not_null(a_23));
        if(((b_23 != NULL) && (b_23 != t)))
          _fail(t);
        else
          b_23 = t;
        t = not_null(b_23);
        if(match_cons(t, sym__2))
          {
            c_23 = ATgetArgument(t, 0);
            d_23 = ATgetArgument(t, 1);
            t = not_null(c_23);
            if(match_string(t, ""))
              {
                t = not_null(d_23);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_23 = ATgetFirst((ATermList) t);
                    f_23 = (ATerm) ATgetNext((ATermList) t);
                    t = not_null(f_23);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        g_23 = ATgetFirst((ATermList) t);
                        h_23 = (ATerm) ATgetNext((ATermList) t);
                        t = k_23(t);
                      }
                    else
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
      t = not_null(v_22);
      if(((z_22 != NULL) && (z_22 != t)))
        _fail(t);
      else
        z_22 = t;
      t = j_23(t);
      t = not_null(y_22);
    }
    return(t);
  }
  if(((u_22 != NULL) && (u_22 != t)))
    _fail(t);
  else
    u_22 = t;
  t = i_23(t);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    t = term_b_12;
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    ATerm n_23 = NULL,p_23 = NULL;
    ATerm c_12;
    c_12 = t;
    {
      ATerm o_23 = NULL;
      ATerm r_23 (ATerm t)
      {
        t = not_null(o_23);
        if(((n_23 != NULL) && (n_23 != t)))
          _fail(t);
        else
          n_23 = t;
        t = not_null(o_23);
        return(t);
      }
      t = Fst_0_0(t);
      if(((o_23 != NULL) && (o_23 != t)))
        _fail(t);
      else
        o_23 = t;
      t = r_23(t);
    }
    t = c_12;
    {
      ATerm q_23 = NULL;
      ATerm s_23 (ATerm t)
      {
        t = not_null(q_23);
        if(((p_23 != NULL) && (p_23 != t)))
          _fail(t);
        else
          p_23 = t;
        t = not_null(q_23);
        return(t);
      }
      t = Snd_0_0(t);
      if(((q_23 != NULL) && (q_23 != t)))
        _fail(t);
      else
        q_23 = t;
      t = s_23(t);
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_23), not_null(p_23));
    }
    return(t);
  }
  t = foldr_2_0(i_1, j_1, t);
  return(t);
}
ATerm IsVar_0_0 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL;
  ATerm y_23 (ATerm t)
  {
    ATerm x_23 = NULL;
    t = not_null(w_23);
    if(((x_23 != NULL) && (x_23 != t)))
      _fail(t);
    else
      x_23 = t;
    t = not_null(x_23);
    return(t);
  }
  if(((v_23 != NULL) && (v_23 != t)))
    _fail(t);
  else
    v_23 = t;
  t = not_null(v_23);
  if(match_cons(t, sym_Var_1))
    {
      w_23 = ATgetArgument(t, 0);
      t = y_23(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tsubs_0_0 (ATerm t)
{
  t = substitute_1_0(IsVar_0_0, t);
  return(t);
}
ATerm IsSVar_0_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
  ATerm o_24 (ATerm t)
  {
    ATerm m_24 = NULL;
    t = not_null(k_24);
    if(((m_24 != NULL) && (m_24 != t)))
      _fail(t);
    else
      m_24 = t;
    t = not_null(m_24);
    return(t);
  }
  ATerm p_24 (ATerm t)
  {
    ATerm n_24 = NULL;
    t = not_null(k_24);
    if(((n_24 != NULL) && (n_24 != t)))
      _fail(t);
    else
      n_24 = t;
    t = not_null(n_24);
    return(t);
  }
  if(((i_24 != NULL) && (i_24 != t)))
    _fail(t);
  else
    i_24 = t;
  t = not_null(i_24);
  if(match_cons(t, sym_CallT_3))
    {
      j_24 = ATgetArgument(t, 0);
      l_24 = ATgetArgument(t, 1);
      h_24 = ATgetArgument(t, 2);
      t = not_null(j_24);
      if(match_cons(t, sym_SVar_1))
        {
          k_24 = ATgetArgument(t, 0);
          t = not_null(l_24);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = not_null(h_24);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = o_24(t);
                }
              else
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
      if(match_cons(t, sym_Call_2))
        {
          j_24 = ATgetArgument(t, 0);
          l_24 = ATgetArgument(t, 1);
          t = not_null(j_24);
          if(match_cons(t, sym_SVar_1))
            {
              k_24 = ATgetArgument(t, 0);
              t = not_null(l_24);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = p_24(t);
                }
              else
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
ATerm Look2_0_0 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
  ATerm a_25 (ATerm t)
  {
    ATerm y_24 = NULL,z_24 = NULL;
    t = not_null(u_24);
    if(((y_24 != NULL) && (y_24 != t)))
      _fail(t);
    else
      y_24 = t;
    t = not_null(x_24);
    if(((z_24 != NULL) && (z_24 != t)))
      _fail(t);
    else
      z_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_24), not_null(z_24));
    return(t);
  }
  if(((t_24 != NULL) && (t_24 != t)))
    _fail(t);
  else
    t_24 = t;
  t = not_null(t_24);
  if(match_cons(t, sym__2))
    {
      u_24 = ATgetArgument(t, 0);
      v_24 = ATgetArgument(t, 1);
      t = not_null(v_24);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_24 = ATgetFirst((ATermList) t);
          x_24 = (ATerm) ATgetNext((ATermList) t);
          t = a_25(t);
        }
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
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
  ATerm o_25 (ATerm t)
  {
    ATerm m_25 = NULL,n_25 = NULL;
    t = not_null(g_25);
    if(((m_25 != NULL) && (m_25 != t)))
      _fail(t);
    else
      m_25 = t;
    t = not_null(j_25);
    if(((m_25 != NULL) && (m_25 != t)))
      _fail(t);
    else
      m_25 = t;
    t = not_null(k_25);
    if(((n_25 != NULL) && (n_25 != t)))
      _fail(t);
    else
      n_25 = t;
    t = not_null(n_25);
    return(t);
  }
  if(((f_25 != NULL) && (f_25 != t)))
    _fail(t);
  else
    f_25 = t;
  t = not_null(f_25);
  if(match_cons(t, sym__2))
    {
      g_25 = ATgetArgument(t, 0);
      h_25 = ATgetArgument(t, 1);
      t = not_null(h_25);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_25 = ATgetFirst((ATermList) t);
          l_25 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(i_25);
          if(match_cons(t, sym__2))
            {
              j_25 = ATgetArgument(t, 0);
              k_25 = ATgetArgument(t, 1);
              t = o_25(t);
            }
          else
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
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0_0(t);
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      t = Look2_0_0(t);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm SubsVar_2_0 (ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm t)
{
  ATerm t_25 = NULL;
  ATerm z_25 (ATerm t)
  {
    ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
    t = not_null(t_25);
    if(((u_25 != NULL) && (u_25 != t)))
      _fail(t);
    else
      u_25 = t;
    t = not_null(t_25);
    {
      ATerm x_25 = NULL;
      ATerm a_26 (ATerm t)
      {
        ATerm y_25 = NULL;
        ATerm b_26 (ATerm t)
        {
          t = not_null(y_25);
          if(((w_25 != NULL) && (w_25 != t)))
            _fail(t);
          else
            w_25 = t;
          t = not_null(y_25);
          return(t);
        }
        t = not_null(x_25);
        if(((v_25 != NULL) && (v_25 != t)))
          _fail(t);
        else
          v_25 = t;
        t = not_null(x_25);
        t = z_103(t);
        if(((y_25 != NULL) && (y_25 != t)))
          _fail(t);
        else
          y_25 = t;
        t = b_26(t);
        return(t);
      }
      t = not_null(u_25);
      t = y_103(t);
      if(((x_25 != NULL) && (x_25 != t)))
        _fail(t);
      else
        x_25 = t;
      t = a_26(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_25), not_null(w_25));
      t = lookup_0_0(t);
    }
    return(t);
  }
  if(((t_25 != NULL) && (t_25 != t)))
    _fail(t);
  else
    t_25 = t;
  t = z_25(t);
  return(t);
}
ATerm alltd_1_0 (ATerm s_105 (ATerm), ATerm t)
{
  ATerm c_26 (ATerm t)
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_105(t);
        ;
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
        t = SRTS_all(c_26, t);
      }
    return(t);
  }
  t = c_26(t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
  ATerm u_26 (ATerm t)
  {
    ATerm l_26 = NULL,m_26 = NULL;
    t = not_null(i_26);
    if(((l_26 != NULL) && (l_26 != t)))
      _fail(t);
    else
      l_26 = t;
    t = not_null(j_26);
    if(((m_26 != NULL) && (m_26 != t)))
      _fail(t);
    else
      m_26 = t;
    t = not_null(h_26);
    return(t);
  }
  ATerm v_26 (ATerm t)
  {
    ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL;
    t = not_null(i_26);
    if(((p_26 != NULL) && (p_26 != t)))
      _fail(t);
    else
      p_26 = t;
    t = not_null(j_26);
    if(((q_26 != NULL) && (q_26 != t)))
      _fail(t);
    else
      q_26 = t;
    t = not_null(k_26);
    if(((r_26 != NULL) && (r_26 != t)))
      _fail(t);
    else
      r_26 = t;
    t = not_null(h_26);
    {
      ATerm t_26 = NULL;
      ATerm w_26 (ATerm t)
      {
        t = not_null(t_26);
        if(((s_26 != NULL) && (s_26 != t)))
          _fail(t);
        else
          s_26 = t;
        t = not_null(t_26);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_26), not_null(q_26));
      t = zip_1_0(_id, t);
      if(((t_26 != NULL) && (t_26 != t)))
        _fail(t);
      else
        t_26 = t;
      t = w_26(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_26), not_null(r_26));
    }
    return(t);
  }
  if(((h_26 != NULL) && (h_26 != t)))
    _fail(t);
  else
    h_26 = t;
  t = not_null(h_26);
  if(match_cons(t, sym__2))
    {
      i_26 = ATgetArgument(t, 0);
      j_26 = ATgetArgument(t, 1);
      t = u_26(t);
    }
  else
    {
      if(match_cons(t, sym__3))
        {
          i_26 = ATgetArgument(t, 0);
          j_26 = ATgetArgument(t, 1);
          k_26 = ATgetArgument(t, 2);
          t = v_26(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2_0 (ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  ATerm e_27 (ATerm t)
  {
    ATerm c_27 = NULL,d_27 = NULL;
    t = not_null(a_27);
    if(((d_27 != NULL) && (d_27 != t)))
      _fail(t);
    else
      d_27 = t;
    t = not_null(b_27);
    if(((c_27 != NULL) && (c_27 != t)))
      _fail(t);
    else
      c_27 = t;
    t = not_null(c_27);
    {
      ATerm k_1 (ATerm t)
      {
        ATerm l_1 (ATerm t)
        {
          t = not_null(d_27);
          return(t);
        }
        t = SubsVar_2_0(j_103, l_1, t);
        t = k_103(t);
        return(t);
      }
      t = alltd_1_0(k_1, t);
    }
    return(t);
  }
  t = subs_args_0_0(t);
  if(((z_26 != NULL) && (z_26 != t)))
    _fail(t);
  else
    z_26 = t;
  t = not_null(z_26);
  if(match_cons(t, sym__2))
    {
      a_27 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
      t = e_27(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm substitute_1_0 (ATerm l_103 (ATerm), ATerm t)
{
  t = substitute_2_0(l_103, _id, t);
  return(t);
}
ATerm ssubs_0_0 (ATerm t)
{
  t = substitute_1_0(IsSVar_0_0, t);
  return(t);
}
ATerm VarDec_2_0 (ATerm h_95 (ATerm), ATerm i_95 (ATerm), ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
  ATerm z_27 (ATerm t)
  {
    ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,t_27 = NULL;
    ATerm b_28 (ATerm t)
    {
      ATerm u_27 = NULL,v_27 = NULL;
      ATerm c_28 (ATerm t)
      {
        ATerm w_27 = NULL,x_27 = NULL;
        t = not_null(v_27);
        if(((w_27 != NULL) && (w_27 != t)))
          _fail(t);
        else
          w_27 = t;
        t = not_null(v_27);
        {
          ATerm y_27 = NULL;
          ATerm d_28 (ATerm t)
          {
            t = not_null(y_27);
            if(((x_27 != NULL) && (x_27 != t)))
              _fail(t);
            else
              x_27 = t;
            t = not_null(y_27);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(u_27), not_null(w_27)), not_null(r_27));
          if(((y_27 != NULL) && (y_27 != t)))
            _fail(t);
          else
            y_27 = t;
          t = d_28(t);
          t = not_null(x_27);
        }
        return(t);
      }
      t = not_null(t_27);
      if(((u_27 != NULL) && (u_27 != t)))
        _fail(t);
      else
        u_27 = t;
      t = not_null(q_27);
      t = i_95(t);
      if(((v_27 != NULL) && (v_27 != t)))
        _fail(t);
      else
        v_27 = t;
      t = c_28(t);
      return(t);
    }
    t = not_null(l_27);
    if(((o_27 != NULL) && (o_27 != t)))
      _fail(t);
    else
      o_27 = t;
    t = not_null(m_27);
    if(((p_27 != NULL) && (p_27 != t)))
      _fail(t);
    else
      p_27 = t;
    t = not_null(n_27);
    if(((q_27 != NULL) && (q_27 != t)))
      _fail(t);
    else
      q_27 = t;
    t = not_null(l_27);
    {
      ATerm s_27 = NULL;
      ATerm a_28 (ATerm t)
      {
        t = not_null(s_27);
        if(((r_27 != NULL) && (r_27 != t)))
          _fail(t);
        else
          r_27 = t;
        t = not_null(s_27);
        return(t);
      }
      t = SSLgetAnnotations(not_null(o_27));
      if(((s_27 != NULL) && (s_27 != t)))
        _fail(t);
      else
        s_27 = t;
      t = a_28(t);
      t = not_null(p_27);
      t = h_95(t);
      if(((t_27 != NULL) && (t_27 != t)))
        _fail(t);
      else
        t_27 = t;
      t = b_28(t);
    }
    return(t);
  }
  if(((l_27 != NULL) && (l_27 != t)))
    _fail(t);
  else
    l_27 = t;
  t = not_null(l_27);
  if(match_cons(t, sym_VarDec_2))
    {
      m_27 = ATgetArgument(t, 0);
      n_27 = ATgetArgument(t, 1);
      t = z_27(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL;
  ATerm e_31 (ATerm t)
  {
    ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,c_31 = NULL;
    t = not_null(a_29);
    if(((h_29 != NULL) && (h_29 != t)))
      _fail(t);
    else
      h_29 = t;
    t = not_null(c_29);
    if(((i_29 != NULL) && (i_29 != t)))
      _fail(t);
    else
      i_29 = t;
    t = not_null(d_29);
    if(((j_29 != NULL) && (j_29 != t)))
      _fail(t);
    else
      j_29 = t;
    t = not_null(e_29);
    if(((k_29 != NULL) && (k_29 != t)))
      _fail(t);
    else
      k_29 = t;
    t = not_null(f_29);
    if(((l_29 != NULL) && (l_29 != t)))
      _fail(t);
    else
      l_29 = t;
    t = not_null(a_29);
    {
      ATerm h_13;
      h_13 = t;
      {
        ATerm r_29 = NULL;
        ATerm f_31 (ATerm t)
        {
          ATerm s_29 = NULL;
          ATerm g_31 (ATerm t)
          {
            ATerm y_29 = NULL;
            ATerm i_31 (ATerm t)
            {
              ATerm e_30 = NULL;
              ATerm k_31 (ATerm t)
              {
                ATerm b_31 = NULL;
                ATerm r_31 (ATerm t)
                {
                  t = not_null(b_31);
                  if(((q_29 != NULL) && (q_29 != t)))
                    _fail(t);
                  else
                    q_29 = t;
                  t = not_null(b_31);
                  return(t);
                }
                t = not_null(e_30);
                if(((p_29 != NULL) && (p_29 != t)))
                  _fail(t);
                else
                  p_29 = t;
                t = not_null(h_29);
                {
                  ATerm m_1 (ATerm t)
                  {
                    ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
                    ATerm l_31 (ATerm t)
                    {
                      ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,t_30 = NULL;
                      t = not_null(h_30);
                      if(((k_30 != NULL) && (k_30 != t)))
                        _fail(t);
                      else
                        k_30 = t;
                      t = not_null(i_30);
                      if(((l_30 != NULL) && (l_30 != t)))
                        _fail(t);
                      else
                        l_30 = t;
                      t = not_null(j_30);
                      if(((m_30 != NULL) && (m_30 != t)))
                        _fail(t);
                      else
                        m_30 = t;
                      t = not_null(f_30);
                      {
                        ATerm i_13;
                        i_13 = t;
                        {
                          ATerm s_30 = NULL;
                          ATerm n_31 (ATerm t)
                          {
                            t = not_null(s_30);
                            if(((n_30 != NULL) && (n_30 != t)))
                              _fail(t);
                            else
                              n_30 = t;
                            t = not_null(s_30);
                            return(t);
                          }
                          t = not_null(l_30);
                          {
                            ATerm n_1 (ATerm t)
                            {
                              ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
                              ATerm m_31 (ATerm t)
                              {
                                ATerm r_30 = NULL;
                                t = not_null(p_30);
                                if(((r_30 != NULL) && (r_30 != t)))
                                  _fail(t);
                                else
                                  r_30 = t;
                                t = not_null(r_30);
                                return(t);
                              }
                              if(((o_30 != NULL) && (o_30 != t)))
                                _fail(t);
                              else
                                o_30 = t;
                              t = not_null(o_30);
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  p_30 = ATgetArgument(t, 0);
                                  q_30 = ATgetArgument(t, 1);
                                  t = m_31(t);
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = map_1_0(n_1, t);
                            if(((s_30 != NULL) && (s_30 != t)))
                              _fail(t);
                            else
                              s_30 = t;
                            t = n_31(t);
                          }
                        }
                        t = i_13;
                        {
                          ATerm u_30 = NULL,a_31 = NULL;
                          ATerm q_31 (ATerm t)
                          {
                            t = not_null(a_31);
                            if(((t_30 != NULL) && (t_30 != t)))
                              _fail(t);
                            else
                              t_30 = t;
                            t = not_null(a_31);
                            return(t);
                          }
                          ATerm z_30 = NULL;
                          ATerm p_31 (ATerm t)
                          {
                            t = not_null(z_30);
                            if(((u_30 != NULL) && (u_30 != t)))
                              _fail(t);
                            else
                              u_30 = t;
                            t = not_null(z_30);
                            return(t);
                          }
                          t = not_null(k_30);
                          {
                            ATerm o_1 (ATerm t)
                            {
                              ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL;
                              ATerm o_31 (ATerm t)
                              {
                                ATerm y_30 = NULL;
                                t = not_null(w_30);
                                if(((y_30 != NULL) && (y_30 != t)))
                                  _fail(t);
                                else
                                  y_30 = t;
                                t = not_null(y_30);
                                return(t);
                              }
                              if(((v_30 != NULL) && (v_30 != t)))
                                _fail(t);
                              else
                                v_30 = t;
                              t = not_null(v_30);
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  w_30 = ATgetArgument(t, 0);
                                  x_30 = ATgetArgument(t, 1);
                                  t = o_31(t);
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = map_1_0(o_1, t);
                            if(((z_30 != NULL) && (z_30 != t)))
                              _fail(t);
                            else
                              z_30 = t;
                            t = p_31(t);
                          }
                          t = (ATerm) ATmakeAppl(sym__3, not_null(u_30), not_null(o_29), not_null(m_30));
                          t = ssubs_0_0(t);
                          if(((a_31 != NULL) && (a_31 != t)))
                            _fail(t);
                          else
                            a_31 = t;
                          t = q_31(t);
                          t = (ATerm) ATmakeAppl(sym__3, not_null(n_30), not_null(p_29), not_null(t_30));
                          t = tsubs_0_0(t);
                        }
                      }
                      return(t);
                    }
                    if(((f_30 != NULL) && (f_30 != t)))
                      _fail(t);
                    else
                      f_30 = t;
                    t = not_null(f_30);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        g_30 = ATgetArgument(t, 0);
                        h_30 = ATgetArgument(t, 1);
                        i_30 = ATgetArgument(t, 2);
                        j_30 = ATgetArgument(t, 3);
                        t = l_31(t);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = map_1_0(m_1, t);
                  if(((b_31 != NULL) && (b_31 != t)))
                    _fail(t);
                  else
                    b_31 = t;
                  t = r_31(t);
                }
                return(t);
              }
              t = not_null(y_29);
              if(((o_29 != NULL) && (o_29 != t)))
                _fail(t);
              else
                o_29 = t;
              t = not_null(n_29);
              {
                ATerm p_1 (ATerm t)
                {
                  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
                  ATerm j_31 (ATerm t)
                  {
                    ATerm c_30 = NULL,d_30 = NULL;
                    t = not_null(a_30);
                    if(((c_30 != NULL) && (c_30 != t)))
                      _fail(t);
                    else
                      c_30 = t;
                    t = not_null(b_30);
                    if(((d_30 != NULL) && (d_30 != t)))
                      _fail(t);
                    else
                      d_30 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_30));
                    return(t);
                  }
                  if(((z_29 != NULL) && (z_29 != t)))
                    _fail(t);
                  else
                    z_29 = t;
                  t = not_null(z_29);
                  if(match_cons(t, sym_VarDec_2))
                    {
                      a_30 = ATgetArgument(t, 0);
                      b_30 = ATgetArgument(t, 1);
                      t = j_31(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = map_1_0(p_1, t);
                if(((e_30 != NULL) && (e_30 != t)))
                  _fail(t);
                else
                  e_30 = t;
                t = k_31(t);
              }
              return(t);
            }
            t = not_null(s_29);
            if(((n_29 != NULL) && (n_29 != t)))
              _fail(t);
            else
              n_29 = t;
            t = not_null(m_29);
            {
              ATerm q_1 (ATerm t)
              {
                ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
                ATerm h_31 (ATerm t)
                {
                  ATerm w_29 = NULL,x_29 = NULL;
                  t = not_null(u_29);
                  if(((w_29 != NULL) && (w_29 != t)))
                    _fail(t);
                  else
                    w_29 = t;
                  t = not_null(v_29);
                  if(((x_29 != NULL) && (x_29 != t)))
                    _fail(t);
                  else
                    x_29 = t;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_29)), (ATerm)ATempty, (ATerm) ATempty);
                  return(t);
                }
                if(((t_29 != NULL) && (t_29 != t)))
                  _fail(t);
                else
                  t_29 = t;
                t = not_null(t_29);
                if(match_cons(t, sym_VarDec_2))
                  {
                    u_29 = ATgetArgument(t, 0);
                    v_29 = ATgetArgument(t, 1);
                    t = h_31(t);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1_0(q_1, t);
              if(((y_29 != NULL) && (y_29 != t)))
                _fail(t);
              else
                y_29 = t;
              t = i_31(t);
            }
            return(t);
          }
          t = not_null(r_29);
          if(((m_29 != NULL) && (m_29 != t)))
            _fail(t);
          else
            m_29 = t;
          t = not_null(k_29);
          {
            ATerm s_1 (ATerm t)
            {
              t = VarDec_2_0(new_0_0, _id, t);
              return(t);
            }
            t = map_1_0(s_1, t);
            if(((s_29 != NULL) && (s_29 != t)))
              _fail(t);
            else
              s_29 = t;
            t = g_31(t);
          }
          return(t);
        }
        t = not_null(j_29);
        {
          ATerm t_1 (ATerm t)
          {
            t = VarDec_2_0(new_0_0, _id, t);
            return(t);
          }
          t = map_1_0(t_1, t);
          if(((r_29 != NULL) && (r_29 != t)))
            _fail(t);
          else
            r_29 = t;
          t = f_31(t);
        }
      }
      t = h_13;
      {
        ATerm d_31 = NULL;
        ATerm s_31 (ATerm t)
        {
          t = not_null(d_31);
          if(((c_31 != NULL) && (c_31 != t)))
            _fail(t);
          else
            c_31 = t;
          t = not_null(d_31);
          return(t);
        }
        t = not_null(q_29);
        t = choices_0_0(t);
        if(((d_31 != NULL) && (d_31 != t)))
          _fail(t);
        else
          d_31 = t;
        t = s_31(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(i_29), not_null(m_29), not_null(n_29), not_null(c_31));
      }
    }
    return(t);
  }
  if(((a_29 != NULL) && (a_29 != t)))
    _fail(t);
  else
    a_29 = t;
  t = not_null(a_29);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_29 = ATgetFirst((ATermList) t);
      g_29 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(b_29);
      if(match_cons(t, sym_SDefT_4))
        {
          c_29 = ATgetArgument(t, 0);
          d_29 = ATgetArgument(t, 1);
          e_29 = ATgetArgument(t, 2);
          f_29 = ATgetArgument(t, 3);
          t = e_31(t);
        }
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
ATerm JoinDefs1_0_0 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
  ATerm a_32 (ATerm t)
  {
    ATerm z_31 = NULL;
    t = not_null(x_31);
    if(((z_31 != NULL) && (z_31 != t)))
      _fail(t);
    else
      z_31 = t;
    t = not_null(z_31);
    return(t);
  }
  if(((w_31 != NULL) && (w_31 != t)))
    _fail(t);
  else
    w_31 = t;
  t = not_null(w_31);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_31 = ATgetFirst((ATermList) t);
      y_31 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(y_31);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = a_32(t);
        }
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
ATerm joindefs_0_0 (ATerm t)
{
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0_0(t);
      ;
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      t = JoinDefs2_0_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0_0 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL;
  ATerm p_32 (ATerm t)
  {
    ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL;
    t = not_null(h_32);
    if(((k_32 != NULL) && (k_32 != t)))
      _fail(t);
    else
      k_32 = t;
    t = not_null(i_32);
    if(((l_32 != NULL) && (l_32 != t)))
      _fail(t);
    else
      l_32 = t;
    t = not_null(j_32);
    if(((m_32 != NULL) && (m_32 != t)))
      _fail(t);
    else
      m_32 = t;
    t = not_null(f_32);
    {
      ATerm o_32 = NULL;
      ATerm q_32 (ATerm t)
      {
        t = not_null(o_32);
        if(((n_32 != NULL) && (n_32 != t)))
          _fail(t);
        else
          n_32 = t;
        t = not_null(o_32);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_32), not_null(l_32));
      t = Definitions_0_0(t);
      if(((o_32 != NULL) && (o_32 != t)))
        _fail(t);
      else
        o_32 = t;
      t = q_32(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_32), not_null(m_32));
    }
    return(t);
  }
  if(((f_32 != NULL) && (f_32 != t)))
    _fail(t);
  else
    f_32 = t;
  t = not_null(f_32);
  if(match_cons(t, sym__2))
    {
      g_32 = ATgetArgument(t, 0);
      j_32 = ATgetArgument(t, 1);
      t = not_null(g_32);
      if(match_cons(t, sym__2))
        {
          h_32 = ATgetArgument(t, 0);
          i_32 = ATgetArgument(t, 1);
          t = p_32(t);
        }
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
ATerm Expl_0_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  ATerm r_34 (ATerm t)
  {
    ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL;
    t = not_null(k_33);
    if(((l_33 != NULL) && (l_33 != t)))
      _fail(t);
    else
      l_33 = t;
    t = not_null(i_33);
    if(((m_33 != NULL) && (m_33 != t)))
      _fail(t);
    else
      m_33 = t;
    t = not_null(j_33);
    {
      ATerm r_33 = NULL;
      ATerm u_34 (ATerm t)
      {
        ATerm s_33 = NULL;
        ATerm v_34 (ATerm t)
        {
          ATerm t_33 = NULL;
          ATerm w_34 (ATerm t)
          {
            ATerm u_33 = NULL;
            ATerm x_34 (ATerm t)
            {
              t = not_null(u_33);
              if(((q_33 != NULL) && (q_33 != t)))
                _fail(t);
              else
                q_33 = t;
              t = not_null(u_33);
              return(t);
            }
            t = not_null(t_33);
            if(((p_33 != NULL) && (p_33 != t)))
              _fail(t);
            else
              p_33 = t;
            t = not_null(t_33);
            t = new_0_0(t);
            if(((u_33 != NULL) && (u_33 != t)))
              _fail(t);
            else
              u_33 = t;
            t = x_34(t);
            return(t);
          }
          t = not_null(s_33);
          if(((o_33 != NULL) && (o_33 != t)))
            _fail(t);
          else
            o_33 = t;
          t = not_null(s_33);
          t = new_0_0(t);
          if(((t_33 != NULL) && (t_33 != t)))
            _fail(t);
          else
            t_33 = t;
          t = w_34(t);
          return(t);
        }
        t = not_null(r_33);
        if(((n_33 != NULL) && (n_33 != t)))
          _fail(t);
        else
          n_33 = t;
        t = not_null(r_33);
        t = new_0_0(t);
        if(((s_33 != NULL) && (s_33 != t)))
          _fail(t);
        else
          s_33 = t;
        t = v_34(t);
        return(t);
      }
      t = new_0_0(t);
      if(((r_33 != NULL) && (r_33 != t)))
        _fail(t);
      else
        r_33 = t;
      t = u_34(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(q_33)), not_null(p_33)), not_null(o_33)), not_null(n_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_33)), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_33)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(l_33), (ATerm)ATmakeAppl(sym_Var_1, not_null(n_33)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_33))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(m_33), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_33)), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_33))))), (ATerm) ATmakeAppl(sym_PrimT_3, term_l_13, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_33))), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_33)))))));
    }
    return(t);
  }
  ATerm s_34 (ATerm t)
  {
    ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL;
    t = not_null(k_33);
    if(((v_33 != NULL) && (v_33 != t)))
      _fail(t);
    else
      v_33 = t;
    t = not_null(j_33);
    {
      ATerm a_34 = NULL;
      ATerm y_34 (ATerm t)
      {
        ATerm e_34 = NULL;
        ATerm a_35 (ATerm t)
        {
          t = not_null(e_34);
          if(((z_33 != NULL) && (z_33 != t)))
            _fail(t);
          else
            z_33 = t;
          t = not_null(e_34);
          return(t);
        }
        t = not_null(a_34);
        if(((y_33 != NULL) && (y_33 != t)))
          _fail(t);
        else
          y_33 = t;
        t = not_null(v_33);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL;
            ATerm z_34 (ATerm t)
            {
              t = not_null(c_34);
              if(((w_33 != NULL) && (w_33 != t)))
                _fail(t);
              else
                w_33 = t;
              t = not_null(d_34);
              if(((x_33 != NULL) && (x_33 != t)))
                _fail(t);
              else
                x_33 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_33));
              return(t);
            }
            if(((b_34 != NULL) && (b_34 != t)))
              _fail(t);
            else
              b_34 = t;
            t = not_null(b_34);
            if(match_cons(t, sym_Explode_2))
              {
                c_34 = ATgetArgument(t, 0);
                d_34 = ATgetArgument(t, 1);
                t = z_34(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(u_1, t);
          if(((e_34 != NULL) && (e_34 != t)))
            _fail(t);
          else
            e_34 = t;
          t = a_35(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((a_34 != NULL) && (a_34 != t)))
        _fail(t);
      else
        a_34 = t;
      t = y_34(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_l_13, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_33)), not_null(w_33))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_33))), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_33)))));
    }
    return(t);
  }
  ATerm t_34 (ATerm t)
  {
    ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL;
    t = not_null(k_33);
    if(((f_34 != NULL) && (f_34 != t)))
      _fail(t);
    else
      f_34 = t;
    t = not_null(j_33);
    {
      ATerm l_34 = NULL;
      ATerm b_35 (ATerm t)
      {
        ATerm m_34 = NULL;
        ATerm c_35 (ATerm t)
        {
          ATerm q_34 = NULL;
          ATerm e_35 (ATerm t)
          {
            t = not_null(q_34);
            if(((k_34 != NULL) && (k_34 != t)))
              _fail(t);
            else
              k_34 = t;
            t = not_null(q_34);
            return(t);
          }
          t = not_null(m_34);
          if(((j_34 != NULL) && (j_34 != t)))
            _fail(t);
          else
            j_34 = t;
          t = not_null(f_34);
          {
            ATerm v_1 (ATerm t)
            {
              ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
              ATerm d_35 (ATerm t)
              {
                t = not_null(o_34);
                if(((g_34 != NULL) && (g_34 != t)))
                  _fail(t);
                else
                  g_34 = t;
                t = not_null(p_34);
                if(((h_34 != NULL) && (h_34 != t)))
                  _fail(t);
                else
                  h_34 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_34));
                return(t);
              }
              if(((n_34 != NULL) && (n_34 != t)))
                _fail(t);
              else
                n_34 = t;
              t = not_null(n_34);
              if(match_cons(t, sym_Explode_2))
                {
                  o_34 = ATgetArgument(t, 0);
                  p_34 = ATgetArgument(t, 1);
                  t = d_35(t);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = oncetd_1_0(v_1, t);
            if(((q_34 != NULL) && (q_34 != t)))
              _fail(t);
            else
              q_34 = t;
            t = e_35(t);
          }
          return(t);
        }
        t = not_null(l_34);
        if(((i_34 != NULL) && (i_34 != t)))
          _fail(t);
        else
          i_34 = t;
        t = not_null(l_34);
        t = new_0_0(t);
        if(((m_34 != NULL) && (m_34 != t)))
          _fail(t);
        else
          m_34 = t;
        t = c_35(t);
        return(t);
      }
      t = new_0_0(t);
      if(((l_34 != NULL) && (l_34 != t)))
        _fail(t);
      else
        l_34 = t;
      t = b_35(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_34)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_34))), (ATerm) ATmakeAppl(sym_PrimT_3, term_m_13, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_34)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_34)), (ATerm) ATmakeAppl(sym_Op_2, term_g_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_34)), not_null(g_34)))))));
    }
    return(t);
  }
  if(((j_33 != NULL) && (j_33 != t)))
    _fail(t);
  else
    j_33 = t;
  t = not_null(j_33);
  if(match_cons(t, sym_ExplodeCong_2))
    {
      k_33 = ATgetArgument(t, 0);
      i_33 = ATgetArgument(t, 1);
      t = r_34(t);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          k_33 = ATgetArgument(t, 0);
          t = s_34(t);
        }
      else
        {
          if(match_cons(t, sym_Match_1))
            {
              k_33 = ATgetArgument(t, 0);
              t = t_34(t);
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
  ATerm v_35 = NULL,w_35 = NULL;
  ATerm d_37 (ATerm t)
  {
    ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
    t = not_null(w_35);
    if(((x_35 != NULL) && (x_35 != t)))
      _fail(t);
    else
      x_35 = t;
    t = not_null(v_35);
    {
      ATerm c_36 = NULL;
      ATerm g_37 (ATerm t)
      {
        ATerm g_36 = NULL;
        ATerm i_37 (ATerm t)
        {
          t = not_null(g_36);
          if(((b_36 != NULL) && (b_36 != t)))
            _fail(t);
          else
            b_36 = t;
          t = not_null(g_36);
          return(t);
        }
        t = not_null(c_36);
        if(((a_36 != NULL) && (a_36 != t)))
          _fail(t);
        else
          a_36 = t;
        t = not_null(x_35);
        {
          ATerm w_1 (ATerm t)
          {
            ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
            ATerm h_37 (ATerm t)
            {
              t = not_null(e_36);
              if(((y_35 != NULL) && (y_35 != t)))
                _fail(t);
              else
                y_35 = t;
              t = not_null(f_36);
              if(((z_35 != NULL) && (z_35 != t)))
                _fail(t);
              else
                z_35 = t;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(a_36)), not_null(y_35));
              return(t);
            }
            if(((d_36 != NULL) && (d_36 != t)))
              _fail(t);
            else
              d_36 = t;
            t = not_null(d_36);
            if(match_cons(t, sym_Anno_2))
              {
                e_36 = ATgetArgument(t, 0);
                f_36 = ATgetArgument(t, 1);
                t = h_37(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(w_1, t);
          if(((g_36 != NULL) && (g_36 != t)))
            _fail(t);
          else
            g_36 = t;
          t = i_37(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((c_36 != NULL) && (c_36 != t)))
        _fail(t);
      else
        c_36 = t;
      t = g_37(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(b_36)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_h_14, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_36)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(z_35))))));
    }
    return(t);
  }
  ATerm e_37 (ATerm t)
  {
    ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL;
    t = not_null(w_35);
    if(((h_36 != NULL) && (h_36 != t)))
      _fail(t);
    else
      h_36 = t;
    t = not_null(v_35);
    {
      ATerm l_36 = NULL;
      ATerm j_37 (ATerm t)
      {
        ATerm o_36 = NULL;
        ATerm w_37 (ATerm t)
        {
          t = not_null(o_36);
          if(((k_36 != NULL) && (k_36 != t)))
            _fail(t);
          else
            k_36 = t;
          t = not_null(o_36);
          return(t);
        }
        t = not_null(l_36);
        if(((j_36 != NULL) && (j_36 != t)))
          _fail(t);
        else
          j_36 = t;
        t = not_null(h_36);
        {
          ATerm x_1 (ATerm t)
          {
            ATerm m_36 = NULL,n_36 = NULL;
            ATerm r_37 (ATerm t)
            {
              t = not_null(n_36);
              if(((i_36 != NULL) && (i_36 != t)))
                _fail(t);
              else
                i_36 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_36));
              return(t);
            }
            if(((m_36 != NULL) && (m_36 != t)))
              _fail(t);
            else
              m_36 = t;
            t = not_null(m_36);
            if(match_cons(t, sym_RootApp_1))
              {
                n_36 = ATgetArgument(t, 0);
                t = r_37(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(x_1, t);
          if(((o_36 != NULL) && (o_36 != t)))
            _fail(t);
          else
            o_36 = t;
          t = w_37(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((l_36 != NULL) && (l_36 != t)))
        _fail(t);
      else
        l_36 = t;
      t = j_37(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_36))), not_null(i_36))));
    }
    return(t);
  }
  ATerm f_37 (ATerm t)
  {
    ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL;
    t = not_null(w_35);
    if(((t_36 != NULL) && (t_36 != t)))
      _fail(t);
    else
      t_36 = t;
    t = not_null(v_35);
    {
      ATerm y_36 = NULL;
      ATerm x_37 (ATerm t)
      {
        ATerm c_37 = NULL;
        ATerm z_37 (ATerm t)
        {
          t = not_null(c_37);
          if(((x_36 != NULL) && (x_36 != t)))
            _fail(t);
          else
            x_36 = t;
          t = not_null(c_37);
          return(t);
        }
        t = not_null(y_36);
        if(((w_36 != NULL) && (w_36 != t)))
          _fail(t);
        else
          w_36 = t;
        t = not_null(t_36);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
            ATerm y_37 (ATerm t)
            {
              t = not_null(a_37);
              if(((v_36 != NULL) && (v_36 != t)))
                _fail(t);
              else
                v_36 = t;
              t = not_null(b_37);
              if(((u_36 != NULL) && (u_36 != t)))
                _fail(t);
              else
                u_36 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_36));
              return(t);
            }
            if(((z_36 != NULL) && (z_36 != t)))
              _fail(t);
            else
              z_36 = t;
            t = not_null(z_36);
            if(match_cons(t, sym_App_2))
              {
                a_37 = ATgetArgument(t, 0);
                b_37 = ATgetArgument(t, 1);
                t = y_37(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(y_1, t);
          if(((c_37 != NULL) && (c_37 != t)))
            _fail(t);
          else
            c_37 = t;
          t = z_37(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((y_36 != NULL) && (y_36 != t)))
        _fail(t);
      else
        y_36 = t;
      t = x_37(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_36))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_36)), not_null(v_36)))));
    }
    return(t);
  }
  if(((v_35 != NULL) && (v_35 != t)))
    _fail(t);
  else
    v_35 = t;
  t = not_null(v_35);
  if(match_cons(t, sym_Match_1))
    {
      w_35 = ATgetArgument(t, 0);
      {
        ATerm i_14 = t;
        int j_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_37(t);
            ;
            LocalPopChoice(j_14);
          }
        else
          {
            t = i_14;
            {
              ATerm k_14 = t;
              int l_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_37(t);
                  ;
                  LocalPopChoice(l_14);
                }
              else
                {
                  t = k_14;
                  t = f_37(t);
                }
            }
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
  ATerm i_38 = NULL,j_38 = NULL,n_38 = NULL,o_38 = NULL;
  ATerm c_39 (ATerm t)
  {
    ATerm p_38 = NULL;
    t = not_null(n_38);
    if(((p_38 != NULL) && (p_38 != t)))
      _fail(t);
    else
      p_38 = t;
    t = not_null(p_38);
    return(t);
  }
  ATerm e_39 (ATerm t)
  {
    ATerm s_38 = NULL,t_38 = NULL;
    t = not_null(n_38);
    if(((s_38 != NULL) && (s_38 != t)))
      _fail(t);
    else
      s_38 = t;
    t = not_null(o_38);
    if(((t_38 != NULL) && (t_38 != t)))
      _fail(t);
    else
      t_38 = t;
    t = (ATerm) ATmakeAppl(sym_BA_2, not_null(s_38), not_null(t_38));
    return(t);
  }
  if(((i_38 != NULL) && (i_38 != t)))
    _fail(t);
  else
    i_38 = t;
  t = not_null(i_38);
  if(match_cons(t, sym_Match_1))
    {
      j_38 = ATgetArgument(t, 0);
      t = not_null(j_38);
      if(match_cons(t, sym_RootApp_1))
        {
          n_38 = ATgetArgument(t, 0);
          t = c_39(t);
        }
      else
        {
          if(match_cons(t, sym_App_2))
            {
              n_38 = ATgetArgument(t, 0);
              o_38 = ATgetArgument(t, 1);
              t = e_39(t);
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
  ATerm l_39 = NULL,m_39 = NULL;
  ATerm z_39 (ATerm t)
  {
    ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL;
    t = not_null(m_39);
    if(((n_39 != NULL) && (n_39 != t)))
      _fail(t);
    else
      n_39 = t;
    t = not_null(l_39);
    {
      ATerm y_39 = NULL;
      ATerm b_40 (ATerm t)
      {
        t = not_null(y_39);
        if(((p_39 != NULL) && (p_39 != t)))
          _fail(t);
        else
          p_39 = t;
        t = not_null(y_39);
        return(t);
      }
      t = not_null(n_39);
      {
        ATerm z_1 (ATerm t)
        {
          ATerm q_39 = NULL,r_39 = NULL,x_39 = NULL;
          ATerm a_40 (ATerm t)
          {
            t = not_null(x_39);
            if(((o_39 != NULL) && (o_39 != t)))
              _fail(t);
            else
              o_39 = t;
            t = not_null(o_39);
            return(t);
          }
          if(((q_39 != NULL) && (q_39 != t)))
            _fail(t);
          else
            q_39 = t;
          t = not_null(q_39);
          if(match_cons(t, sym_RootApp_1))
            {
              r_39 = ATgetArgument(t, 0);
              t = not_null(r_39);
              if(match_cons(t, sym_Match_1))
                {
                  x_39 = ATgetArgument(t, 0);
                  t = a_40(t);
                }
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
        t = pat_td_1_0(z_1, t);
        if(((y_39 != NULL) && (y_39 != t)))
          _fail(t);
        else
          y_39 = t;
        t = b_40(t);
      }
      t = (ATerm) ATmakeAppl(sym_Match_1, not_null(p_39));
    }
    return(t);
  }
  if(((l_39 != NULL) && (l_39 != t)))
    _fail(t);
  else
    l_39 = t;
  t = not_null(l_39);
  if(match_cons(t, sym_Match_1))
    {
      m_39 = ATgetArgument(t, 0);
      t = z_39(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Mapp_0_0 (ATerm t)
{
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0_0(t);
      ;
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      {
        ATerm r_15 = t;
        int s_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0_0(t);
            ;
            LocalPopChoice(s_15);
          }
        else
          {
            t = r_15;
            t = Mapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL;
  ATerm y_41 (ATerm t)
  {
    ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL;
    t = not_null(v_40);
    if(((w_40 != NULL) && (w_40 != t)))
      _fail(t);
    else
      w_40 = t;
    t = not_null(u_40);
    {
      ATerm b_41 = NULL;
      ATerm f_42 (ATerm t)
      {
        ATerm f_41 = NULL;
        ATerm h_42 (ATerm t)
        {
          t = not_null(f_41);
          if(((a_41 != NULL) && (a_41 != t)))
            _fail(t);
          else
            a_41 = t;
          t = not_null(f_41);
          return(t);
        }
        t = not_null(b_41);
        if(((z_40 != NULL) && (z_40 != t)))
          _fail(t);
        else
          z_40 = t;
        t = not_null(w_40);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL;
            ATerm g_42 (ATerm t)
            {
              t = not_null(d_41);
              if(((x_40 != NULL) && (x_40 != t)))
                _fail(t);
              else
                x_40 = t;
              t = not_null(e_41);
              if(((y_40 != NULL) && (y_40 != t)))
                _fail(t);
              else
                y_40 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_40));
              return(t);
            }
            if(((c_41 != NULL) && (c_41 != t)))
              _fail(t);
            else
              c_41 = t;
            t = not_null(c_41);
            if(match_cons(t, sym_Anno_2))
              {
                d_41 = ATgetArgument(t, 0);
                e_41 = ATgetArgument(t, 1);
                t = g_42(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(a_2, t);
          if(((f_41 != NULL) && (f_41 != t)))
            _fail(t);
          else
            f_41 = t;
          t = h_42(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((b_41 != NULL) && (b_41 != t)))
        _fail(t);
      else
        b_41 = t;
      t = f_42(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_40)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_t_15, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_40)), not_null(x_40))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_40))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_41))));
    }
    return(t);
  }
  ATerm d_42 (ATerm t)
  {
    ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL;
    t = not_null(v_40);
    if(((g_41 != NULL) && (g_41 != t)))
      _fail(t);
    else
      g_41 = t;
    t = not_null(u_40);
    {
      ATerm k_41 = NULL;
      ATerm i_42 (ATerm t)
      {
        ATerm n_41 = NULL;
        ATerm s_42 (ATerm t)
        {
          t = not_null(n_41);
          if(((j_41 != NULL) && (j_41 != t)))
            _fail(t);
          else
            j_41 = t;
          t = not_null(n_41);
          return(t);
        }
        t = not_null(k_41);
        if(((i_41 != NULL) && (i_41 != t)))
          _fail(t);
        else
          i_41 = t;
        t = not_null(g_41);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm l_41 = NULL,m_41 = NULL;
            ATerm r_42 (ATerm t)
            {
              t = not_null(m_41);
              if(((h_41 != NULL) && (h_41 != t)))
                _fail(t);
              else
                h_41 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_41));
              return(t);
            }
            if(((l_41 != NULL) && (l_41 != t)))
              _fail(t);
            else
              l_41 = t;
            t = not_null(l_41);
            if(match_cons(t, sym_RootApp_1))
              {
                m_41 = ATgetArgument(t, 0);
                t = r_42(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(b_2, t);
          if(((n_41 != NULL) && (n_41 != t)))
            _fail(t);
          else
            n_41 = t;
          t = s_42(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((k_41 != NULL) && (k_41 != t)))
        _fail(t);
      else
        k_41 = t;
      t = i_42(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_41)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_41), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_41))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_41))));
    }
    return(t);
  }
  ATerm e_42 (ATerm t)
  {
    ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL;
    t = not_null(v_40);
    if(((o_41 != NULL) && (o_41 != t)))
      _fail(t);
    else
      o_41 = t;
    t = not_null(u_40);
    {
      ATerm t_41 = NULL;
      ATerm t_42 (ATerm t)
      {
        ATerm x_41 = NULL;
        ATerm v_42 (ATerm t)
        {
          t = not_null(x_41);
          if(((s_41 != NULL) && (s_41 != t)))
            _fail(t);
          else
            s_41 = t;
          t = not_null(x_41);
          return(t);
        }
        t = not_null(t_41);
        if(((r_41 != NULL) && (r_41 != t)))
          _fail(t);
        else
          r_41 = t;
        t = not_null(o_41);
        {
          ATerm c_2 (ATerm t)
          {
            ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
            ATerm u_42 (ATerm t)
            {
              t = not_null(v_41);
              if(((p_41 != NULL) && (p_41 != t)))
                _fail(t);
              else
                p_41 = t;
              t = not_null(w_41);
              if(((q_41 != NULL) && (q_41 != t)))
                _fail(t);
              else
                q_41 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_41));
              return(t);
            }
            if(((u_41 != NULL) && (u_41 != t)))
              _fail(t);
            else
              u_41 = t;
            t = not_null(u_41);
            if(match_cons(t, sym_App_2))
              {
                v_41 = ATgetArgument(t, 0);
                w_41 = ATgetArgument(t, 1);
                t = u_42(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(c_2, t);
          if(((x_41 != NULL) && (x_41 != t)))
            _fail(t);
          else
            x_41 = t;
          t = v_42(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((t_41 != NULL) && (t_41 != t)))
        _fail(t);
      else
        t_41 = t;
      t = t_42(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_41)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_41), not_null(q_41), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_41)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_41))));
    }
    return(t);
  }
  if(((u_40 != NULL) && (u_40 != t)))
    _fail(t);
  else
    u_40 = t;
  t = not_null(u_40);
  if(match_cons(t, sym_Build_1))
    {
      v_40 = ATgetArgument(t, 0);
      {
        ATerm u_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_41(t);
            ;
            LocalPopChoice(v_15);
          }
        else
          {
            t = u_15;
            {
              ATerm w_15 = t;
              int x_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_42(t);
                  ;
                  LocalPopChoice(x_15);
                }
              else
                {
                  t = w_15;
                  t = e_42(t);
                }
            }
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
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL;
  ATerm h_43 (ATerm t)
  {
    ATerm e_43 = NULL;
    t = not_null(c_43);
    if(((e_43 != NULL) && (e_43 != t)))
      _fail(t);
    else
      e_43 = t;
    t = not_null(e_43);
    return(t);
  }
  ATerm i_43 (ATerm t)
  {
    ATerm f_43 = NULL,g_43 = NULL;
    t = not_null(c_43);
    if(((g_43 != NULL) && (g_43 != t)))
      _fail(t);
    else
      g_43 = t;
    t = not_null(d_43);
    if(((f_43 != NULL) && (f_43 != t)))
      _fail(t);
    else
      f_43 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_43)), not_null(g_43));
    return(t);
  }
  if(((a_43 != NULL) && (a_43 != t)))
    _fail(t);
  else
    a_43 = t;
  t = not_null(a_43);
  if(match_cons(t, sym_Build_1))
    {
      b_43 = ATgetArgument(t, 0);
      t = not_null(b_43);
      if(match_cons(t, sym_RootApp_1))
        {
          c_43 = ATgetArgument(t, 0);
          t = h_43(t);
        }
      else
        {
          if(match_cons(t, sym_App_2))
            {
              c_43 = ATgetArgument(t, 0);
              d_43 = ATgetArgument(t, 1);
              t = i_43(t);
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
ATerm As_2_0 (ATerm d_90 (ATerm), ATerm e_90 (ATerm), ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,w_43 = NULL;
  ATerm i_44 (ATerm t)
  {
    ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,c_44 = NULL;
    ATerm q_44 (ATerm t)
    {
      ATerm d_44 = NULL,e_44 = NULL;
      ATerm r_44 (ATerm t)
      {
        ATerm f_44 = NULL,g_44 = NULL;
        t = not_null(e_44);
        if(((f_44 != NULL) && (f_44 != t)))
          _fail(t);
        else
          f_44 = t;
        t = not_null(e_44);
        {
          ATerm h_44 = NULL;
          ATerm s_44 (ATerm t)
          {
            t = not_null(h_44);
            if(((g_44 != NULL) && (g_44 != t)))
              _fail(t);
            else
              g_44 = t;
            t = not_null(h_44);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(d_44), not_null(f_44)), not_null(a_44));
          if(((h_44 != NULL) && (h_44 != t)))
            _fail(t);
          else
            h_44 = t;
          t = s_44(t);
          t = not_null(g_44);
        }
        return(t);
      }
      t = not_null(c_44);
      if(((d_44 != NULL) && (d_44 != t)))
        _fail(t);
      else
        d_44 = t;
      t = not_null(z_43);
      t = e_90(t);
      if(((e_44 != NULL) && (e_44 != t)))
        _fail(t);
      else
        e_44 = t;
      t = r_44(t);
      return(t);
    }
    t = not_null(p_43);
    if(((x_43 != NULL) && (x_43 != t)))
      _fail(t);
    else
      x_43 = t;
    t = not_null(q_43);
    if(((y_43 != NULL) && (y_43 != t)))
      _fail(t);
    else
      y_43 = t;
    t = not_null(w_43);
    if(((z_43 != NULL) && (z_43 != t)))
      _fail(t);
    else
      z_43 = t;
    t = not_null(p_43);
    {
      ATerm b_44 = NULL;
      ATerm j_44 (ATerm t)
      {
        t = not_null(b_44);
        if(((a_44 != NULL) && (a_44 != t)))
          _fail(t);
        else
          a_44 = t;
        t = not_null(b_44);
        return(t);
      }
      t = SSLgetAnnotations(not_null(x_43));
      if(((b_44 != NULL) && (b_44 != t)))
        _fail(t);
      else
        b_44 = t;
      t = j_44(t);
      t = not_null(y_43);
      t = d_90(t);
      if(((c_44 != NULL) && (c_44 != t)))
        _fail(t);
      else
        c_44 = t;
      t = q_44(t);
    }
    return(t);
  }
  if(((p_43 != NULL) && (p_43 != t)))
    _fail(t);
  else
    p_43 = t;
  t = not_null(p_43);
  if(match_cons(t, sym_As_2))
    {
      q_43 = ATgetArgument(t, 0);
      w_43 = ATgetArgument(t, 1);
      t = i_44(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm PrimT_3_0 (ATerm c_94 (ATerm), ATerm d_94 (ATerm), ATerm e_94 (ATerm), ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL;
  ATerm b_46 (ATerm t)
  {
    ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,t_45 = NULL;
    ATerm h_46 (ATerm t)
    {
      ATerm u_45 = NULL,v_45 = NULL;
      ATerm m_46 (ATerm t)
      {
        ATerm w_45 = NULL,x_45 = NULL;
        ATerm n_46 (ATerm t)
        {
          ATerm y_45 = NULL,z_45 = NULL;
          t = not_null(x_45);
          if(((y_45 != NULL) && (y_45 != t)))
            _fail(t);
          else
            y_45 = t;
          t = not_null(x_45);
          {
            ATerm a_46 = NULL;
            ATerm o_46 (ATerm t)
            {
              t = not_null(a_46);
              if(((z_45 != NULL) && (z_45 != t)))
                _fail(t);
              else
                z_45 = t;
              t = not_null(a_46);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(u_45), not_null(w_45), not_null(y_45)), not_null(r_45));
            if(((a_46 != NULL) && (a_46 != t)))
              _fail(t);
            else
              a_46 = t;
            t = o_46(t);
            t = not_null(z_45);
          }
          return(t);
        }
        t = not_null(v_45);
        if(((w_45 != NULL) && (w_45 != t)))
          _fail(t);
        else
          w_45 = t;
        t = not_null(q_45);
        t = e_94(t);
        if(((x_45 != NULL) && (x_45 != t)))
          _fail(t);
        else
          x_45 = t;
        t = n_46(t);
        return(t);
      }
      t = not_null(t_45);
      if(((u_45 != NULL) && (u_45 != t)))
        _fail(t);
      else
        u_45 = t;
      t = not_null(p_45);
      t = d_94(t);
      if(((v_45 != NULL) && (v_45 != t)))
        _fail(t);
      else
        v_45 = t;
      t = m_46(t);
      return(t);
    }
    t = not_null(j_45);
    if(((n_45 != NULL) && (n_45 != t)))
      _fail(t);
    else
      n_45 = t;
    t = not_null(k_45);
    if(((o_45 != NULL) && (o_45 != t)))
      _fail(t);
    else
      o_45 = t;
    t = not_null(l_45);
    if(((p_45 != NULL) && (p_45 != t)))
      _fail(t);
    else
      p_45 = t;
    t = not_null(m_45);
    if(((q_45 != NULL) && (q_45 != t)))
      _fail(t);
    else
      q_45 = t;
    t = not_null(j_45);
    {
      ATerm s_45 = NULL;
      ATerm g_46 (ATerm t)
      {
        t = not_null(s_45);
        if(((r_45 != NULL) && (r_45 != t)))
          _fail(t);
        else
          r_45 = t;
        t = not_null(s_45);
        return(t);
      }
      t = SSLgetAnnotations(not_null(n_45));
      if(((s_45 != NULL) && (s_45 != t)))
        _fail(t);
      else
        s_45 = t;
      t = g_46(t);
      t = not_null(o_45);
      t = c_94(t);
      if(((t_45 != NULL) && (t_45 != t)))
        _fail(t);
      else
        t_45 = t;
      t = h_46(t);
    }
    return(t);
  }
  if(((j_45 != NULL) && (j_45 != t)))
    _fail(t);
  else
    j_45 = t;
  t = not_null(j_45);
  if(match_cons(t, sym_PrimT_3))
    {
      k_45 = ATgetArgument(t, 0);
      l_45 = ATgetArgument(t, 1);
      m_45 = ATgetArgument(t, 2);
      t = b_46(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Explode_2_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm t)
{
  ATerm v_46 = NULL,d_47 = NULL,e_47 = NULL;
  ATerm q_47 (ATerm t)
  {
    ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,k_47 = NULL;
    ATerm s_47 (ATerm t)
    {
      ATerm l_47 = NULL,m_47 = NULL;
      ATerm t_47 (ATerm t)
      {
        ATerm n_47 = NULL,o_47 = NULL;
        t = not_null(m_47);
        if(((n_47 != NULL) && (n_47 != t)))
          _fail(t);
        else
          n_47 = t;
        t = not_null(m_47);
        {
          ATerm p_47 = NULL;
          ATerm u_47 (ATerm t)
          {
            t = not_null(p_47);
            if(((o_47 != NULL) && (o_47 != t)))
              _fail(t);
            else
              o_47 = t;
            t = not_null(p_47);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(l_47), not_null(n_47)), not_null(i_47));
          if(((p_47 != NULL) && (p_47 != t)))
            _fail(t);
          else
            p_47 = t;
          t = u_47(t);
          t = not_null(o_47);
        }
        return(t);
      }
      t = not_null(k_47);
      if(((l_47 != NULL) && (l_47 != t)))
        _fail(t);
      else
        l_47 = t;
      t = not_null(h_47);
      t = x_89(t);
      if(((m_47 != NULL) && (m_47 != t)))
        _fail(t);
      else
        m_47 = t;
      t = t_47(t);
      return(t);
    }
    t = not_null(v_46);
    if(((f_47 != NULL) && (f_47 != t)))
      _fail(t);
    else
      f_47 = t;
    t = not_null(d_47);
    if(((g_47 != NULL) && (g_47 != t)))
      _fail(t);
    else
      g_47 = t;
    t = not_null(e_47);
    if(((h_47 != NULL) && (h_47 != t)))
      _fail(t);
    else
      h_47 = t;
    t = not_null(v_46);
    {
      ATerm j_47 = NULL;
      ATerm r_47 (ATerm t)
      {
        t = not_null(j_47);
        if(((i_47 != NULL) && (i_47 != t)))
          _fail(t);
        else
          i_47 = t;
        t = not_null(j_47);
        return(t);
      }
      t = SSLgetAnnotations(not_null(f_47));
      if(((j_47 != NULL) && (j_47 != t)))
        _fail(t);
      else
        j_47 = t;
      t = r_47(t);
      t = not_null(g_47);
      t = w_89(t);
      if(((k_47 != NULL) && (k_47 != t)))
        _fail(t);
      else
        k_47 = t;
      t = s_47(t);
    }
    return(t);
  }
  if(((v_46 != NULL) && (v_46 != t)))
    _fail(t);
  else
    v_46 = t;
  t = not_null(v_46);
  if(match_cons(t, sym_Explode_2))
    {
      d_47 = ATgetArgument(t, 0);
      e_47 = ATgetArgument(t, 1);
      t = q_47(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Op_2_0 (ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL;
  ATerm s_48 (ATerm t)
  {
    ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,k_48 = NULL;
    ATerm w_48 (ATerm t)
    {
      ATerm l_48 = NULL,m_48 = NULL;
      ATerm x_48 (ATerm t)
      {
        ATerm p_48 = NULL,q_48 = NULL;
        t = not_null(m_48);
        if(((p_48 != NULL) && (p_48 != t)))
          _fail(t);
        else
          p_48 = t;
        t = not_null(m_48);
        {
          ATerm r_48 = NULL;
          ATerm y_48 (ATerm t)
          {
            t = not_null(r_48);
            if(((q_48 != NULL) && (q_48 != t)))
              _fail(t);
            else
              q_48 = t;
            t = not_null(r_48);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(l_48), not_null(p_48)), not_null(h_48));
          if(((r_48 != NULL) && (r_48 != t)))
            _fail(t);
          else
            r_48 = t;
          t = y_48(t);
          t = not_null(q_48);
        }
        return(t);
      }
      t = not_null(k_48);
      if(((l_48 != NULL) && (l_48 != t)))
        _fail(t);
      else
        l_48 = t;
      t = not_null(g_48);
      t = t_89(t);
      if(((m_48 != NULL) && (m_48 != t)))
        _fail(t);
      else
        m_48 = t;
      t = x_48(t);
      return(t);
    }
    t = not_null(b_48);
    if(((e_48 != NULL) && (e_48 != t)))
      _fail(t);
    else
      e_48 = t;
    t = not_null(c_48);
    if(((f_48 != NULL) && (f_48 != t)))
      _fail(t);
    else
      f_48 = t;
    t = not_null(d_48);
    if(((g_48 != NULL) && (g_48 != t)))
      _fail(t);
    else
      g_48 = t;
    t = not_null(b_48);
    {
      ATerm j_48 = NULL;
      ATerm v_48 (ATerm t)
      {
        t = not_null(j_48);
        if(((h_48 != NULL) && (h_48 != t)))
          _fail(t);
        else
          h_48 = t;
        t = not_null(j_48);
        return(t);
      }
      t = SSLgetAnnotations(not_null(e_48));
      if(((j_48 != NULL) && (j_48 != t)))
        _fail(t);
      else
        j_48 = t;
      t = v_48(t);
      t = not_null(f_48);
      t = s_89(t);
      if(((k_48 != NULL) && (k_48 != t)))
        _fail(t);
      else
        k_48 = t;
      t = w_48(t);
    }
    return(t);
  }
  if(((b_48 != NULL) && (b_48 != t)))
    _fail(t);
  else
    b_48 = t;
  t = not_null(b_48);
  if(match_cons(t, sym_Op_2))
    {
      c_48 = ATgetArgument(t, 0);
      d_48 = ATgetArgument(t, 1);
      t = s_48(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pat_td_1_0 (ATerm c_133 (ATerm), ATerm t)
{
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_133(t);
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
            ATerm d_2 (ATerm t)
            {
              ATerm e_2 (ATerm t)
              {
                t = pat_td_1_0(c_133, t);
                return(t);
              }
              t = fetch_1_0(e_2, t);
              return(t);
            }
            t = Op_2_0(_id, d_2, t);
            ;
            LocalPopChoice(z_16);
          }
        else
          {
            t = y_16;
            {
              ATerm a_17 = t;
              int b_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_2 (ATerm t)
                  {
                    t = pat_td_1_0(c_133, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, f_2, t);
                  ;
                  LocalPopChoice(b_17);
                }
              else
                {
                  t = a_17;
                  {
                    ATerm v_17 = t;
                    int w_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_2 (ATerm t)
                        {
                          t = pat_td_1_0(c_133, t);
                          return(t);
                        }
                        t = Explode_2_0(g_2, _id, t);
                        ;
                        LocalPopChoice(w_17);
                      }
                    else
                      {
                        t = v_17;
                        {
                          ATerm h_18 = t;
                          int i_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_2 (ATerm t)
                              {
                                ATerm i_2 (ATerm t)
                                {
                                  t = pat_td_1_0(c_133, t);
                                  return(t);
                                }
                                t = fetch_1_0(i_2, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, h_2, t);
                              ;
                              LocalPopChoice(i_18);
                            }
                          else
                            {
                              t = h_18;
                              {
                                ATerm j_2 (ATerm t)
                                {
                                  t = pat_td_1_0(c_133, t);
                                  return(t);
                                }
                                t = As_2_0(_id, j_2, t);
                              }
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
  ATerm k_49 = NULL,l_49 = NULL;
  ATerm o_50 (ATerm t)
  {
    ATerm m_49 = NULL,p_49 = NULL,q_49 = NULL;
    t = not_null(l_49);
    if(((m_49 != NULL) && (m_49 != t)))
      _fail(t);
    else
      m_49 = t;
    t = not_null(k_49);
    {
      ATerm v_49 = NULL;
      ATerm t_50 (ATerm t)
      {
        t = not_null(v_49);
        if(((q_49 != NULL) && (q_49 != t)))
          _fail(t);
        else
          q_49 = t;
        t = not_null(v_49);
        return(t);
      }
      t = not_null(m_49);
      {
        ATerm k_2 (ATerm t)
        {
          ATerm r_49 = NULL,s_49 = NULL,u_49 = NULL;
          ATerm q_50 (ATerm t)
          {
            t = not_null(u_49);
            if(((p_49 != NULL) && (p_49 != t)))
              _fail(t);
            else
              p_49 = t;
            t = not_null(p_49);
            return(t);
          }
          if(((r_49 != NULL) && (r_49 != t)))
            _fail(t);
          else
            r_49 = t;
          t = not_null(r_49);
          if(match_cons(t, sym_RootApp_1))
            {
              s_49 = ATgetArgument(t, 0);
              t = not_null(s_49);
              if(match_cons(t, sym_Build_1))
                {
                  u_49 = ATgetArgument(t, 0);
                  t = q_50(t);
                }
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
        t = pat_td_1_0(k_2, t);
        if(((v_49 != NULL) && (v_49 != t)))
          _fail(t);
        else
          v_49 = t;
        t = t_50(t);
      }
      t = (ATerm) ATmakeAppl(sym_Build_1, not_null(q_49));
    }
    return(t);
  }
  ATerm p_50 (ATerm t)
  {
    ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL,e_50 = NULL;
    t = not_null(l_49);
    if(((w_49 != NULL) && (w_49 != t)))
      _fail(t);
    else
      w_49 = t;
    t = not_null(k_49);
    {
      ATerm n_50 = NULL;
      ATerm v_50 (ATerm t)
      {
        t = not_null(n_50);
        if(((e_50 != NULL) && (e_50 != t)))
          _fail(t);
        else
          e_50 = t;
        t = not_null(n_50);
        return(t);
      }
      t = not_null(w_49);
      {
        ATerm l_2 (ATerm t)
        {
          ATerm f_50 = NULL,g_50 = NULL,l_50 = NULL,m_50 = NULL;
          ATerm u_50 (ATerm t)
          {
            t = not_null(l_50);
            if(((y_49 != NULL) && (y_49 != t)))
              _fail(t);
            else
              y_49 = t;
            t = not_null(m_50);
            if(((x_49 != NULL) && (x_49 != t)))
              _fail(t);
            else
              x_49 = t;
            t = not_null(y_49);
            return(t);
          }
          if(((f_50 != NULL) && (f_50 != t)))
            _fail(t);
          else
            f_50 = t;
          t = not_null(f_50);
          if(match_cons(t, sym_App_2))
            {
              g_50 = ATgetArgument(t, 0);
              m_50 = ATgetArgument(t, 1);
              t = not_null(g_50);
              if(match_cons(t, sym_Build_1))
                {
                  l_50 = ATgetArgument(t, 0);
                  t = u_50(t);
                }
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
        t = pat_td_1_0(l_2, t);
        if(((n_50 != NULL) && (n_50 != t)))
          _fail(t);
        else
          n_50 = t;
        t = v_50(t);
      }
      t = (ATerm) ATmakeAppl(sym_Build_1, not_null(e_50));
    }
    return(t);
  }
  if(((k_49 != NULL) && (k_49 != t)))
    _fail(t);
  else
    k_49 = t;
  t = not_null(k_49);
  if(match_cons(t, sym_Build_1))
    {
      l_49 = ATgetArgument(t, 0);
      {
        ATerm t_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_50(t);
            ;
            LocalPopChoice(u_18);
          }
        else
          {
            t = t_18;
            t = p_50(t);
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
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0_0(t);
      ;
      LocalPopChoice(c_19);
    }
  else
    {
      t = b_19;
      {
        ATerm d_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0_0(t);
            ;
            LocalPopChoice(l_19);
          }
        else
          {
            t = d_19;
            t = Bapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm MkConstType_0_0 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL;
  ATerm b_51 (ATerm t)
  {
    ATerm a_51 = NULL;
    t = not_null(z_50);
    if(((a_51 != NULL) && (a_51 != t)))
      _fail(t);
    else
      a_51 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(a_51), term_w_19);
    return(t);
  }
  if(((y_50 != NULL) && (y_50 != t)))
    _fail(t);
  else
    y_50 = t;
  t = not_null(y_50);
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_50 = ATgetArgument(t, 0);
      t = b_51(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0_0 (ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL;
  ATerm h_51 (ATerm t)
  {
    ATerm g_51 = NULL;
    t = not_null(f_51);
    if(((g_51 != NULL) && (g_51 != t)))
      _fail(t);
    else
      g_51 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(g_51), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_w_19), term_w_19));
    return(t);
  }
  if(((e_51 != NULL) && (e_51 != t)))
    _fail(t);
  else
    e_51 = t;
  t = not_null(e_51);
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      f_51 = ATgetArgument(t, 0);
      t = h_51(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(q_0, _id, t);
      {
        ATerm m_2 (ATerm t)
        {
          ATerm n_2 (ATerm t)
          {
            t = map1_1_0(q_0, t);
            return(t);
          }
          t = try_1_0(n_2, t);
          return(t);
        }
        t = Cons_2_0(_id, m_2, t);
      }
      ;
      LocalPopChoice(y_19);
    }
  else
    {
      t = x_19;
      {
        ATerm o_2 (ATerm t)
        {
          t = map1_1_0(q_0, t);
          return(t);
        }
        t = Cons_2_0(_id, o_2, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL;
  ATerm o_54 (ATerm t)
  {
    ATerm v_52 = NULL,w_52 = NULL;
    t = not_null(t_52);
    if(((v_52 != NULL) && (v_52 != t)))
      _fail(t);
    else
      v_52 = t;
    t = not_null(u_52);
    if(((w_52 != NULL) && (w_52 != t)))
      _fail(t);
    else
      w_52 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(v_52), not_null(w_52));
    return(t);
  }
  ATerm p_54 (ATerm t)
  {
    ATerm x_52 = NULL,y_52 = NULL;
    t = not_null(o_52);
    if(((x_52 != NULL) && (x_52 != t)))
      _fail(t);
    else
      x_52 = t;
    t = not_null(p_52);
    if(((y_52 != NULL) && (y_52 != t)))
      _fail(t);
    else
      y_52 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(x_52), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(y_52)));
    return(t);
  }
  ATerm q_54 (ATerm t)
  {
    t = term_b_12;
    return(t);
  }
  ATerm r_54 (ATerm t)
  {
    ATerm z_52 = NULL,a_53 = NULL;
    t = not_null(o_52);
    if(((z_52 != NULL) && (z_52 != t)))
      _fail(t);
    else
      z_52 = t;
    t = not_null(p_52);
    if(((a_53 != NULL) && (a_53 != t)))
      _fail(t);
    else
      a_53 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(z_52), (ATerm) ATmakeAppl(sym_Choices_1, not_null(a_53)));
    return(t);
  }
  ATerm s_54 (ATerm t)
  {
    t = term_b_12;
    return(t);
  }
  ATerm t_54 (ATerm t)
  {
    ATerm b_53 = NULL,c_53 = NULL;
    t = not_null(o_52);
    if(((b_53 != NULL) && (b_53 != t)))
      _fail(t);
    else
      b_53 = t;
    t = not_null(p_52);
    if(((c_53 != NULL) && (c_53 != t)))
      _fail(t);
    else
      c_53 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_53), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(c_53)));
    return(t);
  }
  ATerm u_54 (ATerm t)
  {
    t = term_z_19;
    return(t);
  }
  ATerm v_54 (ATerm t)
  {
    ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL;
    t = not_null(t_52);
    if(((d_53 != NULL) && (d_53 != t)))
      _fail(t);
    else
      d_53 = t;
    t = not_null(u_52);
    if(((e_53 != NULL) && (e_53 != t)))
      _fail(t);
    else
      e_53 = t;
    t = not_null(r_52);
    if(((f_53 != NULL) && (f_53 != t)))
      _fail(t);
    else
      f_53 = t;
    t = not_null(q_52);
    if(((g_53 != NULL) && (g_53 != t)))
      _fail(t);
    else
      g_53 = t;
    t = not_null(s_52);
    {
      ATerm j_53 = NULL;
      ATerm d_55 (ATerm t)
      {
        ATerm k_53 = NULL;
        ATerm e_55 (ATerm t)
        {
          t = not_null(k_53);
          if(((i_53 != NULL) && (i_53 != t)))
            _fail(t);
          else
            i_53 = t;
          t = not_null(k_53);
          return(t);
        }
        t = not_null(j_53);
        if(((h_53 != NULL) && (h_53 != t)))
          _fail(t);
        else
          h_53 = t;
        t = not_null(f_53);
        {
          ATerm p_2 (ATerm t)
          {
            t = try_1_0(MkConstType_0_0, t);
            return(t);
          }
          t = map1_1_0(p_2, t);
          if(((k_53 != NULL) && (k_53 != t)))
            _fail(t);
          else
            k_53 = t;
          t = e_55(t);
        }
        return(t);
      }
      t = not_null(e_53);
      t = map1_1_0(MkFunType_0_0, t);
      if(((j_53 != NULL) && (j_53 != t)))
        _fail(t);
      else
        j_53 = t;
      t = d_55(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(d_53), not_null(h_53), not_null(i_53), not_null(g_53));
    }
    return(t);
  }
  ATerm w_54 (ATerm t)
  {
    ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL;
    t = not_null(t_52);
    if(((l_53 != NULL) && (l_53 != t)))
      _fail(t);
    else
      l_53 = t;
    t = not_null(u_52);
    if(((m_53 != NULL) && (m_53 != t)))
      _fail(t);
    else
      m_53 = t;
    t = not_null(r_52);
    if(((n_53 != NULL) && (n_53 != t)))
      _fail(t);
    else
      n_53 = t;
    t = not_null(q_52);
    if(((o_53 != NULL) && (o_53 != t)))
      _fail(t);
    else
      o_53 = t;
    t = not_null(s_52);
    {
      ATerm r_53 = NULL;
      ATerm f_55 (ATerm t)
      {
        ATerm s_53 = NULL;
        ATerm g_55 (ATerm t)
        {
          t = not_null(s_53);
          if(((q_53 != NULL) && (q_53 != t)))
            _fail(t);
          else
            q_53 = t;
          t = not_null(s_53);
          return(t);
        }
        t = not_null(r_53);
        if(((p_53 != NULL) && (p_53 != t)))
          _fail(t);
        else
          p_53 = t;
        t = not_null(m_53);
        {
          ATerm q_2 (ATerm t)
          {
            t = try_1_0(MkFunType_0_0, t);
            return(t);
          }
          t = map_1_0(q_2, t);
          if(((s_53 != NULL) && (s_53 != t)))
            _fail(t);
          else
            s_53 = t;
          t = g_55(t);
        }
        return(t);
      }
      t = not_null(n_53);
      t = map1_1_0(MkConstType_0_0, t);
      if(((r_53 != NULL) && (r_53 != t)))
        _fail(t);
      else
        r_53 = t;
      t = f_55(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(l_53), not_null(q_53), not_null(p_53), not_null(o_53));
    }
    return(t);
  }
  ATerm x_54 (ATerm t)
  {
    ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL,y_53 = NULL,z_53 = NULL;
    t = not_null(t_52);
    if(((t_53 != NULL) && (t_53 != t)))
      _fail(t);
    else
      t_53 = t;
    t = not_null(u_52);
    if(((u_53 != NULL) && (u_53 != t)))
      _fail(t);
    else
      u_53 = t;
    t = not_null(r_52);
    if(((v_53 != NULL) && (v_53 != t)))
      _fail(t);
    else
      v_53 = t;
    t = not_null(q_52);
    if(((w_53 != NULL) && (w_53 != t)))
      _fail(t);
    else
      w_53 = t;
    t = not_null(s_52);
    {
      ATerm a_54 = NULL;
      ATerm h_55 (ATerm t)
      {
        ATerm b_54 = NULL;
        ATerm i_55 (ATerm t)
        {
          t = not_null(b_54);
          if(((z_53 != NULL) && (z_53 != t)))
            _fail(t);
          else
            z_53 = t;
          t = not_null(b_54);
          return(t);
        }
        t = not_null(a_54);
        if(((y_53 != NULL) && (y_53 != t)))
          _fail(t);
        else
          y_53 = t;
        t = not_null(v_53);
        {
          ATerm r_2 (ATerm t)
          {
            t = try_1_0(MkConstType_0_0, t);
            return(t);
          }
          t = map_1_0(r_2, t);
          if(((b_54 != NULL) && (b_54 != t)))
            _fail(t);
          else
            b_54 = t;
          t = i_55(t);
        }
        return(t);
      }
      t = not_null(u_53);
      t = map1_1_0(MkFunType_0_0, t);
      if(((a_54 != NULL) && (a_54 != t)))
        _fail(t);
      else
        a_54 = t;
      t = h_55(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(t_53), not_null(y_53), not_null(z_53), not_null(w_53));
    }
    return(t);
  }
  ATerm y_54 (ATerm t)
  {
    ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
    t = not_null(t_52);
    if(((d_54 != NULL) && (d_54 != t)))
      _fail(t);
    else
      d_54 = t;
    t = not_null(u_52);
    if(((c_54 != NULL) && (c_54 != t)))
      _fail(t);
    else
      c_54 = t;
    t = not_null(r_52);
    if(((e_54 != NULL) && (e_54 != t)))
      _fail(t);
    else
      e_54 = t;
    t = (ATerm) ATmakeAppl(sym_App_2, not_null(c_54), (ATerm) ATmakeAppl(sym_Op_2, term_g_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_54)), not_null(d_54))));
    return(t);
  }
  ATerm z_54 (ATerm t)
  {
    ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
    t = not_null(t_52);
    if(((g_54 != NULL) && (g_54 != t)))
      _fail(t);
    else
      g_54 = t;
    t = not_null(u_52);
    if(((f_54 != NULL) && (f_54 != t)))
      _fail(t);
    else
      f_54 = t;
    t = not_null(r_52);
    if(((h_54 != NULL) && (h_54 != t)))
      _fail(t);
    else
      h_54 = t;
    t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(h_54))), not_null(g_54)), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_54))));
    return(t);
  }
  ATerm a_55 (ATerm t)
  {
    ATerm i_54 = NULL,j_54 = NULL;
    t = not_null(t_52);
    if(((i_54 != NULL) && (i_54 != t)))
      _fail(t);
    else
      i_54 = t;
    t = not_null(u_52);
    if(((j_54 != NULL) && (j_54 != t)))
      _fail(t);
    else
      j_54 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_54), (ATerm) ATmakeAppl(sym_Match_1, not_null(j_54)));
    return(t);
  }
  ATerm b_55 (ATerm t)
  {
    ATerm k_54 = NULL,l_54 = NULL;
    t = not_null(t_52);
    if(((k_54 != NULL) && (k_54 != t)))
      _fail(t);
    else
      k_54 = t;
    t = not_null(u_52);
    if(((l_54 != NULL) && (l_54 != t)))
      _fail(t);
    else
      l_54 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_54)), not_null(l_54));
    return(t);
  }
  ATerm c_55 (ATerm t)
  {
    ATerm m_54 = NULL,n_54 = NULL;
    t = not_null(t_52);
    if(((n_54 != NULL) && (n_54 != t)))
      _fail(t);
    else
      n_54 = t;
    t = not_null(u_52);
    if(((m_54 != NULL) && (m_54 != t)))
      _fail(t);
    else
      m_54 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_54)), not_null(n_54));
    return(t);
  }
  if(((s_52 != NULL) && (s_52 != t)))
    _fail(t);
  else
    s_52 = t;
  t = not_null(s_52);
  if(match_cons(t, sym_Lets_2))
    {
      t_52 = ATgetArgument(t, 0);
      u_52 = ATgetArgument(t, 1);
      t = o_54(t);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          t_52 = ATgetArgument(t, 0);
          t = not_null(t_52);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_52 = ATgetFirst((ATermList) t);
              p_52 = (ATerm) ATgetNext((ATermList) t);
              t = p_54(t);
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = q_54(t);
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
              t_52 = ATgetArgument(t, 0);
              t = not_null(t_52);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_52 = ATgetFirst((ATermList) t);
                  p_52 = (ATerm) ATgetNext((ATermList) t);
                  t = r_54(t);
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = s_54(t);
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
                  t_52 = ATgetArgument(t, 0);
                  t = not_null(t_52);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      o_52 = ATgetFirst((ATermList) t);
                      p_52 = (ATerm) ATgetNext((ATermList) t);
                      t = t_54(t);
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = u_54(t);
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
                      t_52 = ATgetArgument(t, 0);
                      u_52 = ATgetArgument(t, 1);
                      r_52 = ATgetArgument(t, 2);
                      q_52 = ATgetArgument(t, 3);
                      t = v_54(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          t_52 = ATgetArgument(t, 0);
                          u_52 = ATgetArgument(t, 1);
                          r_52 = ATgetArgument(t, 2);
                          q_52 = ATgetArgument(t, 3);
                          {
                            ATerm p_20 = t;
                            int q_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_54(t);
                                ;
                                LocalPopChoice(q_20);
                              }
                            else
                              {
                                t = p_20;
                                t = x_54(t);
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              t_52 = ATgetArgument(t, 0);
                              u_52 = ATgetArgument(t, 1);
                              r_52 = ATgetArgument(t, 2);
                              t = y_54(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  t_52 = ATgetArgument(t, 0);
                                  u_52 = ATgetArgument(t, 1);
                                  r_52 = ATgetArgument(t, 2);
                                  t = z_54(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      t_52 = ATgetArgument(t, 0);
                                      u_52 = ATgetArgument(t, 1);
                                      t = a_55(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          t_52 = ATgetArgument(t, 0);
                                          u_52 = ATgetArgument(t, 1);
                                          t = b_55(t);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              t_52 = ATgetArgument(t, 0);
                                              u_52 = ATgetArgument(t, 1);
                                              t = c_55(t);
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
  ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL;
  ATerm y_55 (ATerm t)
  {
    ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
    t = not_null(p_55);
    if(((u_55 != NULL) && (u_55 != t)))
      _fail(t);
    else
      u_55 = t;
    t = not_null(q_55);
    if(((w_55 != NULL) && (w_55 != t)))
      _fail(t);
    else
      w_55 = t;
    t = not_null(s_55);
    if(((v_55 != NULL) && (v_55 != t)))
      _fail(t);
    else
      v_55 = t;
    t = not_null(t_55);
    if(((x_55 != NULL) && (x_55 != t)))
      _fail(t);
    else
      x_55 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_55)), not_null(u_55)), (ATerm) ATinsert(CheckATermList(not_null(x_55)), not_null(w_55)));
    return(t);
  }
  if(((n_55 != NULL) && (n_55 != t)))
    _fail(t);
  else
    n_55 = t;
  t = not_null(n_55);
  if(match_cons(t, sym__2))
    {
      o_55 = ATgetArgument(t, 0);
      r_55 = ATgetArgument(t, 1);
      t = not_null(o_55);
      if(match_cons(t, sym__2))
        {
          p_55 = ATgetArgument(t, 0);
          q_55 = ATgetArgument(t, 1);
          t = not_null(r_55);
          if(match_cons(t, sym__2))
            {
              s_55 = ATgetArgument(t, 0);
              t_55 = ATgetArgument(t, 1);
              t = y_55(t);
            }
          else
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
  ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL;
  ATerm g_56 (ATerm t)
  {
    ATerm e_56 = NULL,f_56 = NULL;
    t = not_null(c_56);
    if(((e_56 != NULL) && (e_56 != t)))
      _fail(t);
    else
      e_56 = t;
    t = not_null(d_56);
    if(((f_56 != NULL) && (f_56 != t)))
      _fail(t);
    else
      f_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_56), not_null(f_56));
    return(t);
  }
  if(((b_56 != NULL) && (b_56 != t)))
    _fail(t);
  else
    b_56 = t;
  t = not_null(b_56);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_56 = ATgetFirst((ATermList) t);
      d_56 = (ATerm) ATgetNext((ATermList) t);
      t = g_56(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0_0 (ATerm t)
{
  ATerm j_56 = NULL;
  ATerm k_56 (ATerm t)
  {
    t = term_r_20;
    return(t);
  }
  if(((j_56 != NULL) && (j_56 != t)))
    _fail(t);
  else
    j_56 = t;
  t = not_null(j_56);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_56(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1_0 (ATerm w_108 (ATerm), ATerm t)
{
  t = genzip_4_0(UnZip1_0_0, UnZip3_0_0, UnZip2_0_0, w_108, t);
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL;
  ATerm v_56 (ATerm t)
  {
    ATerm r_56 = NULL,s_56 = NULL;
    t = not_null(p_56);
    if(((r_56 != NULL) && (r_56 != t)))
      _fail(t);
    else
      r_56 = t;
    t = not_null(p_56);
    {
      ATerm t_56 = NULL;
      ATerm x_56 (ATerm t)
      {
        t = not_null(t_56);
        if(((s_56 != NULL) && (s_56 != t)))
          _fail(t);
        else
          s_56 = t;
        t = not_null(t_56);
        return(t);
      }
      t = not_null(r_56);
      {
        ATerm s_20 = t;
        if((PushChoice() == 0))
          {
            t = Var_1_0(_id, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_20;
          }
        t = new_0_0(t);
        if(((t_56 != NULL) && (t_56 != t)))
          _fail(t);
        else
          t_56 = t;
        t = x_56(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(s_56)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_56)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_56))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_56))));
    }
    return(t);
  }
  ATerm w_56 (ATerm t)
  {
    ATerm u_56 = NULL;
    t = not_null(q_56);
    if(((u_56 != NULL) && (u_56 != t)))
      _fail(t);
    else
      u_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_z_19, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_56))));
    return(t);
  }
  if(((p_56 != NULL) && (p_56 != t)))
    _fail(t);
  else
    p_56 = t;
  t = not_null(p_56);
  if(match_cons(t, sym_Var_1))
    {
      q_56 = ATgetArgument(t, 0);
      {
        ATerm e_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_56(t);
            ;
            LocalPopChoice(j_21);
          }
        else
          {
            t = e_21;
            t = w_56(t);
          }
      }
    }
  else
    {
      t = v_56(t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL;
  ATerm l_58 (ATerm t)
  {
    ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL,r_57 = NULL;
    ATerm s_58 (ATerm t)
    {
      ATerm s_57 = NULL,t_57 = NULL;
      t = not_null(r_57);
      if(((s_57 != NULL) && (s_57 != t)))
        _fail(t);
      else
        s_57 = t;
      t = not_null(r_57);
      {
        ATerm u_57 = NULL;
        ATerm t_58 (ATerm t)
        {
          t = not_null(u_57);
          if(((t_57 != NULL) && (t_57 != t)))
            _fail(t);
          else
            t_57 = t;
          t = not_null(u_57);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(s_57)), not_null(p_57));
        if(((u_57 != NULL) && (u_57 != t)))
          _fail(t);
        else
          u_57 = t;
        t = t_58(t);
        t = not_null(t_57);
      }
      return(t);
    }
    t = not_null(l_57);
    if(((n_57 != NULL) && (n_57 != t)))
      _fail(t);
    else
      n_57 = t;
    t = not_null(m_57);
    if(((o_57 != NULL) && (o_57 != t)))
      _fail(t);
    else
      o_57 = t;
    t = not_null(l_57);
    {
      ATerm q_57 = NULL;
      ATerm r_58 (ATerm t)
      {
        t = not_null(q_57);
        if(((p_57 != NULL) && (p_57 != t)))
          _fail(t);
        else
          p_57 = t;
        t = not_null(q_57);
        return(t);
      }
      t = SSLgetAnnotations(not_null(n_57));
      if(((q_57 != NULL) && (q_57 != t)))
        _fail(t);
      else
        q_57 = t;
      t = r_58(t);
      t = not_null(o_57);
      t = o_0(t);
      if(((r_57 != NULL) && (r_57 != t)))
        _fail(t);
      else
        r_57 = t;
      t = s_58(t);
    }
    return(t);
  }
  ATerm p_58 (ATerm t)
  {
    ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL,z_57 = NULL;
    ATerm v_58 (ATerm t)
    {
      ATerm a_58 = NULL,b_58 = NULL;
      t = not_null(z_57);
      if(((a_58 != NULL) && (a_58 != t)))
        _fail(t);
      else
        a_58 = t;
      t = not_null(z_57);
      {
        ATerm c_58 = NULL;
        ATerm w_58 (ATerm t)
        {
          t = not_null(c_58);
          if(((b_58 != NULL) && (b_58 != t)))
            _fail(t);
          else
            b_58 = t;
          t = not_null(c_58);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(a_58)), not_null(x_57));
        if(((c_58 != NULL) && (c_58 != t)))
          _fail(t);
        else
          c_58 = t;
        t = w_58(t);
        t = not_null(b_58);
      }
      return(t);
    }
    t = not_null(l_57);
    if(((v_57 != NULL) && (v_57 != t)))
      _fail(t);
    else
      v_57 = t;
    t = not_null(m_57);
    if(((w_57 != NULL) && (w_57 != t)))
      _fail(t);
    else
      w_57 = t;
    t = not_null(l_57);
    {
      ATerm y_57 = NULL;
      ATerm u_58 (ATerm t)
      {
        t = not_null(y_57);
        if(((x_57 != NULL) && (x_57 != t)))
          _fail(t);
        else
          x_57 = t;
        t = not_null(y_57);
        return(t);
      }
      t = SSLgetAnnotations(not_null(v_57));
      if(((y_57 != NULL) && (y_57 != t)))
        _fail(t);
      else
        y_57 = t;
      t = u_58(t);
      t = not_null(w_57);
      t = o_0(t);
      if(((z_57 != NULL) && (z_57 != t)))
        _fail(t);
      else
        z_57 = t;
      t = v_58(t);
    }
    return(t);
  }
  ATerm q_58 (ATerm t)
  {
    ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL,h_58 = NULL;
    ATerm y_58 (ATerm t)
    {
      ATerm i_58 = NULL,j_58 = NULL;
      t = not_null(h_58);
      if(((i_58 != NULL) && (i_58 != t)))
        _fail(t);
      else
        i_58 = t;
      t = not_null(h_58);
      {
        ATerm k_58 = NULL;
        ATerm z_58 (ATerm t)
        {
          t = not_null(k_58);
          if(((j_58 != NULL) && (j_58 != t)))
            _fail(t);
          else
            j_58 = t;
          t = not_null(k_58);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(i_58)), not_null(f_58));
        if(((k_58 != NULL) && (k_58 != t)))
          _fail(t);
        else
          k_58 = t;
        t = z_58(t);
        t = not_null(j_58);
      }
      return(t);
    }
    t = not_null(l_57);
    if(((d_58 != NULL) && (d_58 != t)))
      _fail(t);
    else
      d_58 = t;
    t = not_null(m_57);
    if(((e_58 != NULL) && (e_58 != t)))
      _fail(t);
    else
      e_58 = t;
    t = not_null(l_57);
    {
      ATerm g_58 = NULL;
      ATerm x_58 (ATerm t)
      {
        t = not_null(g_58);
        if(((f_58 != NULL) && (f_58 != t)))
          _fail(t);
        else
          f_58 = t;
        t = not_null(g_58);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_58));
      if(((g_58 != NULL) && (g_58 != t)))
        _fail(t);
      else
        g_58 = t;
      t = x_58(t);
      t = not_null(e_58);
      t = o_0(t);
      if(((h_58 != NULL) && (h_58 != t)))
        _fail(t);
      else
        h_58 = t;
      t = y_58(t);
    }
    return(t);
  }
  if(((l_57 != NULL) && (l_57 != t)))
    _fail(t);
  else
    l_57 = t;
  t = not_null(l_57);
  if(match_cons(t, sym_Var_1))
    {
      m_57 = ATgetArgument(t, 0);
      {
        ATerm k_21 = t;
        int l_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_58(t);
            ;
            LocalPopChoice(l_21);
          }
        else
          {
            t = k_21;
            {
              ATerm m_21 = t;
              int n_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_58(t);
                  ;
                  LocalPopChoice(n_21);
                }
              else
                {
                  t = m_21;
                  t = q_58(t);
                }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm j_59 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL;
  ATerm k_64 (ATerm t)
  {
    ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL;
    t = not_null(s_61);
    if(((q_62 != NULL) && (q_62 != t)))
      _fail(t);
    else
      q_62 = t;
    t = not_null(t_61);
    if(((r_62 != NULL) && (r_62 != t)))
      _fail(t);
    else
      r_62 = t;
    t = not_null(j_59);
    if(((s_62 != NULL) && (s_62 != t)))
      _fail(t);
    else
      s_62 = t;
    t = not_null(r_61);
    {
      ATerm w_62 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL;
      ATerm m_64 (ATerm t)
      {
        t = not_null(w_63);
        if(((t_62 != NULL) && (t_62 != t)))
          _fail(t);
        else
          t_62 = t;
        t = not_null(y_63);
        if(((u_62 != NULL) && (u_62 != t)))
          _fail(t);
        else
          u_62 = t;
        t = not_null(z_63);
        if(((v_62 != NULL) && (v_62 != t)))
          _fail(t);
        else
          v_62 = t;
        t = not_null(w_62);
        return(t);
      }
      t = not_null(s_62);
      {
        ATerm s_2 (ATerm t)
        {
          ATerm o_21 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_21;
            }
          return(t);
        }
        t = fetch_1_0(s_2, t);
        t = not_null(s_62);
        t = unzip_1_0(LiftPrimArg_0_0, t);
        {
          ATerm t_2 (ATerm t)
          {
            t = unzip_1_0(_id, t);
            return(t);
          }
          t = _2_0(concat_0_0, t_2, t);
          if(((w_62 != NULL) && (w_62 != t)))
            _fail(t);
          else
            w_62 = t;
          t = not_null(w_62);
          if(match_cons(t, sym__2))
            {
              w_63 = ATgetArgument(t, 0);
              x_63 = ATgetArgument(t, 1);
              t = not_null(x_63);
              if(match_cons(t, sym__2))
                {
                  y_63 = ATgetArgument(t, 0);
                  z_63 = ATgetArgument(t, 1);
                  t = m_64(t);
                }
              else
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
      t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_62), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(u_62)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(q_62), not_null(r_62), not_null(v_62))));
    }
    return(t);
  }
  ATerm l_64 (ATerm t)
  {
    ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL;
    t = not_null(s_61);
    if(((a_64 != NULL) && (a_64 != t)))
      _fail(t);
    else
      a_64 = t;
    t = not_null(t_61);
    if(((b_64 != NULL) && (b_64 != t)))
      _fail(t);
    else
      b_64 = t;
    t = not_null(r_61);
    {
      ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL;
      ATerm n_64 (ATerm t)
      {
        t = not_null(g_64);
        if(((c_64 != NULL) && (c_64 != t)))
          _fail(t);
        else
          c_64 = t;
        t = not_null(i_64);
        if(((d_64 != NULL) && (d_64 != t)))
          _fail(t);
        else
          d_64 = t;
        t = not_null(j_64);
        if(((e_64 != NULL) && (e_64 != t)))
          _fail(t);
        else
          e_64 = t;
        t = not_null(f_64);
        return(t);
      }
      t = not_null(b_64);
      {
        ATerm u_2 (ATerm t)
        {
          ATerm p_21 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_21;
            }
          return(t);
        }
        t = fetch_1_0(u_2, t);
        t = not_null(b_64);
        t = unzip_1_0(LiftPrimArg_0_0, t);
        {
          ATerm v_2 (ATerm t)
          {
            t = unzip_1_0(_id, t);
            return(t);
          }
          t = _2_0(concat_0_0, v_2, t);
          if(((f_64 != NULL) && (f_64 != t)))
            _fail(t);
          else
            f_64 = t;
          t = not_null(f_64);
          if(match_cons(t, sym__2))
            {
              g_64 = ATgetArgument(t, 0);
              h_64 = ATgetArgument(t, 1);
              t = not_null(h_64);
              if(match_cons(t, sym__2))
                {
                  i_64 = ATgetArgument(t, 0);
                  j_64 = ATgetArgument(t, 1);
                  t = n_64(t);
                }
              else
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
      t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_64), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(d_64)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(a_64), (ATerm)ATempty, not_null(e_64))));
    }
    return(t);
  }
  if(((r_61 != NULL) && (r_61 != t)))
    _fail(t);
  else
    r_61 = t;
  t = not_null(r_61);
  if(match_cons(t, sym_PrimT_3))
    {
      s_61 = ATgetArgument(t, 0);
      t_61 = ATgetArgument(t, 1);
      j_59 = ATgetArgument(t, 2);
      t = k_64(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          s_61 = ATgetArgument(t, 0);
          t_61 = ATgetArgument(t, 1);
          t = l_64(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm k_120 (ATerm), ATerm t)
{
  ATerm o_64 (ATerm t)
  {
    ATerm w_2 (ATerm t)
    {
      t = k_120(t);
      t = o_64(t);
      return(t);
    }
    t = try_1_0(w_2, t);
    return(t);
  }
  t = o_64(t);
  return(t);
}
ATerm Wld_0_0 (ATerm t)
{
  ATerm t_64 = NULL;
  ATerm z_64 (ATerm t)
  {
    ATerm u_64 = NULL,v_64 = NULL,x_64 = NULL;
    t = not_null(t_64);
    if(((u_64 != NULL) && (u_64 != t)))
      _fail(t);
    else
      u_64 = t;
    t = not_null(t_64);
    {
      ATerm q_21;
      q_21 = t;
      {
        ATerm w_64 = NULL;
        ATerm a_65 (ATerm t)
        {
          t = not_null(w_64);
          if(((v_64 != NULL) && (v_64 != t)))
            _fail(t);
          else
            v_64 = t;
          t = not_null(w_64);
          return(t);
        }
        t = SSLgetAnnotations(not_null(u_64));
        if(((w_64 != NULL) && (w_64 != t)))
          _fail(t);
        else
          w_64 = t;
        t = a_65(t);
      }
      t = q_21;
      {
        ATerm y_64 = NULL;
        ATerm b_65 (ATerm t)
        {
          t = not_null(y_64);
          if(((x_64 != NULL) && (x_64 != t)))
            _fail(t);
          else
            x_64 = t;
          t = not_null(y_64);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(v_64));
        if(((y_64 != NULL) && (y_64 != t)))
          _fail(t);
        else
          y_64 = t;
        t = b_65(t);
        t = not_null(x_64);
      }
    }
    return(t);
  }
  if(((t_64 != NULL) && (t_64 != t)))
    _fail(t);
  else
    t_64 = t;
  t = not_null(t_64);
  if(match_cons(t, sym_Wld_0))
    {
      t = z_64(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm n_22 = t;
  if((PushChoice() == 0))
    {
      ATerm x_2 (ATerm t)
      {
        ATerm o_22 = t;
        int p_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(p_22);
          }
        else
          {
            t = o_22;
            t = Wld_0_0(t);
          }
        return(t);
      }
      t = topdown_1_0(x_2, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_22;
    }
  return(t);
}
ATerm App_2_0 (ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm t)
{
  ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL;
  ATerm w_65 (ATerm t)
  {
    ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,q_65 = NULL;
    ATerm e_66 (ATerm t)
    {
      ATerm r_65 = NULL,s_65 = NULL;
      ATerm f_66 (ATerm t)
      {
        ATerm t_65 = NULL,u_65 = NULL;
        t = not_null(s_65);
        if(((t_65 != NULL) && (t_65 != t)))
          _fail(t);
        else
          t_65 = t;
        t = not_null(s_65);
        {
          ATerm v_65 = NULL;
          ATerm g_66 (ATerm t)
          {
            t = not_null(v_65);
            if(((u_65 != NULL) && (u_65 != t)))
              _fail(t);
            else
              u_65 = t;
            t = not_null(v_65);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(r_65), not_null(t_65)), not_null(o_65));
          if(((v_65 != NULL) && (v_65 != t)))
            _fail(t);
          else
            v_65 = t;
          t = g_66(t);
          t = not_null(u_65);
        }
        return(t);
      }
      t = not_null(q_65);
      if(((r_65 != NULL) && (r_65 != t)))
        _fail(t);
      else
        r_65 = t;
      t = not_null(n_65);
      t = b_90(t);
      if(((s_65 != NULL) && (s_65 != t)))
        _fail(t);
      else
        s_65 = t;
      t = f_66(t);
      return(t);
    }
    t = not_null(i_65);
    if(((l_65 != NULL) && (l_65 != t)))
      _fail(t);
    else
      l_65 = t;
    t = not_null(j_65);
    if(((m_65 != NULL) && (m_65 != t)))
      _fail(t);
    else
      m_65 = t;
    t = not_null(k_65);
    if(((n_65 != NULL) && (n_65 != t)))
      _fail(t);
    else
      n_65 = t;
    t = not_null(i_65);
    {
      ATerm p_65 = NULL;
      ATerm x_65 (ATerm t)
      {
        t = not_null(p_65);
        if(((o_65 != NULL) && (o_65 != t)))
          _fail(t);
        else
          o_65 = t;
        t = not_null(p_65);
        return(t);
      }
      t = SSLgetAnnotations(not_null(l_65));
      if(((p_65 != NULL) && (p_65 != t)))
        _fail(t);
      else
        p_65 = t;
      t = x_65(t);
      t = not_null(m_65);
      t = a_90(t);
      if(((q_65 != NULL) && (q_65 != t)))
        _fail(t);
      else
        q_65 = t;
      t = e_66(t);
    }
    return(t);
  }
  if(((i_65 != NULL) && (i_65 != t)))
    _fail(t);
  else
    i_65 = t;
  t = not_null(i_65);
  if(match_cons(t, sym_App_2))
    {
      j_65 = ATgetArgument(t, 0);
      k_65 = ATgetArgument(t, 1);
      t = w_65(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Con_3_0 (ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm t)
{
  ATerm o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL;
  ATerm g_67 (ATerm t)
  {
    ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,y_66 = NULL;
    ATerm i_67 (ATerm t)
    {
      ATerm z_66 = NULL,a_67 = NULL;
      ATerm j_67 (ATerm t)
      {
        ATerm b_67 = NULL,c_67 = NULL;
        ATerm k_67 (ATerm t)
        {
          ATerm d_67 = NULL,e_67 = NULL;
          t = not_null(c_67);
          if(((d_67 != NULL) && (d_67 != t)))
            _fail(t);
          else
            d_67 = t;
          t = not_null(c_67);
          {
            ATerm f_67 = NULL;
            ATerm l_67 (ATerm t)
            {
              t = not_null(f_67);
              if(((e_67 != NULL) && (e_67 != t)))
                _fail(t);
              else
                e_67 = t;
              t = not_null(f_67);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(z_66), not_null(b_67), not_null(d_67)), not_null(w_66));
            if(((f_67 != NULL) && (f_67 != t)))
              _fail(t);
            else
              f_67 = t;
            t = l_67(t);
            t = not_null(e_67);
          }
          return(t);
        }
        t = not_null(a_67);
        if(((b_67 != NULL) && (b_67 != t)))
          _fail(t);
        else
          b_67 = t;
        t = not_null(v_66);
        t = o_90(t);
        if(((c_67 != NULL) && (c_67 != t)))
          _fail(t);
        else
          c_67 = t;
        t = k_67(t);
        return(t);
      }
      t = not_null(y_66);
      if(((z_66 != NULL) && (z_66 != t)))
        _fail(t);
      else
        z_66 = t;
      t = not_null(u_66);
      t = n_90(t);
      if(((a_67 != NULL) && (a_67 != t)))
        _fail(t);
      else
        a_67 = t;
      t = j_67(t);
      return(t);
    }
    t = not_null(o_66);
    if(((s_66 != NULL) && (s_66 != t)))
      _fail(t);
    else
      s_66 = t;
    t = not_null(p_66);
    if(((t_66 != NULL) && (t_66 != t)))
      _fail(t);
    else
      t_66 = t;
    t = not_null(q_66);
    if(((u_66 != NULL) && (u_66 != t)))
      _fail(t);
    else
      u_66 = t;
    t = not_null(r_66);
    if(((v_66 != NULL) && (v_66 != t)))
      _fail(t);
    else
      v_66 = t;
    t = not_null(o_66);
    {
      ATerm x_66 = NULL;
      ATerm h_67 (ATerm t)
      {
        t = not_null(x_66);
        if(((w_66 != NULL) && (w_66 != t)))
          _fail(t);
        else
          w_66 = t;
        t = not_null(x_66);
        return(t);
      }
      t = SSLgetAnnotations(not_null(s_66));
      if(((x_66 != NULL) && (x_66 != t)))
        _fail(t);
      else
        x_66 = t;
      t = h_67(t);
      t = not_null(t_66);
      t = m_90(t);
      if(((y_66 != NULL) && (y_66 != t)))
        _fail(t);
      else
        y_66 = t;
      t = i_67(t);
    }
    return(t);
  }
  if(((o_66 != NULL) && (o_66 != t)))
    _fail(t);
  else
    o_66 = t;
  t = not_null(o_66);
  if(match_cons(t, sym_Con_3))
    {
      p_66 = ATgetArgument(t, 0);
      q_66 = ATgetArgument(t, 1);
      r_66 = ATgetArgument(t, 2);
      t = g_67(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm q_22 = t;
  if((PushChoice() == 0))
    {
      ATerm y_2 (ATerm t)
      {
        ATerm r_22 = t;
        int s_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(s_22);
          }
        else
          {
            t = r_22;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(y_2, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_22;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL;
  ATerm b_68 (ATerm t)
  {
    ATerm v_67 = NULL,w_67 = NULL,x_67 = NULL;
    t = not_null(s_67);
    if(((v_67 != NULL) && (v_67 != t)))
      _fail(t);
    else
      v_67 = t;
    t = not_null(t_67);
    if(((x_67 != NULL) && (x_67 != t)))
      _fail(t);
    else
      x_67 = t;
    t = not_null(u_67);
    if(((w_67 != NULL) && (w_67 != t)))
      _fail(t);
    else
      w_67 = t;
    t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(x_67)), (ATerm) ATmakeAppl(sym_Where_1, not_null(w_67))), not_null(v_67)));
    return(t);
  }
  ATerm c_68 (ATerm t)
  {
    ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL;
    t = not_null(s_67);
    if(((z_67 != NULL) && (z_67 != t)))
      _fail(t);
    else
      z_67 = t;
    t = not_null(t_67);
    if(((a_68 != NULL) && (a_68 != t)))
      _fail(t);
    else
      a_68 = t;
    t = not_null(u_67);
    if(((y_67 != NULL) && (y_67 != t)))
      _fail(t);
    else
      y_67 = t;
    t = not_null(q_67);
    t = not_null(z_67);
    t = pureterm_0_0(t);
    t = not_null(a_68);
    t = buildterm_0_0(t);
    t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(a_68))), (ATerm) ATmakeAppl(sym_Where_1, not_null(y_67))), (ATerm) ATmakeAppl(sym_Match_1, not_null(z_67))));
    return(t);
  }
  if(((q_67 != NULL) && (q_67 != t)))
    _fail(t);
  else
    q_67 = t;
  t = not_null(q_67);
  if(match_cons(t, sym_SRule_1))
    {
      r_67 = ATgetArgument(t, 0);
      t = not_null(r_67);
      if(match_cons(t, sym_StratRule_3))
        {
          s_67 = ATgetArgument(t, 0);
          t_67 = ATgetArgument(t, 1);
          u_67 = ATgetArgument(t, 2);
          t = b_68(t);
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              s_67 = ATgetArgument(t, 0);
              t_67 = ATgetArgument(t, 1);
              u_67 = ATgetArgument(t, 2);
              t = c_68(t);
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
ATerm Scope_2_0 (ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm t)
{
  ATerm j_68 = NULL,k_68 = NULL,l_68 = NULL;
  ATerm x_68 (ATerm t)
  {
    ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,r_68 = NULL;
    ATerm z_68 (ATerm t)
    {
      ATerm s_68 = NULL,t_68 = NULL;
      ATerm a_69 (ATerm t)
      {
        ATerm u_68 = NULL,v_68 = NULL;
        t = not_null(t_68);
        if(((u_68 != NULL) && (u_68 != t)))
          _fail(t);
        else
          u_68 = t;
        t = not_null(t_68);
        {
          ATerm w_68 = NULL;
          ATerm b_69 (ATerm t)
          {
            t = not_null(w_68);
            if(((v_68 != NULL) && (v_68 != t)))
              _fail(t);
            else
              v_68 = t;
            t = not_null(w_68);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(s_68), not_null(u_68)), not_null(p_68));
          if(((w_68 != NULL) && (w_68 != t)))
            _fail(t);
          else
            w_68 = t;
          t = b_69(t);
          t = not_null(v_68);
        }
        return(t);
      }
      t = not_null(r_68);
      if(((s_68 != NULL) && (s_68 != t)))
        _fail(t);
      else
        s_68 = t;
      t = not_null(o_68);
      t = h_93(t);
      if(((t_68 != NULL) && (t_68 != t)))
        _fail(t);
      else
        t_68 = t;
      t = a_69(t);
      return(t);
    }
    t = not_null(j_68);
    if(((m_68 != NULL) && (m_68 != t)))
      _fail(t);
    else
      m_68 = t;
    t = not_null(k_68);
    if(((n_68 != NULL) && (n_68 != t)))
      _fail(t);
    else
      n_68 = t;
    t = not_null(l_68);
    if(((o_68 != NULL) && (o_68 != t)))
      _fail(t);
    else
      o_68 = t;
    t = not_null(j_68);
    {
      ATerm q_68 = NULL;
      ATerm y_68 (ATerm t)
      {
        t = not_null(q_68);
        if(((p_68 != NULL) && (p_68 != t)))
          _fail(t);
        else
          p_68 = t;
        t = not_null(q_68);
        return(t);
      }
      t = SSLgetAnnotations(not_null(m_68));
      if(((q_68 != NULL) && (q_68 != t)))
        _fail(t);
      else
        q_68 = t;
      t = y_68(t);
      t = not_null(n_68);
      t = g_93(t);
      if(((r_68 != NULL) && (r_68 != t)))
        _fail(t);
      else
        r_68 = t;
      t = z_68(t);
    }
    return(t);
  }
  if(((j_68 != NULL) && (j_68 != t)))
    _fail(t);
  else
    j_68 = t;
  t = not_null(j_68);
  if(match_cons(t, sym_Scope_2))
    {
      k_68 = ATgetArgument(t, 0);
      l_68 = ATgetArgument(t, 1);
      t = x_68(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm e_105 (ATerm), ATerm t)
{
  ATerm c_69 (ATerm t)
  {
    ATerm t_22 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_105(t);
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = t_22;
        t = SRTS_one(c_69, t);
      }
    return(t);
  }
  t = c_69(t);
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm b_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL;
  ATerm o_71 (ATerm t)
  {
    ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,r_70 = NULL,s_70 = NULL;
    t = not_null(d_70);
    if(((g_70 != NULL) && (g_70 != t)))
      _fail(t);
    else
      g_70 = t;
    t = not_null(e_70);
    if(((h_70 != NULL) && (h_70 != t)))
      _fail(t);
    else
      h_70 = t;
    t = not_null(f_70);
    if(((i_70 != NULL) && (i_70 != t)))
      _fail(t);
    else
      i_70 = t;
    t = not_null(b_70);
    {
      ATerm t_70 = NULL;
      ATerm p_71 (ATerm t)
      {
        ATerm e_71 = NULL;
        ATerm s_71 (ATerm t)
        {
          ATerm n_71 = NULL;
          ATerm u_71 (ATerm t)
          {
            t = not_null(n_71);
            if(((s_70 != NULL) && (s_70 != t)))
              _fail(t);
            else
              s_70 = t;
            t = not_null(n_71);
            return(t);
          }
          t = not_null(e_71);
          if(((r_70 != NULL) && (r_70 != t)))
            _fail(t);
          else
            r_70 = t;
          t = not_null(h_70);
          {
            ATerm z_2 (ATerm t)
            {
              ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL;
              ATerm t_71 (ATerm t)
              {
                t = not_null(h_71);
                if(((n_70 != NULL) && (n_70 != t)))
                  _fail(t);
                else
                  n_70 = t;
                t = not_null(i_71);
                if(((m_70 != NULL) && (m_70 != t)))
                  _fail(t);
                else
                  m_70 = t;
                t = not_null(k_71);
                if(((k_70 != NULL) && (k_70 != t)))
                  _fail(t);
                else
                  k_70 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_70));
                return(t);
              }
              if(((f_71 != NULL) && (f_71 != t)))
                _fail(t);
              else
                f_71 = t;
              t = not_null(f_71);
              if(match_cons(t, sym_Con_3))
                {
                  g_71 = ATgetArgument(t, 0);
                  i_71 = ATgetArgument(t, 1);
                  j_71 = ATgetArgument(t, 2);
                  t = not_null(g_71);
                  if(match_cons(t, sym_Var_1))
                    {
                      h_71 = ATgetArgument(t, 0);
                      t = not_null(j_71);
                      if(match_cons(t, sym_CallT_3))
                        {
                          k_71 = ATgetArgument(t, 0);
                          l_71 = ATgetArgument(t, 1);
                          m_71 = ATgetArgument(t, 2);
                          t = not_null(l_71);
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = not_null(m_71);
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = t_71(t);
                                }
                              else
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
            t = oncetd_1_0(z_2, t);
            if(((n_71 != NULL) && (n_71 != t)))
              _fail(t);
            else
              n_71 = t;
            t = u_71(t);
          }
          return(t);
        }
        t = not_null(t_70);
        if(((o_70 != NULL) && (o_70 != t)))
          _fail(t);
        else
          o_70 = t;
        t = not_null(g_70);
        {
          ATerm a_3 (ATerm t)
          {
            ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL,d_71 = NULL;
            ATerm q_71 (ATerm t)
            {
              t = not_null(w_70);
              if(((n_70 != NULL) && (n_70 != t)))
                _fail(t);
              else
                n_70 = t;
              t = not_null(x_70);
              if(((l_70 != NULL) && (l_70 != t)))
                _fail(t);
              else
                l_70 = t;
              t = not_null(d_71);
              if(((j_70 != NULL) && (j_70 != t)))
                _fail(t);
              else
                j_70 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_70));
              return(t);
            }
            if(((u_70 != NULL) && (u_70 != t)))
              _fail(t);
            else
              u_70 = t;
            t = not_null(u_70);
            if(match_cons(t, sym_Con_3))
              {
                v_70 = ATgetArgument(t, 0);
                x_70 = ATgetArgument(t, 1);
                d_71 = ATgetArgument(t, 2);
                t = not_null(v_70);
                if(match_cons(t, sym_Var_1))
                  {
                    w_70 = ATgetArgument(t, 0);
                    t = q_71(t);
                  }
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
          t = oncetd_1_0(a_3, t);
          if(((e_71 != NULL) && (e_71 != t)))
            _fail(t);
          else
            e_71 = t;
          t = s_71(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((t_70 != NULL) && (t_70 != t)))
        _fail(t);
      else
        t_70 = t;
      t = p_71(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_70)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(r_70), not_null(s_70), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_70), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(k_70), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(l_70), not_null(m_70), term_z_19))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(n_70)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_70)))))));
    }
    return(t);
  }
  if(((b_70 != NULL) && (b_70 != t)))
    _fail(t);
  else
    b_70 = t;
  t = not_null(b_70);
  if(match_cons(t, sym_SRule_1))
    {
      c_70 = ATgetArgument(t, 0);
      t = not_null(c_70);
      if(match_cons(t, sym_Rule_3))
        {
          d_70 = ATgetArgument(t, 0);
          e_70 = ATgetArgument(t, 1);
          f_70 = ATgetArgument(t, 2);
          t = o_71(t);
        }
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
  ATerm b_3 (ATerm t)
  {
    ATerm m_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0_0(t);
        t = desugarRule_0_0(t);
        ;
        LocalPopChoice(t_23);
      }
    else
      {
        t = m_23;
        {
          ATerm u_23 = t;
          int z_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2_0(_id, desugarRule_0_0, t);
              ;
              LocalPopChoice(z_23);
            }
          else
            {
              t = u_23;
              t = RtoS_0_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1_0(b_3, t);
  return(t);
}
ATerm topdown_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  t = a_104(t);
  {
    ATerm c_3 (ATerm t)
    {
      t = topdown_1_0(a_104, t);
      return(t);
    }
    t = SRTS_all(c_3, t);
  }
  return(t);
}
ATerm desugar_0_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    t = try_1_0(desugarRule_0_0, t);
    {
      ATerm e_3 (ATerm t)
      {
        ATerm a_24 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(b_24);
          }
        else
          {
            t = a_24;
            {
              ATerm c_24 = t;
              int d_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(d_24);
                }
              else
                {
                  t = c_24;
                  {
                    ATerm e_24 = t;
                    int f_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(f_24);
                      }
                    else
                      {
                        t = e_24;
                        {
                          ATerm g_24 = t;
                          int q_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0_0(t);
                              ;
                              LocalPopChoice(q_24);
                            }
                          else
                            {
                              t = g_24;
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
      t = repeat_1_0(e_3, t);
    }
    return(t);
  }
  t = topdown_1_0(d_3, t);
  return(t);
}
ATerm _0_0 (ATerm t)
{
  ATerm a_72 = NULL;
  ATerm g_72 (ATerm t)
  {
    ATerm b_72 = NULL,c_72 = NULL,e_72 = NULL;
    t = not_null(a_72);
    if(((b_72 != NULL) && (b_72 != t)))
      _fail(t);
    else
      b_72 = t;
    t = not_null(a_72);
    {
      ATerm r_24;
      r_24 = t;
      {
        ATerm d_72 = NULL;
        ATerm n_72 (ATerm t)
        {
          t = not_null(d_72);
          if(((c_72 != NULL) && (c_72 != t)))
            _fail(t);
          else
            c_72 = t;
          t = not_null(d_72);
          return(t);
        }
        t = SSLgetAnnotations(not_null(b_72));
        if(((d_72 != NULL) && (d_72 != t)))
          _fail(t);
        else
          d_72 = t;
        t = n_72(t);
      }
      t = r_24;
      {
        ATerm f_72 = NULL;
        ATerm o_72 (ATerm t)
        {
          t = not_null(f_72);
          if(((e_72 != NULL) && (e_72 != t)))
            _fail(t);
          else
            e_72 = t;
          t = not_null(f_72);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(c_72));
        if(((f_72 != NULL) && (f_72 != t)))
          _fail(t);
        else
          f_72 = t;
        t = o_72(t);
        t = not_null(e_72);
      }
    }
    return(t);
  }
  if(((a_72 != NULL) && (a_72 != t)))
    _fail(t);
  else
    a_72 = t;
  t = not_null(a_72);
  if(match_cons(t, sym__0))
    {
      t = g_72(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Ttl_0_0 (ATerm t)
{
  ATerm y_72 = NULL;
  ATerm n_73 (ATerm t)
  {
    ATerm z_72 = NULL,a_73 = NULL,b_73 = NULL,j_73 = NULL,l_73 = NULL;
    ATerm r_73 (ATerm t)
    {
      ATerm m_73 = NULL;
      t = not_null(l_73);
      if(((m_73 != NULL) && (m_73 != t)))
        _fail(t);
      else
        m_73 = t;
      t = not_null(m_73);
      return(t);
    }
    t = not_null(y_72);
    if(((z_72 != NULL) && (z_72 != t)))
      _fail(t);
    else
      z_72 = t;
    t = not_null(y_72);
    {
      ATerm s_24;
      s_24 = t;
      {
        ATerm c_73 = NULL;
        ATerm o_73 (ATerm t)
        {
          ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL;
          ATerm p_73 (ATerm t)
          {
            t = not_null(h_73);
            if(((a_73 != NULL) && (a_73 != t)))
              _fail(t);
            else
              a_73 = t;
            t = not_null(i_73);
            if(((b_73 != NULL) && (b_73 != t)))
              _fail(t);
            else
              b_73 = t;
            t = not_null(e_73);
            return(t);
          }
          t = not_null(c_73);
          if(((d_73 != NULL) && (d_73 != t)))
            _fail(t);
          else
            d_73 = t;
          t = not_null(c_73);
          t = SSL_explode_term(not_null(d_73));
          if(((e_73 != NULL) && (e_73 != t)))
            _fail(t);
          else
            e_73 = t;
          t = not_null(e_73);
          if(match_cons(t, sym__2))
            {
              f_73 = ATgetArgument(t, 0);
              g_73 = ATgetArgument(t, 1);
              t = not_null(f_73);
              if(match_string(t, ""))
                {
                  t = not_null(g_73);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      h_73 = ATgetFirst((ATermList) t);
                      i_73 = (ATerm) ATgetNext((ATermList) t);
                      t = p_73(t);
                    }
                  else
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
        t = not_null(z_72);
        if(((c_73 != NULL) && (c_73 != t)))
          _fail(t);
        else
          c_73 = t;
        t = o_73(t);
      }
      t = s_24;
      {
        ATerm b_25;
        b_25 = t;
        {
          ATerm k_73 = NULL;
          ATerm q_73 (ATerm t)
          {
            t = not_null(k_73);
            if(((j_73 != NULL) && (j_73 != t)))
              _fail(t);
            else
              j_73 = t;
            t = not_null(k_73);
            return(t);
          }
          t = term_g_14;
          if(((k_73 != NULL) && (k_73 != t)))
            _fail(t);
          else
            k_73 = t;
          t = q_73(t);
        }
        t = b_25;
        t = SSL_mkterm(not_null(j_73), not_null(b_73));
        if(((l_73 != NULL) && (l_73 != t)))
          _fail(t);
        else
          l_73 = t;
        t = r_73(t);
      }
    }
    return(t);
  }
  if(((y_72 != NULL) && (y_72 != t)))
    _fail(t);
  else
    y_72 = t;
  t = n_73(t);
  return(t);
}
ATerm Thd_0_0 (ATerm t)
{
  t = Fst_0_0(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm c_108 (ATerm), ATerm t)
{
  ATerm b_74 = NULL,d_74 = NULL,f_74 = NULL;
  ATerm m_74 (ATerm t)
  {
    ATerm g_74 = NULL;
    t = not_null(f_74);
    if(((g_74 != NULL) && (g_74 != t)))
      _fail(t);
    else
      g_74 = t;
    t = not_null(g_74);
    return(t);
  }
  ATerm h_74 (ATerm t)
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_73 = NULL,z_73 = NULL;
        ATerm e_25;
        e_25 = t;
        {
          ATerm y_73 = NULL;
          ATerm i_74 (ATerm t)
          {
            t = not_null(y_73);
            if(((x_73 != NULL) && (x_73 != t)))
              _fail(t);
            else
              x_73 = t;
            t = not_null(y_73);
            return(t);
          }
          t = map_1_0(Thd_0_0, t);
          t = c_108(t);
          if(((y_73 != NULL) && (y_73 != t)))
            _fail(t);
          else
            y_73 = t;
          t = i_74(t);
        }
        t = e_25;
        {
          ATerm a_74 = NULL;
          ATerm j_74 (ATerm t)
          {
            t = not_null(a_74);
            if(((z_73 != NULL) && (z_73 != t)))
              _fail(t);
            else
              z_73 = t;
            t = not_null(a_74);
            return(t);
          }
          t = map_1_0(Ttl_0_0, t);
          t = h_74(t);
          if(((a_74 != NULL) && (a_74 != t)))
            _fail(t);
          else
            a_74 = t;
          t = j_74(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(z_73)), not_null(x_73));
        }
        ;
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        t = map_1_0(_0_0, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = h_74(t);
  {
    ATerm p_25;
    p_25 = t;
    {
      ATerm c_74 = NULL;
      ATerm k_74 (ATerm t)
      {
        t = not_null(c_74);
        if(((b_74 != NULL) && (b_74 != t)))
          _fail(t);
        else
          b_74 = t;
        t = not_null(c_74);
        return(t);
      }
      if(((c_74 != NULL) && (c_74 != t)))
        _fail(t);
      else
        c_74 = t;
      t = k_74(t);
    }
    t = p_25;
    {
      ATerm q_25;
      q_25 = t;
      {
        ATerm e_74 = NULL;
        ATerm l_74 (ATerm t)
        {
          t = not_null(e_74);
          if(((d_74 != NULL) && (d_74 != t)))
            _fail(t);
          else
            d_74 = t;
          t = not_null(e_74);
          return(t);
        }
        t = term_g_14;
        if(((e_74 != NULL) && (e_74 != t)))
          _fail(t);
        else
          e_74 = t;
        t = l_74(t);
      }
      t = q_25;
      t = SSL_mkterm(not_null(d_74), not_null(b_74));
      if(((f_74 != NULL) && (f_74 != t)))
        _fail(t);
      else
        f_74 = t;
      t = m_74(t);
    }
  }
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm v_74 = NULL;
  ATerm t_75 (ATerm t)
  {
    ATerm w_74 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL;
    t = not_null(v_74);
    if(((w_74 != NULL) && (w_74 != t)))
      _fail(t);
    else
      w_74 = t;
    t = not_null(v_74);
    {
      ATerm f_75 = NULL;
      ATerm v_75 (ATerm t)
      {
        ATerm g_75 = NULL;
        ATerm w_75 (ATerm t)
        {
          ATerm h_75 = NULL;
          ATerm x_75 (ATerm t)
          {
            t = not_null(h_75);
            if(((e_75 != NULL) && (e_75 != t)))
              _fail(t);
            else
              e_75 = t;
            t = not_null(h_75);
            return(t);
          }
          t = not_null(g_75);
          if(((d_75 != NULL) && (d_75 != t)))
            _fail(t);
          else
            d_75 = t;
          t = not_null(g_75);
          t = new_0_0(t);
          if(((h_75 != NULL) && (h_75 != t)))
            _fail(t);
          else
            h_75 = t;
          t = x_75(t);
          return(t);
        }
        t = not_null(f_75);
        if(((c_75 != NULL) && (c_75 != t)))
          _fail(t);
        else
          c_75 = t;
        t = not_null(f_75);
        t = new_0_0(t);
        if(((g_75 != NULL) && (g_75 != t)))
          _fail(t);
        else
          g_75 = t;
        t = w_75(t);
        return(t);
      }
      t = new_0_0(t);
      if(((f_75 != NULL) && (f_75 != t)))
        _fail(t);
      else
        f_75 = t;
      t = v_75(t);
      t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_75)), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_g_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_74)), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_75)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_75))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(c_75), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_w_19), term_w_19)), not_null(d_75), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_75)), not_null(e_75), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_75)));
    }
    return(t);
  }
  ATerm u_75 (ATerm t)
  {
    ATerm i_75 = NULL,j_75 = NULL,o_75 = NULL,p_75 = NULL;
    t = not_null(v_74);
    if(((i_75 != NULL) && (i_75 != t)))
      _fail(t);
    else
      i_75 = t;
    t = not_null(v_74);
    {
      ATerm q_75 = NULL;
      ATerm y_75 (ATerm t)
      {
        ATerm r_75 = NULL;
        ATerm z_75 (ATerm t)
        {
          ATerm s_75 = NULL;
          ATerm a_76 (ATerm t)
          {
            t = not_null(s_75);
            if(((p_75 != NULL) && (p_75 != t)))
              _fail(t);
            else
              p_75 = t;
            t = not_null(s_75);
            return(t);
          }
          t = not_null(r_75);
          if(((o_75 != NULL) && (o_75 != t)))
            _fail(t);
          else
            o_75 = t;
          t = not_null(r_75);
          t = new_0_0(t);
          if(((s_75 != NULL) && (s_75 != t)))
            _fail(t);
          else
            s_75 = t;
          t = a_76(t);
          return(t);
        }
        t = not_null(q_75);
        if(((j_75 != NULL) && (j_75 != t)))
          _fail(t);
        else
          j_75 = t;
        t = not_null(q_75);
        t = new_0_0(t);
        if(((r_75 != NULL) && (r_75 != t)))
          _fail(t);
        else
          r_75 = t;
        t = z_75(t);
        return(t);
      }
      t = new_0_0(t);
      if(((q_75 != NULL) && (q_75 != t)))
        _fail(t);
      else
        q_75 = t;
      t = y_75(t);
      t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(j_75)), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_g_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_75)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_75)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_75))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(j_75), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_w_19), term_w_19)), not_null(o_75), (ATerm)ATmakeAppl(sym_Var_1, not_null(o_75)), not_null(p_75), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_75)));
    }
    return(t);
  }
  if(((v_74 != NULL) && (v_74 != t)))
    _fail(t);
  else
    v_74 = t;
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_75(t);
        ;
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        t = u_75(t);
      }
  }
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL;
  ATerm i_76 (ATerm t)
  {
    ATerm g_76 = NULL,h_76 = NULL;
    t = not_null(e_76);
    if(((g_76 != NULL) && (g_76 != t)))
      _fail(t);
    else
      g_76 = t;
    t = not_null(f_76);
    if(((h_76 != NULL) && (h_76 != t)))
      _fail(t);
    else
      h_76 = t;
    t = not_null(d_76);
    {
      ATerm d_26 = t;
      int e_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(not_null(g_76), not_null(h_76));
          ;
          LocalPopChoice(e_26);
        }
      else
        {
          t = d_26;
          t = SSL_subtr(not_null(g_76), not_null(h_76));
        }
    }
    return(t);
  }
  if(((d_76 != NULL) && (d_76 != t)))
    _fail(t);
  else
    d_76 = t;
  t = not_null(d_76);
  if(match_cons(t, sym__2))
    {
      e_76 = ATgetArgument(t, 0);
      f_76 = ATgetArgument(t, 1);
      t = i_76(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1_0 (ATerm e_115 (ATerm), ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL;
    ATerm g_79 (ATerm t)
    {
      ATerm i_77 = NULL,j_77 = NULL;
      t = not_null(g_77);
      if(((i_77 != NULL) && (i_77 != t)))
        _fail(t);
      else
        i_77 = t;
      t = not_null(h_77);
      if(((j_77 != NULL) && (j_77 != t)))
        _fail(t);
      else
        j_77 = t;
      t = (ATerm) ATmakeAppl(sym__3, not_null(i_77), not_null(j_77), (ATerm) ATempty);
      return(t);
    }
    if(((f_77 != NULL) && (f_77 != t)))
      _fail(t);
    else
      f_77 = t;
    t = not_null(f_77);
    if(match_cons(t, sym__2))
      {
        g_77 = ATgetArgument(t, 0);
        h_77 = ATgetArgument(t, 1);
        t = g_79(t);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    ATerm k_77 = NULL,l_77 = NULL,r_78 = NULL,s_78 = NULL;
    ATerm h_79 (ATerm t)
    {
      ATerm t_78 = NULL,u_78 = NULL;
      t = not_null(r_78);
      if(((t_78 != NULL) && (t_78 != t)))
        _fail(t);
      else
        t_78 = t;
      t = not_null(s_78);
      if(((u_78 != NULL) && (u_78 != t)))
        _fail(t);
      else
        u_78 = t;
      t = not_null(u_78);
      return(t);
    }
    if(((k_77 != NULL) && (k_77 != t)))
      _fail(t);
    else
      k_77 = t;
    t = not_null(k_77);
    if(match_cons(t, sym__3))
      {
        l_77 = ATgetArgument(t, 0);
        r_78 = ATgetArgument(t, 1);
        s_78 = ATgetArgument(t, 2);
        t = not_null(l_77);
        if(match_int(t, 0))
          {
            t = h_79(t);
          }
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
    ATerm v_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL;
    ATerm f_80 (ATerm t)
    {
      ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL,c_79 = NULL,e_79 = NULL;
      t = not_null(w_78);
      if(((z_78 != NULL) && (z_78 != t)))
        _fail(t);
      else
        z_78 = t;
      t = not_null(x_78);
      if(((a_79 != NULL) && (a_79 != t)))
        _fail(t);
      else
        a_79 = t;
      t = not_null(y_78);
      if(((b_79 != NULL) && (b_79 != t)))
        _fail(t);
      else
        b_79 = t;
      t = not_null(v_78);
      {
        ATerm f_26;
        f_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_78), term_w_8);
        t = geq_0_0(t);
        t = f_26;
        {
          ATerm g_26;
          g_26 = t;
          {
            ATerm d_79 = NULL;
            ATerm g_80 (ATerm t)
            {
              t = not_null(d_79);
              if(((c_79 != NULL) && (c_79 != t)))
                _fail(t);
              else
                c_79 = t;
              t = not_null(d_79);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_78), term_w_8);
            t = subt_0_0(t);
            if(((d_79 != NULL) && (d_79 != t)))
              _fail(t);
            else
              d_79 = t;
            t = g_80(t);
          }
          t = g_26;
          {
            ATerm f_79 = NULL;
            ATerm h_80 (ATerm t)
            {
              t = not_null(f_79);
              if(((e_79 != NULL) && (e_79 != t)))
                _fail(t);
              else
                e_79 = t;
              t = not_null(f_79);
              return(t);
            }
            t = not_null(a_79);
            t = e_115(t);
            if(((f_79 != NULL) && (f_79 != t)))
              _fail(t);
            else
              f_79 = t;
            t = h_80(t);
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_79), not_null(a_79), (ATerm) ATinsert(CheckATermList(not_null(b_79)), not_null(e_79)));
          }
        }
      }
      return(t);
    }
    if(((v_78 != NULL) && (v_78 != t)))
      _fail(t);
    else
      v_78 = t;
    t = not_null(v_78);
    if(match_cons(t, sym__3))
      {
        w_78 = ATgetArgument(t, 0);
        x_78 = ATgetArgument(t, 1);
        y_78 = ATgetArgument(t, 2);
        t = f_80(t);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3_0(f_3, g_3, h_3, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm MkThreadApplication_0_0 (ATerm t)
{
  ATerm n_80 = NULL,o_80 = NULL,j_84 = NULL;
  ATerm s_84 (ATerm t)
  {
    ATerm k_84 = NULL,l_84 = NULL,m_84 = NULL,n_84 = NULL,o_84 = NULL;
    t = not_null(o_80);
    if(((k_84 != NULL) && (k_84 != t)))
      _fail(t);
    else
      k_84 = t;
    t = not_null(j_84);
    if(((l_84 != NULL) && (l_84 != t)))
      _fail(t);
    else
      l_84 = t;
    t = not_null(n_80);
    {
      ATerm p_84 = NULL;
      ATerm t_84 (ATerm t)
      {
        ATerm q_84 = NULL;
        ATerm u_84 (ATerm t)
        {
          ATerm r_84 = NULL;
          ATerm v_84 (ATerm t)
          {
            t = not_null(r_84);
            if(((o_84 != NULL) && (o_84 != t)))
              _fail(t);
            else
              o_84 = t;
            t = not_null(r_84);
            return(t);
          }
          t = not_null(q_84);
          if(((n_84 != NULL) && (n_84 != t)))
            _fail(t);
          else
            n_84 = t;
          t = not_null(q_84);
          t = new_0_0(t);
          if(((r_84 != NULL) && (r_84 != t)))
            _fail(t);
          else
            r_84 = t;
          t = v_84(t);
          return(t);
        }
        t = not_null(p_84);
        if(((m_84 != NULL) && (m_84 != t)))
          _fail(t);
        else
          m_84 = t;
        t = not_null(p_84);
        t = new_0_0(t);
        if(((q_84 != NULL) && (q_84 != t)))
          _fail(t);
        else
          q_84 = t;
        t = u_84(t);
        return(t);
      }
      t = new_0_0(t);
      if(((p_84 != NULL) && (p_84 != t)))
        _fail(t);
      else
        p_84 = t;
      t = t_84(t);
      t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_84)), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_g_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_84))), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_84)))), (ATerm) ATmakeAppl(sym_Op_2, term_g_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_84))), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_84))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(m_84), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_w_19), term_w_19)), not_null(n_84), (ATerm)ATmakeAppl(sym_Var_1, not_null(n_84)), not_null(o_84), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_84)));
    }
    return(t);
  }
  if(((n_80 != NULL) && (n_80 != t)))
    _fail(t);
  else
    n_80 = t;
  t = not_null(n_80);
  if(match_cons(t, sym__2))
    {
      o_80 = ATgetArgument(t, 0);
      j_84 = ATgetArgument(t, 1);
      t = s_84(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip1b_p__0_0 (ATerm t)
{
  ATerm z_84 = NULL,a_85 = NULL,b_85 = NULL;
  ATerm c_85 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  if(((z_84 != NULL) && (z_84 != t)))
    _fail(t);
  else
    z_84 = t;
  t = not_null(z_84);
  if(match_cons(t, sym__2))
    {
      a_85 = ATgetArgument(t, 0);
      b_85 = ATgetArgument(t, 1);
      t = not_null(b_85);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = c_85(t);
        }
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
ATerm zipr_1_0 (ATerm u_108 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1b_p__0_0, Zip2_0_0, Zip3_0_0, u_108, t);
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm f_85 = NULL,g_85 = NULL,h_85 = NULL;
  ATerm j_85 (ATerm t)
  {
    ATerm i_85 = NULL;
    t = not_null(h_85);
    if(((i_85 != NULL) && (i_85 != t)))
      _fail(t);
    else
      i_85 = t;
    t = not_null(i_85);
    return(t);
  }
  if(((f_85 != NULL) && (f_85 != t)))
    _fail(t);
  else
    f_85 = t;
  t = not_null(f_85);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_85 = ATgetFirst((ATermList) t);
      h_85 = (ATerm) ATgetNext((ATermList) t);
      t = j_85(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0_0 (ATerm t)
{
  ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL;
  ATerm r_85 (ATerm t)
  {
    ATerm q_85 = NULL;
    t = not_null(o_85);
    if(((q_85 != NULL) && (q_85 != t)))
      _fail(t);
    else
      q_85 = t;
    t = not_null(q_85);
    return(t);
  }
  if(((n_85 != NULL) && (n_85 != t)))
    _fail(t);
  else
    n_85 = t;
  t = not_null(n_85);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_85 = ATgetFirst((ATermList) t);
      p_85 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(p_85);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = r_85(t);
        }
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
  ATerm n_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0_0(t);
      ;
      LocalPopChoice(o_26);
    }
  else
    {
      t = n_26;
      t = Tl_0_0(t);
      t = last_0_0(t);
    }
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm n_86 = NULL,o_86 = NULL,p_86 = NULL,q_86 = NULL,r_86 = NULL,z_86 = NULL;
  ATerm f_89 (ATerm t)
  {
    ATerm c_87 = NULL,d_87 = NULL,e_87 = NULL,f_87 = NULL,g_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL,l_87 = NULL,m_87 = NULL,n_87 = NULL,b_88 = NULL;
    t = not_null(o_86);
    if(((c_87 != NULL) && (c_87 != t)))
      _fail(t);
    else
      c_87 = t;
    t = not_null(r_86);
    if(((d_87 != NULL) && (d_87 != t)))
      _fail(t);
    else
      d_87 = t;
    t = not_null(z_86);
    if(((e_87 != NULL) && (e_87 != t)))
      _fail(t);
    else
      e_87 = t;
    t = not_null(n_86);
    {
      ATerm x_26;
      x_26 = t;
      {
        ATerm o_87 = NULL,q_87 = NULL,r_87 = NULL,s_87 = NULL;
        ATerm j_89 (ATerm t)
        {
          ATerm t_87 = NULL;
          ATerm l_89 (ATerm t)
          {
            ATerm u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL;
            ATerm m_89 (ATerm t)
            {
              t = not_null(v_87);
              if(((i_87 != NULL) && (i_87 != t)))
                _fail(t);
              else
                i_87 = t;
              t = not_null(w_87);
              if(((j_87 != NULL) && (j_87 != t)))
                _fail(t);
              else
                j_87 = t;
              t = not_null(x_87);
              if(((k_87 != NULL) && (k_87 != t)))
                _fail(t);
              else
                k_87 = t;
              t = not_null(y_87);
              if(((l_87 != NULL) && (l_87 != t)))
                _fail(t);
              else
                l_87 = t;
              t = not_null(z_87);
              if(((m_87 != NULL) && (m_87 != t)))
                _fail(t);
              else
                m_87 = t;
              t = not_null(a_88);
              if(((n_87 != NULL) && (n_87 != t)))
                _fail(t);
              else
                n_87 = t;
              t = not_null(u_87);
              return(t);
            }
            t = not_null(t_87);
            if(((f_87 != NULL) && (f_87 != t)))
              _fail(t);
            else
              f_87 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_87)), not_null(g_87)), not_null(h_87));
            t = zipr_1_0(MkThreadApplication_0_0, t);
            t = tuple_unzip_1_0(_id, t);
            if(((u_87 != NULL) && (u_87 != t)))
              _fail(t);
            else
              u_87 = t;
            t = not_null(u_87);
            if(match_cons(t, sym__6))
              {
                v_87 = ATgetArgument(t, 0);
                w_87 = ATgetArgument(t, 1);
                x_87 = ATgetArgument(t, 2);
                y_87 = ATgetArgument(t, 3);
                z_87 = ATgetArgument(t, 4);
                a_88 = ATgetArgument(t, 5);
                t = m_89(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = not_null(r_87);
          if(((g_87 != NULL) && (g_87 != t)))
            _fail(t);
          else
            g_87 = t;
          t = not_null(s_87);
          if(((h_87 != NULL) && (h_87 != t)))
            _fail(t);
          else
            h_87 = t;
          t = not_null(h_87);
          t = last_0_0(t);
          if(((t_87 != NULL) && (t_87 != t)))
            _fail(t);
          else
            t_87 = t;
          t = l_89(t);
          return(t);
        }
        ATerm p_87 = NULL;
        ATerm i_89 (ATerm t)
        {
          t = not_null(p_87);
          if(((o_87 != NULL) && (o_87 != t)))
            _fail(t);
          else
            o_87 = t;
          t = not_null(p_87);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_87), term_w_8);
        t = add_0_0(t);
        if(((p_87 != NULL) && (p_87 != t)))
          _fail(t);
        else
          p_87 = t;
        t = i_89(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_87), term_y_26);
        t = copy_1_0(new_0_0, t);
        if(((q_87 != NULL) && (q_87 != t)))
          _fail(t);
        else
          q_87 = t;
        t = not_null(q_87);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_87 = ATgetFirst((ATermList) t);
            s_87 = (ATerm) ATgetNext((ATermList) t);
            t = j_89(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = x_26;
      {
        ATerm c_88 = NULL;
        ATerm n_89 (ATerm t)
        {
          t = not_null(c_88);
          if(((b_88 != NULL) && (b_88 != t)))
            _fail(t);
          else
            b_88 = t;
          t = not_null(c_88);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_87)), not_null(k_87)), not_null(h_87));
        t = concat_0_0(t);
        if(((c_88 != NULL) && (c_88 != t)))
          _fail(t);
        else
          c_88 = t;
        t = n_89(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, not_null(c_87), term_f_27), not_null(j_87), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(b_88)), not_null(g_87)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_87))), (ATerm) ATmakeAppl(sym_Op_2, not_null(c_87), not_null(l_87)))), (ATerm)ATmakeAppl(sym_Op_2, term_g_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_87))), (ATerm) ATmakeAppl(sym_Op_2, not_null(c_87), not_null(n_87)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(i_87))))));
      }
    }
    return(t);
  }
  ATerm g_89 (ATerm t)
  {
    ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL;
    t = not_null(o_86);
    if(((d_88 != NULL) && (d_88 != t)))
      _fail(t);
    else
      d_88 = t;
    t = not_null(z_86);
    if(((e_88 != NULL) && (e_88 != t)))
      _fail(t);
    else
      e_88 = t;
    t = not_null(n_86);
    {
      ATerm g_88 = NULL;
      ATerm o_89 (ATerm t)
      {
        t = not_null(g_88);
        if(((f_88 != NULL) && (f_88 != t)))
          _fail(t);
        else
          f_88 = t;
        t = not_null(g_88);
        return(t);
      }
      t = new_0_0(t);
      if(((g_88 != NULL) && (g_88 != t)))
        _fail(t);
      else
        g_88 = t;
      t = o_89(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, not_null(d_88), term_f_27), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_88)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_88))), (ATerm) ATmakeAppl(sym_Op_2, not_null(d_88), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_g_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_88))), (ATerm) ATmakeAppl(sym_Op_2, not_null(d_88), (ATerm) ATempty))), term_z_19))));
    }
    return(t);
  }
  ATerm h_89 (ATerm t)
  {
    ATerm h_88 = NULL,i_88 = NULL,l_88 = NULL,m_88 = NULL,o_88 = NULL,p_88 = NULL,q_88 = NULL,r_88 = NULL,t_88 = NULL,u_88 = NULL,d_89 = NULL;
    t = not_null(o_86);
    if(((h_88 != NULL) && (h_88 != t)))
      _fail(t);
    else
      h_88 = t;
    t = not_null(r_86);
    if(((i_88 != NULL) && (i_88 != t)))
      _fail(t);
    else
      i_88 = t;
    t = not_null(z_86);
    if(((l_88 != NULL) && (l_88 != t)))
      _fail(t);
    else
      l_88 = t;
    t = not_null(n_86);
    {
      ATerm g_27;
      g_27 = t;
      {
        ATerm v_88 = NULL;
        ATerm p_89 (ATerm t)
        {
          ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL;
          ATerm q_89 (ATerm t)
          {
            t = not_null(x_88);
            if(((o_88 != NULL) && (o_88 != t)))
              _fail(t);
            else
              o_88 = t;
            t = not_null(y_88);
            if(((p_88 != NULL) && (p_88 != t)))
              _fail(t);
            else
              p_88 = t;
            t = not_null(z_88);
            if(((q_88 != NULL) && (q_88 != t)))
              _fail(t);
            else
              q_88 = t;
            t = not_null(a_89);
            if(((r_88 != NULL) && (r_88 != t)))
              _fail(t);
            else
              r_88 = t;
            t = not_null(b_89);
            if(((t_88 != NULL) && (t_88 != t)))
              _fail(t);
            else
              t_88 = t;
            t = not_null(c_89);
            if(((u_88 != NULL) && (u_88 != t)))
              _fail(t);
            else
              u_88 = t;
            t = not_null(w_88);
            return(t);
          }
          t = not_null(v_88);
          if(((m_88 != NULL) && (m_88 != t)))
            _fail(t);
          else
            m_88 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_88), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_88)));
          t = copy_1_0(MkDistApplication_0_0, t);
          t = tuple_unzip_1_0(_id, t);
          if(((w_88 != NULL) && (w_88 != t)))
            _fail(t);
          else
            w_88 = t;
          t = not_null(w_88);
          if(match_cons(t, sym__6))
            {
              x_88 = ATgetArgument(t, 0);
              y_88 = ATgetArgument(t, 1);
              z_88 = ATgetArgument(t, 2);
              a_89 = ATgetArgument(t, 3);
              b_89 = ATgetArgument(t, 4);
              c_89 = ATgetArgument(t, 5);
              t = q_89(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = new_0_0(t);
        if(((v_88 != NULL) && (v_88 != t)))
          _fail(t);
        else
          v_88 = t;
        t = p_89(t);
      }
      t = g_27;
      {
        ATerm e_89 = NULL;
        ATerm r_89 (ATerm t)
        {
          t = not_null(e_89);
          if(((d_89 != NULL) && (d_89 != t)))
            _fail(t);
          else
            d_89 = t;
          t = not_null(e_89);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_88), not_null(t_88));
        t = conc_0_0(t);
        if(((e_89 != NULL) && (e_89 != t)))
          _fail(t);
        else
          e_89 = t;
        t = r_89(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, not_null(h_88), term_h_27), not_null(p_88), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(d_89)), not_null(m_88)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_14, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_88))), (ATerm) ATmakeAppl(sym_Op_2, not_null(h_88), not_null(r_88)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(h_88), not_null(u_88)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(o_88))))));
      }
    }
    return(t);
  }
  if(((n_86 != NULL) && (n_86 != t)))
    _fail(t);
  else
    n_86 = t;
  t = not_null(n_86);
  if(match_cons(t, sym__3))
    {
      o_86 = ATgetArgument(t, 0);
      p_86 = ATgetArgument(t, 1);
      q_86 = ATgetArgument(t, 2);
      t = not_null(p_86);
      if(match_string(t, "T"))
        {
          t = not_null(q_86);
          if(match_cons(t, sym__2))
            {
              r_86 = ATgetArgument(t, 0);
              z_86 = ATgetArgument(t, 1);
              t = not_null(r_86);
              if(match_int(t, 0))
                {
                  ATerm i_27 = t;
                  int j_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = f_89(t);
                      ;
                      LocalPopChoice(j_27);
                    }
                  else
                    {
                      t = i_27;
                      t = g_89(t);
                    }
                }
              else
                {
                  t = f_89(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_string(t, "D"))
            {
              t = not_null(q_86);
              if(match_cons(t, sym__2))
                {
                  r_86 = ATgetArgument(t, 0);
                  z_86 = ATgetArgument(t, 1);
                  t = h_89(t);
                }
              else
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
ATerm CongruenceDef_0_0 (ATerm t)
{
  ATerm f_90 = NULL,g_90 = NULL,h_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL;
  ATerm v_90 (ATerm t)
  {
    ATerm p_90 = NULL,q_90 = NULL,r_90 = NULL,s_90 = NULL,t_90 = NULL;
    t = not_null(i_90);
    if(((p_90 != NULL) && (p_90 != t)))
      _fail(t);
    else
      p_90 = t;
    t = not_null(j_90);
    if(((q_90 != NULL) && (q_90 != t)))
      _fail(t);
    else
      q_90 = t;
    t = not_null(k_90);
    if(((r_90 != NULL) && (r_90 != t)))
      _fail(t);
    else
      r_90 = t;
    t = not_null(l_90);
    if(((s_90 != NULL) && (s_90 != t)))
      _fail(t);
    else
      s_90 = t;
    t = not_null(f_90);
    {
      ATerm u_90 = NULL;
      ATerm w_90 (ATerm t)
      {
        t = not_null(u_90);
        if(((t_90 != NULL) && (t_90 != t)))
          _fail(t);
        else
          t_90 = t;
        t = not_null(u_90);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__3, not_null(p_90), not_null(q_90), not_null(r_90));
      t = DefineCongruence_0_0(t);
      t = desugar_0_0(t);
      if(((u_90 != NULL) && (u_90 != t)))
        _fail(t);
      else
        u_90 = t;
      t = w_90(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_90), not_null(s_90));
    }
    return(t);
  }
  if(((f_90 != NULL) && (f_90 != t)))
    _fail(t);
  else
    f_90 = t;
  t = not_null(f_90);
  if(match_cons(t, sym__2))
    {
      g_90 = ATgetArgument(t, 0);
      l_90 = ATgetArgument(t, 1);
      t = not_null(g_90);
      if(match_cons(t, sym__2))
        {
          h_90 = ATgetArgument(t, 0);
          k_90 = ATgetArgument(t, 1);
          t = not_null(h_90);
          if(match_cons(t, sym_Mod_2))
            {
              i_90 = ATgetArgument(t, 0);
              j_90 = ATgetArgument(t, 1);
              t = v_90(t);
            }
          else
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
ATerm get_definition_0_0 (ATerm t)
{
  ATerm k_27 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0_0(t);
      ;
      LocalPopChoice(e_28);
    }
  else
    {
      t = k_27;
      t = OverloadedDef_0_0(t);
      t = _2_0(joindefs_0_0, _id, t);
    }
  return(t);
}
ATerm GnUndefined_0_0 (ATerm t)
{
  ATerm a_91 = NULL,b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL,g_91 = NULL,h_91 = NULL;
  ATerm o_91 (ATerm t)
  {
    ATerm i_91 = NULL,j_91 = NULL,k_91 = NULL,l_91 = NULL,m_91 = NULL,n_91 = NULL;
    t = not_null(c_91);
    if(((m_91 != NULL) && (m_91 != t)))
      _fail(t);
    else
      m_91 = t;
    t = not_null(d_91);
    if(((i_91 != NULL) && (i_91 != t)))
      _fail(t);
    else
      i_91 = t;
    t = not_null(e_91);
    if(((j_91 != NULL) && (j_91 != t)))
      _fail(t);
    else
      j_91 = t;
    t = not_null(f_91);
    if(((k_91 != NULL) && (k_91 != t)))
      _fail(t);
    else
      k_91 = t;
    t = not_null(g_91);
    if(((l_91 != NULL) && (l_91 != t)))
      _fail(t);
    else
      l_91 = t;
    t = not_null(h_91);
    if(((n_91 != NULL) && (n_91 != t)))
      _fail(t);
    else
      n_91 = t;
    t = (ATerm) ATmakeAppl(sym__5, not_null(i_91), not_null(j_91), not_null(k_91), not_null(l_91), (ATerm) ATinsert(CheckATermList(not_null(n_91)), not_null(m_91)));
    return(t);
  }
  if(((a_91 != NULL) && (a_91 != t)))
    _fail(t);
  else
    a_91 = t;
  t = not_null(a_91);
  if(match_cons(t, sym__5))
    {
      b_91 = ATgetArgument(t, 0);
      e_91 = ATgetArgument(t, 1);
      f_91 = ATgetArgument(t, 2);
      g_91 = ATgetArgument(t, 3);
      h_91 = ATgetArgument(t, 4);
      t = not_null(b_91);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_91 = ATgetFirst((ATermList) t);
          d_91 = (ATerm) ATgetNext((ATermList) t);
          t = o_91(t);
        }
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
ATerm diff_1_0 (ATerm y_111 (ATerm), ATerm t)
{
  ATerm r_91 = NULL,s_91 = NULL,t_91 = NULL;
  ATerm w_91 (ATerm t)
  {
    ATerm u_91 = NULL,v_91 = NULL;
    t = not_null(s_91);
    if(((v_91 != NULL) && (v_91 != t)))
      _fail(t);
    else
      v_91 = t;
    t = not_null(t_91);
    if(((u_91 != NULL) && (u_91 != t)))
      _fail(t);
    else
      u_91 = t;
    t = not_null(v_91);
    {
      ATerm x_91 (ATerm t)
      {
        ATerm f_28 = t;
        int g_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            ;
            LocalPopChoice(g_28);
          }
        else
          {
            t = f_28;
            {
              ATerm h_28 = t;
              int i_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_3 (ATerm t)
                  {
                    t = not_null(u_91);
                    return(t);
                  }
                  t = HdMember_p__2_0(y_111, i_3, t);
                  t = x_91(t);
                  ;
                  LocalPopChoice(i_28);
                }
              else
                {
                  t = h_28;
                  t = Cons_2_0(_id, x_91, t);
                }
            }
          }
        return(t);
      }
      t = x_91(t);
    }
    return(t);
  }
  if(((r_91 != NULL) && (r_91 != t)))
    _fail(t);
  else
    r_91 = t;
  t = not_null(r_91);
  if(match_cons(t, sym__2))
    {
      s_91 = ATgetArgument(t, 0);
      t_91 = ATgetArgument(t, 1);
      t = w_91(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfShift_0_0 (ATerm t)
{
  ATerm b_92 = NULL,c_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL;
  ATerm j_92 (ATerm t)
  {
    ATerm g_92 = NULL,h_92 = NULL,i_92 = NULL;
    t = not_null(c_92);
    if(((h_92 != NULL) && (h_92 != t)))
      _fail(t);
    else
      h_92 = t;
    t = not_null(e_92);
    if(((g_92 != NULL) && (g_92 != t)))
      _fail(t);
    else
      g_92 = t;
    t = not_null(f_92);
    if(((i_92 != NULL) && (i_92 != t)))
      _fail(t);
    else
      i_92 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_92)), not_null(g_92)), not_null(i_92));
    return(t);
  }
  if(((b_92 != NULL) && (b_92 != t)))
    _fail(t);
  else
    b_92 = t;
  t = not_null(b_92);
  if(match_cons(t, sym__2))
    {
      c_92 = ATgetArgument(t, 0);
      d_92 = ATgetArgument(t, 1);
      t = not_null(d_92);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_92 = ATgetFirst((ATermList) t);
          f_92 = (ATerm) ATgetNext((ATermList) t);
          t = j_92(t);
        }
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
  ATerm m_92 = NULL,n_92 = NULL,o_92 = NULL;
  ATerm r_92 (ATerm t)
  {
    ATerm p_92 = NULL,q_92 = NULL;
    t = not_null(n_92);
    if(((p_92 != NULL) && (p_92 != t)))
      _fail(t);
    else
      p_92 = t;
    t = not_null(o_92);
    if(((q_92 != NULL) && (q_92 != t)))
      _fail(t);
    else
      q_92 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(q_92)), not_null(p_92));
    return(t);
  }
  if(((m_92 != NULL) && (m_92 != t)))
    _fail(t);
  else
    m_92 = t;
  t = not_null(m_92);
  if(match_cons(t, sym__2))
    {
      n_92 = ATgetArgument(t, 0);
      o_92 = ATgetArgument(t, 1);
      t = r_92(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0_0 (ATerm t)
{
  ATerm y_92 = NULL,z_92 = NULL,a_93 = NULL,b_93 = NULL,c_93 = NULL,d_93 = NULL,e_93 = NULL;
  ATerm l_93 (ATerm t)
  {
    ATerm f_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL;
    t = not_null(a_93);
    if(((f_93 != NULL) && (f_93 != t)))
      _fail(t);
    else
      f_93 = t;
    t = not_null(b_93);
    if(((j_93 != NULL) && (j_93 != t)))
      _fail(t);
    else
      j_93 = t;
    t = not_null(d_93);
    if(((i_93 != NULL) && (i_93 != t)))
      _fail(t);
    else
      i_93 = t;
    t = not_null(e_93);
    if(((k_93 != NULL) && (k_93 != t)))
      _fail(t);
    else
      k_93 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(f_93), not_null(i_93)), (ATerm) ATmakeAppl(sym__2, not_null(j_93), not_null(k_93)));
    return(t);
  }
  if(((y_92 != NULL) && (y_92 != t)))
    _fail(t);
  else
    y_92 = t;
  t = not_null(y_92);
  if(match_cons(t, sym__2))
    {
      z_92 = ATgetArgument(t, 0);
      c_93 = ATgetArgument(t, 1);
      t = not_null(z_92);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_93 = ATgetFirst((ATermList) t);
          b_93 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(c_93);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_93 = ATgetFirst((ATermList) t);
              e_93 = (ATerm) ATgetNext((ATermList) t);
              t = l_93(t);
            }
          else
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
  ATerm q_93 = NULL,r_93 = NULL,s_93 = NULL;
  ATerm v_93 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  if(((q_93 != NULL) && (q_93 != t)))
    _fail(t);
  else
    q_93 = t;
  t = not_null(q_93);
  if(match_cons(t, sym__2))
    {
      r_93 = ATgetArgument(t, 0);
      s_93 = ATgetArgument(t, 1);
      t = not_null(r_93);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = not_null(s_93);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = v_93(t);
            }
          else
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
ATerm genzip_4_0 (ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm t)
{
  ATerm w_93 (ATerm t)
  {
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_108(t);
        ;
        LocalPopChoice(k_28);
      }
    else
      {
        t = j_28;
        t = n_108(t);
        t = _2_0(p_108, w_93, t);
        t = o_108(t);
      }
    return(t);
  }
  t = w_93(t);
  return(t);
}
ATerm zip_1_0 (ATerm r_108 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1_0_0, Zip2_0_0, Zip3_0_0, r_108, t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm k_94 = NULL,l_94 = NULL,m_94 = NULL,n_94 = NULL,o_94 = NULL;
  ATerm j_95 (ATerm t)
  {
    ATerm p_94 = NULL,q_94 = NULL,r_94 = NULL,s_94 = NULL,t_94 = NULL,z_94 = NULL,f_95 = NULL;
    t = not_null(m_94);
    if(((p_94 != NULL) && (p_94 != t)))
      _fail(t);
    else
      p_94 = t;
    t = not_null(n_94);
    if(((q_94 != NULL) && (q_94 != t)))
      _fail(t);
    else
      q_94 = t;
    t = not_null(o_94);
    if(((r_94 != NULL) && (r_94 != t)))
      _fail(t);
    else
      r_94 = t;
    t = not_null(k_94);
    {
      ATerm l_28;
      l_28 = t;
      {
        ATerm u_94 = NULL;
        ATerm k_95 (ATerm t)
        {
          ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL,y_94 = NULL;
          ATerm s_95 (ATerm t)
          {
            t = not_null(x_94);
            if(((s_94 != NULL) && (s_94 != t)))
              _fail(t);
            else
              s_94 = t;
            t = not_null(y_94);
            if(((t_94 != NULL) && (t_94 != t)))
              _fail(t);
            else
              t_94 = t;
            t = not_null(w_94);
            return(t);
          }
          t = not_null(u_94);
          if(((v_94 != NULL) && (v_94 != t)))
            _fail(t);
          else
            v_94 = t;
          t = not_null(u_94);
          t = SSL_explode_term(not_null(v_94));
          if(((w_94 != NULL) && (w_94 != t)))
            _fail(t);
          else
            w_94 = t;
          t = not_null(w_94);
          if(match_cons(t, sym__2))
            {
              x_94 = ATgetArgument(t, 0);
              y_94 = ATgetArgument(t, 1);
              t = s_95(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = not_null(q_94);
        if(((u_94 != NULL) && (u_94 != t)))
          _fail(t);
        else
          u_94 = t;
        t = k_95(t);
      }
      t = l_28;
      {
        ATerm m_28;
        m_28 = t;
        {
          ATerm a_95 = NULL;
          ATerm t_95 (ATerm t)
          {
            ATerm b_95 = NULL,c_95 = NULL,d_95 = NULL,e_95 = NULL;
            ATerm u_95 (ATerm t)
            {
              t = not_null(d_95);
              if(((s_94 != NULL) && (s_94 != t)))
                _fail(t);
              else
                s_94 = t;
              t = not_null(e_95);
              if(((z_94 != NULL) && (z_94 != t)))
                _fail(t);
              else
                z_94 = t;
              t = not_null(c_95);
              return(t);
            }
            t = not_null(a_95);
            if(((b_95 != NULL) && (b_95 != t)))
              _fail(t);
            else
              b_95 = t;
            t = not_null(a_95);
            t = SSL_explode_term(not_null(b_95));
            if(((c_95 != NULL) && (c_95 != t)))
              _fail(t);
            else
              c_95 = t;
            t = not_null(c_95);
            if(match_cons(t, sym__2))
              {
                d_95 = ATgetArgument(t, 0);
                e_95 = ATgetArgument(t, 1);
                t = u_95(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = not_null(p_94);
          if(((a_95 != NULL) && (a_95 != t)))
            _fail(t);
          else
            a_95 = t;
          t = t_95(t);
        }
        t = m_28;
        {
          ATerm g_95 = NULL;
          ATerm v_95 (ATerm t)
          {
            t = not_null(g_95);
            if(((f_95 != NULL) && (f_95 != t)))
              _fail(t);
            else
              f_95 = t;
            t = not_null(g_95);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_94), not_null(t_94));
          t = zip_1_0(_id, t);
          if(((g_95 != NULL) && (g_95 != t)))
            _fail(t);
          else
            g_95 = t;
          t = v_95(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_95), not_null(r_94));
          t = conc_0_0(t);
        }
      }
    }
    return(t);
  }
  if(((k_94 != NULL) && (k_94 != t)))
    _fail(t);
  else
    k_94 = t;
  t = not_null(k_94);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_94 = ATgetFirst((ATermList) t);
      o_94 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(l_94);
      if(match_cons(t, sym__2))
        {
          m_94 = ATgetArgument(t, 0);
          n_94 = ATgetArgument(t, 1);
          t = j_95(t);
        }
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
  ATerm z_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL;
  ATerm g_96 (ATerm t)
  {
    ATerm e_96 = NULL,f_96 = NULL;
    t = not_null(b_96);
    if(((e_96 != NULL) && (e_96 != t)))
      _fail(t);
    else
      e_96 = t;
    t = not_null(c_96);
    if(((e_96 != NULL) && (e_96 != t)))
      _fail(t);
    else
      e_96 = t;
    t = not_null(d_96);
    if(((f_96 != NULL) && (f_96 != t)))
      _fail(t);
    else
      f_96 = t;
    t = not_null(f_96);
    return(t);
  }
  if(((z_95 != NULL) && (z_95 != t)))
    _fail(t);
  else
    z_95 = t;
  t = not_null(z_95);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_96 = ATgetFirst((ATermList) t);
      d_96 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(a_96);
      if(match_cons(t, sym__2))
        {
          b_96 = ATgetArgument(t, 0);
          c_96 = ATgetArgument(t, 1);
          t = g_96(t);
        }
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
ATerm diff_0_0 (ATerm t)
{
  ATerm n_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_3 (ATerm t)
      {
        ATerm i_96 = NULL;
        ATerm k_96 (ATerm t)
        {
          ATerm j_96 = NULL;
          t = not_null(i_96);
          if(((j_96 != NULL) && (j_96 != t)))
            _fail(t);
          else
            j_96 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(j_96));
          return(t);
        }
        if(((i_96 != NULL) && (i_96 != t)))
          _fail(t);
        else
          i_96 = t;
        t = k_96(t);
        return(t);
      }
      ATerm k_3 (ATerm t)
      {
        t = _2_0(_id, Nil_0_0, t);
        return(t);
      }
      ATerm l_3 (ATerm t)
      {
        ATerm p_28 = t;
        int q_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_3 (ATerm t)
            {
              ATerm r_28 = t;
              int s_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0_0(t);
                  ;
                  LocalPopChoice(s_28);
                }
              else
                {
                  t = r_28;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, m_3, t);
            ;
            LocalPopChoice(q_28);
          }
        else
          {
            t = p_28;
            t = UfShift_0_0(t);
          }
        return(t);
      }
      t = for_3_0(j_3, k_3, l_3, t);
      ;
      LocalPopChoice(o_28);
    }
  else
    {
      t = n_28;
      t = diff_1_0(eq_0_0, t);
    }
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm y_132 (ATerm), ATerm z_132 (ATerm), ATerm a_133 (ATerm), ATerm t)
{
  ATerm v_96 = NULL,w_96 = NULL,x_96 = NULL,y_96 = NULL,z_96 = NULL,a_97 = NULL,b_97 = NULL,c_97 = NULL;
  ATerm y_97 (ATerm t)
  {
    ATerm d_97 = NULL,e_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL,i_97 = NULL,j_97 = NULL,k_97 = NULL,l_97 = NULL,m_97 = NULL,s_97 = NULL,u_97 = NULL,w_97 = NULL;
    t = not_null(x_96);
    if(((d_97 != NULL) && (d_97 != t)))
      _fail(t);
    else
      d_97 = t;
    t = not_null(y_96);
    if(((e_97 != NULL) && (e_97 != t)))
      _fail(t);
    else
      e_97 = t;
    t = not_null(z_96);
    if(((f_97 != NULL) && (f_97 != t)))
      _fail(t);
    else
      f_97 = t;
    t = not_null(a_97);
    if(((g_97 != NULL) && (g_97 != t)))
      _fail(t);
    else
      g_97 = t;
    t = not_null(b_97);
    if(((h_97 != NULL) && (h_97 != t)))
      _fail(t);
    else
      h_97 = t;
    t = not_null(c_97);
    if(((i_97 != NULL) && (i_97 != t)))
      _fail(t);
    else
      i_97 = t;
    t = not_null(v_96);
    {
      ATerm t_28;
      t_28 = t;
      {
        ATerm n_97 = NULL,o_97 = NULL,p_97 = NULL;
        ATerm z_97 (ATerm t)
        {
          ATerm q_97 = NULL;
          ATerm a_98 (ATerm t)
          {
            ATerm r_97 = NULL;
            ATerm b_98 (ATerm t)
            {
              t = not_null(r_97);
              if(((m_97 != NULL) && (m_97 != t)))
                _fail(t);
              else
                m_97 = t;
              t = not_null(r_97);
              return(t);
            }
            t = not_null(q_97);
            if(((l_97 != NULL) && (l_97 != t)))
              _fail(t);
            else
              l_97 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_97), not_null(f_97));
            t = diff_0_0(t);
            if(((r_97 != NULL) && (r_97 != t)))
              _fail(t);
            else
              r_97 = t;
            t = b_98(t);
            return(t);
          }
          t = not_null(o_97);
          if(((k_97 != NULL) && (k_97 != t)))
            _fail(t);
          else
            k_97 = t;
          t = not_null(p_97);
          if(((j_97 != NULL) && (j_97 != t)))
            _fail(t);
          else
            j_97 = t;
          t = not_null(k_97);
          t = z_132(t);
          if(((q_97 != NULL) && (q_97 != t)))
            _fail(t);
          else
            q_97 = t;
          t = a_98(t);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_97), not_null(g_97));
        t = y_132(t);
        if(((n_97 != NULL) && (n_97 != t)))
          _fail(t);
        else
          n_97 = t;
        t = not_null(n_97);
        if(match_cons(t, sym__2))
          {
            o_97 = ATgetArgument(t, 0);
            p_97 = ATgetArgument(t, 1);
            t = z_97(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = t_28;
      {
        ATerm u_28;
        u_28 = t;
        {
          ATerm t_97 = NULL;
          ATerm c_98 (ATerm t)
          {
            t = not_null(t_97);
            if(((s_97 != NULL) && (s_97 != t)))
              _fail(t);
            else
              s_97 = t;
            t = not_null(t_97);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_97), not_null(e_97));
          t = conc_0_0(t);
          if(((t_97 != NULL) && (t_97 != t)))
            _fail(t);
          else
            t_97 = t;
          t = c_98(t);
        }
        t = u_28;
        {
          ATerm v_28;
          v_28 = t;
          {
            ATerm v_97 = NULL;
            ATerm d_98 (ATerm t)
            {
              t = not_null(v_97);
              if(((u_97 != NULL) && (u_97 != t)))
                _fail(t);
              else
                u_97 = t;
              t = not_null(v_97);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_97), not_null(f_97));
            t = conc_0_0(t);
            if(((v_97 != NULL) && (v_97 != t)))
              _fail(t);
            else
              v_97 = t;
            t = d_98(t);
          }
          t = v_28;
          {
            ATerm x_97 = NULL;
            ATerm e_98 (ATerm t)
            {
              t = not_null(x_97);
              if(((w_97 != NULL) && (w_97 != t)))
                _fail(t);
              else
                w_97 = t;
              t = not_null(x_97);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_97), not_null(k_97), not_null(h_97));
            t = a_133(t);
            if(((x_97 != NULL) && (x_97 != t)))
              _fail(t);
            else
              x_97 = t;
            t = e_98(t);
            t = (ATerm) ATmakeAppl(sym__5, not_null(s_97), not_null(u_97), not_null(j_97), not_null(w_97), not_null(i_97));
          }
        }
      }
    }
    return(t);
  }
  if(((v_96 != NULL) && (v_96 != t)))
    _fail(t);
  else
    v_96 = t;
  t = not_null(v_96);
  if(match_cons(t, sym__5))
    {
      w_96 = ATgetArgument(t, 0);
      z_96 = ATgetArgument(t, 1);
      a_97 = ATgetArgument(t, 2);
      b_97 = ATgetArgument(t, 3);
      c_97 = ATgetArgument(t, 4);
      t = not_null(w_96);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_96 = ATgetFirst((ATermList) t);
          y_96 = (ATerm) ATgetNext((ATermList) t);
          t = y_97(t);
        }
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
ATerm GnExit_0_0 (ATerm t)
{
  ATerm i_98 = NULL,j_98 = NULL,k_98 = NULL,l_98 = NULL,m_98 = NULL,n_98 = NULL;
  ATerm s_98 (ATerm t)
  {
    ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL,r_98 = NULL;
    t = not_null(k_98);
    if(((o_98 != NULL) && (o_98 != t)))
      _fail(t);
    else
      o_98 = t;
    t = not_null(l_98);
    if(((p_98 != NULL) && (p_98 != t)))
      _fail(t);
    else
      p_98 = t;
    t = not_null(m_98);
    if(((q_98 != NULL) && (q_98 != t)))
      _fail(t);
    else
      q_98 = t;
    t = not_null(n_98);
    if(((r_98 != NULL) && (r_98 != t)))
      _fail(t);
    else
      r_98 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_98), not_null(r_98));
    return(t);
  }
  if(((i_98 != NULL) && (i_98 != t)))
    _fail(t);
  else
    i_98 = t;
  t = not_null(i_98);
  if(match_cons(t, sym__5))
    {
      j_98 = ATgetArgument(t, 0);
      k_98 = ATgetArgument(t, 1);
      l_98 = ATgetArgument(t, 2);
      m_98 = ATgetArgument(t, 3);
      n_98 = ATgetArgument(t, 4);
      t = not_null(j_98);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = s_98(t);
        }
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
ATerm GnInitRoots_0_0 (ATerm t)
{
  ATerm v_98 = NULL,w_98 = NULL,x_98 = NULL,y_98 = NULL;
  ATerm c_99 (ATerm t)
  {
    ATerm z_98 = NULL,a_99 = NULL,b_99 = NULL;
    t = not_null(w_98);
    if(((z_98 != NULL) && (z_98 != t)))
      _fail(t);
    else
      z_98 = t;
    t = not_null(x_98);
    if(((a_99 != NULL) && (a_99 != t)))
      _fail(t);
    else
      a_99 = t;
    t = not_null(y_98);
    if(((b_99 != NULL) && (b_99 != t)))
      _fail(t);
    else
      b_99 = t;
    t = (ATerm) ATmakeAppl(sym__5, not_null(z_98), not_null(z_98), not_null(a_99), not_null(b_99), (ATerm) ATempty);
    return(t);
  }
  if(((v_98 != NULL) && (v_98 != t)))
    _fail(t);
  else
    v_98 = t;
  t = not_null(v_98);
  if(match_cons(t, sym__3))
    {
      w_98 = ATgetArgument(t, 0);
      x_98 = ATgetArgument(t, 1);
      y_98 = ATgetArgument(t, 2);
      t = c_99(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm z_120 (ATerm), ATerm a_121 (ATerm), ATerm t)
{
  ATerm d_99 (ATerm t)
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_120(t);
        ;
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
        t = a_121(t);
        t = d_99(t);
      }
    return(t);
  }
  t = d_99(t);
  return(t);
}
ATerm for_3_0 (ATerm c_121 (ATerm), ATerm d_121 (ATerm), ATerm e_121 (ATerm), ATerm t)
{
  t = c_121(t);
  t = while_not_2_0(d_121, e_121, t);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3_0 (ATerm j_132 (ATerm), ATerm k_132 (ATerm), ATerm l_132 (ATerm), ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3_0(j_132, k_132, l_132, t);
        ;
        LocalPopChoice(z_28);
      }
    else
      {
        t = y_28;
        t = GnUndefined_0_0(t);
      }
    return(t);
  }
  t = for_3_0(GnInitRoots_0_0, GnExit_0_0, n_3, t);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    t = svars_arity_0_0(t);
    {
      ATerm q_3 (ATerm t)
      {
        t = try_1_0(DefinitionExists_0_0, t);
        return(t);
      }
      t = map_1_0(q_3, t);
    }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    ATerm g_99 = NULL,h_99 = NULL,i_99 = NULL,j_99 = NULL;
    ATerm m_99 (ATerm t)
    {
      ATerm k_99 = NULL,l_99 = NULL;
      t = not_null(i_99);
      if(((k_99 != NULL) && (k_99 != t)))
        _fail(t);
      else
        k_99 = t;
      t = not_null(j_99);
      if(((l_99 != NULL) && (l_99 != t)))
        _fail(t);
      else
        l_99 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(l_99)), not_null(k_99));
      return(t);
    }
    if(((g_99 != NULL) && (g_99 != t)))
      _fail(t);
    else
      g_99 = t;
    t = not_null(g_99);
    if(match_cons(t, sym__3))
      {
        h_99 = ATgetArgument(t, 0);
        i_99 = ATgetArgument(t, 1);
        j_99 = ATgetArgument(t, 2);
        t = m_99(t);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3_0(get_definition_0_0, o_3, p_3, t);
  {
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0_0(t);
        ;
        LocalPopChoice(u_31);
      }
    else
      {
        t = t_31;
        t = MissingDefs_0_0(t);
        t = term_w_8;
        t = exit_0_0(t);
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm a_116 (ATerm), ATerm t)
{
  ATerm s_99 = NULL,t_99 = NULL,u_99 = NULL;
  ATerm e_100 (ATerm t)
  {
    ATerm v_99 = NULL,w_99 = NULL,x_99 = NULL,y_99 = NULL,z_99 = NULL;
    t = not_null(t_99);
    if(((v_99 != NULL) && (v_99 != t)))
      _fail(t);
    else
      v_99 = t;
    t = not_null(u_99);
    if(((w_99 != NULL) && (w_99 != t)))
      _fail(t);
    else
      w_99 = t;
    t = not_null(s_99);
    {
      ATerm v_31;
      v_31 = t;
      {
        ATerm a_100 = NULL;
        ATerm f_100 (ATerm t)
        {
          ATerm b_100 = NULL,c_100 = NULL,d_100 = NULL;
          ATerm g_100 (ATerm t)
          {
            t = not_null(c_100);
            if(((y_99 != NULL) && (y_99 != t)))
              _fail(t);
            else
              y_99 = t;
            t = not_null(d_100);
            if(((z_99 != NULL) && (z_99 != t)))
              _fail(t);
            else
              z_99 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_99), term_b_32, (ATerm) ATinsert(CheckATermList(not_null(z_99)), (ATerm) ATinsert(CheckATermList(not_null(y_99)), not_null(v_99))));
            t = table_put_0_0(t);
            return(t);
          }
          t = not_null(a_100);
          if(((x_99 != NULL) && (x_99 != t)))
            _fail(t);
          else
            x_99 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(x_99), not_null(v_99), not_null(w_99));
          t = table_push_0_0(t);
          {
            ATerm c_32 = t;
            int d_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_99), term_b_32);
                t = table_get_0_0(t);
                ;
                LocalPopChoice(d_32);
              }
            else
              {
                t = c_32;
                t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
              }
            if(((b_100 != NULL) && (b_100 != t)))
              _fail(t);
            else
              b_100 = t;
            t = not_null(b_100);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_100 = ATgetFirst((ATermList) t);
                d_100 = (ATerm) ATgetNext((ATermList) t);
                t = g_100(t);
              }
            else
              {
                _fail(t);
              }
          }
          return(t);
        }
        t = a_116(t);
        if(((a_100 != NULL) && (a_100 != t)))
          _fail(t);
        else
          a_100 = t;
        t = f_100(t);
      }
      t = v_31;
    }
    return(t);
  }
  if(((s_99 != NULL) && (s_99 != t)))
    _fail(t);
  else
    s_99 = t;
  t = not_null(s_99);
  if(match_cons(t, sym__2))
    {
      t_99 = ATgetArgument(t, 0);
      u_99 = ATgetArgument(t, 1);
      t = e_100(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm j_100 = NULL,k_100 = NULL,l_100 = NULL;
  ATerm n_100 (ATerm t)
  {
    ATerm m_100 = NULL;
    t = not_null(k_100);
    if(((m_100 != NULL) && (m_100 != t)))
      _fail(t);
    else
      m_100 = t;
    t = not_null(l_100);
    if(((m_100 != NULL) && (m_100 != t)))
      _fail(t);
    else
      m_100 = t;
    t = not_null(j_100);
    return(t);
  }
  if(((j_100 != NULL) && (j_100 != t)))
    _fail(t);
  else
    j_100 = t;
  t = not_null(j_100);
  if(match_cons(t, sym__2))
    {
      k_100 = ATgetArgument(t, 0);
      l_100 = ATgetArgument(t, 1);
      t = n_100(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm t)
{
  ATerm r_100 = NULL,s_100 = NULL,t_100 = NULL;
  ATerm y_100 (ATerm t)
  {
    ATerm u_100 = NULL,v_100 = NULL;
    t = not_null(s_100);
    if(((v_100 != NULL) && (v_100 != t)))
      _fail(t);
    else
      v_100 = t;
    t = not_null(t_100);
    if(((u_100 != NULL) && (u_100 != t)))
      _fail(t);
    else
      u_100 = t;
    t = not_null(r_100);
    t = h_112(t);
    {
      ATerm r_3 (ATerm t)
      {
        ATerm w_100 = NULL;
        ATerm z_100 (ATerm t)
        {
          ATerm x_100 = NULL;
          t = not_null(w_100);
          if(((x_100 != NULL) && (x_100 != t)))
            _fail(t);
          else
            x_100 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_100), not_null(x_100));
          t = g_112(t);
          return(t);
        }
        if(((w_100 != NULL) && (w_100 != t)))
          _fail(t);
        else
          w_100 = t;
        t = z_100(t);
        return(t);
      }
      t = fetch_1_0(r_3, t);
    }
    t = not_null(u_100);
    return(t);
  }
  if(((r_100 != NULL) && (r_100 != t)))
    _fail(t);
  else
    r_100 = t;
  t = not_null(r_100);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_100 = ATgetFirst((ATermList) t);
      t_100 = (ATerm) ATgetNext((ATermList) t);
      t = y_100(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1_0 (ATerm c_112 (ATerm), ATerm t)
{
  ATerm c_101 = NULL,d_101 = NULL,e_101 = NULL;
  ATerm j_101 (ATerm t)
  {
    ATerm f_101 = NULL,g_101 = NULL;
    t = not_null(d_101);
    if(((g_101 != NULL) && (g_101 != t)))
      _fail(t);
    else
      g_101 = t;
    t = not_null(e_101);
    if(((f_101 != NULL) && (f_101 != t)))
      _fail(t);
    else
      f_101 = t;
    t = not_null(g_101);
    {
      ATerm k_101 (ATerm t)
      {
        ATerm e_32 = t;
        int r_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            t = not_null(f_101);
            ;
            LocalPopChoice(r_32);
          }
        else
          {
            t = e_32;
            {
              ATerm s_32 = t;
              int t_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_3 (ATerm t)
                  {
                    t = not_null(f_101);
                    return(t);
                  }
                  t = HdMember_p__2_0(c_112, s_3, t);
                  t = k_101(t);
                  ;
                  LocalPopChoice(t_32);
                }
              else
                {
                  t = s_32;
                  t = Cons_2_0(_id, k_101, t);
                }
            }
          }
        return(t);
      }
      t = k_101(t);
    }
    return(t);
  }
  if(((c_101 != NULL) && (c_101 != t)))
    _fail(t);
  else
    c_101 = t;
  t = not_null(c_101);
  if(match_cons(t, sym__2))
    {
      d_101 = ATgetArgument(t, 0);
      e_101 = ATgetArgument(t, 1);
      t = j_101(t);
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
ATerm Arities_0_0 (ATerm t)
{
  ATerm t_101 = NULL;
  ATerm g_102 (ATerm t)
  {
    ATerm u_101 = NULL,v_101 = NULL,w_101 = NULL;
    t = not_null(t_101);
    if(((u_101 != NULL) && (u_101 != t)))
      _fail(t);
    else
      u_101 = t;
    t = not_null(t_101);
    if(((v_101 != NULL) && (v_101 != t)))
      _fail(t);
    else
      v_101 = t;
    t = not_null(t_101);
    {
      ATerm x_101 = NULL,y_101 = NULL,z_101 = NULL;
      ATerm i_102 (ATerm t)
      {
        t = not_null(z_101);
        if(((w_101 != NULL) && (w_101 != t)))
          _fail(t);
        else
          w_101 = t;
        t = not_null(x_101);
        return(t);
      }
      t = not_null(u_101);
      {
        ATerm t_3 (ATerm t)
        {
          t = term_u_32;
          return(t);
        }
        t = rewrite_1_0(t_3, t);
        if(((x_101 != NULL) && (x_101 != t)))
          _fail(t);
        else
          x_101 = t;
        t = not_null(x_101);
        if(match_cons(t, sym_Defined_2))
          {
            y_101 = ATgetArgument(t, 0);
            z_101 = ATgetArgument(t, 1);
            t = not_null(y_101);
            if(match_string(t, "m_0"))
              {
                t = i_102(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(w_101);
    }
    return(t);
  }
  ATerm h_102 (ATerm t)
  {
    ATerm a_102 = NULL,b_102 = NULL,c_102 = NULL;
    t = not_null(t_101);
    if(((a_102 != NULL) && (a_102 != t)))
      _fail(t);
    else
      a_102 = t;
    t = not_null(t_101);
    if(((b_102 != NULL) && (b_102 != t)))
      _fail(t);
    else
      b_102 = t;
    t = not_null(t_101);
    {
      ATerm d_102 = NULL,e_102 = NULL,f_102 = NULL;
      ATerm j_102 (ATerm t)
      {
        t = not_null(f_102);
        if(((c_102 != NULL) && (c_102 != t)))
          _fail(t);
        else
          c_102 = t;
        t = not_null(d_102);
        return(t);
      }
      t = not_null(a_102);
      {
        ATerm u_3 (ATerm t)
        {
          t = term_u_32;
          return(t);
        }
        t = rewrite_1_0(u_3, t);
        if(((d_102 != NULL) && (d_102 != t)))
          _fail(t);
        else
          d_102 = t;
        t = not_null(d_102);
        if(match_cons(t, sym_Defined_2))
          {
            e_102 = ATgetArgument(t, 0);
            f_102 = ATgetArgument(t, 1);
            t = not_null(e_102);
            if(match_string(t, "h_0"))
              {
                t = j_102(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(c_102);
    }
    return(t);
  }
  if(((t_101 != NULL) && (t_101 != t)))
    _fail(t);
  else
    t_101 = t;
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_102(t);
        ;
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
        t = h_102(t);
      }
  }
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm m_102 = NULL,n_102 = NULL,o_102 = NULL;
  ATerm q_102 (ATerm t)
  {
    ATerm p_102 = NULL;
    t = not_null(n_102);
    if(((p_102 != NULL) && (p_102 != t)))
      _fail(t);
    else
      p_102 = t;
    t = not_null(p_102);
    return(t);
  }
  if(((m_102 != NULL) && (m_102 != t)))
    _fail(t);
  else
    m_102 = t;
  t = not_null(m_102);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_102 = ATgetFirst((ATermList) t);
      o_102 = (ATerm) ATgetNext((ATermList) t);
      t = q_102(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0_0 (ATerm t)
{
  ATerm t_102 = NULL,u_102 = NULL,v_102 = NULL;
  ATerm y_102 (ATerm t)
  {
    ATerm w_102 = NULL,x_102 = NULL;
    t = not_null(u_102);
    if(((w_102 != NULL) && (w_102 != t)))
      _fail(t);
    else
      w_102 = t;
    t = not_null(v_102);
    if(((x_102 != NULL) && (x_102 != t)))
      _fail(t);
    else
      x_102 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_102), not_null(x_102));
    t = table_get_0_0(t);
    t = Hd_0_0(t);
    return(t);
  }
  if(((t_102 != NULL) && (t_102 != t)))
    _fail(t);
  else
    t_102 = t;
  t = not_null(t_102);
  if(match_cons(t, sym__2))
    {
      u_102 = ATgetArgument(t, 0);
      v_102 = ATgetArgument(t, 1);
      t = y_102(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1_0 (ATerm c_116 (ATerm), ATerm t)
{
  ATerm b_103 = NULL;
  ATerm i_103 (ATerm t)
  {
    ATerm c_103 = NULL,d_103 = NULL;
    t = not_null(b_103);
    if(((c_103 != NULL) && (c_103 != t)))
      _fail(t);
    else
      c_103 = t;
    t = not_null(b_103);
    {
      ATerm e_103 = NULL;
      ATerm m_103 (ATerm t)
      {
        t = not_null(e_103);
        if(((d_103 != NULL) && (d_103 != t)))
          _fail(t);
        else
          d_103 = t;
        t = not_null(e_103);
        return(t);
      }
      t = term_y_26;
      t = c_116(t);
      if(((e_103 != NULL) && (e_103 != t)))
        _fail(t);
      else
        e_103 = t;
      t = m_103(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_103), not_null(c_103));
      t = table_lookup_0_0(t);
    }
    return(t);
  }
  if(((b_103 != NULL) && (b_103 != t)))
    _fail(t);
  else
    b_103 = t;
  t = i_103(t);
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm x_103 = NULL,b_104 = NULL,c_104 = NULL,d_104 = NULL,e_104 = NULL;
  ATerm w_104 (ATerm t)
  {
    ATerm f_104 = NULL,g_104 = NULL,h_104 = NULL,i_104 = NULL,j_104 = NULL;
    t = not_null(c_104);
    if(((f_104 != NULL) && (f_104 != t)))
      _fail(t);
    else
      f_104 = t;
    t = not_null(d_104);
    if(((g_104 != NULL) && (g_104 != t)))
      _fail(t);
    else
      g_104 = t;
    t = not_null(x_103);
    if(((h_104 != NULL) && (h_104 != t)))
      _fail(t);
    else
      h_104 = t;
    t = not_null(b_104);
    if(((i_104 != NULL) && (i_104 != t)))
      _fail(t);
    else
      i_104 = t;
    t = not_null(c_104);
    {
      ATerm k_104 = NULL,l_104 = NULL,m_104 = NULL;
      ATerm y_104 (ATerm t)
      {
        t = not_null(m_104);
        if(((j_104 != NULL) && (j_104 != t)))
          _fail(t);
        else
          j_104 = t;
        t = not_null(k_104);
        return(t);
      }
      t = not_null(f_104);
      {
        ATerm v_3 (ATerm t)
        {
          t = term_x_32;
          return(t);
        }
        t = rewrite_1_0(v_3, t);
        if(((k_104 != NULL) && (k_104 != t)))
          _fail(t);
        else
          k_104 = t;
        t = not_null(k_104);
        if(match_cons(t, sym_Defined_2))
          {
            l_104 = ATgetArgument(t, 0);
            m_104 = ATgetArgument(t, 1);
            t = not_null(l_104);
            if(match_string(t, "j_0"))
              {
                t = y_104(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(j_104);
    }
    return(t);
  }
  ATerm x_104 (ATerm t)
  {
    ATerm n_104 = NULL,o_104 = NULL,p_104 = NULL,q_104 = NULL,r_104 = NULL;
    t = not_null(c_104);
    if(((n_104 != NULL) && (n_104 != t)))
      _fail(t);
    else
      n_104 = t;
    t = not_null(d_104);
    if(((o_104 != NULL) && (o_104 != t)))
      _fail(t);
    else
      o_104 = t;
    t = not_null(e_104);
    if(((p_104 != NULL) && (p_104 != t)))
      _fail(t);
    else
      p_104 = t;
    t = not_null(c_104);
    {
      ATerm s_104 = NULL,t_104 = NULL,u_104 = NULL,v_104 = NULL;
      ATerm z_104 (ATerm t)
      {
        t = not_null(u_104);
        if(((q_104 != NULL) && (q_104 != t)))
          _fail(t);
        else
          q_104 = t;
        t = not_null(v_104);
        if(((r_104 != NULL) && (r_104 != t)))
          _fail(t);
        else
          r_104 = t;
        t = not_null(s_104);
        return(t);
      }
      t = not_null(n_104);
      {
        ATerm w_3 (ATerm t)
        {
          t = term_x_32;
          return(t);
        }
        t = rewrite_1_0(w_3, t);
        if(((s_104 != NULL) && (s_104 != t)))
          _fail(t);
        else
          s_104 = t;
        t = not_null(s_104);
        if(match_cons(t, sym_Defined_3))
          {
            t_104 = ATgetArgument(t, 0);
            u_104 = ATgetArgument(t, 1);
            v_104 = ATgetArgument(t, 2);
            t = not_null(t_104);
            if(match_string(t, "f_0"))
              {
                t = z_104(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = (ATerm) ATinsert(CheckATermList(not_null(r_104)), not_null(q_104));
    }
    return(t);
  }
  if(((c_104 != NULL) && (c_104 != t)))
    _fail(t);
  else
    c_104 = t;
  t = not_null(c_104);
  if(match_cons(t, sym__2))
    {
      d_104 = ATgetArgument(t, 0);
      e_104 = ATgetArgument(t, 1);
      t = not_null(e_104);
      if(match_cons(t, sym__2))
        {
          x_103 = ATgetArgument(t, 0);
          b_104 = ATgetArgument(t, 1);
          {
            ATerm y_32 = t;
            int z_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = w_104(t);
                ;
                LocalPopChoice(z_32);
              }
            else
              {
                t = y_32;
                t = x_104(t);
              }
          }
        }
      else
        {
          t = x_104(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm t)
{
  ATerm a_33 = t;
  int b_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = r_114(t);
      ;
      LocalPopChoice(b_33);
    }
  else
    {
      t = a_33;
      {
        ATerm g_105 = NULL,h_105 = NULL,i_105 = NULL;
        ATerm p_105 (ATerm t)
        {
          ATerm j_105 = NULL,k_105 = NULL,l_105 = NULL,n_105 = NULL;
          t = not_null(h_105);
          if(((j_105 != NULL) && (j_105 != t)))
            _fail(t);
          else
            j_105 = t;
          t = not_null(i_105);
          if(((k_105 != NULL) && (k_105 != t)))
            _fail(t);
          else
            k_105 = t;
          t = not_null(g_105);
          {
            ATerm c_33;
            c_33 = t;
            {
              ATerm m_105 = NULL;
              ATerm q_105 (ATerm t)
              {
                t = not_null(m_105);
                if(((l_105 != NULL) && (l_105 != t)))
                  _fail(t);
                else
                  l_105 = t;
                t = not_null(m_105);
                return(t);
              }
              t = not_null(j_105);
              t = t_114(t);
              if(((m_105 != NULL) && (m_105 != t)))
                _fail(t);
              else
                m_105 = t;
              t = q_105(t);
            }
            t = c_33;
            {
              ATerm o_105 = NULL;
              ATerm r_105 (ATerm t)
              {
                t = not_null(o_105);
                if(((n_105 != NULL) && (n_105 != t)))
                  _fail(t);
                else
                  n_105 = t;
                t = not_null(o_105);
                return(t);
              }
              t = not_null(k_105);
              t = foldr_3_0(r_114, s_114, t_114, t);
              if(((o_105 != NULL) && (o_105 != t)))
                _fail(t);
              else
                o_105 = t;
              t = r_105(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_105), not_null(n_105));
              t = s_114(t);
            }
          }
          return(t);
        }
        if(((g_105 != NULL) && (g_105 != t)))
          _fail(t);
        else
          g_105 = t;
        t = not_null(g_105);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_105 = ATgetFirst((ATermList) t);
            i_105 = (ATerm) ATgetNext((ATermList) t);
            t = p_105(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    t = term_d_33;
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_w_8;
    return(t);
  }
  t = foldr_3_0(x_3, add_0_0, y_3, t);
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm c_106 = NULL,d_106 = NULL,e_106 = NULL,f_106 = NULL,g_106 = NULL;
  ATerm z_106 (ATerm t)
  {
    ATerm h_106 = NULL,i_106 = NULL,j_106 = NULL,k_106 = NULL,l_106 = NULL,m_106 = NULL,n_106 = NULL,o_106 = NULL,p_106 = NULL;
    t = not_null(c_106);
    if(((h_106 != NULL) && (h_106 != t)))
      _fail(t);
    else
      h_106 = t;
    t = not_null(d_106);
    if(((i_106 != NULL) && (i_106 != t)))
      _fail(t);
    else
      i_106 = t;
    t = not_null(e_106);
    if(((j_106 != NULL) && (j_106 != t)))
      _fail(t);
    else
      j_106 = t;
    t = not_null(f_106);
    if(((k_106 != NULL) && (k_106 != t)))
      _fail(t);
    else
      k_106 = t;
    t = not_null(g_106);
    if(((l_106 != NULL) && (l_106 != t)))
      _fail(t);
    else
      l_106 = t;
    t = not_null(c_106);
    {
      ATerm e_33;
      e_33 = t;
      {
        ATerm q_106 = NULL;
        ATerm a_107 (ATerm t)
        {
          ATerm r_106 = NULL;
          ATerm b_107 (ATerm t)
          {
            ATerm t_106 = NULL,v_106 = NULL;
            ATerm d_107 (ATerm t)
            {
              ATerm w_106 = NULL,y_106 = NULL;
              ATerm f_107 (ATerm t)
              {
                t = not_null(y_106);
                if(((p_106 != NULL) && (p_106 != t)))
                  _fail(t);
                else
                  p_106 = t;
                t = not_null(y_106);
                {
                  ATerm f_33;
                  f_33 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(i_106), (ATerm) ATmakeAppl(sym__2, not_null(m_106), not_null(n_106))), (ATerm) ATmakeAppl(sym_Defined_2, term_g_33, not_null(o_106)));
                  {
                    ATerm z_3 (ATerm t)
                    {
                      t = term_x_32;
                      return(t);
                    }
                    t = assert_1_0(z_3, t);
                  }
                  t = f_33;
                  {
                    ATerm h_33;
                    h_33 = t;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(i_106), (ATerm) ATmakeAppl(sym_Defined_2, term_f_35, not_null(p_106)));
                    {
                      ATerm a_4 (ATerm t)
                      {
                        t = term_u_32;
                        return(t);
                      }
                      t = assert_1_0(a_4, t);
                    }
                    t = h_33;
                  }
                }
                return(t);
              }
              t = not_null(v_106);
              if(((o_106 != NULL) && (o_106 != t)))
                _fail(t);
              else
                o_106 = t;
              t = not_null(v_106);
              {
                ATerm x_106 = NULL;
                ATerm e_107 (ATerm t)
                {
                  t = not_null(x_106);
                  if(((w_106 != NULL) && (w_106 != t)))
                    _fail(t);
                  else
                    w_106 = t;
                  t = not_null(x_106);
                  return(t);
                }
                t = not_null(i_106);
                {
                  ATerm g_35 = t;
                  int h_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Arities_0_0(t);
                      ;
                      LocalPopChoice(h_35);
                    }
                  else
                    {
                      t = g_35;
                      t = (ATerm) ATempty;
                    }
                  if(((x_106 != NULL) && (x_106 != t)))
                    _fail(t);
                  else
                    x_106 = t;
                  t = e_107(t);
                }
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(m_106), not_null(n_106))), not_null(w_106));
                t = union_0_0(t);
                if(((y_106 != NULL) && (y_106 != t)))
                  _fail(t);
                else
                  y_106 = t;
                t = f_107(t);
              }
              return(t);
            }
            t = not_null(r_106);
            if(((n_106 != NULL) && (n_106 != t)))
              _fail(t);
            else
              n_106 = t;
            t = not_null(r_106);
            {
              ATerm u_106 = NULL;
              ATerm c_107 (ATerm t)
              {
                t = not_null(u_106);
                if(((t_106 != NULL) && (t_106 != t)))
                  _fail(t);
                else
                  t_106 = t;
                t = not_null(u_106);
                return(t);
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_106), (ATerm) ATmakeAppl(sym__2, not_null(m_106), not_null(n_106)));
              {
                ATerm i_35 = t;
                int j_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Definitions_0_0(t);
                    ;
                    LocalPopChoice(j_35);
                  }
                else
                  {
                    t = i_35;
                    t = (ATerm) ATempty;
                  }
                if(((u_106 != NULL) && (u_106 != t)))
                  _fail(t);
                else
                  u_106 = t;
                t = c_107(t);
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_106)), not_null(h_106));
              if(((v_106 != NULL) && (v_106 != t)))
                _fail(t);
              else
                v_106 = t;
              t = d_107(t);
            }
            return(t);
          }
          t = not_null(q_106);
          if(((m_106 != NULL) && (m_106 != t)))
            _fail(t);
          else
            m_106 = t;
          t = not_null(k_106);
          t = length_0_0(t);
          if(((r_106 != NULL) && (r_106 != t)))
            _fail(t);
          else
            r_106 = t;
          t = b_107(t);
          return(t);
        }
        t = not_null(j_106);
        t = length_0_0(t);
        if(((q_106 != NULL) && (q_106 != t)))
          _fail(t);
        else
          q_106 = t;
        t = a_107(t);
      }
      t = e_33;
    }
    return(t);
  }
  if(((c_106 != NULL) && (c_106 != t)))
    _fail(t);
  else
    c_106 = t;
  t = not_null(c_106);
  if(match_cons(t, sym_SDefT_4))
    {
      d_106 = ATgetArgument(t, 0);
      e_106 = ATgetArgument(t, 1);
      f_106 = ATgetArgument(t, 2);
      g_106 = ATgetArgument(t, 3);
      t = z_106(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sort_defs_0_0 (ATerm t)
{
  t = map_1_0(RegisterSDefT_0_0, t);
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm h_107 = NULL;
  ATerm i_107 = NULL;
  ATerm j_107 (ATerm t)
  {
    t = not_null(i_107);
    if(((h_107 != NULL) && (h_107 != t)))
      _fail(t);
    else
      h_107 = t;
    t = not_null(i_107);
    return(t);
  }
  t = sort_defs_0_0(t);
  if(((i_107 != NULL) && (i_107 != t)))
    _fail(t);
  else
    i_107 = t;
  t = j_107(t);
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_m_35), not_null(h_107), (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm n_88 (ATerm), ATerm t)
{
  ATerm r_107 = NULL,s_107 = NULL;
  ATerm b_108 (ATerm t)
  {
    ATerm t_107 = NULL,u_107 = NULL,v_107 = NULL,x_107 = NULL;
    ATerm f_108 (ATerm t)
    {
      ATerm y_107 = NULL,z_107 = NULL;
      t = not_null(x_107);
      if(((y_107 != NULL) && (y_107 != t)))
        _fail(t);
      else
        y_107 = t;
      t = not_null(x_107);
      {
        ATerm a_108 = NULL;
        ATerm g_108 (ATerm t)
        {
          t = not_null(a_108);
          if(((z_107 != NULL) && (z_107 != t)))
            _fail(t);
          else
            z_107 = t;
          t = not_null(a_108);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(y_107)), not_null(v_107));
        if(((a_108 != NULL) && (a_108 != t)))
          _fail(t);
        else
          a_108 = t;
        t = g_108(t);
        t = not_null(z_107);
      }
      return(t);
    }
    t = not_null(r_107);
    if(((t_107 != NULL) && (t_107 != t)))
      _fail(t);
    else
      t_107 = t;
    t = not_null(s_107);
    if(((u_107 != NULL) && (u_107 != t)))
      _fail(t);
    else
      u_107 = t;
    t = not_null(r_107);
    {
      ATerm w_107 = NULL;
      ATerm e_108 (ATerm t)
      {
        t = not_null(w_107);
        if(((v_107 != NULL) && (v_107 != t)))
          _fail(t);
        else
          v_107 = t;
        t = not_null(w_107);
        return(t);
      }
      t = SSLgetAnnotations(not_null(t_107));
      if(((w_107 != NULL) && (w_107 != t)))
        _fail(t);
      else
        w_107 = t;
      t = e_108(t);
      t = not_null(u_107);
      t = n_88(t);
      if(((x_107 != NULL) && (x_107 != t)))
        _fail(t);
      else
        x_107 = t;
      t = f_108(t);
    }
    return(t);
  }
  if(((r_107 != NULL) && (r_107 != t)))
    _fail(t);
  else
    r_107 = t;
  t = not_null(r_107);
  if(match_cons(t, sym_Strategies_1))
    {
      s_107 = ATgetArgument(t, 0);
      t = b_108(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm t)
{
  ATerm t_108 = NULL,v_108 = NULL,x_108 = NULL;
  ATerm j_109 (ATerm t)
  {
    ATerm y_108 = NULL,z_108 = NULL,a_109 = NULL,b_109 = NULL,d_109 = NULL;
    ATerm l_109 (ATerm t)
    {
      ATerm e_109 = NULL,f_109 = NULL;
      ATerm m_109 (ATerm t)
      {
        ATerm g_109 = NULL,h_109 = NULL;
        t = not_null(f_109);
        if(((g_109 != NULL) && (g_109 != t)))
          _fail(t);
        else
          g_109 = t;
        t = not_null(f_109);
        {
          ATerm i_109 = NULL;
          ATerm n_109 (ATerm t)
          {
            t = not_null(i_109);
            if(((h_109 != NULL) && (h_109 != t)))
              _fail(t);
            else
              h_109 = t;
            t = not_null(i_109);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_109)), not_null(e_109)), not_null(b_109));
          if(((i_109 != NULL) && (i_109 != t)))
            _fail(t);
          else
            i_109 = t;
          t = n_109(t);
          t = not_null(h_109);
        }
        return(t);
      }
      t = not_null(d_109);
      if(((e_109 != NULL) && (e_109 != t)))
        _fail(t);
      else
        e_109 = t;
      t = not_null(a_109);
      t = k_88(t);
      if(((f_109 != NULL) && (f_109 != t)))
        _fail(t);
      else
        f_109 = t;
      t = m_109(t);
      return(t);
    }
    t = not_null(t_108);
    if(((y_108 != NULL) && (y_108 != t)))
      _fail(t);
    else
      y_108 = t;
    t = not_null(v_108);
    if(((z_108 != NULL) && (z_108 != t)))
      _fail(t);
    else
      z_108 = t;
    t = not_null(x_108);
    if(((a_109 != NULL) && (a_109 != t)))
      _fail(t);
    else
      a_109 = t;
    t = not_null(t_108);
    {
      ATerm c_109 = NULL;
      ATerm k_109 (ATerm t)
      {
        t = not_null(c_109);
        if(((b_109 != NULL) && (b_109 != t)))
          _fail(t);
        else
          b_109 = t;
        t = not_null(c_109);
        return(t);
      }
      t = SSLgetAnnotations(not_null(y_108));
      if(((c_109 != NULL) && (c_109 != t)))
        _fail(t);
      else
        c_109 = t;
      t = k_109(t);
      t = not_null(z_108);
      t = j_88(t);
      if(((d_109 != NULL) && (d_109 != t)))
        _fail(t);
      else
        d_109 = t;
      t = l_109(t);
    }
    return(t);
  }
  if(((t_108 != NULL) && (t_108 != t)))
    _fail(t);
  else
    t_108 = t;
  t = not_null(t_108);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_108 = ATgetFirst((ATermList) t);
      x_108 = (ATerm) ATgetNext((ATermList) t);
      t = j_109(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1_0 (ATerm s_88 (ATerm), ATerm t)
{
  ATerm t_109 = NULL,u_109 = NULL;
  ATerm g_110 (ATerm t)
  {
    ATerm v_109 = NULL,w_109 = NULL,x_109 = NULL,a_110 = NULL;
    ATerm i_110 (ATerm t)
    {
      ATerm d_110 = NULL,e_110 = NULL;
      t = not_null(a_110);
      if(((d_110 != NULL) && (d_110 != t)))
        _fail(t);
      else
        d_110 = t;
      t = not_null(a_110);
      {
        ATerm f_110 = NULL;
        ATerm j_110 (ATerm t)
        {
          t = not_null(f_110);
          if(((e_110 != NULL) && (e_110 != t)))
            _fail(t);
          else
            e_110 = t;
          t = not_null(f_110);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(d_110)), not_null(x_109));
        if(((f_110 != NULL) && (f_110 != t)))
          _fail(t);
        else
          f_110 = t;
        t = j_110(t);
        t = not_null(e_110);
      }
      return(t);
    }
    t = not_null(t_109);
    if(((v_109 != NULL) && (v_109 != t)))
      _fail(t);
    else
      v_109 = t;
    t = not_null(u_109);
    if(((w_109 != NULL) && (w_109 != t)))
      _fail(t);
    else
      w_109 = t;
    t = not_null(t_109);
    {
      ATerm y_109 = NULL;
      ATerm h_110 (ATerm t)
      {
        t = not_null(y_109);
        if(((x_109 != NULL) && (x_109 != t)))
          _fail(t);
        else
          x_109 = t;
        t = not_null(y_109);
        return(t);
      }
      t = SSLgetAnnotations(not_null(v_109));
      if(((y_109 != NULL) && (y_109 != t)))
        _fail(t);
      else
        y_109 = t;
      t = h_110(t);
      t = not_null(w_109);
      t = s_88(t);
      if(((a_110 != NULL) && (a_110 != t)))
        _fail(t);
      else
        a_110 = t;
      t = i_110(t);
    }
    return(t);
  }
  if(((t_109 != NULL) && (t_109 != t)))
    _fail(t);
  else
    t_109 = t;
  t = not_null(t_109);
  if(match_cons(t, sym_Specification_1))
    {
      u_109 = ATgetArgument(t, 0);
      t = g_110(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2_0 (ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm t)
{
  ATerm u_110 = NULL,v_110 = NULL,w_110 = NULL;
  ATerm i_111 (ATerm t)
  {
    ATerm x_110 = NULL,y_110 = NULL,z_110 = NULL,a_111 = NULL,c_111 = NULL;
    ATerm k_111 (ATerm t)
    {
      ATerm d_111 = NULL,e_111 = NULL;
      ATerm l_111 (ATerm t)
      {
        ATerm f_111 = NULL,g_111 = NULL;
        t = not_null(e_111);
        if(((f_111 != NULL) && (f_111 != t)))
          _fail(t);
        else
          f_111 = t;
        t = not_null(e_111);
        {
          ATerm h_111 = NULL;
          ATerm m_111 (ATerm t)
          {
            t = not_null(h_111);
            if(((g_111 != NULL) && (g_111 != t)))
              _fail(t);
            else
              g_111 = t;
            t = not_null(h_111);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_111), not_null(f_111)), not_null(a_111));
          if(((h_111 != NULL) && (h_111 != t)))
            _fail(t);
          else
            h_111 = t;
          t = m_111(t);
          t = not_null(g_111);
        }
        return(t);
      }
      t = not_null(c_111);
      if(((d_111 != NULL) && (d_111 != t)))
        _fail(t);
      else
        d_111 = t;
      t = not_null(z_110);
      t = b_87(t);
      if(((e_111 != NULL) && (e_111 != t)))
        _fail(t);
      else
        e_111 = t;
      t = l_111(t);
      return(t);
    }
    t = not_null(u_110);
    if(((x_110 != NULL) && (x_110 != t)))
      _fail(t);
    else
      x_110 = t;
    t = not_null(v_110);
    if(((y_110 != NULL) && (y_110 != t)))
      _fail(t);
    else
      y_110 = t;
    t = not_null(w_110);
    if(((z_110 != NULL) && (z_110 != t)))
      _fail(t);
    else
      z_110 = t;
    t = not_null(u_110);
    {
      ATerm b_111 = NULL;
      ATerm j_111 (ATerm t)
      {
        t = not_null(b_111);
        if(((a_111 != NULL) && (a_111 != t)))
          _fail(t);
        else
          a_111 = t;
        t = not_null(b_111);
        return(t);
      }
      t = SSLgetAnnotations(not_null(x_110));
      if(((b_111 != NULL) && (b_111 != t)))
        _fail(t);
      else
        b_111 = t;
      t = j_111(t);
      t = not_null(y_110);
      t = a_87(t);
      if(((c_111 != NULL) && (c_111 != t)))
        _fail(t);
      else
        c_111 = t;
      t = k_111(t);
    }
    return(t);
  }
  if(((u_110 != NULL) && (u_110 != t)))
    _fail(t);
  else
    u_110 = t;
  t = not_null(u_110);
  if(match_cons(t, sym__2))
    {
      v_110 = ATgetArgument(t, 0);
      w_110 = ATgetArgument(t, 1);
      t = i_111(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_35;
  n_35 = t;
  {
    ATerm o_111 = NULL;
    ATerm p_111 = NULL;
    ATerm q_111 (ATerm t)
    {
      t = not_null(p_111);
      if(((o_111 != NULL) && (o_111 != t)))
        _fail(t);
      else
        o_111 = t;
      t = not_null(p_111);
      return(t);
    }
    t = term_y_26;
    t = whoami_0_0(t);
    if(((p_111 != NULL) && (p_111 != t)))
      _fail(t);
    else
      p_111 = t;
    t = q_111(t);
    t = (ATerm) ATmakeAppl(sym__2, term_n_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_35), not_null(o_111)), term_o_35));
    t = printnl_0_0(t);
    t = term_w_8;
    t = exit_0_0(t);
  }
  t = n_35;
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm t_111 = NULL,u_111 = NULL,v_111 = NULL;
  ATerm a_112 (ATerm t)
  {
    ATerm w_111 = NULL,x_111 = NULL;
    t = not_null(u_111);
    if(((w_111 != NULL) && (w_111 != t)))
      _fail(t);
    else
      w_111 = t;
    t = not_null(v_111);
    if(((x_111 != NULL) && (x_111 != t)))
      _fail(t);
    else
      x_111 = t;
    t = not_null(t_111);
    {
      ATerm q_35;
      q_35 = t;
      t = SSL_printnl(not_null(w_111), not_null(x_111));
      t = q_35;
    }
    return(t);
  }
  if(((t_111 != NULL) && (t_111 != t)))
    _fail(t);
  else
    t_111 = t;
  t = not_null(t_111);
  if(match_cons(t, sym__2))
    {
      u_111 = ATgetArgument(t, 0);
      v_111 = ATgetArgument(t, 1);
      t = a_112(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm e_112 = NULL;
  ATerm i_112 (ATerm t)
  {
    ATerm f_112 = NULL;
    t = not_null(e_112);
    if(((f_112 != NULL) && (f_112 != t)))
      _fail(t);
    else
      f_112 = t;
    t = not_null(e_112);
    t = SSL_implode_string(not_null(f_112));
    return(t);
  }
  if(((e_112 != NULL) && (e_112 != t)))
    _fail(t);
  else
    e_112 = t;
  t = i_112(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_35 = t;
  int s_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(s_35);
    }
  else
    {
      t = r_35;
      {
        ATerm l_112 = NULL,m_112 = NULL,s_112 = NULL;
        ATerm w_112 (ATerm t)
        {
          ATerm t_112 = NULL,u_112 = NULL;
          t = not_null(m_112);
          if(((t_112 != NULL) && (t_112 != t)))
            _fail(t);
          else
            t_112 = t;
          t = not_null(s_112);
          if(((u_112 != NULL) && (u_112 != t)))
            _fail(t);
          else
            u_112 = t;
          t = not_null(t_112);
          {
            ATerm b_4 (ATerm t)
            {
              t = not_null(u_112);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(b_4, t);
          }
          return(t);
        }
        if(((l_112 != NULL) && (l_112 != t)))
          _fail(t);
        else
          l_112 = t;
        t = not_null(l_112);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_112 = ATgetFirst((ATermList) t);
            s_112 = (ATerm) ATgetNext((ATermList) t);
            t = w_112(t);
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
  ATerm c_113 = NULL;
  ATerm k_113 (ATerm t)
  {
    ATerm d_113 = NULL,e_113 = NULL;
    t = not_null(c_113);
    if(((d_113 != NULL) && (d_113 != t)))
      _fail(t);
    else
      d_113 = t;
    t = not_null(c_113);
    {
      ATerm f_113 = NULL;
      ATerm l_113 (ATerm t)
      {
        ATerm g_113 = NULL,h_113 = NULL,i_113 = NULL,j_113 = NULL;
        ATerm m_113 (ATerm t)
        {
          t = not_null(j_113);
          if(((e_113 != NULL) && (e_113 != t)))
            _fail(t);
          else
            e_113 = t;
          t = not_null(h_113);
          return(t);
        }
        t = not_null(f_113);
        if(((g_113 != NULL) && (g_113 != t)))
          _fail(t);
        else
          g_113 = t;
        t = not_null(f_113);
        t = SSL_explode_term(not_null(g_113));
        if(((h_113 != NULL) && (h_113 != t)))
          _fail(t);
        else
          h_113 = t;
        t = not_null(h_113);
        if(match_cons(t, sym__2))
          {
            i_113 = ATgetArgument(t, 0);
            j_113 = ATgetArgument(t, 1);
            t = not_null(i_113);
            if(match_string(t, ""))
              {
                t = m_113(t);
              }
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
      t = not_null(d_113);
      if(((f_113 != NULL) && (f_113 != t)))
        _fail(t);
      else
        f_113 = t;
      t = l_113(t);
      t = not_null(e_113);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((c_113 != NULL) && (c_113 != t)))
    _fail(t);
  else
    c_113 = t;
  t = k_113(t);
  return(t);
}
ATerm at_end_1_0 (ATerm r_110 (ATerm), ATerm t)
{
  ATerm n_113 (ATerm t)
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, n_113, t);
        ;
        LocalPopChoice(u_35);
      }
    else
      {
        t = t_35;
        t = Nil_0_0(t);
        t = r_110(t);
      }
    return(t);
  }
  t = n_113(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm q_113 = NULL,r_113 = NULL,s_113 = NULL;
  ATerm v_113 (ATerm t)
  {
    ATerm t_113 = NULL,u_113 = NULL;
    t = not_null(r_113);
    if(((u_113 != NULL) && (u_113 != t)))
      _fail(t);
    else
      u_113 = t;
    t = not_null(s_113);
    if(((t_113 != NULL) && (t_113 != t)))
      _fail(t);
    else
      t_113 = t;
    t = not_null(u_113);
    {
      ATerm c_4 (ATerm t)
      {
        t = not_null(t_113);
        return(t);
      }
      t = at_end_1_0(c_4, t);
    }
    return(t);
  }
  if(((q_113 != NULL) && (q_113 != t)))
    _fail(t);
  else
    q_113 = t;
  t = not_null(q_113);
  if(match_cons(t, sym__2))
    {
      r_113 = ATgetArgument(t, 0);
      s_113 = ATgetArgument(t, 1);
      t = v_113(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_36 = t;
  int q_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(q_36);
    }
  else
    {
      t = p_36;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm x_113 = NULL;
  ATerm z_113 (ATerm t)
  {
    ATerm y_113 = NULL;
    t = not_null(x_113);
    if(((y_113 != NULL) && (y_113 != t)))
      _fail(t);
    else
      y_113 = t;
    t = not_null(x_113);
    t = SSL_explode_string(not_null(y_113));
    return(t);
  }
  if(((x_113 != NULL) && (x_113 != t)))
    _fail(t);
  else
    x_113 = t;
  t = z_113(t);
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
  ATerm r_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(s_36);
    }
  else
    {
      t = r_36;
      {
        ATerm k_37 = t;
        int l_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_4 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(d_4, t);
            ;
            LocalPopChoice(l_37);
          }
        else
          {
            t = k_37;
            {
              ATerm h_114 = NULL,i_114 = NULL,j_114 = NULL;
              ATerm x_114 (ATerm t)
              {
                ATerm k_114 = NULL;
                t = not_null(i_114);
                if(((k_114 != NULL) && (k_114 != t)))
                  _fail(t);
                else
                  k_114 = t;
                t = not_null(k_114);
                return(t);
              }
              ATerm y_114 (ATerm t)
              {
                ATerm l_114 = NULL;
                t = not_null(i_114);
                if(((l_114 != NULL) && (l_114 != t)))
                  _fail(t);
                else
                  l_114 = t;
                t = not_null(l_114);
                {
                  ATerm m_37 = t;
                  int n_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(n_37);
                    }
                  else
                    {
                      t = m_37;
                      {
                        ATerm e_4 (ATerm t)
                        {
                          t = term_o_37;
                          return(t);
                        }
                        t = debug_1_0(e_4, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm z_114 (ATerm t)
              {
                ATerm m_114 = NULL,n_114 = NULL,o_114 = NULL,v_114 = NULL;
                t = not_null(i_114);
                if(((m_114 != NULL) && (m_114 != t)))
                  _fail(t);
                else
                  m_114 = t;
                t = not_null(j_114);
                if(((n_114 != NULL) && (n_114 != t)))
                  _fail(t);
                else
                  n_114 = t;
                t = not_null(h_114);
                {
                  ATerm p_37;
                  p_37 = t;
                  {
                    ATerm u_114 = NULL;
                    ATerm a_115 (ATerm t)
                    {
                      t = not_null(u_114);
                      if(((o_114 != NULL) && (o_114 != t)))
                        _fail(t);
                      else
                        o_114 = t;
                      t = not_null(u_114);
                      return(t);
                    }
                    t = not_null(m_114);
                    t = eval_config_0_0(t);
                    if(((u_114 != NULL) && (u_114 != t)))
                      _fail(t);
                    else
                      u_114 = t;
                    t = a_115(t);
                  }
                  t = p_37;
                  {
                    ATerm w_114 = NULL;
                    ATerm b_115 (ATerm t)
                    {
                      t = not_null(w_114);
                      if(((v_114 != NULL) && (v_114 != t)))
                        _fail(t);
                      else
                        v_114 = t;
                      t = not_null(w_114);
                      return(t);
                    }
                    t = not_null(n_114);
                    t = eval_config_0_0(t);
                    if(((w_114 != NULL) && (w_114 != t)))
                      _fail(t);
                    else
                      w_114 = t;
                    t = b_115(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_114), not_null(v_114));
                    t = conc_strings_0_0(t);
                  }
                }
                return(t);
              }
              if(((h_114 != NULL) && (h_114 != t)))
                _fail(t);
              else
                h_114 = t;
              t = not_null(h_114);
              if(match_cons(t, sym_Path_1))
                {
                  i_114 = ATgetArgument(t, 0);
                  t = x_114(t);
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_114 = ATgetArgument(t, 0);
                      t = y_114(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_114 = ATgetArgument(t, 0);
                          j_114 = ATgetArgument(t, 1);
                          t = z_114(t);
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
  ATerm g_115 = NULL;
  ATerm k_115 (ATerm t)
  {
    ATerm h_115 = NULL;
    t = not_null(g_115);
    if(((h_115 != NULL) && (h_115 != t)))
      _fail(t);
    else
      h_115 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_q_37, not_null(h_115));
    t = table_get_0_0(t);
    {
      ATerm f_4 (ATerm t)
      {
        t = eval_config_0_0(t);
        {
          ATerm s_37;
          s_37 = t;
          {
            ATerm i_115 = NULL;
            ATerm j_115 = NULL;
            ATerm l_115 (ATerm t)
            {
              t = not_null(j_115);
              if(((i_115 != NULL) && (i_115 != t)))
                _fail(t);
              else
                i_115 = t;
              t = not_null(j_115);
              return(t);
            }
            if(((j_115 != NULL) && (j_115 != t)))
              _fail(t);
            else
              j_115 = t;
            t = l_115(t);
            t = (ATerm) ATmakeAppl(sym__3, term_q_37, not_null(h_115), not_null(i_115));
            t = table_put_0_0(t);
          }
          t = s_37;
        }
        return(t);
      }
      t = try_1_0(f_4, t);
    }
    return(t);
  }
  if(((g_115 != NULL) && (g_115 != t)))
    _fail(t);
  else
    g_115 = t;
  t = k_115(t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_126 (ATerm), ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm t_37;
    t_37 = t;
    {
      ATerm n_115 = NULL;
      ATerm o_115 = NULL;
      ATerm p_115 (ATerm t)
      {
        t = not_null(o_115);
        if(((n_115 != NULL) && (n_115 != t)))
          _fail(t);
        else
          n_115 = t;
        t = not_null(o_115);
        return(t);
      }
      t = term_u_37;
      t = get_config_0_0(t);
      if(((o_115 != NULL) && (o_115 != t)))
        _fail(t);
      else
        o_115 = t;
      t = p_115(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_115), term_v_37);
      t = geq_0_0(t);
    }
    t = t_37;
    t = t_126(t);
    return(t);
  }
  t = try_1_0(g_4, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm u_115 = NULL,v_115 = NULL,w_115 = NULL,x_115 = NULL;
  ATerm f_116 (ATerm t)
  {
    ATerm y_115 = NULL,z_115 = NULL,b_116 = NULL;
    t = not_null(v_115);
    if(((y_115 != NULL) && (y_115 != t)))
      _fail(t);
    else
      y_115 = t;
    t = not_null(x_115);
    if(((z_115 != NULL) && (z_115 != t)))
      _fail(t);
    else
      z_115 = t;
    t = not_null(u_115);
    t = SSL_fputc(not_null(y_115), not_null(z_115));
    {
      ATerm d_116 = NULL;
      ATerm g_116 (ATerm t)
      {
        t = not_null(d_116);
        if(((b_116 != NULL) && (b_116 != t)))
          _fail(t);
        else
          b_116 = t;
        t = not_null(d_116);
        return(t);
      }
      if(((d_116 != NULL) && (d_116 != t)))
        _fail(t);
      else
        d_116 = t;
      t = g_116(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_116));
    }
    return(t);
  }
  if(((u_115 != NULL) && (u_115 != t)))
    _fail(t);
  else
    u_115 = t;
  t = not_null(u_115);
  if(match_cons(t, sym__2))
    {
      v_115 = ATgetArgument(t, 0);
      w_115 = ATgetArgument(t, 1);
      t = not_null(w_115);
      if(match_cons(t, sym_Stream_1))
        {
          x_115 = ATgetArgument(t, 0);
          t = f_116(t);
        }
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
  ATerm l_116 = NULL,m_116 = NULL,n_116 = NULL,o_116 = NULL;
  ATerm t_116 (ATerm t)
  {
    ATerm p_116 = NULL,q_116 = NULL,r_116 = NULL;
    t = not_null(n_116);
    if(((p_116 != NULL) && (p_116 != t)))
      _fail(t);
    else
      p_116 = t;
    t = not_null(o_116);
    if(((q_116 != NULL) && (q_116 != t)))
      _fail(t);
    else
      q_116 = t;
    t = not_null(l_116);
    t = SSL_write_term_to_stream_text(not_null(p_116), not_null(q_116));
    {
      ATerm s_116 = NULL;
      ATerm u_116 (ATerm t)
      {
        t = not_null(s_116);
        if(((r_116 != NULL) && (r_116 != t)))
          _fail(t);
        else
          r_116 = t;
        t = not_null(s_116);
        return(t);
      }
      if(((s_116 != NULL) && (s_116 != t)))
        _fail(t);
      else
        s_116 = t;
      t = u_116(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_116));
    }
    return(t);
  }
  if(((l_116 != NULL) && (l_116 != t)))
    _fail(t);
  else
    l_116 = t;
  t = not_null(l_116);
  if(match_cons(t, sym__2))
    {
      m_116 = ATgetArgument(t, 0);
      o_116 = ATgetArgument(t, 1);
      t = not_null(m_116);
      if(match_cons(t, sym_Stream_1))
        {
          n_116 = ATgetArgument(t, 0);
          t = t_116(t);
        }
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
  ATerm h_4 (ATerm t)
  {
    ATerm w_116 = NULL;
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm x_116 = NULL;
      ATerm y_116 (ATerm t)
      {
        t = not_null(x_116);
        if(((w_116 != NULL) && (w_116 != t)))
          _fail(t);
        else
          w_116 = t;
        t = not_null(x_116);
        return(t);
      }
      if(((x_116 != NULL) && (x_116 != t)))
        _fail(t);
      else
        x_116 = t;
      t = y_116(t);
      t = (ATerm) ATmakeAppl(sym__2, term_a_38, not_null(w_116));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(h_4, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm d_117 = NULL,e_117 = NULL,f_117 = NULL,g_117 = NULL;
  ATerm l_117 (ATerm t)
  {
    ATerm h_117 = NULL,i_117 = NULL,j_117 = NULL;
    t = not_null(f_117);
    if(((h_117 != NULL) && (h_117 != t)))
      _fail(t);
    else
      h_117 = t;
    t = not_null(g_117);
    if(((i_117 != NULL) && (i_117 != t)))
      _fail(t);
    else
      i_117 = t;
    t = not_null(d_117);
    t = SSL_write_term_to_stream_baf(not_null(h_117), not_null(i_117));
    {
      ATerm k_117 = NULL;
      ATerm m_117 (ATerm t)
      {
        t = not_null(k_117);
        if(((j_117 != NULL) && (j_117 != t)))
          _fail(t);
        else
          j_117 = t;
        t = not_null(k_117);
        return(t);
      }
      if(((k_117 != NULL) && (k_117 != t)))
        _fail(t);
      else
        k_117 = t;
      t = m_117(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_117));
    }
    return(t);
  }
  if(((d_117 != NULL) && (d_117 != t)))
    _fail(t);
  else
    d_117 = t;
  t = not_null(d_117);
  if(match_cons(t, sym__2))
    {
      e_117 = ATgetArgument(t, 0);
      g_117 = ATgetArgument(t, 1);
      t = not_null(e_117);
      if(match_cons(t, sym_Stream_1))
        {
          f_117 = ATgetArgument(t, 0);
          t = l_117(t);
        }
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
ATerm WriteToFile_1_0 (ATerm p_125 (ATerm), ATerm t)
{
  ATerm r_117 = NULL,s_117 = NULL,t_117 = NULL;
  ATerm a_118 (ATerm t)
  {
    ATerm u_117 = NULL,v_117 = NULL,w_117 = NULL,y_117 = NULL;
    t = not_null(s_117);
    if(((u_117 != NULL) && (u_117 != t)))
      _fail(t);
    else
      u_117 = t;
    t = not_null(t_117);
    if(((v_117 != NULL) && (v_117 != t)))
      _fail(t);
    else
      v_117 = t;
    t = not_null(u_117);
    {
      ATerm x_117 = NULL;
      ATerm b_118 (ATerm t)
      {
        t = not_null(x_117);
        if(((w_117 != NULL) && (w_117 != t)))
          _fail(t);
        else
          w_117 = t;
        t = not_null(x_117);
        return(t);
      }
      if(((x_117 != NULL) && (x_117 != t)))
        _fail(t);
      else
        x_117 = t;
      t = b_118(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_117), term_b_38);
      t = open_stream_0_0(t);
      {
        ATerm z_117 = NULL;
        ATerm c_118 (ATerm t)
        {
          t = not_null(z_117);
          if(((y_117 != NULL) && (y_117 != t)))
            _fail(t);
          else
            y_117 = t;
          t = not_null(z_117);
          return(t);
        }
        if(((z_117 != NULL) && (z_117 != t)))
          _fail(t);
        else
          z_117 = t;
        t = c_118(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_117), not_null(v_117));
        t = p_125(t);
        t = fclose_0_0(t);
        t = not_null(v_117);
      }
    }
    return(t);
  }
  if(((r_117 != NULL) && (r_117 != t)))
    _fail(t);
  else
    r_117 = t;
  t = not_null(r_117);
  if(match_cons(t, sym__2))
    {
      s_117 = ATgetArgument(t, 0);
      t_117 = ATgetArgument(t, 1);
      t = a_118(t);
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
  ATerm h_118 = NULL;
  ATerm c_38;
  c_38 = t;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm d_38 = t;
      int e_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_4 (ATerm t)
          {
            ATerm i_118 = NULL,j_118 = NULL;
            ATerm r_118 (ATerm t)
            {
              t = not_null(j_118);
              if(((h_118 != NULL) && (h_118 != t)))
                _fail(t);
              else
                h_118 = t;
              t = not_null(i_118);
              return(t);
            }
            if(((i_118 != NULL) && (i_118 != t)))
              _fail(t);
            else
              i_118 = t;
            t = not_null(i_118);
            if(match_cons(t, sym_Output_1))
              {
                j_118 = ATgetArgument(t, 0);
                t = r_118(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1_0(l_4, t);
          ;
          LocalPopChoice(e_38);
        }
      else
        {
          t = d_38;
          {
            ATerm k_118 = NULL;
            ATerm s_118 (ATerm t)
            {
              t = not_null(k_118);
              if(((h_118 != NULL) && (h_118 != t)))
                _fail(t);
              else
                h_118 = t;
              t = not_null(k_118);
              return(t);
            }
            t = term_f_38;
            if(((k_118 != NULL) && (k_118 != t)))
              _fail(t);
            else
              k_118 = t;
            t = s_118(t);
          }
        }
      return(t);
    }
    t = _2_0(i_4, _id, t);
  }
  t = c_38;
  {
    ATerm m_4 (ATerm t)
    {
      ATerm n_4 (ATerm t)
      {
        t = not_null(h_118);
        return(t);
      }
      t = split_2_0(n_4, _id, t);
      return(t);
    }
    t = _2_0(_id, m_4, t);
    {
      ATerm g_38 = t;
      int h_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_4 (ATerm t)
          {
            ATerm p_4 (ATerm t)
            {
              ATerm q_118 = NULL;
              if(((q_118 != NULL) && (q_118 != t)))
                _fail(t);
              else
                q_118 = t;
              t = not_null(q_118);
              if(match_cons(t, sym_Binary_0))
                {
                  t = not_null(q_118);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1_0(p_4, t);
            return(t);
          }
          t = _2_0(o_4, WriteToBinaryFile_0_0, t);
          ;
          LocalPopChoice(h_38);
        }
      else
        {
          t = g_38;
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
ATerm apply_strategy_1_0 (ATerm r_128 (ATerm), ATerm t)
{
  ATerm w_118 = NULL,y_118 = NULL,z_118 = NULL,a_119 = NULL;
  ATerm e_119 (ATerm t)
  {
    ATerm b_119 = NULL,c_119 = NULL;
    t = not_null(z_118);
    if(((b_119 != NULL) && (b_119 != t)))
      _fail(t);
    else
      b_119 = t;
    t = not_null(a_119);
    if(((c_119 != NULL) && (c_119 != t)))
      _fail(t);
    else
      c_119 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_119)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(w_118))), not_null(c_119));
    return(t);
  }
  ATerm k_38;
  k_38 = t;
  t = dtime_0_0(t);
  t = k_38;
  t = r_128(t);
  {
    ATerm l_38;
    l_38 = t;
    {
      ATerm x_118 = NULL;
      ATerm d_119 (ATerm t)
      {
        t = not_null(x_118);
        if(((w_118 != NULL) && (w_118 != t)))
          _fail(t);
        else
          w_118 = t;
        t = not_null(x_118);
        return(t);
      }
      t = dtime_0_0(t);
      if(((x_118 != NULL) && (x_118 != t)))
        _fail(t);
      else
        x_118 = t;
      t = d_119(t);
    }
    t = l_38;
    if(((y_118 != NULL) && (y_118 != t)))
      _fail(t);
    else
      y_118 = t;
    t = not_null(y_118);
    if(match_cons(t, sym__2))
      {
        z_118 = ATgetArgument(t, 0);
        a_119 = ATgetArgument(t, 1);
        t = e_119(t);
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
  ATerm i_119 = NULL,j_119 = NULL;
  ATerm o_119 (ATerm t)
  {
    ATerm k_119 = NULL;
    t = not_null(i_119);
    if(((k_119 != NULL) && (k_119 != t)))
      _fail(t);
    else
      k_119 = t;
    t = not_null(j_119);
    t = SSL_fclose(not_null(k_119));
    return(t);
  }
  ATerm p_119 (ATerm t)
  {
    ATerm n_119 = NULL;
    t = not_null(j_119);
    if(((n_119 != NULL) && (n_119 != t)))
      _fail(t);
    else
      n_119 = t;
    t = not_null(j_119);
    t = SSL_fclose(not_null(n_119));
    return(t);
  }
  if(((j_119 != NULL) && (j_119 != t)))
    _fail(t);
  else
    j_119 = t;
  t = not_null(j_119);
  if(match_cons(t, sym_Stream_1))
    {
      i_119 = ATgetArgument(t, 0);
      {
        ATerm m_38 = t;
        int q_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_119(t);
            ;
            LocalPopChoice(q_38);
          }
        else
          {
            t = m_38;
            t = p_119(t);
          }
      }
    }
  else
    {
      t = p_119(t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm s_119 = NULL,t_119 = NULL;
  ATerm v_119 (ATerm t)
  {
    ATerm u_119 = NULL;
    t = not_null(t_119);
    if(((u_119 != NULL) && (u_119 != t)))
      _fail(t);
    else
      u_119 = t;
    t = not_null(s_119);
    t = SSL_read_term_from_stream(not_null(u_119));
    return(t);
  }
  if(((s_119 != NULL) && (s_119 != t)))
    _fail(t);
  else
    s_119 = t;
  t = not_null(s_119);
  if(match_cons(t, sym_Stream_1))
    {
      t_119 = ATgetArgument(t, 0);
      t = v_119(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm b_125 (ATerm), ATerm t)
{
  ATerm r_38;
  r_38 = t;
  {
    ATerm y_119 = NULL,a_120 = NULL;
    ATerm u_38;
    u_38 = t;
    {
      ATerm z_119 = NULL;
      ATerm c_120 (ATerm t)
      {
        t = not_null(z_119);
        if(((y_119 != NULL) && (y_119 != t)))
          _fail(t);
        else
          y_119 = t;
        t = not_null(z_119);
        return(t);
      }
      t = b_125(t);
      if(((z_119 != NULL) && (z_119 != t)))
        _fail(t);
      else
        z_119 = t;
      t = c_120(t);
    }
    t = u_38;
    {
      ATerm b_120 = NULL;
      ATerm d_120 (ATerm t)
      {
        t = not_null(b_120);
        if(((a_120 != NULL) && (a_120 != t)))
          _fail(t);
        else
          a_120 = t;
        t = not_null(b_120);
        return(t);
      }
      if(((b_120 != NULL) && (b_120 != t)))
        _fail(t);
      else
        b_120 = t;
      t = d_120(t);
      t = (ATerm) ATmakeAppl(sym__2, term_n_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_120)), not_null(y_119)));
      t = printnl_0_0(t);
    }
  }
  t = r_38;
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm h_120 = NULL,i_120 = NULL,j_120 = NULL;
  ATerm q_120 (ATerm t)
  {
    ATerm m_120 = NULL,n_120 = NULL,o_120 = NULL;
    t = not_null(i_120);
    if(((m_120 != NULL) && (m_120 != t)))
      _fail(t);
    else
      m_120 = t;
    t = not_null(j_120);
    if(((n_120 != NULL) && (n_120 != t)))
      _fail(t);
    else
      n_120 = t;
    t = not_null(h_120);
    t = SSL_fopen(not_null(m_120), not_null(n_120));
    {
      ATerm p_120 = NULL;
      ATerm r_120 (ATerm t)
      {
        t = not_null(p_120);
        if(((o_120 != NULL) && (o_120 != t)))
          _fail(t);
        else
          o_120 = t;
        t = not_null(p_120);
        return(t);
      }
      if(((p_120 != NULL) && (p_120 != t)))
        _fail(t);
      else
        p_120 = t;
      t = r_120(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_120));
    }
    return(t);
  }
  if(((h_120 != NULL) && (h_120 != t)))
    _fail(t);
  else
    h_120 = t;
  t = not_null(h_120);
  if(match_cons(t, sym__2))
    {
      i_120 = ATgetArgument(t, 0);
      j_120 = ATgetArgument(t, 1);
      t = q_120(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm t_120 = NULL;
  ATerm v_120 (ATerm t)
  {
    ATerm u_120 = NULL;
    t = not_null(t_120);
    if(((u_120 != NULL) && (u_120 != t)))
      _fail(t);
    else
      u_120 = t;
    t = not_null(t_120);
    t = SSL_is_string(not_null(u_120));
    return(t);
  }
  if(((t_120 != NULL) && (t_120 != t)))
    _fail(t);
  else
    t_120 = t;
  t = v_120(t);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_120 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm y_120 = NULL;
    ATerm f_121 (ATerm t)
    {
      t = not_null(y_120);
      if(((x_120 != NULL) && (x_120 != t)))
        _fail(t);
      else
        x_120 = t;
      t = not_null(y_120);
      return(t);
    }
    if(((y_120 != NULL) && (y_120 != t)))
      _fail(t);
    else
      y_120 = t;
    t = f_121(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_120));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_121 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm i_121 = NULL;
    ATerm j_121 (ATerm t)
    {
      t = not_null(i_121);
      if(((h_121 != NULL) && (h_121 != t)))
        _fail(t);
      else
        h_121 = t;
      t = not_null(i_121);
      return(t);
    }
    if(((i_121 != NULL) && (i_121 != t)))
      _fail(t);
    else
      i_121 = t;
    t = j_121(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_121));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_121 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm m_121 = NULL;
    ATerm n_121 (ATerm t)
    {
      t = not_null(m_121);
      if(((l_121 != NULL) && (l_121 != t)))
        _fail(t);
      else
        l_121 = t;
      t = not_null(m_121);
      return(t);
    }
    if(((m_121 != NULL) && (m_121 != t)))
      _fail(t);
    else
      m_121 = t;
    t = n_121(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_121));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm s_121 = NULL;
  ATerm t_121 (ATerm t)
  {
    t = not_null(s_121);
    t = stderr_stream_0_0(t);
    return(t);
  }
  ATerm u_121 (ATerm t)
  {
    t = not_null(s_121);
    t = stdout_stream_0_0(t);
    return(t);
  }
  ATerm v_121 (ATerm t)
  {
    t = not_null(s_121);
    t = stdin_stream_0_0(t);
    return(t);
  }
  if(((s_121 != NULL) && (s_121 != t)))
    _fail(t);
  else
    s_121 = t;
  t = not_null(s_121);
  if(match_cons(t, sym_stderr_0))
    {
      t = t_121(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_121(t);
        }
      else
        {
          if(match_cons(t, sym_stdin_0))
            {
              t = v_121(t);
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
  ATerm c_122 = NULL;
  ATerm n_122 (ATerm t)
  {
    ATerm d_122 = NULL,e_122 = NULL,f_122 = NULL;
    t = not_null(c_122);
    if(((d_122 != NULL) && (d_122 != t)))
      _fail(t);
    else
      d_122 = t;
    t = not_null(c_122);
    {
      ATerm g_122 = NULL;
      ATerm o_122 (ATerm t)
      {
        ATerm h_122 = NULL,i_122 = NULL,j_122 = NULL,k_122 = NULL,l_122 = NULL,m_122 = NULL;
        ATerm p_122 (ATerm t)
        {
          t = not_null(l_122);
          if(((f_122 != NULL) && (f_122 != t)))
            _fail(t);
          else
            f_122 = t;
          t = not_null(m_122);
          if(((e_122 != NULL) && (e_122 != t)))
            _fail(t);
          else
            e_122 = t;
          t = not_null(i_122);
          return(t);
        }
        t = not_null(g_122);
        if(((h_122 != NULL) && (h_122 != t)))
          _fail(t);
        else
          h_122 = t;
        t = not_null(g_122);
        t = SSL_explode_term(not_null(h_122));
        if(((i_122 != NULL) && (i_122 != t)))
          _fail(t);
        else
          i_122 = t;
        t = not_null(i_122);
        if(match_cons(t, sym__2))
          {
            j_122 = ATgetArgument(t, 0);
            k_122 = ATgetArgument(t, 1);
            t = not_null(j_122);
            if(match_string(t, ""))
              {
                t = not_null(k_122);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    l_122 = ATgetFirst((ATermList) t);
                    m_122 = (ATerm) ATgetNext((ATermList) t);
                    t = p_122(t);
                  }
                else
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
      t = not_null(d_122);
      if(((g_122 != NULL) && (g_122 != t)))
        _fail(t);
      else
        g_122 = t;
      t = o_122(t);
      t = not_null(f_122);
    }
    return(t);
  }
  if(((c_122 != NULL) && (c_122 != t)))
    _fail(t);
  else
    c_122 = t;
  t = n_122(t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm u_122 = NULL,v_122 = NULL,w_122 = NULL;
  ATerm a_123 (ATerm t)
  {
    t = not_null(u_122);
    {
      ATerm v_38 = t;
      int w_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Fst_0_0(t);
          t = stdio_stream_0_0(t);
          ;
          LocalPopChoice(w_38);
        }
      else
        {
          t = v_38;
          {
            ATerm x_38 = t;
            int y_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_4 (ATerm t)
                {
                  ATerm x_122 = NULL,y_122 = NULL;
                  ATerm b_123 (ATerm t)
                  {
                    ATerm z_122 = NULL;
                    t = not_null(y_122);
                    if(((z_122 != NULL) && (z_122 != t)))
                      _fail(t);
                    else
                      z_122 = t;
                    t = not_null(z_122);
                    return(t);
                  }
                  if(((x_122 != NULL) && (x_122 != t)))
                    _fail(t);
                  else
                    x_122 = t;
                  t = not_null(x_122);
                  if(match_cons(t, sym_Path_1))
                    {
                      y_122 = ATgetArgument(t, 0);
                      t = b_123(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = _2_0(q_4, _id, t);
                t = fopen_0_0(t);
                ;
                LocalPopChoice(y_38);
              }
            else
              {
                t = x_38;
                t = _2_0(is_string_0_0, _id, t);
                t = fopen_0_0(t);
              }
          }
        }
    }
    return(t);
  }
  if(((u_122 != NULL) && (u_122 != t)))
    _fail(t);
  else
    u_122 = t;
  t = not_null(u_122);
  if(match_cons(t, sym__2))
    {
      v_122 = ATgetArgument(t, 0);
      w_122 = ATgetArgument(t, 1);
      t = a_123(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_123 = NULL;
  ATerm z_38 = t;
  int a_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_123 = NULL;
      ATerm f_123 = NULL;
      ATerm i_123 (ATerm t)
      {
        t = not_null(f_123);
        if(((e_123 != NULL) && (e_123 != t)))
          _fail(t);
        else
          e_123 = t;
        t = not_null(f_123);
        return(t);
      }
      if(((f_123 != NULL) && (f_123 != t)))
        _fail(t);
      else
        f_123 = t;
      t = i_123(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_123), term_b_39);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_39);
    }
  else
    {
      t = z_38;
      {
        ATerm r_4 (ATerm t)
        {
          t = term_d_39;
          return(t);
        }
        t = debug_1_0(r_4, t);
        _fail(t);
      }
    }
  {
    ATerm f_39;
    f_39 = t;
    {
      ATerm h_123 = NULL;
      ATerm j_123 (ATerm t)
      {
        t = not_null(h_123);
        if(((g_123 != NULL) && (g_123 != t)))
          _fail(t);
        else
          g_123 = t;
        t = not_null(h_123);
        return(t);
      }
      t = read_from_stream_0_0(t);
      if(((h_123 != NULL) && (h_123 != t)))
        _fail(t);
      else
        h_123 = t;
      t = j_123(t);
    }
    t = f_39;
    t = fclose_0_0(t);
    t = not_null(g_123);
  }
  return(t);
}
ATerm split_2_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm t)
{
  ATerm m_123 = NULL,o_123 = NULL;
  ATerm g_39;
  g_39 = t;
  {
    ATerm n_123 = NULL;
    ATerm q_123 (ATerm t)
    {
      t = not_null(n_123);
      if(((m_123 != NULL) && (m_123 != t)))
        _fail(t);
      else
        m_123 = t;
      t = not_null(n_123);
      return(t);
    }
    t = m_107(t);
    if(((n_123 != NULL) && (n_123 != t)))
      _fail(t);
    else
      n_123 = t;
    t = q_123(t);
  }
  t = g_39;
  {
    ATerm p_123 = NULL;
    ATerm r_123 (ATerm t)
    {
      t = not_null(p_123);
      if(((o_123 != NULL) && (o_123 != t)))
        _fail(t);
      else
        o_123 = t;
      t = not_null(p_123);
      return(t);
    }
    t = n_107(t);
    if(((p_123 != NULL) && (p_123 != t)))
      _fail(t);
    else
      p_123 = t;
    t = r_123(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_123), not_null(o_123));
  }
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm v_123 = NULL;
  ATerm h_39;
  h_39 = t;
  {
    ATerm i_39 = t;
    int j_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_4 (ATerm t)
        {
          ATerm w_123 = NULL,x_123 = NULL;
          ATerm z_123 (ATerm t)
          {
            t = not_null(x_123);
            if(((v_123 != NULL) && (v_123 != t)))
              _fail(t);
            else
              v_123 = t;
            t = not_null(w_123);
            return(t);
          }
          if(((w_123 != NULL) && (w_123 != t)))
            _fail(t);
          else
            w_123 = t;
          t = not_null(w_123);
          if(match_cons(t, sym_Input_1))
            {
              x_123 = ATgetArgument(t, 0);
              t = z_123(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1_0(s_4, t);
        ;
        LocalPopChoice(j_39);
      }
    else
      {
        t = i_39;
        {
          ATerm y_123 = NULL;
          ATerm a_124 (ATerm t)
          {
            t = not_null(y_123);
            if(((v_123 != NULL) && (v_123 != t)))
              _fail(t);
            else
              v_123 = t;
            t = not_null(y_123);
            return(t);
          }
          t = term_k_39;
          if(((y_123 != NULL) && (y_123 != t)))
            _fail(t);
          else
            y_123 = t;
          t = a_124(t);
        }
      }
  }
  t = h_39;
  {
    ATerm t_4 (ATerm t)
    {
      t = not_null(v_123);
      t = ReadFromFile_0_0(t);
      return(t);
    }
    t = split_2_0(_id, t_4, t);
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm d_124 = NULL;
    if(((d_124 != NULL) && (d_124 != t)))
      _fail(t);
    else
      d_124 = t;
    t = not_null(d_124);
    if(match_string(t, "-k"))
      {
        t = not_null(d_124);
      }
    else
      {
        if(match_string(t, "--keep"))
          {
            t = not_null(d_124);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    ATerm s_39;
    s_39 = t;
    {
      ATerm e_124 = NULL;
      ATerm f_124 = NULL;
      ATerm g_124 (ATerm t)
      {
        t = not_null(f_124);
        if(((e_124 != NULL) && (e_124 != t)))
          _fail(t);
        else
          e_124 = t;
        t = not_null(f_124);
        return(t);
      }
      t = string_to_int_0_0(t);
      if(((f_124 != NULL) && (f_124 != t)))
        _fail(t);
      else
        f_124 = t;
      t = g_124(t);
      t = (ATerm) ATmakeAppl(sym__2, term_t_39, not_null(e_124));
      t = set_config_0_0(t);
    }
    t = s_39;
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_u_39;
    return(t);
  }
  t = ArgOption_3_0(u_4, v_4, w_4, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm i_124 = NULL;
  ATerm k_124 (ATerm t)
  {
    ATerm j_124 = NULL;
    t = not_null(i_124);
    if(((j_124 != NULL) && (j_124 != t)))
      _fail(t);
    else
      j_124 = t;
    t = not_null(i_124);
    t = SSL_string_to_int(not_null(j_124));
    return(t);
  }
  if(((i_124 != NULL) && (i_124 != t)))
    _fail(t);
  else
    i_124 = t;
  t = k_124(t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_39 = t;
  int w_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_4 (ATerm t)
      {
        ATerm q_124 = NULL;
        if(((q_124 != NULL) && (q_124 != t)))
          _fail(t);
        else
          q_124 = t;
        t = not_null(q_124);
        if(match_string(t, "-S"))
          {
            t = not_null(q_124);
          }
        else
          {
            if(match_string(t, "--silent"))
              {
                t = not_null(q_124);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_4 (ATerm t)
      {
        t = term_c_40;
        t = set_config_0_0(t);
        t = term_d_40;
        return(t);
      }
      ATerm z_4 (ATerm t)
      {
        t = term_e_40;
        return(t);
      }
      t = Option_3_0(x_4, y_4, z_4, t);
      ;
      LocalPopChoice(w_39);
    }
  else
    {
      t = v_39;
      {
        ATerm f_40 = t;
        int g_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_5 (ATerm t)
            {
              ATerm r_124 = NULL;
              if(((r_124 != NULL) && (r_124 != t)))
                _fail(t);
              else
                r_124 = t;
              t = not_null(r_124);
              if(match_string(t, "--verbose"))
                {
                  t = not_null(r_124);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm b_5 (ATerm t)
            {
              ATerm u_124 = NULL;
              ATerm h_40;
              h_40 = t;
              {
                ATerm s_124 = NULL;
                ATerm t_124 = NULL;
                ATerm x_124 (ATerm t)
                {
                  t = not_null(t_124);
                  if(((s_124 != NULL) && (s_124 != t)))
                    _fail(t);
                  else
                    s_124 = t;
                  t = not_null(t_124);
                  return(t);
                }
                t = string_to_int_0_0(t);
                if(((t_124 != NULL) && (t_124 != t)))
                  _fail(t);
                else
                  t_124 = t;
                t = x_124(t);
                t = (ATerm) ATmakeAppl(sym__2, term_u_37, not_null(s_124));
                t = set_config_0_0(t);
              }
              t = h_40;
              {
                ATerm v_124 = NULL;
                ATerm y_124 (ATerm t)
                {
                  t = not_null(v_124);
                  if(((u_124 != NULL) && (u_124 != t)))
                    _fail(t);
                  else
                    u_124 = t;
                  t = not_null(v_124);
                  return(t);
                }
                if(((v_124 != NULL) && (v_124 != t)))
                  _fail(t);
                else
                  v_124 = t;
                t = y_124(t);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(u_124));
              }
              return(t);
            }
            ATerm c_5 (ATerm t)
            {
              t = term_i_40;
              return(t);
            }
            t = ArgOption_3_0(a_5, b_5, c_5, t);
            ;
            LocalPopChoice(g_40);
          }
        else
          {
            t = f_40;
            {
              ATerm d_5 (ATerm t)
              {
                ATerm w_124 = NULL;
                if(((w_124 != NULL) && (w_124 != t)))
                  _fail(t);
                else
                  w_124 = t;
                t = not_null(w_124);
                if(match_string(t, "-s"))
                  {
                    t = not_null(w_124);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm e_5 (ATerm t)
              {
                t = term_k_40;
                t = set_config_0_0(t);
                t = term_l_40;
                return(t);
              }
              ATerm f_5 (ATerm t)
              {
                t = term_m_40;
                return(t);
              }
              t = Option_3_0(d_5, e_5, f_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm n_40 = t;
  int o_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(o_40);
    }
  else
    {
      t = n_40;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm d_125 = NULL;
    if(((d_125 != NULL) && (d_125 != t)))
      _fail(t);
    else
      d_125 = t;
    t = not_null(d_125);
    if(match_string(t, "-o"))
      {
        t = not_null(d_125);
      }
    else
      {
        if(match_string(t, "--output"))
          {
            t = not_null(d_125);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    ATerm g_125 = NULL;
    ATerm p_40;
    p_40 = t;
    {
      ATerm e_125 = NULL;
      ATerm f_125 = NULL;
      ATerm i_125 (ATerm t)
      {
        t = not_null(f_125);
        if(((e_125 != NULL) && (e_125 != t)))
          _fail(t);
        else
          e_125 = t;
        t = not_null(f_125);
        return(t);
      }
      if(((f_125 != NULL) && (f_125 != t)))
        _fail(t);
      else
        f_125 = t;
      t = i_125(t);
      t = (ATerm) ATmakeAppl(sym__2, term_q_40, not_null(e_125));
      t = set_config_0_0(t);
    }
    t = p_40;
    {
      ATerm h_125 = NULL;
      ATerm j_125 (ATerm t)
      {
        t = not_null(h_125);
        if(((g_125 != NULL) && (g_125 != t)))
          _fail(t);
        else
          g_125 = t;
        t = not_null(h_125);
        return(t);
      }
      if(((h_125 != NULL) && (h_125 != t)))
        _fail(t);
      else
        h_125 = t;
      t = j_125(t);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_125));
    }
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    t = term_r_40;
    return(t);
  }
  t = ArgOption_3_0(g_5, h_5, i_5, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm s_40 = t;
  int t_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(t_40);
    }
  else
    {
      t = s_40;
      {
        ATerm j_5 (ATerm t)
        {
          ATerm l_125 = NULL;
          if(((l_125 != NULL) && (l_125 != t)))
            _fail(t);
          else
            l_125 = t;
          t = not_null(l_125);
          if(match_string(t, "-b"))
            {
              t = not_null(l_125);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm k_5 (ATerm t)
        {
          t = term_a_42;
          t = set_config_0_0(t);
          t = term_b_42;
          return(t);
        }
        ATerm o_5 (ATerm t)
        {
          t = term_c_42;
          return(t);
        }
        t = Option_3_0(j_5, k_5, o_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm s_125 = NULL,t_125 = NULL,u_125 = NULL,v_125 = NULL,w_125 = NULL;
  ATerm c_126 (ATerm t)
  {
    t = not_null(s_125);
    t = register_usage_1_0(n_0, t);
    return(t);
  }
  ATerm d_126 (ATerm t)
  {
    ATerm x_125 = NULL,y_125 = NULL,z_125 = NULL,a_126 = NULL;
    t = not_null(t_125);
    if(((x_125 != NULL) && (x_125 != t)))
      _fail(t);
    else
      x_125 = t;
    t = not_null(v_125);
    if(((y_125 != NULL) && (y_125 != t)))
      _fail(t);
    else
      y_125 = t;
    t = not_null(w_125);
    if(((z_125 != NULL) && (z_125 != t)))
      _fail(t);
    else
      z_125 = t;
    t = not_null(s_125);
    {
      ATerm j_42;
      j_42 = t;
      t = not_null(x_125);
      t = i_0(t);
      t = j_42;
      {
        ATerm b_126 = NULL;
        ATerm e_126 (ATerm t)
        {
          t = not_null(b_126);
          if(((a_126 != NULL) && (a_126 != t)))
            _fail(t);
          else
            a_126 = t;
          t = not_null(b_126);
          return(t);
        }
        t = not_null(y_125);
        t = k_0(t);
        if(((b_126 != NULL) && (b_126 != t)))
          _fail(t);
        else
          b_126 = t;
        t = e_126(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(z_125)), not_null(a_126));
      }
    }
    return(t);
  }
  if(((s_125 != NULL) && (s_125 != t)))
    _fail(t);
  else
    s_125 = t;
  t = not_null(s_125);
  if(match_string(t, "register-usage-info"))
    {
      t = c_126(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_125 = ATgetFirst((ATermList) t);
          u_125 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(u_125);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_125 = ATgetFirst((ATermList) t);
              w_125 = (ATerm) ATgetNext((ATermList) t);
              t = d_126(t);
            }
          else
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
  ATerm p_5 (ATerm t)
  {
    ATerm i_126 = NULL;
    if(((i_126 != NULL) && (i_126 != t)))
      _fail(t);
    else
      i_126 = t;
    t = not_null(i_126);
    if(match_string(t, "-i"))
      {
        t = not_null(i_126);
      }
    else
      {
        if(match_string(t, "--input"))
          {
            t = not_null(i_126);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    ATerm l_126 = NULL;
    ATerm k_42;
    k_42 = t;
    {
      ATerm j_126 = NULL;
      ATerm k_126 = NULL;
      ATerm n_126 (ATerm t)
      {
        t = not_null(k_126);
        if(((j_126 != NULL) && (j_126 != t)))
          _fail(t);
        else
          j_126 = t;
        t = not_null(k_126);
        return(t);
      }
      if(((k_126 != NULL) && (k_126 != t)))
        _fail(t);
      else
        k_126 = t;
      t = n_126(t);
      t = (ATerm) ATmakeAppl(sym__2, term_l_42, not_null(j_126));
      t = set_config_0_0(t);
    }
    t = k_42;
    {
      ATerm m_126 = NULL;
      ATerm o_126 (ATerm t)
      {
        t = not_null(m_126);
        if(((l_126 != NULL) && (l_126 != t)))
          _fail(t);
        else
          l_126 = t;
        t = not_null(m_126);
        return(t);
      }
      if(((m_126 != NULL) && (m_126 != t)))
        _fail(t);
      else
        m_126 = t;
      t = o_126(t);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_126));
    }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_m_42;
    return(t);
  }
  t = ArgOption_3_0(p_5, q_5, r_5, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm n_42 = t;
  int o_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(o_42);
    }
  else
    {
      t = n_42;
      {
        ATerm p_42 = t;
        int q_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(q_42);
          }
        else
          {
            t = p_42;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_126 = NULL;
  t = report_run_time_0_0(t);
  {
    ATerm r_126 = NULL;
    ATerm u_126 (ATerm t)
    {
      t = not_null(r_126);
      if(((q_126 != NULL) && (q_126 != t)))
        _fail(t);
      else
        q_126 = t;
      t = not_null(r_126);
      return(t);
    }
    t = term_y_26;
    t = whoami_0_0(t);
    if(((r_126 != NULL) && (r_126 != t)))
      _fail(t);
    else
      r_126 = t;
    t = u_126(t);
    t = (ATerm) ATmakeAppl(sym__2, term_n_9, (ATerm) ATinsert(ATinsert(ATempty, term_w_42), not_null(q_126)));
    t = printnl_0_0(t);
    t = term_w_8;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_42;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm w_126 = NULL;
  ATerm y_126 (ATerm t)
  {
    ATerm x_126 = NULL;
    t = not_null(w_126);
    if(((x_126 != NULL) && (x_126 != t)))
      _fail(t);
    else
      x_126 = t;
    t = not_null(w_126);
    t = SSL_TicksToSeconds(not_null(x_126));
    return(t);
  }
  if(((w_126 != NULL) && (w_126 != t)))
    _fail(t);
  else
    w_126 = t;
  t = y_126(t);
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm b_127 = NULL,c_127 = NULL,d_127 = NULL;
  ATerm g_127 (ATerm t)
  {
    ATerm e_127 = NULL,f_127 = NULL;
    t = not_null(c_127);
    if(((e_127 != NULL) && (e_127 != t)))
      _fail(t);
    else
      e_127 = t;
    t = not_null(d_127);
    if(((f_127 != NULL) && (f_127 != t)))
      _fail(t);
    else
      f_127 = t;
    t = not_null(b_127);
    {
      ATerm y_42 = t;
      int z_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(e_127), not_null(f_127));
          ;
          LocalPopChoice(z_42);
        }
      else
        {
          t = y_42;
          t = SSL_addr(not_null(e_127), not_null(f_127));
        }
    }
    return(t);
  }
  if(((b_127 != NULL) && (b_127 != t)))
    _fail(t);
  else
    b_127 = t;
  t = not_null(b_127);
  if(match_cons(t, sym__2))
    {
      c_127 = ATgetArgument(t, 0);
      d_127 = ATgetArgument(t, 1);
      t = g_127(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm t)
{
  ATerm j_43 = t;
  int k_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = p_114(t);
      ;
      LocalPopChoice(k_43);
    }
  else
    {
      t = j_43;
      {
        ATerm k_127 = NULL,l_127 = NULL,m_127 = NULL;
        ATerm r_127 (ATerm t)
        {
          ATerm n_127 = NULL,o_127 = NULL,p_127 = NULL;
          t = not_null(l_127);
          if(((n_127 != NULL) && (n_127 != t)))
            _fail(t);
          else
            n_127 = t;
          t = not_null(m_127);
          if(((o_127 != NULL) && (o_127 != t)))
            _fail(t);
          else
            o_127 = t;
          t = not_null(k_127);
          {
            ATerm q_127 = NULL;
            ATerm s_127 (ATerm t)
            {
              t = not_null(q_127);
              if(((p_127 != NULL) && (p_127 != t)))
                _fail(t);
              else
                p_127 = t;
              t = not_null(q_127);
              return(t);
            }
            t = not_null(o_127);
            t = foldr_2_0(p_114, q_114, t);
            if(((q_127 != NULL) && (q_127 != t)))
              _fail(t);
            else
              q_127 = t;
            t = s_127(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_127), not_null(p_127));
            t = q_114(t);
          }
          return(t);
        }
        if(((k_127 != NULL) && (k_127 != t)))
          _fail(t);
        else
          k_127 = t;
        t = not_null(k_127);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_127 = ATgetFirst((ATermList) t);
            m_127 = (ATerm) ATgetNext((ATermList) t);
            t = r_127(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm t)
{
  ATerm x_127 = NULL;
  ATerm f_128 (ATerm t)
  {
    ATerm y_127 = NULL,z_127 = NULL;
    t = not_null(x_127);
    if(((y_127 != NULL) && (y_127 != t)))
      _fail(t);
    else
      y_127 = t;
    t = not_null(x_127);
    {
      ATerm a_128 = NULL;
      ATerm g_128 (ATerm t)
      {
        ATerm b_128 = NULL,c_128 = NULL,d_128 = NULL,e_128 = NULL;
        ATerm h_128 (ATerm t)
        {
          t = not_null(e_128);
          if(((z_127 != NULL) && (z_127 != t)))
            _fail(t);
          else
            z_127 = t;
          t = not_null(c_128);
          return(t);
        }
        t = not_null(a_128);
        if(((b_128 != NULL) && (b_128 != t)))
          _fail(t);
        else
          b_128 = t;
        t = not_null(a_128);
        t = SSL_explode_term(not_null(b_128));
        if(((c_128 != NULL) && (c_128 != t)))
          _fail(t);
        else
          c_128 = t;
        t = not_null(c_128);
        if(match_cons(t, sym__2))
          {
            d_128 = ATgetArgument(t, 0);
            e_128 = ATgetArgument(t, 1);
            t = h_128(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(y_127);
      if(((a_128 != NULL) && (a_128 != t)))
        _fail(t);
      else
        a_128 = t;
      t = g_128(t);
      t = not_null(z_127);
      t = foldr_2_0(n_112, o_112, t);
    }
    return(t);
  }
  if(((x_127 != NULL) && (x_127 != t)))
    _fail(t);
  else
    x_127 = t;
  t = f_128(t);
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
    ATerm s_5 (ATerm t)
    {
      t = term_d_33;
      return(t);
    }
    t = crush_2_0(s_5, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm k_128 = NULL,l_128 = NULL,m_128 = NULL;
  ATerm p_128 (ATerm t)
  {
    ATerm n_128 = NULL,o_128 = NULL;
    t = not_null(l_128);
    if(((n_128 != NULL) && (n_128 != t)))
      _fail(t);
    else
      n_128 = t;
    t = not_null(m_128);
    if(((o_128 != NULL) && (o_128 != t)))
      _fail(t);
    else
      o_128 = t;
    t = not_null(k_128);
    {
      ATerm l_43;
      l_43 = t;
      {
        ATerm m_43 = t;
        int n_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(not_null(n_128), not_null(o_128));
            ;
            LocalPopChoice(n_43);
          }
        else
          {
            t = m_43;
            t = SSL_gtr(not_null(n_128), not_null(o_128));
          }
      }
      t = l_43;
    }
    return(t);
  }
  if(((k_128 != NULL) && (k_128 != t)))
    _fail(t);
  else
    k_128 = t;
  t = not_null(k_128);
  if(match_cons(t, sym__2))
    {
      l_128 = ATgetArgument(t, 0);
      m_128 = ATgetArgument(t, 1);
      t = p_128(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_128 = NULL;
  ATerm o_43 = t;
  int r_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_128 = NULL,w_128 = NULL,x_128 = NULL;
      ATerm d_129 (ATerm t)
      {
        t = not_null(w_128);
        if(((t_128 != NULL) && (t_128 != t)))
          _fail(t);
        else
          t_128 = t;
        t = not_null(x_128);
        if(((t_128 != NULL) && (t_128 != t)))
          _fail(t);
        else
          t_128 = t;
        t = not_null(u_128);
        return(t);
      }
      if(((u_128 != NULL) && (u_128 != t)))
        _fail(t);
      else
        u_128 = t;
      t = not_null(u_128);
      if(match_cons(t, sym__2))
        {
          w_128 = ATgetArgument(t, 0);
          x_128 = ATgetArgument(t, 1);
          t = d_129(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(r_43);
    }
  else
    {
      t = o_43;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_126 (ATerm), ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    ATerm s_43;
    s_43 = t;
    {
      ATerm f_129 = NULL;
      ATerm k_129 = NULL;
      ATerm l_129 (ATerm t)
      {
        t = not_null(k_129);
        if(((f_129 != NULL) && (f_129 != t)))
          _fail(t);
        else
          f_129 = t;
        t = not_null(k_129);
        return(t);
      }
      t = term_u_37;
      t = get_config_0_0(t);
      if(((k_129 != NULL) && (k_129 != t)))
        _fail(t);
      else
        k_129 = t;
      t = l_129(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_129), term_w_8);
      t = geq_0_0(t);
    }
    t = s_43;
    t = s_126(t);
    return(t);
  }
  t = try_1_0(t_5, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm o_129 = NULL,v_129 = NULL;
    ATerm t_43;
    t_43 = t;
    {
      ATerm q_129 = NULL;
      ATerm x_129 (ATerm t)
      {
        t = not_null(q_129);
        if(((o_129 != NULL) && (o_129 != t)))
          _fail(t);
        else
          o_129 = t;
        t = not_null(q_129);
        return(t);
      }
      t = run_time_0_0(t);
      if(((q_129 != NULL) && (q_129 != t)))
        _fail(t);
      else
        q_129 = t;
      t = x_129(t);
    }
    t = t_43;
    {
      ATerm w_129 = NULL;
      ATerm y_129 (ATerm t)
      {
        t = not_null(w_129);
        if(((v_129 != NULL) && (v_129 != t)))
          _fail(t);
        else
          v_129 = t;
        t = not_null(w_129);
        return(t);
      }
      t = term_y_26;
      t = whoami_0_0(t);
      if(((w_129 != NULL) && (w_129 != t)))
        _fail(t);
      else
        w_129 = t;
      t = y_129(t);
      t = (ATerm) ATmakeAppl(sym__2, term_n_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_43), not_null(o_129)), term_u_43), not_null(v_129)));
      t = printnl_0_0(t);
    }
    return(t);
  }
  t = if_verbose1_1_0(u_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_d_33;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  ATerm d_130 = NULL;
  ATerm j_130 (ATerm t)
  {
    ATerm e_130 = NULL,f_130 = NULL,h_130 = NULL;
    t = not_null(d_130);
    if(((e_130 != NULL) && (e_130 != t)))
      _fail(t);
    else
      e_130 = t;
    t = not_null(d_130);
    {
      ATerm k_44;
      k_44 = t;
      {
        ATerm g_130 = NULL;
        ATerm k_130 (ATerm t)
        {
          t = not_null(g_130);
          if(((f_130 != NULL) && (f_130 != t)))
            _fail(t);
          else
            f_130 = t;
          t = not_null(g_130);
          return(t);
        }
        t = SSLgetAnnotations(not_null(e_130));
        if(((g_130 != NULL) && (g_130 != t)))
          _fail(t);
        else
          g_130 = t;
        t = k_130(t);
      }
      t = k_44;
      {
        ATerm i_130 = NULL;
        ATerm l_130 (ATerm t)
        {
          t = not_null(i_130);
          if(((h_130 != NULL) && (h_130 != t)))
            _fail(t);
          else
            h_130 = t;
          t = not_null(i_130);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(f_130));
        if(((i_130 != NULL) && (i_130 != t)))
          _fail(t);
        else
          i_130 = t;
        t = l_130(t);
        t = not_null(h_130);
      }
    }
    return(t);
  }
  if(((d_130 != NULL) && (d_130 != t)))
    _fail(t);
  else
    d_130 = t;
  t = not_null(d_130);
  if(match_cons(t, sym_Version_0))
    {
      t = j_130(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_129 (ATerm), ATerm t)
{
  ATerm l_44 = t;
  int m_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_44;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_44);
    }
  else
    {
      t = l_44;
      {
        ATerm v_5 (ATerm t)
        {
          ATerm o_44 = t;
          int p_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(p_44);
            }
          else
            {
              t = o_44;
              {
                ATerm t_44 = t;
                int u_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(u_44);
                  }
                else
                  {
                    t = t_44;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(v_5, t);
      }
    }
  t = p_129(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm n_130 = NULL;
  ATerm q_130 (ATerm t)
  {
    ATerm o_130 = NULL;
    t = not_null(n_130);
    if(((o_130 != NULL) && (o_130 != t)))
      _fail(t);
    else
      o_130 = t;
    t = not_null(n_130);
    t = SSL_table_create(not_null(o_130));
    return(t);
  }
  if(((n_130 != NULL) && (n_130 != t)))
    _fail(t);
  else
    n_130 = t;
  t = q_130(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm s_130 = NULL;
  ATerm u_130 (ATerm t)
  {
    ATerm t_130 = NULL;
    t = not_null(s_130);
    if(((t_130 != NULL) && (t_130 != t)))
      _fail(t);
    else
      t_130 = t;
    t = not_null(s_130);
    {
      ATerm v_44;
      v_44 = t;
      t = term_w_44;
      t = table_create_0_0(t);
      t = (ATerm) ATmakeAppl(sym__3, term_w_44, term_x_44, not_null(t_130));
      t = table_put_0_0(t);
      t = v_44;
    }
    return(t);
  }
  if(((s_130 != NULL) && (s_130 != t)))
    _fail(t);
  else
    s_130 = t;
  t = u_130(t);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm w_130 = NULL;
  ATerm y_130 (ATerm t)
  {
    ATerm x_130 = NULL;
    t = not_null(w_130);
    if(((x_130 != NULL) && (x_130 != t)))
      _fail(t);
    else
      x_130 = t;
    t = not_null(w_130);
    t = SSL_table_destroy(not_null(x_130));
    return(t);
  }
  if(((w_130 != NULL) && (w_130 != t)))
    _fail(t);
  else
    w_130 = t;
  t = y_130(t);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm a_131 = NULL;
  ATerm c_131 (ATerm t)
  {
    ATerm b_131 = NULL;
    t = not_null(a_131);
    if(((b_131 != NULL) && (b_131 != t)))
      _fail(t);
    else
      b_131 = t;
    t = not_null(a_131);
    t = SSL_exit(not_null(b_131));
    return(t);
  }
  if(((a_131 != NULL) && (a_131 != t)))
    _fail(t);
  else
    a_131 = t;
  t = c_131(t);
  return(t);
}
ATerm long_description_1_0 (ATerm q_131 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm b_110 (ATerm), ATerm t)
{
  ATerm d_131 (ATerm t)
  {
    ATerm y_44 = t;
    int z_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(z_44);
      }
    else
      {
        t = y_44;
        t = Cons_2_0(b_110, d_131, t);
      }
    return(t);
  }
  t = d_131(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm k_131 = NULL,l_131 = NULL,m_131 = NULL;
  ATerm b_132 (ATerm t)
  {
    ATerm n_131 = NULL,o_131 = NULL,v_131 = NULL;
    t = not_null(k_131);
    if(((n_131 != NULL) && (n_131 != t)))
      _fail(t);
    else
      n_131 = t;
    t = not_null(l_131);
    if(((o_131 != NULL) && (o_131 != t)))
      _fail(t);
    else
      o_131 = t;
    t = not_null(o_131);
    {
      ATerm a_45;
      a_45 = t;
      {
        ATerm w_131 = NULL,y_131 = NULL,a_132 = NULL;
        ATerm f_132 (ATerm t)
        {
          t = not_null(a_132);
          if(((v_131 != NULL) && (v_131 != t)))
            _fail(t);
          else
            v_131 = t;
          t = not_null(a_132);
          return(t);
        }
        ATerm b_45;
        b_45 = t;
        {
          ATerm x_131 = NULL;
          ATerm d_132 (ATerm t)
          {
            t = not_null(x_131);
            if(((w_131 != NULL) && (w_131 != t)))
              _fail(t);
            else
              w_131 = t;
            t = not_null(x_131);
            return(t);
          }
          t = g_0(t);
          if(((x_131 != NULL) && (x_131 != t)))
            _fail(t);
          else
            x_131 = t;
          t = d_132(t);
        }
        t = b_45;
        {
          ATerm z_131 = NULL;
          ATerm e_132 (ATerm t)
          {
            t = not_null(z_131);
            if(((y_131 != NULL) && (y_131 != t)))
              _fail(t);
            else
              y_131 = t;
            t = not_null(z_131);
            return(t);
          }
          t = not_null(n_131);
          t = e_0(t);
          if(((z_131 != NULL) && (z_131 != t)))
            _fail(t);
          else
            z_131 = t;
          t = e_132(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(w_131)), not_null(y_131));
          if(((a_132 != NULL) && (a_132 != t)))
            _fail(t);
          else
            a_132 = t;
          t = f_132(t);
        }
      }
      t = a_45;
      {
        ATerm w_5 (ATerm t)
        {
          t = not_null(v_131);
          return(t);
        }
        t = reverse_acc_2_0(e_0, w_5, t);
      }
    }
    return(t);
  }
  ATerm c_132 (ATerm t)
  {
    t = term_y_26;
    t = g_0(t);
    return(t);
  }
  if(((m_131 != NULL) && (m_131 != t)))
    _fail(t);
  else
    m_131 = t;
  t = not_null(m_131);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_131 = ATgetFirst((ATermList) t);
      l_131 = (ATerm) ATgetNext((ATermList) t);
      t = b_132(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = c_132(t);
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
  ATerm x_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, x_5, t);
  return(t);
}
ATerm short_description_1_0 (ATerm p_131 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm h_101 (ATerm), ATerm t)
{
  ATerm o_132 = NULL,p_132 = NULL;
  ATerm d_133 (ATerm t)
  {
    ATerm q_132 = NULL,r_132 = NULL,s_132 = NULL,u_132 = NULL;
    ATerm f_133 (ATerm t)
    {
      ATerm v_132 = NULL,w_132 = NULL;
      t = not_null(u_132);
      if(((v_132 != NULL) && (v_132 != t)))
        _fail(t);
      else
        v_132 = t;
      t = not_null(u_132);
      {
        ATerm x_132 = NULL;
        ATerm g_133 (ATerm t)
        {
          t = not_null(x_132);
          if(((w_132 != NULL) && (w_132 != t)))
            _fail(t);
          else
            w_132 = t;
          t = not_null(x_132);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_132)), not_null(s_132));
        if(((x_132 != NULL) && (x_132 != t)))
          _fail(t);
        else
          x_132 = t;
        t = g_133(t);
        t = not_null(w_132);
      }
      return(t);
    }
    t = not_null(o_132);
    if(((q_132 != NULL) && (q_132 != t)))
      _fail(t);
    else
      q_132 = t;
    t = not_null(p_132);
    if(((r_132 != NULL) && (r_132 != t)))
      _fail(t);
    else
      r_132 = t;
    t = not_null(o_132);
    {
      ATerm t_132 = NULL;
      ATerm e_133 (ATerm t)
      {
        t = not_null(t_132);
        if(((s_132 != NULL) && (s_132 != t)))
          _fail(t);
        else
          s_132 = t;
        t = not_null(t_132);
        return(t);
      }
      t = SSLgetAnnotations(not_null(q_132));
      if(((t_132 != NULL) && (t_132 != t)))
        _fail(t);
      else
        t_132 = t;
      t = e_133(t);
      t = not_null(r_132);
      t = h_101(t);
      if(((u_132 != NULL) && (u_132 != t)))
        _fail(t);
      else
        u_132 = t;
      t = f_133(t);
    }
    return(t);
  }
  if(((o_132 != NULL) && (o_132 != t)))
    _fail(t);
  else
    o_132 = t;
  t = not_null(o_132);
  if(match_cons(t, sym_Program_1))
    {
      p_132 = ATgetArgument(t, 0);
      t = d_133(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_133 = NULL;
  ATerm c_45 = t;
  int d_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_133 = NULL;
      ATerm s_133 (ATerm t)
      {
        t = not_null(m_133);
        if(((l_133 != NULL) && (l_133 != t)))
          _fail(t);
        else
          l_133 = t;
        t = not_null(m_133);
        return(t);
      }
      t = term_x_42;
      t = get_config_0_0(t);
      if(((m_133 != NULL) && (m_133 != t)))
        _fail(t);
      else
        m_133 = t;
      t = s_133(t);
      ;
      LocalPopChoice(d_45);
    }
  else
    {
      t = c_45;
      {
        ATerm y_5 (ATerm t)
        {
          ATerm z_5 (ATerm t)
          {
            ATerm n_133 = NULL;
            ATerm t_133 (ATerm t)
            {
              t = not_null(n_133);
              if(((l_133 != NULL) && (l_133 != t)))
                _fail(t);
              else
                l_133 = t;
              t = not_null(n_133);
              return(t);
            }
            if(((n_133 != NULL) && (n_133 != t)))
              _fail(t);
            else
              n_133 = t;
            t = t_133(t);
            return(t);
          }
          t = Program_1_0(z_5, t);
          return(t);
        }
        t = option_defined_1_0(y_5, t);
      }
    }
  {
    ATerm a_6 (ATerm t)
    {
      ATerm b_6 (ATerm t)
      {
        t = not_null(l_133);
        return(t);
      }
      t = short_description_1_0(b_6, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(a_6, t);
    t = term_e_45;
    t = echo_0_0(t);
    t = term_h_45;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm c_6 (ATerm t)
      {
        ATerm o_133 = NULL;
        ATerm p_133 = NULL;
        ATerm u_133 (ATerm t)
        {
          t = not_null(p_133);
          if(((o_133 != NULL) && (o_133 != t)))
            _fail(t);
          else
            o_133 = t;
          t = not_null(p_133);
          return(t);
        }
        if(((p_133 != NULL) && (p_133 != t)))
          _fail(t);
        else
          p_133 = t;
        t = u_133(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_133)), term_i_45);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(c_6, t);
      {
        ATerm d_6 (ATerm t)
        {
          ATerm q_133 = NULL;
          ATerm r_133 = NULL;
          ATerm v_133 (ATerm t)
          {
            t = not_null(r_133);
            if(((q_133 != NULL) && (q_133 != t)))
              _fail(t);
            else
              q_133 = t;
            t = not_null(r_133);
            return(t);
          }
          ATerm e_6 (ATerm t)
          {
            t = not_null(l_133);
            return(t);
          }
          t = long_description_1_0(e_6, t);
          if(((r_133 != NULL) && (r_133 != t)))
            _fail(t);
          else
            r_133 = t;
          t = v_133(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(q_133)), term_c_46);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(d_6, t);
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
  ATerm d_46 = t;
  int e_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(e_46);
    }
  else
    {
      t = d_46;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm i_101 (ATerm), ATerm t)
{
  ATerm b_134 = NULL,c_134 = NULL;
  ATerm l_134 (ATerm t)
  {
    ATerm d_134 = NULL,e_134 = NULL,f_134 = NULL,h_134 = NULL;
    ATerm n_134 (ATerm t)
    {
      ATerm i_134 = NULL,j_134 = NULL;
      t = not_null(h_134);
      if(((i_134 != NULL) && (i_134 != t)))
        _fail(t);
      else
        i_134 = t;
      t = not_null(h_134);
      {
        ATerm k_134 = NULL;
        ATerm o_134 (ATerm t)
        {
          t = not_null(k_134);
          if(((j_134 != NULL) && (j_134 != t)))
            _fail(t);
          else
            j_134 = t;
          t = not_null(k_134);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(i_134)), not_null(f_134));
        if(((k_134 != NULL) && (k_134 != t)))
          _fail(t);
        else
          k_134 = t;
        t = o_134(t);
        t = not_null(j_134);
      }
      return(t);
    }
    t = not_null(b_134);
    if(((d_134 != NULL) && (d_134 != t)))
      _fail(t);
    else
      d_134 = t;
    t = not_null(c_134);
    if(((e_134 != NULL) && (e_134 != t)))
      _fail(t);
    else
      e_134 = t;
    t = not_null(b_134);
    {
      ATerm g_134 = NULL;
      ATerm m_134 (ATerm t)
      {
        t = not_null(g_134);
        if(((f_134 != NULL) && (f_134 != t)))
          _fail(t);
        else
          f_134 = t;
        t = not_null(g_134);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_134));
      if(((g_134 != NULL) && (g_134 != t)))
        _fail(t);
      else
        g_134 = t;
      t = m_134(t);
      t = not_null(e_134);
      t = i_101(t);
      if(((h_134 != NULL) && (h_134 != t)))
        _fail(t);
      else
        h_134 = t;
      t = n_134(t);
    }
    return(t);
  }
  if(((b_134 != NULL) && (b_134 != t)))
    _fail(t);
  else
    b_134 = t;
  t = not_null(b_134);
  if(match_cons(t, sym_Undefined_1))
    {
      c_134 = ATgetArgument(t, 0);
      t = l_134(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm l_110 (ATerm), ATerm t)
{
  ATerm p_134 (ATerm t)
  {
    ATerm f_46 = t;
    int i_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(l_110, _id, t);
        ;
        LocalPopChoice(i_46);
      }
    else
      {
        t = f_46;
        t = Cons_2_0(_id, p_134, t);
      }
    return(t);
  }
  t = p_134(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm p_130 (ATerm), ATerm t)
{
  t = fetch_1_0(p_130, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm r_134 = NULL,s_134 = NULL,t_134 = NULL;
  if(((r_134 != NULL) && (r_134 != t)))
    _fail(t);
  else
    r_134 = t;
  t = not_null(r_134);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(r_134);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_134 = ATgetFirst((ATermList) t);
          t_134 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(r_134);
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
  ATerm j_46;
  j_46 = t;
  {
    ATerm w_134 = NULL;
    ATerm z_134 = NULL;
    ATerm b_135 (ATerm t)
    {
      t = not_null(z_134);
      if(((w_134 != NULL) && (w_134 != t)))
        _fail(t);
      else
        w_134 = t;
      t = not_null(z_134);
      return(t);
    }
    ATerm k_46 = t;
    int l_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(l_46);
      }
    else
      {
        t = k_46;
        {
          ATerm x_134 = NULL;
          ATerm y_134 = NULL;
          ATerm a_135 (ATerm t)
          {
            t = not_null(y_134);
            if(((x_134 != NULL) && (x_134 != t)))
              _fail(t);
            else
              x_134 = t;
            t = not_null(y_134);
            return(t);
          }
          if(((y_134 != NULL) && (y_134 != t)))
            _fail(t);
          else
            y_134 = t;
          t = a_135(t);
          t = (ATerm) ATinsert(ATempty, not_null(x_134));
        }
      }
    if(((z_134 != NULL) && (z_134 != t)))
      _fail(t);
    else
      z_134 = t;
    t = b_135(t);
    t = (ATerm) ATmakeAppl(sym__2, term_f_38, not_null(w_134));
    t = printnl_0_0(t);
  }
  t = j_46;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_42;
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
  ATerm p_46 = t;
  int q_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(q_46);
    }
  else
    {
      t = p_46;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  ATerm g_135 = NULL;
  ATerm m_135 (ATerm t)
  {
    ATerm h_135 = NULL,i_135 = NULL,k_135 = NULL;
    t = not_null(g_135);
    if(((h_135 != NULL) && (h_135 != t)))
      _fail(t);
    else
      h_135 = t;
    t = not_null(g_135);
    {
      ATerm r_46;
      r_46 = t;
      {
        ATerm j_135 = NULL;
        ATerm n_135 (ATerm t)
        {
          t = not_null(j_135);
          if(((i_135 != NULL) && (i_135 != t)))
            _fail(t);
          else
            i_135 = t;
          t = not_null(j_135);
          return(t);
        }
        t = SSLgetAnnotations(not_null(h_135));
        if(((j_135 != NULL) && (j_135 != t)))
          _fail(t);
        else
          j_135 = t;
        t = n_135(t);
      }
      t = r_46;
      {
        ATerm l_135 = NULL;
        ATerm o_135 (ATerm t)
        {
          t = not_null(l_135);
          if(((k_135 != NULL) && (k_135 != t)))
            _fail(t);
          else
            k_135 = t;
          t = not_null(l_135);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(i_135));
        if(((l_135 != NULL) && (l_135 != t)))
          _fail(t);
        else
          l_135 = t;
        t = o_135(t);
        t = not_null(k_135);
      }
    }
    return(t);
  }
  if(((g_135 != NULL) && (g_135 != t)))
    _fail(t);
  else
    g_135 = t;
  t = not_null(g_135);
  if(match_cons(t, sym_Help_0))
    {
      t = m_135(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1_0 (ATerm s_106 (ATerm), ATerm t)
{
  ATerm s_46 = t;
  int t_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_106(t);
      ;
      LocalPopChoice(t_46);
    }
  else
    {
      t = s_46;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_46 = t;
  int w_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_6 (ATerm t)
      {
        ATerm r_135 = NULL;
        if(((r_135 != NULL) && (r_135 != t)))
          _fail(t);
        else
          r_135 = t;
        t = not_null(r_135);
        if(match_string(t, "--about"))
          {
            t = not_null(r_135);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm g_6 (ATerm t)
      {
        t = term_y_46;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm h_6 (ATerm t)
      {
        t = term_z_46;
        return(t);
      }
      t = Option_3_0(f_6, g_6, h_6, t);
      ;
      LocalPopChoice(w_46);
    }
  else
    {
      t = u_46;
      {
        ATerm i_6 (ATerm t)
        {
          ATerm s_135 = NULL;
          if(((s_135 != NULL) && (s_135 != t)))
            _fail(t);
          else
            s_135 = t;
          t = not_null(s_135);
          if(match_string(t, "--version"))
            {
              t = not_null(s_135);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm j_6 (ATerm t)
        {
          t = term_y_46;
          t = set_config_0_0(t);
          t = term_b_47;
          t = set_config_0_0(t);
          t = term_c_47;
          return(t);
        }
        ATerm k_6 (ATerm t)
        {
          t = term_v_47;
          return(t);
        }
        t = Option_3_0(i_6, j_6, k_6, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm v_135 = NULL,w_135 = NULL,x_135 = NULL;
  ATerm a_136 (ATerm t)
  {
    ATerm y_135 = NULL,z_135 = NULL;
    t = not_null(w_135);
    if(((y_135 != NULL) && (y_135 != t)))
      _fail(t);
    else
      y_135 = t;
    t = not_null(x_135);
    if(((z_135 != NULL) && (z_135 != t)))
      _fail(t);
    else
      z_135 = t;
    t = not_null(v_135);
    t = SSL_table_get(not_null(y_135), not_null(z_135));
    return(t);
  }
  if(((v_135 != NULL) && (v_135 != t)))
    _fail(t);
  else
    v_135 = t;
  t = not_null(v_135);
  if(match_cons(t, sym__2))
    {
      w_135 = ATgetArgument(t, 0);
      x_135 = ATgetArgument(t, 1);
      t = a_136(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm e_136 = NULL,f_136 = NULL,g_136 = NULL,h_136 = NULL;
  ATerm n_136 (ATerm t)
  {
    ATerm i_136 = NULL,j_136 = NULL,k_136 = NULL;
    t = not_null(f_136);
    if(((j_136 != NULL) && (j_136 != t)))
      _fail(t);
    else
      j_136 = t;
    t = not_null(g_136);
    if(((k_136 != NULL) && (k_136 != t)))
      _fail(t);
    else
      k_136 = t;
    t = not_null(h_136);
    if(((i_136 != NULL) && (i_136 != t)))
      _fail(t);
    else
      i_136 = t;
    t = not_null(e_136);
    {
      ATerm w_47;
      w_47 = t;
      {
        ATerm l_136 = NULL;
        ATerm m_136 = NULL;
        ATerm o_136 (ATerm t)
        {
          t = not_null(m_136);
          if(((l_136 != NULL) && (l_136 != t)))
            _fail(t);
          else
            l_136 = t;
          t = not_null(m_136);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_136), not_null(k_136));
        {
          ATerm x_47 = t;
          int y_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(y_47);
            }
          else
            {
              t = x_47;
              t = (ATerm) ATempty;
            }
          if(((m_136 != NULL) && (m_136 != t)))
            _fail(t);
          else
            m_136 = t;
          t = o_136(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(j_136), not_null(k_136), (ATerm) ATinsert(CheckATermList(not_null(l_136)), not_null(i_136)));
        t = table_put_0_0(t);
      }
      t = w_47;
    }
    return(t);
  }
  if(((e_136 != NULL) && (e_136 != t)))
    _fail(t);
  else
    e_136 = t;
  t = not_null(e_136);
  if(match_cons(t, sym__3))
    {
      f_136 = ATgetArgument(t, 0);
      g_136 = ATgetArgument(t, 1);
      h_136 = ATgetArgument(t, 2);
      t = n_136(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm u_131 (ATerm), ATerm t)
{
  ATerm q_136 = NULL;
  ATerm r_136 = NULL;
  ATerm s_136 (ATerm t)
  {
    t = not_null(r_136);
    if(((q_136 != NULL) && (q_136 != t)))
      _fail(t);
    else
      q_136 = t;
    t = not_null(r_136);
    return(t);
  }
  t = term_y_26;
  t = u_131(t);
  if(((r_136 != NULL) && (r_136 != t)))
    _fail(t);
  else
    r_136 = t;
  t = s_136(t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_45, term_g_45, not_null(q_136));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_136 = NULL,y_136 = NULL,z_136 = NULL;
  ATerm e_137 (ATerm t)
  {
    t = not_null(x_136);
    t = register_usage_1_0(d_0, t);
    return(t);
  }
  ATerm f_137 (ATerm t)
  {
    ATerm a_137 = NULL,b_137 = NULL,c_137 = NULL;
    t = not_null(y_136);
    if(((a_137 != NULL) && (a_137 != t)))
      _fail(t);
    else
      a_137 = t;
    t = not_null(z_136);
    if(((b_137 != NULL) && (b_137 != t)))
      _fail(t);
    else
      b_137 = t;
    t = not_null(x_136);
    {
      ATerm z_47;
      z_47 = t;
      t = not_null(a_137);
      t = a_0(t);
      t = z_47;
      {
        ATerm d_137 = NULL;
        ATerm g_137 (ATerm t)
        {
          t = not_null(d_137);
          if(((c_137 != NULL) && (c_137 != t)))
            _fail(t);
          else
            c_137 = t;
          t = not_null(d_137);
          return(t);
        }
        t = term_y_26;
        t = c_0(t);
        if(((d_137 != NULL) && (d_137 != t)))
          _fail(t);
        else
          d_137 = t;
        t = g_137(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(b_137)), not_null(c_137));
      }
    }
    return(t);
  }
  if(((x_136 != NULL) && (x_136 != t)))
    _fail(t);
  else
    x_136 = t;
  t = not_null(x_136);
  if(match_string(t, "register-usage-info"))
    {
      t = e_137(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_136 = ATgetFirst((ATermList) t);
          z_136 = (ATerm) ATgetNext((ATermList) t);
          t = f_137(t);
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
  ATerm l_6 (ATerm t)
  {
    ATerm i_137 = NULL;
    if(((i_137 != NULL) && (i_137 != t)))
      _fail(t);
    else
      i_137 = t;
    t = not_null(i_137);
    if(match_string(t, "--help"))
      {
        t = not_null(i_137);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(i_137);
          }
        else
          {
            if(match_string(t, "-?"))
              {
                t = not_null(i_137);
              }
            else
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm m_6 (ATerm t)
  {
    t = term_a_48;
    t = set_config_0_0(t);
    t = term_i_48;
    return(t);
  }
  ATerm n_6 (ATerm t)
  {
    t = term_n_48;
    return(t);
  }
  t = Option_3_0(l_6, m_6, n_6, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm l_137 = NULL,m_137 = NULL,n_137 = NULL;
  ATerm q_137 (ATerm t)
  {
    ATerm o_137 = NULL,p_137 = NULL;
    t = not_null(m_137);
    if(((o_137 != NULL) && (o_137 != t)))
      _fail(t);
    else
      o_137 = t;
    t = not_null(n_137);
    if(((p_137 != NULL) && (p_137 != t)))
      _fail(t);
    else
      p_137 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(p_137)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_137)));
    return(t);
  }
  if(((l_137 != NULL) && (l_137 != t)))
    _fail(t);
  else
    l_137 = t;
  t = not_null(l_137);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_137 = ATgetFirst((ATermList) t);
      n_137 = (ATerm) ATgetNext((ATermList) t);
      t = q_137(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm t_137 = NULL,u_137 = NULL,v_137 = NULL;
  ATerm y_137 (ATerm t)
  {
    ATerm w_137 = NULL,x_137 = NULL;
    t = not_null(u_137);
    if(((w_137 != NULL) && (w_137 != t)))
      _fail(t);
    else
      w_137 = t;
    t = not_null(v_137);
    if(((x_137 != NULL) && (x_137 != t)))
      _fail(t);
    else
      x_137 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_q_37, not_null(w_137), not_null(x_137));
    t = table_put_0_0(t);
    return(t);
  }
  if(((t_137 != NULL) && (t_137 != t)))
    _fail(t);
  else
    t_137 = t;
  t = not_null(t_137);
  if(match_cons(t, sym__2))
    {
      u_137 = ATgetArgument(t, 0);
      v_137 = ATgetArgument(t, 1);
      t = y_137(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_131 (ATerm), ATerm t)
{
  ATerm o_48;
  o_48 = t;
  {
    ATerm o_6 (ATerm t)
    {
      t = term_t_48;
      t = s_131(t);
      return(t);
    }
    t = try_1_0(o_6, t);
  }
  t = o_48;
  {
    ATerm s_6 (ATerm t)
    {
      ATerm d_138 = NULL;
      ATerm u_48;
      u_48 = t;
      {
        ATerm b_138 = NULL;
        ATerm c_138 = NULL;
        ATerm f_138 (ATerm t)
        {
          t = not_null(c_138);
          if(((b_138 != NULL) && (b_138 != t)))
            _fail(t);
          else
            b_138 = t;
          t = not_null(c_138);
          return(t);
        }
        if(((c_138 != NULL) && (c_138 != t)))
          _fail(t);
        else
          c_138 = t;
        t = f_138(t);
        t = (ATerm) ATmakeAppl(sym__2, term_x_42, not_null(b_138));
        t = set_config_0_0(t);
      }
      t = u_48;
      {
        ATerm e_138 = NULL;
        ATerm g_138 (ATerm t)
        {
          t = not_null(e_138);
          if(((d_138 != NULL) && (d_138 != t)))
            _fail(t);
          else
            d_138 = t;
          t = not_null(e_138);
          return(t);
        }
        if(((e_138 != NULL) && (e_138 != t)))
          _fail(t);
        else
          e_138 = t;
        t = g_138(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(d_138));
      }
      return(t);
    }
    ATerm t_6 (ATerm t)
    {
      ATerm z_48 = t;
      int a_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_49 = t;
          int c_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(c_49);
            }
          else
            {
              t = b_49;
              t = s_131(t);
              t = Cons_2_0(_id, t_6, t);
            }
          ;
          LocalPopChoice(a_49);
        }
      else
        {
          t = z_48;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(s_6, t_6, t);
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm k_138 = NULL,l_138 = NULL,m_138 = NULL;
  ATerm d_49;
  d_49 = t;
  {
    ATerm n_138 = NULL,o_138 = NULL,p_138 = NULL,q_138 = NULL;
    ATerm r_138 (ATerm t)
    {
      t = not_null(o_138);
      if(((k_138 != NULL) && (k_138 != t)))
        _fail(t);
      else
        k_138 = t;
      t = not_null(p_138);
      if(((l_138 != NULL) && (l_138 != t)))
        _fail(t);
      else
        l_138 = t;
      t = not_null(q_138);
      if(((m_138 != NULL) && (m_138 != t)))
        _fail(t);
      else
        m_138 = t;
      t = not_null(n_138);
      t = SSL_table_put(not_null(k_138), not_null(l_138), not_null(m_138));
      return(t);
    }
    if(((n_138 != NULL) && (n_138 != t)))
      _fail(t);
    else
      n_138 = t;
    t = not_null(n_138);
    if(match_cons(t, sym__3))
      {
        o_138 = ATgetArgument(t, 0);
        p_138 = ATgetArgument(t, 1);
        q_138 = ATgetArgument(t, 2);
        t = r_138(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = d_49;
  return(t);
}
ATerm parse_options_1_0 (ATerm r_131 (ATerm), ATerm t)
{
  ATerm t_138 = NULL;
  ATerm e_49;
  e_49 = t;
  t = term_f_49;
  t = table_put_0_0(t);
  t = e_49;
  {
    ATerm u_6 (ATerm t)
    {
      ATerm g_49 = t;
      int h_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_131(t);
          ;
          LocalPopChoice(h_49);
        }
      else
        {
          t = g_49;
          {
            ATerm i_49 = t;
            int j_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(j_49);
              }
            else
              {
                t = i_49;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_6, t);
    {
      ATerm v_6 (ATerm t)
      {
        ATerm n_49 = t;
        int o_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_49;
            t_49 = t;
            {
              ATerm z_49 = t;
              int a_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_n_44;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(a_50);
                }
              else
                {
                  t = z_49;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = t_49;
            t = system_usage_0_0(t);
            t = term_d_33;
            t = exit_0_0(t);
            ;
            LocalPopChoice(o_49);
          }
        else
          {
            t = n_49;
            {
              ATerm b_50 = t;
              int c_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_50;
                  d_50 = t;
                  t = term_x_46;
                  t = get_config_0_0(t);
                  t = d_50;
                  t = system_about_0_0(t);
                  t = term_d_33;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(c_50);
                }
              else
                {
                  t = b_50;
                  {
                    ATerm w_6 (ATerm t)
                    {
                      ATerm x_6 (ATerm t)
                      {
                        ATerm u_138 = NULL;
                        ATerm v_138 (ATerm t)
                        {
                          t = not_null(u_138);
                          if(((t_138 != NULL) && (t_138 != t)))
                            _fail(t);
                          else
                            t_138 = t;
                          t = not_null(u_138);
                          return(t);
                        }
                        if(((u_138 != NULL) && (u_138 != t)))
                          _fail(t);
                        else
                          u_138 = t;
                        t = v_138(t);
                        return(t);
                      }
                      t = Undefined_1_0(x_6, t);
                      return(t);
                    }
                    t = option_defined_1_0(w_6, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_n_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_138)), term_h_50));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_w_8;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(v_6, t);
      {
        ATerm i_50;
        i_50 = t;
        t = term_f_45;
        t = table_destroy_0_0(t);
        t = i_50;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm u_129 (ATerm), ATerm t)
{
  t = parse_options_1_0(r_129, t);
  t = store_options_0_0(t);
  t = t_129(t);
  {
    ATerm j_50 = t;
    int k_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_129, t);
        ;
        LocalPopChoice(k_50);
      }
    else
      {
        t = j_50;
        {
          ATerm r_50 = t;
          int s_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_129(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_50);
            }
          else
            {
              t = r_50;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm t)
{
  ATerm y_6 (ATerm t)
  {
    ATerm w_50 = t;
    int x_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_129(t);
        ;
        LocalPopChoice(x_50);
      }
    else
      {
        t = w_50;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(g_129, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(y_6, i_129, j_129, z_6, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm a_129 (ATerm), ATerm b_129 (ATerm), ATerm c_129 (ATerm), ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    ATerm b_7 (ATerm t)
    {
      ATerm c_51;
      c_51 = t;
      {
        ATerm x_138 = NULL;
        ATerm y_138 = NULL;
        ATerm z_138 (ATerm t)
        {
          t = not_null(y_138);
          if(((x_138 != NULL) && (x_138 != t)))
            _fail(t);
          else
            x_138 = t;
          t = not_null(y_138);
          return(t);
        }
        t = term_x_42;
        t = get_config_0_0(t);
        if(((y_138 != NULL) && (y_138 != t)))
          _fail(t);
        else
          y_138 = t;
        t = z_138(t);
        t = (ATerm) ATmakeAppl(sym__2, term_n_9, (ATerm) ATinsert(ATempty, not_null(x_138)));
        t = printnl_0_0(t);
      }
      t = c_51;
      return(t);
    }
    t = if_verbose2_1_0(b_7, t);
    return(t);
  }
  t = iowrap_4_0(a_129, b_129, c_129, a_7, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm y_128 (ATerm), ATerm z_128 (ATerm), ATerm t)
{
  t = iowrap_3_0(y_128, z_128, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm v_128 (ATerm), ATerm t)
{
  ATerm c_7 (ATerm t)
  {
    t = _2_0(_id, v_128, t);
    return(t);
  }
  t = iowrap_2_0(c_7, _fail, t);
  return(t);
}
ATerm extract_0_0 (ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    ATerm e_7 (ATerm t)
    {
      ATerm g_7 (ATerm t)
      {
        ATerm h_7 (ATerm t)
        {
          t = Strategies_1_0(needed_defs_0_0, t);
          return(t);
        }
        t = Cons_2_0(h_7, Nil_0_0, t);
        return(t);
      }
      t = Cons_2_0(_id, g_7, t);
      return(t);
    }
    t = Specification_1_0(e_7, t);
    t = needed_constructors_0_0(t);
    return(t);
  }
  t = iowrap_1_0(d_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = extract_0_0(t);
  return(t);
}
