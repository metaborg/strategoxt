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
Symbol sym_Mark_0;
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
Symbol sym_Case_4;
Symbol sym_Case_3;
Symbol sym_Case_2;
Symbol sym_Alt_3;
Symbol sym_Continue_1;
Symbol sym_Assign_2;
Symbol sym_Assign_1;
Symbol sym_Fun_2;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Mark_0 = ATmakeSymbol("Mark", 0, ATfalse);
  ATprotectSymbol(sym_Mark_0);
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
  sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
  ATprotectSymbol(sym_Case_4);
  sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
  ATprotectSymbol(sym_Case_3);
  sym_Case_2 = ATmakeSymbol("Case", 2, ATfalse);
  ATprotectSymbol(sym_Case_2);
  sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
  ATprotectSymbol(sym_Alt_3);
  sym_Continue_1 = ATmakeSymbol("Continue", 1, ATfalse);
  ATprotectSymbol(sym_Continue_1);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Assign_1 = ATmakeSymbol("Assign", 1, ATfalse);
  ATprotectSymbol(sym_Assign_1);
  sym_Fun_2 = ATmakeSymbol("Fun", 2, ATfalse);
  ATprotectSymbol(sym_Fun_2);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_t_49;
ATerm term_q_48;
ATerm term_z_47;
ATerm term_r_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_t_46;
ATerm term_m_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_a_46;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_s_44;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_n_44;
ATerm term_x_43;
ATerm term_w_43;
ATerm term_q_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_w_40;
ATerm term_u_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_m_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_q_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_j_39;
ATerm term_h_39;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_p_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_m_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_n_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_a_20;
ATerm term_y_19;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_l_17;
ATerm term_b_17;
ATerm term_p_16;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_u_10;
ATerm term_g_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_w_9;
void init_constant_terms (void)
{
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_CallT_3, term_y_14, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Seq_2, term_b_15, term_c_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Seq_2, term_a_15, term_j_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Seq_2, term_z_14, term_k_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_15);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_17);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Seq_2, term_a_15, term_c_15);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Seq_2, term_z_14, term_e_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("z_1", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("b_2", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_21);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Op_2, term_r_23, (ATerm) ATempty);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_ConstType_1, term_s_23);
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_38);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(sym__2, term_z_9, term_s_40);
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_40);
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(sym__2, term_b_41, term_z_37);
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym__2, term_n_41, term_z_37);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(sym__2, term_o_44, term_p_44);
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym__2, term_a_46, term_z_37);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(sym__2, term_j_46, term_z_37);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(sym__2, term_q_43, term_z_37);
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(sym__3, term_o_44, term_p_44, (ATerm) ATempty);
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm o_130 (ATerm));
ATerm if_verbose2_1 (ATerm, ATerm r_140 (ATerm));
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm p_97 (ATerm), ATerm q_97 (ATerm));
ATerm PrimT_3 (ATerm, ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm));
ATerm Explode_2 (ATerm, ATerm i_97 (ATerm), ATerm j_97 (ATerm));
ATerm Op_2 (ATerm, ATerm e_97 (ATerm), ATerm f_97 (ATerm));
ATerm pat_td_1 (ATerm, ATerm h_139 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm x_117 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm m_97 (ATerm), ATerm n_97 (ATerm));
ATerm Con_3 (ATerm, ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm a_98 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm a_111 (ATerm));
ATerm desugar_0 (ATerm);
ATerm UnMark_0 (ATerm);
ATerm BottomupToVarIsId_Cond_0 (ATerm);
ATerm Replace_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm i_123 (ATerm));
ATerm restore_always_2 (ATerm, ATerm h_114 (ATerm), ATerm i_114 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm h_123 (ATerm));
ATerm scope_2 (ATerm, ATerm j_123 (ATerm), ATerm k_123 (ATerm));
ATerm replace_application_0 (ATerm);
ATerm BottomupToVarIsId_UnCond_0 (ATerm);
ATerm BottomupOverConstructor_0 (ATerm);
ATerm IntroduceApp_0 (ATerm);
ATerm SeqOverScopeR_0 (ATerm);
ATerm SeqOverLChoiceR_0 (ATerm);
ATerm SeqOverChoiceR_0 (ATerm);
ATerm fuse_with_bottomup_0 (ATerm);
ATerm SeqOverScopeL_0 (ATerm);
ATerm SeqOverLChoiceL_0 (ATerm);
ATerm SeqOverChoiceL_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm b_111 (ATerm));
ATerm innermost_1 (ATerm, ATerm q_126 (ATerm));
ATerm propagate_mark_0 (ATerm);
ATerm Build_1 (ATerm, ATerm q_100 (ATerm));
ATerm Seq_2 (ATerm, ATerm w_100 (ATerm), ATerm x_100 (ATerm));
ATerm Match_1 (ATerm, ATerm p_100 (ATerm));
ATerm LChoice_2 (ATerm, ATerm y_100 (ATerm), ATerm z_100 (ATerm));
ATerm Choice_2 (ATerm, ATerm w_99 (ATerm), ATerm x_99 (ATerm));
ATerm inline_rules_0 (ATerm);
ATerm bottomup_to_var_0 (ATerm);
ATerm seq_over_choice_0 (ATerm);
ATerm innermost_fusion_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm s_112 (ATerm));
ATerm check_that_bottomup_is_bottomup_0 (ATerm);
ATerm check_that_innermost_is_innermost_0 (ATerm);
ATerm AsMatchWld_0 (ATerm);
ATerm MatchSimplify_0 (ATerm);
ATerm MatchBuildIdem_0 (ATerm);
ATerm BuildMatchIdem_0 (ATerm);
ATerm MatchIdem_0 (ATerm);
ATerm BuildPrim_0 (ATerm);
ATerm BuildBuild_0 (ATerm);
ATerm BuildMatchFusion_0 (ATerm);
ATerm MisMatch_0 (ATerm);
ATerm BMF_0 (ATerm);
ATerm BuildMatch_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm e_112 (ATerm));
ATerm LetHoist_0 (ATerm);
ATerm LetNoDefs_0 (ATerm);
ATerm EmptyScope_0 (ATerm);
ATerm Idempotency_0 (ATerm);
ATerm AssociateR_0 (ATerm);
ATerm MkConstType_0 (ATerm);
ATerm MkFunType_0 (ATerm);
ATerm map1_1 (ATerm, ATerm q_0 (ATerm));
ATerm HL_0 (ATerm);
ATerm F16_0 (ATerm);
ATerm F15_0 (ATerm);
ATerm F14_0 (ATerm);
ATerm F13_0 (ATerm);
ATerm F12_0 (ATerm);
ATerm F11_0 (ATerm);
ATerm F10_0 (ATerm);
ATerm F9_0 (ATerm);
ATerm F8_0 (ATerm);
ATerm F7_0 (ATerm);
ATerm F6_0 (ATerm);
ATerm F5_0 (ATerm);
ATerm F3_0 (ATerm);
ATerm F2_0 (ATerm);
ATerm F1_0 (ATerm);
ATerm ElimFail_0 (ATerm);
ATerm I16_0 (ATerm);
ATerm I12_0 (ATerm);
ATerm I10_0 (ATerm);
ATerm I9_0 (ATerm);
ATerm I8_0 (ATerm);
ATerm I7_0 (ATerm);
ATerm I4_0 (ATerm);
ATerm I3_0 (ATerm);
ATerm I2_0 (ATerm);
ATerm I1_0 (ATerm);
ATerm ElimId_0 (ATerm);
ATerm Simplify_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm e_124 (ATerm));
ATerm downup_1 (ATerm, ATerm c_111 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm n_117 (ATerm), ATerm o_117 (ATerm), ATerm p_117 (ATerm), ATerm q_117 (ATerm));
ATerm zip_1 (ATerm, ATerm s_117 (ATerm));
ATerm IsSVar_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm f_137 (ATerm), ATerm g_137 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm q_136 (ATerm), ATerm r_136 (ATerm));
ATerm substitute_1 (ATerm, ATerm s_136 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm f_140 (ATerm));
ATerm Rec_2 (ATerm, ATerm f_101 (ATerm), ATerm g_101 (ATerm));
ATerm SDef_3 (ATerm, ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm));
ATerm Let_2 (ATerm, ATerm i_100 (ATerm), ATerm j_100 (ATerm));
ATerm sboundin_3 (ATerm, ATerm g_140 (ATerm), ATerm h_140 (ATerm), ATerm i_140 (ATerm));
ATerm Bind7_0 (ATerm);
ATerm Bind5_0 (ATerm);
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm h_100 (ATerm));
ATerm srename_0 (ATerm);
ATerm ReplaceVar_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm b_140 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm p_99 (ATerm));
ATerm RDefT_4 (ATerm, ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm j_99 (ATerm));
ATerm SDefT_4 (ATerm, ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm d_103 (ATerm));
ATerm Scope_2 (ATerm, ATerm s_100 (ATerm), ATerm t_100 (ATerm));
ATerm tboundin_3 (ATerm, ATerm c_140 (ATerm), ATerm d_140 (ATerm), ATerm e_140 (ATerm));
ATerm Bind8_0 (ATerm);
ATerm declared_vars_0 (ATerm);
ATerm Bind6_0 (ATerm);
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm n_119 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm c_122 (ATerm), ATerm d_122 (ATerm), ATerm e_122 (ATerm));
ATerm crush_3 (ATerm, ATerm a_120 (ATerm), ATerm b_120 (ATerm), ATerm c_120 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm r_119 (ATerm), ATerm s_119 (ATerm));
ATerm diff_1 (ATerm, ATerm j_119 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm t_124 (ATerm), ATerm u_124 (ATerm));
ATerm for_3 (ATerm, ATerm w_124 (ATerm), ATerm x_124 (ATerm), ATerm y_124 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm x_138 (ATerm), ATerm y_138 (ATerm), ATerm z_138 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm s_137 (ATerm), ATerm t_137 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm m_137 (ATerm), ATerm n_137 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm x_137 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm q_127 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm a_127 (ATerm));
ATerm rename_4 (ATerm, ATerm h_137 (ATerm, ATerm (ATerm)), ATerm i_137 (ATerm), ATerm j_137 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm k_137 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm n_123 (ATerm));
ATerm InlineStrat_0 (ATerm);
ATerm new_0 (ATerm);
ATerm check_that_try_is_try_0 (ATerm);
ATerm check_library_definitions_0 (ATerm);
ATerm assert_1 (ATerm, ATerm l_123 (ATerm));
ATerm declare_inline_rule_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm z_95 (ATerm));
ATerm Signature_1 (ATerm, ATerm a_96 (ATerm));
ATerm Specification_1 (ATerm, ATerm e_96 (ATerm));
ATerm declare_inline_rules_0 (ATerm);
ATerm _2 (ATerm, ATerm m_94 (ATerm), ATerm n_94 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm a_116 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm y_130 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm k_132 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm k_130 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm m_114 (ATerm), ATerm n_114 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm a_122 (ATerm), ATerm b_122 (ATerm));
ATerm crush_2 (ATerm, ATerm y_119 (ATerm), ATerm z_119 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm q_140 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm i_133 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_136 (ATerm));
ATerm map_1 (ATerm, ATerm k_115 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_136 (ATerm));
ATerm Program_1 (ATerm, ATerm d_110 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm e_110 (ATerm));
ATerm fetch_1 (ATerm, ATerm u_115 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_135 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm s_113 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_136 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm v_95 (ATerm), ATerm w_95 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_136 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_136 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm k_133 (ATerm), ATerm l_133 (ATerm), ATerm m_133 (ATerm), ATerm n_133 (ATerm));
ATerm iowrap_4 (ATerm, ATerm z_132 (ATerm), ATerm a_133 (ATerm), ATerm b_133 (ATerm), ATerm c_133 (ATerm));
ATerm iowrap_3 (ATerm, ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm));
ATerm iowrap_2 (ATerm, ATerm r_132 (ATerm), ATerm s_132 (ATerm));
ATerm iowrap_1 (ATerm, ATerm o_132 (ATerm));
ATerm fusion_io_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_0 (ATerm t)
{
  ATerm v_9;
  v_9 = t;
  {
    ATerm x_1 = NULL;
    ATerm y_1 = NULL;
    y_1 = t;
    if(((x_1 != NULL) && (x_1 != y_1)))
      _fail(y_1);
    else
      x_1 = y_1;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATinsert(ATempty, not_null(x_1)));
      t = printnl_0(t);
    }
  }
  t = v_9;
  return(t);
}
ATerm say_1 (ATerm t, ATerm o_130 (ATerm))
{
  ATerm x_9;
  x_9 = t;
  {
    t = o_130(t);
    t = debug_0(t);
  }
  t = x_9;
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm r_140 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    ATerm y_9;
    y_9 = t;
    {
      ATerm w_7 = NULL;
      ATerm k_8 = NULL;
      t = term_z_9;
      {
        t = get_config_0(t);
        {
          k_8 = t;
          if(((w_7 != NULL) && (w_7 != k_8)))
            _fail(k_8);
          else
            w_7 = k_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_7), term_a_10);
        t = geq_0(t);
      }
    }
    t = y_9;
    t = r_140(t);
    return(t);
  }
  t = try_1(t, f_0);
  return(t);
}
ATerm Expl_0 (ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL,v_10 = NULL;
  t_10 = t;
  r_10 :
  if(match_cons(t_10, sym_ExplodeCong_2))
    {
      v_10 = ATgetArgument(t_10, 0);
      s_10 = ATgetArgument(t_10, 1);
      {
        ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL;
        ATerm c_11 = NULL;
        ATerm d_11 = NULL;
        t = new_0(t);
        {
          c_11 = t;
          {
            if(((y_10 != NULL) && (y_10 != c_11)))
              _fail(c_11);
            else
              y_10 = c_11;
            {
              ATerm e_11 = NULL;
              t = new_0(t);
              {
                d_11 = t;
                {
                  if(((z_10 != NULL) && (z_10 != d_11)))
                    _fail(d_11);
                  else
                    z_10 = d_11;
                  {
                    ATerm f_11 = NULL;
                    t = new_0(t);
                    {
                      e_11 = t;
                      {
                        if(((a_11 != NULL) && (a_11 != e_11)))
                          _fail(e_11);
                        else
                          a_11 = e_11;
                        {
                          t = new_0(t);
                          {
                            f_11 = t;
                            if(((b_11 != NULL) && (b_11 != f_11)))
                              _fail(f_11);
                            else
                              b_11 = f_11;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(b_11)), not_null(a_11)), not_null(z_10)), not_null(y_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_11)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(v_10), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_10))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(s_10), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_11)), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_11))))), (ATerm) ATmakeAppl(sym_PrimT_3, term_b_10, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_11))), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_10)))))));
      }
    }
  else
    {
      if(match_cons(t_10, sym_Build_1))
        {
          v_10 = ATgetArgument(t_10, 0);
          {
            ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
            ATerm m_11 = NULL;
            ATerm q_11 = NULL;
            t = new_0(t);
            {
              m_11 = t;
              {
                if(((k_11 != NULL) && (k_11 != m_11)))
                  _fail(m_11);
                else
                  k_11 = m_11;
                {
                  t = not_null(v_10);
                  {
                    ATerm s_0 (ATerm t)
                    {
                      ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
                      n_11 = t;
                      k_10 :
                      if(match_cons(n_11, sym_Explode_2))
                        {
                          o_11 = ATgetArgument(n_11, 0);
                          p_11 = ATgetArgument(n_11, 1);
                          {
                            if(((i_11 != NULL) && (i_11 != o_11)))
                              _fail(o_11);
                            else
                              i_11 = o_11;
                            {
                              if(((j_11 != NULL) && (j_11 != p_11)))
                                _fail(p_11);
                              else
                                j_11 = p_11;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_11));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, s_0);
                    {
                      q_11 = t;
                      if(((l_11 != NULL) && (l_11 != q_11)))
                        _fail(q_11);
                      else
                        l_11 = q_11;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_b_10, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_11)), not_null(i_11))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_11))), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_11)))));
          }
        }
      else
        {
          if(match_cons(t_10, sym_Match_1))
            {
              v_10 = ATgetArgument(t_10, 0);
              {
                ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
                ATerm x_11 = NULL;
                ATerm y_11 = NULL;
                t = new_0(t);
                {
                  x_11 = t;
                  {
                    if(((u_11 != NULL) && (u_11 != x_11)))
                      _fail(x_11);
                    else
                      u_11 = x_11;
                    {
                      ATerm c_12 = NULL;
                      t = new_0(t);
                      {
                        y_11 = t;
                        {
                          if(((v_11 != NULL) && (v_11 != y_11)))
                            _fail(y_11);
                          else
                            v_11 = y_11;
                          {
                            t = not_null(v_10);
                            {
                              ATerm t_0 (ATerm t)
                              {
                                ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
                                z_11 = t;
                                p_10 :
                                if(match_cons(z_11, sym_Explode_2))
                                  {
                                    a_12 = ATgetArgument(z_11, 0);
                                    b_12 = ATgetArgument(z_11, 1);
                                    {
                                      if(((s_11 != NULL) && (s_11 != a_12)))
                                        _fail(a_12);
                                      else
                                        s_11 = a_12;
                                      {
                                        if(((t_11 != NULL) && (t_11 != b_12)))
                                          _fail(b_12);
                                        else
                                          t_11 = b_12;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_11));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, t_0);
                              {
                                c_12 = t;
                                if(((w_11 != NULL) && (w_11 != c_12)))
                                  _fail(c_12);
                                else
                                  w_11 = c_12;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_11)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_11))), (ATerm) ATmakeAppl(sym_PrimT_3, term_c_10, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_11)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_11)), (ATerm) ATmakeAppl(sym_Op_2, term_d_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_11)), not_null(s_11)))))));
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
  ATerm j_13 = NULL,k_13 = NULL;
  j_13 = t;
  i_13 :
  if(match_cons(j_13, sym_Match_1))
    {
      k_13 = ATgetArgument(j_13, 0);
      {
        ATerm e_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL;
            ATerm q_13 = NULL;
            ATerm u_13 = NULL;
            t = new_0(t);
            {
              q_13 = t;
              {
                if(((o_13 != NULL) && (o_13 != q_13)))
                  _fail(q_13);
                else
                  o_13 = q_13;
                {
                  t = not_null(k_13);
                  {
                    ATerm v_0 (ATerm t)
                    {
                      ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
                      r_13 = t;
                      x_12 :
                      if(match_cons(r_13, sym_Anno_2))
                        {
                          s_13 = ATgetArgument(r_13, 0);
                          t_13 = ATgetArgument(r_13, 1);
                          {
                            if(((m_13 != NULL) && (m_13 != s_13)))
                              _fail(s_13);
                            else
                              m_13 = s_13;
                            {
                              if(((n_13 != NULL) && (n_13 != t_13)))
                                _fail(t_13);
                              else
                                n_13 = t_13;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_13)), not_null(m_13));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, v_0);
                    {
                      u_13 = t;
                      if(((p_13 != NULL) && (p_13 != u_13)))
                        _fail(u_13);
                      else
                        p_13 = u_13;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_13)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_g_10, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_13)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(n_13))))));
            ;
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
            {
              ATerm h_10 = t;
              int i_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL;
                  ATerm a_14 = NULL;
                  ATerm d_14 = NULL;
                  t = new_0(t);
                  {
                    a_14 = t;
                    {
                      if(((y_13 != NULL) && (y_13 != a_14)))
                        _fail(a_14);
                      else
                        y_13 = a_14;
                      {
                        t = not_null(k_13);
                        {
                          ATerm w_0 (ATerm t)
                          {
                            ATerm b_14 = NULL,c_14 = NULL;
                            b_14 = t;
                            c_13 :
                            if(match_cons(b_14, sym_RootApp_1))
                              {
                                c_14 = ATgetArgument(b_14, 0);
                                {
                                  if(((x_13 != NULL) && (x_13 != c_14)))
                                    _fail(c_14);
                                  else
                                    x_13 = c_14;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_13));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, w_0);
                          {
                            d_14 = t;
                            if(((z_13 != NULL) && (z_13 != d_14)))
                              _fail(d_14);
                            else
                              z_13 = d_14;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_13))), not_null(x_13))));
                  ;
                  LocalPopChoice(i_10);
                }
              else
                {
                  t = h_10;
                  {
                    ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL;
                    ATerm j_14 = NULL;
                    ATerm n_14 = NULL;
                    t = new_0(t);
                    {
                      j_14 = t;
                      {
                        if(((h_14 != NULL) && (h_14 != j_14)))
                          _fail(j_14);
                        else
                          h_14 = j_14;
                        {
                          t = not_null(k_13);
                          {
                            ATerm x_0 (ATerm t)
                            {
                              ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL;
                              k_14 = t;
                              g_13 :
                              if(match_cons(k_14, sym_App_2))
                                {
                                  l_14 = ATgetArgument(k_14, 0);
                                  m_14 = ATgetArgument(k_14, 1);
                                  {
                                    if(((g_14 != NULL) && (g_14 != l_14)))
                                      _fail(l_14);
                                    else
                                      g_14 = l_14;
                                    {
                                      if(((f_14 != NULL) && (f_14 != m_14)))
                                        _fail(m_14);
                                      else
                                        f_14 = m_14;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_14));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, x_0);
                            {
                              n_14 = t;
                              if(((i_14 != NULL) && (i_14 != n_14)))
                                _fail(n_14);
                              else
                                i_14 = n_14;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_14)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_14)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_14))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_14)), not_null(g_14)))));
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
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
  f_15 = t;
  d_15 :
  if(match_cons(f_15, sym_Match_1))
    {
      g_15 = ATgetArgument(f_15, 0);
      e_15 :
      if(match_cons(g_15, sym_RootApp_1))
        {
          h_15 = ATgetArgument(g_15, 0);
          t = not_null(h_15);
        }
      else
        {
          if(match_cons(g_15, sym_App_2))
            {
              h_15 = ATgetArgument(g_15, 0);
              i_15 = ATgetArgument(g_15, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(h_15), not_null(i_15));
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
  ATerm v_15 = NULL,w_15 = NULL;
  v_15 = t;
  u_15 :
  if(match_cons(v_15, sym_Match_1))
    {
      w_15 = ATgetArgument(v_15, 0);
      {
        ATerm y_15 = NULL,z_15 = NULL;
        ATerm d_16 = NULL;
        t = not_null(w_15);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
            a_16 = t;
            r_15 :
            if(match_cons(a_16, sym_RootApp_1))
              {
                b_16 = ATgetArgument(a_16, 0);
                s_15 :
                if(match_cons(b_16, sym_Match_1))
                  {
                    c_16 = ATgetArgument(b_16, 0);
                    {
                      if(((y_15 != NULL) && (y_15 != c_16)))
                        _fail(c_16);
                      else
                        y_15 = c_16;
                      t = not_null(y_15);
                    }
                  }
                else
                  {
                    _fail(t);
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
            d_16 = t;
            if(((z_15 != NULL) && (z_15 != d_16)))
              _fail(d_16);
            else
              z_15 = d_16;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(z_15));
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
  ATerm j_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      ;
      LocalPopChoice(l_10);
    }
  else
    {
      t = j_10;
      {
        ATerm m_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            ;
            LocalPopChoice(n_10);
          }
        else
          {
            t = m_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  y_16 = t;
  x_16 :
  if(match_cons(y_16, sym_Build_1))
    {
      z_16 = ATgetArgument(y_16, 0);
      {
        ATerm o_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
            ATerm g_17 = NULL;
            ATerm k_17 = NULL;
            t = new_0(t);
            {
              g_17 = t;
              {
                if(((e_17 != NULL) && (e_17 != g_17)))
                  _fail(g_17);
                else
                  e_17 = g_17;
                {
                  t = not_null(z_16);
                  {
                    ATerm z_0 (ATerm t)
                    {
                      ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
                      h_17 = t;
                      n_16 :
                      if(match_cons(h_17, sym_Anno_2))
                        {
                          i_17 = ATgetArgument(h_17, 0);
                          j_17 = ATgetArgument(h_17, 1);
                          {
                            if(((c_17 != NULL) && (c_17 != i_17)))
                              _fail(i_17);
                            else
                              c_17 = i_17;
                            {
                              if(((d_17 != NULL) && (d_17 != j_17)))
                                _fail(j_17);
                              else
                                d_17 = j_17;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_17));
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
                      k_17 = t;
                      if(((f_17 != NULL) && (f_17 != k_17)))
                        _fail(k_17);
                      else
                        f_17 = k_17;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_17)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_10, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_17)), not_null(c_17))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_17))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_17))));
            ;
            LocalPopChoice(q_10);
          }
        else
          {
            t = o_10;
            {
              ATerm w_10 = t;
              int x_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL;
                  ATerm p_17 = NULL;
                  ATerm s_17 = NULL;
                  t = new_0(t);
                  {
                    p_17 = t;
                    {
                      if(((n_17 != NULL) && (n_17 != p_17)))
                        _fail(p_17);
                      else
                        n_17 = p_17;
                      {
                        t = not_null(z_16);
                        {
                          ATerm a_1 (ATerm t)
                          {
                            ATerm q_17 = NULL,r_17 = NULL;
                            q_17 = t;
                            r_16 :
                            if(match_cons(q_17, sym_RootApp_1))
                              {
                                r_17 = ATgetArgument(q_17, 0);
                                {
                                  if(((m_17 != NULL) && (m_17 != r_17)))
                                    _fail(r_17);
                                  else
                                    m_17 = r_17;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_17));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, a_1);
                          {
                            s_17 = t;
                            if(((o_17 != NULL) && (o_17 != s_17)))
                              _fail(s_17);
                            else
                              o_17 = s_17;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_17)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_17), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_17))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_17))));
                  ;
                  LocalPopChoice(x_10);
                }
              else
                {
                  t = w_10;
                  {
                    ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL;
                    ATerm y_17 = NULL;
                    ATerm c_18 = NULL;
                    t = new_0(t);
                    {
                      y_17 = t;
                      {
                        if(((w_17 != NULL) && (w_17 != y_17)))
                          _fail(y_17);
                        else
                          w_17 = y_17;
                        {
                          t = not_null(z_16);
                          {
                            ATerm b_1 (ATerm t)
                            {
                              ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
                              z_17 = t;
                              v_16 :
                              if(match_cons(z_17, sym_App_2))
                                {
                                  a_18 = ATgetArgument(z_17, 0);
                                  b_18 = ATgetArgument(z_17, 1);
                                  {
                                    if(((u_17 != NULL) && (u_17 != a_18)))
                                      _fail(a_18);
                                    else
                                      u_17 = a_18;
                                    {
                                      if(((v_17 != NULL) && (v_17 != b_18)))
                                        _fail(b_18);
                                      else
                                        v_17 = b_18;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_17));
                                    }
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
                              c_18 = t;
                              if(((x_17 != NULL) && (x_17 != c_18)))
                                _fail(c_18);
                              else
                                x_17 = c_18;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_17)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(u_17), not_null(v_17), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_17)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(x_17))));
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
  ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL;
  v_18 = t;
  t_18 :
  if(match_cons(v_18, sym_Build_1))
    {
      w_18 = ATgetArgument(v_18, 0);
      u_18 :
      if(match_cons(w_18, sym_RootApp_1))
        {
          x_18 = ATgetArgument(w_18, 0);
          t = not_null(x_18);
        }
      else
        {
          if(match_cons(w_18, sym_App_2))
            {
              x_18 = ATgetArgument(w_18, 0);
              y_18 = ATgetArgument(w_18, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_18)), not_null(x_18));
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
ATerm As_2 (ATerm t, ATerm p_97 (ATerm), ATerm q_97 (ATerm))
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
  k_19 = t;
  j_19 :
  if(match_cons(k_19, sym_As_2))
    {
      l_19 = ATgetArgument(k_19, 0);
      m_19 = ATgetArgument(k_19, 1);
      {
        ATerm b_20 = NULL,d_20 = NULL;
        ATerm c_20 = NULL;
        t = SSLgetAnnotations(not_null(k_19));
        {
          c_20 = t;
          if(((b_20 != NULL) && (b_20 != c_20)))
            _fail(c_20);
          else
            b_20 = c_20;
        }
        {
          t = not_null(l_19);
          {
            ATerm f_20 = NULL;
            t = p_97(t);
            {
              d_20 = t;
              {
                t = not_null(m_19);
                {
                  ATerm i_20 = NULL;
                  t = q_97(t);
                  {
                    f_20 = t;
                    {
                      ATerm j_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(d_20), not_null(f_20)), not_null(b_20));
                      {
                        j_20 = t;
                        if(((i_20 != NULL) && (i_20 != j_20)))
                          _fail(j_20);
                        else
                          i_20 = j_20;
                      }
                      t = not_null(i_20);
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
ATerm PrimT_3 (ATerm t, ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm))
{
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL;
  x_20 = t;
  w_20 :
  if(match_cons(x_20, sym_PrimT_3))
    {
      y_20 = ATgetArgument(x_20, 0);
      z_20 = ATgetArgument(x_20, 1);
      a_21 = ATgetArgument(x_20, 2);
      {
        ATerm f_21 = NULL,h_21 = NULL;
        ATerm g_21 = NULL;
        t = SSLgetAnnotations(not_null(x_20));
        {
          g_21 = t;
          if(((f_21 != NULL) && (f_21 != g_21)))
            _fail(g_21);
          else
            f_21 = g_21;
        }
        {
          t = not_null(y_20);
          {
            ATerm j_21 = NULL;
            t = o_101(t);
            {
              h_21 = t;
              {
                t = not_null(z_20);
                {
                  ATerm l_21 = NULL;
                  t = p_101(t);
                  {
                    j_21 = t;
                    {
                      t = not_null(a_21);
                      {
                        ATerm o_21 = NULL;
                        t = q_101(t);
                        {
                          l_21 = t;
                          {
                            ATerm p_21 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(h_21), not_null(j_21), not_null(l_21)), not_null(f_21));
                            {
                              p_21 = t;
                              if(((o_21 != NULL) && (o_21 != p_21)))
                                _fail(p_21);
                              else
                                o_21 = p_21;
                            }
                            t = not_null(o_21);
                          }
                        }
                      }
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
ATerm Explode_2 (ATerm t, ATerm i_97 (ATerm), ATerm j_97 (ATerm))
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
  d_22 = t;
  c_22 :
  if(match_cons(d_22, sym_Explode_2))
    {
      e_22 = ATgetArgument(d_22, 0);
      f_22 = ATgetArgument(d_22, 1);
      {
        ATerm j_22 = NULL,l_22 = NULL;
        ATerm k_22 = NULL;
        t = SSLgetAnnotations(not_null(d_22));
        {
          k_22 = t;
          if(((j_22 != NULL) && (j_22 != k_22)))
            _fail(k_22);
          else
            j_22 = k_22;
        }
        {
          t = not_null(e_22);
          {
            ATerm n_22 = NULL;
            t = i_97(t);
            {
              l_22 = t;
              {
                t = not_null(f_22);
                {
                  ATerm p_22 = NULL;
                  t = j_97(t);
                  {
                    n_22 = t;
                    {
                      ATerm q_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(l_22), not_null(n_22)), not_null(j_22));
                      {
                        q_22 = t;
                        if(((p_22 != NULL) && (p_22 != q_22)))
                          _fail(q_22);
                        else
                          p_22 = q_22;
                      }
                      t = not_null(p_22);
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
ATerm Op_2 (ATerm t, ATerm e_97 (ATerm), ATerm f_97 (ATerm))
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
  d_23 = t;
  c_23 :
  if(match_cons(d_23, sym_Op_2))
    {
      e_23 = ATgetArgument(d_23, 0);
      f_23 = ATgetArgument(d_23, 1);
      {
        ATerm j_23 = NULL,l_23 = NULL;
        ATerm k_23 = NULL;
        t = SSLgetAnnotations(not_null(d_23));
        {
          k_23 = t;
          if(((j_23 != NULL) && (j_23 != k_23)))
            _fail(k_23);
          else
            j_23 = k_23;
        }
        {
          t = not_null(e_23);
          {
            ATerm n_23 = NULL;
            t = e_97(t);
            {
              l_23 = t;
              {
                t = not_null(f_23);
                {
                  ATerm p_23 = NULL;
                  t = f_97(t);
                  {
                    n_23 = t;
                    {
                      ATerm q_23 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(l_23), not_null(n_23)), not_null(j_23));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pat_td_1 (ATerm t, ATerm h_139 (ATerm))
{
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_139(t);
      ;
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      {
        ATerm r_11 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_1 (ATerm t)
            {
              ATerm d_1 (ATerm t)
              {
                t = pat_td_1(t, h_139);
                return(t);
              }
              t = fetch_1(t, d_1);
              return(t);
            }
            t = Op_2(t, _id, c_1);
            ;
            LocalPopChoice(d_12);
          }
        else
          {
            t = r_11;
            {
              ATerm e_12 = t;
              int f_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = pat_td_1(t, h_139);
                    return(t);
                  }
                  t = Explode_2(t, _id, e_1);
                  ;
                  LocalPopChoice(f_12);
                }
              else
                {
                  t = e_12;
                  {
                    ATerm g_12 = t;
                    int h_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_1 (ATerm t)
                        {
                          t = pat_td_1(t, h_139);
                          return(t);
                        }
                        t = Explode_2(t, f_1, _id);
                        ;
                        LocalPopChoice(h_12);
                      }
                    else
                      {
                        t = g_12;
                        {
                          ATerm i_12 = t;
                          int j_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_1 (ATerm t)
                              {
                                ATerm h_1 (ATerm t)
                                {
                                  t = pat_td_1(t, h_139);
                                  return(t);
                                }
                                t = fetch_1(t, h_1);
                                return(t);
                              }
                              t = PrimT_3(t, _id, _id, g_1);
                              ;
                              LocalPopChoice(j_12);
                            }
                          else
                            {
                              t = i_12;
                              {
                                ATerm i_1 (ATerm t)
                                {
                                  t = pat_td_1(t, h_139);
                                  return(t);
                                }
                                t = As_2(t, _id, i_1);
                              }
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
  ATerm h_24 = NULL,i_24 = NULL;
  h_24 = t;
  g_24 :
  if(match_cons(h_24, sym_Build_1))
    {
      i_24 = ATgetArgument(h_24, 0);
      {
        ATerm k_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_24 = NULL,l_24 = NULL;
            ATerm p_24 = NULL;
            t = not_null(i_24);
            {
              ATerm j_1 (ATerm t)
              {
                ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
                m_24 = t;
                z_23 :
                if(match_cons(m_24, sym_RootApp_1))
                  {
                    n_24 = ATgetArgument(m_24, 0);
                    a_24 :
                    if(match_cons(n_24, sym_Build_1))
                      {
                        o_24 = ATgetArgument(n_24, 0);
                        {
                          if(((k_24 != NULL) && (k_24 != o_24)))
                            _fail(o_24);
                          else
                            k_24 = o_24;
                          t = not_null(k_24);
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = pat_td_1(t, j_1);
              {
                p_24 = t;
                if(((l_24 != NULL) && (l_24 != p_24)))
                  _fail(p_24);
                else
                  l_24 = p_24;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(l_24));
            ;
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
            {
              ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
              ATerm y_24 = NULL;
              t = not_null(i_24);
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
                  u_24 = t;
                  d_24 :
                  if(match_cons(u_24, sym_App_2))
                    {
                      v_24 = ATgetArgument(u_24, 0);
                      x_24 = ATgetArgument(u_24, 1);
                      e_24 :
                      if(match_cons(v_24, sym_Build_1))
                        {
                          w_24 = ATgetArgument(v_24, 0);
                          {
                            if(((s_24 != NULL) && (s_24 != w_24)))
                              _fail(w_24);
                            else
                              s_24 = w_24;
                            {
                              if(((r_24 != NULL) && (r_24 != x_24)))
                                _fail(x_24);
                              else
                                r_24 = x_24;
                              t = not_null(s_24);
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
                t = pat_td_1(t, k_1);
                {
                  y_24 = t;
                  if(((t_24 != NULL) && (t_24 != y_24)))
                    _fail(y_24);
                  else
                    t_24 = y_24;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(t_24));
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
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      ;
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            ;
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL;
  j_25 = t;
  g_25 :
  if(match_cons(j_25, sym__2))
    {
      k_25 = ATgetArgument(j_25, 0);
      n_25 = ATgetArgument(j_25, 1);
      h_25 :
      if(match_cons(k_25, sym__2))
        {
          l_25 = ATgetArgument(k_25, 0);
          m_25 = ATgetArgument(k_25, 1);
          i_25 :
          if(match_cons(n_25, sym__2))
            {
              o_25 = ATgetArgument(n_25, 0);
              p_25 = ATgetArgument(n_25, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_25)), not_null(l_25)), (ATerm) ATinsert(CheckATermList(not_null(p_25)), not_null(m_25)));
            }
          else
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
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL;
  x_25 = t;
  w_25 :
  if(((ATgetType(x_25) == AT_LIST) && !(ATisEmpty(x_25))))
    {
      y_25 = ATgetFirst((ATermList) x_25);
      z_25 = (ATerm) ATgetNext((ATermList) x_25);
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_25), not_null(z_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  e_26 :
  if(((ATgetType(f_26) == AT_LIST) && ATisEmpty(f_26)))
    {
      t = term_q_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm x_117 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, x_117);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL;
  ATerm r_26 (ATerm t)
  {
    ATerm o_26 = NULL;
    ATerm p_26 = NULL;
    t = not_null(l_26);
    {
      ATerm r_12 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_12;
        }
      {
        t = new_0(t);
        {
          p_26 = t;
          if(((o_26 != NULL) && (o_26 != p_26)))
            _fail(p_26);
          else
            o_26 = p_26;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(o_26)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_26)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_26))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_26))));
    return(t);
  }
  ATerm s_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_s_12, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_26))));
    return(t);
  }
  l_26 = t;
  k_26 :
  if(match_cons(l_26, sym_Var_1))
    {
      m_26 = ATgetArgument(l_26, 0);
      {
        ATerm t_12 = t;
        int u_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_26(t);
            ;
            LocalPopChoice(u_12);
          }
        else
          {
            t = t_12;
            t = s_26(t);
          }
      }
    }
  else
    {
      t = r_26(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
  e_27 = t;
  c_27 :
  if(match_cons(e_27, sym_PrimT_3))
    {
      f_27 = ATgetArgument(e_27, 0);
      g_27 = ATgetArgument(e_27, 1);
      d_27 = ATgetArgument(e_27, 2);
      {
        ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
        ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
        t = not_null(d_27);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm v_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_12;
              }
            return(t);
          }
          t = fetch_1(t, l_1);
          {
            t = not_null(d_27);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm m_1 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, m_1);
                {
                  n_27 = t;
                  x_26 :
                  if(match_cons(n_27, sym__2))
                    {
                      o_27 = ATgetArgument(n_27, 0);
                      p_27 = ATgetArgument(n_27, 1);
                      y_26 :
                      if(match_cons(p_27, sym__2))
                        {
                          q_27 = ATgetArgument(p_27, 0);
                          r_27 = ATgetArgument(p_27, 1);
                          {
                            if(((k_27 != NULL) && (k_27 != o_27)))
                              _fail(o_27);
                            else
                              k_27 = o_27;
                            {
                              if(((l_27 != NULL) && (l_27 != q_27)))
                                _fail(q_27);
                              else
                                l_27 = q_27;
                              if(((m_27 != NULL) && (m_27 != r_27)))
                                _fail(r_27);
                              else
                                m_27 = r_27;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(l_27)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(f_27), not_null(g_27), not_null(m_27))));
      }
    }
  else
    {
      if(match_cons(e_27, sym_Prim_2))
        {
          f_27 = ATgetArgument(e_27, 0);
          g_27 = ATgetArgument(e_27, 1);
          {
            ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
            ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
            t = not_null(g_27);
            {
              ATerm n_1 (ATerm t)
              {
                ATerm w_12 = t;
                if((PushChoice() == 0))
                  {
                    t = Var_1(t, _id);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_12;
                  }
                return(t);
              }
              t = fetch_1(t, n_1);
              {
                t = not_null(g_27);
                {
                  t = unzip_1(t, LiftPrimArg_0);
                  {
                    ATerm o_1 (ATerm t)
                    {
                      t = unzip_1(t, _id);
                      return(t);
                    }
                    t = _2(t, concat_0, o_1);
                    {
                      x_27 = t;
                      a_27 :
                      if(match_cons(x_27, sym__2))
                        {
                          y_27 = ATgetArgument(x_27, 0);
                          z_27 = ATgetArgument(x_27, 1);
                          b_27 :
                          if(match_cons(z_27, sym__2))
                            {
                              a_28 = ATgetArgument(z_27, 0);
                              b_28 = ATgetArgument(z_27, 1);
                              {
                                if(((u_27 != NULL) && (u_27 != y_27)))
                                  _fail(y_27);
                                else
                                  u_27 = y_27;
                                {
                                  if(((v_27 != NULL) && (v_27 != a_28)))
                                    _fail(a_28);
                                  else
                                    v_27 = a_28;
                                  if(((w_27 != NULL) && (w_27 != b_28)))
                                    _fail(b_28);
                                  else
                                    w_27 = b_28;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(v_27)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(f_27), (ATerm)ATempty, not_null(w_27))));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm k_28 = NULL;
  k_28 = t;
  j_28 :
  if(match_cons(k_28, sym_Wld_0))
    {
      ATerm m_28 = NULL,o_28 = NULL;
      ATerm y_12;
      y_12 = t;
      {
        ATerm n_28 = NULL;
        t = SSLgetAnnotations(not_null(k_28));
        {
          n_28 = t;
          if(((m_28 != NULL) && (m_28 != n_28)))
            _fail(n_28);
          else
            m_28 = n_28;
        }
      }
      t = y_12;
      {
        ATerm p_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(m_28));
        {
          p_28 = t;
          if(((o_28 != NULL) && (o_28 != p_28)))
            _fail(p_28);
          else
            o_28 = p_28;
        }
        t = not_null(o_28);
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
  ATerm z_12 = t;
  if((PushChoice() == 0))
    {
      ATerm p_1 (ATerm t)
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, p_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm m_97 (ATerm), ATerm n_97 (ATerm))
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL;
  z_28 = t;
  y_28 :
  if(match_cons(z_28, sym_App_2))
    {
      a_29 = ATgetArgument(z_28, 0);
      b_29 = ATgetArgument(z_28, 1);
      {
        ATerm f_29 = NULL,h_29 = NULL;
        ATerm g_29 = NULL;
        t = SSLgetAnnotations(not_null(z_28));
        {
          g_29 = t;
          if(((f_29 != NULL) && (f_29 != g_29)))
            _fail(g_29);
          else
            f_29 = g_29;
        }
        {
          t = not_null(a_29);
          {
            ATerm j_29 = NULL;
            t = m_97(t);
            {
              h_29 = t;
              {
                t = not_null(b_29);
                {
                  ATerm l_29 = NULL;
                  t = n_97(t);
                  {
                    j_29 = t;
                    {
                      ATerm m_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(h_29), not_null(j_29)), not_null(f_29));
                      {
                        m_29 = t;
                        if(((l_29 != NULL) && (l_29 != m_29)))
                          _fail(m_29);
                        else
                          l_29 = m_29;
                      }
                      t = not_null(l_29);
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
ATerm Con_3 (ATerm t, ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm a_98 (ATerm))
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL;
  z_29 = t;
  y_29 :
  if(match_cons(z_29, sym_Con_3))
    {
      a_30 = ATgetArgument(z_29, 0);
      b_30 = ATgetArgument(z_29, 1);
      c_30 = ATgetArgument(z_29, 2);
      {
        ATerm h_30 = NULL,j_30 = NULL;
        ATerm i_30 = NULL;
        t = SSLgetAnnotations(not_null(z_29));
        {
          i_30 = t;
          if(((h_30 != NULL) && (h_30 != i_30)))
            _fail(i_30);
          else
            h_30 = i_30;
        }
        {
          t = not_null(a_30);
          {
            ATerm l_30 = NULL;
            t = y_97(t);
            {
              j_30 = t;
              {
                t = not_null(b_30);
                {
                  ATerm n_30 = NULL;
                  t = z_97(t);
                  {
                    l_30 = t;
                    {
                      t = not_null(c_30);
                      {
                        ATerm p_30 = NULL;
                        t = a_98(t);
                        {
                          n_30 = t;
                          {
                            ATerm q_30 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(j_30), not_null(l_30), not_null(n_30)), not_null(h_30));
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
  ATerm d_13 = t;
  if((PushChoice() == 0))
    {
      ATerm q_1 (ATerm t)
      {
        ATerm e_13 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(f_13);
          }
        else
          {
            t = e_13;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, q_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_13;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL;
  b_31 = t;
  z_30 :
  if(match_cons(b_31, sym_SRule_1))
    {
      c_31 = ATgetArgument(b_31, 0);
      a_31 :
      if(match_cons(c_31, sym_StratRule_3))
        {
          d_31 = ATgetArgument(c_31, 0);
          e_31 = ATgetArgument(c_31, 1);
          f_31 = ATgetArgument(c_31, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_31)), (ATerm) ATmakeAppl(sym_Where_1, not_null(f_31))), not_null(d_31)));
        }
      else
        {
          if(match_cons(c_31, sym_Rule_3))
            {
              d_31 = ATgetArgument(c_31, 0);
              e_31 = ATgetArgument(c_31, 1);
              f_31 = ATgetArgument(c_31, 2);
              {
                t = not_null(d_31);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(e_31);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(e_31))), (ATerm) ATmakeAppl(sym_Where_1, not_null(f_31))), (ATerm) ATmakeAppl(sym_Match_1, not_null(d_31))));
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
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL;
  d_32 = t;
  b_32 :
  if(match_cons(d_32, sym_SRule_1))
    {
      e_32 = ATgetArgument(d_32, 0);
      c_32 :
      if(match_cons(e_32, sym_Rule_3))
        {
          f_32 = ATgetArgument(e_32, 0);
          g_32 = ATgetArgument(e_32, 1);
          h_32 = ATgetArgument(e_32, 2);
          {
            ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL;
            ATerm t_32 = NULL;
            ATerm z_32 = NULL;
            t = new_0(t);
            {
              t_32 = t;
              {
                if(((q_32 != NULL) && (q_32 != t_32)))
                  _fail(t_32);
                else
                  q_32 = t_32;
                {
                  t = not_null(f_32);
                  {
                    ATerm i_33 = NULL;
                    ATerm r_1 (ATerm t)
                    {
                      ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL;
                      u_32 = t;
                      r_31 :
                      if(match_cons(u_32, sym_Con_3))
                        {
                          v_32 = ATgetArgument(u_32, 0);
                          x_32 = ATgetArgument(u_32, 1);
                          y_32 = ATgetArgument(u_32, 2);
                          s_31 :
                          if(match_cons(v_32, sym_Var_1))
                            {
                              w_32 = ATgetArgument(v_32, 0);
                              {
                                if(((p_32 != NULL) && (p_32 != w_32)))
                                  _fail(w_32);
                                else
                                  p_32 = w_32;
                                {
                                  if(((n_32 != NULL) && (n_32 != x_32)))
                                    _fail(x_32);
                                  else
                                    n_32 = x_32;
                                  {
                                    if(((l_32 != NULL) && (l_32 != y_32)))
                                      _fail(y_32);
                                    else
                                      l_32 = y_32;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_32));
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
                    t = oncetd_1(t, r_1);
                    {
                      z_32 = t;
                      {
                        if(((r_32 != NULL) && (r_32 != z_32)))
                          _fail(z_32);
                        else
                          r_32 = z_32;
                        {
                          t = not_null(g_32);
                          {
                            ATerm s_1 (ATerm t)
                            {
                              ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL;
                              a_33 = t;
                              v_31 :
                              if(match_cons(a_33, sym_Con_3))
                                {
                                  b_33 = ATgetArgument(a_33, 0);
                                  d_33 = ATgetArgument(a_33, 1);
                                  e_33 = ATgetArgument(a_33, 2);
                                  w_31 :
                                  if(match_cons(b_33, sym_Var_1))
                                    {
                                      c_33 = ATgetArgument(b_33, 0);
                                      x_31 :
                                      if(match_cons(e_33, sym_CallT_3))
                                        {
                                          f_33 = ATgetArgument(e_33, 0);
                                          g_33 = ATgetArgument(e_33, 1);
                                          h_33 = ATgetArgument(e_33, 2);
                                          y_31 :
                                          if(((ATgetType(g_33) == AT_LIST) && ATisEmpty(g_33)))
                                            {
                                              z_31 :
                                              if(((ATgetType(h_33) == AT_LIST) && ATisEmpty(h_33)))
                                                {
                                                  {
                                                    if(((p_32 != NULL) && (p_32 != c_33)))
                                                      _fail(c_33);
                                                    else
                                                      p_32 = c_33;
                                                    {
                                                      if(((o_32 != NULL) && (o_32 != d_33)))
                                                        _fail(d_33);
                                                      else
                                                        o_32 = d_33;
                                                      {
                                                        if(((m_32 != NULL) && (m_32 != f_33)))
                                                          _fail(f_33);
                                                        else
                                                          m_32 = f_33;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_32));
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
                            t = oncetd_1(t, s_1);
                            {
                              i_33 = t;
                              if(((s_32 != NULL) && (s_32 != i_33)))
                                _fail(i_33);
                              else
                                s_32 = i_33;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_32)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(r_32), not_null(s_32), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_32), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(m_32), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(n_32), not_null(o_32), term_s_12))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_32)), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_32)))))));
          }
        }
      else
        {
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
  ATerm t_1 (ATerm t)
  {
    ATerm h_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        ;
        LocalPopChoice(l_13);
      }
    else
      {
        t = h_13;
        {
          ATerm v_13 = t;
          int w_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              ;
              LocalPopChoice(w_13);
            }
          else
            {
              t = v_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, t_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm a_111 (ATerm))
{
  t = a_111(t);
  {
    ATerm u_1 (ATerm t)
    {
      t = topdown_1(t, a_111);
      return(t);
    }
    t = _all(t, u_1);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm w_1 (ATerm t)
      {
        ATerm e_14 = t;
        int o_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            ;
            LocalPopChoice(o_14);
          }
        else
          {
            t = e_14;
            {
              ATerm p_14 = t;
              int q_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(q_14);
                }
              else
                {
                  t = p_14;
                  {
                    ATerm r_14 = t;
                    int s_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        ;
                        LocalPopChoice(s_14);
                      }
                    else
                      {
                        t = r_14;
                        {
                          ATerm t_14 = t;
                          int u_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              ;
                              LocalPopChoice(u_14);
                            }
                          else
                            {
                              t = t_14;
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
      t = repeat_1(t, w_1);
    }
    return(t);
  }
  t = topdown_1(t, v_1);
  return(t);
}
ATerm UnMark_0 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL;
  w_33 = t;
  r_33 :
  if(match_cons(w_33, sym_CallT_3))
    {
      x_33 = ATgetArgument(w_33, 0);
      z_33 = ATgetArgument(w_33, 1);
      a_34 = ATgetArgument(w_33, 2);
      s_33 :
      if(match_cons(x_33, sym_SVar_1))
        {
          y_33 = ATgetArgument(x_33, 0);
          t_33 :
          if(match_string(y_33, "mark"))
            {
              u_33 :
              if(((ATgetType(z_33) == AT_LIST) && ATisEmpty(z_33)))
                {
                  v_33 :
                  if(((ATgetType(a_34) == AT_LIST) && ATisEmpty(a_34)))
                    {
                      t = term_s_12;
                    }
                  else
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
ATerm BottomupToVarIsId_Cond_0 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL;
  d_35 = t;
  s_34 :
  if(match_cons(d_35, sym_Seq_2))
    {
      e_35 = ATgetArgument(d_35, 0);
      j_35 = ATgetArgument(d_35, 1);
      t_34 :
      if(match_cons(e_35, sym_CallT_3))
        {
          f_35 = ATgetArgument(e_35, 0);
          h_35 = ATgetArgument(e_35, 1);
          i_35 = ATgetArgument(e_35, 2);
          u_34 :
          if(match_cons(f_35, sym_SVar_1))
            {
              g_35 = ATgetArgument(f_35, 0);
              v_34 :
              if(match_string(g_35, "mark"))
                {
                  w_34 :
                  if(((ATgetType(h_35) == AT_LIST) && ATisEmpty(h_35)))
                    {
                      x_34 :
                      if(((ATgetType(i_35) == AT_LIST) && ATisEmpty(i_35)))
                        {
                          y_34 :
                          if(match_cons(j_35, sym_Seq_2))
                            {
                              k_35 = ATgetArgument(j_35, 0);
                              m_35 = ATgetArgument(j_35, 1);
                              z_34 :
                              if(match_cons(k_35, sym_Match_1))
                                {
                                  l_35 = ATgetArgument(k_35, 0);
                                  a_35 :
                                  if(match_cons(m_35, sym_Seq_2))
                                    {
                                      n_35 = ATgetArgument(m_35, 0);
                                      p_35 = ATgetArgument(m_35, 1);
                                      b_35 :
                                      if(match_cons(n_35, sym_Where_1))
                                        {
                                          o_35 = ATgetArgument(n_35, 0);
                                          c_35 :
                                          if(match_cons(p_35, sym_Build_1))
                                            {
                                              q_35 = ATgetArgument(p_35, 0);
                                              {
                                                ATerm v_14 = t;
                                                int w_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
                                                    ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
                                                    t = term_l_15;
                                                    {
                                                      ATerm a_2 (ATerm t)
                                                      {
                                                        t = term_m_15;
                                                        return(t);
                                                      }
                                                      t = rewrite_1(t, a_2);
                                                      {
                                                        y_35 = t;
                                                        h_34 :
                                                        if(match_cons(y_35, sym_Defined_2))
                                                          {
                                                            z_35 = ATgetArgument(y_35, 0);
                                                            a_36 = ATgetArgument(y_35, 1);
                                                            i_34 :
                                                            if(match_string(z_35, "r_0"))
                                                              {
                                                                ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL;
                                                                if(((v_35 != NULL) && (v_35 != a_36)))
                                                                  _fail(a_36);
                                                                else
                                                                  v_35 = a_36;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__3, not_null(v_35), not_null(l_35), (ATerm) ATmakeAppl(sym__2, not_null(o_35), not_null(q_35)));
                                                                  {
                                                                    t = replace_application_0(t);
                                                                    {
                                                                      b_36 = t;
                                                                      g_34 :
                                                                      if(match_cons(b_36, sym__2))
                                                                        {
                                                                          c_36 = ATgetArgument(b_36, 0);
                                                                          d_36 = ATgetArgument(b_36, 1);
                                                                          {
                                                                            if(((w_35 != NULL) && (w_35 != c_36)))
                                                                              _fail(c_36);
                                                                            else
                                                                              w_35 = c_36;
                                                                            if(((x_35 != NULL) && (x_35 != d_36)))
                                                                              _fail(d_36);
                                                                            else
                                                                              x_35 = d_36;
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
                                                            else
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
                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(w_35)), (ATerm) ATmakeAppl(sym_Build_1, not_null(x_35))));
                                                    ;
                                                    LocalPopChoice(w_14);
                                                  }
                                                else
                                                  {
                                                    t = v_14;
                                                    {
                                                      ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL;
                                                      ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
                                                      t = term_l_15;
                                                      {
                                                        ATerm c_2 (ATerm t)
                                                        {
                                                          t = term_m_15;
                                                          return(t);
                                                        }
                                                        t = rewrite_1(t, c_2);
                                                        {
                                                          n_36 = t;
                                                          q_34 :
                                                          if(match_cons(n_36, sym_Defined_2))
                                                            {
                                                              o_36 = ATgetArgument(n_36, 0);
                                                              p_36 = ATgetArgument(n_36, 1);
                                                              r_34 :
                                                              if(match_string(o_36, "h_0"))
                                                                {
                                                                  ATerm q_36 = NULL;
                                                                  if(((i_36 != NULL) && (i_36 != p_36)))
                                                                    _fail(p_36);
                                                                  else
                                                                    i_36 = p_36;
                                                                  {
                                                                    ATerm r_36 = NULL;
                                                                    t = not_null(i_36);
                                                                    {
                                                                      q_36 = t;
                                                                      {
                                                                        if(((k_36 != NULL) && (k_36 != q_36)))
                                                                          _fail(q_36);
                                                                        else
                                                                          k_36 = q_36;
                                                                        {
                                                                          t = not_null(l_35);
                                                                          {
                                                                            t = tvars_0(t);
                                                                            {
                                                                              r_36 = t;
                                                                              {
                                                                                if(((j_36 != NULL) && (j_36 != r_36)))
                                                                                  _fail(r_36);
                                                                                else
                                                                                  j_36 = r_36;
                                                                                {
                                                                                  ATerm d_2 (ATerm t)
                                                                                  {
                                                                                    t = term_n_15;
                                                                                    return(t);
                                                                                  }
                                                                                  ATerm e_2 (ATerm t)
                                                                                  {
                                                                                    ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL;
                                                                                    ATerm f_2 (ATerm t)
                                                                                    {
                                                                                      ATerm s_36 = NULL,u_36 = NULL;
                                                                                      ATerm t_36 = NULL;
                                                                                      t_36 = t;
                                                                                      if(((s_36 != NULL) && (s_36 != t_36)))
                                                                                        _fail(t_36);
                                                                                      else
                                                                                        s_36 = t_36;
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_36));
                                                                                        {
                                                                                          u_36 = t;
                                                                                          {
                                                                                            ATerm o_15;
                                                                                            o_15 = t;
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(k_36), not_null(u_36)), term_q_15);
                                                                                              {
                                                                                                ATerm g_2 (ATerm t)
                                                                                                {
                                                                                                  t = term_n_15;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = assert_1(t, g_2);
                                                                                              }
                                                                                            }
                                                                                            t = o_15;
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                      return(t);
                                                                                    }
                                                                                    t = map_1(t, f_2);
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_35), not_null(q_35));
                                                                                      {
                                                                                        t = alltd_1(t, Replace_0);
                                                                                        {
                                                                                          w_36 = t;
                                                                                          p_34 :
                                                                                          if(match_cons(w_36, sym__2))
                                                                                            {
                                                                                              x_36 = ATgetArgument(w_36, 0);
                                                                                              y_36 = ATgetArgument(w_36, 1);
                                                                                              {
                                                                                                if(((l_36 != NULL) && (l_36 != x_36)))
                                                                                                  _fail(x_36);
                                                                                                else
                                                                                                  l_36 = x_36;
                                                                                                if(((m_36 != NULL) && (m_36 != y_36)))
                                                                                                  _fail(y_36);
                                                                                                else
                                                                                                  m_36 = y_36;
                                                                                              }
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
                                                                                  t = scope_2(t, d_2, e_2);
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
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      }
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(l_36)), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_35))));
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
                        }
                      else
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
ATerm Replace_0 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL;
  ATerm a_42 (ATerm t)
  {
    ATerm s_41 = NULL,t_41 = NULL;
    t = not_null(v_37);
    {
      ATerm h_2 (ATerm t)
      {
        t = term_n_15;
        return(t);
      }
      t = rewrite_1(t, h_2);
      {
        s_41 = t;
        o_37 :
        if(match_cons(s_41, sym_Defined_1))
          {
            t_41 = ATgetArgument(s_41, 0);
            p_37 :
            if(!(match_string(t_41, "l_0")))
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
    t = not_null(x_37);
    return(t);
  }
  ATerm b_42 (ATerm t)
  {
    ATerm x_41 = NULL,y_41 = NULL;
    t = not_null(v_37);
    {
      ATerm i_2 (ATerm t)
      {
        t = term_n_15;
        return(t);
      }
      t = rewrite_1(t, i_2);
      {
        x_41 = t;
        q_37 :
        if(match_cons(x_41, sym_Defined_1))
          {
            y_41 = ATgetArgument(x_41, 0);
            r_37 :
            if(!(match_string(y_41, "j_0")))
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
    t = not_null(x_37);
    return(t);
  }
  v_37 = t;
  s_37 :
  if(match_cons(v_37, sym_App_2))
    {
      w_37 = ATgetArgument(v_37, 0);
      x_37 = ATgetArgument(v_37, 1);
      t_37 :
      if(match_cons(x_37, sym_Var_1))
        {
          u_37 = ATgetArgument(x_37, 0);
          {
            ATerm t_15 = t;
            int x_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_40 = NULL,f_41 = NULL;
                t = not_null(v_37);
                {
                  ATerm j_2 (ATerm t)
                  {
                    t = term_n_15;
                    return(t);
                  }
                  t = rewrite_1(t, j_2);
                  {
                    v_40 = t;
                    m_37 :
                    if(match_cons(v_40, sym_Defined_1))
                      {
                        f_41 = ATgetArgument(v_40, 0);
                        n_37 :
                        if(!(match_string(f_41, "u_0")))
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
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_37));
                ;
                LocalPopChoice(x_15);
              }
            else
              {
                t = t_15;
                {
                  ATerm e_16 = t;
                  int f_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = a_42(t);
                      ;
                      LocalPopChoice(f_16);
                    }
                  else
                    {
                      t = e_16;
                      t = b_42(t);
                    }
                }
              }
          }
        }
      else
        {
          ATerm g_16 = t;
          int h_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_42(t);
              ;
              LocalPopChoice(h_16);
            }
          else
            {
              t = g_16;
              t = b_42(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL,i_42 = NULL;
  e_42 = t;
  d_42 :
  if(((ATgetType(e_42) == AT_LIST) && !(ATisEmpty(e_42))))
    {
      f_42 = ATgetFirst((ATermList) e_42);
      i_42 = (ATerm) ATgetNext((ATermList) e_42);
      t = not_null(i_42);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL;
  o_42 = t;
  n_42 :
  if(match_cons(o_42, sym__2))
    {
      p_42 = ATgetArgument(o_42, 0);
      q_42 = ATgetArgument(o_42, 1);
      {
        ATerm i_16;
        i_16 = t;
        {
          ATerm t_42 = NULL;
          ATerm u_42 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_42), not_null(q_42));
          {
            ATerm j_16 = t;
            int k_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(k_16);
              }
            else
              {
                t = j_16;
                t = (ATerm) ATempty;
              }
            {
              u_42 = t;
              if(((t_42 != NULL) && (t_42 != u_42)))
                _fail(u_42);
              else
                t_42 = u_42;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_42), not_null(q_42), not_null(t_42));
            t = table_put_0(t);
          }
        }
        t = i_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm i_123 (ATerm))
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
  ATerm l_16;
  l_16 = t;
  {
    ATerm j_43 = NULL;
    ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL;
    t = i_123(t);
    {
      j_43 = t;
      {
        if(((i_43 != NULL) && (i_43 != j_43)))
          _fail(j_43);
        else
          i_43 = j_43;
        {
          ATerm m_16 = t;
          int o_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_43), term_p_16);
              t = table_get_0(t);
              ;
              LocalPopChoice(o_16);
            }
          else
            {
              t = m_16;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            k_43 = t;
            a_43 :
            if(((ATgetType(k_43) == AT_LIST) && !(ATisEmpty(k_43))))
              {
                l_43 = ATgetFirst((ATermList) k_43);
                m_43 = (ATerm) ATgetNext((ATermList) k_43);
                {
                  if(((h_43 != NULL) && (h_43 != l_43)))
                    _fail(l_43);
                  else
                    h_43 = l_43;
                  {
                    if(((g_43 != NULL) && (g_43 != m_43)))
                      _fail(m_43);
                    else
                      g_43 = m_43;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(i_43), term_p_16, not_null(g_43));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(h_43);
                          {
                            ATerm k_2 (ATerm t)
                            {
                              ATerm n_43 = NULL;
                              n_43 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_43), not_null(n_43));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, k_2);
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
  t = l_16;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm h_114 (ATerm), ATerm i_114 (ATerm))
{
  ATerm q_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_114(t);
      t = i_114(t);
      ;
      LocalPopChoice(s_16);
    }
  else
    {
      t = q_16;
      {
        t = i_114(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm h_123 (ATerm))
{
  ATerm z_43 = NULL;
  ATerm t_16;
  t_16 = t;
  {
    ATerm a_44 = NULL;
    ATerm b_44 = NULL;
    t = h_123(t);
    {
      a_44 = t;
      {
        if(((z_43 != NULL) && (z_43 != a_44)))
          _fail(a_44);
        else
          z_43 = a_44;
        {
          ATerm c_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_43), term_p_16);
          {
            ATerm u_16 = t;
            int w_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(w_16);
              }
            else
              {
                t = u_16;
                t = (ATerm) ATempty;
              }
            {
              c_44 = t;
              if(((b_44 != NULL) && (b_44 != c_44)))
                _fail(c_44);
              else
                b_44 = c_44;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_43), term_p_16, (ATerm) ATinsert(CheckATermList(not_null(b_44)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = t_16;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm j_123 (ATerm), ATerm k_123 (ATerm))
{
  t = begin_scope_1(t, j_123);
  {
    ATerm l_2 (ATerm t)
    {
      t = end_scope_1(t, j_123);
      return(t);
    }
    t = restore_always_2(t, k_123, l_2);
  }
  return(t);
}
ATerm replace_application_0 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL;
  j_44 = t;
  i_44 :
  if(match_cons(j_44, sym__3))
    {
      k_44 = ATgetArgument(j_44, 0);
      l_44 = ATgetArgument(j_44, 1);
      m_44 = ATgetArgument(j_44, 2);
      {
        ATerm q_44 = NULL;
        ATerm m_2 (ATerm t)
        {
          t = term_n_15;
          return(t);
        }
        ATerm n_2 (ATerm t)
        {
          ATerm t_44 = NULL;
          t = not_null(l_44);
          {
            t = tvars_0(t);
            {
              ATerm o_2 (ATerm t)
              {
                ATerm r_44 = NULL;
                r_44 = t;
                {
                  ATerm a_17;
                  a_17 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(k_44), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_44))), term_l_17);
                    {
                      ATerm p_2 (ATerm t)
                      {
                        t = term_n_15;
                        return(t);
                      }
                      t = assert_1(t, p_2);
                    }
                  }
                  t = a_17;
                }
                return(t);
              }
              t = map_1(t, o_2);
              {
                t = not_null(m_44);
                {
                  t = alltd_1(t, Replace_0);
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
          }
          return(t);
        }
        t = scope_2(t, m_2, n_2);
        t = not_null(q_44);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,p_46 = NULL,q_46 = NULL;
  u_45 = t;
  l_45 :
  if(match_cons(u_45, sym_Seq_2))
    {
      v_45 = ATgetArgument(u_45, 0);
      e_46 = ATgetArgument(u_45, 1);
      m_45 :
      if(match_cons(v_45, sym_CallT_3))
        {
          w_45 = ATgetArgument(v_45, 0);
          c_46 = ATgetArgument(v_45, 1);
          d_46 = ATgetArgument(v_45, 2);
          n_45 :
          if(match_cons(w_45, sym_SVar_1))
            {
              b_46 = ATgetArgument(w_45, 0);
              o_45 :
              if(match_string(b_46, "mark"))
                {
                  p_45 :
                  if(((ATgetType(c_46) == AT_LIST) && ATisEmpty(c_46)))
                    {
                      q_45 :
                      if(((ATgetType(d_46) == AT_LIST) && ATisEmpty(d_46)))
                        {
                          r_45 :
                          if(match_cons(e_46, sym_Seq_2))
                            {
                              f_46 = ATgetArgument(e_46, 0);
                              p_46 = ATgetArgument(e_46, 1);
                              s_45 :
                              if(match_cons(f_46, sym_Match_1))
                                {
                                  g_46 = ATgetArgument(f_46, 0);
                                  t_45 :
                                  if(match_cons(p_46, sym_Build_1))
                                    {
                                      q_46 = ATgetArgument(p_46, 0);
                                      {
                                        ATerm t_17 = t;
                                        int d_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm u_46 = NULL,v_46 = NULL;
                                            ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL;
                                            t = term_f_18;
                                            {
                                              ATerm q_2 (ATerm t)
                                              {
                                                t = term_g_18;
                                                return(t);
                                              }
                                              t = rewrite_1(t, q_2);
                                              {
                                                w_46 = t;
                                                b_45 :
                                                if(match_cons(w_46, sym_Defined_2))
                                                  {
                                                    x_46 = ATgetArgument(w_46, 0);
                                                    y_46 = ATgetArgument(w_46, 1);
                                                    c_45 :
                                                    if(match_string(x_46, "o_0"))
                                                      {
                                                        ATerm z_46 = NULL;
                                                        if(((u_46 != NULL) && (u_46 != y_46)))
                                                          _fail(y_46);
                                                        else
                                                          u_46 = y_46;
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__3, not_null(u_46), not_null(g_46), not_null(q_46));
                                                          {
                                                            t = replace_application_0(t);
                                                            {
                                                              z_46 = t;
                                                              if(((v_46 != NULL) && (v_46 != z_46)))
                                                                _fail(z_46);
                                                              else
                                                                v_46 = z_46;
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
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_46)), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_46)));
                                            ;
                                            LocalPopChoice(d_18);
                                          }
                                        else
                                          {
                                            t = t_17;
                                            {
                                              ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
                                              ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL;
                                              t = term_f_18;
                                              {
                                                ATerm r_2 (ATerm t)
                                                {
                                                  t = term_g_18;
                                                  return(t);
                                                }
                                                t = rewrite_1(t, r_2);
                                                {
                                                  h_47 = t;
                                                  j_45 :
                                                  if(match_cons(h_47, sym_Defined_2))
                                                    {
                                                      i_47 = ATgetArgument(h_47, 0);
                                                      j_47 = ATgetArgument(h_47, 1);
                                                      k_45 :
                                                      if(match_string(i_47, "e_0"))
                                                        {
                                                          ATerm k_47 = NULL;
                                                          if(((d_47 != NULL) && (d_47 != j_47)))
                                                            _fail(j_47);
                                                          else
                                                            d_47 = j_47;
                                                          {
                                                            ATerm l_47 = NULL;
                                                            t = not_null(d_47);
                                                            {
                                                              k_47 = t;
                                                              {
                                                                if(((f_47 != NULL) && (f_47 != k_47)))
                                                                  _fail(k_47);
                                                                else
                                                                  f_47 = k_47;
                                                                {
                                                                  t = not_null(g_46);
                                                                  {
                                                                    t = tvars_0(t);
                                                                    {
                                                                      l_47 = t;
                                                                      {
                                                                        if(((e_47 != NULL) && (e_47 != l_47)))
                                                                          _fail(l_47);
                                                                        else
                                                                          e_47 = l_47;
                                                                        {
                                                                          ATerm s_2 (ATerm t)
                                                                          {
                                                                            t = term_n_15;
                                                                            return(t);
                                                                          }
                                                                          ATerm t_2 (ATerm t)
                                                                          {
                                                                            ATerm q_47 = NULL;
                                                                            ATerm u_2 (ATerm t)
                                                                            {
                                                                              ATerm m_47 = NULL,o_47 = NULL;
                                                                              ATerm n_47 = NULL;
                                                                              n_47 = t;
                                                                              if(((m_47 != NULL) && (m_47 != n_47)))
                                                                                _fail(n_47);
                                                                              else
                                                                                m_47 = n_47;
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_47));
                                                                                {
                                                                                  o_47 = t;
                                                                                  {
                                                                                    ATerm h_18;
                                                                                    h_18 = t;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(f_47), not_null(o_47)), term_j_18);
                                                                                      {
                                                                                        ATerm v_2 (ATerm t)
                                                                                        {
                                                                                          t = term_n_15;
                                                                                          return(t);
                                                                                        }
                                                                                        t = assert_1(t, v_2);
                                                                                      }
                                                                                    }
                                                                                    t = h_18;
                                                                                  }
                                                                                }
                                                                              }
                                                                              return(t);
                                                                            }
                                                                            t = map_1(t, u_2);
                                                                            {
                                                                              t = not_null(q_46);
                                                                              {
                                                                                t = alltd_1(t, Replace_0);
                                                                                {
                                                                                  q_47 = t;
                                                                                  if(((g_47 != NULL) && (g_47 != q_47)))
                                                                                    _fail(q_47);
                                                                                  else
                                                                                    g_47 = q_47;
                                                                                }
                                                                              }
                                                                            }
                                                                            return(t);
                                                                          }
                                                                          t = scope_2(t, s_2, t_2);
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
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                }
                                              }
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_46)), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_47)));
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
                }
              else
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
ATerm BottomupOverConstructor_0 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL;
  v_48 = t;
  e_48 :
  if(match_cons(v_48, sym_App_2))
    {
      w_48 = ATgetArgument(v_48, 0);
      d_49 = ATgetArgument(v_48, 1);
      j_48 :
      if(match_cons(w_48, sym_CallT_3))
        {
          x_48 = ATgetArgument(w_48, 0);
          z_48 = ATgetArgument(w_48, 1);
          c_49 = ATgetArgument(w_48, 2);
          k_48 :
          if(match_cons(x_48, sym_SVar_1))
            {
              y_48 = ATgetArgument(x_48, 0);
              o_48 :
              if(match_string(y_48, "bottomup_1_0"))
                {
                  r_48 :
                  if(((ATgetType(z_48) == AT_LIST) && !(ATisEmpty(z_48))))
                    {
                      a_49 = ATgetFirst((ATermList) z_48);
                      b_49 = (ATerm) ATgetNext((ATermList) z_48);
                      s_48 :
                      if(((ATgetType(b_49) == AT_LIST) && ATisEmpty(b_49)))
                        {
                          t_48 :
                          if(((ATgetType(c_49) == AT_LIST) && ATisEmpty(c_49)))
                            {
                              u_48 :
                              if(match_cons(d_49, sym_Op_2))
                                {
                                  e_49 = ATgetArgument(d_49, 0);
                                  f_49 = ATgetArgument(d_49, 1);
                                  {
                                    ATerm j_49 = NULL;
                                    ATerm q_49 = NULL;
                                    t = not_null(f_49);
                                    {
                                      ATerm w_2 (ATerm t)
                                      {
                                        ATerm k_49 = NULL;
                                        k_49 = t;
                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_l_18, (ATerm)ATinsert(ATempty, not_null(a_49)), (ATerm) ATempty), not_null(k_49));
                                        return(t);
                                      }
                                      t = map_1(t, w_2);
                                      {
                                        q_49 = t;
                                        if(((j_49 != NULL) && (j_49 != q_49)))
                                          _fail(q_49);
                                        else
                                          j_49 = q_49;
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_App_2, not_null(a_49), (ATerm) ATmakeAppl(sym_Op_2, not_null(e_49), not_null(j_49)));
                                  }
                                }
                              else
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
ATerm IntroduceApp_0 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL;
  b_50 = t;
  z_49 :
  if(match_cons(b_50, sym_Seq_2))
    {
      c_50 = ATgetArgument(b_50, 0);
      e_50 = ATgetArgument(b_50, 1);
      a_50 :
      if(match_cons(c_50, sym_Build_1))
        {
          d_50 = ATgetArgument(c_50, 0);
          t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_App_2, not_null(e_50), not_null(d_50)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SeqOverScopeR_0 (ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL;
  l_50 = t;
  j_50 :
  if(match_cons(l_50, sym_Seq_2))
    {
      m_50 = ATgetArgument(l_50, 0);
      p_50 = ATgetArgument(l_50, 1);
      k_50 :
      if(match_cons(m_50, sym_Scope_2))
        {
          n_50 = ATgetArgument(m_50, 0);
          o_50 = ATgetArgument(m_50, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_50), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_50), not_null(p_50)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SeqOverLChoiceR_0 (ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL;
  z_50 = t;
  x_50 :
  if(match_cons(z_50, sym_Seq_2))
    {
      a_51 = ATgetArgument(z_50, 0);
      d_51 = ATgetArgument(z_50, 1);
      y_50 :
      if(match_cons(a_51, sym_LChoice_2))
        {
          b_51 = ATgetArgument(a_51, 0);
          c_51 = ATgetArgument(a_51, 1);
          {
            ATerm i_51 = NULL,j_51 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_m_18, not_null(d_51));
            {
              ATerm x_2 (ATerm t)
              {
                t = term_n_18;
                return(t);
              }
              t = rewrite_1(t, x_2);
              {
                i_51 = t;
                v_50 :
                if(match_cons(i_51, sym_Defined_1))
                  {
                    j_51 = ATgetArgument(i_51, 0);
                    w_50 :
                    if(!(match_string(j_51, "b_2")))
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
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(b_51), not_null(d_51)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_51), not_null(d_51)));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SeqOverChoiceR_0 (ATerm t)
{
  ATerm q_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL;
  q_51 = t;
  o_51 :
  if(match_cons(q_51, sym_Seq_2))
    {
      s_51 = ATgetArgument(q_51, 0);
      v_51 = ATgetArgument(q_51, 1);
      p_51 :
      if(match_cons(s_51, sym_Choice_2))
        {
          t_51 = ATgetArgument(s_51, 0);
          u_51 = ATgetArgument(s_51, 1);
          {
            ATerm c_52 = NULL,d_52 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_o_18, not_null(v_51));
            {
              ATerm y_2 (ATerm t)
              {
                t = term_p_18;
                return(t);
              }
              t = rewrite_1(t, y_2);
              {
                c_52 = t;
                m_51 :
                if(match_cons(c_52, sym_Defined_1))
                  {
                    d_52 = ATgetArgument(c_52, 0);
                    n_51 :
                    if(!(match_string(d_52, "z_1")))
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
            t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(t_51), not_null(v_51)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_51), not_null(v_51)));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fuse_with_bottomup_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL;
        k_54 = t;
        x_53 :
        if(match_cons(k_54, sym_Seq_2))
          {
            l_54 = ATgetArgument(k_54, 0);
            s_54 = ATgetArgument(k_54, 1);
            y_53 :
            if(match_cons(l_54, sym_Choice_2))
              {
                m_54 = ATgetArgument(l_54, 0);
                o_54 = ATgetArgument(l_54, 1);
                {
                  ATerm i_55 = NULL,k_55 = NULL;
                  ATerm s_18;
                  s_18 = t;
                  {
                    ATerm z_54 = NULL,a_55 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, term_o_18, not_null(s_54));
                    {
                      ATerm a_3 (ATerm t)
                      {
                        t = term_p_18;
                        return(t);
                      }
                      t = rewrite_1(t, a_3);
                      {
                        z_54 = t;
                        n_52 :
                        if(match_cons(z_54, sym_Defined_1))
                          {
                            a_55 = ATgetArgument(z_54, 0);
                            o_52 :
                            if(!(match_string(a_55, "z_1")))
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
                  t = s_18;
                  {
                    ATerm z_18;
                    z_18 = t;
                    {
                      ATerm j_55 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_54), not_null(s_54));
                      {
                        t = z_2(t);
                        {
                          j_55 = t;
                          if(((i_55 != NULL) && (i_55 != j_55)))
                            _fail(j_55);
                          else
                            i_55 = j_55;
                        }
                      }
                    }
                    t = z_18;
                    {
                      ATerm l_55 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_54), not_null(s_54));
                      {
                        t = z_2(t);
                        {
                          l_55 = t;
                          if(((k_55 != NULL) && (k_55 != l_55)))
                            _fail(l_55);
                          else
                            k_55 = l_55;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_55), not_null(k_55));
                        t = z_2(t);
                      }
                    }
                  }
                }
              }
            else
              {
                if(match_cons(l_54, sym_LChoice_2))
                  {
                    m_54 = ATgetArgument(l_54, 0);
                    o_54 = ATgetArgument(l_54, 1);
                    {
                      ATerm s_55 = NULL,v_55 = NULL;
                      ATerm a_19;
                      a_19 = t;
                      {
                        ATerm q_55 = NULL,r_55 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, term_m_18, not_null(s_54));
                        {
                          ATerm b_3 (ATerm t)
                          {
                            t = term_n_18;
                            return(t);
                          }
                          t = rewrite_1(t, b_3);
                          {
                            q_55 = t;
                            r_52 :
                            if(match_cons(q_55, sym_Defined_1))
                              {
                                r_55 = ATgetArgument(q_55, 0);
                                s_52 :
                                if(!(match_string(r_55, "b_2")))
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
                      t = a_19;
                      {
                        ATerm b_19;
                        b_19 = t;
                        {
                          ATerm u_55 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_54), not_null(s_54));
                          {
                            t = z_2(t);
                            {
                              u_55 = t;
                              if(((s_55 != NULL) && (s_55 != u_55)))
                                _fail(u_55);
                              else
                                s_55 = u_55;
                            }
                          }
                        }
                        t = b_19;
                        {
                          ATerm w_55 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_54), not_null(s_54));
                          {
                            t = z_2(t);
                            {
                              w_55 = t;
                              if(((v_55 != NULL) && (v_55 != w_55)))
                                _fail(w_55);
                              else
                                v_55 = w_55;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(s_55), not_null(v_55));
                            t = z_2(t);
                          }
                        }
                      }
                    }
                  }
                else
                  {
                    if(match_cons(l_54, sym_Scope_2))
                      {
                        m_54 = ATgetArgument(l_54, 0);
                        o_54 = ATgetArgument(l_54, 1);
                        {
                          ATerm a_56 = NULL;
                          ATerm b_56 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_54), not_null(s_54));
                          {
                            t = z_2(t);
                            {
                              b_56 = t;
                              if(((a_56 != NULL) && (a_56 != b_56)))
                                _fail(b_56);
                              else
                                a_56 = b_56;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(m_54), not_null(a_56));
                            t = z_2(t);
                          }
                        }
                      }
                    else
                      {
                        if(match_cons(l_54, sym_Seq_2))
                          {
                            m_54 = ATgetArgument(l_54, 0);
                            o_54 = ATgetArgument(l_54, 1);
                            {
                              ATerm k_56 = NULL;
                              ATerm l_56 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_54), not_null(s_54));
                              {
                                t = z_2(t);
                                {
                                  l_56 = t;
                                  if(((k_56 != NULL) && (k_56 != l_56)))
                                    _fail(l_56);
                                  else
                                    k_56 = l_56;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_54), not_null(k_56));
                                t = z_2(t);
                              }
                            }
                          }
                        else
                          {
                            if(match_cons(l_54, sym_Build_1))
                              {
                                m_54 = ATgetArgument(l_54, 0);
                                {
                                  ATerm t_56 = NULL;
                                  ATerm u_56 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(s_54), not_null(m_54));
                                  {
                                    t = z_2(t);
                                    {
                                      u_56 = t;
                                      if(((t_56 != NULL) && (t_56 != u_56)))
                                        _fail(u_56);
                                      else
                                        t_56 = u_56;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym_Build_1, not_null(t_56));
                                    t = z_2(t);
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
        else
          {
            if(match_cons(k_54, sym_LChoice_2))
              {
                l_54 = ATgetArgument(k_54, 0);
                s_54 = ATgetArgument(k_54, 1);
                z_53 :
                if(match_cons(l_54, sym_LChoice_2))
                  {
                    m_54 = ATgetArgument(l_54, 0);
                    o_54 = ATgetArgument(l_54, 1);
                    {
                      ATerm f_56 = NULL;
                      ATerm g_56 = NULL;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_54), not_null(s_54));
                      {
                        t = z_2(t);
                        {
                          g_56 = t;
                          if(((f_56 != NULL) && (f_56 != g_56)))
                            _fail(g_56);
                          else
                            f_56 = g_56;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(m_54), not_null(f_56));
                        t = z_2(t);
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
                if(match_cons(k_54, sym_Choice_2))
                  {
                    l_54 = ATgetArgument(k_54, 0);
                    s_54 = ATgetArgument(k_54, 1);
                    c_54 :
                    if(match_cons(l_54, sym_Choice_2))
                      {
                        m_54 = ATgetArgument(l_54, 0);
                        o_54 = ATgetArgument(l_54, 1);
                        {
                          ATerm p_56 = NULL;
                          ATerm q_56 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(o_54), not_null(s_54));
                          {
                            t = z_2(t);
                            {
                              q_56 = t;
                              if(((p_56 != NULL) && (p_56 != q_56)))
                                _fail(q_56);
                              else
                                p_56 = q_56;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(m_54), not_null(p_56));
                            t = z_2(t);
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
                    if(match_cons(k_54, sym_App_2))
                      {
                        l_54 = ATgetArgument(k_54, 0);
                        s_54 = ATgetArgument(k_54, 1);
                        d_54 :
                        if(match_cons(l_54, sym_CallT_3))
                          {
                            m_54 = ATgetArgument(l_54, 0);
                            o_54 = ATgetArgument(l_54, 1);
                            r_54 = ATgetArgument(l_54, 2);
                            e_54 :
                            if(match_cons(m_54, sym_SVar_1))
                              {
                                n_54 = ATgetArgument(m_54, 0);
                                f_54 :
                                if(match_string(n_54, "bottomup_1_0"))
                                  {
                                    g_54 :
                                    if(((ATgetType(o_54) == AT_LIST) && !(ATisEmpty(o_54))))
                                      {
                                        p_54 = ATgetFirst((ATermList) o_54);
                                        q_54 = (ATerm) ATgetNext((ATermList) o_54);
                                        h_54 :
                                        if(((ATgetType(q_54) == AT_LIST) && ATisEmpty(q_54)))
                                          {
                                            i_54 :
                                            if(((ATgetType(r_54) == AT_LIST) && ATisEmpty(r_54)))
                                              {
                                                j_54 :
                                                if(match_cons(s_54, sym_Op_2))
                                                  {
                                                    t_54 = ATgetArgument(s_54, 0);
                                                    u_54 = ATgetArgument(s_54, 1);
                                                    {
                                                      ATerm y_56 = NULL,c_57 = NULL;
                                                      ATerm c_19;
                                                      c_19 = t;
                                                      {
                                                        ATerm b_57 = NULL;
                                                        t = not_null(u_54);
                                                        {
                                                          ATerm c_3 (ATerm t)
                                                          {
                                                            ATerm z_56 = NULL;
                                                            z_56 = t;
                                                            t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_l_18, (ATerm)ATinsert(ATempty, not_null(p_54)), (ATerm) ATempty), not_null(z_56));
                                                            return(t);
                                                          }
                                                          t = map_1(t, c_3);
                                                          {
                                                            b_57 = t;
                                                            if(((y_56 != NULL) && (y_56 != b_57)))
                                                              _fail(b_57);
                                                            else
                                                              y_56 = b_57;
                                                          }
                                                        }
                                                      }
                                                      t = c_19;
                                                      {
                                                        ATerm d_57 = NULL,f_57 = NULL;
                                                        ATerm e_57 = NULL;
                                                        t = not_null(y_56);
                                                        {
                                                          t = bottomup_1(t, z_2);
                                                          {
                                                            e_57 = t;
                                                            if(((d_57 != NULL) && (d_57 != e_57)))
                                                              _fail(e_57);
                                                            else
                                                              d_57 = e_57;
                                                          }
                                                        }
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(t_54), not_null(d_57));
                                                          {
                                                            t = z_2(t);
                                                            {
                                                              f_57 = t;
                                                              if(((c_57 != NULL) && (c_57 != f_57)))
                                                                _fail(f_57);
                                                              else
                                                                c_57 = f_57;
                                                            }
                                                          }
                                                        }
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(p_54), not_null(c_57));
                                                          t = z_2(t);
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
                              }
                            else
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
        ;
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, z_2);
  return(t);
}
ATerm SeqOverScopeL_0 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL;
  f_58 = t;
  d_58 :
  if(match_cons(f_58, sym_Seq_2))
    {
      g_58 = ATgetArgument(f_58, 0);
      h_58 = ATgetArgument(f_58, 1);
      e_58 :
      if(match_cons(h_58, sym_Scope_2))
        {
          i_58 = ATgetArgument(h_58, 0);
          j_58 = ATgetArgument(h_58, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_58), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_58), not_null(j_58)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SeqOverLChoiceL_0 (ATerm t)
{
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL;
  r_58 = t;
  p_58 :
  if(match_cons(r_58, sym_Seq_2))
    {
      s_58 = ATgetArgument(r_58, 0);
      t_58 = ATgetArgument(r_58, 1);
      q_58 :
      if(match_cons(t_58, sym_LChoice_2))
        {
          u_58 = ATgetArgument(t_58, 0);
          v_58 = ATgetArgument(t_58, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(s_58), not_null(u_58)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_58), not_null(v_58)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SeqOverChoiceL_0 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL;
  d_59 = t;
  b_59 :
  if(match_cons(d_59, sym_Seq_2))
    {
      e_59 = ATgetArgument(d_59, 0);
      f_59 = ATgetArgument(d_59, 1);
      c_59 :
      if(match_cons(f_59, sym_Choice_2))
        {
          g_59 = ATgetArgument(f_59, 0);
          h_59 = ATgetArgument(f_59, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(e_59), not_null(g_59)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_59), not_null(h_59)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm b_111 (ATerm))
{
  ATerm d_3 (ATerm t)
  {
    t = bottomup_1(t, b_111);
    return(t);
  }
  t = _all(t, d_3);
  t = b_111(t);
  return(t);
}
ATerm innermost_1 (ATerm t, ATerm q_126 (ATerm))
{
  ATerm e_3 (ATerm t)
  {
    ATerm f_3 (ATerm t)
    {
      t = q_126(t);
      {
        ATerm g_3 (ATerm t)
        {
          ATerm d_19 = t;
          int e_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_126(t);
              t = bottomup_1(t, g_3);
              ;
              LocalPopChoice(e_19);
            }
          else
            {
              t = d_19;
              {
              }
            }
          return(t);
        }
        t = bottomup_1(t, g_3);
      }
      return(t);
    }
    t = try_1(t, f_3);
    return(t);
  }
  t = bottomup_1(t, e_3);
  return(t);
}
ATerm propagate_mark_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL;
        r_60 = t;
        p_60 :
        if(match_cons(r_60, sym_Seq_2))
          {
            s_60 = ATgetArgument(r_60, 0);
            t_60 = ATgetArgument(r_60, 1);
            q_60 :
            if(match_cons(t_60, sym_Choice_2))
              {
                u_60 = ATgetArgument(t_60, 0);
                v_60 = ATgetArgument(t_60, 1);
                {
                  ATerm z_60 = NULL,b_61 = NULL;
                  ATerm h_19;
                  h_19 = t;
                  {
                    ATerm a_61 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_60), not_null(u_60));
                    {
                      t = h_3(t);
                      {
                        a_61 = t;
                        if(((z_60 != NULL) && (z_60 != a_61)))
                          _fail(a_61);
                        else
                          z_60 = a_61;
                      }
                    }
                  }
                  t = h_19;
                  {
                    ATerm c_61 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_60), not_null(v_60));
                    {
                      t = h_3(t);
                      {
                        c_61 = t;
                        if(((b_61 != NULL) && (b_61 != c_61)))
                          _fail(c_61);
                        else
                          b_61 = c_61;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(z_60), not_null(b_61));
                      t = h_3(t);
                    }
                  }
                }
              }
            else
              {
                if(match_cons(t_60, sym_LChoice_2))
                  {
                    u_60 = ATgetArgument(t_60, 0);
                    v_60 = ATgetArgument(t_60, 1);
                    {
                      ATerm g_61 = NULL,i_61 = NULL;
                      ATerm i_19;
                      i_19 = t;
                      {
                        ATerm h_61 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_60), not_null(u_60));
                        {
                          t = h_3(t);
                          {
                            h_61 = t;
                            if(((g_61 != NULL) && (g_61 != h_61)))
                              _fail(h_61);
                            else
                              g_61 = h_61;
                          }
                        }
                      }
                      t = i_19;
                      {
                        ATerm j_61 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_60), not_null(v_60));
                        {
                          t = h_3(t);
                          {
                            j_61 = t;
                            if(((i_61 != NULL) && (i_61 != j_61)))
                              _fail(j_61);
                            else
                              i_61 = j_61;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_61), not_null(i_61));
                          t = h_3(t);
                        }
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t_60, sym_Scope_2))
                      {
                        u_60 = ATgetArgument(t_60, 0);
                        v_60 = ATgetArgument(t_60, 1);
                        {
                          ATerm n_61 = NULL;
                          ATerm o_61 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_60), not_null(v_60));
                          {
                            t = h_3(t);
                            {
                              o_61 = t;
                              if(((n_61 != NULL) && (n_61 != o_61)))
                                _fail(o_61);
                              else
                                n_61 = o_61;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_60), not_null(n_61));
                            t = h_3(t);
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
        else
          {
            _fail(t);
          }
        ;
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, h_3);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm q_100 (ATerm))
{
  ATerm m_63 = NULL,n_63 = NULL;
  m_63 = t;
  l_63 :
  if(match_cons(m_63, sym_Build_1))
    {
      n_63 = ATgetArgument(m_63, 0);
      {
        ATerm q_63 = NULL,s_63 = NULL;
        ATerm r_63 = NULL;
        t = SSLgetAnnotations(not_null(m_63));
        {
          r_63 = t;
          if(((q_63 != NULL) && (q_63 != r_63)))
            _fail(r_63);
          else
            q_63 = r_63;
        }
        {
          t = not_null(n_63);
          {
            ATerm u_63 = NULL;
            t = q_100(t);
            {
              s_63 = t;
              {
                ATerm v_63 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(s_63)), not_null(q_63));
                {
                  v_63 = t;
                  if(((u_63 != NULL) && (u_63 != v_63)))
                    _fail(v_63);
                  else
                    u_63 = v_63;
                }
                t = not_null(u_63);
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
ATerm Seq_2 (ATerm t, ATerm w_100 (ATerm), ATerm x_100 (ATerm))
{
  ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL;
  g_64 = t;
  f_64 :
  if(match_cons(g_64, sym_Seq_2))
    {
      h_64 = ATgetArgument(g_64, 0);
      i_64 = ATgetArgument(g_64, 1);
      {
        ATerm m_64 = NULL,o_64 = NULL;
        ATerm n_64 = NULL;
        t = SSLgetAnnotations(not_null(g_64));
        {
          n_64 = t;
          if(((m_64 != NULL) && (m_64 != n_64)))
            _fail(n_64);
          else
            m_64 = n_64;
        }
        {
          t = not_null(h_64);
          {
            ATerm q_64 = NULL;
            t = w_100(t);
            {
              o_64 = t;
              {
                t = not_null(i_64);
                {
                  ATerm s_64 = NULL;
                  t = x_100(t);
                  {
                    q_64 = t;
                    {
                      ATerm t_64 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(o_64), not_null(q_64)), not_null(m_64));
                      {
                        t_64 = t;
                        if(((s_64 != NULL) && (s_64 != t_64)))
                          _fail(t_64);
                        else
                          s_64 = t_64;
                      }
                      t = not_null(s_64);
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
ATerm Match_1 (ATerm t, ATerm p_100 (ATerm))
{
  ATerm e_65 = NULL,f_65 = NULL;
  e_65 = t;
  d_65 :
  if(match_cons(e_65, sym_Match_1))
    {
      f_65 = ATgetArgument(e_65, 0);
      {
        ATerm i_65 = NULL,k_65 = NULL;
        ATerm j_65 = NULL;
        t = SSLgetAnnotations(not_null(e_65));
        {
          j_65 = t;
          if(((i_65 != NULL) && (i_65 != j_65)))
            _fail(j_65);
          else
            i_65 = j_65;
        }
        {
          t = not_null(f_65);
          {
            ATerm m_65 = NULL;
            t = p_100(t);
            {
              k_65 = t;
              {
                ATerm n_65 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(k_65)), not_null(i_65));
                {
                  n_65 = t;
                  if(((m_65 != NULL) && (m_65 != n_65)))
                    _fail(n_65);
                  else
                    m_65 = n_65;
                }
                t = not_null(m_65);
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
ATerm LChoice_2 (ATerm t, ATerm y_100 (ATerm), ATerm z_100 (ATerm))
{
  ATerm y_65 = NULL,z_65 = NULL,a_66 = NULL;
  y_65 = t;
  x_65 :
  if(match_cons(y_65, sym_LChoice_2))
    {
      z_65 = ATgetArgument(y_65, 0);
      a_66 = ATgetArgument(y_65, 1);
      {
        ATerm e_66 = NULL,g_66 = NULL;
        ATerm f_66 = NULL;
        t = SSLgetAnnotations(not_null(y_65));
        {
          f_66 = t;
          if(((e_66 != NULL) && (e_66 != f_66)))
            _fail(f_66);
          else
            e_66 = f_66;
        }
        {
          t = not_null(z_65);
          {
            ATerm i_66 = NULL;
            t = y_100(t);
            {
              g_66 = t;
              {
                t = not_null(a_66);
                {
                  ATerm k_66 = NULL;
                  t = z_100(t);
                  {
                    i_66 = t;
                    {
                      ATerm l_66 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(g_66), not_null(i_66)), not_null(e_66));
                      {
                        l_66 = t;
                        if(((k_66 != NULL) && (k_66 != l_66)))
                          _fail(l_66);
                        else
                          k_66 = l_66;
                      }
                      t = not_null(k_66);
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
ATerm Choice_2 (ATerm t, ATerm w_99 (ATerm), ATerm x_99 (ATerm))
{
  ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL;
  x_66 = t;
  w_66 :
  if(match_cons(x_66, sym_Choice_2))
    {
      y_66 = ATgetArgument(x_66, 0);
      z_66 = ATgetArgument(x_66, 1);
      {
        ATerm d_67 = NULL,f_67 = NULL;
        ATerm e_67 = NULL;
        t = SSLgetAnnotations(not_null(x_66));
        {
          e_67 = t;
          if(((d_67 != NULL) && (d_67 != e_67)))
            _fail(e_67);
          else
            d_67 = e_67;
        }
        {
          t = not_null(y_66);
          {
            ATerm h_67 = NULL;
            t = w_99(t);
            {
              f_67 = t;
              {
                t = not_null(z_66);
                {
                  ATerm j_67 = NULL;
                  t = x_99(t);
                  {
                    h_67 = t;
                    {
                      ATerm k_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(f_67), not_null(h_67)), not_null(d_67));
                      {
                        k_67 = t;
                        if(((j_67 != NULL) && (j_67 != k_67)))
                          _fail(k_67);
                        else
                          j_67 = k_67;
                      }
                      t = not_null(j_67);
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
ATerm inline_rules_0 (ATerm t)
{
  ATerm i_3 (ATerm t)
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Simplify_0(t);
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
              t = Choice_2(t, inline_rules_0, inline_rules_0);
              ;
              LocalPopChoice(q_19);
            }
          else
            {
              t = p_19;
              {
                ATerm r_19 = t;
                int s_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = LChoice_2(t, inline_rules_0, inline_rules_0);
                    ;
                    LocalPopChoice(s_19);
                  }
                else
                  {
                    t = r_19;
                    {
                      ATerm t_19 = t;
                      int u_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_3 (ATerm t)
                          {
                            ATerm k_3 (ATerm t)
                            {
                              t = Match_1(t, _id);
                              return(t);
                            }
                            ATerm l_3 (ATerm t)
                            {
                              t = Build_1(t, _id);
                              return(t);
                            }
                            t = Seq_2(t, k_3, l_3);
                            return(t);
                          }
                          t = Scope_2(t, _id, j_3);
                          ;
                          LocalPopChoice(u_19);
                        }
                      else
                        {
                          t = t_19;
                          {
                            ATerm v_19 = t;
                            int w_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm m_3 (ATerm t)
                                {
                                  ATerm n_3 (ATerm t)
                                  {
                                    t = Match_1(t, _id);
                                    return(t);
                                  }
                                  ATerm o_3 (ATerm t)
                                  {
                                    ATerm p_3 (ATerm t)
                                    {
                                      t = Build_1(t, _id);
                                      return(t);
                                    }
                                    t = Seq_2(t, _id, p_3);
                                    return(t);
                                  }
                                  t = Seq_2(t, n_3, o_3);
                                  return(t);
                                }
                                t = Scope_2(t, _id, m_3);
                                ;
                                LocalPopChoice(w_19);
                              }
                            else
                              {
                                t = v_19;
                                {
                                  t = InlineStrat_0(t);
                                  t = inline_rules_0(t);
                                }
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
  t = try_1(t, i_3);
  return(t);
}
ATerm bottomup_to_var_0 (ATerm t)
{
  ATerm s_67 = NULL;
  s_67 = t;
  {
    ATerm x_19;
    x_19 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_18, (ATerm) ATmakeAppl(sym_Defined_2, term_y_19, not_null(s_67)));
      {
        ATerm q_3 (ATerm t)
        {
          t = term_g_18;
          return(t);
        }
        t = assert_1(t, q_3);
      }
    }
    t = x_19;
    {
      ATerm z_19;
      z_19 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATmakeAppl(sym_Defined_2, term_a_20, not_null(s_67)));
        {
          ATerm r_3 (ATerm t)
          {
            t = term_m_15;
            return(t);
          }
          t = assert_1(t, r_3);
        }
      }
      t = z_19;
    }
  }
  return(t);
}
ATerm seq_over_choice_0 (ATerm t)
{
  ATerm w_67 = NULL;
  w_67 = t;
  {
    ATerm e_20;
    e_20 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_o_18, not_null(w_67)), term_h_20);
      {
        ATerm s_3 (ATerm t)
        {
          t = term_p_18;
          return(t);
        }
        t = assert_1(t, s_3);
      }
    }
    t = e_20;
    {
      ATerm k_20;
      k_20 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_m_18, not_null(w_67)), term_m_20);
        {
          ATerm t_3 (ATerm t)
          {
            t = term_n_18;
            return(t);
          }
          t = assert_1(t, t_3);
        }
      }
      t = k_20;
    }
  }
  return(t);
}
ATerm innermost_fusion_0 (ATerm t)
{
  ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL;
  q_68 = t;
  k_68 :
  if(match_cons(q_68, sym_CallT_3))
    {
      r_68 = ATgetArgument(q_68, 0);
      t_68 = ATgetArgument(q_68, 1);
      w_68 = ATgetArgument(q_68, 2);
      l_68 :
      if(match_cons(r_68, sym_SVar_1))
        {
          s_68 = ATgetArgument(r_68, 0);
          m_68 :
          if(match_string(s_68, "innermost_1_0"))
            {
              n_68 :
              if(((ATgetType(t_68) == AT_LIST) && !(ATisEmpty(t_68))))
                {
                  u_68 = ATgetFirst((ATermList) t_68);
                  v_68 = (ATerm) ATgetNext((ATermList) t_68);
                  o_68 :
                  if(((ATgetType(v_68) == AT_LIST) && ATisEmpty(v_68)))
                    {
                      p_68 :
                      if(((ATgetType(w_68) == AT_LIST) && ATisEmpty(w_68)))
                        {
                          {
                            ATerm y_68 = NULL,a_69 = NULL;
                            ATerm u_3 (ATerm t)
                            {
                              ATerm v_3 (ATerm t)
                              {
                                t = term_n_20;
                                return(t);
                              }
                              t = say_1(t, v_3);
                              return(t);
                            }
                            t = if_verbose2_1(t, u_3);
                            {
                              ATerm o_20;
                              o_20 = t;
                              {
                                ATerm z_68 = NULL;
                                t = new_0(t);
                                {
                                  z_68 = t;
                                  if(((y_68 != NULL) && (y_68 != z_68)))
                                    _fail(z_68);
                                  else
                                    y_68 = z_68;
                                }
                              }
                              t = o_20;
                              {
                                ATerm p_20;
                                p_20 = t;
                                {
                                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_l_18, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_68)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
                                  t = seq_over_choice_0(t);
                                }
                                t = p_20;
                                {
                                  ATerm q_20;
                                  q_20 = t;
                                  {
                                    t = (ATerm) ATmakeAppl(sym_CallT_3, term_l_18, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_68)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
                                    t = bottomup_to_var_0(t);
                                  }
                                  t = q_20;
                                  {
                                    ATerm b_69 = NULL;
                                    t = not_null(u_68);
                                    {
                                      t = inline_rules_0(t);
                                      {
                                        b_69 = t;
                                        if(((a_69 != NULL) && (a_69 != b_69)))
                                          _fail(b_69);
                                        else
                                          a_69 = b_69;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_l_18, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, not_null(y_68), (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_z_14, not_null(a_69)), (ATerm) ATmakeAppl(sym_CallT_3, term_l_18, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_68)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_s_12))), (ATerm) ATempty);
                                      {
                                        t = propagate_mark_0(t);
                                        {
                                          t = fuse_with_bottomup_0(t);
                                          {
                                            ATerm w_3 (ATerm t)
                                            {
                                              ATerm r_20 = t;
                                              int s_20 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = BottomupToVarIsId_UnCond_0(t);
                                                  ;
                                                  LocalPopChoice(s_20);
                                                }
                                              else
                                                {
                                                  t = r_20;
                                                  {
                                                    ATerm t_20 = t;
                                                    int u_20 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = BottomupToVarIsId_Cond_0(t);
                                                        ;
                                                        LocalPopChoice(u_20);
                                                      }
                                                    else
                                                      {
                                                        t = t_20;
                                                        t = UnMark_0(t);
                                                      }
                                                  }
                                                }
                                              return(t);
                                            }
                                            t = alltd_1(t, w_3);
                                            {
                                              ATerm v_20 = t;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm x_3 (ATerm t)
                                                  {
                                                    ATerm c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL;
                                                    c_69 = t;
                                                    c_68 :
                                                    if(match_cons(c_69, sym_CallT_3))
                                                      {
                                                        d_69 = ATgetArgument(c_69, 0);
                                                        f_69 = ATgetArgument(c_69, 1);
                                                        g_69 = ATgetArgument(c_69, 2);
                                                        g_68 :
                                                        if(match_cons(d_69, sym_SVar_1))
                                                          {
                                                            e_69 = ATgetArgument(d_69, 0);
                                                            h_68 :
                                                            if(match_string(e_69, "mark"))
                                                              {
                                                                i_68 :
                                                                if(((ATgetType(f_69) == AT_LIST) && ATisEmpty(f_69)))
                                                                  {
                                                                    j_68 :
                                                                    if(((ATgetType(g_69) == AT_LIST) && ATisEmpty(g_69)))
                                                                      {
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
                                                            else
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
                                                  t = oncetd_1(t, x_3);
                                                  {
                                                    ATerm y_3 (ATerm t)
                                                    {
                                                      t = term_b_21;
                                                      return(t);
                                                    }
                                                    t = say_1(t, y_3);
                                                  }
                                                  PopChoice();
                                                  _fail(t);
                                                }
                                              else
                                                {
                                                  t = v_20;
                                                }
                                              {
                                                t = desugar_0(t);
                                                {
                                                  ATerm z_3 (ATerm t)
                                                  {
                                                    ATerm a_4 (ATerm t)
                                                    {
                                                      t = term_c_21;
                                                      return(t);
                                                    }
                                                    t = say_1(t, a_4);
                                                    return(t);
                                                  }
                                                  t = if_verbose1_1(t, z_3);
                                                }
                                              }
                                            }
                                          }
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
                  else
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
ATerm alltd_1 (ATerm t, ATerm s_112 (ATerm))
{
  ATerm k_69 (ATerm t)
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_112(t);
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = _all(t, k_69);
      }
    return(t);
  }
  t = k_69(t);
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0 (ATerm t)
{
  ATerm d_70 = NULL;
  ATerm i_21;
  i_21 = t;
  {
    ATerm e_70 = NULL;
    t = new_0(t);
    {
      e_70 = t;
      {
        if(((d_70 != NULL) && (d_70 != e_70)))
          _fail(e_70);
        else
          d_70 = e_70;
        {
          ATerm k_21 = t;
          int m_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_l_18, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_70)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
              t = InlineStrat_0(t);
              ;
              LocalPopChoice(m_21);
            }
          else
            {
              t = k_21;
              {
                ATerm b_4 (ATerm t)
                {
                  ATerm c_4 (ATerm t)
                  {
                    t = term_n_21;
                    return(t);
                  }
                  t = say_1(t, c_4);
                  return(t);
                }
                t = if_verbose2_1(t, b_4);
                _fail(t);
              }
            }
          {
            ATerm q_21 = t;
            int r_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL;
                f_70 = t;
                n_69 :
                if(match_cons(f_70, sym_Seq_2))
                  {
                    m_70 = ATgetArgument(f_70, 0);
                    y_70 = ATgetArgument(f_70, 1);
                    o_69 :
                    if(match_cons(m_70, sym_All_1))
                      {
                        n_70 = ATgetArgument(m_70, 0);
                        p_69 :
                        if(match_cons(n_70, sym_CallT_3))
                          {
                            o_70 = ATgetArgument(n_70, 0);
                            q_70 = ATgetArgument(n_70, 1);
                            x_70 = ATgetArgument(n_70, 2);
                            q_69 :
                            if(match_cons(o_70, sym_SVar_1))
                              {
                                p_70 = ATgetArgument(o_70, 0);
                                r_69 :
                                if(match_string(p_70, "bottomup_1_0"))
                                  {
                                    s_69 :
                                    if(((ATgetType(q_70) == AT_LIST) && !(ATisEmpty(q_70))))
                                      {
                                        r_70 = ATgetFirst((ATermList) q_70);
                                        w_70 = (ATerm) ATgetNext((ATermList) q_70);
                                        t_69 :
                                        if(match_cons(r_70, sym_CallT_3))
                                          {
                                            s_70 = ATgetArgument(r_70, 0);
                                            u_70 = ATgetArgument(r_70, 1);
                                            v_70 = ATgetArgument(r_70, 2);
                                            u_69 :
                                            if(match_cons(s_70, sym_SVar_1))
                                              {
                                                t_70 = ATgetArgument(s_70, 0);
                                                v_69 :
                                                if(((ATgetType(u_70) == AT_LIST) && ATisEmpty(u_70)))
                                                  {
                                                    w_69 :
                                                    if(((ATgetType(v_70) == AT_LIST) && ATisEmpty(v_70)))
                                                      {
                                                        x_69 :
                                                        if(((ATgetType(w_70) == AT_LIST) && ATisEmpty(w_70)))
                                                          {
                                                            y_69 :
                                                            if(((ATgetType(x_70) == AT_LIST) && ATisEmpty(x_70)))
                                                              {
                                                                z_69 :
                                                                if(match_cons(y_70, sym_CallT_3))
                                                                  {
                                                                    z_70 = ATgetArgument(y_70, 0);
                                                                    b_71 = ATgetArgument(y_70, 1);
                                                                    c_71 = ATgetArgument(y_70, 2);
                                                                    a_70 :
                                                                    if(match_cons(z_70, sym_SVar_1))
                                                                      {
                                                                        a_71 = ATgetArgument(z_70, 0);
                                                                        b_70 :
                                                                        if(((ATgetType(b_71) == AT_LIST) && ATisEmpty(b_71)))
                                                                          {
                                                                            c_70 :
                                                                            if(((ATgetType(c_71) == AT_LIST) && ATisEmpty(c_71)))
                                                                              {
                                                                                {
                                                                                  if(((d_70 != NULL) && (d_70 != t_70)))
                                                                                    _fail(t_70);
                                                                                  else
                                                                                    d_70 = t_70;
                                                                                  if(((d_70 != NULL) && (d_70 != a_71)))
                                                                                    _fail(a_71);
                                                                                  else
                                                                                    d_70 = a_71;
                                                                                }
                                                                              }
                                                                            else
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
                                      }
                                    else
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
                ;
                LocalPopChoice(r_21);
              }
            else
              {
                t = q_21;
                {
                  ATerm d_4 (ATerm t)
                  {
                    ATerm e_4 (ATerm t)
                    {
                      t = term_s_21;
                      return(t);
                    }
                    t = debug_1(t, e_4);
                    return(t);
                  }
                  t = if_verbose1_1(t, d_4);
                  _fail(t);
                }
              }
            {
              ATerm f_4 (ATerm t)
              {
                ATerm g_4 (ATerm t)
                {
                  t = term_t_21;
                  return(t);
                }
                t = say_1(t, g_4);
                return(t);
              }
              t = if_verbose2_1(t, f_4);
            }
          }
        }
      }
    }
  }
  t = i_21;
  return(t);
}
ATerm check_that_innermost_is_innermost_0 (ATerm t)
{
  ATerm k_74 = NULL;
  ATerm u_21;
  u_21 = t;
  {
    ATerm l_74 = NULL;
    t = new_0(t);
    {
      l_74 = t;
      {
        if(((k_74 != NULL) && (k_74 != l_74)))
          _fail(l_74);
        else
          k_74 = l_74;
        {
          ATerm v_21 = t;
          int w_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_y_21, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_74)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
              t = InlineStrat_0(t);
              ;
              LocalPopChoice(w_21);
            }
          else
            {
              t = v_21;
              {
                ATerm h_4 (ATerm t)
                {
                  ATerm i_4 (ATerm t)
                  {
                    t = term_z_21;
                    return(t);
                  }
                  t = say_1(t, i_4);
                  return(t);
                }
                t = if_verbose2_1(t, h_4);
                _fail(t);
              }
            }
          {
            ATerm a_22 = t;
            int b_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL;
                g_75 = t;
                j_71 :
                if(match_cons(g_75, sym_Call_2))
                  {
                    h_75 = ATgetArgument(g_75, 0);
                    k_75 = ATgetArgument(g_75, 1);
                    k_71 :
                    if(match_cons(h_75, sym_SVar_1))
                      {
                        i_75 = ATgetArgument(h_75, 0);
                        l_71 :
                        if(match_string(i_75, "bottomup_1_0"))
                          {
                            m_71 :
                            if(((ATgetType(k_75) == AT_LIST) && !(ATisEmpty(k_75))))
                              {
                                l_75 = ATgetFirst((ATermList) k_75);
                                o_76 = (ATerm) ATgetNext((ATermList) k_75);
                                n_71 :
                                if(match_cons(l_75, sym_Call_2))
                                  {
                                    m_75 = ATgetArgument(l_75, 0);
                                    n_75 = ATgetArgument(l_75, 1);
                                    o_71 :
                                    if(match_cons(m_75, sym_SVar_1))
                                      {
                                        m_74 = ATgetArgument(m_75, 0);
                                        p_71 :
                                        if(match_string(m_74, "try_1_0"))
                                          {
                                            q_71 :
                                            if(((ATgetType(n_75) == AT_LIST) && !(ATisEmpty(n_75))))
                                              {
                                                o_75 = ATgetFirst((ATermList) n_75);
                                                n_76 = (ATerm) ATgetNext((ATermList) n_75);
                                                r_71 :
                                                if(match_cons(o_75, sym_Seq_2))
                                                  {
                                                    p_75 = ATgetArgument(o_75, 0);
                                                    u_75 = ATgetArgument(o_75, 1);
                                                    s_71 :
                                                    if(match_cons(p_75, sym_CallT_3))
                                                      {
                                                        q_75 = ATgetArgument(p_75, 0);
                                                        s_75 = ATgetArgument(p_75, 1);
                                                        t_75 = ATgetArgument(p_75, 2);
                                                        t_71 :
                                                        if(match_cons(q_75, sym_SVar_1))
                                                          {
                                                            r_75 = ATgetArgument(q_75, 0);
                                                            u_71 :
                                                            if(((ATgetType(s_75) == AT_LIST) && ATisEmpty(s_75)))
                                                              {
                                                                v_71 :
                                                                if(((ATgetType(t_75) == AT_LIST) && ATisEmpty(t_75)))
                                                                  {
                                                                    w_71 :
                                                                    if(match_cons(u_75, sym_CallT_3))
                                                                      {
                                                                        v_75 = ATgetArgument(u_75, 0);
                                                                        x_75 = ATgetArgument(u_75, 1);
                                                                        m_76 = ATgetArgument(u_75, 2);
                                                                        x_71 :
                                                                        if(match_cons(v_75, sym_SVar_1))
                                                                          {
                                                                            w_75 = ATgetArgument(v_75, 0);
                                                                            y_71 :
                                                                            if(match_string(w_75, "innermost_1_0"))
                                                                              {
                                                                                z_71 :
                                                                                if(((ATgetType(x_75) == AT_LIST) && !(ATisEmpty(x_75))))
                                                                                  {
                                                                                    y_75 = ATgetFirst((ATermList) x_75);
                                                                                    l_76 = (ATerm) ATgetNext((ATermList) x_75);
                                                                                    a_72 :
                                                                                    if(match_cons(y_75, sym_CallT_3))
                                                                                      {
                                                                                        f_76 = ATgetArgument(y_75, 0);
                                                                                        h_76 = ATgetArgument(y_75, 1);
                                                                                        i_76 = ATgetArgument(y_75, 2);
                                                                                        b_72 :
                                                                                        if(match_cons(f_76, sym_SVar_1))
                                                                                          {
                                                                                            g_76 = ATgetArgument(f_76, 0);
                                                                                            c_72 :
                                                                                            if(((ATgetType(h_76) == AT_LIST) && ATisEmpty(h_76)))
                                                                                              {
                                                                                                d_72 :
                                                                                                if(((ATgetType(i_76) == AT_LIST) && ATisEmpty(i_76)))
                                                                                                  {
                                                                                                    e_72 :
                                                                                                    if(((ATgetType(l_76) == AT_LIST) && ATisEmpty(l_76)))
                                                                                                      {
                                                                                                        f_72 :
                                                                                                        if(((ATgetType(m_76) == AT_LIST) && ATisEmpty(m_76)))
                                                                                                          {
                                                                                                            g_72 :
                                                                                                            if(((ATgetType(n_76) == AT_LIST) && ATisEmpty(n_76)))
                                                                                                              {
                                                                                                                h_72 :
                                                                                                                if(((ATgetType(o_76) == AT_LIST) && ATisEmpty(o_76)))
                                                                                                                  {
                                                                                                                    {
                                                                                                                      if(((k_74 != NULL) && (k_74 != r_75)))
                                                                                                                        _fail(r_75);
                                                                                                                      else
                                                                                                                        k_74 = r_75;
                                                                                                                      if(((k_74 != NULL) && (k_74 != g_76)))
                                                                                                                        _fail(g_76);
                                                                                                                      else
                                                                                                                        k_74 = g_76;
                                                                                                                    }
                                                                                                                  }
                                                                                                                else
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
                                                                          }
                                                                        else
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
                                  }
                                else
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
                    if(match_cons(g_75, sym_CallT_3))
                      {
                        h_75 = ATgetArgument(g_75, 0);
                        k_75 = ATgetArgument(g_75, 1);
                        p_76 = ATgetArgument(g_75, 2);
                        i_72 :
                        if(match_cons(h_75, sym_SVar_1))
                          {
                            i_75 = ATgetArgument(h_75, 0);
                            j_72 :
                            if(match_string(i_75, "bottomup_1_0"))
                              {
                                k_72 :
                                if(((ATgetType(k_75) == AT_LIST) && !(ATisEmpty(k_75))))
                                  {
                                    l_75 = ATgetFirst((ATermList) k_75);
                                    o_76 = (ATerm) ATgetNext((ATermList) k_75);
                                    l_72 :
                                    if(match_cons(l_75, sym_Rec_2))
                                      {
                                        m_75 = ATgetArgument(l_75, 0);
                                        n_75 = ATgetArgument(l_75, 1);
                                        m_72 :
                                        if(match_cons(n_75, sym_CallT_3))
                                          {
                                            o_75 = ATgetArgument(n_75, 0);
                                            n_76 = ATgetArgument(n_75, 1);
                                            f_75 = ATgetArgument(n_75, 2);
                                            n_72 :
                                            if(match_cons(o_75, sym_SVar_1))
                                              {
                                                p_75 = ATgetArgument(o_75, 0);
                                                o_72 :
                                                if(match_string(p_75, "try_1_0"))
                                                  {
                                                    p_72 :
                                                    if(((ATgetType(n_76) == AT_LIST) && !(ATisEmpty(n_76))))
                                                      {
                                                        n_74 = ATgetFirst((ATermList) n_76);
                                                        e_75 = (ATerm) ATgetNext((ATermList) n_76);
                                                        q_72 :
                                                        if(match_cons(n_74, sym_Seq_2))
                                                          {
                                                            o_74 = ATgetArgument(n_74, 0);
                                                            t_74 = ATgetArgument(n_74, 1);
                                                            r_72 :
                                                            if(match_cons(o_74, sym_CallT_3))
                                                              {
                                                                p_74 = ATgetArgument(o_74, 0);
                                                                r_74 = ATgetArgument(o_74, 1);
                                                                s_74 = ATgetArgument(o_74, 2);
                                                                s_72 :
                                                                if(match_cons(p_74, sym_SVar_1))
                                                                  {
                                                                    q_74 = ATgetArgument(p_74, 0);
                                                                    t_72 :
                                                                    if(((ATgetType(r_74) == AT_LIST) && ATisEmpty(r_74)))
                                                                      {
                                                                        u_72 :
                                                                        if(((ATgetType(s_74) == AT_LIST) && ATisEmpty(s_74)))
                                                                          {
                                                                            v_72 :
                                                                            if(match_cons(t_74, sym_CallT_3))
                                                                              {
                                                                                u_74 = ATgetArgument(t_74, 0);
                                                                                w_74 = ATgetArgument(t_74, 1);
                                                                                d_75 = ATgetArgument(t_74, 2);
                                                                                w_72 :
                                                                                if(match_cons(u_74, sym_SVar_1))
                                                                                  {
                                                                                    v_74 = ATgetArgument(u_74, 0);
                                                                                    x_72 :
                                                                                    if(match_string(v_74, "bottomup_1_0"))
                                                                                      {
                                                                                        y_72 :
                                                                                        if(((ATgetType(w_74) == AT_LIST) && !(ATisEmpty(w_74))))
                                                                                          {
                                                                                            x_74 = ATgetFirst((ATermList) w_74);
                                                                                            c_75 = (ATerm) ATgetNext((ATermList) w_74);
                                                                                            z_72 :
                                                                                            if(match_cons(x_74, sym_CallT_3))
                                                                                              {
                                                                                                y_74 = ATgetArgument(x_74, 0);
                                                                                                a_75 = ATgetArgument(x_74, 1);
                                                                                                b_75 = ATgetArgument(x_74, 2);
                                                                                                a_73 :
                                                                                                if(match_cons(y_74, sym_SVar_1))
                                                                                                  {
                                                                                                    z_74 = ATgetArgument(y_74, 0);
                                                                                                    b_73 :
                                                                                                    if(((ATgetType(a_75) == AT_LIST) && ATisEmpty(a_75)))
                                                                                                      {
                                                                                                        c_73 :
                                                                                                        if(((ATgetType(b_75) == AT_LIST) && ATisEmpty(b_75)))
                                                                                                          {
                                                                                                            d_73 :
                                                                                                            if(((ATgetType(c_75) == AT_LIST) && ATisEmpty(c_75)))
                                                                                                              {
                                                                                                                e_73 :
                                                                                                                if(((ATgetType(d_75) == AT_LIST) && ATisEmpty(d_75)))
                                                                                                                  {
                                                                                                                    f_73 :
                                                                                                                    if(((ATgetType(e_75) == AT_LIST) && ATisEmpty(e_75)))
                                                                                                                      {
                                                                                                                        g_73 :
                                                                                                                        if(((ATgetType(f_75) == AT_LIST) && ATisEmpty(f_75)))
                                                                                                                          {
                                                                                                                            h_73 :
                                                                                                                            if(((ATgetType(o_76) == AT_LIST) && ATisEmpty(o_76)))
                                                                                                                              {
                                                                                                                                i_73 :
                                                                                                                                if(((ATgetType(p_76) == AT_LIST) && ATisEmpty(p_76)))
                                                                                                                                  {
                                                                                                                                    {
                                                                                                                                      if(((k_74 != NULL) && (k_74 != q_74)))
                                                                                                                                        _fail(q_74);
                                                                                                                                      else
                                                                                                                                        k_74 = q_74;
                                                                                                                                      if(((m_75 != NULL) && (m_75 != z_74)))
                                                                                                                                        _fail(z_74);
                                                                                                                                      else
                                                                                                                                        m_75 = z_74;
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                                else
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
                                                                                          }
                                                                                        else
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
                                                  }
                                                else
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
                                            if(match_cons(n_75, sym_LChoice_2))
                                              {
                                                o_75 = ATgetArgument(n_75, 0);
                                                n_76 = ATgetArgument(n_75, 1);
                                                j_73 :
                                                if(match_cons(o_75, sym_Seq_2))
                                                  {
                                                    p_75 = ATgetArgument(o_75, 0);
                                                    u_75 = ATgetArgument(o_75, 1);
                                                    k_73 :
                                                    if(match_cons(p_75, sym_CallT_3))
                                                      {
                                                        q_75 = ATgetArgument(p_75, 0);
                                                        s_75 = ATgetArgument(p_75, 1);
                                                        t_75 = ATgetArgument(p_75, 2);
                                                        l_73 :
                                                        if(match_cons(q_75, sym_SVar_1))
                                                          {
                                                            r_75 = ATgetArgument(q_75, 0);
                                                            m_73 :
                                                            if(((ATgetType(s_75) == AT_LIST) && ATisEmpty(s_75)))
                                                              {
                                                                n_73 :
                                                                if(((ATgetType(t_75) == AT_LIST) && ATisEmpty(t_75)))
                                                                  {
                                                                    s_73 :
                                                                    if(match_cons(u_75, sym_CallT_3))
                                                                      {
                                                                        v_75 = ATgetArgument(u_75, 0);
                                                                        x_75 = ATgetArgument(u_75, 1);
                                                                        m_76 = ATgetArgument(u_75, 2);
                                                                        t_73 :
                                                                        if(match_cons(v_75, sym_SVar_1))
                                                                          {
                                                                            w_75 = ATgetArgument(v_75, 0);
                                                                            z_73 :
                                                                            if(match_string(w_75, "bottomup_1_0"))
                                                                              {
                                                                                a_74 :
                                                                                if(((ATgetType(x_75) == AT_LIST) && !(ATisEmpty(x_75))))
                                                                                  {
                                                                                    y_75 = ATgetFirst((ATermList) x_75);
                                                                                    l_76 = (ATerm) ATgetNext((ATermList) x_75);
                                                                                    b_74 :
                                                                                    if(match_cons(y_75, sym_CallT_3))
                                                                                      {
                                                                                        f_76 = ATgetArgument(y_75, 0);
                                                                                        h_76 = ATgetArgument(y_75, 1);
                                                                                        i_76 = ATgetArgument(y_75, 2);
                                                                                        c_74 :
                                                                                        if(match_cons(f_76, sym_SVar_1))
                                                                                          {
                                                                                            g_76 = ATgetArgument(f_76, 0);
                                                                                            d_74 :
                                                                                            if(((ATgetType(h_76) == AT_LIST) && ATisEmpty(h_76)))
                                                                                              {
                                                                                                e_74 :
                                                                                                if(((ATgetType(i_76) == AT_LIST) && ATisEmpty(i_76)))
                                                                                                  {
                                                                                                    f_74 :
                                                                                                    if(((ATgetType(l_76) == AT_LIST) && ATisEmpty(l_76)))
                                                                                                      {
                                                                                                        g_74 :
                                                                                                        if(((ATgetType(m_76) == AT_LIST) && ATisEmpty(m_76)))
                                                                                                          {
                                                                                                            h_74 :
                                                                                                            if(match_cons(n_76, sym_Id_0))
                                                                                                              {
                                                                                                                i_74 :
                                                                                                                if(((ATgetType(o_76) == AT_LIST) && ATisEmpty(o_76)))
                                                                                                                  {
                                                                                                                    j_74 :
                                                                                                                    if(((ATgetType(p_76) == AT_LIST) && ATisEmpty(p_76)))
                                                                                                                      {
                                                                                                                        {
                                                                                                                          if(((k_74 != NULL) && (k_74 != r_75)))
                                                                                                                            _fail(r_75);
                                                                                                                          else
                                                                                                                            k_74 = r_75;
                                                                                                                          if(((m_75 != NULL) && (m_75 != g_76)))
                                                                                                                            _fail(g_76);
                                                                                                                          else
                                                                                                                            m_75 = g_76;
                                                                                                                        }
                                                                                                                      }
                                                                                                                    else
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
                                                                              }
                                                                            else
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
                                      }
                                    else
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
                ;
                LocalPopChoice(b_22);
              }
            else
              {
                t = a_22;
                {
                  ATerm j_4 (ATerm t)
                  {
                    ATerm k_4 (ATerm t)
                    {
                      t = term_g_22;
                      return(t);
                    }
                    t = debug_1(t, k_4);
                    return(t);
                  }
                  t = if_verbose1_1(t, j_4);
                  _fail(t);
                }
              }
            {
              ATerm l_4 (ATerm t)
              {
                ATerm m_4 (ATerm t)
                {
                  t = term_h_22;
                  return(t);
                }
                t = say_1(t, m_4);
                return(t);
              }
              t = if_verbose2_1(t, l_4);
            }
          }
        }
      }
    }
  }
  t = u_21;
  return(t);
}
ATerm AsMatchWld_0 (ATerm t)
{
  ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL;
  f_77 = t;
  d_77 :
  if(match_cons(f_77, sym_As_2))
    {
      g_77 = ATgetArgument(f_77, 0);
      h_77 = ATgetArgument(f_77, 1);
      e_77 :
      if(match_cons(g_77, sym_Wld_0))
        {
          t = not_null(h_77);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MatchSimplify_0 (ATerm t)
{
  t = AsMatchWld_0(t);
  return(t);
}
ATerm MatchBuildIdem_0 (ATerm t)
{
  ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL;
  o_77 = t;
  l_77 :
  if(match_cons(o_77, sym__2))
    {
      p_77 = ATgetArgument(o_77, 0);
      r_77 = ATgetArgument(o_77, 1);
      m_77 :
      if(match_cons(p_77, sym_Match_1))
        {
          q_77 = ATgetArgument(p_77, 0);
          n_77 :
          if(match_cons(r_77, sym_Build_1))
            {
              s_77 = ATgetArgument(r_77, 0);
              {
                if(((q_77 != NULL) && (q_77 != s_77)))
                  _fail(s_77);
                else
                  q_77 = s_77;
                t = (ATerm) ATmakeAppl(sym_Match_1, not_null(q_77));
              }
            }
          else
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
ATerm BuildMatchIdem_0 (ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL,c_78 = NULL,d_78 = NULL;
  z_77 = t;
  w_77 :
  if(match_cons(z_77, sym__2))
    {
      a_78 = ATgetArgument(z_77, 0);
      c_78 = ATgetArgument(z_77, 1);
      x_77 :
      if(match_cons(a_78, sym_Build_1))
        {
          b_78 = ATgetArgument(a_78, 0);
          y_77 :
          if(match_cons(c_78, sym_Match_1))
            {
              d_78 = ATgetArgument(c_78, 0);
              {
                if(((b_78 != NULL) && (b_78 != d_78)))
                  _fail(d_78);
                else
                  b_78 = d_78;
                t = (ATerm) ATmakeAppl(sym_Build_1, not_null(b_78));
              }
            }
          else
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
ATerm MatchIdem_0 (ATerm t)
{
  ATerm k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL;
  k_78 = t;
  h_78 :
  if(match_cons(k_78, sym__2))
    {
      l_78 = ATgetArgument(k_78, 0);
      n_78 = ATgetArgument(k_78, 1);
      i_78 :
      if(match_cons(l_78, sym_Match_1))
        {
          m_78 = ATgetArgument(l_78, 0);
          j_78 :
          if(match_cons(n_78, sym_Match_1))
            {
              o_78 = ATgetArgument(n_78, 0);
              {
                if(((m_78 != NULL) && (m_78 != o_78)))
                  _fail(o_78);
                else
                  m_78 = o_78;
                t = (ATerm) ATmakeAppl(sym_Match_1, not_null(m_78));
              }
            }
          else
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
ATerm BuildPrim_0 (ATerm t)
{
  ATerm y_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL,e_79 = NULL,k_79 = NULL,l_79 = NULL;
  a_79 = t;
  u_78 :
  if(match_cons(a_79, sym__2))
    {
      b_79 = ATgetArgument(a_79, 0);
      d_79 = ATgetArgument(a_79, 1);
      v_78 :
      if(match_cons(b_79, sym_Build_1))
        {
          c_79 = ATgetArgument(b_79, 0);
          w_78 :
          if(match_cons(d_79, sym_Where_1))
            {
              e_79 = ATgetArgument(d_79, 0);
              x_78 :
              if(match_cons(e_79, sym_Prim_2))
                {
                  y_78 = ATgetArgument(e_79, 0);
                  z_78 = ATgetArgument(e_79, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(y_78), not_null(z_78));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(d_79, sym_Prim_2))
                {
                  e_79 = ATgetArgument(d_79, 0);
                  k_79 = ATgetArgument(d_79, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(e_79), not_null(k_79));
                }
              else
                {
                  if(match_cons(d_79, sym_PrimT_3))
                    {
                      e_79 = ATgetArgument(d_79, 0);
                      k_79 = ATgetArgument(d_79, 1);
                      l_79 = ATgetArgument(d_79, 2);
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(e_79), not_null(k_79), not_null(l_79));
                    }
                  else
                    {
                      _fail(t);
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
ATerm BuildBuild_0 (ATerm t)
{
  ATerm e_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL,i_81 = NULL;
  e_81 = t;
  b_81 :
  if(match_cons(e_81, sym__2))
    {
      f_81 = ATgetArgument(e_81, 0);
      h_81 = ATgetArgument(e_81, 1);
      c_81 :
      if(match_cons(f_81, sym_Build_1))
        {
          g_81 = ATgetArgument(f_81, 0);
          d_81 :
          if(match_cons(h_81, sym_Build_1))
            {
              i_81 = ATgetArgument(h_81, 0);
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(i_81));
            }
          else
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
ATerm BuildMatchFusion_0 (ATerm t)
{
  ATerm v_81 = NULL,w_81 = NULL,x_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL,l_82 = NULL,m_82 = NULL,o_82 = NULL;
  v_81 = t;
  q_81 :
  if(match_cons(v_81, sym__2))
    {
      w_81 = ATgetArgument(v_81, 0);
      a_82 = ATgetArgument(v_81, 1);
      r_81 :
      if(match_cons(w_81, sym_Build_1))
        {
          x_81 = ATgetArgument(w_81, 0);
          s_81 :
          if(match_cons(x_81, sym_Op_2))
            {
              y_81 = ATgetArgument(x_81, 0);
              z_81 = ATgetArgument(x_81, 1);
              t_81 :
              if(match_cons(a_82, sym_Match_1))
                {
                  l_82 = ATgetArgument(a_82, 0);
                  u_81 :
                  if(match_cons(l_82, sym_Op_2))
                    {
                      m_82 = ATgetArgument(l_82, 0);
                      o_82 = ATgetArgument(l_82, 1);
                      {
                        ATerm c_83 = NULL,d_83 = NULL;
                        if(((y_81 != NULL) && (y_81 != m_82)))
                          _fail(m_82);
                        else
                          y_81 = m_82;
                        {
                          if(((c_83 != NULL) && (c_83 != o_82)))
                            _fail(o_82);
                          else
                            c_83 = o_82;
                          {
                            ATerm j_83 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(z_81), not_null(c_83));
                            {
                              ATerm n_4 (ATerm t)
                              {
                                ATerm e_83 = NULL,f_83 = NULL,g_83 = NULL;
                                e_83 = t;
                                o_81 :
                                if(match_cons(e_83, sym__2))
                                  {
                                    f_83 = ATgetArgument(e_83, 0);
                                    g_83 = ATgetArgument(e_83, 1);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_83)), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_83)));
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = zip_1(t, n_4);
                              {
                                j_83 = t;
                                if(((d_83 != NULL) && (d_83 != j_83)))
                                  _fail(j_83);
                                else
                                  d_83 = j_83;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(d_83)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(y_81), not_null(z_81))));
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
ATerm MisMatch_0 (ATerm t)
{
  ATerm q_84 = NULL,r_84 = NULL,s_84 = NULL,t_84 = NULL,u_84 = NULL,v_84 = NULL,w_84 = NULL,x_84 = NULL,s_88 = NULL;
  q_84 = t;
  o_83 :
  if(match_cons(q_84, sym__2))
    {
      r_84 = ATgetArgument(q_84, 0);
      v_84 = ATgetArgument(q_84, 1);
      p_83 :
      if(match_cons(r_84, sym_Build_1))
        {
          s_84 = ATgetArgument(r_84, 0);
          q_83 :
          if(match_cons(s_84, sym_Op_2))
            {
              t_84 = ATgetArgument(s_84, 0);
              u_84 = ATgetArgument(s_84, 1);
              o_84 :
              if(match_cons(v_84, sym_Match_1))
                {
                  w_84 = ATgetArgument(v_84, 0);
                  p_84 :
                  if(match_cons(w_84, sym_Op_2))
                    {
                      x_84 = ATgetArgument(w_84, 0);
                      s_88 = ATgetArgument(w_84, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(t_84), not_null(x_84));
                        {
                          ATerm i_22 = t;
                          if((PushChoice() == 0))
                            {
                              t = eq_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = i_22;
                            }
                        }
                        t = term_m_22;
                      }
                    }
                  else
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
ATerm BMF_0 (ATerm t)
{
  ATerm o_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0(t);
      ;
      LocalPopChoice(r_22);
    }
  else
    {
      t = o_22;
      {
        ATerm s_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0(t);
            ;
            LocalPopChoice(t_22);
          }
        else
          {
            t = s_22;
            {
              ATerm u_22 = t;
              int v_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = BuildBuild_0(t);
                  ;
                  LocalPopChoice(v_22);
                }
              else
                {
                  t = u_22;
                  {
                    ATerm w_22 = t;
                    int x_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildPrim_0(t);
                        ;
                        LocalPopChoice(x_22);
                      }
                    else
                      {
                        t = w_22;
                        {
                          ATerm y_22 = t;
                          int z_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = MatchIdem_0(t);
                              ;
                              LocalPopChoice(z_22);
                            }
                          else
                            {
                              t = y_22;
                              {
                                ATerm a_23 = t;
                                int b_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildMatchIdem_0(t);
                                    ;
                                    LocalPopChoice(b_23);
                                  }
                                else
                                  {
                                    t = a_23;
                                    t = MatchBuildIdem_0(t);
                                  }
                              }
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
ATerm BuildMatch_0 (ATerm t)
{
  ATerm w_90 = NULL,x_90 = NULL,y_90 = NULL,z_90 = NULL,a_91 = NULL;
  ATerm l_91 (ATerm t)
  {
    ATerm i_91 = NULL;
    ATerm j_91 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_90), not_null(a_91));
    {
      t = BMF_0(t);
      {
        j_91 = t;
        if(((i_91 != NULL) && (i_91 != j_91)))
          _fail(j_91);
        else
          i_91 = j_91;
      }
    }
    t = not_null(i_91);
    return(t);
  }
  y_90 = t;
  u_90 :
  if(match_cons(y_90, sym_Seq_2))
    {
      z_90 = ATgetArgument(y_90, 0);
      a_91 = ATgetArgument(y_90, 1);
      v_90 :
      if(match_cons(a_91, sym_Seq_2))
        {
          w_90 = ATgetArgument(a_91, 0);
          x_90 = ATgetArgument(a_91, 1);
          {
            ATerm g_23 = t;
            int h_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_91 = NULL;
                ATerm f_91 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_90), not_null(w_90));
                {
                  t = BMF_0(t);
                  {
                    f_91 = t;
                    if(((e_91 != NULL) && (e_91 != f_91)))
                      _fail(f_91);
                    else
                      e_91 = f_91;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_91), not_null(x_90));
                ;
                LocalPopChoice(h_23);
              }
            else
              {
                t = g_23;
                t = l_91(t);
              }
          }
        }
      else
        {
          t = l_91(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm e_112 (ATerm))
{
  ATerm o_91 (ATerm t)
  {
    ATerm i_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_112(t);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = i_23;
        t = _one(t, o_91);
      }
    return(t);
  }
  t = o_91(t);
  return(t);
}
ATerm LetHoist_0 (ATerm t)
{
  ATerm f_92 = NULL,g_92 = NULL,h_92 = NULL,i_92 = NULL,j_92 = NULL,k_92 = NULL,l_92 = NULL,m_92 = NULL,n_92 = NULL,o_92 = NULL,p_92 = NULL,q_92 = NULL,r_92 = NULL;
  f_92 = t;
  v_91 :
  if(match_cons(f_92, sym_Let_2))
    {
      g_92 = ATgetArgument(f_92, 0);
      n_92 = ATgetArgument(f_92, 1);
      w_91 :
      if(((ATgetType(g_92) == AT_LIST) && !(ATisEmpty(g_92))))
        {
          h_92 = ATgetFirst((ATermList) g_92);
          m_92 = (ATerm) ATgetNext((ATermList) g_92);
          x_91 :
          if(match_cons(h_92, sym_SDefT_4))
            {
              i_92 = ATgetArgument(h_92, 0);
              j_92 = ATgetArgument(h_92, 1);
              k_92 = ATgetArgument(h_92, 2);
              l_92 = ATgetArgument(h_92, 3);
              y_91 :
              if(((ATgetType(j_92) == AT_LIST) && ATisEmpty(j_92)))
                {
                  z_91 :
                  if(((ATgetType(k_92) == AT_LIST) && ATisEmpty(k_92)))
                    {
                      a_92 :
                      if(((ATgetType(m_92) == AT_LIST) && ATisEmpty(m_92)))
                        {
                          b_92 :
                          if(match_cons(n_92, sym_CallT_3))
                            {
                              o_92 = ATgetArgument(n_92, 0);
                              q_92 = ATgetArgument(n_92, 1);
                              r_92 = ATgetArgument(n_92, 2);
                              c_92 :
                              if(match_cons(o_92, sym_SVar_1))
                                {
                                  p_92 = ATgetArgument(o_92, 0);
                                  d_92 :
                                  if(((ATgetType(q_92) == AT_LIST) && ATisEmpty(q_92)))
                                    {
                                      e_92 :
                                      if(((ATgetType(r_92) == AT_LIST) && ATisEmpty(r_92)))
                                        {
                                          {
                                            if(((i_92 != NULL) && (i_92 != p_92)))
                                              _fail(p_92);
                                            else
                                              i_92 = p_92;
                                            {
                                              t = not_null(l_92);
                                              {
                                                ATerm o_23 = t;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm o_4 (ATerm t)
                                                    {
                                                      ATerm u_92 = NULL,v_92 = NULL,w_92 = NULL,x_92 = NULL,y_92 = NULL;
                                                      u_92 = t;
                                                      r_91 :
                                                      if(match_cons(u_92, sym_CallT_3))
                                                        {
                                                          v_92 = ATgetArgument(u_92, 0);
                                                          x_92 = ATgetArgument(u_92, 1);
                                                          y_92 = ATgetArgument(u_92, 2);
                                                          s_91 :
                                                          if(match_cons(v_92, sym_SVar_1))
                                                            {
                                                              w_92 = ATgetArgument(v_92, 0);
                                                              t_91 :
                                                              if(((ATgetType(x_92) == AT_LIST) && ATisEmpty(x_92)))
                                                                {
                                                                  u_91 :
                                                                  if(((ATgetType(y_92) == AT_LIST) && ATisEmpty(y_92)))
                                                                    {
                                                                      if(((i_92 != NULL) && (i_92 != w_92)))
                                                                        _fail(w_92);
                                                                      else
                                                                        i_92 = w_92;
                                                                    }
                                                                  else
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
                                                    t = oncetd_1(t, o_4);
                                                    PopChoice();
                                                    _fail(t);
                                                  }
                                                else
                                                  {
                                                    t = o_23;
                                                  }
                                              }
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
                                }
                              else
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
ATerm LetNoDefs_0 (ATerm t)
{
  ATerm g_93 = NULL,h_93 = NULL,i_93 = NULL;
  g_93 = t;
  e_93 :
  if(match_cons(g_93, sym_Let_2))
    {
      h_93 = ATgetArgument(g_93, 0);
      i_93 = ATgetArgument(g_93, 1);
      f_93 :
      if(((ATgetType(h_93) == AT_LIST) && ATisEmpty(h_93)))
        {
          t = not_null(i_93);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm q_94 = NULL,r_94 = NULL,s_94 = NULL;
  q_94 = t;
  o_94 :
  if(match_cons(q_94, sym_Scope_2))
    {
      r_94 = ATgetArgument(q_94, 0);
      s_94 = ATgetArgument(q_94, 1);
      p_94 :
      if(((ATgetType(r_94) == AT_LIST) && ATisEmpty(r_94)))
        {
          t = not_null(s_94);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL,q_95 = NULL;
  o_95 = t;
  b_95 :
  if(match_cons(o_95, sym_Where_1))
    {
      p_95 = ATgetArgument(o_95, 0);
      c_95 :
      if(match_cons(p_95, sym_Seq_2))
        {
          n_95 = ATgetArgument(p_95, 0);
          j_95 = ATgetArgument(p_95, 1);
          d_95 :
          if(match_cons(n_95, sym_Where_1))
            {
              i_95 = ATgetArgument(n_95, 0);
              e_95 :
              if(match_cons(j_95, sym_Seq_2))
                {
                  k_95 = ATgetArgument(j_95, 0);
                  m_95 = ATgetArgument(j_95, 1);
                  f_95 :
                  if(match_cons(k_95, sym_Build_1))
                    {
                      l_95 = ATgetArgument(k_95, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_95), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_95)), not_null(m_95))));
                    }
                  else
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
          if(match_cons(p_95, sym_Where_1))
            {
              n_95 = ATgetArgument(p_95, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(n_95));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(o_95, sym_Test_1))
        {
          p_95 = ATgetArgument(o_95, 0);
          g_95 :
          if(match_cons(p_95, sym_Test_1))
            {
              n_95 = ATgetArgument(p_95, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(n_95));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(o_95, sym_Not_1))
            {
              p_95 = ATgetArgument(o_95, 0);
              h_95 :
              if(match_cons(p_95, sym_Not_1))
                {
                  n_95 = ATgetArgument(p_95, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(n_95));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(o_95, sym_LChoice_2))
                {
                  p_95 = ATgetArgument(o_95, 0);
                  q_95 = ATgetArgument(o_95, 1);
                  {
                    if(((p_95 != NULL) && (p_95 != q_95)))
                      _fail(q_95);
                    else
                      p_95 = q_95;
                    t = not_null(p_95);
                  }
                }
              else
                {
                  if(match_cons(o_95, sym_Choice_2))
                    {
                      p_95 = ATgetArgument(o_95, 0);
                      q_95 = ATgetArgument(o_95, 1);
                      {
                        if(((p_95 != NULL) && (p_95 != q_95)))
                          _fail(q_95);
                        else
                          p_95 = q_95;
                        t = not_null(p_95);
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
ATerm AssociateR_0 (ATerm t)
{
  ATerm r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL;
  r_96 = t;
  n_96 :
  if(match_cons(r_96, sym_LChoice_2))
    {
      s_96 = ATgetArgument(r_96, 0);
      v_96 = ATgetArgument(r_96, 1);
      o_96 :
      if(match_cons(s_96, sym_LChoice_2))
        {
          t_96 = ATgetArgument(s_96, 0);
          u_96 = ATgetArgument(s_96, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_96), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(u_96), not_null(v_96)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(r_96, sym_Seq_2))
        {
          s_96 = ATgetArgument(r_96, 0);
          v_96 = ATgetArgument(r_96, 1);
          p_96 :
          if(match_cons(s_96, sym_Seq_2))
            {
              t_96 = ATgetArgument(s_96, 0);
              u_96 = ATgetArgument(s_96, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_96), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_96), not_null(v_96)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(r_96, sym_Choice_2))
            {
              s_96 = ATgetArgument(r_96, 0);
              v_96 = ATgetArgument(r_96, 1);
              q_96 :
              if(match_cons(s_96, sym_Choice_2))
                {
                  t_96 = ATgetArgument(s_96, 0);
                  u_96 = ATgetArgument(s_96, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(t_96), (ATerm) ATmakeAppl(sym_Choice_2, not_null(u_96), not_null(v_96)));
                }
              else
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
  return(t);
}
ATerm MkConstType_0 (ATerm t)
{
  ATerm s_97 = NULL,t_97 = NULL;
  s_97 = t;
  r_97 :
  if(match_cons(s_97, sym_DefaultVarDec_1))
    {
      t_97 = ATgetArgument(s_97, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(t_97), term_t_23);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0 (ATerm t)
{
  ATerm b_98 = NULL,c_98 = NULL;
  b_98 = t;
  x_97 :
  if(match_cons(b_98, sym_DefaultVarDec_1))
    {
      c_98 = ATgetArgument(b_98, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(c_98), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_23), term_t_23));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2(t, q_0, _id);
      {
        ATerm p_4 (ATerm t)
        {
          ATerm q_4 (ATerm t)
          {
            t = map1_1(t, q_0);
            return(t);
          }
          t = try_1(t, q_4);
          return(t);
        }
        t = Cons_2(t, _id, p_4);
      }
      ;
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
      {
        ATerm r_4 (ATerm t)
        {
          t = map1_1(t, q_0);
          return(t);
        }
        t = Cons_2(t, _id, r_4);
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm e_99 = NULL,f_99 = NULL,k_99 = NULL,l_99 = NULL,m_99 = NULL,n_99 = NULL,o_99 = NULL;
  m_99 = t;
  a_99 :
  if(match_cons(m_99, sym_Lets_2))
    {
      n_99 = ATgetArgument(m_99, 0);
      o_99 = ATgetArgument(m_99, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(n_99), not_null(o_99));
    }
  else
    {
      if(match_cons(m_99, sym_LChoices_1))
        {
          n_99 = ATgetArgument(m_99, 0);
          b_99 :
          if(((ATgetType(n_99) == AT_LIST) && !(ATisEmpty(n_99))))
            {
              e_99 = ATgetFirst((ATermList) n_99);
              f_99 = (ATerm) ATgetNext((ATermList) n_99);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(e_99), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(f_99)));
            }
          else
            {
              if(((ATgetType(n_99) == AT_LIST) && ATisEmpty(n_99)))
                {
                  t = term_m_22;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(m_99, sym_Choices_1))
            {
              n_99 = ATgetArgument(m_99, 0);
              c_99 :
              if(((ATgetType(n_99) == AT_LIST) && !(ATisEmpty(n_99))))
                {
                  e_99 = ATgetFirst((ATermList) n_99);
                  f_99 = (ATerm) ATgetNext((ATermList) n_99);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(e_99), (ATerm) ATmakeAppl(sym_Choices_1, not_null(f_99)));
                }
              else
                {
                  if(((ATgetType(n_99) == AT_LIST) && ATisEmpty(n_99)))
                    {
                      t = term_m_22;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(m_99, sym_Seqs_1))
                {
                  n_99 = ATgetArgument(m_99, 0);
                  d_99 :
                  if(((ATgetType(n_99) == AT_LIST) && !(ATisEmpty(n_99))))
                    {
                      e_99 = ATgetFirst((ATermList) n_99);
                      f_99 = (ATerm) ATgetNext((ATermList) n_99);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_99), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(f_99)));
                    }
                  else
                    {
                      if(((ATgetType(n_99) == AT_LIST) && ATisEmpty(n_99)))
                        {
                          t = term_s_12;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(m_99, sym_RDefT_4))
                    {
                      n_99 = ATgetArgument(m_99, 0);
                      o_99 = ATgetArgument(m_99, 1);
                      l_99 = ATgetArgument(m_99, 2);
                      k_99 = ATgetArgument(m_99, 3);
                      {
                        ATerm e_100 = NULL,f_100 = NULL;
                        ATerm g_100 = NULL;
                        t = not_null(o_99);
                        {
                          ATerm k_100 = NULL;
                          t = map1_1(t, MkFunType_0);
                          {
                            g_100 = t;
                            {
                              if(((e_100 != NULL) && (e_100 != g_100)))
                                _fail(g_100);
                              else
                                e_100 = g_100;
                              {
                                t = not_null(l_99);
                                {
                                  ATerm s_4 (ATerm t)
                                  {
                                    t = try_1(t, MkConstType_0);
                                    return(t);
                                  }
                                  t = map1_1(t, s_4);
                                  {
                                    k_100 = t;
                                    if(((f_100 != NULL) && (f_100 != k_100)))
                                      _fail(k_100);
                                    else
                                      f_100 = k_100;
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(n_99), not_null(e_100), not_null(f_100), not_null(k_99));
                      }
                    }
                  else
                    {
                      if(match_cons(m_99, sym_SDefT_4))
                        {
                          n_99 = ATgetArgument(m_99, 0);
                          o_99 = ATgetArgument(m_99, 1);
                          l_99 = ATgetArgument(m_99, 2);
                          k_99 = ATgetArgument(m_99, 3);
                          {
                            ATerm w_23 = t;
                            int x_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm r_100 = NULL,u_100 = NULL;
                                ATerm v_100 = NULL;
                                t = not_null(l_99);
                                {
                                  ATerm a_101 = NULL;
                                  t = map1_1(t, MkConstType_0);
                                  {
                                    v_100 = t;
                                    {
                                      if(((r_100 != NULL) && (r_100 != v_100)))
                                        _fail(v_100);
                                      else
                                        r_100 = v_100;
                                      {
                                        t = not_null(o_99);
                                        {
                                          ATerm t_4 (ATerm t)
                                          {
                                            t = try_1(t, MkFunType_0);
                                            return(t);
                                          }
                                          t = map_1(t, t_4);
                                          {
                                            a_101 = t;
                                            if(((u_100 != NULL) && (u_100 != a_101)))
                                              _fail(a_101);
                                            else
                                              u_100 = a_101;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(n_99), not_null(u_100), not_null(r_100), not_null(k_99));
                                ;
                                LocalPopChoice(x_23);
                              }
                            else
                              {
                                t = w_23;
                                {
                                  ATerm h_101 = NULL,i_101 = NULL;
                                  ATerm j_101 = NULL;
                                  t = not_null(o_99);
                                  {
                                    ATerm k_101 = NULL;
                                    t = map1_1(t, MkFunType_0);
                                    {
                                      j_101 = t;
                                      {
                                        if(((h_101 != NULL) && (h_101 != j_101)))
                                          _fail(j_101);
                                        else
                                          h_101 = j_101;
                                        {
                                          t = not_null(l_99);
                                          {
                                            ATerm u_4 (ATerm t)
                                            {
                                              t = try_1(t, MkConstType_0);
                                              return(t);
                                            }
                                            t = map_1(t, u_4);
                                            {
                                              k_101 = t;
                                              if(((i_101 != NULL) && (i_101 != k_101)))
                                                _fail(k_101);
                                              else
                                                i_101 = k_101;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(n_99), not_null(h_101), not_null(i_101), not_null(k_99));
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(m_99, sym_InfixApp_3))
                            {
                              n_99 = ATgetArgument(m_99, 0);
                              o_99 = ATgetArgument(m_99, 1);
                              l_99 = ATgetArgument(m_99, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, not_null(o_99), (ATerm) ATmakeAppl(sym_Op_2, term_d_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_99)), not_null(n_99))));
                            }
                          else
                            {
                              if(match_cons(m_99, sym_BAM_3))
                                {
                                  n_99 = ATgetArgument(m_99, 0);
                                  o_99 = ATgetArgument(m_99, 1);
                                  l_99 = ATgetArgument(m_99, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(l_99))), not_null(n_99)), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_99))));
                                }
                              else
                                {
                                  if(match_cons(m_99, sym_AM_2))
                                    {
                                      n_99 = ATgetArgument(m_99, 0);
                                      o_99 = ATgetArgument(m_99, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_99), (ATerm) ATmakeAppl(sym_Match_1, not_null(o_99)));
                                    }
                                  else
                                    {
                                      if(match_cons(m_99, sym_MA_2))
                                        {
                                          n_99 = ATgetArgument(m_99, 0);
                                          o_99 = ATgetArgument(m_99, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_99)), not_null(o_99));
                                        }
                                      else
                                        {
                                          if(match_cons(m_99, sym_BA_2))
                                            {
                                              n_99 = ATgetArgument(m_99, 0);
                                              o_99 = ATgetArgument(m_99, 1);
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_99)), not_null(n_99));
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
ATerm F16_0 (ATerm t)
{
  ATerm f_103 = NULL,g_103 = NULL,h_103 = NULL,i_103 = NULL;
  f_103 = t;
  w_102 :
  if(match_cons(f_103, sym_GuardedLChoice_3))
    {
      g_103 = ATgetArgument(f_103, 0);
      h_103 = ATgetArgument(f_103, 1);
      i_103 = ATgetArgument(f_103, 2);
      e_103 :
      if(match_cons(i_103, sym_Fail_0))
        {
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_103), not_null(h_103));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F15_0 (ATerm t)
{
  ATerm p_103 = NULL,q_103 = NULL;
  p_103 = t;
  n_103 :
  if(match_cons(p_103, sym_Where_1))
    {
      q_103 = ATgetArgument(p_103, 0);
      o_103 :
      if(match_cons(q_103, sym_Fail_0))
        {
          t = term_m_22;
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F14_0 (ATerm t)
{
  ATerm v_103 = NULL,w_103 = NULL,x_103 = NULL;
  v_103 = t;
  t_103 :
  if(match_cons(v_103, sym_LChoice_2))
    {
      w_103 = ATgetArgument(v_103, 0);
      x_103 = ATgetArgument(v_103, 1);
      u_103 :
      if(match_cons(x_103, sym_Fail_0))
        {
          t = not_null(w_103);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm d_104 = NULL,e_104 = NULL,f_104 = NULL;
  d_104 = t;
  b_104 :
  if(match_cons(d_104, sym_LChoice_2))
    {
      e_104 = ATgetArgument(d_104, 0);
      f_104 = ATgetArgument(d_104, 1);
      c_104 :
      if(match_cons(e_104, sym_Fail_0))
        {
          t = not_null(f_104);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm l_104 = NULL,m_104 = NULL,n_104 = NULL;
  l_104 = t;
  j_104 :
  if(match_cons(l_104, sym_Choice_2))
    {
      m_104 = ATgetArgument(l_104, 0);
      n_104 = ATgetArgument(l_104, 1);
      k_104 :
      if(match_cons(n_104, sym_Fail_0))
        {
          t = not_null(m_104);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm t_104 = NULL,u_104 = NULL,v_104 = NULL;
  t_104 = t;
  r_104 :
  if(match_cons(t_104, sym_Choice_2))
    {
      u_104 = ATgetArgument(t_104, 0);
      v_104 = ATgetArgument(t_104, 1);
      s_104 :
      if(match_cons(u_104, sym_Fail_0))
        {
          t = not_null(v_104);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm b_105 = NULL,c_105 = NULL,d_105 = NULL;
  b_105 = t;
  a_105 :
  if(match_cons(b_105, sym_Cong_2))
    {
      c_105 = ATgetArgument(b_105, 0);
      d_105 = ATgetArgument(b_105, 1);
      {
        t = not_null(d_105);
        {
          ATerm v_4 (ATerm t)
          {
            ATerm g_105 = NULL;
            g_105 = t;
            z_104 :
            if(!(match_cons(g_105, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, v_4);
        }
        t = term_m_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm l_105 = NULL,m_105 = NULL,n_105 = NULL;
  l_105 = t;
  j_105 :
  if(match_cons(l_105, sym_Path_2))
    {
      m_105 = ATgetArgument(l_105, 0);
      n_105 = ATgetArgument(l_105, 1);
      k_105 :
      if(match_cons(n_105, sym_Fail_0))
        {
          t = term_m_22;
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F8_0 (ATerm t)
{
  ATerm t_105 = NULL,u_105 = NULL;
  t_105 = t;
  r_105 :
  if(match_cons(t_105, sym_One_1))
    {
      u_105 = ATgetArgument(t_105, 0);
      s_105 :
      if(match_cons(u_105, sym_Fail_0))
        {
          t = term_m_22;
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F7_0 (ATerm t)
{
  ATerm z_105 = NULL,a_106 = NULL;
  z_105 = t;
  x_105 :
  if(match_cons(z_105, sym_Some_1))
    {
      a_106 = ATgetArgument(z_105, 0);
      y_105 :
      if(match_cons(a_106, sym_Fail_0))
        {
          t = term_m_22;
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F6_0 (ATerm t)
{
  ATerm f_106 = NULL,g_106 = NULL,h_106 = NULL;
  f_106 = t;
  d_106 :
  if(match_cons(f_106, sym_Rec_2))
    {
      g_106 = ATgetArgument(f_106, 0);
      h_106 = ATgetArgument(f_106, 1);
      e_106 :
      if(match_cons(h_106, sym_Fail_0))
        {
          t = term_m_22;
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F5_0 (ATerm t)
{
  ATerm n_106 = NULL,o_106 = NULL,p_106 = NULL;
  n_106 = t;
  l_106 :
  if(match_cons(n_106, sym_Scope_2))
    {
      o_106 = ATgetArgument(n_106, 0);
      p_106 = ATgetArgument(n_106, 1);
      m_106 :
      if(match_cons(p_106, sym_Fail_0))
        {
          t = term_m_22;
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F3_0 (ATerm t)
{
  ATerm v_106 = NULL,w_106 = NULL,x_106 = NULL;
  v_106 = t;
  t_106 :
  if(match_cons(v_106, sym_Seq_2))
    {
      w_106 = ATgetArgument(v_106, 0);
      x_106 = ATgetArgument(v_106, 1);
      u_106 :
      if(match_cons(w_106, sym_Fail_0))
        {
          t = term_m_22;
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F2_0 (ATerm t)
{
  ATerm d_107 = NULL,e_107 = NULL;
  d_107 = t;
  b_107 :
  if(match_cons(d_107, sym_Not_1))
    {
      e_107 = ATgetArgument(d_107, 0);
      c_107 :
      if(match_cons(e_107, sym_Fail_0))
        {
          t = term_s_12;
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F1_0 (ATerm t)
{
  ATerm j_107 = NULL,k_107 = NULL;
  j_107 = t;
  h_107 :
  if(match_cons(j_107, sym_Test_1))
    {
      k_107 = ATgetArgument(j_107, 0);
      i_107 :
      if(match_cons(k_107, sym_Fail_0))
        {
          t = term_m_22;
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ElimFail_0 (ATerm t)
{
  ATerm y_23 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      ;
      LocalPopChoice(b_24);
    }
  else
    {
      t = y_23;
      {
        ATerm c_24 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            ;
            LocalPopChoice(f_24);
          }
        else
          {
            t = c_24;
            {
              ATerm j_24 = t;
              int q_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  ;
                  LocalPopChoice(q_24);
                }
              else
                {
                  t = j_24;
                  {
                    ATerm z_24 = t;
                    int a_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        ;
                        LocalPopChoice(a_25);
                      }
                    else
                      {
                        t = z_24;
                        {
                          ATerm b_25 = t;
                          int c_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              ;
                              LocalPopChoice(c_25);
                            }
                          else
                            {
                              t = b_25;
                              {
                                ATerm d_25 = t;
                                int e_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    ;
                                    LocalPopChoice(e_25);
                                  }
                                else
                                  {
                                    t = d_25;
                                    {
                                      ATerm f_25 = t;
                                      int q_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          ;
                                          LocalPopChoice(q_25);
                                        }
                                      else
                                        {
                                          t = f_25;
                                          {
                                            ATerm r_25 = t;
                                            int s_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                ;
                                                LocalPopChoice(s_25);
                                              }
                                            else
                                              {
                                                t = r_25;
                                                {
                                                  ATerm t_25 = t;
                                                  int u_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      ;
                                                      LocalPopChoice(u_25);
                                                    }
                                                  else
                                                    {
                                                      t = t_25;
                                                      {
                                                        ATerm v_25 = t;
                                                        int a_26 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            ;
                                                            LocalPopChoice(a_26);
                                                          }
                                                        else
                                                          {
                                                            t = v_25;
                                                            {
                                                              ATerm b_26 = t;
                                                              int c_26 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  ;
                                                                  LocalPopChoice(c_26);
                                                                }
                                                              else
                                                                {
                                                                  t = b_26;
                                                                  {
                                                                    ATerm d_26 = t;
                                                                    int g_26 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        ;
                                                                        LocalPopChoice(g_26);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_26;
                                                                        {
                                                                          ATerm h_26 = t;
                                                                          int i_26 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              ;
                                                                              LocalPopChoice(i_26);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_26;
                                                                              {
                                                                                ATerm j_26 = t;
                                                                                int n_26 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = F15_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(n_26);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_26;
                                                                                    t = F16_0(t);
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm I16_0 (ATerm t)
{
  ATerm p_107 = NULL,q_107 = NULL;
  p_107 = t;
  n_107 :
  if(match_cons(p_107, sym_Match_1))
    {
      q_107 = ATgetArgument(p_107, 0);
      o_107 :
      if(match_cons(q_107, sym_Wld_0))
        {
          t = term_s_12;
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm I12_0 (ATerm t)
{
  ATerm v_107 = NULL,w_107 = NULL;
  v_107 = t;
  t_107 :
  if(match_cons(v_107, sym_Where_1))
    {
      w_107 = ATgetArgument(v_107, 0);
      u_107 :
      if(match_cons(w_107, sym_Id_0))
        {
          t = term_s_12;
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm I10_0 (ATerm t)
{
  ATerm b_108 = NULL,c_108 = NULL;
  b_108 = t;
  z_107 :
  if(match_cons(b_108, sym_All_1))
    {
      c_108 = ATgetArgument(b_108, 0);
      a_108 :
      if(match_cons(c_108, sym_Id_0))
        {
          t = term_s_12;
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm I9_0 (ATerm t)
{
  ATerm h_108 = NULL,i_108 = NULL,j_108 = NULL;
  h_108 = t;
  f_108 :
  if(match_cons(h_108, sym_Rec_2))
    {
      i_108 = ATgetArgument(h_108, 0);
      j_108 = ATgetArgument(h_108, 1);
      g_108 :
      if(match_cons(j_108, sym_Id_0))
        {
          t = term_s_12;
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm I8_0 (ATerm t)
{
  ATerm p_108 = NULL,q_108 = NULL,r_108 = NULL;
  p_108 = t;
  n_108 :
  if(match_cons(p_108, sym_Scope_2))
    {
      q_108 = ATgetArgument(p_108, 0);
      r_108 = ATgetArgument(p_108, 1);
      o_108 :
      if(match_cons(r_108, sym_Id_0))
        {
          t = term_s_12;
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm I7_0 (ATerm t)
{
  ATerm x_108 = NULL,y_108 = NULL,z_108 = NULL;
  x_108 = t;
  v_108 :
  if(match_cons(x_108, sym_LChoice_2))
    {
      y_108 = ATgetArgument(x_108, 0);
      z_108 = ATgetArgument(x_108, 1);
      w_108 :
      if(match_cons(y_108, sym_Id_0))
        {
          t = term_s_12;
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm I4_0 (ATerm t)
{
  ATerm f_109 = NULL,g_109 = NULL,h_109 = NULL;
  f_109 = t;
  d_109 :
  if(match_cons(f_109, sym_Seq_2))
    {
      g_109 = ATgetArgument(f_109, 0);
      h_109 = ATgetArgument(f_109, 1);
      e_109 :
      if(match_cons(h_109, sym_Id_0))
        {
          t = not_null(g_109);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm n_109 = NULL,o_109 = NULL,p_109 = NULL;
  n_109 = t;
  l_109 :
  if(match_cons(n_109, sym_Seq_2))
    {
      o_109 = ATgetArgument(n_109, 0);
      p_109 = ATgetArgument(n_109, 1);
      m_109 :
      if(match_cons(o_109, sym_Id_0))
        {
          t = not_null(p_109);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm v_109 = NULL,w_109 = NULL;
  v_109 = t;
  t_109 :
  if(match_cons(v_109, sym_Not_1))
    {
      w_109 = ATgetArgument(v_109, 0);
      u_109 :
      if(match_cons(w_109, sym_Id_0))
        {
          t = term_m_22;
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm I1_0 (ATerm t)
{
  ATerm b_110 = NULL,c_110 = NULL;
  b_110 = t;
  z_109 :
  if(match_cons(b_110, sym_Test_1))
    {
      c_110 = ATgetArgument(b_110, 0);
      a_110 :
      if(match_cons(c_110, sym_Id_0))
        {
          t = term_s_12;
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ElimId_0 (ATerm t)
{
  ATerm q_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      ;
      LocalPopChoice(t_26);
    }
  else
    {
      t = q_26;
      {
        ATerm u_26 = t;
        int v_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            ;
            LocalPopChoice(v_26);
          }
        else
          {
            t = u_26;
            {
              ATerm w_26 = t;
              int z_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  ;
                  LocalPopChoice(z_26);
                }
              else
                {
                  t = w_26;
                  {
                    ATerm h_27 = t;
                    int i_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        ;
                        LocalPopChoice(i_27);
                      }
                    else
                      {
                        t = h_27;
                        {
                          ATerm j_27 = t;
                          int s_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              ;
                              LocalPopChoice(s_27);
                            }
                          else
                            {
                              t = j_27;
                              {
                                ATerm t_27 = t;
                                int c_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    ;
                                    LocalPopChoice(c_28);
                                  }
                                else
                                  {
                                    t = t_27;
                                    {
                                      ATerm d_28 = t;
                                      int e_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          ;
                                          LocalPopChoice(e_28);
                                        }
                                      else
                                        {
                                          t = d_28;
                                          {
                                            ATerm f_28 = t;
                                            int g_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
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
                                                      t = I12_0(t);
                                                      ;
                                                      LocalPopChoice(i_28);
                                                    }
                                                  else
                                                    {
                                                      t = h_28;
                                                      t = I16_0(t);
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Simplify_0 (ATerm t)
{
  ATerm l_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      ;
      LocalPopChoice(q_28);
    }
  else
    {
      t = l_28;
      {
        ATerm r_28 = t;
        int s_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            ;
            LocalPopChoice(s_28);
          }
        else
          {
            t = r_28;
            {
              ATerm t_28 = t;
              int u_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(u_28);
                }
              else
                {
                  t = t_28;
                  {
                    ATerm v_28 = t;
                    int w_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        ;
                        LocalPopChoice(w_28);
                      }
                    else
                      {
                        t = v_28;
                        {
                          ATerm x_28 = t;
                          int c_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              ;
                              LocalPopChoice(c_29);
                            }
                          else
                            {
                              t = x_28;
                              {
                                ATerm d_29 = t;
                                int e_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    ;
                                    LocalPopChoice(e_29);
                                  }
                                else
                                  {
                                    t = d_29;
                                    {
                                      ATerm i_29 = t;
                                      int k_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetNoDefs_0(t);
                                          ;
                                          LocalPopChoice(k_29);
                                        }
                                      else
                                        {
                                          t = i_29;
                                          {
                                            ATerm n_29 = t;
                                            int o_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = LetHoist_0(t);
                                                ;
                                                LocalPopChoice(o_29);
                                              }
                                            else
                                              {
                                                t = n_29;
                                                {
                                                  ATerm p_29 = t;
                                                  int q_29 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatch_0(t);
                                                      ;
                                                      LocalPopChoice(q_29);
                                                    }
                                                  else
                                                    {
                                                      t = p_29;
                                                      t = MatchSimplify_0(t);
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_1 (ATerm t, ATerm e_124 (ATerm))
{
  ATerm g_110 (ATerm t)
  {
    ATerm w_4 (ATerm t)
    {
      t = e_124(t);
      t = g_110(t);
      return(t);
    }
    t = try_1(t, w_4);
    return(t);
  }
  t = g_110(t);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm c_111 (ATerm))
{
  t = c_111(t);
  {
    ATerm x_4 (ATerm t)
    {
      t = downup_1(t, c_111);
      return(t);
    }
    t = _all(t, x_4);
    t = c_111(t);
  }
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, y_4);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm j_110 = NULL,k_110 = NULL,l_110 = NULL;
  j_110 = t;
  i_110 :
  if(match_cons(j_110, sym__2))
    {
      k_110 = ATgetArgument(j_110, 0);
      l_110 = ATgetArgument(j_110, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_110)), not_null(k_110));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm t_110 = NULL,u_110 = NULL,v_110 = NULL,w_110 = NULL,x_110 = NULL,y_110 = NULL,d_111 = NULL;
  t_110 = t;
  q_110 :
  if(match_cons(t_110, sym__2))
    {
      u_110 = ATgetArgument(t_110, 0);
      x_110 = ATgetArgument(t_110, 1);
      r_110 :
      if(((ATgetType(u_110) == AT_LIST) && !(ATisEmpty(u_110))))
        {
          v_110 = ATgetFirst((ATermList) u_110);
          w_110 = (ATerm) ATgetNext((ATermList) u_110);
          s_110 :
          if(((ATgetType(x_110) == AT_LIST) && !(ATisEmpty(x_110))))
            {
              y_110 = ATgetFirst((ATermList) x_110);
              d_111 = (ATerm) ATgetNext((ATermList) x_110);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(v_110), not_null(y_110)), (ATerm) ATmakeAppl(sym__2, not_null(w_110), not_null(d_111)));
            }
          else
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
  ATerm n_111 = NULL,o_111 = NULL,p_111 = NULL;
  n_111 = t;
  k_111 :
  if(match_cons(n_111, sym__2))
    {
      o_111 = ATgetArgument(n_111, 0);
      p_111 = ATgetArgument(n_111, 1);
      l_111 :
      if(((ATgetType(o_111) == AT_LIST) && ATisEmpty(o_111)))
        {
          m_111 :
          if(((ATgetType(p_111) == AT_LIST) && ATisEmpty(p_111)))
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
ATerm genzip_4 (ATerm t, ATerm n_117 (ATerm), ATerm o_117 (ATerm), ATerm p_117 (ATerm), ATerm q_117 (ATerm))
{
  ATerm r_111 (ATerm t)
  {
    ATerm r_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_117(t);
        ;
        LocalPopChoice(s_29);
      }
    else
      {
        t = r_29;
        {
          t = o_117(t);
          {
            t = _2(t, q_117, r_111);
            t = p_117(t);
          }
        }
      }
    return(t);
  }
  t = r_111(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm s_117 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, s_117);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm a_112 = NULL,b_112 = NULL,c_112 = NULL,d_112 = NULL,g_112 = NULL;
  b_112 = t;
  u_111 :
  if(match_cons(b_112, sym_CallT_3))
    {
      c_112 = ATgetArgument(b_112, 0);
      g_112 = ATgetArgument(b_112, 1);
      a_112 = ATgetArgument(b_112, 2);
      v_111 :
      if(match_cons(c_112, sym_SVar_1))
        {
          d_112 = ATgetArgument(c_112, 0);
          w_111 :
          if(((ATgetType(g_112) == AT_LIST) && ATisEmpty(g_112)))
            {
              x_111 :
              if(((ATgetType(a_112) == AT_LIST) && ATisEmpty(a_112)))
                {
                  t = not_null(d_112);
                }
              else
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
      if(match_cons(b_112, sym_Call_2))
        {
          c_112 = ATgetArgument(b_112, 0);
          g_112 = ATgetArgument(b_112, 1);
          y_111 :
          if(match_cons(c_112, sym_SVar_1))
            {
              d_112 = ATgetArgument(c_112, 0);
              z_111 :
              if(((ATgetType(g_112) == AT_LIST) && ATisEmpty(g_112)))
                {
                  t = not_null(d_112);
                }
              else
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
ATerm SubsVar_2 (ATerm t, ATerm f_137 (ATerm), ATerm g_137 (ATerm))
{
  ATerm o_112 = NULL;
  ATerm q_112 = NULL,r_112 = NULL;
  o_112 = t;
  {
    ATerm u_112 = NULL;
    t = not_null(o_112);
    {
      ATerm v_112 = NULL;
      t = f_137(t);
      {
        u_112 = t;
        {
          if(((q_112 != NULL) && (q_112 != u_112)))
            _fail(u_112);
          else
            q_112 = u_112;
          {
            t = g_137(t);
            {
              v_112 = t;
              if(((r_112 != NULL) && (r_112 != v_112)))
                _fail(v_112);
              else
                r_112 = v_112;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_112), not_null(r_112));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm d_113 = NULL,e_113 = NULL,f_113 = NULL,g_113 = NULL;
  d_113 = t;
  c_113 :
  if(match_cons(d_113, sym__2))
    {
      e_113 = ATgetArgument(d_113, 0);
      f_113 = ATgetArgument(d_113, 1);
      {
        ATerm i_113 = NULL;
        if(((i_113 != NULL) && (i_113 != f_113)))
          _fail(f_113);
        else
          i_113 = f_113;
      }
    }
  else
    {
      if(match_cons(d_113, sym__3))
        {
          e_113 = ATgetArgument(d_113, 0);
          f_113 = ATgetArgument(d_113, 1);
          g_113 = ATgetArgument(d_113, 2);
          {
            ATerm o_113 = NULL;
            ATerm p_113 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_113), not_null(f_113));
            {
              t = zip_1(t, _id);
              {
                p_113 = t;
                if(((o_113 != NULL) && (o_113 != p_113)))
                  _fail(p_113);
                else
                  o_113 = p_113;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_113), not_null(g_113));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm q_136 (ATerm), ATerm r_136 (ATerm))
{
  ATerm w_113 = NULL,x_113 = NULL,y_113 = NULL;
  t = subs_args_0(t);
  {
    w_113 = t;
    v_113 :
    if(match_cons(w_113, sym__2))
      {
        x_113 = ATgetArgument(w_113, 0);
        y_113 = ATgetArgument(w_113, 1);
        {
          t = not_null(y_113);
          {
            ATerm z_4 (ATerm t)
            {
              ATerm a_5 (ATerm t)
              {
                t = not_null(x_113);
                return(t);
              }
              t = SubsVar_2(t, q_136, a_5);
              t = r_136(t);
              return(t);
            }
            t = alltd_1(t, z_4);
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
ATerm substitute_1 (ATerm t, ATerm s_136 (ATerm))
{
  t = substitute_2(t, s_136, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm f_140 (ATerm))
{
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_5 (ATerm t)
      {
        t = split_2(t, _id, f_140);
        {
          ATerm c_5 (ATerm t)
          {
            ATerm g_114 = NULL,j_114 = NULL,k_114 = NULL,l_114 = NULL,o_114 = NULL,p_114 = NULL,q_114 = NULL;
            g_114 = t;
            e_114 :
            if(match_cons(g_114, sym__2))
              {
                j_114 = ATgetArgument(g_114, 0);
                q_114 = ATgetArgument(g_114, 1);
                f_114 :
                if(match_cons(j_114, sym_SDef_3))
                  {
                    k_114 = ATgetArgument(j_114, 0);
                    l_114 = ATgetArgument(j_114, 1);
                    o_114 = ATgetArgument(j_114, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(q_114), not_null(l_114), not_null(o_114));
                  }
                else
                  {
                    if(match_cons(j_114, sym_SDefT_4))
                      {
                        k_114 = ATgetArgument(j_114, 0);
                        l_114 = ATgetArgument(j_114, 1);
                        o_114 = ATgetArgument(j_114, 2);
                        p_114 = ATgetArgument(j_114, 3);
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(q_114), not_null(l_114), not_null(o_114), not_null(p_114));
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
          t = zip_1(t, c_5);
        }
        return(t);
      }
      t = Let_2(t, b_5, _id);
      ;
      LocalPopChoice(u_29);
    }
  else
    {
      t = t_29;
      {
        ATerm v_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_5 (ATerm t)
            {
              t = split_2(t, _id, f_140);
              t = zip_1(t, ReplaceVar_0);
              return(t);
            }
            t = SDef_3(t, _id, d_5, _id);
            ;
            LocalPopChoice(w_29);
          }
        else
          {
            t = v_29;
            {
              ATerm x_29 = t;
              int d_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_5 (ATerm t)
                  {
                    t = split_2(t, _id, f_140);
                    t = zip_1(t, ReplaceVar_0);
                    return(t);
                  }
                  t = SDefT_4(t, _id, e_5, _id, _id);
                  ;
                  LocalPopChoice(d_30);
                }
              else
                {
                  t = x_29;
                  {
                    ATerm e_30 = t;
                    int f_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_5 (ATerm t)
                        {
                          t = split_2(t, _id, f_140);
                          t = zip_1(t, ReplaceVar_0);
                          return(t);
                        }
                        t = RDefT_4(t, _id, f_5, _id, _id);
                        ;
                        LocalPopChoice(f_30);
                      }
                    else
                      {
                        t = e_30;
                        {
                          ATerm g_5 (ATerm t)
                          {
                            t = f_140(t);
                            t = Hd_0(t);
                            return(t);
                          }
                          t = Rec_2(t, g_5, _id);
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
ATerm Rec_2 (ATerm t, ATerm f_101 (ATerm), ATerm g_101 (ATerm))
{
  ATerm g_115 = NULL,h_115 = NULL,j_115 = NULL;
  g_115 = t;
  f_115 :
  if(match_cons(g_115, sym_Rec_2))
    {
      h_115 = ATgetArgument(g_115, 0);
      j_115 = ATgetArgument(g_115, 1);
      {
        ATerm p_115 = NULL,r_115 = NULL;
        ATerm q_115 = NULL;
        t = SSLgetAnnotations(not_null(g_115));
        {
          q_115 = t;
          if(((p_115 != NULL) && (p_115 != q_115)))
            _fail(q_115);
          else
            p_115 = q_115;
        }
        {
          t = not_null(h_115);
          {
            ATerm t_115 = NULL;
            t = f_101(t);
            {
              r_115 = t;
              {
                t = not_null(j_115);
                {
                  ATerm x_115 = NULL;
                  t = g_101(t);
                  {
                    t_115 = t;
                    {
                      ATerm y_115 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(r_115), not_null(t_115)), not_null(p_115));
                      {
                        y_115 = t;
                        if(((x_115 != NULL) && (x_115 != y_115)))
                          _fail(y_115);
                        else
                          x_115 = y_115;
                      }
                      t = not_null(x_115);
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
ATerm SDef_3 (ATerm t, ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm))
{
  ATerm n_116 = NULL,o_116 = NULL,p_116 = NULL,q_116 = NULL;
  n_116 = t;
  m_116 :
  if(match_cons(n_116, sym_SDef_3))
    {
      o_116 = ATgetArgument(n_116, 0);
      p_116 = ATgetArgument(n_116, 1);
      q_116 = ATgetArgument(n_116, 2);
      {
        ATerm v_116 = NULL,x_116 = NULL;
        ATerm w_116 = NULL;
        t = SSLgetAnnotations(not_null(n_116));
        {
          w_116 = t;
          if(((v_116 != NULL) && (v_116 != w_116)))
            _fail(w_116);
          else
            v_116 = w_116;
        }
        {
          t = not_null(o_116);
          {
            ATerm z_116 = NULL;
            t = x_102(t);
            {
              x_116 = t;
              {
                t = not_null(p_116);
                {
                  ATerm b_117 = NULL;
                  t = y_102(t);
                  {
                    z_116 = t;
                    {
                      t = not_null(q_116);
                      {
                        ATerm d_117 = NULL;
                        t = z_102(t);
                        {
                          b_117 = t;
                          {
                            ATerm e_117 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(x_116), not_null(z_116), not_null(b_117)), not_null(v_116));
                            {
                              e_117 = t;
                              if(((d_117 != NULL) && (d_117 != e_117)))
                                _fail(e_117);
                              else
                                d_117 = e_117;
                            }
                            t = not_null(d_117);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm i_100 (ATerm), ATerm j_100 (ATerm))
{
  ATerm y_117 = NULL,z_117 = NULL,a_118 = NULL;
  y_117 = t;
  w_117 :
  if(match_cons(y_117, sym_Let_2))
    {
      z_117 = ATgetArgument(y_117, 0);
      a_118 = ATgetArgument(y_117, 1);
      {
        ATerm e_118 = NULL,g_118 = NULL;
        ATerm f_118 = NULL;
        t = SSLgetAnnotations(not_null(y_117));
        {
          f_118 = t;
          if(((e_118 != NULL) && (e_118 != f_118)))
            _fail(f_118);
          else
            e_118 = f_118;
        }
        {
          t = not_null(z_117);
          {
            ATerm i_118 = NULL;
            t = i_100(t);
            {
              g_118 = t;
              {
                t = not_null(a_118);
                {
                  ATerm k_118 = NULL;
                  t = j_100(t);
                  {
                    i_118 = t;
                    {
                      ATerm l_118 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(g_118), not_null(i_118)), not_null(e_118));
                      {
                        l_118 = t;
                        if(((k_118 != NULL) && (k_118 != l_118)))
                          _fail(l_118);
                        else
                          k_118 = l_118;
                      }
                      t = not_null(k_118);
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
ATerm sboundin_3 (ATerm t, ATerm g_140 (ATerm), ATerm h_140 (ATerm), ATerm i_140 (ATerm))
{
  ATerm g_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, g_140, g_140);
      ;
      LocalPopChoice(k_30);
    }
  else
    {
      t = g_30;
      {
        ATerm m_30 = t;
        int o_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, i_140, i_140, g_140);
            ;
            LocalPopChoice(o_30);
          }
        else
          {
            t = m_30;
            {
              ATerm r_30 = t;
              int s_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4(t, i_140, i_140, i_140, g_140);
                  ;
                  LocalPopChoice(s_30);
                }
              else
                {
                  t = r_30;
                  t = Rec_2(t, i_140, g_140);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0 (ATerm t)
{
  ATerm t_118 = NULL,u_118 = NULL,v_118 = NULL,w_118 = NULL,x_118 = NULL;
  t_118 = t;
  s_118 :
  if(match_cons(t_118, sym_RDefT_4))
    {
      u_118 = ATgetArgument(t_118, 0);
      v_118 = ATgetArgument(t_118, 1);
      w_118 = ATgetArgument(t_118, 2);
      x_118 = ATgetArgument(t_118, 3);
      {
        t = not_null(v_118);
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
  ATerm f_119 = NULL,g_119 = NULL,h_119 = NULL,i_119 = NULL,l_119 = NULL;
  f_119 = t;
  e_119 :
  if(match_cons(f_119, sym_SDefT_4))
    {
      g_119 = ATgetArgument(f_119, 0);
      h_119 = ATgetArgument(f_119, 1);
      i_119 = ATgetArgument(f_119, 2);
      l_119 = ATgetArgument(f_119, 3);
      {
        t = not_null(h_119);
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
  ATerm x_119 = NULL,d_120 = NULL,e_120 = NULL;
  x_119 = t;
  w_119 :
  if(match_cons(x_119, sym_Rec_2))
    {
      d_120 = ATgetArgument(x_119, 0);
      e_120 = ATgetArgument(x_119, 1);
      t = (ATerm) ATinsert(ATempty, not_null(d_120));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm k_120 = NULL,l_120 = NULL,m_120 = NULL,n_120 = NULL;
  k_120 = t;
  j_120 :
  if(match_cons(k_120, sym_SDef_3))
    {
      l_120 = ATgetArgument(k_120, 0);
      m_120 = ATgetArgument(k_120, 1);
      n_120 = ATgetArgument(k_120, 2);
      {
        t = not_null(m_120);
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
  ATerm x_120 = NULL,y_120 = NULL,z_120 = NULL;
  x_120 = t;
  w_120 :
  if(match_cons(x_120, sym_Let_2))
    {
      y_120 = ATgetArgument(x_120, 0);
      z_120 = ATgetArgument(x_120, 1);
      {
        t = not_null(y_120);
        {
          ATerm h_5 (ATerm t)
          {
            ATerm c_121 = NULL,d_121 = NULL,e_121 = NULL,f_121 = NULL,g_121 = NULL;
            c_121 = t;
            v_120 :
            if(match_cons(c_121, sym_SDef_3))
              {
                d_121 = ATgetArgument(c_121, 0);
                e_121 = ATgetArgument(c_121, 1);
                f_121 = ATgetArgument(c_121, 2);
                t = not_null(d_121);
              }
            else
              {
                if(match_cons(c_121, sym_SDefT_4))
                  {
                    d_121 = ATgetArgument(c_121, 0);
                    e_121 = ATgetArgument(c_121, 1);
                    f_121 = ATgetArgument(c_121, 2);
                    g_121 = ATgetArgument(c_121, 3);
                    t = not_null(d_121);
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, h_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm h_100 (ATerm))
{
  ATerm s_121 = NULL,t_121 = NULL;
  s_121 = t;
  r_121 :
  if(match_cons(s_121, sym_SVar_1))
    {
      t_121 = ATgetArgument(s_121, 0);
      {
        ATerm w_121 = NULL,y_121 = NULL;
        ATerm x_121 = NULL;
        t = SSLgetAnnotations(not_null(s_121));
        {
          x_121 = t;
          if(((w_121 != NULL) && (w_121 != x_121)))
            _fail(x_121);
          else
            w_121 = x_121;
        }
        {
          t = not_null(t_121);
          {
            ATerm f_122 = NULL;
            t = h_100(t);
            {
              y_121 = t;
              {
                ATerm g_122 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(y_121)), not_null(w_121));
                {
                  g_122 = t;
                  if(((f_122 != NULL) && (f_122 != g_122)))
                    _fail(g_122);
                  else
                    f_122 = g_122;
                }
                t = not_null(f_122);
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
ATerm srename_0 (ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(u_30);
      }
    else
      {
        t = t_30;
        {
          ATerm v_30 = t;
          int w_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(w_30);
            }
          else
            {
              t = v_30;
              {
                ATerm x_30 = t;
                int y_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0(t);
                    ;
                    LocalPopChoice(y_30);
                  }
                else
                  {
                    t = x_30;
                    {
                      ATerm g_31 = t;
                      int h_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0(t);
                          ;
                          LocalPopChoice(h_31);
                        }
                      else
                        {
                          t = g_31;
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
  t = rename_4(t, SVar_1, i_5, sboundin_3, spaste_1);
  return(t);
}
ATerm ReplaceVar_0 (ATerm t)
{
  ATerm p_122 = NULL,q_122 = NULL,r_122 = NULL,s_122 = NULL,t_122 = NULL;
  p_122 = t;
  n_122 :
  if(match_cons(p_122, sym__2))
    {
      q_122 = ATgetArgument(p_122, 0);
      t_122 = ATgetArgument(p_122, 1);
      o_122 :
      if(match_cons(q_122, sym_DefaultVarDec_1))
        {
          r_122 = ATgetArgument(q_122, 0);
          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, not_null(t_122));
        }
      else
        {
          if(match_cons(q_122, sym_VarDec_2))
            {
              r_122 = ATgetArgument(q_122, 0);
              s_122 = ATgetArgument(q_122, 1);
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(t_122), not_null(s_122));
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
ATerm tpaste_1 (ATerm t, ATerm b_140 (ATerm))
{
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, b_140, _id);
      ;
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
      {
        ATerm k_31 = t;
        int l_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_5 (ATerm t)
            {
              t = split_2(t, _id, b_140);
              t = zip_1(t, ReplaceVar_0);
              return(t);
            }
            t = SDefT_4(t, _id, _id, j_5, _id);
            ;
            LocalPopChoice(l_31);
          }
        else
          {
            t = k_31;
            {
              ATerm k_5 (ATerm t)
              {
                t = split_2(t, _id, b_140);
                t = zip_1(t, ReplaceVar_0);
                return(t);
              }
              t = RDefT_4(t, _id, _id, k_5, _id);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm p_99 (ATerm))
{
  ATerm g_123 = NULL,m_123 = NULL;
  g_123 = t;
  f_123 :
  if(match_cons(g_123, sym_DynamicRules_1))
    {
      m_123 = ATgetArgument(g_123, 0);
      {
        ATerm q_123 = NULL,s_123 = NULL;
        ATerm r_123 = NULL;
        t = SSLgetAnnotations(not_null(g_123));
        {
          r_123 = t;
          if(((q_123 != NULL) && (q_123 != r_123)))
            _fail(r_123);
          else
            q_123 = r_123;
        }
        {
          t = not_null(m_123);
          {
            ATerm u_123 = NULL;
            t = p_99(t);
            {
              s_123 = t;
              {
                ATerm v_123 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(s_123)), not_null(q_123));
                {
                  v_123 = t;
                  if(((u_123 != NULL) && (u_123 != v_123)))
                    _fail(v_123);
                  else
                    u_123 = v_123;
                }
                t = not_null(u_123);
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
ATerm RDefT_4 (ATerm t, ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm j_99 (ATerm))
{
  ATerm k_124 = NULL,l_124 = NULL,m_124 = NULL,n_124 = NULL,o_124 = NULL;
  k_124 = t;
  j_124 :
  if(match_cons(k_124, sym_RDefT_4))
    {
      l_124 = ATgetArgument(k_124, 0);
      m_124 = ATgetArgument(k_124, 1);
      n_124 = ATgetArgument(k_124, 2);
      o_124 = ATgetArgument(k_124, 3);
      {
        ATerm a_125 = NULL,c_125 = NULL;
        ATerm b_125 = NULL;
        t = SSLgetAnnotations(not_null(k_124));
        {
          b_125 = t;
          if(((a_125 != NULL) && (a_125 != b_125)))
            _fail(b_125);
          else
            a_125 = b_125;
        }
        {
          t = not_null(l_124);
          {
            ATerm e_125 = NULL;
            t = g_99(t);
            {
              c_125 = t;
              {
                t = not_null(m_124);
                {
                  ATerm g_125 = NULL;
                  t = h_99(t);
                  {
                    e_125 = t;
                    {
                      t = not_null(n_124);
                      {
                        ATerm i_125 = NULL;
                        t = i_99(t);
                        {
                          g_125 = t;
                          {
                            t = not_null(o_124);
                            {
                              ATerm k_125 = NULL;
                              t = j_99(t);
                              {
                                i_125 = t;
                                {
                                  ATerm l_125 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, not_null(c_125), not_null(e_125), not_null(g_125), not_null(i_125)), not_null(a_125));
                                  {
                                    l_125 = t;
                                    if(((k_125 != NULL) && (k_125 != l_125)))
                                      _fail(l_125);
                                    else
                                      k_125 = l_125;
                                  }
                                  t = not_null(k_125);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm SDefT_4 (ATerm t, ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm d_103 (ATerm))
{
  ATerm b_126 = NULL,c_126 = NULL,d_126 = NULL,e_126 = NULL,f_126 = NULL;
  b_126 = t;
  a_126 :
  if(match_cons(b_126, sym_SDefT_4))
    {
      c_126 = ATgetArgument(b_126, 0);
      d_126 = ATgetArgument(b_126, 1);
      e_126 = ATgetArgument(b_126, 2);
      f_126 = ATgetArgument(b_126, 3);
      {
        ATerm l_126 = NULL,n_126 = NULL;
        ATerm m_126 = NULL;
        t = SSLgetAnnotations(not_null(b_126));
        {
          m_126 = t;
          if(((l_126 != NULL) && (l_126 != m_126)))
            _fail(m_126);
          else
            l_126 = m_126;
        }
        {
          t = not_null(c_126);
          {
            ATerm p_126 = NULL;
            t = a_103(t);
            {
              n_126 = t;
              {
                t = not_null(d_126);
                {
                  ATerm s_126 = NULL;
                  t = b_103(t);
                  {
                    p_126 = t;
                    {
                      t = not_null(e_126);
                      {
                        ATerm u_126 = NULL;
                        t = c_103(t);
                        {
                          s_126 = t;
                          {
                            t = not_null(f_126);
                            {
                              ATerm w_126 = NULL;
                              t = d_103(t);
                              {
                                u_126 = t;
                                {
                                  ATerm x_126 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(n_126), not_null(p_126), not_null(s_126), not_null(u_126)), not_null(l_126));
                                  {
                                    x_126 = t;
                                    if(((w_126 != NULL) && (w_126 != x_126)))
                                      _fail(x_126);
                                    else
                                      w_126 = x_126;
                                  }
                                  t = not_null(w_126);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm Scope_2 (ATerm t, ATerm s_100 (ATerm), ATerm t_100 (ATerm))
{
  ATerm n_127 = NULL,o_127 = NULL,p_127 = NULL;
  n_127 = t;
  m_127 :
  if(match_cons(n_127, sym_Scope_2))
    {
      o_127 = ATgetArgument(n_127, 0);
      p_127 = ATgetArgument(n_127, 1);
      {
        ATerm u_127 = NULL,w_127 = NULL;
        ATerm v_127 = NULL;
        t = SSLgetAnnotations(not_null(n_127));
        {
          v_127 = t;
          if(((u_127 != NULL) && (u_127 != v_127)))
            _fail(v_127);
          else
            u_127 = v_127;
        }
        {
          t = not_null(o_127);
          {
            ATerm y_127 = NULL;
            t = s_100(t);
            {
              w_127 = t;
              {
                t = not_null(p_127);
                {
                  ATerm a_128 = NULL;
                  t = t_100(t);
                  {
                    y_127 = t;
                    {
                      ATerm b_128 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(w_127), not_null(y_127)), not_null(u_127));
                      {
                        b_128 = t;
                        if(((a_128 != NULL) && (a_128 != b_128)))
                          _fail(b_128);
                        else
                          a_128 = b_128;
                      }
                      t = not_null(a_128);
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
ATerm tboundin_3 (ATerm t, ATerm c_140 (ATerm), ATerm d_140 (ATerm), ATerm e_140 (ATerm))
{
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, e_140, c_140);
      ;
      LocalPopChoice(n_31);
    }
  else
    {
      t = m_31;
      {
        ATerm o_31 = t;
        int p_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4(t, e_140, e_140, e_140, c_140);
            ;
            LocalPopChoice(p_31);
          }
        else
          {
            t = o_31;
            {
              ATerm q_31 = t;
              int t_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4(t, e_140, e_140, e_140, c_140);
                  ;
                  LocalPopChoice(t_31);
                }
              else
                {
                  t = q_31;
                  t = DynamicRules_1(t, c_140);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0 (ATerm t)
{
  ATerm j_128 = NULL,k_128 = NULL,l_128 = NULL,m_128 = NULL,n_128 = NULL;
  j_128 = t;
  i_128 :
  if(match_cons(j_128, sym_RDefT_4))
    {
      k_128 = ATgetArgument(j_128, 0);
      l_128 = ATgetArgument(j_128, 1);
      m_128 = ATgetArgument(j_128, 2);
      n_128 = ATgetArgument(j_128, 3);
      {
        t = not_null(m_128);
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
  ATerm l_5 (ATerm t)
  {
    ATerm w_128 = NULL,x_128 = NULL,y_128 = NULL;
    x_128 = t;
    v_128 :
    if(match_cons(x_128, sym_VarDec_2))
      {
        y_128 = ATgetArgument(x_128, 0);
        w_128 = ATgetArgument(x_128, 1);
        t = not_null(y_128);
      }
    else
      {
        if(match_cons(x_128, sym_DefaultVarDec_1))
          {
            y_128 = ATgetArgument(x_128, 0);
            t = not_null(y_128);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1(t, l_5);
  return(t);
}
ATerm Bind6_0 (ATerm t)
{
  ATerm f_129 = NULL,g_129 = NULL,h_129 = NULL,i_129 = NULL,j_129 = NULL;
  f_129 = t;
  e_129 :
  if(match_cons(f_129, sym_SDefT_4))
    {
      g_129 = ATgetArgument(f_129, 0);
      h_129 = ATgetArgument(f_129, 1);
      i_129 = ATgetArgument(f_129, 2);
      j_129 = ATgetArgument(f_129, 3);
      {
        t = not_null(i_129);
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
  ATerm r_129 = NULL,s_129 = NULL;
  r_129 = t;
  q_129 :
  if(match_cons(r_129, sym_DynamicRules_1))
    {
      s_129 = ATgetArgument(r_129, 0);
      {
        t = not_null(s_129);
        t = tvars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm x_129 = NULL,y_129 = NULL;
  x_129 = t;
  w_129 :
  if(match_cons(x_129, sym_Var_1))
    {
      y_129 = ATgetArgument(x_129, 0);
      t = (ATerm) ATinsert(ATempty, not_null(y_129));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm n_119 (ATerm))
{
  ATerm d_130 = NULL,e_130 = NULL,f_130 = NULL;
  d_130 = t;
  c_130 :
  if(match_cons(d_130, sym__2))
    {
      e_130 = ATgetArgument(d_130, 0);
      f_130 = ATgetArgument(d_130, 1);
      {
        t = not_null(e_130);
        {
          ATerm j_130 (ATerm t)
          {
            ATerm u_31 = t;
            int a_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(f_130);
                ;
                LocalPopChoice(a_32);
              }
            else
              {
                t = u_31;
                {
                  ATerm i_32 = t;
                  int j_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_5 (ATerm t)
                      {
                        t = not_null(f_130);
                        return(t);
                      }
                      t = HdMember_p__2(t, n_119, m_5);
                      t = j_130(t);
                      ;
                      LocalPopChoice(j_32);
                    }
                  else
                    {
                      t = i_32;
                      t = Cons_2(t, _id, j_130);
                    }
                }
              }
            return(t);
          }
          t = j_130(t);
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
ATerm foldr_3 (ATerm t, ATerm c_122 (ATerm), ATerm d_122 (ATerm), ATerm e_122 (ATerm))
{
  ATerm k_32 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_122(t);
      ;
      LocalPopChoice(j_33);
    }
  else
    {
      t = k_32;
      {
        ATerm q_130 = NULL,r_130 = NULL,s_130 = NULL;
        q_130 = t;
        p_130 :
        if(((ATgetType(q_130) == AT_LIST) && !(ATisEmpty(q_130))))
          {
            r_130 = ATgetFirst((ATermList) q_130);
            s_130 = (ATerm) ATgetNext((ATermList) q_130);
            {
              ATerm v_130 = NULL,x_130 = NULL;
              ATerm k_33;
              k_33 = t;
              {
                ATerm w_130 = NULL;
                t = not_null(r_130);
                {
                  t = e_122(t);
                  {
                    w_130 = t;
                    if(((v_130 != NULL) && (v_130 != w_130)))
                      _fail(w_130);
                    else
                      v_130 = w_130;
                  }
                }
              }
              t = k_33;
              {
                ATerm z_130 = NULL;
                t = not_null(s_130);
                {
                  t = foldr_3(t, c_122, d_122, e_122);
                  {
                    z_130 = t;
                    if(((x_130 != NULL) && (x_130 != z_130)))
                      _fail(z_130);
                    else
                      x_130 = z_130;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_130), not_null(x_130));
                  t = d_122(t);
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
ATerm crush_3 (ATerm t, ATerm a_120 (ATerm), ATerm b_120 (ATerm), ATerm c_120 (ATerm))
{
  ATerm h_131 = NULL;
  ATerm j_131 = NULL;
  h_131 = t;
  {
    ATerm k_131 = NULL;
    ATerm m_131 = NULL,n_131 = NULL,o_131 = NULL;
    t = not_null(h_131);
    {
      k_131 = t;
      {
        t = SSL_explode_term(not_null(k_131));
        {
          m_131 = t;
          g_131 :
          if(match_cons(m_131, sym__2))
            {
              n_131 = ATgetArgument(m_131, 0);
              o_131 = ATgetArgument(m_131, 1);
              if(((j_131 != NULL) && (j_131 != o_131)))
                _fail(o_131);
              else
                j_131 = o_131;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_131);
      t = foldr_3(t, a_120, b_120, c_120);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm u_131 = NULL,v_131 = NULL,w_131 = NULL;
  u_131 = t;
  t_131 :
  if(match_cons(u_131, sym__2))
    {
      v_131 = ATgetArgument(u_131, 0);
      w_131 = ATgetArgument(u_131, 1);
      if(((v_131 != NULL) && (v_131 != w_131)))
        _fail(w_131);
      else
        v_131 = w_131;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm r_119 (ATerm), ATerm s_119 (ATerm))
{
  ATerm c_132 = NULL,d_132 = NULL,e_132 = NULL;
  c_132 = t;
  b_132 :
  if(((ATgetType(c_132) == AT_LIST) && !(ATisEmpty(c_132))))
    {
      d_132 = ATgetFirst((ATermList) c_132);
      e_132 = (ATerm) ATgetNext((ATermList) c_132);
      {
        t = s_119(t);
        {
          ATerm n_5 (ATerm t)
          {
            ATerm h_132 = NULL;
            h_132 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_132), not_null(h_132));
              t = r_119(t);
            }
            return(t);
          }
          t = fetch_1(t, n_5);
        }
        t = not_null(e_132);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm j_119 (ATerm))
{
  ATerm p_132 = NULL,q_132 = NULL,w_132 = NULL;
  p_132 = t;
  n_132 :
  if(match_cons(p_132, sym__2))
    {
      q_132 = ATgetArgument(p_132, 0);
      w_132 = ATgetArgument(p_132, 1);
      {
        t = not_null(q_132);
        {
          ATerm e_133 (ATerm t)
          {
            ATerm l_33 = t;
            int m_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(m_33);
              }
            else
              {
                t = l_33;
                {
                  ATerm n_33 = t;
                  int o_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_5 (ATerm t)
                      {
                        t = not_null(w_132);
                        return(t);
                      }
                      t = HdMember_p__2(t, j_119, o_5);
                      t = e_133(t);
                      ;
                      LocalPopChoice(o_33);
                    }
                  else
                    {
                      t = n_33;
                      t = Cons_2(t, _id, e_133);
                    }
                }
              }
            return(t);
          }
          t = e_133(t);
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
  ATerm j_133 = NULL,o_133 = NULL,p_133 = NULL,q_133 = NULL,r_133 = NULL;
  j_133 = t;
  g_133 :
  if(match_cons(j_133, sym__2))
    {
      o_133 = ATgetArgument(j_133, 0);
      p_133 = ATgetArgument(j_133, 1);
      h_133 :
      if(((ATgetType(p_133) == AT_LIST) && !(ATisEmpty(p_133))))
        {
          q_133 = ATgetFirst((ATermList) p_133);
          r_133 = (ATerm) ATgetNext((ATermList) p_133);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_133)), not_null(q_133)), not_null(r_133));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm g_134 = NULL,h_134 = NULL,i_134 = NULL,j_134 = NULL,k_134 = NULL;
  g_134 = t;
  e_134 :
  if(((ATgetType(g_134) == AT_LIST) && !(ATisEmpty(g_134))))
    {
      h_134 = ATgetFirst((ATermList) g_134);
      k_134 = (ATerm) ATgetNext((ATermList) g_134);
      f_134 :
      if(match_cons(h_134, sym__2))
        {
          i_134 = ATgetArgument(h_134, 0);
          j_134 = ATgetArgument(h_134, 1);
          {
            ATerm o_134 = NULL,p_134 = NULL,v_134 = NULL,b_135 = NULL;
            ATerm p_33;
            p_33 = t;
            {
              ATerm q_134 = NULL;
              ATerm s_134 = NULL,t_134 = NULL,u_134 = NULL;
              t = not_null(j_134);
              {
                q_134 = t;
                {
                  t = SSL_explode_term(not_null(q_134));
                  {
                    s_134 = t;
                    z_133 :
                    if(match_cons(s_134, sym__2))
                      {
                        t_134 = ATgetArgument(s_134, 0);
                        u_134 = ATgetArgument(s_134, 1);
                        {
                          if(((o_134 != NULL) && (o_134 != t_134)))
                            _fail(t_134);
                          else
                            o_134 = t_134;
                          if(((p_134 != NULL) && (p_134 != u_134)))
                            _fail(u_134);
                          else
                            p_134 = u_134;
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
            t = p_33;
            {
              ATerm q_33;
              q_33 = t;
              {
                ATerm w_134 = NULL;
                ATerm y_134 = NULL,z_134 = NULL,a_135 = NULL;
                t = not_null(i_134);
                {
                  w_134 = t;
                  {
                    t = SSL_explode_term(not_null(w_134));
                    {
                      y_134 = t;
                      c_134 :
                      if(match_cons(y_134, sym__2))
                        {
                          z_134 = ATgetArgument(y_134, 0);
                          a_135 = ATgetArgument(y_134, 1);
                          {
                            if(((o_134 != NULL) && (o_134 != z_134)))
                              _fail(z_134);
                            else
                              o_134 = z_134;
                            if(((v_134 != NULL) && (v_134 != a_135)))
                              _fail(a_135);
                            else
                              v_134 = a_135;
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
              t = q_33;
              {
                ATerm c_135 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_134), not_null(p_134));
                {
                  t = zip_1(t, _id);
                  {
                    c_135 = t;
                    if(((b_135 != NULL) && (b_135 != c_135)))
                      _fail(c_135);
                    else
                      b_135 = c_135;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_135), not_null(k_134));
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
  ATerm n_135 = NULL,o_135 = NULL,p_135 = NULL,q_135 = NULL,r_135 = NULL;
  n_135 = t;
  l_135 :
  if(((ATgetType(n_135) == AT_LIST) && !(ATisEmpty(n_135))))
    {
      o_135 = ATgetFirst((ATermList) n_135);
      r_135 = (ATerm) ATgetNext((ATermList) n_135);
      m_135 :
      if(match_cons(o_135, sym__2))
        {
          p_135 = ATgetArgument(o_135, 0);
          q_135 = ATgetArgument(o_135, 1);
          {
            ATerm t_135 = NULL;
            if(((p_135 != NULL) && (p_135 != q_135)))
              _fail(q_135);
            else
              p_135 = q_135;
            {
              if(((t_135 != NULL) && (t_135 != r_135)))
                _fail(r_135);
              else
                t_135 = r_135;
              t = not_null(t_135);
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
ATerm while_not_2 (ATerm t, ATerm t_124 (ATerm), ATerm u_124 (ATerm))
{
  ATerm v_135 (ATerm t)
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_124(t);
        ;
        LocalPopChoice(c_34);
      }
    else
      {
        t = b_34;
        {
          t = u_124(t);
          t = v_135(t);
        }
      }
    return(t);
  }
  t = v_135(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm w_124 (ATerm), ATerm x_124 (ATerm), ATerm y_124 (ATerm))
{
  t = w_124(t);
  t = while_not_2(t, x_124, y_124);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm d_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_5 (ATerm t)
      {
        ATerm x_135 = NULL;
        x_135 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(x_135));
        return(t);
      }
      ATerm q_5 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm r_5 (ATerm t)
      {
        ATerm f_34 = t;
        int j_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 (ATerm t)
            {
              ATerm k_34 = t;
              int l_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(l_34);
                }
              else
                {
                  t = k_34;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, s_5);
            ;
            LocalPopChoice(j_34);
          }
        else
          {
            t = f_34;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, p_5, q_5, r_5);
      ;
      LocalPopChoice(e_34);
    }
  else
    {
      t = d_34;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm x_138 (ATerm), ATerm y_138 (ATerm), ATerm z_138 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm d_136 (ATerm t)
  {
    ATerm m_34 = t;
    int n_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_138(t);
        ;
        LocalPopChoice(n_34);
      }
    else
      {
        t = m_34;
        {
          ATerm o_34 = t;
          int r_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_136 = NULL;
              ATerm s_35;
              s_35 = t;
              {
                ATerm c_136 = NULL;
                t = y_138(t);
                {
                  c_136 = t;
                  if(((b_136 != NULL) && (b_136 != c_136)))
                    _fail(c_136);
                  else
                    b_136 = c_136;
                }
              }
              t = s_35;
              {
                ATerm t_5 (ATerm t)
                {
                  ATerm v_5 (ATerm t)
                  {
                    t = not_null(b_136);
                    return(t);
                  }
                  t = split_2(t, d_136, v_5);
                  t = diff_0(t);
                  return(t);
                }
                ATerm u_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = z_138(t, t_5, d_136, u_5);
                {
                  ATerm w_5 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, w_5, union_0, _id);
                }
              }
              ;
              LocalPopChoice(r_35);
            }
          else
            {
              t = o_34;
              {
                ATerm x_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, x_5, union_0, d_136);
              }
            }
        }
      }
    return(t);
  }
  t = d_136(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(u_35);
      }
    else
      {
        t = t_35;
        {
          ATerm e_36 = t;
          int f_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0(t);
              ;
              LocalPopChoice(f_36);
            }
          else
            {
              t = e_36;
              {
                ATerm g_36 = t;
                int h_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0(t);
                    ;
                    LocalPopChoice(h_36);
                  }
                else
                  {
                    t = g_36;
                    t = Bind8_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, y_5, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm j_136 = NULL,t_136 = NULL,u_136 = NULL,v_136 = NULL,w_136 = NULL,x_136 = NULL;
  v_136 = t;
  h_136 :
  if(match_cons(v_136, sym_LRule_1))
    {
      w_136 = ATgetArgument(v_136, 0);
      i_136 :
      if(match_cons(w_136, sym_Rule_3))
        {
          j_136 = ATgetArgument(w_136, 0);
          t_136 = ATgetArgument(w_136, 1);
          u_136 = ATgetArgument(w_136, 2);
          {
            t = not_null(j_136);
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
      if(match_cons(v_136, sym_Scope_2))
        {
          w_136 = ATgetArgument(v_136, 0);
          x_136 = ATgetArgument(v_136, 1);
          t = not_null(w_136);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm e_138 = NULL,f_138 = NULL;
  e_138 = t;
  d_138 :
  if(match_cons(e_138, sym_Var_1))
    {
      f_138 = ATgetArgument(e_138, 0);
      {
        ATerm v_36 = t;
        int z_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_138 = NULL,k_138 = NULL;
            ATerm j_138 = NULL;
            t = SSLgetAnnotations(not_null(e_138));
            {
              j_138 = t;
              if(((i_138 != NULL) && (i_138 != j_138)))
                _fail(j_138);
              else
                i_138 = j_138;
            }
            {
              t = not_null(f_138);
              {
                ATerm m_138 = NULL;
                t = p_0(t);
                {
                  k_138 = t;
                  {
                    ATerm n_138 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(k_138)), not_null(i_138));
                    {
                      n_138 = t;
                      if(((m_138 != NULL) && (m_138 != n_138)))
                        _fail(n_138);
                      else
                        m_138 = n_138;
                    }
                    t = not_null(m_138);
                  }
                }
              }
            }
            ;
            LocalPopChoice(z_36);
          }
        else
          {
            t = v_36;
            {
              ATerm a_37 = t;
              int b_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_138 = NULL,s_138 = NULL;
                  ATerm r_138 = NULL;
                  t = SSLgetAnnotations(not_null(e_138));
                  {
                    r_138 = t;
                    if(((q_138 != NULL) && (q_138 != r_138)))
                      _fail(r_138);
                    else
                      q_138 = r_138;
                  }
                  {
                    t = not_null(f_138);
                    {
                      ATerm u_138 = NULL;
                      t = p_0(t);
                      {
                        s_138 = t;
                        {
                          ATerm v_138 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(s_138)), not_null(q_138));
                          {
                            v_138 = t;
                            if(((u_138 != NULL) && (u_138 != v_138)))
                              _fail(v_138);
                            else
                              u_138 = v_138;
                          }
                          t = not_null(u_138);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(b_37);
                }
              else
                {
                  t = a_37;
                  {
                    ATerm c_139 = NULL,e_139 = NULL;
                    ATerm d_139 = NULL;
                    t = SSLgetAnnotations(not_null(e_138));
                    {
                      d_139 = t;
                      if(((c_139 != NULL) && (c_139 != d_139)))
                        _fail(d_139);
                      else
                        c_139 = d_139;
                    }
                    {
                      t = not_null(f_138);
                      {
                        ATerm i_139 = NULL;
                        t = p_0(t);
                        {
                          e_139 = t;
                          {
                            ATerm j_139 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(e_139)), not_null(c_139));
                            {
                              j_139 = t;
                              if(((i_139 != NULL) && (i_139 != j_139)))
                                _fail(j_139);
                              else
                                i_139 = j_139;
                            }
                            t = not_null(i_139);
                          }
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
ATerm DistBinding_2 (ATerm t, ATerm s_137 (ATerm), ATerm t_137 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm a_140 = NULL,j_140 = NULL,k_140 = NULL,l_140 = NULL;
  a_140 = t;
  z_139 :
  if(match_cons(a_140, sym__3))
    {
      j_140 = ATgetArgument(a_140, 0);
      k_140 = ATgetArgument(a_140, 1);
      l_140 = ATgetArgument(a_140, 2);
      {
        t = not_null(j_140);
        {
          ATerm z_5 (ATerm t)
          {
            ATerm p_140 = NULL;
            p_140 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_140), not_null(l_140));
              t = s_137(t);
            }
            return(t);
          }
          ATerm a_6 (ATerm t)
          {
            ATerm t_140 = NULL;
            t_140 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_140), not_null(k_140));
              t = s_137(t);
            }
            return(t);
          }
          t = t_137(t, z_5, a_6, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm m_137 (ATerm), ATerm n_137 (ATerm, ATerm (ATerm)))
{
  ATerm f_141 = NULL,g_141 = NULL,h_141 = NULL;
  f_141 = t;
  e_141 :
  if(match_cons(f_141, sym__2))
    {
      g_141 = ATgetArgument(f_141, 0);
      h_141 = ATgetArgument(f_141, 1);
      {
        ATerm k_141 = NULL,l_141 = NULL,m_141 = NULL,s_141 = NULL;
        ATerm c_37;
        c_37 = t;
        {
          ATerm n_141 = NULL;
          t = not_null(g_141);
          {
            ATerm o_141 = NULL;
            t = m_137(t);
            {
              n_141 = t;
              {
                if(((k_141 != NULL) && (k_141 != n_141)))
                  _fail(n_141);
                else
                  k_141 = n_141;
                {
                  ATerm p_141 = NULL,r_141 = NULL;
                  t = map_1(t, new_0);
                  {
                    o_141 = t;
                    {
                      if(((l_141 != NULL) && (l_141 != o_141)))
                        _fail(o_141);
                      else
                        l_141 = o_141;
                      {
                        ATerm q_141 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_141), not_null(l_141));
                        {
                          t = zip_1(t, _id);
                          {
                            q_141 = t;
                            if(((p_141 != NULL) && (p_141 != q_141)))
                              _fail(q_141);
                            else
                              p_141 = q_141;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_141), not_null(h_141));
                          {
                            t = conc_0(t);
                            {
                              r_141 = t;
                              if(((m_141 != NULL) && (m_141 != r_141)))
                                _fail(r_141);
                              else
                                m_141 = r_141;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = c_37;
        {
          ATerm t_141 = NULL;
          t = not_null(g_141);
          {
            ATerm b_6 (ATerm t)
            {
              t = not_null(l_141);
              return(t);
            }
            t = n_137(t, b_6);
            {
              t_141 = t;
              if(((s_141 != NULL) && (s_141 != t_141)))
                _fail(t_141);
              else
                s_141 = t_141;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(s_141), not_null(h_141), not_null(m_141));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm d_142 = NULL,e_142 = NULL,f_142 = NULL,g_142 = NULL,h_142 = NULL;
  d_142 = t;
  b_142 :
  if(match_cons(d_142, sym__2))
    {
      e_142 = ATgetArgument(d_142, 0);
      f_142 = ATgetArgument(d_142, 1);
      c_142 :
      if(((ATgetType(f_142) == AT_LIST) && !(ATisEmpty(f_142))))
        {
          g_142 = ATgetFirst((ATermList) f_142);
          h_142 = (ATerm) ATgetNext((ATermList) f_142);
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_142), not_null(h_142));
        }
      else
        {
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
  ATerm p_142 = NULL,q_142 = NULL,r_142 = NULL,s_142 = NULL,t_142 = NULL,u_142 = NULL,v_142 = NULL;
  p_142 = t;
  m_142 :
  if(match_cons(p_142, sym__2))
    {
      q_142 = ATgetArgument(p_142, 0);
      r_142 = ATgetArgument(p_142, 1);
      n_142 :
      if(((ATgetType(r_142) == AT_LIST) && !(ATisEmpty(r_142))))
        {
          s_142 = ATgetFirst((ATermList) r_142);
          v_142 = (ATerm) ATgetNext((ATermList) r_142);
          o_142 :
          if(match_cons(s_142, sym__2))
            {
              t_142 = ATgetArgument(s_142, 0);
              u_142 = ATgetArgument(s_142, 1);
              {
                ATerm x_142 = NULL;
                if(((q_142 != NULL) && (q_142 != t_142)))
                  _fail(t_142);
                else
                  q_142 = t_142;
                {
                  if(((x_142 != NULL) && (x_142 != u_142)))
                    _fail(u_142);
                  else
                    x_142 = u_142;
                  t = not_null(x_142);
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
  ATerm d_37 = t;
  int e_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(e_37);
    }
  else
    {
      t = d_37;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm x_137 (ATerm, ATerm (ATerm)))
{
  ATerm c_143 = NULL,d_143 = NULL,e_143 = NULL;
  c_143 = t;
  b_143 :
  if(match_cons(c_143, sym__2))
    {
      d_143 = ATgetArgument(c_143, 0);
      e_143 = ATgetArgument(c_143, 1);
      {
        t = not_null(d_143);
        {
          ATerm c_6 (ATerm t)
          {
            ATerm d_6 (ATerm t)
            {
              t = not_null(e_143);
              return(t);
            }
            t = split_2(t, _id, d_6);
            t = lookup_0(t);
            return(t);
          }
          t = x_137(t, c_6);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm q_127 (ATerm))
{
  ATerm l_143 = NULL,m_143 = NULL,n_143 = NULL;
  l_143 = t;
  k_143 :
  if(match_cons(l_143, sym__2))
    {
      m_143 = ATgetArgument(l_143, 0);
      n_143 = ATgetArgument(l_143, 1);
      {
        t = not_null(m_143);
        {
          ATerm e_6 (ATerm t)
          {
            ATerm q_143 = NULL;
            q_143 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_143), not_null(n_143));
              t = q_127(t);
            }
            return(t);
          }
          t = _all(t, e_6);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm a_127 (ATerm))
{
  ATerm u_143 (ATerm t)
  {
    ATerm f_37 = t;
    int g_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_127(t);
        ;
        LocalPopChoice(g_37);
      }
    else
      {
        t = f_37;
        t = all_dist_1(t, u_143);
      }
    return(t);
  }
  t = u_143(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm h_137 (ATerm, ATerm (ATerm)), ATerm i_137 (ATerm), ATerm j_137 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm k_137 (ATerm, ATerm (ATerm)))
{
  ATerm w_143 = NULL;
  w_143 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_143), (ATerm) ATempty);
    {
      ATerm z_143 (ATerm t)
      {
        ATerm f_6 (ATerm t)
        {
          ATerm h_37 = t;
          int i_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, h_137);
              ;
              LocalPopChoice(i_37);
            }
          else
            {
              t = h_37;
              {
                t = RnBinding_2(t, i_137, k_137);
                t = DistBinding_2(t, z_143, j_137);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, f_6);
        return(t);
      }
      t = z_143(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm j_37 = t;
    int k_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(k_37);
      }
    else
      {
        t = j_37;
        {
          ATerm l_37 = t;
          int y_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0(t);
              ;
              LocalPopChoice(y_37);
            }
          else
            {
              t = l_37;
              t = Bind8_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, Var_1, g_6, tboundin_3, tpaste_1);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm c_144 = NULL,d_144 = NULL,e_144 = NULL;
  c_144 = t;
  b_144 :
  if(((ATgetType(c_144) == AT_LIST) && !(ATisEmpty(c_144))))
    {
      d_144 = ATgetFirst((ATermList) c_144);
      e_144 = (ATerm) ATgetNext((ATermList) c_144);
      t = not_null(d_144);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm j_144 = NULL,k_144 = NULL,l_144 = NULL;
  j_144 = t;
  i_144 :
  if(match_cons(j_144, sym__2))
    {
      k_144 = ATgetArgument(j_144, 0);
      l_144 = ATgetArgument(j_144, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_144), not_null(l_144));
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
ATerm rewrite_1 (ATerm t, ATerm n_123 (ATerm))
{
  ATerm r_144 = NULL;
  ATerm t_144 = NULL;
  r_144 = t;
  {
    ATerm u_144 = NULL;
    t = term_z_37;
    {
      t = n_123(t);
      {
        u_144 = t;
        if(((t_144 != NULL) && (t_144 != u_144)))
          _fail(u_144);
        else
          t_144 = u_144;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_144), not_null(r_144));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm InlineStrat_0 (ATerm t)
{
  ATerm q_145 = NULL,r_145 = NULL,s_145 = NULL,t_145 = NULL,u_145 = NULL;
  q_145 = t;
  o_145 :
  if(match_cons(q_145, sym_CallT_3))
    {
      r_145 = ATgetArgument(q_145, 0);
      t_145 = ATgetArgument(q_145, 1);
      u_145 = ATgetArgument(q_145, 2);
      p_145 :
      if(match_cons(r_145, sym_SVar_1))
        {
          s_145 = ATgetArgument(r_145, 0);
          {
            ATerm z_145 = NULL,a_146 = NULL,b_146 = NULL,c_146 = NULL,d_146 = NULL,e_146 = NULL,f_146 = NULL,g_146 = NULL,h_146 = NULL;
            ATerm i_146 = NULL,j_146 = NULL,k_146 = NULL,l_146 = NULL,m_146 = NULL;
            t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_145)), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
            {
              ATerm h_6 (ATerm t)
              {
                t = term_a_38;
                return(t);
              }
              t = rewrite_1(t, h_6);
              {
                i_146 = t;
                m_145 :
                if(match_cons(i_146, sym_Defined_4))
                  {
                    j_146 = ATgetArgument(i_146, 0);
                    k_146 = ATgetArgument(i_146, 1);
                    l_146 = ATgetArgument(i_146, 2);
                    m_146 = ATgetArgument(i_146, 3);
                    n_145 :
                    if(match_string(j_146, "c_0"))
                      {
                        ATerm n_146 = NULL,o_146 = NULL,p_146 = NULL,q_146 = NULL,r_146 = NULL;
                        if(((z_145 != NULL) && (z_145 != k_146)))
                          _fail(k_146);
                        else
                          z_145 = k_146;
                        {
                          if(((a_146 != NULL) && (a_146 != l_146)))
                            _fail(l_146);
                          else
                            a_146 = l_146;
                          {
                            if(((f_146 != NULL) && (f_146 != m_146)))
                              _fail(m_146);
                            else
                              f_146 = m_146;
                            {
                              t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(s_145), not_null(z_145), not_null(f_146), not_null(a_146));
                              {
                                t = strename_0(t);
                                {
                                  n_146 = t;
                                  l_145 :
                                  if(match_cons(n_146, sym_SDefT_4))
                                    {
                                      o_146 = ATgetArgument(n_146, 0);
                                      p_146 = ATgetArgument(n_146, 1);
                                      q_146 = ATgetArgument(n_146, 2);
                                      r_146 = ATgetArgument(n_146, 3);
                                      {
                                        ATerm s_146 = NULL,y_146 = NULL;
                                        if(((s_145 != NULL) && (s_145 != o_146)))
                                          _fail(o_146);
                                        else
                                          s_145 = o_146;
                                        {
                                          if(((c_146 != NULL) && (c_146 != p_146)))
                                            _fail(p_146);
                                          else
                                            c_146 = p_146;
                                          {
                                            if(((b_146 != NULL) && (b_146 != q_146)))
                                              _fail(q_146);
                                            else
                                              b_146 = q_146;
                                            {
                                              if(((d_146 != NULL) && (d_146 != r_146)))
                                                _fail(r_146);
                                              else
                                                d_146 = r_146;
                                              {
                                                ATerm x_146 = NULL;
                                                t = not_null(c_146);
                                                {
                                                  ATerm i_6 (ATerm t)
                                                  {
                                                    ATerm t_146 = NULL,u_146 = NULL,v_146 = NULL;
                                                    t_146 = t;
                                                    b_145 :
                                                    if(match_cons(t_146, sym_VarDec_2))
                                                      {
                                                        u_146 = ATgetArgument(t_146, 0);
                                                        v_146 = ATgetArgument(t_146, 1);
                                                        t = not_null(u_146);
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                    return(t);
                                                  }
                                                  t = map_1(t, i_6);
                                                  {
                                                    x_146 = t;
                                                    if(((s_146 != NULL) && (s_146 != x_146)))
                                                      _fail(x_146);
                                                    else
                                                      s_146 = x_146;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__3, not_null(s_146), not_null(t_145), not_null(d_146));
                                                  {
                                                    ATerm d_147 = NULL;
                                                    t = ssubs_0(t);
                                                    {
                                                      y_146 = t;
                                                      {
                                                        if(((e_146 != NULL) && (e_146 != y_146)))
                                                          _fail(y_146);
                                                        else
                                                          e_146 = y_146;
                                                        {
                                                          t = not_null(f_146);
                                                          {
                                                            ATerm e_147 = NULL,l_147 = NULL;
                                                            ATerm j_6 (ATerm t)
                                                            {
                                                              ATerm z_146 = NULL,a_147 = NULL,b_147 = NULL;
                                                              z_146 = t;
                                                              f_145 :
                                                              if(match_cons(z_146, sym_VarDec_2))
                                                                {
                                                                  a_147 = ATgetArgument(z_146, 0);
                                                                  b_147 = ATgetArgument(z_146, 1);
                                                                  t = not_null(a_147);
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            t = map_1(t, j_6);
                                                            {
                                                              d_147 = t;
                                                              {
                                                                if(((g_146 != NULL) && (g_146 != d_147)))
                                                                  _fail(d_147);
                                                                else
                                                                  g_146 = d_147;
                                                                {
                                                                  ATerm k_147 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_145), not_null(g_146));
                                                                  {
                                                                    ATerm k_6 (ATerm t)
                                                                    {
                                                                      ATerm f_147 = NULL,g_147 = NULL,h_147 = NULL;
                                                                      f_147 = t;
                                                                      i_145 :
                                                                      if(match_cons(f_147, sym__2))
                                                                        {
                                                                          g_147 = ATgetArgument(f_147, 0);
                                                                          h_147 = ATgetArgument(f_147, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_147)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_147))));
                                                                        }
                                                                      else
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = zip_1(t, k_6);
                                                                    {
                                                                      k_147 = t;
                                                                      if(((e_147 != NULL) && (e_147 != k_147)))
                                                                        _fail(k_147);
                                                                      else
                                                                        e_147 = k_147;
                                                                    }
                                                                  }
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(e_147));
                                                                    {
                                                                      l_147 = t;
                                                                      if(((h_146 != NULL) && (h_146 != l_147)))
                                                                        _fail(l_147);
                                                                      else
                                                                        h_146 = l_147;
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
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
                        }
                      }
                    else
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
            {
              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_146), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_146), not_null(e_146)));
              t = simplify0_0(t);
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm check_that_try_is_try_0 (ATerm t)
{
  ATerm f_148 = NULL;
  ATerm b_38;
  b_38 = t;
  {
    ATerm g_148 = NULL;
    t = new_0(t);
    {
      g_148 = t;
      {
        if(((f_148 != NULL) && (f_148 != g_148)))
          _fail(g_148);
        else
          f_148 = g_148;
        {
          ATerm c_38 = t;
          int d_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_f_38, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_148)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
              t = InlineStrat_0(t);
              ;
              LocalPopChoice(d_38);
            }
          else
            {
              t = c_38;
              {
                ATerm l_6 (ATerm t)
                {
                  ATerm m_6 (ATerm t)
                  {
                    t = term_g_38;
                    return(t);
                  }
                  t = say_1(t, m_6);
                  return(t);
                }
                t = if_verbose2_1(t, l_6);
                _fail(t);
              }
            }
          {
            ATerm h_38 = t;
            int i_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_148 = NULL,i_148 = NULL,j_148 = NULL,k_148 = NULL,l_148 = NULL,m_148 = NULL,n_148 = NULL;
                h_148 = t;
                z_147 :
                if(match_cons(h_148, sym_LChoice_2))
                  {
                    i_148 = ATgetArgument(h_148, 0);
                    n_148 = ATgetArgument(h_148, 1);
                    a_148 :
                    if(match_cons(i_148, sym_CallT_3))
                      {
                        j_148 = ATgetArgument(i_148, 0);
                        l_148 = ATgetArgument(i_148, 1);
                        m_148 = ATgetArgument(i_148, 2);
                        b_148 :
                        if(match_cons(j_148, sym_SVar_1))
                          {
                            k_148 = ATgetArgument(j_148, 0);
                            c_148 :
                            if(((ATgetType(l_148) == AT_LIST) && ATisEmpty(l_148)))
                              {
                                d_148 :
                                if(((ATgetType(m_148) == AT_LIST) && ATisEmpty(m_148)))
                                  {
                                    e_148 :
                                    if(match_cons(n_148, sym_Id_0))
                                      {
                                        if(((f_148 != NULL) && (f_148 != k_148)))
                                          _fail(k_148);
                                        else
                                          f_148 = k_148;
                                      }
                                    else
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
                ;
                LocalPopChoice(i_38);
              }
            else
              {
                t = h_38;
                {
                  ATerm n_6 (ATerm t)
                  {
                    ATerm o_6 (ATerm t)
                    {
                      t = term_j_38;
                      return(t);
                    }
                    t = debug_1(t, o_6);
                    return(t);
                  }
                  t = if_verbose1_1(t, n_6);
                  _fail(t);
                }
              }
            {
              ATerm p_6 (ATerm t)
              {
                ATerm q_6 (ATerm t)
                {
                  t = term_k_38;
                  return(t);
                }
                t = say_1(t, q_6);
                return(t);
              }
              t = if_verbose2_1(t, p_6);
            }
          }
        }
      }
    }
  }
  t = b_38;
  return(t);
}
ATerm check_library_definitions_0 (ATerm t)
{
  t = check_that_try_is_try_0(t);
  {
    t = check_that_innermost_is_innermost_0(t);
    t = check_that_bottomup_is_bottomup_0(t);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm l_123 (ATerm))
{
  ATerm v_148 = NULL,w_148 = NULL,x_148 = NULL;
  v_148 = t;
  u_148 :
  if(match_cons(v_148, sym__2))
    {
      w_148 = ATgetArgument(v_148, 0);
      x_148 = ATgetArgument(v_148, 1);
      {
        ATerm a_149 = NULL,b_149 = NULL,c_149 = NULL;
        ATerm l_38;
        l_38 = t;
        {
          ATerm d_149 = NULL;
          ATerm e_149 = NULL,f_149 = NULL,g_149 = NULL;
          t = l_123(t);
          {
            d_149 = t;
            {
              if(((a_149 != NULL) && (a_149 != d_149)))
                _fail(d_149);
              else
                a_149 = d_149;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(a_149), not_null(w_148), not_null(x_148));
                {
                  t = table_push_0(t);
                  {
                    ATerm m_38 = t;
                    int n_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_149), term_p_16);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(n_38);
                      }
                    else
                      {
                        t = m_38;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      e_149 = t;
                      t_148 :
                      if(((ATgetType(e_149) == AT_LIST) && !(ATisEmpty(e_149))))
                        {
                          f_149 = ATgetFirst((ATermList) e_149);
                          g_149 = (ATerm) ATgetNext((ATermList) e_149);
                          {
                            if(((b_149 != NULL) && (b_149 != f_149)))
                              _fail(f_149);
                            else
                              b_149 = f_149;
                            {
                              if(((c_149 != NULL) && (c_149 != g_149)))
                                _fail(g_149);
                              else
                                c_149 = g_149;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(a_149), term_p_16, (ATerm) ATinsert(CheckATermList(not_null(c_149)), (ATerm) ATinsert(CheckATermList(not_null(b_149)), not_null(w_148))));
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
        t = l_38;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declare_inline_rule_0 (ATerm t)
{
  ATerm m_149 = NULL,n_149 = NULL,o_149 = NULL,p_149 = NULL,q_149 = NULL;
  m_149 = t;
  l_149 :
  if(match_cons(m_149, sym_SDefT_4))
    {
      n_149 = ATgetArgument(m_149, 0);
      o_149 = ATgetArgument(m_149, 1);
      p_149 = ATgetArgument(m_149, 2);
      q_149 = ATgetArgument(m_149, 3);
      {
        ATerm o_38;
        o_38 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_149)), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_4, term_p_38, not_null(o_149), not_null(q_149), not_null(p_149)));
          {
            ATerm r_6 (ATerm t)
            {
              t = term_a_38;
              return(t);
            }
            t = assert_1(t, r_6);
          }
        }
        t = o_38;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm z_95 (ATerm))
{
  ATerm b_150 = NULL,c_150 = NULL;
  b_150 = t;
  a_150 :
  if(match_cons(b_150, sym_Strategies_1))
    {
      c_150 = ATgetArgument(b_150, 0);
      {
        ATerm f_150 = NULL,h_150 = NULL;
        ATerm g_150 = NULL;
        t = SSLgetAnnotations(not_null(b_150));
        {
          g_150 = t;
          if(((f_150 != NULL) && (f_150 != g_150)))
            _fail(g_150);
          else
            f_150 = g_150;
        }
        {
          t = not_null(c_150);
          {
            ATerm j_150 = NULL;
            t = z_95(t);
            {
              h_150 = t;
              {
                ATerm k_150 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(h_150)), not_null(f_150));
                {
                  k_150 = t;
                  if(((j_150 != NULL) && (j_150 != k_150)))
                    _fail(k_150);
                  else
                    j_150 = k_150;
                }
                t = not_null(j_150);
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
ATerm Signature_1 (ATerm t, ATerm a_96 (ATerm))
{
  ATerm u_150 = NULL,v_150 = NULL;
  u_150 = t;
  t_150 :
  if(match_cons(u_150, sym_Signature_1))
    {
      v_150 = ATgetArgument(u_150, 0);
      {
        ATerm y_150 = NULL,a_151 = NULL;
        ATerm z_150 = NULL;
        t = SSLgetAnnotations(not_null(u_150));
        {
          z_150 = t;
          if(((y_150 != NULL) && (y_150 != z_150)))
            _fail(z_150);
          else
            y_150 = z_150;
        }
        {
          t = not_null(v_150);
          {
            ATerm c_151 = NULL;
            t = a_96(t);
            {
              a_151 = t;
              {
                ATerm d_151 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(a_151)), not_null(y_150));
                {
                  d_151 = t;
                  if(((c_151 != NULL) && (c_151 != d_151)))
                    _fail(d_151);
                  else
                    c_151 = d_151;
                }
                t = not_null(c_151);
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
ATerm Specification_1 (ATerm t, ATerm e_96 (ATerm))
{
  ATerm n_151 = NULL,o_151 = NULL;
  n_151 = t;
  m_151 :
  if(match_cons(n_151, sym_Specification_1))
    {
      o_151 = ATgetArgument(n_151, 0);
      {
        ATerm r_151 = NULL,t_151 = NULL;
        ATerm s_151 = NULL;
        t = SSLgetAnnotations(not_null(n_151));
        {
          s_151 = t;
          if(((r_151 != NULL) && (r_151 != s_151)))
            _fail(s_151);
          else
            r_151 = s_151;
        }
        {
          t = not_null(o_151);
          {
            ATerm v_151 = NULL;
            t = e_96(t);
            {
              t_151 = t;
              {
                ATerm w_151 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(t_151)), not_null(r_151));
                {
                  w_151 = t;
                  if(((v_151 != NULL) && (v_151 != w_151)))
                    _fail(w_151);
                  else
                    v_151 = w_151;
                }
                t = not_null(v_151);
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
ATerm declare_inline_rules_0 (ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    ATerm t_6 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm u_6 (ATerm t)
    {
      ATerm v_6 (ATerm t)
      {
        ATerm w_6 (ATerm t)
        {
          t = map_1(t, declare_inline_rule_0);
          return(t);
        }
        t = Strategies_1(t, w_6);
        return(t);
      }
      t = Cons_2(t, v_6, Nil_0);
      return(t);
    }
    t = Cons_2(t, t_6, u_6);
    return(t);
  }
  t = Specification_1(t, s_6);
  return(t);
}
ATerm _2 (ATerm t, ATerm m_94 (ATerm), ATerm n_94 (ATerm))
{
  ATerm h_152 = NULL,i_152 = NULL,j_152 = NULL;
  h_152 = t;
  g_152 :
  if(match_cons(h_152, sym__2))
    {
      i_152 = ATgetArgument(h_152, 0);
      j_152 = ATgetArgument(h_152, 1);
      {
        ATerm n_152 = NULL,p_152 = NULL;
        ATerm o_152 = NULL;
        t = SSLgetAnnotations(not_null(h_152));
        {
          o_152 = t;
          if(((n_152 != NULL) && (n_152 != o_152)))
            _fail(o_152);
          else
            n_152 = o_152;
        }
        {
          t = not_null(i_152);
          {
            ATerm r_152 = NULL;
            t = m_94(t);
            {
              p_152 = t;
              {
                t = not_null(j_152);
                {
                  ATerm t_152 = NULL;
                  t = n_94(t);
                  {
                    r_152 = t;
                    {
                      ATerm u_152 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(p_152), not_null(r_152)), not_null(n_152));
                      {
                        u_152 = t;
                        if(((t_152 != NULL) && (t_152 != u_152)))
                          _fail(u_152);
                        else
                          t_152 = u_152;
                      }
                      t = not_null(t_152);
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
  ATerm q_38;
  q_38 = t;
  {
    ATerm b_153 = NULL;
    ATerm c_153 = NULL;
    t = term_z_37;
    {
      t = whoami_0(t);
      {
        c_153 = t;
        if(((b_153 != NULL) && (b_153 != c_153)))
          _fail(c_153);
        else
          b_153 = c_153;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_38), not_null(b_153)), term_r_38));
      {
        t = printnl_0(t);
        {
          t = term_t_38;
          t = exit_0(t);
        }
      }
    }
  }
  t = q_38;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm g_153 = NULL,h_153 = NULL,i_153 = NULL;
  g_153 = t;
  f_153 :
  if(match_cons(g_153, sym__2))
    {
      h_153 = ATgetArgument(g_153, 0);
      i_153 = ATgetArgument(g_153, 1);
      {
        ATerm u_38;
        u_38 = t;
        t = SSL_printnl(not_null(h_153), not_null(i_153));
        t = u_38;
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
  ATerm n_153 = NULL;
  n_153 = t;
  t = SSL_implode_string(not_null(n_153));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm v_38 = t;
  int w_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(w_38);
    }
  else
    {
      t = v_38;
      {
        ATerm s_153 = NULL,t_153 = NULL,u_153 = NULL;
        s_153 = t;
        r_153 :
        if(((ATgetType(s_153) == AT_LIST) && !(ATisEmpty(s_153))))
          {
            t_153 = ATgetFirst((ATermList) s_153);
            u_153 = (ATerm) ATgetNext((ATermList) s_153);
            {
              t = not_null(t_153);
              {
                ATerm x_6 (ATerm t)
                {
                  t = not_null(u_153);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_6);
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
  ATerm e_154 = NULL;
  ATerm g_154 = NULL;
  e_154 = t;
  {
    ATerm h_154 = NULL;
    ATerm j_154 = NULL,k_154 = NULL,l_154 = NULL;
    t = not_null(e_154);
    {
      h_154 = t;
      {
        t = SSL_explode_term(not_null(h_154));
        {
          j_154 = t;
          c_154 :
          if(match_cons(j_154, sym__2))
            {
              k_154 = ATgetArgument(j_154, 0);
              l_154 = ATgetArgument(j_154, 1);
              d_154 :
              if(match_string(k_154, ""))
                {
                  if(((g_154 != NULL) && (g_154 != l_154)))
                    _fail(l_154);
                  else
                    g_154 = l_154;
                }
              else
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
      t = not_null(g_154);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm a_116 (ATerm))
{
  ATerm p_154 (ATerm t)
  {
    ATerm x_38 = t;
    int y_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_154);
        ;
        LocalPopChoice(y_38);
      }
    else
      {
        t = x_38;
        {
          t = Nil_0(t);
          t = a_116(t);
        }
      }
    return(t);
  }
  t = p_154(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm s_154 = NULL,t_154 = NULL,u_154 = NULL;
  s_154 = t;
  r_154 :
  if(match_cons(s_154, sym__2))
    {
      t_154 = ATgetArgument(s_154, 0);
      u_154 = ATgetArgument(s_154, 1);
      {
        t = not_null(t_154);
        {
          ATerm y_6 (ATerm t)
          {
            t = not_null(u_154);
            return(t);
          }
          t = at_end_1(t, y_6);
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
  ATerm z_38 = t;
  int a_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(a_39);
    }
  else
    {
      t = z_38;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm z_154 = NULL;
  z_154 = t;
  t = SSL_explode_string(not_null(z_154));
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
  ATerm b_39 = t;
  int c_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(c_39);
    }
  else
    {
      t = b_39;
      {
        ATerm d_39 = t;
        int e_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, z_6);
            ;
            LocalPopChoice(e_39);
          }
        else
          {
            t = d_39;
            {
              ATerm i_155 = NULL,j_155 = NULL,k_155 = NULL;
              i_155 = t;
              h_155 :
              if(match_cons(i_155, sym_Path_1))
                {
                  j_155 = ATgetArgument(i_155, 0);
                  t = not_null(j_155);
                }
              else
                {
                  if(match_cons(i_155, sym_Var_1))
                    {
                      j_155 = ATgetArgument(i_155, 0);
                      {
                        t = not_null(j_155);
                        {
                          ATerm f_39 = t;
                          int g_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(g_39);
                            }
                          else
                            {
                              t = f_39;
                              {
                                ATerm a_7 (ATerm t)
                                {
                                  t = term_h_39;
                                  return(t);
                                }
                                t = debug_1(t, a_7);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(i_155, sym_Prefix_2))
                        {
                          j_155 = ATgetArgument(i_155, 0);
                          k_155 = ATgetArgument(i_155, 1);
                          {
                            ATerm p_155 = NULL,r_155 = NULL;
                            ATerm i_39;
                            i_39 = t;
                            {
                              ATerm q_155 = NULL;
                              t = not_null(j_155);
                              {
                                t = eval_config_0(t);
                                {
                                  q_155 = t;
                                  if(((p_155 != NULL) && (p_155 != q_155)))
                                    _fail(q_155);
                                  else
                                    p_155 = q_155;
                                }
                              }
                            }
                            t = i_39;
                            {
                              ATerm s_155 = NULL;
                              t = not_null(k_155);
                              {
                                t = eval_config_0(t);
                                {
                                  s_155 = t;
                                  if(((r_155 != NULL) && (r_155 != s_155)))
                                    _fail(s_155);
                                  else
                                    r_155 = s_155;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_155), not_null(r_155));
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
  ATerm a_156 = NULL;
  a_156 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_j_39, not_null(a_156));
    {
      t = table_get_0(t);
      {
        ATerm b_7 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm k_39;
            k_39 = t;
            {
              ATerm c_156 = NULL;
              ATerm d_156 = NULL;
              d_156 = t;
              if(((c_156 != NULL) && (c_156 != d_156)))
                _fail(d_156);
              else
                c_156 = d_156;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_j_39, not_null(a_156), not_null(c_156));
                t = table_put_0(t);
              }
            }
            t = k_39;
          }
          return(t);
        }
        t = try_1(t, b_7);
      }
    }
  }
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm k_156 = NULL,l_156 = NULL,m_156 = NULL,n_156 = NULL;
  k_156 = t;
  i_156 :
  if(match_cons(k_156, sym__2))
    {
      l_156 = ATgetArgument(k_156, 0);
      m_156 = ATgetArgument(k_156, 1);
      j_156 :
      if(match_cons(m_156, sym_Stream_1))
        {
          n_156 = ATgetArgument(m_156, 0);
          {
            ATerm q_156 = NULL;
            t = SSL_fputc(not_null(l_156), not_null(n_156));
            {
              ATerm r_156 = NULL;
              r_156 = t;
              if(((q_156 != NULL) && (q_156 != r_156)))
                _fail(r_156);
              else
                q_156 = r_156;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_156));
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
  ATerm y_156 = NULL,z_156 = NULL,a_157 = NULL,b_157 = NULL;
  y_156 = t;
  w_156 :
  if(match_cons(y_156, sym__2))
    {
      z_156 = ATgetArgument(y_156, 0);
      b_157 = ATgetArgument(y_156, 1);
      x_156 :
      if(match_cons(z_156, sym_Stream_1))
        {
          a_157 = ATgetArgument(z_156, 0);
          {
            ATerm e_157 = NULL;
            t = SSL_write_term_to_stream_text(not_null(a_157), not_null(b_157));
            {
              ATerm f_157 = NULL;
              f_157 = t;
              if(((e_157 != NULL) && (e_157 != f_157)))
                _fail(f_157);
              else
                e_157 = f_157;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_157));
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
  ATerm c_7 (ATerm t)
  {
    ATerm j_157 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm k_157 = NULL;
      k_157 = t;
      if(((j_157 != NULL) && (j_157 != k_157)))
        _fail(k_157);
      else
        j_157 = k_157;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_39, not_null(j_157));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, c_7);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm q_157 = NULL,r_157 = NULL,s_157 = NULL,t_157 = NULL;
  q_157 = t;
  o_157 :
  if(match_cons(q_157, sym__2))
    {
      r_157 = ATgetArgument(q_157, 0);
      t_157 = ATgetArgument(q_157, 1);
      p_157 :
      if(match_cons(r_157, sym_Stream_1))
        {
          s_157 = ATgetArgument(r_157, 0);
          {
            ATerm w_157 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(s_157), not_null(t_157));
            {
              ATerm x_157 = NULL;
              x_157 = t;
              if(((w_157 != NULL) && (w_157 != x_157)))
                _fail(x_157);
              else
                w_157 = x_157;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_157));
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
ATerm WriteToFile_1 (ATerm t, ATerm y_130 (ATerm))
{
  ATerm e_158 = NULL,f_158 = NULL,g_158 = NULL;
  e_158 = t;
  d_158 :
  if(match_cons(e_158, sym__2))
    {
      f_158 = ATgetArgument(e_158, 0);
      g_158 = ATgetArgument(e_158, 1);
      {
        ATerm j_158 = NULL,l_158 = NULL;
        t = not_null(f_158);
        {
          ATerm k_158 = NULL;
          k_158 = t;
          if(((j_158 != NULL) && (j_158 != k_158)))
            _fail(k_158);
          else
            j_158 = k_158;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_158), term_m_39);
            {
              t = open_stream_0(t);
              {
                ATerm m_158 = NULL;
                m_158 = t;
                if(((l_158 != NULL) && (l_158 != m_158)))
                  _fail(m_158);
                else
                  l_158 = m_158;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_158), not_null(g_158));
                  {
                    t = y_130(t);
                    {
                      t = fclose_0(t);
                      t = not_null(g_158);
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
  ATerm u_158 = NULL;
  ATerm n_39;
  n_39 = t;
  {
    ATerm d_7 (ATerm t)
    {
      ATerm o_39 = t;
      int p_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_7 (ATerm t)
          {
            ATerm v_158 = NULL,w_158 = NULL;
            v_158 = t;
            r_158 :
            if(match_cons(v_158, sym_Output_1))
              {
                w_158 = ATgetArgument(v_158, 0);
                if(((u_158 != NULL) && (u_158 != w_158)))
                  _fail(w_158);
                else
                  u_158 = w_158;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, e_7);
          ;
          LocalPopChoice(p_39);
        }
      else
        {
          t = o_39;
          {
            ATerm x_158 = NULL;
            t = term_q_39;
            {
              x_158 = t;
              if(((u_158 != NULL) && (u_158 != x_158)))
                _fail(x_158);
              else
                u_158 = x_158;
            }
          }
        }
      return(t);
    }
    t = _2(t, d_7, _id);
  }
  t = n_39;
  {
    ATerm f_7 (ATerm t)
    {
      ATerm g_7 (ATerm t)
      {
        t = not_null(u_158);
        return(t);
      }
      t = split_2(t, g_7, _id);
      return(t);
    }
    t = _2(t, _id, f_7);
    {
      ATerm r_39 = t;
      int s_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_7 (ATerm t)
          {
            ATerm i_7 (ATerm t)
            {
              ATerm y_158 = NULL;
              y_158 = t;
              t_158 :
              if(!(match_cons(y_158, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, i_7);
            return(t);
          }
          t = _2(t, h_7, WriteToBinaryFile_0);
          ;
          LocalPopChoice(s_39);
        }
      else
        {
          t = r_39;
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
ATerm apply_strategy_1 (ATerm t, ATerm k_132 (ATerm))
{
  ATerm e_159 = NULL,g_159 = NULL,h_159 = NULL,i_159 = NULL;
  ATerm t_39;
  t_39 = t;
  t = dtime_0(t);
  t = t_39;
  {
    t = k_132(t);
    {
      ATerm u_39;
      u_39 = t;
      {
        ATerm f_159 = NULL;
        t = dtime_0(t);
        {
          f_159 = t;
          if(((e_159 != NULL) && (e_159 != f_159)))
            _fail(f_159);
          else
            e_159 = f_159;
        }
      }
      t = u_39;
      {
        g_159 = t;
        d_159 :
        if(match_cons(g_159, sym__2))
          {
            h_159 = ATgetArgument(g_159, 0);
            i_159 = ATgetArgument(g_159, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_159)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(e_159))), not_null(i_159));
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
  ATerm q_159 = NULL,r_159 = NULL;
  ATerm x_159 (ATerm t)
  {
    t = SSL_fclose(not_null(r_159));
    return(t);
  }
  r_159 = t;
  p_159 :
  if(match_cons(r_159, sym_Stream_1))
    {
      q_159 = ATgetArgument(r_159, 0);
      {
        ATerm v_39 = t;
        int w_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(q_159));
            ;
            LocalPopChoice(w_39);
          }
        else
          {
            t = v_39;
            t = x_159(t);
          }
      }
    }
  else
    {
      t = x_159(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm a_160 = NULL,b_160 = NULL;
  a_160 = t;
  z_159 :
  if(match_cons(a_160, sym_Stream_1))
    {
      b_160 = ATgetArgument(a_160, 0);
      t = SSL_read_term_from_stream(not_null(b_160));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm k_130 (ATerm))
{
  ATerm x_39;
  x_39 = t;
  {
    ATerm g_160 = NULL,i_160 = NULL;
    ATerm y_39;
    y_39 = t;
    {
      ATerm h_160 = NULL;
      t = k_130(t);
      {
        h_160 = t;
        if(((g_160 != NULL) && (g_160 != h_160)))
          _fail(h_160);
        else
          g_160 = h_160;
      }
    }
    t = y_39;
    {
      ATerm j_160 = NULL;
      j_160 = t;
      if(((i_160 != NULL) && (i_160 != j_160)))
        _fail(j_160);
      else
        i_160 = j_160;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_160)), not_null(g_160)));
        t = printnl_0(t);
      }
    }
  }
  t = x_39;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm p_160 = NULL,q_160 = NULL,r_160 = NULL;
  p_160 = t;
  o_160 :
  if(match_cons(p_160, sym__2))
    {
      q_160 = ATgetArgument(p_160, 0);
      r_160 = ATgetArgument(p_160, 1);
      {
        ATerm u_160 = NULL;
        t = SSL_fopen(not_null(q_160), not_null(r_160));
        {
          ATerm v_160 = NULL;
          v_160 = t;
          if(((u_160 != NULL) && (u_160 != v_160)))
            _fail(v_160);
          else
            u_160 = v_160;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_160));
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
  ATerm z_160 = NULL;
  z_160 = t;
  t = SSL_is_string(not_null(z_160));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm d_161 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm f_161 = NULL;
    f_161 = t;
    if(((d_161 != NULL) && (d_161 != f_161)))
      _fail(f_161);
    else
      d_161 = f_161;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_161));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm i_161 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm j_161 = NULL;
    j_161 = t;
    if(((i_161 != NULL) && (i_161 != j_161)))
      _fail(j_161);
    else
      i_161 = j_161;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_161));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm n_161 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm o_161 = NULL;
    o_161 = t;
    if(((n_161 != NULL) && (n_161 != o_161)))
      _fail(o_161);
    else
      n_161 = o_161;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_161));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm u_161 = NULL;
  u_161 = t;
  t_161 :
  if(match_cons(u_161, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(u_161, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(u_161, sym_stdin_0))
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
  ATerm e_162 = NULL;
  ATerm g_162 = NULL,h_162 = NULL;
  e_162 = t;
  {
    ATerm i_162 = NULL;
    ATerm k_162 = NULL,l_162 = NULL,m_162 = NULL,o_162 = NULL,p_162 = NULL;
    t = not_null(e_162);
    {
      i_162 = t;
      {
        t = SSL_explode_term(not_null(i_162));
        {
          k_162 = t;
          b_162 :
          if(match_cons(k_162, sym__2))
            {
              l_162 = ATgetArgument(k_162, 0);
              m_162 = ATgetArgument(k_162, 1);
              c_162 :
              if(match_string(l_162, ""))
                {
                  d_162 :
                  if(((ATgetType(m_162) == AT_LIST) && !(ATisEmpty(m_162))))
                    {
                      o_162 = ATgetFirst((ATermList) m_162);
                      p_162 = (ATerm) ATgetNext((ATermList) m_162);
                      {
                        if(((h_162 != NULL) && (h_162 != o_162)))
                          _fail(o_162);
                        else
                          h_162 = o_162;
                        if(((g_162 != NULL) && (g_162 != p_162)))
                          _fail(p_162);
                        else
                          g_162 = p_162;
                      }
                    }
                  else
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
    t = not_null(h_162);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm x_162 = NULL,y_162 = NULL,z_162 = NULL;
  x_162 = t;
  w_162 :
  if(match_cons(x_162, sym__2))
    {
      y_162 = ATgetArgument(x_162, 0);
      z_162 = ATgetArgument(x_162, 1);
      {
        ATerm z_39 = t;
        int a_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(a_40);
          }
        else
          {
            t = z_39;
            {
              ATerm b_40 = t;
              int c_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_7 (ATerm t)
                  {
                    ATerm a_163 = NULL,b_163 = NULL;
                    a_163 = t;
                    v_162 :
                    if(match_cons(a_163, sym_Path_1))
                      {
                        b_163 = ATgetArgument(a_163, 0);
                        t = not_null(b_163);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, j_7, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(c_40);
                }
              else
                {
                  t = b_40;
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
  ATerm k_163 = NULL;
  ATerm d_40 = t;
  int e_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_163 = NULL;
      ATerm j_163 = NULL;
      j_163 = t;
      if(((i_163 != NULL) && (i_163 != j_163)))
        _fail(j_163);
      else
        i_163 = j_163;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_163), term_f_40);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(e_40);
    }
  else
    {
      t = d_40;
      {
        ATerm k_7 (ATerm t)
        {
          t = term_g_40;
          return(t);
        }
        t = debug_1(t, k_7);
        _fail(t);
      }
    }
  {
    ATerm h_40;
    h_40 = t;
    {
      ATerm l_163 = NULL;
      t = read_from_stream_0(t);
      {
        l_163 = t;
        if(((k_163 != NULL) && (k_163 != l_163)))
          _fail(l_163);
        else
          k_163 = l_163;
      }
    }
    t = h_40;
    {
      t = fclose_0(t);
      t = not_null(k_163);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm m_114 (ATerm), ATerm n_114 (ATerm))
{
  ATerm q_163 = NULL,s_163 = NULL;
  ATerm i_40;
  i_40 = t;
  {
    ATerm r_163 = NULL;
    t = m_114(t);
    {
      r_163 = t;
      if(((q_163 != NULL) && (q_163 != r_163)))
        _fail(r_163);
      else
        q_163 = r_163;
    }
  }
  t = i_40;
  {
    ATerm t_163 = NULL;
    t = n_114(t);
    {
      t_163 = t;
      if(((s_163 != NULL) && (s_163 != t_163)))
        _fail(t_163);
      else
        s_163 = t_163;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_163), not_null(s_163));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm z_163 = NULL;
  ATerm j_40;
  j_40 = t;
  {
    ATerm k_40 = t;
    int l_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_7 (ATerm t)
        {
          ATerm a_164 = NULL,b_164 = NULL;
          a_164 = t;
          x_163 :
          if(match_cons(a_164, sym_Input_1))
            {
              b_164 = ATgetArgument(a_164, 0);
              if(((z_163 != NULL) && (z_163 != b_164)))
                _fail(b_164);
              else
                z_163 = b_164;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, l_7);
        ;
        LocalPopChoice(l_40);
      }
    else
      {
        t = k_40;
        {
          ATerm c_164 = NULL;
          t = term_m_40;
          {
            c_164 = t;
            if(((z_163 != NULL) && (z_163 != c_164)))
              _fail(c_164);
            else
              z_163 = c_164;
          }
        }
      }
  }
  t = j_40;
  {
    ATerm m_7 (ATerm t)
    {
      t = not_null(z_163);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, m_7);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm n_7 (ATerm t)
  {
    ATerm h_164 = NULL;
    h_164 = t;
    f_164 :
    if(!(match_string(h_164, "-k")))
      {
        if(!(match_string(h_164, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_7 (ATerm t)
  {
    ATerm n_40;
    n_40 = t;
    {
      ATerm i_164 = NULL;
      ATerm j_164 = NULL;
      t = string_to_int_0(t);
      {
        j_164 = t;
        if(((i_164 != NULL) && (i_164 != j_164)))
          _fail(j_164);
        else
          i_164 = j_164;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_40, not_null(i_164));
        t = set_config_0(t);
      }
    }
    t = n_40;
    return(t);
  }
  ATerm p_7 (ATerm t)
  {
    t = term_p_40;
    return(t);
  }
  t = ArgOption_3(t, n_7, o_7, p_7);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_164 = NULL;
  m_164 = t;
  t = SSL_string_to_int(not_null(m_164));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm q_40 = t;
  int r_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_7 (ATerm t)
      {
        ATerm u_164 = NULL;
        u_164 = t;
        p_164 :
        if(!(match_string(u_164, "-S")))
          {
            if(!(match_string(u_164, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_7 (ATerm t)
      {
        t = term_t_40;
        t = set_config_0(t);
        t = term_u_40;
        return(t);
      }
      ATerm s_7 (ATerm t)
      {
        t = term_w_40;
        return(t);
      }
      t = Option_3(t, q_7, r_7, s_7);
      ;
      LocalPopChoice(r_40);
    }
  else
    {
      t = q_40;
      {
        ATerm x_40 = t;
        int y_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_7 (ATerm t)
            {
              ATerm v_164 = NULL;
              v_164 = t;
              q_164 :
              if(!(match_string(v_164, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm u_7 (ATerm t)
            {
              ATerm y_164 = NULL;
              ATerm z_40;
              z_40 = t;
              {
                ATerm w_164 = NULL;
                ATerm x_164 = NULL;
                t = string_to_int_0(t);
                {
                  x_164 = t;
                  if(((w_164 != NULL) && (w_164 != x_164)))
                    _fail(x_164);
                  else
                    w_164 = x_164;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_9, not_null(w_164));
                  t = set_config_0(t);
                }
              }
              t = z_40;
              {
                ATerm z_164 = NULL;
                z_164 = t;
                if(((y_164 != NULL) && (y_164 != z_164)))
                  _fail(z_164);
                else
                  y_164 = z_164;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(y_164));
              }
              return(t);
            }
            ATerm v_7 (ATerm t)
            {
              t = term_a_41;
              return(t);
            }
            t = ArgOption_3(t, t_7, u_7, v_7);
            ;
            LocalPopChoice(y_40);
          }
        else
          {
            t = x_40;
            {
              ATerm x_7 (ATerm t)
              {
                ATerm a_165 = NULL;
                a_165 = t;
                t_164 :
                if(!(match_string(a_165, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm y_7 (ATerm t)
              {
                t = term_c_41;
                t = set_config_0(t);
                t = term_d_41;
                return(t);
              }
              ATerm z_7 (ATerm t)
              {
                t = term_e_41;
                return(t);
              }
              t = Option_3(t, x_7, y_7, z_7);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm g_41 = t;
  int h_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(h_41);
    }
  else
    {
      t = g_41;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm a_8 (ATerm t)
  {
    ATerm g_165 = NULL;
    g_165 = t;
    d_165 :
    if(!(match_string(g_165, "-o")))
      {
        if(!(match_string(g_165, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_8 (ATerm t)
  {
    ATerm j_165 = NULL;
    ATerm i_41;
    i_41 = t;
    {
      ATerm h_165 = NULL;
      ATerm i_165 = NULL;
      i_165 = t;
      if(((h_165 != NULL) && (h_165 != i_165)))
        _fail(i_165);
      else
        h_165 = i_165;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_41, not_null(h_165));
        t = set_config_0(t);
      }
    }
    t = i_41;
    {
      ATerm k_165 = NULL;
      k_165 = t;
      if(((j_165 != NULL) && (j_165 != k_165)))
        _fail(k_165);
      else
        j_165 = k_165;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_165));
    }
    return(t);
  }
  ATerm c_8 (ATerm t)
  {
    t = term_k_41;
    return(t);
  }
  t = ArgOption_3(t, a_8, b_8, c_8);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm l_41 = t;
  int m_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(m_41);
    }
  else
    {
      t = l_41;
      {
        ATerm d_8 (ATerm t)
        {
          ATerm o_165 = NULL;
          o_165 = t;
          n_165 :
          if(!(match_string(o_165, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm e_8 (ATerm t)
        {
          t = term_o_41;
          t = set_config_0(t);
          t = term_p_41;
          return(t);
        }
        ATerm f_8 (ATerm t)
        {
          t = term_q_41;
          return(t);
        }
        t = Option_3(t, d_8, e_8, f_8);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm u_165 = NULL,v_165 = NULL,w_165 = NULL,x_165 = NULL,y_165 = NULL;
  u_165 = t;
  s_165 :
  if(match_string(u_165, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(u_165) == AT_LIST) && !(ATisEmpty(u_165))))
        {
          v_165 = ATgetFirst((ATermList) u_165);
          w_165 = (ATerm) ATgetNext((ATermList) u_165);
          t_165 :
          if(((ATgetType(w_165) == AT_LIST) && !(ATisEmpty(w_165))))
            {
              x_165 = ATgetFirst((ATermList) w_165);
              y_165 = (ATerm) ATgetNext((ATermList) w_165);
              {
                ATerm c_166 = NULL;
                ATerm r_41;
                r_41 = t;
                {
                  t = not_null(v_165);
                  t = k_0(t);
                }
                t = r_41;
                {
                  ATerm d_166 = NULL;
                  t = not_null(x_165);
                  {
                    t = m_0(t);
                    {
                      d_166 = t;
                      if(((c_166 != NULL) && (c_166 != d_166)))
                        _fail(d_166);
                      else
                        c_166 = d_166;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_165)), not_null(c_166));
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
  ATerm g_8 (ATerm t)
  {
    ATerm k_166 = NULL;
    k_166 = t;
    h_166 :
    if(!(match_string(k_166, "-i")))
      {
        if(!(match_string(k_166, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_8 (ATerm t)
  {
    ATerm n_166 = NULL;
    ATerm u_41;
    u_41 = t;
    {
      ATerm l_166 = NULL;
      ATerm m_166 = NULL;
      m_166 = t;
      if(((l_166 != NULL) && (l_166 != m_166)))
        _fail(m_166);
      else
        l_166 = m_166;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_41, not_null(l_166));
        t = set_config_0(t);
      }
    }
    t = u_41;
    {
      ATerm o_166 = NULL;
      o_166 = t;
      if(((n_166 != NULL) && (n_166 != o_166)))
        _fail(o_166);
      else
        n_166 = o_166;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_166));
    }
    return(t);
  }
  ATerm i_8 (ATerm t)
  {
    t = term_w_41;
    return(t);
  }
  t = ArgOption_3(t, g_8, h_8, i_8);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm z_41 = t;
  int c_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(c_42);
    }
  else
    {
      t = z_41;
      {
        ATerm g_42 = t;
        int h_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(h_42);
          }
        else
          {
            t = g_42;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm s_166 = NULL;
  t = report_run_time_0(t);
  {
    ATerm t_166 = NULL;
    t = term_z_37;
    {
      t = whoami_0(t);
      {
        t_166 = t;
        if(((s_166 != NULL) && (s_166 != t_166)))
          _fail(t_166);
        else
          s_166 = t_166;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATinsert(ATinsert(ATempty, term_j_42), not_null(s_166)));
      {
        t = printnl_0(t);
        {
          t = term_t_38;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_k_42;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm w_166 = NULL;
  w_166 = t;
  t = SSL_TicksToSeconds(not_null(w_166));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_167 = NULL,c_167 = NULL,d_167 = NULL;
  b_167 = t;
  a_167 :
  if(match_cons(b_167, sym__2))
    {
      c_167 = ATgetArgument(b_167, 0);
      d_167 = ATgetArgument(b_167, 1);
      {
        ATerm l_42 = t;
        int m_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(c_167), not_null(d_167));
            ;
            LocalPopChoice(m_42);
          }
        else
          {
            t = l_42;
            t = SSL_addr(not_null(c_167), not_null(d_167));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm a_122 (ATerm), ATerm b_122 (ATerm))
{
  ATerm r_42 = t;
  int s_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_122(t);
      ;
      LocalPopChoice(s_42);
    }
  else
    {
      t = r_42;
      {
        ATerm k_167 = NULL,l_167 = NULL,m_167 = NULL;
        k_167 = t;
        j_167 :
        if(((ATgetType(k_167) == AT_LIST) && !(ATisEmpty(k_167))))
          {
            l_167 = ATgetFirst((ATermList) k_167);
            m_167 = (ATerm) ATgetNext((ATermList) k_167);
            {
              ATerm p_167 = NULL;
              ATerm q_167 = NULL;
              t = not_null(m_167);
              {
                t = foldr_2(t, a_122, b_122);
                {
                  q_167 = t;
                  if(((p_167 != NULL) && (p_167 != q_167)))
                    _fail(q_167);
                  else
                    p_167 = q_167;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_167), not_null(p_167));
                t = b_122(t);
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
ATerm crush_2 (ATerm t, ATerm y_119 (ATerm), ATerm z_119 (ATerm))
{
  ATerm x_167 = NULL;
  ATerm z_167 = NULL;
  x_167 = t;
  {
    ATerm a_168 = NULL;
    ATerm c_168 = NULL,d_168 = NULL,e_168 = NULL;
    t = not_null(x_167);
    {
      a_168 = t;
      {
        t = SSL_explode_term(not_null(a_168));
        {
          c_168 = t;
          w_167 :
          if(match_cons(c_168, sym__2))
            {
              d_168 = ATgetArgument(c_168, 0);
              e_168 = ATgetArgument(c_168, 1);
              if(((z_167 != NULL) && (z_167 != e_168)))
                _fail(e_168);
              else
                z_167 = e_168;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_167);
      t = foldr_2(t, y_119, z_119);
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
    ATerm j_8 (ATerm t)
    {
      t = term_s_40;
      return(t);
    }
    t = crush_2(t, j_8, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_168 = NULL,l_168 = NULL,m_168 = NULL;
  k_168 = t;
  j_168 :
  if(match_cons(k_168, sym__2))
    {
      l_168 = ATgetArgument(k_168, 0);
      m_168 = ATgetArgument(k_168, 1);
      {
        ATerm v_42;
        v_42 = t;
        {
          ATerm w_42 = t;
          int x_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_168), not_null(m_168));
              ;
              LocalPopChoice(x_42);
            }
          else
            {
              t = w_42;
              t = SSL_gtr(not_null(l_168), not_null(m_168));
            }
        }
        t = v_42;
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
  ATerm s_168 = NULL;
  ATerm y_42 = t;
  int z_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_168 = NULL,u_168 = NULL,v_168 = NULL;
      t_168 = t;
      r_168 :
      if(match_cons(t_168, sym__2))
        {
          u_168 = ATgetArgument(t_168, 0);
          v_168 = ATgetArgument(t_168, 1);
          {
            if(((s_168 != NULL) && (s_168 != u_168)))
              _fail(u_168);
            else
              s_168 = u_168;
            if(((s_168 != NULL) && (s_168 != v_168)))
              _fail(v_168);
            else
              s_168 = v_168;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(z_42);
    }
  else
    {
      t = y_42;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm q_140 (ATerm))
{
  ATerm l_8 (ATerm t)
  {
    ATerm b_43;
    b_43 = t;
    {
      ATerm y_168 = NULL;
      ATerm z_168 = NULL;
      t = term_z_9;
      {
        t = get_config_0(t);
        {
          z_168 = t;
          if(((y_168 != NULL) && (y_168 != z_168)))
            _fail(z_168);
          else
            y_168 = z_168;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_168), term_t_38);
        t = geq_0(t);
      }
    }
    t = b_43;
    t = q_140(t);
    return(t);
  }
  t = try_1(t, l_8);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm m_8 (ATerm t)
  {
    ATerm d_169 = NULL,f_169 = NULL;
    ATerm c_43;
    c_43 = t;
    {
      ATerm e_169 = NULL;
      t = run_time_0(t);
      {
        e_169 = t;
        if(((d_169 != NULL) && (d_169 != e_169)))
          _fail(e_169);
        else
          d_169 = e_169;
      }
    }
    t = c_43;
    {
      ATerm g_169 = NULL;
      t = term_z_37;
      {
        t = whoami_0(t);
        {
          g_169 = t;
          if(((f_169 != NULL) && (f_169 != g_169)))
            _fail(g_169);
          else
            f_169 = g_169;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_43), not_null(d_169)), term_d_43), not_null(f_169)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, m_8);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_s_40;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_169 = NULL;
  n_169 = t;
  m_169 :
  if(match_cons(n_169, sym_Version_0))
    {
      ATerm p_169 = NULL,r_169 = NULL;
      ATerm f_43;
      f_43 = t;
      {
        ATerm q_169 = NULL;
        t = SSLgetAnnotations(not_null(n_169));
        {
          q_169 = t;
          if(((p_169 != NULL) && (p_169 != q_169)))
            _fail(q_169);
          else
            p_169 = q_169;
        }
      }
      t = f_43;
      {
        ATerm s_169 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(p_169));
        {
          s_169 = t;
          if(((r_169 != NULL) && (r_169 != s_169)))
            _fail(s_169);
          else
            r_169 = s_169;
        }
        t = not_null(r_169);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm i_133 (ATerm))
{
  ATerm o_43 = t;
  int p_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_43;
      t = get_config_0(t);
      ;
      LocalPopChoice(p_43);
    }
  else
    {
      t = o_43;
      {
        ATerm n_8 (ATerm t)
        {
          ATerm r_43 = t;
          int s_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(s_43);
            }
          else
            {
              t = r_43;
              {
                ATerm t_43 = t;
                int u_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(u_43);
                  }
                else
                  {
                    t = t_43;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, n_8);
      }
    }
  t = i_133(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_169 = NULL;
  x_169 = t;
  t = SSL_table_create(not_null(x_169));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_170 = NULL;
  b_170 = t;
  {
    ATerm v_43;
    v_43 = t;
    {
      t = term_w_43;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_43, term_x_43, not_null(b_170));
          t = table_put_0(t);
        }
      }
    }
    t = v_43;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm f_170 = NULL;
  f_170 = t;
  t = SSL_table_destroy(not_null(f_170));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_170 = NULL;
  j_170 = t;
  t = SSL_exit(not_null(j_170));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm l_136 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_115 (ATerm))
{
  ATerm m_170 (ATerm t)
  {
    ATerm y_43 = t;
    int d_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(d_44);
      }
    else
      {
        t = y_43;
        t = Cons_2(t, k_115, m_170);
      }
    return(t);
  }
  t = m_170(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm t_170 = NULL,u_170 = NULL,v_170 = NULL;
  v_170 = t;
  s_170 :
  if(((ATgetType(v_170) == AT_LIST) && !(ATisEmpty(v_170))))
    {
      t_170 = ATgetFirst((ATermList) v_170);
      u_170 = (ATerm) ATgetNext((ATermList) v_170);
      {
        ATerm y_170 = NULL;
        t = not_null(u_170);
        {
          ATerm e_44;
          e_44 = t;
          {
            ATerm z_170 = NULL,b_171 = NULL,d_171 = NULL;
            ATerm f_44;
            f_44 = t;
            {
              ATerm a_171 = NULL;
              t = i_0(t);
              {
                a_171 = t;
                if(((z_170 != NULL) && (z_170 != a_171)))
                  _fail(a_171);
                else
                  z_170 = a_171;
              }
            }
            t = f_44;
            {
              ATerm c_171 = NULL;
              t = not_null(t_170);
              {
                t = g_0(t);
                {
                  c_171 = t;
                  if(((b_171 != NULL) && (b_171 != c_171)))
                    _fail(c_171);
                  else
                    b_171 = c_171;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(z_170)), not_null(b_171));
                {
                  d_171 = t;
                  if(((y_170 != NULL) && (y_170 != d_171)))
                    _fail(d_171);
                  else
                    y_170 = d_171;
                }
              }
            }
          }
          t = e_44;
          {
            ATerm o_8 (ATerm t)
            {
              t = not_null(y_170);
              return(t);
            }
            t = reverse_acc_2(t, g_0, o_8);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(v_170) == AT_LIST) && ATisEmpty(v_170)))
        {
          {
            t = term_z_37;
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
  ATerm p_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, p_8);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_136 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_110 (ATerm))
{
  ATerm o_171 = NULL,p_171 = NULL;
  o_171 = t;
  n_171 :
  if(match_cons(o_171, sym_Program_1))
    {
      p_171 = ATgetArgument(o_171, 0);
      {
        ATerm s_171 = NULL,u_171 = NULL;
        ATerm t_171 = NULL;
        t = SSLgetAnnotations(not_null(o_171));
        {
          t_171 = t;
          if(((s_171 != NULL) && (s_171 != t_171)))
            _fail(t_171);
          else
            s_171 = t_171;
        }
        {
          t = not_null(p_171);
          {
            ATerm w_171 = NULL;
            t = d_110(t);
            {
              u_171 = t;
              {
                ATerm x_171 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(u_171)), not_null(s_171));
                {
                  x_171 = t;
                  if(((w_171 != NULL) && (w_171 != x_171)))
                    _fail(x_171);
                  else
                    w_171 = x_171;
                }
                t = not_null(w_171);
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
  ATerm h_172 = NULL;
  ATerm g_44 = t;
  int h_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_172 = NULL;
      t = term_k_42;
      {
        t = get_config_0(t);
        {
          i_172 = t;
          if(((h_172 != NULL) && (h_172 != i_172)))
            _fail(i_172);
          else
            h_172 = i_172;
        }
      }
      ;
      LocalPopChoice(h_44);
    }
  else
    {
      t = g_44;
      {
        ATerm q_8 (ATerm t)
        {
          ATerm r_8 (ATerm t)
          {
            ATerm j_172 = NULL;
            j_172 = t;
            if(((h_172 != NULL) && (h_172 != j_172)))
              _fail(j_172);
            else
              h_172 = j_172;
            return(t);
          }
          t = Program_1(t, r_8);
          return(t);
        }
        t = option_defined_1(t, q_8);
      }
    }
  {
    ATerm s_8 (ATerm t)
    {
      ATerm t_8 (ATerm t)
      {
        t = not_null(h_172);
        return(t);
      }
      t = short_description_1(t, t_8);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, s_8);
    {
      t = term_n_44;
      {
        t = echo_0(t);
        {
          t = term_s_44;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm u_8 (ATerm t)
                {
                  ATerm k_172 = NULL;
                  ATerm l_172 = NULL;
                  l_172 = t;
                  if(((k_172 != NULL) && (k_172 != l_172)))
                    _fail(l_172);
                  else
                    k_172 = l_172;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_172)), term_u_44);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, u_8);
                {
                  ATerm v_8 (ATerm t)
                  {
                    ATerm m_172 = NULL;
                    ATerm n_172 = NULL;
                    ATerm w_8 (ATerm t)
                    {
                      t = not_null(h_172);
                      return(t);
                    }
                    t = long_description_1(t, w_8);
                    {
                      n_172 = t;
                      if(((m_172 != NULL) && (m_172 != n_172)))
                        _fail(n_172);
                      else
                        m_172 = n_172;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(m_172)), term_v_44);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, v_8);
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
  ATerm w_44 = t;
  int x_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(x_44);
    }
  else
    {
      t = w_44;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_110 (ATerm))
{
  ATerm x_172 = NULL,y_172 = NULL;
  x_172 = t;
  w_172 :
  if(match_cons(x_172, sym_Undefined_1))
    {
      y_172 = ATgetArgument(x_172, 0);
      {
        ATerm b_173 = NULL,d_173 = NULL;
        ATerm c_173 = NULL;
        t = SSLgetAnnotations(not_null(x_172));
        {
          c_173 = t;
          if(((b_173 != NULL) && (b_173 != c_173)))
            _fail(c_173);
          else
            b_173 = c_173;
        }
        {
          t = not_null(y_172);
          {
            ATerm f_173 = NULL;
            t = e_110(t);
            {
              d_173 = t;
              {
                ATerm g_173 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(d_173)), not_null(b_173));
                {
                  g_173 = t;
                  if(((f_173 != NULL) && (f_173 != g_173)))
                    _fail(g_173);
                  else
                    f_173 = g_173;
                }
                t = not_null(f_173);
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
ATerm fetch_1 (ATerm t, ATerm u_115 (ATerm))
{
  ATerm l_173 (ATerm t)
  {
    ATerm y_44 = t;
    int z_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, u_115, _id);
        ;
        LocalPopChoice(z_44);
      }
    else
      {
        t = y_44;
        t = Cons_2(t, _id, l_173);
      }
    return(t);
  }
  t = l_173(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_135 (ATerm))
{
  t = fetch_1(t, k_135);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm n_173 = NULL,o_173 = NULL,p_173 = NULL;
  n_173 = t;
  m_173 :
  if(((ATgetType(n_173) == AT_LIST) && ATisEmpty(n_173)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(n_173) == AT_LIST) && !(ATisEmpty(n_173))))
        {
          o_173 = ATgetFirst((ATermList) n_173);
          p_173 = (ATerm) ATgetNext((ATermList) n_173);
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
  ATerm a_45;
  a_45 = t;
  {
    ATerm s_173 = NULL;
    ATerm v_173 = NULL;
    ATerm d_45 = t;
    int e_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(e_45);
      }
    else
      {
        t = d_45;
        {
          ATerm t_173 = NULL;
          ATerm u_173 = NULL;
          u_173 = t;
          if(((t_173 != NULL) && (t_173 != u_173)))
            _fail(u_173);
          else
            t_173 = u_173;
          t = (ATerm) ATinsert(ATempty, not_null(t_173));
        }
      }
    {
      v_173 = t;
      if(((s_173 != NULL) && (s_173 != v_173)))
        _fail(v_173);
      else
        s_173 = v_173;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_39, not_null(s_173));
      t = printnl_0(t);
    }
  }
  t = a_45;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_k_42;
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
  ATerm f_45 = t;
  int g_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(g_45);
    }
  else
    {
      t = f_45;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm c_174 = NULL;
  c_174 = t;
  b_174 :
  if(match_cons(c_174, sym_Help_0))
    {
      ATerm e_174 = NULL,g_174 = NULL;
      ATerm h_45;
      h_45 = t;
      {
        ATerm f_174 = NULL;
        t = SSLgetAnnotations(not_null(c_174));
        {
          f_174 = t;
          if(((e_174 != NULL) && (e_174 != f_174)))
            _fail(f_174);
          else
            e_174 = f_174;
        }
      }
      t = h_45;
      {
        ATerm h_174 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(e_174));
        {
          h_174 = t;
          if(((g_174 != NULL) && (g_174 != h_174)))
            _fail(h_174);
          else
            g_174 = h_174;
        }
        t = not_null(g_174);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm s_113 (ATerm))
{
  ATerm i_45 = t;
  int x_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_113(t);
      ;
      LocalPopChoice(x_45);
    }
  else
    {
      t = i_45;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm y_45 = t;
  int z_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_8 (ATerm t)
      {
        ATerm n_174 = NULL;
        n_174 = t;
        l_174 :
        if(!(match_string(n_174, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm y_8 (ATerm t)
      {
        t = term_h_46;
        t = set_config_0(t);
        return(t);
      }
      ATerm z_8 (ATerm t)
      {
        t = term_i_46;
        return(t);
      }
      t = Option_3(t, x_8, y_8, z_8);
      ;
      LocalPopChoice(z_45);
    }
  else
    {
      t = y_45;
      {
        ATerm a_9 (ATerm t)
        {
          ATerm o_174 = NULL;
          o_174 = t;
          m_174 :
          if(!(match_string(o_174, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm b_9 (ATerm t)
        {
          t = term_h_46;
          {
            t = set_config_0(t);
            {
              t = term_k_46;
              t = set_config_0(t);
            }
          }
          t = term_l_46;
          return(t);
        }
        ATerm c_9 (ATerm t)
        {
          t = term_m_46;
          return(t);
        }
        t = Option_3(t, a_9, b_9, c_9);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm r_174 = NULL,s_174 = NULL,t_174 = NULL;
  r_174 = t;
  q_174 :
  if(match_cons(r_174, sym__2))
    {
      s_174 = ATgetArgument(r_174, 0);
      t_174 = ATgetArgument(r_174, 1);
      t = SSL_table_get(not_null(s_174), not_null(t_174));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm a_175 = NULL,b_175 = NULL,c_175 = NULL,d_175 = NULL;
  a_175 = t;
  z_174 :
  if(match_cons(a_175, sym__3))
    {
      b_175 = ATgetArgument(a_175, 0);
      c_175 = ATgetArgument(a_175, 1);
      d_175 = ATgetArgument(a_175, 2);
      {
        ATerm n_46;
        n_46 = t;
        {
          ATerm h_175 = NULL;
          ATerm i_175 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_175), not_null(c_175));
          {
            ATerm o_46 = t;
            int r_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(r_46);
              }
            else
              {
                t = o_46;
                t = (ATerm) ATempty;
              }
            {
              i_175 = t;
              if(((h_175 != NULL) && (h_175 != i_175)))
                _fail(i_175);
              else
                h_175 = i_175;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_175), not_null(c_175), (ATerm) ATinsert(CheckATermList(not_null(h_175)), not_null(d_175)));
            t = table_put_0(t);
          }
        }
        t = n_46;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_136 (ATerm))
{
  ATerm m_175 = NULL;
  ATerm n_175 = NULL;
  t = term_z_37;
  {
    t = p_136(t);
    {
      n_175 = t;
      if(((m_175 != NULL) && (m_175 != n_175)))
        _fail(n_175);
      else
        m_175 = n_175;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_44, term_p_44, not_null(m_175));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm t_175 = NULL,u_175 = NULL,w_175 = NULL;
  t_175 = t;
  s_175 :
  if(match_string(t_175, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(t_175) == AT_LIST) && !(ATisEmpty(t_175))))
        {
          u_175 = ATgetFirst((ATermList) t_175);
          w_175 = (ATerm) ATgetNext((ATermList) t_175);
          {
            ATerm z_175 = NULL;
            ATerm s_46;
            s_46 = t;
            {
              t = not_null(u_175);
              t = a_0(t);
            }
            t = s_46;
            {
              ATerm a_176 = NULL;
              t = term_z_37;
              {
                t = b_0(t);
                {
                  a_176 = t;
                  if(((z_175 != NULL) && (z_175 != a_176)))
                    _fail(a_176);
                  else
                    z_175 = a_176;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_175)), not_null(z_175));
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
  ATerm d_9 (ATerm t)
  {
    ATerm f_176 = NULL;
    f_176 = t;
    e_176 :
    if(!(match_string(f_176, "--help")))
      {
        if(!(match_string(f_176, "-h")))
          {
            if(!(match_string(f_176, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_9 (ATerm t)
  {
    t = term_t_46;
    {
      t = set_config_0(t);
      t = term_a_47;
    }
    return(t);
  }
  ATerm f_9 (ATerm t)
  {
    t = term_b_47;
    return(t);
  }
  t = Option_3(t, d_9, e_9, f_9);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_176 = NULL,j_176 = NULL,k_176 = NULL;
  i_176 = t;
  h_176 :
  if(((ATgetType(i_176) == AT_LIST) && !(ATisEmpty(i_176))))
    {
      j_176 = ATgetFirst((ATermList) i_176);
      k_176 = (ATerm) ATgetNext((ATermList) i_176);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_176)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_176)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_95 (ATerm), ATerm w_95 (ATerm))
{
  ATerm u_176 = NULL,v_176 = NULL,w_176 = NULL;
  u_176 = t;
  t_176 :
  if(((ATgetType(u_176) == AT_LIST) && !(ATisEmpty(u_176))))
    {
      v_176 = ATgetFirst((ATermList) u_176);
      w_176 = (ATerm) ATgetNext((ATermList) u_176);
      {
        ATerm a_177 = NULL,c_177 = NULL;
        ATerm b_177 = NULL;
        t = SSLgetAnnotations(not_null(u_176));
        {
          b_177 = t;
          if(((a_177 != NULL) && (a_177 != b_177)))
            _fail(b_177);
          else
            a_177 = b_177;
        }
        {
          t = not_null(v_176);
          {
            ATerm e_177 = NULL;
            t = v_95(t);
            {
              c_177 = t;
              {
                t = not_null(w_176);
                {
                  ATerm g_177 = NULL;
                  t = w_95(t);
                  {
                    e_177 = t;
                    {
                      ATerm h_177 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_177)), not_null(c_177)), not_null(a_177));
                      {
                        h_177 = t;
                        if(((g_177 != NULL) && (g_177 != h_177)))
                          _fail(h_177);
                        else
                          g_177 = h_177;
                      }
                      t = not_null(g_177);
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
  ATerm r_177 = NULL;
  r_177 = t;
  q_177 :
  if(((ATgetType(r_177) == AT_LIST) && ATisEmpty(r_177)))
    {
      {
        ATerm t_177 = NULL,v_177 = NULL;
        ATerm c_47;
        c_47 = t;
        {
          ATerm u_177 = NULL;
          t = SSLgetAnnotations(not_null(r_177));
          {
            u_177 = t;
            if(((t_177 != NULL) && (t_177 != u_177)))
              _fail(u_177);
            else
              t_177 = u_177;
          }
        }
        t = c_47;
        {
          ATerm w_177 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_177));
          {
            w_177 = t;
            if(((v_177 != NULL) && (v_177 != w_177)))
              _fail(w_177);
            else
              v_177 = w_177;
          }
          t = not_null(v_177);
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
  ATerm c_178 = NULL,d_178 = NULL,e_178 = NULL;
  c_178 = t;
  b_178 :
  if(match_cons(c_178, sym__2))
    {
      d_178 = ATgetArgument(c_178, 0);
      e_178 = ATgetArgument(c_178, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_j_39, not_null(d_178), not_null(e_178));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_136 (ATerm))
{
  ATerm p_47;
  p_47 = t;
  {
    ATerm g_9 (ATerm t)
    {
      t = term_r_47;
      t = n_136(t);
      return(t);
    }
    t = try_1(t, g_9);
  }
  t = p_47;
  {
    ATerm h_9 (ATerm t)
    {
      ATerm m_178 = NULL;
      ATerm s_47;
      s_47 = t;
      {
        ATerm k_178 = NULL;
        ATerm l_178 = NULL;
        l_178 = t;
        if(((k_178 != NULL) && (k_178 != l_178)))
          _fail(l_178);
        else
          k_178 = l_178;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_42, not_null(k_178));
          t = set_config_0(t);
        }
      }
      t = s_47;
      {
        ATerm n_178 = NULL;
        n_178 = t;
        if(((m_178 != NULL) && (m_178 != n_178)))
          _fail(n_178);
        else
          m_178 = n_178;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_178));
      }
      return(t);
    }
    ATerm i_9 (ATerm t)
    {
      ATerm t_47 = t;
      int u_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_47 = t;
          int w_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(w_47);
            }
          else
            {
              t = v_47;
              {
                t = n_136(t);
                t = Cons_2(t, _id, i_9);
              }
            }
          ;
          LocalPopChoice(u_47);
        }
      else
        {
          t = t_47;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_9, i_9);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_178 = NULL,u_178 = NULL,v_178 = NULL;
  ATerm x_47;
  x_47 = t;
  {
    ATerm w_178 = NULL,x_178 = NULL,y_178 = NULL,z_178 = NULL;
    w_178 = t;
    s_178 :
    if(match_cons(w_178, sym__3))
      {
        x_178 = ATgetArgument(w_178, 0);
        y_178 = ATgetArgument(w_178, 1);
        z_178 = ATgetArgument(w_178, 2);
        {
          if(((t_178 != NULL) && (t_178 != x_178)))
            _fail(x_178);
          else
            t_178 = x_178;
          {
            if(((u_178 != NULL) && (u_178 != y_178)))
              _fail(y_178);
            else
              u_178 = y_178;
            {
              if(((v_178 != NULL) && (v_178 != z_178)))
                _fail(z_178);
              else
                v_178 = z_178;
              t = SSL_table_put(not_null(t_178), not_null(u_178), not_null(v_178));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = x_47;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_136 (ATerm))
{
  ATerm c_179 = NULL;
  ATerm y_47;
  y_47 = t;
  {
    t = term_z_47;
    t = table_put_0(t);
  }
  t = y_47;
  {
    ATerm j_9 (ATerm t)
    {
      ATerm a_48 = t;
      int b_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_136(t);
          ;
          LocalPopChoice(b_48);
        }
      else
        {
          t = a_48;
          {
            ATerm c_48 = t;
            int d_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(d_48);
              }
            else
              {
                t = c_48;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, j_9);
    {
      ATerm k_9 (ATerm t)
      {
        ATerm f_48 = t;
        int g_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_48;
            h_48 = t;
            {
              ATerm i_48 = t;
              int l_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_q_43;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(l_48);
                }
              else
                {
                  t = i_48;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = h_48;
            {
              t = system_usage_0(t);
              {
                t = term_s_40;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(g_48);
          }
        else
          {
            t = f_48;
            {
              ATerm m_48 = t;
              int n_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_48;
                  p_48 = t;
                  {
                    t = term_a_46;
                    t = get_config_0(t);
                  }
                  t = p_48;
                  {
                    t = system_about_0(t);
                    {
                      t = term_s_40;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(n_48);
                }
              else
                {
                  t = m_48;
                  {
                    ATerm l_9 (ATerm t)
                    {
                      ATerm m_9 (ATerm t)
                      {
                        ATerm d_179 = NULL;
                        d_179 = t;
                        if(((c_179 != NULL) && (c_179 != d_179)))
                          _fail(d_179);
                        else
                          c_179 = d_179;
                        return(t);
                      }
                      t = Undefined_1(t, m_9);
                      return(t);
                    }
                    t = option_defined_1(t, l_9);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_179)), term_q_48));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_t_38;
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
      t = try_1(t, k_9);
      {
        ATerm g_49;
        g_49 = t;
        {
          t = term_o_44;
          t = table_destroy_0(t);
        }
        t = g_49;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm k_133 (ATerm), ATerm l_133 (ATerm), ATerm m_133 (ATerm), ATerm n_133 (ATerm))
{
  t = parse_options_1(t, k_133);
  {
    t = store_options_0(t);
    {
      t = m_133(t);
      {
        ATerm h_49 = t;
        int i_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_133);
            ;
            LocalPopChoice(i_49);
          }
        else
          {
            t = h_49;
            {
              ATerm l_49 = t;
              int m_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_133(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(m_49);
                }
              else
                {
                  t = l_49;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm z_132 (ATerm), ATerm a_133 (ATerm), ATerm b_133 (ATerm), ATerm c_133 (ATerm))
{
  ATerm n_9 (ATerm t)
  {
    ATerm n_49 = t;
    int o_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_133(t);
        ;
        LocalPopChoice(o_49);
      }
    else
      {
        t = n_49;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm o_9 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, z_132);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, n_9, b_133, c_133, o_9);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm))
{
  ATerm p_9 (ATerm t)
  {
    ATerm q_9 (ATerm t)
    {
      ATerm p_49;
      p_49 = t;
      {
        ATerm g_179 = NULL;
        ATerm h_179 = NULL;
        t = term_k_42;
        {
          t = get_config_0(t);
          {
            h_179 = t;
            if(((g_179 != NULL) && (g_179 != h_179)))
              _fail(h_179);
            else
              g_179 = h_179;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATinsert(ATempty, not_null(g_179)));
          t = printnl_0(t);
        }
      }
      t = p_49;
      return(t);
    }
    t = if_verbose2_1(t, q_9);
    return(t);
  }
  t = iowrap_4(t, t_132, u_132, v_132, p_9);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm r_132 (ATerm), ATerm s_132 (ATerm))
{
  t = iowrap_3(t, r_132, s_132, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm o_132 (ATerm))
{
  ATerm r_9 (ATerm t)
  {
    t = _2(t, _id, o_132);
    return(t);
  }
  t = iowrap_2(t, r_9, _fail);
  return(t);
}
ATerm fusion_io_0 (ATerm t)
{
  ATerm s_9 (ATerm t)
  {
    ATerm r_49 = t;
    int s_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = declare_inline_rules_0(t);
        {
          t = check_library_definitions_0(t);
          t = alltd_1(t, innermost_fusion_0);
        }
        ;
        LocalPopChoice(s_49);
      }
    else
      {
        t = r_49;
        {
          ATerm t_9 (ATerm t)
          {
            ATerm u_9 (ATerm t)
            {
              t = term_t_49;
              return(t);
            }
            t = say_1(t, u_9);
            return(t);
          }
          t = if_verbose2_1(t, t_9);
        }
      }
    return(t);
  }
  t = iowrap_1(t, s_9);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = fusion_io_0(t);
  return(t);
}
