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
ATerm term_o_48;
ATerm term_b_48;
ATerm term_t_47;
ATerm term_n_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_u_46;
ATerm term_t_46;
ATerm term_s_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_j_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_x_43;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_u_38;
ATerm term_m_38;
ATerm term_i_38;
ATerm term_i_37;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_j_36;
ATerm term_g_36;
ATerm term_e_36;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_v_32;
ATerm term_t_32;
ATerm term_q_32;
ATerm term_k_32;
ATerm term_k_30;
ATerm term_d_30;
ATerm term_q_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_s_19;
ATerm term_t_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_a_15;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_k_11;
ATerm term_r_8;
ATerm term_k_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_l_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
void init_constant_terms (void)
{
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Op_2, term_o_18, (ATerm) ATempty);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_ConstType_1, term_p_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym__2, term_q_32, term_q_32);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym__2, term_q_34, term_r_34);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(sym__2, term_j_36, term_q_32);
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_32);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(sym__2, term_s_39, term_n_25);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(sym__2, term_c_41, term_n_25);
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(sym__2, term_z_44, term_a_45);
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(sym__2, term_e_46, term_n_25);
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(sym__2, term_h_46, term_n_25);
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(sym__2, term_x_43, term_n_25);
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym__3, term_z_44, term_a_45, (ATerm) ATempty);
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0_0 (ATerm);
ATerm MissingDef_0_0 (ATerm);
ATerm MissingDefMod_0_0 (ATerm);
ATerm MissingDefs_0_0 (ATerm);
ATerm NoMissingDefs_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm error_0_0 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm Rec_2_0 (ATerm i_93 (ATerm), ATerm j_93 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm d_95 (ATerm), ATerm e_95 (ATerm), ATerm f_95 (ATerm), ATerm g_95 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm a_95 (ATerm), ATerm b_95 (ATerm), ATerm c_95 (ATerm), ATerm);
ATerm Let_2_0 (ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm Bind3_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm crush_3_0 (ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm);
ATerm free_vars2_4_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm c_118 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_118 (ATerm), ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm Snd_0_0 (ATerm);
ATerm choices_0_0 (ATerm);
ATerm IsVar_0_0 (ATerm);
ATerm tsubs_0_0 (ATerm);
ATerm IsSVar_0_0 (ATerm);
ATerm Look2_0_0 (ATerm);
ATerm Look1_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm SubsVar_2_0 (ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm);
ATerm alltd_1_0 (ATerm h_105 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm);
ATerm substitute_1_0 (ATerm a_103 (ATerm), ATerm);
ATerm ssubs_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm w_94 (ATerm), ATerm x_94 (ATerm), ATerm);
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
ATerm As_2_0 (ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm);
ATerm Op_2_0 (ATerm h_89 (ATerm), ATerm i_89 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm r_132 (ATerm), ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm MkConstType_0_0 (ATerm);
ATerm MkFunType_0_0 (ATerm);
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm UnZip2_0_0 (ATerm);
ATerm UnZip3_0_0 (ATerm);
ATerm UnZip1_0_0 (ATerm);
ATerm unzip_1_0 (ATerm l_108 (ATerm), ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm o_0 (ATerm), ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm z_119 (ATerm), ATerm);
ATerm Wld_0_0 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm);
ATerm Con_3_0 (ATerm b_90 (ATerm), ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Scope_2_0 (ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm t_104 (ATerm), ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm p_103 (ATerm), ATerm);
ATerm desugar_0_0 (ATerm);
ATerm _0_0 (ATerm);
ATerm Ttl_0_0 (ATerm);
ATerm Thd_0_0 (ATerm);
ATerm tuple_unzip_1_0 (ATerm r_107 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm subt_0_0 (ATerm);
ATerm copy_1_0 (ATerm t_114 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm MkThreadApplication_0_0 (ATerm);
ATerm Zip1b_p__0_0 (ATerm);
ATerm zipr_1_0 (ATerm j_108 (ATerm), ATerm);
ATerm Tl_0_0 (ATerm);
ATerm Last_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm CongruenceDef_0_0 (ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm GnUndefined_0_0 (ATerm);
ATerm diff_1_0 (ATerm n_111 (ATerm), ATerm);
ATerm UfShift_0_0 (ATerm);
ATerm Zip3_0_0 (ATerm);
ATerm Zip2_0_0 (ATerm);
ATerm Zip1_0_0 (ATerm);
ATerm genzip_4_0 (ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm);
ATerm zip_1_0 (ATerm g_108 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm UfIdem_0_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm p_132 (ATerm), ATerm);
ATerm GnExit_0_0 (ATerm);
ATerm GnInitRoots_0_0 (ATerm);
ATerm while_not_2_0 (ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm);
ATerm for_3_0 (ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t_120 (ATerm), ATerm);
ATerm graph_nodes_undef_roots_chgr_3_0 (ATerm y_131 (ATerm), ATerm z_131 (ATerm), ATerm a_132 (ATerm), ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm assert_1_0 (ATerm p_115 (ATerm), ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm);
ATerm union_1_0 (ATerm r_111 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm Arities_0_0 (ATerm);
ATerm Hd_0_0 (ATerm);
ATerm table_lookup_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm r_115 (ATerm), ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm foldr_3_0 (ATerm g_114 (ATerm), ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm);
ATerm length_0_0 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm sort_defs_0_0 (ATerm);
ATerm needed_defs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm c_88 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm h_88 (ATerm), ATerm);
ATerm _2_0 (ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm g_110 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm i_126 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm e_125 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm g_128 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm q_124 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm e_114 (ATerm), ATerm f_114 (ATerm), ATerm);
ATerm crush_2_0 (ATerm c_112 (ATerm), ATerm d_112 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_126 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm e_129 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm f_131 (ATerm), ATerm);
ATerm map_1_0 (ATerm q_109 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm e_131 (ATerm), ATerm);
ATerm Program_1_0 (ATerm w_100 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm x_100 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm a_110 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm e_130 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm h_106 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm j_131 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm h_131 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm g_131 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm v_128 (ATerm), ATerm w_128 (ATerm), ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm p_128 (ATerm), ATerm q_128 (ATerm), ATerm r_128 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm n_128 (ATerm), ATerm o_128 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm k_128 (ATerm), ATerm);
ATerm extract_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm d_4 = NULL;
  ATerm k_6 (ATerm t)
  {
    ATerm e_4 = NULL,f_5 = NULL,h_5 = NULL;
    t = not_null(d_4);
    if(((e_4 != NULL) && (e_4 != t)))
      _fail(t);
    else
      e_4 = t;
    t = not_null(d_4);
    {
      ATerm b_7;
      b_7 = t;
      {
        ATerm g_5 = NULL;
        ATerm l_6 (ATerm t)
        {
          t = not_null(g_5);
          if(((f_5 != NULL) && (f_5 != t)))
            _fail(t);
          else
            f_5 = t;
          t = not_null(g_5);
          return(t);
        }
        t = SSLgetAnnotations(not_null(e_4));
        if(((g_5 != NULL) && (g_5 != t)))
          _fail(t);
        else
          g_5 = t;
        t = l_6(t);
      }
      t = b_7;
      {
        ATerm j_6 = NULL;
        ATerm z_6 (ATerm t)
        {
          t = not_null(j_6);
          if(((h_5 != NULL) && (h_5 != t)))
            _fail(t);
          else
            h_5 = t;
          t = not_null(j_6);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(f_5));
        if(((j_6 != NULL) && (j_6 != t)))
          _fail(t);
        else
          j_6 = t;
        t = z_6(t);
        t = not_null(h_5);
      }
    }
    return(t);
  }
  if(((d_4 != NULL) && (d_4 != t)))
    _fail(t);
  else
    d_4 = t;
  t = not_null(d_4);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_6(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDef_0_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
  ATerm k_7 (ATerm t)
  {
    ATerm i_7 = NULL,j_7 = NULL;
    t = not_null(g_7);
    if(((i_7 != NULL) && (i_7 != t)))
      _fail(t);
    else
      i_7 = t;
    t = not_null(h_7);
    if(((j_7 != NULL) && (j_7 != t)))
      _fail(t);
    else
      j_7 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_7), not_null(j_7)), term_d_7), not_null(i_7)), term_c_7);
    t = error_0_0(t);
    return(t);
  }
  if(((f_7 != NULL) && (f_7 != t)))
    _fail(t);
  else
    f_7 = t;
  t = not_null(f_7);
  if(match_cons(t, sym__2))
    {
      g_7 = ATgetArgument(t, 0);
      h_7 = ATgetArgument(t, 1);
      t = k_7(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDefMod_0_0 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
  ATerm w_7 (ATerm t)
  {
    ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
    t = not_null(q_7);
    if(((t_7 != NULL) && (t_7 != t)))
      _fail(t);
    else
      t_7 = t;
    t = not_null(r_7);
    if(((u_7 != NULL) && (u_7 != t)))
      _fail(t);
    else
      u_7 = t;
    t = not_null(s_7);
    if(((v_7 != NULL) && (v_7 != t)))
      _fail(t);
    else
      v_7 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_7), not_null(v_7)), term_d_7), not_null(u_7)), term_l_7), not_null(t_7)), term_c_7);
    t = error_0_0(t);
    return(t);
  }
  if(((o_7 != NULL) && (o_7 != t)))
    _fail(t);
  else
    o_7 = t;
  t = not_null(o_7);
  if(match_cons(t, sym__2))
    {
      p_7 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
      t = not_null(p_7);
      if(match_cons(t, sym_Mod_2))
        {
          q_7 = ATgetArgument(t, 0);
          r_7 = ATgetArgument(t, 1);
          t = w_7(t);
        }
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
  ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
  ATerm i_8 (ATerm t)
  {
    ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
    t = not_null(b_8);
    if(((f_8 != NULL) && (f_8 != t)))
      _fail(t);
    else
      f_8 = t;
    t = not_null(d_8);
    if(((g_8 != NULL) && (g_8 != t)))
      _fail(t);
    else
      g_8 = t;
    t = not_null(e_8);
    if(((h_8 != NULL) && (h_8 != t)))
      _fail(t);
    else
      h_8 = t;
    t = not_null(a_8);
    t = (ATerm) ATinsert(CheckATermList(not_null(h_8)), not_null(g_8));
    {
      ATerm b_0 (ATerm t)
      {
        ATerm m_7 = t;
        int n_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = MissingDefMod_0_0(t);
            ;
            LocalPopChoice(n_7);
          }
        else
          {
            t = m_7;
            t = MissingDef_0_0(t);
          }
        return(t);
      }
      t = map_1_0(b_0, t);
    }
    t = not_null(f_8);
    return(t);
  }
  if(((a_8 != NULL) && (a_8 != t)))
    _fail(t);
  else
    a_8 = t;
  t = not_null(a_8);
  if(match_cons(t, sym__2))
    {
      b_8 = ATgetArgument(t, 0);
      c_8 = ATgetArgument(t, 1);
      t = not_null(c_8);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_8 = ATgetFirst((ATermList) t);
          e_8 = (ATerm) ATgetNext((ATermList) t);
          t = i_8(t);
        }
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
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL;
  ATerm q_8 (ATerm t)
  {
    ATerm p_8 = NULL;
    t = not_null(n_8);
    if(((p_8 != NULL) && (p_8 != t)))
      _fail(t);
    else
      p_8 = t;
    t = not_null(p_8);
    return(t);
  }
  if(((m_8 != NULL) && (m_8 != t)))
    _fail(t);
  else
    m_8 = t;
  t = not_null(m_8);
  if(match_cons(t, sym__2))
    {
      n_8 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
      t = not_null(o_8);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = q_8(t);
        }
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
  ATerm x_7;
  x_7 = t;
  t = error_0_0(t);
  t = term_y_7;
  t = exit_0_0(t);
  t = x_7;
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_z_7);
  t = fatal_error_0_0(t);
  return(t);
}
ATerm error_0_0 (ATerm t)
{
  ATerm j_8;
  j_8 = t;
  {
    ATerm s_8 = NULL;
    ATerm t_8 = NULL;
    ATerm u_8 (ATerm t)
    {
      t = not_null(t_8);
      if(((s_8 != NULL) && (s_8 != t)))
        _fail(t);
      else
        s_8 = t;
      t = not_null(t_8);
      return(t);
    }
    if(((t_8 != NULL) && (t_8 != t)))
      _fail(t);
    else
      t_8 = t;
    t = u_8(t);
    t = (ATerm) ATmakeAppl(sym__2, term_k_8, not_null(s_8));
    t = printnl_0_0(t);
  }
  t = j_8;
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
  ATerm h_10 (ATerm t)
  {
    ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
    ATerm j_10 (ATerm t)
    {
      t = not_null(r_9);
      {
        ATerm l_8 = t;
        if((PushChoice() == 0))
          {
            ATerm l_0 (ATerm t)
            {
              ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL;
              if(((w_9 != NULL) && (w_9 != t)))
                _fail(t);
              else
                w_9 = t;
              t = not_null(w_9);
              if(match_cons(t, sym__2))
                {
                  x_9 = ATgetArgument(t, 0);
                  y_9 = ATgetArgument(t, 1);
                  t = not_null(x_9);
                  if(match_int(t, 0))
                    {
                      t = not_null(y_9);
                      if(match_int(t, 0))
                        {
                          t = not_null(w_9);
                        }
                      else
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
            t = fetch_1_0(l_0, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_8;
          }
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_9)), term_r_8);
        t = error_0_0(t);
        t = giving_up_0_0(t);
      }
      return(t);
    }
    t = not_null(m_9);
    if(((q_9 != NULL) && (q_9 != t)))
      _fail(t);
    else
      q_9 = t;
    t = not_null(q_9);
    t = Arities_0_0(t);
    if(((r_9 != NULL) && (r_9 != t)))
      _fail(t);
    else
      r_9 = t;
    t = not_null(r_9);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_9 = ATgetFirst((ATermList) t);
        t_9 = (ATerm) ATgetNext((ATermList) t);
        t = not_null(t_9);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_9 = ATgetFirst((ATermList) t);
            v_9 = (ATerm) ATgetNext((ATermList) t);
            t = j_10(t);
          }
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
  ATerm i_10 (ATerm t)
  {
    ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL;
    t = not_null(m_9);
    if(((z_9 != NULL) && (z_9 != t)))
      _fail(t);
    else
      z_9 = t;
    t = not_null(l_9);
    {
      ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
      ATerm k_10 (ATerm t)
      {
        t = not_null(e_10);
        if(((a_10 != NULL) && (a_10 != t)))
          _fail(t);
        else
          a_10 = t;
        t = not_null(f_10);
        if(((b_10 != NULL) && (b_10 != t)))
          _fail(t);
        else
          b_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_9), (ATerm) ATmakeAppl(sym__2, not_null(a_10), not_null(b_10)));
        t = Definitions_0_0(t);
        return(t);
      }
      t = not_null(z_9);
      t = Arities_0_0(t);
      if(((c_10 != NULL) && (c_10 != t)))
        _fail(t);
      else
        c_10 = t;
      t = not_null(c_10);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_10 = ATgetFirst((ATermList) t);
          g_10 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(d_10);
          if(match_cons(t, sym__2))
            {
              e_10 = ATgetArgument(t, 0);
              f_10 = ATgetArgument(t, 1);
              t = not_null(g_10);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = k_10(t);
                }
              else
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
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_9), (ATerm) ATmakeAppl(sym__2, not_null(a_10), not_null(b_10)));
    }
    return(t);
  }
  if(((l_9 != NULL) && (l_9 != t)))
    _fail(t);
  else
    l_9 = t;
  t = not_null(l_9);
  if(match_cons(t, sym__2))
    {
      m_9 = ATgetArgument(t, 0);
      n_9 = ATgetArgument(t, 1);
      t = not_null(n_9);
      if(match_cons(t, sym__2))
        {
          o_9 = ATgetArgument(t, 0);
          p_9 = ATgetArgument(t, 1);
          t = not_null(o_9);
          if(match_int(t, 0))
            {
              t = not_null(p_9);
              if(match_int(t, 0))
                {
                  ATerm v_8 = t;
                  int w_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = h_10(t);
                      ;
                      LocalPopChoice(w_8);
                    }
                  else
                    {
                      t = v_8;
                      t = i_10(t);
                    }
                }
              else
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
ATerm Rec_2_0 (ATerm i_93 (ATerm), ATerm j_93 (ATerm), ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
  ATerm f_11 (ATerm t)
  {
    ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,z_10 = NULL;
    ATerm h_11 (ATerm t)
    {
      ATerm a_11 = NULL,b_11 = NULL;
      ATerm i_11 (ATerm t)
      {
        ATerm c_11 = NULL,d_11 = NULL;
        t = not_null(b_11);
        if(((c_11 != NULL) && (c_11 != t)))
          _fail(t);
        else
          c_11 = t;
        t = not_null(b_11);
        {
          ATerm e_11 = NULL;
          ATerm j_11 (ATerm t)
          {
            t = not_null(e_11);
            if(((d_11 != NULL) && (d_11 != t)))
              _fail(t);
            else
              d_11 = t;
            t = not_null(e_11);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(a_11), not_null(c_11)), not_null(x_10));
          if(((e_11 != NULL) && (e_11 != t)))
            _fail(t);
          else
            e_11 = t;
          t = j_11(t);
          t = not_null(d_11);
        }
        return(t);
      }
      t = not_null(z_10);
      if(((a_11 != NULL) && (a_11 != t)))
        _fail(t);
      else
        a_11 = t;
      t = not_null(w_10);
      t = j_93(t);
      if(((b_11 != NULL) && (b_11 != t)))
        _fail(t);
      else
        b_11 = t;
      t = i_11(t);
      return(t);
    }
    t = not_null(r_10);
    if(((u_10 != NULL) && (u_10 != t)))
      _fail(t);
    else
      u_10 = t;
    t = not_null(s_10);
    if(((v_10 != NULL) && (v_10 != t)))
      _fail(t);
    else
      v_10 = t;
    t = not_null(t_10);
    if(((w_10 != NULL) && (w_10 != t)))
      _fail(t);
    else
      w_10 = t;
    t = not_null(r_10);
    {
      ATerm y_10 = NULL;
      ATerm g_11 (ATerm t)
      {
        t = not_null(y_10);
        if(((x_10 != NULL) && (x_10 != t)))
          _fail(t);
        else
          x_10 = t;
        t = not_null(y_10);
        return(t);
      }
      t = SSLgetAnnotations(not_null(u_10));
      if(((y_10 != NULL) && (y_10 != t)))
        _fail(t);
      else
        y_10 = t;
      t = g_11(t);
      t = not_null(v_10);
      t = i_93(t);
      if(((z_10 != NULL) && (z_10 != t)))
        _fail(t);
      else
        z_10 = t;
      t = h_11(t);
    }
    return(t);
  }
  if(((r_10 != NULL) && (r_10 != t)))
    _fail(t);
  else
    r_10 = t;
  t = not_null(r_10);
  if(match_cons(t, sym_Rec_2))
    {
      s_10 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
      t = f_11(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm d_95 (ATerm), ATerm e_95 (ATerm), ATerm f_95 (ATerm), ATerm g_95 (ATerm), ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
  ATerm o_12 (ATerm t)
  {
    ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,e_12 = NULL;
    ATerm q_12 (ATerm t)
    {
      ATerm f_12 = NULL,g_12 = NULL;
      ATerm r_12 (ATerm t)
      {
        ATerm h_12 = NULL,i_12 = NULL;
        ATerm s_12 (ATerm t)
        {
          ATerm j_12 = NULL,k_12 = NULL;
          ATerm t_12 (ATerm t)
          {
            ATerm l_12 = NULL,m_12 = NULL;
            t = not_null(k_12);
            if(((l_12 != NULL) && (l_12 != t)))
              _fail(t);
            else
              l_12 = t;
            t = not_null(k_12);
            {
              ATerm n_12 = NULL;
              ATerm u_12 (ATerm t)
              {
                t = not_null(n_12);
                if(((m_12 != NULL) && (m_12 != t)))
                  _fail(t);
                else
                  m_12 = t;
                t = not_null(n_12);
                return(t);
              }
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(f_12), not_null(h_12), not_null(j_12), not_null(l_12)), not_null(c_12));
              if(((n_12 != NULL) && (n_12 != t)))
                _fail(t);
              else
                n_12 = t;
              t = u_12(t);
              t = not_null(m_12);
            }
            return(t);
          }
          t = not_null(i_12);
          if(((j_12 != NULL) && (j_12 != t)))
            _fail(t);
          else
            j_12 = t;
          t = not_null(b_12);
          t = g_95(t);
          if(((k_12 != NULL) && (k_12 != t)))
            _fail(t);
          else
            k_12 = t;
          t = t_12(t);
          return(t);
        }
        t = not_null(g_12);
        if(((h_12 != NULL) && (h_12 != t)))
          _fail(t);
        else
          h_12 = t;
        t = not_null(a_12);
        t = f_95(t);
        if(((i_12 != NULL) && (i_12 != t)))
          _fail(t);
        else
          i_12 = t;
        t = s_12(t);
        return(t);
      }
      t = not_null(e_12);
      if(((f_12 != NULL) && (f_12 != t)))
        _fail(t);
      else
        f_12 = t;
      t = not_null(z_11);
      t = e_95(t);
      if(((g_12 != NULL) && (g_12 != t)))
        _fail(t);
      else
        g_12 = t;
      t = r_12(t);
      return(t);
    }
    t = not_null(s_11);
    if(((x_11 != NULL) && (x_11 != t)))
      _fail(t);
    else
      x_11 = t;
    t = not_null(t_11);
    if(((y_11 != NULL) && (y_11 != t)))
      _fail(t);
    else
      y_11 = t;
    t = not_null(u_11);
    if(((z_11 != NULL) && (z_11 != t)))
      _fail(t);
    else
      z_11 = t;
    t = not_null(v_11);
    if(((a_12 != NULL) && (a_12 != t)))
      _fail(t);
    else
      a_12 = t;
    t = not_null(w_11);
    if(((b_12 != NULL) && (b_12 != t)))
      _fail(t);
    else
      b_12 = t;
    t = not_null(s_11);
    {
      ATerm d_12 = NULL;
      ATerm p_12 (ATerm t)
      {
        t = not_null(d_12);
        if(((c_12 != NULL) && (c_12 != t)))
          _fail(t);
        else
          c_12 = t;
        t = not_null(d_12);
        return(t);
      }
      t = SSLgetAnnotations(not_null(x_11));
      if(((d_12 != NULL) && (d_12 != t)))
        _fail(t);
      else
        d_12 = t;
      t = p_12(t);
      t = not_null(y_11);
      t = d_95(t);
      if(((e_12 != NULL) && (e_12 != t)))
        _fail(t);
      else
        e_12 = t;
      t = q_12(t);
    }
    return(t);
  }
  if(((s_11 != NULL) && (s_11 != t)))
    _fail(t);
  else
    s_11 = t;
  t = not_null(s_11);
  if(match_cons(t, sym_SDefT_4))
    {
      t_11 = ATgetArgument(t, 0);
      u_11 = ATgetArgument(t, 1);
      v_11 = ATgetArgument(t, 2);
      w_11 = ATgetArgument(t, 3);
      t = o_12(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_3_0 (ATerm a_95 (ATerm), ATerm b_95 (ATerm), ATerm c_95 (ATerm), ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
  ATerm u_13 (ATerm t)
  {
    ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,m_13 = NULL;
    ATerm w_13 (ATerm t)
    {
      ATerm n_13 = NULL,o_13 = NULL;
      ATerm x_13 (ATerm t)
      {
        ATerm p_13 = NULL,q_13 = NULL;
        ATerm y_13 (ATerm t)
        {
          ATerm r_13 = NULL,s_13 = NULL;
          t = not_null(q_13);
          if(((r_13 != NULL) && (r_13 != t)))
            _fail(t);
          else
            r_13 = t;
          t = not_null(q_13);
          {
            ATerm t_13 = NULL;
            ATerm z_13 (ATerm t)
            {
              t = not_null(t_13);
              if(((s_13 != NULL) && (s_13 != t)))
                _fail(t);
              else
                s_13 = t;
              t = not_null(t_13);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(n_13), not_null(p_13), not_null(r_13)), not_null(k_13));
            if(((t_13 != NULL) && (t_13 != t)))
              _fail(t);
            else
              t_13 = t;
            t = z_13(t);
            t = not_null(s_13);
          }
          return(t);
        }
        t = not_null(o_13);
        if(((p_13 != NULL) && (p_13 != t)))
          _fail(t);
        else
          p_13 = t;
        t = not_null(j_13);
        t = c_95(t);
        if(((q_13 != NULL) && (q_13 != t)))
          _fail(t);
        else
          q_13 = t;
        t = y_13(t);
        return(t);
      }
      t = not_null(m_13);
      if(((n_13 != NULL) && (n_13 != t)))
        _fail(t);
      else
        n_13 = t;
      t = not_null(i_13);
      t = b_95(t);
      if(((o_13 != NULL) && (o_13 != t)))
        _fail(t);
      else
        o_13 = t;
      t = x_13(t);
      return(t);
    }
    t = not_null(c_13);
    if(((g_13 != NULL) && (g_13 != t)))
      _fail(t);
    else
      g_13 = t;
    t = not_null(d_13);
    if(((h_13 != NULL) && (h_13 != t)))
      _fail(t);
    else
      h_13 = t;
    t = not_null(e_13);
    if(((i_13 != NULL) && (i_13 != t)))
      _fail(t);
    else
      i_13 = t;
    t = not_null(f_13);
    if(((j_13 != NULL) && (j_13 != t)))
      _fail(t);
    else
      j_13 = t;
    t = not_null(c_13);
    {
      ATerm l_13 = NULL;
      ATerm v_13 (ATerm t)
      {
        t = not_null(l_13);
        if(((k_13 != NULL) && (k_13 != t)))
          _fail(t);
        else
          k_13 = t;
        t = not_null(l_13);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_13));
      if(((l_13 != NULL) && (l_13 != t)))
        _fail(t);
      else
        l_13 = t;
      t = v_13(t);
      t = not_null(h_13);
      t = a_95(t);
      if(((m_13 != NULL) && (m_13 != t)))
        _fail(t);
      else
        m_13 = t;
      t = w_13(t);
    }
    return(t);
  }
  if(((c_13 != NULL) && (c_13 != t)))
    _fail(t);
  else
    c_13 = t;
  t = not_null(c_13);
  if(match_cons(t, sym_SDef_3))
    {
      d_13 = ATgetArgument(t, 0);
      e_13 = ATgetArgument(t, 1);
      f_13 = ATgetArgument(t, 2);
      t = u_13(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2_0 (ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
  ATerm u_14 (ATerm t)
  {
    ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,o_14 = NULL;
    ATerm w_14 (ATerm t)
    {
      ATerm p_14 = NULL,q_14 = NULL;
      ATerm x_14 (ATerm t)
      {
        ATerm r_14 = NULL,s_14 = NULL;
        t = not_null(q_14);
        if(((r_14 != NULL) && (r_14 != t)))
          _fail(t);
        else
          r_14 = t;
        t = not_null(q_14);
        {
          ATerm t_14 = NULL;
          ATerm y_14 (ATerm t)
          {
            t = not_null(t_14);
            if(((s_14 != NULL) && (s_14 != t)))
              _fail(t);
            else
              s_14 = t;
            t = not_null(t_14);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(p_14), not_null(r_14)), not_null(m_14));
          if(((t_14 != NULL) && (t_14 != t)))
            _fail(t);
          else
            t_14 = t;
          t = y_14(t);
          t = not_null(s_14);
        }
        return(t);
      }
      t = not_null(o_14);
      if(((p_14 != NULL) && (p_14 != t)))
        _fail(t);
      else
        p_14 = t;
      t = not_null(l_14);
      t = m_92(t);
      if(((q_14 != NULL) && (q_14 != t)))
        _fail(t);
      else
        q_14 = t;
      t = x_14(t);
      return(t);
    }
    t = not_null(g_14);
    if(((j_14 != NULL) && (j_14 != t)))
      _fail(t);
    else
      j_14 = t;
    t = not_null(h_14);
    if(((k_14 != NULL) && (k_14 != t)))
      _fail(t);
    else
      k_14 = t;
    t = not_null(i_14);
    if(((l_14 != NULL) && (l_14 != t)))
      _fail(t);
    else
      l_14 = t;
    t = not_null(g_14);
    {
      ATerm n_14 = NULL;
      ATerm v_14 (ATerm t)
      {
        t = not_null(n_14);
        if(((m_14 != NULL) && (m_14 != t)))
          _fail(t);
        else
          m_14 = t;
        t = not_null(n_14);
        return(t);
      }
      t = SSLgetAnnotations(not_null(j_14));
      if(((n_14 != NULL) && (n_14 != t)))
        _fail(t);
      else
        n_14 = t;
      t = v_14(t);
      t = not_null(k_14);
      t = l_92(t);
      if(((o_14 != NULL) && (o_14 != t)))
        _fail(t);
      else
        o_14 = t;
      t = w_14(t);
    }
    return(t);
  }
  if(((g_14 != NULL) && (g_14 != t)))
    _fail(t);
  else
    g_14 = t;
  t = not_null(g_14);
  if(match_cons(t, sym_Let_2))
    {
      h_14 = ATgetArgument(t, 0);
      i_14 = ATgetArgument(t, 1);
      t = u_14(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm t)
{
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(u_102, u_102, t);
      ;
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      {
        ATerm z_8 = t;
        int a_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(w_102, w_102, u_102, t);
            ;
            LocalPopChoice(a_9);
          }
        else
          {
            t = z_8;
            {
              ATerm b_9 = t;
              int c_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(w_102, w_102, w_102, u_102, t);
                  ;
                  LocalPopChoice(c_9);
                }
              else
                {
                  t = b_9;
                  t = Rec_2_0(w_102, u_102, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
  ATerm k_15 (ATerm t)
  {
    ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
    t = not_null(c_15);
    if(((g_15 != NULL) && (g_15 != t)))
      _fail(t);
    else
      g_15 = t;
    t = not_null(d_15);
    if(((j_15 != NULL) && (j_15 != t)))
      _fail(t);
    else
      j_15 = t;
    t = not_null(e_15);
    if(((h_15 != NULL) && (h_15 != t)))
      _fail(t);
    else
      h_15 = t;
    t = not_null(f_15);
    if(((i_15 != NULL) && (i_15 != t)))
      _fail(t);
    else
      i_15 = t;
    t = not_null(j_15);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((b_15 != NULL) && (b_15 != t)))
    _fail(t);
  else
    b_15 = t;
  t = not_null(b_15);
  if(match_cons(t, sym_RDefT_4))
    {
      c_15 = ATgetArgument(t, 0);
      d_15 = ATgetArgument(t, 1);
      e_15 = ATgetArgument(t, 2);
      f_15 = ATgetArgument(t, 3);
      t = k_15(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
  ATerm w_15 (ATerm t)
  {
    ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL;
    t = not_null(o_15);
    if(((s_15 != NULL) && (s_15 != t)))
      _fail(t);
    else
      s_15 = t;
    t = not_null(p_15);
    if(((v_15 != NULL) && (v_15 != t)))
      _fail(t);
    else
      v_15 = t;
    t = not_null(q_15);
    if(((t_15 != NULL) && (t_15 != t)))
      _fail(t);
    else
      t_15 = t;
    t = not_null(r_15);
    if(((u_15 != NULL) && (u_15 != t)))
      _fail(t);
    else
      u_15 = t;
    t = not_null(v_15);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((n_15 != NULL) && (n_15 != t)))
    _fail(t);
  else
    n_15 = t;
  t = not_null(n_15);
  if(match_cons(t, sym_SDefT_4))
    {
      o_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
      q_15 = ATgetArgument(t, 2);
      r_15 = ATgetArgument(t, 3);
      t = w_15(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind3_0_0 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
  ATerm e_16 (ATerm t)
  {
    ATerm c_16 = NULL,d_16 = NULL;
    t = not_null(a_16);
    if(((d_16 != NULL) && (d_16 != t)))
      _fail(t);
    else
      d_16 = t;
    t = not_null(b_16);
    if(((c_16 != NULL) && (c_16 != t)))
      _fail(t);
    else
      c_16 = t;
    t = (ATerm) ATinsert(ATempty, not_null(d_16));
    return(t);
  }
  if(((z_15 != NULL) && (z_15 != t)))
    _fail(t);
  else
    z_15 = t;
  t = not_null(z_15);
  if(match_cons(t, sym_Rec_2))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
      t = e_16(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL;
    ATerm n_16 (ATerm t)
    {
      ATerm l_16 = NULL;
      t = not_null(k_16);
      if(((l_16 != NULL) && (l_16 != t)))
        _fail(t);
      else
        l_16 = t;
      t = not_null(l_16);
      return(t);
    }
    ATerm o_16 (ATerm t)
    {
      ATerm m_16 = NULL;
      t = not_null(k_16);
      if(((m_16 != NULL) && (m_16 != t)))
        _fail(t);
      else
        m_16 = t;
      t = not_null(m_16);
      return(t);
    }
    if(((j_16 != NULL) && (j_16 != t)))
      _fail(t);
    else
      j_16 = t;
    t = not_null(j_16);
    if(match_cons(t, sym_VarDec_2))
      {
        k_16 = ATgetArgument(t, 0);
        i_16 = ATgetArgument(t, 1);
        t = n_16(t);
      }
    else
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            k_16 = ATgetArgument(t, 0);
            t = o_16(t);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1_0(p_0, t);
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  ATerm y_16 (ATerm t)
  {
    ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
    t = not_null(s_16);
    if(((v_16 != NULL) && (v_16 != t)))
      _fail(t);
    else
      v_16 = t;
    t = not_null(t_16);
    if(((x_16 != NULL) && (x_16 != t)))
      _fail(t);
    else
      x_16 = t;
    t = not_null(u_16);
    if(((w_16 != NULL) && (w_16 != t)))
      _fail(t);
    else
      w_16 = t;
    t = not_null(x_16);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((r_16 != NULL) && (r_16 != t)))
    _fail(t);
  else
    r_16 = t;
  t = not_null(r_16);
  if(match_cons(t, sym_SDef_3))
    {
      s_16 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
      u_16 = ATgetArgument(t, 2);
      t = y_16(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
  ATerm q_17 (ATerm t)
  {
    ATerm h_17 = NULL,i_17 = NULL;
    t = not_null(f_17);
    if(((i_17 != NULL) && (i_17 != t)))
      _fail(t);
    else
      i_17 = t;
    t = not_null(g_17);
    if(((h_17 != NULL) && (h_17 != t)))
      _fail(t);
    else
      h_17 = t;
    t = not_null(i_17);
    {
      ATerm r_0 (ATerm t)
      {
        ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
        ATerm r_17 (ATerm t)
        {
          ATerm o_17 = NULL;
          t = not_null(k_17);
          if(((o_17 != NULL) && (o_17 != t)))
            _fail(t);
          else
            o_17 = t;
          t = not_null(o_17);
          return(t);
        }
        ATerm s_17 (ATerm t)
        {
          ATerm p_17 = NULL;
          t = not_null(k_17);
          if(((p_17 != NULL) && (p_17 != t)))
            _fail(t);
          else
            p_17 = t;
          t = not_null(p_17);
          return(t);
        }
        if(((j_17 != NULL) && (j_17 != t)))
          _fail(t);
        else
          j_17 = t;
        t = not_null(j_17);
        if(match_cons(t, sym_SDef_3))
          {
            k_17 = ATgetArgument(t, 0);
            l_17 = ATgetArgument(t, 1);
            m_17 = ATgetArgument(t, 2);
            t = r_17(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                k_17 = ATgetArgument(t, 0);
                l_17 = ATgetArgument(t, 1);
                m_17 = ATgetArgument(t, 2);
                n_17 = ATgetArgument(t, 3);
                t = s_17(t);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      t = map_1_0(r_0, t);
    }
    return(t);
  }
  if(((e_17 != NULL) && (e_17 != t)))
    _fail(t);
  else
    e_17 = t;
  t = not_null(e_17);
  if(match_cons(t, sym_Let_2))
    {
      f_17 = ATgetArgument(t, 0);
      g_17 = ATgetArgument(t, 1);
      t = q_17(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm crush_3_0 (ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm t)
{
  ATerm x_17 = NULL;
  ATerm f_18 (ATerm t)
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
      ATerm g_18 (ATerm t)
      {
        ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
        ATerm h_18 (ATerm t)
        {
          t = not_null(e_18);
          if(((z_17 != NULL) && (z_17 != t)))
            _fail(t);
          else
            z_17 = t;
          t = not_null(c_18);
          return(t);
        }
        t = not_null(a_18);
        if(((b_18 != NULL) && (b_18 != t)))
          _fail(t);
        else
          b_18 = t;
        t = not_null(a_18);
        t = SSL_explode_term(not_null(b_18));
        if(((c_18 != NULL) && (c_18 != t)))
          _fail(t);
        else
          c_18 = t;
        t = not_null(c_18);
        if(match_cons(t, sym__2))
          {
            d_18 = ATgetArgument(t, 0);
            e_18 = ATgetArgument(t, 1);
            t = h_18(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(y_17);
      if(((a_18 != NULL) && (a_18 != t)))
        _fail(t);
      else
        a_18 = t;
      t = g_18(t);
      t = not_null(z_17);
      t = foldr_3_0(e_112, f_112, g_112, t);
    }
    return(t);
  }
  if(((x_17 != NULL) && (x_17 != t)))
    _fail(t);
  else
    x_17 = t;
  t = f_18(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm c_118 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_118 (ATerm), ATerm t)
{
  ATerm l_18 (ATerm t)
  {
    ATerm s_0 (ATerm t)
    {
      ATerm d_9 = t;
      int e_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_118(t);
          ;
          LocalPopChoice(e_9);
        }
      else
        {
          t = d_9;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm t_0 (ATerm t)
    {
      ATerm f_9 = t;
      int g_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_18 = NULL;
          ATerm h_9;
          h_9 = t;
          {
            ATerm k_18 = NULL;
            ATerm m_18 (ATerm t)
            {
              t = not_null(k_18);
              if(((j_18 != NULL) && (j_18 != t)))
                _fail(t);
              else
                j_18 = t;
              t = not_null(k_18);
              return(t);
            }
            t = b_118(t);
            if(((k_18 != NULL) && (k_18 != t)))
              _fail(t);
            else
              k_18 = t;
            t = m_18(t);
          }
          t = h_9;
          {
            ATerm u_0 (ATerm t)
            {
              ATerm w_0 (ATerm t)
              {
                t = not_null(j_18);
                return(t);
              }
              t = split_2_0(l_18, w_0, t);
              t = diff_1_0(d_118, t);
              return(t);
            }
            ATerm v_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = c_118(u_0, l_18, v_0, t);
            {
              ATerm x_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3_0(x_0, union_0_0, _id, t);
            }
          }
          ;
          LocalPopChoice(g_9);
        }
      else
        {
          t = f_9;
          {
            ATerm y_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3_0(y_0, union_0_0, l_18, t);
          }
        }
      return(t);
    }
    t = split_2_0(s_0, t_0, t);
    t = union_0_0(t);
    return(t);
  }
  t = l_18(t);
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
    ATerm n_19 (ATerm t)
    {
      ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,f_19 = NULL;
      t = not_null(x_18);
      if(((a_19 != NULL) && (a_19 != t)))
        _fail(t);
      else
        a_19 = t;
      t = not_null(y_18);
      if(((b_19 != NULL) && (b_19 != t)))
        _fail(t);
      else
        b_19 = t;
      t = not_null(z_18);
      if(((c_19 != NULL) && (c_19 != t)))
        _fail(t);
      else
        c_19 = t;
      t = not_null(v_18);
      {
        ATerm i_9;
        i_9 = t;
        {
          ATerm e_19 = NULL;
          ATerm o_19 (ATerm t)
          {
            t = not_null(e_19);
            if(((d_19 != NULL) && (d_19 != t)))
              _fail(t);
            else
              d_19 = t;
            t = not_null(e_19);
            return(t);
          }
          t = not_null(b_19);
          t = length_0_0(t);
          if(((e_19 != NULL) && (e_19 != t)))
            _fail(t);
          else
            e_19 = t;
          t = o_19(t);
        }
        t = i_9;
        {
          ATerm g_19 = NULL;
          ATerm p_19 (ATerm t)
          {
            t = not_null(g_19);
            if(((f_19 != NULL) && (f_19 != t)))
              _fail(t);
            else
              f_19 = t;
            t = not_null(g_19);
            return(t);
          }
          t = not_null(c_19);
          t = length_0_0(t);
          if(((g_19 != NULL) && (g_19 != t)))
            _fail(t);
          else
            g_19 = t;
          t = p_19(t);
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(a_19), (ATerm) ATmakeAppl(sym__2, not_null(d_19), not_null(f_19))));
        }
      }
      return(t);
    }
    if(((v_18 != NULL) && (v_18 != t)))
      _fail(t);
    else
      v_18 = t;
    t = not_null(v_18);
    if(match_cons(t, sym_CallT_3))
      {
        w_18 = ATgetArgument(t, 0);
        y_18 = ATgetArgument(t, 1);
        z_18 = ATgetArgument(t, 2);
        t = not_null(w_18);
        if(match_cons(t, sym_SVar_1))
          {
            x_18 = ATgetArgument(t, 0);
            t = n_19(t);
          }
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
  ATerm a_1 (ATerm t)
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        {
          ATerm l_10 = t;
          int m_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(m_10);
            }
          else
            {
              t = l_10;
              {
                ATerm n_10 = t;
                int o_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0_0(t);
                    ;
                    LocalPopChoice(o_10);
                  }
                else
                  {
                    t = n_10;
                    {
                      ATerm p_10 = t;
                      int q_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(q_10);
                        }
                      else
                        {
                          t = p_10;
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
  ATerm b_1 (ATerm t)
  {
    ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
    ATerm q_19 (ATerm t)
    {
      ATerm m_19 = NULL;
      t = not_null(j_19);
      if(((m_19 != NULL) && (m_19 != t)))
        _fail(t);
      else
        m_19 = t;
      t = not_null(l_19);
      if(((m_19 != NULL) && (m_19 != t)))
        _fail(t);
      else
        m_19 = t;
      t = not_null(h_19);
      return(t);
    }
    if(((h_19 != NULL) && (h_19 != t)))
      _fail(t);
    else
      h_19 = t;
    t = not_null(h_19);
    if(match_cons(t, sym__2))
      {
        i_19 = ATgetArgument(t, 0);
        l_19 = ATgetArgument(t, 1);
        t = not_null(i_19);
        if(match_cons(t, sym__2))
          {
            j_19 = ATgetArgument(t, 0);
            k_19 = ATgetArgument(t, 1);
            t = q_19(t);
          }
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
  t = free_vars2_4_0(z_0, a_1, sboundin_3_0, b_1, t);
  return(t);
}
ATerm Snd_0_0 (ATerm t)
{
  ATerm y_19 = NULL;
  ATerm m_20 (ATerm t)
  {
    ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL;
    t = not_null(y_19);
    if(((z_19 != NULL) && (z_19 != t)))
      _fail(t);
    else
      z_19 = t;
    t = not_null(y_19);
    {
      ATerm d_20 = NULL;
      ATerm n_20 (ATerm t)
      {
        ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
        ATerm o_20 (ATerm t)
        {
          t = not_null(i_20);
          if(((a_20 != NULL) && (a_20 != t)))
            _fail(t);
          else
            a_20 = t;
          t = not_null(k_20);
          if(((c_20 != NULL) && (c_20 != t)))
            _fail(t);
          else
            c_20 = t;
          t = not_null(l_20);
          if(((b_20 != NULL) && (b_20 != t)))
            _fail(t);
          else
            b_20 = t;
          t = not_null(f_20);
          return(t);
        }
        t = not_null(d_20);
        if(((e_20 != NULL) && (e_20 != t)))
          _fail(t);
        else
          e_20 = t;
        t = not_null(d_20);
        t = SSL_explode_term(not_null(e_20));
        if(((f_20 != NULL) && (f_20 != t)))
          _fail(t);
        else
          f_20 = t;
        t = not_null(f_20);
        if(match_cons(t, sym__2))
          {
            g_20 = ATgetArgument(t, 0);
            h_20 = ATgetArgument(t, 1);
            t = not_null(g_20);
            if(match_string(t, ""))
              {
                t = not_null(h_20);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    i_20 = ATgetFirst((ATermList) t);
                    j_20 = (ATerm) ATgetNext((ATermList) t);
                    t = not_null(j_20);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        k_20 = ATgetFirst((ATermList) t);
                        l_20 = (ATerm) ATgetNext((ATermList) t);
                        t = o_20(t);
                      }
                    else
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
      t = not_null(z_19);
      if(((d_20 != NULL) && (d_20 != t)))
        _fail(t);
      else
        d_20 = t;
      t = n_20(t);
      t = not_null(c_20);
    }
    return(t);
  }
  if(((y_19 != NULL) && (y_19 != t)))
    _fail(t);
  else
    y_19 = t;
  t = m_20(t);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    t = term_k_11;
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    ATerm r_20 = NULL,t_20 = NULL;
    ATerm l_11;
    l_11 = t;
    {
      ATerm s_20 = NULL;
      ATerm v_20 (ATerm t)
      {
        t = not_null(s_20);
        if(((r_20 != NULL) && (r_20 != t)))
          _fail(t);
        else
          r_20 = t;
        t = not_null(s_20);
        return(t);
      }
      t = Fst_0_0(t);
      if(((s_20 != NULL) && (s_20 != t)))
        _fail(t);
      else
        s_20 = t;
      t = v_20(t);
    }
    t = l_11;
    {
      ATerm u_20 = NULL;
      ATerm w_20 (ATerm t)
      {
        t = not_null(u_20);
        if(((t_20 != NULL) && (t_20 != t)))
          _fail(t);
        else
          t_20 = t;
        t = not_null(u_20);
        return(t);
      }
      t = Snd_0_0(t);
      if(((u_20 != NULL) && (u_20 != t)))
        _fail(t);
      else
        u_20 = t;
      t = w_20(t);
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_20), not_null(t_20));
    }
    return(t);
  }
  t = foldr_2_0(c_1, d_1, t);
  return(t);
}
ATerm IsVar_0_0 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  ATerm c_21 (ATerm t)
  {
    ATerm b_21 = NULL;
    t = not_null(a_21);
    if(((b_21 != NULL) && (b_21 != t)))
      _fail(t);
    else
      b_21 = t;
    t = not_null(b_21);
    return(t);
  }
  if(((z_20 != NULL) && (z_20 != t)))
    _fail(t);
  else
    z_20 = t;
  t = not_null(z_20);
  if(match_cons(t, sym_Var_1))
    {
      a_21 = ATgetArgument(t, 0);
      t = c_21(t);
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
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL;
  ATerm s_21 (ATerm t)
  {
    ATerm q_21 = NULL;
    t = not_null(o_21);
    if(((q_21 != NULL) && (q_21 != t)))
      _fail(t);
    else
      q_21 = t;
    t = not_null(q_21);
    return(t);
  }
  ATerm t_21 (ATerm t)
  {
    ATerm r_21 = NULL;
    t = not_null(o_21);
    if(((r_21 != NULL) && (r_21 != t)))
      _fail(t);
    else
      r_21 = t;
    t = not_null(r_21);
    return(t);
  }
  if(((m_21 != NULL) && (m_21 != t)))
    _fail(t);
  else
    m_21 = t;
  t = not_null(m_21);
  if(match_cons(t, sym_CallT_3))
    {
      n_21 = ATgetArgument(t, 0);
      p_21 = ATgetArgument(t, 1);
      l_21 = ATgetArgument(t, 2);
      t = not_null(n_21);
      if(match_cons(t, sym_SVar_1))
        {
          o_21 = ATgetArgument(t, 0);
          t = not_null(p_21);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = not_null(l_21);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = s_21(t);
                }
              else
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
          n_21 = ATgetArgument(t, 0);
          p_21 = ATgetArgument(t, 1);
          t = not_null(n_21);
          if(match_cons(t, sym_SVar_1))
            {
              o_21 = ATgetArgument(t, 0);
              t = not_null(p_21);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = t_21(t);
                }
              else
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
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
  ATerm e_22 (ATerm t)
  {
    ATerm c_22 = NULL,d_22 = NULL;
    t = not_null(y_21);
    if(((c_22 != NULL) && (c_22 != t)))
      _fail(t);
    else
      c_22 = t;
    t = not_null(b_22);
    if(((d_22 != NULL) && (d_22 != t)))
      _fail(t);
    else
      d_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_22), not_null(d_22));
    return(t);
  }
  if(((x_21 != NULL) && (x_21 != t)))
    _fail(t);
  else
    x_21 = t;
  t = not_null(x_21);
  if(match_cons(t, sym__2))
    {
      y_21 = ATgetArgument(t, 0);
      z_21 = ATgetArgument(t, 1);
      t = not_null(z_21);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_22 = ATgetFirst((ATermList) t);
          b_22 = (ATerm) ATgetNext((ATermList) t);
          t = e_22(t);
        }
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
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL;
  ATerm s_22 (ATerm t)
  {
    ATerm q_22 = NULL,r_22 = NULL;
    t = not_null(k_22);
    if(((q_22 != NULL) && (q_22 != t)))
      _fail(t);
    else
      q_22 = t;
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
    t = not_null(r_22);
    return(t);
  }
  if(((j_22 != NULL) && (j_22 != t)))
    _fail(t);
  else
    j_22 = t;
  t = not_null(j_22);
  if(match_cons(t, sym__2))
    {
      k_22 = ATgetArgument(t, 0);
      l_22 = ATgetArgument(t, 1);
      t = not_null(l_22);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_22 = ATgetFirst((ATermList) t);
          p_22 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(m_22);
          if(match_cons(t, sym__2))
            {
              n_22 = ATgetArgument(t, 0);
              o_22 = ATgetArgument(t, 1);
              t = s_22(t);
            }
          else
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
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0_0(t);
      ;
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      t = Look2_0_0(t);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm SubsVar_2_0 (ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm t)
{
  ATerm x_22 = NULL;
  ATerm d_23 (ATerm t)
  {
    ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
    t = not_null(x_22);
    if(((y_22 != NULL) && (y_22 != t)))
      _fail(t);
    else
      y_22 = t;
    t = not_null(x_22);
    {
      ATerm b_23 = NULL;
      ATerm e_23 (ATerm t)
      {
        ATerm c_23 = NULL;
        ATerm f_23 (ATerm t)
        {
          t = not_null(c_23);
          if(((a_23 != NULL) && (a_23 != t)))
            _fail(t);
          else
            a_23 = t;
          t = not_null(c_23);
          return(t);
        }
        t = not_null(b_23);
        if(((z_22 != NULL) && (z_22 != t)))
          _fail(t);
        else
          z_22 = t;
        t = not_null(b_23);
        t = o_103(t);
        if(((c_23 != NULL) && (c_23 != t)))
          _fail(t);
        else
          c_23 = t;
        t = f_23(t);
        return(t);
      }
      t = not_null(y_22);
      t = n_103(t);
      if(((b_23 != NULL) && (b_23 != t)))
        _fail(t);
      else
        b_23 = t;
      t = e_23(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_22), not_null(a_23));
      t = lookup_0_0(t);
    }
    return(t);
  }
  if(((x_22 != NULL) && (x_22 != t)))
    _fail(t);
  else
    x_22 = t;
  t = d_23(t);
  return(t);
}
ATerm alltd_1_0 (ATerm h_105 (ATerm), ATerm t)
{
  ATerm g_23 (ATerm t)
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_105(t);
        ;
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        t = SRTS_all(g_23, t);
      }
    return(t);
  }
  t = g_23(t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
  ATerm y_23 (ATerm t)
  {
    ATerm p_23 = NULL,q_23 = NULL;
    t = not_null(m_23);
    if(((p_23 != NULL) && (p_23 != t)))
      _fail(t);
    else
      p_23 = t;
    t = not_null(n_23);
    if(((q_23 != NULL) && (q_23 != t)))
      _fail(t);
    else
      q_23 = t;
    t = not_null(l_23);
    return(t);
  }
  ATerm z_23 (ATerm t)
  {
    ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL;
    t = not_null(m_23);
    if(((t_23 != NULL) && (t_23 != t)))
      _fail(t);
    else
      t_23 = t;
    t = not_null(n_23);
    if(((u_23 != NULL) && (u_23 != t)))
      _fail(t);
    else
      u_23 = t;
    t = not_null(o_23);
    if(((v_23 != NULL) && (v_23 != t)))
      _fail(t);
    else
      v_23 = t;
    t = not_null(l_23);
    {
      ATerm x_23 = NULL;
      ATerm a_24 (ATerm t)
      {
        t = not_null(x_23);
        if(((w_23 != NULL) && (w_23 != t)))
          _fail(t);
        else
          w_23 = t;
        t = not_null(x_23);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_23), not_null(u_23));
      t = zip_1_0(_id, t);
      if(((x_23 != NULL) && (x_23 != t)))
        _fail(t);
      else
        x_23 = t;
      t = a_24(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_23), not_null(v_23));
    }
    return(t);
  }
  if(((l_23 != NULL) && (l_23 != t)))
    _fail(t);
  else
    l_23 = t;
  t = not_null(l_23);
  if(match_cons(t, sym__2))
    {
      m_23 = ATgetArgument(t, 0);
      n_23 = ATgetArgument(t, 1);
      t = y_23(t);
    }
  else
    {
      if(match_cons(t, sym__3))
        {
          m_23 = ATgetArgument(t, 0);
          n_23 = ATgetArgument(t, 1);
          o_23 = ATgetArgument(t, 2);
          t = z_23(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2_0 (ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
  ATerm i_24 (ATerm t)
  {
    ATerm g_24 = NULL,h_24 = NULL;
    t = not_null(e_24);
    if(((h_24 != NULL) && (h_24 != t)))
      _fail(t);
    else
      h_24 = t;
    t = not_null(f_24);
    if(((g_24 != NULL) && (g_24 != t)))
      _fail(t);
    else
      g_24 = t;
    t = not_null(g_24);
    {
      ATerm e_1 (ATerm t)
      {
        ATerm f_1 (ATerm t)
        {
          t = not_null(h_24);
          return(t);
        }
        t = SubsVar_2_0(y_102, f_1, t);
        t = z_102(t);
        return(t);
      }
      t = alltd_1_0(e_1, t);
    }
    return(t);
  }
  t = subs_args_0_0(t);
  if(((d_24 != NULL) && (d_24 != t)))
    _fail(t);
  else
    d_24 = t;
  t = not_null(d_24);
  if(match_cons(t, sym__2))
    {
      e_24 = ATgetArgument(t, 0);
      f_24 = ATgetArgument(t, 1);
      t = i_24(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm substitute_1_0 (ATerm a_103 (ATerm), ATerm t)
{
  t = substitute_2_0(a_103, _id, t);
  return(t);
}
ATerm ssubs_0_0 (ATerm t)
{
  t = substitute_1_0(IsSVar_0_0, t);
  return(t);
}
ATerm VarDec_2_0 (ATerm w_94 (ATerm), ATerm x_94 (ATerm), ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  ATerm d_25 (ATerm t)
  {
    ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,x_24 = NULL;
    ATerm f_25 (ATerm t)
    {
      ATerm y_24 = NULL,z_24 = NULL;
      ATerm g_25 (ATerm t)
      {
        ATerm a_25 = NULL,b_25 = NULL;
        t = not_null(z_24);
        if(((a_25 != NULL) && (a_25 != t)))
          _fail(t);
        else
          a_25 = t;
        t = not_null(z_24);
        {
          ATerm c_25 = NULL;
          ATerm h_25 (ATerm t)
          {
            t = not_null(c_25);
            if(((b_25 != NULL) && (b_25 != t)))
              _fail(t);
            else
              b_25 = t;
            t = not_null(c_25);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(y_24), not_null(a_25)), not_null(v_24));
          if(((c_25 != NULL) && (c_25 != t)))
            _fail(t);
          else
            c_25 = t;
          t = h_25(t);
          t = not_null(b_25);
        }
        return(t);
      }
      t = not_null(x_24);
      if(((y_24 != NULL) && (y_24 != t)))
        _fail(t);
      else
        y_24 = t;
      t = not_null(u_24);
      t = x_94(t);
      if(((z_24 != NULL) && (z_24 != t)))
        _fail(t);
      else
        z_24 = t;
      t = g_25(t);
      return(t);
    }
    t = not_null(p_24);
    if(((s_24 != NULL) && (s_24 != t)))
      _fail(t);
    else
      s_24 = t;
    t = not_null(q_24);
    if(((t_24 != NULL) && (t_24 != t)))
      _fail(t);
    else
      t_24 = t;
    t = not_null(r_24);
    if(((u_24 != NULL) && (u_24 != t)))
      _fail(t);
    else
      u_24 = t;
    t = not_null(p_24);
    {
      ATerm w_24 = NULL;
      ATerm e_25 (ATerm t)
      {
        t = not_null(w_24);
        if(((v_24 != NULL) && (v_24 != t)))
          _fail(t);
        else
          v_24 = t;
        t = not_null(w_24);
        return(t);
      }
      t = SSLgetAnnotations(not_null(s_24));
      if(((w_24 != NULL) && (w_24 != t)))
        _fail(t);
      else
        w_24 = t;
      t = e_25(t);
      t = not_null(t_24);
      t = w_94(t);
      if(((x_24 != NULL) && (x_24 != t)))
        _fail(t);
      else
        x_24 = t;
      t = f_25(t);
    }
    return(t);
  }
  if(((p_24 != NULL) && (p_24 != t)))
    _fail(t);
  else
    p_24 = t;
  t = not_null(p_24);
  if(match_cons(t, sym_VarDec_2))
    {
      q_24 = ATgetArgument(t, 0);
      r_24 = ATgetArgument(t, 1);
      t = d_25(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
  ATerm i_28 (ATerm t)
  {
    ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,g_28 = NULL;
    t = not_null(e_26);
    if(((l_26 != NULL) && (l_26 != t)))
      _fail(t);
    else
      l_26 = t;
    t = not_null(g_26);
    if(((m_26 != NULL) && (m_26 != t)))
      _fail(t);
    else
      m_26 = t;
    t = not_null(h_26);
    if(((n_26 != NULL) && (n_26 != t)))
      _fail(t);
    else
      n_26 = t;
    t = not_null(i_26);
    if(((o_26 != NULL) && (o_26 != t)))
      _fail(t);
    else
      o_26 = t;
    t = not_null(j_26);
    if(((p_26 != NULL) && (p_26 != t)))
      _fail(t);
    else
      p_26 = t;
    t = not_null(e_26);
    {
      ATerm q_11;
      q_11 = t;
      {
        ATerm v_26 = NULL;
        ATerm j_28 (ATerm t)
        {
          ATerm w_26 = NULL;
          ATerm k_28 (ATerm t)
          {
            ATerm c_27 = NULL;
            ATerm m_28 (ATerm t)
            {
              ATerm i_27 = NULL;
              ATerm o_28 (ATerm t)
              {
                ATerm f_28 = NULL;
                ATerm v_28 (ATerm t)
                {
                  t = not_null(f_28);
                  if(((u_26 != NULL) && (u_26 != t)))
                    _fail(t);
                  else
                    u_26 = t;
                  t = not_null(f_28);
                  return(t);
                }
                t = not_null(i_27);
                if(((t_26 != NULL) && (t_26 != t)))
                  _fail(t);
                else
                  t_26 = t;
                t = not_null(l_26);
                {
                  ATerm g_1 (ATerm t)
                  {
                    ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
                    ATerm p_28 (ATerm t)
                    {
                      ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,x_27 = NULL;
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
                      t = not_null(j_27);
                      {
                        ATerm r_11;
                        r_11 = t;
                        {
                          ATerm w_27 = NULL;
                          ATerm r_28 (ATerm t)
                          {
                            t = not_null(w_27);
                            if(((r_27 != NULL) && (r_27 != t)))
                              _fail(t);
                            else
                              r_27 = t;
                            t = not_null(w_27);
                            return(t);
                          }
                          t = not_null(p_27);
                          {
                            ATerm h_1 (ATerm t)
                            {
                              ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
                              ATerm q_28 (ATerm t)
                              {
                                ATerm v_27 = NULL;
                                t = not_null(t_27);
                                if(((v_27 != NULL) && (v_27 != t)))
                                  _fail(t);
                                else
                                  v_27 = t;
                                t = not_null(v_27);
                                return(t);
                              }
                              if(((s_27 != NULL) && (s_27 != t)))
                                _fail(t);
                              else
                                s_27 = t;
                              t = not_null(s_27);
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  t_27 = ATgetArgument(t, 0);
                                  u_27 = ATgetArgument(t, 1);
                                  t = q_28(t);
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = map_1_0(h_1, t);
                            if(((w_27 != NULL) && (w_27 != t)))
                              _fail(t);
                            else
                              w_27 = t;
                            t = r_28(t);
                          }
                        }
                        t = r_11;
                        {
                          ATerm y_27 = NULL,e_28 = NULL;
                          ATerm u_28 (ATerm t)
                          {
                            t = not_null(e_28);
                            if(((x_27 != NULL) && (x_27 != t)))
                              _fail(t);
                            else
                              x_27 = t;
                            t = not_null(e_28);
                            return(t);
                          }
                          ATerm d_28 = NULL;
                          ATerm t_28 (ATerm t)
                          {
                            t = not_null(d_28);
                            if(((y_27 != NULL) && (y_27 != t)))
                              _fail(t);
                            else
                              y_27 = t;
                            t = not_null(d_28);
                            return(t);
                          }
                          t = not_null(o_27);
                          {
                            ATerm i_1 (ATerm t)
                            {
                              ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
                              ATerm s_28 (ATerm t)
                              {
                                ATerm c_28 = NULL;
                                t = not_null(a_28);
                                if(((c_28 != NULL) && (c_28 != t)))
                                  _fail(t);
                                else
                                  c_28 = t;
                                t = not_null(c_28);
                                return(t);
                              }
                              if(((z_27 != NULL) && (z_27 != t)))
                                _fail(t);
                              else
                                z_27 = t;
                              t = not_null(z_27);
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  a_28 = ATgetArgument(t, 0);
                                  b_28 = ATgetArgument(t, 1);
                                  t = s_28(t);
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = map_1_0(i_1, t);
                            if(((d_28 != NULL) && (d_28 != t)))
                              _fail(t);
                            else
                              d_28 = t;
                            t = t_28(t);
                          }
                          t = (ATerm) ATmakeAppl(sym__3, not_null(y_27), not_null(s_26), not_null(q_27));
                          t = ssubs_0_0(t);
                          if(((e_28 != NULL) && (e_28 != t)))
                            _fail(t);
                          else
                            e_28 = t;
                          t = u_28(t);
                          t = (ATerm) ATmakeAppl(sym__3, not_null(r_27), not_null(t_26), not_null(x_27));
                          t = tsubs_0_0(t);
                        }
                      }
                      return(t);
                    }
                    if(((j_27 != NULL) && (j_27 != t)))
                      _fail(t);
                    else
                      j_27 = t;
                    t = not_null(j_27);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        k_27 = ATgetArgument(t, 0);
                        l_27 = ATgetArgument(t, 1);
                        m_27 = ATgetArgument(t, 2);
                        n_27 = ATgetArgument(t, 3);
                        t = p_28(t);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = map_1_0(g_1, t);
                  if(((f_28 != NULL) && (f_28 != t)))
                    _fail(t);
                  else
                    f_28 = t;
                  t = v_28(t);
                }
                return(t);
              }
              t = not_null(c_27);
              if(((s_26 != NULL) && (s_26 != t)))
                _fail(t);
              else
                s_26 = t;
              t = not_null(r_26);
              {
                ATerm j_1 (ATerm t)
                {
                  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
                  ATerm n_28 (ATerm t)
                  {
                    ATerm g_27 = NULL,h_27 = NULL;
                    t = not_null(e_27);
                    if(((g_27 != NULL) && (g_27 != t)))
                      _fail(t);
                    else
                      g_27 = t;
                    t = not_null(f_27);
                    if(((h_27 != NULL) && (h_27 != t)))
                      _fail(t);
                    else
                      h_27 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_27));
                    return(t);
                  }
                  if(((d_27 != NULL) && (d_27 != t)))
                    _fail(t);
                  else
                    d_27 = t;
                  t = not_null(d_27);
                  if(match_cons(t, sym_VarDec_2))
                    {
                      e_27 = ATgetArgument(t, 0);
                      f_27 = ATgetArgument(t, 1);
                      t = n_28(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = map_1_0(j_1, t);
                if(((i_27 != NULL) && (i_27 != t)))
                  _fail(t);
                else
                  i_27 = t;
                t = o_28(t);
              }
              return(t);
            }
            t = not_null(w_26);
            if(((r_26 != NULL) && (r_26 != t)))
              _fail(t);
            else
              r_26 = t;
            t = not_null(q_26);
            {
              ATerm k_1 (ATerm t)
              {
                ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
                ATerm l_28 (ATerm t)
                {
                  ATerm a_27 = NULL,b_27 = NULL;
                  t = not_null(y_26);
                  if(((a_27 != NULL) && (a_27 != t)))
                    _fail(t);
                  else
                    a_27 = t;
                  t = not_null(z_26);
                  if(((b_27 != NULL) && (b_27 != t)))
                    _fail(t);
                  else
                    b_27 = t;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_27)), (ATerm)ATempty, (ATerm) ATempty);
                  return(t);
                }
                if(((x_26 != NULL) && (x_26 != t)))
                  _fail(t);
                else
                  x_26 = t;
                t = not_null(x_26);
                if(match_cons(t, sym_VarDec_2))
                  {
                    y_26 = ATgetArgument(t, 0);
                    z_26 = ATgetArgument(t, 1);
                    t = l_28(t);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1_0(k_1, t);
              if(((c_27 != NULL) && (c_27 != t)))
                _fail(t);
              else
                c_27 = t;
              t = m_28(t);
            }
            return(t);
          }
          t = not_null(v_26);
          if(((q_26 != NULL) && (q_26 != t)))
            _fail(t);
          else
            q_26 = t;
          t = not_null(o_26);
          {
            ATerm l_1 (ATerm t)
            {
              t = VarDec_2_0(new_0_0, _id, t);
              return(t);
            }
            t = map_1_0(l_1, t);
            if(((w_26 != NULL) && (w_26 != t)))
              _fail(t);
            else
              w_26 = t;
            t = k_28(t);
          }
          return(t);
        }
        t = not_null(n_26);
        {
          ATerm m_1 (ATerm t)
          {
            t = VarDec_2_0(new_0_0, _id, t);
            return(t);
          }
          t = map_1_0(m_1, t);
          if(((v_26 != NULL) && (v_26 != t)))
            _fail(t);
          else
            v_26 = t;
          t = j_28(t);
        }
      }
      t = q_11;
      {
        ATerm h_28 = NULL;
        ATerm w_28 (ATerm t)
        {
          t = not_null(h_28);
          if(((g_28 != NULL) && (g_28 != t)))
            _fail(t);
          else
            g_28 = t;
          t = not_null(h_28);
          return(t);
        }
        t = not_null(u_26);
        t = choices_0_0(t);
        if(((h_28 != NULL) && (h_28 != t)))
          _fail(t);
        else
          h_28 = t;
        t = w_28(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(m_26), not_null(q_26), not_null(r_26), not_null(g_28));
      }
    }
    return(t);
  }
  if(((e_26 != NULL) && (e_26 != t)))
    _fail(t);
  else
    e_26 = t;
  t = not_null(e_26);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_26 = ATgetFirst((ATermList) t);
      k_26 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(f_26);
      if(match_cons(t, sym_SDefT_4))
        {
          g_26 = ATgetArgument(t, 0);
          h_26 = ATgetArgument(t, 1);
          i_26 = ATgetArgument(t, 2);
          j_26 = ATgetArgument(t, 3);
          t = i_28(t);
        }
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
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
  ATerm e_29 (ATerm t)
  {
    ATerm d_29 = NULL;
    t = not_null(b_29);
    if(((d_29 != NULL) && (d_29 != t)))
      _fail(t);
    else
      d_29 = t;
    t = not_null(d_29);
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
      c_29 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(c_29);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = e_29(t);
        }
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
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0_0(t);
      ;
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      t = JoinDefs2_0_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0_0 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
  ATerm t_29 (ATerm t)
  {
    ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL;
    t = not_null(l_29);
    if(((o_29 != NULL) && (o_29 != t)))
      _fail(t);
    else
      o_29 = t;
    t = not_null(m_29);
    if(((p_29 != NULL) && (p_29 != t)))
      _fail(t);
    else
      p_29 = t;
    t = not_null(n_29);
    if(((q_29 != NULL) && (q_29 != t)))
      _fail(t);
    else
      q_29 = t;
    t = not_null(j_29);
    {
      ATerm s_29 = NULL;
      ATerm u_29 (ATerm t)
      {
        t = not_null(s_29);
        if(((r_29 != NULL) && (r_29 != t)))
          _fail(t);
        else
          r_29 = t;
        t = not_null(s_29);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_29), not_null(p_29));
      t = Definitions_0_0(t);
      if(((s_29 != NULL) && (s_29 != t)))
        _fail(t);
      else
        s_29 = t;
      t = u_29(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_29), not_null(q_29));
    }
    return(t);
  }
  if(((j_29 != NULL) && (j_29 != t)))
    _fail(t);
  else
    j_29 = t;
  t = not_null(j_29);
  if(match_cons(t, sym__2))
    {
      k_29 = ATgetArgument(t, 0);
      n_29 = ATgetArgument(t, 1);
      t = not_null(k_29);
      if(match_cons(t, sym__2))
        {
          l_29 = ATgetArgument(t, 0);
          m_29 = ATgetArgument(t, 1);
          t = t_29(t);
        }
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
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
  ATerm v_31 (ATerm t)
  {
    ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL;
    t = not_null(o_30);
    if(((p_30 != NULL) && (p_30 != t)))
      _fail(t);
    else
      p_30 = t;
    t = not_null(m_30);
    if(((q_30 != NULL) && (q_30 != t)))
      _fail(t);
    else
      q_30 = t;
    t = not_null(n_30);
    {
      ATerm v_30 = NULL;
      ATerm y_31 (ATerm t)
      {
        ATerm w_30 = NULL;
        ATerm z_31 (ATerm t)
        {
          ATerm x_30 = NULL;
          ATerm a_32 (ATerm t)
          {
            ATerm y_30 = NULL;
            ATerm b_32 (ATerm t)
            {
              t = not_null(y_30);
              if(((u_30 != NULL) && (u_30 != t)))
                _fail(t);
              else
                u_30 = t;
              t = not_null(y_30);
              return(t);
            }
            t = not_null(x_30);
            if(((t_30 != NULL) && (t_30 != t)))
              _fail(t);
            else
              t_30 = t;
            t = not_null(x_30);
            t = new_0_0(t);
            if(((y_30 != NULL) && (y_30 != t)))
              _fail(t);
            else
              y_30 = t;
            t = b_32(t);
            return(t);
          }
          t = not_null(w_30);
          if(((s_30 != NULL) && (s_30 != t)))
            _fail(t);
          else
            s_30 = t;
          t = not_null(w_30);
          t = new_0_0(t);
          if(((x_30 != NULL) && (x_30 != t)))
            _fail(t);
          else
            x_30 = t;
          t = a_32(t);
          return(t);
        }
        t = not_null(v_30);
        if(((r_30 != NULL) && (r_30 != t)))
          _fail(t);
        else
          r_30 = t;
        t = not_null(v_30);
        t = new_0_0(t);
        if(((w_30 != NULL) && (w_30 != t)))
          _fail(t);
        else
          w_30 = t;
        t = z_31(t);
        return(t);
      }
      t = new_0_0(t);
      if(((v_30 != NULL) && (v_30 != t)))
        _fail(t);
      else
        v_30 = t;
      t = y_31(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_30)), not_null(t_30)), not_null(s_30)), not_null(r_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_30)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(p_30), (ATerm)ATmakeAppl(sym_Var_1, not_null(r_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_30))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(q_30), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_30))))), (ATerm) ATmakeAppl(sym_PrimT_3, term_x_12, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_30))), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_30)))))));
    }
    return(t);
  }
  ATerm w_31 (ATerm t)
  {
    ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL;
    t = not_null(o_30);
    if(((z_30 != NULL) && (z_30 != t)))
      _fail(t);
    else
      z_30 = t;
    t = not_null(n_30);
    {
      ATerm e_31 = NULL;
      ATerm c_32 (ATerm t)
      {
        ATerm i_31 = NULL;
        ATerm e_32 (ATerm t)
        {
          t = not_null(i_31);
          if(((d_31 != NULL) && (d_31 != t)))
            _fail(t);
          else
            d_31 = t;
          t = not_null(i_31);
          return(t);
        }
        t = not_null(e_31);
        if(((c_31 != NULL) && (c_31 != t)))
          _fail(t);
        else
          c_31 = t;
        t = not_null(z_30);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
            ATerm d_32 (ATerm t)
            {
              t = not_null(g_31);
              if(((a_31 != NULL) && (a_31 != t)))
                _fail(t);
              else
                a_31 = t;
              t = not_null(h_31);
              if(((b_31 != NULL) && (b_31 != t)))
                _fail(t);
              else
                b_31 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_31));
              return(t);
            }
            if(((f_31 != NULL) && (f_31 != t)))
              _fail(t);
            else
              f_31 = t;
            t = not_null(f_31);
            if(match_cons(t, sym_Explode_2))
              {
                g_31 = ATgetArgument(t, 0);
                h_31 = ATgetArgument(t, 1);
                t = d_32(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(n_1, t);
          if(((i_31 != NULL) && (i_31 != t)))
            _fail(t);
          else
            i_31 = t;
          t = e_32(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((e_31 != NULL) && (e_31 != t)))
        _fail(t);
      else
        e_31 = t;
      t = c_32(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_x_12, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_31)), not_null(a_31))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_31))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_31)))));
    }
    return(t);
  }
  ATerm x_31 (ATerm t)
  {
    ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
    t = not_null(o_30);
    if(((j_31 != NULL) && (j_31 != t)))
      _fail(t);
    else
      j_31 = t;
    t = not_null(n_30);
    {
      ATerm p_31 = NULL;
      ATerm f_32 (ATerm t)
      {
        ATerm q_31 = NULL;
        ATerm g_32 (ATerm t)
        {
          ATerm u_31 = NULL;
          ATerm i_32 (ATerm t)
          {
            t = not_null(u_31);
            if(((o_31 != NULL) && (o_31 != t)))
              _fail(t);
            else
              o_31 = t;
            t = not_null(u_31);
            return(t);
          }
          t = not_null(q_31);
          if(((n_31 != NULL) && (n_31 != t)))
            _fail(t);
          else
            n_31 = t;
          t = not_null(j_31);
          {
            ATerm o_1 (ATerm t)
            {
              ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
              ATerm h_32 (ATerm t)
              {
                t = not_null(s_31);
                if(((k_31 != NULL) && (k_31 != t)))
                  _fail(t);
                else
                  k_31 = t;
                t = not_null(t_31);
                if(((l_31 != NULL) && (l_31 != t)))
                  _fail(t);
                else
                  l_31 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_31));
                return(t);
              }
              if(((r_31 != NULL) && (r_31 != t)))
                _fail(t);
              else
                r_31 = t;
              t = not_null(r_31);
              if(match_cons(t, sym_Explode_2))
                {
                  s_31 = ATgetArgument(t, 0);
                  t_31 = ATgetArgument(t, 1);
                  t = h_32(t);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = oncetd_1_0(o_1, t);
            if(((u_31 != NULL) && (u_31 != t)))
              _fail(t);
            else
              u_31 = t;
            t = i_32(t);
          }
          return(t);
        }
        t = not_null(p_31);
        if(((m_31 != NULL) && (m_31 != t)))
          _fail(t);
        else
          m_31 = t;
        t = not_null(p_31);
        t = new_0_0(t);
        if(((q_31 != NULL) && (q_31 != t)))
          _fail(t);
        else
          q_31 = t;
        t = g_32(t);
        return(t);
      }
      t = new_0_0(t);
      if(((p_31 != NULL) && (p_31 != t)))
        _fail(t);
      else
        p_31 = t;
      t = f_32(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_31)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_31))), (ATerm) ATmakeAppl(sym_PrimT_3, term_y_12, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_31)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_31)), (ATerm) ATmakeAppl(sym_Op_2, term_z_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_31)), not_null(k_31)))))));
    }
    return(t);
  }
  if(((n_30 != NULL) && (n_30 != t)))
    _fail(t);
  else
    n_30 = t;
  t = not_null(n_30);
  if(match_cons(t, sym_ExplodeCong_2))
    {
      o_30 = ATgetArgument(t, 0);
      m_30 = ATgetArgument(t, 1);
      t = v_31(t);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          o_30 = ATgetArgument(t, 0);
          t = w_31(t);
        }
      else
        {
          if(match_cons(t, sym_Match_1))
            {
              o_30 = ATgetArgument(t, 0);
              t = x_31(t);
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
  ATerm z_32 = NULL,a_33 = NULL;
  ATerm d_34 (ATerm t)
  {
    ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL;
    t = not_null(a_33);
    if(((b_33 != NULL) && (b_33 != t)))
      _fail(t);
    else
      b_33 = t;
    t = not_null(z_32);
    {
      ATerm g_33 = NULL;
      ATerm g_34 (ATerm t)
      {
        ATerm k_33 = NULL;
        ATerm i_34 (ATerm t)
        {
          t = not_null(k_33);
          if(((f_33 != NULL) && (f_33 != t)))
            _fail(t);
          else
            f_33 = t;
          t = not_null(k_33);
          return(t);
        }
        t = not_null(g_33);
        if(((e_33 != NULL) && (e_33 != t)))
          _fail(t);
        else
          e_33 = t;
        t = not_null(b_33);
        {
          ATerm p_1 (ATerm t)
          {
            ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
            ATerm h_34 (ATerm t)
            {
              t = not_null(i_33);
              if(((c_33 != NULL) && (c_33 != t)))
                _fail(t);
              else
                c_33 = t;
              t = not_null(j_33);
              if(((d_33 != NULL) && (d_33 != t)))
                _fail(t);
              else
                d_33 = t;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_33)), not_null(c_33));
              return(t);
            }
            if(((h_33 != NULL) && (h_33 != t)))
              _fail(t);
            else
              h_33 = t;
            t = not_null(h_33);
            if(match_cons(t, sym_Anno_2))
              {
                i_33 = ATgetArgument(t, 0);
                j_33 = ATgetArgument(t, 1);
                t = h_34(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(p_1, t);
          if(((k_33 != NULL) && (k_33 != t)))
            _fail(t);
          else
            k_33 = t;
          t = i_34(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((g_33 != NULL) && (g_33 != t)))
        _fail(t);
      else
        g_33 = t;
      t = g_34(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_33)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_a_13, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_33)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(d_33))))));
    }
    return(t);
  }
  ATerm e_34 (ATerm t)
  {
    ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL;
    t = not_null(a_33);
    if(((l_33 != NULL) && (l_33 != t)))
      _fail(t);
    else
      l_33 = t;
    t = not_null(z_32);
    {
      ATerm p_33 = NULL;
      ATerm j_34 (ATerm t)
      {
        ATerm s_33 = NULL;
        ATerm l_34 (ATerm t)
        {
          t = not_null(s_33);
          if(((o_33 != NULL) && (o_33 != t)))
            _fail(t);
          else
            o_33 = t;
          t = not_null(s_33);
          return(t);
        }
        t = not_null(p_33);
        if(((n_33 != NULL) && (n_33 != t)))
          _fail(t);
        else
          n_33 = t;
        t = not_null(l_33);
        {
          ATerm q_1 (ATerm t)
          {
            ATerm q_33 = NULL,r_33 = NULL;
            ATerm k_34 (ATerm t)
            {
              t = not_null(r_33);
              if(((m_33 != NULL) && (m_33 != t)))
                _fail(t);
              else
                m_33 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_33));
              return(t);
            }
            if(((q_33 != NULL) && (q_33 != t)))
              _fail(t);
            else
              q_33 = t;
            t = not_null(q_33);
            if(match_cons(t, sym_RootApp_1))
              {
                r_33 = ATgetArgument(t, 0);
                t = k_34(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(q_1, t);
          if(((s_33 != NULL) && (s_33 != t)))
            _fail(t);
          else
            s_33 = t;
          t = l_34(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((p_33 != NULL) && (p_33 != t)))
        _fail(t);
      else
        p_33 = t;
      t = j_34(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_33))), not_null(m_33))));
    }
    return(t);
  }
  ATerm f_34 (ATerm t)
  {
    ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL;
    t = not_null(a_33);
    if(((t_33 != NULL) && (t_33 != t)))
      _fail(t);
    else
      t_33 = t;
    t = not_null(z_32);
    {
      ATerm y_33 = NULL;
      ATerm m_34 (ATerm t)
      {
        ATerm c_34 = NULL;
        ATerm o_34 (ATerm t)
        {
          t = not_null(c_34);
          if(((x_33 != NULL) && (x_33 != t)))
            _fail(t);
          else
            x_33 = t;
          t = not_null(c_34);
          return(t);
        }
        t = not_null(y_33);
        if(((w_33 != NULL) && (w_33 != t)))
          _fail(t);
        else
          w_33 = t;
        t = not_null(t_33);
        {
          ATerm r_1 (ATerm t)
          {
            ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
            ATerm n_34 (ATerm t)
            {
              t = not_null(a_34);
              if(((v_33 != NULL) && (v_33 != t)))
                _fail(t);
              else
                v_33 = t;
              t = not_null(b_34);
              if(((u_33 != NULL) && (u_33 != t)))
                _fail(t);
              else
                u_33 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_33));
              return(t);
            }
            if(((z_33 != NULL) && (z_33 != t)))
              _fail(t);
            else
              z_33 = t;
            t = not_null(z_33);
            if(match_cons(t, sym_App_2))
              {
                a_34 = ATgetArgument(t, 0);
                b_34 = ATgetArgument(t, 1);
                t = n_34(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(r_1, t);
          if(((c_34 != NULL) && (c_34 != t)))
            _fail(t);
          else
            c_34 = t;
          t = o_34(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((y_33 != NULL) && (y_33 != t)))
        _fail(t);
      else
        y_33 = t;
      t = m_34(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_33))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_33)), not_null(v_33)))));
    }
    return(t);
  }
  if(((z_32 != NULL) && (z_32 != t)))
    _fail(t);
  else
    z_32 = t;
  t = not_null(z_32);
  if(match_cons(t, sym_Match_1))
    {
      a_33 = ATgetArgument(t, 0);
      {
        ATerm b_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_34(t);
            ;
            LocalPopChoice(a_14);
          }
        else
          {
            t = b_13;
            {
              ATerm b_14 = t;
              int c_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_34(t);
                  ;
                  LocalPopChoice(c_14);
                }
              else
                {
                  t = b_14;
                  t = f_34(t);
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
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
  ATerm a_35 (ATerm t)
  {
    ATerm x_34 = NULL;
    t = not_null(v_34);
    if(((x_34 != NULL) && (x_34 != t)))
      _fail(t);
    else
      x_34 = t;
    t = not_null(x_34);
    return(t);
  }
  ATerm b_35 (ATerm t)
  {
    ATerm y_34 = NULL,z_34 = NULL;
    t = not_null(v_34);
    if(((y_34 != NULL) && (y_34 != t)))
      _fail(t);
    else
      y_34 = t;
    t = not_null(w_34);
    if(((z_34 != NULL) && (z_34 != t)))
      _fail(t);
    else
      z_34 = t;
    t = (ATerm) ATmakeAppl(sym_BA_2, not_null(y_34), not_null(z_34));
    return(t);
  }
  if(((t_34 != NULL) && (t_34 != t)))
    _fail(t);
  else
    t_34 = t;
  t = not_null(t_34);
  if(match_cons(t, sym_Match_1))
    {
      u_34 = ATgetArgument(t, 0);
      t = not_null(u_34);
      if(match_cons(t, sym_RootApp_1))
        {
          v_34 = ATgetArgument(t, 0);
          t = a_35(t);
        }
      else
        {
          if(match_cons(t, sym_App_2))
            {
              v_34 = ATgetArgument(t, 0);
              w_34 = ATgetArgument(t, 1);
              t = b_35(t);
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
  ATerm i_35 = NULL,j_35 = NULL;
  ATerm r_35 (ATerm t)
  {
    ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL;
    t = not_null(j_35);
    if(((k_35 != NULL) && (k_35 != t)))
      _fail(t);
    else
      k_35 = t;
    t = not_null(i_35);
    {
      ATerm q_35 = NULL;
      ATerm t_35 (ATerm t)
      {
        t = not_null(q_35);
        if(((m_35 != NULL) && (m_35 != t)))
          _fail(t);
        else
          m_35 = t;
        t = not_null(q_35);
        return(t);
      }
      t = not_null(k_35);
      {
        ATerm s_1 (ATerm t)
        {
          ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
          ATerm s_35 (ATerm t)
          {
            t = not_null(p_35);
            if(((l_35 != NULL) && (l_35 != t)))
              _fail(t);
            else
              l_35 = t;
            t = not_null(l_35);
            return(t);
          }
          if(((n_35 != NULL) && (n_35 != t)))
            _fail(t);
          else
            n_35 = t;
          t = not_null(n_35);
          if(match_cons(t, sym_RootApp_1))
            {
              o_35 = ATgetArgument(t, 0);
              t = not_null(o_35);
              if(match_cons(t, sym_Match_1))
                {
                  p_35 = ATgetArgument(t, 0);
                  t = s_35(t);
                }
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
        t = pat_td_1_0(s_1, t);
        if(((q_35 != NULL) && (q_35 != t)))
          _fail(t);
        else
          q_35 = t;
        t = t_35(t);
      }
      t = (ATerm) ATmakeAppl(sym_Match_1, not_null(m_35));
    }
    return(t);
  }
  if(((i_35 != NULL) && (i_35 != t)))
    _fail(t);
  else
    i_35 = t;
  t = not_null(i_35);
  if(match_cons(t, sym_Match_1))
    {
      j_35 = ATgetArgument(t, 0);
      t = r_35(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Mapp_0_0 (ATerm t)
{
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0_0(t);
      ;
      LocalPopChoice(e_14);
    }
  else
    {
      t = d_14;
      {
        ATerm f_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0_0(t);
            ;
            LocalPopChoice(z_14);
          }
        else
          {
            t = f_14;
            t = Mapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm k_36 = NULL,p_36 = NULL;
  ATerm k_38 (ATerm t)
  {
    ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL;
    t = not_null(p_36);
    if(((q_36 != NULL) && (q_36 != t)))
      _fail(t);
    else
      q_36 = t;
    t = not_null(k_36);
    {
      ATerm v_36 = NULL;
      ATerm p_38 (ATerm t)
      {
        ATerm z_36 = NULL;
        ATerm a_39 (ATerm t)
        {
          t = not_null(z_36);
          if(((u_36 != NULL) && (u_36 != t)))
            _fail(t);
          else
            u_36 = t;
          t = not_null(z_36);
          return(t);
        }
        t = not_null(v_36);
        if(((t_36 != NULL) && (t_36 != t)))
          _fail(t);
        else
          t_36 = t;
        t = not_null(q_36);
        {
          ATerm t_1 (ATerm t)
          {
            ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL;
            ATerm y_38 (ATerm t)
            {
              t = not_null(x_36);
              if(((r_36 != NULL) && (r_36 != t)))
                _fail(t);
              else
                r_36 = t;
              t = not_null(y_36);
              if(((s_36 != NULL) && (s_36 != t)))
                _fail(t);
              else
                s_36 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_36));
              return(t);
            }
            if(((w_36 != NULL) && (w_36 != t)))
              _fail(t);
            else
              w_36 = t;
            t = not_null(w_36);
            if(match_cons(t, sym_Anno_2))
              {
                x_36 = ATgetArgument(t, 0);
                y_36 = ATgetArgument(t, 1);
                t = y_38(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(t_1, t);
          if(((z_36 != NULL) && (z_36 != t)))
            _fail(t);
          else
            z_36 = t;
          t = a_39(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((v_36 != NULL) && (v_36 != t)))
        _fail(t);
      else
        v_36 = t;
      t = p_38(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_a_15, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_36)), not_null(r_36))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_36))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_36))));
    }
    return(t);
  }
  ATerm l_38 (ATerm t)
  {
    ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL;
    t = not_null(p_36);
    if(((a_37 != NULL) && (a_37 != t)))
      _fail(t);
    else
      a_37 = t;
    t = not_null(k_36);
    {
      ATerm e_37 = NULL;
      ATerm b_39 (ATerm t)
      {
        ATerm s_37 = NULL;
        ATerm d_39 (ATerm t)
        {
          t = not_null(s_37);
          if(((d_37 != NULL) && (d_37 != t)))
            _fail(t);
          else
            d_37 = t;
          t = not_null(s_37);
          return(t);
        }
        t = not_null(e_37);
        if(((c_37 != NULL) && (c_37 != t)))
          _fail(t);
        else
          c_37 = t;
        t = not_null(a_37);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm f_37 = NULL,n_37 = NULL;
            ATerm c_39 (ATerm t)
            {
              t = not_null(n_37);
              if(((b_37 != NULL) && (b_37 != t)))
                _fail(t);
              else
                b_37 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_37));
              return(t);
            }
            if(((f_37 != NULL) && (f_37 != t)))
              _fail(t);
            else
              f_37 = t;
            t = not_null(f_37);
            if(match_cons(t, sym_RootApp_1))
              {
                n_37 = ATgetArgument(t, 0);
                t = c_39(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(u_1, t);
          if(((s_37 != NULL) && (s_37 != t)))
            _fail(t);
          else
            s_37 = t;
          t = d_39(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((e_37 != NULL) && (e_37 != t)))
        _fail(t);
      else
        e_37 = t;
      t = b_39(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_37)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_37), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_37))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_37))));
    }
    return(t);
  }
  ATerm o_38 (ATerm t)
  {
    ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL,a_38 = NULL,b_38 = NULL;
    t = not_null(p_36);
    if(((t_37 != NULL) && (t_37 != t)))
      _fail(t);
    else
      t_37 = t;
    t = not_null(k_36);
    {
      ATerm c_38 = NULL;
      ATerm e_39 (ATerm t)
      {
        ATerm j_38 = NULL;
        ATerm g_39 (ATerm t)
        {
          t = not_null(j_38);
          if(((b_38 != NULL) && (b_38 != t)))
            _fail(t);
          else
            b_38 = t;
          t = not_null(j_38);
          return(t);
        }
        t = not_null(c_38);
        if(((a_38 != NULL) && (a_38 != t)))
          _fail(t);
        else
          a_38 = t;
        t = not_null(t_37);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
            ATerm f_39 (ATerm t)
            {
              t = not_null(e_38);
              if(((u_37 != NULL) && (u_37 != t)))
                _fail(t);
              else
                u_37 = t;
              t = not_null(f_38);
              if(((v_37 != NULL) && (v_37 != t)))
                _fail(t);
              else
                v_37 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_38));
              return(t);
            }
            if(((d_38 != NULL) && (d_38 != t)))
              _fail(t);
            else
              d_38 = t;
            t = not_null(d_38);
            if(match_cons(t, sym_App_2))
              {
                e_38 = ATgetArgument(t, 0);
                f_38 = ATgetArgument(t, 1);
                t = f_39(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(v_1, t);
          if(((j_38 != NULL) && (j_38 != t)))
            _fail(t);
          else
            j_38 = t;
          t = g_39(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((c_38 != NULL) && (c_38 != t)))
        _fail(t);
      else
        c_38 = t;
      t = e_39(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(u_37), not_null(v_37), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_38)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_38))));
    }
    return(t);
  }
  if(((k_36 != NULL) && (k_36 != t)))
    _fail(t);
  else
    k_36 = t;
  t = not_null(k_36);
  if(match_cons(t, sym_Build_1))
    {
      p_36 = ATgetArgument(t, 0);
      {
        ATerm l_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_38(t);
            ;
            LocalPopChoice(m_15);
          }
        else
          {
            t = l_15;
            {
              ATerm x_15 = t;
              int y_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_38(t);
                  ;
                  LocalPopChoice(y_15);
                }
              else
                {
                  t = x_15;
                  t = o_38(t);
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
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL,t_39 = NULL;
  ATerm x_39 (ATerm t)
  {
    ATerm u_39 = NULL;
    t = not_null(n_39);
    if(((u_39 != NULL) && (u_39 != t)))
      _fail(t);
    else
      u_39 = t;
    t = not_null(u_39);
    return(t);
  }
  ATerm y_39 (ATerm t)
  {
    ATerm v_39 = NULL,w_39 = NULL;
    t = not_null(n_39);
    if(((w_39 != NULL) && (w_39 != t)))
      _fail(t);
    else
      w_39 = t;
    t = not_null(t_39);
    if(((v_39 != NULL) && (v_39 != t)))
      _fail(t);
    else
      v_39 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_39)), not_null(w_39));
    return(t);
  }
  if(((l_39 != NULL) && (l_39 != t)))
    _fail(t);
  else
    l_39 = t;
  t = not_null(l_39);
  if(match_cons(t, sym_Build_1))
    {
      m_39 = ATgetArgument(t, 0);
      t = not_null(m_39);
      if(match_cons(t, sym_RootApp_1))
        {
          n_39 = ATgetArgument(t, 0);
          t = x_39(t);
        }
      else
        {
          if(match_cons(t, sym_App_2))
            {
              n_39 = ATgetArgument(t, 0);
              t_39 = ATgetArgument(t, 1);
              t = y_39(t);
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
ATerm As_2_0 (ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL;
  ATerm v_40 (ATerm t)
  {
    ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,p_40 = NULL;
    ATerm x_40 (ATerm t)
    {
      ATerm q_40 = NULL,r_40 = NULL;
      ATerm y_40 (ATerm t)
      {
        ATerm s_40 = NULL,t_40 = NULL;
        t = not_null(r_40);
        if(((s_40 != NULL) && (s_40 != t)))
          _fail(t);
        else
          s_40 = t;
        t = not_null(r_40);
        {
          ATerm u_40 = NULL;
          ATerm z_40 (ATerm t)
          {
            t = not_null(u_40);
            if(((t_40 != NULL) && (t_40 != t)))
              _fail(t);
            else
              t_40 = t;
            t = not_null(u_40);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(q_40), not_null(s_40)), not_null(n_40));
          if(((u_40 != NULL) && (u_40 != t)))
            _fail(t);
          else
            u_40 = t;
          t = z_40(t);
          t = not_null(t_40);
        }
        return(t);
      }
      t = not_null(p_40);
      if(((q_40 != NULL) && (q_40 != t)))
        _fail(t);
      else
        q_40 = t;
      t = not_null(m_40);
      t = t_89(t);
      if(((r_40 != NULL) && (r_40 != t)))
        _fail(t);
      else
        r_40 = t;
      t = y_40(t);
      return(t);
    }
    t = not_null(h_40);
    if(((k_40 != NULL) && (k_40 != t)))
      _fail(t);
    else
      k_40 = t;
    t = not_null(i_40);
    if(((l_40 != NULL) && (l_40 != t)))
      _fail(t);
    else
      l_40 = t;
    t = not_null(j_40);
    if(((m_40 != NULL) && (m_40 != t)))
      _fail(t);
    else
      m_40 = t;
    t = not_null(h_40);
    {
      ATerm o_40 = NULL;
      ATerm w_40 (ATerm t)
      {
        t = not_null(o_40);
        if(((n_40 != NULL) && (n_40 != t)))
          _fail(t);
        else
          n_40 = t;
        t = not_null(o_40);
        return(t);
      }
      t = SSLgetAnnotations(not_null(k_40));
      if(((o_40 != NULL) && (o_40 != t)))
        _fail(t);
      else
        o_40 = t;
      t = w_40(t);
      t = not_null(l_40);
      t = s_89(t);
      if(((p_40 != NULL) && (p_40 != t)))
        _fail(t);
      else
        p_40 = t;
      t = x_40(t);
    }
    return(t);
  }
  if(((h_40 != NULL) && (h_40 != t)))
    _fail(t);
  else
    h_40 = t;
  t = not_null(h_40);
  if(match_cons(t, sym_As_2))
    {
      i_40 = ATgetArgument(t, 0);
      j_40 = ATgetArgument(t, 1);
      t = v_40(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm PrimT_3_0 (ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL;
  ATerm d_42 (ATerm t)
  {
    ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,r_41 = NULL;
    ATerm n_42 (ATerm t)
    {
      ATerm s_41 = NULL,t_41 = NULL;
      ATerm o_42 (ATerm t)
      {
        ATerm u_41 = NULL,z_41 = NULL;
        ATerm p_42 (ATerm t)
        {
          ATerm a_42 = NULL,b_42 = NULL;
          t = not_null(z_41);
          if(((a_42 != NULL) && (a_42 != t)))
            _fail(t);
          else
            a_42 = t;
          t = not_null(z_41);
          {
            ATerm c_42 = NULL;
            ATerm q_42 (ATerm t)
            {
              t = not_null(c_42);
              if(((b_42 != NULL) && (b_42 != t)))
                _fail(t);
              else
                b_42 = t;
              t = not_null(c_42);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(s_41), not_null(u_41), not_null(a_42)), not_null(p_41));
            if(((c_42 != NULL) && (c_42 != t)))
              _fail(t);
            else
              c_42 = t;
            t = q_42(t);
            t = not_null(b_42);
          }
          return(t);
        }
        t = not_null(t_41);
        if(((u_41 != NULL) && (u_41 != t)))
          _fail(t);
        else
          u_41 = t;
        t = not_null(o_41);
        t = t_93(t);
        if(((z_41 != NULL) && (z_41 != t)))
          _fail(t);
        else
          z_41 = t;
        t = p_42(t);
        return(t);
      }
      t = not_null(r_41);
      if(((s_41 != NULL) && (s_41 != t)))
        _fail(t);
      else
        s_41 = t;
      t = not_null(n_41);
      t = s_93(t);
      if(((t_41 != NULL) && (t_41 != t)))
        _fail(t);
      else
        t_41 = t;
      t = o_42(t);
      return(t);
    }
    t = not_null(h_41);
    if(((l_41 != NULL) && (l_41 != t)))
      _fail(t);
    else
      l_41 = t;
    t = not_null(i_41);
    if(((m_41 != NULL) && (m_41 != t)))
      _fail(t);
    else
      m_41 = t;
    t = not_null(j_41);
    if(((n_41 != NULL) && (n_41 != t)))
      _fail(t);
    else
      n_41 = t;
    t = not_null(k_41);
    if(((o_41 != NULL) && (o_41 != t)))
      _fail(t);
    else
      o_41 = t;
    t = not_null(h_41);
    {
      ATerm q_41 = NULL;
      ATerm e_42 (ATerm t)
      {
        t = not_null(q_41);
        if(((p_41 != NULL) && (p_41 != t)))
          _fail(t);
        else
          p_41 = t;
        t = not_null(q_41);
        return(t);
      }
      t = SSLgetAnnotations(not_null(l_41));
      if(((q_41 != NULL) && (q_41 != t)))
        _fail(t);
      else
        q_41 = t;
      t = e_42(t);
      t = not_null(m_41);
      t = r_93(t);
      if(((r_41 != NULL) && (r_41 != t)))
        _fail(t);
      else
        r_41 = t;
      t = n_42(t);
    }
    return(t);
  }
  if(((h_41 != NULL) && (h_41 != t)))
    _fail(t);
  else
    h_41 = t;
  t = not_null(h_41);
  if(match_cons(t, sym_PrimT_3))
    {
      i_41 = ATgetArgument(t, 0);
      j_41 = ATgetArgument(t, 1);
      k_41 = ATgetArgument(t, 2);
      t = d_42(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Explode_2_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
  ATerm l_43 (ATerm t)
  {
    ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,f_43 = NULL;
    ATerm s_43 (ATerm t)
    {
      ATerm g_43 = NULL,h_43 = NULL;
      ATerm t_43 (ATerm t)
      {
        ATerm i_43 = NULL,j_43 = NULL;
        t = not_null(h_43);
        if(((i_43 != NULL) && (i_43 != t)))
          _fail(t);
        else
          i_43 = t;
        t = not_null(h_43);
        {
          ATerm k_43 = NULL;
          ATerm u_43 (ATerm t)
          {
            t = not_null(k_43);
            if(((j_43 != NULL) && (j_43 != t)))
              _fail(t);
            else
              j_43 = t;
            t = not_null(k_43);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(g_43), not_null(i_43)), not_null(d_43));
          if(((k_43 != NULL) && (k_43 != t)))
            _fail(t);
          else
            k_43 = t;
          t = u_43(t);
          t = not_null(j_43);
        }
        return(t);
      }
      t = not_null(f_43);
      if(((g_43 != NULL) && (g_43 != t)))
        _fail(t);
      else
        g_43 = t;
      t = not_null(c_43);
      t = m_89(t);
      if(((h_43 != NULL) && (h_43 != t)))
        _fail(t);
      else
        h_43 = t;
      t = t_43(t);
      return(t);
    }
    t = not_null(x_42);
    if(((a_43 != NULL) && (a_43 != t)))
      _fail(t);
    else
      a_43 = t;
    t = not_null(y_42);
    if(((b_43 != NULL) && (b_43 != t)))
      _fail(t);
    else
      b_43 = t;
    t = not_null(z_42);
    if(((c_43 != NULL) && (c_43 != t)))
      _fail(t);
    else
      c_43 = t;
    t = not_null(x_42);
    {
      ATerm e_43 = NULL;
      ATerm m_43 (ATerm t)
      {
        t = not_null(e_43);
        if(((d_43 != NULL) && (d_43 != t)))
          _fail(t);
        else
          d_43 = t;
        t = not_null(e_43);
        return(t);
      }
      t = SSLgetAnnotations(not_null(a_43));
      if(((e_43 != NULL) && (e_43 != t)))
        _fail(t);
      else
        e_43 = t;
      t = m_43(t);
      t = not_null(b_43);
      t = l_89(t);
      if(((f_43 != NULL) && (f_43 != t)))
        _fail(t);
      else
        f_43 = t;
      t = s_43(t);
    }
    return(t);
  }
  if(((x_42 != NULL) && (x_42 != t)))
    _fail(t);
  else
    x_42 = t;
  t = not_null(x_42);
  if(match_cons(t, sym_Explode_2))
    {
      y_42 = ATgetArgument(t, 0);
      z_42 = ATgetArgument(t, 1);
      t = l_43(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Op_2_0 (ATerm h_89 (ATerm), ATerm i_89 (ATerm), ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
  ATerm e_45 (ATerm t)
  {
    ATerm e_44 = NULL,f_44 = NULL,m_44 = NULL,n_44 = NULL,p_44 = NULL;
    ATerm g_45 (ATerm t)
    {
      ATerm q_44 = NULL,r_44 = NULL;
      ATerm h_45 (ATerm t)
      {
        ATerm w_44 = NULL,x_44 = NULL;
        t = not_null(r_44);
        if(((w_44 != NULL) && (w_44 != t)))
          _fail(t);
        else
          w_44 = t;
        t = not_null(r_44);
        {
          ATerm b_45 = NULL;
          ATerm i_45 (ATerm t)
          {
            t = not_null(b_45);
            if(((x_44 != NULL) && (x_44 != t)))
              _fail(t);
            else
              x_44 = t;
            t = not_null(b_45);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(q_44), not_null(w_44)), not_null(n_44));
          if(((b_45 != NULL) && (b_45 != t)))
            _fail(t);
          else
            b_45 = t;
          t = i_45(t);
          t = not_null(x_44);
        }
        return(t);
      }
      t = not_null(p_44);
      if(((q_44 != NULL) && (q_44 != t)))
        _fail(t);
      else
        q_44 = t;
      t = not_null(m_44);
      t = i_89(t);
      if(((r_44 != NULL) && (r_44 != t)))
        _fail(t);
      else
        r_44 = t;
      t = h_45(t);
      return(t);
    }
    t = not_null(b_44);
    if(((e_44 != NULL) && (e_44 != t)))
      _fail(t);
    else
      e_44 = t;
    t = not_null(c_44);
    if(((f_44 != NULL) && (f_44 != t)))
      _fail(t);
    else
      f_44 = t;
    t = not_null(d_44);
    if(((m_44 != NULL) && (m_44 != t)))
      _fail(t);
    else
      m_44 = t;
    t = not_null(b_44);
    {
      ATerm o_44 = NULL;
      ATerm f_45 (ATerm t)
      {
        t = not_null(o_44);
        if(((n_44 != NULL) && (n_44 != t)))
          _fail(t);
        else
          n_44 = t;
        t = not_null(o_44);
        return(t);
      }
      t = SSLgetAnnotations(not_null(e_44));
      if(((o_44 != NULL) && (o_44 != t)))
        _fail(t);
      else
        o_44 = t;
      t = f_45(t);
      t = not_null(f_44);
      t = h_89(t);
      if(((p_44 != NULL) && (p_44 != t)))
        _fail(t);
      else
        p_44 = t;
      t = g_45(t);
    }
    return(t);
  }
  if(((b_44 != NULL) && (b_44 != t)))
    _fail(t);
  else
    b_44 = t;
  t = not_null(b_44);
  if(match_cons(t, sym_Op_2))
    {
      c_44 = ATgetArgument(t, 0);
      d_44 = ATgetArgument(t, 1);
      t = e_45(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pat_td_1_0 (ATerm r_132 (ATerm), ATerm t)
{
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_132(t);
      ;
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
      {
        ATerm h_16 = t;
        int p_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_1 (ATerm t)
            {
              ATerm x_1 (ATerm t)
              {
                t = pat_td_1_0(r_132, t);
                return(t);
              }
              t = fetch_1_0(x_1, t);
              return(t);
            }
            t = Op_2_0(_id, w_1, t);
            ;
            LocalPopChoice(p_16);
          }
        else
          {
            t = h_16;
            {
              ATerm q_16 = t;
              int z_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_1 (ATerm t)
                  {
                    t = pat_td_1_0(r_132, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, y_1, t);
                  ;
                  LocalPopChoice(z_16);
                }
              else
                {
                  t = q_16;
                  {
                    ATerm a_17 = t;
                    int b_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_1 (ATerm t)
                        {
                          t = pat_td_1_0(r_132, t);
                          return(t);
                        }
                        t = Explode_2_0(z_1, _id, t);
                        ;
                        LocalPopChoice(b_17);
                      }
                    else
                      {
                        t = a_17;
                        {
                          ATerm c_17 = t;
                          int d_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_2 (ATerm t)
                              {
                                ATerm b_2 (ATerm t)
                                {
                                  t = pat_td_1_0(r_132, t);
                                  return(t);
                                }
                                t = fetch_1_0(b_2, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, a_2, t);
                              ;
                              LocalPopChoice(d_17);
                            }
                          else
                            {
                              t = c_17;
                              {
                                ATerm c_2 (ATerm t)
                                {
                                  t = pat_td_1_0(r_132, t);
                                  return(t);
                                }
                                t = As_2_0(_id, c_2, t);
                              }
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
  ATerm u_45 = NULL,v_45 = NULL;
  ATerm b_47 (ATerm t)
  {
    ATerm w_45 = NULL,x_45 = NULL,c_46 = NULL;
    t = not_null(v_45);
    if(((w_45 != NULL) && (w_45 != t)))
      _fail(t);
    else
      w_45 = t;
    t = not_null(u_45);
    {
      ATerm k_46 = NULL;
      ATerm e_47 (ATerm t)
      {
        t = not_null(k_46);
        if(((c_46 != NULL) && (c_46 != t)))
          _fail(t);
        else
          c_46 = t;
        t = not_null(k_46);
        return(t);
      }
      t = not_null(w_45);
      {
        ATerm d_2 (ATerm t)
        {
          ATerm d_46 = NULL,i_46 = NULL,j_46 = NULL;
          ATerm d_47 (ATerm t)
          {
            t = not_null(j_46);
            if(((x_45 != NULL) && (x_45 != t)))
              _fail(t);
            else
              x_45 = t;
            t = not_null(x_45);
            return(t);
          }
          if(((d_46 != NULL) && (d_46 != t)))
            _fail(t);
          else
            d_46 = t;
          t = not_null(d_46);
          if(match_cons(t, sym_RootApp_1))
            {
              i_46 = ATgetArgument(t, 0);
              t = not_null(i_46);
              if(match_cons(t, sym_Build_1))
                {
                  j_46 = ATgetArgument(t, 0);
                  t = d_47(t);
                }
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
        t = pat_td_1_0(d_2, t);
        if(((k_46 != NULL) && (k_46 != t)))
          _fail(t);
        else
          k_46 = t;
        t = e_47(t);
      }
      t = (ATerm) ATmakeAppl(sym_Build_1, not_null(c_46));
    }
    return(t);
  }
  ATerm c_47 (ATerm t)
  {
    ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL;
    t = not_null(v_45);
    if(((l_46 != NULL) && (l_46 != t)))
      _fail(t);
    else
      l_46 = t;
    t = not_null(u_45);
    {
      ATerm a_47 = NULL;
      ATerm g_47 (ATerm t)
      {
        t = not_null(a_47);
        if(((o_46 != NULL) && (o_46 != t)))
          _fail(t);
        else
          o_46 = t;
        t = not_null(a_47);
        return(t);
      }
      t = not_null(l_46);
      {
        ATerm e_2 (ATerm t)
        {
          ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL,z_46 = NULL;
          ATerm f_47 (ATerm t)
          {
            t = not_null(r_46);
            if(((n_46 != NULL) && (n_46 != t)))
              _fail(t);
            else
              n_46 = t;
            t = not_null(z_46);
            if(((m_46 != NULL) && (m_46 != t)))
              _fail(t);
            else
              m_46 = t;
            t = not_null(n_46);
            return(t);
          }
          if(((p_46 != NULL) && (p_46 != t)))
            _fail(t);
          else
            p_46 = t;
          t = not_null(p_46);
          if(match_cons(t, sym_App_2))
            {
              q_46 = ATgetArgument(t, 0);
              z_46 = ATgetArgument(t, 1);
              t = not_null(q_46);
              if(match_cons(t, sym_Build_1))
                {
                  r_46 = ATgetArgument(t, 0);
                  t = f_47(t);
                }
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
        t = pat_td_1_0(e_2, t);
        if(((a_47 != NULL) && (a_47 != t)))
          _fail(t);
        else
          a_47 = t;
        t = g_47(t);
      }
      t = (ATerm) ATmakeAppl(sym_Build_1, not_null(o_46));
    }
    return(t);
  }
  if(((u_45 != NULL) && (u_45 != t)))
    _fail(t);
  else
    u_45 = t;
  t = not_null(u_45);
  if(match_cons(t, sym_Build_1))
    {
      v_45 = ATgetArgument(t, 0);
      {
        ATerm t_17 = t;
        int u_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_47(t);
            ;
            LocalPopChoice(u_17);
          }
        else
          {
            t = t_17;
            t = c_47(t);
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
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0_0(t);
      ;
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      {
        ATerm i_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0_0(t);
            ;
            LocalPopChoice(n_18);
          }
        else
          {
            t = i_18;
            t = Bapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm MkConstType_0_0 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL;
  ATerm m_47 (ATerm t)
  {
    ATerm l_47 = NULL;
    t = not_null(k_47);
    if(((l_47 != NULL) && (l_47 != t)))
      _fail(t);
    else
      l_47 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(l_47), term_q_18);
    return(t);
  }
  if(((j_47 != NULL) && (j_47 != t)))
    _fail(t);
  else
    j_47 = t;
  t = not_null(j_47);
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_47 = ATgetArgument(t, 0);
      t = m_47(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0_0 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL;
  ATerm s_47 (ATerm t)
  {
    ATerm r_47 = NULL;
    t = not_null(q_47);
    if(((r_47 != NULL) && (r_47 != t)))
      _fail(t);
    else
      r_47 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(r_47), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_18), term_q_18));
    return(t);
  }
  if(((p_47 != NULL) && (p_47 != t)))
    _fail(t);
  else
    p_47 = t;
  t = not_null(p_47);
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      q_47 = ATgetArgument(t, 0);
      t = s_47(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(q_0, _id, t);
      {
        ATerm f_2 (ATerm t)
        {
          ATerm g_2 (ATerm t)
          {
            t = map1_1_0(q_0, t);
            return(t);
          }
          t = try_1_0(g_2, t);
          return(t);
        }
        t = Cons_2_0(_id, f_2, t);
      }
      ;
      LocalPopChoice(s_18);
    }
  else
    {
      t = r_18;
      {
        ATerm h_2 (ATerm t)
        {
          t = map1_1_0(q_0, t);
          return(t);
        }
        t = Cons_2_0(_id, h_2, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL;
  ATerm k_51 (ATerm t)
  {
    ATerm e_49 = NULL,f_49 = NULL;
    t = not_null(c_49);
    if(((e_49 != NULL) && (e_49 != t)))
      _fail(t);
    else
      e_49 = t;
    t = not_null(d_49);
    if(((f_49 != NULL) && (f_49 != t)))
      _fail(t);
    else
      f_49 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(e_49), not_null(f_49));
    return(t);
  }
  ATerm l_51 (ATerm t)
  {
    ATerm g_49 = NULL,h_49 = NULL;
    t = not_null(x_48);
    if(((g_49 != NULL) && (g_49 != t)))
      _fail(t);
    else
      g_49 = t;
    t = not_null(y_48);
    if(((h_49 != NULL) && (h_49 != t)))
      _fail(t);
    else
      h_49 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_49), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(h_49)));
    return(t);
  }
  ATerm m_51 (ATerm t)
  {
    t = term_k_11;
    return(t);
  }
  ATerm n_51 (ATerm t)
  {
    ATerm i_49 = NULL,l_49 = NULL;
    t = not_null(x_48);
    if(((i_49 != NULL) && (i_49 != t)))
      _fail(t);
    else
      i_49 = t;
    t = not_null(y_48);
    if(((l_49 != NULL) && (l_49 != t)))
      _fail(t);
    else
      l_49 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_49), (ATerm) ATmakeAppl(sym_Choices_1, not_null(l_49)));
    return(t);
  }
  ATerm v_51 (ATerm t)
  {
    t = term_k_11;
    return(t);
  }
  ATerm w_51 (ATerm t)
  {
    ATerm m_49 = NULL,n_49 = NULL;
    t = not_null(x_48);
    if(((m_49 != NULL) && (m_49 != t)))
      _fail(t);
    else
      m_49 = t;
    t = not_null(y_48);
    if(((n_49 != NULL) && (n_49 != t)))
      _fail(t);
    else
      n_49 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_49), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(n_49)));
    return(t);
  }
  ATerm x_51 (ATerm t)
  {
    t = term_t_18;
    return(t);
  }
  ATerm y_51 (ATerm t)
  {
    ATerm o_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL;
    t = not_null(c_49);
    if(((o_49 != NULL) && (o_49 != t)))
      _fail(t);
    else
      o_49 = t;
    t = not_null(d_49);
    if(((q_49 != NULL) && (q_49 != t)))
      _fail(t);
    else
      q_49 = t;
    t = not_null(a_49);
    if(((r_49 != NULL) && (r_49 != t)))
      _fail(t);
    else
      r_49 = t;
    t = not_null(z_48);
    if(((s_49 != NULL) && (s_49 != t)))
      _fail(t);
    else
      s_49 = t;
    t = not_null(b_49);
    {
      ATerm a_50 = NULL;
      ATerm g_52 (ATerm t)
      {
        ATerm b_50 = NULL;
        ATerm h_52 (ATerm t)
        {
          t = not_null(b_50);
          if(((u_49 != NULL) && (u_49 != t)))
            _fail(t);
          else
            u_49 = t;
          t = not_null(b_50);
          return(t);
        }
        t = not_null(a_50);
        if(((t_49 != NULL) && (t_49 != t)))
          _fail(t);
        else
          t_49 = t;
        t = not_null(r_49);
        {
          ATerm i_2 (ATerm t)
          {
            t = try_1_0(MkConstType_0_0, t);
            return(t);
          }
          t = map1_1_0(i_2, t);
          if(((b_50 != NULL) && (b_50 != t)))
            _fail(t);
          else
            b_50 = t;
          t = h_52(t);
        }
        return(t);
      }
      t = not_null(q_49);
      t = map1_1_0(MkFunType_0_0, t);
      if(((a_50 != NULL) && (a_50 != t)))
        _fail(t);
      else
        a_50 = t;
      t = g_52(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(o_49), not_null(t_49), not_null(u_49), not_null(s_49));
    }
    return(t);
  }
  ATerm z_51 (ATerm t)
  {
    ATerm c_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL;
    t = not_null(c_49);
    if(((c_50 != NULL) && (c_50 != t)))
      _fail(t);
    else
      c_50 = t;
    t = not_null(d_49);
    if(((h_50 != NULL) && (h_50 != t)))
      _fail(t);
    else
      h_50 = t;
    t = not_null(a_49);
    if(((i_50 != NULL) && (i_50 != t)))
      _fail(t);
    else
      i_50 = t;
    t = not_null(z_48);
    if(((j_50 != NULL) && (j_50 != t)))
      _fail(t);
    else
      j_50 = t;
    t = not_null(b_49);
    {
      ATerm m_50 = NULL;
      ATerm i_52 (ATerm t)
      {
        ATerm p_50 = NULL;
        ATerm j_52 (ATerm t)
        {
          t = not_null(p_50);
          if(((l_50 != NULL) && (l_50 != t)))
            _fail(t);
          else
            l_50 = t;
          t = not_null(p_50);
          return(t);
        }
        t = not_null(m_50);
        if(((k_50 != NULL) && (k_50 != t)))
          _fail(t);
        else
          k_50 = t;
        t = not_null(h_50);
        {
          ATerm j_2 (ATerm t)
          {
            t = try_1_0(MkFunType_0_0, t);
            return(t);
          }
          t = map_1_0(j_2, t);
          if(((p_50 != NULL) && (p_50 != t)))
            _fail(t);
          else
            p_50 = t;
          t = j_52(t);
        }
        return(t);
      }
      t = not_null(i_50);
      t = map1_1_0(MkConstType_0_0, t);
      if(((m_50 != NULL) && (m_50 != t)))
        _fail(t);
      else
        m_50 = t;
      t = i_52(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(c_50), not_null(l_50), not_null(k_50), not_null(j_50));
    }
    return(t);
  }
  ATerm a_52 (ATerm t)
  {
    ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL;
    t = not_null(c_49);
    if(((q_50 != NULL) && (q_50 != t)))
      _fail(t);
    else
      q_50 = t;
    t = not_null(d_49);
    if(((r_50 != NULL) && (r_50 != t)))
      _fail(t);
    else
      r_50 = t;
    t = not_null(a_49);
    if(((s_50 != NULL) && (s_50 != t)))
      _fail(t);
    else
      s_50 = t;
    t = not_null(z_48);
    if(((t_50 != NULL) && (t_50 != t)))
      _fail(t);
    else
      t_50 = t;
    t = not_null(b_49);
    {
      ATerm w_50 = NULL;
      ATerm k_52 (ATerm t)
      {
        ATerm x_50 = NULL;
        ATerm l_52 (ATerm t)
        {
          t = not_null(x_50);
          if(((v_50 != NULL) && (v_50 != t)))
            _fail(t);
          else
            v_50 = t;
          t = not_null(x_50);
          return(t);
        }
        t = not_null(w_50);
        if(((u_50 != NULL) && (u_50 != t)))
          _fail(t);
        else
          u_50 = t;
        t = not_null(s_50);
        {
          ATerm k_2 (ATerm t)
          {
            t = try_1_0(MkConstType_0_0, t);
            return(t);
          }
          t = map_1_0(k_2, t);
          if(((x_50 != NULL) && (x_50 != t)))
            _fail(t);
          else
            x_50 = t;
          t = l_52(t);
        }
        return(t);
      }
      t = not_null(r_50);
      t = map1_1_0(MkFunType_0_0, t);
      if(((w_50 != NULL) && (w_50 != t)))
        _fail(t);
      else
        w_50 = t;
      t = k_52(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(q_50), not_null(u_50), not_null(v_50), not_null(t_50));
    }
    return(t);
  }
  ATerm b_52 (ATerm t)
  {
    ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL;
    t = not_null(c_49);
    if(((z_50 != NULL) && (z_50 != t)))
      _fail(t);
    else
      z_50 = t;
    t = not_null(d_49);
    if(((y_50 != NULL) && (y_50 != t)))
      _fail(t);
    else
      y_50 = t;
    t = not_null(a_49);
    if(((a_51 != NULL) && (a_51 != t)))
      _fail(t);
    else
      a_51 = t;
    t = (ATerm) ATmakeAppl(sym_App_2, not_null(y_50), (ATerm) ATmakeAppl(sym_Op_2, term_z_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_51)), not_null(z_50))));
    return(t);
  }
  ATerm c_52 (ATerm t)
  {
    ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
    t = not_null(c_49);
    if(((c_51 != NULL) && (c_51 != t)))
      _fail(t);
    else
      c_51 = t;
    t = not_null(d_49);
    if(((b_51 != NULL) && (b_51 != t)))
      _fail(t);
    else
      b_51 = t;
    t = not_null(a_49);
    if(((d_51 != NULL) && (d_51 != t)))
      _fail(t);
    else
      d_51 = t;
    t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(d_51))), not_null(c_51)), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_51))));
    return(t);
  }
  ATerm d_52 (ATerm t)
  {
    ATerm e_51 = NULL,f_51 = NULL;
    t = not_null(c_49);
    if(((e_51 != NULL) && (e_51 != t)))
      _fail(t);
    else
      e_51 = t;
    t = not_null(d_49);
    if(((f_51 != NULL) && (f_51 != t)))
      _fail(t);
    else
      f_51 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_51), (ATerm) ATmakeAppl(sym_Match_1, not_null(f_51)));
    return(t);
  }
  ATerm e_52 (ATerm t)
  {
    ATerm g_51 = NULL,h_51 = NULL;
    t = not_null(c_49);
    if(((g_51 != NULL) && (g_51 != t)))
      _fail(t);
    else
      g_51 = t;
    t = not_null(d_49);
    if(((h_51 != NULL) && (h_51 != t)))
      _fail(t);
    else
      h_51 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_51)), not_null(h_51));
    return(t);
  }
  ATerm f_52 (ATerm t)
  {
    ATerm i_51 = NULL,j_51 = NULL;
    t = not_null(c_49);
    if(((j_51 != NULL) && (j_51 != t)))
      _fail(t);
    else
      j_51 = t;
    t = not_null(d_49);
    if(((i_51 != NULL) && (i_51 != t)))
      _fail(t);
    else
      i_51 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_51)), not_null(j_51));
    return(t);
  }
  if(((b_49 != NULL) && (b_49 != t)))
    _fail(t);
  else
    b_49 = t;
  t = not_null(b_49);
  if(match_cons(t, sym_Lets_2))
    {
      c_49 = ATgetArgument(t, 0);
      d_49 = ATgetArgument(t, 1);
      t = k_51(t);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          c_49 = ATgetArgument(t, 0);
          t = not_null(c_49);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_48 = ATgetFirst((ATermList) t);
              y_48 = (ATerm) ATgetNext((ATermList) t);
              t = l_51(t);
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = m_51(t);
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
              c_49 = ATgetArgument(t, 0);
              t = not_null(c_49);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_48 = ATgetFirst((ATermList) t);
                  y_48 = (ATerm) ATgetNext((ATermList) t);
                  t = n_51(t);
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = v_51(t);
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
                  c_49 = ATgetArgument(t, 0);
                  t = not_null(c_49);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_48 = ATgetFirst((ATermList) t);
                      y_48 = (ATerm) ATgetNext((ATermList) t);
                      t = w_51(t);
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = x_51(t);
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
                      c_49 = ATgetArgument(t, 0);
                      d_49 = ATgetArgument(t, 1);
                      a_49 = ATgetArgument(t, 2);
                      z_48 = ATgetArgument(t, 3);
                      t = y_51(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          c_49 = ATgetArgument(t, 0);
                          d_49 = ATgetArgument(t, 1);
                          a_49 = ATgetArgument(t, 2);
                          z_48 = ATgetArgument(t, 3);
                          {
                            ATerm u_18 = t;
                            int r_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = z_51(t);
                                ;
                                LocalPopChoice(r_19);
                              }
                            else
                              {
                                t = u_18;
                                t = a_52(t);
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              c_49 = ATgetArgument(t, 0);
                              d_49 = ATgetArgument(t, 1);
                              a_49 = ATgetArgument(t, 2);
                              t = b_52(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  c_49 = ATgetArgument(t, 0);
                                  d_49 = ATgetArgument(t, 1);
                                  a_49 = ATgetArgument(t, 2);
                                  t = c_52(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      c_49 = ATgetArgument(t, 0);
                                      d_49 = ATgetArgument(t, 1);
                                      t = d_52(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          c_49 = ATgetArgument(t, 0);
                                          d_49 = ATgetArgument(t, 1);
                                          t = e_52(t);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              c_49 = ATgetArgument(t, 0);
                                              d_49 = ATgetArgument(t, 1);
                                              t = f_52(t);
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
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL;
  ATerm b_53 (ATerm t)
  {
    ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL;
    t = not_null(s_52);
    if(((x_52 != NULL) && (x_52 != t)))
      _fail(t);
    else
      x_52 = t;
    t = not_null(t_52);
    if(((z_52 != NULL) && (z_52 != t)))
      _fail(t);
    else
      z_52 = t;
    t = not_null(v_52);
    if(((y_52 != NULL) && (y_52 != t)))
      _fail(t);
    else
      y_52 = t;
    t = not_null(w_52);
    if(((a_53 != NULL) && (a_53 != t)))
      _fail(t);
    else
      a_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_52)), not_null(x_52)), (ATerm) ATinsert(CheckATermList(not_null(a_53)), not_null(z_52)));
    return(t);
  }
  if(((q_52 != NULL) && (q_52 != t)))
    _fail(t);
  else
    q_52 = t;
  t = not_null(q_52);
  if(match_cons(t, sym__2))
    {
      r_52 = ATgetArgument(t, 0);
      u_52 = ATgetArgument(t, 1);
      t = not_null(r_52);
      if(match_cons(t, sym__2))
        {
          s_52 = ATgetArgument(t, 0);
          t_52 = ATgetArgument(t, 1);
          t = not_null(u_52);
          if(match_cons(t, sym__2))
            {
              v_52 = ATgetArgument(t, 0);
              w_52 = ATgetArgument(t, 1);
              t = b_53(t);
            }
          else
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
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL;
  ATerm j_53 (ATerm t)
  {
    ATerm h_53 = NULL,i_53 = NULL;
    t = not_null(f_53);
    if(((h_53 != NULL) && (h_53 != t)))
      _fail(t);
    else
      h_53 = t;
    t = not_null(g_53);
    if(((i_53 != NULL) && (i_53 != t)))
      _fail(t);
    else
      i_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_53), not_null(i_53));
    return(t);
  }
  if(((e_53 != NULL) && (e_53 != t)))
    _fail(t);
  else
    e_53 = t;
  t = not_null(e_53);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_53 = ATgetFirst((ATermList) t);
      g_53 = (ATerm) ATgetNext((ATermList) t);
      t = j_53(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0_0 (ATerm t)
{
  ATerm m_53 = NULL;
  ATerm n_53 (ATerm t)
  {
    t = term_s_19;
    return(t);
  }
  if(((m_53 != NULL) && (m_53 != t)))
    _fail(t);
  else
    m_53 = t;
  t = not_null(m_53);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_53(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1_0 (ATerm l_108 (ATerm), ATerm t)
{
  t = genzip_4_0(UnZip1_0_0, UnZip3_0_0, UnZip2_0_0, l_108, t);
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm s_53 = NULL,u_53 = NULL;
  ATerm z_53 (ATerm t)
  {
    ATerm v_53 = NULL,w_53 = NULL;
    t = not_null(s_53);
    if(((v_53 != NULL) && (v_53 != t)))
      _fail(t);
    else
      v_53 = t;
    t = not_null(s_53);
    {
      ATerm x_53 = NULL;
      ATerm b_54 (ATerm t)
      {
        t = not_null(x_53);
        if(((w_53 != NULL) && (w_53 != t)))
          _fail(t);
        else
          w_53 = t;
        t = not_null(x_53);
        return(t);
      }
      t = not_null(v_53);
      {
        ATerm t_19 = t;
        if((PushChoice() == 0))
          {
            t = Var_1_0(_id, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_19;
          }
        t = new_0_0(t);
        if(((x_53 != NULL) && (x_53 != t)))
          _fail(t);
        else
          x_53 = t;
        t = b_54(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(w_53)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_53)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_53))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_53))));
    }
    return(t);
  }
  ATerm a_54 (ATerm t)
  {
    ATerm y_53 = NULL;
    t = not_null(u_53);
    if(((y_53 != NULL) && (y_53 != t)))
      _fail(t);
    else
      y_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_53))));
    return(t);
  }
  if(((s_53 != NULL) && (s_53 != t)))
    _fail(t);
  else
    s_53 = t;
  t = not_null(s_53);
  if(match_cons(t, sym_Var_1))
    {
      u_53 = ATgetArgument(t, 0);
      {
        ATerm u_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_53(t);
            ;
            LocalPopChoice(v_19);
          }
        else
          {
            t = u_19;
            t = a_54(t);
          }
      }
    }
  else
    {
      t = z_53(t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL;
  ATerm p_55 (ATerm t)
  {
    ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL,v_54 = NULL;
    ATerm t_55 (ATerm t)
    {
      ATerm w_54 = NULL,x_54 = NULL;
      t = not_null(v_54);
      if(((w_54 != NULL) && (w_54 != t)))
        _fail(t);
      else
        w_54 = t;
      t = not_null(v_54);
      {
        ATerm y_54 = NULL;
        ATerm u_55 (ATerm t)
        {
          t = not_null(y_54);
          if(((x_54 != NULL) && (x_54 != t)))
            _fail(t);
          else
            x_54 = t;
          t = not_null(y_54);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(w_54)), not_null(t_54));
        if(((y_54 != NULL) && (y_54 != t)))
          _fail(t);
        else
          y_54 = t;
        t = u_55(t);
        t = not_null(x_54);
      }
      return(t);
    }
    t = not_null(p_54);
    if(((r_54 != NULL) && (r_54 != t)))
      _fail(t);
    else
      r_54 = t;
    t = not_null(q_54);
    if(((s_54 != NULL) && (s_54 != t)))
      _fail(t);
    else
      s_54 = t;
    t = not_null(p_54);
    {
      ATerm u_54 = NULL;
      ATerm s_55 (ATerm t)
      {
        t = not_null(u_54);
        if(((t_54 != NULL) && (t_54 != t)))
          _fail(t);
        else
          t_54 = t;
        t = not_null(u_54);
        return(t);
      }
      t = SSLgetAnnotations(not_null(r_54));
      if(((u_54 != NULL) && (u_54 != t)))
        _fail(t);
      else
        u_54 = t;
      t = s_55(t);
      t = not_null(s_54);
      t = o_0(t);
      if(((v_54 != NULL) && (v_54 != t)))
        _fail(t);
      else
        v_54 = t;
      t = t_55(t);
    }
    return(t);
  }
  ATerm q_55 (ATerm t)
  {
    ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL,d_55 = NULL;
    ATerm w_55 (ATerm t)
    {
      ATerm e_55 = NULL,f_55 = NULL;
      t = not_null(d_55);
      if(((e_55 != NULL) && (e_55 != t)))
        _fail(t);
      else
        e_55 = t;
      t = not_null(d_55);
      {
        ATerm g_55 = NULL;
        ATerm x_55 (ATerm t)
        {
          t = not_null(g_55);
          if(((f_55 != NULL) && (f_55 != t)))
            _fail(t);
          else
            f_55 = t;
          t = not_null(g_55);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(e_55)), not_null(b_55));
        if(((g_55 != NULL) && (g_55 != t)))
          _fail(t);
        else
          g_55 = t;
        t = x_55(t);
        t = not_null(f_55);
      }
      return(t);
    }
    t = not_null(p_54);
    if(((z_54 != NULL) && (z_54 != t)))
      _fail(t);
    else
      z_54 = t;
    t = not_null(q_54);
    if(((a_55 != NULL) && (a_55 != t)))
      _fail(t);
    else
      a_55 = t;
    t = not_null(p_54);
    {
      ATerm c_55 = NULL;
      ATerm v_55 (ATerm t)
      {
        t = not_null(c_55);
        if(((b_55 != NULL) && (b_55 != t)))
          _fail(t);
        else
          b_55 = t;
        t = not_null(c_55);
        return(t);
      }
      t = SSLgetAnnotations(not_null(z_54));
      if(((c_55 != NULL) && (c_55 != t)))
        _fail(t);
      else
        c_55 = t;
      t = v_55(t);
      t = not_null(a_55);
      t = o_0(t);
      if(((d_55 != NULL) && (d_55 != t)))
        _fail(t);
      else
        d_55 = t;
      t = w_55(t);
    }
    return(t);
  }
  ATerm r_55 (ATerm t)
  {
    ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL,l_55 = NULL;
    ATerm z_55 (ATerm t)
    {
      ATerm m_55 = NULL,n_55 = NULL;
      t = not_null(l_55);
      if(((m_55 != NULL) && (m_55 != t)))
        _fail(t);
      else
        m_55 = t;
      t = not_null(l_55);
      {
        ATerm o_55 = NULL;
        ATerm a_56 (ATerm t)
        {
          t = not_null(o_55);
          if(((n_55 != NULL) && (n_55 != t)))
            _fail(t);
          else
            n_55 = t;
          t = not_null(o_55);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(m_55)), not_null(j_55));
        if(((o_55 != NULL) && (o_55 != t)))
          _fail(t);
        else
          o_55 = t;
        t = a_56(t);
        t = not_null(n_55);
      }
      return(t);
    }
    t = not_null(p_54);
    if(((h_55 != NULL) && (h_55 != t)))
      _fail(t);
    else
      h_55 = t;
    t = not_null(q_54);
    if(((i_55 != NULL) && (i_55 != t)))
      _fail(t);
    else
      i_55 = t;
    t = not_null(p_54);
    {
      ATerm k_55 = NULL;
      ATerm y_55 (ATerm t)
      {
        t = not_null(k_55);
        if(((j_55 != NULL) && (j_55 != t)))
          _fail(t);
        else
          j_55 = t;
        t = not_null(k_55);
        return(t);
      }
      t = SSLgetAnnotations(not_null(h_55));
      if(((k_55 != NULL) && (k_55 != t)))
        _fail(t);
      else
        k_55 = t;
      t = y_55(t);
      t = not_null(i_55);
      t = o_0(t);
      if(((l_55 != NULL) && (l_55 != t)))
        _fail(t);
      else
        l_55 = t;
      t = z_55(t);
    }
    return(t);
  }
  if(((p_54 != NULL) && (p_54 != t)))
    _fail(t);
  else
    p_54 = t;
  t = not_null(p_54);
  if(match_cons(t, sym_Var_1))
    {
      q_54 = ATgetArgument(t, 0);
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_55(t);
            ;
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
            {
              ATerm p_20 = t;
              int q_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_55(t);
                  ;
                  LocalPopChoice(q_20);
                }
              else
                {
                  t = p_20;
                  t = r_55(t);
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
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL;
  ATerm j_57 (ATerm t)
  {
    ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL;
    t = not_null(m_56);
    if(((o_56 != NULL) && (o_56 != t)))
      _fail(t);
    else
      o_56 = t;
    t = not_null(n_56);
    if(((p_56 != NULL) && (p_56 != t)))
      _fail(t);
    else
      p_56 = t;
    t = not_null(k_56);
    if(((q_56 != NULL) && (q_56 != t)))
      _fail(t);
    else
      q_56 = t;
    t = not_null(l_56);
    {
      ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL;
      ATerm l_57 (ATerm t)
      {
        t = not_null(v_56);
        if(((r_56 != NULL) && (r_56 != t)))
          _fail(t);
        else
          r_56 = t;
        t = not_null(x_56);
        if(((s_56 != NULL) && (s_56 != t)))
          _fail(t);
        else
          s_56 = t;
        t = not_null(y_56);
        if(((t_56 != NULL) && (t_56 != t)))
          _fail(t);
        else
          t_56 = t;
        t = not_null(u_56);
        return(t);
      }
      t = not_null(q_56);
      {
        ATerm l_2 (ATerm t)
        {
          ATerm x_20 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = x_20;
            }
          return(t);
        }
        t = fetch_1_0(l_2, t);
        t = not_null(q_56);
        t = unzip_1_0(LiftPrimArg_0_0, t);
        {
          ATerm m_2 (ATerm t)
          {
            t = unzip_1_0(_id, t);
            return(t);
          }
          t = _2_0(concat_0_0, m_2, t);
          if(((u_56 != NULL) && (u_56 != t)))
            _fail(t);
          else
            u_56 = t;
          t = not_null(u_56);
          if(match_cons(t, sym__2))
            {
              v_56 = ATgetArgument(t, 0);
              w_56 = ATgetArgument(t, 1);
              t = not_null(w_56);
              if(match_cons(t, sym__2))
                {
                  x_56 = ATgetArgument(t, 0);
                  y_56 = ATgetArgument(t, 1);
                  t = l_57(t);
                }
              else
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
      t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(r_56), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(s_56)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(o_56), not_null(p_56), not_null(t_56))));
    }
    return(t);
  }
  ATerm k_57 (ATerm t)
  {
    ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL;
    t = not_null(m_56);
    if(((z_56 != NULL) && (z_56 != t)))
      _fail(t);
    else
      z_56 = t;
    t = not_null(n_56);
    if(((a_57 != NULL) && (a_57 != t)))
      _fail(t);
    else
      a_57 = t;
    t = not_null(l_56);
    {
      ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL;
      ATerm m_57 (ATerm t)
      {
        t = not_null(f_57);
        if(((b_57 != NULL) && (b_57 != t)))
          _fail(t);
        else
          b_57 = t;
        t = not_null(h_57);
        if(((c_57 != NULL) && (c_57 != t)))
          _fail(t);
        else
          c_57 = t;
        t = not_null(i_57);
        if(((d_57 != NULL) && (d_57 != t)))
          _fail(t);
        else
          d_57 = t;
        t = not_null(e_57);
        return(t);
      }
      t = not_null(a_57);
      {
        ATerm n_2 (ATerm t)
        {
          ATerm y_20 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_20;
            }
          return(t);
        }
        t = fetch_1_0(n_2, t);
        t = not_null(a_57);
        t = unzip_1_0(LiftPrimArg_0_0, t);
        {
          ATerm o_2 (ATerm t)
          {
            t = unzip_1_0(_id, t);
            return(t);
          }
          t = _2_0(concat_0_0, o_2, t);
          if(((e_57 != NULL) && (e_57 != t)))
            _fail(t);
          else
            e_57 = t;
          t = not_null(e_57);
          if(match_cons(t, sym__2))
            {
              f_57 = ATgetArgument(t, 0);
              g_57 = ATgetArgument(t, 1);
              t = not_null(g_57);
              if(match_cons(t, sym__2))
                {
                  h_57 = ATgetArgument(t, 0);
                  i_57 = ATgetArgument(t, 1);
                  t = m_57(t);
                }
              else
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
      t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_57), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(c_57)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(z_56), (ATerm)ATempty, not_null(d_57))));
    }
    return(t);
  }
  if(((l_56 != NULL) && (l_56 != t)))
    _fail(t);
  else
    l_56 = t;
  t = not_null(l_56);
  if(match_cons(t, sym_PrimT_3))
    {
      m_56 = ATgetArgument(t, 0);
      n_56 = ATgetArgument(t, 1);
      k_56 = ATgetArgument(t, 2);
      t = j_57(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          m_56 = ATgetArgument(t, 0);
          n_56 = ATgetArgument(t, 1);
          t = k_57(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm z_119 (ATerm), ATerm t)
{
  ATerm n_57 (ATerm t)
  {
    ATerm p_2 (ATerm t)
    {
      t = z_119(t);
      t = n_57(t);
      return(t);
    }
    t = try_1_0(p_2, t);
    return(t);
  }
  t = n_57(t);
  return(t);
}
ATerm Wld_0_0 (ATerm t)
{
  ATerm s_57 = NULL;
  ATerm y_57 (ATerm t)
  {
    ATerm t_57 = NULL,u_57 = NULL,w_57 = NULL;
    t = not_null(s_57);
    if(((t_57 != NULL) && (t_57 != t)))
      _fail(t);
    else
      t_57 = t;
    t = not_null(s_57);
    {
      ATerm d_21;
      d_21 = t;
      {
        ATerm v_57 = NULL;
        ATerm z_57 (ATerm t)
        {
          t = not_null(v_57);
          if(((u_57 != NULL) && (u_57 != t)))
            _fail(t);
          else
            u_57 = t;
          t = not_null(v_57);
          return(t);
        }
        t = SSLgetAnnotations(not_null(t_57));
        if(((v_57 != NULL) && (v_57 != t)))
          _fail(t);
        else
          v_57 = t;
        t = z_57(t);
      }
      t = d_21;
      {
        ATerm x_57 = NULL;
        ATerm a_58 (ATerm t)
        {
          t = not_null(x_57);
          if(((w_57 != NULL) && (w_57 != t)))
            _fail(t);
          else
            w_57 = t;
          t = not_null(x_57);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(u_57));
        if(((x_57 != NULL) && (x_57 != t)))
          _fail(t);
        else
          x_57 = t;
        t = a_58(t);
        t = not_null(w_57);
      }
    }
    return(t);
  }
  if(((s_57 != NULL) && (s_57 != t)))
    _fail(t);
  else
    s_57 = t;
  t = not_null(s_57);
  if(match_cons(t, sym_Wld_0))
    {
      t = y_57(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm e_21 = t;
  if((PushChoice() == 0))
    {
      ATerm q_2 (ATerm t)
      {
        ATerm f_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(g_21);
          }
        else
          {
            t = f_21;
            t = Wld_0_0(t);
          }
        return(t);
      }
      t = topdown_1_0(q_2, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_21;
    }
  return(t);
}
ATerm App_2_0 (ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm t)
{
  ATerm h_58 = NULL,l_58 = NULL,m_58 = NULL;
  ATerm y_58 (ATerm t)
  {
    ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,s_58 = NULL;
    ATerm a_59 (ATerm t)
    {
      ATerm t_58 = NULL,u_58 = NULL;
      ATerm b_59 (ATerm t)
      {
        ATerm v_58 = NULL,w_58 = NULL;
        t = not_null(u_58);
        if(((v_58 != NULL) && (v_58 != t)))
          _fail(t);
        else
          v_58 = t;
        t = not_null(u_58);
        {
          ATerm x_58 = NULL;
          ATerm c_59 (ATerm t)
          {
            t = not_null(x_58);
            if(((w_58 != NULL) && (w_58 != t)))
              _fail(t);
            else
              w_58 = t;
            t = not_null(x_58);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(t_58), not_null(v_58)), not_null(q_58));
          if(((x_58 != NULL) && (x_58 != t)))
            _fail(t);
          else
            x_58 = t;
          t = c_59(t);
          t = not_null(w_58);
        }
        return(t);
      }
      t = not_null(s_58);
      if(((t_58 != NULL) && (t_58 != t)))
        _fail(t);
      else
        t_58 = t;
      t = not_null(p_58);
      t = q_89(t);
      if(((u_58 != NULL) && (u_58 != t)))
        _fail(t);
      else
        u_58 = t;
      t = b_59(t);
      return(t);
    }
    t = not_null(h_58);
    if(((n_58 != NULL) && (n_58 != t)))
      _fail(t);
    else
      n_58 = t;
    t = not_null(l_58);
    if(((o_58 != NULL) && (o_58 != t)))
      _fail(t);
    else
      o_58 = t;
    t = not_null(m_58);
    if(((p_58 != NULL) && (p_58 != t)))
      _fail(t);
    else
      p_58 = t;
    t = not_null(h_58);
    {
      ATerm r_58 = NULL;
      ATerm z_58 (ATerm t)
      {
        t = not_null(r_58);
        if(((q_58 != NULL) && (q_58 != t)))
          _fail(t);
        else
          q_58 = t;
        t = not_null(r_58);
        return(t);
      }
      t = SSLgetAnnotations(not_null(n_58));
      if(((r_58 != NULL) && (r_58 != t)))
        _fail(t);
      else
        r_58 = t;
      t = z_58(t);
      t = not_null(o_58);
      t = p_89(t);
      if(((s_58 != NULL) && (s_58 != t)))
        _fail(t);
      else
        s_58 = t;
      t = a_59(t);
    }
    return(t);
  }
  if(((h_58 != NULL) && (h_58 != t)))
    _fail(t);
  else
    h_58 = t;
  t = not_null(h_58);
  if(match_cons(t, sym_App_2))
    {
      l_58 = ATgetArgument(t, 0);
      m_58 = ATgetArgument(t, 1);
      t = y_58(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Con_3_0 (ATerm b_90 (ATerm), ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm t)
{
  ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL;
  ATerm e_64 (ATerm t)
  {
    ATerm r_62 = NULL,s_62 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,w_63 = NULL;
    ATerm g_64 (ATerm t)
    {
      ATerm x_63 = NULL,y_63 = NULL;
      ATerm h_64 (ATerm t)
      {
        ATerm z_63 = NULL,a_64 = NULL;
        ATerm i_64 (ATerm t)
        {
          ATerm b_64 = NULL,c_64 = NULL;
          t = not_null(a_64);
          if(((b_64 != NULL) && (b_64 != t)))
            _fail(t);
          else
            b_64 = t;
          t = not_null(a_64);
          {
            ATerm d_64 = NULL;
            ATerm j_64 (ATerm t)
            {
              t = not_null(d_64);
              if(((c_64 != NULL) && (c_64 != t)))
                _fail(t);
              else
                c_64 = t;
              t = not_null(d_64);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(x_63), not_null(z_63), not_null(b_64)), not_null(u_63));
            if(((d_64 != NULL) && (d_64 != t)))
              _fail(t);
            else
              d_64 = t;
            t = j_64(t);
            t = not_null(c_64);
          }
          return(t);
        }
        t = not_null(y_63);
        if(((z_63 != NULL) && (z_63 != t)))
          _fail(t);
        else
          z_63 = t;
        t = not_null(t_63);
        t = d_90(t);
        if(((a_64 != NULL) && (a_64 != t)))
          _fail(t);
        else
          a_64 = t;
        t = i_64(t);
        return(t);
      }
      t = not_null(w_63);
      if(((x_63 != NULL) && (x_63 != t)))
        _fail(t);
      else
        x_63 = t;
      t = not_null(s_63);
      t = c_90(t);
      if(((y_63 != NULL) && (y_63 != t)))
        _fail(t);
      else
        y_63 = t;
      t = h_64(t);
      return(t);
    }
    t = not_null(n_62);
    if(((r_62 != NULL) && (r_62 != t)))
      _fail(t);
    else
      r_62 = t;
    t = not_null(o_62);
    if(((s_62 != NULL) && (s_62 != t)))
      _fail(t);
    else
      s_62 = t;
    t = not_null(p_62);
    if(((s_63 != NULL) && (s_63 != t)))
      _fail(t);
    else
      s_63 = t;
    t = not_null(q_62);
    if(((t_63 != NULL) && (t_63 != t)))
      _fail(t);
    else
      t_63 = t;
    t = not_null(n_62);
    {
      ATerm v_63 = NULL;
      ATerm f_64 (ATerm t)
      {
        t = not_null(v_63);
        if(((u_63 != NULL) && (u_63 != t)))
          _fail(t);
        else
          u_63 = t;
        t = not_null(v_63);
        return(t);
      }
      t = SSLgetAnnotations(not_null(r_62));
      if(((v_63 != NULL) && (v_63 != t)))
        _fail(t);
      else
        v_63 = t;
      t = f_64(t);
      t = not_null(s_62);
      t = b_90(t);
      if(((w_63 != NULL) && (w_63 != t)))
        _fail(t);
      else
        w_63 = t;
      t = g_64(t);
    }
    return(t);
  }
  if(((n_62 != NULL) && (n_62 != t)))
    _fail(t);
  else
    n_62 = t;
  t = not_null(n_62);
  if(match_cons(t, sym_Con_3))
    {
      o_62 = ATgetArgument(t, 0);
      p_62 = ATgetArgument(t, 1);
      q_62 = ATgetArgument(t, 2);
      t = e_64(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm h_21 = t;
  if((PushChoice() == 0))
    {
      ATerm r_2 (ATerm t)
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(r_2, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_21;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL;
  ATerm z_64 (ATerm t)
  {
    ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL;
    t = not_null(q_64);
    if(((t_64 != NULL) && (t_64 != t)))
      _fail(t);
    else
      t_64 = t;
    t = not_null(r_64);
    if(((v_64 != NULL) && (v_64 != t)))
      _fail(t);
    else
      v_64 = t;
    t = not_null(s_64);
    if(((u_64 != NULL) && (u_64 != t)))
      _fail(t);
    else
      u_64 = t;
    t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(v_64)), (ATerm) ATmakeAppl(sym_Where_1, not_null(u_64))), not_null(t_64)));
    return(t);
  }
  ATerm a_65 (ATerm t)
  {
    ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL;
    t = not_null(q_64);
    if(((x_64 != NULL) && (x_64 != t)))
      _fail(t);
    else
      x_64 = t;
    t = not_null(r_64);
    if(((y_64 != NULL) && (y_64 != t)))
      _fail(t);
    else
      y_64 = t;
    t = not_null(s_64);
    if(((w_64 != NULL) && (w_64 != t)))
      _fail(t);
    else
      w_64 = t;
    t = not_null(o_64);
    t = not_null(x_64);
    t = pureterm_0_0(t);
    t = not_null(y_64);
    t = buildterm_0_0(t);
    t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(y_64))), (ATerm) ATmakeAppl(sym_Where_1, not_null(w_64))), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_64))));
    return(t);
  }
  if(((o_64 != NULL) && (o_64 != t)))
    _fail(t);
  else
    o_64 = t;
  t = not_null(o_64);
  if(match_cons(t, sym_SRule_1))
    {
      p_64 = ATgetArgument(t, 0);
      t = not_null(p_64);
      if(match_cons(t, sym_StratRule_3))
        {
          q_64 = ATgetArgument(t, 0);
          r_64 = ATgetArgument(t, 1);
          s_64 = ATgetArgument(t, 2);
          t = z_64(t);
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              q_64 = ATgetArgument(t, 0);
              r_64 = ATgetArgument(t, 1);
              s_64 = ATgetArgument(t, 2);
              t = a_65(t);
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
ATerm Scope_2_0 (ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm t)
{
  ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL;
  ATerm b_66 (ATerm t)
  {
    ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,p_65 = NULL;
    ATerm d_66 (ATerm t)
    {
      ATerm q_65 = NULL,r_65 = NULL;
      ATerm e_66 (ATerm t)
      {
        ATerm s_65 = NULL,t_65 = NULL;
        t = not_null(r_65);
        if(((s_65 != NULL) && (s_65 != t)))
          _fail(t);
        else
          s_65 = t;
        t = not_null(r_65);
        {
          ATerm a_66 = NULL;
          ATerm f_66 (ATerm t)
          {
            t = not_null(a_66);
            if(((t_65 != NULL) && (t_65 != t)))
              _fail(t);
            else
              t_65 = t;
            t = not_null(a_66);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(q_65), not_null(s_65)), not_null(n_65));
          if(((a_66 != NULL) && (a_66 != t)))
            _fail(t);
          else
            a_66 = t;
          t = f_66(t);
          t = not_null(t_65);
        }
        return(t);
      }
      t = not_null(p_65);
      if(((q_65 != NULL) && (q_65 != t)))
        _fail(t);
      else
        q_65 = t;
      t = not_null(m_65);
      t = w_92(t);
      if(((r_65 != NULL) && (r_65 != t)))
        _fail(t);
      else
        r_65 = t;
      t = e_66(t);
      return(t);
    }
    t = not_null(h_65);
    if(((k_65 != NULL) && (k_65 != t)))
      _fail(t);
    else
      k_65 = t;
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
    t = not_null(h_65);
    {
      ATerm o_65 = NULL;
      ATerm c_66 (ATerm t)
      {
        t = not_null(o_65);
        if(((n_65 != NULL) && (n_65 != t)))
          _fail(t);
        else
          n_65 = t;
        t = not_null(o_65);
        return(t);
      }
      t = SSLgetAnnotations(not_null(k_65));
      if(((o_65 != NULL) && (o_65 != t)))
        _fail(t);
      else
        o_65 = t;
      t = c_66(t);
      t = not_null(l_65);
      t = v_92(t);
      if(((p_65 != NULL) && (p_65 != t)))
        _fail(t);
      else
        p_65 = t;
      t = d_66(t);
    }
    return(t);
  }
  if(((h_65 != NULL) && (h_65 != t)))
    _fail(t);
  else
    h_65 = t;
  t = not_null(h_65);
  if(match_cons(t, sym_Scope_2))
    {
      i_65 = ATgetArgument(t, 0);
      j_65 = ATgetArgument(t, 1);
      t = b_66(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm t_104 (ATerm), ATerm t)
{
  ATerm g_66 (ATerm t)
  {
    ATerm k_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_104(t);
        ;
        LocalPopChoice(u_21);
      }
    else
      {
        t = k_21;
        t = SRTS_one(g_66, t);
      }
    return(t);
  }
  t = g_66(t);
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL;
  ATerm c_68 (ATerm t)
  {
    ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL;
    t = not_null(y_66);
    if(((b_67 != NULL) && (b_67 != t)))
      _fail(t);
    else
      b_67 = t;
    t = not_null(z_66);
    if(((c_67 != NULL) && (c_67 != t)))
      _fail(t);
    else
      c_67 = t;
    t = not_null(a_67);
    if(((d_67 != NULL) && (d_67 != t)))
      _fail(t);
    else
      d_67 = t;
    t = not_null(w_66);
    {
      ATerm m_67 = NULL;
      ATerm d_68 (ATerm t)
      {
        ATerm s_67 = NULL;
        ATerm f_68 (ATerm t)
        {
          ATerm b_68 = NULL;
          ATerm h_68 (ATerm t)
          {
            t = not_null(b_68);
            if(((l_67 != NULL) && (l_67 != t)))
              _fail(t);
            else
              l_67 = t;
            t = not_null(b_68);
            return(t);
          }
          t = not_null(s_67);
          if(((k_67 != NULL) && (k_67 != t)))
            _fail(t);
          else
            k_67 = t;
          t = not_null(c_67);
          {
            ATerm s_2 (ATerm t)
            {
              ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL;
              ATerm g_68 (ATerm t)
              {
                t = not_null(v_67);
                if(((i_67 != NULL) && (i_67 != t)))
                  _fail(t);
                else
                  i_67 = t;
                t = not_null(w_67);
                if(((h_67 != NULL) && (h_67 != t)))
                  _fail(t);
                else
                  h_67 = t;
                t = not_null(y_67);
                if(((f_67 != NULL) && (f_67 != t)))
                  _fail(t);
                else
                  f_67 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_67));
                return(t);
              }
              if(((t_67 != NULL) && (t_67 != t)))
                _fail(t);
              else
                t_67 = t;
              t = not_null(t_67);
              if(match_cons(t, sym_Con_3))
                {
                  u_67 = ATgetArgument(t, 0);
                  w_67 = ATgetArgument(t, 1);
                  x_67 = ATgetArgument(t, 2);
                  t = not_null(u_67);
                  if(match_cons(t, sym_Var_1))
                    {
                      v_67 = ATgetArgument(t, 0);
                      t = not_null(x_67);
                      if(match_cons(t, sym_CallT_3))
                        {
                          y_67 = ATgetArgument(t, 0);
                          z_67 = ATgetArgument(t, 1);
                          a_68 = ATgetArgument(t, 2);
                          t = not_null(z_67);
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = not_null(a_68);
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = g_68(t);
                                }
                              else
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
            t = oncetd_1_0(s_2, t);
            if(((b_68 != NULL) && (b_68 != t)))
              _fail(t);
            else
              b_68 = t;
            t = h_68(t);
          }
          return(t);
        }
        t = not_null(m_67);
        if(((j_67 != NULL) && (j_67 != t)))
          _fail(t);
        else
          j_67 = t;
        t = not_null(b_67);
        {
          ATerm t_2 (ATerm t)
          {
            ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL;
            ATerm e_68 (ATerm t)
            {
              t = not_null(p_67);
              if(((i_67 != NULL) && (i_67 != t)))
                _fail(t);
              else
                i_67 = t;
              t = not_null(q_67);
              if(((g_67 != NULL) && (g_67 != t)))
                _fail(t);
              else
                g_67 = t;
              t = not_null(r_67);
              if(((e_67 != NULL) && (e_67 != t)))
                _fail(t);
              else
                e_67 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_67));
              return(t);
            }
            if(((n_67 != NULL) && (n_67 != t)))
              _fail(t);
            else
              n_67 = t;
            t = not_null(n_67);
            if(match_cons(t, sym_Con_3))
              {
                o_67 = ATgetArgument(t, 0);
                q_67 = ATgetArgument(t, 1);
                r_67 = ATgetArgument(t, 2);
                t = not_null(o_67);
                if(match_cons(t, sym_Var_1))
                  {
                    p_67 = ATgetArgument(t, 0);
                    t = e_68(t);
                  }
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
          t = oncetd_1_0(t_2, t);
          if(((s_67 != NULL) && (s_67 != t)))
            _fail(t);
          else
            s_67 = t;
          t = f_68(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((m_67 != NULL) && (m_67 != t)))
        _fail(t);
      else
        m_67 = t;
      t = d_68(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_67)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_67), not_null(l_67), (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_67), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(f_67), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_67), not_null(h_67), term_t_18))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_67)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_67)))))));
    }
    return(t);
  }
  if(((w_66 != NULL) && (w_66 != t)))
    _fail(t);
  else
    w_66 = t;
  t = not_null(w_66);
  if(match_cons(t, sym_SRule_1))
    {
      x_66 = ATgetArgument(t, 0);
      t = not_null(x_66);
      if(match_cons(t, sym_Rule_3))
        {
          y_66 = ATgetArgument(t, 0);
          z_66 = ATgetArgument(t, 1);
          a_67 = ATgetArgument(t, 2);
          t = c_68(t);
        }
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
  ATerm u_2 (ATerm t)
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0_0(t);
        t = desugarRule_0_0(t);
        ;
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        {
          ATerm f_22 = t;
          int g_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2_0(_id, desugarRule_0_0, t);
              ;
              LocalPopChoice(g_22);
            }
          else
            {
              t = f_22;
              t = RtoS_0_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1_0(u_2, t);
  return(t);
}
ATerm topdown_1_0 (ATerm p_103 (ATerm), ATerm t)
{
  t = p_103(t);
  {
    ATerm v_2 (ATerm t)
    {
      t = topdown_1_0(p_103, t);
      return(t);
    }
    t = SRTS_all(v_2, t);
  }
  return(t);
}
ATerm desugar_0_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    t = try_1_0(desugarRule_0_0, t);
    {
      ATerm x_2 (ATerm t)
      {
        ATerm h_22 = t;
        int i_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(i_22);
          }
        else
          {
            t = h_22;
            {
              ATerm t_22 = t;
              int u_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(u_22);
                }
              else
                {
                  t = t_22;
                  {
                    ATerm v_22 = t;
                    int w_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(w_22);
                      }
                    else
                      {
                        t = v_22;
                        {
                          ATerm h_23 = t;
                          int i_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0_0(t);
                              ;
                              LocalPopChoice(i_23);
                            }
                          else
                            {
                              t = h_23;
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
      t = repeat_1_0(x_2, t);
    }
    return(t);
  }
  t = topdown_1_0(w_2, t);
  return(t);
}
ATerm _0_0 (ATerm t)
{
  ATerm n_68 = NULL;
  ATerm t_68 (ATerm t)
  {
    ATerm o_68 = NULL,p_68 = NULL,r_68 = NULL;
    t = not_null(n_68);
    if(((o_68 != NULL) && (o_68 != t)))
      _fail(t);
    else
      o_68 = t;
    t = not_null(n_68);
    {
      ATerm j_23;
      j_23 = t;
      {
        ATerm q_68 = NULL;
        ATerm u_68 (ATerm t)
        {
          t = not_null(q_68);
          if(((p_68 != NULL) && (p_68 != t)))
            _fail(t);
          else
            p_68 = t;
          t = not_null(q_68);
          return(t);
        }
        t = SSLgetAnnotations(not_null(o_68));
        if(((q_68 != NULL) && (q_68 != t)))
          _fail(t);
        else
          q_68 = t;
        t = u_68(t);
      }
      t = j_23;
      {
        ATerm s_68 = NULL;
        ATerm v_68 (ATerm t)
        {
          t = not_null(s_68);
          if(((r_68 != NULL) && (r_68 != t)))
            _fail(t);
          else
            r_68 = t;
          t = not_null(s_68);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(p_68));
        if(((s_68 != NULL) && (s_68 != t)))
          _fail(t);
        else
          s_68 = t;
        t = v_68(t);
        t = not_null(r_68);
      }
    }
    return(t);
  }
  if(((n_68 != NULL) && (n_68 != t)))
    _fail(t);
  else
    n_68 = t;
  t = not_null(n_68);
  if(match_cons(t, sym__0))
    {
      t = t_68(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Ttl_0_0 (ATerm t)
{
  ATerm n_69 = NULL;
  ATerm c_70 (ATerm t)
  {
    ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL,y_69 = NULL,a_70 = NULL;
    ATerm g_70 (ATerm t)
    {
      ATerm b_70 = NULL;
      t = not_null(a_70);
      if(((b_70 != NULL) && (b_70 != t)))
        _fail(t);
      else
        b_70 = t;
      t = not_null(b_70);
      return(t);
    }
    t = not_null(n_69);
    if(((o_69 != NULL) && (o_69 != t)))
      _fail(t);
    else
      o_69 = t;
    t = not_null(n_69);
    {
      ATerm k_23;
      k_23 = t;
      {
        ATerm r_69 = NULL;
        ATerm d_70 (ATerm t)
        {
          ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL,x_69 = NULL;
          ATerm e_70 (ATerm t)
          {
            t = not_null(w_69);
            if(((p_69 != NULL) && (p_69 != t)))
              _fail(t);
            else
              p_69 = t;
            t = not_null(x_69);
            if(((q_69 != NULL) && (q_69 != t)))
              _fail(t);
            else
              q_69 = t;
            t = not_null(t_69);
            return(t);
          }
          t = not_null(r_69);
          if(((s_69 != NULL) && (s_69 != t)))
            _fail(t);
          else
            s_69 = t;
          t = not_null(r_69);
          t = SSL_explode_term(not_null(s_69));
          if(((t_69 != NULL) && (t_69 != t)))
            _fail(t);
          else
            t_69 = t;
          t = not_null(t_69);
          if(match_cons(t, sym__2))
            {
              u_69 = ATgetArgument(t, 0);
              v_69 = ATgetArgument(t, 1);
              t = not_null(u_69);
              if(match_string(t, ""))
                {
                  t = not_null(v_69);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_69 = ATgetFirst((ATermList) t);
                      x_69 = (ATerm) ATgetNext((ATermList) t);
                      t = e_70(t);
                    }
                  else
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
        t = not_null(o_69);
        if(((r_69 != NULL) && (r_69 != t)))
          _fail(t);
        else
          r_69 = t;
        t = d_70(t);
      }
      t = k_23;
      {
        ATerm r_23;
        r_23 = t;
        {
          ATerm z_69 = NULL;
          ATerm f_70 (ATerm t)
          {
            t = not_null(z_69);
            if(((y_69 != NULL) && (y_69 != t)))
              _fail(t);
            else
              y_69 = t;
            t = not_null(z_69);
            return(t);
          }
          t = term_z_12;
          if(((z_69 != NULL) && (z_69 != t)))
            _fail(t);
          else
            z_69 = t;
          t = f_70(t);
        }
        t = r_23;
        t = SSL_mkterm(not_null(y_69), not_null(q_69));
        if(((a_70 != NULL) && (a_70 != t)))
          _fail(t);
        else
          a_70 = t;
        t = g_70(t);
      }
    }
    return(t);
  }
  if(((n_69 != NULL) && (n_69 != t)))
    _fail(t);
  else
    n_69 = t;
  t = c_70(t);
  return(t);
}
ATerm Thd_0_0 (ATerm t)
{
  t = Fst_0_0(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm r_107 (ATerm), ATerm t)
{
  ATerm s_70 = NULL,z_70 = NULL,b_71 = NULL;
  ATerm i_71 (ATerm t)
  {
    ATerm c_71 = NULL;
    t = not_null(b_71);
    if(((c_71 != NULL) && (c_71 != t)))
      _fail(t);
    else
      c_71 = t;
    t = not_null(c_71);
    return(t);
  }
  ATerm d_71 (ATerm t)
  {
    ATerm s_23 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_70 = NULL,q_70 = NULL;
        ATerm c_24;
        c_24 = t;
        {
          ATerm p_70 = NULL;
          ATerm e_71 (ATerm t)
          {
            t = not_null(p_70);
            if(((o_70 != NULL) && (o_70 != t)))
              _fail(t);
            else
              o_70 = t;
            t = not_null(p_70);
            return(t);
          }
          t = map_1_0(Thd_0_0, t);
          t = r_107(t);
          if(((p_70 != NULL) && (p_70 != t)))
            _fail(t);
          else
            p_70 = t;
          t = e_71(t);
        }
        t = c_24;
        {
          ATerm r_70 = NULL;
          ATerm f_71 (ATerm t)
          {
            t = not_null(r_70);
            if(((q_70 != NULL) && (q_70 != t)))
              _fail(t);
            else
              q_70 = t;
            t = not_null(r_70);
            return(t);
          }
          t = map_1_0(Ttl_0_0, t);
          t = d_71(t);
          if(((r_70 != NULL) && (r_70 != t)))
            _fail(t);
          else
            r_70 = t;
          t = f_71(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(q_70)), not_null(o_70));
        }
        ;
        LocalPopChoice(b_24);
      }
    else
      {
        t = s_23;
        t = map_1_0(_0_0, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = d_71(t);
  {
    ATerm j_24;
    j_24 = t;
    {
      ATerm t_70 = NULL;
      ATerm g_71 (ATerm t)
      {
        t = not_null(t_70);
        if(((s_70 != NULL) && (s_70 != t)))
          _fail(t);
        else
          s_70 = t;
        t = not_null(t_70);
        return(t);
      }
      if(((t_70 != NULL) && (t_70 != t)))
        _fail(t);
      else
        t_70 = t;
      t = g_71(t);
    }
    t = j_24;
    {
      ATerm k_24;
      k_24 = t;
      {
        ATerm a_71 = NULL;
        ATerm h_71 (ATerm t)
        {
          t = not_null(a_71);
          if(((z_70 != NULL) && (z_70 != t)))
            _fail(t);
          else
            z_70 = t;
          t = not_null(a_71);
          return(t);
        }
        t = term_z_12;
        if(((a_71 != NULL) && (a_71 != t)))
          _fail(t);
        else
          a_71 = t;
        t = h_71(t);
      }
      t = k_24;
      t = SSL_mkterm(not_null(z_70), not_null(s_70));
      if(((b_71 != NULL) && (b_71 != t)))
        _fail(t);
      else
        b_71 = t;
      t = i_71(t);
    }
  }
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm s_71 = NULL;
  ATerm o_72 (ATerm t)
  {
    ATerm t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL;
    t = not_null(s_71);
    if(((t_71 != NULL) && (t_71 != t)))
      _fail(t);
    else
      t_71 = t;
    t = not_null(s_71);
    {
      ATerm x_71 = NULL;
      ATerm q_72 (ATerm t)
      {
        ATerm y_71 = NULL;
        ATerm r_72 (ATerm t)
        {
          ATerm z_71 = NULL;
          ATerm s_72 (ATerm t)
          {
            t = not_null(z_71);
            if(((w_71 != NULL) && (w_71 != t)))
              _fail(t);
            else
              w_71 = t;
            t = not_null(z_71);
            return(t);
          }
          t = not_null(y_71);
          if(((v_71 != NULL) && (v_71 != t)))
            _fail(t);
          else
            v_71 = t;
          t = not_null(y_71);
          t = new_0_0(t);
          if(((z_71 != NULL) && (z_71 != t)))
            _fail(t);
          else
            z_71 = t;
          t = s_72(t);
          return(t);
        }
        t = not_null(x_71);
        if(((u_71 != NULL) && (u_71 != t)))
          _fail(t);
        else
          u_71 = t;
        t = not_null(x_71);
        t = new_0_0(t);
        if(((y_71 != NULL) && (y_71 != t)))
          _fail(t);
        else
          y_71 = t;
        t = r_72(t);
        return(t);
      }
      t = new_0_0(t);
      if(((x_71 != NULL) && (x_71 != t)))
        _fail(t);
      else
        x_71 = t;
      t = q_72(t);
      t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_71)), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_z_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_71)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_71)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_71))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(u_71), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_18), term_q_18)), not_null(v_71), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_71)), not_null(w_71), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_71)));
    }
    return(t);
  }
  ATerm p_72 (ATerm t)
  {
    ATerm a_72 = NULL,b_72 = NULL,c_72 = NULL,j_72 = NULL;
    t = not_null(s_71);
    if(((a_72 != NULL) && (a_72 != t)))
      _fail(t);
    else
      a_72 = t;
    t = not_null(s_71);
    {
      ATerm k_72 = NULL;
      ATerm t_72 (ATerm t)
      {
        ATerm l_72 = NULL;
        ATerm u_72 (ATerm t)
        {
          ATerm n_72 = NULL;
          ATerm v_72 (ATerm t)
          {
            t = not_null(n_72);
            if(((j_72 != NULL) && (j_72 != t)))
              _fail(t);
            else
              j_72 = t;
            t = not_null(n_72);
            return(t);
          }
          t = not_null(l_72);
          if(((c_72 != NULL) && (c_72 != t)))
            _fail(t);
          else
            c_72 = t;
          t = not_null(l_72);
          t = new_0_0(t);
          if(((n_72 != NULL) && (n_72 != t)))
            _fail(t);
          else
            n_72 = t;
          t = v_72(t);
          return(t);
        }
        t = not_null(k_72);
        if(((b_72 != NULL) && (b_72 != t)))
          _fail(t);
        else
          b_72 = t;
        t = not_null(k_72);
        t = new_0_0(t);
        if(((l_72 != NULL) && (l_72 != t)))
          _fail(t);
        else
          l_72 = t;
        t = u_72(t);
        return(t);
      }
      t = new_0_0(t);
      if(((k_72 != NULL) && (k_72 != t)))
        _fail(t);
      else
        k_72 = t;
      t = t_72(t);
      t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_72)), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_z_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_72)), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_72)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_72))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(b_72), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_18), term_q_18)), not_null(c_72), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_72)), not_null(j_72), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_72)));
    }
    return(t);
  }
  if(((s_71 != NULL) && (s_71 != t)))
    _fail(t);
  else
    s_71 = t;
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_72(t);
        ;
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        t = p_72(t);
      }
  }
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL;
  ATerm d_73 (ATerm t)
  {
    ATerm b_73 = NULL,c_73 = NULL;
    t = not_null(z_72);
    if(((b_73 != NULL) && (b_73 != t)))
      _fail(t);
    else
      b_73 = t;
    t = not_null(a_73);
    if(((c_73 != NULL) && (c_73 != t)))
      _fail(t);
    else
      c_73 = t;
    t = not_null(y_72);
    {
      ATerm n_24 = t;
      int o_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(not_null(b_73), not_null(c_73));
          ;
          LocalPopChoice(o_24);
        }
      else
        {
          t = n_24;
          t = SSL_subtr(not_null(b_73), not_null(c_73));
        }
    }
    return(t);
  }
  if(((y_72 != NULL) && (y_72 != t)))
    _fail(t);
  else
    y_72 = t;
  t = not_null(y_72);
  if(match_cons(t, sym__2))
    {
      z_72 = ATgetArgument(t, 0);
      a_73 = ATgetArgument(t, 1);
      t = d_73(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1_0 (ATerm t_114 (ATerm), ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm n_73 = NULL,o_73 = NULL,p_73 = NULL;
    ATerm j_74 (ATerm t)
    {
      ATerm q_73 = NULL,r_73 = NULL;
      t = not_null(o_73);
      if(((q_73 != NULL) && (q_73 != t)))
        _fail(t);
      else
        q_73 = t;
      t = not_null(p_73);
      if(((r_73 != NULL) && (r_73 != t)))
        _fail(t);
      else
        r_73 = t;
      t = (ATerm) ATmakeAppl(sym__3, not_null(q_73), not_null(r_73), (ATerm) ATempty);
      return(t);
    }
    if(((n_73 != NULL) && (n_73 != t)))
      _fail(t);
    else
      n_73 = t;
    t = not_null(n_73);
    if(match_cons(t, sym__2))
      {
        o_73 = ATgetArgument(t, 0);
        p_73 = ATgetArgument(t, 1);
        t = j_74(t);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    ATerm s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL;
    ATerm k_74 (ATerm t)
    {
      ATerm w_73 = NULL,x_73 = NULL;
      t = not_null(u_73);
      if(((w_73 != NULL) && (w_73 != t)))
        _fail(t);
      else
        w_73 = t;
      t = not_null(v_73);
      if(((x_73 != NULL) && (x_73 != t)))
        _fail(t);
      else
        x_73 = t;
      t = not_null(x_73);
      return(t);
    }
    if(((s_73 != NULL) && (s_73 != t)))
      _fail(t);
    else
      s_73 = t;
    t = not_null(s_73);
    if(match_cons(t, sym__3))
      {
        t_73 = ATgetArgument(t, 0);
        u_73 = ATgetArgument(t, 1);
        v_73 = ATgetArgument(t, 2);
        t = not_null(t_73);
        if(match_int(t, 0))
          {
            t = k_74(t);
          }
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
  ATerm a_3 (ATerm t)
  {
    ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL;
    ATerm l_74 (ATerm t)
    {
      ATerm c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,h_74 = NULL;
      t = not_null(z_73);
      if(((c_74 != NULL) && (c_74 != t)))
        _fail(t);
      else
        c_74 = t;
      t = not_null(a_74);
      if(((d_74 != NULL) && (d_74 != t)))
        _fail(t);
      else
        d_74 = t;
      t = not_null(b_74);
      if(((e_74 != NULL) && (e_74 != t)))
        _fail(t);
      else
        e_74 = t;
      t = not_null(y_73);
      {
        ATerm i_25;
        i_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_74), term_y_7);
        t = geq_0_0(t);
        t = i_25;
        {
          ATerm j_25;
          j_25 = t;
          {
            ATerm g_74 = NULL;
            ATerm m_74 (ATerm t)
            {
              t = not_null(g_74);
              if(((f_74 != NULL) && (f_74 != t)))
                _fail(t);
              else
                f_74 = t;
              t = not_null(g_74);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_74), term_y_7);
            t = subt_0_0(t);
            if(((g_74 != NULL) && (g_74 != t)))
              _fail(t);
            else
              g_74 = t;
            t = m_74(t);
          }
          t = j_25;
          {
            ATerm i_74 = NULL;
            ATerm n_74 (ATerm t)
            {
              t = not_null(i_74);
              if(((h_74 != NULL) && (h_74 != t)))
                _fail(t);
              else
                h_74 = t;
              t = not_null(i_74);
              return(t);
            }
            t = not_null(d_74);
            t = t_114(t);
            if(((i_74 != NULL) && (i_74 != t)))
              _fail(t);
            else
              i_74 = t;
            t = n_74(t);
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_74), not_null(d_74), (ATerm) ATinsert(CheckATermList(not_null(e_74)), not_null(h_74)));
          }
        }
      }
      return(t);
    }
    if(((y_73 != NULL) && (y_73 != t)))
      _fail(t);
    else
      y_73 = t;
    t = not_null(y_73);
    if(match_cons(t, sym__3))
      {
        z_73 = ATgetArgument(t, 0);
        a_74 = ATgetArgument(t, 1);
        b_74 = ATgetArgument(t, 2);
        t = l_74(t);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3_0(y_2, z_2, a_3, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm MkThreadApplication_0_0 (ATerm t)
{
  ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL;
  ATerm n_75 (ATerm t)
  {
    ATerm b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL;
    t = not_null(z_74);
    if(((b_75 != NULL) && (b_75 != t)))
      _fail(t);
    else
      b_75 = t;
    t = not_null(a_75);
    if(((c_75 != NULL) && (c_75 != t)))
      _fail(t);
    else
      c_75 = t;
    t = not_null(y_74);
    {
      ATerm k_75 = NULL;
      ATerm o_75 (ATerm t)
      {
        ATerm l_75 = NULL;
        ATerm p_75 (ATerm t)
        {
          ATerm m_75 = NULL;
          ATerm q_75 (ATerm t)
          {
            t = not_null(m_75);
            if(((f_75 != NULL) && (f_75 != t)))
              _fail(t);
            else
              f_75 = t;
            t = not_null(m_75);
            return(t);
          }
          t = not_null(l_75);
          if(((e_75 != NULL) && (e_75 != t)))
            _fail(t);
          else
            e_75 = t;
          t = not_null(l_75);
          t = new_0_0(t);
          if(((m_75 != NULL) && (m_75 != t)))
            _fail(t);
          else
            m_75 = t;
          t = q_75(t);
          return(t);
        }
        t = not_null(k_75);
        if(((d_75 != NULL) && (d_75 != t)))
          _fail(t);
        else
          d_75 = t;
        t = not_null(k_75);
        t = new_0_0(t);
        if(((l_75 != NULL) && (l_75 != t)))
          _fail(t);
        else
          l_75 = t;
        t = p_75(t);
        return(t);
      }
      t = new_0_0(t);
      if(((k_75 != NULL) && (k_75 != t)))
        _fail(t);
      else
        k_75 = t;
      t = o_75(t);
      t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_75)), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_z_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_75))), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_75)))), (ATerm) ATmakeAppl(sym_Op_2, term_z_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_75))), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_75))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(d_75), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_18), term_q_18)), not_null(e_75), (ATerm)ATmakeAppl(sym_Var_1, not_null(e_75)), not_null(f_75), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_75)));
    }
    return(t);
  }
  if(((y_74 != NULL) && (y_74 != t)))
    _fail(t);
  else
    y_74 = t;
  t = not_null(y_74);
  if(match_cons(t, sym__2))
    {
      z_74 = ATgetArgument(t, 0);
      a_75 = ATgetArgument(t, 1);
      t = n_75(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip1b_p__0_0 (ATerm t)
{
  ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL;
  ATerm x_75 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  if(((u_75 != NULL) && (u_75 != t)))
    _fail(t);
  else
    u_75 = t;
  t = not_null(u_75);
  if(match_cons(t, sym__2))
    {
      v_75 = ATgetArgument(t, 0);
      w_75 = ATgetArgument(t, 1);
      t = not_null(w_75);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = x_75(t);
        }
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
ATerm zipr_1_0 (ATerm j_108 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1b_p__0_0, Zip2_0_0, Zip3_0_0, j_108, t);
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL;
  ATerm e_76 (ATerm t)
  {
    ATerm d_76 = NULL;
    t = not_null(c_76);
    if(((d_76 != NULL) && (d_76 != t)))
      _fail(t);
    else
      d_76 = t;
    t = not_null(d_76);
    return(t);
  }
  if(((a_76 != NULL) && (a_76 != t)))
    _fail(t);
  else
    a_76 = t;
  t = not_null(a_76);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_76 = ATgetFirst((ATermList) t);
      c_76 = (ATerm) ATgetNext((ATermList) t);
      t = e_76(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0_0 (ATerm t)
{
  ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL;
  ATerm z_76 (ATerm t)
  {
    ATerm v_76 = NULL;
    t = not_null(t_76);
    if(((v_76 != NULL) && (v_76 != t)))
      _fail(t);
    else
      v_76 = t;
    t = not_null(v_76);
    return(t);
  }
  if(((s_76 != NULL) && (s_76 != t)))
    _fail(t);
  else
    s_76 = t;
  t = not_null(s_76);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_76 = ATgetFirst((ATermList) t);
      u_76 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(u_76);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = z_76(t);
        }
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
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0_0(t);
      ;
      LocalPopChoice(l_25);
    }
  else
    {
      t = k_25;
      t = Tl_0_0(t);
      t = last_0_0(t);
    }
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL,b_80 = NULL,c_80 = NULL;
  ATerm w_85 (ATerm t)
  {
    ATerm d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL,h_80 = NULL,i_80 = NULL,j_80 = NULL,k_80 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL,w_84 = NULL;
    t = not_null(b_79);
    if(((d_80 != NULL) && (d_80 != t)))
      _fail(t);
    else
      d_80 = t;
    t = not_null(b_80);
    if(((e_80 != NULL) && (e_80 != t)))
      _fail(t);
    else
      e_80 = t;
    t = not_null(c_80);
    if(((f_80 != NULL) && (f_80 != t)))
      _fail(t);
    else
      f_80 = t;
    t = not_null(a_79);
    {
      ATerm m_25;
      m_25 = t;
      {
        ATerm j_84 = NULL,l_84 = NULL,m_84 = NULL,n_84 = NULL;
        ATerm a_86 (ATerm t)
        {
          ATerm o_84 = NULL;
          ATerm b_86 (ATerm t)
          {
            ATerm p_84 = NULL,q_84 = NULL,r_84 = NULL,s_84 = NULL,t_84 = NULL,u_84 = NULL,v_84 = NULL;
            ATerm c_86 (ATerm t)
            {
              t = not_null(q_84);
              if(((j_80 != NULL) && (j_80 != t)))
                _fail(t);
              else
                j_80 = t;
              t = not_null(r_84);
              if(((k_80 != NULL) && (k_80 != t)))
                _fail(t);
              else
                k_80 = t;
              t = not_null(s_84);
              if(((f_84 != NULL) && (f_84 != t)))
                _fail(t);
              else
                f_84 = t;
              t = not_null(t_84);
              if(((g_84 != NULL) && (g_84 != t)))
                _fail(t);
              else
                g_84 = t;
              t = not_null(u_84);
              if(((h_84 != NULL) && (h_84 != t)))
                _fail(t);
              else
                h_84 = t;
              t = not_null(v_84);
              if(((i_84 != NULL) && (i_84 != t)))
                _fail(t);
              else
                i_84 = t;
              t = not_null(p_84);
              return(t);
            }
            t = not_null(o_84);
            if(((g_80 != NULL) && (g_80 != t)))
              _fail(t);
            else
              g_80 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_80)), not_null(h_80)), not_null(i_80));
            t = zipr_1_0(MkThreadApplication_0_0, t);
            t = tuple_unzip_1_0(_id, t);
            if(((p_84 != NULL) && (p_84 != t)))
              _fail(t);
            else
              p_84 = t;
            t = not_null(p_84);
            if(match_cons(t, sym__6))
              {
                q_84 = ATgetArgument(t, 0);
                r_84 = ATgetArgument(t, 1);
                s_84 = ATgetArgument(t, 2);
                t_84 = ATgetArgument(t, 3);
                u_84 = ATgetArgument(t, 4);
                v_84 = ATgetArgument(t, 5);
                t = c_86(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = not_null(m_84);
          if(((h_80 != NULL) && (h_80 != t)))
            _fail(t);
          else
            h_80 = t;
          t = not_null(n_84);
          if(((i_80 != NULL) && (i_80 != t)))
            _fail(t);
          else
            i_80 = t;
          t = not_null(i_80);
          t = last_0_0(t);
          if(((o_84 != NULL) && (o_84 != t)))
            _fail(t);
          else
            o_84 = t;
          t = b_86(t);
          return(t);
        }
        ATerm k_84 = NULL;
        ATerm z_85 (ATerm t)
        {
          t = not_null(k_84);
          if(((j_84 != NULL) && (j_84 != t)))
            _fail(t);
          else
            j_84 = t;
          t = not_null(k_84);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_80), term_y_7);
        t = add_0_0(t);
        if(((k_84 != NULL) && (k_84 != t)))
          _fail(t);
        else
          k_84 = t;
        t = z_85(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_84), term_n_25);
        t = copy_1_0(new_0_0, t);
        if(((l_84 != NULL) && (l_84 != t)))
          _fail(t);
        else
          l_84 = t;
        t = not_null(l_84);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_84 = ATgetFirst((ATermList) t);
            n_84 = (ATerm) ATgetNext((ATermList) t);
            t = a_86(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = m_25;
      {
        ATerm x_84 = NULL;
        ATerm d_86 (ATerm t)
        {
          t = not_null(x_84);
          if(((w_84 != NULL) && (w_84 != t)))
            _fail(t);
          else
            w_84 = t;
          t = not_null(x_84);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(h_84)), not_null(f_84)), not_null(i_80));
        t = concat_0_0(t);
        if(((x_84 != NULL) && (x_84 != t)))
          _fail(t);
        else
          x_84 = t;
        t = d_86(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, not_null(d_80), term_o_25), not_null(k_80), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(w_84)), not_null(h_80)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_z_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_80))), (ATerm) ATmakeAppl(sym_Op_2, not_null(d_80), not_null(g_84)))), (ATerm)ATmakeAppl(sym_Op_2, term_z_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_80))), (ATerm) ATmakeAppl(sym_Op_2, not_null(d_80), not_null(i_84)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(j_80))))));
      }
    }
    return(t);
  }
  ATerm x_85 (ATerm t)
  {
    ATerm y_84 = NULL,z_84 = NULL,a_85 = NULL;
    t = not_null(b_79);
    if(((y_84 != NULL) && (y_84 != t)))
      _fail(t);
    else
      y_84 = t;
    t = not_null(c_80);
    if(((z_84 != NULL) && (z_84 != t)))
      _fail(t);
    else
      z_84 = t;
    t = not_null(a_79);
    {
      ATerm b_85 = NULL;
      ATerm e_86 (ATerm t)
      {
        t = not_null(b_85);
        if(((a_85 != NULL) && (a_85 != t)))
          _fail(t);
        else
          a_85 = t;
        t = not_null(b_85);
        return(t);
      }
      t = new_0_0(t);
      if(((b_85 != NULL) && (b_85 != t)))
        _fail(t);
      else
        b_85 = t;
      t = e_86(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, not_null(y_84), term_o_25), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_85)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_z_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_85))), (ATerm) ATmakeAppl(sym_Op_2, not_null(y_84), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_z_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_85))), (ATerm) ATmakeAppl(sym_Op_2, not_null(y_84), (ATerm) ATempty))), term_t_18))));
    }
    return(t);
  }
  ATerm y_85 (ATerm t)
  {
    ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL,i_85 = NULL,j_85 = NULL,k_85 = NULL,l_85 = NULL,u_85 = NULL;
    t = not_null(b_79);
    if(((c_85 != NULL) && (c_85 != t)))
      _fail(t);
    else
      c_85 = t;
    t = not_null(b_80);
    if(((d_85 != NULL) && (d_85 != t)))
      _fail(t);
    else
      d_85 = t;
    t = not_null(c_80);
    if(((e_85 != NULL) && (e_85 != t)))
      _fail(t);
    else
      e_85 = t;
    t = not_null(a_79);
    {
      ATerm p_25;
      p_25 = t;
      {
        ATerm m_85 = NULL;
        ATerm f_86 (ATerm t)
        {
          ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL,t_85 = NULL;
          ATerm g_86 (ATerm t)
          {
            t = not_null(o_85);
            if(((g_85 != NULL) && (g_85 != t)))
              _fail(t);
            else
              g_85 = t;
            t = not_null(p_85);
            if(((h_85 != NULL) && (h_85 != t)))
              _fail(t);
            else
              h_85 = t;
            t = not_null(q_85);
            if(((i_85 != NULL) && (i_85 != t)))
              _fail(t);
            else
              i_85 = t;
            t = not_null(r_85);
            if(((j_85 != NULL) && (j_85 != t)))
              _fail(t);
            else
              j_85 = t;
            t = not_null(s_85);
            if(((k_85 != NULL) && (k_85 != t)))
              _fail(t);
            else
              k_85 = t;
            t = not_null(t_85);
            if(((l_85 != NULL) && (l_85 != t)))
              _fail(t);
            else
              l_85 = t;
            t = not_null(n_85);
            return(t);
          }
          t = not_null(m_85);
          if(((f_85 != NULL) && (f_85 != t)))
            _fail(t);
          else
            f_85 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_85), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_85)));
          t = copy_1_0(MkDistApplication_0_0, t);
          t = tuple_unzip_1_0(_id, t);
          if(((n_85 != NULL) && (n_85 != t)))
            _fail(t);
          else
            n_85 = t;
          t = not_null(n_85);
          if(match_cons(t, sym__6))
            {
              o_85 = ATgetArgument(t, 0);
              p_85 = ATgetArgument(t, 1);
              q_85 = ATgetArgument(t, 2);
              r_85 = ATgetArgument(t, 3);
              s_85 = ATgetArgument(t, 4);
              t_85 = ATgetArgument(t, 5);
              t = g_86(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = new_0_0(t);
        if(((m_85 != NULL) && (m_85 != t)))
          _fail(t);
        else
          m_85 = t;
        t = f_86(t);
      }
      t = p_25;
      {
        ATerm v_85 = NULL;
        ATerm h_86 (ATerm t)
        {
          t = not_null(v_85);
          if(((u_85 != NULL) && (u_85 != t)))
            _fail(t);
          else
            u_85 = t;
          t = not_null(v_85);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_85), not_null(k_85));
        t = conc_0_0(t);
        if(((v_85 != NULL) && (v_85 != t)))
          _fail(t);
        else
          v_85 = t;
        t = h_86(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, not_null(c_85), term_q_25), not_null(h_85), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(u_85)), not_null(f_85)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_z_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_85))), (ATerm) ATmakeAppl(sym_Op_2, not_null(c_85), not_null(j_85)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(c_85), not_null(l_85)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(g_85))))));
      }
    }
    return(t);
  }
  if(((a_79 != NULL) && (a_79 != t)))
    _fail(t);
  else
    a_79 = t;
  t = not_null(a_79);
  if(match_cons(t, sym__3))
    {
      b_79 = ATgetArgument(t, 0);
      c_79 = ATgetArgument(t, 1);
      d_79 = ATgetArgument(t, 2);
      t = not_null(c_79);
      if(match_string(t, "T"))
        {
          t = not_null(d_79);
          if(match_cons(t, sym__2))
            {
              b_80 = ATgetArgument(t, 0);
              c_80 = ATgetArgument(t, 1);
              t = not_null(b_80);
              if(match_int(t, 0))
                {
                  ATerm r_25 = t;
                  int s_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = w_85(t);
                      ;
                      LocalPopChoice(s_25);
                    }
                  else
                    {
                      t = r_25;
                      t = x_85(t);
                    }
                }
              else
                {
                  t = w_85(t);
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
              t = not_null(d_79);
              if(match_cons(t, sym__2))
                {
                  b_80 = ATgetArgument(t, 0);
                  c_80 = ATgetArgument(t, 1);
                  t = y_85(t);
                }
              else
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
  ATerm n_86 = NULL,o_86 = NULL,r_86 = NULL,s_86 = NULL,t_86 = NULL,u_86 = NULL,v_86 = NULL;
  ATerm c_87 (ATerm t)
  {
    ATerm w_86 = NULL,x_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL;
    t = not_null(s_86);
    if(((w_86 != NULL) && (w_86 != t)))
      _fail(t);
    else
      w_86 = t;
    t = not_null(t_86);
    if(((x_86 != NULL) && (x_86 != t)))
      _fail(t);
    else
      x_86 = t;
    t = not_null(u_86);
    if(((y_86 != NULL) && (y_86 != t)))
      _fail(t);
    else
      y_86 = t;
    t = not_null(v_86);
    if(((z_86 != NULL) && (z_86 != t)))
      _fail(t);
    else
      z_86 = t;
    t = not_null(n_86);
    {
      ATerm b_87 = NULL;
      ATerm d_87 (ATerm t)
      {
        t = not_null(b_87);
        if(((a_87 != NULL) && (a_87 != t)))
          _fail(t);
        else
          a_87 = t;
        t = not_null(b_87);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__3, not_null(w_86), not_null(x_86), not_null(y_86));
      t = DefineCongruence_0_0(t);
      t = desugar_0_0(t);
      if(((b_87 != NULL) && (b_87 != t)))
        _fail(t);
      else
        b_87 = t;
      t = d_87(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_87), not_null(z_86));
    }
    return(t);
  }
  if(((n_86 != NULL) && (n_86 != t)))
    _fail(t);
  else
    n_86 = t;
  t = not_null(n_86);
  if(match_cons(t, sym__2))
    {
      o_86 = ATgetArgument(t, 0);
      v_86 = ATgetArgument(t, 1);
      t = not_null(o_86);
      if(match_cons(t, sym__2))
        {
          r_86 = ATgetArgument(t, 0);
          u_86 = ATgetArgument(t, 1);
          t = not_null(r_86);
          if(match_cons(t, sym_Mod_2))
            {
              s_86 = ATgetArgument(t, 0);
              t_86 = ATgetArgument(t, 1);
              t = c_87(t);
            }
          else
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
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0_0(t);
      ;
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      t = OverloadedDef_0_0(t);
      t = _2_0(joindefs_0_0, _id, t);
    }
  return(t);
}
ATerm GnUndefined_0_0 (ATerm t)
{
  ATerm h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL,l_87 = NULL,m_87 = NULL,n_87 = NULL,o_87 = NULL;
  ATerm v_87 (ATerm t)
  {
    ATerm p_87 = NULL,q_87 = NULL,r_87 = NULL,s_87 = NULL,t_87 = NULL,u_87 = NULL;
    t = not_null(j_87);
    if(((t_87 != NULL) && (t_87 != t)))
      _fail(t);
    else
      t_87 = t;
    t = not_null(k_87);
    if(((p_87 != NULL) && (p_87 != t)))
      _fail(t);
    else
      p_87 = t;
    t = not_null(l_87);
    if(((q_87 != NULL) && (q_87 != t)))
      _fail(t);
    else
      q_87 = t;
    t = not_null(m_87);
    if(((r_87 != NULL) && (r_87 != t)))
      _fail(t);
    else
      r_87 = t;
    t = not_null(n_87);
    if(((s_87 != NULL) && (s_87 != t)))
      _fail(t);
    else
      s_87 = t;
    t = not_null(o_87);
    if(((u_87 != NULL) && (u_87 != t)))
      _fail(t);
    else
      u_87 = t;
    t = (ATerm) ATmakeAppl(sym__5, not_null(p_87), not_null(q_87), not_null(r_87), not_null(s_87), (ATerm) ATinsert(CheckATermList(not_null(u_87)), not_null(t_87)));
    return(t);
  }
  if(((h_87 != NULL) && (h_87 != t)))
    _fail(t);
  else
    h_87 = t;
  t = not_null(h_87);
  if(match_cons(t, sym__5))
    {
      i_87 = ATgetArgument(t, 0);
      l_87 = ATgetArgument(t, 1);
      m_87 = ATgetArgument(t, 2);
      n_87 = ATgetArgument(t, 3);
      o_87 = ATgetArgument(t, 4);
      t = not_null(i_87);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_87 = ATgetFirst((ATermList) t);
          k_87 = (ATerm) ATgetNext((ATermList) t);
          t = v_87(t);
        }
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
ATerm diff_1_0 (ATerm n_111 (ATerm), ATerm t)
{
  ATerm a_88 = NULL,b_88 = NULL,d_88 = NULL;
  ATerm g_88 (ATerm t)
  {
    ATerm e_88 = NULL,f_88 = NULL;
    t = not_null(b_88);
    if(((f_88 != NULL) && (f_88 != t)))
      _fail(t);
    else
      f_88 = t;
    t = not_null(d_88);
    if(((e_88 != NULL) && (e_88 != t)))
      _fail(t);
    else
      e_88 = t;
    t = not_null(f_88);
    {
      ATerm i_88 (ATerm t)
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            ;
            LocalPopChoice(w_25);
          }
        else
          {
            t = v_25;
            {
              ATerm x_25 = t;
              int y_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_3 (ATerm t)
                  {
                    t = not_null(e_88);
                    return(t);
                  }
                  t = HdMember_p__2_0(n_111, b_3, t);
                  t = i_88(t);
                  ;
                  LocalPopChoice(y_25);
                }
              else
                {
                  t = x_25;
                  t = Cons_2_0(_id, i_88, t);
                }
            }
          }
        return(t);
      }
      t = i_88(t);
    }
    return(t);
  }
  if(((a_88 != NULL) && (a_88 != t)))
    _fail(t);
  else
    a_88 = t;
  t = not_null(a_88);
  if(match_cons(t, sym__2))
    {
      b_88 = ATgetArgument(t, 0);
      d_88 = ATgetArgument(t, 1);
      t = g_88(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfShift_0_0 (ATerm t)
{
  ATerm m_88 = NULL,n_88 = NULL,o_88 = NULL,p_88 = NULL,q_88 = NULL;
  ATerm u_88 (ATerm t)
  {
    ATerm r_88 = NULL,s_88 = NULL,t_88 = NULL;
    t = not_null(n_88);
    if(((s_88 != NULL) && (s_88 != t)))
      _fail(t);
    else
      s_88 = t;
    t = not_null(p_88);
    if(((r_88 != NULL) && (r_88 != t)))
      _fail(t);
    else
      r_88 = t;
    t = not_null(q_88);
    if(((t_88 != NULL) && (t_88 != t)))
      _fail(t);
    else
      t_88 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_88)), not_null(r_88)), not_null(t_88));
    return(t);
  }
  if(((m_88 != NULL) && (m_88 != t)))
    _fail(t);
  else
    m_88 = t;
  t = not_null(m_88);
  if(match_cons(t, sym__2))
    {
      n_88 = ATgetArgument(t, 0);
      o_88 = ATgetArgument(t, 1);
      t = not_null(o_88);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_88 = ATgetFirst((ATermList) t);
          q_88 = (ATerm) ATgetNext((ATermList) t);
          t = u_88(t);
        }
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
  ATerm x_88 = NULL,y_88 = NULL,z_88 = NULL;
  ATerm c_89 (ATerm t)
  {
    ATerm a_89 = NULL,b_89 = NULL;
    t = not_null(y_88);
    if(((a_89 != NULL) && (a_89 != t)))
      _fail(t);
    else
      a_89 = t;
    t = not_null(z_88);
    if(((b_89 != NULL) && (b_89 != t)))
      _fail(t);
    else
      b_89 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(b_89)), not_null(a_89));
    return(t);
  }
  if(((x_88 != NULL) && (x_88 != t)))
    _fail(t);
  else
    x_88 = t;
  t = not_null(x_88);
  if(match_cons(t, sym__2))
    {
      y_88 = ATgetArgument(t, 0);
      z_88 = ATgetArgument(t, 1);
      t = c_89(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0_0 (ATerm t)
{
  ATerm j_89 = NULL,k_89 = NULL,n_89 = NULL,o_89 = NULL,r_89 = NULL,u_89 = NULL,v_89 = NULL;
  ATerm a_90 (ATerm t)
  {
    ATerm w_89 = NULL,x_89 = NULL,y_89 = NULL,z_89 = NULL;
    t = not_null(n_89);
    if(((w_89 != NULL) && (w_89 != t)))
      _fail(t);
    else
      w_89 = t;
    t = not_null(o_89);
    if(((y_89 != NULL) && (y_89 != t)))
      _fail(t);
    else
      y_89 = t;
    t = not_null(u_89);
    if(((x_89 != NULL) && (x_89 != t)))
      _fail(t);
    else
      x_89 = t;
    t = not_null(v_89);
    if(((z_89 != NULL) && (z_89 != t)))
      _fail(t);
    else
      z_89 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(w_89), not_null(x_89)), (ATerm) ATmakeAppl(sym__2, not_null(y_89), not_null(z_89)));
    return(t);
  }
  if(((j_89 != NULL) && (j_89 != t)))
    _fail(t);
  else
    j_89 = t;
  t = not_null(j_89);
  if(match_cons(t, sym__2))
    {
      k_89 = ATgetArgument(t, 0);
      r_89 = ATgetArgument(t, 1);
      t = not_null(k_89);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_89 = ATgetFirst((ATermList) t);
          o_89 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(r_89);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_89 = ATgetFirst((ATermList) t);
              v_89 = (ATerm) ATgetNext((ATermList) t);
              t = a_90(t);
            }
          else
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
  ATerm i_90 = NULL,j_90 = NULL,k_90 = NULL;
  ATerm l_90 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  if(((i_90 != NULL) && (i_90 != t)))
    _fail(t);
  else
    i_90 = t;
  t = not_null(i_90);
  if(match_cons(t, sym__2))
    {
      j_90 = ATgetArgument(t, 0);
      k_90 = ATgetArgument(t, 1);
      t = not_null(j_90);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = not_null(k_90);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = l_90(t);
            }
          else
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
ATerm genzip_4_0 (ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm t)
{
  ATerm m_90 (ATerm t)
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_108(t);
        ;
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
        t = c_108(t);
        t = _2_0(e_108, m_90, t);
        t = d_108(t);
      }
    return(t);
  }
  t = m_90(t);
  return(t);
}
ATerm zip_1_0 (ATerm g_108 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1_0_0, Zip2_0_0, Zip3_0_0, g_108, t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm x_90 = NULL,y_90 = NULL,z_90 = NULL,a_91 = NULL,b_91 = NULL;
  ATerm u_91 (ATerm t)
  {
    ATerm c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL,g_91 = NULL,m_91 = NULL,s_91 = NULL;
    t = not_null(z_90);
    if(((c_91 != NULL) && (c_91 != t)))
      _fail(t);
    else
      c_91 = t;
    t = not_null(a_91);
    if(((d_91 != NULL) && (d_91 != t)))
      _fail(t);
    else
      d_91 = t;
    t = not_null(b_91);
    if(((e_91 != NULL) && (e_91 != t)))
      _fail(t);
    else
      e_91 = t;
    t = not_null(x_90);
    {
      ATerm b_26;
      b_26 = t;
      {
        ATerm h_91 = NULL;
        ATerm v_91 (ATerm t)
        {
          ATerm i_91 = NULL,j_91 = NULL,k_91 = NULL,l_91 = NULL;
          ATerm w_91 (ATerm t)
          {
            t = not_null(k_91);
            if(((f_91 != NULL) && (f_91 != t)))
              _fail(t);
            else
              f_91 = t;
            t = not_null(l_91);
            if(((g_91 != NULL) && (g_91 != t)))
              _fail(t);
            else
              g_91 = t;
            t = not_null(j_91);
            return(t);
          }
          t = not_null(h_91);
          if(((i_91 != NULL) && (i_91 != t)))
            _fail(t);
          else
            i_91 = t;
          t = not_null(h_91);
          t = SSL_explode_term(not_null(i_91));
          if(((j_91 != NULL) && (j_91 != t)))
            _fail(t);
          else
            j_91 = t;
          t = not_null(j_91);
          if(match_cons(t, sym__2))
            {
              k_91 = ATgetArgument(t, 0);
              l_91 = ATgetArgument(t, 1);
              t = w_91(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = not_null(d_91);
        if(((h_91 != NULL) && (h_91 != t)))
          _fail(t);
        else
          h_91 = t;
        t = v_91(t);
      }
      t = b_26;
      {
        ATerm c_26;
        c_26 = t;
        {
          ATerm n_91 = NULL;
          ATerm x_91 (ATerm t)
          {
            ATerm o_91 = NULL,p_91 = NULL,q_91 = NULL,r_91 = NULL;
            ATerm y_91 (ATerm t)
            {
              t = not_null(q_91);
              if(((f_91 != NULL) && (f_91 != t)))
                _fail(t);
              else
                f_91 = t;
              t = not_null(r_91);
              if(((m_91 != NULL) && (m_91 != t)))
                _fail(t);
              else
                m_91 = t;
              t = not_null(p_91);
              return(t);
            }
            t = not_null(n_91);
            if(((o_91 != NULL) && (o_91 != t)))
              _fail(t);
            else
              o_91 = t;
            t = not_null(n_91);
            t = SSL_explode_term(not_null(o_91));
            if(((p_91 != NULL) && (p_91 != t)))
              _fail(t);
            else
              p_91 = t;
            t = not_null(p_91);
            if(match_cons(t, sym__2))
              {
                q_91 = ATgetArgument(t, 0);
                r_91 = ATgetArgument(t, 1);
                t = y_91(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = not_null(c_91);
          if(((n_91 != NULL) && (n_91 != t)))
            _fail(t);
          else
            n_91 = t;
          t = x_91(t);
        }
        t = c_26;
        {
          ATerm t_91 = NULL;
          ATerm z_91 (ATerm t)
          {
            t = not_null(t_91);
            if(((s_91 != NULL) && (s_91 != t)))
              _fail(t);
            else
              s_91 = t;
            t = not_null(t_91);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_91), not_null(g_91));
          t = zip_1_0(_id, t);
          if(((t_91 != NULL) && (t_91 != t)))
            _fail(t);
          else
            t_91 = t;
          t = z_91(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_91), not_null(e_91));
          t = conc_0_0(t);
        }
      }
    }
    return(t);
  }
  if(((x_90 != NULL) && (x_90 != t)))
    _fail(t);
  else
    x_90 = t;
  t = not_null(x_90);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_90 = ATgetFirst((ATermList) t);
      b_91 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(y_90);
      if(match_cons(t, sym__2))
        {
          z_90 = ATgetArgument(t, 0);
          a_91 = ATgetArgument(t, 1);
          t = u_91(t);
        }
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
  ATerm d_92 = NULL,e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL;
  ATerm k_92 (ATerm t)
  {
    ATerm i_92 = NULL,j_92 = NULL;
    t = not_null(f_92);
    if(((i_92 != NULL) && (i_92 != t)))
      _fail(t);
    else
      i_92 = t;
    t = not_null(g_92);
    if(((i_92 != NULL) && (i_92 != t)))
      _fail(t);
    else
      i_92 = t;
    t = not_null(h_92);
    if(((j_92 != NULL) && (j_92 != t)))
      _fail(t);
    else
      j_92 = t;
    t = not_null(j_92);
    return(t);
  }
  if(((d_92 != NULL) && (d_92 != t)))
    _fail(t);
  else
    d_92 = t;
  t = not_null(d_92);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_92 = ATgetFirst((ATermList) t);
      h_92 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(e_92);
      if(match_cons(t, sym__2))
        {
          f_92 = ATgetArgument(t, 0);
          g_92 = ATgetArgument(t, 1);
          t = k_92(t);
        }
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
  ATerm d_26 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_3 (ATerm t)
      {
        ATerm o_92 = NULL;
        ATerm q_92 (ATerm t)
        {
          ATerm p_92 = NULL;
          t = not_null(o_92);
          if(((p_92 != NULL) && (p_92 != t)))
            _fail(t);
          else
            p_92 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(p_92));
          return(t);
        }
        if(((o_92 != NULL) && (o_92 != t)))
          _fail(t);
        else
          o_92 = t;
        t = q_92(t);
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = _2_0(_id, Nil_0_0, t);
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        ATerm y_28 = t;
        int z_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_3 (ATerm t)
            {
              ATerm f_29 = t;
              int g_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0_0(t);
                  ;
                  LocalPopChoice(g_29);
                }
              else
                {
                  t = f_29;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, f_3, t);
            ;
            LocalPopChoice(z_28);
          }
        else
          {
            t = y_28;
            t = UfShift_0_0(t);
          }
        return(t);
      }
      t = for_3_0(c_3, d_3, e_3, t);
      ;
      LocalPopChoice(x_28);
    }
  else
    {
      t = d_26;
      t = diff_1_0(eq_0_0, t);
    }
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm p_132 (ATerm), ATerm t)
{
  ATerm d_93 = NULL,e_93 = NULL,f_93 = NULL,g_93 = NULL,h_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL;
  ATerm l_94 (ATerm t)
  {
    ATerm n_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL,u_93 = NULL,v_93 = NULL,w_93 = NULL,x_93 = NULL,y_93 = NULL,z_93 = NULL,f_94 = NULL,h_94 = NULL,j_94 = NULL;
    t = not_null(f_93);
    if(((n_93 != NULL) && (n_93 != t)))
      _fail(t);
    else
      n_93 = t;
    t = not_null(g_93);
    if(((o_93 != NULL) && (o_93 != t)))
      _fail(t);
    else
      o_93 = t;
    t = not_null(h_93);
    if(((p_93 != NULL) && (p_93 != t)))
      _fail(t);
    else
      p_93 = t;
    t = not_null(k_93);
    if(((q_93 != NULL) && (q_93 != t)))
      _fail(t);
    else
      q_93 = t;
    t = not_null(l_93);
    if(((u_93 != NULL) && (u_93 != t)))
      _fail(t);
    else
      u_93 = t;
    t = not_null(m_93);
    if(((v_93 != NULL) && (v_93 != t)))
      _fail(t);
    else
      v_93 = t;
    t = not_null(d_93);
    {
      ATerm h_29;
      h_29 = t;
      {
        ATerm a_94 = NULL,b_94 = NULL,c_94 = NULL;
        ATerm m_94 (ATerm t)
        {
          ATerm d_94 = NULL;
          ATerm n_94 (ATerm t)
          {
            ATerm e_94 = NULL;
            ATerm o_94 (ATerm t)
            {
              t = not_null(e_94);
              if(((z_93 != NULL) && (z_93 != t)))
                _fail(t);
              else
                z_93 = t;
              t = not_null(e_94);
              return(t);
            }
            t = not_null(d_94);
            if(((y_93 != NULL) && (y_93 != t)))
              _fail(t);
            else
              y_93 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_93), not_null(p_93));
            t = diff_0_0(t);
            if(((e_94 != NULL) && (e_94 != t)))
              _fail(t);
            else
              e_94 = t;
            t = o_94(t);
            return(t);
          }
          t = not_null(b_94);
          if(((x_93 != NULL) && (x_93 != t)))
            _fail(t);
          else
            x_93 = t;
          t = not_null(c_94);
          if(((w_93 != NULL) && (w_93 != t)))
            _fail(t);
          else
            w_93 = t;
          t = not_null(x_93);
          t = o_132(t);
          if(((d_94 != NULL) && (d_94 != t)))
            _fail(t);
          else
            d_94 = t;
          t = n_94(t);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_93), not_null(q_93));
        t = n_132(t);
        if(((a_94 != NULL) && (a_94 != t)))
          _fail(t);
        else
          a_94 = t;
        t = not_null(a_94);
        if(match_cons(t, sym__2))
          {
            b_94 = ATgetArgument(t, 0);
            c_94 = ATgetArgument(t, 1);
            t = m_94(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = h_29;
      {
        ATerm i_29;
        i_29 = t;
        {
          ATerm g_94 = NULL;
          ATerm p_94 (ATerm t)
          {
            t = not_null(g_94);
            if(((f_94 != NULL) && (f_94 != t)))
              _fail(t);
            else
              f_94 = t;
            t = not_null(g_94);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_93), not_null(o_93));
          t = conc_0_0(t);
          if(((g_94 != NULL) && (g_94 != t)))
            _fail(t);
          else
            g_94 = t;
          t = p_94(t);
        }
        t = i_29;
        {
          ATerm v_29;
          v_29 = t;
          {
            ATerm i_94 = NULL;
            ATerm q_94 (ATerm t)
            {
              t = not_null(i_94);
              if(((h_94 != NULL) && (h_94 != t)))
                _fail(t);
              else
                h_94 = t;
              t = not_null(i_94);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_93), not_null(p_93));
            t = conc_0_0(t);
            if(((i_94 != NULL) && (i_94 != t)))
              _fail(t);
            else
              i_94 = t;
            t = q_94(t);
          }
          t = v_29;
          {
            ATerm k_94 = NULL;
            ATerm r_94 (ATerm t)
            {
              t = not_null(k_94);
              if(((j_94 != NULL) && (j_94 != t)))
                _fail(t);
              else
                j_94 = t;
              t = not_null(k_94);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_93), not_null(x_93), not_null(u_93));
            t = p_132(t);
            if(((k_94 != NULL) && (k_94 != t)))
              _fail(t);
            else
              k_94 = t;
            t = r_94(t);
            t = (ATerm) ATmakeAppl(sym__5, not_null(f_94), not_null(h_94), not_null(w_93), not_null(j_94), not_null(v_93));
          }
        }
      }
    }
    return(t);
  }
  if(((d_93 != NULL) && (d_93 != t)))
    _fail(t);
  else
    d_93 = t;
  t = not_null(d_93);
  if(match_cons(t, sym__5))
    {
      e_93 = ATgetArgument(t, 0);
      h_93 = ATgetArgument(t, 1);
      k_93 = ATgetArgument(t, 2);
      l_93 = ATgetArgument(t, 3);
      m_93 = ATgetArgument(t, 4);
      t = not_null(e_93);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_93 = ATgetFirst((ATermList) t);
          g_93 = (ATerm) ATgetNext((ATermList) t);
          t = l_94(t);
        }
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
  ATerm v_94 = NULL,y_94 = NULL,z_94 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL;
  ATerm o_95 (ATerm t)
  {
    ATerm k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL;
    t = not_null(z_94);
    if(((k_95 != NULL) && (k_95 != t)))
      _fail(t);
    else
      k_95 = t;
    t = not_null(h_95);
    if(((l_95 != NULL) && (l_95 != t)))
      _fail(t);
    else
      l_95 = t;
    t = not_null(i_95);
    if(((m_95 != NULL) && (m_95 != t)))
      _fail(t);
    else
      m_95 = t;
    t = not_null(j_95);
    if(((n_95 != NULL) && (n_95 != t)))
      _fail(t);
    else
      n_95 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_95), not_null(n_95));
    return(t);
  }
  if(((v_94 != NULL) && (v_94 != t)))
    _fail(t);
  else
    v_94 = t;
  t = not_null(v_94);
  if(match_cons(t, sym__5))
    {
      y_94 = ATgetArgument(t, 0);
      z_94 = ATgetArgument(t, 1);
      h_95 = ATgetArgument(t, 2);
      i_95 = ATgetArgument(t, 3);
      j_95 = ATgetArgument(t, 4);
      t = not_null(y_94);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = o_95(t);
        }
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
  ATerm r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL;
  ATerm y_95 (ATerm t)
  {
    ATerm v_95 = NULL,w_95 = NULL,x_95 = NULL;
    t = not_null(s_95);
    if(((v_95 != NULL) && (v_95 != t)))
      _fail(t);
    else
      v_95 = t;
    t = not_null(t_95);
    if(((w_95 != NULL) && (w_95 != t)))
      _fail(t);
    else
      w_95 = t;
    t = not_null(u_95);
    if(((x_95 != NULL) && (x_95 != t)))
      _fail(t);
    else
      x_95 = t;
    t = (ATerm) ATmakeAppl(sym__5, not_null(v_95), not_null(v_95), not_null(w_95), not_null(x_95), (ATerm) ATempty);
    return(t);
  }
  if(((r_95 != NULL) && (r_95 != t)))
    _fail(t);
  else
    r_95 = t;
  t = not_null(r_95);
  if(match_cons(t, sym__3))
    {
      s_95 = ATgetArgument(t, 0);
      t_95 = ATgetArgument(t, 1);
      u_95 = ATgetArgument(t, 2);
      t = y_95(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm t)
{
  ATerm z_95 (ATerm t)
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_120(t);
        ;
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        t = p_120(t);
        t = z_95(t);
      }
    return(t);
  }
  t = z_95(t);
  return(t);
}
ATerm for_3_0 (ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t_120 (ATerm), ATerm t)
{
  t = r_120(t);
  t = while_not_2_0(s_120, t_120, t);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3_0 (ATerm y_131 (ATerm), ATerm z_131 (ATerm), ATerm a_132 (ATerm), ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3_0(y_131, z_131, a_132, t);
        ;
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        t = GnUndefined_0_0(t);
      }
    return(t);
  }
  t = for_3_0(GnInitRoots_0_0, GnExit_0_0, g_3, t);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    t = svars_arity_0_0(t);
    {
      ATerm j_3 (ATerm t)
      {
        t = try_1_0(DefinitionExists_0_0, t);
        return(t);
      }
      t = map_1_0(j_3, t);
    }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL;
    ATerm i_96 (ATerm t)
    {
      ATerm g_96 = NULL,h_96 = NULL;
      t = not_null(e_96);
      if(((g_96 != NULL) && (g_96 != t)))
        _fail(t);
      else
        g_96 = t;
      t = not_null(f_96);
      if(((h_96 != NULL) && (h_96 != t)))
        _fail(t);
      else
        h_96 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(h_96)), not_null(g_96));
      return(t);
    }
    if(((c_96 != NULL) && (c_96 != t)))
      _fail(t);
    else
      c_96 = t;
    t = not_null(c_96);
    if(match_cons(t, sym__3))
      {
        d_96 = ATgetArgument(t, 0);
        e_96 = ATgetArgument(t, 1);
        f_96 = ATgetArgument(t, 2);
        t = i_96(t);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3_0(get_definition_0_0, h_3, i_3, t);
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0_0(t);
        ;
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
        t = MissingDefs_0_0(t);
        t = term_y_7;
        t = exit_0_0(t);
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm p_115 (ATerm), ATerm t)
{
  ATerm o_96 = NULL,p_96 = NULL,q_96 = NULL;
  ATerm a_97 (ATerm t)
  {
    ATerm r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL;
    t = not_null(p_96);
    if(((r_96 != NULL) && (r_96 != t)))
      _fail(t);
    else
      r_96 = t;
    t = not_null(q_96);
    if(((s_96 != NULL) && (s_96 != t)))
      _fail(t);
    else
      s_96 = t;
    t = not_null(o_96);
    {
      ATerm c_30;
      c_30 = t;
      {
        ATerm w_96 = NULL;
        ATerm b_97 (ATerm t)
        {
          ATerm x_96 = NULL,y_96 = NULL,z_96 = NULL;
          ATerm c_97 (ATerm t)
          {
            t = not_null(y_96);
            if(((u_96 != NULL) && (u_96 != t)))
              _fail(t);
            else
              u_96 = t;
            t = not_null(z_96);
            if(((v_96 != NULL) && (v_96 != t)))
              _fail(t);
            else
              v_96 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_96), term_d_30, (ATerm) ATinsert(CheckATermList(not_null(v_96)), (ATerm) ATinsert(CheckATermList(not_null(u_96)), not_null(r_96))));
            t = table_put_0_0(t);
            return(t);
          }
          t = not_null(w_96);
          if(((t_96 != NULL) && (t_96 != t)))
            _fail(t);
          else
            t_96 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(t_96), not_null(r_96), not_null(s_96));
          t = table_push_0_0(t);
          {
            ATerm e_30 = t;
            int f_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_96), term_d_30);
                t = table_get_0_0(t);
                ;
                LocalPopChoice(f_30);
              }
            else
              {
                t = e_30;
                t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
              }
            if(((x_96 != NULL) && (x_96 != t)))
              _fail(t);
            else
              x_96 = t;
            t = not_null(x_96);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_96 = ATgetFirst((ATermList) t);
                z_96 = (ATerm) ATgetNext((ATermList) t);
                t = c_97(t);
              }
            else
              {
                _fail(t);
              }
          }
          return(t);
        }
        t = p_115(t);
        if(((w_96 != NULL) && (w_96 != t)))
          _fail(t);
        else
          w_96 = t;
        t = b_97(t);
      }
      t = c_30;
    }
    return(t);
  }
  if(((o_96 != NULL) && (o_96 != t)))
    _fail(t);
  else
    o_96 = t;
  t = not_null(o_96);
  if(match_cons(t, sym__2))
    {
      p_96 = ATgetArgument(t, 0);
      q_96 = ATgetArgument(t, 1);
      t = a_97(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm f_97 = NULL,g_97 = NULL,h_97 = NULL;
  ATerm j_97 (ATerm t)
  {
    ATerm i_97 = NULL;
    t = not_null(g_97);
    if(((i_97 != NULL) && (i_97 != t)))
      _fail(t);
    else
      i_97 = t;
    t = not_null(h_97);
    if(((i_97 != NULL) && (i_97 != t)))
      _fail(t);
    else
      i_97 = t;
    t = not_null(f_97);
    return(t);
  }
  if(((f_97 != NULL) && (f_97 != t)))
    _fail(t);
  else
    f_97 = t;
  t = not_null(f_97);
  if(match_cons(t, sym__2))
    {
      g_97 = ATgetArgument(t, 0);
      h_97 = ATgetArgument(t, 1);
      t = j_97(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm t)
{
  ATerm n_97 = NULL,o_97 = NULL,p_97 = NULL;
  ATerm u_97 (ATerm t)
  {
    ATerm q_97 = NULL,r_97 = NULL;
    t = not_null(o_97);
    if(((r_97 != NULL) && (r_97 != t)))
      _fail(t);
    else
      r_97 = t;
    t = not_null(p_97);
    if(((q_97 != NULL) && (q_97 != t)))
      _fail(t);
    else
      q_97 = t;
    t = not_null(n_97);
    t = w_111(t);
    {
      ATerm k_3 (ATerm t)
      {
        ATerm s_97 = NULL;
        ATerm v_97 (ATerm t)
        {
          ATerm t_97 = NULL;
          t = not_null(s_97);
          if(((t_97 != NULL) && (t_97 != t)))
            _fail(t);
          else
            t_97 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_97), not_null(t_97));
          t = v_111(t);
          return(t);
        }
        if(((s_97 != NULL) && (s_97 != t)))
          _fail(t);
        else
          s_97 = t;
        t = v_97(t);
        return(t);
      }
      t = fetch_1_0(k_3, t);
    }
    t = not_null(q_97);
    return(t);
  }
  if(((n_97 != NULL) && (n_97 != t)))
    _fail(t);
  else
    n_97 = t;
  t = not_null(n_97);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_97 = ATgetFirst((ATermList) t);
      p_97 = (ATerm) ATgetNext((ATermList) t);
      t = u_97(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1_0 (ATerm r_111 (ATerm), ATerm t)
{
  ATerm y_97 = NULL,z_97 = NULL,a_98 = NULL;
  ATerm d_98 (ATerm t)
  {
    ATerm b_98 = NULL,c_98 = NULL;
    t = not_null(z_97);
    if(((c_98 != NULL) && (c_98 != t)))
      _fail(t);
    else
      c_98 = t;
    t = not_null(a_98);
    if(((b_98 != NULL) && (b_98 != t)))
      _fail(t);
    else
      b_98 = t;
    t = not_null(c_98);
    {
      ATerm e_98 (ATerm t)
      {
        ATerm g_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            t = not_null(b_98);
            ;
            LocalPopChoice(h_30);
          }
        else
          {
            t = g_30;
            {
              ATerm i_30 = t;
              int j_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_3 (ATerm t)
                  {
                    t = not_null(b_98);
                    return(t);
                  }
                  t = HdMember_p__2_0(r_111, l_3, t);
                  t = e_98(t);
                  ;
                  LocalPopChoice(j_30);
                }
              else
                {
                  t = i_30;
                  t = Cons_2_0(_id, e_98, t);
                }
            }
          }
        return(t);
      }
      t = e_98(t);
    }
    return(t);
  }
  if(((y_97 != NULL) && (y_97 != t)))
    _fail(t);
  else
    y_97 = t;
  t = not_null(y_97);
  if(match_cons(t, sym__2))
    {
      z_97 = ATgetArgument(t, 0);
      a_98 = ATgetArgument(t, 1);
      t = d_98(t);
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
  ATerm n_98 = NULL;
  ATerm a_99 (ATerm t)
  {
    ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL;
    t = not_null(n_98);
    if(((o_98 != NULL) && (o_98 != t)))
      _fail(t);
    else
      o_98 = t;
    t = not_null(n_98);
    if(((p_98 != NULL) && (p_98 != t)))
      _fail(t);
    else
      p_98 = t;
    t = not_null(n_98);
    {
      ATerm r_98 = NULL,s_98 = NULL,t_98 = NULL;
      ATerm c_99 (ATerm t)
      {
        t = not_null(t_98);
        if(((q_98 != NULL) && (q_98 != t)))
          _fail(t);
        else
          q_98 = t;
        t = not_null(r_98);
        return(t);
      }
      t = not_null(o_98);
      {
        ATerm m_3 (ATerm t)
        {
          t = term_k_30;
          return(t);
        }
        t = rewrite_1_0(m_3, t);
        if(((r_98 != NULL) && (r_98 != t)))
          _fail(t);
        else
          r_98 = t;
        t = not_null(r_98);
        if(match_cons(t, sym_Defined_2))
          {
            s_98 = ATgetArgument(t, 0);
            t_98 = ATgetArgument(t, 1);
            t = not_null(s_98);
            if(match_string(t, "m_0"))
              {
                t = c_99(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(q_98);
    }
    return(t);
  }
  ATerm b_99 (ATerm t)
  {
    ATerm u_98 = NULL,v_98 = NULL,w_98 = NULL;
    t = not_null(n_98);
    if(((u_98 != NULL) && (u_98 != t)))
      _fail(t);
    else
      u_98 = t;
    t = not_null(n_98);
    if(((v_98 != NULL) && (v_98 != t)))
      _fail(t);
    else
      v_98 = t;
    t = not_null(n_98);
    {
      ATerm x_98 = NULL,y_98 = NULL,z_98 = NULL;
      ATerm d_99 (ATerm t)
      {
        t = not_null(z_98);
        if(((w_98 != NULL) && (w_98 != t)))
          _fail(t);
        else
          w_98 = t;
        t = not_null(x_98);
        return(t);
      }
      t = not_null(u_98);
      {
        ATerm n_3 (ATerm t)
        {
          t = term_k_30;
          return(t);
        }
        t = rewrite_1_0(n_3, t);
        if(((x_98 != NULL) && (x_98 != t)))
          _fail(t);
        else
          x_98 = t;
        t = not_null(x_98);
        if(match_cons(t, sym_Defined_2))
          {
            y_98 = ATgetArgument(t, 0);
            z_98 = ATgetArgument(t, 1);
            t = not_null(y_98);
            if(match_string(t, "h_0"))
              {
                t = d_99(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(w_98);
    }
    return(t);
  }
  if(((n_98 != NULL) && (n_98 != t)))
    _fail(t);
  else
    n_98 = t;
  {
    ATerm l_30 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_99(t);
        ;
        LocalPopChoice(j_32);
      }
    else
      {
        t = l_30;
        t = b_99(t);
      }
  }
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm g_99 = NULL,h_99 = NULL,i_99 = NULL;
  ATerm k_99 (ATerm t)
  {
    ATerm j_99 = NULL;
    t = not_null(h_99);
    if(((j_99 != NULL) && (j_99 != t)))
      _fail(t);
    else
      j_99 = t;
    t = not_null(j_99);
    return(t);
  }
  if(((g_99 != NULL) && (g_99 != t)))
    _fail(t);
  else
    g_99 = t;
  t = not_null(g_99);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_99 = ATgetFirst((ATermList) t);
      i_99 = (ATerm) ATgetNext((ATermList) t);
      t = k_99(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0_0 (ATerm t)
{
  ATerm n_99 = NULL,o_99 = NULL,p_99 = NULL;
  ATerm s_99 (ATerm t)
  {
    ATerm q_99 = NULL,r_99 = NULL;
    t = not_null(o_99);
    if(((q_99 != NULL) && (q_99 != t)))
      _fail(t);
    else
      q_99 = t;
    t = not_null(p_99);
    if(((r_99 != NULL) && (r_99 != t)))
      _fail(t);
    else
      r_99 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_99), not_null(r_99));
    t = table_get_0_0(t);
    t = Hd_0_0(t);
    return(t);
  }
  if(((n_99 != NULL) && (n_99 != t)))
    _fail(t);
  else
    n_99 = t;
  t = not_null(n_99);
  if(match_cons(t, sym__2))
    {
      o_99 = ATgetArgument(t, 0);
      p_99 = ATgetArgument(t, 1);
      t = s_99(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1_0 (ATerm r_115 (ATerm), ATerm t)
{
  ATerm v_99 = NULL;
  ATerm z_99 (ATerm t)
  {
    ATerm w_99 = NULL,x_99 = NULL;
    t = not_null(v_99);
    if(((w_99 != NULL) && (w_99 != t)))
      _fail(t);
    else
      w_99 = t;
    t = not_null(v_99);
    {
      ATerm y_99 = NULL;
      ATerm a_100 (ATerm t)
      {
        t = not_null(y_99);
        if(((x_99 != NULL) && (x_99 != t)))
          _fail(t);
        else
          x_99 = t;
        t = not_null(y_99);
        return(t);
      }
      t = term_n_25;
      t = r_115(t);
      if(((y_99 != NULL) && (y_99 != t)))
        _fail(t);
      else
        y_99 = t;
      t = a_100(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_99), not_null(w_99));
      t = table_lookup_0_0(t);
    }
    return(t);
  }
  if(((v_99 != NULL) && (v_99 != t)))
    _fail(t);
  else
    v_99 = t;
  t = z_99(t);
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm l_100 = NULL,m_100 = NULL,n_100 = NULL,o_100 = NULL,p_100 = NULL;
  ATerm j_101 (ATerm t)
  {
    ATerm q_100 = NULL,r_100 = NULL,s_100 = NULL,t_100 = NULL,u_100 = NULL;
    t = not_null(n_100);
    if(((q_100 != NULL) && (q_100 != t)))
      _fail(t);
    else
      q_100 = t;
    t = not_null(o_100);
    if(((r_100 != NULL) && (r_100 != t)))
      _fail(t);
    else
      r_100 = t;
    t = not_null(l_100);
    if(((s_100 != NULL) && (s_100 != t)))
      _fail(t);
    else
      s_100 = t;
    t = not_null(m_100);
    if(((t_100 != NULL) && (t_100 != t)))
      _fail(t);
    else
      t_100 = t;
    t = not_null(n_100);
    {
      ATerm v_100 = NULL,y_100 = NULL,z_100 = NULL;
      ATerm l_101 (ATerm t)
      {
        t = not_null(z_100);
        if(((u_100 != NULL) && (u_100 != t)))
          _fail(t);
        else
          u_100 = t;
        t = not_null(v_100);
        return(t);
      }
      t = not_null(q_100);
      {
        ATerm o_3 (ATerm t)
        {
          t = term_k_32;
          return(t);
        }
        t = rewrite_1_0(o_3, t);
        if(((v_100 != NULL) && (v_100 != t)))
          _fail(t);
        else
          v_100 = t;
        t = not_null(v_100);
        if(match_cons(t, sym_Defined_2))
          {
            y_100 = ATgetArgument(t, 0);
            z_100 = ATgetArgument(t, 1);
            t = not_null(y_100);
            if(match_string(t, "j_0"))
              {
                t = l_101(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(u_100);
    }
    return(t);
  }
  ATerm k_101 (ATerm t)
  {
    ATerm a_101 = NULL,b_101 = NULL,c_101 = NULL,d_101 = NULL,e_101 = NULL;
    t = not_null(n_100);
    if(((a_101 != NULL) && (a_101 != t)))
      _fail(t);
    else
      a_101 = t;
    t = not_null(o_100);
    if(((b_101 != NULL) && (b_101 != t)))
      _fail(t);
    else
      b_101 = t;
    t = not_null(p_100);
    if(((c_101 != NULL) && (c_101 != t)))
      _fail(t);
    else
      c_101 = t;
    t = not_null(n_100);
    {
      ATerm f_101 = NULL,g_101 = NULL,h_101 = NULL,i_101 = NULL;
      ATerm m_101 (ATerm t)
      {
        t = not_null(h_101);
        if(((d_101 != NULL) && (d_101 != t)))
          _fail(t);
        else
          d_101 = t;
        t = not_null(i_101);
        if(((e_101 != NULL) && (e_101 != t)))
          _fail(t);
        else
          e_101 = t;
        t = not_null(f_101);
        return(t);
      }
      t = not_null(a_101);
      {
        ATerm p_3 (ATerm t)
        {
          t = term_k_32;
          return(t);
        }
        t = rewrite_1_0(p_3, t);
        if(((f_101 != NULL) && (f_101 != t)))
          _fail(t);
        else
          f_101 = t;
        t = not_null(f_101);
        if(match_cons(t, sym_Defined_3))
          {
            g_101 = ATgetArgument(t, 0);
            h_101 = ATgetArgument(t, 1);
            i_101 = ATgetArgument(t, 2);
            t = not_null(g_101);
            if(match_string(t, "f_0"))
              {
                t = m_101(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = (ATerm) ATinsert(CheckATermList(not_null(e_101)), not_null(d_101));
    }
    return(t);
  }
  if(((n_100 != NULL) && (n_100 != t)))
    _fail(t);
  else
    n_100 = t;
  t = not_null(n_100);
  if(match_cons(t, sym__2))
    {
      o_100 = ATgetArgument(t, 0);
      p_100 = ATgetArgument(t, 1);
      t = not_null(p_100);
      if(match_cons(t, sym__2))
        {
          l_100 = ATgetArgument(t, 0);
          m_100 = ATgetArgument(t, 1);
          {
            ATerm l_32 = t;
            int m_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = j_101(t);
                ;
                LocalPopChoice(m_32);
              }
            else
              {
                t = l_32;
                t = k_101(t);
              }
          }
        }
      else
        {
          t = k_101(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm g_114 (ATerm), ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm t)
{
  ATerm n_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = g_114(t);
      ;
      LocalPopChoice(o_32);
    }
  else
    {
      t = n_32;
      {
        ATerm r_101 = NULL,s_101 = NULL,t_101 = NULL;
        ATerm a_102 (ATerm t)
        {
          ATerm u_101 = NULL,v_101 = NULL,w_101 = NULL,y_101 = NULL;
          t = not_null(s_101);
          if(((u_101 != NULL) && (u_101 != t)))
            _fail(t);
          else
            u_101 = t;
          t = not_null(t_101);
          if(((v_101 != NULL) && (v_101 != t)))
            _fail(t);
          else
            v_101 = t;
          t = not_null(r_101);
          {
            ATerm p_32;
            p_32 = t;
            {
              ATerm x_101 = NULL;
              ATerm b_102 (ATerm t)
              {
                t = not_null(x_101);
                if(((w_101 != NULL) && (w_101 != t)))
                  _fail(t);
                else
                  w_101 = t;
                t = not_null(x_101);
                return(t);
              }
              t = not_null(u_101);
              t = i_114(t);
              if(((x_101 != NULL) && (x_101 != t)))
                _fail(t);
              else
                x_101 = t;
              t = b_102(t);
            }
            t = p_32;
            {
              ATerm z_101 = NULL;
              ATerm c_102 (ATerm t)
              {
                t = not_null(z_101);
                if(((y_101 != NULL) && (y_101 != t)))
                  _fail(t);
                else
                  y_101 = t;
                t = not_null(z_101);
                return(t);
              }
              t = not_null(v_101);
              t = foldr_3_0(g_114, h_114, i_114, t);
              if(((z_101 != NULL) && (z_101 != t)))
                _fail(t);
              else
                z_101 = t;
              t = c_102(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_101), not_null(y_101));
              t = h_114(t);
            }
          }
          return(t);
        }
        if(((r_101 != NULL) && (r_101 != t)))
          _fail(t);
        else
          r_101 = t;
        t = not_null(r_101);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_101 = ATgetFirst((ATermList) t);
            t_101 = (ATerm) ATgetNext((ATermList) t);
            t = a_102(t);
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
  ATerm q_3 (ATerm t)
  {
    t = term_q_32;
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    t = term_y_7;
    return(t);
  }
  t = foldr_3_0(q_3, add_0_0, r_3, t);
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm l_102 = NULL,m_102 = NULL,n_102 = NULL,o_102 = NULL,p_102 = NULL;
  ATerm q_103 (ATerm t)
  {
    ATerm q_102 = NULL,r_102 = NULL,s_102 = NULL,t_102 = NULL,x_102 = NULL,b_103 = NULL,c_103 = NULL,d_103 = NULL,e_103 = NULL;
    t = not_null(l_102);
    if(((q_102 != NULL) && (q_102 != t)))
      _fail(t);
    else
      q_102 = t;
    t = not_null(m_102);
    if(((r_102 != NULL) && (r_102 != t)))
      _fail(t);
    else
      r_102 = t;
    t = not_null(n_102);
    if(((s_102 != NULL) && (s_102 != t)))
      _fail(t);
    else
      s_102 = t;
    t = not_null(o_102);
    if(((t_102 != NULL) && (t_102 != t)))
      _fail(t);
    else
      t_102 = t;
    t = not_null(p_102);
    if(((x_102 != NULL) && (x_102 != t)))
      _fail(t);
    else
      x_102 = t;
    t = not_null(l_102);
    {
      ATerm r_32;
      r_32 = t;
      {
        ATerm f_103 = NULL;
        ATerm r_103 (ATerm t)
        {
          ATerm g_103 = NULL;
          ATerm s_103 (ATerm t)
          {
            ATerm h_103 = NULL,j_103 = NULL;
            ATerm u_103 (ATerm t)
            {
              ATerm k_103 = NULL,m_103 = NULL;
              ATerm w_103 (ATerm t)
              {
                t = not_null(m_103);
                if(((e_103 != NULL) && (e_103 != t)))
                  _fail(t);
                else
                  e_103 = t;
                t = not_null(m_103);
                {
                  ATerm s_32;
                  s_32 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(r_102), (ATerm) ATmakeAppl(sym__2, not_null(b_103), not_null(c_103))), (ATerm) ATmakeAppl(sym_Defined_2, term_t_32, not_null(d_103)));
                  {
                    ATerm s_3 (ATerm t)
                    {
                      t = term_k_32;
                      return(t);
                    }
                    t = assert_1_0(s_3, t);
                  }
                  t = s_32;
                  {
                    ATerm u_32;
                    u_32 = t;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_102), (ATerm) ATmakeAppl(sym_Defined_2, term_v_32, not_null(e_103)));
                    {
                      ATerm t_3 (ATerm t)
                      {
                        t = term_k_30;
                        return(t);
                      }
                      t = assert_1_0(t_3, t);
                    }
                    t = u_32;
                  }
                }
                return(t);
              }
              t = not_null(j_103);
              if(((d_103 != NULL) && (d_103 != t)))
                _fail(t);
              else
                d_103 = t;
              t = not_null(j_103);
              {
                ATerm l_103 = NULL;
                ATerm v_103 (ATerm t)
                {
                  t = not_null(l_103);
                  if(((k_103 != NULL) && (k_103 != t)))
                    _fail(t);
                  else
                    k_103 = t;
                  t = not_null(l_103);
                  return(t);
                }
                t = not_null(r_102);
                {
                  ATerm w_32 = t;
                  int x_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Arities_0_0(t);
                      ;
                      LocalPopChoice(x_32);
                    }
                  else
                    {
                      t = w_32;
                      t = (ATerm) ATempty;
                    }
                  if(((l_103 != NULL) && (l_103 != t)))
                    _fail(t);
                  else
                    l_103 = t;
                  t = v_103(t);
                }
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(b_103), not_null(c_103))), not_null(k_103));
                t = union_0_0(t);
                if(((m_103 != NULL) && (m_103 != t)))
                  _fail(t);
                else
                  m_103 = t;
                t = w_103(t);
              }
              return(t);
            }
            t = not_null(g_103);
            if(((c_103 != NULL) && (c_103 != t)))
              _fail(t);
            else
              c_103 = t;
            t = not_null(g_103);
            {
              ATerm i_103 = NULL;
              ATerm t_103 (ATerm t)
              {
                t = not_null(i_103);
                if(((h_103 != NULL) && (h_103 != t)))
                  _fail(t);
                else
                  h_103 = t;
                t = not_null(i_103);
                return(t);
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_102), (ATerm) ATmakeAppl(sym__2, not_null(b_103), not_null(c_103)));
              {
                ATerm y_32 = t;
                int p_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Definitions_0_0(t);
                    ;
                    LocalPopChoice(p_34);
                  }
                else
                  {
                    t = y_32;
                    t = (ATerm) ATempty;
                  }
                if(((i_103 != NULL) && (i_103 != t)))
                  _fail(t);
                else
                  i_103 = t;
                t = t_103(t);
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(h_103)), not_null(q_102));
              if(((j_103 != NULL) && (j_103 != t)))
                _fail(t);
              else
                j_103 = t;
              t = u_103(t);
            }
            return(t);
          }
          t = not_null(f_103);
          if(((b_103 != NULL) && (b_103 != t)))
            _fail(t);
          else
            b_103 = t;
          t = not_null(t_102);
          t = length_0_0(t);
          if(((g_103 != NULL) && (g_103 != t)))
            _fail(t);
          else
            g_103 = t;
          t = s_103(t);
          return(t);
        }
        t = not_null(s_102);
        t = length_0_0(t);
        if(((f_103 != NULL) && (f_103 != t)))
          _fail(t);
        else
          f_103 = t;
        t = r_103(t);
      }
      t = r_32;
    }
    return(t);
  }
  if(((l_102 != NULL) && (l_102 != t)))
    _fail(t);
  else
    l_102 = t;
  t = not_null(l_102);
  if(match_cons(t, sym_SDefT_4))
    {
      m_102 = ATgetArgument(t, 0);
      n_102 = ATgetArgument(t, 1);
      o_102 = ATgetArgument(t, 2);
      p_102 = ATgetArgument(t, 3);
      t = q_103(t);
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
  ATerm y_103 = NULL;
  ATerm z_103 = NULL;
  ATerm a_104 (ATerm t)
  {
    t = not_null(z_103);
    if(((y_103 != NULL) && (y_103 != t)))
      _fail(t);
    else
      y_103 = t;
    t = not_null(z_103);
    return(t);
  }
  t = sort_defs_0_0(t);
  if(((z_103 != NULL) && (z_103 != t)))
    _fail(t);
  else
    z_103 = t;
  t = a_104(t);
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_s_34), not_null(y_103), (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  ATerm g_104 = NULL,h_104 = NULL;
  ATerm q_104 (ATerm t)
  {
    ATerm i_104 = NULL,j_104 = NULL,k_104 = NULL,m_104 = NULL;
    ATerm s_104 (ATerm t)
    {
      ATerm n_104 = NULL,o_104 = NULL;
      t = not_null(m_104);
      if(((n_104 != NULL) && (n_104 != t)))
        _fail(t);
      else
        n_104 = t;
      t = not_null(m_104);
      {
        ATerm p_104 = NULL;
        ATerm v_104 (ATerm t)
        {
          t = not_null(p_104);
          if(((o_104 != NULL) && (o_104 != t)))
            _fail(t);
          else
            o_104 = t;
          t = not_null(p_104);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(n_104)), not_null(k_104));
        if(((p_104 != NULL) && (p_104 != t)))
          _fail(t);
        else
          p_104 = t;
        t = v_104(t);
        t = not_null(o_104);
      }
      return(t);
    }
    t = not_null(g_104);
    if(((i_104 != NULL) && (i_104 != t)))
      _fail(t);
    else
      i_104 = t;
    t = not_null(h_104);
    if(((j_104 != NULL) && (j_104 != t)))
      _fail(t);
    else
      j_104 = t;
    t = not_null(g_104);
    {
      ATerm l_104 = NULL;
      ATerm r_104 (ATerm t)
      {
        t = not_null(l_104);
        if(((k_104 != NULL) && (k_104 != t)))
          _fail(t);
        else
          k_104 = t;
        t = not_null(l_104);
        return(t);
      }
      t = SSLgetAnnotations(not_null(i_104));
      if(((l_104 != NULL) && (l_104 != t)))
        _fail(t);
      else
        l_104 = t;
      t = r_104(t);
      t = not_null(j_104);
      t = c_88(t);
      if(((m_104 != NULL) && (m_104 != t)))
        _fail(t);
      else
        m_104 = t;
      t = s_104(t);
    }
    return(t);
  }
  if(((g_104 != NULL) && (g_104 != t)))
    _fail(t);
  else
    g_104 = t;
  t = not_null(g_104);
  if(match_cons(t, sym_Strategies_1))
    {
      h_104 = ATgetArgument(t, 0);
      t = q_104(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm t)
{
  ATerm c_105 = NULL,d_105 = NULL,e_105 = NULL;
  ATerm s_105 (ATerm t)
  {
    ATerm f_105 = NULL,g_105 = NULL,j_105 = NULL,k_105 = NULL,m_105 = NULL;
    ATerm u_105 (ATerm t)
    {
      ATerm n_105 = NULL,o_105 = NULL;
      ATerm v_105 (ATerm t)
      {
        ATerm p_105 = NULL,q_105 = NULL;
        t = not_null(o_105);
        if(((p_105 != NULL) && (p_105 != t)))
          _fail(t);
        else
          p_105 = t;
        t = not_null(o_105);
        {
          ATerm r_105 = NULL;
          ATerm w_105 (ATerm t)
          {
            t = not_null(r_105);
            if(((q_105 != NULL) && (q_105 != t)))
              _fail(t);
            else
              q_105 = t;
            t = not_null(r_105);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(p_105)), not_null(n_105)), not_null(k_105));
          if(((r_105 != NULL) && (r_105 != t)))
            _fail(t);
          else
            r_105 = t;
          t = w_105(t);
          t = not_null(q_105);
        }
        return(t);
      }
      t = not_null(m_105);
      if(((n_105 != NULL) && (n_105 != t)))
        _fail(t);
      else
        n_105 = t;
      t = not_null(j_105);
      t = z_87(t);
      if(((o_105 != NULL) && (o_105 != t)))
        _fail(t);
      else
        o_105 = t;
      t = v_105(t);
      return(t);
    }
    t = not_null(c_105);
    if(((f_105 != NULL) && (f_105 != t)))
      _fail(t);
    else
      f_105 = t;
    t = not_null(d_105);
    if(((g_105 != NULL) && (g_105 != t)))
      _fail(t);
    else
      g_105 = t;
    t = not_null(e_105);
    if(((j_105 != NULL) && (j_105 != t)))
      _fail(t);
    else
      j_105 = t;
    t = not_null(c_105);
    {
      ATerm l_105 = NULL;
      ATerm t_105 (ATerm t)
      {
        t = not_null(l_105);
        if(((k_105 != NULL) && (k_105 != t)))
          _fail(t);
        else
          k_105 = t;
        t = not_null(l_105);
        return(t);
      }
      t = SSLgetAnnotations(not_null(f_105));
      if(((l_105 != NULL) && (l_105 != t)))
        _fail(t);
      else
        l_105 = t;
      t = t_105(t);
      t = not_null(g_105);
      t = y_87(t);
      if(((m_105 != NULL) && (m_105 != t)))
        _fail(t);
      else
        m_105 = t;
      t = u_105(t);
    }
    return(t);
  }
  if(((c_105 != NULL) && (c_105 != t)))
    _fail(t);
  else
    c_105 = t;
  t = not_null(c_105);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_105 = ATgetFirst((ATermList) t);
      e_105 = (ATerm) ATgetNext((ATermList) t);
      t = s_105(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  ATerm c_106 = NULL,d_106 = NULL;
  ATerm n_106 (ATerm t)
  {
    ATerm e_106 = NULL,f_106 = NULL,g_106 = NULL,j_106 = NULL;
    ATerm p_106 (ATerm t)
    {
      ATerm k_106 = NULL,l_106 = NULL;
      t = not_null(j_106);
      if(((k_106 != NULL) && (k_106 != t)))
        _fail(t);
      else
        k_106 = t;
      t = not_null(j_106);
      {
        ATerm m_106 = NULL;
        ATerm q_106 (ATerm t)
        {
          t = not_null(m_106);
          if(((l_106 != NULL) && (l_106 != t)))
            _fail(t);
          else
            l_106 = t;
          t = not_null(m_106);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(k_106)), not_null(g_106));
        if(((m_106 != NULL) && (m_106 != t)))
          _fail(t);
        else
          m_106 = t;
        t = q_106(t);
        t = not_null(l_106);
      }
      return(t);
    }
    t = not_null(c_106);
    if(((e_106 != NULL) && (e_106 != t)))
      _fail(t);
    else
      e_106 = t;
    t = not_null(d_106);
    if(((f_106 != NULL) && (f_106 != t)))
      _fail(t);
    else
      f_106 = t;
    t = not_null(c_106);
    {
      ATerm i_106 = NULL;
      ATerm o_106 (ATerm t)
      {
        t = not_null(i_106);
        if(((g_106 != NULL) && (g_106 != t)))
          _fail(t);
        else
          g_106 = t;
        t = not_null(i_106);
        return(t);
      }
      t = SSLgetAnnotations(not_null(e_106));
      if(((i_106 != NULL) && (i_106 != t)))
        _fail(t);
      else
        i_106 = t;
      t = o_106(t);
      t = not_null(f_106);
      t = h_88(t);
      if(((j_106 != NULL) && (j_106 != t)))
        _fail(t);
      else
        j_106 = t;
      t = p_106(t);
    }
    return(t);
  }
  if(((c_106 != NULL) && (c_106 != t)))
    _fail(t);
  else
    c_106 = t;
  t = not_null(c_106);
  if(match_cons(t, sym_Specification_1))
    {
      d_106 = ATgetArgument(t, 0);
      t = n_106(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2_0 (ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm t)
{
  ATerm x_106 = NULL,y_106 = NULL,z_106 = NULL;
  ATerm n_107 (ATerm t)
  {
    ATerm a_107 = NULL,d_107 = NULL,e_107 = NULL,f_107 = NULL,h_107 = NULL;
    ATerm p_107 (ATerm t)
    {
      ATerm i_107 = NULL,j_107 = NULL;
      ATerm q_107 (ATerm t)
      {
        ATerm k_107 = NULL,l_107 = NULL;
        t = not_null(j_107);
        if(((k_107 != NULL) && (k_107 != t)))
          _fail(t);
        else
          k_107 = t;
        t = not_null(j_107);
        {
          ATerm m_107 = NULL;
          ATerm t_107 (ATerm t)
          {
            t = not_null(m_107);
            if(((l_107 != NULL) && (l_107 != t)))
              _fail(t);
            else
              l_107 = t;
            t = not_null(m_107);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(i_107), not_null(k_107)), not_null(f_107));
          if(((m_107 != NULL) && (m_107 != t)))
            _fail(t);
          else
            m_107 = t;
          t = t_107(t);
          t = not_null(l_107);
        }
        return(t);
      }
      t = not_null(h_107);
      if(((i_107 != NULL) && (i_107 != t)))
        _fail(t);
      else
        i_107 = t;
      t = not_null(e_107);
      t = q_86(t);
      if(((j_107 != NULL) && (j_107 != t)))
        _fail(t);
      else
        j_107 = t;
      t = q_107(t);
      return(t);
    }
    t = not_null(x_106);
    if(((a_107 != NULL) && (a_107 != t)))
      _fail(t);
    else
      a_107 = t;
    t = not_null(y_106);
    if(((d_107 != NULL) && (d_107 != t)))
      _fail(t);
    else
      d_107 = t;
    t = not_null(z_106);
    if(((e_107 != NULL) && (e_107 != t)))
      _fail(t);
    else
      e_107 = t;
    t = not_null(x_106);
    {
      ATerm g_107 = NULL;
      ATerm o_107 (ATerm t)
      {
        t = not_null(g_107);
        if(((f_107 != NULL) && (f_107 != t)))
          _fail(t);
        else
          f_107 = t;
        t = not_null(g_107);
        return(t);
      }
      t = SSLgetAnnotations(not_null(a_107));
      if(((g_107 != NULL) && (g_107 != t)))
        _fail(t);
      else
        g_107 = t;
      t = o_107(t);
      t = not_null(d_107);
      t = p_86(t);
      if(((h_107 != NULL) && (h_107 != t)))
        _fail(t);
      else
        h_107 = t;
      t = p_107(t);
    }
    return(t);
  }
  if(((x_106 != NULL) && (x_106 != t)))
    _fail(t);
  else
    x_106 = t;
  t = not_null(x_106);
  if(match_cons(t, sym__2))
    {
      y_106 = ATgetArgument(t, 0);
      z_106 = ATgetArgument(t, 1);
      t = n_107(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_35;
  c_35 = t;
  {
    ATerm v_107 = NULL;
    ATerm w_107 = NULL;
    ATerm x_107 (ATerm t)
    {
      t = not_null(w_107);
      if(((v_107 != NULL) && (v_107 != t)))
        _fail(t);
      else
        v_107 = t;
      t = not_null(w_107);
      return(t);
    }
    t = term_n_25;
    t = whoami_0_0(t);
    if(((w_107 != NULL) && (w_107 != t)))
      _fail(t);
    else
      w_107 = t;
    t = x_107(t);
    t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_35), not_null(v_107)), term_d_35));
    t = printnl_0_0(t);
    t = term_y_7;
    t = exit_0_0(t);
  }
  t = c_35;
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm a_108 = NULL,h_108 = NULL,i_108 = NULL;
  ATerm n_108 (ATerm t)
  {
    ATerm k_108 = NULL,m_108 = NULL;
    t = not_null(h_108);
    if(((k_108 != NULL) && (k_108 != t)))
      _fail(t);
    else
      k_108 = t;
    t = not_null(i_108);
    if(((m_108 != NULL) && (m_108 != t)))
      _fail(t);
    else
      m_108 = t;
    t = not_null(a_108);
    {
      ATerm f_35;
      f_35 = t;
      t = SSL_printnl(not_null(k_108), not_null(m_108));
      t = f_35;
    }
    return(t);
  }
  if(((a_108 != NULL) && (a_108 != t)))
    _fail(t);
  else
    a_108 = t;
  t = not_null(a_108);
  if(match_cons(t, sym__2))
    {
      h_108 = ATgetArgument(t, 0);
      i_108 = ATgetArgument(t, 1);
      t = n_108(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm p_108 = NULL;
  ATerm r_108 (ATerm t)
  {
    ATerm q_108 = NULL;
    t = not_null(p_108);
    if(((q_108 != NULL) && (q_108 != t)))
      _fail(t);
    else
      q_108 = t;
    t = not_null(p_108);
    t = SSL_implode_string(not_null(q_108));
    return(t);
  }
  if(((p_108 != NULL) && (p_108 != t)))
    _fail(t);
  else
    p_108 = t;
  t = r_108(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_35 = t;
  int h_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(h_35);
    }
  else
    {
      t = g_35;
      {
        ATerm u_108 = NULL,v_108 = NULL,w_108 = NULL;
        ATerm a_109 (ATerm t)
        {
          ATerm x_108 = NULL,y_108 = NULL;
          t = not_null(v_108);
          if(((x_108 != NULL) && (x_108 != t)))
            _fail(t);
          else
            x_108 = t;
          t = not_null(w_108);
          if(((y_108 != NULL) && (y_108 != t)))
            _fail(t);
          else
            y_108 = t;
          t = not_null(x_108);
          {
            ATerm u_3 (ATerm t)
            {
              t = not_null(y_108);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(u_3, t);
          }
          return(t);
        }
        if(((u_108 != NULL) && (u_108 != t)))
          _fail(t);
        else
          u_108 = t;
        t = not_null(u_108);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_108 = ATgetFirst((ATermList) t);
            w_108 = (ATerm) ATgetNext((ATermList) t);
            t = a_109(t);
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
  ATerm g_109 = NULL;
  ATerm p_109 (ATerm t)
  {
    ATerm h_109 = NULL,i_109 = NULL;
    t = not_null(g_109);
    if(((h_109 != NULL) && (h_109 != t)))
      _fail(t);
    else
      h_109 = t;
    t = not_null(g_109);
    {
      ATerm j_109 = NULL;
      ATerm s_109 (ATerm t)
      {
        ATerm k_109 = NULL,l_109 = NULL,m_109 = NULL,n_109 = NULL;
        ATerm t_109 (ATerm t)
        {
          t = not_null(n_109);
          if(((i_109 != NULL) && (i_109 != t)))
            _fail(t);
          else
            i_109 = t;
          t = not_null(l_109);
          return(t);
        }
        t = not_null(j_109);
        if(((k_109 != NULL) && (k_109 != t)))
          _fail(t);
        else
          k_109 = t;
        t = not_null(j_109);
        t = SSL_explode_term(not_null(k_109));
        if(((l_109 != NULL) && (l_109 != t)))
          _fail(t);
        else
          l_109 = t;
        t = not_null(l_109);
        if(match_cons(t, sym__2))
          {
            m_109 = ATgetArgument(t, 0);
            n_109 = ATgetArgument(t, 1);
            t = not_null(m_109);
            if(match_string(t, ""))
              {
                t = t_109(t);
              }
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
      t = not_null(h_109);
      if(((j_109 != NULL) && (j_109 != t)))
        _fail(t);
      else
        j_109 = t;
      t = s_109(t);
      t = not_null(i_109);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((g_109 != NULL) && (g_109 != t)))
    _fail(t);
  else
    g_109 = t;
  t = p_109(t);
  return(t);
}
ATerm at_end_1_0 (ATerm g_110 (ATerm), ATerm t)
{
  ATerm u_109 (ATerm t)
  {
    ATerm u_35 = t;
    int v_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, u_109, t);
        ;
        LocalPopChoice(v_35);
      }
    else
      {
        t = u_35;
        t = Nil_0_0(t);
        t = g_110(t);
      }
    return(t);
  }
  t = u_109(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm x_109 = NULL,y_109 = NULL,z_109 = NULL;
  ATerm e_110 (ATerm t)
  {
    ATerm c_110 = NULL,d_110 = NULL;
    t = not_null(y_109);
    if(((d_110 != NULL) && (d_110 != t)))
      _fail(t);
    else
      d_110 = t;
    t = not_null(z_109);
    if(((c_110 != NULL) && (c_110 != t)))
      _fail(t);
    else
      c_110 = t;
    t = not_null(d_110);
    {
      ATerm v_3 (ATerm t)
      {
        t = not_null(c_110);
        return(t);
      }
      t = at_end_1_0(v_3, t);
    }
    return(t);
  }
  if(((x_109 != NULL) && (x_109 != t)))
    _fail(t);
  else
    x_109 = t;
  t = not_null(x_109);
  if(match_cons(t, sym__2))
    {
      y_109 = ATgetArgument(t, 0);
      z_109 = ATgetArgument(t, 1);
      t = e_110(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_35 = t;
  int x_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(x_35);
    }
  else
    {
      t = w_35;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm i_110 = NULL;
  ATerm k_110 (ATerm t)
  {
    ATerm j_110 = NULL;
    t = not_null(i_110);
    if(((j_110 != NULL) && (j_110 != t)))
      _fail(t);
    else
      j_110 = t;
    t = not_null(i_110);
    t = SSL_explode_string(not_null(j_110));
    return(t);
  }
  if(((i_110 != NULL) && (i_110 != t)))
    _fail(t);
  else
    i_110 = t;
  t = k_110(t);
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
  ATerm y_35 = t;
  int z_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(z_35);
    }
  else
    {
      t = y_35;
      {
        ATerm a_36 = t;
        int b_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_3 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(w_3, t);
            ;
            LocalPopChoice(b_36);
          }
        else
          {
            t = a_36;
            {
              ATerm r_110 = NULL,s_110 = NULL,t_110 = NULL;
              ATerm c_111 (ATerm t)
              {
                ATerm u_110 = NULL;
                t = not_null(s_110);
                if(((u_110 != NULL) && (u_110 != t)))
                  _fail(t);
                else
                  u_110 = t;
                t = not_null(u_110);
                return(t);
              }
              ATerm d_111 (ATerm t)
              {
                ATerm v_110 = NULL;
                t = not_null(s_110);
                if(((v_110 != NULL) && (v_110 != t)))
                  _fail(t);
                else
                  v_110 = t;
                t = not_null(v_110);
                {
                  ATerm c_36 = t;
                  int d_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(d_36);
                    }
                  else
                    {
                      t = c_36;
                      {
                        ATerm x_3 (ATerm t)
                        {
                          t = term_e_36;
                          return(t);
                        }
                        t = debug_1_0(x_3, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm e_111 (ATerm t)
              {
                ATerm w_110 = NULL,x_110 = NULL,y_110 = NULL,a_111 = NULL;
                t = not_null(s_110);
                if(((w_110 != NULL) && (w_110 != t)))
                  _fail(t);
                else
                  w_110 = t;
                t = not_null(t_110);
                if(((x_110 != NULL) && (x_110 != t)))
                  _fail(t);
                else
                  x_110 = t;
                t = not_null(r_110);
                {
                  ATerm f_36;
                  f_36 = t;
                  {
                    ATerm z_110 = NULL;
                    ATerm f_111 (ATerm t)
                    {
                      t = not_null(z_110);
                      if(((y_110 != NULL) && (y_110 != t)))
                        _fail(t);
                      else
                        y_110 = t;
                      t = not_null(z_110);
                      return(t);
                    }
                    t = not_null(w_110);
                    t = eval_config_0_0(t);
                    if(((z_110 != NULL) && (z_110 != t)))
                      _fail(t);
                    else
                      z_110 = t;
                    t = f_111(t);
                  }
                  t = f_36;
                  {
                    ATerm b_111 = NULL;
                    ATerm g_111 (ATerm t)
                    {
                      t = not_null(b_111);
                      if(((a_111 != NULL) && (a_111 != t)))
                        _fail(t);
                      else
                        a_111 = t;
                      t = not_null(b_111);
                      return(t);
                    }
                    t = not_null(x_110);
                    t = eval_config_0_0(t);
                    if(((b_111 != NULL) && (b_111 != t)))
                      _fail(t);
                    else
                      b_111 = t;
                    t = g_111(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_110), not_null(a_111));
                    t = conc_strings_0_0(t);
                  }
                }
                return(t);
              }
              if(((r_110 != NULL) && (r_110 != t)))
                _fail(t);
              else
                r_110 = t;
              t = not_null(r_110);
              if(match_cons(t, sym_Path_1))
                {
                  s_110 = ATgetArgument(t, 0);
                  t = c_111(t);
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_110 = ATgetArgument(t, 0);
                      t = d_111(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_110 = ATgetArgument(t, 0);
                          t_110 = ATgetArgument(t, 1);
                          t = e_111(t);
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
  ATerm j_111 = NULL;
  ATerm p_111 (ATerm t)
  {
    ATerm k_111 = NULL;
    t = not_null(j_111);
    if(((k_111 != NULL) && (k_111 != t)))
      _fail(t);
    else
      k_111 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_g_36, not_null(k_111));
    t = table_get_0_0(t);
    {
      ATerm y_3 (ATerm t)
      {
        t = eval_config_0_0(t);
        {
          ATerm h_36;
          h_36 = t;
          {
            ATerm l_111 = NULL;
            ATerm m_111 = NULL;
            ATerm q_111 (ATerm t)
            {
              t = not_null(m_111);
              if(((l_111 != NULL) && (l_111 != t)))
                _fail(t);
              else
                l_111 = t;
              t = not_null(m_111);
              return(t);
            }
            if(((m_111 != NULL) && (m_111 != t)))
              _fail(t);
            else
              m_111 = t;
            t = q_111(t);
            t = (ATerm) ATmakeAppl(sym__3, term_g_36, not_null(k_111), not_null(l_111));
            t = table_put_0_0(t);
          }
          t = h_36;
        }
        return(t);
      }
      t = try_1_0(y_3, t);
    }
    return(t);
  }
  if(((j_111 != NULL) && (j_111 != t)))
    _fail(t);
  else
    j_111 = t;
  t = p_111(t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm i_126 (ATerm), ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm i_36;
    i_36 = t;
    {
      ATerm u_111 = NULL;
      ATerm x_111 = NULL;
      ATerm y_111 (ATerm t)
      {
        t = not_null(x_111);
        if(((u_111 != NULL) && (u_111 != t)))
          _fail(t);
        else
          u_111 = t;
        t = not_null(x_111);
        return(t);
      }
      t = term_j_36;
      t = get_config_0_0(t);
      if(((x_111 != NULL) && (x_111 != t)))
        _fail(t);
      else
        x_111 = t;
      t = y_111(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_111), term_l_36);
      t = geq_0_0(t);
    }
    t = i_36;
    t = i_126(t);
    return(t);
  }
  t = try_1_0(z_3, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm i_112 = NULL,j_112 = NULL,k_112 = NULL,l_112 = NULL;
  ATerm q_112 (ATerm t)
  {
    ATerm m_112 = NULL,n_112 = NULL,o_112 = NULL;
    t = not_null(j_112);
    if(((m_112 != NULL) && (m_112 != t)))
      _fail(t);
    else
      m_112 = t;
    t = not_null(l_112);
    if(((n_112 != NULL) && (n_112 != t)))
      _fail(t);
    else
      n_112 = t;
    t = not_null(i_112);
    t = SSL_fputc(not_null(m_112), not_null(n_112));
    {
      ATerm p_112 = NULL;
      ATerm r_112 (ATerm t)
      {
        t = not_null(p_112);
        if(((o_112 != NULL) && (o_112 != t)))
          _fail(t);
        else
          o_112 = t;
        t = not_null(p_112);
        return(t);
      }
      if(((p_112 != NULL) && (p_112 != t)))
        _fail(t);
      else
        p_112 = t;
      t = r_112(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_112));
    }
    return(t);
  }
  if(((i_112 != NULL) && (i_112 != t)))
    _fail(t);
  else
    i_112 = t;
  t = not_null(i_112);
  if(match_cons(t, sym__2))
    {
      j_112 = ATgetArgument(t, 0);
      k_112 = ATgetArgument(t, 1);
      t = not_null(k_112);
      if(match_cons(t, sym_Stream_1))
        {
          l_112 = ATgetArgument(t, 0);
          t = q_112(t);
        }
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
  ATerm w_112 = NULL,x_112 = NULL,y_112 = NULL,z_112 = NULL;
  ATerm e_113 (ATerm t)
  {
    ATerm a_113 = NULL,b_113 = NULL,c_113 = NULL;
    t = not_null(y_112);
    if(((a_113 != NULL) && (a_113 != t)))
      _fail(t);
    else
      a_113 = t;
    t = not_null(z_112);
    if(((b_113 != NULL) && (b_113 != t)))
      _fail(t);
    else
      b_113 = t;
    t = not_null(w_112);
    t = SSL_write_term_to_stream_text(not_null(a_113), not_null(b_113));
    {
      ATerm d_113 = NULL;
      ATerm f_113 (ATerm t)
      {
        t = not_null(d_113);
        if(((c_113 != NULL) && (c_113 != t)))
          _fail(t);
        else
          c_113 = t;
        t = not_null(d_113);
        return(t);
      }
      if(((d_113 != NULL) && (d_113 != t)))
        _fail(t);
      else
        d_113 = t;
      t = f_113(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_113));
    }
    return(t);
  }
  if(((w_112 != NULL) && (w_112 != t)))
    _fail(t);
  else
    w_112 = t;
  t = not_null(w_112);
  if(match_cons(t, sym__2))
    {
      x_112 = ATgetArgument(t, 0);
      z_112 = ATgetArgument(t, 1);
      t = not_null(x_112);
      if(match_cons(t, sym_Stream_1))
        {
          y_112 = ATgetArgument(t, 0);
          t = e_113(t);
        }
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
  ATerm a_4 (ATerm t)
  {
    ATerm h_113 = NULL;
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm i_113 = NULL;
      ATerm j_113 (ATerm t)
      {
        t = not_null(i_113);
        if(((h_113 != NULL) && (h_113 != t)))
          _fail(t);
        else
          h_113 = t;
        t = not_null(i_113);
        return(t);
      }
      if(((i_113 != NULL) && (i_113 != t)))
        _fail(t);
      else
        i_113 = t;
      t = j_113(t);
      t = (ATerm) ATmakeAppl(sym__2, term_m_36, not_null(h_113));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(a_4, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm o_113 = NULL,p_113 = NULL,q_113 = NULL,r_113 = NULL;
  ATerm x_113 (ATerm t)
  {
    ATerm s_113 = NULL,u_113 = NULL,v_113 = NULL;
    t = not_null(q_113);
    if(((s_113 != NULL) && (s_113 != t)))
      _fail(t);
    else
      s_113 = t;
    t = not_null(r_113);
    if(((u_113 != NULL) && (u_113 != t)))
      _fail(t);
    else
      u_113 = t;
    t = not_null(o_113);
    t = SSL_write_term_to_stream_baf(not_null(s_113), not_null(u_113));
    {
      ATerm w_113 = NULL;
      ATerm y_113 (ATerm t)
      {
        t = not_null(w_113);
        if(((v_113 != NULL) && (v_113 != t)))
          _fail(t);
        else
          v_113 = t;
        t = not_null(w_113);
        return(t);
      }
      if(((w_113 != NULL) && (w_113 != t)))
        _fail(t);
      else
        w_113 = t;
      t = y_113(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_113));
    }
    return(t);
  }
  if(((o_113 != NULL) && (o_113 != t)))
    _fail(t);
  else
    o_113 = t;
  t = not_null(o_113);
  if(match_cons(t, sym__2))
    {
      p_113 = ATgetArgument(t, 0);
      r_113 = ATgetArgument(t, 1);
      t = not_null(p_113);
      if(match_cons(t, sym_Stream_1))
        {
          q_113 = ATgetArgument(t, 0);
          t = x_113(t);
        }
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
ATerm WriteToFile_1_0 (ATerm e_125 (ATerm), ATerm t)
{
  ATerm d_114 = NULL,j_114 = NULL,k_114 = NULL;
  ATerm r_114 (ATerm t)
  {
    ATerm l_114 = NULL,m_114 = NULL,n_114 = NULL,p_114 = NULL;
    t = not_null(j_114);
    if(((l_114 != NULL) && (l_114 != t)))
      _fail(t);
    else
      l_114 = t;
    t = not_null(k_114);
    if(((m_114 != NULL) && (m_114 != t)))
      _fail(t);
    else
      m_114 = t;
    t = not_null(l_114);
    {
      ATerm o_114 = NULL;
      ATerm u_114 (ATerm t)
      {
        t = not_null(o_114);
        if(((n_114 != NULL) && (n_114 != t)))
          _fail(t);
        else
          n_114 = t;
        t = not_null(o_114);
        return(t);
      }
      if(((o_114 != NULL) && (o_114 != t)))
        _fail(t);
      else
        o_114 = t;
      t = u_114(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_114), term_n_36);
      t = open_stream_0_0(t);
      {
        ATerm q_114 = NULL;
        ATerm v_114 (ATerm t)
        {
          t = not_null(q_114);
          if(((p_114 != NULL) && (p_114 != t)))
            _fail(t);
          else
            p_114 = t;
          t = not_null(q_114);
          return(t);
        }
        if(((q_114 != NULL) && (q_114 != t)))
          _fail(t);
        else
          q_114 = t;
        t = v_114(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_114), not_null(m_114));
        t = e_125(t);
        t = fclose_0_0(t);
        t = not_null(m_114);
      }
    }
    return(t);
  }
  if(((d_114 != NULL) && (d_114 != t)))
    _fail(t);
  else
    d_114 = t;
  t = not_null(d_114);
  if(match_cons(t, sym__2))
    {
      j_114 = ATgetArgument(t, 0);
      k_114 = ATgetArgument(t, 1);
      t = r_114(t);
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
  ATerm a_115 = NULL;
  ATerm o_36;
  o_36 = t;
  {
    ATerm b_4 (ATerm t)
    {
      ATerm g_37 = t;
      int h_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_4 (ATerm t)
          {
            ATerm b_115 = NULL,c_115 = NULL;
            ATerm f_115 (ATerm t)
            {
              t = not_null(c_115);
              if(((a_115 != NULL) && (a_115 != t)))
                _fail(t);
              else
                a_115 = t;
              t = not_null(b_115);
              return(t);
            }
            if(((b_115 != NULL) && (b_115 != t)))
              _fail(t);
            else
              b_115 = t;
            t = not_null(b_115);
            if(match_cons(t, sym_Output_1))
              {
                c_115 = ATgetArgument(t, 0);
                t = f_115(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1_0(c_4, t);
          ;
          LocalPopChoice(h_37);
        }
      else
        {
          t = g_37;
          {
            ATerm d_115 = NULL;
            ATerm g_115 (ATerm t)
            {
              t = not_null(d_115);
              if(((a_115 != NULL) && (a_115 != t)))
                _fail(t);
              else
                a_115 = t;
              t = not_null(d_115);
              return(t);
            }
            t = term_i_37;
            if(((d_115 != NULL) && (d_115 != t)))
              _fail(t);
            else
              d_115 = t;
            t = g_115(t);
          }
        }
      return(t);
    }
    t = _2_0(b_4, _id, t);
  }
  t = o_36;
  {
    ATerm f_4 (ATerm t)
    {
      ATerm g_4 (ATerm t)
      {
        t = not_null(a_115);
        return(t);
      }
      t = split_2_0(g_4, _id, t);
      return(t);
    }
    t = _2_0(_id, f_4, t);
    {
      ATerm j_37 = t;
      int k_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_4 (ATerm t)
          {
            ATerm i_4 (ATerm t)
            {
              ATerm e_115 = NULL;
              if(((e_115 != NULL) && (e_115 != t)))
                _fail(t);
              else
                e_115 = t;
              t = not_null(e_115);
              if(match_cons(t, sym_Binary_0))
                {
                  t = not_null(e_115);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1_0(i_4, t);
            return(t);
          }
          t = _2_0(h_4, WriteToBinaryFile_0_0, t);
          ;
          LocalPopChoice(k_37);
        }
      else
        {
          t = j_37;
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
ATerm apply_strategy_1_0 (ATerm g_128 (ATerm), ATerm t)
{
  ATerm k_115 = NULL,m_115 = NULL,n_115 = NULL,o_115 = NULL;
  ATerm u_115 (ATerm t)
  {
    ATerm q_115 = NULL,s_115 = NULL;
    t = not_null(n_115);
    if(((q_115 != NULL) && (q_115 != t)))
      _fail(t);
    else
      q_115 = t;
    t = not_null(o_115);
    if(((s_115 != NULL) && (s_115 != t)))
      _fail(t);
    else
      s_115 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_115)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(k_115))), not_null(s_115));
    return(t);
  }
  ATerm l_37;
  l_37 = t;
  t = dtime_0_0(t);
  t = l_37;
  t = g_128(t);
  {
    ATerm m_37;
    m_37 = t;
    {
      ATerm l_115 = NULL;
      ATerm t_115 (ATerm t)
      {
        t = not_null(l_115);
        if(((k_115 != NULL) && (k_115 != t)))
          _fail(t);
        else
          k_115 = t;
        t = not_null(l_115);
        return(t);
      }
      t = dtime_0_0(t);
      if(((l_115 != NULL) && (l_115 != t)))
        _fail(t);
      else
        l_115 = t;
      t = t_115(t);
    }
    t = m_37;
    if(((m_115 != NULL) && (m_115 != t)))
      _fail(t);
    else
      m_115 = t;
    t = not_null(m_115);
    if(match_cons(t, sym__2))
      {
        n_115 = ATgetArgument(t, 0);
        o_115 = ATgetArgument(t, 1);
        t = u_115(t);
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
  ATerm y_115 = NULL,z_115 = NULL;
  ATerm e_116 (ATerm t)
  {
    ATerm a_116 = NULL;
    t = not_null(y_115);
    if(((a_116 != NULL) && (a_116 != t)))
      _fail(t);
    else
      a_116 = t;
    t = not_null(z_115);
    t = SSL_fclose(not_null(a_116));
    return(t);
  }
  ATerm f_116 (ATerm t)
  {
    ATerm d_116 = NULL;
    t = not_null(z_115);
    if(((d_116 != NULL) && (d_116 != t)))
      _fail(t);
    else
      d_116 = t;
    t = not_null(z_115);
    t = SSL_fclose(not_null(d_116));
    return(t);
  }
  if(((z_115 != NULL) && (z_115 != t)))
    _fail(t);
  else
    z_115 = t;
  t = not_null(z_115);
  if(match_cons(t, sym_Stream_1))
    {
      y_115 = ATgetArgument(t, 0);
      {
        ATerm o_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_116(t);
            ;
            LocalPopChoice(p_37);
          }
        else
          {
            t = o_37;
            t = f_116(t);
          }
      }
    }
  else
    {
      t = f_116(t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm i_116 = NULL,j_116 = NULL;
  ATerm l_116 (ATerm t)
  {
    ATerm k_116 = NULL;
    t = not_null(j_116);
    if(((k_116 != NULL) && (k_116 != t)))
      _fail(t);
    else
      k_116 = t;
    t = not_null(i_116);
    t = SSL_read_term_from_stream(not_null(k_116));
    return(t);
  }
  if(((i_116 != NULL) && (i_116 != t)))
    _fail(t);
  else
    i_116 = t;
  t = not_null(i_116);
  if(match_cons(t, sym_Stream_1))
    {
      j_116 = ATgetArgument(t, 0);
      t = l_116(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm q_124 (ATerm), ATerm t)
{
  ATerm q_37;
  q_37 = t;
  {
    ATerm o_116 = NULL,q_116 = NULL;
    ATerm r_37;
    r_37 = t;
    {
      ATerm p_116 = NULL;
      ATerm s_116 (ATerm t)
      {
        t = not_null(p_116);
        if(((o_116 != NULL) && (o_116 != t)))
          _fail(t);
        else
          o_116 = t;
        t = not_null(p_116);
        return(t);
      }
      t = q_124(t);
      if(((p_116 != NULL) && (p_116 != t)))
        _fail(t);
      else
        p_116 = t;
      t = s_116(t);
    }
    t = r_37;
    {
      ATerm r_116 = NULL;
      ATerm t_116 (ATerm t)
      {
        t = not_null(r_116);
        if(((q_116 != NULL) && (q_116 != t)))
          _fail(t);
        else
          q_116 = t;
        t = not_null(r_116);
        return(t);
      }
      if(((r_116 != NULL) && (r_116 != t)))
        _fail(t);
      else
        r_116 = t;
      t = t_116(t);
      t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_116)), not_null(o_116)));
      t = printnl_0_0(t);
    }
  }
  t = q_37;
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm x_116 = NULL,y_116 = NULL,z_116 = NULL;
  ATerm e_117 (ATerm t)
  {
    ATerm a_117 = NULL,b_117 = NULL,c_117 = NULL;
    t = not_null(y_116);
    if(((a_117 != NULL) && (a_117 != t)))
      _fail(t);
    else
      a_117 = t;
    t = not_null(z_116);
    if(((b_117 != NULL) && (b_117 != t)))
      _fail(t);
    else
      b_117 = t;
    t = not_null(x_116);
    t = SSL_fopen(not_null(a_117), not_null(b_117));
    {
      ATerm d_117 = NULL;
      ATerm f_117 (ATerm t)
      {
        t = not_null(d_117);
        if(((c_117 != NULL) && (c_117 != t)))
          _fail(t);
        else
          c_117 = t;
        t = not_null(d_117);
        return(t);
      }
      if(((d_117 != NULL) && (d_117 != t)))
        _fail(t);
      else
        d_117 = t;
      t = f_117(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_117));
    }
    return(t);
  }
  if(((x_116 != NULL) && (x_116 != t)))
    _fail(t);
  else
    x_116 = t;
  t = not_null(x_116);
  if(match_cons(t, sym__2))
    {
      y_116 = ATgetArgument(t, 0);
      z_116 = ATgetArgument(t, 1);
      t = e_117(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm h_117 = NULL;
  ATerm j_117 (ATerm t)
  {
    ATerm i_117 = NULL;
    t = not_null(h_117);
    if(((i_117 != NULL) && (i_117 != t)))
      _fail(t);
    else
      i_117 = t;
    t = not_null(h_117);
    t = SSL_is_string(not_null(i_117));
    return(t);
  }
  if(((h_117 != NULL) && (h_117 != t)))
    _fail(t);
  else
    h_117 = t;
  t = j_117(t);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_117 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm m_117 = NULL;
    ATerm n_117 (ATerm t)
    {
      t = not_null(m_117);
      if(((l_117 != NULL) && (l_117 != t)))
        _fail(t);
      else
        l_117 = t;
      t = not_null(m_117);
      return(t);
    }
    if(((m_117 != NULL) && (m_117 != t)))
      _fail(t);
    else
      m_117 = t;
    t = n_117(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_117));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_117 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm q_117 = NULL;
    ATerm r_117 (ATerm t)
    {
      t = not_null(q_117);
      if(((p_117 != NULL) && (p_117 != t)))
        _fail(t);
      else
        p_117 = t;
      t = not_null(q_117);
      return(t);
    }
    if(((q_117 != NULL) && (q_117 != t)))
      _fail(t);
    else
      q_117 = t;
    t = r_117(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_117));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_117 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm u_117 = NULL;
    ATerm v_117 (ATerm t)
    {
      t = not_null(u_117);
      if(((t_117 != NULL) && (t_117 != t)))
        _fail(t);
      else
        t_117 = t;
      t = not_null(u_117);
      return(t);
    }
    if(((u_117 != NULL) && (u_117 != t)))
      _fail(t);
    else
      u_117 = t;
    t = v_117(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_117));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm f_118 = NULL;
  ATerm g_118 (ATerm t)
  {
    t = not_null(f_118);
    t = stderr_stream_0_0(t);
    return(t);
  }
  ATerm h_118 (ATerm t)
  {
    t = not_null(f_118);
    t = stdout_stream_0_0(t);
    return(t);
  }
  ATerm i_118 (ATerm t)
  {
    t = not_null(f_118);
    t = stdin_stream_0_0(t);
    return(t);
  }
  if(((f_118 != NULL) && (f_118 != t)))
    _fail(t);
  else
    f_118 = t;
  t = not_null(f_118);
  if(match_cons(t, sym_stderr_0))
    {
      t = g_118(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_118(t);
        }
      else
        {
          if(match_cons(t, sym_stdin_0))
            {
              t = i_118(t);
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
  ATerm p_118 = NULL;
  ATerm a_119 (ATerm t)
  {
    ATerm q_118 = NULL,r_118 = NULL,s_118 = NULL;
    t = not_null(p_118);
    if(((q_118 != NULL) && (q_118 != t)))
      _fail(t);
    else
      q_118 = t;
    t = not_null(p_118);
    {
      ATerm t_118 = NULL;
      ATerm b_119 (ATerm t)
      {
        ATerm u_118 = NULL,v_118 = NULL,w_118 = NULL,x_118 = NULL,y_118 = NULL,z_118 = NULL;
        ATerm c_119 (ATerm t)
        {
          t = not_null(y_118);
          if(((s_118 != NULL) && (s_118 != t)))
            _fail(t);
          else
            s_118 = t;
          t = not_null(z_118);
          if(((r_118 != NULL) && (r_118 != t)))
            _fail(t);
          else
            r_118 = t;
          t = not_null(v_118);
          return(t);
        }
        t = not_null(t_118);
        if(((u_118 != NULL) && (u_118 != t)))
          _fail(t);
        else
          u_118 = t;
        t = not_null(t_118);
        t = SSL_explode_term(not_null(u_118));
        if(((v_118 != NULL) && (v_118 != t)))
          _fail(t);
        else
          v_118 = t;
        t = not_null(v_118);
        if(match_cons(t, sym__2))
          {
            w_118 = ATgetArgument(t, 0);
            x_118 = ATgetArgument(t, 1);
            t = not_null(w_118);
            if(match_string(t, ""))
              {
                t = not_null(x_118);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    y_118 = ATgetFirst((ATermList) t);
                    z_118 = (ATerm) ATgetNext((ATermList) t);
                    t = c_119(t);
                  }
                else
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
      t = not_null(q_118);
      if(((t_118 != NULL) && (t_118 != t)))
        _fail(t);
      else
        t_118 = t;
      t = b_119(t);
      t = not_null(s_118);
    }
    return(t);
  }
  if(((p_118 != NULL) && (p_118 != t)))
    _fail(t);
  else
    p_118 = t;
  t = a_119(t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm h_119 = NULL,i_119 = NULL,j_119 = NULL;
  ATerm n_119 (ATerm t)
  {
    t = not_null(h_119);
    {
      ATerm w_37 = t;
      int x_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Fst_0_0(t);
          t = stdio_stream_0_0(t);
          ;
          LocalPopChoice(x_37);
        }
      else
        {
          t = w_37;
          {
            ATerm y_37 = t;
            int z_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_4 (ATerm t)
                {
                  ATerm k_119 = NULL,l_119 = NULL;
                  ATerm o_119 (ATerm t)
                  {
                    ATerm m_119 = NULL;
                    t = not_null(l_119);
                    if(((m_119 != NULL) && (m_119 != t)))
                      _fail(t);
                    else
                      m_119 = t;
                    t = not_null(m_119);
                    return(t);
                  }
                  if(((k_119 != NULL) && (k_119 != t)))
                    _fail(t);
                  else
                    k_119 = t;
                  t = not_null(k_119);
                  if(match_cons(t, sym_Path_1))
                    {
                      l_119 = ATgetArgument(t, 0);
                      t = o_119(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = _2_0(j_4, _id, t);
                t = fopen_0_0(t);
                ;
                LocalPopChoice(z_37);
              }
            else
              {
                t = y_37;
                t = _2_0(is_string_0_0, _id, t);
                t = fopen_0_0(t);
              }
          }
        }
    }
    return(t);
  }
  if(((h_119 != NULL) && (h_119 != t)))
    _fail(t);
  else
    h_119 = t;
  t = not_null(h_119);
  if(match_cons(t, sym__2))
    {
      i_119 = ATgetArgument(t, 0);
      j_119 = ATgetArgument(t, 1);
      t = n_119(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_119 = NULL;
  ATerm g_38 = t;
  int h_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_119 = NULL;
      ATerm s_119 = NULL;
      ATerm v_119 (ATerm t)
      {
        t = not_null(s_119);
        if(((r_119 != NULL) && (r_119 != t)))
          _fail(t);
        else
          r_119 = t;
        t = not_null(s_119);
        return(t);
      }
      if(((s_119 != NULL) && (s_119 != t)))
        _fail(t);
      else
        s_119 = t;
      t = v_119(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_119), term_i_38);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_38);
    }
  else
    {
      t = g_38;
      {
        ATerm k_4 (ATerm t)
        {
          t = term_m_38;
          return(t);
        }
        t = debug_1_0(k_4, t);
        _fail(t);
      }
    }
  {
    ATerm n_38;
    n_38 = t;
    {
      ATerm u_119 = NULL;
      ATerm w_119 (ATerm t)
      {
        t = not_null(u_119);
        if(((t_119 != NULL) && (t_119 != t)))
          _fail(t);
        else
          t_119 = t;
        t = not_null(u_119);
        return(t);
      }
      t = read_from_stream_0_0(t);
      if(((u_119 != NULL) && (u_119 != t)))
        _fail(t);
      else
        u_119 = t;
      t = w_119(t);
    }
    t = n_38;
    t = fclose_0_0(t);
    t = not_null(t_119);
  }
  return(t);
}
ATerm split_2_0 (ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm t)
{
  ATerm b_120 = NULL,d_120 = NULL;
  ATerm q_38;
  q_38 = t;
  {
    ATerm c_120 = NULL;
    ATerm f_120 (ATerm t)
    {
      t = not_null(c_120);
      if(((b_120 != NULL) && (b_120 != t)))
        _fail(t);
      else
        b_120 = t;
      t = not_null(c_120);
      return(t);
    }
    t = b_107(t);
    if(((c_120 != NULL) && (c_120 != t)))
      _fail(t);
    else
      c_120 = t;
    t = f_120(t);
  }
  t = q_38;
  {
    ATerm e_120 = NULL;
    ATerm g_120 (ATerm t)
    {
      t = not_null(e_120);
      if(((d_120 != NULL) && (d_120 != t)))
        _fail(t);
      else
        d_120 = t;
      t = not_null(e_120);
      return(t);
    }
    t = c_107(t);
    if(((e_120 != NULL) && (e_120 != t)))
      _fail(t);
    else
      e_120 = t;
    t = g_120(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_120), not_null(d_120));
  }
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm k_120 = NULL;
  ATerm r_38;
  r_38 = t;
  {
    ATerm s_38 = t;
    int t_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_4 (ATerm t)
        {
          ATerm l_120 = NULL,m_120 = NULL;
          ATerm u_120 (ATerm t)
          {
            t = not_null(m_120);
            if(((k_120 != NULL) && (k_120 != t)))
              _fail(t);
            else
              k_120 = t;
            t = not_null(l_120);
            return(t);
          }
          if(((l_120 != NULL) && (l_120 != t)))
            _fail(t);
          else
            l_120 = t;
          t = not_null(l_120);
          if(match_cons(t, sym_Input_1))
            {
              m_120 = ATgetArgument(t, 0);
              t = u_120(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1_0(l_4, t);
        ;
        LocalPopChoice(t_38);
      }
    else
      {
        t = s_38;
        {
          ATerm n_120 = NULL;
          ATerm v_120 (ATerm t)
          {
            t = not_null(n_120);
            if(((k_120 != NULL) && (k_120 != t)))
              _fail(t);
            else
              k_120 = t;
            t = not_null(n_120);
            return(t);
          }
          t = term_u_38;
          if(((n_120 != NULL) && (n_120 != t)))
            _fail(t);
          else
            n_120 = t;
          t = v_120(t);
        }
      }
  }
  t = r_38;
  {
    ATerm m_4 (ATerm t)
    {
      t = not_null(k_120);
      t = ReadFromFile_0_0(t);
      return(t);
    }
    t = split_2_0(_id, m_4, t);
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm y_120 = NULL;
    if(((y_120 != NULL) && (y_120 != t)))
      _fail(t);
    else
      y_120 = t;
    t = not_null(y_120);
    if(match_string(t, "-k"))
      {
        t = not_null(y_120);
      }
    else
      {
        if(match_string(t, "--keep"))
          {
            t = not_null(y_120);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    ATerm v_38;
    v_38 = t;
    {
      ATerm z_120 = NULL;
      ATerm a_121 = NULL;
      ATerm b_121 (ATerm t)
      {
        t = not_null(a_121);
        if(((z_120 != NULL) && (z_120 != t)))
          _fail(t);
        else
          z_120 = t;
        t = not_null(a_121);
        return(t);
      }
      t = string_to_int_0_0(t);
      if(((a_121 != NULL) && (a_121 != t)))
        _fail(t);
      else
        a_121 = t;
      t = b_121(t);
      t = (ATerm) ATmakeAppl(sym__2, term_w_38, not_null(z_120));
      t = set_config_0_0(t);
    }
    t = v_38;
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = term_x_38;
    return(t);
  }
  t = ArgOption_3_0(n_4, o_4, p_4, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm d_121 = NULL;
  ATerm f_121 (ATerm t)
  {
    ATerm e_121 = NULL;
    t = not_null(d_121);
    if(((e_121 != NULL) && (e_121 != t)))
      _fail(t);
    else
      e_121 = t;
    t = not_null(d_121);
    t = SSL_string_to_int(not_null(e_121));
    return(t);
  }
  if(((d_121 != NULL) && (d_121 != t)))
    _fail(t);
  else
    d_121 = t;
  t = f_121(t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_38 = t;
  int h_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_4 (ATerm t)
      {
        ATerm l_121 = NULL;
        if(((l_121 != NULL) && (l_121 != t)))
          _fail(t);
        else
          l_121 = t;
        t = not_null(l_121);
        if(match_string(t, "-S"))
          {
            t = not_null(l_121);
          }
        else
          {
            if(match_string(t, "--silent"))
              {
                t = not_null(l_121);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_4 (ATerm t)
      {
        t = term_i_39;
        t = set_config_0_0(t);
        t = term_j_39;
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        t = term_k_39;
        return(t);
      }
      t = Option_3_0(q_4, r_4, s_4, t);
      ;
      LocalPopChoice(h_39);
    }
  else
    {
      t = z_38;
      {
        ATerm o_39 = t;
        int p_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_4 (ATerm t)
            {
              ATerm m_121 = NULL;
              if(((m_121 != NULL) && (m_121 != t)))
                _fail(t);
              else
                m_121 = t;
              t = not_null(m_121);
              if(match_string(t, "--verbose"))
                {
                  t = not_null(m_121);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm u_4 (ATerm t)
            {
              ATerm p_121 = NULL;
              ATerm q_39;
              q_39 = t;
              {
                ATerm n_121 = NULL;
                ATerm o_121 = NULL;
                ATerm s_121 (ATerm t)
                {
                  t = not_null(o_121);
                  if(((n_121 != NULL) && (n_121 != t)))
                    _fail(t);
                  else
                    n_121 = t;
                  t = not_null(o_121);
                  return(t);
                }
                t = string_to_int_0_0(t);
                if(((o_121 != NULL) && (o_121 != t)))
                  _fail(t);
                else
                  o_121 = t;
                t = s_121(t);
                t = (ATerm) ATmakeAppl(sym__2, term_j_36, not_null(n_121));
                t = set_config_0_0(t);
              }
              t = q_39;
              {
                ATerm q_121 = NULL;
                ATerm t_121 (ATerm t)
                {
                  t = not_null(q_121);
                  if(((p_121 != NULL) && (p_121 != t)))
                    _fail(t);
                  else
                    p_121 = t;
                  t = not_null(q_121);
                  return(t);
                }
                if(((q_121 != NULL) && (q_121 != t)))
                  _fail(t);
                else
                  q_121 = t;
                t = t_121(t);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(p_121));
              }
              return(t);
            }
            ATerm v_4 (ATerm t)
            {
              t = term_r_39;
              return(t);
            }
            t = ArgOption_3_0(t_4, u_4, v_4, t);
            ;
            LocalPopChoice(p_39);
          }
        else
          {
            t = o_39;
            {
              ATerm w_4 (ATerm t)
              {
                ATerm r_121 = NULL;
                if(((r_121 != NULL) && (r_121 != t)))
                  _fail(t);
                else
                  r_121 = t;
                t = not_null(r_121);
                if(match_string(t, "-s"))
                  {
                    t = not_null(r_121);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm x_4 (ATerm t)
              {
                t = term_z_39;
                t = set_config_0_0(t);
                t = term_a_40;
                return(t);
              }
              ATerm y_4 (ATerm t)
              {
                t = term_b_40;
                return(t);
              }
              t = Option_3_0(w_4, x_4, y_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm c_40 = t;
  int d_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(d_40);
    }
  else
    {
      t = c_40;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm x_121 = NULL;
    if(((x_121 != NULL) && (x_121 != t)))
      _fail(t);
    else
      x_121 = t;
    t = not_null(x_121);
    if(match_string(t, "-o"))
      {
        t = not_null(x_121);
      }
    else
      {
        if(match_string(t, "--output"))
          {
            t = not_null(x_121);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    ATerm a_122 = NULL;
    ATerm e_40;
    e_40 = t;
    {
      ATerm y_121 = NULL;
      ATerm z_121 = NULL;
      ATerm c_122 (ATerm t)
      {
        t = not_null(z_121);
        if(((y_121 != NULL) && (y_121 != t)))
          _fail(t);
        else
          y_121 = t;
        t = not_null(z_121);
        return(t);
      }
      if(((z_121 != NULL) && (z_121 != t)))
        _fail(t);
      else
        z_121 = t;
      t = c_122(t);
      t = (ATerm) ATmakeAppl(sym__2, term_f_40, not_null(y_121));
      t = set_config_0_0(t);
    }
    t = e_40;
    {
      ATerm b_122 = NULL;
      ATerm d_122 (ATerm t)
      {
        t = not_null(b_122);
        if(((a_122 != NULL) && (a_122 != t)))
          _fail(t);
        else
          a_122 = t;
        t = not_null(b_122);
        return(t);
      }
      if(((b_122 != NULL) && (b_122 != t)))
        _fail(t);
      else
        b_122 = t;
      t = d_122(t);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_122));
    }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = term_g_40;
    return(t);
  }
  t = ArgOption_3_0(z_4, a_5, b_5, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm a_41 = t;
  int b_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(b_41);
    }
  else
    {
      t = a_41;
      {
        ATerm c_5 (ATerm t)
        {
          ATerm f_122 = NULL;
          if(((f_122 != NULL) && (f_122 != t)))
            _fail(t);
          else
            f_122 = t;
          t = not_null(f_122);
          if(match_string(t, "-b"))
            {
              t = not_null(f_122);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm d_5 (ATerm t)
        {
          t = term_d_41;
          t = set_config_0_0(t);
          t = term_e_41;
          return(t);
        }
        ATerm e_5 (ATerm t)
        {
          t = term_f_41;
          return(t);
        }
        t = Option_3_0(c_5, d_5, e_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm l_122 = NULL,m_122 = NULL,n_122 = NULL,o_122 = NULL,p_122 = NULL;
  ATerm v_122 (ATerm t)
  {
    t = not_null(l_122);
    t = register_usage_1_0(n_0, t);
    return(t);
  }
  ATerm w_122 (ATerm t)
  {
    ATerm q_122 = NULL,r_122 = NULL,s_122 = NULL,t_122 = NULL;
    t = not_null(m_122);
    if(((q_122 != NULL) && (q_122 != t)))
      _fail(t);
    else
      q_122 = t;
    t = not_null(o_122);
    if(((r_122 != NULL) && (r_122 != t)))
      _fail(t);
    else
      r_122 = t;
    t = not_null(p_122);
    if(((s_122 != NULL) && (s_122 != t)))
      _fail(t);
    else
      s_122 = t;
    t = not_null(l_122);
    {
      ATerm g_41;
      g_41 = t;
      t = not_null(q_122);
      t = i_0(t);
      t = g_41;
      {
        ATerm u_122 = NULL;
        ATerm x_122 (ATerm t)
        {
          t = not_null(u_122);
          if(((t_122 != NULL) && (t_122 != t)))
            _fail(t);
          else
            t_122 = t;
          t = not_null(u_122);
          return(t);
        }
        t = not_null(r_122);
        t = k_0(t);
        if(((u_122 != NULL) && (u_122 != t)))
          _fail(t);
        else
          u_122 = t;
        t = x_122(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(s_122)), not_null(t_122));
      }
    }
    return(t);
  }
  if(((l_122 != NULL) && (l_122 != t)))
    _fail(t);
  else
    l_122 = t;
  t = not_null(l_122);
  if(match_string(t, "register-usage-info"))
    {
      t = v_122(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_122 = ATgetFirst((ATermList) t);
          n_122 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(n_122);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_122 = ATgetFirst((ATermList) t);
              p_122 = (ATerm) ATgetNext((ATermList) t);
              t = w_122(t);
            }
          else
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
  ATerm i_5 (ATerm t)
  {
    ATerm b_123 = NULL;
    if(((b_123 != NULL) && (b_123 != t)))
      _fail(t);
    else
      b_123 = t;
    t = not_null(b_123);
    if(match_string(t, "-i"))
      {
        t = not_null(b_123);
      }
    else
      {
        if(match_string(t, "--input"))
          {
            t = not_null(b_123);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    ATerm e_123 = NULL;
    ATerm v_41;
    v_41 = t;
    {
      ATerm c_123 = NULL;
      ATerm d_123 = NULL;
      ATerm g_123 (ATerm t)
      {
        t = not_null(d_123);
        if(((c_123 != NULL) && (c_123 != t)))
          _fail(t);
        else
          c_123 = t;
        t = not_null(d_123);
        return(t);
      }
      if(((d_123 != NULL) && (d_123 != t)))
        _fail(t);
      else
        d_123 = t;
      t = g_123(t);
      t = (ATerm) ATmakeAppl(sym__2, term_w_41, not_null(c_123));
      t = set_config_0_0(t);
    }
    t = v_41;
    {
      ATerm f_123 = NULL;
      ATerm h_123 (ATerm t)
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
      t = h_123(t);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_123));
    }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = term_x_41;
    return(t);
  }
  t = ArgOption_3_0(i_5, j_5, k_5, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm y_41 = t;
  int f_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(f_42);
    }
  else
    {
      t = y_41;
      {
        ATerm g_42 = t;
        int h_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(h_42);
          }
        else
          {
            t = g_42;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_123 = NULL;
  t = report_run_time_0_0(t);
  {
    ATerm k_123 = NULL;
    ATerm l_123 (ATerm t)
    {
      t = not_null(k_123);
      if(((j_123 != NULL) && (j_123 != t)))
        _fail(t);
      else
        j_123 = t;
      t = not_null(k_123);
      return(t);
    }
    t = term_n_25;
    t = whoami_0_0(t);
    if(((k_123 != NULL) && (k_123 != t)))
      _fail(t);
    else
      k_123 = t;
    t = l_123(t);
    t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, term_i_42), not_null(j_123)));
    t = printnl_0_0(t);
    t = term_y_7;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_42;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm n_123 = NULL;
  ATerm p_123 (ATerm t)
  {
    ATerm o_123 = NULL;
    t = not_null(n_123);
    if(((o_123 != NULL) && (o_123 != t)))
      _fail(t);
    else
      o_123 = t;
    t = not_null(n_123);
    t = SSL_TicksToSeconds(not_null(o_123));
    return(t);
  }
  if(((n_123 != NULL) && (n_123 != t)))
    _fail(t);
  else
    n_123 = t;
  t = p_123(t);
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm s_123 = NULL,t_123 = NULL,u_123 = NULL;
  ATerm x_123 (ATerm t)
  {
    ATerm v_123 = NULL,w_123 = NULL;
    t = not_null(t_123);
    if(((v_123 != NULL) && (v_123 != t)))
      _fail(t);
    else
      v_123 = t;
    t = not_null(u_123);
    if(((w_123 != NULL) && (w_123 != t)))
      _fail(t);
    else
      w_123 = t;
    t = not_null(s_123);
    {
      ATerm k_42 = t;
      int l_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(v_123), not_null(w_123));
          ;
          LocalPopChoice(l_42);
        }
      else
        {
          t = k_42;
          t = SSL_addr(not_null(v_123), not_null(w_123));
        }
    }
    return(t);
  }
  if(((s_123 != NULL) && (s_123 != t)))
    _fail(t);
  else
    s_123 = t;
  t = not_null(s_123);
  if(match_cons(t, sym__2))
    {
      t_123 = ATgetArgument(t, 0);
      u_123 = ATgetArgument(t, 1);
      t = x_123(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_114 (ATerm), ATerm f_114 (ATerm), ATerm t)
{
  ATerm m_42 = t;
  int r_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = e_114(t);
      ;
      LocalPopChoice(r_42);
    }
  else
    {
      t = m_42;
      {
        ATerm b_124 = NULL,c_124 = NULL,d_124 = NULL;
        ATerm i_124 (ATerm t)
        {
          ATerm e_124 = NULL,f_124 = NULL,g_124 = NULL;
          t = not_null(c_124);
          if(((e_124 != NULL) && (e_124 != t)))
            _fail(t);
          else
            e_124 = t;
          t = not_null(d_124);
          if(((f_124 != NULL) && (f_124 != t)))
            _fail(t);
          else
            f_124 = t;
          t = not_null(b_124);
          {
            ATerm h_124 = NULL;
            ATerm j_124 (ATerm t)
            {
              t = not_null(h_124);
              if(((g_124 != NULL) && (g_124 != t)))
                _fail(t);
              else
                g_124 = t;
              t = not_null(h_124);
              return(t);
            }
            t = not_null(f_124);
            t = foldr_2_0(e_114, f_114, t);
            if(((h_124 != NULL) && (h_124 != t)))
              _fail(t);
            else
              h_124 = t;
            t = j_124(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_124), not_null(g_124));
            t = f_114(t);
          }
          return(t);
        }
        if(((b_124 != NULL) && (b_124 != t)))
          _fail(t);
        else
          b_124 = t;
        t = not_null(b_124);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_124 = ATgetFirst((ATermList) t);
            d_124 = (ATerm) ATgetNext((ATermList) t);
            t = i_124(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm c_112 (ATerm), ATerm d_112 (ATerm), ATerm t)
{
  ATerm o_124 = NULL;
  ATerm x_124 (ATerm t)
  {
    ATerm p_124 = NULL,r_124 = NULL;
    t = not_null(o_124);
    if(((p_124 != NULL) && (p_124 != t)))
      _fail(t);
    else
      p_124 = t;
    t = not_null(o_124);
    {
      ATerm s_124 = NULL;
      ATerm y_124 (ATerm t)
      {
        ATerm t_124 = NULL,u_124 = NULL,v_124 = NULL,w_124 = NULL;
        ATerm z_124 (ATerm t)
        {
          t = not_null(w_124);
          if(((r_124 != NULL) && (r_124 != t)))
            _fail(t);
          else
            r_124 = t;
          t = not_null(u_124);
          return(t);
        }
        t = not_null(s_124);
        if(((t_124 != NULL) && (t_124 != t)))
          _fail(t);
        else
          t_124 = t;
        t = not_null(s_124);
        t = SSL_explode_term(not_null(t_124));
        if(((u_124 != NULL) && (u_124 != t)))
          _fail(t);
        else
          u_124 = t;
        t = not_null(u_124);
        if(match_cons(t, sym__2))
          {
            v_124 = ATgetArgument(t, 0);
            w_124 = ATgetArgument(t, 1);
            t = z_124(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(p_124);
      if(((s_124 != NULL) && (s_124 != t)))
        _fail(t);
      else
        s_124 = t;
      t = y_124(t);
      t = not_null(r_124);
      t = foldr_2_0(c_112, d_112, t);
    }
    return(t);
  }
  if(((o_124 != NULL) && (o_124 != t)))
    _fail(t);
  else
    o_124 = t;
  t = x_124(t);
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
    ATerm l_5 (ATerm t)
    {
      t = term_q_32;
      return(t);
    }
    t = crush_2_0(l_5, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm c_125 = NULL,d_125 = NULL,f_125 = NULL;
  ATerm i_125 (ATerm t)
  {
    ATerm g_125 = NULL,h_125 = NULL;
    t = not_null(d_125);
    if(((g_125 != NULL) && (g_125 != t)))
      _fail(t);
    else
      g_125 = t;
    t = not_null(f_125);
    if(((h_125 != NULL) && (h_125 != t)))
      _fail(t);
    else
      h_125 = t;
    t = not_null(c_125);
    {
      ATerm s_42;
      s_42 = t;
      {
        ATerm t_42 = t;
        int u_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(not_null(g_125), not_null(h_125));
            ;
            LocalPopChoice(u_42);
          }
        else
          {
            t = t_42;
            t = SSL_gtr(not_null(g_125), not_null(h_125));
          }
      }
      t = s_42;
    }
    return(t);
  }
  if(((c_125 != NULL) && (c_125 != t)))
    _fail(t);
  else
    c_125 = t;
  t = not_null(c_125);
  if(match_cons(t, sym__2))
    {
      d_125 = ATgetArgument(t, 0);
      f_125 = ATgetArgument(t, 1);
      t = i_125(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_125 = NULL;
  ATerm v_42 = t;
  int w_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_125 = NULL,n_125 = NULL,o_125 = NULL;
      ATerm p_125 (ATerm t)
      {
        t = not_null(n_125);
        if(((l_125 != NULL) && (l_125 != t)))
          _fail(t);
        else
          l_125 = t;
        t = not_null(o_125);
        if(((l_125 != NULL) && (l_125 != t)))
          _fail(t);
        else
          l_125 = t;
        t = not_null(m_125);
        return(t);
      }
      if(((m_125 != NULL) && (m_125 != t)))
        _fail(t);
      else
        m_125 = t;
      t = not_null(m_125);
      if(match_cons(t, sym__2))
        {
          n_125 = ATgetArgument(t, 0);
          o_125 = ATgetArgument(t, 1);
          t = p_125(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(w_42);
    }
  else
    {
      t = v_42;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_126 (ATerm), ATerm t)
{
  ATerm m_5 (ATerm t)
  {
    ATerm n_43;
    n_43 = t;
    {
      ATerm r_125 = NULL;
      ATerm s_125 = NULL;
      ATerm t_125 (ATerm t)
      {
        t = not_null(s_125);
        if(((r_125 != NULL) && (r_125 != t)))
          _fail(t);
        else
          r_125 = t;
        t = not_null(s_125);
        return(t);
      }
      t = term_j_36;
      t = get_config_0_0(t);
      if(((s_125 != NULL) && (s_125 != t)))
        _fail(t);
      else
        s_125 = t;
      t = t_125(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_125), term_y_7);
      t = geq_0_0(t);
    }
    t = n_43;
    t = h_126(t);
    return(t);
  }
  t = try_1_0(m_5, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm w_125 = NULL,y_125 = NULL;
    ATerm o_43;
    o_43 = t;
    {
      ATerm x_125 = NULL;
      ATerm a_126 (ATerm t)
      {
        t = not_null(x_125);
        if(((w_125 != NULL) && (w_125 != t)))
          _fail(t);
        else
          w_125 = t;
        t = not_null(x_125);
        return(t);
      }
      t = run_time_0_0(t);
      if(((x_125 != NULL) && (x_125 != t)))
        _fail(t);
      else
        x_125 = t;
      t = a_126(t);
    }
    t = o_43;
    {
      ATerm z_125 = NULL;
      ATerm b_126 (ATerm t)
      {
        t = not_null(z_125);
        if(((y_125 != NULL) && (y_125 != t)))
          _fail(t);
        else
          y_125 = t;
        t = not_null(z_125);
        return(t);
      }
      t = term_n_25;
      t = whoami_0_0(t);
      if(((z_125 != NULL) && (z_125 != t)))
        _fail(t);
      else
        z_125 = t;
      t = b_126(t);
      t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_43), not_null(w_125)), term_p_43), not_null(y_125)));
      t = printnl_0_0(t);
    }
    return(t);
  }
  t = if_verbose1_1_0(n_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_q_32;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  ATerm g_126 = NULL;
  ATerm o_126 (ATerm t)
  {
    ATerm j_126 = NULL,k_126 = NULL,m_126 = NULL;
    t = not_null(g_126);
    if(((j_126 != NULL) && (j_126 != t)))
      _fail(t);
    else
      j_126 = t;
    t = not_null(g_126);
    {
      ATerm r_43;
      r_43 = t;
      {
        ATerm l_126 = NULL;
        ATerm p_126 (ATerm t)
        {
          t = not_null(l_126);
          if(((k_126 != NULL) && (k_126 != t)))
            _fail(t);
          else
            k_126 = t;
          t = not_null(l_126);
          return(t);
        }
        t = SSLgetAnnotations(not_null(j_126));
        if(((l_126 != NULL) && (l_126 != t)))
          _fail(t);
        else
          l_126 = t;
        t = p_126(t);
      }
      t = r_43;
      {
        ATerm n_126 = NULL;
        ATerm q_126 (ATerm t)
        {
          t = not_null(n_126);
          if(((m_126 != NULL) && (m_126 != t)))
            _fail(t);
          else
            m_126 = t;
          t = not_null(n_126);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(k_126));
        if(((n_126 != NULL) && (n_126 != t)))
          _fail(t);
        else
          n_126 = t;
        t = q_126(t);
        t = not_null(m_126);
      }
    }
    return(t);
  }
  if(((g_126 != NULL) && (g_126 != t)))
    _fail(t);
  else
    g_126 = t;
  t = not_null(g_126);
  if(match_cons(t, sym_Version_0))
    {
      t = o_126(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_129 (ATerm), ATerm t)
{
  ATerm v_43 = t;
  int w_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_43;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_43);
    }
  else
    {
      t = v_43;
      {
        ATerm o_5 (ATerm t)
        {
          ATerm y_43 = t;
          int z_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(z_43);
            }
          else
            {
              t = y_43;
              {
                ATerm a_44 = t;
                int g_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(g_44);
                  }
                else
                  {
                    t = a_44;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(o_5, t);
      }
    }
  t = e_129(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm s_126 = NULL;
  ATerm u_126 (ATerm t)
  {
    ATerm t_126 = NULL;
    t = not_null(s_126);
    if(((t_126 != NULL) && (t_126 != t)))
      _fail(t);
    else
      t_126 = t;
    t = not_null(s_126);
    t = SSL_table_create(not_null(t_126));
    return(t);
  }
  if(((s_126 != NULL) && (s_126 != t)))
    _fail(t);
  else
    s_126 = t;
  t = u_126(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
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
    {
      ATerm h_44;
      h_44 = t;
      t = term_i_44;
      t = table_create_0_0(t);
      t = (ATerm) ATmakeAppl(sym__3, term_i_44, term_j_44, not_null(x_126));
      t = table_put_0_0(t);
      t = h_44;
    }
    return(t);
  }
  if(((w_126 != NULL) && (w_126 != t)))
    _fail(t);
  else
    w_126 = t;
  t = y_126(t);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm a_127 = NULL;
  ATerm c_127 (ATerm t)
  {
    ATerm b_127 = NULL;
    t = not_null(a_127);
    if(((b_127 != NULL) && (b_127 != t)))
      _fail(t);
    else
      b_127 = t;
    t = not_null(a_127);
    t = SSL_table_destroy(not_null(b_127));
    return(t);
  }
  if(((a_127 != NULL) && (a_127 != t)))
    _fail(t);
  else
    a_127 = t;
  t = c_127(t);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm e_127 = NULL;
  ATerm g_127 (ATerm t)
  {
    ATerm f_127 = NULL;
    t = not_null(e_127);
    if(((f_127 != NULL) && (f_127 != t)))
      _fail(t);
    else
      f_127 = t;
    t = not_null(e_127);
    t = SSL_exit(not_null(f_127));
    return(t);
  }
  if(((e_127 != NULL) && (e_127 != t)))
    _fail(t);
  else
    e_127 = t;
  t = g_127(t);
  return(t);
}
ATerm long_description_1_0 (ATerm f_131 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm q_109 (ATerm), ATerm t)
{
  ATerm h_127 (ATerm t)
  {
    ATerm k_44 = t;
    int l_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(l_44);
      }
    else
      {
        t = k_44;
        t = Cons_2_0(q_109, h_127, t);
      }
    return(t);
  }
  t = h_127(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm o_127 = NULL,p_127 = NULL,q_127 = NULL;
  ATerm z_127 (ATerm t)
  {
    ATerm r_127 = NULL,s_127 = NULL,t_127 = NULL;
    t = not_null(o_127);
    if(((r_127 != NULL) && (r_127 != t)))
      _fail(t);
    else
      r_127 = t;
    t = not_null(p_127);
    if(((s_127 != NULL) && (s_127 != t)))
      _fail(t);
    else
      s_127 = t;
    t = not_null(s_127);
    {
      ATerm s_44;
      s_44 = t;
      {
        ATerm u_127 = NULL,w_127 = NULL,y_127 = NULL;
        ATerm d_128 (ATerm t)
        {
          t = not_null(y_127);
          if(((t_127 != NULL) && (t_127 != t)))
            _fail(t);
          else
            t_127 = t;
          t = not_null(y_127);
          return(t);
        }
        ATerm t_44;
        t_44 = t;
        {
          ATerm v_127 = NULL;
          ATerm b_128 (ATerm t)
          {
            t = not_null(v_127);
            if(((u_127 != NULL) && (u_127 != t)))
              _fail(t);
            else
              u_127 = t;
            t = not_null(v_127);
            return(t);
          }
          t = g_0(t);
          if(((v_127 != NULL) && (v_127 != t)))
            _fail(t);
          else
            v_127 = t;
          t = b_128(t);
        }
        t = t_44;
        {
          ATerm x_127 = NULL;
          ATerm c_128 (ATerm t)
          {
            t = not_null(x_127);
            if(((w_127 != NULL) && (w_127 != t)))
              _fail(t);
            else
              w_127 = t;
            t = not_null(x_127);
            return(t);
          }
          t = not_null(r_127);
          t = e_0(t);
          if(((x_127 != NULL) && (x_127 != t)))
            _fail(t);
          else
            x_127 = t;
          t = c_128(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(u_127)), not_null(w_127));
          if(((y_127 != NULL) && (y_127 != t)))
            _fail(t);
          else
            y_127 = t;
          t = d_128(t);
        }
      }
      t = s_44;
      {
        ATerm p_5 (ATerm t)
        {
          t = not_null(t_127);
          return(t);
        }
        t = reverse_acc_2_0(e_0, p_5, t);
      }
    }
    return(t);
  }
  ATerm a_128 (ATerm t)
  {
    t = term_n_25;
    t = g_0(t);
    return(t);
  }
  if(((q_127 != NULL) && (q_127 != t)))
    _fail(t);
  else
    q_127 = t;
  t = not_null(q_127);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_127 = ATgetFirst((ATermList) t);
      p_127 = (ATerm) ATgetNext((ATermList) t);
      t = z_127(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = a_128(t);
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
  ATerm q_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, q_5, t);
  return(t);
}
ATerm short_description_1_0 (ATerm e_131 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm w_100 (ATerm), ATerm t)
{
  ATerm l_128 = NULL,m_128 = NULL;
  ATerm f_129 (ATerm t)
  {
    ATerm s_128 = NULL,t_128 = NULL,u_128 = NULL,a_129 = NULL;
    ATerm l_129 (ATerm t)
    {
      ATerm b_129 = NULL,c_129 = NULL;
      t = not_null(a_129);
      if(((b_129 != NULL) && (b_129 != t)))
        _fail(t);
      else
        b_129 = t;
      t = not_null(a_129);
      {
        ATerm d_129 = NULL;
        ATerm m_129 (ATerm t)
        {
          t = not_null(d_129);
          if(((c_129 != NULL) && (c_129 != t)))
            _fail(t);
          else
            c_129 = t;
          t = not_null(d_129);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_129)), not_null(u_128));
        if(((d_129 != NULL) && (d_129 != t)))
          _fail(t);
        else
          d_129 = t;
        t = m_129(t);
        t = not_null(c_129);
      }
      return(t);
    }
    t = not_null(l_128);
    if(((s_128 != NULL) && (s_128 != t)))
      _fail(t);
    else
      s_128 = t;
    t = not_null(m_128);
    if(((t_128 != NULL) && (t_128 != t)))
      _fail(t);
    else
      t_128 = t;
    t = not_null(l_128);
    {
      ATerm z_128 = NULL;
      ATerm k_129 (ATerm t)
      {
        t = not_null(z_128);
        if(((u_128 != NULL) && (u_128 != t)))
          _fail(t);
        else
          u_128 = t;
        t = not_null(z_128);
        return(t);
      }
      t = SSLgetAnnotations(not_null(s_128));
      if(((z_128 != NULL) && (z_128 != t)))
        _fail(t);
      else
        z_128 = t;
      t = k_129(t);
      t = not_null(t_128);
      t = w_100(t);
      if(((a_129 != NULL) && (a_129 != t)))
        _fail(t);
      else
        a_129 = t;
      t = l_129(t);
    }
    return(t);
  }
  if(((l_128 != NULL) && (l_128 != t)))
    _fail(t);
  else
    l_128 = t;
  t = not_null(l_128);
  if(match_cons(t, sym_Program_1))
    {
      m_128 = ATgetArgument(t, 0);
      t = f_129(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_129 = NULL;
  ATerm u_44 = t;
  int v_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_129 = NULL;
      ATerm y_129 (ATerm t)
      {
        t = not_null(s_129);
        if(((r_129 != NULL) && (r_129 != t)))
          _fail(t);
        else
          r_129 = t;
        t = not_null(s_129);
        return(t);
      }
      t = term_j_42;
      t = get_config_0_0(t);
      if(((s_129 != NULL) && (s_129 != t)))
        _fail(t);
      else
        s_129 = t;
      t = y_129(t);
      ;
      LocalPopChoice(v_44);
    }
  else
    {
      t = u_44;
      {
        ATerm r_5 (ATerm t)
        {
          ATerm s_5 (ATerm t)
          {
            ATerm t_129 = NULL;
            ATerm z_129 (ATerm t)
            {
              t = not_null(t_129);
              if(((r_129 != NULL) && (r_129 != t)))
                _fail(t);
              else
                r_129 = t;
              t = not_null(t_129);
              return(t);
            }
            if(((t_129 != NULL) && (t_129 != t)))
              _fail(t);
            else
              t_129 = t;
            t = z_129(t);
            return(t);
          }
          t = Program_1_0(s_5, t);
          return(t);
        }
        t = option_defined_1_0(r_5, t);
      }
    }
  {
    ATerm t_5 (ATerm t)
    {
      ATerm u_5 (ATerm t)
      {
        t = not_null(r_129);
        return(t);
      }
      t = short_description_1_0(u_5, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(t_5, t);
    t = term_y_44;
    t = echo_0_0(t);
    t = term_c_45;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm v_5 (ATerm t)
      {
        ATerm u_129 = NULL;
        ATerm v_129 = NULL;
        ATerm a_130 (ATerm t)
        {
          t = not_null(v_129);
          if(((u_129 != NULL) && (u_129 != t)))
            _fail(t);
          else
            u_129 = t;
          t = not_null(v_129);
          return(t);
        }
        if(((v_129 != NULL) && (v_129 != t)))
          _fail(t);
        else
          v_129 = t;
        t = a_130(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_129)), term_d_45);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(v_5, t);
      {
        ATerm w_5 (ATerm t)
        {
          ATerm w_129 = NULL;
          ATerm x_129 = NULL;
          ATerm b_130 (ATerm t)
          {
            t = not_null(x_129);
            if(((w_129 != NULL) && (w_129 != t)))
              _fail(t);
            else
              w_129 = t;
            t = not_null(x_129);
            return(t);
          }
          ATerm x_5 (ATerm t)
          {
            t = not_null(r_129);
            return(t);
          }
          t = long_description_1_0(x_5, t);
          if(((x_129 != NULL) && (x_129 != t)))
            _fail(t);
          else
            x_129 = t;
          t = b_130(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(w_129)), term_j_45);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(w_5, t);
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
  ATerm k_45 = t;
  int l_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(l_45);
    }
  else
    {
      t = k_45;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm x_100 (ATerm), ATerm t)
{
  ATerm i_130 = NULL,j_130 = NULL;
  ATerm s_130 (ATerm t)
  {
    ATerm k_130 = NULL,l_130 = NULL,m_130 = NULL,o_130 = NULL;
    ATerm u_130 (ATerm t)
    {
      ATerm p_130 = NULL,q_130 = NULL;
      t = not_null(o_130);
      if(((p_130 != NULL) && (p_130 != t)))
        _fail(t);
      else
        p_130 = t;
      t = not_null(o_130);
      {
        ATerm r_130 = NULL;
        ATerm v_130 (ATerm t)
        {
          t = not_null(r_130);
          if(((q_130 != NULL) && (q_130 != t)))
            _fail(t);
          else
            q_130 = t;
          t = not_null(r_130);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_130)), not_null(m_130));
        if(((r_130 != NULL) && (r_130 != t)))
          _fail(t);
        else
          r_130 = t;
        t = v_130(t);
        t = not_null(q_130);
      }
      return(t);
    }
    t = not_null(i_130);
    if(((k_130 != NULL) && (k_130 != t)))
      _fail(t);
    else
      k_130 = t;
    t = not_null(j_130);
    if(((l_130 != NULL) && (l_130 != t)))
      _fail(t);
    else
      l_130 = t;
    t = not_null(i_130);
    {
      ATerm n_130 = NULL;
      ATerm t_130 (ATerm t)
      {
        t = not_null(n_130);
        if(((m_130 != NULL) && (m_130 != t)))
          _fail(t);
        else
          m_130 = t;
        t = not_null(n_130);
        return(t);
      }
      t = SSLgetAnnotations(not_null(k_130));
      if(((n_130 != NULL) && (n_130 != t)))
        _fail(t);
      else
        n_130 = t;
      t = t_130(t);
      t = not_null(l_130);
      t = x_100(t);
      if(((o_130 != NULL) && (o_130 != t)))
        _fail(t);
      else
        o_130 = t;
      t = u_130(t);
    }
    return(t);
  }
  if(((i_130 != NULL) && (i_130 != t)))
    _fail(t);
  else
    i_130 = t;
  t = not_null(i_130);
  if(match_cons(t, sym_Undefined_1))
    {
      j_130 = ATgetArgument(t, 0);
      t = s_130(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm a_110 (ATerm), ATerm t)
{
  ATerm w_130 (ATerm t)
  {
    ATerm m_45 = t;
    int n_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(a_110, _id, t);
        ;
        LocalPopChoice(n_45);
      }
    else
      {
        t = m_45;
        t = Cons_2_0(_id, w_130, t);
      }
    return(t);
  }
  t = w_130(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm e_130 (ATerm), ATerm t)
{
  t = fetch_1_0(e_130, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm y_130 = NULL,z_130 = NULL,a_131 = NULL;
  if(((y_130 != NULL) && (y_130 != t)))
    _fail(t);
  else
    y_130 = t;
  t = not_null(y_130);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(y_130);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_130 = ATgetFirst((ATermList) t);
          a_131 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(y_130);
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
  ATerm o_45;
  o_45 = t;
  {
    ATerm d_131 = NULL;
    ATerm m_131 = NULL;
    ATerm o_131 (ATerm t)
    {
      t = not_null(m_131);
      if(((d_131 != NULL) && (d_131 != t)))
        _fail(t);
      else
        d_131 = t;
      t = not_null(m_131);
      return(t);
    }
    ATerm p_45 = t;
    int q_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(q_45);
      }
    else
      {
        t = p_45;
        {
          ATerm k_131 = NULL;
          ATerm l_131 = NULL;
          ATerm n_131 (ATerm t)
          {
            t = not_null(l_131);
            if(((k_131 != NULL) && (k_131 != t)))
              _fail(t);
            else
              k_131 = t;
            t = not_null(l_131);
            return(t);
          }
          if(((l_131 != NULL) && (l_131 != t)))
            _fail(t);
          else
            l_131 = t;
          t = n_131(t);
          t = (ATerm) ATinsert(ATempty, not_null(k_131));
        }
      }
    if(((m_131 != NULL) && (m_131 != t)))
      _fail(t);
    else
      m_131 = t;
    t = o_131(t);
    t = (ATerm) ATmakeAppl(sym__2, term_i_37, not_null(d_131));
    t = printnl_0_0(t);
  }
  t = o_45;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_42;
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
  ATerm r_45 = t;
  int s_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(s_45);
    }
  else
    {
      t = r_45;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  ATerm t_131 = NULL;
  ATerm c_132 (ATerm t)
  {
    ATerm u_131 = NULL,v_131 = NULL,x_131 = NULL;
    t = not_null(t_131);
    if(((u_131 != NULL) && (u_131 != t)))
      _fail(t);
    else
      u_131 = t;
    t = not_null(t_131);
    {
      ATerm t_45;
      t_45 = t;
      {
        ATerm w_131 = NULL;
        ATerm d_132 (ATerm t)
        {
          t = not_null(w_131);
          if(((v_131 != NULL) && (v_131 != t)))
            _fail(t);
          else
            v_131 = t;
          t = not_null(w_131);
          return(t);
        }
        t = SSLgetAnnotations(not_null(u_131));
        if(((w_131 != NULL) && (w_131 != t)))
          _fail(t);
        else
          w_131 = t;
        t = d_132(t);
      }
      t = t_45;
      {
        ATerm b_132 = NULL;
        ATerm e_132 (ATerm t)
        {
          t = not_null(b_132);
          if(((x_131 != NULL) && (x_131 != t)))
            _fail(t);
          else
            x_131 = t;
          t = not_null(b_132);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(v_131));
        if(((b_132 != NULL) && (b_132 != t)))
          _fail(t);
        else
          b_132 = t;
        t = e_132(t);
        t = not_null(x_131);
      }
    }
    return(t);
  }
  if(((t_131 != NULL) && (t_131 != t)))
    _fail(t);
  else
    t_131 = t;
  t = not_null(t_131);
  if(match_cons(t, sym_Help_0))
    {
      t = c_132(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1_0 (ATerm h_106 (ATerm), ATerm t)
{
  ATerm y_45 = t;
  int z_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_106(t);
      ;
      LocalPopChoice(z_45);
    }
  else
    {
      t = y_45;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_46 = t;
  int b_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_5 (ATerm t)
      {
        ATerm h_132 = NULL;
        if(((h_132 != NULL) && (h_132 != t)))
          _fail(t);
        else
          h_132 = t;
        t = not_null(h_132);
        if(match_string(t, "--about"))
          {
            t = not_null(h_132);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm z_5 (ATerm t)
      {
        t = term_f_46;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm a_6 (ATerm t)
      {
        t = term_g_46;
        return(t);
      }
      t = Option_3_0(y_5, z_5, a_6, t);
      ;
      LocalPopChoice(b_46);
    }
  else
    {
      t = a_46;
      {
        ATerm b_6 (ATerm t)
        {
          ATerm i_132 = NULL;
          if(((i_132 != NULL) && (i_132 != t)))
            _fail(t);
          else
            i_132 = t;
          t = not_null(i_132);
          if(match_string(t, "--version"))
            {
              t = not_null(i_132);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm c_6 (ATerm t)
        {
          t = term_f_46;
          t = set_config_0_0(t);
          t = term_s_46;
          t = set_config_0_0(t);
          t = term_t_46;
          return(t);
        }
        ATerm d_6 (ATerm t)
        {
          t = term_u_46;
          return(t);
        }
        t = Option_3_0(b_6, c_6, d_6, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm l_132 = NULL,m_132 = NULL,s_132 = NULL;
  ATerm v_132 (ATerm t)
  {
    ATerm t_132 = NULL,u_132 = NULL;
    t = not_null(m_132);
    if(((t_132 != NULL) && (t_132 != t)))
      _fail(t);
    else
      t_132 = t;
    t = not_null(s_132);
    if(((u_132 != NULL) && (u_132 != t)))
      _fail(t);
    else
      u_132 = t;
    t = not_null(l_132);
    t = SSL_table_get(not_null(t_132), not_null(u_132));
    return(t);
  }
  if(((l_132 != NULL) && (l_132 != t)))
    _fail(t);
  else
    l_132 = t;
  t = not_null(l_132);
  if(match_cons(t, sym__2))
    {
      m_132 = ATgetArgument(t, 0);
      s_132 = ATgetArgument(t, 1);
      t = v_132(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm z_132 = NULL,a_133 = NULL,b_133 = NULL,c_133 = NULL;
  ATerm i_133 (ATerm t)
  {
    ATerm d_133 = NULL,e_133 = NULL,f_133 = NULL;
    t = not_null(a_133);
    if(((e_133 != NULL) && (e_133 != t)))
      _fail(t);
    else
      e_133 = t;
    t = not_null(b_133);
    if(((f_133 != NULL) && (f_133 != t)))
      _fail(t);
    else
      f_133 = t;
    t = not_null(c_133);
    if(((d_133 != NULL) && (d_133 != t)))
      _fail(t);
    else
      d_133 = t;
    t = not_null(z_132);
    {
      ATerm v_46;
      v_46 = t;
      {
        ATerm g_133 = NULL;
        ATerm h_133 = NULL;
        ATerm j_133 (ATerm t)
        {
          t = not_null(h_133);
          if(((g_133 != NULL) && (g_133 != t)))
            _fail(t);
          else
            g_133 = t;
          t = not_null(h_133);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_133), not_null(f_133));
        {
          ATerm w_46 = t;
          int x_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(x_46);
            }
          else
            {
              t = w_46;
              t = (ATerm) ATempty;
            }
          if(((h_133 != NULL) && (h_133 != t)))
            _fail(t);
          else
            h_133 = t;
          t = j_133(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(e_133), not_null(f_133), (ATerm) ATinsert(CheckATermList(not_null(g_133)), not_null(d_133)));
        t = table_put_0_0(t);
      }
      t = v_46;
    }
    return(t);
  }
  if(((z_132 != NULL) && (z_132 != t)))
    _fail(t);
  else
    z_132 = t;
  t = not_null(z_132);
  if(match_cons(t, sym__3))
    {
      a_133 = ATgetArgument(t, 0);
      b_133 = ATgetArgument(t, 1);
      c_133 = ATgetArgument(t, 2);
      t = i_133(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm j_131 (ATerm), ATerm t)
{
  ATerm l_133 = NULL;
  ATerm m_133 = NULL;
  ATerm n_133 (ATerm t)
  {
    t = not_null(m_133);
    if(((l_133 != NULL) && (l_133 != t)))
      _fail(t);
    else
      l_133 = t;
    t = not_null(m_133);
    return(t);
  }
  t = term_n_25;
  t = j_131(t);
  if(((m_133 != NULL) && (m_133 != t)))
    _fail(t);
  else
    m_133 = t;
  t = n_133(t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_44, term_a_45, not_null(l_133));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm s_133 = NULL,t_133 = NULL,u_133 = NULL;
  ATerm z_133 (ATerm t)
  {
    t = not_null(s_133);
    t = register_usage_1_0(d_0, t);
    return(t);
  }
  ATerm a_134 (ATerm t)
  {
    ATerm v_133 = NULL,w_133 = NULL,x_133 = NULL;
    t = not_null(t_133);
    if(((v_133 != NULL) && (v_133 != t)))
      _fail(t);
    else
      v_133 = t;
    t = not_null(u_133);
    if(((w_133 != NULL) && (w_133 != t)))
      _fail(t);
    else
      w_133 = t;
    t = not_null(s_133);
    {
      ATerm y_46;
      y_46 = t;
      t = not_null(v_133);
      t = a_0(t);
      t = y_46;
      {
        ATerm y_133 = NULL;
        ATerm b_134 (ATerm t)
        {
          t = not_null(y_133);
          if(((x_133 != NULL) && (x_133 != t)))
            _fail(t);
          else
            x_133 = t;
          t = not_null(y_133);
          return(t);
        }
        t = term_n_25;
        t = c_0(t);
        if(((y_133 != NULL) && (y_133 != t)))
          _fail(t);
        else
          y_133 = t;
        t = b_134(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(w_133)), not_null(x_133));
      }
    }
    return(t);
  }
  if(((s_133 != NULL) && (s_133 != t)))
    _fail(t);
  else
    s_133 = t;
  t = not_null(s_133);
  if(match_string(t, "register-usage-info"))
    {
      t = z_133(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_133 = ATgetFirst((ATermList) t);
          u_133 = (ATerm) ATgetNext((ATermList) t);
          t = a_134(t);
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
  ATerm e_6 (ATerm t)
  {
    ATerm d_134 = NULL;
    if(((d_134 != NULL) && (d_134 != t)))
      _fail(t);
    else
      d_134 = t;
    t = not_null(d_134);
    if(match_string(t, "--help"))
      {
        t = not_null(d_134);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(d_134);
          }
        else
          {
            if(match_string(t, "-?"))
              {
                t = not_null(d_134);
              }
            else
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm f_6 (ATerm t)
  {
    t = term_h_47;
    t = set_config_0_0(t);
    t = term_i_47;
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    t = term_n_47;
    return(t);
  }
  t = Option_3_0(e_6, f_6, g_6, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm g_134 = NULL,h_134 = NULL,i_134 = NULL;
  ATerm l_134 (ATerm t)
  {
    ATerm j_134 = NULL,k_134 = NULL;
    t = not_null(h_134);
    if(((j_134 != NULL) && (j_134 != t)))
      _fail(t);
    else
      j_134 = t;
    t = not_null(i_134);
    if(((k_134 != NULL) && (k_134 != t)))
      _fail(t);
    else
      k_134 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(k_134)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_134)));
    return(t);
  }
  if(((g_134 != NULL) && (g_134 != t)))
    _fail(t);
  else
    g_134 = t;
  t = not_null(g_134);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_134 = ATgetFirst((ATermList) t);
      i_134 = (ATerm) ATgetNext((ATermList) t);
      t = l_134(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm o_134 = NULL,p_134 = NULL,q_134 = NULL;
  ATerm t_134 (ATerm t)
  {
    ATerm r_134 = NULL,s_134 = NULL;
    t = not_null(p_134);
    if(((r_134 != NULL) && (r_134 != t)))
      _fail(t);
    else
      r_134 = t;
    t = not_null(q_134);
    if(((s_134 != NULL) && (s_134 != t)))
      _fail(t);
    else
      s_134 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_g_36, not_null(r_134), not_null(s_134));
    t = table_put_0_0(t);
    return(t);
  }
  if(((o_134 != NULL) && (o_134 != t)))
    _fail(t);
  else
    o_134 = t;
  t = not_null(o_134);
  if(match_cons(t, sym__2))
    {
      p_134 = ATgetArgument(t, 0);
      q_134 = ATgetArgument(t, 1);
      t = t_134(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_131 (ATerm), ATerm t)
{
  ATerm o_47;
  o_47 = t;
  {
    ATerm h_6 (ATerm t)
    {
      t = term_t_47;
      t = h_131(t);
      return(t);
    }
    t = try_1_0(h_6, t);
  }
  t = o_47;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm y_134 = NULL;
      ATerm u_47;
      u_47 = t;
      {
        ATerm w_134 = NULL;
        ATerm x_134 = NULL;
        ATerm a_135 (ATerm t)
        {
          t = not_null(x_134);
          if(((w_134 != NULL) && (w_134 != t)))
            _fail(t);
          else
            w_134 = t;
          t = not_null(x_134);
          return(t);
        }
        if(((x_134 != NULL) && (x_134 != t)))
          _fail(t);
        else
          x_134 = t;
        t = a_135(t);
        t = (ATerm) ATmakeAppl(sym__2, term_j_42, not_null(w_134));
        t = set_config_0_0(t);
      }
      t = u_47;
      {
        ATerm z_134 = NULL;
        ATerm b_135 (ATerm t)
        {
          t = not_null(z_134);
          if(((y_134 != NULL) && (y_134 != t)))
            _fail(t);
          else
            y_134 = t;
          t = not_null(z_134);
          return(t);
        }
        if(((z_134 != NULL) && (z_134 != t)))
          _fail(t);
        else
          z_134 = t;
        t = b_135(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_134));
      }
      return(t);
    }
    ATerm m_6 (ATerm t)
    {
      ATerm v_47 = t;
      int w_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_47 = t;
          int y_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(y_47);
            }
          else
            {
              t = x_47;
              t = h_131(t);
              t = Cons_2_0(_id, m_6, t);
            }
          ;
          LocalPopChoice(w_47);
        }
      else
        {
          t = v_47;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(i_6, m_6, t);
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm f_135 = NULL,g_135 = NULL,h_135 = NULL;
  ATerm z_47;
  z_47 = t;
  {
    ATerm i_135 = NULL,j_135 = NULL,k_135 = NULL,l_135 = NULL;
    ATerm m_135 (ATerm t)
    {
      t = not_null(j_135);
      if(((f_135 != NULL) && (f_135 != t)))
        _fail(t);
      else
        f_135 = t;
      t = not_null(k_135);
      if(((g_135 != NULL) && (g_135 != t)))
        _fail(t);
      else
        g_135 = t;
      t = not_null(l_135);
      if(((h_135 != NULL) && (h_135 != t)))
        _fail(t);
      else
        h_135 = t;
      t = not_null(i_135);
      t = SSL_table_put(not_null(f_135), not_null(g_135), not_null(h_135));
      return(t);
    }
    if(((i_135 != NULL) && (i_135 != t)))
      _fail(t);
    else
      i_135 = t;
    t = not_null(i_135);
    if(match_cons(t, sym__3))
      {
        j_135 = ATgetArgument(t, 0);
        k_135 = ATgetArgument(t, 1);
        l_135 = ATgetArgument(t, 2);
        t = m_135(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = z_47;
  return(t);
}
ATerm parse_options_1_0 (ATerm g_131 (ATerm), ATerm t)
{
  ATerm o_135 = NULL;
  ATerm a_48;
  a_48 = t;
  t = term_b_48;
  t = table_put_0_0(t);
  t = a_48;
  {
    ATerm n_6 (ATerm t)
    {
      ATerm c_48 = t;
      int d_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_131(t);
          ;
          LocalPopChoice(d_48);
        }
      else
        {
          t = c_48;
          {
            ATerm e_48 = t;
            int f_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(f_48);
              }
            else
              {
                t = e_48;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_6, t);
    {
      ATerm o_6 (ATerm t)
      {
        ATerm g_48 = t;
        int h_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_48;
            i_48 = t;
            {
              ATerm j_48 = t;
              int k_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_x_43;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(k_48);
                }
              else
                {
                  t = j_48;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = i_48;
            t = system_usage_0_0(t);
            t = term_q_32;
            t = exit_0_0(t);
            ;
            LocalPopChoice(h_48);
          }
        else
          {
            t = g_48;
            {
              ATerm l_48 = t;
              int m_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_48;
                  n_48 = t;
                  t = term_e_46;
                  t = get_config_0_0(t);
                  t = n_48;
                  t = system_about_0_0(t);
                  t = term_q_32;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(m_48);
                }
              else
                {
                  t = l_48;
                  {
                    ATerm p_6 (ATerm t)
                    {
                      ATerm q_6 (ATerm t)
                      {
                        ATerm p_135 = NULL;
                        ATerm q_135 (ATerm t)
                        {
                          t = not_null(p_135);
                          if(((o_135 != NULL) && (o_135 != t)))
                            _fail(t);
                          else
                            o_135 = t;
                          t = not_null(p_135);
                          return(t);
                        }
                        if(((p_135 != NULL) && (p_135 != t)))
                          _fail(t);
                        else
                          p_135 = t;
                        t = q_135(t);
                        return(t);
                      }
                      t = Undefined_1_0(q_6, t);
                      return(t);
                    }
                    t = option_defined_1_0(p_6, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_135)), term_o_48));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_y_7;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(o_6, t);
      {
        ATerm p_48;
        p_48 = t;
        t = term_z_44;
        t = table_destroy_0_0(t);
        t = p_48;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm t)
{
  t = parse_options_1_0(g_129, t);
  t = store_options_0_0(t);
  t = i_129(t);
  {
    ATerm q_48 = t;
    int r_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_129, t);
        ;
        LocalPopChoice(r_48);
      }
    else
      {
        t = q_48;
        {
          ATerm s_48 = t;
          int t_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_129(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_48);
            }
          else
            {
              t = s_48;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm v_128 (ATerm), ATerm w_128 (ATerm), ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm t)
{
  ATerm r_6 (ATerm t)
  {
    ATerm u_48 = t;
    int v_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_128(t);
        ;
        LocalPopChoice(v_48);
      }
    else
      {
        t = u_48;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm s_6 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(v_128, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(r_6, x_128, y_128, s_6, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm p_128 (ATerm), ATerm q_128 (ATerm), ATerm r_128 (ATerm), ATerm t)
{
  ATerm t_6 (ATerm t)
  {
    ATerm u_6 (ATerm t)
    {
      ATerm w_48;
      w_48 = t;
      {
        ATerm s_135 = NULL;
        ATerm t_135 = NULL;
        ATerm u_135 (ATerm t)
        {
          t = not_null(t_135);
          if(((s_135 != NULL) && (s_135 != t)))
            _fail(t);
          else
            s_135 = t;
          t = not_null(t_135);
          return(t);
        }
        t = term_j_42;
        t = get_config_0_0(t);
        if(((t_135 != NULL) && (t_135 != t)))
          _fail(t);
        else
          t_135 = t;
        t = u_135(t);
        t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(ATempty, not_null(s_135)));
        t = printnl_0_0(t);
      }
      t = w_48;
      return(t);
    }
    t = if_verbose2_1_0(u_6, t);
    return(t);
  }
  t = iowrap_4_0(p_128, q_128, r_128, t_6, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm n_128 (ATerm), ATerm o_128 (ATerm), ATerm t)
{
  t = iowrap_3_0(n_128, o_128, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm k_128 (ATerm), ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    t = _2_0(_id, k_128, t);
    return(t);
  }
  t = iowrap_2_0(v_6, _fail, t);
  return(t);
}
ATerm extract_0_0 (ATerm t)
{
  ATerm w_6 (ATerm t)
  {
    ATerm x_6 (ATerm t)
    {
      ATerm y_6 (ATerm t)
      {
        ATerm a_7 (ATerm t)
        {
          t = Strategies_1_0(needed_defs_0_0, t);
          return(t);
        }
        t = Cons_2_0(a_7, Nil_0_0, t);
        return(t);
      }
      t = Cons_2_0(_id, y_6, t);
      return(t);
    }
    t = Specification_1_0(x_6, t);
    return(t);
  }
  t = iowrap_1_0(w_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = extract_0_0(t);
  return(t);
}
