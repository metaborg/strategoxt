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
ATerm term_l_60;
ATerm term_a_60;
ATerm term_n_59;
ATerm term_g_57;
ATerm term_d_57;
ATerm term_c_57;
ATerm term_b_57;
ATerm term_w_56;
ATerm term_v_56;
ATerm term_u_56;
ATerm term_t_56;
ATerm term_s_56;
ATerm term_r_56;
ATerm term_q_56;
ATerm term_y_53;
ATerm term_x_53;
ATerm term_w_53;
ATerm term_v_53;
ATerm term_u_53;
ATerm term_t_53;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_f_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_o_52;
ATerm term_n_52;
ATerm term_i_52;
ATerm term_h_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_t_51;
ATerm term_s_51;
ATerm term_r_51;
ATerm term_q_51;
ATerm term_p_51;
ATerm term_l_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_i_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_c_51;
ATerm term_w_50;
ATerm term_v_50;
ATerm term_k_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_d_49;
ATerm term_b_49;
ATerm term_k_48;
ATerm term_i_48;
ATerm term_h_48;
ATerm term_d_48;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_d_47;
ATerm term_z_46;
ATerm term_y_46;
ATerm term_w_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_z_36;
ATerm term_l_36;
ATerm term_k_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_f_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_x_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_j_29;
ATerm term_w_28;
ATerm term_u_28;
ATerm term_j_28;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_l_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_h_18;
ATerm term_e_15;
ATerm term_q_14;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_f_12;
void init_constant_terms (void)
{
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_CallT_3, term_b_19, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Seq_2, term_e_19, term_f_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Seq_2, term_d_19, term_g_19);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Seq_2, term_c_19, term_h_19);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_20);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_23);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_Seq_2, term_d_19, term_f_19);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Seq_2, term_c_19, term_p_23);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_23);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_23);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("b_2", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_Defined_1, term_w_28);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("d_2", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_29);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_31);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym_Op_2, term_j_37, (ATerm) ATempty);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym_ConstType_1, term_k_37);
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_47);
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_i_51);
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_51);
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(sym__2, term_q_51, term_y_46);
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(sym__2, term_b_52, term_y_46);
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(sym__2, term_u_53, term_v_53);
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(sym__2, term_q_56, term_y_46);
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(sym__2, term_t_56, term_y_46);
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(sym__2, term_f_53, term_y_46);
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_59));
  term_n_59 = (ATerm) ATmakeAppl(sym__3, term_u_53, term_v_53, (ATerm) ATempty);
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_60));
  term_l_60 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm debug_0_0 (ATerm);
ATerm say_1_0 (ATerm d_130 (ATerm), ATerm);
ATerm if_verbose2_1_0 (ATerm g_140 (ATerm), ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp1_0_0 (ATerm);
ATerm Mapp0_0_0 (ATerm);
ATerm Mapp_0_0 (ATerm);
ATerm Bapp1_0_0 (ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm UnZip2_0_0 (ATerm);
ATerm UnZip3_0_0 (ATerm);
ATerm UnZip1_0_0 (ATerm);
ATerm unzip_1_0 (ATerm m_117 (ATerm), ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm Wld_0_0 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm);
ATerm Con_3_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm p_110 (ATerm), ATerm);
ATerm desugar_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm t_111 (ATerm), ATerm);
ATerm UnMark_0_0 (ATerm);
ATerm BottomupToVarIsId_Cond_0_0 (ATerm);
ATerm Replace_0_0 (ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm x_122 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm w_122 (ATerm), ATerm);
ATerm scope_2_0 (ATerm y_122 (ATerm), ATerm z_122 (ATerm), ATerm);
ATerm replace_application_0_0 (ATerm);
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm);
ATerm BottomupOverConstructor_0_0 (ATerm);
ATerm IntroduceApp_0_0 (ATerm);
ATerm SeqOverScopeR_0_0 (ATerm);
ATerm SeqOverLChoiceR_0_0 (ATerm);
ATerm SeqOverChoiceR_0_0 (ATerm);
ATerm fuse_with_bottomup_0_0 (ATerm);
ATerm SeqOverScopeL_0_0 (ATerm);
ATerm SeqOverLChoiceL_0_0 (ATerm);
ATerm SeqOverChoiceL_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm q_110 (ATerm), ATerm);
ATerm innermost_1_0 (ATerm f_126 (ATerm), ATerm);
ATerm propagate_mark_0_0 (ATerm);
ATerm Build_1_0 (ATerm f_100 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm);
ATerm Match_1_0 (ATerm e_100 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm);
ATerm inline_rules_0_0 (ATerm);
ATerm bottomup_to_var_0_0 (ATerm);
ATerm seq_over_choice_0_0 (ATerm);
ATerm innermost_fusion_0_0 (ATerm);
ATerm alltd_1_0 (ATerm h_112 (ATerm), ATerm);
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm);
ATerm check_that_innermost_is_innermost_0_0 (ATerm);
ATerm TransformingCongruence_0_0 (ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm TransformingAnnoCongruence_0_0 (ATerm);
ATerm As_2_0 (ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm x_96 (ATerm), ATerm y_96 (ATerm), ATerm);
ATerm Op_2_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm w_138 (ATerm), ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm MatchingCongruence_0_0 (ATerm);
ATerm EmptyScope_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm MkConstType_0_0 (ATerm);
ATerm MkFunType_0_0 (ATerm);
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm F15_0_0 (ATerm);
ATerm F14_0_0 (ATerm);
ATerm F13_0_0 (ATerm);
ATerm F12_0_0 (ATerm);
ATerm F11_0_0 (ATerm);
ATerm F10_0_0 (ATerm);
ATerm F9_0_0 (ATerm);
ATerm F8_0_0 (ATerm);
ATerm F7_0_0 (ATerm);
ATerm F6_0_0 (ATerm);
ATerm F5_0_0 (ATerm);
ATerm F3_0_0 (ATerm);
ATerm F2_0_0 (ATerm);
ATerm F1_0_0 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm I16_0_0 (ATerm);
ATerm I12_0_0 (ATerm);
ATerm I10_0_0 (ATerm);
ATerm I9_0_0 (ATerm);
ATerm I8_0_0 (ATerm);
ATerm I7_0_0 (ATerm);
ATerm I4_0_0 (ATerm);
ATerm I3_0_0 (ATerm);
ATerm I2_0_0 (ATerm);
ATerm I1_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm t_123 (ATerm), ATerm);
ATerm downup_1_0 (ATerm r_110 (ATerm), ATerm);
ATerm simplify0_0_0 (ATerm);
ATerm Zip3_0_0 (ATerm);
ATerm Zip2_0_0 (ATerm);
ATerm Zip1_0_0 (ATerm);
ATerm genzip_4_0 (ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm);
ATerm zip_1_0 (ATerm h_117 (ATerm), ATerm);
ATerm IsSVar_0_0 (ATerm);
ATerm SubsVar_2_0 (ATerm u_136 (ATerm), ATerm v_136 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm f_136 (ATerm), ATerm g_136 (ATerm), ATerm);
ATerm substitute_1_0 (ATerm h_136 (ATerm), ATerm);
ATerm ssubs_0_0 (ATerm);
ATerm spaste_1_0 (ATerm u_139 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm);
ATerm Let_2_0 (ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm v_139 (ATerm), ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm Bind3_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm SVar_1_0 (ATerm w_99 (ATerm), ATerm);
ATerm srename_0_0 (ATerm);
ATerm ReplaceVar_0_0 (ATerm);
ATerm tpaste_1_0 (ATerm q_139 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm e_99 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm h_100 (ATerm), ATerm i_100 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm);
ATerm Bind8_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind6_0_0 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm Add1_0_0 (ATerm);
ATerm union_1_0 (ATerm c_119 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm r_121 (ATerm), ATerm s_121 (ATerm), ATerm t_121 (ATerm), ATerm);
ATerm crush_3_0 (ATerm p_119 (ATerm), ATerm q_119 (ATerm), ATerm r_119 (ATerm), ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm);
ATerm diff_1_0 (ATerm y_118 (ATerm), ATerm);
ATerm UfShift_0_0 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm UfIdem_0_0 (ATerm);
ATerm while_not_2_0 (ATerm i_124 (ATerm), ATerm j_124 (ATerm), ATerm);
ATerm for_3_0 (ATerm l_124 (ATerm), ATerm m_124 (ATerm), ATerm n_124 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm m_138 (ATerm), ATerm n_138 (ATerm), ATerm o_138 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm o_0 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm h_137 (ATerm), ATerm i_137 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm);
ATerm RnBinding_2_0 (ATerm b_137 (ATerm), ATerm c_137 (ATerm, ATerm (ATerm)), ATerm);
ATerm Look2_0_0 (ATerm);
ATerm Look1_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm RnVar_1_0 (ATerm m_137 (ATerm, ATerm (ATerm)), ATerm);
ATerm all_dist_1_0 (ATerm f_127 (ATerm), ATerm);
ATerm env_alltd_1_0 (ATerm p_126 (ATerm), ATerm);
ATerm rename_4_0 (ATerm w_136 (ATerm, ATerm (ATerm)), ATerm x_136 (ATerm), ATerm y_136 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_136 (ATerm, ATerm (ATerm)), ATerm);
ATerm trename_0_0 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm Hd_0_0 (ATerm);
ATerm table_lookup_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm c_123 (ATerm), ATerm);
ATerm InlineStrat_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm check_that_try_is_try_0_0 (ATerm);
ATerm check_library_definitions_0_0 (ATerm);
ATerm assert_1_0 (ATerm a_123 (ATerm), ATerm);
ATerm declare_inline_rule_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm o_95 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm p_95 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm t_95 (ATerm), ATerm);
ATerm declare_inline_rules_0_0 (ATerm);
ATerm _2_0 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm p_115 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm n_130 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm z_131 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm z_129 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm p_121 (ATerm), ATerm q_121 (ATerm), ATerm);
ATerm crush_2_0 (ATerm n_119 (ATerm), ATerm o_119 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm f_140 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm x_132 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm a_136 (ATerm), ATerm);
ATerm map_1_0 (ATerm z_114 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm z_135 (ATerm), ATerm);
ATerm Program_1_0 (ATerm s_109 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm t_109 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm j_115 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm z_134 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm h_113 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm e_136 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm k_95 (ATerm), ATerm l_95 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm c_136 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm b_136 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_132 (ATerm), ATerm a_133 (ATerm), ATerm b_133 (ATerm), ATerm c_133 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm o_132 (ATerm), ATerm p_132 (ATerm), ATerm q_132 (ATerm), ATerm r_132 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm i_132 (ATerm), ATerm j_132 (ATerm), ATerm k_132 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm g_132 (ATerm), ATerm h_132 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm d_132 (ATerm), ATerm);
ATerm fusion_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm e_12;
  e_12 = t;
  {
    ATerm r_0 = NULL;
    ATerm t_0 = NULL;
    ATerm u_7 (ATerm t)
    {
      t = not_null(t_0);
      if(((r_0 != NULL) && (r_0 != t)))
        _fail(t);
      else
        r_0 = t;
      t = not_null(t_0);
      return(t);
    }
    if(((t_0 != NULL) && (t_0 != t)))
      _fail(t);
    else
      t_0 = t;
    t = u_7(t);
    t = (ATerm) ATmakeAppl(sym__2, term_f_12, (ATerm) ATinsert(ATempty, not_null(r_0)));
    t = printnl_0_0(t);
  }
  t = e_12;
  return(t);
}
ATerm say_1_0 (ATerm d_130 (ATerm), ATerm t)
{
  ATerm s_12;
  s_12 = t;
  t = d_130(t);
  t = debug_0_0(t);
  t = s_12;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_140 (ATerm), ATerm t)
{
  ATerm l_0 (ATerm t)
  {
    ATerm t_12;
    t_12 = t;
    {
      ATerm w_7 = NULL;
      ATerm k_8 = NULL;
      ATerm l_8 (ATerm t)
      {
        t = not_null(k_8);
        if(((w_7 != NULL) && (w_7 != t)))
          _fail(t);
        else
          w_7 = t;
        t = not_null(k_8);
        return(t);
      }
      t = term_u_12;
      t = get_config_0_0(t);
      if(((k_8 != NULL) && (k_8 != t)))
        _fail(t);
      else
        k_8 = t;
      t = l_8(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_7), term_v_12);
      t = geq_0_0(t);
    }
    t = t_12;
    t = g_140(t);
    return(t);
  }
  t = try_1_0(l_0, t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL;
  ATerm z_10 (ATerm t)
  {
    ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL;
    t = not_null(s_9);
    if(((t_9 != NULL) && (t_9 != t)))
      _fail(t);
    else
      t_9 = t;
    t = not_null(q_9);
    if(((u_9 != NULL) && (u_9 != t)))
      _fail(t);
    else
      u_9 = t;
    t = not_null(r_9);
    {
      ATerm z_9 = NULL;
      ATerm c_11 (ATerm t)
      {
        ATerm a_10 = NULL;
        ATerm d_11 (ATerm t)
        {
          ATerm b_10 = NULL;
          ATerm e_11 (ATerm t)
          {
            ATerm c_10 = NULL;
            ATerm f_11 (ATerm t)
            {
              t = not_null(c_10);
              if(((y_9 != NULL) && (y_9 != t)))
                _fail(t);
              else
                y_9 = t;
              t = not_null(c_10);
              return(t);
            }
            t = not_null(b_10);
            if(((x_9 != NULL) && (x_9 != t)))
              _fail(t);
            else
              x_9 = t;
            t = not_null(b_10);
            t = new_0_0(t);
            if(((c_10 != NULL) && (c_10 != t)))
              _fail(t);
            else
              c_10 = t;
            t = f_11(t);
            return(t);
          }
          t = not_null(a_10);
          if(((w_9 != NULL) && (w_9 != t)))
            _fail(t);
          else
            w_9 = t;
          t = not_null(a_10);
          t = new_0_0(t);
          if(((b_10 != NULL) && (b_10 != t)))
            _fail(t);
          else
            b_10 = t;
          t = e_11(t);
          return(t);
        }
        t = not_null(z_9);
        if(((v_9 != NULL) && (v_9 != t)))
          _fail(t);
        else
          v_9 = t;
        t = not_null(z_9);
        t = new_0_0(t);
        if(((a_10 != NULL) && (a_10 != t)))
          _fail(t);
        else
          a_10 = t;
        t = d_11(t);
        return(t);
      }
      t = new_0_0(t);
      if(((z_9 != NULL) && (z_9 != t)))
        _fail(t);
      else
        z_9 = t;
      t = c_11(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(y_9)), not_null(x_9)), not_null(w_9)), not_null(v_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_9)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(t_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_9))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(u_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_9))))), (ATerm) ATmakeAppl(sym_PrimT_3, term_f_13, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_9))), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_9)))))));
    }
    return(t);
  }
  ATerm a_11 (ATerm t)
  {
    ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
    t = not_null(s_9);
    if(((d_10 != NULL) && (d_10 != t)))
      _fail(t);
    else
      d_10 = t;
    t = not_null(r_9);
    {
      ATerm i_10 = NULL;
      ATerm g_11 (ATerm t)
      {
        ATerm m_10 = NULL;
        ATerm i_11 (ATerm t)
        {
          t = not_null(m_10);
          if(((h_10 != NULL) && (h_10 != t)))
            _fail(t);
          else
            h_10 = t;
          t = not_null(m_10);
          return(t);
        }
        t = not_null(i_10);
        if(((g_10 != NULL) && (g_10 != t)))
          _fail(t);
        else
          g_10 = t;
        t = not_null(d_10);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
            ATerm h_11 (ATerm t)
            {
              t = not_null(k_10);
              if(((e_10 != NULL) && (e_10 != t)))
                _fail(t);
              else
                e_10 = t;
              t = not_null(l_10);
              if(((f_10 != NULL) && (f_10 != t)))
                _fail(t);
              else
                f_10 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_10));
              return(t);
            }
            if(((j_10 != NULL) && (j_10 != t)))
              _fail(t);
            else
              j_10 = t;
            t = not_null(j_10);
            if(match_cons(t, sym_Explode_2))
              {
                k_10 = ATgetArgument(t, 0);
                l_10 = ATgetArgument(t, 1);
                t = h_11(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(u_0, t);
          if(((m_10 != NULL) && (m_10 != t)))
            _fail(t);
          else
            m_10 = t;
          t = i_11(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((i_10 != NULL) && (i_10 != t)))
        _fail(t);
      else
        i_10 = t;
      t = g_11(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_13, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_10)), not_null(e_10))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_10))), (ATerm) ATmakeAppl(sym_Build_1, not_null(h_10)))));
    }
    return(t);
  }
  ATerm b_11 (ATerm t)
  {
    ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL;
    t = not_null(s_9);
    if(((n_10 != NULL) && (n_10 != t)))
      _fail(t);
    else
      n_10 = t;
    t = not_null(r_9);
    {
      ATerm t_10 = NULL;
      ATerm j_11 (ATerm t)
      {
        ATerm u_10 = NULL;
        ATerm k_11 (ATerm t)
        {
          ATerm y_10 = NULL;
          ATerm m_11 (ATerm t)
          {
            t = not_null(y_10);
            if(((s_10 != NULL) && (s_10 != t)))
              _fail(t);
            else
              s_10 = t;
            t = not_null(y_10);
            return(t);
          }
          t = not_null(u_10);
          if(((r_10 != NULL) && (r_10 != t)))
            _fail(t);
          else
            r_10 = t;
          t = not_null(n_10);
          {
            ATerm w_0 (ATerm t)
            {
              ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
              ATerm l_11 (ATerm t)
              {
                t = not_null(w_10);
                if(((o_10 != NULL) && (o_10 != t)))
                  _fail(t);
                else
                  o_10 = t;
                t = not_null(x_10);
                if(((p_10 != NULL) && (p_10 != t)))
                  _fail(t);
                else
                  p_10 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_10));
                return(t);
              }
              if(((v_10 != NULL) && (v_10 != t)))
                _fail(t);
              else
                v_10 = t;
              t = not_null(v_10);
              if(match_cons(t, sym_Explode_2))
                {
                  w_10 = ATgetArgument(t, 0);
                  x_10 = ATgetArgument(t, 1);
                  t = l_11(t);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = oncetd_1_0(w_0, t);
            if(((y_10 != NULL) && (y_10 != t)))
              _fail(t);
            else
              y_10 = t;
            t = m_11(t);
          }
          return(t);
        }
        t = not_null(t_10);
        if(((q_10 != NULL) && (q_10 != t)))
          _fail(t);
        else
          q_10 = t;
        t = not_null(t_10);
        t = new_0_0(t);
        if(((u_10 != NULL) && (u_10 != t)))
          _fail(t);
        else
          u_10 = t;
        t = k_11(t);
        return(t);
      }
      t = new_0_0(t);
      if(((t_10 != NULL) && (t_10 != t)))
        _fail(t);
      else
        t_10 = t;
      t = j_11(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(s_10)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_10))), (ATerm) ATmakeAppl(sym_PrimT_3, term_g_13, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_10)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(q_10)), (ATerm) ATmakeAppl(sym_Op_2, term_h_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_10)), not_null(o_10)))))));
    }
    return(t);
  }
  if(((r_9 != NULL) && (r_9 != t)))
    _fail(t);
  else
    r_9 = t;
  t = not_null(r_9);
  if(match_cons(t, sym_ExplodeCong_2))
    {
      s_9 = ATgetArgument(t, 0);
      q_9 = ATgetArgument(t, 1);
      t = z_10(t);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          s_9 = ATgetArgument(t, 0);
          t = a_11(t);
        }
      else
        {
          if(match_cons(t, sym_Match_1))
            {
              s_9 = ATgetArgument(t, 0);
              t = b_11(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm Mapp1_0_0 (ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL;
  ATerm y_11 (ATerm t)
  {
    ATerm v_11 = NULL;
    t = not_null(t_11);
    if(((v_11 != NULL) && (v_11 != t)))
      _fail(t);
    else
      v_11 = t;
    t = not_null(v_11);
    return(t);
  }
  ATerm z_11 (ATerm t)
  {
    ATerm w_11 = NULL,x_11 = NULL;
    t = not_null(t_11);
    if(((w_11 != NULL) && (w_11 != t)))
      _fail(t);
    else
      w_11 = t;
    t = not_null(u_11);
    if(((x_11 != NULL) && (x_11 != t)))
      _fail(t);
    else
      x_11 = t;
    t = (ATerm) ATmakeAppl(sym_BA_2, not_null(w_11), not_null(x_11));
    return(t);
  }
  if(((r_11 != NULL) && (r_11 != t)))
    _fail(t);
  else
    r_11 = t;
  t = not_null(r_11);
  if(match_cons(t, sym_Match_1))
    {
      s_11 = ATgetArgument(t, 0);
      t = not_null(s_11);
      if(match_cons(t, sym_RootApp_1))
        {
          t_11 = ATgetArgument(t, 0);
          t = y_11(t);
        }
      else
        {
          if(match_cons(t, sym_App_2))
            {
              t_11 = ATgetArgument(t, 0);
              u_11 = ATgetArgument(t, 1);
              t = z_11(t);
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
  ATerm g_12 = NULL,h_12 = NULL;
  ATerm p_12 (ATerm t)
  {
    ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
    t = not_null(h_12);
    if(((i_12 != NULL) && (i_12 != t)))
      _fail(t);
    else
      i_12 = t;
    t = not_null(g_12);
    {
      ATerm o_12 = NULL;
      ATerm r_12 (ATerm t)
      {
        t = not_null(o_12);
        if(((k_12 != NULL) && (k_12 != t)))
          _fail(t);
        else
          k_12 = t;
        t = not_null(o_12);
        return(t);
      }
      t = not_null(i_12);
      {
        ATerm x_0 (ATerm t)
        {
          ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
          ATerm q_12 (ATerm t)
          {
            t = not_null(n_12);
            if(((j_12 != NULL) && (j_12 != t)))
              _fail(t);
            else
              j_12 = t;
            t = not_null(j_12);
            return(t);
          }
          if(((l_12 != NULL) && (l_12 != t)))
            _fail(t);
          else
            l_12 = t;
          t = not_null(l_12);
          if(match_cons(t, sym_RootApp_1))
            {
              m_12 = ATgetArgument(t, 0);
              t = not_null(m_12);
              if(match_cons(t, sym_Match_1))
                {
                  n_12 = ATgetArgument(t, 0);
                  t = q_12(t);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = pat_td_1_0(x_0, t);
        if(((o_12 != NULL) && (o_12 != t)))
          _fail(t);
        else
          o_12 = t;
        t = r_12(t);
      }
      t = (ATerm) ATmakeAppl(sym_Match_1, not_null(k_12));
    }
    return(t);
  }
  if(((g_12 != NULL) && (g_12 != t)))
    _fail(t);
  else
    g_12 = t;
  t = not_null(g_12);
  if(match_cons(t, sym_Match_1))
    {
      h_12 = ATgetArgument(t, 0);
      t = p_12(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Mapp_0_0 (ATerm t)
{
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0_0(t);
      ;
      LocalPopChoice(j_13);
    }
  else
    {
      t = i_13;
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0_0(t);
            ;
            LocalPopChoice(l_13);
          }
        else
          {
            t = k_13;
            t = Mapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp1_0_0 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL;
  ATerm d_13 (ATerm t)
  {
    ATerm a_13 = NULL;
    t = not_null(y_12);
    if(((a_13 != NULL) && (a_13 != t)))
      _fail(t);
    else
      a_13 = t;
    t = not_null(a_13);
    return(t);
  }
  ATerm e_13 (ATerm t)
  {
    ATerm b_13 = NULL,c_13 = NULL;
    t = not_null(y_12);
    if(((c_13 != NULL) && (c_13 != t)))
      _fail(t);
    else
      c_13 = t;
    t = not_null(z_12);
    if(((b_13 != NULL) && (b_13 != t)))
      _fail(t);
    else
      b_13 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_13)), not_null(c_13));
    return(t);
  }
  if(((w_12 != NULL) && (w_12 != t)))
    _fail(t);
  else
    w_12 = t;
  t = not_null(w_12);
  if(match_cons(t, sym_Build_1))
    {
      x_12 = ATgetArgument(t, 0);
      t = not_null(x_12);
      if(match_cons(t, sym_RootApp_1))
        {
          y_12 = ATgetArgument(t, 0);
          t = d_13(t);
        }
      else
        {
          if(match_cons(t, sym_App_2))
            {
              y_12 = ATgetArgument(t, 0);
              z_12 = ATgetArgument(t, 1);
              t = e_13(t);
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
ATerm Bapp0_0_0 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL;
  ATerm i_14 (ATerm t)
  {
    ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
    t = not_null(r_13);
    if(((s_13 != NULL) && (s_13 != t)))
      _fail(t);
    else
      s_13 = t;
    t = not_null(q_13);
    {
      ATerm y_13 = NULL;
      ATerm l_14 (ATerm t)
      {
        t = not_null(y_13);
        if(((u_13 != NULL) && (u_13 != t)))
          _fail(t);
        else
          u_13 = t;
        t = not_null(y_13);
        return(t);
      }
      t = not_null(s_13);
      {
        ATerm y_0 (ATerm t)
        {
          ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
          ATerm k_14 (ATerm t)
          {
            t = not_null(x_13);
            if(((t_13 != NULL) && (t_13 != t)))
              _fail(t);
            else
              t_13 = t;
            t = not_null(t_13);
            return(t);
          }
          if(((v_13 != NULL) && (v_13 != t)))
            _fail(t);
          else
            v_13 = t;
          t = not_null(v_13);
          if(match_cons(t, sym_RootApp_1))
            {
              w_13 = ATgetArgument(t, 0);
              t = not_null(w_13);
              if(match_cons(t, sym_Build_1))
                {
                  x_13 = ATgetArgument(t, 0);
                  t = k_14(t);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = pat_td_1_0(y_0, t);
        if(((y_13 != NULL) && (y_13 != t)))
          _fail(t);
        else
          y_13 = t;
        t = l_14(t);
      }
      t = (ATerm) ATmakeAppl(sym_Build_1, not_null(u_13));
    }
    return(t);
  }
  ATerm j_14 (ATerm t)
  {
    ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL;
    t = not_null(r_13);
    if(((z_13 != NULL) && (z_13 != t)))
      _fail(t);
    else
      z_13 = t;
    t = not_null(q_13);
    {
      ATerm h_14 = NULL;
      ATerm n_14 (ATerm t)
      {
        t = not_null(h_14);
        if(((c_14 != NULL) && (c_14 != t)))
          _fail(t);
        else
          c_14 = t;
        t = not_null(h_14);
        return(t);
      }
      t = not_null(z_13);
      {
        ATerm z_0 (ATerm t)
        {
          ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
          ATerm m_14 (ATerm t)
          {
            t = not_null(f_14);
            if(((b_14 != NULL) && (b_14 != t)))
              _fail(t);
            else
              b_14 = t;
            t = not_null(g_14);
            if(((a_14 != NULL) && (a_14 != t)))
              _fail(t);
            else
              a_14 = t;
            t = not_null(b_14);
            return(t);
          }
          if(((d_14 != NULL) && (d_14 != t)))
            _fail(t);
          else
            d_14 = t;
          t = not_null(d_14);
          if(match_cons(t, sym_App_2))
            {
              e_14 = ATgetArgument(t, 0);
              g_14 = ATgetArgument(t, 1);
              t = not_null(e_14);
              if(match_cons(t, sym_Build_1))
                {
                  f_14 = ATgetArgument(t, 0);
                  t = m_14(t);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = pat_td_1_0(z_0, t);
        if(((h_14 != NULL) && (h_14 != t)))
          _fail(t);
        else
          h_14 = t;
        t = n_14(t);
      }
      t = (ATerm) ATmakeAppl(sym_Build_1, not_null(c_14));
    }
    return(t);
  }
  if(((q_13 != NULL) && (q_13 != t)))
    _fail(t);
  else
    q_13 = t;
  t = not_null(q_13);
  if(match_cons(t, sym_Build_1))
    {
      r_13 = ATgetArgument(t, 0);
      {
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_14(t);
            ;
            LocalPopChoice(n_13);
          }
        else
          {
            t = m_13;
            t = j_14(t);
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
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0_0(t);
      ;
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      {
        ATerm o_14 = t;
        int p_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0_0(t);
            ;
            LocalPopChoice(p_14);
          }
        else
          {
            t = o_14;
            t = Bapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm UnZip2_0_0 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL;
  ATerm d_15 (ATerm t)
  {
    ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
    t = not_null(u_14);
    if(((z_14 != NULL) && (z_14 != t)))
      _fail(t);
    else
      z_14 = t;
    t = not_null(v_14);
    if(((b_15 != NULL) && (b_15 != t)))
      _fail(t);
    else
      b_15 = t;
    t = not_null(x_14);
    if(((a_15 != NULL) && (a_15 != t)))
      _fail(t);
    else
      a_15 = t;
    t = not_null(y_14);
    if(((c_15 != NULL) && (c_15 != t)))
      _fail(t);
    else
      c_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_15)), not_null(z_14)), (ATerm) ATinsert(CheckATermList(not_null(c_15)), not_null(b_15)));
    return(t);
  }
  if(((s_14 != NULL) && (s_14 != t)))
    _fail(t);
  else
    s_14 = t;
  t = not_null(s_14);
  if(match_cons(t, sym__2))
    {
      t_14 = ATgetArgument(t, 0);
      w_14 = ATgetArgument(t, 1);
      t = not_null(t_14);
      if(match_cons(t, sym__2))
        {
          u_14 = ATgetArgument(t, 0);
          v_14 = ATgetArgument(t, 1);
          t = not_null(w_14);
          if(match_cons(t, sym__2))
            {
              x_14 = ATgetArgument(t, 0);
              y_14 = ATgetArgument(t, 1);
              t = d_15(t);
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL;
  ATerm l_15 (ATerm t)
  {
    ATerm j_15 = NULL,k_15 = NULL;
    t = not_null(h_15);
    if(((j_15 != NULL) && (j_15 != t)))
      _fail(t);
    else
      j_15 = t;
    t = not_null(i_15);
    if(((k_15 != NULL) && (k_15 != t)))
      _fail(t);
    else
      k_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_15), not_null(k_15));
    return(t);
  }
  if(((g_15 != NULL) && (g_15 != t)))
    _fail(t);
  else
    g_15 = t;
  t = not_null(g_15);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_15 = ATgetFirst((ATermList) t);
      i_15 = (ATerm) ATgetNext((ATermList) t);
      t = l_15(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0_0 (ATerm t)
{
  ATerm o_15 = NULL;
  ATerm p_15 (ATerm t)
  {
    t = term_q_14;
    return(t);
  }
  if(((o_15 != NULL) && (o_15 != t)))
    _fail(t);
  else
    o_15 = t;
  t = not_null(o_15);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_15(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1_0 (ATerm m_117 (ATerm), ATerm t)
{
  t = genzip_4_0(UnZip1_0_0, UnZip3_0_0, UnZip2_0_0, m_117, t);
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL;
  ATerm a_16 (ATerm t)
  {
    ATerm w_15 = NULL,x_15 = NULL;
    t = not_null(u_15);
    if(((w_15 != NULL) && (w_15 != t)))
      _fail(t);
    else
      w_15 = t;
    t = not_null(u_15);
    {
      ATerm y_15 = NULL;
      ATerm c_16 (ATerm t)
      {
        t = not_null(y_15);
        if(((x_15 != NULL) && (x_15 != t)))
          _fail(t);
        else
          x_15 = t;
        t = not_null(y_15);
        return(t);
      }
      t = not_null(w_15);
      {
        ATerm r_14 = t;
        if((PushChoice() == 0))
          {
            t = Var_1_0(_id, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_14;
          }
        t = new_0_0(t);
        if(((y_15 != NULL) && (y_15 != t)))
          _fail(t);
        else
          y_15 = t;
        t = c_16(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(x_15)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_15)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_15))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_15))));
    }
    return(t);
  }
  ATerm b_16 (ATerm t)
  {
    ATerm z_15 = NULL;
    t = not_null(v_15);
    if(((z_15 != NULL) && (z_15 != t)))
      _fail(t);
    else
      z_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_e_15, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_15))));
    return(t);
  }
  if(((u_15 != NULL) && (u_15 != t)))
    _fail(t);
  else
    u_15 = t;
  t = not_null(u_15);
  if(match_cons(t, sym_Var_1))
    {
      v_15 = ATgetArgument(t, 0);
      {
        ATerm f_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_16(t);
            ;
            LocalPopChoice(m_15);
          }
        else
          {
            t = f_15;
            t = b_16(t);
          }
      }
    }
  else
    {
      t = a_16(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL;
  ATerm l_17 (ATerm t)
  {
    ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL;
    t = not_null(o_16);
    if(((q_16 != NULL) && (q_16 != t)))
      _fail(t);
    else
      q_16 = t;
    t = not_null(p_16);
    if(((r_16 != NULL) && (r_16 != t)))
      _fail(t);
    else
      r_16 = t;
    t = not_null(m_16);
    if(((s_16 != NULL) && (s_16 != t)))
      _fail(t);
    else
      s_16 = t;
    t = not_null(n_16);
    {
      ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL;
      ATerm n_17 (ATerm t)
      {
        t = not_null(x_16);
        if(((t_16 != NULL) && (t_16 != t)))
          _fail(t);
        else
          t_16 = t;
        t = not_null(z_16);
        if(((u_16 != NULL) && (u_16 != t)))
          _fail(t);
        else
          u_16 = t;
        t = not_null(a_17);
        if(((v_16 != NULL) && (v_16 != t)))
          _fail(t);
        else
          v_16 = t;
        t = not_null(w_16);
        return(t);
      }
      t = not_null(s_16);
      {
        ATerm a_1 (ATerm t)
        {
          ATerm n_15 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_15;
            }
          return(t);
        }
        t = fetch_1_0(a_1, t);
        t = not_null(s_16);
        t = unzip_1_0(LiftPrimArg_0_0, t);
        {
          ATerm b_1 (ATerm t)
          {
            t = unzip_1_0(_id, t);
            return(t);
          }
          t = _2_0(concat_0_0, b_1, t);
          if(((w_16 != NULL) && (w_16 != t)))
            _fail(t);
          else
            w_16 = t;
          t = not_null(w_16);
          if(match_cons(t, sym__2))
            {
              x_16 = ATgetArgument(t, 0);
              y_16 = ATgetArgument(t, 1);
              t = not_null(y_16);
              if(match_cons(t, sym__2))
                {
                  z_16 = ATgetArgument(t, 0);
                  a_17 = ATgetArgument(t, 1);
                  t = n_17(t);
                }
              else
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
      t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_16), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(u_16)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(q_16), not_null(r_16), not_null(v_16))));
    }
    return(t);
  }
  ATerm m_17 (ATerm t)
  {
    ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
    t = not_null(o_16);
    if(((b_17 != NULL) && (b_17 != t)))
      _fail(t);
    else
      b_17 = t;
    t = not_null(p_16);
    if(((c_17 != NULL) && (c_17 != t)))
      _fail(t);
    else
      c_17 = t;
    t = not_null(n_16);
    {
      ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL;
      ATerm o_17 (ATerm t)
      {
        t = not_null(h_17);
        if(((d_17 != NULL) && (d_17 != t)))
          _fail(t);
        else
          d_17 = t;
        t = not_null(j_17);
        if(((e_17 != NULL) && (e_17 != t)))
          _fail(t);
        else
          e_17 = t;
        t = not_null(k_17);
        if(((f_17 != NULL) && (f_17 != t)))
          _fail(t);
        else
          f_17 = t;
        t = not_null(g_17);
        return(t);
      }
      t = not_null(c_17);
      {
        ATerm c_1 (ATerm t)
        {
          ATerm q_15 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_15;
            }
          return(t);
        }
        t = fetch_1_0(c_1, t);
        t = not_null(c_17);
        t = unzip_1_0(LiftPrimArg_0_0, t);
        {
          ATerm d_1 (ATerm t)
          {
            t = unzip_1_0(_id, t);
            return(t);
          }
          t = _2_0(concat_0_0, d_1, t);
          if(((g_17 != NULL) && (g_17 != t)))
            _fail(t);
          else
            g_17 = t;
          t = not_null(g_17);
          if(match_cons(t, sym__2))
            {
              h_17 = ATgetArgument(t, 0);
              i_17 = ATgetArgument(t, 1);
              t = not_null(i_17);
              if(match_cons(t, sym__2))
                {
                  j_17 = ATgetArgument(t, 0);
                  k_17 = ATgetArgument(t, 1);
                  t = o_17(t);
                }
              else
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
      t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_17), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(e_17)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(b_17), (ATerm)ATempty, not_null(f_17))));
    }
    return(t);
  }
  if(((n_16 != NULL) && (n_16 != t)))
    _fail(t);
  else
    n_16 = t;
  t = not_null(n_16);
  if(match_cons(t, sym_PrimT_3))
    {
      o_16 = ATgetArgument(t, 0);
      p_16 = ATgetArgument(t, 1);
      m_16 = ATgetArgument(t, 2);
      t = l_17(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          o_16 = ATgetArgument(t, 0);
          p_16 = ATgetArgument(t, 1);
          t = m_17(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Wld_0_0 (ATerm t)
{
  ATerm t_17 = NULL;
  ATerm z_17 (ATerm t)
  {
    ATerm u_17 = NULL,v_17 = NULL,x_17 = NULL;
    t = not_null(t_17);
    if(((u_17 != NULL) && (u_17 != t)))
      _fail(t);
    else
      u_17 = t;
    t = not_null(t_17);
    {
      ATerm r_15;
      r_15 = t;
      {
        ATerm w_17 = NULL;
        ATerm a_18 (ATerm t)
        {
          t = not_null(w_17);
          if(((v_17 != NULL) && (v_17 != t)))
            _fail(t);
          else
            v_17 = t;
          t = not_null(w_17);
          return(t);
        }
        t = SSLgetAnnotations(not_null(u_17));
        if(((w_17 != NULL) && (w_17 != t)))
          _fail(t);
        else
          w_17 = t;
        t = a_18(t);
      }
      t = r_15;
      {
        ATerm y_17 = NULL;
        ATerm b_18 (ATerm t)
        {
          t = not_null(y_17);
          if(((x_17 != NULL) && (x_17 != t)))
            _fail(t);
          else
            x_17 = t;
          t = not_null(y_17);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(v_17));
        if(((y_17 != NULL) && (y_17 != t)))
          _fail(t);
        else
          y_17 = t;
        t = b_18(t);
        t = not_null(x_17);
      }
    }
    return(t);
  }
  if(((t_17 != NULL) && (t_17 != t)))
    _fail(t);
  else
    t_17 = t;
  t = not_null(t_17);
  if(match_cons(t, sym_Wld_0))
    {
      t = z_17(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm s_15 = t;
  if((PushChoice() == 0))
    {
      ATerm e_1 (ATerm t)
      {
        ATerm t_15 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(d_16);
          }
        else
          {
            t = t_15;
            t = Wld_0_0(t);
          }
        return(t);
      }
      t = topdown_1_0(e_1, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_15;
    }
  return(t);
}
ATerm App_2_0 (ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
  ATerm w_18 (ATerm t)
  {
    ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,q_18 = NULL;
    ATerm y_18 (ATerm t)
    {
      ATerm r_18 = NULL,s_18 = NULL;
      ATerm z_18 (ATerm t)
      {
        ATerm t_18 = NULL,u_18 = NULL;
        t = not_null(s_18);
        if(((t_18 != NULL) && (t_18 != t)))
          _fail(t);
        else
          t_18 = t;
        t = not_null(s_18);
        {
          ATerm v_18 = NULL;
          ATerm a_19 (ATerm t)
          {
            t = not_null(v_18);
            if(((u_18 != NULL) && (u_18 != t)))
              _fail(t);
            else
              u_18 = t;
            t = not_null(v_18);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(r_18), not_null(t_18)), not_null(o_18));
          if(((v_18 != NULL) && (v_18 != t)))
            _fail(t);
          else
            v_18 = t;
          t = a_19(t);
          t = not_null(u_18);
        }
        return(t);
      }
      t = not_null(q_18);
      if(((r_18 != NULL) && (r_18 != t)))
        _fail(t);
      else
        r_18 = t;
      t = not_null(n_18);
      t = c_97(t);
      if(((s_18 != NULL) && (s_18 != t)))
        _fail(t);
      else
        s_18 = t;
      t = z_18(t);
      return(t);
    }
    t = not_null(i_18);
    if(((l_18 != NULL) && (l_18 != t)))
      _fail(t);
    else
      l_18 = t;
    t = not_null(j_18);
    if(((m_18 != NULL) && (m_18 != t)))
      _fail(t);
    else
      m_18 = t;
    t = not_null(k_18);
    if(((n_18 != NULL) && (n_18 != t)))
      _fail(t);
    else
      n_18 = t;
    t = not_null(i_18);
    {
      ATerm p_18 = NULL;
      ATerm x_18 (ATerm t)
      {
        t = not_null(p_18);
        if(((o_18 != NULL) && (o_18 != t)))
          _fail(t);
        else
          o_18 = t;
        t = not_null(p_18);
        return(t);
      }
      t = SSLgetAnnotations(not_null(l_18));
      if(((p_18 != NULL) && (p_18 != t)))
        _fail(t);
      else
        p_18 = t;
      t = x_18(t);
      t = not_null(m_18);
      t = b_97(t);
      if(((q_18 != NULL) && (q_18 != t)))
        _fail(t);
      else
        q_18 = t;
      t = y_18(t);
    }
    return(t);
  }
  if(((i_18 != NULL) && (i_18 != t)))
    _fail(t);
  else
    i_18 = t;
  t = not_null(i_18);
  if(match_cons(t, sym_App_2))
    {
      j_18 = ATgetArgument(t, 0);
      k_18 = ATgetArgument(t, 1);
      t = w_18(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Con_3_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  ATerm a_20 (ATerm t)
  {
    ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,s_19 = NULL;
    ATerm c_20 (ATerm t)
    {
      ATerm t_19 = NULL,u_19 = NULL;
      ATerm d_20 (ATerm t)
      {
        ATerm v_19 = NULL,w_19 = NULL;
        ATerm e_20 (ATerm t)
        {
          ATerm x_19 = NULL,y_19 = NULL;
          t = not_null(w_19);
          if(((x_19 != NULL) && (x_19 != t)))
            _fail(t);
          else
            x_19 = t;
          t = not_null(w_19);
          {
            ATerm z_19 = NULL;
            ATerm f_20 (ATerm t)
            {
              t = not_null(z_19);
              if(((y_19 != NULL) && (y_19 != t)))
                _fail(t);
              else
                y_19 = t;
              t = not_null(z_19);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(t_19), not_null(v_19), not_null(x_19)), not_null(q_19));
            if(((z_19 != NULL) && (z_19 != t)))
              _fail(t);
            else
              z_19 = t;
            t = f_20(t);
            t = not_null(y_19);
          }
          return(t);
        }
        t = not_null(u_19);
        if(((v_19 != NULL) && (v_19 != t)))
          _fail(t);
        else
          v_19 = t;
        t = not_null(p_19);
        t = p_97(t);
        if(((w_19 != NULL) && (w_19 != t)))
          _fail(t);
        else
          w_19 = t;
        t = e_20(t);
        return(t);
      }
      t = not_null(s_19);
      if(((t_19 != NULL) && (t_19 != t)))
        _fail(t);
      else
        t_19 = t;
      t = not_null(o_19);
      t = o_97(t);
      if(((u_19 != NULL) && (u_19 != t)))
        _fail(t);
      else
        u_19 = t;
      t = d_20(t);
      return(t);
    }
    t = not_null(i_19);
    if(((m_19 != NULL) && (m_19 != t)))
      _fail(t);
    else
      m_19 = t;
    t = not_null(j_19);
    if(((n_19 != NULL) && (n_19 != t)))
      _fail(t);
    else
      n_19 = t;
    t = not_null(k_19);
    if(((o_19 != NULL) && (o_19 != t)))
      _fail(t);
    else
      o_19 = t;
    t = not_null(l_19);
    if(((p_19 != NULL) && (p_19 != t)))
      _fail(t);
    else
      p_19 = t;
    t = not_null(i_19);
    {
      ATerm r_19 = NULL;
      ATerm b_20 (ATerm t)
      {
        t = not_null(r_19);
        if(((q_19 != NULL) && (q_19 != t)))
          _fail(t);
        else
          q_19 = t;
        t = not_null(r_19);
        return(t);
      }
      t = SSLgetAnnotations(not_null(m_19));
      if(((r_19 != NULL) && (r_19 != t)))
        _fail(t);
      else
        r_19 = t;
      t = b_20(t);
      t = not_null(n_19);
      t = n_97(t);
      if(((s_19 != NULL) && (s_19 != t)))
        _fail(t);
      else
        s_19 = t;
      t = c_20(t);
    }
    return(t);
  }
  if(((i_19 != NULL) && (i_19 != t)))
    _fail(t);
  else
    i_19 = t;
  t = not_null(i_19);
  if(match_cons(t, sym_Con_3))
    {
      j_19 = ATgetArgument(t, 0);
      k_19 = ATgetArgument(t, 1);
      l_19 = ATgetArgument(t, 2);
      t = a_20(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm e_16 = t;
  if((PushChoice() == 0))
    {
      ATerm f_1 (ATerm t)
      {
        ATerm f_16 = t;
        int g_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(g_16);
          }
        else
          {
            t = f_16;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(f_1, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_16;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL;
  ATerm v_20 (ATerm t)
  {
    ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
    t = not_null(m_20);
    if(((p_20 != NULL) && (p_20 != t)))
      _fail(t);
    else
      p_20 = t;
    t = not_null(n_20);
    if(((r_20 != NULL) && (r_20 != t)))
      _fail(t);
    else
      r_20 = t;
    t = not_null(o_20);
    if(((q_20 != NULL) && (q_20 != t)))
      _fail(t);
    else
      q_20 = t;
    t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(r_20)), (ATerm) ATmakeAppl(sym_Where_1, not_null(q_20))), not_null(p_20)));
    return(t);
  }
  ATerm w_20 (ATerm t)
  {
    ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
    t = not_null(m_20);
    if(((t_20 != NULL) && (t_20 != t)))
      _fail(t);
    else
      t_20 = t;
    t = not_null(n_20);
    if(((u_20 != NULL) && (u_20 != t)))
      _fail(t);
    else
      u_20 = t;
    t = not_null(o_20);
    if(((s_20 != NULL) && (s_20 != t)))
      _fail(t);
    else
      s_20 = t;
    t = not_null(k_20);
    t = not_null(t_20);
    t = pureterm_0_0(t);
    t = not_null(u_20);
    t = buildterm_0_0(t);
    t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(u_20))), (ATerm) ATmakeAppl(sym_Where_1, not_null(s_20))), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_20))));
    return(t);
  }
  if(((k_20 != NULL) && (k_20 != t)))
    _fail(t);
  else
    k_20 = t;
  t = not_null(k_20);
  if(match_cons(t, sym_SRule_1))
    {
      l_20 = ATgetArgument(t, 0);
      t = not_null(l_20);
      if(match_cons(t, sym_StratRule_3))
        {
          m_20 = ATgetArgument(t, 0);
          n_20 = ATgetArgument(t, 1);
          o_20 = ATgetArgument(t, 2);
          t = v_20(t);
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              m_20 = ATgetArgument(t, 0);
              n_20 = ATgetArgument(t, 1);
              o_20 = ATgetArgument(t, 2);
              t = w_20(t);
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
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
  ATerm s_22 (ATerm t)
  {
    ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
    t = not_null(o_21);
    if(((r_21 != NULL) && (r_21 != t)))
      _fail(t);
    else
      r_21 = t;
    t = not_null(p_21);
    if(((s_21 != NULL) && (s_21 != t)))
      _fail(t);
    else
      s_21 = t;
    t = not_null(q_21);
    if(((t_21 != NULL) && (t_21 != t)))
      _fail(t);
    else
      t_21 = t;
    t = not_null(m_21);
    {
      ATerm c_22 = NULL;
      ATerm t_22 (ATerm t)
      {
        ATerm i_22 = NULL;
        ATerm v_22 (ATerm t)
        {
          ATerm r_22 = NULL;
          ATerm x_22 (ATerm t)
          {
            t = not_null(r_22);
            if(((b_22 != NULL) && (b_22 != t)))
              _fail(t);
            else
              b_22 = t;
            t = not_null(r_22);
            return(t);
          }
          t = not_null(i_22);
          if(((a_22 != NULL) && (a_22 != t)))
            _fail(t);
          else
            a_22 = t;
          t = not_null(s_21);
          {
            ATerm g_1 (ATerm t)
            {
              ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
              ATerm w_22 (ATerm t)
              {
                t = not_null(l_22);
                if(((y_21 != NULL) && (y_21 != t)))
                  _fail(t);
                else
                  y_21 = t;
                t = not_null(m_22);
                if(((x_21 != NULL) && (x_21 != t)))
                  _fail(t);
                else
                  x_21 = t;
                t = not_null(o_22);
                if(((v_21 != NULL) && (v_21 != t)))
                  _fail(t);
                else
                  v_21 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_21));
                return(t);
              }
              if(((j_22 != NULL) && (j_22 != t)))
                _fail(t);
              else
                j_22 = t;
              t = not_null(j_22);
              if(match_cons(t, sym_Con_3))
                {
                  k_22 = ATgetArgument(t, 0);
                  m_22 = ATgetArgument(t, 1);
                  n_22 = ATgetArgument(t, 2);
                  t = not_null(k_22);
                  if(match_cons(t, sym_Var_1))
                    {
                      l_22 = ATgetArgument(t, 0);
                      t = not_null(n_22);
                      if(match_cons(t, sym_CallT_3))
                        {
                          o_22 = ATgetArgument(t, 0);
                          p_22 = ATgetArgument(t, 1);
                          q_22 = ATgetArgument(t, 2);
                          t = not_null(p_22);
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = not_null(q_22);
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = w_22(t);
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = oncetd_1_0(g_1, t);
            if(((r_22 != NULL) && (r_22 != t)))
              _fail(t);
            else
              r_22 = t;
            t = x_22(t);
          }
          return(t);
        }
        t = not_null(c_22);
        if(((z_21 != NULL) && (z_21 != t)))
          _fail(t);
        else
          z_21 = t;
        t = not_null(r_21);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL;
            ATerm u_22 (ATerm t)
            {
              t = not_null(f_22);
              if(((y_21 != NULL) && (y_21 != t)))
                _fail(t);
              else
                y_21 = t;
              t = not_null(g_22);
              if(((w_21 != NULL) && (w_21 != t)))
                _fail(t);
              else
                w_21 = t;
              t = not_null(h_22);
              if(((u_21 != NULL) && (u_21 != t)))
                _fail(t);
              else
                u_21 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_21));
              return(t);
            }
            if(((d_22 != NULL) && (d_22 != t)))
              _fail(t);
            else
              d_22 = t;
            t = not_null(d_22);
            if(match_cons(t, sym_Con_3))
              {
                e_22 = ATgetArgument(t, 0);
                g_22 = ATgetArgument(t, 1);
                h_22 = ATgetArgument(t, 2);
                t = not_null(e_22);
                if(match_cons(t, sym_Var_1))
                  {
                    f_22 = ATgetArgument(t, 0);
                    t = u_22(t);
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(h_1, t);
          if(((i_22 != NULL) && (i_22 != t)))
            _fail(t);
          else
            i_22 = t;
          t = v_22(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((c_22 != NULL) && (c_22 != t)))
        _fail(t);
      else
        c_22 = t;
      t = t_22(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_21)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(a_22), not_null(b_22), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_21), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(v_21), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(w_21), not_null(x_21), term_e_15))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_21)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_21)))))));
    }
    return(t);
  }
  if(((m_21 != NULL) && (m_21 != t)))
    _fail(t);
  else
    m_21 = t;
  t = not_null(m_21);
  if(match_cons(t, sym_SRule_1))
    {
      n_21 = ATgetArgument(t, 0);
      t = not_null(n_21);
      if(match_cons(t, sym_Rule_3))
        {
          o_21 = ATgetArgument(t, 0);
          p_21 = ATgetArgument(t, 1);
          q_21 = ATgetArgument(t, 2);
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
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm h_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0_0(t);
        t = desugarRule_0_0(t);
        ;
        LocalPopChoice(i_16);
      }
    else
      {
        t = h_16;
        {
          ATerm j_16 = t;
          int k_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2_0(_id, desugarRule_0_0, t);
              ;
              LocalPopChoice(k_16);
            }
          else
            {
              t = j_16;
              t = RtoS_0_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1_0(i_1, t);
  return(t);
}
ATerm topdown_1_0 (ATerm p_110 (ATerm), ATerm t)
{
  t = p_110(t);
  {
    ATerm j_1 (ATerm t)
    {
      t = topdown_1_0(p_110, t);
      return(t);
    }
    t = SRTS_all(j_1, t);
  }
  return(t);
}
ATerm desugar_0_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    t = try_1_0(desugarRule_0_0, t);
    {
      ATerm l_1 (ATerm t)
      {
        ATerm l_16 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(p_17);
          }
        else
          {
            t = l_16;
            {
              ATerm q_17 = t;
              int r_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(r_17);
                }
              else
                {
                  t = q_17;
                  {
                    ATerm s_17 = t;
                    int c_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(c_18);
                      }
                    else
                      {
                        t = s_17;
                        {
                          ATerm d_18 = t;
                          int e_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0_0(t);
                              ;
                              LocalPopChoice(e_18);
                            }
                          else
                            {
                              t = d_18;
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
      t = repeat_1_0(l_1, t);
    }
    return(t);
  }
  t = topdown_1_0(k_1, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm t_111 (ATerm), ATerm t)
{
  ATerm z_22 (ATerm t)
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_111(t);
        ;
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        t = SRTS_one(z_22, t);
      }
    return(t);
  }
  t = z_22(t);
  return(t);
}
ATerm UnMark_0_0 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL;
  ATerm l_23 (ATerm t)
  {
    t = term_e_15;
    return(t);
  }
  if(((g_23 != NULL) && (g_23 != t)))
    _fail(t);
  else
    g_23 = t;
  t = not_null(g_23);
  if(match_cons(t, sym_CallT_3))
    {
      h_23 = ATgetArgument(t, 0);
      j_23 = ATgetArgument(t, 1);
      k_23 = ATgetArgument(t, 2);
      t = not_null(h_23);
      if(match_cons(t, sym_SVar_1))
        {
          i_23 = ATgetArgument(t, 0);
          t = not_null(i_23);
          if(match_string(t, "mark"))
            {
              t = not_null(j_23);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = not_null(k_23);
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = l_23(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL;
  ATerm j_26 (ATerm t)
  {
    ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
    t = not_null(n_24);
    if(((b_25 != NULL) && (b_25 != t)))
      _fail(t);
    else
      b_25 = t;
    t = not_null(v_24);
    if(((c_25 != NULL) && (c_25 != t)))
      _fail(t);
    else
      c_25 = t;
    t = not_null(y_24);
    if(((d_25 != NULL) && (d_25 != t)))
      _fail(t);
    else
      d_25 = t;
    t = not_null(a_25);
    if(((e_25 != NULL) && (e_25 != t)))
      _fail(t);
    else
      e_25 = t;
    t = not_null(n_24);
    {
      ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
      ATerm l_26 (ATerm t)
      {
        ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
        ATerm m_26 (ATerm t)
        {
          t = not_null(m_25);
          if(((g_25 != NULL) && (g_25 != t)))
            _fail(t);
          else
            g_25 = t;
          t = not_null(n_25);
          if(((h_25 != NULL) && (h_25 != t)))
            _fail(t);
          else
            h_25 = t;
          t = not_null(l_25);
          return(t);
        }
        t = not_null(k_25);
        if(((f_25 != NULL) && (f_25 != t)))
          _fail(t);
        else
          f_25 = t;
        t = (ATerm) ATmakeAppl(sym__3, not_null(f_25), not_null(c_25), (ATerm) ATmakeAppl(sym__2, not_null(d_25), not_null(e_25)));
        t = replace_application_0_0(t);
        if(((l_25 != NULL) && (l_25 != t)))
          _fail(t);
        else
          l_25 = t;
        t = not_null(l_25);
        if(match_cons(t, sym__2))
          {
            m_25 = ATgetArgument(t, 0);
            n_25 = ATgetArgument(t, 1);
            t = m_26(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = term_g_20;
      {
        ATerm m_1 (ATerm t)
        {
          t = term_h_20;
          return(t);
        }
        t = rewrite_1_0(m_1, t);
        if(((i_25 != NULL) && (i_25 != t)))
          _fail(t);
        else
          i_25 = t;
        t = not_null(i_25);
        if(match_cons(t, sym_Defined_2))
          {
            j_25 = ATgetArgument(t, 0);
            k_25 = ATgetArgument(t, 1);
            t = not_null(j_25);
            if(match_string(t, "s_0"))
              {
                t = l_26(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(g_25)), (ATerm) ATmakeAppl(sym_Build_1, not_null(h_25))));
    }
    return(t);
  }
  ATerm k_26 (ATerm t)
  {
    ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
    t = not_null(n_24);
    if(((o_25 != NULL) && (o_25 != t)))
      _fail(t);
    else
      o_25 = t;
    t = not_null(v_24);
    if(((p_25 != NULL) && (p_25 != t)))
      _fail(t);
    else
      p_25 = t;
    t = not_null(y_24);
    if(((q_25 != NULL) && (q_25 != t)))
      _fail(t);
    else
      q_25 = t;
    t = not_null(a_25);
    if(((r_25 != NULL) && (r_25 != t)))
      _fail(t);
    else
      r_25 = t;
    t = not_null(n_24);
    {
      ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL;
      ATerm n_26 (ATerm t)
      {
        ATerm a_26 = NULL;
        ATerm o_26 (ATerm t)
        {
          ATerm b_26 = NULL;
          ATerm p_26 (ATerm t)
          {
            t = not_null(b_26);
            if(((t_25 != NULL) && (t_25 != t)))
              _fail(t);
            else
              t_25 = t;
            t = not_null(b_26);
            {
              ATerm n_1 (ATerm t)
              {
                t = term_i_20;
                return(t);
              }
              ATerm o_1 (ATerm t)
              {
                ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
                ATerm s_26 (ATerm t)
                {
                  t = not_null(h_26);
                  if(((v_25 != NULL) && (v_25 != t)))
                    _fail(t);
                  else
                    v_25 = t;
                  t = not_null(i_26);
                  if(((w_25 != NULL) && (w_25 != t)))
                    _fail(t);
                  else
                    w_25 = t;
                  t = not_null(g_26);
                  return(t);
                }
                ATerm p_1 (ATerm t)
                {
                  ATerm c_26 = NULL,e_26 = NULL;
                  ATerm r_26 (ATerm t)
                  {
                    ATerm f_26 = NULL;
                    t = not_null(e_26);
                    if(((f_26 != NULL) && (f_26 != t)))
                      _fail(t);
                    else
                      f_26 = t;
                    t = not_null(e_26);
                    {
                      ATerm j_20;
                      j_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(u_25), not_null(f_26)), term_y_20);
                      {
                        ATerm q_1 (ATerm t)
                        {
                          t = term_i_20;
                          return(t);
                        }
                        t = assert_1_0(q_1, t);
                      }
                      t = j_20;
                    }
                    return(t);
                  }
                  ATerm d_26 = NULL;
                  ATerm q_26 (ATerm t)
                  {
                    t = not_null(d_26);
                    if(((c_26 != NULL) && (c_26 != t)))
                      _fail(t);
                    else
                      c_26 = t;
                    t = not_null(d_26);
                    return(t);
                  }
                  if(((d_26 != NULL) && (d_26 != t)))
                    _fail(t);
                  else
                    d_26 = t;
                  t = q_26(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_26));
                  if(((e_26 != NULL) && (e_26 != t)))
                    _fail(t);
                  else
                    e_26 = t;
                  t = r_26(t);
                  return(t);
                }
                t = map_1_0(p_1, t);
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_25), not_null(r_25));
                t = alltd_1_0(Replace_0_0, t);
                if(((g_26 != NULL) && (g_26 != t)))
                  _fail(t);
                else
                  g_26 = t;
                t = not_null(g_26);
                if(match_cons(t, sym__2))
                  {
                    h_26 = ATgetArgument(t, 0);
                    i_26 = ATgetArgument(t, 1);
                    t = s_26(t);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = scope_2_0(n_1, o_1, t);
            }
            return(t);
          }
          t = not_null(a_26);
          if(((u_25 != NULL) && (u_25 != t)))
            _fail(t);
          else
            u_25 = t;
          t = not_null(p_25);
          t = tvars_0_0(t);
          if(((b_26 != NULL) && (b_26 != t)))
            _fail(t);
          else
            b_26 = t;
          t = p_26(t);
          return(t);
        }
        t = not_null(z_25);
        if(((s_25 != NULL) && (s_25 != t)))
          _fail(t);
        else
          s_25 = t;
        t = not_null(s_25);
        if(((a_26 != NULL) && (a_26 != t)))
          _fail(t);
        else
          a_26 = t;
        t = o_26(t);
        return(t);
      }
      t = term_g_20;
      {
        ATerm r_1 (ATerm t)
        {
          t = term_h_20;
          return(t);
        }
        t = rewrite_1_0(r_1, t);
        if(((x_25 != NULL) && (x_25 != t)))
          _fail(t);
        else
          x_25 = t;
        t = not_null(x_25);
        if(match_cons(t, sym_Defined_2))
          {
            y_25 = ATgetArgument(t, 0);
            z_25 = ATgetArgument(t, 1);
            t = not_null(y_25);
            if(match_string(t, "h_0"))
              {
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
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(v_25)), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_25))));
    }
    return(t);
  }
  if(((n_24 != NULL) && (n_24 != t)))
    _fail(t);
  else
    n_24 = t;
  t = not_null(n_24);
  if(match_cons(t, sym_Seq_2))
    {
      o_24 = ATgetArgument(t, 0);
      t_24 = ATgetArgument(t, 1);
      t = not_null(o_24);
      if(match_cons(t, sym_CallT_3))
        {
          p_24 = ATgetArgument(t, 0);
          r_24 = ATgetArgument(t, 1);
          s_24 = ATgetArgument(t, 2);
          t = not_null(p_24);
          if(match_cons(t, sym_SVar_1))
            {
              q_24 = ATgetArgument(t, 0);
              t = not_null(q_24);
              if(match_string(t, "mark"))
                {
                  t = not_null(r_24);
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = not_null(s_24);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = not_null(t_24);
                          if(match_cons(t, sym_Seq_2))
                            {
                              u_24 = ATgetArgument(t, 0);
                              w_24 = ATgetArgument(t, 1);
                              t = not_null(u_24);
                              if(match_cons(t, sym_Match_1))
                                {
                                  v_24 = ATgetArgument(t, 0);
                                  t = not_null(w_24);
                                  if(match_cons(t, sym_Seq_2))
                                    {
                                      x_24 = ATgetArgument(t, 0);
                                      z_24 = ATgetArgument(t, 1);
                                      t = not_null(x_24);
                                      if(match_cons(t, sym_Where_1))
                                        {
                                          y_24 = ATgetArgument(t, 0);
                                          t = not_null(z_24);
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              a_25 = ATgetArgument(t, 0);
                                              {
                                                ATerm z_20 = t;
                                                int a_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = j_26(t);
                                                    ;
                                                    LocalPopChoice(a_21);
                                                  }
                                                else
                                                  {
                                                    t = z_20;
                                                    t = k_26(t);
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
ATerm Replace_0_0 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL;
  ATerm x_27 (ATerm t)
  {
    ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
    t = not_null(f_27);
    if(((k_27 != NULL) && (k_27 != t)))
      _fail(t);
    else
      k_27 = t;
    t = not_null(g_27);
    if(((i_27 != NULL) && (i_27 != t)))
      _fail(t);
    else
      i_27 = t;
    t = not_null(e_27);
    if(((j_27 != NULL) && (j_27 != t)))
      _fail(t);
    else
      j_27 = t;
    t = not_null(f_27);
    {
      ATerm l_27 = NULL,m_27 = NULL;
      t = not_null(k_27);
      {
        ATerm s_1 (ATerm t)
        {
          t = term_i_20;
          return(t);
        }
        t = rewrite_1_0(s_1, t);
        if(((l_27 != NULL) && (l_27 != t)))
          _fail(t);
        else
          l_27 = t;
        t = not_null(l_27);
        if(match_cons(t, sym_Defined_1))
          {
            m_27 = ATgetArgument(t, 0);
            t = not_null(m_27);
            if(match_string(t, "v_0"))
              {
                t = not_null(l_27);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_27));
    }
    return(t);
  }
  ATerm y_27 (ATerm t)
  {
    ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
    t = not_null(f_27);
    if(((p_27 != NULL) && (p_27 != t)))
      _fail(t);
    else
      p_27 = t;
    t = not_null(g_27);
    if(((n_27 != NULL) && (n_27 != t)))
      _fail(t);
    else
      n_27 = t;
    t = not_null(h_27);
    if(((o_27 != NULL) && (o_27 != t)))
      _fail(t);
    else
      o_27 = t;
    t = not_null(f_27);
    {
      ATerm q_27 = NULL,r_27 = NULL;
      t = not_null(p_27);
      {
        ATerm t_1 (ATerm t)
        {
          t = term_i_20;
          return(t);
        }
        t = rewrite_1_0(t_1, t);
        if(((q_27 != NULL) && (q_27 != t)))
          _fail(t);
        else
          q_27 = t;
        t = not_null(q_27);
        if(match_cons(t, sym_Defined_1))
          {
            r_27 = ATgetArgument(t, 0);
            t = not_null(r_27);
            if(match_string(t, "m_0"))
              {
                t = not_null(q_27);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(o_27);
    }
    return(t);
  }
  ATerm z_27 (ATerm t)
  {
    ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
    t = not_null(f_27);
    if(((u_27 != NULL) && (u_27 != t)))
      _fail(t);
    else
      u_27 = t;
    t = not_null(g_27);
    if(((s_27 != NULL) && (s_27 != t)))
      _fail(t);
    else
      s_27 = t;
    t = not_null(h_27);
    if(((t_27 != NULL) && (t_27 != t)))
      _fail(t);
    else
      t_27 = t;
    t = not_null(f_27);
    {
      ATerm v_27 = NULL,w_27 = NULL;
      t = not_null(u_27);
      {
        ATerm u_1 (ATerm t)
        {
          t = term_i_20;
          return(t);
        }
        t = rewrite_1_0(u_1, t);
        if(((v_27 != NULL) && (v_27 != t)))
          _fail(t);
        else
          v_27 = t;
        t = not_null(v_27);
        if(match_cons(t, sym_Defined_1))
          {
            w_27 = ATgetArgument(t, 0);
            t = not_null(w_27);
            if(match_string(t, "j_0"))
              {
                t = not_null(v_27);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = not_null(t_27);
    }
    return(t);
  }
  if(((f_27 != NULL) && (f_27 != t)))
    _fail(t);
  else
    f_27 = t;
  t = not_null(f_27);
  if(match_cons(t, sym_App_2))
    {
      g_27 = ATgetArgument(t, 0);
      h_27 = ATgetArgument(t, 1);
      t = not_null(h_27);
      if(match_cons(t, sym_Var_1))
        {
          e_27 = ATgetArgument(t, 0);
          {
            ATerm b_21 = t;
            int c_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = x_27(t);
                ;
                LocalPopChoice(c_21);
              }
            else
              {
                t = b_21;
                {
                  ATerm d_21 = t;
                  int e_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = y_27(t);
                      ;
                      LocalPopChoice(e_21);
                    }
                  else
                    {
                      t = d_21;
                      t = z_27(t);
                    }
                }
              }
          }
        }
      else
        {
          ATerm f_21 = t;
          int g_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_27(t);
              ;
              LocalPopChoice(g_21);
            }
          else
            {
              t = f_21;
              t = z_27(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
  ATerm g_28 (ATerm t)
  {
    ATerm f_28 = NULL;
    t = not_null(e_28);
    if(((f_28 != NULL) && (f_28 != t)))
      _fail(t);
    else
      f_28 = t;
    t = not_null(f_28);
    return(t);
  }
  if(((c_28 != NULL) && (c_28 != t)))
    _fail(t);
  else
    c_28 = t;
  t = not_null(c_28);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_28 = ATgetFirst((ATermList) t);
      e_28 = (ATerm) ATgetNext((ATermList) t);
      t = g_28(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
  ATerm r_28 (ATerm t)
  {
    ATerm n_28 = NULL,o_28 = NULL;
    t = not_null(l_28);
    if(((n_28 != NULL) && (n_28 != t)))
      _fail(t);
    else
      n_28 = t;
    t = not_null(m_28);
    if(((o_28 != NULL) && (o_28 != t)))
      _fail(t);
    else
      o_28 = t;
    t = not_null(k_28);
    {
      ATerm h_21;
      h_21 = t;
      {
        ATerm p_28 = NULL;
        ATerm q_28 = NULL;
        ATerm s_28 (ATerm t)
        {
          t = not_null(q_28);
          if(((p_28 != NULL) && (p_28 != t)))
            _fail(t);
          else
            p_28 = t;
          t = not_null(q_28);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_28), not_null(o_28));
        {
          ATerm i_21 = t;
          int j_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              t = Tl_0_0(t);
              ;
              LocalPopChoice(j_21);
            }
          else
            {
              t = i_21;
              t = (ATerm) ATempty;
            }
          if(((q_28 != NULL) && (q_28 != t)))
            _fail(t);
          else
            q_28 = t;
          t = s_28(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(n_28), not_null(o_28), not_null(p_28));
        t = table_put_0_0(t);
      }
      t = h_21;
    }
    return(t);
  }
  if(((k_28 != NULL) && (k_28 != t)))
    _fail(t);
  else
    k_28 = t;
  t = not_null(k_28);
  if(match_cons(t, sym__2))
    {
      l_28 = ATgetArgument(t, 0);
      m_28 = ATgetArgument(t, 1);
      t = r_28(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1_0 (ATerm x_122 (ATerm), ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
  ATerm k_21;
  k_21 = t;
  {
    ATerm a_29 = NULL;
    ATerm g_29 (ATerm t)
    {
      ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
      ATerm h_29 (ATerm t)
      {
        t = not_null(c_29);
        if(((y_28 != NULL) && (y_28 != t)))
          _fail(t);
        else
          y_28 = t;
        t = not_null(d_29);
        if(((x_28 != NULL) && (x_28 != t)))
          _fail(t);
        else
          x_28 = t;
        t = (ATerm) ATmakeAppl(sym__3, not_null(z_28), term_l_21, not_null(x_28));
        t = table_put_0_0(t);
        t = not_null(y_28);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm e_29 = NULL;
            ATerm i_29 (ATerm t)
            {
              ATerm f_29 = NULL;
              t = not_null(e_29);
              if(((f_29 != NULL) && (f_29 != t)))
                _fail(t);
              else
                f_29 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_28), not_null(f_29));
              t = table_pop_0_0(t);
              return(t);
            }
            if(((e_29 != NULL) && (e_29 != t)))
              _fail(t);
            else
              e_29 = t;
            t = i_29(t);
            return(t);
          }
          t = map_1_0(v_1, t);
        }
        return(t);
      }
      t = not_null(a_29);
      if(((z_28 != NULL) && (z_28 != t)))
        _fail(t);
      else
        z_28 = t;
      t = not_null(a_29);
      {
        ATerm y_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_28), term_l_21);
            t = table_get_0_0(t);
            ;
            LocalPopChoice(a_23);
          }
        else
          {
            t = y_22;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((b_29 != NULL) && (b_29 != t)))
          _fail(t);
        else
          b_29 = t;
        t = not_null(b_29);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_29 = ATgetFirst((ATermList) t);
            d_29 = (ATerm) ATgetNext((ATermList) t);
            t = h_29(t);
          }
        else
          {
            _fail(t);
          }
      }
      return(t);
    }
    t = x_122(t);
    if(((a_29 != NULL) && (a_29 != t)))
      _fail(t);
    else
      a_29 = t;
    t = g_29(t);
  }
  t = k_21;
  return(t);
}
ATerm restore_always_2_0 (ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm t)
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_113(t);
      t = x_113(t);
      ;
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      t = x_113(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm w_122 (ATerm), ATerm t)
{
  ATerm l_29 = NULL;
  ATerm d_23;
  d_23 = t;
  {
    ATerm m_29 = NULL;
    ATerm p_29 (ATerm t)
    {
      ATerm n_29 = NULL;
      t = not_null(m_29);
      if(((l_29 != NULL) && (l_29 != t)))
        _fail(t);
      else
        l_29 = t;
      t = not_null(m_29);
      {
        ATerm o_29 = NULL;
        ATerm q_29 (ATerm t)
        {
          t = not_null(o_29);
          if(((n_29 != NULL) && (n_29 != t)))
            _fail(t);
          else
            n_29 = t;
          t = not_null(o_29);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_29), term_l_21);
        {
          ATerm e_23 = t;
          int f_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(f_23);
            }
          else
            {
              t = e_23;
              t = (ATerm) ATempty;
            }
          if(((o_29 != NULL) && (o_29 != t)))
            _fail(t);
          else
            o_29 = t;
          t = q_29(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(l_29), term_l_21, (ATerm) ATinsert(CheckATermList(not_null(n_29)), (ATerm) ATempty));
        t = table_put_0_0(t);
      }
      return(t);
    }
    t = w_122(t);
    if(((m_29 != NULL) && (m_29 != t)))
      _fail(t);
    else
      m_29 = t;
    t = p_29(t);
  }
  t = d_23;
  return(t);
}
ATerm scope_2_0 (ATerm y_122 (ATerm), ATerm z_122 (ATerm), ATerm t)
{
  t = begin_scope_1_0(y_122, t);
  {
    ATerm w_1 (ATerm t)
    {
      t = end_scope_1_0(y_122, t);
      return(t);
    }
    t = restore_always_2_0(z_122, w_1, t);
  }
  return(t);
}
ATerm replace_application_0_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL;
  ATerm g_30 (ATerm t)
  {
    ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL;
    t = not_null(w_29);
    if(((z_29 != NULL) && (z_29 != t)))
      _fail(t);
    else
      z_29 = t;
    t = not_null(x_29);
    if(((a_30 != NULL) && (a_30 != t)))
      _fail(t);
    else
      a_30 = t;
    t = not_null(y_29);
    if(((b_30 != NULL) && (b_30 != t)))
      _fail(t);
    else
      b_30 = t;
    t = not_null(v_29);
    {
      ATerm x_1 (ATerm t)
      {
        t = term_i_20;
        return(t);
      }
      ATerm y_1 (ATerm t)
      {
        ATerm f_30 = NULL;
        ATerm i_30 (ATerm t)
        {
          t = not_null(f_30);
          if(((c_30 != NULL) && (c_30 != t)))
            _fail(t);
          else
            c_30 = t;
          t = not_null(f_30);
          return(t);
        }
        t = not_null(a_30);
        t = tvars_0_0(t);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm d_30 = NULL;
            ATerm h_30 (ATerm t)
            {
              ATerm e_30 = NULL;
              t = not_null(d_30);
              if(((e_30 != NULL) && (e_30 != t)))
                _fail(t);
              else
                e_30 = t;
              t = not_null(d_30);
              {
                ATerm m_23;
                m_23 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(z_29), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_30))), term_o_23);
                {
                  ATerm a_2 (ATerm t)
                  {
                    t = term_i_20;
                    return(t);
                  }
                  t = assert_1_0(a_2, t);
                }
                t = m_23;
              }
              return(t);
            }
            if(((d_30 != NULL) && (d_30 != t)))
              _fail(t);
            else
              d_30 = t;
            t = h_30(t);
            return(t);
          }
          t = map_1_0(z_1, t);
          t = not_null(b_30);
          t = alltd_1_0(Replace_0_0, t);
          if(((f_30 != NULL) && (f_30 != t)))
            _fail(t);
          else
            f_30 = t;
          t = i_30(t);
        }
        return(t);
      }
      t = scope_2_0(x_1, y_1, t);
      t = not_null(c_30);
    }
    return(t);
  }
  if(((v_29 != NULL) && (v_29 != t)))
    _fail(t);
  else
    v_29 = t;
  t = not_null(v_29);
  if(match_cons(t, sym__3))
    {
      w_29 = ATgetArgument(t, 0);
      x_29 = ATgetArgument(t, 1);
      y_29 = ATgetArgument(t, 2);
      t = g_30(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL;
  ATerm r_32 (ATerm t)
  {
    ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
    t = not_null(g_31);
    if(((r_31 != NULL) && (r_31 != t)))
      _fail(t);
    else
      r_31 = t;
    t = not_null(o_31);
    if(((s_31 != NULL) && (s_31 != t)))
      _fail(t);
    else
      s_31 = t;
    t = not_null(q_31);
    if(((t_31 != NULL) && (t_31 != t)))
      _fail(t);
    else
      t_31 = t;
    t = not_null(g_31);
    {
      ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
      ATerm t_32 (ATerm t)
      {
        ATerm z_31 = NULL;
        ATerm u_32 (ATerm t)
        {
          t = not_null(z_31);
          if(((v_31 != NULL) && (v_31 != t)))
            _fail(t);
          else
            v_31 = t;
          t = not_null(z_31);
          return(t);
        }
        t = not_null(y_31);
        if(((u_31 != NULL) && (u_31 != t)))
          _fail(t);
        else
          u_31 = t;
        t = (ATerm) ATmakeAppl(sym__3, not_null(u_31), not_null(s_31), not_null(t_31));
        t = replace_application_0_0(t);
        if(((z_31 != NULL) && (z_31 != t)))
          _fail(t);
        else
          z_31 = t;
        t = u_32(t);
        return(t);
      }
      t = term_q_23;
      {
        ATerm c_2 (ATerm t)
        {
          t = term_r_23;
          return(t);
        }
        t = rewrite_1_0(c_2, t);
        if(((w_31 != NULL) && (w_31 != t)))
          _fail(t);
        else
          w_31 = t;
        t = not_null(w_31);
        if(match_cons(t, sym_Defined_2))
          {
            x_31 = ATgetArgument(t, 0);
            y_31 = ATgetArgument(t, 1);
            t = not_null(x_31);
            if(match_string(t, "p_0"))
              {
                t = t_32(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(s_31)), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_31)));
    }
    return(t);
  }
  ATerm s_32 (ATerm t)
  {
    ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL;
    t = not_null(g_31);
    if(((a_32 != NULL) && (a_32 != t)))
      _fail(t);
    else
      a_32 = t;
    t = not_null(o_31);
    if(((b_32 != NULL) && (b_32 != t)))
      _fail(t);
    else
      b_32 = t;
    t = not_null(q_31);
    if(((c_32 != NULL) && (c_32 != t)))
      _fail(t);
    else
      c_32 = t;
    t = not_null(g_31);
    {
      ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
      ATerm v_32 (ATerm t)
      {
        ATerm k_32 = NULL;
        ATerm w_32 (ATerm t)
        {
          ATerm l_32 = NULL;
          ATerm x_32 (ATerm t)
          {
            t = not_null(l_32);
            if(((e_32 != NULL) && (e_32 != t)))
              _fail(t);
            else
              e_32 = t;
            t = not_null(l_32);
            {
              ATerm e_2 (ATerm t)
              {
                t = term_i_20;
                return(t);
              }
              ATerm f_2 (ATerm t)
              {
                ATerm q_32 = NULL;
                ATerm a_33 (ATerm t)
                {
                  t = not_null(q_32);
                  if(((g_32 != NULL) && (g_32 != t)))
                    _fail(t);
                  else
                    g_32 = t;
                  t = not_null(q_32);
                  return(t);
                }
                ATerm g_2 (ATerm t)
                {
                  ATerm m_32 = NULL,o_32 = NULL;
                  ATerm z_32 (ATerm t)
                  {
                    ATerm p_32 = NULL;
                    t = not_null(o_32);
                    if(((p_32 != NULL) && (p_32 != t)))
                      _fail(t);
                    else
                      p_32 = t;
                    t = not_null(o_32);
                    {
                      ATerm s_23;
                      s_23 = t;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(f_32), not_null(p_32)), term_u_23);
                      {
                        ATerm h_2 (ATerm t)
                        {
                          t = term_i_20;
                          return(t);
                        }
                        t = assert_1_0(h_2, t);
                      }
                      t = s_23;
                    }
                    return(t);
                  }
                  ATerm n_32 = NULL;
                  ATerm y_32 (ATerm t)
                  {
                    t = not_null(n_32);
                    if(((m_32 != NULL) && (m_32 != t)))
                      _fail(t);
                    else
                      m_32 = t;
                    t = not_null(n_32);
                    return(t);
                  }
                  if(((n_32 != NULL) && (n_32 != t)))
                    _fail(t);
                  else
                    n_32 = t;
                  t = y_32(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_32));
                  if(((o_32 != NULL) && (o_32 != t)))
                    _fail(t);
                  else
                    o_32 = t;
                  t = z_32(t);
                  return(t);
                }
                t = map_1_0(g_2, t);
                t = not_null(c_32);
                t = alltd_1_0(Replace_0_0, t);
                if(((q_32 != NULL) && (q_32 != t)))
                  _fail(t);
                else
                  q_32 = t;
                t = a_33(t);
                return(t);
              }
              t = scope_2_0(e_2, f_2, t);
            }
            return(t);
          }
          t = not_null(k_32);
          if(((f_32 != NULL) && (f_32 != t)))
            _fail(t);
          else
            f_32 = t;
          t = not_null(b_32);
          t = tvars_0_0(t);
          if(((l_32 != NULL) && (l_32 != t)))
            _fail(t);
          else
            l_32 = t;
          t = x_32(t);
          return(t);
        }
        t = not_null(j_32);
        if(((d_32 != NULL) && (d_32 != t)))
          _fail(t);
        else
          d_32 = t;
        t = not_null(d_32);
        if(((k_32 != NULL) && (k_32 != t)))
          _fail(t);
        else
          k_32 = t;
        t = w_32(t);
        return(t);
      }
      t = term_q_23;
      {
        ATerm i_2 (ATerm t)
        {
          t = term_r_23;
          return(t);
        }
        t = rewrite_1_0(i_2, t);
        if(((h_32 != NULL) && (h_32 != t)))
          _fail(t);
        else
          h_32 = t;
        t = not_null(h_32);
        if(match_cons(t, sym_Defined_2))
          {
            i_32 = ATgetArgument(t, 0);
            j_32 = ATgetArgument(t, 1);
            t = not_null(i_32);
            if(match_string(t, "f_0"))
              {
                t = v_32(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(b_32)), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_32)));
    }
    return(t);
  }
  if(((g_31 != NULL) && (g_31 != t)))
    _fail(t);
  else
    g_31 = t;
  t = not_null(g_31);
  if(match_cons(t, sym_Seq_2))
    {
      h_31 = ATgetArgument(t, 0);
      m_31 = ATgetArgument(t, 1);
      t = not_null(h_31);
      if(match_cons(t, sym_CallT_3))
        {
          i_31 = ATgetArgument(t, 0);
          k_31 = ATgetArgument(t, 1);
          l_31 = ATgetArgument(t, 2);
          t = not_null(i_31);
          if(match_cons(t, sym_SVar_1))
            {
              j_31 = ATgetArgument(t, 0);
              t = not_null(j_31);
              if(match_string(t, "mark"))
                {
                  t = not_null(k_31);
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = not_null(l_31);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = not_null(m_31);
                          if(match_cons(t, sym_Seq_2))
                            {
                              n_31 = ATgetArgument(t, 0);
                              p_31 = ATgetArgument(t, 1);
                              t = not_null(n_31);
                              if(match_cons(t, sym_Match_1))
                                {
                                  o_31 = ATgetArgument(t, 0);
                                  t = not_null(p_31);
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      q_31 = ATgetArgument(t, 0);
                                      {
                                        ATerm v_23 = t;
                                        int w_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = r_32(t);
                                            ;
                                            LocalPopChoice(w_23);
                                          }
                                        else
                                          {
                                            t = v_23;
                                            t = s_32(t);
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
ATerm BottomupOverConstructor_0_0 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL;
  ATerm e_34 (ATerm t)
  {
    ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL;
    t = not_null(r_33);
    if(((x_33 != NULL) && (x_33 != t)))
      _fail(t);
    else
      x_33 = t;
    t = not_null(v_33);
    if(((y_33 != NULL) && (y_33 != t)))
      _fail(t);
    else
      y_33 = t;
    t = not_null(w_33);
    if(((z_33 != NULL) && (z_33 != t)))
      _fail(t);
    else
      z_33 = t;
    t = not_null(m_33);
    {
      ATerm d_34 = NULL;
      ATerm g_34 (ATerm t)
      {
        t = not_null(d_34);
        if(((a_34 != NULL) && (a_34 != t)))
          _fail(t);
        else
          a_34 = t;
        t = not_null(d_34);
        return(t);
      }
      t = not_null(z_33);
      {
        ATerm j_2 (ATerm t)
        {
          ATerm b_34 = NULL;
          ATerm f_34 (ATerm t)
          {
            ATerm c_34 = NULL;
            t = not_null(b_34);
            if(((c_34 != NULL) && (c_34 != t)))
              _fail(t);
            else
              c_34 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_y_23, (ATerm)ATinsert(ATempty, not_null(x_33)), (ATerm) ATempty), not_null(c_34));
            return(t);
          }
          if(((b_34 != NULL) && (b_34 != t)))
            _fail(t);
          else
            b_34 = t;
          t = f_34(t);
          return(t);
        }
        t = map_1_0(j_2, t);
        if(((d_34 != NULL) && (d_34 != t)))
          _fail(t);
        else
          d_34 = t;
        t = g_34(t);
      }
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(x_33), (ATerm) ATmakeAppl(sym_Op_2, not_null(y_33), not_null(a_34)));
    }
    return(t);
  }
  if(((m_33 != NULL) && (m_33 != t)))
    _fail(t);
  else
    m_33 = t;
  t = not_null(m_33);
  if(match_cons(t, sym_App_2))
    {
      n_33 = ATgetArgument(t, 0);
      u_33 = ATgetArgument(t, 1);
      t = not_null(n_33);
      if(match_cons(t, sym_CallT_3))
        {
          o_33 = ATgetArgument(t, 0);
          q_33 = ATgetArgument(t, 1);
          t_33 = ATgetArgument(t, 2);
          t = not_null(o_33);
          if(match_cons(t, sym_SVar_1))
            {
              p_33 = ATgetArgument(t, 0);
              t = not_null(p_33);
              if(match_string(t, "bottomup_1_0"))
                {
                  t = not_null(q_33);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_33 = ATgetFirst((ATermList) t);
                      s_33 = (ATerm) ATgetNext((ATermList) t);
                      t = not_null(s_33);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = not_null(t_33);
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = not_null(u_33);
                              if(match_cons(t, sym_Op_2))
                                {
                                  v_33 = ATgetArgument(t, 0);
                                  w_33 = ATgetArgument(t, 1);
                                  t = e_34(t);
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm IntroduceApp_0_0 (ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
  ATerm q_34 (ATerm t)
  {
    ATerm o_34 = NULL,p_34 = NULL;
    t = not_null(m_34);
    if(((p_34 != NULL) && (p_34 != t)))
      _fail(t);
    else
      p_34 = t;
    t = not_null(n_34);
    if(((o_34 != NULL) && (o_34 != t)))
      _fail(t);
    else
      o_34 = t;
    t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_App_2, not_null(o_34), not_null(p_34)));
    return(t);
  }
  if(((k_34 != NULL) && (k_34 != t)))
    _fail(t);
  else
    k_34 = t;
  t = not_null(k_34);
  if(match_cons(t, sym_Seq_2))
    {
      l_34 = ATgetArgument(t, 0);
      n_34 = ATgetArgument(t, 1);
      t = not_null(l_34);
      if(match_cons(t, sym_Build_1))
        {
          m_34 = ATgetArgument(t, 0);
          t = q_34(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SeqOverScopeR_0_0 (ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL;
  ATerm c_35 (ATerm t)
  {
    ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
    t = not_null(w_34);
    if(((z_34 != NULL) && (z_34 != t)))
      _fail(t);
    else
      z_34 = t;
    t = not_null(x_34);
    if(((a_35 != NULL) && (a_35 != t)))
      _fail(t);
    else
      a_35 = t;
    t = not_null(y_34);
    if(((b_35 != NULL) && (b_35 != t)))
      _fail(t);
    else
      b_35 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_34), (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_35), not_null(b_35)));
    return(t);
  }
  if(((u_34 != NULL) && (u_34 != t)))
    _fail(t);
  else
    u_34 = t;
  t = not_null(u_34);
  if(match_cons(t, sym_Seq_2))
    {
      v_34 = ATgetArgument(t, 0);
      y_34 = ATgetArgument(t, 1);
      t = not_null(v_34);
      if(match_cons(t, sym_Scope_2))
        {
          w_34 = ATgetArgument(t, 0);
          x_34 = ATgetArgument(t, 1);
          t = c_35(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SeqOverLChoiceR_0_0 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL;
  ATerm t_35 (ATerm t)
  {
    ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL;
    t = not_null(i_35);
    if(((n_35 != NULL) && (n_35 != t)))
      _fail(t);
    else
      n_35 = t;
    t = not_null(k_35);
    if(((o_35 != NULL) && (o_35 != t)))
      _fail(t);
    else
      o_35 = t;
    t = not_null(l_35);
    if(((p_35 != NULL) && (p_35 != t)))
      _fail(t);
    else
      p_35 = t;
    t = not_null(m_35);
    if(((q_35 != NULL) && (q_35 != t)))
      _fail(t);
    else
      q_35 = t;
    t = not_null(i_35);
    {
      ATerm r_35 = NULL,s_35 = NULL;
      t = (ATerm) ATmakeAppl(sym_Seq_2, term_z_23, not_null(q_35));
      {
        ATerm k_2 (ATerm t)
        {
          t = term_a_24;
          return(t);
        }
        t = rewrite_1_0(k_2, t);
        if(((r_35 != NULL) && (r_35 != t)))
          _fail(t);
        else
          r_35 = t;
        t = not_null(r_35);
        if(match_cons(t, sym_Defined_1))
          {
            s_35 = ATgetArgument(t, 0);
            t = not_null(s_35);
            if(match_string(t, "d_2"))
              {
                t = not_null(r_35);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(o_35), not_null(q_35)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_35), not_null(q_35)));
    }
    return(t);
  }
  if(((i_35 != NULL) && (i_35 != t)))
    _fail(t);
  else
    i_35 = t;
  t = not_null(i_35);
  if(match_cons(t, sym_Seq_2))
    {
      j_35 = ATgetArgument(t, 0);
      m_35 = ATgetArgument(t, 1);
      t = not_null(j_35);
      if(match_cons(t, sym_LChoice_2))
        {
          k_35 = ATgetArgument(t, 0);
          l_35 = ATgetArgument(t, 1);
          t = t_35(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SeqOverChoiceR_0_0 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL;
  ATerm k_36 (ATerm t)
  {
    ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
    t = not_null(z_35);
    if(((e_36 != NULL) && (e_36 != t)))
      _fail(t);
    else
      e_36 = t;
    t = not_null(b_36);
    if(((f_36 != NULL) && (f_36 != t)))
      _fail(t);
    else
      f_36 = t;
    t = not_null(c_36);
    if(((g_36 != NULL) && (g_36 != t)))
      _fail(t);
    else
      g_36 = t;
    t = not_null(d_36);
    if(((h_36 != NULL) && (h_36 != t)))
      _fail(t);
    else
      h_36 = t;
    t = not_null(z_35);
    {
      ATerm i_36 = NULL,j_36 = NULL;
      t = (ATerm) ATmakeAppl(sym_Seq_2, term_b_24, not_null(h_36));
      {
        ATerm l_2 (ATerm t)
        {
          t = term_c_24;
          return(t);
        }
        t = rewrite_1_0(l_2, t);
        if(((i_36 != NULL) && (i_36 != t)))
          _fail(t);
        else
          i_36 = t;
        t = not_null(i_36);
        if(match_cons(t, sym_Defined_1))
          {
            j_36 = ATgetArgument(t, 0);
            t = not_null(j_36);
            if(match_string(t, "b_2"))
              {
                t = not_null(i_36);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(f_36), not_null(h_36)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_36), not_null(h_36)));
    }
    return(t);
  }
  if(((z_35 != NULL) && (z_35 != t)))
    _fail(t);
  else
    z_35 = t;
  t = not_null(z_35);
  if(match_cons(t, sym_Seq_2))
    {
      a_36 = ATgetArgument(t, 0);
      d_36 = ATgetArgument(t, 1);
      t = not_null(a_36);
      if(match_cons(t, sym_Choice_2))
        {
          b_36 = ATgetArgument(t, 0);
          c_36 = ATgetArgument(t, 1);
          t = k_36(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fuse_with_bottomup_0_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SeqOverChoiceR_0_0(t);
        ;
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        {
          ATerm f_24 = t;
          int g_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SeqOverLChoiceR_0_0(t);
              ;
              LocalPopChoice(g_24);
            }
          else
            {
              t = f_24;
              {
                ATerm h_24 = t;
                int i_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SeqOverScopeR_0_0(t);
                    ;
                    LocalPopChoice(i_24);
                  }
                else
                  {
                    t = h_24;
                    {
                      ATerm j_24 = t;
                      int k_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = AssociateR_0_0(t);
                          ;
                          LocalPopChoice(k_24);
                        }
                      else
                        {
                          t = j_24;
                          {
                            ATerm l_24 = t;
                            int m_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = IntroduceApp_0_0(t);
                                ;
                                LocalPopChoice(m_24);
                              }
                            else
                              {
                                t = l_24;
                                t = BottomupOverConstructor_0_0(t);
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
  t = innermost_1_0(m_2, t);
  return(t);
}
ATerm SeqOverScopeL_0_0 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL;
  ATerm w_36 (ATerm t)
  {
    ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
    t = not_null(p_36);
    if(((u_36 != NULL) && (u_36 != t)))
      _fail(t);
    else
      u_36 = t;
    t = not_null(r_36);
    if(((t_36 != NULL) && (t_36 != t)))
      _fail(t);
    else
      t_36 = t;
    t = not_null(s_36);
    if(((v_36 != NULL) && (v_36 != t)))
      _fail(t);
    else
      v_36 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_36), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_36), not_null(v_36)));
    return(t);
  }
  if(((o_36 != NULL) && (o_36 != t)))
    _fail(t);
  else
    o_36 = t;
  t = not_null(o_36);
  if(match_cons(t, sym_Seq_2))
    {
      p_36 = ATgetArgument(t, 0);
      q_36 = ATgetArgument(t, 1);
      t = not_null(q_36);
      if(match_cons(t, sym_Scope_2))
        {
          r_36 = ATgetArgument(t, 0);
          s_36 = ATgetArgument(t, 1);
          t = w_36(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SeqOverLChoiceL_0_0 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL;
  ATerm i_37 (ATerm t)
  {
    ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
    t = not_null(b_37);
    if(((g_37 != NULL) && (g_37 != t)))
      _fail(t);
    else
      g_37 = t;
    t = not_null(d_37);
    if(((f_37 != NULL) && (f_37 != t)))
      _fail(t);
    else
      f_37 = t;
    t = not_null(e_37);
    if(((h_37 != NULL) && (h_37 != t)))
      _fail(t);
    else
      h_37 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(g_37), not_null(f_37)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_37), not_null(h_37)));
    return(t);
  }
  if(((a_37 != NULL) && (a_37 != t)))
    _fail(t);
  else
    a_37 = t;
  t = not_null(a_37);
  if(match_cons(t, sym_Seq_2))
    {
      b_37 = ATgetArgument(t, 0);
      c_37 = ATgetArgument(t, 1);
      t = not_null(c_37);
      if(match_cons(t, sym_LChoice_2))
        {
          d_37 = ATgetArgument(t, 0);
          e_37 = ATgetArgument(t, 1);
          t = i_37(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SeqOverChoiceL_0_0 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL;
  ATerm v_38 (ATerm t)
  {
    ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL;
    t = not_null(n_37);
    if(((s_37 != NULL) && (s_37 != t)))
      _fail(t);
    else
      s_37 = t;
    t = not_null(p_37);
    if(((r_37 != NULL) && (r_37 != t)))
      _fail(t);
    else
      r_37 = t;
    t = not_null(q_37);
    if(((t_37 != NULL) && (t_37 != t)))
      _fail(t);
    else
      t_37 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(s_37), not_null(r_37)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_37), not_null(t_37)));
    return(t);
  }
  if(((m_37 != NULL) && (m_37 != t)))
    _fail(t);
  else
    m_37 = t;
  t = not_null(m_37);
  if(match_cons(t, sym_Seq_2))
    {
      n_37 = ATgetArgument(t, 0);
      o_37 = ATgetArgument(t, 1);
      t = not_null(o_37);
      if(match_cons(t, sym_Choice_2))
        {
          p_37 = ATgetArgument(t, 0);
          q_37 = ATgetArgument(t, 1);
          t = v_38(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm q_110 (ATerm), ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    t = bottomup_1_0(q_110, t);
    return(t);
  }
  t = SRTS_all(n_2, t);
  t = q_110(t);
  return(t);
}
ATerm innermost_1_0 (ATerm f_126 (ATerm), ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm p_2 (ATerm t)
    {
      t = f_126(t);
      t = innermost_1_0(f_126, t);
      return(t);
    }
    t = try_1_0(p_2, t);
    return(t);
  }
  t = bottomup_1_0(o_2, t);
  return(t);
}
ATerm propagate_mark_0_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm t_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SeqOverChoiceL_0_0(t);
        ;
        LocalPopChoice(u_26);
      }
    else
      {
        t = t_26;
        {
          ATerm v_26 = t;
          int w_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SeqOverLChoiceL_0_0(t);
              ;
              LocalPopChoice(w_26);
            }
          else
            {
              t = v_26;
              t = SeqOverScopeL_0_0(t);
            }
        }
      }
    return(t);
  }
  t = innermost_1_0(q_2, t);
  return(t);
}
ATerm Build_1_0 (ATerm f_100 (ATerm), ATerm t)
{
  ATerm l_41 = NULL,n_41 = NULL;
  ATerm w_41 (ATerm t)
  {
    ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,s_41 = NULL;
    ATerm y_41 (ATerm t)
    {
      ATerm t_41 = NULL,u_41 = NULL;
      t = not_null(s_41);
      if(((t_41 != NULL) && (t_41 != t)))
        _fail(t);
      else
        t_41 = t;
      t = not_null(s_41);
      {
        ATerm v_41 = NULL;
        ATerm z_41 (ATerm t)
        {
          t = not_null(v_41);
          if(((u_41 != NULL) && (u_41 != t)))
            _fail(t);
          else
            u_41 = t;
          t = not_null(v_41);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(t_41)), not_null(q_41));
        if(((v_41 != NULL) && (v_41 != t)))
          _fail(t);
        else
          v_41 = t;
        t = z_41(t);
        t = not_null(u_41);
      }
      return(t);
    }
    t = not_null(l_41);
    if(((o_41 != NULL) && (o_41 != t)))
      _fail(t);
    else
      o_41 = t;
    t = not_null(n_41);
    if(((p_41 != NULL) && (p_41 != t)))
      _fail(t);
    else
      p_41 = t;
    t = not_null(l_41);
    {
      ATerm r_41 = NULL;
      ATerm x_41 (ATerm t)
      {
        t = not_null(r_41);
        if(((q_41 != NULL) && (q_41 != t)))
          _fail(t);
        else
          q_41 = t;
        t = not_null(r_41);
        return(t);
      }
      t = SSLgetAnnotations(not_null(o_41));
      if(((r_41 != NULL) && (r_41 != t)))
        _fail(t);
      else
        r_41 = t;
      t = x_41(t);
      t = not_null(p_41);
      t = f_100(t);
      if(((s_41 != NULL) && (s_41 != t)))
        _fail(t);
      else
        s_41 = t;
      t = y_41(t);
    }
    return(t);
  }
  if(((l_41 != NULL) && (l_41 != t)))
    _fail(t);
  else
    l_41 = t;
  t = not_null(l_41);
  if(match_cons(t, sym_Build_1))
    {
      n_41 = ATgetArgument(t, 0);
      t = w_41(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL;
  ATerm b_43 (ATerm t)
  {
    ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,q_42 = NULL;
    ATerm d_43 (ATerm t)
    {
      ATerm r_42 = NULL,s_42 = NULL;
      ATerm e_43 (ATerm t)
      {
        ATerm t_42 = NULL,u_42 = NULL;
        t = not_null(s_42);
        if(((t_42 != NULL) && (t_42 != t)))
          _fail(t);
        else
          t_42 = t;
        t = not_null(s_42);
        {
          ATerm v_42 = NULL;
          ATerm f_43 (ATerm t)
          {
            t = not_null(v_42);
            if(((u_42 != NULL) && (u_42 != t)))
              _fail(t);
            else
              u_42 = t;
            t = not_null(v_42);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(r_42), not_null(t_42)), not_null(o_42));
          if(((v_42 != NULL) && (v_42 != t)))
            _fail(t);
          else
            v_42 = t;
          t = f_43(t);
          t = not_null(u_42);
        }
        return(t);
      }
      t = not_null(q_42);
      if(((r_42 != NULL) && (r_42 != t)))
        _fail(t);
      else
        r_42 = t;
      t = not_null(n_42);
      t = m_100(t);
      if(((s_42 != NULL) && (s_42 != t)))
        _fail(t);
      else
        s_42 = t;
      t = e_43(t);
      return(t);
    }
    t = not_null(i_42);
    if(((l_42 != NULL) && (l_42 != t)))
      _fail(t);
    else
      l_42 = t;
    t = not_null(j_42);
    if(((m_42 != NULL) && (m_42 != t)))
      _fail(t);
    else
      m_42 = t;
    t = not_null(k_42);
    if(((n_42 != NULL) && (n_42 != t)))
      _fail(t);
    else
      n_42 = t;
    t = not_null(i_42);
    {
      ATerm p_42 = NULL;
      ATerm c_43 (ATerm t)
      {
        t = not_null(p_42);
        if(((o_42 != NULL) && (o_42 != t)))
          _fail(t);
        else
          o_42 = t;
        t = not_null(p_42);
        return(t);
      }
      t = SSLgetAnnotations(not_null(l_42));
      if(((p_42 != NULL) && (p_42 != t)))
        _fail(t);
      else
        p_42 = t;
      t = c_43(t);
      t = not_null(m_42);
      t = l_100(t);
      if(((q_42 != NULL) && (q_42 != t)))
        _fail(t);
      else
        q_42 = t;
      t = d_43(t);
    }
    return(t);
  }
  if(((i_42 != NULL) && (i_42 != t)))
    _fail(t);
  else
    i_42 = t;
  t = not_null(i_42);
  if(match_cons(t, sym_Seq_2))
    {
      j_42 = ATgetArgument(t, 0);
      k_42 = ATgetArgument(t, 1);
      t = b_43(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Match_1_0 (ATerm e_100 (ATerm), ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL;
  ATerm a_44 (ATerm t)
  {
    ATerm n_43 = NULL,o_43 = NULL,u_43 = NULL,w_43 = NULL;
    ATerm c_44 (ATerm t)
    {
      ATerm x_43 = NULL,y_43 = NULL;
      t = not_null(w_43);
      if(((x_43 != NULL) && (x_43 != t)))
        _fail(t);
      else
        x_43 = t;
      t = not_null(w_43);
      {
        ATerm z_43 = NULL;
        ATerm d_44 (ATerm t)
        {
          t = not_null(z_43);
          if(((y_43 != NULL) && (y_43 != t)))
            _fail(t);
          else
            y_43 = t;
          t = not_null(z_43);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(x_43)), not_null(u_43));
        if(((z_43 != NULL) && (z_43 != t)))
          _fail(t);
        else
          z_43 = t;
        t = d_44(t);
        t = not_null(y_43);
      }
      return(t);
    }
    t = not_null(l_43);
    if(((n_43 != NULL) && (n_43 != t)))
      _fail(t);
    else
      n_43 = t;
    t = not_null(m_43);
    if(((o_43 != NULL) && (o_43 != t)))
      _fail(t);
    else
      o_43 = t;
    t = not_null(l_43);
    {
      ATerm v_43 = NULL;
      ATerm b_44 (ATerm t)
      {
        t = not_null(v_43);
        if(((u_43 != NULL) && (u_43 != t)))
          _fail(t);
        else
          u_43 = t;
        t = not_null(v_43);
        return(t);
      }
      t = SSLgetAnnotations(not_null(n_43));
      if(((v_43 != NULL) && (v_43 != t)))
        _fail(t);
      else
        v_43 = t;
      t = b_44(t);
      t = not_null(o_43);
      t = e_100(t);
      if(((w_43 != NULL) && (w_43 != t)))
        _fail(t);
      else
        w_43 = t;
      t = c_44(t);
    }
    return(t);
  }
  if(((l_43 != NULL) && (l_43 != t)))
    _fail(t);
  else
    l_43 = t;
  t = not_null(l_43);
  if(match_cons(t, sym_Match_1))
    {
      m_43 = ATgetArgument(t, 0);
      t = a_44(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LChoice_2_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL;
  ATerm y_44 (ATerm t)
  {
    ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,s_44 = NULL;
    ATerm a_45 (ATerm t)
    {
      ATerm t_44 = NULL,u_44 = NULL;
      ATerm b_45 (ATerm t)
      {
        ATerm v_44 = NULL,w_44 = NULL;
        t = not_null(u_44);
        if(((v_44 != NULL) && (v_44 != t)))
          _fail(t);
        else
          v_44 = t;
        t = not_null(u_44);
        {
          ATerm x_44 = NULL;
          ATerm c_45 (ATerm t)
          {
            t = not_null(x_44);
            if(((w_44 != NULL) && (w_44 != t)))
              _fail(t);
            else
              w_44 = t;
            t = not_null(x_44);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(t_44), not_null(v_44)), not_null(q_44));
          if(((x_44 != NULL) && (x_44 != t)))
            _fail(t);
          else
            x_44 = t;
          t = c_45(t);
          t = not_null(w_44);
        }
        return(t);
      }
      t = not_null(s_44);
      if(((t_44 != NULL) && (t_44 != t)))
        _fail(t);
      else
        t_44 = t;
      t = not_null(p_44);
      t = o_100(t);
      if(((u_44 != NULL) && (u_44 != t)))
        _fail(t);
      else
        u_44 = t;
      t = b_45(t);
      return(t);
    }
    t = not_null(k_44);
    if(((n_44 != NULL) && (n_44 != t)))
      _fail(t);
    else
      n_44 = t;
    t = not_null(l_44);
    if(((o_44 != NULL) && (o_44 != t)))
      _fail(t);
    else
      o_44 = t;
    t = not_null(m_44);
    if(((p_44 != NULL) && (p_44 != t)))
      _fail(t);
    else
      p_44 = t;
    t = not_null(k_44);
    {
      ATerm r_44 = NULL;
      ATerm z_44 (ATerm t)
      {
        t = not_null(r_44);
        if(((q_44 != NULL) && (q_44 != t)))
          _fail(t);
        else
          q_44 = t;
        t = not_null(r_44);
        return(t);
      }
      t = SSLgetAnnotations(not_null(n_44));
      if(((r_44 != NULL) && (r_44 != t)))
        _fail(t);
      else
        r_44 = t;
      t = z_44(t);
      t = not_null(o_44);
      t = n_100(t);
      if(((s_44 != NULL) && (s_44 != t)))
        _fail(t);
      else
        s_44 = t;
      t = a_45(t);
    }
    return(t);
  }
  if(((k_44 != NULL) && (k_44 != t)))
    _fail(t);
  else
    k_44 = t;
  t = not_null(k_44);
  if(match_cons(t, sym_LChoice_2))
    {
      l_44 = ATgetArgument(t, 0);
      m_44 = ATgetArgument(t, 1);
      t = y_44(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Choice_2_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL;
  ATerm b_46 (ATerm t)
  {
    ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,r_45 = NULL;
    ATerm l_46 (ATerm t)
    {
      ATerm w_45 = NULL,x_45 = NULL;
      ATerm m_46 (ATerm t)
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
          ATerm n_46 (ATerm t)
          {
            t = not_null(a_46);
            if(((z_45 != NULL) && (z_45 != t)))
              _fail(t);
            else
              z_45 = t;
            t = not_null(a_46);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(w_45), not_null(y_45)), not_null(p_45));
          if(((a_46 != NULL) && (a_46 != t)))
            _fail(t);
          else
            a_46 = t;
          t = n_46(t);
          t = not_null(z_45);
        }
        return(t);
      }
      t = not_null(r_45);
      if(((w_45 != NULL) && (w_45 != t)))
        _fail(t);
      else
        w_45 = t;
      t = not_null(o_45);
      t = m_99(t);
      if(((x_45 != NULL) && (x_45 != t)))
        _fail(t);
      else
        x_45 = t;
      t = m_46(t);
      return(t);
    }
    t = not_null(j_45);
    if(((m_45 != NULL) && (m_45 != t)))
      _fail(t);
    else
      m_45 = t;
    t = not_null(k_45);
    if(((n_45 != NULL) && (n_45 != t)))
      _fail(t);
    else
      n_45 = t;
    t = not_null(l_45);
    if(((o_45 != NULL) && (o_45 != t)))
      _fail(t);
    else
      o_45 = t;
    t = not_null(j_45);
    {
      ATerm q_45 = NULL;
      ATerm k_46 (ATerm t)
      {
        t = not_null(q_45);
        if(((p_45 != NULL) && (p_45 != t)))
          _fail(t);
        else
          p_45 = t;
        t = not_null(q_45);
        return(t);
      }
      t = SSLgetAnnotations(not_null(m_45));
      if(((q_45 != NULL) && (q_45 != t)))
        _fail(t);
      else
        q_45 = t;
      t = k_46(t);
      t = not_null(n_45);
      t = l_99(t);
      if(((r_45 != NULL) && (r_45 != t)))
        _fail(t);
      else
        r_45 = t;
      t = l_46(t);
    }
    return(t);
  }
  if(((j_45 != NULL) && (j_45 != t)))
    _fail(t);
  else
    j_45 = t;
  t = not_null(j_45);
  if(match_cons(t, sym_Choice_2))
    {
      k_45 = ATgetArgument(t, 0);
      l_45 = ATgetArgument(t, 1);
      t = b_46(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm inline_rules_0_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm x_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Simplify_0_0(t);
        ;
        LocalPopChoice(y_26);
      }
    else
      {
        t = x_26;
        {
          ATerm z_26 = t;
          int a_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Choice_2_0(inline_rules_0_0, inline_rules_0_0, t);
              ;
              LocalPopChoice(a_27);
            }
          else
            {
              t = z_26;
              {
                ATerm b_27 = t;
                int c_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = LChoice_2_0(inline_rules_0_0, inline_rules_0_0, t);
                    ;
                    LocalPopChoice(c_27);
                  }
                else
                  {
                    t = b_27;
                    {
                      ATerm d_27 = t;
                      int a_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_2 (ATerm t)
                          {
                            ATerm t_2 (ATerm t)
                            {
                              t = Match_1_0(_id, t);
                              return(t);
                            }
                            ATerm u_2 (ATerm t)
                            {
                              t = Build_1_0(_id, t);
                              return(t);
                            }
                            t = Seq_2_0(t_2, u_2, t);
                            return(t);
                          }
                          t = Scope_2_0(_id, s_2, t);
                          ;
                          LocalPopChoice(a_28);
                        }
                      else
                        {
                          t = d_27;
                          {
                            ATerm b_28 = t;
                            int h_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm v_2 (ATerm t)
                                {
                                  ATerm w_2 (ATerm t)
                                  {
                                    t = Match_1_0(_id, t);
                                    return(t);
                                  }
                                  ATerm x_2 (ATerm t)
                                  {
                                    ATerm y_2 (ATerm t)
                                    {
                                      t = Build_1_0(_id, t);
                                      return(t);
                                    }
                                    t = Seq_2_0(_id, y_2, t);
                                    return(t);
                                  }
                                  t = Seq_2_0(w_2, x_2, t);
                                  return(t);
                                }
                                t = Scope_2_0(_id, v_2, t);
                                ;
                                LocalPopChoice(h_28);
                              }
                            else
                              {
                                t = b_28;
                                t = InlineStrat_0_0(t);
                                t = inline_rules_0_0(t);
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
  t = try_1_0(r_2, t);
  return(t);
}
ATerm bottomup_to_var_0_0 (ATerm t)
{
  ATerm q_46 = NULL;
  ATerm s_46 (ATerm t)
  {
    ATerm r_46 = NULL;
    t = not_null(q_46);
    if(((r_46 != NULL) && (r_46 != t)))
      _fail(t);
    else
      r_46 = t;
    t = not_null(q_46);
    {
      ATerm i_28;
      i_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_q_23, (ATerm) ATmakeAppl(sym_Defined_2, term_j_28, not_null(r_46)));
      {
        ATerm z_2 (ATerm t)
        {
          t = term_r_23;
          return(t);
        }
        t = assert_1_0(z_2, t);
      }
      t = i_28;
      {
        ATerm t_28;
        t_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_20, (ATerm) ATmakeAppl(sym_Defined_2, term_u_28, not_null(r_46)));
        {
          ATerm a_3 (ATerm t)
          {
            t = term_h_20;
            return(t);
          }
          t = assert_1_0(a_3, t);
        }
        t = t_28;
      }
    }
    return(t);
  }
  if(((q_46 != NULL) && (q_46 != t)))
    _fail(t);
  else
    q_46 = t;
  t = s_46(t);
  return(t);
}
ATerm seq_over_choice_0_0 (ATerm t)
{
  ATerm u_46 = NULL;
  ATerm w_46 (ATerm t)
  {
    ATerm v_46 = NULL;
    t = not_null(u_46);
    if(((v_46 != NULL) && (v_46 != t)))
      _fail(t);
    else
      v_46 = t;
    t = not_null(u_46);
    {
      ATerm v_28;
      v_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_b_24, not_null(v_46)), term_j_29);
      {
        ATerm b_3 (ATerm t)
        {
          t = term_c_24;
          return(t);
        }
        t = assert_1_0(b_3, t);
      }
      t = v_28;
      {
        ATerm k_29;
        k_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_z_23, not_null(v_46)), term_s_29);
        {
          ATerm c_3 (ATerm t)
          {
            t = term_a_24;
            return(t);
          }
          t = assert_1_0(c_3, t);
        }
        t = k_29;
      }
    }
    return(t);
  }
  if(((u_46 != NULL) && (u_46 != t)))
    _fail(t);
  else
    u_46 = t;
  t = w_46(t);
  return(t);
}
ATerm innermost_fusion_0_0 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL;
  ATerm j_48 (ATerm t)
  {
    ATerm s_47 = NULL,t_47 = NULL,v_47 = NULL;
    t = not_null(p_47);
    if(((s_47 != NULL) && (s_47 != t)))
      _fail(t);
    else
      s_47 = t;
    t = not_null(l_47);
    {
      ATerm d_3 (ATerm t)
      {
        ATerm e_3 (ATerm t)
        {
          t = term_t_29;
          return(t);
        }
        t = say_1_0(e_3, t);
        return(t);
      }
      t = if_verbose2_1_0(d_3, t);
      {
        ATerm u_29;
        u_29 = t;
        {
          ATerm u_47 = NULL;
          ATerm m_48 (ATerm t)
          {
            t = not_null(u_47);
            if(((t_47 != NULL) && (t_47 != t)))
              _fail(t);
            else
              t_47 = t;
            t = not_null(u_47);
            return(t);
          }
          t = new_0_0(t);
          if(((u_47 != NULL) && (u_47 != t)))
            _fail(t);
          else
            u_47 = t;
          t = m_48(t);
        }
        t = u_29;
        {
          ATerm j_30;
          j_30 = t;
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_y_23, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_47)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
          t = seq_over_choice_0_0(t);
          t = j_30;
          {
            ATerm k_30;
            k_30 = t;
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_y_23, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_47)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
            t = bottomup_to_var_0_0(t);
            t = k_30;
            {
              ATerm w_47 = NULL;
              ATerm n_48 (ATerm t)
              {
                t = not_null(w_47);
                if(((v_47 != NULL) && (v_47 != t)))
                  _fail(t);
                else
                  v_47 = t;
                t = not_null(w_47);
                return(t);
              }
              t = not_null(s_47);
              t = inline_rules_0_0(t);
              if(((w_47 != NULL) && (w_47 != t)))
                _fail(t);
              else
                w_47 = t;
              t = n_48(t);
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_y_23, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, not_null(t_47), (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_c_19, not_null(v_47)), (ATerm) ATmakeAppl(sym_CallT_3, term_y_23, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_47)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_e_15))), (ATerm) ATempty);
              t = propagate_mark_0_0(t);
              t = fuse_with_bottomup_0_0(t);
              {
                ATerm f_3 (ATerm t)
                {
                  ATerm l_30 = t;
                  int m_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = BottomupToVarIsId_UnCond_0_0(t);
                      ;
                      LocalPopChoice(m_30);
                    }
                  else
                    {
                      t = l_30;
                      {
                        ATerm n_30 = t;
                        int o_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = BottomupToVarIsId_Cond_0_0(t);
                            ;
                            LocalPopChoice(o_30);
                          }
                        else
                          {
                            t = n_30;
                            t = UnMark_0_0(t);
                          }
                      }
                    }
                  return(t);
                }
                t = alltd_1_0(f_3, t);
                {
                  ATerm p_30 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm g_3 (ATerm t)
                      {
                        ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL,e_48 = NULL,f_48 = NULL;
                        if(((x_47 != NULL) && (x_47 != t)))
                          _fail(t);
                        else
                          x_47 = t;
                        t = not_null(x_47);
                        if(match_cons(t, sym_CallT_3))
                          {
                            y_47 = ATgetArgument(t, 0);
                            e_48 = ATgetArgument(t, 1);
                            f_48 = ATgetArgument(t, 2);
                            t = not_null(y_47);
                            if(match_cons(t, sym_SVar_1))
                              {
                                z_47 = ATgetArgument(t, 0);
                                t = not_null(z_47);
                                if(match_string(t, "mark"))
                                  {
                                    t = not_null(e_48);
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = not_null(f_48);
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = not_null(x_47);
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = oncetd_1_0(g_3, t);
                      {
                        ATerm h_3 (ATerm t)
                        {
                          t = term_q_30;
                          return(t);
                        }
                        t = say_1_0(h_3, t);
                      }
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = p_30;
                    }
                  t = desugar_0_0(t);
                  {
                    ATerm i_3 (ATerm t)
                    {
                      ATerm j_3 (ATerm t)
                      {
                        t = term_r_30;
                        return(t);
                      }
                      t = say_1_0(j_3, t);
                      return(t);
                    }
                    t = if_verbose1_1_0(i_3, t);
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
  if(((l_47 != NULL) && (l_47 != t)))
    _fail(t);
  else
    l_47 = t;
  t = not_null(l_47);
  if(match_cons(t, sym_CallT_3))
    {
      m_47 = ATgetArgument(t, 0);
      o_47 = ATgetArgument(t, 1);
      r_47 = ATgetArgument(t, 2);
      t = not_null(m_47);
      if(match_cons(t, sym_SVar_1))
        {
          n_47 = ATgetArgument(t, 0);
          t = not_null(n_47);
          if(match_string(t, "innermost_1_0"))
            {
              t = not_null(o_47);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_47 = ATgetFirst((ATermList) t);
                  q_47 = (ATerm) ATgetNext((ATermList) t);
                  t = not_null(q_47);
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = not_null(r_47);
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = j_48(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm h_112 (ATerm), ATerm t)
{
  ATerm o_48 (ATerm t)
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_112(t);
        ;
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        t = SRTS_all(o_48, t);
      }
    return(t);
  }
  t = o_48(t);
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t)
{
  ATerm l_49 = NULL;
  ATerm u_30;
  u_30 = t;
  {
    ATerm q_49 = NULL;
    ATerm j_50 (ATerm t)
    {
      t = not_null(q_49);
      if(((l_49 != NULL) && (l_49 != t)))
        _fail(t);
      else
        l_49 = t;
      t = not_null(q_49);
      {
        ATerm v_30 = t;
        int w_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_y_23, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_49)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
            t = InlineStrat_0_0(t);
            ;
            LocalPopChoice(w_30);
          }
        else
          {
            t = v_30;
            {
              ATerm k_3 (ATerm t)
              {
                ATerm l_3 (ATerm t)
                {
                  t = term_x_30;
                  return(t);
                }
                t = say_1_0(l_3, t);
                return(t);
              }
              t = if_verbose2_1_0(k_3, t);
              _fail(t);
            }
          }
        {
          ATerm y_30 = t;
          int z_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL;
              ATerm k_50 (ATerm t)
              {
                t = not_null(z_49);
                if(((l_49 != NULL) && (l_49 != t)))
                  _fail(t);
                else
                  l_49 = t;
                t = not_null(g_50);
                if(((l_49 != NULL) && (l_49 != t)))
                  _fail(t);
                else
                  l_49 = t;
                t = not_null(r_49);
                return(t);
              }
              if(((r_49 != NULL) && (r_49 != t)))
                _fail(t);
              else
                r_49 = t;
              t = not_null(r_49);
              if(match_cons(t, sym_Seq_2))
                {
                  s_49 = ATgetArgument(t, 0);
                  e_50 = ATgetArgument(t, 1);
                  t = not_null(s_49);
                  if(match_cons(t, sym_All_1))
                    {
                      t_49 = ATgetArgument(t, 0);
                      t = not_null(t_49);
                      if(match_cons(t, sym_CallT_3))
                        {
                          u_49 = ATgetArgument(t, 0);
                          w_49 = ATgetArgument(t, 1);
                          d_50 = ATgetArgument(t, 2);
                          t = not_null(u_49);
                          if(match_cons(t, sym_SVar_1))
                            {
                              v_49 = ATgetArgument(t, 0);
                              t = not_null(v_49);
                              if(match_string(t, "bottomup_1_0"))
                                {
                                  t = not_null(w_49);
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      x_49 = ATgetFirst((ATermList) t);
                                      c_50 = (ATerm) ATgetNext((ATermList) t);
                                      t = not_null(x_49);
                                      if(match_cons(t, sym_CallT_3))
                                        {
                                          y_49 = ATgetArgument(t, 0);
                                          a_50 = ATgetArgument(t, 1);
                                          b_50 = ATgetArgument(t, 2);
                                          t = not_null(y_49);
                                          if(match_cons(t, sym_SVar_1))
                                            {
                                              z_49 = ATgetArgument(t, 0);
                                              t = not_null(a_50);
                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                {
                                                  t = not_null(b_50);
                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                    {
                                                      t = not_null(c_50);
                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                        {
                                                          t = not_null(d_50);
                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                            {
                                                              t = not_null(e_50);
                                                              if(match_cons(t, sym_CallT_3))
                                                                {
                                                                  f_50 = ATgetArgument(t, 0);
                                                                  h_50 = ATgetArgument(t, 1);
                                                                  i_50 = ATgetArgument(t, 2);
                                                                  t = not_null(f_50);
                                                                  if(match_cons(t, sym_SVar_1))
                                                                    {
                                                                      g_50 = ATgetArgument(t, 0);
                                                                      t = not_null(h_50);
                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                        {
                                                                          t = not_null(i_50);
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = k_50(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                            }
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
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
              LocalPopChoice(z_30);
            }
          else
            {
              t = y_30;
              {
                ATerm m_3 (ATerm t)
                {
                  ATerm n_3 (ATerm t)
                  {
                    t = term_a_31;
                    return(t);
                  }
                  t = debug_1_0(n_3, t);
                  return(t);
                }
                t = if_verbose1_1_0(m_3, t);
                _fail(t);
              }
            }
          {
            ATerm o_3 (ATerm t)
            {
              ATerm p_3 (ATerm t)
              {
                t = term_b_31;
                return(t);
              }
              t = say_1_0(p_3, t);
              return(t);
            }
            t = if_verbose2_1_0(o_3, t);
          }
        }
      }
      return(t);
    }
    t = new_0_0(t);
    if(((q_49 != NULL) && (q_49 != t)))
      _fail(t);
    else
      q_49 = t;
    t = j_50(t);
  }
  t = u_30;
  return(t);
}
ATerm check_that_innermost_is_innermost_0_0 (ATerm t)
{
  ATerm f_54 = NULL;
  ATerm c_31;
  c_31 = t;
  {
    ATerm g_54 = NULL;
    ATerm m_56 (ATerm t)
    {
      t = not_null(g_54);
      if(((f_54 != NULL) && (f_54 != t)))
        _fail(t);
      else
        f_54 = t;
      t = not_null(g_54);
      {
        ATerm d_31 = t;
        int e_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_b_33, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_54)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
            t = InlineStrat_0_0(t);
            ;
            LocalPopChoice(e_31);
          }
        else
          {
            t = d_31;
            {
              ATerm q_3 (ATerm t)
              {
                ATerm r_3 (ATerm t)
                {
                  t = term_c_33;
                  return(t);
                }
                t = say_1_0(r_3, t);
                return(t);
              }
              t = if_verbose2_1_0(q_3, t);
              _fail(t);
            }
          }
        {
          ATerm d_33 = t;
          int e_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL;
              ATerm n_56 (ATerm t)
              {
                t = not_null(t_55);
                if(((f_54 != NULL) && (f_54 != t)))
                  _fail(t);
                else
                  f_54 = t;
                t = not_null(c_56);
                if(((f_54 != NULL) && (f_54 != t)))
                  _fail(t);
                else
                  f_54 = t;
                t = not_null(i_55);
                return(t);
              }
              ATerm o_56 (ATerm t)
              {
                ATerm k_56 = NULL;
                t = not_null(n_55);
                if(((k_56 != NULL) && (k_56 != t)))
                  _fail(t);
                else
                  k_56 = t;
                t = not_null(l_54);
                if(((f_54 != NULL) && (f_54 != t)))
                  _fail(t);
                else
                  f_54 = t;
                t = not_null(u_54);
                if(((k_56 != NULL) && (k_56 != t)))
                  _fail(t);
                else
                  k_56 = t;
                t = not_null(i_55);
                return(t);
              }
              ATerm p_56 (ATerm t)
              {
                ATerm l_56 = NULL;
                t = not_null(n_55);
                if(((l_56 != NULL) && (l_56 != t)))
                  _fail(t);
                else
                  l_56 = t;
                t = not_null(t_55);
                if(((f_54 != NULL) && (f_54 != t)))
                  _fail(t);
                else
                  f_54 = t;
                t = not_null(c_56);
                if(((l_56 != NULL) && (l_56 != t)))
                  _fail(t);
                else
                  l_56 = t;
                t = not_null(i_55);
                return(t);
              }
              if(((i_55 != NULL) && (i_55 != t)))
                _fail(t);
              else
                i_55 = t;
              t = not_null(i_55);
              if(match_cons(t, sym_Call_2))
                {
                  j_55 = ATgetArgument(t, 0);
                  l_55 = ATgetArgument(t, 1);
                  t = not_null(j_55);
                  if(match_cons(t, sym_SVar_1))
                    {
                      k_55 = ATgetArgument(t, 0);
                      t = not_null(k_55);
                      if(match_string(t, "bottomup_1_0"))
                        {
                          t = not_null(l_55);
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              m_55 = ATgetFirst((ATermList) t);
                              i_56 = (ATerm) ATgetNext((ATermList) t);
                              t = not_null(m_55);
                              if(match_cons(t, sym_Call_2))
                                {
                                  n_55 = ATgetArgument(t, 0);
                                  p_55 = ATgetArgument(t, 1);
                                  t = not_null(n_55);
                                  if(match_cons(t, sym_SVar_1))
                                    {
                                      h_54 = ATgetArgument(t, 0);
                                      t = not_null(h_54);
                                      if(match_string(t, "try_1_0"))
                                        {
                                          t = not_null(p_55);
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              q_55 = ATgetFirst((ATermList) t);
                                              h_56 = (ATerm) ATgetNext((ATermList) t);
                                              t = not_null(q_55);
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  r_55 = ATgetArgument(t, 0);
                                                  w_55 = ATgetArgument(t, 1);
                                                  t = not_null(r_55);
                                                  if(match_cons(t, sym_CallT_3))
                                                    {
                                                      s_55 = ATgetArgument(t, 0);
                                                      u_55 = ATgetArgument(t, 1);
                                                      v_55 = ATgetArgument(t, 2);
                                                      t = not_null(s_55);
                                                      if(match_cons(t, sym_SVar_1))
                                                        {
                                                          t_55 = ATgetArgument(t, 0);
                                                          t = not_null(u_55);
                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                            {
                                                              t = not_null(v_55);
                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                {
                                                                  t = not_null(w_55);
                                                                  if(match_cons(t, sym_CallT_3))
                                                                    {
                                                                      x_55 = ATgetArgument(t, 0);
                                                                      z_55 = ATgetArgument(t, 1);
                                                                      g_56 = ATgetArgument(t, 2);
                                                                      t = not_null(x_55);
                                                                      if(match_cons(t, sym_SVar_1))
                                                                        {
                                                                          y_55 = ATgetArgument(t, 0);
                                                                          t = not_null(y_55);
                                                                          if(match_string(t, "innermost_1_0"))
                                                                            {
                                                                              t = not_null(z_55);
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  a_56 = ATgetFirst((ATermList) t);
                                                                                  f_56 = (ATerm) ATgetNext((ATermList) t);
                                                                                  t = not_null(a_56);
                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                    {
                                                                                      b_56 = ATgetArgument(t, 0);
                                                                                      d_56 = ATgetArgument(t, 1);
                                                                                      e_56 = ATgetArgument(t, 2);
                                                                                      t = not_null(b_56);
                                                                                      if(match_cons(t, sym_SVar_1))
                                                                                        {
                                                                                          c_56 = ATgetArgument(t, 0);
                                                                                          t = not_null(d_56);
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = not_null(e_56);
                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                {
                                                                                                  t = not_null(f_56);
                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                    {
                                                                                                      t = not_null(g_56);
                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                        {
                                                                                                          t = not_null(h_56);
                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                            {
                                                                                                              t = not_null(i_56);
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = n_56(t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  _fail(t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              _fail(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          _fail(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      _fail(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  _fail(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              _fail(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      _fail(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                            }
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_CallT_3))
                    {
                      j_55 = ATgetArgument(t, 0);
                      l_55 = ATgetArgument(t, 1);
                      j_56 = ATgetArgument(t, 2);
                      t = not_null(j_55);
                      if(match_cons(t, sym_SVar_1))
                        {
                          k_55 = ATgetArgument(t, 0);
                          t = not_null(k_55);
                          if(match_string(t, "bottomup_1_0"))
                            {
                              t = not_null(l_55);
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  m_55 = ATgetFirst((ATermList) t);
                                  i_56 = (ATerm) ATgetNext((ATermList) t);
                                  t = not_null(m_55);
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      n_55 = ATgetArgument(t, 0);
                                      p_55 = ATgetArgument(t, 1);
                                      t = not_null(p_55);
                                      if(match_cons(t, sym_CallT_3))
                                        {
                                          q_55 = ATgetArgument(t, 0);
                                          h_56 = ATgetArgument(t, 1);
                                          h_55 = ATgetArgument(t, 2);
                                          t = not_null(q_55);
                                          if(match_cons(t, sym_SVar_1))
                                            {
                                              r_55 = ATgetArgument(t, 0);
                                              t = not_null(r_55);
                                              if(match_string(t, "try_1_0"))
                                                {
                                                  t = not_null(h_56);
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      i_54 = ATgetFirst((ATermList) t);
                                                      g_55 = (ATerm) ATgetNext((ATermList) t);
                                                      t = not_null(i_54);
                                                      if(match_cons(t, sym_Seq_2))
                                                        {
                                                          j_54 = ATgetArgument(t, 0);
                                                          o_54 = ATgetArgument(t, 1);
                                                          t = not_null(j_54);
                                                          if(match_cons(t, sym_CallT_3))
                                                            {
                                                              k_54 = ATgetArgument(t, 0);
                                                              m_54 = ATgetArgument(t, 1);
                                                              n_54 = ATgetArgument(t, 2);
                                                              t = not_null(k_54);
                                                              if(match_cons(t, sym_SVar_1))
                                                                {
                                                                  l_54 = ATgetArgument(t, 0);
                                                                  t = not_null(m_54);
                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                    {
                                                                      t = not_null(n_54);
                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                        {
                                                                          t = not_null(o_54);
                                                                          if(match_cons(t, sym_CallT_3))
                                                                            {
                                                                              p_54 = ATgetArgument(t, 0);
                                                                              r_54 = ATgetArgument(t, 1);
                                                                              f_55 = ATgetArgument(t, 2);
                                                                              t = not_null(p_54);
                                                                              if(match_cons(t, sym_SVar_1))
                                                                                {
                                                                                  q_54 = ATgetArgument(t, 0);
                                                                                  t = not_null(q_54);
                                                                                  if(match_string(t, "bottomup_1_0"))
                                                                                    {
                                                                                      t = not_null(r_54);
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          s_54 = ATgetFirst((ATermList) t);
                                                                                          e_55 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = not_null(s_54);
                                                                                          if(match_cons(t, sym_CallT_3))
                                                                                            {
                                                                                              t_54 = ATgetArgument(t, 0);
                                                                                              v_54 = ATgetArgument(t, 1);
                                                                                              d_55 = ATgetArgument(t, 2);
                                                                                              t = not_null(t_54);
                                                                                              if(match_cons(t, sym_SVar_1))
                                                                                                {
                                                                                                  u_54 = ATgetArgument(t, 0);
                                                                                                  t = not_null(v_54);
                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                    {
                                                                                                      t = not_null(d_55);
                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                        {
                                                                                                          t = not_null(e_55);
                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                            {
                                                                                                              t = not_null(f_55);
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = not_null(g_55);
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = not_null(h_55);
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = not_null(i_56);
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = not_null(j_56);
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = o_56(t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  _fail(t);
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              _fail(t);
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          _fail(t);
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      _fail(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  _fail(t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              _fail(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          _fail(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      _fail(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  _fail(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              _fail(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      _fail(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                            }
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              q_55 = ATgetArgument(t, 0);
                                              h_56 = ATgetArgument(t, 1);
                                              t = not_null(q_55);
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  r_55 = ATgetArgument(t, 0);
                                                  w_55 = ATgetArgument(t, 1);
                                                  t = not_null(r_55);
                                                  if(match_cons(t, sym_CallT_3))
                                                    {
                                                      s_55 = ATgetArgument(t, 0);
                                                      u_55 = ATgetArgument(t, 1);
                                                      v_55 = ATgetArgument(t, 2);
                                                      t = not_null(s_55);
                                                      if(match_cons(t, sym_SVar_1))
                                                        {
                                                          t_55 = ATgetArgument(t, 0);
                                                          t = not_null(u_55);
                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                            {
                                                              t = not_null(v_55);
                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                {
                                                                  t = not_null(w_55);
                                                                  if(match_cons(t, sym_CallT_3))
                                                                    {
                                                                      x_55 = ATgetArgument(t, 0);
                                                                      z_55 = ATgetArgument(t, 1);
                                                                      g_56 = ATgetArgument(t, 2);
                                                                      t = not_null(x_55);
                                                                      if(match_cons(t, sym_SVar_1))
                                                                        {
                                                                          y_55 = ATgetArgument(t, 0);
                                                                          t = not_null(y_55);
                                                                          if(match_string(t, "bottomup_1_0"))
                                                                            {
                                                                              t = not_null(z_55);
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  a_56 = ATgetFirst((ATermList) t);
                                                                                  f_56 = (ATerm) ATgetNext((ATermList) t);
                                                                                  t = not_null(a_56);
                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                    {
                                                                                      b_56 = ATgetArgument(t, 0);
                                                                                      d_56 = ATgetArgument(t, 1);
                                                                                      e_56 = ATgetArgument(t, 2);
                                                                                      t = not_null(b_56);
                                                                                      if(match_cons(t, sym_SVar_1))
                                                                                        {
                                                                                          c_56 = ATgetArgument(t, 0);
                                                                                          t = not_null(d_56);
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = not_null(e_56);
                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                {
                                                                                                  t = not_null(f_56);
                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                    {
                                                                                                      t = not_null(g_56);
                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                        {
                                                                                                          t = not_null(h_56);
                                                                                                          if(match_cons(t, sym_Id_0))
                                                                                                            {
                                                                                                              t = not_null(i_56);
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = not_null(j_56);
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = p_56(t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      _fail(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  _fail(t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              _fail(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          _fail(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      _fail(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  _fail(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              _fail(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      _fail(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                            }
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                }
                                              else
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
              LocalPopChoice(e_33);
            }
          else
            {
              t = d_33;
              {
                ATerm s_3 (ATerm t)
                {
                  ATerm t_3 (ATerm t)
                  {
                    t = term_f_33;
                    return(t);
                  }
                  t = debug_1_0(t_3, t);
                  return(t);
                }
                t = if_verbose1_1_0(s_3, t);
                _fail(t);
              }
            }
          {
            ATerm u_3 (ATerm t)
            {
              ATerm v_3 (ATerm t)
              {
                t = term_g_33;
                return(t);
              }
              t = say_1_0(v_3, t);
              return(t);
            }
            t = if_verbose2_1_0(u_3, t);
          }
        }
      }
      return(t);
    }
    t = new_0_0(t);
    if(((g_54 != NULL) && (g_54 != t)))
      _fail(t);
    else
      g_54 = t;
    t = m_56(t);
  }
  t = c_31;
  return(t);
}
ATerm TransformingCongruence_0_0 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL;
  ATerm s_58 (ATerm t)
  {
    ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL,m_58 = NULL,o_58 = NULL,q_58 = NULL;
    t = not_null(i_57);
    if(((k_57 != NULL) && (k_57 != t)))
      _fail(t);
    else
      k_57 = t;
    t = not_null(j_57);
    if(((l_57 != NULL) && (l_57 != t)))
      _fail(t);
    else
      l_57 = t;
    t = not_null(h_57);
    {
      ATerm h_33;
      h_33 = t;
      {
        ATerm s_57 = NULL;
        ATerm t_58 (ATerm t)
        {
          ATerm v_57 = NULL;
          ATerm v_58 (ATerm t)
          {
            ATerm w_57 = NULL;
            ATerm w_58 (ATerm t)
            {
              ATerm x_57 = NULL;
              ATerm x_58 (ATerm t)
              {
                ATerm a_58 = NULL;
                ATerm z_58 (ATerm t)
                {
                  ATerm b_58 = NULL,l_58 = NULL;
                  ATerm c_59 (ATerm t)
                  {
                    t = not_null(l_58);
                    if(((r_57 != NULL) && (r_57 != t)))
                      _fail(t);
                    else
                      r_57 = t;
                    t = not_null(l_58);
                    return(t);
                  }
                  t = not_null(a_58);
                  if(((o_57 != NULL) && (o_57 != t)))
                    _fail(t);
                  else
                    o_57 = t;
                  t = not_null(a_58);
                  {
                    ATerm c_58 = NULL;
                    ATerm a_59 (ATerm t)
                    {
                      t = not_null(c_58);
                      if(((b_58 != NULL) && (b_58 != t)))
                        _fail(t);
                      else
                        b_58 = t;
                      t = not_null(c_58);
                      return(t);
                    }
                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_57), not_null(q_57));
                    t = zip_1_0(_id, t);
                    if(((c_58 != NULL) && (c_58 != t)))
                      _fail(t);
                    else
                      c_58 = t;
                    t = a_59(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(b_58), not_null(l_57));
                    {
                      ATerm w_3 (ATerm t)
                      {
                        ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL;
                        ATerm b_59 (ATerm t)
                        {
                          ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
                          t = not_null(f_58);
                          if(((i_58 != NULL) && (i_58 != t)))
                            _fail(t);
                          else
                            i_58 = t;
                          t = not_null(g_58);
                          if(((j_58 != NULL) && (j_58 != t)))
                            _fail(t);
                          else
                            j_58 = t;
                          t = not_null(h_58);
                          if(((k_58 != NULL) && (k_58 != t)))
                            _fail(t);
                          else
                            k_58 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_58))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_58), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_58)))));
                          return(t);
                        }
                        if(((d_58 != NULL) && (d_58 != t)))
                          _fail(t);
                        else
                          d_58 = t;
                        t = not_null(d_58);
                        if(match_cons(t, sym__2))
                          {
                            e_58 = ATgetArgument(t, 0);
                            h_58 = ATgetArgument(t, 1);
                            t = not_null(e_58);
                            if(match_cons(t, sym__2))
                              {
                                f_58 = ATgetArgument(t, 0);
                                g_58 = ATgetArgument(t, 1);
                                t = b_59(t);
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = zip_1_0(w_3, t);
                      if(((l_58 != NULL) && (l_58 != t)))
                        _fail(t);
                      else
                        l_58 = t;
                      t = c_59(t);
                    }
                  }
                  return(t);
                }
                t = not_null(x_57);
                if(((q_57 != NULL) && (q_57 != t)))
                  _fail(t);
                else
                  q_57 = t;
                t = not_null(q_57);
                {
                  ATerm x_3 (ATerm t)
                  {
                    ATerm y_57 = NULL;
                    ATerm z_57 = NULL;
                    ATerm y_58 (ATerm t)
                    {
                      t = not_null(z_57);
                      if(((y_57 != NULL) && (y_57 != t)))
                        _fail(t);
                      else
                        y_57 = t;
                      t = not_null(z_57);
                      return(t);
                    }
                    if(((z_57 != NULL) && (z_57 != t)))
                      _fail(t);
                    else
                      z_57 = t;
                    t = y_58(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_57));
                    return(t);
                  }
                  t = map_1_0(x_3, t);
                  if(((a_58 != NULL) && (a_58 != t)))
                    _fail(t);
                  else
                    a_58 = t;
                  t = z_58(t);
                }
                return(t);
              }
              t = not_null(w_57);
              if(((n_57 != NULL) && (n_57 != t)))
                _fail(t);
              else
                n_57 = t;
              t = not_null(l_57);
              t = map_1_0(new_0_0, t);
              if(((x_57 != NULL) && (x_57 != t)))
                _fail(t);
              else
                x_57 = t;
              t = x_58(t);
              return(t);
            }
            t = not_null(v_57);
            if(((m_57 != NULL) && (m_57 != t)))
              _fail(t);
            else
              m_57 = t;
            t = not_null(v_57);
            t = new_0_0(t);
            if(((w_57 != NULL) && (w_57 != t)))
              _fail(t);
            else
              w_57 = t;
            t = w_58(t);
            return(t);
          }
          t = not_null(s_57);
          if(((p_57 != NULL) && (p_57 != t)))
            _fail(t);
          else
            p_57 = t;
          t = not_null(p_57);
          {
            ATerm y_3 (ATerm t)
            {
              ATerm t_57 = NULL;
              ATerm u_57 = NULL;
              ATerm u_58 (ATerm t)
              {
                t = not_null(u_57);
                if(((t_57 != NULL) && (t_57 != t)))
                  _fail(t);
                else
                  t_57 = t;
                t = not_null(u_57);
                return(t);
              }
              if(((u_57 != NULL) && (u_57 != t)))
                _fail(t);
              else
                u_57 = t;
              t = u_58(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_57));
              return(t);
            }
            t = map_1_0(y_3, t);
            if(((v_57 != NULL) && (v_57 != t)))
              _fail(t);
            else
              v_57 = t;
            t = v_58(t);
          }
          return(t);
        }
        t = not_null(l_57);
        t = map_1_0(new_0_0, t);
        if(((s_57 != NULL) && (s_57 != t)))
          _fail(t);
        else
          s_57 = t;
        t = t_58(t);
      }
      t = h_33;
      {
        ATerm i_33;
        i_33 = t;
        {
          ATerm n_58 = NULL;
          ATerm d_59 (ATerm t)
          {
            t = not_null(n_58);
            if(((m_58 != NULL) && (m_58 != t)))
              _fail(t);
            else
              m_58 = t;
            t = not_null(n_58);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_57), not_null(q_57));
          t = conc_0_0(t);
          if(((n_58 != NULL) && (n_58 != t)))
            _fail(t);
          else
            n_58 = t;
          t = d_59(t);
        }
        t = i_33;
        {
          ATerm j_33;
          j_33 = t;
          {
            ATerm p_58 = NULL;
            ATerm e_59 (ATerm t)
            {
              t = not_null(p_58);
              if(((o_58 != NULL) && (o_58 != t)))
                _fail(t);
              else
                o_58 = t;
              t = not_null(p_58);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(k_57), not_null(m_57)), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_57))));
            t = Mapp2_0_0(t);
            if(((p_58 != NULL) && (p_58 != t)))
              _fail(t);
            else
              p_58 = t;
            t = e_59(t);
          }
          t = j_33;
          {
            ATerm r_58 = NULL;
            ATerm f_59 (ATerm t)
            {
              t = not_null(r_58);
              if(((q_58 != NULL) && (q_58 != t)))
                _fail(t);
              else
                q_58 = t;
              t = not_null(r_58);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(k_57), not_null(o_57)), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_57))));
            t = Bapp2_0_0(t);
            if(((r_58 != NULL) && (r_58 != t)))
              _fail(t);
            else
              r_58 = t;
            t = f_59(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(m_58)), not_null(n_57)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_58), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(r_57)), not_null(q_58))));
          }
        }
      }
    }
    return(t);
  }
  if(((h_57 != NULL) && (h_57 != t)))
    _fail(t);
  else
    h_57 = t;
  t = not_null(h_57);
  if(match_cons(t, sym_Cong_2))
    {
      i_57 = ATgetArgument(t, 0);
      j_57 = ATgetArgument(t, 1);
      t = s_58(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL;
  ATerm r_62 (ATerm t)
  {
    ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL;
    t = not_null(o_61);
    if(((p_61 != NULL) && (p_61 != t)))
      _fail(t);
    else
      p_61 = t;
    t = not_null(n_61);
    {
      ATerm u_61 = NULL;
      ATerm x_62 (ATerm t)
      {
        ATerm y_61 = NULL;
        ATerm z_62 (ATerm t)
        {
          t = not_null(y_61);
          if(((t_61 != NULL) && (t_61 != t)))
            _fail(t);
          else
            t_61 = t;
          t = not_null(y_61);
          return(t);
        }
        t = not_null(u_61);
        if(((s_61 != NULL) && (s_61 != t)))
          _fail(t);
        else
          s_61 = t;
        t = not_null(p_61);
        {
          ATerm z_3 (ATerm t)
          {
            ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL;
            ATerm y_62 (ATerm t)
            {
              t = not_null(w_61);
              if(((q_61 != NULL) && (q_61 != t)))
                _fail(t);
              else
                q_61 = t;
              t = not_null(x_61);
              if(((r_61 != NULL) && (r_61 != t)))
                _fail(t);
              else
                r_61 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_61));
              return(t);
            }
            if(((v_61 != NULL) && (v_61 != t)))
              _fail(t);
            else
              v_61 = t;
            t = not_null(v_61);
            if(match_cons(t, sym_Anno_2))
              {
                w_61 = ATgetArgument(t, 0);
                x_61 = ATgetArgument(t, 1);
                t = y_62(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(z_3, t);
          if(((y_61 != NULL) && (y_61 != t)))
            _fail(t);
          else
            y_61 = t;
          t = z_62(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((u_61 != NULL) && (u_61 != t)))
        _fail(t);
      else
        u_61 = t;
      t = x_62(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_61)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_k_33, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_61)), not_null(q_61))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_61))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_61))));
    }
    return(t);
  }
  ATerm v_62 (ATerm t)
  {
    ATerm z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL;
    t = not_null(o_61);
    if(((z_61 != NULL) && (z_61 != t)))
      _fail(t);
    else
      z_61 = t;
    t = not_null(n_61);
    {
      ATerm d_62 = NULL;
      ATerm a_63 (ATerm t)
      {
        ATerm g_62 = NULL;
        ATerm c_63 (ATerm t)
        {
          t = not_null(g_62);
          if(((c_62 != NULL) && (c_62 != t)))
            _fail(t);
          else
            c_62 = t;
          t = not_null(g_62);
          return(t);
        }
        t = not_null(d_62);
        if(((b_62 != NULL) && (b_62 != t)))
          _fail(t);
        else
          b_62 = t;
        t = not_null(z_61);
        {
          ATerm a_4 (ATerm t)
          {
            ATerm e_62 = NULL,f_62 = NULL;
            ATerm b_63 (ATerm t)
            {
              t = not_null(f_62);
              if(((a_62 != NULL) && (a_62 != t)))
                _fail(t);
              else
                a_62 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_62));
              return(t);
            }
            if(((e_62 != NULL) && (e_62 != t)))
              _fail(t);
            else
              e_62 = t;
            t = not_null(e_62);
            if(match_cons(t, sym_RootApp_1))
              {
                f_62 = ATgetArgument(t, 0);
                t = b_63(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(a_4, t);
          if(((g_62 != NULL) && (g_62 != t)))
            _fail(t);
          else
            g_62 = t;
          t = c_63(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((d_62 != NULL) && (d_62 != t)))
        _fail(t);
      else
        d_62 = t;
      t = a_63(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_62)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_62), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_62))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_62))));
    }
    return(t);
  }
  ATerm w_62 (ATerm t)
  {
    ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL;
    t = not_null(o_61);
    if(((h_62 != NULL) && (h_62 != t)))
      _fail(t);
    else
      h_62 = t;
    t = not_null(n_61);
    {
      ATerm m_62 = NULL;
      ATerm d_63 (ATerm t)
      {
        ATerm q_62 = NULL;
        ATerm f_63 (ATerm t)
        {
          t = not_null(q_62);
          if(((l_62 != NULL) && (l_62 != t)))
            _fail(t);
          else
            l_62 = t;
          t = not_null(q_62);
          return(t);
        }
        t = not_null(m_62);
        if(((k_62 != NULL) && (k_62 != t)))
          _fail(t);
        else
          k_62 = t;
        t = not_null(h_62);
        {
          ATerm b_4 (ATerm t)
          {
            ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL;
            ATerm e_63 (ATerm t)
            {
              t = not_null(o_62);
              if(((i_62 != NULL) && (i_62 != t)))
                _fail(t);
              else
                i_62 = t;
              t = not_null(p_62);
              if(((j_62 != NULL) && (j_62 != t)))
                _fail(t);
              else
                j_62 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_62));
              return(t);
            }
            if(((n_62 != NULL) && (n_62 != t)))
              _fail(t);
            else
              n_62 = t;
            t = not_null(n_62);
            if(match_cons(t, sym_App_2))
              {
                o_62 = ATgetArgument(t, 0);
                p_62 = ATgetArgument(t, 1);
                t = e_63(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(b_4, t);
          if(((q_62 != NULL) && (q_62 != t)))
            _fail(t);
          else
            q_62 = t;
          t = f_63(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((m_62 != NULL) && (m_62 != t)))
        _fail(t);
      else
        m_62 = t;
      t = d_63(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_62)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(i_62), not_null(j_62), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_62)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_62))));
    }
    return(t);
  }
  if(((n_61 != NULL) && (n_61 != t)))
    _fail(t);
  else
    n_61 = t;
  t = not_null(n_61);
  if(match_cons(t, sym_Build_1))
    {
      o_61 = ATgetArgument(t, 0);
      {
        ATerm l_33 = t;
        int h_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_62(t);
            ;
            LocalPopChoice(h_34);
          }
        else
          {
            t = l_33;
            {
              ATerm i_34 = t;
              int j_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_62(t);
                  ;
                  LocalPopChoice(j_34);
                }
              else
                {
                  t = i_34;
                  t = w_62(t);
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
ATerm TransformingAnnoCongruence_0_0 (ATerm t)
{
  ATerm e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL;
  ATerm b_66 (ATerm t)
  {
    ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,v_65 = NULL,x_65 = NULL,z_65 = NULL;
    t = not_null(j_64);
    if(((o_64 != NULL) && (o_64 != t)))
      _fail(t);
    else
      o_64 = t;
    t = not_null(k_64);
    if(((p_64 != NULL) && (p_64 != t)))
      _fail(t);
    else
      p_64 = t;
    t = not_null(m_64);
    if(((q_64 != NULL) && (q_64 != t)))
      _fail(t);
    else
      q_64 = t;
    t = not_null(e_64);
    {
      ATerm r_34;
      r_34 = t;
      {
        ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL;
        ATerm c_66 (ATerm t)
        {
          ATerm d_65 = NULL;
          ATerm e_66 (ATerm t)
          {
            ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL;
            ATerm f_66 (ATerm t)
            {
              ATerm j_65 = NULL;
              ATerm h_66 (ATerm t)
              {
                ATerm k_65 = NULL,u_65 = NULL;
                ATerm k_66 (ATerm t)
                {
                  t = not_null(u_65);
                  if(((x_64 != NULL) && (x_64 != t)))
                    _fail(t);
                  else
                    x_64 = t;
                  t = not_null(u_65);
                  return(t);
                }
                t = not_null(j_65);
                if(((u_64 != NULL) && (u_64 != t)))
                  _fail(t);
                else
                  u_64 = t;
                t = not_null(j_65);
                {
                  ATerm l_65 = NULL;
                  ATerm i_66 (ATerm t)
                  {
                    t = not_null(l_65);
                    if(((k_65 != NULL) && (k_65 != t)))
                      _fail(t);
                    else
                      k_65 = t;
                    t = not_null(l_65);
                    return(t);
                  }
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_64), not_null(w_64));
                  t = zip_1_0(_id, t);
                  if(((l_65 != NULL) && (l_65 != t)))
                    _fail(t);
                  else
                    l_65 = t;
                  t = i_66(t);
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_65), (ATerm) ATinsert(CheckATermList(not_null(p_64)), not_null(q_64)));
                  {
                    ATerm c_4 (ATerm t)
                    {
                      ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL;
                      ATerm j_66 (ATerm t)
                      {
                        ATerm r_65 = NULL,s_65 = NULL,t_65 = NULL;
                        t = not_null(o_65);
                        if(((r_65 != NULL) && (r_65 != t)))
                          _fail(t);
                        else
                          r_65 = t;
                        t = not_null(p_65);
                        if(((s_65 != NULL) && (s_65 != t)))
                          _fail(t);
                        else
                          s_65 = t;
                        t = not_null(q_65);
                        if(((t_65 != NULL) && (t_65 != t)))
                          _fail(t);
                        else
                          t_65 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_65))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_65), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_65)))));
                        return(t);
                      }
                      if(((m_65 != NULL) && (m_65 != t)))
                        _fail(t);
                      else
                        m_65 = t;
                      t = not_null(m_65);
                      if(match_cons(t, sym__2))
                        {
                          n_65 = ATgetArgument(t, 0);
                          q_65 = ATgetArgument(t, 1);
                          t = not_null(n_65);
                          if(match_cons(t, sym__2))
                            {
                              o_65 = ATgetArgument(t, 0);
                              p_65 = ATgetArgument(t, 1);
                              t = j_66(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = zip_1_0(c_4, t);
                    if(((u_65 != NULL) && (u_65 != t)))
                      _fail(t);
                    else
                      u_65 = t;
                    t = k_66(t);
                  }
                }
                return(t);
              }
              t = not_null(f_65);
              if(((t_64 != NULL) && (t_64 != t)))
                _fail(t);
              else
                t_64 = t;
              t = not_null(g_65);
              if(((w_64 != NULL) && (w_64 != t)))
                _fail(t);
              else
                w_64 = t;
              t = not_null(e_65);
              {
                ATerm d_4 (ATerm t)
                {
                  ATerm h_65 = NULL;
                  ATerm i_65 = NULL;
                  ATerm g_66 (ATerm t)
                  {
                    t = not_null(i_65);
                    if(((h_65 != NULL) && (h_65 != t)))
                      _fail(t);
                    else
                      h_65 = t;
                    t = not_null(i_65);
                    return(t);
                  }
                  if(((i_65 != NULL) && (i_65 != t)))
                    _fail(t);
                  else
                    i_65 = t;
                  t = g_66(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_65));
                  return(t);
                }
                t = map_1_0(d_4, t);
                if(((j_65 != NULL) && (j_65 != t)))
                  _fail(t);
                else
                  j_65 = t;
                t = h_66(t);
              }
              return(t);
            }
            t = not_null(d_65);
            if(((s_64 != NULL) && (s_64 != t)))
              _fail(t);
            else
              s_64 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(p_64)), not_null(q_64));
            t = map_1_0(new_0_0, t);
            if(((e_65 != NULL) && (e_65 != t)))
              _fail(t);
            else
              e_65 = t;
            t = not_null(e_65);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_65 = ATgetFirst((ATermList) t);
                g_65 = (ATerm) ATgetNext((ATermList) t);
                t = f_66(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = not_null(z_64);
          if(((r_64 != NULL) && (r_64 != t)))
            _fail(t);
          else
            r_64 = t;
          t = not_null(a_65);
          if(((v_64 != NULL) && (v_64 != t)))
            _fail(t);
          else
            v_64 = t;
          t = not_null(y_64);
          {
            ATerm e_4 (ATerm t)
            {
              ATerm b_65 = NULL;
              ATerm c_65 = NULL;
              ATerm d_66 (ATerm t)
              {
                t = not_null(c_65);
                if(((b_65 != NULL) && (b_65 != t)))
                  _fail(t);
                else
                  b_65 = t;
                t = not_null(c_65);
                return(t);
              }
              if(((c_65 != NULL) && (c_65 != t)))
                _fail(t);
              else
                c_65 = t;
              t = d_66(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_65));
              return(t);
            }
            t = map_1_0(e_4, t);
            if(((d_65 != NULL) && (d_65 != t)))
              _fail(t);
            else
              d_65 = t;
            t = e_66(t);
          }
          return(t);
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(p_64)), not_null(q_64));
        t = map_1_0(new_0_0, t);
        if(((y_64 != NULL) && (y_64 != t)))
          _fail(t);
        else
          y_64 = t;
        t = not_null(y_64);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_64 = ATgetFirst((ATermList) t);
            a_65 = (ATerm) ATgetNext((ATermList) t);
            t = c_66(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = r_34;
      {
        ATerm s_34;
        s_34 = t;
        {
          ATerm w_65 = NULL;
          ATerm l_66 (ATerm t)
          {
            t = not_null(w_65);
            if(((v_65 != NULL) && (v_65 != t)))
              _fail(t);
            else
              v_65 = t;
            t = not_null(w_65);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_64), not_null(w_64));
          t = conc_0_0(t);
          if(((w_65 != NULL) && (w_65 != t)))
            _fail(t);
          else
            w_65 = t;
          t = l_66(t);
        }
        t = s_34;
        {
          ATerm t_34;
          t_34 = t;
          {
            ATerm y_65 = NULL;
            ATerm m_66 (ATerm t)
            {
              t = not_null(y_65);
              if(((x_65 != NULL) && (x_65 != t)))
                _fail(t);
              else
                x_65 = t;
              t = not_null(y_65);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(o_64), not_null(s_64)), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_64))));
            t = Mapp2_0_0(t);
            if(((y_65 != NULL) && (y_65 != t)))
              _fail(t);
            else
              y_65 = t;
            t = m_66(t);
          }
          t = t_34;
          {
            ATerm a_66 = NULL;
            ATerm n_66 (ATerm t)
            {
              t = not_null(a_66);
              if(((z_65 != NULL) && (z_65 != t)))
                _fail(t);
              else
                z_65 = t;
              t = not_null(a_66);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(o_64), not_null(u_64)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_64))));
            t = Bapp2_0_0(t);
            if(((a_66 != NULL) && (a_66 != t)))
              _fail(t);
            else
              a_66 = t;
            t = n_66(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(v_65)), not_null(t_64)), not_null(r_64)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_65), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(x_64)), not_null(z_65))));
          }
        }
      }
    }
    return(t);
  }
  if(((e_64 != NULL) && (e_64 != t)))
    _fail(t);
  else
    e_64 = t;
  t = not_null(e_64);
  if(match_cons(t, sym_Call_2))
    {
      f_64 = ATgetArgument(t, 0);
      h_64 = ATgetArgument(t, 1);
      t = not_null(f_64);
      if(match_cons(t, sym_SVar_1))
        {
          g_64 = ATgetArgument(t, 0);
          t = not_null(g_64);
          if(match_string(t, "Anno_Cong__"))
            {
              t = not_null(h_64);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_64 = ATgetFirst((ATermList) t);
                  l_64 = (ATerm) ATgetNext((ATermList) t);
                  t = not_null(i_64);
                  if(match_cons(t, sym_Cong_2))
                    {
                      j_64 = ATgetArgument(t, 0);
                      k_64 = ATgetArgument(t, 1);
                      t = not_null(l_64);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          m_64 = ATgetFirst((ATermList) t);
                          n_64 = (ATerm) ATgetNext((ATermList) t);
                          t = not_null(n_64);
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = b_66(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm As_2_0 (ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL;
  ATerm i_67 (ATerm t)
  {
    ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,c_67 = NULL;
    ATerm k_67 (ATerm t)
    {
      ATerm d_67 = NULL,e_67 = NULL;
      ATerm l_67 (ATerm t)
      {
        ATerm f_67 = NULL,g_67 = NULL;
        t = not_null(e_67);
        if(((f_67 != NULL) && (f_67 != t)))
          _fail(t);
        else
          f_67 = t;
        t = not_null(e_67);
        {
          ATerm h_67 = NULL;
          ATerm m_67 (ATerm t)
          {
            t = not_null(h_67);
            if(((g_67 != NULL) && (g_67 != t)))
              _fail(t);
            else
              g_67 = t;
            t = not_null(h_67);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(d_67), not_null(f_67)), not_null(a_67));
          if(((h_67 != NULL) && (h_67 != t)))
            _fail(t);
          else
            h_67 = t;
          t = m_67(t);
          t = not_null(g_67);
        }
        return(t);
      }
      t = not_null(c_67);
      if(((d_67 != NULL) && (d_67 != t)))
        _fail(t);
      else
        d_67 = t;
      t = not_null(z_66);
      t = f_97(t);
      if(((e_67 != NULL) && (e_67 != t)))
        _fail(t);
      else
        e_67 = t;
      t = l_67(t);
      return(t);
    }
    t = not_null(u_66);
    if(((x_66 != NULL) && (x_66 != t)))
      _fail(t);
    else
      x_66 = t;
    t = not_null(v_66);
    if(((y_66 != NULL) && (y_66 != t)))
      _fail(t);
    else
      y_66 = t;
    t = not_null(w_66);
    if(((z_66 != NULL) && (z_66 != t)))
      _fail(t);
    else
      z_66 = t;
    t = not_null(u_66);
    {
      ATerm b_67 = NULL;
      ATerm j_67 (ATerm t)
      {
        t = not_null(b_67);
        if(((a_67 != NULL) && (a_67 != t)))
          _fail(t);
        else
          a_67 = t;
        t = not_null(b_67);
        return(t);
      }
      t = SSLgetAnnotations(not_null(x_66));
      if(((b_67 != NULL) && (b_67 != t)))
        _fail(t);
      else
        b_67 = t;
      t = j_67(t);
      t = not_null(y_66);
      t = e_97(t);
      if(((c_67 != NULL) && (c_67 != t)))
        _fail(t);
      else
        c_67 = t;
      t = k_67(t);
    }
    return(t);
  }
  if(((u_66 != NULL) && (u_66 != t)))
    _fail(t);
  else
    u_66 = t;
  t = not_null(u_66);
  if(match_cons(t, sym_As_2))
    {
      v_66 = ATgetArgument(t, 0);
      w_66 = ATgetArgument(t, 1);
      t = i_67(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm PrimT_3_0 (ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL;
  ATerm p_68 (ATerm t)
  {
    ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,h_68 = NULL;
    ATerm r_68 (ATerm t)
    {
      ATerm i_68 = NULL,j_68 = NULL;
      ATerm s_68 (ATerm t)
      {
        ATerm k_68 = NULL,l_68 = NULL;
        ATerm t_68 (ATerm t)
        {
          ATerm m_68 = NULL,n_68 = NULL;
          t = not_null(l_68);
          if(((m_68 != NULL) && (m_68 != t)))
            _fail(t);
          else
            m_68 = t;
          t = not_null(l_68);
          {
            ATerm o_68 = NULL;
            ATerm u_68 (ATerm t)
            {
              t = not_null(o_68);
              if(((n_68 != NULL) && (n_68 != t)))
                _fail(t);
              else
                n_68 = t;
              t = not_null(o_68);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(i_68), not_null(k_68), not_null(m_68)), not_null(f_68));
            if(((o_68 != NULL) && (o_68 != t)))
              _fail(t);
            else
              o_68 = t;
            t = u_68(t);
            t = not_null(n_68);
          }
          return(t);
        }
        t = not_null(j_68);
        if(((k_68 != NULL) && (k_68 != t)))
          _fail(t);
        else
          k_68 = t;
        t = not_null(e_68);
        t = f_101(t);
        if(((l_68 != NULL) && (l_68 != t)))
          _fail(t);
        else
          l_68 = t;
        t = t_68(t);
        return(t);
      }
      t = not_null(h_68);
      if(((i_68 != NULL) && (i_68 != t)))
        _fail(t);
      else
        i_68 = t;
      t = not_null(d_68);
      t = e_101(t);
      if(((j_68 != NULL) && (j_68 != t)))
        _fail(t);
      else
        j_68 = t;
      t = s_68(t);
      return(t);
    }
    t = not_null(x_67);
    if(((b_68 != NULL) && (b_68 != t)))
      _fail(t);
    else
      b_68 = t;
    t = not_null(y_67);
    if(((c_68 != NULL) && (c_68 != t)))
      _fail(t);
    else
      c_68 = t;
    t = not_null(z_67);
    if(((d_68 != NULL) && (d_68 != t)))
      _fail(t);
    else
      d_68 = t;
    t = not_null(a_68);
    if(((e_68 != NULL) && (e_68 != t)))
      _fail(t);
    else
      e_68 = t;
    t = not_null(x_67);
    {
      ATerm g_68 = NULL;
      ATerm q_68 (ATerm t)
      {
        t = not_null(g_68);
        if(((f_68 != NULL) && (f_68 != t)))
          _fail(t);
        else
          f_68 = t;
        t = not_null(g_68);
        return(t);
      }
      t = SSLgetAnnotations(not_null(b_68));
      if(((g_68 != NULL) && (g_68 != t)))
        _fail(t);
      else
        g_68 = t;
      t = q_68(t);
      t = not_null(c_68);
      t = d_101(t);
      if(((h_68 != NULL) && (h_68 != t)))
        _fail(t);
      else
        h_68 = t;
      t = r_68(t);
    }
    return(t);
  }
  if(((x_67 != NULL) && (x_67 != t)))
    _fail(t);
  else
    x_67 = t;
  t = not_null(x_67);
  if(match_cons(t, sym_PrimT_3))
    {
      y_67 = ATgetArgument(t, 0);
      z_67 = ATgetArgument(t, 1);
      a_68 = ATgetArgument(t, 2);
      t = p_68(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Explode_2_0 (ATerm x_96 (ATerm), ATerm y_96 (ATerm), ATerm t)
{
  ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL;
  ATerm p_69 (ATerm t)
  {
    ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,j_69 = NULL;
    ATerm r_69 (ATerm t)
    {
      ATerm k_69 = NULL,l_69 = NULL;
      ATerm s_69 (ATerm t)
      {
        ATerm m_69 = NULL,n_69 = NULL;
        t = not_null(l_69);
        if(((m_69 != NULL) && (m_69 != t)))
          _fail(t);
        else
          m_69 = t;
        t = not_null(l_69);
        {
          ATerm o_69 = NULL;
          ATerm t_69 (ATerm t)
          {
            t = not_null(o_69);
            if(((n_69 != NULL) && (n_69 != t)))
              _fail(t);
            else
              n_69 = t;
            t = not_null(o_69);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(k_69), not_null(m_69)), not_null(h_69));
          if(((o_69 != NULL) && (o_69 != t)))
            _fail(t);
          else
            o_69 = t;
          t = t_69(t);
          t = not_null(n_69);
        }
        return(t);
      }
      t = not_null(j_69);
      if(((k_69 != NULL) && (k_69 != t)))
        _fail(t);
      else
        k_69 = t;
      t = not_null(g_69);
      t = y_96(t);
      if(((l_69 != NULL) && (l_69 != t)))
        _fail(t);
      else
        l_69 = t;
      t = s_69(t);
      return(t);
    }
    t = not_null(b_69);
    if(((e_69 != NULL) && (e_69 != t)))
      _fail(t);
    else
      e_69 = t;
    t = not_null(c_69);
    if(((f_69 != NULL) && (f_69 != t)))
      _fail(t);
    else
      f_69 = t;
    t = not_null(d_69);
    if(((g_69 != NULL) && (g_69 != t)))
      _fail(t);
    else
      g_69 = t;
    t = not_null(b_69);
    {
      ATerm i_69 = NULL;
      ATerm q_69 (ATerm t)
      {
        t = not_null(i_69);
        if(((h_69 != NULL) && (h_69 != t)))
          _fail(t);
        else
          h_69 = t;
        t = not_null(i_69);
        return(t);
      }
      t = SSLgetAnnotations(not_null(e_69));
      if(((i_69 != NULL) && (i_69 != t)))
        _fail(t);
      else
        i_69 = t;
      t = q_69(t);
      t = not_null(f_69);
      t = x_96(t);
      if(((j_69 != NULL) && (j_69 != t)))
        _fail(t);
      else
        j_69 = t;
      t = r_69(t);
    }
    return(t);
  }
  if(((b_69 != NULL) && (b_69 != t)))
    _fail(t);
  else
    b_69 = t;
  t = not_null(b_69);
  if(match_cons(t, sym_Explode_2))
    {
      c_69 = ATgetArgument(t, 0);
      d_69 = ATgetArgument(t, 1);
      t = p_69(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Op_2_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm t)
{
  ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL;
  ATerm u_70 (ATerm t)
  {
    ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,o_70 = NULL;
    ATerm w_70 (ATerm t)
    {
      ATerm p_70 = NULL,q_70 = NULL;
      ATerm x_70 (ATerm t)
      {
        ATerm r_70 = NULL,s_70 = NULL;
        t = not_null(q_70);
        if(((r_70 != NULL) && (r_70 != t)))
          _fail(t);
        else
          r_70 = t;
        t = not_null(q_70);
        {
          ATerm t_70 = NULL;
          ATerm y_70 (ATerm t)
          {
            t = not_null(t_70);
            if(((s_70 != NULL) && (s_70 != t)))
              _fail(t);
            else
              s_70 = t;
            t = not_null(t_70);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(p_70), not_null(r_70)), not_null(m_70));
          if(((t_70 != NULL) && (t_70 != t)))
            _fail(t);
          else
            t_70 = t;
          t = y_70(t);
          t = not_null(s_70);
        }
        return(t);
      }
      t = not_null(o_70);
      if(((p_70 != NULL) && (p_70 != t)))
        _fail(t);
      else
        p_70 = t;
      t = not_null(l_70);
      t = u_96(t);
      if(((q_70 != NULL) && (q_70 != t)))
        _fail(t);
      else
        q_70 = t;
      t = x_70(t);
      return(t);
    }
    t = not_null(g_70);
    if(((j_70 != NULL) && (j_70 != t)))
      _fail(t);
    else
      j_70 = t;
    t = not_null(h_70);
    if(((k_70 != NULL) && (k_70 != t)))
      _fail(t);
    else
      k_70 = t;
    t = not_null(i_70);
    if(((l_70 != NULL) && (l_70 != t)))
      _fail(t);
    else
      l_70 = t;
    t = not_null(g_70);
    {
      ATerm n_70 = NULL;
      ATerm v_70 (ATerm t)
      {
        t = not_null(n_70);
        if(((m_70 != NULL) && (m_70 != t)))
          _fail(t);
        else
          m_70 = t;
        t = not_null(n_70);
        return(t);
      }
      t = SSLgetAnnotations(not_null(j_70));
      if(((n_70 != NULL) && (n_70 != t)))
        _fail(t);
      else
        n_70 = t;
      t = v_70(t);
      t = not_null(k_70);
      t = t_96(t);
      if(((o_70 != NULL) && (o_70 != t)))
        _fail(t);
      else
        o_70 = t;
      t = w_70(t);
    }
    return(t);
  }
  if(((g_70 != NULL) && (g_70 != t)))
    _fail(t);
  else
    g_70 = t;
  t = not_null(g_70);
  if(match_cons(t, sym_Op_2))
    {
      h_70 = ATgetArgument(t, 0);
      i_70 = ATgetArgument(t, 1);
      t = u_70(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pat_td_1_0 (ATerm w_138 (ATerm), ATerm t)
{
  ATerm d_35 = t;
  int e_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_138(t);
      ;
      LocalPopChoice(e_35);
    }
  else
    {
      t = d_35;
      {
        ATerm f_35 = t;
        int g_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_4 (ATerm t)
            {
              ATerm g_4 (ATerm t)
              {
                t = pat_td_1_0(w_138, t);
                return(t);
              }
              t = fetch_1_0(g_4, t);
              return(t);
            }
            t = Op_2_0(_id, f_4, t);
            ;
            LocalPopChoice(g_35);
          }
        else
          {
            t = f_35;
            {
              ATerm h_35 = t;
              int u_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_4 (ATerm t)
                  {
                    t = pat_td_1_0(w_138, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, h_4, t);
                  ;
                  LocalPopChoice(u_35);
                }
              else
                {
                  t = h_35;
                  {
                    ATerm v_35 = t;
                    int w_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_4 (ATerm t)
                        {
                          t = pat_td_1_0(w_138, t);
                          return(t);
                        }
                        t = Explode_2_0(i_4, _id, t);
                        ;
                        LocalPopChoice(w_35);
                      }
                    else
                      {
                        t = v_35;
                        {
                          ATerm x_35 = t;
                          int y_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_4 (ATerm t)
                              {
                                ATerm k_4 (ATerm t)
                                {
                                  t = pat_td_1_0(w_138, t);
                                  return(t);
                                }
                                t = fetch_1_0(k_4, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, j_4, t);
                              ;
                              LocalPopChoice(y_35);
                            }
                          else
                            {
                              t = x_35;
                              {
                                ATerm l_4 (ATerm t)
                                {
                                  t = pat_td_1_0(w_138, t);
                                  return(t);
                                }
                                t = As_2_0(_id, l_4, t);
                              }
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
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm p_71 = NULL,q_71 = NULL;
  ATerm t_72 (ATerm t)
  {
    ATerm r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL;
    t = not_null(q_71);
    if(((r_71 != NULL) && (r_71 != t)))
      _fail(t);
    else
      r_71 = t;
    t = not_null(p_71);
    {
      ATerm w_71 = NULL;
      ATerm w_72 (ATerm t)
      {
        ATerm a_72 = NULL;
        ATerm y_72 (ATerm t)
        {
          t = not_null(a_72);
          if(((v_71 != NULL) && (v_71 != t)))
            _fail(t);
          else
            v_71 = t;
          t = not_null(a_72);
          return(t);
        }
        t = not_null(w_71);
        if(((u_71 != NULL) && (u_71 != t)))
          _fail(t);
        else
          u_71 = t;
        t = not_null(r_71);
        {
          ATerm m_4 (ATerm t)
          {
            ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL;
            ATerm x_72 (ATerm t)
            {
              t = not_null(y_71);
              if(((s_71 != NULL) && (s_71 != t)))
                _fail(t);
              else
                s_71 = t;
              t = not_null(z_71);
              if(((t_71 != NULL) && (t_71 != t)))
                _fail(t);
              else
                t_71 = t;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_71)), not_null(s_71));
              return(t);
            }
            if(((x_71 != NULL) && (x_71 != t)))
              _fail(t);
            else
              x_71 = t;
            t = not_null(x_71);
            if(match_cons(t, sym_Anno_2))
              {
                y_71 = ATgetArgument(t, 0);
                z_71 = ATgetArgument(t, 1);
                t = x_72(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(m_4, t);
          if(((a_72 != NULL) && (a_72 != t)))
            _fail(t);
          else
            a_72 = t;
          t = y_72(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((w_71 != NULL) && (w_71 != t)))
        _fail(t);
      else
        w_71 = t;
      t = w_72(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_71)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_71)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_l_36, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_71)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_71))))));
    }
    return(t);
  }
  ATerm u_72 (ATerm t)
  {
    ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL;
    t = not_null(q_71);
    if(((b_72 != NULL) && (b_72 != t)))
      _fail(t);
    else
      b_72 = t;
    t = not_null(p_71);
    {
      ATerm f_72 = NULL;
      ATerm z_72 (ATerm t)
      {
        ATerm i_72 = NULL;
        ATerm b_73 (ATerm t)
        {
          t = not_null(i_72);
          if(((e_72 != NULL) && (e_72 != t)))
            _fail(t);
          else
            e_72 = t;
          t = not_null(i_72);
          return(t);
        }
        t = not_null(f_72);
        if(((d_72 != NULL) && (d_72 != t)))
          _fail(t);
        else
          d_72 = t;
        t = not_null(b_72);
        {
          ATerm n_4 (ATerm t)
          {
            ATerm g_72 = NULL,h_72 = NULL;
            ATerm a_73 (ATerm t)
            {
              t = not_null(h_72);
              if(((c_72 != NULL) && (c_72 != t)))
                _fail(t);
              else
                c_72 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_72));
              return(t);
            }
            if(((g_72 != NULL) && (g_72 != t)))
              _fail(t);
            else
              g_72 = t;
            t = not_null(g_72);
            if(match_cons(t, sym_RootApp_1))
              {
                h_72 = ATgetArgument(t, 0);
                t = a_73(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(n_4, t);
          if(((i_72 != NULL) && (i_72 != t)))
            _fail(t);
          else
            i_72 = t;
          t = b_73(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((f_72 != NULL) && (f_72 != t)))
        _fail(t);
      else
        f_72 = t;
      t = z_72(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_72)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_72)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_72))), not_null(c_72))));
    }
    return(t);
  }
  ATerm v_72 (ATerm t)
  {
    ATerm j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL;
    t = not_null(q_71);
    if(((j_72 != NULL) && (j_72 != t)))
      _fail(t);
    else
      j_72 = t;
    t = not_null(p_71);
    {
      ATerm o_72 = NULL;
      ATerm c_73 (ATerm t)
      {
        ATerm s_72 = NULL;
        ATerm i_73 (ATerm t)
        {
          t = not_null(s_72);
          if(((n_72 != NULL) && (n_72 != t)))
            _fail(t);
          else
            n_72 = t;
          t = not_null(s_72);
          return(t);
        }
        t = not_null(o_72);
        if(((m_72 != NULL) && (m_72 != t)))
          _fail(t);
        else
          m_72 = t;
        t = not_null(j_72);
        {
          ATerm o_4 (ATerm t)
          {
            ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL;
            ATerm h_73 (ATerm t)
            {
              t = not_null(q_72);
              if(((l_72 != NULL) && (l_72 != t)))
                _fail(t);
              else
                l_72 = t;
              t = not_null(r_72);
              if(((k_72 != NULL) && (k_72 != t)))
                _fail(t);
              else
                k_72 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_72));
              return(t);
            }
            if(((p_72 != NULL) && (p_72 != t)))
              _fail(t);
            else
              p_72 = t;
            t = not_null(p_72);
            if(match_cons(t, sym_App_2))
              {
                q_72 = ATgetArgument(t, 0);
                r_72 = ATgetArgument(t, 1);
                t = h_73(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(o_4, t);
          if(((s_72 != NULL) && (s_72 != t)))
            _fail(t);
          else
            s_72 = t;
          t = i_73(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((o_72 != NULL) && (o_72 != t)))
        _fail(t);
      else
        o_72 = t;
      t = c_73(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_72)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_72)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_72))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_72)), not_null(l_72)))));
    }
    return(t);
  }
  if(((p_71 != NULL) && (p_71 != t)))
    _fail(t);
  else
    p_71 = t;
  t = not_null(p_71);
  if(match_cons(t, sym_Match_1))
    {
      q_71 = ATgetArgument(t, 0);
      {
        ATerm m_36 = t;
        int n_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_72(t);
            ;
            LocalPopChoice(n_36);
          }
        else
          {
            t = m_36;
            {
              ATerm x_36 = t;
              int y_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_72(t);
                  ;
                  LocalPopChoice(y_36);
                }
              else
                {
                  t = x_36;
                  t = v_72(t);
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
ATerm MatchingCongruence_0_0 (ATerm t)
{
  ATerm u_73 = NULL,v_73 = NULL,w_73 = NULL;
  ATerm e_74 (ATerm t)
  {
    ATerm x_73 = NULL,y_73 = NULL,z_73 = NULL;
    t = not_null(v_73);
    if(((x_73 != NULL) && (x_73 != t)))
      _fail(t);
    else
      x_73 = t;
    t = not_null(w_73);
    if(((y_73 != NULL) && (y_73 != t)))
      _fail(t);
    else
      y_73 = t;
    t = not_null(u_73);
    {
      ATerm d_74 = NULL;
      ATerm h_74 (ATerm t)
      {
        t = not_null(d_74);
        if(((z_73 != NULL) && (z_73 != t)))
          _fail(t);
        else
          z_73 = t;
        t = not_null(d_74);
        return(t);
      }
      t = not_null(y_73);
      {
        ATerm p_4 (ATerm t)
        {
          ATerm a_74 = NULL,b_74 = NULL;
          ATerm f_74 (ATerm t)
          {
            ATerm c_74 = NULL;
            t = not_null(a_74);
            if(((c_74 != NULL) && (c_74 != t)))
              _fail(t);
            else
              c_74 = t;
            t = not_null(c_74);
            return(t);
          }
          ATerm g_74 (ATerm t)
          {
            t = term_z_36;
            return(t);
          }
          if(((b_74 != NULL) && (b_74 != t)))
            _fail(t);
          else
            b_74 = t;
          t = not_null(b_74);
          if(match_cons(t, sym_Match_1))
            {
              a_74 = ATgetArgument(t, 0);
              t = f_74(t);
            }
          else
            {
              if(match_cons(t, sym_Id_0))
                {
                  t = g_74(t);
                }
              else
                {
                  _fail(t);
                }
            }
          return(t);
        }
        t = map_1_0(p_4, t);
        if(((d_74 != NULL) && (d_74 != t)))
          _fail(t);
        else
          d_74 = t;
        t = h_74(t);
      }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(x_73), not_null(z_73)));
      t = Mapp2_0_0(t);
    }
    return(t);
  }
  if(((u_73 != NULL) && (u_73 != t)))
    _fail(t);
  else
    u_73 = t;
  t = not_null(u_73);
  if(match_cons(t, sym_Cong_2))
    {
      v_73 = ATgetArgument(t, 0);
      w_73 = ATgetArgument(t, 1);
      t = e_74(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm EmptyScope_0_0 (ATerm t)
{
  ATerm l_74 = NULL,m_74 = NULL,n_74 = NULL;
  ATerm p_74 (ATerm t)
  {
    ATerm o_74 = NULL;
    t = not_null(n_74);
    if(((o_74 != NULL) && (o_74 != t)))
      _fail(t);
    else
      o_74 = t;
    t = not_null(o_74);
    return(t);
  }
  if(((l_74 != NULL) && (l_74 != t)))
    _fail(t);
  else
    l_74 = t;
  t = not_null(l_74);
  if(match_cons(t, sym_Scope_2))
    {
      m_74 = ATgetArgument(t, 0);
      n_74 = ATgetArgument(t, 1);
      t = not_null(m_74);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = p_74(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL;
  ATerm d_76 (ATerm t)
  {
    ATerm n_75 = NULL,u_75 = NULL,v_75 = NULL;
    t = not_null(e_75);
    if(((n_75 != NULL) && (n_75 != t)))
      _fail(t);
    else
      n_75 = t;
    t = not_null(h_75);
    if(((u_75 != NULL) && (u_75 != t)))
      _fail(t);
    else
      u_75 = t;
    t = not_null(i_75);
    if(((v_75 != NULL) && (v_75 != t)))
      _fail(t);
    else
      v_75 = t;
    t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_75), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_75)), not_null(v_75))));
    return(t);
  }
  ATerm e_76 (ATerm t)
  {
    ATerm w_75 = NULL;
    t = not_null(j_75);
    if(((w_75 != NULL) && (w_75 != t)))
      _fail(t);
    else
      w_75 = t;
    t = (ATerm) ATmakeAppl(sym_Test_1, not_null(w_75));
    return(t);
  }
  ATerm f_76 (ATerm t)
  {
    ATerm x_75 = NULL;
    t = not_null(j_75);
    if(((x_75 != NULL) && (x_75 != t)))
      _fail(t);
    else
      x_75 = t;
    t = (ATerm) ATmakeAppl(sym_Test_1, not_null(x_75));
    return(t);
  }
  ATerm g_76 (ATerm t)
  {
    ATerm a_76 = NULL;
    t = not_null(j_75);
    if(((a_76 != NULL) && (a_76 != t)))
      _fail(t);
    else
      a_76 = t;
    t = (ATerm) ATmakeAppl(sym_Where_1, not_null(a_76));
    return(t);
  }
  ATerm m_76 (ATerm t)
  {
    ATerm b_76 = NULL;
    t = not_null(l_75);
    if(((b_76 != NULL) && (b_76 != t)))
      _fail(t);
    else
      b_76 = t;
    t = not_null(m_75);
    if(((b_76 != NULL) && (b_76 != t)))
      _fail(t);
    else
      b_76 = t;
    t = not_null(b_76);
    return(t);
  }
  ATerm o_76 (ATerm t)
  {
    ATerm c_76 = NULL;
    t = not_null(l_75);
    if(((c_76 != NULL) && (c_76 != t)))
      _fail(t);
    else
      c_76 = t;
    t = not_null(m_75);
    if(((c_76 != NULL) && (c_76 != t)))
      _fail(t);
    else
      c_76 = t;
    t = not_null(c_76);
    return(t);
  }
  if(((k_75 != NULL) && (k_75 != t)))
    _fail(t);
  else
    k_75 = t;
  t = not_null(k_75);
  if(match_cons(t, sym_Where_1))
    {
      l_75 = ATgetArgument(t, 0);
      t = not_null(l_75);
      if(match_cons(t, sym_Seq_2))
        {
          j_75 = ATgetArgument(t, 0);
          f_75 = ATgetArgument(t, 1);
          t = not_null(j_75);
          if(match_cons(t, sym_Where_1))
            {
              e_75 = ATgetArgument(t, 0);
              t = not_null(f_75);
              if(match_cons(t, sym_Seq_2))
                {
                  g_75 = ATgetArgument(t, 0);
                  i_75 = ATgetArgument(t, 1);
                  t = not_null(g_75);
                  if(match_cons(t, sym_Build_1))
                    {
                      h_75 = ATgetArgument(t, 0);
                      t = d_76(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              j_75 = ATgetArgument(t, 0);
              t = g_76(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          l_75 = ATgetArgument(t, 0);
          t = not_null(l_75);
          if(match_cons(t, sym_Test_1))
            {
              j_75 = ATgetArgument(t, 0);
              t = e_76(t);
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              l_75 = ATgetArgument(t, 0);
              t = not_null(l_75);
              if(match_cons(t, sym_Not_1))
                {
                  j_75 = ATgetArgument(t, 0);
                  t = f_76(t);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  l_75 = ATgetArgument(t, 0);
                  m_75 = ATgetArgument(t, 1);
                  t = m_76(t);
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      l_75 = ATgetArgument(t, 0);
                      m_75 = ATgetArgument(t, 1);
                      t = o_76(t);
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
ATerm AssociateR_0_0 (ATerm t)
{
  ATerm w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL;
  ATerm k_77 (ATerm t)
  {
    ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL;
    t = not_null(y_76);
    if(((b_77 != NULL) && (b_77 != t)))
      _fail(t);
    else
      b_77 = t;
    t = not_null(z_76);
    if(((c_77 != NULL) && (c_77 != t)))
      _fail(t);
    else
      c_77 = t;
    t = not_null(a_77);
    if(((d_77 != NULL) && (d_77 != t)))
      _fail(t);
    else
      d_77 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(b_77), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(c_77), not_null(d_77)));
    return(t);
  }
  ATerm l_77 (ATerm t)
  {
    ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL;
    t = not_null(y_76);
    if(((e_77 != NULL) && (e_77 != t)))
      _fail(t);
    else
      e_77 = t;
    t = not_null(z_76);
    if(((f_77 != NULL) && (f_77 != t)))
      _fail(t);
    else
      f_77 = t;
    t = not_null(a_77);
    if(((g_77 != NULL) && (g_77 != t)))
      _fail(t);
    else
      g_77 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_77), (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_77), not_null(g_77)));
    return(t);
  }
  ATerm m_77 (ATerm t)
  {
    ATerm h_77 = NULL,i_77 = NULL,j_77 = NULL;
    t = not_null(y_76);
    if(((h_77 != NULL) && (h_77 != t)))
      _fail(t);
    else
      h_77 = t;
    t = not_null(z_76);
    if(((i_77 != NULL) && (i_77 != t)))
      _fail(t);
    else
      i_77 = t;
    t = not_null(a_77);
    if(((j_77 != NULL) && (j_77 != t)))
      _fail(t);
    else
      j_77 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_77), (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_77), not_null(j_77)));
    return(t);
  }
  if(((w_76 != NULL) && (w_76 != t)))
    _fail(t);
  else
    w_76 = t;
  t = not_null(w_76);
  if(match_cons(t, sym_LChoice_2))
    {
      x_76 = ATgetArgument(t, 0);
      a_77 = ATgetArgument(t, 1);
      t = not_null(x_76);
      if(match_cons(t, sym_LChoice_2))
        {
          y_76 = ATgetArgument(t, 0);
          z_76 = ATgetArgument(t, 1);
          t = k_77(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          x_76 = ATgetArgument(t, 0);
          a_77 = ATgetArgument(t, 1);
          t = not_null(x_76);
          if(match_cons(t, sym_Seq_2))
            {
              y_76 = ATgetArgument(t, 0);
              z_76 = ATgetArgument(t, 1);
              t = l_77(t);
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              x_76 = ATgetArgument(t, 0);
              a_77 = ATgetArgument(t, 1);
              t = not_null(x_76);
              if(match_cons(t, sym_Choice_2))
                {
                  y_76 = ATgetArgument(t, 0);
                  z_76 = ATgetArgument(t, 1);
                  t = m_77(t);
                }
              else
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
ATerm MkConstType_0_0 (ATerm t)
{
  ATerm p_77 = NULL,q_77 = NULL;
  ATerm s_77 (ATerm t)
  {
    ATerm r_77 = NULL;
    t = not_null(q_77);
    if(((r_77 != NULL) && (r_77 != t)))
      _fail(t);
    else
      r_77 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(r_77), term_l_37);
    return(t);
  }
  if(((p_77 != NULL) && (p_77 != t)))
    _fail(t);
  else
    p_77 = t;
  t = not_null(p_77);
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      q_77 = ATgetArgument(t, 0);
      t = s_77(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0_0 (ATerm t)
{
  ATerm v_77 = NULL,w_77 = NULL;
  ATerm y_77 (ATerm t)
  {
    ATerm x_77 = NULL;
    t = not_null(w_77);
    if(((x_77 != NULL) && (x_77 != t)))
      _fail(t);
    else
      x_77 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(x_77), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_37), term_l_37));
    return(t);
  }
  if(((v_77 != NULL) && (v_77 != t)))
    _fail(t);
  else
    v_77 = t;
  t = not_null(v_77);
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      w_77 = ATgetArgument(t, 0);
      t = y_77(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm u_37 = t;
  int v_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(q_0, _id, t);
      {
        ATerm q_4 (ATerm t)
        {
          ATerm r_4 (ATerm t)
          {
            t = map1_1_0(q_0, t);
            return(t);
          }
          t = try_1_0(r_4, t);
          return(t);
        }
        t = Cons_2_0(_id, q_4, t);
      }
      ;
      LocalPopChoice(v_37);
    }
  else
    {
      t = u_37;
      {
        ATerm s_4 (ATerm t)
        {
          t = map1_1_0(q_0, t);
          return(t);
        }
        t = Cons_2_0(_id, s_4, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL,n_79 = NULL,o_79 = NULL,d_80 = NULL;
  ATerm z_82 (ATerm t)
  {
    ATerm j_80 = NULL,m_80 = NULL;
    t = not_null(o_79);
    if(((j_80 != NULL) && (j_80 != t)))
      _fail(t);
    else
      j_80 = t;
    t = not_null(d_80);
    if(((m_80 != NULL) && (m_80 != t)))
      _fail(t);
    else
      m_80 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(j_80), not_null(m_80));
    return(t);
  }
  ATerm a_83 (ATerm t)
  {
    ATerm n_80 = NULL,o_80 = NULL;
    t = not_null(d_79);
    if(((n_80 != NULL) && (n_80 != t)))
      _fail(t);
    else
      n_80 = t;
    t = not_null(e_79);
    if(((o_80 != NULL) && (o_80 != t)))
      _fail(t);
    else
      o_80 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_80), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(o_80)));
    return(t);
  }
  ATerm b_83 (ATerm t)
  {
    t = term_w_37;
    return(t);
  }
  ATerm c_83 (ATerm t)
  {
    ATerm p_80 = NULL,q_80 = NULL;
    t = not_null(d_79);
    if(((p_80 != NULL) && (p_80 != t)))
      _fail(t);
    else
      p_80 = t;
    t = not_null(e_79);
    if(((q_80 != NULL) && (q_80 != t)))
      _fail(t);
    else
      q_80 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(p_80), (ATerm) ATmakeAppl(sym_Choices_1, not_null(q_80)));
    return(t);
  }
  ATerm d_83 (ATerm t)
  {
    t = term_w_37;
    return(t);
  }
  ATerm e_83 (ATerm t)
  {
    ATerm r_80 = NULL,s_80 = NULL;
    t = not_null(d_79);
    if(((r_80 != NULL) && (r_80 != t)))
      _fail(t);
    else
      r_80 = t;
    t = not_null(e_79);
    if(((s_80 != NULL) && (s_80 != t)))
      _fail(t);
    else
      s_80 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_80), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(s_80)));
    return(t);
  }
  ATerm f_83 (ATerm t)
  {
    t = term_e_15;
    return(t);
  }
  ATerm d_84 (ATerm t)
  {
    ATerm t_80 = NULL,u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL;
    t = not_null(o_79);
    if(((t_80 != NULL) && (t_80 != t)))
      _fail(t);
    else
      t_80 = t;
    t = not_null(d_80);
    if(((u_80 != NULL) && (u_80 != t)))
      _fail(t);
    else
      u_80 = t;
    t = not_null(g_79);
    if(((v_80 != NULL) && (v_80 != t)))
      _fail(t);
    else
      v_80 = t;
    t = not_null(f_79);
    if(((w_80 != NULL) && (w_80 != t)))
      _fail(t);
    else
      w_80 = t;
    t = not_null(n_79);
    {
      ATerm z_80 = NULL;
      ATerm l_84 (ATerm t)
      {
        ATerm a_81 = NULL;
        ATerm m_84 (ATerm t)
        {
          t = not_null(a_81);
          if(((y_80 != NULL) && (y_80 != t)))
            _fail(t);
          else
            y_80 = t;
          t = not_null(a_81);
          return(t);
        }
        t = not_null(z_80);
        if(((x_80 != NULL) && (x_80 != t)))
          _fail(t);
        else
          x_80 = t;
        t = not_null(v_80);
        {
          ATerm t_4 (ATerm t)
          {
            t = try_1_0(MkConstType_0_0, t);
            return(t);
          }
          t = map1_1_0(t_4, t);
          if(((a_81 != NULL) && (a_81 != t)))
            _fail(t);
          else
            a_81 = t;
          t = m_84(t);
        }
        return(t);
      }
      t = not_null(u_80);
      t = map1_1_0(MkFunType_0_0, t);
      if(((z_80 != NULL) && (z_80 != t)))
        _fail(t);
      else
        z_80 = t;
      t = l_84(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(t_80), not_null(x_80), not_null(y_80), not_null(w_80));
    }
    return(t);
  }
  ATerm e_84 (ATerm t)
  {
    ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL,f_81 = NULL,g_81 = NULL;
    t = not_null(o_79);
    if(((b_81 != NULL) && (b_81 != t)))
      _fail(t);
    else
      b_81 = t;
    t = not_null(d_80);
    if(((c_81 != NULL) && (c_81 != t)))
      _fail(t);
    else
      c_81 = t;
    t = not_null(g_79);
    if(((d_81 != NULL) && (d_81 != t)))
      _fail(t);
    else
      d_81 = t;
    t = not_null(f_79);
    if(((e_81 != NULL) && (e_81 != t)))
      _fail(t);
    else
      e_81 = t;
    t = not_null(n_79);
    {
      ATerm h_81 = NULL;
      ATerm h_88 (ATerm t)
      {
        ATerm i_81 = NULL;
        ATerm i_88 (ATerm t)
        {
          t = not_null(i_81);
          if(((g_81 != NULL) && (g_81 != t)))
            _fail(t);
          else
            g_81 = t;
          t = not_null(i_81);
          return(t);
        }
        t = not_null(h_81);
        if(((f_81 != NULL) && (f_81 != t)))
          _fail(t);
        else
          f_81 = t;
        t = not_null(c_81);
        {
          ATerm u_4 (ATerm t)
          {
            t = try_1_0(MkFunType_0_0, t);
            return(t);
          }
          t = map_1_0(u_4, t);
          if(((i_81 != NULL) && (i_81 != t)))
            _fail(t);
          else
            i_81 = t;
          t = i_88(t);
        }
        return(t);
      }
      t = not_null(d_81);
      t = map1_1_0(MkConstType_0_0, t);
      if(((h_81 != NULL) && (h_81 != t)))
        _fail(t);
      else
        h_81 = t;
      t = h_88(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(b_81), not_null(g_81), not_null(f_81), not_null(e_81));
    }
    return(t);
  }
  ATerm f_84 (ATerm t)
  {
    ATerm j_81 = NULL,k_81 = NULL,l_81 = NULL,m_81 = NULL,n_81 = NULL,o_81 = NULL;
    t = not_null(o_79);
    if(((j_81 != NULL) && (j_81 != t)))
      _fail(t);
    else
      j_81 = t;
    t = not_null(d_80);
    if(((k_81 != NULL) && (k_81 != t)))
      _fail(t);
    else
      k_81 = t;
    t = not_null(g_79);
    if(((l_81 != NULL) && (l_81 != t)))
      _fail(t);
    else
      l_81 = t;
    t = not_null(f_79);
    if(((m_81 != NULL) && (m_81 != t)))
      _fail(t);
    else
      m_81 = t;
    t = not_null(n_79);
    {
      ATerm p_81 = NULL;
      ATerm j_88 (ATerm t)
      {
        ATerm a_82 = NULL;
        ATerm k_88 (ATerm t)
        {
          t = not_null(a_82);
          if(((o_81 != NULL) && (o_81 != t)))
            _fail(t);
          else
            o_81 = t;
          t = not_null(a_82);
          return(t);
        }
        t = not_null(p_81);
        if(((n_81 != NULL) && (n_81 != t)))
          _fail(t);
        else
          n_81 = t;
        t = not_null(l_81);
        {
          ATerm v_4 (ATerm t)
          {
            t = try_1_0(MkConstType_0_0, t);
            return(t);
          }
          t = map_1_0(v_4, t);
          if(((a_82 != NULL) && (a_82 != t)))
            _fail(t);
          else
            a_82 = t;
          t = k_88(t);
        }
        return(t);
      }
      t = not_null(k_81);
      t = map1_1_0(MkFunType_0_0, t);
      if(((p_81 != NULL) && (p_81 != t)))
        _fail(t);
      else
        p_81 = t;
      t = j_88(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(j_81), not_null(n_81), not_null(o_81), not_null(m_81));
    }
    return(t);
  }
  ATerm g_84 (ATerm t)
  {
    ATerm b_82 = NULL,d_82 = NULL,p_82 = NULL;
    t = not_null(o_79);
    if(((d_82 != NULL) && (d_82 != t)))
      _fail(t);
    else
      d_82 = t;
    t = not_null(d_80);
    if(((b_82 != NULL) && (b_82 != t)))
      _fail(t);
    else
      b_82 = t;
    t = not_null(g_79);
    if(((p_82 != NULL) && (p_82 != t)))
      _fail(t);
    else
      p_82 = t;
    t = (ATerm) ATmakeAppl(sym_App_2, not_null(b_82), (ATerm) ATmakeAppl(sym_Op_2, term_h_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_82)), not_null(d_82))));
    return(t);
  }
  ATerm h_84 (ATerm t)
  {
    ATerm q_82 = NULL,r_82 = NULL,s_82 = NULL;
    t = not_null(o_79);
    if(((r_82 != NULL) && (r_82 != t)))
      _fail(t);
    else
      r_82 = t;
    t = not_null(d_80);
    if(((q_82 != NULL) && (q_82 != t)))
      _fail(t);
    else
      q_82 = t;
    t = not_null(g_79);
    if(((s_82 != NULL) && (s_82 != t)))
      _fail(t);
    else
      s_82 = t;
    t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(s_82))), not_null(r_82)), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_82))));
    return(t);
  }
  ATerm i_84 (ATerm t)
  {
    ATerm t_82 = NULL,u_82 = NULL;
    t = not_null(o_79);
    if(((t_82 != NULL) && (t_82 != t)))
      _fail(t);
    else
      t_82 = t;
    t = not_null(d_80);
    if(((u_82 != NULL) && (u_82 != t)))
      _fail(t);
    else
      u_82 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_82), (ATerm) ATmakeAppl(sym_Match_1, not_null(u_82)));
    return(t);
  }
  ATerm j_84 (ATerm t)
  {
    ATerm v_82 = NULL,w_82 = NULL;
    t = not_null(o_79);
    if(((v_82 != NULL) && (v_82 != t)))
      _fail(t);
    else
      v_82 = t;
    t = not_null(d_80);
    if(((w_82 != NULL) && (w_82 != t)))
      _fail(t);
    else
      w_82 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_82)), not_null(w_82));
    return(t);
  }
  ATerm k_84 (ATerm t)
  {
    ATerm x_82 = NULL,y_82 = NULL;
    t = not_null(o_79);
    if(((y_82 != NULL) && (y_82 != t)))
      _fail(t);
    else
      y_82 = t;
    t = not_null(d_80);
    if(((x_82 != NULL) && (x_82 != t)))
      _fail(t);
    else
      x_82 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_82)), not_null(y_82));
    return(t);
  }
  if(((n_79 != NULL) && (n_79 != t)))
    _fail(t);
  else
    n_79 = t;
  t = not_null(n_79);
  if(match_cons(t, sym_Lets_2))
    {
      o_79 = ATgetArgument(t, 0);
      d_80 = ATgetArgument(t, 1);
      t = z_82(t);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          o_79 = ATgetArgument(t, 0);
          t = not_null(o_79);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_79 = ATgetFirst((ATermList) t);
              e_79 = (ATerm) ATgetNext((ATermList) t);
              t = a_83(t);
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = b_83(t);
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
              o_79 = ATgetArgument(t, 0);
              t = not_null(o_79);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_79 = ATgetFirst((ATermList) t);
                  e_79 = (ATerm) ATgetNext((ATermList) t);
                  t = c_83(t);
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = d_83(t);
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
                  o_79 = ATgetArgument(t, 0);
                  t = not_null(o_79);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      d_79 = ATgetFirst((ATermList) t);
                      e_79 = (ATerm) ATgetNext((ATermList) t);
                      t = e_83(t);
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = f_83(t);
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
                      o_79 = ATgetArgument(t, 0);
                      d_80 = ATgetArgument(t, 1);
                      g_79 = ATgetArgument(t, 2);
                      f_79 = ATgetArgument(t, 3);
                      t = d_84(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          o_79 = ATgetArgument(t, 0);
                          d_80 = ATgetArgument(t, 1);
                          g_79 = ATgetArgument(t, 2);
                          f_79 = ATgetArgument(t, 3);
                          {
                            ATerm x_37 = t;
                            int y_37 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = e_84(t);
                                ;
                                LocalPopChoice(y_37);
                              }
                            else
                              {
                                t = x_37;
                                t = f_84(t);
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              o_79 = ATgetArgument(t, 0);
                              d_80 = ATgetArgument(t, 1);
                              g_79 = ATgetArgument(t, 2);
                              t = g_84(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  o_79 = ATgetArgument(t, 0);
                                  d_80 = ATgetArgument(t, 1);
                                  g_79 = ATgetArgument(t, 2);
                                  t = h_84(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      o_79 = ATgetArgument(t, 0);
                                      d_80 = ATgetArgument(t, 1);
                                      t = i_84(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          o_79 = ATgetArgument(t, 0);
                                          d_80 = ATgetArgument(t, 1);
                                          t = j_84(t);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              o_79 = ATgetArgument(t, 0);
                                              d_80 = ATgetArgument(t, 1);
                                              t = k_84(t);
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
ATerm F15_0_0 (ATerm t)
{
  ATerm e_90 = NULL,h_90 = NULL;
  ATerm i_90 (ATerm t)
  {
    t = term_w_37;
    return(t);
  }
  if(((e_90 != NULL) && (e_90 != t)))
    _fail(t);
  else
    e_90 = t;
  t = not_null(e_90);
  if(match_cons(t, sym_Where_1))
    {
      h_90 = ATgetArgument(t, 0);
      t = not_null(h_90);
      if(match_cons(t, sym_Fail_0))
        {
          t = i_90(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F14_0_0 (ATerm t)
{
  ATerm m_90 = NULL,n_90 = NULL,o_90 = NULL;
  ATerm q_90 (ATerm t)
  {
    ATerm p_90 = NULL;
    t = not_null(n_90);
    if(((p_90 != NULL) && (p_90 != t)))
      _fail(t);
    else
      p_90 = t;
    t = not_null(p_90);
    return(t);
  }
  if(((m_90 != NULL) && (m_90 != t)))
    _fail(t);
  else
    m_90 = t;
  t = not_null(m_90);
  if(match_cons(t, sym_LChoice_2))
    {
      n_90 = ATgetArgument(t, 0);
      o_90 = ATgetArgument(t, 1);
      t = not_null(o_90);
      if(match_cons(t, sym_Fail_0))
        {
          t = q_90(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F13_0_0 (ATerm t)
{
  ATerm u_90 = NULL,v_90 = NULL,w_90 = NULL;
  ATerm y_90 (ATerm t)
  {
    ATerm x_90 = NULL;
    t = not_null(w_90);
    if(((x_90 != NULL) && (x_90 != t)))
      _fail(t);
    else
      x_90 = t;
    t = not_null(x_90);
    return(t);
  }
  if(((u_90 != NULL) && (u_90 != t)))
    _fail(t);
  else
    u_90 = t;
  t = not_null(u_90);
  if(match_cons(t, sym_LChoice_2))
    {
      v_90 = ATgetArgument(t, 0);
      w_90 = ATgetArgument(t, 1);
      t = not_null(v_90);
      if(match_cons(t, sym_Fail_0))
        {
          t = y_90(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F12_0_0 (ATerm t)
{
  ATerm c_91 = NULL,d_91 = NULL,e_91 = NULL;
  ATerm g_91 (ATerm t)
  {
    ATerm f_91 = NULL;
    t = not_null(d_91);
    if(((f_91 != NULL) && (f_91 != t)))
      _fail(t);
    else
      f_91 = t;
    t = not_null(f_91);
    return(t);
  }
  if(((c_91 != NULL) && (c_91 != t)))
    _fail(t);
  else
    c_91 = t;
  t = not_null(c_91);
  if(match_cons(t, sym_Choice_2))
    {
      d_91 = ATgetArgument(t, 0);
      e_91 = ATgetArgument(t, 1);
      t = not_null(e_91);
      if(match_cons(t, sym_Fail_0))
        {
          t = g_91(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F11_0_0 (ATerm t)
{
  ATerm k_91 = NULL,l_91 = NULL,m_91 = NULL;
  ATerm o_91 (ATerm t)
  {
    ATerm n_91 = NULL;
    t = not_null(m_91);
    if(((n_91 != NULL) && (n_91 != t)))
      _fail(t);
    else
      n_91 = t;
    t = not_null(n_91);
    return(t);
  }
  if(((k_91 != NULL) && (k_91 != t)))
    _fail(t);
  else
    k_91 = t;
  t = not_null(k_91);
  if(match_cons(t, sym_Choice_2))
    {
      l_91 = ATgetArgument(t, 0);
      m_91 = ATgetArgument(t, 1);
      t = not_null(l_91);
      if(match_cons(t, sym_Fail_0))
        {
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
ATerm F10_0_0 (ATerm t)
{
  ATerm s_91 = NULL,t_91 = NULL,u_91 = NULL;
  ATerm y_91 (ATerm t)
  {
    ATerm v_91 = NULL,w_91 = NULL;
    t = not_null(t_91);
    if(((v_91 != NULL) && (v_91 != t)))
      _fail(t);
    else
      v_91 = t;
    t = not_null(u_91);
    if(((w_91 != NULL) && (w_91 != t)))
      _fail(t);
    else
      w_91 = t;
    t = not_null(s_91);
    t = not_null(w_91);
    {
      ATerm w_4 (ATerm t)
      {
        ATerm x_91 = NULL;
        if(((x_91 != NULL) && (x_91 != t)))
          _fail(t);
        else
          x_91 = t;
        t = not_null(x_91);
        if(match_cons(t, sym_Fail_0))
          {
            t = not_null(x_91);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = fetch_1_0(w_4, t);
    }
    t = term_w_37;
    return(t);
  }
  if(((s_91 != NULL) && (s_91 != t)))
    _fail(t);
  else
    s_91 = t;
  t = not_null(s_91);
  if(match_cons(t, sym_Cong_2))
    {
      t_91 = ATgetArgument(t, 0);
      u_91 = ATgetArgument(t, 1);
      t = y_91(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F9_0_0 (ATerm t)
{
  ATerm c_92 = NULL,d_92 = NULL,e_92 = NULL;
  ATerm g_92 (ATerm t)
  {
    ATerm f_92 = NULL;
    t = not_null(d_92);
    if(((f_92 != NULL) && (f_92 != t)))
      _fail(t);
    else
      f_92 = t;
    t = term_w_37;
    return(t);
  }
  if(((c_92 != NULL) && (c_92 != t)))
    _fail(t);
  else
    c_92 = t;
  t = not_null(c_92);
  if(match_cons(t, sym_Path_2))
    {
      d_92 = ATgetArgument(t, 0);
      e_92 = ATgetArgument(t, 1);
      t = not_null(e_92);
      if(match_cons(t, sym_Fail_0))
        {
          t = g_92(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F8_0_0 (ATerm t)
{
  ATerm k_92 = NULL,l_92 = NULL;
  ATerm m_92 (ATerm t)
  {
    t = term_w_37;
    return(t);
  }
  if(((k_92 != NULL) && (k_92 != t)))
    _fail(t);
  else
    k_92 = t;
  t = not_null(k_92);
  if(match_cons(t, sym_One_1))
    {
      l_92 = ATgetArgument(t, 0);
      t = not_null(l_92);
      if(match_cons(t, sym_Fail_0))
        {
          t = m_92(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F7_0_0 (ATerm t)
{
  ATerm q_92 = NULL,t_92 = NULL;
  ATerm u_92 (ATerm t)
  {
    t = term_w_37;
    return(t);
  }
  if(((q_92 != NULL) && (q_92 != t)))
    _fail(t);
  else
    q_92 = t;
  t = not_null(q_92);
  if(match_cons(t, sym_Some_1))
    {
      t_92 = ATgetArgument(t, 0);
      t = not_null(t_92);
      if(match_cons(t, sym_Fail_0))
        {
          t = u_92(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F6_0_0 (ATerm t)
{
  ATerm y_92 = NULL,z_92 = NULL,a_94 = NULL;
  ATerm e_94 (ATerm t)
  {
    ATerm d_94 = NULL;
    t = not_null(z_92);
    if(((d_94 != NULL) && (d_94 != t)))
      _fail(t);
    else
      d_94 = t;
    t = term_w_37;
    return(t);
  }
  if(((y_92 != NULL) && (y_92 != t)))
    _fail(t);
  else
    y_92 = t;
  t = not_null(y_92);
  if(match_cons(t, sym_Rec_2))
    {
      z_92 = ATgetArgument(t, 0);
      a_94 = ATgetArgument(t, 1);
      t = not_null(a_94);
      if(match_cons(t, sym_Fail_0))
        {
          t = e_94(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F5_0_0 (ATerm t)
{
  ATerm i_94 = NULL,j_94 = NULL,k_94 = NULL;
  ATerm m_94 (ATerm t)
  {
    ATerm l_94 = NULL;
    t = not_null(j_94);
    if(((l_94 != NULL) && (l_94 != t)))
      _fail(t);
    else
      l_94 = t;
    t = term_w_37;
    return(t);
  }
  if(((i_94 != NULL) && (i_94 != t)))
    _fail(t);
  else
    i_94 = t;
  t = not_null(i_94);
  if(match_cons(t, sym_Scope_2))
    {
      j_94 = ATgetArgument(t, 0);
      k_94 = ATgetArgument(t, 1);
      t = not_null(k_94);
      if(match_cons(t, sym_Fail_0))
        {
          t = m_94(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F3_0_0 (ATerm t)
{
  ATerm q_94 = NULL,r_94 = NULL,s_94 = NULL;
  ATerm u_94 (ATerm t)
  {
    ATerm t_94 = NULL;
    t = not_null(s_94);
    if(((t_94 != NULL) && (t_94 != t)))
      _fail(t);
    else
      t_94 = t;
    t = term_w_37;
    return(t);
  }
  if(((q_94 != NULL) && (q_94 != t)))
    _fail(t);
  else
    q_94 = t;
  t = not_null(q_94);
  if(match_cons(t, sym_Seq_2))
    {
      r_94 = ATgetArgument(t, 0);
      s_94 = ATgetArgument(t, 1);
      t = not_null(r_94);
      if(match_cons(t, sym_Fail_0))
        {
          t = u_94(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F2_0_0 (ATerm t)
{
  ATerm y_94 = NULL,z_94 = NULL;
  ATerm a_95 (ATerm t)
  {
    t = term_e_15;
    return(t);
  }
  if(((y_94 != NULL) && (y_94 != t)))
    _fail(t);
  else
    y_94 = t;
  t = not_null(y_94);
  if(match_cons(t, sym_Not_1))
    {
      z_94 = ATgetArgument(t, 0);
      t = not_null(z_94);
      if(match_cons(t, sym_Fail_0))
        {
          t = a_95(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F1_0_0 (ATerm t)
{
  ATerm e_95 = NULL,f_95 = NULL;
  ATerm g_95 (ATerm t)
  {
    t = term_w_37;
    return(t);
  }
  if(((e_95 != NULL) && (e_95 != t)))
    _fail(t);
  else
    e_95 = t;
  t = not_null(e_95);
  if(match_cons(t, sym_Test_1))
    {
      f_95 = ATgetArgument(t, 0);
      t = not_null(f_95);
      if(match_cons(t, sym_Fail_0))
        {
          t = g_95(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm z_37 = t;
  int a_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0_0(t);
      ;
      LocalPopChoice(a_38);
    }
  else
    {
      t = z_37;
      {
        ATerm b_38 = t;
        int c_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0_0(t);
            ;
            LocalPopChoice(c_38);
          }
        else
          {
            t = b_38;
            {
              ATerm d_38 = t;
              int e_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0_0(t);
                  ;
                  LocalPopChoice(e_38);
                }
              else
                {
                  t = d_38;
                  {
                    ATerm f_38 = t;
                    int g_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0_0(t);
                        ;
                        LocalPopChoice(g_38);
                      }
                    else
                      {
                        t = f_38;
                        {
                          ATerm h_38 = t;
                          int i_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0_0(t);
                              ;
                              LocalPopChoice(i_38);
                            }
                          else
                            {
                              t = h_38;
                              {
                                ATerm j_38 = t;
                                int k_38 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0_0(t);
                                    ;
                                    LocalPopChoice(k_38);
                                  }
                                else
                                  {
                                    t = j_38;
                                    {
                                      ATerm l_38 = t;
                                      int m_38 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0_0(t);
                                          ;
                                          LocalPopChoice(m_38);
                                        }
                                      else
                                        {
                                          t = l_38;
                                          {
                                            ATerm n_38 = t;
                                            int o_38 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0_0(t);
                                                ;
                                                LocalPopChoice(o_38);
                                              }
                                            else
                                              {
                                                t = n_38;
                                                {
                                                  ATerm p_38 = t;
                                                  int q_38 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0_0(t);
                                                      ;
                                                      LocalPopChoice(q_38);
                                                    }
                                                  else
                                                    {
                                                      t = p_38;
                                                      {
                                                        ATerm r_38 = t;
                                                        int s_38 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0_0(t);
                                                            ;
                                                            LocalPopChoice(s_38);
                                                          }
                                                        else
                                                          {
                                                            t = r_38;
                                                            {
                                                              ATerm t_38 = t;
                                                              int u_38 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(u_38);
                                                                }
                                                              else
                                                                {
                                                                  t = t_38;
                                                                  {
                                                                    ATerm w_38 = t;
                                                                    int x_38 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0_0(t);
                                                                        ;
                                                                        LocalPopChoice(x_38);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = w_38;
                                                                        {
                                                                          ATerm y_38 = t;
                                                                          int z_38 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0_0(t);
                                                                              ;
                                                                              LocalPopChoice(z_38);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_38;
                                                                              t = F15_0_0(t);
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm I16_0_0 (ATerm t)
{
  ATerm m_95 = NULL,n_95 = NULL;
  ATerm q_95 (ATerm t)
  {
    t = term_e_15;
    return(t);
  }
  if(((m_95 != NULL) && (m_95 != t)))
    _fail(t);
  else
    m_95 = t;
  t = not_null(m_95);
  if(match_cons(t, sym_Match_1))
    {
      n_95 = ATgetArgument(t, 0);
      t = not_null(n_95);
      if(match_cons(t, sym_Wld_0))
        {
          t = q_95(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm I12_0_0 (ATerm t)
{
  ATerm v_95 = NULL,w_95 = NULL;
  ATerm x_95 (ATerm t)
  {
    t = term_e_15;
    return(t);
  }
  if(((v_95 != NULL) && (v_95 != t)))
    _fail(t);
  else
    v_95 = t;
  t = not_null(v_95);
  if(match_cons(t, sym_Where_1))
    {
      w_95 = ATgetArgument(t, 0);
      t = not_null(w_95);
      if(match_cons(t, sym_Id_0))
        {
          t = x_95(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm I10_0_0 (ATerm t)
{
  ATerm b_96 = NULL,c_96 = NULL;
  ATerm d_96 (ATerm t)
  {
    t = term_e_15;
    return(t);
  }
  if(((b_96 != NULL) && (b_96 != t)))
    _fail(t);
  else
    b_96 = t;
  t = not_null(b_96);
  if(match_cons(t, sym_All_1))
    {
      c_96 = ATgetArgument(t, 0);
      t = not_null(c_96);
      if(match_cons(t, sym_Id_0))
        {
          t = d_96(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm I9_0_0 (ATerm t)
{
  ATerm h_96 = NULL,i_96 = NULL,j_96 = NULL;
  ATerm l_96 (ATerm t)
  {
    ATerm k_96 = NULL;
    t = not_null(i_96);
    if(((k_96 != NULL) && (k_96 != t)))
      _fail(t);
    else
      k_96 = t;
    t = term_e_15;
    return(t);
  }
  if(((h_96 != NULL) && (h_96 != t)))
    _fail(t);
  else
    h_96 = t;
  t = not_null(h_96);
  if(match_cons(t, sym_Rec_2))
    {
      i_96 = ATgetArgument(t, 0);
      j_96 = ATgetArgument(t, 1);
      t = not_null(j_96);
      if(match_cons(t, sym_Id_0))
        {
          t = l_96(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm I8_0_0 (ATerm t)
{
  ATerm p_96 = NULL,q_96 = NULL,r_96 = NULL;
  ATerm v_96 (ATerm t)
  {
    ATerm s_96 = NULL;
    t = not_null(q_96);
    if(((s_96 != NULL) && (s_96 != t)))
      _fail(t);
    else
      s_96 = t;
    t = term_e_15;
    return(t);
  }
  if(((p_96 != NULL) && (p_96 != t)))
    _fail(t);
  else
    p_96 = t;
  t = not_null(p_96);
  if(match_cons(t, sym_Scope_2))
    {
      q_96 = ATgetArgument(t, 0);
      r_96 = ATgetArgument(t, 1);
      t = not_null(r_96);
      if(match_cons(t, sym_Id_0))
        {
          t = v_96(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm I7_0_0 (ATerm t)
{
  ATerm d_97 = NULL,g_97 = NULL,h_97 = NULL;
  ATerm j_97 (ATerm t)
  {
    ATerm i_97 = NULL;
    t = not_null(h_97);
    if(((i_97 != NULL) && (i_97 != t)))
      _fail(t);
    else
      i_97 = t;
    t = term_e_15;
    return(t);
  }
  if(((d_97 != NULL) && (d_97 != t)))
    _fail(t);
  else
    d_97 = t;
  t = not_null(d_97);
  if(match_cons(t, sym_LChoice_2))
    {
      g_97 = ATgetArgument(t, 0);
      h_97 = ATgetArgument(t, 1);
      t = not_null(g_97);
      if(match_cons(t, sym_Id_0))
        {
          t = j_97(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm I4_0_0 (ATerm t)
{
  ATerm q_97 = NULL,r_97 = NULL,s_97 = NULL;
  ATerm u_97 (ATerm t)
  {
    ATerm t_97 = NULL;
    t = not_null(r_97);
    if(((t_97 != NULL) && (t_97 != t)))
      _fail(t);
    else
      t_97 = t;
    t = not_null(t_97);
    return(t);
  }
  if(((q_97 != NULL) && (q_97 != t)))
    _fail(t);
  else
    q_97 = t;
  t = not_null(q_97);
  if(match_cons(t, sym_Seq_2))
    {
      r_97 = ATgetArgument(t, 0);
      s_97 = ATgetArgument(t, 1);
      t = not_null(s_97);
      if(match_cons(t, sym_Id_0))
        {
          t = u_97(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm I3_0_0 (ATerm t)
{
  ATerm y_97 = NULL,z_97 = NULL,a_98 = NULL;
  ATerm c_98 (ATerm t)
  {
    ATerm b_98 = NULL;
    t = not_null(a_98);
    if(((b_98 != NULL) && (b_98 != t)))
      _fail(t);
    else
      b_98 = t;
    t = not_null(b_98);
    return(t);
  }
  if(((y_97 != NULL) && (y_97 != t)))
    _fail(t);
  else
    y_97 = t;
  t = not_null(y_97);
  if(match_cons(t, sym_Seq_2))
    {
      z_97 = ATgetArgument(t, 0);
      a_98 = ATgetArgument(t, 1);
      t = not_null(z_97);
      if(match_cons(t, sym_Id_0))
        {
          t = c_98(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm I2_0_0 (ATerm t)
{
  ATerm g_98 = NULL,h_98 = NULL;
  ATerm i_98 (ATerm t)
  {
    t = term_w_37;
    return(t);
  }
  if(((g_98 != NULL) && (g_98 != t)))
    _fail(t);
  else
    g_98 = t;
  t = not_null(g_98);
  if(match_cons(t, sym_Not_1))
    {
      h_98 = ATgetArgument(t, 0);
      t = not_null(h_98);
      if(match_cons(t, sym_Id_0))
        {
          t = i_98(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm I1_0_0 (ATerm t)
{
  ATerm m_98 = NULL,n_98 = NULL;
  ATerm o_98 (ATerm t)
  {
    t = term_e_15;
    return(t);
  }
  if(((m_98 != NULL) && (m_98 != t)))
    _fail(t);
  else
    m_98 = t;
  t = not_null(m_98);
  if(match_cons(t, sym_Test_1))
    {
      n_98 = ATgetArgument(t, 0);
      t = not_null(n_98);
      if(match_cons(t, sym_Id_0))
        {
          t = o_98(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ElimId_0_0 (ATerm t)
{
  ATerm a_39 = t;
  int b_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0_0(t);
      ;
      LocalPopChoice(b_39);
    }
  else
    {
      t = a_39;
      {
        ATerm c_39 = t;
        int d_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0_0(t);
            ;
            LocalPopChoice(d_39);
          }
        else
          {
            t = c_39;
            {
              ATerm e_39 = t;
              int f_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0_0(t);
                  ;
                  LocalPopChoice(f_39);
                }
              else
                {
                  t = e_39;
                  {
                    ATerm g_39 = t;
                    int h_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0_0(t);
                        ;
                        LocalPopChoice(h_39);
                      }
                    else
                      {
                        t = g_39;
                        {
                          ATerm i_39 = t;
                          int j_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0_0(t);
                              ;
                              LocalPopChoice(j_39);
                            }
                          else
                            {
                              t = i_39;
                              {
                                ATerm k_39 = t;
                                int l_39 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0_0(t);
                                    ;
                                    LocalPopChoice(l_39);
                                  }
                                else
                                  {
                                    t = k_39;
                                    {
                                      ATerm m_39 = t;
                                      int n_39 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0_0(t);
                                          ;
                                          LocalPopChoice(n_39);
                                        }
                                      else
                                        {
                                          t = m_39;
                                          {
                                            ATerm o_39 = t;
                                            int p_39 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0_0(t);
                                                ;
                                                LocalPopChoice(p_39);
                                              }
                                            else
                                              {
                                                t = o_39;
                                                {
                                                  ATerm q_39 = t;
                                                  int r_39 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0_0(t);
                                                      ;
                                                      LocalPopChoice(r_39);
                                                    }
                                                  else
                                                    {
                                                      t = q_39;
                                                      t = I16_0_0(t);
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Simplify_0_0 (ATerm t)
{
  ATerm s_39 = t;
  int t_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(t_39);
    }
  else
    {
      t = s_39;
      {
        ATerm u_39 = t;
        int v_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(v_39);
          }
        else
          {
            t = u_39;
            {
              ATerm w_39 = t;
              int x_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(x_39);
                }
              else
                {
                  t = w_39;
                  {
                    ATerm y_39 = t;
                    int z_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(z_39);
                      }
                    else
                      {
                        t = y_39;
                        {
                          ATerm a_40 = t;
                          int b_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(b_40);
                            }
                          else
                            {
                              t = a_40;
                              {
                                ATerm c_40 = t;
                                int d_40 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0_0(t);
                                    ;
                                    LocalPopChoice(d_40);
                                  }
                                else
                                  {
                                    t = c_40;
                                    {
                                      ATerm e_40 = t;
                                      int f_40 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0_0(t);
                                          ;
                                          LocalPopChoice(f_40);
                                        }
                                      else
                                        {
                                          t = e_40;
                                          {
                                            ATerm g_40 = t;
                                            int h_40 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0_0(t);
                                                ;
                                                LocalPopChoice(h_40);
                                              }
                                            else
                                              {
                                                t = g_40;
                                                t = TransformingCongruence_0_0(t);
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_1_0 (ATerm t_123 (ATerm), ATerm t)
{
  ATerm p_98 (ATerm t)
  {
    ATerm x_4 (ATerm t)
    {
      t = t_123(t);
      t = p_98(t);
      return(t);
    }
    t = try_1_0(x_4, t);
    return(t);
  }
  t = p_98(t);
  return(t);
}
ATerm downup_1_0 (ATerm r_110 (ATerm), ATerm t)
{
  t = r_110(t);
  {
    ATerm y_4 (ATerm t)
    {
      t = downup_1_0(r_110, t);
      return(t);
    }
    t = SRTS_all(y_4, t);
    t = r_110(t);
  }
  return(t);
}
ATerm simplify0_0_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    t = repeat_1_0(Simplify_0_0, t);
    return(t);
  }
  t = downup_1_0(z_4, t);
  return(t);
}
ATerm Zip3_0_0 (ATerm t)
{
  ATerm s_98 = NULL,t_98 = NULL,u_98 = NULL;
  ATerm b_99 (ATerm t)
  {
    ATerm z_98 = NULL,a_99 = NULL;
    t = not_null(t_98);
    if(((z_98 != NULL) && (z_98 != t)))
      _fail(t);
    else
      z_98 = t;
    t = not_null(u_98);
    if(((a_99 != NULL) && (a_99 != t)))
      _fail(t);
    else
      a_99 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(a_99)), not_null(z_98));
    return(t);
  }
  if(((s_98 != NULL) && (s_98 != t)))
    _fail(t);
  else
    s_98 = t;
  t = not_null(s_98);
  if(match_cons(t, sym__2))
    {
      t_98 = ATgetArgument(t, 0);
      u_98 = ATgetArgument(t, 1);
      t = b_99(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0_0 (ATerm t)
{
  ATerm h_99 = NULL,i_99 = NULL,j_99 = NULL,k_99 = NULL,n_99 = NULL,o_99 = NULL,p_99 = NULL;
  ATerm u_99 (ATerm t)
  {
    ATerm q_99 = NULL,r_99 = NULL,s_99 = NULL,t_99 = NULL;
    t = not_null(j_99);
    if(((q_99 != NULL) && (q_99 != t)))
      _fail(t);
    else
      q_99 = t;
    t = not_null(k_99);
    if(((s_99 != NULL) && (s_99 != t)))
      _fail(t);
    else
      s_99 = t;
    t = not_null(o_99);
    if(((r_99 != NULL) && (r_99 != t)))
      _fail(t);
    else
      r_99 = t;
    t = not_null(p_99);
    if(((t_99 != NULL) && (t_99 != t)))
      _fail(t);
    else
      t_99 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(q_99), not_null(r_99)), (ATerm) ATmakeAppl(sym__2, not_null(s_99), not_null(t_99)));
    return(t);
  }
  if(((h_99 != NULL) && (h_99 != t)))
    _fail(t);
  else
    h_99 = t;
  t = not_null(h_99);
  if(match_cons(t, sym__2))
    {
      i_99 = ATgetArgument(t, 0);
      n_99 = ATgetArgument(t, 1);
      t = not_null(i_99);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_99 = ATgetFirst((ATermList) t);
          k_99 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(n_99);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_99 = ATgetFirst((ATermList) t);
              p_99 = (ATerm) ATgetNext((ATermList) t);
              t = u_99(t);
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm c_100 = NULL,d_100 = NULL,g_100 = NULL;
  ATerm j_100 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  if(((c_100 != NULL) && (c_100 != t)))
    _fail(t);
  else
    c_100 = t;
  t = not_null(c_100);
  if(match_cons(t, sym__2))
    {
      d_100 = ATgetArgument(t, 0);
      g_100 = ATgetArgument(t, 1);
      t = not_null(d_100);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = not_null(g_100);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = j_100(t);
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm t)
{
  ATerm k_100 (ATerm t)
  {
    ATerm i_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_117(t);
        ;
        LocalPopChoice(j_40);
      }
    else
      {
        t = i_40;
        t = d_117(t);
        t = _2_0(f_117, k_100, t);
        t = e_117(t);
      }
    return(t);
  }
  t = k_100(t);
  return(t);
}
ATerm zip_1_0 (ATerm h_117 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1_0_0, Zip2_0_0, Zip3_0_0, h_117, t);
  return(t);
}
ATerm IsSVar_0_0 (ATerm t)
{
  ATerm z_100 = NULL,a_101 = NULL,b_101 = NULL,c_101 = NULL,g_101 = NULL;
  ATerm j_101 (ATerm t)
  {
    ATerm h_101 = NULL;
    t = not_null(c_101);
    if(((h_101 != NULL) && (h_101 != t)))
      _fail(t);
    else
      h_101 = t;
    t = not_null(h_101);
    return(t);
  }
  ATerm k_101 (ATerm t)
  {
    ATerm i_101 = NULL;
    t = not_null(c_101);
    if(((i_101 != NULL) && (i_101 != t)))
      _fail(t);
    else
      i_101 = t;
    t = not_null(i_101);
    return(t);
  }
  if(((a_101 != NULL) && (a_101 != t)))
    _fail(t);
  else
    a_101 = t;
  t = not_null(a_101);
  if(match_cons(t, sym_CallT_3))
    {
      b_101 = ATgetArgument(t, 0);
      g_101 = ATgetArgument(t, 1);
      z_100 = ATgetArgument(t, 2);
      t = not_null(b_101);
      if(match_cons(t, sym_SVar_1))
        {
          c_101 = ATgetArgument(t, 0);
          t = not_null(g_101);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = not_null(z_100);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = j_101(t);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
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
          b_101 = ATgetArgument(t, 0);
          g_101 = ATgetArgument(t, 1);
          t = not_null(b_101);
          if(match_cons(t, sym_SVar_1))
            {
              c_101 = ATgetArgument(t, 0);
              t = not_null(g_101);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = k_101(t);
                }
              else
                {
                  _fail(t);
                }
            }
          else
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
ATerm SubsVar_2_0 (ATerm u_136 (ATerm), ATerm v_136 (ATerm), ATerm t)
{
  ATerm o_101 = NULL;
  ATerm u_101 (ATerm t)
  {
    ATerm p_101 = NULL,q_101 = NULL,r_101 = NULL;
    t = not_null(o_101);
    if(((p_101 != NULL) && (p_101 != t)))
      _fail(t);
    else
      p_101 = t;
    t = not_null(o_101);
    {
      ATerm s_101 = NULL;
      ATerm v_101 (ATerm t)
      {
        ATerm t_101 = NULL;
        ATerm w_101 (ATerm t)
        {
          t = not_null(t_101);
          if(((r_101 != NULL) && (r_101 != t)))
            _fail(t);
          else
            r_101 = t;
          t = not_null(t_101);
          return(t);
        }
        t = not_null(s_101);
        if(((q_101 != NULL) && (q_101 != t)))
          _fail(t);
        else
          q_101 = t;
        t = not_null(s_101);
        t = v_136(t);
        if(((t_101 != NULL) && (t_101 != t)))
          _fail(t);
        else
          t_101 = t;
        t = w_101(t);
        return(t);
      }
      t = not_null(p_101);
      t = u_136(t);
      if(((s_101 != NULL) && (s_101 != t)))
        _fail(t);
      else
        s_101 = t;
      t = v_101(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_101), not_null(r_101));
      t = lookup_0_0(t);
    }
    return(t);
  }
  if(((o_101 != NULL) && (o_101 != t)))
    _fail(t);
  else
    o_101 = t;
  t = u_101(t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm b_102 = NULL,c_102 = NULL,d_102 = NULL,e_102 = NULL;
  ATerm v_102 (ATerm t)
  {
    ATerm f_102 = NULL,g_102 = NULL;
    t = not_null(c_102);
    if(((f_102 != NULL) && (f_102 != t)))
      _fail(t);
    else
      f_102 = t;
    t = not_null(d_102);
    if(((g_102 != NULL) && (g_102 != t)))
      _fail(t);
    else
      g_102 = t;
    t = not_null(b_102);
    return(t);
  }
  ATerm w_102 (ATerm t)
  {
    ATerm j_102 = NULL,k_102 = NULL,l_102 = NULL,t_102 = NULL;
    t = not_null(c_102);
    if(((j_102 != NULL) && (j_102 != t)))
      _fail(t);
    else
      j_102 = t;
    t = not_null(d_102);
    if(((k_102 != NULL) && (k_102 != t)))
      _fail(t);
    else
      k_102 = t;
    t = not_null(e_102);
    if(((l_102 != NULL) && (l_102 != t)))
      _fail(t);
    else
      l_102 = t;
    t = not_null(b_102);
    {
      ATerm u_102 = NULL;
      ATerm x_102 (ATerm t)
      {
        t = not_null(u_102);
        if(((t_102 != NULL) && (t_102 != t)))
          _fail(t);
        else
          t_102 = t;
        t = not_null(u_102);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_102), not_null(k_102));
      t = zip_1_0(_id, t);
      if(((u_102 != NULL) && (u_102 != t)))
        _fail(t);
      else
        u_102 = t;
      t = x_102(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_102), not_null(l_102));
    }
    return(t);
  }
  if(((b_102 != NULL) && (b_102 != t)))
    _fail(t);
  else
    b_102 = t;
  t = not_null(b_102);
  if(match_cons(t, sym__2))
    {
      c_102 = ATgetArgument(t, 0);
      d_102 = ATgetArgument(t, 1);
      t = v_102(t);
    }
  else
    {
      if(match_cons(t, sym__3))
        {
          c_102 = ATgetArgument(t, 0);
          d_102 = ATgetArgument(t, 1);
          e_102 = ATgetArgument(t, 2);
          t = w_102(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2_0 (ATerm f_136 (ATerm), ATerm g_136 (ATerm), ATerm t)
{
  ATerm a_103 = NULL,b_103 = NULL,c_103 = NULL;
  ATerm f_103 (ATerm t)
  {
    ATerm d_103 = NULL,e_103 = NULL;
    t = not_null(b_103);
    if(((e_103 != NULL) && (e_103 != t)))
      _fail(t);
    else
      e_103 = t;
    t = not_null(c_103);
    if(((d_103 != NULL) && (d_103 != t)))
      _fail(t);
    else
      d_103 = t;
    t = not_null(d_103);
    {
      ATerm a_5 (ATerm t)
      {
        ATerm b_5 (ATerm t)
        {
          t = not_null(e_103);
          return(t);
        }
        t = SubsVar_2_0(f_136, b_5, t);
        t = g_136(t);
        return(t);
      }
      t = alltd_1_0(a_5, t);
    }
    return(t);
  }
  t = subs_args_0_0(t);
  if(((a_103 != NULL) && (a_103 != t)))
    _fail(t);
  else
    a_103 = t;
  t = not_null(a_103);
  if(match_cons(t, sym__2))
    {
      b_103 = ATgetArgument(t, 0);
      c_103 = ATgetArgument(t, 1);
      t = f_103(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm substitute_1_0 (ATerm h_136 (ATerm), ATerm t)
{
  t = substitute_2_0(h_136, _id, t);
  return(t);
}
ATerm ssubs_0_0 (ATerm t)
{
  t = substitute_1_0(IsSVar_0_0, t);
  return(t);
}
ATerm spaste_1_0 (ATerm u_139 (ATerm), ATerm t)
{
  ATerm k_40 = t;
  int l_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_5 (ATerm t)
      {
        t = split_2_0(_id, u_139, t);
        {
          ATerm d_5 (ATerm t)
          {
            ATerm k_103 = NULL,l_103 = NULL,m_103 = NULL,n_103 = NULL,o_103 = NULL,p_103 = NULL,q_103 = NULL;
            ATerm y_103 (ATerm t)
            {
              ATerm r_103 = NULL,s_103 = NULL,t_103 = NULL;
              t = not_null(n_103);
              if(((r_103 != NULL) && (r_103 != t)))
                _fail(t);
              else
                r_103 = t;
              t = not_null(o_103);
              if(((s_103 != NULL) && (s_103 != t)))
                _fail(t);
              else
                s_103 = t;
              t = not_null(q_103);
              if(((t_103 != NULL) && (t_103 != t)))
                _fail(t);
              else
                t_103 = t;
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(t_103), not_null(r_103), not_null(s_103));
              return(t);
            }
            ATerm z_103 (ATerm t)
            {
              ATerm u_103 = NULL,v_103 = NULL,w_103 = NULL,x_103 = NULL;
              t = not_null(n_103);
              if(((u_103 != NULL) && (u_103 != t)))
                _fail(t);
              else
                u_103 = t;
              t = not_null(o_103);
              if(((v_103 != NULL) && (v_103 != t)))
                _fail(t);
              else
                v_103 = t;
              t = not_null(p_103);
              if(((w_103 != NULL) && (w_103 != t)))
                _fail(t);
              else
                w_103 = t;
              t = not_null(q_103);
              if(((x_103 != NULL) && (x_103 != t)))
                _fail(t);
              else
                x_103 = t;
              t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(x_103), not_null(u_103), not_null(v_103), not_null(w_103));
              return(t);
            }
            if(((k_103 != NULL) && (k_103 != t)))
              _fail(t);
            else
              k_103 = t;
            t = not_null(k_103);
            if(match_cons(t, sym__2))
              {
                l_103 = ATgetArgument(t, 0);
                q_103 = ATgetArgument(t, 1);
                t = not_null(l_103);
                if(match_cons(t, sym_SDef_3))
                  {
                    m_103 = ATgetArgument(t, 0);
                    n_103 = ATgetArgument(t, 1);
                    o_103 = ATgetArgument(t, 2);
                    t = y_103(t);
                  }
                else
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        m_103 = ATgetArgument(t, 0);
                        n_103 = ATgetArgument(t, 1);
                        o_103 = ATgetArgument(t, 2);
                        p_103 = ATgetArgument(t, 3);
                        t = z_103(t);
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
          t = zip_1_0(d_5, t);
        }
        return(t);
      }
      t = Let_2_0(c_5, _id, t);
      ;
      LocalPopChoice(l_40);
    }
  else
    {
      t = k_40;
      {
        ATerm m_40 = t;
        int n_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_5 (ATerm t)
            {
              t = split_2_0(_id, u_139, t);
              t = zip_1_0(ReplaceVar_0_0, t);
              return(t);
            }
            t = SDef_3_0(_id, e_5, _id, t);
            ;
            LocalPopChoice(n_40);
          }
        else
          {
            t = m_40;
            {
              ATerm o_40 = t;
              int p_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_5 (ATerm t)
                  {
                    t = split_2_0(_id, u_139, t);
                    t = zip_1_0(ReplaceVar_0_0, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, f_5, _id, _id, t);
                  ;
                  LocalPopChoice(p_40);
                }
              else
                {
                  t = o_40;
                  {
                    ATerm q_40 = t;
                    int r_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_5 (ATerm t)
                        {
                          t = split_2_0(_id, u_139, t);
                          t = zip_1_0(ReplaceVar_0_0, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, g_5, _id, _id, t);
                        ;
                        LocalPopChoice(r_40);
                      }
                    else
                      {
                        t = q_40;
                        {
                          ATerm h_5 (ATerm t)
                          {
                            t = u_139(t);
                            t = Hd_0_0(t);
                            return(t);
                          }
                          t = Rec_2_0(h_5, _id, t);
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
ATerm Rec_2_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm t)
{
  ATerm g_104 = NULL,h_104 = NULL,i_104 = NULL;
  ATerm u_104 (ATerm t)
  {
    ATerm j_104 = NULL,k_104 = NULL,l_104 = NULL,m_104 = NULL,o_104 = NULL;
    ATerm w_104 (ATerm t)
    {
      ATerm p_104 = NULL,q_104 = NULL;
      ATerm x_104 (ATerm t)
      {
        ATerm r_104 = NULL,s_104 = NULL;
        t = not_null(q_104);
        if(((r_104 != NULL) && (r_104 != t)))
          _fail(t);
        else
          r_104 = t;
        t = not_null(q_104);
        {
          ATerm t_104 = NULL;
          ATerm y_104 (ATerm t)
          {
            t = not_null(t_104);
            if(((s_104 != NULL) && (s_104 != t)))
              _fail(t);
            else
              s_104 = t;
            t = not_null(t_104);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(p_104), not_null(r_104)), not_null(m_104));
          if(((t_104 != NULL) && (t_104 != t)))
            _fail(t);
          else
            t_104 = t;
          t = y_104(t);
          t = not_null(s_104);
        }
        return(t);
      }
      t = not_null(o_104);
      if(((p_104 != NULL) && (p_104 != t)))
        _fail(t);
      else
        p_104 = t;
      t = not_null(l_104);
      t = v_100(t);
      if(((q_104 != NULL) && (q_104 != t)))
        _fail(t);
      else
        q_104 = t;
      t = x_104(t);
      return(t);
    }
    t = not_null(g_104);
    if(((j_104 != NULL) && (j_104 != t)))
      _fail(t);
    else
      j_104 = t;
    t = not_null(h_104);
    if(((k_104 != NULL) && (k_104 != t)))
      _fail(t);
    else
      k_104 = t;
    t = not_null(i_104);
    if(((l_104 != NULL) && (l_104 != t)))
      _fail(t);
    else
      l_104 = t;
    t = not_null(g_104);
    {
      ATerm n_104 = NULL;
      ATerm v_104 (ATerm t)
      {
        t = not_null(n_104);
        if(((m_104 != NULL) && (m_104 != t)))
          _fail(t);
        else
          m_104 = t;
        t = not_null(n_104);
        return(t);
      }
      t = SSLgetAnnotations(not_null(j_104));
      if(((n_104 != NULL) && (n_104 != t)))
        _fail(t);
      else
        n_104 = t;
      t = v_104(t);
      t = not_null(k_104);
      t = u_100(t);
      if(((o_104 != NULL) && (o_104 != t)))
        _fail(t);
      else
        o_104 = t;
      t = w_104(t);
    }
    return(t);
  }
  if(((g_104 != NULL) && (g_104 != t)))
    _fail(t);
  else
    g_104 = t;
  t = not_null(g_104);
  if(match_cons(t, sym_Rec_2))
    {
      h_104 = ATgetArgument(t, 0);
      i_104 = ATgetArgument(t, 1);
      t = u_104(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_3_0 (ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm t)
{
  ATerm g_105 = NULL,h_105 = NULL,i_105 = NULL,j_105 = NULL;
  ATerm y_105 (ATerm t)
  {
    ATerm k_105 = NULL,l_105 = NULL,m_105 = NULL,n_105 = NULL,o_105 = NULL,q_105 = NULL;
    ATerm a_106 (ATerm t)
    {
      ATerm r_105 = NULL,s_105 = NULL;
      ATerm b_106 (ATerm t)
      {
        ATerm t_105 = NULL,u_105 = NULL;
        ATerm c_106 (ATerm t)
        {
          ATerm v_105 = NULL,w_105 = NULL;
          t = not_null(u_105);
          if(((v_105 != NULL) && (v_105 != t)))
            _fail(t);
          else
            v_105 = t;
          t = not_null(u_105);
          {
            ATerm x_105 = NULL;
            ATerm d_106 (ATerm t)
            {
              t = not_null(x_105);
              if(((w_105 != NULL) && (w_105 != t)))
                _fail(t);
              else
                w_105 = t;
              t = not_null(x_105);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(r_105), not_null(t_105), not_null(v_105)), not_null(o_105));
            if(((x_105 != NULL) && (x_105 != t)))
              _fail(t);
            else
              x_105 = t;
            t = d_106(t);
            t = not_null(w_105);
          }
          return(t);
        }
        t = not_null(s_105);
        if(((t_105 != NULL) && (t_105 != t)))
          _fail(t);
        else
          t_105 = t;
        t = not_null(n_105);
        t = o_102(t);
        if(((u_105 != NULL) && (u_105 != t)))
          _fail(t);
        else
          u_105 = t;
        t = c_106(t);
        return(t);
      }
      t = not_null(q_105);
      if(((r_105 != NULL) && (r_105 != t)))
        _fail(t);
      else
        r_105 = t;
      t = not_null(m_105);
      t = n_102(t);
      if(((s_105 != NULL) && (s_105 != t)))
        _fail(t);
      else
        s_105 = t;
      t = b_106(t);
      return(t);
    }
    t = not_null(g_105);
    if(((k_105 != NULL) && (k_105 != t)))
      _fail(t);
    else
      k_105 = t;
    t = not_null(h_105);
    if(((l_105 != NULL) && (l_105 != t)))
      _fail(t);
    else
      l_105 = t;
    t = not_null(i_105);
    if(((m_105 != NULL) && (m_105 != t)))
      _fail(t);
    else
      m_105 = t;
    t = not_null(j_105);
    if(((n_105 != NULL) && (n_105 != t)))
      _fail(t);
    else
      n_105 = t;
    t = not_null(g_105);
    {
      ATerm p_105 = NULL;
      ATerm z_105 (ATerm t)
      {
        t = not_null(p_105);
        if(((o_105 != NULL) && (o_105 != t)))
          _fail(t);
        else
          o_105 = t;
        t = not_null(p_105);
        return(t);
      }
      t = SSLgetAnnotations(not_null(k_105));
      if(((p_105 != NULL) && (p_105 != t)))
        _fail(t);
      else
        p_105 = t;
      t = z_105(t);
      t = not_null(l_105);
      t = m_102(t);
      if(((q_105 != NULL) && (q_105 != t)))
        _fail(t);
      else
        q_105 = t;
      t = a_106(t);
    }
    return(t);
  }
  if(((g_105 != NULL) && (g_105 != t)))
    _fail(t);
  else
    g_105 = t;
  t = not_null(g_105);
  if(match_cons(t, sym_SDef_3))
    {
      h_105 = ATgetArgument(t, 0);
      i_105 = ATgetArgument(t, 1);
      j_105 = ATgetArgument(t, 2);
      t = y_105(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2_0 (ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm t)
{
  ATerm k_106 = NULL,l_106 = NULL,m_106 = NULL;
  ATerm y_106 (ATerm t)
  {
    ATerm n_106 = NULL,o_106 = NULL,p_106 = NULL,q_106 = NULL,s_106 = NULL;
    ATerm a_107 (ATerm t)
    {
      ATerm t_106 = NULL,u_106 = NULL;
      ATerm b_107 (ATerm t)
      {
        ATerm v_106 = NULL,w_106 = NULL;
        t = not_null(u_106);
        if(((v_106 != NULL) && (v_106 != t)))
          _fail(t);
        else
          v_106 = t;
        t = not_null(u_106);
        {
          ATerm x_106 = NULL;
          ATerm c_107 (ATerm t)
          {
            t = not_null(x_106);
            if(((w_106 != NULL) && (w_106 != t)))
              _fail(t);
            else
              w_106 = t;
            t = not_null(x_106);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(t_106), not_null(v_106)), not_null(q_106));
          if(((x_106 != NULL) && (x_106 != t)))
            _fail(t);
          else
            x_106 = t;
          t = c_107(t);
          t = not_null(w_106);
        }
        return(t);
      }
      t = not_null(s_106);
      if(((t_106 != NULL) && (t_106 != t)))
        _fail(t);
      else
        t_106 = t;
      t = not_null(p_106);
      t = y_99(t);
      if(((u_106 != NULL) && (u_106 != t)))
        _fail(t);
      else
        u_106 = t;
      t = b_107(t);
      return(t);
    }
    t = not_null(k_106);
    if(((n_106 != NULL) && (n_106 != t)))
      _fail(t);
    else
      n_106 = t;
    t = not_null(l_106);
    if(((o_106 != NULL) && (o_106 != t)))
      _fail(t);
    else
      o_106 = t;
    t = not_null(m_106);
    if(((p_106 != NULL) && (p_106 != t)))
      _fail(t);
    else
      p_106 = t;
    t = not_null(k_106);
    {
      ATerm r_106 = NULL;
      ATerm z_106 (ATerm t)
      {
        t = not_null(r_106);
        if(((q_106 != NULL) && (q_106 != t)))
          _fail(t);
        else
          q_106 = t;
        t = not_null(r_106);
        return(t);
      }
      t = SSLgetAnnotations(not_null(n_106));
      if(((r_106 != NULL) && (r_106 != t)))
        _fail(t);
      else
        r_106 = t;
      t = z_106(t);
      t = not_null(o_106);
      t = x_99(t);
      if(((s_106 != NULL) && (s_106 != t)))
        _fail(t);
      else
        s_106 = t;
      t = a_107(t);
    }
    return(t);
  }
  if(((k_106 != NULL) && (k_106 != t)))
    _fail(t);
  else
    k_106 = t;
  t = not_null(k_106);
  if(match_cons(t, sym_Let_2))
    {
      l_106 = ATgetArgument(t, 0);
      m_106 = ATgetArgument(t, 1);
      t = y_106(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm v_139 (ATerm), ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm t)
{
  ATerm s_40 = t;
  int t_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(v_139, v_139, t);
      ;
      LocalPopChoice(t_40);
    }
  else
    {
      t = s_40;
      {
        ATerm u_40 = t;
        int v_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(x_139, x_139, v_139, t);
            ;
            LocalPopChoice(v_40);
          }
        else
          {
            t = u_40;
            {
              ATerm w_40 = t;
              int x_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(x_139, x_139, x_139, v_139, t);
                  ;
                  LocalPopChoice(x_40);
                }
              else
                {
                  t = w_40;
                  t = Rec_2_0(x_139, v_139, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm f_107 = NULL,g_107 = NULL,h_107 = NULL,i_107 = NULL,j_107 = NULL;
  ATerm o_107 (ATerm t)
  {
    ATerm k_107 = NULL,l_107 = NULL,m_107 = NULL,n_107 = NULL;
    t = not_null(g_107);
    if(((k_107 != NULL) && (k_107 != t)))
      _fail(t);
    else
      k_107 = t;
    t = not_null(h_107);
    if(((n_107 != NULL) && (n_107 != t)))
      _fail(t);
    else
      n_107 = t;
    t = not_null(i_107);
    if(((l_107 != NULL) && (l_107 != t)))
      _fail(t);
    else
      l_107 = t;
    t = not_null(j_107);
    if(((m_107 != NULL) && (m_107 != t)))
      _fail(t);
    else
      m_107 = t;
    t = not_null(n_107);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((f_107 != NULL) && (f_107 != t)))
    _fail(t);
  else
    f_107 = t;
  t = not_null(f_107);
  if(match_cons(t, sym_RDefT_4))
    {
      g_107 = ATgetArgument(t, 0);
      h_107 = ATgetArgument(t, 1);
      i_107 = ATgetArgument(t, 2);
      j_107 = ATgetArgument(t, 3);
      t = o_107(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm r_107 = NULL,s_107 = NULL,t_107 = NULL,u_107 = NULL,v_107 = NULL;
  ATerm a_108 (ATerm t)
  {
    ATerm w_107 = NULL,x_107 = NULL,y_107 = NULL,z_107 = NULL;
    t = not_null(s_107);
    if(((w_107 != NULL) && (w_107 != t)))
      _fail(t);
    else
      w_107 = t;
    t = not_null(t_107);
    if(((z_107 != NULL) && (z_107 != t)))
      _fail(t);
    else
      z_107 = t;
    t = not_null(u_107);
    if(((x_107 != NULL) && (x_107 != t)))
      _fail(t);
    else
      x_107 = t;
    t = not_null(v_107);
    if(((y_107 != NULL) && (y_107 != t)))
      _fail(t);
    else
      y_107 = t;
    t = not_null(z_107);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((r_107 != NULL) && (r_107 != t)))
    _fail(t);
  else
    r_107 = t;
  t = not_null(r_107);
  if(match_cons(t, sym_SDefT_4))
    {
      s_107 = ATgetArgument(t, 0);
      t_107 = ATgetArgument(t, 1);
      u_107 = ATgetArgument(t, 2);
      v_107 = ATgetArgument(t, 3);
      t = a_108(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind3_0_0 (ATerm t)
{
  ATerm d_108 = NULL,e_108 = NULL,f_108 = NULL;
  ATerm i_108 (ATerm t)
  {
    ATerm g_108 = NULL,h_108 = NULL;
    t = not_null(e_108);
    if(((h_108 != NULL) && (h_108 != t)))
      _fail(t);
    else
      h_108 = t;
    t = not_null(f_108);
    if(((g_108 != NULL) && (g_108 != t)))
      _fail(t);
    else
      g_108 = t;
    t = (ATerm) ATinsert(ATempty, not_null(h_108));
    return(t);
  }
  if(((d_108 != NULL) && (d_108 != t)))
    _fail(t);
  else
    d_108 = t;
  t = not_null(d_108);
  if(match_cons(t, sym_Rec_2))
    {
      e_108 = ATgetArgument(t, 0);
      f_108 = ATgetArgument(t, 1);
      t = i_108(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm l_108 = NULL,m_108 = NULL,n_108 = NULL,o_108 = NULL;
  ATerm s_108 (ATerm t)
  {
    ATerm p_108 = NULL,q_108 = NULL,r_108 = NULL;
    t = not_null(m_108);
    if(((p_108 != NULL) && (p_108 != t)))
      _fail(t);
    else
      p_108 = t;
    t = not_null(n_108);
    if(((r_108 != NULL) && (r_108 != t)))
      _fail(t);
    else
      r_108 = t;
    t = not_null(o_108);
    if(((q_108 != NULL) && (q_108 != t)))
      _fail(t);
    else
      q_108 = t;
    t = not_null(r_108);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((l_108 != NULL) && (l_108 != t)))
    _fail(t);
  else
    l_108 = t;
  t = not_null(l_108);
  if(match_cons(t, sym_SDef_3))
    {
      m_108 = ATgetArgument(t, 0);
      n_108 = ATgetArgument(t, 1);
      o_108 = ATgetArgument(t, 2);
      t = s_108(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm y_108 = NULL,z_108 = NULL,a_109 = NULL;
  ATerm k_109 (ATerm t)
  {
    ATerm b_109 = NULL,c_109 = NULL;
    t = not_null(z_108);
    if(((c_109 != NULL) && (c_109 != t)))
      _fail(t);
    else
      c_109 = t;
    t = not_null(a_109);
    if(((b_109 != NULL) && (b_109 != t)))
      _fail(t);
    else
      b_109 = t;
    t = not_null(c_109);
    {
      ATerm i_5 (ATerm t)
      {
        ATerm d_109 = NULL,e_109 = NULL,f_109 = NULL,g_109 = NULL,h_109 = NULL;
        ATerm l_109 (ATerm t)
        {
          ATerm i_109 = NULL;
          t = not_null(e_109);
          if(((i_109 != NULL) && (i_109 != t)))
            _fail(t);
          else
            i_109 = t;
          t = not_null(i_109);
          return(t);
        }
        ATerm m_109 (ATerm t)
        {
          ATerm j_109 = NULL;
          t = not_null(e_109);
          if(((j_109 != NULL) && (j_109 != t)))
            _fail(t);
          else
            j_109 = t;
          t = not_null(j_109);
          return(t);
        }
        if(((d_109 != NULL) && (d_109 != t)))
          _fail(t);
        else
          d_109 = t;
        t = not_null(d_109);
        if(match_cons(t, sym_SDef_3))
          {
            e_109 = ATgetArgument(t, 0);
            f_109 = ATgetArgument(t, 1);
            g_109 = ATgetArgument(t, 2);
            t = l_109(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                e_109 = ATgetArgument(t, 0);
                f_109 = ATgetArgument(t, 1);
                g_109 = ATgetArgument(t, 2);
                h_109 = ATgetArgument(t, 3);
                t = m_109(t);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      t = map_1_0(i_5, t);
    }
    return(t);
  }
  if(((y_108 != NULL) && (y_108 != t)))
    _fail(t);
  else
    y_108 = t;
  t = not_null(y_108);
  if(match_cons(t, sym_Let_2))
    {
      z_108 = ATgetArgument(t, 0);
      a_109 = ATgetArgument(t, 1);
      t = k_109(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1_0 (ATerm w_99 (ATerm), ATerm t)
{
  ATerm u_109 = NULL,v_109 = NULL;
  ATerm e_110 (ATerm t)
  {
    ATerm w_109 = NULL,x_109 = NULL,y_109 = NULL,a_110 = NULL;
    ATerm g_110 (ATerm t)
    {
      ATerm b_110 = NULL,c_110 = NULL;
      t = not_null(a_110);
      if(((b_110 != NULL) && (b_110 != t)))
        _fail(t);
      else
        b_110 = t;
      t = not_null(a_110);
      {
        ATerm d_110 = NULL;
        ATerm h_110 (ATerm t)
        {
          t = not_null(d_110);
          if(((c_110 != NULL) && (c_110 != t)))
            _fail(t);
          else
            c_110 = t;
          t = not_null(d_110);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(b_110)), not_null(y_109));
        if(((d_110 != NULL) && (d_110 != t)))
          _fail(t);
        else
          d_110 = t;
        t = h_110(t);
        t = not_null(c_110);
      }
      return(t);
    }
    t = not_null(u_109);
    if(((w_109 != NULL) && (w_109 != t)))
      _fail(t);
    else
      w_109 = t;
    t = not_null(v_109);
    if(((x_109 != NULL) && (x_109 != t)))
      _fail(t);
    else
      x_109 = t;
    t = not_null(u_109);
    {
      ATerm z_109 = NULL;
      ATerm f_110 (ATerm t)
      {
        t = not_null(z_109);
        if(((y_109 != NULL) && (y_109 != t)))
          _fail(t);
        else
          y_109 = t;
        t = not_null(z_109);
        return(t);
      }
      t = SSLgetAnnotations(not_null(w_109));
      if(((z_109 != NULL) && (z_109 != t)))
        _fail(t);
      else
        z_109 = t;
      t = f_110(t);
      t = not_null(x_109);
      t = w_99(t);
      if(((a_110 != NULL) && (a_110 != t)))
        _fail(t);
      else
        a_110 = t;
      t = g_110(t);
    }
    return(t);
  }
  if(((u_109 != NULL) && (u_109 != t)))
    _fail(t);
  else
    u_109 = t;
  t = not_null(u_109);
  if(match_cons(t, sym_SVar_1))
    {
      v_109 = ATgetArgument(t, 0);
      t = e_110(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm y_40 = t;
    int z_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(z_40);
      }
    else
      {
        t = y_40;
        {
          ATerm a_41 = t;
          int b_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(b_41);
            }
          else
            {
              t = a_41;
              {
                ATerm c_41 = t;
                int d_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0_0(t);
                    ;
                    LocalPopChoice(d_41);
                  }
                else
                  {
                    t = c_41;
                    {
                      ATerm e_41 = t;
                      int f_41 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(f_41);
                        }
                      else
                        {
                          t = e_41;
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
  t = rename_4_0(SVar_1_0, j_5, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm ReplaceVar_0_0 (ATerm t)
{
  ATerm m_110 = NULL,n_110 = NULL,s_110 = NULL,t_110 = NULL,u_110 = NULL;
  ATerm a_111 (ATerm t)
  {
    ATerm v_110 = NULL,w_110 = NULL;
    t = not_null(s_110);
    if(((v_110 != NULL) && (v_110 != t)))
      _fail(t);
    else
      v_110 = t;
    t = not_null(u_110);
    if(((w_110 != NULL) && (w_110 != t)))
      _fail(t);
    else
      w_110 = t;
    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, not_null(w_110));
    return(t);
  }
  ATerm b_111 (ATerm t)
  {
    ATerm x_110 = NULL,y_110 = NULL,z_110 = NULL;
    t = not_null(s_110);
    if(((x_110 != NULL) && (x_110 != t)))
      _fail(t);
    else
      x_110 = t;
    t = not_null(t_110);
    if(((z_110 != NULL) && (z_110 != t)))
      _fail(t);
    else
      z_110 = t;
    t = not_null(u_110);
    if(((y_110 != NULL) && (y_110 != t)))
      _fail(t);
    else
      y_110 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(y_110), not_null(z_110));
    return(t);
  }
  if(((m_110 != NULL) && (m_110 != t)))
    _fail(t);
  else
    m_110 = t;
  t = not_null(m_110);
  if(match_cons(t, sym__2))
    {
      n_110 = ATgetArgument(t, 0);
      u_110 = ATgetArgument(t, 1);
      t = not_null(n_110);
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_110 = ATgetArgument(t, 0);
          t = a_111(t);
        }
      else
        {
          if(match_cons(t, sym_VarDec_2))
            {
              s_110 = ATgetArgument(t, 0);
              t_110 = ATgetArgument(t, 1);
              t = b_111(t);
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
ATerm tpaste_1_0 (ATerm q_139 (ATerm), ATerm t)
{
  ATerm g_41 = t;
  int h_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(q_139, _id, t);
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
            ATerm k_5 (ATerm t)
            {
              t = split_2_0(_id, q_139, t);
              t = zip_1_0(ReplaceVar_0_0, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, k_5, _id, t);
            ;
            LocalPopChoice(j_41);
          }
        else
          {
            t = i_41;
            {
              ATerm l_5 (ATerm t)
              {
                t = split_2_0(_id, q_139, t);
                t = zip_1_0(ReplaceVar_0_0, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, l_5, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm e_99 (ATerm), ATerm t)
{
  ATerm h_111 = NULL,i_111 = NULL;
  ATerm r_111 (ATerm t)
  {
    ATerm j_111 = NULL,k_111 = NULL,l_111 = NULL,n_111 = NULL;
    ATerm v_111 (ATerm t)
    {
      ATerm o_111 = NULL,p_111 = NULL;
      t = not_null(n_111);
      if(((o_111 != NULL) && (o_111 != t)))
        _fail(t);
      else
        o_111 = t;
      t = not_null(n_111);
      {
        ATerm q_111 = NULL;
        ATerm w_111 (ATerm t)
        {
          t = not_null(q_111);
          if(((p_111 != NULL) && (p_111 != t)))
            _fail(t);
          else
            p_111 = t;
          t = not_null(q_111);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(o_111)), not_null(l_111));
        if(((q_111 != NULL) && (q_111 != t)))
          _fail(t);
        else
          q_111 = t;
        t = w_111(t);
        t = not_null(p_111);
      }
      return(t);
    }
    t = not_null(h_111);
    if(((j_111 != NULL) && (j_111 != t)))
      _fail(t);
    else
      j_111 = t;
    t = not_null(i_111);
    if(((k_111 != NULL) && (k_111 != t)))
      _fail(t);
    else
      k_111 = t;
    t = not_null(h_111);
    {
      ATerm m_111 = NULL;
      ATerm s_111 (ATerm t)
      {
        t = not_null(m_111);
        if(((l_111 != NULL) && (l_111 != t)))
          _fail(t);
        else
          l_111 = t;
        t = not_null(m_111);
        return(t);
      }
      t = SSLgetAnnotations(not_null(j_111));
      if(((m_111 != NULL) && (m_111 != t)))
        _fail(t);
      else
        m_111 = t;
      t = s_111(t);
      t = not_null(k_111);
      t = e_99(t);
      if(((n_111 != NULL) && (n_111 != t)))
        _fail(t);
      else
        n_111 = t;
      t = v_111(t);
    }
    return(t);
  }
  if(((h_111 != NULL) && (h_111 != t)))
    _fail(t);
  else
    h_111 = t;
  t = not_null(h_111);
  if(match_cons(t, sym_DynamicRules_1))
    {
      i_111 = ATgetArgument(t, 0);
      t = r_111(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RDefT_4_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm t)
{
  ATerm f_112 = NULL,g_112 = NULL,j_112 = NULL,k_112 = NULL,l_112 = NULL;
  ATerm d_113 (ATerm t)
  {
    ATerm m_112 = NULL,n_112 = NULL,o_112 = NULL,p_112 = NULL,q_112 = NULL,r_112 = NULL,t_112 = NULL;
    ATerm f_113 (ATerm t)
    {
      ATerm u_112 = NULL,v_112 = NULL;
      ATerm g_113 (ATerm t)
      {
        ATerm w_112 = NULL,x_112 = NULL;
        ATerm i_113 (ATerm t)
        {
          ATerm y_112 = NULL,z_112 = NULL;
          ATerm j_113 (ATerm t)
          {
            ATerm a_113 = NULL,b_113 = NULL;
            t = not_null(z_112);
            if(((a_113 != NULL) && (a_113 != t)))
              _fail(t);
            else
              a_113 = t;
            t = not_null(z_112);
            {
              ATerm c_113 = NULL;
              ATerm k_113 (ATerm t)
              {
                t = not_null(c_113);
                if(((b_113 != NULL) && (b_113 != t)))
                  _fail(t);
                else
                  b_113 = t;
                t = not_null(c_113);
                return(t);
              }
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, not_null(u_112), not_null(w_112), not_null(y_112), not_null(a_113)), not_null(r_112));
              if(((c_113 != NULL) && (c_113 != t)))
                _fail(t);
              else
                c_113 = t;
              t = k_113(t);
              t = not_null(b_113);
            }
            return(t);
          }
          t = not_null(x_112);
          if(((y_112 != NULL) && (y_112 != t)))
            _fail(t);
          else
            y_112 = t;
          t = not_null(q_112);
          t = y_98(t);
          if(((z_112 != NULL) && (z_112 != t)))
            _fail(t);
          else
            z_112 = t;
          t = j_113(t);
          return(t);
        }
        t = not_null(v_112);
        if(((w_112 != NULL) && (w_112 != t)))
          _fail(t);
        else
          w_112 = t;
        t = not_null(p_112);
        t = x_98(t);
        if(((x_112 != NULL) && (x_112 != t)))
          _fail(t);
        else
          x_112 = t;
        t = i_113(t);
        return(t);
      }
      t = not_null(t_112);
      if(((u_112 != NULL) && (u_112 != t)))
        _fail(t);
      else
        u_112 = t;
      t = not_null(o_112);
      t = w_98(t);
      if(((v_112 != NULL) && (v_112 != t)))
        _fail(t);
      else
        v_112 = t;
      t = g_113(t);
      return(t);
    }
    t = not_null(f_112);
    if(((m_112 != NULL) && (m_112 != t)))
      _fail(t);
    else
      m_112 = t;
    t = not_null(g_112);
    if(((n_112 != NULL) && (n_112 != t)))
      _fail(t);
    else
      n_112 = t;
    t = not_null(j_112);
    if(((o_112 != NULL) && (o_112 != t)))
      _fail(t);
    else
      o_112 = t;
    t = not_null(k_112);
    if(((p_112 != NULL) && (p_112 != t)))
      _fail(t);
    else
      p_112 = t;
    t = not_null(l_112);
    if(((q_112 != NULL) && (q_112 != t)))
      _fail(t);
    else
      q_112 = t;
    t = not_null(f_112);
    {
      ATerm s_112 = NULL;
      ATerm e_113 (ATerm t)
      {
        t = not_null(s_112);
        if(((r_112 != NULL) && (r_112 != t)))
          _fail(t);
        else
          r_112 = t;
        t = not_null(s_112);
        return(t);
      }
      t = SSLgetAnnotations(not_null(m_112));
      if(((s_112 != NULL) && (s_112 != t)))
        _fail(t);
      else
        s_112 = t;
      t = e_113(t);
      t = not_null(n_112);
      t = v_98(t);
      if(((t_112 != NULL) && (t_112 != t)))
        _fail(t);
      else
        t_112 = t;
      t = f_113(t);
    }
    return(t);
  }
  if(((f_112 != NULL) && (f_112 != t)))
    _fail(t);
  else
    f_112 = t;
  t = not_null(f_112);
  if(match_cons(t, sym_RDefT_4))
    {
      g_112 = ATgetArgument(t, 0);
      j_112 = ATgetArgument(t, 1);
      k_112 = ATgetArgument(t, 2);
      l_112 = ATgetArgument(t, 3);
      t = d_113(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t)
{
  ATerm t_113 = NULL,u_113 = NULL,v_113 = NULL,y_113 = NULL,z_113 = NULL;
  ATerm t_114 (ATerm t)
  {
    ATerm a_114 = NULL,d_114 = NULL,e_114 = NULL,f_114 = NULL,g_114 = NULL,h_114 = NULL,j_114 = NULL;
    ATerm v_114 (ATerm t)
    {
      ATerm k_114 = NULL,l_114 = NULL;
      ATerm w_114 (ATerm t)
      {
        ATerm m_114 = NULL,n_114 = NULL;
        ATerm y_114 (ATerm t)
        {
          ATerm o_114 = NULL,p_114 = NULL;
          ATerm b_115 (ATerm t)
          {
            ATerm q_114 = NULL,r_114 = NULL;
            t = not_null(p_114);
            if(((q_114 != NULL) && (q_114 != t)))
              _fail(t);
            else
              q_114 = t;
            t = not_null(p_114);
            {
              ATerm s_114 = NULL;
              ATerm c_115 (ATerm t)
              {
                t = not_null(s_114);
                if(((r_114 != NULL) && (r_114 != t)))
                  _fail(t);
                else
                  r_114 = t;
                t = not_null(s_114);
                return(t);
              }
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(k_114), not_null(m_114), not_null(o_114), not_null(q_114)), not_null(h_114));
              if(((s_114 != NULL) && (s_114 != t)))
                _fail(t);
              else
                s_114 = t;
              t = c_115(t);
              t = not_null(r_114);
            }
            return(t);
          }
          t = not_null(n_114);
          if(((o_114 != NULL) && (o_114 != t)))
            _fail(t);
          else
            o_114 = t;
          t = not_null(g_114);
          t = s_102(t);
          if(((p_114 != NULL) && (p_114 != t)))
            _fail(t);
          else
            p_114 = t;
          t = b_115(t);
          return(t);
        }
        t = not_null(l_114);
        if(((m_114 != NULL) && (m_114 != t)))
          _fail(t);
        else
          m_114 = t;
        t = not_null(f_114);
        t = r_102(t);
        if(((n_114 != NULL) && (n_114 != t)))
          _fail(t);
        else
          n_114 = t;
        t = y_114(t);
        return(t);
      }
      t = not_null(j_114);
      if(((k_114 != NULL) && (k_114 != t)))
        _fail(t);
      else
        k_114 = t;
      t = not_null(e_114);
      t = q_102(t);
      if(((l_114 != NULL) && (l_114 != t)))
        _fail(t);
      else
        l_114 = t;
      t = w_114(t);
      return(t);
    }
    t = not_null(t_113);
    if(((a_114 != NULL) && (a_114 != t)))
      _fail(t);
    else
      a_114 = t;
    t = not_null(u_113);
    if(((d_114 != NULL) && (d_114 != t)))
      _fail(t);
    else
      d_114 = t;
    t = not_null(v_113);
    if(((e_114 != NULL) && (e_114 != t)))
      _fail(t);
    else
      e_114 = t;
    t = not_null(y_113);
    if(((f_114 != NULL) && (f_114 != t)))
      _fail(t);
    else
      f_114 = t;
    t = not_null(z_113);
    if(((g_114 != NULL) && (g_114 != t)))
      _fail(t);
    else
      g_114 = t;
    t = not_null(t_113);
    {
      ATerm i_114 = NULL;
      ATerm u_114 (ATerm t)
      {
        t = not_null(i_114);
        if(((h_114 != NULL) && (h_114 != t)))
          _fail(t);
        else
          h_114 = t;
        t = not_null(i_114);
        return(t);
      }
      t = SSLgetAnnotations(not_null(a_114));
      if(((i_114 != NULL) && (i_114 != t)))
        _fail(t);
      else
        i_114 = t;
      t = u_114(t);
      t = not_null(d_114);
      t = p_102(t);
      if(((j_114 != NULL) && (j_114 != t)))
        _fail(t);
      else
        j_114 = t;
      t = v_114(t);
    }
    return(t);
  }
  if(((t_113 != NULL) && (t_113 != t)))
    _fail(t);
  else
    t_113 = t;
  t = not_null(t_113);
  if(match_cons(t, sym_SDefT_4))
    {
      u_113 = ATgetArgument(t, 0);
      v_113 = ATgetArgument(t, 1);
      y_113 = ATgetArgument(t, 2);
      z_113 = ATgetArgument(t, 3);
      t = t_114(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2_0 (ATerm h_100 (ATerm), ATerm i_100 (ATerm), ATerm t)
{
  ATerm l_115 = NULL,m_115 = NULL,n_115 = NULL;
  ATerm b_116 (ATerm t)
  {
    ATerm o_115 = NULL,r_115 = NULL,s_115 = NULL,t_115 = NULL,v_115 = NULL;
    ATerm d_116 (ATerm t)
    {
      ATerm w_115 = NULL,x_115 = NULL;
      ATerm e_116 (ATerm t)
      {
        ATerm y_115 = NULL,z_115 = NULL;
        t = not_null(x_115);
        if(((y_115 != NULL) && (y_115 != t)))
          _fail(t);
        else
          y_115 = t;
        t = not_null(x_115);
        {
          ATerm a_116 = NULL;
          ATerm f_116 (ATerm t)
          {
            t = not_null(a_116);
            if(((z_115 != NULL) && (z_115 != t)))
              _fail(t);
            else
              z_115 = t;
            t = not_null(a_116);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(w_115), not_null(y_115)), not_null(t_115));
          if(((a_116 != NULL) && (a_116 != t)))
            _fail(t);
          else
            a_116 = t;
          t = f_116(t);
          t = not_null(z_115);
        }
        return(t);
      }
      t = not_null(v_115);
      if(((w_115 != NULL) && (w_115 != t)))
        _fail(t);
      else
        w_115 = t;
      t = not_null(s_115);
      t = i_100(t);
      if(((x_115 != NULL) && (x_115 != t)))
        _fail(t);
      else
        x_115 = t;
      t = e_116(t);
      return(t);
    }
    t = not_null(l_115);
    if(((o_115 != NULL) && (o_115 != t)))
      _fail(t);
    else
      o_115 = t;
    t = not_null(m_115);
    if(((r_115 != NULL) && (r_115 != t)))
      _fail(t);
    else
      r_115 = t;
    t = not_null(n_115);
    if(((s_115 != NULL) && (s_115 != t)))
      _fail(t);
    else
      s_115 = t;
    t = not_null(l_115);
    {
      ATerm u_115 = NULL;
      ATerm c_116 (ATerm t)
      {
        t = not_null(u_115);
        if(((t_115 != NULL) && (t_115 != t)))
          _fail(t);
        else
          t_115 = t;
        t = not_null(u_115);
        return(t);
      }
      t = SSLgetAnnotations(not_null(o_115));
      if(((u_115 != NULL) && (u_115 != t)))
        _fail(t);
      else
        u_115 = t;
      t = c_116(t);
      t = not_null(r_115);
      t = h_100(t);
      if(((v_115 != NULL) && (v_115 != t)))
        _fail(t);
      else
        v_115 = t;
      t = d_116(t);
    }
    return(t);
  }
  if(((l_115 != NULL) && (l_115 != t)))
    _fail(t);
  else
    l_115 = t;
  t = not_null(l_115);
  if(match_cons(t, sym_Scope_2))
    {
      m_115 = ATgetArgument(t, 0);
      n_115 = ATgetArgument(t, 1);
      t = b_116(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm t)
{
  ATerm k_41 = t;
  int m_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(t_139, r_139, t);
      ;
      LocalPopChoice(m_41);
    }
  else
    {
      t = k_41;
      {
        ATerm a_42 = t;
        int b_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(t_139, t_139, t_139, r_139, t);
            ;
            LocalPopChoice(b_42);
          }
        else
          {
            t = a_42;
            {
              ATerm c_42 = t;
              int d_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(t_139, t_139, t_139, r_139, t);
                  ;
                  LocalPopChoice(d_42);
                }
              else
                {
                  t = c_42;
                  t = DynamicRules_1_0(r_139, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm i_116 = NULL,j_116 = NULL,k_116 = NULL,l_116 = NULL,m_116 = NULL;
  ATerm r_116 (ATerm t)
  {
    ATerm n_116 = NULL,o_116 = NULL,p_116 = NULL,q_116 = NULL;
    t = not_null(j_116);
    if(((n_116 != NULL) && (n_116 != t)))
      _fail(t);
    else
      n_116 = t;
    t = not_null(k_116);
    if(((o_116 != NULL) && (o_116 != t)))
      _fail(t);
    else
      o_116 = t;
    t = not_null(l_116);
    if(((q_116 != NULL) && (q_116 != t)))
      _fail(t);
    else
      q_116 = t;
    t = not_null(m_116);
    if(((p_116 != NULL) && (p_116 != t)))
      _fail(t);
    else
      p_116 = t;
    t = not_null(q_116);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((i_116 != NULL) && (i_116 != t)))
    _fail(t);
  else
    i_116 = t;
  t = not_null(i_116);
  if(match_cons(t, sym_RDefT_4))
    {
      j_116 = ATgetArgument(t, 0);
      k_116 = ATgetArgument(t, 1);
      l_116 = ATgetArgument(t, 2);
      m_116 = ATgetArgument(t, 3);
      t = r_116(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm m_5 (ATerm t)
  {
    ATerm v_116 = NULL,w_116 = NULL,x_116 = NULL;
    ATerm a_117 (ATerm t)
    {
      ATerm y_116 = NULL;
      t = not_null(x_116);
      if(((y_116 != NULL) && (y_116 != t)))
        _fail(t);
      else
        y_116 = t;
      t = not_null(y_116);
      return(t);
    }
    ATerm b_117 (ATerm t)
    {
      ATerm z_116 = NULL;
      t = not_null(x_116);
      if(((z_116 != NULL) && (z_116 != t)))
        _fail(t);
      else
        z_116 = t;
      t = not_null(z_116);
      return(t);
    }
    if(((w_116 != NULL) && (w_116 != t)))
      _fail(t);
    else
      w_116 = t;
    t = not_null(w_116);
    if(match_cons(t, sym_VarDec_2))
      {
        x_116 = ATgetArgument(t, 0);
        v_116 = ATgetArgument(t, 1);
        t = a_117(t);
      }
    else
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            x_116 = ATgetArgument(t, 0);
            t = b_117(t);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1_0(m_5, t);
  return(t);
}
ATerm Bind6_0_0 (ATerm t)
{
  ATerm k_117 = NULL,l_117 = NULL,n_117 = NULL,o_117 = NULL,p_117 = NULL;
  ATerm u_117 (ATerm t)
  {
    ATerm q_117 = NULL,r_117 = NULL,s_117 = NULL,t_117 = NULL;
    t = not_null(l_117);
    if(((q_117 != NULL) && (q_117 != t)))
      _fail(t);
    else
      q_117 = t;
    t = not_null(n_117);
    if(((r_117 != NULL) && (r_117 != t)))
      _fail(t);
    else
      r_117 = t;
    t = not_null(o_117);
    if(((t_117 != NULL) && (t_117 != t)))
      _fail(t);
    else
      t_117 = t;
    t = not_null(p_117);
    if(((s_117 != NULL) && (s_117 != t)))
      _fail(t);
    else
      s_117 = t;
    t = not_null(t_117);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((k_117 != NULL) && (k_117 != t)))
    _fail(t);
  else
    k_117 = t;
  t = not_null(k_117);
  if(match_cons(t, sym_SDefT_4))
    {
      l_117 = ATgetArgument(t, 0);
      n_117 = ATgetArgument(t, 1);
      o_117 = ATgetArgument(t, 2);
      p_117 = ATgetArgument(t, 3);
      t = u_117(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm x_117 = NULL,y_117 = NULL;
  ATerm a_118 (ATerm t)
  {
    ATerm z_117 = NULL;
    t = not_null(y_117);
    if(((z_117 != NULL) && (z_117 != t)))
      _fail(t);
    else
      z_117 = t;
    t = not_null(z_117);
    t = tvars_0_0(t);
    return(t);
  }
  if(((x_117 != NULL) && (x_117 != t)))
    _fail(t);
  else
    x_117 = t;
  t = not_null(x_117);
  if(match_cons(t, sym_DynamicRules_1))
    {
      y_117 = ATgetArgument(t, 0);
      t = a_118(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Add1_0_0 (ATerm t)
{
  ATerm d_118 = NULL,e_118 = NULL;
  ATerm g_118 (ATerm t)
  {
    ATerm f_118 = NULL;
    t = not_null(e_118);
    if(((f_118 != NULL) && (f_118 != t)))
      _fail(t);
    else
      f_118 = t;
    t = (ATerm) ATinsert(ATempty, not_null(f_118));
    return(t);
  }
  if(((d_118 != NULL) && (d_118 != t)))
    _fail(t);
  else
    d_118 = t;
  t = not_null(d_118);
  if(match_cons(t, sym_Var_1))
    {
      e_118 = ATgetArgument(t, 0);
      t = g_118(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1_0 (ATerm c_119 (ATerm), ATerm t)
{
  ATerm j_118 = NULL,k_118 = NULL,l_118 = NULL;
  ATerm o_118 (ATerm t)
  {
    ATerm m_118 = NULL,n_118 = NULL;
    t = not_null(k_118);
    if(((n_118 != NULL) && (n_118 != t)))
      _fail(t);
    else
      n_118 = t;
    t = not_null(l_118);
    if(((m_118 != NULL) && (m_118 != t)))
      _fail(t);
    else
      m_118 = t;
    t = not_null(n_118);
    {
      ATerm p_118 (ATerm t)
      {
        ATerm e_42 = t;
        int f_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            t = not_null(m_118);
            ;
            LocalPopChoice(f_42);
          }
        else
          {
            t = e_42;
            {
              ATerm g_42 = t;
              int h_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_5 (ATerm t)
                  {
                    t = not_null(m_118);
                    return(t);
                  }
                  t = HdMember_p__2_0(c_119, n_5, t);
                  t = p_118(t);
                  ;
                  LocalPopChoice(h_42);
                }
              else
                {
                  t = g_42;
                  t = Cons_2_0(_id, p_118, t);
                }
            }
          }
        return(t);
      }
      t = p_118(t);
    }
    return(t);
  }
  if(((j_118 != NULL) && (j_118 != t)))
    _fail(t);
  else
    j_118 = t;
  t = not_null(j_118);
  if(match_cons(t, sym__2))
    {
      k_118 = ATgetArgument(t, 0);
      l_118 = ATgetArgument(t, 1);
      t = o_118(t);
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
ATerm foldr_3_0 (ATerm r_121 (ATerm), ATerm s_121 (ATerm), ATerm t_121 (ATerm), ATerm t)
{
  ATerm w_42 = t;
  int x_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = r_121(t);
      ;
      LocalPopChoice(x_42);
    }
  else
    {
      t = w_42;
      {
        ATerm u_118 = NULL,v_118 = NULL,w_118 = NULL;
        ATerm j_119 (ATerm t)
        {
          ATerm x_118 = NULL,a_119 = NULL,b_119 = NULL,f_119 = NULL;
          t = not_null(v_118);
          if(((x_118 != NULL) && (x_118 != t)))
            _fail(t);
          else
            x_118 = t;
          t = not_null(w_118);
          if(((a_119 != NULL) && (a_119 != t)))
            _fail(t);
          else
            a_119 = t;
          t = not_null(u_118);
          {
            ATerm y_42;
            y_42 = t;
            {
              ATerm e_119 = NULL;
              ATerm k_119 (ATerm t)
              {
                t = not_null(e_119);
                if(((b_119 != NULL) && (b_119 != t)))
                  _fail(t);
                else
                  b_119 = t;
                t = not_null(e_119);
                return(t);
              }
              t = not_null(x_118);
              t = t_121(t);
              if(((e_119 != NULL) && (e_119 != t)))
                _fail(t);
              else
                e_119 = t;
              t = k_119(t);
            }
            t = y_42;
            {
              ATerm i_119 = NULL;
              ATerm l_119 (ATerm t)
              {
                t = not_null(i_119);
                if(((f_119 != NULL) && (f_119 != t)))
                  _fail(t);
                else
                  f_119 = t;
                t = not_null(i_119);
                return(t);
              }
              t = not_null(a_119);
              t = foldr_3_0(r_121, s_121, t_121, t);
              if(((i_119 != NULL) && (i_119 != t)))
                _fail(t);
              else
                i_119 = t;
              t = l_119(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_119), not_null(f_119));
              t = s_121(t);
            }
          }
          return(t);
        }
        if(((u_118 != NULL) && (u_118 != t)))
          _fail(t);
        else
          u_118 = t;
        t = not_null(u_118);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_118 = ATgetFirst((ATermList) t);
            w_118 = (ATerm) ATgetNext((ATermList) t);
            t = j_119(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm p_119 (ATerm), ATerm q_119 (ATerm), ATerm r_119 (ATerm), ATerm t)
{
  ATerm v_119 = NULL;
  ATerm d_120 (ATerm t)
  {
    ATerm w_119 = NULL,x_119 = NULL;
    t = not_null(v_119);
    if(((w_119 != NULL) && (w_119 != t)))
      _fail(t);
    else
      w_119 = t;
    t = not_null(v_119);
    {
      ATerm y_119 = NULL;
      ATerm e_120 (ATerm t)
      {
        ATerm z_119 = NULL,a_120 = NULL,b_120 = NULL,c_120 = NULL;
        ATerm f_120 (ATerm t)
        {
          t = not_null(c_120);
          if(((x_119 != NULL) && (x_119 != t)))
            _fail(t);
          else
            x_119 = t;
          t = not_null(a_120);
          return(t);
        }
        t = not_null(y_119);
        if(((z_119 != NULL) && (z_119 != t)))
          _fail(t);
        else
          z_119 = t;
        t = not_null(y_119);
        t = SSL_explode_term(not_null(z_119));
        if(((a_120 != NULL) && (a_120 != t)))
          _fail(t);
        else
          a_120 = t;
        t = not_null(a_120);
        if(match_cons(t, sym__2))
          {
            b_120 = ATgetArgument(t, 0);
            c_120 = ATgetArgument(t, 1);
            t = f_120(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(w_119);
      if(((y_119 != NULL) && (y_119 != t)))
        _fail(t);
      else
        y_119 = t;
      t = e_120(t);
      t = not_null(x_119);
      t = foldr_3_0(p_119, q_119, r_119, t);
    }
    return(t);
  }
  if(((v_119 != NULL) && (v_119 != t)))
    _fail(t);
  else
    v_119 = t;
  t = d_120(t);
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm i_120 = NULL,j_120 = NULL,k_120 = NULL;
  ATerm m_120 (ATerm t)
  {
    ATerm l_120 = NULL;
    t = not_null(j_120);
    if(((l_120 != NULL) && (l_120 != t)))
      _fail(t);
    else
      l_120 = t;
    t = not_null(k_120);
    if(((l_120 != NULL) && (l_120 != t)))
      _fail(t);
    else
      l_120 = t;
    t = not_null(i_120);
    return(t);
  }
  if(((i_120 != NULL) && (i_120 != t)))
    _fail(t);
  else
    i_120 = t;
  t = not_null(i_120);
  if(match_cons(t, sym__2))
    {
      j_120 = ATgetArgument(t, 0);
      k_120 = ATgetArgument(t, 1);
      t = m_120(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm t)
{
  ATerm q_120 = NULL,r_120 = NULL,s_120 = NULL;
  ATerm x_120 (ATerm t)
  {
    ATerm t_120 = NULL,u_120 = NULL;
    t = not_null(r_120);
    if(((u_120 != NULL) && (u_120 != t)))
      _fail(t);
    else
      u_120 = t;
    t = not_null(s_120);
    if(((t_120 != NULL) && (t_120 != t)))
      _fail(t);
    else
      t_120 = t;
    t = not_null(q_120);
    t = h_119(t);
    {
      ATerm o_5 (ATerm t)
      {
        ATerm v_120 = NULL;
        ATerm y_120 (ATerm t)
        {
          ATerm w_120 = NULL;
          t = not_null(v_120);
          if(((w_120 != NULL) && (w_120 != t)))
            _fail(t);
          else
            w_120 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_120), not_null(w_120));
          t = g_119(t);
          return(t);
        }
        if(((v_120 != NULL) && (v_120 != t)))
          _fail(t);
        else
          v_120 = t;
        t = y_120(t);
        return(t);
      }
      t = fetch_1_0(o_5, t);
    }
    t = not_null(t_120);
    return(t);
  }
  if(((q_120 != NULL) && (q_120 != t)))
    _fail(t);
  else
    q_120 = t;
  t = not_null(q_120);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_120 = ATgetFirst((ATermList) t);
      s_120 = (ATerm) ATgetNext((ATermList) t);
      t = x_120(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1_0 (ATerm y_118 (ATerm), ATerm t)
{
  ATerm b_121 = NULL,c_121 = NULL,d_121 = NULL;
  ATerm h_121 (ATerm t)
  {
    ATerm f_121 = NULL,g_121 = NULL;
    t = not_null(c_121);
    if(((g_121 != NULL) && (g_121 != t)))
      _fail(t);
    else
      g_121 = t;
    t = not_null(d_121);
    if(((f_121 != NULL) && (f_121 != t)))
      _fail(t);
    else
      f_121 = t;
    t = not_null(g_121);
    {
      ATerm i_121 (ATerm t)
      {
        ATerm z_42 = t;
        int a_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            ;
            LocalPopChoice(a_43);
          }
        else
          {
            t = z_42;
            {
              ATerm g_43 = t;
              int h_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_5 (ATerm t)
                  {
                    t = not_null(f_121);
                    return(t);
                  }
                  t = HdMember_p__2_0(y_118, p_5, t);
                  t = i_121(t);
                  ;
                  LocalPopChoice(h_43);
                }
              else
                {
                  t = g_43;
                  t = Cons_2_0(_id, i_121, t);
                }
            }
          }
        return(t);
      }
      t = i_121(t);
    }
    return(t);
  }
  if(((b_121 != NULL) && (b_121 != t)))
    _fail(t);
  else
    b_121 = t;
  t = not_null(b_121);
  if(match_cons(t, sym__2))
    {
      c_121 = ATgetArgument(t, 0);
      d_121 = ATgetArgument(t, 1);
      t = h_121(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfShift_0_0 (ATerm t)
{
  ATerm m_121 = NULL,n_121 = NULL,o_121 = NULL,u_121 = NULL,v_121 = NULL;
  ATerm z_121 (ATerm t)
  {
    ATerm w_121 = NULL,x_121 = NULL,y_121 = NULL;
    t = not_null(n_121);
    if(((x_121 != NULL) && (x_121 != t)))
      _fail(t);
    else
      x_121 = t;
    t = not_null(u_121);
    if(((w_121 != NULL) && (w_121 != t)))
      _fail(t);
    else
      w_121 = t;
    t = not_null(v_121);
    if(((y_121 != NULL) && (y_121 != t)))
      _fail(t);
    else
      y_121 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_121)), not_null(w_121)), not_null(y_121));
    return(t);
  }
  if(((m_121 != NULL) && (m_121 != t)))
    _fail(t);
  else
    m_121 = t;
  t = not_null(m_121);
  if(match_cons(t, sym__2))
    {
      n_121 = ATgetArgument(t, 0);
      o_121 = ATgetArgument(t, 1);
      t = not_null(o_121);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_121 = ATgetFirst((ATermList) t);
          v_121 = (ATerm) ATgetNext((ATermList) t);
          t = z_121(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm k_122 = NULL,l_122 = NULL,m_122 = NULL,n_122 = NULL,o_122 = NULL;
  ATerm n_123 (ATerm t)
  {
    ATerm p_122 = NULL,q_122 = NULL,r_122 = NULL,s_122 = NULL,t_122 = NULL,f_123 = NULL,l_123 = NULL;
    t = not_null(m_122);
    if(((p_122 != NULL) && (p_122 != t)))
      _fail(t);
    else
      p_122 = t;
    t = not_null(n_122);
    if(((q_122 != NULL) && (q_122 != t)))
      _fail(t);
    else
      q_122 = t;
    t = not_null(o_122);
    if(((r_122 != NULL) && (r_122 != t)))
      _fail(t);
    else
      r_122 = t;
    t = not_null(k_122);
    {
      ATerm i_43;
      i_43 = t;
      {
        ATerm u_122 = NULL;
        ATerm o_123 (ATerm t)
        {
          ATerm v_122 = NULL,b_123 = NULL,d_123 = NULL,e_123 = NULL;
          ATerm p_123 (ATerm t)
          {
            t = not_null(d_123);
            if(((s_122 != NULL) && (s_122 != t)))
              _fail(t);
            else
              s_122 = t;
            t = not_null(e_123);
            if(((t_122 != NULL) && (t_122 != t)))
              _fail(t);
            else
              t_122 = t;
            t = not_null(b_123);
            return(t);
          }
          t = not_null(u_122);
          if(((v_122 != NULL) && (v_122 != t)))
            _fail(t);
          else
            v_122 = t;
          t = not_null(u_122);
          t = SSL_explode_term(not_null(v_122));
          if(((b_123 != NULL) && (b_123 != t)))
            _fail(t);
          else
            b_123 = t;
          t = not_null(b_123);
          if(match_cons(t, sym__2))
            {
              d_123 = ATgetArgument(t, 0);
              e_123 = ATgetArgument(t, 1);
              t = p_123(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = not_null(q_122);
        if(((u_122 != NULL) && (u_122 != t)))
          _fail(t);
        else
          u_122 = t;
        t = o_123(t);
      }
      t = i_43;
      {
        ATerm j_43;
        j_43 = t;
        {
          ATerm g_123 = NULL;
          ATerm q_123 (ATerm t)
          {
            ATerm h_123 = NULL,i_123 = NULL,j_123 = NULL,k_123 = NULL;
            ATerm r_123 (ATerm t)
            {
              t = not_null(j_123);
              if(((s_122 != NULL) && (s_122 != t)))
                _fail(t);
              else
                s_122 = t;
              t = not_null(k_123);
              if(((f_123 != NULL) && (f_123 != t)))
                _fail(t);
              else
                f_123 = t;
              t = not_null(i_123);
              return(t);
            }
            t = not_null(g_123);
            if(((h_123 != NULL) && (h_123 != t)))
              _fail(t);
            else
              h_123 = t;
            t = not_null(g_123);
            t = SSL_explode_term(not_null(h_123));
            if(((i_123 != NULL) && (i_123 != t)))
              _fail(t);
            else
              i_123 = t;
            t = not_null(i_123);
            if(match_cons(t, sym__2))
              {
                j_123 = ATgetArgument(t, 0);
                k_123 = ATgetArgument(t, 1);
                t = r_123(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = not_null(p_122);
          if(((g_123 != NULL) && (g_123 != t)))
            _fail(t);
          else
            g_123 = t;
          t = q_123(t);
        }
        t = j_43;
        {
          ATerm m_123 = NULL;
          ATerm s_123 (ATerm t)
          {
            t = not_null(m_123);
            if(((l_123 != NULL) && (l_123 != t)))
              _fail(t);
            else
              l_123 = t;
            t = not_null(m_123);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_123), not_null(t_122));
          t = zip_1_0(_id, t);
          if(((m_123 != NULL) && (m_123 != t)))
            _fail(t);
          else
            m_123 = t;
          t = s_123(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_123), not_null(r_122));
          t = conc_0_0(t);
        }
      }
    }
    return(t);
  }
  if(((k_122 != NULL) && (k_122 != t)))
    _fail(t);
  else
    k_122 = t;
  t = not_null(k_122);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_122 = ATgetFirst((ATermList) t);
      o_122 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(l_122);
      if(match_cons(t, sym__2))
        {
          m_122 = ATgetArgument(t, 0);
          n_122 = ATgetArgument(t, 1);
          t = n_123(t);
        }
      else
        {
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
  ATerm y_123 = NULL,z_123 = NULL,a_124 = NULL,b_124 = NULL,c_124 = NULL;
  ATerm f_124 (ATerm t)
  {
    ATerm d_124 = NULL,e_124 = NULL;
    t = not_null(a_124);
    if(((d_124 != NULL) && (d_124 != t)))
      _fail(t);
    else
      d_124 = t;
    t = not_null(b_124);
    if(((d_124 != NULL) && (d_124 != t)))
      _fail(t);
    else
      d_124 = t;
    t = not_null(c_124);
    if(((e_124 != NULL) && (e_124 != t)))
      _fail(t);
    else
      e_124 = t;
    t = not_null(e_124);
    return(t);
  }
  if(((y_123 != NULL) && (y_123 != t)))
    _fail(t);
  else
    y_123 = t;
  t = not_null(y_123);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_123 = ATgetFirst((ATermList) t);
      c_124 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(z_123);
      if(match_cons(t, sym__2))
        {
          a_124 = ATgetArgument(t, 0);
          b_124 = ATgetArgument(t, 1);
          t = f_124(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm i_124 (ATerm), ATerm j_124 (ATerm), ATerm t)
{
  ATerm g_124 (ATerm t)
  {
    ATerm k_43 = t;
    int p_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_124(t);
        ;
        LocalPopChoice(p_43);
      }
    else
      {
        t = k_43;
        t = j_124(t);
        t = g_124(t);
      }
    return(t);
  }
  t = g_124(t);
  return(t);
}
ATerm for_3_0 (ATerm l_124 (ATerm), ATerm m_124 (ATerm), ATerm n_124 (ATerm), ATerm t)
{
  t = l_124(t);
  t = while_not_2_0(m_124, n_124, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm q_43 = t;
  int r_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_5 (ATerm t)
      {
        ATerm o_124 = NULL;
        ATerm q_124 (ATerm t)
        {
          ATerm p_124 = NULL;
          t = not_null(o_124);
          if(((p_124 != NULL) && (p_124 != t)))
            _fail(t);
          else
            p_124 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(p_124));
          return(t);
        }
        if(((o_124 != NULL) && (o_124 != t)))
          _fail(t);
        else
          o_124 = t;
        t = q_124(t);
        return(t);
      }
      ATerm r_5 (ATerm t)
      {
        t = _2_0(_id, Nil_0_0, t);
        return(t);
      }
      ATerm s_5 (ATerm t)
      {
        ATerm s_43 = t;
        int t_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_5 (ATerm t)
            {
              ATerm e_44 = t;
              int f_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0_0(t);
                  ;
                  LocalPopChoice(f_44);
                }
              else
                {
                  t = e_44;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, t_5, t);
            ;
            LocalPopChoice(t_43);
          }
        else
          {
            t = s_43;
            t = UfShift_0_0(t);
          }
        return(t);
      }
      t = for_3_0(q_5, r_5, s_5, t);
      ;
      LocalPopChoice(r_43);
    }
  else
    {
      t = q_43;
      t = diff_1_0(eq_0_0, t);
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm m_138 (ATerm), ATerm n_138 (ATerm), ATerm o_138 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t)
{
  ATerm u_124 (ATerm t)
  {
    ATerm g_44 = t;
    int h_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_138(t);
        ;
        LocalPopChoice(h_44);
      }
    else
      {
        t = g_44;
        {
          ATerm i_44 = t;
          int j_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_124 = NULL;
              ATerm d_45;
              d_45 = t;
              {
                ATerm t_124 = NULL;
                ATerm v_124 (ATerm t)
                {
                  t = not_null(t_124);
                  if(((s_124 != NULL) && (s_124 != t)))
                    _fail(t);
                  else
                    s_124 = t;
                  t = not_null(t_124);
                  return(t);
                }
                t = n_138(t);
                if(((t_124 != NULL) && (t_124 != t)))
                  _fail(t);
                else
                  t_124 = t;
                t = v_124(t);
              }
              t = d_45;
              {
                ATerm u_5 (ATerm t)
                {
                  ATerm w_5 (ATerm t)
                  {
                    t = not_null(s_124);
                    return(t);
                  }
                  t = split_2_0(u_124, w_5, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm v_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = o_138(u_5, u_124, v_5, t);
                {
                  ATerm x_5 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(x_5, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(j_44);
            }
          else
            {
              t = i_44;
              {
                ATerm y_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(y_5, union_0_0, u_124, t);
              }
            }
        }
      }
    return(t);
  }
  t = u_124(t);
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm e_45 = t;
    int f_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(f_45);
      }
    else
      {
        t = e_45;
        {
          ATerm g_45 = t;
          int h_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(h_45);
            }
          else
            {
              t = g_45;
              {
                ATerm i_45 = t;
                int s_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(s_45);
                  }
                else
                  {
                    t = i_45;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(Add1_0_0, z_5, tboundin_3_0, t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm a_125 = NULL,b_125 = NULL,c_125 = NULL,d_125 = NULL,e_125 = NULL,f_125 = NULL;
  ATerm l_125 (ATerm t)
  {
    ATerm g_125 = NULL,h_125 = NULL,i_125 = NULL;
    t = not_null(a_125);
    if(((i_125 != NULL) && (i_125 != t)))
      _fail(t);
    else
      i_125 = t;
    t = not_null(b_125);
    if(((g_125 != NULL) && (g_125 != t)))
      _fail(t);
    else
      g_125 = t;
    t = not_null(c_125);
    if(((h_125 != NULL) && (h_125 != t)))
      _fail(t);
    else
      h_125 = t;
    t = not_null(i_125);
    t = tvars_0_0(t);
    return(t);
  }
  ATerm m_125 (ATerm t)
  {
    ATerm j_125 = NULL,k_125 = NULL;
    t = not_null(e_125);
    if(((k_125 != NULL) && (k_125 != t)))
      _fail(t);
    else
      k_125 = t;
    t = not_null(f_125);
    if(((j_125 != NULL) && (j_125 != t)))
      _fail(t);
    else
      j_125 = t;
    t = not_null(k_125);
    return(t);
  }
  if(((d_125 != NULL) && (d_125 != t)))
    _fail(t);
  else
    d_125 = t;
  t = not_null(d_125);
  if(match_cons(t, sym_LRule_1))
    {
      e_125 = ATgetArgument(t, 0);
      t = not_null(e_125);
      if(match_cons(t, sym_Rule_3))
        {
          a_125 = ATgetArgument(t, 0);
          b_125 = ATgetArgument(t, 1);
          c_125 = ATgetArgument(t, 2);
          t = l_125(t);
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
          e_125 = ATgetArgument(t, 0);
          f_125 = ATgetArgument(t, 1);
          t = m_125(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm a_126 = NULL,b_126 = NULL;
  ATerm d_127 (ATerm t)
  {
    ATerm c_126 = NULL,d_126 = NULL,e_126 = NULL,h_126 = NULL;
    ATerm i_127 (ATerm t)
    {
      ATerm i_126 = NULL,j_126 = NULL;
      t = not_null(h_126);
      if(((i_126 != NULL) && (i_126 != t)))
        _fail(t);
      else
        i_126 = t;
      t = not_null(h_126);
      {
        ATerm k_126 = NULL;
        ATerm j_127 (ATerm t)
        {
          t = not_null(k_126);
          if(((j_126 != NULL) && (j_126 != t)))
            _fail(t);
          else
            j_126 = t;
          t = not_null(k_126);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(i_126)), not_null(e_126));
        if(((k_126 != NULL) && (k_126 != t)))
          _fail(t);
        else
          k_126 = t;
        t = j_127(t);
        t = not_null(j_126);
      }
      return(t);
    }
    t = not_null(a_126);
    if(((c_126 != NULL) && (c_126 != t)))
      _fail(t);
    else
      c_126 = t;
    t = not_null(b_126);
    if(((d_126 != NULL) && (d_126 != t)))
      _fail(t);
    else
      d_126 = t;
    t = not_null(a_126);
    {
      ATerm g_126 = NULL;
      ATerm h_127 (ATerm t)
      {
        t = not_null(g_126);
        if(((e_126 != NULL) && (e_126 != t)))
          _fail(t);
        else
          e_126 = t;
        t = not_null(g_126);
        return(t);
      }
      t = SSLgetAnnotations(not_null(c_126));
      if(((g_126 != NULL) && (g_126 != t)))
        _fail(t);
      else
        g_126 = t;
      t = h_127(t);
      t = not_null(d_126);
      t = o_0(t);
      if(((h_126 != NULL) && (h_126 != t)))
        _fail(t);
      else
        h_126 = t;
      t = i_127(t);
    }
    return(t);
  }
  ATerm e_127 (ATerm t)
  {
    ATerm l_126 = NULL,m_126 = NULL,n_126 = NULL,r_126 = NULL;
    ATerm l_127 (ATerm t)
    {
      ATerm s_126 = NULL,t_126 = NULL;
      t = not_null(r_126);
      if(((s_126 != NULL) && (s_126 != t)))
        _fail(t);
      else
        s_126 = t;
      t = not_null(r_126);
      {
        ATerm u_126 = NULL;
        ATerm m_127 (ATerm t)
        {
          t = not_null(u_126);
          if(((t_126 != NULL) && (t_126 != t)))
            _fail(t);
          else
            t_126 = t;
          t = not_null(u_126);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(s_126)), not_null(n_126));
        if(((u_126 != NULL) && (u_126 != t)))
          _fail(t);
        else
          u_126 = t;
        t = m_127(t);
        t = not_null(t_126);
      }
      return(t);
    }
    t = not_null(a_126);
    if(((l_126 != NULL) && (l_126 != t)))
      _fail(t);
    else
      l_126 = t;
    t = not_null(b_126);
    if(((m_126 != NULL) && (m_126 != t)))
      _fail(t);
    else
      m_126 = t;
    t = not_null(a_126);
    {
      ATerm o_126 = NULL;
      ATerm k_127 (ATerm t)
      {
        t = not_null(o_126);
        if(((n_126 != NULL) && (n_126 != t)))
          _fail(t);
        else
          n_126 = t;
        t = not_null(o_126);
        return(t);
      }
      t = SSLgetAnnotations(not_null(l_126));
      if(((o_126 != NULL) && (o_126 != t)))
        _fail(t);
      else
        o_126 = t;
      t = k_127(t);
      t = not_null(m_126);
      t = o_0(t);
      if(((r_126 != NULL) && (r_126 != t)))
        _fail(t);
      else
        r_126 = t;
      t = l_127(t);
    }
    return(t);
  }
  ATerm g_127 (ATerm t)
  {
    ATerm v_126 = NULL,w_126 = NULL,x_126 = NULL,z_126 = NULL;
    ATerm o_127 (ATerm t)
    {
      ATerm a_127 = NULL,b_127 = NULL;
      t = not_null(z_126);
      if(((a_127 != NULL) && (a_127 != t)))
        _fail(t);
      else
        a_127 = t;
      t = not_null(z_126);
      {
        ATerm c_127 = NULL;
        ATerm p_127 (ATerm t)
        {
          t = not_null(c_127);
          if(((b_127 != NULL) && (b_127 != t)))
            _fail(t);
          else
            b_127 = t;
          t = not_null(c_127);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(a_127)), not_null(x_126));
        if(((c_127 != NULL) && (c_127 != t)))
          _fail(t);
        else
          c_127 = t;
        t = p_127(t);
        t = not_null(b_127);
      }
      return(t);
    }
    t = not_null(a_126);
    if(((v_126 != NULL) && (v_126 != t)))
      _fail(t);
    else
      v_126 = t;
    t = not_null(b_126);
    if(((w_126 != NULL) && (w_126 != t)))
      _fail(t);
    else
      w_126 = t;
    t = not_null(a_126);
    {
      ATerm y_126 = NULL;
      ATerm n_127 (ATerm t)
      {
        t = not_null(y_126);
        if(((x_126 != NULL) && (x_126 != t)))
          _fail(t);
        else
          x_126 = t;
        t = not_null(y_126);
        return(t);
      }
      t = SSLgetAnnotations(not_null(v_126));
      if(((y_126 != NULL) && (y_126 != t)))
        _fail(t);
      else
        y_126 = t;
      t = n_127(t);
      t = not_null(w_126);
      t = o_0(t);
      if(((z_126 != NULL) && (z_126 != t)))
        _fail(t);
      else
        z_126 = t;
      t = o_127(t);
    }
    return(t);
  }
  if(((a_126 != NULL) && (a_126 != t)))
    _fail(t);
  else
    a_126 = t;
  t = not_null(a_126);
  if(match_cons(t, sym_Var_1))
    {
      b_126 = ATgetArgument(t, 0);
      {
        ATerm t_45 = t;
        int u_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_127(t);
            ;
            LocalPopChoice(u_45);
          }
        else
          {
            t = t_45;
            {
              ATerm v_45 = t;
              int c_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_127(t);
                  ;
                  LocalPopChoice(c_46);
                }
              else
                {
                  t = v_45;
                  t = g_127(t);
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
ATerm DistBinding_2_0 (ATerm h_137 (ATerm), ATerm i_137 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t)
{
  ATerm u_127 = NULL,v_127 = NULL,w_127 = NULL,x_127 = NULL;
  ATerm f_128 (ATerm t)
  {
    ATerm y_127 = NULL,z_127 = NULL,a_128 = NULL;
    t = not_null(v_127);
    if(((a_128 != NULL) && (a_128 != t)))
      _fail(t);
    else
      a_128 = t;
    t = not_null(w_127);
    if(((z_127 != NULL) && (z_127 != t)))
      _fail(t);
    else
      z_127 = t;
    t = not_null(x_127);
    if(((y_127 != NULL) && (y_127 != t)))
      _fail(t);
    else
      y_127 = t;
    t = not_null(a_128);
    {
      ATerm a_6 (ATerm t)
      {
        ATerm b_128 = NULL;
        ATerm g_128 (ATerm t)
        {
          ATerm c_128 = NULL;
          t = not_null(b_128);
          if(((c_128 != NULL) && (c_128 != t)))
            _fail(t);
          else
            c_128 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_128), not_null(y_127));
          t = h_137(t);
          return(t);
        }
        if(((b_128 != NULL) && (b_128 != t)))
          _fail(t);
        else
          b_128 = t;
        t = g_128(t);
        return(t);
      }
      ATerm b_6 (ATerm t)
      {
        ATerm d_128 = NULL;
        ATerm h_128 (ATerm t)
        {
          ATerm e_128 = NULL;
          t = not_null(d_128);
          if(((e_128 != NULL) && (e_128 != t)))
            _fail(t);
          else
            e_128 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_128), not_null(z_127));
          t = h_137(t);
          return(t);
        }
        if(((d_128 != NULL) && (d_128 != t)))
          _fail(t);
        else
          d_128 = t;
        t = h_128(t);
        return(t);
      }
      t = i_137(a_6, b_6, _id, t);
    }
    return(t);
  }
  if(((u_127 != NULL) && (u_127 != t)))
    _fail(t);
  else
    u_127 = t;
  t = not_null(u_127);
  if(match_cons(t, sym__3))
    {
      v_127 = ATgetArgument(t, 0);
      w_127 = ATgetArgument(t, 1);
      x_127 = ATgetArgument(t, 2);
      t = f_128(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2_0 (ATerm b_137 (ATerm), ATerm c_137 (ATerm, ATerm (ATerm)), ATerm t)
{
  ATerm p_128 = NULL,q_128 = NULL,r_128 = NULL;
  ATerm e_129 (ATerm t)
  {
    ATerm s_128 = NULL,t_128 = NULL,u_128 = NULL,v_128 = NULL,w_128 = NULL,c_129 = NULL;
    t = not_null(q_128);
    if(((s_128 != NULL) && (s_128 != t)))
      _fail(t);
    else
      s_128 = t;
    t = not_null(r_128);
    if(((t_128 != NULL) && (t_128 != t)))
      _fail(t);
    else
      t_128 = t;
    t = not_null(p_128);
    {
      ATerm d_46;
      d_46 = t;
      {
        ATerm x_128 = NULL;
        ATerm f_129 (ATerm t)
        {
          ATerm y_128 = NULL;
          ATerm g_129 (ATerm t)
          {
            ATerm z_128 = NULL,b_129 = NULL;
            ATerm i_129 (ATerm t)
            {
              t = not_null(b_129);
              if(((w_128 != NULL) && (w_128 != t)))
                _fail(t);
              else
                w_128 = t;
              t = not_null(b_129);
              return(t);
            }
            t = not_null(y_128);
            if(((v_128 != NULL) && (v_128 != t)))
              _fail(t);
            else
              v_128 = t;
            t = not_null(y_128);
            {
              ATerm a_129 = NULL;
              ATerm h_129 (ATerm t)
              {
                t = not_null(a_129);
                if(((z_128 != NULL) && (z_128 != t)))
                  _fail(t);
                else
                  z_128 = t;
                t = not_null(a_129);
                return(t);
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_128), not_null(v_128));
              t = zip_1_0(_id, t);
              if(((a_129 != NULL) && (a_129 != t)))
                _fail(t);
              else
                a_129 = t;
              t = h_129(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_128), not_null(t_128));
              t = conc_0_0(t);
              if(((b_129 != NULL) && (b_129 != t)))
                _fail(t);
              else
                b_129 = t;
              t = i_129(t);
            }
            return(t);
          }
          t = not_null(x_128);
          if(((u_128 != NULL) && (u_128 != t)))
            _fail(t);
          else
            u_128 = t;
          t = not_null(x_128);
          t = map_1_0(new_0_0, t);
          if(((y_128 != NULL) && (y_128 != t)))
            _fail(t);
          else
            y_128 = t;
          t = g_129(t);
          return(t);
        }
        t = not_null(s_128);
        t = b_137(t);
        if(((x_128 != NULL) && (x_128 != t)))
          _fail(t);
        else
          x_128 = t;
        t = f_129(t);
      }
      t = d_46;
      {
        ATerm d_129 = NULL;
        ATerm j_129 (ATerm t)
        {
          t = not_null(d_129);
          if(((c_129 != NULL) && (c_129 != t)))
            _fail(t);
          else
            c_129 = t;
          t = not_null(d_129);
          return(t);
        }
        t = not_null(s_128);
        {
          ATerm c_6 (ATerm t)
          {
            t = not_null(v_128);
            return(t);
          }
          t = c_137(c_6, t);
          if(((d_129 != NULL) && (d_129 != t)))
            _fail(t);
          else
            d_129 = t;
          t = j_129(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(c_129), not_null(t_128), not_null(w_128));
      }
    }
    return(t);
  }
  if(((p_128 != NULL) && (p_128 != t)))
    _fail(t);
  else
    p_128 = t;
  t = not_null(p_128);
  if(match_cons(t, sym__2))
    {
      q_128 = ATgetArgument(t, 0);
      r_128 = ATgetArgument(t, 1);
      t = e_129(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0_0 (ATerm t)
{
  ATerm n_129 = NULL,o_129 = NULL,p_129 = NULL,q_129 = NULL,r_129 = NULL;
  ATerm u_129 (ATerm t)
  {
    ATerm s_129 = NULL,t_129 = NULL;
    t = not_null(o_129);
    if(((s_129 != NULL) && (s_129 != t)))
      _fail(t);
    else
      s_129 = t;
    t = not_null(r_129);
    if(((t_129 != NULL) && (t_129 != t)))
      _fail(t);
    else
      t_129 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_129), not_null(t_129));
    return(t);
  }
  if(((n_129 != NULL) && (n_129 != t)))
    _fail(t);
  else
    n_129 = t;
  t = not_null(n_129);
  if(match_cons(t, sym__2))
    {
      o_129 = ATgetArgument(t, 0);
      p_129 = ATgetArgument(t, 1);
      t = not_null(p_129);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_129 = ATgetFirst((ATermList) t);
          r_129 = (ATerm) ATgetNext((ATermList) t);
          t = u_129(t);
        }
      else
        {
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
  ATerm a_130 = NULL,b_130 = NULL,c_130 = NULL,e_130 = NULL,f_130 = NULL,g_130 = NULL,h_130 = NULL;
  ATerm k_130 (ATerm t)
  {
    ATerm i_130 = NULL,j_130 = NULL;
    t = not_null(b_130);
    if(((i_130 != NULL) && (i_130 != t)))
      _fail(t);
    else
      i_130 = t;
    t = not_null(f_130);
    if(((i_130 != NULL) && (i_130 != t)))
      _fail(t);
    else
      i_130 = t;
    t = not_null(g_130);
    if(((j_130 != NULL) && (j_130 != t)))
      _fail(t);
    else
      j_130 = t;
    t = not_null(j_130);
    return(t);
  }
  if(((a_130 != NULL) && (a_130 != t)))
    _fail(t);
  else
    a_130 = t;
  t = not_null(a_130);
  if(match_cons(t, sym__2))
    {
      b_130 = ATgetArgument(t, 0);
      c_130 = ATgetArgument(t, 1);
      t = not_null(c_130);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_130 = ATgetFirst((ATermList) t);
          h_130 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(e_130);
          if(match_cons(t, sym__2))
            {
              f_130 = ATgetArgument(t, 0);
              g_130 = ATgetArgument(t, 1);
              t = k_130(t);
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm e_46 = t;
  int f_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0_0(t);
      ;
      LocalPopChoice(f_46);
    }
  else
    {
      t = e_46;
      t = Look2_0_0(t);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm RnVar_1_0 (ATerm m_137 (ATerm, ATerm (ATerm)), ATerm t)
{
  ATerm p_130 = NULL,q_130 = NULL,r_130 = NULL;
  ATerm u_130 (ATerm t)
  {
    ATerm s_130 = NULL,t_130 = NULL;
    t = not_null(q_130);
    if(((t_130 != NULL) && (t_130 != t)))
      _fail(t);
    else
      t_130 = t;
    t = not_null(r_130);
    if(((s_130 != NULL) && (s_130 != t)))
      _fail(t);
    else
      s_130 = t;
    t = not_null(t_130);
    {
      ATerm d_6 (ATerm t)
      {
        ATerm e_6 (ATerm t)
        {
          t = not_null(s_130);
          return(t);
        }
        t = split_2_0(_id, e_6, t);
        t = lookup_0_0(t);
        return(t);
      }
      t = m_137(d_6, t);
    }
    return(t);
  }
  if(((p_130 != NULL) && (p_130 != t)))
    _fail(t);
  else
    p_130 = t;
  t = not_null(p_130);
  if(match_cons(t, sym__2))
    {
      q_130 = ATgetArgument(t, 0);
      r_130 = ATgetArgument(t, 1);
      t = u_130(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1_0 (ATerm f_127 (ATerm), ATerm t)
{
  ATerm y_130 = NULL,z_130 = NULL,a_131 = NULL;
  ATerm f_131 (ATerm t)
  {
    ATerm b_131 = NULL,c_131 = NULL;
    t = not_null(z_130);
    if(((c_131 != NULL) && (c_131 != t)))
      _fail(t);
    else
      c_131 = t;
    t = not_null(a_131);
    if(((b_131 != NULL) && (b_131 != t)))
      _fail(t);
    else
      b_131 = t;
    t = not_null(c_131);
    {
      ATerm f_6 (ATerm t)
      {
        ATerm d_131 = NULL;
        ATerm g_131 (ATerm t)
        {
          ATerm e_131 = NULL;
          t = not_null(d_131);
          if(((e_131 != NULL) && (e_131 != t)))
            _fail(t);
          else
            e_131 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_131), not_null(b_131));
          t = f_127(t);
          return(t);
        }
        if(((d_131 != NULL) && (d_131 != t)))
          _fail(t);
        else
          d_131 = t;
        t = g_131(t);
        return(t);
      }
      t = SRTS_all(f_6, t);
    }
    return(t);
  }
  if(((y_130 != NULL) && (y_130 != t)))
    _fail(t);
  else
    y_130 = t;
  t = not_null(y_130);
  if(match_cons(t, sym__2))
    {
      z_130 = ATgetArgument(t, 0);
      a_131 = ATgetArgument(t, 1);
      t = f_131(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm p_126 (ATerm), ATerm t)
{
  ATerm h_131 (ATerm t)
  {
    ATerm g_46 = t;
    int h_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_126(t);
        ;
        LocalPopChoice(h_46);
      }
    else
      {
        t = g_46;
        t = all_dist_1_0(h_131, t);
      }
    return(t);
  }
  t = h_131(t);
  return(t);
}
ATerm rename_4_0 (ATerm w_136 (ATerm, ATerm (ATerm)), ATerm x_136 (ATerm), ATerm y_136 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_136 (ATerm, ATerm (ATerm)), ATerm t)
{
  ATerm j_131 = NULL;
  ATerm l_131 (ATerm t)
  {
    ATerm k_131 = NULL;
    t = not_null(j_131);
    if(((k_131 != NULL) && (k_131 != t)))
      _fail(t);
    else
      k_131 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_131), (ATerm) ATempty);
    {
      ATerm m_131 (ATerm t)
      {
        ATerm g_6 (ATerm t)
        {
          ATerm i_46 = t;
          int j_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1_0(w_136, t);
              ;
              LocalPopChoice(j_46);
            }
          else
            {
              t = i_46;
              t = RnBinding_2_0(x_136, z_136, t);
              t = DistBinding_2_0(m_131, y_136, t);
            }
          return(t);
        }
        t = env_alltd_1_0(g_6, t);
        return(t);
      }
      t = m_131(t);
    }
    return(t);
  }
  if(((j_131 != NULL) && (j_131 != t)))
    _fail(t);
  else
    j_131 = t;
  t = l_131(t);
  return(t);
}
ATerm trename_0_0 (ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    ATerm o_46 = t;
    int p_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(p_46);
      }
    else
      {
        t = o_46;
        {
          ATerm t_46 = t;
          int x_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0_0(t);
              ;
              LocalPopChoice(x_46);
            }
          else
            {
              t = t_46;
              t = Bind8_0_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, h_6, tboundin_3_0, tpaste_1_0, t);
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = trename_0_0(t);
  t = srename_0_0(t);
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm p_131 = NULL,q_131 = NULL,r_131 = NULL;
  ATerm t_131 (ATerm t)
  {
    ATerm s_131 = NULL;
    t = not_null(q_131);
    if(((s_131 != NULL) && (s_131 != t)))
      _fail(t);
    else
      s_131 = t;
    t = not_null(s_131);
    return(t);
  }
  if(((p_131 != NULL) && (p_131 != t)))
    _fail(t);
  else
    p_131 = t;
  t = not_null(p_131);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_131 = ATgetFirst((ATermList) t);
      r_131 = (ATerm) ATgetNext((ATermList) t);
      t = t_131(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0_0 (ATerm t)
{
  ATerm w_131 = NULL,x_131 = NULL,y_131 = NULL;
  ATerm c_132 (ATerm t)
  {
    ATerm a_132 = NULL,b_132 = NULL;
    t = not_null(x_131);
    if(((a_132 != NULL) && (a_132 != t)))
      _fail(t);
    else
      a_132 = t;
    t = not_null(y_131);
    if(((b_132 != NULL) && (b_132 != t)))
      _fail(t);
    else
      b_132 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_132), not_null(b_132));
    t = table_get_0_0(t);
    t = Hd_0_0(t);
    return(t);
  }
  if(((w_131 != NULL) && (w_131 != t)))
    _fail(t);
  else
    w_131 = t;
  t = not_null(w_131);
  if(match_cons(t, sym__2))
    {
      x_131 = ATgetArgument(t, 0);
      y_131 = ATgetArgument(t, 1);
      t = c_132(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1_0 (ATerm c_123 (ATerm), ATerm t)
{
  ATerm l_132 = NULL;
  ATerm t_132 (ATerm t)
  {
    ATerm m_132 = NULL,n_132 = NULL;
    t = not_null(l_132);
    if(((m_132 != NULL) && (m_132 != t)))
      _fail(t);
    else
      m_132 = t;
    t = not_null(l_132);
    {
      ATerm s_132 = NULL;
      ATerm u_132 (ATerm t)
      {
        t = not_null(s_132);
        if(((n_132 != NULL) && (n_132 != t)))
          _fail(t);
        else
          n_132 = t;
        t = not_null(s_132);
        return(t);
      }
      t = term_y_46;
      t = c_123(t);
      if(((s_132 != NULL) && (s_132 != t)))
        _fail(t);
      else
        s_132 = t;
      t = u_132(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_132), not_null(m_132));
      t = table_lookup_0_0(t);
    }
    return(t);
  }
  if(((l_132 != NULL) && (l_132 != t)))
    _fail(t);
  else
    l_132 = t;
  t = t_132(t);
  return(t);
}
ATerm InlineStrat_0_0 (ATerm t)
{
  ATerm t_133 = NULL,u_133 = NULL,v_133 = NULL,w_133 = NULL,x_133 = NULL;
  ATerm q_135 (ATerm t)
  {
    ATerm y_133 = NULL,z_133 = NULL,a_134 = NULL,b_134 = NULL,c_134 = NULL,d_134 = NULL,e_134 = NULL,f_134 = NULL,g_134 = NULL,h_134 = NULL,i_134 = NULL,j_134 = NULL,k_134 = NULL;
    t = not_null(t_133);
    if(((y_133 != NULL) && (y_133 != t)))
      _fail(t);
    else
      y_133 = t;
    t = not_null(v_133);
    if(((z_133 != NULL) && (z_133 != t)))
      _fail(t);
    else
      z_133 = t;
    t = not_null(w_133);
    if(((a_134 != NULL) && (a_134 != t)))
      _fail(t);
    else
      a_134 = t;
    t = not_null(x_133);
    if(((b_134 != NULL) && (b_134 != t)))
      _fail(t);
    else
      b_134 = t;
    t = not_null(t_133);
    {
      ATerm l_134 = NULL,m_134 = NULL,n_134 = NULL,o_134 = NULL,p_134 = NULL;
      ATerm r_135 (ATerm t)
      {
        ATerm q_134 = NULL,r_134 = NULL,s_134 = NULL,t_134 = NULL,u_134 = NULL;
        ATerm s_135 (ATerm t)
        {
          ATerm v_134 = NULL,c_135 = NULL;
          ATerm v_135 (ATerm t)
          {
            ATerm h_135 = NULL;
            ATerm x_135 (ATerm t)
            {
              ATerm i_135 = NULL,p_135 = NULL;
              ATerm j_136 (ATerm t)
              {
                t = not_null(p_135);
                if(((k_134 != NULL) && (k_134 != t)))
                  _fail(t);
                else
                  k_134 = t;
                t = not_null(p_135);
                return(t);
              }
              t = not_null(h_135);
              if(((j_134 != NULL) && (j_134 != t)))
                _fail(t);
              else
                j_134 = t;
              t = not_null(h_135);
              {
                ATerm o_135 = NULL;
                ATerm i_136 (ATerm t)
                {
                  t = not_null(o_135);
                  if(((i_135 != NULL) && (i_135 != t)))
                    _fail(t);
                  else
                    i_135 = t;
                  t = not_null(o_135);
                  return(t);
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_134), not_null(j_134));
                {
                  ATerm i_6 (ATerm t)
                  {
                    ATerm j_135 = NULL,k_135 = NULL,l_135 = NULL;
                    ATerm y_135 (ATerm t)
                    {
                      ATerm m_135 = NULL,n_135 = NULL;
                      t = not_null(k_135);
                      if(((m_135 != NULL) && (m_135 != t)))
                        _fail(t);
                      else
                        m_135 = t;
                      t = not_null(l_135);
                      if(((n_135 != NULL) && (n_135 != t)))
                        _fail(t);
                      else
                        n_135 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_135)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_135))));
                      return(t);
                    }
                    if(((j_135 != NULL) && (j_135 != t)))
                      _fail(t);
                    else
                      j_135 = t;
                    t = not_null(j_135);
                    if(match_cons(t, sym__2))
                      {
                        k_135 = ATgetArgument(t, 0);
                        l_135 = ATgetArgument(t, 1);
                        t = y_135(t);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = zip_1_0(i_6, t);
                  if(((o_135 != NULL) && (o_135 != t)))
                    _fail(t);
                  else
                    o_135 = t;
                  t = i_136(t);
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(i_135));
                if(((p_135 != NULL) && (p_135 != t)))
                  _fail(t);
                else
                  p_135 = t;
                t = j_136(t);
              }
              return(t);
            }
            t = not_null(c_135);
            if(((h_134 != NULL) && (h_134 != t)))
              _fail(t);
            else
              h_134 = t;
            t = not_null(i_134);
            {
              ATerm j_6 (ATerm t)
              {
                ATerm d_135 = NULL,e_135 = NULL,f_135 = NULL;
                ATerm w_135 (ATerm t)
                {
                  ATerm g_135 = NULL;
                  t = not_null(e_135);
                  if(((g_135 != NULL) && (g_135 != t)))
                    _fail(t);
                  else
                    g_135 = t;
                  t = not_null(g_135);
                  return(t);
                }
                if(((d_135 != NULL) && (d_135 != t)))
                  _fail(t);
                else
                  d_135 = t;
                t = not_null(d_135);
                if(match_cons(t, sym_VarDec_2))
                  {
                    e_135 = ATgetArgument(t, 0);
                    f_135 = ATgetArgument(t, 1);
                    t = w_135(t);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1_0(j_6, t);
              if(((h_135 != NULL) && (h_135 != t)))
                _fail(t);
              else
                h_135 = t;
              t = x_135(t);
            }
            return(t);
          }
          t = not_null(r_134);
          if(((z_133 != NULL) && (z_133 != t)))
            _fail(t);
          else
            z_133 = t;
          t = not_null(s_134);
          if(((f_134 != NULL) && (f_134 != t)))
            _fail(t);
          else
            f_134 = t;
          t = not_null(t_134);
          if(((e_134 != NULL) && (e_134 != t)))
            _fail(t);
          else
            e_134 = t;
          t = not_null(u_134);
          if(((g_134 != NULL) && (g_134 != t)))
            _fail(t);
          else
            g_134 = t;
          t = not_null(q_134);
          {
            ATerm b_135 = NULL;
            ATerm u_135 (ATerm t)
            {
              t = not_null(b_135);
              if(((v_134 != NULL) && (v_134 != t)))
                _fail(t);
              else
                v_134 = t;
              t = not_null(b_135);
              return(t);
            }
            t = not_null(f_134);
            {
              ATerm k_6 (ATerm t)
              {
                ATerm w_134 = NULL,x_134 = NULL,y_134 = NULL;
                ATerm t_135 (ATerm t)
                {
                  ATerm a_135 = NULL;
                  t = not_null(x_134);
                  if(((a_135 != NULL) && (a_135 != t)))
                    _fail(t);
                  else
                    a_135 = t;
                  t = not_null(a_135);
                  return(t);
                }
                if(((w_134 != NULL) && (w_134 != t)))
                  _fail(t);
                else
                  w_134 = t;
                t = not_null(w_134);
                if(match_cons(t, sym_VarDec_2))
                  {
                    x_134 = ATgetArgument(t, 0);
                    y_134 = ATgetArgument(t, 1);
                    t = t_135(t);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1_0(k_6, t);
              if(((b_135 != NULL) && (b_135 != t)))
                _fail(t);
              else
                b_135 = t;
              t = u_135(t);
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_134), not_null(a_134), not_null(g_134));
            t = ssubs_0_0(t);
            if(((c_135 != NULL) && (c_135 != t)))
              _fail(t);
            else
              c_135 = t;
            t = v_135(t);
          }
          return(t);
        }
        t = not_null(n_134);
        if(((c_134 != NULL) && (c_134 != t)))
          _fail(t);
        else
          c_134 = t;
        t = not_null(o_134);
        if(((d_134 != NULL) && (d_134 != t)))
          _fail(t);
        else
          d_134 = t;
        t = not_null(p_134);
        if(((i_134 != NULL) && (i_134 != t)))
          _fail(t);
        else
          i_134 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(z_133), not_null(c_134), not_null(i_134), not_null(d_134));
        t = strename_0_0(t);
        if(((q_134 != NULL) && (q_134 != t)))
          _fail(t);
        else
          q_134 = t;
        t = not_null(q_134);
        if(match_cons(t, sym_SDefT_4))
          {
            r_134 = ATgetArgument(t, 0);
            s_134 = ATgetArgument(t, 1);
            t_134 = ATgetArgument(t, 2);
            u_134 = ATgetArgument(t, 3);
            t = s_135(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_133)), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
      {
        ATerm l_6 (ATerm t)
        {
          t = term_z_46;
          return(t);
        }
        t = rewrite_1_0(l_6, t);
        if(((l_134 != NULL) && (l_134 != t)))
          _fail(t);
        else
          l_134 = t;
        t = not_null(l_134);
        if(match_cons(t, sym_Defined_4))
          {
            m_134 = ATgetArgument(t, 0);
            n_134 = ATgetArgument(t, 1);
            o_134 = ATgetArgument(t, 2);
            p_134 = ATgetArgument(t, 3);
            t = not_null(m_134);
            if(match_string(t, "b_0"))
              {
                t = r_135(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
      t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_134), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_134), not_null(h_134)));
      t = simplify0_0_0(t);
    }
    return(t);
  }
  if(((t_133 != NULL) && (t_133 != t)))
    _fail(t);
  else
    t_133 = t;
  t = not_null(t_133);
  if(match_cons(t, sym_CallT_3))
    {
      u_133 = ATgetArgument(t, 0);
      w_133 = ATgetArgument(t, 1);
      x_133 = ATgetArgument(t, 2);
      t = not_null(u_133);
      if(match_cons(t, sym_SVar_1))
        {
          v_133 = ATgetArgument(t, 0);
          t = q_135(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm check_that_try_is_try_0_0 (ATerm t)
{
  ATerm s_136 = NULL;
  ATerm a_47;
  a_47 = t;
  {
    ATerm t_136 = NULL;
    ATerm n_137 (ATerm t)
    {
      t = not_null(t_136);
      if(((s_136 != NULL) && (s_136 != t)))
        _fail(t);
      else
        s_136 = t;
      t = not_null(t_136);
      {
        ATerm b_47 = t;
        int c_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_e_47, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_136)), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
            t = InlineStrat_0_0(t);
            ;
            LocalPopChoice(c_47);
          }
        else
          {
            t = b_47;
            {
              ATerm m_6 (ATerm t)
              {
                ATerm n_6 (ATerm t)
                {
                  t = term_f_47;
                  return(t);
                }
                t = say_1_0(n_6, t);
                return(t);
              }
              t = if_verbose2_1_0(m_6, t);
              _fail(t);
            }
          }
        {
          ATerm g_47 = t;
          int h_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_137 = NULL,e_137 = NULL,f_137 = NULL,g_137 = NULL,j_137 = NULL,k_137 = NULL,l_137 = NULL;
              ATerm o_137 (ATerm t)
              {
                t = not_null(g_137);
                if(((s_136 != NULL) && (s_136 != t)))
                  _fail(t);
                else
                  s_136 = t;
                t = not_null(d_137);
                return(t);
              }
              if(((d_137 != NULL) && (d_137 != t)))
                _fail(t);
              else
                d_137 = t;
              t = not_null(d_137);
              if(match_cons(t, sym_LChoice_2))
                {
                  e_137 = ATgetArgument(t, 0);
                  l_137 = ATgetArgument(t, 1);
                  t = not_null(e_137);
                  if(match_cons(t, sym_CallT_3))
                    {
                      f_137 = ATgetArgument(t, 0);
                      j_137 = ATgetArgument(t, 1);
                      k_137 = ATgetArgument(t, 2);
                      t = not_null(f_137);
                      if(match_cons(t, sym_SVar_1))
                        {
                          g_137 = ATgetArgument(t, 0);
                          t = not_null(j_137);
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = not_null(k_137);
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = not_null(l_137);
                                  if(match_cons(t, sym_Id_0))
                                    {
                                      t = o_137(t);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
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
              LocalPopChoice(h_47);
            }
          else
            {
              t = g_47;
              {
                ATerm o_6 (ATerm t)
                {
                  ATerm p_6 (ATerm t)
                  {
                    t = term_i_47;
                    return(t);
                  }
                  t = debug_1_0(p_6, t);
                  return(t);
                }
                t = if_verbose1_1_0(o_6, t);
                _fail(t);
              }
            }
          {
            ATerm q_6 (ATerm t)
            {
              ATerm r_6 (ATerm t)
              {
                t = term_j_47;
                return(t);
              }
              t = say_1_0(r_6, t);
              return(t);
            }
            t = if_verbose2_1_0(q_6, t);
          }
        }
      }
      return(t);
    }
    t = new_0_0(t);
    if(((t_136 != NULL) && (t_136 != t)))
      _fail(t);
    else
      t_136 = t;
    t = n_137(t);
  }
  t = a_47;
  return(t);
}
ATerm check_library_definitions_0_0 (ATerm t)
{
  t = check_that_try_is_try_0_0(t);
  t = check_that_innermost_is_innermost_0_0(t);
  t = check_that_bottomup_is_bottomup_0_0(t);
  return(t);
}
ATerm assert_1_0 (ATerm a_123 (ATerm), ATerm t)
{
  ATerm u_137 = NULL,v_137 = NULL,w_137 = NULL;
  ATerm g_138 (ATerm t)
  {
    ATerm x_137 = NULL,y_137 = NULL,z_137 = NULL,a_138 = NULL,b_138 = NULL;
    t = not_null(v_137);
    if(((x_137 != NULL) && (x_137 != t)))
      _fail(t);
    else
      x_137 = t;
    t = not_null(w_137);
    if(((y_137 != NULL) && (y_137 != t)))
      _fail(t);
    else
      y_137 = t;
    t = not_null(u_137);
    {
      ATerm k_47;
      k_47 = t;
      {
        ATerm c_138 = NULL;
        ATerm h_138 (ATerm t)
        {
          ATerm d_138 = NULL,e_138 = NULL,f_138 = NULL;
          ATerm i_138 (ATerm t)
          {
            t = not_null(e_138);
            if(((a_138 != NULL) && (a_138 != t)))
              _fail(t);
            else
              a_138 = t;
            t = not_null(f_138);
            if(((b_138 != NULL) && (b_138 != t)))
              _fail(t);
            else
              b_138 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_137), term_l_21, (ATerm) ATinsert(CheckATermList(not_null(b_138)), (ATerm) ATinsert(CheckATermList(not_null(a_138)), not_null(x_137))));
            t = table_put_0_0(t);
            return(t);
          }
          t = not_null(c_138);
          if(((z_137 != NULL) && (z_137 != t)))
            _fail(t);
          else
            z_137 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(z_137), not_null(x_137), not_null(y_137));
          t = table_push_0_0(t);
          {
            ATerm a_48 = t;
            int b_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_137), term_l_21);
                t = table_get_0_0(t);
                ;
                LocalPopChoice(b_48);
              }
            else
              {
                t = a_48;
                t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
              }
            if(((d_138 != NULL) && (d_138 != t)))
              _fail(t);
            else
              d_138 = t;
            t = not_null(d_138);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_138 = ATgetFirst((ATermList) t);
                f_138 = (ATerm) ATgetNext((ATermList) t);
                t = i_138(t);
              }
            else
              {
                _fail(t);
              }
          }
          return(t);
        }
        t = a_123(t);
        if(((c_138 != NULL) && (c_138 != t)))
          _fail(t);
        else
          c_138 = t;
        t = h_138(t);
      }
      t = k_47;
    }
    return(t);
  }
  if(((u_137 != NULL) && (u_137 != t)))
    _fail(t);
  else
    u_137 = t;
  t = not_null(u_137);
  if(match_cons(t, sym__2))
    {
      v_137 = ATgetArgument(t, 0);
      w_137 = ATgetArgument(t, 1);
      t = g_138(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declare_inline_rule_0_0 (ATerm t)
{
  ATerm l_138 = NULL,q_138 = NULL,r_138 = NULL,s_138 = NULL,t_138 = NULL;
  ATerm a_139 (ATerm t)
  {
    ATerm u_138 = NULL,x_138 = NULL,y_138 = NULL,z_138 = NULL;
    t = not_null(q_138);
    if(((u_138 != NULL) && (u_138 != t)))
      _fail(t);
    else
      u_138 = t;
    t = not_null(r_138);
    if(((x_138 != NULL) && (x_138 != t)))
      _fail(t);
    else
      x_138 = t;
    t = not_null(s_138);
    if(((z_138 != NULL) && (z_138 != t)))
      _fail(t);
    else
      z_138 = t;
    t = not_null(t_138);
    if(((y_138 != NULL) && (y_138 != t)))
      _fail(t);
    else
      y_138 = t;
    t = not_null(l_138);
    {
      ATerm c_48;
      c_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_138)), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_4, term_d_48, not_null(x_138), not_null(y_138), not_null(z_138)));
      {
        ATerm s_6 (ATerm t)
        {
          t = term_z_46;
          return(t);
        }
        t = assert_1_0(s_6, t);
      }
      t = c_48;
    }
    return(t);
  }
  if(((l_138 != NULL) && (l_138 != t)))
    _fail(t);
  else
    l_138 = t;
  t = not_null(l_138);
  if(match_cons(t, sym_SDefT_4))
    {
      q_138 = ATgetArgument(t, 0);
      r_138 = ATgetArgument(t, 1);
      s_138 = ATgetArgument(t, 2);
      t_138 = ATgetArgument(t, 3);
      t = a_139(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Strategies_1_0 (ATerm o_95 (ATerm), ATerm t)
{
  ATerm g_139 = NULL,h_139 = NULL;
  ATerm y_139 (ATerm t)
  {
    ATerm i_139 = NULL,j_139 = NULL,k_139 = NULL,m_139 = NULL;
    ATerm a_140 (ATerm t)
    {
      ATerm n_139 = NULL,o_139 = NULL;
      t = not_null(m_139);
      if(((n_139 != NULL) && (n_139 != t)))
        _fail(t);
      else
        n_139 = t;
      t = not_null(m_139);
      {
        ATerm p_139 = NULL;
        ATerm b_140 (ATerm t)
        {
          t = not_null(p_139);
          if(((o_139 != NULL) && (o_139 != t)))
            _fail(t);
          else
            o_139 = t;
          t = not_null(p_139);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(n_139)), not_null(k_139));
        if(((p_139 != NULL) && (p_139 != t)))
          _fail(t);
        else
          p_139 = t;
        t = b_140(t);
        t = not_null(o_139);
      }
      return(t);
    }
    t = not_null(g_139);
    if(((i_139 != NULL) && (i_139 != t)))
      _fail(t);
    else
      i_139 = t;
    t = not_null(h_139);
    if(((j_139 != NULL) && (j_139 != t)))
      _fail(t);
    else
      j_139 = t;
    t = not_null(g_139);
    {
      ATerm l_139 = NULL;
      ATerm z_139 (ATerm t)
      {
        t = not_null(l_139);
        if(((k_139 != NULL) && (k_139 != t)))
          _fail(t);
        else
          k_139 = t;
        t = not_null(l_139);
        return(t);
      }
      t = SSLgetAnnotations(not_null(i_139));
      if(((l_139 != NULL) && (l_139 != t)))
        _fail(t);
      else
        l_139 = t;
      t = z_139(t);
      t = not_null(j_139);
      t = o_95(t);
      if(((m_139 != NULL) && (m_139 != t)))
        _fail(t);
      else
        m_139 = t;
      t = a_140(t);
    }
    return(t);
  }
  if(((g_139 != NULL) && (g_139 != t)))
    _fail(t);
  else
    g_139 = t;
  t = not_null(g_139);
  if(match_cons(t, sym_Strategies_1))
    {
      h_139 = ATgetArgument(t, 0);
      t = y_139(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Signature_1_0 (ATerm p_95 (ATerm), ATerm t)
{
  ATerm j_140 = NULL,k_140 = NULL;
  ATerm t_140 (ATerm t)
  {
    ATerm l_140 = NULL,m_140 = NULL,n_140 = NULL,p_140 = NULL;
    ATerm v_140 (ATerm t)
    {
      ATerm q_140 = NULL,r_140 = NULL;
      t = not_null(p_140);
      if(((q_140 != NULL) && (q_140 != t)))
        _fail(t);
      else
        q_140 = t;
      t = not_null(p_140);
      {
        ATerm s_140 = NULL;
        ATerm w_140 (ATerm t)
        {
          t = not_null(s_140);
          if(((r_140 != NULL) && (r_140 != t)))
            _fail(t);
          else
            r_140 = t;
          t = not_null(s_140);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(q_140)), not_null(n_140));
        if(((s_140 != NULL) && (s_140 != t)))
          _fail(t);
        else
          s_140 = t;
        t = w_140(t);
        t = not_null(r_140);
      }
      return(t);
    }
    t = not_null(j_140);
    if(((l_140 != NULL) && (l_140 != t)))
      _fail(t);
    else
      l_140 = t;
    t = not_null(k_140);
    if(((m_140 != NULL) && (m_140 != t)))
      _fail(t);
    else
      m_140 = t;
    t = not_null(j_140);
    {
      ATerm o_140 = NULL;
      ATerm u_140 (ATerm t)
      {
        t = not_null(o_140);
        if(((n_140 != NULL) && (n_140 != t)))
          _fail(t);
        else
          n_140 = t;
        t = not_null(o_140);
        return(t);
      }
      t = SSLgetAnnotations(not_null(l_140));
      if(((o_140 != NULL) && (o_140 != t)))
        _fail(t);
      else
        o_140 = t;
      t = u_140(t);
      t = not_null(m_140);
      t = p_95(t);
      if(((p_140 != NULL) && (p_140 != t)))
        _fail(t);
      else
        p_140 = t;
      t = v_140(t);
    }
    return(t);
  }
  if(((j_140 != NULL) && (j_140 != t)))
    _fail(t);
  else
    j_140 = t;
  t = not_null(j_140);
  if(match_cons(t, sym_Signature_1))
    {
      k_140 = ATgetArgument(t, 0);
      t = t_140(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1_0 (ATerm t_95 (ATerm), ATerm t)
{
  ATerm c_141 = NULL,d_141 = NULL;
  ATerm m_141 (ATerm t)
  {
    ATerm e_141 = NULL,f_141 = NULL,g_141 = NULL,i_141 = NULL;
    ATerm o_141 (ATerm t)
    {
      ATerm j_141 = NULL,k_141 = NULL;
      t = not_null(i_141);
      if(((j_141 != NULL) && (j_141 != t)))
        _fail(t);
      else
        j_141 = t;
      t = not_null(i_141);
      {
        ATerm l_141 = NULL;
        ATerm p_141 (ATerm t)
        {
          t = not_null(l_141);
          if(((k_141 != NULL) && (k_141 != t)))
            _fail(t);
          else
            k_141 = t;
          t = not_null(l_141);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(j_141)), not_null(g_141));
        if(((l_141 != NULL) && (l_141 != t)))
          _fail(t);
        else
          l_141 = t;
        t = p_141(t);
        t = not_null(k_141);
      }
      return(t);
    }
    t = not_null(c_141);
    if(((e_141 != NULL) && (e_141 != t)))
      _fail(t);
    else
      e_141 = t;
    t = not_null(d_141);
    if(((f_141 != NULL) && (f_141 != t)))
      _fail(t);
    else
      f_141 = t;
    t = not_null(c_141);
    {
      ATerm h_141 = NULL;
      ATerm n_141 (ATerm t)
      {
        t = not_null(h_141);
        if(((g_141 != NULL) && (g_141 != t)))
          _fail(t);
        else
          g_141 = t;
        t = not_null(h_141);
        return(t);
      }
      t = SSLgetAnnotations(not_null(e_141));
      if(((h_141 != NULL) && (h_141 != t)))
        _fail(t);
      else
        h_141 = t;
      t = n_141(t);
      t = not_null(f_141);
      t = t_95(t);
      if(((i_141 != NULL) && (i_141 != t)))
        _fail(t);
      else
        i_141 = t;
      t = o_141(t);
    }
    return(t);
  }
  if(((c_141 != NULL) && (c_141 != t)))
    _fail(t);
  else
    c_141 = t;
  t = not_null(c_141);
  if(match_cons(t, sym_Specification_1))
    {
      d_141 = ATgetArgument(t, 0);
      t = m_141(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declare_inline_rules_0_0 (ATerm t)
{
  ATerm t_6 (ATerm t)
  {
    ATerm u_6 (ATerm t)
    {
      t = Signature_1_0(_id, t);
      return(t);
    }
    ATerm v_6 (ATerm t)
    {
      ATerm w_6 (ATerm t)
      {
        ATerm x_6 (ATerm t)
        {
          t = map_1_0(declare_inline_rule_0_0, t);
          return(t);
        }
        t = Strategies_1_0(x_6, t);
        return(t);
      }
      t = Cons_2_0(w_6, Nil_0_0, t);
      return(t);
    }
    t = Cons_2_0(u_6, v_6, t);
    return(t);
  }
  t = Specification_1_0(t_6, t);
  return(t);
}
ATerm _2_0 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm t)
{
  ATerm w_141 = NULL,x_141 = NULL,y_141 = NULL;
  ATerm k_142 (ATerm t)
  {
    ATerm z_141 = NULL,a_142 = NULL,b_142 = NULL,c_142 = NULL,e_142 = NULL;
    ATerm m_142 (ATerm t)
    {
      ATerm f_142 = NULL,g_142 = NULL;
      ATerm n_142 (ATerm t)
      {
        ATerm h_142 = NULL,i_142 = NULL;
        t = not_null(g_142);
        if(((h_142 != NULL) && (h_142 != t)))
          _fail(t);
        else
          h_142 = t;
        t = not_null(g_142);
        {
          ATerm j_142 = NULL;
          ATerm o_142 (ATerm t)
          {
            t = not_null(j_142);
            if(((i_142 != NULL) && (i_142 != t)))
              _fail(t);
            else
              i_142 = t;
            t = not_null(j_142);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(f_142), not_null(h_142)), not_null(c_142));
          if(((j_142 != NULL) && (j_142 != t)))
            _fail(t);
          else
            j_142 = t;
          t = o_142(t);
          t = not_null(i_142);
        }
        return(t);
      }
      t = not_null(e_142);
      if(((f_142 != NULL) && (f_142 != t)))
        _fail(t);
      else
        f_142 = t;
      t = not_null(b_142);
      t = c_94(t);
      if(((g_142 != NULL) && (g_142 != t)))
        _fail(t);
      else
        g_142 = t;
      t = n_142(t);
      return(t);
    }
    t = not_null(w_141);
    if(((z_141 != NULL) && (z_141 != t)))
      _fail(t);
    else
      z_141 = t;
    t = not_null(x_141);
    if(((a_142 != NULL) && (a_142 != t)))
      _fail(t);
    else
      a_142 = t;
    t = not_null(y_141);
    if(((b_142 != NULL) && (b_142 != t)))
      _fail(t);
    else
      b_142 = t;
    t = not_null(w_141);
    {
      ATerm d_142 = NULL;
      ATerm l_142 (ATerm t)
      {
        t = not_null(d_142);
        if(((c_142 != NULL) && (c_142 != t)))
          _fail(t);
        else
          c_142 = t;
        t = not_null(d_142);
        return(t);
      }
      t = SSLgetAnnotations(not_null(z_141));
      if(((d_142 != NULL) && (d_142 != t)))
        _fail(t);
      else
        d_142 = t;
      t = l_142(t);
      t = not_null(a_142);
      t = b_94(t);
      if(((e_142 != NULL) && (e_142 != t)))
        _fail(t);
      else
        e_142 = t;
      t = m_142(t);
    }
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
      t = k_142(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_48;
  g_48 = t;
  {
    ATerm q_142 = NULL;
    ATerm r_142 = NULL;
    ATerm s_142 (ATerm t)
    {
      t = not_null(r_142);
      if(((q_142 != NULL) && (q_142 != t)))
        _fail(t);
      else
        q_142 = t;
      t = not_null(r_142);
      return(t);
    }
    t = term_y_46;
    t = whoami_0_0(t);
    if(((r_142 != NULL) && (r_142 != t)))
      _fail(t);
    else
      r_142 = t;
    t = s_142(t);
    t = (ATerm) ATmakeAppl(sym__2, term_f_12, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_48), not_null(q_142)), term_h_48));
    t = printnl_0_0(t);
    t = term_k_48;
    t = exit_0_0(t);
  }
  t = g_48;
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm v_142 = NULL,w_142 = NULL,x_142 = NULL;
  ATerm a_143 (ATerm t)
  {
    ATerm y_142 = NULL,z_142 = NULL;
    t = not_null(w_142);
    if(((y_142 != NULL) && (y_142 != t)))
      _fail(t);
    else
      y_142 = t;
    t = not_null(x_142);
    if(((z_142 != NULL) && (z_142 != t)))
      _fail(t);
    else
      z_142 = t;
    t = not_null(v_142);
    {
      ATerm l_48;
      l_48 = t;
      t = SSL_printnl(not_null(y_142), not_null(z_142));
      t = l_48;
    }
    return(t);
  }
  if(((v_142 != NULL) && (v_142 != t)))
    _fail(t);
  else
    v_142 = t;
  t = not_null(v_142);
  if(match_cons(t, sym__2))
    {
      w_142 = ATgetArgument(t, 0);
      x_142 = ATgetArgument(t, 1);
      t = a_143(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm c_143 = NULL;
  ATerm e_143 (ATerm t)
  {
    ATerm d_143 = NULL;
    t = not_null(c_143);
    if(((d_143 != NULL) && (d_143 != t)))
      _fail(t);
    else
      d_143 = t;
    t = not_null(c_143);
    t = SSL_implode_string(not_null(d_143));
    return(t);
  }
  if(((c_143 != NULL) && (c_143 != t)))
    _fail(t);
  else
    c_143 = t;
  t = e_143(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_48 = t;
  int q_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(q_48);
    }
  else
    {
      t = p_48;
      {
        ATerm h_143 = NULL,i_143 = NULL,j_143 = NULL;
        ATerm n_143 (ATerm t)
        {
          ATerm k_143 = NULL,l_143 = NULL;
          t = not_null(i_143);
          if(((k_143 != NULL) && (k_143 != t)))
            _fail(t);
          else
            k_143 = t;
          t = not_null(j_143);
          if(((l_143 != NULL) && (l_143 != t)))
            _fail(t);
          else
            l_143 = t;
          t = not_null(k_143);
          {
            ATerm y_6 (ATerm t)
            {
              t = not_null(l_143);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(y_6, t);
          }
          return(t);
        }
        if(((h_143 != NULL) && (h_143 != t)))
          _fail(t);
        else
          h_143 = t;
        t = not_null(h_143);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_143 = ATgetFirst((ATermList) t);
            j_143 = (ATerm) ATgetNext((ATermList) t);
            t = n_143(t);
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
  ATerm t_143 = NULL;
  ATerm b_144 (ATerm t)
  {
    ATerm u_143 = NULL,v_143 = NULL;
    t = not_null(t_143);
    if(((u_143 != NULL) && (u_143 != t)))
      _fail(t);
    else
      u_143 = t;
    t = not_null(t_143);
    {
      ATerm w_143 = NULL;
      ATerm c_144 (ATerm t)
      {
        ATerm x_143 = NULL,y_143 = NULL,z_143 = NULL,a_144 = NULL;
        ATerm d_144 (ATerm t)
        {
          t = not_null(a_144);
          if(((v_143 != NULL) && (v_143 != t)))
            _fail(t);
          else
            v_143 = t;
          t = not_null(y_143);
          return(t);
        }
        t = not_null(w_143);
        if(((x_143 != NULL) && (x_143 != t)))
          _fail(t);
        else
          x_143 = t;
        t = not_null(w_143);
        t = SSL_explode_term(not_null(x_143));
        if(((y_143 != NULL) && (y_143 != t)))
          _fail(t);
        else
          y_143 = t;
        t = not_null(y_143);
        if(match_cons(t, sym__2))
          {
            z_143 = ATgetArgument(t, 0);
            a_144 = ATgetArgument(t, 1);
            t = not_null(z_143);
            if(match_string(t, ""))
              {
                t = d_144(t);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(u_143);
      if(((w_143 != NULL) && (w_143 != t)))
        _fail(t);
      else
        w_143 = t;
      t = c_144(t);
      t = not_null(v_143);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((t_143 != NULL) && (t_143 != t)))
    _fail(t);
  else
    t_143 = t;
  t = b_144(t);
  return(t);
}
ATerm at_end_1_0 (ATerm p_115 (ATerm), ATerm t)
{
  ATerm e_144 (ATerm t)
  {
    ATerm r_48 = t;
    int s_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, e_144, t);
        ;
        LocalPopChoice(s_48);
      }
    else
      {
        t = r_48;
        t = Nil_0_0(t);
        t = p_115(t);
      }
    return(t);
  }
  t = e_144(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm h_144 = NULL,i_144 = NULL,j_144 = NULL;
  ATerm m_144 (ATerm t)
  {
    ATerm k_144 = NULL,l_144 = NULL;
    t = not_null(i_144);
    if(((l_144 != NULL) && (l_144 != t)))
      _fail(t);
    else
      l_144 = t;
    t = not_null(j_144);
    if(((k_144 != NULL) && (k_144 != t)))
      _fail(t);
    else
      k_144 = t;
    t = not_null(l_144);
    {
      ATerm z_6 (ATerm t)
      {
        t = not_null(k_144);
        return(t);
      }
      t = at_end_1_0(z_6, t);
    }
    return(t);
  }
  if(((h_144 != NULL) && (h_144 != t)))
    _fail(t);
  else
    h_144 = t;
  t = not_null(h_144);
  if(match_cons(t, sym__2))
    {
      i_144 = ATgetArgument(t, 0);
      j_144 = ATgetArgument(t, 1);
      t = m_144(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_48 = t;
  int u_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(u_48);
    }
  else
    {
      t = t_48;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm o_144 = NULL;
  ATerm q_144 (ATerm t)
  {
    ATerm p_144 = NULL;
    t = not_null(o_144);
    if(((p_144 != NULL) && (p_144 != t)))
      _fail(t);
    else
      p_144 = t;
    t = not_null(o_144);
    t = SSL_explode_string(not_null(p_144));
    return(t);
  }
  if(((o_144 != NULL) && (o_144 != t)))
    _fail(t);
  else
    o_144 = t;
  t = q_144(t);
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
  ATerm v_48 = t;
  int w_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(w_48);
    }
  else
    {
      t = v_48;
      {
        ATerm x_48 = t;
        int y_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_7 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(a_7, t);
            ;
            LocalPopChoice(y_48);
          }
        else
          {
            t = x_48;
            {
              ATerm x_144 = NULL,y_144 = NULL,z_144 = NULL;
              ATerm i_145 (ATerm t)
              {
                ATerm a_145 = NULL;
                t = not_null(y_144);
                if(((a_145 != NULL) && (a_145 != t)))
                  _fail(t);
                else
                  a_145 = t;
                t = not_null(a_145);
                return(t);
              }
              ATerm j_145 (ATerm t)
              {
                ATerm b_145 = NULL;
                t = not_null(y_144);
                if(((b_145 != NULL) && (b_145 != t)))
                  _fail(t);
                else
                  b_145 = t;
                t = not_null(b_145);
                {
                  ATerm z_48 = t;
                  int a_49 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(a_49);
                    }
                  else
                    {
                      t = z_48;
                      {
                        ATerm b_7 (ATerm t)
                        {
                          t = term_b_49;
                          return(t);
                        }
                        t = debug_1_0(b_7, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm k_145 (ATerm t)
              {
                ATerm c_145 = NULL,d_145 = NULL,e_145 = NULL,g_145 = NULL;
                t = not_null(y_144);
                if(((c_145 != NULL) && (c_145 != t)))
                  _fail(t);
                else
                  c_145 = t;
                t = not_null(z_144);
                if(((d_145 != NULL) && (d_145 != t)))
                  _fail(t);
                else
                  d_145 = t;
                t = not_null(x_144);
                {
                  ATerm c_49;
                  c_49 = t;
                  {
                    ATerm f_145 = NULL;
                    ATerm l_145 (ATerm t)
                    {
                      t = not_null(f_145);
                      if(((e_145 != NULL) && (e_145 != t)))
                        _fail(t);
                      else
                        e_145 = t;
                      t = not_null(f_145);
                      return(t);
                    }
                    t = not_null(c_145);
                    t = eval_config_0_0(t);
                    if(((f_145 != NULL) && (f_145 != t)))
                      _fail(t);
                    else
                      f_145 = t;
                    t = l_145(t);
                  }
                  t = c_49;
                  {
                    ATerm h_145 = NULL;
                    ATerm m_145 (ATerm t)
                    {
                      t = not_null(h_145);
                      if(((g_145 != NULL) && (g_145 != t)))
                        _fail(t);
                      else
                        g_145 = t;
                      t = not_null(h_145);
                      return(t);
                    }
                    t = not_null(d_145);
                    t = eval_config_0_0(t);
                    if(((h_145 != NULL) && (h_145 != t)))
                      _fail(t);
                    else
                      h_145 = t;
                    t = m_145(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(e_145), not_null(g_145));
                    t = conc_strings_0_0(t);
                  }
                }
                return(t);
              }
              if(((x_144 != NULL) && (x_144 != t)))
                _fail(t);
              else
                x_144 = t;
              t = not_null(x_144);
              if(match_cons(t, sym_Path_1))
                {
                  y_144 = ATgetArgument(t, 0);
                  t = i_145(t);
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_144 = ATgetArgument(t, 0);
                      t = j_145(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_144 = ATgetArgument(t, 0);
                          z_144 = ATgetArgument(t, 1);
                          t = k_145(t);
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
  ATerm p_145 = NULL;
  ATerm t_145 (ATerm t)
  {
    ATerm q_145 = NULL;
    t = not_null(p_145);
    if(((q_145 != NULL) && (q_145 != t)))
      _fail(t);
    else
      q_145 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_d_49, not_null(q_145));
    t = table_get_0_0(t);
    {
      ATerm c_7 (ATerm t)
      {
        t = eval_config_0_0(t);
        {
          ATerm e_49;
          e_49 = t;
          {
            ATerm r_145 = NULL;
            ATerm s_145 = NULL;
            ATerm u_145 (ATerm t)
            {
              t = not_null(s_145);
              if(((r_145 != NULL) && (r_145 != t)))
                _fail(t);
              else
                r_145 = t;
              t = not_null(s_145);
              return(t);
            }
            if(((s_145 != NULL) && (s_145 != t)))
              _fail(t);
            else
              s_145 = t;
            t = u_145(t);
            t = (ATerm) ATmakeAppl(sym__3, term_d_49, not_null(q_145), not_null(r_145));
            t = table_put_0_0(t);
          }
          t = e_49;
        }
        return(t);
      }
      t = try_1_0(c_7, t);
    }
    return(t);
  }
  if(((p_145 != NULL) && (p_145 != t)))
    _fail(t);
  else
    p_145 = t;
  t = t_145(t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm z_145 = NULL,a_146 = NULL,b_146 = NULL,c_146 = NULL;
  ATerm h_146 (ATerm t)
  {
    ATerm d_146 = NULL,e_146 = NULL,f_146 = NULL;
    t = not_null(a_146);
    if(((d_146 != NULL) && (d_146 != t)))
      _fail(t);
    else
      d_146 = t;
    t = not_null(c_146);
    if(((e_146 != NULL) && (e_146 != t)))
      _fail(t);
    else
      e_146 = t;
    t = not_null(z_145);
    t = SSL_fputc(not_null(d_146), not_null(e_146));
    {
      ATerm g_146 = NULL;
      ATerm i_146 (ATerm t)
      {
        t = not_null(g_146);
        if(((f_146 != NULL) && (f_146 != t)))
          _fail(t);
        else
          f_146 = t;
        t = not_null(g_146);
        return(t);
      }
      if(((g_146 != NULL) && (g_146 != t)))
        _fail(t);
      else
        g_146 = t;
      t = i_146(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_146));
    }
    return(t);
  }
  if(((z_145 != NULL) && (z_145 != t)))
    _fail(t);
  else
    z_145 = t;
  t = not_null(z_145);
  if(match_cons(t, sym__2))
    {
      a_146 = ATgetArgument(t, 0);
      b_146 = ATgetArgument(t, 1);
      t = not_null(b_146);
      if(match_cons(t, sym_Stream_1))
        {
          c_146 = ATgetArgument(t, 0);
          t = h_146(t);
        }
      else
        {
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
  ATerm n_146 = NULL,o_146 = NULL,p_146 = NULL,q_146 = NULL;
  ATerm v_146 (ATerm t)
  {
    ATerm r_146 = NULL,s_146 = NULL,t_146 = NULL;
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
    t = not_null(n_146);
    t = SSL_write_term_to_stream_text(not_null(r_146), not_null(s_146));
    {
      ATerm u_146 = NULL;
      ATerm w_146 (ATerm t)
      {
        t = not_null(u_146);
        if(((t_146 != NULL) && (t_146 != t)))
          _fail(t);
        else
          t_146 = t;
        t = not_null(u_146);
        return(t);
      }
      if(((u_146 != NULL) && (u_146 != t)))
        _fail(t);
      else
        u_146 = t;
      t = w_146(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_146));
    }
    return(t);
  }
  if(((n_146 != NULL) && (n_146 != t)))
    _fail(t);
  else
    n_146 = t;
  t = not_null(n_146);
  if(match_cons(t, sym__2))
    {
      o_146 = ATgetArgument(t, 0);
      q_146 = ATgetArgument(t, 1);
      t = not_null(o_146);
      if(match_cons(t, sym_Stream_1))
        {
          p_146 = ATgetArgument(t, 0);
          t = v_146(t);
        }
      else
        {
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
  ATerm d_7 (ATerm t)
  {
    ATerm y_146 = NULL;
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm z_146 = NULL;
      ATerm a_147 (ATerm t)
      {
        t = not_null(z_146);
        if(((y_146 != NULL) && (y_146 != t)))
          _fail(t);
        else
          y_146 = t;
        t = not_null(z_146);
        return(t);
      }
      if(((z_146 != NULL) && (z_146 != t)))
        _fail(t);
      else
        z_146 = t;
      t = a_147(t);
      t = (ATerm) ATmakeAppl(sym__2, term_f_49, not_null(y_146));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(d_7, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm f_147 = NULL,g_147 = NULL,h_147 = NULL,i_147 = NULL;
  ATerm n_147 (ATerm t)
  {
    ATerm j_147 = NULL,k_147 = NULL,l_147 = NULL;
    t = not_null(h_147);
    if(((j_147 != NULL) && (j_147 != t)))
      _fail(t);
    else
      j_147 = t;
    t = not_null(i_147);
    if(((k_147 != NULL) && (k_147 != t)))
      _fail(t);
    else
      k_147 = t;
    t = not_null(f_147);
    t = SSL_write_term_to_stream_baf(not_null(j_147), not_null(k_147));
    {
      ATerm m_147 = NULL;
      ATerm o_147 (ATerm t)
      {
        t = not_null(m_147);
        if(((l_147 != NULL) && (l_147 != t)))
          _fail(t);
        else
          l_147 = t;
        t = not_null(m_147);
        return(t);
      }
      if(((m_147 != NULL) && (m_147 != t)))
        _fail(t);
      else
        m_147 = t;
      t = o_147(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_147));
    }
    return(t);
  }
  if(((f_147 != NULL) && (f_147 != t)))
    _fail(t);
  else
    f_147 = t;
  t = not_null(f_147);
  if(match_cons(t, sym__2))
    {
      g_147 = ATgetArgument(t, 0);
      i_147 = ATgetArgument(t, 1);
      t = not_null(g_147);
      if(match_cons(t, sym_Stream_1))
        {
          h_147 = ATgetArgument(t, 0);
          t = n_147(t);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm n_130 (ATerm), ATerm t)
{
  ATerm t_147 = NULL,u_147 = NULL,v_147 = NULL;
  ATerm c_148 (ATerm t)
  {
    ATerm w_147 = NULL,x_147 = NULL,y_147 = NULL,a_148 = NULL;
    t = not_null(u_147);
    if(((w_147 != NULL) && (w_147 != t)))
      _fail(t);
    else
      w_147 = t;
    t = not_null(v_147);
    if(((x_147 != NULL) && (x_147 != t)))
      _fail(t);
    else
      x_147 = t;
    t = not_null(w_147);
    {
      ATerm z_147 = NULL;
      ATerm d_148 (ATerm t)
      {
        t = not_null(z_147);
        if(((y_147 != NULL) && (y_147 != t)))
          _fail(t);
        else
          y_147 = t;
        t = not_null(z_147);
        return(t);
      }
      if(((z_147 != NULL) && (z_147 != t)))
        _fail(t);
      else
        z_147 = t;
      t = d_148(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_147), term_g_49);
      t = open_stream_0_0(t);
      {
        ATerm b_148 = NULL;
        ATerm e_148 (ATerm t)
        {
          t = not_null(b_148);
          if(((a_148 != NULL) && (a_148 != t)))
            _fail(t);
          else
            a_148 = t;
          t = not_null(b_148);
          return(t);
        }
        if(((b_148 != NULL) && (b_148 != t)))
          _fail(t);
        else
          b_148 = t;
        t = e_148(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_148), not_null(x_147));
        t = n_130(t);
        t = fclose_0_0(t);
        t = not_null(x_147);
      }
    }
    return(t);
  }
  if(((t_147 != NULL) && (t_147 != t)))
    _fail(t);
  else
    t_147 = t;
  t = not_null(t_147);
  if(match_cons(t, sym__2))
    {
      u_147 = ATgetArgument(t, 0);
      v_147 = ATgetArgument(t, 1);
      t = c_148(t);
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
  ATerm j_148 = NULL;
  ATerm h_49;
  h_49 = t;
  {
    ATerm e_7 (ATerm t)
    {
      ATerm i_49 = t;
      int j_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_7 (ATerm t)
          {
            ATerm k_148 = NULL,l_148 = NULL;
            ATerm o_148 (ATerm t)
            {
              t = not_null(l_148);
              if(((j_148 != NULL) && (j_148 != t)))
                _fail(t);
              else
                j_148 = t;
              t = not_null(k_148);
              return(t);
            }
            if(((k_148 != NULL) && (k_148 != t)))
              _fail(t);
            else
              k_148 = t;
            t = not_null(k_148);
            if(match_cons(t, sym_Output_1))
              {
                l_148 = ATgetArgument(t, 0);
                t = o_148(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1_0(f_7, t);
          ;
          LocalPopChoice(j_49);
        }
      else
        {
          t = i_49;
          {
            ATerm m_148 = NULL;
            ATerm p_148 (ATerm t)
            {
              t = not_null(m_148);
              if(((j_148 != NULL) && (j_148 != t)))
                _fail(t);
              else
                j_148 = t;
              t = not_null(m_148);
              return(t);
            }
            t = term_k_49;
            if(((m_148 != NULL) && (m_148 != t)))
              _fail(t);
            else
              m_148 = t;
            t = p_148(t);
          }
        }
      return(t);
    }
    t = _2_0(e_7, _id, t);
  }
  t = h_49;
  {
    ATerm g_7 (ATerm t)
    {
      ATerm h_7 (ATerm t)
      {
        t = not_null(j_148);
        return(t);
      }
      t = split_2_0(h_7, _id, t);
      return(t);
    }
    t = _2_0(_id, g_7, t);
    {
      ATerm m_49 = t;
      int n_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_7 (ATerm t)
          {
            ATerm j_7 (ATerm t)
            {
              ATerm n_148 = NULL;
              if(((n_148 != NULL) && (n_148 != t)))
                _fail(t);
              else
                n_148 = t;
              t = not_null(n_148);
              if(match_cons(t, sym_Binary_0))
                {
                  t = not_null(n_148);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1_0(j_7, t);
            return(t);
          }
          t = _2_0(i_7, WriteToBinaryFile_0_0, t);
          ;
          LocalPopChoice(n_49);
        }
      else
        {
          t = m_49;
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
ATerm apply_strategy_1_0 (ATerm z_131 (ATerm), ATerm t)
{
  ATerm t_148 = NULL,v_148 = NULL,w_148 = NULL,x_148 = NULL;
  ATerm b_149 (ATerm t)
  {
    ATerm y_148 = NULL,z_148 = NULL;
    t = not_null(w_148);
    if(((y_148 != NULL) && (y_148 != t)))
      _fail(t);
    else
      y_148 = t;
    t = not_null(x_148);
    if(((z_148 != NULL) && (z_148 != t)))
      _fail(t);
    else
      z_148 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_148)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(t_148))), not_null(z_148));
    return(t);
  }
  ATerm o_49;
  o_49 = t;
  t = dtime_0_0(t);
  t = o_49;
  t = z_131(t);
  {
    ATerm p_49;
    p_49 = t;
    {
      ATerm u_148 = NULL;
      ATerm a_149 (ATerm t)
      {
        t = not_null(u_148);
        if(((t_148 != NULL) && (t_148 != t)))
          _fail(t);
        else
          t_148 = t;
        t = not_null(u_148);
        return(t);
      }
      t = dtime_0_0(t);
      if(((u_148 != NULL) && (u_148 != t)))
        _fail(t);
      else
        u_148 = t;
      t = a_149(t);
    }
    t = p_49;
    if(((v_148 != NULL) && (v_148 != t)))
      _fail(t);
    else
      v_148 = t;
    t = not_null(v_148);
    if(match_cons(t, sym__2))
      {
        w_148 = ATgetArgument(t, 0);
        x_148 = ATgetArgument(t, 1);
        t = b_149(t);
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
  ATerm f_149 = NULL,g_149 = NULL;
  ATerm l_149 (ATerm t)
  {
    ATerm h_149 = NULL;
    t = not_null(f_149);
    if(((h_149 != NULL) && (h_149 != t)))
      _fail(t);
    else
      h_149 = t;
    t = not_null(g_149);
    t = SSL_fclose(not_null(h_149));
    return(t);
  }
  ATerm m_149 (ATerm t)
  {
    ATerm k_149 = NULL;
    t = not_null(g_149);
    if(((k_149 != NULL) && (k_149 != t)))
      _fail(t);
    else
      k_149 = t;
    t = not_null(g_149);
    t = SSL_fclose(not_null(k_149));
    return(t);
  }
  if(((g_149 != NULL) && (g_149 != t)))
    _fail(t);
  else
    g_149 = t;
  t = not_null(g_149);
  if(match_cons(t, sym_Stream_1))
    {
      f_149 = ATgetArgument(t, 0);
      {
        ATerm l_50 = t;
        int m_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_149(t);
            ;
            LocalPopChoice(m_50);
          }
        else
          {
            t = l_50;
            t = m_149(t);
          }
      }
    }
  else
    {
      t = m_149(t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm p_149 = NULL,q_149 = NULL;
  ATerm s_149 (ATerm t)
  {
    ATerm r_149 = NULL;
    t = not_null(q_149);
    if(((r_149 != NULL) && (r_149 != t)))
      _fail(t);
    else
      r_149 = t;
    t = not_null(p_149);
    t = SSL_read_term_from_stream(not_null(r_149));
    return(t);
  }
  if(((p_149 != NULL) && (p_149 != t)))
    _fail(t);
  else
    p_149 = t;
  t = not_null(p_149);
  if(match_cons(t, sym_Stream_1))
    {
      q_149 = ATgetArgument(t, 0);
      t = s_149(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm z_129 (ATerm), ATerm t)
{
  ATerm n_50;
  n_50 = t;
  {
    ATerm v_149 = NULL,x_149 = NULL;
    ATerm o_50;
    o_50 = t;
    {
      ATerm w_149 = NULL;
      ATerm z_149 (ATerm t)
      {
        t = not_null(w_149);
        if(((v_149 != NULL) && (v_149 != t)))
          _fail(t);
        else
          v_149 = t;
        t = not_null(w_149);
        return(t);
      }
      t = z_129(t);
      if(((w_149 != NULL) && (w_149 != t)))
        _fail(t);
      else
        w_149 = t;
      t = z_149(t);
    }
    t = o_50;
    {
      ATerm y_149 = NULL;
      ATerm a_150 (ATerm t)
      {
        t = not_null(y_149);
        if(((x_149 != NULL) && (x_149 != t)))
          _fail(t);
        else
          x_149 = t;
        t = not_null(y_149);
        return(t);
      }
      if(((y_149 != NULL) && (y_149 != t)))
        _fail(t);
      else
        y_149 = t;
      t = a_150(t);
      t = (ATerm) ATmakeAppl(sym__2, term_f_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_149)), not_null(v_149)));
      t = printnl_0_0(t);
    }
  }
  t = n_50;
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm e_150 = NULL,f_150 = NULL,g_150 = NULL;
  ATerm l_150 (ATerm t)
  {
    ATerm h_150 = NULL,i_150 = NULL,j_150 = NULL;
    t = not_null(f_150);
    if(((h_150 != NULL) && (h_150 != t)))
      _fail(t);
    else
      h_150 = t;
    t = not_null(g_150);
    if(((i_150 != NULL) && (i_150 != t)))
      _fail(t);
    else
      i_150 = t;
    t = not_null(e_150);
    t = SSL_fopen(not_null(h_150), not_null(i_150));
    {
      ATerm k_150 = NULL;
      ATerm m_150 (ATerm t)
      {
        t = not_null(k_150);
        if(((j_150 != NULL) && (j_150 != t)))
          _fail(t);
        else
          j_150 = t;
        t = not_null(k_150);
        return(t);
      }
      if(((k_150 != NULL) && (k_150 != t)))
        _fail(t);
      else
        k_150 = t;
      t = m_150(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_150));
    }
    return(t);
  }
  if(((e_150 != NULL) && (e_150 != t)))
    _fail(t);
  else
    e_150 = t;
  t = not_null(e_150);
  if(match_cons(t, sym__2))
    {
      f_150 = ATgetArgument(t, 0);
      g_150 = ATgetArgument(t, 1);
      t = l_150(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm o_150 = NULL;
  ATerm q_150 (ATerm t)
  {
    ATerm p_150 = NULL;
    t = not_null(o_150);
    if(((p_150 != NULL) && (p_150 != t)))
      _fail(t);
    else
      p_150 = t;
    t = not_null(o_150);
    t = SSL_is_string(not_null(p_150));
    return(t);
  }
  if(((o_150 != NULL) && (o_150 != t)))
    _fail(t);
  else
    o_150 = t;
  t = q_150(t);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_150 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm t_150 = NULL;
    ATerm u_150 (ATerm t)
    {
      t = not_null(t_150);
      if(((s_150 != NULL) && (s_150 != t)))
        _fail(t);
      else
        s_150 = t;
      t = not_null(t_150);
      return(t);
    }
    if(((t_150 != NULL) && (t_150 != t)))
      _fail(t);
    else
      t_150 = t;
    t = u_150(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_150));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_150 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm x_150 = NULL;
    ATerm y_150 (ATerm t)
    {
      t = not_null(x_150);
      if(((w_150 != NULL) && (w_150 != t)))
        _fail(t);
      else
        w_150 = t;
      t = not_null(x_150);
      return(t);
    }
    if(((x_150 != NULL) && (x_150 != t)))
      _fail(t);
    else
      x_150 = t;
    t = y_150(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_150));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_151 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm b_151 = NULL;
    ATerm c_151 (ATerm t)
    {
      t = not_null(b_151);
      if(((a_151 != NULL) && (a_151 != t)))
        _fail(t);
      else
        a_151 = t;
      t = not_null(b_151);
      return(t);
    }
    if(((b_151 != NULL) && (b_151 != t)))
      _fail(t);
    else
      b_151 = t;
    t = c_151(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_151));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm h_151 = NULL;
  ATerm i_151 (ATerm t)
  {
    t = not_null(h_151);
    t = stderr_stream_0_0(t);
    return(t);
  }
  ATerm j_151 (ATerm t)
  {
    t = not_null(h_151);
    t = stdout_stream_0_0(t);
    return(t);
  }
  ATerm k_151 (ATerm t)
  {
    t = not_null(h_151);
    t = stdin_stream_0_0(t);
    return(t);
  }
  if(((h_151 != NULL) && (h_151 != t)))
    _fail(t);
  else
    h_151 = t;
  t = not_null(h_151);
  if(match_cons(t, sym_stderr_0))
    {
      t = i_151(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_151(t);
        }
      else
        {
          if(match_cons(t, sym_stdin_0))
            {
              t = k_151(t);
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
  ATerm r_151 = NULL;
  ATerm c_152 (ATerm t)
  {
    ATerm s_151 = NULL,t_151 = NULL,u_151 = NULL;
    t = not_null(r_151);
    if(((s_151 != NULL) && (s_151 != t)))
      _fail(t);
    else
      s_151 = t;
    t = not_null(r_151);
    {
      ATerm v_151 = NULL;
      ATerm d_152 (ATerm t)
      {
        ATerm w_151 = NULL,x_151 = NULL,y_151 = NULL,z_151 = NULL,a_152 = NULL,b_152 = NULL;
        ATerm e_152 (ATerm t)
        {
          t = not_null(a_152);
          if(((u_151 != NULL) && (u_151 != t)))
            _fail(t);
          else
            u_151 = t;
          t = not_null(b_152);
          if(((t_151 != NULL) && (t_151 != t)))
            _fail(t);
          else
            t_151 = t;
          t = not_null(x_151);
          return(t);
        }
        t = not_null(v_151);
        if(((w_151 != NULL) && (w_151 != t)))
          _fail(t);
        else
          w_151 = t;
        t = not_null(v_151);
        t = SSL_explode_term(not_null(w_151));
        if(((x_151 != NULL) && (x_151 != t)))
          _fail(t);
        else
          x_151 = t;
        t = not_null(x_151);
        if(match_cons(t, sym__2))
          {
            y_151 = ATgetArgument(t, 0);
            z_151 = ATgetArgument(t, 1);
            t = not_null(y_151);
            if(match_string(t, ""))
              {
                t = not_null(z_151);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    a_152 = ATgetFirst((ATermList) t);
                    b_152 = (ATerm) ATgetNext((ATermList) t);
                    t = e_152(t);
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(s_151);
      if(((v_151 != NULL) && (v_151 != t)))
        _fail(t);
      else
        v_151 = t;
      t = d_152(t);
      t = not_null(u_151);
    }
    return(t);
  }
  if(((r_151 != NULL) && (r_151 != t)))
    _fail(t);
  else
    r_151 = t;
  t = c_152(t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm j_152 = NULL,k_152 = NULL,l_152 = NULL;
  ATerm p_152 (ATerm t)
  {
    t = not_null(j_152);
    {
      ATerm p_50 = t;
      int q_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Fst_0_0(t);
          t = stdio_stream_0_0(t);
          ;
          LocalPopChoice(q_50);
        }
      else
        {
          t = p_50;
          {
            ATerm r_50 = t;
            int s_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_7 (ATerm t)
                {
                  ATerm m_152 = NULL,n_152 = NULL;
                  ATerm q_152 (ATerm t)
                  {
                    ATerm o_152 = NULL;
                    t = not_null(n_152);
                    if(((o_152 != NULL) && (o_152 != t)))
                      _fail(t);
                    else
                      o_152 = t;
                    t = not_null(o_152);
                    return(t);
                  }
                  if(((m_152 != NULL) && (m_152 != t)))
                    _fail(t);
                  else
                    m_152 = t;
                  t = not_null(m_152);
                  if(match_cons(t, sym_Path_1))
                    {
                      n_152 = ATgetArgument(t, 0);
                      t = q_152(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = _2_0(k_7, _id, t);
                t = fopen_0_0(t);
                ;
                LocalPopChoice(s_50);
              }
            else
              {
                t = r_50;
                t = _2_0(is_string_0_0, _id, t);
                t = fopen_0_0(t);
              }
          }
        }
    }
    return(t);
  }
  if(((j_152 != NULL) && (j_152 != t)))
    _fail(t);
  else
    j_152 = t;
  t = not_null(j_152);
  if(match_cons(t, sym__2))
    {
      k_152 = ATgetArgument(t, 0);
      l_152 = ATgetArgument(t, 1);
      t = p_152(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_152 = NULL;
  ATerm t_50 = t;
  int u_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_152 = NULL;
      ATerm u_152 = NULL;
      ATerm x_152 (ATerm t)
      {
        t = not_null(u_152);
        if(((t_152 != NULL) && (t_152 != t)))
          _fail(t);
        else
          t_152 = t;
        t = not_null(u_152);
        return(t);
      }
      if(((u_152 != NULL) && (u_152 != t)))
        _fail(t);
      else
        u_152 = t;
      t = x_152(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_152), term_v_50);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(u_50);
    }
  else
    {
      t = t_50;
      {
        ATerm l_7 (ATerm t)
        {
          t = term_w_50;
          return(t);
        }
        t = debug_1_0(l_7, t);
        _fail(t);
      }
    }
  {
    ATerm x_50;
    x_50 = t;
    {
      ATerm w_152 = NULL;
      ATerm y_152 (ATerm t)
      {
        t = not_null(w_152);
        if(((v_152 != NULL) && (v_152 != t)))
          _fail(t);
        else
          v_152 = t;
        t = not_null(w_152);
        return(t);
      }
      t = read_from_stream_0_0(t);
      if(((w_152 != NULL) && (w_152 != t)))
        _fail(t);
      else
        w_152 = t;
      t = y_152(t);
    }
    t = x_50;
    t = fclose_0_0(t);
    t = not_null(v_152);
  }
  return(t);
}
ATerm split_2_0 (ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm t)
{
  ATerm b_153 = NULL,d_153 = NULL;
  ATerm y_50;
  y_50 = t;
  {
    ATerm c_153 = NULL;
    ATerm f_153 (ATerm t)
    {
      t = not_null(c_153);
      if(((b_153 != NULL) && (b_153 != t)))
        _fail(t);
      else
        b_153 = t;
      t = not_null(c_153);
      return(t);
    }
    t = b_114(t);
    if(((c_153 != NULL) && (c_153 != t)))
      _fail(t);
    else
      c_153 = t;
    t = f_153(t);
  }
  t = y_50;
  {
    ATerm e_153 = NULL;
    ATerm g_153 (ATerm t)
    {
      t = not_null(e_153);
      if(((d_153 != NULL) && (d_153 != t)))
        _fail(t);
      else
        d_153 = t;
      t = not_null(e_153);
      return(t);
    }
    t = c_114(t);
    if(((e_153 != NULL) && (e_153 != t)))
      _fail(t);
    else
      e_153 = t;
    t = g_153(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_153), not_null(d_153));
  }
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm k_153 = NULL;
  ATerm z_50;
  z_50 = t;
  {
    ATerm a_51 = t;
    int b_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_7 (ATerm t)
        {
          ATerm l_153 = NULL,m_153 = NULL;
          ATerm o_153 (ATerm t)
          {
            t = not_null(m_153);
            if(((k_153 != NULL) && (k_153 != t)))
              _fail(t);
            else
              k_153 = t;
            t = not_null(l_153);
            return(t);
          }
          if(((l_153 != NULL) && (l_153 != t)))
            _fail(t);
          else
            l_153 = t;
          t = not_null(l_153);
          if(match_cons(t, sym_Input_1))
            {
              m_153 = ATgetArgument(t, 0);
              t = o_153(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1_0(m_7, t);
        ;
        LocalPopChoice(b_51);
      }
    else
      {
        t = a_51;
        {
          ATerm n_153 = NULL;
          ATerm p_153 (ATerm t)
          {
            t = not_null(n_153);
            if(((k_153 != NULL) && (k_153 != t)))
              _fail(t);
            else
              k_153 = t;
            t = not_null(n_153);
            return(t);
          }
          t = term_c_51;
          if(((n_153 != NULL) && (n_153 != t)))
            _fail(t);
          else
            n_153 = t;
          t = p_153(t);
        }
      }
  }
  t = z_50;
  {
    ATerm n_7 (ATerm t)
    {
      t = not_null(k_153);
      t = ReadFromFile_0_0(t);
      return(t);
    }
    t = split_2_0(_id, n_7, t);
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    ATerm s_153 = NULL;
    if(((s_153 != NULL) && (s_153 != t)))
      _fail(t);
    else
      s_153 = t;
    t = not_null(s_153);
    if(match_string(t, "-k"))
      {
        t = not_null(s_153);
      }
    else
      {
        if(match_string(t, "--keep"))
          {
            t = not_null(s_153);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_7 (ATerm t)
  {
    ATerm d_51;
    d_51 = t;
    {
      ATerm t_153 = NULL;
      ATerm u_153 = NULL;
      ATerm v_153 (ATerm t)
      {
        t = not_null(u_153);
        if(((t_153 != NULL) && (t_153 != t)))
          _fail(t);
        else
          t_153 = t;
        t = not_null(u_153);
        return(t);
      }
      t = string_to_int_0_0(t);
      if(((u_153 != NULL) && (u_153 != t)))
        _fail(t);
      else
        u_153 = t;
      t = v_153(t);
      t = (ATerm) ATmakeAppl(sym__2, term_e_51, not_null(t_153));
      t = set_config_0_0(t);
    }
    t = d_51;
    return(t);
  }
  ATerm q_7 (ATerm t)
  {
    t = term_f_51;
    return(t);
  }
  t = ArgOption_3_0(o_7, p_7, q_7, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm x_153 = NULL;
  ATerm z_153 (ATerm t)
  {
    ATerm y_153 = NULL;
    t = not_null(x_153);
    if(((y_153 != NULL) && (y_153 != t)))
      _fail(t);
    else
      y_153 = t;
    t = not_null(x_153);
    t = SSL_string_to_int(not_null(y_153));
    return(t);
  }
  if(((x_153 != NULL) && (x_153 != t)))
    _fail(t);
  else
    x_153 = t;
  t = z_153(t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_51 = t;
  int h_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_7 (ATerm t)
      {
        ATerm f_154 = NULL;
        if(((f_154 != NULL) && (f_154 != t)))
          _fail(t);
        else
          f_154 = t;
        t = not_null(f_154);
        if(match_string(t, "-S"))
          {
            t = not_null(f_154);
          }
        else
          {
            if(match_string(t, "--silent"))
              {
                t = not_null(f_154);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm s_7 (ATerm t)
      {
        t = term_j_51;
        t = set_config_0_0(t);
        t = term_k_51;
        return(t);
      }
      ATerm t_7 (ATerm t)
      {
        t = term_l_51;
        return(t);
      }
      t = Option_3_0(r_7, s_7, t_7, t);
      ;
      LocalPopChoice(h_51);
    }
  else
    {
      t = g_51;
      {
        ATerm m_51 = t;
        int n_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_7 (ATerm t)
            {
              ATerm g_154 = NULL;
              if(((g_154 != NULL) && (g_154 != t)))
                _fail(t);
              else
                g_154 = t;
              t = not_null(g_154);
              if(match_string(t, "--verbose"))
                {
                  t = not_null(g_154);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm x_7 (ATerm t)
            {
              ATerm j_154 = NULL;
              ATerm o_51;
              o_51 = t;
              {
                ATerm h_154 = NULL;
                ATerm i_154 = NULL;
                ATerm m_154 (ATerm t)
                {
                  t = not_null(i_154);
                  if(((h_154 != NULL) && (h_154 != t)))
                    _fail(t);
                  else
                    h_154 = t;
                  t = not_null(i_154);
                  return(t);
                }
                t = string_to_int_0_0(t);
                if(((i_154 != NULL) && (i_154 != t)))
                  _fail(t);
                else
                  i_154 = t;
                t = m_154(t);
                t = (ATerm) ATmakeAppl(sym__2, term_u_12, not_null(h_154));
                t = set_config_0_0(t);
              }
              t = o_51;
              {
                ATerm k_154 = NULL;
                ATerm n_154 (ATerm t)
                {
                  t = not_null(k_154);
                  if(((j_154 != NULL) && (j_154 != t)))
                    _fail(t);
                  else
                    j_154 = t;
                  t = not_null(k_154);
                  return(t);
                }
                if(((k_154 != NULL) && (k_154 != t)))
                  _fail(t);
                else
                  k_154 = t;
                t = n_154(t);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(j_154));
              }
              return(t);
            }
            ATerm y_7 (ATerm t)
            {
              t = term_p_51;
              return(t);
            }
            t = ArgOption_3_0(v_7, x_7, y_7, t);
            ;
            LocalPopChoice(n_51);
          }
        else
          {
            t = m_51;
            {
              ATerm z_7 (ATerm t)
              {
                ATerm l_154 = NULL;
                if(((l_154 != NULL) && (l_154 != t)))
                  _fail(t);
                else
                  l_154 = t;
                t = not_null(l_154);
                if(match_string(t, "-s"))
                  {
                    t = not_null(l_154);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm a_8 (ATerm t)
              {
                t = term_r_51;
                t = set_config_0_0(t);
                t = term_s_51;
                return(t);
              }
              ATerm b_8 (ATerm t)
              {
                t = term_t_51;
                return(t);
              }
              t = Option_3_0(z_7, a_8, b_8, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm u_51 = t;
  int v_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(v_51);
    }
  else
    {
      t = u_51;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm c_8 (ATerm t)
  {
    ATerm r_154 = NULL;
    if(((r_154 != NULL) && (r_154 != t)))
      _fail(t);
    else
      r_154 = t;
    t = not_null(r_154);
    if(match_string(t, "-o"))
      {
        t = not_null(r_154);
      }
    else
      {
        if(match_string(t, "--output"))
          {
            t = not_null(r_154);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_8 (ATerm t)
  {
    ATerm u_154 = NULL;
    ATerm w_51;
    w_51 = t;
    {
      ATerm s_154 = NULL;
      ATerm t_154 = NULL;
      ATerm w_154 (ATerm t)
      {
        t = not_null(t_154);
        if(((s_154 != NULL) && (s_154 != t)))
          _fail(t);
        else
          s_154 = t;
        t = not_null(t_154);
        return(t);
      }
      if(((t_154 != NULL) && (t_154 != t)))
        _fail(t);
      else
        t_154 = t;
      t = w_154(t);
      t = (ATerm) ATmakeAppl(sym__2, term_x_51, not_null(s_154));
      t = set_config_0_0(t);
    }
    t = w_51;
    {
      ATerm v_154 = NULL;
      ATerm x_154 (ATerm t)
      {
        t = not_null(v_154);
        if(((u_154 != NULL) && (u_154 != t)))
          _fail(t);
        else
          u_154 = t;
        t = not_null(v_154);
        return(t);
      }
      if(((v_154 != NULL) && (v_154 != t)))
        _fail(t);
      else
        v_154 = t;
      t = x_154(t);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_154));
    }
    return(t);
  }
  ATerm e_8 (ATerm t)
  {
    t = term_y_51;
    return(t);
  }
  t = ArgOption_3_0(c_8, d_8, e_8, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm z_51 = t;
  int a_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(a_52);
    }
  else
    {
      t = z_51;
      {
        ATerm f_8 (ATerm t)
        {
          ATerm z_154 = NULL;
          if(((z_154 != NULL) && (z_154 != t)))
            _fail(t);
          else
            z_154 = t;
          t = not_null(z_154);
          if(match_string(t, "-b"))
            {
              t = not_null(z_154);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm g_8 (ATerm t)
        {
          t = term_c_52;
          t = set_config_0_0(t);
          t = term_d_52;
          return(t);
        }
        ATerm h_8 (ATerm t)
        {
          t = term_e_52;
          return(t);
        }
        t = Option_3_0(f_8, g_8, h_8, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm f_155 = NULL,g_155 = NULL,h_155 = NULL,i_155 = NULL,j_155 = NULL;
  ATerm p_155 (ATerm t)
  {
    t = not_null(f_155);
    t = register_usage_1_0(n_0, t);
    return(t);
  }
  ATerm q_155 (ATerm t)
  {
    ATerm k_155 = NULL,l_155 = NULL,m_155 = NULL,n_155 = NULL;
    t = not_null(g_155);
    if(((k_155 != NULL) && (k_155 != t)))
      _fail(t);
    else
      k_155 = t;
    t = not_null(i_155);
    if(((l_155 != NULL) && (l_155 != t)))
      _fail(t);
    else
      l_155 = t;
    t = not_null(j_155);
    if(((m_155 != NULL) && (m_155 != t)))
      _fail(t);
    else
      m_155 = t;
    t = not_null(f_155);
    {
      ATerm f_52;
      f_52 = t;
      t = not_null(k_155);
      t = i_0(t);
      t = f_52;
      {
        ATerm o_155 = NULL;
        ATerm r_155 (ATerm t)
        {
          t = not_null(o_155);
          if(((n_155 != NULL) && (n_155 != t)))
            _fail(t);
          else
            n_155 = t;
          t = not_null(o_155);
          return(t);
        }
        t = not_null(l_155);
        t = k_0(t);
        if(((o_155 != NULL) && (o_155 != t)))
          _fail(t);
        else
          o_155 = t;
        t = r_155(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(m_155)), not_null(n_155));
      }
    }
    return(t);
  }
  if(((f_155 != NULL) && (f_155 != t)))
    _fail(t);
  else
    f_155 = t;
  t = not_null(f_155);
  if(match_string(t, "register-usage-info"))
    {
      t = p_155(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_155 = ATgetFirst((ATermList) t);
          h_155 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(h_155);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_155 = ATgetFirst((ATermList) t);
              j_155 = (ATerm) ATgetNext((ATermList) t);
              t = q_155(t);
            }
          else
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
  ATerm i_8 (ATerm t)
  {
    ATerm v_155 = NULL;
    if(((v_155 != NULL) && (v_155 != t)))
      _fail(t);
    else
      v_155 = t;
    t = not_null(v_155);
    if(match_string(t, "-i"))
      {
        t = not_null(v_155);
      }
    else
      {
        if(match_string(t, "--input"))
          {
            t = not_null(v_155);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_8 (ATerm t)
  {
    ATerm y_155 = NULL;
    ATerm g_52;
    g_52 = t;
    {
      ATerm w_155 = NULL;
      ATerm x_155 = NULL;
      ATerm a_156 (ATerm t)
      {
        t = not_null(x_155);
        if(((w_155 != NULL) && (w_155 != t)))
          _fail(t);
        else
          w_155 = t;
        t = not_null(x_155);
        return(t);
      }
      if(((x_155 != NULL) && (x_155 != t)))
        _fail(t);
      else
        x_155 = t;
      t = a_156(t);
      t = (ATerm) ATmakeAppl(sym__2, term_h_52, not_null(w_155));
      t = set_config_0_0(t);
    }
    t = g_52;
    {
      ATerm z_155 = NULL;
      ATerm b_156 (ATerm t)
      {
        t = not_null(z_155);
        if(((y_155 != NULL) && (y_155 != t)))
          _fail(t);
        else
          y_155 = t;
        t = not_null(z_155);
        return(t);
      }
      if(((z_155 != NULL) && (z_155 != t)))
        _fail(t);
      else
        z_155 = t;
      t = b_156(t);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_155));
    }
    return(t);
  }
  ATerm m_8 (ATerm t)
  {
    t = term_i_52;
    return(t);
  }
  t = ArgOption_3_0(i_8, j_8, m_8, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm j_52 = t;
  int k_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(k_52);
    }
  else
    {
      t = j_52;
      {
        ATerm l_52 = t;
        int m_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(m_52);
          }
        else
          {
            t = l_52;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_156 = NULL;
  t = report_run_time_0_0(t);
  {
    ATerm e_156 = NULL;
    ATerm f_156 (ATerm t)
    {
      t = not_null(e_156);
      if(((d_156 != NULL) && (d_156 != t)))
        _fail(t);
      else
        d_156 = t;
      t = not_null(e_156);
      return(t);
    }
    t = term_y_46;
    t = whoami_0_0(t);
    if(((e_156 != NULL) && (e_156 != t)))
      _fail(t);
    else
      e_156 = t;
    t = f_156(t);
    t = (ATerm) ATmakeAppl(sym__2, term_f_12, (ATerm) ATinsert(ATinsert(ATempty, term_n_52), not_null(d_156)));
    t = printnl_0_0(t);
    t = term_k_48;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_52;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm h_156 = NULL;
  ATerm j_156 (ATerm t)
  {
    ATerm i_156 = NULL;
    t = not_null(h_156);
    if(((i_156 != NULL) && (i_156 != t)))
      _fail(t);
    else
      i_156 = t;
    t = not_null(h_156);
    t = SSL_TicksToSeconds(not_null(i_156));
    return(t);
  }
  if(((h_156 != NULL) && (h_156 != t)))
    _fail(t);
  else
    h_156 = t;
  t = j_156(t);
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm m_156 = NULL,n_156 = NULL,o_156 = NULL;
  ATerm r_156 (ATerm t)
  {
    ATerm p_156 = NULL,q_156 = NULL;
    t = not_null(n_156);
    if(((p_156 != NULL) && (p_156 != t)))
      _fail(t);
    else
      p_156 = t;
    t = not_null(o_156);
    if(((q_156 != NULL) && (q_156 != t)))
      _fail(t);
    else
      q_156 = t;
    t = not_null(m_156);
    {
      ATerm p_52 = t;
      int q_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(p_156), not_null(q_156));
          ;
          LocalPopChoice(q_52);
        }
      else
        {
          t = p_52;
          t = SSL_addr(not_null(p_156), not_null(q_156));
        }
    }
    return(t);
  }
  if(((m_156 != NULL) && (m_156 != t)))
    _fail(t);
  else
    m_156 = t;
  t = not_null(m_156);
  if(match_cons(t, sym__2))
    {
      n_156 = ATgetArgument(t, 0);
      o_156 = ATgetArgument(t, 1);
      t = r_156(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_121 (ATerm), ATerm q_121 (ATerm), ATerm t)
{
  ATerm r_52 = t;
  int s_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = p_121(t);
      ;
      LocalPopChoice(s_52);
    }
  else
    {
      t = r_52;
      {
        ATerm v_156 = NULL,w_156 = NULL,x_156 = NULL;
        ATerm c_157 (ATerm t)
        {
          ATerm y_156 = NULL,z_156 = NULL,a_157 = NULL;
          t = not_null(w_156);
          if(((y_156 != NULL) && (y_156 != t)))
            _fail(t);
          else
            y_156 = t;
          t = not_null(x_156);
          if(((z_156 != NULL) && (z_156 != t)))
            _fail(t);
          else
            z_156 = t;
          t = not_null(v_156);
          {
            ATerm b_157 = NULL;
            ATerm d_157 (ATerm t)
            {
              t = not_null(b_157);
              if(((a_157 != NULL) && (a_157 != t)))
                _fail(t);
              else
                a_157 = t;
              t = not_null(b_157);
              return(t);
            }
            t = not_null(z_156);
            t = foldr_2_0(p_121, q_121, t);
            if(((b_157 != NULL) && (b_157 != t)))
              _fail(t);
            else
              b_157 = t;
            t = d_157(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_156), not_null(a_157));
            t = q_121(t);
          }
          return(t);
        }
        if(((v_156 != NULL) && (v_156 != t)))
          _fail(t);
        else
          v_156 = t;
        t = not_null(v_156);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_156 = ATgetFirst((ATermList) t);
            x_156 = (ATerm) ATgetNext((ATermList) t);
            t = c_157(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm n_119 (ATerm), ATerm o_119 (ATerm), ATerm t)
{
  ATerm i_157 = NULL;
  ATerm q_157 (ATerm t)
  {
    ATerm j_157 = NULL,k_157 = NULL;
    t = not_null(i_157);
    if(((j_157 != NULL) && (j_157 != t)))
      _fail(t);
    else
      j_157 = t;
    t = not_null(i_157);
    {
      ATerm l_157 = NULL;
      ATerm r_157 (ATerm t)
      {
        ATerm m_157 = NULL,n_157 = NULL,o_157 = NULL,p_157 = NULL;
        ATerm s_157 (ATerm t)
        {
          t = not_null(p_157);
          if(((k_157 != NULL) && (k_157 != t)))
            _fail(t);
          else
            k_157 = t;
          t = not_null(n_157);
          return(t);
        }
        t = not_null(l_157);
        if(((m_157 != NULL) && (m_157 != t)))
          _fail(t);
        else
          m_157 = t;
        t = not_null(l_157);
        t = SSL_explode_term(not_null(m_157));
        if(((n_157 != NULL) && (n_157 != t)))
          _fail(t);
        else
          n_157 = t;
        t = not_null(n_157);
        if(match_cons(t, sym__2))
          {
            o_157 = ATgetArgument(t, 0);
            p_157 = ATgetArgument(t, 1);
            t = s_157(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(j_157);
      if(((l_157 != NULL) && (l_157 != t)))
        _fail(t);
      else
        l_157 = t;
      t = r_157(t);
      t = not_null(k_157);
      t = foldr_2_0(n_119, o_119, t);
    }
    return(t);
  }
  if(((i_157 != NULL) && (i_157 != t)))
    _fail(t);
  else
    i_157 = t;
  t = q_157(t);
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
    ATerm n_8 (ATerm t)
    {
      t = term_i_51;
      return(t);
    }
    t = crush_2_0(n_8, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm v_157 = NULL,w_157 = NULL,x_157 = NULL;
  ATerm a_158 (ATerm t)
  {
    ATerm y_157 = NULL,z_157 = NULL;
    t = not_null(w_157);
    if(((y_157 != NULL) && (y_157 != t)))
      _fail(t);
    else
      y_157 = t;
    t = not_null(x_157);
    if(((z_157 != NULL) && (z_157 != t)))
      _fail(t);
    else
      z_157 = t;
    t = not_null(v_157);
    {
      ATerm t_52;
      t_52 = t;
      {
        ATerm u_52 = t;
        int v_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(not_null(y_157), not_null(z_157));
            ;
            LocalPopChoice(v_52);
          }
        else
          {
            t = u_52;
            t = SSL_gtr(not_null(y_157), not_null(z_157));
          }
      }
      t = t_52;
    }
    return(t);
  }
  if(((v_157 != NULL) && (v_157 != t)))
    _fail(t);
  else
    v_157 = t;
  t = not_null(v_157);
  if(match_cons(t, sym__2))
    {
      w_157 = ATgetArgument(t, 0);
      x_157 = ATgetArgument(t, 1);
      t = a_158(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_158 = NULL;
  ATerm w_52 = t;
  int x_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_158 = NULL,f_158 = NULL,g_158 = NULL;
      ATerm h_158 (ATerm t)
      {
        t = not_null(f_158);
        if(((d_158 != NULL) && (d_158 != t)))
          _fail(t);
        else
          d_158 = t;
        t = not_null(g_158);
        if(((d_158 != NULL) && (d_158 != t)))
          _fail(t);
        else
          d_158 = t;
        t = not_null(e_158);
        return(t);
      }
      if(((e_158 != NULL) && (e_158 != t)))
        _fail(t);
      else
        e_158 = t;
      t = not_null(e_158);
      if(match_cons(t, sym__2))
        {
          f_158 = ATgetArgument(t, 0);
          g_158 = ATgetArgument(t, 1);
          t = h_158(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(x_52);
    }
  else
    {
      t = w_52;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_140 (ATerm), ATerm t)
{
  ATerm o_8 (ATerm t)
  {
    ATerm y_52;
    y_52 = t;
    {
      ATerm j_158 = NULL;
      ATerm k_158 = NULL;
      ATerm l_158 (ATerm t)
      {
        t = not_null(k_158);
        if(((j_158 != NULL) && (j_158 != t)))
          _fail(t);
        else
          j_158 = t;
        t = not_null(k_158);
        return(t);
      }
      t = term_u_12;
      t = get_config_0_0(t);
      if(((k_158 != NULL) && (k_158 != t)))
        _fail(t);
      else
        k_158 = t;
      t = l_158(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_158), term_k_48);
      t = geq_0_0(t);
    }
    t = y_52;
    t = f_140(t);
    return(t);
  }
  t = try_1_0(o_8, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm p_8 (ATerm t)
  {
    ATerm o_158 = NULL,q_158 = NULL;
    ATerm z_52;
    z_52 = t;
    {
      ATerm p_158 = NULL;
      ATerm s_158 (ATerm t)
      {
        t = not_null(p_158);
        if(((o_158 != NULL) && (o_158 != t)))
          _fail(t);
        else
          o_158 = t;
        t = not_null(p_158);
        return(t);
      }
      t = run_time_0_0(t);
      if(((p_158 != NULL) && (p_158 != t)))
        _fail(t);
      else
        p_158 = t;
      t = s_158(t);
    }
    t = z_52;
    {
      ATerm r_158 = NULL;
      ATerm t_158 (ATerm t)
      {
        t = not_null(r_158);
        if(((q_158 != NULL) && (q_158 != t)))
          _fail(t);
        else
          q_158 = t;
        t = not_null(r_158);
        return(t);
      }
      t = term_y_46;
      t = whoami_0_0(t);
      if(((r_158 != NULL) && (r_158 != t)))
        _fail(t);
      else
        r_158 = t;
      t = t_158(t);
      t = (ATerm) ATmakeAppl(sym__2, term_f_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_53), not_null(o_158)), term_a_53), not_null(q_158)));
      t = printnl_0_0(t);
    }
    return(t);
  }
  t = if_verbose1_1_0(p_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_i_51;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  ATerm y_158 = NULL;
  ATerm e_159 (ATerm t)
  {
    ATerm z_158 = NULL,a_159 = NULL,c_159 = NULL;
    t = not_null(y_158);
    if(((z_158 != NULL) && (z_158 != t)))
      _fail(t);
    else
      z_158 = t;
    t = not_null(y_158);
    {
      ATerm c_53;
      c_53 = t;
      {
        ATerm b_159 = NULL;
        ATerm f_159 (ATerm t)
        {
          t = not_null(b_159);
          if(((a_159 != NULL) && (a_159 != t)))
            _fail(t);
          else
            a_159 = t;
          t = not_null(b_159);
          return(t);
        }
        t = SSLgetAnnotations(not_null(z_158));
        if(((b_159 != NULL) && (b_159 != t)))
          _fail(t);
        else
          b_159 = t;
        t = f_159(t);
      }
      t = c_53;
      {
        ATerm d_159 = NULL;
        ATerm g_159 (ATerm t)
        {
          t = not_null(d_159);
          if(((c_159 != NULL) && (c_159 != t)))
            _fail(t);
          else
            c_159 = t;
          t = not_null(d_159);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(a_159));
        if(((d_159 != NULL) && (d_159 != t)))
          _fail(t);
        else
          d_159 = t;
        t = g_159(t);
        t = not_null(c_159);
      }
    }
    return(t);
  }
  if(((y_158 != NULL) && (y_158 != t)))
    _fail(t);
  else
    y_158 = t;
  t = not_null(y_158);
  if(match_cons(t, sym_Version_0))
    {
      t = e_159(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_132 (ATerm), ATerm t)
{
  ATerm d_53 = t;
  int e_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_53;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_53);
    }
  else
    {
      t = d_53;
      {
        ATerm q_8 (ATerm t)
        {
          ATerm g_53 = t;
          int h_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
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
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(j_53);
                  }
                else
                  {
                    t = i_53;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(q_8, t);
      }
    }
  t = x_132(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm i_159 = NULL;
  ATerm k_159 (ATerm t)
  {
    ATerm j_159 = NULL;
    t = not_null(i_159);
    if(((j_159 != NULL) && (j_159 != t)))
      _fail(t);
    else
      j_159 = t;
    t = not_null(i_159);
    t = SSL_table_create(not_null(j_159));
    return(t);
  }
  if(((i_159 != NULL) && (i_159 != t)))
    _fail(t);
  else
    i_159 = t;
  t = k_159(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm m_159 = NULL;
  ATerm o_159 (ATerm t)
  {
    ATerm n_159 = NULL;
    t = not_null(m_159);
    if(((n_159 != NULL) && (n_159 != t)))
      _fail(t);
    else
      n_159 = t;
    t = not_null(m_159);
    {
      ATerm k_53;
      k_53 = t;
      t = term_l_53;
      t = table_create_0_0(t);
      t = (ATerm) ATmakeAppl(sym__3, term_l_53, term_m_53, not_null(n_159));
      t = table_put_0_0(t);
      t = k_53;
    }
    return(t);
  }
  if(((m_159 != NULL) && (m_159 != t)))
    _fail(t);
  else
    m_159 = t;
  t = o_159(t);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm q_159 = NULL;
  ATerm s_159 (ATerm t)
  {
    ATerm r_159 = NULL;
    t = not_null(q_159);
    if(((r_159 != NULL) && (r_159 != t)))
      _fail(t);
    else
      r_159 = t;
    t = not_null(q_159);
    t = SSL_table_destroy(not_null(r_159));
    return(t);
  }
  if(((q_159 != NULL) && (q_159 != t)))
    _fail(t);
  else
    q_159 = t;
  t = s_159(t);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm u_159 = NULL;
  ATerm w_159 (ATerm t)
  {
    ATerm v_159 = NULL;
    t = not_null(u_159);
    if(((v_159 != NULL) && (v_159 != t)))
      _fail(t);
    else
      v_159 = t;
    t = not_null(u_159);
    t = SSL_exit(not_null(v_159));
    return(t);
  }
  if(((u_159 != NULL) && (u_159 != t)))
    _fail(t);
  else
    u_159 = t;
  t = w_159(t);
  return(t);
}
ATerm long_description_1_0 (ATerm a_136 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm z_114 (ATerm), ATerm t)
{
  ATerm x_159 (ATerm t)
  {
    ATerm n_53 = t;
    int o_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(o_53);
      }
    else
      {
        t = n_53;
        t = Cons_2_0(z_114, x_159, t);
      }
    return(t);
  }
  t = x_159(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_160 = NULL,f_160 = NULL,g_160 = NULL;
  ATerm p_160 (ATerm t)
  {
    ATerm h_160 = NULL,i_160 = NULL,j_160 = NULL;
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
    t = not_null(i_160);
    {
      ATerm p_53;
      p_53 = t;
      {
        ATerm k_160 = NULL,m_160 = NULL,o_160 = NULL;
        ATerm u_160 (ATerm t)
        {
          t = not_null(o_160);
          if(((j_160 != NULL) && (j_160 != t)))
            _fail(t);
          else
            j_160 = t;
          t = not_null(o_160);
          return(t);
        }
        ATerm q_53;
        q_53 = t;
        {
          ATerm l_160 = NULL;
          ATerm r_160 (ATerm t)
          {
            t = not_null(l_160);
            if(((k_160 != NULL) && (k_160 != t)))
              _fail(t);
            else
              k_160 = t;
            t = not_null(l_160);
            return(t);
          }
          t = g_0(t);
          if(((l_160 != NULL) && (l_160 != t)))
            _fail(t);
          else
            l_160 = t;
          t = r_160(t);
        }
        t = q_53;
        {
          ATerm n_160 = NULL;
          ATerm s_160 (ATerm t)
          {
            t = not_null(n_160);
            if(((m_160 != NULL) && (m_160 != t)))
              _fail(t);
            else
              m_160 = t;
            t = not_null(n_160);
            return(t);
          }
          t = not_null(h_160);
          t = e_0(t);
          if(((n_160 != NULL) && (n_160 != t)))
            _fail(t);
          else
            n_160 = t;
          t = s_160(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(k_160)), not_null(m_160));
          if(((o_160 != NULL) && (o_160 != t)))
            _fail(t);
          else
            o_160 = t;
          t = u_160(t);
        }
      }
      t = p_53;
      {
        ATerm r_8 (ATerm t)
        {
          t = not_null(j_160);
          return(t);
        }
        t = reverse_acc_2_0(e_0, r_8, t);
      }
    }
    return(t);
  }
  ATerm q_160 (ATerm t)
  {
    t = term_y_46;
    t = g_0(t);
    return(t);
  }
  if(((g_160 != NULL) && (g_160 != t)))
    _fail(t);
  else
    g_160 = t;
  t = not_null(g_160);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_160 = ATgetFirst((ATermList) t);
      f_160 = (ATerm) ATgetNext((ATermList) t);
      t = p_160(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = q_160(t);
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
  ATerm s_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, s_8, t);
  return(t);
}
ATerm short_description_1_0 (ATerm z_135 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm s_109 (ATerm), ATerm t)
{
  ATerm b_161 = NULL,c_161 = NULL;
  ATerm l_161 (ATerm t)
  {
    ATerm d_161 = NULL,e_161 = NULL,f_161 = NULL,h_161 = NULL;
    ATerm n_161 (ATerm t)
    {
      ATerm i_161 = NULL,j_161 = NULL;
      t = not_null(h_161);
      if(((i_161 != NULL) && (i_161 != t)))
        _fail(t);
      else
        i_161 = t;
      t = not_null(h_161);
      {
        ATerm k_161 = NULL;
        ATerm o_161 (ATerm t)
        {
          t = not_null(k_161);
          if(((j_161 != NULL) && (j_161 != t)))
            _fail(t);
          else
            j_161 = t;
          t = not_null(k_161);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_161)), not_null(f_161));
        if(((k_161 != NULL) && (k_161 != t)))
          _fail(t);
        else
          k_161 = t;
        t = o_161(t);
        t = not_null(j_161);
      }
      return(t);
    }
    t = not_null(b_161);
    if(((d_161 != NULL) && (d_161 != t)))
      _fail(t);
    else
      d_161 = t;
    t = not_null(c_161);
    if(((e_161 != NULL) && (e_161 != t)))
      _fail(t);
    else
      e_161 = t;
    t = not_null(b_161);
    {
      ATerm g_161 = NULL;
      ATerm m_161 (ATerm t)
      {
        t = not_null(g_161);
        if(((f_161 != NULL) && (f_161 != t)))
          _fail(t);
        else
          f_161 = t;
        t = not_null(g_161);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_161));
      if(((g_161 != NULL) && (g_161 != t)))
        _fail(t);
      else
        g_161 = t;
      t = m_161(t);
      t = not_null(e_161);
      t = s_109(t);
      if(((h_161 != NULL) && (h_161 != t)))
        _fail(t);
      else
        h_161 = t;
      t = n_161(t);
    }
    return(t);
  }
  if(((b_161 != NULL) && (b_161 != t)))
    _fail(t);
  else
    b_161 = t;
  t = not_null(b_161);
  if(match_cons(t, sym_Program_1))
    {
      c_161 = ATgetArgument(t, 0);
      t = l_161(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_161 = NULL;
  ATerm r_53 = t;
  int s_53 = stack_ptr;
  if((PushChoice() == 0))
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
      t = term_o_52;
      t = get_config_0_0(t);
      if(((u_161 != NULL) && (u_161 != t)))
        _fail(t);
      else
        u_161 = t;
      t = a_162(t);
      ;
      LocalPopChoice(s_53);
    }
  else
    {
      t = r_53;
      {
        ATerm t_8 (ATerm t)
        {
          ATerm u_8 (ATerm t)
          {
            ATerm v_161 = NULL;
            ATerm b_162 (ATerm t)
            {
              t = not_null(v_161);
              if(((t_161 != NULL) && (t_161 != t)))
                _fail(t);
              else
                t_161 = t;
              t = not_null(v_161);
              return(t);
            }
            if(((v_161 != NULL) && (v_161 != t)))
              _fail(t);
            else
              v_161 = t;
            t = b_162(t);
            return(t);
          }
          t = Program_1_0(u_8, t);
          return(t);
        }
        t = option_defined_1_0(t_8, t);
      }
    }
  {
    ATerm v_8 (ATerm t)
    {
      ATerm w_8 (ATerm t)
      {
        t = not_null(t_161);
        return(t);
      }
      t = short_description_1_0(w_8, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(v_8, t);
    t = term_t_53;
    t = echo_0_0(t);
    t = term_w_53;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm x_8 (ATerm t)
      {
        ATerm w_161 = NULL;
        ATerm x_161 = NULL;
        ATerm d_162 (ATerm t)
        {
          t = not_null(x_161);
          if(((w_161 != NULL) && (w_161 != t)))
            _fail(t);
          else
            w_161 = t;
          t = not_null(x_161);
          return(t);
        }
        if(((x_161 != NULL) && (x_161 != t)))
          _fail(t);
        else
          x_161 = t;
        t = d_162(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_161)), term_x_53);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(x_8, t);
      {
        ATerm y_8 (ATerm t)
        {
          ATerm y_161 = NULL;
          ATerm z_161 = NULL;
          ATerm e_162 (ATerm t)
          {
            t = not_null(z_161);
            if(((y_161 != NULL) && (y_161 != t)))
              _fail(t);
            else
              y_161 = t;
            t = not_null(z_161);
            return(t);
          }
          ATerm z_8 (ATerm t)
          {
            t = not_null(t_161);
            return(t);
          }
          t = long_description_1_0(z_8, t);
          if(((z_161 != NULL) && (z_161 != t)))
            _fail(t);
          else
            z_161 = t;
          t = e_162(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(y_161)), term_y_53);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(y_8, t);
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
  ATerm z_53 = t;
  int a_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(a_54);
    }
  else
    {
      t = z_53;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm t_109 (ATerm), ATerm t)
{
  ATerm k_162 = NULL,l_162 = NULL;
  ATerm v_162 (ATerm t)
  {
    ATerm m_162 = NULL,n_162 = NULL,o_162 = NULL,q_162 = NULL;
    ATerm x_162 (ATerm t)
    {
      ATerm r_162 = NULL,s_162 = NULL;
      t = not_null(q_162);
      if(((r_162 != NULL) && (r_162 != t)))
        _fail(t);
      else
        r_162 = t;
      t = not_null(q_162);
      {
        ATerm u_162 = NULL;
        ATerm y_162 (ATerm t)
        {
          t = not_null(u_162);
          if(((s_162 != NULL) && (s_162 != t)))
            _fail(t);
          else
            s_162 = t;
          t = not_null(u_162);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_162)), not_null(o_162));
        if(((u_162 != NULL) && (u_162 != t)))
          _fail(t);
        else
          u_162 = t;
        t = y_162(t);
        t = not_null(s_162);
      }
      return(t);
    }
    t = not_null(k_162);
    if(((m_162 != NULL) && (m_162 != t)))
      _fail(t);
    else
      m_162 = t;
    t = not_null(l_162);
    if(((n_162 != NULL) && (n_162 != t)))
      _fail(t);
    else
      n_162 = t;
    t = not_null(k_162);
    {
      ATerm p_162 = NULL;
      ATerm w_162 (ATerm t)
      {
        t = not_null(p_162);
        if(((o_162 != NULL) && (o_162 != t)))
          _fail(t);
        else
          o_162 = t;
        t = not_null(p_162);
        return(t);
      }
      t = SSLgetAnnotations(not_null(m_162));
      if(((p_162 != NULL) && (p_162 != t)))
        _fail(t);
      else
        p_162 = t;
      t = w_162(t);
      t = not_null(n_162);
      t = t_109(t);
      if(((q_162 != NULL) && (q_162 != t)))
        _fail(t);
      else
        q_162 = t;
      t = x_162(t);
    }
    return(t);
  }
  if(((k_162 != NULL) && (k_162 != t)))
    _fail(t);
  else
    k_162 = t;
  t = not_null(k_162);
  if(match_cons(t, sym_Undefined_1))
    {
      l_162 = ATgetArgument(t, 0);
      t = v_162(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm j_115 (ATerm), ATerm t)
{
  ATerm z_162 (ATerm t)
  {
    ATerm b_54 = t;
    int c_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(j_115, _id, t);
        ;
        LocalPopChoice(c_54);
      }
    else
      {
        t = b_54;
        t = Cons_2_0(_id, z_162, t);
      }
    return(t);
  }
  t = z_162(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm z_134 (ATerm), ATerm t)
{
  t = fetch_1_0(z_134, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm b_163 = NULL,c_163 = NULL,d_163 = NULL;
  if(((b_163 != NULL) && (b_163 != t)))
    _fail(t);
  else
    b_163 = t;
  t = not_null(b_163);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(b_163);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_163 = ATgetFirst((ATermList) t);
          d_163 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(b_163);
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
  ATerm d_54;
  d_54 = t;
  {
    ATerm g_163 = NULL;
    ATerm j_163 = NULL;
    ATerm l_163 (ATerm t)
    {
      t = not_null(j_163);
      if(((g_163 != NULL) && (g_163 != t)))
        _fail(t);
      else
        g_163 = t;
      t = not_null(j_163);
      return(t);
    }
    ATerm e_54 = t;
    int w_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(w_54);
      }
    else
      {
        t = e_54;
        {
          ATerm h_163 = NULL;
          ATerm i_163 = NULL;
          ATerm k_163 (ATerm t)
          {
            t = not_null(i_163);
            if(((h_163 != NULL) && (h_163 != t)))
              _fail(t);
            else
              h_163 = t;
            t = not_null(i_163);
            return(t);
          }
          if(((i_163 != NULL) && (i_163 != t)))
            _fail(t);
          else
            i_163 = t;
          t = k_163(t);
          t = (ATerm) ATinsert(ATempty, not_null(h_163));
        }
      }
    if(((j_163 != NULL) && (j_163 != t)))
      _fail(t);
    else
      j_163 = t;
    t = l_163(t);
    t = (ATerm) ATmakeAppl(sym__2, term_k_49, not_null(g_163));
    t = printnl_0_0(t);
  }
  t = d_54;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_52;
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
  ATerm x_54 = t;
  int y_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(y_54);
    }
  else
    {
      t = x_54;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  ATerm q_163 = NULL;
  ATerm w_163 (ATerm t)
  {
    ATerm r_163 = NULL,s_163 = NULL,u_163 = NULL;
    t = not_null(q_163);
    if(((r_163 != NULL) && (r_163 != t)))
      _fail(t);
    else
      r_163 = t;
    t = not_null(q_163);
    {
      ATerm z_54;
      z_54 = t;
      {
        ATerm t_163 = NULL;
        ATerm x_163 (ATerm t)
        {
          t = not_null(t_163);
          if(((s_163 != NULL) && (s_163 != t)))
            _fail(t);
          else
            s_163 = t;
          t = not_null(t_163);
          return(t);
        }
        t = SSLgetAnnotations(not_null(r_163));
        if(((t_163 != NULL) && (t_163 != t)))
          _fail(t);
        else
          t_163 = t;
        t = x_163(t);
      }
      t = z_54;
      {
        ATerm v_163 = NULL;
        ATerm y_163 (ATerm t)
        {
          t = not_null(v_163);
          if(((u_163 != NULL) && (u_163 != t)))
            _fail(t);
          else
            u_163 = t;
          t = not_null(v_163);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(s_163));
        if(((v_163 != NULL) && (v_163 != t)))
          _fail(t);
        else
          v_163 = t;
        t = y_163(t);
        t = not_null(u_163);
      }
    }
    return(t);
  }
  if(((q_163 != NULL) && (q_163 != t)))
    _fail(t);
  else
    q_163 = t;
  t = not_null(q_163);
  if(match_cons(t, sym_Help_0))
    {
      t = w_163(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1_0 (ATerm h_113 (ATerm), ATerm t)
{
  ATerm a_55 = t;
  int b_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_113(t);
      ;
      LocalPopChoice(b_55);
    }
  else
    {
      t = a_55;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_55 = t;
  int o_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_9 (ATerm t)
      {
        ATerm b_164 = NULL;
        if(((b_164 != NULL) && (b_164 != t)))
          _fail(t);
        else
          b_164 = t;
        t = not_null(b_164);
        if(match_string(t, "--about"))
          {
            t = not_null(b_164);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm b_9 (ATerm t)
      {
        t = term_r_56;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm c_9 (ATerm t)
      {
        t = term_s_56;
        return(t);
      }
      t = Option_3_0(a_9, b_9, c_9, t);
      ;
      LocalPopChoice(o_55);
    }
  else
    {
      t = c_55;
      {
        ATerm d_9 (ATerm t)
        {
          ATerm c_164 = NULL;
          if(((c_164 != NULL) && (c_164 != t)))
            _fail(t);
          else
            c_164 = t;
          t = not_null(c_164);
          if(match_string(t, "--version"))
            {
              t = not_null(c_164);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm e_9 (ATerm t)
        {
          t = term_r_56;
          t = set_config_0_0(t);
          t = term_u_56;
          t = set_config_0_0(t);
          t = term_v_56;
          return(t);
        }
        ATerm f_9 (ATerm t)
        {
          t = term_w_56;
          return(t);
        }
        t = Option_3_0(d_9, e_9, f_9, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm f_164 = NULL,g_164 = NULL,h_164 = NULL;
  ATerm k_164 (ATerm t)
  {
    ATerm i_164 = NULL,j_164 = NULL;
    t = not_null(g_164);
    if(((i_164 != NULL) && (i_164 != t)))
      _fail(t);
    else
      i_164 = t;
    t = not_null(h_164);
    if(((j_164 != NULL) && (j_164 != t)))
      _fail(t);
    else
      j_164 = t;
    t = not_null(f_164);
    t = SSL_table_get(not_null(i_164), not_null(j_164));
    return(t);
  }
  if(((f_164 != NULL) && (f_164 != t)))
    _fail(t);
  else
    f_164 = t;
  t = not_null(f_164);
  if(match_cons(t, sym__2))
    {
      g_164 = ATgetArgument(t, 0);
      h_164 = ATgetArgument(t, 1);
      t = k_164(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm o_164 = NULL,p_164 = NULL,q_164 = NULL,r_164 = NULL;
  ATerm x_164 (ATerm t)
  {
    ATerm s_164 = NULL,t_164 = NULL,u_164 = NULL;
    t = not_null(p_164);
    if(((t_164 != NULL) && (t_164 != t)))
      _fail(t);
    else
      t_164 = t;
    t = not_null(q_164);
    if(((u_164 != NULL) && (u_164 != t)))
      _fail(t);
    else
      u_164 = t;
    t = not_null(r_164);
    if(((s_164 != NULL) && (s_164 != t)))
      _fail(t);
    else
      s_164 = t;
    t = not_null(o_164);
    {
      ATerm x_56;
      x_56 = t;
      {
        ATerm v_164 = NULL;
        ATerm w_164 = NULL;
        ATerm y_164 (ATerm t)
        {
          t = not_null(w_164);
          if(((v_164 != NULL) && (v_164 != t)))
            _fail(t);
          else
            v_164 = t;
          t = not_null(w_164);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_164), not_null(u_164));
        {
          ATerm y_56 = t;
          int z_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(z_56);
            }
          else
            {
              t = y_56;
              t = (ATerm) ATempty;
            }
          if(((w_164 != NULL) && (w_164 != t)))
            _fail(t);
          else
            w_164 = t;
          t = y_164(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(t_164), not_null(u_164), (ATerm) ATinsert(CheckATermList(not_null(v_164)), not_null(s_164)));
        t = table_put_0_0(t);
      }
      t = x_56;
    }
    return(t);
  }
  if(((o_164 != NULL) && (o_164 != t)))
    _fail(t);
  else
    o_164 = t;
  t = not_null(o_164);
  if(match_cons(t, sym__3))
    {
      p_164 = ATgetArgument(t, 0);
      q_164 = ATgetArgument(t, 1);
      r_164 = ATgetArgument(t, 2);
      t = x_164(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm e_136 (ATerm), ATerm t)
{
  ATerm a_165 = NULL;
  ATerm b_165 = NULL;
  ATerm c_165 (ATerm t)
  {
    t = not_null(b_165);
    if(((a_165 != NULL) && (a_165 != t)))
      _fail(t);
    else
      a_165 = t;
    t = not_null(b_165);
    return(t);
  }
  t = term_y_46;
  t = e_136(t);
  if(((b_165 != NULL) && (b_165 != t)))
    _fail(t);
  else
    b_165 = t;
  t = c_165(t);
  t = (ATerm) ATmakeAppl(sym__3, term_u_53, term_v_53, not_null(a_165));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm h_165 = NULL,i_165 = NULL,j_165 = NULL;
  ATerm o_165 (ATerm t)
  {
    t = not_null(h_165);
    t = register_usage_1_0(d_0, t);
    return(t);
  }
  ATerm p_165 (ATerm t)
  {
    ATerm k_165 = NULL,l_165 = NULL,m_165 = NULL;
    t = not_null(i_165);
    if(((k_165 != NULL) && (k_165 != t)))
      _fail(t);
    else
      k_165 = t;
    t = not_null(j_165);
    if(((l_165 != NULL) && (l_165 != t)))
      _fail(t);
    else
      l_165 = t;
    t = not_null(h_165);
    {
      ATerm a_57;
      a_57 = t;
      t = not_null(k_165);
      t = a_0(t);
      t = a_57;
      {
        ATerm n_165 = NULL;
        ATerm q_165 (ATerm t)
        {
          t = not_null(n_165);
          if(((m_165 != NULL) && (m_165 != t)))
            _fail(t);
          else
            m_165 = t;
          t = not_null(n_165);
          return(t);
        }
        t = term_y_46;
        t = c_0(t);
        if(((n_165 != NULL) && (n_165 != t)))
          _fail(t);
        else
          n_165 = t;
        t = q_165(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(l_165)), not_null(m_165));
      }
    }
    return(t);
  }
  if(((h_165 != NULL) && (h_165 != t)))
    _fail(t);
  else
    h_165 = t;
  t = not_null(h_165);
  if(match_string(t, "register-usage-info"))
    {
      t = o_165(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_165 = ATgetFirst((ATermList) t);
          j_165 = (ATerm) ATgetNext((ATermList) t);
          t = p_165(t);
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
  ATerm g_9 (ATerm t)
  {
    ATerm s_165 = NULL;
    if(((s_165 != NULL) && (s_165 != t)))
      _fail(t);
    else
      s_165 = t;
    t = not_null(s_165);
    if(match_string(t, "--help"))
      {
        t = not_null(s_165);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(s_165);
          }
        else
          {
            if(match_string(t, "-?"))
              {
                t = not_null(s_165);
              }
            else
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_9 (ATerm t)
  {
    t = term_b_57;
    t = set_config_0_0(t);
    t = term_c_57;
    return(t);
  }
  ATerm i_9 (ATerm t)
  {
    t = term_d_57;
    return(t);
  }
  t = Option_3_0(g_9, h_9, i_9, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm v_165 = NULL,w_165 = NULL,x_165 = NULL;
  ATerm a_166 (ATerm t)
  {
    ATerm y_165 = NULL,z_165 = NULL;
    t = not_null(w_165);
    if(((y_165 != NULL) && (y_165 != t)))
      _fail(t);
    else
      y_165 = t;
    t = not_null(x_165);
    if(((z_165 != NULL) && (z_165 != t)))
      _fail(t);
    else
      z_165 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(z_165)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_165)));
    return(t);
  }
  if(((v_165 != NULL) && (v_165 != t)))
    _fail(t);
  else
    v_165 = t;
  t = not_null(v_165);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_165 = ATgetFirst((ATermList) t);
      x_165 = (ATerm) ATgetNext((ATermList) t);
      t = a_166(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_95 (ATerm), ATerm l_95 (ATerm), ATerm t)
{
  ATerm h_166 = NULL,i_166 = NULL,j_166 = NULL;
  ATerm v_166 (ATerm t)
  {
    ATerm k_166 = NULL,l_166 = NULL,m_166 = NULL,n_166 = NULL,p_166 = NULL;
    ATerm x_166 (ATerm t)
    {
      ATerm q_166 = NULL,r_166 = NULL;
      ATerm y_166 (ATerm t)
      {
        ATerm s_166 = NULL,t_166 = NULL;
        t = not_null(r_166);
        if(((s_166 != NULL) && (s_166 != t)))
          _fail(t);
        else
          s_166 = t;
        t = not_null(r_166);
        {
          ATerm u_166 = NULL;
          ATerm z_166 (ATerm t)
          {
            t = not_null(u_166);
            if(((t_166 != NULL) && (t_166 != t)))
              _fail(t);
            else
              t_166 = t;
            t = not_null(u_166);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(s_166)), not_null(q_166)), not_null(n_166));
          if(((u_166 != NULL) && (u_166 != t)))
            _fail(t);
          else
            u_166 = t;
          t = z_166(t);
          t = not_null(t_166);
        }
        return(t);
      }
      t = not_null(p_166);
      if(((q_166 != NULL) && (q_166 != t)))
        _fail(t);
      else
        q_166 = t;
      t = not_null(m_166);
      t = l_95(t);
      if(((r_166 != NULL) && (r_166 != t)))
        _fail(t);
      else
        r_166 = t;
      t = y_166(t);
      return(t);
    }
    t = not_null(h_166);
    if(((k_166 != NULL) && (k_166 != t)))
      _fail(t);
    else
      k_166 = t;
    t = not_null(i_166);
    if(((l_166 != NULL) && (l_166 != t)))
      _fail(t);
    else
      l_166 = t;
    t = not_null(j_166);
    if(((m_166 != NULL) && (m_166 != t)))
      _fail(t);
    else
      m_166 = t;
    t = not_null(h_166);
    {
      ATerm o_166 = NULL;
      ATerm w_166 (ATerm t)
      {
        t = not_null(o_166);
        if(((n_166 != NULL) && (n_166 != t)))
          _fail(t);
        else
          n_166 = t;
        t = not_null(o_166);
        return(t);
      }
      t = SSLgetAnnotations(not_null(k_166));
      if(((o_166 != NULL) && (o_166 != t)))
        _fail(t);
      else
        o_166 = t;
      t = w_166(t);
      t = not_null(l_166);
      t = k_95(t);
      if(((p_166 != NULL) && (p_166 != t)))
        _fail(t);
      else
        p_166 = t;
      t = x_166(t);
    }
    return(t);
  }
  if(((h_166 != NULL) && (h_166 != t)))
    _fail(t);
  else
    h_166 = t;
  t = not_null(h_166);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_166 = ATgetFirst((ATermList) t);
      j_166 = (ATerm) ATgetNext((ATermList) t);
      t = v_166(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm e_167 = NULL;
  ATerm k_167 (ATerm t)
  {
    ATerm f_167 = NULL,g_167 = NULL,i_167 = NULL;
    t = not_null(e_167);
    if(((f_167 != NULL) && (f_167 != t)))
      _fail(t);
    else
      f_167 = t;
    t = not_null(e_167);
    {
      ATerm e_57;
      e_57 = t;
      {
        ATerm h_167 = NULL;
        ATerm l_167 (ATerm t)
        {
          t = not_null(h_167);
          if(((g_167 != NULL) && (g_167 != t)))
            _fail(t);
          else
            g_167 = t;
          t = not_null(h_167);
          return(t);
        }
        t = SSLgetAnnotations(not_null(f_167));
        if(((h_167 != NULL) && (h_167 != t)))
          _fail(t);
        else
          h_167 = t;
        t = l_167(t);
      }
      t = e_57;
      {
        ATerm j_167 = NULL;
        ATerm m_167 (ATerm t)
        {
          t = not_null(j_167);
          if(((i_167 != NULL) && (i_167 != t)))
            _fail(t);
          else
            i_167 = t;
          t = not_null(j_167);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(g_167));
        if(((j_167 != NULL) && (j_167 != t)))
          _fail(t);
        else
          j_167 = t;
        t = m_167(t);
        t = not_null(i_167);
      }
    }
    return(t);
  }
  if(((e_167 != NULL) && (e_167 != t)))
    _fail(t);
  else
    e_167 = t;
  t = not_null(e_167);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_167(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm p_167 = NULL,q_167 = NULL,r_167 = NULL;
  ATerm u_167 (ATerm t)
  {
    ATerm s_167 = NULL,t_167 = NULL;
    t = not_null(q_167);
    if(((s_167 != NULL) && (s_167 != t)))
      _fail(t);
    else
      s_167 = t;
    t = not_null(r_167);
    if(((t_167 != NULL) && (t_167 != t)))
      _fail(t);
    else
      t_167 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_d_49, not_null(s_167), not_null(t_167));
    t = table_put_0_0(t);
    return(t);
  }
  if(((p_167 != NULL) && (p_167 != t)))
    _fail(t);
  else
    p_167 = t;
  t = not_null(p_167);
  if(match_cons(t, sym__2))
    {
      q_167 = ATgetArgument(t, 0);
      r_167 = ATgetArgument(t, 1);
      t = u_167(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_136 (ATerm), ATerm t)
{
  ATerm f_57;
  f_57 = t;
  {
    ATerm j_9 (ATerm t)
    {
      t = term_g_57;
      t = c_136(t);
      return(t);
    }
    t = try_1_0(j_9, t);
  }
  t = f_57;
  {
    ATerm k_9 (ATerm t)
    {
      ATerm z_167 = NULL;
      ATerm g_59;
      g_59 = t;
      {
        ATerm x_167 = NULL;
        ATerm y_167 = NULL;
        ATerm b_168 (ATerm t)
        {
          t = not_null(y_167);
          if(((x_167 != NULL) && (x_167 != t)))
            _fail(t);
          else
            x_167 = t;
          t = not_null(y_167);
          return(t);
        }
        if(((y_167 != NULL) && (y_167 != t)))
          _fail(t);
        else
          y_167 = t;
        t = b_168(t);
        t = (ATerm) ATmakeAppl(sym__2, term_o_52, not_null(x_167));
        t = set_config_0_0(t);
      }
      t = g_59;
      {
        ATerm a_168 = NULL;
        ATerm c_168 (ATerm t)
        {
          t = not_null(a_168);
          if(((z_167 != NULL) && (z_167 != t)))
            _fail(t);
          else
            z_167 = t;
          t = not_null(a_168);
          return(t);
        }
        if(((a_168 != NULL) && (a_168 != t)))
          _fail(t);
        else
          a_168 = t;
        t = c_168(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_167));
      }
      return(t);
    }
    ATerm l_9 (ATerm t)
    {
      ATerm h_59 = t;
      int i_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_59 = t;
          int k_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(k_59);
            }
          else
            {
              t = j_59;
              t = c_136(t);
              t = Cons_2_0(_id, l_9, t);
            }
          ;
          LocalPopChoice(i_59);
        }
      else
        {
          t = h_59;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(k_9, l_9, t);
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm g_168 = NULL,h_168 = NULL,i_168 = NULL;
  ATerm l_59;
  l_59 = t;
  {
    ATerm j_168 = NULL,k_168 = NULL,l_168 = NULL,m_168 = NULL;
    ATerm n_168 (ATerm t)
    {
      t = not_null(k_168);
      if(((g_168 != NULL) && (g_168 != t)))
        _fail(t);
      else
        g_168 = t;
      t = not_null(l_168);
      if(((h_168 != NULL) && (h_168 != t)))
        _fail(t);
      else
        h_168 = t;
      t = not_null(m_168);
      if(((i_168 != NULL) && (i_168 != t)))
        _fail(t);
      else
        i_168 = t;
      t = not_null(j_168);
      t = SSL_table_put(not_null(g_168), not_null(h_168), not_null(i_168));
      return(t);
    }
    if(((j_168 != NULL) && (j_168 != t)))
      _fail(t);
    else
      j_168 = t;
    t = not_null(j_168);
    if(match_cons(t, sym__3))
      {
        k_168 = ATgetArgument(t, 0);
        l_168 = ATgetArgument(t, 1);
        m_168 = ATgetArgument(t, 2);
        t = n_168(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = l_59;
  return(t);
}
ATerm parse_options_1_0 (ATerm b_136 (ATerm), ATerm t)
{
  ATerm p_168 = NULL;
  ATerm m_59;
  m_59 = t;
  t = term_n_59;
  t = table_put_0_0(t);
  t = m_59;
  {
    ATerm m_9 (ATerm t)
    {
      ATerm o_59 = t;
      int p_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_136(t);
          ;
          LocalPopChoice(p_59);
        }
      else
        {
          t = o_59;
          {
            ATerm q_59 = t;
            int r_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(r_59);
              }
            else
              {
                t = q_59;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_9, t);
    {
      ATerm n_9 (ATerm t)
      {
        ATerm s_59 = t;
        int t_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_59;
            u_59 = t;
            {
              ATerm v_59 = t;
              int w_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_f_53;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(w_59);
                }
              else
                {
                  t = v_59;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = u_59;
            t = system_usage_0_0(t);
            t = term_i_51;
            t = exit_0_0(t);
            ;
            LocalPopChoice(t_59);
          }
        else
          {
            t = s_59;
            {
              ATerm x_59 = t;
              int y_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_59;
                  z_59 = t;
                  t = term_q_56;
                  t = get_config_0_0(t);
                  t = z_59;
                  t = system_about_0_0(t);
                  t = term_i_51;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(y_59);
                }
              else
                {
                  t = x_59;
                  {
                    ATerm o_9 (ATerm t)
                    {
                      ATerm p_9 (ATerm t)
                      {
                        ATerm q_168 = NULL;
                        ATerm r_168 (ATerm t)
                        {
                          t = not_null(q_168);
                          if(((p_168 != NULL) && (p_168 != t)))
                            _fail(t);
                          else
                            p_168 = t;
                          t = not_null(q_168);
                          return(t);
                        }
                        if(((q_168 != NULL) && (q_168 != t)))
                          _fail(t);
                        else
                          q_168 = t;
                        t = r_168(t);
                        return(t);
                      }
                      t = Undefined_1_0(p_9, t);
                      return(t);
                    }
                    t = option_defined_1_0(o_9, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_f_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_168)), term_a_60));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_k_48;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(n_9, t);
      {
        ATerm b_60;
        b_60 = t;
        t = term_u_53;
        t = table_destroy_0_0(t);
        t = b_60;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_132 (ATerm), ATerm a_133 (ATerm), ATerm b_133 (ATerm), ATerm c_133 (ATerm), ATerm t)
{
  t = parse_options_1_0(z_132, t);
  t = store_options_0_0(t);
  t = b_133(t);
  {
    ATerm c_60 = t;
    int d_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_133, t);
        ;
        LocalPopChoice(d_60);
      }
    else
      {
        t = c_60;
        {
          ATerm e_60 = t;
          int f_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_133(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_60);
            }
          else
            {
              t = e_60;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm o_132 (ATerm), ATerm p_132 (ATerm), ATerm q_132 (ATerm), ATerm r_132 (ATerm), ATerm t)
{
  ATerm n_11 (ATerm t)
  {
    ATerm g_60 = t;
    int h_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_132(t);
        ;
        LocalPopChoice(h_60);
      }
    else
      {
        t = g_60;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm o_11 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(o_132, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(n_11, q_132, r_132, o_11, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm i_132 (ATerm), ATerm j_132 (ATerm), ATerm k_132 (ATerm), ATerm t)
{
  ATerm p_11 (ATerm t)
  {
    ATerm q_11 (ATerm t)
    {
      ATerm i_60;
      i_60 = t;
      {
        ATerm t_168 = NULL;
        ATerm u_168 = NULL;
        ATerm v_168 (ATerm t)
        {
          t = not_null(u_168);
          if(((t_168 != NULL) && (t_168 != t)))
            _fail(t);
          else
            t_168 = t;
          t = not_null(u_168);
          return(t);
        }
        t = term_o_52;
        t = get_config_0_0(t);
        if(((u_168 != NULL) && (u_168 != t)))
          _fail(t);
        else
          u_168 = t;
        t = v_168(t);
        t = (ATerm) ATmakeAppl(sym__2, term_f_12, (ATerm) ATinsert(ATempty, not_null(t_168)));
        t = printnl_0_0(t);
      }
      t = i_60;
      return(t);
    }
    t = if_verbose2_1_0(q_11, t);
    return(t);
  }
  t = iowrap_4_0(i_132, j_132, k_132, p_11, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm g_132 (ATerm), ATerm h_132 (ATerm), ATerm t)
{
  t = iowrap_3_0(g_132, h_132, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm d_132 (ATerm), ATerm t)
{
  ATerm a_12 (ATerm t)
  {
    t = _2_0(_id, d_132, t);
    return(t);
  }
  t = iowrap_2_0(a_12, _fail, t);
  return(t);
}
ATerm fusion_0_0 (ATerm t)
{
  ATerm b_12 (ATerm t)
  {
    ATerm j_60 = t;
    int k_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = declare_inline_rules_0_0(t);
        t = check_library_definitions_0_0(t);
        t = alltd_1_0(innermost_fusion_0_0, t);
        ;
        LocalPopChoice(k_60);
      }
    else
      {
        t = j_60;
        {
          ATerm c_12 (ATerm t)
          {
            ATerm d_12 (ATerm t)
            {
              t = term_l_60;
              return(t);
            }
            t = say_1_0(d_12, t);
            return(t);
          }
          t = if_verbose2_1_0(c_12, t);
        }
      }
    return(t);
  }
  t = iowrap_1_0(b_12, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = fusion_0_0(t);
  return(t);
}
