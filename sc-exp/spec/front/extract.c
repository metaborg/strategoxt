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
ATerm term_j_36;
ATerm term_t_35;
ATerm term_a_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_q_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_q_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_t_29;
ATerm term_q_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_c_28;
ATerm term_v_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_b_27;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_l_26;
ATerm term_u_25;
ATerm term_s_25;
ATerm term_y_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_b_24;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_q_22;
ATerm term_r_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_e_20;
ATerm term_o_17;
ATerm term_h_17;
ATerm term_b_17;
ATerm term_w_13;
ATerm term_r_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_b_12;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_n_10;
ATerm term_f_8;
ATerm term_u_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_a_7;
ATerm term_z_6;
void init_constant_terms (void)
{
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Op_2, term_h_13, (ATerm) ATempty);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_ConstType_1, term_i_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym__2, term_r_21, term_r_21);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym__2, term_u_22, term_v_22);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym__2, term_k_24, term_r_21);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_21);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym__2, term_c_28, term_b_17);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym__2, term_s_28, term_b_17);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, term_h_32, term_i_32);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym__2, term_f_34, term_b_17);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym__2, term_i_34, term_b_17);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym__2, term_q_30, term_b_17);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym__3, term_h_32, term_i_32, (ATerm) ATempty);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm MissingDef_0 (ATerm);
ATerm MissingDefMod_0 (ATerm);
ATerm MissingDefs_0 (ATerm);
ATerm NoMissingDefs_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm giving_up_0 (ATerm);
ATerm error_0 (ATerm);
ATerm DefinitionExists_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm g_93 (ATerm), ATerm h_93 (ATerm));
ATerm SDefT_4 (ATerm, ATerm b_95 (ATerm), ATerm c_95 (ATerm), ATerm d_95 (ATerm), ATerm e_95 (ATerm));
ATerm SDef_3 (ATerm, ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm a_95 (ATerm));
ATerm Let_2 (ATerm, ATerm j_92 (ATerm), ATerm k_92 (ATerm));
ATerm sboundin_3 (ATerm, ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm u_102 (ATerm));
ATerm Bind7_0 (ATerm);
ATerm Bind5_0 (ATerm);
ATerm Bind3_0 (ATerm);
ATerm declared_vars_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm c_112 (ATerm), ATerm d_112 (ATerm), ATerm e_112 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm a_118 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm b_118 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm tsubs_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm l_103 (ATerm), ATerm m_103 (ATerm));
ATerm alltd_1 (ATerm, ATerm f_105 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm w_102 (ATerm), ATerm x_102 (ATerm));
ATerm substitute_1 (ATerm, ATerm y_102 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm u_94 (ATerm), ATerm v_94 (ATerm));
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
ATerm As_2 (ATerm, ATerm q_89 (ATerm), ATerm r_89 (ATerm));
ATerm PrimT_3 (ATerm, ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm r_93 (ATerm));
ATerm Explode_2 (ATerm, ATerm j_89 (ATerm), ATerm k_89 (ATerm));
ATerm Op_2 (ATerm, ATerm f_89 (ATerm), ATerm g_89 (ATerm));
ATerm pat_td_1 (ATerm, ATerm p_132 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm MkConstType_0 (ATerm);
ATerm MkFunType_0 (ATerm);
ATerm map1_1 (ATerm, ATerm q_0 (ATerm));
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm j_108 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm x_119 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm n_89 (ATerm), ATerm o_89 (ATerm));
ATerm Con_3 (ATerm, ATerm z_89 (ATerm), ATerm a_90 (ATerm), ATerm b_90 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm t_92 (ATerm), ATerm u_92 (ATerm));
ATerm oncetd_1 (ATerm, ATerm r_104 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm n_103 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm p_107 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm r_114 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm h_108 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm diff_1 (ATerm, ATerm l_111 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm));
ATerm zip_1 (ATerm, ATerm e_108 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm l_132 (ATerm), ATerm m_132 (ATerm), ATerm n_132 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm m_120 (ATerm), ATerm n_120 (ATerm));
ATerm for_3 (ATerm, ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm r_120 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm y_131 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm n_115 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm t_111 (ATerm), ATerm u_111 (ATerm));
ATerm union_1 (ATerm, ATerm p_111 (ATerm));
ATerm union_0 (ATerm);
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm p_115 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm e_114 (ATerm), ATerm f_114 (ATerm), ATerm g_114 (ATerm));
ATerm length_0 (ATerm);
ATerm RegisterSDefT_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm a_88 (ATerm));
ATerm Cons_2 (ATerm, ATerm w_87 (ATerm), ATerm x_87 (ATerm));
ATerm Specification_1 (ATerm, ATerm f_88 (ATerm));
ATerm _2 (ATerm, ATerm n_86 (ATerm), ATerm o_86 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_110 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm g_126 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm c_125 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm e_128 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm o_124 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm z_106 (ATerm), ATerm a_107 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm c_114 (ATerm), ATerm d_114 (ATerm));
ATerm crush_2 (ATerm, ATerm a_112 (ATerm), ATerm b_112 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm f_126 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm c_129 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm d_131 (ATerm));
ATerm map_1 (ATerm, ATerm o_109 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm c_131 (ATerm));
ATerm Program_1 (ATerm, ATerm u_100 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm v_100 (ATerm));
ATerm fetch_1 (ATerm, ATerm y_109 (ATerm));
ATerm option_defined_1 (ATerm, ATerm c_130 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm f_106 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm h_131 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm f_131 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm e_131 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm e_129 (ATerm), ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm));
ATerm iowrap_4 (ATerm, ATerm t_128 (ATerm), ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm w_128 (ATerm));
ATerm iowrap_3 (ATerm, ATerm n_128 (ATerm), ATerm o_128 (ATerm), ATerm p_128 (ATerm));
ATerm iowrap_2 (ATerm, ATerm l_128 (ATerm), ATerm m_128 (ATerm));
ATerm iowrap_1 (ATerm, ATerm i_128 (ATerm));
ATerm extract_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm d_4 = NULL;
  d_4 = t;
  c_4 :
  if(((ATgetType(d_4) == AT_LIST) && ATisEmpty(d_4)))
    {
      {
        ATerm f_5 = NULL,h_5 = NULL;
        ATerm y_6;
        y_6 = t;
        {
          ATerm g_5 = NULL;
          t = SSLgetAnnotations(not_null(d_4));
          {
            g_5 = t;
            if(((f_5 != NULL) && (f_5 != g_5)))
              _fail(g_5);
            else
              f_5 = g_5;
          }
        }
        t = y_6;
        {
          ATerm j_6 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(f_5));
          {
            j_6 = t;
            if(((h_5 != NULL) && (h_5 != j_6)))
              _fail(j_6);
            else
              h_5 = j_6;
          }
          t = not_null(h_5);
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
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
  f_7 = t;
  b_7 :
  if(match_cons(f_7, sym__2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_7), not_null(h_7)), term_a_7), not_null(g_7)), term_z_6);
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
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
  o_7 = t;
  m_7 :
  if(match_cons(o_7, sym__2))
    {
      p_7 = ATgetArgument(o_7, 0);
      s_7 = ATgetArgument(o_7, 1);
      n_7 :
      if(match_cons(p_7, sym_Mod_2))
        {
          q_7 = ATgetArgument(p_7, 0);
          r_7 = ATgetArgument(p_7, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_7), not_null(s_7)), term_a_7), not_null(r_7)), term_d_7), not_null(q_7)), term_z_6);
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
  ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
  a_8 = t;
  y_7 :
  if(match_cons(a_8, sym__2))
    {
      b_8 = ATgetArgument(a_8, 0);
      c_8 = ATgetArgument(a_8, 1);
      z_7 :
      if(((ATgetType(c_8) == AT_LIST) && !(ATisEmpty(c_8))))
        {
          d_8 = ATgetFirst((ATermList) c_8);
          e_8 = (ATerm) ATgetNext((ATermList) c_8);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(e_8)), not_null(d_8));
            {
              ATerm c_0 (ATerm t)
              {
                ATerm e_7 = t;
                int i_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    ;
                    LocalPopChoice(i_7);
                  }
                else
                  {
                    t = e_7;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, c_0);
            }
            t = not_null(b_8);
          }
        }
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
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL;
  m_8 = t;
  k_8 :
  if(match_cons(m_8, sym__2))
    {
      n_8 = ATgetArgument(m_8, 0);
      o_8 = ATgetArgument(m_8, 1);
      l_8 :
      if(((ATgetType(o_8) == AT_LIST) && ATisEmpty(o_8)))
        {
          t = not_null(n_8);
        }
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
  ATerm j_7;
  j_7 = t;
  {
    t = error_0(t);
    {
      t = term_k_7;
      t = exit_0(t);
    }
  }
  t = j_7;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_l_7);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm t_7;
  t_7 = t;
  {
    ATerm s_8 = NULL;
    ATerm t_8 = NULL;
    t_8 = t;
    if(((s_8 != NULL) && (s_8 != t_8)))
      _fail(t_8);
    else
      s_8 = t_8;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_7, not_null(s_8));
      t = printnl_0(t);
    }
  }
  t = t_7;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
  l_9 = t;
  h_9 :
  if(match_cons(l_9, sym__2))
    {
      m_9 = ATgetArgument(l_9, 0);
      n_9 = ATgetArgument(l_9, 1);
      i_9 :
      if(match_cons(n_9, sym__2))
        {
          o_9 = ATgetArgument(n_9, 0);
          p_9 = ATgetArgument(n_9, 1);
          j_9 :
          if(match_int(o_9, 0))
            {
              k_9 :
              if(match_int(p_9, 0))
                {
                  ATerm v_7 = t;
                  int w_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
                      t = not_null(m_9);
                      {
                        t = Arities_0(t);
                        {
                          r_9 = t;
                          b_9 :
                          if(((ATgetType(r_9) == AT_LIST) && !(ATisEmpty(r_9))))
                            {
                              s_9 = ATgetFirst((ATermList) r_9);
                              t_9 = (ATerm) ATgetNext((ATermList) r_9);
                              c_9 :
                              if(((ATgetType(t_9) == AT_LIST) && !(ATisEmpty(t_9))))
                                {
                                  u_9 = ATgetFirst((ATermList) t_9);
                                  v_9 = (ATerm) ATgetNext((ATermList) t_9);
                                  {
                                    ATerm x_7 = t;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm f_0 (ATerm t)
                                        {
                                          ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL;
                                          w_9 = t;
                                          y_8 :
                                          if(match_cons(w_9, sym__2))
                                            {
                                              x_9 = ATgetArgument(w_9, 0);
                                              y_9 = ATgetArgument(w_9, 1);
                                              z_8 :
                                              if(match_int(x_9, 0))
                                                {
                                                  a_9 :
                                                  if(!(match_int(y_9, 0)))
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
                                        t = fetch_1(t, f_0);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = x_7;
                                      }
                                    {
                                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_9)), term_f_8);
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
                      LocalPopChoice(w_7);
                    }
                  else
                    {
                      t = v_7;
                      {
                        ATerm a_10 = NULL,b_10 = NULL;
                        ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
                        t = not_null(m_9);
                        {
                          t = Arities_0(t);
                          {
                            c_10 = t;
                            e_9 :
                            if(((ATgetType(c_10) == AT_LIST) && !(ATisEmpty(c_10))))
                              {
                                d_10 = ATgetFirst((ATermList) c_10);
                                g_10 = (ATerm) ATgetNext((ATermList) c_10);
                                f_9 :
                                if(match_cons(d_10, sym__2))
                                  {
                                    e_10 = ATgetArgument(d_10, 0);
                                    f_10 = ATgetArgument(d_10, 1);
                                    g_9 :
                                    if(((ATgetType(g_10) == AT_LIST) && ATisEmpty(g_10)))
                                      {
                                        {
                                          if(((a_10 != NULL) && (a_10 != e_10)))
                                            _fail(e_10);
                                          else
                                            a_10 = e_10;
                                          {
                                            if(((b_10 != NULL) && (b_10 != f_10)))
                                              _fail(f_10);
                                            else
                                              b_10 = f_10;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), (ATerm) ATmakeAppl(sym__2, not_null(a_10), not_null(b_10)));
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
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), (ATerm) ATmakeAppl(sym__2, not_null(a_10), not_null(b_10)));
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
ATerm Rec_2 (ATerm t, ATerm g_93 (ATerm), ATerm h_93 (ATerm))
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
  r_10 = t;
  q_10 :
  if(match_cons(r_10, sym_Rec_2))
    {
      s_10 = ATgetArgument(r_10, 0);
      t_10 = ATgetArgument(r_10, 1);
      {
        ATerm x_10 = NULL,z_10 = NULL;
        ATerm y_10 = NULL;
        t = SSLgetAnnotations(not_null(r_10));
        {
          y_10 = t;
          if(((x_10 != NULL) && (x_10 != y_10)))
            _fail(y_10);
          else
            x_10 = y_10;
        }
        {
          t = not_null(s_10);
          {
            ATerm b_11 = NULL;
            t = g_93(t);
            {
              z_10 = t;
              {
                t = not_null(t_10);
                {
                  ATerm d_11 = NULL;
                  t = h_93(t);
                  {
                    b_11 = t;
                    {
                      ATerm e_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(z_10), not_null(b_11)), not_null(x_10));
                      {
                        e_11 = t;
                        if(((d_11 != NULL) && (d_11 != e_11)))
                          _fail(e_11);
                        else
                          d_11 = e_11;
                      }
                      t = not_null(d_11);
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
ATerm SDefT_4 (ATerm t, ATerm b_95 (ATerm), ATerm c_95 (ATerm), ATerm d_95 (ATerm), ATerm e_95 (ATerm))
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
  s_11 = t;
  r_11 :
  if(match_cons(s_11, sym_SDefT_4))
    {
      t_11 = ATgetArgument(s_11, 0);
      u_11 = ATgetArgument(s_11, 1);
      v_11 = ATgetArgument(s_11, 2);
      w_11 = ATgetArgument(s_11, 3);
      {
        ATerm c_12 = NULL,e_12 = NULL;
        ATerm d_12 = NULL;
        t = SSLgetAnnotations(not_null(s_11));
        {
          d_12 = t;
          if(((c_12 != NULL) && (c_12 != d_12)))
            _fail(d_12);
          else
            c_12 = d_12;
        }
        {
          t = not_null(t_11);
          {
            ATerm g_12 = NULL;
            t = b_95(t);
            {
              e_12 = t;
              {
                t = not_null(u_11);
                {
                  ATerm i_12 = NULL;
                  t = c_95(t);
                  {
                    g_12 = t;
                    {
                      t = not_null(v_11);
                      {
                        ATerm k_12 = NULL;
                        t = d_95(t);
                        {
                          i_12 = t;
                          {
                            t = not_null(w_11);
                            {
                              ATerm m_12 = NULL;
                              t = e_95(t);
                              {
                                k_12 = t;
                                {
                                  ATerm n_12 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(e_12), not_null(g_12), not_null(i_12), not_null(k_12)), not_null(c_12));
                                  {
                                    n_12 = t;
                                    if(((m_12 != NULL) && (m_12 != n_12)))
                                      _fail(n_12);
                                    else
                                      m_12 = n_12;
                                  }
                                  t = not_null(m_12);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm SDef_3 (ATerm t, ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm a_95 (ATerm))
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
  c_13 = t;
  b_13 :
  if(match_cons(c_13, sym_SDef_3))
    {
      d_13 = ATgetArgument(c_13, 0);
      e_13 = ATgetArgument(c_13, 1);
      f_13 = ATgetArgument(c_13, 2);
      {
        ATerm k_13 = NULL,m_13 = NULL;
        ATerm l_13 = NULL;
        t = SSLgetAnnotations(not_null(c_13));
        {
          l_13 = t;
          if(((k_13 != NULL) && (k_13 != l_13)))
            _fail(l_13);
          else
            k_13 = l_13;
        }
        {
          t = not_null(d_13);
          {
            ATerm o_13 = NULL;
            t = y_94(t);
            {
              m_13 = t;
              {
                t = not_null(e_13);
                {
                  ATerm q_13 = NULL;
                  t = z_94(t);
                  {
                    o_13 = t;
                    {
                      t = not_null(f_13);
                      {
                        ATerm s_13 = NULL;
                        t = a_95(t);
                        {
                          q_13 = t;
                          {
                            ATerm t_13 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(m_13), not_null(o_13), not_null(q_13)), not_null(k_13));
                            {
                              t_13 = t;
                              if(((s_13 != NULL) && (s_13 != t_13)))
                                _fail(t_13);
                              else
                                s_13 = t_13;
                            }
                            t = not_null(s_13);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm j_92 (ATerm), ATerm k_92 (ATerm))
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
  g_14 = t;
  f_14 :
  if(match_cons(g_14, sym_Let_2))
    {
      h_14 = ATgetArgument(g_14, 0);
      i_14 = ATgetArgument(g_14, 1);
      {
        ATerm m_14 = NULL,o_14 = NULL;
        ATerm n_14 = NULL;
        t = SSLgetAnnotations(not_null(g_14));
        {
          n_14 = t;
          if(((m_14 != NULL) && (m_14 != n_14)))
            _fail(n_14);
          else
            m_14 = n_14;
        }
        {
          t = not_null(h_14);
          {
            ATerm q_14 = NULL;
            t = j_92(t);
            {
              o_14 = t;
              {
                t = not_null(i_14);
                {
                  ATerm s_14 = NULL;
                  t = k_92(t);
                  {
                    q_14 = t;
                    {
                      ATerm t_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(o_14), not_null(q_14)), not_null(m_14));
                      {
                        t_14 = t;
                        if(((s_14 != NULL) && (s_14 != t_14)))
                          _fail(t_14);
                        else
                          s_14 = t_14;
                      }
                      t = not_null(s_14);
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
ATerm sboundin_3 (ATerm t, ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm u_102 (ATerm))
{
  ATerm g_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, s_102, s_102);
      ;
      LocalPopChoice(h_8);
    }
  else
    {
      t = g_8;
      {
        ATerm i_8 = t;
        int j_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, u_102, u_102, s_102);
            ;
            LocalPopChoice(j_8);
          }
        else
          {
            t = i_8;
            {
              ATerm p_8 = t;
              int q_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4(t, u_102, u_102, u_102, s_102);
                  ;
                  LocalPopChoice(q_8);
                }
              else
                {
                  t = p_8;
                  t = Rec_2(t, u_102, s_102);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
  b_15 = t;
  a_15 :
  if(match_cons(b_15, sym_RDefT_4))
    {
      c_15 = ATgetArgument(b_15, 0);
      d_15 = ATgetArgument(b_15, 1);
      e_15 = ATgetArgument(b_15, 2);
      f_15 = ATgetArgument(b_15, 3);
      {
        t = not_null(d_15);
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
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
  n_15 = t;
  m_15 :
  if(match_cons(n_15, sym_SDefT_4))
    {
      o_15 = ATgetArgument(n_15, 0);
      p_15 = ATgetArgument(n_15, 1);
      q_15 = ATgetArgument(n_15, 2);
      r_15 = ATgetArgument(n_15, 3);
      {
        t = not_null(p_15);
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
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
  z_15 = t;
  y_15 :
  if(match_cons(z_15, sym_Rec_2))
    {
      a_16 = ATgetArgument(z_15, 0);
      b_16 = ATgetArgument(z_15, 1);
      t = (ATerm) ATinsert(ATempty, not_null(a_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declared_vars_0 (ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL;
    j_16 = t;
    h_16 :
    if(match_cons(j_16, sym_VarDec_2))
      {
        k_16 = ATgetArgument(j_16, 0);
        i_16 = ATgetArgument(j_16, 1);
        t = not_null(k_16);
      }
    else
      {
        if(match_cons(j_16, sym_DefaultVarDec_1))
          {
            k_16 = ATgetArgument(j_16, 0);
            t = not_null(k_16);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1(t, o_0);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  r_16 = t;
  q_16 :
  if(match_cons(r_16, sym_SDef_3))
    {
      s_16 = ATgetArgument(r_16, 0);
      t_16 = ATgetArgument(r_16, 1);
      u_16 = ATgetArgument(r_16, 2);
      {
        t = not_null(t_16);
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
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
  e_17 = t;
  d_17 :
  if(match_cons(e_17, sym_Let_2))
    {
      f_17 = ATgetArgument(e_17, 0);
      g_17 = ATgetArgument(e_17, 1);
      {
        t = not_null(f_17);
        {
          ATerm r_0 (ATerm t)
          {
            ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
            j_17 = t;
            c_17 :
            if(match_cons(j_17, sym_SDef_3))
              {
                k_17 = ATgetArgument(j_17, 0);
                l_17 = ATgetArgument(j_17, 1);
                m_17 = ATgetArgument(j_17, 2);
                t = not_null(k_17);
              }
            else
              {
                if(match_cons(j_17, sym_SDefT_4))
                  {
                    k_17 = ATgetArgument(j_17, 0);
                    l_17 = ATgetArgument(j_17, 1);
                    m_17 = ATgetArgument(j_17, 2);
                    n_17 = ATgetArgument(j_17, 3);
                    t = not_null(k_17);
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, r_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm c_112 (ATerm), ATerm d_112 (ATerm), ATerm e_112 (ATerm))
{
  ATerm x_17 = NULL;
  ATerm z_17 = NULL;
  x_17 = t;
  {
    ATerm a_18 = NULL;
    ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL;
    t = not_null(x_17);
    {
      a_18 = t;
      {
        t = SSL_explode_term(not_null(a_18));
        {
          c_18 = t;
          w_17 :
          if(match_cons(c_18, sym__2))
            {
              d_18 = ATgetArgument(c_18, 0);
              e_18 = ATgetArgument(c_18, 1);
              if(((z_17 != NULL) && (z_17 != e_18)))
                _fail(e_18);
              else
                z_17 = e_18;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_17);
      t = foldr_3(t, c_112, d_112, e_112);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm a_118 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm b_118 (ATerm))
{
  ATerm l_18 (ATerm t)
  {
    ATerm s_0 (ATerm t)
    {
      ATerm r_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_117(t);
          ;
          LocalPopChoice(u_8);
        }
      else
        {
          t = r_8;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm t_0 (ATerm t)
    {
      ATerm v_8 = t;
      int w_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_18 = NULL;
          ATerm x_8;
          x_8 = t;
          {
            ATerm k_18 = NULL;
            t = z_117(t);
            {
              k_18 = t;
              if(((j_18 != NULL) && (j_18 != k_18)))
                _fail(k_18);
              else
                j_18 = k_18;
            }
          }
          t = x_8;
          {
            ATerm u_0 (ATerm t)
            {
              ATerm w_0 (ATerm t)
              {
                t = not_null(j_18);
                return(t);
              }
              t = split_2(t, l_18, w_0);
              t = diff_1(t, b_118);
              return(t);
            }
            ATerm v_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = a_118(t, u_0, l_18, v_0);
            {
              ATerm x_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, x_0, union_0, _id);
            }
          }
          ;
          LocalPopChoice(w_8);
        }
      else
        {
          t = v_8;
          {
            ATerm y_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, y_0, union_0, l_18);
          }
        }
      return(t);
    }
    t = split_2(t, s_0, t_0);
    t = union_0(t);
    return(t);
  }
  t = l_18(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
    v_18 = t;
    q_18 :
    if(match_cons(v_18, sym_CallT_3))
      {
        w_18 = ATgetArgument(v_18, 0);
        y_18 = ATgetArgument(v_18, 1);
        z_18 = ATgetArgument(v_18, 2);
        r_18 :
        if(match_cons(w_18, sym_SVar_1))
          {
            x_18 = ATgetArgument(w_18, 0);
            {
              ATerm d_19 = NULL,f_19 = NULL;
              ATerm d_9;
              d_9 = t;
              {
                ATerm e_19 = NULL;
                t = not_null(y_18);
                {
                  t = length_0(t);
                  {
                    e_19 = t;
                    if(((d_19 != NULL) && (d_19 != e_19)))
                      _fail(e_19);
                    else
                      d_19 = e_19;
                  }
                }
              }
              t = d_9;
              {
                ATerm g_19 = NULL;
                t = not_null(z_18);
                {
                  t = length_0(t);
                  {
                    g_19 = t;
                    if(((f_19 != NULL) && (f_19 != g_19)))
                      _fail(g_19);
                    else
                      f_19 = g_19;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(x_18), (ATerm) ATmakeAppl(sym__2, not_null(d_19), not_null(f_19))));
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
  ATerm a_1 (ATerm t)
  {
    ATerm q_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(z_9);
      }
    else
      {
        t = q_9;
        {
          ATerm h_10 = t;
          int i_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(i_10);
            }
          else
            {
              t = h_10;
              {
                ATerm j_10 = t;
                int k_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0(t);
                    ;
                    LocalPopChoice(k_10);
                  }
                else
                  {
                    t = j_10;
                    {
                      ATerm l_10 = t;
                      int m_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0(t);
                          ;
                          LocalPopChoice(m_10);
                        }
                      else
                        {
                          t = l_10;
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
  ATerm b_1 (ATerm t)
  {
    ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
    h_19 = t;
    t_18 :
    if(match_cons(h_19, sym__2))
      {
        i_19 = ATgetArgument(h_19, 0);
        l_19 = ATgetArgument(h_19, 1);
        u_18 :
        if(match_cons(i_19, sym__2))
          {
            j_19 = ATgetArgument(i_19, 0);
            k_19 = ATgetArgument(i_19, 1);
            if(((j_19 != NULL) && (j_19 != l_19)))
              _fail(l_19);
            else
              j_19 = l_19;
          }
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
  t = free_vars2_4(t, z_0, a_1, sboundin_3, b_1);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm y_19 = NULL;
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
  y_19 = t;
  {
    ATerm d_20 = NULL;
    ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
    t = not_null(y_19);
    {
      d_20 = t;
      {
        t = SSL_explode_term(not_null(d_20));
        {
          f_20 = t;
          u_19 :
          if(match_cons(f_20, sym__2))
            {
              g_20 = ATgetArgument(f_20, 0);
              h_20 = ATgetArgument(f_20, 1);
              v_19 :
              if(match_string(g_20, ""))
                {
                  w_19 :
                  if(((ATgetType(h_20) == AT_LIST) && !(ATisEmpty(h_20))))
                    {
                      i_20 = ATgetFirst((ATermList) h_20);
                      j_20 = (ATerm) ATgetNext((ATermList) h_20);
                      x_19 :
                      if(((ATgetType(j_20) == AT_LIST) && !(ATisEmpty(j_20))))
                        {
                          k_20 = ATgetFirst((ATermList) j_20);
                          l_20 = (ATerm) ATgetNext((ATermList) j_20);
                          {
                            if(((a_20 != NULL) && (a_20 != i_20)))
                              _fail(i_20);
                            else
                              a_20 = i_20;
                            {
                              if(((c_20 != NULL) && (c_20 != k_20)))
                                _fail(k_20);
                              else
                                c_20 = k_20;
                              if(((b_20 != NULL) && (b_20 != l_20)))
                                _fail(l_20);
                              else
                                b_20 = l_20;
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
    t = not_null(c_20);
  }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    t = term_n_10;
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    ATerm r_20 = NULL,t_20 = NULL;
    ATerm o_10;
    o_10 = t;
    {
      ATerm s_20 = NULL;
      t = Fst_0(t);
      {
        s_20 = t;
        if(((r_20 != NULL) && (r_20 != s_20)))
          _fail(s_20);
        else
          r_20 = s_20;
      }
    }
    t = o_10;
    {
      ATerm u_20 = NULL;
      t = Snd_0(t);
      {
        u_20 = t;
        if(((t_20 != NULL) && (t_20 != u_20)))
          _fail(u_20);
        else
          t_20 = u_20;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_20), not_null(t_20));
    }
    return(t);
  }
  t = foldr_2(t, c_1, d_1);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  z_20 = t;
  y_20 :
  if(match_cons(z_20, sym_Var_1))
    {
      a_21 = ATgetArgument(z_20, 0);
      t = not_null(a_21);
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
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL;
  m_21 = t;
  f_21 :
  if(match_cons(m_21, sym_CallT_3))
    {
      n_21 = ATgetArgument(m_21, 0);
      p_21 = ATgetArgument(m_21, 1);
      l_21 = ATgetArgument(m_21, 2);
      g_21 :
      if(match_cons(n_21, sym_SVar_1))
        {
          o_21 = ATgetArgument(n_21, 0);
          h_21 :
          if(((ATgetType(p_21) == AT_LIST) && ATisEmpty(p_21)))
            {
              i_21 :
              if(((ATgetType(l_21) == AT_LIST) && ATisEmpty(l_21)))
                {
                  t = not_null(o_21);
                }
              else
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
      if(match_cons(m_21, sym_Call_2))
        {
          n_21 = ATgetArgument(m_21, 0);
          p_21 = ATgetArgument(m_21, 1);
          j_21 :
          if(match_cons(n_21, sym_SVar_1))
            {
              o_21 = ATgetArgument(n_21, 0);
              k_21 :
              if(((ATgetType(p_21) == AT_LIST) && ATisEmpty(p_21)))
                {
                  t = not_null(o_21);
                }
              else
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
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
  x_21 = t;
  v_21 :
  if(match_cons(x_21, sym__2))
    {
      y_21 = ATgetArgument(x_21, 0);
      z_21 = ATgetArgument(x_21, 1);
      w_21 :
      if(((ATgetType(z_21) == AT_LIST) && !(ATisEmpty(z_21))))
        {
          a_22 = ATgetFirst((ATermList) z_21);
          b_22 = (ATerm) ATgetNext((ATermList) z_21);
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_21), not_null(b_22));
        }
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
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL;
  j_22 = t;
  g_22 :
  if(match_cons(j_22, sym__2))
    {
      k_22 = ATgetArgument(j_22, 0);
      l_22 = ATgetArgument(j_22, 1);
      h_22 :
      if(((ATgetType(l_22) == AT_LIST) && !(ATisEmpty(l_22))))
        {
          m_22 = ATgetFirst((ATermList) l_22);
          p_22 = (ATerm) ATgetNext((ATermList) l_22);
          i_22 :
          if(match_cons(m_22, sym__2))
            {
              n_22 = ATgetArgument(m_22, 0);
              o_22 = ATgetArgument(m_22, 1);
              {
                ATerm r_22 = NULL;
                if(((k_22 != NULL) && (k_22 != n_22)))
                  _fail(n_22);
                else
                  k_22 = n_22;
                {
                  if(((r_22 != NULL) && (r_22 != o_22)))
                    _fail(o_22);
                  else
                    r_22 = o_22;
                  t = not_null(r_22);
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
  ATerm p_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(u_10);
    }
  else
    {
      t = p_10;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm l_103 (ATerm), ATerm m_103 (ATerm))
{
  ATerm x_22 = NULL;
  ATerm z_22 = NULL,a_23 = NULL;
  x_22 = t;
  {
    ATerm b_23 = NULL;
    t = not_null(x_22);
    {
      ATerm c_23 = NULL;
      t = l_103(t);
      {
        b_23 = t;
        {
          if(((z_22 != NULL) && (z_22 != b_23)))
            _fail(b_23);
          else
            z_22 = b_23;
          {
            t = m_103(t);
            {
              c_23 = t;
              if(((a_23 != NULL) && (a_23 != c_23)))
                _fail(c_23);
              else
                a_23 = c_23;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_22), not_null(a_23));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm f_105 (ATerm))
{
  ATerm g_23 (ATerm t)
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_105(t);
        ;
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        t = _all(t, g_23);
      }
    return(t);
  }
  t = g_23(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
  l_23 = t;
  k_23 :
  if(match_cons(l_23, sym__2))
    {
      m_23 = ATgetArgument(l_23, 0);
      n_23 = ATgetArgument(l_23, 1);
      {
        ATerm q_23 = NULL;
        if(((q_23 != NULL) && (q_23 != n_23)))
          _fail(n_23);
        else
          q_23 = n_23;
      }
    }
  else
    {
      if(match_cons(l_23, sym__3))
        {
          m_23 = ATgetArgument(l_23, 0);
          n_23 = ATgetArgument(l_23, 1);
          o_23 = ATgetArgument(l_23, 2);
          {
            ATerm w_23 = NULL;
            ATerm x_23 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_23), not_null(n_23));
            {
              t = zip_1(t, _id);
              {
                x_23 = t;
                if(((w_23 != NULL) && (w_23 != x_23)))
                  _fail(x_23);
                else
                  w_23 = x_23;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_23), not_null(o_23));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm w_102 (ATerm), ATerm x_102 (ATerm))
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
  t = subs_args_0(t);
  {
    d_24 = t;
    c_24 :
    if(match_cons(d_24, sym__2))
      {
        e_24 = ATgetArgument(d_24, 0);
        f_24 = ATgetArgument(d_24, 1);
        {
          t = not_null(f_24);
          {
            ATerm e_1 (ATerm t)
            {
              ATerm f_1 (ATerm t)
              {
                t = not_null(e_24);
                return(t);
              }
              t = SubsVar_2(t, w_102, f_1);
              t = x_102(t);
              return(t);
            }
            t = alltd_1(t, e_1);
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
ATerm substitute_1 (ATerm t, ATerm y_102 (ATerm))
{
  t = substitute_2(t, y_102, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm u_94 (ATerm), ATerm v_94 (ATerm))
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  p_24 = t;
  o_24 :
  if(match_cons(p_24, sym_VarDec_2))
    {
      q_24 = ATgetArgument(p_24, 0);
      r_24 = ATgetArgument(p_24, 1);
      {
        ATerm v_24 = NULL,x_24 = NULL;
        ATerm w_24 = NULL;
        t = SSLgetAnnotations(not_null(p_24));
        {
          w_24 = t;
          if(((v_24 != NULL) && (v_24 != w_24)))
            _fail(w_24);
          else
            v_24 = w_24;
        }
        {
          t = not_null(q_24);
          {
            ATerm z_24 = NULL;
            t = u_94(t);
            {
              x_24 = t;
              {
                t = not_null(r_24);
                {
                  ATerm b_25 = NULL;
                  t = v_94(t);
                  {
                    z_24 = t;
                    {
                      ATerm c_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(x_24), not_null(z_24)), not_null(v_24));
                      {
                        c_25 = t;
                        if(((b_25 != NULL) && (b_25 != c_25)))
                          _fail(c_25);
                        else
                          b_25 = c_25;
                      }
                      t = not_null(b_25);
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
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
  e_26 = t;
  c_26 :
  if(((ATgetType(e_26) == AT_LIST) && !(ATisEmpty(e_26))))
    {
      f_26 = ATgetFirst((ATermList) e_26);
      k_26 = (ATerm) ATgetNext((ATermList) e_26);
      d_26 :
      if(match_cons(f_26, sym_SDefT_4))
        {
          g_26 = ATgetArgument(f_26, 0);
          h_26 = ATgetArgument(f_26, 1);
          i_26 = ATgetArgument(f_26, 2);
          j_26 = ATgetArgument(f_26, 3);
          {
            ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,g_28 = NULL;
            ATerm a_11;
            a_11 = t;
            {
              ATerm v_26 = NULL;
              t = not_null(h_26);
              {
                ATerm w_26 = NULL;
                ATerm g_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, g_1);
                {
                  v_26 = t;
                  {
                    if(((q_26 != NULL) && (q_26 != v_26)))
                      _fail(v_26);
                    else
                      q_26 = v_26;
                    {
                      t = not_null(i_26);
                      {
                        ATerm c_27 = NULL;
                        ATerm h_1 (ATerm t)
                        {
                          t = VarDec_2(t, new_0, _id);
                          return(t);
                        }
                        t = map_1(t, h_1);
                        {
                          w_26 = t;
                          {
                            if(((r_26 != NULL) && (r_26 != w_26)))
                              _fail(w_26);
                            else
                              r_26 = w_26;
                            {
                              t = not_null(q_26);
                              {
                                ATerm i_27 = NULL;
                                ATerm i_1 (ATerm t)
                                {
                                  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
                                  x_26 = t;
                                  m_25 :
                                  if(match_cons(x_26, sym_VarDec_2))
                                    {
                                      y_26 = ATgetArgument(x_26, 0);
                                      z_26 = ATgetArgument(x_26, 1);
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_26)), (ATerm)ATempty, (ATerm) ATempty);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, i_1);
                                {
                                  c_27 = t;
                                  {
                                    if(((s_26 != NULL) && (s_26 != c_27)))
                                      _fail(c_27);
                                    else
                                      s_26 = c_27;
                                    {
                                      t = not_null(r_26);
                                      {
                                        ATerm f_28 = NULL;
                                        ATerm j_1 (ATerm t)
                                        {
                                          ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
                                          d_27 = t;
                                          p_25 :
                                          if(match_cons(d_27, sym_VarDec_2))
                                            {
                                              e_27 = ATgetArgument(d_27, 0);
                                              f_27 = ATgetArgument(d_27, 1);
                                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_27));
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                          return(t);
                                        }
                                        t = map_1(t, j_1);
                                        {
                                          i_27 = t;
                                          {
                                            if(((t_26 != NULL) && (t_26 != i_27)))
                                              _fail(i_27);
                                            else
                                              t_26 = i_27;
                                            {
                                              t = not_null(e_26);
                                              {
                                                ATerm k_1 (ATerm t)
                                                {
                                                  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
                                                  j_27 = t;
                                                  z_25 :
                                                  if(match_cons(j_27, sym_SDefT_4))
                                                    {
                                                      k_27 = ATgetArgument(j_27, 0);
                                                      l_27 = ATgetArgument(j_27, 1);
                                                      m_27 = ATgetArgument(j_27, 2);
                                                      n_27 = ATgetArgument(j_27, 3);
                                                      {
                                                        ATerm r_27 = NULL,x_27 = NULL;
                                                        ATerm c_11;
                                                        c_11 = t;
                                                        {
                                                          ATerm w_27 = NULL;
                                                          t = not_null(m_27);
                                                          {
                                                            ATerm l_1 (ATerm t)
                                                            {
                                                              ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
                                                              s_27 = t;
                                                              t_25 :
                                                              if(match_cons(s_27, sym_VarDec_2))
                                                                {
                                                                  t_27 = ATgetArgument(s_27, 0);
                                                                  u_27 = ATgetArgument(s_27, 1);
                                                                  t = not_null(t_27);
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            t = map_1(t, l_1);
                                                            {
                                                              w_27 = t;
                                                              if(((r_27 != NULL) && (r_27 != w_27)))
                                                                _fail(w_27);
                                                              else
                                                                r_27 = w_27;
                                                            }
                                                          }
                                                        }
                                                        t = c_11;
                                                        {
                                                          ATerm y_27 = NULL,e_28 = NULL;
                                                          ATerm d_28 = NULL;
                                                          t = not_null(l_27);
                                                          {
                                                            ATerm m_1 (ATerm t)
                                                            {
                                                              ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
                                                              z_27 = t;
                                                              w_25 :
                                                              if(match_cons(z_27, sym_VarDec_2))
                                                                {
                                                                  a_28 = ATgetArgument(z_27, 0);
                                                                  b_28 = ATgetArgument(z_27, 1);
                                                                  t = not_null(a_28);
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            t = map_1(t, m_1);
                                                            {
                                                              d_28 = t;
                                                              if(((y_27 != NULL) && (y_27 != d_28)))
                                                                _fail(d_28);
                                                              else
                                                                y_27 = d_28;
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym__3, not_null(y_27), not_null(s_26), not_null(n_27));
                                                            {
                                                              t = ssubs_0(t);
                                                              {
                                                                e_28 = t;
                                                                if(((x_27 != NULL) && (x_27 != e_28)))
                                                                  _fail(e_28);
                                                                else
                                                                  x_27 = e_28;
                                                              }
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym__3, not_null(r_27), not_null(t_26), not_null(x_27));
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
                                                t = map_1(t, k_1);
                                                {
                                                  f_28 = t;
                                                  if(((u_26 != NULL) && (u_26 != f_28)))
                                                    _fail(f_28);
                                                  else
                                                    u_26 = f_28;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = a_11;
            {
              ATerm h_28 = NULL;
              t = not_null(u_26);
              {
                t = choices_0(t);
                {
                  h_28 = t;
                  if(((g_28 != NULL) && (g_28 != h_28)))
                    _fail(h_28);
                  else
                    g_28 = h_28;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(g_26), not_null(q_26), not_null(r_26), not_null(g_28));
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
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
  a_29 = t;
  y_28 :
  if(((ATgetType(a_29) == AT_LIST) && !(ATisEmpty(a_29))))
    {
      b_29 = ATgetFirst((ATermList) a_29);
      c_29 = (ATerm) ATgetNext((ATermList) a_29);
      z_28 :
      if(((ATgetType(c_29) == AT_LIST) && ATisEmpty(c_29)))
        {
          t = not_null(b_29);
        }
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
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
  j_29 = t;
  h_29 :
  if(match_cons(j_29, sym__2))
    {
      k_29 = ATgetArgument(j_29, 0);
      n_29 = ATgetArgument(j_29, 1);
      i_29 :
      if(match_cons(k_29, sym__2))
        {
          l_29 = ATgetArgument(k_29, 0);
          m_29 = ATgetArgument(k_29, 1);
          {
            ATerm r_29 = NULL;
            ATerm s_29 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_29), not_null(m_29));
            {
              t = Definitions_0(t);
              {
                s_29 = t;
                if(((r_29 != NULL) && (r_29 != s_29)))
                  _fail(s_29);
                else
                  r_29 = s_29;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_29), not_null(n_29));
          }
        }
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
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
  n_30 = t;
  l_30 :
  if(match_cons(n_30, sym_ExplodeCong_2))
    {
      o_30 = ATgetArgument(n_30, 0);
      m_30 = ATgetArgument(n_30, 1);
      {
        ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL;
        ATerm v_30 = NULL;
        ATerm w_30 = NULL;
        t = new_0(t);
        {
          v_30 = t;
          {
            if(((r_30 != NULL) && (r_30 != v_30)))
              _fail(v_30);
            else
              r_30 = v_30;
            {
              ATerm x_30 = NULL;
              t = new_0(t);
              {
                w_30 = t;
                {
                  if(((s_30 != NULL) && (s_30 != w_30)))
                    _fail(w_30);
                  else
                    s_30 = w_30;
                  {
                    ATerm y_30 = NULL;
                    t = new_0(t);
                    {
                      x_30 = t;
                      {
                        if(((t_30 != NULL) && (t_30 != x_30)))
                          _fail(x_30);
                        else
                          t_30 = x_30;
                        {
                          t = new_0(t);
                          {
                            y_30 = t;
                            if(((u_30 != NULL) && (u_30 != y_30)))
                              _fail(y_30);
                            else
                              u_30 = y_30;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_30)), not_null(t_30)), not_null(s_30)), not_null(r_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_30)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(o_30), (ATerm)ATmakeAppl(sym_Var_1, not_null(r_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_30))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(m_30), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_30))))), (ATerm) ATmakeAppl(sym_PrimT_3, term_h_11, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_30))), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_30)))))));
      }
    }
  else
    {
      if(match_cons(n_30, sym_Build_1))
        {
          o_30 = ATgetArgument(n_30, 0);
          {
            ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL;
            ATerm e_31 = NULL;
            ATerm i_31 = NULL;
            t = new_0(t);
            {
              e_31 = t;
              {
                if(((c_31 != NULL) && (c_31 != e_31)))
                  _fail(e_31);
                else
                  c_31 = e_31;
                {
                  t = not_null(o_30);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
                      f_31 = t;
                      e_30 :
                      if(match_cons(f_31, sym_Explode_2))
                        {
                          g_31 = ATgetArgument(f_31, 0);
                          h_31 = ATgetArgument(f_31, 1);
                          {
                            if(((a_31 != NULL) && (a_31 != g_31)))
                              _fail(g_31);
                            else
                              a_31 = g_31;
                            {
                              if(((b_31 != NULL) && (b_31 != h_31)))
                                _fail(h_31);
                              else
                                b_31 = h_31;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_31));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, n_1);
                    {
                      i_31 = t;
                      if(((d_31 != NULL) && (d_31 != i_31)))
                        _fail(i_31);
                      else
                        d_31 = i_31;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_h_11, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_31)), not_null(a_31))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_31))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_31)))));
          }
        }
      else
        {
          if(match_cons(n_30, sym_Match_1))
            {
              o_30 = ATgetArgument(n_30, 0);
              {
                ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
                ATerm p_31 = NULL;
                ATerm q_31 = NULL;
                t = new_0(t);
                {
                  p_31 = t;
                  {
                    if(((m_31 != NULL) && (m_31 != p_31)))
                      _fail(p_31);
                    else
                      m_31 = p_31;
                    {
                      ATerm u_31 = NULL;
                      t = new_0(t);
                      {
                        q_31 = t;
                        {
                          if(((n_31 != NULL) && (n_31 != q_31)))
                            _fail(q_31);
                          else
                            n_31 = q_31;
                          {
                            t = not_null(o_30);
                            {
                              ATerm o_1 (ATerm t)
                              {
                                ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
                                r_31 = t;
                                j_30 :
                                if(match_cons(r_31, sym_Explode_2))
                                  {
                                    s_31 = ATgetArgument(r_31, 0);
                                    t_31 = ATgetArgument(r_31, 1);
                                    {
                                      if(((k_31 != NULL) && (k_31 != s_31)))
                                        _fail(s_31);
                                      else
                                        k_31 = s_31;
                                      {
                                        if(((l_31 != NULL) && (l_31 != t_31)))
                                          _fail(t_31);
                                        else
                                          l_31 = t_31;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_31));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, o_1);
                              {
                                u_31 = t;
                                if(((o_31 != NULL) && (o_31 != u_31)))
                                  _fail(u_31);
                                else
                                  o_31 = u_31;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_31)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_31))), (ATerm) ATmakeAppl(sym_PrimT_3, term_i_11, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_31)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_31)), (ATerm) ATmakeAppl(sym_Op_2, term_j_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_31)), not_null(k_31)))))));
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
  ATerm z_32 = NULL,a_33 = NULL;
  z_32 = t;
  y_32 :
  if(match_cons(z_32, sym_Match_1))
    {
      a_33 = ATgetArgument(z_32, 0);
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL;
            ATerm g_33 = NULL;
            ATerm k_33 = NULL;
            t = new_0(t);
            {
              g_33 = t;
              {
                if(((e_33 != NULL) && (e_33 != g_33)))
                  _fail(g_33);
                else
                  e_33 = g_33;
                {
                  t = not_null(a_33);
                  {
                    ATerm p_1 (ATerm t)
                    {
                      ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
                      h_33 = t;
                      o_32 :
                      if(match_cons(h_33, sym_Anno_2))
                        {
                          i_33 = ATgetArgument(h_33, 0);
                          j_33 = ATgetArgument(h_33, 1);
                          {
                            if(((c_33 != NULL) && (c_33 != i_33)))
                              _fail(i_33);
                            else
                              c_33 = i_33;
                            {
                              if(((d_33 != NULL) && (d_33 != j_33)))
                                _fail(j_33);
                              else
                                d_33 = j_33;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_33)), not_null(c_33));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, p_1);
                    {
                      k_33 = t;
                      if(((f_33 != NULL) && (f_33 != k_33)))
                        _fail(k_33);
                      else
                        f_33 = k_33;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_33)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_m_11, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_33)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(d_33))))));
            ;
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
            {
              ATerm n_11 = t;
              int o_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
                  ATerm p_33 = NULL;
                  ATerm s_33 = NULL;
                  t = new_0(t);
                  {
                    p_33 = t;
                    {
                      if(((n_33 != NULL) && (n_33 != p_33)))
                        _fail(p_33);
                      else
                        n_33 = p_33;
                      {
                        t = not_null(a_33);
                        {
                          ATerm q_1 (ATerm t)
                          {
                            ATerm q_33 = NULL,r_33 = NULL;
                            q_33 = t;
                            s_32 :
                            if(match_cons(q_33, sym_RootApp_1))
                              {
                                r_33 = ATgetArgument(q_33, 0);
                                {
                                  if(((m_33 != NULL) && (m_33 != r_33)))
                                    _fail(r_33);
                                  else
                                    m_33 = r_33;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_33));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, q_1);
                          {
                            s_33 = t;
                            if(((o_33 != NULL) && (o_33 != s_33)))
                              _fail(s_33);
                            else
                              o_33 = s_33;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_33))), not_null(m_33))));
                  ;
                  LocalPopChoice(o_11);
                }
              else
                {
                  t = n_11;
                  {
                    ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL;
                    ATerm y_33 = NULL;
                    ATerm c_34 = NULL;
                    t = new_0(t);
                    {
                      y_33 = t;
                      {
                        if(((w_33 != NULL) && (w_33 != y_33)))
                          _fail(y_33);
                        else
                          w_33 = y_33;
                        {
                          t = not_null(a_33);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
                              z_33 = t;
                              w_32 :
                              if(match_cons(z_33, sym_App_2))
                                {
                                  a_34 = ATgetArgument(z_33, 0);
                                  b_34 = ATgetArgument(z_33, 1);
                                  {
                                    if(((v_33 != NULL) && (v_33 != a_34)))
                                      _fail(a_34);
                                    else
                                      v_33 = a_34;
                                    {
                                      if(((u_33 != NULL) && (u_33 != b_34)))
                                        _fail(b_34);
                                      else
                                        u_33 = b_34;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_33));
                                    }
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
                              c_34 = t;
                              if(((x_33 != NULL) && (x_33 != c_34)))
                                _fail(c_34);
                              else
                                x_33 = c_34;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_33))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_33)), not_null(v_33)))));
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
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
  t_34 = t;
  r_34 :
  if(match_cons(t_34, sym_Match_1))
    {
      u_34 = ATgetArgument(t_34, 0);
      s_34 :
      if(match_cons(u_34, sym_RootApp_1))
        {
          v_34 = ATgetArgument(u_34, 0);
          t = not_null(v_34);
        }
      else
        {
          if(match_cons(u_34, sym_App_2))
            {
              v_34 = ATgetArgument(u_34, 0);
              w_34 = ATgetArgument(u_34, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(v_34), not_null(w_34));
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
  ATerm i_35 = NULL,j_35 = NULL;
  i_35 = t;
  h_35 :
  if(match_cons(i_35, sym_Match_1))
    {
      j_35 = ATgetArgument(i_35, 0);
      {
        ATerm l_35 = NULL,m_35 = NULL;
        ATerm q_35 = NULL;
        t = not_null(j_35);
        {
          ATerm s_1 (ATerm t)
          {
            ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
            n_35 = t;
            e_35 :
            if(match_cons(n_35, sym_RootApp_1))
              {
                o_35 = ATgetArgument(n_35, 0);
                f_35 :
                if(match_cons(o_35, sym_Match_1))
                  {
                    p_35 = ATgetArgument(o_35, 0);
                    {
                      if(((l_35 != NULL) && (l_35 != p_35)))
                        _fail(p_35);
                      else
                        l_35 = p_35;
                      t = not_null(l_35);
                    }
                  }
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
            q_35 = t;
            if(((m_35 != NULL) && (m_35 != q_35)))
              _fail(q_35);
            else
              m_35 = q_35;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(m_35));
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
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      {
        ATerm x_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            ;
            LocalPopChoice(y_11);
          }
        else
          {
            t = x_11;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL;
  o_36 = t;
  n_36 :
  if(match_cons(o_36, sym_Build_1))
    {
      p_36 = ATgetArgument(o_36, 0);
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL;
            ATerm v_36 = NULL;
            ATerm z_36 = NULL;
            t = new_0(t);
            {
              v_36 = t;
              {
                if(((t_36 != NULL) && (t_36 != v_36)))
                  _fail(v_36);
                else
                  t_36 = v_36;
                {
                  t = not_null(p_36);
                  {
                    ATerm t_1 (ATerm t)
                    {
                      ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL;
                      w_36 = t;
                      z_35 :
                      if(match_cons(w_36, sym_Anno_2))
                        {
                          x_36 = ATgetArgument(w_36, 0);
                          y_36 = ATgetArgument(w_36, 1);
                          {
                            if(((r_36 != NULL) && (r_36 != x_36)))
                              _fail(x_36);
                            else
                              r_36 = x_36;
                            {
                              if(((s_36 != NULL) && (s_36 != y_36)))
                                _fail(y_36);
                              else
                                s_36 = y_36;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_36));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, t_1);
                    {
                      z_36 = t;
                      if(((u_36 != NULL) && (u_36 != z_36)))
                        _fail(z_36);
                      else
                        u_36 = z_36;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_b_12, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_36)), not_null(r_36))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_36))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_36))));
            ;
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            {
              ATerm f_12 = t;
              int h_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL;
                  ATerm l_37 = NULL;
                  ATerm s_37 = NULL;
                  t = new_0(t);
                  {
                    l_37 = t;
                    {
                      if(((c_37 != NULL) && (c_37 != l_37)))
                        _fail(l_37);
                      else
                        c_37 = l_37;
                      {
                        t = not_null(p_36);
                        {
                          ATerm u_1 (ATerm t)
                          {
                            ATerm q_37 = NULL,r_37 = NULL;
                            q_37 = t;
                            d_36 :
                            if(match_cons(q_37, sym_RootApp_1))
                              {
                                r_37 = ATgetArgument(q_37, 0);
                                {
                                  if(((b_37 != NULL) && (b_37 != r_37)))
                                    _fail(r_37);
                                  else
                                    b_37 = r_37;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_37));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, u_1);
                          {
                            s_37 = t;
                            if(((d_37 != NULL) && (d_37 != s_37)))
                              _fail(s_37);
                            else
                              d_37 = s_37;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_37)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_37), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_37))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_37))));
                  ;
                  LocalPopChoice(h_12);
                }
              else
                {
                  t = f_12;
                  {
                    ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL;
                    ATerm c_38 = NULL;
                    ATerm j_38 = NULL;
                    t = new_0(t);
                    {
                      c_38 = t;
                      {
                        if(((a_38 != NULL) && (a_38 != c_38)))
                          _fail(c_38);
                        else
                          a_38 = c_38;
                        {
                          t = not_null(p_36);
                          {
                            ATerm v_1 (ATerm t)
                            {
                              ATerm d_38 = NULL,h_38 = NULL,i_38 = NULL;
                              d_38 = t;
                              h_36 :
                              if(match_cons(d_38, sym_App_2))
                                {
                                  h_38 = ATgetArgument(d_38, 0);
                                  i_38 = ATgetArgument(d_38, 1);
                                  {
                                    if(((y_37 != NULL) && (y_37 != h_38)))
                                      _fail(h_38);
                                    else
                                      y_37 = h_38;
                                    {
                                      if(((z_37 != NULL) && (z_37 != i_38)))
                                        _fail(i_38);
                                      else
                                        z_37 = i_38;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_38));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, v_1);
                            {
                              j_38 = t;
                              if(((b_38 != NULL) && (b_38 != j_38)))
                                _fail(j_38);
                              else
                                b_38 = j_38;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(y_37), not_null(z_37), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_38)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_38))));
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
  ATerm l_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL;
  l_39 = t;
  j_39 :
  if(match_cons(l_39, sym_Build_1))
    {
      r_39 = ATgetArgument(l_39, 0);
      k_39 :
      if(match_cons(r_39, sym_RootApp_1))
        {
          s_39 = ATgetArgument(r_39, 0);
          t = not_null(s_39);
        }
      else
        {
          if(match_cons(r_39, sym_App_2))
            {
              s_39 = ATgetArgument(r_39, 0);
              t_39 = ATgetArgument(r_39, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_39)), not_null(s_39));
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
ATerm As_2 (ATerm t, ATerm q_89 (ATerm), ATerm r_89 (ATerm))
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL;
  h_40 = t;
  g_40 :
  if(match_cons(h_40, sym_As_2))
    {
      i_40 = ATgetArgument(h_40, 0);
      j_40 = ATgetArgument(h_40, 1);
      {
        ATerm n_40 = NULL,p_40 = NULL;
        ATerm o_40 = NULL;
        t = SSLgetAnnotations(not_null(h_40));
        {
          o_40 = t;
          if(((n_40 != NULL) && (n_40 != o_40)))
            _fail(o_40);
          else
            n_40 = o_40;
        }
        {
          t = not_null(i_40);
          {
            ATerm r_40 = NULL;
            t = q_89(t);
            {
              p_40 = t;
              {
                t = not_null(j_40);
                {
                  ATerm t_40 = NULL;
                  t = r_89(t);
                  {
                    r_40 = t;
                    {
                      ATerm u_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(p_40), not_null(r_40)), not_null(n_40));
                      {
                        u_40 = t;
                        if(((t_40 != NULL) && (t_40 != u_40)))
                          _fail(u_40);
                        else
                          t_40 = u_40;
                      }
                      t = not_null(t_40);
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
ATerm PrimT_3 (ATerm t, ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm r_93 (ATerm))
{
  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL;
  h_41 = t;
  g_41 :
  if(match_cons(h_41, sym_PrimT_3))
    {
      i_41 = ATgetArgument(h_41, 0);
      j_41 = ATgetArgument(h_41, 1);
      k_41 = ATgetArgument(h_41, 2);
      {
        ATerm p_41 = NULL,r_41 = NULL;
        ATerm q_41 = NULL;
        t = SSLgetAnnotations(not_null(h_41));
        {
          q_41 = t;
          if(((p_41 != NULL) && (p_41 != q_41)))
            _fail(q_41);
          else
            p_41 = q_41;
        }
        {
          t = not_null(i_41);
          {
            ATerm x_41 = NULL;
            t = p_93(t);
            {
              r_41 = t;
              {
                t = not_null(j_41);
                {
                  ATerm z_41 = NULL;
                  t = q_93(t);
                  {
                    x_41 = t;
                    {
                      t = not_null(k_41);
                      {
                        ATerm b_42 = NULL;
                        t = r_93(t);
                        {
                          z_41 = t;
                          {
                            ATerm c_42 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(r_41), not_null(x_41), not_null(z_41)), not_null(p_41));
                            {
                              c_42 = t;
                              if(((b_42 != NULL) && (b_42 != c_42)))
                                _fail(c_42);
                              else
                                b_42 = c_42;
                            }
                            t = not_null(b_42);
                          }
                        }
                      }
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
ATerm Explode_2 (ATerm t, ATerm j_89 (ATerm), ATerm k_89 (ATerm))
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
  x_42 = t;
  w_42 :
  if(match_cons(x_42, sym_Explode_2))
    {
      y_42 = ATgetArgument(x_42, 0);
      z_42 = ATgetArgument(x_42, 1);
      {
        ATerm d_43 = NULL,f_43 = NULL;
        ATerm e_43 = NULL;
        t = SSLgetAnnotations(not_null(x_42));
        {
          e_43 = t;
          if(((d_43 != NULL) && (d_43 != e_43)))
            _fail(e_43);
          else
            d_43 = e_43;
        }
        {
          t = not_null(y_42);
          {
            ATerm h_43 = NULL;
            t = j_89(t);
            {
              f_43 = t;
              {
                t = not_null(z_42);
                {
                  ATerm j_43 = NULL;
                  t = k_89(t);
                  {
                    h_43 = t;
                    {
                      ATerm k_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(f_43), not_null(h_43)), not_null(d_43));
                      {
                        k_43 = t;
                        if(((j_43 != NULL) && (j_43 != k_43)))
                          _fail(k_43);
                        else
                          j_43 = k_43;
                      }
                      t = not_null(j_43);
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
ATerm Op_2 (ATerm t, ATerm f_89 (ATerm), ATerm g_89 (ATerm))
{
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
  b_44 = t;
  a_44 :
  if(match_cons(b_44, sym_Op_2))
    {
      c_44 = ATgetArgument(b_44, 0);
      d_44 = ATgetArgument(b_44, 1);
      {
        ATerm n_44 = NULL,p_44 = NULL;
        ATerm o_44 = NULL;
        t = SSLgetAnnotations(not_null(b_44));
        {
          o_44 = t;
          if(((n_44 != NULL) && (n_44 != o_44)))
            _fail(o_44);
          else
            n_44 = o_44;
        }
        {
          t = not_null(c_44);
          {
            ATerm v_44 = NULL;
            t = f_89(t);
            {
              p_44 = t;
              {
                t = not_null(d_44);
                {
                  ATerm c_45 = NULL;
                  t = g_89(t);
                  {
                    v_44 = t;
                    {
                      ATerm d_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(p_44), not_null(v_44)), not_null(n_44));
                      {
                        d_45 = t;
                        if(((c_45 != NULL) && (c_45 != d_45)))
                          _fail(d_45);
                        else
                          c_45 = d_45;
                      }
                      t = not_null(c_45);
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
ATerm pat_td_1 (ATerm t, ATerm p_132 (ATerm))
{
  ATerm j_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_132(t);
      ;
      LocalPopChoice(l_12);
    }
  else
    {
      t = j_12;
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_1 (ATerm t)
            {
              ATerm x_1 (ATerm t)
              {
                t = pat_td_1(t, p_132);
                return(t);
              }
              t = fetch_1(t, x_1);
              return(t);
            }
            t = Op_2(t, _id, w_1);
            ;
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            {
              ATerm q_12 = t;
              int r_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_1 (ATerm t)
                  {
                    t = pat_td_1(t, p_132);
                    return(t);
                  }
                  t = Explode_2(t, _id, y_1);
                  ;
                  LocalPopChoice(r_12);
                }
              else
                {
                  t = q_12;
                  {
                    ATerm s_12 = t;
                    int t_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_1 (ATerm t)
                        {
                          t = pat_td_1(t, p_132);
                          return(t);
                        }
                        t = Explode_2(t, z_1, _id);
                        ;
                        LocalPopChoice(t_12);
                      }
                    else
                      {
                        t = s_12;
                        {
                          ATerm u_12 = t;
                          int v_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_2 (ATerm t)
                              {
                                ATerm b_2 (ATerm t)
                                {
                                  t = pat_td_1(t, p_132);
                                  return(t);
                                }
                                t = fetch_1(t, b_2);
                                return(t);
                              }
                              t = PrimT_3(t, _id, _id, a_2);
                              ;
                              LocalPopChoice(v_12);
                            }
                          else
                            {
                              t = u_12;
                              {
                                ATerm c_2 (ATerm t)
                                {
                                  t = pat_td_1(t, p_132);
                                  return(t);
                                }
                                t = As_2(t, _id, c_2);
                              }
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
  ATerm u_45 = NULL,v_45 = NULL;
  u_45 = t;
  t_45 :
  if(match_cons(u_45, sym_Build_1))
    {
      v_45 = ATgetArgument(u_45, 0);
      {
        ATerm w_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_46 = NULL,g_46 = NULL;
            ATerm k_46 = NULL;
            t = not_null(v_45);
            {
              ATerm d_2 (ATerm t)
              {
                ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
                h_46 = t;
                m_45 :
                if(match_cons(h_46, sym_RootApp_1))
                  {
                    i_46 = ATgetArgument(h_46, 0);
                    n_45 :
                    if(match_cons(i_46, sym_Build_1))
                      {
                        j_46 = ATgetArgument(i_46, 0);
                        {
                          if(((b_46 != NULL) && (b_46 != j_46)))
                            _fail(j_46);
                          else
                            b_46 = j_46;
                          t = not_null(b_46);
                        }
                      }
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
                k_46 = t;
                if(((g_46 != NULL) && (g_46 != k_46)))
                  _fail(k_46);
                else
                  g_46 = k_46;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(g_46));
            ;
            LocalPopChoice(x_12);
          }
        else
          {
            t = w_12;
            {
              ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL;
              ATerm a_47 = NULL;
              t = not_null(v_45);
              {
                ATerm e_2 (ATerm t)
                {
                  ATerm p_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL;
                  p_46 = t;
                  q_45 :
                  if(match_cons(p_46, sym_App_2))
                    {
                      x_46 = ATgetArgument(p_46, 0);
                      z_46 = ATgetArgument(p_46, 1);
                      r_45 :
                      if(match_cons(x_46, sym_Build_1))
                        {
                          y_46 = ATgetArgument(x_46, 0);
                          {
                            if(((n_46 != NULL) && (n_46 != y_46)))
                              _fail(y_46);
                            else
                              n_46 = y_46;
                            {
                              if(((m_46 != NULL) && (m_46 != z_46)))
                                _fail(z_46);
                              else
                                m_46 = z_46;
                              t = not_null(n_46);
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
                t = pat_td_1(t, e_2);
                {
                  a_47 = t;
                  if(((o_46 != NULL) && (o_46 != a_47)))
                    _fail(a_47);
                  else
                    o_46 = a_47;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(o_46));
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
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      ;
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      {
        ATerm a_13 = t;
        int g_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            ;
            LocalPopChoice(g_13);
          }
        else
          {
            t = a_13;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm MkConstType_0 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL;
  j_47 = t;
  i_47 :
  if(match_cons(j_47, sym_DefaultVarDec_1))
    {
      k_47 = ATgetArgument(j_47, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(k_47), term_j_13);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL;
  p_47 = t;
  o_47 :
  if(match_cons(p_47, sym_DefaultVarDec_1))
    {
      q_47 = ATgetArgument(p_47, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(q_47), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_13), term_j_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm n_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2(t, q_0, _id);
      {
        ATerm f_2 (ATerm t)
        {
          ATerm g_2 (ATerm t)
          {
            t = map1_1(t, q_0);
            return(t);
          }
          t = try_1(t, g_2);
          return(t);
        }
        t = Cons_2(t, _id, f_2);
      }
      ;
      LocalPopChoice(p_13);
    }
  else
    {
      t = n_13;
      {
        ATerm h_2 (ATerm t)
        {
          t = map1_1(t, q_0);
          return(t);
        }
        t = Cons_2(t, _id, h_2);
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL;
  b_49 = t;
  t_48 :
  if(match_cons(b_49, sym_Lets_2))
    {
      c_49 = ATgetArgument(b_49, 0);
      d_49 = ATgetArgument(b_49, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(c_49), not_null(d_49));
    }
  else
    {
      if(match_cons(b_49, sym_LChoices_1))
        {
          c_49 = ATgetArgument(b_49, 0);
          u_48 :
          if(((ATgetType(c_49) == AT_LIST) && !(ATisEmpty(c_49))))
            {
              x_48 = ATgetFirst((ATermList) c_49);
              y_48 = (ATerm) ATgetNext((ATermList) c_49);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(x_48), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(y_48)));
            }
          else
            {
              if(((ATgetType(c_49) == AT_LIST) && ATisEmpty(c_49)))
                {
                  t = term_n_10;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(b_49, sym_Choices_1))
            {
              c_49 = ATgetArgument(b_49, 0);
              v_48 :
              if(((ATgetType(c_49) == AT_LIST) && !(ATisEmpty(c_49))))
                {
                  x_48 = ATgetFirst((ATermList) c_49);
                  y_48 = (ATerm) ATgetNext((ATermList) c_49);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(x_48), (ATerm) ATmakeAppl(sym_Choices_1, not_null(y_48)));
                }
              else
                {
                  if(((ATgetType(c_49) == AT_LIST) && ATisEmpty(c_49)))
                    {
                      t = term_n_10;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(b_49, sym_Seqs_1))
                {
                  c_49 = ATgetArgument(b_49, 0);
                  w_48 :
                  if(((ATgetType(c_49) == AT_LIST) && !(ATisEmpty(c_49))))
                    {
                      x_48 = ATgetFirst((ATermList) c_49);
                      y_48 = (ATerm) ATgetNext((ATermList) c_49);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_48), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(y_48)));
                    }
                  else
                    {
                      if(((ATgetType(c_49) == AT_LIST) && ATisEmpty(c_49)))
                        {
                          t = term_r_13;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(b_49, sym_RDefT_4))
                    {
                      c_49 = ATgetArgument(b_49, 0);
                      d_49 = ATgetArgument(b_49, 1);
                      a_49 = ATgetArgument(b_49, 2);
                      z_48 = ATgetArgument(b_49, 3);
                      {
                        ATerm y_49 = NULL,z_49 = NULL;
                        ATerm a_50 = NULL;
                        t = not_null(d_49);
                        {
                          ATerm f_50 = NULL;
                          t = map1_1(t, MkFunType_0);
                          {
                            a_50 = t;
                            {
                              if(((y_49 != NULL) && (y_49 != a_50)))
                                _fail(a_50);
                              else
                                y_49 = a_50;
                              {
                                t = not_null(a_49);
                                {
                                  ATerm i_2 (ATerm t)
                                  {
                                    t = try_1(t, MkConstType_0);
                                    return(t);
                                  }
                                  t = map1_1(t, i_2);
                                  {
                                    f_50 = t;
                                    if(((z_49 != NULL) && (z_49 != f_50)))
                                      _fail(f_50);
                                    else
                                      z_49 = f_50;
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(c_49), not_null(y_49), not_null(z_49), not_null(z_48));
                      }
                    }
                  else
                    {
                      if(match_cons(b_49, sym_SDefT_4))
                        {
                          c_49 = ATgetArgument(b_49, 0);
                          d_49 = ATgetArgument(b_49, 1);
                          a_49 = ATgetArgument(b_49, 2);
                          z_48 = ATgetArgument(b_49, 3);
                          {
                            ATerm u_13 = t;
                            int v_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm k_50 = NULL,n_50 = NULL;
                                ATerm o_50 = NULL;
                                t = not_null(a_49);
                                {
                                  ATerm p_50 = NULL;
                                  t = map1_1(t, MkConstType_0);
                                  {
                                    o_50 = t;
                                    {
                                      if(((k_50 != NULL) && (k_50 != o_50)))
                                        _fail(o_50);
                                      else
                                        k_50 = o_50;
                                      {
                                        t = not_null(d_49);
                                        {
                                          ATerm j_2 (ATerm t)
                                          {
                                            t = try_1(t, MkFunType_0);
                                            return(t);
                                          }
                                          t = map_1(t, j_2);
                                          {
                                            p_50 = t;
                                            if(((n_50 != NULL) && (n_50 != p_50)))
                                              _fail(p_50);
                                            else
                                              n_50 = p_50;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(c_49), not_null(n_50), not_null(k_50), not_null(z_48));
                                ;
                                LocalPopChoice(v_13);
                              }
                            else
                              {
                                t = u_13;
                                {
                                  ATerm u_50 = NULL,v_50 = NULL;
                                  ATerm w_50 = NULL;
                                  t = not_null(d_49);
                                  {
                                    ATerm x_50 = NULL;
                                    t = map1_1(t, MkFunType_0);
                                    {
                                      w_50 = t;
                                      {
                                        if(((u_50 != NULL) && (u_50 != w_50)))
                                          _fail(w_50);
                                        else
                                          u_50 = w_50;
                                        {
                                          t = not_null(a_49);
                                          {
                                            ATerm k_2 (ATerm t)
                                            {
                                              t = try_1(t, MkConstType_0);
                                              return(t);
                                            }
                                            t = map_1(t, k_2);
                                            {
                                              x_50 = t;
                                              if(((v_50 != NULL) && (v_50 != x_50)))
                                                _fail(x_50);
                                              else
                                                v_50 = x_50;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(c_49), not_null(u_50), not_null(v_50), not_null(z_48));
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(b_49, sym_InfixApp_3))
                            {
                              c_49 = ATgetArgument(b_49, 0);
                              d_49 = ATgetArgument(b_49, 1);
                              a_49 = ATgetArgument(b_49, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, not_null(d_49), (ATerm) ATmakeAppl(sym_Op_2, term_j_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_49)), not_null(c_49))));
                            }
                          else
                            {
                              if(match_cons(b_49, sym_BAM_3))
                                {
                                  c_49 = ATgetArgument(b_49, 0);
                                  d_49 = ATgetArgument(b_49, 1);
                                  a_49 = ATgetArgument(b_49, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(a_49))), not_null(c_49)), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_49))));
                                }
                              else
                                {
                                  if(match_cons(b_49, sym_AM_2))
                                    {
                                      c_49 = ATgetArgument(b_49, 0);
                                      d_49 = ATgetArgument(b_49, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_49), (ATerm) ATmakeAppl(sym_Match_1, not_null(d_49)));
                                    }
                                  else
                                    {
                                      if(match_cons(b_49, sym_MA_2))
                                        {
                                          c_49 = ATgetArgument(b_49, 0);
                                          d_49 = ATgetArgument(b_49, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_49)), not_null(d_49));
                                        }
                                      else
                                        {
                                          if(match_cons(b_49, sym_BA_2))
                                            {
                                              c_49 = ATgetArgument(b_49, 0);
                                              d_49 = ATgetArgument(b_49, 1);
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_49)), not_null(c_49));
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
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL;
  q_52 = t;
  n_52 :
  if(match_cons(q_52, sym__2))
    {
      r_52 = ATgetArgument(q_52, 0);
      u_52 = ATgetArgument(q_52, 1);
      o_52 :
      if(match_cons(r_52, sym__2))
        {
          s_52 = ATgetArgument(r_52, 0);
          t_52 = ATgetArgument(r_52, 1);
          p_52 :
          if(match_cons(u_52, sym__2))
            {
              v_52 = ATgetArgument(u_52, 0);
              w_52 = ATgetArgument(u_52, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_52)), not_null(s_52)), (ATerm) ATinsert(CheckATermList(not_null(w_52)), not_null(t_52)));
            }
          else
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
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL;
  e_53 = t;
  d_53 :
  if(((ATgetType(e_53) == AT_LIST) && !(ATisEmpty(e_53))))
    {
      f_53 = ATgetFirst((ATermList) e_53);
      g_53 = (ATerm) ATgetNext((ATermList) e_53);
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_53), not_null(g_53));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm m_53 = NULL;
  m_53 = t;
  l_53 :
  if(((ATgetType(m_53) == AT_LIST) && ATisEmpty(m_53)))
    {
      t = term_w_13;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm j_108 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, j_108);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL;
  ATerm z_53 (ATerm t)
  {
    ATerm w_53 = NULL;
    ATerm x_53 = NULL;
    t = not_null(t_53);
    {
      ATerm x_13 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = x_13;
        }
      {
        t = new_0(t);
        {
          x_53 = t;
          if(((w_53 != NULL) && (w_53 != x_53)))
            _fail(x_53);
          else
            w_53 = x_53;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(w_53)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_53)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_53))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_53))));
    return(t);
  }
  ATerm a_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_r_13, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_53))));
    return(t);
  }
  t_53 = t;
  s_53 :
  if(match_cons(t_53, sym_Var_1))
    {
      u_53 = ATgetArgument(t_53, 0);
      {
        ATerm y_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_53(t);
            ;
            LocalPopChoice(z_13);
          }
        else
          {
            t = y_13;
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
ATerm Var_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm p_54 = NULL,q_54 = NULL;
  p_54 = t;
  o_54 :
  if(match_cons(p_54, sym_Var_1))
    {
      q_54 = ATgetArgument(p_54, 0);
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_54 = NULL,v_54 = NULL;
            ATerm u_54 = NULL;
            t = SSLgetAnnotations(not_null(p_54));
            {
              u_54 = t;
              if(((t_54 != NULL) && (t_54 != u_54)))
                _fail(u_54);
              else
                t_54 = u_54;
            }
            {
              t = not_null(q_54);
              {
                ATerm x_54 = NULL;
                t = p_0(t);
                {
                  v_54 = t;
                  {
                    ATerm y_54 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(v_54)), not_null(t_54));
                    {
                      y_54 = t;
                      if(((x_54 != NULL) && (x_54 != y_54)))
                        _fail(y_54);
                      else
                        x_54 = y_54;
                    }
                    t = not_null(x_54);
                  }
                }
              }
            }
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
                  ATerm b_55 = NULL,d_55 = NULL;
                  ATerm c_55 = NULL;
                  t = SSLgetAnnotations(not_null(p_54));
                  {
                    c_55 = t;
                    if(((b_55 != NULL) && (b_55 != c_55)))
                      _fail(c_55);
                    else
                      b_55 = c_55;
                  }
                  {
                    t = not_null(q_54);
                    {
                      ATerm f_55 = NULL;
                      t = p_0(t);
                      {
                        d_55 = t;
                        {
                          ATerm g_55 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(d_55)), not_null(b_55));
                          {
                            g_55 = t;
                            if(((f_55 != NULL) && (f_55 != g_55)))
                              _fail(g_55);
                            else
                              f_55 = g_55;
                          }
                          t = not_null(f_55);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(d_14);
                }
              else
                {
                  t = c_14;
                  {
                    ATerm j_55 = NULL,l_55 = NULL;
                    ATerm k_55 = NULL;
                    t = SSLgetAnnotations(not_null(p_54));
                    {
                      k_55 = t;
                      if(((j_55 != NULL) && (j_55 != k_55)))
                        _fail(k_55);
                      else
                        j_55 = k_55;
                    }
                    {
                      t = not_null(q_54);
                      {
                        ATerm n_55 = NULL;
                        t = p_0(t);
                        {
                          l_55 = t;
                          {
                            ATerm o_55 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_55)), not_null(j_55));
                            {
                              o_55 = t;
                              if(((n_55 != NULL) && (n_55 != o_55)))
                                _fail(o_55);
                              else
                                n_55 = o_55;
                            }
                            t = not_null(n_55);
                          }
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
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL;
  l_56 = t;
  j_56 :
  if(match_cons(l_56, sym_PrimT_3))
    {
      m_56 = ATgetArgument(l_56, 0);
      n_56 = ATgetArgument(l_56, 1);
      k_56 = ATgetArgument(l_56, 2);
      {
        ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL;
        ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL;
        t = not_null(k_56);
        {
          ATerm l_2 (ATerm t)
          {
            ATerm e_14 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_14;
              }
            return(t);
          }
          t = fetch_1(t, l_2);
          {
            t = not_null(k_56);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm m_2 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, m_2);
                {
                  u_56 = t;
                  e_56 :
                  if(match_cons(u_56, sym__2))
                    {
                      v_56 = ATgetArgument(u_56, 0);
                      w_56 = ATgetArgument(u_56, 1);
                      f_56 :
                      if(match_cons(w_56, sym__2))
                        {
                          x_56 = ATgetArgument(w_56, 0);
                          y_56 = ATgetArgument(w_56, 1);
                          {
                            if(((r_56 != NULL) && (r_56 != v_56)))
                              _fail(v_56);
                            else
                              r_56 = v_56;
                            {
                              if(((s_56 != NULL) && (s_56 != x_56)))
                                _fail(x_56);
                              else
                                s_56 = x_56;
                              if(((t_56 != NULL) && (t_56 != y_56)))
                                _fail(y_56);
                              else
                                t_56 = y_56;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(r_56), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(s_56)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(m_56), not_null(n_56), not_null(t_56))));
      }
    }
  else
    {
      if(match_cons(l_56, sym_Prim_2))
        {
          m_56 = ATgetArgument(l_56, 0);
          n_56 = ATgetArgument(l_56, 1);
          {
            ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL;
            ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL;
            t = not_null(n_56);
            {
              ATerm n_2 (ATerm t)
              {
                ATerm j_14 = t;
                if((PushChoice() == 0))
                  {
                    t = Var_1(t, _id);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_14;
                  }
                return(t);
              }
              t = fetch_1(t, n_2);
              {
                t = not_null(n_56);
                {
                  t = unzip_1(t, LiftPrimArg_0);
                  {
                    ATerm o_2 (ATerm t)
                    {
                      t = unzip_1(t, _id);
                      return(t);
                    }
                    t = _2(t, concat_0, o_2);
                    {
                      e_57 = t;
                      h_56 :
                      if(match_cons(e_57, sym__2))
                        {
                          f_57 = ATgetArgument(e_57, 0);
                          g_57 = ATgetArgument(e_57, 1);
                          i_56 :
                          if(match_cons(g_57, sym__2))
                            {
                              h_57 = ATgetArgument(g_57, 0);
                              i_57 = ATgetArgument(g_57, 1);
                              {
                                if(((b_57 != NULL) && (b_57 != f_57)))
                                  _fail(f_57);
                                else
                                  b_57 = f_57;
                                {
                                  if(((c_57 != NULL) && (c_57 != h_57)))
                                    _fail(h_57);
                                  else
                                    c_57 = h_57;
                                  if(((d_57 != NULL) && (d_57 != i_57)))
                                    _fail(i_57);
                                  else
                                    d_57 = i_57;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_57), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(c_57)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(m_56), (ATerm)ATempty, not_null(d_57))));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm x_119 (ATerm))
{
  ATerm n_57 (ATerm t)
  {
    ATerm p_2 (ATerm t)
    {
      t = x_119(t);
      t = n_57(t);
      return(t);
    }
    t = try_1(t, p_2);
    return(t);
  }
  t = n_57(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm s_57 = NULL;
  s_57 = t;
  r_57 :
  if(match_cons(s_57, sym_Wld_0))
    {
      ATerm u_57 = NULL,w_57 = NULL;
      ATerm k_14;
      k_14 = t;
      {
        ATerm v_57 = NULL;
        t = SSLgetAnnotations(not_null(s_57));
        {
          v_57 = t;
          if(((u_57 != NULL) && (u_57 != v_57)))
            _fail(v_57);
          else
            u_57 = v_57;
        }
      }
      t = k_14;
      {
        ATerm x_57 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(u_57));
        {
          x_57 = t;
          if(((w_57 != NULL) && (w_57 != x_57)))
            _fail(x_57);
          else
            w_57 = x_57;
        }
        t = not_null(w_57);
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
  ATerm l_14 = t;
  if((PushChoice() == 0))
    {
      ATerm q_2 (ATerm t)
      {
        ATerm p_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(r_14);
          }
        else
          {
            t = p_14;
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
      t = l_14;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm n_89 (ATerm), ATerm o_89 (ATerm))
{
  ATerm k_58 = NULL,l_58 = NULL,m_58 = NULL;
  k_58 = t;
  j_58 :
  if(match_cons(k_58, sym_App_2))
    {
      l_58 = ATgetArgument(k_58, 0);
      m_58 = ATgetArgument(k_58, 1);
      {
        ATerm q_58 = NULL,s_58 = NULL;
        ATerm r_58 = NULL;
        t = SSLgetAnnotations(not_null(k_58));
        {
          r_58 = t;
          if(((q_58 != NULL) && (q_58 != r_58)))
            _fail(r_58);
          else
            q_58 = r_58;
        }
        {
          t = not_null(l_58);
          {
            ATerm u_58 = NULL;
            t = n_89(t);
            {
              s_58 = t;
              {
                t = not_null(m_58);
                {
                  ATerm w_58 = NULL;
                  t = o_89(t);
                  {
                    u_58 = t;
                    {
                      ATerm x_58 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(s_58), not_null(u_58)), not_null(q_58));
                      {
                        x_58 = t;
                        if(((w_58 != NULL) && (w_58 != x_58)))
                          _fail(x_58);
                        else
                          w_58 = x_58;
                      }
                      t = not_null(w_58);
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
ATerm Con_3 (ATerm t, ATerm z_89 (ATerm), ATerm a_90 (ATerm), ATerm b_90 (ATerm))
{
  ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL;
  n_62 = t;
  m_62 :
  if(match_cons(n_62, sym_Con_3))
    {
      o_62 = ATgetArgument(n_62, 0);
      p_62 = ATgetArgument(n_62, 1);
      q_62 = ATgetArgument(n_62, 2);
      {
        ATerm u_63 = NULL,w_63 = NULL;
        ATerm v_63 = NULL;
        t = SSLgetAnnotations(not_null(n_62));
        {
          v_63 = t;
          if(((u_63 != NULL) && (u_63 != v_63)))
            _fail(v_63);
          else
            u_63 = v_63;
        }
        {
          t = not_null(o_62);
          {
            ATerm y_63 = NULL;
            t = z_89(t);
            {
              w_63 = t;
              {
                t = not_null(p_62);
                {
                  ATerm a_64 = NULL;
                  t = a_90(t);
                  {
                    y_63 = t;
                    {
                      t = not_null(q_62);
                      {
                        ATerm c_64 = NULL;
                        t = b_90(t);
                        {
                          a_64 = t;
                          {
                            ATerm d_64 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(w_63), not_null(y_63), not_null(a_64)), not_null(u_63));
                            {
                              d_64 = t;
                              if(((c_64 != NULL) && (c_64 != d_64)))
                                _fail(d_64);
                              else
                                c_64 = d_64;
                            }
                            t = not_null(c_64);
                          }
                        }
                      }
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
  ATerm u_14 = t;
  if((PushChoice() == 0))
    {
      ATerm r_2 (ATerm t)
      {
        ATerm v_14 = t;
        int w_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(w_14);
          }
        else
          {
            t = v_14;
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
      t = u_14;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL;
  o_64 = t;
  m_64 :
  if(match_cons(o_64, sym_SRule_1))
    {
      p_64 = ATgetArgument(o_64, 0);
      n_64 :
      if(match_cons(p_64, sym_StratRule_3))
        {
          q_64 = ATgetArgument(p_64, 0);
          r_64 = ATgetArgument(p_64, 1);
          s_64 = ATgetArgument(p_64, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(r_64)), (ATerm) ATmakeAppl(sym_Where_1, not_null(s_64))), not_null(q_64)));
        }
      else
        {
          if(match_cons(p_64, sym_Rule_3))
            {
              q_64 = ATgetArgument(p_64, 0);
              r_64 = ATgetArgument(p_64, 1);
              s_64 = ATgetArgument(p_64, 2);
              {
                t = not_null(q_64);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(r_64);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(r_64))), (ATerm) ATmakeAppl(sym_Where_1, not_null(s_64))), (ATerm) ATmakeAppl(sym_Match_1, not_null(q_64))));
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
ATerm Scope_2 (ATerm t, ATerm t_92 (ATerm), ATerm u_92 (ATerm))
{
  ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL;
  h_65 = t;
  g_65 :
  if(match_cons(h_65, sym_Scope_2))
    {
      i_65 = ATgetArgument(h_65, 0);
      j_65 = ATgetArgument(h_65, 1);
      {
        ATerm n_65 = NULL,p_65 = NULL;
        ATerm o_65 = NULL;
        t = SSLgetAnnotations(not_null(h_65));
        {
          o_65 = t;
          if(((n_65 != NULL) && (n_65 != o_65)))
            _fail(o_65);
          else
            n_65 = o_65;
        }
        {
          t = not_null(i_65);
          {
            ATerm r_65 = NULL;
            t = t_92(t);
            {
              p_65 = t;
              {
                t = not_null(j_65);
                {
                  ATerm z_65 = NULL;
                  t = u_92(t);
                  {
                    r_65 = t;
                    {
                      ATerm a_66 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(p_65), not_null(r_65)), not_null(n_65));
                      {
                        a_66 = t;
                        if(((z_65 != NULL) && (z_65 != a_66)))
                          _fail(a_66);
                        else
                          z_65 = a_66;
                      }
                      t = not_null(z_65);
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
ATerm oncetd_1 (ATerm t, ATerm r_104 (ATerm))
{
  ATerm g_66 (ATerm t)
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_104(t);
        ;
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = _one(t, g_66);
      }
    return(t);
  }
  t = g_66(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL;
  w_66 = t;
  u_66 :
  if(match_cons(w_66, sym_SRule_1))
    {
      x_66 = ATgetArgument(w_66, 0);
      v_66 :
      if(match_cons(x_66, sym_Rule_3))
        {
          y_66 = ATgetArgument(x_66, 0);
          z_66 = ATgetArgument(x_66, 1);
          a_67 = ATgetArgument(x_66, 2);
          {
            ATerm e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL;
            ATerm m_67 = NULL;
            ATerm s_67 = NULL;
            t = new_0(t);
            {
              m_67 = t;
              {
                if(((j_67 != NULL) && (j_67 != m_67)))
                  _fail(m_67);
                else
                  j_67 = m_67;
                {
                  t = not_null(y_66);
                  {
                    ATerm b_68 = NULL;
                    ATerm s_2 (ATerm t)
                    {
                      ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL;
                      n_67 = t;
                      k_66 :
                      if(match_cons(n_67, sym_Con_3))
                        {
                          o_67 = ATgetArgument(n_67, 0);
                          q_67 = ATgetArgument(n_67, 1);
                          r_67 = ATgetArgument(n_67, 2);
                          l_66 :
                          if(match_cons(o_67, sym_Var_1))
                            {
                              p_67 = ATgetArgument(o_67, 0);
                              {
                                if(((i_67 != NULL) && (i_67 != p_67)))
                                  _fail(p_67);
                                else
                                  i_67 = p_67;
                                {
                                  if(((g_67 != NULL) && (g_67 != q_67)))
                                    _fail(q_67);
                                  else
                                    g_67 = q_67;
                                  {
                                    if(((e_67 != NULL) && (e_67 != r_67)))
                                      _fail(r_67);
                                    else
                                      e_67 = r_67;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_67));
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
                      s_67 = t;
                      {
                        if(((k_67 != NULL) && (k_67 != s_67)))
                          _fail(s_67);
                        else
                          k_67 = s_67;
                        {
                          t = not_null(z_66);
                          {
                            ATerm t_2 (ATerm t)
                            {
                              ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL;
                              t_67 = t;
                              o_66 :
                              if(match_cons(t_67, sym_Con_3))
                                {
                                  u_67 = ATgetArgument(t_67, 0);
                                  w_67 = ATgetArgument(t_67, 1);
                                  x_67 = ATgetArgument(t_67, 2);
                                  p_66 :
                                  if(match_cons(u_67, sym_Var_1))
                                    {
                                      v_67 = ATgetArgument(u_67, 0);
                                      q_66 :
                                      if(match_cons(x_67, sym_CallT_3))
                                        {
                                          y_67 = ATgetArgument(x_67, 0);
                                          z_67 = ATgetArgument(x_67, 1);
                                          a_68 = ATgetArgument(x_67, 2);
                                          r_66 :
                                          if(((ATgetType(z_67) == AT_LIST) && ATisEmpty(z_67)))
                                            {
                                              s_66 :
                                              if(((ATgetType(a_68) == AT_LIST) && ATisEmpty(a_68)))
                                                {
                                                  {
                                                    if(((i_67 != NULL) && (i_67 != v_67)))
                                                      _fail(v_67);
                                                    else
                                                      i_67 = v_67;
                                                    {
                                                      if(((h_67 != NULL) && (h_67 != w_67)))
                                                        _fail(w_67);
                                                      else
                                                        h_67 = w_67;
                                                      {
                                                        if(((f_67 != NULL) && (f_67 != y_67)))
                                                          _fail(y_67);
                                                        else
                                                          f_67 = y_67;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_67));
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
                              b_68 = t;
                              if(((l_67 != NULL) && (l_67 != b_68)))
                                _fail(b_68);
                              else
                                l_67 = b_68;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_67)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_67), not_null(l_67), (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_67), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(f_67), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_67), not_null(h_67), term_r_13))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_67)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_67)))))));
          }
        }
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
    ATerm z_14 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        ;
        LocalPopChoice(g_15);
      }
    else
      {
        t = z_14;
        {
          ATerm h_15 = t;
          int i_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              ;
              LocalPopChoice(i_15);
            }
          else
            {
              t = h_15;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, u_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm n_103 (ATerm))
{
  t = n_103(t);
  {
    ATerm v_2 (ATerm t)
    {
      t = topdown_1(t, n_103);
      return(t);
    }
    t = _all(t, v_2);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm x_2 (ATerm t)
      {
        ATerm j_15 = t;
        int k_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            ;
            LocalPopChoice(k_15);
          }
        else
          {
            t = j_15;
            {
              ATerm l_15 = t;
              int s_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(s_15);
                }
              else
                {
                  t = l_15;
                  {
                    ATerm t_15 = t;
                    int u_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        ;
                        LocalPopChoice(u_15);
                      }
                    else
                      {
                        t = t_15;
                        {
                          ATerm v_15 = t;
                          int w_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              ;
                              LocalPopChoice(w_15);
                            }
                          else
                            {
                              t = v_15;
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
      t = repeat_1(t, x_2);
    }
    return(t);
  }
  t = topdown_1(t, w_2);
  return(t);
}
ATerm _0 (ATerm t)
{
  ATerm n_68 = NULL;
  n_68 = t;
  m_68 :
  if(match_cons(n_68, sym__0))
    {
      ATerm p_68 = NULL,r_68 = NULL;
      ATerm x_15;
      x_15 = t;
      {
        ATerm q_68 = NULL;
        t = SSLgetAnnotations(not_null(n_68));
        {
          q_68 = t;
          if(((p_68 != NULL) && (p_68 != q_68)))
            _fail(q_68);
          else
            p_68 = q_68;
        }
      }
      t = x_15;
      {
        ATerm s_68 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(p_68));
        {
          s_68 = t;
          if(((r_68 != NULL) && (r_68 != s_68)))
            _fail(s_68);
          else
            r_68 = s_68;
        }
        t = not_null(r_68);
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
  ATerm n_69 = NULL;
  ATerm p_69 = NULL,q_69 = NULL,y_69 = NULL,a_70 = NULL;
  n_69 = t;
  {
    ATerm c_16;
    c_16 = t;
    {
      ATerm r_69 = NULL;
      ATerm t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL,x_69 = NULL;
      t = not_null(n_69);
      {
        r_69 = t;
        {
          t = SSL_explode_term(not_null(r_69));
          {
            t_69 = t;
            z_68 :
            if(match_cons(t_69, sym__2))
              {
                u_69 = ATgetArgument(t_69, 0);
                v_69 = ATgetArgument(t_69, 1);
                e_69 :
                if(match_string(u_69, ""))
                  {
                    f_69 :
                    if(((ATgetType(v_69) == AT_LIST) && !(ATisEmpty(v_69))))
                      {
                        w_69 = ATgetFirst((ATermList) v_69);
                        x_69 = (ATerm) ATgetNext((ATermList) v_69);
                        {
                          if(((p_69 != NULL) && (p_69 != w_69)))
                            _fail(w_69);
                          else
                            p_69 = w_69;
                          if(((q_69 != NULL) && (q_69 != x_69)))
                            _fail(x_69);
                          else
                            q_69 = x_69;
                        }
                      }
                    else
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
    t = c_16;
    {
      ATerm d_16;
      d_16 = t;
      {
        ATerm z_69 = NULL;
        t = term_j_11;
        {
          z_69 = t;
          if(((y_69 != NULL) && (y_69 != z_69)))
            _fail(z_69);
          else
            y_69 = z_69;
        }
      }
      t = d_16;
      {
        t = SSL_mkterm(not_null(y_69), not_null(q_69));
        {
          a_70 = t;
          t = not_null(a_70);
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
ATerm tuple_unzip_1 (ATerm t, ATerm p_107 (ATerm))
{
  ATerm x_70 = NULL,z_70 = NULL,b_71 = NULL;
  ATerm d_71 (ATerm t)
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_70 = NULL,q_70 = NULL;
        ATerm g_16;
        g_16 = t;
        {
          ATerm p_70 = NULL;
          t = map_1(t, Thd_0);
          {
            t = p_107(t);
            {
              p_70 = t;
              if(((o_70 != NULL) && (o_70 != p_70)))
                _fail(p_70);
              else
                o_70 = p_70;
            }
          }
        }
        t = g_16;
        {
          ATerm r_70 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = d_71(t);
            {
              r_70 = t;
              if(((q_70 != NULL) && (q_70 != r_70)))
                _fail(r_70);
              else
                q_70 = r_70;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(q_70)), not_null(o_70));
        }
        ;
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = d_71(t);
  {
    ATerm l_16;
    l_16 = t;
    {
      ATerm y_70 = NULL;
      y_70 = t;
      if(((x_70 != NULL) && (x_70 != y_70)))
        _fail(y_70);
      else
        x_70 = y_70;
    }
    t = l_16;
    {
      ATerm m_16;
      m_16 = t;
      {
        ATerm a_71 = NULL;
        t = term_j_11;
        {
          a_71 = t;
          if(((z_70 != NULL) && (z_70 != a_71)))
            _fail(a_71);
          else
            z_70 = a_71;
        }
      }
      t = m_16;
      {
        t = SSL_mkterm(not_null(z_70), not_null(x_70));
        {
          b_71 = t;
          t = not_null(b_71);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm s_71 = NULL;
  s_71 = t;
  {
    ATerm n_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_71 = NULL,v_71 = NULL,w_71 = NULL;
        ATerm x_71 = NULL;
        ATerm y_71 = NULL;
        t = new_0(t);
        {
          x_71 = t;
          {
            if(((u_71 != NULL) && (u_71 != x_71)))
              _fail(x_71);
            else
              u_71 = x_71;
            {
              ATerm z_71 = NULL;
              t = new_0(t);
              {
                y_71 = t;
                {
                  if(((v_71 != NULL) && (v_71 != y_71)))
                    _fail(y_71);
                  else
                    v_71 = y_71;
                  {
                    t = new_0(t);
                    {
                      z_71 = t;
                      if(((w_71 != NULL) && (w_71 != z_71)))
                        _fail(z_71);
                      else
                        w_71 = z_71;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_71)), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_j_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_71)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_71)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_71))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(u_71), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_13), term_j_13)), not_null(v_71), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_71)), not_null(w_71), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_71)));
        ;
        LocalPopChoice(o_16);
      }
    else
      {
        t = n_16;
        {
          ATerm h_72 = NULL,i_72 = NULL,j_72 = NULL;
          ATerm l_72 = NULL;
          ATerm m_72 = NULL;
          t = new_0(t);
          {
            l_72 = t;
            {
              if(((h_72 != NULL) && (h_72 != l_72)))
                _fail(l_72);
              else
                h_72 = l_72;
              {
                ATerm n_72 = NULL;
                t = new_0(t);
                {
                  m_72 = t;
                  {
                    if(((i_72 != NULL) && (i_72 != m_72)))
                      _fail(m_72);
                    else
                      i_72 = m_72;
                    {
                      t = new_0(t);
                      {
                        n_72 = t;
                        if(((j_72 != NULL) && (j_72 != n_72)))
                          _fail(n_72);
                        else
                          j_72 = n_72;
                      }
                    }
                  }
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_72)), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_j_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_71)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_72)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_72))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(h_72), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_13), term_j_13)), not_null(i_72), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_72)), not_null(j_72), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_72)));
        }
      }
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL;
  y_72 = t;
  x_72 :
  if(match_cons(y_72, sym__2))
    {
      z_72 = ATgetArgument(y_72, 0);
      a_73 = ATgetArgument(y_72, 1);
      {
        ATerm p_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(z_72), not_null(a_73));
            ;
            LocalPopChoice(v_16);
          }
        else
          {
            t = p_16;
            t = SSL_subtr(not_null(z_72), not_null(a_73));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm r_114 (ATerm))
{
  ATerm y_2 (ATerm t)
  {
    ATerm n_73 = NULL,o_73 = NULL,p_73 = NULL;
    n_73 = t;
    f_73 :
    if(match_cons(n_73, sym__2))
      {
        o_73 = ATgetArgument(n_73, 0);
        p_73 = ATgetArgument(n_73, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(o_73), not_null(p_73), (ATerm) ATempty);
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
    s_73 = t;
    h_73 :
    if(match_cons(s_73, sym__3))
      {
        t_73 = ATgetArgument(s_73, 0);
        u_73 = ATgetArgument(s_73, 1);
        v_73 = ATgetArgument(s_73, 2);
        i_73 :
        if(match_int(t_73, 0))
          {
            t = not_null(v_73);
          }
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
    y_73 = t;
    m_73 :
    if(match_cons(y_73, sym__3))
      {
        z_73 = ATgetArgument(y_73, 0);
        a_74 = ATgetArgument(y_73, 1);
        b_74 = ATgetArgument(y_73, 2);
        {
          ATerm f_74 = NULL,h_74 = NULL;
          ATerm w_16;
          w_16 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_73), term_k_7);
            t = geq_0(t);
          }
          t = w_16;
          {
            ATerm x_16;
            x_16 = t;
            {
              ATerm g_74 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_73), term_k_7);
              {
                t = subt_0(t);
                {
                  g_74 = t;
                  if(((f_74 != NULL) && (f_74 != g_74)))
                    _fail(g_74);
                  else
                    f_74 = g_74;
                }
              }
            }
            t = x_16;
            {
              ATerm i_74 = NULL;
              t = not_null(a_74);
              {
                t = r_114(t);
                {
                  i_74 = t;
                  if(((h_74 != NULL) && (h_74 != i_74)))
                    _fail(i_74);
                  else
                    h_74 = i_74;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(f_74), not_null(a_74), (ATerm) ATinsert(CheckATermList(not_null(b_74)), not_null(h_74)));
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
  t = for_3(t, y_2, z_2, a_3);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL;
  y_74 = t;
  x_74 :
  if(match_cons(y_74, sym__2))
    {
      z_74 = ATgetArgument(y_74, 0);
      a_75 = ATgetArgument(y_74, 1);
      {
        ATerm d_75 = NULL,i_75 = NULL,j_75 = NULL;
        ATerm k_75 = NULL;
        ATerm l_75 = NULL;
        t = new_0(t);
        {
          k_75 = t;
          {
            if(((d_75 != NULL) && (d_75 != k_75)))
              _fail(k_75);
            else
              d_75 = k_75;
            {
              ATerm m_75 = NULL;
              t = new_0(t);
              {
                l_75 = t;
                {
                  if(((i_75 != NULL) && (i_75 != l_75)))
                    _fail(l_75);
                  else
                    i_75 = l_75;
                  {
                    t = new_0(t);
                    {
                      m_75 = t;
                      if(((j_75 != NULL) && (j_75 != m_75)))
                        _fail(m_75);
                      else
                        j_75 = m_75;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_75)), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_j_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_74))), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_75)))), (ATerm) ATmakeAppl(sym_Op_2, term_j_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_75))), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_75))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(d_75), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_13), term_j_13)), not_null(i_75), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_75)), not_null(j_75), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_75)));
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
  ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL;
  u_75 = t;
  s_75 :
  if(match_cons(u_75, sym__2))
    {
      v_75 = ATgetArgument(u_75, 0);
      w_75 = ATgetArgument(u_75, 1);
      t_75 :
      if(((ATgetType(w_75) == AT_LIST) && ATisEmpty(w_75)))
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
ATerm zipr_1 (ATerm t, ATerm h_108 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, h_108);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL;
  a_76 = t;
  z_75 :
  if(((ATgetType(a_76) == AT_LIST) && !(ATisEmpty(a_76))))
    {
      b_76 = ATgetFirst((ATermList) a_76);
      c_76 = (ATerm) ATgetNext((ATermList) a_76);
      t = not_null(c_76);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm s_76 = NULL,t_76 = NULL,x_76 = NULL;
  s_76 = t;
  q_76 :
  if(((ATgetType(s_76) == AT_LIST) && !(ATisEmpty(s_76))))
    {
      t_76 = ATgetFirst((ATermList) s_76);
      x_76 = (ATerm) ATgetNext((ATermList) s_76);
      r_76 :
      if(((ATgetType(x_76) == AT_LIST) && ATisEmpty(x_76)))
        {
          t = not_null(t_76);
        }
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
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(z_16);
    }
  else
    {
      t = y_16;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL,z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL;
  ATerm w_85 (ATerm t)
  {
    ATerm g_80 = NULL,h_80 = NULL,i_80 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL,w_84 = NULL;
    ATerm a_17;
    a_17 = t;
    {
      ATerm j_84 = NULL,l_84 = NULL,m_84 = NULL,n_84 = NULL;
      ATerm k_84 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_80), term_k_7);
      {
        t = add_0(t);
        {
          k_84 = t;
          if(((j_84 != NULL) && (j_84 != k_84)))
            _fail(k_84);
          else
            j_84 = k_84;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_84), term_b_17);
        {
          t = copy_1(t, new_0);
          {
            l_84 = t;
            o_78 :
            if(((ATgetType(l_84) == AT_LIST) && !(ATisEmpty(l_84))))
              {
                m_84 = ATgetFirst((ATermList) l_84);
                n_84 = (ATerm) ATgetNext((ATermList) l_84);
                {
                  ATerm o_84 = NULL;
                  if(((h_80 != NULL) && (h_80 != m_84)))
                    _fail(m_84);
                  else
                    h_80 = m_84;
                  {
                    if(((i_80 != NULL) && (i_80 != n_84)))
                      _fail(n_84);
                    else
                      i_80 = n_84;
                    {
                      t = not_null(i_80);
                      {
                        ATerm p_84 = NULL,q_84 = NULL,r_84 = NULL,s_84 = NULL,t_84 = NULL,u_84 = NULL,v_84 = NULL;
                        t = last_0(t);
                        {
                          o_84 = t;
                          {
                            if(((g_80 != NULL) && (g_80 != o_84)))
                              _fail(o_84);
                            else
                              g_80 = o_84;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_80)), not_null(h_80)), not_null(i_80));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    p_84 = t;
                                    n_78 :
                                    if(match_cons(p_84, sym__6))
                                      {
                                        q_84 = ATgetArgument(p_84, 0);
                                        r_84 = ATgetArgument(p_84, 1);
                                        s_84 = ATgetArgument(p_84, 2);
                                        t_84 = ATgetArgument(p_84, 3);
                                        u_84 = ATgetArgument(p_84, 4);
                                        v_84 = ATgetArgument(p_84, 5);
                                        {
                                          if(((d_84 != NULL) && (d_84 != q_84)))
                                            _fail(q_84);
                                          else
                                            d_84 = q_84;
                                          {
                                            if(((e_84 != NULL) && (e_84 != r_84)))
                                              _fail(r_84);
                                            else
                                              e_84 = r_84;
                                            {
                                              if(((f_84 != NULL) && (f_84 != s_84)))
                                                _fail(s_84);
                                              else
                                                f_84 = s_84;
                                              {
                                                if(((g_84 != NULL) && (g_84 != t_84)))
                                                  _fail(t_84);
                                                else
                                                  g_84 = t_84;
                                                {
                                                  if(((h_84 != NULL) && (h_84 != u_84)))
                                                    _fail(u_84);
                                                  else
                                                    h_84 = u_84;
                                                  if(((i_84 != NULL) && (i_84 != v_84)))
                                                    _fail(v_84);
                                                  else
                                                    i_84 = v_84;
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
    t = a_17;
    {
      ATerm x_84 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(h_84)), not_null(f_84)), not_null(i_80));
      {
        t = concat_0(t);
        {
          x_84 = t;
          if(((w_84 != NULL) && (w_84 != x_84)))
            _fail(x_84);
          else
            w_84 = x_84;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, not_null(b_79), term_h_17), not_null(e_84), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(w_84)), not_null(h_80)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_j_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_80))), (ATerm) ATmakeAppl(sym_Op_2, not_null(b_79), not_null(g_84)))), (ATerm)ATmakeAppl(sym_Op_2, term_j_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_80))), (ATerm) ATmakeAppl(sym_Op_2, not_null(b_79), not_null(i_84)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(d_84))))));
    }
    return(t);
  }
  ATerm x_85 (ATerm t)
  {
    ATerm a_85 = NULL;
    ATerm b_85 = NULL;
    t = new_0(t);
    {
      b_85 = t;
      if(((a_85 != NULL) && (a_85 != b_85)))
        _fail(b_85);
      else
        a_85 = b_85;
    }
    t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, not_null(b_79), term_h_17), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_85)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_j_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_85))), (ATerm) ATmakeAppl(sym_Op_2, not_null(b_79), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_j_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_85))), (ATerm) ATmakeAppl(sym_Op_2, not_null(b_79), (ATerm) ATempty))), term_r_13))));
    return(t);
  }
  ATerm y_85 (ATerm t)
  {
    ATerm f_85 = NULL,g_85 = NULL,h_85 = NULL,i_85 = NULL,j_85 = NULL,k_85 = NULL,l_85 = NULL,u_85 = NULL;
    ATerm i_17;
    i_17 = t;
    {
      ATerm m_85 = NULL;
      ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL,t_85 = NULL;
      t = new_0(t);
      {
        m_85 = t;
        {
          if(((f_85 != NULL) && (f_85 != m_85)))
            _fail(m_85);
          else
            f_85 = m_85;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_80), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_85)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  n_85 = t;
                  t_78 :
                  if(match_cons(n_85, sym__6))
                    {
                      o_85 = ATgetArgument(n_85, 0);
                      p_85 = ATgetArgument(n_85, 1);
                      q_85 = ATgetArgument(n_85, 2);
                      r_85 = ATgetArgument(n_85, 3);
                      s_85 = ATgetArgument(n_85, 4);
                      t_85 = ATgetArgument(n_85, 5);
                      {
                        if(((g_85 != NULL) && (g_85 != o_85)))
                          _fail(o_85);
                        else
                          g_85 = o_85;
                        {
                          if(((h_85 != NULL) && (h_85 != p_85)))
                            _fail(p_85);
                          else
                            h_85 = p_85;
                          {
                            if(((i_85 != NULL) && (i_85 != q_85)))
                              _fail(q_85);
                            else
                              i_85 = q_85;
                            {
                              if(((j_85 != NULL) && (j_85 != r_85)))
                                _fail(r_85);
                              else
                                j_85 = r_85;
                              {
                                if(((k_85 != NULL) && (k_85 != s_85)))
                                  _fail(s_85);
                                else
                                  k_85 = s_85;
                                if(((l_85 != NULL) && (l_85 != t_85)))
                                  _fail(t_85);
                                else
                                  l_85 = t_85;
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
    t = i_17;
    {
      ATerm v_85 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_85), not_null(k_85));
      {
        t = conc_0(t);
        {
          v_85 = t;
          if(((u_85 != NULL) && (u_85 != v_85)))
            _fail(v_85);
          else
            u_85 = v_85;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, not_null(b_79), term_o_17), not_null(h_85), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(u_85)), not_null(f_85)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_j_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_85))), (ATerm) ATmakeAppl(sym_Op_2, not_null(b_79), not_null(j_85)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(b_79), not_null(l_85)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(g_85))))));
    }
    return(t);
  }
  a_79 = t;
  v_78 :
  if(match_cons(a_79, sym__3))
    {
      b_79 = ATgetArgument(a_79, 0);
      z_79 = ATgetArgument(a_79, 1);
      a_80 = ATgetArgument(a_79, 2);
      w_78 :
      if(match_string(z_79, "T"))
        {
          x_78 :
          if(match_cons(a_80, sym__2))
            {
              b_80 = ATgetArgument(a_80, 0);
              c_80 = ATgetArgument(a_80, 1);
              y_78 :
              if(match_int(b_80, 0))
                {
                  ATerm p_17 = t;
                  int q_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = w_85(t);
                      ;
                      LocalPopChoice(q_17);
                    }
                  else
                    {
                      t = p_17;
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
          if(match_string(z_79, "D"))
            {
              z_78 :
              if(match_cons(a_80, sym__2))
                {
                  b_80 = ATgetArgument(a_80, 0);
                  c_80 = ATgetArgument(a_80, 1);
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
ATerm CongruenceDef_0 (ATerm t)
{
  ATerm p_86 = NULL,q_86 = NULL,r_86 = NULL,s_86 = NULL,t_86 = NULL,u_86 = NULL,v_86 = NULL;
  p_86 = t;
  k_86 :
  if(match_cons(p_86, sym__2))
    {
      q_86 = ATgetArgument(p_86, 0);
      v_86 = ATgetArgument(p_86, 1);
      l_86 :
      if(match_cons(q_86, sym__2))
        {
          r_86 = ATgetArgument(q_86, 0);
          u_86 = ATgetArgument(q_86, 1);
          m_86 :
          if(match_cons(r_86, sym_Mod_2))
            {
              s_86 = ATgetArgument(r_86, 0);
              t_86 = ATgetArgument(r_86, 1);
              {
                ATerm a_87 = NULL;
                ATerm b_87 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(s_86), not_null(t_86), not_null(u_86));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      b_87 = t;
                      if(((a_87 != NULL) && (a_87 != b_87)))
                        _fail(b_87);
                      else
                        a_87 = b_87;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_87), not_null(v_86));
              }
            }
          else
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
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL,l_87 = NULL,m_87 = NULL,n_87 = NULL,o_87 = NULL;
  h_87 = t;
  f_87 :
  if(match_cons(h_87, sym__5))
    {
      i_87 = ATgetArgument(h_87, 0);
      l_87 = ATgetArgument(h_87, 1);
      m_87 = ATgetArgument(h_87, 2);
      n_87 = ATgetArgument(h_87, 3);
      o_87 = ATgetArgument(h_87, 4);
      g_87 :
      if(((ATgetType(i_87) == AT_LIST) && !(ATisEmpty(i_87))))
        {
          j_87 = ATgetFirst((ATermList) i_87);
          k_87 = (ATerm) ATgetNext((ATermList) i_87);
          t = (ATerm) ATmakeAppl(sym__5, not_null(k_87), not_null(l_87), not_null(m_87), not_null(n_87), (ATerm) ATinsert(CheckATermList(not_null(o_87)), not_null(j_87)));
        }
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
ATerm diff_1 (ATerm t, ATerm l_111 (ATerm))
{
  ATerm b_88 = NULL,c_88 = NULL,d_88 = NULL;
  b_88 = t;
  z_87 :
  if(match_cons(b_88, sym__2))
    {
      c_88 = ATgetArgument(b_88, 0);
      d_88 = ATgetArgument(b_88, 1);
      {
        t = not_null(c_88);
        {
          ATerm i_88 (ATerm t)
          {
            ATerm t_17 = t;
            int u_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(u_17);
              }
            else
              {
                t = t_17;
                {
                  ATerm v_17 = t;
                  int y_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_3 (ATerm t)
                      {
                        t = not_null(d_88);
                        return(t);
                      }
                      t = HdMember_p__2(t, l_111, b_3);
                      t = i_88(t);
                      ;
                      LocalPopChoice(y_17);
                    }
                  else
                    {
                      t = v_17;
                      t = Cons_2(t, _id, i_88);
                    }
                }
              }
            return(t);
          }
          t = i_88(t);
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
  ATerm m_88 = NULL,n_88 = NULL,o_88 = NULL,p_88 = NULL,q_88 = NULL;
  m_88 = t;
  k_88 :
  if(match_cons(m_88, sym__2))
    {
      n_88 = ATgetArgument(m_88, 0);
      o_88 = ATgetArgument(m_88, 1);
      l_88 :
      if(((ATgetType(o_88) == AT_LIST) && !(ATisEmpty(o_88))))
        {
          p_88 = ATgetFirst((ATermList) o_88);
          q_88 = (ATerm) ATgetNext((ATermList) o_88);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_88)), not_null(p_88)), not_null(q_88));
        }
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
  ATerm x_88 = NULL,y_88 = NULL,z_88 = NULL;
  x_88 = t;
  w_88 :
  if(match_cons(x_88, sym__2))
    {
      y_88 = ATgetArgument(x_88, 0);
      z_88 = ATgetArgument(x_88, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_88)), not_null(y_88));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm l_89 = NULL,m_89 = NULL,p_89 = NULL,s_89 = NULL,t_89 = NULL,u_89 = NULL,v_89 = NULL;
  l_89 = t;
  e_89 :
  if(match_cons(l_89, sym__2))
    {
      m_89 = ATgetArgument(l_89, 0);
      t_89 = ATgetArgument(l_89, 1);
      h_89 :
      if(((ATgetType(m_89) == AT_LIST) && !(ATisEmpty(m_89))))
        {
          p_89 = ATgetFirst((ATermList) m_89);
          s_89 = (ATerm) ATgetNext((ATermList) m_89);
          i_89 :
          if(((ATgetType(t_89) == AT_LIST) && !(ATisEmpty(t_89))))
            {
              u_89 = ATgetFirst((ATermList) t_89);
              v_89 = (ATerm) ATgetNext((ATermList) t_89);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(p_89), not_null(u_89)), (ATerm) ATmakeAppl(sym__2, not_null(s_89), not_null(v_89)));
            }
          else
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
  ATerm i_90 = NULL,j_90 = NULL,k_90 = NULL;
  i_90 = t;
  f_90 :
  if(match_cons(i_90, sym__2))
    {
      j_90 = ATgetArgument(i_90, 0);
      k_90 = ATgetArgument(i_90, 1);
      g_90 :
      if(((ATgetType(j_90) == AT_LIST) && ATisEmpty(j_90)))
        {
          h_90 :
          if(((ATgetType(k_90) == AT_LIST) && ATisEmpty(k_90)))
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
ATerm genzip_4 (ATerm t, ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm))
{
  ATerm m_90 (ATerm t)
  {
    ATerm b_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_107(t);
        ;
        LocalPopChoice(f_18);
      }
    else
      {
        t = b_18;
        {
          t = a_108(t);
          {
            t = _2(t, c_108, m_90);
            t = b_108(t);
          }
        }
      }
    return(t);
  }
  t = m_90(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm e_108 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, e_108);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm x_90 = NULL,y_90 = NULL,z_90 = NULL,a_91 = NULL,b_91 = NULL;
  x_90 = t;
  v_90 :
  if(((ATgetType(x_90) == AT_LIST) && !(ATisEmpty(x_90))))
    {
      y_90 = ATgetFirst((ATermList) x_90);
      b_91 = (ATerm) ATgetNext((ATermList) x_90);
      w_90 :
      if(match_cons(y_90, sym__2))
        {
          z_90 = ATgetArgument(y_90, 0);
          a_91 = ATgetArgument(y_90, 1);
          {
            ATerm f_91 = NULL,g_91 = NULL,m_91 = NULL,s_91 = NULL;
            ATerm g_18;
            g_18 = t;
            {
              ATerm h_91 = NULL;
              ATerm j_91 = NULL,k_91 = NULL,l_91 = NULL;
              t = not_null(a_91);
              {
                h_91 = t;
                {
                  t = SSL_explode_term(not_null(h_91));
                  {
                    j_91 = t;
                    q_90 :
                    if(match_cons(j_91, sym__2))
                      {
                        k_91 = ATgetArgument(j_91, 0);
                        l_91 = ATgetArgument(j_91, 1);
                        {
                          if(((f_91 != NULL) && (f_91 != k_91)))
                            _fail(k_91);
                          else
                            f_91 = k_91;
                          if(((g_91 != NULL) && (g_91 != l_91)))
                            _fail(l_91);
                          else
                            g_91 = l_91;
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
            t = g_18;
            {
              ATerm h_18;
              h_18 = t;
              {
                ATerm n_91 = NULL;
                ATerm p_91 = NULL,q_91 = NULL,r_91 = NULL;
                t = not_null(z_90);
                {
                  n_91 = t;
                  {
                    t = SSL_explode_term(not_null(n_91));
                    {
                      p_91 = t;
                      t_90 :
                      if(match_cons(p_91, sym__2))
                        {
                          q_91 = ATgetArgument(p_91, 0);
                          r_91 = ATgetArgument(p_91, 1);
                          {
                            if(((f_91 != NULL) && (f_91 != q_91)))
                              _fail(q_91);
                            else
                              f_91 = q_91;
                            if(((m_91 != NULL) && (m_91 != r_91)))
                              _fail(r_91);
                            else
                              m_91 = r_91;
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
              t = h_18;
              {
                ATerm t_91 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_91), not_null(g_91));
                {
                  t = zip_1(t, _id);
                  {
                    t_91 = t;
                    if(((s_91 != NULL) && (s_91 != t_91)))
                      _fail(t_91);
                    else
                      s_91 = t_91;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_91), not_null(b_91));
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
  ATerm d_92 = NULL,e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL;
  d_92 = t;
  b_92 :
  if(((ATgetType(d_92) == AT_LIST) && !(ATisEmpty(d_92))))
    {
      e_92 = ATgetFirst((ATermList) d_92);
      h_92 = (ATerm) ATgetNext((ATermList) d_92);
      c_92 :
      if(match_cons(e_92, sym__2))
        {
          f_92 = ATgetArgument(e_92, 0);
          g_92 = ATgetArgument(e_92, 1);
          {
            ATerm l_92 = NULL;
            if(((f_92 != NULL) && (f_92 != g_92)))
              _fail(g_92);
            else
              f_92 = g_92;
            {
              if(((l_92 != NULL) && (l_92 != h_92)))
                _fail(h_92);
              else
                l_92 = h_92;
              t = not_null(l_92);
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
  ATerm i_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_3 (ATerm t)
      {
        ATerm o_92 = NULL;
        o_92 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(o_92));
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        ATerm n_18 = t;
        int o_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_3 (ATerm t)
            {
              ATerm p_18 = t;
              int s_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(s_18);
                }
              else
                {
                  t = p_18;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, f_3);
            ;
            LocalPopChoice(o_18);
          }
        else
          {
            t = n_18;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, c_3, d_3, e_3);
      ;
      LocalPopChoice(m_18);
    }
  else
    {
      t = i_18;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm l_132 (ATerm), ATerm m_132 (ATerm), ATerm n_132 (ATerm))
{
  ATerm d_93 = NULL,e_93 = NULL,f_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL;
  d_93 = t;
  b_93 :
  if(match_cons(d_93, sym__5))
    {
      e_93 = ATgetArgument(d_93, 0);
      j_93 = ATgetArgument(d_93, 1);
      k_93 = ATgetArgument(d_93, 2);
      l_93 = ATgetArgument(d_93, 3);
      m_93 = ATgetArgument(d_93, 4);
      c_93 :
      if(((ATgetType(e_93) == AT_LIST) && !(ATisEmpty(e_93))))
        {
          f_93 = ATgetFirst((ATermList) e_93);
          i_93 = (ATerm) ATgetNext((ATermList) e_93);
          {
            ATerm w_93 = NULL,x_93 = NULL,y_93 = NULL,z_93 = NULL,f_94 = NULL,h_94 = NULL,j_94 = NULL;
            ATerm a_19;
            a_19 = t;
            {
              ATerm a_94 = NULL,b_94 = NULL,c_94 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_93), not_null(k_93));
              {
                t = l_132(t);
                {
                  a_94 = t;
                  x_92 :
                  if(match_cons(a_94, sym__2))
                    {
                      b_94 = ATgetArgument(a_94, 0);
                      c_94 = ATgetArgument(a_94, 1);
                      {
                        ATerm d_94 = NULL;
                        if(((x_93 != NULL) && (x_93 != b_94)))
                          _fail(b_94);
                        else
                          x_93 = b_94;
                        {
                          if(((w_93 != NULL) && (w_93 != c_94)))
                            _fail(c_94);
                          else
                            w_93 = c_94;
                          {
                            t = not_null(x_93);
                            {
                              ATerm e_94 = NULL;
                              t = m_132(t);
                              {
                                d_94 = t;
                                {
                                  if(((y_93 != NULL) && (y_93 != d_94)))
                                    _fail(d_94);
                                  else
                                    y_93 = d_94;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_93), not_null(j_93));
                                    {
                                      t = diff_0(t);
                                      {
                                        e_94 = t;
                                        if(((z_93 != NULL) && (z_93 != e_94)))
                                          _fail(e_94);
                                        else
                                          z_93 = e_94;
                                      }
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
            t = a_19;
            {
              ATerm b_19;
              b_19 = t;
              {
                ATerm g_94 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_93), not_null(i_93));
                {
                  t = conc_0(t);
                  {
                    g_94 = t;
                    if(((f_94 != NULL) && (f_94 != g_94)))
                      _fail(g_94);
                    else
                      f_94 = g_94;
                  }
                }
              }
              t = b_19;
              {
                ATerm c_19;
                c_19 = t;
                {
                  ATerm i_94 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_93), not_null(j_93));
                  {
                    t = conc_0(t);
                    {
                      i_94 = t;
                      if(((h_94 != NULL) && (h_94 != i_94)))
                        _fail(i_94);
                      else
                        h_94 = i_94;
                    }
                  }
                }
                t = c_19;
                {
                  ATerm k_94 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(f_93), not_null(x_93), not_null(l_93));
                  {
                    t = n_132(t);
                    {
                      k_94 = t;
                      if(((j_94 != NULL) && (j_94 != k_94)))
                        _fail(k_94);
                      else
                        j_94 = k_94;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(f_94), not_null(h_94), not_null(w_93), not_null(j_94), not_null(m_93));
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
  ATerm x_94 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL;
  x_94 = t;
  t_94 :
  if(match_cons(x_94, sym__5))
    {
      f_95 = ATgetArgument(x_94, 0);
      g_95 = ATgetArgument(x_94, 1);
      h_95 = ATgetArgument(x_94, 2);
      i_95 = ATgetArgument(x_94, 3);
      j_95 = ATgetArgument(x_94, 4);
      w_94 :
      if(((ATgetType(f_95) == AT_LIST) && ATisEmpty(f_95)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_95), not_null(j_95));
        }
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
  ATerm r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL;
  r_95 = t;
  q_95 :
  if(match_cons(r_95, sym__3))
    {
      s_95 = ATgetArgument(r_95, 0);
      t_95 = ATgetArgument(r_95, 1);
      u_95 = ATgetArgument(r_95, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(s_95), not_null(s_95), not_null(t_95), not_null(u_95), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm m_120 (ATerm), ATerm n_120 (ATerm))
{
  ATerm z_95 (ATerm t)
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_120(t);
        ;
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        {
          t = n_120(t);
          t = z_95(t);
        }
      }
    return(t);
  }
  t = z_95(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm r_120 (ATerm))
{
  t = p_120(t);
  t = while_not_2(t, q_120, r_120);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm y_131 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, w_131, x_131, y_131);
        ;
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, g_3);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    t = svars_arity_0(t);
    {
      ATerm j_3 (ATerm t)
      {
        t = try_1(t, DefinitionExists_0);
        return(t);
      }
      t = map_1(t, j_3);
    }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL;
    c_96 = t;
    b_96 :
    if(match_cons(c_96, sym__3))
      {
        d_96 = ATgetArgument(c_96, 0);
        e_96 = ATgetArgument(c_96, 1);
        f_96 = ATgetArgument(c_96, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(f_96)), not_null(e_96));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, h_3, i_3);
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        ;
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        {
          t = MissingDefs_0(t);
          {
            t = term_k_7;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm n_115 (ATerm))
{
  ATerm o_96 = NULL,p_96 = NULL,q_96 = NULL;
  o_96 = t;
  n_96 :
  if(match_cons(o_96, sym__2))
    {
      p_96 = ATgetArgument(o_96, 0);
      q_96 = ATgetArgument(o_96, 1);
      {
        ATerm t_96 = NULL,u_96 = NULL,v_96 = NULL;
        ATerm s_19;
        s_19 = t;
        {
          ATerm w_96 = NULL;
          ATerm x_96 = NULL,y_96 = NULL,z_96 = NULL;
          t = n_115(t);
          {
            w_96 = t;
            {
              if(((t_96 != NULL) && (t_96 != w_96)))
                _fail(w_96);
              else
                t_96 = w_96;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(t_96), not_null(p_96), not_null(q_96));
                {
                  t = table_push_0(t);
                  {
                    ATerm t_19 = t;
                    int z_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(t_96), term_e_20);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(z_19);
                      }
                    else
                      {
                        t = t_19;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      x_96 = t;
                      m_96 :
                      if(((ATgetType(x_96) == AT_LIST) && !(ATisEmpty(x_96))))
                        {
                          y_96 = ATgetFirst((ATermList) x_96);
                          z_96 = (ATerm) ATgetNext((ATermList) x_96);
                          {
                            if(((u_96 != NULL) && (u_96 != y_96)))
                              _fail(y_96);
                            else
                              u_96 = y_96;
                            {
                              if(((v_96 != NULL) && (v_96 != z_96)))
                                _fail(z_96);
                              else
                                v_96 = z_96;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(t_96), term_e_20, (ATerm) ATinsert(CheckATermList(not_null(v_96)), (ATerm) ATinsert(CheckATermList(not_null(u_96)), not_null(p_96))));
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
        t = s_19;
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
  ATerm f_97 = NULL,g_97 = NULL,h_97 = NULL;
  f_97 = t;
  e_97 :
  if(match_cons(f_97, sym__2))
    {
      g_97 = ATgetArgument(f_97, 0);
      h_97 = ATgetArgument(f_97, 1);
      if(((g_97 != NULL) && (g_97 != h_97)))
        _fail(h_97);
      else
        g_97 = h_97;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm t_111 (ATerm), ATerm u_111 (ATerm))
{
  ATerm n_97 = NULL,o_97 = NULL,p_97 = NULL;
  n_97 = t;
  m_97 :
  if(((ATgetType(n_97) == AT_LIST) && !(ATisEmpty(n_97))))
    {
      o_97 = ATgetFirst((ATermList) n_97);
      p_97 = (ATerm) ATgetNext((ATermList) n_97);
      {
        t = u_111(t);
        {
          ATerm k_3 (ATerm t)
          {
            ATerm s_97 = NULL;
            s_97 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_97), not_null(s_97));
              t = t_111(t);
            }
            return(t);
          }
          t = fetch_1(t, k_3);
        }
        t = not_null(p_97);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm p_111 (ATerm))
{
  ATerm y_97 = NULL,z_97 = NULL,a_98 = NULL;
  y_97 = t;
  x_97 :
  if(match_cons(y_97, sym__2))
    {
      z_97 = ATgetArgument(y_97, 0);
      a_98 = ATgetArgument(y_97, 1);
      {
        t = not_null(z_97);
        {
          ATerm e_98 (ATerm t)
          {
            ATerm m_20 = t;
            int n_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(a_98);
                ;
                LocalPopChoice(n_20);
              }
            else
              {
                t = m_20;
                {
                  ATerm o_20 = t;
                  int p_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_3 (ATerm t)
                      {
                        t = not_null(a_98);
                        return(t);
                      }
                      t = HdMember_p__2(t, p_111, l_3);
                      t = e_98(t);
                      ;
                      LocalPopChoice(p_20);
                    }
                  else
                    {
                      t = o_20;
                      t = Cons_2(t, _id, e_98);
                    }
                }
              }
            return(t);
          }
          t = e_98(t);
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
  ATerm n_98 = NULL;
  n_98 = t;
  {
    ATerm q_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_98 = NULL;
        ATerm r_98 = NULL,s_98 = NULL,t_98 = NULL;
        t = not_null(n_98);
        {
          ATerm m_3 (ATerm t)
          {
            t = term_w_20;
            return(t);
          }
          t = rewrite_1(t, m_3);
          {
            r_98 = t;
            i_98 :
            if(match_cons(r_98, sym_Defined_2))
              {
                s_98 = ATgetArgument(r_98, 0);
                t_98 = ATgetArgument(r_98, 1);
                j_98 :
                if(match_string(s_98, "l_0"))
                  {
                    if(((q_98 != NULL) && (q_98 != t_98)))
                      _fail(t_98);
                    else
                      q_98 = t_98;
                  }
                else
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
        t = not_null(q_98);
        ;
        LocalPopChoice(v_20);
      }
    else
      {
        t = q_20;
        {
          ATerm w_98 = NULL;
          ATerm x_98 = NULL,y_98 = NULL,z_98 = NULL;
          t = not_null(n_98);
          {
            ATerm n_3 (ATerm t)
            {
              t = term_w_20;
              return(t);
            }
            t = rewrite_1(t, n_3);
            {
              x_98 = t;
              l_98 :
              if(match_cons(x_98, sym_Defined_2))
                {
                  y_98 = ATgetArgument(x_98, 0);
                  z_98 = ATgetArgument(x_98, 1);
                  m_98 :
                  if(match_string(y_98, "h_0"))
                    {
                      if(((w_98 != NULL) && (w_98 != z_98)))
                        _fail(z_98);
                      else
                        w_98 = z_98;
                    }
                  else
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
          t = not_null(w_98);
        }
      }
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm g_99 = NULL,h_99 = NULL,i_99 = NULL;
  g_99 = t;
  f_99 :
  if(((ATgetType(g_99) == AT_LIST) && !(ATisEmpty(g_99))))
    {
      h_99 = ATgetFirst((ATermList) g_99);
      i_99 = (ATerm) ATgetNext((ATermList) g_99);
      t = not_null(h_99);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm n_99 = NULL,o_99 = NULL,p_99 = NULL;
  n_99 = t;
  m_99 :
  if(match_cons(n_99, sym__2))
    {
      o_99 = ATgetArgument(n_99, 0);
      p_99 = ATgetArgument(n_99, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_99), not_null(p_99));
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
ATerm rewrite_1 (ATerm t, ATerm p_115 (ATerm))
{
  ATerm v_99 = NULL;
  ATerm x_99 = NULL;
  v_99 = t;
  {
    ATerm y_99 = NULL;
    t = term_b_17;
    {
      t = p_115(t);
      {
        y_99 = t;
        if(((x_99 != NULL) && (x_99 != y_99)))
          _fail(y_99);
        else
          x_99 = y_99;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_99), not_null(v_99));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm l_100 = NULL,m_100 = NULL,n_100 = NULL,o_100 = NULL,p_100 = NULL;
  ATerm k_101 (ATerm t)
  {
    ATerm d_101 = NULL,e_101 = NULL;
    ATerm f_101 = NULL,g_101 = NULL,h_101 = NULL,i_101 = NULL;
    t = not_null(n_100);
    {
      ATerm o_3 (ATerm t)
      {
        t = term_x_20;
        return(t);
      }
      t = rewrite_1(t, o_3);
      {
        f_101 = t;
        h_100 :
        if(match_cons(f_101, sym_Defined_3))
          {
            g_101 = ATgetArgument(f_101, 0);
            h_101 = ATgetArgument(f_101, 1);
            i_101 = ATgetArgument(f_101, 2);
            i_100 :
            if(match_string(g_101, "e_0"))
              {
                if(((d_101 != NULL) && (d_101 != h_101)))
                  _fail(h_101);
                else
                  d_101 = h_101;
                if(((e_101 != NULL) && (e_101 != i_101)))
                  _fail(i_101);
                else
                  e_101 = i_101;
              }
            else
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
    t = (ATerm) ATinsert(CheckATermList(not_null(e_101)), not_null(d_101));
    return(t);
  }
  n_100 = t;
  j_100 :
  if(match_cons(n_100, sym__2))
    {
      o_100 = ATgetArgument(n_100, 0);
      p_100 = ATgetArgument(n_100, 1);
      k_100 :
      if(match_cons(p_100, sym__2))
        {
          l_100 = ATgetArgument(p_100, 0);
          m_100 = ATgetArgument(p_100, 1);
          {
            ATerm b_21 = t;
            int c_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_100 = NULL;
                ATerm x_100 = NULL,y_100 = NULL,z_100 = NULL;
                t = not_null(n_100);
                {
                  ATerm p_3 (ATerm t)
                  {
                    t = term_x_20;
                    return(t);
                  }
                  t = rewrite_1(t, p_3);
                  {
                    x_100 = t;
                    e_100 :
                    if(match_cons(x_100, sym_Defined_2))
                      {
                        y_100 = ATgetArgument(x_100, 0);
                        z_100 = ATgetArgument(x_100, 1);
                        f_100 :
                        if(match_string(y_100, "j_0"))
                          {
                            if(((w_100 != NULL) && (w_100 != z_100)))
                              _fail(z_100);
                            else
                              w_100 = z_100;
                          }
                        else
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
                t = not_null(w_100);
                ;
                LocalPopChoice(c_21);
              }
            else
              {
                t = b_21;
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
ATerm foldr_3 (ATerm t, ATerm e_114 (ATerm), ATerm f_114 (ATerm), ATerm g_114 (ATerm))
{
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_114(t);
      ;
      LocalPopChoice(e_21);
    }
  else
    {
      t = d_21;
      {
        ATerm r_101 = NULL,s_101 = NULL,t_101 = NULL;
        r_101 = t;
        q_101 :
        if(((ATgetType(r_101) == AT_LIST) && !(ATisEmpty(r_101))))
          {
            s_101 = ATgetFirst((ATermList) r_101);
            t_101 = (ATerm) ATgetNext((ATermList) r_101);
            {
              ATerm w_101 = NULL,y_101 = NULL;
              ATerm q_21;
              q_21 = t;
              {
                ATerm x_101 = NULL;
                t = not_null(s_101);
                {
                  t = g_114(t);
                  {
                    x_101 = t;
                    if(((w_101 != NULL) && (w_101 != x_101)))
                      _fail(x_101);
                    else
                      w_101 = x_101;
                  }
                }
              }
              t = q_21;
              {
                ATerm z_101 = NULL;
                t = not_null(t_101);
                {
                  t = foldr_3(t, e_114, f_114, g_114);
                  {
                    z_101 = t;
                    if(((y_101 != NULL) && (y_101 != z_101)))
                      _fail(z_101);
                    else
                      y_101 = z_101;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_101), not_null(y_101));
                  t = f_114(t);
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
  ATerm q_3 (ATerm t)
  {
    t = term_r_21;
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    t = term_k_7;
    return(t);
  }
  t = foldr_3(t, q_3, add_0, r_3);
  return(t);
}
ATerm RegisterSDefT_0 (ATerm t)
{
  ATerm l_102 = NULL,m_102 = NULL,n_102 = NULL,o_102 = NULL,p_102 = NULL;
  l_102 = t;
  k_102 :
  if(match_cons(l_102, sym_SDefT_4))
    {
      m_102 = ATgetArgument(l_102, 0);
      n_102 = ATgetArgument(l_102, 1);
      o_102 = ATgetArgument(l_102, 2);
      p_102 = ATgetArgument(l_102, 3);
      {
        ATerm b_103 = NULL,c_103 = NULL,d_103 = NULL,e_103 = NULL;
        ATerm s_21;
        s_21 = t;
        {
          ATerm f_103 = NULL;
          t = not_null(n_102);
          {
            ATerm g_103 = NULL;
            t = length_0(t);
            {
              f_103 = t;
              {
                if(((b_103 != NULL) && (b_103 != f_103)))
                  _fail(f_103);
                else
                  b_103 = f_103;
                {
                  t = not_null(o_102);
                  {
                    ATerm h_103 = NULL,j_103 = NULL;
                    t = length_0(t);
                    {
                      g_103 = t;
                      {
                        if(((c_103 != NULL) && (c_103 != g_103)))
                          _fail(g_103);
                        else
                          c_103 = g_103;
                        {
                          ATerm t_21;
                          t_21 = t;
                          {
                            ATerm i_103 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(m_102), (ATerm) ATmakeAppl(sym__2, not_null(b_103), not_null(c_103)));
                            {
                              ATerm u_21 = t;
                              int c_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Definitions_0(t);
                                  ;
                                  LocalPopChoice(c_22);
                                }
                              else
                                {
                                  t = u_21;
                                  t = (ATerm) ATempty;
                                }
                              {
                                i_103 = t;
                                if(((h_103 != NULL) && (h_103 != i_103)))
                                  _fail(i_103);
                                else
                                  h_103 = i_103;
                              }
                            }
                          }
                          t = t_21;
                          {
                            ATerm k_103 = NULL,p_103 = NULL;
                            t = (ATerm) ATinsert(CheckATermList(not_null(h_103)), not_null(l_102));
                            {
                              j_103 = t;
                              {
                                if(((d_103 != NULL) && (d_103 != j_103)))
                                  _fail(j_103);
                                else
                                  d_103 = j_103;
                                {
                                  ATerm o_103 = NULL;
                                  t = not_null(m_102);
                                  {
                                    ATerm d_22 = t;
                                    int e_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = Arities_0(t);
                                        ;
                                        LocalPopChoice(e_22);
                                      }
                                    else
                                      {
                                        t = d_22;
                                        t = (ATerm) ATempty;
                                      }
                                    {
                                      o_103 = t;
                                      if(((k_103 != NULL) && (k_103 != o_103)))
                                        _fail(o_103);
                                      else
                                        k_103 = o_103;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(b_103), not_null(c_103))), not_null(k_103));
                                    {
                                      t = union_0(t);
                                      {
                                        p_103 = t;
                                        {
                                          if(((e_103 != NULL) && (e_103 != p_103)))
                                            _fail(p_103);
                                          else
                                            e_103 = p_103;
                                          {
                                            ATerm f_22;
                                            f_22 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(m_102), (ATerm) ATmakeAppl(sym__2, not_null(b_103), not_null(c_103))), (ATerm) ATmakeAppl(sym_Defined_2, term_q_22, not_null(d_103)));
                                              {
                                                ATerm s_3 (ATerm t)
                                                {
                                                  t = term_x_20;
                                                  return(t);
                                                }
                                                t = assert_1(t, s_3);
                                              }
                                            }
                                            t = f_22;
                                            {
                                              ATerm s_22;
                                              s_22 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_102), (ATerm) ATmakeAppl(sym_Defined_2, term_t_22, not_null(e_103)));
                                                {
                                                  ATerm t_3 (ATerm t)
                                                  {
                                                    t = term_w_20;
                                                    return(t);
                                                  }
                                                  t = assert_1(t, t_3);
                                                }
                                              }
                                              t = s_22;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = s_21;
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
  ATerm y_103 = NULL;
  ATerm z_103 = NULL;
  t = sort_defs_0(t);
  {
    z_103 = t;
    if(((y_103 != NULL) && (y_103 != z_103)))
      _fail(z_103);
    else
      y_103 = z_103;
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_w_22), not_null(y_103), (ATerm) ATempty);
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm a_88 (ATerm))
{
  ATerm g_104 = NULL,h_104 = NULL;
  g_104 = t;
  f_104 :
  if(match_cons(g_104, sym_Strategies_1))
    {
      h_104 = ATgetArgument(g_104, 0);
      {
        ATerm k_104 = NULL,m_104 = NULL;
        ATerm l_104 = NULL;
        t = SSLgetAnnotations(not_null(g_104));
        {
          l_104 = t;
          if(((k_104 != NULL) && (k_104 != l_104)))
            _fail(l_104);
          else
            k_104 = l_104;
        }
        {
          t = not_null(h_104);
          {
            ATerm o_104 = NULL;
            t = a_88(t);
            {
              m_104 = t;
              {
                ATerm p_104 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(m_104)), not_null(k_104));
                {
                  p_104 = t;
                  if(((o_104 != NULL) && (o_104 != p_104)))
                    _fail(p_104);
                  else
                    o_104 = p_104;
                }
                t = not_null(o_104);
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
ATerm Cons_2 (ATerm t, ATerm w_87 (ATerm), ATerm x_87 (ATerm))
{
  ATerm c_105 = NULL,d_105 = NULL,e_105 = NULL;
  c_105 = t;
  b_105 :
  if(((ATgetType(c_105) == AT_LIST) && !(ATisEmpty(c_105))))
    {
      d_105 = ATgetFirst((ATermList) c_105);
      e_105 = (ATerm) ATgetNext((ATermList) c_105);
      {
        ATerm k_105 = NULL,m_105 = NULL;
        ATerm l_105 = NULL;
        t = SSLgetAnnotations(not_null(c_105));
        {
          l_105 = t;
          if(((k_105 != NULL) && (k_105 != l_105)))
            _fail(l_105);
          else
            k_105 = l_105;
        }
        {
          t = not_null(d_105);
          {
            ATerm o_105 = NULL;
            t = w_87(t);
            {
              m_105 = t;
              {
                t = not_null(e_105);
                {
                  ATerm q_105 = NULL;
                  t = x_87(t);
                  {
                    o_105 = t;
                    {
                      ATerm r_105 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_105)), not_null(m_105)), not_null(k_105));
                      {
                        r_105 = t;
                        if(((q_105 != NULL) && (q_105 != r_105)))
                          _fail(r_105);
                        else
                          q_105 = r_105;
                      }
                      t = not_null(q_105);
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
ATerm Specification_1 (ATerm t, ATerm f_88 (ATerm))
{
  ATerm c_106 = NULL,d_106 = NULL;
  c_106 = t;
  b_106 :
  if(match_cons(c_106, sym_Specification_1))
    {
      d_106 = ATgetArgument(c_106, 0);
      {
        ATerm h_106 = NULL,j_106 = NULL;
        ATerm i_106 = NULL;
        t = SSLgetAnnotations(not_null(c_106));
        {
          i_106 = t;
          if(((h_106 != NULL) && (h_106 != i_106)))
            _fail(i_106);
          else
            h_106 = i_106;
        }
        {
          t = not_null(d_106);
          {
            ATerm l_106 = NULL;
            t = f_88(t);
            {
              j_106 = t;
              {
                ATerm m_106 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(j_106)), not_null(h_106));
                {
                  m_106 = t;
                  if(((l_106 != NULL) && (l_106 != m_106)))
                    _fail(m_106);
                  else
                    l_106 = m_106;
                }
                t = not_null(l_106);
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
ATerm _2 (ATerm t, ATerm n_86 (ATerm), ATerm o_86 (ATerm))
{
  ATerm x_106 = NULL,y_106 = NULL,b_107 = NULL;
  x_106 = t;
  w_106 :
  if(match_cons(x_106, sym__2))
    {
      y_106 = ATgetArgument(x_106, 0);
      b_107 = ATgetArgument(x_106, 1);
      {
        ATerm f_107 = NULL,h_107 = NULL;
        ATerm g_107 = NULL;
        t = SSLgetAnnotations(not_null(x_106));
        {
          g_107 = t;
          if(((f_107 != NULL) && (f_107 != g_107)))
            _fail(g_107);
          else
            f_107 = g_107;
        }
        {
          t = not_null(y_106);
          {
            ATerm j_107 = NULL;
            t = n_86(t);
            {
              h_107 = t;
              {
                t = not_null(b_107);
                {
                  ATerm l_107 = NULL;
                  t = o_86(t);
                  {
                    j_107 = t;
                    {
                      ATerm m_107 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(h_107), not_null(j_107)), not_null(f_107));
                      {
                        m_107 = t;
                        if(((l_107 != NULL) && (l_107 != m_107)))
                          _fail(m_107);
                        else
                          l_107 = m_107;
                      }
                      t = not_null(l_107);
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
  ATerm y_22;
  y_22 = t;
  {
    ATerm v_107 = NULL;
    ATerm w_107 = NULL;
    t = term_b_17;
    {
      t = whoami_0(t);
      {
        w_107 = t;
        if(((v_107 != NULL) && (v_107 != w_107)))
          _fail(w_107);
        else
          v_107 = w_107;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_23), not_null(v_107)), term_d_23));
      {
        t = printnl_0(t);
        {
          t = term_k_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = y_22;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm g_108 = NULL,i_108 = NULL,k_108 = NULL;
  g_108 = t;
  f_108 :
  if(match_cons(g_108, sym__2))
    {
      i_108 = ATgetArgument(g_108, 0);
      k_108 = ATgetArgument(g_108, 1);
      {
        ATerm f_23;
        f_23 = t;
        t = SSL_printnl(not_null(i_108), not_null(k_108));
        t = f_23;
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
  ATerm p_108 = NULL;
  p_108 = t;
  t = SSL_implode_string(not_null(p_108));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      {
        ATerm u_108 = NULL,v_108 = NULL,w_108 = NULL;
        u_108 = t;
        t_108 :
        if(((ATgetType(u_108) == AT_LIST) && !(ATisEmpty(u_108))))
          {
            v_108 = ATgetFirst((ATermList) u_108);
            w_108 = (ATerm) ATgetNext((ATermList) u_108);
            {
              t = not_null(v_108);
              {
                ATerm u_3 (ATerm t)
                {
                  t = not_null(w_108);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, u_3);
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
  ATerm g_109 = NULL;
  ATerm i_109 = NULL;
  g_109 = t;
  {
    ATerm j_109 = NULL;
    ATerm l_109 = NULL,n_109 = NULL,q_109 = NULL;
    t = not_null(g_109);
    {
      j_109 = t;
      {
        t = SSL_explode_term(not_null(j_109));
        {
          l_109 = t;
          e_109 :
          if(match_cons(l_109, sym__2))
            {
              n_109 = ATgetArgument(l_109, 0);
              q_109 = ATgetArgument(l_109, 1);
              f_109 :
              if(match_string(n_109, ""))
                {
                  if(((i_109 != NULL) && (i_109 != q_109)))
                    _fail(q_109);
                  else
                    i_109 = q_109;
                }
              else
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
      t = not_null(i_109);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_110 (ATerm))
{
  ATerm u_109 (ATerm t)
  {
    ATerm j_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, u_109);
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = j_23;
        {
          t = Nil_0(t);
          t = e_110(t);
        }
      }
    return(t);
  }
  t = u_109(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm x_109 = NULL,a_110 = NULL,b_110 = NULL;
  x_109 = t;
  w_109 :
  if(match_cons(x_109, sym__2))
    {
      a_110 = ATgetArgument(x_109, 0);
      b_110 = ATgetArgument(x_109, 1);
      {
        t = not_null(a_110);
        {
          ATerm v_3 (ATerm t)
          {
            t = not_null(b_110);
            return(t);
          }
          t = at_end_1(t, v_3);
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
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm i_110 = NULL;
  i_110 = t;
  t = SSL_explode_string(not_null(i_110));
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
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      {
        ATerm v_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, w_3);
            ;
            LocalPopChoice(y_23);
          }
        else
          {
            t = v_23;
            {
              ATerm r_110 = NULL,s_110 = NULL,t_110 = NULL;
              r_110 = t;
              q_110 :
              if(match_cons(r_110, sym_Path_1))
                {
                  s_110 = ATgetArgument(r_110, 0);
                  t = not_null(s_110);
                }
              else
                {
                  if(match_cons(r_110, sym_Var_1))
                    {
                      s_110 = ATgetArgument(r_110, 0);
                      {
                        t = not_null(s_110);
                        {
                          ATerm z_23 = t;
                          int a_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(a_24);
                            }
                          else
                            {
                              t = z_23;
                              {
                                ATerm x_3 (ATerm t)
                                {
                                  t = term_b_24;
                                  return(t);
                                }
                                t = debug_1(t, x_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(r_110, sym_Prefix_2))
                        {
                          s_110 = ATgetArgument(r_110, 0);
                          t_110 = ATgetArgument(r_110, 1);
                          {
                            ATerm y_110 = NULL,a_111 = NULL;
                            ATerm g_24;
                            g_24 = t;
                            {
                              ATerm z_110 = NULL;
                              t = not_null(s_110);
                              {
                                t = eval_config_0(t);
                                {
                                  z_110 = t;
                                  if(((y_110 != NULL) && (y_110 != z_110)))
                                    _fail(z_110);
                                  else
                                    y_110 = z_110;
                                }
                              }
                            }
                            t = g_24;
                            {
                              ATerm b_111 = NULL;
                              t = not_null(t_110);
                              {
                                t = eval_config_0(t);
                                {
                                  b_111 = t;
                                  if(((a_111 != NULL) && (a_111 != b_111)))
                                    _fail(b_111);
                                  else
                                    a_111 = b_111;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_110), not_null(a_111));
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
  ATerm j_111 = NULL;
  j_111 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_24, not_null(j_111));
    {
      t = table_get_0(t);
      {
        ATerm y_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm i_24;
            i_24 = t;
            {
              ATerm n_111 = NULL;
              ATerm o_111 = NULL;
              o_111 = t;
              if(((n_111 != NULL) && (n_111 != o_111)))
                _fail(o_111);
              else
                n_111 = o_111;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_h_24, not_null(j_111), not_null(n_111));
                t = table_put_0(t);
              }
            }
            t = i_24;
          }
          return(t);
        }
        t = try_1(t, y_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm g_126 (ATerm))
{
  ATerm z_3 (ATerm t)
  {
    ATerm j_24;
    j_24 = t;
    {
      ATerm w_111 = NULL;
      ATerm x_111 = NULL;
      t = term_k_24;
      {
        t = get_config_0(t);
        {
          x_111 = t;
          if(((w_111 != NULL) && (w_111 != x_111)))
            _fail(x_111);
          else
            w_111 = x_111;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_111), term_l_24);
        t = geq_0(t);
      }
    }
    t = j_24;
    t = g_126(t);
    return(t);
  }
  t = try_1(t, z_3);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm i_112 = NULL,j_112 = NULL,k_112 = NULL,l_112 = NULL;
  i_112 = t;
  g_112 :
  if(match_cons(i_112, sym__2))
    {
      j_112 = ATgetArgument(i_112, 0);
      k_112 = ATgetArgument(i_112, 1);
      h_112 :
      if(match_cons(k_112, sym_Stream_1))
        {
          l_112 = ATgetArgument(k_112, 0);
          {
            ATerm o_112 = NULL;
            t = SSL_fputc(not_null(j_112), not_null(l_112));
            {
              ATerm p_112 = NULL;
              p_112 = t;
              if(((o_112 != NULL) && (o_112 != p_112)))
                _fail(p_112);
              else
                o_112 = p_112;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_112));
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
  ATerm w_112 = NULL,x_112 = NULL,y_112 = NULL,z_112 = NULL;
  w_112 = t;
  u_112 :
  if(match_cons(w_112, sym__2))
    {
      x_112 = ATgetArgument(w_112, 0);
      z_112 = ATgetArgument(w_112, 1);
      v_112 :
      if(match_cons(x_112, sym_Stream_1))
        {
          y_112 = ATgetArgument(x_112, 0);
          {
            ATerm c_113 = NULL;
            t = SSL_write_term_to_stream_text(not_null(y_112), not_null(z_112));
            {
              ATerm d_113 = NULL;
              d_113 = t;
              if(((c_113 != NULL) && (c_113 != d_113)))
                _fail(d_113);
              else
                c_113 = d_113;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_113));
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
  ATerm a_4 (ATerm t)
  {
    ATerm h_113 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm i_113 = NULL;
      i_113 = t;
      if(((h_113 != NULL) && (h_113 != i_113)))
        _fail(i_113);
      else
        h_113 = i_113;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_24, not_null(h_113));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, a_4);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm o_113 = NULL,p_113 = NULL,q_113 = NULL,s_113 = NULL;
  o_113 = t;
  m_113 :
  if(match_cons(o_113, sym__2))
    {
      p_113 = ATgetArgument(o_113, 0);
      s_113 = ATgetArgument(o_113, 1);
      n_113 :
      if(match_cons(p_113, sym_Stream_1))
        {
          q_113 = ATgetArgument(p_113, 0);
          {
            ATerm v_113 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(q_113), not_null(s_113));
            {
              ATerm w_113 = NULL;
              w_113 = t;
              if(((v_113 != NULL) && (v_113 != w_113)))
                _fail(w_113);
              else
                v_113 = w_113;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_113));
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
ATerm WriteToFile_1 (ATerm t, ATerm c_125 (ATerm))
{
  ATerm i_114 = NULL,j_114 = NULL,k_114 = NULL;
  i_114 = t;
  h_114 :
  if(match_cons(i_114, sym__2))
    {
      j_114 = ATgetArgument(i_114, 0);
      k_114 = ATgetArgument(i_114, 1);
      {
        ATerm n_114 = NULL,p_114 = NULL;
        t = not_null(j_114);
        {
          ATerm o_114 = NULL;
          o_114 = t;
          if(((n_114 != NULL) && (n_114 != o_114)))
            _fail(o_114);
          else
            n_114 = o_114;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_114), term_n_24);
            {
              t = open_stream_0(t);
              {
                ATerm s_114 = NULL;
                s_114 = t;
                if(((p_114 != NULL) && (p_114 != s_114)))
                  _fail(s_114);
                else
                  p_114 = s_114;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_114), not_null(k_114));
                  {
                    t = c_125(t);
                    {
                      t = fclose_0(t);
                      t = not_null(k_114);
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
  ATerm a_115 = NULL;
  ATerm s_24;
  s_24 = t;
  {
    ATerm b_4 (ATerm t)
    {
      ATerm t_24 = t;
      int u_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_4 (ATerm t)
          {
            ATerm b_115 = NULL,c_115 = NULL;
            b_115 = t;
            x_114 :
            if(match_cons(b_115, sym_Output_1))
              {
                c_115 = ATgetArgument(b_115, 0);
                if(((a_115 != NULL) && (a_115 != c_115)))
                  _fail(c_115);
                else
                  a_115 = c_115;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, e_4);
          ;
          LocalPopChoice(u_24);
        }
      else
        {
          t = t_24;
          {
            ATerm d_115 = NULL;
            t = term_y_24;
            {
              d_115 = t;
              if(((a_115 != NULL) && (a_115 != d_115)))
                _fail(d_115);
              else
                a_115 = d_115;
            }
          }
        }
      return(t);
    }
    t = _2(t, b_4, _id);
  }
  t = s_24;
  {
    ATerm f_4 (ATerm t)
    {
      ATerm g_4 (ATerm t)
      {
        t = not_null(a_115);
        return(t);
      }
      t = split_2(t, g_4, _id);
      return(t);
    }
    t = _2(t, _id, f_4);
    {
      ATerm a_25 = t;
      int d_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_4 (ATerm t)
          {
            ATerm i_4 (ATerm t)
            {
              ATerm e_115 = NULL;
              e_115 = t;
              z_114 :
              if(!(match_cons(e_115, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, i_4);
            return(t);
          }
          t = _2(t, h_4, WriteToBinaryFile_0);
          ;
          LocalPopChoice(d_25);
        }
      else
        {
          t = a_25;
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
ATerm apply_strategy_1 (ATerm t, ATerm e_128 (ATerm))
{
  ATerm k_115 = NULL,m_115 = NULL,o_115 = NULL,q_115 = NULL;
  ATerm e_25;
  e_25 = t;
  t = dtime_0(t);
  t = e_25;
  {
    t = e_128(t);
    {
      ATerm f_25;
      f_25 = t;
      {
        ATerm l_115 = NULL;
        t = dtime_0(t);
        {
          l_115 = t;
          if(((k_115 != NULL) && (k_115 != l_115)))
            _fail(l_115);
          else
            k_115 = l_115;
        }
      }
      t = f_25;
      {
        m_115 = t;
        j_115 :
        if(match_cons(m_115, sym__2))
          {
            o_115 = ATgetArgument(m_115, 0);
            q_115 = ATgetArgument(m_115, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_115)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(k_115))), not_null(q_115));
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
  ATerm y_115 = NULL,z_115 = NULL;
  ATerm f_116 (ATerm t)
  {
    t = SSL_fclose(not_null(z_115));
    return(t);
  }
  z_115 = t;
  x_115 :
  if(match_cons(z_115, sym_Stream_1))
    {
      y_115 = ATgetArgument(z_115, 0);
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(y_115));
            ;
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
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
ATerm read_from_stream_0 (ATerm t)
{
  ATerm i_116 = NULL,j_116 = NULL;
  i_116 = t;
  h_116 :
  if(match_cons(i_116, sym_Stream_1))
    {
      j_116 = ATgetArgument(i_116, 0);
      t = SSL_read_term_from_stream(not_null(j_116));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm o_124 (ATerm))
{
  ATerm i_25;
  i_25 = t;
  {
    ATerm o_116 = NULL,q_116 = NULL;
    ATerm j_25;
    j_25 = t;
    {
      ATerm p_116 = NULL;
      t = o_124(t);
      {
        p_116 = t;
        if(((o_116 != NULL) && (o_116 != p_116)))
          _fail(p_116);
        else
          o_116 = p_116;
      }
    }
    t = j_25;
    {
      ATerm r_116 = NULL;
      r_116 = t;
      if(((q_116 != NULL) && (q_116 != r_116)))
        _fail(r_116);
      else
        q_116 = r_116;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_116)), not_null(o_116)));
        t = printnl_0(t);
      }
    }
  }
  t = i_25;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm x_116 = NULL,y_116 = NULL,z_116 = NULL;
  x_116 = t;
  w_116 :
  if(match_cons(x_116, sym__2))
    {
      y_116 = ATgetArgument(x_116, 0);
      z_116 = ATgetArgument(x_116, 1);
      {
        ATerm c_117 = NULL;
        t = SSL_fopen(not_null(y_116), not_null(z_116));
        {
          ATerm d_117 = NULL;
          d_117 = t;
          if(((c_117 != NULL) && (c_117 != d_117)))
            _fail(d_117);
          else
            c_117 = d_117;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_117));
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
  ATerm h_117 = NULL;
  h_117 = t;
  t = SSL_is_string(not_null(h_117));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm l_117 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm m_117 = NULL;
    m_117 = t;
    if(((l_117 != NULL) && (l_117 != m_117)))
      _fail(m_117);
    else
      l_117 = m_117;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_117));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm p_117 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm q_117 = NULL;
    q_117 = t;
    if(((p_117 != NULL) && (p_117 != q_117)))
      _fail(q_117);
    else
      p_117 = q_117;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_117));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm t_117 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm u_117 = NULL;
    u_117 = t;
    if(((t_117 != NULL) && (t_117 != u_117)))
      _fail(u_117);
    else
      t_117 = u_117;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_117));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm f_118 = NULL;
  f_118 = t;
  e_118 :
  if(match_cons(f_118, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(f_118, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(f_118, sym_stdin_0))
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
  ATerm p_118 = NULL;
  ATerm r_118 = NULL,s_118 = NULL;
  p_118 = t;
  {
    ATerm t_118 = NULL;
    ATerm v_118 = NULL,w_118 = NULL,x_118 = NULL,y_118 = NULL,z_118 = NULL;
    t = not_null(p_118);
    {
      t_118 = t;
      {
        t = SSL_explode_term(not_null(t_118));
        {
          v_118 = t;
          m_118 :
          if(match_cons(v_118, sym__2))
            {
              w_118 = ATgetArgument(v_118, 0);
              x_118 = ATgetArgument(v_118, 1);
              n_118 :
              if(match_string(w_118, ""))
                {
                  o_118 :
                  if(((ATgetType(x_118) == AT_LIST) && !(ATisEmpty(x_118))))
                    {
                      y_118 = ATgetFirst((ATermList) x_118);
                      z_118 = (ATerm) ATgetNext((ATermList) x_118);
                      {
                        if(((s_118 != NULL) && (s_118 != y_118)))
                          _fail(y_118);
                        else
                          s_118 = y_118;
                        if(((r_118 != NULL) && (r_118 != z_118)))
                          _fail(z_118);
                        else
                          r_118 = z_118;
                      }
                    }
                  else
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
    t = not_null(s_118);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm h_119 = NULL,i_119 = NULL,j_119 = NULL;
  h_119 = t;
  g_119 :
  if(match_cons(h_119, sym__2))
    {
      i_119 = ATgetArgument(h_119, 0);
      j_119 = ATgetArgument(h_119, 1);
      {
        ATerm k_25 = t;
        int l_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(l_25);
          }
        else
          {
            t = k_25;
            {
              ATerm n_25 = t;
              int o_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_4 (ATerm t)
                  {
                    ATerm k_119 = NULL,l_119 = NULL;
                    k_119 = t;
                    f_119 :
                    if(match_cons(k_119, sym_Path_1))
                      {
                        l_119 = ATgetArgument(k_119, 0);
                        t = not_null(l_119);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, j_4, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(o_25);
                }
              else
                {
                  t = n_25;
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
  ATerm t_119 = NULL;
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_119 = NULL;
      ATerm s_119 = NULL;
      s_119 = t;
      if(((r_119 != NULL) && (r_119 != s_119)))
        _fail(s_119);
      else
        r_119 = s_119;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_119), term_s_25);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(r_25);
    }
  else
    {
      t = q_25;
      {
        ATerm k_4 (ATerm t)
        {
          t = term_u_25;
          return(t);
        }
        t = debug_1(t, k_4);
        _fail(t);
      }
    }
  {
    ATerm v_25;
    v_25 = t;
    {
      ATerm u_119 = NULL;
      t = read_from_stream_0(t);
      {
        u_119 = t;
        if(((t_119 != NULL) && (t_119 != u_119)))
          _fail(u_119);
        else
          t_119 = u_119;
      }
    }
    t = v_25;
    {
      t = fclose_0(t);
      t = not_null(t_119);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm z_106 (ATerm), ATerm a_107 (ATerm))
{
  ATerm b_120 = NULL,d_120 = NULL;
  ATerm x_25;
  x_25 = t;
  {
    ATerm c_120 = NULL;
    t = z_106(t);
    {
      c_120 = t;
      if(((b_120 != NULL) && (b_120 != c_120)))
        _fail(c_120);
      else
        b_120 = c_120;
    }
  }
  t = x_25;
  {
    ATerm e_120 = NULL;
    t = a_107(t);
    {
      e_120 = t;
      if(((d_120 != NULL) && (d_120 != e_120)))
        _fail(e_120);
      else
        d_120 = e_120;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_120), not_null(d_120));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm k_120 = NULL;
  ATerm y_25;
  y_25 = t;
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_4 (ATerm t)
        {
          ATerm l_120 = NULL,s_120 = NULL;
          l_120 = t;
          i_120 :
          if(match_cons(l_120, sym_Input_1))
            {
              s_120 = ATgetArgument(l_120, 0);
              if(((k_120 != NULL) && (k_120 != s_120)))
                _fail(s_120);
              else
                k_120 = s_120;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, l_4);
        ;
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        {
          ATerm t_120 = NULL;
          t = term_l_26;
          {
            t_120 = t;
            if(((k_120 != NULL) && (k_120 != t_120)))
              _fail(t_120);
            else
              k_120 = t_120;
          }
        }
      }
  }
  t = y_25;
  {
    ATerm m_4 (ATerm t)
    {
      t = not_null(k_120);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, m_4);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm y_120 = NULL;
    y_120 = t;
    w_120 :
    if(!(match_string(y_120, "-k")))
      {
        if(!(match_string(y_120, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    ATerm m_26;
    m_26 = t;
    {
      ATerm z_120 = NULL;
      ATerm a_121 = NULL;
      t = string_to_int_0(t);
      {
        a_121 = t;
        if(((z_120 != NULL) && (z_120 != a_121)))
          _fail(a_121);
        else
          z_120 = a_121;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_26, not_null(z_120));
        t = set_config_0(t);
      }
    }
    t = m_26;
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = term_o_26;
    return(t);
  }
  t = ArgOption_3(t, n_4, o_4, p_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm d_121 = NULL;
  d_121 = t;
  t = SSL_string_to_int(not_null(d_121));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm p_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_4 (ATerm t)
      {
        ATerm l_121 = NULL;
        l_121 = t;
        g_121 :
        if(!(match_string(l_121, "-S")))
          {
            if(!(match_string(l_121, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_4 (ATerm t)
      {
        t = term_b_27;
        t = set_config_0(t);
        t = term_g_27;
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        t = term_h_27;
        return(t);
      }
      t = Option_3(t, q_4, r_4, s_4);
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = p_26;
      {
        ATerm o_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_4 (ATerm t)
            {
              ATerm m_121 = NULL;
              m_121 = t;
              h_121 :
              if(!(match_string(m_121, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm u_4 (ATerm t)
            {
              ATerm p_121 = NULL;
              ATerm q_27;
              q_27 = t;
              {
                ATerm n_121 = NULL;
                ATerm o_121 = NULL;
                t = string_to_int_0(t);
                {
                  o_121 = t;
                  if(((n_121 != NULL) && (n_121 != o_121)))
                    _fail(o_121);
                  else
                    n_121 = o_121;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_24, not_null(n_121));
                  t = set_config_0(t);
                }
              }
              t = q_27;
              {
                ATerm q_121 = NULL;
                q_121 = t;
                if(((p_121 != NULL) && (p_121 != q_121)))
                  _fail(q_121);
                else
                  p_121 = q_121;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(p_121));
              }
              return(t);
            }
            ATerm v_4 (ATerm t)
            {
              t = term_v_27;
              return(t);
            }
            t = ArgOption_3(t, t_4, u_4, v_4);
            ;
            LocalPopChoice(p_27);
          }
        else
          {
            t = o_27;
            {
              ATerm w_4 (ATerm t)
              {
                ATerm r_121 = NULL;
                r_121 = t;
                k_121 :
                if(!(match_string(r_121, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm x_4 (ATerm t)
              {
                t = term_i_28;
                t = set_config_0(t);
                t = term_j_28;
                return(t);
              }
              ATerm y_4 (ATerm t)
              {
                t = term_k_28;
                return(t);
              }
              t = Option_3(t, w_4, x_4, y_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm x_121 = NULL;
    x_121 = t;
    u_121 :
    if(!(match_string(x_121, "-o")))
      {
        if(!(match_string(x_121, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    ATerm a_122 = NULL;
    ATerm n_28;
    n_28 = t;
    {
      ATerm y_121 = NULL;
      ATerm z_121 = NULL;
      z_121 = t;
      if(((y_121 != NULL) && (y_121 != z_121)))
        _fail(z_121);
      else
        y_121 = z_121;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_28, not_null(y_121));
        t = set_config_0(t);
      }
    }
    t = n_28;
    {
      ATerm b_122 = NULL;
      b_122 = t;
      if(((a_122 != NULL) && (a_122 != b_122)))
        _fail(b_122);
      else
        a_122 = b_122;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_122));
    }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = term_p_28;
    return(t);
  }
  t = ArgOption_3(t, z_4, a_5, b_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      {
        ATerm c_5 (ATerm t)
        {
          ATerm f_122 = NULL;
          f_122 = t;
          e_122 :
          if(!(match_string(f_122, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm d_5 (ATerm t)
        {
          t = term_t_28;
          t = set_config_0(t);
          t = term_u_28;
          return(t);
        }
        ATerm e_5 (ATerm t)
        {
          t = term_v_28;
          return(t);
        }
        t = Option_3(t, c_5, d_5, e_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm l_122 = NULL,m_122 = NULL,n_122 = NULL,o_122 = NULL,p_122 = NULL;
  l_122 = t;
  j_122 :
  if(match_string(l_122, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(l_122) == AT_LIST) && !(ATisEmpty(l_122))))
        {
          m_122 = ATgetFirst((ATermList) l_122);
          n_122 = (ATerm) ATgetNext((ATermList) l_122);
          k_122 :
          if(((ATgetType(n_122) == AT_LIST) && !(ATisEmpty(n_122))))
            {
              o_122 = ATgetFirst((ATermList) n_122);
              p_122 = (ATerm) ATgetNext((ATermList) n_122);
              {
                ATerm t_122 = NULL;
                ATerm w_28;
                w_28 = t;
                {
                  t = not_null(m_122);
                  t = k_0(t);
                }
                t = w_28;
                {
                  ATerm u_122 = NULL;
                  t = not_null(o_122);
                  {
                    t = m_0(t);
                    {
                      u_122 = t;
                      if(((t_122 != NULL) && (t_122 != u_122)))
                        _fail(u_122);
                      else
                        t_122 = u_122;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_122)), not_null(t_122));
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
  ATerm i_5 (ATerm t)
  {
    ATerm b_123 = NULL;
    b_123 = t;
    y_122 :
    if(!(match_string(b_123, "-i")))
      {
        if(!(match_string(b_123, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    ATerm e_123 = NULL;
    ATerm x_28;
    x_28 = t;
    {
      ATerm c_123 = NULL;
      ATerm d_123 = NULL;
      d_123 = t;
      if(((c_123 != NULL) && (c_123 != d_123)))
        _fail(d_123);
      else
        c_123 = d_123;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_29, not_null(c_123));
        t = set_config_0(t);
      }
    }
    t = x_28;
    {
      ATerm f_123 = NULL;
      f_123 = t;
      if(((e_123 != NULL) && (e_123 != f_123)))
        _fail(f_123);
      else
        e_123 = f_123;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_123));
    }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = term_e_29;
    return(t);
  }
  t = ArgOption_3(t, i_5, j_5, k_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
      {
        ATerm o_29 = t;
        int p_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(p_29);
          }
        else
          {
            t = o_29;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm j_123 = NULL;
  t = report_run_time_0(t);
  {
    ATerm k_123 = NULL;
    t = term_b_17;
    {
      t = whoami_0(t);
      {
        k_123 = t;
        if(((j_123 != NULL) && (j_123 != k_123)))
          _fail(k_123);
        else
          j_123 = k_123;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATinsert(ATinsert(ATempty, term_q_29), not_null(j_123)));
      {
        t = printnl_0(t);
        {
          t = term_k_7;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_t_29;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm n_123 = NULL;
  n_123 = t;
  t = SSL_TicksToSeconds(not_null(n_123));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_123 = NULL,t_123 = NULL,u_123 = NULL;
  s_123 = t;
  r_123 :
  if(match_cons(s_123, sym__2))
    {
      t_123 = ATgetArgument(s_123, 0);
      u_123 = ATgetArgument(s_123, 1);
      {
        ATerm u_29 = t;
        int v_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(t_123), not_null(u_123));
            ;
            LocalPopChoice(v_29);
          }
        else
          {
            t = u_29;
            t = SSL_addr(not_null(t_123), not_null(u_123));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm c_114 (ATerm), ATerm d_114 (ATerm))
{
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_114(t);
      ;
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      {
        ATerm b_124 = NULL,c_124 = NULL,d_124 = NULL;
        b_124 = t;
        a_124 :
        if(((ATgetType(b_124) == AT_LIST) && !(ATisEmpty(b_124))))
          {
            c_124 = ATgetFirst((ATermList) b_124);
            d_124 = (ATerm) ATgetNext((ATermList) b_124);
            {
              ATerm g_124 = NULL;
              ATerm h_124 = NULL;
              t = not_null(d_124);
              {
                t = foldr_2(t, c_114, d_114);
                {
                  h_124 = t;
                  if(((g_124 != NULL) && (g_124 != h_124)))
                    _fail(h_124);
                  else
                    g_124 = h_124;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_124), not_null(g_124));
                t = d_114(t);
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
ATerm crush_2 (ATerm t, ATerm a_112 (ATerm), ATerm b_112 (ATerm))
{
  ATerm p_124 = NULL;
  ATerm r_124 = NULL;
  p_124 = t;
  {
    ATerm s_124 = NULL;
    ATerm u_124 = NULL,v_124 = NULL,w_124 = NULL;
    t = not_null(p_124);
    {
      s_124 = t;
      {
        t = SSL_explode_term(not_null(s_124));
        {
          u_124 = t;
          n_124 :
          if(match_cons(u_124, sym__2))
            {
              v_124 = ATgetArgument(u_124, 0);
              w_124 = ATgetArgument(u_124, 1);
              if(((r_124 != NULL) && (r_124 != w_124)))
                _fail(w_124);
              else
                r_124 = w_124;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_124);
      t = foldr_2(t, a_112, b_112);
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
    ATerm l_5 (ATerm t)
    {
      t = term_r_21;
      return(t);
    }
    t = crush_2(t, l_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm d_125 = NULL,e_125 = NULL,f_125 = NULL;
  d_125 = t;
  b_125 :
  if(match_cons(d_125, sym__2))
    {
      e_125 = ATgetArgument(d_125, 0);
      f_125 = ATgetArgument(d_125, 1);
      {
        ATerm y_29;
        y_29 = t;
        {
          ATerm z_29 = t;
          int a_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(e_125), not_null(f_125));
              ;
              LocalPopChoice(a_30);
            }
          else
            {
              t = z_29;
              t = SSL_gtr(not_null(e_125), not_null(f_125));
            }
        }
        t = y_29;
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
  ATerm l_125 = NULL;
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_125 = NULL,n_125 = NULL,o_125 = NULL;
      m_125 = t;
      k_125 :
      if(match_cons(m_125, sym__2))
        {
          n_125 = ATgetArgument(m_125, 0);
          o_125 = ATgetArgument(m_125, 1);
          {
            if(((l_125 != NULL) && (l_125 != n_125)))
              _fail(n_125);
            else
              l_125 = n_125;
            if(((l_125 != NULL) && (l_125 != o_125)))
              _fail(o_125);
            else
              l_125 = o_125;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(c_30);
    }
  else
    {
      t = b_30;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm f_126 (ATerm))
{
  ATerm m_5 (ATerm t)
  {
    ATerm d_30;
    d_30 = t;
    {
      ATerm r_125 = NULL;
      ATerm s_125 = NULL;
      t = term_k_24;
      {
        t = get_config_0(t);
        {
          s_125 = t;
          if(((r_125 != NULL) && (r_125 != s_125)))
            _fail(s_125);
          else
            r_125 = s_125;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_125), term_k_7);
        t = geq_0(t);
      }
    }
    t = d_30;
    t = f_126(t);
    return(t);
  }
  t = try_1(t, m_5);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm w_125 = NULL,y_125 = NULL;
    ATerm f_30;
    f_30 = t;
    {
      ATerm x_125 = NULL;
      t = run_time_0(t);
      {
        x_125 = t;
        if(((w_125 != NULL) && (w_125 != x_125)))
          _fail(x_125);
        else
          w_125 = x_125;
      }
    }
    t = f_30;
    {
      ATerm z_125 = NULL;
      t = term_b_17;
      {
        t = whoami_0(t);
        {
          z_125 = t;
          if(((y_125 != NULL) && (y_125 != z_125)))
            _fail(z_125);
          else
            y_125 = z_125;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_30), not_null(w_125)), term_g_30), not_null(y_125)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, n_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_r_21;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm i_126 = NULL;
  i_126 = t;
  h_126 :
  if(match_cons(i_126, sym_Version_0))
    {
      ATerm k_126 = NULL,m_126 = NULL;
      ATerm i_30;
      i_30 = t;
      {
        ATerm l_126 = NULL;
        t = SSLgetAnnotations(not_null(i_126));
        {
          l_126 = t;
          if(((k_126 != NULL) && (k_126 != l_126)))
            _fail(l_126);
          else
            k_126 = l_126;
        }
      }
      t = i_30;
      {
        ATerm n_126 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(k_126));
        {
          n_126 = t;
          if(((m_126 != NULL) && (m_126 != n_126)))
            _fail(n_126);
          else
            m_126 = n_126;
        }
        t = not_null(m_126);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_129 (ATerm))
{
  ATerm k_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_30;
      t = get_config_0(t);
      ;
      LocalPopChoice(p_30);
    }
  else
    {
      t = k_30;
      {
        ATerm o_5 (ATerm t)
        {
          ATerm z_30 = t;
          int j_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(j_31);
            }
          else
            {
              t = z_30;
              {
                ATerm v_31 = t;
                int w_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(w_31);
                  }
                else
                  {
                    t = v_31;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, o_5);
      }
    }
  t = c_129(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_126 = NULL;
  s_126 = t;
  t = SSL_table_create(not_null(s_126));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_126 = NULL;
  w_126 = t;
  {
    ATerm x_31;
    x_31 = t;
    {
      t = term_y_31;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_31, term_z_31, not_null(w_126));
          t = table_put_0(t);
        }
      }
    }
    t = x_31;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm a_127 = NULL;
  a_127 = t;
  t = SSL_table_destroy(not_null(a_127));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_127 = NULL;
  e_127 = t;
  t = SSL_exit(not_null(e_127));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm d_131 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_109 (ATerm))
{
  ATerm h_127 (ATerm t)
  {
    ATerm a_32 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(b_32);
      }
    else
      {
        t = a_32;
        t = Cons_2(t, o_109, h_127);
      }
    return(t);
  }
  t = h_127(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm o_127 = NULL,p_127 = NULL,q_127 = NULL;
  q_127 = t;
  n_127 :
  if(((ATgetType(q_127) == AT_LIST) && !(ATisEmpty(q_127))))
    {
      o_127 = ATgetFirst((ATermList) q_127);
      p_127 = (ATerm) ATgetNext((ATermList) q_127);
      {
        ATerm t_127 = NULL;
        t = not_null(p_127);
        {
          ATerm c_32;
          c_32 = t;
          {
            ATerm u_127 = NULL,w_127 = NULL,y_127 = NULL;
            ATerm d_32;
            d_32 = t;
            {
              ATerm v_127 = NULL;
              t = i_0(t);
              {
                v_127 = t;
                if(((u_127 != NULL) && (u_127 != v_127)))
                  _fail(v_127);
                else
                  u_127 = v_127;
              }
            }
            t = d_32;
            {
              ATerm x_127 = NULL;
              t = not_null(o_127);
              {
                t = g_0(t);
                {
                  x_127 = t;
                  if(((w_127 != NULL) && (w_127 != x_127)))
                    _fail(x_127);
                  else
                    w_127 = x_127;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(u_127)), not_null(w_127));
                {
                  y_127 = t;
                  if(((t_127 != NULL) && (t_127 != y_127)))
                    _fail(y_127);
                  else
                    t_127 = y_127;
                }
              }
            }
          }
          t = c_32;
          {
            ATerm p_5 (ATerm t)
            {
              t = not_null(t_127);
              return(t);
            }
            t = reverse_acc_2(t, g_0, p_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(q_127) == AT_LIST) && ATisEmpty(q_127)))
        {
          {
            t = term_b_17;
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
  ATerm q_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm c_131 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm u_100 (ATerm))
{
  ATerm q_128 = NULL,r_128 = NULL;
  q_128 = t;
  k_128 :
  if(match_cons(q_128, sym_Program_1))
    {
      r_128 = ATgetArgument(q_128, 0);
      {
        ATerm y_128 = NULL,a_129 = NULL;
        ATerm z_128 = NULL;
        t = SSLgetAnnotations(not_null(q_128));
        {
          z_128 = t;
          if(((y_128 != NULL) && (y_128 != z_128)))
            _fail(z_128);
          else
            y_128 = z_128;
        }
        {
          t = not_null(r_128);
          {
            ATerm d_129 = NULL;
            t = u_100(t);
            {
              a_129 = t;
              {
                ATerm i_129 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_129)), not_null(y_128));
                {
                  i_129 = t;
                  if(((d_129 != NULL) && (d_129 != i_129)))
                    _fail(i_129);
                  else
                    d_129 = i_129;
                }
                t = not_null(d_129);
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
  ATerm r_129 = NULL;
  ATerm e_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_129 = NULL;
      t = term_t_29;
      {
        t = get_config_0(t);
        {
          s_129 = t;
          if(((r_129 != NULL) && (r_129 != s_129)))
            _fail(s_129);
          else
            r_129 = s_129;
        }
      }
      ;
      LocalPopChoice(f_32);
    }
  else
    {
      t = e_32;
      {
        ATerm r_5 (ATerm t)
        {
          ATerm s_5 (ATerm t)
          {
            ATerm t_129 = NULL;
            t_129 = t;
            if(((r_129 != NULL) && (r_129 != t_129)))
              _fail(t_129);
            else
              r_129 = t_129;
            return(t);
          }
          t = Program_1(t, s_5);
          return(t);
        }
        t = option_defined_1(t, r_5);
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
      t = short_description_1(t, u_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, t_5);
    {
      t = term_g_32;
      {
        t = echo_0(t);
        {
          t = term_j_32;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm v_5 (ATerm t)
                {
                  ATerm u_129 = NULL;
                  ATerm v_129 = NULL;
                  v_129 = t;
                  if(((u_129 != NULL) && (u_129 != v_129)))
                    _fail(v_129);
                  else
                    u_129 = v_129;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_129)), term_k_32);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, v_5);
                {
                  ATerm w_5 (ATerm t)
                  {
                    ATerm w_129 = NULL;
                    ATerm x_129 = NULL;
                    ATerm x_5 (ATerm t)
                    {
                      t = not_null(r_129);
                      return(t);
                    }
                    t = long_description_1(t, x_5);
                    {
                      x_129 = t;
                      if(((w_129 != NULL) && (w_129 != x_129)))
                        _fail(x_129);
                      else
                        w_129 = x_129;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(w_129)), term_l_32);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, w_5);
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
  ATerm m_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(n_32);
    }
  else
    {
      t = m_32;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm v_100 (ATerm))
{
  ATerm i_130 = NULL,j_130 = NULL;
  i_130 = t;
  h_130 :
  if(match_cons(i_130, sym_Undefined_1))
    {
      j_130 = ATgetArgument(i_130, 0);
      {
        ATerm m_130 = NULL,o_130 = NULL;
        ATerm n_130 = NULL;
        t = SSLgetAnnotations(not_null(i_130));
        {
          n_130 = t;
          if(((m_130 != NULL) && (m_130 != n_130)))
            _fail(n_130);
          else
            m_130 = n_130;
        }
        {
          t = not_null(j_130);
          {
            ATerm q_130 = NULL;
            t = v_100(t);
            {
              o_130 = t;
              {
                ATerm r_130 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_130)), not_null(m_130));
                {
                  r_130 = t;
                  if(((q_130 != NULL) && (q_130 != r_130)))
                    _fail(r_130);
                  else
                    q_130 = r_130;
                }
                t = not_null(q_130);
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
ATerm fetch_1 (ATerm t, ATerm y_109 (ATerm))
{
  ATerm w_130 (ATerm t)
  {
    ATerm p_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_109, _id);
        ;
        LocalPopChoice(q_32);
      }
    else
      {
        t = p_32;
        t = Cons_2(t, _id, w_130);
      }
    return(t);
  }
  t = w_130(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm c_130 (ATerm))
{
  t = fetch_1(t, c_130);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm y_130 = NULL,z_130 = NULL,a_131 = NULL;
  y_130 = t;
  x_130 :
  if(((ATgetType(y_130) == AT_LIST) && ATisEmpty(y_130)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(y_130) == AT_LIST) && !(ATisEmpty(y_130))))
        {
          z_130 = ATgetFirst((ATermList) y_130);
          a_131 = (ATerm) ATgetNext((ATermList) y_130);
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
  ATerm r_32;
  r_32 = t;
  {
    ATerm j_131 = NULL;
    ATerm m_131 = NULL;
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(u_32);
      }
    else
      {
        t = t_32;
        {
          ATerm k_131 = NULL;
          ATerm l_131 = NULL;
          l_131 = t;
          if(((k_131 != NULL) && (k_131 != l_131)))
            _fail(l_131);
          else
            k_131 = l_131;
          t = (ATerm) ATinsert(ATempty, not_null(k_131));
        }
      }
    {
      m_131 = t;
      if(((j_131 != NULL) && (j_131 != m_131)))
        _fail(m_131);
      else
        j_131 = m_131;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_24, not_null(j_131));
      t = printnl_0(t);
    }
  }
  t = r_32;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_t_29;
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
  ATerm v_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(x_32);
    }
  else
    {
      t = v_32;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_131 = NULL;
  t_131 = t;
  s_131 :
  if(match_cons(t_131, sym_Help_0))
    {
      ATerm v_131 = NULL,a_132 = NULL;
      ATerm b_33;
      b_33 = t;
      {
        ATerm z_131 = NULL;
        t = SSLgetAnnotations(not_null(t_131));
        {
          z_131 = t;
          if(((v_131 != NULL) && (v_131 != z_131)))
            _fail(z_131);
          else
            v_131 = z_131;
        }
      }
      t = b_33;
      {
        ATerm b_132 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(v_131));
        {
          b_132 = t;
          if(((a_132 != NULL) && (a_132 != b_132)))
            _fail(b_132);
          else
            a_132 = b_132;
        }
        t = not_null(a_132);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm f_106 (ATerm))
{
  ATerm l_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_106(t);
      ;
      LocalPopChoice(t_33);
    }
  else
    {
      t = l_33;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm d_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_5 (ATerm t)
      {
        ATerm h_132 = NULL;
        h_132 = t;
        f_132 :
        if(!(match_string(h_132, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm z_5 (ATerm t)
      {
        t = term_g_34;
        t = set_config_0(t);
        return(t);
      }
      ATerm a_6 (ATerm t)
      {
        t = term_h_34;
        return(t);
      }
      t = Option_3(t, y_5, z_5, a_6);
      ;
      LocalPopChoice(e_34);
    }
  else
    {
      t = d_34;
      {
        ATerm b_6 (ATerm t)
        {
          ATerm i_132 = NULL;
          i_132 = t;
          g_132 :
          if(!(match_string(i_132, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm c_6 (ATerm t)
        {
          t = term_g_34;
          {
            t = set_config_0(t);
            {
              t = term_j_34;
              t = set_config_0(t);
            }
          }
          t = term_k_34;
          return(t);
        }
        ATerm d_6 (ATerm t)
        {
          t = term_l_34;
          return(t);
        }
        t = Option_3(t, b_6, c_6, d_6);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm q_132 = NULL,r_132 = NULL,s_132 = NULL;
  q_132 = t;
  k_132 :
  if(match_cons(q_132, sym__2))
    {
      r_132 = ATgetArgument(q_132, 0);
      s_132 = ATgetArgument(q_132, 1);
      t = SSL_table_get(not_null(r_132), not_null(s_132));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_132 = NULL,a_133 = NULL,b_133 = NULL,c_133 = NULL;
  z_132 = t;
  y_132 :
  if(match_cons(z_132, sym__3))
    {
      a_133 = ATgetArgument(z_132, 0);
      b_133 = ATgetArgument(z_132, 1);
      c_133 = ATgetArgument(z_132, 2);
      {
        ATerm m_34;
        m_34 = t;
        {
          ATerm g_133 = NULL;
          ATerm h_133 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_133), not_null(b_133));
          {
            ATerm n_34 = t;
            int o_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(o_34);
              }
            else
              {
                t = n_34;
                t = (ATerm) ATempty;
              }
            {
              h_133 = t;
              if(((g_133 != NULL) && (g_133 != h_133)))
                _fail(h_133);
              else
                g_133 = h_133;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_133), not_null(b_133), (ATerm) ATinsert(CheckATermList(not_null(g_133)), not_null(c_133)));
            t = table_put_0(t);
          }
        }
        t = m_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm h_131 (ATerm))
{
  ATerm l_133 = NULL;
  ATerm m_133 = NULL;
  t = term_b_17;
  {
    t = h_131(t);
    {
      m_133 = t;
      if(((l_133 != NULL) && (l_133 != m_133)))
        _fail(m_133);
      else
        l_133 = m_133;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_h_32, term_i_32, not_null(l_133));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm s_133 = NULL,t_133 = NULL,u_133 = NULL;
  s_133 = t;
  r_133 :
  if(match_string(s_133, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(s_133) == AT_LIST) && !(ATisEmpty(s_133))))
        {
          t_133 = ATgetFirst((ATermList) s_133);
          u_133 = (ATerm) ATgetNext((ATermList) s_133);
          {
            ATerm x_133 = NULL;
            ATerm p_34;
            p_34 = t;
            {
              t = not_null(t_133);
              t = a_0(t);
            }
            t = p_34;
            {
              ATerm y_133 = NULL;
              t = term_b_17;
              {
                t = b_0(t);
                {
                  y_133 = t;
                  if(((x_133 != NULL) && (x_133 != y_133)))
                    _fail(y_133);
                  else
                    x_133 = y_133;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_133)), not_null(x_133));
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
  ATerm e_6 (ATerm t)
  {
    ATerm d_134 = NULL;
    d_134 = t;
    c_134 :
    if(!(match_string(d_134, "--help")))
      {
        if(!(match_string(d_134, "-h")))
          {
            if(!(match_string(d_134, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm f_6 (ATerm t)
  {
    t = term_q_34;
    {
      t = set_config_0(t);
      t = term_x_34;
    }
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    t = term_y_34;
    return(t);
  }
  t = Option_3(t, e_6, f_6, g_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_134 = NULL,h_134 = NULL,i_134 = NULL;
  g_134 = t;
  f_134 :
  if(((ATgetType(g_134) == AT_LIST) && !(ATisEmpty(g_134))))
    {
      h_134 = ATgetFirst((ATermList) g_134);
      i_134 = (ATerm) ATgetNext((ATermList) g_134);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_134)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_134)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm o_134 = NULL,p_134 = NULL,q_134 = NULL;
  o_134 = t;
  n_134 :
  if(match_cons(o_134, sym__2))
    {
      p_134 = ATgetArgument(o_134, 0);
      q_134 = ATgetArgument(o_134, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_24, not_null(p_134), not_null(q_134));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm f_131 (ATerm))
{
  ATerm z_34;
  z_34 = t;
  {
    ATerm h_6 (ATerm t)
    {
      t = term_a_35;
      t = f_131(t);
      return(t);
    }
    t = try_1(t, h_6);
  }
  t = z_34;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm y_134 = NULL;
      ATerm b_35;
      b_35 = t;
      {
        ATerm w_134 = NULL;
        ATerm x_134 = NULL;
        x_134 = t;
        if(((w_134 != NULL) && (w_134 != x_134)))
          _fail(x_134);
        else
          w_134 = x_134;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_29, not_null(w_134));
          t = set_config_0(t);
        }
      }
      t = b_35;
      {
        ATerm z_134 = NULL;
        z_134 = t;
        if(((y_134 != NULL) && (y_134 != z_134)))
          _fail(z_134);
        else
          y_134 = z_134;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_134));
      }
      return(t);
    }
    ATerm k_6 (ATerm t)
    {
      ATerm c_35 = t;
      int d_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_35 = t;
          int k_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(k_35);
            }
          else
            {
              t = g_35;
              {
                t = f_131(t);
                t = Cons_2(t, _id, k_6);
              }
            }
          ;
          LocalPopChoice(d_35);
        }
      else
        {
          t = c_35;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, i_6, k_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_135 = NULL,g_135 = NULL,h_135 = NULL;
  ATerm r_35;
  r_35 = t;
  {
    ATerm i_135 = NULL,j_135 = NULL,k_135 = NULL,l_135 = NULL;
    i_135 = t;
    e_135 :
    if(match_cons(i_135, sym__3))
      {
        j_135 = ATgetArgument(i_135, 0);
        k_135 = ATgetArgument(i_135, 1);
        l_135 = ATgetArgument(i_135, 2);
        {
          if(((f_135 != NULL) && (f_135 != j_135)))
            _fail(j_135);
          else
            f_135 = j_135;
          {
            if(((g_135 != NULL) && (g_135 != k_135)))
              _fail(k_135);
            else
              g_135 = k_135;
            {
              if(((h_135 != NULL) && (h_135 != l_135)))
                _fail(l_135);
              else
                h_135 = l_135;
              t = SSL_table_put(not_null(f_135), not_null(g_135), not_null(h_135));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = r_35;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm e_131 (ATerm))
{
  ATerm o_135 = NULL;
  ATerm s_35;
  s_35 = t;
  {
    t = term_t_35;
    t = table_put_0(t);
  }
  t = s_35;
  {
    ATerm l_6 (ATerm t)
    {
      ATerm u_35 = t;
      int v_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_131(t);
          ;
          LocalPopChoice(v_35);
        }
      else
        {
          t = u_35;
          {
            ATerm w_35 = t;
            int x_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(x_35);
              }
            else
              {
                t = w_35;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, l_6);
    {
      ATerm m_6 (ATerm t)
      {
        ATerm y_35 = t;
        int a_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_36;
            b_36 = t;
            {
              ATerm c_36 = t;
              int e_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_q_30;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(e_36);
                }
              else
                {
                  t = c_36;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = b_36;
            {
              t = system_usage_0(t);
              {
                t = term_r_21;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(a_36);
          }
        else
          {
            t = y_35;
            {
              ATerm f_36 = t;
              int g_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_36;
                  i_36 = t;
                  {
                    t = term_f_34;
                    t = get_config_0(t);
                  }
                  t = i_36;
                  {
                    t = system_about_0(t);
                    {
                      t = term_r_21;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(g_36);
                }
              else
                {
                  t = f_36;
                  {
                    ATerm n_6 (ATerm t)
                    {
                      ATerm o_6 (ATerm t)
                      {
                        ATerm p_135 = NULL;
                        p_135 = t;
                        if(((o_135 != NULL) && (o_135 != p_135)))
                          _fail(p_135);
                        else
                          o_135 = p_135;
                        return(t);
                      }
                      t = Undefined_1(t, o_6);
                      return(t);
                    }
                    t = option_defined_1(t, n_6);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_135)), term_j_36));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_k_7;
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
      t = try_1(t, m_6);
      {
        ATerm k_36;
        k_36 = t;
        {
          t = term_h_32;
          t = table_destroy_0(t);
        }
        t = k_36;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm e_129 (ATerm), ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm))
{
  t = parse_options_1(t, e_129);
  {
    t = store_options_0(t);
    {
      t = g_129(t);
      {
        ATerm l_36 = t;
        int m_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, f_129);
            ;
            LocalPopChoice(m_36);
          }
        else
          {
            t = l_36;
            {
              ATerm q_36 = t;
              int a_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_129(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(a_37);
                }
              else
                {
                  t = q_36;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm t_128 (ATerm), ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm w_128 (ATerm))
{
  ATerm p_6 (ATerm t)
  {
    ATerm e_37 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_128(t);
        ;
        LocalPopChoice(f_37);
      }
    else
      {
        t = e_37;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm q_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, t_128);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, p_6, v_128, w_128, q_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm n_128 (ATerm), ATerm o_128 (ATerm), ATerm p_128 (ATerm))
{
  ATerm r_6 (ATerm t)
  {
    ATerm s_6 (ATerm t)
    {
      ATerm g_37;
      g_37 = t;
      {
        ATerm s_135 = NULL;
        ATerm t_135 = NULL;
        t = term_t_29;
        {
          t = get_config_0(t);
          {
            t_135 = t;
            if(((s_135 != NULL) && (s_135 != t_135)))
              _fail(t_135);
            else
              s_135 = t_135;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_7, (ATerm) ATinsert(ATempty, not_null(s_135)));
          t = printnl_0(t);
        }
      }
      t = g_37;
      return(t);
    }
    t = if_verbose2_1(t, s_6);
    return(t);
  }
  t = iowrap_4(t, n_128, o_128, p_128, r_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm l_128 (ATerm), ATerm m_128 (ATerm))
{
  t = iowrap_3(t, l_128, m_128, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm i_128 (ATerm))
{
  ATerm t_6 (ATerm t)
  {
    t = _2(t, _id, i_128);
    return(t);
  }
  t = iowrap_2(t, t_6, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    ATerm v_6 (ATerm t)
    {
      ATerm w_6 (ATerm t)
      {
        ATerm x_6 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, x_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, w_6);
      return(t);
    }
    t = Specification_1(t, v_6);
    return(t);
  }
  t = iowrap_1(t, u_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_0(t);
  return(t);
}
