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
ATerm term_a_50;
ATerm term_p_49;
ATerm term_v_48;
ATerm term_g_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_m_47;
ATerm term_l_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_p_46;
ATerm term_m_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_z_45;
ATerm term_y_45;
ATerm term_q_45;
ATerm term_k_45;
ATerm term_h_45;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_q_43;
ATerm term_e_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_i_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_y_41;
ATerm term_v_41;
ATerm term_t_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_o_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_h_40;
ATerm term_f_40;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_n_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_p_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_w_24;
ATerm term_v_23;
ATerm term_i_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_u_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_c_21;
ATerm term_w_20;
ATerm term_t_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_v_19;
ATerm term_t_19;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_w_15;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_e_12;
ATerm term_r_11;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_c_10;
void init_constant_terms (void)
{
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_CallT_3, term_w_13, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Seq_2, term_z_13, term_a_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_13, term_h_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Seq_2, term_x_13, term_i_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_14);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_13, term_a_14);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Seq_2, term_x_13, term_v_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("z_1", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("b_2", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_Op_2, term_a_25, (ATerm) ATempty);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_ConstType_1, term_b_25);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_39);
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym__2, term_f_10, term_b_42);
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_42);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(sym__2, term_l_42, term_x_38);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(sym__2, term_y_42, term_x_38);
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(sym__2, term_j_46, term_k_46);
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(sym__2, term_j_47, term_x_38);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(sym__2, term_m_47, term_x_38);
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym__2, term_q_45, term_x_38);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(sym__3, term_j_46, term_k_46, (ATerm) ATempty);
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm j_130 (ATerm));
ATerm if_verbose2_1 (ATerm, ATerm m_140 (ATerm));
ATerm Expl_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm s_117 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm h_97 (ATerm), ATerm i_97 (ATerm));
ATerm Con_3 (ATerm, ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm v_110 (ATerm));
ATerm desugar_0 (ATerm);
ATerm UnMark_0 (ATerm);
ATerm BottomupToVarIsId_Cond_0 (ATerm);
ATerm Replace_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm d_123 (ATerm));
ATerm restore_always_2 (ATerm, ATerm c_114 (ATerm), ATerm d_114 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm c_123 (ATerm));
ATerm scope_2 (ATerm, ATerm e_123 (ATerm), ATerm f_123 (ATerm));
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
ATerm bottomup_1 (ATerm, ATerm w_110 (ATerm));
ATerm innermost_1 (ATerm, ATerm l_126 (ATerm));
ATerm propagate_mark_0 (ATerm);
ATerm Build_1 (ATerm, ATerm l_100 (ATerm));
ATerm Seq_2 (ATerm, ATerm r_100 (ATerm), ATerm s_100 (ATerm));
ATerm Match_1 (ATerm, ATerm k_100 (ATerm));
ATerm LChoice_2 (ATerm, ATerm t_100 (ATerm), ATerm u_100 (ATerm));
ATerm Choice_2 (ATerm, ATerm r_99 (ATerm), ATerm s_99 (ATerm));
ATerm inline_rules_0 (ATerm);
ATerm bottomup_to_var_0 (ATerm);
ATerm seq_over_choice_0 (ATerm);
ATerm innermost_fusion_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm n_112 (ATerm));
ATerm check_that_bottomup_is_bottomup_0 (ATerm);
ATerm check_that_innermost_is_innermost_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm k_97 (ATerm), ATerm l_97 (ATerm));
ATerm PrimT_3 (ATerm, ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm));
ATerm Explode_2 (ATerm, ATerm d_97 (ATerm), ATerm e_97 (ATerm));
ATerm Op_2 (ATerm, ATerm z_96 (ATerm), ATerm a_97 (ATerm));
ATerm pat_td_1 (ATerm, ATerm c_139 (ATerm));
ATerm Mapp2_0 (ATerm);
ATerm MatchingCongruence_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm z_111 (ATerm));
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
ATerm repeat_1 (ATerm, ATerm z_123 (ATerm));
ATerm downup_1 (ATerm, ATerm x_110 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm l_117 (ATerm));
ATerm zip_1 (ATerm, ATerm n_117 (ATerm));
ATerm IsSVar_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm a_137 (ATerm), ATerm b_137 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm l_136 (ATerm), ATerm m_136 (ATerm));
ATerm substitute_1 (ATerm, ATerm n_136 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm a_140 (ATerm));
ATerm Rec_2 (ATerm, ATerm a_101 (ATerm), ATerm b_101 (ATerm));
ATerm SDef_3 (ATerm, ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm u_102 (ATerm));
ATerm Let_2 (ATerm, ATerm d_100 (ATerm), ATerm e_100 (ATerm));
ATerm sboundin_3 (ATerm, ATerm b_140 (ATerm), ATerm c_140 (ATerm), ATerm d_140 (ATerm));
ATerm Bind7_0 (ATerm);
ATerm Bind5_0 (ATerm);
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm c_100 (ATerm));
ATerm srename_0 (ATerm);
ATerm ReplaceVar_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm w_139 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm k_99 (ATerm));
ATerm RDefT_4 (ATerm, ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm e_99 (ATerm));
ATerm SDefT_4 (ATerm, ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm));
ATerm Scope_2 (ATerm, ATerm n_100 (ATerm), ATerm o_100 (ATerm));
ATerm tboundin_3 (ATerm, ATerm x_139 (ATerm), ATerm y_139 (ATerm), ATerm z_139 (ATerm));
ATerm Bind8_0 (ATerm);
ATerm declared_vars_0 (ATerm);
ATerm Bind6_0 (ATerm);
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm i_119 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm z_121 (ATerm));
ATerm crush_3 (ATerm, ATerm v_119 (ATerm), ATerm w_119 (ATerm), ATerm x_119 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm m_119 (ATerm), ATerm n_119 (ATerm));
ATerm diff_1 (ATerm, ATerm e_119 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm o_124 (ATerm), ATerm p_124 (ATerm));
ATerm for_3 (ATerm, ATerm r_124 (ATerm), ATerm s_124 (ATerm), ATerm t_124 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm s_138 (ATerm), ATerm t_138 (ATerm), ATerm u_138 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm n_137 (ATerm), ATerm o_137 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm h_137 (ATerm), ATerm i_137 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm s_137 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm l_127 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm v_126 (ATerm));
ATerm rename_4 (ATerm, ATerm c_137 (ATerm, ATerm (ATerm)), ATerm d_137 (ATerm), ATerm e_137 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm f_137 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm i_123 (ATerm));
ATerm InlineStrat_0 (ATerm);
ATerm new_0 (ATerm);
ATerm check_that_try_is_try_0 (ATerm);
ATerm check_library_definitions_0 (ATerm);
ATerm assert_1 (ATerm, ATerm g_123 (ATerm));
ATerm declare_inline_rule_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm u_95 (ATerm));
ATerm Signature_1 (ATerm, ATerm v_95 (ATerm));
ATerm Specification_1 (ATerm, ATerm z_95 (ATerm));
ATerm declare_inline_rules_0 (ATerm);
ATerm _2 (ATerm, ATerm h_94 (ATerm), ATerm i_94 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm v_115 (ATerm));
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
ATerm WriteToFile_1 (ATerm, ATerm t_130 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm f_132 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm f_130 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm h_114 (ATerm), ATerm i_114 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm v_121 (ATerm), ATerm w_121 (ATerm));
ATerm crush_2 (ATerm, ATerm t_119 (ATerm), ATerm u_119 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_140 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm d_133 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_136 (ATerm));
ATerm map_1 (ATerm, ATerm f_115 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_136 (ATerm));
ATerm Program_1 (ATerm, ATerm y_109 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm z_109 (ATerm));
ATerm fetch_1 (ATerm, ATerm p_115 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_135 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_113 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_136 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_95 (ATerm), ATerm r_95 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_136 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_136 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm f_133 (ATerm), ATerm g_133 (ATerm), ATerm h_133 (ATerm), ATerm i_133 (ATerm));
ATerm iowrap_4 (ATerm, ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm w_132 (ATerm), ATerm x_132 (ATerm));
ATerm iowrap_3 (ATerm, ATerm o_132 (ATerm), ATerm p_132 (ATerm), ATerm q_132 (ATerm));
ATerm iowrap_2 (ATerm, ATerm m_132 (ATerm), ATerm n_132 (ATerm));
ATerm iowrap_1 (ATerm, ATerm j_132 (ATerm));
ATerm fusion_io_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_0 (ATerm t)
{
  ATerm b_10;
  b_10 = t;
  {
    ATerm s_0 = NULL;
    ATerm t_0 = NULL;
    t_0 = t;
    if(((s_0 != NULL) && (s_0 != t_0)))
      _fail(t_0);
    else
      s_0 = t_0;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATempty, not_null(s_0)));
      t = printnl_0(t);
    }
  }
  t = b_10;
  return(t);
}
ATerm say_1 (ATerm t, ATerm j_130 (ATerm))
{
  ATerm d_10;
  d_10 = t;
  {
    t = j_130(t);
    t = debug_0(t);
  }
  t = d_10;
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm m_140 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    ATerm e_10;
    e_10 = t;
    {
      ATerm w_7 = NULL;
      ATerm k_8 = NULL;
      t = term_f_10;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_7), term_g_10);
        t = geq_0(t);
      }
    }
    t = e_10;
    t = m_140(t);
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(b_11)), not_null(a_11)), not_null(z_10)), not_null(y_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_11)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(v_10), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_10))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(s_10), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_11)), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_11))))), (ATerm) ATmakeAppl(sym_PrimT_3, term_h_10, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_11))), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_10)))))));
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
                    ATerm v_0 (ATerm t)
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
                    t = oncetd_1(t, v_0);
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_h_10, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_11)), not_null(i_11))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_11))), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_11)))));
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
                              ATerm w_0 (ATerm t)
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
                              t = oncetd_1(t, w_0);
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
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_11)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_11))), (ATerm) ATmakeAppl(sym_PrimT_3, term_i_10, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_11)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_11)), (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_11)), not_null(s_11)))))));
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
ATerm Mapp1_0 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL;
  w_12 = t;
  u_12 :
  if(match_cons(w_12, sym_Match_1))
    {
      x_12 = ATgetArgument(w_12, 0);
      v_12 :
      if(match_cons(x_12, sym_RootApp_1))
        {
          y_12 = ATgetArgument(x_12, 0);
          t = not_null(y_12);
        }
      else
        {
          if(match_cons(x_12, sym_App_2))
            {
              y_12 = ATgetArgument(x_12, 0);
              z_12 = ATgetArgument(x_12, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(y_12), not_null(z_12));
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
  ATerm m_13 = NULL,n_13 = NULL;
  m_13 = t;
  l_13 :
  if(match_cons(m_13, sym_Match_1))
    {
      n_13 = ATgetArgument(m_13, 0);
      {
        ATerm p_13 = NULL,q_13 = NULL;
        ATerm u_13 = NULL;
        t = not_null(n_13);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
            r_13 = t;
            i_13 :
            if(match_cons(r_13, sym_RootApp_1))
              {
                s_13 = ATgetArgument(r_13, 0);
                j_13 :
                if(match_cons(s_13, sym_Match_1))
                  {
                    t_13 = ATgetArgument(s_13, 0);
                    {
                      if(((p_13 != NULL) && (p_13 != t_13)))
                        _fail(t_13);
                      else
                        p_13 = t_13;
                      t = not_null(p_13);
                    }
                  }
                else
                  {
                    _fail(t);
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
            u_13 = t;
            if(((q_13 != NULL) && (q_13 != u_13)))
              _fail(u_13);
            else
              q_13 = u_13;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(q_13));
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
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
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
            t = Mapp1_0(t);
            ;
            LocalPopChoice(o_10);
          }
        else
          {
            t = n_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp1_0 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  d_14 = t;
  b_14 :
  if(match_cons(d_14, sym_Build_1))
    {
      e_14 = ATgetArgument(d_14, 0);
      c_14 :
      if(match_cons(e_14, sym_RootApp_1))
        {
          f_14 = ATgetArgument(e_14, 0);
          t = not_null(f_14);
        }
      else
        {
          if(match_cons(e_14, sym_App_2))
            {
              f_14 = ATgetArgument(e_14, 0);
              g_14 = ATgetArgument(e_14, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_14)), not_null(f_14));
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
ATerm Bapp0_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL;
  y_14 = t;
  x_14 :
  if(match_cons(y_14, sym_Build_1))
    {
      z_14 = ATgetArgument(y_14, 0);
      {
        ATerm q_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_15 = NULL,c_15 = NULL;
            ATerm g_15 = NULL;
            t = not_null(z_14);
            {
              ATerm y_0 (ATerm t)
              {
                ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
                d_15 = t;
                p_14 :
                if(match_cons(d_15, sym_RootApp_1))
                  {
                    e_15 = ATgetArgument(d_15, 0);
                    r_14 :
                    if(match_cons(e_15, sym_Build_1))
                      {
                        f_15 = ATgetArgument(e_15, 0);
                        {
                          if(((b_15 != NULL) && (b_15 != f_15)))
                            _fail(f_15);
                          else
                            b_15 = f_15;
                          t = not_null(b_15);
                        }
                      }
                    else
                      {
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
                g_15 = t;
                if(((c_15 != NULL) && (c_15 != g_15)))
                  _fail(g_15);
                else
                  c_15 = g_15;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(c_15));
            ;
            LocalPopChoice(u_10);
          }
        else
          {
            t = q_10;
            {
              ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
              ATerm q_15 = NULL;
              t = not_null(z_14);
              {
                ATerm z_0 (ATerm t)
                {
                  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
                  m_15 = t;
                  u_14 :
                  if(match_cons(m_15, sym_App_2))
                    {
                      n_15 = ATgetArgument(m_15, 0);
                      p_15 = ATgetArgument(m_15, 1);
                      v_14 :
                      if(match_cons(n_15, sym_Build_1))
                        {
                          o_15 = ATgetArgument(n_15, 0);
                          {
                            if(((j_15 != NULL) && (j_15 != o_15)))
                              _fail(o_15);
                            else
                              j_15 = o_15;
                            {
                              if(((i_15 != NULL) && (i_15 != p_15)))
                                _fail(p_15);
                              else
                                i_15 = p_15;
                              t = not_null(j_15);
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
                t = pat_td_1(t, z_0);
                {
                  q_15 = t;
                  if(((k_15 != NULL) && (k_15 != q_15)))
                    _fail(q_15);
                  else
                    k_15 = q_15;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(k_15));
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
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      ;
      LocalPopChoice(x_10);
    }
  else
    {
      t = w_10;
      {
        ATerm g_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            ;
            LocalPopChoice(h_11);
          }
        else
          {
            t = g_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,h_16 = NULL,i_16 = NULL;
  b_16 = t;
  y_15 :
  if(match_cons(b_16, sym__2))
    {
      c_16 = ATgetArgument(b_16, 0);
      f_16 = ATgetArgument(b_16, 1);
      z_15 :
      if(match_cons(c_16, sym__2))
        {
          d_16 = ATgetArgument(c_16, 0);
          e_16 = ATgetArgument(c_16, 1);
          a_16 :
          if(match_cons(f_16, sym__2))
            {
              h_16 = ATgetArgument(f_16, 0);
              i_16 = ATgetArgument(f_16, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_16)), not_null(d_16)), (ATerm) ATinsert(CheckATermList(not_null(i_16)), not_null(e_16)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
  q_16 = t;
  p_16 :
  if(((ATgetType(q_16) == AT_LIST) && !(ATisEmpty(q_16))))
    {
      r_16 = ATgetFirst((ATermList) q_16);
      s_16 = (ATerm) ATgetNext((ATermList) q_16);
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_16), not_null(s_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm y_16 = NULL;
  y_16 = t;
  x_16 :
  if(((ATgetType(y_16) == AT_LIST) && ATisEmpty(y_16)))
    {
      t = term_r_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm s_117 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, s_117);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL;
  ATerm l_17 (ATerm t)
  {
    ATerm i_17 = NULL;
    ATerm j_17 = NULL;
    t = not_null(f_17);
    {
      ATerm d_12 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = d_12;
        }
      {
        t = new_0(t);
        {
          j_17 = t;
          if(((i_17 != NULL) && (i_17 != j_17)))
            _fail(j_17);
          else
            i_17 = j_17;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(i_17)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_17)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_17))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_17))));
    return(t);
  }
  ATerm m_17 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_e_12, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_17))));
    return(t);
  }
  f_17 = t;
  e_17 :
  if(match_cons(f_17, sym_Var_1))
    {
      g_17 = ATgetArgument(f_17, 0);
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_17(t);
            ;
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            t = m_17(t);
          }
      }
    }
  else
    {
      t = l_17(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  y_17 = t;
  w_17 :
  if(match_cons(y_17, sym_PrimT_3))
    {
      z_17 = ATgetArgument(y_17, 0);
      a_18 = ATgetArgument(y_17, 1);
      x_17 = ATgetArgument(y_17, 2);
      {
        ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
        ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
        t = not_null(x_17);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm h_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = h_12;
              }
            return(t);
          }
          t = fetch_1(t, a_1);
          {
            t = not_null(x_17);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm b_1 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, b_1);
                {
                  h_18 = t;
                  r_17 :
                  if(match_cons(h_18, sym__2))
                    {
                      i_18 = ATgetArgument(h_18, 0);
                      j_18 = ATgetArgument(h_18, 1);
                      s_17 :
                      if(match_cons(j_18, sym__2))
                        {
                          k_18 = ATgetArgument(j_18, 0);
                          l_18 = ATgetArgument(j_18, 1);
                          {
                            if(((e_18 != NULL) && (e_18 != i_18)))
                              _fail(i_18);
                            else
                              e_18 = i_18;
                            {
                              if(((f_18 != NULL) && (f_18 != k_18)))
                                _fail(k_18);
                              else
                                f_18 = k_18;
                              if(((g_18 != NULL) && (g_18 != l_18)))
                                _fail(l_18);
                              else
                                g_18 = l_18;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(f_18)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(z_17), not_null(a_18), not_null(g_18))));
      }
    }
  else
    {
      if(match_cons(y_17, sym_Prim_2))
        {
          z_17 = ATgetArgument(y_17, 0);
          a_18 = ATgetArgument(y_17, 1);
          {
            ATerm p_18 = NULL,q_18 = NULL,s_18 = NULL;
            ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL;
            t = not_null(a_18);
            {
              ATerm c_1 (ATerm t)
              {
                ATerm i_12 = t;
                if((PushChoice() == 0))
                  {
                    t = Var_1(t, _id);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_12;
                  }
                return(t);
              }
              t = fetch_1(t, c_1);
              {
                t = not_null(a_18);
                {
                  t = unzip_1(t, LiftPrimArg_0);
                  {
                    ATerm d_1 (ATerm t)
                    {
                      t = unzip_1(t, _id);
                      return(t);
                    }
                    t = _2(t, concat_0, d_1);
                    {
                      t_18 = t;
                      u_17 :
                      if(match_cons(t_18, sym__2))
                        {
                          u_18 = ATgetArgument(t_18, 0);
                          v_18 = ATgetArgument(t_18, 1);
                          v_17 :
                          if(match_cons(v_18, sym__2))
                            {
                              w_18 = ATgetArgument(v_18, 0);
                              x_18 = ATgetArgument(v_18, 1);
                              {
                                if(((p_18 != NULL) && (p_18 != u_18)))
                                  _fail(u_18);
                                else
                                  p_18 = u_18;
                                {
                                  if(((q_18 != NULL) && (q_18 != w_18)))
                                    _fail(w_18);
                                  else
                                    q_18 = w_18;
                                  if(((s_18 != NULL) && (s_18 != x_18)))
                                    _fail(x_18);
                                  else
                                    s_18 = x_18;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(q_18)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(z_17), (ATerm)ATempty, not_null(s_18))));
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
  ATerm g_19 = NULL;
  g_19 = t;
  f_19 :
  if(match_cons(g_19, sym_Wld_0))
    {
      ATerm i_19 = NULL,k_19 = NULL;
      ATerm j_12;
      j_12 = t;
      {
        ATerm j_19 = NULL;
        t = SSLgetAnnotations(not_null(g_19));
        {
          j_19 = t;
          if(((i_19 != NULL) && (i_19 != j_19)))
            _fail(j_19);
          else
            i_19 = j_19;
        }
      }
      t = j_12;
      {
        ATerm l_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(i_19));
        {
          l_19 = t;
          if(((k_19 != NULL) && (k_19 != l_19)))
            _fail(l_19);
          else
            k_19 = l_19;
        }
        t = not_null(k_19);
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
  ATerm k_12 = t;
  if((PushChoice() == 0))
    {
      ATerm e_1 (ATerm t)
      {
        ATerm l_12 = t;
        int m_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(m_12);
          }
        else
          {
            t = l_12;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, e_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm h_97 (ATerm), ATerm i_97 (ATerm))
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
  h_20 = t;
  f_20 :
  if(match_cons(h_20, sym_App_2))
    {
      i_20 = ATgetArgument(h_20, 0);
      j_20 = ATgetArgument(h_20, 1);
      {
        ATerm n_20 = NULL,p_20 = NULL;
        ATerm o_20 = NULL;
        t = SSLgetAnnotations(not_null(h_20));
        {
          o_20 = t;
          if(((n_20 != NULL) && (n_20 != o_20)))
            _fail(o_20);
          else
            n_20 = o_20;
        }
        {
          t = not_null(i_20);
          {
            ATerm r_20 = NULL;
            t = h_97(t);
            {
              p_20 = t;
              {
                t = not_null(j_20);
                {
                  ATerm u_20 = NULL;
                  t = i_97(t);
                  {
                    r_20 = t;
                    {
                      ATerm v_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(p_20), not_null(r_20)), not_null(n_20));
                      {
                        v_20 = t;
                        if(((u_20 != NULL) && (u_20 != v_20)))
                          _fail(v_20);
                        else
                          u_20 = v_20;
                      }
                      t = not_null(u_20);
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
ATerm Con_3 (ATerm t, ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm))
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL;
  i_21 = t;
  h_21 :
  if(match_cons(i_21, sym_Con_3))
    {
      j_21 = ATgetArgument(i_21, 0);
      k_21 = ATgetArgument(i_21, 1);
      l_21 = ATgetArgument(i_21, 2);
      {
        ATerm r_21 = NULL,t_21 = NULL;
        ATerm s_21 = NULL;
        t = SSLgetAnnotations(not_null(i_21));
        {
          s_21 = t;
          if(((r_21 != NULL) && (r_21 != s_21)))
            _fail(s_21);
          else
            r_21 = s_21;
        }
        {
          t = not_null(j_21);
          {
            ATerm v_21 = NULL;
            t = t_97(t);
            {
              t_21 = t;
              {
                t = not_null(k_21);
                {
                  ATerm x_21 = NULL;
                  t = u_97(t);
                  {
                    v_21 = t;
                    {
                      t = not_null(l_21);
                      {
                        ATerm a_22 = NULL;
                        t = v_97(t);
                        {
                          x_21 = t;
                          {
                            ATerm b_22 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(t_21), not_null(v_21), not_null(x_21)), not_null(r_21));
                            {
                              b_22 = t;
                              if(((a_22 != NULL) && (a_22 != b_22)))
                                _fail(b_22);
                              else
                                a_22 = b_22;
                            }
                            t = not_null(a_22);
                          }
                        }
                      }
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
  ATerm n_12 = t;
  if((PushChoice() == 0))
    {
      ATerm f_1 (ATerm t)
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, f_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_12;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
  m_22 = t;
  k_22 :
  if(match_cons(m_22, sym_SRule_1))
    {
      n_22 = ATgetArgument(m_22, 0);
      l_22 :
      if(match_cons(n_22, sym_StratRule_3))
        {
          o_22 = ATgetArgument(n_22, 0);
          p_22 = ATgetArgument(n_22, 1);
          q_22 = ATgetArgument(n_22, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_22)), (ATerm) ATmakeAppl(sym_Where_1, not_null(q_22))), not_null(o_22)));
        }
      else
        {
          if(match_cons(n_22, sym_Rule_3))
            {
              o_22 = ATgetArgument(n_22, 0);
              p_22 = ATgetArgument(n_22, 1);
              q_22 = ATgetArgument(n_22, 2);
              {
                t = not_null(o_22);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(p_22);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(p_22))), (ATerm) ATmakeAppl(sym_Where_1, not_null(q_22))), (ATerm) ATmakeAppl(sym_Match_1, not_null(o_22))));
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
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  p_23 = t;
  n_23 :
  if(match_cons(p_23, sym_SRule_1))
    {
      q_23 = ATgetArgument(p_23, 0);
      o_23 :
      if(match_cons(q_23, sym_Rule_3))
        {
          r_23 = ATgetArgument(q_23, 0);
          s_23 = ATgetArgument(q_23, 1);
          t_23 = ATgetArgument(q_23, 2);
          {
            ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL;
            ATerm f_24 = NULL;
            ATerm l_24 = NULL;
            t = new_0(t);
            {
              f_24 = t;
              {
                if(((c_24 != NULL) && (c_24 != f_24)))
                  _fail(f_24);
                else
                  c_24 = f_24;
                {
                  t = not_null(r_23);
                  {
                    ATerm u_24 = NULL;
                    ATerm g_1 (ATerm t)
                    {
                      ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
                      g_24 = t;
                      d_23 :
                      if(match_cons(g_24, sym_Con_3))
                        {
                          h_24 = ATgetArgument(g_24, 0);
                          j_24 = ATgetArgument(g_24, 1);
                          k_24 = ATgetArgument(g_24, 2);
                          e_23 :
                          if(match_cons(h_24, sym_Var_1))
                            {
                              i_24 = ATgetArgument(h_24, 0);
                              {
                                if(((b_24 != NULL) && (b_24 != i_24)))
                                  _fail(i_24);
                                else
                                  b_24 = i_24;
                                {
                                  if(((z_23 != NULL) && (z_23 != j_24)))
                                    _fail(j_24);
                                  else
                                    z_23 = j_24;
                                  {
                                    if(((x_23 != NULL) && (x_23 != k_24)))
                                      _fail(k_24);
                                    else
                                      x_23 = k_24;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_24));
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
                    t = oncetd_1(t, g_1);
                    {
                      l_24 = t;
                      {
                        if(((d_24 != NULL) && (d_24 != l_24)))
                          _fail(l_24);
                        else
                          d_24 = l_24;
                        {
                          t = not_null(s_23);
                          {
                            ATerm h_1 (ATerm t)
                            {
                              ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL;
                              m_24 = t;
                              h_23 :
                              if(match_cons(m_24, sym_Con_3))
                                {
                                  n_24 = ATgetArgument(m_24, 0);
                                  p_24 = ATgetArgument(m_24, 1);
                                  q_24 = ATgetArgument(m_24, 2);
                                  i_23 :
                                  if(match_cons(n_24, sym_Var_1))
                                    {
                                      o_24 = ATgetArgument(n_24, 0);
                                      j_23 :
                                      if(match_cons(q_24, sym_CallT_3))
                                        {
                                          r_24 = ATgetArgument(q_24, 0);
                                          s_24 = ATgetArgument(q_24, 1);
                                          t_24 = ATgetArgument(q_24, 2);
                                          k_23 :
                                          if(((ATgetType(s_24) == AT_LIST) && ATisEmpty(s_24)))
                                            {
                                              l_23 :
                                              if(((ATgetType(t_24) == AT_LIST) && ATisEmpty(t_24)))
                                                {
                                                  {
                                                    if(((b_24 != NULL) && (b_24 != o_24)))
                                                      _fail(o_24);
                                                    else
                                                      b_24 = o_24;
                                                    {
                                                      if(((a_24 != NULL) && (a_24 != p_24)))
                                                        _fail(p_24);
                                                      else
                                                        a_24 = p_24;
                                                      {
                                                        if(((y_23 != NULL) && (y_23 != r_24)))
                                                          _fail(r_24);
                                                        else
                                                          y_23 = r_24;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_24));
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
                            t = oncetd_1(t, h_1);
                            {
                              u_24 = t;
                              if(((e_24 != NULL) && (e_24 != u_24)))
                                _fail(u_24);
                              else
                                e_24 = u_24;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_24)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_24), not_null(e_24), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_23), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(y_23), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_23), not_null(a_24), term_e_12))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(b_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_24)))))));
          }
        }
      else
        {
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
  ATerm i_1 (ATerm t)
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
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
              t = Scope_2(t, _id, desugarRule_0);
              ;
              LocalPopChoice(t_12);
            }
          else
            {
              t = s_12;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, i_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm v_110 (ATerm))
{
  t = v_110(t);
  {
    ATerm j_1 (ATerm t)
    {
      t = topdown_1(t, v_110);
      return(t);
    }
    t = _all(t, j_1);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm l_1 (ATerm t)
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            ;
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            {
              ATerm c_13 = t;
              int d_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(d_13);
                }
              else
                {
                  t = c_13;
                  {
                    ATerm e_13 = t;
                    int f_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        ;
                        LocalPopChoice(f_13);
                      }
                    else
                      {
                        t = e_13;
                        {
                          ATerm g_13 = t;
                          int h_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              ;
                              LocalPopChoice(h_13);
                            }
                          else
                            {
                              t = g_13;
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
      t = repeat_1(t, l_1);
    }
    return(t);
  }
  t = topdown_1(t, k_1);
  return(t);
}
ATerm UnMark_0 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  i_25 = t;
  d_25 :
  if(match_cons(i_25, sym_CallT_3))
    {
      j_25 = ATgetArgument(i_25, 0);
      l_25 = ATgetArgument(i_25, 1);
      m_25 = ATgetArgument(i_25, 2);
      e_25 :
      if(match_cons(j_25, sym_SVar_1))
        {
          k_25 = ATgetArgument(j_25, 0);
          f_25 :
          if(match_string(k_25, "mark"))
            {
              g_25 :
              if(((ATgetType(l_25) == AT_LIST) && ATisEmpty(l_25)))
                {
                  h_25 :
                  if(((ATgetType(m_25) == AT_LIST) && ATisEmpty(m_25)))
                    {
                      t = term_e_12;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL;
  p_26 = t;
  e_26 :
  if(match_cons(p_26, sym_Seq_2))
    {
      q_26 = ATgetArgument(p_26, 0);
      v_26 = ATgetArgument(p_26, 1);
      f_26 :
      if(match_cons(q_26, sym_CallT_3))
        {
          r_26 = ATgetArgument(q_26, 0);
          t_26 = ATgetArgument(q_26, 1);
          u_26 = ATgetArgument(q_26, 2);
          g_26 :
          if(match_cons(r_26, sym_SVar_1))
            {
              s_26 = ATgetArgument(r_26, 0);
              h_26 :
              if(match_string(s_26, "mark"))
                {
                  i_26 :
                  if(((ATgetType(t_26) == AT_LIST) && ATisEmpty(t_26)))
                    {
                      j_26 :
                      if(((ATgetType(u_26) == AT_LIST) && ATisEmpty(u_26)))
                        {
                          k_26 :
                          if(match_cons(v_26, sym_Seq_2))
                            {
                              w_26 = ATgetArgument(v_26, 0);
                              y_26 = ATgetArgument(v_26, 1);
                              l_26 :
                              if(match_cons(w_26, sym_Match_1))
                                {
                                  x_26 = ATgetArgument(w_26, 0);
                                  m_26 :
                                  if(match_cons(y_26, sym_Seq_2))
                                    {
                                      z_26 = ATgetArgument(y_26, 0);
                                      b_27 = ATgetArgument(y_26, 1);
                                      n_26 :
                                      if(match_cons(z_26, sym_Where_1))
                                        {
                                          a_27 = ATgetArgument(z_26, 0);
                                          o_26 :
                                          if(match_cons(b_27, sym_Build_1))
                                            {
                                              c_27 = ATgetArgument(b_27, 0);
                                              {
                                                ATerm k_13 = t;
                                                int o_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
                                                    ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
                                                    t = term_j_14;
                                                    {
                                                      ATerm m_1 (ATerm t)
                                                      {
                                                        t = term_k_14;
                                                        return(t);
                                                      }
                                                      t = rewrite_1(t, m_1);
                                                      {
                                                        k_27 = t;
                                                        t_25 :
                                                        if(match_cons(k_27, sym_Defined_2))
                                                          {
                                                            l_27 = ATgetArgument(k_27, 0);
                                                            m_27 = ATgetArgument(k_27, 1);
                                                            u_25 :
                                                            if(match_string(l_27, "r_0"))
                                                              {
                                                                ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
                                                                if(((h_27 != NULL) && (h_27 != m_27)))
                                                                  _fail(m_27);
                                                                else
                                                                  h_27 = m_27;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__3, not_null(h_27), not_null(x_26), (ATerm) ATmakeAppl(sym__2, not_null(a_27), not_null(c_27)));
                                                                  {
                                                                    t = replace_application_0(t);
                                                                    {
                                                                      n_27 = t;
                                                                      s_25 :
                                                                      if(match_cons(n_27, sym__2))
                                                                        {
                                                                          o_27 = ATgetArgument(n_27, 0);
                                                                          p_27 = ATgetArgument(n_27, 1);
                                                                          {
                                                                            if(((i_27 != NULL) && (i_27 != o_27)))
                                                                              _fail(o_27);
                                                                            else
                                                                              i_27 = o_27;
                                                                            if(((j_27 != NULL) && (j_27 != p_27)))
                                                                              _fail(p_27);
                                                                            else
                                                                              j_27 = p_27;
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
                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(i_27)), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_27))));
                                                    ;
                                                    LocalPopChoice(o_13);
                                                  }
                                                else
                                                  {
                                                    t = k_13;
                                                    {
                                                      ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL;
                                                      ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
                                                      t = term_j_14;
                                                      {
                                                        ATerm n_1 (ATerm t)
                                                        {
                                                          t = term_k_14;
                                                          return(t);
                                                        }
                                                        t = rewrite_1(t, n_1);
                                                        {
                                                          z_27 = t;
                                                          c_26 :
                                                          if(match_cons(z_27, sym_Defined_2))
                                                            {
                                                              a_28 = ATgetArgument(z_27, 0);
                                                              b_28 = ATgetArgument(z_27, 1);
                                                              d_26 :
                                                              if(match_string(a_28, "h_0"))
                                                                {
                                                                  ATerm c_28 = NULL;
                                                                  if(((u_27 != NULL) && (u_27 != b_28)))
                                                                    _fail(b_28);
                                                                  else
                                                                    u_27 = b_28;
                                                                  {
                                                                    ATerm d_28 = NULL;
                                                                    t = not_null(u_27);
                                                                    {
                                                                      c_28 = t;
                                                                      {
                                                                        if(((w_27 != NULL) && (w_27 != c_28)))
                                                                          _fail(c_28);
                                                                        else
                                                                          w_27 = c_28;
                                                                        {
                                                                          t = not_null(x_26);
                                                                          {
                                                                            t = tvars_0(t);
                                                                            {
                                                                              d_28 = t;
                                                                              {
                                                                                if(((v_27 != NULL) && (v_27 != d_28)))
                                                                                  _fail(d_28);
                                                                                else
                                                                                  v_27 = d_28;
                                                                                {
                                                                                  ATerm o_1 (ATerm t)
                                                                                  {
                                                                                    t = term_l_14;
                                                                                    return(t);
                                                                                  }
                                                                                  ATerm p_1 (ATerm t)
                                                                                  {
                                                                                    ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
                                                                                    ATerm q_1 (ATerm t)
                                                                                    {
                                                                                      ATerm e_28 = NULL,g_28 = NULL;
                                                                                      ATerm f_28 = NULL;
                                                                                      f_28 = t;
                                                                                      if(((e_28 != NULL) && (e_28 != f_28)))
                                                                                        _fail(f_28);
                                                                                      else
                                                                                        e_28 = f_28;
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_28));
                                                                                        {
                                                                                          g_28 = t;
                                                                                          {
                                                                                            ATerm m_14;
                                                                                            m_14 = t;
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(w_27), not_null(g_28)), term_o_14);
                                                                                              {
                                                                                                ATerm r_1 (ATerm t)
                                                                                                {
                                                                                                  t = term_l_14;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = assert_1(t, r_1);
                                                                                              }
                                                                                            }
                                                                                            t = m_14;
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                      return(t);
                                                                                    }
                                                                                    t = map_1(t, q_1);
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_27), not_null(c_27));
                                                                                      {
                                                                                        t = alltd_1(t, Replace_0);
                                                                                        {
                                                                                          i_28 = t;
                                                                                          b_26 :
                                                                                          if(match_cons(i_28, sym__2))
                                                                                            {
                                                                                              j_28 = ATgetArgument(i_28, 0);
                                                                                              k_28 = ATgetArgument(i_28, 1);
                                                                                              {
                                                                                                if(((x_27 != NULL) && (x_27 != j_28)))
                                                                                                  _fail(j_28);
                                                                                                else
                                                                                                  x_27 = j_28;
                                                                                                if(((y_27 != NULL) && (y_27 != k_28)))
                                                                                                  _fail(k_28);
                                                                                                else
                                                                                                  y_27 = k_28;
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
                                                                                  t = scope_2(t, o_1, p_1);
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
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(x_27)), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_27))));
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
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL;
  ATerm a_30 (ATerm t)
  {
    ATerm s_29 = NULL,t_29 = NULL;
    t = not_null(h_29);
    {
      ATerm s_1 (ATerm t)
      {
        t = term_l_14;
        return(t);
      }
      t = rewrite_1(t, s_1);
      {
        s_29 = t;
        a_29 :
        if(match_cons(s_29, sym_Defined_1))
          {
            t_29 = ATgetArgument(s_29, 0);
            b_29 :
            if(!(match_string(t_29, "l_0")))
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
    t = not_null(j_29);
    return(t);
  }
  ATerm b_30 (ATerm t)
  {
    ATerm x_29 = NULL,y_29 = NULL;
    t = not_null(h_29);
    {
      ATerm t_1 (ATerm t)
      {
        t = term_l_14;
        return(t);
      }
      t = rewrite_1(t, t_1);
      {
        x_29 = t;
        c_29 :
        if(match_cons(x_29, sym_Defined_1))
          {
            y_29 = ATgetArgument(x_29, 0);
            d_29 :
            if(!(match_string(y_29, "j_0")))
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
    t = not_null(j_29);
    return(t);
  }
  h_29 = t;
  e_29 :
  if(match_cons(h_29, sym_App_2))
    {
      i_29 = ATgetArgument(h_29, 0);
      j_29 = ATgetArgument(h_29, 1);
      f_29 :
      if(match_cons(j_29, sym_Var_1))
        {
          g_29 = ATgetArgument(j_29, 0);
          {
            ATerm q_14 = t;
            int s_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_29 = NULL,o_29 = NULL;
                t = not_null(h_29);
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = term_l_14;
                    return(t);
                  }
                  t = rewrite_1(t, u_1);
                  {
                    n_29 = t;
                    y_28 :
                    if(match_cons(n_29, sym_Defined_1))
                      {
                        o_29 = ATgetArgument(n_29, 0);
                        z_28 :
                        if(!(match_string(o_29, "u_0")))
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
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_29));
                ;
                LocalPopChoice(s_14);
              }
            else
              {
                t = q_14;
                {
                  ATerm t_14 = t;
                  int w_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = a_30(t);
                      ;
                      LocalPopChoice(w_14);
                    }
                  else
                    {
                      t = t_14;
                      t = b_30(t);
                    }
                }
              }
          }
        }
      else
        {
          ATerm a_15 = t;
          int h_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_30(t);
              ;
              LocalPopChoice(h_15);
            }
          else
            {
              t = a_15;
              t = b_30(t);
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
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL;
  e_30 = t;
  d_30 :
  if(((ATgetType(e_30) == AT_LIST) && !(ATisEmpty(e_30))))
    {
      f_30 = ATgetFirst((ATermList) e_30);
      g_30 = (ATerm) ATgetNext((ATermList) e_30);
      t = not_null(g_30);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
  m_30 = t;
  l_30 :
  if(match_cons(m_30, sym__2))
    {
      n_30 = ATgetArgument(m_30, 0);
      o_30 = ATgetArgument(m_30, 1);
      {
        ATerm l_15;
        l_15 = t;
        {
          ATerm r_30 = NULL;
          ATerm s_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_30), not_null(o_30));
          {
            ATerm r_15 = t;
            int s_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(s_15);
              }
            else
              {
                t = r_15;
                t = (ATerm) ATempty;
              }
            {
              s_30 = t;
              if(((r_30 != NULL) && (r_30 != s_30)))
                _fail(s_30);
              else
                r_30 = s_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_30), not_null(o_30), not_null(r_30));
            t = table_put_0(t);
          }
        }
        t = l_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm d_123 (ATerm))
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  ATerm t_15;
  t_15 = t;
  {
    ATerm c_31 = NULL;
    ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
    t = d_123(t);
    {
      c_31 = t;
      {
        if(((b_31 != NULL) && (b_31 != c_31)))
          _fail(c_31);
        else
          b_31 = c_31;
        {
          ATerm u_15 = t;
          int v_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_31), term_w_15);
              t = table_get_0(t);
              ;
              LocalPopChoice(v_15);
            }
          else
            {
              t = u_15;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            d_31 = t;
            y_30 :
            if(((ATgetType(d_31) == AT_LIST) && !(ATisEmpty(d_31))))
              {
                e_31 = ATgetFirst((ATermList) d_31);
                f_31 = (ATerm) ATgetNext((ATermList) d_31);
                {
                  if(((a_31 != NULL) && (a_31 != e_31)))
                    _fail(e_31);
                  else
                    a_31 = e_31;
                  {
                    if(((z_30 != NULL) && (z_30 != f_31)))
                      _fail(f_31);
                    else
                      z_30 = f_31;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(b_31), term_w_15, not_null(z_30));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(a_31);
                          {
                            ATerm v_1 (ATerm t)
                            {
                              ATerm g_31 = NULL;
                              g_31 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_31), not_null(g_31));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, v_1);
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
  t = t_15;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm c_114 (ATerm), ATerm d_114 (ATerm))
{
  ATerm x_15 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_114(t);
      t = d_114(t);
      ;
      LocalPopChoice(g_16);
    }
  else
    {
      t = x_15;
      {
        t = d_114(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm c_123 (ATerm))
{
  ATerm n_31 = NULL;
  ATerm j_16;
  j_16 = t;
  {
    ATerm o_31 = NULL;
    ATerm p_31 = NULL;
    t = c_123(t);
    {
      o_31 = t;
      {
        if(((n_31 != NULL) && (n_31 != o_31)))
          _fail(o_31);
        else
          n_31 = o_31;
        {
          ATerm q_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_31), term_w_15);
          {
            ATerm k_16 = t;
            int l_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(l_16);
              }
            else
              {
                t = k_16;
                t = (ATerm) ATempty;
              }
            {
              q_31 = t;
              if(((p_31 != NULL) && (p_31 != q_31)))
                _fail(q_31);
              else
                p_31 = q_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_31), term_w_15, (ATerm) ATinsert(CheckATermList(not_null(p_31)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = j_16;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm e_123 (ATerm), ATerm f_123 (ATerm))
{
  t = begin_scope_1(t, e_123);
  {
    ATerm w_1 (ATerm t)
    {
      t = end_scope_1(t, e_123);
      return(t);
    }
    t = restore_always_2(t, f_123, w_1);
  }
  return(t);
}
ATerm replace_application_0 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL;
  x_31 = t;
  w_31 :
  if(match_cons(x_31, sym__3))
    {
      y_31 = ATgetArgument(x_31, 0);
      z_31 = ATgetArgument(x_31, 1);
      a_32 = ATgetArgument(x_31, 2);
      {
        ATerm e_32 = NULL;
        ATerm x_1 (ATerm t)
        {
          t = term_l_14;
          return(t);
        }
        ATerm y_1 (ATerm t)
        {
          ATerm h_32 = NULL;
          t = not_null(z_31);
          {
            t = tvars_0(t);
            {
              ATerm a_2 (ATerm t)
              {
                ATerm f_32 = NULL;
                f_32 = t;
                {
                  ATerm m_16;
                  m_16 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(y_31), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_32))), term_o_16);
                    {
                      ATerm c_2 (ATerm t)
                      {
                        t = term_l_14;
                        return(t);
                      }
                      t = assert_1(t, c_2);
                    }
                  }
                  t = m_16;
                }
                return(t);
              }
              t = map_1(t, a_2);
              {
                t = not_null(a_32);
                {
                  t = alltd_1(t, Replace_0);
                  {
                    h_32 = t;
                    if(((e_32 != NULL) && (e_32 != h_32)))
                      _fail(h_32);
                    else
                      e_32 = h_32;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, x_1, y_1);
        t = not_null(e_32);
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
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL;
  i_33 = t;
  z_32 :
  if(match_cons(i_33, sym_Seq_2))
    {
      j_33 = ATgetArgument(i_33, 0);
      o_33 = ATgetArgument(i_33, 1);
      a_33 :
      if(match_cons(j_33, sym_CallT_3))
        {
          k_33 = ATgetArgument(j_33, 0);
          m_33 = ATgetArgument(j_33, 1);
          n_33 = ATgetArgument(j_33, 2);
          b_33 :
          if(match_cons(k_33, sym_SVar_1))
            {
              l_33 = ATgetArgument(k_33, 0);
              c_33 :
              if(match_string(l_33, "mark"))
                {
                  d_33 :
                  if(((ATgetType(m_33) == AT_LIST) && ATisEmpty(m_33)))
                    {
                      e_33 :
                      if(((ATgetType(n_33) == AT_LIST) && ATisEmpty(n_33)))
                        {
                          f_33 :
                          if(match_cons(o_33, sym_Seq_2))
                            {
                              p_33 = ATgetArgument(o_33, 0);
                              r_33 = ATgetArgument(o_33, 1);
                              g_33 :
                              if(match_cons(p_33, sym_Match_1))
                                {
                                  q_33 = ATgetArgument(p_33, 0);
                                  h_33 :
                                  if(match_cons(r_33, sym_Build_1))
                                    {
                                      s_33 = ATgetArgument(r_33, 0);
                                      {
                                        ATerm t_16 = t;
                                        int u_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm w_33 = NULL,x_33 = NULL;
                                            ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL;
                                            t = term_w_16;
                                            {
                                              ATerm d_2 (ATerm t)
                                              {
                                                t = term_z_16;
                                                return(t);
                                              }
                                              t = rewrite_1(t, d_2);
                                              {
                                                y_33 = t;
                                                p_32 :
                                                if(match_cons(y_33, sym_Defined_2))
                                                  {
                                                    z_33 = ATgetArgument(y_33, 0);
                                                    a_34 = ATgetArgument(y_33, 1);
                                                    q_32 :
                                                    if(match_string(z_33, "o_0"))
                                                      {
                                                        ATerm b_34 = NULL;
                                                        if(((w_33 != NULL) && (w_33 != a_34)))
                                                          _fail(a_34);
                                                        else
                                                          w_33 = a_34;
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__3, not_null(w_33), not_null(q_33), not_null(s_33));
                                                          {
                                                            t = replace_application_0(t);
                                                            {
                                                              b_34 = t;
                                                              if(((x_33 != NULL) && (x_33 != b_34)))
                                                                _fail(b_34);
                                                              else
                                                                x_33 = b_34;
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
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_33)), (ATerm) ATmakeAppl(sym_Build_1, not_null(x_33)));
                                            ;
                                            LocalPopChoice(u_16);
                                          }
                                        else
                                          {
                                            t = t_16;
                                            {
                                              ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL;
                                              ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
                                              t = term_w_16;
                                              {
                                                ATerm e_2 (ATerm t)
                                                {
                                                  t = term_z_16;
                                                  return(t);
                                                }
                                                t = rewrite_1(t, e_2);
                                                {
                                                  j_34 = t;
                                                  x_32 :
                                                  if(match_cons(j_34, sym_Defined_2))
                                                    {
                                                      k_34 = ATgetArgument(j_34, 0);
                                                      l_34 = ATgetArgument(j_34, 1);
                                                      y_32 :
                                                      if(match_string(k_34, "e_0"))
                                                        {
                                                          ATerm m_34 = NULL;
                                                          if(((f_34 != NULL) && (f_34 != l_34)))
                                                            _fail(l_34);
                                                          else
                                                            f_34 = l_34;
                                                          {
                                                            ATerm n_34 = NULL;
                                                            t = not_null(f_34);
                                                            {
                                                              m_34 = t;
                                                              {
                                                                if(((h_34 != NULL) && (h_34 != m_34)))
                                                                  _fail(m_34);
                                                                else
                                                                  h_34 = m_34;
                                                                {
                                                                  t = not_null(q_33);
                                                                  {
                                                                    t = tvars_0(t);
                                                                    {
                                                                      n_34 = t;
                                                                      {
                                                                        if(((g_34 != NULL) && (g_34 != n_34)))
                                                                          _fail(n_34);
                                                                        else
                                                                          g_34 = n_34;
                                                                        {
                                                                          ATerm f_2 (ATerm t)
                                                                          {
                                                                            t = term_l_14;
                                                                            return(t);
                                                                          }
                                                                          ATerm g_2 (ATerm t)
                                                                          {
                                                                            ATerm s_34 = NULL;
                                                                            ATerm h_2 (ATerm t)
                                                                            {
                                                                              ATerm o_34 = NULL,q_34 = NULL;
                                                                              ATerm p_34 = NULL;
                                                                              p_34 = t;
                                                                              if(((o_34 != NULL) && (o_34 != p_34)))
                                                                                _fail(p_34);
                                                                              else
                                                                                o_34 = p_34;
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_34));
                                                                                {
                                                                                  q_34 = t;
                                                                                  {
                                                                                    ATerm a_17;
                                                                                    a_17 = t;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(h_34), not_null(q_34)), term_c_17);
                                                                                      {
                                                                                        ATerm i_2 (ATerm t)
                                                                                        {
                                                                                          t = term_l_14;
                                                                                          return(t);
                                                                                        }
                                                                                        t = assert_1(t, i_2);
                                                                                      }
                                                                                    }
                                                                                    t = a_17;
                                                                                  }
                                                                                }
                                                                              }
                                                                              return(t);
                                                                            }
                                                                            t = map_1(t, h_2);
                                                                            {
                                                                              t = not_null(s_33);
                                                                              {
                                                                                t = alltd_1(t, Replace_0);
                                                                                {
                                                                                  s_34 = t;
                                                                                  if(((i_34 != NULL) && (i_34 != s_34)))
                                                                                    _fail(s_34);
                                                                                  else
                                                                                    i_34 = s_34;
                                                                                }
                                                                              }
                                                                            }
                                                                            return(t);
                                                                          }
                                                                          t = scope_2(t, f_2, g_2);
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
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_33)), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_34)));
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
  ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL;
  o_35 = t;
  g_35 :
  if(match_cons(o_35, sym_App_2))
    {
      p_35 = ATgetArgument(o_35, 0);
      w_35 = ATgetArgument(o_35, 1);
      h_35 :
      if(match_cons(p_35, sym_CallT_3))
        {
          q_35 = ATgetArgument(p_35, 0);
          s_35 = ATgetArgument(p_35, 1);
          v_35 = ATgetArgument(p_35, 2);
          i_35 :
          if(match_cons(q_35, sym_SVar_1))
            {
              r_35 = ATgetArgument(q_35, 0);
              j_35 :
              if(match_string(r_35, "bottomup_1_0"))
                {
                  k_35 :
                  if(((ATgetType(s_35) == AT_LIST) && !(ATisEmpty(s_35))))
                    {
                      t_35 = ATgetFirst((ATermList) s_35);
                      u_35 = (ATerm) ATgetNext((ATermList) s_35);
                      l_35 :
                      if(((ATgetType(u_35) == AT_LIST) && ATisEmpty(u_35)))
                        {
                          m_35 :
                          if(((ATgetType(v_35) == AT_LIST) && ATisEmpty(v_35)))
                            {
                              n_35 :
                              if(match_cons(w_35, sym_Op_2))
                                {
                                  x_35 = ATgetArgument(w_35, 0);
                                  y_35 = ATgetArgument(w_35, 1);
                                  {
                                    ATerm c_36 = NULL;
                                    ATerm f_36 = NULL;
                                    t = not_null(y_35);
                                    {
                                      ATerm j_2 (ATerm t)
                                      {
                                        ATerm d_36 = NULL;
                                        d_36 = t;
                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_h_17, (ATerm)ATinsert(ATempty, not_null(t_35)), (ATerm) ATempty), not_null(d_36));
                                        return(t);
                                      }
                                      t = map_1(t, j_2);
                                      {
                                        f_36 = t;
                                        if(((c_36 != NULL) && (c_36 != f_36)))
                                          _fail(f_36);
                                        else
                                          c_36 = f_36;
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_App_2, not_null(t_35), (ATerm) ATmakeAppl(sym_Op_2, not_null(x_35), not_null(c_36)));
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL;
  m_36 = t;
  k_36 :
  if(match_cons(m_36, sym_Seq_2))
    {
      n_36 = ATgetArgument(m_36, 0);
      p_36 = ATgetArgument(m_36, 1);
      l_36 :
      if(match_cons(n_36, sym_Build_1))
        {
          o_36 = ATgetArgument(n_36, 0);
          t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_App_2, not_null(p_36), not_null(o_36)));
        }
      else
        {
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
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
  w_36 = t;
  u_36 :
  if(match_cons(w_36, sym_Seq_2))
    {
      x_36 = ATgetArgument(w_36, 0);
      a_37 = ATgetArgument(w_36, 1);
      v_36 :
      if(match_cons(x_36, sym_Scope_2))
        {
          y_36 = ATgetArgument(x_36, 0);
          z_36 = ATgetArgument(x_36, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_36), (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_36), not_null(a_37)));
        }
      else
        {
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
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL;
  k_37 = t;
  i_37 :
  if(match_cons(k_37, sym_Seq_2))
    {
      l_37 = ATgetArgument(k_37, 0);
      o_37 = ATgetArgument(k_37, 1);
      j_37 :
      if(match_cons(l_37, sym_LChoice_2))
        {
          m_37 = ATgetArgument(l_37, 0);
          n_37 = ATgetArgument(l_37, 1);
          {
            ATerm t_37 = NULL,u_37 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_k_17, not_null(o_37));
            {
              ATerm k_2 (ATerm t)
              {
                t = term_n_17;
                return(t);
              }
              t = rewrite_1(t, k_2);
              {
                t_37 = t;
                g_37 :
                if(match_cons(t_37, sym_Defined_1))
                  {
                    u_37 = ATgetArgument(t_37, 0);
                    h_37 :
                    if(!(match_string(u_37, "b_2")))
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
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(m_37), not_null(o_37)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_37), not_null(o_37)));
          }
        }
      else
        {
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
  ATerm m_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL;
  m_41 = t;
  c_41 :
  if(match_cons(m_41, sym_Seq_2))
    {
      o_41 = ATgetArgument(m_41, 0);
      r_41 = ATgetArgument(m_41, 1);
      d_41 :
      if(match_cons(o_41, sym_Choice_2))
        {
          p_41 = ATgetArgument(o_41, 0);
          q_41 = ATgetArgument(o_41, 1);
          {
            ATerm w_41 = NULL,x_41 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_o_17, not_null(r_41));
            {
              ATerm l_2 (ATerm t)
              {
                t = term_p_17;
                return(t);
              }
              t = rewrite_1(t, l_2);
              {
                w_41 = t;
                r_40 :
                if(match_cons(w_41, sym_Defined_1))
                  {
                    x_41 = ATgetArgument(w_41, 0);
                    b_41 :
                    if(!(match_string(x_41, "z_1")))
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
            t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(p_41), not_null(r_41)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_41), not_null(r_41)));
          }
        }
      else
        {
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
  ATerm m_2 (ATerm t)
  {
    ATerm q_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL;
        v_43 = t;
        f_43 :
        if(match_cons(v_43, sym_Seq_2))
          {
            w_43 = ATgetArgument(v_43, 0);
            d_44 = ATgetArgument(v_43, 1);
            g_43 :
            if(match_cons(w_43, sym_Choice_2))
              {
                x_43 = ATgetArgument(w_43, 0);
                z_43 = ATgetArgument(w_43, 1);
                {
                  ATerm m_44 = NULL,o_44 = NULL;
                  ATerm b_18;
                  b_18 = t;
                  {
                    ATerm k_44 = NULL,l_44 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, term_o_17, not_null(d_44));
                    {
                      ATerm n_2 (ATerm t)
                      {
                        t = term_p_17;
                        return(t);
                      }
                      t = rewrite_1(t, n_2);
                      {
                        k_44 = t;
                        j_42 :
                        if(match_cons(k_44, sym_Defined_1))
                          {
                            l_44 = ATgetArgument(k_44, 0);
                            k_42 :
                            if(!(match_string(l_44, "z_1")))
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
                  t = b_18;
                  {
                    ATerm c_18;
                    c_18 = t;
                    {
                      ATerm n_44 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_43), not_null(d_44));
                      {
                        t = m_2(t);
                        {
                          n_44 = t;
                          if(((m_44 != NULL) && (m_44 != n_44)))
                            _fail(n_44);
                          else
                            m_44 = n_44;
                        }
                      }
                    }
                    t = c_18;
                    {
                      ATerm p_44 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_43), not_null(d_44));
                      {
                        t = m_2(t);
                        {
                          p_44 = t;
                          if(((o_44 != NULL) && (o_44 != p_44)))
                            _fail(p_44);
                          else
                            o_44 = p_44;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(m_44), not_null(o_44));
                        t = m_2(t);
                      }
                    }
                  }
                }
              }
            else
              {
                if(match_cons(w_43, sym_LChoice_2))
                  {
                    x_43 = ATgetArgument(w_43, 0);
                    z_43 = ATgetArgument(w_43, 1);
                    {
                      ATerm w_44 = NULL,y_44 = NULL;
                      ATerm d_18;
                      d_18 = t;
                      {
                        ATerm u_44 = NULL,v_44 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, term_k_17, not_null(d_44));
                        {
                          ATerm o_2 (ATerm t)
                          {
                            t = term_n_17;
                            return(t);
                          }
                          t = rewrite_1(t, o_2);
                          {
                            u_44 = t;
                            n_42 :
                            if(match_cons(u_44, sym_Defined_1))
                              {
                                v_44 = ATgetArgument(u_44, 0);
                                o_42 :
                                if(!(match_string(v_44, "b_2")))
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
                      t = d_18;
                      {
                        ATerm m_18;
                        m_18 = t;
                        {
                          ATerm x_44 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_43), not_null(d_44));
                          {
                            t = m_2(t);
                            {
                              x_44 = t;
                              if(((w_44 != NULL) && (w_44 != x_44)))
                                _fail(x_44);
                              else
                                w_44 = x_44;
                            }
                          }
                        }
                        t = m_18;
                        {
                          ATerm z_44 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_43), not_null(d_44));
                          {
                            t = m_2(t);
                            {
                              z_44 = t;
                              if(((y_44 != NULL) && (y_44 != z_44)))
                                _fail(z_44);
                              else
                                y_44 = z_44;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(w_44), not_null(y_44));
                            t = m_2(t);
                          }
                        }
                      }
                    }
                  }
                else
                  {
                    if(match_cons(w_43, sym_Scope_2))
                      {
                        x_43 = ATgetArgument(w_43, 0);
                        z_43 = ATgetArgument(w_43, 1);
                        {
                          ATerm d_45 = NULL;
                          ATerm e_45 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_43), not_null(d_44));
                          {
                            t = m_2(t);
                            {
                              e_45 = t;
                              if(((d_45 != NULL) && (d_45 != e_45)))
                                _fail(e_45);
                              else
                                d_45 = e_45;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_43), not_null(d_45));
                            t = m_2(t);
                          }
                        }
                      }
                    else
                      {
                        if(match_cons(w_43, sym_Seq_2))
                          {
                            x_43 = ATgetArgument(w_43, 0);
                            z_43 = ATgetArgument(w_43, 1);
                            {
                              ATerm n_45 = NULL;
                              ATerm o_45 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_43), not_null(d_44));
                              {
                                t = m_2(t);
                                {
                                  o_45 = t;
                                  if(((n_45 != NULL) && (n_45 != o_45)))
                                    _fail(o_45);
                                  else
                                    n_45 = o_45;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_43), not_null(n_45));
                                t = m_2(t);
                              }
                            }
                          }
                        else
                          {
                            if(match_cons(w_43, sym_Build_1))
                              {
                                x_43 = ATgetArgument(w_43, 0);
                                {
                                  ATerm a_46 = NULL;
                                  ATerm b_46 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(d_44), not_null(x_43));
                                  {
                                    t = m_2(t);
                                    {
                                      b_46 = t;
                                      if(((a_46 != NULL) && (a_46 != b_46)))
                                        _fail(b_46);
                                      else
                                        a_46 = b_46;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym_Build_1, not_null(a_46));
                                    t = m_2(t);
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
            if(match_cons(v_43, sym_LChoice_2))
              {
                w_43 = ATgetArgument(v_43, 0);
                d_44 = ATgetArgument(v_43, 1);
                h_43 :
                if(match_cons(w_43, sym_LChoice_2))
                  {
                    x_43 = ATgetArgument(w_43, 0);
                    z_43 = ATgetArgument(w_43, 1);
                    {
                      ATerm i_45 = NULL;
                      ATerm j_45 = NULL;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(z_43), not_null(d_44));
                      {
                        t = m_2(t);
                        {
                          j_45 = t;
                          if(((i_45 != NULL) && (i_45 != j_45)))
                            _fail(j_45);
                          else
                            i_45 = j_45;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(x_43), not_null(i_45));
                        t = m_2(t);
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
                if(match_cons(v_43, sym_Choice_2))
                  {
                    w_43 = ATgetArgument(v_43, 0);
                    d_44 = ATgetArgument(v_43, 1);
                    i_43 :
                    if(match_cons(w_43, sym_Choice_2))
                      {
                        x_43 = ATgetArgument(w_43, 0);
                        z_43 = ATgetArgument(w_43, 1);
                        {
                          ATerm s_45 = NULL;
                          ATerm x_45 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(z_43), not_null(d_44));
                          {
                            t = m_2(t);
                            {
                              x_45 = t;
                              if(((s_45 != NULL) && (s_45 != x_45)))
                                _fail(x_45);
                              else
                                s_45 = x_45;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(x_43), not_null(s_45));
                            t = m_2(t);
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
                    if(match_cons(v_43, sym_App_2))
                      {
                        w_43 = ATgetArgument(v_43, 0);
                        d_44 = ATgetArgument(v_43, 1);
                        j_43 :
                        if(match_cons(w_43, sym_CallT_3))
                          {
                            x_43 = ATgetArgument(w_43, 0);
                            z_43 = ATgetArgument(w_43, 1);
                            c_44 = ATgetArgument(w_43, 2);
                            k_43 :
                            if(match_cons(x_43, sym_SVar_1))
                              {
                                y_43 = ATgetArgument(x_43, 0);
                                l_43 :
                                if(match_string(y_43, "bottomup_1_0"))
                                  {
                                    m_43 :
                                    if(((ATgetType(z_43) == AT_LIST) && !(ATisEmpty(z_43))))
                                      {
                                        a_44 = ATgetFirst((ATermList) z_43);
                                        b_44 = (ATerm) ATgetNext((ATermList) z_43);
                                        n_43 :
                                        if(((ATgetType(b_44) == AT_LIST) && ATisEmpty(b_44)))
                                          {
                                            o_43 :
                                            if(((ATgetType(c_44) == AT_LIST) && ATisEmpty(c_44)))
                                              {
                                                p_43 :
                                                if(match_cons(d_44, sym_Op_2))
                                                  {
                                                    e_44 = ATgetArgument(d_44, 0);
                                                    f_44 = ATgetArgument(d_44, 1);
                                                    {
                                                      ATerm n_46 = NULL,r_46 = NULL;
                                                      ATerm n_18;
                                                      n_18 = t;
                                                      {
                                                        ATerm q_46 = NULL;
                                                        t = not_null(f_44);
                                                        {
                                                          ATerm p_2 (ATerm t)
                                                          {
                                                            ATerm o_46 = NULL;
                                                            o_46 = t;
                                                            t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_h_17, (ATerm)ATinsert(ATempty, not_null(a_44)), (ATerm) ATempty), not_null(o_46));
                                                            return(t);
                                                          }
                                                          t = map_1(t, p_2);
                                                          {
                                                            q_46 = t;
                                                            if(((n_46 != NULL) && (n_46 != q_46)))
                                                              _fail(q_46);
                                                            else
                                                              n_46 = q_46;
                                                          }
                                                        }
                                                      }
                                                      t = n_18;
                                                      {
                                                        ATerm s_46 = NULL,u_46 = NULL;
                                                        ATerm t_46 = NULL;
                                                        t = not_null(n_46);
                                                        {
                                                          t = bottomup_1(t, m_2);
                                                          {
                                                            t_46 = t;
                                                            if(((s_46 != NULL) && (s_46 != t_46)))
                                                              _fail(t_46);
                                                            else
                                                              s_46 = t_46;
                                                          }
                                                        }
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Op_2, not_null(e_44), not_null(s_46));
                                                          {
                                                            t = m_2(t);
                                                            {
                                                              u_46 = t;
                                                              if(((r_46 != NULL) && (r_46 != u_46)))
                                                                _fail(u_46);
                                                              else
                                                                r_46 = u_46;
                                                            }
                                                          }
                                                        }
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(a_44), not_null(r_46));
                                                          t = m_2(t);
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
        LocalPopChoice(t_17);
      }
    else
      {
        t = q_17;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, m_2);
  return(t);
}
ATerm SeqOverScopeL_0 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL;
  u_47 = t;
  s_47 :
  if(match_cons(u_47, sym_Seq_2))
    {
      v_47 = ATgetArgument(u_47, 0);
      w_47 = ATgetArgument(u_47, 1);
      t_47 :
      if(match_cons(w_47, sym_Scope_2))
        {
          x_47 = ATgetArgument(w_47, 0);
          y_47 = ATgetArgument(w_47, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_47), (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_47), not_null(y_47)));
        }
      else
        {
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
  ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL;
  p_48 = t;
  n_48 :
  if(match_cons(p_48, sym_Seq_2))
    {
      q_48 = ATgetArgument(p_48, 0);
      r_48 = ATgetArgument(p_48, 1);
      o_48 :
      if(match_cons(r_48, sym_LChoice_2))
        {
          s_48 = ATgetArgument(r_48, 0);
          t_48 = ATgetArgument(r_48, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(q_48), not_null(s_48)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_48), not_null(t_48)));
        }
      else
        {
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
  ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL;
  b_49 = t;
  z_48 :
  if(match_cons(b_49, sym_Seq_2))
    {
      c_49 = ATgetArgument(b_49, 0);
      d_49 = ATgetArgument(b_49, 1);
      a_49 :
      if(match_cons(d_49, sym_Choice_2))
        {
          e_49 = ATgetArgument(d_49, 0);
          f_49 = ATgetArgument(d_49, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(c_49), not_null(e_49)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_49), not_null(f_49)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm w_110 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    t = bottomup_1(t, w_110);
    return(t);
  }
  t = _all(t, q_2);
  t = w_110(t);
  return(t);
}
ATerm innermost_1 (ATerm t, ATerm l_126 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm s_2 (ATerm t)
    {
      t = l_126(t);
      {
        ATerm t_2 (ATerm t)
        {
          ATerm o_18 = t;
          int r_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_126(t);
              t = bottomup_1(t, t_2);
              ;
              LocalPopChoice(r_18);
            }
          else
            {
              t = o_18;
              {
              }
            }
          return(t);
        }
        t = bottomup_1(t, t_2);
      }
      return(t);
    }
    t = try_1(t, s_2);
    return(t);
  }
  t = bottomup_1(t, r_2);
  return(t);
}
ATerm propagate_mark_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL;
        d_50 = t;
        b_50 :
        if(match_cons(d_50, sym_Seq_2))
          {
            e_50 = ATgetArgument(d_50, 0);
            f_50 = ATgetArgument(d_50, 1);
            c_50 :
            if(match_cons(f_50, sym_Choice_2))
              {
                g_50 = ATgetArgument(f_50, 0);
                h_50 = ATgetArgument(f_50, 1);
                {
                  ATerm l_50 = NULL,n_50 = NULL;
                  ATerm a_19;
                  a_19 = t;
                  {
                    ATerm m_50 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_50), not_null(g_50));
                    {
                      t = u_2(t);
                      {
                        m_50 = t;
                        if(((l_50 != NULL) && (l_50 != m_50)))
                          _fail(m_50);
                        else
                          l_50 = m_50;
                      }
                    }
                  }
                  t = a_19;
                  {
                    ATerm o_50 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_50), not_null(h_50));
                    {
                      t = u_2(t);
                      {
                        o_50 = t;
                        if(((n_50 != NULL) && (n_50 != o_50)))
                          _fail(o_50);
                        else
                          n_50 = o_50;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(l_50), not_null(n_50));
                      t = u_2(t);
                    }
                  }
                }
              }
            else
              {
                if(match_cons(f_50, sym_LChoice_2))
                  {
                    g_50 = ATgetArgument(f_50, 0);
                    h_50 = ATgetArgument(f_50, 1);
                    {
                      ATerm s_50 = NULL,u_50 = NULL;
                      ATerm b_19;
                      b_19 = t;
                      {
                        ATerm t_50 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_50), not_null(g_50));
                        {
                          t = u_2(t);
                          {
                            t_50 = t;
                            if(((s_50 != NULL) && (s_50 != t_50)))
                              _fail(t_50);
                            else
                              s_50 = t_50;
                          }
                        }
                      }
                      t = b_19;
                      {
                        ATerm v_50 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_50), not_null(h_50));
                        {
                          t = u_2(t);
                          {
                            v_50 = t;
                            if(((u_50 != NULL) && (u_50 != v_50)))
                              _fail(v_50);
                            else
                              u_50 = v_50;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(s_50), not_null(u_50));
                          t = u_2(t);
                        }
                      }
                    }
                  }
                else
                  {
                    if(match_cons(f_50, sym_Scope_2))
                      {
                        g_50 = ATgetArgument(f_50, 0);
                        h_50 = ATgetArgument(f_50, 1);
                        {
                          ATerm z_50 = NULL;
                          ATerm a_51 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_50), not_null(h_50));
                          {
                            t = u_2(t);
                            {
                              a_51 = t;
                              if(((z_50 != NULL) && (z_50 != a_51)))
                                _fail(a_51);
                              else
                                z_50 = a_51;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_50), not_null(z_50));
                            t = u_2(t);
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
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, u_2);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm l_100 (ATerm))
{
  ATerm q_51 = NULL,r_51 = NULL;
  q_51 = t;
  p_51 :
  if(match_cons(q_51, sym_Build_1))
    {
      r_51 = ATgetArgument(q_51, 0);
      {
        ATerm w_51 = NULL,y_51 = NULL;
        ATerm x_51 = NULL;
        t = SSLgetAnnotations(not_null(q_51));
        {
          x_51 = t;
          if(((w_51 != NULL) && (w_51 != x_51)))
            _fail(x_51);
          else
            w_51 = x_51;
        }
        {
          t = not_null(r_51);
          {
            ATerm a_52 = NULL;
            t = l_100(t);
            {
              y_51 = t;
              {
                ATerm b_52 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(y_51)), not_null(w_51));
                {
                  b_52 = t;
                  if(((a_52 != NULL) && (a_52 != b_52)))
                    _fail(b_52);
                  else
                    a_52 = b_52;
                }
                t = not_null(a_52);
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
ATerm Seq_2 (ATerm t, ATerm r_100 (ATerm), ATerm s_100 (ATerm))
{
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL;
  m_52 = t;
  l_52 :
  if(match_cons(m_52, sym_Seq_2))
    {
      n_52 = ATgetArgument(m_52, 0);
      o_52 = ATgetArgument(m_52, 1);
      {
        ATerm u_52 = NULL,w_52 = NULL;
        ATerm v_52 = NULL;
        t = SSLgetAnnotations(not_null(m_52));
        {
          v_52 = t;
          if(((u_52 != NULL) && (u_52 != v_52)))
            _fail(v_52);
          else
            u_52 = v_52;
        }
        {
          t = not_null(n_52);
          {
            ATerm j_53 = NULL;
            t = r_100(t);
            {
              w_52 = t;
              {
                t = not_null(o_52);
                {
                  ATerm l_53 = NULL;
                  t = s_100(t);
                  {
                    j_53 = t;
                    {
                      ATerm s_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(w_52), not_null(j_53)), not_null(u_52));
                      {
                        s_53 = t;
                        if(((l_53 != NULL) && (l_53 != s_53)))
                          _fail(s_53);
                        else
                          l_53 = s_53;
                      }
                      t = not_null(l_53);
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
ATerm Match_1 (ATerm t, ATerm k_100 (ATerm))
{
  ATerm f_54 = NULL,g_54 = NULL;
  f_54 = t;
  e_54 :
  if(match_cons(f_54, sym_Match_1))
    {
      g_54 = ATgetArgument(f_54, 0);
      {
        ATerm j_54 = NULL,l_54 = NULL;
        ATerm k_54 = NULL;
        t = SSLgetAnnotations(not_null(f_54));
        {
          k_54 = t;
          if(((j_54 != NULL) && (j_54 != k_54)))
            _fail(k_54);
          else
            j_54 = k_54;
        }
        {
          t = not_null(g_54);
          {
            ATerm n_54 = NULL;
            t = k_100(t);
            {
              l_54 = t;
              {
                ATerm o_54 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(l_54)), not_null(j_54));
                {
                  o_54 = t;
                  if(((n_54 != NULL) && (n_54 != o_54)))
                    _fail(o_54);
                  else
                    n_54 = o_54;
                }
                t = not_null(n_54);
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
ATerm LChoice_2 (ATerm t, ATerm t_100 (ATerm), ATerm u_100 (ATerm))
{
  ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL;
  g_55 = t;
  f_55 :
  if(match_cons(g_55, sym_LChoice_2))
    {
      h_55 = ATgetArgument(g_55, 0);
      i_55 = ATgetArgument(g_55, 1);
      {
        ATerm m_55 = NULL,o_55 = NULL;
        ATerm n_55 = NULL;
        t = SSLgetAnnotations(not_null(g_55));
        {
          n_55 = t;
          if(((m_55 != NULL) && (m_55 != n_55)))
            _fail(n_55);
          else
            m_55 = n_55;
        }
        {
          t = not_null(h_55);
          {
            ATerm r_55 = NULL;
            t = t_100(t);
            {
              o_55 = t;
              {
                t = not_null(i_55);
                {
                  ATerm t_55 = NULL;
                  t = u_100(t);
                  {
                    r_55 = t;
                    {
                      ATerm u_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(o_55), not_null(r_55)), not_null(m_55));
                      {
                        u_55 = t;
                        if(((t_55 != NULL) && (t_55 != u_55)))
                          _fail(u_55);
                        else
                          t_55 = u_55;
                      }
                      t = not_null(t_55);
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
ATerm Choice_2 (ATerm t, ATerm r_99 (ATerm), ATerm s_99 (ATerm))
{
  ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL;
  g_56 = t;
  f_56 :
  if(match_cons(g_56, sym_Choice_2))
    {
      h_56 = ATgetArgument(g_56, 0);
      i_56 = ATgetArgument(g_56, 1);
      {
        ATerm m_56 = NULL,o_56 = NULL;
        ATerm n_56 = NULL;
        t = SSLgetAnnotations(not_null(g_56));
        {
          n_56 = t;
          if(((m_56 != NULL) && (m_56 != n_56)))
            _fail(n_56);
          else
            m_56 = n_56;
        }
        {
          t = not_null(h_56);
          {
            ATerm q_56 = NULL;
            t = r_99(t);
            {
              o_56 = t;
              {
                t = not_null(i_56);
                {
                  ATerm s_56 = NULL;
                  t = s_99(t);
                  {
                    q_56 = t;
                    {
                      ATerm t_56 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(o_56), not_null(q_56)), not_null(m_56));
                      {
                        t_56 = t;
                        if(((s_56 != NULL) && (s_56 != t_56)))
                          _fail(t_56);
                        else
                          s_56 = t_56;
                      }
                      t = not_null(s_56);
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
  ATerm v_2 (ATerm t)
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Simplify_0(t);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        {
          ATerm e_19 = t;
          int h_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Choice_2(t, inline_rules_0, inline_rules_0);
              ;
              LocalPopChoice(h_19);
            }
          else
            {
              t = e_19;
              {
                ATerm m_19 = t;
                int n_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = LChoice_2(t, inline_rules_0, inline_rules_0);
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
                          ATerm w_2 (ATerm t)
                          {
                            ATerm x_2 (ATerm t)
                            {
                              t = Match_1(t, _id);
                              return(t);
                            }
                            ATerm y_2 (ATerm t)
                            {
                              t = Build_1(t, _id);
                              return(t);
                            }
                            t = Seq_2(t, x_2, y_2);
                            return(t);
                          }
                          t = Scope_2(t, _id, w_2);
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
                                ATerm z_2 (ATerm t)
                                {
                                  ATerm a_3 (ATerm t)
                                  {
                                    t = Match_1(t, _id);
                                    return(t);
                                  }
                                  ATerm b_3 (ATerm t)
                                  {
                                    ATerm c_3 (ATerm t)
                                    {
                                      t = Build_1(t, _id);
                                      return(t);
                                    }
                                    t = Seq_2(t, _id, c_3);
                                    return(t);
                                  }
                                  t = Seq_2(t, a_3, b_3);
                                  return(t);
                                }
                                t = Scope_2(t, _id, z_2);
                                ;
                                LocalPopChoice(r_19);
                              }
                            else
                              {
                                t = q_19;
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
  t = try_1(t, v_2);
  return(t);
}
ATerm bottomup_to_var_0 (ATerm t)
{
  ATerm b_57 = NULL;
  b_57 = t;
  {
    ATerm s_19;
    s_19 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_16, (ATerm) ATmakeAppl(sym_Defined_2, term_t_19, not_null(b_57)));
      {
        ATerm d_3 (ATerm t)
        {
          t = term_z_16;
          return(t);
        }
        t = assert_1(t, d_3);
      }
    }
    t = s_19;
    {
      ATerm u_19;
      u_19 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_14, (ATerm) ATmakeAppl(sym_Defined_2, term_v_19, not_null(b_57)));
        {
          ATerm e_3 (ATerm t)
          {
            t = term_k_14;
            return(t);
          }
          t = assert_1(t, e_3);
        }
      }
      t = u_19;
    }
  }
  return(t);
}
ATerm seq_over_choice_0 (ATerm t)
{
  ATerm f_57 = NULL;
  f_57 = t;
  {
    ATerm w_19;
    w_19 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_o_17, not_null(f_57)), term_y_19);
      {
        ATerm f_3 (ATerm t)
        {
          t = term_p_17;
          return(t);
        }
        t = assert_1(t, f_3);
      }
    }
    t = w_19;
    {
      ATerm z_19;
      z_19 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_k_17, not_null(f_57)), term_b_20);
        {
          ATerm g_3 (ATerm t)
          {
            t = term_n_17;
            return(t);
          }
          t = assert_1(t, g_3);
        }
      }
      t = z_19;
    }
  }
  return(t);
}
ATerm innermost_fusion_0 (ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL;
  w_57 = t;
  q_57 :
  if(match_cons(w_57, sym_CallT_3))
    {
      x_57 = ATgetArgument(w_57, 0);
      z_57 = ATgetArgument(w_57, 1);
      c_58 = ATgetArgument(w_57, 2);
      r_57 :
      if(match_cons(x_57, sym_SVar_1))
        {
          y_57 = ATgetArgument(x_57, 0);
          s_57 :
          if(match_string(y_57, "innermost_1_0"))
            {
              t_57 :
              if(((ATgetType(z_57) == AT_LIST) && !(ATisEmpty(z_57))))
                {
                  a_58 = ATgetFirst((ATermList) z_57);
                  b_58 = (ATerm) ATgetNext((ATermList) z_57);
                  u_57 :
                  if(((ATgetType(b_58) == AT_LIST) && ATisEmpty(b_58)))
                    {
                      v_57 :
                      if(((ATgetType(c_58) == AT_LIST) && ATisEmpty(c_58)))
                        {
                          {
                            ATerm e_58 = NULL,g_58 = NULL;
                            ATerm h_3 (ATerm t)
                            {
                              ATerm i_3 (ATerm t)
                              {
                                t = term_c_20;
                                return(t);
                              }
                              t = say_1(t, i_3);
                              return(t);
                            }
                            t = if_verbose2_1(t, h_3);
                            {
                              ATerm d_20;
                              d_20 = t;
                              {
                                ATerm f_58 = NULL;
                                t = new_0(t);
                                {
                                  f_58 = t;
                                  if(((e_58 != NULL) && (e_58 != f_58)))
                                    _fail(f_58);
                                  else
                                    e_58 = f_58;
                                }
                              }
                              t = d_20;
                              {
                                ATerm e_20;
                                e_20 = t;
                                {
                                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_17, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_58)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
                                  t = seq_over_choice_0(t);
                                }
                                t = e_20;
                                {
                                  ATerm g_20;
                                  g_20 = t;
                                  {
                                    t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_17, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_58)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
                                    t = bottomup_to_var_0(t);
                                  }
                                  t = g_20;
                                  {
                                    ATerm h_58 = NULL;
                                    t = not_null(a_58);
                                    {
                                      t = inline_rules_0(t);
                                      {
                                        h_58 = t;
                                        if(((g_58 != NULL) && (g_58 != h_58)))
                                          _fail(h_58);
                                        else
                                          g_58 = h_58;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_17, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, not_null(e_58), (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_x_13, not_null(g_58)), (ATerm) ATmakeAppl(sym_CallT_3, term_h_17, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_58)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_e_12))), (ATerm) ATempty);
                                      {
                                        t = propagate_mark_0(t);
                                        {
                                          t = fuse_with_bottomup_0(t);
                                          {
                                            ATerm j_3 (ATerm t)
                                            {
                                              ATerm k_20 = t;
                                              int l_20 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = BottomupToVarIsId_UnCond_0(t);
                                                  ;
                                                  LocalPopChoice(l_20);
                                                }
                                              else
                                                {
                                                  t = k_20;
                                                  {
                                                    ATerm m_20 = t;
                                                    int q_20 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = BottomupToVarIsId_Cond_0(t);
                                                        ;
                                                        LocalPopChoice(q_20);
                                                      }
                                                    else
                                                      {
                                                        t = m_20;
                                                        t = UnMark_0(t);
                                                      }
                                                  }
                                                }
                                              return(t);
                                            }
                                            t = alltd_1(t, j_3);
                                            {
                                              ATerm s_20 = t;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm k_3 (ATerm t)
                                                  {
                                                    ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL;
                                                    i_58 = t;
                                                    l_57 :
                                                    if(match_cons(i_58, sym_CallT_3))
                                                      {
                                                        j_58 = ATgetArgument(i_58, 0);
                                                        l_58 = ATgetArgument(i_58, 1);
                                                        m_58 = ATgetArgument(i_58, 2);
                                                        m_57 :
                                                        if(match_cons(j_58, sym_SVar_1))
                                                          {
                                                            k_58 = ATgetArgument(j_58, 0);
                                                            n_57 :
                                                            if(match_string(k_58, "mark"))
                                                              {
                                                                o_57 :
                                                                if(((ATgetType(l_58) == AT_LIST) && ATisEmpty(l_58)))
                                                                  {
                                                                    p_57 :
                                                                    if(((ATgetType(m_58) == AT_LIST) && ATisEmpty(m_58)))
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
                                                  t = oncetd_1(t, k_3);
                                                  {
                                                    ATerm l_3 (ATerm t)
                                                    {
                                                      t = term_t_20;
                                                      return(t);
                                                    }
                                                    t = say_1(t, l_3);
                                                  }
                                                  PopChoice();
                                                  _fail(t);
                                                }
                                              else
                                                {
                                                  t = s_20;
                                                }
                                              {
                                                t = desugar_0(t);
                                                {
                                                  ATerm m_3 (ATerm t)
                                                  {
                                                    ATerm n_3 (ATerm t)
                                                    {
                                                      t = term_w_20;
                                                      return(t);
                                                    }
                                                    t = say_1(t, n_3);
                                                    return(t);
                                                  }
                                                  t = if_verbose1_1(t, m_3);
                                                }
                                              }
                                            }
                                          }
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
ATerm alltd_1 (ATerm t, ATerm n_112 (ATerm))
{
  ATerm q_58 (ATerm t)
  {
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_112(t);
        ;
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
        t = _all(t, q_58);
      }
    return(t);
  }
  t = q_58(t);
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0 (ATerm t)
{
  ATerm j_59 = NULL;
  ATerm z_20;
  z_20 = t;
  {
    ATerm k_59 = NULL;
    t = new_0(t);
    {
      k_59 = t;
      {
        if(((j_59 != NULL) && (j_59 != k_59)))
          _fail(k_59);
        else
          j_59 = k_59;
        {
          ATerm a_21 = t;
          int b_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_17, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(j_59)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
              t = InlineStrat_0(t);
              ;
              LocalPopChoice(b_21);
            }
          else
            {
              t = a_21;
              {
                ATerm o_3 (ATerm t)
                {
                  ATerm p_3 (ATerm t)
                  {
                    t = term_c_21;
                    return(t);
                  }
                  t = say_1(t, p_3);
                  return(t);
                }
                t = if_verbose2_1(t, o_3);
                _fail(t);
              }
            }
          {
            ATerm d_21 = t;
            int e_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_59 = NULL,m_59 = NULL,r_59 = NULL,f_60 = NULL,g_60 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL;
                l_59 = t;
                t_58 :
                if(match_cons(l_59, sym_Seq_2))
                  {
                    m_59 = ATgetArgument(l_59, 0);
                    u_61 = ATgetArgument(l_59, 1);
                    u_58 :
                    if(match_cons(m_59, sym_All_1))
                      {
                        r_59 = ATgetArgument(m_59, 0);
                        v_58 :
                        if(match_cons(r_59, sym_CallT_3))
                          {
                            f_60 = ATgetArgument(r_59, 0);
                            m_61 = ATgetArgument(r_59, 1);
                            t_61 = ATgetArgument(r_59, 2);
                            w_58 :
                            if(match_cons(f_60, sym_SVar_1))
                              {
                                g_60 = ATgetArgument(f_60, 0);
                                x_58 :
                                if(match_string(g_60, "bottomup_1_0"))
                                  {
                                    y_58 :
                                    if(((ATgetType(m_61) == AT_LIST) && !(ATisEmpty(m_61))))
                                      {
                                        n_61 = ATgetFirst((ATermList) m_61);
                                        s_61 = (ATerm) ATgetNext((ATermList) m_61);
                                        z_58 :
                                        if(match_cons(n_61, sym_CallT_3))
                                          {
                                            o_61 = ATgetArgument(n_61, 0);
                                            q_61 = ATgetArgument(n_61, 1);
                                            r_61 = ATgetArgument(n_61, 2);
                                            a_59 :
                                            if(match_cons(o_61, sym_SVar_1))
                                              {
                                                p_61 = ATgetArgument(o_61, 0);
                                                b_59 :
                                                if(((ATgetType(q_61) == AT_LIST) && ATisEmpty(q_61)))
                                                  {
                                                    c_59 :
                                                    if(((ATgetType(r_61) == AT_LIST) && ATisEmpty(r_61)))
                                                      {
                                                        d_59 :
                                                        if(((ATgetType(s_61) == AT_LIST) && ATisEmpty(s_61)))
                                                          {
                                                            e_59 :
                                                            if(((ATgetType(t_61) == AT_LIST) && ATisEmpty(t_61)))
                                                              {
                                                                f_59 :
                                                                if(match_cons(u_61, sym_CallT_3))
                                                                  {
                                                                    v_61 = ATgetArgument(u_61, 0);
                                                                    x_61 = ATgetArgument(u_61, 1);
                                                                    y_61 = ATgetArgument(u_61, 2);
                                                                    g_59 :
                                                                    if(match_cons(v_61, sym_SVar_1))
                                                                      {
                                                                        w_61 = ATgetArgument(v_61, 0);
                                                                        h_59 :
                                                                        if(((ATgetType(x_61) == AT_LIST) && ATisEmpty(x_61)))
                                                                          {
                                                                            i_59 :
                                                                            if(((ATgetType(y_61) == AT_LIST) && ATisEmpty(y_61)))
                                                                              {
                                                                                {
                                                                                  if(((j_59 != NULL) && (j_59 != p_61)))
                                                                                    _fail(p_61);
                                                                                  else
                                                                                    j_59 = p_61;
                                                                                  if(((j_59 != NULL) && (j_59 != w_61)))
                                                                                    _fail(w_61);
                                                                                  else
                                                                                    j_59 = w_61;
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                _fail(t);
                                                                              }
                                                                          }
                                                                        else
                                                                          {
                                                                            _fail(t);
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
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
                LocalPopChoice(e_21);
              }
            else
              {
                t = d_21;
                {
                  ATerm q_3 (ATerm t)
                  {
                    ATerm r_3 (ATerm t)
                    {
                      t = term_f_21;
                      return(t);
                    }
                    t = debug_1(t, r_3);
                    return(t);
                  }
                  t = if_verbose1_1(t, q_3);
                  _fail(t);
                }
              }
            {
              ATerm s_3 (ATerm t)
              {
                ATerm t_3 (ATerm t)
                {
                  t = term_g_21;
                  return(t);
                }
                t = say_1(t, t_3);
                return(t);
              }
              t = if_verbose2_1(t, s_3);
            }
          }
        }
      }
    }
  }
  t = z_20;
  return(t);
}
ATerm check_that_innermost_is_innermost_0 (ATerm t)
{
  ATerm a_65 = NULL;
  ATerm m_21;
  m_21 = t;
  {
    ATerm b_65 = NULL;
    t = new_0(t);
    {
      b_65 = t;
      {
        if(((a_65 != NULL) && (a_65 != b_65)))
          _fail(b_65);
        else
          a_65 = b_65;
        {
          ATerm n_21 = t;
          int o_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_q_21, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_65)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
              t = InlineStrat_0(t);
              ;
              LocalPopChoice(o_21);
            }
          else
            {
              t = n_21;
              {
                ATerm u_3 (ATerm t)
                {
                  ATerm v_3 (ATerm t)
                  {
                    t = term_u_21;
                    return(t);
                  }
                  t = say_1(t, v_3);
                  return(t);
                }
                t = if_verbose2_1(t, u_3);
                _fail(t);
              }
            }
          {
            ATerm w_21 = t;
            int y_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL;
                w_65 = t;
                f_62 :
                if(match_cons(w_65, sym_Call_2))
                  {
                    x_65 = ATgetArgument(w_65, 0);
                    z_65 = ATgetArgument(w_65, 1);
                    g_62 :
                    if(match_cons(x_65, sym_SVar_1))
                      {
                        y_65 = ATgetArgument(x_65, 0);
                        h_62 :
                        if(match_string(y_65, "bottomup_1_0"))
                          {
                            i_62 :
                            if(((ATgetType(z_65) == AT_LIST) && !(ATisEmpty(z_65))))
                              {
                                a_66 = ATgetFirst((ATermList) z_65);
                                v_66 = (ATerm) ATgetNext((ATermList) z_65);
                                j_62 :
                                if(match_cons(a_66, sym_Call_2))
                                  {
                                    b_66 = ATgetArgument(a_66, 0);
                                    c_66 = ATgetArgument(a_66, 1);
                                    k_62 :
                                    if(match_cons(b_66, sym_SVar_1))
                                      {
                                        c_65 = ATgetArgument(b_66, 0);
                                        l_62 :
                                        if(match_string(c_65, "try_1_0"))
                                          {
                                            m_62 :
                                            if(((ATgetType(c_66) == AT_LIST) && !(ATisEmpty(c_66))))
                                              {
                                                d_66 = ATgetFirst((ATermList) c_66);
                                                u_66 = (ATerm) ATgetNext((ATermList) c_66);
                                                n_62 :
                                                if(match_cons(d_66, sym_Seq_2))
                                                  {
                                                    e_66 = ATgetArgument(d_66, 0);
                                                    j_66 = ATgetArgument(d_66, 1);
                                                    o_62 :
                                                    if(match_cons(e_66, sym_CallT_3))
                                                      {
                                                        f_66 = ATgetArgument(e_66, 0);
                                                        h_66 = ATgetArgument(e_66, 1);
                                                        i_66 = ATgetArgument(e_66, 2);
                                                        p_62 :
                                                        if(match_cons(f_66, sym_SVar_1))
                                                          {
                                                            g_66 = ATgetArgument(f_66, 0);
                                                            q_62 :
                                                            if(((ATgetType(h_66) == AT_LIST) && ATisEmpty(h_66)))
                                                              {
                                                                r_62 :
                                                                if(((ATgetType(i_66) == AT_LIST) && ATisEmpty(i_66)))
                                                                  {
                                                                    s_62 :
                                                                    if(match_cons(j_66, sym_CallT_3))
                                                                      {
                                                                        k_66 = ATgetArgument(j_66, 0);
                                                                        m_66 = ATgetArgument(j_66, 1);
                                                                        t_66 = ATgetArgument(j_66, 2);
                                                                        t_62 :
                                                                        if(match_cons(k_66, sym_SVar_1))
                                                                          {
                                                                            l_66 = ATgetArgument(k_66, 0);
                                                                            u_62 :
                                                                            if(match_string(l_66, "innermost_1_0"))
                                                                              {
                                                                                v_62 :
                                                                                if(((ATgetType(m_66) == AT_LIST) && !(ATisEmpty(m_66))))
                                                                                  {
                                                                                    n_66 = ATgetFirst((ATermList) m_66);
                                                                                    s_66 = (ATerm) ATgetNext((ATermList) m_66);
                                                                                    w_62 :
                                                                                    if(match_cons(n_66, sym_CallT_3))
                                                                                      {
                                                                                        o_66 = ATgetArgument(n_66, 0);
                                                                                        q_66 = ATgetArgument(n_66, 1);
                                                                                        r_66 = ATgetArgument(n_66, 2);
                                                                                        x_62 :
                                                                                        if(match_cons(o_66, sym_SVar_1))
                                                                                          {
                                                                                            p_66 = ATgetArgument(o_66, 0);
                                                                                            b_63 :
                                                                                            if(((ATgetType(q_66) == AT_LIST) && ATisEmpty(q_66)))
                                                                                              {
                                                                                                c_63 :
                                                                                                if(((ATgetType(r_66) == AT_LIST) && ATisEmpty(r_66)))
                                                                                                  {
                                                                                                    d_63 :
                                                                                                    if(((ATgetType(s_66) == AT_LIST) && ATisEmpty(s_66)))
                                                                                                      {
                                                                                                        e_63 :
                                                                                                        if(((ATgetType(t_66) == AT_LIST) && ATisEmpty(t_66)))
                                                                                                          {
                                                                                                            f_63 :
                                                                                                            if(((ATgetType(u_66) == AT_LIST) && ATisEmpty(u_66)))
                                                                                                              {
                                                                                                                g_63 :
                                                                                                                if(((ATgetType(v_66) == AT_LIST) && ATisEmpty(v_66)))
                                                                                                                  {
                                                                                                                    {
                                                                                                                      if(((a_65 != NULL) && (a_65 != g_66)))
                                                                                                                        _fail(g_66);
                                                                                                                      else
                                                                                                                        a_65 = g_66;
                                                                                                                      if(((a_65 != NULL) && (a_65 != p_66)))
                                                                                                                        _fail(p_66);
                                                                                                                      else
                                                                                                                        a_65 = p_66;
                                                                                                                    }
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    _fail(t);
                                                                                                                  }
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            _fail(t);
                                                                                                          }
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        _fail(t);
                                                                                                      }
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    _fail(t);
                                                                                                  }
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            _fail(t);
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        _fail(t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                _fail(t);
                                                                              }
                                                                          }
                                                                        else
                                                                          {
                                                                            _fail(t);
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    if(match_cons(w_65, sym_CallT_3))
                      {
                        x_65 = ATgetArgument(w_65, 0);
                        z_65 = ATgetArgument(w_65, 1);
                        w_66 = ATgetArgument(w_65, 2);
                        h_63 :
                        if(match_cons(x_65, sym_SVar_1))
                          {
                            y_65 = ATgetArgument(x_65, 0);
                            i_63 :
                            if(match_string(y_65, "bottomup_1_0"))
                              {
                                j_63 :
                                if(((ATgetType(z_65) == AT_LIST) && !(ATisEmpty(z_65))))
                                  {
                                    a_66 = ATgetFirst((ATermList) z_65);
                                    v_66 = (ATerm) ATgetNext((ATermList) z_65);
                                    k_63 :
                                    if(match_cons(a_66, sym_Rec_2))
                                      {
                                        b_66 = ATgetArgument(a_66, 0);
                                        c_66 = ATgetArgument(a_66, 1);
                                        l_63 :
                                        if(match_cons(c_66, sym_CallT_3))
                                          {
                                            d_66 = ATgetArgument(c_66, 0);
                                            u_66 = ATgetArgument(c_66, 1);
                                            v_65 = ATgetArgument(c_66, 2);
                                            m_63 :
                                            if(match_cons(d_66, sym_SVar_1))
                                              {
                                                e_66 = ATgetArgument(d_66, 0);
                                                n_63 :
                                                if(match_string(e_66, "try_1_0"))
                                                  {
                                                    o_63 :
                                                    if(((ATgetType(u_66) == AT_LIST) && !(ATisEmpty(u_66))))
                                                      {
                                                        d_65 = ATgetFirst((ATermList) u_66);
                                                        u_65 = (ATerm) ATgetNext((ATermList) u_66);
                                                        p_63 :
                                                        if(match_cons(d_65, sym_Seq_2))
                                                          {
                                                            e_65 = ATgetArgument(d_65, 0);
                                                            j_65 = ATgetArgument(d_65, 1);
                                                            q_63 :
                                                            if(match_cons(e_65, sym_CallT_3))
                                                              {
                                                                f_65 = ATgetArgument(e_65, 0);
                                                                h_65 = ATgetArgument(e_65, 1);
                                                                i_65 = ATgetArgument(e_65, 2);
                                                                r_63 :
                                                                if(match_cons(f_65, sym_SVar_1))
                                                                  {
                                                                    g_65 = ATgetArgument(f_65, 0);
                                                                    s_63 :
                                                                    if(((ATgetType(h_65) == AT_LIST) && ATisEmpty(h_65)))
                                                                      {
                                                                        t_63 :
                                                                        if(((ATgetType(i_65) == AT_LIST) && ATisEmpty(i_65)))
                                                                          {
                                                                            u_63 :
                                                                            if(match_cons(j_65, sym_CallT_3))
                                                                              {
                                                                                k_65 = ATgetArgument(j_65, 0);
                                                                                m_65 = ATgetArgument(j_65, 1);
                                                                                t_65 = ATgetArgument(j_65, 2);
                                                                                v_63 :
                                                                                if(match_cons(k_65, sym_SVar_1))
                                                                                  {
                                                                                    l_65 = ATgetArgument(k_65, 0);
                                                                                    w_63 :
                                                                                    if(match_string(l_65, "bottomup_1_0"))
                                                                                      {
                                                                                        x_63 :
                                                                                        if(((ATgetType(m_65) == AT_LIST) && !(ATisEmpty(m_65))))
                                                                                          {
                                                                                            n_65 = ATgetFirst((ATermList) m_65);
                                                                                            s_65 = (ATerm) ATgetNext((ATermList) m_65);
                                                                                            y_63 :
                                                                                            if(match_cons(n_65, sym_CallT_3))
                                                                                              {
                                                                                                o_65 = ATgetArgument(n_65, 0);
                                                                                                q_65 = ATgetArgument(n_65, 1);
                                                                                                r_65 = ATgetArgument(n_65, 2);
                                                                                                z_63 :
                                                                                                if(match_cons(o_65, sym_SVar_1))
                                                                                                  {
                                                                                                    p_65 = ATgetArgument(o_65, 0);
                                                                                                    a_64 :
                                                                                                    if(((ATgetType(q_65) == AT_LIST) && ATisEmpty(q_65)))
                                                                                                      {
                                                                                                        b_64 :
                                                                                                        if(((ATgetType(r_65) == AT_LIST) && ATisEmpty(r_65)))
                                                                                                          {
                                                                                                            c_64 :
                                                                                                            if(((ATgetType(s_65) == AT_LIST) && ATisEmpty(s_65)))
                                                                                                              {
                                                                                                                d_64 :
                                                                                                                if(((ATgetType(t_65) == AT_LIST) && ATisEmpty(t_65)))
                                                                                                                  {
                                                                                                                    e_64 :
                                                                                                                    if(((ATgetType(u_65) == AT_LIST) && ATisEmpty(u_65)))
                                                                                                                      {
                                                                                                                        f_64 :
                                                                                                                        if(((ATgetType(v_65) == AT_LIST) && ATisEmpty(v_65)))
                                                                                                                          {
                                                                                                                            g_64 :
                                                                                                                            if(((ATgetType(v_66) == AT_LIST) && ATisEmpty(v_66)))
                                                                                                                              {
                                                                                                                                h_64 :
                                                                                                                                if(((ATgetType(w_66) == AT_LIST) && ATisEmpty(w_66)))
                                                                                                                                  {
                                                                                                                                    {
                                                                                                                                      if(((a_65 != NULL) && (a_65 != g_65)))
                                                                                                                                        _fail(g_65);
                                                                                                                                      else
                                                                                                                                        a_65 = g_65;
                                                                                                                                      if(((b_66 != NULL) && (b_66 != p_65)))
                                                                                                                                        _fail(p_65);
                                                                                                                                      else
                                                                                                                                        b_66 = p_65;
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    _fail(t);
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                _fail(t);
                                                                                                                              }
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            _fail(t);
                                                                                                                          }
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        _fail(t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    _fail(t);
                                                                                                                  }
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            _fail(t);
                                                                                                          }
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        _fail(t);
                                                                                                      }
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    _fail(t);
                                                                                                  }
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            _fail(t);
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        _fail(t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                _fail(t);
                                                                              }
                                                                          }
                                                                        else
                                                                          {
                                                                            _fail(t);
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(c_66, sym_LChoice_2))
                                              {
                                                d_66 = ATgetArgument(c_66, 0);
                                                u_66 = ATgetArgument(c_66, 1);
                                                i_64 :
                                                if(match_cons(d_66, sym_Seq_2))
                                                  {
                                                    e_66 = ATgetArgument(d_66, 0);
                                                    j_66 = ATgetArgument(d_66, 1);
                                                    j_64 :
                                                    if(match_cons(e_66, sym_CallT_3))
                                                      {
                                                        f_66 = ATgetArgument(e_66, 0);
                                                        h_66 = ATgetArgument(e_66, 1);
                                                        i_66 = ATgetArgument(e_66, 2);
                                                        k_64 :
                                                        if(match_cons(f_66, sym_SVar_1))
                                                          {
                                                            g_66 = ATgetArgument(f_66, 0);
                                                            l_64 :
                                                            if(((ATgetType(h_66) == AT_LIST) && ATisEmpty(h_66)))
                                                              {
                                                                m_64 :
                                                                if(((ATgetType(i_66) == AT_LIST) && ATisEmpty(i_66)))
                                                                  {
                                                                    n_64 :
                                                                    if(match_cons(j_66, sym_CallT_3))
                                                                      {
                                                                        k_66 = ATgetArgument(j_66, 0);
                                                                        m_66 = ATgetArgument(j_66, 1);
                                                                        t_66 = ATgetArgument(j_66, 2);
                                                                        o_64 :
                                                                        if(match_cons(k_66, sym_SVar_1))
                                                                          {
                                                                            l_66 = ATgetArgument(k_66, 0);
                                                                            p_64 :
                                                                            if(match_string(l_66, "bottomup_1_0"))
                                                                              {
                                                                                q_64 :
                                                                                if(((ATgetType(m_66) == AT_LIST) && !(ATisEmpty(m_66))))
                                                                                  {
                                                                                    n_66 = ATgetFirst((ATermList) m_66);
                                                                                    s_66 = (ATerm) ATgetNext((ATermList) m_66);
                                                                                    r_64 :
                                                                                    if(match_cons(n_66, sym_CallT_3))
                                                                                      {
                                                                                        o_66 = ATgetArgument(n_66, 0);
                                                                                        q_66 = ATgetArgument(n_66, 1);
                                                                                        r_66 = ATgetArgument(n_66, 2);
                                                                                        s_64 :
                                                                                        if(match_cons(o_66, sym_SVar_1))
                                                                                          {
                                                                                            p_66 = ATgetArgument(o_66, 0);
                                                                                            t_64 :
                                                                                            if(((ATgetType(q_66) == AT_LIST) && ATisEmpty(q_66)))
                                                                                              {
                                                                                                u_64 :
                                                                                                if(((ATgetType(r_66) == AT_LIST) && ATisEmpty(r_66)))
                                                                                                  {
                                                                                                    v_64 :
                                                                                                    if(((ATgetType(s_66) == AT_LIST) && ATisEmpty(s_66)))
                                                                                                      {
                                                                                                        w_64 :
                                                                                                        if(((ATgetType(t_66) == AT_LIST) && ATisEmpty(t_66)))
                                                                                                          {
                                                                                                            x_64 :
                                                                                                            if(match_cons(u_66, sym_Id_0))
                                                                                                              {
                                                                                                                y_64 :
                                                                                                                if(((ATgetType(v_66) == AT_LIST) && ATisEmpty(v_66)))
                                                                                                                  {
                                                                                                                    z_64 :
                                                                                                                    if(((ATgetType(w_66) == AT_LIST) && ATisEmpty(w_66)))
                                                                                                                      {
                                                                                                                        {
                                                                                                                          if(((a_65 != NULL) && (a_65 != g_66)))
                                                                                                                            _fail(g_66);
                                                                                                                          else
                                                                                                                            a_65 = g_66;
                                                                                                                          if(((b_66 != NULL) && (b_66 != p_66)))
                                                                                                                            _fail(p_66);
                                                                                                                          else
                                                                                                                            b_66 = p_66;
                                                                                                                        }
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        _fail(t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    _fail(t);
                                                                                                                  }
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            _fail(t);
                                                                                                          }
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        _fail(t);
                                                                                                      }
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    _fail(t);
                                                                                                  }
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            _fail(t);
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        _fail(t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                _fail(t);
                                                                              }
                                                                          }
                                                                        else
                                                                          {
                                                                            _fail(t);
                                                                          }
                                                                      }
                                                                    else
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                  }
                                                                else
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
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
                LocalPopChoice(y_21);
              }
            else
              {
                t = w_21;
                {
                  ATerm w_3 (ATerm t)
                  {
                    ATerm x_3 (ATerm t)
                    {
                      t = term_z_21;
                      return(t);
                    }
                    t = debug_1(t, x_3);
                    return(t);
                  }
                  t = if_verbose1_1(t, w_3);
                  _fail(t);
                }
              }
            {
              ATerm y_3 (ATerm t)
              {
                ATerm z_3 (ATerm t)
                {
                  t = term_c_22;
                  return(t);
                }
                t = say_1(t, z_3);
                return(t);
              }
              t = if_verbose2_1(t, y_3);
            }
          }
        }
      }
    }
  }
  t = m_21;
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL,w_67 = NULL;
  u_67 = t;
  t_67 :
  if(match_cons(u_67, sym_Cong_2))
    {
      v_67 = ATgetArgument(u_67, 0);
      w_67 = ATgetArgument(u_67, 1);
      {
        ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,c_69 = NULL,e_69 = NULL,g_69 = NULL;
        ATerm d_22;
        d_22 = t;
        {
          ATerm i_68 = NULL;
          t = not_null(w_67);
          {
            ATerm l_68 = NULL;
            t = map_1(t, new_0);
            {
              i_68 = t;
              {
                if(((f_68 != NULL) && (f_68 != i_68)))
                  _fail(i_68);
                else
                  f_68 = i_68;
                {
                  t = not_null(f_68);
                  {
                    ATerm m_68 = NULL;
                    ATerm a_4 (ATerm t)
                    {
                      ATerm j_68 = NULL;
                      ATerm k_68 = NULL;
                      k_68 = t;
                      if(((j_68 != NULL) && (j_68 != k_68)))
                        _fail(k_68);
                      else
                        j_68 = k_68;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_68));
                      return(t);
                    }
                    t = map_1(t, a_4);
                    {
                      l_68 = t;
                      {
                        if(((c_68 != NULL) && (c_68 != l_68)))
                          _fail(l_68);
                        else
                          c_68 = l_68;
                        {
                          ATerm n_68 = NULL;
                          t = new_0(t);
                          {
                            m_68 = t;
                            {
                              if(((d_68 != NULL) && (d_68 != m_68)))
                                _fail(m_68);
                              else
                                d_68 = m_68;
                              {
                                t = not_null(w_67);
                                {
                                  ATerm q_68 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    n_68 = t;
                                    {
                                      if(((g_68 != NULL) && (g_68 != n_68)))
                                        _fail(n_68);
                                      else
                                        g_68 = n_68;
                                      {
                                        t = not_null(g_68);
                                        {
                                          ATerm r_68 = NULL,b_69 = NULL;
                                          ATerm b_4 (ATerm t)
                                          {
                                            ATerm o_68 = NULL;
                                            ATerm p_68 = NULL;
                                            p_68 = t;
                                            if(((o_68 != NULL) && (o_68 != p_68)))
                                              _fail(p_68);
                                            else
                                              o_68 = p_68;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_68));
                                            return(t);
                                          }
                                          t = map_1(t, b_4);
                                          {
                                            q_68 = t;
                                            {
                                              if(((e_68 != NULL) && (e_68 != q_68)))
                                                _fail(q_68);
                                              else
                                                e_68 = q_68;
                                              {
                                                ATerm s_68 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_68), not_null(g_68));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    s_68 = t;
                                                    if(((r_68 != NULL) && (r_68 != s_68)))
                                                      _fail(s_68);
                                                    else
                                                      r_68 = s_68;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_68), not_null(w_67));
                                                  {
                                                    ATerm c_4 (ATerm t)
                                                    {
                                                      ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL;
                                                      t_68 = t;
                                                      n_67 :
                                                      if(match_cons(t_68, sym__2))
                                                        {
                                                          u_68 = ATgetArgument(t_68, 0);
                                                          x_68 = ATgetArgument(t_68, 1);
                                                          o_67 :
                                                          if(match_cons(u_68, sym__2))
                                                            {
                                                              v_68 = ATgetArgument(u_68, 0);
                                                              w_68 = ATgetArgument(u_68, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_68))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_68), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_68)))));
                                                            }
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                      return(t);
                                                    }
                                                    t = zip_1(t, c_4);
                                                    {
                                                      b_69 = t;
                                                      if(((h_68 != NULL) && (h_68 != b_69)))
                                                        _fail(b_69);
                                                      else
                                                        h_68 = b_69;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = d_22;
        {
          ATerm e_22;
          e_22 = t;
          {
            ATerm d_69 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_68), not_null(g_68));
            {
              t = conc_0(t);
              {
                d_69 = t;
                if(((c_69 != NULL) && (c_69 != d_69)))
                  _fail(d_69);
                else
                  c_69 = d_69;
              }
            }
          }
          t = e_22;
          {
            ATerm f_22;
            f_22 = t;
            {
              ATerm f_69 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(v_67), not_null(c_68)), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_68))));
              {
                t = Mapp2_0(t);
                {
                  f_69 = t;
                  if(((e_69 != NULL) && (e_69 != f_69)))
                    _fail(f_69);
                  else
                    e_69 = f_69;
                }
              }
            }
            t = f_22;
            {
              ATerm h_69 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(v_67), not_null(e_68)), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_68))));
              {
                t = Bapp2_0(t);
                {
                  h_69 = t;
                  if(((g_69 != NULL) && (g_69 != h_69)))
                    _fail(h_69);
                  else
                    g_69 = h_69;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(c_69)), not_null(d_68)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_69), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(h_68)), not_null(g_69))));
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
ATerm Bapp2_0 (ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL;
  s_70 = t;
  r_70 :
  if(match_cons(s_70, sym_Build_1))
    {
      t_70 = ATgetArgument(s_70, 0);
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL;
            ATerm z_70 = NULL;
            ATerm d_71 = NULL;
            t = new_0(t);
            {
              z_70 = t;
              {
                if(((x_70 != NULL) && (x_70 != z_70)))
                  _fail(z_70);
                else
                  x_70 = z_70;
                {
                  t = not_null(t_70);
                  {
                    ATerm d_4 (ATerm t)
                    {
                      ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL;
                      a_71 = t;
                      h_70 :
                      if(match_cons(a_71, sym_Anno_2))
                        {
                          b_71 = ATgetArgument(a_71, 0);
                          c_71 = ATgetArgument(a_71, 1);
                          {
                            if(((v_70 != NULL) && (v_70 != b_71)))
                              _fail(b_71);
                            else
                              v_70 = b_71;
                            {
                              if(((w_70 != NULL) && (w_70 != c_71)))
                                _fail(c_71);
                              else
                                w_70 = c_71;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_70));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, d_4);
                    {
                      d_71 = t;
                      if(((y_70 != NULL) && (y_70 != d_71)))
                        _fail(d_71);
                      else
                        y_70 = d_71;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_70)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_i_22, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_70)), not_null(v_70))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_70))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_70))));
            ;
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            {
              ATerm j_22 = t;
              int r_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL;
                  ATerm i_71 = NULL;
                  ATerm l_71 = NULL;
                  t = new_0(t);
                  {
                    i_71 = t;
                    {
                      if(((g_71 != NULL) && (g_71 != i_71)))
                        _fail(i_71);
                      else
                        g_71 = i_71;
                      {
                        t = not_null(t_70);
                        {
                          ATerm e_4 (ATerm t)
                          {
                            ATerm j_71 = NULL,k_71 = NULL;
                            j_71 = t;
                            l_70 :
                            if(match_cons(j_71, sym_RootApp_1))
                              {
                                k_71 = ATgetArgument(j_71, 0);
                                {
                                  if(((f_71 != NULL) && (f_71 != k_71)))
                                    _fail(k_71);
                                  else
                                    f_71 = k_71;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_71));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, e_4);
                          {
                            l_71 = t;
                            if(((h_71 != NULL) && (h_71 != l_71)))
                              _fail(l_71);
                            else
                              h_71 = l_71;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_71)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_71), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_71))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(h_71))));
                  ;
                  LocalPopChoice(r_22);
                }
              else
                {
                  t = j_22;
                  {
                    ATerm n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL;
                    ATerm r_71 = NULL;
                    ATerm v_71 = NULL;
                    t = new_0(t);
                    {
                      r_71 = t;
                      {
                        if(((p_71 != NULL) && (p_71 != r_71)))
                          _fail(r_71);
                        else
                          p_71 = r_71;
                        {
                          t = not_null(t_70);
                          {
                            ATerm f_4 (ATerm t)
                            {
                              ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL;
                              s_71 = t;
                              p_70 :
                              if(match_cons(s_71, sym_App_2))
                                {
                                  t_71 = ATgetArgument(s_71, 0);
                                  u_71 = ATgetArgument(s_71, 1);
                                  {
                                    if(((n_71 != NULL) && (n_71 != t_71)))
                                      _fail(t_71);
                                    else
                                      n_71 = t_71;
                                    {
                                      if(((o_71 != NULL) && (o_71 != u_71)))
                                        _fail(u_71);
                                      else
                                        o_71 = u_71;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_71));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, f_4);
                            {
                              v_71 = t;
                              if(((q_71 != NULL) && (q_71 != v_71)))
                                _fail(v_71);
                              else
                                q_71 = v_71;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_71)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(n_71), not_null(o_71), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_71)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_71))));
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
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL,n_73 = NULL,o_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL;
  g_73 = t;
  z_72 :
  if(match_cons(g_73, sym_Call_2))
    {
      h_73 = ATgetArgument(g_73, 0);
      n_73 = ATgetArgument(g_73, 1);
      a_73 :
      if(match_cons(h_73, sym_SVar_1))
        {
          i_73 = ATgetArgument(h_73, 0);
          b_73 :
          if(match_string(i_73, "Anno_Cong__"))
            {
              c_73 :
              if(((ATgetType(n_73) == AT_LIST) && !(ATisEmpty(n_73))))
                {
                  o_73 = ATgetFirst((ATermList) n_73);
                  w_73 = (ATerm) ATgetNext((ATermList) n_73);
                  d_73 :
                  if(match_cons(o_73, sym_Cong_2))
                    {
                      u_73 = ATgetArgument(o_73, 0);
                      v_73 = ATgetArgument(o_73, 1);
                      e_73 :
                      if(((ATgetType(w_73) == AT_LIST) && !(ATisEmpty(w_73))))
                        {
                          x_73 = ATgetFirst((ATermList) w_73);
                          y_73 = (ATerm) ATgetNext((ATermList) w_73);
                          f_73 :
                          if(((ATgetType(y_73) == AT_LIST) && ATisEmpty(y_73)))
                            {
                              {
                                ATerm c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,h_75 = NULL,j_75 = NULL,l_75 = NULL;
                                ATerm s_22;
                                s_22 = t;
                                {
                                  ATerm j_74 = NULL,k_74 = NULL,l_74 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(v_73)), not_null(x_73));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      j_74 = t;
                                      v_72 :
                                      if(((ATgetType(j_74) == AT_LIST) && !(ATisEmpty(j_74))))
                                        {
                                          k_74 = ATgetFirst((ATermList) j_74);
                                          l_74 = (ATerm) ATgetNext((ATermList) j_74);
                                          {
                                            ATerm o_74 = NULL;
                                            if(((c_74 != NULL) && (c_74 != k_74)))
                                              _fail(k_74);
                                            else
                                              c_74 = k_74;
                                            {
                                              if(((g_74 != NULL) && (g_74 != l_74)))
                                                _fail(l_74);
                                              else
                                                g_74 = l_74;
                                              {
                                                ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL;
                                                ATerm g_4 (ATerm t)
                                                {
                                                  ATerm m_74 = NULL;
                                                  ATerm n_74 = NULL;
                                                  n_74 = t;
                                                  if(((m_74 != NULL) && (m_74 != n_74)))
                                                    _fail(n_74);
                                                  else
                                                    m_74 = n_74;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_74));
                                                  return(t);
                                                }
                                                t = map_1(t, g_4);
                                                {
                                                  o_74 = t;
                                                  {
                                                    if(((d_74 != NULL) && (d_74 != o_74)))
                                                      _fail(o_74);
                                                    else
                                                      d_74 = o_74;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(v_73)), not_null(x_73));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          p_74 = t;
                                                          u_72 :
                                                          if(((ATgetType(p_74) == AT_LIST) && !(ATisEmpty(p_74))))
                                                            {
                                                              q_74 = ATgetFirst((ATermList) p_74);
                                                              r_74 = (ATerm) ATgetNext((ATermList) p_74);
                                                              {
                                                                ATerm u_74 = NULL;
                                                                if(((e_74 != NULL) && (e_74 != q_74)))
                                                                  _fail(q_74);
                                                                else
                                                                  e_74 = q_74;
                                                                {
                                                                  if(((h_74 != NULL) && (h_74 != r_74)))
                                                                    _fail(r_74);
                                                                  else
                                                                    h_74 = r_74;
                                                                  {
                                                                    ATerm v_74 = NULL,g_75 = NULL;
                                                                    ATerm h_4 (ATerm t)
                                                                    {
                                                                      ATerm s_74 = NULL;
                                                                      ATerm t_74 = NULL;
                                                                      t_74 = t;
                                                                      if(((s_74 != NULL) && (s_74 != t_74)))
                                                                        _fail(t_74);
                                                                      else
                                                                        s_74 = t_74;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_74));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, h_4);
                                                                    {
                                                                      u_74 = t;
                                                                      {
                                                                        if(((f_74 != NULL) && (f_74 != u_74)))
                                                                          _fail(u_74);
                                                                        else
                                                                          f_74 = u_74;
                                                                        {
                                                                          ATerm w_74 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_74), not_null(h_74));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              w_74 = t;
                                                                              if(((v_74 != NULL) && (v_74 != w_74)))
                                                                                _fail(w_74);
                                                                              else
                                                                                v_74 = w_74;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(v_74), (ATerm) ATinsert(CheckATermList(not_null(v_73)), not_null(x_73)));
                                                                            {
                                                                              ATerm i_4 (ATerm t)
                                                                              {
                                                                                ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL;
                                                                                x_74 = t;
                                                                                r_72 :
                                                                                if(match_cons(x_74, sym__2))
                                                                                  {
                                                                                    y_74 = ATgetArgument(x_74, 0);
                                                                                    b_75 = ATgetArgument(x_74, 1);
                                                                                    s_72 :
                                                                                    if(match_cons(y_74, sym__2))
                                                                                      {
                                                                                        z_74 = ATgetArgument(y_74, 0);
                                                                                        a_75 = ATgetArgument(y_74, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_74))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_75), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_75)))));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        _fail(t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              t = zip_1(t, i_4);
                                                                              {
                                                                                g_75 = t;
                                                                                if(((i_74 != NULL) && (i_74 != g_75)))
                                                                                  _fail(g_75);
                                                                                else
                                                                                  i_74 = g_75;
                                                                              }
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
                                t = s_22;
                                {
                                  ATerm t_22;
                                  t_22 = t;
                                  {
                                    ATerm i_75 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_74), not_null(h_74));
                                    {
                                      t = conc_0(t);
                                      {
                                        i_75 = t;
                                        if(((h_75 != NULL) && (h_75 != i_75)))
                                          _fail(i_75);
                                        else
                                          h_75 = i_75;
                                      }
                                    }
                                  }
                                  t = t_22;
                                  {
                                    ATerm u_22;
                                    u_22 = t;
                                    {
                                      ATerm k_75 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(u_73), not_null(d_74)), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_74))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          k_75 = t;
                                          if(((j_75 != NULL) && (j_75 != k_75)))
                                            _fail(k_75);
                                          else
                                            j_75 = k_75;
                                        }
                                      }
                                    }
                                    t = u_22;
                                    {
                                      ATerm m_75 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(u_73), not_null(f_74)), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_74))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          m_75 = t;
                                          if(((l_75 != NULL) && (l_75 != m_75)))
                                            _fail(m_75);
                                          else
                                            l_75 = m_75;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(h_75)), not_null(e_74)), not_null(c_74)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_75), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(i_74)), not_null(l_75))));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm As_2 (ATerm t, ATerm k_97 (ATerm), ATerm l_97 (ATerm))
{
  ATerm u_76 = NULL,v_76 = NULL,w_76 = NULL;
  u_76 = t;
  s_76 :
  if(match_cons(u_76, sym_As_2))
    {
      v_76 = ATgetArgument(u_76, 0);
      w_76 = ATgetArgument(u_76, 1);
      {
        ATerm a_77 = NULL,c_77 = NULL;
        ATerm b_77 = NULL;
        t = SSLgetAnnotations(not_null(u_76));
        {
          b_77 = t;
          if(((a_77 != NULL) && (a_77 != b_77)))
            _fail(b_77);
          else
            a_77 = b_77;
        }
        {
          t = not_null(v_76);
          {
            ATerm e_77 = NULL;
            t = k_97(t);
            {
              c_77 = t;
              {
                t = not_null(w_76);
                {
                  ATerm g_77 = NULL;
                  t = l_97(t);
                  {
                    e_77 = t;
                    {
                      ATerm h_77 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(c_77), not_null(e_77)), not_null(a_77));
                      {
                        h_77 = t;
                        if(((g_77 != NULL) && (g_77 != h_77)))
                          _fail(h_77);
                        else
                          g_77 = h_77;
                      }
                      t = not_null(g_77);
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
ATerm PrimT_3 (ATerm t, ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm))
{
  ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL;
  u_77 = t;
  t_77 :
  if(match_cons(u_77, sym_PrimT_3))
    {
      v_77 = ATgetArgument(u_77, 0);
      w_77 = ATgetArgument(u_77, 1);
      x_77 = ATgetArgument(u_77, 2);
      {
        ATerm c_78 = NULL,e_78 = NULL;
        ATerm d_78 = NULL;
        t = SSLgetAnnotations(not_null(u_77));
        {
          d_78 = t;
          if(((c_78 != NULL) && (c_78 != d_78)))
            _fail(d_78);
          else
            c_78 = d_78;
        }
        {
          t = not_null(v_77);
          {
            ATerm g_78 = NULL;
            t = j_101(t);
            {
              e_78 = t;
              {
                t = not_null(w_77);
                {
                  ATerm i_78 = NULL;
                  t = k_101(t);
                  {
                    g_78 = t;
                    {
                      t = not_null(x_77);
                      {
                        ATerm k_78 = NULL;
                        t = l_101(t);
                        {
                          i_78 = t;
                          {
                            ATerm l_78 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(e_78), not_null(g_78), not_null(i_78)), not_null(c_78));
                            {
                              l_78 = t;
                              if(((k_78 != NULL) && (k_78 != l_78)))
                                _fail(l_78);
                              else
                                k_78 = l_78;
                            }
                            t = not_null(k_78);
                          }
                        }
                      }
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
ATerm Explode_2 (ATerm t, ATerm d_97 (ATerm), ATerm e_97 (ATerm))
{
  ATerm y_78 = NULL,z_78 = NULL,f_79 = NULL;
  y_78 = t;
  x_78 :
  if(match_cons(y_78, sym_Explode_2))
    {
      z_78 = ATgetArgument(y_78, 0);
      f_79 = ATgetArgument(y_78, 1);
      {
        ATerm j_79 = NULL,l_79 = NULL;
        ATerm k_79 = NULL;
        t = SSLgetAnnotations(not_null(y_78));
        {
          k_79 = t;
          if(((j_79 != NULL) && (j_79 != k_79)))
            _fail(k_79);
          else
            j_79 = k_79;
        }
        {
          t = not_null(z_78);
          {
            ATerm t_79 = NULL;
            t = d_97(t);
            {
              l_79 = t;
              {
                t = not_null(f_79);
                {
                  ATerm j_80 = NULL;
                  t = e_97(t);
                  {
                    t_79 = t;
                    {
                      ATerm p_80 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(l_79), not_null(t_79)), not_null(j_79));
                      {
                        p_80 = t;
                        if(((j_80 != NULL) && (j_80 != p_80)))
                          _fail(p_80);
                        else
                          j_80 = p_80;
                      }
                      t = not_null(j_80);
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
ATerm Op_2 (ATerm t, ATerm z_96 (ATerm), ATerm a_97 (ATerm))
{
  ATerm d_81 = NULL,e_81 = NULL,f_81 = NULL;
  d_81 = t;
  c_81 :
  if(match_cons(d_81, sym_Op_2))
    {
      e_81 = ATgetArgument(d_81, 0);
      f_81 = ATgetArgument(d_81, 1);
      {
        ATerm j_81 = NULL,l_81 = NULL;
        ATerm k_81 = NULL;
        t = SSLgetAnnotations(not_null(d_81));
        {
          k_81 = t;
          if(((j_81 != NULL) && (j_81 != k_81)))
            _fail(k_81);
          else
            j_81 = k_81;
        }
        {
          t = not_null(e_81);
          {
            ATerm n_81 = NULL;
            t = z_96(t);
            {
              l_81 = t;
              {
                t = not_null(f_81);
                {
                  ATerm p_81 = NULL;
                  t = a_97(t);
                  {
                    n_81 = t;
                    {
                      ATerm q_81 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(l_81), not_null(n_81)), not_null(j_81));
                      {
                        q_81 = t;
                        if(((p_81 != NULL) && (p_81 != q_81)))
                          _fail(q_81);
                        else
                          p_81 = q_81;
                      }
                      t = not_null(p_81);
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
ATerm pat_td_1 (ATerm t, ATerm c_139 (ATerm))
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_139(t);
      ;
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      {
        ATerm x_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_4 (ATerm t)
            {
              ATerm k_4 (ATerm t)
              {
                t = pat_td_1(t, c_139);
                return(t);
              }
              t = fetch_1(t, k_4);
              return(t);
            }
            t = Op_2(t, _id, j_4);
            ;
            LocalPopChoice(y_22);
          }
        else
          {
            t = x_22;
            {
              ATerm z_22 = t;
              int a_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_4 (ATerm t)
                  {
                    t = pat_td_1(t, c_139);
                    return(t);
                  }
                  t = Explode_2(t, _id, l_4);
                  ;
                  LocalPopChoice(a_23);
                }
              else
                {
                  t = z_22;
                  {
                    ATerm b_23 = t;
                    int c_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_4 (ATerm t)
                        {
                          t = pat_td_1(t, c_139);
                          return(t);
                        }
                        t = Explode_2(t, m_4, _id);
                        ;
                        LocalPopChoice(c_23);
                      }
                    else
                      {
                        t = b_23;
                        {
                          ATerm f_23 = t;
                          int g_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_4 (ATerm t)
                              {
                                ATerm o_4 (ATerm t)
                                {
                                  t = pat_td_1(t, c_139);
                                  return(t);
                                }
                                t = fetch_1(t, o_4);
                                return(t);
                              }
                              t = PrimT_3(t, _id, _id, n_4);
                              ;
                              LocalPopChoice(g_23);
                            }
                          else
                            {
                              t = f_23;
                              {
                                ATerm p_4 (ATerm t)
                                {
                                  t = pat_td_1(t, c_139);
                                  return(t);
                                }
                                t = As_2(t, _id, p_4);
                              }
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
ATerm Mapp2_0 (ATerm t)
{
  ATerm i_83 = NULL,j_83 = NULL;
  i_83 = t;
  h_83 :
  if(match_cons(i_83, sym_Match_1))
    {
      j_83 = ATgetArgument(i_83, 0);
      {
        ATerm m_23 = t;
        int u_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_83 = NULL,j_84 = NULL,k_84 = NULL,l_84 = NULL;
            ATerm m_84 = NULL;
            ATerm q_84 = NULL;
            t = new_0(t);
            {
              m_84 = t;
              {
                if(((k_84 != NULL) && (k_84 != m_84)))
                  _fail(m_84);
                else
                  k_84 = m_84;
                {
                  t = not_null(j_83);
                  {
                    ATerm q_4 (ATerm t)
                    {
                      ATerm n_84 = NULL,o_84 = NULL,p_84 = NULL;
                      n_84 = t;
                      x_82 :
                      if(match_cons(n_84, sym_Anno_2))
                        {
                          o_84 = ATgetArgument(n_84, 0);
                          p_84 = ATgetArgument(n_84, 1);
                          {
                            if(((l_83 != NULL) && (l_83 != o_84)))
                              _fail(o_84);
                            else
                              l_83 = o_84;
                            {
                              if(((j_84 != NULL) && (j_84 != p_84)))
                                _fail(p_84);
                              else
                                j_84 = p_84;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_84)), not_null(l_83));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, q_4);
                    {
                      q_84 = t;
                      if(((l_84 != NULL) && (l_84 != q_84)))
                        _fail(q_84);
                      else
                        l_84 = q_84;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_84)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_84)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_v_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_84)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(j_84))))));
            ;
            LocalPopChoice(u_23);
          }
        else
          {
            t = m_23;
            {
              ATerm w_23 = t;
              int v_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_84 = NULL,n_88 = NULL,o_88 = NULL;
                  ATerm p_88 = NULL;
                  ATerm s_88 = NULL;
                  t = new_0(t);
                  {
                    p_88 = t;
                    {
                      if(((n_88 != NULL) && (n_88 != p_88)))
                        _fail(p_88);
                      else
                        n_88 = p_88;
                      {
                        t = not_null(j_83);
                        {
                          ATerm r_4 (ATerm t)
                          {
                            ATerm q_88 = NULL,r_88 = NULL;
                            q_88 = t;
                            b_83 :
                            if(match_cons(q_88, sym_RootApp_1))
                              {
                                r_88 = ATgetArgument(q_88, 0);
                                {
                                  if(((s_84 != NULL) && (s_84 != r_88)))
                                    _fail(r_88);
                                  else
                                    s_84 = r_88;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_88));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, r_4);
                          {
                            s_88 = t;
                            if(((o_88 != NULL) && (o_88 != s_88)))
                              _fail(s_88);
                            else
                              o_88 = s_88;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_88)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_88)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_88))), not_null(s_84))));
                  ;
                  LocalPopChoice(v_24);
                }
              else
                {
                  t = w_23;
                  {
                    ATerm k_90 = NULL,n_90 = NULL,o_90 = NULL,p_90 = NULL;
                    ATerm q_90 = NULL;
                    ATerm u_90 = NULL;
                    t = new_0(t);
                    {
                      q_90 = t;
                      {
                        if(((o_90 != NULL) && (o_90 != q_90)))
                          _fail(q_90);
                        else
                          o_90 = q_90;
                        {
                          t = not_null(j_83);
                          {
                            ATerm s_4 (ATerm t)
                            {
                              ATerm r_90 = NULL,s_90 = NULL,t_90 = NULL;
                              r_90 = t;
                              f_83 :
                              if(match_cons(r_90, sym_App_2))
                                {
                                  s_90 = ATgetArgument(r_90, 0);
                                  t_90 = ATgetArgument(r_90, 1);
                                  {
                                    if(((n_90 != NULL) && (n_90 != s_90)))
                                      _fail(s_90);
                                    else
                                      n_90 = s_90;
                                    {
                                      if(((k_90 != NULL) && (k_90 != t_90)))
                                        _fail(t_90);
                                      else
                                        k_90 = t_90;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_90));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, s_4);
                            {
                              u_90 = t;
                              if(((p_90 != NULL) && (p_90 != u_90)))
                                _fail(u_90);
                              else
                                p_90 = u_90;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_90)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_90)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_90))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_90)), not_null(n_90)))));
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
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm n_91 = NULL,o_91 = NULL,p_91 = NULL;
  n_91 = t;
  m_91 :
  if(match_cons(n_91, sym_Cong_2))
    {
      o_91 = ATgetArgument(n_91, 0);
      p_91 = ATgetArgument(n_91, 1);
      {
        ATerm s_91 = NULL;
        ATerm w_91 = NULL;
        t = not_null(p_91);
        {
          ATerm t_4 (ATerm t)
          {
            ATerm t_91 = NULL,u_91 = NULL;
            u_91 = t;
            k_91 :
            if(match_cons(u_91, sym_Match_1))
              {
                t_91 = ATgetArgument(u_91, 0);
                t = not_null(t_91);
              }
            else
              {
                if(match_cons(u_91, sym_Id_0))
                  {
                    t = term_w_24;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, t_4);
          {
            w_91 = t;
            if(((s_91 != NULL) && (s_91 != w_91)))
              _fail(w_91);
            else
              s_91 = w_91;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(o_91), not_null(s_91)));
          t = Mapp2_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm z_111 (ATerm))
{
  ATerm b_92 (ATerm t)
  {
    ATerm x_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_111(t);
        ;
        LocalPopChoice(y_24);
      }
    else
      {
        t = x_24;
        t = _one(t, b_92);
      }
    return(t);
  }
  t = b_92(t);
  return(t);
}
ATerm LetHoist_0 (ATerm t)
{
  ATerm s_92 = NULL,t_92 = NULL,u_92 = NULL,v_92 = NULL,w_92 = NULL,z_92 = NULL,a_93 = NULL,b_93 = NULL,c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL,g_94 = NULL;
  s_92 = t;
  i_92 :
  if(match_cons(s_92, sym_Let_2))
    {
      t_92 = ATgetArgument(s_92, 0);
      c_93 = ATgetArgument(s_92, 1);
      j_92 :
      if(((ATgetType(t_92) == AT_LIST) && !(ATisEmpty(t_92))))
        {
          u_92 = ATgetFirst((ATermList) t_92);
          b_93 = (ATerm) ATgetNext((ATermList) t_92);
          k_92 :
          if(match_cons(u_92, sym_SDefT_4))
            {
              v_92 = ATgetArgument(u_92, 0);
              w_92 = ATgetArgument(u_92, 1);
              z_92 = ATgetArgument(u_92, 2);
              a_93 = ATgetArgument(u_92, 3);
              l_92 :
              if(((ATgetType(w_92) == AT_LIST) && ATisEmpty(w_92)))
                {
                  m_92 :
                  if(((ATgetType(z_92) == AT_LIST) && ATisEmpty(z_92)))
                    {
                      n_92 :
                      if(((ATgetType(b_93) == AT_LIST) && ATisEmpty(b_93)))
                        {
                          o_92 :
                          if(match_cons(c_93, sym_CallT_3))
                            {
                              d_93 = ATgetArgument(c_93, 0);
                              f_93 = ATgetArgument(c_93, 1);
                              g_94 = ATgetArgument(c_93, 2);
                              p_92 :
                              if(match_cons(d_93, sym_SVar_1))
                                {
                                  e_93 = ATgetArgument(d_93, 0);
                                  q_92 :
                                  if(((ATgetType(f_93) == AT_LIST) && ATisEmpty(f_93)))
                                    {
                                      r_92 :
                                      if(((ATgetType(g_94) == AT_LIST) && ATisEmpty(g_94)))
                                        {
                                          {
                                            if(((v_92 != NULL) && (v_92 != e_93)))
                                              _fail(e_93);
                                            else
                                              v_92 = e_93;
                                            {
                                              t = not_null(a_93);
                                              {
                                                ATerm z_24 = t;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm u_4 (ATerm t)
                                                    {
                                                      ATerm l_94 = NULL,m_94 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL;
                                                      l_94 = t;
                                                      e_92 :
                                                      if(match_cons(l_94, sym_CallT_3))
                                                        {
                                                          m_94 = ATgetArgument(l_94, 0);
                                                          o_94 = ATgetArgument(l_94, 1);
                                                          p_94 = ATgetArgument(l_94, 2);
                                                          f_92 :
                                                          if(match_cons(m_94, sym_SVar_1))
                                                            {
                                                              n_94 = ATgetArgument(m_94, 0);
                                                              g_92 :
                                                              if(((ATgetType(o_94) == AT_LIST) && ATisEmpty(o_94)))
                                                                {
                                                                  h_92 :
                                                                  if(((ATgetType(p_94) == AT_LIST) && ATisEmpty(p_94)))
                                                                    {
                                                                      if(((v_92 != NULL) && (v_92 != n_94)))
                                                                        _fail(n_94);
                                                                      else
                                                                        v_92 = n_94;
                                                                    }
                                                                  else
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                            }
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                      return(t);
                                                    }
                                                    t = oncetd_1(t, u_4);
                                                    PopChoice();
                                                    _fail(t);
                                                  }
                                                else
                                                  {
                                                    t = z_24;
                                                  }
                                              }
                                              t = not_null(a_93);
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
  ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL;
  v_94 = t;
  t_94 :
  if(match_cons(v_94, sym_Let_2))
    {
      w_94 = ATgetArgument(v_94, 0);
      x_94 = ATgetArgument(v_94, 1);
      u_94 :
      if(((ATgetType(w_94) == AT_LIST) && ATisEmpty(w_94)))
        {
          t = not_null(x_94);
        }
      else
        {
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
  ATerm d_95 = NULL,e_95 = NULL,f_95 = NULL;
  d_95 = t;
  b_95 :
  if(match_cons(d_95, sym_Scope_2))
    {
      e_95 = ATgetArgument(d_95, 0);
      f_95 = ATgetArgument(d_95, 1);
      c_95 :
      if(((ATgetType(e_95) == AT_LIST) && ATisEmpty(e_95)))
        {
          t = not_null(f_95);
        }
      else
        {
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
  ATerm a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL,i_96 = NULL;
  g_96 = t;
  o_95 :
  if(match_cons(g_96, sym_Where_1))
    {
      h_96 = ATgetArgument(g_96, 0);
      p_95 :
      if(match_cons(h_96, sym_Seq_2))
        {
          f_96 = ATgetArgument(h_96, 0);
          b_96 = ATgetArgument(h_96, 1);
          s_95 :
          if(match_cons(f_96, sym_Where_1))
            {
              a_96 = ATgetArgument(f_96, 0);
              t_95 :
              if(match_cons(b_96, sym_Seq_2))
                {
                  c_96 = ATgetArgument(b_96, 0);
                  e_96 = ATgetArgument(b_96, 1);
                  w_95 :
                  if(match_cons(c_96, sym_Build_1))
                    {
                      d_96 = ATgetArgument(c_96, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_96), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_96)), not_null(e_96))));
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(h_96, sym_Where_1))
            {
              f_96 = ATgetArgument(h_96, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(f_96));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(g_96, sym_Test_1))
        {
          h_96 = ATgetArgument(g_96, 0);
          x_95 :
          if(match_cons(h_96, sym_Test_1))
            {
              f_96 = ATgetArgument(h_96, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(f_96));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(g_96, sym_Not_1))
            {
              h_96 = ATgetArgument(g_96, 0);
              y_95 :
              if(match_cons(h_96, sym_Not_1))
                {
                  f_96 = ATgetArgument(h_96, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(f_96));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(g_96, sym_LChoice_2))
                {
                  h_96 = ATgetArgument(g_96, 0);
                  i_96 = ATgetArgument(g_96, 1);
                  {
                    if(((h_96 != NULL) && (h_96 != i_96)))
                      _fail(i_96);
                    else
                      h_96 = i_96;
                    t = not_null(h_96);
                  }
                }
              else
                {
                  if(match_cons(g_96, sym_Choice_2))
                    {
                      h_96 = ATgetArgument(g_96, 0);
                      i_96 = ATgetArgument(g_96, 1);
                      {
                        if(((h_96 != NULL) && (h_96 != i_96)))
                          _fail(i_96);
                        else
                          h_96 = i_96;
                        t = not_null(h_96);
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
  ATerm m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,q_97 = NULL;
  m_97 = t;
  c_97 :
  if(match_cons(m_97, sym_LChoice_2))
    {
      n_97 = ATgetArgument(m_97, 0);
      q_97 = ATgetArgument(m_97, 1);
      f_97 :
      if(match_cons(n_97, sym_LChoice_2))
        {
          o_97 = ATgetArgument(n_97, 0);
          p_97 = ATgetArgument(n_97, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_97), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(p_97), not_null(q_97)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(m_97, sym_Seq_2))
        {
          n_97 = ATgetArgument(m_97, 0);
          q_97 = ATgetArgument(m_97, 1);
          g_97 :
          if(match_cons(n_97, sym_Seq_2))
            {
              o_97 = ATgetArgument(n_97, 0);
              p_97 = ATgetArgument(n_97, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_97), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_97), not_null(q_97)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(m_97, sym_Choice_2))
            {
              n_97 = ATgetArgument(m_97, 0);
              q_97 = ATgetArgument(m_97, 1);
              j_97 :
              if(match_cons(n_97, sym_Choice_2))
                {
                  o_97 = ATgetArgument(n_97, 0);
                  p_97 = ATgetArgument(n_97, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(o_97), (ATerm) ATmakeAppl(sym_Choice_2, not_null(p_97), not_null(q_97)));
                }
              else
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
  ATerm i_98 = NULL,j_98 = NULL;
  i_98 = t;
  h_98 :
  if(match_cons(i_98, sym_DefaultVarDec_1))
    {
      j_98 = ATgetArgument(i_98, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(j_98), term_c_25);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0 (ATerm t)
{
  ATerm o_98 = NULL,p_98 = NULL;
  o_98 = t;
  n_98 :
  if(match_cons(o_98, sym_DefaultVarDec_1))
    {
      p_98 = ATgetArgument(o_98, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(p_98), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_25), term_c_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2(t, q_0, _id);
      {
        ATerm v_4 (ATerm t)
        {
          ATerm w_4 (ATerm t)
          {
            t = map1_1(t, q_0);
            return(t);
          }
          t = try_1(t, w_4);
          return(t);
        }
        t = Cons_2(t, _id, v_4);
      }
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      {
        ATerm x_4 (ATerm t)
        {
          t = map1_1(t, q_0);
          return(t);
        }
        t = Cons_2(t, _id, x_4);
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm y_99 = NULL,z_99 = NULL,a_100 = NULL,b_100 = NULL,f_100 = NULL,g_100 = NULL,h_100 = NULL;
  f_100 = t;
  u_99 :
  if(match_cons(f_100, sym_Lets_2))
    {
      g_100 = ATgetArgument(f_100, 0);
      h_100 = ATgetArgument(f_100, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(g_100), not_null(h_100));
    }
  else
    {
      if(match_cons(f_100, sym_LChoices_1))
        {
          g_100 = ATgetArgument(f_100, 0);
          v_99 :
          if(((ATgetType(g_100) == AT_LIST) && !(ATisEmpty(g_100))))
            {
              y_99 = ATgetFirst((ATermList) g_100);
              z_99 = (ATerm) ATgetNext((ATermList) g_100);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(y_99), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(z_99)));
            }
          else
            {
              if(((ATgetType(g_100) == AT_LIST) && ATisEmpty(g_100)))
                {
                  t = term_p_25;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(f_100, sym_Choices_1))
            {
              g_100 = ATgetArgument(f_100, 0);
              w_99 :
              if(((ATgetType(g_100) == AT_LIST) && !(ATisEmpty(g_100))))
                {
                  y_99 = ATgetFirst((ATermList) g_100);
                  z_99 = (ATerm) ATgetNext((ATermList) g_100);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(y_99), (ATerm) ATmakeAppl(sym_Choices_1, not_null(z_99)));
                }
              else
                {
                  if(((ATgetType(g_100) == AT_LIST) && ATisEmpty(g_100)))
                    {
                      t = term_p_25;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(f_100, sym_Seqs_1))
                {
                  g_100 = ATgetArgument(f_100, 0);
                  x_99 :
                  if(((ATgetType(g_100) == AT_LIST) && !(ATisEmpty(g_100))))
                    {
                      y_99 = ATgetFirst((ATermList) g_100);
                      z_99 = (ATerm) ATgetNext((ATermList) g_100);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_99), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(z_99)));
                    }
                  else
                    {
                      if(((ATgetType(g_100) == AT_LIST) && ATisEmpty(g_100)))
                        {
                          t = term_e_12;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(f_100, sym_RDefT_4))
                    {
                      g_100 = ATgetArgument(f_100, 0);
                      h_100 = ATgetArgument(f_100, 1);
                      b_100 = ATgetArgument(f_100, 2);
                      a_100 = ATgetArgument(f_100, 3);
                      {
                        ATerm e_101 = NULL,f_101 = NULL;
                        ATerm g_101 = NULL;
                        t = not_null(h_100);
                        {
                          ATerm h_101 = NULL;
                          t = map1_1(t, MkFunType_0);
                          {
                            g_101 = t;
                            {
                              if(((e_101 != NULL) && (e_101 != g_101)))
                                _fail(g_101);
                              else
                                e_101 = g_101;
                              {
                                t = not_null(b_100);
                                {
                                  ATerm y_4 (ATerm t)
                                  {
                                    t = try_1(t, MkConstType_0);
                                    return(t);
                                  }
                                  t = map1_1(t, y_4);
                                  {
                                    h_101 = t;
                                    if(((f_101 != NULL) && (f_101 != h_101)))
                                      _fail(h_101);
                                    else
                                      f_101 = h_101;
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(g_100), not_null(e_101), not_null(f_101), not_null(a_100));
                      }
                    }
                  else
                    {
                      if(match_cons(f_100, sym_SDefT_4))
                        {
                          g_100 = ATgetArgument(f_100, 0);
                          h_100 = ATgetArgument(f_100, 1);
                          b_100 = ATgetArgument(f_100, 2);
                          a_100 = ATgetArgument(f_100, 3);
                          {
                            ATerm q_25 = t;
                            int r_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm p_101 = NULL,q_101 = NULL;
                                ATerm r_101 = NULL;
                                t = not_null(b_100);
                                {
                                  ATerm s_101 = NULL;
                                  t = map1_1(t, MkConstType_0);
                                  {
                                    r_101 = t;
                                    {
                                      if(((p_101 != NULL) && (p_101 != r_101)))
                                        _fail(r_101);
                                      else
                                        p_101 = r_101;
                                      {
                                        t = not_null(h_100);
                                        {
                                          ATerm z_4 (ATerm t)
                                          {
                                            t = try_1(t, MkFunType_0);
                                            return(t);
                                          }
                                          t = map_1(t, z_4);
                                          {
                                            s_101 = t;
                                            if(((q_101 != NULL) && (q_101 != s_101)))
                                              _fail(s_101);
                                            else
                                              q_101 = s_101;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(g_100), not_null(q_101), not_null(p_101), not_null(a_100));
                                ;
                                LocalPopChoice(r_25);
                              }
                            else
                              {
                                t = q_25;
                                {
                                  ATerm x_101 = NULL,y_101 = NULL;
                                  ATerm z_101 = NULL;
                                  t = not_null(h_100);
                                  {
                                    ATerm a_102 = NULL;
                                    t = map1_1(t, MkFunType_0);
                                    {
                                      z_101 = t;
                                      {
                                        if(((x_101 != NULL) && (x_101 != z_101)))
                                          _fail(z_101);
                                        else
                                          x_101 = z_101;
                                        {
                                          t = not_null(b_100);
                                          {
                                            ATerm a_5 (ATerm t)
                                            {
                                              t = try_1(t, MkConstType_0);
                                              return(t);
                                            }
                                            t = map_1(t, a_5);
                                            {
                                              a_102 = t;
                                              if(((y_101 != NULL) && (y_101 != a_102)))
                                                _fail(a_102);
                                              else
                                                y_101 = a_102;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(g_100), not_null(x_101), not_null(y_101), not_null(a_100));
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(f_100, sym_InfixApp_3))
                            {
                              g_100 = ATgetArgument(f_100, 0);
                              h_100 = ATgetArgument(f_100, 1);
                              b_100 = ATgetArgument(f_100, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, not_null(h_100), (ATerm) ATmakeAppl(sym_Op_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_100)), not_null(g_100))));
                            }
                          else
                            {
                              if(match_cons(f_100, sym_BAM_3))
                                {
                                  g_100 = ATgetArgument(f_100, 0);
                                  h_100 = ATgetArgument(f_100, 1);
                                  b_100 = ATgetArgument(f_100, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(b_100))), not_null(g_100)), (ATerm) ATmakeAppl(sym_Build_1, not_null(h_100))));
                                }
                              else
                                {
                                  if(match_cons(f_100, sym_AM_2))
                                    {
                                      g_100 = ATgetArgument(f_100, 0);
                                      h_100 = ATgetArgument(f_100, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_100), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_100)));
                                    }
                                  else
                                    {
                                      if(match_cons(f_100, sym_MA_2))
                                        {
                                          g_100 = ATgetArgument(f_100, 0);
                                          h_100 = ATgetArgument(f_100, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_100)), not_null(h_100));
                                        }
                                      else
                                        {
                                          if(match_cons(f_100, sym_BA_2))
                                            {
                                              g_100 = ATgetArgument(f_100, 0);
                                              h_100 = ATgetArgument(f_100, 1);
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_100)), not_null(g_100));
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
  ATerm s_103 = NULL,t_103 = NULL,u_103 = NULL,v_103 = NULL;
  s_103 = t;
  q_103 :
  if(match_cons(s_103, sym_GuardedLChoice_3))
    {
      t_103 = ATgetArgument(s_103, 0);
      u_103 = ATgetArgument(s_103, 1);
      v_103 = ATgetArgument(s_103, 2);
      r_103 :
      if(match_cons(v_103, sym_Fail_0))
        {
          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_103), not_null(u_103));
        }
      else
        {
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
  ATerm c_104 = NULL,d_104 = NULL;
  c_104 = t;
  a_104 :
  if(match_cons(c_104, sym_Where_1))
    {
      d_104 = ATgetArgument(c_104, 0);
      b_104 :
      if(match_cons(d_104, sym_Fail_0))
        {
          t = term_p_25;
        }
      else
        {
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
  ATerm i_104 = NULL,j_104 = NULL,k_104 = NULL;
  i_104 = t;
  g_104 :
  if(match_cons(i_104, sym_LChoice_2))
    {
      j_104 = ATgetArgument(i_104, 0);
      k_104 = ATgetArgument(i_104, 1);
      h_104 :
      if(match_cons(k_104, sym_Fail_0))
        {
          t = not_null(j_104);
        }
      else
        {
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
  ATerm q_104 = NULL,r_104 = NULL,s_104 = NULL;
  q_104 = t;
  o_104 :
  if(match_cons(q_104, sym_LChoice_2))
    {
      r_104 = ATgetArgument(q_104, 0);
      s_104 = ATgetArgument(q_104, 1);
      p_104 :
      if(match_cons(r_104, sym_Fail_0))
        {
          t = not_null(s_104);
        }
      else
        {
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
  ATerm y_104 = NULL,z_104 = NULL,a_105 = NULL;
  y_104 = t;
  w_104 :
  if(match_cons(y_104, sym_Choice_2))
    {
      z_104 = ATgetArgument(y_104, 0);
      a_105 = ATgetArgument(y_104, 1);
      x_104 :
      if(match_cons(a_105, sym_Fail_0))
        {
          t = not_null(z_104);
        }
      else
        {
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
  ATerm g_105 = NULL,h_105 = NULL,i_105 = NULL;
  g_105 = t;
  e_105 :
  if(match_cons(g_105, sym_Choice_2))
    {
      h_105 = ATgetArgument(g_105, 0);
      i_105 = ATgetArgument(g_105, 1);
      f_105 :
      if(match_cons(h_105, sym_Fail_0))
        {
          t = not_null(i_105);
        }
      else
        {
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
  ATerm o_105 = NULL,p_105 = NULL,q_105 = NULL;
  o_105 = t;
  n_105 :
  if(match_cons(o_105, sym_Cong_2))
    {
      p_105 = ATgetArgument(o_105, 0);
      q_105 = ATgetArgument(o_105, 1);
      {
        t = not_null(q_105);
        {
          ATerm b_5 (ATerm t)
          {
            ATerm t_105 = NULL;
            t_105 = t;
            m_105 :
            if(!(match_cons(t_105, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, b_5);
        }
        t = term_p_25;
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
  ATerm y_105 = NULL,z_105 = NULL,a_106 = NULL;
  y_105 = t;
  w_105 :
  if(match_cons(y_105, sym_Path_2))
    {
      z_105 = ATgetArgument(y_105, 0);
      a_106 = ATgetArgument(y_105, 1);
      x_105 :
      if(match_cons(a_106, sym_Fail_0))
        {
          t = term_p_25;
        }
      else
        {
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
  ATerm g_106 = NULL,h_106 = NULL;
  g_106 = t;
  e_106 :
  if(match_cons(g_106, sym_One_1))
    {
      h_106 = ATgetArgument(g_106, 0);
      f_106 :
      if(match_cons(h_106, sym_Fail_0))
        {
          t = term_p_25;
        }
      else
        {
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
  ATerm m_106 = NULL,n_106 = NULL;
  m_106 = t;
  k_106 :
  if(match_cons(m_106, sym_Some_1))
    {
      n_106 = ATgetArgument(m_106, 0);
      l_106 :
      if(match_cons(n_106, sym_Fail_0))
        {
          t = term_p_25;
        }
      else
        {
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
  ATerm s_106 = NULL,t_106 = NULL,u_106 = NULL;
  s_106 = t;
  q_106 :
  if(match_cons(s_106, sym_Rec_2))
    {
      t_106 = ATgetArgument(s_106, 0);
      u_106 = ATgetArgument(s_106, 1);
      r_106 :
      if(match_cons(u_106, sym_Fail_0))
        {
          t = term_p_25;
        }
      else
        {
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
  ATerm a_107 = NULL,b_107 = NULL,c_107 = NULL;
  a_107 = t;
  y_106 :
  if(match_cons(a_107, sym_Scope_2))
    {
      b_107 = ATgetArgument(a_107, 0);
      c_107 = ATgetArgument(a_107, 1);
      z_106 :
      if(match_cons(c_107, sym_Fail_0))
        {
          t = term_p_25;
        }
      else
        {
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
  ATerm i_107 = NULL,j_107 = NULL,k_107 = NULL;
  i_107 = t;
  g_107 :
  if(match_cons(i_107, sym_Seq_2))
    {
      j_107 = ATgetArgument(i_107, 0);
      k_107 = ATgetArgument(i_107, 1);
      h_107 :
      if(match_cons(j_107, sym_Fail_0))
        {
          t = term_p_25;
        }
      else
        {
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
  ATerm q_107 = NULL,r_107 = NULL;
  q_107 = t;
  o_107 :
  if(match_cons(q_107, sym_Not_1))
    {
      r_107 = ATgetArgument(q_107, 0);
      p_107 :
      if(match_cons(r_107, sym_Fail_0))
        {
          t = term_e_12;
        }
      else
        {
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
  ATerm w_107 = NULL,x_107 = NULL;
  w_107 = t;
  u_107 :
  if(match_cons(w_107, sym_Test_1))
    {
      x_107 = ATgetArgument(w_107, 0);
      v_107 :
      if(match_cons(x_107, sym_Fail_0))
        {
          t = term_p_25;
        }
      else
        {
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
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
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
            t = F2_0(t);
            ;
            LocalPopChoice(y_25);
          }
        else
          {
            t = x_25;
            {
              ATerm z_25 = t;
              int a_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  ;
                  LocalPopChoice(a_26);
                }
              else
                {
                  t = z_25;
                  {
                    ATerm d_27 = t;
                    int e_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        ;
                        LocalPopChoice(e_27);
                      }
                    else
                      {
                        t = d_27;
                        {
                          ATerm f_27 = t;
                          int g_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              ;
                              LocalPopChoice(g_27);
                            }
                          else
                            {
                              t = f_27;
                              {
                                ATerm q_27 = t;
                                int r_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    ;
                                    LocalPopChoice(r_27);
                                  }
                                else
                                  {
                                    t = q_27;
                                    {
                                      ATerm s_27 = t;
                                      int t_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          ;
                                          LocalPopChoice(t_27);
                                        }
                                      else
                                        {
                                          t = s_27;
                                          {
                                            ATerm h_28 = t;
                                            int l_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                ;
                                                LocalPopChoice(l_28);
                                              }
                                            else
                                              {
                                                t = h_28;
                                                {
                                                  ATerm m_28 = t;
                                                  int n_28 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      ;
                                                      LocalPopChoice(n_28);
                                                    }
                                                  else
                                                    {
                                                      t = m_28;
                                                      {
                                                        ATerm o_28 = t;
                                                        int p_28 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            ;
                                                            LocalPopChoice(p_28);
                                                          }
                                                        else
                                                          {
                                                            t = o_28;
                                                            {
                                                              ATerm q_28 = t;
                                                              int r_28 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  ;
                                                                  LocalPopChoice(r_28);
                                                                }
                                                              else
                                                                {
                                                                  t = q_28;
                                                                  {
                                                                    ATerm s_28 = t;
                                                                    int t_28 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        ;
                                                                        LocalPopChoice(t_28);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = s_28;
                                                                        {
                                                                          ATerm u_28 = t;
                                                                          int v_28 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              ;
                                                                              LocalPopChoice(v_28);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_28;
                                                                              {
                                                                                ATerm w_28 = t;
                                                                                int x_28 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = F15_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(x_28);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_28;
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
  ATerm c_108 = NULL,d_108 = NULL;
  c_108 = t;
  a_108 :
  if(match_cons(c_108, sym_Match_1))
    {
      d_108 = ATgetArgument(c_108, 0);
      b_108 :
      if(match_cons(d_108, sym_Wld_0))
        {
          t = term_e_12;
        }
      else
        {
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
  ATerm i_108 = NULL,j_108 = NULL;
  i_108 = t;
  g_108 :
  if(match_cons(i_108, sym_Where_1))
    {
      j_108 = ATgetArgument(i_108, 0);
      h_108 :
      if(match_cons(j_108, sym_Id_0))
        {
          t = term_e_12;
        }
      else
        {
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
  ATerm o_108 = NULL,p_108 = NULL;
  o_108 = t;
  m_108 :
  if(match_cons(o_108, sym_All_1))
    {
      p_108 = ATgetArgument(o_108, 0);
      n_108 :
      if(match_cons(p_108, sym_Id_0))
        {
          t = term_e_12;
        }
      else
        {
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
  ATerm u_108 = NULL,v_108 = NULL,w_108 = NULL;
  u_108 = t;
  s_108 :
  if(match_cons(u_108, sym_Rec_2))
    {
      v_108 = ATgetArgument(u_108, 0);
      w_108 = ATgetArgument(u_108, 1);
      t_108 :
      if(match_cons(w_108, sym_Id_0))
        {
          t = term_e_12;
        }
      else
        {
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
  ATerm c_109 = NULL,d_109 = NULL,e_109 = NULL;
  c_109 = t;
  a_109 :
  if(match_cons(c_109, sym_Scope_2))
    {
      d_109 = ATgetArgument(c_109, 0);
      e_109 = ATgetArgument(c_109, 1);
      b_109 :
      if(match_cons(e_109, sym_Id_0))
        {
          t = term_e_12;
        }
      else
        {
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
  ATerm k_109 = NULL,l_109 = NULL,m_109 = NULL;
  k_109 = t;
  i_109 :
  if(match_cons(k_109, sym_LChoice_2))
    {
      l_109 = ATgetArgument(k_109, 0);
      m_109 = ATgetArgument(k_109, 1);
      j_109 :
      if(match_cons(l_109, sym_Id_0))
        {
          t = term_e_12;
        }
      else
        {
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
  ATerm s_109 = NULL,t_109 = NULL,u_109 = NULL;
  s_109 = t;
  q_109 :
  if(match_cons(s_109, sym_Seq_2))
    {
      t_109 = ATgetArgument(s_109, 0);
      u_109 = ATgetArgument(s_109, 1);
      r_109 :
      if(match_cons(u_109, sym_Id_0))
        {
          t = not_null(t_109);
        }
      else
        {
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
  ATerm c_110 = NULL,d_110 = NULL,e_110 = NULL;
  c_110 = t;
  a_110 :
  if(match_cons(c_110, sym_Seq_2))
    {
      d_110 = ATgetArgument(c_110, 0);
      e_110 = ATgetArgument(c_110, 1);
      b_110 :
      if(match_cons(d_110, sym_Id_0))
        {
          t = not_null(e_110);
        }
      else
        {
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
  ATerm k_110 = NULL,l_110 = NULL;
  k_110 = t;
  i_110 :
  if(match_cons(k_110, sym_Not_1))
    {
      l_110 = ATgetArgument(k_110, 0);
      j_110 :
      if(match_cons(l_110, sym_Id_0))
        {
          t = term_p_25;
        }
      else
        {
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
  ATerm q_110 = NULL,r_110 = NULL;
  q_110 = t;
  o_110 :
  if(match_cons(q_110, sym_Test_1))
    {
      r_110 = ATgetArgument(q_110, 0);
      p_110 :
      if(match_cons(r_110, sym_Id_0))
        {
          t = term_e_12;
        }
      else
        {
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
  ATerm k_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      ;
      LocalPopChoice(l_29);
    }
  else
    {
      t = k_29;
      {
        ATerm m_29 = t;
        int p_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            ;
            LocalPopChoice(p_29);
          }
        else
          {
            t = m_29;
            {
              ATerm q_29 = t;
              int r_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  ;
                  LocalPopChoice(r_29);
                }
              else
                {
                  t = q_29;
                  {
                    ATerm u_29 = t;
                    int v_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        ;
                        LocalPopChoice(v_29);
                      }
                    else
                      {
                        t = u_29;
                        {
                          ATerm w_29 = t;
                          int z_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              ;
                              LocalPopChoice(z_29);
                            }
                          else
                            {
                              t = w_29;
                              {
                                ATerm c_30 = t;
                                int h_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    ;
                                    LocalPopChoice(h_30);
                                  }
                                else
                                  {
                                    t = c_30;
                                    {
                                      ATerm i_30 = t;
                                      int j_30 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          ;
                                          LocalPopChoice(j_30);
                                        }
                                      else
                                        {
                                          t = i_30;
                                          {
                                            ATerm k_30 = t;
                                            int p_30 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                ;
                                                LocalPopChoice(p_30);
                                              }
                                            else
                                              {
                                                t = k_30;
                                                {
                                                  ATerm q_30 = t;
                                                  int t_30 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      ;
                                                      LocalPopChoice(t_30);
                                                    }
                                                  else
                                                    {
                                                      t = q_30;
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
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
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
            t = ElimFail_0(t);
            ;
            LocalPopChoice(x_30);
          }
        else
          {
            t = w_30;
            {
              ATerm h_31 = t;
              int i_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(i_31);
                }
              else
                {
                  t = h_31;
                  {
                    ATerm j_31 = t;
                    int k_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        ;
                        LocalPopChoice(k_31);
                      }
                    else
                      {
                        t = j_31;
                        {
                          ATerm l_31 = t;
                          int m_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              ;
                              LocalPopChoice(m_31);
                            }
                          else
                            {
                              t = l_31;
                              {
                                ATerm r_31 = t;
                                int s_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    ;
                                    LocalPopChoice(s_31);
                                  }
                                else
                                  {
                                    t = r_31;
                                    {
                                      ATerm t_31 = t;
                                      int u_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetNoDefs_0(t);
                                          ;
                                          LocalPopChoice(u_31);
                                        }
                                      else
                                        {
                                          t = t_31;
                                          {
                                            ATerm v_31 = t;
                                            int b_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = LetHoist_0(t);
                                                ;
                                                LocalPopChoice(b_32);
                                              }
                                            else
                                              {
                                                t = v_31;
                                                {
                                                  ATerm c_32 = t;
                                                  int d_32 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = MatchingCongruence_0(t);
                                                      ;
                                                      LocalPopChoice(d_32);
                                                    }
                                                  else
                                                    {
                                                      t = c_32;
                                                      {
                                                        ATerm g_32 = t;
                                                        int i_32 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = TransformingAnnoCongruence_0(t);
                                                            ;
                                                            LocalPopChoice(i_32);
                                                          }
                                                        else
                                                          {
                                                            t = g_32;
                                                            t = TransformingCongruence_0(t);
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_1 (ATerm t, ATerm z_123 (ATerm))
{
  ATerm t_110 (ATerm t)
  {
    ATerm c_5 (ATerm t)
    {
      t = z_123(t);
      t = t_110(t);
      return(t);
    }
    t = try_1(t, c_5);
    return(t);
  }
  t = t_110(t);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm x_110 (ATerm))
{
  t = x_110(t);
  {
    ATerm d_5 (ATerm t)
    {
      t = downup_1(t, x_110);
      return(t);
    }
    t = _all(t, d_5);
    t = x_110(t);
  }
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, e_5);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm a_111 = NULL,b_111 = NULL,c_111 = NULL;
  a_111 = t;
  z_110 :
  if(match_cons(a_111, sym__2))
    {
      b_111 = ATgetArgument(a_111, 0);
      c_111 = ATgetArgument(a_111, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_111)), not_null(b_111));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm k_111 = NULL,l_111 = NULL,m_111 = NULL,n_111 = NULL,o_111 = NULL,p_111 = NULL,q_111 = NULL;
  k_111 = t;
  h_111 :
  if(match_cons(k_111, sym__2))
    {
      l_111 = ATgetArgument(k_111, 0);
      o_111 = ATgetArgument(k_111, 1);
      i_111 :
      if(((ATgetType(l_111) == AT_LIST) && !(ATisEmpty(l_111))))
        {
          m_111 = ATgetFirst((ATermList) l_111);
          n_111 = (ATerm) ATgetNext((ATermList) l_111);
          j_111 :
          if(((ATgetType(o_111) == AT_LIST) && !(ATisEmpty(o_111))))
            {
              p_111 = ATgetFirst((ATermList) o_111);
              q_111 = (ATerm) ATgetNext((ATermList) o_111);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(m_111), not_null(p_111)), (ATerm) ATmakeAppl(sym__2, not_null(n_111), not_null(q_111)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm c_112 = NULL,d_112 = NULL,e_112 = NULL;
  c_112 = t;
  x_111 :
  if(match_cons(c_112, sym__2))
    {
      d_112 = ATgetArgument(c_112, 0);
      e_112 = ATgetArgument(c_112, 1);
      y_111 :
      if(((ATgetType(d_112) == AT_LIST) && ATisEmpty(d_112)))
        {
          b_112 :
          if(((ATgetType(e_112) == AT_LIST) && ATisEmpty(e_112)))
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
ATerm genzip_4 (ATerm t, ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm l_117 (ATerm))
{
  ATerm g_112 (ATerm t)
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_117(t);
        ;
        LocalPopChoice(k_32);
      }
    else
      {
        t = j_32;
        {
          t = j_117(t);
          {
            t = _2(t, l_117, g_112);
            t = k_117(t);
          }
        }
      }
    return(t);
  }
  t = g_112(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm n_117 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, n_117);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm r_112 = NULL,s_112 = NULL,t_112 = NULL,u_112 = NULL,v_112 = NULL;
  s_112 = t;
  j_112 :
  if(match_cons(s_112, sym_CallT_3))
    {
      t_112 = ATgetArgument(s_112, 0);
      v_112 = ATgetArgument(s_112, 1);
      r_112 = ATgetArgument(s_112, 2);
      k_112 :
      if(match_cons(t_112, sym_SVar_1))
        {
          u_112 = ATgetArgument(t_112, 0);
          l_112 :
          if(((ATgetType(v_112) == AT_LIST) && ATisEmpty(v_112)))
            {
              m_112 :
              if(((ATgetType(r_112) == AT_LIST) && ATisEmpty(r_112)))
                {
                  t = not_null(u_112);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(s_112, sym_Call_2))
        {
          t_112 = ATgetArgument(s_112, 0);
          v_112 = ATgetArgument(s_112, 1);
          p_112 :
          if(match_cons(t_112, sym_SVar_1))
            {
              u_112 = ATgetArgument(t_112, 0);
              q_112 :
              if(((ATgetType(v_112) == AT_LIST) && ATisEmpty(v_112)))
                {
                  t = not_null(u_112);
                }
              else
                {
                  _fail(t);
                }
            }
          else
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
ATerm SubsVar_2 (ATerm t, ATerm a_137 (ATerm), ATerm b_137 (ATerm))
{
  ATerm d_113 = NULL;
  ATerm f_113 = NULL,g_113 = NULL;
  d_113 = t;
  {
    ATerm h_113 = NULL;
    t = not_null(d_113);
    {
      ATerm i_113 = NULL;
      t = a_137(t);
      {
        h_113 = t;
        {
          if(((f_113 != NULL) && (f_113 != h_113)))
            _fail(h_113);
          else
            f_113 = h_113;
          {
            t = b_137(t);
            {
              i_113 = t;
              if(((g_113 != NULL) && (g_113 != i_113)))
                _fail(i_113);
              else
                g_113 = i_113;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_113), not_null(g_113));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm r_113 = NULL,s_113 = NULL,t_113 = NULL,u_113 = NULL;
  r_113 = t;
  q_113 :
  if(match_cons(r_113, sym__2))
    {
      s_113 = ATgetArgument(r_113, 0);
      t_113 = ATgetArgument(r_113, 1);
      {
        ATerm w_113 = NULL;
        if(((w_113 != NULL) && (w_113 != t_113)))
          _fail(t_113);
        else
          w_113 = t_113;
      }
    }
  else
    {
      if(match_cons(r_113, sym__3))
        {
          s_113 = ATgetArgument(r_113, 0);
          t_113 = ATgetArgument(r_113, 1);
          u_113 = ATgetArgument(r_113, 2);
          {
            ATerm e_114 = NULL;
            ATerm f_114 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_113), not_null(t_113));
            {
              t = zip_1(t, _id);
              {
                f_114 = t;
                if(((e_114 != NULL) && (e_114 != f_114)))
                  _fail(f_114);
                else
                  e_114 = f_114;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_114), not_null(u_113));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm l_136 (ATerm), ATerm m_136 (ATerm))
{
  ATerm n_114 = NULL,o_114 = NULL,p_114 = NULL;
  t = subs_args_0(t);
  {
    n_114 = t;
    m_114 :
    if(match_cons(n_114, sym__2))
      {
        o_114 = ATgetArgument(n_114, 0);
        p_114 = ATgetArgument(n_114, 1);
        {
          t = not_null(p_114);
          {
            ATerm f_5 (ATerm t)
            {
              ATerm g_5 (ATerm t)
              {
                t = not_null(o_114);
                return(t);
              }
              t = SubsVar_2(t, l_136, g_5);
              t = m_136(t);
              return(t);
            }
            t = alltd_1(t, f_5);
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
ATerm substitute_1 (ATerm t, ATerm n_136 (ATerm))
{
  t = substitute_2(t, n_136, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm a_140 (ATerm))
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_5 (ATerm t)
      {
        t = split_2(t, _id, a_140);
        {
          ATerm i_5 (ATerm t)
          {
            ATerm x_114 = NULL,y_114 = NULL,z_114 = NULL,a_115 = NULL,b_115 = NULL,c_115 = NULL,e_115 = NULL;
            x_114 = t;
            v_114 :
            if(match_cons(x_114, sym__2))
              {
                y_114 = ATgetArgument(x_114, 0);
                e_115 = ATgetArgument(x_114, 1);
                w_114 :
                if(match_cons(y_114, sym_SDef_3))
                  {
                    z_114 = ATgetArgument(y_114, 0);
                    a_115 = ATgetArgument(y_114, 1);
                    b_115 = ATgetArgument(y_114, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(e_115), not_null(a_115), not_null(b_115));
                  }
                else
                  {
                    if(match_cons(y_114, sym_SDefT_4))
                      {
                        z_114 = ATgetArgument(y_114, 0);
                        a_115 = ATgetArgument(y_114, 1);
                        b_115 = ATgetArgument(y_114, 2);
                        c_115 = ATgetArgument(y_114, 3);
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(e_115), not_null(a_115), not_null(b_115), not_null(c_115));
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
          t = zip_1(t, i_5);
        }
        return(t);
      }
      t = Let_2(t, h_5, _id);
      ;
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      {
        ATerm n_32 = t;
        int o_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_5 (ATerm t)
            {
              t = split_2(t, _id, a_140);
              t = zip_1(t, ReplaceVar_0);
              return(t);
            }
            t = SDef_3(t, _id, j_5, _id);
            ;
            LocalPopChoice(o_32);
          }
        else
          {
            t = n_32;
            {
              ATerm r_32 = t;
              int s_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_5 (ATerm t)
                  {
                    t = split_2(t, _id, a_140);
                    t = zip_1(t, ReplaceVar_0);
                    return(t);
                  }
                  t = SDefT_4(t, _id, k_5, _id, _id);
                  ;
                  LocalPopChoice(s_32);
                }
              else
                {
                  t = r_32;
                  {
                    ATerm t_32 = t;
                    int u_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_5 (ATerm t)
                        {
                          t = split_2(t, _id, a_140);
                          t = zip_1(t, ReplaceVar_0);
                          return(t);
                        }
                        t = RDefT_4(t, _id, l_5, _id, _id);
                        ;
                        LocalPopChoice(u_32);
                      }
                    else
                      {
                        t = t_32;
                        {
                          ATerm m_5 (ATerm t)
                          {
                            t = a_140(t);
                            t = Hd_0(t);
                            return(t);
                          }
                          t = Rec_2(t, m_5, _id);
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
ATerm Rec_2 (ATerm t, ATerm a_101 (ATerm), ATerm b_101 (ATerm))
{
  ATerm a_116 = NULL,b_116 = NULL,c_116 = NULL;
  a_116 = t;
  z_115 :
  if(match_cons(a_116, sym_Rec_2))
    {
      b_116 = ATgetArgument(a_116, 0);
      c_116 = ATgetArgument(a_116, 1);
      {
        ATerm g_116 = NULL,i_116 = NULL;
        ATerm h_116 = NULL;
        t = SSLgetAnnotations(not_null(a_116));
        {
          h_116 = t;
          if(((g_116 != NULL) && (g_116 != h_116)))
            _fail(h_116);
          else
            g_116 = h_116;
        }
        {
          t = not_null(b_116);
          {
            ATerm k_116 = NULL;
            t = a_101(t);
            {
              i_116 = t;
              {
                t = not_null(c_116);
                {
                  ATerm m_116 = NULL;
                  t = b_101(t);
                  {
                    k_116 = t;
                    {
                      ATerm n_116 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(i_116), not_null(k_116)), not_null(g_116));
                      {
                        n_116 = t;
                        if(((m_116 != NULL) && (m_116 != n_116)))
                          _fail(n_116);
                        else
                          m_116 = n_116;
                      }
                      t = not_null(m_116);
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
ATerm SDef_3 (ATerm t, ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm u_102 (ATerm))
{
  ATerm a_117 = NULL,b_117 = NULL,c_117 = NULL,d_117 = NULL;
  a_117 = t;
  z_116 :
  if(match_cons(a_117, sym_SDef_3))
    {
      b_117 = ATgetArgument(a_117, 0);
      c_117 = ATgetArgument(a_117, 1);
      d_117 = ATgetArgument(a_117, 2);
      {
        ATerm o_117 = NULL,q_117 = NULL;
        ATerm p_117 = NULL;
        t = SSLgetAnnotations(not_null(a_117));
        {
          p_117 = t;
          if(((o_117 != NULL) && (o_117 != p_117)))
            _fail(p_117);
          else
            o_117 = p_117;
        }
        {
          t = not_null(b_117);
          {
            ATerm t_117 = NULL;
            t = s_102(t);
            {
              q_117 = t;
              {
                t = not_null(c_117);
                {
                  ATerm v_117 = NULL;
                  t = t_102(t);
                  {
                    t_117 = t;
                    {
                      t = not_null(d_117);
                      {
                        ATerm x_117 = NULL;
                        t = u_102(t);
                        {
                          v_117 = t;
                          {
                            ATerm y_117 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(q_117), not_null(t_117), not_null(v_117)), not_null(o_117));
                            {
                              y_117 = t;
                              if(((x_117 != NULL) && (x_117 != y_117)))
                                _fail(y_117);
                              else
                                x_117 = y_117;
                            }
                            t = not_null(x_117);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm d_100 (ATerm), ATerm e_100 (ATerm))
{
  ATerm l_118 = NULL,m_118 = NULL,n_118 = NULL;
  l_118 = t;
  k_118 :
  if(match_cons(l_118, sym_Let_2))
    {
      m_118 = ATgetArgument(l_118, 0);
      n_118 = ATgetArgument(l_118, 1);
      {
        ATerm r_118 = NULL,t_118 = NULL;
        ATerm s_118 = NULL;
        t = SSLgetAnnotations(not_null(l_118));
        {
          s_118 = t;
          if(((r_118 != NULL) && (r_118 != s_118)))
            _fail(s_118);
          else
            r_118 = s_118;
        }
        {
          t = not_null(m_118);
          {
            ATerm v_118 = NULL;
            t = d_100(t);
            {
              t_118 = t;
              {
                t = not_null(n_118);
                {
                  ATerm x_118 = NULL;
                  t = e_100(t);
                  {
                    v_118 = t;
                    {
                      ATerm y_118 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(t_118), not_null(v_118)), not_null(r_118));
                      {
                        y_118 = t;
                        if(((x_118 != NULL) && (x_118 != y_118)))
                          _fail(y_118);
                        else
                          x_118 = y_118;
                      }
                      t = not_null(x_118);
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
ATerm sboundin_3 (ATerm t, ATerm b_140 (ATerm), ATerm c_140 (ATerm), ATerm d_140 (ATerm))
{
  ATerm v_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, b_140, b_140);
      ;
      LocalPopChoice(w_32);
    }
  else
    {
      t = v_32;
      {
        ATerm t_33 = t;
        int u_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, d_140, d_140, b_140);
            ;
            LocalPopChoice(u_33);
          }
        else
          {
            t = t_33;
            {
              ATerm v_33 = t;
              int c_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4(t, d_140, d_140, d_140, b_140);
                  ;
                  LocalPopChoice(c_34);
                }
              else
                {
                  t = v_33;
                  t = Rec_2(t, d_140, b_140);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0 (ATerm t)
{
  ATerm k_119 = NULL,l_119 = NULL,o_119 = NULL,p_119 = NULL,q_119 = NULL;
  k_119 = t;
  h_119 :
  if(match_cons(k_119, sym_RDefT_4))
    {
      l_119 = ATgetArgument(k_119, 0);
      o_119 = ATgetArgument(k_119, 1);
      p_119 = ATgetArgument(k_119, 2);
      q_119 = ATgetArgument(k_119, 3);
      {
        t = not_null(o_119);
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
  ATerm d_120 = NULL,e_120 = NULL,f_120 = NULL,g_120 = NULL,h_120 = NULL;
  d_120 = t;
  c_120 :
  if(match_cons(d_120, sym_SDefT_4))
    {
      e_120 = ATgetArgument(d_120, 0);
      f_120 = ATgetArgument(d_120, 1);
      g_120 = ATgetArgument(d_120, 2);
      h_120 = ATgetArgument(d_120, 3);
      {
        t = not_null(f_120);
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
  ATerm p_120 = NULL,q_120 = NULL,r_120 = NULL;
  p_120 = t;
  o_120 :
  if(match_cons(p_120, sym_Rec_2))
    {
      q_120 = ATgetArgument(p_120, 0);
      r_120 = ATgetArgument(p_120, 1);
      t = (ATerm) ATinsert(ATempty, not_null(q_120));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm x_120 = NULL,y_120 = NULL,z_120 = NULL,a_121 = NULL;
  x_120 = t;
  w_120 :
  if(match_cons(x_120, sym_SDef_3))
    {
      y_120 = ATgetArgument(x_120, 0);
      z_120 = ATgetArgument(x_120, 1);
      a_121 = ATgetArgument(x_120, 2);
      {
        t = not_null(z_120);
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
  ATerm l_121 = NULL,m_121 = NULL,n_121 = NULL;
  l_121 = t;
  j_121 :
  if(match_cons(l_121, sym_Let_2))
    {
      m_121 = ATgetArgument(l_121, 0);
      n_121 = ATgetArgument(l_121, 1);
      {
        t = not_null(m_121);
        {
          ATerm n_5 (ATerm t)
          {
            ATerm q_121 = NULL,r_121 = NULL,s_121 = NULL,t_121 = NULL,u_121 = NULL;
            q_121 = t;
            i_121 :
            if(match_cons(q_121, sym_SDef_3))
              {
                r_121 = ATgetArgument(q_121, 0);
                s_121 = ATgetArgument(q_121, 1);
                t_121 = ATgetArgument(q_121, 2);
                t = not_null(r_121);
              }
            else
              {
                if(match_cons(q_121, sym_SDefT_4))
                  {
                    r_121 = ATgetArgument(q_121, 0);
                    s_121 = ATgetArgument(q_121, 1);
                    t_121 = ATgetArgument(q_121, 2);
                    u_121 = ATgetArgument(q_121, 3);
                    t = not_null(r_121);
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, n_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm c_100 (ATerm))
{
  ATerm k_122 = NULL,l_122 = NULL;
  k_122 = t;
  j_122 :
  if(match_cons(k_122, sym_SVar_1))
    {
      l_122 = ATgetArgument(k_122, 0);
      {
        ATerm o_122 = NULL,q_122 = NULL;
        ATerm p_122 = NULL;
        t = SSLgetAnnotations(not_null(k_122));
        {
          p_122 = t;
          if(((o_122 != NULL) && (o_122 != p_122)))
            _fail(p_122);
          else
            o_122 = p_122;
        }
        {
          t = not_null(l_122);
          {
            ATerm s_122 = NULL;
            t = c_100(t);
            {
              q_122 = t;
              {
                ATerm t_122 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(q_122)), not_null(o_122));
                {
                  t_122 = t;
                  if(((s_122 != NULL) && (s_122 != t_122)))
                    _fail(t_122);
                  else
                    s_122 = t_122;
                }
                t = not_null(s_122);
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
  ATerm o_5 (ATerm t)
  {
    ATerm d_34 = t;
    int e_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(e_34);
      }
    else
      {
        t = d_34;
        {
          ATerm r_34 = t;
          int t_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(t_34);
            }
          else
            {
              t = r_34;
              {
                ATerm u_34 = t;
                int v_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0(t);
                    ;
                    LocalPopChoice(v_34);
                  }
                else
                  {
                    t = u_34;
                    {
                      ATerm w_34 = t;
                      int x_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0(t);
                          ;
                          LocalPopChoice(x_34);
                        }
                      else
                        {
                          t = w_34;
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
  t = rename_4(t, SVar_1, o_5, sboundin_3, spaste_1);
  return(t);
}
ATerm ReplaceVar_0 (ATerm t)
{
  ATerm h_123 = NULL,j_123 = NULL,k_123 = NULL,l_123 = NULL,m_123 = NULL;
  h_123 = t;
  a_123 :
  if(match_cons(h_123, sym__2))
    {
      j_123 = ATgetArgument(h_123, 0);
      m_123 = ATgetArgument(h_123, 1);
      b_123 :
      if(match_cons(j_123, sym_DefaultVarDec_1))
        {
          k_123 = ATgetArgument(j_123, 0);
          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, not_null(m_123));
        }
      else
        {
          if(match_cons(j_123, sym_VarDec_2))
            {
              k_123 = ATgetArgument(j_123, 0);
              l_123 = ATgetArgument(j_123, 1);
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(m_123), not_null(l_123));
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
ATerm tpaste_1 (ATerm t, ATerm w_139 (ATerm))
{
  ATerm y_34 = t;
  int z_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, w_139, _id);
      ;
      LocalPopChoice(z_34);
    }
  else
    {
      t = y_34;
      {
        ATerm a_35 = t;
        int b_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_5 (ATerm t)
            {
              t = split_2(t, _id, w_139);
              t = zip_1(t, ReplaceVar_0);
              return(t);
            }
            t = SDefT_4(t, _id, _id, p_5, _id);
            ;
            LocalPopChoice(b_35);
          }
        else
          {
            t = a_35;
            {
              ATerm q_5 (ATerm t)
              {
                t = split_2(t, _id, w_139);
                t = zip_1(t, ReplaceVar_0);
                return(t);
              }
              t = RDefT_4(t, _id, _id, q_5, _id);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm k_99 (ATerm))
{
  ATerm b_124 = NULL,c_124 = NULL;
  b_124 = t;
  y_123 :
  if(match_cons(b_124, sym_DynamicRules_1))
    {
      c_124 = ATgetArgument(b_124, 0);
      {
        ATerm f_124 = NULL,h_124 = NULL;
        ATerm g_124 = NULL;
        t = SSLgetAnnotations(not_null(b_124));
        {
          g_124 = t;
          if(((f_124 != NULL) && (f_124 != g_124)))
            _fail(g_124);
          else
            f_124 = g_124;
        }
        {
          t = not_null(c_124);
          {
            ATerm j_124 = NULL;
            t = k_99(t);
            {
              h_124 = t;
              {
                ATerm k_124 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(h_124)), not_null(f_124));
                {
                  k_124 = t;
                  if(((j_124 != NULL) && (j_124 != k_124)))
                    _fail(k_124);
                  else
                    j_124 = k_124;
                }
                t = not_null(j_124);
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
ATerm RDefT_4 (ATerm t, ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm e_99 (ATerm))
{
  ATerm d_125 = NULL,e_125 = NULL,f_125 = NULL,g_125 = NULL,h_125 = NULL;
  d_125 = t;
  c_125 :
  if(match_cons(d_125, sym_RDefT_4))
    {
      e_125 = ATgetArgument(d_125, 0);
      f_125 = ATgetArgument(d_125, 1);
      g_125 = ATgetArgument(d_125, 2);
      h_125 = ATgetArgument(d_125, 3);
      {
        ATerm n_125 = NULL,p_125 = NULL;
        ATerm o_125 = NULL;
        t = SSLgetAnnotations(not_null(d_125));
        {
          o_125 = t;
          if(((n_125 != NULL) && (n_125 != o_125)))
            _fail(o_125);
          else
            n_125 = o_125;
        }
        {
          t = not_null(e_125);
          {
            ATerm r_125 = NULL;
            t = b_99(t);
            {
              p_125 = t;
              {
                t = not_null(f_125);
                {
                  ATerm t_125 = NULL;
                  t = c_99(t);
                  {
                    r_125 = t;
                    {
                      t = not_null(g_125);
                      {
                        ATerm v_125 = NULL;
                        t = d_99(t);
                        {
                          t_125 = t;
                          {
                            t = not_null(h_125);
                            {
                              ATerm x_125 = NULL;
                              t = e_99(t);
                              {
                                v_125 = t;
                                {
                                  ATerm y_125 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, not_null(p_125), not_null(r_125), not_null(t_125), not_null(v_125)), not_null(n_125));
                                  {
                                    y_125 = t;
                                    if(((x_125 != NULL) && (x_125 != y_125)))
                                      _fail(y_125);
                                    else
                                      x_125 = y_125;
                                  }
                                  t = not_null(x_125);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm SDefT_4 (ATerm t, ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm))
{
  ATerm p_126 = NULL,q_126 = NULL,r_126 = NULL,s_126 = NULL,t_126 = NULL;
  p_126 = t;
  o_126 :
  if(match_cons(p_126, sym_SDefT_4))
    {
      q_126 = ATgetArgument(p_126, 0);
      r_126 = ATgetArgument(p_126, 1);
      s_126 = ATgetArgument(p_126, 2);
      t_126 = ATgetArgument(p_126, 3);
      {
        ATerm b_127 = NULL,d_127 = NULL;
        ATerm c_127 = NULL;
        t = SSLgetAnnotations(not_null(p_126));
        {
          c_127 = t;
          if(((b_127 != NULL) && (b_127 != c_127)))
            _fail(c_127);
          else
            b_127 = c_127;
        }
        {
          t = not_null(q_126);
          {
            ATerm f_127 = NULL;
            t = v_102(t);
            {
              d_127 = t;
              {
                t = not_null(r_126);
                {
                  ATerm h_127 = NULL;
                  t = w_102(t);
                  {
                    f_127 = t;
                    {
                      t = not_null(s_126);
                      {
                        ATerm j_127 = NULL;
                        t = x_102(t);
                        {
                          h_127 = t;
                          {
                            t = not_null(t_126);
                            {
                              ATerm m_127 = NULL;
                              t = y_102(t);
                              {
                                j_127 = t;
                                {
                                  ATerm n_127 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(d_127), not_null(f_127), not_null(h_127), not_null(j_127)), not_null(b_127));
                                  {
                                    n_127 = t;
                                    if(((m_127 != NULL) && (m_127 != n_127)))
                                      _fail(n_127);
                                    else
                                      m_127 = n_127;
                                  }
                                  t = not_null(m_127);
                                }
                              }
                            }
                          }
                        }
                      }
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
ATerm Scope_2 (ATerm t, ATerm n_100 (ATerm), ATerm o_100 (ATerm))
{
  ATerm b_128 = NULL,c_128 = NULL,d_128 = NULL;
  b_128 = t;
  a_128 :
  if(match_cons(b_128, sym_Scope_2))
    {
      c_128 = ATgetArgument(b_128, 0);
      d_128 = ATgetArgument(b_128, 1);
      {
        ATerm h_128 = NULL,j_128 = NULL;
        ATerm i_128 = NULL;
        t = SSLgetAnnotations(not_null(b_128));
        {
          i_128 = t;
          if(((h_128 != NULL) && (h_128 != i_128)))
            _fail(i_128);
          else
            h_128 = i_128;
        }
        {
          t = not_null(c_128);
          {
            ATerm l_128 = NULL;
            t = n_100(t);
            {
              j_128 = t;
              {
                t = not_null(d_128);
                {
                  ATerm n_128 = NULL;
                  t = o_100(t);
                  {
                    l_128 = t;
                    {
                      ATerm o_128 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(j_128), not_null(l_128)), not_null(h_128));
                      {
                        o_128 = t;
                        if(((n_128 != NULL) && (n_128 != o_128)))
                          _fail(o_128);
                        else
                          n_128 = o_128;
                      }
                      t = not_null(n_128);
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
ATerm tboundin_3 (ATerm t, ATerm x_139 (ATerm), ATerm y_139 (ATerm), ATerm z_139 (ATerm))
{
  ATerm c_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, z_139, x_139);
      ;
      LocalPopChoice(d_35);
    }
  else
    {
      t = c_35;
      {
        ATerm e_35 = t;
        int f_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4(t, z_139, z_139, z_139, x_139);
            ;
            LocalPopChoice(f_35);
          }
        else
          {
            t = e_35;
            {
              ATerm z_35 = t;
              int a_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4(t, z_139, z_139, z_139, x_139);
                  ;
                  LocalPopChoice(a_36);
                }
              else
                {
                  t = z_35;
                  t = DynamicRules_1(t, x_139);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0 (ATerm t)
{
  ATerm w_128 = NULL,x_128 = NULL,y_128 = NULL,z_128 = NULL,a_129 = NULL;
  w_128 = t;
  v_128 :
  if(match_cons(w_128, sym_RDefT_4))
    {
      x_128 = ATgetArgument(w_128, 0);
      y_128 = ATgetArgument(w_128, 1);
      z_128 = ATgetArgument(w_128, 2);
      a_129 = ATgetArgument(w_128, 3);
      {
        t = not_null(z_128);
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
  ATerm r_5 (ATerm t)
  {
    ATerm j_129 = NULL,k_129 = NULL,l_129 = NULL;
    k_129 = t;
    i_129 :
    if(match_cons(k_129, sym_VarDec_2))
      {
        l_129 = ATgetArgument(k_129, 0);
        j_129 = ATgetArgument(k_129, 1);
        t = not_null(l_129);
      }
    else
      {
        if(match_cons(k_129, sym_DefaultVarDec_1))
          {
            l_129 = ATgetArgument(k_129, 0);
            t = not_null(l_129);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1(t, r_5);
  return(t);
}
ATerm Bind6_0 (ATerm t)
{
  ATerm s_129 = NULL,t_129 = NULL,u_129 = NULL,v_129 = NULL,w_129 = NULL;
  s_129 = t;
  r_129 :
  if(match_cons(s_129, sym_SDefT_4))
    {
      t_129 = ATgetArgument(s_129, 0);
      u_129 = ATgetArgument(s_129, 1);
      v_129 = ATgetArgument(s_129, 2);
      w_129 = ATgetArgument(s_129, 3);
      {
        t = not_null(v_129);
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
  ATerm e_130 = NULL,g_130 = NULL;
  e_130 = t;
  d_130 :
  if(match_cons(e_130, sym_DynamicRules_1))
    {
      g_130 = ATgetArgument(e_130, 0);
      {
        t = not_null(g_130);
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
  ATerm m_130 = NULL,n_130 = NULL;
  m_130 = t;
  l_130 :
  if(match_cons(m_130, sym_Var_1))
    {
      n_130 = ATgetArgument(m_130, 0);
      t = (ATerm) ATinsert(ATempty, not_null(n_130));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm i_119 (ATerm))
{
  ATerm s_130 = NULL,u_130 = NULL,v_130 = NULL;
  s_130 = t;
  r_130 :
  if(match_cons(s_130, sym__2))
    {
      u_130 = ATgetArgument(s_130, 0);
      v_130 = ATgetArgument(s_130, 1);
      {
        t = not_null(u_130);
        {
          ATerm z_130 (ATerm t)
          {
            ATerm b_36 = t;
            int e_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(v_130);
                ;
                LocalPopChoice(e_36);
              }
            else
              {
                t = b_36;
                {
                  ATerm g_36 = t;
                  int h_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_5 (ATerm t)
                      {
                        t = not_null(v_130);
                        return(t);
                      }
                      t = HdMember_p__2(t, i_119, s_5);
                      t = z_130(t);
                      ;
                      LocalPopChoice(h_36);
                    }
                  else
                    {
                      t = g_36;
                      t = Cons_2(t, _id, z_130);
                    }
                }
              }
            return(t);
          }
          t = z_130(t);
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
ATerm foldr_3 (ATerm t, ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm z_121 (ATerm))
{
  ATerm i_36 = t;
  int j_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_121(t);
      ;
      LocalPopChoice(j_36);
    }
  else
    {
      t = i_36;
      {
        ATerm e_131 = NULL,f_131 = NULL,g_131 = NULL;
        e_131 = t;
        d_131 :
        if(((ATgetType(e_131) == AT_LIST) && !(ATisEmpty(e_131))))
          {
            f_131 = ATgetFirst((ATermList) e_131);
            g_131 = (ATerm) ATgetNext((ATermList) e_131);
            {
              ATerm j_131 = NULL,l_131 = NULL;
              ATerm q_36;
              q_36 = t;
              {
                ATerm k_131 = NULL;
                t = not_null(f_131);
                {
                  t = z_121(t);
                  {
                    k_131 = t;
                    if(((j_131 != NULL) && (j_131 != k_131)))
                      _fail(k_131);
                    else
                      j_131 = k_131;
                  }
                }
              }
              t = q_36;
              {
                ATerm m_131 = NULL;
                t = not_null(g_131);
                {
                  t = foldr_3(t, x_121, y_121, z_121);
                  {
                    m_131 = t;
                    if(((l_131 != NULL) && (l_131 != m_131)))
                      _fail(m_131);
                    else
                      l_131 = m_131;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_131), not_null(l_131));
                  t = y_121(t);
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
ATerm crush_3 (ATerm t, ATerm v_119 (ATerm), ATerm w_119 (ATerm), ATerm x_119 (ATerm))
{
  ATerm u_131 = NULL;
  ATerm w_131 = NULL;
  u_131 = t;
  {
    ATerm x_131 = NULL;
    ATerm z_131 = NULL,a_132 = NULL,b_132 = NULL;
    t = not_null(u_131);
    {
      x_131 = t;
      {
        t = SSL_explode_term(not_null(x_131));
        {
          z_131 = t;
          t_131 :
          if(match_cons(z_131, sym__2))
            {
              a_132 = ATgetArgument(z_131, 0);
              b_132 = ATgetArgument(z_131, 1);
              if(((w_131 != NULL) && (w_131 != b_132)))
                _fail(b_132);
              else
                w_131 = b_132;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_131);
      t = foldr_3(t, v_119, w_119, x_119);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm i_132 = NULL,k_132 = NULL,l_132 = NULL;
  i_132 = t;
  h_132 :
  if(match_cons(i_132, sym__2))
    {
      k_132 = ATgetArgument(i_132, 0);
      l_132 = ATgetArgument(i_132, 1);
      if(((k_132 != NULL) && (k_132 != l_132)))
        _fail(l_132);
      else
        k_132 = l_132;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm m_119 (ATerm), ATerm n_119 (ATerm))
{
  ATerm a_133 = NULL,b_133 = NULL,c_133 = NULL;
  a_133 = t;
  z_132 :
  if(((ATgetType(a_133) == AT_LIST) && !(ATisEmpty(a_133))))
    {
      b_133 = ATgetFirst((ATermList) a_133);
      c_133 = (ATerm) ATgetNext((ATermList) a_133);
      {
        t = n_119(t);
        {
          ATerm t_5 (ATerm t)
          {
            ATerm k_133 = NULL;
            k_133 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_133), not_null(k_133));
              t = m_119(t);
            }
            return(t);
          }
          t = fetch_1(t, t_5);
        }
        t = not_null(c_133);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm e_119 (ATerm))
{
  ATerm q_133 = NULL,r_133 = NULL,s_133 = NULL;
  q_133 = t;
  p_133 :
  if(match_cons(q_133, sym__2))
    {
      r_133 = ATgetArgument(q_133, 0);
      s_133 = ATgetArgument(q_133, 1);
      {
        t = not_null(r_133);
        {
          ATerm w_133 (ATerm t)
          {
            ATerm r_36 = t;
            int s_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(s_36);
              }
            else
              {
                t = r_36;
                {
                  ATerm t_36 = t;
                  int b_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_5 (ATerm t)
                      {
                        t = not_null(s_133);
                        return(t);
                      }
                      t = HdMember_p__2(t, e_119, u_5);
                      t = w_133(t);
                      ;
                      LocalPopChoice(b_37);
                    }
                  else
                    {
                      t = t_36;
                      t = Cons_2(t, _id, w_133);
                    }
                }
              }
            return(t);
          }
          t = w_133(t);
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
  ATerm a_134 = NULL,b_134 = NULL,c_134 = NULL,d_134 = NULL,e_134 = NULL;
  a_134 = t;
  y_133 :
  if(match_cons(a_134, sym__2))
    {
      b_134 = ATgetArgument(a_134, 0);
      c_134 = ATgetArgument(a_134, 1);
      z_133 :
      if(((ATgetType(c_134) == AT_LIST) && !(ATisEmpty(c_134))))
        {
          d_134 = ATgetFirst((ATermList) c_134);
          e_134 = (ATerm) ATgetNext((ATermList) c_134);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_134)), not_null(d_134)), not_null(e_134));
        }
      else
        {
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
  ATerm t_134 = NULL,u_134 = NULL,v_134 = NULL,w_134 = NULL,x_134 = NULL;
  t_134 = t;
  r_134 :
  if(((ATgetType(t_134) == AT_LIST) && !(ATisEmpty(t_134))))
    {
      u_134 = ATgetFirst((ATermList) t_134);
      x_134 = (ATerm) ATgetNext((ATermList) t_134);
      s_134 :
      if(match_cons(u_134, sym__2))
        {
          v_134 = ATgetArgument(u_134, 0);
          w_134 = ATgetArgument(u_134, 1);
          {
            ATerm b_135 = NULL,c_135 = NULL,j_135 = NULL,p_135 = NULL;
            ATerm c_37;
            c_37 = t;
            {
              ATerm d_135 = NULL;
              ATerm g_135 = NULL,h_135 = NULL,i_135 = NULL;
              t = not_null(w_134);
              {
                d_135 = t;
                {
                  t = SSL_explode_term(not_null(d_135));
                  {
                    g_135 = t;
                    m_134 :
                    if(match_cons(g_135, sym__2))
                      {
                        h_135 = ATgetArgument(g_135, 0);
                        i_135 = ATgetArgument(g_135, 1);
                        {
                          if(((b_135 != NULL) && (b_135 != h_135)))
                            _fail(h_135);
                          else
                            b_135 = h_135;
                          if(((c_135 != NULL) && (c_135 != i_135)))
                            _fail(i_135);
                          else
                            c_135 = i_135;
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
            t = c_37;
            {
              ATerm d_37;
              d_37 = t;
              {
                ATerm k_135 = NULL;
                ATerm m_135 = NULL,n_135 = NULL,o_135 = NULL;
                t = not_null(v_134);
                {
                  k_135 = t;
                  {
                    t = SSL_explode_term(not_null(k_135));
                    {
                      m_135 = t;
                      p_134 :
                      if(match_cons(m_135, sym__2))
                        {
                          n_135 = ATgetArgument(m_135, 0);
                          o_135 = ATgetArgument(m_135, 1);
                          {
                            if(((b_135 != NULL) && (b_135 != n_135)))
                              _fail(n_135);
                            else
                              b_135 = n_135;
                            if(((j_135 != NULL) && (j_135 != o_135)))
                              _fail(o_135);
                            else
                              j_135 = o_135;
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
              t = d_37;
              {
                ATerm q_135 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_135), not_null(c_135));
                {
                  t = zip_1(t, _id);
                  {
                    q_135 = t;
                    if(((p_135 != NULL) && (p_135 != q_135)))
                      _fail(q_135);
                    else
                      p_135 = q_135;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_135), not_null(x_134));
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
  ATerm a_136 = NULL,b_136 = NULL,c_136 = NULL,d_136 = NULL,e_136 = NULL;
  a_136 = t;
  y_135 :
  if(((ATgetType(a_136) == AT_LIST) && !(ATisEmpty(a_136))))
    {
      b_136 = ATgetFirst((ATermList) a_136);
      e_136 = (ATerm) ATgetNext((ATermList) a_136);
      z_135 :
      if(match_cons(b_136, sym__2))
        {
          c_136 = ATgetArgument(b_136, 0);
          d_136 = ATgetArgument(b_136, 1);
          {
            ATerm p_136 = NULL;
            if(((c_136 != NULL) && (c_136 != d_136)))
              _fail(d_136);
            else
              c_136 = d_136;
            {
              if(((p_136 != NULL) && (p_136 != e_136)))
                _fail(e_136);
              else
                p_136 = e_136;
              t = not_null(p_136);
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
ATerm while_not_2 (ATerm t, ATerm o_124 (ATerm), ATerm p_124 (ATerm))
{
  ATerm r_136 (ATerm t)
  {
    ATerm e_37 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_124(t);
        ;
        LocalPopChoice(f_37);
      }
    else
      {
        t = e_37;
        {
          t = p_124(t);
          t = r_136(t);
        }
      }
    return(t);
  }
  t = r_136(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm r_124 (ATerm), ATerm s_124 (ATerm), ATerm t_124 (ATerm))
{
  t = r_124(t);
  t = while_not_2(t, s_124, t_124);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm p_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_5 (ATerm t)
      {
        ATerm t_136 = NULL;
        t_136 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(t_136));
        return(t);
      }
      ATerm w_5 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm x_5 (ATerm t)
      {
        ATerm r_37 = t;
        int s_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_5 (ATerm t)
            {
              ATerm v_37 = t;
              int w_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(w_37);
                }
              else
                {
                  t = v_37;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, y_5);
            ;
            LocalPopChoice(s_37);
          }
        else
          {
            t = r_37;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, v_5, w_5, x_5);
      ;
      LocalPopChoice(q_37);
    }
  else
    {
      t = p_37;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm s_138 (ATerm), ATerm t_138 (ATerm), ATerm u_138 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm z_136 (ATerm t)
  {
    ATerm x_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_138(t);
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
              ATerm x_136 = NULL;
              ATerm b_38;
              b_38 = t;
              {
                ATerm y_136 = NULL;
                t = t_138(t);
                {
                  y_136 = t;
                  if(((x_136 != NULL) && (x_136 != y_136)))
                    _fail(y_136);
                  else
                    x_136 = y_136;
                }
              }
              t = b_38;
              {
                ATerm z_5 (ATerm t)
                {
                  ATerm b_6 (ATerm t)
                  {
                    t = not_null(x_136);
                    return(t);
                  }
                  t = split_2(t, z_136, b_6);
                  t = diff_0(t);
                  return(t);
                }
                ATerm a_6 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = u_138(t, z_5, z_136, a_6);
                {
                  ATerm c_6 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, c_6, union_0, _id);
                }
              }
              ;
              LocalPopChoice(a_38);
            }
          else
            {
              t = z_37;
              {
                ATerm d_6 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, d_6, union_0, z_136);
              }
            }
        }
      }
    return(t);
  }
  t = z_136(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(d_38);
      }
    else
      {
        t = c_38;
        {
          ATerm e_38 = t;
          int f_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0(t);
              ;
              LocalPopChoice(f_38);
            }
          else
            {
              t = e_38;
              {
                ATerm g_38 = t;
                int h_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0(t);
                    ;
                    LocalPopChoice(h_38);
                  }
                else
                  {
                    t = g_38;
                    t = Bind8_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, e_6, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm q_137 = NULL,r_137 = NULL,t_137 = NULL,u_137 = NULL,v_137 = NULL,w_137 = NULL;
  u_137 = t;
  m_137 :
  if(match_cons(u_137, sym_LRule_1))
    {
      v_137 = ATgetArgument(u_137, 0);
      p_137 :
      if(match_cons(v_137, sym_Rule_3))
        {
          q_137 = ATgetArgument(v_137, 0);
          r_137 = ATgetArgument(v_137, 1);
          t_137 = ATgetArgument(v_137, 2);
          {
            t = not_null(q_137);
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
      if(match_cons(u_137, sym_Scope_2))
        {
          v_137 = ATgetArgument(u_137, 0);
          w_137 = ATgetArgument(u_137, 1);
          t = not_null(v_137);
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
  ATerm r_138 = NULL,w_138 = NULL;
  r_138 = t;
  q_138 :
  if(match_cons(r_138, sym_Var_1))
    {
      w_138 = ATgetArgument(r_138, 0);
      {
        ATerm i_38 = t;
        int j_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_138 = NULL,d_139 = NULL;
            ATerm a_139 = NULL;
            t = SSLgetAnnotations(not_null(r_138));
            {
              a_139 = t;
              if(((z_138 != NULL) && (z_138 != a_139)))
                _fail(a_139);
              else
                z_138 = a_139;
            }
            {
              t = not_null(w_138);
              {
                ATerm f_139 = NULL;
                t = p_0(t);
                {
                  d_139 = t;
                  {
                    ATerm g_139 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(d_139)), not_null(z_138));
                    {
                      g_139 = t;
                      if(((f_139 != NULL) && (f_139 != g_139)))
                        _fail(g_139);
                      else
                        f_139 = g_139;
                    }
                    t = not_null(f_139);
                  }
                }
              }
            }
            ;
            LocalPopChoice(j_38);
          }
        else
          {
            t = i_38;
            {
              ATerm k_38 = t;
              int l_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_139 = NULL,l_139 = NULL;
                  ATerm k_139 = NULL;
                  t = SSLgetAnnotations(not_null(r_138));
                  {
                    k_139 = t;
                    if(((j_139 != NULL) && (j_139 != k_139)))
                      _fail(k_139);
                    else
                      j_139 = k_139;
                  }
                  {
                    t = not_null(w_138);
                    {
                      ATerm n_139 = NULL;
                      t = p_0(t);
                      {
                        l_139 = t;
                        {
                          ATerm o_139 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_139)), not_null(j_139));
                          {
                            o_139 = t;
                            if(((n_139 != NULL) && (n_139 != o_139)))
                              _fail(o_139);
                            else
                              n_139 = o_139;
                          }
                          t = not_null(n_139);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(l_38);
                }
              else
                {
                  t = k_38;
                  {
                    ATerm r_139 = NULL,t_139 = NULL;
                    ATerm s_139 = NULL;
                    t = SSLgetAnnotations(not_null(r_138));
                    {
                      s_139 = t;
                      if(((r_139 != NULL) && (r_139 != s_139)))
                        _fail(s_139);
                      else
                        r_139 = s_139;
                    }
                    {
                      t = not_null(w_138);
                      {
                        ATerm v_139 = NULL;
                        t = p_0(t);
                        {
                          t_139 = t;
                          {
                            ATerm e_140 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(t_139)), not_null(r_139));
                            {
                              e_140 = t;
                              if(((v_139 != NULL) && (v_139 != e_140)))
                                _fail(e_140);
                              else
                                v_139 = e_140;
                            }
                            t = not_null(v_139);
                          }
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
ATerm DistBinding_2 (ATerm t, ATerm n_137 (ATerm), ATerm o_137 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm x_140 = NULL,y_140 = NULL,z_140 = NULL,a_141 = NULL;
  x_140 = t;
  w_140 :
  if(match_cons(x_140, sym__3))
    {
      y_140 = ATgetArgument(x_140, 0);
      z_140 = ATgetArgument(x_140, 1);
      a_141 = ATgetArgument(x_140, 2);
      {
        t = not_null(y_140);
        {
          ATerm f_6 (ATerm t)
          {
            ATerm e_141 = NULL;
            e_141 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_141), not_null(a_141));
              t = n_137(t);
            }
            return(t);
          }
          ATerm g_6 (ATerm t)
          {
            ATerm g_141 = NULL;
            g_141 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_141), not_null(z_140));
              t = n_137(t);
            }
            return(t);
          }
          t = o_137(t, f_6, g_6, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm h_137 (ATerm), ATerm i_137 (ATerm, ATerm (ATerm)))
{
  ATerm s_141 = NULL,t_141 = NULL,u_141 = NULL;
  s_141 = t;
  r_141 :
  if(match_cons(s_141, sym__2))
    {
      t_141 = ATgetArgument(s_141, 0);
      u_141 = ATgetArgument(s_141, 1);
      {
        ATerm x_141 = NULL,y_141 = NULL,z_141 = NULL,f_142 = NULL;
        ATerm m_38;
        m_38 = t;
        {
          ATerm a_142 = NULL;
          t = not_null(t_141);
          {
            ATerm b_142 = NULL;
            t = h_137(t);
            {
              a_142 = t;
              {
                if(((x_141 != NULL) && (x_141 != a_142)))
                  _fail(a_142);
                else
                  x_141 = a_142;
                {
                  ATerm c_142 = NULL,e_142 = NULL;
                  t = map_1(t, new_0);
                  {
                    b_142 = t;
                    {
                      if(((y_141 != NULL) && (y_141 != b_142)))
                        _fail(b_142);
                      else
                        y_141 = b_142;
                      {
                        ATerm d_142 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_141), not_null(y_141));
                        {
                          t = zip_1(t, _id);
                          {
                            d_142 = t;
                            if(((c_142 != NULL) && (c_142 != d_142)))
                              _fail(d_142);
                            else
                              c_142 = d_142;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(c_142), not_null(u_141));
                          {
                            t = conc_0(t);
                            {
                              e_142 = t;
                              if(((z_141 != NULL) && (z_141 != e_142)))
                                _fail(e_142);
                              else
                                z_141 = e_142;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = m_38;
        {
          ATerm g_142 = NULL;
          t = not_null(t_141);
          {
            ATerm h_6 (ATerm t)
            {
              t = not_null(y_141);
              return(t);
            }
            t = i_137(t, h_6);
            {
              g_142 = t;
              if(((f_142 != NULL) && (f_142 != g_142)))
                _fail(g_142);
              else
                f_142 = g_142;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(f_142), not_null(u_141), not_null(z_141));
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
  ATerm q_142 = NULL,r_142 = NULL,s_142 = NULL,t_142 = NULL,u_142 = NULL;
  q_142 = t;
  o_142 :
  if(match_cons(q_142, sym__2))
    {
      r_142 = ATgetArgument(q_142, 0);
      s_142 = ATgetArgument(q_142, 1);
      p_142 :
      if(((ATgetType(s_142) == AT_LIST) && !(ATisEmpty(s_142))))
        {
          t_142 = ATgetFirst((ATermList) s_142);
          u_142 = (ATerm) ATgetNext((ATermList) s_142);
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_142), not_null(u_142));
        }
      else
        {
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
  ATerm c_143 = NULL,d_143 = NULL,e_143 = NULL,f_143 = NULL,g_143 = NULL,h_143 = NULL,i_143 = NULL;
  c_143 = t;
  z_142 :
  if(match_cons(c_143, sym__2))
    {
      d_143 = ATgetArgument(c_143, 0);
      e_143 = ATgetArgument(c_143, 1);
      a_143 :
      if(((ATgetType(e_143) == AT_LIST) && !(ATisEmpty(e_143))))
        {
          f_143 = ATgetFirst((ATermList) e_143);
          i_143 = (ATerm) ATgetNext((ATermList) e_143);
          b_143 :
          if(match_cons(f_143, sym__2))
            {
              g_143 = ATgetArgument(f_143, 0);
              h_143 = ATgetArgument(f_143, 1);
              {
                ATerm k_143 = NULL;
                if(((d_143 != NULL) && (d_143 != g_143)))
                  _fail(g_143);
                else
                  d_143 = g_143;
                {
                  if(((k_143 != NULL) && (k_143 != h_143)))
                    _fail(h_143);
                  else
                    k_143 = h_143;
                  t = not_null(k_143);
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
  ATerm n_38 = t;
  int o_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(o_38);
    }
  else
    {
      t = n_38;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm s_137 (ATerm, ATerm (ATerm)))
{
  ATerm p_143 = NULL,q_143 = NULL,r_143 = NULL;
  p_143 = t;
  o_143 :
  if(match_cons(p_143, sym__2))
    {
      q_143 = ATgetArgument(p_143, 0);
      r_143 = ATgetArgument(p_143, 1);
      {
        t = not_null(q_143);
        {
          ATerm i_6 (ATerm t)
          {
            ATerm j_6 (ATerm t)
            {
              t = not_null(r_143);
              return(t);
            }
            t = split_2(t, _id, j_6);
            t = lookup_0(t);
            return(t);
          }
          t = s_137(t, i_6);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm l_127 (ATerm))
{
  ATerm y_143 = NULL,z_143 = NULL,a_144 = NULL;
  y_143 = t;
  x_143 :
  if(match_cons(y_143, sym__2))
    {
      z_143 = ATgetArgument(y_143, 0);
      a_144 = ATgetArgument(y_143, 1);
      {
        t = not_null(z_143);
        {
          ATerm k_6 (ATerm t)
          {
            ATerm d_144 = NULL;
            d_144 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_144), not_null(a_144));
              t = l_127(t);
            }
            return(t);
          }
          t = _all(t, k_6);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm v_126 (ATerm))
{
  ATerm h_144 (ATerm t)
  {
    ATerm p_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_126(t);
        ;
        LocalPopChoice(q_38);
      }
    else
      {
        t = p_38;
        t = all_dist_1(t, h_144);
      }
    return(t);
  }
  t = h_144(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm c_137 (ATerm, ATerm (ATerm)), ATerm d_137 (ATerm), ATerm e_137 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm f_137 (ATerm, ATerm (ATerm)))
{
  ATerm j_144 = NULL;
  j_144 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_144), (ATerm) ATempty);
    {
      ATerm m_144 (ATerm t)
      {
        ATerm l_6 (ATerm t)
        {
          ATerm r_38 = t;
          int s_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, c_137);
              ;
              LocalPopChoice(s_38);
            }
          else
            {
              t = r_38;
              {
                t = RnBinding_2(t, d_137, f_137);
                t = DistBinding_2(t, m_144, e_137);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, l_6);
        return(t);
      }
      t = m_144(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    ATerm t_38 = t;
    int u_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(u_38);
      }
    else
      {
        t = t_38;
        {
          ATerm v_38 = t;
          int w_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0(t);
              ;
              LocalPopChoice(w_38);
            }
          else
            {
              t = v_38;
              t = Bind8_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, Var_1, m_6, tboundin_3, tpaste_1);
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
  ATerm p_144 = NULL,q_144 = NULL,r_144 = NULL;
  p_144 = t;
  o_144 :
  if(((ATgetType(p_144) == AT_LIST) && !(ATisEmpty(p_144))))
    {
      q_144 = ATgetFirst((ATermList) p_144);
      r_144 = (ATerm) ATgetNext((ATermList) p_144);
      t = not_null(q_144);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm w_144 = NULL,x_144 = NULL,y_144 = NULL;
  w_144 = t;
  v_144 :
  if(match_cons(w_144, sym__2))
    {
      x_144 = ATgetArgument(w_144, 0);
      y_144 = ATgetArgument(w_144, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_144), not_null(y_144));
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
ATerm rewrite_1 (ATerm t, ATerm i_123 (ATerm))
{
  ATerm e_145 = NULL;
  ATerm g_145 = NULL;
  e_145 = t;
  {
    ATerm h_145 = NULL;
    t = term_x_38;
    {
      t = i_123(t);
      {
        h_145 = t;
        if(((g_145 != NULL) && (g_145 != h_145)))
          _fail(h_145);
        else
          g_145 = h_145;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_145), not_null(e_145));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm InlineStrat_0 (ATerm t)
{
  ATerm d_146 = NULL,e_146 = NULL,f_146 = NULL,g_146 = NULL,h_146 = NULL;
  d_146 = t;
  b_146 :
  if(match_cons(d_146, sym_CallT_3))
    {
      e_146 = ATgetArgument(d_146, 0);
      g_146 = ATgetArgument(d_146, 1);
      h_146 = ATgetArgument(d_146, 2);
      c_146 :
      if(match_cons(e_146, sym_SVar_1))
        {
          f_146 = ATgetArgument(e_146, 0);
          {
            ATerm m_146 = NULL,n_146 = NULL,o_146 = NULL,p_146 = NULL,q_146 = NULL,r_146 = NULL,s_146 = NULL,t_146 = NULL,u_146 = NULL;
            ATerm v_146 = NULL,w_146 = NULL,x_146 = NULL,y_146 = NULL,z_146 = NULL;
            t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_146)), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
            {
              ATerm n_6 (ATerm t)
              {
                t = term_y_38;
                return(t);
              }
              t = rewrite_1(t, n_6);
              {
                v_146 = t;
                z_145 :
                if(match_cons(v_146, sym_Defined_4))
                  {
                    w_146 = ATgetArgument(v_146, 0);
                    x_146 = ATgetArgument(v_146, 1);
                    y_146 = ATgetArgument(v_146, 2);
                    z_146 = ATgetArgument(v_146, 3);
                    a_146 :
                    if(match_string(w_146, "c_0"))
                      {
                        ATerm a_147 = NULL,b_147 = NULL,c_147 = NULL,d_147 = NULL,e_147 = NULL;
                        if(((m_146 != NULL) && (m_146 != x_146)))
                          _fail(x_146);
                        else
                          m_146 = x_146;
                        {
                          if(((n_146 != NULL) && (n_146 != y_146)))
                            _fail(y_146);
                          else
                            n_146 = y_146;
                          {
                            if(((s_146 != NULL) && (s_146 != z_146)))
                              _fail(z_146);
                            else
                              s_146 = z_146;
                            {
                              t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(f_146), not_null(m_146), not_null(s_146), not_null(n_146));
                              {
                                t = strename_0(t);
                                {
                                  a_147 = t;
                                  y_145 :
                                  if(match_cons(a_147, sym_SDefT_4))
                                    {
                                      b_147 = ATgetArgument(a_147, 0);
                                      c_147 = ATgetArgument(a_147, 1);
                                      d_147 = ATgetArgument(a_147, 2);
                                      e_147 = ATgetArgument(a_147, 3);
                                      {
                                        ATerm f_147 = NULL,l_147 = NULL;
                                        if(((f_146 != NULL) && (f_146 != b_147)))
                                          _fail(b_147);
                                        else
                                          f_146 = b_147;
                                        {
                                          if(((p_146 != NULL) && (p_146 != c_147)))
                                            _fail(c_147);
                                          else
                                            p_146 = c_147;
                                          {
                                            if(((o_146 != NULL) && (o_146 != d_147)))
                                              _fail(d_147);
                                            else
                                              o_146 = d_147;
                                            {
                                              if(((q_146 != NULL) && (q_146 != e_147)))
                                                _fail(e_147);
                                              else
                                                q_146 = e_147;
                                              {
                                                ATerm k_147 = NULL;
                                                t = not_null(p_146);
                                                {
                                                  ATerm o_6 (ATerm t)
                                                  {
                                                    ATerm g_147 = NULL,h_147 = NULL,i_147 = NULL;
                                                    g_147 = t;
                                                    o_145 :
                                                    if(match_cons(g_147, sym_VarDec_2))
                                                      {
                                                        h_147 = ATgetArgument(g_147, 0);
                                                        i_147 = ATgetArgument(g_147, 1);
                                                        t = not_null(h_147);
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                    return(t);
                                                  }
                                                  t = map_1(t, o_6);
                                                  {
                                                    k_147 = t;
                                                    if(((f_147 != NULL) && (f_147 != k_147)))
                                                      _fail(k_147);
                                                    else
                                                      f_147 = k_147;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__3, not_null(f_147), not_null(g_146), not_null(q_146));
                                                  {
                                                    ATerm q_147 = NULL;
                                                    t = ssubs_0(t);
                                                    {
                                                      l_147 = t;
                                                      {
                                                        if(((r_146 != NULL) && (r_146 != l_147)))
                                                          _fail(l_147);
                                                        else
                                                          r_146 = l_147;
                                                        {
                                                          t = not_null(s_146);
                                                          {
                                                            ATerm r_147 = NULL,y_147 = NULL;
                                                            ATerm p_6 (ATerm t)
                                                            {
                                                              ATerm m_147 = NULL,n_147 = NULL,o_147 = NULL;
                                                              m_147 = t;
                                                              s_145 :
                                                              if(match_cons(m_147, sym_VarDec_2))
                                                                {
                                                                  n_147 = ATgetArgument(m_147, 0);
                                                                  o_147 = ATgetArgument(m_147, 1);
                                                                  t = not_null(n_147);
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            t = map_1(t, p_6);
                                                            {
                                                              q_147 = t;
                                                              {
                                                                if(((t_146 != NULL) && (t_146 != q_147)))
                                                                  _fail(q_147);
                                                                else
                                                                  t_146 = q_147;
                                                                {
                                                                  ATerm x_147 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_146), not_null(t_146));
                                                                  {
                                                                    ATerm q_6 (ATerm t)
                                                                    {
                                                                      ATerm s_147 = NULL,t_147 = NULL,u_147 = NULL;
                                                                      s_147 = t;
                                                                      v_145 :
                                                                      if(match_cons(s_147, sym__2))
                                                                        {
                                                                          t_147 = ATgetArgument(s_147, 0);
                                                                          u_147 = ATgetArgument(s_147, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_147)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_147))));
                                                                        }
                                                                      else
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = zip_1(t, q_6);
                                                                    {
                                                                      x_147 = t;
                                                                      if(((r_147 != NULL) && (r_147 != x_147)))
                                                                        _fail(x_147);
                                                                      else
                                                                        r_147 = x_147;
                                                                    }
                                                                  }
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(r_147));
                                                                    {
                                                                      y_147 = t;
                                                                      if(((u_146 != NULL) && (u_146 != y_147)))
                                                                        _fail(y_147);
                                                                      else
                                                                        u_146 = y_147;
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
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
              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_146), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_146), not_null(r_146)));
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
  ATerm s_148 = NULL;
  ATerm z_38;
  z_38 = t;
  {
    ATerm t_148 = NULL;
    t = new_0(t);
    {
      t_148 = t;
      {
        if(((s_148 != NULL) && (s_148 != t_148)))
          _fail(t_148);
        else
          s_148 = t_148;
        {
          ATerm a_39 = t;
          int b_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_d_39, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_148)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
              t = InlineStrat_0(t);
              ;
              LocalPopChoice(b_39);
            }
          else
            {
              t = a_39;
              {
                ATerm r_6 (ATerm t)
                {
                  ATerm s_6 (ATerm t)
                  {
                    t = term_e_39;
                    return(t);
                  }
                  t = say_1(t, s_6);
                  return(t);
                }
                t = if_verbose2_1(t, r_6);
                _fail(t);
              }
            }
          {
            ATerm f_39 = t;
            int g_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_148 = NULL,v_148 = NULL,w_148 = NULL,x_148 = NULL,y_148 = NULL,z_148 = NULL,a_149 = NULL;
                u_148 = t;
                m_148 :
                if(match_cons(u_148, sym_LChoice_2))
                  {
                    v_148 = ATgetArgument(u_148, 0);
                    a_149 = ATgetArgument(u_148, 1);
                    n_148 :
                    if(match_cons(v_148, sym_CallT_3))
                      {
                        w_148 = ATgetArgument(v_148, 0);
                        y_148 = ATgetArgument(v_148, 1);
                        z_148 = ATgetArgument(v_148, 2);
                        o_148 :
                        if(match_cons(w_148, sym_SVar_1))
                          {
                            x_148 = ATgetArgument(w_148, 0);
                            p_148 :
                            if(((ATgetType(y_148) == AT_LIST) && ATisEmpty(y_148)))
                              {
                                q_148 :
                                if(((ATgetType(z_148) == AT_LIST) && ATisEmpty(z_148)))
                                  {
                                    r_148 :
                                    if(match_cons(a_149, sym_Id_0))
                                      {
                                        if(((s_148 != NULL) && (s_148 != x_148)))
                                          _fail(x_148);
                                        else
                                          s_148 = x_148;
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
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
                LocalPopChoice(g_39);
              }
            else
              {
                t = f_39;
                {
                  ATerm t_6 (ATerm t)
                  {
                    ATerm u_6 (ATerm t)
                    {
                      t = term_h_39;
                      return(t);
                    }
                    t = debug_1(t, u_6);
                    return(t);
                  }
                  t = if_verbose1_1(t, t_6);
                  _fail(t);
                }
              }
            {
              ATerm v_6 (ATerm t)
              {
                ATerm w_6 (ATerm t)
                {
                  t = term_i_39;
                  return(t);
                }
                t = say_1(t, w_6);
                return(t);
              }
              t = if_verbose2_1(t, v_6);
            }
          }
        }
      }
    }
  }
  t = z_38;
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
ATerm assert_1 (ATerm t, ATerm g_123 (ATerm))
{
  ATerm i_149 = NULL,j_149 = NULL,k_149 = NULL;
  i_149 = t;
  h_149 :
  if(match_cons(i_149, sym__2))
    {
      j_149 = ATgetArgument(i_149, 0);
      k_149 = ATgetArgument(i_149, 1);
      {
        ATerm n_149 = NULL,o_149 = NULL,p_149 = NULL;
        ATerm j_39;
        j_39 = t;
        {
          ATerm q_149 = NULL;
          ATerm r_149 = NULL,s_149 = NULL,t_149 = NULL;
          t = g_123(t);
          {
            q_149 = t;
            {
              if(((n_149 != NULL) && (n_149 != q_149)))
                _fail(q_149);
              else
                n_149 = q_149;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(n_149), not_null(j_149), not_null(k_149));
                {
                  t = table_push_0(t);
                  {
                    ATerm k_39 = t;
                    int l_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(n_149), term_w_15);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(l_39);
                      }
                    else
                      {
                        t = k_39;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      r_149 = t;
                      g_149 :
                      if(((ATgetType(r_149) == AT_LIST) && !(ATisEmpty(r_149))))
                        {
                          s_149 = ATgetFirst((ATermList) r_149);
                          t_149 = (ATerm) ATgetNext((ATermList) r_149);
                          {
                            if(((o_149 != NULL) && (o_149 != s_149)))
                              _fail(s_149);
                            else
                              o_149 = s_149;
                            {
                              if(((p_149 != NULL) && (p_149 != t_149)))
                                _fail(t_149);
                              else
                                p_149 = t_149;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(n_149), term_w_15, (ATerm) ATinsert(CheckATermList(not_null(p_149)), (ATerm) ATinsert(CheckATermList(not_null(o_149)), not_null(j_149))));
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
        t = j_39;
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
  ATerm z_149 = NULL,a_150 = NULL,b_150 = NULL,c_150 = NULL,d_150 = NULL;
  z_149 = t;
  y_149 :
  if(match_cons(z_149, sym_SDefT_4))
    {
      a_150 = ATgetArgument(z_149, 0);
      b_150 = ATgetArgument(z_149, 1);
      c_150 = ATgetArgument(z_149, 2);
      d_150 = ATgetArgument(z_149, 3);
      {
        ATerm m_39;
        m_39 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_150)), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_4, term_n_39, not_null(b_150), not_null(d_150), not_null(c_150)));
          {
            ATerm x_6 (ATerm t)
            {
              t = term_y_38;
              return(t);
            }
            t = assert_1(t, x_6);
          }
        }
        t = m_39;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm u_95 (ATerm))
{
  ATerm o_150 = NULL,p_150 = NULL;
  o_150 = t;
  n_150 :
  if(match_cons(o_150, sym_Strategies_1))
    {
      p_150 = ATgetArgument(o_150, 0);
      {
        ATerm s_150 = NULL,u_150 = NULL;
        ATerm t_150 = NULL;
        t = SSLgetAnnotations(not_null(o_150));
        {
          t_150 = t;
          if(((s_150 != NULL) && (s_150 != t_150)))
            _fail(t_150);
          else
            s_150 = t_150;
        }
        {
          t = not_null(p_150);
          {
            ATerm w_150 = NULL;
            t = u_95(t);
            {
              u_150 = t;
              {
                ATerm x_150 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(u_150)), not_null(s_150));
                {
                  x_150 = t;
                  if(((w_150 != NULL) && (w_150 != x_150)))
                    _fail(x_150);
                  else
                    w_150 = x_150;
                }
                t = not_null(w_150);
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
ATerm Signature_1 (ATerm t, ATerm v_95 (ATerm))
{
  ATerm h_151 = NULL,i_151 = NULL;
  h_151 = t;
  g_151 :
  if(match_cons(h_151, sym_Signature_1))
    {
      i_151 = ATgetArgument(h_151, 0);
      {
        ATerm l_151 = NULL,n_151 = NULL;
        ATerm m_151 = NULL;
        t = SSLgetAnnotations(not_null(h_151));
        {
          m_151 = t;
          if(((l_151 != NULL) && (l_151 != m_151)))
            _fail(m_151);
          else
            l_151 = m_151;
        }
        {
          t = not_null(i_151);
          {
            ATerm p_151 = NULL;
            t = v_95(t);
            {
              n_151 = t;
              {
                ATerm q_151 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(n_151)), not_null(l_151));
                {
                  q_151 = t;
                  if(((p_151 != NULL) && (p_151 != q_151)))
                    _fail(q_151);
                  else
                    p_151 = q_151;
                }
                t = not_null(p_151);
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
ATerm Specification_1 (ATerm t, ATerm z_95 (ATerm))
{
  ATerm a_152 = NULL,b_152 = NULL;
  a_152 = t;
  z_151 :
  if(match_cons(a_152, sym_Specification_1))
    {
      b_152 = ATgetArgument(a_152, 0);
      {
        ATerm e_152 = NULL,g_152 = NULL;
        ATerm f_152 = NULL;
        t = SSLgetAnnotations(not_null(a_152));
        {
          f_152 = t;
          if(((e_152 != NULL) && (e_152 != f_152)))
            _fail(f_152);
          else
            e_152 = f_152;
        }
        {
          t = not_null(b_152);
          {
            ATerm i_152 = NULL;
            t = z_95(t);
            {
              g_152 = t;
              {
                ATerm j_152 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(g_152)), not_null(e_152));
                {
                  j_152 = t;
                  if(((i_152 != NULL) && (i_152 != j_152)))
                    _fail(j_152);
                  else
                    i_152 = j_152;
                }
                t = not_null(i_152);
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
  ATerm y_6 (ATerm t)
  {
    ATerm z_6 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm a_7 (ATerm t)
    {
      ATerm b_7 (ATerm t)
      {
        ATerm c_7 (ATerm t)
        {
          t = map_1(t, declare_inline_rule_0);
          return(t);
        }
        t = Strategies_1(t, c_7);
        return(t);
      }
      t = Cons_2(t, b_7, Nil_0);
      return(t);
    }
    t = Cons_2(t, z_6, a_7);
    return(t);
  }
  t = Specification_1(t, y_6);
  return(t);
}
ATerm _2 (ATerm t, ATerm h_94 (ATerm), ATerm i_94 (ATerm))
{
  ATerm u_152 = NULL,v_152 = NULL,w_152 = NULL;
  u_152 = t;
  t_152 :
  if(match_cons(u_152, sym__2))
    {
      v_152 = ATgetArgument(u_152, 0);
      w_152 = ATgetArgument(u_152, 1);
      {
        ATerm a_153 = NULL,c_153 = NULL;
        ATerm b_153 = NULL;
        t = SSLgetAnnotations(not_null(u_152));
        {
          b_153 = t;
          if(((a_153 != NULL) && (a_153 != b_153)))
            _fail(b_153);
          else
            a_153 = b_153;
        }
        {
          t = not_null(v_152);
          {
            ATerm e_153 = NULL;
            t = h_94(t);
            {
              c_153 = t;
              {
                t = not_null(w_152);
                {
                  ATerm g_153 = NULL;
                  t = i_94(t);
                  {
                    e_153 = t;
                    {
                      ATerm h_153 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(c_153), not_null(e_153)), not_null(a_153));
                      {
                        h_153 = t;
                        if(((g_153 != NULL) && (g_153 != h_153)))
                          _fail(h_153);
                        else
                          g_153 = h_153;
                      }
                      t = not_null(g_153);
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
  ATerm o_39;
  o_39 = t;
  {
    ATerm o_153 = NULL;
    ATerm p_153 = NULL;
    t = term_x_38;
    {
      t = whoami_0(t);
      {
        p_153 = t;
        if(((o_153 != NULL) && (o_153 != p_153)))
          _fail(p_153);
        else
          o_153 = p_153;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_39), not_null(o_153)), term_p_39));
      {
        t = printnl_0(t);
        {
          t = term_r_39;
          t = exit_0(t);
        }
      }
    }
  }
  t = o_39;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm t_153 = NULL,u_153 = NULL,v_153 = NULL;
  t_153 = t;
  s_153 :
  if(match_cons(t_153, sym__2))
    {
      u_153 = ATgetArgument(t_153, 0);
      v_153 = ATgetArgument(t_153, 1);
      {
        ATerm s_39;
        s_39 = t;
        t = SSL_printnl(not_null(u_153), not_null(v_153));
        t = s_39;
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
  ATerm a_154 = NULL;
  a_154 = t;
  t = SSL_implode_string(not_null(a_154));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_39 = t;
  int u_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(u_39);
    }
  else
    {
      t = t_39;
      {
        ATerm f_154 = NULL,g_154 = NULL,h_154 = NULL;
        f_154 = t;
        e_154 :
        if(((ATgetType(f_154) == AT_LIST) && !(ATisEmpty(f_154))))
          {
            g_154 = ATgetFirst((ATermList) f_154);
            h_154 = (ATerm) ATgetNext((ATermList) f_154);
            {
              t = not_null(g_154);
              {
                ATerm d_7 (ATerm t)
                {
                  t = not_null(h_154);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, d_7);
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
  ATerm r_154 = NULL;
  ATerm t_154 = NULL;
  r_154 = t;
  {
    ATerm u_154 = NULL;
    ATerm w_154 = NULL,x_154 = NULL,y_154 = NULL;
    t = not_null(r_154);
    {
      u_154 = t;
      {
        t = SSL_explode_term(not_null(u_154));
        {
          w_154 = t;
          p_154 :
          if(match_cons(w_154, sym__2))
            {
              x_154 = ATgetArgument(w_154, 0);
              y_154 = ATgetArgument(w_154, 1);
              q_154 :
              if(match_string(x_154, ""))
                {
                  if(((t_154 != NULL) && (t_154 != y_154)))
                    _fail(y_154);
                  else
                    t_154 = y_154;
                }
              else
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
      t = not_null(t_154);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm v_115 (ATerm))
{
  ATerm c_155 (ATerm t)
  {
    ATerm v_39 = t;
    int w_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, c_155);
        ;
        LocalPopChoice(w_39);
      }
    else
      {
        t = v_39;
        {
          t = Nil_0(t);
          t = v_115(t);
        }
      }
    return(t);
  }
  t = c_155(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm f_155 = NULL,g_155 = NULL,h_155 = NULL;
  f_155 = t;
  e_155 :
  if(match_cons(f_155, sym__2))
    {
      g_155 = ATgetArgument(f_155, 0);
      h_155 = ATgetArgument(f_155, 1);
      {
        t = not_null(g_155);
        {
          ATerm e_7 (ATerm t)
          {
            t = not_null(h_155);
            return(t);
          }
          t = at_end_1(t, e_7);
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
  ATerm x_39 = t;
  int y_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(y_39);
    }
  else
    {
      t = x_39;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm m_155 = NULL;
  m_155 = t;
  t = SSL_explode_string(not_null(m_155));
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
  ATerm z_39 = t;
  int a_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
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
            ATerm f_7 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, f_7);
            ;
            LocalPopChoice(c_40);
          }
        else
          {
            t = b_40;
            {
              ATerm v_155 = NULL,w_155 = NULL,x_155 = NULL;
              v_155 = t;
              u_155 :
              if(match_cons(v_155, sym_Path_1))
                {
                  w_155 = ATgetArgument(v_155, 0);
                  t = not_null(w_155);
                }
              else
                {
                  if(match_cons(v_155, sym_Var_1))
                    {
                      w_155 = ATgetArgument(v_155, 0);
                      {
                        t = not_null(w_155);
                        {
                          ATerm d_40 = t;
                          int e_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(e_40);
                            }
                          else
                            {
                              t = d_40;
                              {
                                ATerm g_7 (ATerm t)
                                {
                                  t = term_f_40;
                                  return(t);
                                }
                                t = debug_1(t, g_7);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(v_155, sym_Prefix_2))
                        {
                          w_155 = ATgetArgument(v_155, 0);
                          x_155 = ATgetArgument(v_155, 1);
                          {
                            ATerm c_156 = NULL,e_156 = NULL;
                            ATerm g_40;
                            g_40 = t;
                            {
                              ATerm d_156 = NULL;
                              t = not_null(w_155);
                              {
                                t = eval_config_0(t);
                                {
                                  d_156 = t;
                                  if(((c_156 != NULL) && (c_156 != d_156)))
                                    _fail(d_156);
                                  else
                                    c_156 = d_156;
                                }
                              }
                            }
                            t = g_40;
                            {
                              ATerm f_156 = NULL;
                              t = not_null(x_155);
                              {
                                t = eval_config_0(t);
                                {
                                  f_156 = t;
                                  if(((e_156 != NULL) && (e_156 != f_156)))
                                    _fail(f_156);
                                  else
                                    e_156 = f_156;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_156), not_null(e_156));
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
  ATerm n_156 = NULL;
  n_156 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_40, not_null(n_156));
    {
      t = table_get_0(t);
      {
        ATerm h_7 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm i_40;
            i_40 = t;
            {
              ATerm p_156 = NULL;
              ATerm q_156 = NULL;
              q_156 = t;
              if(((p_156 != NULL) && (p_156 != q_156)))
                _fail(q_156);
              else
                p_156 = q_156;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_h_40, not_null(n_156), not_null(p_156));
                t = table_put_0(t);
              }
            }
            t = i_40;
          }
          return(t);
        }
        t = try_1(t, h_7);
      }
    }
  }
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm x_156 = NULL,y_156 = NULL,z_156 = NULL,a_157 = NULL;
  x_156 = t;
  v_156 :
  if(match_cons(x_156, sym__2))
    {
      y_156 = ATgetArgument(x_156, 0);
      z_156 = ATgetArgument(x_156, 1);
      w_156 :
      if(match_cons(z_156, sym_Stream_1))
        {
          a_157 = ATgetArgument(z_156, 0);
          {
            ATerm d_157 = NULL;
            t = SSL_fputc(not_null(y_156), not_null(a_157));
            {
              ATerm e_157 = NULL;
              e_157 = t;
              if(((d_157 != NULL) && (d_157 != e_157)))
                _fail(e_157);
              else
                d_157 = e_157;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_157));
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
  ATerm l_157 = NULL,m_157 = NULL,n_157 = NULL,o_157 = NULL;
  l_157 = t;
  j_157 :
  if(match_cons(l_157, sym__2))
    {
      m_157 = ATgetArgument(l_157, 0);
      o_157 = ATgetArgument(l_157, 1);
      k_157 :
      if(match_cons(m_157, sym_Stream_1))
        {
          n_157 = ATgetArgument(m_157, 0);
          {
            ATerm r_157 = NULL;
            t = SSL_write_term_to_stream_text(not_null(n_157), not_null(o_157));
            {
              ATerm s_157 = NULL;
              s_157 = t;
              if(((r_157 != NULL) && (r_157 != s_157)))
                _fail(s_157);
              else
                r_157 = s_157;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_157));
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
  ATerm i_7 (ATerm t)
  {
    ATerm w_157 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm x_157 = NULL;
      x_157 = t;
      if(((w_157 != NULL) && (w_157 != x_157)))
        _fail(x_157);
      else
        w_157 = x_157;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_40, not_null(w_157));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, i_7);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm d_158 = NULL,e_158 = NULL,f_158 = NULL,g_158 = NULL;
  d_158 = t;
  b_158 :
  if(match_cons(d_158, sym__2))
    {
      e_158 = ATgetArgument(d_158, 0);
      g_158 = ATgetArgument(d_158, 1);
      c_158 :
      if(match_cons(e_158, sym_Stream_1))
        {
          f_158 = ATgetArgument(e_158, 0);
          {
            ATerm j_158 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(f_158), not_null(g_158));
            {
              ATerm k_158 = NULL;
              k_158 = t;
              if(((j_158 != NULL) && (j_158 != k_158)))
                _fail(k_158);
              else
                j_158 = k_158;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_158));
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
ATerm WriteToFile_1 (ATerm t, ATerm t_130 (ATerm))
{
  ATerm r_158 = NULL,s_158 = NULL,t_158 = NULL;
  r_158 = t;
  q_158 :
  if(match_cons(r_158, sym__2))
    {
      s_158 = ATgetArgument(r_158, 0);
      t_158 = ATgetArgument(r_158, 1);
      {
        ATerm w_158 = NULL,y_158 = NULL;
        t = not_null(s_158);
        {
          ATerm x_158 = NULL;
          x_158 = t;
          if(((w_158 != NULL) && (w_158 != x_158)))
            _fail(x_158);
          else
            w_158 = x_158;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_158), term_k_40);
            {
              t = open_stream_0(t);
              {
                ATerm z_158 = NULL;
                z_158 = t;
                if(((y_158 != NULL) && (y_158 != z_158)))
                  _fail(z_158);
                else
                  y_158 = z_158;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_158), not_null(t_158));
                  {
                    t = t_130(t);
                    {
                      t = fclose_0(t);
                      t = not_null(t_158);
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
  ATerm h_159 = NULL;
  ATerm l_40;
  l_40 = t;
  {
    ATerm j_7 (ATerm t)
    {
      ATerm m_40 = t;
      int n_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_7 (ATerm t)
          {
            ATerm i_159 = NULL,j_159 = NULL;
            i_159 = t;
            e_159 :
            if(match_cons(i_159, sym_Output_1))
              {
                j_159 = ATgetArgument(i_159, 0);
                if(((h_159 != NULL) && (h_159 != j_159)))
                  _fail(j_159);
                else
                  h_159 = j_159;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, k_7);
          ;
          LocalPopChoice(n_40);
        }
      else
        {
          t = m_40;
          {
            ATerm k_159 = NULL;
            t = term_o_40;
            {
              k_159 = t;
              if(((h_159 != NULL) && (h_159 != k_159)))
                _fail(k_159);
              else
                h_159 = k_159;
            }
          }
        }
      return(t);
    }
    t = _2(t, j_7, _id);
  }
  t = l_40;
  {
    ATerm l_7 (ATerm t)
    {
      ATerm m_7 (ATerm t)
      {
        t = not_null(h_159);
        return(t);
      }
      t = split_2(t, m_7, _id);
      return(t);
    }
    t = _2(t, _id, l_7);
    {
      ATerm p_40 = t;
      int q_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_7 (ATerm t)
          {
            ATerm o_7 (ATerm t)
            {
              ATerm l_159 = NULL;
              l_159 = t;
              g_159 :
              if(!(match_cons(l_159, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, o_7);
            return(t);
          }
          t = _2(t, n_7, WriteToBinaryFile_0);
          ;
          LocalPopChoice(q_40);
        }
      else
        {
          t = p_40;
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
ATerm apply_strategy_1 (ATerm t, ATerm f_132 (ATerm))
{
  ATerm r_159 = NULL,t_159 = NULL,u_159 = NULL,v_159 = NULL;
  ATerm s_40;
  s_40 = t;
  t = dtime_0(t);
  t = s_40;
  {
    t = f_132(t);
    {
      ATerm t_40;
      t_40 = t;
      {
        ATerm s_159 = NULL;
        t = dtime_0(t);
        {
          s_159 = t;
          if(((r_159 != NULL) && (r_159 != s_159)))
            _fail(s_159);
          else
            r_159 = s_159;
        }
      }
      t = t_40;
      {
        t_159 = t;
        q_159 :
        if(match_cons(t_159, sym__2))
          {
            u_159 = ATgetArgument(t_159, 0);
            v_159 = ATgetArgument(t_159, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(u_159)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(r_159))), not_null(v_159));
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
  ATerm d_160 = NULL,e_160 = NULL;
  ATerm k_160 (ATerm t)
  {
    t = SSL_fclose(not_null(e_160));
    return(t);
  }
  e_160 = t;
  c_160 :
  if(match_cons(e_160, sym_Stream_1))
    {
      d_160 = ATgetArgument(e_160, 0);
      {
        ATerm u_40 = t;
        int v_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(d_160));
            ;
            LocalPopChoice(v_40);
          }
        else
          {
            t = u_40;
            t = k_160(t);
          }
      }
    }
  else
    {
      t = k_160(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm n_160 = NULL,o_160 = NULL;
  n_160 = t;
  m_160 :
  if(match_cons(n_160, sym_Stream_1))
    {
      o_160 = ATgetArgument(n_160, 0);
      t = SSL_read_term_from_stream(not_null(o_160));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm f_130 (ATerm))
{
  ATerm w_40;
  w_40 = t;
  {
    ATerm t_160 = NULL,v_160 = NULL;
    ATerm x_40;
    x_40 = t;
    {
      ATerm u_160 = NULL;
      t = f_130(t);
      {
        u_160 = t;
        if(((t_160 != NULL) && (t_160 != u_160)))
          _fail(u_160);
        else
          t_160 = u_160;
      }
    }
    t = x_40;
    {
      ATerm w_160 = NULL;
      w_160 = t;
      if(((v_160 != NULL) && (v_160 != w_160)))
        _fail(w_160);
      else
        v_160 = w_160;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_160)), not_null(t_160)));
        t = printnl_0(t);
      }
    }
  }
  t = w_40;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm d_161 = NULL,e_161 = NULL,g_161 = NULL;
  d_161 = t;
  c_161 :
  if(match_cons(d_161, sym__2))
    {
      e_161 = ATgetArgument(d_161, 0);
      g_161 = ATgetArgument(d_161, 1);
      {
        ATerm j_161 = NULL;
        t = SSL_fopen(not_null(e_161), not_null(g_161));
        {
          ATerm k_161 = NULL;
          k_161 = t;
          if(((j_161 != NULL) && (j_161 != k_161)))
            _fail(k_161);
          else
            j_161 = k_161;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_161));
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
  ATerm o_161 = NULL;
  o_161 = t;
  t = SSL_is_string(not_null(o_161));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm s_161 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm t_161 = NULL;
    t_161 = t;
    if(((s_161 != NULL) && (s_161 != t_161)))
      _fail(t_161);
    else
      s_161 = t_161;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_161));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm w_161 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm x_161 = NULL;
    x_161 = t;
    if(((w_161 != NULL) && (w_161 != x_161)))
      _fail(x_161);
    else
      w_161 = x_161;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_161));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm a_162 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm b_162 = NULL;
    b_162 = t;
    if(((a_162 != NULL) && (a_162 != b_162)))
      _fail(b_162);
    else
      a_162 = b_162;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_162));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm h_162 = NULL;
  h_162 = t;
  g_162 :
  if(match_cons(h_162, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(h_162, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(h_162, sym_stdin_0))
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
  ATerm s_162 = NULL;
  ATerm u_162 = NULL,v_162 = NULL;
  s_162 = t;
  {
    ATerm w_162 = NULL;
    ATerm y_162 = NULL,a_163 = NULL,b_163 = NULL,c_163 = NULL,d_163 = NULL;
    t = not_null(s_162);
    {
      w_162 = t;
      {
        t = SSL_explode_term(not_null(w_162));
        {
          y_162 = t;
          p_162 :
          if(match_cons(y_162, sym__2))
            {
              a_163 = ATgetArgument(y_162, 0);
              b_163 = ATgetArgument(y_162, 1);
              q_162 :
              if(match_string(a_163, ""))
                {
                  r_162 :
                  if(((ATgetType(b_163) == AT_LIST) && !(ATisEmpty(b_163))))
                    {
                      c_163 = ATgetFirst((ATermList) b_163);
                      d_163 = (ATerm) ATgetNext((ATermList) b_163);
                      {
                        if(((v_162 != NULL) && (v_162 != c_163)))
                          _fail(c_163);
                        else
                          v_162 = c_163;
                        if(((u_162 != NULL) && (u_162 != d_163)))
                          _fail(d_163);
                        else
                          u_162 = d_163;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(v_162);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm l_163 = NULL,m_163 = NULL,n_163 = NULL;
  l_163 = t;
  k_163 :
  if(match_cons(l_163, sym__2))
    {
      m_163 = ATgetArgument(l_163, 0);
      n_163 = ATgetArgument(l_163, 1);
      {
        ATerm y_40 = t;
        int z_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(z_40);
          }
        else
          {
            t = y_40;
            {
              ATerm a_41 = t;
              int e_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_7 (ATerm t)
                  {
                    ATerm o_163 = NULL,p_163 = NULL;
                    o_163 = t;
                    j_163 :
                    if(match_cons(o_163, sym_Path_1))
                      {
                        p_163 = ATgetArgument(o_163, 0);
                        t = not_null(p_163);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, p_7, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(e_41);
                }
              else
                {
                  t = a_41;
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
  ATerm x_163 = NULL;
  ATerm f_41 = t;
  int g_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_163 = NULL;
      ATerm w_163 = NULL;
      w_163 = t;
      if(((v_163 != NULL) && (v_163 != w_163)))
        _fail(w_163);
      else
        v_163 = w_163;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_163), term_h_41);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(g_41);
    }
  else
    {
      t = f_41;
      {
        ATerm q_7 (ATerm t)
        {
          t = term_i_41;
          return(t);
        }
        t = debug_1(t, q_7);
        _fail(t);
      }
    }
  {
    ATerm j_41;
    j_41 = t;
    {
      ATerm y_163 = NULL;
      t = read_from_stream_0(t);
      {
        y_163 = t;
        if(((x_163 != NULL) && (x_163 != y_163)))
          _fail(y_163);
        else
          x_163 = y_163;
      }
    }
    t = j_41;
    {
      t = fclose_0(t);
      t = not_null(x_163);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm h_114 (ATerm), ATerm i_114 (ATerm))
{
  ATerm d_164 = NULL,f_164 = NULL;
  ATerm k_41;
  k_41 = t;
  {
    ATerm e_164 = NULL;
    t = h_114(t);
    {
      e_164 = t;
      if(((d_164 != NULL) && (d_164 != e_164)))
        _fail(e_164);
      else
        d_164 = e_164;
    }
  }
  t = k_41;
  {
    ATerm g_164 = NULL;
    t = i_114(t);
    {
      g_164 = t;
      if(((f_164 != NULL) && (f_164 != g_164)))
        _fail(g_164);
      else
        f_164 = g_164;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_164), not_null(f_164));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm m_164 = NULL;
  ATerm l_41;
  l_41 = t;
  {
    ATerm n_41 = t;
    int s_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_7 (ATerm t)
        {
          ATerm n_164 = NULL,o_164 = NULL;
          n_164 = t;
          k_164 :
          if(match_cons(n_164, sym_Input_1))
            {
              o_164 = ATgetArgument(n_164, 0);
              if(((m_164 != NULL) && (m_164 != o_164)))
                _fail(o_164);
              else
                m_164 = o_164;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, r_7);
        ;
        LocalPopChoice(s_41);
      }
    else
      {
        t = n_41;
        {
          ATerm p_164 = NULL;
          t = term_t_41;
          {
            p_164 = t;
            if(((m_164 != NULL) && (m_164 != p_164)))
              _fail(p_164);
            else
              m_164 = p_164;
          }
        }
      }
  }
  t = l_41;
  {
    ATerm s_7 (ATerm t)
    {
      t = not_null(m_164);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, s_7);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm t_7 (ATerm t)
  {
    ATerm u_164 = NULL;
    u_164 = t;
    s_164 :
    if(!(match_string(u_164, "-k")))
      {
        if(!(match_string(u_164, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_7 (ATerm t)
  {
    ATerm u_41;
    u_41 = t;
    {
      ATerm v_164 = NULL;
      ATerm w_164 = NULL;
      t = string_to_int_0(t);
      {
        w_164 = t;
        if(((v_164 != NULL) && (v_164 != w_164)))
          _fail(w_164);
        else
          v_164 = w_164;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_41, not_null(v_164));
        t = set_config_0(t);
      }
    }
    t = u_41;
    return(t);
  }
  ATerm v_7 (ATerm t)
  {
    t = term_y_41;
    return(t);
  }
  t = ArgOption_3(t, t_7, u_7, v_7);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm z_164 = NULL;
  z_164 = t;
  t = SSL_string_to_int(not_null(z_164));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm z_41 = t;
  int a_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_7 (ATerm t)
      {
        ATerm h_165 = NULL;
        h_165 = t;
        c_165 :
        if(!(match_string(h_165, "-S")))
          {
            if(!(match_string(h_165, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_7 (ATerm t)
      {
        t = term_c_42;
        t = set_config_0(t);
        t = term_d_42;
        return(t);
      }
      ATerm z_7 (ATerm t)
      {
        t = term_e_42;
        return(t);
      }
      t = Option_3(t, x_7, y_7, z_7);
      ;
      LocalPopChoice(a_42);
    }
  else
    {
      t = z_41;
      {
        ATerm f_42 = t;
        int g_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_8 (ATerm t)
            {
              ATerm i_165 = NULL;
              i_165 = t;
              d_165 :
              if(!(match_string(i_165, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm b_8 (ATerm t)
            {
              ATerm l_165 = NULL;
              ATerm h_42;
              h_42 = t;
              {
                ATerm j_165 = NULL;
                ATerm k_165 = NULL;
                t = string_to_int_0(t);
                {
                  k_165 = t;
                  if(((j_165 != NULL) && (j_165 != k_165)))
                    _fail(k_165);
                  else
                    j_165 = k_165;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_10, not_null(j_165));
                  t = set_config_0(t);
                }
              }
              t = h_42;
              {
                ATerm m_165 = NULL;
                m_165 = t;
                if(((l_165 != NULL) && (l_165 != m_165)))
                  _fail(m_165);
                else
                  l_165 = m_165;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(l_165));
              }
              return(t);
            }
            ATerm c_8 (ATerm t)
            {
              t = term_i_42;
              return(t);
            }
            t = ArgOption_3(t, a_8, b_8, c_8);
            ;
            LocalPopChoice(g_42);
          }
        else
          {
            t = f_42;
            {
              ATerm d_8 (ATerm t)
              {
                ATerm n_165 = NULL;
                n_165 = t;
                g_165 :
                if(!(match_string(n_165, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm e_8 (ATerm t)
              {
                t = term_m_42;
                t = set_config_0(t);
                t = term_p_42;
                return(t);
              }
              ATerm f_8 (ATerm t)
              {
                t = term_q_42;
                return(t);
              }
              t = Option_3(t, d_8, e_8, f_8);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm r_42 = t;
  int s_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(s_42);
    }
  else
    {
      t = r_42;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm g_8 (ATerm t)
  {
    ATerm t_165 = NULL;
    t_165 = t;
    q_165 :
    if(!(match_string(t_165, "-o")))
      {
        if(!(match_string(t_165, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_8 (ATerm t)
  {
    ATerm w_165 = NULL;
    ATerm t_42;
    t_42 = t;
    {
      ATerm u_165 = NULL;
      ATerm v_165 = NULL;
      v_165 = t;
      if(((u_165 != NULL) && (u_165 != v_165)))
        _fail(v_165);
      else
        u_165 = v_165;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_42, not_null(u_165));
        t = set_config_0(t);
      }
    }
    t = t_42;
    {
      ATerm x_165 = NULL;
      x_165 = t;
      if(((w_165 != NULL) && (w_165 != x_165)))
        _fail(x_165);
      else
        w_165 = x_165;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_165));
    }
    return(t);
  }
  ATerm i_8 (ATerm t)
  {
    t = term_v_42;
    return(t);
  }
  t = ArgOption_3(t, g_8, h_8, i_8);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm w_42 = t;
  int x_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(x_42);
    }
  else
    {
      t = w_42;
      {
        ATerm j_8 (ATerm t)
        {
          ATerm b_166 = NULL;
          b_166 = t;
          a_166 :
          if(!(match_string(b_166, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm l_8 (ATerm t)
        {
          t = term_z_42;
          t = set_config_0(t);
          t = term_a_43;
          return(t);
        }
        ATerm m_8 (ATerm t)
        {
          t = term_b_43;
          return(t);
        }
        t = Option_3(t, j_8, l_8, m_8);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm h_166 = NULL,i_166 = NULL,j_166 = NULL,k_166 = NULL,l_166 = NULL;
  h_166 = t;
  f_166 :
  if(match_string(h_166, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(h_166) == AT_LIST) && !(ATisEmpty(h_166))))
        {
          i_166 = ATgetFirst((ATermList) h_166);
          j_166 = (ATerm) ATgetNext((ATermList) h_166);
          g_166 :
          if(((ATgetType(j_166) == AT_LIST) && !(ATisEmpty(j_166))))
            {
              k_166 = ATgetFirst((ATermList) j_166);
              l_166 = (ATerm) ATgetNext((ATermList) j_166);
              {
                ATerm p_166 = NULL;
                ATerm c_43;
                c_43 = t;
                {
                  t = not_null(i_166);
                  t = k_0(t);
                }
                t = c_43;
                {
                  ATerm q_166 = NULL;
                  t = not_null(k_166);
                  {
                    t = m_0(t);
                    {
                      q_166 = t;
                      if(((p_166 != NULL) && (p_166 != q_166)))
                        _fail(q_166);
                      else
                        p_166 = q_166;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(l_166)), not_null(p_166));
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
  ATerm n_8 (ATerm t)
  {
    ATerm x_166 = NULL;
    x_166 = t;
    u_166 :
    if(!(match_string(x_166, "-i")))
      {
        if(!(match_string(x_166, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_8 (ATerm t)
  {
    ATerm a_167 = NULL;
    ATerm d_43;
    d_43 = t;
    {
      ATerm y_166 = NULL;
      ATerm z_166 = NULL;
      z_166 = t;
      if(((y_166 != NULL) && (y_166 != z_166)))
        _fail(z_166);
      else
        y_166 = z_166;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_43, not_null(y_166));
        t = set_config_0(t);
      }
    }
    t = d_43;
    {
      ATerm b_167 = NULL;
      b_167 = t;
      if(((a_167 != NULL) && (a_167 != b_167)))
        _fail(b_167);
      else
        a_167 = b_167;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_167));
    }
    return(t);
  }
  ATerm p_8 (ATerm t)
  {
    t = term_q_43;
    return(t);
  }
  t = ArgOption_3(t, n_8, o_8, p_8);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm r_43 = t;
  int s_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
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
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(u_43);
          }
        else
          {
            t = t_43;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm f_167 = NULL;
  t = report_run_time_0(t);
  {
    ATerm g_167 = NULL;
    t = term_x_38;
    {
      t = whoami_0(t);
      {
        g_167 = t;
        if(((f_167 != NULL) && (f_167 != g_167)))
          _fail(g_167);
        else
          f_167 = g_167;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATempty, term_g_44), not_null(f_167)));
      {
        t = printnl_0(t);
        {
          t = term_r_39;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_h_44;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm j_167 = NULL;
  j_167 = t;
  t = SSL_TicksToSeconds(not_null(j_167));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm o_167 = NULL,p_167 = NULL,q_167 = NULL;
  o_167 = t;
  n_167 :
  if(match_cons(o_167, sym__2))
    {
      p_167 = ATgetArgument(o_167, 0);
      q_167 = ATgetArgument(o_167, 1);
      {
        ATerm i_44 = t;
        int j_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(p_167), not_null(q_167));
            ;
            LocalPopChoice(j_44);
          }
        else
          {
            t = i_44;
            t = SSL_addr(not_null(p_167), not_null(q_167));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm v_121 (ATerm), ATerm w_121 (ATerm))
{
  ATerm q_44 = t;
  int r_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_121(t);
      ;
      LocalPopChoice(r_44);
    }
  else
    {
      t = q_44;
      {
        ATerm x_167 = NULL,y_167 = NULL,z_167 = NULL;
        x_167 = t;
        w_167 :
        if(((ATgetType(x_167) == AT_LIST) && !(ATisEmpty(x_167))))
          {
            y_167 = ATgetFirst((ATermList) x_167);
            z_167 = (ATerm) ATgetNext((ATermList) x_167);
            {
              ATerm c_168 = NULL;
              ATerm d_168 = NULL;
              t = not_null(z_167);
              {
                t = foldr_2(t, v_121, w_121);
                {
                  d_168 = t;
                  if(((c_168 != NULL) && (c_168 != d_168)))
                    _fail(d_168);
                  else
                    c_168 = d_168;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_167), not_null(c_168));
                t = w_121(t);
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
ATerm crush_2 (ATerm t, ATerm t_119 (ATerm), ATerm u_119 (ATerm))
{
  ATerm k_168 = NULL;
  ATerm m_168 = NULL;
  k_168 = t;
  {
    ATerm n_168 = NULL;
    ATerm p_168 = NULL,q_168 = NULL,r_168 = NULL;
    t = not_null(k_168);
    {
      n_168 = t;
      {
        t = SSL_explode_term(not_null(n_168));
        {
          p_168 = t;
          j_168 :
          if(match_cons(p_168, sym__2))
            {
              q_168 = ATgetArgument(p_168, 0);
              r_168 = ATgetArgument(p_168, 1);
              if(((m_168 != NULL) && (m_168 != r_168)))
                _fail(r_168);
              else
                m_168 = r_168;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(m_168);
      t = foldr_2(t, t_119, u_119);
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
    ATerm q_8 (ATerm t)
    {
      t = term_b_42;
      return(t);
    }
    t = crush_2(t, q_8, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm x_168 = NULL,y_168 = NULL,z_168 = NULL;
  x_168 = t;
  w_168 :
  if(match_cons(x_168, sym__2))
    {
      y_168 = ATgetArgument(x_168, 0);
      z_168 = ATgetArgument(x_168, 1);
      {
        ATerm s_44;
        s_44 = t;
        {
          ATerm t_44 = t;
          int a_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(y_168), not_null(z_168));
              ;
              LocalPopChoice(a_45);
            }
          else
            {
              t = t_44;
              t = SSL_gtr(not_null(y_168), not_null(z_168));
            }
        }
        t = s_44;
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
  ATerm f_169 = NULL;
  ATerm b_45 = t;
  int c_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_169 = NULL,h_169 = NULL,i_169 = NULL;
      g_169 = t;
      e_169 :
      if(match_cons(g_169, sym__2))
        {
          h_169 = ATgetArgument(g_169, 0);
          i_169 = ATgetArgument(g_169, 1);
          {
            if(((f_169 != NULL) && (f_169 != h_169)))
              _fail(h_169);
            else
              f_169 = h_169;
            if(((f_169 != NULL) && (f_169 != i_169)))
              _fail(i_169);
            else
              f_169 = i_169;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(c_45);
    }
  else
    {
      t = b_45;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_140 (ATerm))
{
  ATerm r_8 (ATerm t)
  {
    ATerm f_45;
    f_45 = t;
    {
      ATerm l_169 = NULL;
      ATerm m_169 = NULL;
      t = term_f_10;
      {
        t = get_config_0(t);
        {
          m_169 = t;
          if(((l_169 != NULL) && (l_169 != m_169)))
            _fail(m_169);
          else
            l_169 = m_169;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_169), term_r_39);
        t = geq_0(t);
      }
    }
    t = f_45;
    t = l_140(t);
    return(t);
  }
  t = try_1(t, r_8);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm s_8 (ATerm t)
  {
    ATerm q_169 = NULL,s_169 = NULL;
    ATerm g_45;
    g_45 = t;
    {
      ATerm r_169 = NULL;
      t = run_time_0(t);
      {
        r_169 = t;
        if(((q_169 != NULL) && (q_169 != r_169)))
          _fail(r_169);
        else
          q_169 = r_169;
      }
    }
    t = g_45;
    {
      ATerm t_169 = NULL;
      t = term_x_38;
      {
        t = whoami_0(t);
        {
          t_169 = t;
          if(((s_169 != NULL) && (s_169 != t_169)))
            _fail(t_169);
          else
            s_169 = t_169;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_45), not_null(q_169)), term_h_45), not_null(s_169)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, s_8);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_b_42;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_170 = NULL;
  a_170 = t;
  z_169 :
  if(match_cons(a_170, sym_Version_0))
    {
      ATerm c_170 = NULL,e_170 = NULL;
      ATerm l_45;
      l_45 = t;
      {
        ATerm d_170 = NULL;
        t = SSLgetAnnotations(not_null(a_170));
        {
          d_170 = t;
          if(((c_170 != NULL) && (c_170 != d_170)))
            _fail(d_170);
          else
            c_170 = d_170;
        }
      }
      t = l_45;
      {
        ATerm f_170 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(c_170));
        {
          f_170 = t;
          if(((e_170 != NULL) && (e_170 != f_170)))
            _fail(f_170);
          else
            e_170 = f_170;
        }
        t = not_null(e_170);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm d_133 (ATerm))
{
  ATerm m_45 = t;
  int p_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_45;
      t = get_config_0(t);
      ;
      LocalPopChoice(p_45);
    }
  else
    {
      t = m_45;
      {
        ATerm t_8 (ATerm t)
        {
          ATerm r_45 = t;
          int t_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(t_45);
            }
          else
            {
              t = r_45;
              {
                ATerm u_45 = t;
                int v_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(v_45);
                  }
                else
                  {
                    t = u_45;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, t_8);
      }
    }
  t = d_133(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm k_170 = NULL;
  k_170 = t;
  t = SSL_table_create(not_null(k_170));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm o_170 = NULL;
  o_170 = t;
  {
    ATerm w_45;
    w_45 = t;
    {
      t = term_y_45;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_45, term_z_45, not_null(o_170));
          t = table_put_0(t);
        }
      }
    }
    t = w_45;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm s_170 = NULL;
  s_170 = t;
  t = SSL_table_destroy(not_null(s_170));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm w_170 = NULL;
  w_170 = t;
  t = SSL_exit(not_null(w_170));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm g_136 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm f_115 (ATerm))
{
  ATerm z_170 (ATerm t)
  {
    ATerm c_46 = t;
    int d_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(d_46);
      }
    else
      {
        t = c_46;
        t = Cons_2(t, f_115, z_170);
      }
    return(t);
  }
  t = z_170(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm g_171 = NULL,h_171 = NULL,i_171 = NULL;
  i_171 = t;
  f_171 :
  if(((ATgetType(i_171) == AT_LIST) && !(ATisEmpty(i_171))))
    {
      g_171 = ATgetFirst((ATermList) i_171);
      h_171 = (ATerm) ATgetNext((ATermList) i_171);
      {
        ATerm l_171 = NULL;
        t = not_null(h_171);
        {
          ATerm e_46;
          e_46 = t;
          {
            ATerm m_171 = NULL,o_171 = NULL,q_171 = NULL;
            ATerm f_46;
            f_46 = t;
            {
              ATerm n_171 = NULL;
              t = i_0(t);
              {
                n_171 = t;
                if(((m_171 != NULL) && (m_171 != n_171)))
                  _fail(n_171);
                else
                  m_171 = n_171;
              }
            }
            t = f_46;
            {
              ATerm p_171 = NULL;
              t = not_null(g_171);
              {
                t = g_0(t);
                {
                  p_171 = t;
                  if(((o_171 != NULL) && (o_171 != p_171)))
                    _fail(p_171);
                  else
                    o_171 = p_171;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(m_171)), not_null(o_171));
                {
                  q_171 = t;
                  if(((l_171 != NULL) && (l_171 != q_171)))
                    _fail(q_171);
                  else
                    l_171 = q_171;
                }
              }
            }
          }
          t = e_46;
          {
            ATerm u_8 (ATerm t)
            {
              t = not_null(l_171);
              return(t);
            }
            t = reverse_acc_2(t, g_0, u_8);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(i_171) == AT_LIST) && ATisEmpty(i_171)))
        {
          {
            t = term_x_38;
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
  ATerm v_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, v_8);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_136 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_109 (ATerm))
{
  ATerm c_172 = NULL,d_172 = NULL;
  c_172 = t;
  b_172 :
  if(match_cons(c_172, sym_Program_1))
    {
      d_172 = ATgetArgument(c_172, 0);
      {
        ATerm g_172 = NULL,i_172 = NULL;
        ATerm h_172 = NULL;
        t = SSLgetAnnotations(not_null(c_172));
        {
          h_172 = t;
          if(((g_172 != NULL) && (g_172 != h_172)))
            _fail(h_172);
          else
            g_172 = h_172;
        }
        {
          t = not_null(d_172);
          {
            ATerm k_172 = NULL;
            t = y_109(t);
            {
              i_172 = t;
              {
                ATerm l_172 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_172)), not_null(g_172));
                {
                  l_172 = t;
                  if(((k_172 != NULL) && (k_172 != l_172)))
                    _fail(l_172);
                  else
                    k_172 = l_172;
                }
                t = not_null(k_172);
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
  ATerm u_172 = NULL;
  ATerm g_46 = t;
  int h_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_172 = NULL;
      t = term_h_44;
      {
        t = get_config_0(t);
        {
          v_172 = t;
          if(((u_172 != NULL) && (u_172 != v_172)))
            _fail(v_172);
          else
            u_172 = v_172;
        }
      }
      ;
      LocalPopChoice(h_46);
    }
  else
    {
      t = g_46;
      {
        ATerm w_8 (ATerm t)
        {
          ATerm x_8 (ATerm t)
          {
            ATerm w_172 = NULL;
            w_172 = t;
            if(((u_172 != NULL) && (u_172 != w_172)))
              _fail(w_172);
            else
              u_172 = w_172;
            return(t);
          }
          t = Program_1(t, x_8);
          return(t);
        }
        t = option_defined_1(t, w_8);
      }
    }
  {
    ATerm y_8 (ATerm t)
    {
      ATerm z_8 (ATerm t)
      {
        t = not_null(u_172);
        return(t);
      }
      t = short_description_1(t, z_8);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, y_8);
    {
      t = term_i_46;
      {
        t = echo_0(t);
        {
          t = term_l_46;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_9 (ATerm t)
                {
                  ATerm x_172 = NULL;
                  ATerm y_172 = NULL;
                  y_172 = t;
                  if(((x_172 != NULL) && (x_172 != y_172)))
                    _fail(y_172);
                  else
                    x_172 = y_172;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_172)), term_m_46);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_9);
                {
                  ATerm b_9 (ATerm t)
                  {
                    ATerm z_172 = NULL;
                    ATerm a_173 = NULL;
                    ATerm c_9 (ATerm t)
                    {
                      t = not_null(u_172);
                      return(t);
                    }
                    t = long_description_1(t, c_9);
                    {
                      a_173 = t;
                      if(((z_172 != NULL) && (z_172 != a_173)))
                        _fail(a_173);
                      else
                        z_172 = a_173;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(z_172)), term_p_46);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_9);
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
  ATerm v_46 = t;
  int w_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(w_46);
    }
  else
    {
      t = v_46;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_109 (ATerm))
{
  ATerm k_173 = NULL,l_173 = NULL;
  k_173 = t;
  j_173 :
  if(match_cons(k_173, sym_Undefined_1))
    {
      l_173 = ATgetArgument(k_173, 0);
      {
        ATerm o_173 = NULL,q_173 = NULL;
        ATerm p_173 = NULL;
        t = SSLgetAnnotations(not_null(k_173));
        {
          p_173 = t;
          if(((o_173 != NULL) && (o_173 != p_173)))
            _fail(p_173);
          else
            o_173 = p_173;
        }
        {
          t = not_null(l_173);
          {
            ATerm s_173 = NULL;
            t = z_109(t);
            {
              q_173 = t;
              {
                ATerm t_173 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_173)), not_null(o_173));
                {
                  t_173 = t;
                  if(((s_173 != NULL) && (s_173 != t_173)))
                    _fail(t_173);
                  else
                    s_173 = t_173;
                }
                t = not_null(s_173);
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
ATerm fetch_1 (ATerm t, ATerm p_115 (ATerm))
{
  ATerm y_173 (ATerm t)
  {
    ATerm x_46 = t;
    int y_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, p_115, _id);
        ;
        LocalPopChoice(y_46);
      }
    else
      {
        t = x_46;
        t = Cons_2(t, _id, y_173);
      }
    return(t);
  }
  t = y_173(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_135 (ATerm))
{
  t = fetch_1(t, f_135);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm a_174 = NULL,b_174 = NULL,c_174 = NULL;
  a_174 = t;
  z_173 :
  if(((ATgetType(a_174) == AT_LIST) && ATisEmpty(a_174)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(a_174) == AT_LIST) && !(ATisEmpty(a_174))))
        {
          b_174 = ATgetFirst((ATermList) a_174);
          c_174 = (ATerm) ATgetNext((ATermList) a_174);
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
  ATerm z_46;
  z_46 = t;
  {
    ATerm f_174 = NULL;
    ATerm i_174 = NULL;
    ATerm a_47 = t;
    int b_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(b_47);
      }
    else
      {
        t = a_47;
        {
          ATerm g_174 = NULL;
          ATerm h_174 = NULL;
          h_174 = t;
          if(((g_174 != NULL) && (g_174 != h_174)))
            _fail(h_174);
          else
            g_174 = h_174;
          t = (ATerm) ATinsert(ATempty, not_null(g_174));
        }
      }
    {
      i_174 = t;
      if(((f_174 != NULL) && (f_174 != i_174)))
        _fail(i_174);
      else
        f_174 = i_174;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_40, not_null(f_174));
      t = printnl_0(t);
    }
  }
  t = z_46;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_h_44;
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
  ATerm c_47 = t;
  int d_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(d_47);
    }
  else
    {
      t = c_47;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm p_174 = NULL;
  p_174 = t;
  o_174 :
  if(match_cons(p_174, sym_Help_0))
    {
      ATerm r_174 = NULL,t_174 = NULL;
      ATerm e_47;
      e_47 = t;
      {
        ATerm s_174 = NULL;
        t = SSLgetAnnotations(not_null(p_174));
        {
          s_174 = t;
          if(((r_174 != NULL) && (r_174 != s_174)))
            _fail(s_174);
          else
            r_174 = s_174;
        }
      }
      t = e_47;
      {
        ATerm u_174 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(r_174));
        {
          u_174 = t;
          if(((t_174 != NULL) && (t_174 != u_174)))
            _fail(u_174);
          else
            t_174 = u_174;
        }
        t = not_null(t_174);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_113 (ATerm))
{
  ATerm f_47 = t;
  int g_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_113(t);
      ;
      LocalPopChoice(g_47);
    }
  else
    {
      t = f_47;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm h_47 = t;
  int i_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_9 (ATerm t)
      {
        ATerm a_175 = NULL;
        a_175 = t;
        y_174 :
        if(!(match_string(a_175, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm e_9 (ATerm t)
      {
        t = term_k_47;
        t = set_config_0(t);
        return(t);
      }
      ATerm f_9 (ATerm t)
      {
        t = term_l_47;
        return(t);
      }
      t = Option_3(t, d_9, e_9, f_9);
      ;
      LocalPopChoice(i_47);
    }
  else
    {
      t = h_47;
      {
        ATerm g_9 (ATerm t)
        {
          ATerm b_175 = NULL;
          b_175 = t;
          z_174 :
          if(!(match_string(b_175, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm h_9 (ATerm t)
        {
          t = term_k_47;
          {
            t = set_config_0(t);
            {
              t = term_n_47;
              t = set_config_0(t);
            }
          }
          t = term_o_47;
          return(t);
        }
        ATerm i_9 (ATerm t)
        {
          t = term_p_47;
          return(t);
        }
        t = Option_3(t, g_9, h_9, i_9);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm e_175 = NULL,f_175 = NULL,g_175 = NULL;
  e_175 = t;
  d_175 :
  if(match_cons(e_175, sym__2))
    {
      f_175 = ATgetArgument(e_175, 0);
      g_175 = ATgetArgument(e_175, 1);
      t = SSL_table_get(not_null(f_175), not_null(g_175));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm n_175 = NULL,o_175 = NULL,p_175 = NULL,r_175 = NULL;
  n_175 = t;
  m_175 :
  if(match_cons(n_175, sym__3))
    {
      o_175 = ATgetArgument(n_175, 0);
      p_175 = ATgetArgument(n_175, 1);
      r_175 = ATgetArgument(n_175, 2);
      {
        ATerm q_47;
        q_47 = t;
        {
          ATerm v_175 = NULL;
          ATerm w_175 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_175), not_null(p_175));
          {
            ATerm r_47 = t;
            int z_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(z_47);
              }
            else
              {
                t = r_47;
                t = (ATerm) ATempty;
              }
            {
              w_175 = t;
              if(((v_175 != NULL) && (v_175 != w_175)))
                _fail(w_175);
              else
                v_175 = w_175;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_175), not_null(p_175), (ATerm) ATinsert(CheckATermList(not_null(v_175)), not_null(r_175)));
            t = table_put_0(t);
          }
        }
        t = q_47;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm k_136 (ATerm))
{
  ATerm a_176 = NULL;
  ATerm b_176 = NULL;
  t = term_x_38;
  {
    t = k_136(t);
    {
      b_176 = t;
      if(((a_176 != NULL) && (a_176 != b_176)))
        _fail(b_176);
      else
        a_176 = b_176;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_j_46, term_k_46, not_null(a_176));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm h_176 = NULL,i_176 = NULL,j_176 = NULL;
  h_176 = t;
  g_176 :
  if(match_string(h_176, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(h_176) == AT_LIST) && !(ATisEmpty(h_176))))
        {
          i_176 = ATgetFirst((ATermList) h_176);
          j_176 = (ATerm) ATgetNext((ATermList) h_176);
          {
            ATerm m_176 = NULL;
            ATerm a_48;
            a_48 = t;
            {
              t = not_null(i_176);
              t = a_0(t);
            }
            t = a_48;
            {
              ATerm n_176 = NULL;
              t = term_x_38;
              {
                t = b_0(t);
                {
                  n_176 = t;
                  if(((m_176 != NULL) && (m_176 != n_176)))
                    _fail(n_176);
                  else
                    m_176 = n_176;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(j_176)), not_null(m_176));
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
  ATerm j_9 (ATerm t)
  {
    ATerm s_176 = NULL;
    s_176 = t;
    r_176 :
    if(!(match_string(s_176, "--help")))
      {
        if(!(match_string(s_176, "-h")))
          {
            if(!(match_string(s_176, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_9 (ATerm t)
  {
    t = term_b_48;
    {
      t = set_config_0(t);
      t = term_c_48;
    }
    return(t);
  }
  ATerm l_9 (ATerm t)
  {
    t = term_d_48;
    return(t);
  }
  t = Option_3(t, j_9, k_9, l_9);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm v_176 = NULL,w_176 = NULL,x_176 = NULL;
  v_176 = t;
  u_176 :
  if(((ATgetType(v_176) == AT_LIST) && !(ATisEmpty(v_176))))
    {
      w_176 = ATgetFirst((ATermList) v_176);
      x_176 = (ATerm) ATgetNext((ATermList) v_176);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_176)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_176)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_95 (ATerm), ATerm r_95 (ATerm))
{
  ATerm h_177 = NULL,i_177 = NULL,j_177 = NULL;
  h_177 = t;
  g_177 :
  if(((ATgetType(h_177) == AT_LIST) && !(ATisEmpty(h_177))))
    {
      i_177 = ATgetFirst((ATermList) h_177);
      j_177 = (ATerm) ATgetNext((ATermList) h_177);
      {
        ATerm n_177 = NULL,p_177 = NULL;
        ATerm o_177 = NULL;
        t = SSLgetAnnotations(not_null(h_177));
        {
          o_177 = t;
          if(((n_177 != NULL) && (n_177 != o_177)))
            _fail(o_177);
          else
            n_177 = o_177;
        }
        {
          t = not_null(i_177);
          {
            ATerm r_177 = NULL;
            t = q_95(t);
            {
              p_177 = t;
              {
                t = not_null(j_177);
                {
                  ATerm t_177 = NULL;
                  t = r_95(t);
                  {
                    r_177 = t;
                    {
                      ATerm u_177 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(r_177)), not_null(p_177)), not_null(n_177));
                      {
                        u_177 = t;
                        if(((t_177 != NULL) && (t_177 != u_177)))
                          _fail(u_177);
                        else
                          t_177 = u_177;
                      }
                      t = not_null(t_177);
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
  ATerm e_178 = NULL;
  e_178 = t;
  d_178 :
  if(((ATgetType(e_178) == AT_LIST) && ATisEmpty(e_178)))
    {
      {
        ATerm g_178 = NULL,i_178 = NULL;
        ATerm e_48;
        e_48 = t;
        {
          ATerm h_178 = NULL;
          t = SSLgetAnnotations(not_null(e_178));
          {
            h_178 = t;
            if(((g_178 != NULL) && (g_178 != h_178)))
              _fail(h_178);
            else
              g_178 = h_178;
          }
        }
        t = e_48;
        {
          ATerm j_178 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(g_178));
          {
            j_178 = t;
            if(((i_178 != NULL) && (i_178 != j_178)))
              _fail(j_178);
            else
              i_178 = j_178;
          }
          t = not_null(i_178);
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
  ATerm p_178 = NULL,q_178 = NULL,r_178 = NULL;
  p_178 = t;
  o_178 :
  if(match_cons(p_178, sym__2))
    {
      q_178 = ATgetArgument(p_178, 0);
      r_178 = ATgetArgument(p_178, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_40, not_null(q_178), not_null(r_178));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_136 (ATerm))
{
  ATerm f_48;
  f_48 = t;
  {
    ATerm m_9 (ATerm t)
    {
      t = term_g_48;
      t = i_136(t);
      return(t);
    }
    t = try_1(t, m_9);
  }
  t = f_48;
  {
    ATerm n_9 (ATerm t)
    {
      ATerm z_178 = NULL;
      ATerm h_48;
      h_48 = t;
      {
        ATerm x_178 = NULL;
        ATerm y_178 = NULL;
        y_178 = t;
        if(((x_178 != NULL) && (x_178 != y_178)))
          _fail(y_178);
        else
          x_178 = y_178;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_44, not_null(x_178));
          t = set_config_0(t);
        }
      }
      t = h_48;
      {
        ATerm a_179 = NULL;
        a_179 = t;
        if(((z_178 != NULL) && (z_178 != a_179)))
          _fail(a_179);
        else
          z_178 = a_179;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_178));
      }
      return(t);
    }
    ATerm o_9 (ATerm t)
    {
      ATerm i_48 = t;
      int j_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_48 = t;
          int l_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(l_48);
            }
          else
            {
              t = k_48;
              {
                t = i_136(t);
                t = Cons_2(t, _id, o_9);
              }
            }
          ;
          LocalPopChoice(j_48);
        }
      else
        {
          t = i_48;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_9, o_9);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_179 = NULL,h_179 = NULL,i_179 = NULL;
  ATerm m_48;
  m_48 = t;
  {
    ATerm j_179 = NULL,k_179 = NULL,l_179 = NULL,m_179 = NULL;
    j_179 = t;
    f_179 :
    if(match_cons(j_179, sym__3))
      {
        k_179 = ATgetArgument(j_179, 0);
        l_179 = ATgetArgument(j_179, 1);
        m_179 = ATgetArgument(j_179, 2);
        {
          if(((g_179 != NULL) && (g_179 != k_179)))
            _fail(k_179);
          else
            g_179 = k_179;
          {
            if(((h_179 != NULL) && (h_179 != l_179)))
              _fail(l_179);
            else
              h_179 = l_179;
            {
              if(((i_179 != NULL) && (i_179 != m_179)))
                _fail(m_179);
              else
                i_179 = m_179;
              t = SSL_table_put(not_null(g_179), not_null(h_179), not_null(i_179));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = m_48;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_136 (ATerm))
{
  ATerm p_179 = NULL;
  ATerm u_48;
  u_48 = t;
  {
    t = term_v_48;
    t = table_put_0(t);
  }
  t = u_48;
  {
    ATerm p_9 (ATerm t)
    {
      ATerm w_48 = t;
      int x_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_136(t);
          ;
          LocalPopChoice(x_48);
        }
      else
        {
          t = w_48;
          {
            ATerm y_48 = t;
            int g_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(g_49);
              }
            else
              {
                t = y_48;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, p_9);
    {
      ATerm q_9 (ATerm t)
      {
        ATerm h_49 = t;
        int i_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_49;
            j_49 = t;
            {
              ATerm k_49 = t;
              int l_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_q_45;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(l_49);
                }
              else
                {
                  t = k_49;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = j_49;
            {
              t = system_usage_0(t);
              {
                t = term_b_42;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(i_49);
          }
        else
          {
            t = h_49;
            {
              ATerm m_49 = t;
              int n_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_49;
                  o_49 = t;
                  {
                    t = term_j_47;
                    t = get_config_0(t);
                  }
                  t = o_49;
                  {
                    t = system_about_0(t);
                    {
                      t = term_b_42;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(n_49);
                }
              else
                {
                  t = m_49;
                  {
                    ATerm r_9 (ATerm t)
                    {
                      ATerm s_9 (ATerm t)
                      {
                        ATerm q_179 = NULL;
                        q_179 = t;
                        if(((p_179 != NULL) && (p_179 != q_179)))
                          _fail(q_179);
                        else
                          p_179 = q_179;
                        return(t);
                      }
                      t = Undefined_1(t, s_9);
                      return(t);
                    }
                    t = option_defined_1(t, r_9);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_179)), term_p_49));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_r_39;
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
      t = try_1(t, q_9);
      {
        ATerm q_49;
        q_49 = t;
        {
          t = term_j_46;
          t = table_destroy_0(t);
        }
        t = q_49;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm f_133 (ATerm), ATerm g_133 (ATerm), ATerm h_133 (ATerm), ATerm i_133 (ATerm))
{
  t = parse_options_1(t, f_133);
  {
    t = store_options_0(t);
    {
      t = h_133(t);
      {
        ATerm r_49 = t;
        int s_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, g_133);
            ;
            LocalPopChoice(s_49);
          }
        else
          {
            t = r_49;
            {
              ATerm t_49 = t;
              int u_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_133(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(u_49);
                }
              else
                {
                  t = t_49;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm w_132 (ATerm), ATerm x_132 (ATerm))
{
  ATerm t_9 (ATerm t)
  {
    ATerm v_49 = t;
    int w_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_132(t);
        ;
        LocalPopChoice(w_49);
      }
    else
      {
        t = v_49;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm u_9 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, u_132);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, t_9, w_132, x_132, u_9);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm o_132 (ATerm), ATerm p_132 (ATerm), ATerm q_132 (ATerm))
{
  ATerm v_9 (ATerm t)
  {
    ATerm w_9 (ATerm t)
    {
      ATerm x_49;
      x_49 = t;
      {
        ATerm t_179 = NULL;
        ATerm u_179 = NULL;
        t = term_h_44;
        {
          t = get_config_0(t);
          {
            u_179 = t;
            if(((t_179 != NULL) && (t_179 != u_179)))
              _fail(u_179);
            else
              t_179 = u_179;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATempty, not_null(t_179)));
          t = printnl_0(t);
        }
      }
      t = x_49;
      return(t);
    }
    t = if_verbose2_1(t, w_9);
    return(t);
  }
  t = iowrap_4(t, o_132, p_132, q_132, v_9);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm m_132 (ATerm), ATerm n_132 (ATerm))
{
  t = iowrap_3(t, m_132, n_132, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm j_132 (ATerm))
{
  ATerm x_9 (ATerm t)
  {
    t = _2(t, _id, j_132);
    return(t);
  }
  t = iowrap_2(t, x_9, _fail);
  return(t);
}
ATerm fusion_io_0 (ATerm t)
{
  ATerm y_9 (ATerm t)
  {
    ATerm y_49 = t;
    int z_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = declare_inline_rules_0(t);
        {
          t = check_library_definitions_0(t);
          t = alltd_1(t, innermost_fusion_0);
        }
        ;
        LocalPopChoice(z_49);
      }
    else
      {
        t = y_49;
        {
          ATerm z_9 (ATerm t)
          {
            ATerm a_10 (ATerm t)
            {
              t = term_a_50;
              return(t);
            }
            t = say_1(t, a_10);
            return(t);
          }
          t = if_verbose2_1(t, z_9);
        }
      }
    return(t);
  }
  t = iowrap_1(t, y_9);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = fusion_io_0(t);
  return(t);
}
