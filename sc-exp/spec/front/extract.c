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
ATerm term_j_37;
ATerm term_i_36;
ATerm term_z_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_c_35;
ATerm term_s_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_z_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_g_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_q_29;
ATerm term_o_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_t_28;
ATerm term_r_28;
ATerm term_n_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_t_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_y_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_w_24;
ATerm term_u_24;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_l_22;
ATerm term_y_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_t_20;
ATerm term_p_18;
ATerm term_n_18;
ATerm term_k_18;
ATerm term_g_15;
ATerm term_d_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_p_12;
ATerm term_z_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_o_10;
ATerm term_r_8;
ATerm term_n_8;
ATerm term_l_8;
ATerm term_i_8;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_h_7;
void init_constant_terms (void)
{
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("q_1", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_7);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Op_2, term_y_14, (ATerm) ATempty);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_ConstType_1, term_z_14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym__2, term_y_21, term_y_21);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym__2, term_v_22, term_f_23);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_y_21);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_21);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym__2, term_r_28, term_k_18);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_g_29, term_k_18);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym__2, term_h_33, term_i_33);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym__2, term_i_34, term_k_18);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym__2, term_c_35, term_k_18);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym__2, term_g_32, term_k_18);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym__3, term_h_33, term_i_33, (ATerm) ATempty);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm ConstructorNeeded_0 (ATerm);
ATerm filter_1 (ATerm, ATerm c_116 (ATerm));
ATerm Constructors_1 (ATerm, ATerm i_89 (ATerm));
ATerm Signature_1 (ATerm, ATerm m_88 (ATerm));
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
ATerm Rec_2 (ATerm, ATerm r_93 (ATerm), ATerm s_93 (ATerm));
ATerm SDefT_4 (ATerm, ATerm m_95 (ATerm), ATerm n_95 (ATerm), ATerm o_95 (ATerm), ATerm p_95 (ATerm));
ATerm SDef_3 (ATerm, ATerm j_95 (ATerm), ATerm k_95 (ATerm), ATerm l_95 (ATerm));
ATerm Let_2 (ATerm, ATerm u_92 (ATerm), ATerm v_92 (ATerm));
ATerm sboundin_3 (ATerm, ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm f_103 (ATerm));
ATerm Bind7_0 (ATerm);
ATerm Bind5_0 (ATerm);
ATerm Bind3_0 (ATerm);
ATerm declared_vars_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm p_112 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm j_118 (ATerm), ATerm k_118 (ATerm), ATerm l_118 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_118 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm tsubs_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm w_103 (ATerm), ATerm x_103 (ATerm));
ATerm alltd_1 (ATerm, ATerm q_105 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm h_103 (ATerm), ATerm i_103 (ATerm));
ATerm substitute_1 (ATerm, ATerm j_103 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm f_95 (ATerm), ATerm g_95 (ATerm));
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
ATerm As_2 (ATerm, ATerm b_90 (ATerm), ATerm c_90 (ATerm));
ATerm PrimT_3 (ATerm, ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm c_94 (ATerm));
ATerm Explode_2 (ATerm, ATerm u_89 (ATerm), ATerm v_89 (ATerm));
ATerm Op_2 (ATerm, ATerm q_89 (ATerm), ATerm r_89 (ATerm));
ATerm pat_td_1 (ATerm, ATerm a_133 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm MkConstType_0 (ATerm);
ATerm MkFunType_0 (ATerm);
ATerm map1_1 (ATerm, ATerm q_0 (ATerm));
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm u_108 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm i_120 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm y_89 (ATerm), ATerm z_89 (ATerm));
ATerm Con_3 (ATerm, ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm e_93 (ATerm), ATerm f_93 (ATerm));
ATerm oncetd_1 (ATerm, ATerm c_105 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm y_103 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm a_108 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm c_115 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm s_108 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm diff_1 (ATerm, ATerm w_111 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm n_108 (ATerm));
ATerm zip_1 (ATerm, ATerm p_108 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm w_132 (ATerm), ATerm x_132 (ATerm), ATerm y_132 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm x_120 (ATerm), ATerm y_120 (ATerm));
ATerm for_3 (ATerm, ATerm a_121 (ATerm), ATerm b_121 (ATerm), ATerm c_121 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm h_132 (ATerm), ATerm i_132 (ATerm), ATerm j_132 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm y_115 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm e_112 (ATerm), ATerm f_112 (ATerm));
ATerm union_1 (ATerm, ATerm a_112 (ATerm));
ATerm union_0 (ATerm);
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm a_116 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm r_114 (ATerm));
ATerm length_0 (ATerm);
ATerm RegisterSDefT_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm l_88 (ATerm));
ATerm Cons_2 (ATerm, ATerm h_88 (ATerm), ATerm i_88 (ATerm));
ATerm Specification_1 (ATerm, ATerm q_88 (ATerm));
ATerm _2 (ATerm, ATerm y_86 (ATerm), ATerm z_86 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm p_110 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm r_126 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm n_125 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm p_128 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm z_124 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm k_107 (ATerm), ATerm l_107 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm n_114 (ATerm), ATerm o_114 (ATerm));
ATerm crush_2 (ATerm, ATerm l_112 (ATerm), ATerm m_112 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm q_126 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm n_129 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_131 (ATerm));
ATerm map_1 (ATerm, ATerm z_109 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_131 (ATerm));
ATerm Program_1 (ATerm, ATerm f_101 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm g_101 (ATerm));
ATerm fetch_1 (ATerm, ATerm j_110 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_130 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_106 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_131 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_131 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_131 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm p_129 (ATerm), ATerm q_129 (ATerm), ATerm r_129 (ATerm), ATerm s_129 (ATerm));
ATerm iowrap_4 (ATerm, ATerm e_129 (ATerm), ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm));
ATerm iowrap_3 (ATerm, ATerm y_128 (ATerm), ATerm z_128 (ATerm), ATerm a_129 (ATerm));
ATerm iowrap_2 (ATerm, ATerm w_128 (ATerm), ATerm x_128 (ATerm));
ATerm iowrap_1 (ATerm, ATerm t_128 (ATerm));
ATerm extract_0 (ATerm);
ATerm main_0 (ATerm);
ATerm ConstructorNeeded_0 (ATerm t)
{
  ATerm p_4 = NULL,q_5 = NULL,r_5 = NULL;
  p_4 = t;
  o_4 :
  if(match_cons(p_4, sym_OpDecl_2))
    {
      q_5 = ATgetArgument(p_4, 0);
      r_5 = ATgetArgument(p_4, 1);
      {
        ATerm w_6 = NULL,k_7 = NULL;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, not_null(q_5), (ATerm) ATempty);
        {
          ATerm c_0 (ATerm t)
          {
            t = term_h_7;
            return(t);
          }
          t = rewrite_1(t, c_0);
          {
            w_6 = t;
            a_1 :
            if(match_cons(w_6, sym_Defined_1))
              {
                k_7 = ATgetArgument(w_6, 0);
                n_4 :
                if(!(match_string(k_7, "q_1")))
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
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, not_null(q_5), not_null(r_5));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm c_116 (ATerm))
{
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
      {
        ATerm l_7 = t;
        int m_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 (ATerm t)
            {
              t = filter_1(t, c_116);
              return(t);
            }
            t = Cons_2(t, c_116, f_0);
            ;
            LocalPopChoice(m_7);
          }
        else
          {
            t = l_7;
            {
              ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
              r_7 = t;
              q_7 :
              if(((ATgetType(r_7) == AT_LIST) && !(ATisEmpty(r_7))))
                {
                  s_7 = ATgetFirst((ATermList) r_7);
                  t_7 = (ATerm) ATgetNext((ATermList) r_7);
                  {
                    t = not_null(t_7);
                    t = filter_1(t, c_116);
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
ATerm Constructors_1 (ATerm t, ATerm i_89 (ATerm))
{
  ATerm b_8 = NULL,c_8 = NULL;
  b_8 = t;
  a_8 :
  if(match_cons(b_8, sym_Constructors_1))
    {
      c_8 = ATgetArgument(b_8, 0);
      {
        ATerm f_8 = NULL,h_8 = NULL;
        ATerm g_8 = NULL;
        t = SSLgetAnnotations(not_null(b_8));
        {
          g_8 = t;
          if(((f_8 != NULL) && (f_8 != g_8)))
            _fail(g_8);
          else
            f_8 = g_8;
        }
        {
          t = not_null(c_8);
          {
            ATerm j_8 = NULL;
            t = i_89(t);
            {
              h_8 = t;
              {
                ATerm k_8 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, not_null(h_8)), not_null(f_8));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm m_88 (ATerm))
{
  ATerm u_8 = NULL,v_8 = NULL;
  u_8 = t;
  t_8 :
  if(match_cons(u_8, sym_Signature_1))
    {
      v_8 = ATgetArgument(u_8, 0);
      {
        ATerm y_8 = NULL,a_9 = NULL;
        ATerm z_8 = NULL;
        t = SSLgetAnnotations(not_null(u_8));
        {
          z_8 = t;
          if(((y_8 != NULL) && (y_8 != z_8)))
            _fail(z_8);
          else
            y_8 = z_8;
        }
        {
          t = not_null(v_8);
          {
            ATerm c_9 = NULL;
            t = m_88(t);
            {
              a_9 = t;
              {
                ATerm d_9 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(a_9)), not_null(y_8));
                {
                  d_9 = t;
                  if(((c_9 != NULL) && (c_9 != d_9)))
                    _fail(d_9);
                  else
                    c_9 = d_9;
                }
                t = not_null(c_9);
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
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  k_9 = t;
  j_9 :
  if(match_cons(k_9, sym_Op_2))
    {
      l_9 = ATgetArgument(k_9, 0);
      m_9 = ATgetArgument(k_9, 1);
      {
        ATerm n_7;
        n_7 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, not_null(l_9), (ATerm) ATempty), term_p_7);
          {
            ATerm o_0 (ATerm t)
            {
              t = term_h_7;
              return(t);
            }
            t = assert_1(t, o_0);
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
ATerm needed_constructors_0 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL;
  w_9 = t;
  r_9 :
  if(match_cons(w_9, sym_Specification_1))
    {
      x_9 = ATgetArgument(w_9, 0);
      s_9 :
      if(((ATgetType(x_9) == AT_LIST) && !(ATisEmpty(x_9))))
        {
          y_9 = ATgetFirst((ATermList) x_9);
          z_9 = (ATerm) ATgetNext((ATermList) x_9);
          t_9 :
          if(((ATgetType(z_9) == AT_LIST) && !(ATisEmpty(z_9))))
            {
              a_10 = ATgetFirst((ATermList) z_9);
              c_10 = (ATerm) ATgetNext((ATermList) z_9);
              u_9 :
              if(match_cons(a_10, sym_Strategies_1))
                {
                  b_10 = ATgetArgument(a_10, 0);
                  v_9 :
                  if(((ATgetType(c_10) == AT_LIST) && ATisEmpty(c_10)))
                    {
                      {
                        ATerm f_10 = NULL;
                        ATerm g_10 = NULL;
                        t = not_null(b_10);
                        {
                          ATerm r_0 (ATerm t)
                          {
                            t = try_1(t, DeclareConstructorNeeded_0);
                            return(t);
                          }
                          t = topdown_1(t, r_0);
                          {
                            t = not_null(y_9);
                            {
                              ATerm s_0 (ATerm t)
                              {
                                ATerm t_0 (ATerm t)
                                {
                                  ATerm u_0 (ATerm t)
                                  {
                                    t = filter_1(t, ConstructorNeeded_0);
                                    return(t);
                                  }
                                  t = Constructors_1(t, u_0);
                                  return(t);
                                }
                                t = Cons_2(t, t_0, Nil_0);
                                return(t);
                              }
                              t = Signature_1(t, s_0);
                              {
                                g_10 = t;
                                if(((f_10 != NULL) && (f_10 != g_10)))
                                  _fail(g_10);
                                else
                                  f_10 = g_10;
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(b_10))), not_null(f_10)));
                      }
                    }
                  else
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
  ATerm n_10 = NULL;
  n_10 = t;
  m_10 :
  if(((ATgetType(n_10) == AT_LIST) && ATisEmpty(n_10)))
    {
      {
        ATerm p_10 = NULL,r_10 = NULL;
        ATerm u_7;
        u_7 = t;
        {
          ATerm q_10 = NULL;
          t = SSLgetAnnotations(not_null(n_10));
          {
            q_10 = t;
            if(((p_10 != NULL) && (p_10 != q_10)))
              _fail(q_10);
            else
              p_10 = q_10;
          }
        }
        t = u_7;
        {
          ATerm s_10 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(p_10));
          {
            s_10 = t;
            if(((r_10 != NULL) && (r_10 != s_10)))
              _fail(s_10);
            else
              r_10 = s_10;
          }
          t = not_null(r_10);
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
  ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL;
  y_10 = t;
  x_10 :
  if(match_cons(y_10, sym__2))
    {
      z_10 = ATgetArgument(y_10, 0);
      a_11 = ATgetArgument(y_10, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_7), not_null(a_11)), term_w_7), not_null(z_10)), term_v_7);
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
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
  h_11 = t;
  f_11 :
  if(match_cons(h_11, sym__2))
    {
      i_11 = ATgetArgument(h_11, 0);
      l_11 = ATgetArgument(h_11, 1);
      g_11 :
      if(match_cons(i_11, sym_Mod_2))
        {
          j_11 = ATgetArgument(i_11, 0);
          k_11 = ATgetArgument(i_11, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_7), not_null(l_11)), term_w_7), not_null(k_11)), term_y_7), not_null(j_11)), term_v_7);
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
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
  t_11 = t;
  r_11 :
  if(match_cons(t_11, sym__2))
    {
      u_11 = ATgetArgument(t_11, 0);
      v_11 = ATgetArgument(t_11, 1);
      s_11 :
      if(((ATgetType(v_11) == AT_LIST) && !(ATisEmpty(v_11))))
        {
          w_11 = ATgetFirst((ATermList) v_11);
          x_11 = (ATerm) ATgetNext((ATermList) v_11);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(x_11)), not_null(w_11));
            {
              ATerm v_0 (ATerm t)
              {
                ATerm z_7 = t;
                int d_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    ;
                    LocalPopChoice(d_8);
                  }
                else
                  {
                    t = z_7;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, v_0);
            }
            t = not_null(u_11);
          }
        }
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
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
  f_12 = t;
  d_12 :
  if(match_cons(f_12, sym__2))
    {
      g_12 = ATgetArgument(f_12, 0);
      h_12 = ATgetArgument(f_12, 1);
      e_12 :
      if(((ATgetType(h_12) == AT_LIST) && ATisEmpty(h_12)))
        {
          t = not_null(g_12);
        }
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
  ATerm e_8;
  e_8 = t;
  {
    t = error_0(t);
    {
      t = term_i_8;
      t = exit_0(t);
    }
  }
  t = e_8;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_l_8);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm m_8;
  m_8 = t;
  {
    ATerm l_12 = NULL;
    ATerm m_12 = NULL;
    m_12 = t;
    if(((l_12 != NULL) && (l_12 != m_12)))
      _fail(m_12);
    else
      l_12 = m_12;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_8, not_null(l_12));
      t = printnl_0(t);
    }
  }
  t = m_8;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
  e_13 = t;
  a_13 :
  if(match_cons(e_13, sym__2))
    {
      f_13 = ATgetArgument(e_13, 0);
      g_13 = ATgetArgument(e_13, 1);
      b_13 :
      if(match_cons(g_13, sym__2))
        {
          h_13 = ATgetArgument(g_13, 0);
          i_13 = ATgetArgument(g_13, 1);
          c_13 :
          if(match_int(h_13, 0))
            {
              d_13 :
              if(match_int(i_13, 0))
                {
                  ATerm o_8 = t;
                  int p_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL;
                      t = not_null(f_13);
                      {
                        t = Arities_0(t);
                        {
                          k_13 = t;
                          u_12 :
                          if(((ATgetType(k_13) == AT_LIST) && !(ATisEmpty(k_13))))
                            {
                              l_13 = ATgetFirst((ATermList) k_13);
                              m_13 = (ATerm) ATgetNext((ATermList) k_13);
                              v_12 :
                              if(((ATgetType(m_13) == AT_LIST) && !(ATisEmpty(m_13))))
                                {
                                  n_13 = ATgetFirst((ATermList) m_13);
                                  o_13 = (ATerm) ATgetNext((ATermList) m_13);
                                  {
                                    ATerm q_8 = t;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm w_0 (ATerm t)
                                        {
                                          ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
                                          p_13 = t;
                                          r_12 :
                                          if(match_cons(p_13, sym__2))
                                            {
                                              q_13 = ATgetArgument(p_13, 0);
                                              r_13 = ATgetArgument(p_13, 1);
                                              s_12 :
                                              if(match_int(q_13, 0))
                                                {
                                                  t_12 :
                                                  if(!(match_int(r_13, 0)))
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
                                        t = fetch_1(t, w_0);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = q_8;
                                      }
                                    {
                                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_13)), term_r_8);
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
                      LocalPopChoice(p_8);
                    }
                  else
                    {
                      t = o_8;
                      {
                        ATerm t_13 = NULL,u_13 = NULL;
                        ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL;
                        t = not_null(f_13);
                        {
                          t = Arities_0(t);
                          {
                            v_13 = t;
                            x_12 :
                            if(((ATgetType(v_13) == AT_LIST) && !(ATisEmpty(v_13))))
                              {
                                w_13 = ATgetFirst((ATermList) v_13);
                                z_13 = (ATerm) ATgetNext((ATermList) v_13);
                                y_12 :
                                if(match_cons(w_13, sym__2))
                                  {
                                    x_13 = ATgetArgument(w_13, 0);
                                    y_13 = ATgetArgument(w_13, 1);
                                    z_12 :
                                    if(((ATgetType(z_13) == AT_LIST) && ATisEmpty(z_13)))
                                      {
                                        {
                                          if(((t_13 != NULL) && (t_13 != x_13)))
                                            _fail(x_13);
                                          else
                                            t_13 = x_13;
                                          {
                                            if(((u_13 != NULL) && (u_13 != y_13)))
                                              _fail(y_13);
                                            else
                                              u_13 = y_13;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), (ATerm) ATmakeAppl(sym__2, not_null(t_13), not_null(u_13)));
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
                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), (ATerm) ATmakeAppl(sym__2, not_null(t_13), not_null(u_13)));
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
ATerm Rec_2 (ATerm t, ATerm r_93 (ATerm), ATerm s_93 (ATerm))
{
  ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL;
  k_14 = t;
  j_14 :
  if(match_cons(k_14, sym_Rec_2))
    {
      l_14 = ATgetArgument(k_14, 0);
      m_14 = ATgetArgument(k_14, 1);
      {
        ATerm q_14 = NULL,s_14 = NULL;
        ATerm r_14 = NULL;
        t = SSLgetAnnotations(not_null(k_14));
        {
          r_14 = t;
          if(((q_14 != NULL) && (q_14 != r_14)))
            _fail(r_14);
          else
            q_14 = r_14;
        }
        {
          t = not_null(l_14);
          {
            ATerm u_14 = NULL;
            t = r_93(t);
            {
              s_14 = t;
              {
                t = not_null(m_14);
                {
                  ATerm w_14 = NULL;
                  t = s_93(t);
                  {
                    u_14 = t;
                    {
                      ATerm x_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(s_14), not_null(u_14)), not_null(q_14));
                      {
                        x_14 = t;
                        if(((w_14 != NULL) && (w_14 != x_14)))
                          _fail(x_14);
                        else
                          w_14 = x_14;
                      }
                      t = not_null(w_14);
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
ATerm SDefT_4 (ATerm t, ATerm m_95 (ATerm), ATerm n_95 (ATerm), ATerm o_95 (ATerm), ATerm p_95 (ATerm))
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
  l_15 = t;
  k_15 :
  if(match_cons(l_15, sym_SDefT_4))
    {
      m_15 = ATgetArgument(l_15, 0);
      n_15 = ATgetArgument(l_15, 1);
      o_15 = ATgetArgument(l_15, 2);
      p_15 = ATgetArgument(l_15, 3);
      {
        ATerm v_15 = NULL,x_15 = NULL;
        ATerm w_15 = NULL;
        t = SSLgetAnnotations(not_null(l_15));
        {
          w_15 = t;
          if(((v_15 != NULL) && (v_15 != w_15)))
            _fail(w_15);
          else
            v_15 = w_15;
        }
        {
          t = not_null(m_15);
          {
            ATerm z_15 = NULL;
            t = m_95(t);
            {
              x_15 = t;
              {
                t = not_null(n_15);
                {
                  ATerm b_16 = NULL;
                  t = n_95(t);
                  {
                    z_15 = t;
                    {
                      t = not_null(o_15);
                      {
                        ATerm d_16 = NULL;
                        t = o_95(t);
                        {
                          b_16 = t;
                          {
                            t = not_null(p_15);
                            {
                              ATerm f_16 = NULL;
                              t = p_95(t);
                              {
                                d_16 = t;
                                {
                                  ATerm g_16 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(x_15), not_null(z_15), not_null(b_16), not_null(d_16)), not_null(v_15));
                                  {
                                    g_16 = t;
                                    if(((f_16 != NULL) && (f_16 != g_16)))
                                      _fail(g_16);
                                    else
                                      f_16 = g_16;
                                  }
                                  t = not_null(f_16);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm SDef_3 (ATerm t, ATerm j_95 (ATerm), ATerm k_95 (ATerm), ATerm l_95 (ATerm))
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
  v_16 = t;
  u_16 :
  if(match_cons(v_16, sym_SDef_3))
    {
      w_16 = ATgetArgument(v_16, 0);
      x_16 = ATgetArgument(v_16, 1);
      y_16 = ATgetArgument(v_16, 2);
      {
        ATerm d_17 = NULL,f_17 = NULL;
        ATerm e_17 = NULL;
        t = SSLgetAnnotations(not_null(v_16));
        {
          e_17 = t;
          if(((d_17 != NULL) && (d_17 != e_17)))
            _fail(e_17);
          else
            d_17 = e_17;
        }
        {
          t = not_null(w_16);
          {
            ATerm h_17 = NULL;
            t = j_95(t);
            {
              f_17 = t;
              {
                t = not_null(x_16);
                {
                  ATerm j_17 = NULL;
                  t = k_95(t);
                  {
                    h_17 = t;
                    {
                      t = not_null(y_16);
                      {
                        ATerm l_17 = NULL;
                        t = l_95(t);
                        {
                          j_17 = t;
                          {
                            ATerm m_17 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(f_17), not_null(h_17), not_null(j_17)), not_null(d_17));
                            {
                              m_17 = t;
                              if(((l_17 != NULL) && (l_17 != m_17)))
                                _fail(m_17);
                              else
                                l_17 = m_17;
                            }
                            t = not_null(l_17);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm u_92 (ATerm), ATerm v_92 (ATerm))
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  z_17 = t;
  y_17 :
  if(match_cons(z_17, sym_Let_2))
    {
      a_18 = ATgetArgument(z_17, 0);
      b_18 = ATgetArgument(z_17, 1);
      {
        ATerm f_18 = NULL,h_18 = NULL;
        ATerm g_18 = NULL;
        t = SSLgetAnnotations(not_null(z_17));
        {
          g_18 = t;
          if(((f_18 != NULL) && (f_18 != g_18)))
            _fail(g_18);
          else
            f_18 = g_18;
        }
        {
          t = not_null(a_18);
          {
            ATerm j_18 = NULL;
            t = u_92(t);
            {
              h_18 = t;
              {
                t = not_null(b_18);
                {
                  ATerm l_18 = NULL;
                  t = v_92(t);
                  {
                    j_18 = t;
                    {
                      ATerm m_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(h_18), not_null(j_18)), not_null(f_18));
                      {
                        m_18 = t;
                        if(((l_18 != NULL) && (l_18 != m_18)))
                          _fail(m_18);
                        else
                          l_18 = m_18;
                      }
                      t = not_null(l_18);
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
ATerm sboundin_3 (ATerm t, ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm f_103 (ATerm))
{
  ATerm s_8 = t;
  int w_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, d_103, d_103);
      ;
      LocalPopChoice(w_8);
    }
  else
    {
      t = s_8;
      {
        ATerm x_8 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, f_103, f_103, d_103);
            ;
            LocalPopChoice(b_9);
          }
        else
          {
            t = x_8;
            {
              ATerm e_9 = t;
              int f_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4(t, f_103, f_103, f_103, d_103);
                  ;
                  LocalPopChoice(f_9);
                }
              else
                {
                  t = e_9;
                  t = Rec_2(t, f_103, d_103);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL;
  u_18 = t;
  t_18 :
  if(match_cons(u_18, sym_RDefT_4))
    {
      v_18 = ATgetArgument(u_18, 0);
      w_18 = ATgetArgument(u_18, 1);
      x_18 = ATgetArgument(u_18, 2);
      y_18 = ATgetArgument(u_18, 3);
      {
        t = not_null(w_18);
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
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  g_19 = t;
  f_19 :
  if(match_cons(g_19, sym_SDefT_4))
    {
      h_19 = ATgetArgument(g_19, 0);
      i_19 = ATgetArgument(g_19, 1);
      j_19 = ATgetArgument(g_19, 2);
      k_19 = ATgetArgument(g_19, 3);
      {
        t = not_null(i_19);
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
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  s_19 = t;
  r_19 :
  if(match_cons(s_19, sym_Rec_2))
    {
      t_19 = ATgetArgument(s_19, 0);
      u_19 = ATgetArgument(s_19, 1);
      t = (ATerm) ATinsert(ATempty, not_null(t_19));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declared_vars_0 (ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
    c_20 = t;
    a_20 :
    if(match_cons(c_20, sym_VarDec_2))
      {
        d_20 = ATgetArgument(c_20, 0);
        b_20 = ATgetArgument(c_20, 1);
        t = not_null(d_20);
      }
    else
      {
        if(match_cons(c_20, sym_DefaultVarDec_1))
          {
            d_20 = ATgetArgument(c_20, 0);
            t = not_null(d_20);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1(t, x_0);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL;
  k_20 = t;
  j_20 :
  if(match_cons(k_20, sym_SDef_3))
    {
      l_20 = ATgetArgument(k_20, 0);
      m_20 = ATgetArgument(k_20, 1);
      n_20 = ATgetArgument(k_20, 2);
      {
        t = not_null(m_20);
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
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL;
  x_20 = t;
  w_20 :
  if(match_cons(x_20, sym_Let_2))
    {
      y_20 = ATgetArgument(x_20, 0);
      z_20 = ATgetArgument(x_20, 1);
      {
        t = not_null(y_20);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL;
            c_21 = t;
            v_20 :
            if(match_cons(c_21, sym_SDef_3))
              {
                d_21 = ATgetArgument(c_21, 0);
                e_21 = ATgetArgument(c_21, 1);
                f_21 = ATgetArgument(c_21, 2);
                t = not_null(d_21);
              }
            else
              {
                if(match_cons(c_21, sym_SDefT_4))
                  {
                    d_21 = ATgetArgument(c_21, 0);
                    e_21 = ATgetArgument(c_21, 1);
                    f_21 = ATgetArgument(c_21, 2);
                    g_21 = ATgetArgument(c_21, 3);
                    t = not_null(d_21);
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, y_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm p_112 (ATerm))
{
  ATerm q_21 = NULL;
  ATerm s_21 = NULL;
  q_21 = t;
  {
    ATerm t_21 = NULL;
    ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
    t = not_null(q_21);
    {
      t_21 = t;
      {
        t = SSL_explode_term(not_null(t_21));
        {
          v_21 = t;
          p_21 :
          if(match_cons(v_21, sym__2))
            {
              w_21 = ATgetArgument(v_21, 0);
              x_21 = ATgetArgument(v_21, 1);
              if(((s_21 != NULL) && (s_21 != x_21)))
                _fail(x_21);
              else
                s_21 = x_21;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_21);
      t = foldr_3(t, n_112, o_112, p_112);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm j_118 (ATerm), ATerm k_118 (ATerm), ATerm l_118 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_118 (ATerm))
{
  ATerm e_22 (ATerm t)
  {
    ATerm z_0 (ATerm t)
    {
      ATerm g_9 = t;
      int h_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_118(t);
          ;
          LocalPopChoice(h_9);
        }
      else
        {
          t = g_9;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm b_1 (ATerm t)
    {
      ATerm i_9 = t;
      int n_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_22 = NULL;
          ATerm o_9;
          o_9 = t;
          {
            ATerm d_22 = NULL;
            t = k_118(t);
            {
              d_22 = t;
              if(((c_22 != NULL) && (c_22 != d_22)))
                _fail(d_22);
              else
                c_22 = d_22;
            }
          }
          t = o_9;
          {
            ATerm c_1 (ATerm t)
            {
              ATerm e_1 (ATerm t)
              {
                t = not_null(c_22);
                return(t);
              }
              t = split_2(t, e_22, e_1);
              t = diff_1(t, m_118);
              return(t);
            }
            ATerm d_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = l_118(t, c_1, e_22, d_1);
            {
              ATerm f_1 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, f_1, union_0, _id);
            }
          }
          ;
          LocalPopChoice(n_9);
        }
      else
        {
          t = i_9;
          {
            ATerm g_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, g_1, union_0, e_22);
          }
        }
      return(t);
    }
    t = split_2(t, z_0, b_1);
    t = union_0(t);
    return(t);
  }
  t = e_22(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL;
    o_22 = t;
    j_22 :
    if(match_cons(o_22, sym_CallT_3))
      {
        p_22 = ATgetArgument(o_22, 0);
        r_22 = ATgetArgument(o_22, 1);
        s_22 = ATgetArgument(o_22, 2);
        k_22 :
        if(match_cons(p_22, sym_SVar_1))
          {
            q_22 = ATgetArgument(p_22, 0);
            {
              ATerm w_22 = NULL,y_22 = NULL;
              ATerm p_9;
              p_9 = t;
              {
                ATerm x_22 = NULL;
                t = not_null(r_22);
                {
                  t = length_0(t);
                  {
                    x_22 = t;
                    if(((w_22 != NULL) && (w_22 != x_22)))
                      _fail(x_22);
                    else
                      w_22 = x_22;
                  }
                }
              }
              t = p_9;
              {
                ATerm z_22 = NULL;
                t = not_null(s_22);
                {
                  t = length_0(t);
                  {
                    z_22 = t;
                    if(((y_22 != NULL) && (y_22 != z_22)))
                      _fail(z_22);
                    else
                      y_22 = z_22;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(q_22), (ATerm) ATmakeAppl(sym__2, not_null(w_22), not_null(y_22))));
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
  ATerm i_1 (ATerm t)
  {
    ATerm q_9 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(d_10);
      }
    else
      {
        t = q_9;
        {
          ATerm e_10 = t;
          int h_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(h_10);
            }
          else
            {
              t = e_10;
              {
                ATerm i_10 = t;
                int j_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0(t);
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
                          t = Bind5_0(t);
                          ;
                          LocalPopChoice(l_10);
                        }
                      else
                        {
                          t = k_10;
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
  ATerm j_1 (ATerm t)
  {
    ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
    a_23 = t;
    m_22 :
    if(match_cons(a_23, sym__2))
      {
        b_23 = ATgetArgument(a_23, 0);
        e_23 = ATgetArgument(a_23, 1);
        n_22 :
        if(match_cons(b_23, sym__2))
          {
            c_23 = ATgetArgument(b_23, 0);
            d_23 = ATgetArgument(b_23, 1);
            if(((c_23 != NULL) && (c_23 != e_23)))
              _fail(e_23);
            else
              c_23 = e_23;
          }
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
  t = free_vars2_4(t, h_1, i_1, sboundin_3, j_1);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm r_23 = NULL;
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
  r_23 = t;
  {
    ATerm w_23 = NULL;
    ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL;
    t = not_null(r_23);
    {
      w_23 = t;
      {
        t = SSL_explode_term(not_null(w_23));
        {
          y_23 = t;
          n_23 :
          if(match_cons(y_23, sym__2))
            {
              z_23 = ATgetArgument(y_23, 0);
              a_24 = ATgetArgument(y_23, 1);
              o_23 :
              if(match_string(z_23, ""))
                {
                  p_23 :
                  if(((ATgetType(a_24) == AT_LIST) && !(ATisEmpty(a_24))))
                    {
                      b_24 = ATgetFirst((ATermList) a_24);
                      c_24 = (ATerm) ATgetNext((ATermList) a_24);
                      q_23 :
                      if(((ATgetType(c_24) == AT_LIST) && !(ATisEmpty(c_24))))
                        {
                          d_24 = ATgetFirst((ATermList) c_24);
                          e_24 = (ATerm) ATgetNext((ATermList) c_24);
                          {
                            if(((t_23 != NULL) && (t_23 != b_24)))
                              _fail(b_24);
                            else
                              t_23 = b_24;
                            {
                              if(((v_23 != NULL) && (v_23 != d_24)))
                                _fail(d_24);
                              else
                                v_23 = d_24;
                              if(((u_23 != NULL) && (u_23 != e_24)))
                                _fail(e_24);
                              else
                                u_23 = e_24;
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
    t = not_null(v_23);
  }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    t = term_o_10;
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    ATerm k_24 = NULL,m_24 = NULL;
    ATerm t_10;
    t_10 = t;
    {
      ATerm l_24 = NULL;
      t = Fst_0(t);
      {
        l_24 = t;
        if(((k_24 != NULL) && (k_24 != l_24)))
          _fail(l_24);
        else
          k_24 = l_24;
      }
    }
    t = t_10;
    {
      ATerm n_24 = NULL;
      t = Snd_0(t);
      {
        n_24 = t;
        if(((m_24 != NULL) && (m_24 != n_24)))
          _fail(n_24);
        else
          m_24 = n_24;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(k_24), not_null(m_24));
    }
    return(t);
  }
  t = foldr_2(t, k_1, l_1);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL;
  s_24 = t;
  r_24 :
  if(match_cons(s_24, sym_Var_1))
    {
      t_24 = ATgetArgument(s_24, 0);
      t = not_null(t_24);
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
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  f_25 = t;
  y_24 :
  if(match_cons(f_25, sym_CallT_3))
    {
      g_25 = ATgetArgument(f_25, 0);
      i_25 = ATgetArgument(f_25, 1);
      e_25 = ATgetArgument(f_25, 2);
      z_24 :
      if(match_cons(g_25, sym_SVar_1))
        {
          h_25 = ATgetArgument(g_25, 0);
          a_25 :
          if(((ATgetType(i_25) == AT_LIST) && ATisEmpty(i_25)))
            {
              b_25 :
              if(((ATgetType(e_25) == AT_LIST) && ATisEmpty(e_25)))
                {
                  t = not_null(h_25);
                }
              else
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
      if(match_cons(f_25, sym_Call_2))
        {
          g_25 = ATgetArgument(f_25, 0);
          i_25 = ATgetArgument(f_25, 1);
          c_25 :
          if(match_cons(g_25, sym_SVar_1))
            {
              h_25 = ATgetArgument(g_25, 0);
              d_25 :
              if(((ATgetType(i_25) == AT_LIST) && ATisEmpty(i_25)))
                {
                  t = not_null(h_25);
                }
              else
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
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
  q_25 = t;
  o_25 :
  if(match_cons(q_25, sym__2))
    {
      r_25 = ATgetArgument(q_25, 0);
      s_25 = ATgetArgument(q_25, 1);
      p_25 :
      if(((ATgetType(s_25) == AT_LIST) && !(ATisEmpty(s_25))))
        {
          t_25 = ATgetFirst((ATermList) s_25);
          u_25 = (ATerm) ATgetNext((ATermList) s_25);
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_25), not_null(u_25));
        }
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
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL;
  c_26 = t;
  z_25 :
  if(match_cons(c_26, sym__2))
    {
      d_26 = ATgetArgument(c_26, 0);
      e_26 = ATgetArgument(c_26, 1);
      a_26 :
      if(((ATgetType(e_26) == AT_LIST) && !(ATisEmpty(e_26))))
        {
          f_26 = ATgetFirst((ATermList) e_26);
          i_26 = (ATerm) ATgetNext((ATermList) e_26);
          b_26 :
          if(match_cons(f_26, sym__2))
            {
              g_26 = ATgetArgument(f_26, 0);
              h_26 = ATgetArgument(f_26, 1);
              {
                ATerm k_26 = NULL;
                if(((d_26 != NULL) && (d_26 != g_26)))
                  _fail(g_26);
                else
                  d_26 = g_26;
                {
                  if(((k_26 != NULL) && (k_26 != h_26)))
                    _fail(h_26);
                  else
                    k_26 = h_26;
                  t = not_null(k_26);
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
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm w_103 (ATerm), ATerm x_103 (ATerm))
{
  ATerm q_26 = NULL;
  ATerm s_26 = NULL,t_26 = NULL;
  q_26 = t;
  {
    ATerm u_26 = NULL;
    t = not_null(q_26);
    {
      ATerm v_26 = NULL;
      t = w_103(t);
      {
        u_26 = t;
        {
          if(((s_26 != NULL) && (s_26 != u_26)))
            _fail(u_26);
          else
            s_26 = u_26;
          {
            t = x_103(t);
            {
              v_26 = t;
              if(((t_26 != NULL) && (t_26 != v_26)))
                _fail(v_26);
              else
                t_26 = v_26;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_26), not_null(t_26));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm q_105 (ATerm))
{
  ATerm z_26 (ATerm t)
  {
    ATerm w_10 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_105(t);
        ;
        LocalPopChoice(b_11);
      }
    else
      {
        t = w_10;
        t = _all(t, z_26);
      }
    return(t);
  }
  t = z_26(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL;
  e_27 = t;
  d_27 :
  if(match_cons(e_27, sym__2))
    {
      f_27 = ATgetArgument(e_27, 0);
      g_27 = ATgetArgument(e_27, 1);
      {
        ATerm j_27 = NULL;
        if(((j_27 != NULL) && (j_27 != g_27)))
          _fail(g_27);
        else
          j_27 = g_27;
      }
    }
  else
    {
      if(match_cons(e_27, sym__3))
        {
          f_27 = ATgetArgument(e_27, 0);
          g_27 = ATgetArgument(e_27, 1);
          h_27 = ATgetArgument(e_27, 2);
          {
            ATerm p_27 = NULL;
            ATerm q_27 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_27), not_null(g_27));
            {
              t = zip_1(t, _id);
              {
                q_27 = t;
                if(((p_27 != NULL) && (p_27 != q_27)))
                  _fail(q_27);
                else
                  p_27 = q_27;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_27), not_null(h_27));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm h_103 (ATerm), ATerm i_103 (ATerm))
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
  t = subs_args_0(t);
  {
    w_27 = t;
    v_27 :
    if(match_cons(w_27, sym__2))
      {
        x_27 = ATgetArgument(w_27, 0);
        y_27 = ATgetArgument(w_27, 1);
        {
          t = not_null(y_27);
          {
            ATerm m_1 (ATerm t)
            {
              ATerm n_1 (ATerm t)
              {
                t = not_null(x_27);
                return(t);
              }
              t = SubsVar_2(t, h_103, n_1);
              t = i_103(t);
              return(t);
            }
            t = alltd_1(t, m_1);
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
ATerm substitute_1 (ATerm t, ATerm j_103 (ATerm))
{
  t = substitute_2(t, j_103, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm f_95 (ATerm), ATerm g_95 (ATerm))
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
  i_28 = t;
  h_28 :
  if(match_cons(i_28, sym_VarDec_2))
    {
      j_28 = ATgetArgument(i_28, 0);
      k_28 = ATgetArgument(i_28, 1);
      {
        ATerm o_28 = NULL,q_28 = NULL;
        ATerm p_28 = NULL;
        t = SSLgetAnnotations(not_null(i_28));
        {
          p_28 = t;
          if(((o_28 != NULL) && (o_28 != p_28)))
            _fail(p_28);
          else
            o_28 = p_28;
        }
        {
          t = not_null(j_28);
          {
            ATerm s_28 = NULL;
            t = f_95(t);
            {
              q_28 = t;
              {
                t = not_null(k_28);
                {
                  ATerm u_28 = NULL;
                  t = g_95(t);
                  {
                    s_28 = t;
                    {
                      ATerm v_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(q_28), not_null(s_28)), not_null(o_28));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL;
  x_29 = t;
  v_29 :
  if(((ATgetType(x_29) == AT_LIST) && !(ATisEmpty(x_29))))
    {
      y_29 = ATgetFirst((ATermList) x_29);
      d_30 = (ATerm) ATgetNext((ATermList) x_29);
      w_29 :
      if(match_cons(y_29, sym_SDefT_4))
        {
          z_29 = ATgetArgument(y_29, 0);
          a_30 = ATgetArgument(y_29, 1);
          b_30 = ATgetArgument(y_29, 2);
          c_30 = ATgetArgument(y_29, 3);
          {
            ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,z_31 = NULL;
            ATerm c_11;
            c_11 = t;
            {
              ATerm o_30 = NULL;
              t = not_null(a_30);
              {
                ATerm p_30 = NULL;
                ATerm o_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, o_1);
                {
                  o_30 = t;
                  {
                    if(((j_30 != NULL) && (j_30 != o_30)))
                      _fail(o_30);
                    else
                      j_30 = o_30;
                    {
                      t = not_null(b_30);
                      {
                        ATerm v_30 = NULL;
                        ATerm p_1 (ATerm t)
                        {
                          t = VarDec_2(t, new_0, _id);
                          return(t);
                        }
                        t = map_1(t, p_1);
                        {
                          p_30 = t;
                          {
                            if(((k_30 != NULL) && (k_30 != p_30)))
                              _fail(p_30);
                            else
                              k_30 = p_30;
                            {
                              t = not_null(j_30);
                              {
                                ATerm b_31 = NULL;
                                ATerm r_1 (ATerm t)
                                {
                                  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL;
                                  q_30 = t;
                                  f_29 :
                                  if(match_cons(q_30, sym_VarDec_2))
                                    {
                                      r_30 = ATgetArgument(q_30, 0);
                                      s_30 = ATgetArgument(q_30, 1);
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_30)), (ATerm)ATempty, (ATerm) ATempty);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, r_1);
                                {
                                  v_30 = t;
                                  {
                                    if(((l_30 != NULL) && (l_30 != v_30)))
                                      _fail(v_30);
                                    else
                                      l_30 = v_30;
                                    {
                                      t = not_null(k_30);
                                      {
                                        ATerm y_31 = NULL;
                                        ATerm s_1 (ATerm t)
                                        {
                                          ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
                                          w_30 = t;
                                          i_29 :
                                          if(match_cons(w_30, sym_VarDec_2))
                                            {
                                              x_30 = ATgetArgument(w_30, 0);
                                              y_30 = ATgetArgument(w_30, 1);
                                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_30));
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                          return(t);
                                        }
                                        t = map_1(t, s_1);
                                        {
                                          b_31 = t;
                                          {
                                            if(((m_30 != NULL) && (m_30 != b_31)))
                                              _fail(b_31);
                                            else
                                              m_30 = b_31;
                                            {
                                              t = not_null(x_29);
                                              {
                                                ATerm t_1 (ATerm t)
                                                {
                                                  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL;
                                                  c_31 = t;
                                                  s_29 :
                                                  if(match_cons(c_31, sym_SDefT_4))
                                                    {
                                                      d_31 = ATgetArgument(c_31, 0);
                                                      e_31 = ATgetArgument(c_31, 1);
                                                      f_31 = ATgetArgument(c_31, 2);
                                                      g_31 = ATgetArgument(c_31, 3);
                                                      {
                                                        ATerm k_31 = NULL,q_31 = NULL;
                                                        ATerm d_11;
                                                        d_11 = t;
                                                        {
                                                          ATerm p_31 = NULL;
                                                          t = not_null(f_31);
                                                          {
                                                            ATerm u_1 (ATerm t)
                                                            {
                                                              ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
                                                              l_31 = t;
                                                              m_29 :
                                                              if(match_cons(l_31, sym_VarDec_2))
                                                                {
                                                                  m_31 = ATgetArgument(l_31, 0);
                                                                  n_31 = ATgetArgument(l_31, 1);
                                                                  t = not_null(m_31);
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            t = map_1(t, u_1);
                                                            {
                                                              p_31 = t;
                                                              if(((k_31 != NULL) && (k_31 != p_31)))
                                                                _fail(p_31);
                                                              else
                                                                k_31 = p_31;
                                                            }
                                                          }
                                                        }
                                                        t = d_11;
                                                        {
                                                          ATerm r_31 = NULL,x_31 = NULL;
                                                          ATerm w_31 = NULL;
                                                          t = not_null(e_31);
                                                          {
                                                            ATerm v_1 (ATerm t)
                                                            {
                                                              ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
                                                              s_31 = t;
                                                              p_29 :
                                                              if(match_cons(s_31, sym_VarDec_2))
                                                                {
                                                                  t_31 = ATgetArgument(s_31, 0);
                                                                  u_31 = ATgetArgument(s_31, 1);
                                                                  t = not_null(t_31);
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            t = map_1(t, v_1);
                                                            {
                                                              w_31 = t;
                                                              if(((r_31 != NULL) && (r_31 != w_31)))
                                                                _fail(w_31);
                                                              else
                                                                r_31 = w_31;
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym__3, not_null(r_31), not_null(l_30), not_null(g_31));
                                                            {
                                                              t = ssubs_0(t);
                                                              {
                                                                x_31 = t;
                                                                if(((q_31 != NULL) && (q_31 != x_31)))
                                                                  _fail(x_31);
                                                                else
                                                                  q_31 = x_31;
                                                              }
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym__3, not_null(k_31), not_null(m_30), not_null(q_31));
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
                                                  y_31 = t;
                                                  if(((n_30 != NULL) && (n_30 != y_31)))
                                                    _fail(y_31);
                                                  else
                                                    n_30 = y_31;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = c_11;
            {
              ATerm a_32 = NULL;
              t = not_null(n_30);
              {
                t = choices_0(t);
                {
                  a_32 = t;
                  if(((z_31 != NULL) && (z_31 != a_32)))
                    _fail(a_32);
                  else
                    z_31 = a_32;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(z_29), not_null(j_30), not_null(k_30), not_null(z_31));
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
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
  t_32 = t;
  r_32 :
  if(((ATgetType(t_32) == AT_LIST) && !(ATisEmpty(t_32))))
    {
      u_32 = ATgetFirst((ATermList) t_32);
      v_32 = (ATerm) ATgetNext((ATermList) t_32);
      s_32 :
      if(((ATgetType(v_32) == AT_LIST) && ATisEmpty(v_32)))
        {
          t = not_null(u_32);
        }
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
  ATerm e_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      ;
      LocalPopChoice(m_11);
    }
  else
    {
      t = e_11;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL;
  c_33 = t;
  a_33 :
  if(match_cons(c_33, sym__2))
    {
      d_33 = ATgetArgument(c_33, 0);
      g_33 = ATgetArgument(c_33, 1);
      b_33 :
      if(match_cons(d_33, sym__2))
        {
          e_33 = ATgetArgument(d_33, 0);
          f_33 = ATgetArgument(d_33, 1);
          {
            ATerm k_33 = NULL;
            ATerm l_33 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_33), not_null(f_33));
            {
              t = Definitions_0(t);
              {
                l_33 = t;
                if(((k_33 != NULL) && (k_33 != l_33)))
                  _fail(l_33);
                else
                  k_33 = l_33;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_33), not_null(g_33));
          }
        }
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
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
  g_34 = t;
  e_34 :
  if(match_cons(g_34, sym_ExplodeCong_2))
    {
      h_34 = ATgetArgument(g_34, 0);
      f_34 = ATgetArgument(g_34, 1);
      {
        ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
        ATerm o_34 = NULL;
        ATerm p_34 = NULL;
        t = new_0(t);
        {
          o_34 = t;
          {
            if(((k_34 != NULL) && (k_34 != o_34)))
              _fail(o_34);
            else
              k_34 = o_34;
            {
              ATerm q_34 = NULL;
              t = new_0(t);
              {
                p_34 = t;
                {
                  if(((l_34 != NULL) && (l_34 != p_34)))
                    _fail(p_34);
                  else
                    l_34 = p_34;
                  {
                    ATerm r_34 = NULL;
                    t = new_0(t);
                    {
                      q_34 = t;
                      {
                        if(((m_34 != NULL) && (m_34 != q_34)))
                          _fail(q_34);
                        else
                          m_34 = q_34;
                        {
                          t = new_0(t);
                          {
                            r_34 = t;
                            if(((n_34 != NULL) && (n_34 != r_34)))
                              _fail(r_34);
                            else
                              n_34 = r_34;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(n_34)), not_null(m_34)), not_null(l_34)), not_null(k_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_34)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_34)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(h_34), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_34)), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_34))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(f_34), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_34)), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_34))))), (ATerm) ATmakeAppl(sym_PrimT_3, term_n_11, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_34))), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_34)))))));
      }
    }
  else
    {
      if(match_cons(g_34, sym_Build_1))
        {
          h_34 = ATgetArgument(g_34, 0);
          {
            ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
            ATerm x_34 = NULL;
            ATerm b_35 = NULL;
            t = new_0(t);
            {
              x_34 = t;
              {
                if(((v_34 != NULL) && (v_34 != x_34)))
                  _fail(x_34);
                else
                  v_34 = x_34;
                {
                  t = not_null(h_34);
                  {
                    ATerm w_1 (ATerm t)
                    {
                      ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
                      y_34 = t;
                      x_33 :
                      if(match_cons(y_34, sym_Explode_2))
                        {
                          z_34 = ATgetArgument(y_34, 0);
                          a_35 = ATgetArgument(y_34, 1);
                          {
                            if(((t_34 != NULL) && (t_34 != z_34)))
                              _fail(z_34);
                            else
                              t_34 = z_34;
                            {
                              if(((u_34 != NULL) && (u_34 != a_35)))
                                _fail(a_35);
                              else
                                u_34 = a_35;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_34));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, w_1);
                    {
                      b_35 = t;
                      if(((w_34 != NULL) && (w_34 != b_35)))
                        _fail(b_35);
                      else
                        w_34 = b_35;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_n_11, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_34)), not_null(t_34))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_34))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_34)))));
          }
        }
      else
        {
          if(match_cons(g_34, sym_Match_1))
            {
              h_34 = ATgetArgument(g_34, 0);
              {
                ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL;
                ATerm i_35 = NULL;
                ATerm j_35 = NULL;
                t = new_0(t);
                {
                  i_35 = t;
                  {
                    if(((f_35 != NULL) && (f_35 != i_35)))
                      _fail(i_35);
                    else
                      f_35 = i_35;
                    {
                      ATerm n_35 = NULL;
                      t = new_0(t);
                      {
                        j_35 = t;
                        {
                          if(((g_35 != NULL) && (g_35 != j_35)))
                            _fail(j_35);
                          else
                            g_35 = j_35;
                          {
                            t = not_null(h_34);
                            {
                              ATerm x_1 (ATerm t)
                              {
                                ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL;
                                k_35 = t;
                                c_34 :
                                if(match_cons(k_35, sym_Explode_2))
                                  {
                                    l_35 = ATgetArgument(k_35, 0);
                                    m_35 = ATgetArgument(k_35, 1);
                                    {
                                      if(((d_35 != NULL) && (d_35 != l_35)))
                                        _fail(l_35);
                                      else
                                        d_35 = l_35;
                                      {
                                        if(((e_35 != NULL) && (e_35 != m_35)))
                                          _fail(m_35);
                                        else
                                          e_35 = m_35;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_35));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, x_1);
                              {
                                n_35 = t;
                                if(((h_35 != NULL) && (h_35 != n_35)))
                                  _fail(n_35);
                                else
                                  h_35 = n_35;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(h_35)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_35))), (ATerm) ATmakeAppl(sym_PrimT_3, term_o_11, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_35)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_35)), (ATerm) ATmakeAppl(sym_Op_2, term_p_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_35)), not_null(d_35)))))));
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
  ATerm w_36 = NULL,x_36 = NULL;
  w_36 = t;
  v_36 :
  if(match_cons(w_36, sym_Match_1))
    {
      x_36 = ATgetArgument(w_36, 0);
      {
        ATerm q_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL;
            ATerm d_37 = NULL;
            ATerm h_37 = NULL;
            t = new_0(t);
            {
              d_37 = t;
              {
                if(((b_37 != NULL) && (b_37 != d_37)))
                  _fail(d_37);
                else
                  b_37 = d_37;
                {
                  t = not_null(x_36);
                  {
                    ATerm y_1 (ATerm t)
                    {
                      ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL;
                      e_37 = t;
                      h_36 :
                      if(match_cons(e_37, sym_Anno_2))
                        {
                          f_37 = ATgetArgument(e_37, 0);
                          g_37 = ATgetArgument(e_37, 1);
                          {
                            if(((z_36 != NULL) && (z_36 != f_37)))
                              _fail(f_37);
                            else
                              z_36 = f_37;
                            {
                              if(((a_37 != NULL) && (a_37 != g_37)))
                                _fail(g_37);
                              else
                                a_37 = g_37;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_37)), not_null(z_36));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, y_1);
                    {
                      h_37 = t;
                      if(((c_37 != NULL) && (c_37 != h_37)))
                        _fail(h_37);
                      else
                        c_37 = h_37;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_37)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_37)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_z_11, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_37)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(a_37))))));
            ;
            LocalPopChoice(y_11);
          }
        else
          {
            t = q_11;
            {
              ATerm a_12 = t;
              int b_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
                  ATerm x_37 = NULL;
                  ATerm e_38 = NULL;
                  t = new_0(t);
                  {
                    x_37 = t;
                    {
                      if(((v_37 != NULL) && (v_37 != x_37)))
                        _fail(x_37);
                      else
                        v_37 = x_37;
                      {
                        t = not_null(x_36);
                        {
                          ATerm z_1 (ATerm t)
                          {
                            ATerm c_38 = NULL,d_38 = NULL;
                            c_38 = t;
                            l_36 :
                            if(match_cons(c_38, sym_RootApp_1))
                              {
                                d_38 = ATgetArgument(c_38, 0);
                                {
                                  if(((u_37 != NULL) && (u_37 != d_38)))
                                    _fail(d_38);
                                  else
                                    u_37 = d_38;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_37));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, z_1);
                          {
                            e_38 = t;
                            if(((w_37 != NULL) && (w_37 != e_38)))
                              _fail(e_38);
                            else
                              w_37 = e_38;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_37)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_37)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_37))), not_null(u_37))));
                  ;
                  LocalPopChoice(b_12);
                }
              else
                {
                  t = a_12;
                  {
                    ATerm g_38 = NULL,h_38 = NULL,l_38 = NULL,m_38 = NULL;
                    ATerm n_38 = NULL;
                    ATerm c_39 = NULL;
                    t = new_0(t);
                    {
                      n_38 = t;
                      {
                        if(((l_38 != NULL) && (l_38 != n_38)))
                          _fail(n_38);
                        else
                          l_38 = n_38;
                        {
                          t = not_null(x_36);
                          {
                            ATerm a_2 (ATerm t)
                            {
                              ATerm q_38 = NULL,r_38 = NULL,a_39 = NULL;
                              q_38 = t;
                              t_36 :
                              if(match_cons(q_38, sym_App_2))
                                {
                                  r_38 = ATgetArgument(q_38, 0);
                                  a_39 = ATgetArgument(q_38, 1);
                                  {
                                    if(((h_38 != NULL) && (h_38 != r_38)))
                                      _fail(r_38);
                                    else
                                      h_38 = r_38;
                                    {
                                      if(((g_38 != NULL) && (g_38 != a_39)))
                                        _fail(a_39);
                                      else
                                        g_38 = a_39;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_38));
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
                              c_39 = t;
                              if(((m_38 != NULL) && (m_38 != c_39)))
                                _fail(c_39);
                              else
                                m_38 = c_39;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_38))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_38)), not_null(h_38)))));
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
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL;
  y_39 = t;
  w_39 :
  if(match_cons(y_39, sym_Match_1))
    {
      z_39 = ATgetArgument(y_39, 0);
      x_39 :
      if(match_cons(z_39, sym_RootApp_1))
        {
          a_40 = ATgetArgument(z_39, 0);
          t = not_null(a_40);
        }
      else
        {
          if(match_cons(z_39, sym_App_2))
            {
              a_40 = ATgetArgument(z_39, 0);
              b_40 = ATgetArgument(z_39, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(a_40), not_null(b_40));
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
  ATerm p_40 = NULL,q_40 = NULL;
  p_40 = t;
  o_40 :
  if(match_cons(p_40, sym_Match_1))
    {
      q_40 = ATgetArgument(p_40, 0);
      {
        ATerm s_40 = NULL,t_40 = NULL;
        ATerm x_40 = NULL;
        t = not_null(q_40);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL;
            u_40 = t;
            l_40 :
            if(match_cons(u_40, sym_RootApp_1))
              {
                v_40 = ATgetArgument(u_40, 0);
                m_40 :
                if(match_cons(v_40, sym_Match_1))
                  {
                    w_40 = ATgetArgument(v_40, 0);
                    {
                      if(((s_40 != NULL) && (s_40 != w_40)))
                        _fail(w_40);
                      else
                        s_40 = w_40;
                      t = not_null(s_40);
                    }
                  }
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
          t = pat_td_1(t, b_2);
          {
            x_40 = t;
            if(((t_40 != NULL) && (t_40 != x_40)))
              _fail(x_40);
            else
              t_40 = x_40;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(t_40));
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
  ATerm c_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      ;
      LocalPopChoice(i_12);
    }
  else
    {
      t = c_12;
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            ;
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL;
  r_41 = t;
  q_41 :
  if(match_cons(r_41, sym_Build_1))
    {
      s_41 = ATgetArgument(r_41, 0);
      {
        ATerm n_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL,b_42 = NULL;
            ATerm c_42 = NULL;
            ATerm g_42 = NULL;
            t = new_0(t);
            {
              c_42 = t;
              {
                if(((w_41 != NULL) && (w_41 != c_42)))
                  _fail(c_42);
                else
                  w_41 = c_42;
                {
                  t = not_null(s_41);
                  {
                    ATerm c_2 (ATerm t)
                    {
                      ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
                      d_42 = t;
                      g_41 :
                      if(match_cons(d_42, sym_Anno_2))
                        {
                          e_42 = ATgetArgument(d_42, 0);
                          f_42 = ATgetArgument(d_42, 1);
                          {
                            if(((u_41 != NULL) && (u_41 != e_42)))
                              _fail(e_42);
                            else
                              u_41 = e_42;
                            {
                              if(((v_41 != NULL) && (v_41 != f_42)))
                                _fail(f_42);
                              else
                                v_41 = f_42;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_41));
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
                      g_42 = t;
                      if(((b_42 != NULL) && (b_42 != g_42)))
                        _fail(g_42);
                      else
                        b_42 = g_42;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_41)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_p_12, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_41)), not_null(u_41))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_41))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_42))));
            ;
            LocalPopChoice(o_12);
          }
        else
          {
            t = n_12;
            {
              ATerm q_12 = t;
              int w_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL;
                  ATerm t_42 = NULL;
                  ATerm w_42 = NULL;
                  t = new_0(t);
                  {
                    t_42 = t;
                    {
                      if(((r_42 != NULL) && (r_42 != t_42)))
                        _fail(t_42);
                      else
                        r_42 = t_42;
                      {
                        t = not_null(s_41);
                        {
                          ATerm d_2 (ATerm t)
                          {
                            ATerm u_42 = NULL,v_42 = NULL;
                            u_42 = t;
                            k_41 :
                            if(match_cons(u_42, sym_RootApp_1))
                              {
                                v_42 = ATgetArgument(u_42, 0);
                                {
                                  if(((q_42 != NULL) && (q_42 != v_42)))
                                    _fail(v_42);
                                  else
                                    q_42 = v_42;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_42));
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
                            w_42 = t;
                            if(((s_42 != NULL) && (s_42 != w_42)))
                              _fail(w_42);
                            else
                              s_42 = w_42;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_42)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_42), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_42))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_42))));
                  ;
                  LocalPopChoice(w_12);
                }
              else
                {
                  t = q_12;
                  {
                    ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL;
                    ATerm c_43 = NULL;
                    ATerm g_43 = NULL;
                    t = new_0(t);
                    {
                      c_43 = t;
                      {
                        if(((a_43 != NULL) && (a_43 != c_43)))
                          _fail(c_43);
                        else
                          a_43 = c_43;
                        {
                          t = not_null(s_41);
                          {
                            ATerm e_2 (ATerm t)
                            {
                              ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL;
                              d_43 = t;
                              o_41 :
                              if(match_cons(d_43, sym_App_2))
                                {
                                  e_43 = ATgetArgument(d_43, 0);
                                  f_43 = ATgetArgument(d_43, 1);
                                  {
                                    if(((y_42 != NULL) && (y_42 != e_43)))
                                      _fail(e_43);
                                    else
                                      y_42 = e_43;
                                    {
                                      if(((z_42 != NULL) && (z_42 != f_43)))
                                        _fail(f_43);
                                      else
                                        z_42 = f_43;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_43));
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
                              g_43 = t;
                              if(((b_43 != NULL) && (b_43 != g_43)))
                                _fail(g_43);
                              else
                                b_43 = g_43;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_43)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(y_42), not_null(z_42), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_43)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_43))));
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
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL;
  c_44 = t;
  a_44 :
  if(match_cons(c_44, sym_Build_1))
    {
      d_44 = ATgetArgument(c_44, 0);
      b_44 :
      if(match_cons(d_44, sym_RootApp_1))
        {
          e_44 = ATgetArgument(d_44, 0);
          t = not_null(e_44);
        }
      else
        {
          if(match_cons(d_44, sym_App_2))
            {
              e_44 = ATgetArgument(d_44, 0);
              f_44 = ATgetArgument(d_44, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_44)), not_null(e_44));
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
ATerm As_2 (ATerm t, ATerm b_90 (ATerm), ATerm c_90 (ATerm))
{
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL;
  g_45 = t;
  d_45 :
  if(match_cons(g_45, sym_As_2))
    {
      h_45 = ATgetArgument(g_45, 0);
      i_45 = ATgetArgument(g_45, 1);
      {
        ATerm m_45 = NULL,o_45 = NULL;
        ATerm n_45 = NULL;
        t = SSLgetAnnotations(not_null(g_45));
        {
          n_45 = t;
          if(((m_45 != NULL) && (m_45 != n_45)))
            _fail(n_45);
          else
            m_45 = n_45;
        }
        {
          t = not_null(h_45);
          {
            ATerm q_45 = NULL;
            t = b_90(t);
            {
              o_45 = t;
              {
                t = not_null(i_45);
                {
                  ATerm s_45 = NULL;
                  t = c_90(t);
                  {
                    q_45 = t;
                    {
                      ATerm t_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(o_45), not_null(q_45)), not_null(m_45));
                      {
                        t_45 = t;
                        if(((s_45 != NULL) && (s_45 != t_45)))
                          _fail(t_45);
                        else
                          s_45 = t_45;
                      }
                      t = not_null(s_45);
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
ATerm PrimT_3 (ATerm t, ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm c_94 (ATerm))
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL;
  o_46 = t;
  n_46 :
  if(match_cons(o_46, sym_PrimT_3))
    {
      p_46 = ATgetArgument(o_46, 0);
      q_46 = ATgetArgument(o_46, 1);
      r_46 = ATgetArgument(o_46, 2);
      {
        ATerm d_47 = NULL,f_47 = NULL;
        ATerm e_47 = NULL;
        t = SSLgetAnnotations(not_null(o_46));
        {
          e_47 = t;
          if(((d_47 != NULL) && (d_47 != e_47)))
            _fail(e_47);
          else
            d_47 = e_47;
        }
        {
          t = not_null(p_46);
          {
            ATerm h_47 = NULL;
            t = a_94(t);
            {
              f_47 = t;
              {
                t = not_null(q_46);
                {
                  ATerm j_47 = NULL;
                  t = b_94(t);
                  {
                    h_47 = t;
                    {
                      t = not_null(r_46);
                      {
                        ATerm l_47 = NULL;
                        t = c_94(t);
                        {
                          j_47 = t;
                          {
                            ATerm m_47 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(f_47), not_null(h_47), not_null(j_47)), not_null(d_47));
                            {
                              m_47 = t;
                              if(((l_47 != NULL) && (l_47 != m_47)))
                                _fail(m_47);
                              else
                                l_47 = m_47;
                            }
                            t = not_null(l_47);
                          }
                        }
                      }
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
ATerm Explode_2 (ATerm t, ATerm u_89 (ATerm), ATerm v_89 (ATerm))
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL;
  z_47 = t;
  y_47 :
  if(match_cons(z_47, sym_Explode_2))
    {
      a_48 = ATgetArgument(z_47, 0);
      b_48 = ATgetArgument(z_47, 1);
      {
        ATerm f_48 = NULL,i_48 = NULL;
        ATerm h_48 = NULL;
        t = SSLgetAnnotations(not_null(z_47));
        {
          h_48 = t;
          if(((f_48 != NULL) && (f_48 != h_48)))
            _fail(h_48);
          else
            f_48 = h_48;
        }
        {
          t = not_null(a_48);
          {
            ATerm k_48 = NULL;
            t = u_89(t);
            {
              i_48 = t;
              {
                t = not_null(b_48);
                {
                  ATerm o_48 = NULL;
                  t = v_89(t);
                  {
                    k_48 = t;
                    {
                      ATerm p_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(i_48), not_null(k_48)), not_null(f_48));
                      {
                        p_48 = t;
                        if(((o_48 != NULL) && (o_48 != p_48)))
                          _fail(p_48);
                        else
                          o_48 = p_48;
                      }
                      t = not_null(o_48);
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
ATerm Op_2 (ATerm t, ATerm q_89 (ATerm), ATerm r_89 (ATerm))
{
  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL;
  d_49 = t;
  c_49 :
  if(match_cons(d_49, sym_Op_2))
    {
      e_49 = ATgetArgument(d_49, 0);
      f_49 = ATgetArgument(d_49, 1);
      {
        ATerm j_49 = NULL,n_49 = NULL;
        ATerm k_49 = NULL;
        t = SSLgetAnnotations(not_null(d_49));
        {
          k_49 = t;
          if(((j_49 != NULL) && (j_49 != k_49)))
            _fail(k_49);
          else
            j_49 = k_49;
        }
        {
          t = not_null(e_49);
          {
            ATerm p_49 = NULL;
            t = q_89(t);
            {
              n_49 = t;
              {
                t = not_null(f_49);
                {
                  ATerm s_49 = NULL;
                  t = r_89(t);
                  {
                    p_49 = t;
                    {
                      ATerm t_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(n_49), not_null(p_49)), not_null(j_49));
                      {
                        t_49 = t;
                        if(((s_49 != NULL) && (s_49 != t_49)))
                          _fail(t_49);
                        else
                          s_49 = t_49;
                      }
                      t = not_null(s_49);
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
ATerm pat_td_1 (ATerm t, ATerm a_133 (ATerm))
{
  ATerm j_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_133(t);
      ;
      LocalPopChoice(s_13);
    }
  else
    {
      t = j_13;
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_2 (ATerm t)
            {
              ATerm g_2 (ATerm t)
              {
                t = pat_td_1(t, a_133);
                return(t);
              }
              t = fetch_1(t, g_2);
              return(t);
            }
            t = Op_2(t, _id, f_2);
            ;
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
            {
              ATerm c_14 = t;
              int d_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_2 (ATerm t)
                  {
                    t = pat_td_1(t, a_133);
                    return(t);
                  }
                  t = Explode_2(t, _id, h_2);
                  ;
                  LocalPopChoice(d_14);
                }
              else
                {
                  t = c_14;
                  {
                    ATerm e_14 = t;
                    int f_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_2 (ATerm t)
                        {
                          t = pat_td_1(t, a_133);
                          return(t);
                        }
                        t = Explode_2(t, i_2, _id);
                        ;
                        LocalPopChoice(f_14);
                      }
                    else
                      {
                        t = e_14;
                        {
                          ATerm g_14 = t;
                          int h_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_2 (ATerm t)
                              {
                                ATerm k_2 (ATerm t)
                                {
                                  t = pat_td_1(t, a_133);
                                  return(t);
                                }
                                t = fetch_1(t, k_2);
                                return(t);
                              }
                              t = PrimT_3(t, _id, _id, j_2);
                              ;
                              LocalPopChoice(h_14);
                            }
                          else
                            {
                              t = g_14;
                              {
                                ATerm l_2 (ATerm t)
                                {
                                  t = pat_td_1(t, a_133);
                                  return(t);
                                }
                                t = As_2(t, _id, l_2);
                              }
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
  ATerm v_50 = NULL,w_50 = NULL;
  v_50 = t;
  u_50 :
  if(match_cons(v_50, sym_Build_1))
    {
      w_50 = ATgetArgument(v_50, 0);
      {
        ATerm i_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_50 = NULL,z_50 = NULL;
            ATerm d_51 = NULL;
            t = not_null(w_50);
            {
              ATerm m_2 (ATerm t)
              {
                ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL;
                a_51 = t;
                l_50 :
                if(match_cons(a_51, sym_RootApp_1))
                  {
                    b_51 = ATgetArgument(a_51, 0);
                    m_50 :
                    if(match_cons(b_51, sym_Build_1))
                      {
                        c_51 = ATgetArgument(b_51, 0);
                        {
                          if(((y_50 != NULL) && (y_50 != c_51)))
                            _fail(c_51);
                          else
                            y_50 = c_51;
                          t = not_null(y_50);
                        }
                      }
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
              t = pat_td_1(t, m_2);
              {
                d_51 = t;
                if(((z_50 != NULL) && (z_50 != d_51)))
                  _fail(d_51);
                else
                  z_50 = d_51;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(z_50));
            ;
            LocalPopChoice(n_14);
          }
        else
          {
            t = i_14;
            {
              ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL;
              ATerm m_51 = NULL;
              t = not_null(w_50);
              {
                ATerm n_2 (ATerm t)
                {
                  ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL;
                  i_51 = t;
                  r_50 :
                  if(match_cons(i_51, sym_App_2))
                    {
                      j_51 = ATgetArgument(i_51, 0);
                      l_51 = ATgetArgument(i_51, 1);
                      s_50 :
                      if(match_cons(j_51, sym_Build_1))
                        {
                          k_51 = ATgetArgument(j_51, 0);
                          {
                            if(((g_51 != NULL) && (g_51 != k_51)))
                              _fail(k_51);
                            else
                              g_51 = k_51;
                            {
                              if(((f_51 != NULL) && (f_51 != l_51)))
                                _fail(l_51);
                              else
                                f_51 = l_51;
                              t = not_null(g_51);
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
                t = pat_td_1(t, n_2);
                {
                  m_51 = t;
                  if(((h_51 != NULL) && (h_51 != m_51)))
                    _fail(m_51);
                  else
                    h_51 = m_51;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(h_51));
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
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      ;
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      {
        ATerm t_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            ;
            LocalPopChoice(v_14);
          }
        else
          {
            t = t_14;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm MkConstType_0 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL;
  c_52 = t;
  b_52 :
  if(match_cons(c_52, sym_DefaultVarDec_1))
    {
      d_52 = ATgetArgument(c_52, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(d_52), term_a_15);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0 (ATerm t)
{
  ATerm i_52 = NULL,j_52 = NULL;
  i_52 = t;
  h_52 :
  if(match_cons(i_52, sym_DefaultVarDec_1))
    {
      j_52 = ATgetArgument(i_52, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(j_52), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_15), term_a_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2(t, q_0, _id);
      {
        ATerm o_2 (ATerm t)
        {
          ATerm p_2 (ATerm t)
          {
            t = map1_1(t, q_0);
            return(t);
          }
          t = try_1(t, p_2);
          return(t);
        }
        t = Cons_2(t, _id, o_2);
      }
      ;
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
      {
        ATerm q_2 (ATerm t)
        {
          t = map1_1(t, q_0);
          return(t);
        }
        t = Cons_2(t, _id, q_2);
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL;
  p_53 = t;
  h_53 :
  if(match_cons(p_53, sym_Lets_2))
    {
      q_53 = ATgetArgument(p_53, 0);
      r_53 = ATgetArgument(p_53, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(q_53), not_null(r_53));
    }
  else
    {
      if(match_cons(p_53, sym_LChoices_1))
        {
          q_53 = ATgetArgument(p_53, 0);
          i_53 :
          if(((ATgetType(q_53) == AT_LIST) && !(ATisEmpty(q_53))))
            {
              l_53 = ATgetFirst((ATermList) q_53);
              m_53 = (ATerm) ATgetNext((ATermList) q_53);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(l_53), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(m_53)));
            }
          else
            {
              if(((ATgetType(q_53) == AT_LIST) && ATisEmpty(q_53)))
                {
                  t = term_o_10;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(p_53, sym_Choices_1))
            {
              q_53 = ATgetArgument(p_53, 0);
              j_53 :
              if(((ATgetType(q_53) == AT_LIST) && !(ATisEmpty(q_53))))
                {
                  l_53 = ATgetFirst((ATermList) q_53);
                  m_53 = (ATerm) ATgetNext((ATermList) q_53);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(l_53), (ATerm) ATmakeAppl(sym_Choices_1, not_null(m_53)));
                }
              else
                {
                  if(((ATgetType(q_53) == AT_LIST) && ATisEmpty(q_53)))
                    {
                      t = term_o_10;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(p_53, sym_Seqs_1))
                {
                  q_53 = ATgetArgument(p_53, 0);
                  k_53 :
                  if(((ATgetType(q_53) == AT_LIST) && !(ATisEmpty(q_53))))
                    {
                      l_53 = ATgetFirst((ATermList) q_53);
                      m_53 = (ATerm) ATgetNext((ATermList) q_53);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_53), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(m_53)));
                    }
                  else
                    {
                      if(((ATgetType(q_53) == AT_LIST) && ATisEmpty(q_53)))
                        {
                          t = term_d_15;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(p_53, sym_RDefT_4))
                    {
                      q_53 = ATgetArgument(p_53, 0);
                      r_53 = ATgetArgument(p_53, 1);
                      o_53 = ATgetArgument(p_53, 2);
                      n_53 = ATgetArgument(p_53, 3);
                      {
                        ATerm f_54 = NULL,g_54 = NULL;
                        ATerm h_54 = NULL;
                        t = not_null(r_53);
                        {
                          ATerm i_54 = NULL;
                          t = map1_1(t, MkFunType_0);
                          {
                            h_54 = t;
                            {
                              if(((f_54 != NULL) && (f_54 != h_54)))
                                _fail(h_54);
                              else
                                f_54 = h_54;
                              {
                                t = not_null(o_53);
                                {
                                  ATerm r_2 (ATerm t)
                                  {
                                    t = try_1(t, MkConstType_0);
                                    return(t);
                                  }
                                  t = map1_1(t, r_2);
                                  {
                                    i_54 = t;
                                    if(((g_54 != NULL) && (g_54 != i_54)))
                                      _fail(i_54);
                                    else
                                      g_54 = i_54;
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(q_53), not_null(f_54), not_null(g_54), not_null(n_53));
                      }
                    }
                  else
                    {
                      if(match_cons(p_53, sym_SDefT_4))
                        {
                          q_53 = ATgetArgument(p_53, 0);
                          r_53 = ATgetArgument(p_53, 1);
                          o_53 = ATgetArgument(p_53, 2);
                          n_53 = ATgetArgument(p_53, 3);
                          {
                            ATerm e_15 = t;
                            int f_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm n_54 = NULL,o_54 = NULL;
                                ATerm p_54 = NULL;
                                t = not_null(o_53);
                                {
                                  ATerm q_54 = NULL;
                                  t = map1_1(t, MkConstType_0);
                                  {
                                    p_54 = t;
                                    {
                                      if(((n_54 != NULL) && (n_54 != p_54)))
                                        _fail(p_54);
                                      else
                                        n_54 = p_54;
                                      {
                                        t = not_null(r_53);
                                        {
                                          ATerm s_2 (ATerm t)
                                          {
                                            t = try_1(t, MkFunType_0);
                                            return(t);
                                          }
                                          t = map_1(t, s_2);
                                          {
                                            q_54 = t;
                                            if(((o_54 != NULL) && (o_54 != q_54)))
                                              _fail(q_54);
                                            else
                                              o_54 = q_54;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(q_53), not_null(o_54), not_null(n_54), not_null(n_53));
                                ;
                                LocalPopChoice(f_15);
                              }
                            else
                              {
                                t = e_15;
                                {
                                  ATerm v_54 = NULL,w_54 = NULL;
                                  ATerm x_54 = NULL;
                                  t = not_null(r_53);
                                  {
                                    ATerm y_54 = NULL;
                                    t = map1_1(t, MkFunType_0);
                                    {
                                      x_54 = t;
                                      {
                                        if(((v_54 != NULL) && (v_54 != x_54)))
                                          _fail(x_54);
                                        else
                                          v_54 = x_54;
                                        {
                                          t = not_null(o_53);
                                          {
                                            ATerm t_2 (ATerm t)
                                            {
                                              t = try_1(t, MkConstType_0);
                                              return(t);
                                            }
                                            t = map_1(t, t_2);
                                            {
                                              y_54 = t;
                                              if(((w_54 != NULL) && (w_54 != y_54)))
                                                _fail(y_54);
                                              else
                                                w_54 = y_54;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(q_53), not_null(v_54), not_null(w_54), not_null(n_53));
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(p_53, sym_InfixApp_3))
                            {
                              q_53 = ATgetArgument(p_53, 0);
                              r_53 = ATgetArgument(p_53, 1);
                              o_53 = ATgetArgument(p_53, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, not_null(r_53), (ATerm) ATmakeAppl(sym_Op_2, term_p_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_53)), not_null(q_53))));
                            }
                          else
                            {
                              if(match_cons(p_53, sym_BAM_3))
                                {
                                  q_53 = ATgetArgument(p_53, 0);
                                  r_53 = ATgetArgument(p_53, 1);
                                  o_53 = ATgetArgument(p_53, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(o_53))), not_null(q_53)), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_53))));
                                }
                              else
                                {
                                  if(match_cons(p_53, sym_AM_2))
                                    {
                                      q_53 = ATgetArgument(p_53, 0);
                                      r_53 = ATgetArgument(p_53, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_53), (ATerm) ATmakeAppl(sym_Match_1, not_null(r_53)));
                                    }
                                  else
                                    {
                                      if(match_cons(p_53, sym_MA_2))
                                        {
                                          q_53 = ATgetArgument(p_53, 0);
                                          r_53 = ATgetArgument(p_53, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_53)), not_null(r_53));
                                        }
                                      else
                                        {
                                          if(match_cons(p_53, sym_BA_2))
                                            {
                                              q_53 = ATgetArgument(p_53, 0);
                                              r_53 = ATgetArgument(p_53, 1);
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_53)), not_null(q_53));
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
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL;
  k_56 = t;
  h_56 :
  if(match_cons(k_56, sym__2))
    {
      l_56 = ATgetArgument(k_56, 0);
      o_56 = ATgetArgument(k_56, 1);
      i_56 :
      if(match_cons(l_56, sym__2))
        {
          m_56 = ATgetArgument(l_56, 0);
          n_56 = ATgetArgument(l_56, 1);
          j_56 :
          if(match_cons(o_56, sym__2))
            {
              p_56 = ATgetArgument(o_56, 0);
              q_56 = ATgetArgument(o_56, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_56)), not_null(m_56)), (ATerm) ATinsert(CheckATermList(not_null(q_56)), not_null(n_56)));
            }
          else
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
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL;
  y_56 = t;
  x_56 :
  if(((ATgetType(y_56) == AT_LIST) && !(ATisEmpty(y_56))))
    {
      z_56 = ATgetFirst((ATermList) y_56);
      a_57 = (ATerm) ATgetNext((ATermList) y_56);
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_56), not_null(a_57));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm g_57 = NULL;
  g_57 = t;
  f_57 :
  if(((ATgetType(g_57) == AT_LIST) && ATisEmpty(g_57)))
    {
      t = term_g_15;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm u_108 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, u_108);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm m_57 = NULL,n_57 = NULL;
  ATerm s_57 (ATerm t)
  {
    ATerm p_57 = NULL;
    ATerm q_57 = NULL;
    t = not_null(m_57);
    {
      ATerm h_15 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = h_15;
        }
      {
        t = new_0(t);
        {
          q_57 = t;
          if(((p_57 != NULL) && (p_57 != q_57)))
            _fail(q_57);
          else
            p_57 = q_57;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(p_57)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_57)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_57))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_57))));
    return(t);
  }
  ATerm t_57 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_d_15, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_57))));
    return(t);
  }
  m_57 = t;
  l_57 :
  if(match_cons(m_57, sym_Var_1))
    {
      n_57 = ATgetArgument(m_57, 0);
      {
        ATerm i_15 = t;
        int j_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_57(t);
            ;
            LocalPopChoice(j_15);
          }
        else
          {
            t = i_15;
            t = t_57(t);
          }
      }
    }
  else
    {
      t = s_57(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm i_58 = NULL,j_58 = NULL;
  i_58 = t;
  h_58 :
  if(match_cons(i_58, sym_Var_1))
    {
      j_58 = ATgetArgument(i_58, 0);
      {
        ATerm q_15 = t;
        int r_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_58 = NULL,r_58 = NULL;
            ATerm q_58 = NULL;
            t = SSLgetAnnotations(not_null(i_58));
            {
              q_58 = t;
              if(((p_58 != NULL) && (p_58 != q_58)))
                _fail(q_58);
              else
                p_58 = q_58;
            }
            {
              t = not_null(j_58);
              {
                ATerm t_58 = NULL;
                t = p_0(t);
                {
                  r_58 = t;
                  {
                    ATerm u_58 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(r_58)), not_null(p_58));
                    {
                      u_58 = t;
                      if(((t_58 != NULL) && (t_58 != u_58)))
                        _fail(u_58);
                      else
                        t_58 = u_58;
                    }
                    t = not_null(t_58);
                  }
                }
              }
            }
            ;
            LocalPopChoice(r_15);
          }
        else
          {
            t = q_15;
            {
              ATerm s_15 = t;
              int t_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_58 = NULL,z_58 = NULL;
                  ATerm y_58 = NULL;
                  t = SSLgetAnnotations(not_null(i_58));
                  {
                    y_58 = t;
                    if(((x_58 != NULL) && (x_58 != y_58)))
                      _fail(y_58);
                    else
                      x_58 = y_58;
                  }
                  {
                    t = not_null(j_58);
                    {
                      ATerm b_59 = NULL;
                      t = p_0(t);
                      {
                        z_58 = t;
                        {
                          ATerm c_59 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(z_58)), not_null(x_58));
                          {
                            c_59 = t;
                            if(((b_59 != NULL) && (b_59 != c_59)))
                              _fail(c_59);
                            else
                              b_59 = c_59;
                          }
                          t = not_null(b_59);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(t_15);
                }
              else
                {
                  t = s_15;
                  {
                    ATerm f_59 = NULL,h_59 = NULL;
                    ATerm g_59 = NULL;
                    t = SSLgetAnnotations(not_null(i_58));
                    {
                      g_59 = t;
                      if(((f_59 != NULL) && (f_59 != g_59)))
                        _fail(g_59);
                      else
                        f_59 = g_59;
                    }
                    {
                      t = not_null(j_58);
                      {
                        ATerm q_61 = NULL;
                        t = p_0(t);
                        {
                          h_59 = t;
                          {
                            ATerm r_61 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(h_59)), not_null(f_59));
                            {
                              r_61 = t;
                              if(((q_61 != NULL) && (q_61 != r_61)))
                                _fail(r_61);
                              else
                                q_61 = r_61;
                            }
                            t = not_null(q_61);
                          }
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
  ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL;
  j_64 = t;
  h_64 :
  if(match_cons(j_64, sym_PrimT_3))
    {
      k_64 = ATgetArgument(j_64, 0);
      l_64 = ATgetArgument(j_64, 1);
      i_64 = ATgetArgument(j_64, 2);
      {
        ATerm p_64 = NULL,q_64 = NULL,r_64 = NULL;
        ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL;
        t = not_null(i_64);
        {
          ATerm u_2 (ATerm t)
          {
            ATerm u_15 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_15;
              }
            return(t);
          }
          t = fetch_1(t, u_2);
          {
            t = not_null(i_64);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm v_2 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, v_2);
                {
                  s_64 = t;
                  c_64 :
                  if(match_cons(s_64, sym__2))
                    {
                      t_64 = ATgetArgument(s_64, 0);
                      u_64 = ATgetArgument(s_64, 1);
                      d_64 :
                      if(match_cons(u_64, sym__2))
                        {
                          v_64 = ATgetArgument(u_64, 0);
                          w_64 = ATgetArgument(u_64, 1);
                          {
                            if(((p_64 != NULL) && (p_64 != t_64)))
                              _fail(t_64);
                            else
                              p_64 = t_64;
                            {
                              if(((q_64 != NULL) && (q_64 != v_64)))
                                _fail(v_64);
                              else
                                q_64 = v_64;
                              if(((r_64 != NULL) && (r_64 != w_64)))
                                _fail(w_64);
                              else
                                r_64 = w_64;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_64), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(q_64)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(k_64), not_null(l_64), not_null(r_64))));
      }
    }
  else
    {
      if(match_cons(j_64, sym_Prim_2))
        {
          k_64 = ATgetArgument(j_64, 0);
          l_64 = ATgetArgument(j_64, 1);
          {
            ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL;
            ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL;
            t = not_null(l_64);
            {
              ATerm w_2 (ATerm t)
              {
                ATerm y_15 = t;
                if((PushChoice() == 0))
                  {
                    t = Var_1(t, _id);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = y_15;
                  }
                return(t);
              }
              t = fetch_1(t, w_2);
              {
                t = not_null(l_64);
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
                      c_65 = t;
                      f_64 :
                      if(match_cons(c_65, sym__2))
                        {
                          d_65 = ATgetArgument(c_65, 0);
                          e_65 = ATgetArgument(c_65, 1);
                          g_64 :
                          if(match_cons(e_65, sym__2))
                            {
                              f_65 = ATgetArgument(e_65, 0);
                              g_65 = ATgetArgument(e_65, 1);
                              {
                                if(((z_64 != NULL) && (z_64 != d_65)))
                                  _fail(d_65);
                                else
                                  z_64 = d_65;
                                {
                                  if(((a_65 != NULL) && (a_65 != f_65)))
                                    _fail(f_65);
                                  else
                                    a_65 = f_65;
                                  if(((b_65 != NULL) && (b_65 != g_65)))
                                    _fail(g_65);
                                  else
                                    b_65 = g_65;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_64), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(a_65)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(k_64), (ATerm)ATempty, not_null(b_65))));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm i_120 (ATerm))
{
  ATerm l_65 (ATerm t)
  {
    ATerm y_2 (ATerm t)
    {
      t = i_120(t);
      t = l_65(t);
      return(t);
    }
    t = try_1(t, y_2);
    return(t);
  }
  t = l_65(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm q_65 = NULL;
  q_65 = t;
  p_65 :
  if(match_cons(q_65, sym_Wld_0))
    {
      ATerm s_65 = NULL,u_65 = NULL;
      ATerm a_16;
      a_16 = t;
      {
        ATerm t_65 = NULL;
        t = SSLgetAnnotations(not_null(q_65));
        {
          t_65 = t;
          if(((s_65 != NULL) && (s_65 != t_65)))
            _fail(t_65);
          else
            s_65 = t_65;
        }
      }
      t = a_16;
      {
        ATerm v_65 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(s_65));
        {
          v_65 = t;
          if(((u_65 != NULL) && (u_65 != v_65)))
            _fail(v_65);
          else
            u_65 = v_65;
        }
        t = not_null(u_65);
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
  ATerm c_16 = t;
  if((PushChoice() == 0))
    {
      ATerm z_2 (ATerm t)
      {
        ATerm e_16 = t;
        int h_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(h_16);
          }
        else
          {
            t = e_16;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, z_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_16;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm y_89 (ATerm), ATerm z_89 (ATerm))
{
  ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL;
  l_66 = t;
  k_66 :
  if(match_cons(l_66, sym_App_2))
    {
      m_66 = ATgetArgument(l_66, 0);
      n_66 = ATgetArgument(l_66, 1);
      {
        ATerm r_66 = NULL,t_66 = NULL;
        ATerm s_66 = NULL;
        t = SSLgetAnnotations(not_null(l_66));
        {
          s_66 = t;
          if(((r_66 != NULL) && (r_66 != s_66)))
            _fail(s_66);
          else
            r_66 = s_66;
        }
        {
          t = not_null(m_66);
          {
            ATerm v_66 = NULL;
            t = y_89(t);
            {
              t_66 = t;
              {
                t = not_null(n_66);
                {
                  ATerm x_66 = NULL;
                  t = z_89(t);
                  {
                    v_66 = t;
                    {
                      ATerm y_66 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(t_66), not_null(v_66)), not_null(r_66));
                      {
                        y_66 = t;
                        if(((x_66 != NULL) && (x_66 != y_66)))
                          _fail(y_66);
                        else
                          x_66 = y_66;
                      }
                      t = not_null(x_66);
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
ATerm Con_3 (ATerm t, ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm))
{
  ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL;
  l_67 = t;
  k_67 :
  if(match_cons(l_67, sym_Con_3))
    {
      m_67 = ATgetArgument(l_67, 0);
      n_67 = ATgetArgument(l_67, 1);
      o_67 = ATgetArgument(l_67, 2);
      {
        ATerm t_67 = NULL,v_67 = NULL;
        ATerm u_67 = NULL;
        t = SSLgetAnnotations(not_null(l_67));
        {
          u_67 = t;
          if(((t_67 != NULL) && (t_67 != u_67)))
            _fail(u_67);
          else
            t_67 = u_67;
        }
        {
          t = not_null(m_67);
          {
            ATerm x_67 = NULL;
            t = k_90(t);
            {
              v_67 = t;
              {
                t = not_null(n_67);
                {
                  ATerm z_67 = NULL;
                  t = l_90(t);
                  {
                    x_67 = t;
                    {
                      t = not_null(o_67);
                      {
                        ATerm b_68 = NULL;
                        t = m_90(t);
                        {
                          z_67 = t;
                          {
                            ATerm c_68 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(v_67), not_null(x_67), not_null(z_67)), not_null(t_67));
                            {
                              c_68 = t;
                              if(((b_68 != NULL) && (b_68 != c_68)))
                                _fail(c_68);
                              else
                                b_68 = c_68;
                            }
                            t = not_null(b_68);
                          }
                        }
                      }
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
  ATerm i_16 = t;
  if((PushChoice() == 0))
    {
      ATerm a_3 (ATerm t)
      {
        ATerm j_16 = t;
        int k_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(k_16);
          }
        else
          {
            t = j_16;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, a_3);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_16;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL;
  n_68 = t;
  l_68 :
  if(match_cons(n_68, sym_SRule_1))
    {
      o_68 = ATgetArgument(n_68, 0);
      m_68 :
      if(match_cons(o_68, sym_StratRule_3))
        {
          p_68 = ATgetArgument(o_68, 0);
          q_68 = ATgetArgument(o_68, 1);
          r_68 = ATgetArgument(o_68, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(q_68)), (ATerm) ATmakeAppl(sym_Where_1, not_null(r_68))), not_null(p_68)));
        }
      else
        {
          if(match_cons(o_68, sym_Rule_3))
            {
              p_68 = ATgetArgument(o_68, 0);
              q_68 = ATgetArgument(o_68, 1);
              r_68 = ATgetArgument(o_68, 2);
              {
                t = not_null(p_68);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(q_68);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(q_68))), (ATerm) ATmakeAppl(sym_Where_1, not_null(r_68))), (ATerm) ATmakeAppl(sym_Match_1, not_null(p_68))));
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
ATerm Scope_2 (ATerm t, ATerm e_93 (ATerm), ATerm f_93 (ATerm))
{
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL;
  p_69 = t;
  j_69 :
  if(match_cons(p_69, sym_Scope_2))
    {
      q_69 = ATgetArgument(p_69, 0);
      r_69 = ATgetArgument(p_69, 1);
      {
        ATerm v_69 = NULL,x_69 = NULL;
        ATerm w_69 = NULL;
        t = SSLgetAnnotations(not_null(p_69));
        {
          w_69 = t;
          if(((v_69 != NULL) && (v_69 != w_69)))
            _fail(w_69);
          else
            v_69 = w_69;
        }
        {
          t = not_null(q_69);
          {
            ATerm z_69 = NULL;
            t = e_93(t);
            {
              x_69 = t;
              {
                t = not_null(r_69);
                {
                  ATerm b_70 = NULL;
                  t = f_93(t);
                  {
                    z_69 = t;
                    {
                      ATerm c_70 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(x_69), not_null(z_69)), not_null(v_69));
                      {
                        c_70 = t;
                        if(((b_70 != NULL) && (b_70 != c_70)))
                          _fail(c_70);
                        else
                          b_70 = c_70;
                      }
                      t = not_null(b_70);
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
ATerm oncetd_1 (ATerm t, ATerm c_105 (ATerm))
{
  ATerm i_70 (ATerm t)
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_105(t);
        ;
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
        t = _one(t, i_70);
      }
    return(t);
  }
  t = i_70(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL;
  f_71 = t;
  d_71 :
  if(match_cons(f_71, sym_SRule_1))
    {
      g_71 = ATgetArgument(f_71, 0);
      e_71 :
      if(match_cons(g_71, sym_Rule_3))
        {
          h_71 = ATgetArgument(g_71, 0);
          i_71 = ATgetArgument(g_71, 1);
          j_71 = ATgetArgument(g_71, 2);
          {
            ATerm n_71 = NULL,o_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL;
            ATerm w_71 = NULL;
            ATerm c_72 = NULL;
            t = new_0(t);
            {
              w_71 = t;
              {
                if(((t_71 != NULL) && (t_71 != w_71)))
                  _fail(w_71);
                else
                  t_71 = w_71;
                {
                  t = not_null(h_71);
                  {
                    ATerm s_72 = NULL;
                    ATerm b_3 (ATerm t)
                    {
                      ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL;
                      x_71 = t;
                      m_70 :
                      if(match_cons(x_71, sym_Con_3))
                        {
                          y_71 = ATgetArgument(x_71, 0);
                          a_72 = ATgetArgument(x_71, 1);
                          b_72 = ATgetArgument(x_71, 2);
                          p_70 :
                          if(match_cons(y_71, sym_Var_1))
                            {
                              z_71 = ATgetArgument(y_71, 0);
                              {
                                if(((s_71 != NULL) && (s_71 != z_71)))
                                  _fail(z_71);
                                else
                                  s_71 = z_71;
                                {
                                  if(((q_71 != NULL) && (q_71 != a_72)))
                                    _fail(a_72);
                                  else
                                    q_71 = a_72;
                                  {
                                    if(((n_71 != NULL) && (n_71 != b_72)))
                                      _fail(b_72);
                                    else
                                      n_71 = b_72;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_71));
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
                    t = oncetd_1(t, b_3);
                    {
                      c_72 = t;
                      {
                        if(((u_71 != NULL) && (u_71 != c_72)))
                          _fail(c_72);
                        else
                          u_71 = c_72;
                        {
                          t = not_null(i_71);
                          {
                            ATerm c_3 (ATerm t)
                            {
                              ATerm d_72 = NULL,e_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL;
                              d_72 = t;
                              s_70 :
                              if(match_cons(d_72, sym_Con_3))
                                {
                                  e_72 = ATgetArgument(d_72, 0);
                                  m_72 = ATgetArgument(d_72, 1);
                                  n_72 = ATgetArgument(d_72, 2);
                                  t_70 :
                                  if(match_cons(e_72, sym_Var_1))
                                    {
                                      l_72 = ATgetArgument(e_72, 0);
                                      u_70 :
                                      if(match_cons(n_72, sym_CallT_3))
                                        {
                                          p_72 = ATgetArgument(n_72, 0);
                                          q_72 = ATgetArgument(n_72, 1);
                                          r_72 = ATgetArgument(n_72, 2);
                                          v_70 :
                                          if(((ATgetType(q_72) == AT_LIST) && ATisEmpty(q_72)))
                                            {
                                              b_71 :
                                              if(((ATgetType(r_72) == AT_LIST) && ATisEmpty(r_72)))
                                                {
                                                  {
                                                    if(((s_71 != NULL) && (s_71 != l_72)))
                                                      _fail(l_72);
                                                    else
                                                      s_71 = l_72;
                                                    {
                                                      if(((r_71 != NULL) && (r_71 != m_72)))
                                                        _fail(m_72);
                                                      else
                                                        r_71 = m_72;
                                                      {
                                                        if(((o_71 != NULL) && (o_71 != p_72)))
                                                          _fail(p_72);
                                                        else
                                                          o_71 = p_72;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_71));
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
                            t = oncetd_1(t, c_3);
                            {
                              s_72 = t;
                              if(((v_71 != NULL) && (v_71 != s_72)))
                                _fail(s_72);
                              else
                                v_71 = s_72;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_71)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_71), not_null(v_71), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_71), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(o_71), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(q_71), not_null(r_71), term_d_15))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(s_71)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_71)))))));
          }
        }
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
  ATerm d_3 (ATerm t)
  {
    ATerm n_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        ;
        LocalPopChoice(o_16);
      }
    else
      {
        t = n_16;
        {
          ATerm p_16 = t;
          int q_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              ;
              LocalPopChoice(q_16);
            }
          else
            {
              t = p_16;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, d_3);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm y_103 (ATerm))
{
  t = y_103(t);
  {
    ATerm e_3 (ATerm t)
    {
      t = topdown_1(t, y_103);
      return(t);
    }
    t = _all(t, e_3);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm g_3 (ATerm t)
      {
        ATerm r_16 = t;
        int s_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            ;
            LocalPopChoice(s_16);
          }
        else
          {
            t = r_16;
            {
              ATerm t_16 = t;
              int z_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(z_16);
                }
              else
                {
                  t = t_16;
                  {
                    ATerm a_17 = t;
                    int b_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        ;
                        LocalPopChoice(b_17);
                      }
                    else
                      {
                        t = a_17;
                        {
                          ATerm c_17 = t;
                          int g_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              ;
                              LocalPopChoice(g_17);
                            }
                          else
                            {
                              t = c_17;
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
      t = repeat_1(t, g_3);
    }
    return(t);
  }
  t = topdown_1(t, f_3);
  return(t);
}
ATerm _0 (ATerm t)
{
  ATerm e_73 = NULL;
  e_73 = t;
  d_73 :
  if(match_cons(e_73, sym__0))
    {
      ATerm g_73 = NULL,i_73 = NULL;
      ATerm i_17;
      i_17 = t;
      {
        ATerm h_73 = NULL;
        t = SSLgetAnnotations(not_null(e_73));
        {
          h_73 = t;
          if(((g_73 != NULL) && (g_73 != h_73)))
            _fail(h_73);
          else
            g_73 = h_73;
        }
      }
      t = i_17;
      {
        ATerm j_73 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(g_73));
        {
          j_73 = t;
          if(((i_73 != NULL) && (i_73 != j_73)))
            _fail(j_73);
          else
            i_73 = j_73;
        }
        t = not_null(i_73);
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
  ATerm v_73 = NULL;
  ATerm x_73 = NULL,y_73 = NULL,g_74 = NULL,i_74 = NULL;
  v_73 = t;
  {
    ATerm k_17;
    k_17 = t;
    {
      ATerm z_73 = NULL;
      ATerm b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL;
      t = not_null(v_73);
      {
        z_73 = t;
        {
          t = SSL_explode_term(not_null(z_73));
          {
            b_74 = t;
            q_73 :
            if(match_cons(b_74, sym__2))
              {
                c_74 = ATgetArgument(b_74, 0);
                d_74 = ATgetArgument(b_74, 1);
                r_73 :
                if(match_string(c_74, ""))
                  {
                    s_73 :
                    if(((ATgetType(d_74) == AT_LIST) && !(ATisEmpty(d_74))))
                      {
                        e_74 = ATgetFirst((ATermList) d_74);
                        f_74 = (ATerm) ATgetNext((ATermList) d_74);
                        {
                          if(((x_73 != NULL) && (x_73 != e_74)))
                            _fail(e_74);
                          else
                            x_73 = e_74;
                          if(((y_73 != NULL) && (y_73 != f_74)))
                            _fail(f_74);
                          else
                            y_73 = f_74;
                        }
                      }
                    else
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
    t = k_17;
    {
      ATerm n_17;
      n_17 = t;
      {
        ATerm h_74 = NULL;
        t = term_p_11;
        {
          h_74 = t;
          if(((g_74 != NULL) && (g_74 != h_74)))
            _fail(h_74);
          else
            g_74 = h_74;
        }
      }
      t = n_17;
      {
        t = SSL_mkterm(not_null(g_74), not_null(y_73));
        {
          i_74 = t;
          t = not_null(i_74);
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
ATerm tuple_unzip_1 (ATerm t, ATerm a_108 (ATerm))
{
  ATerm d_75 = NULL,f_75 = NULL,h_75 = NULL;
  ATerm n_75 (ATerm t)
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_74 = NULL,b_75 = NULL;
        ATerm q_17;
        q_17 = t;
        {
          ATerm a_75 = NULL;
          t = map_1(t, Thd_0);
          {
            t = a_108(t);
            {
              a_75 = t;
              if(((u_74 != NULL) && (u_74 != a_75)))
                _fail(a_75);
              else
                u_74 = a_75;
            }
          }
        }
        t = q_17;
        {
          ATerm c_75 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = n_75(t);
            {
              c_75 = t;
              if(((b_75 != NULL) && (b_75 != c_75)))
                _fail(c_75);
              else
                b_75 = c_75;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(b_75)), not_null(u_74));
        }
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = o_17;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = n_75(t);
  {
    ATerm r_17;
    r_17 = t;
    {
      ATerm e_75 = NULL;
      e_75 = t;
      if(((d_75 != NULL) && (d_75 != e_75)))
        _fail(e_75);
      else
        d_75 = e_75;
    }
    t = r_17;
    {
      ATerm s_17;
      s_17 = t;
      {
        ATerm g_75 = NULL;
        t = term_p_11;
        {
          g_75 = t;
          if(((f_75 != NULL) && (f_75 != g_75)))
            _fail(g_75);
          else
            f_75 = g_75;
        }
      }
      t = s_17;
      {
        t = SSL_mkterm(not_null(f_75), not_null(d_75));
        {
          h_75 = t;
          t = not_null(h_75);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm b_76 = NULL;
  b_76 = t;
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL;
        ATerm g_76 = NULL;
        ATerm r_76 = NULL;
        t = new_0(t);
        {
          g_76 = t;
          {
            if(((d_76 != NULL) && (d_76 != g_76)))
              _fail(g_76);
            else
              d_76 = g_76;
            {
              ATerm s_76 = NULL;
              t = new_0(t);
              {
                r_76 = t;
                {
                  if(((e_76 != NULL) && (e_76 != r_76)))
                    _fail(r_76);
                  else
                    e_76 = r_76;
                  {
                    t = new_0(t);
                    {
                      s_76 = t;
                      if(((f_76 != NULL) && (f_76 != s_76)))
                        _fail(s_76);
                      else
                        f_76 = s_76;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_76)), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_p_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_76)), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_76)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_76))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(d_76), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_15), term_a_15)), not_null(e_76), (ATerm)ATmakeAppl(sym_Var_1, not_null(e_76)), not_null(f_76), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_76)));
        ;
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        {
          ATerm u_76 = NULL,v_76 = NULL,w_76 = NULL;
          ATerm x_76 = NULL;
          ATerm b_77 = NULL;
          t = new_0(t);
          {
            x_76 = t;
            {
              if(((u_76 != NULL) && (u_76 != x_76)))
                _fail(x_76);
              else
                u_76 = x_76;
              {
                ATerm c_77 = NULL;
                t = new_0(t);
                {
                  b_77 = t;
                  {
                    if(((v_76 != NULL) && (v_76 != b_77)))
                      _fail(b_77);
                    else
                      v_76 = b_77;
                    {
                      t = new_0(t);
                      {
                        c_77 = t;
                        if(((w_76 != NULL) && (w_76 != c_77)))
                          _fail(c_77);
                        else
                          w_76 = c_77;
                      }
                    }
                  }
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_76)), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_p_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_76)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_76)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_76))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(u_76), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_15), term_a_15)), not_null(v_76), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_76)), not_null(w_76), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_76)));
        }
      }
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm s_78 = NULL,t_78 = NULL,u_78 = NULL;
  s_78 = t;
  r_78 :
  if(match_cons(s_78, sym__2))
    {
      t_78 = ATgetArgument(s_78, 0);
      u_78 = ATgetArgument(s_78, 1);
      {
        ATerm v_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(t_78), not_null(u_78));
            ;
            LocalPopChoice(w_17);
          }
        else
          {
            t = v_17;
            t = SSL_subtr(not_null(t_78), not_null(u_78));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm c_115 (ATerm))
{
  ATerm h_3 (ATerm t)
  {
    ATerm e_80 = NULL,f_80 = NULL,g_80 = NULL;
    e_80 = t;
    z_78 :
    if(match_cons(e_80, sym__2))
      {
        f_80 = ATgetArgument(e_80, 0);
        g_80 = ATgetArgument(e_80, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(f_80), not_null(g_80), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm j_80 = NULL,k_80 = NULL,l_80 = NULL,m_80 = NULL;
    j_80 = t;
    b_79 :
    if(match_cons(j_80, sym__3))
      {
        k_80 = ATgetArgument(j_80, 0);
        l_80 = ATgetArgument(j_80, 1);
        m_80 = ATgetArgument(j_80, 2);
        c_79 :
        if(match_int(k_80, 0))
          {
            t = not_null(m_80);
          }
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
    ATerm j_84 = NULL,k_84 = NULL,l_84 = NULL,m_84 = NULL;
    j_84 = t;
    d_80 :
    if(match_cons(j_84, sym__3))
      {
        k_84 = ATgetArgument(j_84, 0);
        l_84 = ATgetArgument(j_84, 1);
        m_84 = ATgetArgument(j_84, 2);
        {
          ATerm q_84 = NULL,s_84 = NULL;
          ATerm x_17;
          x_17 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_84), term_i_8);
            t = geq_0(t);
          }
          t = x_17;
          {
            ATerm c_18;
            c_18 = t;
            {
              ATerm r_84 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_84), term_i_8);
              {
                t = subt_0(t);
                {
                  r_84 = t;
                  if(((q_84 != NULL) && (q_84 != r_84)))
                    _fail(r_84);
                  else
                    q_84 = r_84;
                }
              }
            }
            t = c_18;
            {
              ATerm t_84 = NULL;
              t = not_null(l_84);
              {
                t = c_115(t);
                {
                  t_84 = t;
                  if(((s_84 != NULL) && (s_84 != t_84)))
                    _fail(t_84);
                  else
                    s_84 = t_84;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(q_84), not_null(l_84), (ATerm) ATinsert(CheckATermList(not_null(m_84)), not_null(s_84)));
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
  t = for_3(t, h_3, i_3, j_3);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm e_85 = NULL,f_85 = NULL,g_85 = NULL;
  e_85 = t;
  d_85 :
  if(match_cons(e_85, sym__2))
    {
      f_85 = ATgetArgument(e_85, 0);
      g_85 = ATgetArgument(e_85, 1);
      {
        ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL;
        ATerm m_85 = NULL;
        ATerm n_85 = NULL;
        t = new_0(t);
        {
          m_85 = t;
          {
            if(((j_85 != NULL) && (j_85 != m_85)))
              _fail(m_85);
            else
              j_85 = m_85;
            {
              ATerm o_85 = NULL;
              t = new_0(t);
              {
                n_85 = t;
                {
                  if(((k_85 != NULL) && (k_85 != n_85)))
                    _fail(n_85);
                  else
                    k_85 = n_85;
                  {
                    t = new_0(t);
                    {
                      o_85 = t;
                      if(((l_85 != NULL) && (l_85 != o_85)))
                        _fail(o_85);
                      else
                        l_85 = o_85;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(j_85)), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_p_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_85))), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_85)))), (ATerm) ATmakeAppl(sym_Op_2, term_p_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_85))), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_85))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(j_85), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_15), term_a_15)), not_null(k_85), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_85)), not_null(l_85), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_85)));
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
  ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL;
  w_85 = t;
  u_85 :
  if(match_cons(w_85, sym__2))
    {
      x_85 = ATgetArgument(w_85, 0);
      y_85 = ATgetArgument(w_85, 1);
      v_85 :
      if(((ATgetType(y_85) == AT_LIST) && ATisEmpty(y_85)))
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
ATerm zipr_1 (ATerm t, ATerm s_108 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, s_108);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm c_86 = NULL,d_86 = NULL,e_86 = NULL;
  c_86 = t;
  b_86 :
  if(((ATgetType(c_86) == AT_LIST) && !(ATisEmpty(c_86))))
    {
      d_86 = ATgetFirst((ATermList) c_86);
      e_86 = (ATerm) ATgetNext((ATermList) c_86);
      t = not_null(e_86);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm k_86 = NULL,l_86 = NULL,m_86 = NULL;
  k_86 = t;
  i_86 :
  if(((ATgetType(k_86) == AT_LIST) && !(ATisEmpty(k_86))))
    {
      l_86 = ATgetFirst((ATermList) k_86);
      m_86 = (ATerm) ATgetNext((ATermList) k_86);
      j_86 :
      if(((ATgetType(m_86) == AT_LIST) && ATisEmpty(m_86)))
        {
          t = not_null(l_86);
        }
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
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(e_18);
    }
  else
    {
      t = d_18;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm t_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL;
  ATerm p_90 (ATerm t)
  {
    ATerm c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL,j_88 = NULL,k_88 = NULL,n_88 = NULL,o_88 = NULL,d_89 = NULL;
    ATerm i_18;
    i_18 = t;
    {
      ATerm p_88 = NULL,s_88 = NULL,t_88 = NULL,u_88 = NULL;
      ATerm r_88 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_87), term_i_8);
      {
        t = add_0(t);
        {
          r_88 = t;
          if(((p_88 != NULL) && (p_88 != r_88)))
            _fail(r_88);
          else
            p_88 = r_88;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_88), term_k_18);
        {
          t = copy_1(t, new_0);
          {
            s_88 = t;
            h_87 :
            if(((ATgetType(s_88) == AT_LIST) && !(ATisEmpty(s_88))))
              {
                t_88 = ATgetFirst((ATermList) s_88);
                u_88 = (ATerm) ATgetNext((ATermList) s_88);
                {
                  ATerm v_88 = NULL;
                  if(((d_88 != NULL) && (d_88 != t_88)))
                    _fail(t_88);
                  else
                    d_88 = t_88;
                  {
                    if(((e_88 != NULL) && (e_88 != u_88)))
                      _fail(u_88);
                    else
                      e_88 = u_88;
                    {
                      t = not_null(e_88);
                      {
                        ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL;
                        t = last_0(t);
                        {
                          v_88 = t;
                          {
                            if(((c_88 != NULL) && (c_88 != v_88)))
                              _fail(v_88);
                            else
                              c_88 = v_88;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_88)), not_null(d_88)), not_null(e_88));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    w_88 = t;
                                    g_87 :
                                    if(match_cons(w_88, sym__6))
                                      {
                                        x_88 = ATgetArgument(w_88, 0);
                                        y_88 = ATgetArgument(w_88, 1);
                                        z_88 = ATgetArgument(w_88, 2);
                                        a_89 = ATgetArgument(w_88, 3);
                                        b_89 = ATgetArgument(w_88, 4);
                                        c_89 = ATgetArgument(w_88, 5);
                                        {
                                          if(((f_88 != NULL) && (f_88 != x_88)))
                                            _fail(x_88);
                                          else
                                            f_88 = x_88;
                                          {
                                            if(((g_88 != NULL) && (g_88 != y_88)))
                                              _fail(y_88);
                                            else
                                              g_88 = y_88;
                                            {
                                              if(((j_88 != NULL) && (j_88 != z_88)))
                                                _fail(z_88);
                                              else
                                                j_88 = z_88;
                                              {
                                                if(((k_88 != NULL) && (k_88 != a_89)))
                                                  _fail(a_89);
                                                else
                                                  k_88 = a_89;
                                                {
                                                  if(((n_88 != NULL) && (n_88 != b_89)))
                                                    _fail(b_89);
                                                  else
                                                    n_88 = b_89;
                                                  if(((o_88 != NULL) && (o_88 != c_89)))
                                                    _fail(c_89);
                                                  else
                                                    o_88 = c_89;
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
    t = i_18;
    {
      ATerm e_89 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(n_88)), not_null(j_88)), not_null(e_88));
      {
        t = concat_0(t);
        {
          e_89 = t;
          if(((d_89 != NULL) && (d_89 != e_89)))
            _fail(e_89);
          else
            d_89 = e_89;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, not_null(u_87), term_n_18), not_null(g_88), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(d_89)), not_null(d_88)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_88))), (ATerm) ATmakeAppl(sym_Op_2, not_null(u_87), not_null(k_88)))), (ATerm)ATmakeAppl(sym_Op_2, term_p_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_88))), (ATerm) ATmakeAppl(sym_Op_2, not_null(u_87), not_null(o_88)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(f_88))))));
    }
    return(t);
  }
  ATerm q_90 (ATerm t)
  {
    ATerm h_89 = NULL;
    ATerm j_89 = NULL;
    t = new_0(t);
    {
      j_89 = t;
      if(((h_89 != NULL) && (h_89 != j_89)))
        _fail(j_89);
      else
        h_89 = j_89;
    }
    t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, not_null(u_87), term_n_18), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_89)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_89))), (ATerm) ATmakeAppl(sym_Op_2, not_null(u_87), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_p_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_89))), (ATerm) ATmakeAppl(sym_Op_2, not_null(u_87), (ATerm) ATempty))), term_d_15))));
    return(t);
  }
  ATerm r_90 (ATerm t)
  {
    ATerm n_89 = NULL,o_89 = NULL,p_89 = NULL,s_89 = NULL,t_89 = NULL,w_89 = NULL,x_89 = NULL,n_90 = NULL;
    ATerm o_18;
    o_18 = t;
    {
      ATerm a_90 = NULL;
      ATerm d_90 = NULL,e_90 = NULL,f_90 = NULL,g_90 = NULL,h_90 = NULL,i_90 = NULL,j_90 = NULL;
      t = new_0(t);
      {
        a_90 = t;
        {
          if(((n_89 != NULL) && (n_89 != a_90)))
            _fail(a_90);
          else
            n_89 = a_90;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_87), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_89)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  d_90 = t;
                  m_87 :
                  if(match_cons(d_90, sym__6))
                    {
                      e_90 = ATgetArgument(d_90, 0);
                      f_90 = ATgetArgument(d_90, 1);
                      g_90 = ATgetArgument(d_90, 2);
                      h_90 = ATgetArgument(d_90, 3);
                      i_90 = ATgetArgument(d_90, 4);
                      j_90 = ATgetArgument(d_90, 5);
                      {
                        if(((o_89 != NULL) && (o_89 != e_90)))
                          _fail(e_90);
                        else
                          o_89 = e_90;
                        {
                          if(((p_89 != NULL) && (p_89 != f_90)))
                            _fail(f_90);
                          else
                            p_89 = f_90;
                          {
                            if(((s_89 != NULL) && (s_89 != g_90)))
                              _fail(g_90);
                            else
                              s_89 = g_90;
                            {
                              if(((t_89 != NULL) && (t_89 != h_90)))
                                _fail(h_90);
                              else
                                t_89 = h_90;
                              {
                                if(((w_89 != NULL) && (w_89 != i_90)))
                                  _fail(i_90);
                                else
                                  w_89 = i_90;
                                if(((x_89 != NULL) && (x_89 != j_90)))
                                  _fail(j_90);
                                else
                                  x_89 = j_90;
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
    t = o_18;
    {
      ATerm o_90 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_89), not_null(w_89));
      {
        t = conc_0(t);
        {
          o_90 = t;
          if(((n_90 != NULL) && (n_90 != o_90)))
            _fail(o_90);
          else
            n_90 = o_90;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, not_null(u_87), term_p_18), not_null(p_89), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(n_90)), not_null(n_89)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_89))), (ATerm) ATmakeAppl(sym_Op_2, not_null(u_87), not_null(t_89)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(u_87), not_null(x_89)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(o_89))))));
    }
    return(t);
  }
  t_87 = t;
  o_87 :
  if(match_cons(t_87, sym__3))
    {
      u_87 = ATgetArgument(t_87, 0);
      v_87 = ATgetArgument(t_87, 1);
      w_87 = ATgetArgument(t_87, 2);
      p_87 :
      if(match_string(v_87, "T"))
        {
          q_87 :
          if(match_cons(w_87, sym__2))
            {
              x_87 = ATgetArgument(w_87, 0);
              y_87 = ATgetArgument(w_87, 1);
              r_87 :
              if(match_int(x_87, 0))
                {
                  ATerm q_18 = t;
                  int r_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = p_90(t);
                      ;
                      LocalPopChoice(r_18);
                    }
                  else
                    {
                      t = q_18;
                      t = q_90(t);
                    }
                }
              else
                {
                  t = p_90(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_string(v_87, "D"))
            {
              s_87 :
              if(match_cons(w_87, sym__2))
                {
                  x_87 = ATgetArgument(w_87, 0);
                  y_87 = ATgetArgument(w_87, 1);
                  t = r_90(t);
                }
              else
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
  ATerm g_91 = NULL,h_91 = NULL,i_91 = NULL,j_91 = NULL,k_91 = NULL,l_91 = NULL,m_91 = NULL;
  g_91 = t;
  d_91 :
  if(match_cons(g_91, sym__2))
    {
      h_91 = ATgetArgument(g_91, 0);
      m_91 = ATgetArgument(g_91, 1);
      e_91 :
      if(match_cons(h_91, sym__2))
        {
          i_91 = ATgetArgument(h_91, 0);
          l_91 = ATgetArgument(h_91, 1);
          f_91 :
          if(match_cons(i_91, sym_Mod_2))
            {
              j_91 = ATgetArgument(i_91, 0);
              k_91 = ATgetArgument(i_91, 1);
              {
                ATerm r_91 = NULL;
                ATerm s_91 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(j_91), not_null(k_91), not_null(l_91));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      s_91 = t;
                      if(((r_91 != NULL) && (r_91 != s_91)))
                        _fail(s_91);
                      else
                        r_91 = s_91;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_91), not_null(m_91));
              }
            }
          else
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
  ATerm s_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      ;
      LocalPopChoice(z_18);
    }
  else
    {
      t = s_18;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm y_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL,c_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL;
  y_91 = t;
  w_91 :
  if(match_cons(y_91, sym__5))
    {
      z_91 = ATgetArgument(y_91, 0);
      c_92 = ATgetArgument(y_91, 1);
      d_92 = ATgetArgument(y_91, 2);
      e_92 = ATgetArgument(y_91, 3);
      f_92 = ATgetArgument(y_91, 4);
      x_91 :
      if(((ATgetType(z_91) == AT_LIST) && !(ATisEmpty(z_91))))
        {
          a_92 = ATgetFirst((ATermList) z_91);
          b_92 = (ATerm) ATgetNext((ATermList) z_91);
          t = (ATerm) ATmakeAppl(sym__5, not_null(b_92), not_null(c_92), not_null(d_92), not_null(e_92), (ATerm) ATinsert(CheckATermList(not_null(f_92)), not_null(a_92)));
        }
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
ATerm diff_1 (ATerm t, ATerm w_111 (ATerm))
{
  ATerm p_92 = NULL,q_92 = NULL,r_92 = NULL;
  p_92 = t;
  o_92 :
  if(match_cons(p_92, sym__2))
    {
      q_92 = ATgetArgument(p_92, 0);
      r_92 = ATgetArgument(p_92, 1);
      {
        t = not_null(q_92);
        {
          ATerm x_92 (ATerm t)
          {
            ATerm a_19 = t;
            int b_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(b_19);
              }
            else
              {
                t = a_19;
                {
                  ATerm c_19 = t;
                  int d_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_3 (ATerm t)
                      {
                        t = not_null(r_92);
                        return(t);
                      }
                      t = HdMember_p__2(t, w_111, k_3);
                      t = x_92(t);
                      ;
                      LocalPopChoice(d_19);
                    }
                  else
                    {
                      t = c_19;
                      t = Cons_2(t, _id, x_92);
                    }
                }
              }
            return(t);
          }
          t = x_92(t);
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
  ATerm b_93 = NULL,c_93 = NULL,d_93 = NULL,g_93 = NULL,h_93 = NULL;
  b_93 = t;
  z_92 :
  if(match_cons(b_93, sym__2))
    {
      c_93 = ATgetArgument(b_93, 0);
      d_93 = ATgetArgument(b_93, 1);
      a_93 :
      if(((ATgetType(d_93) == AT_LIST) && !(ATisEmpty(d_93))))
        {
          g_93 = ATgetFirst((ATermList) d_93);
          h_93 = (ATerm) ATgetNext((ATermList) d_93);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_93)), not_null(g_93)), not_null(h_93));
        }
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
  ATerm o_93 = NULL,p_93 = NULL,q_93 = NULL;
  o_93 = t;
  n_93 :
  if(match_cons(o_93, sym__2))
    {
      p_93 = ATgetArgument(o_93, 0);
      q_93 = ATgetArgument(o_93, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_93)), not_null(p_93));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL;
  d_94 = t;
  x_93 :
  if(match_cons(d_94, sym__2))
    {
      e_94 = ATgetArgument(d_94, 0);
      h_94 = ATgetArgument(d_94, 1);
      y_93 :
      if(((ATgetType(e_94) == AT_LIST) && !(ATisEmpty(e_94))))
        {
          f_94 = ATgetFirst((ATermList) e_94);
          g_94 = (ATerm) ATgetNext((ATermList) e_94);
          z_93 :
          if(((ATgetType(h_94) == AT_LIST) && !(ATisEmpty(h_94))))
            {
              i_94 = ATgetFirst((ATermList) h_94);
              j_94 = (ATerm) ATgetNext((ATermList) h_94);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(f_94), not_null(i_94)), (ATerm) ATmakeAppl(sym__2, not_null(g_94), not_null(j_94)));
            }
          else
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
  ATerm t_94 = NULL,u_94 = NULL,v_94 = NULL;
  t_94 = t;
  q_94 :
  if(match_cons(t_94, sym__2))
    {
      u_94 = ATgetArgument(t_94, 0);
      v_94 = ATgetArgument(t_94, 1);
      r_94 :
      if(((ATgetType(u_94) == AT_LIST) && ATisEmpty(u_94)))
        {
          s_94 :
          if(((ATgetType(v_94) == AT_LIST) && ATisEmpty(v_94)))
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
ATerm genzip_4 (ATerm t, ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm n_108 (ATerm))
{
  ATerm x_94 (ATerm t)
  {
    ATerm e_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_108(t);
        ;
        LocalPopChoice(l_19);
      }
    else
      {
        t = e_19;
        {
          t = l_108(t);
          {
            t = _2(t, n_108, x_94);
            t = m_108(t);
          }
        }
      }
    return(t);
  }
  t = x_94(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm p_108 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, p_108);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL,v_95 = NULL;
  r_95 = t;
  i_95 :
  if(((ATgetType(r_95) == AT_LIST) && !(ATisEmpty(r_95))))
    {
      s_95 = ATgetFirst((ATermList) r_95);
      v_95 = (ATerm) ATgetNext((ATermList) r_95);
      q_95 :
      if(match_cons(s_95, sym__2))
        {
          t_95 = ATgetArgument(s_95, 0);
          u_95 = ATgetArgument(s_95, 1);
          {
            ATerm z_95 = NULL,a_96 = NULL,g_96 = NULL,m_96 = NULL;
            ATerm m_19;
            m_19 = t;
            {
              ATerm b_96 = NULL;
              ATerm d_96 = NULL,e_96 = NULL,f_96 = NULL;
              t = not_null(u_95);
              {
                b_96 = t;
                {
                  t = SSL_explode_term(not_null(b_96));
                  {
                    d_96 = t;
                    b_95 :
                    if(match_cons(d_96, sym__2))
                      {
                        e_96 = ATgetArgument(d_96, 0);
                        f_96 = ATgetArgument(d_96, 1);
                        {
                          if(((z_95 != NULL) && (z_95 != e_96)))
                            _fail(e_96);
                          else
                            z_95 = e_96;
                          if(((a_96 != NULL) && (a_96 != f_96)))
                            _fail(f_96);
                          else
                            a_96 = f_96;
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
            t = m_19;
            {
              ATerm n_19;
              n_19 = t;
              {
                ATerm h_96 = NULL;
                ATerm j_96 = NULL,k_96 = NULL,l_96 = NULL;
                t = not_null(t_95);
                {
                  h_96 = t;
                  {
                    t = SSL_explode_term(not_null(h_96));
                    {
                      j_96 = t;
                      e_95 :
                      if(match_cons(j_96, sym__2))
                        {
                          k_96 = ATgetArgument(j_96, 0);
                          l_96 = ATgetArgument(j_96, 1);
                          {
                            if(((z_95 != NULL) && (z_95 != k_96)))
                              _fail(k_96);
                            else
                              z_95 = k_96;
                            if(((g_96 != NULL) && (g_96 != l_96)))
                              _fail(l_96);
                            else
                              g_96 = l_96;
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
              t = n_19;
              {
                ATerm n_96 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_96), not_null(a_96));
                {
                  t = zip_1(t, _id);
                  {
                    n_96 = t;
                    if(((m_96 != NULL) && (m_96 != n_96)))
                      _fail(n_96);
                    else
                      m_96 = n_96;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_96), not_null(v_95));
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
  ATerm x_96 = NULL,y_96 = NULL,z_96 = NULL,a_97 = NULL,b_97 = NULL;
  x_96 = t;
  v_96 :
  if(((ATgetType(x_96) == AT_LIST) && !(ATisEmpty(x_96))))
    {
      y_96 = ATgetFirst((ATermList) x_96);
      b_97 = (ATerm) ATgetNext((ATermList) x_96);
      w_96 :
      if(match_cons(y_96, sym__2))
        {
          z_96 = ATgetArgument(y_96, 0);
          a_97 = ATgetArgument(y_96, 1);
          {
            ATerm d_97 = NULL;
            if(((z_96 != NULL) && (z_96 != a_97)))
              _fail(a_97);
            else
              z_96 = a_97;
            {
              if(((d_97 != NULL) && (d_97 != b_97)))
                _fail(b_97);
              else
                d_97 = b_97;
              t = not_null(d_97);
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
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_3 (ATerm t)
      {
        ATerm g_97 = NULL;
        g_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(g_97));
        return(t);
      }
      ATerm m_3 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm n_3 (ATerm t)
      {
        ATerm q_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_3 (ATerm t)
            {
              ATerm w_19 = t;
              int x_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(x_19);
                }
              else
                {
                  t = w_19;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, o_3);
            ;
            LocalPopChoice(v_19);
          }
        else
          {
            t = q_19;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, l_3, m_3, n_3);
      ;
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm w_132 (ATerm), ATerm x_132 (ATerm), ATerm y_132 (ATerm))
{
  ATerm t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL,z_97 = NULL,a_98 = NULL;
  t_97 = t;
  r_97 :
  if(match_cons(t_97, sym__5))
    {
      u_97 = ATgetArgument(t_97, 0);
      x_97 = ATgetArgument(t_97, 1);
      y_97 = ATgetArgument(t_97, 2);
      z_97 = ATgetArgument(t_97, 3);
      a_98 = ATgetArgument(t_97, 4);
      s_97 :
      if(((ATgetType(u_97) == AT_LIST) && !(ATisEmpty(u_97))))
        {
          v_97 = ATgetFirst((ATermList) u_97);
          w_97 = (ATerm) ATgetNext((ATermList) u_97);
          {
            ATerm h_98 = NULL,i_98 = NULL,j_98 = NULL,k_98 = NULL,q_98 = NULL,s_98 = NULL,u_98 = NULL;
            ATerm y_19;
            y_19 = t;
            {
              ATerm l_98 = NULL,m_98 = NULL,n_98 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_97), not_null(y_97));
              {
                t = w_132(t);
                {
                  l_98 = t;
                  n_97 :
                  if(match_cons(l_98, sym__2))
                    {
                      m_98 = ATgetArgument(l_98, 0);
                      n_98 = ATgetArgument(l_98, 1);
                      {
                        ATerm o_98 = NULL;
                        if(((i_98 != NULL) && (i_98 != m_98)))
                          _fail(m_98);
                        else
                          i_98 = m_98;
                        {
                          if(((h_98 != NULL) && (h_98 != n_98)))
                            _fail(n_98);
                          else
                            h_98 = n_98;
                          {
                            t = not_null(i_98);
                            {
                              ATerm p_98 = NULL;
                              t = x_132(t);
                              {
                                o_98 = t;
                                {
                                  if(((j_98 != NULL) && (j_98 != o_98)))
                                    _fail(o_98);
                                  else
                                    j_98 = o_98;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_98), not_null(x_97));
                                    {
                                      t = diff_0(t);
                                      {
                                        p_98 = t;
                                        if(((k_98 != NULL) && (k_98 != p_98)))
                                          _fail(p_98);
                                        else
                                          k_98 = p_98;
                                      }
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
            t = y_19;
            {
              ATerm z_19;
              z_19 = t;
              {
                ATerm r_98 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_98), not_null(w_97));
                {
                  t = conc_0(t);
                  {
                    r_98 = t;
                    if(((q_98 != NULL) && (q_98 != r_98)))
                      _fail(r_98);
                    else
                      q_98 = r_98;
                  }
                }
              }
              t = z_19;
              {
                ATerm e_20;
                e_20 = t;
                {
                  ATerm t_98 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_98), not_null(x_97));
                  {
                    t = conc_0(t);
                    {
                      t_98 = t;
                      if(((s_98 != NULL) && (s_98 != t_98)))
                        _fail(t_98);
                      else
                        s_98 = t_98;
                    }
                  }
                }
                t = e_20;
                {
                  ATerm v_98 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(v_97), not_null(i_98), not_null(z_97));
                  {
                    t = y_132(t);
                    {
                      v_98 = t;
                      if(((u_98 != NULL) && (u_98 != v_98)))
                        _fail(v_98);
                      else
                        u_98 = v_98;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(q_98), not_null(s_98), not_null(h_98), not_null(u_98), not_null(a_98));
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
  ATerm g_99 = NULL,h_99 = NULL,i_99 = NULL,j_99 = NULL,k_99 = NULL,l_99 = NULL;
  g_99 = t;
  e_99 :
  if(match_cons(g_99, sym__5))
    {
      h_99 = ATgetArgument(g_99, 0);
      i_99 = ATgetArgument(g_99, 1);
      j_99 = ATgetArgument(g_99, 2);
      k_99 = ATgetArgument(g_99, 3);
      l_99 = ATgetArgument(g_99, 4);
      f_99 :
      if(((ATgetType(h_99) == AT_LIST) && ATisEmpty(h_99)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_99), not_null(l_99));
        }
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
  ATerm t_99 = NULL,u_99 = NULL,v_99 = NULL,w_99 = NULL;
  t_99 = t;
  s_99 :
  if(match_cons(t_99, sym__3))
    {
      u_99 = ATgetArgument(t_99, 0);
      v_99 = ATgetArgument(t_99, 1);
      w_99 = ATgetArgument(t_99, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(u_99), not_null(u_99), not_null(v_99), not_null(w_99), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm x_120 (ATerm), ATerm y_120 (ATerm))
{
  ATerm b_100 (ATerm t)
  {
    ATerm f_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_120(t);
        ;
        LocalPopChoice(g_20);
      }
    else
      {
        t = f_20;
        {
          t = y_120(t);
          t = b_100(t);
        }
      }
    return(t);
  }
  t = b_100(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm a_121 (ATerm), ATerm b_121 (ATerm), ATerm c_121 (ATerm))
{
  t = a_121(t);
  t = while_not_2(t, b_121, c_121);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm h_132 (ATerm), ATerm i_132 (ATerm), ATerm j_132 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm h_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, h_132, i_132, j_132);
        ;
        LocalPopChoice(i_20);
      }
    else
      {
        t = h_20;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, p_3);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    t = svars_arity_0(t);
    {
      ATerm s_3 (ATerm t)
      {
        t = try_1(t, DefinitionExists_0);
        return(t);
      }
      t = map_1(t, s_3);
    }
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    ATerm e_100 = NULL,f_100 = NULL,g_100 = NULL,h_100 = NULL;
    e_100 = t;
    d_100 :
    if(match_cons(e_100, sym__3))
      {
        f_100 = ATgetArgument(e_100, 0);
        g_100 = ATgetArgument(e_100, 1);
        h_100 = ATgetArgument(e_100, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(h_100)), not_null(g_100));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, q_3, r_3);
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        ;
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
        {
          t = MissingDefs_0(t);
          {
            t = term_i_8;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm y_115 (ATerm))
{
  ATerm q_100 = NULL,r_100 = NULL,s_100 = NULL;
  q_100 = t;
  p_100 :
  if(match_cons(q_100, sym__2))
    {
      r_100 = ATgetArgument(q_100, 0);
      s_100 = ATgetArgument(q_100, 1);
      {
        ATerm v_100 = NULL,w_100 = NULL,x_100 = NULL;
        ATerm q_20;
        q_20 = t;
        {
          ATerm y_100 = NULL;
          ATerm z_100 = NULL,a_101 = NULL,b_101 = NULL;
          t = y_115(t);
          {
            y_100 = t;
            {
              if(((v_100 != NULL) && (v_100 != y_100)))
                _fail(y_100);
              else
                v_100 = y_100;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(v_100), not_null(r_100), not_null(s_100));
                {
                  t = table_push_0(t);
                  {
                    ATerm r_20 = t;
                    int s_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(v_100), term_t_20);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(s_20);
                      }
                    else
                      {
                        t = r_20;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      z_100 = t;
                      o_100 :
                      if(((ATgetType(z_100) == AT_LIST) && !(ATisEmpty(z_100))))
                        {
                          a_101 = ATgetFirst((ATermList) z_100);
                          b_101 = (ATerm) ATgetNext((ATermList) z_100);
                          {
                            if(((w_100 != NULL) && (w_100 != a_101)))
                              _fail(a_101);
                            else
                              w_100 = a_101;
                            {
                              if(((x_100 != NULL) && (x_100 != b_101)))
                                _fail(b_101);
                              else
                                x_100 = b_101;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(v_100), term_t_20, (ATerm) ATinsert(CheckATermList(not_null(x_100)), (ATerm) ATinsert(CheckATermList(not_null(w_100)), not_null(r_100))));
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
        t = q_20;
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
  ATerm j_101 = NULL,k_101 = NULL,l_101 = NULL;
  j_101 = t;
  i_101 :
  if(match_cons(j_101, sym__2))
    {
      k_101 = ATgetArgument(j_101, 0);
      l_101 = ATgetArgument(j_101, 1);
      if(((k_101 != NULL) && (k_101 != l_101)))
        _fail(l_101);
      else
        k_101 = l_101;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm e_112 (ATerm), ATerm f_112 (ATerm))
{
  ATerm r_101 = NULL,s_101 = NULL,t_101 = NULL;
  r_101 = t;
  q_101 :
  if(((ATgetType(r_101) == AT_LIST) && !(ATisEmpty(r_101))))
    {
      s_101 = ATgetFirst((ATermList) r_101);
      t_101 = (ATerm) ATgetNext((ATermList) r_101);
      {
        t = f_112(t);
        {
          ATerm t_3 (ATerm t)
          {
            ATerm w_101 = NULL;
            w_101 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_101), not_null(w_101));
              t = e_112(t);
            }
            return(t);
          }
          t = fetch_1(t, t_3);
        }
        t = not_null(t_101);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm a_112 (ATerm))
{
  ATerm c_102 = NULL,d_102 = NULL,e_102 = NULL;
  c_102 = t;
  b_102 :
  if(match_cons(c_102, sym__2))
    {
      d_102 = ATgetArgument(c_102, 0);
      e_102 = ATgetArgument(c_102, 1);
      {
        t = not_null(d_102);
        {
          ATerm i_102 (ATerm t)
          {
            ATerm u_20 = t;
            int a_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(e_102);
                ;
                LocalPopChoice(a_21);
              }
            else
              {
                t = u_20;
                {
                  ATerm b_21 = t;
                  int h_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_3 (ATerm t)
                      {
                        t = not_null(e_102);
                        return(t);
                      }
                      t = HdMember_p__2(t, a_112, u_3);
                      t = i_102(t);
                      ;
                      LocalPopChoice(h_21);
                    }
                  else
                    {
                      t = b_21;
                      t = Cons_2(t, _id, i_102);
                    }
                }
              }
            return(t);
          }
          t = i_102(t);
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
  ATerm r_102 = NULL;
  r_102 = t;
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_102 = NULL;
        ATerm v_102 = NULL,w_102 = NULL,x_102 = NULL;
        t = not_null(r_102);
        {
          ATerm v_3 (ATerm t)
          {
            t = term_k_21;
            return(t);
          }
          t = rewrite_1(t, v_3);
          {
            v_102 = t;
            m_102 :
            if(match_cons(v_102, sym_Defined_2))
              {
                w_102 = ATgetArgument(v_102, 0);
                x_102 = ATgetArgument(v_102, 1);
                n_102 :
                if(match_string(w_102, "l_0"))
                  {
                    if(((u_102 != NULL) && (u_102 != x_102)))
                      _fail(x_102);
                    else
                      u_102 = x_102;
                  }
                else
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
        t = not_null(u_102);
        ;
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        {
          ATerm a_103 = NULL;
          ATerm b_103 = NULL,c_103 = NULL,g_103 = NULL;
          t = not_null(r_102);
          {
            ATerm w_3 (ATerm t)
            {
              t = term_k_21;
              return(t);
            }
            t = rewrite_1(t, w_3);
            {
              b_103 = t;
              p_102 :
              if(match_cons(b_103, sym_Defined_2))
                {
                  c_103 = ATgetArgument(b_103, 0);
                  g_103 = ATgetArgument(b_103, 1);
                  q_102 :
                  if(match_string(c_103, "h_0"))
                    {
                      if(((a_103 != NULL) && (a_103 != g_103)))
                        _fail(g_103);
                      else
                        a_103 = g_103;
                    }
                  else
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
          t = not_null(a_103);
        }
      }
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm q_103 = NULL,r_103 = NULL,s_103 = NULL;
  q_103 = t;
  p_103 :
  if(((ATgetType(q_103) == AT_LIST) && !(ATisEmpty(q_103))))
    {
      r_103 = ATgetFirst((ATermList) q_103);
      s_103 = (ATerm) ATgetNext((ATermList) q_103);
      t = not_null(r_103);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm a_104 = NULL,b_104 = NULL,c_104 = NULL;
  a_104 = t;
  z_103 :
  if(match_cons(a_104, sym__2))
    {
      b_104 = ATgetArgument(a_104, 0);
      c_104 = ATgetArgument(a_104, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_104), not_null(c_104));
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
ATerm rewrite_1 (ATerm t, ATerm a_116 (ATerm))
{
  ATerm i_104 = NULL;
  ATerm k_104 = NULL;
  i_104 = t;
  {
    ATerm l_104 = NULL;
    t = term_k_18;
    {
      t = a_116(t);
      {
        l_104 = t;
        if(((k_104 != NULL) && (k_104 != l_104)))
          _fail(l_104);
        else
          k_104 = l_104;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_104), not_null(i_104));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm y_104 = NULL,z_104 = NULL,a_105 = NULL,b_105 = NULL,e_105 = NULL;
  ATerm z_105 (ATerm t)
  {
    ATerm s_105 = NULL,t_105 = NULL;
    ATerm u_105 = NULL,v_105 = NULL,w_105 = NULL,x_105 = NULL;
    t = not_null(a_105);
    {
      ATerm x_3 (ATerm t)
      {
        t = term_l_21;
        return(t);
      }
      t = rewrite_1(t, x_3);
      {
        u_105 = t;
        u_104 :
        if(match_cons(u_105, sym_Defined_3))
          {
            v_105 = ATgetArgument(u_105, 0);
            w_105 = ATgetArgument(u_105, 1);
            x_105 = ATgetArgument(u_105, 2);
            v_104 :
            if(match_string(v_105, "e_0"))
              {
                if(((s_105 != NULL) && (s_105 != w_105)))
                  _fail(w_105);
                else
                  s_105 = w_105;
                if(((t_105 != NULL) && (t_105 != x_105)))
                  _fail(x_105);
                else
                  t_105 = x_105;
              }
            else
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
    t = (ATerm) ATinsert(CheckATermList(not_null(t_105)), not_null(s_105));
    return(t);
  }
  a_105 = t;
  w_104 :
  if(match_cons(a_105, sym__2))
    {
      b_105 = ATgetArgument(a_105, 0);
      e_105 = ATgetArgument(a_105, 1);
      x_104 :
      if(match_cons(e_105, sym__2))
        {
          y_104 = ATgetArgument(e_105, 0);
          z_104 = ATgetArgument(e_105, 1);
          {
            ATerm m_21 = t;
            int n_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_105 = NULL;
                ATerm k_105 = NULL,l_105 = NULL,m_105 = NULL;
                t = not_null(a_105);
                {
                  ATerm y_3 (ATerm t)
                  {
                    t = term_l_21;
                    return(t);
                  }
                  t = rewrite_1(t, y_3);
                  {
                    k_105 = t;
                    r_104 :
                    if(match_cons(k_105, sym_Defined_2))
                      {
                        l_105 = ATgetArgument(k_105, 0);
                        m_105 = ATgetArgument(k_105, 1);
                        s_104 :
                        if(match_string(l_105, "j_0"))
                          {
                            if(((j_105 != NULL) && (j_105 != m_105)))
                              _fail(m_105);
                            else
                              j_105 = m_105;
                          }
                        else
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
                t = not_null(j_105);
                ;
                LocalPopChoice(n_21);
              }
            else
              {
                t = m_21;
                t = z_105(t);
              }
          }
        }
      else
        {
          t = z_105(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm r_114 (ATerm))
{
  ATerm o_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_114(t);
      ;
      LocalPopChoice(r_21);
    }
  else
    {
      t = o_21;
      {
        ATerm g_106 = NULL,h_106 = NULL,i_106 = NULL;
        g_106 = t;
        f_106 :
        if(((ATgetType(g_106) == AT_LIST) && !(ATisEmpty(g_106))))
          {
            h_106 = ATgetFirst((ATermList) g_106);
            i_106 = (ATerm) ATgetNext((ATermList) g_106);
            {
              ATerm l_106 = NULL,n_106 = NULL;
              ATerm u_21;
              u_21 = t;
              {
                ATerm m_106 = NULL;
                t = not_null(h_106);
                {
                  t = r_114(t);
                  {
                    m_106 = t;
                    if(((l_106 != NULL) && (l_106 != m_106)))
                      _fail(m_106);
                    else
                      l_106 = m_106;
                  }
                }
              }
              t = u_21;
              {
                ATerm o_106 = NULL;
                t = not_null(i_106);
                {
                  t = foldr_3(t, p_114, q_114, r_114);
                  {
                    o_106 = t;
                    if(((n_106 != NULL) && (n_106 != o_106)))
                      _fail(o_106);
                    else
                      n_106 = o_106;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_106), not_null(n_106));
                  t = q_114(t);
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
  ATerm z_3 (ATerm t)
  {
    t = term_y_21;
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_i_8;
    return(t);
  }
  t = foldr_3(t, z_3, add_0, a_4);
  return(t);
}
ATerm RegisterSDefT_0 (ATerm t)
{
  ATerm b_107 = NULL,c_107 = NULL,d_107 = NULL,e_107 = NULL,f_107 = NULL;
  b_107 = t;
  a_107 :
  if(match_cons(b_107, sym_SDefT_4))
    {
      c_107 = ATgetArgument(b_107, 0);
      d_107 = ATgetArgument(b_107, 1);
      e_107 = ATgetArgument(b_107, 2);
      f_107 = ATgetArgument(b_107, 3);
      {
        ATerm n_107 = NULL,o_107 = NULL,p_107 = NULL,q_107 = NULL;
        ATerm z_21;
        z_21 = t;
        {
          ATerm r_107 = NULL;
          t = not_null(d_107);
          {
            ATerm s_107 = NULL;
            t = length_0(t);
            {
              r_107 = t;
              {
                if(((n_107 != NULL) && (n_107 != r_107)))
                  _fail(r_107);
                else
                  n_107 = r_107;
                {
                  t = not_null(e_107);
                  {
                    ATerm t_107 = NULL,v_107 = NULL;
                    t = length_0(t);
                    {
                      s_107 = t;
                      {
                        if(((o_107 != NULL) && (o_107 != s_107)))
                          _fail(s_107);
                        else
                          o_107 = s_107;
                        {
                          ATerm a_22;
                          a_22 = t;
                          {
                            ATerm u_107 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(c_107), (ATerm) ATmakeAppl(sym__2, not_null(n_107), not_null(o_107)));
                            {
                              ATerm b_22 = t;
                              int f_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Definitions_0(t);
                                  ;
                                  LocalPopChoice(f_22);
                                }
                              else
                                {
                                  t = b_22;
                                  t = (ATerm) ATempty;
                                }
                              {
                                u_107 = t;
                                if(((t_107 != NULL) && (t_107 != u_107)))
                                  _fail(u_107);
                                else
                                  t_107 = u_107;
                              }
                            }
                          }
                          t = a_22;
                          {
                            ATerm w_107 = NULL,y_107 = NULL;
                            t = (ATerm) ATinsert(CheckATermList(not_null(t_107)), not_null(b_107));
                            {
                              v_107 = t;
                              {
                                if(((p_107 != NULL) && (p_107 != v_107)))
                                  _fail(v_107);
                                else
                                  p_107 = v_107;
                                {
                                  ATerm x_107 = NULL;
                                  t = not_null(c_107);
                                  {
                                    ATerm g_22 = t;
                                    int h_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = Arities_0(t);
                                        ;
                                        LocalPopChoice(h_22);
                                      }
                                    else
                                      {
                                        t = g_22;
                                        t = (ATerm) ATempty;
                                      }
                                    {
                                      x_107 = t;
                                      if(((w_107 != NULL) && (w_107 != x_107)))
                                        _fail(x_107);
                                      else
                                        w_107 = x_107;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(n_107), not_null(o_107))), not_null(w_107));
                                    {
                                      t = union_0(t);
                                      {
                                        y_107 = t;
                                        {
                                          if(((q_107 != NULL) && (q_107 != y_107)))
                                            _fail(y_107);
                                          else
                                            q_107 = y_107;
                                          {
                                            ATerm i_22;
                                            i_22 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(c_107), (ATerm) ATmakeAppl(sym__2, not_null(n_107), not_null(o_107))), (ATerm) ATmakeAppl(sym_Defined_2, term_l_22, not_null(p_107)));
                                              {
                                                ATerm b_4 (ATerm t)
                                                {
                                                  t = term_l_21;
                                                  return(t);
                                                }
                                                t = assert_1(t, b_4);
                                              }
                                            }
                                            t = i_22;
                                            {
                                              ATerm t_22;
                                              t_22 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_107), (ATerm) ATmakeAppl(sym_Defined_2, term_u_22, not_null(q_107)));
                                                {
                                                  ATerm c_4 (ATerm t)
                                                  {
                                                    t = term_k_21;
                                                    return(t);
                                                  }
                                                  t = assert_1(t, c_4);
                                                }
                                              }
                                              t = t_22;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = z_21;
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
  ATerm j_108 = NULL;
  ATerm q_108 = NULL;
  t = sort_defs_0(t);
  {
    q_108 = t;
    if(((j_108 != NULL) && (j_108 != q_108)))
      _fail(q_108);
    else
      j_108 = q_108;
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_g_23), not_null(j_108), (ATerm) ATempty);
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm l_88 (ATerm))
{
  ATerm z_108 = NULL,a_109 = NULL;
  z_108 = t;
  y_108 :
  if(match_cons(z_108, sym_Strategies_1))
    {
      a_109 = ATgetArgument(z_108, 0);
      {
        ATerm d_109 = NULL,f_109 = NULL;
        ATerm e_109 = NULL;
        t = SSLgetAnnotations(not_null(z_108));
        {
          e_109 = t;
          if(((d_109 != NULL) && (d_109 != e_109)))
            _fail(e_109);
          else
            d_109 = e_109;
        }
        {
          t = not_null(a_109);
          {
            ATerm h_109 = NULL;
            t = l_88(t);
            {
              f_109 = t;
              {
                ATerm i_109 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(f_109)), not_null(d_109));
                {
                  i_109 = t;
                  if(((h_109 != NULL) && (h_109 != i_109)))
                    _fail(i_109);
                  else
                    h_109 = i_109;
                }
                t = not_null(h_109);
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
ATerm Cons_2 (ATerm t, ATerm h_88 (ATerm), ATerm i_88 (ATerm))
{
  ATerm t_109 = NULL,u_109 = NULL,v_109 = NULL;
  t_109 = t;
  s_109 :
  if(((ATgetType(t_109) == AT_LIST) && !(ATisEmpty(t_109))))
    {
      u_109 = ATgetFirst((ATermList) t_109);
      v_109 = (ATerm) ATgetNext((ATermList) t_109);
      {
        ATerm c_110 = NULL,e_110 = NULL;
        ATerm d_110 = NULL;
        t = SSLgetAnnotations(not_null(t_109));
        {
          d_110 = t;
          if(((c_110 != NULL) && (c_110 != d_110)))
            _fail(d_110);
          else
            c_110 = d_110;
        }
        {
          t = not_null(u_109);
          {
            ATerm g_110 = NULL;
            t = h_88(t);
            {
              e_110 = t;
              {
                t = not_null(v_109);
                {
                  ATerm i_110 = NULL;
                  t = i_88(t);
                  {
                    g_110 = t;
                    {
                      ATerm l_110 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_110)), not_null(e_110)), not_null(c_110));
                      {
                        l_110 = t;
                        if(((i_110 != NULL) && (i_110 != l_110)))
                          _fail(l_110);
                        else
                          i_110 = l_110;
                      }
                      t = not_null(i_110);
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
ATerm Specification_1 (ATerm t, ATerm q_88 (ATerm))
{
  ATerm y_110 = NULL,z_110 = NULL;
  y_110 = t;
  x_110 :
  if(match_cons(y_110, sym_Specification_1))
    {
      z_110 = ATgetArgument(y_110, 0);
      {
        ATerm c_111 = NULL,e_111 = NULL;
        ATerm d_111 = NULL;
        t = SSLgetAnnotations(not_null(y_110));
        {
          d_111 = t;
          if(((c_111 != NULL) && (c_111 != d_111)))
            _fail(d_111);
          else
            c_111 = d_111;
        }
        {
          t = not_null(z_110);
          {
            ATerm g_111 = NULL;
            t = q_88(t);
            {
              e_111 = t;
              {
                ATerm h_111 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(e_111)), not_null(c_111));
                {
                  h_111 = t;
                  if(((g_111 != NULL) && (g_111 != h_111)))
                    _fail(h_111);
                  else
                    g_111 = h_111;
                }
                t = not_null(g_111);
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
ATerm _2 (ATerm t, ATerm y_86 (ATerm), ATerm z_86 (ATerm))
{
  ATerm s_111 = NULL,t_111 = NULL,u_111 = NULL;
  s_111 = t;
  r_111 :
  if(match_cons(s_111, sym__2))
    {
      t_111 = ATgetArgument(s_111, 0);
      u_111 = ATgetArgument(s_111, 1);
      {
        ATerm c_112 = NULL,g_112 = NULL;
        ATerm d_112 = NULL;
        t = SSLgetAnnotations(not_null(s_111));
        {
          d_112 = t;
          if(((c_112 != NULL) && (c_112 != d_112)))
            _fail(d_112);
          else
            c_112 = d_112;
        }
        {
          t = not_null(t_111);
          {
            ATerm i_112 = NULL;
            t = y_86(t);
            {
              g_112 = t;
              {
                t = not_null(u_111);
                {
                  ATerm k_112 = NULL;
                  t = z_86(t);
                  {
                    i_112 = t;
                    {
                      ATerm q_112 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_112), not_null(i_112)), not_null(c_112));
                      {
                        q_112 = t;
                        if(((k_112 != NULL) && (k_112 != q_112)))
                          _fail(q_112);
                        else
                          k_112 = q_112;
                      }
                      t = not_null(k_112);
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
  ATerm h_23;
  h_23 = t;
  {
    ATerm x_112 = NULL;
    ATerm y_112 = NULL;
    t = term_k_18;
    {
      t = whoami_0(t);
      {
        y_112 = t;
        if(((x_112 != NULL) && (x_112 != y_112)))
          _fail(y_112);
        else
          x_112 = y_112;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_23), not_null(x_112)), term_i_23));
      {
        t = printnl_0(t);
        {
          t = term_i_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = h_23;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm c_113 = NULL,d_113 = NULL,e_113 = NULL;
  c_113 = t;
  b_113 :
  if(match_cons(c_113, sym__2))
    {
      d_113 = ATgetArgument(c_113, 0);
      e_113 = ATgetArgument(c_113, 1);
      {
        ATerm k_23;
        k_23 = t;
        t = SSL_printnl(not_null(d_113), not_null(e_113));
        t = k_23;
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
  ATerm j_113 = NULL;
  j_113 = t;
  t = SSL_implode_string(not_null(j_113));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(m_23);
    }
  else
    {
      t = l_23;
      {
        ATerm o_113 = NULL,p_113 = NULL,q_113 = NULL;
        o_113 = t;
        n_113 :
        if(((ATgetType(o_113) == AT_LIST) && !(ATisEmpty(o_113))))
          {
            p_113 = ATgetFirst((ATermList) o_113);
            q_113 = (ATerm) ATgetNext((ATermList) o_113);
            {
              t = not_null(p_113);
              {
                ATerm d_4 (ATerm t)
                {
                  t = not_null(q_113);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, d_4);
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
  ATerm a_114 = NULL;
  ATerm d_114 = NULL;
  a_114 = t;
  {
    ATerm e_114 = NULL;
    ATerm g_114 = NULL,h_114 = NULL,i_114 = NULL;
    t = not_null(a_114);
    {
      e_114 = t;
      {
        t = SSL_explode_term(not_null(e_114));
        {
          g_114 = t;
          y_113 :
          if(match_cons(g_114, sym__2))
            {
              h_114 = ATgetArgument(g_114, 0);
              i_114 = ATgetArgument(g_114, 1);
              z_113 :
              if(match_string(h_114, ""))
                {
                  if(((d_114 != NULL) && (d_114 != i_114)))
                    _fail(i_114);
                  else
                    d_114 = i_114;
                }
              else
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
      t = not_null(d_114);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm p_110 (ATerm))
{
  ATerm m_114 (ATerm t)
  {
    ATerm s_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, m_114);
        ;
        LocalPopChoice(x_23);
      }
    else
      {
        t = s_23;
        {
          t = Nil_0(t);
          t = p_110(t);
        }
      }
    return(t);
  }
  t = m_114(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm u_114 = NULL,v_114 = NULL,w_114 = NULL;
  u_114 = t;
  t_114 :
  if(match_cons(u_114, sym__2))
    {
      v_114 = ATgetArgument(u_114, 0);
      w_114 = ATgetArgument(u_114, 1);
      {
        t = not_null(v_114);
        {
          ATerm e_4 (ATerm t)
          {
            t = not_null(w_114);
            return(t);
          }
          t = at_end_1(t, e_4);
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
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(g_24);
    }
  else
    {
      t = f_24;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm d_115 = NULL;
  d_115 = t;
  t = SSL_explode_string(not_null(d_115));
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
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      {
        ATerm j_24 = t;
        int o_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, f_4);
            ;
            LocalPopChoice(o_24);
          }
        else
          {
            t = j_24;
            {
              ATerm m_115 = NULL,n_115 = NULL,o_115 = NULL;
              m_115 = t;
              l_115 :
              if(match_cons(m_115, sym_Path_1))
                {
                  n_115 = ATgetArgument(m_115, 0);
                  t = not_null(n_115);
                }
              else
                {
                  if(match_cons(m_115, sym_Var_1))
                    {
                      n_115 = ATgetArgument(m_115, 0);
                      {
                        t = not_null(n_115);
                        {
                          ATerm p_24 = t;
                          int q_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(q_24);
                            }
                          else
                            {
                              t = p_24;
                              {
                                ATerm g_4 (ATerm t)
                                {
                                  t = term_u_24;
                                  return(t);
                                }
                                t = debug_1(t, g_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(m_115, sym_Prefix_2))
                        {
                          n_115 = ATgetArgument(m_115, 0);
                          o_115 = ATgetArgument(m_115, 1);
                          {
                            ATerm t_115 = NULL,v_115 = NULL;
                            ATerm v_24;
                            v_24 = t;
                            {
                              ATerm u_115 = NULL;
                              t = not_null(n_115);
                              {
                                t = eval_config_0(t);
                                {
                                  u_115 = t;
                                  if(((t_115 != NULL) && (t_115 != u_115)))
                                    _fail(u_115);
                                  else
                                    t_115 = u_115;
                                }
                              }
                            }
                            t = v_24;
                            {
                              ATerm w_115 = NULL;
                              t = not_null(o_115);
                              {
                                t = eval_config_0(t);
                                {
                                  w_115 = t;
                                  if(((v_115 != NULL) && (v_115 != w_115)))
                                    _fail(w_115);
                                  else
                                    v_115 = w_115;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_115), not_null(v_115));
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
  ATerm h_116 = NULL;
  h_116 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_w_24, not_null(h_116));
    {
      t = table_get_0(t);
      {
        ATerm h_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm x_24;
            x_24 = t;
            {
              ATerm j_116 = NULL;
              ATerm k_116 = NULL;
              k_116 = t;
              if(((j_116 != NULL) && (j_116 != k_116)))
                _fail(k_116);
              else
                j_116 = k_116;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_w_24, not_null(h_116), not_null(j_116));
                t = table_put_0(t);
              }
            }
            t = x_24;
          }
          return(t);
        }
        t = try_1(t, h_4);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm r_126 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    ATerm j_25;
    j_25 = t;
    {
      ATerm o_116 = NULL;
      ATerm p_116 = NULL;
      t = term_k_25;
      {
        t = get_config_0(t);
        {
          p_116 = t;
          if(((o_116 != NULL) && (o_116 != p_116)))
            _fail(p_116);
          else
            o_116 = p_116;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_116), term_l_25);
        t = geq_0(t);
      }
    }
    t = j_25;
    t = r_126(t);
    return(t);
  }
  t = try_1(t, i_4);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm v_116 = NULL,w_116 = NULL,x_116 = NULL,y_116 = NULL;
  v_116 = t;
  t_116 :
  if(match_cons(v_116, sym__2))
    {
      w_116 = ATgetArgument(v_116, 0);
      x_116 = ATgetArgument(v_116, 1);
      u_116 :
      if(match_cons(x_116, sym_Stream_1))
        {
          y_116 = ATgetArgument(x_116, 0);
          {
            ATerm b_117 = NULL;
            t = SSL_fputc(not_null(w_116), not_null(y_116));
            {
              ATerm c_117 = NULL;
              c_117 = t;
              if(((b_117 != NULL) && (b_117 != c_117)))
                _fail(c_117);
              else
                b_117 = c_117;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_117));
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
  ATerm j_117 = NULL,k_117 = NULL,l_117 = NULL,m_117 = NULL;
  j_117 = t;
  h_117 :
  if(match_cons(j_117, sym__2))
    {
      k_117 = ATgetArgument(j_117, 0);
      m_117 = ATgetArgument(j_117, 1);
      i_117 :
      if(match_cons(k_117, sym_Stream_1))
        {
          l_117 = ATgetArgument(k_117, 0);
          {
            ATerm p_117 = NULL;
            t = SSL_write_term_to_stream_text(not_null(l_117), not_null(m_117));
            {
              ATerm q_117 = NULL;
              q_117 = t;
              if(((p_117 != NULL) && (p_117 != q_117)))
                _fail(q_117);
              else
                p_117 = q_117;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_117));
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
  ATerm j_4 (ATerm t)
  {
    ATerm u_117 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm v_117 = NULL;
      v_117 = t;
      if(((u_117 != NULL) && (u_117 != v_117)))
        _fail(v_117);
      else
        u_117 = v_117;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_25, not_null(u_117));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, j_4);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm b_118 = NULL,c_118 = NULL,d_118 = NULL,e_118 = NULL;
  b_118 = t;
  z_117 :
  if(match_cons(b_118, sym__2))
    {
      c_118 = ATgetArgument(b_118, 0);
      e_118 = ATgetArgument(b_118, 1);
      a_118 :
      if(match_cons(c_118, sym_Stream_1))
        {
          d_118 = ATgetArgument(c_118, 0);
          {
            ATerm h_118 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(d_118), not_null(e_118));
            {
              ATerm i_118 = NULL;
              i_118 = t;
              if(((h_118 != NULL) && (h_118 != i_118)))
                _fail(i_118);
              else
                h_118 = i_118;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_118));
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
ATerm WriteToFile_1 (ATerm t, ATerm n_125 (ATerm))
{
  ATerm u_118 = NULL,v_118 = NULL,w_118 = NULL;
  u_118 = t;
  t_118 :
  if(match_cons(u_118, sym__2))
    {
      v_118 = ATgetArgument(u_118, 0);
      w_118 = ATgetArgument(u_118, 1);
      {
        ATerm z_118 = NULL,b_119 = NULL;
        t = not_null(v_118);
        {
          ATerm a_119 = NULL;
          a_119 = t;
          if(((z_118 != NULL) && (z_118 != a_119)))
            _fail(a_119);
          else
            z_118 = a_119;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_118), term_n_25);
            {
              t = open_stream_0(t);
              {
                ATerm c_119 = NULL;
                c_119 = t;
                if(((b_119 != NULL) && (b_119 != c_119)))
                  _fail(c_119);
                else
                  b_119 = c_119;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_119), not_null(w_118));
                  {
                    t = n_125(t);
                    {
                      t = fclose_0(t);
                      t = not_null(w_118);
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
  ATerm k_119 = NULL;
  ATerm v_25;
  v_25 = t;
  {
    ATerm k_4 (ATerm t)
    {
      ATerm w_25 = t;
      int x_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_4 (ATerm t)
          {
            ATerm l_119 = NULL,m_119 = NULL;
            l_119 = t;
            h_119 :
            if(match_cons(l_119, sym_Output_1))
              {
                m_119 = ATgetArgument(l_119, 0);
                if(((k_119 != NULL) && (k_119 != m_119)))
                  _fail(m_119);
                else
                  k_119 = m_119;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, l_4);
          ;
          LocalPopChoice(x_25);
        }
      else
        {
          t = w_25;
          {
            ATerm n_119 = NULL;
            t = term_y_25;
            {
              n_119 = t;
              if(((k_119 != NULL) && (k_119 != n_119)))
                _fail(n_119);
              else
                k_119 = n_119;
            }
          }
        }
      return(t);
    }
    t = _2(t, k_4, _id);
  }
  t = v_25;
  {
    ATerm m_4 (ATerm t)
    {
      ATerm q_4 (ATerm t)
      {
        t = not_null(k_119);
        return(t);
      }
      t = split_2(t, q_4, _id);
      return(t);
    }
    t = _2(t, _id, m_4);
    {
      ATerm j_26 = t;
      int l_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_4 (ATerm t)
          {
            ATerm s_4 (ATerm t)
            {
              ATerm o_119 = NULL;
              o_119 = t;
              j_119 :
              if(!(match_cons(o_119, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, s_4);
            return(t);
          }
          t = _2(t, r_4, WriteToBinaryFile_0);
          ;
          LocalPopChoice(l_26);
        }
      else
        {
          t = j_26;
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
ATerm apply_strategy_1 (ATerm t, ATerm p_128 (ATerm))
{
  ATerm u_119 = NULL,w_119 = NULL,x_119 = NULL,y_119 = NULL;
  ATerm m_26;
  m_26 = t;
  t = dtime_0(t);
  t = m_26;
  {
    t = p_128(t);
    {
      ATerm n_26;
      n_26 = t;
      {
        ATerm v_119 = NULL;
        t = dtime_0(t);
        {
          v_119 = t;
          if(((u_119 != NULL) && (u_119 != v_119)))
            _fail(v_119);
          else
            u_119 = v_119;
        }
      }
      t = n_26;
      {
        w_119 = t;
        t_119 :
        if(match_cons(w_119, sym__2))
          {
            x_119 = ATgetArgument(w_119, 0);
            y_119 = ATgetArgument(w_119, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_119)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(u_119))), not_null(y_119));
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
  ATerm g_120 = NULL,h_120 = NULL;
  ATerm p_120 (ATerm t)
  {
    t = SSL_fclose(not_null(h_120));
    return(t);
  }
  h_120 = t;
  f_120 :
  if(match_cons(h_120, sym_Stream_1))
    {
      g_120 = ATgetArgument(h_120, 0);
      {
        ATerm o_26 = t;
        int p_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(g_120));
            ;
            LocalPopChoice(p_26);
          }
        else
          {
            t = o_26;
            t = p_120(t);
          }
      }
    }
  else
    {
      t = p_120(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm s_120 = NULL,t_120 = NULL;
  s_120 = t;
  r_120 :
  if(match_cons(s_120, sym_Stream_1))
    {
      t_120 = ATgetArgument(s_120, 0);
      t = SSL_read_term_from_stream(not_null(t_120));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm z_124 (ATerm))
{
  ATerm r_26;
  r_26 = t;
  {
    ATerm e_121 = NULL,g_121 = NULL;
    ATerm w_26;
    w_26 = t;
    {
      ATerm f_121 = NULL;
      t = z_124(t);
      {
        f_121 = t;
        if(((e_121 != NULL) && (e_121 != f_121)))
          _fail(f_121);
        else
          e_121 = f_121;
      }
    }
    t = w_26;
    {
      ATerm h_121 = NULL;
      h_121 = t;
      if(((g_121 != NULL) && (g_121 != h_121)))
        _fail(h_121);
      else
        g_121 = h_121;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_121)), not_null(e_121)));
        t = printnl_0(t);
      }
    }
  }
  t = r_26;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm n_121 = NULL,o_121 = NULL,p_121 = NULL;
  n_121 = t;
  m_121 :
  if(match_cons(n_121, sym__2))
    {
      o_121 = ATgetArgument(n_121, 0);
      p_121 = ATgetArgument(n_121, 1);
      {
        ATerm s_121 = NULL;
        t = SSL_fopen(not_null(o_121), not_null(p_121));
        {
          ATerm t_121 = NULL;
          t_121 = t;
          if(((s_121 != NULL) && (s_121 != t_121)))
            _fail(t_121);
          else
            s_121 = t_121;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_121));
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
  ATerm x_121 = NULL;
  x_121 = t;
  t = SSL_is_string(not_null(x_121));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm b_122 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm c_122 = NULL;
    c_122 = t;
    if(((b_122 != NULL) && (b_122 != c_122)))
      _fail(c_122);
    else
      b_122 = c_122;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_122));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm f_122 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm g_122 = NULL;
    g_122 = t;
    if(((f_122 != NULL) && (f_122 != g_122)))
      _fail(g_122);
    else
      f_122 = g_122;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_122));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm j_122 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm k_122 = NULL;
    k_122 = t;
    if(((j_122 != NULL) && (j_122 != k_122)))
      _fail(k_122);
    else
      j_122 = k_122;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_122));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm q_122 = NULL;
  q_122 = t;
  p_122 :
  if(match_cons(q_122, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(q_122, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(q_122, sym_stdin_0))
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
  ATerm a_123 = NULL;
  ATerm c_123 = NULL,d_123 = NULL;
  a_123 = t;
  {
    ATerm e_123 = NULL;
    ATerm g_123 = NULL,h_123 = NULL,i_123 = NULL,j_123 = NULL,k_123 = NULL;
    t = not_null(a_123);
    {
      e_123 = t;
      {
        t = SSL_explode_term(not_null(e_123));
        {
          g_123 = t;
          x_122 :
          if(match_cons(g_123, sym__2))
            {
              h_123 = ATgetArgument(g_123, 0);
              i_123 = ATgetArgument(g_123, 1);
              y_122 :
              if(match_string(h_123, ""))
                {
                  z_122 :
                  if(((ATgetType(i_123) == AT_LIST) && !(ATisEmpty(i_123))))
                    {
                      j_123 = ATgetFirst((ATermList) i_123);
                      k_123 = (ATerm) ATgetNext((ATermList) i_123);
                      {
                        if(((d_123 != NULL) && (d_123 != j_123)))
                          _fail(j_123);
                        else
                          d_123 = j_123;
                        if(((c_123 != NULL) && (c_123 != k_123)))
                          _fail(k_123);
                        else
                          c_123 = k_123;
                      }
                    }
                  else
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
    t = not_null(d_123);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm s_123 = NULL,t_123 = NULL,u_123 = NULL;
  s_123 = t;
  r_123 :
  if(match_cons(s_123, sym__2))
    {
      t_123 = ATgetArgument(s_123, 0);
      u_123 = ATgetArgument(s_123, 1);
      {
        ATerm x_26 = t;
        int y_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(y_26);
          }
        else
          {
            t = x_26;
            {
              ATerm a_27 = t;
              int b_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_4 (ATerm t)
                  {
                    ATerm v_123 = NULL,w_123 = NULL;
                    v_123 = t;
                    q_123 :
                    if(match_cons(v_123, sym_Path_1))
                      {
                        w_123 = ATgetArgument(v_123, 0);
                        t = not_null(w_123);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, t_4, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(b_27);
                }
              else
                {
                  t = a_27;
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
  ATerm e_124 = NULL;
  ATerm c_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_124 = NULL;
      ATerm d_124 = NULL;
      d_124 = t;
      if(((c_124 != NULL) && (c_124 != d_124)))
        _fail(d_124);
      else
        c_124 = d_124;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_124), term_k_27);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(i_27);
    }
  else
    {
      t = c_27;
      {
        ATerm u_4 (ATerm t)
        {
          t = term_l_27;
          return(t);
        }
        t = debug_1(t, u_4);
        _fail(t);
      }
    }
  {
    ATerm m_27;
    m_27 = t;
    {
      ATerm f_124 = NULL;
      t = read_from_stream_0(t);
      {
        f_124 = t;
        if(((e_124 != NULL) && (e_124 != f_124)))
          _fail(f_124);
        else
          e_124 = f_124;
      }
    }
    t = m_27;
    {
      t = fclose_0(t);
      t = not_null(e_124);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm k_107 (ATerm), ATerm l_107 (ATerm))
{
  ATerm k_124 = NULL,m_124 = NULL;
  ATerm n_27;
  n_27 = t;
  {
    ATerm l_124 = NULL;
    t = k_107(t);
    {
      l_124 = t;
      if(((k_124 != NULL) && (k_124 != l_124)))
        _fail(l_124);
      else
        k_124 = l_124;
    }
  }
  t = n_27;
  {
    ATerm n_124 = NULL;
    t = l_107(t);
    {
      n_124 = t;
      if(((m_124 != NULL) && (m_124 != n_124)))
        _fail(n_124);
      else
        m_124 = n_124;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_124), not_null(m_124));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm t_124 = NULL;
  ATerm o_27;
  o_27 = t;
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_4 (ATerm t)
        {
          ATerm u_124 = NULL,v_124 = NULL;
          u_124 = t;
          r_124 :
          if(match_cons(u_124, sym_Input_1))
            {
              v_124 = ATgetArgument(u_124, 0);
              if(((t_124 != NULL) && (t_124 != v_124)))
                _fail(v_124);
              else
                t_124 = v_124;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, v_4);
        ;
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
        {
          ATerm w_124 = NULL;
          t = term_t_27;
          {
            w_124 = t;
            if(((t_124 != NULL) && (t_124 != w_124)))
              _fail(w_124);
            else
              t_124 = w_124;
          }
        }
      }
  }
  t = o_27;
  {
    ATerm w_4 (ATerm t)
    {
      t = not_null(t_124);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_4);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm c_125 = NULL;
    c_125 = t;
    a_125 :
    if(!(match_string(c_125, "-k")))
      {
        if(!(match_string(c_125, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    ATerm u_27;
    u_27 = t;
    {
      ATerm d_125 = NULL;
      ATerm e_125 = NULL;
      t = string_to_int_0(t);
      {
        e_125 = t;
        if(((d_125 != NULL) && (d_125 != e_125)))
          _fail(e_125);
        else
          d_125 = e_125;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_27, not_null(d_125));
        t = set_config_0(t);
      }
    }
    t = u_27;
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = term_a_28;
    return(t);
  }
  t = ArgOption_3(t, x_4, y_4, z_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm h_125 = NULL;
  h_125 = t;
  t = SSL_string_to_int(not_null(h_125));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_5 (ATerm t)
      {
        ATerm q_125 = NULL;
        q_125 = t;
        k_125 :
        if(!(match_string(q_125, "-S")))
          {
            if(!(match_string(q_125, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm b_5 (ATerm t)
      {
        t = term_d_28;
        t = set_config_0(t);
        t = term_e_28;
        return(t);
      }
      ATerm c_5 (ATerm t)
      {
        t = term_f_28;
        return(t);
      }
      t = Option_3(t, a_5, b_5, c_5);
      ;
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      {
        ATerm g_28 = t;
        int l_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_5 (ATerm t)
            {
              ATerm r_125 = NULL;
              r_125 = t;
              l_125 :
              if(!(match_string(r_125, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm e_5 (ATerm t)
            {
              ATerm u_125 = NULL;
              ATerm m_28;
              m_28 = t;
              {
                ATerm s_125 = NULL;
                ATerm t_125 = NULL;
                t = string_to_int_0(t);
                {
                  t_125 = t;
                  if(((s_125 != NULL) && (s_125 != t_125)))
                    _fail(t_125);
                  else
                    s_125 = t_125;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_25, not_null(s_125));
                  t = set_config_0(t);
                }
              }
              t = m_28;
              {
                ATerm v_125 = NULL;
                v_125 = t;
                if(((u_125 != NULL) && (u_125 != v_125)))
                  _fail(v_125);
                else
                  u_125 = v_125;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(u_125));
              }
              return(t);
            }
            ATerm f_5 (ATerm t)
            {
              t = term_n_28;
              return(t);
            }
            t = ArgOption_3(t, d_5, e_5, f_5);
            ;
            LocalPopChoice(l_28);
          }
        else
          {
            t = g_28;
            {
              ATerm g_5 (ATerm t)
              {
                ATerm w_125 = NULL;
                w_125 = t;
                p_125 :
                if(!(match_string(w_125, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm h_5 (ATerm t)
              {
                t = term_t_28;
                t = set_config_0(t);
                t = term_w_28;
                return(t);
              }
              ATerm i_5 (ATerm t)
              {
                t = term_x_28;
                return(t);
              }
              t = Option_3(t, g_5, h_5, i_5);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm c_126 = NULL;
    c_126 = t;
    z_125 :
    if(!(match_string(c_126, "-o")))
      {
        if(!(match_string(c_126, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    ATerm f_126 = NULL;
    ATerm a_29;
    a_29 = t;
    {
      ATerm d_126 = NULL;
      ATerm e_126 = NULL;
      e_126 = t;
      if(((d_126 != NULL) && (d_126 != e_126)))
        _fail(e_126);
      else
        d_126 = e_126;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_29, not_null(d_126));
        t = set_config_0(t);
      }
    }
    t = a_29;
    {
      ATerm g_126 = NULL;
      g_126 = t;
      if(((f_126 != NULL) && (f_126 != g_126)))
        _fail(g_126);
      else
        f_126 = g_126;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_126));
    }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_c_29;
    return(t);
  }
  t = ArgOption_3(t, j_5, k_5, l_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      {
        ATerm m_5 (ATerm t)
        {
          ATerm k_126 = NULL;
          k_126 = t;
          j_126 :
          if(!(match_string(k_126, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm n_5 (ATerm t)
        {
          t = term_h_29;
          t = set_config_0(t);
          t = term_j_29;
          return(t);
        }
        ATerm o_5 (ATerm t)
        {
          t = term_k_29;
          return(t);
        }
        t = Option_3(t, m_5, n_5, o_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm s_126 = NULL,t_126 = NULL,u_126 = NULL,v_126 = NULL,w_126 = NULL;
  s_126 = t;
  o_126 :
  if(match_string(s_126, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(s_126) == AT_LIST) && !(ATisEmpty(s_126))))
        {
          t_126 = ATgetFirst((ATermList) s_126);
          u_126 = (ATerm) ATgetNext((ATermList) s_126);
          p_126 :
          if(((ATgetType(u_126) == AT_LIST) && !(ATisEmpty(u_126))))
            {
              v_126 = ATgetFirst((ATermList) u_126);
              w_126 = (ATerm) ATgetNext((ATermList) u_126);
              {
                ATerm a_127 = NULL;
                ATerm l_29;
                l_29 = t;
                {
                  t = not_null(t_126);
                  t = k_0(t);
                }
                t = l_29;
                {
                  ATerm b_127 = NULL;
                  t = not_null(v_126);
                  {
                    t = m_0(t);
                    {
                      b_127 = t;
                      if(((a_127 != NULL) && (a_127 != b_127)))
                        _fail(b_127);
                      else
                        a_127 = b_127;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_126)), not_null(a_127));
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
  ATerm p_5 (ATerm t)
  {
    ATerm i_127 = NULL;
    i_127 = t;
    f_127 :
    if(!(match_string(i_127, "-i")))
      {
        if(!(match_string(i_127, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    ATerm l_127 = NULL;
    ATerm n_29;
    n_29 = t;
    {
      ATerm j_127 = NULL;
      ATerm k_127 = NULL;
      k_127 = t;
      if(((j_127 != NULL) && (j_127 != k_127)))
        _fail(k_127);
      else
        j_127 = k_127;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_29, not_null(j_127));
        t = set_config_0(t);
      }
    }
    t = n_29;
    {
      ATerm m_127 = NULL;
      m_127 = t;
      if(((l_127 != NULL) && (l_127 != m_127)))
        _fail(m_127);
      else
        l_127 = m_127;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_127));
    }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = term_q_29;
    return(t);
  }
  t = ArgOption_3(t, p_5, s_5, t_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm r_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(t_29);
    }
  else
    {
      t = r_29;
      {
        ATerm u_29 = t;
        int e_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(e_30);
          }
        else
          {
            t = u_29;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm q_127 = NULL;
  t = report_run_time_0(t);
  {
    ATerm r_127 = NULL;
    t = term_k_18;
    {
      t = whoami_0(t);
      {
        r_127 = t;
        if(((q_127 != NULL) && (q_127 != r_127)))
          _fail(r_127);
        else
          q_127 = r_127;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, term_f_30), not_null(q_127)));
      {
        t = printnl_0(t);
        {
          t = term_i_8;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_g_30;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_127 = NULL;
  u_127 = t;
  t = SSL_TicksToSeconds(not_null(u_127));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_127 = NULL,a_128 = NULL,b_128 = NULL;
  z_127 = t;
  y_127 :
  if(match_cons(z_127, sym__2))
    {
      a_128 = ATgetArgument(z_127, 0);
      b_128 = ATgetArgument(z_127, 1);
      {
        ATerm h_30 = t;
        int i_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_128), not_null(b_128));
            ;
            LocalPopChoice(i_30);
          }
        else
          {
            t = h_30;
            t = SSL_addr(not_null(a_128), not_null(b_128));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_114 (ATerm), ATerm o_114 (ATerm))
{
  ATerm t_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_114(t);
      ;
      LocalPopChoice(u_30);
    }
  else
    {
      t = t_30;
      {
        ATerm i_128 = NULL,j_128 = NULL,k_128 = NULL;
        i_128 = t;
        h_128 :
        if(((ATgetType(i_128) == AT_LIST) && !(ATisEmpty(i_128))))
          {
            j_128 = ATgetFirst((ATermList) i_128);
            k_128 = (ATerm) ATgetNext((ATermList) i_128);
            {
              ATerm n_128 = NULL;
              ATerm o_128 = NULL;
              t = not_null(k_128);
              {
                t = foldr_2(t, n_114, o_114);
                {
                  o_128 = t;
                  if(((n_128 != NULL) && (n_128 != o_128)))
                    _fail(o_128);
                  else
                    n_128 = o_128;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_128), not_null(n_128));
                t = o_114(t);
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
ATerm crush_2 (ATerm t, ATerm l_112 (ATerm), ATerm m_112 (ATerm))
{
  ATerm c_129 = NULL;
  ATerm i_129 = NULL;
  c_129 = t;
  {
    ATerm j_129 = NULL;
    ATerm l_129 = NULL,m_129 = NULL,o_129 = NULL;
    t = not_null(c_129);
    {
      j_129 = t;
      {
        t = SSL_explode_term(not_null(j_129));
        {
          l_129 = t;
          b_129 :
          if(match_cons(l_129, sym__2))
            {
              m_129 = ATgetArgument(l_129, 0);
              o_129 = ATgetArgument(l_129, 1);
              if(((i_129 != NULL) && (i_129 != o_129)))
                _fail(o_129);
              else
                i_129 = o_129;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_129);
      t = foldr_2(t, l_112, m_112);
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
    ATerm u_5 (ATerm t)
    {
      t = term_y_21;
      return(t);
    }
    t = crush_2(t, u_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm y_129 = NULL,z_129 = NULL,a_130 = NULL;
  y_129 = t;
  x_129 :
  if(match_cons(y_129, sym__2))
    {
      z_129 = ATgetArgument(y_129, 0);
      a_130 = ATgetArgument(y_129, 1);
      {
        ATerm z_30;
        z_30 = t;
        {
          ATerm a_31 = t;
          int h_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(z_129), not_null(a_130));
              ;
              LocalPopChoice(h_31);
            }
          else
            {
              t = a_31;
              t = SSL_gtr(not_null(z_129), not_null(a_130));
            }
        }
        t = z_30;
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
  ATerm g_130 = NULL;
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_130 = NULL,i_130 = NULL,j_130 = NULL;
      h_130 = t;
      f_130 :
      if(match_cons(h_130, sym__2))
        {
          i_130 = ATgetArgument(h_130, 0);
          j_130 = ATgetArgument(h_130, 1);
          {
            if(((g_130 != NULL) && (g_130 != i_130)))
              _fail(i_130);
            else
              g_130 = i_130;
            if(((g_130 != NULL) && (g_130 != j_130)))
              _fail(j_130);
            else
              g_130 = j_130;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm q_126 (ATerm))
{
  ATerm v_5 (ATerm t)
  {
    ATerm o_31;
    o_31 = t;
    {
      ATerm m_130 = NULL;
      ATerm o_130 = NULL;
      t = term_k_25;
      {
        t = get_config_0(t);
        {
          o_130 = t;
          if(((m_130 != NULL) && (m_130 != o_130)))
            _fail(o_130);
          else
            m_130 = o_130;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_130), term_i_8);
        t = geq_0(t);
      }
    }
    t = o_31;
    t = q_126(t);
    return(t);
  }
  t = try_1(t, v_5);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    ATerm s_130 = NULL,u_130 = NULL;
    ATerm v_31;
    v_31 = t;
    {
      ATerm t_130 = NULL;
      t = run_time_0(t);
      {
        t_130 = t;
        if(((s_130 != NULL) && (s_130 != t_130)))
          _fail(t_130);
        else
          s_130 = t_130;
      }
    }
    t = v_31;
    {
      ATerm v_130 = NULL;
      t = term_k_18;
      {
        t = whoami_0(t);
        {
          v_130 = t;
          if(((u_130 != NULL) && (u_130 != v_130)))
            _fail(v_130);
          else
            u_130 = v_130;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_32), not_null(s_130)), term_b_32), not_null(u_130)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, w_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_y_21;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm c_131 = NULL;
  c_131 = t;
  b_131 :
  if(match_cons(c_131, sym_Version_0))
    {
      ATerm e_131 = NULL,g_131 = NULL;
      ATerm d_32;
      d_32 = t;
      {
        ATerm f_131 = NULL;
        t = SSLgetAnnotations(not_null(c_131));
        {
          f_131 = t;
          if(((e_131 != NULL) && (e_131 != f_131)))
            _fail(f_131);
          else
            e_131 = f_131;
        }
      }
      t = d_32;
      {
        ATerm h_131 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(e_131));
        {
          h_131 = t;
          if(((g_131 != NULL) && (g_131 != h_131)))
            _fail(h_131);
          else
            g_131 = h_131;
        }
        t = not_null(g_131);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm n_129 (ATerm))
{
  ATerm e_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_32;
      t = get_config_0(t);
      ;
      LocalPopChoice(f_32);
    }
  else
    {
      t = e_32;
      {
        ATerm x_5 (ATerm t)
        {
          ATerm h_32 = t;
          int i_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(i_32);
            }
          else
            {
              t = h_32;
              {
                ATerm j_32 = t;
                int k_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(k_32);
                  }
                else
                  {
                    t = j_32;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, x_5);
      }
    }
  t = n_129(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm m_131 = NULL;
  m_131 = t;
  t = SSL_table_create(not_null(m_131));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_131 = NULL;
  w_131 = t;
  {
    ATerm l_32;
    l_32 = t;
    {
      t = term_m_32;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_32, term_n_32, not_null(w_131));
          t = table_put_0(t);
        }
      }
    }
    t = l_32;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm a_132 = NULL;
  a_132 = t;
  t = SSL_table_destroy(not_null(a_132));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_132 = NULL;
  e_132 = t;
  t = SSL_exit(not_null(e_132));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_131 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_109 (ATerm))
{
  ATerm k_132 (ATerm t)
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(p_32);
      }
    else
      {
        t = o_32;
        t = Cons_2(t, z_109, k_132);
      }
    return(t);
  }
  t = k_132(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm r_132 = NULL,s_132 = NULL,t_132 = NULL;
  t_132 = t;
  q_132 :
  if(((ATgetType(t_132) == AT_LIST) && !(ATisEmpty(t_132))))
    {
      r_132 = ATgetFirst((ATermList) t_132);
      s_132 = (ATerm) ATgetNext((ATermList) t_132);
      {
        ATerm b_133 = NULL;
        t = not_null(s_132);
        {
          ATerm q_32;
          q_32 = t;
          {
            ATerm c_133 = NULL,e_133 = NULL,g_133 = NULL;
            ATerm w_32;
            w_32 = t;
            {
              ATerm d_133 = NULL;
              t = i_0(t);
              {
                d_133 = t;
                if(((c_133 != NULL) && (c_133 != d_133)))
                  _fail(d_133);
                else
                  c_133 = d_133;
              }
            }
            t = w_32;
            {
              ATerm f_133 = NULL;
              t = not_null(r_132);
              {
                t = g_0(t);
                {
                  f_133 = t;
                  if(((e_133 != NULL) && (e_133 != f_133)))
                    _fail(f_133);
                  else
                    e_133 = f_133;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(c_133)), not_null(e_133));
                {
                  g_133 = t;
                  if(((b_133 != NULL) && (b_133 != g_133)))
                    _fail(g_133);
                  else
                    b_133 = g_133;
                }
              }
            }
          }
          t = q_32;
          {
            ATerm y_5 (ATerm t)
            {
              t = not_null(b_133);
              return(t);
            }
            t = reverse_acc_2(t, g_0, y_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(t_132) == AT_LIST) && ATisEmpty(t_132)))
        {
          {
            t = term_k_18;
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
  ATerm z_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, z_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm n_131 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm f_101 (ATerm))
{
  ATerm r_133 = NULL,s_133 = NULL;
  r_133 = t;
  q_133 :
  if(match_cons(r_133, sym_Program_1))
    {
      s_133 = ATgetArgument(r_133, 0);
      {
        ATerm v_133 = NULL,x_133 = NULL;
        ATerm w_133 = NULL;
        t = SSLgetAnnotations(not_null(r_133));
        {
          w_133 = t;
          if(((v_133 != NULL) && (v_133 != w_133)))
            _fail(w_133);
          else
            v_133 = w_133;
        }
        {
          t = not_null(s_133);
          {
            ATerm z_133 = NULL;
            t = f_101(t);
            {
              x_133 = t;
              {
                ATerm a_134 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_133)), not_null(v_133));
                {
                  a_134 = t;
                  if(((z_133 != NULL) && (z_133 != a_134)))
                    _fail(a_134);
                  else
                    z_133 = a_134;
                }
                t = not_null(z_133);
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
  ATerm j_134 = NULL;
  ATerm x_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_134 = NULL;
      t = term_g_30;
      {
        t = get_config_0(t);
        {
          k_134 = t;
          if(((j_134 != NULL) && (j_134 != k_134)))
            _fail(k_134);
          else
            j_134 = k_134;
        }
      }
      ;
      LocalPopChoice(y_32);
    }
  else
    {
      t = x_32;
      {
        ATerm a_6 (ATerm t)
        {
          ATerm b_6 (ATerm t)
          {
            ATerm l_134 = NULL;
            l_134 = t;
            if(((j_134 != NULL) && (j_134 != l_134)))
              _fail(l_134);
            else
              j_134 = l_134;
            return(t);
          }
          t = Program_1(t, b_6);
          return(t);
        }
        t = option_defined_1(t, a_6);
      }
    }
  {
    ATerm c_6 (ATerm t)
    {
      ATerm d_6 (ATerm t)
      {
        t = not_null(j_134);
        return(t);
      }
      t = short_description_1(t, d_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, c_6);
    {
      t = term_z_32;
      {
        t = echo_0(t);
        {
          t = term_j_33;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm e_6 (ATerm t)
                {
                  ATerm m_134 = NULL;
                  ATerm n_134 = NULL;
                  n_134 = t;
                  if(((m_134 != NULL) && (m_134 != n_134)))
                    _fail(n_134);
                  else
                    m_134 = n_134;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_134)), term_m_33);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, e_6);
                {
                  ATerm f_6 (ATerm t)
                  {
                    ATerm o_134 = NULL;
                    ATerm p_134 = NULL;
                    ATerm g_6 (ATerm t)
                    {
                      t = not_null(j_134);
                      return(t);
                    }
                    t = long_description_1(t, g_6);
                    {
                      p_134 = t;
                      if(((o_134 != NULL) && (o_134 != p_134)))
                        _fail(p_134);
                      else
                        o_134 = p_134;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(o_134)), term_n_33);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, f_6);
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
  ATerm o_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(p_33);
    }
  else
    {
      t = o_33;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_101 (ATerm))
{
  ATerm z_134 = NULL,a_135 = NULL;
  z_134 = t;
  y_134 :
  if(match_cons(z_134, sym_Undefined_1))
    {
      a_135 = ATgetArgument(z_134, 0);
      {
        ATerm d_135 = NULL,f_135 = NULL;
        ATerm e_135 = NULL;
        t = SSLgetAnnotations(not_null(z_134));
        {
          e_135 = t;
          if(((d_135 != NULL) && (d_135 != e_135)))
            _fail(e_135);
          else
            d_135 = e_135;
        }
        {
          t = not_null(a_135);
          {
            ATerm h_135 = NULL;
            t = g_101(t);
            {
              f_135 = t;
              {
                ATerm i_135 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_135)), not_null(d_135));
                {
                  i_135 = t;
                  if(((h_135 != NULL) && (h_135 != i_135)))
                    _fail(i_135);
                  else
                    h_135 = i_135;
                }
                t = not_null(h_135);
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
ATerm fetch_1 (ATerm t, ATerm j_110 (ATerm))
{
  ATerm n_135 (ATerm t)
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, j_110, _id);
        ;
        LocalPopChoice(r_33);
      }
    else
      {
        t = q_33;
        t = Cons_2(t, _id, n_135);
      }
    return(t);
  }
  t = n_135(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_130 (ATerm))
{
  t = fetch_1(t, n_130);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm p_135 = NULL,q_135 = NULL,r_135 = NULL;
  p_135 = t;
  o_135 :
  if(((ATgetType(p_135) == AT_LIST) && ATisEmpty(p_135)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(p_135) == AT_LIST) && !(ATisEmpty(p_135))))
        {
          q_135 = ATgetFirst((ATermList) p_135);
          r_135 = (ATerm) ATgetNext((ATermList) p_135);
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
  ATerm s_33;
  s_33 = t;
  {
    ATerm u_135 = NULL;
    ATerm x_135 = NULL;
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        {
          ATerm v_135 = NULL;
          ATerm w_135 = NULL;
          w_135 = t;
          if(((v_135 != NULL) && (v_135 != w_135)))
            _fail(w_135);
          else
            v_135 = w_135;
          t = (ATerm) ATinsert(ATempty, not_null(v_135));
        }
      }
    {
      x_135 = t;
      if(((u_135 != NULL) && (u_135 != x_135)))
        _fail(x_135);
      else
        u_135 = x_135;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_25, not_null(u_135));
      t = printnl_0(t);
    }
  }
  t = s_33;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_g_30;
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
  ATerm v_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(w_33);
    }
  else
    {
      t = v_33;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_136 = NULL;
  e_136 = t;
  d_136 :
  if(match_cons(e_136, sym_Help_0))
    {
      ATerm g_136 = NULL,i_136 = NULL;
      ATerm y_33;
      y_33 = t;
      {
        ATerm h_136 = NULL;
        t = SSLgetAnnotations(not_null(e_136));
        {
          h_136 = t;
          if(((g_136 != NULL) && (g_136 != h_136)))
            _fail(h_136);
          else
            g_136 = h_136;
        }
      }
      t = y_33;
      {
        ATerm j_136 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(g_136));
        {
          j_136 = t;
          if(((i_136 != NULL) && (i_136 != j_136)))
            _fail(j_136);
          else
            i_136 = j_136;
        }
        t = not_null(i_136);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_106 (ATerm))
{
  ATerm z_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_106(t);
      ;
      LocalPopChoice(a_34);
    }
  else
    {
      t = z_33;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm b_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_6 (ATerm t)
      {
        ATerm p_136 = NULL;
        p_136 = t;
        n_136 :
        if(!(match_string(p_136, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm i_6 (ATerm t)
      {
        t = term_j_34;
        t = set_config_0(t);
        return(t);
      }
      ATerm j_6 (ATerm t)
      {
        t = term_s_34;
        return(t);
      }
      t = Option_3(t, h_6, i_6, j_6);
      ;
      LocalPopChoice(d_34);
    }
  else
    {
      t = b_34;
      {
        ATerm k_6 (ATerm t)
        {
          ATerm q_136 = NULL;
          q_136 = t;
          o_136 :
          if(!(match_string(q_136, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm l_6 (ATerm t)
        {
          t = term_j_34;
          {
            t = set_config_0(t);
            {
              t = term_o_35;
              t = set_config_0(t);
            }
          }
          t = term_p_35;
          return(t);
        }
        ATerm m_6 (ATerm t)
        {
          t = term_q_35;
          return(t);
        }
        t = Option_3(t, k_6, l_6, m_6);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm t_136 = NULL,u_136 = NULL,v_136 = NULL;
  t_136 = t;
  s_136 :
  if(match_cons(t_136, sym__2))
    {
      u_136 = ATgetArgument(t_136, 0);
      v_136 = ATgetArgument(t_136, 1);
      t = SSL_table_get(not_null(u_136), not_null(v_136));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm c_137 = NULL,d_137 = NULL,e_137 = NULL,f_137 = NULL;
  c_137 = t;
  b_137 :
  if(match_cons(c_137, sym__3))
    {
      d_137 = ATgetArgument(c_137, 0);
      e_137 = ATgetArgument(c_137, 1);
      f_137 = ATgetArgument(c_137, 2);
      {
        ATerm r_35;
        r_35 = t;
        {
          ATerm j_137 = NULL;
          ATerm k_137 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_137), not_null(e_137));
          {
            ATerm s_35 = t;
            int t_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(t_35);
              }
            else
              {
                t = s_35;
                t = (ATerm) ATempty;
              }
            {
              k_137 = t;
              if(((j_137 != NULL) && (j_137 != k_137)))
                _fail(k_137);
              else
                j_137 = k_137;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_137), not_null(e_137), (ATerm) ATinsert(CheckATermList(not_null(j_137)), not_null(f_137)));
            t = table_put_0(t);
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
ATerm register_usage_1 (ATerm t, ATerm s_131 (ATerm))
{
  ATerm o_137 = NULL;
  ATerm p_137 = NULL;
  t = term_k_18;
  {
    t = s_131(t);
    {
      p_137 = t;
      if(((o_137 != NULL) && (o_137 != p_137)))
        _fail(p_137);
      else
        o_137 = p_137;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_h_33, term_i_33, not_null(o_137));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm v_137 = NULL,w_137 = NULL,x_137 = NULL;
  v_137 = t;
  u_137 :
  if(match_string(v_137, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(v_137) == AT_LIST) && !(ATisEmpty(v_137))))
        {
          w_137 = ATgetFirst((ATermList) v_137);
          x_137 = (ATerm) ATgetNext((ATermList) v_137);
          {
            ATerm a_138 = NULL;
            ATerm u_35;
            u_35 = t;
            {
              t = not_null(w_137);
              t = a_0(t);
            }
            t = u_35;
            {
              ATerm b_138 = NULL;
              t = term_k_18;
              {
                t = b_0(t);
                {
                  b_138 = t;
                  if(((a_138 != NULL) && (a_138 != b_138)))
                    _fail(b_138);
                  else
                    a_138 = b_138;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_137)), not_null(a_138));
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
  ATerm n_6 (ATerm t)
  {
    ATerm g_138 = NULL;
    g_138 = t;
    f_138 :
    if(!(match_string(g_138, "--help")))
      {
        if(!(match_string(g_138, "-h")))
          {
            if(!(match_string(g_138, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm o_6 (ATerm t)
  {
    t = term_v_35;
    {
      t = set_config_0(t);
      t = term_w_35;
    }
    return(t);
  }
  ATerm p_6 (ATerm t)
  {
    t = term_x_35;
    return(t);
  }
  t = Option_3(t, n_6, o_6, p_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm j_138 = NULL,k_138 = NULL,l_138 = NULL;
  j_138 = t;
  i_138 :
  if(((ATgetType(j_138) == AT_LIST) && !(ATisEmpty(j_138))))
    {
      k_138 = ATgetFirst((ATermList) j_138);
      l_138 = (ATerm) ATgetNext((ATermList) j_138);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_138)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_138)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm r_138 = NULL,s_138 = NULL,t_138 = NULL;
  r_138 = t;
  q_138 :
  if(match_cons(r_138, sym__2))
    {
      s_138 = ATgetArgument(r_138, 0);
      t_138 = ATgetArgument(r_138, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_w_24, not_null(s_138), not_null(t_138));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_131 (ATerm))
{
  ATerm y_35;
  y_35 = t;
  {
    ATerm q_6 (ATerm t)
    {
      t = term_z_35;
      t = q_131(t);
      return(t);
    }
    t = try_1(t, q_6);
  }
  t = y_35;
  {
    ATerm r_6 (ATerm t)
    {
      ATerm b_139 = NULL;
      ATerm a_36;
      a_36 = t;
      {
        ATerm z_138 = NULL;
        ATerm a_139 = NULL;
        a_139 = t;
        if(((z_138 != NULL) && (z_138 != a_139)))
          _fail(a_139);
        else
          z_138 = a_139;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_30, not_null(z_138));
          t = set_config_0(t);
        }
      }
      t = a_36;
      {
        ATerm c_139 = NULL;
        c_139 = t;
        if(((b_139 != NULL) && (b_139 != c_139)))
          _fail(c_139);
        else
          b_139 = c_139;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_139));
      }
      return(t);
    }
    ATerm s_6 (ATerm t)
    {
      ATerm b_36 = t;
      int c_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_36 = t;
          int e_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(e_36);
            }
          else
            {
              t = d_36;
              {
                t = q_131(t);
                t = Cons_2(t, _id, s_6);
              }
            }
          ;
          LocalPopChoice(c_36);
        }
      else
        {
          t = b_36;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, r_6, s_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_139 = NULL,j_139 = NULL,k_139 = NULL;
  ATerm f_36;
  f_36 = t;
  {
    ATerm l_139 = NULL,m_139 = NULL,n_139 = NULL,o_139 = NULL;
    l_139 = t;
    h_139 :
    if(match_cons(l_139, sym__3))
      {
        m_139 = ATgetArgument(l_139, 0);
        n_139 = ATgetArgument(l_139, 1);
        o_139 = ATgetArgument(l_139, 2);
        {
          if(((i_139 != NULL) && (i_139 != m_139)))
            _fail(m_139);
          else
            i_139 = m_139;
          {
            if(((j_139 != NULL) && (j_139 != n_139)))
              _fail(n_139);
            else
              j_139 = n_139;
            {
              if(((k_139 != NULL) && (k_139 != o_139)))
                _fail(o_139);
              else
                k_139 = o_139;
              t = SSL_table_put(not_null(i_139), not_null(j_139), not_null(k_139));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_36;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_131 (ATerm))
{
  ATerm r_139 = NULL;
  ATerm g_36;
  g_36 = t;
  {
    t = term_i_36;
    t = table_put_0(t);
  }
  t = g_36;
  {
    ATerm t_6 (ATerm t)
    {
      ATerm j_36 = t;
      int k_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_131(t);
          ;
          LocalPopChoice(k_36);
        }
      else
        {
          t = j_36;
          {
            ATerm m_36 = t;
            int n_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(n_36);
              }
            else
              {
                t = m_36;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, t_6);
    {
      ATerm u_6 (ATerm t)
      {
        ATerm o_36 = t;
        int p_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_36;
            q_36 = t;
            {
              ATerm r_36 = t;
              int s_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_g_32;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(s_36);
                }
              else
                {
                  t = r_36;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = q_36;
            {
              t = system_usage_0(t);
              {
                t = term_y_21;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(p_36);
          }
        else
          {
            t = o_36;
            {
              ATerm u_36 = t;
              int y_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_37;
                  i_37 = t;
                  {
                    t = term_i_34;
                    t = get_config_0(t);
                  }
                  t = i_37;
                  {
                    t = system_about_0(t);
                    {
                      t = term_y_21;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(y_36);
                }
              else
                {
                  t = u_36;
                  {
                    ATerm v_6 (ATerm t)
                    {
                      ATerm x_6 (ATerm t)
                      {
                        ATerm s_139 = NULL;
                        s_139 = t;
                        if(((r_139 != NULL) && (r_139 != s_139)))
                          _fail(s_139);
                        else
                          r_139 = s_139;
                        return(t);
                      }
                      t = Undefined_1(t, x_6);
                      return(t);
                    }
                    t = option_defined_1(t, v_6);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_139)), term_j_37));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_i_8;
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
      t = try_1(t, u_6);
      {
        ATerm k_37;
        k_37 = t;
        {
          t = term_h_33;
          t = table_destroy_0(t);
        }
        t = k_37;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm p_129 (ATerm), ATerm q_129 (ATerm), ATerm r_129 (ATerm), ATerm s_129 (ATerm))
{
  t = parse_options_1(t, p_129);
  {
    t = store_options_0(t);
    {
      t = r_129(t);
      {
        ATerm l_37 = t;
        int m_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, q_129);
            ;
            LocalPopChoice(m_37);
          }
        else
          {
            t = l_37;
            {
              ATerm n_37 = t;
              int o_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_129(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(o_37);
                }
              else
                {
                  t = n_37;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm e_129 (ATerm), ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm))
{
  ATerm y_6 (ATerm t)
  {
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_129(t);
        ;
        LocalPopChoice(q_37);
      }
    else
      {
        t = p_37;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, e_129);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, y_6, g_129, h_129, z_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm y_128 (ATerm), ATerm z_128 (ATerm), ATerm a_129 (ATerm))
{
  ATerm a_7 (ATerm t)
  {
    ATerm b_7 (ATerm t)
    {
      ATerm r_37;
      r_37 = t;
      {
        ATerm v_139 = NULL;
        ATerm w_139 = NULL;
        t = term_g_30;
        {
          t = get_config_0(t);
          {
            w_139 = t;
            if(((v_139 != NULL) && (v_139 != w_139)))
              _fail(w_139);
            else
              v_139 = w_139;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATempty, not_null(v_139)));
          t = printnl_0(t);
        }
      }
      t = r_37;
      return(t);
    }
    t = if_verbose2_1(t, b_7);
    return(t);
  }
  t = iowrap_4(t, y_128, z_128, a_129, a_7);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm w_128 (ATerm), ATerm x_128 (ATerm))
{
  t = iowrap_3(t, w_128, x_128, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm t_128 (ATerm))
{
  ATerm c_7 (ATerm t)
  {
    t = _2(t, _id, t_128);
    return(t);
  }
  t = iowrap_2(t, c_7, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    ATerm e_7 (ATerm t)
    {
      ATerm f_7 (ATerm t)
      {
        ATerm g_7 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, g_7, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, f_7);
      return(t);
    }
    t = Specification_1(t, e_7);
    t = needed_constructors_0(t);
    return(t);
  }
  t = iowrap_1(t, d_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_0(t);
  return(t);
}
